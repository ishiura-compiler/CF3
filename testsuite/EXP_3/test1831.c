
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

int8_t x24 = -1;
static int64_t x27 = -1LL;
int64_t x29 = INT64_MAX;
int8_t x38 = -1;
int16_t x42 = INT16_MIN;
int16_t x44 = 199;
volatile uint8_t x45 = UINT8_MAX;
volatile uint32_t t8 = 37U;
uint32_t x63 = 6645085U;
static int16_t x71 = 563;
static int64_t t13 = 75LL;
static int16_t x73 = INT16_MIN;
int16_t x80 = INT16_MAX;
uint8_t x92 = UINT8_MAX;
volatile int32_t t17 = 1;
int16_t x108 = -1;
volatile int64_t t22 = 116563391LL;
int16_t x117 = -1;
uint8_t x120 = UINT8_MAX;
int8_t x121 = -29;
int32_t x124 = -1;
static uint32_t t24 = 1U;
int64_t t27 = 441776194578289LL;
static int8_t x143 = INT8_MAX;
uint64_t t28 = 129708824549334LLU;
int16_t x150 = -1533;
int16_t x152 = INT16_MIN;
int32_t x155 = -1;
int16_t x156 = INT16_MAX;
uint16_t x158 = 3359U;
uint64_t x168 = UINT64_MAX;
int32_t t36 = 601011802;
uint32_t x186 = 1211U;
volatile uint64_t x187 = 37228210LLU;
int16_t x190 = -1;
static int64_t t40 = 167LL;
uint64_t x222 = 240379836LLU;
volatile uint64_t t41 = 1618709367810224984LLU;
int64_t t42 = -25410332LL;
int32_t x241 = 53544627;
static volatile uint16_t x242 = 22U;
volatile int32_t x265 = INT32_MAX;
uint32_t x270 = 421765061U;
uint32_t t49 = 11778U;
int16_t x277 = -734;
volatile int16_t x285 = 1;
int32_t x289 = -40656;
volatile int64_t x297 = INT64_MAX;
int8_t x298 = 8;
int64_t x299 = -1LL;
int16_t x308 = -1;
volatile uint64_t t56 = 2131258087LLU;
int8_t x324 = INT8_MIN;
int32_t x325 = -1;
uint64_t x335 = 936278279LLU;
int32_t x336 = 1;
static uint32_t t62 = 1997574098U;
static int8_t x348 = 0;
static uint32_t x358 = 656264U;
int8_t x359 = 0;
uint32_t t66 = 153U;
static int64_t x366 = INT64_MIN;
int64_t x380 = INT64_MAX;
static int8_t x388 = INT8_MAX;
int64_t x394 = INT64_MAX;
int8_t x402 = INT8_MIN;
volatile int32_t t73 = 1;
static uint32_t x411 = 29U;
static int8_t x413 = -34;
uint32_t x417 = 0U;
uint8_t x419 = 13U;
int64_t x420 = INT64_MAX;
int64_t x421 = -1LL;
int8_t x422 = -1;
uint32_t x434 = UINT32_MAX;
static volatile uint16_t x435 = UINT16_MAX;
volatile uint8_t x436 = 125U;
uint32_t x445 = 36676023U;
int16_t x446 = 254;
int16_t x454 = INT16_MAX;
static uint32_t x455 = 203849U;
int8_t x457 = -19;
volatile uint8_t x459 = 5U;
int8_t x462 = -1;
int8_t x470 = -4;
int8_t x480 = INT8_MAX;
int64_t x486 = 111LL;
int32_t x507 = INT32_MAX;
int32_t x519 = -431;
static int8_t x523 = 2;
int64_t t100 = -531559LL;
static int32_t x549 = INT32_MIN;
int8_t x552 = -3;
int16_t x555 = -24;
int32_t x556 = INT32_MIN;
static int64_t x562 = INT64_MIN;
int32_t x563 = INT32_MIN;
int16_t x566 = 5952;
volatile int8_t x567 = INT8_MAX;
volatile int32_t t108 = 292128202;
int32_t x608 = -96940;
int32_t x611 = INT32_MAX;
int64_t t113 = -32326824LL;
int32_t x618 = -1;
static uint32_t x620 = UINT32_MAX;
uint16_t x623 = 771U;
int32_t t116 = 11188302;
int32_t t117 = 6373;
static int16_t x631 = -1;
int32_t x641 = INT32_MIN;
uint8_t x643 = 54U;
int32_t x644 = -83370;
int16_t x659 = INT16_MAX;
volatile int16_t x662 = INT16_MIN;
uint8_t x664 = UINT8_MAX;
int64_t t122 = 260786070697098083LL;
int8_t x668 = INT8_MAX;
int8_t x675 = -38;
int32_t x679 = -1;
uint64_t x683 = UINT64_MAX;
volatile uint16_t x686 = 178U;
volatile int64_t x688 = INT64_MAX;
int8_t x690 = INT8_MIN;
uint32_t x691 = 14725684U;
static int8_t x707 = INT8_MIN;
int16_t x716 = INT16_MIN;
static int32_t x727 = 1;
uint64_t x732 = UINT64_MAX;
int32_t x737 = INT32_MIN;
int16_t x738 = INT16_MIN;
int8_t x740 = INT8_MIN;
static volatile uint32_t x748 = UINT32_MAX;
uint8_t x750 = 3U;
volatile uint8_t x752 = 0U;
int8_t x754 = INT8_MIN;
uint32_t t139 = 749902121U;
static volatile int32_t x770 = INT32_MAX;
static int32_t t141 = 122;
volatile int64_t x774 = INT64_MIN;
static volatile int64_t t142 = -10623684200214935LL;
static int32_t t146 = -51;
int64_t x806 = -100LL;
volatile uint32_t t149 = 519454U;
volatile uint32_t x846 = UINT32_MAX;
int16_t x850 = 34;
int64_t x852 = INT64_MIN;
int32_t x855 = INT32_MAX;
volatile int8_t x856 = 16;
int16_t x860 = INT16_MAX;
int8_t x865 = 35;
static int64_t x866 = -1LL;
volatile uint32_t t157 = 5U;
int8_t x877 = INT8_MAX;
uint32_t x878 = UINT32_MAX;
int8_t x890 = INT8_MIN;
uint16_t x901 = 2472U;
int8_t x903 = 1;
int8_t x904 = 1;
int16_t x937 = INT16_MIN;
static volatile int8_t x939 = -4;
int16_t x940 = 470;
uint16_t x943 = 7U;
int32_t t168 = 82;
static int8_t x946 = INT8_MIN;
int64_t t171 = 377072326401697167LL;
int64_t x958 = 333LL;
int16_t x964 = -7;
int32_t x965 = -181850;
uint64_t t176 = 1073298437399287264LLU;
volatile int64_t t177 = -3980028753497LL;
volatile int32_t t178 = -7;
int8_t x1008 = 0;
volatile int8_t x1024 = INT8_MIN;
static int16_t x1030 = INT16_MAX;
int16_t x1031 = INT16_MAX;
int8_t x1045 = INT8_MAX;
volatile uint16_t x1046 = 1U;
volatile uint64_t x1047 = 1100585453LLU;
int32_t t187 = 18;
uint16_t x1053 = 303U;
int8_t x1063 = INT8_MIN;
uint8_t x1068 = 72U;
volatile int16_t x1078 = -9;
static volatile uint64_t t193 = 120804862LLU;
volatile int32_t t195 = -26989534;
static int8_t x1095 = -6;
uint64_t x1102 = 70296208695253LLU;
uint8_t x1110 = 110U;


