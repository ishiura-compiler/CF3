
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

static volatile int64_t x1 = -1LL;
volatile uint16_t x2 = 7U;
int16_t x3 = INT16_MIN;
uint64_t x16 = UINT64_MAX;
volatile int8_t x20 = -1;
int64_t x36 = INT64_MIN;
static int64_t x48 = INT64_MAX;
static int8_t x51 = INT8_MAX;
int16_t x57 = 165;
static volatile uint8_t x58 = 9U;
uint32_t x59 = 1083U;
static volatile int32_t t11 = 54096399;
uint64_t x63 = 12652687326LLU;
int8_t x65 = INT8_MIN;
int64_t x70 = 2LL;
static int16_t x77 = INT16_MAX;
volatile uint16_t x78 = UINT16_MAX;
int32_t x87 = -46572435;
static uint16_t x88 = 198U;
volatile int64_t x89 = INT64_MAX;
int8_t x95 = INT8_MAX;
static int32_t x96 = -2432;
volatile uint8_t x98 = 56U;
int16_t x100 = 11124;
int32_t x103 = 2148756;
static int16_t x105 = -838;
volatile int32_t t23 = 78;
int32_t t24 = 69417729;
volatile int32_t x114 = -231;
int16_t x132 = INT16_MIN;
volatile int32_t t29 = -217;
int16_t x146 = INT16_MIN;
static int32_t x154 = INT32_MIN;
int8_t x162 = -12;
volatile int32_t x166 = INT32_MIN;
int16_t x168 = -1;
int8_t x179 = -1;
uint32_t x183 = 68079771U;
int8_t x187 = INT8_MAX;
int32_t x188 = -1;
volatile int32_t t40 = 3192;
volatile int32_t t41 = 35200;
volatile int32_t t42 = -27409;
uint64_t x197 = UINT64_MAX;
static int32_t x202 = INT32_MAX;
uint32_t x210 = 0U;
int32_t x215 = 214114;
int32_t t47 = 113627818;
int16_t x217 = INT16_MIN;
uint64_t x232 = 41LLU;
volatile uint64_t x237 = UINT64_MAX;
uint16_t x256 = 0U;
static int32_t x259 = INT32_MIN;
static int16_t x260 = 0;
int16_t x266 = -1;
int8_t x270 = -9;
volatile int32_t x276 = 3586;
uint64_t x280 = 1049890912132637LLU;
uint16_t x289 = 56U;
int64_t x291 = INT64_MIN;
uint32_t x293 = 132898672U;
int16_t x300 = -1645;
uint32_t x302 = UINT32_MAX;
uint32_t x304 = UINT32_MAX;
int8_t x306 = 3;
uint16_t x307 = UINT16_MAX;
uint16_t x313 = 31670U;
static uint32_t x315 = 573249U;
static int8_t x320 = -1;
int64_t x322 = INT64_MIN;
volatile uint16_t x328 = UINT16_MAX;
int32_t t81 = 46531690;
uint16_t x354 = 0U;
int64_t x355 = -353LL;
int8_t x356 = -1;
int32_t t83 = 1344;
volatile int32_t x363 = -1;
uint32_t x364 = 8660U;
int16_t x367 = -1;
int16_t x368 = INT16_MAX;
volatile int32_t t85 = -9;
static int64_t x369 = INT64_MAX;
static volatile int32_t t86 = -8;
volatile int8_t x375 = INT8_MAX;
static volatile int32_t t88 = -3416;
volatile int32_t t91 = -5732;
int16_t x397 = INT16_MIN;
uint64_t x398 = UINT64_MAX;
volatile uint16_t x415 = 209U;
int8_t x416 = INT8_MAX;
static volatile int8_t x418 = 3;
int32_t x430 = -24906322;
volatile int64_t x435 = INT64_MAX;
int64_t x437 = -1LL;
int32_t t101 = -574211540;
uint32_t x445 = 4U;
int8_t x447 = -1;
int32_t x449 = INT32_MAX;
int32_t x456 = INT32_MIN;
static int32_t x457 = INT32_MAX;
static int32_t t106 = 6;
static int16_t x469 = INT16_MAX;
static int8_t x470 = INT8_MIN;
volatile int32_t t110 = -85376;
uint8_t x478 = 0U;
uint16_t x479 = UINT16_MAX;
int64_t x481 = INT64_MIN;
int32_t t112 = 409876915;
uint64_t x489 = 106733617038LLU;
int16_t x496 = INT16_MIN;
int64_t x501 = 34863LL;
volatile int16_t x504 = -4;
static int64_t x505 = INT64_MIN;
volatile int16_t x508 = -2;
int64_t x511 = -1LL;
int32_t t118 = 1668;
uint32_t x514 = 1108531U;
int8_t x517 = 7;
uint8_t x518 = 6U;
uint64_t x520 = UINT64_MAX;
volatile int32_t t120 = -10343481;
volatile uint8_t x526 = UINT8_MAX;
int16_t x528 = -8;
uint32_t x537 = UINT32_MAX;
static int32_t t125 = 44;
uint32_t x543 = 14U;
volatile int16_t x545 = INT16_MAX;
volatile int32_t t127 = -2;
volatile int32_t t128 = 573;
volatile uint16_t x555 = UINT16_MAX;
uint8_t x556 = 56U;
static uint32_t x562 = 3U;
static volatile uint64_t x566 = UINT64_MAX;
int32_t x568 = 1;
uint64_t x578 = 1949847LLU;
int32_t x579 = -32582;
volatile uint16_t x582 = UINT16_MAX;
int32_t t135 = 29350186;
static int16_t x591 = -1;
volatile int32_t x598 = -5885;
int8_t x600 = 0;
volatile uint32_t x602 = UINT32_MAX;
static int8_t x604 = -41;
volatile int32_t x605 = -1;
volatile int8_t x607 = -1;
volatile int32_t t142 = 46455;
int16_t x621 = INT16_MAX;
int16_t x628 = INT16_MIN;
int32_t t144 = 144685;
int64_t x632 = 169569805LL;
static int32_t x642 = 16771843;
static int8_t x643 = INT8_MAX;
static int64_t x648 = INT64_MIN;
int8_t x651 = INT8_MAX;
uint8_t x652 = UINT8_MAX;
volatile int32_t t148 = 56797812;
int16_t x657 = INT16_MAX;
static volatile uint32_t x661 = UINT32_MAX;
volatile uint16_t x665 = 7U;
static volatile int16_t x666 = INT16_MIN;
uint64_t x667 = 41471LLU;
volatile uint16_t x668 = UINT16_MAX;
uint16_t x671 = UINT16_MAX;
int32_t t154 = -2938;
uint64_t x682 = UINT64_MAX;
int32_t t156 = 814;
int16_t x694 = -34;
int16_t x706 = INT16_MIN;
uint16_t x717 = 24278U;
static int64_t x724 = INT64_MIN;
int64_t x725 = -23894LL;
volatile int32_t t170 = -56;
uint32_t x770 = 663581U;
static int64_t x774 = INT64_MIN;
int8_t x778 = -1;
static uint32_t x781 = 42U;
int32_t x784 = 78;
static volatile int16_t x785 = INT16_MAX;
static uint32_t x786 = 19572750U;
int32_t t176 = 13;
static int8_t x791 = INT8_MIN;
int64_t x802 = -1LL;
int32_t t179 = 4888984;
uint64_t x806 = 7008603514344LLU;
int64_t x819 = -10793774787LL;
static uint32_t x832 = 51885U;
volatile int32_t t183 = -1;
uint64_t x833 = UINT64_MAX;
int32_t t184 = -3;
static int32_t x837 = 915;
int16_t x840 = -1;
int32_t x841 = INT32_MIN;
volatile int32_t t186 = -374;
uint8_t x845 = 60U;
volatile int16_t x852 = 284;
static uint64_t x855 = 3LLU;
static volatile int64_t x856 = 6891011087810LL;
volatile int32_t x859 = INT32_MAX;
static int32_t x870 = -1;
volatile int16_t x871 = -335;
int64_t x873 = -9216800LL;
int64_t x886 = -4159294109691066273LL;
volatile int32_t t197 = -1485;
int16_t x897 = -1;
uint64_t x898 = 1018933185LLU;
int8_t x899 = INT8_MAX;
int8_t x900 = INT8_MAX;


