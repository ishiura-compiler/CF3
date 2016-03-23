
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

int32_t x4 = INT32_MIN;
int16_t x10 = -643;
volatile int32_t x11 = INT32_MAX;
volatile int32_t x12 = -10;
static int64_t x13 = INT64_MIN;
int8_t x14 = INT8_MAX;
int8_t x16 = 0;
int64_t t4 = -1701LL;
int16_t x23 = 308;
uint16_t x26 = 0U;
int64_t t6 = INT64_MIN;
static volatile uint16_t x31 = UINT16_MAX;
static int64_t x35 = -1LL;
int64_t t8 = 515891969573LL;
uint32_t x41 = UINT32_MAX;
volatile uint64_t x45 = 867368LLU;
uint32_t x51 = 277211884U;
int32_t x54 = -35;
int8_t x56 = -2;
int8_t x88 = INT8_MIN;
static volatile int8_t x89 = -12;
volatile int8_t x92 = -6;
static volatile uint32_t t21 = 2073337U;
volatile uint32_t t25 = 3724869U;
volatile int64_t x110 = INT64_MAX;
int8_t x117 = -16;
int64_t x125 = INT64_MAX;
int32_t x131 = INT32_MAX;
int8_t x134 = INT8_MIN;
int8_t x146 = INT8_MIN;
static int16_t x148 = -1;
uint8_t x151 = 1U;
static volatile int64_t x158 = INT64_MIN;
static uint64_t x160 = UINT64_MAX;
int32_t x163 = -1;
int32_t x164 = -1;
int8_t x165 = -1;
int64_t x167 = -1LL;
static int32_t x168 = -1;
uint32_t x169 = UINT32_MAX;
uint8_t x170 = UINT8_MAX;
int16_t x171 = -1;
int32_t x173 = INT32_MAX;
volatile uint8_t x180 = 10U;
volatile int32_t t43 = -18464432;
volatile int32_t t45 = 972;
uint8_t x193 = 0U;
static volatile int32_t t48 = INT32_MIN;
volatile int8_t x201 = -1;
int64_t t49 = 1728LL;
uint8_t x210 = UINT8_MAX;
volatile uint16_t x212 = 1U;
static volatile int8_t x213 = INT8_MAX;
static int8_t x215 = -27;
uint8_t x217 = 24U;
uint16_t x219 = 365U;
static uint8_t x220 = 67U;
int32_t t53 = -12646;
int32_t x226 = -1;
uint64_t t57 = 30997153688000828LLU;
int64_t x237 = -429538782792537237LL;
uint32_t x241 = 1U;
uint8_t x243 = UINT8_MAX;
uint64_t x251 = 145263079476016LLU;
static int32_t x253 = 20;
int32_t x268 = -1;
volatile int8_t x278 = INT8_MAX;
static volatile uint64_t t67 = 85LLU;
uint8_t x281 = 6U;
volatile int64_t x289 = INT64_MIN;
uint16_t x291 = 2U;
int64_t x292 = INT64_MAX;
static uint8_t x295 = 1U;
int16_t x299 = INT16_MIN;
int32_t x305 = 6570;
int16_t x306 = INT16_MIN;
static uint8_t x310 = 21U;
volatile int32_t x312 = INT32_MIN;
volatile uint8_t x318 = 6U;
volatile int32_t x331 = -1;
volatile uint32_t t80 = 45899769U;
int64_t x333 = INT64_MIN;
static uint16_t x335 = UINT16_MAX;
uint16_t x338 = 2088U;
volatile int64_t x345 = 1LL;
volatile int8_t x352 = 6;
volatile int32_t t85 = 487;
int64_t t86 = 119669408448891LL;
uint32_t x369 = UINT32_MAX;
static uint64_t x370 = 3884024200533255953LLU;
int64_t x371 = INT64_MIN;
int64_t t90 = INT64_MIN;
volatile uint64_t t91 = 27954057500273303LLU;
int16_t x388 = INT16_MAX;
static int64_t t94 = 426963984824240LL;
int64_t x393 = -37069283LL;
int32_t t95 = -40419167;
static int32_t x397 = -54;
int32_t x402 = -83434463;
uint32_t t97 = 195U;
int8_t x410 = 1;
int64_t x417 = INT64_MAX;
volatile int8_t x418 = 22;
int32_t t100 = -7015451;
int8_t x421 = INT8_MAX;
uint16_t x428 = 4400U;
static volatile int32_t t103 = INT32_MIN;
int32_t x434 = INT32_MIN;
uint8_t x439 = 25U;
int16_t x445 = -302;
uint16_t x455 = UINT16_MAX;
uint64_t x460 = UINT64_MAX;
int32_t x463 = INT32_MIN;
static volatile int16_t x465 = INT16_MAX;
uint64_t x467 = UINT64_MAX;
int8_t x473 = 2;
int32_t t117 = -527637;
int8_t x489 = 30;
static uint16_t x493 = 228U;
int64_t x496 = INT64_MIN;
static int32_t t122 = 1;
static volatile int8_t x510 = -1;
static int16_t x515 = INT16_MAX;
volatile uint16_t x516 = 28019U;
static uint32_t x520 = UINT32_MAX;
int64_t x525 = INT64_MIN;
volatile uint32_t x527 = 699850U;
static uint32_t x531 = UINT32_MAX;
uint32_t t128 = 2U;
static uint16_t x534 = 1113U;
static uint8_t x539 = UINT8_MAX;
uint8_t x540 = 51U;
int8_t x542 = INT8_MAX;
int16_t x551 = INT16_MAX;
int32_t x568 = INT32_MIN;
volatile int64_t x569 = INT64_MAX;
int32_t x570 = INT32_MIN;
uint16_t x571 = UINT16_MAX;
volatile int64_t x577 = 253339LL;
volatile uint16_t x584 = 73U;
uint64_t x588 = UINT64_MAX;
static volatile int32_t t143 = -93554170;
int8_t x597 = INT8_MAX;
uint64_t t145 = 77751866LLU;
volatile int32_t t146 = -35198128;
uint32_t x617 = 15643671U;
int8_t x621 = 1;
static int64_t x624 = 1LL;
static int64_t t151 = 837326817856825LL;
uint16_t x626 = 367U;
int32_t x630 = 227;
int8_t x644 = INT8_MAX;
static uint32_t t158 = 82344938U;
volatile int32_t x653 = -1;
uint16_t x662 = 6957U;
int32_t x665 = INT32_MIN;
int32_t t162 = 5487;
int32_t x675 = INT32_MAX;
static int16_t x676 = INT16_MIN;
static int32_t x679 = INT32_MAX;
int32_t x680 = -1;
uint32_t x683 = UINT32_MAX;
uint8_t x684 = 5U;
int32_t x690 = INT32_MAX;
int32_t t167 = 0;
int64_t x693 = 21415411LL;
int32_t x698 = INT32_MAX;
static int64_t x699 = -1LL;
int8_t x700 = INT8_MAX;
static int32_t x702 = INT32_MIN;
int16_t x706 = 149;
int32_t t171 = -1407;
uint8_t x712 = 36U;
int32_t t173 = -19;
int16_t x717 = INT16_MIN;
int32_t x718 = -8155299;
int64_t x739 = INT64_MIN;
static volatile int64_t t179 = -1732973092823LL;
int64_t x752 = INT64_MAX;
int32_t t184 = -1001163558;
volatile uint8_t x771 = 44U;
int8_t x772 = -1;
int8_t x787 = -1;
static volatile int16_t x789 = -4;
int32_t x796 = INT32_MIN;
int16_t x801 = -5321;
int16_t x802 = INT16_MAX;
static int64_t x803 = INT64_MIN;
static int8_t x818 = INT8_MIN;
int8_t x819 = INT8_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static uint64_t x2 = UINT64_MAX;
	int16_t x3 = INT16_MAX;
	volatile int32_t t0 = INT32_MIN;

    t0 = (((x1==x2)%x3)^x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = INT32_MIN;

    t1 = (((x5==x6)%x7)^x8);

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 9;
	int32_t t2 = 118;

    t2 = (((x9==x10)%x11)^x12);

    if (t2 != -10) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = -11;
	volatile int32_t t3 = -8;

    t3 = (((x13==x14)%x15)^x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 407U;
	int16_t x18 = -1;
	int32_t x19 = 3520;
	static int64_t x20 = -1LL;

    t4 = (((x17==x18)%x19)^x20);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MIN;
	int64_t x24 = -1LL;
	int64_t t5 = 4LL;

    t5 = (((x21==x22)%x23)^x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 3U;
	volatile int32_t x27 = INT32_MIN;
	static int64_t x28 = INT64_MIN;

    t6 = (((x25==x26)%x27)^x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = 42;
	int8_t x30 = INT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -690;

    t7 = (((x29==x30)%x31)^x32);

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 2422U;
	volatile uint64_t x34 = 94917322LLU;
	uint8_t x36 = UINT8_MAX;

    t8 = (((x33==x34)%x35)^x36);

    if (t8 != 255LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile int32_t x38 = INT32_MAX;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = UINT64_MAX;

    t9 = (((x37==x38)%x39)^x40);

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 95U;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = 5;
	volatile int32_t t10 = -137172;

    t10 = (((x41==x42)%x43)^x44);

    if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x46 = -1;
	uint8_t x47 = 3U;
	int16_t x48 = -1;
	int32_t t11 = 107206191;

    t11 = (((x45==x46)%x47)^x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x52 = -1;
	volatile uint32_t t12 = UINT32_MAX;

    t12 = (((x49==x50)%x51)^x52);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MAX;
	uint16_t x55 = UINT16_MAX;
	int32_t t13 = -34703;

    t13 = (((x53==x54)%x55)^x56);

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -16946;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	volatile uint32_t x60 = 429U;
	volatile int64_t t14 = 41234727294483LL;

    t14 = (((x57==x58)%x59)^x60);

    if (t14 != 429LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = 5609307;
	uint32_t x62 = 185007644U;
	volatile int16_t x63 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 206;

    t15 = (((x61==x62)%x63)^x64);

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -48882445417LL;
	volatile uint32_t x70 = UINT32_MAX;
	uint32_t x71 = 19948615U;
	static volatile int32_t x72 = INT32_MIN;
	uint32_t t16 = 77293U;

    t16 = (((x69==x70)%x71)^x72);

    if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x73 = INT32_MIN;
	static int8_t x74 = 26;
	int32_t x75 = 6331183;
	volatile int32_t x76 = 741043461;
	int32_t t17 = -103732;

    t17 = (((x73==x74)%x75)^x76);

    if (t17 != 741043461) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 12U;
	uint8_t x78 = 2U;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t18 = -1365;

    t18 = (((x77==x78)%x79)^x80);

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -1;
	static int64_t x82 = INT64_MIN;
	volatile int16_t x83 = 6417;
	uint32_t x84 = UINT32_MAX;
	uint32_t t19 = UINT32_MAX;

    t19 = (((x81==x82)%x83)^x84);

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	int8_t x86 = -1;
	int8_t x87 = -13;
	static int32_t t20 = -104176;

    t20 = (((x85==x86)%x87)^x88);

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x90 = -58;
	static uint32_t x91 = 1U;

    t21 = (((x89==x90)%x91)^x92);

    if (t21 != 4294967290U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x93 = INT64_MIN;
	uint16_t x94 = 0U;
	uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 74857809233LLU;
	static uint64_t t22 = 1365LLU;

    t22 = (((x93==x94)%x95)^x96);

    if (t22 != 74857809233LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MAX;
	int8_t x98 = -1;
	int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	int64_t t23 = INT64_MIN;

    t23 = (((x97==x98)%x99)^x100);

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 81491616665785LLU;
	volatile int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 20LLU;
	uint64_t t24 = 6811902497LLU;

    t24 = (((x101==x102)%x103)^x104);

    if (t24 != 20LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x105 = INT64_MAX;
	static volatile int16_t x106 = 0;
	static uint32_t x107 = 20041U;
	int32_t x108 = INT32_MIN;

    t25 = (((x105==x106)%x107)^x108);

    if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -6;
	int64_t x111 = -1LL;
	int32_t x112 = -12727639;
	static volatile int64_t t26 = 117962237823662LL;

    t26 = (((x109==x110)%x111)^x112);

    if (t26 != -12727639LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 95U;
	static int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -1;
	volatile int32_t t27 = -55967475;

    t27 = (((x113==x114)%x115)^x116);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x118 = UINT8_MAX;
	int32_t x119 = -953591879;
	volatile int64_t x120 = 13LL;
	int64_t t28 = -143059023948LL;

    t28 = (((x117==x118)%x119)^x120);

    if (t28 != 13LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = -1;
	uint8_t x122 = 0U;
	int8_t x123 = INT8_MIN;
	volatile uint16_t x124 = 3095U;
	volatile int32_t t29 = 663;

    t29 = (((x121==x122)%x123)^x124);

    if (t29 != 3095) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x126 = 1001274LLU;
	static int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t30 = INT64_MIN;

    t30 = (((x125==x126)%x127)^x128);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = 4598U;
	int16_t x130 = 0;
	volatile uint16_t x132 = 13U;
	static int32_t t31 = 260112;

    t31 = (((x129==x130)%x131)^x132);

    if (t31 != 13) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -1;
	volatile int32_t t32 = 667;

    t32 = (((x133==x134)%x135)^x136);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	static int32_t x138 = -14270;
	uint32_t x139 = 10463465U;
	int32_t x140 = -897144;
	uint32_t t33 = 2U;

    t33 = (((x137==x138)%x139)^x140);

    if (t33 != 4294070152U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = -1;
	int32_t x142 = 5003;
	int16_t x143 = -4;
	int16_t x144 = 1816;
	volatile int32_t t34 = 107;

    t34 = (((x141==x142)%x143)^x144);

    if (t34 != 1816) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = UINT8_MAX;
	int16_t x147 = INT16_MIN;
	static volatile int32_t t35 = 59758322;

    t35 = (((x145==x146)%x147)^x148);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x150 = 54729340982LLU;
	int16_t x152 = INT16_MIN;
	volatile int32_t t36 = -1;

    t36 = (((x149==x150)%x151)^x152);

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = UINT8_MAX;
	int64_t x154 = -1LL;
	static int8_t x155 = INT8_MIN;
	volatile int16_t x156 = -12303;
	volatile int32_t t37 = -5872478;

    t37 = (((x153==x154)%x155)^x156);

    if (t37 != -12303) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = 7946U;
	static volatile uint64_t x159 = 268092565LLU;
	static uint64_t t38 = UINT64_MAX;

    t38 = (((x157==x158)%x159)^x160);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 126075846U;
	static int32_t t39 = -12730;

    t39 = (((x161==x162)%x163)^x164);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x166 = -30;
	volatile int64_t t40 = -11775937701LL;

    t40 = (((x165==x166)%x167)^x168);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x172 = -511198207226071379LL;
	volatile int64_t t41 = -8259345741LL;

    t41 = (((x169==x170)%x171)^x172);

    if (t41 != -511198207226071379LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x174 = 25261;
	int16_t x175 = INT16_MIN;
	int32_t x176 = 340;
	static int32_t t42 = 933868;

    t42 = (((x173==x174)%x175)^x176);

    if (t42 != 340) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x177 = 301U;
	int64_t x178 = 20854LL;
	volatile uint16_t x179 = 23U;

    t43 = (((x177==x178)%x179)^x180);

    if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x181 = 11U;
	static int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t44 = -249716104;

    t44 = (((x181==x182)%x183)^x184);

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x185 = UINT8_MAX;
	volatile int32_t x186 = INT32_MIN;
	static uint8_t x187 = UINT8_MAX;
	uint8_t x188 = 7U;

    t45 = (((x185==x186)%x187)^x188);

    if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -1;
	uint64_t x190 = UINT64_MAX;
	static volatile uint8_t x191 = 3U;
	uint32_t x192 = UINT32_MAX;
	uint32_t t46 = 869162599U;

    t46 = (((x189==x190)%x191)^x192);

    if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = 5583;
	volatile uint8_t x195 = UINT8_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t47 = -27770835;

    t47 = (((x193==x194)%x195)^x196);

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 0;
	int8_t x198 = 1;
	static uint16_t x199 = 12U;
	volatile int32_t x200 = INT32_MIN;

    t48 = (((x197==x198)%x199)^x200);

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x202 = 1690978;
	volatile uint16_t x203 = UINT16_MAX;
	volatile int64_t x204 = 10872LL;

    t49 = (((x201==x202)%x203)^x204);

    if (t49 != 10872LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = -544;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MAX;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t50 = UINT32_MAX;

    t50 = (((x205==x206)%x207)^x208);

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t t51 = -47304;

    t51 = (((x209==x210)%x211)^x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x214 = -1076;
	int64_t x216 = 834166113LL;
	volatile int64_t t52 = -92263626414699842LL;

    t52 = (((x213==x214)%x215)^x216);

    if (t52 != 834166113LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x218 = 11875LLU;

    t53 = (((x217==x218)%x219)^x220);

    if (t53 != 67) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = -334428143;
	uint16_t x222 = 114U;
	uint16_t x223 = 46U;
	static int64_t x224 = -1LL;
	int64_t t54 = 458619282LL;

    t54 = (((x221==x222)%x223)^x224);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = INT16_MIN;
	volatile uint32_t x227 = 23U;
	int32_t x228 = INT32_MIN;
	uint32_t t55 = 12670952U;

    t55 = (((x225==x226)%x227)^x228);

    if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = -34;
	int16_t x230 = -1;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = UINT16_MAX;
	int64_t t56 = -2100873213LL;

    t56 = (((x229==x230)%x231)^x232);

    if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = 125U;
	volatile int32_t x234 = -1;
	uint64_t x235 = 1011915242095386LLU;
	static int32_t x236 = INT32_MIN;

    t57 = (((x233==x234)%x235)^x236);

    if (t57 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x238 = -1;
	int8_t x239 = -1;
	uint16_t x240 = 0U;
	volatile int32_t t58 = 84355;

    t58 = (((x237==x238)%x239)^x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x242 = 788U;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t59 = -2667558;

    t59 = (((x241==x242)%x243)^x244);

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MIN;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MAX;
	volatile int32_t t60 = INT32_MAX;

    t60 = (((x245==x246)%x247)^x248);

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = 1;
	uint16_t x250 = UINT16_MAX;
	static int8_t x252 = INT8_MIN;
	volatile uint64_t t61 = 403960352567LLU;

    t61 = (((x249==x250)%x251)^x252);

    if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x254 = -1;
	uint16_t x255 = 901U;
	int32_t x256 = 7;
	int32_t t62 = -265138913;

    t62 = (((x253==x254)%x255)^x256);

    if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = INT16_MIN;
	int16_t x258 = 62;
	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = 192046018;
	int32_t t63 = -5267;

    t63 = (((x257==x258)%x259)^x260);

    if (t63 != 192046018) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x261 = INT64_MIN;
	static uint32_t x262 = 136285U;
	uint64_t x263 = UINT64_MAX;
	static uint32_t x264 = UINT32_MAX;
	uint64_t t64 = 477748852860LLU;

    t64 = (((x261==x262)%x263)^x264);

    if (t64 != 4294967295LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x265 = INT16_MAX;
	static volatile int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int32_t t65 = -1350831;

    t65 = (((x265==x266)%x267)^x268);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = UINT32_MAX;
	uint64_t x270 = 2678861984215059180LLU;
	volatile int32_t x271 = 41606474;
	int16_t x272 = -1;
	static volatile int32_t t66 = 231;

    t66 = (((x269==x270)%x271)^x272);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x277 = -5;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 7098887282645LLU;

    t67 = (((x277==x278)%x279)^x280);

    if (t67 != 7098887282645LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x282 = 5;
	int8_t x283 = INT8_MIN;
	volatile uint16_t x284 = 3U;
	volatile int32_t t68 = -38363389;

    t68 = (((x281==x282)%x283)^x284);

    if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x285 = 23189U;
	uint8_t x286 = 0U;
	static volatile int8_t x287 = INT8_MIN;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t69 = INT32_MIN;

    t69 = (((x285==x286)%x287)^x288);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x290 = INT16_MIN;
	static int64_t t70 = INT64_MAX;

    t70 = (((x289==x290)%x291)^x292);

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x293 = 0U;
	uint8_t x294 = 0U;
	int64_t x296 = -2873750501254721LL;
	int64_t t71 = 404884424199681LL;

    t71 = (((x293==x294)%x295)^x296);

    if (t71 != -2873750501254721LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x297 = UINT8_MAX;
	static int64_t x298 = INT64_MAX;
	volatile uint32_t x300 = 82U;
	volatile uint32_t t72 = 963326500U;

    t72 = (((x297==x298)%x299)^x300);

    if (t72 != 82U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x301 = 1006044108LLU;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = 12;
	static uint64_t t73 = 90LLU;

    t73 = (((x301==x302)%x303)^x304);

    if (t73 != 12LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x307 = INT8_MIN;
	int32_t x308 = -14528059;
	int32_t t74 = 4;

    t74 = (((x305==x306)%x307)^x308);

    if (t74 != -14528059) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x309 = INT64_MAX;
	uint64_t x311 = 22571855680065661LLU;
	uint64_t t75 = 16754981270323LLU;

    t75 = (((x309==x310)%x311)^x312);

    if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x313 = -1;
	uint16_t x314 = 25138U;
	static int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	int64_t t76 = INT64_MIN;

    t76 = (((x313==x314)%x315)^x316);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x317 = 10364274642215383LL;
	int16_t x319 = INT16_MIN;
	volatile int64_t x320 = INT64_MIN;
	int64_t t77 = INT64_MIN;

    t77 = (((x317==x318)%x319)^x320);

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = -404;
	static uint16_t x322 = 125U;
	int32_t x323 = INT32_MAX;
	static int32_t x324 = -233552382;
	volatile int32_t t78 = -143497963;

    t78 = (((x321==x322)%x323)^x324);

    if (t78 != -233552382) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MAX;
	static int8_t x326 = INT8_MIN;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MAX;
	volatile uint32_t t79 = 219472113U;

    t79 = (((x325==x326)%x327)^x328);

    if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x329 = -1LL;
	int64_t x330 = INT64_MIN;
	volatile uint32_t x332 = 23834687U;

    t80 = (((x329==x330)%x331)^x332);

    if (t80 != 23834687U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x334 = 31U;
	volatile uint64_t x336 = 13274901034353891LLU;
	volatile uint64_t t81 = 89399215LLU;

    t81 = (((x333==x334)%x335)^x336);

    if (t81 != 13274901034353891LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x337 = 124U;
	static int8_t x339 = 3;
	int8_t x340 = -1;
	volatile int32_t t82 = -16773;

    t82 = (((x337==x338)%x339)^x340);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = INT16_MIN;
	int32_t x342 = -1310130;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = 21;
	uint64_t t83 = 1066438419LLU;

    t83 = (((x341==x342)%x343)^x344);

    if (t83 != 21LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x346 = UINT8_MAX;
	static int32_t x347 = 15315;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t84 = UINT32_MAX;

    t84 = (((x345==x346)%x347)^x348);

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = -1;
	static volatile int32_t x350 = INT32_MAX;
	int8_t x351 = -1;

    t85 = (((x349==x350)%x351)^x352);

    if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 10795U;
	int64_t x354 = INT64_MAX;
	int64_t x355 = -1LL;
	uint16_t x356 = UINT16_MAX;

    t86 = (((x353==x354)%x355)^x356);

    if (t86 != 65535LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x357 = 37U;
	int32_t x358 = -1;
	uint16_t x359 = 12370U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t87 = -64825;

    t87 = (((x357==x358)%x359)^x360);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = 7773U;
	static int32_t x362 = INT32_MIN;
	uint64_t x363 = 480968277659LLU;
	uint32_t x364 = 25U;
	volatile uint64_t t88 = 463131739LLU;

    t88 = (((x361==x362)%x363)^x364);

    if (t88 != 25LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MAX;
	uint16_t x366 = 18U;
	int16_t x367 = -1;
	uint32_t x368 = 7U;
	volatile uint32_t t89 = 1159U;

    t89 = (((x365==x366)%x367)^x368);

    if (t89 != 7U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x372 = INT64_MIN;

    t90 = (((x369==x370)%x371)^x372);

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = INT16_MAX;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -5;
	uint64_t x376 = 490961727237LLU;

    t91 = (((x373==x374)%x375)^x376);

    if (t91 != 490961727237LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x381 = -1;
	uint64_t x382 = 24658890703LLU;
	static volatile uint8_t x383 = 7U;
	static int64_t x384 = -1LL;
	volatile int64_t t92 = -2282582100520026954LL;

    t92 = (((x381==x382)%x383)^x384);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = 289691662401156LLU;
	static int64_t x386 = 3318527722LL;
	static uint32_t x387 = UINT32_MAX;
	volatile uint32_t t93 = 269017U;

    t93 = (((x385==x386)%x387)^x388);

    if (t93 != 32767U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x389 = -1;
	uint16_t x390 = 1545U;
	int32_t x391 = INT32_MAX;
	static int64_t x392 = -1LL;

    t94 = (((x389==x390)%x391)^x392);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x394 = -1;
	volatile int16_t x395 = INT16_MIN;
	static volatile uint8_t x396 = 23U;

    t95 = (((x393==x394)%x395)^x396);

    if (t95 != 23) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x398 = INT32_MAX;
	static volatile int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile int32_t t96 = 1;

    t96 = (((x397==x398)%x399)^x400);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = -272;
	static uint32_t x403 = UINT32_MAX;
	uint16_t x404 = 12U;

    t97 = (((x401==x402)%x403)^x404);

    if (t97 != 12U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = INT64_MIN;
	static int32_t x406 = 1686;
	static uint64_t x407 = UINT64_MAX;
	int32_t x408 = INT32_MAX;
	static uint64_t t98 = 6394LLU;

    t98 = (((x405==x406)%x407)^x408);

    if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x409 = UINT16_MAX;
	static uint64_t x411 = 3LLU;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

    t99 = (((x409==x410)%x411)^x412);

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x419 = 1U;
	volatile int16_t x420 = 939;

    t100 = (((x417==x418)%x419)^x420);

    if (t100 != 939) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x422 = INT32_MAX;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MAX;
	volatile uint32_t t101 = 1325302U;

    t101 = (((x421==x422)%x423)^x424);

    if (t101 != 2147483647U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x426 = 0;
	volatile int8_t x427 = INT8_MIN;
	volatile int32_t t102 = 1124;

    t102 = (((x425==x426)%x427)^x428);

    if (t102 != 4400) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = INT16_MAX;
	static uint8_t x430 = 0U;
	volatile int16_t x431 = -1;
	static int32_t x432 = INT32_MIN;

    t103 = (((x429==x430)%x431)^x432);

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = INT16_MIN;
	int8_t x435 = -1;
	int32_t x436 = 65028;
	volatile int32_t t104 = -35325;

    t104 = (((x433==x434)%x435)^x436);

    if (t104 != 65028) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x437 = -1;
	volatile int16_t x438 = -2;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (((x437==x438)%x439)^x440);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	uint64_t x442 = 501240590308LLU;
	int16_t x443 = -1;
	int8_t x444 = INT8_MAX;
	static volatile int32_t t106 = 1939980;

    t106 = (((x441==x442)%x443)^x444);

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x446 = 1U;
	int64_t x447 = -999189357185765782LL;
	int32_t x448 = INT32_MAX;
	int64_t t107 = 1042086150940LL;

    t107 = (((x445==x446)%x447)^x448);

    if (t107 != 2147483647LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x449 = UINT16_MAX;
	static int16_t x450 = INT16_MIN;
	int32_t x451 = INT32_MIN;
	uint32_t x452 = 172394U;
	static volatile uint32_t t108 = 19U;

    t108 = (((x449==x450)%x451)^x452);

    if (t108 != 172394U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x453 = 25LL;
	int16_t x454 = INT16_MAX;
	static volatile int32_t x456 = 543114;
	volatile int32_t t109 = -4;

    t109 = (((x453==x454)%x455)^x456);

    if (t109 != 543114) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x457 = -2;
	uint8_t x458 = UINT8_MAX;
	int32_t x459 = INT32_MIN;
	static uint64_t t110 = UINT64_MAX;

    t110 = (((x457==x458)%x459)^x460);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = 891LL;
	static int32_t x462 = INT32_MIN;
	static uint8_t x464 = 73U;
	volatile int32_t t111 = -447640;

    t111 = (((x461==x462)%x463)^x464);

    if (t111 != 73) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x466 = 6923U;
	static volatile int32_t x468 = INT32_MAX;
	uint64_t t112 = 34808508251597LLU;

    t112 = (((x465==x466)%x467)^x468);

    if (t112 != 2147483647LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = INT64_MIN;
	uint8_t x470 = 9U;
	int32_t x471 = -2943581;
	int16_t x472 = -277;
	static volatile int32_t t113 = 562566774;

    t113 = (((x469==x470)%x471)^x472);

    if (t113 != -277) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x474 = INT32_MIN;
	uint32_t x475 = 46U;
	int64_t x476 = INT64_MAX;
	int64_t t114 = INT64_MAX;

    t114 = (((x473==x474)%x475)^x476);

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = INT8_MIN;
	uint32_t x478 = 60749722U;
	volatile int16_t x479 = -1;
	int64_t x480 = 2673LL;
	volatile int64_t t115 = 351097433606909LL;

    t115 = (((x477==x478)%x479)^x480);

    if (t115 != 2673LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = -1LL;
	int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MAX;
	int32_t t116 = -1517450;

    t116 = (((x481==x482)%x483)^x484);

    if (t116 != 2147483646) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x485 = UINT32_MAX;
	int8_t x486 = INT8_MIN;
	int16_t x487 = 1;
	int16_t x488 = 1;

    t117 = (((x485==x486)%x487)^x488);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x490 = 87135980378LLU;
	int64_t x491 = INT64_MIN;
	static int8_t x492 = INT8_MIN;
	volatile int64_t t118 = -1LL;

    t118 = (((x489==x490)%x491)^x492);

    if (t118 != -128LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x494 = INT16_MAX;
	static volatile uint16_t x495 = 245U;
	int64_t t119 = INT64_MIN;

    t119 = (((x493==x494)%x495)^x496);

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x497 = 271926116377295LLU;
	static volatile int8_t x498 = INT8_MIN;
	uint8_t x499 = UINT8_MAX;
	int16_t x500 = 1;
	static int32_t t120 = 7154;

    t120 = (((x497==x498)%x499)^x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = INT64_MAX;
	int8_t x503 = INT8_MAX;
	int64_t x504 = INT64_MIN;
	static volatile int64_t t121 = INT64_MIN;

    t121 = (((x501==x502)%x503)^x504);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MIN;
	int32_t x507 = INT32_MIN;
	int8_t x508 = 1;

    t122 = (((x505==x506)%x507)^x508);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = -409;
	uint8_t x511 = UINT8_MAX;
	int64_t x512 = INT64_MAX;
	static volatile int64_t t123 = INT64_MAX;

    t123 = (((x509==x510)%x511)^x512);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x513 = -16;
	uint16_t x514 = 3U;
	volatile int32_t t124 = -13500368;

    t124 = (((x513==x514)%x515)^x516);

    if (t124 != 28019) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 14U;
	static uint64_t x518 = UINT64_MAX;
	int8_t x519 = -1;
	static volatile uint32_t t125 = UINT32_MAX;

    t125 = (((x517==x518)%x519)^x520);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = INT8_MIN;
	int8_t x522 = -1;
	static int16_t x523 = INT16_MIN;
	uint32_t x524 = 155605U;
	uint32_t t126 = 19592U;

    t126 = (((x521==x522)%x523)^x524);

    if (t126 != 155605U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x526 = INT16_MIN;
	static uint8_t x528 = UINT8_MAX;
	uint32_t t127 = 193379731U;

    t127 = (((x525==x526)%x527)^x528);

    if (t127 != 255U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x529 = INT64_MAX;
	int8_t x530 = -1;
	int32_t x532 = INT32_MAX;

    t128 = (((x529==x530)%x531)^x532);

    if (t128 != 2147483647U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x535 = 136663857890LLU;
	int64_t x536 = -398972966980302263LL;
	uint64_t t129 = 67339101249LLU;

    t129 = (((x533==x534)%x535)^x536);

    if (t129 != 18047771106729249353LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x537 = -1LL;
	volatile int16_t x538 = -1;
	static int32_t t130 = 224751025;

    t130 = (((x537==x538)%x539)^x540);

    if (t130 != 50) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x541 = 1652U;
	int16_t x543 = INT16_MAX;
	static volatile int32_t x544 = INT32_MAX;
	static int32_t t131 = INT32_MAX;

    t131 = (((x541==x542)%x543)^x544);

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x545 = INT64_MAX;
	int16_t x546 = -1;
	uint8_t x547 = 28U;
	int8_t x548 = -1;
	int32_t t132 = -435184;

    t132 = (((x545==x546)%x547)^x548);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = INT32_MIN;
	int16_t x550 = INT16_MAX;
	volatile int8_t x552 = -1;
	int32_t t133 = -4855;

    t133 = (((x549==x550)%x551)^x552);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = -1;
	int64_t x554 = -48378LL;
	uint64_t x555 = UINT64_MAX;
	uint16_t x556 = UINT16_MAX;
	volatile uint64_t t134 = 44464553446171876LLU;

    t134 = (((x553==x554)%x555)^x556);

    if (t134 != 65535LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x557 = UINT8_MAX;
	int32_t x558 = INT32_MIN;
	int16_t x559 = INT16_MIN;
	volatile uint64_t x560 = 0LLU;
	volatile uint64_t t135 = 167543383916236LLU;

    t135 = (((x557==x558)%x559)^x560);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x561 = 0U;
	static uint64_t x562 = UINT64_MAX;
	uint16_t x563 = 3U;
	static int64_t x564 = -1LL;
	static int64_t t136 = 933242LL;

    t136 = (((x561==x562)%x563)^x564);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x565 = 27390844LLU;
	uint64_t x566 = 1014106437033LLU;
	int8_t x567 = INT8_MIN;
	volatile int32_t t137 = INT32_MIN;

    t137 = (((x565==x566)%x567)^x568);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x572 = -152767684;
	volatile int32_t t138 = -418115975;

    t138 = (((x569==x570)%x571)^x572);

    if (t138 != -152767684) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x573 = 1659U;
	int32_t x574 = -1;
	static uint8_t x575 = 3U;
	uint32_t x576 = 3354010U;
	volatile uint32_t t139 = 352U;

    t139 = (((x573==x574)%x575)^x576);

    if (t139 != 3354010U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x578 = INT16_MIN;
	int64_t x579 = 668583536817270145LL;
	int64_t x580 = INT64_MIN;
	int64_t t140 = INT64_MIN;

    t140 = (((x577==x578)%x579)^x580);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x581 = -10;
	static int32_t x582 = INT32_MIN;
	uint64_t x583 = 2676190579356LLU;
	static volatile uint64_t t141 = 674242458092243LLU;

    t141 = (((x581==x582)%x583)^x584);

    if (t141 != 73LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x585 = 27U;
	uint16_t x586 = 2919U;
	int16_t x587 = INT16_MIN;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = (((x585==x586)%x587)^x588);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x589 = 1U;
	volatile uint16_t x590 = 0U;
	static int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MIN;

    t143 = (((x589==x590)%x591)^x592);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = 1051U;
	uint32_t x594 = UINT32_MAX;
	uint64_t x595 = 580280978768659903LLU;
	static int64_t x596 = 125674LL;
	volatile uint64_t t144 = 4944926681733LLU;

    t144 = (((x593==x594)%x595)^x596);

    if (t144 != 125674LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x598 = 1U;
	static uint16_t x599 = UINT16_MAX;
	uint64_t x600 = 471LLU;

    t145 = (((x597==x598)%x599)^x600);

    if (t145 != 471LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = -1;
	int8_t x602 = 62;
	int16_t x603 = INT16_MAX;
	volatile uint16_t x604 = 4U;

    t146 = (((x601==x602)%x603)^x604);

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x605 = -3;
	int8_t x606 = -1;
	static volatile uint64_t x607 = 3787900LLU;
	uint64_t x608 = 406877963282264925LLU;
	uint64_t t147 = 216LLU;

    t147 = (((x605==x606)%x607)^x608);

    if (t147 != 406877963282264925LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x609 = UINT64_MAX;
	static int64_t x610 = 7207166671179505LL;
	static int32_t x611 = INT32_MIN;
	int8_t x612 = -1;
	static int32_t t148 = 1;

    t148 = (((x609==x610)%x611)^x612);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = INT8_MIN;
	static volatile int64_t x614 = INT64_MAX;
	uint64_t x615 = 14255LLU;
	uint64_t x616 = UINT64_MAX;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = (((x613==x614)%x615)^x616);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x618 = INT32_MIN;
	static volatile int32_t x619 = -19136;
	int32_t x620 = -54;
	int32_t t150 = 61193;

    t150 = (((x617==x618)%x619)^x620);

    if (t150 != -54) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x622 = UINT64_MAX;
	volatile uint32_t x623 = 96619U;

    t151 = (((x621==x622)%x623)^x624);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = 118598315LLU;
	volatile int32_t x627 = -1;
	volatile int64_t x628 = -1LL;
	static int64_t t152 = 21590388615211LL;

    t152 = (((x625==x626)%x627)^x628);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x629 = -10LL;
	static volatile int8_t x631 = INT8_MIN;
	int16_t x632 = -2532;
	volatile int32_t t153 = -648;

    t153 = (((x629==x630)%x631)^x632);

    if (t153 != -2532) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = -26961220;
	int16_t x634 = INT16_MIN;
	int64_t x635 = INT64_MIN;
	int32_t x636 = 221;
	static int64_t t154 = 13557242924344592LL;

    t154 = (((x633==x634)%x635)^x636);

    if (t154 != 221LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x637 = 13;
	uint64_t x638 = UINT64_MAX;
	int16_t x639 = -1;
	static volatile uint8_t x640 = UINT8_MAX;
	static int32_t t155 = -35;

    t155 = (((x637==x638)%x639)^x640);

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = -1;
	int16_t x642 = INT16_MAX;
	static uint8_t x643 = UINT8_MAX;
	int32_t t156 = -343935391;

    t156 = (((x641==x642)%x643)^x644);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x645 = 26;
	static volatile int8_t x646 = INT8_MAX;
	static int64_t x647 = INT64_MIN;
	int32_t x648 = -69325297;
	int64_t t157 = -391580LL;

    t157 = (((x645==x646)%x647)^x648);

    if (t157 != -69325297LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x649 = 179U;
	int32_t x650 = -555796;
	uint32_t x651 = 24U;
	uint32_t x652 = 1112U;

    t158 = (((x649==x650)%x651)^x652);

    if (t158 != 1112U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x654 = -707992241;
	int32_t x655 = INT32_MIN;
	static int64_t x656 = -1LL;
	int64_t t159 = 7115529LL;

    t159 = (((x653==x654)%x655)^x656);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = 0LL;
	static uint8_t x663 = 13U;
	uint64_t x664 = 14LLU;
	volatile uint64_t t160 = 702042022490486367LLU;

    t160 = (((x661==x662)%x663)^x664);

    if (t160 != 14LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x666 = INT16_MIN;
	volatile uint8_t x667 = 74U;
	int64_t x668 = -1LL;
	int64_t t161 = 11LL;

    t161 = (((x665==x666)%x667)^x668);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x669 = INT32_MIN;
	static int16_t x670 = 11;
	int16_t x671 = -1;
	int32_t x672 = -23686704;

    t162 = (((x669==x670)%x671)^x672);

    if (t162 != -23686704) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x673 = -1;
	static int16_t x674 = -119;
	static int32_t t163 = -1142611;

    t163 = (((x673==x674)%x675)^x676);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x677 = INT16_MAX;
	volatile int16_t x678 = INT16_MAX;
	static volatile int32_t t164 = -223740854;

    t164 = (((x677==x678)%x679)^x680);

    if (t164 != -2) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = 677743548281LLU;
	int8_t x682 = 35;
	uint32_t t165 = 118583818U;

    t165 = (((x681==x682)%x683)^x684);

    if (t165 != 5U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = INT32_MAX;
	int32_t x686 = INT32_MIN;
	int8_t x687 = INT8_MIN;
	volatile int8_t x688 = -1;
	int32_t t166 = -293025;

    t166 = (((x685==x686)%x687)^x688);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = INT16_MIN;
	int8_t x691 = INT8_MAX;
	int8_t x692 = -1;

    t167 = (((x689==x690)%x691)^x692);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x694 = INT32_MAX;
	int16_t x695 = INT16_MAX;
	int32_t x696 = INT32_MIN;
	int32_t t168 = INT32_MIN;

    t168 = (((x693==x694)%x695)^x696);

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = INT16_MAX;
	static int64_t t169 = -73881174843450867LL;

    t169 = (((x697==x698)%x699)^x700);

    if (t169 != 127LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x701 = -1;
	int64_t x703 = 122577592698376LL;
	int16_t x704 = -13;
	int64_t t170 = 258547220831792LL;

    t170 = (((x701==x702)%x703)^x704);

    if (t170 != -13LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x705 = -7LL;
	int8_t x707 = INT8_MIN;
	uint16_t x708 = UINT16_MAX;

    t171 = (((x705==x706)%x707)^x708);

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x709 = UINT8_MAX;
	uint64_t x710 = 1082201858653LLU;
	int64_t x711 = 13LL;
	static volatile int64_t t172 = -1610403LL;

    t172 = (((x709==x710)%x711)^x712);

    if (t172 != 36LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x713 = INT8_MIN;
	uint64_t x714 = 1096506447461LLU;
	volatile int32_t x715 = INT32_MIN;
	int16_t x716 = 1744;

    t173 = (((x713==x714)%x715)^x716);

    if (t173 != 1744) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x719 = INT8_MAX;
	uint64_t x720 = 5LLU;
	volatile uint64_t t174 = 301LLU;

    t174 = (((x717==x718)%x719)^x720);

    if (t174 != 5LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = 32;
	uint64_t x722 = 351159807113LLU;
	int16_t x723 = -1924;
	int8_t x724 = INT8_MIN;
	int32_t t175 = -19740707;

    t175 = (((x721==x722)%x723)^x724);

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x725 = UINT8_MAX;
	static int64_t x726 = 0LL;
	static uint16_t x727 = UINT16_MAX;
	int16_t x728 = INT16_MAX;
	static volatile int32_t t176 = 3;

    t176 = (((x725==x726)%x727)^x728);

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = -1;
	uint32_t x730 = 28427U;
	uint8_t x731 = UINT8_MAX;
	uint32_t x732 = 137U;
	uint32_t t177 = 766U;

    t177 = (((x729==x730)%x731)^x732);

    if (t177 != 137U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x733 = INT32_MIN;
	volatile int64_t x734 = -1LL;
	uint32_t x735 = 495297753U;
	uint8_t x736 = UINT8_MAX;
	uint32_t t178 = 136377704U;

    t178 = (((x733==x734)%x735)^x736);

    if (t178 != 255U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = INT32_MIN;
	uint16_t x738 = 1U;
	uint8_t x740 = 2U;

    t179 = (((x737==x738)%x739)^x740);

    if (t179 != 2LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x741 = INT8_MAX;
	static uint64_t x742 = 3LLU;
	uint16_t x743 = 10670U;
	uint64_t x744 = 159510932LLU;
	volatile uint64_t t180 = 13396881943LLU;

    t180 = (((x741==x742)%x743)^x744);

    if (t180 != 159510932LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x745 = -28;
	volatile uint32_t x746 = UINT32_MAX;
	int8_t x747 = 55;
	int64_t x748 = -1LL;
	volatile int64_t t181 = -2021714408624LL;

    t181 = (((x745==x746)%x747)^x748);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x749 = INT8_MIN;
	uint8_t x750 = 26U;
	int64_t x751 = -210822LL;
	int64_t t182 = INT64_MAX;

    t182 = (((x749==x750)%x751)^x752);

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x753 = -1;
	int8_t x754 = 56;
	int64_t x755 = 26201503LL;
	int16_t x756 = INT16_MAX;
	int64_t t183 = -874483957522721LL;

    t183 = (((x753==x754)%x755)^x756);

    if (t183 != 32767LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x757 = UINT8_MAX;
	static volatile uint32_t x758 = 2U;
	int8_t x759 = INT8_MIN;
	int8_t x760 = INT8_MIN;

    t184 = (((x757==x758)%x759)^x760);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x761 = 217U;
	int16_t x762 = INT16_MIN;
	volatile uint32_t x763 = UINT32_MAX;
	int32_t x764 = INT32_MIN;
	uint32_t t185 = 349U;

    t185 = (((x761==x762)%x763)^x764);

    if (t185 != 2147483648U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x765 = 10U;
	int16_t x766 = INT16_MAX;
	int32_t x767 = INT32_MIN;
	static volatile int32_t x768 = INT32_MIN;
	volatile int32_t t186 = INT32_MIN;

    t186 = (((x765==x766)%x767)^x768);

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x769 = 14;
	int32_t x770 = 45669945;
	int32_t t187 = -88518;

    t187 = (((x769==x770)%x771)^x772);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = INT16_MAX;
	static int8_t x774 = 42;
	volatile int32_t x775 = -11522681;
	uint64_t x776 = UINT64_MAX;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (((x773==x774)%x775)^x776);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x777 = INT64_MAX;
	uint16_t x778 = UINT16_MAX;
	int16_t x779 = 2910;
	int32_t x780 = INT32_MIN;
	static int32_t t189 = INT32_MIN;

    t189 = (((x777==x778)%x779)^x780);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x781 = -1;
	uint64_t x782 = UINT64_MAX;
	int8_t x783 = INT8_MIN;
	int16_t x784 = 3492;
	int32_t t190 = -12811115;

    t190 = (((x781==x782)%x783)^x784);

    if (t190 != 3493) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = INT8_MIN;
	uint8_t x786 = UINT8_MAX;
	static volatile int32_t x788 = -630;
	int32_t t191 = -1;

    t191 = (((x785==x786)%x787)^x788);

    if (t191 != -630) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x790 = INT16_MIN;
	int64_t x791 = -1318732640LL;
	volatile int64_t x792 = INT64_MIN;
	static int64_t t192 = INT64_MIN;

    t192 = (((x789==x790)%x791)^x792);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = INT8_MAX;
	static uint16_t x794 = UINT16_MAX;
	volatile int8_t x795 = 6;
	int32_t t193 = INT32_MIN;

    t193 = (((x793==x794)%x795)^x796);

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x797 = 2488;
	static uint16_t x798 = 82U;
	int8_t x799 = INT8_MIN;
	int8_t x800 = 0;
	int32_t t194 = -42171;

    t194 = (((x797==x798)%x799)^x800);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x804 = 2U;
	volatile int64_t t195 = -140143986LL;

    t195 = (((x801==x802)%x803)^x804);

    if (t195 != 2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x805 = 660723U;
	uint8_t x806 = 25U;
	volatile int8_t x807 = INT8_MAX;
	int16_t x808 = INT16_MIN;
	static int32_t t196 = 47;

    t196 = (((x805==x806)%x807)^x808);

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x809 = UINT64_MAX;
	uint8_t x810 = 6U;
	int64_t x811 = INT64_MIN;
	uint32_t x812 = 44U;
	int64_t t197 = 910066978987198575LL;

    t197 = (((x809==x810)%x811)^x812);

    if (t197 != 44LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x813 = -1;
	volatile uint32_t x814 = 334805U;
	int16_t x815 = INT16_MIN;
	volatile int32_t x816 = INT32_MIN;
	int32_t t198 = INT32_MIN;

    t198 = (((x813==x814)%x815)^x816);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x817 = 1U;
	volatile int64_t x820 = INT64_MAX;
	int64_t t199 = INT64_MAX;

    t199 = (((x817==x818)%x819)^x820);

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