void f0(void) {
    	uint32_t x1 = 7888609U;
	uint8_t x2 = 29U;
	int64_t x3 = 266944070268940996LL;
	int64_t x4 = INT64_MIN;
	volatile uint32_t t0 = 195U;

    t0 = ((x1%x2)>>(x3<=x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 6;
	int8_t x6 = INT8_MAX;
	int32_t x7 = 5229787;
	volatile int64_t x8 = -20024323807LL;
	static int32_t t1 = 23595520;

    t1 = ((x5%x6)>>(x7<=x8));

    if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = 1;
	volatile uint8_t x18 = 4U;
	uint32_t x19 = 1U;
	uint64_t x20 = UINT64_MAX;
	int32_t t2 = 22227390;

    t2 = ((x17%x18)>>(x19<=x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MIN;
	volatile int32_t x22 = -1;
	static volatile uint64_t x23 = UINT64_MAX;
	int64_t t3 = -36049801230327LL;

    t3 = ((x21%x22)>>(x23<=x24));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = -487;
	static volatile int8_t x26 = -1;
	int32_t x28 = -1;
	volatile int32_t t4 = 37457;

    t4 = ((x25%x26)>>(x27<=x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x30 = 5LLU;
	volatile int32_t x31 = INT32_MIN;
	volatile uint16_t x32 = 2U;
	volatile uint64_t t5 = 65329LLU;

    t5 = ((x29%x30)>>(x31<=x32));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x37 = INT32_MAX;
	int32_t x39 = INT32_MAX;
	volatile int32_t x40 = -159330677;
	int32_t t6 = -3263188;

    t6 = ((x37%x38)>>(x39<=x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x41 = 0;
	uint32_t x43 = 161714U;
	volatile int32_t t7 = -7257;

    t7 = ((x41%x42)>>(x43<=x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x46 = 364446668U;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = 0U;

    t8 = ((x45%x46)>>(x47<=x48));

    if (t8 != 127U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x53 = 1058576LLU;
	int64_t x54 = INT64_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	uint64_t t9 = 225977106105928176LLU;

    t9 = ((x53%x54)>>(x55<=x56));

    if (t9 != 1058576LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = 1645526705356552330LLU;
	uint16_t x58 = 1U;
	uint64_t x59 = 720LLU;
	static int64_t x60 = INT64_MIN;
	uint64_t t10 = 36171LLU;

    t10 = ((x57%x58)>>(x59<=x60));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MAX;
	volatile int32_t x62 = -1;
	static volatile int8_t x64 = -1;
	int32_t t11 = 564066479;

    t11 = ((x61%x62)>>(x63<=x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x65 = 1147;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -1LL;
	int16_t x68 = INT16_MAX;
	int32_t t12 = 0;

    t12 = ((x65%x66)>>(x67<=x68));

    if (t12 != 573) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = -69219244490LL;
	static int8_t x70 = -1;
	uint8_t x72 = 43U;

    t13 = ((x69%x70)>>(x71<=x72));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x74 = -1;
	static int64_t x75 = INT64_MIN;
	int32_t x76 = -34;
	int32_t t14 = 2529;

    t14 = ((x73%x74)>>(x75<=x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = -1;
	int64_t x78 = -1LL;
	uint64_t x79 = 62175958097792LLU;
	volatile int64_t t15 = 3375017LL;

    t15 = ((x77%x78)>>(x79<=x80));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x85 = INT8_MIN;
	static uint64_t x86 = 627304066874040LLU;
	volatile int16_t x87 = -1;
	static volatile int64_t x88 = INT64_MAX;
	uint64_t t16 = 5780993677956901LLU;

    t16 = ((x85%x86)>>(x87<=x88));

    if (t16 != 120341605765624LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = INT32_MAX;
	int16_t x90 = INT16_MIN;
	int32_t x91 = -759;

    t17 = ((x89%x90)>>(x91<=x92));

    if (t17 != 16383) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x93 = 501808LLU;
	int8_t x94 = INT8_MAX;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 15U;
	uint64_t t18 = 3895717LLU;

    t18 = ((x93%x94)>>(x95<=x96));

    if (t18 != 15LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MIN;
	int16_t x104 = -3;
	static uint64_t t19 = 31LLU;

    t19 = ((x101%x102)>>(x103<=x104));

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = -408228386;
	volatile uint32_t x106 = UINT32_MAX;
	int8_t x107 = -1;
	uint32_t t20 = 15121U;

    t20 = ((x105%x106)>>(x107<=x108));

    if (t20 != 1943369455U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MAX;
	static int8_t x110 = -1;
	volatile uint16_t x111 = UINT16_MAX;
	int16_t x112 = -1;
	int32_t t21 = 1;

    t21 = ((x109%x110)>>(x111<=x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x113 = 0U;
	int64_t x114 = INT64_MIN;
	static int8_t x115 = -1;
	uint64_t x116 = 10LLU;

    t22 = ((x113%x114)>>(x115<=x116));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x118 = -1;
	int32_t x119 = INT32_MIN;
	int32_t t23 = 11787392;

    t23 = ((x117%x118)>>(x119<=x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x122 = 667U;
	int32_t x123 = INT32_MIN;

    t24 = ((x121%x122)>>(x123<=x124));

    if (t24 != 95U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x129 = 61484LLU;
	uint16_t x130 = 197U;
	volatile uint64_t x131 = 182407744613868347LLU;
	uint16_t x132 = 2U;
	volatile uint64_t t25 = 383655879726930579LLU;

    t25 = ((x129%x130)>>(x131<=x132));

    if (t25 != 20LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x133 = 2933U;
	int8_t x134 = 24;
	uint64_t x135 = 105239737207341LLU;
	volatile uint16_t x136 = 436U;
	volatile int32_t t26 = 54;

    t26 = ((x133%x134)>>(x135<=x136));

    if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x137 = INT64_MAX;
	int8_t x138 = 28;
	int8_t x139 = INT8_MAX;
	static int64_t x140 = -126LL;

    t27 = ((x137%x138)>>(x139<=x140));

    if (t27 != 7LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x141 = 0LLU;
	static int16_t x142 = INT16_MIN;
	uint32_t x144 = 2087U;

    t28 = ((x141%x142)>>(x143<=x144));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = INT16_MAX;
	int64_t x151 = -1LL;
	int32_t t29 = 1;

    t29 = ((x149%x150)>>(x151<=x152));

    if (t29 != 574) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x153 = 10U;
	static int32_t x154 = INT32_MIN;
	int32_t t30 = -45049;

    t30 = ((x153%x154)>>(x155<=x156));

    if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x157 = 0;
	uint32_t x159 = 95002096U;
	volatile int16_t x160 = INT16_MIN;
	int32_t t31 = 153;

    t31 = ((x157%x158)>>(x159<=x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x161 = 12U;
	static int64_t x162 = -16141607243921LL;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = INT16_MIN;
	int64_t t32 = -6260LL;

    t32 = ((x161%x162)>>(x163<=x164));

    if (t32 != 12LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x165 = UINT16_MAX;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MIN;
	volatile int32_t t33 = 2;

    t33 = ((x165%x166)>>(x167<=x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x169 = 0U;
	volatile uint8_t x170 = 58U;
	volatile int8_t x171 = 0;
	volatile int64_t x172 = INT64_MAX;
	volatile int32_t t34 = 1;

    t34 = ((x169%x170)>>(x171<=x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x177 = 24022086297LL;
	int16_t x178 = INT16_MIN;
	volatile int16_t x179 = -1;
	int16_t x180 = INT16_MAX;
	volatile int64_t t35 = -368900LL;

    t35 = ((x177%x178)>>(x179<=x180));

    if (t35 != 14668LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x181 = 1;
	static int16_t x182 = INT16_MIN;
	uint32_t x183 = UINT32_MAX;
	static uint64_t x184 = 1057008LLU;

    t36 = ((x181%x182)>>(x183<=x184));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x185 = 0U;
	volatile int64_t x188 = 16922909173260LL;
	uint32_t t37 = 26944954U;

    t37 = ((x185%x186)>>(x187<=x188));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = -1;
	int64_t x191 = 10LL;
	volatile uint32_t x192 = 22701U;
	int32_t t38 = -1886956;

    t38 = ((x189%x190)>>(x191<=x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 268;
	static int32_t x207 = INT32_MIN;
	int32_t x208 = -1;
	static int32_t t39 = 524211;

    t39 = ((x205%x206)>>(x207<=x208));

    if (t39 != 71) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x213 = UINT8_MAX;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = 441U;
	int8_t x216 = INT8_MIN;

    t40 = ((x213%x214)>>(x215<=x216));

    if (t40 != 255LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x221 = INT8_MAX;
	volatile uint64_t x223 = UINT64_MAX;
	int16_t x224 = -1;

    t41 = ((x221%x222)>>(x223<=x224));

    if (t41 != 63LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x229 = INT64_MAX;
	static int16_t x230 = 20;
	static volatile int32_t x231 = -1;
	int8_t x232 = -54;

    t42 = ((x229%x230)>>(x231<=x232));

    if (t42 != 7LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x237 = INT64_MIN;
	static uint64_t x238 = 23235803153691588LLU;
	static volatile uint16_t x239 = 7815U;
	int8_t x240 = INT8_MIN;
	uint64_t t43 = 298484367118391121LLU;

    t43 = ((x237%x238)>>(x239<=x240));

    if (t43 != 21993987992906960LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t44 = 709048;

    t44 = ((x241%x242)>>(x243<=x244));

    if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x245 = UINT64_MAX;
	static uint32_t x246 = 965570U;
	uint16_t x247 = 67U;
	int64_t x248 = INT64_MIN;
	volatile uint64_t t45 = 999717744654624LLU;

    t45 = ((x245%x246)>>(x247<=x248));

    if (t45 != 431775LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x257 = 77U;
	uint64_t x258 = 285297341724LLU;
	int32_t x259 = INT32_MIN;
	static int8_t x260 = -1;
	volatile uint64_t t46 = 415069023486099915LLU;

    t46 = ((x257%x258)>>(x259<=x260));

    if (t46 != 38LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x261 = 24982630064LL;
	volatile int8_t x262 = -1;
	int64_t x263 = INT64_MIN;
	int16_t x264 = INT16_MIN;
	int64_t t47 = -3691LL;

    t47 = ((x261%x262)>>(x263<=x264));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x266 = 7U;
	int64_t x267 = INT64_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t48 = -173;

    t48 = ((x265%x266)>>(x267<=x268));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -3280519LL;

    t49 = ((x269%x270)>>(x271<=x272));

    if (t49 != 65535U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x278 = 1U;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;
	volatile int32_t t50 = -12285;

    t50 = ((x277%x278)>>(x279<=x280));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = -1;
	int16_t x284 = INT16_MIN;
	int32_t t51 = 83047593;

    t51 = ((x281%x282)>>(x283<=x284));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x286 = 4U;
	static volatile int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t52 = -895;

    t52 = ((x285%x286)>>(x287<=x288));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x290 = 12U;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = 15;
	int32_t t53 = -608975;

    t53 = ((x289%x290)>>(x291<=x292));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x293 = -1LL;
	int8_t x294 = -1;
	static int32_t x295 = 7;
	int16_t x296 = INT16_MIN;
	static int64_t t54 = 3583569385LL;

    t54 = ((x293%x294)>>(x295<=x296));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x300 = UINT32_MAX;
	volatile int64_t t55 = -6LL;

    t55 = ((x297%x298)>>(x299<=x300));

    if (t55 != 3LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x305 = UINT64_MAX;
	volatile int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MAX;

    t56 = ((x305%x306)>>(x307<=x308));

    if (t56 != 3LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x309 = 1;
	volatile int64_t x310 = INT64_MAX;
	static int8_t x311 = INT8_MIN;
	static uint64_t x312 = 16076915LLU;
	volatile int64_t t57 = 41LL;

    t57 = ((x309%x310)>>(x311<=x312));

    if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x313 = UINT8_MAX;
	uint16_t x314 = 4752U;
	uint8_t x315 = 0U;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t58 = 3508316;

    t58 = ((x313%x314)>>(x315<=x316));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x317 = INT32_MAX;
	static int8_t x318 = 2;
	static int16_t x319 = INT16_MIN;
	volatile int32_t x320 = INT32_MAX;
	int32_t t59 = -371;

    t59 = ((x317%x318)>>(x319<=x320));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x321 = -1;
	int64_t x322 = -1LL;
	int32_t x323 = -66990136;
	volatile int64_t t60 = -844416026LL;

    t60 = ((x321%x322)>>(x323<=x324));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x326 = UINT64_MAX;
	volatile int8_t x327 = 0;
	volatile int16_t x328 = INT16_MAX;
	uint64_t t61 = 307149021093LLU;

    t61 = ((x325%x326)>>(x327<=x328));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x333 = -7442959;
	uint32_t x334 = 3371U;

    t62 = ((x333%x334)>>(x335<=x336));

    if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x337 = -3;
	volatile uint32_t x338 = 46U;
	volatile int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;
	static uint32_t t63 = 2858513U;

    t63 = ((x337%x338)>>(x339<=x340));

    if (t63 != 4U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x345 = INT8_MAX;
	int32_t x346 = INT32_MIN;
	static int32_t x347 = INT32_MIN;
	volatile int32_t t64 = -2;

    t64 = ((x345%x346)>>(x347<=x348));

    if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x357 = 1;
	int8_t x360 = INT8_MIN;
	uint32_t t65 = 325U;

    t65 = ((x357%x358)>>(x359<=x360));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x361 = 17U;
	uint32_t x362 = 1879U;
	int32_t x363 = INT32_MIN;
	static int64_t x364 = 3651LL;

    t66 = ((x361%x362)>>(x363<=x364));

    if (t66 != 8U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x365 = INT64_MAX;
	int8_t x367 = 1;
	int32_t x368 = 23;
	int64_t t67 = 23046LL;

    t67 = ((x365%x366)>>(x367<=x368));

    if (t67 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x373 = INT16_MIN;
	static int64_t x374 = -1LL;
	int16_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	volatile int64_t t68 = -183253509683760LL;

    t68 = ((x373%x374)>>(x375<=x376));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x377 = INT8_MAX;
	volatile int8_t x378 = INT8_MIN;
	static volatile int8_t x379 = -5;
	volatile int32_t t69 = 7029;

    t69 = ((x377%x378)>>(x379<=x380));

    if (t69 != 63) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x381 = INT16_MAX;
	static int16_t x382 = INT16_MAX;
	int16_t x383 = -29;
	static uint8_t x384 = UINT8_MAX;
	static int32_t t70 = -11777223;

    t70 = ((x381%x382)>>(x383<=x384));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	volatile int32_t t71 = 0;

    t71 = ((x385%x386)>>(x387<=x388));

    if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x393 = 7140U;
	int8_t x395 = -1;
	static int32_t x396 = INT32_MIN;
	static int64_t t72 = -109711563LL;

    t72 = ((x393%x394)>>(x395<=x396));

    if (t72 != 7140LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x401 = UINT8_MAX;
	int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MIN;

    t73 = ((x401%x402)>>(x403<=x404));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x409 = UINT16_MAX;
	int16_t x410 = -9817;
	volatile uint64_t x412 = 21180LLU;
	int32_t t74 = 7167;

    t74 = ((x409%x410)>>(x411<=x412));

    if (t74 != 3316) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x414 = 509963090LLU;
	static int32_t x415 = -2492;
	int8_t x416 = INT8_MIN;
	static uint64_t t75 = 139954662LLU;

    t75 = ((x413%x414)>>(x415<=x416));

    if (t75 != 218167486LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x418 = 1U;
	uint32_t t76 = 33U;

    t76 = ((x417%x418)>>(x419<=x420));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x423 = INT8_MAX;
	static int8_t x424 = 11;
	int64_t t77 = 176LL;

    t77 = ((x421%x422)>>(x423<=x424));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x429 = 16U;
	int32_t x430 = 58966;
	int16_t x431 = INT16_MAX;
	volatile uint8_t x432 = UINT8_MAX;
	int32_t t78 = -101988886;

    t78 = ((x429%x430)>>(x431<=x432));

    if (t78 != 16) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x433 = 3U;
	volatile uint32_t t79 = 22240U;

    t79 = ((x433%x434)>>(x435<=x436));

    if (t79 != 3U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x437 = INT32_MIN;
	int32_t x438 = -1;
	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MAX;
	int32_t t80 = -29838;

    t80 = ((x437%x438)>>(x439<=x440));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x447 = 460LLU;
	static uint8_t x448 = 0U;
	uint32_t t81 = 14U;

    t81 = ((x445%x446)>>(x447<=x448));

    if (t81 != 201U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x449 = 1268LL;
	uint16_t x450 = 1055U;
	volatile uint8_t x451 = UINT8_MAX;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int64_t t82 = -58LL;

    t82 = ((x449%x450)>>(x451<=x452));

    if (t82 != 106LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x453 = 1U;
	int64_t x456 = INT64_MIN;
	static volatile int32_t t83 = -134;

    t83 = ((x453%x454)>>(x455<=x456));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x458 = 451581985064LLU;
	int16_t x460 = 524;
	volatile uint64_t t84 = 99875797808015181LLU;

    t84 = ((x457%x458)>>(x459<=x460));

    if (t84 != 107938287742LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x461 = 47U;
	static uint32_t x463 = 120U;
	volatile int32_t x464 = -5441440;
	volatile int32_t t85 = -24;

    t85 = ((x461%x462)>>(x463<=x464));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x465 = UINT16_MAX;
	int64_t x466 = -1LL;
	static int16_t x467 = -1;
	int32_t x468 = -1;
	volatile int64_t t86 = 233LL;

    t86 = ((x465%x466)>>(x467<=x468));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x469 = INT16_MIN;
	static uint64_t x471 = 25359665609247LLU;
	static uint32_t x472 = 1485U;
	volatile int32_t t87 = -6624;

    t87 = ((x469%x470)>>(x471<=x472));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x473 = 71416832U;
	int16_t x474 = 412;
	static volatile int32_t x475 = -1;
	int64_t x476 = INT64_MAX;
	static volatile uint32_t t88 = 1593917U;

    t88 = ((x473%x474)>>(x475<=x476));

    if (t88 != 170U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x477 = INT32_MIN;
	static volatile uint32_t x478 = 67360879U;
	static uint64_t x479 = 24LLU;
	static volatile uint32_t t89 = 73U;

    t89 = ((x477%x478)>>(x479<=x480));

    if (t89 != 29648199U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x481 = -1032251486164719371LL;
	uint64_t x482 = UINT64_MAX;
	static uint16_t x483 = UINT16_MAX;
	int64_t x484 = INT64_MIN;
	volatile uint64_t t90 = 88461LLU;

    t90 = ((x481%x482)>>(x483<=x484));

    if (t90 != 17414492587544832245LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x485 = 2840LLU;
	static int64_t x487 = -202758165574LL;
	uint16_t x488 = UINT16_MAX;
	uint64_t t91 = 46531LLU;

    t91 = ((x485%x486)>>(x487<=x488));

    if (t91 != 32LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x493 = INT64_MIN;
	int64_t x494 = -1LL;
	uint64_t x495 = 1LLU;
	int16_t x496 = 0;
	int64_t t92 = -3526861400LL;

    t92 = ((x493%x494)>>(x495<=x496));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x501 = 6U;
	uint8_t x502 = 56U;
	static int8_t x503 = 1;
	int64_t x504 = INT64_MIN;
	static volatile int32_t t93 = -679;

    t93 = ((x501%x502)>>(x503<=x504));

    if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x505 = UINT64_MAX;
	volatile int32_t x506 = INT32_MIN;
	int16_t x508 = INT16_MIN;
	static volatile uint64_t t94 = 556458LLU;

    t94 = ((x505%x506)>>(x507<=x508));

    if (t94 != 2147483647LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x509 = 1523U;
	uint32_t x510 = 12169U;
	uint32_t x511 = UINT32_MAX;
	int64_t x512 = INT64_MIN;
	volatile uint32_t t95 = 50U;

    t95 = ((x509%x510)>>(x511<=x512));

    if (t95 != 1523U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x513 = 0U;
	volatile uint64_t x514 = UINT64_MAX;
	int8_t x515 = INT8_MIN;
	int8_t x516 = -59;
	volatile uint64_t t96 = 44119947967746LLU;

    t96 = ((x513%x514)>>(x515<=x516));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x517 = 62;
	int8_t x518 = INT8_MAX;
	uint64_t x520 = 27426935796806198LLU;
	volatile int32_t t97 = -7593;

    t97 = ((x517%x518)>>(x519<=x520));

    if (t97 != 62) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x521 = 201U;
	volatile int16_t x522 = -524;
	int8_t x524 = -1;
	volatile int32_t t98 = 255141;

    t98 = ((x521%x522)>>(x523<=x524));

    if (t98 != 201) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x525 = 107466685624693LLU;
	int16_t x526 = 117;
	int16_t x527 = INT16_MAX;
	uint16_t x528 = 722U;
	uint64_t t99 = 426526LLU;

    t99 = ((x525%x526)>>(x527<=x528));

    if (t99 != 109LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x529 = 17604651783861186LL;
	volatile int16_t x530 = INT16_MIN;
	int64_t x531 = -1LL;
	static uint64_t x532 = UINT64_MAX;

    t100 = ((x529%x530)>>(x531<=x532));

    if (t100 != 6625LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x545 = 3491U;
	volatile uint16_t x546 = 913U;
	static volatile int32_t x547 = -22098953;
	uint64_t x548 = 38897991914122LLU;
	volatile uint32_t t101 = 79193U;

    t101 = ((x545%x546)>>(x547<=x548));

    if (t101 != 752U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x550 = UINT64_MAX;
	static int32_t x551 = INT32_MAX;
	volatile uint64_t t102 = 50092410110LLU;

    t102 = ((x549%x550)>>(x551<=x552));

    if (t102 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x553 = UINT32_MAX;
	static int32_t x554 = -1;
	uint32_t t103 = 366828U;

    t103 = ((x553%x554)>>(x555<=x556));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x561 = 44298934LLU;
	int32_t x564 = -1;
	uint64_t t104 = 726LLU;

    t104 = ((x561%x562)>>(x563<=x564));

    if (t104 != 22149467LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x565 = UINT64_MAX;
	uint32_t x568 = 4478682U;
	uint64_t t105 = 75082703300541LLU;

    t105 = ((x565%x566)>>(x567<=x568));

    if (t105 != 2239LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x573 = 4640U;
	int16_t x574 = INT16_MAX;
	uint32_t x575 = 102772U;
	int64_t x576 = INT64_MIN;
	volatile int32_t t106 = 1280;

    t106 = ((x573%x574)>>(x575<=x576));

    if (t106 != 4640) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x577 = INT8_MAX;
	int32_t x578 = INT32_MIN;
	static uint8_t x579 = 2U;
	int32_t x580 = INT32_MIN;
	static volatile int32_t t107 = 684;

    t107 = ((x577%x578)>>(x579<=x580));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = -1;
	static volatile int64_t x583 = 1832327598640825963LL;
	static volatile int16_t x584 = INT16_MAX;

    t108 = ((x581%x582)>>(x583<=x584));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x585 = 2U;
	static uint32_t x586 = UINT32_MAX;
	static uint8_t x587 = 1U;
	int64_t x588 = -1LL;
	uint32_t t109 = 0U;

    t109 = ((x585%x586)>>(x587<=x588));

    if (t109 != 2U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x597 = 100495LL;
	int64_t x598 = INT64_MIN;
	static uint8_t x599 = UINT8_MAX;
	static volatile int16_t x600 = INT16_MIN;
	volatile int64_t t110 = 1315815436LL;

    t110 = ((x597%x598)>>(x599<=x600));

    if (t110 != 100495LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x601 = 2238;
	int64_t x602 = INT64_MIN;
	int8_t x603 = -1;
	volatile uint64_t x604 = UINT64_MAX;
	int64_t t111 = -50559930575993193LL;

    t111 = ((x601%x602)>>(x603<=x604));

    if (t111 != 1119LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x605 = UINT64_MAX;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 4U;
	uint64_t t112 = 7107288296282614846LLU;

    t112 = ((x605%x606)>>(x607<=x608));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x609 = INT32_MAX;
	int64_t x610 = -1LL;
	int32_t x612 = INT32_MIN;

    t113 = ((x609%x610)>>(x611<=x612));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x613 = 0LLU;
	int32_t x614 = -1;
	static int8_t x615 = -2;
	int64_t x616 = -1LL;
	uint64_t t114 = 128LLU;

    t114 = ((x613%x614)>>(x615<=x616));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x617 = 266460508LLU;
	static volatile int64_t x619 = -12236100411881065LL;
	uint64_t t115 = 1701LLU;

    t115 = ((x617%x618)>>(x619<=x620));

    if (t115 != 133230254LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x621 = INT8_MAX;
	int16_t x622 = INT16_MIN;
	static int8_t x624 = -9;

    t116 = ((x621%x622)>>(x623<=x624));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x625 = 1;
	uint16_t x626 = 1274U;
	volatile int32_t x627 = INT32_MAX;
	int64_t x628 = -543LL;

    t117 = ((x625%x626)>>(x627<=x628));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x629 = 41;
	int64_t x630 = -1LL;
	int8_t x632 = -1;
	volatile int64_t t118 = 23382910112488823LL;

    t118 = ((x629%x630)>>(x631<=x632));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x633 = INT16_MAX;
	uint8_t x634 = 2U;
	int8_t x635 = INT8_MIN;
	int8_t x636 = -2;
	int32_t t119 = 30389;

    t119 = ((x633%x634)>>(x635<=x636));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x642 = INT32_MIN;
	volatile int32_t t120 = 0;

    t120 = ((x641%x642)>>(x643<=x644));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x657 = INT64_MIN;
	volatile int64_t x658 = INT64_MIN;
	uint16_t x660 = UINT16_MAX;
	volatile int64_t t121 = -2123379993968700LL;

    t121 = ((x657%x658)>>(x659<=x660));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x661 = INT64_MIN;
	int32_t x663 = -1;

    t122 = ((x661%x662)>>(x663<=x664));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x665 = INT64_MIN;
	int64_t x666 = -1LL;
	int64_t x667 = INT64_MIN;
	int64_t t123 = 23138420LL;

    t123 = ((x665%x666)>>(x667<=x668));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x669 = 32U;
	uint8_t x670 = UINT8_MAX;
	static int32_t x671 = -1;
	volatile uint32_t x672 = 24U;
	int32_t t124 = 5;

    t124 = ((x669%x670)>>(x671<=x672));

    if (t124 != 32) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x673 = 1109327524470638134LLU;
	static int16_t x674 = 55;
	int64_t x676 = -1LL;
	volatile uint64_t t125 = 1795296LLU;

    t125 = ((x673%x674)>>(x675<=x676));

    if (t125 != 12LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x677 = UINT8_MAX;
	int8_t x678 = INT8_MAX;
	volatile uint32_t x680 = 9U;
	int32_t t126 = 0;

    t126 = ((x677%x678)>>(x679<=x680));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x681 = 406;
	int32_t x682 = 66212;
	int64_t x684 = -1LL;
	int32_t t127 = -1;

    t127 = ((x681%x682)>>(x683<=x684));

    if (t127 != 203) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x685 = INT8_MAX;
	volatile int64_t x687 = INT64_MIN;
	volatile int32_t t128 = -41182;

    t128 = ((x685%x686)>>(x687<=x688));

    if (t128 != 63) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x689 = 6U;
	uint8_t x692 = 0U;
	static volatile uint32_t t129 = 20378U;

    t129 = ((x689%x690)>>(x691<=x692));

    if (t129 != 6U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x693 = 17942U;
	volatile int16_t x694 = -387;
	volatile int64_t x695 = -1LL;
	volatile uint8_t x696 = UINT8_MAX;
	static volatile int32_t t130 = 30425401;

    t130 = ((x693%x694)>>(x695<=x696));

    if (t130 != 70) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x697 = 8;
	uint16_t x698 = 804U;
	int32_t x699 = INT32_MAX;
	int32_t x700 = INT32_MIN;
	int32_t t131 = 0;

    t131 = ((x697%x698)>>(x699<=x700));

    if (t131 != 8) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x705 = 0;
	uint64_t x706 = UINT64_MAX;
	volatile int8_t x708 = -1;
	static volatile uint64_t t132 = 44602970873780396LLU;

    t132 = ((x705%x706)>>(x707<=x708));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x713 = 4U;
	volatile int16_t x714 = -1924;
	static int16_t x715 = -26;
	static int32_t t133 = 1890;

    t133 = ((x713%x714)>>(x715<=x716));

    if (t133 != 4) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x725 = -1LL;
	uint64_t x726 = 13783306509466726LLU;
	static uint16_t x728 = 1U;
	uint64_t t134 = 680452247921673057LLU;

    t134 = ((x725%x726)>>(x727<=x728));

    if (t134 != 2339982021536113LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x729 = 118LL;
	int16_t x730 = INT16_MIN;
	uint16_t x731 = 43U;
	volatile int64_t t135 = 40LL;

    t135 = ((x729%x730)>>(x731<=x732));

    if (t135 != 59LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x739 = INT8_MAX;
	int32_t t136 = 50110;

    t136 = ((x737%x738)>>(x739<=x740));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x745 = UINT16_MAX;
	uint16_t x746 = 8206U;
	static int16_t x747 = -8;
	int32_t t137 = 797024;

    t137 = ((x745%x746)>>(x747<=x748));

    if (t137 != 4046) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x749 = -72850480386120LL;
	static uint32_t x751 = UINT32_MAX;
	volatile int64_t t138 = 44987LL;

    t138 = ((x749%x750)>>(x751<=x752));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x753 = UINT32_MAX;
	static int64_t x755 = INT64_MIN;
	int64_t x756 = INT64_MIN;

    t139 = ((x753%x754)>>(x755<=x756));

    if (t139 != 63U) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x765 = INT32_MAX;
	volatile uint32_t x766 = 3955U;
	uint32_t x767 = 5904000U;
	int16_t x768 = INT16_MAX;
	static uint32_t t140 = 808330750U;

    t140 = ((x765%x766)>>(x767<=x768));

    if (t140 != 1702U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x769 = 350;
	uint32_t x771 = UINT32_MAX;
	int64_t x772 = 713LL;

    t141 = ((x769%x770)>>(x771<=x772));

    if (t141 != 350) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x773 = INT32_MAX;
	int32_t x775 = 3115;
	int64_t x776 = -3LL;

    t142 = ((x773%x774)>>(x775<=x776));

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x781 = UINT8_MAX;
	uint8_t x782 = 20U;
	static volatile uint16_t x783 = 11677U;
	int32_t x784 = 1935;
	int32_t t143 = 1915250;

    t143 = ((x781%x782)>>(x783<=x784));

    if (t143 != 15) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x785 = 2114850LLU;
	int16_t x786 = -1;
	volatile uint64_t x787 = 16485613150709LLU;
	uint64_t x788 = UINT64_MAX;
	volatile uint64_t t144 = 97544962611705LLU;

    t144 = ((x785%x786)>>(x787<=x788));

    if (t144 != 1057425LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x793 = INT64_MAX;
	int32_t x794 = INT32_MAX;
	volatile int64_t x795 = INT64_MAX;
	uint64_t x796 = UINT64_MAX;
	static int64_t t145 = 13LL;

    t145 = ((x793%x794)>>(x795<=x796));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x797 = INT8_MAX;
	int32_t x798 = -75;
	static uint32_t x799 = 139810U;
	static int32_t x800 = INT32_MAX;

    t146 = ((x797%x798)>>(x799<=x800));

    if (t146 != 26) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x801 = INT64_MIN;
	volatile int8_t x802 = 1;
	uint8_t x803 = UINT8_MAX;
	int8_t x804 = -5;
	int64_t t147 = 113199430LL;

    t147 = ((x801%x802)>>(x803<=x804));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x805 = 54707655U;
	int32_t x807 = INT32_MIN;
	uint64_t x808 = UINT64_MAX;
	volatile int64_t t148 = 28685489918150963LL;

    t148 = ((x805%x806)>>(x807<=x808));

    if (t148 != 27LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x813 = INT32_MAX;
	uint32_t x814 = UINT32_MAX;
	volatile int32_t x815 = 1;
	static int16_t x816 = INT16_MIN;

    t149 = ((x813%x814)>>(x815<=x816));

    if (t149 != 2147483647U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x821 = 144626258480433LLU;
	int64_t x822 = INT64_MAX;
	uint8_t x823 = 3U;
	static uint8_t x824 = 3U;
	uint64_t t150 = 593LLU;

    t150 = ((x821%x822)>>(x823<=x824));

    if (t150 != 72313129240216LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x837 = INT8_MAX;
	int16_t x838 = INT16_MAX;
	int16_t x839 = -1;
	volatile int32_t x840 = -1;
	volatile int32_t t151 = -1;

    t151 = ((x837%x838)>>(x839<=x840));

    if (t151 != 63) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x845 = -1;
	int32_t x847 = -378884877;
	uint64_t x848 = 341576891858LLU;
	volatile uint32_t t152 = 762545U;

    t152 = ((x845%x846)>>(x847<=x848));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x849 = 534591083414LLU;
	uint32_t x851 = 0U;
	uint64_t t153 = 3219378094LLU;

    t153 = ((x849%x850)>>(x851<=x852));

    if (t153 != 8LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x853 = 127U;
	int64_t x854 = INT64_MIN;
	int64_t t154 = -1506723900330192LL;

    t154 = ((x853%x854)>>(x855<=x856));

    if (t154 != 127LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x857 = 66836945LLU;
	uint16_t x858 = 20U;
	int8_t x859 = 7;
	uint64_t t155 = 1080225736782133419LLU;

    t155 = ((x857%x858)>>(x859<=x860));

    if (t155 != 2LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x867 = -10853;
	int32_t x868 = INT32_MIN;
	volatile int64_t t156 = 444826185641240348LL;

    t156 = ((x865%x866)>>(x867<=x868));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x869 = 1500313593U;
	static int8_t x870 = -1;
	int32_t x871 = -1;
	int8_t x872 = INT8_MIN;

    t157 = ((x869%x870)>>(x871<=x872));

    if (t157 != 1500313593U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x873 = INT16_MAX;
	int8_t x874 = INT8_MAX;
	int8_t x875 = 1;
	int16_t x876 = -4921;
	volatile int32_t t158 = 6;

    t158 = ((x873%x874)>>(x875<=x876));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x879 = 248342227LLU;
	uint32_t x880 = 6367999U;
	uint32_t t159 = 206U;

    t159 = ((x877%x878)>>(x879<=x880));

    if (t159 != 127U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x881 = 1U;
	volatile uint16_t x882 = 12U;
	int64_t x883 = INT64_MAX;
	int16_t x884 = 14525;
	static int32_t t160 = 6;

    t160 = ((x881%x882)>>(x883<=x884));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x889 = UINT32_MAX;
	uint32_t x891 = 524597406U;
	static int8_t x892 = INT8_MAX;
	volatile uint32_t t161 = 1682015740U;

    t161 = ((x889%x890)>>(x891<=x892));

    if (t161 != 127U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x897 = INT64_MIN;
	int16_t x898 = INT16_MIN;
	int16_t x899 = INT16_MIN;
	volatile uint8_t x900 = UINT8_MAX;
	int64_t t162 = -252147299615637LL;

    t162 = ((x897%x898)>>(x899<=x900));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x902 = UINT64_MAX;
	static uint64_t t163 = 1518856503552898622LLU;

    t163 = ((x901%x902)>>(x903<=x904));

    if (t163 != 1236LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x921 = 36U;
	static int64_t x922 = -174LL;
	static int64_t x923 = INT64_MIN;
	int64_t x924 = -1LL;
	volatile int64_t t164 = -58LL;

    t164 = ((x921%x922)>>(x923<=x924));

    if (t164 != 18LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x925 = 10U;
	int8_t x926 = -1;
	volatile uint16_t x927 = 2U;
	int16_t x928 = -413;
	static int32_t t165 = -578458420;

    t165 = ((x925%x926)>>(x927<=x928));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x933 = -1;
	volatile int32_t x934 = -1;
	uint8_t x935 = 3U;
	int32_t x936 = INT32_MIN;
	int32_t t166 = 39;

    t166 = ((x933%x934)>>(x935<=x936));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x938 = 1941372323LLU;
	uint64_t t167 = 884LLU;

    t167 = ((x937%x938)>>(x939<=x940));

    if (t167 != 675843050LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x941 = 30U;
	int32_t x942 = INT32_MIN;
	int64_t x944 = -1LL;

    t168 = ((x941%x942)>>(x943<=x944));

    if (t168 != 30) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x945 = 11;
	int8_t x947 = INT8_MIN;
	int32_t x948 = INT32_MIN;
	static int32_t t169 = 29596718;

    t169 = ((x945%x946)>>(x947<=x948));

    if (t169 != 11) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x949 = UINT64_MAX;
	int32_t x950 = INT32_MIN;
	volatile uint64_t x951 = UINT64_MAX;
	int8_t x952 = INT8_MIN;
	volatile uint64_t t170 = 232267679LLU;

    t170 = ((x949%x950)>>(x951<=x952));

    if (t170 != 2147483647LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x953 = INT32_MAX;
	int64_t x954 = INT64_MIN;
	int32_t x955 = INT32_MIN;
	int8_t x956 = 4;

    t171 = ((x953%x954)>>(x955<=x956));

    if (t171 != 1073741823LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x957 = INT32_MAX;
	static int64_t x959 = -1246411LL;
	uint16_t x960 = 9U;
	volatile int64_t t172 = -3106LL;

    t172 = ((x957%x958)>>(x959<=x960));

    if (t172 != 140LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x961 = -500559507;
	uint64_t x962 = 20404452674776LLU;
	static int32_t x963 = -22692082;
	uint64_t t173 = 5042460820LLU;

    t173 = ((x961%x962)>>(x963<=x964));

    if (t173 != 8507383525102LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x966 = UINT32_MAX;
	static int16_t x967 = -5250;
	volatile int16_t x968 = INT16_MIN;
	volatile uint32_t t174 = 504853766U;

    t174 = ((x965%x966)>>(x967<=x968));

    if (t174 != 4294785446U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x969 = INT32_MIN;
	static int16_t x970 = INT16_MIN;
	int8_t x971 = -3;
	volatile uint64_t x972 = UINT64_MAX;
	int32_t t175 = -1;

    t175 = ((x969%x970)>>(x971<=x972));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x985 = 3021367316307LLU;
	int16_t x986 = -1;
	uint32_t x987 = 343301329U;
	int32_t x988 = INT32_MIN;

    t176 = ((x985%x986)>>(x987<=x988));

    if (t176 != 1510683658153LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x989 = INT64_MAX;
	int8_t x990 = -1;
	int16_t x991 = -1;
	int16_t x992 = INT16_MAX;

    t177 = ((x989%x990)>>(x991<=x992));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x993 = 2U;
	uint16_t x994 = UINT16_MAX;
	uint32_t x995 = UINT32_MAX;
	static int64_t x996 = -1LL;

    t178 = ((x993%x994)>>(x995<=x996));

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x997 = 3;
	uint64_t x998 = 5LLU;
	int16_t x999 = 6370;
	uint16_t x1000 = 9710U;
	static volatile uint64_t t179 = 1670679078841LLU;

    t179 = ((x997%x998)>>(x999<=x1000));

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1005 = 545897;
	volatile uint8_t x1006 = 126U;
	uint8_t x1007 = UINT8_MAX;
	volatile int32_t t180 = 2722345;

    t180 = ((x1005%x1006)>>(x1007<=x1008));

    if (t180 != 65) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1009 = UINT8_MAX;
	static int32_t x1010 = INT32_MIN;
	volatile int8_t x1011 = INT8_MIN;
	int8_t x1012 = INT8_MIN;
	static int32_t t181 = 196946;

    t181 = ((x1009%x1010)>>(x1011<=x1012));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1021 = -5;
	int64_t x1022 = -1LL;
	static int32_t x1023 = -25006;
	volatile int64_t t182 = 5632219164517099LL;

    t182 = ((x1021%x1022)>>(x1023<=x1024));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1025 = UINT8_MAX;
	int64_t x1026 = INT64_MIN;
	static int16_t x1027 = 0;
	static uint8_t x1028 = UINT8_MAX;
	volatile int64_t t183 = 0LL;

    t183 = ((x1025%x1026)>>(x1027<=x1028));

    if (t183 != 127LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1029 = 50U;
	int32_t x1032 = -583706;
	int32_t t184 = 12821894;

    t184 = ((x1029%x1030)>>(x1031<=x1032));

    if (t184 != 50) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1037 = INT16_MAX;
	int64_t x1038 = INT64_MIN;
	static int64_t x1039 = INT64_MAX;
	static volatile uint16_t x1040 = 2U;
	static volatile int64_t t185 = 5406364051LL;

    t185 = ((x1037%x1038)>>(x1039<=x1040));

    if (t185 != 32767LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1041 = INT16_MIN;
	int8_t x1042 = INT8_MIN;
	volatile int16_t x1043 = INT16_MIN;
	static int8_t x1044 = INT8_MIN;
	volatile int32_t t186 = 2;

    t186 = ((x1041%x1042)>>(x1043<=x1044));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1048 = INT8_MIN;

    t187 = ((x1045%x1046)>>(x1047<=x1048));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x1054 = 972435U;
	int32_t x1055 = INT32_MAX;
	int64_t x1056 = INT64_MIN;
	static volatile uint32_t t188 = 205U;

    t188 = ((x1053%x1054)>>(x1055<=x1056));

    if (t188 != 303U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1057 = INT32_MIN;
	static volatile int16_t x1058 = INT16_MIN;
	uint8_t x1059 = 26U;
	int8_t x1060 = INT8_MIN;
	volatile int32_t t189 = 11070263;

    t189 = ((x1057%x1058)>>(x1059<=x1060));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1061 = INT16_MIN;
	uint64_t x1062 = UINT64_MAX;
	volatile int16_t x1064 = -1;
	static volatile uint64_t t190 = 9331774046LLU;

    t190 = ((x1061%x1062)>>(x1063<=x1064));

    if (t190 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1065 = UINT16_MAX;
	static int16_t x1066 = INT16_MIN;
	static int64_t x1067 = 402052739LL;
	int32_t t191 = -119518;

    t191 = ((x1065%x1066)>>(x1067<=x1068));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1069 = 45;
	uint64_t x1070 = UINT64_MAX;
	static int16_t x1071 = INT16_MAX;
	uint8_t x1072 = UINT8_MAX;
	static uint64_t t192 = 47LLU;

    t192 = ((x1069%x1070)>>(x1071<=x1072));

    if (t192 != 45LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x1077 = 8054547LLU;
	uint64_t x1079 = 301LLU;
	int32_t x1080 = -1;

    t193 = ((x1077%x1078)>>(x1079<=x1080));

    if (t193 != 4027273LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1085 = 1U;
	volatile int64_t x1086 = -1LL;
	uint64_t x1087 = 1818LLU;
	uint32_t x1088 = 5U;
	volatile int64_t t194 = -127617388LL;

    t194 = ((x1085%x1086)>>(x1087<=x1088));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1089 = INT16_MAX;
	int16_t x1090 = 1;
	int8_t x1091 = INT8_MIN;
	uint32_t x1092 = 126U;

    t195 = ((x1089%x1090)>>(x1091<=x1092));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1093 = 1865394991350503LLU;
	int32_t x1094 = -1;
	uint64_t x1096 = 10738416510512175LLU;
	volatile uint64_t t196 = 7LLU;

    t196 = ((x1093%x1094)>>(x1095<=x1096));

    if (t196 != 1865394991350503LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1101 = INT8_MIN;
	static volatile int16_t x1103 = -1;
	int16_t x1104 = INT16_MIN;
	static volatile uint64_t t197 = 51654LLU;

    t197 = ((x1101%x1102)>>(x1103<=x1104));

    if (t197 != 34765153430746LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x1105 = UINT16_MAX;
	static int32_t x1106 = INT32_MIN;
	int32_t x1107 = INT32_MIN;
	int8_t x1108 = -10;
	volatile int32_t t198 = 488;

    t198 = ((x1105%x1106)>>(x1107<=x1108));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1109 = 1834U;
	volatile int64_t x1111 = INT64_MIN;
	volatile int64_t x1112 = -2163307096455003640LL;
	int32_t t199 = 68765250;

    t199 = ((x1109%x1110)>>(x1111<=x1112));

    if (t199 != 37) { NG(); } else { ; }
	
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

