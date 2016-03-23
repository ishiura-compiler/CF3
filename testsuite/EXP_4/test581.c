
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

volatile int16_t x1 = INT16_MAX;
static int32_t x8 = -1;
volatile int8_t x10 = INT8_MIN;
static uint16_t x11 = 34U;
uint16_t x36 = 5U;
int32_t x43 = INT32_MAX;
uint8_t x52 = UINT8_MAX;
int8_t x53 = INT8_MAX;
int16_t x54 = -1;
static int64_t x56 = 3964550LL;
static int32_t x66 = INT32_MIN;
int32_t x69 = INT32_MIN;
volatile int8_t x72 = INT8_MAX;
volatile int32_t t9 = 166;
volatile int8_t x75 = INT8_MIN;
int64_t x79 = -13056110LL;
uint8_t x87 = UINT8_MAX;
volatile int8_t x101 = INT8_MIN;
uint8_t x110 = UINT8_MAX;
volatile int32_t t17 = 11242;
volatile int32_t t19 = 0;
uint64_t x133 = UINT64_MAX;
static uint32_t x138 = 2946U;
int16_t x139 = -1;
int64_t x144 = INT64_MIN;
uint64_t x146 = 11791183394383811LLU;
int16_t x152 = 1;
int16_t x159 = INT16_MIN;
uint32_t x161 = 661848U;
int8_t x168 = INT8_MIN;
int16_t x177 = 19;
uint32_t x178 = 201U;
volatile int16_t x180 = -1;
int32_t x186 = INT32_MIN;
int32_t x189 = -595;
int8_t x190 = -1;
int16_t x194 = INT16_MIN;
int32_t t35 = 0;
static volatile int32_t t39 = -21994;
uint32_t x216 = 475221U;
static volatile int32_t t40 = -265141724;
int32_t x217 = -1;
static volatile int8_t x219 = INT8_MIN;
int64_t x220 = 3417219LL;
volatile int32_t t41 = -1;
volatile int32_t x227 = INT32_MAX;
int16_t x228 = -1;
volatile uint8_t x234 = UINT8_MAX;
volatile int32_t t43 = 652;
int16_t x247 = 140;
int32_t t45 = -470261546;
static uint64_t x254 = 1295983725496609LLU;
int8_t x256 = 0;
int32_t x257 = INT32_MIN;
static uint16_t x258 = 33U;
uint32_t x261 = 425968184U;
volatile int32_t t48 = 845931;
int32_t x268 = INT32_MIN;
int64_t x273 = INT64_MIN;
int32_t x276 = INT32_MIN;
volatile int32_t t51 = -1465;
uint64_t x279 = 31757963LLU;
int8_t x283 = INT8_MIN;
int16_t x284 = INT16_MIN;
int32_t t53 = -14310917;
uint64_t x291 = UINT64_MAX;
int32_t t55 = 150;
static volatile int16_t x304 = -3221;
volatile int16_t x305 = 1;
int32_t x306 = -1;
volatile uint16_t x312 = 2824U;
int8_t x318 = INT8_MIN;
volatile int16_t x321 = -1;
volatile int16_t x335 = INT16_MIN;
int8_t x337 = INT8_MIN;
volatile uint32_t x338 = UINT32_MAX;
volatile uint8_t x348 = 5U;
uint64_t x357 = 3695LLU;
uint8_t x358 = UINT8_MAX;
int16_t x363 = INT16_MIN;
int64_t x366 = INT64_MAX;
volatile int16_t x367 = -1;
volatile int32_t t70 = 114235305;
static uint16_t x379 = 5U;
static int64_t x391 = 104594253371720438LL;
int32_t x402 = INT32_MIN;
int32_t t76 = 189;
int8_t x410 = -12;
int32_t x419 = -1;
int16_t x421 = INT16_MIN;
volatile uint8_t x422 = UINT8_MAX;
uint16_t x426 = UINT16_MAX;
int32_t x429 = -332208;
uint64_t x430 = UINT64_MAX;
int16_t x432 = -13439;
uint64_t x433 = UINT64_MAX;
uint64_t x435 = 5584747096933LLU;
int16_t x437 = 1;
int32_t x438 = INT32_MIN;
int8_t x441 = 0;
int8_t x442 = -1;
int64_t x443 = -1LL;
static volatile uint64_t x462 = UINT64_MAX;
uint32_t x468 = UINT32_MAX;
int32_t x476 = -1;
volatile int32_t t88 = -338;
int64_t x477 = INT64_MAX;
volatile int32_t t89 = -454732;
int64_t x482 = INT64_MIN;
uint16_t x487 = UINT16_MAX;
int32_t x495 = -1;
int32_t x506 = INT32_MAX;
volatile uint64_t x508 = 174711349040LLU;
static int32_t x514 = -706471260;
volatile int32_t t94 = -107;
int64_t x517 = -1LL;
static volatile int32_t t95 = -6060;
int16_t x525 = -1880;
uint64_t x527 = UINT64_MAX;
static volatile int32_t t96 = -8504955;
int16_t x536 = -11;
int8_t x540 = -1;
volatile int32_t t98 = 272;
int32_t x542 = -2;
int64_t x544 = -1LL;
uint16_t x546 = UINT16_MAX;
volatile uint16_t x547 = UINT16_MAX;
static uint16_t x549 = 53U;
uint64_t x551 = 65842561363881LLU;
static uint32_t x553 = UINT32_MAX;
volatile int32_t t102 = 4830;
int32_t t105 = 0;
int32_t x583 = -430173;
int16_t x595 = INT16_MAX;
int32_t t109 = 8502578;
int16_t x601 = -1;
int16_t x614 = INT16_MAX;
uint64_t x616 = UINT64_MAX;
static int32_t t112 = 4100121;
volatile int8_t x621 = INT8_MAX;
static int32_t t114 = 759265874;
uint64_t x644 = 347576257193LLU;
volatile int8_t x647 = -34;
int8_t x648 = -1;
uint32_t x656 = UINT32_MAX;
static int16_t x664 = INT16_MAX;
static int32_t x666 = INT32_MIN;
int64_t x669 = INT64_MIN;
int32_t t122 = 970;
int64_t x675 = -33296623806LL;
int64_t x680 = INT64_MAX;
static volatile uint8_t x688 = 66U;
int64_t x702 = 49900819101899LL;
static int32_t x703 = 1510958;
volatile int64_t x726 = INT64_MIN;
uint8_t x728 = UINT8_MAX;
int16_t x732 = -597;
int8_t x733 = INT8_MIN;
int64_t x741 = 10748005851604LL;
volatile int32_t t136 = -35;
static uint16_t x747 = 6011U;
volatile uint32_t x759 = UINT32_MAX;
int8_t x772 = -1;
volatile int32_t t143 = -15781159;
int32_t x781 = -1;
static int64_t x807 = -1LL;
int32_t x810 = -71;
int16_t x818 = -1;
uint16_t x835 = 10U;
volatile int32_t x853 = INT32_MAX;
int32_t x860 = INT32_MAX;
volatile int32_t t160 = 2070285;
static int16_t x867 = INT16_MIN;
int64_t x868 = 0LL;
int32_t x871 = 2334205;
int8_t x884 = INT8_MIN;
int32_t t164 = 2463782;
int16_t x900 = INT16_MIN;
static volatile int32_t t167 = -2381;
int32_t x901 = -29;
volatile int8_t x904 = 22;
int32_t x905 = INT32_MIN;
int32_t t169 = 767272;
static int64_t x923 = -1LL;
static uint16_t x926 = UINT16_MAX;
uint64_t x927 = 481468937753LLU;
volatile int32_t t172 = -22945;
static int64_t x933 = INT64_MIN;
uint32_t x937 = 16410U;
volatile int8_t x952 = -1;
static int32_t x957 = -3;
static uint64_t x959 = 3240472LLU;
static uint8_t x961 = 86U;
static int32_t t178 = -54355;
int8_t x967 = INT8_MIN;
int16_t x968 = -1239;
volatile int32_t t179 = -165278455;
int16_t x973 = 1;
static volatile int32_t t184 = 344287668;
int8_t x1002 = INT8_MIN;
volatile int32_t t186 = 2932960;
uint8_t x1005 = 39U;
static int64_t x1006 = -1LL;
uint8_t x1016 = UINT8_MAX;
uint16_t x1017 = UINT16_MAX;
uint32_t x1018 = UINT32_MAX;
static int64_t x1022 = 741741385358473LL;
volatile uint8_t x1025 = UINT8_MAX;
volatile int16_t x1037 = INT16_MIN;
static uint8_t x1063 = 103U;
int16_t x1064 = INT16_MAX;
volatile int32_t t197 = -27;
int32_t t198 = 1075;
int64_t x1069 = INT64_MIN;
int32_t x1070 = INT32_MIN;


