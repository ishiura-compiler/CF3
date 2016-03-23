
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

static int16_t x11 = -1;
uint32_t x12 = 63344U;
uint8_t x18 = 2U;
int64_t x20 = INT64_MIN;
static int64_t x21 = -1LL;
int8_t x28 = INT8_MAX;
int64_t x29 = 4358824732090369676LL;
static int32_t x30 = INT32_MIN;
volatile uint16_t x33 = UINT16_MAX;
int32_t x38 = 21;
volatile int32_t t8 = 289;
volatile int32_t t9 = -332;
volatile int16_t x47 = -4;
static int32_t x57 = 4911;
static volatile int32_t x59 = -1;
int64_t x66 = -1LL;
uint64_t x72 = 5693889102170LLU;
int64_t t17 = -102354853734LL;
uint16_t x78 = 168U;
int8_t x82 = INT8_MIN;
static uint32_t x83 = UINT32_MAX;
int64_t x85 = 3529LL;
uint32_t x90 = 21212U;
static volatile uint32_t t21 = 384670750U;
volatile uint64_t t22 = 1528443277LLU;
int16_t x97 = INT16_MIN;
static int8_t x99 = -1;
int64_t x103 = INT64_MIN;
volatile uint64_t x109 = UINT64_MAX;
static volatile uint64_t x110 = 133LLU;
uint64_t x113 = 3371907958LLU;
volatile uint32_t x115 = 45U;
uint64_t t27 = 25874LLU;
uint64_t t28 = 343308LLU;
int8_t x125 = -2;
uint8_t x127 = UINT8_MAX;
uint64_t x133 = UINT64_MAX;
uint64_t x134 = 221148179844LLU;
volatile int8_t x146 = -1;
int8_t x157 = INT8_MAX;
int32_t x160 = -61441;
uint32_t x162 = UINT32_MAX;
volatile uint64_t x165 = 8467427407628299352LLU;
uint32_t x172 = 188259U;
static uint64_t x176 = 6932321378288903032LLU;
volatile int16_t x177 = 3818;
int16_t x180 = -1;
static volatile int64_t t41 = -182814301025LL;
uint8_t x182 = UINT8_MAX;
volatile int32_t x188 = INT32_MIN;
uint32_t t43 = 168116U;
static uint8_t x193 = 7U;
uint16_t x197 = UINT16_MAX;
int32_t x199 = -1;
volatile int8_t x200 = INT8_MIN;
uint8_t x206 = 4U;
int16_t x207 = INT16_MIN;
static int64_t x211 = -18327LL;
int64_t x212 = -63LL;
int32_t x213 = -2;
uint64_t x216 = 2895782LLU;
volatile uint64_t t50 = 22192135879LLU;
uint64_t x217 = UINT64_MAX;
int8_t x219 = INT8_MIN;
int64_t x229 = -1LL;
uint8_t x235 = UINT8_MAX;
static int64_t x239 = 1LL;
int64_t x240 = 780425029LL;
int64_t t56 = -4062914291LL;
uint64_t x244 = UINT64_MAX;
uint8_t x248 = 118U;
int32_t x252 = INT32_MAX;
volatile int64_t t59 = -3013112266900LL;
int16_t x256 = 7;
int32_t x262 = -275900;
int16_t x263 = -5;
volatile int8_t x270 = 10;
volatile uint32_t x275 = UINT32_MAX;
volatile int32_t x278 = -7208;
uint16_t x282 = 88U;
static volatile uint64_t t67 = 1013460239LLU;
uint8_t x285 = 0U;
volatile int64_t t68 = -98464955188651LL;
volatile int8_t x290 = -1;
int16_t x297 = INT16_MIN;
uint16_t x307 = UINT16_MAX;
uint16_t x309 = UINT16_MAX;
int64_t t74 = -22LL;
uint64_t t75 = 999481702054LLU;
int16_t x325 = -1;
int64_t x329 = INT64_MIN;
int64_t x333 = 454303377047630256LL;
static int8_t x336 = INT8_MAX;
volatile int64_t x338 = INT64_MAX;
int64_t t80 = 1892175278449991827LL;
int64_t x346 = INT64_MIN;
volatile int32_t t83 = -3874;
volatile uint64_t x355 = 30590LLU;
int64_t x356 = -2964641LL;
int8_t x360 = 45;
uint64_t x371 = UINT64_MAX;
int64_t x372 = -16083600275LL;
static uint32_t x373 = 7U;
int16_t x374 = -1;
volatile int32_t x376 = INT32_MAX;
uint16_t x383 = 620U;
int32_t x384 = -131202;
static uint32_t x385 = 91U;
static int64_t x387 = INT64_MIN;
int16_t x389 = INT16_MIN;
static uint64_t x394 = UINT64_MAX;
int32_t x396 = INT32_MIN;
int32_t t94 = 2;
volatile uint16_t x401 = 301U;
int32_t t95 = -136604496;
static volatile uint64_t t97 = 6356809605466095LLU;
uint32_t x418 = 441445U;
volatile uint64_t t105 = 162091036871912LLU;
uint32_t t106 = 1602U;
int64_t x450 = INT64_MIN;
static uint16_t x454 = 15466U;
int64_t x456 = -1LL;
volatile int32_t t111 = 90;
static volatile int32_t x477 = INT32_MIN;
int64_t x481 = 147695LL;
static uint32_t x482 = 312201U;
int32_t x484 = -1;
static uint16_t x491 = UINT16_MAX;
int8_t x492 = INT8_MAX;
uint64_t x493 = 21657254116413287LLU;
static volatile uint64_t x495 = 1371LLU;
static int16_t x496 = -1;
static uint32_t t119 = 5957U;
volatile int8_t x517 = -58;
int64_t t121 = -35934LL;
int16_t x525 = -1;
uint16_t x526 = 1508U;
int8_t x537 = INT8_MIN;
volatile int64_t t124 = 10126106550245LL;
uint32_t x552 = 1973224101U;
int16_t x554 = INT16_MAX;
uint16_t x577 = 18062U;
volatile int8_t x580 = -6;
int64_t t133 = -2803036568LL;
volatile int64_t x586 = 419LL;
volatile uint32_t x588 = 433624U;
int64_t x604 = INT64_MIN;
int16_t x605 = -1;
int64_t x606 = INT64_MIN;
volatile int64_t x607 = INT64_MIN;
static int32_t x609 = INT32_MIN;
static uint8_t x621 = 6U;
volatile int32_t t144 = -3572266;
int32_t t145 = -11378;
uint64_t x633 = 6543195035956373948LLU;
uint8_t x642 = 0U;
int64_t t149 = -177320LL;
uint8_t x652 = 31U;
uint32_t x666 = 31396U;
uint16_t x671 = 4849U;
uint16_t x675 = 1879U;
uint8_t x683 = 1U;
int32_t t157 = -11316956;
static int8_t x686 = 0;
volatile uint8_t x690 = 66U;
int32_t x696 = INT32_MIN;
volatile int8_t x698 = INT8_MIN;
int32_t x710 = INT32_MIN;
static int16_t x713 = 155;
int8_t x715 = INT8_MAX;
static uint64_t x716 = 3969215925LLU;
volatile uint64_t t166 = 57616839LLU;
static int16_t x724 = INT16_MAX;
int32_t x734 = -115128692;
volatile int16_t x735 = INT16_MIN;
volatile uint32_t t170 = 42255U;
uint32_t x740 = 1473U;
uint32_t x743 = UINT32_MAX;
volatile int64_t x753 = -1LL;
volatile int64_t t175 = -5503494599297LL;
static int16_t x763 = INT16_MIN;
uint16_t x764 = UINT16_MAX;
uint32_t x769 = 25543750U;
volatile uint32_t t178 = 130U;
int32_t t180 = -122692;
int64_t x783 = -1LL;
volatile uint32_t t182 = 44174U;
uint64_t x790 = UINT64_MAX;
uint16_t x791 = 232U;
static volatile uint16_t x796 = 6U;
int8_t x800 = -1;
uint64_t t185 = 882540256858791805LLU;
int16_t x813 = -1;
uint16_t x815 = 237U;
volatile uint32_t x816 = 12U;
volatile int16_t x817 = INT16_MIN;
static volatile uint32_t t190 = 1779U;
int16_t x823 = 942;
volatile int64_t x824 = -1LL;
volatile int64_t x825 = INT64_MIN;
volatile int64_t x832 = INT64_MAX;
volatile int16_t x833 = -64;
static int8_t x836 = -15;
uint64_t t194 = 215903545566LLU;
static int32_t x839 = INT32_MAX;
static int64_t x840 = INT64_MIN;
uint32_t x841 = UINT32_MAX;
int64_t x845 = INT64_MIN;
int16_t x853 = INT16_MAX;
int8_t x854 = INT8_MIN;


