
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

uint64_t x1 = UINT64_MAX;
int16_t x4 = INT16_MAX;
static int16_t x10 = 186;
volatile int8_t x12 = INT8_MAX;
static int32_t x17 = -816293;
int32_t t4 = 902063262;
volatile uint32_t x30 = 5096U;
int64_t x33 = INT64_MIN;
volatile uint64_t x34 = 1287855455729LLU;
volatile int32_t t6 = 147181636;
int8_t x38 = INT8_MAX;
int8_t x40 = INT8_MIN;
int32_t x53 = INT32_MIN;
int16_t x56 = 23;
uint16_t x63 = UINT16_MAX;
int32_t t12 = 11;
uint32_t x70 = UINT32_MAX;
uint8_t x71 = 7U;
int8_t x73 = INT8_MIN;
int8_t x76 = -1;
int8_t x78 = INT8_MAX;
static volatile int16_t x81 = 506;
volatile int16_t x85 = -15;
int64_t x86 = -1LL;
int16_t x88 = INT16_MAX;
uint8_t x90 = 61U;
uint16_t x100 = 1343U;
uint16_t x101 = 6758U;
uint8_t x108 = 120U;
uint16_t x116 = 437U;
int8_t x117 = 1;
volatile uint64_t t28 = 1LLU;
uint8_t x129 = 78U;
static volatile int32_t t29 = -4081;
int32_t x138 = 6364;
static uint32_t x146 = UINT32_MAX;
uint16_t x149 = 7U;
static int8_t x152 = INT8_MAX;
int8_t x154 = INT8_MAX;
static volatile int8_t x155 = 0;
volatile int32_t t34 = -287659097;
uint64_t x160 = 132259472679LLU;
int8_t x161 = -2;
static uint16_t x164 = 36U;
volatile int32_t t36 = -55937637;
uint64_t x167 = UINT64_MAX;
volatile int32_t t37 = 634437;
volatile uint16_t x172 = 3439U;
volatile int32_t t38 = -6;
static int64_t x173 = -1LL;
int16_t x174 = INT16_MIN;
int8_t x175 = INT8_MIN;
uint64_t x176 = 0LLU;
volatile int16_t x179 = 1;
volatile uint64_t x182 = UINT64_MAX;
int16_t x186 = -118;
int8_t x189 = 1;
volatile uint16_t x192 = 2U;
uint64_t x200 = UINT64_MAX;
volatile int32_t t45 = 261778617;
static int32_t x210 = 27702;
int8_t x216 = INT8_MIN;
int64_t x225 = INT64_MAX;
int64_t x230 = -1LL;
static volatile int8_t x239 = INT8_MIN;
static int16_t x243 = 3763;
int8_t x244 = INT8_MIN;
volatile int16_t x246 = INT16_MIN;
int32_t x247 = INT32_MIN;
uint64_t x253 = 42LLU;
uint8_t x258 = 0U;
int8_t x263 = -1;
static uint32_t x267 = 965373U;
uint64_t x271 = 22629699LLU;
int16_t x280 = INT16_MIN;
volatile uint8_t x282 = 28U;
uint8_t x287 = 6U;
int16_t x288 = INT16_MAX;
int64_t x297 = INT64_MAX;
int8_t x307 = INT8_MIN;
volatile int8_t x328 = INT8_MAX;
volatile uint8_t x333 = 115U;
volatile int16_t x335 = INT16_MAX;
uint64_t x336 = 936709LLU;
static uint64_t x345 = 543423413976LLU;
volatile int64_t x346 = INT64_MAX;
volatile int64_t t81 = -73213007303424718LL;
uint32_t x357 = UINT32_MAX;
volatile int32_t t82 = 196685;
volatile uint32_t x367 = UINT32_MAX;
volatile int32_t t85 = 20;
uint16_t x378 = 1U;
uint64_t x382 = UINT64_MAX;
int64_t x384 = -1LL;
volatile int64_t t87 = -25661LL;
static int8_t x402 = INT8_MAX;
int64_t x407 = 4246423734LL;
int8_t x412 = INT8_MIN;
int8_t x413 = -1;
int8_t x414 = INT8_MIN;
static int64_t x415 = INT64_MIN;
int64_t x416 = -17442LL;
volatile uint64_t t95 = 14LLU;
uint8_t x422 = UINT8_MAX;
volatile uint32_t x437 = 119U;
volatile uint32_t x440 = UINT32_MAX;
uint32_t x443 = 1135460U;
int32_t x444 = 471;
static int32_t t101 = 29175420;
int8_t x450 = INT8_MIN;
int16_t x454 = -1;
int64_t x455 = -1LL;
int8_t x458 = -1;
uint8_t x461 = UINT8_MAX;
static uint64_t x463 = 9046283504590LLU;
volatile int16_t x471 = INT16_MAX;
static int32_t x483 = INT32_MIN;
int16_t x487 = -9513;
static volatile int8_t x491 = INT8_MIN;
volatile uint64_t x495 = 22LLU;
int64_t x501 = INT64_MIN;
int32_t x502 = 1323878;
uint32_t x503 = UINT32_MAX;
static int16_t x507 = -1;
int32_t x510 = -58;
int32_t t118 = -4063;
static uint64_t x513 = UINT64_MAX;
int64_t x515 = INT64_MAX;
volatile int32_t t119 = 736;
int64_t x519 = INT64_MIN;
static int32_t t120 = -1;
uint8_t x523 = 3U;
int32_t x526 = -1;
uint8_t x527 = 0U;
uint32_t x531 = 256116446U;
int32_t x537 = 302571426;
int16_t x540 = 0;
int8_t x543 = 1;
volatile uint16_t x544 = 2U;
volatile int32_t t126 = 44;
uint8_t x548 = UINT8_MAX;
int32_t t127 = -125;
volatile int16_t x549 = INT16_MIN;
int16_t x555 = 5;
static uint32_t t129 = 6447885U;
volatile int32_t x561 = -1;
int8_t x563 = 14;
int32_t t131 = -219518;
uint64_t t132 = 3LLU;
volatile uint64_t x570 = 24312400LLU;
int32_t x571 = INT32_MIN;
uint64_t x575 = 97980074LLU;
int16_t x584 = 1153;
int16_t x593 = 2;
int32_t t139 = -213;
uint8_t x604 = UINT8_MAX;
int16_t x608 = INT16_MAX;
int16_t x614 = INT16_MIN;
uint32_t x616 = UINT32_MAX;
uint16_t x617 = UINT16_MAX;
int32_t x618 = -1;
uint64_t x620 = 36169561350496LLU;
int64_t x622 = INT64_MIN;
uint64_t t145 = 12469176LLU;
int64_t x629 = -1LL;
int32_t t147 = -124607627;
static uint8_t x639 = UINT8_MAX;
volatile int64_t x651 = -1LL;
volatile uint32_t x655 = UINT32_MAX;
static volatile int64_t x666 = -15709513748467LL;
static int32_t t155 = 388311284;
uint16_t x687 = 383U;
static int64_t t159 = -271999528109235869LL;
int8_t x698 = INT8_MIN;
int32_t t162 = -90918066;
uint64_t x701 = 807LLU;
uint64_t x704 = UINT64_MAX;
volatile uint64_t t163 = 1LLU;
int32_t x706 = 194315;
static uint32_t x707 = 1319052202U;
int64_t x708 = -1LL;
static int64_t t168 = -344498609781LL;
int8_t x732 = -1;
int8_t x736 = 3;
uint8_t x737 = 3U;
volatile uint32_t x738 = UINT32_MAX;
int8_t x742 = INT8_MIN;
static int16_t x744 = INT16_MIN;
int32_t t172 = 0;
static int16_t x746 = INT16_MAX;
int64_t t173 = -36511754LL;
static volatile uint32_t t174 = 59660953U;
int64_t x756 = 7050623487LL;
int32_t t178 = 1044107;
static int64_t x774 = INT64_MIN;
static uint32_t x776 = 45139U;
uint16_t x781 = 3U;
volatile uint32_t t181 = 111U;
static volatile int32_t x786 = INT32_MIN;
static volatile int32_t t183 = 1;
int16_t x793 = INT16_MAX;
static int32_t x801 = -1;
volatile int32_t t185 = 11;
int32_t x805 = INT32_MAX;
int64_t t187 = 129426688585448710LL;
int32_t x818 = 3;
volatile uint64_t x822 = 2683132761903659LLU;
int32_t x823 = 10733;
volatile uint32_t t189 = 997249162U;
int16_t x832 = 11;
int16_t x836 = INT16_MIN;
volatile int32_t t192 = 19451;
int8_t x847 = 1;
static volatile int8_t x848 = -1;
uint16_t x851 = 209U;
int32_t x855 = INT32_MAX;
static volatile int32_t t197 = 15;
static int32_t t198 = -294891121;