void f0(void) {
    	uint8_t x2 = 33U;
	int16_t x3 = INT16_MAX;
	int8_t x4 = 0;
	volatile int32_t t0 = 140002;

    t0 = (x1!=(x2^(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 8U;
	volatile int32_t x6 = -3899907;
	static volatile int64_t x7 = -517757867167227LL;
	volatile int32_t t1 = -131147;

    t1 = (x5!=(x6^(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -1512476;

    t2 = (x9!=(x10^(x11*x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x25 = 8483724U;
	int64_t x26 = INT64_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = -53;
	volatile int32_t t3 = 6167;

    t3 = (x25!=(x26^(x27*x28)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x33 = INT8_MIN;
	static uint64_t x34 = 3006LLU;
	volatile uint8_t x35 = 72U;
	int32_t t4 = -1;

    t4 = (x33!=(x34^(x35*x36)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = -1LL;
	int16_t x44 = -1;
	volatile int32_t t5 = 2;

    t5 = (x41!=(x42^(x43*x44)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x49 = 27U;
	volatile int64_t x50 = INT64_MIN;
	int32_t x51 = -1;
	volatile int32_t t6 = -218639750;

    t6 = (x49!=(x50^(x51*x52)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x55 = 4568U;
	volatile int32_t t7 = 2744285;

    t7 = (x53!=(x54^(x55*x56)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x65 = UINT64_MAX;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 27757LLU;
	static volatile int32_t t8 = 11;

    t8 = (x65!=(x66^(x67*x68)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x70 = INT8_MIN;
	int32_t x71 = -202582;

    t9 = (x69!=(x70^(x71*x72)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x73 = -1625936;
	volatile uint16_t x74 = 12495U;
	int8_t x76 = 1;
	volatile int32_t t10 = 3328;

    t10 = (x73!=(x74^(x75*x76)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = -90740;
	int16_t x80 = INT16_MIN;
	int32_t t11 = -75;

    t11 = (x77!=(x78^(x79*x80)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x85 = 13439858LLU;
	int16_t x86 = INT16_MIN;
	uint8_t x88 = 10U;
	volatile int32_t t12 = 40;

    t12 = (x85!=(x86^(x87*x88)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x89 = 741238U;
	static int32_t x90 = 496;
	static int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t13 = -5315629;

    t13 = (x89!=(x90^(x91*x92)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x93 = INT64_MIN;
	static uint16_t x94 = UINT16_MAX;
	static uint32_t x95 = 7256U;
	int32_t x96 = -90;
	int32_t t14 = 3397717;

    t14 = (x93!=(x94^(x95*x96)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x97 = -2;
	int8_t x98 = 7;
	static volatile int64_t x99 = 5247382441LL;
	static int16_t x100 = INT16_MIN;
	static int32_t t15 = 413;

    t15 = (x97!=(x98^(x99*x100)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x102 = INT32_MIN;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = -1;
	int32_t t16 = 18;

    t16 = (x101!=(x102^(x103*x104)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x109 = INT8_MIN;
	uint16_t x111 = 17166U;
	uint8_t x112 = UINT8_MAX;

    t17 = (x109!=(x110^(x111*x112)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x113 = INT64_MIN;
	static uint16_t x114 = 2U;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MAX;
	int32_t t18 = -11415;

    t18 = (x113!=(x114^(x115*x116)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x121 = INT32_MIN;
	int16_t x122 = -451;
	int16_t x123 = INT16_MIN;
	volatile int16_t x124 = INT16_MAX;

    t19 = (x121!=(x122^(x123*x124)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x125 = UINT32_MAX;
	uint64_t x126 = UINT64_MAX;
	int16_t x127 = 461;
	uint64_t x128 = 75280867LLU;
	static int32_t t20 = -12683937;

    t20 = (x125!=(x126^(x127*x128)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x134 = 27895184U;
	uint32_t x135 = 6471U;
	int8_t x136 = INT8_MIN;
	int32_t t21 = 56768;

    t21 = (x133!=(x134^(x135*x136)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x137 = -391194;
	int8_t x140 = -1;
	volatile int32_t t22 = 1014089;

    t22 = (x137!=(x138^(x139*x140)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 234LLU;
	volatile int32_t t23 = -4;

    t23 = (x141!=(x142^(x143*x144)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x145 = 6303707;
	volatile int16_t x147 = INT16_MIN;
	uint32_t x148 = 611135U;
	int32_t t24 = 0;

    t24 = (x145!=(x146^(x147*x148)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x149 = INT64_MAX;
	static int32_t x150 = -470;
	static uint32_t x151 = UINT32_MAX;
	volatile int32_t t25 = -1030325317;

    t25 = (x149!=(x150^(x151*x152)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x153 = -8LL;
	int16_t x154 = INT16_MAX;
	int16_t x155 = INT16_MIN;
	volatile uint8_t x156 = 17U;
	int32_t t26 = 1;

    t26 = (x153!=(x154^(x155*x156)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x157 = 1;
	int16_t x158 = 7;
	int64_t x160 = 58LL;
	volatile int32_t t27 = -478809;

    t27 = (x157!=(x158^(x159*x160)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x162 = UINT64_MAX;
	uint64_t x163 = 736566547LLU;
	uint64_t x164 = 859081LLU;
	static int32_t t28 = 109399;

    t28 = (x161!=(x162^(x163*x164)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x165 = INT16_MIN;
	volatile uint8_t x166 = 73U;
	static uint16_t x167 = 20U;
	int32_t t29 = 290882165;

    t29 = (x165!=(x166^(x167*x168)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = -1;
	int32_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	uint16_t x176 = 339U;
	volatile int32_t t30 = -48;

    t30 = (x173!=(x174^(x175*x176)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x179 = INT8_MIN;
	int32_t t31 = -184373;

    t31 = (x177!=(x178^(x179*x180)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x181 = 0;
	uint32_t x182 = 765763878U;
	int8_t x183 = INT8_MAX;
	int32_t x184 = -8;
	volatile int32_t t32 = 227714;

    t32 = (x181!=(x182^(x183*x184)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x185 = 1047312303573LLU;
	int8_t x187 = -1;
	int64_t x188 = INT64_MAX;
	int32_t t33 = -17793068;

    t33 = (x185!=(x186^(x187*x188)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x191 = 58185;
	int8_t x192 = INT8_MIN;
	volatile int32_t t34 = -478;

    t34 = (x189!=(x190^(x191*x192)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x193 = 2;
	static volatile uint16_t x195 = 1U;
	static int32_t x196 = 250168160;

    t35 = (x193!=(x194^(x195*x196)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x197 = UINT64_MAX;
	int32_t x198 = -2310218;
	int64_t x199 = -1LL;
	volatile int8_t x200 = INT8_MIN;
	static volatile int32_t t36 = -1;

    t36 = (x197!=(x198^(x199*x200)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x201 = UINT32_MAX;
	int32_t x202 = -1;
	int16_t x203 = -703;
	int8_t x204 = -1;
	volatile int32_t t37 = -3;

    t37 = (x201!=(x202^(x203*x204)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int64_t x206 = -1LL;
	volatile uint32_t x207 = 321874688U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t38 = -4726;

    t38 = (x205!=(x206^(x207*x208)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = -1;
	volatile uint32_t x210 = 10U;
	uint32_t x211 = 291491110U;
	int8_t x212 = INT8_MIN;

    t39 = (x209!=(x210^(x211*x212)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MIN;
	static int8_t x215 = -3;

    t40 = (x213!=(x214^(x215*x216)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x218 = 41U;

    t41 = (x217!=(x218^(x219*x220)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x225 = UINT64_MAX;
	int32_t x226 = -1;
	volatile int32_t t42 = 657868723;

    t42 = (x225!=(x226^(x227*x228)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x233 = -1;
	int8_t x235 = -1;
	uint64_t x236 = 190559051205LLU;

    t43 = (x233!=(x234^(x235*x236)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x245 = 10367147U;
	uint16_t x246 = UINT16_MAX;
	static int16_t x248 = -1;
	static int32_t t44 = -512;

    t44 = (x245!=(x246^(x247*x248)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	volatile int64_t x251 = -430853161536434738LL;
	static uint64_t x252 = 56379185239LLU;

    t45 = (x249!=(x250^(x251*x252)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x253 = 1388;
	volatile int32_t x255 = INT32_MIN;
	volatile int32_t t46 = 0;

    t46 = (x253!=(x254^(x255*x256)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x259 = 7U;
	uint16_t x260 = 23336U;
	static volatile int32_t t47 = 1;

    t47 = (x257!=(x258^(x259*x260)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x262 = 124741270LLU;
	uint8_t x263 = UINT8_MAX;
	static volatile uint32_t x264 = 547U;

    t48 = (x261!=(x262^(x263*x264)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x265 = 58U;
	int8_t x266 = -2;
	static uint32_t x267 = 368138U;
	volatile int32_t t49 = -1;

    t49 = (x265!=(x266^(x267*x268)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x269 = INT16_MIN;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x271 = -6;
	static int8_t x272 = 1;
	volatile int32_t t50 = 85385;

    t50 = (x269!=(x270^(x271*x272)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x274 = INT16_MAX;
	uint64_t x275 = 287369968578433LLU;

    t51 = (x273!=(x274^(x275*x276)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x277 = 0U;
	int64_t x278 = INT64_MIN;
	int64_t x280 = -1LL;
	int32_t t52 = 467162;

    t52 = (x277!=(x278^(x279*x280)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x281 = 249;
	int8_t x282 = INT8_MIN;

    t53 = (x281!=(x282^(x283*x284)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x289 = 0;
	static uint8_t x290 = 9U;
	volatile int8_t x292 = INT8_MIN;
	int32_t t54 = 32390;

    t54 = (x289!=(x290^(x291*x292)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x293 = 1;
	int32_t x294 = 2;
	static int64_t x295 = -224199LL;
	int32_t x296 = INT32_MIN;

    t55 = (x293!=(x294^(x295*x296)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = 6;
	int64_t x300 = -564154380LL;
	int32_t t56 = 643;

    t56 = (x297!=(x298^(x299*x300)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x301 = -2;
	int16_t x302 = -11;
	static uint8_t x303 = 1U;
	volatile int32_t t57 = 4430;

    t57 = (x301!=(x302^(x303*x304)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x307 = INT8_MIN;
	int64_t x308 = 106154912339LL;
	volatile int32_t t58 = 7;

    t58 = (x305!=(x306^(x307*x308)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	uint64_t x311 = UINT64_MAX;
	volatile int32_t t59 = -74247;

    t59 = (x309!=(x310^(x311*x312)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x317 = UINT32_MAX;
	int64_t x319 = 6767711LL;
	int32_t x320 = INT32_MAX;
	int32_t t60 = -634109643;

    t60 = (x317!=(x318^(x319*x320)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x322 = INT32_MAX;
	volatile uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t61 = -102;

    t61 = (x321!=(x322^(x323*x324)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x333 = INT8_MIN;
	static uint16_t x334 = UINT16_MAX;
	uint8_t x336 = 0U;
	static int32_t t62 = -46227;

    t62 = (x333!=(x334^(x335*x336)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	static volatile int32_t t63 = -164362;

    t63 = (x337!=(x338^(x339*x340)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x345 = INT32_MIN;
	volatile int64_t x346 = INT64_MAX;
	int64_t x347 = -1LL;
	static int32_t t64 = 432917;

    t64 = (x345!=(x346^(x347*x348)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x353 = 125U;
	volatile uint32_t x354 = 111182691U;
	static int8_t x355 = INT8_MIN;
	uint32_t x356 = 152U;
	volatile int32_t t65 = -4;

    t65 = (x353!=(x354^(x355*x356)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x359 = 551887344LLU;
	int64_t x360 = 26126856083734LL;
	volatile int32_t t66 = 856911354;

    t66 = (x357!=(x358^(x359*x360)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x361 = 73U;
	uint8_t x362 = 8U;
	static int16_t x364 = -231;
	int32_t t67 = 1933;

    t67 = (x361!=(x362^(x363*x364)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	static int16_t x368 = -251;
	static int32_t t68 = -216;

    t68 = (x365!=(x366^(x367*x368)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MIN;
	volatile uint16_t x371 = 6U;
	uint32_t x372 = 4554U;
	static volatile int32_t t69 = -402;

    t69 = (x369!=(x370^(x371*x372)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x373 = 3;
	int16_t x374 = -1;
	static uint16_t x375 = 120U;
	static int64_t x376 = -1LL;

    t70 = (x373!=(x374^(x375*x376)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x377 = INT64_MAX;
	static volatile uint32_t x378 = UINT32_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t71 = -3374;

    t71 = (x377!=(x378^(x379*x380)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x381 = -7;
	static int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	volatile int32_t t72 = 60512294;

    t72 = (x381!=(x382^(x383*x384)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x385 = UINT16_MAX;
	volatile uint8_t x386 = 3U;
	static uint64_t x387 = 159828251107881LLU;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t73 = -124793958;

    t73 = (x385!=(x386^(x387*x388)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x389 = 5;
	int16_t x390 = -26;
	static int8_t x392 = 9;
	volatile int32_t t74 = 1037;

    t74 = (x389!=(x390^(x391*x392)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x401 = 15;
	int32_t x403 = -1;
	uint64_t x404 = UINT64_MAX;
	int32_t t75 = -1;

    t75 = (x401!=(x402^(x403*x404)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x405 = -383642414LL;
	static uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = -62187544031835LL;
	volatile int8_t x408 = INT8_MIN;

    t76 = (x405!=(x406^(x407*x408)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x409 = 4397020LLU;
	int32_t x411 = INT32_MAX;
	int16_t x412 = 0;
	int32_t t77 = -1480644;

    t77 = (x409!=(x410^(x411*x412)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x417 = INT64_MAX;
	int8_t x418 = -1;
	uint16_t x420 = 252U;
	static int32_t t78 = -208149;

    t78 = (x417!=(x418^(x419*x420)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x423 = 71U;
	uint16_t x424 = 1353U;
	int32_t t79 = -12;

    t79 = (x421!=(x422^(x423*x424)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x425 = 253U;
	static int8_t x427 = -6;
	int64_t x428 = 108LL;
	int32_t t80 = 8108;

    t80 = (x425!=(x426^(x427*x428)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x431 = -1;
	volatile int32_t t81 = 181766748;

    t81 = (x429!=(x430^(x431*x432)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x434 = 114752928LLU;
	int32_t x436 = -1;
	volatile int32_t t82 = -7135;

    t82 = (x433!=(x434^(x435*x436)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x439 = INT8_MAX;
	static volatile int16_t x440 = INT16_MIN;
	static int32_t t83 = -132401;

    t83 = (x437!=(x438^(x439*x440)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x444 = INT16_MIN;
	volatile int32_t t84 = -6098623;

    t84 = (x441!=(x442^(x443*x444)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x461 = -360367075;
	int32_t x463 = INT32_MIN;
	volatile uint32_t x464 = 4645U;
	int32_t t85 = 0;

    t85 = (x461!=(x462^(x463*x464)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x466 = INT64_MIN;
	int16_t x467 = 1267;
	volatile int32_t t86 = 0;

    t86 = (x465!=(x466^(x467*x468)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x469 = INT64_MIN;
	volatile uint32_t x470 = UINT32_MAX;
	int8_t x471 = -2;
	volatile int64_t x472 = -11301549702891345LL;
	volatile int32_t t87 = 2;

    t87 = (x469!=(x470^(x471*x472)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x473 = 554317424215LLU;
	int32_t x474 = INT32_MIN;
	uint64_t x475 = 130898301529LLU;

    t88 = (x473!=(x474^(x475*x476)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x478 = INT16_MIN;
	int32_t x479 = -1;
	static volatile int64_t x480 = -31096268LL;

    t89 = (x477!=(x478^(x479*x480)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x481 = -1;
	int32_t x483 = 1995;
	static uint32_t x484 = 9301U;
	int32_t t90 = 1637160;

    t90 = (x481!=(x482^(x483*x484)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x485 = 31U;
	uint8_t x486 = 3U;
	int16_t x488 = INT16_MIN;
	static int32_t t91 = -8434407;

    t91 = (x485!=(x486^(x487*x488)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x493 = INT8_MIN;
	volatile int32_t x494 = INT32_MAX;
	static int64_t x496 = INT64_MAX;
	static volatile int32_t t92 = 2818180;

    t92 = (x493!=(x494^(x495*x496)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x505 = 4U;
	uint16_t x507 = 1U;
	volatile int32_t t93 = 775065718;

    t93 = (x505!=(x506^(x507*x508)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x513 = INT32_MIN;
	volatile int32_t x515 = -11;
	uint64_t x516 = 974436849LLU;

    t94 = (x513!=(x514^(x515*x516)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x518 = INT16_MIN;
	uint16_t x519 = 10045U;
	uint32_t x520 = 54U;

    t95 = (x517!=(x518^(x519*x520)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x526 = INT32_MAX;
	static uint16_t x528 = 240U;

    t96 = (x525!=(x526^(x527*x528)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x533 = -1;
	volatile int16_t x534 = INT16_MIN;
	uint8_t x535 = UINT8_MAX;
	int32_t t97 = 154120331;

    t97 = (x533!=(x534^(x535*x536)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x537 = -1LL;
	uint32_t x538 = 250U;
	uint8_t x539 = UINT8_MAX;

    t98 = (x537!=(x538^(x539*x540)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x541 = 587640U;
	volatile int8_t x543 = 2;
	static int32_t t99 = -991110;

    t99 = (x541!=(x542^(x543*x544)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x545 = UINT16_MAX;
	uint32_t x548 = 1261557485U;
	volatile int32_t t100 = 129157;

    t100 = (x545!=(x546^(x547*x548)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x550 = -1;
	int8_t x552 = -1;
	static volatile int32_t t101 = 792094289;

    t101 = (x549!=(x550^(x551*x552)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x554 = 12675U;
	uint64_t x555 = 1382576000242LLU;
	int8_t x556 = INT8_MAX;

    t102 = (x553!=(x554^(x555*x556)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x557 = INT8_MAX;
	static volatile int32_t x558 = 469411215;
	uint16_t x559 = 911U;
	int16_t x560 = INT16_MIN;
	volatile int32_t t103 = -1596296;

    t103 = (x557!=(x558^(x559*x560)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x565 = -9474;
	uint16_t x566 = 1U;
	int32_t x567 = 32568134;
	static int32_t x568 = -1;
	volatile int32_t t104 = 10;

    t104 = (x565!=(x566^(x567*x568)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x569 = 2;
	static int32_t x570 = 16372;
	int8_t x571 = -1;
	static uint8_t x572 = 3U;

    t105 = (x569!=(x570^(x571*x572)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x577 = INT16_MAX;
	uint32_t x578 = 7429U;
	int32_t x579 = 225;
	static int16_t x580 = 492;
	volatile int32_t t106 = 290680798;

    t106 = (x577!=(x578^(x579*x580)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x581 = INT64_MIN;
	int8_t x582 = INT8_MIN;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t107 = 3643;

    t107 = (x581!=(x582^(x583*x584)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x593 = -253;
	int8_t x594 = 0;
	uint8_t x596 = UINT8_MAX;
	int32_t t108 = -889753;

    t108 = (x593!=(x594^(x595*x596)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = -1;
	static volatile uint64_t x599 = UINT64_MAX;
	int64_t x600 = -2249235800LL;

    t109 = (x597!=(x598^(x599*x600)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x602 = 1;
	int64_t x603 = 830537019LL;
	int64_t x604 = -1LL;
	static volatile int32_t t110 = 3;

    t110 = (x601!=(x602^(x603*x604)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = -40;
	int64_t x611 = -1LL;
	static int16_t x612 = -1;
	volatile int32_t t111 = -618317988;

    t111 = (x609!=(x610^(x611*x612)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x613 = INT64_MIN;
	uint32_t x615 = UINT32_MAX;

    t112 = (x613!=(x614^(x615*x616)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x622 = INT32_MIN;
	static uint16_t x623 = 253U;
	int16_t x624 = INT16_MAX;
	int32_t t113 = -187;

    t113 = (x621!=(x622^(x623*x624)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x625 = INT64_MIN;
	int8_t x626 = -1;
	int32_t x627 = 121;
	int16_t x628 = 3251;

    t114 = (x625!=(x626^(x627*x628)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x630 = 0;
	volatile uint16_t x631 = 633U;
	int32_t x632 = 15;
	static int32_t t115 = 143;

    t115 = (x629!=(x630^(x631*x632)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x641 = INT64_MAX;
	int16_t x642 = -1047;
	uint64_t x643 = 8168LLU;
	int32_t t116 = -44647;

    t116 = (x641!=(x642^(x643*x644)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x645 = 43;
	volatile uint16_t x646 = 410U;
	int32_t t117 = 75870036;

    t117 = (x645!=(x646^(x647*x648)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x653 = 2U;
	static volatile int64_t x654 = -705351137950174LL;
	int8_t x655 = INT8_MIN;
	int32_t t118 = 0;

    t118 = (x653!=(x654^(x655*x656)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = INT16_MAX;
	int16_t x659 = 2622;
	int32_t x660 = 10;
	volatile int32_t t119 = 6;

    t119 = (x657!=(x658^(x659*x660)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x661 = -1;
	int32_t x662 = -1;
	int64_t x663 = -1LL;
	static int32_t t120 = -5803283;

    t120 = (x661!=(x662^(x663*x664)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x667 = INT32_MAX;
	volatile int64_t x668 = -1LL;
	int32_t t121 = 18;

    t121 = (x665!=(x666^(x667*x668)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x670 = -36;
	int8_t x671 = INT8_MIN;
	uint8_t x672 = 52U;

    t122 = (x669!=(x670^(x671*x672)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x673 = -2;
	int16_t x674 = -1;
	int8_t x676 = 34;
	volatile int32_t t123 = 112777019;

    t123 = (x673!=(x674^(x675*x676)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x677 = INT8_MAX;
	static int64_t x678 = INT64_MIN;
	static uint64_t x679 = 1852313580118722389LLU;
	static int32_t t124 = -23088178;

    t124 = (x677!=(x678^(x679*x680)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x681 = 60U;
	int16_t x682 = INT16_MAX;
	uint16_t x683 = 1U;
	static int16_t x684 = INT16_MIN;
	int32_t t125 = -576575;

    t125 = (x681!=(x682^(x683*x684)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x685 = 66224LLU;
	uint8_t x686 = 1U;
	int8_t x687 = 18;
	int32_t t126 = -50945;

    t126 = (x685!=(x686^(x687*x688)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x693 = INT16_MAX;
	static int16_t x694 = INT16_MAX;
	static uint32_t x695 = UINT32_MAX;
	int32_t x696 = INT32_MAX;
	int32_t t127 = 12491617;

    t127 = (x693!=(x694^(x695*x696)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x701 = 2079114030U;
	int8_t x704 = INT8_MIN;
	static volatile int32_t t128 = 258006;

    t128 = (x701!=(x702^(x703*x704)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x709 = 20LLU;
	int64_t x710 = 1LL;
	int8_t x711 = INT8_MAX;
	static int64_t x712 = 1662683552063103LL;
	volatile int32_t t129 = 0;

    t129 = (x709!=(x710^(x711*x712)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x713 = INT32_MAX;
	int32_t x714 = -11;
	uint8_t x715 = 1U;
	volatile int16_t x716 = INT16_MIN;
	volatile int32_t t130 = -3;

    t130 = (x713!=(x714^(x715*x716)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x721 = -1;
	static volatile int32_t x722 = INT32_MAX;
	int16_t x723 = 0;
	static int32_t x724 = INT32_MIN;
	volatile int32_t t131 = -3919259;

    t131 = (x721!=(x722^(x723*x724)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x725 = INT16_MIN;
	uint32_t x727 = 6U;
	int32_t t132 = -307;

    t132 = (x725!=(x726^(x727*x728)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x729 = 523;
	uint32_t x730 = 16564203U;
	int64_t x731 = -1LL;
	volatile int32_t t133 = -197270824;

    t133 = (x729!=(x730^(x731*x732)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x734 = INT8_MIN;
	int8_t x735 = INT8_MIN;
	int32_t x736 = -1;
	volatile int32_t t134 = 28;

    t134 = (x733!=(x734^(x735*x736)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x737 = 87;
	volatile uint32_t x738 = UINT32_MAX;
	volatile uint32_t x739 = 3377U;
	int32_t x740 = -1;
	volatile int32_t t135 = 472346;

    t135 = (x737!=(x738^(x739*x740)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x742 = -1LL;
	volatile int16_t x743 = INT16_MAX;
	int8_t x744 = -1;

    t136 = (x741!=(x742^(x743*x744)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x745 = INT16_MIN;
	uint8_t x746 = UINT8_MAX;
	int16_t x748 = -1;
	int32_t t137 = 195;

    t137 = (x745!=(x746^(x747*x748)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x749 = INT32_MAX;
	static volatile int16_t x750 = INT16_MIN;
	uint64_t x751 = 33022292LLU;
	volatile int8_t x752 = INT8_MAX;
	int32_t t138 = 3;

    t138 = (x749!=(x750^(x751*x752)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x757 = 189017479900LL;
	static uint8_t x758 = 11U;
	volatile int64_t x760 = -1892001163LL;
	volatile int32_t t139 = 100707469;

    t139 = (x757!=(x758^(x759*x760)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x761 = 53375153LLU;
	static uint8_t x762 = 53U;
	int8_t x763 = INT8_MIN;
	volatile uint16_t x764 = 526U;
	volatile int32_t t140 = -38;

    t140 = (x761!=(x762^(x763*x764)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x765 = INT32_MIN;
	static int32_t x766 = 6319;
	int16_t x767 = -1;
	static volatile uint64_t x768 = UINT64_MAX;
	volatile int32_t t141 = 663516;

    t141 = (x765!=(x766^(x767*x768)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x769 = -1LL;
	uint16_t x770 = 234U;
	int32_t x771 = -1;
	static int32_t t142 = 1569940;

    t142 = (x769!=(x770^(x771*x772)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x773 = INT16_MAX;
	uint8_t x774 = 1U;
	int8_t x775 = -1;
	volatile int64_t x776 = 13312548871LL;

    t143 = (x773!=(x774^(x775*x776)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x782 = INT8_MIN;
	int32_t x783 = 23587;
	uint64_t x784 = 5902575836879473031LLU;
	volatile int32_t t144 = 952;

    t144 = (x781!=(x782^(x783*x784)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x785 = INT16_MIN;
	int64_t x786 = INT64_MAX;
	uint64_t x787 = 6934486LLU;
	uint32_t x788 = UINT32_MAX;
	volatile int32_t t145 = 15;

    t145 = (x785!=(x786^(x787*x788)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x789 = 200;
	int8_t x790 = INT8_MIN;
	static volatile int64_t x791 = 220109390705098LL;
	static int16_t x792 = 0;
	static int32_t t146 = 1;

    t146 = (x789!=(x790^(x791*x792)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x794 = -1LL;
	static uint16_t x795 = UINT16_MAX;
	static volatile int8_t x796 = INT8_MIN;
	int32_t t147 = -6966;

    t147 = (x793!=(x794^(x795*x796)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x797 = 476599486633342669LLU;
	static uint8_t x798 = 3U;
	uint64_t x799 = UINT64_MAX;
	int8_t x800 = INT8_MIN;
	static volatile int32_t t148 = -37898454;

    t148 = (x797!=(x798^(x799*x800)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x801 = UINT32_MAX;
	static int32_t x802 = 1237;
	int16_t x803 = INT16_MAX;
	volatile uint16_t x804 = 1U;
	volatile int32_t t149 = -105251160;

    t149 = (x801!=(x802^(x803*x804)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x805 = -77224603327LL;
	int32_t x806 = 201706;
	int16_t x808 = -1;
	int32_t t150 = -8;

    t150 = (x805!=(x806^(x807*x808)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x809 = INT64_MIN;
	uint64_t x811 = UINT64_MAX;
	uint16_t x812 = 90U;
	volatile int32_t t151 = 4;

    t151 = (x809!=(x810^(x811*x812)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x813 = INT64_MAX;
	int64_t x814 = 39277LL;
	static int16_t x815 = INT16_MIN;
	int8_t x816 = 0;
	int32_t t152 = -91;

    t152 = (x813!=(x814^(x815*x816)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x817 = 6LLU;
	static volatile int8_t x819 = INT8_MIN;
	volatile int16_t x820 = INT16_MIN;
	static int32_t t153 = -490796682;

    t153 = (x817!=(x818^(x819*x820)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x825 = UINT64_MAX;
	uint64_t x826 = 21826LLU;
	int16_t x827 = -927;
	int16_t x828 = INT16_MIN;
	volatile int32_t t154 = 148133256;

    t154 = (x825!=(x826^(x827*x828)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x830 = INT32_MIN;
	int64_t x831 = INT64_MAX;
	volatile uint64_t x832 = UINT64_MAX;
	int32_t t155 = -105713671;

    t155 = (x829!=(x830^(x831*x832)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x833 = 8727955867287LLU;
	int16_t x834 = -23;
	int32_t x836 = 17888261;
	int32_t t156 = -853;

    t156 = (x833!=(x834^(x835*x836)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x837 = 930U;
	int16_t x838 = INT16_MIN;
	static uint8_t x839 = 1U;
	int16_t x840 = 14;
	int32_t t157 = -49;

    t157 = (x837!=(x838^(x839*x840)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x849 = UINT16_MAX;
	static int16_t x850 = INT16_MIN;
	int64_t x851 = -53017484088LL;
	int8_t x852 = INT8_MIN;
	volatile int32_t t158 = -1;

    t158 = (x849!=(x850^(x851*x852)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x854 = UINT16_MAX;
	int16_t x855 = INT16_MIN;
	int8_t x856 = INT8_MAX;
	volatile int32_t t159 = 15;

    t159 = (x853!=(x854^(x855*x856)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x857 = UINT32_MAX;
	volatile uint16_t x858 = UINT16_MAX;
	volatile int16_t x859 = -1;

    t160 = (x857!=(x858^(x859*x860)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x865 = -1LL;
	uint8_t x866 = 1U;
	int32_t t161 = 9;

    t161 = (x865!=(x866^(x867*x868)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x869 = INT32_MIN;
	uint64_t x870 = 127578996406LLU;
	int16_t x872 = 0;
	int32_t t162 = -893798318;

    t162 = (x869!=(x870^(x871*x872)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x877 = INT8_MIN;
	int64_t x878 = -1LL;
	int64_t x879 = INT64_MAX;
	uint64_t x880 = 914976901950116LLU;
	volatile int32_t t163 = 2;

    t163 = (x877!=(x878^(x879*x880)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x881 = -1LL;
	uint32_t x882 = 0U;
	static uint32_t x883 = 31434922U;

    t164 = (x881!=(x882^(x883*x884)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x885 = INT16_MIN;
	int64_t x886 = -1LL;
	int64_t x887 = -1LL;
	int64_t x888 = INT64_MAX;
	volatile int32_t t165 = -223449;

    t165 = (x885!=(x886^(x887*x888)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x889 = 39;
	static uint8_t x890 = UINT8_MAX;
	static int8_t x891 = -50;
	static int16_t x892 = 23;
	static volatile int32_t t166 = -990232370;

    t166 = (x889!=(x890^(x891*x892)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x897 = 327318LLU;
	int16_t x898 = INT16_MIN;
	int8_t x899 = 54;

    t167 = (x897!=(x898^(x899*x900)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x902 = UINT16_MAX;
	uint16_t x903 = UINT16_MAX;
	volatile int32_t t168 = 25130419;

    t168 = (x901!=(x902^(x903*x904)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x906 = INT64_MIN;
	volatile int16_t x907 = INT16_MAX;
	uint8_t x908 = UINT8_MAX;

    t169 = (x905!=(x906^(x907*x908)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x913 = INT32_MIN;
	static uint8_t x914 = 32U;
	int32_t x915 = INT32_MIN;
	uint32_t x916 = UINT32_MAX;
	volatile int32_t t170 = 0;

    t170 = (x913!=(x914^(x915*x916)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x921 = INT32_MIN;
	uint64_t x922 = UINT64_MAX;
	volatile uint8_t x924 = UINT8_MAX;
	volatile int32_t t171 = 437798;

    t171 = (x921!=(x922^(x923*x924)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x925 = -1;
	int16_t x928 = -1;

    t172 = (x925!=(x926^(x927*x928)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x934 = INT32_MIN;
	int16_t x935 = 1589;
	static volatile int64_t x936 = -1LL;
	volatile int32_t t173 = 4;

    t173 = (x933!=(x934^(x935*x936)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x938 = -1LL;
	uint16_t x939 = UINT16_MAX;
	volatile uint32_t x940 = UINT32_MAX;
	volatile int32_t t174 = -595;

    t174 = (x937!=(x938^(x939*x940)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x949 = 3302526620189LLU;
	int16_t x950 = 10806;
	int16_t x951 = -14046;
	static volatile int32_t t175 = 7;

    t175 = (x949!=(x950^(x951*x952)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x953 = 585311710;
	int8_t x954 = INT8_MIN;
	uint64_t x955 = 222636073363LLU;
	uint8_t x956 = 34U;
	volatile int32_t t176 = 264511920;

    t176 = (x953!=(x954^(x955*x956)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x958 = 34704014084567LLU;
	int32_t x960 = 92;
	volatile int32_t t177 = -67662871;

    t177 = (x957!=(x958^(x959*x960)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x962 = -221LL;
	volatile int8_t x963 = 2;
	uint16_t x964 = 29U;

    t178 = (x961!=(x962^(x963*x964)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x965 = 235;
	int64_t x966 = INT64_MAX;

    t179 = (x965!=(x966^(x967*x968)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x974 = 29U;
	static volatile uint16_t x975 = UINT16_MAX;
	uint32_t x976 = 1266480602U;
	volatile int32_t t180 = -327679305;

    t180 = (x973!=(x974^(x975*x976)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x977 = 7;
	static volatile uint16_t x978 = 0U;
	static int8_t x979 = -11;
	uint8_t x980 = 2U;
	volatile int32_t t181 = 20547;

    t181 = (x977!=(x978^(x979*x980)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x981 = -11014075855LL;
	static uint64_t x982 = 3479LLU;
	static uint32_t x983 = 15370U;
	int16_t x984 = 6;
	static volatile int32_t t182 = 1;

    t182 = (x981!=(x982^(x983*x984)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x985 = INT16_MIN;
	static volatile int8_t x986 = 0;
	static int16_t x987 = -1;
	uint32_t x988 = 149U;
	static volatile int32_t t183 = -123919;

    t183 = (x985!=(x986^(x987*x988)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x989 = 21;
	volatile int8_t x990 = -3;
	static uint64_t x991 = UINT64_MAX;
	int64_t x992 = -1LL;

    t184 = (x989!=(x990^(x991*x992)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x997 = -1;
	uint8_t x998 = 7U;
	volatile int64_t x999 = -1LL;
	int8_t x1000 = 1;
	volatile int32_t t185 = -30841;

    t185 = (x997!=(x998^(x999*x1000)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1001 = 34;
	int16_t x1003 = INT16_MIN;
	uint16_t x1004 = 19U;

    t186 = (x1001!=(x1002^(x1003*x1004)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1007 = 753;
	int16_t x1008 = INT16_MAX;
	int32_t t187 = 564;

    t187 = (x1005!=(x1006^(x1007*x1008)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1013 = -1LL;
	int8_t x1014 = -6;
	int64_t x1015 = -25658083210404423LL;
	volatile int32_t t188 = -1428475;

    t188 = (x1013!=(x1014^(x1015*x1016)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1019 = 78746423362LL;
	int8_t x1020 = 0;
	volatile int32_t t189 = 496819921;

    t189 = (x1017!=(x1018^(x1019*x1020)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1021 = -1;
	volatile uint32_t x1023 = 40U;
	int8_t x1024 = 0;
	volatile int32_t t190 = 479932671;

    t190 = (x1021!=(x1022^(x1023*x1024)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1026 = 87697;
	volatile int8_t x1027 = INT8_MIN;
	int16_t x1028 = INT16_MIN;
	volatile int32_t t191 = 35;

    t191 = (x1025!=(x1026^(x1027*x1028)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1033 = 10LLU;
	int16_t x1034 = INT16_MAX;
	static int8_t x1035 = 1;
	uint32_t x1036 = 0U;
	volatile int32_t t192 = 9337;

    t192 = (x1033!=(x1034^(x1035*x1036)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x1038 = INT8_MIN;
	int32_t x1039 = INT32_MIN;
	static int64_t x1040 = -331525LL;
	int32_t t193 = 476274;

    t193 = (x1037!=(x1038^(x1039*x1040)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1041 = 52;
	int8_t x1042 = -1;
	static volatile uint16_t x1043 = 9993U;
	uint16_t x1044 = 46U;
	volatile int32_t t194 = 11014296;

    t194 = (x1041!=(x1042^(x1043*x1044)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1049 = 12U;
	uint64_t x1050 = 999LLU;
	static int64_t x1051 = -1LL;
	static int32_t x1052 = INT32_MAX;
	volatile int32_t t195 = -133653;

    t195 = (x1049!=(x1050^(x1051*x1052)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1053 = UINT8_MAX;
	int64_t x1054 = INT64_MAX;
	volatile int32_t x1055 = INT32_MIN;
	uint64_t x1056 = 446LLU;
	int32_t t196 = -4002;

    t196 = (x1053!=(x1054^(x1055*x1056)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1061 = 3U;
	int16_t x1062 = -1;

    t197 = (x1061!=(x1062^(x1063*x1064)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1065 = 24U;
	int64_t x1066 = -1LL;
	int64_t x1067 = -1LL;
	static uint8_t x1068 = 70U;

    t198 = (x1065!=(x1066^(x1067*x1068)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1071 = 85U;
	uint64_t x1072 = 8LLU;
	volatile int32_t t199 = 4875189;

    t199 = (x1069!=(x1070^(x1071*x1072)));

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

