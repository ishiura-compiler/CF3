
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

int32_t x4 = 46136606;
volatile int8_t x7 = INT8_MIN;
volatile int16_t x10 = INT16_MIN;
volatile int64_t x12 = INT64_MIN;
static int64_t t2 = -473870893LL;
static volatile uint64_t t3 = 0LLU;
uint32_t x17 = 13943844U;
volatile uint32_t t4 = 1015U;
int64_t t5 = -180480656LL;
int16_t x25 = -1;
uint16_t x28 = 465U;
volatile int16_t x30 = INT16_MAX;
volatile int32_t t7 = -112438155;
static uint32_t x36 = 10U;
uint32_t t8 = 3766U;
int32_t x40 = INT32_MIN;
volatile int8_t x44 = INT8_MIN;
uint32_t x50 = 1576572447U;
uint16_t x52 = UINT16_MAX;
int16_t x53 = INT16_MIN;
uint16_t x56 = 7U;
uint64_t x65 = 1075770697427644041LLU;
volatile uint64_t t16 = 0LLU;
int16_t x71 = INT16_MAX;
static int32_t t18 = 432482141;
volatile int64_t x80 = INT64_MIN;
volatile uint8_t x82 = 2U;
static uint16_t x83 = UINT16_MAX;
int64_t t21 = 111872851980246573LL;
int16_t x96 = INT16_MIN;
volatile int64_t t25 = 28422585045820LL;
int64_t t28 = -7352226LL;
uint8_t x120 = UINT8_MAX;
uint64_t t31 = 96316819LLU;
int16_t x129 = -1;
int8_t x140 = INT8_MAX;
volatile int8_t x149 = -12;
int32_t x150 = INT32_MIN;
uint64_t x166 = 24707LLU;
static uint16_t x167 = 6U;
int16_t x169 = -1;
int16_t x177 = -11;
volatile uint64_t x189 = 839705518LLU;
int16_t x194 = -1;
static uint32_t x200 = 427U;
int64_t x201 = -604189817152878LL;
int32_t x202 = INT32_MIN;
static int64_t x203 = 39LL;
int8_t x204 = INT8_MIN;
int8_t x205 = -1;
int32_t x212 = -14782247;
int16_t x217 = -1;
static volatile int16_t x221 = INT16_MAX;
int32_t x222 = 0;
int8_t x226 = -1;
int16_t x229 = 197;
int8_t x237 = INT8_MIN;
uint8_t x244 = 7U;
static volatile int32_t x249 = INT32_MIN;
int64_t x251 = -5LL;
uint8_t x255 = 20U;
static int64_t t63 = 3632571LL;
int64_t x261 = INT64_MIN;
int32_t x264 = 18737048;
volatile int64_t x265 = INT64_MAX;
uint16_t x277 = 8124U;
uint16_t x278 = 2U;
volatile uint64_t t69 = 36367643906231052LLU;
int64_t t71 = -17672LL;
static int16_t x295 = INT16_MAX;
static int16_t x298 = INT16_MIN;
uint16_t x313 = 326U;
int64_t x318 = 3LL;
uint32_t t78 = 26U;
int16_t x328 = INT16_MAX;
uint16_t x338 = 1709U;
int64_t x339 = INT64_MIN;
int32_t x341 = 31971724;
uint8_t x343 = UINT8_MAX;
int32_t x344 = INT32_MAX;
volatile int32_t t84 = -24506990;
int16_t x352 = 125;
int8_t x364 = -13;
static int64_t x371 = -1LL;
volatile int8_t x372 = -1;
int32_t t91 = 65502;
int8_t x378 = INT8_MAX;
volatile int8_t x383 = INT8_MIN;
uint8_t x385 = 97U;
int64_t t95 = 131544714LL;
static volatile int16_t x398 = -186;
volatile uint8_t x403 = 90U;
int64_t x404 = INT64_MAX;
int32_t x407 = INT32_MAX;
int64_t x408 = INT64_MAX;
static volatile int64_t t100 = 3170179393LL;
volatile int64_t x419 = INT64_MAX;
volatile int64_t t103 = 49017LL;
int64_t x438 = INT64_MAX;
uint64_t x440 = 12LLU;
int32_t t109 = -1224619;
volatile int64_t t110 = INT64_MAX;
uint64_t t111 = 25008882LLU;
int32_t x461 = 3675;
volatile int8_t x462 = 43;
int16_t x463 = INT16_MIN;
int32_t t114 = -10934997;
int32_t t115 = 3242;
static int32_t x476 = INT32_MIN;
int16_t x477 = -6749;
int8_t x478 = 0;
static int64_t x484 = -1LL;
volatile int32_t t119 = -1;
volatile uint64_t x490 = 8827064782319650523LLU;
uint32_t x492 = 5U;
uint8_t x494 = UINT8_MAX;
int16_t x499 = INT16_MIN;
volatile int8_t x504 = 7;
volatile int32_t t123 = 1;
uint64_t t124 = 949164327908192LLU;
volatile int32_t x509 = INT32_MAX;
int8_t x513 = INT8_MAX;
int64_t x514 = INT64_MIN;
uint64_t t126 = 820284499512303465LLU;
volatile int32_t x518 = INT32_MAX;
static int64_t x520 = -16735272LL;
int8_t x521 = INT8_MAX;
static uint16_t x522 = UINT16_MAX;
uint16_t x529 = UINT16_MAX;
uint16_t x530 = 2324U;
int8_t x535 = INT8_MIN;
int32_t x545 = 1;
int32_t x551 = 61995528;
static volatile uint16_t x552 = 1U;
static uint64_t x553 = 990088058332624LLU;
volatile int16_t x555 = -1;
volatile uint64_t t135 = 7441846053735866124LLU;
uint32_t x557 = UINT32_MAX;
uint8_t x558 = 92U;
int32_t x560 = -155;
static int16_t x570 = INT16_MAX;
int16_t x574 = INT16_MIN;
volatile int64_t t139 = 12LL;
uint8_t x577 = 11U;
int32_t t140 = 14;
int8_t x583 = INT8_MIN;
volatile int8_t x584 = 17;
int64_t t142 = 1LL;
static uint16_t x595 = UINT16_MAX;
int32_t t145 = 66;
uint16_t x601 = 1020U;
uint32_t x607 = UINT32_MAX;
static volatile int32_t t148 = -8684;
int16_t x613 = INT16_MIN;
int32_t t149 = 63036;
volatile int16_t x619 = INT16_MIN;
uint16_t x621 = 53U;
static uint8_t x623 = 64U;
int8_t x625 = -1;
int64_t x630 = -1LL;
static int16_t x640 = INT16_MIN;
uint64_t x649 = 3687504LLU;
int16_t x651 = INT16_MIN;
uint64_t x652 = UINT64_MAX;
int32_t x657 = 0;
int16_t x670 = INT16_MIN;
uint8_t x672 = 1U;
volatile int32_t x681 = INT32_MIN;
int64_t x688 = INT64_MIN;
uint32_t x693 = 3338U;
int32_t x701 = INT32_MAX;
int32_t x702 = -64452;
int64_t x705 = INT64_MIN;
int32_t x714 = INT32_MAX;
static volatile uint16_t x720 = UINT16_MAX;
int8_t x722 = INT8_MIN;
int32_t x724 = -1;
volatile uint16_t x734 = 847U;
static volatile int64_t x735 = -92LL;
static int32_t t179 = 1053209;
static volatile int64_t t181 = 132511712031646623LL;
int16_t x746 = INT16_MIN;
int16_t x747 = -1;
int16_t x749 = INT16_MAX;
int8_t x751 = -1;
uint64_t x761 = 814561LLU;
volatile uint8_t x769 = 17U;
uint64_t t190 = 450LLU;
int64_t x781 = 1091661048152683LL;
int16_t x790 = 986;
uint32_t x791 = UINT32_MAX;
static int32_t x792 = 185568815;
static volatile int32_t t194 = 3;
uint32_t x798 = 1U;
volatile int64_t t197 = 45896342818078405LL;
static uint64_t t199 = 3931170LLU;