void f0(void) {
    	static volatile int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	int64_t t0 = 1454LL;

    t0 = (((x1|x2)%x3)%x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	static int32_t x6 = 234;
	static int32_t x7 = -1;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 371;

    t1 = (((x5|x6)%x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int8_t x10 = -1;
	uint32_t t2 = 12098U;

    t2 = (((x9|x10)%x11)%x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	int64_t x19 = -1LL;
	int64_t t3 = 443352175LL;

    t3 = (((x17|x18)%x19)%x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x22 = -1;
	static uint8_t x23 = 89U;
	volatile int8_t x24 = -1;
	volatile int64_t t4 = 69132653629LL;

    t4 = (((x21|x22)%x23)%x24);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 4U;
	static int8_t x26 = INT8_MIN;
	static volatile int16_t x27 = -90;
	int32_t t5 = -96799444;

    t5 = (((x25|x26)%x27)%x28);

    if (t5 != -34) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x31 = UINT64_MAX;
	static int16_t x32 = 93;
	volatile uint64_t t6 = 17836850LLU;

    t6 = (((x29|x30)%x31)%x32);

    if (t6 != 16LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x34 = 1510U;
	int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MIN;
	static int32_t t7 = -782;

    t7 = (((x33|x34)%x35)%x36);

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	int8_t x39 = -1;
	int16_t x40 = 14193;

    t8 = (((x37|x38)%x39)%x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = 15;
	uint16_t x42 = 14968U;
	uint8_t x43 = 31U;
	static int32_t x44 = -234408;

    t9 = (((x41|x42)%x43)%x44);

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x45 = -1;
	static uint8_t x46 = 7U;
	static uint16_t x48 = 672U;
	static int32_t t10 = 53431696;

    t10 = (((x45|x46)%x47)%x48);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	static int16_t x50 = -1;
	int64_t x51 = -1LL;
	int8_t x52 = INT8_MIN;
	volatile int64_t t11 = -190776871994295LL;

    t11 = (((x49|x50)%x51)%x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x53 = -47;
	volatile uint8_t x54 = 1U;
	static int64_t x55 = INT64_MIN;
	static int64_t x56 = INT64_MIN;
	static volatile int64_t t12 = -16076854634LL;

    t12 = (((x53|x54)%x55)%x56);

    if (t12 != -47LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x58 = -1;
	volatile int64_t x60 = INT64_MIN;
	int64_t t13 = 891303666336724LL;

    t13 = (((x57|x58)%x59)%x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = 15U;
	volatile int8_t x62 = -1;
	volatile int64_t x63 = INT64_MIN;
	volatile int64_t x64 = INT64_MIN;
	int64_t t14 = -15LL;

    t14 = (((x61|x62)%x63)%x64);

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 2803LLU;
	static uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 2LLU;
	uint64_t t15 = 1065556LLU;

    t15 = (((x65|x66)%x67)%x68);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	uint64_t x70 = 4028053111552256001LLU;
	int16_t x71 = 952;
	static uint64_t t16 = 60784LLU;

    t16 = (((x69|x70)%x71)%x72);

    if (t16 != 377LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -106010594968491673LL;
	int16_t x74 = -9440;
	int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;

    t17 = (((x73|x74)%x75)%x76);

    if (t17 != -25LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MAX;
	int64_t x79 = INT64_MIN;
	volatile int8_t x80 = INT8_MIN;
	int64_t t18 = 130652742859508LL;

    t18 = (((x77|x78)%x79)%x80);

    if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x81 = 10174U;
	int64_t x84 = -1LL;
	int64_t t19 = 1549097802LL;

    t19 = (((x81|x82)%x83)%x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x86 = INT32_MIN;
	int64_t x87 = -91LL;
	int32_t x88 = INT32_MIN;
	volatile int64_t t20 = -3663398173202698LL;

    t20 = (((x85|x86)%x87)%x88);

    if (t20 != -57LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = -1;
	static int32_t x91 = -1;
	static uint16_t x92 = 22U;

    t21 = (((x89|x90)%x91)%x92);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = 2942;
	uint8_t x94 = UINT8_MAX;
	static volatile uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MIN;

    t22 = (((x93|x94)%x95)%x96);

    if (t22 != 3071LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = -18538257991345944LL;
	int8_t x100 = 48;
	static int64_t t23 = -1912317LL;

    t23 = (((x97|x98)%x99)%x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x101 = INT8_MAX;
	int16_t x102 = -6;
	int16_t x104 = INT16_MIN;
	volatile int64_t t24 = 270LL;

    t24 = (((x101|x102)%x103)%x104);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MAX;
	static uint16_t x106 = 20071U;
	int8_t x107 = INT8_MAX;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t25 = -35960247;

    t25 = (((x105|x106)%x107)%x108);

    if (t25 != 29) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x111 = 107011U;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 793483371802818LLU;

    t26 = (((x109|x110)%x111)%x112);

    if (t26 != 71445LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x114 = -1;
	int32_t x116 = -1;

    t27 = (((x113|x114)%x115)%x116);

    if (t27 != 15LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x117 = -13;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = 1;
	volatile uint8_t x120 = 3U;

    t28 = (((x117|x118)%x119)%x120);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	int32_t x122 = -327604;
	uint8_t x123 = 16U;
	int32_t x124 = INT32_MIN;
	int32_t t29 = 20294;

    t29 = (((x121|x122)%x123)%x124);

    if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x126 = -2505;
	int32_t x128 = INT32_MIN;
	volatile int32_t t30 = 1;

    t30 = (((x125|x126)%x127)%x128);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x135 = 1459005LL;
	static int32_t x136 = INT32_MAX;
	uint64_t t31 = 212LLU;

    t31 = (((x133|x134)%x135)%x136);

    if (t31 != 1374600LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x137 = INT64_MAX;
	int64_t x138 = 724LL;
	uint16_t x139 = 14U;
	int8_t x140 = -10;
	static volatile int64_t t32 = 417943672180862LL;

    t32 = (((x137|x138)%x139)%x140);

    if (t32 != 7LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x141 = -356720;
	static int16_t x142 = -1;
	static uint32_t x143 = 42785U;
	uint8_t x144 = 57U;
	volatile uint32_t t33 = 397192577U;

    t33 = (((x141|x142)%x143)%x144);

    if (t33 != 7U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = UINT64_MAX;
	int16_t x147 = -1;
	int32_t x148 = INT32_MIN;
	uint64_t t34 = 8804LLU;

    t34 = (((x145|x146)%x147)%x148);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = -1;
	static volatile int8_t x156 = INT8_MAX;
	uint32_t t35 = 8352266U;

    t35 = (((x153|x154)%x155)%x156);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x158 = INT8_MIN;
	static int8_t x159 = INT8_MIN;
	volatile int32_t t36 = 40;

    t36 = (((x157|x158)%x159)%x160);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x161 = -1;
	volatile int64_t x163 = 286570799LL;
	int64_t x164 = -42705270405LL;
	int64_t t37 = 2115339LL;

    t37 = (((x161|x162)%x163)%x164);

    if (t37 != 282976109LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x166 = 22;
	static volatile int8_t x167 = 53;
	int16_t x168 = INT16_MIN;
	uint64_t t38 = 49LLU;

    t38 = (((x165|x166)%x167)%x168);

    if (t38 != 14LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MAX;
	uint16_t x170 = 31U;
	int8_t x171 = INT8_MIN;
	volatile uint32_t t39 = 197U;

    t39 = (((x169|x170)%x171)%x172);

    if (t39 != 127U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MAX;
	uint64_t x175 = 805LLU;
	static volatile uint64_t t40 = 377367665LLU;

    t40 = (((x173|x174)%x175)%x176);

    if (t40 != 120LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x178 = 3641U;
	int64_t x179 = -1LL;

    t41 = (((x177|x178)%x179)%x180);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = 1;
	static int64_t x183 = -16795581LL;
	int32_t x184 = -1;
	int64_t t42 = -8816678LL;

    t42 = (((x181|x182)%x183)%x184);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x185 = 0U;
	static int16_t x186 = INT16_MIN;
	int16_t x187 = 227;

    t43 = (((x185|x186)%x187)%x188);

    if (t43 != 96U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = INT32_MIN;
	static volatile uint8_t x190 = 112U;
	volatile int64_t x191 = INT64_MIN;
	static volatile int8_t x192 = 3;
	int64_t t44 = -5052993LL;

    t44 = (((x189|x190)%x191)%x192);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x194 = INT8_MIN;
	int8_t x195 = -36;
	int8_t x196 = INT8_MAX;
	volatile int32_t t45 = -4940107;

    t45 = (((x193|x194)%x195)%x196);

    if (t45 != -13) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x198 = 2578U;
	int32_t t46 = -860869;

    t46 = (((x197|x198)%x199)%x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x201 = INT16_MAX;
	static volatile int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	static uint16_t x204 = 3117U;
	volatile int32_t t47 = -2046815;

    t47 = (((x201|x202)%x203)%x204);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x205 = 48607LL;
	int16_t x208 = -4;
	int64_t t48 = -75448626190LL;

    t48 = (((x205|x206)%x207)%x208);

    if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x209 = 82288U;
	static int16_t x210 = -1;
	static volatile int64_t t49 = -33LL;

    t49 = (((x209|x210)%x211)%x212);

    if (t49 != 12LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x214 = 437061771322183LLU;
	uint16_t x215 = 29U;

    t50 = (((x213|x214)%x215)%x216);

    if (t50 != 23LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x218 = -122626658020LL;
	static uint16_t x220 = 1086U;
	volatile uint64_t t51 = 78797012446LLU;

    t51 = (((x217|x218)%x219)%x220);

    if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = INT8_MIN;
	static int16_t x222 = -1;
	volatile int32_t x223 = -957845783;
	static int16_t x224 = INT16_MIN;
	int32_t t52 = -1;

    t52 = (((x221|x222)%x223)%x224);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x225 = INT16_MIN;
	uint64_t x226 = 599058848764LLU;
	volatile uint8_t x227 = UINT8_MAX;
	int32_t x228 = -1;
	static uint64_t t53 = 66432185352LLU;

    t53 = (((x225|x226)%x227)%x228);

    if (t53 != 152LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x230 = INT64_MAX;
	static int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	static int64_t t54 = 62316LL;

    t54 = (((x229|x230)%x231)%x232);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x233 = 15U;
	int32_t x234 = 429;
	int32_t x236 = -1;
	static int32_t t55 = 179;

    t55 = (((x233|x234)%x235)%x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x237 = INT32_MIN;
	int64_t x238 = -135408LL;

    t56 = (((x237|x238)%x239)%x240);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x241 = 1356U;
	int8_t x242 = INT8_MAX;
	uint16_t x243 = UINT16_MAX;
	volatile uint64_t t57 = 36607585480618950LLU;

    t57 = (((x241|x242)%x243)%x244);

    if (t57 != 1407LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = INT16_MIN;
	volatile int64_t x246 = -715807276133LL;
	volatile int32_t x247 = INT32_MIN;
	int64_t t58 = 249935038466LL;

    t58 = (((x245|x246)%x247)%x248);

    if (t58 != -3LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MAX;
	static int64_t x250 = 1815538412641LL;
	static int64_t x251 = -1LL;

    t59 = (((x249|x250)%x251)%x252);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MIN;
	volatile int32_t x254 = INT32_MAX;
	volatile int64_t x255 = -1217742410711292LL;
	static int64_t t60 = 3LL;

    t60 = (((x253|x254)%x255)%x256);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x257 = INT32_MIN;
	uint16_t x258 = 106U;
	volatile int64_t x259 = -132449303LL;
	uint8_t x260 = UINT8_MAX;
	int64_t t61 = -3650LL;

    t61 = (((x257|x258)%x259)%x260);

    if (t61 != -149LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x261 = 37249854;
	static volatile int8_t x264 = -16;
	static volatile int32_t t62 = -263809790;

    t62 = (((x261|x262)%x263)%x264);

    if (t62 != -4) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x265 = 1U;
	static int16_t x266 = INT16_MAX;
	volatile int16_t x267 = INT16_MAX;
	int64_t x268 = -1LL;
	int64_t t63 = -11623399227490LL;

    t63 = (((x265|x266)%x267)%x268);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = 22;
	int64_t x271 = -1LL;
	static uint8_t x272 = 51U;
	volatile int64_t t64 = -407789619941LL;

    t64 = (((x269|x270)%x271)%x272);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = -1LL;
	volatile uint16_t x274 = 10285U;
	int8_t x276 = -1;
	int64_t t65 = -27978173998400058LL;

    t65 = (((x273|x274)%x275)%x276);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x277 = INT16_MIN;
	int32_t x279 = 352888609;
	volatile uint16_t x280 = 133U;
	int32_t t66 = 0;

    t66 = (((x277|x278)%x279)%x280);

    if (t66 != -26) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x281 = UINT64_MAX;
	volatile uint32_t x283 = UINT32_MAX;
	int16_t x284 = -4;

    t67 = (((x281|x282)%x283)%x284);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x286 = 105U;
	uint32_t x287 = 65385U;
	int64_t x288 = 1695311293LL;

    t68 = (((x285|x286)%x287)%x288);

    if (t68 != 105LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = INT16_MAX;
	static int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	volatile int32_t t69 = 1318878;

    t69 = (((x289|x290)%x291)%x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = 12U;
	uint64_t t70 = 44311432656534955LLU;

    t70 = (((x297|x298)%x299)%x300);

    if (t70 != 7LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x301 = INT8_MAX;
	int64_t x302 = 191215920711LL;
	volatile int64_t x303 = 3LL;
	int32_t x304 = -15348;
	static volatile int64_t t71 = -277800771660239148LL;

    t71 = (((x301|x302)%x303)%x304);

    if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = INT64_MIN;
	int32_t x306 = -1;
	volatile int64_t x308 = INT64_MIN;
	int64_t t72 = 15279LL;

    t72 = (((x305|x306)%x307)%x308);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x310 = -1LL;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -1009;
	int64_t t73 = 1271598037LL;

    t73 = (((x309|x310)%x311)%x312);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 1U;
	int64_t x315 = 326504118LL;
	static int64_t x316 = INT64_MIN;

    t74 = (((x313|x314)%x315)%x316);

    if (t74 != 50380995LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x317 = UINT64_MAX;
	static int64_t x318 = 430963LL;
	uint8_t x319 = UINT8_MAX;
	volatile uint8_t x320 = UINT8_MAX;

    t75 = (((x317|x318)%x319)%x320);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 63LLU;
	static uint32_t x324 = UINT32_MAX;
	static uint64_t t76 = 7LLU;

    t76 = (((x321|x322)%x323)%x324);

    if (t76 != 15LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x326 = 5910808671996LLU;
	volatile int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MAX;
	uint64_t t77 = 33246627LLU;

    t77 = (((x325|x326)%x327)%x328);

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x330 = INT64_MIN;
	int32_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t78 = 164534LLU;

    t78 = (((x329|x330)%x331)%x332);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x334 = 4U;
	int16_t x335 = 8;
	volatile int64_t t79 = -353368298976759771LL;

    t79 = (((x333|x334)%x335)%x336);

    if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int8_t x340 = -1;

    t80 = (((x337|x338)%x339)%x340);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x341 = -1;
	int16_t x342 = -1;
	volatile uint32_t x343 = 22U;
	int32_t x344 = -1;
	uint32_t t81 = 15540U;

    t81 = (((x341|x342)%x343)%x344);

    if (t81 != 3U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = 4U;
	int64_t x347 = INT64_MAX;
	static uint32_t x348 = 2136639567U;
	volatile int64_t t82 = 0LL;

    t82 = (((x345|x346)%x347)%x348);

    if (t82 != -1858410727LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x349 = -2;
	int32_t x350 = -409424635;
	uint8_t x351 = 14U;
	int16_t x352 = 3;

    t83 = (((x349|x350)%x351)%x352);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x353 = -4;
	int32_t x354 = -4682;
	volatile uint64_t t84 = 115932611306936LLU;

    t84 = (((x353|x354)%x355)%x356);

    if (t84 != 12194LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x357 = INT64_MIN;
	uint8_t x358 = 76U;
	uint32_t x359 = 284U;
	int64_t t85 = 15412251055026LL;

    t85 = (((x357|x358)%x359)%x360);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	int32_t x364 = INT32_MIN;
	volatile int64_t t86 = -4854304LL;

    t86 = (((x361|x362)%x363)%x364);

    if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x365 = INT8_MIN;
	static int16_t x366 = -936;
	uint32_t x367 = 4U;
	int32_t x368 = -1;
	uint32_t t87 = 99320796U;

    t87 = (((x365|x366)%x367)%x368);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x369 = UINT32_MAX;
	static uint8_t x370 = UINT8_MAX;
	static uint64_t t88 = 10011993LLU;

    t88 = (((x369|x370)%x371)%x372);

    if (t88 != 4294967295LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x375 = INT8_MIN;
	uint32_t t89 = 76U;

    t89 = (((x373|x374)%x375)%x376);

    if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x381 = -42;
	int64_t x382 = INT64_MAX;
	int64_t t90 = 2496367780733033LL;

    t90 = (((x381|x382)%x383)%x384);

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x386 = 94457939833LLU;
	int64_t x388 = INT64_MAX;
	volatile uint64_t t91 = 26200230967LLU;

    t91 = (((x385|x386)%x387)%x388);

    if (t91 != 94457939835LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 14U;
	static uint32_t x392 = 1U;
	volatile uint64_t t92 = 6LLU;

    t92 = (((x389|x390)%x391)%x392);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x395 = -1;
	volatile uint64_t t93 = 6621872025975671558LLU;

    t93 = (((x393|x394)%x395)%x396);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = 1;
	static volatile uint16_t x398 = 0U;
	static uint8_t x399 = 40U;
	static int8_t x400 = 1;

    t94 = (((x397|x398)%x399)%x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x402 = -6222382;
	int8_t x403 = INT8_MIN;
	int32_t x404 = -1;

    t95 = (((x401|x402)%x403)%x404);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x405 = INT32_MAX;
	int32_t x406 = INT32_MIN;
	uint8_t x407 = 16U;
	int16_t x408 = 5597;
	static volatile int32_t t96 = -26835;

    t96 = (((x405|x406)%x407)%x408);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = 1668880498192230LL;
	uint64_t x410 = UINT64_MAX;
	static int64_t x411 = -1LL;
	uint32_t x412 = 436089728U;

    t97 = (((x409|x410)%x411)%x412);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x413 = 3;
	static int8_t x414 = -1;
	uint64_t x415 = 1572690526LLU;
	int16_t x416 = INT16_MAX;
	volatile uint64_t t98 = 36275401LLU;

    t98 = (((x413|x414)%x415)%x416);

    if (t98 != 28125LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x417 = 472U;
	int32_t x419 = INT32_MIN;
	volatile int16_t x420 = -1;
	static uint32_t t99 = 676U;

    t99 = (((x417|x418)%x419)%x420);

    if (t99 != 441853U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = INT8_MIN;
	static int16_t x422 = INT16_MIN;
	uint16_t x423 = 7952U;
	int32_t x424 = -1;
	volatile int32_t t100 = -3496;

    t100 = (((x421|x422)%x423)%x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x425 = -1;
	volatile int8_t x426 = INT8_MIN;
	int8_t x427 = -3;
	uint64_t x428 = 28734LLU;
	volatile uint64_t t101 = 412LLU;

    t101 = (((x425|x426)%x427)%x428);

    if (t101 != 28689LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x429 = 200423U;
	int32_t x430 = INT32_MAX;
	uint16_t x431 = 13439U;
	static int64_t x432 = INT64_MIN;
	int64_t t102 = 408LL;

    t102 = (((x429|x430)%x431)%x432);

    if (t102 != 12081LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = 27;
	int32_t x434 = INT32_MAX;
	volatile int64_t x435 = 516017932LL;
	volatile uint32_t x436 = 254U;
	int64_t t103 = 7312370750LL;

    t103 = (((x433|x434)%x435)%x436);

    if (t103 != 97LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = INT32_MIN;
	volatile uint16_t x438 = UINT16_MAX;
	int8_t x439 = INT8_MIN;
	int16_t x440 = -8751;
	static int32_t t104 = 0;

    t104 = (((x437|x438)%x439)%x440);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x441 = 3955LLU;
	uint64_t x442 = UINT64_MAX;
	static int64_t x443 = -100021200LL;
	static int32_t x444 = INT32_MIN;

    t105 = (((x441|x442)%x443)%x444);

    if (t105 != 100021199LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x445 = 7;
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = 80450565U;

    t106 = (((x445|x446)%x447)%x448);

    if (t106 != 31087350U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x449 = 208848770978768LLU;
	int16_t x451 = INT16_MIN;
	int64_t x452 = -1LL;
	volatile uint64_t t107 = 6200582166LLU;

    t107 = (((x449|x450)%x451)%x452);

    if (t107 != 9223580885625754576LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = -1;
	uint16_t x455 = 3U;
	int64_t t108 = -763888LL;

    t108 = (((x453|x454)%x455)%x456);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 2U;
	uint32_t x460 = 1227U;
	uint32_t t109 = 40373U;

    t109 = (((x457|x458)%x459)%x460);

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x465 = -1;
	int64_t x466 = -21517677531960LL;
	int16_t x467 = -1;
	int16_t x468 = 1553;
	static volatile int64_t t110 = 7740924858445LL;

    t110 = (((x465|x466)%x467)%x468);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x473 = 4;
	volatile int8_t x474 = INT8_MAX;
	volatile int16_t x475 = INT16_MIN;
	uint16_t x476 = 12498U;

    t111 = (((x473|x474)%x475)%x476);

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x478 = -925359;
	int32_t x479 = -328044916;
	int8_t x480 = 22;
	static int32_t t112 = -2142;

    t112 = (((x477|x478)%x479)%x480);

    if (t112 != -17) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x483 = -54951;
	static int64_t t113 = -22117180LL;

    t113 = (((x481|x482)%x483)%x484);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x485 = -1;
	int16_t x486 = -252;
	static int64_t x487 = -1LL;
	int16_t x488 = 1;
	int64_t t114 = -490LL;

    t114 = (((x485|x486)%x487)%x488);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x489 = UINT32_MAX;
	int8_t x490 = INT8_MAX;
	volatile uint32_t t115 = 10643522U;

    t115 = (((x489|x490)%x491)%x492);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x494 = INT32_MIN;
	uint64_t t116 = 15789948LLU;

    t116 = (((x493|x494)%x495)%x496);

    if (t116 != 1075LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x497 = INT8_MAX;
	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MAX;
	uint32_t x500 = UINT32_MAX;
	volatile uint32_t t117 = 74U;

    t117 = (((x497|x498)%x499)%x500);

    if (t117 != 4294967294U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x509 = INT8_MAX;
	uint32_t x510 = 188650640U;
	uint32_t x511 = UINT32_MAX;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t118 = 39766017596LLU;

    t118 = (((x509|x510)%x511)%x512);

    if (t118 != 188650751LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x513 = UINT32_MAX;
	uint16_t x514 = 84U;
	uint16_t x515 = 15U;
	int32_t x516 = INT32_MIN;

    t119 = (((x513|x514)%x515)%x516);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x518 = -1;
	int8_t x519 = -1;
	static volatile uint64_t x520 = 15732816633551LLU;
	volatile uint64_t t120 = 180462624LLU;

    t120 = (((x517|x518)%x519)%x520);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x521 = 1;
	int16_t x522 = INT16_MAX;
	int64_t x523 = -1LL;
	uint16_t x524 = 48U;

    t121 = (((x521|x522)%x523)%x524);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x527 = 24U;
	int8_t x528 = -27;
	int32_t t122 = -1326406;

    t122 = (((x525|x526)%x527)%x528);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x533 = INT32_MAX;
	uint32_t x534 = 5U;
	int16_t x535 = -1;
	int16_t x536 = INT16_MIN;
	volatile uint32_t t123 = 870347U;

    t123 = (((x533|x534)%x535)%x536);

    if (t123 != 2147483647U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x538 = INT32_MIN;
	int16_t x539 = INT16_MIN;
	static volatile int64_t x540 = INT64_MIN;

    t124 = (((x537|x538)%x539)%x540);

    if (t124 != -128LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x545 = 783U;
	int16_t x546 = INT16_MIN;
	int16_t x547 = -11;
	volatile int8_t x548 = INT8_MAX;
	static int32_t t125 = -1156350;

    t125 = (((x545|x546)%x547)%x548);

    if (t125 != -8) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	int16_t x550 = INT16_MIN;
	int8_t x551 = INT8_MAX;
	static uint32_t t126 = 1810340136U;

    t126 = (((x549|x550)%x551)%x552);

    if (t126 != 348519093U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x553 = -18;
	volatile int32_t x555 = -754981;
	int64_t x556 = 153574907421976LL;
	static volatile int64_t t127 = 5351571672543LL;

    t127 = (((x553|x554)%x555)%x556);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x557 = 173013387944LLU;
	int16_t x558 = INT16_MIN;
	static int32_t x559 = INT32_MIN;
	int64_t x560 = -766LL;
	uint64_t t128 = 10993306230933LLU;

    t128 = (((x557|x558)%x559)%x560);

    if (t128 != 2147469992LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x565 = 342421367U;
	int8_t x566 = INT8_MIN;
	volatile uint8_t x567 = 1U;
	volatile int64_t x568 = -1LL;
	static volatile int64_t t129 = 1LL;

    t129 = (((x565|x566)%x567)%x568);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x569 = -4140958453004916LL;
	int8_t x570 = -1;
	volatile int64_t x571 = -1LL;
	int16_t x572 = 124;
	int64_t t130 = -2611384335511847LL;

    t130 = (((x569|x570)%x571)%x572);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x573 = 1U;
	int64_t x574 = 269334786616LL;
	volatile int32_t x575 = -16696;
	int64_t x576 = INT64_MIN;
	int64_t t131 = -200220088993LL;

    t131 = (((x573|x574)%x575)%x576);

    if (t131 != 6897LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x578 = INT32_MAX;
	static int8_t x579 = -1;
	volatile int32_t t132 = 944;

    t132 = (((x577|x578)%x579)%x580);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = INT64_MIN;
	volatile uint32_t x583 = 41727634U;
	int32_t x584 = INT32_MIN;

    t133 = (((x581|x582)%x583)%x584);

    if (t133 != -5164191LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x585 = 93747;
	static uint16_t x587 = 236U;
	volatile int64_t t134 = -65364650969787913LL;

    t134 = (((x585|x586)%x587)%x588);

    if (t134 != 203LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	uint8_t x590 = UINT8_MAX;
	int64_t x591 = INT64_MIN;
	volatile uint64_t x592 = 2785584920466727LLU;
	volatile uint64_t t135 = 14495823597201396LLU;

    t135 = (((x589|x590)%x591)%x592);

    if (t135 != 4294967295LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x593 = 0U;
	int16_t x594 = 4;
	uint16_t x595 = 13944U;
	int8_t x596 = 56;
	volatile int32_t t136 = -5795;

    t136 = (((x593|x594)%x595)%x596);

    if (t136 != 4) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x597 = UINT16_MAX;
	int16_t x598 = -20;
	uint32_t x599 = 1185287U;
	int64_t x600 = 1947LL;
	volatile int64_t t137 = -750LL;

    t137 = (((x597|x598)%x599)%x600);

    if (t137 != 779LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x601 = 4892436039827718056LLU;
	static uint8_t x602 = 5U;
	int64_t x603 = -1LL;
	static uint64_t t138 = 1LLU;

    t138 = (((x601|x602)%x603)%x604);

    if (t138 != 4892436039827718061LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x608 = 2819833;
	int64_t t139 = -129084491LL;

    t139 = (((x605|x606)%x607)%x608);

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x610 = INT32_MIN;
	int16_t x611 = 34;
	int64_t x612 = -1018157263314262LL;
	int64_t t140 = -245625LL;

    t140 = (((x609|x610)%x611)%x612);

    if (t140 != -26LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	uint64_t x614 = 1460715567521LLU;
	volatile uint16_t x615 = UINT16_MAX;
	volatile int32_t x616 = 30;
	static volatile uint64_t t141 = 853LLU;

    t141 = (((x613|x614)%x615)%x616);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x617 = INT8_MAX;
	static int32_t x618 = -1670;
	int32_t x619 = -1;
	uint8_t x620 = 106U;
	static volatile int32_t t142 = 853668;

    t142 = (((x617|x618)%x619)%x620);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x622 = 22U;
	int8_t x623 = -1;
	int8_t x624 = INT8_MAX;
	int32_t t143 = 0;

    t143 = (((x621|x622)%x623)%x624);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x625 = INT32_MIN;
	static int8_t x626 = INT8_MIN;
	static uint8_t x627 = 1U;
	uint8_t x628 = 18U;

    t144 = (((x625|x626)%x627)%x628);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x629 = -1;
	uint8_t x630 = 0U;
	static int8_t x631 = INT8_MAX;
	static uint8_t x632 = UINT8_MAX;

    t145 = (((x629|x630)%x631)%x632);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x634 = -37;
	volatile int8_t x635 = -19;
	uint64_t x636 = 10025937LLU;
	static uint64_t t146 = 359630729209LLU;

    t146 = (((x633|x634)%x635)%x636);

    if (t146 != 18LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x637 = -3167903;
	int8_t x638 = -1;
	static volatile uint64_t x639 = UINT64_MAX;
	int16_t x640 = INT16_MIN;
	static volatile uint64_t t147 = 4168795LLU;

    t147 = (((x637|x638)%x639)%x640);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x643 = INT64_MIN;
	int32_t x644 = INT32_MAX;
	volatile int64_t t148 = 2911861544143562720LL;

    t148 = (((x641|x642)%x643)%x644);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x645 = 1U;
	volatile int64_t x646 = -3482071554LL;
	static uint32_t x647 = 7263U;
	int64_t x648 = INT64_MIN;

    t149 = (((x645|x646)%x647)%x648);

    if (t149 != -515LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x649 = INT32_MAX;
	int32_t x650 = -457;
	uint16_t x651 = UINT16_MAX;
	int32_t t150 = -78303973;

    t150 = (((x649|x650)%x651)%x652);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x657 = -1912851606LL;
	int64_t x658 = -41008LL;
	uint16_t x659 = 1149U;
	static uint16_t x660 = 6728U;
	int64_t t151 = -47019068LL;

    t151 = (((x657|x658)%x659)%x660);

    if (t151 != -602LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x661 = -2109271;
	static volatile int64_t x662 = INT64_MIN;
	uint32_t x663 = 3U;
	static int16_t x664 = INT16_MIN;
	static volatile int64_t t152 = -1LL;

    t152 = (((x661|x662)%x663)%x664);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x665 = 1786;
	volatile int16_t x667 = INT16_MIN;
	int8_t x668 = INT8_MIN;
	uint32_t t153 = 196186U;

    t153 = (((x665|x666)%x667)%x668);

    if (t153 != 32510U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x669 = -2;
	int64_t x670 = INT64_MIN;
	int64_t x672 = -1LL;
	volatile int64_t t154 = -254814492868483LL;

    t154 = (((x669|x670)%x671)%x672);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x673 = 4071061LLU;
	uint16_t x674 = 3U;
	int8_t x676 = -1;
	static uint64_t t155 = 45957735LLU;

    t155 = (((x673|x674)%x675)%x676);

    if (t155 != 1149LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x677 = 1U;
	uint64_t x678 = 1LLU;
	uint16_t x679 = 2U;
	volatile int64_t x680 = 23215100567LL;
	static volatile uint64_t t156 = 245472377883385611LLU;

    t156 = (((x677|x678)%x679)%x680);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x681 = INT32_MIN;
	static uint16_t x682 = UINT16_MAX;
	static int8_t x684 = -1;

    t157 = (((x681|x682)%x683)%x684);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x685 = INT16_MIN;
	volatile uint16_t x687 = 93U;
	int16_t x688 = -3;
	volatile int32_t t158 = -74200;

    t158 = (((x685|x686)%x687)%x688);

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x689 = 104U;
	uint32_t x691 = UINT32_MAX;
	int64_t x692 = INT64_MIN;
	volatile int64_t t159 = 246487LL;

    t159 = (((x689|x690)%x691)%x692);

    if (t159 != 106LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x693 = INT16_MIN;
	volatile int32_t x694 = -262;
	volatile int8_t x695 = INT8_MAX;
	int32_t t160 = -2096575;

    t160 = (((x693|x694)%x695)%x696);

    if (t160 != -8) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x697 = -85LL;
	volatile int32_t x699 = -1;
	uint8_t x700 = UINT8_MAX;
	static volatile int64_t t161 = 7271314772496887LL;

    t161 = (((x697|x698)%x699)%x700);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x701 = 34U;
	volatile uint8_t x702 = 12U;
	static int16_t x703 = -1;
	static uint8_t x704 = UINT8_MAX;
	volatile uint32_t t162 = 299454853U;

    t162 = (((x701|x702)%x703)%x704);

    if (t162 != 46U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x705 = -1;
	uint32_t x706 = 123149725U;
	int16_t x707 = INT16_MAX;
	int64_t x708 = -2646690815622LL;
	int64_t t163 = -1606874680469LL;

    t163 = (((x705|x706)%x707)%x708);

    if (t163 != 3LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x709 = INT32_MIN;
	int8_t x711 = INT8_MIN;
	int16_t x712 = -1;
	volatile int32_t t164 = -1335902;

    t164 = (((x709|x710)%x711)%x712);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x714 = INT16_MIN;
	volatile uint64_t t165 = 209LLU;

    t165 = (((x713|x714)%x715)%x716);

    if (t165 != 434471240LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x717 = INT8_MIN;
	uint64_t x718 = UINT64_MAX;
	volatile int64_t x719 = 193364873LL;
	volatile int8_t x720 = INT8_MIN;

    t166 = (((x717|x718)%x719)%x720);

    if (t166 != 189381766LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x721 = 0U;
	uint16_t x722 = UINT16_MAX;
	int64_t x723 = INT64_MIN;
	volatile int64_t t167 = -8545LL;

    t167 = (((x721|x722)%x723)%x724);

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x725 = UINT64_MAX;
	int32_t x726 = INT32_MIN;
	uint8_t x727 = 19U;
	volatile int16_t x728 = 2;
	volatile uint64_t t168 = 1067LLU;

    t168 = (((x725|x726)%x727)%x728);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x729 = 3U;
	static volatile uint8_t x730 = 1U;
	volatile int8_t x731 = -1;
	uint64_t x732 = 91159LLU;
	uint64_t t169 = 7889448LLU;

    t169 = (((x729|x730)%x731)%x732);

    if (t169 != 3LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x733 = 4U;
	volatile uint32_t x736 = 535276U;

    t170 = (((x733|x734)%x735)%x736);

    if (t170 != 433240U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x737 = 1;
	static uint16_t x738 = 14613U;
	static int64_t x739 = INT64_MAX;
	volatile int64_t t171 = -41800094001827839LL;

    t171 = (((x737|x738)%x739)%x740);

    if (t171 != 1356LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x741 = 17949149U;
	uint16_t x742 = 318U;
	uint32_t x744 = 3U;
	volatile uint32_t t172 = 4700U;

    t172 = (((x741|x742)%x743)%x744);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x749 = INT32_MIN;
	uint8_t x750 = 0U;
	static int32_t x751 = 1;
	uint8_t x752 = 12U;
	volatile int32_t t173 = -31135163;

    t173 = (((x749|x750)%x751)%x752);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x754 = INT16_MIN;
	int64_t x755 = -27299540443LL;
	int8_t x756 = 13;
	static int64_t t174 = -811552395172LL;

    t174 = (((x753|x754)%x755)%x756);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x757 = 29924149U;
	static int8_t x758 = -1;
	int16_t x759 = -7;
	int64_t x760 = -1LL;

    t175 = (((x757|x758)%x759)%x760);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x761 = 4929221171LL;
	volatile uint32_t x762 = 616763717U;
	volatile int64_t t176 = 33226491930LL;

    t176 = (((x761|x762)%x763)%x764);

    if (t176 != 29559LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x765 = 7U;
	volatile int16_t x766 = INT16_MIN;
	uint8_t x767 = 29U;
	static int16_t x768 = -14600;
	volatile int32_t t177 = -22;

    t177 = (((x765|x766)%x767)%x768);

    if (t177 != -20) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x770 = UINT8_MAX;
	uint16_t x771 = 45U;
	int32_t x772 = INT32_MAX;

    t178 = (((x769|x770)%x771)%x772);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x774 = -1;
	volatile uint16_t x775 = 2U;
	int8_t x776 = -7;
	static int32_t t179 = 115067;

    t179 = (((x773|x774)%x775)%x776);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x777 = 23U;
	uint8_t x778 = 0U;
	static volatile int8_t x779 = INT8_MIN;
	uint8_t x780 = UINT8_MAX;

    t180 = (((x777|x778)%x779)%x780);

    if (t180 != 23) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x781 = -570;
	uint8_t x782 = 18U;
	uint8_t x784 = UINT8_MAX;
	volatile int64_t t181 = -7975LL;

    t181 = (((x781|x782)%x783)%x784);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x785 = INT16_MAX;
	int16_t x786 = -1005;
	uint32_t x787 = 3U;
	int8_t x788 = INT8_MIN;

    t182 = (((x785|x786)%x787)%x788);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x789 = 1U;
	static uint8_t x792 = UINT8_MAX;
	uint64_t t183 = 393518190297869LLU;

    t183 = (((x789|x790)%x791)%x792);

    if (t183 != 23LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x793 = 3U;
	int16_t x794 = 213;
	int8_t x795 = INT8_MAX;
	static volatile int32_t t184 = -8994345;

    t184 = (((x793|x794)%x795)%x796);

    if (t184 != 4) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x797 = -868;
	static volatile uint64_t x798 = 0LLU;
	int32_t x799 = INT32_MAX;

    t185 = (((x797|x798)%x799)%x800);

    if (t185 != 2147482783LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x801 = UINT8_MAX;
	int16_t x802 = INT16_MIN;
	static uint8_t x803 = UINT8_MAX;
	static uint16_t x804 = UINT16_MAX;
	int32_t t186 = -1644;

    t186 = (((x801|x802)%x803)%x804);

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x805 = -8;
	static volatile uint64_t x806 = UINT64_MAX;
	volatile uint8_t x807 = 10U;
	int8_t x808 = -8;
	volatile uint64_t t187 = 72317LLU;

    t187 = (((x805|x806)%x807)%x808);

    if (t187 != 5LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x809 = INT32_MIN;
	int16_t x810 = -30;
	int16_t x811 = -1;
	uint8_t x812 = UINT8_MAX;
	static volatile int32_t t188 = -10;

    t188 = (((x809|x810)%x811)%x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x814 = INT32_MAX;
	uint32_t t189 = 1U;

    t189 = (((x813|x814)%x815)%x816);

    if (t189 != 3U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x818 = 69U;
	uint32_t x819 = 7766080U;
	int16_t x820 = -707;

    t190 = (((x817|x818)%x819)%x820);

    if (t190 != 292357U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x821 = INT32_MIN;
	int8_t x822 = INT8_MIN;
	volatile int64_t t191 = 3370696823968826820LL;

    t191 = (((x821|x822)%x823)%x824);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x826 = 668554453;
	int16_t x827 = INT16_MIN;
	static uint16_t x828 = 75U;
	int64_t t192 = 1368396525LL;

    t192 = (((x825|x826)%x827)%x828);

    if (t192 != -26LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x829 = 204717110U;
	uint16_t x830 = 17U;
	volatile int8_t x831 = -1;
	int64_t t193 = 1679642812544LL;

    t193 = (((x829|x830)%x831)%x832);

    if (t193 != 204717111LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x834 = -1;
	uint64_t x835 = UINT64_MAX;

    t194 = (((x833|x834)%x835)%x836);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x837 = INT8_MIN;
	uint32_t x838 = 125913U;
	int64_t t195 = -13384326140573274LL;

    t195 = (((x837|x838)%x839)%x840);

    if (t195 != 2147483610LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x842 = INT16_MIN;
	int32_t x843 = INT32_MIN;
	int8_t x844 = INT8_MIN;
	static volatile uint32_t t196 = 158342U;

    t196 = (((x841|x842)%x843)%x844);

    if (t196 != 2147483647U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x846 = 0U;
	volatile int8_t x847 = 1;
	int8_t x848 = -1;
	int64_t t197 = 8163099209LL;

    t197 = (((x845|x846)%x847)%x848);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x849 = UINT32_MAX;
	int32_t x850 = INT32_MIN;
	volatile int32_t x851 = INT32_MIN;
	static volatile int16_t x852 = -15291;
	static volatile uint32_t t198 = 2U;

    t198 = (((x849|x850)%x851)%x852);

    if (t198 != 2147483647U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x855 = INT64_MIN;
	uint32_t x856 = 134U;
	volatile int64_t t199 = -7283LL;

    t199 = (((x853|x854)%x855)%x856);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

