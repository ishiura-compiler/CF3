
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

static uint8_t x5 = UINT8_MAX;
static volatile uint8_t x6 = 27U;
static int8_t x10 = INT8_MIN;
int64_t x11 = 1LL;
volatile int32_t x13 = -1;
int64_t x16 = INT64_MAX;
static int64_t x22 = INT64_MAX;
volatile uint16_t x23 = UINT16_MAX;
int32_t x25 = 115435;
static uint8_t x26 = 3U;
int64_t x31 = INT64_MIN;
volatile int32_t t8 = 4177;
int16_t x42 = -8761;
int64_t t10 = -68365646073875LL;
int8_t x47 = INT8_MIN;
volatile int32_t t11 = 7711;
static int32_t x49 = 3419911;
int16_t x50 = INT16_MAX;
static int64_t x51 = INT64_MAX;
static int8_t x60 = INT8_MIN;
static int64_t t14 = 486LL;
int8_t x68 = INT8_MIN;
uint32_t x73 = UINT32_MAX;
volatile int64_t x75 = INT64_MAX;
uint32_t x76 = 124480195U;
static int64_t x78 = 44LL;
static int32_t x80 = INT32_MIN;
volatile int32_t t19 = INT32_MIN;
int64_t x81 = -1LL;
uint32_t x82 = UINT32_MAX;
uint32_t x84 = UINT32_MAX;
uint32_t x87 = 19031U;
volatile uint32_t x88 = UINT32_MAX;
int32_t x89 = -1;
int32_t t22 = -181;
volatile int64_t t23 = -9696LL;
int64_t x106 = INT64_MIN;
uint8_t x107 = 98U;
uint8_t x109 = UINT8_MAX;
int8_t x123 = INT8_MAX;
uint8_t x127 = 73U;
uint16_t x128 = UINT16_MAX;
volatile int32_t t31 = -1;
uint64_t x129 = 2601231761474LLU;
static uint32_t x133 = 66118U;
uint64_t x135 = UINT64_MAX;
int16_t x137 = -1;
uint8_t x144 = UINT8_MAX;
int8_t x145 = -1;
int16_t x146 = INT16_MIN;
uint64_t x147 = UINT64_MAX;
uint8_t x151 = 18U;
uint64_t x153 = 7405LLU;
volatile int64_t x156 = INT64_MIN;
volatile int64_t t38 = INT64_MIN;
uint8_t x160 = 4U;
uint64_t t41 = 18LLU;
int16_t x172 = INT16_MIN;
int64_t t42 = 7654604LL;
static int16_t x175 = -1;
int8_t x186 = INT8_MIN;
volatile int32_t t46 = INT32_MIN;
int16_t x199 = 29;
int32_t x200 = INT32_MIN;
uint64_t x203 = 50LLU;
static int16_t x208 = INT16_MIN;
uint64_t x212 = 6296356293853188935LLU;
volatile uint64_t t52 = 1LLU;
volatile uint32_t t54 = 2798U;
volatile int64_t x232 = INT64_MIN;
static uint32_t x236 = 185710563U;
uint32_t t59 = 145726U;
uint64_t x244 = 32950893928619LLU;
int8_t x246 = INT8_MIN;
int64_t x249 = -1LL;
static int8_t x254 = INT8_MIN;
int8_t x273 = INT8_MIN;
volatile int8_t x278 = INT8_MAX;
uint32_t x287 = 8068U;
volatile uint8_t x290 = 20U;
static int8_t x297 = 0;
static int32_t x306 = -1;
volatile uint64_t x307 = 2188793323755LLU;
uint8_t x316 = 18U;
int64_t x321 = -1LL;
int32_t x328 = INT32_MIN;
int32_t t80 = INT32_MIN;
volatile uint16_t x338 = 128U;
volatile int8_t x349 = 0;
int16_t x354 = 36;
int8_t x356 = -4;
static volatile int64_t t89 = 29088LL;
uint8_t x366 = 19U;
uint64_t x367 = 792955194338LLU;
volatile int32_t x379 = 406147678;
int64_t x382 = INT64_MAX;
uint32_t x383 = 1437542863U;
static uint32_t x384 = 1108104U;
int16_t x386 = -7784;
int64_t x389 = 6672820771661LL;
volatile int64_t t96 = 79LL;
static uint64_t x394 = 976732LLU;
static int32_t x395 = INT32_MAX;
static volatile int64_t t99 = INT64_MIN;
volatile int32_t t100 = -411;
uint16_t x428 = UINT16_MAX;
uint16_t x435 = 1U;
int32_t t110 = 1;
int32_t t111 = 2899;
int64_t t112 = 126055346036712LL;
int16_t x466 = INT16_MIN;
volatile uint32_t t114 = 91709926U;
int32_t x472 = INT32_MIN;
volatile int16_t x476 = INT16_MIN;
volatile int32_t t116 = -676763425;
static int64_t x480 = INT64_MIN;
int32_t x487 = INT32_MAX;
int32_t t119 = -2;
static volatile int16_t x500 = INT16_MIN;
int64_t x502 = -1LL;
int64_t x504 = 3922LL;
volatile uint16_t x507 = 127U;
int16_t x510 = INT16_MIN;
static volatile int64_t x511 = INT64_MIN;
int32_t x525 = 263;
int32_t t129 = -107288499;
volatile uint16_t x545 = 3823U;
int16_t x546 = INT16_MIN;
int16_t x549 = INT16_MIN;
int16_t x550 = -31;
int16_t x551 = 213;
int16_t x562 = INT16_MIN;
static int8_t x566 = INT8_MIN;
uint32_t x571 = UINT32_MAX;
int64_t x581 = INT64_MIN;
int32_t t141 = 44501048;
int32_t x589 = 90452;
int32_t x591 = -1;
int32_t x594 = INT32_MIN;
int32_t t145 = 168471955;
uint32_t x603 = 2220U;
volatile int8_t x604 = 3;
volatile int64_t x612 = 185385LL;
volatile uint32_t x617 = 653U;
volatile int64_t x622 = INT64_MIN;
int16_t x623 = -1;
int64_t x625 = 28033LL;
uint16_t x632 = 62U;
static uint32_t x633 = 170204578U;
int32_t x639 = INT32_MAX;
int32_t x644 = -1;
volatile int64_t x658 = 170LL;
int8_t x660 = INT8_MIN;
int16_t x666 = 6;
volatile uint64_t t162 = 2LLU;
int16_t x679 = INT16_MAX;
int64_t x682 = -103LL;
volatile int64_t x685 = INT64_MIN;
int64_t x700 = -3248591791408521LL;
static volatile int64_t t169 = 241LL;
static int64_t x706 = 14596645074LL;
int32_t x707 = -1;
uint8_t x714 = 14U;
int32_t x715 = -1;
static volatile int8_t x718 = INT8_MIN;
volatile uint32_t x721 = 15688U;
volatile int16_t x723 = INT16_MAX;
static int16_t x726 = -1;
volatile int32_t t177 = -20;
uint32_t x743 = UINT32_MAX;
int16_t x746 = INT16_MAX;
int8_t x751 = INT8_MIN;
uint32_t x753 = 1426940486U;
int64_t x754 = INT64_MAX;
int16_t x755 = 4981;
volatile int64_t t182 = 462631168LL;
int32_t t183 = 69;
int16_t x763 = INT16_MIN;
uint64_t x772 = UINT64_MAX;
volatile uint32_t x773 = 3667U;
volatile int64_t x781 = INT64_MIN;
int16_t x785 = INT16_MIN;
int8_t x798 = 4;
int16_t x800 = 1;
volatile int64_t t193 = 1009LL;
static uint16_t x805 = 692U;
int64_t t195 = 2LL;
static int8_t x812 = INT8_MAX;
volatile uint32_t x822 = UINT32_MAX;
static int64_t x825 = INT64_MAX;
int64_t x827 = 2008LL;