void f0(void) {
    	volatile uint32_t x1 = 16038U;
	int8_t x2 = INT8_MAX;
	volatile int16_t x3 = INT16_MAX;
	uint32_t t0 = 7124U;

    t0 = ((x1|(x2!=x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	int32_t x6 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -40202057;

    t1 = ((x5|(x6!=x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	static int64_t x11 = INT64_MIN;

    t2 = ((x9|(x10!=x11))/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 95;
	static int64_t x14 = INT64_MAX;
	uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 17343247069680LLU;

    t3 = ((x13|(x14!=x15))/x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MAX;
	int16_t x19 = 8228;
	volatile int32_t x20 = INT32_MAX;

    t4 = ((x17|(x18!=x19))/x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	static uint8_t x22 = 0U;
	static int64_t x23 = INT64_MAX;
	volatile int64_t x24 = -1LL;

    t5 = ((x21|(x22!=x23))/x24);

    if (t5 != -65535LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = 3;
	volatile int32_t x27 = INT32_MIN;
	int32_t t6 = 17700086;

    t6 = ((x25|(x26!=x27))/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -1;
	int64_t x31 = INT64_MIN;
	static int16_t x32 = INT16_MIN;

    t7 = ((x29|(x30!=x31))/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = -446;
	static uint8_t x34 = 2U;
	int8_t x35 = 0;

    t8 = ((x33|(x34!=x35))/x36);

    if (t8 != 429496685U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -3368;
	int16_t x38 = INT16_MIN;
	int16_t x39 = 1;
	static int32_t t9 = 493983938;

    t9 = ((x37|(x38!=x39))/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	uint32_t x42 = 175U;
	int16_t x43 = 15149;
	static int32_t t10 = -6855856;

    t10 = ((x41|(x42!=x43))/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 412083797284101LL;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 4769U;
	int16_t x48 = -1;
	int64_t t11 = -30LL;

    t11 = ((x45|(x46!=x47))/x48);

    if (t11 != -412083797284101LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int64_t x51 = 4118364451LL;
	static volatile int32_t t12 = -225;

    t12 = ((x49|(x50!=x51))/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x54 = -1;
	uint16_t x55 = 18U;
	volatile int32_t t13 = 182;

    t13 = ((x53|(x54!=x55))/x56);

    if (t13 != -4681) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 493U;
	static uint8_t x58 = 50U;
	volatile int16_t x59 = 102;
	static volatile int8_t x60 = INT8_MIN;
	int32_t t14 = -170;

    t14 = ((x57|(x58!=x59))/x60);

    if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static volatile int32_t x62 = -43;
	volatile int64_t x63 = 318335LL;
	static int32_t x64 = INT32_MAX;
	int64_t t15 = -105374422838519473LL;

    t15 = ((x61|(x62!=x63))/x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x66 = 0;
	volatile int8_t x67 = -1;
	uint8_t x68 = 9U;

    t16 = ((x65|(x66!=x67))/x68);

    if (t16 != 119530077491960449LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int64_t x70 = -410486LL;
	static uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = 50226;

    t17 = ((x69|(x70!=x71))/x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -1LL;
	int8_t x76 = -17;

    t18 = ((x73|(x74!=x75))/x76);

    if (t18 != 126322567) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = UINT32_MAX;
	int64_t x78 = -1LL;
	static int16_t x79 = -1;
	volatile int64_t t19 = 270353198843450884LL;

    t19 = ((x77|(x78!=x79))/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = -4006315195LL;
	int32_t x84 = -14210;
	int64_t t20 = 122LL;

    t20 = ((x81|(x82!=x83))/x84);

    if (t20 != 281936LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = INT8_MIN;
	volatile uint64_t x86 = 4797371450329057LLU;
	int8_t x87 = -1;
	int64_t x88 = INT64_MIN;

    t21 = ((x85|(x86!=x87))/x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 6904743952812088810LLU;
	int8_t x90 = -6;
	int32_t x91 = -17550;
	int64_t x92 = 128982707277650610LL;
	uint64_t t22 = 12262581367LLU;

    t22 = ((x89|(x90!=x91))/x92);

    if (t22 != 53LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MAX;
	int8_t x94 = -1;
	int16_t x95 = -1;
	volatile int32_t t23 = 727990;

    t23 = ((x93|(x94!=x95))/x96);

    if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 44306748;
	static volatile int32_t x98 = INT32_MIN;
	uint64_t x99 = 4506184LLU;
	volatile uint64_t x100 = 1969829987LLU;
	uint64_t t24 = 268275746065154LLU;

    t24 = ((x97|(x98!=x99))/x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -2106023382LL;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MIN;

    t25 = ((x101|(x102!=x103))/x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	uint8_t x106 = 18U;
	int32_t x107 = -1;
	volatile int16_t x108 = INT16_MIN;
	static int32_t t26 = 1784;

    t26 = ((x105|(x106!=x107))/x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x110 = 1;
	uint32_t x111 = 129436955U;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t27 = -28LL;

    t27 = ((x109|(x110!=x111))/x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = 26716561143LL;
	int16_t x114 = INT16_MIN;
	volatile int32_t x115 = INT32_MIN;
	static int16_t x116 = INT16_MIN;

    t28 = ((x113|(x114!=x115))/x116);

    if (t28 != -815324LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x117 = 95U;
	int16_t x118 = -1;
	int32_t x119 = 2038406;
	volatile int32_t t29 = -312914670;

    t29 = ((x117|(x118!=x119))/x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	static uint32_t x122 = 499U;
	static int32_t x123 = -1;
	int64_t x124 = -1LL;
	int64_t t30 = 8548468420023846LL;

    t30 = ((x121|(x122!=x123))/x124);

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 529174072285939LLU;
	static int32_t x126 = -2659;
	int32_t x127 = -83;
	uint32_t x128 = 3185792U;

    t31 = ((x125|(x126!=x127))/x128);

    if (t31 != 166104401LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = -1LL;
	int16_t x131 = INT16_MAX;
	static volatile int64_t x132 = INT64_MIN;
	int64_t t32 = 1009LL;

    t32 = ((x129|(x130!=x131))/x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 15496087136577531LL;
	volatile uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MAX;
	volatile int64_t t33 = 8442LL;

    t33 = ((x133|(x134!=x135))/x136);

    if (t33 != 7215927LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = -188652900790693LL;
	int8_t x139 = -9;
	int32_t t34 = 2253177;

    t34 = ((x137|(x138!=x139))/x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -120345344517429431LL;
	static int16_t x142 = -19;
	uint16_t x143 = 7U;
	static uint64_t x144 = 1983492112818636LLU;
	volatile uint64_t t35 = 9505334LLU;

    t35 = ((x141|(x142!=x143))/x144);

    if (t35 != 9239LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	volatile int32_t x146 = INT32_MAX;
	static volatile int16_t x147 = -2911;
	static uint32_t x148 = 50466780U;
	volatile uint32_t t36 = 7U;

    t36 = ((x145|(x146!=x147))/x148);

    if (t36 != 85U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x151 = 931U;
	int8_t x152 = INT8_MAX;
	int32_t t37 = -928;

    t37 = ((x149|(x150!=x151))/x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -962882LL;
	volatile uint64_t x154 = UINT64_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	static int64_t t38 = -135998716158781LL;

    t38 = ((x153|(x154!=x155))/x156);

    if (t38 != 29LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	int64_t x158 = -63736LL;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 11412U;
	volatile int32_t t39 = 322812513;

    t39 = ((x157|(x158!=x159))/x160);

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	static uint32_t x162 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;
	int32_t t40 = -1066;

    t40 = ((x161|(x162!=x163))/x164);

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 19337;

    t41 = ((x165|(x166!=x167))/x168);

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x170 = -1LL;
	static volatile uint8_t x171 = 1U;
	int16_t x172 = 1;
	int32_t t42 = -4946623;

    t42 = ((x169|(x170!=x171))/x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MAX;
	int32_t x175 = 3151;
	uint64_t x176 = UINT64_MAX;
	uint64_t t43 = 463119682694689LLU;

    t43 = ((x173|(x174!=x175))/x176);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x178 = 1094595390LLU;
	static int16_t x179 = -1;
	int64_t x180 = 77407969980154LL;
	volatile int64_t t44 = -1885885969153LL;

    t44 = ((x177|(x178!=x179))/x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x181 = INT32_MAX;
	int16_t x182 = 6563;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MAX;
	volatile int32_t t45 = 50744506;

    t45 = ((x181|(x182!=x183))/x184);

    if (t45 != 65538) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x185 = 67052717103076733LLU;
	uint8_t x186 = 84U;
	int8_t x187 = 0;
	static int8_t x188 = -1;
	uint64_t t46 = 85742LLU;

    t46 = ((x185|(x186!=x187))/x188);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = 19;
	volatile int64_t x191 = -11207LL;
	static int8_t x192 = INT8_MIN;
	uint64_t t47 = 3365LLU;

    t47 = ((x189|(x190!=x191))/x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	int64_t x195 = -1183LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = 22;

    t48 = ((x193|(x194!=x195))/x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MAX;
	uint32_t x199 = 8U;
	uint32_t t49 = 13U;

    t49 = ((x197|(x198!=x199))/x200);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t t50 = 117LL;

    t50 = ((x201|(x202!=x203))/x204);

    if (t50 != 4720232946506LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MAX;
	int16_t x208 = 18;
	static int32_t t51 = 121;

    t51 = ((x205|(x206!=x207))/x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 4U;
	uint8_t x210 = 7U;
	int16_t x211 = INT16_MIN;
	static int32_t t52 = 129801;

    t52 = ((x209|(x210!=x211))/x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	uint64_t x214 = 75502607976247LLU;
	int16_t x215 = INT16_MIN;
	volatile int8_t x216 = 1;
	volatile int64_t t53 = INT64_MAX;

    t53 = ((x213|(x214!=x215))/x216);

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = INT64_MAX;
	static int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;
	uint64_t t54 = 527218LLU;

    t54 = ((x217|(x218!=x219))/x220);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = 1;

    t55 = ((x221|(x222!=x223))/x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	static int32_t x228 = -1;
	int64_t t56 = 1LL;

    t56 = ((x225|(x226!=x227))/x228);

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = INT32_MAX;
	int32_t x231 = 7496548;
	volatile int16_t x232 = INT16_MIN;
	static int32_t t57 = 70;

    t57 = ((x229|(x230!=x231))/x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	int8_t x235 = 3;
	uint8_t x236 = 111U;
	static volatile int32_t t58 = -103770;

    t58 = ((x233|(x234!=x235))/x236);

    if (t58 != -295) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MIN;
	int64_t x239 = -1LL;
	uint64_t x240 = 161LLU;
	uint64_t t59 = 2102700230942LLU;

    t59 = ((x237|(x238!=x239))/x240);

    if (t59 != 114576050147264294LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 255287134U;
	static int32_t t60 = -1;

    t60 = ((x241|(x242!=x243))/x244);

    if (t60 != 18) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	uint16_t x246 = 6344U;
	int64_t x247 = INT64_MIN;
	int16_t x248 = -2438;
	volatile int32_t t61 = 4928382;

    t61 = ((x245|(x246!=x247))/x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x250 = 88U;
	volatile uint32_t x252 = UINT32_MAX;
	volatile uint32_t t62 = 2U;

    t62 = ((x249|(x250!=x251))/x252);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MAX;
	int64_t x254 = -279825394853552413LL;
	static int8_t x256 = INT8_MIN;

    t63 = ((x253|(x254!=x255))/x256);

    if (t63 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 23223LLU;
	int32_t x258 = INT32_MAX;
	static int8_t x259 = 7;
	volatile int16_t x260 = INT16_MIN;
	volatile uint64_t t64 = 7195106LLU;

    t64 = ((x257|(x258!=x259))/x260);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MAX;
	volatile int64_t t65 = -32407708LL;

    t65 = ((x261|(x262!=x263))/x264);

    if (t65 != -492253210690LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x266 = INT8_MAX;
	static volatile uint16_t x267 = 6U;
	static int16_t x268 = INT16_MIN;
	volatile int64_t t66 = -10802634704LL;

    t66 = ((x265|(x266!=x267))/x268);

    if (t66 != -281474976710655LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	int64_t x271 = -1638664512083913LL;
	uint16_t x272 = 4003U;
	volatile int32_t t67 = 477;

    t67 = ((x269|(x270!=x271))/x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	static int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 5764U;
	static int32_t t68 = 376359740;

    t68 = ((x273|(x274!=x275))/x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x279 = -1;
	uint64_t x280 = 406LLU;

    t69 = ((x277|(x278!=x279))/x280);

    if (t69 != 20LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x282 = 47;
	int8_t x283 = INT8_MAX;
	volatile uint16_t x284 = 1U;
	int32_t t70 = -62023;

    t70 = ((x281|(x282!=x283))/x284);

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x289 = -113LL;
	int32_t x290 = 132770644;
	static int8_t x291 = -1;
	static volatile int64_t x292 = -1LL;

    t71 = ((x289|(x290!=x291))/x292);

    if (t71 != 113LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x293 = UINT64_MAX;
	volatile uint8_t x294 = 63U;
	static int32_t x296 = -1028;
	uint64_t t72 = 209178767LLU;

    t72 = ((x293|(x294!=x295))/x296);

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x297 = 3279110U;
	static uint64_t x299 = 16LLU;
	int16_t x300 = -1;
	volatile uint32_t t73 = 4U;

    t73 = ((x297|(x298!=x299))/x300);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = -3174289LL;
	int64_t x302 = 64229888928294179LL;
	int32_t x303 = -1;
	int16_t x304 = -1;
	volatile int64_t t74 = 13LL;

    t74 = ((x301|(x302!=x303))/x304);

    if (t74 != 3174289LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MAX;
	volatile int64_t x306 = INT64_MIN;
	static int32_t x307 = INT32_MAX;
	static volatile int64_t x308 = -1036LL;
	int64_t t75 = -6318762132LL;

    t75 = ((x305|(x306!=x307))/x308);

    if (t75 != -2072860LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MAX;
	uint32_t x310 = 12471195U;
	int16_t x311 = -12993;
	static int32_t x312 = -1;
	static volatile int32_t t76 = 1530448;

    t76 = ((x309|(x310!=x311))/x312);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x314 = 123U;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t77 = 90793;

    t77 = ((x313|(x314!=x315))/x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x317 = 1053964964U;
	int64_t x319 = INT64_MAX;
	volatile uint32_t x320 = 1U;

    t78 = ((x317|(x318!=x319))/x320);

    if (t78 != 1053964965U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	uint32_t x323 = 16325U;
	volatile int32_t x324 = INT32_MIN;
	int32_t t79 = 41;

    t79 = ((x321|(x322!=x323))/x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x325 = INT64_MIN;
	uint8_t x326 = 33U;
	int16_t x327 = 23;
	volatile int64_t t80 = -2770231930LL;

    t80 = ((x325|(x326!=x327))/x328);

    if (t80 != -281483566907400LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x329 = INT32_MIN;
	uint32_t x330 = 31722U;
	int16_t x331 = -1;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t81 = -1;

    t81 = ((x329|(x330!=x331))/x332);

    if (t81 != -16909320) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x333 = -9515652626579LL;
	uint64_t x334 = 382193870969747308LLU;
	int8_t x335 = INT8_MIN;
	static int8_t x336 = -1;
	static volatile int64_t t82 = 492157LL;

    t82 = ((x333|(x334!=x335))/x336);

    if (t82 != 9515652626579LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MAX;
	int16_t x340 = -1;
	volatile int64_t t83 = 36541722318LL;

    t83 = ((x337|(x338!=x339))/x340);

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x342 = -13;

    t84 = ((x341|(x342!=x343))/x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x345 = 10704U;
	static volatile int8_t x346 = INT8_MIN;
	static int16_t x347 = INT16_MIN;
	uint8_t x348 = 60U;
	static volatile int32_t t85 = 0;

    t85 = ((x345|(x346!=x347))/x348);

    if (t85 != 178) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MAX;
	volatile int32_t t86 = 118;

    t86 = ((x349|(x350!=x351))/x352);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = UINT64_MAX;
	int32_t x354 = -28375;
	int16_t x355 = 5222;
	uint32_t x356 = 17452331U;
	uint64_t t87 = 2068664428113596LLU;

    t87 = ((x353|(x354!=x355))/x356);

    if (t87 != 1056978811237LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x357 = 728U;
	int32_t x358 = -1;
	int64_t x359 = -1337732347561512LL;
	int16_t x360 = -1;
	uint32_t t88 = 9U;

    t88 = ((x357|(x358!=x359))/x360);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x361 = -1;
	uint32_t x362 = 1452U;
	static int32_t x363 = -1;
	static int32_t t89 = 20331;

    t89 = ((x361|(x362!=x363))/x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = 0U;
	int64_t x366 = -15472475005097LL;
	volatile int32_t x367 = INT32_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t90 = -1082198323542123LL;

    t90 = ((x365|(x366!=x367))/x368);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = INT8_MIN;
	static int64_t x370 = -52146067218435LL;

    t91 = ((x369|(x370!=x371))/x372);

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x373 = -1;
	int64_t x374 = -1475377578715968LL;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MAX;
	static int32_t t92 = -1919;

    t92 = ((x373|(x374!=x375))/x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x377 = UINT32_MAX;
	int16_t x379 = 5;
	uint64_t x380 = 41LLU;
	static volatile uint64_t t93 = 43621LLU;

    t93 = ((x377|(x378!=x379))/x380);

    if (t93 != 104755299LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x381 = INT64_MAX;
	uint64_t x382 = UINT64_MAX;
	volatile uint16_t x384 = 20111U;
	int64_t t94 = -1271407LL;

    t94 = ((x381|(x382!=x383))/x384);

    if (t94 != 458623242844949LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;
	volatile int64_t x388 = INT64_MAX;

    t95 = ((x385|(x386!=x387))/x388);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x389 = 6500715;
	int8_t x390 = -28;
	volatile int16_t x391 = INT16_MIN;
	uint64_t x392 = 1457767604154872187LLU;
	uint64_t t96 = 41875264588LLU;

    t96 = ((x389|(x390!=x391))/x392);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x393 = UINT32_MAX;
	uint16_t x394 = 30543U;
	int8_t x395 = 50;
	volatile int32_t x396 = 266;
	volatile uint32_t t97 = 4405U;

    t97 = ((x393|(x394!=x395))/x396);

    if (t97 != 16146493U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MAX;
	static uint64_t x399 = 47LLU;
	static uint16_t x400 = UINT16_MAX;
	int32_t t98 = -51297;

    t98 = ((x397|(x398!=x399))/x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x401 = -1;
	volatile uint64_t x402 = UINT64_MAX;
	volatile int64_t t99 = 4848864952085LL;

    t99 = ((x401|(x402!=x403))/x404);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x405 = INT16_MAX;
	static int32_t x406 = INT32_MIN;

    t100 = ((x405|(x406!=x407))/x408);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x409 = UINT32_MAX;
	volatile uint32_t x410 = 85883654U;
	static uint8_t x411 = UINT8_MAX;
	uint64_t x412 = 398157892LLU;
	static uint64_t t101 = 93832LLU;

    t101 = ((x409|(x410!=x411))/x412);

    if (t101 != 10LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x413 = INT32_MIN;
	uint64_t x414 = UINT64_MAX;
	static int16_t x415 = INT16_MIN;
	int32_t x416 = -51432690;
	static volatile int32_t t102 = 526602835;

    t102 = ((x413|(x414!=x415))/x416);

    if (t102 != 41) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x417 = INT8_MIN;
	static uint8_t x418 = 12U;
	int64_t x420 = INT64_MIN;

    t103 = ((x417|(x418!=x419))/x420);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x421 = INT32_MIN;
	static uint64_t x422 = 13LLU;
	uint8_t x423 = 4U;
	static int64_t x424 = INT64_MAX;
	int64_t t104 = -43544322044800687LL;

    t104 = ((x421|(x422!=x423))/x424);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = 6890;
	static int16_t x426 = INT16_MIN;
	uint16_t x427 = 7233U;
	int64_t x428 = INT64_MIN;
	int64_t t105 = 970396363823493LL;

    t105 = ((x425|(x426!=x427))/x428);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = 1U;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = 3638553567858359596LL;
	volatile int64_t t106 = -1247494898944414LL;

    t106 = ((x433|(x434!=x435))/x436);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x437 = INT8_MAX;
	int32_t x439 = -1;
	uint64_t t107 = 4LLU;

    t107 = ((x437|(x438!=x439))/x440);

    if (t107 != 10LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = 59774;
	static int64_t x442 = -1639134633403LL;
	volatile uint32_t x443 = UINT32_MAX;
	uint32_t x444 = UINT32_MAX;
	volatile uint32_t t108 = 68382U;

    t108 = ((x441|(x442!=x443))/x444);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x445 = UINT8_MAX;
	int8_t x446 = -11;
	static int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MIN;

    t109 = ((x445|(x446!=x447))/x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x449 = INT64_MIN;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -1LL;

    t110 = ((x449|(x450!=x451))/x452);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x453 = UINT64_MAX;
	static int8_t x454 = -7;
	static int16_t x455 = -10;
	int32_t x456 = 126;

    t111 = ((x453|(x454!=x455))/x456);

    if (t111 != 146402730743726600LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x457 = -1;
	int8_t x458 = 4;
	int32_t x459 = INT32_MIN;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t112 = -105645554;

    t112 = ((x457|(x458!=x459))/x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x464 = 3U;
	int32_t t113 = -41274801;

    t113 = ((x461|(x462!=x463))/x464);

    if (t113 != 1225) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x465 = UINT8_MAX;
	int32_t x466 = -1;
	int32_t x467 = INT32_MIN;
	volatile int8_t x468 = INT8_MIN;

    t114 = ((x465|(x466!=x467))/x468);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x469 = INT8_MAX;
	volatile int16_t x470 = -1;
	uint8_t x471 = 3U;
	uint16_t x472 = 75U;

    t115 = ((x469|(x470!=x471))/x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x473 = UINT16_MAX;
	static int16_t x474 = INT16_MAX;
	uint64_t x475 = 1882864508058LLU;
	int32_t t116 = -28856406;

    t116 = ((x473|(x474!=x475))/x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x479 = INT16_MAX;
	int32_t x480 = -583534602;
	volatile int32_t t117 = -1;

    t117 = ((x477|(x478!=x479))/x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x481 = 460743U;
	int16_t x482 = -1;
	volatile uint16_t x483 = UINT16_MAX;
	int64_t t118 = 2419811708LL;

    t118 = ((x481|(x482!=x483))/x484);

    if (t118 != -460743LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	int32_t x488 = INT32_MIN;

    t119 = ((x485|(x486!=x487))/x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x489 = 157051268LLU;
	volatile int32_t x491 = -498707;
	volatile uint64_t t120 = 11LLU;

    t120 = ((x489|(x490!=x491))/x492);

    if (t120 != 31410253LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = 3529125;
	int16_t x495 = INT16_MIN;
	int8_t x496 = -1;
	volatile int32_t t121 = 0;

    t121 = ((x493|(x494!=x495))/x496);

    if (t121 != -3529125) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x497 = 489793LL;
	int8_t x498 = INT8_MIN;
	static volatile uint32_t x500 = 89583U;
	static int64_t t122 = 2LL;

    t122 = ((x497|(x498!=x499))/x500);

    if (t122 != 5LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x501 = 2U;
	int64_t x502 = 3409381LL;
	uint32_t x503 = 443U;

    t123 = ((x501|(x502!=x503))/x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x505 = 6360008LLU;
	volatile int32_t x506 = INT32_MIN;
	uint32_t x507 = 47331828U;
	volatile uint16_t x508 = UINT16_MAX;

    t124 = ((x505|(x506!=x507))/x508);

    if (t124 != 97LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x510 = INT8_MAX;
	static int32_t x511 = -425;
	volatile int8_t x512 = INT8_MIN;
	static int32_t t125 = 54189601;

    t125 = ((x509|(x510!=x511))/x512);

    if (t125 != -16777215) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x515 = INT64_MIN;
	uint64_t x516 = 241186LLU;

    t126 = ((x513|(x514!=x515))/x516);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = -48;
	uint8_t x519 = 0U;
	volatile int64_t t127 = 373677293LL;

    t127 = ((x517|(x518!=x519))/x520);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x523 = -14;
	static int16_t x524 = INT16_MIN;
	int32_t t128 = 399675928;

    t128 = ((x521|(x522!=x523))/x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = 28106LL;
	int16_t x526 = INT16_MIN;
	static volatile int32_t x527 = 2525107;
	int8_t x528 = INT8_MIN;
	int64_t t129 = -334288945786LL;

    t129 = ((x525|(x526!=x527))/x528);

    if (t129 != -219LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x531 = INT16_MIN;
	int8_t x532 = -1;
	int32_t t130 = 1757876;

    t130 = ((x529|(x530!=x531))/x532);

    if (t130 != -65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x533 = INT8_MAX;
	int8_t x534 = 21;
	int32_t x536 = 63988;
	static volatile int32_t t131 = 2743863;

    t131 = ((x533|(x534!=x535))/x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = 40U;
	static int16_t x542 = INT16_MAX;
	int8_t x543 = INT8_MAX;
	static int32_t x544 = INT32_MAX;
	static int32_t t132 = -2130;

    t132 = ((x541|(x542!=x543))/x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x546 = INT16_MIN;
	static int32_t x547 = INT32_MIN;
	uint64_t x548 = 31004488LLU;
	uint64_t t133 = 20137LLU;

    t133 = ((x545|(x546!=x547))/x548);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x549 = -1;
	uint64_t x550 = 7992619837208LLU;
	int32_t t134 = 320445;

    t134 = ((x549|(x550!=x551))/x552);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x554 = -1;
	uint8_t x556 = 2U;

    t135 = ((x553|(x554!=x555))/x556);

    if (t135 != 495044029166312LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x559 = -1;
	static volatile uint32_t t136 = 64U;

    t136 = ((x557|(x558!=x559))/x560);

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x565 = 454103128691LLU;
	int8_t x566 = -1;
	uint32_t x567 = UINT32_MAX;
	static int64_t x568 = INT64_MIN;
	static uint64_t t137 = 661515902LLU;

    t137 = ((x565|(x566!=x567))/x568);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x569 = 1U;
	uint16_t x571 = 1U;
	int32_t x572 = INT32_MIN;
	volatile int32_t t138 = 21;

    t138 = ((x569|(x570!=x571))/x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x573 = INT64_MIN;
	int8_t x575 = INT8_MIN;
	uint8_t x576 = UINT8_MAX;

    t139 = ((x573|(x574!=x575))/x576);

    if (t139 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x578 = -5;
	uint64_t x579 = 2012267LLU;
	static int32_t x580 = INT32_MIN;

    t140 = ((x577|(x578!=x579))/x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x581 = 835011296U;
	uint32_t x582 = 11932260U;
	uint32_t t141 = 45900224U;

    t141 = ((x581|(x582!=x583))/x584);

    if (t141 != 49118311U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x585 = 118U;
	volatile uint64_t x586 = 2164LLU;
	uint32_t x587 = UINT32_MAX;
	static int64_t x588 = INT64_MAX;

    t142 = ((x585|(x586!=x587))/x588);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	static int16_t x590 = -2;
	uint32_t x591 = 38906U;
	int8_t x592 = INT8_MIN;
	uint32_t t143 = 67365242U;

    t143 = ((x589|(x590!=x591))/x592);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = 43729U;
	volatile int8_t x594 = INT8_MIN;
	int32_t x596 = 32309;
	volatile uint32_t t144 = 182812U;

    t144 = ((x593|(x594!=x595))/x596);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x597 = -1;
	uint64_t x598 = 14319629125994680LLU;
	uint8_t x599 = 2U;
	volatile int8_t x600 = 1;

    t145 = ((x597|(x598!=x599))/x600);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x602 = INT8_MIN;
	static int64_t x603 = INT64_MAX;
	static uint32_t x604 = 3630U;
	uint32_t t146 = 1U;

    t146 = ((x601|(x602!=x603))/x604);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x605 = INT16_MAX;
	int32_t x606 = -1;
	int32_t x608 = -63994;
	static int32_t t147 = -331043;

    t147 = ((x605|(x606!=x607))/x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x609 = -244;
	int32_t x610 = -1;
	int8_t x611 = -1;
	int8_t x612 = 1;

    t148 = ((x609|(x610!=x611))/x612);

    if (t148 != -244) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x614 = 12;
	static volatile int64_t x615 = -1LL;
	int8_t x616 = 1;

    t149 = ((x613|(x614!=x615))/x616);

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x617 = INT8_MIN;
	static int32_t x618 = INT32_MAX;
	uint16_t x620 = 28817U;
	int32_t t150 = 0;

    t150 = ((x617|(x618!=x619))/x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x622 = -1;
	volatile int8_t x624 = -1;
	volatile int32_t t151 = 253188;

    t151 = ((x621|(x622!=x623))/x624);

    if (t151 != -53) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x626 = INT8_MIN;
	int64_t x627 = 142667714092991LL;
	uint16_t x628 = 482U;
	volatile int32_t t152 = 681439;

    t152 = ((x625|(x626!=x627))/x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x629 = INT16_MIN;
	int64_t x631 = -146678579518LL;
	int64_t x632 = -2692030527433297482LL;
	volatile int64_t t153 = -218312401LL;

    t153 = ((x629|(x630!=x631))/x632);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = -1;
	uint32_t x634 = 75U;
	uint32_t x635 = 63U;
	int32_t x636 = -1;
	int32_t t154 = 843472;

    t154 = ((x633|(x634!=x635))/x636);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x637 = -1;
	volatile int16_t x638 = -2601;
	uint32_t x639 = 4025U;
	int32_t t155 = -598411138;

    t155 = ((x637|(x638!=x639))/x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x641 = 2942U;
	int64_t x642 = INT64_MIN;
	uint64_t x643 = 1801LLU;
	int16_t x644 = INT16_MIN;
	uint32_t t156 = 59656U;

    t156 = ((x641|(x642!=x643))/x644);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x645 = UINT64_MAX;
	volatile int8_t x646 = 12;
	static int16_t x647 = 1;
	int8_t x648 = INT8_MIN;
	static volatile uint64_t t157 = 54397730143809474LLU;

    t157 = ((x645|(x646!=x647))/x648);

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x650 = 23481526646LL;
	volatile uint64_t t158 = 11LLU;

    t158 = ((x649|(x650!=x651))/x652);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x653 = 131177950531525LLU;
	static uint64_t x654 = UINT64_MAX;
	static volatile int16_t x655 = INT16_MIN;
	int32_t x656 = INT32_MAX;
	uint64_t t159 = 0LLU;

    t159 = ((x653|(x654!=x655))/x656);

    if (t159 != 61084LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x658 = 6U;
	uint32_t x659 = 983U;
	int16_t x660 = INT16_MIN;
	volatile int32_t t160 = -20428409;

    t160 = ((x657|(x658!=x659))/x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x661 = 620242888LL;
	static uint8_t x662 = 44U;
	int64_t x663 = INT64_MIN;
	int8_t x664 = 1;
	int64_t t161 = 145204605LL;

    t161 = ((x661|(x662!=x663))/x664);

    if (t161 != 620242889LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x665 = 204U;
	static volatile int64_t x666 = -106170LL;
	uint32_t x667 = 5937385U;
	static uint8_t x668 = 41U;
	uint32_t t162 = 27841075U;

    t162 = ((x665|(x666!=x667))/x668);

    if (t162 != 5U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x669 = -4;
	static uint64_t x671 = 222623961924829LLU;
	int32_t t163 = 2211;

    t163 = ((x669|(x670!=x671))/x672);

    if (t163 != -3) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x673 = 1003U;
	int32_t x674 = INT32_MAX;
	int8_t x675 = -1;
	int32_t x676 = -3;
	int32_t t164 = -43;

    t164 = ((x673|(x674!=x675))/x676);

    if (t164 != -334) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x677 = 817129006LLU;
	int32_t x678 = INT32_MAX;
	int32_t x679 = 3029;
	uint32_t x680 = 4U;
	uint64_t t165 = 4542471194126752283LLU;

    t165 = ((x677|(x678!=x679))/x680);

    if (t165 != 204282251LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x682 = UINT16_MAX;
	uint8_t x683 = 101U;
	uint16_t x684 = 273U;
	volatile int32_t t166 = 4533;

    t166 = ((x681|(x682!=x683))/x684);

    if (t166 != -7866240) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = -1;
	volatile int16_t x686 = INT16_MAX;
	int8_t x687 = INT8_MAX;
	volatile int64_t t167 = -54LL;

    t167 = ((x685|(x686!=x687))/x688);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = -1;
	int8_t x690 = INT8_MAX;
	int16_t x691 = INT16_MIN;
	uint64_t x692 = UINT64_MAX;
	static uint64_t t168 = 928LLU;

    t168 = ((x689|(x690!=x691))/x692);

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x694 = -1;
	static volatile uint16_t x695 = UINT16_MAX;
	int8_t x696 = INT8_MAX;
	static uint32_t t169 = 23U;

    t169 = ((x693|(x694!=x695))/x696);

    if (t169 != 26U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = INT16_MAX;
	static uint8_t x698 = UINT8_MAX;
	volatile int64_t x699 = -1LL;
	int32_t x700 = INT32_MIN;
	volatile int32_t t170 = 31;

    t170 = ((x697|(x698!=x699))/x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x703 = -1;
	int32_t x704 = -3555869;
	volatile int32_t t171 = 1;

    t171 = ((x701|(x702!=x703))/x704);

    if (t171 != -603) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x706 = INT64_MIN;
	int16_t x707 = 1441;
	static uint16_t x708 = UINT16_MAX;
	volatile int64_t t172 = 553473031375012LL;

    t172 = ((x705|(x706!=x707))/x708);

    if (t172 != -140739635871744LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x709 = INT32_MAX;
	static volatile uint32_t x710 = UINT32_MAX;
	volatile uint8_t x711 = UINT8_MAX;
	int8_t x712 = 5;
	volatile int32_t t173 = 105097377;

    t173 = ((x709|(x710!=x711))/x712);

    if (t173 != 429496729) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x713 = INT16_MIN;
	uint64_t x715 = UINT64_MAX;
	int8_t x716 = -1;
	static int32_t t174 = -2945;

    t174 = ((x713|(x714!=x715))/x716);

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x717 = 38;
	uint32_t x718 = UINT32_MAX;
	static int8_t x719 = INT8_MIN;
	volatile int32_t t175 = -681590;

    t175 = ((x717|(x718!=x719))/x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x721 = INT8_MAX;
	int32_t x723 = INT32_MIN;
	static int32_t t176 = 134935;

    t176 = ((x721|(x722!=x723))/x724);

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x725 = -253;
	volatile uint32_t x726 = 214U;
	volatile int8_t x727 = INT8_MIN;
	volatile int8_t x728 = INT8_MAX;
	volatile int32_t t177 = -251067;

    t177 = ((x725|(x726!=x727))/x728);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x729 = INT8_MIN;
	uint8_t x730 = UINT8_MAX;
	int16_t x731 = -1;
	uint32_t x732 = UINT32_MAX;
	uint32_t t178 = 26407U;

    t178 = ((x729|(x730!=x731))/x732);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x733 = 0U;
	int16_t x736 = 1;

    t179 = ((x733|(x734!=x735))/x736);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = 41;
	int64_t x738 = INT64_MIN;
	int32_t x739 = -96288;
	int64_t x740 = INT64_MAX;
	int64_t t180 = 26287602998952553LL;

    t180 = ((x737|(x738!=x739))/x740);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x741 = UINT16_MAX;
	static int16_t x742 = INT16_MIN;
	volatile int8_t x743 = -1;
	volatile int64_t x744 = INT64_MIN;

    t181 = ((x741|(x742!=x743))/x744);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x745 = INT32_MAX;
	uint64_t x748 = UINT64_MAX;
	uint64_t t182 = 37575677621LLU;

    t182 = ((x745|(x746!=x747))/x748);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x750 = INT16_MIN;
	volatile int8_t x752 = INT8_MAX;
	volatile int32_t t183 = -396;

    t183 = ((x749|(x750!=x751))/x752);

    if (t183 != 258) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x753 = INT32_MIN;
	static int64_t x754 = -410000991862LL;
	int16_t x755 = INT16_MIN;
	static int64_t x756 = -1LL;
	static int64_t t184 = -210537541531034LL;

    t184 = ((x753|(x754!=x755))/x756);

    if (t184 != 2147483647LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MIN;
	int64_t x759 = -1LL;
	int64_t x760 = INT64_MIN;
	int64_t t185 = 2487668279411364LL;

    t185 = ((x757|(x758!=x759))/x760);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x762 = -1;
	volatile int16_t x763 = -3;
	uint64_t x764 = 62960224501402441LLU;
	volatile uint64_t t186 = 2169466LLU;

    t186 = ((x761|(x762!=x763))/x764);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x765 = INT16_MIN;
	int64_t x766 = INT64_MIN;
	uint64_t x767 = 645258LLU;
	int16_t x768 = -1;
	int32_t t187 = -492720987;

    t187 = ((x765|(x766!=x767))/x768);

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x770 = 129919U;
	static int64_t x771 = 271473626LL;
	int8_t x772 = 5;
	int32_t t188 = 30;

    t188 = ((x769|(x770!=x771))/x772);

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x773 = -19753LL;
	static int8_t x774 = 0;
	int16_t x775 = -1;
	volatile uint32_t x776 = 1070918258U;
	volatile int64_t t189 = 6993251728LL;

    t189 = ((x773|(x774!=x775))/x776);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint16_t x778 = 12U;
	volatile uint8_t x779 = 10U;
	static uint64_t x780 = 6LLU;

    t190 = ((x777|(x778!=x779))/x780);

    if (t190 != 3074457345618258581LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x782 = 0U;
	int32_t x783 = INT32_MAX;
	int8_t x784 = INT8_MIN;
	static volatile int64_t t191 = 175246816152LL;

    t191 = ((x781|(x782!=x783))/x784);

    if (t191 != -8528601938692LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x785 = -1;
	int8_t x786 = -1;
	uint64_t x787 = 14120642151LLU;
	uint8_t x788 = 3U;
	int32_t t192 = -5594;

    t192 = ((x785|(x786!=x787))/x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x789 = 1LLU;
	uint64_t t193 = 575LLU;

    t193 = ((x789|(x790!=x791))/x792);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x793 = INT32_MAX;
	int16_t x794 = -561;
	int32_t x795 = -94086;
	static int8_t x796 = INT8_MIN;

    t194 = ((x793|(x794!=x795))/x796);

    if (t194 != -16777215) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x797 = UINT64_MAX;
	volatile int32_t x799 = INT32_MIN;
	static uint8_t x800 = 36U;
	uint64_t t195 = 4654LLU;

    t195 = ((x797|(x798!=x799))/x800);

    if (t195 != 512409557603043100LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x801 = UINT64_MAX;
	int64_t x802 = -1LL;
	int8_t x803 = INT8_MIN;
	int32_t x804 = INT32_MIN;
	volatile uint64_t t196 = 11681864316818LLU;

    t196 = ((x801|(x802!=x803))/x804);

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x805 = INT64_MIN;
	static volatile int8_t x806 = -1;
	volatile int32_t x807 = -367;
	int8_t x808 = INT8_MIN;

    t197 = ((x805|(x806!=x807))/x808);

    if (t197 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x809 = INT8_MAX;
	static int16_t x810 = INT16_MIN;
	static volatile int16_t x811 = -1;
	uint8_t x812 = 3U;
	int32_t t198 = -285925;

    t198 = ((x809|(x810!=x811))/x812);

    if (t198 != 42) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x813 = -469633102LL;
	uint8_t x814 = 92U;
	int16_t x815 = INT16_MAX;
	volatile uint64_t x816 = UINT64_MAX;

    t199 = ((x813|(x814!=x815))/x816);

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

