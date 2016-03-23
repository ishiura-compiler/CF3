
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

static int8_t x4 = INT8_MAX;
int64_t x6 = INT64_MAX;
volatile int64_t x7 = 433162742523LL;
volatile int8_t x15 = INT8_MAX;
volatile uint64_t t3 = 17362442740471LLU;
static int64_t x28 = -489182318LL;
int64_t x32 = INT64_MAX;
uint32_t t8 = 2814U;
static uint8_t x37 = UINT8_MAX;
int32_t x40 = INT32_MAX;
int32_t x48 = INT32_MIN;
uint8_t x50 = UINT8_MAX;
volatile int32_t t13 = -36;
volatile uint8_t x57 = UINT8_MAX;
volatile int16_t x58 = INT16_MAX;
volatile int64_t t14 = 10859105403890371LL;
static uint64_t x62 = 119207405128478LLU;
int8_t x65 = -1;
uint16_t x68 = UINT16_MAX;
uint8_t x69 = UINT8_MAX;
int32_t x71 = INT32_MAX;
uint8_t x77 = 11U;
static int16_t x79 = -1;
volatile int32_t t19 = -1;
volatile int32_t t20 = 0;
int16_t x98 = 28;
uint8_t x106 = 17U;
static int8_t x107 = -1;
uint16_t x115 = UINT16_MAX;
static int16_t x121 = -1;
int32_t x123 = INT32_MAX;
int64_t t30 = 7LL;
int32_t x125 = INT32_MIN;
volatile int32_t x129 = INT32_MAX;
static volatile int32_t x139 = INT32_MAX;
volatile int16_t x140 = INT16_MAX;
volatile uint64_t t35 = 7789441057809381LLU;
static uint8_t x146 = 64U;
int64_t t37 = 418LL;
static uint64_t x154 = 849LLU;
static int8_t x156 = -1;
volatile int32_t t38 = -2804;
int8_t x159 = 0;
uint16_t x161 = 1U;
static int32_t t40 = 188937;
static int32_t t42 = 64;
int8_t x174 = -1;
uint64_t x176 = UINT64_MAX;
static uint64_t x178 = 25833LLU;
int64_t x185 = INT64_MIN;
volatile int16_t x186 = INT16_MIN;
volatile int32_t t46 = -293867855;
static int32_t x195 = 12004;
uint16_t x199 = 1921U;
volatile int32_t t49 = 15044;
uint32_t x203 = 2U;
static int16_t x205 = -1;
int32_t x206 = 7044;
static volatile int32_t x207 = INT32_MAX;
volatile uint32_t x208 = 1062U;
volatile uint32_t t55 = 134040085U;
int8_t x227 = INT8_MIN;
static int32_t t57 = -7;
int64_t x238 = INT64_MIN;
static uint16_t x240 = 4220U;
static volatile int64_t x245 = -23896397244LL;
int64_t x248 = INT64_MIN;
uint64_t x252 = 57972LLU;
int8_t x261 = INT8_MAX;
volatile int64_t t65 = -1903LL;
uint8_t x267 = UINT8_MAX;
uint64_t x272 = UINT64_MAX;
static int32_t x273 = INT32_MIN;
static uint8_t x276 = 11U;
uint8_t x279 = 1U;
int32_t t69 = -24149381;
int8_t x291 = INT8_MIN;
static int64_t x292 = 15701884245LL;
int8_t x295 = INT8_MAX;
uint32_t x299 = UINT32_MAX;
int16_t x306 = INT16_MIN;
uint16_t x307 = 0U;
int64_t x311 = 14437325344114LL;
static int16_t x313 = 0;
int64_t x317 = -962393749LL;
uint16_t x319 = UINT16_MAX;
uint64_t x331 = UINT64_MAX;
int32_t x332 = INT32_MIN;
uint16_t x340 = UINT16_MAX;
uint16_t x342 = 19065U;
static volatile int32_t x344 = -1;
int64_t t85 = 843176575LL;
int64_t x346 = INT64_MAX;
static int64_t x348 = INT64_MIN;
volatile int64_t x360 = -1LL;
int16_t x362 = INT16_MIN;
volatile uint16_t x370 = 7347U;
int64_t x376 = INT64_MIN;
int64_t t93 = -58279LL;
static int32_t x377 = 1;
static uint8_t x380 = 36U;
int64_t t94 = -244LL;
uint32_t t96 = 32460524U;
volatile uint32_t x395 = UINT32_MAX;
int32_t x397 = INT32_MIN;
static int32_t x398 = INT32_MIN;
volatile int64_t x400 = INT64_MIN;
uint8_t x412 = 14U;
uint64_t x414 = UINT64_MAX;
uint16_t x416 = UINT16_MAX;
volatile int16_t x420 = INT16_MAX;
int8_t x422 = -1;
static uint16_t x424 = 47U;
uint8_t x425 = 6U;
volatile int16_t x426 = 813;
int16_t x432 = INT16_MIN;
volatile uint32_t t107 = 91964U;
uint64_t x444 = UINT64_MAX;
int64_t x447 = INT64_MAX;
int16_t x456 = 2;
static uint32_t x462 = 5U;
volatile int32_t t115 = -252;
int8_t x466 = 15;
volatile uint32_t t116 = 223633776U;
int16_t x474 = INT16_MIN;
uint64_t x485 = 15525LLU;
int32_t x489 = INT32_MIN;
int16_t x491 = INT16_MIN;
uint8_t x492 = 37U;
volatile int32_t t122 = 368243597;
static uint16_t x503 = 1U;
static volatile int8_t x508 = INT8_MIN;
volatile uint16_t x513 = UINT16_MAX;
uint16_t x518 = 15U;
int32_t t129 = 24031964;
int8_t x526 = 23;
uint32_t t130 = 42U;
int8_t x531 = INT8_MIN;
volatile int32_t t131 = 2747;
uint64_t t133 = 3LLU;
volatile uint8_t x542 = 29U;
static volatile uint16_t x543 = 0U;
int8_t x544 = INT8_MIN;
volatile uint16_t x546 = 0U;
volatile int32_t x548 = -1;
static int64_t x550 = INT64_MIN;
volatile uint32_t x555 = 44795U;
int32_t x557 = INT32_MIN;
static uint16_t x560 = 270U;
static volatile uint16_t x562 = UINT16_MAX;
int64_t x566 = INT64_MAX;
int64_t t140 = 355252LL;
int32_t x569 = INT32_MIN;
int64_t x585 = INT64_MIN;
static int8_t x597 = INT8_MIN;
uint64_t x599 = 3585534544030859084LLU;
static int64_t x605 = -1LL;
int32_t t150 = -177;
uint64_t x613 = 7222628679449672LLU;
volatile int32_t x616 = 56112;
volatile uint64_t x618 = UINT64_MAX;
int32_t x622 = INT32_MIN;
int64_t x626 = -1LL;
static int8_t x631 = INT8_MIN;
uint32_t t155 = 2806U;
int64_t x642 = -404698179LL;
volatile int64_t x649 = -136526470LL;
uint32_t x650 = UINT32_MAX;
static int32_t x655 = INT32_MAX;
int32_t t160 = -129648;
static int8_t x660 = -1;
volatile int64_t t162 = -1LL;
uint16_t x671 = UINT16_MAX;
uint16_t x673 = 0U;
int8_t x682 = -1;
int32_t x687 = INT32_MAX;
int32_t x701 = 6994;
uint64_t x707 = UINT64_MAX;
static int8_t x716 = 48;
uint8_t x717 = 5U;
static int8_t x727 = -1;
int32_t x732 = 87439;
int32_t x736 = INT32_MIN;
int8_t x739 = INT8_MIN;
int8_t x740 = INT8_MIN;
int32_t x742 = INT32_MIN;
uint16_t x747 = UINT16_MAX;
volatile uint16_t x750 = 19U;
static int64_t t184 = -12LL;
int8_t x754 = 1;
int64_t t185 = 2031240143164202LL;
uint64_t x760 = 10453683253354795LLU;
uint64_t t186 = 7LLU;
uint16_t x761 = 66U;
static int32_t x763 = INT32_MIN;
static int8_t x764 = -13;
uint16_t x770 = UINT16_MAX;
int32_t x771 = INT32_MIN;
int64_t t190 = 27976227039494028LL;
int32_t x778 = INT32_MIN;
uint32_t x780 = 3U;
static volatile uint32_t t191 = 17U;
int32_t x781 = INT32_MAX;
static int16_t x792 = INT16_MIN;
int8_t x797 = -1;
int16_t x800 = -1;
uint32_t x801 = 10U;
volatile uint64_t t198 = 927833185030024LLU;
uint16_t x810 = 25475U;


