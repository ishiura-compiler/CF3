
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

static int32_t x1 = INT32_MIN;
int32_t x2 = INT32_MIN;
uint64_t x8 = UINT64_MAX;
volatile uint32_t x14 = 0U;
volatile int8_t x15 = 1;
int16_t x18 = -1;
int8_t x20 = 0;
int32_t t5 = 27;
volatile int32_t x27 = -204259;
int32_t t6 = -15;
static int16_t x33 = INT16_MIN;
uint16_t x34 = UINT16_MAX;
volatile int32_t t9 = -646994;
volatile uint8_t x41 = 1U;
int16_t x50 = -14;
int16_t x51 = INT16_MIN;
int32_t x58 = INT32_MAX;
volatile int32_t t14 = 0;
int64_t x61 = INT64_MAX;
int16_t x62 = 0;
int32_t x66 = 6;
uint8_t x72 = 31U;
int32_t x73 = INT32_MIN;
int64_t x74 = INT64_MIN;
static int16_t x76 = -1;
int32_t t18 = -28;
int32_t x81 = INT32_MIN;
int8_t x82 = -1;
volatile int32_t x85 = 427;
uint64_t x86 = 11131713486441714LLU;
int32_t x93 = -42283;
int16_t x96 = INT16_MIN;
int32_t x100 = INT32_MAX;
volatile int8_t x101 = INT8_MAX;
int32_t t26 = INT32_MIN;
static uint16_t x110 = 200U;
static int16_t x120 = -2;
volatile int32_t t29 = 969;
int8_t x131 = INT8_MAX;
int64_t t32 = 97682370364LL;
uint64_t x134 = 31245785296298365LLU;
int32_t x135 = INT32_MIN;
int16_t x143 = INT16_MIN;
int32_t x144 = 2224;
volatile int8_t x160 = INT8_MAX;
int8_t x164 = -1;
volatile int32_t t42 = 1624;
volatile int8_t x174 = -1;
int16_t x185 = INT16_MIN;
int64_t x186 = -24665635479013850LL;
static int16_t x189 = INT16_MIN;
uint16_t x197 = 4488U;
static int8_t x200 = INT8_MIN;
uint16_t x201 = 5U;
volatile int32_t x202 = 18;
int32_t x203 = INT32_MAX;
static volatile int32_t t51 = -24584484;
volatile int64_t x213 = 2085668LL;
static volatile int64_t x220 = INT64_MIN;
int64_t t54 = -18036221191268LL;
int32_t x228 = 1;
int16_t x233 = INT16_MAX;
uint32_t x234 = 350948U;
uint32_t x236 = UINT32_MAX;
uint32_t x241 = 1800589835U;
int32_t x244 = INT32_MIN;
int16_t x247 = -244;
static volatile int32_t t61 = -23911;
volatile int32_t t63 = 597082;
int16_t x259 = 10322;
int32_t x260 = -1;
volatile int32_t t64 = 826953;
int64_t x267 = -1LL;
uint64_t x270 = 222455862658681LLU;
int32_t t68 = -1614796;
int32_t x280 = INT32_MIN;
int8_t x288 = INT8_MIN;
int32_t x289 = INT32_MIN;
int8_t x290 = INT8_MAX;
volatile int16_t x291 = 754;
volatile int64_t t72 = 23388066034592LL;
int32_t t74 = 1;
int16_t x302 = -1;
uint32_t x303 = 62U;
static int16_t x306 = -224;
static int32_t x309 = -1;
int64_t x310 = 2256319796187162LL;
volatile int32_t t77 = -34789;
uint32_t x321 = 96U;
int32_t x322 = 38464324;
int64_t x326 = -1LL;
int32_t x328 = INT32_MIN;
volatile uint32_t t85 = 22135U;
uint64_t x345 = 275485897776132355LLU;
int8_t x348 = INT8_MIN;
int64_t x353 = INT64_MAX;
int32_t x356 = -6788999;
uint32_t x359 = UINT32_MAX;
uint64_t t89 = UINT64_MAX;
volatile int64_t x372 = INT64_MAX;
int32_t t93 = 2513073;
volatile int32_t t94 = -12;
volatile int32_t x382 = INT32_MAX;
volatile int16_t x384 = -1;
int8_t x385 = INT8_MIN;
volatile int64_t t97 = INT64_MIN;
int8_t x395 = INT8_MAX;
int32_t x396 = 1;
int64_t x397 = 903315498329185240LL;
volatile int32_t t99 = -734316;
static int64_t x401 = -1LL;
int32_t x411 = INT32_MIN;
static int16_t x412 = INT16_MIN;
static volatile int64_t x420 = INT64_MIN;
int8_t x424 = 0;
int8_t x429 = 5;
static volatile uint16_t x431 = 1U;
volatile uint8_t x435 = 4U;
int64_t x442 = 4242063435368224474LL;
volatile int64_t x445 = INT64_MIN;
int64_t x446 = INT64_MIN;
int32_t t111 = 14244;
static int32_t x449 = 1;
int64_t x450 = INT64_MAX;
uint16_t x460 = 162U;
uint64_t x469 = UINT64_MAX;
volatile int64_t t118 = INT64_MIN;
volatile uint64_t x477 = 975LLU;
static int16_t x484 = INT16_MAX;
static volatile int32_t t122 = 33;
static uint32_t x495 = UINT32_MAX;
volatile int32_t x500 = INT32_MIN;
int32_t x505 = INT32_MIN;
int64_t x511 = -1LL;
static uint32_t x512 = 77916U;
uint16_t x534 = 24U;
int8_t x537 = 1;
int16_t x543 = INT16_MIN;
volatile int16_t x544 = 1;
int32_t x547 = 896;
int64_t x550 = INT64_MIN;
static int32_t t139 = 539;
uint16_t x561 = 27511U;
static volatile int32_t t140 = -38444;
uint32_t x566 = 478U;
int64_t t141 = 241737903987LL;
static int16_t x569 = INT16_MIN;
int64_t x572 = INT64_MIN;
static uint8_t x577 = 3U;
static volatile int32_t t144 = 5517856;
int32_t t145 = -45387;
uint32_t t147 = 419U;
uint8_t x594 = 2U;
int32_t x601 = INT32_MIN;
int64_t x602 = -1LL;
int32_t x607 = INT32_MIN;
int16_t x612 = INT16_MIN;
static volatile int32_t t152 = -5;
uint32_t x617 = UINT32_MAX;
int16_t x619 = 1;
uint64_t t157 = UINT64_MAX;
static int32_t x633 = -1;
static uint8_t x637 = UINT8_MAX;
volatile int64_t t159 = 8502863LL;
int64_t x644 = INT64_MAX;
int64_t t160 = 43652394299975LL;
uint16_t x645 = 252U;
volatile int16_t x648 = INT16_MIN;
static int8_t x651 = -2;
uint64_t x652 = UINT64_MAX;
int64_t x653 = INT64_MIN;
volatile int8_t x655 = -1;
static int32_t x656 = -3660;
static volatile int32_t t163 = 0;
volatile int32_t t167 = 255;
int16_t x677 = INT16_MAX;
uint16_t x678 = 7596U;
int8_t x680 = INT8_MIN;
static volatile int32_t x683 = -757852;
int32_t t170 = 229;
static volatile int8_t x688 = 0;
volatile int32_t t171 = 5;
uint64_t x689 = 2497320331214079LLU;
int32_t x695 = INT32_MAX;
int64_t x696 = 243255LL;
int64_t x699 = -545489653265510LL;
int64_t x706 = INT64_MIN;
volatile int32_t t177 = -17820;
volatile int32_t t180 = 848348544;
volatile uint32_t x726 = UINT32_MAX;
static uint32_t x728 = UINT32_MAX;
int32_t t182 = 5229;
int64_t x736 = INT64_MIN;
volatile int64_t x738 = 7146906941LL;
volatile uint16_t x739 = 18U;
int64_t x741 = -1202665LL;
uint8_t x743 = 1U;
volatile int8_t x744 = INT8_MIN;
static int16_t x749 = INT16_MIN;
volatile uint64_t x756 = 25LLU;
int32_t t191 = -3776;
int8_t x770 = -1;
static int8_t x775 = INT8_MIN;
uint8_t x780 = 6U;
static volatile int64_t t195 = -137319584547397LL;
int32_t t196 = 28462;
int64_t x790 = 190226LL;
int32_t x794 = INT32_MIN;
volatile int32_t x795 = INT32_MIN;
static volatile uint32_t t198 = UINT32_MAX;
int16_t x800 = INT16_MAX;