void f0(void) {
    	volatile uint16_t x1 = 1U;
	static int16_t x2 = -1403;
	uint32_t x3 = UINT32_MAX;
	volatile uint32_t x4 = 33274U;
	volatile uint32_t t0 = 1404193U;

    t0 = (((x1!=x2)/x3)^x4);

    if (t0 != 33274U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x7 = 494U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -33;

    t1 = (((x5!=x6)/x7)^x8);

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = 378;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = -125261LL;

    t2 = (((x9!=x10)/x11)^x12);

    if (t2 != 65534LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MAX;
	volatile int64_t t3 = INT64_MAX;

    t3 = (((x13!=x14)/x15)^x16);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -518078889943387034LL;
	uint8_t x18 = 63U;
	uint16_t x19 = UINT16_MAX;
	volatile uint32_t x20 = 6694U;
	volatile uint32_t t4 = 70428U;

    t4 = (((x17!=x18)/x19)^x20);

    if (t4 != 6694U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 8212277LLU;
	static volatile uint32_t x24 = 191348471U;
	volatile uint32_t t5 = 308235026U;

    t5 = (((x21!=x22)/x23)^x24);

    if (t5 != 191348471U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x27 = 1061LL;
	int16_t x28 = INT16_MIN;
	int64_t t6 = 522860902LL;

    t6 = (((x25!=x26)/x27)^x28);

    if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static int32_t x30 = INT32_MAX;
	uint64_t x32 = 52522785LLU;
	uint64_t t7 = 77737LLU;

    t7 = (((x29!=x30)/x31)^x32);

    if (t7 != 52522785LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 61687366U;
	volatile uint64_t x34 = 775397612095871421LLU;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = 0;

    t8 = (((x33!=x34)/x35)^x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = INT16_MIN;
	int64_t x39 = 600807110LL;
	int8_t x40 = INT8_MAX;
	int64_t t9 = 4312901158LL;

    t9 = (((x37!=x38)/x39)^x40);

    if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	volatile int64_t x43 = INT64_MIN;
	uint16_t x44 = 6673U;

    t10 = (((x41!=x42)/x43)^x44);

    if (t10 != 6673LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	volatile uint32_t x46 = 159219520U;
	static int16_t x48 = -1;

    t11 = (((x45!=x46)/x47)^x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x52 = 183100082961958282LLU;
	uint64_t t12 = 1718459405133161218LLU;

    t12 = (((x49!=x50)/x51)^x52);

    if (t12 != 183100082961958282LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	int64_t x55 = INT64_MAX;
	int8_t x56 = -1;
	volatile int64_t t13 = -3746638919LL;

    t13 = (((x53!=x54)/x55)^x56);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MIN;
	int64_t x59 = 247LL;

    t14 = (((x57!=x58)/x59)^x60);

    if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 37U;
	int16_t x62 = 4;
	int32_t x63 = 5;
	volatile int32_t x64 = -1;
	volatile int32_t t15 = 681312799;

    t15 = (((x61!=x62)/x63)^x64);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -439690;
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MAX;
	volatile int32_t t16 = -15461816;

    t16 = (((x65!=x66)/x67)^x68);

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	static int64_t x70 = INT64_MIN;
	int8_t x71 = 30;
	static int32_t x72 = -1054933;
	int32_t t17 = -5680;

    t17 = (((x69!=x70)/x71)^x72);

    if (t17 != -1054933) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -23;
	volatile int64_t t18 = 63991434366LL;

    t18 = (((x73!=x74)/x75)^x76);

    if (t18 != 124480195LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x77 = 3U;
	uint16_t x79 = 16289U;

    t19 = (((x77!=x78)/x79)^x80);

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x83 = -114;
	volatile uint32_t t20 = UINT32_MAX;

    t20 = (((x81!=x82)/x83)^x84);

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint32_t x86 = 1399706U;
	volatile uint32_t t21 = UINT32_MAX;

    t21 = (((x85!=x86)/x87)^x88);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = 3U;
	static uint16_t x91 = 98U;
	int16_t x92 = 1;

    t22 = (((x89!=x90)/x91)^x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	volatile int8_t x94 = INT8_MIN;
	volatile int32_t x95 = 19672571;
	int64_t x96 = -230528811LL;

    t23 = (((x93!=x94)/x95)^x96);

    if (t23 != -230528811LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 1843869948847LLU;
	int32_t x98 = 24;
	int16_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 16330LLU;

    t24 = (((x97!=x98)/x99)^x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 4U;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	static volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

    t25 = (((x101!=x102)/x103)^x104);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 55831;
	volatile int8_t x108 = 1;
	volatile int32_t t26 = -4;

    t26 = (((x105!=x106)/x107)^x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -1024978052LL;
	int8_t x111 = 1;
	uint64_t x112 = 218342045206309LLU;
	volatile uint64_t t27 = 1297172176LLU;

    t27 = (((x109!=x110)/x111)^x112);

    if (t27 != 218342045206308LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MAX;
	int16_t x114 = -1;
	uint64_t x115 = 21759LLU;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

    t28 = (((x113!=x114)/x115)^x116);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	static int8_t x119 = -9;
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = -100093;

    t29 = (((x117!=x118)/x119)^x120);

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MIN;
	int64_t x122 = -1LL;
	int8_t x124 = -1;
	volatile int32_t t30 = -7085;

    t30 = (((x121!=x122)/x123)^x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 841U;
	volatile uint8_t x126 = 28U;

    t31 = (((x125!=x126)/x127)^x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x130 = UINT32_MAX;
	int16_t x131 = -21;
	static int16_t x132 = INT16_MAX;
	volatile int32_t t32 = 280150;

    t32 = (((x129!=x130)/x131)^x132);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

    t33 = (((x133!=x134)/x135)^x136);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x138 = INT8_MAX;
	int32_t x139 = -1;
	uint32_t x140 = 12802U;
	volatile uint32_t t34 = 14U;

    t34 = (((x137!=x138)/x139)^x140);

    if (t34 != 4294954493U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = -1LL;
	int32_t x142 = -1;
	int64_t x143 = INT64_MAX;
	volatile int64_t t35 = 109920447547183532LL;

    t35 = (((x141!=x142)/x143)^x144);

    if (t35 != 255LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x148 = 585159016U;
	volatile uint64_t t36 = 16294433572LLU;

    t36 = (((x145!=x146)/x147)^x148);

    if (t36 != 585159016LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	volatile int8_t x152 = -1;
	int32_t t37 = -50;

    t37 = (((x149!=x150)/x151)^x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	volatile uint32_t x155 = 11066U;

    t38 = (((x153!=x154)/x155)^x156);

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -1;
	uint8_t x158 = 1U;
	int16_t x159 = 11227;
	static volatile int32_t t39 = -214;

    t39 = (((x157!=x158)/x159)^x160);

    if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = 27632856;
	uint8_t x162 = 29U;
	int32_t x163 = 916225;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -188382341;

    t40 = (((x161!=x162)/x163)^x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 56730536701LL;
	uint32_t x166 = 386U;
	uint64_t x167 = 3189429LLU;
	volatile uint8_t x168 = 0U;

    t41 = (((x165!=x166)/x167)^x168);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 227LLU;
	uint64_t x170 = 236509179500737LLU;
	int64_t x171 = INT64_MIN;

    t42 = (((x169!=x170)/x171)^x172);

    if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 1U;
	int64_t x174 = 2669LL;
	int32_t x176 = 173;
	volatile int32_t t43 = 915;

    t43 = (((x173!=x174)/x175)^x176);

    if (t43 != -174) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 9U;
	int32_t x178 = -2003216;
	volatile int16_t x179 = -29;
	uint32_t x180 = 1079934308U;
	volatile uint32_t t44 = 3030245U;

    t44 = (((x177!=x178)/x179)^x180);

    if (t44 != 1079934308U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = -1LL;
	volatile uint32_t x182 = 14U;
	int64_t x183 = -1LL;
	volatile uint64_t x184 = 26744064236035LLU;
	uint64_t t45 = 357681394LLU;

    t45 = (((x181!=x182)/x183)^x184);

    if (t45 != 18446717329645315580LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 118U;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;

    t46 = (((x185!=x186)/x187)^x188);

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	int8_t x192 = -1;
	int64_t t47 = 118LL;

    t47 = (((x189!=x190)/x191)^x192);

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	static int32_t x194 = INT32_MIN;
	int8_t x195 = -25;
	volatile int64_t x196 = -1LL;
	volatile int64_t t48 = 963251920352861LL;

    t48 = (((x193!=x194)/x195)^x196);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = 4U;
	static int8_t x198 = -1;
	volatile int32_t t49 = INT32_MIN;

    t49 = (((x197!=x198)/x199)^x200);

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	uint8_t x202 = UINT8_MAX;
	int32_t x204 = INT32_MIN;
	static uint64_t t50 = 387572215754785LLU;

    t50 = (((x201!=x202)/x203)^x204);

    if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MAX;
	int16_t x206 = 1;
	int64_t x207 = INT64_MIN;
	int64_t t51 = -1065014167014176500LL;

    t51 = (((x205!=x206)/x207)^x208);

    if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	volatile int64_t x210 = 13328377521720943LL;
	static int8_t x211 = -27;

    t52 = (((x209!=x210)/x211)^x212);

    if (t52 != 6296356293853188935LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x214 = 2;
	static int16_t x215 = INT16_MAX;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t53 = 0;

    t53 = (((x213!=x214)/x215)^x216);

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	static int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MIN;
	volatile uint32_t x220 = 85937369U;

    t54 = (((x217!=x218)/x219)^x220);

    if (t54 != 85937369U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	volatile int64_t x222 = -1LL;
	uint32_t x223 = UINT32_MAX;
	volatile int16_t x224 = INT16_MIN;
	uint32_t t55 = 63U;

    t55 = (((x221!=x222)/x223)^x224);

    if (t55 != 4294934528U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MAX;
	static int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 1;

    t56 = (((x225!=x226)/x227)^x228);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MIN;
	volatile int64_t x230 = INT64_MAX;
	int32_t x231 = INT32_MIN;
	int64_t t57 = INT64_MIN;

    t57 = (((x229!=x230)/x231)^x232);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 0U;
	static volatile int8_t x234 = -2;
	int64_t x235 = 7364LL;
	volatile int64_t t58 = -10212LL;

    t58 = (((x233!=x234)/x235)^x236);

    if (t58 != 185710563LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	static int64_t x238 = -338373795LL;
	static uint32_t x239 = 216635U;
	int8_t x240 = 0;

    t59 = (((x237!=x238)/x239)^x240);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	static int32_t x243 = 24;
	volatile uint64_t t60 = 37424847838LLU;

    t60 = (((x241!=x242)/x243)^x244);

    if (t60 != 32950893928619LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = -8253772082543493LL;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t61 = UINT32_MAX;

    t61 = (((x245!=x246)/x247)^x248);

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = INT64_MAX;
	static int8_t x251 = INT8_MIN;
	volatile int16_t x252 = 115;
	volatile int32_t t62 = 129558;

    t62 = (((x249!=x250)/x251)^x252);

    if (t62 != 115) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	static int32_t x255 = 1665024;
	static volatile int16_t x256 = -602;
	static int32_t t63 = 0;

    t63 = (((x253!=x254)/x255)^x256);

    if (t63 != -602) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	static volatile int32_t t64 = INT32_MIN;

    t64 = (((x261!=x262)/x263)^x264);

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	static int64_t x267 = INT64_MAX;
	int64_t x268 = 895102LL;
	static volatile int64_t t65 = 0LL;

    t65 = (((x265!=x266)/x267)^x268);

    if (t65 != 895102LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = 54;
	volatile int64_t x270 = -4703683LL;
	int64_t x271 = -1LL;
	volatile uint64_t x272 = 405LLU;
	volatile uint64_t t66 = 7963LLU;

    t66 = (((x269!=x270)/x271)^x272);

    if (t66 != 18446744073709551210LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x274 = 28U;
	static volatile int8_t x275 = 3;
	volatile int32_t x276 = INT32_MIN;
	volatile int32_t t67 = INT32_MIN;

    t67 = (((x273!=x274)/x275)^x276);

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int16_t x280 = -1;
	int32_t t68 = 2890252;

    t68 = (((x277!=x278)/x279)^x280);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = 0;
	volatile int8_t x282 = INT8_MAX;
	uint8_t x283 = 14U;
	static int64_t x284 = INT64_MIN;
	int64_t t69 = INT64_MIN;

    t69 = (((x281!=x282)/x283)^x284);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x285 = INT32_MAX;
	uint32_t x286 = 10U;
	int8_t x288 = 12;
	static volatile uint32_t t70 = 13U;

    t70 = (((x285!=x286)/x287)^x288);

    if (t70 != 12U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = 4;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t x292 = INT32_MAX;
	int32_t t71 = INT32_MAX;

    t71 = (((x289!=x290)/x291)^x292);

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = -199908LL;
	static int64_t x294 = INT64_MIN;
	volatile int64_t x295 = 61309762249630967LL;
	volatile int16_t x296 = INT16_MAX;
	int64_t t72 = 337196LL;

    t72 = (((x293!=x294)/x295)^x296);

    if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x298 = 370241U;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	static volatile int64_t t73 = 670305LL;

    t73 = (((x297!=x298)/x299)^x300);

    if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = 456899;
	static int64_t x303 = INT64_MAX;
	uint32_t x304 = 0U;
	volatile int64_t t74 = 749LL;

    t74 = (((x301!=x302)/x303)^x304);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x308 = INT16_MIN;
	static volatile uint64_t t75 = 192132203LLU;

    t75 = (((x305!=x306)/x307)^x308);

    if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x309 = -3;
	int32_t x310 = 3101945;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = -1;
	int32_t t76 = -2;

    t76 = (((x309!=x310)/x311)^x312);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = INT64_MIN;
	uint16_t x314 = UINT16_MAX;
	volatile uint8_t x315 = 2U;
	volatile int32_t t77 = 151942831;

    t77 = (((x313!=x314)/x315)^x316);

    if (t77 != 18) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = INT64_MAX;
	uint16_t x318 = 361U;
	uint64_t x319 = UINT64_MAX;
	static int8_t x320 = INT8_MIN;
	uint64_t t78 = 62378502LLU;

    t78 = (((x317!=x318)/x319)^x320);

    if (t78 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	volatile int32_t x324 = -1;
	int32_t t79 = -117;

    t79 = (((x321!=x322)/x323)^x324);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x325 = -1;
	int16_t x326 = INT16_MIN;
	volatile uint8_t x327 = UINT8_MAX;

    t80 = (((x325!=x326)/x327)^x328);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = -1;
	static volatile int64_t x330 = INT64_MIN;
	volatile int16_t x331 = -1;
	int32_t x332 = INT32_MAX;
	int32_t t81 = INT32_MIN;

    t81 = (((x329!=x330)/x331)^x332);

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = -14502967;
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = -56251;
	static volatile int16_t x336 = -13;
	int32_t t82 = 414237;

    t82 = (((x333!=x334)/x335)^x336);

    if (t82 != -13) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = -8;
	uint8_t x339 = 4U;
	int8_t x340 = 22;
	volatile int32_t t83 = -884963090;

    t83 = (((x337!=x338)/x339)^x340);

    if (t83 != 22) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x341 = 405259465U;
	static volatile uint32_t x342 = 9423U;
	int64_t x343 = -1LL;
	int8_t x344 = 22;
	int64_t t84 = 7LL;

    t84 = (((x341!=x342)/x343)^x344);

    if (t84 != -23LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = INT8_MIN;
	static uint64_t x346 = 234596LLU;
	int16_t x347 = INT16_MAX;
	static int64_t x348 = INT64_MIN;
	int64_t t85 = INT64_MIN;

    t85 = (((x345!=x346)/x347)^x348);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x350 = 10U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = 1019;
	int32_t t86 = -595154;

    t86 = (((x349!=x350)/x351)^x352);

    if (t86 != 1019) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = 123;
	int32_t x355 = INT32_MIN;
	volatile int32_t t87 = 9;

    t87 = (((x353!=x354)/x355)^x356);

    if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x357 = 0;
	volatile int16_t x358 = -1;
	int32_t x359 = 978529;
	uint8_t x360 = 42U;
	int32_t t88 = -13;

    t88 = (((x357!=x358)/x359)^x360);

    if (t88 != 42) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MIN;
	int16_t x362 = -414;
	volatile uint8_t x363 = 5U;
	static int64_t x364 = 254LL;

    t89 = (((x361!=x362)/x363)^x364);

    if (t89 != 254LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = -1;
	volatile int16_t x368 = 1;
	uint64_t t90 = 296510409041LLU;

    t90 = (((x365!=x366)/x367)^x368);

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = INT64_MIN;
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = 1165U;
	int8_t x372 = INT8_MIN;
	uint32_t t91 = 14940249U;

    t91 = (((x369!=x370)/x371)^x372);

    if (t91 != 4294967168U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x373 = 132988550LLU;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = UINT8_MAX;
	static volatile uint8_t x376 = 20U;
	static volatile int32_t t92 = -11;

    t92 = (((x373!=x374)/x375)^x376);

    if (t92 != 20) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x377 = 2LLU;
	static int64_t x378 = -1LL;
	uint32_t x380 = 2010666U;
	uint32_t t93 = 115088059U;

    t93 = (((x377!=x378)/x379)^x380);

    if (t93 != 2010666U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = -36;
	uint32_t t94 = 3390187U;

    t94 = (((x381!=x382)/x383)^x384);

    if (t94 != 1108104U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x385 = INT16_MIN;
	volatile int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MAX;
	volatile int64_t t95 = INT64_MAX;

    t95 = (((x385!=x386)/x387)^x388);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x390 = 93;
	int64_t x391 = -12953LL;
	int32_t x392 = INT32_MAX;

    t96 = (((x389!=x390)/x391)^x392);

    if (t96 != 2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = -5;
	uint8_t x396 = 0U;
	static volatile int32_t t97 = -191615;

    t97 = (((x393!=x394)/x395)^x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = 1;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = 322U;
	static uint32_t x400 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

    t98 = (((x397!=x398)/x399)^x400);

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x401 = 7U;
	int32_t x402 = -390;
	int64_t x403 = 443118277368045437LL;
	int64_t x404 = INT64_MIN;

    t99 = (((x401!=x402)/x403)^x404);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x405 = -28;
	static int16_t x406 = -8;
	int32_t x407 = -170810;
	int16_t x408 = INT16_MAX;

    t100 = (((x405!=x406)/x407)^x408);

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x409 = -1;
	static uint8_t x410 = 1U;
	int32_t x411 = INT32_MIN;
	static int8_t x412 = INT8_MIN;
	int32_t t101 = -105181372;

    t101 = (((x409!=x410)/x411)^x412);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x414 = 0;
	int32_t x415 = 247498142;
	uint64_t x416 = 65292724LLU;
	volatile uint64_t t102 = 4508230042977LLU;

    t102 = (((x413!=x414)/x415)^x416);

    if (t102 != 65292724LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x417 = -1LL;
	int32_t x418 = 52038455;
	uint16_t x419 = 102U;
	volatile int32_t x420 = 128;
	int32_t t103 = 28;

    t103 = (((x417!=x418)/x419)^x420);

    if (t103 != 128) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x421 = UINT64_MAX;
	uint16_t x422 = UINT16_MAX;
	static volatile uint16_t x423 = 42U;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t104 = -1;

    t104 = (((x421!=x422)/x423)^x424);

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x425 = 266U;
	volatile uint32_t x426 = 4078U;
	int64_t x427 = INT64_MAX;
	int64_t t105 = -5318249249LL;

    t105 = (((x425!=x426)/x427)^x428);

    if (t105 != 65535LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x429 = -1;
	int64_t x430 = INT64_MIN;
	static uint64_t x431 = 58170062960LLU;
	int16_t x432 = INT16_MIN;
	volatile uint64_t t106 = 54965567LLU;

    t106 = (((x429!=x430)/x431)^x432);

    if (t106 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = -2;
	int8_t x434 = INT8_MAX;
	int8_t x436 = INT8_MAX;
	volatile int32_t t107 = -31615906;

    t107 = (((x433!=x434)/x435)^x436);

    if (t107 != 126) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x441 = INT8_MAX;
	int32_t x442 = -1;
	volatile uint8_t x443 = UINT8_MAX;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t108 = -6809800;

    t108 = (((x441!=x442)/x443)^x444);

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = INT32_MIN;
	static int16_t x446 = INT16_MAX;
	volatile int32_t x447 = -4038748;
	uint16_t x448 = 1789U;
	volatile int32_t t109 = 1546;

    t109 = (((x445!=x446)/x447)^x448);

    if (t109 != 1789) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x449 = 1238855667624LLU;
	volatile uint16_t x450 = UINT16_MAX;
	volatile int8_t x451 = 14;
	static int16_t x452 = INT16_MAX;

    t110 = (((x449!=x450)/x451)^x452);

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x453 = INT16_MAX;
	uint8_t x454 = UINT8_MAX;
	volatile int16_t x455 = INT16_MIN;
	uint16_t x456 = 32111U;

    t111 = (((x453!=x454)/x455)^x456);

    if (t111 != 32111) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x457 = 579380072913LLU;
	int16_t x458 = -1;
	int64_t x459 = INT64_MIN;
	volatile uint16_t x460 = UINT16_MAX;

    t112 = (((x457!=x458)/x459)^x460);

    if (t112 != 65535LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x461 = 105486415524933385LL;
	static volatile int32_t x462 = -812;
	int64_t x463 = INT64_MIN;
	volatile uint32_t x464 = 51U;
	volatile int64_t t113 = 386074383837481428LL;

    t113 = (((x461!=x462)/x463)^x464);

    if (t113 != 51LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x465 = INT64_MIN;
	int8_t x467 = -1;
	static uint32_t x468 = 1941390U;

    t114 = (((x465!=x466)/x467)^x468);

    if (t114 != 4293025905U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x469 = UINT32_MAX;
	int64_t x470 = -1LL;
	uint16_t x471 = 3U;
	volatile int32_t t115 = INT32_MIN;

    t115 = (((x469!=x470)/x471)^x472);

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	uint16_t x474 = 1U;
	static int32_t x475 = INT32_MAX;

    t116 = (((x473!=x474)/x475)^x476);

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x477 = 3U;
	int16_t x478 = INT16_MAX;
	uint32_t x479 = UINT32_MAX;
	int64_t t117 = INT64_MIN;

    t117 = (((x477!=x478)/x479)^x480);

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x481 = 84U;
	volatile uint32_t x482 = 46559U;
	int16_t x483 = INT16_MIN;
	volatile uint64_t x484 = 56131180449223LLU;
	volatile uint64_t t118 = 172154926500242124LLU;

    t118 = (((x481!=x482)/x483)^x484);

    if (t118 != 56131180449223LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x485 = 5U;
	uint8_t x486 = UINT8_MAX;
	uint8_t x488 = 8U;

    t119 = (((x485!=x486)/x487)^x488);

    if (t119 != 8) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = -1;
	uint16_t x490 = 11950U;
	uint8_t x491 = UINT8_MAX;
	uint16_t x492 = 122U;
	volatile int32_t t120 = -567701;

    t120 = (((x489!=x490)/x491)^x492);

    if (t120 != 122) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	int32_t x494 = 5459962;
	int32_t x495 = 1634;
	int16_t x496 = 899;
	static int32_t t121 = 15026;

    t121 = (((x493!=x494)/x495)^x496);

    if (t121 != 899) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x497 = INT32_MIN;
	int64_t x498 = -1LL;
	int64_t x499 = INT64_MAX;
	static int64_t t122 = 251486313658896LL;

    t122 = (((x497!=x498)/x499)^x500);

    if (t122 != -32768LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x501 = 1U;
	int16_t x503 = -1;
	static int64_t t123 = 13066236785450LL;

    t123 = (((x501!=x502)/x503)^x504);

    if (t123 != -3923LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x505 = UINT8_MAX;
	volatile int32_t x506 = INT32_MAX;
	volatile int16_t x508 = -1;
	volatile int32_t t124 = -330;

    t124 = (((x505!=x506)/x507)^x508);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x509 = 14U;
	int8_t x512 = INT8_MAX;
	static int64_t t125 = 2239LL;

    t125 = (((x509!=x510)/x511)^x512);

    if (t125 != 127LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x513 = INT32_MAX;
	int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	int8_t x516 = INT8_MAX;
	int32_t t126 = 708;

    t126 = (((x513!=x514)/x515)^x516);

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = INT64_MIN;
	int64_t x522 = INT64_MIN;
	volatile int64_t x523 = INT64_MIN;
	int64_t x524 = INT64_MIN;
	volatile int64_t t127 = INT64_MIN;

    t127 = (((x521!=x522)/x523)^x524);

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x526 = 1785LLU;
	volatile int32_t x527 = -1;
	int32_t x528 = INT32_MIN;
	static int32_t t128 = INT32_MAX;

    t128 = (((x525!=x526)/x527)^x528);

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = INT8_MAX;
	volatile int32_t x530 = INT32_MIN;
	uint8_t x531 = UINT8_MAX;
	uint16_t x532 = 21U;

    t129 = (((x529!=x530)/x531)^x532);

    if (t129 != 21) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x537 = INT16_MAX;
	int32_t x538 = -242618818;
	uint8_t x539 = UINT8_MAX;
	int64_t x540 = -1LL;
	int64_t t130 = 1464911762321060LL;

    t130 = (((x537!=x538)/x539)^x540);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x541 = 6LLU;
	uint64_t x542 = UINT64_MAX;
	volatile int16_t x543 = INT16_MIN;
	int16_t x544 = INT16_MIN;
	volatile int32_t t131 = 756551;

    t131 = (((x541!=x542)/x543)^x544);

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x547 = 46073741U;
	volatile uint32_t x548 = 1U;
	uint32_t t132 = 244545U;

    t132 = (((x545!=x546)/x547)^x548);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x552 = INT8_MIN;
	volatile int32_t t133 = -40809811;

    t133 = (((x549!=x550)/x551)^x552);

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x553 = UINT32_MAX;
	uint64_t x554 = 705223646LLU;
	volatile uint32_t x555 = 108099U;
	int64_t x556 = 26012478LL;
	int64_t t134 = 1940559LL;

    t134 = (((x553!=x554)/x555)^x556);

    if (t134 != 26012478LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	static int32_t x559 = 185011382;
	static volatile int8_t x560 = INT8_MAX;
	static volatile int32_t t135 = 94371933;

    t135 = (((x557!=x558)/x559)^x560);

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x561 = UINT32_MAX;
	int8_t x563 = INT8_MAX;
	static uint64_t x564 = 3527672LLU;
	uint64_t t136 = 7312036494237LLU;

    t136 = (((x561!=x562)/x563)^x564);

    if (t136 != 3527672LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x565 = 1032607U;
	int32_t x567 = INT32_MAX;
	volatile int8_t x568 = -3;
	volatile int32_t t137 = -322;

    t137 = (((x565!=x566)/x567)^x568);

    if (t137 != -3) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x570 = INT16_MAX;
	int64_t x572 = INT64_MIN;
	static int64_t t138 = INT64_MIN;

    t138 = (((x569!=x570)/x571)^x572);

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x573 = 96419U;
	uint32_t x574 = 4861032U;
	int16_t x575 = INT16_MIN;
	int16_t x576 = -1;
	int32_t t139 = -2;

    t139 = (((x573!=x574)/x575)^x576);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x577 = 2U;
	static uint32_t x578 = 14179439U;
	int64_t x579 = INT64_MAX;
	volatile int64_t x580 = INT64_MIN;
	int64_t t140 = INT64_MIN;

    t140 = (((x577!=x578)/x579)^x580);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x582 = INT16_MIN;
	volatile int16_t x583 = -1;
	int16_t x584 = -388;

    t141 = (((x581!=x582)/x583)^x584);

    if (t141 != 387) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = INT8_MAX;
	int64_t x586 = -1LL;
	int16_t x587 = -15973;
	volatile int8_t x588 = -1;
	static int32_t t142 = -620;

    t142 = (((x585!=x586)/x587)^x588);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x590 = -1LL;
	volatile int64_t x592 = -54634321762LL;
	volatile int64_t t143 = 4118655120LL;

    t143 = (((x589!=x590)/x591)^x592);

    if (t143 != 54634321761LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x593 = 0;
	static volatile int32_t x595 = -2;
	volatile uint8_t x596 = 2U;
	volatile int32_t t144 = 860359067;

    t144 = (((x593!=x594)/x595)^x596);

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = 309;
	int64_t x598 = 233265835631LL;
	volatile uint8_t x599 = 1U;
	volatile int8_t x600 = INT8_MAX;

    t145 = (((x597!=x598)/x599)^x600);

    if (t145 != 126) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = -47;
	uint64_t x602 = UINT64_MAX;
	static volatile uint32_t t146 = 0U;

    t146 = (((x601!=x602)/x603)^x604);

    if (t146 != 3U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x605 = 4500249U;
	int64_t x606 = 2080776280LL;
	int16_t x607 = INT16_MIN;
	static int8_t x608 = INT8_MIN;
	volatile int32_t t147 = 588866198;

    t147 = (((x605!=x606)/x607)^x608);

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x609 = 1LL;
	uint16_t x610 = UINT16_MAX;
	int64_t x611 = INT64_MIN;
	static int64_t t148 = 3976LL;

    t148 = (((x609!=x610)/x611)^x612);

    if (t148 != 185385LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x613 = -1;
	static int64_t x614 = INT64_MIN;
	static int8_t x615 = -1;
	int8_t x616 = -1;
	volatile int32_t t149 = 3;

    t149 = (((x613!=x614)/x615)^x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x618 = 2U;
	volatile int64_t x619 = -1LL;
	volatile int32_t x620 = -143257908;
	volatile int64_t t150 = -398549LL;

    t150 = (((x617!=x618)/x619)^x620);

    if (t150 != 143257907LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x621 = 253U;
	static uint64_t x624 = UINT64_MAX;
	volatile uint64_t t151 = 53LLU;

    t151 = (((x621!=x622)/x623)^x624);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x626 = 0U;
	int8_t x627 = -55;
	uint64_t x628 = 545579681396277976LLU;
	volatile uint64_t t152 = 1982288971638LLU;

    t152 = (((x625!=x626)/x627)^x628);

    if (t152 != 545579681396277976LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x629 = 1840LL;
	int16_t x630 = INT16_MAX;
	int8_t x631 = -1;
	volatile int32_t t153 = -47;

    t153 = (((x629!=x630)/x631)^x632);

    if (t153 != -63) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x634 = UINT64_MAX;
	uint16_t x635 = 4U;
	int32_t x636 = -1;
	volatile int32_t t154 = 0;

    t154 = (((x633!=x634)/x635)^x636);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x637 = 81378326LL;
	static uint32_t x638 = UINT32_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t155 = -24;

    t155 = (((x637!=x638)/x639)^x640);

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x641 = UINT32_MAX;
	int8_t x642 = INT8_MAX;
	uint64_t x643 = 4720038LLU;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = (((x641!=x642)/x643)^x644);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x645 = -772758971;
	uint16_t x646 = 1033U;
	int32_t x647 = -1;
	int16_t x648 = INT16_MIN;
	int32_t t157 = 4;

    t157 = (((x645!=x646)/x647)^x648);

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x649 = 563375380007LL;
	static int8_t x650 = 56;
	int16_t x651 = INT16_MIN;
	int32_t x652 = 214531917;
	volatile int32_t t158 = -937238722;

    t158 = (((x649!=x650)/x651)^x652);

    if (t158 != 214531917) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = -2667816309358LL;
	static int64_t x654 = 786576LL;
	volatile int8_t x655 = INT8_MIN;
	int8_t x656 = -1;
	static int32_t t159 = -28298;

    t159 = (((x653!=x654)/x655)^x656);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = INT32_MAX;
	uint64_t x659 = 60619LLU;
	static volatile uint64_t t160 = 29037723LLU;

    t160 = (((x657!=x658)/x659)^x660);

    if (t160 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x661 = -1LL;
	uint64_t x662 = 118LLU;
	int32_t x663 = -1;
	int64_t x664 = -3456483327525886LL;
	int64_t t161 = 21135901LL;

    t161 = (((x661!=x662)/x663)^x664);

    if (t161 != 3456483327525885LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x665 = INT16_MIN;
	int8_t x667 = INT8_MIN;
	static uint64_t x668 = 365101LLU;

    t162 = (((x665!=x666)/x667)^x668);

    if (t162 != 365101LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x669 = INT16_MIN;
	volatile int16_t x670 = INT16_MIN;
	int64_t x671 = -1LL;
	static int16_t x672 = -1;
	static volatile int64_t t163 = -242895549806885LL;

    t163 = (((x669!=x670)/x671)^x672);

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = -1LL;
	uint64_t x678 = 8084035LLU;
	static int16_t x680 = INT16_MIN;
	volatile int32_t t164 = 5730;

    t164 = (((x677!=x678)/x679)^x680);

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = -16438675829LL;
	uint64_t x683 = UINT64_MAX;
	static uint8_t x684 = 1U;
	uint64_t t165 = 423761LLU;

    t165 = (((x681!=x682)/x683)^x684);

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x686 = INT64_MAX;
	int64_t x687 = INT64_MIN;
	int64_t x688 = 452310850662322726LL;
	int64_t t166 = 3461656513LL;

    t166 = (((x685!=x686)/x687)^x688);

    if (t166 != 452310850662322726LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x689 = 4U;
	volatile uint32_t x690 = 6U;
	int64_t x691 = -7817LL;
	uint8_t x692 = 11U;
	int64_t t167 = -176LL;

    t167 = (((x689!=x690)/x691)^x692);

    if (t167 != 11LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x693 = 1;
	int32_t x694 = 830078581;
	static uint32_t x695 = UINT32_MAX;
	int32_t x696 = INT32_MIN;
	uint32_t t168 = 134619440U;

    t168 = (((x693!=x694)/x695)^x696);

    if (t168 != 2147483648U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x697 = INT64_MIN;
	static uint64_t x698 = 1078930272LLU;
	volatile uint16_t x699 = UINT16_MAX;

    t169 = (((x697!=x698)/x699)^x700);

    if (t169 != -3248591791408521LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x701 = UINT64_MAX;
	static uint8_t x702 = 15U;
	int8_t x703 = -1;
	uint16_t x704 = UINT16_MAX;
	static int32_t t170 = 3;

    t170 = (((x701!=x702)/x703)^x704);

    if (t170 != -65536) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = INT32_MIN;
	uint8_t x708 = 63U;
	volatile int32_t t171 = -30976826;

    t171 = (((x705!=x706)/x707)^x708);

    if (t171 != -64) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = -1LL;
	int64_t x716 = INT64_MIN;
	int64_t t172 = INT64_MAX;

    t172 = (((x713!=x714)/x715)^x716);

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = -16445227;
	int64_t x719 = -1LL;
	uint64_t x720 = 40160291439243807LLU;
	static uint64_t t173 = 1401213517261681171LLU;

    t173 = (((x717!=x718)/x719)^x720);

    if (t173 != 18406583782270307808LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x722 = 12U;
	int32_t x724 = 1784;
	static volatile int32_t t174 = -509;

    t174 = (((x721!=x722)/x723)^x724);

    if (t174 != 1784) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x725 = INT32_MIN;
	static int8_t x727 = 2;
	int16_t x728 = INT16_MIN;
	volatile int32_t t175 = -7;

    t175 = (((x725!=x726)/x727)^x728);

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x729 = 31U;
	volatile uint16_t x730 = 76U;
	int64_t x731 = -1804373620832025LL;
	static int32_t x732 = -1;
	int64_t t176 = 47LL;

    t176 = (((x729!=x730)/x731)^x732);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x733 = 266;
	int64_t x734 = -1LL;
	int16_t x735 = 49;
	int16_t x736 = INT16_MIN;

    t177 = (((x733!=x734)/x735)^x736);

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x737 = 28U;
	int64_t x738 = -240701LL;
	static int32_t x739 = INT32_MIN;
	int64_t x740 = -1LL;
	volatile int64_t t178 = 1LL;

    t178 = (((x737!=x738)/x739)^x740);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x741 = UINT8_MAX;
	int16_t x742 = INT16_MIN;
	static volatile int32_t x744 = INT32_MAX;
	uint32_t t179 = 3556U;

    t179 = (((x741!=x742)/x743)^x744);

    if (t179 != 2147483647U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = -114;
	int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MIN;
	volatile int32_t t180 = 7315;

    t180 = (((x745!=x746)/x747)^x748);

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x749 = UINT16_MAX;
	static uint64_t x750 = 434273568415369105LLU;
	static volatile int32_t x752 = 3889;
	int32_t t181 = 471017;

    t181 = (((x749!=x750)/x751)^x752);

    if (t181 != 3889) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x756 = -1LL;

    t182 = (((x753!=x754)/x755)^x756);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MAX;
	int32_t x758 = INT32_MIN;
	int16_t x759 = 8232;
	uint16_t x760 = UINT16_MAX;

    t183 = (((x757!=x758)/x759)^x760);

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile uint16_t x762 = UINT16_MAX;
	static int64_t x764 = 1452576192336257066LL;
	volatile int64_t t184 = -5LL;

    t184 = (((x761!=x762)/x763)^x764);

    if (t184 != 1452576192336257066LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x765 = INT32_MIN;
	int16_t x766 = -1;
	int32_t x767 = INT32_MIN;
	static int8_t x768 = -1;
	static volatile int32_t t185 = 686560;

    t185 = (((x765!=x766)/x767)^x768);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x769 = 3U;
	int16_t x770 = INT16_MIN;
	uint32_t x771 = 15755729U;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (((x769!=x770)/x771)^x772);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x774 = 195U;
	int32_t x775 = 230949;
	uint32_t x776 = 2U;
	uint32_t t187 = 146U;

    t187 = (((x773!=x774)/x775)^x776);

    if (t187 != 2U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MAX;
	uint16_t x780 = 96U;
	int32_t t188 = 3;

    t188 = (((x777!=x778)/x779)^x780);

    if (t188 != 96) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x782 = -4238731450119407LL;
	uint8_t x783 = UINT8_MAX;
	static uint64_t x784 = UINT64_MAX;
	uint64_t t189 = UINT64_MAX;

    t189 = (((x781!=x782)/x783)^x784);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x786 = INT16_MIN;
	volatile uint64_t x787 = 700698453LLU;
	int16_t x788 = -62;
	volatile uint64_t t190 = 65954369430LLU;

    t190 = (((x785!=x786)/x787)^x788);

    if (t190 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x789 = INT16_MIN;
	uint64_t x790 = 5442108LLU;
	volatile uint8_t x791 = UINT8_MAX;
	volatile int16_t x792 = 176;
	int32_t t191 = 22568;

    t191 = (((x789!=x790)/x791)^x792);

    if (t191 != 176) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x793 = -1;
	uint32_t x794 = UINT32_MAX;
	uint32_t x795 = 489158003U;
	volatile uint8_t x796 = 7U;
	volatile uint32_t t192 = 1963U;

    t192 = (((x793!=x794)/x795)^x796);

    if (t192 != 7U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x797 = INT64_MIN;
	int64_t x799 = -62073LL;

    t193 = (((x797!=x798)/x799)^x800);

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = INT64_MIN;
	static int64_t x802 = -1LL;
	int8_t x803 = 9;
	static uint32_t x804 = UINT32_MAX;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = (((x801!=x802)/x803)^x804);

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x806 = 6062U;
	int64_t x807 = -18627835811242LL;
	uint32_t x808 = UINT32_MAX;

    t195 = (((x805!=x806)/x807)^x808);

    if (t195 != 4294967295LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x809 = 77073384422947LLU;
	int64_t x810 = INT64_MIN;
	static int32_t x811 = INT32_MAX;
	static volatile int32_t t196 = -42;

    t196 = (((x809!=x810)/x811)^x812);

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x817 = 997222218U;
	int32_t x818 = 4174753;
	uint16_t x819 = 484U;
	int8_t x820 = INT8_MIN;
	int32_t t197 = -3775;

    t197 = (((x817!=x818)/x819)^x820);

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x821 = INT16_MAX;
	int16_t x823 = 11185;
	int64_t x824 = INT64_MIN;
	volatile int64_t t198 = INT64_MIN;

    t198 = (((x821!=x822)/x823)^x824);

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x826 = 933LL;
	static volatile int64_t x828 = -30615524276LL;
	volatile int64_t t199 = -3322631667229762LL;

    t199 = (((x825!=x826)/x827)^x828);

    if (t199 != -30615524276LL) { NG(); } else { ; }
	
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

