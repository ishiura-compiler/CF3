
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

volatile uint32_t x1 = 23U;
int8_t x8 = -35;
volatile int32_t t1 = -11300;
volatile int32_t x11 = -1;
uint32_t x14 = 33U;
volatile int16_t x23 = -1;
uint64_t x26 = 1729773LLU;
int16_t x28 = -1;
volatile uint64_t t6 = 32598LLU;
static int32_t x32 = -1;
volatile uint32_t x33 = UINT32_MAX;
int32_t x43 = INT32_MAX;
volatile int8_t x44 = 21;
volatile uint64_t x51 = UINT64_MAX;
uint32_t x54 = UINT32_MAX;
volatile int32_t x60 = -31085;
int32_t x61 = 826070192;
uint8_t x63 = 0U;
static uint16_t x67 = 451U;
int8_t x68 = -1;
int8_t x71 = INT8_MIN;
volatile int8_t x76 = -1;
uint64_t x78 = UINT64_MAX;
volatile uint32_t x82 = 3127069U;
int64_t x83 = INT64_MIN;
volatile int64_t x87 = -1LL;
static int64_t t21 = -64LL;
volatile int32_t x101 = -78021;
int32_t x105 = -5069451;
int16_t x106 = INT16_MIN;
uint8_t x112 = 100U;
volatile int32_t t27 = 1300505;
static int32_t x114 = INT32_MIN;
static int32_t x116 = -32663618;
int32_t x118 = INT32_MAX;
int32_t t29 = -567043;
uint64_t x122 = UINT64_MAX;
int64_t x131 = INT64_MIN;
uint64_t t32 = 10LLU;
uint32_t x134 = UINT32_MAX;
int32_t x140 = -1;
int16_t x156 = 4;
int32_t x157 = INT32_MIN;
uint16_t x158 = 143U;
int32_t t39 = -1809926;
int8_t x164 = INT8_MAX;
int32_t t41 = 12;
int64_t x171 = INT64_MIN;
int8_t x172 = INT8_MIN;
int8_t x174 = -1;
int16_t x184 = INT16_MIN;
int64_t x191 = 24304LL;
int32_t x194 = -1;
volatile int8_t x198 = INT8_MAX;
int8_t x208 = 40;
volatile int64_t x209 = INT64_MIN;
int32_t x220 = INT32_MIN;
int32_t x228 = INT32_MIN;
int16_t x234 = 57;
int16_t x240 = INT16_MAX;
uint32_t t58 = 28828U;
int32_t x242 = -1;
static int8_t x247 = INT8_MIN;
int16_t x248 = INT16_MAX;
volatile int32_t x249 = INT32_MAX;
uint32_t x252 = UINT32_MAX;
static volatile uint32_t t61 = 569094638U;
int8_t x253 = INT8_MAX;
volatile int32_t t62 = -6;
int16_t x258 = INT16_MIN;
int32_t x263 = INT32_MAX;
int64_t x265 = INT64_MIN;
int8_t x267 = INT8_MAX;
volatile int32_t x269 = INT32_MIN;
volatile uint16_t x275 = 1U;
uint32_t x281 = 118981U;
int16_t x286 = -1;
int32_t x294 = 29178;
int16_t x295 = -1;
volatile int64_t t72 = 8256558566139319LL;
uint64_t x302 = 92358504LLU;
int32_t x309 = -1;
volatile int16_t x316 = 13;
int64_t x326 = -1LL;
volatile uint16_t x331 = 14260U;
static int8_t x335 = 2;
volatile int64_t t84 = -336LL;
static uint32_t x346 = 1911U;
volatile int32_t x347 = 281179;
int32_t x349 = -3;
uint32_t x350 = UINT32_MAX;
uint8_t x351 = UINT8_MAX;
uint8_t x355 = UINT8_MAX;
static int64_t x357 = -1LL;
static volatile int8_t x362 = INT8_MIN;
int32_t t89 = -6790;
uint64_t t90 = 15209098LLU;
uint8_t x370 = 1U;
int16_t x371 = INT16_MIN;
int16_t x373 = INT16_MIN;
static int8_t x377 = INT8_MIN;
uint32_t x381 = 38028U;
uint16_t x383 = 630U;
int32_t x386 = INT32_MAX;
static uint32_t x390 = 2U;
uint8_t x393 = UINT8_MAX;
volatile int32_t t98 = -3296301;
int64_t x403 = -1LL;
int16_t x411 = INT16_MAX;
int8_t x414 = INT8_MIN;
volatile uint32_t x416 = 481915U;
static uint8_t x418 = 88U;
uint32_t x420 = 8374125U;
int32_t x422 = INT32_MAX;
static volatile uint32_t t104 = 66U;
uint16_t x429 = 1805U;
int64_t x431 = -255556586LL;
uint16_t x432 = 31889U;
static volatile uint16_t x434 = 6U;
static int16_t x449 = INT16_MIN;
volatile int32_t x450 = -15048572;
volatile uint64_t t111 = 34057985584662LLU;
int32_t x454 = -130030501;
int64_t x463 = -8LL;
volatile int64_t t114 = -526453239757442900LL;
volatile int32_t x468 = 164031;
uint32_t x469 = UINT32_MAX;
uint64_t t117 = 1494047303666430LLU;
int8_t x483 = 1;
int32_t x492 = -901;
int64_t t121 = 0LL;
int64_t x493 = -1LL;
int16_t x500 = 1618;
int64_t x502 = INT64_MIN;
int16_t x503 = INT16_MIN;
static int8_t x511 = -1;
static int32_t t127 = 0;
volatile uint64_t t129 = 1678LLU;
static uint32_t x531 = 219215848U;
uint32_t t130 = 60813U;
int64_t x541 = 5892524799607LL;
int64_t x542 = -844381659019504LL;
volatile uint64_t t134 = 4395772791LLU;
int8_t x549 = 1;
int64_t x557 = -3LL;
int64_t t138 = 248812LL;
static int8_t x565 = INT8_MAX;
int32_t x566 = 5221454;
int8_t x568 = INT8_MIN;
int64_t x569 = INT64_MIN;
uint8_t x576 = 4U;
int64_t x577 = INT64_MIN;
uint32_t x584 = 920U;
volatile uint64_t x590 = 123791850238LLU;
int32_t x591 = -1;
int16_t x593 = -1;
static volatile int64_t x596 = INT64_MAX;
uint32_t x601 = 0U;
uint32_t x604 = 31921U;
int8_t x610 = -1;
static int8_t x614 = INT8_MAX;
uint64_t x617 = 3806389694280092773LLU;
volatile int8_t x618 = 0;
int8_t x619 = INT8_MIN;
volatile uint64_t t152 = 997LLU;
uint64_t x634 = 5891092LLU;
int32_t x635 = -7255;
int32_t x637 = INT32_MIN;
static volatile uint16_t x642 = 281U;
static volatile uint32_t t158 = 17409U;
int8_t x647 = INT8_MIN;
int64_t t159 = 4LL;
static volatile int64_t t162 = -191605LL;
int8_t x666 = -40;
int32_t x667 = -94164889;
int16_t x670 = -2028;
int64_t x672 = -1LL;
uint64_t x676 = UINT64_MAX;
uint32_t x679 = 0U;
volatile uint16_t x680 = UINT16_MAX;
volatile int64_t t167 = 49LL;
volatile int32_t x682 = INT32_MIN;
volatile uint8_t x683 = 0U;
static int8_t x685 = INT8_MIN;
uint64_t x686 = 3301LLU;
int64_t x689 = INT64_MIN;
uint64_t x696 = 24LLU;
int64_t x698 = 19467970089142LL;
volatile int32_t x702 = -213456736;
int8_t x705 = INT8_MAX;
int8_t x706 = INT8_MIN;
uint32_t t175 = 1U;
uint8_t x714 = 115U;
uint64_t x720 = 291038019975LLU;
int8_t x725 = INT8_MAX;
int16_t x728 = -1;
int32_t t179 = -15103141;
uint32_t x734 = UINT32_MAX;
static volatile int32_t t182 = -1;
volatile uint32_t t183 = 61459U;
int64_t t184 = -3368477171890LL;
int16_t x751 = INT16_MIN;
static int64_t t185 = 9742001LL;
int64_t x759 = INT64_MIN;
int32_t x764 = INT32_MIN;
int32_t x769 = 1323;
int8_t x770 = -48;
static int64_t x771 = INT64_MIN;
volatile int64_t x778 = INT64_MAX;
int8_t x780 = 19;
int64_t x781 = INT64_MIN;
static uint64_t x788 = 4450557238LLU;
uint64_t t194 = 157177702237479997LLU;
volatile int8_t x790 = 0;
int64_t t195 = -71127326LL;
int16_t x797 = -1589;
int64_t x798 = INT64_MIN;
volatile int32_t x800 = -13191;
static int32_t x801 = -1;
uint8_t x804 = 60U;
int64_t x807 = INT64_MAX;


