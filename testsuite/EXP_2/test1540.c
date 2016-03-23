
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
uint64_t x4 = 12LLU;
int8_t x32 = INT8_MIN;
int32_t x34 = INT32_MIN;
int16_t x37 = INT16_MIN;
int32_t x41 = INT32_MIN;
volatile int32_t x44 = 1;
int8_t x47 = -7;
volatile int32_t x51 = -1;
static uint32_t x61 = UINT32_MAX;
volatile uint32_t t15 = 2136826466U;
uint8_t x66 = 4U;
int16_t x67 = INT16_MIN;
static uint8_t x72 = UINT8_MAX;
int32_t t17 = 8389;
volatile int16_t x77 = INT16_MIN;
volatile int32_t x78 = INT32_MIN;
static int32_t x81 = 3515;
int16_t x87 = INT16_MIN;
uint32_t t21 = UINT32_MAX;
int16_t x92 = -37;
volatile int32_t x93 = -1;
int32_t t25 = 79;
int32_t x106 = -1;
uint8_t x109 = 0U;
static int64_t x110 = INT64_MIN;
int16_t x122 = INT16_MIN;
volatile int64_t t31 = INT64_MIN;
int8_t x132 = -1;
int8_t x140 = INT8_MIN;
volatile int32_t t34 = -54515926;
volatile int64_t x141 = 2332411274391LL;
uint8_t x143 = 3U;
int8_t x146 = 31;
volatile uint64_t t36 = 20820731232554182LLU;
static int64_t x149 = -694584385102716LL;
int32_t x150 = 254766;
volatile uint32_t x152 = UINT32_MAX;
uint64_t x154 = 3LLU;
uint16_t x155 = 34U;
volatile int16_t x159 = -849;
int64_t x160 = INT64_MIN;
int32_t x162 = 439;
int64_t x169 = -1LL;
int16_t x174 = -1;
uint32_t x181 = 313U;
volatile uint32_t t45 = 99U;
volatile int64_t x187 = INT64_MIN;
volatile uint32_t x188 = 3U;
int8_t x189 = INT8_MAX;
static int32_t x201 = 26;
int64_t x205 = -15948LL;
static int8_t x207 = 0;
volatile int64_t t51 = -2126295012296LL;
volatile int32_t t52 = 160884691;
int16_t x216 = -1;
int8_t x224 = INT8_MIN;
volatile uint32_t x225 = UINT32_MAX;
static uint32_t x227 = UINT32_MAX;
int8_t x228 = INT8_MAX;
uint32_t x229 = 507070052U;
static int8_t x231 = 16;
int64_t x232 = -1LL;
int64_t t57 = 831LL;
volatile int32_t x235 = INT32_MAX;
int16_t x237 = INT16_MIN;
volatile int16_t x247 = 0;
int8_t x260 = 0;
int32_t t64 = -15;
uint16_t x261 = UINT16_MAX;
int64_t x262 = -1LL;
volatile int8_t x263 = INT8_MIN;
int32_t t65 = -47;
int16_t x266 = INT16_MAX;
volatile int32_t x269 = INT32_MAX;
int16_t x278 = 408;
volatile int64_t x279 = INT64_MIN;
int8_t x285 = -53;
static int16_t x290 = -1;
int32_t x292 = -126;
int32_t x294 = INT32_MIN;
int32_t x297 = INT32_MIN;
uint16_t x300 = UINT16_MAX;
static int32_t x301 = INT32_MAX;
int32_t x307 = INT32_MIN;
int32_t t77 = 491;
volatile int64_t t79 = INT64_MIN;
static volatile uint8_t x326 = 11U;
uint64_t x331 = 354440050151914637LLU;
volatile uint32_t t82 = 49359U;
int8_t x339 = INT8_MIN;
volatile uint32_t t85 = UINT32_MAX;
int16_t x346 = 6;
int8_t x347 = INT8_MIN;
int16_t x350 = INT16_MAX;
static volatile int16_t x363 = 0;
uint64_t t91 = 6420363908LLU;
volatile int32_t x374 = INT32_MAX;
uint64_t x376 = UINT64_MAX;
int8_t x377 = -1;
int8_t x378 = -1;
volatile int16_t x380 = -15127;
int32_t t95 = -32455650;
volatile int16_t x391 = INT16_MAX;
volatile int32_t t97 = INT32_MIN;
static int32_t t98 = 56;
uint16_t x398 = 458U;
volatile uint64_t x399 = 296441128LLU;
int64_t x401 = -28260967304970LL;
static volatile int64_t t100 = 3LL;
int32_t x408 = 1;
int32_t x412 = -16121990;
int64_t x422 = INT64_MAX;
static volatile uint32_t x429 = UINT32_MAX;
int64_t x430 = INT64_MIN;
volatile int32_t t108 = 2104;
static int8_t x443 = INT8_MAX;
int8_t x445 = INT8_MIN;
volatile int32_t x450 = -71111;
int32_t x457 = INT32_MAX;
int8_t x459 = INT8_MIN;
static int16_t x462 = INT16_MAX;
volatile int32_t t115 = -29470;
static int16_t x468 = INT16_MIN;
volatile int32_t x476 = -1;
int8_t x487 = 1;
volatile int32_t t121 = -239;
volatile int64_t t123 = -981747LL;
int8_t x497 = INT8_MIN;
int32_t t125 = 240570552;
int32_t x506 = INT32_MIN;
int32_t x509 = INT32_MAX;
int64_t x513 = INT64_MAX;
uint64_t x514 = 17465299397432LLU;
int64_t t128 = -1863LL;
int8_t x518 = INT8_MIN;
uint64_t x524 = 413836LLU;
volatile uint64_t t130 = 1179089LLU;
volatile int64_t x543 = INT64_MIN;
int32_t x548 = -7018;
int32_t t136 = 957153;
int32_t x551 = 5469;
uint8_t x552 = UINT8_MAX;
int32_t x557 = -469920;
uint8_t x559 = 0U;
volatile int32_t t139 = 620301056;
int64_t x562 = -6999984LL;
int64_t t145 = -7018476LL;
int16_t x587 = 0;
uint16_t x603 = 3642U;
static uint32_t x604 = UINT32_MAX;
uint32_t t150 = UINT32_MAX;
int64_t x610 = INT64_MIN;
uint64_t x611 = UINT64_MAX;
static volatile int32_t t152 = -937197;
int64_t x614 = INT64_MIN;
int64_t x615 = INT64_MIN;
static int32_t x618 = INT32_MAX;
int32_t t154 = -1;
static volatile int8_t x622 = 21;
uint16_t x634 = 632U;
static volatile int16_t x638 = -1;
volatile uint64_t x647 = 85300871815794LLU;
volatile uint64_t t162 = 38494LLU;
uint8_t x667 = UINT8_MAX;
int64_t x671 = INT64_MIN;
volatile int16_t x682 = INT16_MAX;
int32_t x688 = -200036;
uint64_t x690 = 932LLU;
int64_t x697 = INT64_MIN;
int64_t x709 = -659688LL;
uint32_t x712 = UINT32_MAX;
uint64_t x720 = 50027LLU;
int8_t x733 = -1;
int16_t x735 = INT16_MAX;
int64_t x738 = -1LL;
volatile int32_t x740 = -71535;
int64_t x744 = -1LL;
static int64_t t185 = -791735670492LL;
int64_t x747 = -1LL;
volatile int32_t t187 = -3260;
int8_t x753 = INT8_MIN;
volatile uint32_t x755 = 257127054U;
int64_t t188 = INT64_MIN;
volatile int16_t x760 = INT16_MIN;
volatile uint64_t t189 = 87389LLU;
static uint64_t x763 = 5444512LLU;
int32_t x766 = INT32_MIN;
volatile int8_t x770 = 43;
uint32_t x773 = 107U;
int64_t x775 = -256785532486779LL;
volatile uint32_t x781 = 136701U;
uint16_t x788 = UINT16_MAX;
int64_t t196 = -883713511708LL;
uint32_t x790 = 19U;
int8_t x796 = INT8_MIN;
static int64_t x800 = INT64_MIN;
volatile int64_t t199 = INT64_MIN;