void f0(void) {
    	uint16_t x4 = 62U;
	volatile int32_t t0 = 2827099;

    t0 = (x1==(x2-(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	int32_t x6 = -134;
	uint8_t x7 = 18U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 5350;

    t1 = (x5==(x6-(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x13 = INT32_MAX;
	int64_t x14 = -10529821LL;
	int64_t x15 = 1141LL;
	int32_t t2 = -17997953;

    t2 = (x13==(x14-(x15&x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 8410948LLU;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MAX;
	static int32_t t3 = -889;

    t3 = (x17==(x18-(x19&x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = -2125LL;
	static volatile int8_t x30 = -1;
	uint8_t x31 = 48U;
	static uint16_t x32 = 7U;
	volatile int32_t t4 = -3405204;

    t4 = (x29==(x30-(x31&x32)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = 1U;
	uint8_t x34 = UINT8_MAX;
	uint8_t x35 = UINT8_MAX;
	int32_t t5 = -66;

    t5 = (x33==(x34-(x35&x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x37 = INT16_MIN;
	uint64_t x38 = 274731LLU;
	int64_t x39 = -326798017LL;
	int16_t x40 = INT16_MAX;
	static int32_t t6 = 13;

    t6 = (x37==(x38-(x39&x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x41 = 20037669U;
	int8_t x42 = 24;
	uint64_t x43 = UINT64_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t7 = -91;

    t7 = (x41==(x42-(x43&x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = -1;
	uint8_t x46 = 11U;
	uint16_t x47 = UINT16_MAX;
	int32_t t8 = -6860;

    t8 = (x45==(x46-(x47&x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint16_t x49 = 166U;
	uint32_t x50 = UINT32_MAX;
	int8_t x52 = -1;
	int32_t t9 = -6123;

    t9 = (x49==(x50-(x51&x52)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = -1;
	int8_t x54 = INT8_MAX;
	int32_t x55 = -1;
	int64_t x56 = -1LL;
	volatile int32_t t10 = -20632666;

    t10 = (x53==(x54-(x55&x56)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x60 = 13628;

    t11 = (x57==(x58-(x59&x60)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 6U;
	int32_t x62 = -64;
	uint16_t x64 = 1U;
	int32_t t12 = -2475913;

    t12 = (x61==(x62-(x63&x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x66 = 6443795U;
	static int8_t x67 = INT8_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t13 = 5840207;

    t13 = (x65==(x66-(x67&x68)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x69 = -1LL;
	uint32_t x71 = UINT32_MAX;
	int16_t x72 = 1;
	volatile int32_t t14 = 39821;

    t14 = (x69==(x70-(x71&x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MIN;
	uint16_t x75 = 8864U;
	uint8_t x76 = 9U;
	static int32_t t15 = -1814;

    t15 = (x73==(x74-(x75&x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x79 = -1066;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t16 = 13767;

    t16 = (x77==(x78-(x79&x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = -2;
	uint64_t x82 = 41351LLU;
	int32_t x83 = 32509749;
	int8_t x84 = -1;
	static int32_t t17 = 1209;

    t17 = (x81==(x82-(x83&x84)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x86 = 3U;
	volatile int32_t t18 = -125478506;

    t18 = (x85==(x86-(x87&x88)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x90 = -1;
	static uint16_t x91 = 339U;
	int8_t x92 = -1;
	volatile int32_t t19 = 87466888;

    t19 = (x89==(x90-(x91&x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MIN;
	int32_t t20 = -3;

    t20 = (x93==(x94-(x95&x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x97 = 19090554906LLU;
	uint32_t x99 = UINT32_MAX;
	int32_t t21 = 26;

    t21 = (x97==(x98-(x99&x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t22 = -52756;

    t22 = (x101==(x102-(x103&x104)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x106 = INT8_MAX;
	static volatile int8_t x107 = INT8_MIN;
	static int32_t x108 = -4;

    t23 = (x105==(x106-(x107&x108)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = 1866510020U;
	static volatile uint32_t x111 = 752U;
	int8_t x112 = 0;

    t24 = (x109==(x110-(x111&x112)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x113 = 309U;
	static volatile uint64_t x115 = 19LLU;
	uint64_t x116 = UINT64_MAX;
	int32_t t25 = -228;

    t25 = (x113==(x114-(x115&x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x117 = -7503;
	int8_t x118 = INT8_MAX;
	volatile int8_t x119 = -1;
	int16_t x120 = 1;
	volatile int32_t t26 = -3612;

    t26 = (x117==(x118-(x119&x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x125 = 3202396LL;
	static int8_t x126 = INT8_MIN;
	volatile int16_t x127 = -1;
	uint32_t x128 = 3919U;
	int32_t t27 = -7;

    t27 = (x125==(x126-(x127&x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x129 = 6152292592018LLU;
	int8_t x130 = INT8_MIN;
	int32_t x131 = -10816528;
	int32_t t28 = 956;

    t28 = (x129==(x130-(x131&x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = -1;
	volatile int32_t x135 = -1936931;
	volatile int8_t x136 = INT8_MAX;

    t29 = (x133==(x134-(x135&x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = UINT64_MAX;
	int16_t x142 = -1;
	volatile int8_t x143 = INT8_MIN;
	volatile int32_t x144 = 54;
	volatile int32_t t30 = -1;

    t30 = (x141==(x142-(x143&x144)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = -1;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MAX;
	int32_t t31 = 10903;

    t31 = (x145==(x146-(x147&x148)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x149 = INT64_MAX;
	static int8_t x150 = INT8_MAX;
	volatile int8_t x151 = INT8_MIN;
	uint8_t x152 = 0U;
	static volatile int32_t t32 = 3828803;

    t32 = (x149==(x150-(x151&x152)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x153 = UINT8_MAX;
	uint64_t x155 = 418461222275098LLU;
	uint16_t x156 = 14U;
	int32_t t33 = 618;

    t33 = (x153==(x154-(x155&x156)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x161 = 16488423;
	int64_t x163 = 1199223549LL;
	volatile uint16_t x164 = UINT16_MAX;
	static int32_t t34 = -1;

    t34 = (x161==(x162-(x163&x164)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	volatile int32_t t35 = -4;

    t35 = (x165==(x166-(x167&x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x169 = -1;
	volatile uint32_t x170 = 4326U;
	static uint64_t x171 = 1669434LLU;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t36 = -62;

    t36 = (x169==(x170-(x171&x172)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = 2711169LL;
	volatile int16_t x174 = -26;
	static volatile int8_t x175 = -1;
	uint64_t x176 = UINT64_MAX;
	int32_t t37 = -30946;

    t37 = (x173==(x174-(x175&x176)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x177 = 5;
	uint32_t x178 = 13U;
	int32_t x180 = INT32_MAX;
	int32_t t38 = 854631;

    t38 = (x177==(x178-(x179&x180)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	static int16_t x184 = INT16_MIN;
	static int32_t t39 = 28589;

    t39 = (x181==(x182-(x183&x184)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x185 = -1LL;
	int16_t x186 = 3;

    t40 = (x185==(x186-(x187&x188)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x189 = 55U;
	static int64_t x190 = -1LL;
	int16_t x191 = -1;
	static int32_t x192 = 45051766;

    t41 = (x189==(x190-(x191&x192)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x193 = 6887U;
	static int32_t x194 = -7085571;
	uint32_t x195 = 4U;
	int16_t x196 = 3;

    t42 = (x193==(x194-(x195&x196)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x198 = INT8_MIN;
	int64_t x199 = -3173541319LL;
	int8_t x200 = 3;
	int32_t t43 = 3145;

    t43 = (x197==(x198-(x199&x200)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x201 = INT32_MIN;
	uint64_t x203 = 13561901LLU;
	volatile int8_t x204 = -1;
	volatile int32_t t44 = -6941;

    t44 = (x201==(x202-(x203&x204)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x205 = 1;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MAX;
	static int32_t t45 = 1249084;

    t45 = (x205==(x206-(x207&x208)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = INT16_MIN;
	int32_t x211 = INT32_MIN;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t46 = 1;

    t46 = (x209==(x210-(x211&x212)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x213 = 70U;
	int64_t x214 = -50305310884LL;
	int16_t x216 = 2;

    t47 = (x213==(x214-(x215&x216)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x218 = 1462;
	static int8_t x219 = INT8_MIN;
	static int32_t x220 = -62;
	volatile int32_t t48 = -443625519;

    t48 = (x217==(x218-(x219&x220)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	int32_t x224 = -1;
	volatile int32_t t49 = 445532981;

    t49 = (x221==(x222-(x223&x224)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x225 = INT16_MIN;
	uint32_t x226 = 8903U;
	static volatile uint32_t x227 = 306479U;
	static int64_t x228 = 577797505596199LL;
	int32_t t50 = -627160;

    t50 = (x225==(x226-(x227&x228)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x229 = -23187218LL;
	int16_t x230 = -322;
	int8_t x231 = -1;
	volatile int32_t t51 = 15;

    t51 = (x229==(x230-(x231&x232)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x233 = UINT64_MAX;
	int64_t x234 = -30354287LL;
	int16_t x235 = -14227;
	int16_t x236 = -1;
	int32_t t52 = 97045517;

    t52 = (x233==(x234-(x235&x236)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x238 = UINT32_MAX;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = 3074512LL;
	static volatile int32_t t53 = 7865;

    t53 = (x237==(x238-(x239&x240)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x241 = 30LLU;
	int8_t x242 = -11;
	uint16_t x243 = 4U;
	volatile int64_t x244 = INT64_MIN;
	static int32_t t54 = 76175;

    t54 = (x241==(x242-(x243&x244)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = INT16_MAX;
	volatile int64_t x246 = INT64_MAX;
	int16_t x247 = -1;
	uint32_t x248 = 1544U;
	volatile int32_t t55 = 16;

    t55 = (x245==(x246-(x247&x248)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x249 = 0;
	volatile int32_t x250 = INT32_MIN;
	static int32_t x251 = -1;
	uint32_t x252 = 3U;
	int32_t t56 = -48978;

    t56 = (x249==(x250-(x251&x252)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x253 = 9216738U;
	static int16_t x254 = INT16_MIN;
	static volatile int32_t x255 = -1;
	static int32_t t57 = -683946561;

    t57 = (x253==(x254-(x255&x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x257 = -1LL;
	uint16_t x258 = 1419U;
	volatile int32_t t58 = 14;

    t58 = (x257==(x258-(x259&x260)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = INT64_MIN;
	volatile int16_t x262 = -53;
	static int16_t x263 = INT16_MAX;
	static int8_t x264 = INT8_MAX;
	static volatile int32_t t59 = -51625852;

    t59 = (x261==(x262-(x263&x264)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x265 = 10984078739LLU;
	int64_t x267 = INT64_MIN;
	int8_t x268 = 14;
	int32_t t60 = 301711;

    t60 = (x265==(x266-(x267&x268)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x269 = -8;
	uint8_t x271 = 8U;
	uint32_t x272 = UINT32_MAX;
	static volatile int32_t t61 = -141095643;

    t61 = (x269==(x270-(x271&x272)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x273 = -504972669985298293LL;
	static int8_t x274 = INT8_MIN;
	uint16_t x275 = UINT16_MAX;
	int32_t t62 = 12918;

    t62 = (x273==(x274-(x275&x276)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	volatile int16_t x279 = INT16_MIN;
	int32_t t63 = 2492275;

    t63 = (x277==(x278-(x279&x280)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	volatile int32_t x283 = 5792;
	uint32_t x284 = 177769U;
	volatile int32_t t64 = 26383373;

    t64 = (x281==(x282-(x283&x284)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x285 = 1858U;
	int64_t x286 = 7LL;
	int32_t x287 = -1;
	uint32_t x288 = UINT32_MAX;
	static int32_t t65 = -2089512;

    t65 = (x285==(x286-(x287&x288)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x290 = INT8_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t66 = 548241246;

    t66 = (x289==(x290-(x291&x292)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x294 = 36;
	int8_t x295 = -5;
	uint32_t x296 = 113U;
	volatile int32_t t67 = -3576660;

    t67 = (x293==(x294-(x295&x296)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x297 = 40U;
	int64_t x298 = INT64_MIN;
	static uint64_t x299 = 723340081599837LLU;
	int32_t t68 = -124;

    t68 = (x297==(x298-(x299&x300)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x301 = 110U;
	volatile int16_t x303 = -1954;
	int32_t t69 = -10006874;

    t69 = (x301==(x302-(x303&x304)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	int32_t t70 = 346942;

    t70 = (x305==(x306-(x307&x308)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = 1;
	volatile int64_t x310 = -2151801613521493LL;
	uint32_t x311 = 730U;
	static volatile int64_t x312 = 11012888979LL;
	int32_t t71 = 8474561;

    t71 = (x309==(x310-(x311&x312)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x314 = -2;
	int16_t x316 = INT16_MIN;
	int32_t t72 = -43624163;

    t72 = (x313==(x314-(x315&x316)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x317 = 1017LLU;
	int64_t x318 = 108436581809LL;
	static int32_t x319 = INT32_MAX;
	volatile int32_t t73 = -211736353;

    t73 = (x317==(x318-(x319&x320)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x323 = -1;
	static uint64_t x324 = UINT64_MAX;
	static volatile int32_t t74 = -25858;

    t74 = (x321==(x322-(x323&x324)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x325 = 6LLU;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = 25U;
	int32_t t75 = -40879;

    t75 = (x325==(x326-(x327&x328)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x329 = -35;
	static int8_t x330 = -1;
	int8_t x331 = -1;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t76 = -547941;

    t76 = (x329==(x330-(x331&x332)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x333 = 2636692551LLU;
	volatile uint16_t x334 = 11U;
	uint16_t x335 = 289U;
	static int64_t x336 = 214127058LL;
	volatile int32_t t77 = 2002;

    t77 = (x333==(x334-(x335&x336)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = 10;
	volatile int8_t x338 = INT8_MAX;
	static int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t78 = 31702645;

    t78 = (x337==(x338-(x339&x340)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = -1LL;
	volatile uint16_t x342 = 118U;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = INT8_MIN;
	static int32_t t79 = 1;

    t79 = (x341==(x342-(x343&x344)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x345 = -1;
	int64_t x346 = INT64_MAX;
	uint8_t x347 = 8U;
	int32_t x348 = 2296;
	int32_t t80 = 3872699;

    t80 = (x345==(x346-(x347&x348)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = INT32_MIN;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MIN;
	static uint64_t x352 = UINT64_MAX;

    t81 = (x349==(x350-(x351&x352)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x353 = 1U;
	int32_t t82 = -151;

    t82 = (x353==(x354-(x355&x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x357 = 76140490LLU;
	static uint64_t x358 = 30299646340928173LLU;
	static int8_t x359 = -1;
	int8_t x360 = INT8_MIN;

    t83 = (x357==(x358-(x359&x360)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x361 = 0;
	uint64_t x362 = 26957845574047637LLU;
	volatile int32_t t84 = -5;

    t84 = (x361==(x362-(x363&x364)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x365 = INT64_MAX;
	int8_t x366 = INT8_MIN;

    t85 = (x365==(x366-(x367&x368)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x370 = INT8_MIN;
	int32_t x371 = -1;
	volatile int16_t x372 = -1;

    t86 = (x369==(x370-(x371&x372)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = 12349489;
	uint64_t x374 = 4823248378243210LLU;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t87 = 16147927;

    t87 = (x373==(x374-(x375&x376)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = INT64_MIN;
	static volatile int32_t x378 = 339150197;
	int64_t x379 = INT64_MIN;
	static int32_t x380 = 563750;

    t88 = (x377==(x378-(x379&x380)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x381 = -44;
	int32_t x382 = -1;
	uint16_t x383 = 23U;
	uint16_t x384 = 14827U;
	int32_t t89 = 64258;

    t89 = (x381==(x382-(x383&x384)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x389 = 900LLU;
	static int8_t x390 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t90 = 134413395;

    t90 = (x389==(x390-(x391&x392)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x393 = INT16_MIN;
	uint8_t x394 = UINT8_MAX;
	static volatile int16_t x395 = 0;
	int8_t x396 = INT8_MIN;

    t91 = (x393==(x394-(x395&x396)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x399 = UINT32_MAX;
	int32_t x400 = -171;
	volatile int32_t t92 = -877;

    t92 = (x397==(x398-(x399&x400)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x401 = INT8_MAX;
	volatile int64_t x402 = INT64_MAX;
	static volatile int64_t x403 = INT64_MIN;
	int16_t x404 = 10757;
	volatile int32_t t93 = 0;

    t93 = (x401==(x402-(x403&x404)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x409 = 18U;
	int32_t x410 = INT32_MAX;
	int16_t x411 = -1;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t94 = 16391660;

    t94 = (x409==(x410-(x411&x412)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = INT16_MAX;
	int32_t x414 = -12136443;
	volatile int32_t t95 = 25895908;

    t95 = (x413==(x414-(x415&x416)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x417 = INT16_MIN;
	uint32_t x419 = 59815U;
	int32_t x420 = 20859027;
	static int32_t t96 = -127;

    t96 = (x417==(x418-(x419&x420)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x421 = 49576821541101205LLU;
	uint64_t x422 = 59002LLU;
	int64_t x423 = INT64_MIN;
	int64_t x424 = -1LL;
	static int32_t t97 = -219482;

    t97 = (x421==(x422-(x423&x424)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x425 = INT32_MIN;
	volatile uint64_t x426 = UINT64_MAX;
	static int8_t x427 = INT8_MIN;
	int32_t x428 = -1;
	int32_t t98 = -3;

    t98 = (x425==(x426-(x427&x428)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x429 = UINT8_MAX;
	int64_t x431 = INT64_MIN;
	int16_t x432 = -37;
	int32_t t99 = -412829;

    t99 = (x429==(x430-(x431&x432)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	volatile int16_t x434 = INT16_MIN;
	int64_t x436 = INT64_MIN;
	volatile int32_t t100 = 1;

    t100 = (x433==(x434-(x435&x436)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x438 = -584545LL;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MAX;

    t101 = (x437==(x438-(x439&x440)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x441 = INT32_MIN;
	int64_t x442 = -129076846LL;
	int32_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	int32_t t102 = -5;

    t102 = (x441==(x442-(x443&x444)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x446 = 528472224U;
	volatile uint16_t x448 = 487U;
	int32_t t103 = -496;

    t103 = (x445==(x446-(x447&x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x450 = 1176U;
	uint8_t x451 = 1U;
	uint64_t x452 = 399824533LLU;
	static volatile int32_t t104 = 1;

    t104 = (x449==(x450-(x451&x452)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x453 = 577U;
	int8_t x454 = -4;
	uint8_t x455 = 4U;
	volatile int32_t t105 = 4;

    t105 = (x453==(x454-(x455&x456)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x458 = 89U;
	volatile int8_t x459 = -10;
	static int8_t x460 = -1;

    t106 = (x457==(x458-(x459&x460)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x461 = 1926U;
	volatile uint8_t x462 = 7U;
	int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MIN;
	volatile int32_t t107 = -515826884;

    t107 = (x461==(x462-(x463&x464)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x465 = -1;
	volatile uint8_t x466 = UINT8_MAX;
	uint8_t x467 = 3U;
	int32_t x468 = INT32_MAX;
	int32_t t108 = 233;

    t108 = (x465==(x466-(x467&x468)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x471 = -1;
	static uint16_t x472 = 5267U;
	int32_t t109 = -74060;

    t109 = (x469==(x470-(x471&x472)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x473 = UINT8_MAX;
	int16_t x474 = INT16_MAX;
	uint8_t x475 = 0U;
	int32_t x476 = INT32_MIN;

    t110 = (x473==(x474-(x475&x476)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x477 = 0;
	static int64_t x480 = -141LL;
	int32_t t111 = -175328;

    t111 = (x477==(x478-(x479&x480)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x482 = 24U;
	static uint64_t x483 = 460937089773625895LLU;
	int32_t x484 = INT32_MIN;

    t112 = (x481==(x482-(x483&x484)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x485 = 10;
	volatile int16_t x486 = INT16_MAX;
	volatile uint64_t x487 = UINT64_MAX;
	uint64_t x488 = 20LLU;
	volatile int32_t t113 = 586;

    t113 = (x485==(x486-(x487&x488)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x490 = 933U;
	volatile int8_t x491 = 3;
	volatile int8_t x492 = INT8_MAX;
	volatile int32_t t114 = -22139808;

    t114 = (x489==(x490-(x491&x492)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x493 = -3592;
	uint16_t x494 = UINT16_MAX;
	uint32_t x495 = 28U;
	volatile int32_t t115 = -11340545;

    t115 = (x493==(x494-(x495&x496)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x502 = -1;
	int64_t x503 = -1LL;
	static volatile int32_t t116 = -415;

    t116 = (x501==(x502-(x503&x504)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x506 = 21U;
	int32_t x507 = INT32_MAX;
	volatile int32_t t117 = -332435490;

    t117 = (x505==(x506-(x507&x508)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x509 = 31U;
	uint32_t x510 = 83760533U;
	int16_t x512 = 53;

    t118 = (x509==(x510-(x511&x512)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x513 = 1;
	uint64_t x515 = 155578285397990377LLU;
	volatile uint32_t x516 = 16682459U;
	int32_t t119 = 108;

    t119 = (x513==(x514-(x515&x516)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x519 = -1;

    t120 = (x517==(x518-(x519&x520)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x521 = -1;
	volatile uint8_t x522 = 57U;
	int8_t x523 = INT8_MAX;
	volatile uint32_t x524 = UINT32_MAX;
	int32_t t121 = -128108287;

    t121 = (x521==(x522-(x523&x524)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x525 = -1;
	int64_t x527 = -1LL;
	static volatile int32_t t122 = -1481466;

    t122 = (x525==(x526-(x527&x528)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x529 = -1;
	uint16_t x530 = 4U;
	static int32_t x531 = INT32_MIN;
	volatile uint64_t x532 = 120019000310625167LLU;
	volatile int32_t t123 = -63841460;

    t123 = (x529==(x530-(x531&x532)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x533 = INT64_MIN;
	int16_t x534 = -1;
	int32_t x535 = INT32_MIN;
	volatile int64_t x536 = -1LL;
	volatile int32_t t124 = -211471989;

    t124 = (x533==(x534-(x535&x536)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x538 = -1;
	static int32_t x539 = INT32_MAX;
	volatile int32_t x540 = 31206031;

    t125 = (x537==(x538-(x539&x540)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x541 = 23414569224651LLU;
	int16_t x542 = -1;
	int8_t x544 = -37;
	volatile int32_t t126 = 3878;

    t126 = (x541==(x542-(x543&x544)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x546 = 1726LL;
	int16_t x547 = 737;
	int8_t x548 = -1;

    t127 = (x545==(x546-(x547&x548)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x549 = 10U;
	uint64_t x550 = 97332278323LLU;
	int16_t x551 = 9;
	uint32_t x552 = UINT32_MAX;

    t128 = (x549==(x550-(x551&x552)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x553 = INT32_MIN;
	static volatile int16_t x554 = -7186;
	int32_t t129 = 486697119;

    t129 = (x553==(x554-(x555&x556)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x557 = UINT32_MAX;
	static int32_t x558 = 4618989;
	static uint16_t x559 = 32U;
	int32_t x560 = -1;
	int32_t t130 = -1;

    t130 = (x557==(x558-(x559&x560)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x561 = INT64_MAX;
	static int8_t x563 = INT8_MAX;
	volatile int64_t x564 = -2LL;
	volatile int32_t t131 = 0;

    t131 = (x561==(x562-(x563&x564)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x565 = -14LL;
	volatile int8_t x567 = INT8_MAX;
	int32_t t132 = -4605;

    t132 = (x565==(x566-(x567&x568)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x569 = -1;
	uint32_t x570 = UINT32_MAX;
	uint8_t x571 = 7U;
	volatile int8_t x572 = INT8_MIN;
	static volatile int32_t t133 = 22;

    t133 = (x569==(x570-(x571&x572)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x577 = INT64_MIN;
	int32_t x580 = -54;
	int32_t t134 = 0;

    t134 = (x577==(x578-(x579&x580)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x581 = 918923504;
	static int32_t x583 = INT32_MAX;
	static int8_t x584 = 24;

    t135 = (x581==(x582-(x583&x584)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x589 = INT16_MIN;
	int32_t x590 = -22587677;
	uint64_t x592 = 639261123742441001LLU;
	int32_t t136 = -100799813;

    t136 = (x589==(x590-(x591&x592)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x593 = -1;
	static int16_t x594 = 4750;
	volatile uint64_t x595 = UINT64_MAX;
	static int64_t x596 = 1022693094245325LL;
	int32_t t137 = -5;

    t137 = (x593==(x594-(x595&x596)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x597 = INT8_MAX;
	uint8_t x599 = UINT8_MAX;
	volatile int32_t t138 = -32081343;

    t138 = (x597==(x598-(x599&x600)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x601 = UINT64_MAX;
	int16_t x603 = INT16_MAX;
	volatile int32_t t139 = 25759094;

    t139 = (x601==(x602-(x603&x604)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x606 = INT16_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t140 = -1331;

    t140 = (x605==(x606-(x607&x608)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x609 = -10;
	uint8_t x610 = 5U;
	static uint64_t x611 = UINT64_MAX;
	int8_t x612 = INT8_MAX;
	volatile int32_t t141 = 4590;

    t141 = (x609==(x610-(x611&x612)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x617 = 126U;
	static uint16_t x618 = 25147U;
	volatile int64_t x619 = INT64_MIN;
	int64_t x620 = INT64_MAX;

    t142 = (x617==(x618-(x619&x620)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x622 = 381034U;
	int32_t x623 = INT32_MIN;
	int8_t x624 = 45;
	volatile int32_t t143 = -528884917;

    t143 = (x621==(x622-(x623&x624)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x625 = 191;
	static int64_t x626 = -1LL;
	int64_t x627 = -1LL;

    t144 = (x625==(x626-(x627&x628)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x629 = INT8_MIN;
	static int16_t x630 = -11;
	static uint64_t x631 = 232263285LLU;
	volatile int32_t t145 = -234;

    t145 = (x629==(x630-(x631&x632)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x641 = -1;
	volatile uint8_t x644 = UINT8_MAX;
	int32_t t146 = -772;

    t146 = (x641==(x642-(x643&x644)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x645 = INT64_MIN;
	int64_t x646 = INT64_MIN;
	volatile int8_t x647 = INT8_MIN;
	volatile int32_t t147 = -1676004;

    t147 = (x645==(x646-(x647&x648)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x649 = INT16_MIN;
	uint16_t x650 = 130U;

    t148 = (x649==(x650-(x651&x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x653 = INT16_MIN;
	uint16_t x654 = 0U;
	int64_t x655 = -1LL;
	uint32_t x656 = 936U;
	int32_t t149 = -3447;

    t149 = (x653==(x654-(x655&x656)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x658 = -1;
	static volatile int64_t x659 = INT64_MIN;
	int32_t x660 = -1;
	volatile int32_t t150 = 1327172;

    t150 = (x657==(x658-(x659&x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x662 = -1;
	static volatile int32_t x663 = -1;
	int8_t x664 = -1;
	static volatile int32_t t151 = -32415;

    t151 = (x661==(x662-(x663&x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t t152 = -1;

    t152 = (x665==(x666-(x667&x668)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = 0U;
	static uint64_t x670 = UINT64_MAX;
	uint8_t x672 = 0U;
	int32_t t153 = 2;

    t153 = (x669==(x670-(x671&x672)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x673 = 5U;
	int32_t x674 = -1;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = 559LLU;

    t154 = (x673==(x674-(x675&x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x677 = INT32_MIN;
	static uint32_t x678 = 15U;
	int8_t x679 = -1;
	int8_t x680 = INT8_MIN;
	int32_t t155 = -1041822;

    t155 = (x677==(x678-(x679&x680)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x681 = INT16_MIN;
	uint32_t x683 = 51U;
	uint64_t x684 = UINT64_MAX;

    t156 = (x681==(x682-(x683&x684)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x685 = 0U;
	int16_t x686 = INT16_MIN;
	uint32_t x687 = UINT32_MAX;
	uint8_t x688 = 2U;
	int32_t t157 = -587304308;

    t157 = (x685==(x686-(x687&x688)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x693 = UINT64_MAX;
	int32_t x695 = INT32_MIN;
	static volatile int32_t x696 = INT32_MIN;
	volatile int32_t t158 = -795597156;

    t158 = (x693==(x694-(x695&x696)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x697 = INT8_MIN;
	volatile int8_t x698 = INT8_MIN;
	uint64_t x699 = UINT64_MAX;
	uint64_t x700 = 11676409091680142LLU;
	int32_t t159 = 81;

    t159 = (x697==(x698-(x699&x700)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x701 = INT16_MIN;
	uint64_t x702 = 35262763916358427LLU;
	static volatile uint32_t x703 = 6980202U;
	int32_t x704 = -1;
	int32_t t160 = -620;

    t160 = (x701==(x702-(x703&x704)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x705 = -1LL;
	int16_t x707 = INT16_MIN;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t161 = -5135;

    t161 = (x705==(x706-(x707&x708)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = -1;
	int32_t x710 = INT32_MIN;
	volatile int32_t x711 = INT32_MIN;
	uint16_t x712 = 69U;
	volatile int32_t t162 = 2;

    t162 = (x709==(x710-(x711&x712)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x718 = INT16_MIN;
	int16_t x719 = INT16_MIN;
	static int8_t x720 = INT8_MIN;
	volatile int32_t t163 = 14520;

    t163 = (x717==(x718-(x719&x720)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x721 = 9U;
	int64_t x722 = INT64_MIN;
	static uint32_t x723 = 370U;
	int32_t t164 = 211635;

    t164 = (x721==(x722-(x723&x724)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x726 = INT8_MAX;
	uint16_t x727 = UINT16_MAX;
	volatile uint32_t x728 = 47U;
	volatile int32_t t165 = -185;

    t165 = (x725==(x726-(x727&x728)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x729 = INT64_MAX;
	int64_t x730 = -1LL;
	static int8_t x731 = INT8_MIN;
	int16_t x732 = -4;
	static volatile int32_t t166 = 3438;

    t166 = (x729==(x730-(x731&x732)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x745 = INT64_MAX;
	int32_t x746 = -658960;
	static int32_t x747 = -1;
	int32_t x748 = -1;
	int32_t t167 = 1;

    t167 = (x745==(x746-(x747&x748)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x753 = UINT64_MAX;
	static volatile int16_t x754 = INT16_MIN;
	volatile int32_t x755 = -6631907;
	static uint64_t x756 = 151910LLU;
	int32_t t168 = 349880;

    t168 = (x753==(x754-(x755&x756)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x757 = 10;
	static volatile int64_t x758 = INT64_MAX;
	static int16_t x759 = INT16_MIN;
	int64_t x760 = 2792465927128LL;
	int32_t t169 = -1665;

    t169 = (x757==(x758-(x759&x760)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x761 = 143767952028LLU;
	int16_t x762 = -1;
	static int8_t x763 = -1;
	volatile int32_t x764 = INT32_MIN;

    t170 = (x761==(x762-(x763&x764)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x765 = -47;
	uint32_t x766 = 274291U;
	volatile int32_t x767 = INT32_MAX;
	int16_t x768 = INT16_MIN;
	int32_t t171 = -54699497;

    t171 = (x765==(x766-(x767&x768)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x769 = INT8_MIN;
	int32_t x771 = INT32_MAX;
	int8_t x772 = INT8_MIN;
	int32_t t172 = 10075631;

    t172 = (x769==(x770-(x771&x772)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x773 = INT16_MIN;
	static int8_t x775 = -12;
	int8_t x776 = INT8_MIN;
	volatile int32_t t173 = 8;

    t173 = (x773==(x774-(x775&x776)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x777 = 342571841U;
	static int64_t x779 = INT64_MAX;
	int64_t x780 = 471927LL;
	int32_t t174 = -1646;

    t174 = (x777==(x778-(x779&x780)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x782 = INT32_MIN;
	int64_t x783 = INT64_MIN;
	volatile int32_t t175 = -167136465;

    t175 = (x781==(x782-(x783&x784)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x787 = -40;
	int16_t x788 = INT16_MIN;

    t176 = (x785==(x786-(x787&x788)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x789 = UINT64_MAX;
	uint64_t x790 = 200786904LLU;
	volatile uint16_t x792 = 5U;
	int32_t t177 = -10;

    t177 = (x789==(x790-(x791&x792)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = -1;
	volatile uint16_t x798 = 236U;
	uint16_t x799 = 10181U;
	uint32_t x800 = 662443U;
	int32_t t178 = -53791940;

    t178 = (x797==(x798-(x799&x800)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x801 = -1LL;
	int32_t x803 = -270849;
	int32_t x804 = -814643;

    t179 = (x801==(x802-(x803&x804)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x805 = 38067LLU;
	uint32_t x807 = 11247902U;
	int32_t x808 = -714477;
	static volatile int32_t t180 = 3;

    t180 = (x805==(x806-(x807&x808)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x817 = INT16_MAX;
	static int16_t x818 = 4290;
	int8_t x820 = INT8_MIN;
	volatile int32_t t181 = 2627068;

    t181 = (x817==(x818-(x819&x820)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x825 = INT8_MIN;
	static int32_t x826 = -1;
	volatile int16_t x827 = INT16_MIN;
	int8_t x828 = -1;
	static volatile int32_t t182 = 21632;

    t182 = (x825==(x826-(x827&x828)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x829 = INT8_MAX;
	static int32_t x830 = -1;
	static volatile int8_t x831 = INT8_MIN;

    t183 = (x829==(x830-(x831&x832)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x834 = -1;
	static int16_t x835 = -1;
	static uint64_t x836 = 149063340805845LLU;

    t184 = (x833==(x834-(x835&x836)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x838 = UINT64_MAX;
	int64_t x839 = INT64_MAX;
	int32_t t185 = -272269183;

    t185 = (x837==(x838-(x839&x840)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x842 = 71U;
	static uint32_t x843 = UINT32_MAX;
	int32_t x844 = INT32_MIN;

    t186 = (x841==(x842-(x843&x844)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x846 = 1U;
	static volatile int16_t x847 = -132;
	volatile int32_t x848 = -1;
	volatile int32_t t187 = -376654761;

    t187 = (x845==(x846-(x847&x848)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x849 = -9;
	int16_t x850 = -1914;
	uint16_t x851 = 1U;
	int32_t t188 = 6079;

    t188 = (x849==(x850-(x851&x852)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x853 = INT32_MIN;
	uint16_t x854 = 0U;
	static int32_t t189 = -5055;

    t189 = (x853==(x854-(x855&x856)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x857 = 152154U;
	int32_t x858 = -1;
	int8_t x860 = INT8_MIN;
	volatile int32_t t190 = 0;

    t190 = (x857==(x858-(x859&x860)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x861 = INT16_MAX;
	static uint16_t x862 = UINT16_MAX;
	static int16_t x863 = -1;
	uint16_t x864 = UINT16_MAX;
	int32_t t191 = 2;

    t191 = (x861==(x862-(x863&x864)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x869 = INT64_MIN;
	volatile uint32_t x872 = 2936594U;
	static int32_t t192 = -189;

    t192 = (x869==(x870-(x871&x872)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x874 = UINT32_MAX;
	int32_t x875 = -1;
	int16_t x876 = INT16_MIN;
	int32_t t193 = 125;

    t193 = (x873==(x874-(x875&x876)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x877 = -1;
	int64_t x878 = INT64_MAX;
	static int64_t x879 = 1970319041LL;
	int64_t x880 = INT64_MIN;
	volatile int32_t t194 = 798365;

    t194 = (x877==(x878-(x879&x880)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x881 = INT32_MIN;
	uint16_t x882 = UINT16_MAX;
	int16_t x883 = -1;
	int8_t x884 = 0;
	int32_t t195 = -1;

    t195 = (x881==(x882-(x883&x884)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x885 = INT16_MAX;
	int32_t x887 = INT32_MIN;
	volatile int64_t x888 = -1LL;
	int32_t t196 = 13125074;

    t196 = (x885==(x886-(x887&x888)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x889 = UINT64_MAX;
	static volatile int8_t x890 = INT8_MAX;
	int64_t x891 = 1086690656155497LL;
	uint16_t x892 = 1255U;

    t197 = (x889==(x890-(x891&x892)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t t198 = -1;

    t198 = (x897==(x898-(x899&x900)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x901 = -1LL;
	uint8_t x902 = 10U;
	uint8_t x903 = 14U;
	int64_t x904 = INT64_MAX;
	static volatile int32_t t199 = 486405;

    t199 = (x901==(x902-(x903&x904)));

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

