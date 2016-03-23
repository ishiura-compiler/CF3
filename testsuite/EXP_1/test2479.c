
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

int16_t x1 = INT16_MIN;
int8_t x6 = -1;
static uint16_t x10 = UINT16_MAX;
volatile int64_t x12 = INT64_MAX;
int32_t x15 = -122;
uint32_t x26 = UINT32_MAX;
static int64_t x30 = INT64_MAX;
int16_t x34 = INT16_MAX;
static volatile int32_t x36 = INT32_MIN;
volatile int64_t x38 = INT64_MIN;
int16_t x39 = INT16_MIN;
static volatile int32_t t9 = -568614;
static int8_t x43 = 51;
int8_t x52 = INT8_MIN;
int16_t x60 = 27;
volatile uint64_t t17 = UINT64_MAX;
int64_t x73 = -1LL;
uint32_t x74 = 293U;
static int16_t x79 = INT16_MIN;
int64_t x82 = -1LL;
uint8_t x84 = UINT8_MAX;
int16_t x92 = INT16_MAX;
uint16_t x97 = 1654U;
volatile int32_t t27 = -26068;
volatile int64_t t28 = -23935LL;
int16_t x122 = INT16_MIN;
uint32_t x131 = 25423247U;
volatile int8_t x135 = 1;
static uint64_t x136 = 7228484078467060LLU;
int8_t x137 = 0;
volatile int8_t x140 = INT8_MIN;
uint64_t x142 = UINT64_MAX;
static int64_t x146 = 50301722697652LL;
static uint64_t t40 = 4950339793094477LLU;
static volatile int16_t x171 = 8316;
int32_t t43 = INT32_MAX;
int32_t x180 = 146;
volatile int32_t x181 = INT32_MIN;
static volatile uint32_t x183 = 14613402U;
volatile int32_t t45 = -1675548;
uint32_t x200 = 704330882U;
int16_t x203 = -1;
int16_t x206 = INT16_MAX;
volatile int16_t x213 = INT16_MAX;
volatile int64_t x219 = INT64_MIN;
static volatile uint8_t x229 = UINT8_MAX;
int32_t x233 = 977262;
int8_t x236 = INT8_MIN;
uint16_t x249 = 3U;
uint16_t x251 = UINT16_MAX;
int32_t x257 = -6;
volatile int32_t x264 = -1;
volatile int32_t t65 = -28069627;
static volatile int32_t t66 = 92062;
uint64_t x271 = 406585888503476593LLU;
uint16_t x278 = 146U;
int8_t x281 = INT8_MIN;
int64_t t70 = -124LL;
static int16_t x285 = INT16_MIN;
int32_t x290 = 22;
volatile int32_t x293 = -78693;
static volatile uint32_t x297 = UINT32_MAX;
int16_t x307 = INT16_MIN;
uint64_t x310 = 2667026228364314047LLU;
uint8_t x311 = 3U;
uint8_t x315 = UINT8_MAX;
static int64_t x319 = INT64_MIN;
static uint64_t x324 = UINT64_MAX;
static int64_t x325 = INT64_MAX;
static int64_t x330 = 21666742LL;
int64_t x333 = INT64_MIN;
volatile int64_t x334 = INT64_MIN;
int8_t x338 = -1;
static volatile int64_t x342 = -1LL;
volatile int32_t t86 = 0;
static int32_t x356 = INT32_MIN;
static volatile int32_t t87 = INT32_MIN;
uint8_t x359 = 6U;
uint16_t x360 = 20U;
static int8_t x366 = -46;
int16_t x368 = 26;
int64_t x369 = INT64_MAX;
volatile uint64_t t93 = 0LLU;
int64_t x381 = INT64_MIN;
int64_t x382 = INT64_MIN;
int8_t x386 = INT8_MIN;
int32_t x390 = 371;
uint8_t x392 = 0U;
uint32_t x393 = UINT32_MAX;
static volatile int64_t x395 = INT64_MIN;
static int64_t x400 = INT64_MIN;
uint32_t t99 = 5495737U;
volatile int16_t x405 = INT16_MIN;
volatile int32_t t101 = 74892;
int32_t x415 = INT32_MAX;
int32_t x417 = INT32_MIN;
int16_t x420 = -1;
static volatile int32_t t105 = 15179075;
static volatile uint64_t x429 = 5952LLU;
volatile uint32_t t106 = 578U;
static int16_t x433 = INT16_MIN;
static int8_t x434 = 7;
int16_t x435 = -1;
int16_t x440 = -1;
volatile int32_t t108 = -923110;
static int8_t x446 = -42;
int64_t x450 = 94804766886159726LL;
volatile uint32_t x451 = 42045712U;
volatile int32_t t112 = -29547152;
volatile int32_t x465 = -397967693;
int32_t x471 = 1;
volatile uint32_t t116 = 401U;
uint16_t x474 = 0U;
volatile int32_t x476 = INT32_MAX;
static int8_t x478 = 1;
uint32_t x483 = UINT32_MAX;
volatile uint64_t t119 = 21110082841276318LLU;
uint16_t x485 = 1U;
uint32_t x490 = 562202557U;
uint64_t x491 = 88446578890144LLU;
uint16_t x495 = UINT16_MAX;
static uint32_t x496 = UINT32_MAX;
int64_t x498 = INT64_MAX;
int32_t t123 = 121;
int16_t x501 = -42;
static int64_t x502 = -16320966196180LL;
uint64_t x510 = UINT64_MAX;
int64_t x511 = INT64_MIN;
int32_t t126 = INT32_MIN;
int32_t t127 = 39;
int32_t t128 = -9178083;
volatile int16_t x525 = INT16_MIN;
int32_t t130 = 41518317;
int32_t t131 = 1;
int8_t x534 = 33;
static int64_t x537 = INT64_MIN;
uint64_t x549 = 135938LLU;
int32_t x552 = 3993;
int32_t t136 = -327;
uint8_t x560 = 12U;
int64_t x569 = INT64_MIN;
volatile uint32_t x576 = 5U;
volatile int32_t x580 = INT32_MIN;
volatile int32_t t143 = INT32_MIN;
uint8_t x583 = 53U;
int16_t x585 = 1;
uint32_t x587 = 6220U;
int32_t x599 = 40;
int16_t x609 = INT16_MIN;
int16_t x610 = -2;
int64_t x611 = -157533LL;
volatile uint8_t x612 = UINT8_MAX;
static uint8_t x614 = 1U;
int32_t t152 = -12;
int16_t x627 = 1167;
uint16_t x629 = 6588U;
int32_t x639 = -1;
int16_t x645 = 6;
int64_t x648 = INT64_MIN;
uint16_t x649 = 31U;
volatile uint64_t x650 = 30995938731231938LLU;
uint16_t x652 = UINT16_MAX;
int16_t x654 = INT16_MAX;
int8_t x656 = INT8_MAX;
volatile int8_t x661 = -8;
int32_t t166 = 1;
volatile int8_t x675 = INT8_MIN;
volatile int8_t x676 = -24;
int32_t x677 = -1;
int8_t x689 = -1;
int16_t x691 = INT16_MIN;
int64_t x694 = -1LL;
static int16_t x698 = INT16_MAX;
uint32_t x704 = 250U;
uint8_t x706 = UINT8_MAX;
int64_t x708 = -15272698LL;
uint64_t x709 = UINT64_MAX;
static volatile int64_t t176 = 48608LL;
static uint16_t x717 = 240U;
int64_t x718 = INT64_MIN;
int32_t x720 = 15047153;
int32_t t178 = 588041;
volatile int32_t x721 = -3;
int8_t x723 = INT8_MIN;
static uint16_t x727 = UINT16_MAX;
uint64_t x734 = UINT64_MAX;
static uint8_t x737 = 2U;
uint32_t x738 = UINT32_MAX;
int8_t x745 = -1;
int32_t t185 = -343;
volatile int32_t x750 = INT32_MAX;
static volatile int16_t x762 = INT16_MIN;
static int64_t t190 = INT64_MIN;
int16_t x774 = INT16_MIN;
volatile uint16_t x775 = UINT16_MAX;
uint8_t x777 = 24U;
uint32_t x782 = 6U;
int64_t x783 = 1524942680082LL;
int16_t x786 = -1;
static uint64_t x799 = 31541825LLU;
uint16_t x801 = UINT16_MAX;
static uint32_t x802 = 1683340U;
int32_t t199 = 13;


