
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

int64_t x1 = INT64_MIN;
uint8_t x11 = 32U;
int8_t x16 = -1;
static volatile int8_t x20 = INT8_MIN;
volatile int64_t x21 = -1LL;
int8_t x23 = INT8_MAX;
static int8_t x25 = INT8_MAX;
int8_t x27 = -1;
int32_t x29 = INT32_MIN;
static int8_t x36 = INT8_MAX;
volatile int64_t t10 = -137117609604LL;
int16_t x45 = INT16_MIN;
static int64_t x47 = INT64_MIN;
static int8_t x50 = INT8_MIN;
int32_t x52 = INT32_MIN;
int32_t x61 = INT32_MAX;
volatile int32_t x66 = -141935117;
int64_t x68 = -1LL;
int8_t x69 = INT8_MAX;
int16_t x71 = 1;
uint16_t x72 = 5754U;
static int64_t x73 = INT64_MAX;
volatile int64_t x75 = -1LL;
volatile uint16_t x81 = 635U;
int32_t x82 = INT32_MAX;
uint8_t x86 = UINT8_MAX;
int16_t x87 = INT16_MAX;
uint32_t x97 = UINT32_MAX;
volatile uint64_t t25 = 15538715839LLU;
int64_t x110 = -1LL;
volatile int16_t x118 = 10;
int32_t x131 = INT32_MIN;
static int64_t t32 = 12754767129LL;
int32_t x141 = INT32_MAX;
static volatile int64_t x143 = 3352006911646LL;
uint64_t x167 = 206926414LLU;
int16_t x170 = INT16_MIN;
static volatile uint32_t x171 = 94571U;
int32_t x173 = -1;
volatile int8_t x179 = 2;
uint8_t x181 = 10U;
int64_t x182 = INT64_MIN;
static volatile int8_t x188 = -1;
volatile int32_t x190 = -24093;
uint8_t x205 = 7U;
int64_t x208 = INT64_MAX;
int16_t x219 = -2;
int32_t x228 = INT32_MIN;
int32_t x230 = INT32_MIN;
static uint16_t x233 = UINT16_MAX;
uint32_t x245 = UINT32_MAX;
static volatile uint32_t x246 = 128598841U;
uint8_t x253 = 21U;
int16_t x258 = INT16_MAX;
volatile int64_t t59 = -1027764974003792LL;
int32_t x262 = 248097984;
int32_t t61 = 313783177;
volatile uint64_t t62 = 504981080478843LLU;
int64_t x274 = 48840411536191LL;
static int32_t x278 = INT32_MIN;
volatile uint8_t x279 = 14U;
int16_t x285 = 1;
int16_t x291 = INT16_MIN;
int8_t x293 = INT8_MAX;
static int64_t x298 = -64871603697LL;
int16_t x301 = INT16_MAX;
volatile int32_t x302 = INT32_MIN;
volatile uint8_t x305 = 40U;
uint32_t x308 = UINT32_MAX;
volatile uint32_t t71 = 72228U;
uint16_t x314 = UINT16_MAX;
static int64_t x328 = INT64_MIN;
int64_t t75 = -32LL;
uint64_t x331 = UINT64_MAX;
uint8_t x332 = 11U;
uint32_t x344 = 2724U;
volatile int16_t x349 = 1;
uint64_t x351 = UINT64_MAX;
int16_t x352 = INT16_MIN;
uint32_t x354 = UINT32_MAX;
static int32_t x357 = 0;
int32_t x360 = INT32_MIN;
volatile int32_t t81 = -43880;
int64_t t82 = 25LL;
uint32_t x368 = 733277112U;
volatile uint64_t t84 = 363748707LLU;
int16_t x377 = INT16_MAX;
static uint16_t x379 = 1013U;
int16_t x380 = INT16_MAX;
int32_t t86 = -20499761;
volatile int16_t x385 = INT16_MIN;
int8_t x387 = 5;
int16_t x391 = -1;
uint64_t t91 = 55019119LLU;
volatile uint64_t x401 = UINT64_MAX;
int64_t x407 = INT64_MAX;
static int16_t x410 = INT16_MIN;
int32_t t96 = 10657202;
static volatile int16_t x421 = INT16_MAX;
volatile int16_t x423 = INT16_MAX;
int64_t t97 = 105129288882LL;
static uint32_t x429 = 117001024U;
static volatile int8_t x430 = -2;
int64_t t99 = -1921LL;
int32_t x433 = INT32_MIN;
int8_t x441 = INT8_MIN;
int32_t x442 = 4196;
int16_t x446 = 29;
int8_t x457 = INT8_MAX;
int64_t x458 = -142901381304LL;
static int32_t x470 = -222;
static volatile uint64_t t108 = 5946421LLU;
int16_t x473 = INT16_MAX;
uint64_t x476 = 712091032LLU;
static int16_t x480 = -14;
int16_t x483 = INT16_MIN;
int16_t x484 = -1;
uint8_t x485 = UINT8_MAX;
int8_t x488 = -1;
static int32_t x497 = INT32_MIN;
static volatile int64_t t115 = 2745230803705357LL;
static int32_t x503 = INT32_MIN;
uint8_t x507 = 9U;
int64_t x515 = INT64_MIN;
uint32_t x520 = UINT32_MAX;
int64_t x521 = INT64_MIN;
volatile int32_t x522 = INT32_MIN;
uint32_t x523 = 3U;
int32_t x524 = INT32_MAX;
int32_t t122 = -474912435;
int32_t x537 = 7312119;
uint16_t x540 = UINT16_MAX;
int16_t x543 = -1;
uint32_t x554 = 2U;
uint64_t x557 = 1053544491687523223LLU;
int16_t x561 = -4633;
uint8_t x564 = 6U;
int64_t x578 = -1LL;
int8_t x586 = -1;
uint16_t x587 = 2U;
int8_t x588 = 53;
int16_t x593 = INT16_MIN;
int64_t x595 = 2732LL;
int16_t x601 = INT16_MIN;
volatile uint32_t t141 = 2552U;
int64_t x617 = -1LL;
int32_t x619 = INT32_MAX;
int16_t x620 = INT16_MAX;
uint8_t x623 = UINT8_MAX;
int16_t x627 = INT16_MAX;
volatile int8_t x628 = INT8_MIN;
uint8_t x639 = 27U;
volatile int64_t t148 = -73893087405906LL;
int8_t x645 = -1;
static int32_t x646 = INT32_MAX;
volatile uint64_t t150 = UINT64_MAX;
int16_t x649 = -2;
int64_t x651 = INT64_MIN;
volatile int64_t x656 = INT64_MIN;
volatile uint32_t x661 = 62U;
uint64_t x663 = 1023100LLU;
int16_t x664 = INT16_MIN;
volatile uint64_t t154 = 9866LLU;
static int16_t x666 = INT16_MIN;
int32_t x667 = INT32_MIN;
volatile int16_t x668 = INT16_MIN;
volatile uint64_t t158 = 19808988421LLU;
volatile int64_t t159 = 894607295LL;
int8_t x689 = -2;
int16_t x690 = INT16_MAX;
int16_t x696 = INT16_MIN;
volatile int64_t t161 = 1548913181711018178LL;
uint64_t x697 = 29LLU;
uint64_t x700 = 8517288872589LLU;
static uint64_t t162 = 4152995818628LLU;
static volatile uint8_t x705 = 22U;
volatile uint32_t x716 = UINT32_MAX;
uint32_t x723 = 11031212U;
uint64_t t169 = 10LLU;
int16_t x733 = INT16_MIN;
static int64_t t171 = 10740751580364LL;
int8_t x737 = INT8_MIN;
int64_t t172 = 5LL;
static int32_t x744 = -3426074;
static int32_t t173 = -1200;
int64_t x750 = -1LL;
int64_t t175 = -108891065918619LL;
volatile int8_t x753 = -1;
static uint8_t x756 = 14U;
int8_t x761 = -1;
int16_t x763 = INT16_MIN;
int32_t t181 = -347705;
int16_t x784 = -1;
volatile uint64_t x787 = 2105770015472LLU;
static volatile uint64_t t183 = 254347491800LLU;
volatile int32_t x792 = -1;
volatile uint64_t t185 = 1270LLU;
int64_t x799 = 31950LL;
int8_t x806 = INT8_MAX;
uint64_t x807 = 1LLU;
static int16_t x808 = 86;
volatile int64_t t188 = 56990542862052LL;
static int8_t x813 = -24;
volatile int8_t x814 = INT8_MIN;
int8_t x826 = INT8_MIN;
volatile uint8_t x835 = 0U;
int16_t x836 = INT16_MIN;
static uint64_t x840 = 178559718010940948LLU;
uint32_t x842 = UINT32_MAX;
uint16_t x844 = 9631U;
static uint32_t x852 = 52803174U;
volatile uint8_t x857 = 117U;


