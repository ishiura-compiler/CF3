
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

int8_t x10 = 6;
int64_t x14 = 3367213LL;
int64_t t3 = 15023359856139LL;
volatile int32_t x32 = 368802;
volatile int16_t x36 = INT16_MAX;
volatile int8_t x39 = INT8_MIN;
volatile uint64_t t9 = 302755512472LLU;
volatile int16_t x47 = INT16_MIN;
int32_t x52 = -26306002;
int16_t x70 = -5;
static uint32_t x85 = UINT32_MAX;
static uint32_t x88 = 3459U;
uint16_t x91 = 131U;
volatile int32_t t19 = -1;
int64_t x93 = -1LL;
int64_t t24 = -19414LL;
static int32_t x124 = -127080;
static int64_t t28 = -854933532LL;
static uint32_t x145 = 78219U;
volatile int16_t x151 = -1;
static uint64_t x154 = 5168030316LLU;
static int16_t x157 = INT16_MIN;
volatile int16_t x163 = -26;
static int8_t x164 = -27;
uint8_t x174 = 23U;
int64_t x188 = -25687376895LL;
int64_t x191 = -410708LL;
int64_t x196 = INT64_MIN;
int8_t x203 = -34;
volatile int32_t t41 = 1793;
uint8_t x206 = 41U;
volatile uint32_t x207 = 4949919U;
int8_t x237 = -26;
int16_t x245 = 0;
uint32_t x251 = 1290U;
volatile uint8_t x252 = 3U;
uint32_t x253 = 4391160U;
static int8_t x254 = INT8_MIN;
static uint64_t x256 = UINT64_MAX;
static uint64_t t52 = 41639LLU;
volatile int32_t t54 = 131541201;
uint16_t x271 = 146U;
volatile int32_t t55 = -30;
uint16_t x282 = 15298U;
int64_t t56 = 1938519498537LL;
volatile int32_t x287 = INT32_MIN;
uint8_t x288 = UINT8_MAX;
static int32_t x300 = INT32_MAX;
uint32_t x308 = 111174925U;
int32_t x314 = -1;
int8_t x317 = 0;
int16_t x318 = INT16_MIN;
int8_t x322 = -1;
int16_t x327 = 0;
static uint32_t t67 = 1092489U;
static volatile uint16_t x330 = 8U;
volatile uint32_t x332 = UINT32_MAX;
int8_t x333 = INT8_MIN;
volatile uint16_t x335 = 2U;
int64_t t69 = 4116LL;
int16_t x340 = INT16_MAX;
volatile uint32_t t72 = 1U;
int64_t x350 = -542730050148LL;
int32_t x359 = INT32_MIN;
int16_t x373 = INT16_MIN;
volatile uint16_t x374 = UINT16_MAX;
uint32_t t78 = 2941U;
uint16_t x385 = UINT16_MAX;
static volatile int16_t x391 = -186;
volatile uint64_t t83 = 1116393LLU;
int8_t x401 = INT8_MAX;
int16_t x403 = INT16_MAX;
static uint32_t x406 = UINT32_MAX;
static int32_t x407 = INT32_MIN;
static int16_t x424 = -1;
int8_t x429 = INT8_MAX;
volatile uint8_t x430 = 3U;
uint8_t x432 = 4U;
volatile int32_t x441 = INT32_MIN;
volatile int8_t x442 = INT8_MIN;
static uint64_t x449 = 329LLU;
uint32_t x450 = UINT32_MAX;
static int64_t x453 = INT64_MAX;
int32_t t95 = 2;
volatile int64_t x476 = INT64_MIN;
volatile uint16_t x502 = UINT16_MAX;
static volatile int32_t t103 = -24;
static volatile int8_t x506 = 5;
uint16_t x510 = 30U;
uint32_t x511 = 6112U;
static uint64_t x523 = UINT64_MAX;
int32_t t109 = 2075769;
uint32_t x530 = 40752769U;
static volatile int64_t x535 = INT64_MIN;
static volatile int64_t t111 = 2976633LL;
uint64_t x538 = 263544465LLU;
static uint64_t t112 = 19960LLU;
uint8_t x546 = 0U;
int64_t t114 = -124154798602743LL;
int64_t t116 = 4507LL;
volatile int16_t x563 = INT16_MIN;
int16_t x564 = INT16_MIN;
int32_t x573 = -52331914;
int16_t x574 = INT16_MIN;
volatile uint32_t x575 = 10U;
static int64_t t118 = 986LL;
int8_t x580 = 11;
int64_t x592 = 17564225227812411LL;
volatile int8_t x595 = -1;
uint16_t x597 = UINT16_MAX;
uint64_t x600 = UINT64_MAX;
uint64_t t122 = 143680LLU;
volatile int32_t x605 = 1377;
int8_t x607 = -4;
int64_t x608 = INT64_MIN;
int8_t x614 = INT8_MAX;
int32_t x619 = 75;
static volatile int8_t x624 = INT8_MAX;
uint32_t x631 = UINT32_MAX;
static volatile int64_t t131 = -3570924143086515109LL;
volatile int64_t t132 = -1LL;
int8_t x653 = INT8_MAX;
volatile int32_t x658 = -3083;
int16_t x660 = 19;
static int16_t x662 = INT16_MIN;
uint32_t x668 = 875U;
uint64_t t137 = 179LLU;
int64_t t138 = 68754261LL;
int32_t x680 = 502;
int16_t x684 = -1;
volatile uint64_t x690 = 50628555056220LLU;
static int64_t x700 = -1LL;
int64_t x707 = -1LL;
volatile int64_t t145 = -5205710895794LL;
uint16_t x709 = 9241U;
int32_t t147 = 13849;
int16_t x722 = -1;
int32_t x730 = -1;
int32_t x734 = INT32_MIN;
int64_t x736 = INT64_MAX;
int16_t x738 = -229;
int32_t x740 = 550734419;
int64_t x741 = 1999331354LL;
volatile int64_t t153 = 60333856LL;
uint8_t x749 = 10U;
uint32_t x757 = UINT32_MAX;
int8_t x783 = INT8_MAX;
int64_t t161 = -737LL;
int64_t x797 = 1546699LL;
static volatile int8_t x800 = INT8_MIN;
static volatile int64_t t164 = 50454341151LL;
int64_t x815 = -1952LL;
static volatile int64_t t167 = 1LL;
int16_t x820 = INT16_MAX;
uint64_t t168 = 7397179413LLU;
static volatile int16_t x822 = 12;
int64_t t169 = -289LL;
volatile uint8_t x840 = UINT8_MAX;
uint64_t t173 = 28525558671642LLU;
int32_t x845 = INT32_MAX;
volatile int32_t x852 = INT32_MAX;
int32_t t175 = 16;
volatile uint64_t t176 = 13150241486987LLU;
static volatile int8_t x857 = INT8_MIN;
int16_t x865 = INT16_MIN;
volatile uint64_t t179 = 15LLU;
static volatile int16_t x872 = INT16_MIN;
int32_t x874 = INT32_MIN;
static int16_t x884 = INT16_MAX;
int8_t x893 = INT8_MIN;
volatile int64_t t184 = 860578242961949LL;
static int8_t x910 = -1;
uint8_t x912 = UINT8_MAX;
static int64_t x916 = -1315008084LL;
int16_t x925 = INT16_MIN;
uint32_t x926 = 31U;
int16_t x927 = INT16_MAX;
volatile int64_t x928 = -134942871288744555LL;
int64_t t191 = 7041934690541LL;
int16_t x934 = 4544;
uint64_t t194 = 355981706076706LLU;
static volatile int64_t x946 = -1LL;
volatile int64_t t197 = 52LL;
static int32_t x958 = 2877;


