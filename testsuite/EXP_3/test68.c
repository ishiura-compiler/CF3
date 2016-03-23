
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

volatile int8_t x4 = 48;
volatile uint32_t t0 = 75U;
int32_t x5 = INT32_MAX;
uint16_t x7 = 4U;
int16_t x10 = INT16_MIN;
static volatile int32_t t2 = -151388;
int16_t x21 = -1;
int16_t x24 = INT16_MIN;
int64_t x31 = -312769LL;
volatile int64_t t7 = -1LL;
uint64_t t8 = 8259667715891756290LLU;
uint32_t x43 = 536216529U;
int8_t x51 = INT8_MIN;
int16_t x54 = -4;
static int16_t x60 = -1;
int16_t x73 = INT16_MAX;
int8_t x91 = -1;
static int32_t t19 = 378;
static volatile int64_t t20 = 22LL;
int32_t x105 = -75301103;
int8_t x107 = INT8_MIN;
uint64_t x111 = 3174170LLU;
int32_t x113 = 1;
int8_t x116 = INT8_MIN;
volatile int64_t x131 = 11723672LL;
int32_t x137 = -26707521;
volatile int64_t t30 = 237281402097LL;
int16_t x146 = 656;
static volatile uint8_t x148 = 19U;
volatile uint32_t t31 = 3765423U;
volatile uint8_t x149 = 3U;
int64_t x152 = -1LL;
uint32_t x154 = 120495038U;
int64_t x155 = -38863283304243LL;
volatile int64_t x156 = INT64_MAX;
int64_t x160 = -1LL;
volatile int64_t t34 = 2216427606554821LL;
uint16_t x169 = 15U;
int16_t x173 = INT16_MIN;
int8_t x174 = 1;
int32_t x175 = INT32_MIN;
uint16_t x186 = 1729U;
int64_t x187 = -6713LL;
volatile uint8_t x203 = UINT8_MAX;
uint64_t t45 = 1198808933285204LLU;
int32_t x213 = INT32_MIN;
int8_t x218 = -1;
int64_t x224 = INT64_MIN;
int64_t t50 = 3391774990LL;
uint16_t x242 = 1U;
static uint32_t x250 = UINT32_MAX;
int64_t x257 = 42765741709841LL;
static uint16_t x259 = UINT16_MAX;
volatile uint64_t t55 = 546880860651177LLU;
volatile uint32_t t62 = 44U;
uint16_t x299 = 11547U;
volatile uint32_t x301 = UINT32_MAX;
int8_t x310 = INT8_MIN;
int32_t x323 = 2754222;
volatile int64_t x326 = INT64_MIN;
int64_t x328 = -1LL;
int32_t x334 = INT32_MIN;
uint32_t x347 = 1U;
int32_t x351 = 407806;
uint64_t x365 = UINT64_MAX;
int8_t x401 = -18;
static uint64_t x412 = 699LLU;
uint64_t t84 = 2LLU;
static uint64_t x420 = 152736982LLU;
volatile int16_t x421 = -1;
int8_t x430 = INT8_MAX;
int32_t x440 = -6;
volatile int64_t x441 = 23284294312422774LL;
uint16_t x459 = 7U;
volatile int32_t x473 = INT32_MIN;
int32_t x477 = INT32_MIN;
int8_t x478 = -1;
uint8_t x480 = UINT8_MAX;
volatile int32_t t97 = -950108269;
static volatile uint16_t x481 = 2540U;
int16_t x482 = INT16_MIN;
uint16_t x488 = 256U;
uint64_t t100 = 47511512662215956LLU;
int32_t x499 = INT32_MIN;
int64_t x500 = 1LL;
static uint16_t x503 = 719U;
uint16_t x513 = 29038U;
int16_t x514 = -1;
int8_t x515 = 62;
uint64_t x516 = 1055059738249085LLU;
uint16_t x518 = UINT16_MAX;
static int32_t x520 = -197070;
int64_t x522 = INT64_MIN;
uint8_t x526 = 1U;
uint8_t x528 = 122U;
static int16_t x529 = 20;
volatile int32_t t110 = -36;
volatile uint32_t t112 = 337U;
int16_t x558 = -1;
int16_t x562 = 5;
volatile int16_t x563 = -1;
int64_t x564 = 636736512001130LL;
static int16_t x571 = INT16_MIN;
static int16_t x575 = INT16_MIN;
volatile int32_t x582 = INT32_MIN;
volatile int32_t x584 = INT32_MIN;
static int64_t t120 = 1LL;
int64_t x588 = INT64_MIN;
volatile uint32_t x593 = UINT32_MAX;
static volatile uint16_t x597 = 85U;
uint32_t x602 = UINT32_MAX;
volatile uint16_t x618 = UINT16_MAX;
volatile int32_t x624 = INT32_MIN;
static volatile uint32_t x628 = 4U;
uint64_t x630 = 726426740639052724LLU;
int64_t x631 = INT64_MAX;
int64_t x632 = -732371794650610743LL;
static volatile uint64_t x641 = UINT64_MAX;
int32_t x642 = -1;
static volatile uint64_t t135 = 96418506420792LLU;
int64_t t138 = 4608519895906888719LL;
static uint32_t x665 = 425202378U;
volatile int64_t x673 = -4475464821164603LL;
int32_t x679 = 4071761;
uint16_t x685 = 21U;
static int64_t x689 = INT64_MAX;
static volatile uint64_t x695 = 8LLU;
static int64_t x701 = INT64_MIN;
volatile int32_t x702 = INT32_MAX;
int64_t x703 = -1LL;
int64_t t146 = 107LL;
static volatile int16_t x708 = -1;
int64_t x715 = -251518604236940258LL;
uint64_t x716 = 179462210436581982LLU;
uint64_t x724 = 2312189782329LLU;
static int16_t x726 = INT16_MIN;
static int16_t x730 = -18;
volatile int32_t t154 = 441699;
static uint64_t x741 = UINT64_MAX;
volatile int16_t x745 = INT16_MAX;
static int64_t x747 = INT64_MIN;
int8_t x749 = INT8_MIN;
static int16_t x754 = -26;
int8_t x756 = -51;
int64_t x763 = 193571174209743029LL;
int64_t x784 = INT64_MAX;
volatile uint64_t t163 = 168090279913466LLU;
uint16_t x786 = UINT16_MAX;
uint8_t x803 = UINT8_MAX;
volatile int64_t t168 = -1697LL;
volatile uint8_t x812 = 1U;
volatile int64_t x814 = INT64_MAX;
int64_t t171 = -128LL;
volatile int16_t x817 = INT16_MAX;
uint16_t x820 = UINT16_MAX;
int32_t x823 = 7570191;
int64_t x828 = -1LL;
volatile int32_t x829 = -1;
uint64_t x831 = UINT64_MAX;
int16_t x835 = INT16_MIN;
int8_t x840 = -52;
volatile int16_t x842 = -4053;
volatile uint32_t t178 = 689383U;
static uint8_t x848 = 88U;
volatile int16_t x852 = 2905;
uint8_t x858 = UINT8_MAX;
int16_t x862 = 2;
uint64_t t183 = 4540LLU;
uint8_t x868 = 4U;
int8_t x872 = 48;
int16_t x880 = INT16_MAX;
static int16_t x888 = 4053;
uint64_t x889 = 1512000LLU;
uint64_t x898 = 2283707471LLU;
int8_t x908 = INT8_MIN;
volatile uint64_t t194 = 163188LLU;
int64_t x910 = -1LL;
volatile int64_t t195 = -68643117889783367LL;
uint8_t x914 = UINT8_MAX;
static volatile uint8_t x925 = 3U;
static int64_t x927 = -45137560620LL;