void f0(void) {
    	volatile int16_t x3 = -15;
	volatile int32_t x4 = -6043;
	volatile int32_t t0 = -422;

    t0 = ((x1<=(x2>x3))*x4);

    if (t0 != -6043) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 751U;
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	volatile uint64_t t1 = 4709LLU;

    t1 = ((x5<=(x6>x7))*x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 60492053163LLU;
	int16_t x10 = -1;
	static uint16_t x11 = 77U;
	uint64_t x12 = 1805929791860456592LLU;
	volatile uint64_t t2 = 8114754825349LLU;

    t2 = ((x9<=(x10>x11))*x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 88U;
	int32_t x16 = -1;
	volatile int32_t t3 = -1;

    t3 = ((x13<=(x14>x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 1881513950U;
	static volatile int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -176;

    t4 = ((x17<=(x18>x19))*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	static int16_t x24 = INT16_MIN;

    t5 = ((x21<=(x22>x23))*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	uint16_t x26 = 9571U;
	int16_t x28 = INT16_MIN;

    t6 = ((x25<=(x26>x27))*x28);

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 26271U;
	uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 1U;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 9LL;

    t7 = ((x29<=(x30>x31))*x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x35 = UINT64_MAX;
	int64_t x36 = 4017LL;
	volatile int64_t t8 = 31021596064648LL;

    t8 = ((x33<=(x34>x35))*x36);

    if (t8 != 4017LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	int8_t x38 = -2;
	int32_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;

    t9 = ((x37<=(x38>x39))*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x42 = 4LLU;
	uint8_t x43 = 4U;
	uint64_t x44 = 8314995265770LLU;
	static volatile uint64_t t10 = 25447428288642474LLU;

    t10 = ((x41<=(x42>x43))*x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 10U;
	int16_t x46 = INT16_MAX;
	volatile int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = 444414;

    t11 = ((x45<=(x46>x47))*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -1;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = INT32_MIN;

    t12 = ((x49<=(x50>x51))*x52);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 374U;
	int8_t x54 = INT8_MAX;
	static int16_t x55 = 0;
	uint8_t x56 = 15U;
	volatile int32_t t13 = -49035;

    t13 = ((x53<=(x54>x55))*x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int32_t x59 = -1;
	static uint16_t x60 = UINT16_MAX;

    t14 = ((x57<=(x58>x59))*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x63 = 1216634234U;
	static uint64_t x64 = 103223567091LLU;
	uint64_t t15 = 4208061LLU;

    t15 = ((x61<=(x62>x63))*x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int8_t x67 = 0;
	int8_t x68 = -1;
	volatile int32_t t16 = 578712227;

    t16 = ((x65<=(x66>x67))*x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -64;
	int8_t x70 = INT8_MAX;
	int16_t x71 = -1;
	volatile int32_t t17 = 999565538;

    t17 = ((x69<=(x70>x71))*x72);

    if (t17 != 31) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = -23;

    t18 = ((x73<=(x74>x75))*x76);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 193414U;
	uint8_t x78 = 0U;
	static uint64_t x79 = UINT64_MAX;
	volatile int64_t x80 = 6346652852810LL;
	volatile int64_t t19 = 1844126LL;

    t19 = ((x77<=(x78>x79))*x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 12U;
	int32_t t20 = 0;

    t20 = ((x81<=(x82>x83))*x84);

    if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x87 = 32108963U;
	uint64_t x88 = 5489698419427LLU;
	uint64_t t21 = 43041593139297782LLU;

    t21 = ((x85<=(x86>x87))*x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 168585914U;
	static int64_t x90 = 35866004373929550LL;
	static uint64_t x91 = 971575187860460962LLU;
	uint8_t x92 = 16U;
	int32_t t22 = -206330;

    t22 = ((x89<=(x90>x91))*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x94 = 46U;
	static uint8_t x95 = 50U;
	volatile int32_t t23 = -884704869;

    t23 = ((x93<=(x94>x95))*x96);

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 885941773LLU;
	volatile uint32_t x98 = UINT32_MAX;
	volatile int16_t x99 = 13254;
	volatile int32_t t24 = 1943124;

    t24 = ((x97<=(x98>x99))*x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = INT32_MAX;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = -1;
	int32_t t25 = 59;

    t25 = ((x101<=(x102>x103))*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -7242;
	int64_t x106 = -1LL;
	int64_t x107 = -1LL;
	int32_t x108 = INT32_MIN;

    t26 = ((x105<=(x106>x107))*x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -31LL;
	volatile int16_t x111 = INT16_MAX;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

    t27 = ((x109<=(x110>x111))*x112);

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 94U;
	int32_t x114 = -955;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 403407975U;
	uint32_t t28 = 11130121U;

    t28 = ((x113<=(x114>x115))*x116);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 3;
	static int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;

    t29 = ((x117<=(x118>x119))*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = 329;
	int64_t x123 = -1LL;
	static int64_t x124 = -497500528LL;
	static volatile int64_t t30 = 124701468884485580LL;

    t30 = ((x121<=(x122>x123))*x124);

    if (t30 != -497500528LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MAX;
	int16_t x126 = INT16_MAX;
	volatile uint8_t x127 = 85U;
	uint64_t x128 = 19915882752203LLU;
	uint64_t t31 = 16252LLU;

    t31 = ((x125<=(x126>x127))*x128);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MAX;
	volatile int64_t x132 = 151346LL;

    t32 = ((x129<=(x130>x131))*x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = UINT32_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t33 = -119241464;

    t33 = ((x133<=(x134>x135))*x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = -1;
	volatile int32_t x138 = 3;
	uint32_t x139 = UINT32_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t34 = 31;

    t34 = ((x137<=(x138>x139))*x140);

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MIN;
	volatile int64_t x142 = INT64_MAX;
	volatile int32_t t35 = 7;

    t35 = ((x141<=(x142>x143))*x144);

    if (t35 != 2224) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = UINT8_MAX;
	int32_t x147 = -180132;
	volatile uint8_t x148 = 0U;
	static int32_t t36 = 13371120;

    t36 = ((x145<=(x146>x147))*x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -20;
	int8_t x150 = -1;
	uint32_t x151 = 1164U;
	int8_t x152 = INT8_MAX;
	int32_t t37 = -246923;

    t37 = ((x149<=(x150>x151))*x152);

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -1;
	int64_t x154 = -1LL;
	int64_t x155 = INT64_MIN;
	volatile int8_t x156 = -1;
	int32_t t38 = -10074;

    t38 = ((x153<=(x154>x155))*x156);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 52768688LL;
	volatile int64_t x158 = INT64_MAX;
	uint32_t x159 = 22043285U;
	int32_t t39 = -229;

    t39 = ((x157<=(x158>x159))*x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	volatile uint32_t x162 = UINT32_MAX;
	static volatile int8_t x163 = -4;
	int32_t t40 = 1992;

    t40 = ((x161<=(x162>x163))*x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 1U;
	static uint16_t x167 = 232U;
	uint64_t x168 = 1916987LLU;
	uint64_t t41 = 10190544283104303LLU;

    t41 = ((x165<=(x166>x167))*x168);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = -9224;
	int16_t x170 = INT16_MIN;
	volatile uint16_t x171 = 517U;
	uint16_t x172 = UINT16_MAX;

    t42 = ((x169<=(x170>x171))*x172);

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 1U;
	int8_t x175 = 1;
	static int8_t x176 = -1;
	volatile int32_t t43 = -15;

    t43 = ((x173<=(x174>x175))*x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	uint8_t x178 = 51U;
	uint32_t x179 = 847941409U;
	uint64_t x180 = 633LLU;
	uint64_t t44 = 4134454221163LLU;

    t44 = ((x177<=(x178>x179))*x180);

    if (t44 != 633LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	uint16_t x182 = UINT16_MAX;
	static volatile int16_t x183 = -1;
	int8_t x184 = -11;
	volatile int32_t t45 = -482763;

    t45 = ((x181<=(x182>x183))*x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -13;

    t46 = ((x185<=(x186>x187))*x188);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x190 = 1394U;
	uint32_t x191 = 13U;
	volatile uint8_t x192 = 0U;
	int32_t t47 = -131;

    t47 = ((x189<=(x190>x191))*x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MIN;
	volatile int8_t x195 = INT8_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 121304444;

    t48 = ((x193<=(x194>x195))*x196);

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x198 = -1;
	uint8_t x199 = 89U;
	int32_t t49 = 412063663;

    t49 = ((x197<=(x198>x199))*x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 24548430;

    t50 = ((x201<=(x202>x203))*x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 15145U;
	int8_t x206 = INT8_MAX;
	int32_t x207 = -1;
	int16_t x208 = INT16_MAX;

    t51 = ((x205<=(x206>x207))*x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static int32_t x210 = 1251;
	volatile int32_t x211 = INT32_MAX;
	volatile uint32_t x212 = UINT32_MAX;
	uint32_t t52 = UINT32_MAX;

    t52 = ((x209<=(x210>x211))*x212);

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = -2522;

    t53 = ((x213<=(x214>x215))*x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	volatile int32_t x218 = -165;
	int16_t x219 = INT16_MAX;

    t54 = ((x217<=(x218>x219))*x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = 31U;
	static int32_t t55 = -204973;

    t55 = ((x221<=(x222>x223))*x224);

    if (t55 != 31) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 28U;
	uint8_t x226 = 53U;
	uint8_t x227 = UINT8_MAX;
	int32_t t56 = 904868148;

    t56 = ((x225<=(x226>x227))*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 27232U;
	int64_t x230 = -830928995LL;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MAX;
	int64_t t57 = 3190866386477033036LL;

    t57 = ((x229<=(x230>x231))*x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x235 = 15U;
	volatile uint32_t t58 = 1U;

    t58 = ((x233<=(x234>x235))*x236);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MAX;
	int64_t t59 = 2211407LL;

    t59 = ((x237<=(x238>x239))*x240);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MAX;
	volatile int32_t t60 = -83;

    t60 = ((x241<=(x242>x243))*x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x245 = -1;
	int8_t x246 = -33;
	uint8_t x248 = 85U;

    t61 = ((x245<=(x246>x247))*x248);

    if (t61 != 85) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1468420;
	uint8_t x250 = 27U;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t62 = INT32_MIN;

    t62 = ((x249<=(x250>x251))*x252);

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	static volatile uint8_t x254 = UINT8_MAX;
	int8_t x255 = -5;
	volatile uint16_t x256 = UINT16_MAX;

    t63 = ((x253<=(x254>x255))*x256);

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	uint32_t x258 = 1U;

    t64 = ((x257<=(x258>x259))*x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	int8_t x262 = -10;
	int16_t x263 = INT16_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 840750;

    t65 = ((x261<=(x262>x263))*x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 0U;
	int64_t x266 = INT64_MIN;
	int64_t x268 = INT64_MAX;
	volatile int64_t t66 = INT64_MAX;

    t66 = ((x265<=(x266>x267))*x268);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = 1214U;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 80455LLU;
	uint64_t t67 = 7262033LLU;

    t67 = ((x269<=(x270>x271))*x272);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MIN;
	volatile int64_t x274 = INT64_MIN;
	int64_t x275 = -1LL;
	volatile int16_t x276 = INT16_MAX;

    t68 = ((x273<=(x274>x275))*x276);

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	static uint64_t x278 = 194100201LLU;
	volatile uint8_t x279 = UINT8_MAX;
	int32_t t69 = INT32_MIN;

    t69 = ((x277<=(x278>x279))*x280);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	uint8_t x282 = 12U;
	int32_t x283 = -219079;
	volatile uint32_t x284 = 32004167U;
	static volatile uint32_t t70 = 25221502U;

    t70 = ((x281<=(x282>x283))*x284);

    if (t70 != 32004167U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MIN;
	uint8_t x286 = 11U;
	int8_t x287 = -1;
	int32_t t71 = 1886;

    t71 = ((x285<=(x286>x287))*x288);

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x292 = -1LL;

    t72 = ((x289<=(x290>x291))*x292);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	int16_t x294 = 25;
	int16_t x295 = -1;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -21;

    t73 = ((x293<=(x294>x295))*x296);

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -426346696LL;
	int64_t x298 = INT64_MAX;
	volatile uint16_t x299 = 3U;
	int8_t x300 = INT8_MIN;

    t74 = ((x297<=(x298>x299))*x300);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	uint64_t x304 = 1492858166338388LLU;
	volatile uint64_t t75 = 253524277LLU;

    t75 = ((x301<=(x302>x303))*x304);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	int16_t x307 = -1;
	int32_t x308 = -110;
	static int32_t t76 = -42379;

    t76 = ((x305<=(x306>x307))*x308);

    if (t76 != -110) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x311 = UINT32_MAX;
	int16_t x312 = -5;

    t77 = ((x309<=(x310>x311))*x312);

    if (t77 != -5) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;
	int64_t x314 = INT64_MAX;
	static int8_t x315 = 3;
	uint8_t x316 = 12U;
	volatile int32_t t78 = 242;

    t78 = ((x313<=(x314>x315))*x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 53LLU;
	int32_t x318 = INT32_MIN;
	volatile uint32_t x319 = 250189U;
	static volatile uint16_t x320 = 54U;
	static int32_t t79 = 422781;

    t79 = ((x317<=(x318>x319))*x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MAX;
	int32_t t80 = -179074298;

    t80 = ((x321<=(x322>x323))*x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	static int16_t x327 = INT16_MAX;
	static volatile int32_t t81 = 304985;

    t81 = ((x325<=(x326>x327))*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MAX;
	volatile int16_t x331 = -1;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = -3628LL;

    t82 = ((x329<=(x330>x331))*x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int8_t x334 = INT8_MIN;
	volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = -12;
	static int32_t t83 = -5541;

    t83 = ((x333<=(x334>x335))*x336);

    if (t83 != -12) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MIN;
	volatile uint16_t x339 = UINT16_MAX;
	volatile int8_t x340 = INT8_MAX;
	int32_t t84 = -56;

    t84 = ((x337<=(x338>x339))*x340);

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 0LLU;
	int64_t x342 = INT64_MIN;
	uint64_t x343 = UINT64_MAX;
	uint32_t x344 = 8118U;

    t85 = ((x341<=(x342>x343))*x344);

    if (t85 != 8118U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x346 = 8LL;
	int32_t x347 = INT32_MIN;
	static volatile int32_t t86 = -229;

    t86 = ((x345<=(x346>x347))*x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	uint8_t x350 = 2U;
	static volatile uint32_t x351 = 453048821U;
	int32_t x352 = -1;
	int32_t t87 = 86938;

    t87 = ((x349<=(x350>x351))*x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = 1636352763551890LL;
	uint8_t x355 = 104U;
	int32_t t88 = -92195;

    t88 = ((x353<=(x354>x355))*x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	volatile int8_t x358 = -1;
	uint64_t x360 = UINT64_MAX;

    t89 = ((x357<=(x358>x359))*x360);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	int64_t x363 = -2463016360879LL;
	volatile int16_t x364 = -1;
	volatile int32_t t90 = -5;

    t90 = ((x361<=(x362>x363))*x364);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1634616911LL;
	int64_t x366 = INT64_MAX;
	volatile int32_t x367 = -226;
	uint16_t x368 = 15170U;
	volatile int32_t t91 = 479578;

    t91 = ((x365<=(x366>x367))*x368);

    if (t91 != 15170) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 45;
	volatile uint16_t x370 = 1U;
	int64_t x371 = INT64_MAX;
	static volatile int64_t t92 = 107199910226LL;

    t92 = ((x369<=(x370>x371))*x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	uint32_t x374 = 79738628U;
	int32_t x375 = INT32_MAX;
	int16_t x376 = INT16_MAX;

    t93 = ((x373<=(x374>x375))*x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 183367;
	int32_t x378 = INT32_MIN;
	static int64_t x379 = -1446266609256LL;
	int8_t x380 = INT8_MAX;

    t94 = ((x377<=(x378>x379))*x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	int32_t t95 = -7;

    t95 = ((x381<=(x382>x383))*x384);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = INT8_MIN;
	int16_t x387 = 0;
	int64_t x388 = -21806LL;
	int64_t t96 = 1LL;

    t96 = ((x385<=(x386>x387))*x388);

    if (t96 != -21806LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MIN;
	int8_t x390 = 1;
	uint8_t x391 = 0U;
	int64_t x392 = INT64_MIN;

    t97 = ((x389<=(x390>x391))*x392);

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	volatile int32_t x394 = INT32_MIN;
	volatile int32_t t98 = -7137;

    t98 = ((x393<=(x394>x395))*x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MIN;
	int8_t x400 = -20;

    t99 = ((x397<=(x398>x399))*x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x402 = 2081U;
	static volatile int64_t x403 = -102387404LL;
	uint32_t x404 = 1716285U;
	volatile uint32_t t100 = 11351U;

    t100 = ((x401<=(x402>x403))*x404);

    if (t100 != 1716285U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = 1790373;
	uint32_t x407 = 25368425U;
	static int16_t x408 = INT16_MAX;
	static int32_t t101 = -7603982;

    t101 = ((x405<=(x406>x407))*x408);

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	static int8_t x410 = -61;
	volatile int32_t t102 = 1464997;

    t102 = ((x409<=(x410>x411))*x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	uint64_t x414 = UINT64_MAX;
	static int64_t x415 = 13949LL;
	volatile uint8_t x416 = 0U;
	volatile int32_t t103 = 15860138;

    t103 = ((x413<=(x414>x415))*x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 15676559U;
	static volatile int16_t x418 = INT16_MAX;
	int64_t x419 = INT64_MAX;
	int64_t t104 = -848040LL;

    t104 = ((x417<=(x418>x419))*x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 454;
	static uint64_t x422 = 158LLU;
	static uint64_t x423 = 5LLU;
	static volatile int32_t t105 = 716229525;

    t105 = ((x421<=(x422>x423))*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	volatile uint8_t x426 = 8U;
	int64_t x427 = -1LL;
	int64_t x428 = -3LL;
	volatile int64_t t106 = 1756624708252LL;

    t106 = ((x425<=(x426>x427))*x428);

    if (t106 != -3LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	int64_t x432 = INT64_MAX;
	static int64_t t107 = 12900LL;

    t107 = ((x429<=(x430>x431))*x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 146974LLU;
	static volatile int8_t x434 = -1;
	static int32_t x436 = -1;
	static volatile int32_t t108 = -1910;

    t108 = ((x433<=(x434>x435))*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 2041U;
	uint16_t x438 = 10114U;
	volatile int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MIN;
	static int32_t t109 = -7;

    t109 = ((x437<=(x438>x439))*x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -455;
	int64_t x443 = 190LL;
	int64_t x444 = -1LL;
	volatile int64_t t110 = -3171614711417865817LL;

    t110 = ((x441<=(x442>x443))*x444);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x447 = 103861585LLU;
	int8_t x448 = INT8_MIN;

    t111 = ((x445<=(x446>x447))*x448);

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x451 = INT16_MIN;
	static uint64_t x452 = 4427589730193124LLU;
	volatile uint64_t t112 = 3879016425046LLU;

    t112 = ((x449<=(x450>x451))*x452);

    if (t112 != 4427589730193124LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	uint32_t x454 = UINT32_MAX;
	int64_t x455 = 208151886595LL;
	uint64_t x456 = 51675LLU;
	volatile uint64_t t113 = 72676LLU;

    t113 = ((x453<=(x454>x455))*x456);

    if (t113 != 51675LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	int8_t x458 = INT8_MAX;
	int64_t x459 = 13053805LL;
	int32_t t114 = -60527746;

    t114 = ((x457<=(x458>x459))*x460);

    if (t114 != 162) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	int16_t x462 = 233;
	int16_t x463 = INT16_MAX;
	int8_t x464 = 7;
	int32_t t115 = -3029212;

    t115 = ((x461<=(x462>x463))*x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = 1;
	uint16_t x466 = 198U;
	uint16_t x467 = 54U;
	int16_t x468 = INT16_MAX;
	int32_t t116 = -534335006;

    t116 = ((x465<=(x466>x467))*x468);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x470 = 786416980458260775LLU;
	int64_t x471 = INT64_MAX;
	int8_t x472 = INT8_MIN;
	volatile int32_t t117 = 705848410;

    t117 = ((x469<=(x470>x471))*x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = INT16_MIN;
	int16_t x474 = -6138;
	volatile int16_t x475 = 1881;
	int64_t x476 = INT64_MIN;

    t118 = ((x473<=(x474>x475))*x476);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MAX;
	int64_t x479 = INT64_MIN;
	uint16_t x480 = 90U;
	volatile int32_t t119 = -1350;

    t119 = ((x477<=(x478>x479))*x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -585361674LL;
	int8_t x482 = INT8_MIN;
	volatile int32_t x483 = INT32_MAX;
	int32_t t120 = 1976867;

    t120 = ((x481<=(x482>x483))*x484);

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	int32_t x486 = INT32_MAX;
	uint32_t x487 = UINT32_MAX;
	int32_t x488 = 121;
	volatile int32_t t121 = -33540692;

    t121 = ((x485<=(x486>x487))*x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MIN;
	volatile int16_t x491 = -14481;
	volatile int16_t x492 = -1;

    t122 = ((x489<=(x490>x491))*x492);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MAX;
	int32_t x494 = -1;
	int32_t x496 = -1;
	int32_t t123 = 2335;

    t123 = ((x493<=(x494>x495))*x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int32_t x498 = -1;
	uint8_t x499 = UINT8_MAX;
	int32_t t124 = INT32_MIN;

    t124 = ((x497<=(x498>x499))*x500);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = -40LL;
	volatile int16_t x502 = INT16_MAX;
	static volatile int16_t x503 = INT16_MIN;
	int16_t x504 = INT16_MIN;
	int32_t t125 = 20269;

    t125 = ((x501<=(x502>x503))*x504);

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = -872609476;
	int32_t x507 = INT32_MIN;
	int64_t x508 = INT64_MIN;
	volatile int64_t t126 = INT64_MIN;

    t126 = ((x505<=(x506>x507))*x508);

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 78U;
	int32_t x510 = -146;
	volatile uint32_t t127 = 87U;

    t127 = ((x509<=(x510>x511))*x512);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -5;
	static int64_t x514 = INT64_MIN;
	int8_t x515 = -1;
	int16_t x516 = -1;
	int32_t t128 = -105228;

    t128 = ((x513<=(x514>x515))*x516);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -79740911;
	uint32_t x518 = 1U;
	static uint16_t x519 = 101U;
	uint64_t x520 = 1961538790180LLU;
	volatile uint64_t t129 = 5124744688407382LLU;

    t129 = ((x517<=(x518>x519))*x520);

    if (t129 != 1961538790180LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	static int32_t x522 = INT32_MIN;
	uint16_t x523 = 173U;
	int32_t x524 = INT32_MAX;
	int32_t t130 = INT32_MAX;

    t130 = ((x521<=(x522>x523))*x524);

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	int32_t x526 = INT32_MAX;
	volatile int32_t x527 = 265437119;
	int16_t x528 = INT16_MAX;
	int32_t t131 = -2120850;

    t131 = ((x525<=(x526>x527))*x528);

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 768U;
	uint64_t x530 = 1460834208451LLU;
	int64_t x531 = -1LL;
	uint32_t x532 = 3U;
	uint32_t t132 = 56U;

    t132 = ((x529<=(x530>x531))*x532);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	int64_t x535 = -322288813295513471LL;
	volatile int64_t x536 = INT64_MIN;
	int64_t t133 = -65612763010LL;

    t133 = ((x533<=(x534>x535))*x536);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x538 = 3359;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = 1257LLU;
	static volatile uint64_t t134 = 707830002LLU;

    t134 = ((x537<=(x538>x539))*x540);

    if (t134 != 1257LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -126;
	uint16_t x542 = 0U;
	volatile int32_t t135 = 69;

    t135 = ((x541<=(x542>x543))*x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 31U;
	int64_t x546 = INT64_MAX;
	static int8_t x548 = INT8_MIN;
	int32_t t136 = 204812669;

    t136 = ((x545<=(x546>x547))*x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x549 = INT16_MIN;
	volatile int8_t x551 = INT8_MAX;
	volatile int8_t x552 = 1;
	volatile int32_t t137 = -1342220;

    t137 = ((x549<=(x550>x551))*x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int32_t x554 = INT32_MIN;
	static int32_t x555 = -1;
	int32_t x556 = INT32_MAX;
	volatile int32_t t138 = INT32_MAX;

    t138 = ((x553<=(x554>x555))*x556);

    if (t138 != INT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	volatile uint8_t x558 = 1U;
	static uint64_t x559 = UINT64_MAX;
	int8_t x560 = -60;

    t139 = ((x557<=(x558>x559))*x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x562 = INT8_MIN;
	uint64_t x563 = 361400290849853LLU;
	static uint16_t x564 = 15032U;

    t140 = ((x561<=(x562>x563))*x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 10U;
	volatile int16_t x567 = INT16_MAX;
	volatile int64_t x568 = INT64_MIN;

    t141 = ((x565<=(x566>x567))*x568);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x570 = 0U;
	int16_t x571 = -5203;
	int64_t t142 = INT64_MIN;

    t142 = ((x569<=(x570>x571))*x572);

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x573 = 13U;
	int8_t x574 = INT8_MIN;
	static int8_t x575 = -1;
	int8_t x576 = 1;
	volatile int32_t t143 = -1;

    t143 = ((x573<=(x574>x575))*x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x578 = -1691;
	volatile int8_t x579 = INT8_MIN;
	static int16_t x580 = -1;

    t144 = ((x577<=(x578>x579))*x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = 1150;
	int64_t x582 = INT64_MIN;
	int8_t x583 = INT8_MIN;
	static uint8_t x584 = 1U;

    t145 = ((x581<=(x582>x583))*x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 1U;
	uint32_t x586 = 10061U;
	uint8_t x587 = UINT8_MAX;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = INT32_MIN;

    t146 = ((x585<=(x586>x587))*x588);

    if (t146 != INT32_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	int16_t x590 = 1;
	uint8_t x591 = UINT8_MAX;
	uint32_t x592 = 1U;

    t147 = ((x589<=(x590>x591))*x592);

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x595 = INT64_MIN;
	uint16_t x596 = UINT16_MAX;
	int32_t t148 = -1345391;

    t148 = ((x593<=(x594>x595))*x596);

    if (t148 != 65535) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	uint8_t x598 = 1U;
	int16_t x599 = -1;
	uint16_t x600 = 6735U;
	volatile int32_t t149 = 76801695;

    t149 = ((x597<=(x598>x599))*x600);

    if (t149 != 6735) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x603 = -1;
	int8_t x604 = INT8_MIN;
	int32_t t150 = -472;

    t150 = ((x601<=(x602>x603))*x604);

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MIN;
	volatile int64_t x608 = -1LL;
	static volatile int64_t t151 = -16743049099025912LL;

    t151 = ((x605<=(x606>x607))*x608);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MIN;
	uint32_t x611 = 260412125U;

    t152 = ((x609<=(x610>x611))*x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	static int16_t x614 = INT16_MAX;
	int64_t x615 = -5250613416899LL;
	int16_t x616 = -7141;
	static volatile int32_t t153 = -419665982;

    t153 = ((x613<=(x614>x615))*x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = UINT64_MAX;
	volatile uint64_t x620 = 76184804903692342LLU;
	uint64_t t154 = 504137899204LLU;

    t154 = ((x617<=(x618>x619))*x620);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = INT64_MIN;
	static int8_t x622 = 2;
	int16_t x623 = INT16_MIN;
	int64_t x624 = INT64_MIN;
	volatile int64_t t155 = INT64_MIN;

    t155 = ((x621<=(x622>x623))*x624);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 97U;
	int8_t x626 = -1;
	uint8_t x627 = UINT8_MAX;
	uint16_t x628 = 1U;
	int32_t t156 = -163600;

    t156 = ((x625<=(x626>x627))*x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = INT64_MIN;
	uint64_t x631 = 219LLU;
	uint64_t x632 = UINT64_MAX;

    t157 = ((x629<=(x630>x631))*x632);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = -291196464;
	int64_t x635 = 168567475174LL;
	volatile uint64_t x636 = UINT64_MAX;
	uint64_t t158 = UINT64_MAX;

    t158 = ((x633<=(x634>x635))*x636);

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = -1;
	int64_t x639 = INT64_MIN;
	int64_t x640 = INT64_MIN;

    t159 = ((x637<=(x638>x639))*x640);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int8_t x642 = 3;
	int16_t x643 = INT16_MIN;

    t160 = ((x641<=(x642>x643))*x644);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x646 = 1275744291U;
	int32_t x647 = INT32_MIN;
	static int32_t t161 = 3397;

    t161 = ((x645<=(x646>x647))*x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = 62;
	int64_t x650 = INT64_MIN;
	uint64_t t162 = 2166278LLU;

    t162 = ((x649<=(x650>x651))*x652);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x654 = UINT32_MAX;

    t163 = ((x653<=(x654>x655))*x656);

    if (t163 != -3660) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 2U;
	int32_t x658 = INT32_MIN;
	uint8_t x659 = 119U;
	volatile int32_t x660 = INT32_MIN;
	int32_t t164 = -186;

    t164 = ((x657<=(x658>x659))*x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	volatile int32_t x662 = -7538740;
	static uint8_t x663 = 99U;
	static volatile int32_t x664 = -1;
	int32_t t165 = -38597748;

    t165 = ((x661<=(x662>x663))*x664);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -5;
	static int32_t x666 = INT32_MIN;
	volatile uint64_t x667 = 54964060LLU;
	static uint16_t x668 = 659U;
	int32_t t166 = 50756;

    t166 = ((x665<=(x666>x667))*x668);

    if (t166 != 659) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x669 = 12U;
	static int8_t x670 = 30;
	int8_t x671 = 7;
	volatile int16_t x672 = -3421;

    t167 = ((x669<=(x670>x671))*x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	volatile int8_t x674 = INT8_MIN;
	static uint32_t x675 = UINT32_MAX;
	volatile int8_t x676 = -21;
	static volatile int32_t t168 = -32354768;

    t168 = ((x673<=(x674>x675))*x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x679 = -1;
	volatile int32_t t169 = -589405414;

    t169 = ((x677<=(x678>x679))*x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 229427;
	uint8_t x682 = UINT8_MAX;
	uint8_t x684 = 34U;

    t170 = ((x681<=(x682>x683))*x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 1745979999675385LLU;
	int16_t x686 = INT16_MIN;
	static uint8_t x687 = 26U;

    t171 = ((x685<=(x686>x687))*x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	volatile int8_t x691 = -3;
	int64_t x692 = INT64_MAX;
	volatile int64_t t172 = 206578LL;

    t172 = ((x689<=(x690>x691))*x692);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x693 = -1;
	static int64_t x694 = -1LL;
	int64_t t173 = 31LL;

    t173 = ((x693<=(x694>x695))*x696);

    if (t173 != 243255LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	volatile uint16_t x698 = UINT16_MAX;
	static int8_t x700 = INT8_MAX;
	volatile int32_t t174 = -2189;

    t174 = ((x697<=(x698>x699))*x700);

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	uint32_t x702 = 139011U;
	uint16_t x703 = 13U;
	int64_t x704 = -1LL;
	volatile int64_t t175 = 38797195LL;

    t175 = ((x701<=(x702>x703))*x704);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -48863944277LL;
	static int64_t x707 = -1LL;
	int16_t x708 = INT16_MAX;
	int32_t t176 = 22641452;

    t176 = ((x705<=(x706>x707))*x708);

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 6517479U;
	uint64_t x710 = 153LLU;
	int8_t x711 = INT8_MIN;
	int32_t x712 = -1;

    t177 = ((x709<=(x710>x711))*x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 19U;
	static volatile int32_t x714 = 63622;
	int32_t x715 = -1;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t178 = 2;

    t178 = ((x713<=(x714>x715))*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 1807;
	volatile uint8_t x718 = UINT8_MAX;
	volatile int64_t x719 = -1LL;
	int64_t x720 = -1LL;
	volatile int64_t t179 = 32933LL;

    t179 = ((x717<=(x718>x719))*x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = INT32_MIN;
	int16_t x722 = INT16_MAX;
	uint16_t x723 = UINT16_MAX;
	static uint16_t x724 = 970U;

    t180 = ((x721<=(x722>x723))*x724);

    if (t180 != 970) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = UINT16_MAX;
	static uint32_t x727 = 219U;
	static volatile uint32_t t181 = 31U;

    t181 = ((x725<=(x726>x727))*x728);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	int32_t x730 = INT32_MAX;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = 30U;

    t182 = ((x729<=(x730>x731))*x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = INT8_MAX;
	uint32_t x735 = 746647U;
	int64_t t183 = INT64_MIN;

    t183 = ((x733<=(x734>x735))*x736);

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 193456343LL;
	int8_t x740 = -1;
	volatile int32_t t184 = -383187;

    t184 = ((x737<=(x738>x739))*x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x742 = UINT64_MAX;
	int32_t t185 = -407;

    t185 = ((x741<=(x742>x743))*x744);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = 127;
	uint16_t x746 = 698U;
	static int8_t x747 = INT8_MIN;
	uint8_t x748 = UINT8_MAX;
	static volatile int32_t t186 = -3945027;

    t186 = ((x745<=(x746>x747))*x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = INT64_MIN;
	int32_t x751 = INT32_MAX;
	volatile int16_t x752 = INT16_MIN;
	volatile int32_t t187 = -44;

    t187 = ((x749<=(x750>x751))*x752);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = -1LL;
	uint64_t t188 = 53005495946941681LLU;

    t188 = ((x753<=(x754>x755))*x756);

    if (t188 != 25LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	static int32_t x758 = INT32_MIN;
	uint32_t x759 = 32605521U;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t189 = -7067;

    t189 = ((x757<=(x758>x759))*x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -113;
	volatile uint64_t x762 = UINT64_MAX;
	volatile uint8_t x763 = 4U;
	int16_t x764 = 1;
	static volatile int32_t t190 = -232155886;

    t190 = ((x761<=(x762>x763))*x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	uint8_t x766 = 0U;
	int32_t x767 = -1040737;
	uint8_t x768 = 95U;

    t191 = ((x765<=(x766>x767))*x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = 5U;
	int16_t x771 = -1;
	static int16_t x772 = INT16_MIN;
	int32_t t192 = -80123801;

    t192 = ((x769<=(x770>x771))*x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 2U;
	static volatile int32_t x774 = INT32_MAX;
	static uint16_t x776 = 1393U;
	int32_t t193 = -4066176;

    t193 = ((x773<=(x774>x775))*x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 229;
	int64_t x778 = INT64_MAX;
	int64_t x779 = 15LL;
	int32_t t194 = -7306144;

    t194 = ((x777<=(x778>x779))*x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	uint64_t x782 = UINT64_MAX;
	uint32_t x783 = 3U;
	int64_t x784 = INT64_MIN;

    t195 = ((x781<=(x782>x783))*x784);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -3179984LL;
	int64_t x786 = 790LL;
	int64_t x787 = -1LL;
	int8_t x788 = -1;

    t196 = ((x785<=(x786>x787))*x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	int8_t x791 = INT8_MAX;
	int64_t x792 = 27LL;
	static int64_t t197 = 14136825LL;

    t197 = ((x789<=(x790>x791))*x792);

    if (t197 != 27LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	volatile uint32_t x796 = UINT32_MAX;

    t198 = ((x793<=(x794>x795))*x796);

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 7555704922LLU;
	uint32_t x798 = 98203320U;
	static int16_t x799 = INT16_MIN;
	static int32_t t199 = -1918;

    t199 = ((x797<=(x798>x799))*x800);

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