void f0(void) {
    	int64_t x2 = -1LL;
	volatile uint64_t x3 = 82416936411772LLU;
	int32_t x4 = -834;
	volatile uint64_t t0 = 67940444580650764LLU;

    t0 = ((x1%x2)+(x3%x4));

    if (t0 != 82416936411772LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = 253820LLU;
	volatile int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile int64_t x8 = 17444733666255855LL;
	static uint64_t t1 = 234435372LLU;

    t1 = ((x5%x6)+(x7%x8));

    if (t1 != 7660588477366700LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	static uint16_t x10 = 393U;
	static uint32_t x12 = 220U;
	uint32_t t2 = 497U;

    t2 = ((x9%x10)+(x11%x12));

    if (t2 != 410U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	uint32_t x14 = UINT32_MAX;
	static volatile int16_t x15 = INT16_MAX;
	static volatile uint32_t t3 = 1045078581U;

    t3 = ((x13%x14)+(x15%x16));

    if (t3 != 255U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 250LL;
	int32_t x18 = -1;
	volatile uint16_t x19 = 2U;
	volatile int64_t t4 = -50626836306LL;

    t4 = ((x17%x18)+(x19%x20));

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = UINT32_MAX;
	int64_t x24 = -239557886316881808LL;
	int64_t t5 = 63986984197643446LL;

    t5 = ((x21%x22)+(x23%x24));

    if (t5 != 126LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = -50;
	int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = 25132006;

    t6 = ((x25%x26)+(x27%x28));

    if (t6 != 26) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = 487259390086433565LLU;
	static uint64_t x31 = 491362842842LLU;
	uint32_t x32 = 58190U;
	volatile uint64_t t7 = 7741LLU;

    t7 = ((x29%x30)+(x31%x32));

    if (t7 != 418146638364049815LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	uint64_t x34 = 1954034820697914558LLU;
	int64_t x35 = -28911984066LL;
	volatile uint64_t t8 = 975643298229740251LLU;

    t8 = ((x33%x34)+(x35%x36));

    if (t8 != 1407232754063117468LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 8203623357197961668LLU;
	int8_t x38 = 1;
	int64_t x39 = INT64_MAX;
	volatile int32_t x40 = INT32_MAX;
	uint64_t t9 = 16589LLU;

    t9 = ((x37%x38)+(x39%x40));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MAX;
	static uint32_t x44 = UINT32_MAX;

    t10 = ((x41%x42)+(x43%x44));

    if (t10 != 2147483519LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = 146U;
	int64_t x48 = INT64_MAX;
	int64_t t11 = -6604491433513LL;

    t11 = ((x45%x46)+(x47%x48));

    if (t11 != 113LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	uint16_t x51 = UINT16_MAX;
	int32_t t12 = -711667746;

    t12 = ((x49%x50)+(x51%x52));

    if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 10406U;
	uint16_t x54 = UINT16_MAX;
	static int32_t x55 = -1;
	static uint8_t x56 = UINT8_MAX;
	int32_t t13 = 1204;

    t13 = ((x53%x54)+(x55%x56));

    if (t13 != 10405) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = 11;
	int16_t x63 = INT16_MIN;
	volatile uint8_t x64 = UINT8_MAX;
	int32_t t14 = 131989055;

    t14 = ((x61%x62)+(x63%x64));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = -1;
	int64_t x67 = -433465682LL;
	static int64_t t15 = -790418170LL;

    t15 = ((x65%x66)+(x67%x68));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x70 = 467;
	volatile int32_t t16 = 4442823;

    t16 = ((x69%x70)+(x71%x72));

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = 62U;
	static int64_t x76 = -1LL;
	volatile int64_t t17 = -187LL;

    t17 = ((x73%x74)+(x75%x76));

    if (t17 != 7LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = UINT16_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile uint32_t t18 = 49U;

    t18 = ((x77%x78)+(x79%x80));

    if (t18 != 65535U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MAX;
	static volatile int32_t t19 = -485898287;

    t19 = ((x81%x82)+(x83%x84));

    if (t19 != 634) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = INT16_MIN;
	int64_t x88 = INT64_MIN;
	volatile int64_t t20 = -86185132700LL;

    t20 = ((x85%x86)+(x87%x88));

    if (t20 != 32639LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	int64_t x91 = -1LL;
	uint16_t x92 = 1U;
	volatile int64_t t21 = 93076321LL;

    t21 = ((x89%x90)+(x91%x92));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 6U;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = -288747LL;
	static int8_t x96 = INT8_MIN;
	int64_t t22 = 2008LL;

    t22 = ((x93%x94)+(x95%x96));

    if (t22 != -101LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x98 = UINT64_MAX;
	static volatile int8_t x99 = -1;
	int64_t x100 = 8445020547LL;
	static volatile uint64_t t23 = 1340LLU;

    t23 = ((x97%x98)+(x99%x100));

    if (t23 != 4294967294LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 120U;
	uint64_t x104 = UINT64_MAX;
	uint64_t t24 = 133975488LLU;

    t24 = ((x101%x102)+(x103%x104));

    if (t24 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 894U;
	static int32_t x106 = 9;
	uint64_t x107 = 6249882650615618017LLU;
	int64_t x108 = -3LL;

    t25 = ((x105%x106)+(x107%x108));

    if (t25 != 6249882650615618020LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = -1;
	int8_t x111 = INT8_MAX;
	uint16_t x112 = UINT16_MAX;
	int64_t t26 = 97LL;

    t26 = ((x109%x110)+(x111%x112));

    if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	static int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = -1;
	static int32_t t27 = 9323676;

    t27 = ((x113%x114)+(x115%x116));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	static int32_t t28 = 125936;

    t28 = ((x117%x118)+(x119%x120));

    if (t28 != -9) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	uint32_t x122 = UINT32_MAX;
	static int16_t x123 = -1;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t29 = 19316266LLU;

    t29 = ((x121%x122)+(x123%x124));

    if (t29 != 4294967168LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x125 = INT32_MAX;
	static int16_t x126 = INT16_MIN;
	volatile int8_t x127 = -1;
	int8_t x128 = 33;
	static int32_t t30 = 0;

    t30 = ((x125%x126)+(x127%x128));

    if (t30 != 32766) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t31 = -4;

    t31 = ((x129%x130)+(x131%x132));

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = INT64_MIN;
	volatile int32_t x135 = INT32_MIN;
	static uint8_t x136 = UINT8_MAX;

    t32 = ((x133%x134)+(x135%x136));

    if (t32 != -256LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x142 = INT16_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t33 = 1050715870827791LL;

    t33 = ((x141%x142)+(x143%x144));

    if (t33 != 32948LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = 113U;
	static int8_t x146 = INT8_MIN;
	uint8_t x147 = 15U;
	int32_t x148 = INT32_MIN;
	volatile uint32_t t34 = 1U;

    t34 = ((x145%x146)+(x147%x148));

    if (t34 != 128U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MAX;
	volatile uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 1556U;
	volatile int16_t x152 = 14;
	static int32_t t35 = 37091212;

    t35 = ((x149%x150)+(x151%x152));

    if (t35 != 129) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x161 = -1;
	volatile uint32_t x162 = 191225324U;
	uint32_t x163 = 163021492U;
	int32_t x164 = -29622;
	static volatile uint32_t t36 = 12873660U;

    t36 = ((x161%x162)+(x163%x164));

    if (t36 != 251031659U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x165 = 861LLU;
	int16_t x166 = -1;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t37 = 1160LLU;

    t37 = ((x165%x166)+(x167%x168));

    if (t37 != 206927275LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x169 = INT64_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile int64_t t38 = -86767987373LL;

    t38 = ((x169%x170)+(x171%x172));

    if (t38 != 61803LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x174 = 7492118U;
	volatile int8_t x175 = 4;
	static int16_t x176 = INT16_MIN;
	uint32_t t39 = 79U;

    t39 = ((x173%x174)+(x175%x176));

    if (t39 != 1983685U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = INT16_MIN;
	static int16_t x178 = -1;
	int8_t x180 = 1;
	volatile int32_t t40 = -28334413;

    t40 = ((x177%x178)+(x179%x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x183 = -692;
	int32_t x184 = 646;
	static int64_t t41 = 16430545472LL;

    t41 = ((x181%x182)+(x183%x184));

    if (t41 != -36LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x185 = 3;
	static volatile int8_t x186 = -1;
	int64_t x187 = INT64_MAX;
	static int64_t t42 = 18741913552LL;

    t42 = ((x185%x186)+(x187%x188));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x189 = INT64_MAX;
	volatile uint32_t x191 = 430309U;
	volatile uint16_t x192 = UINT16_MAX;
	volatile int64_t t43 = -858158LL;

    t43 = ((x189%x190)+(x191%x192));

    if (t43 != 40697LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = UINT8_MAX;
	int8_t x198 = -1;
	volatile int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	int64_t t44 = 2177345550274794421LL;

    t44 = ((x197%x198)+(x199%x200));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = INT64_MAX;
	static uint8_t x202 = 2U;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t x204 = -110;
	int64_t t45 = 746721562LL;

    t45 = ((x201%x202)+(x203%x204));

    if (t45 != 86LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x206 = 3512U;
	uint64_t x207 = 772538737097253291LLU;
	static uint64_t t46 = 45541LLU;

    t46 = ((x205%x206)+(x207%x208));

    if (t46 != 772538737097253298LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x209 = INT64_MIN;
	static int16_t x210 = INT16_MIN;
	static volatile uint16_t x211 = UINT16_MAX;
	static int8_t x212 = -1;
	volatile int64_t t47 = -30929415304379LL;

    t47 = ((x209%x210)+(x211%x212));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x213 = 3U;
	int16_t x214 = INT16_MIN;
	static int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MAX;
	volatile int32_t t48 = 62;

    t48 = ((x213%x214)+(x215%x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MAX;
	volatile uint8_t x218 = 88U;
	int64_t x220 = -1LL;
	volatile int64_t t49 = -24505216411781857LL;

    t49 = ((x217%x218)+(x219%x220));

    if (t49 != 31LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x221 = UINT32_MAX;
	int16_t x222 = -1;
	int32_t x223 = -1;
	int8_t x224 = 60;
	uint32_t t50 = UINT32_MAX;

    t50 = ((x221%x222)+(x223%x224));

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x225 = 32U;
	int32_t x226 = INT32_MAX;
	int16_t x227 = INT16_MIN;
	int32_t t51 = 92;

    t51 = ((x225%x226)+(x227%x228));

    if (t51 != -32736) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x229 = INT16_MIN;
	uint32_t x231 = 375545503U;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t52 = 3U;

    t52 = ((x229%x230)+(x231%x232));

    if (t52 != 375512735U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x234 = 332806U;
	volatile int64_t x235 = INT64_MAX;
	volatile int16_t x236 = INT16_MIN;
	int64_t t53 = 893028316260663LL;

    t53 = ((x233%x234)+(x235%x236));

    if (t53 != 98302LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = INT8_MAX;
	static int16_t x238 = -1;
	volatile int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t54 = 451;

    t54 = ((x237%x238)+(x239%x240));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x241 = INT8_MIN;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = -1LL;
	int32_t x244 = -917753;
	volatile int64_t t55 = 408LL;

    t55 = ((x241%x242)+(x243%x244));

    if (t55 != -129LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x247 = UINT32_MAX;
	static uint8_t x248 = UINT8_MAX;
	uint32_t t56 = 67472U;

    t56 = ((x245%x246)+(x247%x248));

    if (t56 != 51205542U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = -1LL;
	volatile uint32_t x250 = UINT32_MAX;
	static volatile uint32_t x251 = 109671U;
	uint16_t x252 = UINT16_MAX;
	volatile int64_t t57 = 53LL;

    t57 = ((x249%x250)+(x251%x252));

    if (t57 != 44135LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x254 = -1;
	uint8_t x255 = 3U;
	uint8_t x256 = UINT8_MAX;
	int32_t t58 = -4820;

    t58 = ((x253%x254)+(x255%x256));

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x257 = 0;
	volatile int64_t x259 = INT64_MAX;
	volatile int16_t x260 = INT16_MAX;

    t59 = ((x257%x258)+(x259%x260));

    if (t59 != 7LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = INT32_MAX;
	int16_t x263 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t60 = 56115;

    t60 = ((x261%x262)+(x263%x264));

    if (t60 != 162699774) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x265 = -9;
	int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MIN;
	int32_t x268 = -270612928;

    t61 = ((x265%x266)+(x267%x268));

    if (t61 != -253193161) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MAX;
	static int16_t x271 = 5;
	uint8_t x272 = 11U;

    t62 = ((x269%x270)+(x271%x272));

    if (t62 != 6LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x273 = 208528U;
	int16_t x275 = 6;
	static volatile uint16_t x276 = UINT16_MAX;
	int64_t t63 = -25621LL;

    t63 = ((x273%x274)+(x275%x276));

    if (t63 != 208534LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x277 = UINT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t64 = -18LL;

    t64 = ((x277%x278)+(x279%x280));

    if (t64 != 269LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = -1LL;
	int8_t x282 = INT8_MAX;
	int16_t x283 = 0;
	static int16_t x284 = INT16_MIN;
	int64_t t65 = -158796851495669LL;

    t65 = ((x281%x282)+(x283%x284));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x286 = INT8_MAX;
	static volatile int32_t x287 = INT32_MAX;
	int32_t x288 = 998;
	volatile int32_t t66 = 783970745;

    t66 = ((x285%x286)+(x287%x288));

    if (t66 != 222) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x289 = -508154;
	static int8_t x290 = INT8_MIN;
	static int32_t x292 = -1;
	volatile int32_t t67 = 849;

    t67 = ((x289%x290)+(x291%x292));

    if (t67 != -122) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int32_t x296 = -506816;
	int32_t t68 = -1207;

    t68 = ((x293%x294)+(x295%x296));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x297 = INT8_MIN;
	int64_t x299 = INT64_MAX;
	static volatile uint64_t x300 = 6LLU;
	volatile uint64_t t69 = 3086016804034LLU;

    t69 = ((x297%x298)+(x299%x300));

    if (t69 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x303 = -55192;
	int8_t x304 = -39;
	int32_t t70 = -34497708;

    t70 = ((x301%x302)+(x303%x304));

    if (t70 != 32760) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x306 = UINT8_MAX;
	int8_t x307 = -1;

    t71 = ((x305%x306)+(x307%x308));

    if (t71 != 40U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MIN;
	uint8_t x311 = UINT8_MAX;
	volatile int8_t x312 = -1;
	static int32_t t72 = 32912073;

    t72 = ((x309%x310)+(x311%x312));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x313 = -28283443LL;
	static volatile int8_t x315 = 1;
	uint32_t x316 = UINT32_MAX;
	int64_t t73 = 4840577LL;

    t73 = ((x313%x314)+(x315%x316));

    if (t73 != -37857LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x321 = 5501;
	static int16_t x322 = 7845;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	static int32_t t74 = 4;

    t74 = ((x321%x322)+(x323%x324));

    if (t74 != 5501) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x325 = INT64_MAX;
	static int32_t x326 = -1;
	uint32_t x327 = 26661U;

    t75 = ((x325%x326)+(x327%x328));

    if (t75 != 26661LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x329 = 8U;
	uint8_t x330 = UINT8_MAX;
	volatile uint64_t t76 = 48342853LLU;

    t76 = ((x329%x330)+(x331%x332));

    if (t76 != 12LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x334 = -89;
	static volatile int8_t x335 = -1;
	int8_t x336 = -1;
	volatile int32_t t77 = 156247;

    t77 = ((x333%x334)+(x335%x336));

    if (t77 != -16) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x341 = INT64_MAX;
	int32_t x342 = -1;
	int64_t x343 = 204801564516463806LL;
	volatile int64_t t78 = -1332123671863871293LL;

    t78 = ((x341%x342)+(x343%x344));

    if (t78 != 1482LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x350 = INT8_MIN;
	static uint64_t t79 = 1076264434615022383LLU;

    t79 = ((x349%x350)+(x351%x352));

    if (t79 != 32768LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = -1LL;
	static int8_t x355 = INT8_MAX;
	volatile int8_t x356 = -1;
	volatile int64_t t80 = 31263707LL;

    t80 = ((x353%x354)+(x355%x356));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x358 = -15;
	int32_t x359 = 3462932;

    t81 = ((x357%x358)+(x359%x360));

    if (t81 != 3462932) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x361 = 109U;
	int32_t x362 = 644;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;

    t82 = ((x361%x362)+(x363%x364));

    if (t82 != -32659LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x365 = INT8_MAX;
	volatile int64_t x366 = INT64_MIN;
	uint64_t x367 = 1098991LLU;
	uint64_t t83 = 4357116564681609LLU;

    t83 = ((x365%x366)+(x367%x368));

    if (t83 != 1099118LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x369 = 119U;
	uint64_t x370 = UINT64_MAX;
	static uint64_t x371 = 6LLU;
	uint16_t x372 = UINT16_MAX;

    t84 = ((x369%x370)+(x371%x372));

    if (t84 != 125LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x373 = 2323241U;
	uint32_t x374 = UINT32_MAX;
	static uint16_t x375 = 4333U;
	int64_t x376 = -1LL;
	int64_t t85 = 29LL;

    t85 = ((x373%x374)+(x375%x376));

    if (t85 != 2323241LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x378 = -1;

    t86 = ((x377%x378)+(x379%x380));

    if (t86 != 1013) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x381 = 3461U;
	uint8_t x382 = 5U;
	volatile int64_t x383 = 131799505420141LL;
	int16_t x384 = -471;
	int64_t t87 = 1360953LL;

    t87 = ((x381%x382)+(x383%x384));

    if (t87 != 266LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x386 = INT64_MAX;
	static volatile uint16_t x388 = 109U;
	int64_t t88 = -61108967440LL;

    t88 = ((x385%x386)+(x387%x388));

    if (t88 != -32763LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = -1;
	uint16_t x390 = 23U;
	uint8_t x392 = UINT8_MAX;
	int32_t t89 = -2912;

    t89 = ((x389%x390)+(x391%x392));

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = UINT8_MAX;
	static int32_t t90 = 188606;

    t90 = ((x393%x394)+(x395%x396));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MIN;
	uint64_t x399 = 568229648100406LLU;
	int64_t x400 = INT64_MAX;

    t91 = ((x397%x398)+(x399%x400));

    if (t91 != 568229648100533LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x402 = INT32_MAX;
	volatile int16_t x403 = -1;
	int8_t x404 = 1;
	uint64_t t92 = 224315LLU;

    t92 = ((x401%x402)+(x403%x404));

    if (t92 != 3LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x405 = INT32_MAX;
	static uint16_t x406 = 15U;
	int16_t x408 = 873;
	static int64_t t93 = 4545LL;

    t93 = ((x405%x406)+(x407%x408));

    if (t93 != 473LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x409 = 2677692929735LLU;
	uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = INT64_MAX;
	uint64_t t94 = 190613334LLU;

    t94 = ((x409%x410)+(x411%x412));

    if (t94 != 2681987897030LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x413 = INT32_MIN;
	static int64_t x414 = INT64_MAX;
	uint16_t x415 = 26653U;
	int32_t x416 = INT32_MAX;
	volatile int64_t t95 = 441429534003651LL;

    t95 = ((x413%x414)+(x415%x416));

    if (t95 != -2147456995LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x417 = 15U;
	int8_t x418 = INT8_MAX;
	int8_t x419 = 1;
	int16_t x420 = -1;

    t96 = ((x417%x418)+(x419%x420));

    if (t96 != 15) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x422 = -1LL;
	int64_t x424 = -7LL;

    t97 = ((x421%x422)+(x423%x424));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MAX;
	static volatile int64_t t98 = -378LL;

    t98 = ((x425%x426)+(x427%x428));

    if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x431 = INT32_MAX;
	int64_t x432 = -6236LL;

    t99 = ((x429%x430)+(x431%x432));

    if (t99 != 117005823LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x434 = INT64_MIN;
	uint64_t x435 = 97LLU;
	uint64_t x436 = 924713064962095LLU;
	static uint64_t t100 = 351LLU;

    t100 = ((x433%x434)+(x435%x436));

    if (t100 != 18446744071562068065LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x437 = 3227761963346LLU;
	int16_t x438 = INT16_MIN;
	static uint64_t x439 = 450855906632LLU;
	int64_t x440 = -1LL;
	static uint64_t t101 = 11003884600733LLU;

    t101 = ((x437%x438)+(x439%x440));

    if (t101 != 3678617869978LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x443 = -1;
	volatile int64_t x444 = 325023LL;
	volatile int64_t t102 = 289974486700LL;

    t102 = ((x441%x442)+(x443%x444));

    if (t102 != -129LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x445 = -1LL;
	static int64_t x447 = -14148LL;
	int8_t x448 = -1;
	int64_t t103 = -2754842265497499497LL;

    t103 = ((x445%x446)+(x447%x448));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x449 = 858408191LLU;
	int8_t x450 = -52;
	int64_t x451 = INT64_MIN;
	static int64_t x452 = -1047320357759LL;
	volatile uint64_t t104 = 107316588525LLU;

    t104 = ((x449%x450)+(x451%x452));

    if (t104 != 18446743298527188241LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x453 = UINT64_MAX;
	volatile int32_t x454 = INT32_MIN;
	volatile uint16_t x455 = 30988U;
	int32_t x456 = -1;
	volatile uint64_t t105 = 1LLU;

    t105 = ((x453%x454)+(x455%x456));

    if (t105 != 2147483647LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x459 = 81619LL;
	int32_t x460 = 74212121;
	static int64_t t106 = -329494614331397LL;

    t106 = ((x457%x458)+(x459%x460));

    if (t106 != 81746LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x461 = INT64_MAX;
	int8_t x462 = INT8_MAX;
	uint8_t x463 = 1U;
	volatile int64_t x464 = -1LL;
	static int64_t t107 = 83LL;

    t107 = ((x461%x462)+(x463%x464));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x469 = UINT64_MAX;
	uint64_t x471 = 124LLU;
	int16_t x472 = 4712;

    t108 = ((x469%x470)+(x471%x472));

    if (t108 != 345LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x474 = -1;
	uint16_t x475 = UINT16_MAX;
	volatile uint64_t t109 = 6LLU;

    t109 = ((x473%x474)+(x475%x476));

    if (t109 != 65535LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = INT16_MIN;
	uint8_t x478 = 20U;
	int16_t x479 = -1;
	int32_t t110 = -100156;

    t110 = ((x477%x478)+(x479%x480));

    if (t110 != -9) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x481 = -1;
	static volatile int16_t x482 = 14;
	volatile int32_t t111 = 468;

    t111 = ((x481%x482)+(x483%x484));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x486 = INT16_MAX;
	int16_t x487 = INT16_MIN;
	int32_t t112 = 2;

    t112 = ((x485%x486)+(x487%x488));

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x489 = UINT64_MAX;
	volatile uint64_t x490 = 1381LLU;
	int32_t x491 = INT32_MIN;
	uint64_t x492 = UINT64_MAX;
	static volatile uint64_t t113 = 7860258899LLU;

    t113 = ((x489%x490)+(x491%x492));

    if (t113 != 18446744071562069243LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x493 = -1;
	uint8_t x494 = UINT8_MAX;
	int16_t x495 = INT16_MIN;
	volatile int64_t x496 = INT64_MIN;
	static volatile int64_t t114 = 11216043LL;

    t114 = ((x493%x494)+(x495%x496));

    if (t114 != -32769LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x498 = 14U;
	static int8_t x499 = 1;
	volatile int64_t x500 = INT64_MIN;

    t115 = ((x497%x498)+(x499%x500));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x501 = INT32_MAX;
	uint32_t x502 = 5779U;
	static int8_t x504 = INT8_MIN;
	uint32_t t116 = 15659281U;

    t116 = ((x501%x502)+(x503%x504));

    if (t116 != 1468U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x505 = 306U;
	static int8_t x506 = INT8_MIN;
	uint16_t x508 = 22871U;
	volatile int32_t t117 = 0;

    t117 = ((x505%x506)+(x507%x508));

    if (t117 != 59) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x509 = INT8_MIN;
	volatile uint32_t x510 = UINT32_MAX;
	int16_t x511 = -47;
	int64_t x512 = INT64_MIN;
	int64_t t118 = -40LL;

    t118 = ((x509%x510)+(x511%x512));

    if (t118 != 4294967121LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x513 = INT8_MIN;
	volatile int32_t x514 = INT32_MIN;
	uint32_t x516 = 3U;
	volatile int64_t t119 = 811428294958282834LL;

    t119 = ((x513%x514)+(x515%x516));

    if (t119 != -130LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = 24536960;
	static int64_t x518 = 195411LL;
	static int64_t x519 = INT64_MIN;
	volatile int64_t t120 = -14LL;

    t120 = ((x517%x518)+(x519%x520));

    if (t120 != -2147373063LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t t121 = -2052290083LL;

    t121 = ((x521%x522)+(x523%x524));

    if (t121 != 3LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x525 = INT8_MIN;
	volatile int32_t x526 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	static int32_t x528 = -1;

    t122 = ((x525%x526)+(x527%x528));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x529 = -1;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	static int8_t x532 = -1;
	static volatile int32_t t123 = 0;

    t123 = ((x529%x530)+(x531%x532));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x533 = UINT16_MAX;
	static uint64_t x534 = 22010988LLU;
	volatile int32_t x535 = -1;
	static uint16_t x536 = 1U;
	uint64_t t124 = 30641404788510539LLU;

    t124 = ((x533%x534)+(x535%x536));

    if (t124 != 65535LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x538 = INT8_MIN;
	int8_t x539 = -1;
	int32_t t125 = -1;

    t125 = ((x537%x538)+(x539%x540));

    if (t125 != 118) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint32_t x541 = 1875269U;
	int32_t x542 = INT32_MAX;
	uint16_t x544 = UINT16_MAX;
	static uint32_t t126 = 768U;

    t126 = ((x541%x542)+(x543%x544));

    if (t126 != 1875268U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x545 = INT32_MIN;
	int8_t x546 = INT8_MAX;
	int8_t x547 = INT8_MIN;
	static int8_t x548 = -14;
	static int32_t t127 = 4293;

    t127 = ((x545%x546)+(x547%x548));

    if (t127 != -10) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x549 = -1LL;
	volatile int64_t x550 = -1LL;
	int16_t x551 = -1;
	volatile uint64_t x552 = 20668769361LLU;
	volatile uint64_t t128 = 227377349623LLU;

    t128 = ((x549%x550)+(x551%x552));

    if (t128 != 9172502430LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x553 = 4765;
	int16_t x555 = -1;
	int64_t x556 = -1LL;
	volatile int64_t t129 = -526596263040594845LL;

    t129 = ((x553%x554)+(x555%x556));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MIN;
	static int32_t x560 = INT32_MIN;
	static volatile uint64_t t130 = 14LLU;

    t130 = ((x557%x558)+(x559%x560));

    if (t130 != 1053544491687523223LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x562 = -1LL;
	int64_t x563 = 1605554106889LL;
	static volatile int64_t t131 = 33418LL;

    t131 = ((x561%x562)+(x563%x564));

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x565 = 1U;
	volatile uint8_t x566 = 2U;
	int32_t x567 = INT32_MIN;
	static uint64_t x568 = 11541336211584LLU;
	uint64_t t132 = 96LLU;

    t132 = ((x565%x566)+(x567%x568));

    if (t132 != 7119199340673LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x569 = 61U;
	static uint16_t x570 = 1U;
	volatile uint16_t x571 = 4U;
	int64_t x572 = INT64_MIN;
	int64_t t133 = 20263499595334LL;

    t133 = ((x569%x570)+(x571%x572));

    if (t133 != 4LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = -1;
	int16_t x579 = 95;
	volatile uint64_t x580 = 398LLU;
	uint64_t t134 = 3515342757203192LLU;

    t134 = ((x577%x578)+(x579%x580));

    if (t134 != 95LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x581 = INT32_MAX;
	static uint64_t x582 = 15808238890628LLU;
	static uint8_t x583 = 25U;
	static uint16_t x584 = UINT16_MAX;
	volatile uint64_t t135 = 1147319LLU;

    t135 = ((x581%x582)+(x583%x584));

    if (t135 != 2147483672LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x585 = -1;
	int32_t t136 = -61447;

    t136 = ((x585%x586)+(x587%x588));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x594 = 1U;
	uint16_t x596 = 115U;
	int64_t t137 = -54LL;

    t137 = ((x593%x594)+(x595%x596));

    if (t137 != 87LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x597 = INT8_MAX;
	uint32_t x598 = UINT32_MAX;
	static int64_t x599 = 27827441528951384LL;
	int16_t x600 = 3;
	int64_t t138 = 298294LL;

    t138 = ((x597%x598)+(x599%x600));

    if (t138 != 129LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x602 = INT64_MIN;
	volatile int8_t x603 = 11;
	int64_t x604 = INT64_MAX;
	int64_t t139 = 123LL;

    t139 = ((x601%x602)+(x603%x604));

    if (t139 != -32757LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x605 = INT32_MIN;
	uint8_t x606 = 50U;
	volatile uint8_t x607 = 2U;
	int16_t x608 = 1;
	int32_t t140 = -4226887;

    t140 = ((x605%x606)+(x607%x608));

    if (t140 != -48) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x609 = 5U;
	int8_t x610 = 1;
	uint32_t x611 = UINT32_MAX;
	int16_t x612 = 205;

    t141 = ((x609%x610)+(x611%x612));

    if (t141 != 200U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint32_t x614 = UINT32_MAX;
	int8_t x615 = INT8_MAX;
	int8_t x616 = -1;
	int64_t t142 = -148051670743837LL;

    t142 = ((x613%x614)+(x615%x616));

    if (t142 != -2147483648LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x618 = INT8_MAX;
	int64_t t143 = 0LL;

    t143 = ((x617%x618)+(x619%x620));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x621 = INT64_MIN;
	int8_t x622 = INT8_MAX;
	uint16_t x624 = 3165U;
	volatile int64_t t144 = -18004322212542LL;

    t144 = ((x621%x622)+(x623%x624));

    if (t144 != 254LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x625 = INT32_MIN;
	int32_t x626 = INT32_MIN;
	volatile int32_t t145 = -26;

    t145 = ((x625%x626)+(x627%x628));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x629 = -1;
	static int32_t x630 = INT32_MAX;
	int64_t x631 = 84671616LL;
	volatile int32_t x632 = INT32_MIN;
	static volatile int64_t t146 = 417051695922400LL;

    t146 = ((x629%x630)+(x631%x632));

    if (t146 != 84671615LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x633 = UINT8_MAX;
	int8_t x634 = 42;
	int64_t x635 = 7717211749558290LL;
	static volatile uint32_t x636 = 24U;
	volatile int64_t t147 = -67417976LL;

    t147 = ((x633%x634)+(x635%x636));

    if (t147 != 21LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x637 = -1LL;
	int64_t x638 = -12023108LL;
	volatile int8_t x640 = INT8_MIN;

    t148 = ((x637%x638)+(x639%x640));

    if (t148 != 26LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x641 = 39312971U;
	int8_t x642 = 1;
	volatile uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MIN;
	volatile uint64_t t149 = 4984LLU;

    t149 = ((x641%x642)+(x643%x644));

    if (t149 != 2147483647LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x647 = UINT64_MAX;
	uint16_t x648 = UINT16_MAX;

    t150 = ((x645%x646)+(x647%x648));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x650 = -1;
	int64_t x652 = INT64_MAX;
	volatile int64_t t151 = -20835438483583LL;

    t151 = ((x649%x650)+(x651%x652));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x653 = INT16_MIN;
	int8_t x654 = 8;
	int32_t x655 = INT32_MIN;
	int64_t t152 = -58LL;

    t152 = ((x653%x654)+(x655%x656));

    if (t152 != -2147483648LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x657 = 5456U;
	int32_t x658 = INT32_MIN;
	int32_t x659 = INT32_MAX;
	int64_t x660 = -7LL;
	int64_t t153 = 4884555628LL;

    t153 = ((x657%x658)+(x659%x660));

    if (t153 != 5457LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x662 = UINT32_MAX;

    t154 = ((x661%x662)+(x663%x664));

    if (t154 != 1023162LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x665 = INT8_MIN;
	int32_t t155 = 219;

    t155 = ((x665%x666)+(x667%x668));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x669 = INT64_MIN;
	static int16_t x670 = INT16_MIN;
	int64_t x671 = -353691LL;
	volatile int32_t x672 = INT32_MIN;
	volatile int64_t t156 = 0LL;

    t156 = ((x669%x670)+(x671%x672));

    if (t156 != -353691LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	static int16_t x679 = INT16_MIN;
	volatile int64_t x680 = -595131222208LL;
	int64_t t157 = -153547LL;

    t157 = ((x677%x678)+(x679%x680));

    if (t157 != -65536LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x681 = UINT64_MAX;
	int64_t x682 = INT64_MIN;
	int32_t x683 = INT32_MIN;
	uint8_t x684 = UINT8_MAX;

    t158 = ((x681%x682)+(x683%x684));

    if (t158 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x685 = 22U;
	uint16_t x686 = 59U;
	int64_t x687 = INT64_MAX;
	static int16_t x688 = INT16_MIN;

    t159 = ((x685%x686)+(x687%x688));

    if (t159 != 32789LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x691 = -1LL;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t160 = 853318931626808606LLU;

    t160 = ((x689%x690)+(x691%x692));

    if (t160 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x693 = 801285LL;
	static volatile int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MIN;

    t161 = ((x693%x694)+(x695%x696));

    if (t161 != 801285LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x698 = -20;
	uint32_t x699 = 39308U;

    t162 = ((x697%x698)+(x699%x700));

    if (t162 != 39337LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x701 = 76003514868LLU;
	int16_t x702 = -5658;
	volatile int32_t x703 = -7757;
	volatile int8_t x704 = INT8_MIN;
	static uint64_t t163 = 372910473229169LLU;

    t163 = ((x701%x702)+(x703%x704));

    if (t163 != 76003514791LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x706 = 14436LLU;
	static uint64_t x707 = 52867714440298LLU;
	int64_t x708 = INT64_MAX;
	uint64_t t164 = 1741304355LLU;

    t164 = ((x705%x706)+(x707%x708));

    if (t164 != 52867714440320LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x709 = INT16_MIN;
	int32_t x710 = INT32_MIN;
	int64_t x711 = 0LL;
	static volatile int32_t x712 = INT32_MIN;
	static volatile int64_t t165 = 446195667046006LL;

    t165 = ((x709%x710)+(x711%x712));

    if (t165 != -32768LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x713 = 1;
	static int64_t x714 = INT64_MAX;
	int8_t x715 = -1;
	static int64_t t166 = 123149787951789361LL;

    t166 = ((x713%x714)+(x715%x716));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x717 = 3487119036632968LLU;
	int8_t x718 = INT8_MIN;
	static int32_t x719 = -1;
	static int32_t x720 = -1;
	uint64_t t167 = 18974789159LLU;

    t167 = ((x717%x718)+(x719%x720));

    if (t167 != 3487119036632968LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x721 = INT64_MIN;
	volatile int64_t x722 = 80LL;
	int64_t x724 = -1LL;
	volatile int64_t t168 = -121049LL;

    t168 = ((x721%x722)+(x723%x724));

    if (t168 != -48LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x725 = UINT64_MAX;
	volatile int32_t x726 = INT32_MAX;
	int32_t x727 = INT32_MIN;
	volatile int16_t x728 = -1;

    t169 = ((x725%x726)+(x727%x728));

    if (t169 != 3LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x729 = -1LL;
	int8_t x730 = INT8_MIN;
	static int8_t x731 = INT8_MIN;
	int32_t x732 = INT32_MIN;
	volatile int64_t t170 = 2013038094051LL;

    t170 = ((x729%x730)+(x731%x732));

    if (t170 != -129LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x734 = -29LL;
	uint16_t x735 = 15739U;
	int8_t x736 = INT8_MAX;

    t171 = ((x733%x734)+(x735%x736));

    if (t171 != 91LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x738 = -313LL;
	int16_t x739 = -1;
	int64_t x740 = INT64_MIN;

    t172 = ((x737%x738)+(x739%x740));

    if (t172 != -129LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x741 = 419228;
	volatile int8_t x742 = -13;
	int16_t x743 = -1;

    t173 = ((x741%x742)+(x743%x744));

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x745 = 472U;
	int64_t x746 = INT64_MAX;
	int32_t x747 = INT32_MIN;
	int16_t x748 = -1;
	volatile int64_t t174 = 23667024712061699LL;

    t174 = ((x745%x746)+(x747%x748));

    if (t174 != 472LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x749 = -1119044181858365LL;
	int32_t x751 = -590;
	volatile int64_t x752 = INT64_MAX;

    t175 = ((x749%x750)+(x751%x752));

    if (t175 != -590LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x754 = UINT32_MAX;
	static uint64_t x755 = UINT64_MAX;
	uint64_t t176 = 14926383238367LLU;

    t176 = ((x753%x754)+(x755%x756));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x757 = 17U;
	int8_t x758 = INT8_MAX;
	int64_t x759 = INT64_MAX;
	uint32_t x760 = UINT32_MAX;
	int64_t t177 = 2253923495097507823LL;

    t177 = ((x757%x758)+(x759%x760));

    if (t177 != 2147483664LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x762 = 20865654730489LL;
	static volatile uint16_t x764 = 160U;
	int64_t t178 = 116LL;

    t178 = ((x761%x762)+(x763%x764));

    if (t178 != -129LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x765 = INT16_MAX;
	uint64_t x766 = UINT64_MAX;
	uint8_t x767 = 5U;
	static uint16_t x768 = UINT16_MAX;
	static volatile uint64_t t179 = 196541099LLU;

    t179 = ((x765%x766)+(x767%x768));

    if (t179 != 32772LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x770 = -1;
	static int64_t x771 = INT64_MIN;
	volatile int32_t x772 = -1;
	int64_t t180 = 9206592734505828LL;

    t180 = ((x769%x770)+(x771%x772));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x773 = INT32_MAX;
	static int8_t x774 = -1;
	volatile int16_t x775 = INT16_MIN;
	static uint8_t x776 = UINT8_MAX;

    t181 = ((x773%x774)+(x775%x776));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x781 = INT32_MIN;
	static volatile uint8_t x782 = UINT8_MAX;
	volatile int32_t x783 = INT32_MIN;
	int32_t t182 = 0;

    t182 = ((x781%x782)+(x783%x784));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x785 = -36;
	uint32_t x786 = UINT32_MAX;
	static int16_t x788 = INT16_MAX;

    t183 = ((x785%x786)+(x787%x788));

    if (t183 != 4294972878LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x789 = 5147LLU;
	int8_t x790 = INT8_MIN;
	uint16_t x791 = 1076U;
	uint64_t t184 = 1525059570421LLU;

    t184 = ((x789%x790)+(x791%x792));

    if (t184 != 5147LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x793 = -33681713641905336LL;
	uint64_t x794 = 11LLU;
	uint32_t x795 = 74909U;
	static volatile uint16_t x796 = 2663U;

    t185 = ((x793%x794)+(x795%x796));

    if (t185 != 354LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x797 = 15724U;
	uint32_t x798 = 33521157U;
	static int8_t x800 = INT8_MIN;
	volatile int64_t t186 = 2LL;

    t186 = ((x797%x798)+(x799%x800));

    if (t186 != 15802LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x805 = INT16_MIN;
	uint64_t t187 = UINT64_MAX;

    t187 = ((x805%x806)+(x807%x808));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x809 = -1;
	int16_t x810 = INT16_MIN;
	int64_t x811 = 7608LL;
	uint8_t x812 = 80U;

    t188 = ((x809%x810)+(x811%x812));

    if (t188 != 7LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x815 = 20U;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t189 = -188584;

    t189 = ((x813%x814)+(x815%x816));

    if (t189 != -4) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x817 = -1;
	int16_t x818 = INT16_MIN;
	int64_t x819 = 117679895LL;
	uint16_t x820 = 72U;
	volatile int64_t t190 = -15LL;

    t190 = ((x817%x818)+(x819%x820));

    if (t190 != 70LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x821 = -1;
	volatile int16_t x822 = -1;
	static volatile int64_t x823 = -1LL;
	int8_t x824 = -2;
	volatile int64_t t191 = -768234LL;

    t191 = ((x821%x822)+(x823%x824));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x825 = INT8_MIN;
	int8_t x827 = INT8_MAX;
	volatile int16_t x828 = -1;
	static int32_t t192 = 2882693;

    t192 = ((x825%x826)+(x827%x828));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x829 = -47;
	uint64_t x830 = 6886929871922320226LLU;
	volatile int16_t x831 = INT16_MIN;
	int32_t x832 = -229010528;
	uint64_t t193 = 423427LLU;

    t193 = ((x829%x830)+(x831%x832));

    if (t193 != 4672884329864878349LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x833 = 283298716012062369LLU;
	int32_t x834 = INT32_MIN;
	volatile uint64_t t194 = 7158028LLU;

    t194 = ((x833%x834)+(x835%x836));

    if (t194 != 283298716012062369LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x837 = 23LLU;
	static int32_t x838 = INT32_MAX;
	int16_t x839 = -4668;
	uint64_t t195 = 3805381458LLU;

    t195 = ((x837%x838)+(x839%x840));

    if (t195 != 55093118582629327LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x841 = 0;
	int16_t x843 = 12;
	static uint32_t t196 = 500918U;

    t196 = ((x841%x842)+(x843%x844));

    if (t196 != 12U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x849 = INT32_MIN;
	volatile uint16_t x850 = 3810U;
	int64_t x851 = -1100565LL;
	volatile int64_t t197 = 137741406249081295LL;

    t197 = ((x849%x850)+(x851%x852));

    if (t197 != -1100573LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x853 = 31053;
	uint32_t x854 = UINT32_MAX;
	uint64_t x855 = 1LLU;
	static int32_t x856 = INT32_MIN;
	uint64_t t198 = 2086LLU;

    t198 = ((x853%x854)+(x855%x856));

    if (t198 != 31054LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x858 = UINT64_MAX;
	static volatile int32_t x859 = INT32_MIN;
	uint32_t x860 = 2U;
	static volatile uint64_t t199 = 68443LLU;

    t199 = ((x857%x858)+(x859%x860));

    if (t199 != 117LLU) { NG(); } else { ; }
	
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