void f0(void) {
    	uint64_t x2 = 129308273364565LLU;
	int8_t x3 = INT8_MIN;
	int64_t x4 = -4099575549207LL;
	static volatile uint64_t t0 = 6054512659414LLU;

    t0 = ((x1&(x2&x3))%x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MAX;
	static int32_t x6 = 7206;
	static int32_t x7 = INT32_MAX;

    t1 = ((x5&(x6&x7))%x8);

    if (t1 != 31) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int8_t x10 = 1;
	int8_t x12 = -1;
	volatile int32_t t2 = 20715450;

    t2 = ((x9&(x10&x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	uint32_t t3 = 93618222U;

    t3 = ((x13&(x14&x15))%x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -2355077271219145137LL;
	uint64_t x18 = 6LLU;
	uint32_t x19 = 4U;
	int32_t x20 = 130580;
	uint64_t t4 = 13374860LLU;

    t4 = ((x17&(x18&x19))%x20);

    if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	volatile int8_t x22 = INT8_MIN;
	int16_t x24 = -1;
	volatile int32_t t5 = -3946993;

    t5 = ((x21&(x22&x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 3U;
	int64_t x27 = -1LL;

    t6 = ((x25&(x26&x27))%x28);

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 1468;
	static int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MAX;
	int32_t t7 = -27752862;

    t7 = ((x29&(x30&x31))%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = 26;
	static uint32_t x35 = 56350U;
	uint16_t x36 = 694U;
	volatile uint32_t t8 = 23U;

    t8 = ((x33&(x34&x35))%x36);

    if (t8 != 26U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	volatile uint32_t x39 = UINT32_MAX;
	int16_t x40 = -1;
	volatile uint32_t t9 = 4539278U;

    t9 = ((x37&(x38&x39))%x40);

    if (t9 != 2147483648U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int64_t x42 = 13737178LL;
	uint64_t t10 = 3413590354047LLU;

    t10 = ((x41&(x42&x43))%x44);

    if (t10 != 7LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint8_t x46 = 8U;
	static volatile uint32_t x47 = 267U;
	uint16_t x48 = UINT16_MAX;
	volatile uint32_t t11 = 13518246U;

    t11 = ((x45&(x46&x47))%x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 156LL;
	int32_t x50 = -1;
	int8_t x52 = INT8_MIN;
	uint64_t t12 = 1548268718555LLU;

    t12 = ((x49&(x50&x51))%x52);

    if (t12 != 156LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -1198823594LL;
	int16_t x55 = -43;
	int16_t x56 = 3005;
	int64_t t13 = -4018308990432038388LL;

    t13 = ((x53&(x54&x55))%x56);

    if (t13 != 2050LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = 28;
	int8_t x58 = -13;
	int32_t x59 = INT32_MIN;
	int32_t t14 = -30590;

    t14 = ((x57&(x58&x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x62 = 45493544007LL;
	int32_t x64 = 1;
	volatile int64_t t15 = -591332294305278588LL;

    t15 = ((x61&(x62&x63))%x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 524418447792LLU;
	static uint16_t x66 = UINT16_MAX;
	volatile uint64_t t16 = 78974226072LLU;

    t16 = ((x65&(x66&x67))%x68);

    if (t16 != 384LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MIN;
	uint64_t x72 = 321155952LLU;
	volatile uint64_t t17 = 591951880LLU;

    t17 = ((x69&(x70&x71))%x72);

    if (t17 != 26977280LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -14;
	volatile int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	volatile int32_t t18 = -204;

    t18 = ((x73&(x74&x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 133112530;
	volatile int16_t x79 = 483;
	static uint8_t x80 = UINT8_MAX;
	static uint64_t t19 = 5059966309596LLU;

    t19 = ((x77&(x78&x79))%x80);

    if (t19 != 194LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	static int8_t x84 = INT8_MAX;
	volatile uint64_t t20 = 4920LLU;

    t20 = ((x81&(x82&x83))%x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile int64_t x86 = -1LL;
	int8_t x88 = INT8_MAX;

    t21 = ((x85&(x86&x87))%x88);

    if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = -1LL;
	uint16_t x90 = 20342U;
	volatile int64_t x91 = INT64_MAX;
	uint64_t x92 = 7014649895464398LLU;
	uint64_t t22 = 8145400000099LLU;

    t22 = ((x89&(x90&x91))%x92);

    if (t22 != 20342LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	volatile int8_t x94 = INT8_MIN;
	static int32_t x95 = INT32_MIN;
	static int64_t x96 = INT64_MAX;
	int64_t t23 = 29641341265413LL;

    t23 = ((x93&(x94&x95))%x96);

    if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int16_t x98 = 1;
	int32_t x99 = 4;
	int32_t x100 = INT32_MAX;
	static int32_t t24 = -163;

    t24 = ((x97&(x98&x99))%x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x102 = -44726LL;
	volatile uint8_t x103 = 15U;
	static volatile uint64_t x104 = 9123761333516699379LLU;
	volatile uint64_t t25 = 6113324512LLU;

    t25 = ((x101&(x102&x103))%x104);

    if (t25 != 10LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x107 = UINT32_MAX;
	uint32_t x108 = 1776U;
	volatile uint32_t t26 = 90U;

    t26 = ((x105&(x106&x107))%x108);

    if (t26 != 1104U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 0;
	uint16_t x110 = 675U;
	static int16_t x111 = 159;

    t27 = ((x109&(x110&x111))%x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 3256U;
	static int8_t x115 = -1;
	int32_t t28 = 1;

    t28 = ((x113&(x114&x115))%x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	uint8_t x119 = 28U;
	static volatile int16_t x120 = INT16_MIN;

    t29 = ((x117&(x118&x119))%x120);

    if (t29 != 28) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 38U;
	uint32_t x123 = 55U;
	volatile int64_t x124 = INT64_MIN;
	uint64_t t30 = 79781LLU;

    t30 = ((x121&(x122&x123))%x124);

    if (t30 != 38LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -295;
	volatile uint32_t x126 = 2U;
	volatile int64_t x127 = INT64_MIN;
	uint32_t x128 = 1494616U;
	volatile int64_t t31 = -23059459722922966LL;

    t31 = ((x125&(x126&x127))%x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -1LL;
	int32_t x130 = INT32_MIN;
	volatile uint64_t x132 = UINT64_MAX;

    t32 = ((x129&(x130&x131))%x132);

    if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int32_t x135 = INT32_MAX;
	uint16_t x136 = 6307U;
	uint32_t t33 = 61101U;

    t33 = ((x133&(x134&x135))%x136);

    if (t33 != 127U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 45U;
	int8_t x138 = -1;
	uint8_t x139 = 15U;
	volatile int32_t t34 = -195686059;

    t34 = ((x137&(x138&x139))%x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = UINT64_MAX;
	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = 0U;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t35 = 27041635LLU;

    t35 = ((x141&(x142&x143))%x144);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 3224352816957588518LL;
	volatile uint8_t x146 = 75U;
	volatile int64_t x147 = -1LL;
	int64_t x148 = 687265536900492LL;
	volatile int64_t t36 = 8LL;

    t36 = ((x145&(x146&x147))%x148);

    if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	volatile int64_t x150 = -1LL;
	int16_t x151 = -20;
	uint8_t x152 = 1U;
	static volatile int64_t t37 = 17LL;

    t37 = ((x149&(x150&x151))%x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MAX;
	static int8_t x155 = INT8_MIN;
	int32_t t38 = -132547537;

    t38 = ((x153&(x154&x155))%x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x159 = -1;
	int32_t x160 = INT32_MIN;

    t39 = ((x157&(x158&x159))%x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -26829761;
	int16_t x162 = -1;
	int32_t x163 = INT32_MIN;
	volatile int32_t t40 = -12829928;

    t40 = ((x161&(x162&x163))%x164);

    if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = 22;
	int8_t x166 = 4;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;

    t41 = ((x165&(x166&x167))%x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 59U;
	int8_t x170 = INT8_MIN;
	int64_t t42 = 61LL;

    t42 = ((x169&(x170&x171))%x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MAX;
	static int32_t t43 = -17586;

    t43 = ((x173&(x174&x175))%x176);

    if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 3U;
	int64_t x178 = 1024964LL;
	int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MAX;
	int64_t t44 = -2047119203LL;

    t44 = ((x177&(x178&x179))%x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 51;
	int8_t x182 = -1;
	static int16_t x183 = INT16_MIN;
	int32_t t45 = 591;

    t45 = ((x181&(x182&x183))%x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = INT8_MAX;
	uint8_t x186 = 120U;
	static uint64_t x187 = UINT64_MAX;
	volatile int32_t x188 = INT32_MAX;
	volatile uint64_t t46 = 458236LLU;

    t46 = ((x185&(x186&x187))%x188);

    if (t46 != 120LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MIN;
	uint8_t x192 = 2U;
	volatile uint64_t t47 = 129757551742LLU;

    t47 = ((x189&(x190&x191))%x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 46467U;
	int16_t x195 = 14309;
	int32_t x196 = INT32_MAX;
	volatile uint32_t t48 = 512284605U;

    t48 = ((x193&(x194&x195))%x196);

    if (t48 != 13697U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 242U;
	int64_t x199 = -254LL;
	uint8_t x200 = 28U;
	volatile int64_t t49 = 66LL;

    t49 = ((x197&(x198&x199))%x200);

    if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = 59U;
	static int16_t x202 = -6;
	static volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -308058;

    t50 = ((x201&(x202&x203))%x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MAX;
	uint64_t x206 = 310LLU;
	int32_t x207 = 44220439;
	uint64_t t51 = 8336126001433308LLU;

    t51 = ((x205&(x206&x207))%x208);

    if (t51 != 22LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x210 = UINT8_MAX;
	volatile int64_t x211 = -298251851LL;
	static int16_t x212 = INT16_MIN;
	int64_t t52 = -2841094686953LL;

    t52 = ((x209&(x210&x211))%x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = INT8_MAX;
	int32_t x218 = INT32_MIN;
	volatile int32_t x219 = INT32_MIN;
	int32_t t53 = -794;

    t53 = ((x217&(x218&x219))%x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	volatile uint32_t x223 = 4536U;
	static int16_t x224 = INT16_MAX;
	volatile uint32_t t54 = 117387302U;

    t54 = ((x221&(x222&x223))%x224);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = INT64_MIN;
	volatile int8_t x226 = 1;
	int8_t x227 = INT8_MAX;
	int64_t t55 = 9LL;

    t55 = ((x225&(x226&x227))%x228);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x229 = 8U;
	static int16_t x230 = 2139;
	int16_t x231 = 22;
	int16_t x232 = 1848;
	static volatile int32_t t56 = -414;

    t56 = ((x229&(x230&x231))%x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x233 = 1;
	static int8_t x235 = INT8_MAX;
	int16_t x236 = -472;
	int32_t t57 = -80;

    t57 = ((x233&(x234&x235))%x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x237 = 1U;
	int32_t x238 = INT32_MAX;
	uint32_t x239 = UINT32_MAX;

    t58 = ((x237&(x238&x239))%x240);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = INT16_MAX;
	volatile int64_t x243 = 985941154165052383LL;
	static int8_t x244 = INT8_MIN;
	volatile int64_t t59 = 1LL;

    t59 = ((x241&(x242&x243))%x244);

    if (t59 != 95LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = UINT32_MAX;
	int8_t x246 = INT8_MIN;
	static volatile uint32_t t60 = 65284861U;

    t60 = ((x245&(x246&x247))%x248);

    if (t60 != 32643U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x250 = 4U;
	uint32_t x251 = 640393U;

    t61 = ((x249&(x250&x251))%x252);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x254 = 49U;
	int8_t x255 = INT8_MIN;
	int8_t x256 = -1;

    t62 = ((x253&(x254&x255))%x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x257 = INT64_MIN;
	volatile int64_t x259 = INT64_MIN;
	volatile uint16_t x260 = UINT16_MAX;
	volatile int64_t t63 = 84552906064LL;

    t63 = ((x257&(x258&x259))%x260);

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int8_t x262 = 24;
	int16_t x264 = INT16_MAX;
	volatile uint32_t t64 = 9031782U;

    t64 = ((x261&(x262&x263))%x264);

    if (t64 != 24U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x266 = 2;
	uint64_t x268 = UINT64_MAX;
	uint64_t t65 = 29817311LLU;

    t65 = ((x265&(x266&x267))%x268);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x270 = 189984LL;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = 3;
	static volatile int64_t t66 = 1872334555LL;

    t66 = ((x269&(x270&x271))%x272);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x273 = UINT16_MAX;
	int32_t x274 = -6;
	uint64_t x276 = 2331985256011885LLU;
	volatile uint64_t t67 = 168LLU;

    t67 = ((x273&(x274&x275))%x276);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = 142U;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = 1U;
	int32_t x280 = 271577561;
	uint32_t t68 = 22302U;

    t68 = ((x277&(x278&x279))%x280);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x282 = INT8_MAX;
	uint64_t x283 = 4903LLU;
	static int32_t x284 = -1;
	static uint64_t t69 = 6726960392647557913LLU;

    t69 = ((x281&(x282&x283))%x284);

    if (t69 != 5LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x285 = UINT8_MAX;
	static int64_t x287 = INT64_MIN;
	int32_t x288 = 9;
	int64_t t70 = -14334741LL;

    t70 = ((x285&(x286&x287))%x288);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -206;
	int8_t x292 = -6;
	volatile int32_t t71 = 40104160;

    t71 = ((x289&(x290&x291))%x292);

    if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = UINT32_MAX;
	volatile int64_t x296 = INT64_MIN;

    t72 = ((x293&(x294&x295))%x296);

    if (t72 != 29178LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MIN;
	static int16_t x299 = 4;
	uint16_t x300 = UINT16_MAX;
	int32_t t73 = 0;

    t73 = ((x297&(x298&x299))%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MAX;
	static uint8_t x303 = 14U;
	uint32_t x304 = 87268154U;
	uint64_t t74 = 74389193392684LLU;

    t74 = ((x301&(x302&x303))%x304);

    if (t74 != 8LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MIN;
	volatile uint16_t x306 = 145U;
	uint8_t x307 = 45U;
	static volatile int8_t x308 = -17;
	static int64_t t75 = 2423087578LL;

    t75 = ((x305&(x306&x307))%x308);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x310 = 55;
	int16_t x311 = -19;
	volatile uint32_t x312 = UINT32_MAX;
	uint32_t t76 = 3106283U;

    t76 = ((x309&(x310&x311))%x312);

    if (t76 != 37U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = INT64_MIN;
	uint8_t x314 = 3U;
	int64_t x315 = INT64_MIN;
	int64_t t77 = -9873006311161LL;

    t77 = ((x313&(x314&x315))%x316);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	uint8_t x319 = 7U;
	int32_t x320 = -10;
	static uint64_t t78 = 19LLU;

    t78 = ((x317&(x318&x319))%x320);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x321 = INT64_MIN;
	uint16_t x322 = 5611U;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -43966239966806LL;
	volatile int64_t t79 = 2855601LL;

    t79 = ((x321&(x322&x323))%x324);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = INT8_MIN;
	static uint16_t x327 = UINT16_MAX;
	static volatile int8_t x328 = INT8_MAX;
	volatile int64_t t80 = -6977280343LL;

    t80 = ((x325&(x326&x327))%x328);

    if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static uint8_t x332 = 36U;
	int32_t t81 = 620707;

    t81 = ((x329&(x330&x331))%x332);

    if (t81 != 24) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x334 = -1LL;
	int32_t x336 = 24504;
	volatile int64_t t82 = -4LL;

    t82 = ((x333&(x334&x335))%x336);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = INT32_MAX;
	int16_t x338 = 453;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -1;
	int32_t t83 = -409;

    t83 = ((x337&(x338&x339))%x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x341 = INT16_MAX;
	int64_t x342 = 33656LL;
	int64_t x343 = -20152210601341LL;
	int64_t x344 = -1LL;

    t84 = ((x341&(x342&x343))%x344);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = -12;
	static volatile int8_t x348 = -1;
	uint32_t t85 = 7U;

    t85 = ((x345&(x346&x347))%x348);

    if (t85 != 592U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x352 = 126632U;
	volatile uint32_t t86 = 109078772U;

    t86 = ((x349&(x350&x351))%x352);

    if (t86 != 253U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x353 = -1;
	uint8_t x354 = 15U;
	uint64_t x356 = 25881794LLU;
	volatile uint64_t t87 = 7916377514134LLU;

    t87 = ((x353&(x354&x355))%x356);

    if (t87 != 15LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x358 = -7809;
	static uint8_t x359 = 45U;
	int32_t x360 = INT32_MIN;
	volatile int64_t t88 = 47129508461LL;

    t88 = ((x357&(x358&x359))%x360);

    if (t88 != 45LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x361 = 0;
	int32_t x363 = -1;
	int8_t x364 = -1;

    t89 = ((x361&(x362&x363))%x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = -422LL;
	int32_t x366 = -1;
	int64_t x367 = -1LL;
	uint64_t x368 = 2347LLU;

    t90 = ((x365&(x366&x367))%x368);

    if (t90 != 459LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x369 = INT16_MIN;
	int8_t x372 = 15;
	volatile int32_t t91 = -588838;

    t91 = ((x369&(x370&x371))%x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x374 = -1;
	static volatile int64_t x375 = INT64_MIN;
	volatile int8_t x376 = INT8_MIN;
	volatile int64_t t92 = -55793LL;

    t92 = ((x373&(x374&x375))%x376);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x378 = 1U;
	static int32_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	uint64_t t93 = 426895200LLU;

    t93 = ((x377&(x378&x379))%x380);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x382 = -9;
	uint8_t x384 = 16U;
	static volatile uint32_t t94 = 52U;

    t94 = ((x381&(x382&x383))%x384);

    if (t94 != 4U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x385 = INT16_MAX;
	int64_t x387 = -1LL;
	static int64_t x388 = INT64_MIN;
	int64_t t95 = 26740174LL;

    t95 = ((x385&(x386&x387))%x388);

    if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x389 = 7U;
	uint16_t x391 = 105U;
	int64_t x392 = 1232835LL;
	int64_t t96 = -34615177215LL;

    t96 = ((x389&(x390&x391))%x392);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x394 = INT16_MAX;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t97 = 947594312;

    t97 = ((x393&(x394&x395))%x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = INT8_MAX;
	int16_t x398 = 10;
	static int8_t x399 = INT8_MIN;
	int32_t x400 = -1;

    t98 = ((x397&(x398&x399))%x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t99 = 49449878485689056LL;

    t99 = ((x401&(x402&x403))%x404);

    if (t99 != 255LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x405 = INT8_MAX;
	static int8_t x406 = INT8_MIN;
	volatile uint32_t x407 = 3064124U;
	static int64_t x408 = -1LL;
	volatile int64_t t100 = -190LL;

    t100 = ((x405&(x406&x407))%x408);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x409 = INT8_MIN;
	int32_t x410 = 7047512;
	int16_t x412 = INT16_MIN;
	int32_t t101 = -1506043;

    t101 = ((x409&(x410&x411))%x412);

    if (t101 != 2304) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x413 = 5320;
	volatile int64_t x415 = INT64_MIN;
	int64_t t102 = 1101LL;

    t102 = ((x413&(x414&x415))%x416);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x417 = INT32_MIN;
	static int32_t x419 = 43337355;
	volatile uint32_t t103 = 88U;

    t103 = ((x417&(x418&x419))%x420);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x421 = 86566U;
	int32_t x423 = -894055770;
	int8_t x424 = -2;

    t104 = ((x421&(x422&x423))%x424);

    if (t104 != 82470U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	uint16_t x426 = 88U;
	static int8_t x427 = INT8_MAX;
	static int32_t x428 = -1;
	int32_t t105 = 142360277;

    t105 = ((x425&(x426&x427))%x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x430 = INT32_MIN;
	static int64_t t106 = 15200428504288275LL;

    t106 = ((x429&(x430&x431))%x432);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x433 = 525919445;
	int64_t x435 = -10706973LL;
	static int32_t x436 = -1;
	int64_t t107 = 1LL;

    t107 = ((x433&(x434&x435))%x436);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x437 = 41U;
	static int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MIN;
	static uint64_t x440 = 33LLU;
	volatile uint64_t t108 = 462477828539467924LLU;

    t108 = ((x437&(x438&x439))%x440);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x441 = UINT8_MAX;
	int16_t x442 = -1947;
	static volatile uint16_t x443 = 0U;
	int16_t x444 = INT16_MIN;
	int32_t t109 = 97451;

    t109 = ((x441&(x442&x443))%x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = INT64_MAX;
	volatile int64_t x446 = INT64_MIN;
	static uint16_t x447 = 61U;
	volatile int16_t x448 = INT16_MAX;
	static int64_t t110 = -79815588842LL;

    t110 = ((x445&(x446&x447))%x448);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x451 = -44;
	uint64_t x452 = 10874LLU;

    t111 = ((x449&(x450&x451))%x452);

    if (t111 != 4592LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x453 = 42U;
	volatile uint8_t x455 = 22U;
	uint8_t x456 = 25U;
	volatile int32_t t112 = -57266;

    t112 = ((x453&(x454&x455))%x456);

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x457 = 1U;
	uint64_t x458 = 1320359766381434154LLU;
	uint64_t x459 = UINT64_MAX;
	uint16_t x460 = UINT16_MAX;
	uint64_t t113 = 1435LLU;

    t113 = ((x457&(x458&x459))%x460);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x461 = INT8_MAX;
	int64_t x462 = 2018999227305LL;
	uint8_t x464 = 27U;

    t114 = ((x461&(x462&x463))%x464);

    if (t114 != 13LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x465 = 95549;
	uint64_t x466 = 49459603123305035LLU;
	volatile int32_t x467 = INT32_MIN;
	uint64_t t115 = 201885LLU;

    t115 = ((x465&(x466&x467))%x468);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x470 = INT64_MAX;
	volatile int16_t x471 = INT16_MIN;
	int8_t x472 = 3;
	int64_t t116 = 464588736LL;

    t116 = ((x469&(x470&x471))%x472);

    if (t116 != 2LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x473 = 2802400461817LLU;
	static int32_t x474 = -2687;
	int8_t x475 = INT8_MIN;
	int64_t x476 = INT64_MAX;

    t117 = ((x473&(x474&x475))%x476);

    if (t117 != 2802400461184LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x477 = 145198140U;
	int32_t x478 = -708637330;
	volatile int64_t x479 = INT64_MIN;
	int8_t x480 = INT8_MIN;
	volatile int64_t t118 = -20491LL;

    t118 = ((x477&(x478&x479))%x480);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x481 = INT32_MAX;
	int32_t x482 = -1;
	uint32_t x484 = 104U;
	volatile uint32_t t119 = 31046777U;

    t119 = ((x481&(x482&x483))%x484);

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x485 = INT32_MIN;
	int64_t x486 = -12521942LL;
	int32_t x487 = INT32_MAX;
	static volatile int16_t x488 = INT16_MIN;
	int64_t t120 = 1LL;

    t120 = ((x485&(x486&x487))%x488);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x489 = INT64_MIN;
	static int32_t x490 = INT32_MIN;
	uint16_t x491 = UINT16_MAX;

    t121 = ((x489&(x490&x491))%x492);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x494 = -69;
	static int32_t x495 = -1;
	static uint8_t x496 = UINT8_MAX;
	int64_t t122 = 1LL;

    t122 = ((x493&(x494&x495))%x496);

    if (t122 != -69LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x497 = 6182599144878LL;
	int16_t x498 = -87;
	volatile uint64_t x499 = 101LLU;
	static volatile uint64_t t123 = 182362611174LLU;

    t123 = ((x497&(x498&x499))%x500);

    if (t123 != 32LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x501 = 1U;
	static int16_t x504 = INT16_MIN;
	volatile int64_t t124 = 19LL;

    t124 = ((x501&(x502&x503))%x504);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x506 = -1;
	uint32_t x507 = UINT32_MAX;
	uint16_t x508 = UINT16_MAX;
	static volatile uint32_t t125 = 46092U;

    t125 = ((x505&(x506&x507))%x508);

    if (t125 != 32767U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x509 = 49U;
	int16_t x510 = 11;
	int8_t x512 = INT8_MIN;
	volatile uint32_t t126 = 2U;

    t126 = ((x509&(x510&x511))%x512);

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x517 = INT8_MAX;
	int32_t x518 = -1;
	uint16_t x519 = 11U;
	static volatile int8_t x520 = -1;

    t127 = ((x517&(x518&x519))%x520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x521 = 16405680219026LLU;
	volatile uint16_t x522 = UINT16_MAX;
	int8_t x523 = 3;
	static int32_t x524 = INT32_MIN;
	uint64_t t128 = 1LLU;

    t128 = ((x521&(x522&x523))%x524);

    if (t128 != 2LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = INT8_MIN;
	volatile uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MIN;
	uint8_t x528 = 24U;

    t129 = ((x525&(x526&x527))%x528);

    if (t129 != 8LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x529 = -1;
	uint32_t x530 = 4791U;
	int32_t x532 = INT32_MAX;

    t130 = ((x529&(x530&x531))%x532);

    if (t130 != 4768U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x533 = 72U;
	uint64_t x534 = 637701793209LLU;
	static uint16_t x535 = 56U;
	int32_t x536 = INT32_MIN;
	uint64_t t131 = 12506LLU;

    t131 = ((x533&(x534&x535))%x536);

    if (t131 != 8LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x537 = 4U;
	uint64_t x538 = 3887426789075019LLU;
	volatile uint32_t x539 = 1386U;
	uint8_t x540 = 1U;
	volatile uint64_t t132 = 163134944559153LLU;

    t132 = ((x537&(x538&x539))%x540);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x543 = INT16_MIN;
	static int32_t x544 = INT32_MIN;
	int64_t t133 = -130031423LL;

    t133 = ((x541&(x542&x543))%x544);

    if (t133 != 285769728LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x545 = UINT8_MAX;
	volatile uint32_t x546 = UINT32_MAX;
	uint64_t x547 = 1385167269LLU;
	int16_t x548 = INT16_MAX;

    t134 = ((x545&(x546&x547))%x548);

    if (t134 != 165LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x550 = UINT16_MAX;
	uint16_t x551 = UINT16_MAX;
	int64_t x552 = INT64_MAX;
	int64_t t135 = 3LL;

    t135 = ((x549&(x550&x551))%x552);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x553 = -61;
	int64_t x554 = INT64_MIN;
	static int16_t x555 = 14349;
	uint16_t x556 = UINT16_MAX;
	int64_t t136 = -22992LL;

    t136 = ((x553&(x554&x555))%x556);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x558 = INT16_MIN;
	static int32_t x559 = -54423;
	static int8_t x560 = INT8_MIN;
	int64_t t137 = -94896197377565330LL;

    t137 = ((x557&(x558&x559))%x560);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x561 = 179180U;
	volatile int8_t x562 = -1;
	int64_t x563 = INT64_MIN;
	int32_t x564 = -2;

    t138 = ((x561&(x562&x563))%x564);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x567 = 2U;
	int32_t t139 = 201866569;

    t139 = ((x565&(x566&x567))%x568);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x570 = 33462U;
	uint32_t x571 = UINT32_MAX;
	volatile int8_t x572 = 1;
	static volatile int64_t t140 = 297123325013LL;

    t140 = ((x569&(x570&x571))%x572);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x573 = INT64_MAX;
	static uint8_t x574 = UINT8_MAX;
	int64_t x575 = INT64_MIN;
	volatile int64_t t141 = -58221289LL;

    t141 = ((x573&(x574&x575))%x576);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x578 = 1034100266836LL;
	static int16_t x579 = 0;
	volatile int8_t x580 = INT8_MIN;
	volatile int64_t t142 = 58450LL;

    t142 = ((x577&(x578&x579))%x580);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x581 = INT32_MIN;
	static int64_t x582 = INT64_MIN;
	int8_t x583 = 0;
	static int64_t t143 = -9LL;

    t143 = ((x581&(x582&x583))%x584);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x585 = 6704925525314766LLU;
	int64_t x586 = -1LL;
	uint32_t x587 = 26U;
	uint8_t x588 = 21U;
	uint64_t t144 = 5035LLU;

    t144 = ((x585&(x586&x587))%x588);

    if (t144 != 10LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x589 = INT32_MIN;
	uint64_t x592 = UINT64_MAX;
	uint64_t t145 = 436410671LLU;

    t145 = ((x589&(x590&x591))%x592);

    if (t145 != 122406567936LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x594 = UINT64_MAX;
	static uint64_t x595 = 8966453484041039LLU;
	uint64_t t146 = 268117193436LLU;

    t146 = ((x593&(x594&x595))%x596);

    if (t146 != 8966453484041039LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x597 = INT32_MIN;
	int64_t x598 = -1LL;
	static volatile int16_t x599 = -1;
	int32_t x600 = INT32_MIN;
	int64_t t147 = 14127606LL;

    t147 = ((x597&(x598&x599))%x600);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x602 = 73349LLU;
	static int16_t x603 = 0;
	uint64_t t148 = 12330582689520LLU;

    t148 = ((x601&(x602&x603))%x604);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x605 = -184;
	int8_t x606 = -1;
	volatile uint8_t x607 = 2U;
	static volatile uint16_t x608 = 64U;
	volatile int32_t t149 = -6;

    t149 = ((x605&(x606&x607))%x608);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x611 = INT64_MIN;
	int8_t x612 = INT8_MIN;
	int64_t t150 = 4354914900426348LL;

    t150 = ((x609&(x610&x611))%x612);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x613 = INT64_MIN;
	uint64_t x615 = 5109833011LLU;
	int16_t x616 = -1;
	uint64_t t151 = 3989723889377048830LLU;

    t151 = ((x613&(x614&x615))%x616);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x620 = INT8_MAX;

    t152 = ((x617&(x618&x619))%x620);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x621 = 15302784LLU;
	uint64_t x622 = UINT64_MAX;
	uint16_t x623 = 459U;
	uint16_t x624 = 22U;
	static volatile uint64_t t153 = 24536322LLU;

    t153 = ((x621&(x622&x623))%x624);

    if (t153 != 18LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x625 = INT64_MIN;
	volatile int32_t x626 = -1;
	int64_t x627 = 0LL;
	uint32_t x628 = 231U;
	int64_t t154 = -8907LL;

    t154 = ((x625&(x626&x627))%x628);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = INT8_MIN;
	uint8_t x630 = 77U;
	volatile uint16_t x631 = 6U;
	uint32_t x632 = 1U;
	uint32_t t155 = 117910U;

    t155 = ((x629&(x630&x631))%x632);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x633 = 89519LLU;
	int32_t x636 = INT32_MAX;
	uint64_t t156 = 95160LLU;

    t156 = ((x633&(x634&x635))%x636);

    if (t156 != 81920LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x638 = -3;
	int64_t x639 = 12466LL;
	static uint8_t x640 = UINT8_MAX;
	volatile int64_t t157 = 42872LL;

    t157 = ((x637&(x638&x639))%x640);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x641 = 89U;
	uint16_t x643 = UINT16_MAX;
	int32_t x644 = INT32_MIN;

    t158 = ((x641&(x642&x643))%x644);

    if (t158 != 25U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = -6;
	int64_t x646 = -36541891LL;
	int16_t x648 = INT16_MIN;

    t159 = ((x645&(x646&x647))%x648);

    if (t159 != -5632LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x649 = 16U;
	volatile int32_t x650 = -4019367;
	static uint8_t x651 = UINT8_MAX;
	int16_t x652 = INT16_MIN;
	volatile int32_t t160 = -92558370;

    t160 = ((x649&(x650&x651))%x652);

    if (t160 != 16) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x653 = INT8_MIN;
	int8_t x654 = INT8_MIN;
	uint32_t x655 = 2U;
	int16_t x656 = INT16_MIN;
	static uint32_t t161 = 12476U;

    t161 = ((x653&(x654&x655))%x656);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x657 = 1U;
	int64_t x658 = INT64_MIN;
	int16_t x659 = INT16_MAX;
	int32_t x660 = INT32_MIN;

    t162 = ((x657&(x658&x659))%x660);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = -1;
	int16_t x663 = -1;
	int16_t x664 = INT16_MAX;
	volatile uint64_t t163 = 1073781887394LLU;

    t163 = ((x661&(x662&x663))%x664);

    if (t163 != 15LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = -1;
	int64_t x668 = 123LL;
	int64_t t164 = 100016598LL;

    t164 = ((x665&(x666&x667))%x668);

    if (t164 != -64LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = -2;
	int8_t x671 = INT8_MAX;
	int64_t t165 = -22LL;

    t165 = ((x669&(x670&x671))%x672);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile uint8_t x674 = 1U;
	volatile uint16_t x675 = UINT16_MAX;
	uint64_t t166 = 1LLU;

    t166 = ((x673&(x674&x675))%x676);

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MAX;

    t167 = ((x677&(x678&x679))%x680);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x681 = 0;
	int8_t x684 = 12;
	int32_t t168 = 12069499;

    t168 = ((x681&(x682&x683))%x684);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x687 = INT8_MAX;
	int32_t x688 = 1;
	uint64_t t169 = 65115866474LLU;

    t169 = ((x685&(x686&x687))%x688);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x690 = -1;
	uint64_t x691 = 445119LLU;
	int32_t x692 = -160649;
	volatile uint64_t t170 = 2LLU;

    t170 = ((x689&(x690&x691))%x692);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x693 = INT32_MIN;
	volatile int32_t x694 = -8;
	int32_t x695 = 535;
	static volatile uint64_t t171 = 22LLU;

    t171 = ((x693&(x694&x695))%x696);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x697 = -4;
	uint16_t x699 = 25611U;
	int16_t x700 = INT16_MAX;
	static int64_t t172 = -87LL;

    t172 = ((x697&(x698&x699))%x700);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x701 = INT8_MAX;
	volatile uint64_t x703 = 467961259731LLU;
	int16_t x704 = INT16_MAX;
	volatile uint64_t t173 = 2197239659666769LLU;

    t173 = ((x701&(x702&x703))%x704);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x707 = 85U;
	volatile uint32_t x708 = 23372U;
	volatile uint32_t t174 = 16006U;

    t174 = ((x705&(x706&x707))%x708);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x709 = 7228U;
	int8_t x710 = INT8_MAX;
	int16_t x711 = -1;
	uint32_t x712 = UINT32_MAX;

    t175 = ((x709&(x710&x711))%x712);

    if (t175 != 60U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x713 = INT64_MIN;
	static uint32_t x715 = 179055400U;
	static int16_t x716 = -31;
	int64_t t176 = -22351516473227404LL;

    t176 = ((x713&(x714&x715))%x716);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = -1;
	int16_t x719 = -1;
	uint64_t t177 = 263660LLU;

    t177 = ((x717&(x718&x719))%x720);

    if (t177 != 289611158183LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x721 = INT64_MIN;
	static int64_t x722 = 6200786852388371LL;
	uint64_t x723 = 200652674LLU;
	int64_t x724 = INT64_MAX;
	uint64_t t178 = 13LLU;

    t178 = ((x721&(x722&x723))%x724);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x726 = 1070;
	static volatile int8_t x727 = 1;

    t179 = ((x725&(x726&x727))%x728);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x729 = -1;
	volatile int32_t x730 = INT32_MAX;
	int32_t x731 = 3;
	int16_t x732 = -56;
	static volatile int32_t t180 = -50308;

    t180 = ((x729&(x730&x731))%x732);

    if (t180 != 3) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x733 = -34;
	int16_t x735 = INT16_MIN;
	int64_t x736 = INT64_MIN;
	int64_t t181 = 228LL;

    t181 = ((x733&(x734&x735))%x736);

    if (t181 != 4294934528LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x737 = -1;
	volatile int32_t x738 = -1;
	uint16_t x739 = 7279U;
	static int16_t x740 = INT16_MAX;

    t182 = ((x737&(x738&x739))%x740);

    if (t182 != 7279) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x741 = 2U;
	int32_t x742 = INT32_MIN;
	static uint16_t x743 = UINT16_MAX;
	int32_t x744 = 53;

    t183 = ((x741&(x742&x743))%x744);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x745 = -1;
	volatile int64_t x746 = 960895833732LL;
	static int64_t x747 = 1093082029990843LL;
	uint32_t x748 = 3629U;

    t184 = ((x745&(x746&x747))%x748);

    if (t184 != 548LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x749 = 1418;
	int64_t x750 = INT64_MAX;
	int64_t x752 = INT64_MAX;

    t185 = ((x749&(x750&x751))%x752);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x753 = INT16_MIN;
	volatile int32_t x754 = INT32_MIN;
	static volatile int8_t x755 = INT8_MAX;
	static int8_t x756 = -1;
	int32_t t186 = -3;

    t186 = ((x753&(x754&x755))%x756);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x757 = 4;
	static uint64_t x758 = UINT64_MAX;
	volatile int64_t x760 = INT64_MIN;
	static volatile uint64_t t187 = 187813036554806LLU;

    t187 = ((x757&(x758&x759))%x760);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x761 = INT16_MIN;
	static uint8_t x762 = 37U;
	int16_t x763 = 205;
	int32_t t188 = 51955090;

    t188 = ((x761&(x762&x763))%x764);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x765 = INT8_MIN;
	volatile int32_t x766 = 322691133;
	int8_t x767 = -1;
	uint8_t x768 = 3U;
	volatile int32_t t189 = -64;

    t189 = ((x765&(x766&x767))%x768);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x772 = -1;
	volatile int64_t t190 = 346LL;

    t190 = ((x769&(x770&x771))%x772);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x773 = -1;
	int16_t x774 = INT16_MIN;
	static volatile uint8_t x775 = 1U;
	int16_t x776 = INT16_MIN;
	volatile int32_t t191 = -5480620;

    t191 = ((x773&(x774&x775))%x776);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x777 = -597014;
	int64_t x779 = INT64_MIN;
	int64_t t192 = -48649054266LL;

    t192 = ((x777&(x778&x779))%x780);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x782 = INT32_MIN;
	uint16_t x783 = 0U;
	uint64_t x784 = 352019345573919LLU;
	static uint64_t t193 = 100351165616763261LLU;

    t193 = ((x781&(x782&x783))%x784);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x785 = 8U;
	int32_t x786 = -1;
	volatile int8_t x787 = -1;

    t194 = ((x785&(x786&x787))%x788);

    if (t194 != 8LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x789 = INT8_MIN;
	volatile int16_t x791 = 11;
	volatile int64_t x792 = INT64_MIN;

    t195 = ((x789&(x790&x791))%x792);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x793 = INT32_MIN;
	static uint64_t x794 = 76LLU;
	int16_t x795 = INT16_MAX;
	int16_t x796 = INT16_MAX;
	volatile uint64_t t196 = 3672347883351LLU;

    t196 = ((x793&(x794&x795))%x796);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x799 = -1LL;
	int64_t t197 = 45940276LL;

    t197 = ((x797&(x798&x799))%x800);

    if (t197 != -4712LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x802 = -15423751997LL;
	int8_t x803 = INT8_MIN;
	volatile int64_t t198 = -1190625LL;

    t198 = ((x801&(x802&x803))%x804);

    if (t198 != -24LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x805 = 1737U;
	uint8_t x806 = UINT8_MAX;
	uint8_t x808 = UINT8_MAX;
	volatile int64_t t199 = 100726116966019LL;

    t199 = ((x805&(x806&x807))%x808);

    if (t199 != 201LL) { NG(); } else { ; }
	
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