void f0(void) {
    	uint32_t x1 = 11U;
	int16_t x2 = -100;
	int64_t x3 = 0LL;
	static int64_t t0 = -2808543447LL;

    t0 = (((x1<=x2)&x3)%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	volatile int16_t x8 = -1;
	int64_t t1 = 1896203102486LL;

    t1 = (((x5<=x6)&x7)%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x10 = 6;
	static uint32_t x11 = UINT32_MAX;
	volatile uint64_t x12 = 919524257LLU;
	uint64_t t2 = 1636520LLU;

    t2 = (((x9<=x10)&x11)%x12);

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 240U;
	int64_t x14 = -1LL;
	uint64_t x16 = 33944LLU;

    t3 = (((x13<=x14)&x15)%x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x17 = 310067LLU;
	int64_t x18 = 2878LL;
	volatile uint16_t x19 = UINT16_MAX;
	int16_t x20 = 220;
	volatile int32_t t4 = 120351067;

    t4 = (((x17<=x18)&x19)%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 566LLU;
	int8_t x22 = -1;
	volatile uint16_t x23 = 15U;
	int32_t x24 = -1;
	int32_t t5 = -48426184;

    t5 = (((x21<=x22)&x23)%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MIN;
	int8_t x26 = -1;
	int16_t x27 = INT16_MIN;
	static volatile int64_t t6 = -31839LL;

    t6 = (((x25<=x26)&x27)%x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = -1LL;
	static int64_t x30 = 337345554082LL;
	int64_t x31 = 1LL;
	static volatile int64_t t7 = 59LL;

    t7 = (((x29<=x30)&x31)%x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = 7U;
	static int8_t x34 = 1;
	static int16_t x35 = INT16_MIN;
	uint32_t x36 = UINT32_MAX;

    t8 = (((x33<=x34)&x35)%x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 66586;

    t9 = (((x37<=x38)&x39)%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = UINT8_MAX;
	int8_t x42 = -12;
	volatile uint16_t x43 = 52U;
	int32_t x44 = INT32_MAX;
	int32_t t10 = -173384;

    t10 = (((x41<=x42)&x43)%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	uint16_t x46 = 2U;
	int64_t x47 = INT64_MIN;
	int64_t t11 = -2LL;

    t11 = (((x45<=x46)&x47)%x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile int16_t x52 = 256;
	uint32_t t12 = 5U;

    t12 = (((x49<=x50)&x51)%x52);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 53733201;
	uint32_t x54 = 1471U;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;

    t13 = (((x53<=x54)&x55)%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x59 = UINT32_MAX;
	static int64_t x60 = -58040482847222LL;

    t14 = (((x57<=x58)&x59)%x60);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 212U;
	static uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MAX;
	static uint32_t t15 = 6U;

    t15 = (((x61<=x62)&x63)%x64);

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MAX;
	int32_t x67 = -25841;
	static int32_t t16 = -66316591;

    t16 = (((x65<=x66)&x67)%x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = UINT64_MAX;
	int16_t x72 = -1;
	int32_t t17 = 0;

    t17 = (((x69<=x70)&x71)%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 402U;
	int8_t x74 = -1;
	static int64_t x75 = -44026LL;
	int8_t x76 = INT8_MIN;
	volatile int64_t t18 = 1LL;

    t18 = (((x73<=x74)&x75)%x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = 976316943936LLU;
	int8_t x80 = -1;

    t19 = (((x77<=x78)&x79)%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = 6U;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	uint16_t x84 = UINT16_MAX;

    t20 = (((x81<=x82)&x83)%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = -150497;
	volatile int16_t x86 = INT16_MIN;
	int32_t x87 = 1690292;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = 1134;

    t21 = (((x85<=x86)&x87)%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 175U;
	int64_t x90 = INT64_MAX;
	int64_t x91 = INT64_MIN;
	int16_t x92 = 244;
	volatile int64_t t22 = -478024969LL;

    t22 = (((x89<=x90)&x91)%x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	uint32_t x94 = 3986971U;
	volatile int32_t x95 = INT32_MAX;
	static int64_t x96 = -1LL;
	int64_t t23 = -65900487656014LL;

    t23 = (((x93<=x94)&x95)%x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	uint16_t x99 = 2337U;
	static uint32_t x100 = 1U;
	static uint32_t t24 = 307U;

    t24 = (((x97<=x98)&x99)%x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	uint16_t x102 = 345U;
	static uint8_t x103 = UINT8_MAX;
	int64_t x104 = -2526154354093LL;
	static volatile int64_t t25 = 138448855943431697LL;

    t25 = (((x101<=x102)&x103)%x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = 13;
	static uint16_t x108 = 191U;
	static volatile int32_t t26 = -9060;

    t26 = (((x105<=x106)&x107)%x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	int16_t x111 = -1;
	int32_t x112 = 6;
	int32_t t27 = -602;

    t27 = (((x109<=x110)&x111)%x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	static volatile int8_t x114 = -1;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = 125054901964498768LLU;

    t28 = (((x113<=x114)&x115)%x116);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 824101241U;
	int64_t x118 = -1LL;
	volatile uint8_t x119 = 31U;
	uint64_t x120 = 87761358001LLU;
	volatile uint64_t t29 = 11LLU;

    t29 = (((x117<=x118)&x119)%x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x122 = 16006U;
	volatile int64_t x124 = -30LL;

    t30 = (((x121<=x122)&x123)%x124);

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x126 = 633624247094757097LLU;
	static uint8_t x127 = 3U;
	int8_t x128 = -2;
	volatile int32_t t31 = -18122;

    t31 = (((x125<=x126)&x127)%x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = 13204;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	static volatile int64_t t32 = 57877771384705189LL;

    t32 = (((x129<=x130)&x131)%x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	volatile int64_t x134 = INT64_MAX;
	int16_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 958630;

    t33 = (((x133<=x134)&x135)%x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	static int8_t x138 = 11;
	int32_t t34 = 465179357;

    t34 = (((x137<=x138)&x139)%x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = UINT8_MAX;
	uint32_t x142 = UINT32_MAX;
	volatile uint64_t x143 = 374877448826713411LLU;
	uint32_t x144 = 51U;

    t35 = (((x141<=x142)&x143)%x144);

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	uint32_t x147 = 1719U;
	int32_t x148 = INT32_MIN;
	volatile uint32_t t36 = 0U;

    t36 = (((x145<=x146)&x147)%x148);

    if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static volatile int32_t x150 = INT32_MIN;
	static int64_t x151 = -1LL;
	volatile int16_t x152 = INT16_MIN;

    t37 = (((x149<=x150)&x151)%x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 816557634140719785LLU;
	int16_t x155 = INT16_MIN;

    t38 = (((x153<=x154)&x155)%x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 20335041U;
	volatile int32_t x158 = INT32_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t39 = 59629U;

    t39 = (((x157<=x158)&x159)%x160);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = INT32_MAX;
	static int8_t x163 = -2;
	int8_t x164 = -1;

    t40 = (((x161<=x162)&x163)%x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	volatile int16_t x166 = -937;
	int32_t x167 = 65855;
	int64_t x168 = -1LL;
	int64_t t41 = -481856029LL;

    t41 = (((x165<=x166)&x167)%x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 0;
	int8_t x170 = 15;
	volatile uint8_t x171 = 4U;
	int8_t x172 = -1;

    t42 = (((x169<=x170)&x171)%x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 9426388U;
	volatile int64_t x175 = INT64_MAX;
	uint64_t t43 = 870094407181236077LLU;

    t43 = (((x173<=x174)&x175)%x176);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	volatile int32_t x179 = 1;
	int16_t x180 = -1;
	volatile int32_t t44 = 1;

    t44 = (((x177<=x178)&x179)%x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 17U;
	uint16_t x182 = 0U;
	volatile int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t45 = 312U;

    t45 = (((x181<=x182)&x183)%x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x187 = INT8_MAX;
	int32_t x188 = INT32_MAX;

    t46 = (((x185<=x186)&x187)%x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MAX;
	static uint8_t x190 = UINT8_MAX;
	int8_t x191 = -55;
	int8_t x192 = 2;
	volatile int32_t t47 = -7421;

    t47 = (((x189<=x190)&x191)%x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x193 = 0;
	volatile uint16_t x194 = 7433U;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = 9620421;

    t48 = (((x193<=x194)&x195)%x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -1LL;
	int16_t x198 = 12;
	int16_t x200 = INT16_MIN;

    t49 = (((x197<=x198)&x199)%x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = 0;
	int64_t x202 = -271177LL;
	uint32_t x204 = 17U;
	uint32_t t50 = 16661979U;

    t50 = (((x201<=x202)&x203)%x204);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t t51 = 1084523557U;

    t51 = (((x205<=x206)&x207)%x208);

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = 2U;
	static int8_t x210 = INT8_MIN;
	uint64_t x211 = 57824611355966530LLU;
	static int8_t x212 = INT8_MAX;
	uint64_t t52 = 25486744527954LLU;

    t52 = (((x209<=x210)&x211)%x212);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MIN;
	uint32_t x215 = 10U;
	static int32_t x216 = INT32_MIN;
	static volatile uint32_t t53 = 7700040U;

    t53 = (((x213<=x214)&x215)%x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MIN;
	static int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MAX;
	int8_t x220 = 6;
	int32_t t54 = -24300;

    t54 = (((x217<=x218)&x219)%x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = 1848U;
	int32_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	static volatile uint16_t x224 = 364U;

    t55 = (((x221<=x222)&x223)%x224);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x226 = -1;
	uint16_t x228 = 47U;
	static volatile int32_t t56 = 62;

    t56 = (((x225<=x226)&x227)%x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = 0;
	uint8_t x230 = 123U;
	int16_t x231 = -1572;
	static int16_t x232 = INT16_MAX;

    t57 = (((x229<=x230)&x231)%x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	static int8_t x235 = -1;
	int32_t x236 = 833;
	volatile int32_t t58 = -44589;

    t58 = (((x233<=x234)&x235)%x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x237 = 25LLU;
	int8_t x239 = 1;
	int32_t t59 = -610205;

    t59 = (((x237<=x238)&x239)%x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = -22;
	volatile uint8_t x242 = UINT8_MAX;
	int64_t x243 = -1LL;
	int16_t x244 = INT16_MIN;
	int64_t t60 = 13717916440LL;

    t60 = (((x241<=x242)&x243)%x244);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = -1;
	uint16_t x247 = 6452U;
	int64_t t61 = -159526275215607901LL;

    t61 = (((x245<=x246)&x247)%x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	volatile int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	volatile uint64_t t62 = 16691LLU;

    t62 = (((x249<=x250)&x251)%x252);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 24067311LLU;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = 11;
	int16_t x256 = 11;
	int32_t t63 = 2151;

    t63 = (((x253<=x254)&x255)%x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	static int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int32_t x260 = -1;
	int32_t t64 = 169087;

    t64 = (((x257<=x258)&x259)%x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = INT16_MIN;
	static volatile int64_t x263 = -1LL;
	int16_t x264 = INT16_MAX;

    t65 = (((x261<=x262)&x263)%x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x265 = 83U;
	static int32_t x266 = INT32_MAX;
	uint16_t x268 = 209U;
	int32_t t66 = -1928;

    t66 = (((x265<=x266)&x267)%x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 1U;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 2U;
	uint64_t t67 = 29072360LLU;

    t67 = (((x269<=x270)&x271)%x272);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = 446975300364LL;
	int32_t x275 = INT32_MAX;
	int32_t t68 = 34404;

    t68 = (((x273<=x274)&x275)%x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 114U;
	int64_t x278 = -1LL;
	static volatile int32_t x280 = INT32_MIN;

    t69 = (((x277<=x278)&x279)%x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 3584136LLU;
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MAX;
	uint8_t x284 = 1U;
	int32_t t70 = -1044899132;

    t70 = (((x281<=x282)&x283)%x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	static uint32_t x286 = 3108U;
	static int64_t x287 = INT64_MIN;
	volatile int16_t x288 = -1;
	int64_t t71 = 4406608768491469622LL;

    t71 = (((x285<=x286)&x287)%x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 1305U;
	static int16_t x290 = -1;
	volatile int64_t t72 = -488712586548676LL;

    t72 = (((x289<=x290)&x291)%x292);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 54390;
	int32_t x294 = -45945669;
	int64_t x296 = -28748528940LL;
	static int64_t t73 = 1LL;

    t73 = (((x293<=x294)&x295)%x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	uint16_t x298 = 62U;
	static int8_t x300 = -1;
	volatile uint32_t t74 = 21366632U;

    t74 = (((x297<=x298)&x299)%x300);

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	int32_t x302 = INT32_MIN;
	int16_t x303 = -1;
	uint16_t x304 = 1683U;
	static volatile int32_t t75 = -3759787;

    t75 = (((x301<=x302)&x303)%x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = INT64_MAX;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = -129519;

    t76 = (((x305<=x306)&x307)%x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 3383220;
	volatile int16_t x310 = -5939;
	volatile uint32_t x312 = 15U;
	volatile int64_t t77 = 4669610441LL;

    t77 = (((x309<=x310)&x311)%x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = 895U;
	volatile int64_t x315 = 30619806043197421LL;
	volatile int8_t x316 = INT8_MAX;
	static int64_t t78 = 177732LL;

    t78 = (((x313<=x314)&x315)%x316);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = -1;
	int64_t x320 = -39054200919LL;
	int64_t t79 = 229963768971263LL;

    t79 = (((x317<=x318)&x319)%x320);

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MAX;
	int8_t x323 = INT8_MIN;
	int8_t x324 = -35;
	int32_t t80 = -43;

    t80 = (((x321<=x322)&x323)%x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	int32_t x326 = 1620435;
	volatile int16_t x327 = INT16_MIN;
	volatile int32_t x328 = -1;
	volatile int32_t t81 = 10;

    t81 = (((x325<=x326)&x327)%x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 0;
	static int8_t x330 = INT8_MAX;
	volatile uint64_t t82 = 30424210245LLU;

    t82 = (((x329<=x330)&x331)%x332);

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	static volatile uint64_t x334 = 15474106LLU;
	static uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 790827U;
	volatile uint32_t t83 = 35U;

    t83 = (((x333<=x334)&x335)%x336);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 5270LLU;
	int16_t x338 = -1;
	int8_t x339 = INT8_MIN;
	volatile int32_t t84 = 5219267;

    t84 = (((x337<=x338)&x339)%x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	static volatile int64_t x343 = -1LL;

    t85 = (((x341<=x342)&x343)%x344);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	static uint16_t x347 = UINT16_MAX;
	int64_t t86 = 25236333919LL;

    t86 = (((x345<=x346)&x347)%x348);

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	static int64_t x350 = -617LL;
	volatile uint8_t x351 = 6U;
	static int32_t x352 = INT32_MIN;
	static int32_t t87 = 2637;

    t87 = (((x349<=x350)&x351)%x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	static volatile int16_t x354 = -24;
	int8_t x355 = 0;
	uint32_t x356 = UINT32_MAX;
	uint32_t t88 = 9U;

    t88 = (((x353<=x354)&x355)%x356);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = 3;
	volatile int64_t t89 = 5LL;

    t89 = (((x357<=x358)&x359)%x360);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	int8_t x363 = -24;
	int64_t x364 = -10LL;
	int64_t t90 = 7569LL;

    t90 = (((x361<=x362)&x363)%x364);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	static int16_t x366 = -1;
	uint64_t x367 = 13LLU;
	static volatile int16_t x368 = INT16_MIN;
	static uint64_t t91 = 511747LLU;

    t91 = (((x365<=x366)&x367)%x368);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = INT16_MIN;
	int32_t t92 = -35;

    t92 = (((x369<=x370)&x371)%x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = -1;
	volatile uint8_t x374 = UINT8_MAX;
	int64_t x375 = -1LL;

    t93 = (((x373<=x374)&x375)%x376);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = 0;
	volatile int64_t x379 = INT64_MAX;

    t94 = (((x377<=x378)&x379)%x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 60758389LLU;
	static uint32_t x382 = 47664U;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t95 = -7;

    t95 = (((x381<=x382)&x383)%x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MAX;
	uint32_t x388 = 10784392U;

    t96 = (((x385<=x386)&x387)%x388);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = 149;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = -1;
	static int16_t x392 = 4;
	volatile int32_t t97 = -875730;

    t97 = (((x389<=x390)&x391)%x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MAX;
	int16_t x394 = -1;
	int16_t x396 = 27;
	static uint32_t t98 = 193U;

    t98 = (((x393<=x394)&x395)%x396);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x399 = 29509752LL;
	int64_t t99 = -1195346304799959LL;

    t99 = (((x397<=x398)&x399)%x400);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = UINT8_MAX;
	int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	volatile int32_t t100 = -272585125;

    t100 = (((x401<=x402)&x403)%x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = 177;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -9;
	uint32_t x408 = 1543290U;
	volatile uint32_t t101 = 5107945U;

    t101 = (((x405<=x406)&x407)%x408);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -2245615LL;
	int64_t x410 = 153LL;
	int16_t x411 = -12367;
	volatile int32_t t102 = -9;

    t102 = (((x409<=x410)&x411)%x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -36;
	int32_t x415 = INT32_MIN;
	static int32_t t103 = -95943;

    t103 = (((x413<=x414)&x415)%x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = -8;
	static int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	int64_t t104 = -14743889941LL;

    t104 = (((x417<=x418)&x419)%x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 0U;
	volatile int32_t x423 = 28;
	volatile int32_t t105 = 373568182;

    t105 = (((x421<=x422)&x423)%x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x427 = INT32_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t106 = 110706740LLU;

    t106 = (((x425<=x426)&x427)%x428);

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = UINT64_MAX;
	uint64_t x430 = UINT64_MAX;
	uint32_t x431 = 78767U;

    t107 = (((x429<=x430)&x431)%x432);

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 237U;
	int64_t x434 = -5082390046189966LL;
	uint32_t x435 = UINT32_MAX;
	uint8_t x436 = 24U;
	static volatile uint32_t t108 = 505915352U;

    t108 = (((x433<=x434)&x435)%x436);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint8_t x438 = UINT8_MAX;
	int8_t x439 = INT8_MAX;
	int32_t x440 = -8;
	int32_t t109 = 103121;

    t109 = (((x437<=x438)&x439)%x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -1;
	static uint64_t x442 = UINT64_MAX;
	volatile int32_t x443 = -1;
	static volatile uint64_t t110 = 368519LLU;

    t110 = (((x441<=x442)&x443)%x444);

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = -1;
	int8_t x446 = INT8_MAX;
	volatile int32_t x448 = -13;
	static volatile int64_t t111 = -2748LL;

    t111 = (((x445<=x446)&x447)%x448);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = INT64_MIN;
	int16_t x450 = INT16_MIN;
	int64_t x451 = 59272LL;
	uint32_t x452 = 2100375189U;
	static int64_t t112 = -507401LL;

    t112 = (((x449<=x450)&x451)%x452);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 3211875928LLU;
	static int16_t x454 = -1;
	int16_t x455 = -1;
	int32_t t113 = 7;

    t113 = (((x453<=x454)&x455)%x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 279870100554150778LLU;
	volatile int8_t x458 = -1;
	uint32_t x459 = 0U;
	int64_t x460 = -53589LL;
	int64_t t114 = -1LL;

    t114 = (((x457<=x458)&x459)%x460);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	int8_t x463 = INT8_MAX;
	int32_t x464 = 855007;

    t115 = (((x461<=x462)&x463)%x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	int8_t x467 = -1;
	uint32_t x468 = 288733U;

    t116 = (((x465<=x466)&x467)%x468);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -14;
	volatile int16_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	int32_t x472 = -13290253;
	static volatile int32_t t117 = 7526473;

    t117 = (((x469<=x470)&x471)%x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = -1LL;
	volatile int32_t x475 = INT32_MAX;
	int32_t x476 = INT32_MIN;
	int32_t t118 = -1;

    t118 = (((x473<=x474)&x475)%x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 1090374U;
	volatile int64_t x478 = 227393364LL;
	static int16_t x479 = -1;
	uint32_t x480 = 5687U;
	volatile uint32_t t119 = 152248U;

    t119 = (((x477<=x478)&x479)%x480);

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = UINT32_MAX;
	int32_t x482 = INT32_MAX;
	int8_t x483 = INT8_MIN;
	int16_t x484 = 27;
	volatile int32_t t120 = -1308;

    t120 = (((x481<=x482)&x483)%x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x486 = INT64_MIN;
	uint8_t x487 = UINT8_MAX;
	int64_t x488 = 30933431703LL;
	static int64_t t121 = -3641775385672103848LL;

    t121 = (((x485<=x486)&x487)%x488);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = INT16_MAX;

    t122 = (((x489<=x490)&x491)%x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x497 = 8U;
	int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MAX;
	int16_t x500 = INT16_MAX;
	volatile int32_t t123 = 7;

    t123 = (((x497<=x498)&x499)%x500);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x501 = INT8_MAX;
	int8_t x502 = INT8_MIN;
	int32_t x504 = INT32_MIN;
	int32_t t124 = -3126;

    t124 = (((x501<=x502)&x503)%x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x505 = UINT8_MAX;
	int32_t x506 = -247;
	int64_t x507 = INT64_MIN;
	int64_t t125 = -213268926628138LL;

    t125 = (((x505<=x506)&x507)%x508);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x509 = INT32_MIN;
	static uint8_t x510 = 112U;
	static int32_t x511 = 4364156;
	int32_t x512 = -1734;
	volatile int32_t t126 = -519105319;

    t126 = (((x509<=x510)&x511)%x512);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x514 = UINT16_MAX;
	int32_t x515 = -1;
	uint32_t x516 = 25U;
	volatile uint32_t t127 = 868U;

    t127 = (((x513<=x514)&x515)%x516);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x517 = UINT8_MAX;
	int16_t x519 = -1;
	int64_t x520 = INT64_MIN;
	volatile int64_t t128 = 275085931609922LL;

    t128 = (((x517<=x518)&x519)%x520);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x521 = UINT16_MAX;
	int64_t x522 = -1LL;
	static uint16_t x523 = UINT16_MAX;
	int8_t x524 = INT8_MAX;

    t129 = (((x521<=x522)&x523)%x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x525 = UINT8_MAX;
	uint32_t x527 = 12854U;
	volatile uint16_t x528 = 330U;

    t130 = (((x525<=x526)&x527)%x528);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x529 = INT16_MIN;
	int64_t x530 = INT64_MAX;
	static volatile int16_t x532 = 14042;

    t131 = (((x529<=x530)&x531)%x532);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x533 = -1;
	volatile int8_t x534 = -43;
	volatile int32_t x535 = INT32_MIN;
	volatile int64_t x536 = 243LL;
	int64_t t132 = -3125286946629LL;

    t132 = (((x533<=x534)&x535)%x536);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x537 = 3;
	static int32_t x538 = INT32_MIN;
	uint16_t x539 = 4U;
	volatile uint64_t x540 = 1LLU;

    t133 = (((x537<=x538)&x539)%x540);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x541 = 1591360;
	static volatile int32_t t134 = -83259;

    t134 = (((x541<=x542)&x543)%x544);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile int16_t x547 = INT16_MIN;
	int32_t t135 = -1;

    t135 = (((x545<=x546)&x547)%x548);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x549 = 4188U;
	int64_t x551 = 433LL;
	uint64_t x552 = 38931107983782LLU;
	uint64_t t136 = 24383128681LLU;

    t136 = (((x549<=x550)&x551)%x552);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x553 = -1;
	uint16_t x554 = 24427U;
	volatile uint32_t x556 = 73690U;
	volatile uint32_t t137 = 427U;

    t137 = (((x553<=x554)&x555)%x556);

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x558 = 637217608;
	int16_t x559 = INT16_MIN;
	int32_t t138 = 901;

    t138 = (((x557<=x558)&x559)%x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x561 = INT32_MAX;
	uint16_t x563 = 6U;
	int64_t x564 = -3440552903060LL;
	int64_t t139 = -4363614765LL;

    t139 = (((x561<=x562)&x563)%x564);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x565 = INT32_MIN;
	static int16_t x567 = -1;
	volatile int64_t x568 = -1LL;

    t140 = (((x565<=x566)&x567)%x568);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x570 = -6;
	static int8_t x571 = INT8_MIN;
	static int32_t x572 = -90595967;
	volatile int32_t t141 = 4;

    t141 = (((x569<=x570)&x571)%x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x573 = -3;
	int32_t x574 = INT32_MIN;
	static uint8_t x575 = UINT8_MAX;
	uint16_t x576 = UINT16_MAX;
	volatile int32_t t142 = 241;

    t142 = (((x573<=x574)&x575)%x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x577 = 229;
	int32_t x578 = INT32_MIN;
	static int64_t x579 = -1LL;
	int8_t x580 = INT8_MIN;
	int64_t t143 = -3331438442135431360LL;

    t143 = (((x577<=x578)&x579)%x580);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x581 = UINT64_MAX;
	uint8_t x582 = 7U;
	int64_t x583 = INT64_MIN;
	int64_t x584 = 584589LL;
	int64_t t144 = 15655751571889147LL;

    t144 = (((x581<=x582)&x583)%x584);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x586 = -1;
	int16_t x587 = 3;
	volatile int32_t x588 = INT32_MIN;
	int32_t t145 = -5;

    t145 = (((x585<=x586)&x587)%x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	int64_t x590 = 3175662744085LL;
	uint8_t x591 = 57U;
	uint64_t x592 = 59043383992081LLU;
	static volatile uint64_t t146 = 71471LLU;

    t146 = (((x589<=x590)&x591)%x592);

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x593 = INT8_MAX;
	int64_t x594 = -23463711LL;
	volatile int32_t x595 = INT32_MAX;
	volatile int32_t x596 = 15476;
	volatile int32_t t147 = -28;

    t147 = (((x593<=x594)&x595)%x596);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x598 = INT16_MIN;
	volatile int8_t x600 = INT8_MIN;
	uint64_t t148 = 16784830396LLU;

    t148 = (((x597<=x598)&x599)%x600);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x606 = -3726640LL;
	static uint64_t x607 = 208LLU;
	volatile uint8_t x608 = 74U;
	uint64_t t149 = 5388058734666683LLU;

    t149 = (((x605<=x606)&x607)%x608);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x609 = 0;
	volatile uint32_t x610 = 33057U;
	volatile int32_t x611 = 21283128;
	uint8_t x612 = 2U;

    t150 = (((x609<=x610)&x611)%x612);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x614 = UINT64_MAX;
	int16_t x615 = INT16_MIN;
	int32_t t151 = -218127151;

    t151 = (((x613<=x614)&x615)%x616);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x617 = -1LL;
	int8_t x619 = -1;
	int16_t x620 = INT16_MIN;
	static int32_t t152 = -37465380;

    t152 = (((x617<=x618)&x619)%x620);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = -91440;
	volatile int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MIN;
	volatile int32_t t153 = 40;

    t153 = (((x621<=x622)&x623)%x624);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x625 = 27125U;
	int32_t x627 = 64869211;
	int64_t x628 = 254952LL;
	volatile int64_t t154 = -218LL;

    t154 = (((x625<=x626)&x627)%x628);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x629 = -1;
	int64_t x630 = -1LL;
	uint32_t x632 = 30U;

    t155 = (((x629<=x630)&x631)%x632);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = INT8_MIN;
	int8_t x634 = -1;
	static uint64_t x635 = 17201834015810469LLU;
	int32_t x636 = -107;
	volatile uint64_t t156 = 172LLU;

    t156 = (((x633<=x634)&x635)%x636);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x637 = 7900728U;
	int8_t x638 = INT8_MIN;
	int8_t x639 = 22;
	volatile uint8_t x640 = 9U;
	static volatile int32_t t157 = 205759965;

    t157 = (((x637<=x638)&x639)%x640);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x641 = UINT32_MAX;
	volatile uint8_t x643 = 115U;
	uint8_t x644 = 27U;
	volatile int32_t t158 = -101006;

    t158 = (((x641<=x642)&x643)%x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x651 = 1LL;
	uint16_t x652 = UINT16_MAX;
	volatile int64_t t159 = -4116186413361053531LL;

    t159 = (((x649<=x650)&x651)%x652);

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x653 = INT32_MAX;
	int64_t x654 = 211580649104LL;
	int8_t x656 = INT8_MIN;

    t160 = (((x653<=x654)&x655)%x656);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x657 = UINT8_MAX;
	int16_t x658 = -3525;
	int64_t x659 = 3003878327684LL;
	volatile int64_t t161 = 0LL;

    t161 = (((x657<=x658)&x659)%x660);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x661 = 25U;
	volatile uint8_t x662 = UINT8_MAX;
	uint16_t x663 = UINT16_MAX;
	int64_t x664 = 629276LL;

    t162 = (((x661<=x662)&x663)%x664);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x665 = 342U;
	int8_t x666 = -1;
	uint32_t x667 = UINT32_MAX;
	uint64_t x668 = 12995LLU;
	static volatile uint64_t t163 = 111389954LLU;

    t163 = (((x665<=x666)&x667)%x668);

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x669 = 1567U;
	int64_t x670 = 1LL;
	int64_t x672 = -6668225415879LL;
	volatile int64_t t164 = -51622192LL;

    t164 = (((x669<=x670)&x671)%x672);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x674 = INT32_MAX;
	int16_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int32_t t165 = -48;

    t165 = (((x673<=x674)&x675)%x676);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x677 = 126627968LL;
	static uint64_t x678 = 8LLU;
	uint64_t x679 = UINT64_MAX;
	static uint8_t x680 = 51U;
	static volatile uint64_t t166 = 4133041467559757608LLU;

    t166 = (((x677<=x678)&x679)%x680);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x681 = INT32_MIN;
	uint8_t x683 = 2U;
	uint64_t x684 = 590354898LLU;
	volatile uint64_t t167 = 3147149LLU;

    t167 = (((x681<=x682)&x683)%x684);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x685 = -1;
	uint8_t x686 = 0U;
	int16_t x688 = -1;
	volatile int32_t t168 = -92311835;

    t168 = (((x685<=x686)&x687)%x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x689 = -1;
	int64_t x690 = -194311890LL;
	volatile int8_t x691 = INT8_MAX;
	volatile int16_t x692 = -1;
	volatile int32_t t169 = 140;

    t169 = (((x689<=x690)&x691)%x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x693 = INT8_MIN;
	uint16_t x694 = UINT16_MAX;
	int16_t x695 = 156;
	uint64_t x696 = 77067732058716LLU;
	uint64_t t170 = 61437490LLU;

    t170 = (((x693<=x694)&x695)%x696);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x697 = 549861934U;
	uint8_t x698 = 114U;
	uint32_t x699 = 137136737U;
	uint64_t x700 = 4578552270563403192LLU;
	uint64_t t171 = 28819LLU;

    t171 = (((x697<=x698)&x699)%x700);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x702 = -783346LL;
	volatile uint64_t x703 = UINT64_MAX;
	int8_t x704 = INT8_MIN;
	uint64_t t172 = 86LLU;

    t172 = (((x701<=x702)&x703)%x704);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x705 = 94LLU;
	volatile int8_t x706 = -1;
	uint8_t x708 = UINT8_MAX;
	static volatile uint64_t t173 = 3229207755245574LLU;

    t173 = (((x705<=x706)&x707)%x708);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x709 = INT8_MAX;
	int64_t x710 = -2956199839415785077LL;
	int16_t x711 = INT16_MAX;
	int16_t x712 = INT16_MIN;
	volatile int32_t t174 = 2638695;

    t174 = (((x709<=x710)&x711)%x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x713 = 55349LL;
	int64_t x714 = INT64_MAX;
	static int32_t x715 = -1;
	volatile int32_t t175 = 13465368;

    t175 = (((x713<=x714)&x715)%x716);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x718 = -1;
	int64_t x719 = INT64_MIN;
	static volatile int64_t x720 = INT64_MIN;
	volatile int64_t t176 = -93173450LL;

    t176 = (((x717<=x718)&x719)%x720);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x721 = INT64_MIN;
	volatile int64_t x722 = -1LL;
	int64_t x723 = -1LL;
	volatile int64_t x724 = 31632228808518LL;
	int64_t t177 = 2010LL;

    t177 = (((x721<=x722)&x723)%x724);

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MIN;
	uint8_t x728 = 51U;
	int32_t t178 = 8069926;

    t178 = (((x725<=x726)&x727)%x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x729 = -43947LL;
	int8_t x730 = -7;
	uint8_t x731 = 13U;
	static volatile int32_t t179 = -4504;

    t179 = (((x729<=x730)&x731)%x732);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x733 = -1;
	static volatile int8_t x734 = INT8_MIN;
	uint32_t x735 = 10833U;
	uint32_t t180 = 2009U;

    t180 = (((x733<=x734)&x735)%x736);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x737 = INT64_MAX;
	uint64_t x738 = 369668882837LLU;
	int32_t t181 = 0;

    t181 = (((x737<=x738)&x739)%x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = 216881498;
	int64_t x743 = INT64_MIN;
	int32_t x744 = INT32_MIN;
	int64_t t182 = -349152799066028LL;

    t182 = (((x741<=x742)&x743)%x744);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x745 = INT32_MIN;
	uint64_t x746 = UINT64_MAX;
	int32_t x748 = INT32_MIN;
	int32_t t183 = -7;

    t183 = (((x745<=x746)&x747)%x748);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x749 = 2U;
	static int8_t x751 = 9;
	int64_t x752 = 7150627LL;

    t184 = (((x749<=x750)&x751)%x752);

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x753 = -1;
	int64_t x755 = INT64_MIN;
	int64_t x756 = INT64_MIN;

    t185 = (((x753<=x754)&x755)%x756);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x757 = 23267701405790LL;
	static int32_t x758 = INT32_MIN;
	uint64_t x759 = UINT64_MAX;

    t186 = (((x757<=x758)&x759)%x760);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x762 = UINT64_MAX;
	static int32_t t187 = 6;

    t187 = (((x761<=x762)&x763)%x764);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x765 = 272515893272154LL;
	static volatile int64_t x766 = INT64_MIN;
	static int32_t x767 = -12736452;
	uint8_t x768 = 3U;
	int32_t t188 = 78;

    t188 = (((x765<=x766)&x767)%x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x769 = INT64_MIN;
	static int8_t x772 = INT8_MAX;
	static volatile int32_t t189 = -15168648;

    t189 = (((x769<=x770)&x771)%x772);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	volatile int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MAX;
	int32_t x776 = 145022784;

    t190 = (((x773<=x774)&x775)%x776);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x777 = -1;
	int32_t x779 = INT32_MIN;

    t191 = (((x777<=x778)&x779)%x780);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x782 = INT8_MIN;
	int16_t x783 = -452;
	static int16_t x784 = -8076;
	int32_t t192 = -35;

    t192 = (((x781<=x782)&x783)%x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x785 = -1;
	uint8_t x786 = UINT8_MAX;
	int8_t x787 = INT8_MIN;
	uint64_t x788 = UINT64_MAX;
	volatile uint64_t t193 = 4352752228LLU;

    t193 = (((x785<=x786)&x787)%x788);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x789 = INT32_MIN;
	int32_t x790 = INT32_MAX;
	static int16_t x791 = INT16_MIN;
	int32_t t194 = -71427173;

    t194 = (((x789<=x790)&x791)%x792);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x793 = INT64_MIN;
	uint8_t x794 = 0U;
	int32_t x795 = -248;
	int64_t x796 = 1201LL;
	int64_t t195 = 5525540LL;

    t195 = (((x793<=x794)&x795)%x796);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x798 = -33159059434457675LL;
	uint32_t x799 = 1U;
	volatile uint32_t t196 = 6986348U;

    t196 = (((x797<=x798)&x799)%x800);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x802 = INT16_MIN;
	uint64_t x803 = 30639LLU;
	uint32_t x804 = 12227080U;
	static volatile uint64_t t197 = 15588295LLU;

    t197 = (((x801<=x802)&x803)%x804);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x805 = -1;
	uint32_t x806 = 3U;
	static int32_t x807 = -182985435;
	uint64_t x808 = UINT64_MAX;

    t198 = (((x805<=x806)&x807)%x808);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x809 = 126083;
	int8_t x811 = 2;
	int32_t x812 = INT32_MIN;
	int32_t t199 = 51;

    t199 = (((x809<=x810)&x811)%x812);

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