void f0(void) {
    	volatile int16_t x2 = -10;
	static int32_t x3 = -1;
	volatile uint64_t t0 = 7333LLU;

    t0 = ((x1&(x2==x3))^x4);

    if (t0 != 12LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	volatile int8_t x6 = -1;
	int16_t x7 = 1318;
	volatile int32_t x8 = -1;
	volatile int32_t t1 = 3;

    t1 = ((x5&(x6==x7))^x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 63U;
	static int8_t x10 = -1;
	int64_t x11 = 72955704928383224LL;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = INT32_MIN;

    t2 = ((x9&(x10==x11))^x12);

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -7728;
	static int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MIN;
	int16_t x16 = -1;
	volatile int32_t t3 = -287129964;

    t3 = ((x13&(x14==x15))^x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 860832385478476093LL;
	int16_t x18 = -1;
	int32_t x19 = 1593;
	int8_t x20 = INT8_MIN;
	int64_t t4 = -13793832LL;

    t4 = ((x17&(x18==x19))^x20);

    if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 53U;
	static volatile int16_t x22 = INT16_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	int16_t x24 = -30;
	int32_t t5 = 6253;

    t5 = ((x21&(x22==x23))^x24);

    if (t5 != -30) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 26;
	static int64_t x26 = INT64_MIN;
	int64_t x27 = 2002520039LL;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 38598;

    t6 = ((x25&(x26==x27))^x28);

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	volatile int16_t x30 = INT16_MIN;
	static int64_t x31 = -46859849840904482LL;
	volatile int32_t t7 = -92923249;

    t7 = ((x29&(x30==x31))^x32);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 2516743780054237440LLU;
	uint8_t x35 = 21U;
	uint32_t x36 = 14184U;
	uint64_t t8 = 4LLU;

    t8 = ((x33&(x34==x35))^x36);

    if (t8 != 14184LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 31U;
	volatile int32_t x39 = -1;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t9 = -41929;

    t9 = ((x37&(x38==x39))^x40);

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x42 = -4;
	int8_t x43 = INT8_MIN;
	static volatile int32_t t10 = -562;

    t10 = ((x41&(x42==x43))^x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 435LLU;
	uint32_t x46 = 389U;
	uint16_t x48 = 72U;
	uint64_t t11 = 13270774822981869LLU;

    t11 = ((x45&(x46==x47))^x48);

    if (t11 != 72LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = 15;
	volatile int32_t x52 = INT32_MAX;
	volatile uint64_t t12 = 1047200492546LLU;

    t12 = ((x49&(x50==x51))^x52);

    if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	static int32_t x54 = 4584299;
	int8_t x55 = -1;
	int32_t x56 = INT32_MAX;
	int64_t t13 = 441762989LL;

    t13 = ((x53&(x54==x55))^x56);

    if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = 0;
	int8_t x59 = 1;
	uint32_t x60 = 7345067U;
	volatile uint32_t t14 = 1247U;

    t14 = ((x57&(x58==x59))^x60);

    if (t14 != 7345067U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x62 = UINT8_MAX;
	int8_t x63 = 20;
	volatile int8_t x64 = 0;

    t15 = ((x61&(x62==x63))^x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = 0;
	int64_t x68 = -11683LL;
	int64_t t16 = 1156532118667LL;

    t16 = ((x65&(x66==x67))^x68);

    if (t16 != -11683LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MIN;
	int64_t x70 = 2007856036177531576LL;
	static int8_t x71 = -11;

    t17 = ((x69&(x70==x71))^x72);

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 0LLU;
	static int16_t x74 = -1;
	int32_t x75 = -1;
	int32_t x76 = -1;
	uint64_t t18 = UINT64_MAX;

    t18 = ((x73&(x74==x75))^x76);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x79 = 186322240U;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -232;

    t19 = ((x77&(x78==x79))^x80);

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x82 = UINT32_MAX;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = 504682131U;
	volatile uint32_t t20 = 62529851U;

    t20 = ((x81&(x82==x83))^x84);

    if (t20 != 504682131U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x85 = INT32_MIN;
	volatile int8_t x86 = INT8_MIN;
	uint32_t x88 = UINT32_MAX;

    t21 = ((x85&(x86==x87))^x88);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -6323;
	int8_t x90 = -25;
	uint8_t x91 = 1U;
	static int32_t t22 = -1;

    t22 = ((x89&(x90==x91))^x92);

    if (t22 != -37) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = INT16_MIN;
	static int32_t x95 = INT32_MIN;
	volatile uint16_t x96 = 0U;
	volatile int32_t t23 = 3104362;

    t23 = ((x93&(x94==x95))^x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	int16_t x98 = INT16_MAX;
	volatile uint16_t x99 = UINT16_MAX;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = 29;

    t24 = ((x97&(x98==x99))^x100);

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 1488;
	int64_t x102 = INT64_MIN;
	int32_t x103 = 29;
	volatile int16_t x104 = -1;

    t25 = ((x101&(x102==x103))^x104);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	int16_t x108 = -358;
	volatile uint32_t t26 = 375U;

    t26 = ((x105&(x106==x107))^x108);

    if (t26 != 4294966938U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x111 = UINT64_MAX;
	uint8_t x112 = 1U;
	volatile int32_t t27 = 102;

    t27 = ((x109&(x110==x111))^x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MAX;
	int16_t x114 = 1;
	int32_t x115 = -1;
	int32_t x116 = -1997774;
	static int32_t t28 = 211824;

    t28 = ((x113&(x114==x115))^x116);

    if (t28 != -1997774) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t29 = INT32_MIN;

    t29 = ((x117&(x118==x119))^x120);

    if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int16_t x123 = 2392;
	static int8_t x124 = -1;
	static volatile uint32_t t30 = UINT32_MAX;

    t30 = ((x121&(x122==x123))^x124);

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	static uint16_t x126 = 389U;
	uint8_t x127 = 0U;
	volatile int64_t x128 = INT64_MIN;

    t31 = ((x125&(x126==x127))^x128);

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MAX;
	int32_t x130 = -49;
	int64_t x131 = 363407664777LL;
	int32_t t32 = -1;

    t32 = ((x129&(x130==x131))^x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -103;
	uint64_t x134 = 268526135191731LLU;
	static int16_t x135 = -26;
	volatile int64_t x136 = INT64_MIN;
	volatile int64_t t33 = INT64_MIN;

    t33 = ((x133&(x134==x135))^x136);

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	static int16_t x138 = -3280;
	uint64_t x139 = 29221LLU;

    t34 = ((x137&(x138==x139))^x140);

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x142 = 101982;
	volatile int16_t x144 = INT16_MAX;
	int64_t t35 = -239685LL;

    t35 = ((x141&(x142==x143))^x144);

    if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 18966719383203357LLU;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -145968045;

    t36 = ((x145&(x146==x147))^x148);

    if (t36 != 18446744073563583571LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x151 = 12;
	static volatile int64_t t37 = 1191338455068519616LL;

    t37 = ((x149&(x150==x151))^x152);

    if (t37 != 4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 67U;
	int16_t x156 = -3;
	static uint32_t t38 = 434819U;

    t38 = ((x153&(x154==x155))^x156);

    if (t38 != 4294967293U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int16_t x158 = INT16_MAX;
	volatile int64_t t39 = INT64_MIN;

    t39 = ((x157&(x158==x159))^x160);

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = 9;
	uint8_t x163 = 10U;
	uint32_t x164 = UINT32_MAX;
	uint32_t t40 = UINT32_MAX;

    t40 = ((x161&(x162==x163))^x164);

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = 392;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = -88499279003LL;
	static uint16_t x168 = UINT16_MAX;
	static volatile int32_t t41 = -1409;

    t41 = ((x165&(x166==x167))^x168);

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x170 = UINT16_MAX;
	static volatile int64_t x171 = 16448171LL;
	int64_t x172 = -1LL;
	volatile int64_t t42 = -2LL;

    t42 = ((x169&(x170==x171))^x172);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	uint8_t x175 = 63U;
	uint64_t x176 = 97849445231LLU;
	volatile uint64_t t43 = 10LLU;

    t43 = ((x173&(x174==x175))^x176);

    if (t43 != 97849445231LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 39469767198LLU;
	static int8_t x178 = -12;
	int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MAX;
	uint64_t t44 = 6140446742767LLU;

    t44 = ((x177&(x178==x179))^x180);

    if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = -1;
	int64_t x183 = INT64_MIN;
	static volatile uint16_t x184 = 0U;

    t45 = ((x181&(x182==x183))^x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 82U;
	uint64_t x186 = 45LLU;
	static uint32_t t46 = 775685997U;

    t46 = ((x185&(x186==x187))^x188);

    if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -191487163359070812LL;
	volatile int8_t x191 = 1;
	static uint32_t x192 = UINT32_MAX;
	uint32_t t47 = UINT32_MAX;

    t47 = ((x189&(x190==x191))^x192);

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	volatile int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t48 = -44LL;

    t48 = ((x193&(x194==x195))^x196);

    if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MAX;
	int64_t x198 = INT64_MIN;
	static uint64_t x199 = 478LLU;
	uint8_t x200 = 0U;
	volatile int32_t t49 = 8628;

    t49 = ((x197&(x198==x199))^x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = UINT32_MAX;
	int16_t x203 = 112;
	static int8_t x204 = 12;
	volatile int32_t t50 = 0;

    t50 = ((x201&(x202==x203))^x204);

    if (t50 != 12) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x206 = INT8_MIN;
	int8_t x208 = -1;

    t51 = ((x205&(x206==x207))^x208);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int32_t x210 = 310249;
	uint64_t x211 = 322853751474606134LLU;
	volatile int16_t x212 = -1;

    t52 = ((x209&(x210==x211))^x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 77200763LL;
	uint64_t x214 = 244867LLU;
	int64_t x215 = -1LL;
	volatile int64_t t53 = 0LL;

    t53 = ((x213&(x214==x215))^x216);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MIN;
	int64_t x218 = 35149712750228LL;
	uint64_t x219 = 43181409623841562LLU;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

    t54 = ((x217&(x218==x219))^x220);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MAX;
	int32_t x222 = 2418;
	volatile int64_t x223 = 22LL;
	static volatile int32_t t55 = 231;

    t55 = ((x221&(x222==x223))^x224);

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = INT8_MAX;
	volatile uint32_t t56 = 666943928U;

    t56 = ((x225&(x226==x227))^x228);

    if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = INT32_MAX;

    t57 = ((x229&(x230==x231))^x232);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 82790U;
	static volatile int32_t x234 = INT32_MIN;
	static int32_t x236 = -1065873509;
	volatile uint32_t t58 = 16505785U;

    t58 = ((x233&(x234==x235))^x236);

    if (t58 != 3229093787U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = 7LLU;
	uint8_t x239 = 1U;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = UINT64_MAX;

    t59 = ((x237&(x238==x239))^x240);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 9;
	int64_t x242 = 49993780726412LL;
	volatile uint8_t x243 = 4U;
	uint32_t x244 = UINT32_MAX;
	uint32_t t60 = UINT32_MAX;

    t60 = ((x241&(x242==x243))^x244);

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	uint32_t x246 = 11232703U;
	int64_t x248 = INT64_MAX;
	volatile int64_t t61 = INT64_MAX;

    t61 = ((x245&(x246==x247))^x248);

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = 3202;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = 2210U;
	int8_t x252 = -1;
	volatile int32_t t62 = 300073;

    t62 = ((x249&(x250==x251))^x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	int8_t x254 = -2;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = INT8_MIN;
	static int32_t t63 = -359;

    t63 = ((x253&(x254==x255))^x256);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MAX;
	volatile uint32_t x259 = UINT32_MAX;

    t64 = ((x257&(x258==x259))^x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x264 = 1U;

    t65 = ((x261&(x262==x263))^x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 771;
	uint64_t x267 = UINT64_MAX;
	uint64_t x268 = 776467LLU;
	uint64_t t66 = 10679820851908LLU;

    t66 = ((x265&(x266==x267))^x268);

    if (t66 != 776467LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x270 = 195U;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t67 = 1;

    t67 = ((x269&(x270==x271))^x272);

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 82671099U;
	int16_t x274 = 113;
	int8_t x275 = -1;
	int32_t x276 = -1;
	static volatile uint32_t t68 = UINT32_MAX;

    t68 = ((x273&(x274==x275))^x276);

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -444;

    t69 = ((x277&(x278==x279))^x280);

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 12388U;
	uint8_t x282 = 1U;
	volatile uint8_t x283 = 8U;
	int8_t x284 = INT8_MIN;
	uint32_t t70 = 130432U;

    t70 = ((x281&(x282==x283))^x284);

    if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = 30;
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = INT32_MIN;

    t71 = ((x285&(x286==x287))^x288);

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 379797704LLU;
	int16_t x291 = INT16_MAX;
	uint64_t t72 = 20673847091271482LLU;

    t72 = ((x289&(x290==x291))^x292);

    if (t72 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = -1;
	volatile int32_t t73 = -4;

    t73 = ((x293&(x294==x295))^x296);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x298 = -1;
	static int16_t x299 = 275;
	int32_t t74 = -2;

    t74 = ((x297&(x298==x299))^x300);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x302 = INT16_MIN;
	static int32_t x303 = INT32_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 195;

    t75 = ((x301&(x302==x303))^x304);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = UINT16_MAX;
	volatile int32_t x306 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -5771327;

    t76 = ((x305&(x306==x307))^x308);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -5;
	uint16_t x310 = 27U;
	uint32_t x311 = 474U;
	int8_t x312 = 9;

    t77 = ((x309&(x310==x311))^x312);

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = 7;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	static volatile int32_t x316 = INT32_MIN;
	volatile int32_t t78 = INT32_MIN;

    t78 = ((x313&(x314==x315))^x316);

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = -42811932115187LL;
	uint64_t x318 = 3781464920LLU;
	volatile uint64_t x319 = 1489588867632LLU;
	int64_t x320 = INT64_MIN;

    t79 = ((x317&(x318==x319))^x320);

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x321 = UINT8_MAX;
	int32_t x322 = -124373484;
	static uint8_t x323 = 12U;
	uint8_t x324 = 7U;
	int32_t t80 = -132;

    t80 = ((x321&(x322==x323))^x324);

    if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -1;
	int16_t x327 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = 8127801;

    t81 = ((x325&(x326==x327))^x328);

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = UINT32_MAX;
	volatile int64_t x330 = 352363144LL;
	volatile int32_t x332 = INT32_MIN;

    t82 = ((x329&(x330==x331))^x332);

    if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int32_t x334 = -40098;
	int32_t x335 = 35;
	volatile int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = INT32_MIN;

    t83 = ((x333&(x334==x335))^x336);

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = -1;
	static volatile int64_t x338 = INT64_MAX;
	volatile uint32_t x340 = 14U;
	volatile uint32_t t84 = 3U;

    t84 = ((x337&(x338==x339))^x340);

    if (t84 != 14U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	static uint32_t x343 = UINT32_MAX;
	uint32_t x344 = UINT32_MAX;

    t85 = ((x341&(x342==x343))^x344);

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = 1;
	uint64_t x348 = 645227LLU;
	static volatile uint64_t t86 = 4LLU;

    t86 = ((x345&(x346==x347))^x348);

    if (t86 != 645227LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MIN;
	int8_t x351 = -3;
	int32_t x352 = 3445307;
	int32_t t87 = -3923;

    t87 = ((x349&(x350==x351))^x352);

    if (t87 != 3445307) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	static uint8_t x354 = UINT8_MAX;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t88 = INT64_MIN;

    t88 = ((x353&(x354==x355))^x356);

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 1973;
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = INT16_MIN;
	volatile int8_t x360 = 4;
	int32_t t89 = 203287;

    t89 = ((x357&(x358==x359))^x360);

    if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -143LL;
	uint32_t x362 = 1066U;
	uint8_t x364 = 3U;
	static volatile int64_t t90 = -22535LL;

    t90 = ((x361&(x362==x363))^x364);

    if (t90 != 3LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	int8_t x366 = -1;
	int8_t x367 = -1;
	volatile uint64_t x368 = 138983762806591477LLU;

    t91 = ((x365&(x366==x367))^x368);

    if (t91 != 138983762806591476LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -46;
	int16_t x370 = INT16_MIN;
	int8_t x371 = 48;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = 664592402;

    t92 = ((x369&(x370==x371))^x372);

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	uint64_t t93 = UINT64_MAX;

    t93 = ((x373&(x374==x375))^x376);

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x379 = -1;
	int32_t t94 = 76372;

    t94 = ((x377&(x378==x379))^x380);

    if (t94 != -15128) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 10423U;
	uint64_t x382 = 86LLU;
	static uint32_t x383 = UINT32_MAX;
	int16_t x384 = 117;

    t95 = ((x381&(x382==x383))^x384);

    if (t95 != 117) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	volatile uint8_t x388 = 15U;
	volatile int32_t t96 = 5424937;

    t96 = ((x385&(x386==x387))^x388);

    if (t96 != 15) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	uint8_t x390 = 0U;
	volatile int32_t x392 = INT32_MIN;

    t97 = ((x389&(x390==x391))^x392);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -2056981089509406LL;
	int16_t x396 = INT16_MIN;

    t98 = ((x393&(x394==x395))^x396);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x397 = 20U;
	volatile int32_t x400 = INT32_MIN;
	int32_t t99 = INT32_MIN;

    t99 = ((x397&(x398==x399))^x400);

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x402 = 17U;
	static uint16_t x403 = 2659U;
	int64_t x404 = -1LL;

    t100 = ((x401&(x402==x403))^x404);

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x405 = UINT32_MAX;
	volatile int64_t x406 = -439LL;
	int16_t x407 = -1;
	uint32_t t101 = 222074395U;

    t101 = ((x405&(x406==x407))^x408);

    if (t101 != 1U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	int16_t x410 = INT16_MAX;
	int32_t x411 = -1;
	int64_t t102 = 4816775028393935LL;

    t102 = ((x409&(x410==x411))^x412);

    if (t102 != -16121990LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 4LL;
	volatile int16_t x414 = INT16_MIN;
	int16_t x415 = -16;
	int8_t x416 = -1;
	int64_t t103 = -9685427585LL;

    t103 = ((x413&(x414==x415))^x416);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	uint32_t x418 = 49639U;
	int8_t x419 = INT8_MAX;
	static uint16_t x420 = UINT16_MAX;
	static int32_t t104 = 1256;

    t104 = ((x417&(x418==x419))^x420);

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	static uint32_t x423 = 725U;
	int8_t x424 = -1;
	int32_t t105 = -19069071;

    t105 = ((x421&(x422==x423))^x424);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 8589406254653LL;
	static volatile int32_t x426 = INT32_MAX;
	int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MAX;
	volatile int64_t t106 = 212760LL;

    t106 = ((x425&(x426==x427))^x428);

    if (t106 != 32767LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x431 = 31U;
	int16_t x432 = INT16_MIN;
	uint32_t t107 = 3U;

    t107 = ((x429&(x430==x431))^x432);

    if (t107 != 4294934528U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 4;
	static uint16_t x434 = 9332U;
	static int8_t x435 = INT8_MAX;
	int16_t x436 = -1;

    t108 = ((x433&(x434==x435))^x436);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static volatile int32_t x438 = INT32_MAX;
	uint32_t x439 = UINT32_MAX;
	volatile uint64_t x440 = 506112943022LLU;
	volatile uint64_t t109 = 1716123139682LLU;

    t109 = ((x437&(x438==x439))^x440);

    if (t109 != 506112943022LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = 146868660439291LL;
	static int32_t x442 = INT32_MAX;
	int8_t x444 = -1;
	static volatile int64_t t110 = -5813LL;

    t110 = ((x441&(x442==x443))^x444);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x446 = 7U;
	uint64_t x447 = UINT64_MAX;
	volatile uint8_t x448 = 0U;
	int32_t t111 = -7;

    t111 = ((x445&(x446==x447))^x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = UINT8_MAX;
	static int8_t x451 = INT8_MIN;
	uint32_t x452 = 16484094U;
	uint32_t t112 = 37792U;

    t112 = ((x449&(x450==x451))^x452);

    if (t112 != 16484094U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MIN;
	uint16_t x454 = 147U;
	static uint32_t x455 = UINT32_MAX;
	int16_t x456 = -1;
	int64_t t113 = -1206323497456LL;

    t113 = ((x453&(x454==x455))^x456);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x458 = UINT64_MAX;
	uint8_t x460 = UINT8_MAX;
	int32_t t114 = -1106;

    t114 = ((x457&(x458==x459))^x460);

    if (t114 != 255) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -12;
	static uint16_t x463 = UINT16_MAX;
	static int8_t x464 = 1;

    t115 = ((x461&(x462==x463))^x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 110;
	static int16_t x466 = -1;
	volatile int16_t x467 = INT16_MIN;
	volatile int32_t t116 = 16880;

    t116 = ((x465&(x466==x467))^x468);

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	int16_t x470 = 16328;
	volatile int32_t x471 = INT32_MAX;
	volatile uint64_t x472 = 8050059768LLU;
	uint64_t t117 = 113227670LLU;

    t117 = ((x469&(x470==x471))^x472);

    if (t117 != 8050059768LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	volatile uint64_t x474 = 1316929300411LLU;
	int8_t x475 = -1;
	int32_t t118 = 6483;

    t118 = ((x473&(x474==x475))^x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 857U;
	uint64_t x478 = 459954948739550726LLU;
	int32_t x479 = INT32_MIN;
	static int8_t x480 = INT8_MIN;
	int32_t t119 = -1;

    t119 = ((x477&(x478==x479))^x480);

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = -1LL;
	int32_t x482 = -24316493;
	static uint64_t x483 = 118LLU;
	static int8_t x484 = -29;
	volatile int64_t t120 = -67970LL;

    t120 = ((x481&(x482==x483))^x484);

    if (t120 != -29LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MAX;
	int32_t x486 = INT32_MAX;
	volatile int8_t x488 = -3;

    t121 = ((x485&(x486==x487))^x488);

    if (t121 != -3) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	volatile int32_t x490 = -1;
	int32_t x491 = -11;
	volatile uint16_t x492 = UINT16_MAX;
	static int32_t t122 = -899289;

    t122 = ((x489&(x490==x491))^x492);

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int8_t x494 = INT8_MIN;
	volatile int8_t x495 = -7;
	uint8_t x496 = UINT8_MAX;

    t123 = ((x493&(x494==x495))^x496);

    if (t123 != 255LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x498 = -1;
	volatile int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MIN;
	static volatile int32_t t124 = -741;

    t124 = ((x497&(x498==x499))^x500);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	volatile int8_t x502 = 0;
	uint32_t x503 = UINT32_MAX;
	uint8_t x504 = UINT8_MAX;

    t125 = ((x501&(x502==x503))^x504);

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 9U;
	int32_t x507 = INT32_MAX;
	static uint32_t x508 = UINT32_MAX;
	uint32_t t126 = UINT32_MAX;

    t126 = ((x505&(x506==x507))^x508);

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x510 = UINT16_MAX;
	int16_t x511 = 7478;
	int8_t x512 = -1;
	int32_t t127 = -1061906511;

    t127 = ((x509&(x510==x511))^x512);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x515 = -1;
	static int32_t x516 = 68212;

    t128 = ((x513&(x514==x515))^x516);

    if (t128 != 68212LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	int64_t x519 = -1LL;
	uint8_t x520 = 2U;
	static int32_t t129 = -5;

    t129 = ((x517&(x518==x519))^x520);

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x521 = -1;
	static int8_t x522 = -6;
	static int8_t x523 = INT8_MIN;

    t130 = ((x521&(x522==x523))^x524);

    if (t130 != 413836LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 13U;
	volatile uint16_t x526 = 27U;
	uint64_t x527 = 3135169435LLU;
	uint8_t x528 = UINT8_MAX;
	volatile uint32_t t131 = 15U;

    t131 = ((x525&(x526==x527))^x528);

    if (t131 != 255U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	uint32_t x530 = 213584U;
	int32_t x531 = 250;
	uint64_t x532 = 12LLU;
	uint64_t t132 = 44899133469LLU;

    t132 = ((x529&(x530==x531))^x532);

    if (t132 != 12LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MAX;
	static int8_t x534 = INT8_MIN;
	volatile int64_t x535 = INT64_MIN;
	int32_t x536 = INT32_MIN;
	static int32_t t133 = INT32_MIN;

    t133 = ((x533&(x534==x535))^x536);

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -235420893LL;
	int64_t x538 = INT64_MIN;
	uint32_t x539 = 263706008U;
	int64_t x540 = INT64_MAX;
	int64_t t134 = INT64_MAX;

    t134 = ((x537&(x538==x539))^x540);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	uint8_t x542 = 1U;
	int8_t x544 = -1;
	static volatile int32_t t135 = 3282515;

    t135 = ((x541&(x542==x543))^x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 6U;
	static volatile int8_t x546 = INT8_MIN;
	int32_t x547 = -1;

    t136 = ((x545&(x546==x547))^x548);

    if (t136 != -7018) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 21;
	int8_t x550 = INT8_MIN;
	int32_t t137 = -1;

    t137 = ((x549&(x550==x551))^x552);

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	int8_t x554 = 0;
	int16_t x555 = INT16_MIN;
	uint16_t x556 = 21U;
	volatile int32_t t138 = -48883;

    t138 = ((x553&(x554==x555))^x556);

    if (t138 != 21) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x558 = 7U;
	uint16_t x560 = 72U;

    t139 = ((x557&(x558==x559))^x560);

    if (t139 != 72) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = 44684;
	int8_t x563 = INT8_MIN;
	static int8_t x564 = INT8_MIN;
	int32_t t140 = 1;

    t140 = ((x561&(x562==x563))^x564);

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = 5;
	uint32_t x566 = 2767919U;
	int16_t x567 = -1;
	static uint8_t x568 = 0U;
	volatile int32_t t141 = 31;

    t141 = ((x565&(x566==x567))^x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	static int32_t x570 = 180659819;
	static volatile int64_t x571 = -1LL;
	volatile uint32_t x572 = UINT32_MAX;
	int64_t t142 = 13LL;

    t142 = ((x569&(x570==x571))^x572);

    if (t142 != 4294967295LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 1691730113U;
	static uint8_t x574 = UINT8_MAX;
	int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MIN;
	volatile uint32_t t143 = 997464018U;

    t143 = ((x573&(x574==x575))^x576);

    if (t143 != 4294934528U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = 238084648;
	uint64_t x578 = UINT64_MAX;
	int32_t x579 = INT32_MAX;
	volatile int16_t x580 = INT16_MAX;
	volatile int32_t t144 = -1411155;

    t144 = ((x577&(x578==x579))^x580);

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 85LL;
	int16_t x582 = -1;
	static int32_t x583 = INT32_MIN;
	uint16_t x584 = 20U;

    t145 = ((x581&(x582==x583))^x584);

    if (t145 != 20LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	volatile int32_t x586 = 408;
	int16_t x588 = INT16_MIN;
	volatile int64_t t146 = 27172894LL;

    t146 = ((x585&(x586==x587))^x588);

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint8_t x589 = UINT8_MAX;
	uint16_t x590 = 562U;
	int64_t x591 = INT64_MAX;
	int64_t x592 = INT64_MIN;
	int64_t t147 = INT64_MIN;

    t147 = ((x589&(x590==x591))^x592);

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = 1;
	volatile int32_t x594 = INT32_MAX;
	static uint16_t x595 = 1310U;
	int32_t x596 = INT32_MIN;
	static volatile int32_t t148 = INT32_MIN;

    t148 = ((x593&(x594==x595))^x596);

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 1852907599503108LLU;
	volatile int32_t x598 = INT32_MIN;
	int64_t x599 = -400LL;
	int16_t x600 = INT16_MIN;
	uint64_t t149 = 2251744078349321LLU;

    t149 = ((x597&(x598==x599))^x600);

    if (t149 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	static int64_t x602 = INT64_MIN;

    t150 = ((x601&(x602==x603))^x604);

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 209610375LLU;
	uint16_t x606 = 1U;
	static int32_t x607 = INT32_MIN;
	uint32_t x608 = 828139U;
	uint64_t t151 = 247684099097836LLU;

    t151 = ((x605&(x606==x607))^x608);

    if (t151 != 828139LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x612 = INT16_MAX;

    t152 = ((x609&(x610==x611))^x612);

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x616 = 2;
	volatile int32_t t153 = -5072;

    t153 = ((x613&(x614==x615))^x616);

    if (t153 != 2) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 25U;
	uint8_t x619 = 33U;
	int16_t x620 = 28;

    t154 = ((x617&(x618==x619))^x620);

    if (t154 != 28) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	int16_t x623 = INT16_MAX;
	volatile uint32_t x624 = 407764885U;
	uint32_t t155 = 191U;

    t155 = ((x621&(x622==x623))^x624);

    if (t155 != 407764885U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 37U;
	int64_t x626 = INT64_MIN;
	int16_t x627 = -1;
	volatile int16_t x628 = 15;
	static int32_t t156 = -38380;

    t156 = ((x625&(x626==x627))^x628);

    if (t156 != 15) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x629 = 0;
	int8_t x630 = -1;
	uint32_t x631 = 60U;
	volatile uint8_t x632 = 3U;
	volatile int32_t t157 = 8;

    t157 = ((x629&(x630==x631))^x632);

    if (t157 != 3) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -1;
	static int16_t x635 = -1;
	uint64_t x636 = 26080269LLU;
	uint64_t t158 = 1328807816401474132LLU;

    t158 = ((x633&(x634==x635))^x636);

    if (t158 != 26080269LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x639 = INT8_MIN;
	static int64_t x640 = -164659277463302285LL;
	int64_t t159 = 39LL;

    t159 = ((x637&(x638==x639))^x640);

    if (t159 != -164659277463302285LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MAX;
	int64_t x642 = -1LL;
	static uint16_t x643 = UINT16_MAX;
	uint16_t x644 = 66U;
	int32_t t160 = 6689;

    t160 = ((x641&(x642==x643))^x644);

    if (t160 != 66) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 4362042U;
	volatile int64_t x646 = INT64_MIN;
	static volatile int64_t x648 = INT64_MAX;
	int64_t t161 = INT64_MAX;

    t161 = ((x645&(x646==x647))^x648);

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MIN;
	int64_t x652 = -1LL;

    t162 = ((x649&(x650==x651))^x652);

    if (t162 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	volatile uint16_t x654 = 10U;
	volatile int32_t x655 = INT32_MAX;
	int64_t x656 = -15782LL;
	int64_t t163 = 245825LL;

    t163 = ((x653&(x654==x655))^x656);

    if (t163 != -15782LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x657 = INT32_MIN;
	uint8_t x658 = 36U;
	int8_t x659 = 14;
	int16_t x660 = -603;
	int32_t t164 = 1319;

    t164 = ((x657&(x658==x659))^x660);

    if (t164 != -603) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = -1;
	static int16_t x662 = INT16_MIN;
	uint32_t x663 = 4252133U;
	volatile int32_t x664 = INT32_MAX;
	volatile int32_t t165 = INT32_MAX;

    t165 = ((x661&(x662==x663))^x664);

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 0;
	volatile int64_t x666 = -1LL;
	int64_t x668 = -1LL;
	volatile int64_t t166 = 358329LL;

    t166 = ((x665&(x666==x667))^x668);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1758105543218751603LL;
	volatile int32_t x670 = -1;
	int64_t x672 = INT64_MIN;
	volatile int64_t t167 = INT64_MIN;

    t167 = ((x669&(x670==x671))^x672);

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint64_t x674 = 525890124281888156LLU;
	volatile int8_t x675 = -47;
	int16_t x676 = 63;
	volatile int32_t t168 = -20;

    t168 = ((x673&(x674==x675))^x676);

    if (t168 != 63) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = 117;
	static int64_t x679 = 226788316635LL;
	uint16_t x680 = 114U;
	volatile int32_t t169 = -17381660;

    t169 = ((x677&(x678==x679))^x680);

    if (t169 != 114) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	int32_t x683 = 16970283;
	uint64_t x684 = 3121255263756LLU;
	volatile uint64_t t170 = 2697281601LLU;

    t170 = ((x681&(x682==x683))^x684);

    if (t170 != 3121255263756LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 303;
	uint8_t x686 = UINT8_MAX;
	int8_t x687 = -24;
	int32_t t171 = -20666645;

    t171 = ((x685&(x686==x687))^x688);

    if (t171 != -200036) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 5U;
	int64_t x691 = 1117214853069192723LL;
	int8_t x692 = -54;
	volatile int32_t t172 = 0;

    t172 = ((x689&(x690==x691))^x692);

    if (t172 != -54) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 84U;
	uint64_t x694 = 4052579855385748LLU;
	int16_t x695 = INT16_MIN;
	int32_t x696 = 859;
	static int32_t t173 = 11;

    t173 = ((x693&(x694==x695))^x696);

    if (t173 != 859) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x698 = UINT32_MAX;
	volatile uint64_t x699 = 78778946LLU;
	int16_t x700 = -1;
	int64_t t174 = -107701161537320119LL;

    t174 = ((x697&(x698==x699))^x700);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	int16_t x702 = INT16_MIN;
	static uint64_t x703 = 61LLU;
	uint16_t x704 = 394U;
	volatile int32_t t175 = -38052;

    t175 = ((x701&(x702==x703))^x704);

    if (t175 != 394) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = -11102;
	int16_t x706 = INT16_MIN;
	uint8_t x707 = 65U;
	int8_t x708 = INT8_MAX;
	int32_t t176 = -15;

    t176 = ((x705&(x706==x707))^x708);

    if (t176 != 127) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x710 = 0;
	int32_t x711 = INT32_MIN;
	static int64_t t177 = -1LL;

    t177 = ((x709&(x710==x711))^x712);

    if (t177 != 4294967295LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 92698353U;
	uint32_t x714 = UINT32_MAX;
	volatile int8_t x715 = -1;
	static uint32_t x716 = UINT32_MAX;
	static uint32_t t178 = 201670U;

    t178 = ((x713&(x714==x715))^x716);

    if (t178 != 4294967294U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	int64_t x718 = -5LL;
	uint32_t x719 = 1941295409U;
	volatile uint64_t t179 = 151176290LLU;

    t179 = ((x717&(x718==x719))^x720);

    if (t179 != 50027LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 1U;
	int8_t x722 = INT8_MIN;
	uint64_t x723 = 105404464LLU;
	static uint16_t x724 = 3028U;
	volatile int32_t t180 = 204215688;

    t180 = ((x721&(x722==x723))^x724);

    if (t180 != 3028) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x725 = INT8_MAX;
	static int8_t x726 = 7;
	uint8_t x727 = UINT8_MAX;
	uint16_t x728 = 63U;
	int32_t t181 = -5447;

    t181 = ((x725&(x726==x727))^x728);

    if (t181 != 63) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -2057189452LL;
	static int64_t x730 = 21394LL;
	static uint64_t x731 = 56728LLU;
	int64_t x732 = INT64_MIN;
	volatile int64_t t182 = INT64_MIN;

    t182 = ((x729&(x730==x731))^x732);

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x734 = INT16_MIN;
	int8_t x736 = INT8_MAX;
	static int32_t t183 = 0;

    t183 = ((x733&(x734==x735))^x736);

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = INT64_MAX;
	uint32_t x739 = UINT32_MAX;
	int64_t t184 = -18LL;

    t184 = ((x737&(x738==x739))^x740);

    if (t184 != -71535LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	volatile int32_t x742 = INT32_MIN;
	int64_t x743 = INT64_MIN;

    t185 = ((x741&(x742==x743))^x744);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MAX;
	static uint64_t x746 = 40LLU;
	static uint16_t x748 = 119U;
	int32_t t186 = -21445349;

    t186 = ((x745&(x746==x747))^x748);

    if (t186 != 119) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 8385;
	int32_t x750 = INT32_MIN;
	static int32_t x751 = INT32_MAX;
	uint8_t x752 = 86U;

    t187 = ((x749&(x750==x751))^x752);

    if (t187 != 86) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = INT16_MIN;
	int64_t x756 = INT64_MIN;

    t188 = ((x753&(x754==x755))^x756);

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 7240LLU;
	uint16_t x758 = 11U;
	volatile int8_t x759 = INT8_MIN;

    t189 = ((x757&(x758==x759))^x760);

    if (t189 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 47U;
	int16_t x762 = -4;
	volatile int16_t x764 = -2995;
	static int32_t t190 = 2;

    t190 = ((x761&(x762==x763))^x764);

    if (t190 != -2995) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MIN;
	int64_t x767 = INT64_MIN;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = -26757230;

    t191 = ((x765&(x766==x767))^x768);

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	int32_t x771 = -3484;
	int64_t x772 = -13274390393860LL;
	volatile int64_t t192 = -274067023434098613LL;

    t192 = ((x769&(x770==x771))^x772);

    if (t192 != -13274390393860LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x774 = 13674U;
	volatile int8_t x776 = 0;
	static uint32_t t193 = 966086181U;

    t193 = ((x773&(x774==x775))^x776);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint64_t x778 = 706866202056308LLU;
	uint16_t x779 = UINT16_MAX;
	uint64_t x780 = 1065118361306031LLU;
	static uint64_t t194 = 1015296LLU;

    t194 = ((x777&(x778==x779))^x780);

    if (t194 != 1065118361306031LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x782 = 27835653U;
	volatile uint16_t x783 = UINT16_MAX;
	uint64_t x784 = 5718LLU;
	uint64_t t195 = 4013598031LLU;

    t195 = ((x781&(x782==x783))^x784);

    if (t195 != 5718LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = 124808337LL;
	uint8_t x786 = 0U;
	uint16_t x787 = 15275U;

    t196 = ((x785&(x786==x787))^x788);

    if (t196 != 65535LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 224748199606626LLU;
	volatile uint8_t x791 = UINT8_MAX;
	int8_t x792 = INT8_MAX;
	volatile uint64_t t197 = 716988648940443371LLU;

    t197 = ((x789&(x790==x791))^x792);

    if (t197 != 127LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = UINT16_MAX;
	int32_t x794 = 9;
	int8_t x795 = INT8_MIN;
	volatile int32_t t198 = -920993132;

    t198 = ((x793&(x794==x795))^x796);

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MIN;
	uint8_t x798 = 78U;
	int32_t x799 = INT32_MIN;

    t199 = ((x797&(x798==x799))^x800);

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

