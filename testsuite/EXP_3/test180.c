
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

int8_t x2 = 0;
uint32_t x3 = 12323005U;
int8_t x7 = INT8_MIN;
static volatile int64_t t2 = 35LL;
volatile int64_t x24 = INT64_MAX;
volatile int64_t t5 = 582LL;
int8_t x30 = -1;
static volatile int64_t t7 = 952305728426635LL;
static int64_t x37 = 8330681927904963LL;
int16_t x40 = -78;
volatile int64_t t10 = -8324431495580LL;
static volatile int32_t t12 = 4;
int64_t x65 = INT64_MAX;
volatile int64_t t14 = 59LL;
int32_t x69 = 41;
int64_t x72 = INT64_MIN;
uint16_t x73 = 0U;
int16_t x75 = INT16_MIN;
volatile int32_t x76 = -285568792;
static int64_t x79 = INT64_MIN;
int64_t x81 = -1LL;
volatile int32_t x83 = INT32_MIN;
uint64_t x85 = 2LLU;
volatile int8_t x86 = INT8_MIN;
int32_t x88 = INT32_MIN;
volatile uint64_t t19 = 828LLU;
uint16_t x104 = UINT16_MAX;
uint64_t t22 = 5206523863LLU;
static int16_t x107 = -152;
uint64_t t23 = 117214462173274LLU;
static int32_t x116 = -1;
uint32_t x126 = 894841U;
int16_t x131 = -1;
static int32_t x134 = -1;
int64_t x142 = -3838346752805393584LL;
uint64_t x147 = 0LLU;
int16_t x148 = -1;
static int64_t x155 = INT64_MIN;
volatile uint32_t x169 = UINT32_MAX;
static uint64_t x170 = 219420702385LLU;
int32_t t39 = -3092162;
int8_t x179 = -1;
static int64_t t43 = 4149334LL;
int32_t x204 = INT32_MIN;
int8_t x206 = -1;
volatile uint16_t x207 = 5603U;
static int32_t x211 = -1279;
static int64_t t49 = 15348LL;
volatile uint64_t x227 = UINT64_MAX;
uint64_t x234 = UINT64_MAX;
int16_t x235 = 233;
static int32_t x243 = 105278233;
int16_t x249 = INT16_MIN;
int64_t x252 = 926917421LL;
volatile int16_t x253 = INT16_MAX;
volatile int32_t x259 = INT32_MIN;
uint32_t x260 = UINT32_MAX;
int32_t x265 = INT32_MIN;
uint8_t x266 = UINT8_MAX;
volatile int64_t t59 = 1093567631526LL;
int32_t x272 = INT32_MIN;
uint32_t x273 = 10U;
static volatile uint64_t t61 = 3478833053LLU;
int32_t x277 = -1;
int32_t t62 = 585;
int8_t x285 = INT8_MIN;
int8_t x286 = INT8_MIN;
static uint16_t x289 = 1359U;
int16_t x292 = -1;
int8_t x294 = INT8_MAX;
int16_t x307 = -170;
int32_t t67 = -141;
static int16_t x313 = 461;
int32_t x323 = INT32_MIN;
int32_t x326 = INT32_MAX;
static volatile int64_t x327 = 18039246221LL;
int8_t x329 = -1;
uint64_t x334 = 28LLU;
int8_t x335 = 0;
int16_t x338 = 11;
int8_t x339 = INT8_MAX;
static int32_t x340 = -3601736;
int8_t x344 = -1;
static int32_t x345 = -25556;
uint64_t x346 = 166597095755362LLU;
uint64_t x348 = 529181620467LLU;
uint64_t x350 = 5616460645LLU;
uint16_t x358 = 32118U;
volatile int32_t x361 = -1;
uint64_t x363 = UINT64_MAX;
static uint64_t t79 = 788890769010907LLU;
static uint8_t x366 = UINT8_MAX;
int32_t x367 = INT32_MIN;
uint16_t x372 = 191U;
volatile int64_t t82 = 8390LL;
static uint8_t x379 = 0U;
uint16_t x380 = 0U;
uint64_t x382 = 1337905483892355LLU;
int8_t x383 = INT8_MAX;
uint64_t t84 = 3936179068591647LLU;
uint8_t x400 = UINT8_MAX;
static uint64_t t87 = 541913701644205239LLU;
static int64_t t89 = 65927519229LL;
int32_t x415 = 162;
volatile int32_t x418 = INT32_MAX;
int8_t x421 = INT8_MAX;
volatile uint64_t x423 = UINT64_MAX;
volatile uint64_t t93 = 512LLU;
int16_t x425 = 2336;
int64_t x427 = -1LL;
int16_t x430 = INT16_MIN;
static uint64_t x437 = 4570272743809LLU;
int8_t x444 = -3;
volatile uint16_t x454 = 11661U;
uint8_t x456 = UINT8_MAX;
static volatile uint32_t t101 = 2088736503U;
static volatile uint64_t t104 = 352112339504LLU;
int8_t x470 = -1;
volatile int32_t x473 = -3436;
static volatile uint8_t x475 = UINT8_MAX;
volatile int16_t x479 = INT16_MIN;
int8_t x480 = INT8_MIN;
uint32_t x486 = 7197371U;
volatile int32_t x487 = -28988331;
int8_t x494 = -1;
static volatile int64_t x495 = -1LL;
volatile int32_t x503 = -1;
static uint16_t x508 = UINT16_MAX;
int16_t x517 = INT16_MIN;
int32_t x519 = 440198;
static volatile int8_t x521 = INT8_MIN;
uint32_t x522 = UINT32_MAX;
volatile uint32_t x527 = UINT32_MAX;
int16_t x528 = -4148;
volatile int64_t t117 = 17561190297LL;
int16_t x530 = 31;
uint64_t x536 = UINT64_MAX;
volatile uint64_t t119 = 27820338334359LLU;
int64_t x537 = INT64_MAX;
volatile uint64_t x551 = 10039592LLU;
int8_t x555 = INT8_MAX;
static volatile uint32_t t123 = 405657U;
int8_t x561 = 1;
int32_t x573 = -106080451;
uint64_t t127 = 0LLU;
int32_t x577 = INT32_MIN;
volatile int8_t x579 = INT8_MIN;
volatile uint8_t x582 = 3U;
int16_t x586 = INT16_MIN;
int8_t x605 = INT8_MAX;
volatile int16_t x609 = 15;
volatile int16_t x612 = -1;
int16_t x620 = 1;
volatile uint16_t x621 = 247U;
uint16_t x622 = UINT16_MAX;
uint8_t x629 = 1U;
int64_t x631 = -1LL;
int16_t x633 = 2;
volatile int32_t x634 = INT32_MAX;
int8_t x637 = INT8_MIN;
uint16_t x641 = UINT16_MAX;
int32_t x645 = INT32_MIN;
volatile int8_t x647 = INT8_MIN;
uint16_t x649 = 1U;
int64_t x660 = 4111068139056289LL;
int32_t x673 = -1;
int64_t x677 = -1LL;
volatile int64_t x679 = -1LL;
int32_t x680 = INT32_MAX;
volatile int16_t x683 = INT16_MIN;
volatile int64_t x685 = INT64_MIN;
int64_t x686 = INT64_MIN;
uint64_t t151 = 1634220LLU;
volatile uint64_t x700 = UINT64_MAX;
static uint16_t x703 = 849U;
int8_t x711 = INT8_MAX;
int32_t t156 = 10;
int64_t x727 = -1LL;
volatile int64_t t159 = 15783994299LL;
volatile int16_t x750 = INT16_MIN;
int64_t x753 = INT64_MIN;
int64_t x755 = -1LL;
int8_t x758 = INT8_MAX;
int8_t x759 = INT8_MIN;
int8_t x767 = -1;
int64_t t169 = 40681875LL;
uint8_t x776 = 27U;
int16_t x778 = -327;
int8_t x786 = INT8_MAX;
volatile int8_t x801 = -1;
uint16_t x807 = 74U;
int64_t x810 = 71318781538339LL;
static uint32_t x821 = 3U;
static uint32_t x829 = 1267143U;
int64_t x833 = INT64_MAX;
uint64_t x837 = 30946384LLU;
int16_t x838 = INT16_MIN;
uint16_t x858 = UINT16_MAX;
uint64_t x864 = UINT64_MAX;
uint64_t t188 = 158LLU;
static int32_t x876 = -115604559;
static volatile int32_t x884 = 5;
volatile int64_t t192 = 244LL;
int32_t x886 = INT32_MIN;
static volatile int64_t t193 = INT64_MIN;
volatile int8_t x895 = 7;
int64_t x906 = INT64_MIN;
uint16_t x907 = 1U;
volatile int64_t t199 = -101762853112928195LL;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static uint8_t x4 = 11U;
	uint32_t t0 = 826U;

    t0 = ((x1|x2)&(x3+x4));

    if (t0 != 200U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 99610705U;
	static uint32_t x6 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	uint32_t t1 = 83U;

    t1 = ((x5|x6)&(x7+x8));

    if (t1 != 4294967040U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -33;
	volatile int64_t x10 = -1LL;
	int16_t x11 = -1;
	volatile int16_t x12 = 893;

    t2 = ((x9|x10)&(x11+x12));

    if (t2 != 892LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MAX;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = 0U;
	static volatile int64_t t3 = -81085972576179LL;

    t3 = ((x17|x18)&(x19+x20));

    if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MAX;
	int32_t x22 = -1;
	int64_t x23 = INT64_MIN;
	volatile int64_t t4 = -481LL;

    t4 = ((x21|x22)&(x23+x24));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = -37;
	uint32_t x26 = 127U;
	static int8_t x27 = INT8_MAX;
	int64_t x28 = -1LL;

    t5 = ((x25|x26)&(x27+x28));

    if (t5 != 126LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	int32_t x32 = -31506763;
	volatile int32_t t6 = 30;

    t6 = ((x29|x30)&(x31+x32));

    if (t6 != -31506891) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -139429104;
	int16_t x34 = 7290;
	static uint8_t x35 = UINT8_MAX;
	int64_t x36 = -1LL;

    t7 = ((x33|x34)&(x35+x36));

    if (t7 != 122LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x38 = INT8_MIN;
	static uint32_t x39 = 390135U;
	volatile int64_t t8 = -905931LL;

    t8 = ((x37|x38)&(x39+x40));

    if (t8 != 390017LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x41 = 4U;
	static int16_t x42 = INT16_MIN;
	int64_t x43 = -1LL;
	volatile int16_t x44 = 10;
	int64_t t9 = -13489LL;

    t9 = ((x41|x42)&(x43+x44));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 19U;
	volatile int64_t x47 = -62264614044LL;
	uint16_t x48 = UINT16_MAX;

    t10 = ((x45|x46)&(x47+x48));

    if (t10 != 25443LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = -13202902207113162LL;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = 24U;
	static volatile int64_t t11 = 7175LL;

    t11 = ((x49|x50)&(x51+x52));

    if (t11 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x57 = 1U;
	volatile uint16_t x58 = 4832U;
	static volatile int32_t x59 = -1;
	uint8_t x60 = 113U;

    t12 = ((x57|x58)&(x59+x60));

    if (t12 != 96) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 4U;
	volatile int32_t t13 = 604633071;

    t13 = ((x61|x62)&(x63+x64));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x66 = -1LL;
	static int16_t x67 = INT16_MIN;
	int8_t x68 = -11;

    t14 = ((x65|x66)&(x67+x68));

    if (t14 != -32779LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x70 = INT64_MAX;
	volatile uint64_t x71 = 204360LLU;
	volatile uint64_t t15 = 120LLU;

    t15 = ((x69|x70)&(x71+x72));

    if (t15 != 204360LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x74 = 277048457062LL;
	volatile int64_t t16 = 6138721LL;

    t16 = ((x73|x74)&(x75+x76));

    if (t16 != 277031293024LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	volatile uint32_t x80 = 4U;
	static volatile int64_t t17 = INT64_MIN;

    t17 = ((x77|x78)&(x79+x80));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x82 = -1;
	static volatile uint64_t x84 = 64185508LLU;
	static volatile uint64_t t18 = 558934LLU;

    t18 = ((x81|x82)&(x83+x84));

    if (t18 != 18446744071626253476LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x87 = UINT64_MAX;

    t19 = ((x85|x86)&(x87+x88));

    if (t19 != 18446744071562067842LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 1095U;
	int8_t x90 = -1;
	volatile uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = INT32_MAX;
	uint64_t t20 = 361394932LLU;

    t20 = ((x89|x90)&(x91+x92));

    if (t20 != 2147483646LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = -101954526LL;
	int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	uint16_t x96 = UINT16_MAX;
	uint64_t t21 = 893656002339310173LLU;

    t21 = ((x93|x94)&(x95+x96));

    if (t21 != 65442LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x101 = 3LLU;
	int16_t x102 = INT16_MIN;
	int64_t x103 = -1059501598221153LL;

    t22 = ((x101|x102)&(x103+x104));

    if (t22 != 18445684572111372290LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	uint8_t x108 = 0U;

    t23 = ((x105|x106)&(x107+x108));

    if (t23 != 18446744073709551464LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = -1;
	static uint16_t x110 = UINT16_MAX;
	uint8_t x111 = 1U;
	uint32_t x112 = 31720364U;
	volatile uint32_t t24 = 100U;

    t24 = ((x109|x110)&(x111+x112));

    if (t24 != 31720365U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -297;
	uint64_t x114 = 3052LLU;
	uint64_t x115 = 9LLU;
	static uint64_t t25 = 730LLU;

    t25 = ((x113|x114)&(x115+x116));

    if (t25 != 8LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = 811410415LL;
	volatile uint32_t x119 = UINT32_MAX;
	int8_t x120 = -1;
	uint64_t t26 = 6039915588LLU;

    t26 = ((x117|x118)&(x119+x120));

    if (t26 != 4294967294LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = INT64_MIN;
	int64_t x122 = 4353254088682549LL;
	static int32_t x123 = 114102406;
	uint64_t x124 = 18033671490488LLU;
	static volatile uint64_t t27 = 69138544191898047LLU;

    t27 = ((x121|x122)&(x123+x124));

    if (t27 != 17879160458292LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x125 = UINT32_MAX;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = INT8_MAX;
	static uint32_t t28 = 616970U;

    t28 = ((x125|x126)&(x127+x128));

    if (t28 != 382U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x129 = INT16_MAX;
	int32_t x130 = INT32_MIN;
	uint64_t x132 = 19525316069LLU;
	volatile uint64_t t29 = 100885382969535150LLU;

    t29 = ((x129|x130)&(x131+x132));

    if (t29 != 19327364580LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x133 = -2810;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 8U;
	volatile int64_t t30 = 1LL;

    t30 = ((x133|x134)&(x135+x136));

    if (t30 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 8548567U;
	int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = 4U;
	uint32_t t31 = 22262U;

    t31 = ((x137|x138)&(x139+x140));

    if (t31 != 2147450884U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x141 = -21542635318057672LL;
	static uint64_t x143 = 943155LLU;
	static volatile int8_t x144 = -31;
	uint64_t t32 = 49269775877190000LLU;

    t32 = ((x141|x142)&(x143+x144));

    if (t32 != 418832LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -1;
	int16_t x146 = -38;
	static uint64_t t33 = UINT64_MAX;

    t33 = ((x145|x146)&(x147+x148));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = INT8_MIN;
	static uint16_t x150 = UINT16_MAX;
	volatile uint8_t x151 = 0U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t34 = 5747183;

    t34 = ((x149|x150)&(x151+x152));

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = 2;
	int32_t x154 = INT32_MAX;
	static uint16_t x156 = 38U;
	int64_t t35 = 92LL;

    t35 = ((x153|x154)&(x155+x156));

    if (t35 != 38LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x157 = UINT64_MAX;
	volatile uint16_t x158 = 0U;
	uint16_t x159 = 2U;
	static volatile int16_t x160 = 0;
	static uint64_t t36 = 542245071790379811LLU;

    t36 = ((x157|x158)&(x159+x160));

    if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MIN;
	volatile uint8_t x162 = 47U;
	uint16_t x163 = 1230U;
	static int8_t x164 = INT8_MIN;
	static volatile int32_t t37 = 6402;

    t37 = ((x161|x162)&(x163+x164));

    if (t37 != 14) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MIN;
	volatile uint64_t t38 = 188654273535517172LLU;

    t38 = ((x169|x170)&(x171+x172));

    if (t38 != 223338266623LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x173 = 20U;
	int16_t x174 = 12;
	int8_t x175 = INT8_MIN;
	volatile uint8_t x176 = UINT8_MAX;

    t39 = ((x173|x174)&(x175+x176));

    if (t39 != 28) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x177 = 1U;
	uint32_t x178 = 219U;
	static uint16_t x180 = 47U;
	uint32_t t40 = 26099764U;

    t40 = ((x177|x178)&(x179+x180));

    if (t40 != 10U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x189 = INT32_MAX;
	static int16_t x190 = -1;
	volatile int64_t x191 = -328205723698660963LL;
	volatile int32_t x192 = INT32_MIN;
	volatile int64_t t41 = -122507357811LL;

    t41 = ((x189|x190)&(x191+x192));

    if (t41 != -328205725846144611LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = 6;
	volatile uint16_t x194 = 0U;
	uint16_t x195 = 108U;
	uint16_t x196 = 71U;
	volatile int32_t t42 = -3396;

    t42 = ((x193|x194)&(x195+x196));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x197 = -3;
	volatile int64_t x198 = 21260627146918LL;
	static volatile uint16_t x199 = 2U;
	volatile int16_t x200 = 2;

    t43 = ((x197|x198)&(x199+x200));

    if (t43 != 4LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x201 = -1LL;
	static volatile int8_t x202 = -1;
	volatile uint32_t x203 = UINT32_MAX;
	int64_t t44 = 922LL;

    t44 = ((x201|x202)&(x203+x204));

    if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x205 = 210;
	int8_t x208 = -1;
	int32_t t45 = -6969;

    t45 = ((x205|x206)&(x207+x208));

    if (t45 != 5602) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	static int32_t x212 = 26282057;
	int64_t t46 = -5658868882382LL;

    t46 = ((x209|x210)&(x211+x212));

    if (t46 != 26280778LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	static int16_t x215 = INT16_MIN;
	uint64_t x216 = 121161856790LLU;
	volatile uint64_t t47 = 230201LLU;

    t47 = ((x213|x214)&(x215+x216));

    if (t47 != 121161824022LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x217 = 2024U;
	uint16_t x218 = 276U;
	uint32_t x219 = UINT32_MAX;
	volatile int8_t x220 = 0;
	volatile uint32_t t48 = 5U;

    t48 = ((x217|x218)&(x219+x220));

    if (t48 != 2044U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x221 = 52U;
	int16_t x222 = 2795;
	int16_t x223 = -2045;
	int64_t x224 = 662026769236LL;

    t49 = ((x221|x222)&(x223+x224));

    if (t49 != 2647LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x226 = -1;
	int32_t x228 = -1;
	uint64_t t50 = 522356710591882LLU;

    t50 = ((x225|x226)&(x227+x228));

    if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = INT32_MIN;
	volatile uint32_t x236 = 89U;
	uint64_t t51 = 16599932279688191LLU;

    t51 = ((x233|x234)&(x235+x236));

    if (t51 != 322LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = -54;
	volatile uint8_t x238 = 7U;
	int16_t x239 = INT16_MIN;
	static uint8_t x240 = 91U;
	int32_t t52 = 2;

    t52 = ((x237|x238)&(x239+x240));

    if (t52 != -32693) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x241 = UINT16_MAX;
	int32_t x242 = INT32_MIN;
	static int8_t x244 = INT8_MIN;
	int32_t t53 = -125938861;

    t53 = ((x241|x242)&(x243+x244));

    if (t53 != 27289) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x245 = 104760442U;
	volatile int16_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	uint8_t x248 = 0U;
	static uint32_t t54 = 54712U;

    t54 = ((x245|x246)&(x247+x248));

    if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x250 = -1LL;
	static uint8_t x251 = UINT8_MAX;
	volatile int64_t t55 = 293342583LL;

    t55 = ((x249|x250)&(x251+x252));

    if (t55 != 926917676LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x254 = 76U;
	uint32_t x255 = 1990U;
	int16_t x256 = INT16_MIN;
	volatile uint32_t t56 = 91733228U;

    t56 = ((x253|x254)&(x255+x256));

    if (t56 != 1990U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = INT8_MIN;
	volatile int64_t t57 = -23262883LL;

    t57 = ((x257|x258)&(x259+x260));

    if (t57 != 2147483520LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = -1;
	uint64_t t58 = 245780533LLU;

    t58 = ((x261|x262)&(x263+x264));

    if (t58 != 254LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x267 = 325320LL;
	volatile int64_t x268 = -1LL;

    t59 = ((x265|x266)&(x267+x268));

    if (t59 != 199LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x269 = INT16_MAX;
	int32_t x270 = -29;
	static int8_t x271 = 0;
	int32_t t60 = INT32_MIN;

    t60 = ((x269|x270)&(x271+x272));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x274 = 123135394LLU;
	int8_t x275 = -14;
	uint8_t x276 = 52U;

    t61 = ((x273|x274)&(x275+x276));

    if (t61 != 34LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x278 = 17;
	int16_t x279 = INT16_MAX;
	uint8_t x280 = 6U;

    t62 = ((x277|x278)&(x279+x280));

    if (t62 != 32773) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x287 = -1LL;
	int64_t x288 = -1LL;
	static int64_t t63 = 268713LL;

    t63 = ((x285|x286)&(x287+x288));

    if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x290 = INT32_MIN;
	uint32_t x291 = 64992952U;
	volatile uint32_t t64 = 294051340U;

    t64 = ((x289|x290)&(x291+x292));

    if (t64 != 1031U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x293 = 1U;
	static volatile uint32_t x295 = 9671U;
	int8_t x296 = INT8_MAX;
	uint32_t t65 = 11884U;

    t65 = ((x293|x294)&(x295+x296));

    if (t65 != 70U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x297 = 787002LLU;
	int32_t x298 = INT32_MIN;
	volatile uint32_t x299 = 20U;
	int32_t x300 = INT32_MIN;
	static uint64_t t66 = 166638261169670LLU;

    t66 = ((x297|x298)&(x299+x300));

    if (t66 != 2147483664LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x305 = -80;
	int16_t x306 = -1;
	static uint8_t x308 = UINT8_MAX;

    t67 = ((x305|x306)&(x307+x308));

    if (t67 != 85) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	int8_t x316 = 34;
	int64_t t68 = -51463294954640683LL;

    t68 = ((x313|x314)&(x315+x316));

    if (t68 != 9223372036854743074LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x321 = -2139740386094LL;
	int8_t x322 = INT8_MIN;
	int8_t x324 = INT8_MAX;
	volatile int64_t t69 = -292604LL;

    t69 = ((x321|x322)&(x323+x324));

    if (t69 != -2147483566LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x325 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t70 = 1198800159685772LL;

    t70 = ((x325|x326)&(x327+x328));

    if (t70 != -9223372018815529587LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x330 = INT16_MIN;
	int8_t x331 = -1;
	volatile uint32_t x332 = 1939820509U;
	uint32_t t71 = 1577026589U;

    t71 = ((x329|x330)&(x331+x332));

    if (t71 != 1939820508U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = 116LL;
	static uint64_t x336 = 508588LLU;
	uint64_t t72 = 48040607773466LLU;

    t72 = ((x333|x334)&(x335+x336));

    if (t72 != 44LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x337 = UINT16_MAX;
	volatile int32_t t73 = 1;

    t73 = ((x337|x338)&(x339+x340));

    if (t73 != 2871) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x341 = INT16_MIN;
	uint32_t x342 = 8071294U;
	int16_t x343 = INT16_MIN;
	volatile uint32_t t74 = 108288741U;

    t74 = ((x341|x342)&(x343+x344));

    if (t74 != 4294912126U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x347 = 3U;
	uint64_t t75 = 3491842459458LLU;

    t75 = ((x345|x346)&(x347+x348));

    if (t75 != 529181612134LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;
	static volatile uint64_t t76 = 3LLU;

    t76 = ((x349|x350)&(x351+x352));

    if (t76 != 18446744071562068197LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x353 = -1;
	int32_t x354 = INT32_MAX;
	uint64_t x355 = 25390578077287LLU;
	volatile int16_t x356 = -1;
	volatile uint64_t t77 = 79156881368067145LLU;

    t77 = ((x353|x354)&(x355+x356));

    if (t77 != 25390578077286LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x357 = 30U;
	int64_t x359 = INT64_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t78 = 7661LLU;

    t78 = ((x357|x358)&(x359+x360));

    if (t78 != 32126LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x362 = INT64_MIN;
	static int32_t x364 = 944228206;

    t79 = ((x361|x362)&(x363+x364));

    if (t79 != 944228205LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x365 = 603;
	int64_t x368 = -1515181773673LL;
	static int64_t t80 = 578024964651238007LL;

    t80 = ((x365|x366)&(x367+x368));

    if (t80 != 151LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = -1;
	static uint32_t x370 = 1107422U;
	static int32_t x371 = INT32_MIN;
	volatile uint32_t t81 = 359727U;

    t81 = ((x369|x370)&(x371+x372));

    if (t81 != 2147483839U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x373 = 36;
	int32_t x374 = 2;
	volatile uint16_t x375 = 44U;
	int64_t x376 = INT64_MIN;

    t82 = ((x373|x374)&(x375+x376));

    if (t82 != 36LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x377 = 1;
	int8_t x378 = INT8_MAX;
	volatile int32_t t83 = -62331;

    t83 = ((x377|x378)&(x379+x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x381 = -1;
	int64_t x384 = 20456520LL;

    t84 = ((x381|x382)&(x383+x384));

    if (t84 != 20456647LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = -1;
	int32_t x387 = INT32_MAX;
	static uint64_t x388 = UINT64_MAX;
	uint64_t t85 = 43675566LLU;

    t85 = ((x385|x386)&(x387+x388));

    if (t85 != 2147483646LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = -559;
	volatile uint8_t x394 = UINT8_MAX;
	uint32_t x395 = 21108U;
	volatile uint32_t x396 = 889076U;
	uint32_t t86 = 3378U;

    t86 = ((x393|x394)&(x395+x396));

    if (t86 != 909672U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = -1;
	volatile uint64_t x398 = 262195LLU;
	volatile uint16_t x399 = 8U;

    t87 = ((x397|x398)&(x399+x400));

    if (t87 != 263LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x402 = -1;
	int8_t x403 = INT8_MAX;
	int64_t x404 = -431738656310LL;
	static int64_t t88 = 146LL;

    t88 = ((x401|x402)&(x403+x404));

    if (t88 != -431738656183LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x405 = 46LL;
	int32_t x406 = INT32_MIN;
	volatile uint16_t x407 = UINT16_MAX;
	static int8_t x408 = 56;

    t89 = ((x405|x406)&(x407+x408));

    if (t89 != 38LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x409 = INT32_MAX;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = INT64_MAX;
	static int8_t x412 = INT8_MIN;
	volatile int64_t t90 = 24061LL;

    t90 = ((x409|x410)&(x411+x412));

    if (t90 != 4294967167LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x413 = INT8_MIN;
	uint8_t x414 = 17U;
	static uint32_t x416 = 385373U;
	uint32_t t91 = 253387017U;

    t91 = ((x413|x414)&(x415+x416));

    if (t91 != 385425U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x417 = INT32_MIN;
	int32_t x419 = 17;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t92 = 86885443;

    t92 = ((x417|x418)&(x419+x420));

    if (t92 != -2147483631) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x422 = 3U;
	volatile int16_t x424 = -1;

    t93 = ((x421|x422)&(x423+x424));

    if (t93 != 126LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x426 = INT8_MAX;
	int32_t x428 = -1;
	volatile int64_t t94 = -4142105117191298540LL;

    t94 = ((x425|x426)&(x427+x428));

    if (t94 != 2430LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x429 = -355;
	int16_t x431 = INT16_MIN;
	int64_t x432 = 339375LL;
	static int64_t t95 = -595144846774103964LL;

    t95 = ((x429|x430)&(x431+x432));

    if (t95 != 306317LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x433 = INT8_MIN;
	int32_t x434 = 1;
	volatile int8_t x435 = INT8_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t96 = 12966314;

    t96 = ((x433|x434)&(x435+x436));

    if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x438 = 2488U;
	int32_t x439 = 54758;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t97 = 53496076204046100LLU;

    t97 = ((x437|x438)&(x439+x440));

    if (t97 != 49569LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x441 = INT8_MAX;
	uint32_t x442 = 55010U;
	volatile uint32_t x443 = 21133907U;
	uint32_t t98 = 270U;

    t98 = ((x441|x442)&(x443+x444));

    if (t98 != 21072U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x445 = UINT16_MAX;
	static int32_t x446 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t x448 = INT32_MAX;
	uint64_t t99 = 154267941336980LLU;

    t99 = ((x445|x446)&(x447+x448));

    if (t99 != 65534LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MIN;
	uint8_t x451 = 1U;
	volatile int8_t x452 = INT8_MIN;
	int32_t t100 = INT32_MIN;

    t100 = ((x449|x450)&(x451+x452));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x453 = INT32_MIN;
	uint32_t x455 = 449116U;

    t101 = ((x453|x454)&(x455+x456));

    if (t101 != 2313U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = 1639;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = INT8_MAX;
	uint32_t x460 = UINT32_MAX;
	static uint32_t t102 = 221882537U;

    t102 = ((x457|x458)&(x459+x460));

    if (t102 != 126U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x461 = INT16_MIN;
	volatile int16_t x462 = INT16_MAX;
	int16_t x463 = -7;
	volatile uint8_t x464 = 1U;
	volatile int32_t t103 = -40909;

    t103 = ((x461|x462)&(x463+x464));

    if (t103 != -6) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x465 = 3U;
	uint64_t x466 = 98LLU;
	uint8_t x467 = 19U;
	static volatile int32_t x468 = 101;

    t104 = ((x465|x466)&(x467+x468));

    if (t104 != 96LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x469 = INT16_MIN;
	int64_t x471 = INT64_MIN;
	static int64_t x472 = 32815042305LL;
	int64_t t105 = 12346101LL;

    t105 = ((x469|x470)&(x471+x472));

    if (t105 != -9223372004039733503LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x474 = 820;
	int16_t x476 = INT16_MAX;
	static volatile int32_t t106 = 24;

    t106 = ((x473|x474)&(x475+x476));

    if (t106 != 32948) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x477 = 391U;
	volatile int16_t x478 = -1;
	int32_t t107 = 126;

    t107 = ((x477|x478)&(x479+x480));

    if (t107 != -32896) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x481 = 15U;
	uint32_t x482 = 5916374U;
	int16_t x483 = INT16_MAX;
	int64_t x484 = INT64_MIN;
	int64_t t108 = -1868499606374756631LL;

    t108 = ((x481|x482)&(x483+x484));

    if (t108 != 18143LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	static int64_t x488 = -1LL;
	volatile int64_t t109 = 1LL;

    t109 = ((x485|x486)&(x487+x488));

    if (t109 != 4554836LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x493 = INT32_MIN;
	volatile int8_t x496 = -2;
	volatile int64_t t110 = -12200174646661LL;

    t110 = ((x493|x494)&(x495+x496));

    if (t110 != -3LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x497 = 2;
	static int32_t x498 = INT32_MAX;
	int16_t x499 = -1;
	int16_t x500 = 27;
	static int32_t t111 = 242575;

    t111 = ((x497|x498)&(x499+x500));

    if (t111 != 26) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x501 = 6677U;
	volatile int8_t x502 = 9;
	volatile int64_t x504 = -1LL;
	int64_t t112 = -31LL;

    t112 = ((x501|x502)&(x503+x504));

    if (t112 != 6684LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MIN;
	uint32_t x507 = UINT32_MAX;
	volatile uint32_t t113 = 480064U;

    t113 = ((x505|x506)&(x507+x508));

    if (t113 != 32768U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x513 = 1219U;
	uint16_t x514 = UINT16_MAX;
	static uint32_t x515 = 173208141U;
	uint32_t x516 = 5786U;
	volatile uint32_t t114 = 72030U;

    t114 = ((x513|x514)&(x515+x516));

    if (t114 != 2279U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x518 = -1;
	uint64_t x520 = 34720LLU;
	uint64_t t115 = 32053600641626LLU;

    t115 = ((x517|x518)&(x519+x520));

    if (t115 != 474918LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x523 = 1125;
	static int8_t x524 = INT8_MIN;
	volatile uint32_t t116 = 140175U;

    t116 = ((x521|x522)&(x523+x524));

    if (t116 != 997U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x525 = INT64_MIN;
	static int64_t x526 = INT64_MIN;

    t117 = ((x525|x526)&(x527+x528));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x529 = -1;
	uint16_t x531 = 10U;
	int8_t x532 = INT8_MIN;
	int32_t t118 = -4;

    t118 = ((x529|x530)&(x531+x532));

    if (t118 != -118) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x533 = 6579U;
	uint8_t x534 = UINT8_MAX;
	uint64_t x535 = UINT64_MAX;

    t119 = ((x533|x534)&(x535+x536));

    if (t119 != 6654LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x538 = 7320907632LL;
	volatile uint32_t x539 = 3213284U;
	static uint64_t x540 = 6901342082LLU;
	uint64_t t120 = 3212564LLU;

    t120 = ((x537|x538)&(x539+x540));

    if (t120 != 6904555366LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x545 = 21;
	volatile int32_t x546 = -55031;
	uint32_t x547 = 25714214U;
	volatile int32_t x548 = 110209;
	volatile uint32_t t121 = 219698U;

    t121 = ((x545|x546)&(x547+x548));

    if (t121 != 25823237U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x549 = INT32_MIN;
	int8_t x550 = INT8_MAX;
	int64_t x552 = -1LL;
	uint64_t t122 = 81LLU;

    t122 = ((x549|x550)&(x551+x552));

    if (t122 != 39LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x553 = -1;
	static uint16_t x554 = UINT16_MAX;
	uint32_t x556 = 11518U;

    t123 = ((x553|x554)&(x555+x556));

    if (t123 != 11645U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = 0U;
	static int8_t x558 = INT8_MIN;
	int8_t x559 = 19;
	volatile uint16_t x560 = 7042U;
	static int32_t t124 = 17;

    t124 = ((x557|x558)&(x559+x560));

    if (t124 != 7040) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x562 = -632637406;
	uint8_t x563 = 1U;
	int64_t x564 = INT64_MIN;
	int64_t t125 = -8136275458807731LL;

    t125 = ((x561|x562)&(x563+x564));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x565 = 11976854LLU;
	int8_t x566 = -1;
	int32_t x567 = -123349597;
	int16_t x568 = INT16_MIN;
	uint64_t t126 = 76098841LLU;

    t126 = ((x565|x566)&(x567+x568));

    if (t126 != 18446744073586169251LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x574 = 257LLU;
	static int32_t x575 = 621;
	int16_t x576 = -2;

    t127 = ((x573|x574)&(x575+x576));

    if (t127 != 553LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x578 = 35180965U;
	static int32_t x580 = INT32_MAX;
	static volatile uint32_t t128 = 51U;

    t128 = ((x577|x578)&(x579+x580));

    if (t128 != 35180837U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x581 = 7U;
	int16_t x583 = 57;
	static int32_t x584 = 29;
	static volatile uint32_t t129 = 43787264U;

    t129 = ((x581|x582)&(x583+x584));

    if (t129 != 6U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x585 = 3683U;
	int64_t x587 = 215LL;
	uint32_t x588 = 11U;
	int64_t t130 = -7734540438767LL;

    t130 = ((x585|x586)&(x587+x588));

    if (t130 != 98LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x606 = 60286372101485LLU;
	int8_t x607 = INT8_MIN;
	static uint32_t x608 = 1U;
	static volatile uint64_t t131 = 2768986372506375303LLU;

    t131 = ((x605|x606)&(x607+x608));

    if (t131 != 2211134721LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x610 = -1;
	static int16_t x611 = -1;
	static int32_t t132 = 816;

    t132 = ((x609|x610)&(x611+x612));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x613 = -1;
	uint64_t x614 = UINT64_MAX;
	volatile int64_t x615 = -1LL;
	uint16_t x616 = 861U;
	static volatile uint64_t t133 = 823574928139LLU;

    t133 = ((x613|x614)&(x615+x616));

    if (t133 != 860LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x617 = 16LLU;
	uint32_t x618 = 115U;
	uint8_t x619 = UINT8_MAX;
	static uint64_t t134 = 448906LLU;

    t134 = ((x617|x618)&(x619+x620));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x623 = INT16_MAX;
	uint8_t x624 = 114U;
	volatile int32_t t135 = 8540;

    t135 = ((x621|x622)&(x623+x624));

    if (t135 != 32881) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x625 = 1845U;
	volatile int16_t x626 = INT16_MIN;
	int32_t x627 = INT32_MAX;
	int8_t x628 = -3;
	int32_t t136 = -821;

    t136 = ((x625|x626)&(x627+x628));

    if (t136 != 2147452724) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x630 = UINT32_MAX;
	volatile int64_t x632 = -491767820070LL;
	int64_t t137 = 0LL;

    t137 = ((x629|x630)&(x631+x632));

    if (t137 != 2153418969LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x635 = -1;
	uint32_t x636 = 373055772U;
	uint32_t t138 = 181U;

    t138 = ((x633|x634)&(x635+x636));

    if (t138 != 373055771U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x638 = INT16_MIN;
	int32_t x639 = INT32_MAX;
	int64_t x640 = INT64_MIN;
	int64_t t139 = 7367984776571463LL;

    t139 = ((x637|x638)&(x639+x640));

    if (t139 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x642 = INT64_MIN;
	int16_t x643 = 26;
	volatile int16_t x644 = INT16_MIN;
	volatile int64_t t140 = 88981LL;

    t140 = ((x641|x642)&(x643+x644));

    if (t140 != -9223372036854743014LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x646 = -141066422;
	static int16_t x648 = 5;
	static int32_t t141 = 30250;

    t141 = ((x645|x646)&(x647+x648));

    if (t141 != -141066496) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x650 = INT16_MIN;
	uint8_t x651 = 3U;
	int32_t x652 = 43;
	volatile int32_t t142 = 683781478;

    t142 = ((x649|x650)&(x651+x652));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x657 = INT16_MAX;
	int16_t x658 = 280;
	int16_t x659 = -3;
	int64_t t143 = 37572009422LL;

    t143 = ((x657|x658)&(x659+x660));

    if (t143 != 27806LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x661 = -1LL;
	volatile int32_t x662 = 30059;
	static uint16_t x663 = 1U;
	int16_t x664 = INT16_MIN;
	int64_t t144 = -54277LL;

    t144 = ((x661|x662)&(x663+x664));

    if (t144 != -32767LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x665 = INT32_MIN;
	volatile int16_t x666 = INT16_MIN;
	volatile int32_t x667 = INT32_MIN;
	uint64_t x668 = 2543703123359817LLU;
	uint64_t t145 = 3993179669637LLU;

    t145 = ((x665|x666)&(x667+x668));

    if (t145 != 2543700975845376LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x669 = INT16_MIN;
	static uint64_t x670 = 1956638170LLU;
	volatile int16_t x671 = INT16_MIN;
	uint64_t x672 = UINT64_MAX;
	uint64_t t146 = 43010507812LLU;

    t146 = ((x669|x670)&(x671+x672));

    if (t146 != 18446744073709514202LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x674 = INT16_MAX;
	uint64_t x675 = UINT64_MAX;
	static int64_t x676 = INT64_MAX;
	uint64_t t147 = 4563143LLU;

    t147 = ((x673|x674)&(x675+x676));

    if (t147 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x678 = INT32_MIN;
	volatile int64_t t148 = 29LL;

    t148 = ((x677|x678)&(x679+x680));

    if (t148 != 2147483646LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x681 = INT8_MAX;
	int32_t x682 = INT32_MIN;
	uint32_t x684 = 1610U;
	uint32_t t149 = 50821227U;

    t149 = ((x681|x682)&(x683+x684));

    if (t149 != 2147483722U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x687 = -1;
	uint8_t x688 = UINT8_MAX;
	static volatile int64_t t150 = 188491139LL;

    t150 = ((x685|x686)&(x687+x688));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x689 = 11433273LLU;
	int16_t x690 = INT16_MIN;
	static int16_t x691 = INT16_MIN;
	uint8_t x692 = 56U;

    t151 = ((x689|x690)&(x691+x692));

    if (t151 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x693 = INT32_MIN;
	uint8_t x694 = UINT8_MAX;
	uint32_t x695 = 386578281U;
	volatile int8_t x696 = -1;
	uint32_t t152 = 0U;

    t152 = ((x693|x694)&(x695+x696));

    if (t152 != 104U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x697 = INT8_MIN;
	volatile int32_t x698 = INT32_MAX;
	int8_t x699 = INT8_MIN;
	volatile uint64_t t153 = 226911329LLU;

    t153 = ((x697|x698)&(x699+x700));

    if (t153 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x701 = 503213LL;
	volatile int32_t x702 = INT32_MIN;
	volatile int16_t x704 = -13091;
	int64_t t154 = 6362774452682LL;

    t154 = ((x701|x702)&(x703+x704));

    if (t154 != -2146992084LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x705 = INT32_MAX;
	static uint8_t x706 = 33U;
	int16_t x707 = INT16_MIN;
	uint16_t x708 = 13U;
	static int32_t t155 = 339884;

    t155 = ((x705|x706)&(x707+x708));

    if (t155 != 2147450893) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x709 = 2;
	uint8_t x710 = 1U;
	volatile uint16_t x712 = 694U;

    t156 = ((x709|x710)&(x711+x712));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x717 = -1;
	int32_t x718 = INT32_MIN;
	volatile uint8_t x719 = UINT8_MAX;
	int8_t x720 = INT8_MIN;
	static volatile int32_t t157 = -323;

    t157 = ((x717|x718)&(x719+x720));

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x721 = INT8_MIN;
	uint8_t x722 = UINT8_MAX;
	int8_t x723 = -1;
	int64_t x724 = -1LL;
	volatile int64_t t158 = -1LL;

    t158 = ((x721|x722)&(x723+x724));

    if (t158 != -2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x725 = 103U;
	static volatile int64_t x726 = -451176LL;
	uint8_t x728 = 1U;

    t159 = ((x725|x726)&(x727+x728));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x729 = 1969U;
	static volatile uint32_t x730 = 5631U;
	int64_t x731 = INT64_MAX;
	int16_t x732 = -1;
	volatile int64_t t160 = -26848492321873LL;

    t160 = ((x729|x730)&(x731+x732));

    if (t160 != 6142LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x733 = UINT64_MAX;
	uint16_t x734 = 13571U;
	uint8_t x735 = 3U;
	static int32_t x736 = -1;
	volatile uint64_t t161 = 166LLU;

    t161 = ((x733|x734)&(x735+x736));

    if (t161 != 2LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x741 = 168U;
	int64_t x742 = 4372214296630370LL;
	uint8_t x743 = UINT8_MAX;
	static uint32_t x744 = UINT32_MAX;
	volatile int64_t t162 = 1127025LL;

    t162 = ((x741|x742)&(x743+x744));

    if (t162 != 234LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x745 = 41U;
	static volatile uint64_t x746 = UINT64_MAX;
	uint8_t x747 = UINT8_MAX;
	static volatile int32_t x748 = INT32_MIN;
	uint64_t t163 = 1053122998875534LLU;

    t163 = ((x745|x746)&(x747+x748));

    if (t163 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x749 = -1;
	int64_t x751 = 6821751LL;
	int64_t x752 = -1LL;
	volatile int64_t t164 = 62449LL;

    t164 = ((x749|x750)&(x751+x752));

    if (t164 != 6821750LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x754 = -1;
	int8_t x756 = -3;
	volatile int64_t t165 = -2723758LL;

    t165 = ((x753|x754)&(x755+x756));

    if (t165 != -4LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x757 = 226;
	static uint8_t x760 = UINT8_MAX;
	int32_t t166 = -38575215;

    t166 = ((x757|x758)&(x759+x760));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x761 = 549885571354958LL;
	static int64_t x762 = INT64_MAX;
	uint8_t x763 = UINT8_MAX;
	int8_t x764 = INT8_MAX;
	static volatile int64_t t167 = 39230LL;

    t167 = ((x761|x762)&(x763+x764));

    if (t167 != 382LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x765 = INT8_MIN;
	int32_t x766 = INT32_MAX;
	int64_t x768 = INT64_MAX;
	volatile int64_t t168 = -214LL;

    t168 = ((x765|x766)&(x767+x768));

    if (t168 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x769 = 2U;
	int64_t x770 = -3993LL;
	volatile int16_t x771 = -3;
	int8_t x772 = -1;

    t169 = ((x769|x770)&(x771+x772));

    if (t169 != -3996LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x773 = -1;
	int8_t x774 = -1;
	static uint8_t x775 = UINT8_MAX;
	volatile int32_t t170 = 65446457;

    t170 = ((x773|x774)&(x775+x776));

    if (t170 != 282) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x777 = UINT16_MAX;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = INT16_MAX;
	uint32_t t171 = 152517U;

    t171 = ((x777|x778)&(x779+x780));

    if (t171 != 32766U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x781 = INT64_MIN;
	uint8_t x782 = UINT8_MAX;
	static volatile int64_t x783 = -59590LL;
	int8_t x784 = INT8_MIN;
	int64_t t172 = -3455101052280641010LL;

    t172 = ((x781|x782)&(x783+x784));

    if (t172 != -9223372036854775622LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x785 = INT8_MIN;
	volatile int16_t x787 = -1;
	int8_t x788 = 27;
	int32_t t173 = 56107749;

    t173 = ((x785|x786)&(x787+x788));

    if (t173 != 26) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x793 = -1;
	int32_t x794 = INT32_MIN;
	int16_t x795 = INT16_MIN;
	int16_t x796 = -12;
	static volatile int32_t t174 = 0;

    t174 = ((x793|x794)&(x795+x796));

    if (t174 != -32780) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x797 = 125U;
	volatile uint16_t x798 = UINT16_MAX;
	volatile int32_t x799 = -1;
	uint16_t x800 = 7512U;
	int32_t t175 = 38936;

    t175 = ((x797|x798)&(x799+x800));

    if (t175 != 7511) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x802 = -1;
	uint8_t x803 = UINT8_MAX;
	int16_t x804 = INT16_MIN;
	static int32_t t176 = 3;

    t176 = ((x801|x802)&(x803+x804));

    if (t176 != -32513) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x805 = 50;
	uint32_t x806 = 742U;
	static volatile int64_t x808 = 1015LL;
	volatile int64_t t177 = -22565147945574510LL;

    t177 = ((x805|x806)&(x807+x808));

    if (t177 != 64LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x809 = -4632;
	static int32_t x811 = 53871;
	int32_t x812 = INT32_MIN;
	static int64_t t178 = 2609459683793LL;

    t178 = ((x809|x810)&(x811+x812));

    if (t178 != -2147430293LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x817 = UINT32_MAX;
	int64_t x818 = -804830035455189797LL;
	int64_t x819 = -3962643330194259LL;
	uint32_t x820 = 1135326944U;
	int64_t t179 = 157984460461256145LL;

    t179 = ((x817|x818)&(x819+x820));

    if (t179 != -805955936847242355LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x822 = INT16_MIN;
	int32_t x823 = -1;
	volatile uint8_t x824 = 12U;
	volatile uint32_t t180 = 9045640U;

    t180 = ((x821|x822)&(x823+x824));

    if (t180 != 3U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x830 = INT32_MAX;
	volatile uint8_t x831 = 1U;
	volatile int16_t x832 = INT16_MAX;
	volatile uint32_t t181 = 25073U;

    t181 = ((x829|x830)&(x831+x832));

    if (t181 != 32768U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x834 = INT8_MIN;
	int32_t x835 = INT32_MIN;
	uint8_t x836 = 0U;
	static volatile int64_t t182 = -1265924888564067735LL;

    t182 = ((x833|x834)&(x835+x836));

    if (t182 != -2147483648LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x839 = 1547245;
	int8_t x840 = INT8_MIN;
	uint64_t t183 = 0LLU;

    t183 = ((x837|x838)&(x839+x840));

    if (t183 != 1544256LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x841 = 5765300821LL;
	static int16_t x842 = INT16_MAX;
	volatile int64_t x843 = -1LL;
	static int16_t x844 = INT16_MAX;
	int64_t t184 = -2442058LL;

    t184 = ((x841|x842)&(x843+x844));

    if (t184 != 32766LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x845 = 219U;
	int64_t x846 = 13902122696LL;
	int64_t x847 = -1LL;
	volatile int32_t x848 = INT32_MIN;
	static volatile int64_t t185 = 50947890194946455LL;

    t185 = ((x845|x846)&(x847+x848));

    if (t185 != 13902122715LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x849 = UINT32_MAX;
	int32_t x850 = INT32_MIN;
	int32_t x851 = INT32_MIN;
	uint64_t x852 = 6481599219742554294LLU;
	uint64_t t186 = 1408097LLU;

    t186 = ((x849|x850)&(x851+x852));

    if (t186 != 3174316214LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x857 = 1558;
	static uint8_t x859 = UINT8_MAX;
	int32_t x860 = INT32_MIN;
	volatile int32_t t187 = -110215199;

    t187 = ((x857|x858)&(x859+x860));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x861 = -1;
	uint64_t x862 = 1887LLU;
	uint32_t x863 = 430U;

    t188 = ((x861|x862)&(x863+x864));

    if (t188 != 429LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x869 = 4282U;
	static int32_t x870 = -1;
	int8_t x871 = 38;
	volatile int64_t x872 = -160LL;
	int64_t t189 = 88725LL;

    t189 = ((x869|x870)&(x871+x872));

    if (t189 != 4294967174LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x873 = 1759U;
	uint64_t x874 = UINT64_MAX;
	uint64_t x875 = UINT64_MAX;
	uint64_t t190 = 2930LLU;

    t190 = ((x873|x874)&(x875+x876));

    if (t190 != 18446744073593947056LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x877 = 4U;
	static volatile int8_t x878 = -1;
	volatile int8_t x879 = INT8_MIN;
	uint16_t x880 = 52U;
	int32_t t191 = 4530;

    t191 = ((x877|x878)&(x879+x880));

    if (t191 != -76) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x881 = 934U;
	volatile int64_t x882 = INT64_MIN;
	int32_t x883 = -1;

    t192 = ((x881|x882)&(x883+x884));

    if (t192 != 4LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x885 = INT64_MIN;
	int16_t x887 = 0;
	int64_t x888 = INT64_MIN;

    t193 = ((x885|x886)&(x887+x888));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x889 = -11069;
	int32_t x890 = INT32_MIN;
	int64_t x891 = -1LL;
	static int16_t x892 = -1;
	static volatile int64_t t194 = 3862LL;

    t194 = ((x889|x890)&(x891+x892));

    if (t194 != -11070LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x893 = 3209LLU;
	static int16_t x894 = INT16_MAX;
	int8_t x896 = -60;
	uint64_t t195 = 846LLU;

    t195 = ((x893|x894)&(x895+x896));

    if (t195 != 32715LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x897 = 1U;
	int8_t x898 = INT8_MAX;
	static volatile uint32_t x899 = UINT32_MAX;
	int8_t x900 = INT8_MIN;
	volatile uint32_t t196 = 21U;

    t196 = ((x897|x898)&(x899+x900));

    if (t196 != 127U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x901 = -15;
	int8_t x902 = 0;
	static uint8_t x903 = UINT8_MAX;
	int8_t x904 = INT8_MAX;
	int32_t t197 = 1;

    t197 = ((x901|x902)&(x903+x904));

    if (t197 != 368) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x905 = UINT8_MAX;
	int16_t x908 = INT16_MIN;
	int64_t t198 = 12LL;

    t198 = ((x905|x906)&(x907+x908));

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x909 = -1;
	static int64_t x910 = -1LL;
	int64_t x911 = -31LL;
	uint32_t x912 = 3186427U;

    t199 = ((x909|x910)&(x911+x912));

    if (t199 != 3186396LL) { NG(); } else { ; }
	
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