void f0(void) {
    	volatile int32_t x1 = -3192;
	static uint32_t x2 = 61U;
	int16_t x3 = INT16_MIN;
	volatile int32_t x4 = -24234401;
	volatile uint32_t t0 = 16551233U;

    t0 = ((x1&(x2-x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 174565739U;
	volatile int16_t x6 = INT16_MAX;
	uint64_t x7 = 43393490LLU;
	uint64_t x8 = 3807226131390128LLU;
	uint64_t t1 = 8753959433415923LLU;

    t1 = ((x5&(x6-x7))/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 495U;
	int32_t x11 = -1;
	int64_t x12 = INT64_MAX;
	int64_t t2 = 232125LL;

    t2 = ((x9&(x10-x11))/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;

    t3 = ((x13&(x14-x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MAX;
	int8_t x18 = INT8_MAX;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 23;

    t4 = ((x17&(x18-x19))/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 100LLU;
	volatile int8_t x22 = -1;
	uint8_t x23 = 3U;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 79484LLU;

    t5 = ((x21&(x22-x23))/x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -2;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 2LLU;
	uint32_t x28 = 4143169U;
	static uint64_t t6 = 48346505918743LLU;

    t6 = ((x25&(x26-x27))/x28);

    if (t6 != 4452327209332LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = 18U;
	int32_t x30 = INT32_MAX;
	int64_t x31 = -1LL;
	volatile int64_t t7 = 258822633351064LL;

    t7 = ((x29&(x30-x31))/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 96553;
	int64_t x34 = 1695LL;
	volatile uint8_t x35 = UINT8_MAX;
	volatile int64_t t8 = -4230214562LL;

    t8 = ((x33&(x34-x35))/x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	static int32_t x38 = INT32_MIN;
	static int64_t x40 = -1LL;

    t9 = ((x37&(x38-x39))/x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 2LL;
	volatile uint32_t x42 = UINT32_MAX;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = -1;
	int64_t t10 = -65902203027415769LL;

    t10 = ((x41&(x42-x43))/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 5U;
	int32_t x46 = 68448;
	static uint16_t x48 = 1U;
	static volatile int32_t t11 = 65223;

    t11 = ((x45&(x46-x47))/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -1723;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = -391;
	volatile int32_t t12 = 1598227;

    t12 = ((x49&(x50-x51))/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int16_t x54 = -23;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 8158LL;

    t13 = ((x53&(x54-x55))/x56);

    if (t13 != -4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	uint8_t x62 = 1U;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = UINT16_MAX;
	int64_t t14 = 3086LL;

    t14 = ((x61&(x62-x63))/x64);

    if (t14 != 140739635871743LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x69 = 0U;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = 29U;
	int32_t t15 = -3181714;

    t15 = ((x69&(x70-x71))/x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = -1;
	uint64_t x74 = 3390969823590LLU;
	uint32_t x75 = 1115443011U;
	int32_t x76 = INT32_MIN;
	uint64_t t16 = 4226016LLU;

    t16 = ((x73&(x74-x75))/x76);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x77 = UINT32_MAX;
	volatile int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	static int32_t x80 = -1;
	uint32_t t17 = 2513U;

    t17 = ((x77&(x78-x79))/x80);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x86 = 32685112332404972LLU;
	int64_t x87 = INT64_MAX;
	uint64_t t18 = 38005641326LLU;

    t18 = ((x85&(x86-x87))/x88);

    if (t18 != 921639LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MIN;
	volatile int32_t x90 = 5387;
	static int8_t x92 = INT8_MAX;

    t19 = ((x89&(x90-x91))/x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x94 = -1;
	int32_t x95 = INT32_MIN;
	static int64_t x96 = INT64_MIN;
	volatile int64_t t20 = 3263LL;

    t20 = ((x93&(x94-x95))/x96);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x97 = 2;
	static volatile int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int32_t x100 = 829;
	int32_t t21 = -408;

    t21 = ((x97&(x98-x99))/x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = 56;
	int16_t x104 = 1292;
	int32_t t22 = -15;

    t22 = ((x101&(x102-x103))/x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MAX;
	volatile int8_t x106 = INT8_MAX;
	volatile uint32_t x107 = 126915U;
	volatile int8_t x108 = -3;
	uint32_t t23 = 3998096U;

    t23 = ((x105&(x106-x107))/x108);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = 6691203045529LL;
	volatile int16_t x110 = 8;
	uint32_t x111 = 75100342U;
	int32_t x112 = INT32_MAX;

    t24 = ((x109&(x110-x111))/x112);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x121 = -3280;
	uint64_t x122 = 333252361124LLU;
	int32_t x123 = -1;
	uint64_t t25 = 5435538LLU;

    t25 = ((x121&(x122-x123))/x124);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x125 = -45391LL;
	int32_t x126 = -99024;
	uint16_t x127 = 109U;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t26 = -1439759145688570269LL;

    t26 = ((x125&(x126-x127))/x128);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = -56757081;
	uint8_t x135 = 80U;
	uint16_t x136 = 7U;
	volatile int32_t t27 = -3;

    t27 = ((x133&(x134-x135))/x136);

    if (t27 != -8108178) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x141 = 61U;
	int32_t x142 = -1;
	int64_t x143 = INT64_MIN;
	int8_t x144 = -1;

    t28 = ((x141&(x142-x143))/x144);

    if (t28 != -61LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x146 = 19U;
	int8_t x147 = -1;
	int32_t x148 = -1;
	uint32_t t29 = 1U;

    t29 = ((x145&(x146-x147))/x148);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x149 = 50165U;
	volatile int64_t x150 = -28336LL;
	volatile int8_t x152 = INT8_MAX;
	int64_t t30 = 3341LL;

    t30 = ((x149&(x150-x151))/x152);

    if (t30 != 260LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x153 = INT8_MAX;
	uint32_t x155 = 605U;
	int16_t x156 = 1;
	static uint64_t t31 = 2LLU;

    t31 = ((x153&(x154-x155))/x156);

    if (t31 != 15LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x158 = -1LL;
	static int8_t x159 = 2;
	uint8_t x160 = 4U;
	static int64_t t32 = -406326LL;

    t32 = ((x157&(x158-x159))/x160);

    if (t32 != -8192LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x161 = INT16_MIN;
	int16_t x162 = -1;
	volatile int32_t t33 = -63880;

    t33 = ((x161&(x162-x163))/x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x165 = 0U;
	int8_t x166 = INT8_MIN;
	static uint64_t x167 = 10LLU;
	int16_t x168 = INT16_MAX;
	uint64_t t34 = 425951520886LLU;

    t34 = ((x165&(x166-x167))/x168);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x169 = -1LL;
	static int32_t x170 = 370368;
	uint32_t x171 = 151U;
	uint32_t x172 = UINT32_MAX;
	static volatile int64_t t35 = 1LL;

    t35 = ((x169&(x170-x171))/x172);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x173 = INT8_MAX;
	static int64_t x175 = -6271LL;
	volatile int16_t x176 = INT16_MIN;
	volatile int64_t t36 = 1LL;

    t36 = ((x173&(x174-x175))/x176);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = -441;
	int32_t x186 = INT32_MIN;
	int64_t x187 = -1LL;
	volatile int64_t t37 = -503886625104868LL;

    t37 = ((x185&(x186-x187))/x188);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = -1;
	int64_t x190 = 0LL;
	int64_t x192 = INT64_MIN;
	volatile int64_t t38 = 92949787203535LL;

    t38 = ((x189&(x190-x191))/x192);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x193 = -4;
	int16_t x194 = -3879;
	uint8_t x195 = 0U;
	volatile int64_t t39 = -400816782782686184LL;

    t39 = ((x193&(x194-x195))/x196);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x197 = 7707825U;
	uint8_t x198 = 25U;
	volatile int32_t x199 = 0;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t40 = 127351728764113LLU;

    t40 = ((x197&(x198-x199))/x200);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x201 = INT32_MAX;
	int16_t x202 = -1;
	volatile int8_t x204 = INT8_MIN;

    t41 = ((x201&(x202-x203))/x204);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x205 = INT16_MIN;
	uint16_t x208 = 11U;
	static uint32_t t42 = 1679U;

    t42 = ((x205&(x206-x207))/x208);

    if (t42 != 389998778U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x209 = 331522434LLU;
	volatile int64_t x210 = INT64_MAX;
	volatile int8_t x211 = INT8_MAX;
	uint32_t x212 = 252580750U;
	volatile uint64_t t43 = 885853210759357278LLU;

    t43 = ((x209&(x210-x211))/x212);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	static uint64_t x215 = 1907947LLU;
	int8_t x216 = -1;
	volatile uint64_t t44 = 14124493672LLU;

    t44 = ((x213&(x214-x215))/x216);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x221 = -1LL;
	int32_t x222 = -48;
	int64_t x223 = -44381806050LL;
	volatile uint32_t x224 = 86323210U;
	static volatile int64_t t45 = 2627LL;

    t45 = ((x221&(x222-x223))/x224);

    if (t45 != 514LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x225 = -1;
	int16_t x226 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = INT64_MAX;
	volatile int64_t t46 = -6370314441822LL;

    t46 = ((x225&(x226-x227))/x228);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x229 = -1;
	uint8_t x230 = 68U;
	int64_t x231 = -26998036LL;
	int8_t x232 = -28;
	volatile int64_t t47 = 60885LL;

    t47 = ((x229&(x230-x231))/x232);

    if (t47 != -964218LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x238 = 4U;
	int64_t x239 = -89151905185LL;
	int64_t x240 = INT64_MAX;
	static int64_t t48 = 544631115976628LL;

    t48 = ((x237&(x238-x239))/x240);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = 53653LL;
	int8_t x243 = 1;
	int64_t x244 = INT64_MIN;
	int64_t t49 = -28LL;

    t49 = ((x241&(x242-x243))/x244);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x246 = -1;
	static uint8_t x247 = 3U;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t50 = 115LLU;

    t50 = ((x245&(x246-x247))/x248);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = -25;
	uint64_t x250 = 43761790344948744LLU;
	volatile uint64_t t51 = 15613493518034LLU;

    t51 = ((x249&(x250-x251))/x252);

    if (t51 != 14587263448315810LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x255 = 19298U;

    t52 = ((x253&(x254-x255))/x256);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x257 = INT8_MIN;
	static int16_t x258 = -1;
	uint64_t x259 = 8451501LLU;
	int8_t x260 = INT8_MIN;
	static uint64_t t53 = 22898937321LLU;

    t53 = ((x257&(x258-x259))/x260);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	static int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

    t54 = ((x261&(x262-x263))/x264);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	volatile int16_t x272 = INT16_MIN;

    t55 = ((x269&(x270-x271))/x272);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x281 = 24;
	int64_t x283 = -636LL;
	volatile int16_t x284 = INT16_MIN;

    t56 = ((x281&(x282-x283))/x284);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x285 = 736;
	int8_t x286 = INT8_MIN;
	int32_t t57 = -49873;

    t57 = ((x285&(x286-x287))/x288);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x289 = INT64_MAX;
	volatile int16_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int64_t t58 = 52413117LL;

    t58 = ((x289&(x290-x291))/x292);

    if (t58 != 2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x293 = 2099874U;
	int32_t x294 = 22370;
	int32_t x295 = -1;
	volatile uint64_t x296 = 41010316311LLU;
	uint64_t t59 = 2546060389715005235LLU;

    t59 = ((x293&(x294-x295))/x296);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	uint32_t x299 = 5U;
	static volatile int64_t t60 = 1612313LL;

    t60 = ((x297&(x298-x299))/x300);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x301 = INT64_MIN;
	uint32_t x302 = 96U;
	static int8_t x303 = INT8_MIN;
	static int32_t x304 = 463;
	volatile int64_t t61 = 2836138781336995LL;

    t61 = ((x301&(x302-x303))/x304);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x305 = -55LL;
	uint64_t x306 = 2LLU;
	uint32_t x307 = 1U;
	volatile uint64_t t62 = 8142854443950LLU;

    t62 = ((x305&(x306-x307))/x308);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x309 = 730U;
	int16_t x310 = INT16_MAX;
	static int64_t x311 = -40897224780390492LL;
	int16_t x312 = INT16_MAX;
	volatile int64_t t63 = 126LL;

    t63 = ((x309&(x310-x311))/x312);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	uint8_t x315 = 53U;
	volatile int64_t x316 = 676197268027LL;
	volatile int64_t t64 = -65887401775939101LL;

    t64 = ((x313&(x314-x315))/x316);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x319 = 35495177470LLU;
	int8_t x320 = -1;
	static uint64_t t65 = 7374562161LLU;

    t65 = ((x317&(x318-x319))/x320);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x321 = -1;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MIN;
	int64_t t66 = 5783574530360987LL;

    t66 = ((x321&(x322-x323))/x324);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x325 = 6812511U;
	static volatile int16_t x326 = -1;
	static uint16_t x328 = 5184U;

    t67 = ((x325&(x326-x327))/x328);

    if (t67 != 1314U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x329 = 1290834;
	volatile int16_t x331 = -1;
	static uint32_t t68 = 29U;

    t68 = ((x329&(x330-x331))/x332);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x334 = -8245LL;
	int8_t x336 = INT8_MIN;

    t69 = ((x333&(x334-x335))/x336);

    if (t69 != 65LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x337 = INT32_MAX;
	volatile uint16_t x338 = 2U;
	volatile int16_t x339 = -1;
	int32_t t70 = -59613;

    t70 = ((x337&(x338-x339))/x340);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x341 = 19U;
	volatile int8_t x342 = -1;
	static volatile int64_t x343 = INT64_MAX;
	int8_t x344 = 58;
	volatile int64_t t71 = 130915947530341LL;

    t71 = ((x341&(x342-x343))/x344);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x345 = 124153U;
	static int16_t x346 = INT16_MAX;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = -1;

    t72 = ((x345&(x346-x347))/x348);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x349 = INT16_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	static int64_t x352 = -3431079LL;
	volatile uint64_t t73 = 66441631494LLU;

    t73 = ((x349&(x350-x351))/x352);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MIN;
	int8_t x355 = -2;
	int64_t x356 = INT64_MAX;
	static volatile int64_t t74 = 61970138743LL;

    t74 = ((x353&(x354-x355))/x356);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	volatile uint32_t x358 = 64686U;
	int8_t x360 = INT8_MIN;
	uint32_t t75 = 118U;

    t75 = ((x357&(x358-x359))/x360);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = -1;
	volatile int64_t x362 = INT64_MAX;
	static int8_t x363 = INT8_MAX;
	volatile int8_t x364 = -1;
	int64_t t76 = -97212339272LL;

    t76 = ((x361&(x362-x363))/x364);

    if (t76 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	uint8_t x371 = 3U;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t77 = -106;

    t77 = ((x369&(x370-x371))/x372);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x375 = -1;
	uint32_t x376 = 167923U;

    t78 = ((x373&(x374-x375))/x376);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MAX;
	int8_t x379 = INT8_MIN;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t79 = 1LL;

    t79 = ((x377&(x378-x379))/x380);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x381 = INT64_MAX;
	static int16_t x382 = -9467;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	int64_t t80 = 3LL;

    t80 = ((x381&(x382-x383))/x384);

    if (t80 != -72057594037927863LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x386 = INT8_MIN;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	volatile int64_t t81 = -6747070LL;

    t81 = ((x385&(x386-x387))/x388);

    if (t81 != -511LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x389 = 12927U;
	int8_t x390 = INT8_MIN;
	uint32_t x392 = UINT32_MAX;
	static uint32_t t82 = 352U;

    t82 = ((x389&(x390-x391))/x392);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x393 = -1;
	volatile uint8_t x394 = 0U;
	volatile int16_t x395 = -7;
	static uint64_t x396 = UINT64_MAX;

    t83 = ((x393&(x394-x395))/x396);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x397 = 1U;
	uint32_t x398 = 2056718769U;
	static int64_t x399 = -1LL;
	uint32_t x400 = 1635U;
	int64_t t84 = 56993383235180LL;

    t84 = ((x397&(x398-x399))/x400);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x402 = 1;
	int8_t x404 = INT8_MIN;
	volatile int32_t t85 = 593673;

    t85 = ((x401&(x402-x403))/x404);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x405 = UINT16_MAX;
	int64_t x408 = -19449LL;
	static volatile int64_t t86 = -60020250845331240LL;

    t86 = ((x405&(x406-x407))/x408);

    if (t86 != -3LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x409 = 166360U;
	static uint8_t x410 = UINT8_MAX;
	int64_t x411 = -73684377911LL;
	volatile uint8_t x412 = 58U;
	int64_t t87 = -9420298022LL;

    t87 = ((x409&(x410-x411))/x412);

    if (t87 != 2260LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MAX;
	int8_t x415 = 35;
	uint16_t x416 = 3051U;
	static int32_t t88 = 61001;

    t88 = ((x413&(x414-x415))/x416);

    if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x421 = -1;
	static uint32_t x422 = UINT32_MAX;
	int32_t x423 = 29;
	static uint32_t t89 = 618622U;

    t89 = ((x421&(x422-x423))/x424);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x431 = 24661084U;
	volatile uint32_t t90 = 7U;

    t90 = ((x429&(x430-x431))/x432);

    if (t90 != 9U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x437 = 2837814217038886LLU;
	volatile uint32_t x438 = 31510065U;
	int64_t x439 = INT64_MAX;
	volatile int8_t x440 = -1;
	volatile uint64_t t91 = 15688681481542648LLU;

    t91 = ((x437&(x438-x439))/x440);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x443 = INT64_MIN;
	int32_t x444 = -19183420;
	static volatile int64_t t92 = 11398111606448LL;

    t92 = ((x441&(x442-x443))/x444);

    if (t92 != -480799150240LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x451 = 3930U;
	int16_t x452 = INT16_MIN;
	volatile uint64_t t93 = 89971699LLU;

    t93 = ((x449&(x450-x451))/x452);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x454 = 6U;
	uint8_t x455 = 13U;
	int64_t x456 = 203681051LL;
	volatile int64_t t94 = 161606092LL;

    t94 = ((x453&(x454-x455))/x456);

    if (t94 != 21LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x461 = INT8_MIN;
	int32_t x462 = INT32_MAX;
	int16_t x463 = INT16_MAX;
	int32_t x464 = -1;

    t95 = ((x461&(x462-x463))/x464);

    if (t95 != -2147450880) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x465 = 1252240873992021LLU;
	int16_t x466 = INT16_MAX;
	volatile uint64_t x467 = 115876435375474643LLU;
	uint16_t x468 = UINT16_MAX;
	uint64_t t96 = 216813398777511023LLU;

    t96 = ((x465&(x466-x467))/x468);

    if (t96 != 18571089663LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x469 = INT16_MIN;
	uint32_t x470 = 178987U;
	int32_t x471 = -1;
	int8_t x472 = -25;
	volatile uint32_t t97 = 7087096U;

    t97 = ((x469&(x470-x471))/x472);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x473 = 129U;
	int8_t x474 = INT8_MIN;
	int8_t x475 = INT8_MIN;
	int64_t t98 = 2185843LL;

    t98 = ((x473&(x474-x475))/x476);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x477 = 16186612LL;
	int64_t x478 = 5503910701LL;
	static int32_t x479 = INT32_MIN;
	uint8_t x480 = 63U;
	int64_t t99 = 449301334025752LL;

    t99 = ((x477&(x478-x479))/x480);

    if (t99 != 6242LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x481 = 0;
	volatile int8_t x482 = -7;
	volatile uint16_t x483 = 1U;
	int64_t x484 = 634803610632LL;
	static int64_t t100 = -347256LL;

    t100 = ((x481&(x482-x483))/x484);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x493 = 2;
	static uint32_t x494 = UINT32_MAX;
	volatile uint8_t x495 = 1U;
	int64_t x496 = -116940342289LL;
	int64_t t101 = 7385972448LL;

    t101 = ((x493&(x494-x495))/x496);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x497 = INT8_MIN;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	static volatile int64_t x500 = INT64_MAX;
	int64_t t102 = -7565LL;

    t102 = ((x497&(x498-x499))/x500);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x501 = 984;
	int16_t x503 = INT16_MAX;
	volatile int16_t x504 = INT16_MAX;

    t103 = ((x501&(x502-x503))/x504);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x505 = INT64_MIN;
	int32_t x507 = INT32_MAX;
	int32_t x508 = INT32_MAX;
	volatile int64_t t104 = 5402439895605213LL;

    t104 = ((x505&(x506-x507))/x508);

    if (t104 != -4294967298LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x509 = 368234U;
	volatile int32_t x512 = -28;
	uint32_t t105 = 366648U;

    t105 = ((x509&(x510-x511))/x512);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x513 = INT8_MAX;
	uint16_t x514 = 31U;
	static uint64_t x515 = UINT64_MAX;
	static uint32_t x516 = 129266U;
	static volatile uint64_t t106 = 1001958LLU;

    t106 = ((x513&(x514-x515))/x516);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x517 = -7;
	int16_t x518 = INT16_MIN;
	uint16_t x519 = UINT16_MAX;
	static int8_t x520 = 1;
	int32_t t107 = 0;

    t107 = ((x517&(x518-x519))/x520);

    if (t107 != -98303) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x521 = 4;
	volatile int8_t x522 = 2;
	static volatile int64_t x524 = INT64_MIN;
	static uint64_t t108 = 123073217329080LLU;

    t108 = ((x521&(x522-x523))/x524);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x525 = INT32_MIN;
	static volatile int32_t x526 = 272;
	uint8_t x527 = UINT8_MAX;
	int32_t x528 = -42484;

    t109 = ((x525&(x526-x527))/x528);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x529 = -1;
	volatile uint64_t x531 = 40876776378757587LLU;
	static volatile int8_t x532 = INT8_MIN;
	volatile uint64_t t110 = 456700002872284LLU;

    t110 = ((x529&(x530-x531))/x532);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x533 = 1;
	int16_t x534 = INT16_MIN;
	uint32_t x536 = 14290262U;

    t111 = ((x533&(x534-x535))/x536);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x537 = 2U;
	static uint16_t x539 = 1553U;
	int16_t x540 = -1;

    t112 = ((x537&(x538-x539))/x540);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x541 = 33U;
	int8_t x542 = -1;
	int32_t x543 = -1;
	volatile int64_t x544 = -1360588019158LL;
	volatile int64_t t113 = -12629234LL;

    t113 = ((x541&(x542-x543))/x544);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x545 = 375U;
	static int64_t x547 = -1LL;
	int16_t x548 = INT16_MAX;

    t114 = ((x545&(x546-x547))/x548);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x553 = 6598201310LL;
	volatile uint64_t x554 = 13804115617LLU;
	uint16_t x555 = UINT16_MAX;
	static volatile int32_t x556 = INT32_MAX;
	static volatile uint64_t t115 = 8172702926LLU;

    t115 = ((x553&(x554-x555))/x556);

    if (t115 != 2LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x557 = 1;
	int8_t x558 = INT8_MIN;
	static int64_t x559 = -1LL;
	int8_t x560 = INT8_MIN;

    t116 = ((x557&(x558-x559))/x560);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x561 = UINT8_MAX;
	int64_t x562 = -31780180LL;
	int64_t t117 = 0LL;

    t117 = ((x561&(x562-x563))/x564);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x576 = INT64_MIN;

    t118 = ((x573&(x574-x575))/x576);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x577 = INT64_MAX;
	uint8_t x578 = 0U;
	static volatile uint64_t x579 = UINT64_MAX;
	volatile uint64_t t119 = 18924829522810LLU;

    t119 = ((x577&(x578-x579))/x580);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = INT8_MIN;
	int16_t x590 = INT16_MIN;
	uint8_t x591 = 12U;
	int64_t t120 = -27549345717665LL;

    t120 = ((x589&(x590-x591))/x592);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x593 = 296172843U;
	int16_t x594 = INT16_MAX;
	int16_t x596 = INT16_MAX;
	uint32_t t121 = 175702U;

    t121 = ((x593&(x594-x595))/x596);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x598 = 44U;
	int8_t x599 = 0;

    t122 = ((x597&(x598-x599))/x600);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x606 = UINT32_MAX;
	volatile int64_t t123 = -3LL;

    t123 = ((x605&(x606-x607))/x608);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x609 = -1;
	uint16_t x610 = 2U;
	static uint8_t x611 = UINT8_MAX;
	int16_t x612 = INT16_MIN;
	int32_t t124 = 6880;

    t124 = ((x609&(x610-x611))/x612);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	static int64_t x615 = 690LL;
	int16_t x616 = 2;
	int64_t t125 = -67LL;

    t125 = ((x613&(x614-x615))/x616);

    if (t125 != 32486LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x617 = INT8_MIN;
	volatile int8_t x618 = INT8_MIN;
	int32_t x620 = -1;
	int32_t t126 = 220;

    t126 = ((x617&(x618-x619))/x620);

    if (t126 != 256) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x621 = INT8_MIN;
	uint32_t x622 = 71683U;
	static uint64_t x623 = 149505943LLU;
	static uint64_t t127 = 216244LLU;

    t127 = ((x621&(x622-x623))/x624);

    if (t127 != 145249953335119033LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x625 = -6;
	int8_t x626 = INT8_MIN;
	int32_t x627 = INT32_MIN;
	int64_t x628 = -1LL;
	volatile int64_t t128 = 170154903LL;

    t128 = ((x625&(x626-x627))/x628);

    if (t128 != -2147483520LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x629 = 32556LL;
	int32_t x630 = 22463;
	int64_t x632 = INT64_MAX;
	int64_t t129 = -5199729LL;

    t129 = ((x629&(x630-x631))/x632);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x633 = INT16_MIN;
	uint32_t x634 = 4U;
	int32_t x635 = -1;
	int64_t x636 = -1LL;
	static int64_t t130 = 5LL;

    t130 = ((x633&(x634-x635))/x636);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x641 = 5U;
	int32_t x642 = 50234;
	int64_t x643 = -1LL;
	volatile int8_t x644 = INT8_MAX;

    t131 = ((x641&(x642-x643))/x644);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x650 = 1688993121U;
	uint8_t x651 = 31U;
	uint16_t x652 = UINT16_MAX;

    t132 = ((x649&(x650-x651))/x652);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x654 = -1;
	int16_t x655 = INT16_MIN;
	uint16_t x656 = 875U;
	int32_t t133 = -3236;

    t133 = ((x653&(x654-x655))/x656);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x657 = 35896494060630029LLU;
	uint64_t x659 = 227861182885663392LLU;
	volatile uint64_t t134 = 11LLU;

    t134 = ((x657&(x658-x659))/x660);

    if (t134 != 1274110201348527LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x661 = 0U;
	volatile int16_t x663 = 2;
	int16_t x664 = -1;
	int32_t t135 = -1;

    t135 = ((x661&(x662-x663))/x664);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x665 = UINT16_MAX;
	int16_t x666 = -14204;
	volatile int32_t x667 = 183358;
	static volatile uint32_t t136 = 54U;

    t136 = ((x665&(x666-x667))/x668);

    if (t136 != 73U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x669 = 22951LLU;
	int16_t x670 = -7;
	uint8_t x671 = 55U;
	uint64_t x672 = UINT64_MAX;

    t137 = ((x669&(x670-x671))/x672);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x673 = INT16_MAX;
	uint8_t x674 = UINT8_MAX;
	uint8_t x675 = 108U;
	volatile int64_t x676 = -1LL;

    t138 = ((x673&(x674-x675))/x676);

    if (t138 != -147LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x677 = -1;
	uint32_t x678 = UINT32_MAX;
	volatile int8_t x679 = -1;
	uint32_t t139 = 30U;

    t139 = ((x677&(x678-x679))/x680);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x681 = INT64_MAX;
	int64_t x682 = INT64_MAX;
	uint32_t x683 = 8119U;
	volatile int64_t t140 = 32087155407371LL;

    t140 = ((x681&(x682-x683))/x684);

    if (t140 != -9223372036854767688LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x685 = UINT8_MAX;
	uint64_t x686 = 518036050260499910LLU;
	int32_t x687 = -1;
	static uint32_t x688 = 37178U;
	uint64_t t141 = 154929377LLU;

    t141 = ((x685&(x686-x687))/x688);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x689 = UINT64_MAX;
	int64_t x691 = INT64_MIN;
	uint8_t x692 = UINT8_MAX;
	static uint64_t t142 = 12252LLU;

    t142 = ((x689&(x690-x691))/x692);

    if (t142 != 36170284962391498LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x697 = INT16_MIN;
	int32_t x698 = -44;
	int32_t x699 = INT32_MIN;
	int64_t t143 = -3848755185642155LL;

    t143 = ((x697&(x698-x699))/x700);

    if (t143 != -2147450880LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x701 = -11639LL;
	int64_t x702 = INT64_MIN;
	volatile int64_t x703 = INT64_MIN;
	int64_t x704 = -14103483866143LL;
	volatile int64_t t144 = 2LL;

    t144 = ((x701&(x702-x703))/x704);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x705 = INT8_MIN;
	static uint16_t x706 = UINT16_MAX;
	int16_t x708 = 1;

    t145 = ((x705&(x706-x707))/x708);

    if (t145 != 65536LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x710 = INT16_MIN;
	int64_t x711 = -7233850481LL;
	int16_t x712 = 127;
	int64_t t146 = -23LL;

    t146 = ((x709&(x710-x711))/x712);

    if (t146 != 8LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x713 = -1;
	int16_t x714 = INT16_MIN;
	uint16_t x715 = 1190U;
	int16_t x716 = INT16_MAX;

    t147 = ((x713&(x714-x715))/x716);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x717 = -42726631;
	int8_t x718 = -7;
	volatile int8_t x719 = INT8_MIN;
	static int8_t x720 = 31;
	volatile int32_t t148 = 705;

    t148 = ((x717&(x718-x719))/x720);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x721 = -1;
	uint32_t x723 = 126316991U;
	volatile int16_t x724 = INT16_MAX;
	uint32_t t149 = 27681906U;

    t149 = ((x721&(x722-x723))/x724);

    if (t149 != 127220U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x729 = -811082;
	int8_t x731 = INT8_MAX;
	int32_t x732 = INT32_MIN;
	volatile int32_t t150 = 413169841;

    t150 = ((x729&(x730-x731))/x732);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x733 = INT8_MIN;
	int64_t x735 = INT64_MIN;
	int64_t t151 = 41596837920836744LL;

    t151 = ((x733&(x734-x735))/x736);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x737 = 4U;
	int32_t x739 = INT32_MIN;
	int32_t t152 = 0;

    t152 = ((x737&(x738-x739))/x740);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x742 = INT8_MIN;
	static int16_t x743 = -4195;
	int8_t x744 = -9;

    t153 = ((x741&(x742-x743))/x744);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x745 = UINT64_MAX;
	uint32_t x746 = 45203U;
	int16_t x747 = INT16_MIN;
	int64_t x748 = 12298LL;
	volatile uint64_t t154 = 792910LLU;

    t154 = ((x745&(x746-x747))/x748);

    if (t154 != 6LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x750 = 74530340;
	static int64_t x751 = -681038008270LL;
	static int16_t x752 = INT16_MIN;
	static volatile int64_t t155 = -8380139535743808LL;

    t155 = ((x749&(x750-x751))/x752);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x753 = 3390LLU;
	int16_t x754 = 0;
	int64_t x755 = 0LL;
	int16_t x756 = INT16_MIN;
	uint64_t t156 = 7981229043098556LLU;

    t156 = ((x753&(x754-x755))/x756);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x758 = 0;
	uint16_t x759 = 1557U;
	uint32_t x760 = 2U;
	volatile uint32_t t157 = 391401078U;

    t157 = ((x757&(x758-x759))/x760);

    if (t157 != 2147482869U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x765 = 9U;
	volatile int16_t x766 = INT16_MAX;
	int8_t x767 = INT8_MAX;
	int32_t x768 = INT32_MIN;
	static int32_t t158 = 4626;

    t158 = ((x765&(x766-x767))/x768);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x773 = -194;
	volatile int64_t x774 = INT64_MAX;
	volatile int64_t x775 = INT64_MAX;
	int64_t x776 = INT64_MIN;
	int64_t t159 = 23341148608281LL;

    t159 = ((x773&(x774-x775))/x776);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x777 = 33U;
	int8_t x778 = INT8_MIN;
	int8_t x779 = 2;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t160 = -14;

    t160 = ((x777&(x778-x779))/x780);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x781 = INT64_MAX;
	static int32_t x782 = -791414;
	static int64_t x784 = 2412162165240316084LL;

    t161 = ((x781&(x782-x783))/x784);

    if (t161 != 3LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x789 = 4U;
	int8_t x790 = 1;
	static int8_t x791 = -1;
	int8_t x792 = INT8_MAX;
	uint32_t t162 = 13727660U;

    t162 = ((x789&(x790-x791))/x792);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x793 = UINT64_MAX;
	int64_t x794 = -39332LL;
	static int32_t x795 = -7;
	uint8_t x796 = 69U;
	static volatile uint64_t t163 = 5984568229225450LLU;

    t163 = ((x793&(x794-x795))/x796);

    if (t163 != 267344117010282786LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x798 = INT16_MAX;
	volatile int16_t x799 = INT16_MIN;

    t164 = ((x797&(x798-x799))/x800);

    if (t164 != -307LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x801 = 11883186U;
	int8_t x802 = -1;
	int32_t x803 = 8066596;
	uint64_t x804 = 1LLU;
	volatile uint64_t t165 = 46148114LLU;

    t165 = ((x801&(x802-x803))/x804);

    if (t165 != 8667282LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x809 = -5LL;
	uint8_t x810 = 8U;
	static volatile uint64_t x811 = 2977477990532870LLU;
	static int16_t x812 = -1;
	uint64_t t166 = 60731553436450LLU;

    t166 = ((x809&(x810-x811))/x812);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x813 = 9287U;
	volatile uint32_t x814 = 26350U;
	volatile int16_t x816 = INT16_MAX;

    t167 = ((x813&(x814-x815))/x816);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x817 = 1;
	uint64_t x818 = 10917LLU;
	static int64_t x819 = INT64_MIN;

    t168 = ((x817&(x818-x819))/x820);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x821 = INT64_MAX;
	uint8_t x823 = 87U;
	static int8_t x824 = 60;

    t169 = ((x821&(x822-x823))/x824);

    if (t169 != 153722867280912928LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x825 = INT8_MAX;
	static volatile int32_t x826 = INT32_MAX;
	uint64_t x827 = 255LLU;
	int32_t x828 = INT32_MIN;
	volatile uint64_t t170 = 108621664213595719LLU;

    t170 = ((x825&(x826-x827))/x828);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x829 = 30;
	volatile uint16_t x830 = 1U;
	uint32_t x831 = UINT32_MAX;
	int64_t x832 = -1LL;
	int64_t t171 = 28595645LL;

    t171 = ((x829&(x830-x831))/x832);

    if (t171 != -2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x833 = 15;
	static int64_t x834 = -1LL;
	volatile int16_t x835 = 791;
	volatile int16_t x836 = -1;
	int64_t t172 = -650567987080LL;

    t172 = ((x833&(x834-x835))/x836);

    if (t172 != -8LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x837 = 14594U;
	volatile int16_t x838 = 13;
	uint64_t x839 = 53757920113LLU;

    t173 = ((x837&(x838-x839))/x840);

    if (t173 != 56LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x846 = 46672762U;
	int8_t x847 = -1;
	volatile int16_t x848 = INT16_MAX;
	volatile uint32_t t174 = 751U;

    t174 = ((x845&(x846-x847))/x848);

    if (t174 != 1424U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x849 = -51556889;
	static int16_t x850 = 5333;
	int16_t x851 = INT16_MIN;

    t175 = ((x849&(x850-x851))/x852);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x853 = -1;
	int8_t x854 = 1;
	uint64_t x855 = 14LLU;
	static uint8_t x856 = UINT8_MAX;

    t176 = ((x853&(x854-x855))/x856);

    if (t176 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x858 = 1378937LL;
	int32_t x859 = -8408;
	int64_t x860 = INT64_MAX;
	int64_t t177 = -13056893949LL;

    t177 = ((x857&(x858-x859))/x860);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x861 = -1LL;
	int16_t x862 = -2825;
	int64_t x863 = INT64_MIN;
	int16_t x864 = INT16_MIN;
	volatile int64_t t178 = -979391339124472LL;

    t178 = ((x861&(x862-x863))/x864);

    if (t178 != -281474976710655LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x866 = UINT64_MAX;
	int64_t x867 = 10935621LL;
	int64_t x868 = INT64_MAX;

    t179 = ((x865&(x866-x867))/x868);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x869 = INT32_MIN;
	uint64_t x870 = 8997234052877632724LLU;
	int64_t x871 = 13179686054943LL;
	uint64_t t180 = 66891320594603LLU;

    t180 = ((x869&(x870-x871))/x872);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x873 = 3321;
	volatile int16_t x875 = INT16_MIN;
	int32_t x876 = -1;
	int32_t t181 = -1;

    t181 = ((x873&(x874-x875))/x876);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x877 = INT64_MIN;
	int8_t x878 = 3;
	volatile int32_t x879 = -9;
	uint8_t x880 = UINT8_MAX;
	volatile int64_t t182 = 376178548115794251LL;

    t182 = ((x877&(x878-x879))/x880);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x881 = -452;
	volatile int64_t x882 = 184155237LL;
	volatile int32_t x883 = INT32_MIN;
	volatile int64_t t183 = 445942185609LL;

    t183 = ((x881&(x882-x883))/x884);

    if (t183 != 71158LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x894 = INT32_MIN;
	int32_t x895 = INT32_MIN;
	volatile int64_t x896 = -1LL;

    t184 = ((x893&(x894-x895))/x896);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x897 = INT16_MIN;
	static int8_t x898 = INT8_MIN;
	uint64_t x899 = 48271280561LLU;
	int64_t x900 = -1LL;
	static uint64_t t185 = 1321103792939569LLU;

    t185 = ((x897&(x898-x899))/x900);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x901 = INT8_MIN;
	int16_t x902 = -143;
	volatile int16_t x903 = INT16_MIN;
	int16_t x904 = -1;
	int32_t t186 = -412;

    t186 = ((x901&(x902-x903))/x904);

    if (t186 != -32512) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x905 = INT32_MIN;
	int64_t x906 = INT64_MIN;
	int16_t x907 = INT16_MIN;
	volatile uint64_t x908 = 6222487076390LLU;
	static volatile uint64_t t187 = 180LLU;

    t187 = ((x905&(x906-x907))/x908);

    if (t187 != 1482264LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x909 = 14;
	static volatile int32_t x911 = -1;
	int32_t t188 = 422058;

    t188 = ((x909&(x910-x911))/x912);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x913 = INT32_MIN;
	static int64_t x914 = 360506LL;
	int32_t x915 = -1;
	static volatile int64_t t189 = -4278252011LL;

    t189 = ((x913&(x914-x915))/x916);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t t190 = 6651LL;

    t190 = ((x925&(x926-x927))/x928);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x929 = -1LL;
	volatile uint32_t x930 = 298U;
	int8_t x931 = INT8_MIN;
	static uint8_t x932 = 18U;

    t191 = ((x929&(x930-x931))/x932);

    if (t191 != 23LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x933 = 316870U;
	int16_t x935 = INT16_MIN;
	int16_t x936 = -1;
	volatile uint32_t t192 = 5813416U;

    t192 = ((x933&(x934-x935))/x936);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x937 = INT16_MIN;
	uint32_t x938 = UINT32_MAX;
	int32_t x939 = INT32_MIN;
	static int32_t x940 = INT32_MAX;
	uint32_t t193 = 17208U;

    t193 = ((x937&(x938-x939))/x940);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x941 = INT16_MAX;
	uint64_t x942 = UINT64_MAX;
	int32_t x943 = INT32_MAX;
	static int64_t x944 = INT64_MAX;

    t194 = ((x941&(x942-x943))/x944);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x945 = 3700849LL;
	int64_t x947 = INT64_MAX;
	volatile int8_t x948 = 52;
	static volatile int64_t t195 = 6721199LL;

    t195 = ((x945&(x946-x947))/x948);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x949 = INT16_MIN;
	int8_t x950 = 7;
	int16_t x951 = INT16_MIN;
	volatile int8_t x952 = -4;
	static volatile int32_t t196 = 610187790;

    t196 = ((x949&(x950-x951))/x952);

    if (t196 != -8192) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x953 = -14419;
	int64_t x954 = INT64_MIN;
	int64_t x955 = -1LL;
	uint16_t x956 = 1U;

    t197 = ((x953&(x954-x955))/x956);

    if (t197 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x957 = 791U;
	int16_t x959 = INT16_MIN;
	uint32_t x960 = 2715539U;
	volatile uint32_t t198 = 108667790U;

    t198 = ((x957&(x958-x959))/x960);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x961 = 10605251947569944LLU;
	static uint16_t x962 = UINT16_MAX;
	uint32_t x963 = 81U;
	int8_t x964 = INT8_MIN;
	volatile uint64_t t199 = 454417347299LLU;

    t199 = ((x961&(x962-x963))/x964);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