void f0(void) {
    	volatile uint64_t x2 = 3631344LLU;
	volatile uint8_t x3 = 1U;
	int32_t t0 = -8371199;

    t0 = (((x1&x2)<=x3)-x4);

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 29U;
	int32_t x11 = -47;
	int32_t t1 = -19926726;

    t1 = (((x9&x10)<=x11)-x12);

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 59U;
	volatile uint8_t x14 = 16U;
	int16_t x15 = INT16_MIN;
	volatile int64_t x16 = -1LL;
	int64_t t2 = -320657806211LL;

    t2 = (((x13&x14)<=x15)-x16);

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x18 = 0U;
	static uint32_t x19 = 478584U;
	static uint32_t x20 = 215977513U;
	uint32_t t3 = 64732U;

    t3 = (((x17&x18)<=x19)-x20);

    if (t3 != 4078989784U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = UINT64_MAX;
	int32_t x26 = -21896002;
	volatile int32_t x27 = 2696234;
	volatile uint16_t x28 = 7213U;

    t4 = (((x25&x26)<=x27)-x28);

    if (t4 != -7213) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -1;
	volatile int32_t t5 = -26;

    t5 = (((x29&x30)<=x31)-x32);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x35 = 3U;
	int8_t x36 = INT8_MAX;

    t6 = (((x33&x34)<=x35)-x36);

    if (t6 != -126) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x37 = UINT64_MAX;
	int32_t x39 = INT32_MAX;
	volatile int32_t t7 = 3;

    t7 = (((x37&x38)<=x39)-x40);

    if (t7 != 129) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x41 = UINT64_MAX;
	static uint8_t x42 = 0U;
	int64_t x43 = INT64_MIN;
	int64_t x44 = 3814875146LL;
	int64_t t8 = -127855LL;

    t8 = (((x41&x42)<=x43)-x44);

    if (t8 != -3814875145LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MAX;
	static uint16_t x47 = 57U;
	int16_t x48 = 215;
	static volatile int32_t t9 = -1003428923;

    t9 = (((x45&x46)<=x47)-x48);

    if (t9 != -215) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x49 = -255286736;
	uint32_t x50 = 18424390U;
	volatile int64_t x51 = 79459228835LL;
	static int32_t x52 = INT32_MAX;
	static volatile int32_t t10 = -23586;

    t10 = (((x49&x50)<=x51)-x52);

    if (t10 != -2147483646) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = INT8_MIN;
	uint64_t x55 = 34823849LLU;
	int32_t t11 = 1033859003;

    t11 = (((x53&x54)<=x55)-x56);

    if (t11 != -23) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x61 = 14U;
	static int32_t x62 = INT32_MAX;
	int16_t x64 = INT16_MIN;

    t12 = (((x61&x62)<=x63)-x64);

    if (t12 != 32769) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x65 = -1;
	volatile uint64_t x66 = 1967968091965875611LLU;
	int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 935U;
	volatile uint32_t t13 = 3153596U;

    t13 = (((x65&x66)<=x67)-x68);

    if (t13 != 4294966362U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x69 = INT32_MAX;
	int8_t x72 = 0;
	static volatile int32_t t14 = -2506;

    t14 = (((x69&x70)<=x71)-x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x74 = -1;
	int64_t x75 = INT64_MAX;
	volatile int32_t t15 = -606;

    t15 = (((x73&x74)<=x75)-x76);

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -130;
	static int32_t x79 = INT32_MAX;
	static int8_t x80 = -50;
	int32_t t16 = -136706;

    t16 = (((x77&x78)<=x79)-x80);

    if (t16 != 51) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x82 = -482024705;
	static int32_t x83 = 194501349;
	uint32_t x84 = 248U;
	volatile uint32_t t17 = 224168U;

    t17 = (((x81&x82)<=x83)-x84);

    if (t17 != 4294967049U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x87 = 21265579897LLU;
	int32_t t18 = -17;

    t18 = (((x85&x86)<=x87)-x88);

    if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = INT64_MIN;
	uint8_t x91 = 0U;
	int16_t x92 = INT16_MIN;
	volatile int32_t t19 = 238951736;

    t19 = (((x89&x90)<=x91)-x92);

    if (t19 != 32769) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = -1LL;
	uint16_t x94 = UINT16_MAX;
	volatile int16_t x95 = -1;
	uint16_t x96 = UINT16_MAX;
	static int32_t t20 = -2252;

    t20 = (((x93&x94)<=x95)-x96);

    if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x97 = INT64_MIN;
	static int16_t x98 = INT16_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	int32_t t21 = 4;

    t21 = (((x97&x98)<=x99)-x100);

    if (t21 != -1342) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x102 = 13378U;
	int32_t x103 = INT32_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t22 = 58070388;

    t22 = (((x101&x102)<=x103)-x104);

    if (t22 != 32769) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = UINT32_MAX;
	int8_t x106 = -1;
	static int8_t x107 = -19;
	static int32_t t23 = -105121;

    t23 = (((x105&x106)<=x107)-x108);

    if (t23 != -120) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x111 = -470;
	static int32_t x112 = -1;
	static volatile int32_t t24 = 3889;

    t24 = (((x109&x110)<=x111)-x112);

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = 28LL;
	int8_t x115 = INT8_MAX;
	volatile int32_t t25 = 5171;

    t25 = (((x113&x114)<=x115)-x116);

    if (t25 != -436) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x118 = -1;
	int64_t x119 = -1LL;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t26 = 38280405;

    t26 = (((x117&x118)<=x119)-x120);

    if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x121 = 1;
	volatile uint32_t x122 = 1573U;
	static int8_t x123 = -1;
	int32_t x124 = -1;
	int32_t t27 = 369354524;

    t27 = (((x121&x122)<=x123)-x124);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x125 = 1210;
	int32_t x126 = -1;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = UINT64_MAX;

    t28 = (((x125&x126)<=x127)-x128);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x130 = -214939LL;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;

    t29 = (((x129&x130)<=x131)-x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x137 = -16626494LL;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = 0U;
	int32_t t30 = -446259880;

    t30 = (((x137&x138)<=x139)-x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 18488U;
	static volatile int8_t x142 = INT8_MAX;
	uint16_t x143 = 22299U;
	uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t31 = 6384LLU;

    t31 = (((x141&x142)<=x143)-x144);

    if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = INT16_MAX;
	static int64_t x147 = -1LL;
	uint64_t x148 = 4139288LLU;
	volatile uint64_t t32 = 94LLU;

    t32 = (((x145&x146)<=x147)-x148);

    if (t32 != 18446744073705412328LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x150 = 1U;
	int8_t x151 = INT8_MIN;
	int32_t t33 = 48;

    t33 = (((x149&x150)<=x151)-x152);

    if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = -1LL;
	int32_t x156 = INT32_MAX;

    t34 = (((x153&x154)<=x155)-x156);

    if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	int32_t x159 = -277406459;
	static uint64_t t35 = 691LLU;

    t35 = (((x157&x158)<=x159)-x160);

    if (t35 != 18446743941450078937LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x162 = INT32_MAX;
	static uint8_t x163 = 9U;

    t36 = (((x161&x162)<=x163)-x164);

    if (t36 != -36) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = 2U;
	static uint8_t x166 = 1U;
	volatile uint16_t x168 = UINT16_MAX;

    t37 = (((x165&x166)<=x167)-x168);

    if (t37 != -65534) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = 246297443634122806LL;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = 41091LLU;

    t38 = (((x169&x170)<=x171)-x172);

    if (t38 != -3439) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t t39 = 49406169LLU;

    t39 = (((x173&x174)<=x175)-x176);

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x177 = 918507677133LL;
	volatile int32_t x178 = -4717957;
	int16_t x180 = 1683;
	static volatile int32_t t40 = 769526;

    t40 = (((x177&x178)<=x179)-x180);

    if (t40 != -1683) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x181 = INT8_MIN;
	static uint32_t x183 = 1431U;
	int32_t x184 = -2;
	volatile int32_t t41 = -28;

    t41 = (((x181&x182)<=x183)-x184);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x185 = -1;
	static int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MAX;
	int64_t t42 = 237899656853LL;

    t42 = (((x185&x186)<=x187)-x188);

    if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x190 = -1;
	static uint32_t x191 = UINT32_MAX;
	volatile int32_t t43 = -1;

    t43 = (((x189&x190)<=x191)-x192);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x197 = INT8_MIN;
	int64_t x198 = -897963948209030LL;
	static uint64_t x199 = 2184063253922LLU;
	volatile uint64_t t44 = 2024746LLU;

    t44 = (((x197&x198)<=x199)-x200);

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x201 = INT16_MAX;
	uint64_t x202 = 44570LLU;
	static volatile int8_t x203 = INT8_MAX;
	int32_t x204 = -1;

    t45 = (((x201&x202)<=x203)-x204);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = 9126;
	uint64_t x206 = 34274415612535LLU;
	int32_t x207 = 126321699;
	int8_t x208 = 0;
	volatile int32_t t46 = 1468;

    t46 = (((x205&x206)<=x207)-x208);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x209 = -4415928868LL;
	volatile int32_t x211 = -1960;
	int8_t x212 = INT8_MAX;
	volatile int32_t t47 = -2661;

    t47 = (((x209&x210)<=x211)-x212);

    if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x213 = INT64_MIN;
	uint16_t x214 = 61U;
	static volatile int32_t x215 = 13499875;
	static int32_t t48 = -63891;

    t48 = (((x213&x214)<=x215)-x216);

    if (t48 != 129) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = 3861397;
	volatile int8_t x218 = INT8_MAX;
	int16_t x219 = -7;
	static int8_t x220 = INT8_MIN;
	static int32_t t49 = 1397439;

    t49 = (((x217&x218)<=x219)-x220);

    if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = -1LL;
	int8_t x222 = 1;
	volatile int32_t x223 = INT32_MIN;
	int32_t x224 = 12;
	volatile int32_t t50 = 826;

    t50 = (((x221&x222)<=x223)-x224);

    if (t50 != -12) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MAX;
	int32_t t51 = -24169125;

    t51 = (((x225&x226)<=x227)-x228);

    if (t51 != -2147483646) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = 239429311;
	int8_t x231 = 3;
	int64_t x232 = 5207769261LL;
	volatile int64_t t52 = 37910522996669003LL;

    t52 = (((x229&x230)<=x231)-x232);

    if (t52 != -5207769261LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = UINT64_MAX;
	static int32_t x235 = INT32_MIN;
	static uint8_t x236 = UINT8_MAX;
	volatile int32_t t53 = -4;

    t53 = (((x233&x234)<=x235)-x236);

    if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x237 = 81071727LLU;
	int32_t x238 = -195906152;
	int8_t x240 = INT8_MIN;
	int32_t t54 = 8;

    t54 = (((x237&x238)<=x239)-x240);

    if (t54 != 129) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = 0;
	volatile uint64_t x242 = UINT64_MAX;
	volatile int32_t t55 = 1;

    t55 = (((x241&x242)<=x243)-x244);

    if (t55 != 129) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x245 = UINT64_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t56 = 1593214LLU;

    t56 = (((x245&x246)<=x247)-x248);

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x254 = 29034799;
	static int16_t x255 = INT16_MIN;
	static volatile uint16_t x256 = UINT16_MAX;
	static int32_t t57 = 95545;

    t57 = (((x253&x254)<=x255)-x256);

    if (t57 != -65534) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x257 = UINT64_MAX;
	volatile int16_t x259 = INT16_MAX;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t58 = 7539802;

    t58 = (((x257&x258)<=x259)-x260);

    if (t58 != -254) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x261 = 10U;
	int64_t x262 = -1560LL;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t59 = -1543047;

    t59 = (((x261&x262)<=x263)-x264);

    if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x265 = INT32_MAX;
	int32_t x266 = 2;
	uint8_t x268 = 44U;
	volatile int32_t t60 = 236535572;

    t60 = (((x265&x266)<=x267)-x268);

    if (t60 != -43) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x269 = -200638592;
	int16_t x270 = 1;
	volatile uint32_t x272 = 3844U;
	uint32_t t61 = 526U;

    t61 = (((x269&x270)<=x271)-x272);

    if (t61 != 4294963453U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x273 = INT16_MAX;
	volatile uint8_t x274 = 8U;
	int16_t x275 = -106;
	int16_t x276 = 0;
	int32_t t62 = -17592;

    t62 = (((x273&x274)<=x275)-x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = 2711U;
	int32_t t63 = -358;

    t63 = (((x277&x278)<=x279)-x280);

    if (t63 != 32769) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x281 = 154;
	int16_t x283 = 455;
	int8_t x284 = 0;
	int32_t t64 = -248215;

    t64 = (((x281&x282)<=x283)-x284);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x285 = 10;
	volatile int16_t x286 = -1;
	int32_t t65 = -517243378;

    t65 = (((x285&x286)<=x287)-x288);

    if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x289 = -1;
	static int8_t x290 = INT8_MAX;
	volatile uint32_t x291 = UINT32_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t66 = 719357586596073573LLU;

    t66 = (((x289&x290)<=x291)-x292);

    if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x293 = INT64_MIN;
	static uint8_t x294 = UINT8_MAX;
	volatile uint8_t x295 = 0U;
	int32_t x296 = 2663045;
	int32_t t67 = 1;

    t67 = (((x293&x294)<=x295)-x296);

    if (t67 != -2663044) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x298 = 1U;
	static uint64_t x299 = 3040LLU;
	static int8_t x300 = INT8_MIN;
	int32_t t68 = 3;

    t68 = (((x297&x298)<=x299)-x300);

    if (t68 != 129) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x301 = INT16_MAX;
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	volatile int8_t x304 = -1;
	volatile int32_t t69 = -20;

    t69 = (((x301&x302)<=x303)-x304);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = 13;
	int64_t x306 = INT64_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t70 = 26324625;

    t70 = (((x305&x306)<=x307)-x308);

    if (t70 != -255) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x313 = INT64_MAX;
	int32_t x314 = 229612836;
	static uint32_t x315 = 878U;
	volatile uint16_t x316 = UINT16_MAX;
	static int32_t t71 = 0;

    t71 = (((x313&x314)<=x315)-x316);

    if (t71 != -65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = -1;
	int16_t x320 = 0;
	int32_t t72 = 76;

    t72 = (((x317&x318)<=x319)-x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x321 = INT8_MAX;
	static uint16_t x322 = 967U;
	volatile int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t73 = 223;

    t73 = (((x321&x322)<=x323)-x324);

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x325 = INT16_MAX;
	int8_t x326 = 7;
	int32_t x327 = -1;
	volatile int32_t t74 = -1;

    t74 = (((x325&x326)<=x327)-x328);

    if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x329 = -9;
	uint64_t x330 = 8096LLU;
	int16_t x331 = 4;
	int32_t x332 = 52;
	static int32_t t75 = 5;

    t75 = (((x329&x330)<=x331)-x332);

    if (t75 != -52) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x334 = -1;
	uint64_t t76 = 272314165403LLU;

    t76 = (((x333&x334)<=x335)-x336);

    if (t76 != 18446744073708614908LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x337 = -1LL;
	uint64_t x338 = 3071864594021LLU;
	volatile int8_t x339 = INT8_MAX;
	uint16_t x340 = 0U;
	static volatile int32_t t77 = 32;

    t77 = (((x337&x338)<=x339)-x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = INT16_MIN;
	static int64_t x342 = -1LL;
	volatile int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MAX;
	static int32_t t78 = 2489;

    t78 = (((x341&x342)<=x343)-x344);

    if (t78 != -126) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x347 = INT32_MIN;
	int16_t x348 = 21;
	volatile int32_t t79 = 3;

    t79 = (((x345&x346)<=x347)-x348);

    if (t79 != -20) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	int16_t x350 = 20;
	uint16_t x351 = 2011U;
	uint32_t x352 = 59U;
	volatile uint32_t t80 = 57023U;

    t80 = (((x349&x350)<=x351)-x352);

    if (t80 != 4294967238U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x353 = INT64_MIN;
	static int64_t x354 = 4389140044695741793LL;
	int32_t x355 = -1;
	int64_t x356 = -949409LL;

    t81 = (((x353&x354)<=x355)-x356);

    if (t81 != 949409LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x358 = 3207LL;
	static uint16_t x359 = 11659U;
	int8_t x360 = -2;

    t82 = (((x357&x358)<=x359)-x360);

    if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -1;
	static int8_t x362 = 0;
	uint32_t x363 = 150U;
	uint64_t x364 = 137728LLU;
	volatile uint64_t t83 = 6125497654698395LLU;

    t83 = (((x361&x362)<=x363)-x364);

    if (t83 != 18446744073709413889LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x365 = UINT16_MAX;
	uint8_t x366 = 5U;
	uint32_t x368 = 5578U;
	static uint32_t t84 = 81U;

    t84 = (((x365&x366)<=x367)-x368);

    if (t84 != 4294961719U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = -2;
	static int16_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int32_t x372 = -1;

    t85 = (((x369&x370)<=x371)-x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x377 = 1968U;
	volatile uint32_t x379 = 4U;
	volatile int8_t x380 = 4;
	int32_t t86 = 84;

    t86 = (((x377&x378)<=x379)-x380);

    if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x381 = INT32_MAX;
	int64_t x383 = 4086219288491252LL;

    t87 = (((x381&x382)<=x383)-x384);

    if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x385 = -1LL;
	static uint16_t x386 = UINT16_MAX;
	int32_t x387 = -1;
	int32_t x388 = -282921;
	int32_t t88 = -2;

    t88 = (((x385&x386)<=x387)-x388);

    if (t88 != 282921) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x389 = UINT32_MAX;
	volatile int16_t x390 = INT16_MAX;
	static int8_t x391 = INT8_MIN;
	volatile uint8_t x392 = 1U;
	int32_t t89 = -2342241;

    t89 = (((x389&x390)<=x391)-x392);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x393 = INT32_MIN;
	volatile int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = INT64_MAX;
	volatile int64_t t90 = 47583666616LL;

    t90 = (((x393&x394)<=x395)-x396);

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x401 = INT64_MAX;
	volatile int8_t x403 = -1;
	volatile int64_t x404 = 1070250222030582LL;
	int64_t t91 = -69781401276547447LL;

    t91 = (((x401&x402)<=x403)-x404);

    if (t91 != -1070250222030582LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x405 = -23218951;
	int32_t x406 = INT32_MAX;
	uint64_t x408 = 3719273178996LLU;
	uint64_t t92 = 390351308849828LLU;

    t92 = (((x405&x406)<=x407)-x408);

    if (t92 != 18446740354436372621LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x409 = INT16_MAX;
	int32_t x410 = -1;
	static int8_t x411 = INT8_MIN;
	static int32_t t93 = 12284500;

    t93 = (((x409&x410)<=x411)-x412);

    if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t t94 = 318330753LL;

    t94 = (((x413&x414)<=x415)-x416);

    if (t94 != 17442LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x417 = 1LLU;
	int16_t x418 = INT16_MAX;
	int8_t x419 = -1;
	static uint64_t x420 = 61LLU;

    t95 = (((x417&x418)<=x419)-x420);

    if (t95 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x423 = UINT16_MAX;
	static uint16_t x424 = 2U;
	volatile int32_t t96 = -533937;

    t96 = (((x421&x422)<=x423)-x424);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x425 = 7LLU;
	volatile uint64_t x426 = UINT64_MAX;
	int64_t x427 = 6594LL;
	int64_t x428 = 112932LL;
	volatile int64_t t97 = 501762261LL;

    t97 = (((x425&x426)<=x427)-x428);

    if (t97 != -112931LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x429 = UINT32_MAX;
	int32_t x430 = -249;
	static uint64_t x431 = 17145221863736442LLU;
	static uint8_t x432 = 8U;
	static int32_t t98 = -7833;

    t98 = (((x429&x430)<=x431)-x432);

    if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x433 = INT64_MIN;
	uint32_t x434 = UINT32_MAX;
	volatile uint16_t x435 = 7U;
	int8_t x436 = -1;
	int32_t t99 = -258;

    t99 = (((x433&x434)<=x435)-x436);

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x438 = -3252LL;
	int32_t x439 = -1;
	uint32_t t100 = 479906U;

    t100 = (((x437&x438)<=x439)-x440);

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x441 = INT16_MIN;
	static volatile int8_t x442 = INT8_MIN;

    t101 = (((x441&x442)<=x443)-x444);

    if (t101 != -471) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x445 = INT16_MIN;
	volatile uint8_t x446 = 0U;
	int16_t x447 = INT16_MIN;
	static volatile uint8_t x448 = UINT8_MAX;
	volatile int32_t t102 = -215;

    t102 = (((x445&x446)<=x447)-x448);

    if (t102 != -255) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x449 = UINT8_MAX;
	uint8_t x451 = 75U;
	uint8_t x452 = 1U;
	int32_t t103 = -180506;

    t103 = (((x449&x450)<=x451)-x452);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x453 = -1;
	volatile uint8_t x456 = 2U;
	int32_t t104 = 0;

    t104 = (((x453&x454)<=x455)-x456);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = INT8_MIN;
	static int16_t x459 = INT16_MIN;
	int32_t x460 = -10;
	volatile int32_t t105 = 2;

    t105 = (((x457&x458)<=x459)-x460);

    if (t105 != 10) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x462 = 19U;
	int64_t x464 = INT64_MAX;
	static int64_t t106 = -4136054280957645575LL;

    t106 = (((x461&x462)<=x463)-x464);

    if (t106 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x465 = 96682544191LLU;
	uint8_t x466 = 8U;
	static uint64_t x467 = 176749LLU;
	uint16_t x468 = 2469U;
	static volatile int32_t t107 = -4;

    t107 = (((x465&x466)<=x467)-x468);

    if (t107 != -2468) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x469 = -1;
	int16_t x470 = INT16_MIN;
	int8_t x472 = 11;
	int32_t t108 = -7551;

    t108 = (((x469&x470)<=x471)-x472);

    if (t108 != -10) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x473 = 1037073653610261471LLU;
	uint64_t x474 = 674935876623654LLU;
	volatile uint16_t x475 = 1933U;
	int16_t x476 = INT16_MIN;
	int32_t t109 = -52113814;

    t109 = (((x473&x474)<=x475)-x476);

    if (t109 != 32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = -1;
	static int16_t x478 = INT16_MIN;
	uint32_t x479 = 549626U;
	volatile int16_t x480 = 1436;
	int32_t t110 = 16248526;

    t110 = (((x477&x478)<=x479)-x480);

    if (t110 != -1436) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x481 = 251980366;
	uint32_t x482 = 26181U;
	uint16_t x484 = 2030U;
	volatile int32_t t111 = -56086782;

    t111 = (((x481&x482)<=x483)-x484);

    if (t111 != -2029) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x485 = 0U;
	volatile uint16_t x486 = UINT16_MAX;
	int32_t x488 = -1;
	static volatile int32_t t112 = 349;

    t112 = (((x485&x486)<=x487)-x488);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x489 = INT64_MAX;
	uint32_t x490 = 939U;
	int32_t x492 = INT32_MAX;
	int32_t t113 = 4;

    t113 = (((x489&x490)<=x491)-x492);

    if (t113 != -2147483647) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x493 = -1;
	int8_t x494 = INT8_MIN;
	int8_t x496 = -1;
	int32_t t114 = 2;

    t114 = (((x493&x494)<=x495)-x496);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x497 = INT8_MAX;
	static uint64_t x498 = 3877684603843541LLU;
	static int32_t x499 = INT32_MIN;
	int32_t x500 = 18;
	int32_t t115 = -639;

    t115 = (((x497&x498)<=x499)-x500);

    if (t115 != -17) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x504 = INT16_MIN;
	int32_t t116 = -5833;

    t116 = (((x501&x502)<=x503)-x504);

    if (t116 != 32769) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x505 = INT64_MAX;
	uint16_t x506 = 1807U;
	uint32_t x508 = 1U;
	static volatile uint32_t t117 = UINT32_MAX;

    t117 = (((x505&x506)<=x507)-x508);

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x509 = 29177267U;
	static volatile int8_t x511 = INT8_MIN;
	uint8_t x512 = 22U;

    t118 = (((x509&x510)<=x511)-x512);

    if (t118 != -21) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x514 = 57265858690LL;
	uint8_t x516 = 58U;

    t119 = (((x513&x514)<=x515)-x516);

    if (t119 != -57) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = 1;
	int16_t x518 = -14;
	int16_t x520 = -1;

    t120 = (((x517&x518)<=x519)-x520);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x521 = -1;
	int16_t x522 = INT16_MAX;
	volatile int32_t x524 = 424587;
	volatile int32_t t121 = 814;

    t121 = (((x521&x522)<=x523)-x524);

    if (t121 != -424587) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x525 = UINT32_MAX;
	static int32_t x528 = -1;
	int32_t t122 = -3101;

    t122 = (((x525&x526)<=x527)-x528);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x529 = 3288;
	uint64_t x530 = UINT64_MAX;
	volatile uint32_t x532 = 16594569U;
	volatile uint32_t t123 = 59U;

    t123 = (((x529&x530)<=x531)-x532);

    if (t123 != 4278372728U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x533 = INT16_MAX;
	static int64_t x534 = 485785054976299731LL;
	uint16_t x535 = UINT16_MAX;
	uint64_t x536 = 1100667755LLU;
	volatile uint64_t t124 = 202477475809905LLU;

    t124 = (((x533&x534)<=x535)-x536);

    if (t124 != 18446744072608883862LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x538 = UINT32_MAX;
	static volatile int64_t x539 = -4698162516020LL;
	volatile int32_t t125 = -181320655;

    t125 = (((x537&x538)<=x539)-x540);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x541 = 4838U;
	volatile uint8_t x542 = 29U;

    t126 = (((x541&x542)<=x543)-x544);

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x545 = INT8_MAX;
	int32_t x546 = INT32_MAX;
	static int64_t x547 = 2631LL;

    t127 = (((x545&x546)<=x547)-x548);

    if (t127 != -254) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x550 = INT8_MAX;
	static int32_t x551 = INT32_MIN;
	volatile int16_t x552 = 13774;
	volatile int32_t t128 = -939893479;

    t128 = (((x549&x550)<=x551)-x552);

    if (t128 != -13774) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x553 = INT64_MAX;
	uint64_t x554 = 1053064912106204LLU;
	volatile uint32_t x556 = 497349U;

    t129 = (((x553&x554)<=x555)-x556);

    if (t129 != 4294469947U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x557 = 379084319;
	int64_t x558 = 1827162395980LL;
	volatile int8_t x559 = -1;
	int64_t x560 = -1LL;
	int64_t t130 = 94836532352LL;

    t130 = (((x557&x558)<=x559)-x560);

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x562 = -1;
	static int8_t x564 = -1;

    t131 = (((x561&x562)<=x563)-x564);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x565 = -1;
	int16_t x566 = INT16_MAX;
	int16_t x567 = -1;
	uint64_t x568 = 916673LLU;

    t132 = (((x565&x566)<=x567)-x568);

    if (t132 != 18446744073708634943LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x569 = UINT64_MAX;
	int8_t x572 = 33;
	int32_t t133 = -14517;

    t133 = (((x569&x570)<=x571)-x572);

    if (t133 != -32) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x573 = -542LL;
	uint16_t x574 = 5099U;
	uint64_t x576 = UINT64_MAX;
	uint64_t t134 = 62LLU;

    t134 = (((x573&x574)<=x575)-x576);

    if (t134 != 2LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x577 = -13;
	int64_t x578 = -4258670LL;
	static int64_t x579 = -1LL;
	int32_t x580 = -1;
	int32_t t135 = -3479;

    t135 = (((x577&x578)<=x579)-x580);

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x581 = UINT64_MAX;
	int64_t x582 = 1261937LL;
	int64_t x583 = INT64_MIN;
	int32_t t136 = 22284;

    t136 = (((x581&x582)<=x583)-x584);

    if (t136 != -1152) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x585 = -1LL;
	static int32_t x586 = 43315;
	volatile int32_t x587 = 7785;
	volatile uint64_t x588 = UINT64_MAX;
	uint64_t t137 = 9597874LLU;

    t137 = (((x585&x586)<=x587)-x588);

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x589 = 764U;
	static int8_t x590 = 2;
	int8_t x591 = 0;
	volatile uint8_t x592 = 1U;
	volatile int32_t t138 = 551537;

    t138 = (((x589&x590)<=x591)-x592);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x594 = -1LL;
	volatile int64_t x595 = INT64_MAX;
	static int8_t x596 = -10;

    t139 = (((x593&x594)<=x595)-x596);

    if (t139 != 11) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x597 = INT8_MIN;
	static int8_t x598 = INT8_MAX;
	uint64_t x599 = 29637LLU;
	int8_t x600 = -6;
	volatile int32_t t140 = 1;

    t140 = (((x597&x598)<=x599)-x600);

    if (t140 != 7) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x601 = INT16_MAX;
	int32_t x602 = -1;
	int16_t x603 = INT16_MAX;
	volatile int32_t t141 = 64342678;

    t141 = (((x601&x602)<=x603)-x604);

    if (t141 != -254) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x605 = 2U;
	static volatile int8_t x606 = INT8_MIN;
	uint64_t x607 = 857339463LLU;
	volatile int32_t t142 = 7;

    t142 = (((x605&x606)<=x607)-x608);

    if (t142 != -32766) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x613 = 1295U;
	int32_t x615 = INT32_MIN;
	uint32_t t143 = 6521U;

    t143 = (((x613&x614)<=x615)-x616);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x619 = INT8_MAX;
	volatile uint64_t t144 = 1886875414299LLU;

    t144 = (((x617&x618)<=x619)-x620);

    if (t144 != 18446707904148201120LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x621 = -1;
	int64_t x623 = INT64_MIN;
	uint64_t x624 = 91290332024LLU;

    t145 = (((x621&x622)<=x623)-x624);

    if (t145 != 18446743982419219593LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x625 = 20;
	uint64_t x626 = UINT64_MAX;
	static uint32_t x627 = 103337530U;
	int64_t x628 = -1LL;
	int64_t t146 = 408520861663LL;

    t146 = (((x625&x626)<=x627)-x628);

    if (t146 != 2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x630 = -1;
	int64_t x631 = -957393361658LL;
	volatile int16_t x632 = 6496;

    t147 = (((x629&x630)<=x631)-x632);

    if (t147 != -6496) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x637 = 4U;
	uint8_t x638 = 0U;
	volatile uint8_t x640 = UINT8_MAX;
	int32_t t148 = -18;

    t148 = (((x637&x638)<=x639)-x640);

    if (t148 != -254) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x641 = INT32_MIN;
	static int8_t x642 = INT8_MIN;
	uint16_t x643 = 10594U;
	int16_t x644 = -5652;
	volatile int32_t t149 = 1;

    t149 = (((x641&x642)<=x643)-x644);

    if (t149 != 5653) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x649 = 42624886105609LLU;
	uint64_t x650 = UINT64_MAX;
	int8_t x652 = INT8_MAX;
	static int32_t t150 = 197;

    t150 = (((x649&x650)<=x651)-x652);

    if (t150 != -126) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x653 = 776850LL;
	int16_t x654 = INT16_MIN;
	static int32_t x656 = INT32_MAX;
	int32_t t151 = 69;

    t151 = (((x653&x654)<=x655)-x656);

    if (t151 != -2147483646) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x657 = INT32_MIN;
	uint64_t x658 = 24916252LLU;
	static int64_t x659 = INT64_MAX;
	static uint32_t x660 = UINT32_MAX;
	uint32_t t152 = 3725011U;

    t152 = (((x657&x658)<=x659)-x660);

    if (t152 != 2U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x661 = 571565169489518093LLU;
	int8_t x662 = 0;
	uint32_t x663 = 174U;
	volatile uint64_t x664 = 2597LLU;
	uint64_t t153 = 760343772LLU;

    t153 = (((x661&x662)<=x663)-x664);

    if (t153 != 18446744073709549020LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x665 = INT8_MIN;
	int64_t x667 = 372888LL;
	volatile int16_t x668 = INT16_MAX;
	int32_t t154 = -24;

    t154 = (((x665&x666)<=x667)-x668);

    if (t154 != -32766) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x669 = INT16_MIN;
	uint64_t x670 = UINT64_MAX;
	volatile int64_t x671 = -5940089271206961LL;
	uint8_t x672 = UINT8_MAX;

    t155 = (((x669&x670)<=x671)-x672);

    if (t155 != -255) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x673 = 0;
	uint16_t x674 = 6631U;
	static int32_t x675 = -1;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t156 = -8676236;

    t156 = (((x673&x674)<=x675)-x676);

    if (t156 != 128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x677 = 1U;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = UINT8_MAX;
	uint8_t x680 = 4U;
	volatile int32_t t157 = -362183774;

    t157 = (((x677&x678)<=x679)-x680);

    if (t157 != -3) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x681 = INT32_MAX;
	int8_t x682 = INT8_MIN;
	uint8_t x683 = UINT8_MAX;
	static int8_t x684 = 1;
	int32_t t158 = 86680824;

    t158 = (((x681&x682)<=x683)-x684);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	uint8_t x686 = 0U;
	int64_t x688 = -55018LL;

    t159 = (((x685&x686)<=x687)-x688);

    if (t159 != 55019LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x689 = UINT8_MAX;
	int8_t x690 = INT8_MAX;
	static int32_t x691 = -302181864;
	int8_t x692 = -1;
	volatile int32_t t160 = -8100;

    t160 = (((x689&x690)<=x691)-x692);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x693 = 10;
	int64_t x694 = INT64_MIN;
	int8_t x695 = -25;
	volatile int8_t x696 = -1;
	volatile int32_t t161 = 983103;

    t161 = (((x693&x694)<=x695)-x696);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x697 = INT64_MAX;
	static volatile int16_t x699 = 0;
	int8_t x700 = INT8_MAX;

    t162 = (((x697&x698)<=x699)-x700);

    if (t162 != -127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x702 = 1618U;
	volatile int8_t x703 = 2;

    t163 = (((x701&x702)<=x703)-x704);

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x705 = INT32_MIN;
	volatile int64_t t164 = 3063099192527LL;

    t164 = (((x705&x706)<=x707)-x708);

    if (t164 != 2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x709 = 45U;
	int8_t x710 = -1;
	int32_t x711 = 83;
	volatile int64_t x712 = -393720LL;
	volatile int64_t t165 = -114LL;

    t165 = (((x709&x710)<=x711)-x712);

    if (t165 != 393721LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x717 = -1;
	int16_t x718 = 0;
	uint16_t x719 = UINT16_MAX;
	volatile uint64_t x720 = 603947493788623612LLU;
	uint64_t t166 = 790080950281LLU;

    t166 = (((x717&x718)<=x719)-x720);

    if (t166 != 17842796579920928005LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x721 = -12;
	static uint32_t x722 = 58899U;
	static int64_t x723 = INT64_MIN;
	volatile int16_t x724 = -1;
	int32_t t167 = 3610378;

    t167 = (((x721&x722)<=x723)-x724);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x725 = 69U;
	uint32_t x726 = 110U;
	static volatile uint8_t x727 = 0U;
	int64_t x728 = -1LL;

    t168 = (((x725&x726)<=x727)-x728);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	uint16_t x730 = 5U;
	uint16_t x731 = 762U;
	volatile int32_t t169 = 52;

    t169 = (((x729&x730)<=x731)-x732);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x733 = INT32_MIN;
	static int8_t x734 = -1;
	int8_t x735 = -26;
	volatile int32_t t170 = 2667923;

    t170 = (((x733&x734)<=x735)-x736);

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x739 = INT32_MIN;
	static uint16_t x740 = UINT16_MAX;
	volatile int32_t t171 = 114898135;

    t171 = (((x737&x738)<=x739)-x740);

    if (t171 != -65534) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x741 = INT8_MIN;
	uint16_t x743 = UINT16_MAX;

    t172 = (((x741&x742)<=x743)-x744);

    if (t172 != 32769) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x745 = INT64_MIN;
	uint8_t x747 = 37U;
	int64_t x748 = INT64_MAX;

    t173 = (((x745&x746)<=x747)-x748);

    if (t173 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x749 = UINT64_MAX;
	int16_t x750 = 3208;
	volatile int8_t x751 = INT8_MIN;
	static uint32_t x752 = 1965957412U;

    t174 = (((x749&x750)<=x751)-x752);

    if (t174 != 2329009885U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x753 = -34;
	int32_t x754 = -1;
	volatile uint32_t x755 = UINT32_MAX;
	volatile int64_t t175 = -48660LL;

    t175 = (((x753&x754)<=x755)-x756);

    if (t175 != -7050623486LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x761 = 0U;
	static uint8_t x762 = UINT8_MAX;
	uint64_t x763 = 7860195732508085LLU;
	static volatile int16_t x764 = -1;
	volatile int32_t t176 = 804332;

    t176 = (((x761&x762)<=x763)-x764);

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x765 = INT64_MIN;
	int64_t x766 = -1LL;
	int16_t x767 = INT16_MAX;
	uint16_t x768 = 892U;
	int32_t t177 = 42919;

    t177 = (((x765&x766)<=x767)-x768);

    if (t177 != -891) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x769 = -1;
	static volatile int8_t x770 = -3;
	uint8_t x771 = 26U;
	volatile int8_t x772 = INT8_MIN;

    t178 = (((x769&x770)<=x771)-x772);

    if (t178 != 129) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x773 = UINT64_MAX;
	volatile int16_t x775 = INT16_MIN;
	volatile uint32_t t179 = 2U;

    t179 = (((x773&x774)<=x775)-x776);

    if (t179 != 4294922158U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x777 = 3U;
	static volatile int16_t x778 = -1;
	int64_t x779 = -13320816922LL;
	int64_t x780 = INT64_MAX;
	int64_t t180 = -156196238196780271LL;

    t180 = (((x777&x778)<=x779)-x780);

    if (t180 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x782 = -1294694;
	int64_t x783 = -1LL;
	uint32_t x784 = UINT32_MAX;

    t181 = (((x781&x782)<=x783)-x784);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x785 = 435U;
	static int8_t x787 = -1;
	int16_t x788 = -1;
	static int32_t t182 = -876299453;

    t182 = (((x785&x786)<=x787)-x788);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x789 = 34895;
	int64_t x790 = 840100049368LL;
	static uint64_t x791 = 7589676210LLU;
	uint16_t x792 = 2312U;

    t183 = (((x789&x790)<=x791)-x792);

    if (t183 != -2311) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x794 = INT64_MAX;
	static int64_t x795 = INT64_MIN;
	uint16_t x796 = 4006U;
	int32_t t184 = 16881;

    t184 = (((x793&x794)<=x795)-x796);

    if (t184 != -4006) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x802 = -28;
	volatile uint8_t x803 = 105U;
	uint16_t x804 = 569U;

    t185 = (((x801&x802)<=x803)-x804);

    if (t185 != -568) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x806 = 3U;
	static int32_t x807 = 708080431;
	uint16_t x808 = UINT16_MAX;
	int32_t t186 = 27477895;

    t186 = (((x805&x806)<=x807)-x808);

    if (t186 != -65534) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x809 = UINT32_MAX;
	int8_t x810 = -4;
	volatile uint64_t x811 = 62444989716083LLU;
	int64_t x812 = 3LL;

    t187 = (((x809&x810)<=x811)-x812);

    if (t187 != -2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x817 = INT8_MIN;
	int32_t x819 = INT32_MIN;
	int16_t x820 = INT16_MAX;
	int32_t t188 = 479144;

    t188 = (((x817&x818)<=x819)-x820);

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x821 = INT16_MIN;
	uint32_t x824 = UINT32_MAX;

    t189 = (((x821&x822)<=x823)-x824);

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x825 = -1LL;
	volatile uint32_t x826 = 1U;
	static uint32_t x827 = UINT32_MAX;
	uint16_t x828 = 69U;
	int32_t t190 = -87;

    t190 = (((x825&x826)<=x827)-x828);

    if (t190 != -68) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x829 = 15U;
	int64_t x830 = -148LL;
	int64_t x831 = -1LL;
	int32_t t191 = 361084;

    t191 = (((x829&x830)<=x831)-x832);

    if (t191 != -11) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x833 = -1;
	int8_t x834 = INT8_MAX;
	static volatile int16_t x835 = -26;

    t192 = (((x833&x834)<=x835)-x836);

    if (t192 != 32768) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x837 = 15;
	int64_t x838 = -4163970232247LL;
	int32_t x839 = -1;
	volatile int16_t x840 = INT16_MIN;
	int32_t t193 = -6;

    t193 = (((x837&x838)<=x839)-x840);

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x841 = 25U;
	int16_t x842 = INT16_MIN;
	volatile int32_t x843 = INT32_MAX;
	uint64_t x844 = UINT64_MAX;
	uint64_t t194 = 3089350LLU;

    t194 = (((x841&x842)<=x843)-x844);

    if (t194 != 2LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x845 = INT64_MIN;
	uint16_t x846 = 2708U;
	static int32_t t195 = 28797005;

    t195 = (((x845&x846)<=x847)-x848);

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x849 = 29760212579LLU;
	uint32_t x850 = 99505U;
	static uint16_t x852 = UINT16_MAX;
	volatile int32_t t196 = -1;

    t196 = (((x849&x850)<=x851)-x852);

    if (t196 != -65535) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x853 = INT16_MIN;
	static uint32_t x854 = 5303U;
	int16_t x856 = 5;

    t197 = (((x853&x854)<=x855)-x856);

    if (t197 != -4) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x857 = UINT8_MAX;
	static int32_t x858 = -221020504;
	int64_t x859 = -2155819057016355242LL;
	int8_t x860 = INT8_MIN;

    t198 = (((x857&x858)<=x859)-x860);

    if (t198 != 128) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x861 = 1243U;
	static uint8_t x862 = UINT8_MAX;
	uint32_t x863 = UINT32_MAX;
	uint32_t x864 = 3U;
	volatile uint32_t t199 = 31U;

    t199 = (((x861&x862)<=x863)-x864);

    if (t199 != 4294967294U) { NG(); } else { ; }
	
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