void f0(void) {
    	int32_t x1 = 0;
	volatile uint32_t x2 = 437U;
	volatile uint32_t x3 = UINT32_MAX;

    t0 = ((x1%x2)&(x3+x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 61U;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = 34647961;

    t1 = ((x5%x6)&(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 0;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = INT8_MIN;

    t2 = ((x9%x10)&(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int8_t x14 = 2;
	static int64_t x15 = INT64_MAX;
	uint64_t x16 = 8931024LLU;
	uint64_t t3 = 4129016257910528LLU;

    t3 = ((x13%x14)&(x15+x16));

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int32_t x18 = -34950;
	uint32_t x19 = 81276672U;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t4 = 120U;

    t4 = ((x17%x18)&(x19+x20));

    if (t4 != 81243904U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	int64_t x23 = -28LL;
	static int64_t t5 = 150LL;

    t5 = ((x21%x22)&(x23+x24));

    if (t5 != -32796LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 77828841572142LL;
	volatile uint64_t x26 = UINT64_MAX;
	static volatile int16_t x27 = -1;
	int16_t x28 = INT16_MIN;
	static uint64_t t6 = 445568043166344LLU;

    t6 = ((x25%x26)&(x27+x28));

    if (t6 != 77828841539374LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 4981U;
	int16_t x30 = INT16_MIN;
	uint16_t x32 = 13372U;

    t7 = ((x29%x30)&(x31+x32));

    if (t7 != 625LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 29278370962672391LLU;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = 83976312475903244LL;
	uint64_t x36 = UINT64_MAX;

    t8 = ((x33%x34)&(x35+x36));

    if (t8 != 11259002835173635LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 14U;
	int16_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = -1LL;
	static volatile int64_t t9 = 672283602364186240LL;

    t9 = ((x37%x38)&(x39+x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 21U;
	static uint16_t x42 = 684U;
	int8_t x44 = INT8_MIN;
	uint32_t t10 = 1U;

    t10 = ((x41%x42)&(x43+x44));

    if (t10 != 17U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	int32_t x52 = -1;
	int64_t t11 = 66670798086927LL;

    t11 = ((x49%x50)&(x51+x52));

    if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -1;
	volatile uint32_t x55 = 293U;
	int16_t x56 = INT16_MIN;
	uint32_t t12 = 8U;

    t12 = ((x53%x54)&(x55+x56));

    if (t12 != 4294934821U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	uint64_t x58 = 2024519286904LLU;
	static uint16_t x59 = 383U;
	uint64_t t13 = 55083051LLU;

    t13 = ((x57%x58)&(x59+x60));

    if (t13 != 16LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x61 = 3614334529LLU;
	volatile int32_t x62 = -36;
	int64_t x63 = 55137LL;
	int8_t x64 = -28;
	static volatile uint64_t t14 = 10269761LLU;

    t14 = ((x61%x62)&(x63+x64));

    if (t14 != 22081LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = -1;
	uint8_t x70 = UINT8_MAX;
	static uint32_t x71 = 3U;
	int8_t x72 = INT8_MIN;
	uint32_t t15 = 883973665U;

    t15 = ((x69%x70)&(x71+x72));

    if (t15 != 4294967171U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x74 = 40270LLU;
	uint16_t x75 = 8029U;
	uint32_t x76 = UINT32_MAX;
	static uint64_t t16 = 93631LLU;

    t16 = ((x73%x74)&(x75+x76));

    if (t16 != 8028LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = 14324437;
	int8_t x82 = -1;
	uint32_t x83 = 5843U;
	volatile uint16_t x84 = 3647U;
	static volatile uint32_t t17 = 19U;

    t17 = ((x81%x82)&(x83+x84));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = -1;
	static int16_t x86 = -1;
	int16_t x87 = -1;
	int16_t x88 = INT16_MIN;
	volatile int32_t t18 = 1745350;

    t18 = ((x85%x86)&(x87+x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = INT32_MAX;
	uint8_t x90 = 1U;
	int8_t x92 = INT8_MAX;

    t19 = ((x89%x90)&(x91+x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MAX;
	volatile int8_t x94 = INT8_MAX;
	static volatile int64_t x95 = -533339494LL;
	int32_t x96 = INT32_MIN;

    t20 = ((x93%x94)&(x95+x96));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MAX;
	static uint64_t x103 = 9530468636590160LLU;
	static int8_t x104 = INT8_MAX;
	static uint64_t t21 = 513109382241804333LLU;

    t21 = ((x101%x102)&(x103+x104));

    if (t21 != 9530468636590287LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x106 = INT8_MIN;
	int32_t x108 = INT32_MAX;
	int32_t t22 = 115;

    t22 = ((x105%x106)&(x107+x108));

    if (t22 != 2147483409) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x109 = 6469U;
	int16_t x110 = -61;
	static uint32_t x112 = 294775U;
	static uint64_t t23 = 734957295121974LLU;

    t23 = ((x109%x110)&(x111+x112));

    if (t23 != 2049LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x114 = -46;
	uint64_t x115 = 252113607704643344LLU;
	static uint64_t t24 = 13032LLU;

    t24 = ((x113%x114)&(x115+x116));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x117 = INT8_MAX;
	int16_t x118 = -1;
	int8_t x119 = 3;
	int64_t x120 = -1098116248332285LL;
	int64_t t25 = -6LL;

    t25 = ((x117%x118)&(x119+x120));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = 32LLU;
	uint32_t x122 = 2683U;
	uint32_t x123 = 711267231U;
	static int8_t x124 = -1;
	volatile uint64_t t26 = 30LLU;

    t26 = ((x121%x122)&(x123+x124));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = -349;
	int64_t x130 = -1LL;
	int32_t x132 = INT32_MIN;
	volatile int64_t t27 = 330070650LL;

    t27 = ((x129%x130)&(x131+x132));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x133 = 785654LL;
	int32_t x134 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	int64_t t28 = 531LL;

    t28 = ((x133%x134)&(x135+x136));

    if (t28 != 785408LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x138 = INT16_MAX;
	int32_t x139 = -507;
	uint16_t x140 = 13554U;
	volatile int32_t t29 = 596194535;

    t29 = ((x137%x138)&(x139+x140));

    if (t29 != 12944) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = INT16_MAX;
	static int64_t x142 = -864401986175009LL;
	volatile int64_t x143 = 3135040242375740784LL;
	int64_t x144 = -1LL;

    t30 = ((x141%x142)&(x143+x144));

    if (t30 != 19823LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x145 = 2U;
	int8_t x147 = INT8_MIN;

    t31 = ((x145%x146)&(x147+x148));

    if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = -6222962;
	volatile int64_t t32 = -154720268LL;

    t32 = ((x149%x150)&(x151+x152));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x153 = INT16_MIN;
	volatile int64_t t33 = -495282437244691LL;

    t33 = ((x153%x154)&(x155+x156));

    if (t33 != 75497476LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = 1655U;
	volatile int32_t x158 = INT32_MAX;
	volatile int16_t x159 = 107;

    t34 = ((x157%x158)&(x159+x160));

    if (t34 != 98LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x161 = -50894043LL;
	int64_t x162 = INT64_MAX;
	static int32_t x163 = 210967573;
	int32_t x164 = -1;
	volatile int64_t t35 = 3079881LL;

    t35 = ((x161%x162)&(x163+x164));

    if (t35 != 210962436LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = 670LL;
	int64_t x172 = INT64_MIN;
	static int64_t t36 = -445793526LL;

    t36 = ((x169%x170)&(x171+x172));

    if (t36 != 14LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x176 = 3;
	int32_t t37 = 10;

    t37 = ((x173%x174)&(x175+x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = -2;
	static int8_t x178 = -1;
	volatile int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t38 = -59;

    t38 = ((x177%x178)&(x179+x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = INT16_MIN;
	volatile int32_t x182 = INT32_MIN;
	volatile uint8_t x183 = 0U;
	int16_t x184 = INT16_MIN;
	int32_t t39 = 27110;

    t39 = ((x181%x182)&(x183+x184));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = 1;
	volatile int16_t x188 = INT16_MAX;
	int64_t t40 = -2603224LL;

    t40 = ((x185%x186)&(x187+x188));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x193 = UINT32_MAX;
	uint8_t x194 = 32U;
	uint64_t x195 = UINT64_MAX;
	int8_t x196 = -1;
	static volatile uint64_t t41 = 91LLU;

    t41 = ((x193%x194)&(x195+x196));

    if (t41 != 30LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -1;
	uint16_t x198 = 162U;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = -1;
	static int32_t t42 = 254115;

    t42 = ((x197%x198)&(x199+x200));

    if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x201 = -1LL;
	volatile int16_t x202 = -1;
	uint32_t x204 = UINT32_MAX;
	static int64_t t43 = 13LL;

    t43 = ((x201%x202)&(x203+x204));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x205 = INT8_MIN;
	int16_t x206 = 3734;
	int64_t x207 = INT64_MIN;
	volatile int32_t x208 = 110166188;
	static volatile int64_t t44 = -26453410849LL;

    t44 = ((x205%x206)&(x207+x208));

    if (t44 != -9223372036744609664LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x209 = 6091074887LL;
	static volatile uint64_t x210 = UINT64_MAX;
	int64_t x211 = INT64_MIN;
	static volatile uint64_t x212 = 33634905279LLU;

    t45 = ((x209%x210)&(x211+x212));

    if (t45 != 5369392135LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x214 = UINT64_MAX;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	uint64_t t46 = 180579655LLU;

    t46 = ((x213%x214)&(x215+x216));

    if (t46 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = INT64_MIN;
	int16_t x219 = 5330;
	int64_t x220 = 1770885LL;
	int64_t t47 = -3191646977LL;

    t47 = ((x217%x218)&(x219+x220));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x221 = INT64_MIN;
	int32_t x222 = -1;
	int32_t x223 = 1070352179;
	static volatile int64_t t48 = -17LL;

    t48 = ((x221%x222)&(x223+x224));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x225 = INT32_MIN;
	static int8_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t49 = 21244LLU;

    t49 = ((x225%x226)&(x227+x228));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = 147186204533705341LL;
	static int32_t x230 = -4;
	uint32_t x231 = UINT32_MAX;
	static int8_t x232 = 5;

    t50 = ((x229%x230)&(x231+x232));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x241 = 0U;
	volatile int16_t x243 = -4;
	uint8_t x244 = UINT8_MAX;
	static volatile int32_t t51 = 0;

    t51 = ((x241%x242)&(x243+x244));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x249 = 1;
	static int64_t x251 = 33449999923LL;
	static int64_t x252 = 12275711149LL;
	static volatile int64_t t52 = -1044866692LL;

    t52 = ((x249%x250)&(x251+x252));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x253 = 138835513859LLU;
	static volatile int32_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	static uint32_t x256 = 10U;
	volatile uint64_t t53 = 162637LLU;

    t53 = ((x253%x254)&(x255+x256));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x258 = 2U;
	static int64_t x260 = INT64_MIN;
	int64_t t54 = -13833501074125LL;

    t54 = ((x257%x258)&(x259+x260));

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x265 = 180U;
	static uint16_t x266 = 37U;
	volatile uint64_t x267 = 42336423746725LLU;
	uint32_t x268 = 115U;

    t55 = ((x265%x266)&(x267+x268));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MAX;
	int64_t x271 = -1LL;
	static uint8_t x272 = UINT8_MAX;
	volatile int64_t t56 = 40142449914981919LL;

    t56 = ((x269%x270)&(x271+x272));

    if (t56 != 248LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x273 = -1LL;
	int32_t x274 = INT32_MIN;
	int32_t x275 = -1491;
	static uint64_t x276 = 3176309371LLU;
	volatile uint64_t t57 = 1895477139426LLU;

    t57 = ((x273%x274)&(x275+x276));

    if (t57 != 3176307880LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x277 = INT8_MAX;
	int32_t x278 = -1;
	int8_t x279 = INT8_MAX;
	uint16_t x280 = UINT16_MAX;
	int32_t t58 = -44707884;

    t58 = ((x277%x278)&(x279+x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x281 = 4390203748990848593LLU;
	int16_t x282 = INT16_MIN;
	int32_t x283 = -1;
	int8_t x284 = INT8_MIN;
	uint64_t t59 = 91126259324790878LLU;

    t59 = ((x281%x282)&(x283+x284));

    if (t59 != 4390203748990848593LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x285 = 184815656;
	int8_t x286 = INT8_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	static int32_t x288 = -1;
	uint32_t t60 = 0U;

    t60 = ((x285%x286)&(x287+x288));

    if (t60 != 40U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x289 = -50LL;
	static int32_t x290 = 1197631;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -50;
	int64_t t61 = 255LL;

    t61 = ((x289%x290)&(x291+x292));

    if (t61 != -32818LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x293 = -1;
	int32_t x294 = 1;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 73U;

    t62 = ((x293%x294)&(x295+x296));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t63 = 0;

    t63 = ((x297%x298)&(x299+x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x302 = 480220LLU;
	static int8_t x303 = -11;
	int8_t x304 = -1;
	volatile uint64_t t64 = 4033LLU;

    t64 = ((x301%x302)&(x303+x304));

    if (t64 != 359824LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x305 = -16LL;
	static int64_t x306 = INT64_MIN;
	int32_t x307 = 7333;
	int32_t x308 = INT32_MIN;
	volatile int64_t t65 = 14594071798784LL;

    t65 = ((x305%x306)&(x307+x308));

    if (t65 != -2147476320LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x309 = 32;
	int8_t x311 = -1;
	int8_t x312 = INT8_MAX;
	volatile int32_t t66 = -2001;

    t66 = ((x309%x310)&(x311+x312));

    if (t66 != 32) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x317 = -1;
	uint64_t x318 = 720347633281707252LLU;
	static int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	static volatile uint64_t t67 = 204547762649466946LLU;

    t67 = ((x317%x318)&(x319+x320));

    if (t67 != 438053241666870272LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t68 = 6U;

    t68 = ((x321%x322)&(x323+x324));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x325 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	int64_t t69 = 6383LL;

    t69 = ((x325%x326)&(x327+x328));

    if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x333 = -1LL;
	volatile int8_t x335 = INT8_MAX;
	uint8_t x336 = 112U;
	static int64_t t70 = -102552LL;

    t70 = ((x333%x334)&(x335+x336));

    if (t70 != 239LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x337 = INT8_MIN;
	static uint8_t x338 = 40U;
	int8_t x339 = -1;
	uint8_t x340 = 14U;
	int32_t t71 = -253721;

    t71 = ((x337%x338)&(x339+x340));

    if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x341 = -1LL;
	uint64_t x342 = 4704804376424437920LLU;
	int32_t x343 = -1;
	volatile int16_t x344 = INT16_MIN;
	static uint64_t t72 = 1LLU;

    t72 = ((x341%x342)&(x343+x344));

    if (t72 != 4332330944436205087LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x345 = -7;
	uint16_t x346 = UINT16_MAX;
	volatile int16_t x348 = 760;
	volatile uint32_t t73 = 1317U;

    t73 = ((x345%x346)&(x347+x348));

    if (t73 != 761U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x350 = -20;
	int8_t x352 = 4;
	volatile int32_t t74 = 34872921;

    t74 = ((x349%x350)&(x351+x352));

    if (t74 != 407808) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -33;
	int32_t x356 = INT32_MAX;
	volatile int32_t t75 = -203;

    t75 = ((x353%x354)&(x355+x356));

    if (t75 != 2147483614) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x361 = 841395;
	volatile int64_t x362 = 1629LL;
	uint64_t x363 = UINT64_MAX;
	static volatile int16_t x364 = INT16_MAX;
	uint64_t t76 = 839LLU;

    t76 = ((x361%x362)&(x363+x364));

    if (t76 != 830LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x366 = 2063305923290130167LLU;
	uint32_t x367 = 55045265U;
	static int8_t x368 = -16;
	static volatile uint64_t t77 = 1650462517012553820LLU;

    t77 = ((x365%x366)&(x367+x368));

    if (t77 != 33605633LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x373 = UINT8_MAX;
	static uint64_t x374 = 23243658279648279LLU;
	uint16_t x375 = 8192U;
	static int16_t x376 = INT16_MAX;
	volatile uint64_t t78 = 4938181742014211077LLU;

    t78 = ((x373%x374)&(x375+x376));

    if (t78 != 255LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x385 = -1LL;
	int64_t x386 = INT64_MIN;
	uint32_t x387 = 96575U;
	int8_t x388 = -1;
	volatile int64_t t79 = -4576736299237696LL;

    t79 = ((x385%x386)&(x387+x388));

    if (t79 != 96574LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x389 = -3;
	uint64_t x390 = 218741441268595843LLU;
	static int8_t x391 = INT8_MIN;
	uint32_t x392 = 222999629U;
	uint64_t t80 = 132162324328LLU;

    t80 = ((x389%x390)&(x391+x392));

    if (t80 != 138551553LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	static int16_t x395 = -1;
	static volatile int64_t x396 = -101618LL;
	static volatile int64_t t81 = -608673975577253LL;

    t81 = ((x393%x394)&(x395+x396));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x402 = INT8_MIN;
	uint16_t x403 = 61U;
	int16_t x404 = -26;
	static int32_t t82 = 28423260;

    t82 = ((x401%x402)&(x403+x404));

    if (t82 != 34) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int32_t x407 = -2486152;
	volatile int64_t x408 = -1LL;
	int64_t t83 = -80113044278LL;

    t83 = ((x405%x406)&(x407+x408));

    if (t83 != -2486153LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x409 = 127LLU;
	volatile uint16_t x410 = UINT16_MAX;
	volatile int32_t x411 = INT32_MAX;

    t84 = ((x409%x410)&(x411+x412));

    if (t84 != 58LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x417 = 3;
	static uint8_t x418 = UINT8_MAX;
	volatile int64_t x419 = INT64_MIN;
	static volatile uint64_t t85 = 965568287436561921LLU;

    t85 = ((x417%x418)&(x419+x420));

    if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	static int64_t x424 = -1814045572003688205LL;
	static volatile int64_t t86 = -85391819LL;

    t86 = ((x421%x422)&(x423+x424));

    if (t86 != -1814045572003688333LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	int64_t x427 = 4855LL;
	int64_t x428 = 183LL;
	static int64_t t87 = -4060229894227LL;

    t87 = ((x425%x426)&(x427+x428));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x429 = -1LL;
	static volatile uint16_t x431 = UINT16_MAX;
	volatile int32_t x432 = -1;
	volatile int64_t t88 = -6690318170LL;

    t88 = ((x429%x430)&(x431+x432));

    if (t88 != 65534LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = -1;
	volatile uint32_t x435 = UINT32_MAX;
	uint32_t x436 = UINT32_MAX;
	static volatile uint32_t t89 = 11179U;

    t89 = ((x433%x434)&(x435+x436));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x437 = INT8_MIN;
	static int64_t x438 = -1LL;
	static uint64_t x439 = 6981481696015964LLU;
	volatile uint64_t t90 = 5216721044008841805LLU;

    t90 = ((x437%x438)&(x439+x440));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x442 = UINT32_MAX;
	volatile int16_t x443 = -1;
	int32_t x444 = 125;
	static int64_t t91 = 11396953LL;

    t91 = ((x441%x442)&(x443+x444));

    if (t91 != 100LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x445 = -1;
	static volatile uint64_t x446 = 4046427253124LLU;
	uint32_t x447 = 10U;
	static volatile uint32_t x448 = UINT32_MAX;
	uint64_t t92 = 353534164697488706LLU;

    t92 = ((x445%x446)&(x447+x448));

    if (t92 != 9LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x453 = INT32_MIN;
	volatile uint16_t x454 = 20585U;
	int32_t x455 = -1;
	uint16_t x456 = UINT16_MAX;
	int32_t t93 = -467207;

    t93 = ((x453%x454)&(x455+x456));

    if (t93 != 50258) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x457 = 0;
	volatile uint8_t x458 = 3U;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t94 = 0;

    t94 = ((x457%x458)&(x459+x460));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x461 = 756958453453555378LLU;
	int32_t x462 = INT32_MAX;
	uint8_t x463 = 1U;
	uint8_t x464 = 12U;
	uint64_t t95 = 194189873LLU;

    t95 = ((x461%x462)&(x463+x464));

    if (t95 != 8LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x474 = -4196956253201LL;
	int64_t x475 = -4480006948147240160LL;
	uint16_t x476 = 1U;
	static volatile int64_t t96 = -1313593LL;

    t96 = ((x473%x474)&(x475+x476));

    if (t96 != -4480006948959289344LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x479 = INT16_MIN;

    t97 = ((x477%x478)&(x479+x480));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x483 = 2513LLU;
	static uint64_t x484 = 229LLU;
	static uint64_t t98 = 6003611669178165731LLU;

    t98 = ((x481%x482)&(x483+x484));

    if (t98 != 2212LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x485 = -266;
	int16_t x486 = -16266;
	static uint8_t x487 = 3U;
	int32_t t99 = 1;

    t99 = ((x485%x486)&(x487+x488));

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x489 = INT16_MAX;
	uint64_t x490 = 4LLU;
	static uint64_t x491 = 1573502LLU;
	volatile int8_t x492 = INT8_MAX;

    t100 = ((x489%x490)&(x491+x492));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x497 = 401871U;
	volatile uint64_t x498 = UINT64_MAX;
	volatile uint64_t t101 = 2LLU;

    t101 = ((x497%x498)&(x499+x500));

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x501 = 554U;
	volatile int64_t x502 = INT64_MIN;
	uint64_t x504 = UINT64_MAX;
	uint64_t t102 = 2937708374090LLU;

    t102 = ((x501%x502)&(x503+x504));

    if (t102 != 522LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x505 = -73742983;
	volatile int8_t x506 = -1;
	int32_t x507 = 13833002;
	int32_t x508 = -2;
	volatile int32_t t103 = 16230;

    t103 = ((x505%x506)&(x507+x508));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x509 = 90556324LL;
	int64_t x510 = INT64_MIN;
	uint32_t x511 = UINT32_MAX;
	volatile int64_t x512 = INT64_MIN;
	volatile int64_t t104 = -372910521138LL;

    t104 = ((x509%x510)&(x511+x512));

    if (t104 != 90556324LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t t105 = 73879LLU;

    t105 = ((x513%x514)&(x515+x516));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x517 = 35;
	int64_t x519 = 612LL;
	volatile int64_t t106 = -807958020913LL;

    t106 = ((x517%x518)&(x519+x520));

    if (t106 != 2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x521 = -39;
	int16_t x523 = 1;
	int16_t x524 = 10;
	int64_t t107 = 8940741566LL;

    t107 = ((x521%x522)&(x523+x524));

    if (t107 != 9LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x525 = 7U;
	static volatile uint8_t x527 = 3U;
	volatile int32_t t108 = -598418;

    t108 = ((x525%x526)&(x527+x528));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x530 = INT8_MIN;
	volatile int16_t x531 = INT16_MAX;
	int64_t x532 = -325823922692853565LL;
	volatile int64_t t109 = -4078996518345078LL;

    t109 = ((x529%x530)&(x531+x532));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x533 = INT16_MIN;
	int8_t x534 = 1;
	uint8_t x535 = 7U;
	uint8_t x536 = UINT8_MAX;

    t110 = ((x533%x534)&(x535+x536));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x545 = 588417047U;
	static uint16_t x546 = UINT16_MAX;
	static uint32_t x547 = UINT32_MAX;
	int32_t x548 = 2760580;
	volatile uint32_t t111 = 869393U;

    t111 = ((x545%x546)&(x547+x548));

    if (t111 != 2817U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x549 = 10U;
	static uint16_t x550 = 1273U;
	static uint32_t x551 = UINT32_MAX;
	static volatile int8_t x552 = 15;

    t112 = ((x549%x550)&(x551+x552));

    if (t112 != 10U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x553 = -8;
	int64_t x554 = -1LL;
	uint32_t x555 = 46926U;
	int8_t x556 = INT8_MIN;
	volatile int64_t t113 = 1005023LL;

    t113 = ((x553%x554)&(x555+x556));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x557 = UINT8_MAX;
	uint8_t x559 = UINT8_MAX;
	int8_t x560 = INT8_MAX;
	volatile int32_t t114 = -16908;

    t114 = ((x557%x558)&(x559+x560));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x561 = 15639;
	int64_t t115 = -2892375078028LL;

    t115 = ((x561%x562)&(x563+x564));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x565 = 13485937U;
	volatile uint8_t x566 = 48U;
	volatile int64_t x567 = INT64_MIN;
	static uint32_t x568 = 62101706U;
	volatile int64_t t116 = -19840474500769692LL;

    t116 = ((x565%x566)&(x567+x568));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x569 = 393058649LL;
	uint64_t x570 = 505190025454837LLU;
	int8_t x572 = -1;
	uint64_t t117 = 315891103519550370LLU;

    t117 = ((x569%x570)&(x571+x572));

    if (t117 != 393025881LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x573 = -1;
	volatile int64_t x574 = -1LL;
	uint16_t x576 = 1383U;
	volatile int64_t t118 = 0LL;

    t118 = ((x573%x574)&(x575+x576));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x577 = INT16_MIN;
	static uint16_t x578 = 707U;
	uint16_t x579 = 67U;
	uint16_t x580 = 7U;
	volatile int32_t t119 = 1879181;

    t119 = ((x577%x578)&(x579+x580));

    if (t119 != 10) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x581 = -7;
	int64_t x583 = 1225084538345LL;

    t120 = ((x581%x582)&(x583+x584));

    if (t120 != 1222937054697LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x585 = UINT64_MAX;
	int64_t x586 = INT64_MIN;
	uint8_t x587 = 0U;
	static uint64_t t121 = 52402380602191087LLU;

    t121 = ((x585%x586)&(x587+x588));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x589 = -1;
	int16_t x590 = INT16_MAX;
	int8_t x591 = 30;
	int32_t x592 = -1;
	volatile int32_t t122 = -23852558;

    t122 = ((x589%x590)&(x591+x592));

    if (t122 != 29) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x594 = UINT64_MAX;
	int16_t x595 = -1;
	uint64_t x596 = UINT64_MAX;
	uint64_t t123 = 2649555951473707806LLU;

    t123 = ((x593%x594)&(x595+x596));

    if (t123 != 4294967294LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x598 = UINT64_MAX;
	static volatile uint8_t x599 = 6U;
	int32_t x600 = -1;
	uint64_t t124 = 85LLU;

    t124 = ((x597%x598)&(x599+x600));

    if (t124 != 5LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x601 = -1;
	int32_t x603 = INT32_MAX;
	uint8_t x604 = 0U;
	uint32_t t125 = 0U;

    t125 = ((x601%x602)&(x603+x604));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x606 = 195;
	static int8_t x607 = -1;
	static volatile int8_t x608 = 1;
	volatile int32_t t126 = -764790996;

    t126 = ((x605%x606)&(x607+x608));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x609 = -29;
	int64_t x610 = 42135886547234LL;
	uint64_t x611 = 341207LLU;
	volatile int64_t x612 = -1LL;
	uint64_t t127 = 45092LLU;

    t127 = ((x609%x610)&(x611+x612));

    if (t127 != 341186LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x613 = 23698U;
	int32_t x614 = -1;
	int16_t x615 = INT16_MIN;
	static uint8_t x616 = UINT8_MAX;
	volatile int32_t t128 = 20508;

    t128 = ((x613%x614)&(x615+x616));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x617 = 3528;
	static uint32_t x619 = 965U;
	volatile uint16_t x620 = 3373U;
	volatile uint32_t t129 = 116872883U;

    t129 = ((x617%x618)&(x619+x620));

    if (t129 != 192U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x621 = -1LL;
	int16_t x622 = -5699;
	int64_t x623 = -1LL;
	int64_t t130 = -2033877100LL;

    t130 = ((x621%x622)&(x623+x624));

    if (t130 != -2147483649LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x625 = INT16_MIN;
	int64_t x626 = INT64_MIN;
	volatile int16_t x627 = -1;
	int64_t t131 = 3263577074934543LL;

    t131 = ((x625%x626)&(x627+x628));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x629 = 1328247;
	volatile uint64_t t132 = 312348LLU;

    t132 = ((x629%x630)&(x631+x632));

    if (t132 != 1327168LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x633 = INT32_MAX;
	static int16_t x634 = -1;
	volatile int8_t x635 = 0;
	static int16_t x636 = INT16_MAX;
	static volatile int32_t t133 = -7;

    t133 = ((x633%x634)&(x635+x636));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x637 = INT16_MAX;
	int8_t x638 = INT8_MAX;
	static int8_t x639 = INT8_MAX;
	static volatile int16_t x640 = 0;
	volatile int32_t t134 = 363485;

    t134 = ((x637%x638)&(x639+x640));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x643 = UINT16_MAX;
	uint64_t x644 = 53LLU;

    t135 = ((x641%x642)&(x643+x644));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = 15;
	uint16_t x647 = 422U;
	volatile uint16_t x648 = 25893U;
	volatile int64_t t136 = 6579875492945LL;

    t136 = ((x645%x646)&(x647+x648));

    if (t136 != 26312LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x649 = 199457;
	int16_t x650 = -1955;
	volatile uint32_t x651 = 778527U;
	int8_t x652 = -1;
	volatile uint32_t t137 = 3050129U;

    t137 = ((x649%x650)&(x651+x652));

    if (t137 != 14U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x661 = UINT16_MAX;
	int16_t x662 = 6667;
	static int64_t x663 = -90161935LL;
	int64_t x664 = 40LL;

    t138 = ((x661%x662)&(x663+x664));

    if (t138 != 5400LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x666 = -31926;
	int32_t x667 = INT32_MAX;
	int64_t x668 = -7791994748500239LL;
	int64_t t139 = 41729LL;

    t139 = ((x665%x666)&(x667+x668));

    if (t139 != 407372480LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x674 = 89U;
	uint16_t x675 = 13U;
	static volatile int16_t x676 = INT16_MAX;
	static int64_t t140 = 15539227LL;

    t140 = ((x673%x674)&(x675+x676));

    if (t140 != 32772LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x677 = UINT32_MAX;
	int32_t x678 = INT32_MIN;
	static volatile int16_t x680 = INT16_MAX;
	static uint32_t t141 = 1662294U;

    t141 = ((x677%x678)&(x679+x680));

    if (t141 != 4104528U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x681 = -6;
	static volatile uint8_t x682 = UINT8_MAX;
	int64_t x683 = -1LL;
	int8_t x684 = INT8_MIN;
	int64_t t142 = -98065148LL;

    t142 = ((x681%x682)&(x683+x684));

    if (t142 != -134LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x686 = 13563U;
	uint32_t x687 = 3U;
	uint8_t x688 = 0U;
	static volatile uint32_t t143 = 18684U;

    t143 = ((x685%x686)&(x687+x688));

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x690 = -1LL;
	int16_t x691 = INT16_MIN;
	static int8_t x692 = INT8_MIN;
	int64_t t144 = 34LL;

    t144 = ((x689%x690)&(x691+x692));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x693 = 30889;
	uint64_t x694 = UINT64_MAX;
	volatile int16_t x696 = INT16_MIN;
	volatile uint64_t t145 = 33920877LLU;

    t145 = ((x693%x694)&(x695+x696));

    if (t145 != 8LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x704 = 346082778;

    t146 = ((x701%x702)&(x703+x704));

    if (t146 != 346082776LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x705 = INT32_MAX;
	static uint64_t x706 = UINT64_MAX;
	static uint32_t x707 = UINT32_MAX;
	volatile uint64_t t147 = 76131313236LLU;

    t147 = ((x705%x706)&(x707+x708));

    if (t147 != 2147483646LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x709 = 218756271192514LLU;
	static int8_t x710 = -1;
	int8_t x711 = -1;
	static volatile int8_t x712 = INT8_MIN;
	static uint64_t t148 = 453386LLU;

    t148 = ((x709%x710)&(x711+x712));

    if (t148 != 218756271192386LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x713 = -49;
	uint32_t x714 = 21U;
	uint64_t t149 = 113615408929080LLU;

    t149 = ((x713%x714)&(x715+x716));

    if (t149 != 16LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x717 = 19339U;
	int8_t x718 = INT8_MIN;
	static int16_t x719 = -1;
	volatile int8_t x720 = 0;
	static int32_t t150 = -22;

    t150 = ((x717%x718)&(x719+x720));

    if (t150 != 11) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x721 = 181U;
	static uint16_t x722 = UINT16_MAX;
	int8_t x723 = 2;
	uint64_t t151 = 29LLU;

    t151 = ((x721%x722)&(x723+x724));

    if (t151 != 49LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x725 = INT8_MIN;
	int8_t x727 = INT8_MIN;
	static uint64_t x728 = 798LLU;
	static uint64_t t152 = 746417311873826LLU;

    t152 = ((x725%x726)&(x727+x728));

    if (t152 != 640LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x729 = -36817403;
	int16_t x731 = -1;
	int16_t x732 = 1822;
	int32_t t153 = 0;

    t153 = ((x729%x730)&(x731+x732));

    if (t153 != 1817) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x733 = INT16_MIN;
	int16_t x734 = -14682;
	uint8_t x735 = UINT8_MAX;
	int8_t x736 = INT8_MAX;

    t154 = ((x733%x734)&(x735+x736));

    if (t154 != 52) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x742 = UINT64_MAX;
	int16_t x743 = INT16_MIN;
	int32_t x744 = -1;
	uint64_t t155 = 1028557345696LLU;

    t155 = ((x741%x742)&(x743+x744));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x746 = -52702046;
	uint32_t x748 = 383681624U;
	int64_t t156 = -15046815747LL;

    t156 = ((x745%x746)&(x747+x748));

    if (t156 != 1112LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x750 = -1LL;
	int32_t x751 = -1;
	int16_t x752 = INT16_MAX;
	volatile int64_t t157 = -195436089006LL;

    t157 = ((x749%x750)&(x751+x752));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x753 = 7414045;
	uint32_t x755 = UINT32_MAX;
	volatile uint32_t t158 = 23479360U;

    t158 = ((x753%x754)&(x755+x756));

    if (t158 != 12U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x761 = 302156007525234333LLU;
	static int32_t x762 = -8119;
	int64_t x764 = INT64_MIN;
	uint64_t t159 = 5LLU;

    t159 = ((x761%x762)&(x763+x764));

    if (t159 != 9342829826580629LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x769 = 2530LLU;
	volatile int32_t x770 = INT32_MAX;
	int32_t x771 = 1;
	uint16_t x772 = 9531U;
	uint64_t t160 = 1896325284760LLU;

    t160 = ((x769%x770)&(x771+x772));

    if (t160 != 288LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x773 = INT32_MIN;
	int8_t x774 = INT8_MAX;
	static uint64_t x775 = UINT64_MAX;
	static int32_t x776 = INT32_MIN;
	volatile uint64_t t161 = 2827341325LLU;

    t161 = ((x773%x774)&(x775+x776));

    if (t161 != 18446744071562067960LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x777 = -1;
	int32_t x778 = 30;
	static uint64_t x779 = 497473799011735LLU;
	static uint32_t x780 = 1U;
	static uint64_t t162 = 254LLU;

    t162 = ((x777%x778)&(x779+x780));

    if (t162 != 497473799011736LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x781 = 7;
	uint16_t x782 = UINT16_MAX;
	uint64_t x783 = 47159067591528183LLU;

    t163 = ((x781%x782)&(x783+x784));

    if (t163 != 6LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x785 = 245441LL;
	static int8_t x787 = INT8_MAX;
	int64_t x788 = -1LL;
	int64_t t164 = -3291529248951944364LL;

    t164 = ((x785%x786)&(x787+x788));

    if (t164 != 68LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x789 = 5431U;
	volatile int64_t x790 = INT64_MAX;
	int8_t x791 = INT8_MAX;
	uint16_t x792 = 0U;
	volatile int64_t t165 = 696722233LL;

    t165 = ((x789%x790)&(x791+x792));

    if (t165 != 55LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x793 = INT16_MAX;
	uint8_t x794 = UINT8_MAX;
	static uint64_t x795 = 282614LLU;
	int32_t x796 = INT32_MIN;
	static uint64_t t166 = 122431211468LLU;

    t166 = ((x793%x794)&(x795+x796));

    if (t166 != 118LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x797 = 382LLU;
	int32_t x798 = INT32_MIN;
	int64_t x799 = -1LL;
	uint16_t x800 = 467U;
	volatile uint64_t t167 = 11615670LLU;

    t167 = ((x797%x798)&(x799+x800));

    if (t167 != 338LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x801 = UINT16_MAX;
	volatile int32_t x802 = INT32_MIN;
	volatile int64_t x804 = -1LL;

    t168 = ((x801%x802)&(x803+x804));

    if (t168 != 254LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x805 = 18509U;
	int16_t x806 = -1;
	int16_t x807 = -137;
	volatile int8_t x808 = INT8_MAX;
	volatile int32_t t169 = -1021982;

    t169 = ((x805%x806)&(x807+x808));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x809 = -1;
	int32_t x810 = -1;
	uint8_t x811 = 81U;
	volatile int32_t t170 = -2;

    t170 = ((x809%x810)&(x811+x812));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x813 = INT64_MIN;
	static volatile int8_t x815 = INT8_MAX;
	static int32_t x816 = -1;

    t171 = ((x813%x814)&(x815+x816));

    if (t171 != 126LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x818 = UINT64_MAX;
	uint32_t x819 = 1830459690U;
	volatile uint64_t t172 = 373LLU;

    t172 = ((x817%x818)&(x819+x820));

    if (t172 != 6441LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x821 = 994;
	int8_t x822 = INT8_MAX;
	int8_t x824 = -1;
	int32_t t173 = 141;

    t173 = ((x821%x822)&(x823+x824));

    if (t173 != 8) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x825 = 315960264U;
	int8_t x826 = 1;
	static int64_t x827 = INT64_MAX;
	int64_t t174 = 453214440777134LL;

    t174 = ((x825%x826)&(x827+x828));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x830 = UINT32_MAX;
	volatile int64_t x832 = -1LL;
	static uint64_t t175 = 1891LLU;

    t175 = ((x829%x830)&(x831+x832));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x833 = -1;
	int32_t x834 = -1;
	volatile int32_t x836 = -167356;
	static volatile int32_t t176 = 64120;

    t176 = ((x833%x834)&(x835+x836));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x837 = 2U;
	static int32_t x838 = INT32_MIN;
	int8_t x839 = INT8_MAX;
	volatile int32_t t177 = -83;

    t177 = ((x837%x838)&(x839+x840));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x841 = -19;
	static uint32_t x843 = UINT32_MAX;
	static volatile int8_t x844 = INT8_MIN;

    t178 = ((x841%x842)&(x843+x844));

    if (t178 != 4294967149U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x845 = INT64_MIN;
	static uint16_t x846 = 8U;
	int8_t x847 = 11;
	volatile int64_t t179 = 32527531995LL;

    t179 = ((x845%x846)&(x847+x848));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x849 = UINT32_MAX;
	uint8_t x850 = 1U;
	uint32_t x851 = 621U;
	static uint32_t t180 = 363164423U;

    t180 = ((x849%x850)&(x851+x852));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x853 = INT8_MIN;
	volatile int16_t x854 = -1;
	uint64_t x855 = UINT64_MAX;
	int16_t x856 = -1124;
	uint64_t t181 = 145LLU;

    t181 = ((x853%x854)&(x855+x856));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x857 = INT32_MAX;
	int16_t x859 = -1;
	uint8_t x860 = 0U;
	int32_t t182 = 13;

    t182 = ((x857%x858)&(x859+x860));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x861 = 1022LLU;
	int8_t x863 = 1;
	int64_t x864 = -1LL;

    t183 = ((x861%x862)&(x863+x864));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x865 = 2;
	int32_t x866 = INT32_MIN;
	volatile uint64_t x867 = 1026402LLU;
	volatile uint64_t t184 = 996478195532997100LLU;

    t184 = ((x865%x866)&(x867+x868));

    if (t184 != 2LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x869 = INT64_MIN;
	int64_t x870 = INT64_MIN;
	int64_t x871 = 192531765LL;
	static volatile int64_t t185 = -23687443882888650LL;

    t185 = ((x869%x870)&(x871+x872));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x873 = -30;
	volatile int16_t x874 = INT16_MIN;
	int64_t x875 = -1413241441908892237LL;
	uint32_t x876 = UINT32_MAX;
	static int64_t t186 = 5112715273184LL;

    t186 = ((x873%x874)&(x875+x876));

    if (t186 != -1413241437613924958LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x877 = INT16_MIN;
	static int16_t x878 = -3913;
	int64_t x879 = -445143180837437LL;
	volatile int64_t t187 = -1LL;

    t187 = ((x877%x878)&(x879+x880));

    if (t187 != -445143180806080LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x881 = -15680730231561LL;
	uint16_t x882 = 30482U;
	static volatile int8_t x883 = INT8_MAX;
	int16_t x884 = INT16_MIN;
	int64_t t188 = 448528LL;

    t188 = ((x881%x882)&(x883+x884));

    if (t188 != -32661LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x885 = INT8_MIN;
	static int32_t x886 = -1;
	int64_t x887 = INT64_MIN;
	volatile int64_t t189 = -489465070445LL;

    t189 = ((x885%x886)&(x887+x888));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x890 = -1LL;
	uint32_t x891 = 2144U;
	uint64_t x892 = 32538762LLU;
	static volatile uint64_t t190 = 40740714120211288LLU;

    t190 = ((x889%x890)&(x891+x892));

    if (t190 != 1048640LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x893 = 1662U;
	static uint16_t x894 = 16212U;
	int8_t x895 = 2;
	static uint64_t x896 = 124455156LLU;
	uint64_t t191 = 5402744LLU;

    t191 = ((x893%x894)&(x895+x896));

    if (t191 != 118LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x897 = 47U;
	volatile int16_t x899 = -6856;
	int8_t x900 = INT8_MAX;
	static uint64_t t192 = 410111898976306LLU;

    t192 = ((x897%x898)&(x899+x900));

    if (t192 != 39LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x901 = -1;
	int8_t x902 = 26;
	uint32_t x903 = 349972U;
	static int32_t x904 = INT32_MIN;
	static volatile uint32_t t193 = 4039U;

    t193 = ((x901%x902)&(x903+x904));

    if (t193 != 2147833620U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x905 = INT64_MIN;
	uint64_t x906 = 82515LLU;
	uint64_t x907 = 4020809469434689178LLU;

    t194 = ((x905%x906)&(x907+x908));

    if (t194 != 5146LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x909 = 946;
	int8_t x911 = -1;
	volatile int8_t x912 = 0;

    t195 = ((x909%x910)&(x911+x912));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x913 = INT16_MAX;
	uint8_t x915 = 97U;
	int8_t x916 = INT8_MAX;
	static int32_t t196 = 0;

    t196 = ((x913%x914)&(x915+x916));

    if (t196 != 96) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x917 = 26U;
	uint64_t x918 = 8685169577013003LLU;
	static uint8_t x919 = UINT8_MAX;
	int64_t x920 = -1LL;
	volatile uint64_t t197 = 268LLU;

    t197 = ((x917%x918)&(x919+x920));

    if (t197 != 26LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x921 = UINT64_MAX;
	int64_t x922 = -49308197706LL;
	static int32_t x923 = -484896090;
	volatile uint8_t x924 = 1U;
	volatile uint64_t t198 = 1391301471248945768LLU;

    t198 = ((x921%x922)&(x923+x924));

    if (t198 != 48890446337LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x926 = 122983621U;
	uint64_t x928 = UINT64_MAX;
	uint64_t t199 = 913327448LLU;

    t199 = ((x925%x926)&(x927+x928));

    if (t199 != 3LLU) { NG(); } else { ; }
	
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