void f0(void) {
    	int16_t x2 = -168;
	static int64_t x3 = -3934387316172720265LL;
	int64_t x4 = INT64_MAX;
	int64_t t0 = INT64_MAX;

    t0 = (((x1|x2)<=x3)+x4);

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	static int16_t x7 = -1;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = 44489;

    t1 = (((x5|x6)<=x7)+x8);

    if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	uint64_t x11 = 7531289681085960585LLU;
	volatile int64_t t2 = INT64_MAX;

    t2 = (((x9|x10)<=x11)+x12);

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 613826525439558629LLU;
	static int64_t x14 = -2765997106LL;
	int16_t x16 = -1;
	int32_t t3 = 343;

    t3 = (((x13|x14)<=x15)+x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	uint8_t x18 = UINT8_MAX;
	uint16_t x19 = 805U;
	int16_t x20 = -3;
	volatile int32_t t4 = 26805;

    t4 = (((x17|x18)<=x19)+x20);

    if (t4 != -3) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint64_t x22 = 814323670LLU;
	int32_t x23 = INT32_MAX;
	uint8_t x24 = 14U;
	static int32_t t5 = -795477042;

    t5 = (((x21|x22)<=x23)+x24);

    if (t5 != 14) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -12468;
	volatile int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -2478365;

    t6 = (((x25|x26)<=x27)+x28);

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	volatile uint64_t x31 = 36421972818901982LLU;
	volatile uint64_t x32 = 539554645050LLU;
	volatile uint64_t t7 = 55592LLU;

    t7 = (((x29|x30)<=x31)+x32);

    if (t7 != 539554645050LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int8_t x35 = 1;
	volatile int32_t t8 = INT32_MIN;

    t8 = (((x33|x34)<=x35)+x36);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 1620403160LL;
	uint16_t x40 = 2177U;

    t9 = (((x37|x38)<=x39)+x40);

    if (t9 != 2178) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	static int32_t x42 = INT32_MIN;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -154345226;

    t10 = (((x41|x42)<=x43)+x44);

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	volatile int64_t x47 = INT64_MAX;
	static volatile uint8_t x48 = UINT8_MAX;
	int32_t t11 = 0;

    t11 = (((x45|x46)<=x47)+x48);

    if (t11 != 256) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 3;
	int32_t x50 = INT32_MAX;
	uint16_t x51 = 2915U;
	volatile int32_t t12 = -6;

    t12 = (((x49|x50)<=x51)+x52);

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 0U;
	uint16_t x54 = UINT16_MAX;
	uint64_t x55 = 1LLU;
	int64_t x56 = -1LL;
	int64_t t13 = 20113010246157LL;

    t13 = (((x53|x54)<=x55)+x56);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int64_t x58 = -1730765LL;
	static uint16_t x59 = 212U;
	volatile int32_t t14 = 981961;

    t14 = (((x57|x58)<=x59)+x60);

    if (t14 != 28) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -24;
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MAX;
	volatile uint64_t x64 = 24LLU;
	static volatile uint64_t t15 = 0LLU;

    t15 = (((x61|x62)<=x63)+x64);

    if (t15 != 24LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	static int8_t x66 = 1;
	int16_t x67 = -6;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = 3774723;

    t16 = (((x65|x66)<=x67)+x68);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	volatile uint16_t x70 = 16U;
	int64_t x71 = -1239339244LL;
	volatile uint64_t x72 = UINT64_MAX;

    t17 = (((x69|x70)<=x71)+x72);

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x75 = 500974632989340LLU;
	int32_t x76 = 352;
	int32_t t18 = -119;

    t18 = (((x73|x74)<=x75)+x76);

    if (t18 != 352) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 12004103;
	static int32_t x78 = INT32_MIN;
	volatile int32_t x80 = INT32_MIN;
	int32_t t19 = -772809;

    t19 = (((x77|x78)<=x79)+x80);

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int32_t t20 = 1713;

    t20 = (((x81|x82)<=x83)+x84);

    if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	volatile uint16_t x86 = 5U;
	static int8_t x87 = 1;
	uint16_t x88 = 4334U;
	volatile int32_t t21 = 4;

    t21 = (((x85|x86)<=x87)+x88);

    if (t21 != 4335) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -13;
	static int8_t x90 = 11;
	volatile int64_t x91 = INT64_MIN;
	int32_t t22 = -1852;

    t22 = (((x89|x90)<=x91)+x92);

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int32_t x94 = -18834;
	int64_t x95 = INT64_MIN;
	uint16_t x96 = 11U;
	static volatile int32_t t23 = -45412752;

    t23 = (((x93|x94)<=x95)+x96);

    if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	static volatile int16_t x100 = -3;
	int32_t t24 = -94540;

    t24 = (((x97|x98)<=x99)+x100);

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = INT8_MIN;
	volatile int32_t x102 = 6665117;
	static int8_t x103 = -1;
	int64_t x104 = -19892491649LL;
	int64_t t25 = -29880604357035LL;

    t25 = (((x101|x102)<=x103)+x104);

    if (t25 != -19892491648LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	uint64_t x106 = 1554309430733563LLU;
	uint8_t x107 = 35U;
	static volatile uint16_t x108 = UINT16_MAX;
	int32_t t26 = -1685;

    t26 = (((x105|x106)<=x107)+x108);

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int32_t x112 = 33640;

    t27 = (((x109|x110)<=x111)+x112);

    if (t27 != 33640) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 5U;
	int64_t x114 = -43060LL;
	int8_t x115 = 1;
	static int64_t x116 = -3215621245250755790LL;

    t28 = (((x113|x114)<=x115)+x116);

    if (t28 != -3215621245250755789LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MAX;
	int8_t x118 = 4;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = -12424013616057869LL;
	int64_t t29 = -1293612652864235685LL;

    t29 = (((x117|x118)<=x119)+x120);

    if (t29 != -12424013616057868LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = UINT32_MAX;
	int16_t x123 = 1;
	static volatile uint8_t x124 = UINT8_MAX;
	int32_t t30 = -357926;

    t30 = (((x121|x122)<=x123)+x124);

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 72U;
	static int8_t x126 = 12;
	int32_t x127 = INT32_MAX;
	int8_t x128 = 1;
	volatile int32_t t31 = -25;

    t31 = (((x125|x126)<=x127)+x128);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 7U;
	int8_t x130 = INT8_MIN;
	int8_t x132 = -3;
	int32_t t32 = -393207;

    t32 = (((x129|x130)<=x131)+x132);

    if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int16_t x134 = INT16_MAX;
	static volatile uint64_t t33 = 1480390897712LLU;

    t33 = (((x133|x134)<=x135)+x136);

    if (t33 != 7228484078467060LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x138 = -11;
	int16_t x139 = INT16_MAX;
	volatile int32_t t34 = 258837701;

    t34 = (((x137|x138)<=x139)+x140);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int64_t x143 = -1080415362507816447LL;
	int32_t x144 = -1;
	static volatile int32_t t35 = 1833;

    t35 = (((x141|x142)<=x143)+x144);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = 2;
	int32_t x147 = 0;
	int8_t x148 = -1;
	static volatile int32_t t36 = 104;

    t36 = (((x145|x146)<=x147)+x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	volatile uint16_t x150 = 1U;
	int64_t x151 = 8794008363025LL;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 28;

    t37 = (((x149|x150)<=x151)+x152);

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = UINT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -1;

    t38 = (((x153|x154)<=x155)+x156);

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = -1;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MIN;
	volatile int32_t x160 = INT32_MIN;
	static int32_t t39 = INT32_MIN;

    t39 = (((x157|x158)<=x159)+x160);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	static uint8_t x163 = 6U;
	uint64_t x164 = UINT64_MAX;

    t40 = (((x161|x162)<=x163)+x164);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	volatile uint8_t x166 = 0U;
	int32_t x167 = INT32_MAX;
	static int16_t x168 = -239;
	volatile int32_t t41 = 84118;

    t41 = (((x165|x166)<=x167)+x168);

    if (t41 != -239) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	static int64_t x170 = INT64_MIN;
	static int16_t x172 = 805;
	volatile int32_t t42 = -113;

    t42 = (((x169|x170)<=x171)+x172);

    if (t42 != 806) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = 2178U;
	static uint64_t x174 = 11516878668098373LLU;
	uint32_t x175 = 2429045U;
	int32_t x176 = INT32_MAX;

    t43 = (((x173|x174)<=x175)+x176);

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 5685319LLU;
	uint64_t x178 = 3288827720548393840LLU;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t t44 = -70457;

    t44 = (((x177|x178)<=x179)+x180);

    if (t44 != 146) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = 704U;
	int32_t x184 = -1926;

    t45 = (((x181|x182)<=x183)+x184);

    if (t45 != -1926) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	volatile int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	static uint64_t x188 = 73904462546LLU;
	volatile uint64_t t46 = 12LLU;

    t46 = (((x185|x186)<=x187)+x188);

    if (t46 != 73904462547LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 860422877U;
	static int16_t x190 = -17;
	int32_t x191 = INT32_MIN;
	static uint64_t x192 = 5999866341011LLU;
	static volatile uint64_t t47 = 238418670977584794LLU;

    t47 = (((x189|x190)<=x191)+x192);

    if (t47 != 5999866341011LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = 15317U;
	static int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	static volatile int64_t x196 = INT64_MAX;
	int64_t t48 = INT64_MAX;

    t48 = (((x193|x194)<=x195)+x196);

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	static uint8_t x198 = UINT8_MAX;
	uint8_t x199 = 1U;
	uint32_t t49 = 165528594U;

    t49 = (((x197|x198)<=x199)+x200);

    if (t49 != 704330883U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 13U;
	static uint32_t x202 = 98798943U;
	static int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = -5749424391991956LL;

    t50 = (((x201|x202)<=x203)+x204);

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	volatile int16_t x207 = INT16_MAX;
	uint64_t x208 = 116170715371950259LLU;
	volatile uint64_t t51 = 6423888347204LLU;

    t51 = (((x205|x206)<=x207)+x208);

    if (t51 != 116170715371950260LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	static int64_t x210 = -1LL;
	int32_t x211 = INT32_MAX;
	int8_t x212 = 8;
	static int32_t t52 = -177;

    t52 = (((x209|x210)<=x211)+x212);

    if (t52 != 9) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x214 = 556793848U;
	static volatile int32_t x215 = 332585;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

    t53 = (((x213|x214)<=x215)+x216);

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x217 = 3377138LL;
	int8_t x218 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t54 = INT64_MIN;

    t54 = (((x217|x218)<=x219)+x220);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = -7;
	uint32_t x223 = UINT32_MAX;
	volatile int8_t x224 = -1;
	volatile int32_t t55 = 1;

    t55 = (((x221|x222)<=x223)+x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	int64_t x227 = INT64_MIN;
	volatile int16_t x228 = -1;
	volatile int32_t t56 = 70627;

    t56 = (((x225|x226)<=x227)+x228);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x230 = INT8_MAX;
	int16_t x231 = -1;
	int64_t x232 = INT64_MAX;
	volatile int64_t t57 = INT64_MAX;

    t57 = (((x229|x230)<=x231)+x232);

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MIN;
	static volatile int64_t x235 = 736069107103062621LL;
	int32_t t58 = -8714866;

    t58 = (((x233|x234)<=x235)+x236);

    if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int32_t x238 = 18220;
	static int8_t x239 = 1;
	int8_t x240 = -1;
	int32_t t59 = 1;

    t59 = (((x237|x238)<=x239)+x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = 1LLU;
	volatile uint32_t x242 = 899U;
	int64_t x243 = -1LL;
	static int64_t x244 = INT64_MIN;
	volatile int64_t t60 = 3416377291395LL;

    t60 = (((x241|x242)<=x243)+x244);

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile int64_t x246 = INT64_MAX;
	volatile uint8_t x247 = 0U;
	uint32_t x248 = 3706U;
	uint32_t t61 = 30U;

    t61 = (((x245|x246)<=x247)+x248);

    if (t61 != 3706U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	volatile uint8_t x252 = 4U;
	int32_t t62 = 27597;

    t62 = (((x249|x250)<=x251)+x252);

    if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	uint16_t x254 = UINT16_MAX;
	uint8_t x255 = UINT8_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t63 = INT32_MIN;

    t63 = (((x253|x254)<=x255)+x256);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x258 = INT32_MIN;
	volatile int64_t x259 = INT64_MAX;
	volatile int32_t x260 = -1;
	int32_t t64 = -117762;

    t64 = (((x257|x258)<=x259)+x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	volatile int8_t x263 = 12;

    t65 = (((x261|x262)<=x263)+x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = 41;
	int8_t x268 = INT8_MAX;

    t66 = (((x265|x266)<=x267)+x268);

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = -1;
	static int64_t x272 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

    t67 = (((x269|x270)<=x271)+x272);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 188261LLU;
	uint64_t x274 = 4606979766347LLU;
	int16_t x275 = INT16_MIN;
	static uint8_t x276 = 19U;
	static volatile int32_t t68 = 20833079;

    t68 = (((x273|x274)<=x275)+x276);

    if (t68 != 20) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 973681364620LLU;
	static uint16_t x279 = UINT16_MAX;
	static volatile int32_t x280 = 11251;
	int32_t t69 = -365654;

    t69 = (((x277|x278)<=x279)+x280);

    if (t69 != 11251) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x282 = -1;
	int8_t x283 = 0;
	int64_t x284 = -8LL;

    t70 = (((x281|x282)<=x283)+x284);

    if (t70 != -7LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MAX;
	int64_t x288 = -1LL;
	volatile int64_t t71 = 1LL;

    t71 = (((x285|x286)<=x287)+x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MIN;
	uint64_t x291 = UINT64_MAX;
	static int32_t x292 = -1;
	int32_t t72 = -1753;

    t72 = (((x289|x290)<=x291)+x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x294 = UINT64_MAX;
	static int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t73 = INT32_MIN;

    t73 = (((x293|x294)<=x295)+x296);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x298 = 4892019U;
	static int32_t x299 = 40093;
	uint16_t x300 = 5U;
	static volatile int32_t t74 = -5756003;

    t74 = (((x297|x298)<=x299)+x300);

    if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 8833U;
	static int64_t x302 = INT64_MIN;
	uint8_t x303 = 1U;
	int64_t x304 = INT64_MIN;
	int64_t t75 = -8162775LL;

    t75 = (((x301|x302)<=x303)+x304);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = UINT8_MAX;
	volatile uint8_t x306 = 33U;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -44660172;

    t76 = (((x305|x306)<=x307)+x308);

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	volatile int16_t x312 = INT16_MIN;
	int32_t t77 = 32;

    t77 = (((x309|x310)<=x311)+x312);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -4;
	uint16_t x314 = 222U;
	static int32_t x316 = -1291574;
	volatile int32_t t78 = 31;

    t78 = (((x313|x314)<=x315)+x316);

    if (t78 != -1291573) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	int32_t x318 = -2330771;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = -3482;

    t79 = (((x317|x318)<=x319)+x320);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 906065357U;
	uint32_t x322 = UINT32_MAX;
	static uint64_t x323 = 1064961LLU;
	static volatile uint64_t t80 = UINT64_MAX;

    t80 = (((x321|x322)<=x323)+x324);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = -1LL;
	static volatile int16_t x327 = 5;
	int32_t x328 = -1908393;
	volatile int32_t t81 = -1;

    t81 = (((x325|x326)<=x327)+x328);

    if (t81 != -1908392) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 2U;
	volatile uint16_t x331 = 3U;
	int16_t x332 = INT16_MIN;
	static int32_t t82 = -285568;

    t82 = (((x329|x330)<=x331)+x332);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x335 = 46;
	static int16_t x336 = INT16_MAX;
	int32_t t83 = -1;

    t83 = (((x333|x334)<=x335)+x336);

    if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = 13754U;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -3351;
	int32_t t84 = 1;

    t84 = (((x337|x338)<=x339)+x340);

    if (t84 != -3350) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 1441799295704667038LLU;
	volatile uint8_t x343 = 51U;
	int64_t x344 = -1651LL;
	volatile int64_t t85 = -448655LL;

    t85 = (((x341|x342)<=x343)+x344);

    if (t85 != -1651LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x349 = -655142;
	uint64_t x350 = 41145378832LLU;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;

    t86 = (((x349|x350)<=x351)+x352);

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x353 = INT16_MAX;
	uint8_t x354 = UINT8_MAX;
	uint16_t x355 = 0U;

    t87 = (((x353|x354)<=x355)+x356);

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	volatile int32_t t88 = 320324182;

    t88 = (((x357|x358)<=x359)+x360);

    if (t88 != 21) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x361 = INT8_MIN;
	static uint64_t x362 = UINT64_MAX;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	volatile int32_t t89 = INT32_MIN;

    t89 = (((x361|x362)<=x363)+x364);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = UINT16_MAX;
	uint32_t x367 = 243079U;
	static volatile int32_t t90 = 13938688;

    t90 = (((x365|x366)<=x367)+x368);

    if (t90 != 26) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x370 = 1486992694LLU;
	static uint32_t x371 = 422U;
	int16_t x372 = INT16_MAX;
	int32_t t91 = 419;

    t91 = (((x369|x370)<=x371)+x372);

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x373 = INT32_MIN;
	int16_t x374 = -1;
	int16_t x375 = INT16_MIN;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t92 = -437;

    t92 = (((x373|x374)<=x375)+x376);

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = -1LL;
	volatile uint8_t x378 = 72U;
	int16_t x379 = -3;
	uint64_t x380 = 1628529LLU;

    t93 = (((x377|x378)<=x379)+x380);

    if (t93 != 1628529LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x383 = INT16_MAX;
	static volatile uint64_t x384 = 26276162001684081LLU;
	static uint64_t t94 = 447LLU;

    t94 = (((x381|x382)<=x383)+x384);

    if (t94 != 26276162001684082LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x385 = INT32_MIN;
	static int16_t x387 = INT16_MIN;
	volatile uint8_t x388 = 0U;
	volatile int32_t t95 = -41;

    t95 = (((x385|x386)<=x387)+x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = INT8_MIN;
	volatile int64_t x391 = 39191172018LL;
	static volatile int32_t t96 = -1;

    t96 = (((x389|x390)<=x391)+x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x394 = 0LLU;
	int16_t x396 = -468;
	volatile int32_t t97 = -13;

    t97 = (((x393|x394)<=x395)+x396);

    if (t97 != -467) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x397 = -3LL;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	int64_t t98 = INT64_MIN;

    t98 = (((x397|x398)<=x399)+x400);

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int8_t x402 = 1;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 1582020U;

    t99 = (((x401|x402)<=x403)+x404);

    if (t99 != 1582020U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x406 = INT64_MIN;
	static uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t100 = -6;

    t100 = (((x405|x406)<=x407)+x408);

    if (t100 != -127) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MIN;
	volatile int32_t x411 = -24940;
	uint8_t x412 = 61U;

    t101 = (((x409|x410)<=x411)+x412);

    if (t101 != 61) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x413 = UINT16_MAX;
	int16_t x414 = -1;
	static volatile int8_t x416 = 6;
	int32_t t102 = 0;

    t102 = (((x413|x414)<=x415)+x416);

    if (t102 != 7) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x418 = 111;
	int32_t x419 = INT32_MIN;
	volatile int32_t t103 = -38;

    t103 = (((x417|x418)<=x419)+x420);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x421 = 532U;
	int8_t x422 = INT8_MIN;
	static int64_t x423 = INT64_MAX;
	int64_t x424 = -1LL;
	int64_t t104 = -464426944029886659LL;

    t104 = (((x421|x422)<=x423)+x424);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x425 = -1LL;
	int8_t x426 = INT8_MIN;
	int32_t x427 = 125936286;
	uint16_t x428 = UINT16_MAX;

    t105 = (((x425|x426)<=x427)+x428);

    if (t105 != 65536) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x430 = -855;
	uint32_t x431 = 973436U;
	uint32_t x432 = 12550842U;

    t106 = (((x429|x430)<=x431)+x432);

    if (t106 != 12550842U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x436 = INT64_MIN;
	volatile int64_t t107 = -1LL;

    t107 = (((x433|x434)<=x435)+x436);

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x437 = UINT16_MAX;
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = -1;

    t108 = (((x437|x438)<=x439)+x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x441 = 10649U;
	uint8_t x442 = 26U;
	static uint8_t x443 = 105U;
	uint16_t x444 = 13668U;
	volatile int32_t t109 = 1;

    t109 = (((x441|x442)<=x443)+x444);

    if (t109 != 13668) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x445 = INT64_MAX;
	uint32_t x447 = 290803U;
	static int64_t x448 = INT64_MIN;
	volatile int64_t t110 = -520763464250LL;

    t110 = (((x445|x446)<=x447)+x448);

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	static volatile int32_t t111 = -752871403;

    t111 = (((x449|x450)<=x451)+x452);

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x453 = INT32_MAX;
	int16_t x454 = 16;
	volatile int64_t x455 = INT64_MAX;
	static int8_t x456 = INT8_MAX;

    t112 = (((x453|x454)<=x455)+x456);

    if (t112 != 128) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x457 = 159LLU;
	int32_t x458 = -1664;
	int8_t x459 = -1;
	uint8_t x460 = 7U;
	int32_t t113 = 14813085;

    t113 = (((x457|x458)<=x459)+x460);

    if (t113 != 8) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x461 = -1LL;
	uint16_t x462 = UINT16_MAX;
	uint64_t x463 = 2795LLU;
	volatile uint16_t x464 = 110U;
	int32_t t114 = -193410;

    t114 = (((x461|x462)<=x463)+x464);

    if (t114 != 110) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x466 = 0U;
	uint16_t x467 = UINT16_MAX;
	uint16_t x468 = 25U;
	volatile int32_t t115 = 99903;

    t115 = (((x465|x466)<=x467)+x468);

    if (t115 != 26) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x469 = 2319763179401328130LLU;
	int8_t x470 = INT8_MIN;
	volatile uint32_t x472 = 7795U;

    t116 = (((x469|x470)<=x471)+x472);

    if (t116 != 7795U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x473 = 3208395946683994994LLU;
	uint32_t x475 = UINT32_MAX;
	int32_t t117 = INT32_MAX;

    t117 = (((x473|x474)<=x475)+x476);

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x477 = 484U;
	static uint8_t x479 = UINT8_MAX;
	int64_t x480 = INT64_MIN;
	int64_t t118 = INT64_MIN;

    t118 = (((x477|x478)<=x479)+x480);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x481 = 2;
	int32_t x482 = 7591;
	uint64_t x484 = UINT64_MAX;

    t119 = (((x481|x482)<=x483)+x484);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x486 = 115U;
	uint16_t x487 = 22622U;
	static volatile uint32_t x488 = 59U;
	volatile uint32_t t120 = 3343915U;

    t120 = (((x485|x486)<=x487)+x488);

    if (t120 != 60U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x489 = -1;
	int32_t x492 = -67;
	int32_t t121 = -16;

    t121 = (((x489|x490)<=x491)+x492);

    if (t121 != -66) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x493 = 50320074U;
	int8_t x494 = 12;
	uint32_t t122 = UINT32_MAX;

    t122 = (((x493|x494)<=x495)+x496);

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x497 = INT32_MAX;
	int32_t x499 = -1;
	uint16_t x500 = UINT16_MAX;

    t123 = (((x497|x498)<=x499)+x500);

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x503 = UINT32_MAX;
	uint8_t x504 = UINT8_MAX;
	static int32_t t124 = -80507;

    t124 = (((x501|x502)<=x503)+x504);

    if (t124 != 256) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = INT32_MIN;
	uint32_t x506 = 1438625992U;
	uint64_t x507 = 145325293880444914LLU;
	static int64_t x508 = -1LL;
	volatile int64_t t125 = 129253LL;

    t125 = (((x505|x506)<=x507)+x508);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x509 = INT16_MIN;
	int32_t x512 = INT32_MIN;

    t126 = (((x509|x510)<=x511)+x512);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x513 = INT16_MAX;
	int32_t x514 = -11;
	volatile int8_t x515 = INT8_MAX;
	int8_t x516 = -5;

    t127 = (((x513|x514)<=x515)+x516);

    if (t127 != -4) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x517 = -8;
	int8_t x518 = INT8_MIN;
	uint8_t x519 = UINT8_MAX;
	uint16_t x520 = UINT16_MAX;

    t128 = (((x517|x518)<=x519)+x520);

    if (t128 != 65536) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x521 = -1;
	int64_t x522 = INT64_MAX;
	static uint8_t x523 = UINT8_MAX;
	static volatile uint8_t x524 = 1U;
	volatile int32_t t129 = -468386;

    t129 = (((x521|x522)<=x523)+x524);

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x526 = 4280U;
	volatile uint16_t x527 = UINT16_MAX;
	static int8_t x528 = INT8_MAX;

    t130 = (((x525|x526)<=x527)+x528);

    if (t130 != 128) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x529 = INT64_MIN;
	uint32_t x530 = 3556U;
	uint64_t x531 = 658767LLU;
	uint16_t x532 = 70U;

    t131 = (((x529|x530)<=x531)+x532);

    if (t131 != 70) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x533 = 1143738696LL;
	volatile int8_t x535 = 33;
	uint64_t x536 = UINT64_MAX;
	uint64_t t132 = UINT64_MAX;

    t132 = (((x533|x534)<=x535)+x536);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x538 = 38U;
	int32_t x539 = -917833;
	int8_t x540 = INT8_MIN;
	int32_t t133 = -213207;

    t133 = (((x537|x538)<=x539)+x540);

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x541 = 848889304412LLU;
	int8_t x542 = INT8_MIN;
	uint32_t x543 = 95165684U;
	int32_t x544 = -48903;
	int32_t t134 = -50;

    t134 = (((x541|x542)<=x543)+x544);

    if (t134 != -48903) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x545 = 4729008744616171114LLU;
	volatile int16_t x546 = -1;
	int8_t x547 = 3;
	uint8_t x548 = 1U;
	static int32_t t135 = 2;

    t135 = (((x545|x546)<=x547)+x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x550 = 2;
	uint16_t x551 = 1U;

    t136 = (((x549|x550)<=x551)+x552);

    if (t136 != 3993) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = 15468724766LL;
	volatile uint64_t x554 = 66716LLU;
	static volatile int8_t x555 = -5;
	volatile uint8_t x556 = UINT8_MAX;
	volatile int32_t t137 = 3741168;

    t137 = (((x553|x554)<=x555)+x556);

    if (t137 != 256) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x557 = INT32_MAX;
	int8_t x558 = INT8_MIN;
	volatile int32_t x559 = -1009756;
	int32_t t138 = 273;

    t138 = (((x557|x558)<=x559)+x560);

    if (t138 != 12) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x561 = -11;
	uint64_t x562 = 22286234336LLU;
	int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MIN;
	static int32_t t139 = -1015240;

    t139 = (((x561|x562)<=x563)+x564);

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x565 = INT64_MIN;
	static uint16_t x566 = 28U;
	int32_t x567 = INT32_MIN;
	uint64_t x568 = 694340315LLU;
	volatile uint64_t t140 = 123150580LLU;

    t140 = (((x565|x566)<=x567)+x568);

    if (t140 != 694340316LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x570 = UINT32_MAX;
	uint32_t x571 = 1122U;
	static int32_t x572 = INT32_MIN;
	volatile int32_t t141 = 429;

    t141 = (((x569|x570)<=x571)+x572);

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x573 = INT8_MAX;
	uint32_t x574 = UINT32_MAX;
	int16_t x575 = -486;
	static volatile uint32_t t142 = 264U;

    t142 = (((x573|x574)<=x575)+x576);

    if (t142 != 5U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x577 = -1;
	volatile uint64_t x578 = 589683887461129LLU;
	int64_t x579 = 13036300273463397LL;

    t143 = (((x577|x578)<=x579)+x580);

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x581 = 9U;
	int16_t x582 = -1;
	uint32_t x584 = UINT32_MAX;
	volatile uint32_t t144 = 356203330U;

    t144 = (((x581|x582)<=x583)+x584);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x586 = 8U;
	uint8_t x588 = 0U;
	volatile int32_t t145 = -110226283;

    t145 = (((x585|x586)<=x587)+x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = INT64_MIN;
	static uint8_t x590 = 12U;
	int8_t x591 = INT8_MAX;
	int16_t x592 = INT16_MIN;
	volatile int32_t t146 = -641974542;

    t146 = (((x589|x590)<=x591)+x592);

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x593 = 343U;
	int64_t x594 = INT64_MIN;
	volatile int16_t x595 = INT16_MIN;
	uint64_t x596 = 211604150LLU;
	uint64_t t147 = 33331LLU;

    t147 = (((x593|x594)<=x595)+x596);

    if (t147 != 211604151LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x597 = -1889;
	int8_t x598 = INT8_MIN;
	static volatile int16_t x600 = INT16_MIN;
	int32_t t148 = 1;

    t148 = (((x597|x598)<=x599)+x600);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x601 = INT16_MIN;
	int32_t x602 = -121;
	int16_t x603 = -1;
	int32_t x604 = INT32_MIN;
	volatile int32_t t149 = 46320808;

    t149 = (((x601|x602)<=x603)+x604);

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	volatile int16_t x606 = -9;
	int32_t x607 = INT32_MAX;
	int64_t x608 = 20204435168913726LL;
	volatile int64_t t150 = 53362LL;

    t150 = (((x605|x606)<=x607)+x608);

    if (t150 != 20204435168913726LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t t151 = -30889212;

    t151 = (((x609|x610)<=x611)+x612);

    if (t151 != 255) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x613 = UINT64_MAX;
	uint32_t x615 = 13188U;
	int16_t x616 = -1;

    t152 = (((x613|x614)<=x615)+x616);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x617 = -1LL;
	volatile uint32_t x618 = 0U;
	int8_t x619 = INT8_MIN;
	int8_t x620 = -10;
	volatile int32_t t153 = 8554228;

    t153 = (((x617|x618)<=x619)+x620);

    if (t153 != -10) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x621 = INT16_MIN;
	int16_t x622 = INT16_MIN;
	uint32_t x623 = UINT32_MAX;
	volatile int32_t x624 = INT32_MIN;
	static int32_t t154 = 4109872;

    t154 = (((x621|x622)<=x623)+x624);

    if (t154 != -2147483647) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x625 = 3;
	uint16_t x626 = 7U;
	volatile int64_t x628 = 26055LL;
	int64_t t155 = -489635788598LL;

    t155 = (((x625|x626)<=x627)+x628);

    if (t155 != 26056LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x630 = INT64_MIN;
	int32_t x631 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	uint32_t t156 = 118571829U;

    t156 = (((x629|x630)<=x631)+x632);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x633 = 0;
	static uint8_t x634 = 34U;
	int8_t x635 = INT8_MIN;
	uint16_t x636 = 25U;
	static volatile int32_t t157 = -19;

    t157 = (((x633|x634)<=x635)+x636);

    if (t157 != 25) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x637 = 309;
	int16_t x638 = INT16_MAX;
	int16_t x640 = -1;
	volatile int32_t t158 = 1520;

    t158 = (((x637|x638)<=x639)+x640);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x641 = 16742846979904LLU;
	uint16_t x642 = 1220U;
	uint16_t x643 = 7411U;
	static int16_t x644 = INT16_MAX;
	int32_t t159 = 1395;

    t159 = (((x641|x642)<=x643)+x644);

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x646 = -482626511750747LL;
	uint64_t x647 = 1LLU;
	int64_t t160 = INT64_MIN;

    t160 = (((x645|x646)<=x647)+x648);

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x651 = -1;
	int32_t t161 = -8865414;

    t161 = (((x649|x650)<=x651)+x652);

    if (t161 != 65536) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x653 = UINT8_MAX;
	volatile int32_t x655 = 363239;
	int32_t t162 = -44;

    t162 = (((x653|x654)<=x655)+x656);

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x657 = -1013087LL;
	int16_t x658 = -1;
	int32_t x659 = INT32_MIN;
	static uint64_t x660 = UINT64_MAX;
	static uint64_t t163 = UINT64_MAX;

    t163 = (((x657|x658)<=x659)+x660);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x662 = 8;
	volatile int64_t x663 = INT64_MIN;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t164 = INT32_MIN;

    t164 = (((x661|x662)<=x663)+x664);

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x665 = INT32_MIN;
	uint32_t x666 = 8352278U;
	volatile uint16_t x667 = 11U;
	int16_t x668 = INT16_MIN;
	volatile int32_t t165 = 690965;

    t165 = (((x665|x666)<=x667)+x668);

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x669 = INT64_MAX;
	static int64_t x670 = -32204151325LL;
	volatile int8_t x671 = INT8_MIN;
	uint16_t x672 = UINT16_MAX;

    t166 = (((x669|x670)<=x671)+x672);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x673 = 1U;
	static int32_t x674 = INT32_MIN;
	int32_t t167 = 12160704;

    t167 = (((x673|x674)<=x675)+x676);

    if (t167 != -23) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x678 = 5U;
	volatile int8_t x679 = -1;
	static volatile int64_t x680 = -1LL;
	int64_t t168 = 3906158697354552LL;

    t168 = (((x677|x678)<=x679)+x680);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x681 = 2U;
	int8_t x682 = 23;
	int8_t x683 = INT8_MIN;
	uint64_t x684 = 4374LLU;
	volatile uint64_t t169 = 1LLU;

    t169 = (((x681|x682)<=x683)+x684);

    if (t169 != 4374LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x685 = -2595;
	int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MAX;
	static int64_t x688 = INT64_MIN;
	int64_t t170 = -1LL;

    t170 = (((x685|x686)<=x687)+x688);

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x690 = INT16_MIN;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t171 = UINT64_MAX;

    t171 = (((x689|x690)<=x691)+x692);

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x693 = 0;
	int8_t x695 = -1;
	static volatile int16_t x696 = -1;
	static volatile int32_t t172 = 0;

    t172 = (((x693|x694)<=x695)+x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x699 = 224946235;
	volatile uint64_t x700 = 23LLU;
	uint64_t t173 = 12661645843LLU;

    t173 = (((x697|x698)<=x699)+x700);

    if (t173 != 24LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x701 = 7LLU;
	int8_t x702 = INT8_MIN;
	int8_t x703 = -1;
	uint32_t t174 = 3U;

    t174 = (((x701|x702)<=x703)+x704);

    if (t174 != 251U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x707 = INT32_MIN;
	volatile int64_t t175 = 427783533640217539LL;

    t175 = (((x705|x706)<=x707)+x708);

    if (t175 != -15272698LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x710 = INT16_MAX;
	int64_t x711 = 1548673LL;
	static int64_t x712 = -1471LL;

    t176 = (((x709|x710)<=x711)+x712);

    if (t176 != -1471LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x713 = INT64_MAX;
	int8_t x714 = INT8_MAX;
	static volatile int8_t x715 = -1;
	uint16_t x716 = 0U;
	int32_t t177 = -201858961;

    t177 = (((x713|x714)<=x715)+x716);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x719 = -3621LL;

    t178 = (((x717|x718)<=x719)+x720);

    if (t178 != 15047154) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x722 = 124U;
	volatile int32_t x724 = 123906412;
	volatile int32_t t179 = -892749003;

    t179 = (((x721|x722)<=x723)+x724);

    if (t179 != 123906412) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x725 = UINT64_MAX;
	int32_t x726 = INT32_MAX;
	int8_t x728 = 1;
	static volatile int32_t t180 = -8;

    t180 = (((x725|x726)<=x727)+x728);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x729 = UINT16_MAX;
	volatile uint8_t x730 = 11U;
	int32_t x731 = INT32_MAX;
	static volatile int64_t x732 = -1LL;
	int64_t t181 = 3791695371296322421LL;

    t181 = (((x729|x730)<=x731)+x732);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x733 = -1;
	uint16_t x735 = 128U;
	int8_t x736 = 1;
	static int32_t t182 = 694;

    t182 = (((x733|x734)<=x735)+x736);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x739 = 22034U;
	static int64_t x740 = -1LL;
	volatile int64_t t183 = -350996685587539254LL;

    t183 = (((x737|x738)<=x739)+x740);

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x741 = INT64_MIN;
	static int8_t x742 = -1;
	int32_t x743 = INT32_MIN;
	int64_t x744 = INT64_MAX;
	int64_t t184 = INT64_MAX;

    t184 = (((x741|x742)<=x743)+x744);

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x746 = INT8_MIN;
	int16_t x747 = -1;
	static volatile int32_t x748 = 717;

    t185 = (((x745|x746)<=x747)+x748);

    if (t185 != 718) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x749 = 33888151;
	volatile uint16_t x751 = 506U;
	uint16_t x752 = UINT16_MAX;
	volatile int32_t t186 = -95599591;

    t186 = (((x749|x750)<=x751)+x752);

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x753 = UINT8_MAX;
	uint32_t x754 = 1U;
	static int64_t x755 = INT64_MIN;
	static int16_t x756 = -1;
	volatile int32_t t187 = -16224;

    t187 = (((x753|x754)<=x755)+x756);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x757 = 2U;
	int8_t x758 = INT8_MIN;
	int8_t x759 = INT8_MIN;
	int32_t x760 = INT32_MIN;
	static int32_t t188 = INT32_MIN;

    t188 = (((x757|x758)<=x759)+x760);

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x761 = 111197;
	int64_t x763 = 2LL;
	uint64_t x764 = UINT64_MAX;
	uint64_t t189 = 1LLU;

    t189 = (((x761|x762)<=x763)+x764);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x765 = INT8_MIN;
	uint64_t x766 = 1LLU;
	int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;

    t190 = (((x765|x766)<=x767)+x768);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x769 = 3245658732803365043LLU;
	uint64_t x770 = 97045636LLU;
	uint16_t x771 = UINT16_MAX;
	static uint64_t x772 = 919LLU;
	volatile uint64_t t191 = 8087531199054786LLU;

    t191 = (((x769|x770)<=x771)+x772);

    if (t191 != 919LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x773 = 1088U;
	uint16_t x776 = 8U;
	volatile int32_t t192 = 908696;

    t192 = (((x773|x774)<=x775)+x776);

    if (t192 != 9) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x778 = 42;
	static int8_t x779 = 1;
	int8_t x780 = -1;
	static int32_t t193 = -188592304;

    t193 = (((x777|x778)<=x779)+x780);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x781 = -1;
	int8_t x784 = INT8_MIN;
	static int32_t t194 = 8953419;

    t194 = (((x781|x782)<=x783)+x784);

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x785 = -5125;
	volatile int8_t x787 = 0;
	int64_t x788 = -1LL;
	int64_t t195 = -70000573126717991LL;

    t195 = (((x785|x786)<=x787)+x788);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x789 = INT16_MAX;
	int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MAX;
	volatile int32_t x792 = -30492;
	volatile int32_t t196 = 37;

    t196 = (((x789|x790)<=x791)+x792);

    if (t196 != -30491) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x793 = UINT32_MAX;
	uint32_t x794 = 371577986U;
	uint32_t x795 = UINT32_MAX;
	int16_t x796 = -13;
	int32_t t197 = 1;

    t197 = (((x793|x794)<=x795)+x796);

    if (t197 != -12) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x798 = 4976630;
	static int16_t x800 = INT16_MAX;
	volatile int32_t t198 = -1;

    t198 = (((x797|x798)<=x799)+x800);

    if (t198 != 32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x803 = -3;
	int16_t x804 = INT16_MIN;

    t199 = (((x801|x802)<=x803)+x804);

    if (t199 != -32767) { NG(); } else { ; }
	
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

