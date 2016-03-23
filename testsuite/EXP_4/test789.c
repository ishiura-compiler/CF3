
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

uint32_t x9 = 10932595U;
int8_t x10 = 0;
int64_t x11 = 528748191773LL;
int32_t t3 = 239761004;
int32_t x20 = INT32_MIN;
volatile uint8_t x23 = UINT8_MAX;
int16_t x24 = 336;
int16_t x25 = -178;
uint32_t x29 = UINT32_MAX;
int64_t x30 = INT64_MIN;
int64_t t7 = 11110593478360LL;
static int16_t x34 = INT16_MAX;
int64_t x35 = -1LL;
volatile uint64_t x40 = 9319037550317LLU;
uint64_t t9 = 3LLU;
int8_t x41 = 42;
int8_t x46 = INT8_MAX;
static volatile int32_t x63 = INT32_MIN;
static volatile uint16_t x64 = 51U;
int16_t x68 = -1;
volatile int8_t x72 = -1;
int8_t x77 = 9;
int32_t x81 = 4;
int8_t x84 = 1;
int16_t x86 = INT16_MIN;
static int64_t x90 = INT64_MIN;
int16_t x93 = -16;
static uint8_t x96 = 1U;
int16_t x98 = 1342;
volatile int8_t x99 = INT8_MAX;
static uint16_t x101 = 0U;
volatile int16_t x103 = 103;
int16_t x105 = INT16_MIN;
int8_t x107 = -1;
int64_t x121 = INT64_MAX;
int64_t t30 = -3606806983005621LL;
volatile uint64_t x132 = UINT64_MAX;
int64_t x133 = INT64_MAX;
volatile int64_t t33 = 11465LL;
static int16_t x137 = -1;
static volatile int64_t x144 = 13LL;
int16_t x148 = INT16_MAX;
uint8_t x153 = 0U;
int64_t t38 = -74738558338LL;
static uint64_t x166 = 223LLU;
int64_t x175 = -1LL;
static volatile int32_t x176 = INT32_MIN;
int8_t x182 = INT8_MIN;
int64_t x185 = -5572759058484LL;
int64_t x203 = -1LL;
uint64_t t51 = 275964352065073394LLU;
volatile int64_t t54 = -37045LL;
int8_t x223 = INT8_MAX;
int8_t x225 = 1;
int32_t x226 = INT32_MAX;
static int64_t x228 = -1LL;
uint16_t x229 = 42U;
static volatile int16_t x232 = -1;
uint16_t x236 = UINT16_MAX;
int8_t x237 = -1;
int64_t t59 = 30352585283641LL;
uint32_t x246 = 1844130U;
static uint16_t x251 = 0U;
volatile int16_t x252 = -1;
int16_t x253 = -1;
int32_t x255 = -1;
static volatile int64_t x260 = INT64_MIN;
uint32_t x268 = 69U;
uint16_t x270 = 27U;
int64_t x274 = -2883042512307138182LL;
uint64_t x276 = 999355671LLU;
volatile int64_t t70 = 55880755LL;
volatile int32_t x294 = 167255;
uint64_t x298 = UINT64_MAX;
int32_t x300 = -1;
static int8_t x302 = 3;
int32_t x303 = 1;
uint8_t x312 = 121U;
int32_t x314 = INT32_MIN;
int32_t x315 = INT32_MAX;
static uint64_t x321 = UINT64_MAX;
uint64_t x322 = 65LLU;
volatile uint64_t t79 = 35227568916655439LLU;
static int16_t x325 = INT16_MIN;
static uint8_t x327 = UINT8_MAX;
int16_t x331 = INT16_MAX;
int32_t x338 = 33010562;
int32_t x341 = 6802105;
int32_t x347 = -1;
int64_t x349 = INT64_MIN;
uint8_t x350 = 3U;
int32_t x352 = INT32_MAX;
int8_t x357 = 1;
uint32_t x360 = 14357U;
volatile uint8_t x365 = 73U;
int16_t x366 = 3455;
uint32_t x367 = 824851U;
int32_t x372 = 26029484;
uint8_t x373 = 18U;
static int8_t x382 = -1;
int64_t x383 = -6291LL;
uint32_t x407 = 800U;
int64_t t101 = 349303LL;
int32_t x432 = 1787977;
static uint32_t t102 = 215U;
static uint32_t x433 = UINT32_MAX;
int32_t x436 = -1;
int16_t x438 = 58;
int64_t x440 = -1LL;
volatile int64_t t104 = -86LL;
uint32_t x447 = UINT32_MAX;
static int64_t x448 = INT64_MIN;
int8_t x452 = 9;
static int16_t x454 = INT16_MIN;
int32_t x456 = -1;
int64_t x461 = -2696832LL;
int32_t x462 = -2977083;
volatile int8_t x466 = -1;
int64_t x477 = 2019600819929430LL;
int64_t x478 = -1LL;
uint64_t x479 = 82767LLU;
uint8_t x482 = UINT8_MAX;
int16_t x494 = -1;
uint64_t t117 = 4224493640LLU;
uint8_t x506 = 3U;
volatile int32_t t121 = -7005;
uint8_t x515 = 1U;
volatile int32_t t122 = 0;
uint32_t x517 = 869190454U;
uint32_t x518 = 624914U;
uint16_t x520 = UINT16_MAX;
uint16_t x521 = 26U;
volatile uint32_t t124 = 6U;
static int16_t x528 = -1811;
uint32_t x533 = UINT32_MAX;
volatile int16_t x534 = INT16_MAX;
uint64_t x538 = 71082LLU;
volatile uint64_t x552 = 15236LLU;
uint64_t x559 = UINT64_MAX;
int32_t x560 = INT32_MIN;
int64_t x562 = -1LL;
volatile int64_t t134 = 106LL;
int16_t x569 = -1;
int32_t x574 = -2;
int32_t x575 = INT32_MIN;
static volatile int16_t x576 = INT16_MIN;
int64_t x577 = INT64_MIN;
int32_t x581 = 923836;
static int32_t x584 = -1;
int16_t x589 = -8074;
int64_t x603 = 97265788889306LL;
volatile uint32_t t145 = 0U;
int16_t x610 = -21;
static int64_t x611 = INT64_MAX;
volatile int64_t t146 = -34488046939369LL;
static int16_t x629 = -6;
int32_t x636 = INT32_MAX;
static volatile int64_t x644 = INT64_MAX;
int16_t x647 = -1;
uint8_t x658 = 0U;
int64_t t158 = -3957550367LL;
int32_t x668 = INT32_MIN;
uint16_t x673 = 17U;
int64_t x676 = 1590413LL;
uint8_t x682 = 110U;
static volatile int16_t x683 = -14;
int8_t x684 = -1;
uint16_t x688 = 8214U;
uint64_t t164 = 239LLU;
int32_t x699 = -16;
int8_t x705 = INT8_MIN;
int8_t x711 = -1;
volatile uint16_t x719 = 13U;
int16_t x728 = 59;
int16_t x735 = INT16_MIN;
volatile uint32_t t174 = 813U;
int8_t x737 = 6;
int16_t x741 = -1;
volatile uint16_t x744 = 12U;
uint32_t x752 = 55517421U;
volatile uint16_t x757 = 546U;
int32_t x758 = -1;
static volatile int32_t x759 = INT32_MIN;
static volatile uint8_t x765 = 1U;
uint16_t x766 = 17006U;
int32_t x768 = 58606;
volatile int16_t x770 = INT16_MIN;
int32_t t182 = 11217629;
volatile int8_t x774 = -1;
int8_t x776 = 1;
static int8_t x787 = INT8_MIN;
int64_t x788 = -33564675102542LL;
static int32_t x793 = -1;
uint32_t x794 = 36674U;
uint32_t t188 = 48720U;
static int32_t x805 = -1438;
int8_t x808 = INT8_MIN;
volatile uint32_t x809 = 1593673757U;
int64_t x811 = INT64_MIN;
uint8_t x814 = 9U;
int16_t x815 = INT16_MIN;
int16_t x819 = INT16_MIN;
static int32_t x822 = INT32_MIN;
static uint32_t x827 = UINT32_MAX;
int32_t x831 = -5945158;
int16_t x841 = INT16_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	volatile int8_t x3 = INT8_MIN;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 31139307;

    t0 = (x1%(x2+(x3%x4)));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 1627;
	uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 67U;
	int64_t x8 = -1LL;
	int64_t t1 = 6401403013LL;

    t1 = (x5%(x6+(x7%x8)));

    if (t1 != 1627LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x12 = 2973681869229705LL;
	static int64_t t2 = 97661387266LL;

    t2 = (x9%(x10+(x11%x12)));

    if (t2 != 10932595LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -10;
	static uint16_t x14 = 1321U;
	int8_t x15 = -1;
	int32_t x16 = -1;

    t3 = (x13%(x14+(x15%x16)));

    if (t3 != -10) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int32_t x18 = -1;
	int16_t x19 = INT16_MIN;
	int32_t t4 = -8;

    t4 = (x17%(x18+(x19%x20)));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -4630096;
	int64_t x22 = INT64_MIN;
	int64_t t5 = 528929990LL;

    t5 = (x21%(x22+(x23%x24)));

    if (t5 != -4630096LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x26 = INT64_MIN;
	static volatile int64_t x27 = INT64_MAX;
	volatile int16_t x28 = 8;
	int64_t t6 = 49509LL;

    t6 = (x25%(x26+(x27%x28)));

    if (t6 != -178LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x31 = UINT16_MAX;
	volatile int16_t x32 = INT16_MIN;

    t7 = (x29%(x30+(x31%x32)));

    if (t7 != 4294967295LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -6050188LL;
	int16_t x36 = INT16_MIN;
	volatile int64_t t8 = -55931221037542LL;

    t8 = (x33%(x34+(x35%x36)));

    if (t8 != -21244LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 28U;
	uint32_t x38 = 238787074U;
	int16_t x39 = -66;

    t9 = (x37%(x38+(x39%x40)));

    if (t9 != 28LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x42 = INT32_MIN;
	int8_t x43 = -1;
	volatile uint32_t x44 = UINT32_MAX;
	volatile uint32_t t10 = 173516392U;

    t10 = (x41%(x42+(x43%x44)));

    if (t10 != 42U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 31219LLU;
	uint64_t x47 = 5225873477563355233LLU;
	uint16_t x48 = 3U;
	volatile uint64_t t11 = 4249867428859319260LLU;

    t11 = (x45%(x46+(x47%x48)));

    if (t11 != 115LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	int64_t x50 = INT64_MIN;
	int8_t x51 = 0;
	static int32_t x52 = INT32_MIN;
	volatile int64_t t12 = -32366LL;

    t12 = (x49%(x50+(x51%x52)));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = 482813825306LL;
	uint32_t x56 = UINT32_MAX;
	uint64_t t13 = 8079LLU;

    t13 = (x53%(x54+(x55%x56)));

    if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 44U;
	static volatile int8_t x58 = INT8_MAX;
	volatile int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t14 = -383LL;

    t14 = (x57%(x58+(x59%x60)));

    if (t14 != 44LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = INT32_MIN;
	uint32_t x62 = 51772793U;
	uint32_t t15 = 224283U;

    t15 = (x61%(x62+(x63%x64)));

    if (t15 != 24800201U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 2668355U;
	static uint8_t x66 = UINT8_MAX;
	int64_t x67 = INT64_MIN;
	static int64_t t16 = 16583948244LL;

    t16 = (x65%(x66+(x67%x68)));

    if (t16 != 35LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	int64_t x70 = 51986906101707LL;
	uint16_t x71 = UINT16_MAX;
	static int64_t t17 = 352510379LL;

    t17 = (x69%(x70+(x71%x72)));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = UINT32_MAX;
	uint64_t x76 = 160191858228701LLU;
	volatile uint64_t t18 = 29508LLU;

    t18 = (x73%(x74+(x75%x76)));

    if (t18 != 2147500160LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = 61;
	int32_t x79 = -3;
	static int32_t x80 = INT32_MAX;
	volatile int32_t t19 = -59142;

    t19 = (x77%(x78+(x79%x80)));

    if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x82 = UINT16_MAX;
	static uint16_t x83 = 11935U;
	int32_t t20 = 14856718;

    t20 = (x81%(x82+(x83%x84)));

    if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = 0;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = 868409326826480LLU;
	uint64_t t21 = 514314567564584686LLU;

    t21 = (x85%(x86+(x87%x88)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	uint32_t x91 = UINT32_MAX;
	uint64_t x92 = 14411LLU;
	uint64_t t22 = 10647LLU;

    t22 = (x89%(x90+(x91%x92)));

    if (t22 != 9223372036854762075LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -172202961LL;
	int32_t x95 = INT32_MIN;
	static volatile int64_t t23 = 187498081LL;

    t23 = (x93%(x94+(x95%x96)));

    if (t23 != -16LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = 28;
	volatile int16_t x100 = -1;
	int32_t t24 = 6982;

    t24 = (x97%(x98+(x99%x100)));

    if (t24 != 28) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = INT16_MIN;
	int32_t x104 = 32237;
	static int32_t t25 = -3376;

    t25 = (x101%(x102+(x103%x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MIN;
	uint8_t x108 = 1U;
	volatile int64_t t26 = -2LL;

    t26 = (x105%(x106+(x107%x108)));

    if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 465621190LL;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MAX;
	static int64_t t27 = -125159181770LL;

    t27 = (x109%(x110+(x111%x112)));

    if (t27 != 30LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 8981426U;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = 1701LL;
	uint64_t x116 = 2087858144LLU;
	static uint64_t t28 = 2837673591098719264LLU;

    t28 = (x113%(x114+(x115%x116)));

    if (t28 != 39038LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 148883U;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = 342920013651LL;
	int64_t t29 = -20176220125533964LL;

    t29 = (x117%(x118+(x119%x120)));

    if (t29 != 148883LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	int64_t x124 = -1LL;

    t30 = (x121%(x122+(x123%x124)));

    if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 0U;
	uint16_t x126 = 1504U;
	int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 36990;

    t31 = (x125%(x126+(x127%x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	volatile int32_t x131 = 1091059;
	volatile uint64_t t32 = 1999900878544159LLU;

    t32 = (x129%(x130+(x131%x132)));

    if (t32 != 388688959LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = 5;
	int32_t x135 = 58;
	int8_t x136 = INT8_MIN;

    t33 = (x133%(x134+(x135%x136)));

    if (t33 != 7LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	int64_t x139 = 4303469LL;
	int32_t x140 = INT32_MIN;
	int64_t t34 = -54LL;

    t34 = (x137%(x138+(x139%x140)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	int32_t x142 = 786640327;
	int32_t x143 = 1841;
	volatile int64_t t35 = 28829622064LL;

    t35 = (x141%(x142+(x143%x144)));

    if (t35 != 361765620LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MAX;
	int64_t x146 = 122885872592LL;
	int16_t x147 = INT16_MIN;
	static int64_t t36 = 1LL;

    t36 = (x145%(x146+(x147%x148)));

    if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MAX;
	int32_t x151 = -1;
	int32_t x152 = -12542196;
	int64_t t37 = -1LL;

    t37 = (x149%(x150+(x151%x152)));

    if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;

    t38 = (x153%(x154+(x155%x156)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	int64_t x158 = 8599LL;
	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = INT16_MAX;
	volatile uint64_t t39 = 3LLU;

    t39 = (x157%(x158+(x159%x160)));

    if (t39 != 8323LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = 52;
	uint32_t x162 = 110U;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t40 = 1558264U;

    t40 = (x161%(x162+(x163%x164)));

    if (t40 != 52U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	uint64_t x167 = 217LLU;
	int32_t x168 = -1;
	uint64_t t41 = 4839281LLU;

    t41 = (x165%(x166+(x167%x168)));

    if (t41 != 328LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -3983293LL;
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	static uint32_t x172 = UINT32_MAX;
	volatile int64_t t42 = -12065679LL;

    t42 = (x169%(x170+(x171%x172)));

    if (t42 != -3983293LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	int64_t t43 = 2LL;

    t43 = (x173%(x174+(x175%x176)));

    if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1277450087456LL;
	int64_t x178 = INT64_MIN;
	uint8_t x179 = 12U;
	static int64_t x180 = -1LL;
	int64_t t44 = -14LL;

    t44 = (x177%(x178+(x179%x180)));

    if (t44 != -1277450087456LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 327U;
	int16_t x183 = -1;
	int16_t x184 = 822;
	uint32_t t45 = 64850U;

    t45 = (x181%(x182+(x183%x184)));

    if (t45 != 327U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x186 = UINT64_MAX;
	static uint32_t x187 = 198U;
	static uint32_t x188 = UINT32_MAX;
	volatile uint64_t t46 = 16LLU;

    t46 = (x185%(x186+(x187%x188)));

    if (t46 != 33LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	int8_t x190 = 0;
	volatile int64_t x191 = -1LL;
	int16_t x192 = -12686;
	volatile int64_t t47 = 3376207698845LL;

    t47 = (x189%(x190+(x191%x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MAX;
	uint64_t x196 = 175467186LLU;
	uint64_t t48 = 69LLU;

    t48 = (x193%(x194+(x195%x196)));

    if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x197 = UINT8_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	static uint16_t x200 = 16534U;
	volatile int32_t t49 = 856923196;

    t49 = (x197%(x198+(x199%x200)));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static int8_t x202 = INT8_MIN;
	static volatile uint16_t x204 = UINT16_MAX;
	int64_t t50 = -84788509722LL;

    t50 = (x201%(x202+(x203%x204)));

    if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	static int8_t x206 = -1;
	uint64_t x207 = 4069347345505132551LLU;
	uint16_t x208 = UINT16_MAX;

    t51 = (x205%(x206+(x207%x208)));

    if (t51 != 14347LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	int32_t x210 = -3307137;
	int64_t x211 = INT64_MAX;
	static volatile uint32_t x212 = 1097857885U;
	static volatile int64_t t52 = 1675552837841399727LL;

    t52 = (x209%(x210+(x211%x212)));

    if (t52 != 65535LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x213 = 30LLU;
	int64_t x214 = INT64_MAX;
	uint64_t x215 = UINT64_MAX;
	uint16_t x216 = 1U;
	volatile uint64_t t53 = 575512LLU;

    t53 = (x213%(x214+(x215%x216)));

    if (t53 != 30LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 208LL;
	int16_t x218 = INT16_MIN;
	uint8_t x219 = 6U;
	int32_t x220 = 3826;

    t54 = (x217%(x218+(x219%x220)));

    if (t54 != 208LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 7U;
	volatile uint8_t x222 = 9U;
	int32_t x224 = INT32_MAX;
	int32_t t55 = 0;

    t55 = (x221%(x222+(x223%x224)));

    if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x227 = INT8_MIN;
	volatile int64_t t56 = -165LL;

    t56 = (x225%(x226+(x227%x228)));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = -182LL;
	static uint8_t x231 = 0U;
	int64_t t57 = -91LL;

    t57 = (x229%(x230+(x231%x232)));

    if (t57 != 42LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -30;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = INT16_MIN;
	uint32_t t58 = 2743U;

    t58 = (x233%(x234+(x235%x236)));

    if (t58 != 32739U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x238 = INT64_MAX;
	int8_t x239 = -1;
	int16_t x240 = INT16_MAX;

    t59 = (x237%(x238+(x239%x240)));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 52081;

    t60 = (x241%(x242+(x243%x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	uint16_t x247 = 1U;
	int32_t x248 = 4202141;
	static volatile int64_t t61 = 1609LL;

    t61 = (x245%(x246+(x247%x248)));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = 765607993874062545LLU;
	static uint32_t x250 = UINT32_MAX;
	uint64_t t62 = 153LLU;

    t62 = (x249%(x250+(x251%x252)));

    if (t62 != 179312955LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MAX;
	static volatile uint32_t x256 = 1334U;
	uint32_t t63 = 1008U;

    t63 = (x253%(x254+(x255%x256)));

    if (t63 != 839U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x257 = 1U;
	int8_t x258 = INT8_MAX;
	static uint32_t x259 = UINT32_MAX;
	int64_t t64 = 0LL;

    t64 = (x257%(x258+(x259%x260)));

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	int8_t x262 = INT8_MAX;
	uint64_t x263 = 4LLU;
	volatile uint16_t x264 = UINT16_MAX;
	uint64_t t65 = 36918574LLU;

    t65 = (x261%(x262+(x263%x264)));

    if (t65 != 64LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	volatile int32_t x266 = INT32_MAX;
	int8_t x267 = 3;
	uint32_t t66 = 17435594U;

    t66 = (x265%(x266+(x267%x268)));

    if (t66 != 2147483645U) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x269 = -1;
	int64_t x271 = 3298172911950LL;
	int16_t x272 = INT16_MAX;
	static volatile int64_t t67 = -56LL;

    t67 = (x269%(x270+(x271%x272)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = INT16_MIN;
	static int8_t x275 = -1;
	uint64_t t68 = 1LLU;

    t68 = (x273%(x274+(x275%x276)));

    if (t68 != 2883042512150017338LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 5213485;
	static volatile int16_t x278 = INT16_MIN;
	int32_t x279 = 88346;
	int16_t x280 = INT16_MAX;
	static int32_t t69 = -12442938;

    t69 = (x277%(x278+(x279%x280)));

    if (t69 != 6497) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MAX;
	int8_t x283 = -1;
	static uint32_t x284 = 14U;

    t70 = (x281%(x282+(x283%x284)));

    if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x289 = 13U;
	int32_t x290 = INT32_MAX;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t71 = -11928606071404147LL;

    t71 = (x289%(x290+(x291%x292)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = 1U;
	volatile int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MAX;
	int64_t t72 = 37408556949LL;

    t72 = (x293%(x294+(x295%x296)));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x297 = INT16_MAX;
	static int16_t x299 = INT16_MIN;
	volatile uint64_t t73 = 12923214296320615LLU;

    t73 = (x297%(x298+(x299%x300)));

    if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x301 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t74 = -933123;

    t74 = (x301%(x302+(x303%x304)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MAX;
	uint8_t x306 = UINT8_MAX;
	static int8_t x307 = -1;
	int8_t x308 = INT8_MIN;
	int64_t t75 = 118LL;

    t75 = (x305%(x306+(x307%x308)));

    if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = 3;
	static int32_t x310 = INT32_MAX;
	int32_t x311 = INT32_MIN;
	volatile int32_t t76 = 77;

    t76 = (x309%(x310+(x311%x312)));

    if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x313 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t77 = 223892;

    t77 = (x313%(x314+(x315%x316)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = 23015U;
	int16_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 118U;
	uint32_t t78 = 517U;

    t78 = (x317%(x318+(x319%x320)));

    if (t78 != 11U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x323 = INT64_MAX;
	uint32_t x324 = 45U;

    t79 = (x321%(x322+(x323%x324)));

    if (t79 != 15LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x326 = 3964LLU;
	int64_t x328 = -24895948071086LL;
	uint64_t t80 = 328037LLU;

    t80 = (x325%(x326+(x327%x328)));

    if (t80 != 1308LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x329 = 2255U;
	volatile int64_t x330 = INT64_MIN;
	volatile int16_t x332 = 3;
	static int64_t t81 = -7027117517332829LL;

    t81 = (x329%(x330+(x331%x332)));

    if (t81 != 2255LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x339 = INT64_MAX;
	int32_t x340 = INT32_MIN;
	volatile int64_t t82 = 63853019238LL;

    t82 = (x337%(x338+(x339%x340)));

    if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x342 = INT32_MIN;
	static uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 455694U;
	static uint32_t t83 = 3663U;

    t83 = (x341%(x342+(x343%x344)));

    if (t83 != 6802105U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x345 = UINT8_MAX;
	uint32_t x346 = 4189531U;
	static volatile int64_t x348 = INT64_MAX;
	int64_t t84 = -21674312LL;

    t84 = (x345%(x346+(x347%x348)));

    if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x351 = -1;
	volatile int64_t t85 = -90760400152604784LL;

    t85 = (x349%(x350+(x351%x352)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = INT32_MIN;
	volatile int16_t x354 = INT16_MIN;
	static int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t86 = 22688968;

    t86 = (x353%(x354+(x355%x356)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x358 = 0U;
	int8_t x359 = INT8_MIN;
	static uint32_t t87 = 944U;

    t87 = (x357%(x358+(x359%x360)));

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x361 = INT32_MAX;
	uint8_t x362 = 3U;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MIN;
	volatile uint64_t t88 = 6371431055424028245LLU;

    t88 = (x361%(x362+(x363%x364)));

    if (t88 != 2147483647LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x368 = -1;
	volatile uint32_t t89 = 31U;

    t89 = (x365%(x366+(x367%x368)));

    if (t89 != 73U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x369 = 3081531U;
	int32_t x370 = INT32_MAX;
	int16_t x371 = -2343;
	uint32_t t90 = 78U;

    t90 = (x369%(x370+(x371%x372)));

    if (t90 != 3081531U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x374 = 3907LL;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t91 = 77787191835967LL;

    t91 = (x373%(x374+(x375%x376)));

    if (t91 != 18LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = -370595270226253LL;
	static uint8_t x378 = 6U;
	volatile int32_t x379 = 923768;
	int8_t x380 = -1;
	volatile int64_t t92 = -7757734152820891LL;

    t92 = (x377%(x378+(x379%x380)));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = INT32_MAX;
	int32_t x384 = INT32_MIN;
	int64_t t93 = 1LL;

    t93 = (x381%(x382+(x383%x384)));

    if (t93 != 5171LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x393 = 209U;
	int8_t x394 = -1;
	int8_t x395 = -3;
	uint32_t x396 = 1476U;
	uint32_t t94 = 2165899U;

    t94 = (x393%(x394+(x395%x396)));

    if (t94 != 209U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 90U;
	volatile uint32_t t95 = 50U;

    t95 = (x397%(x398+(x399%x400)));

    if (t95 != 39U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = -1;
	int32_t x402 = -31031;
	int16_t x403 = -2;
	volatile int32_t x404 = -94791568;
	int32_t t96 = 29396;

    t96 = (x401%(x402+(x403%x404)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x405 = 16;
	int16_t x406 = INT16_MIN;
	uint32_t x408 = 57394006U;
	uint32_t t97 = 1596596675U;

    t97 = (x405%(x406+(x407%x408)));

    if (t97 != 16U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MIN;
	static int32_t x415 = -1;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t98 = 58246815483LL;

    t98 = (x413%(x414+(x415%x416)));

    if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x417 = 3U;
	uint16_t x418 = 572U;
	int16_t x419 = -1;
	int16_t x420 = INT16_MIN;
	int32_t t99 = 0;

    t99 = (x417%(x418+(x419%x420)));

    if (t99 != 3) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x421 = 1U;
	int16_t x422 = 9622;
	static int8_t x423 = 0;
	int64_t x424 = INT64_MIN;
	volatile int64_t t100 = 12566561LL;

    t100 = (x421%(x422+(x423%x424)));

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = INT32_MAX;
	int16_t x426 = -1;
	int64_t x427 = INT64_MAX;
	volatile int16_t x428 = 4884;

    t101 = (x425%(x426+(x427%x428)));

    if (t101 != 1009LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x429 = INT8_MIN;
	static volatile uint16_t x430 = 247U;
	volatile uint32_t x431 = UINT32_MAX;

    t102 = (x429%(x430+(x431%x432)));

    if (t102 != 115604U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x434 = UINT8_MAX;
	volatile uint64_t x435 = 300748LLU;
	uint64_t t103 = 2566296339682LLU;

    t103 = (x433%(x434+(x435%x436)));

    if (t103 != 256491LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = INT32_MIN;
	uint8_t x439 = 6U;

    t104 = (x437%(x438+(x439%x440)));

    if (t104 != -8LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = INT8_MAX;
	uint16_t x442 = UINT16_MAX;
	volatile int32_t x443 = INT32_MIN;
	int16_t x444 = -11951;
	volatile int32_t t105 = -3546732;

    t105 = (x441%(x442+(x443%x444)));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x445 = 88U;
	int8_t x446 = -1;
	static volatile int64_t t106 = -17127793LL;

    t106 = (x445%(x446+(x447%x448)));

    if (t106 != 88LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x449 = 838493562682466517LLU;
	uint8_t x450 = 4U;
	int64_t x451 = INT64_MIN;
	static uint64_t t107 = 10397279LLU;

    t107 = (x449%(x450+(x451%x452)));

    if (t107 != 838493562682466517LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x453 = 212U;
	int64_t x455 = INT64_MIN;
	int64_t t108 = 1142671863102199LL;

    t108 = (x453%(x454+(x455%x456)));

    if (t108 != 212LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x457 = 72U;
	int32_t x458 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MAX;
	volatile int64_t t109 = 1084427638899719373LL;

    t109 = (x457%(x458+(x459%x460)));

    if (t109 != 72LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x463 = 23U;
	uint16_t x464 = UINT16_MAX;
	volatile int64_t t110 = 1406209230LL;

    t110 = (x461%(x462+(x463%x464)));

    if (t110 != -2696832LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x465 = 4U;
	volatile int8_t x467 = INT8_MAX;
	int16_t x468 = 54;
	volatile int32_t t111 = 476;

    t111 = (x465%(x466+(x467%x468)));

    if (t111 != 4) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x473 = 1U;
	uint16_t x474 = UINT16_MAX;
	uint64_t x475 = UINT64_MAX;
	int64_t x476 = 388LL;
	uint64_t t112 = 388228084702LLU;

    t112 = (x473%(x474+(x475%x476)));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x480 = INT64_MIN;
	static uint64_t t113 = 88912LLU;

    t113 = (x477%(x478+(x479%x480)));

    if (t113 != 70744LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x481 = INT64_MIN;
	uint8_t x483 = 77U;
	uint8_t x484 = UINT8_MAX;
	int64_t t114 = -210528LL;

    t114 = (x481%(x482+(x483%x484)));

    if (t114 != -184LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x485 = INT32_MAX;
	int8_t x486 = INT8_MIN;
	int64_t x487 = -1LL;
	int64_t x488 = 2405LL;
	int64_t t115 = 1828LL;

    t115 = (x485%(x486+(x487%x488)));

    if (t115 != 7LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x489 = INT16_MAX;
	volatile int16_t x490 = 1;
	static int16_t x491 = INT16_MIN;
	int32_t x492 = INT32_MIN;
	static volatile int32_t t116 = -45;

    t116 = (x489%(x490+(x491%x492)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x493 = 2LLU;
	volatile uint8_t x495 = UINT8_MAX;
	uint64_t x496 = 138895193526319LLU;

    t117 = (x493%(x494+(x495%x496)));

    if (t117 != 2LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x497 = 0;
	static uint16_t x498 = UINT16_MAX;
	static uint64_t x499 = 66641024863473LLU;
	int64_t x500 = -2983513467LL;
	static uint64_t t118 = 180335348LLU;

    t118 = (x497%(x498+(x499%x500)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x501 = -1;
	int32_t x502 = INT32_MIN;
	int16_t x503 = INT16_MAX;
	int32_t x504 = 11;
	int32_t t119 = 1022309;

    t119 = (x501%(x502+(x503%x504)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = -1;
	int32_t x507 = -1;
	int8_t x508 = -1;
	volatile int32_t t120 = -15985;

    t120 = (x505%(x506+(x507%x508)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = INT16_MAX;
	int16_t x510 = INT16_MAX;
	uint16_t x511 = 15354U;
	volatile int32_t x512 = -3007841;

    t121 = (x509%(x510+(x511%x512)));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = INT32_MIN;
	int8_t x514 = INT8_MAX;
	int32_t x516 = INT32_MIN;

    t122 = (x513%(x514+(x515%x516)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x519 = UINT32_MAX;
	uint32_t t123 = 5U;

    t123 = (x517%(x518+(x519%x520)));

    if (t123 != 559994U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x522 = INT16_MIN;
	uint32_t x523 = 67U;
	int16_t x524 = -13;

    t124 = (x521%(x522+(x523%x524)));

    if (t124 != 26U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x525 = 1U;
	static uint16_t x526 = 27845U;
	int64_t x527 = INT64_MIN;
	int64_t t125 = 1866454LL;

    t125 = (x525%(x526+(x527%x528)));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x529 = 2390458;
	volatile int64_t x530 = INT64_MAX;
	int32_t x531 = 0;
	volatile int16_t x532 = 1204;
	volatile int64_t t126 = -16835621002LL;

    t126 = (x529%(x530+(x531%x532)));

    if (t126 != 2390458LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x535 = INT64_MIN;
	int64_t x536 = 51220LL;
	int64_t t127 = 60478LL;

    t127 = (x533%(x534+(x535%x536)));

    if (t127 != 102LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x537 = UINT8_MAX;
	int8_t x539 = -19;
	static volatile int8_t x540 = -1;
	uint64_t t128 = 171396824392690LLU;

    t128 = (x537%(x538+(x539%x540)));

    if (t128 != 255LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x541 = 522119849839009298LL;
	int64_t x542 = -1548670446581687261LL;
	uint16_t x543 = 1581U;
	int64_t x544 = INT64_MIN;
	volatile int64_t t129 = -27165200LL;

    t129 = (x541%(x542+(x543%x544)));

    if (t129 != 522119849839009298LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x545 = 65U;
	static int16_t x546 = INT16_MIN;
	int32_t x547 = -13623;
	static int32_t x548 = INT32_MAX;
	volatile int32_t t130 = 471372;

    t130 = (x545%(x546+(x547%x548)));

    if (t130 != 65) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = INT8_MAX;
	volatile int64_t x550 = 46056119876906813LL;
	uint64_t x551 = 4439545845588080LLU;
	volatile uint64_t t131 = 190309LLU;

    t131 = (x549%(x550+(x551%x552)));

    if (t131 != 127LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = -679;
	static int8_t x554 = -28;
	int32_t x555 = 211;
	int32_t x556 = INT32_MIN;
	int32_t t132 = -147388295;

    t132 = (x553%(x554+(x555%x556)));

    if (t132 != -130) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = INT32_MAX;
	int32_t x558 = -1;
	uint64_t t133 = 123LLU;

    t133 = (x557%(x558+(x559%x560)));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	volatile int16_t x563 = INT16_MIN;
	int16_t x564 = INT16_MIN;

    t134 = (x561%(x562+(x563%x564)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x565 = INT16_MAX;
	int16_t x566 = -3443;
	volatile int64_t x567 = INT64_MAX;
	static int64_t x568 = INT64_MAX;
	int64_t t135 = 15LL;

    t135 = (x565%(x566+(x567%x568)));

    if (t135 != 1780LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x570 = UINT32_MAX;
	int32_t x571 = INT32_MIN;
	int64_t x572 = -1LL;
	static int64_t t136 = 66663021304906LL;

    t136 = (x569%(x570+(x571%x572)));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = 5;
	volatile int32_t t137 = -102;

    t137 = (x573%(x574+(x575%x576)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x578 = INT16_MIN;
	volatile uint32_t x579 = UINT32_MAX;
	volatile int8_t x580 = -13;
	int64_t t138 = -11260887LL;

    t138 = (x577%(x578+(x579%x580)));

    if (t138 != -536477768LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x582 = -145;
	int64_t x583 = INT64_MIN;
	volatile int64_t t139 = -2179061LL;

    t139 = (x581%(x582+(x583%x584)));

    if (t139 != 41LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = -26946;
	int32_t x586 = INT32_MIN;
	uint32_t x587 = UINT32_MAX;
	volatile uint16_t x588 = UINT16_MAX;
	uint32_t t140 = 2U;

    t140 = (x585%(x586+(x587%x588)));

    if (t140 != 2147456702U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MAX;
	volatile int16_t x592 = INT16_MIN;
	int32_t t141 = -1;

    t141 = (x589%(x590+(x591%x592)));

    if (t141 != -8074) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x593 = INT8_MAX;
	int16_t x594 = -1;
	static volatile int64_t x595 = -2031758LL;
	int64_t x596 = -453560569258898LL;
	int64_t t142 = -5490232225LL;

    t142 = (x593%(x594+(x595%x596)));

    if (t142 != 127LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x597 = 44;
	static uint16_t x598 = 8370U;
	static volatile int32_t x599 = -1;
	static uint8_t x600 = UINT8_MAX;
	int32_t t143 = 1710565;

    t143 = (x597%(x598+(x599%x600)));

    if (t143 != 44) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x601 = 600730U;
	int32_t x602 = INT32_MIN;
	uint16_t x604 = UINT16_MAX;
	volatile int64_t t144 = -167290303611685485LL;

    t144 = (x601%(x602+(x603%x604)));

    if (t144 != 600730LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = 6089;
	static uint32_t x606 = UINT32_MAX;
	int16_t x607 = -1;
	uint8_t x608 = UINT8_MAX;

    t145 = (x605%(x606+(x607%x608)));

    if (t145 != 6089U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x609 = INT16_MAX;
	static volatile int32_t x612 = INT32_MIN;

    t146 = (x609%(x610+(x611%x612)));

    if (t146 != 32767LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x613 = UINT16_MAX;
	uint32_t x614 = 228720U;
	int8_t x615 = INT8_MIN;
	int16_t x616 = INT16_MIN;
	volatile uint32_t t147 = 1U;

    t147 = (x613%(x614+(x615%x616)));

    if (t147 != 65535U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = 2;
	int64_t x618 = INT64_MAX;
	static int16_t x619 = -1498;
	int64_t x620 = INT64_MAX;
	volatile int64_t t148 = 8707641490102LL;

    t148 = (x617%(x618+(x619%x620)));

    if (t148 != 2LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x621 = INT32_MIN;
	uint8_t x622 = 7U;
	volatile uint32_t x623 = 421730U;
	static volatile int32_t x624 = 2;
	volatile uint32_t t149 = 2109356520U;

    t149 = (x621%(x622+(x623%x624)));

    if (t149 != 2U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = INT16_MAX;
	uint32_t x626 = 1U;
	int32_t x627 = -1;
	static volatile int64_t x628 = -1LL;
	volatile int64_t t150 = -6337LL;

    t150 = (x625%(x626+(x627%x628)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x630 = INT8_MIN;
	int16_t x631 = -1;
	uint64_t x632 = UINT64_MAX;
	volatile uint64_t t151 = 842280721361869767LLU;

    t151 = (x629%(x630+(x631%x632)));

    if (t151 != 122LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x633 = -1;
	int8_t x634 = -1;
	int64_t x635 = INT64_MIN;
	volatile int64_t t152 = -140211429853073416LL;

    t152 = (x633%(x634+(x635%x636)));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x637 = INT64_MAX;
	static volatile uint8_t x638 = 25U;
	volatile uint8_t x639 = UINT8_MAX;
	static uint16_t x640 = 7873U;
	volatile int64_t t153 = -35611979LL;

    t153 = (x637%(x638+(x639%x640)));

    if (t153 != 7LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x641 = 4675;
	int16_t x642 = INT16_MIN;
	int32_t x643 = -1;
	int64_t t154 = 3023262LL;

    t154 = (x641%(x642+(x643%x644)));

    if (t154 != 4675LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x645 = 4U;
	volatile uint64_t x646 = UINT64_MAX;
	uint64_t x648 = 476793LLU;
	volatile uint64_t t155 = 4283226360857694LLU;

    t155 = (x645%(x646+(x647%x648)));

    if (t155 != 4LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x649 = INT32_MAX;
	int64_t x650 = -258291LL;
	static uint64_t x651 = UINT64_MAX;
	uint16_t x652 = UINT16_MAX;
	static uint64_t t156 = 48585540LLU;

    t156 = (x649%(x650+(x651%x652)));

    if (t156 != 2147483647LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x657 = -1;
	int8_t x659 = INT8_MIN;
	static int32_t x660 = INT32_MIN;
	int32_t t157 = 1;

    t157 = (x657%(x658+(x659%x660)));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x661 = INT32_MIN;
	static uint32_t x662 = 254928604U;
	int64_t x663 = -175059151812917LL;
	int16_t x664 = -973;

    t158 = (x661%(x662+(x663%x664)));

    if (t158 != -108055160LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x665 = 954U;
	uint64_t x666 = UINT64_MAX;
	static uint16_t x667 = 29U;
	volatile uint64_t t159 = 402572578LLU;

    t159 = (x665%(x666+(x667%x668)));

    if (t159 != 2LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x674 = INT32_MIN;
	int8_t x675 = INT8_MIN;
	int64_t t160 = -18833LL;

    t160 = (x673%(x674+(x675%x676)));

    if (t160 != 17LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x677 = INT16_MIN;
	uint32_t x678 = UINT32_MAX;
	int16_t x679 = -1;
	int8_t x680 = INT8_MIN;
	uint32_t t161 = 381905U;

    t161 = (x677%(x678+(x679%x680)));

    if (t161 != 4294934528U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x681 = INT16_MIN;
	volatile int32_t t162 = -30734;

    t162 = (x681%(x682+(x683%x684)));

    if (t162 != -98) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x685 = UINT8_MAX;
	uint16_t x686 = UINT16_MAX;
	static int32_t x687 = INT32_MIN;
	int32_t t163 = 13325;

    t163 = (x685%(x686+(x687%x688)));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x689 = -1;
	volatile int8_t x690 = INT8_MAX;
	uint64_t x691 = 7813754177289471LLU;
	int16_t x692 = INT16_MIN;

    t164 = (x689%(x690+(x691%x692)));

    if (t164 != 6284215306100335LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x697 = -1;
	int32_t x698 = -1;
	int16_t x700 = INT16_MAX;
	int32_t t165 = -1452;

    t165 = (x697%(x698+(x699%x700)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x701 = -25;
	int8_t x702 = INT8_MIN;
	static volatile uint8_t x703 = UINT8_MAX;
	static uint32_t x704 = 48798U;
	static volatile uint32_t t166 = 1667U;

    t166 = (x701%(x702+(x703%x704)));

    if (t166 != 118U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x706 = INT32_MIN;
	uint64_t x707 = 248502179LLU;
	static int64_t x708 = INT64_MAX;
	uint64_t t167 = 562888639LLU;

    t167 = (x705%(x706+(x707%x708)));

    if (t167 != 1898981341LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x709 = -1;
	static int64_t x710 = INT64_MIN;
	volatile uint32_t x712 = UINT32_MAX;
	volatile int64_t t168 = -5843LL;

    t168 = (x709%(x710+(x711%x712)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x713 = -14540;
	int8_t x714 = -7;
	static volatile uint8_t x715 = UINT8_MAX;
	volatile int16_t x716 = INT16_MIN;
	int32_t t169 = -30141767;

    t169 = (x713%(x714+(x715%x716)));

    if (t169 != -156) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x717 = -13199;
	uint32_t x718 = UINT32_MAX;
	uint8_t x720 = 59U;
	uint32_t t170 = 1481527U;

    t170 = (x717%(x718+(x719%x720)));

    if (t170 != 5U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x721 = 7040951849789850LL;
	int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MAX;
	int16_t x724 = 11;
	volatile int64_t t171 = -3314790940575365LL;

    t171 = (x721%(x722+(x723%x724)));

    if (t171 != 30471LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x725 = 984;
	static volatile int32_t x726 = INT32_MAX;
	volatile int8_t x727 = -1;
	int32_t t172 = -2;

    t172 = (x725%(x726+(x727%x728)));

    if (t172 != 984) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x729 = 26864U;
	int16_t x730 = INT16_MIN;
	int32_t x731 = -394128733;
	static int8_t x732 = 37;
	volatile int32_t t173 = 13857;

    t173 = (x729%(x730+(x731%x732)));

    if (t173 != 26864) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x733 = -1;
	int32_t x734 = INT32_MIN;
	uint32_t x736 = UINT32_MAX;

    t174 = (x733%(x734+(x735%x736)));

    if (t174 != 65535U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x738 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	uint8_t x740 = 3U;
	int32_t t175 = 2087;

    t175 = (x737%(x738+(x739%x740)));

    if (t175 != 6) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x742 = INT8_MAX;
	int64_t x743 = 32LL;
	int64_t t176 = -3LL;

    t176 = (x741%(x742+(x743%x744)));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x745 = 37U;
	int8_t x746 = -1;
	static int16_t x747 = -1;
	volatile int64_t x748 = INT64_MAX;
	volatile int64_t t177 = -8621645753221LL;

    t177 = (x745%(x746+(x747%x748)));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x749 = 2U;
	static volatile int32_t x750 = INT32_MIN;
	int32_t x751 = INT32_MAX;
	volatile uint32_t t178 = 356937U;

    t178 = (x749%(x750+(x751%x752)));

    if (t178 != 2U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x753 = INT8_MIN;
	int16_t x754 = INT16_MIN;
	int16_t x755 = -1;
	static uint8_t x756 = UINT8_MAX;
	int32_t t179 = -7949257;

    t179 = (x753%(x754+(x755%x756)));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x760 = -7;
	int32_t t180 = 68320;

    t180 = (x757%(x758+(x759%x760)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x767 = -3;
	static int32_t t181 = 193328622;

    t181 = (x765%(x766+(x767%x768)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x769 = INT8_MIN;
	volatile int32_t x771 = INT32_MIN;
	uint8_t x772 = 1U;

    t182 = (x769%(x770+(x771%x772)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x773 = INT8_MIN;
	uint64_t x775 = 72LLU;
	volatile uint64_t t183 = 11325LLU;

    t183 = (x773%(x774+(x775%x776)));

    if (t183 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x777 = INT32_MIN;
	int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MIN;
	int16_t x780 = 2211;
	int32_t t184 = 2;

    t184 = (x777%(x778+(x779%x780)));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x781 = -1LL;
	int64_t x782 = INT64_MIN;
	static int8_t x783 = INT8_MAX;
	uint32_t x784 = UINT32_MAX;
	volatile int64_t t185 = -1284535658746072418LL;

    t185 = (x781%(x782+(x783%x784)));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x785 = 58361819918LLU;
	int32_t x786 = -98;
	volatile uint64_t t186 = 1010734265359LLU;

    t186 = (x785%(x786+(x787%x788)));

    if (t186 != 58361819918LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x789 = INT32_MIN;
	int32_t x790 = -248209;
	static int16_t x791 = INT16_MIN;
	uint32_t x792 = 16589625U;
	static volatile uint32_t t187 = 1760185U;

    t187 = (x789%(x790+(x791%x792)));

    if (t187 != 6712505U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x795 = INT8_MIN;
	static int8_t x796 = INT8_MIN;

    t188 = (x793%(x794+(x795%x796)));

    if (t188 != 1807U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x797 = 285LLU;
	int8_t x798 = -3;
	volatile int32_t x799 = -1;
	volatile uint8_t x800 = 15U;
	volatile uint64_t t189 = 1937LLU;

    t189 = (x797%(x798+(x799%x800)));

    if (t189 != 285LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x806 = -1;
	uint32_t x807 = 117U;
	static volatile uint32_t t190 = 1573834U;

    t190 = (x805%(x806+(x807%x808)));

    if (t190 != 86U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x810 = INT8_MIN;
	static int16_t x812 = INT16_MIN;
	volatile int64_t t191 = 0LL;

    t191 = (x809%(x810+(x811%x812)));

    if (t191 != 29LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x813 = -4;
	int16_t x816 = INT16_MIN;
	static volatile int32_t t192 = 690;

    t192 = (x813%(x814+(x815%x816)));

    if (t192 != -4) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x817 = 1;
	volatile int8_t x818 = -1;
	int32_t x820 = INT32_MAX;
	static int32_t t193 = 14;

    t193 = (x817%(x818+(x819%x820)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x821 = 13759U;
	int16_t x823 = INT16_MIN;
	volatile int8_t x824 = -1;
	static volatile int32_t t194 = 3;

    t194 = (x821%(x822+(x823%x824)));

    if (t194 != 13759) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x825 = UINT8_MAX;
	int32_t x826 = INT32_MIN;
	uint16_t x828 = 1283U;
	volatile uint32_t t195 = 47U;

    t195 = (x825%(x826+(x827%x828)));

    if (t195 != 255U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x829 = -1LL;
	uint32_t x830 = 56485195U;
	uint8_t x832 = UINT8_MAX;
	volatile int64_t t196 = 144LL;

    t196 = (x829%(x830+(x831%x832)));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x833 = -129487089208001696LL;
	int64_t x834 = INT64_MIN;
	volatile int8_t x835 = INT8_MAX;
	static int16_t x836 = -1;
	volatile int64_t t197 = 7053262LL;

    t197 = (x833%(x834+(x835%x836)));

    if (t197 != -129487089208001696LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x837 = INT64_MIN;
	static uint64_t x838 = 113LLU;
	int64_t x839 = -1LL;
	volatile int16_t x840 = INT16_MIN;
	volatile uint64_t t198 = 4294115292729619LLU;

    t198 = (x837%(x838+(x839%x840)));

    if (t198 != 64LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x842 = 43U;
	int16_t x843 = INT16_MIN;
	int64_t x844 = INT64_MIN;
	int64_t t199 = 247074223365LL;

    t199 = (x841%(x842+(x843%x844)));

    if (t199 != -43LL) { NG(); } else { ; }
	
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

