
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

static int32_t x1 = 40475;
int16_t x5 = -1;
uint32_t x6 = UINT32_MAX;
static volatile int32_t x11 = INT32_MIN;
int64_t x13 = INT64_MAX;
int8_t x15 = -3;
int64_t x16 = -1LL;
static volatile int8_t x17 = -4;
uint16_t x20 = 6588U;
volatile uint64_t t4 = 673997LLU;
int64_t x27 = -4LL;
volatile int64_t t6 = -8592129225944389LL;
volatile int64_t t7 = 53LL;
int16_t x39 = INT16_MAX;
static int16_t x51 = -1;
volatile int16_t x56 = INT16_MIN;
uint16_t x58 = 1802U;
volatile uint16_t x59 = 115U;
uint64_t t14 = 7608030572864814LLU;
int16_t x62 = INT16_MAX;
volatile uint64_t t15 = UINT64_MAX;
int16_t x68 = INT16_MAX;
int64_t t16 = -3754047565675409132LL;
int8_t x69 = -1;
uint64_t x76 = 1050213072159055846LLU;
uint64_t t18 = 125844846699LLU;
int64_t x82 = INT64_MIN;
uint16_t x83 = 423U;
static uint16_t x89 = 2927U;
uint64_t x91 = 1153828672909LLU;
int32_t x103 = -1067;
static uint64_t x104 = 15626LLU;
volatile uint64_t t25 = 288817876522LLU;
uint8_t x106 = UINT8_MAX;
volatile int32_t x108 = 106682;
int32_t x118 = INT32_MAX;
int8_t x134 = INT8_MAX;
uint16_t x137 = 665U;
int64_t x140 = INT64_MIN;
int32_t x144 = INT32_MAX;
int64_t t35 = 3685529101614217148LL;
volatile int32_t x145 = INT32_MIN;
static volatile uint64_t x146 = 1825078228537LLU;
static volatile uint64_t t37 = 4LLU;
volatile int32_t x153 = INT32_MIN;
static volatile int64_t x154 = -265067032167248418LL;
uint64_t t40 = 22852LLU;
int32_t t41 = 5;
uint8_t x177 = 117U;
int16_t x182 = INT16_MIN;
uint8_t x184 = 28U;
int8_t x185 = INT8_MAX;
int8_t x188 = INT8_MAX;
static uint64_t x190 = 1283491730LLU;
volatile int16_t x194 = 50;
int64_t t48 = -1844LL;
volatile int64_t x197 = -1LL;
uint8_t x201 = 27U;
static int32_t x211 = INT32_MIN;
uint32_t t52 = 10423U;
int64_t x214 = INT64_MAX;
uint32_t x219 = UINT32_MAX;
volatile int64_t t55 = -145447899954480LL;
int64_t x226 = INT64_MAX;
int16_t x228 = INT16_MIN;
int8_t x230 = INT8_MIN;
uint8_t x232 = 49U;
volatile uint64_t t57 = 3156068098455LLU;
uint16_t x234 = 0U;
static uint64_t x237 = UINT64_MAX;
int32_t x240 = -4;
uint16_t x241 = UINT16_MAX;
static volatile uint64_t x245 = 14434LLU;
volatile int64_t x248 = INT64_MIN;
volatile uint64_t t61 = 23LLU;
int8_t x252 = INT8_MAX;
uint8_t x255 = 7U;
int32_t t63 = 5;
static int64_t t64 = -12495LL;
uint8_t x261 = UINT8_MAX;
int8_t x264 = 0;
int32_t x266 = INT32_MIN;
volatile int64_t t66 = -818752359022054LL;
static int64_t x271 = -1LL;
int16_t x272 = INT16_MIN;
volatile int64_t t68 = 378825228LL;
int16_t x277 = -1;
volatile int64_t x280 = -1LL;
int16_t x281 = INT16_MAX;
static volatile int64_t t71 = 132573057719182LL;
uint64_t x289 = 41175LLU;
static uint64_t t72 = 17694918154665068LLU;
uint8_t x295 = 23U;
volatile int64_t x298 = 88256156LL;
volatile uint32_t x302 = 2838772U;
static int32_t x308 = INT32_MAX;
int16_t x315 = INT16_MAX;
static int8_t x317 = INT8_MIN;
volatile int8_t x320 = 5;
int16_t x321 = 71;
int32_t x334 = -1;
int64_t t83 = 1632402441806LL;
volatile int8_t x339 = INT8_MIN;
static uint64_t t84 = 83LLU;
uint64_t x341 = 46996225269476494LLU;
uint64_t t85 = 25012LLU;
volatile int64_t t86 = INT64_MIN;
int32_t x349 = -6807;
uint16_t x358 = 4415U;
static uint8_t x359 = 8U;
volatile int32_t x361 = -1;
int64_t x365 = -26026335184123190LL;
int32_t x370 = INT32_MAX;
volatile uint32_t x371 = UINT32_MAX;
int8_t x373 = 9;
static int32_t x378 = INT32_MIN;
int64_t x384 = INT64_MAX;
static int8_t x387 = INT8_MIN;
int8_t x388 = INT8_MIN;
volatile int64_t x401 = -3937651332467LL;
int16_t x403 = -1;
int16_t x412 = -22;
int64_t t102 = 3LL;
int16_t x417 = INT16_MIN;
int64_t x418 = INT64_MIN;
volatile int32_t x439 = -327;
static uint16_t x441 = 490U;
static volatile int64_t t112 = 13915687856LL;
static int32_t x453 = INT32_MIN;
static uint64_t x461 = UINT64_MAX;
volatile uint64_t t115 = UINT64_MAX;
int64_t x465 = -1LL;
uint16_t x467 = 807U;
uint64_t x468 = UINT64_MAX;
volatile uint16_t x470 = UINT16_MAX;
volatile uint64_t x471 = UINT64_MAX;
uint32_t x479 = UINT32_MAX;
uint64_t x484 = 1LLU;
volatile int8_t x491 = INT8_MIN;
volatile int32_t x492 = -1;
int64_t t124 = 0LL;
static uint8_t x518 = 18U;
int8_t x522 = -1;
int32_t x526 = 33984318;
uint8_t x527 = 0U;
static int32_t t131 = 22314;
static int16_t x529 = INT16_MAX;
int64_t x539 = -1LL;
uint64_t x540 = 947585376967LLU;
volatile uint64_t t134 = 22873LLU;
uint16_t x541 = 326U;
int64_t x543 = INT64_MIN;
int32_t x546 = INT32_MAX;
int64_t x547 = INT64_MAX;
volatile uint64_t t137 = 479871556609391LLU;
int64_t x556 = INT64_MAX;
uint32_t x561 = 3601U;
uint64_t x562 = 1007279639LLU;
int64_t x564 = INT64_MIN;
volatile uint64_t t140 = 1573LLU;
uint8_t x566 = 117U;
volatile uint32_t x567 = 91U;
uint32_t x569 = UINT32_MAX;
int32_t x576 = -1;
volatile uint16_t x581 = UINT16_MAX;
static int16_t x584 = 1;
int16_t x586 = -21;
int64_t x590 = 17388075LL;
volatile uint64_t t147 = 25250156LLU;
uint32_t x598 = UINT32_MAX;
static int8_t x606 = INT8_MIN;
int64_t x607 = -309107LL;
int16_t x608 = INT16_MIN;
volatile int32_t t152 = -9763;
int32_t x618 = 3030222;
uint64_t x622 = 227LLU;
static int8_t x626 = INT8_MIN;
static volatile uint32_t t156 = 732102U;
int64_t x629 = INT64_MAX;
volatile int64_t x634 = -972829120445826099LL;
int8_t x638 = 0;
static int32_t t159 = 445943;
int32_t x642 = INT32_MIN;
int16_t x654 = INT16_MIN;
volatile int16_t x656 = 1;
volatile int16_t x677 = INT16_MIN;
volatile uint32_t t169 = 2U;
static volatile uint8_t x688 = 24U;
static uint8_t x698 = 6U;
static volatile int64_t t174 = 311020LL;
static int8_t x707 = -1;
volatile int16_t x708 = INT16_MIN;
int64_t x721 = -1LL;
int8_t x729 = INT8_MIN;
uint8_t x731 = 34U;
volatile int64_t t184 = 25681300391157631LL;
uint16_t x741 = UINT16_MAX;
uint32_t x748 = UINT32_MAX;
int64_t x755 = -1LL;
volatile int32_t x759 = INT32_MIN;
uint64_t x761 = 7343587117LLU;
int8_t x763 = INT8_MIN;
static uint8_t x775 = UINT8_MAX;
int16_t x776 = -4526;
int8_t x778 = -3;
volatile uint8_t x779 = 1U;
static volatile uint16_t x783 = UINT16_MAX;
int32_t t195 = 925158;
static volatile int16_t x786 = INT16_MIN;
int32_t x788 = INT32_MIN;
volatile int32_t x790 = -1;
static volatile uint8_t x794 = 40U;
static uint64_t x796 = 1607319479185518277LLU;
int16_t x798 = INT16_MAX;


void f0(void) {
    	volatile uint64_t x2 = 0LLU;
	static volatile uint64_t x3 = 74529574LLU;
	volatile int16_t x4 = 161;
	uint64_t t0 = 330797117049010992LLU;

    t0 = (x1&(x2|(x3^x4)));

    if (t0 != 6659LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x7 = UINT32_MAX;
	int64_t x8 = 4301691LL;
	volatile int64_t t1 = -1402290358681318LL;

    t1 = (x5&(x6|(x7^x8)));

    if (t1 != 4294967295LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = UINT32_MAX;

    t2 = (x9&(x10|(x11^x12)));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x14 = INT8_MIN;
	volatile int64_t t3 = -317858LL;

    t3 = (x13&(x14|(x15^x16)));

    if (t3 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 1LLU;
	int64_t x19 = -13LL;

    t4 = (x17&(x18|(x19^x20)));

    if (t4 != 18446744073709545036LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 125014463LL;
	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	static int32_t x24 = INT32_MIN;
	int64_t t5 = 8812749775718833LL;

    t5 = (x21&(x22|(x23^x24)));

    if (t5 != 125009920LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	volatile int32_t x26 = -1;
	int16_t x28 = -786;

    t6 = (x25&(x26|(x27^x28)));

    if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 121U;
	int16_t x30 = -18;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MAX;

    t7 = (x29&(x30|(x31^x32)));

    if (t7 != 121LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -1239914LL;
	uint16_t x34 = 28U;
	uint32_t x35 = 489642U;
	volatile uint16_t x36 = UINT16_MAX;
	int64_t t8 = 562150LL;

    t8 = (x33&(x34|(x35^x36)));

    if (t8 != 328724LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = UINT32_MAX;
	static int16_t x40 = INT16_MIN;
	static volatile uint32_t t9 = 35U;

    t9 = (x37&(x38|(x39^x40)));

    if (t9 != 255U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	static uint16_t x44 = 116U;
	volatile int32_t t10 = 1;

    t10 = (x41&(x42|(x43^x44)));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = -1305;
	int8_t x46 = 55;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = -1LL;
	int64_t t11 = -308005LL;

    t11 = (x45&(x46|(x47^x48)));

    if (t11 != -4294967257LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MIN;
	uint8_t x50 = UINT8_MAX;
	static uint64_t x52 = 567807689996714219LLU;
	uint64_t t12 = 18LLU;

    t12 = (x49&(x50|(x51^x52)));

    if (t12 != 17878936383712821248LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MAX;
	static int8_t x54 = INT8_MIN;
	static int64_t x55 = INT64_MIN;
	int64_t t13 = -2018815813445264408LL;

    t13 = (x53&(x54|(x55^x56)));

    if (t13 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = UINT64_MAX;
	int32_t x60 = 129665110;

    t14 = (x57&(x58|(x59^x60)));

    if (t14 != 129666863LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = 24U;

    t15 = (x61&(x62|(x63^x64)));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	volatile uint8_t x66 = UINT8_MAX;
	static int64_t x67 = -1LL;

    t16 = (x65&(x66|(x67^x68)));

    if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MIN;
	int64_t x71 = -1LL;
	uint16_t x72 = 28600U;
	int64_t t17 = 89192364736LL;

    t17 = (x69&(x70|(x71^x72)));

    if (t17 != -28601LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x73 = 93635U;
	uint8_t x74 = 15U;
	int64_t x75 = -1LL;

    t18 = (x73&(x74|(x75^x76)));

    if (t18 != 24579LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = 106652585336LLU;
	uint64_t t19 = 3042850219582877423LLU;

    t19 = (x77&(x78|(x79^x80)));

    if (t19 != 32767LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 125418030015LL;
	int32_t x84 = 895649713;
	volatile int64_t t20 = -1460446279640257952LL;

    t20 = (x81&(x82|(x83^x84)));

    if (t20 != 828506646LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 17255817U;
	static uint64_t x86 = UINT64_MAX;
	static int32_t x87 = INT32_MAX;
	volatile uint8_t x88 = UINT8_MAX;
	uint64_t t21 = 576163612LLU;

    t21 = (x85&(x86|(x87^x88)));

    if (t21 != 17255817LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = UINT32_MAX;
	volatile uint64_t x92 = 9999111439457LLU;
	volatile uint64_t t22 = 7847639046029LLU;

    t22 = (x89&(x90|(x91^x92)));

    if (t22 != 2927LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 27;
	int8_t x94 = -1;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -1;
	volatile int64_t t23 = 101806398LL;

    t23 = (x93&(x94|(x95^x96)));

    if (t23 != 27LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint32_t x98 = 0U;
	volatile int16_t x99 = 0;
	int8_t x100 = 1;
	volatile uint32_t t24 = 747173U;

    t24 = (x97&(x98|(x99^x100)));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int32_t x102 = -61685;

    t25 = (x101&(x102|(x103^x104)));

    if (t25 != 18446744073709539295LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x107 = 14;
	int64_t t26 = 240245374LL;

    t26 = (x105&(x106|(x107^x108)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int32_t x110 = INT32_MIN;
	int16_t x111 = -1;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 9881;

    t27 = (x109&(x110|(x111^x112)));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 53U;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = INT32_MIN;

    t28 = (x113&(x114|(x115^x116)));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 47212781502LLU;
	int16_t x119 = 1;
	static int16_t x120 = INT16_MIN;
	volatile uint64_t t29 = 390LLU;

    t29 = (x117&(x118|(x119^x120)));

    if (t29 != 47212781502LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x121 = 165309LL;
	static volatile int8_t x122 = INT8_MIN;
	int32_t x123 = -1;
	uint16_t x124 = 34U;
	volatile int64_t t30 = 1818LL;

    t30 = (x121&(x122|(x123^x124)));

    if (t30 != 165277LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = -1415;
	volatile int64_t x126 = -1LL;
	static int32_t x127 = INT32_MAX;
	uint64_t x128 = 367364108LLU;
	uint64_t t31 = 2079574787412209LLU;

    t31 = (x125&(x126|(x127^x128)));

    if (t31 != 18446744073709550201LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x129 = INT32_MIN;
	uint32_t x130 = 1411157U;
	static uint8_t x131 = 24U;
	int8_t x132 = -1;
	volatile uint32_t t32 = 380U;

    t32 = (x129&(x130|(x131^x132)));

    if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	volatile uint8_t x135 = UINT8_MAX;
	int16_t x136 = 86;
	int32_t t33 = -8447632;

    t33 = (x133&(x134|(x135^x136)));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = -12606;
	int16_t x139 = INT16_MIN;
	int64_t t34 = -1509896863008624LL;

    t34 = (x137&(x138|(x139^x140)));

    if (t34 != 640LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	int64_t x142 = -1874638762385035LL;
	int8_t x143 = -1;

    t35 = (x141&(x142|(x143^x144)));

    if (t35 != 2793169269LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x147 = INT64_MIN;
	int8_t x148 = 3;
	uint64_t t36 = 1704639164627LLU;

    t36 = (x145&(x146|(x147^x148)));

    if (t36 != 9223373860068392960LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 53343U;
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = INT16_MAX;
	uint64_t x152 = UINT64_MAX;

    t37 = (x149&(x150|(x151^x152)));

    if (t37 != 53343LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	int64_t t38 = 149349820811308LL;

    t38 = (x153&(x154|(x155^x156)));

    if (t38 != -265067033408831488LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = UINT32_MAX;
	static volatile int32_t x158 = -1;
	int64_t x159 = -1LL;
	int32_t x160 = 76556782;
	static volatile int64_t t39 = -38235LL;

    t39 = (x157&(x158|(x159^x160)));

    if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 4391312292LLU;
	int32_t x162 = INT32_MIN;
	static int16_t x163 = -1;
	volatile uint32_t x164 = 3U;

    t40 = (x161&(x162|(x163^x164)));

    if (t40 != 96344996LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int8_t x166 = -35;
	volatile int16_t x167 = -1;
	volatile uint16_t x168 = 0U;

    t41 = (x165&(x166|(x167^x168)));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	static int8_t x170 = INT8_MAX;
	int64_t x171 = INT64_MIN;
	volatile int8_t x172 = -1;
	static int64_t t42 = INT64_MAX;

    t42 = (x169&(x170|(x171^x172)));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MIN;
	uint64_t x175 = 1791977603619250551LLU;
	uint8_t x176 = UINT8_MAX;
	uint64_t t43 = 46LLU;

    t43 = (x173&(x174|(x175^x176)));

    if (t43 != 11015349640474026376LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MAX;
	volatile int8_t x180 = -1;
	volatile int64_t t44 = -1868235LL;

    t44 = (x177&(x178|(x179^x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -296731508;
	int16_t x183 = -1;
	int32_t t45 = 230557567;

    t45 = (x181&(x182|(x183^x184)));

    if (t45 != -296731520) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	int64_t t46 = -7722291755757051LL;

    t46 = (x185&(x186|(x187^x188)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = -1;
	uint64_t t47 = 3854LLU;

    t47 = (x189&(x190|(x191^x192)));

    if (t47 != 146LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;

    t48 = (x193&(x194|(x195^x196)));

    if (t48 != 9223372034707292210LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x198 = -1943197LL;
	int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MIN;
	volatile int64_t t49 = 32029LL;

    t49 = (x197&(x198|(x199^x200)));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = 53U;
	int8_t x203 = INT8_MAX;
	uint8_t x204 = 27U;
	static int32_t t50 = 13003;

    t50 = (x201&(x202|(x203^x204)));

    if (t50 != 17) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 114017001736931482LL;
	int32_t x206 = INT32_MAX;
	static int64_t x207 = -1LL;
	int16_t x208 = -104;
	int64_t t51 = 841LL;

    t51 = (x205&(x206|(x207^x208)));

    if (t51 != 1726122138LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 114603U;
	volatile int16_t x210 = -1;
	int16_t x212 = INT16_MIN;

    t52 = (x209&(x210|(x211^x212)));

    if (t52 != 114603U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = 2;
	static volatile int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = -5944LL;

    t53 = (x213&(x214|(x215^x216)));

    if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 6968U;
	int32_t x218 = -1;
	uint64_t x220 = 61LLU;
	uint64_t t54 = 163LLU;

    t54 = (x217&(x218|(x219^x220)));

    if (t54 != 6968LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MAX;
	int64_t x223 = -1LL;
	int64_t x224 = 425385724LL;

    t55 = (x221&(x222|(x223^x224)));

    if (t55 != 9223372036429414399LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	int64_t x227 = 951460445377237LL;
	static int64_t t56 = 158446457LL;

    t56 = (x225&(x226|(x227^x228)));

    if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -1;
	static uint64_t x231 = UINT64_MAX;

    t57 = (x229&(x230|(x231^x232)));

    if (t57 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	volatile int32_t x235 = -1;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -1;

    t58 = (x233&(x234|(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x238 = 11562745U;
	volatile int32_t x239 = -36216712;
	volatile uint64_t t59 = 627722LLU;

    t59 = (x237&(x238|(x239^x240)));

    if (t59 != 45678589LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	uint32_t x243 = 7U;
	int16_t x244 = -1;
	static uint32_t t60 = 117621U;

    t60 = (x241&(x242|(x243^x244)));

    if (t60 != 65528U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = -1LL;
	static int8_t x247 = INT8_MIN;

    t61 = (x245&(x246|(x247^x248)));

    if (t61 != 14434LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = 36U;
	uint16_t x250 = 1U;
	uint8_t x251 = UINT8_MAX;
	static int32_t t62 = 179;

    t62 = (x249&(x250|(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	uint16_t x254 = 180U;
	volatile int16_t x256 = 3;

    t63 = (x253&(x254|(x255^x256)));

    if (t63 != 180) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = -1LL;
	uint32_t x258 = 7248389U;
	int8_t x259 = 1;
	int8_t x260 = INT8_MIN;

    t64 = (x257&(x258|(x259^x260)));

    if (t64 != 4294967173LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = 174;
	static int8_t x263 = -1;
	static volatile int32_t t65 = -942;

    t65 = (x261&(x262|(x263^x264)));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1157058319768234LL;
	uint16_t x267 = 1771U;
	uint16_t x268 = 545U;

    t66 = (x265&(x266|(x267^x268)));

    if (t66 != -1157059894574014LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	int64_t x270 = -1LL;
	int64_t t67 = 1240580634323706466LL;

    t67 = (x269&(x270|(x271^x272)));

    if (t67 != 127LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = -2811223497213LL;
	uint16_t x276 = 1U;

    t68 = (x273&(x274|(x275^x276)));

    if (t68 != -2811223506944LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = INT8_MAX;
	volatile uint8_t x279 = 5U;
	volatile int64_t t69 = 158313636555538623LL;

    t69 = (x277&(x278|(x279^x280)));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x282 = INT8_MIN;
	int32_t x283 = -8250601;
	static int8_t x284 = INT8_MAX;
	static volatile int32_t t70 = -2190;

    t70 = (x281&(x282|(x283^x284)));

    if (t70 != 32744) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	int64_t x286 = 6LL;
	static int32_t x287 = INT32_MAX;
	int32_t x288 = INT32_MAX;

    t71 = (x285&(x286|(x287^x288)));

    if (t71 != 6LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x290 = UINT64_MAX;
	int64_t x291 = INT64_MIN;
	volatile uint8_t x292 = UINT8_MAX;

    t72 = (x289&(x290|(x291^x292)));

    if (t72 != 41175LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x293 = -1;
	volatile uint32_t x294 = 156872778U;
	uint32_t x296 = 192U;
	uint32_t t73 = 891U;

    t73 = (x293&(x294|(x295^x296)));

    if (t73 != 156872927U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	volatile uint8_t x299 = UINT8_MAX;
	int8_t x300 = -1;
	volatile int64_t t74 = -942LL;

    t74 = (x297&(x298|(x299^x300)));

    if (t74 != 2147483548LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = INT16_MIN;
	static uint32_t x303 = 4U;
	int32_t x304 = 1;
	volatile uint32_t t75 = 92U;

    t75 = (x301&(x302|(x303^x304)));

    if (t75 != 2818048U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x305 = 3636234LLU;
	uint16_t x306 = 14U;
	static uint16_t x307 = 0U;
	uint64_t t76 = 504688915070289LLU;

    t76 = (x305&(x306|(x307^x308)));

    if (t76 != 3636234LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = UINT64_MAX;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -1;
	static int8_t x312 = -1;
	uint64_t t77 = 130LLU;

    t77 = (x309&(x310|(x311^x312)));

    if (t77 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MIN;
	volatile int64_t x316 = -52181LL;
	int64_t t78 = -1LL;

    t78 = (x313&(x314|(x315^x316)));

    if (t78 != 212LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x318 = 1U;
	int8_t x319 = INT8_MIN;
	int32_t t79 = -1;

    t79 = (x317&(x318|(x319^x320)));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = -1129;
	int8_t x323 = 0;
	volatile uint32_t x324 = 1017466600U;
	static uint32_t t80 = 2246U;

    t80 = (x321&(x322|(x323^x324)));

    if (t80 != 71U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = UINT32_MAX;
	static volatile int64_t x326 = -1LL;
	volatile int64_t x327 = -1LL;
	int8_t x328 = 10;
	volatile int64_t t81 = 94577593269LL;

    t81 = (x325&(x326|(x327^x328)));

    if (t81 != 4294967295LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = 384U;
	int16_t x330 = INT16_MIN;
	volatile uint32_t x331 = 0U;
	int32_t x332 = 738365;
	volatile uint32_t t82 = 6032881U;

    t82 = (x329&(x330|(x331^x332)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -1LL;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MIN;

    t83 = (x333&(x334|(x335^x336)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	uint64_t x338 = 3624524233LLU;
	int64_t x340 = INT64_MIN;

    t84 = (x337&(x338|(x339^x340)));

    if (t84 != 9223372036854775753LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x342 = INT8_MAX;
	uint8_t x343 = 2U;
	int8_t x344 = -1;

    t85 = (x341&(x342|(x343^x344)));

    if (t85 != 46996225269476494LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	uint16_t x346 = 53U;
	static volatile int64_t x347 = INT64_MIN;
	int8_t x348 = 1;

    t86 = (x345&(x346|(x347^x348)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = INT8_MIN;
	static uint8_t x351 = 0U;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t87 = 1632227166LLU;

    t87 = (x349&(x350|(x351^x352)));

    if (t87 != 18446744073709544809LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = INT32_MAX;
	static int8_t x354 = -1;
	static int64_t x355 = INT64_MAX;
	static int32_t x356 = INT32_MIN;
	int64_t t88 = -8662353879972519LL;

    t88 = (x353&(x354|(x355^x356)));

    if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	static int64_t x360 = INT64_MIN;
	volatile int64_t t89 = 451LL;

    t89 = (x357&(x358|(x359^x360)));

    if (t89 != -9223372036854771456LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MIN;
	static int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MAX;
	static int64_t t90 = -202351375LL;

    t90 = (x361&(x362|(x363^x364)));

    if (t90 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x366 = 6U;
	uint8_t x367 = 3U;
	uint8_t x368 = 1U;
	int64_t t91 = -2093LL;

    t91 = (x365&(x366|(x367^x368)));

    if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = 6;
	uint16_t x372 = UINT16_MAX;
	uint32_t t92 = 2740U;

    t92 = (x369&(x370|(x371^x372)));

    if (t92 != 6U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MIN;
	int8_t x375 = -24;
	static int64_t x376 = INT64_MAX;
	volatile int64_t t93 = -145344349054LL;

    t93 = (x373&(x374|(x375^x376)));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x379 = 2580LL;
	uint32_t x380 = 382895U;
	int64_t t94 = -138451215060072LL;

    t94 = (x377&(x378|(x379^x380)));

    if (t94 != -2147123200LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	int32_t x382 = 7;
	static volatile int8_t x383 = 3;
	volatile int64_t t95 = INT64_MAX;

    t95 = (x381&(x382|(x383^x384)));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x385 = 2U;
	int8_t x386 = 5;
	volatile int32_t t96 = -368671;

    t96 = (x385&(x386|(x387^x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	volatile int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = INT32_MIN;

    t97 = (x389&(x390|(x391^x392)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 72832998;
	int8_t x394 = INT8_MIN;
	static uint64_t x395 = 0LLU;
	volatile int32_t x396 = INT32_MIN;
	static uint64_t t98 = 322170048892423731LLU;

    t98 = (x393&(x394|(x395^x396)));

    if (t98 != 72832896LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 112U;
	volatile int64_t x398 = INT64_MAX;
	uint8_t x399 = 1U;
	uint64_t x400 = UINT64_MAX;
	uint64_t t99 = 618189337LLU;

    t99 = (x397&(x398|(x399^x400)));

    if (t99 != 112LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x402 = -1LL;
	int16_t x404 = -21;
	static int64_t t100 = -2389169LL;

    t100 = (x401&(x402|(x403^x404)));

    if (t100 != -3937651332467LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	volatile int8_t x408 = 1;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x405&(x406|(x407^x408)));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = -1;
	volatile int64_t x410 = -1537768LL;
	int16_t x411 = 753;

    t102 = (x409&(x410|(x411^x412)));

    if (t102 != -741LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = UINT64_MAX;
	static int64_t x414 = INT64_MAX;
	uint8_t x415 = UINT8_MAX;
	uint8_t x416 = UINT8_MAX;
	uint64_t t103 = 93LLU;

    t103 = (x413&(x414|(x415^x416)));

    if (t103 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x419 = 744324U;
	int16_t x420 = INT16_MIN;
	volatile int64_t t104 = 6LL;

    t104 = (x417&(x418|(x419^x420)));

    if (t104 != -9223372032560562176LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	uint64_t x422 = 5418190LLU;
	volatile int8_t x423 = -3;
	uint8_t x424 = 35U;
	uint64_t t105 = 985168316172LLU;

    t105 = (x421&(x422|(x423^x424)));

    if (t105 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 844U;
	int16_t x426 = INT16_MIN;
	volatile int64_t x427 = -1LL;
	uint16_t x428 = 3U;
	int64_t t106 = 178783LL;

    t106 = (x425&(x426|(x427^x428)));

    if (t106 != 844LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 1;
	int32_t x430 = INT32_MIN;
	static volatile int16_t x431 = INT16_MIN;
	static uint16_t x432 = 3U;
	static int32_t t107 = 242738243;

    t107 = (x429&(x430|(x431^x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = INT64_MIN;
	int64_t x435 = INT64_MAX;
	static int64_t x436 = INT64_MIN;
	int64_t t108 = 4244561619893LL;

    t108 = (x433&(x434|(x435^x436)));

    if (t108 != -128LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int64_t x438 = 26170665662LL;
	static uint8_t x440 = UINT8_MAX;
	int64_t t109 = -300026716401583582LL;

    t109 = (x437&(x438|(x439^x440)));

    if (t109 != -384LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x442 = 3749570LLU;
	uint32_t x443 = UINT32_MAX;
	int32_t x444 = -1;
	uint64_t t110 = 2246059935LLU;

    t110 = (x441&(x442|(x443^x444)));

    if (t110 != 194LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 2232U;
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = -1LL;
	uint32_t x448 = 7643U;
	int64_t t111 = -1939555683530103304LL;

    t111 = (x445&(x446|(x447^x448)));

    if (t111 != 184LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x449 = INT32_MIN;
	int32_t x450 = -10125318;
	int32_t x451 = -7260845;
	volatile int64_t x452 = INT64_MIN;

    t112 = (x449&(x450|(x451^x452)));

    if (t112 != -2147483648LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = 14902LL;
	volatile uint16_t x455 = 2117U;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int64_t t113 = -326767027271739LL;

    t113 = (x453&(x454|(x455^x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 479863;
	int16_t x458 = INT16_MIN;
	int32_t x459 = INT32_MAX;
	int16_t x460 = INT16_MAX;
	volatile int32_t t114 = -6940;

    t114 = (x457&(x458|(x459^x460)));

    if (t114 != 458752) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = -1;
	static volatile int8_t x463 = INT8_MAX;
	uint16_t x464 = 0U;

    t115 = (x461&(x462|(x463^x464)));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MAX;
	volatile uint64_t t116 = 1LLU;

    t116 = (x465&(x466|(x467^x468)));

    if (t116 != 18446744073709550847LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = -1;
	int32_t x472 = 214;
	uint64_t t117 = UINT64_MAX;

    t117 = (x469&(x470|(x471^x472)));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	int8_t x474 = -24;
	volatile int32_t x475 = 130872363;
	int16_t x476 = 825;
	volatile int32_t t118 = 38441;

    t118 = (x473&(x474|(x475^x476)));

    if (t118 != 65530) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	volatile uint64_t x478 = 707046888364LLU;
	volatile int32_t x480 = -246;
	volatile uint64_t t119 = 18612495798LLU;

    t119 = (x477&(x478|(x479^x480)));

    if (t119 != 707046888445LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x481 = 4050;
	static int32_t x482 = INT32_MIN;
	volatile int64_t x483 = 4019633793339995685LL;
	volatile uint64_t t120 = 38024LLU;

    t120 = (x481&(x482|(x483^x484)));

    if (t120 != 1536LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	uint8_t x486 = 1U;
	static uint16_t x487 = 11916U;
	static uint8_t x488 = 1U;
	static int32_t t121 = 491;

    t121 = (x485&(x486|(x487^x488)));

    if (t121 != 11904) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 1LLU;
	volatile int32_t x490 = 33671712;
	volatile uint64_t t122 = 2LLU;

    t122 = (x489&(x490|(x491^x492)));

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = -30170921441758975LL;
	uint16_t x494 = UINT16_MAX;
	uint16_t x495 = 0U;
	int16_t x496 = 47;
	static volatile int64_t t123 = 21073888932331254LL;

    t123 = (x493&(x494|(x495^x496)));

    if (t123 != 61697LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	volatile int64_t x498 = -193450583229776682LL;
	int32_t x499 = INT32_MAX;
	int32_t x500 = INT32_MIN;

    t124 = (x497&(x498|(x499^x500)));

    if (t124 != -2147483648LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	int32_t x502 = INT32_MAX;
	int8_t x503 = 1;
	static int8_t x504 = 2;
	int64_t t125 = 116346479LL;

    t125 = (x501&(x502|(x503^x504)));

    if (t125 != 2147483647LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = INT8_MAX;
	int64_t x506 = 106LL;
	int8_t x507 = INT8_MIN;
	volatile int64_t x508 = -1LL;
	int64_t t126 = -64259319442LL;

    t126 = (x505&(x506|(x507^x508)));

    if (t126 != 127LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -873;
	uint64_t x510 = 55919811452520LLU;
	int64_t x511 = INT64_MIN;
	int64_t x512 = 1LL;
	volatile uint64_t t127 = 13487768328960LLU;

    t127 = (x509&(x510|(x511^x512)));

    if (t127 != 9223427956666227713LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = -11;
	static uint32_t x515 = 2U;
	int32_t x516 = INT32_MIN;
	uint32_t t128 = 4130966U;

    t128 = (x513&(x514|(x515^x516)));

    if (t128 != 4294934528U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint32_t x519 = 13748U;
	int8_t x520 = -1;
	int64_t t129 = -27919LL;

    t129 = (x517&(x518|(x519^x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	static volatile int32_t x523 = -963;
	volatile int8_t x524 = -7;
	static volatile int32_t t130 = 763;

    t130 = (x521&(x522|(x523^x524)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	int32_t x528 = -1;

    t131 = (x525&(x526|(x527^x528)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x530 = UINT64_MAX;
	int64_t x531 = 555852575LL;
	int8_t x532 = -1;
	uint64_t t132 = 8354280502592922913LLU;

    t132 = (x529&(x530|(x531^x532)));

    if (t132 != 32767LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MAX;
	static int32_t x534 = -397313;
	static uint16_t x535 = 1U;
	static int16_t x536 = INT16_MIN;
	static int32_t t133 = -1811069;

    t133 = (x533&(x534|(x535^x536)));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	static int64_t x538 = INT64_MIN;

    t134 = (x537&(x538|(x539^x540)));

    if (t134 != 18446743126124174592LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x542 = 191948594U;
	volatile uint64_t x544 = UINT64_MAX;
	uint64_t t135 = 24885022LLU;

    t135 = (x541&(x542|(x543^x544)));

    if (t135 != 326LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 24U;
	uint32_t x548 = UINT32_MAX;
	int64_t t136 = -958801LL;

    t136 = (x545&(x546|(x547^x548)));

    if (t136 != 24LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 968946047199305491LLU;
	uint64_t x550 = UINT64_MAX;
	static uint8_t x551 = 87U;
	static int64_t x552 = -43982094LL;

    t137 = (x549&(x550|(x551^x552)));

    if (t137 != 968946047199305491LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	uint8_t x554 = UINT8_MAX;
	int8_t x555 = -1;
	volatile int64_t t138 = -872166471563LL;

    t138 = (x553&(x554|(x555^x556)));

    if (t138 != 255LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	int32_t x558 = 1415;
	static int8_t x559 = 1;
	static int64_t x560 = -108071142340149221LL;
	volatile int64_t t139 = INT64_MIN;

    t139 = (x557&(x558|(x559^x560)));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x563 = 33U;

    t140 = (x561&(x562|(x563^x564)));

    if (t140 != 3601LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 245U;
	int16_t x568 = -1;
	uint32_t t141 = 459U;

    t141 = (x565&(x566|(x567^x568)));

    if (t141 != 245U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = 1504;
	int8_t x571 = INT8_MAX;
	int8_t x572 = INT8_MAX;
	volatile uint32_t t142 = 60689044U;

    t142 = (x569&(x570|(x571^x572)));

    if (t142 != 1504U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = -1;
	static uint64_t x574 = UINT64_MAX;
	int8_t x575 = 9;
	static volatile uint64_t t143 = UINT64_MAX;

    t143 = (x573&(x574|(x575^x576)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 3056U;
	static int8_t x578 = -51;
	int8_t x579 = INT8_MAX;
	int32_t x580 = 61;
	volatile int32_t t144 = 1632;

    t144 = (x577&(x578|(x579^x580)));

    if (t144 != 3008) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x582 = 31U;
	int8_t x583 = INT8_MAX;
	int32_t t145 = 31;

    t145 = (x581&(x582|(x583^x584)));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x587 = 0;
	uint32_t x588 = 474488302U;
	static uint32_t t146 = 190U;

    t146 = (x585&(x586|(x587^x588)));

    if (t146 != 4294934528U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 27899275872LLU;
	static int16_t x591 = INT16_MIN;
	int32_t x592 = -1;

    t147 = (x589&(x590|(x591^x592)));

    if (t147 != 600672LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x593 = 812479852484190LLU;
	int8_t x594 = -1;
	static int32_t x595 = -1;
	int8_t x596 = INT8_MIN;
	static volatile uint64_t t148 = 14310605LLU;

    t148 = (x593&(x594|(x595^x596)));

    if (t148 != 812479852484190LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = 15212067324403LLU;
	uint16_t x599 = 3U;
	int32_t x600 = INT32_MIN;
	uint64_t t149 = 5820878LLU;

    t149 = (x597&(x598|(x599^x600)));

    if (t149 != 3588129267LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	uint8_t x602 = 103U;
	static int64_t x603 = 965016690963468LL;
	int64_t x604 = -44636710697045LL;
	volatile int64_t t150 = 969LL;

    t150 = (x601&(x602|(x603^x604)));

    if (t150 != 103LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MAX;
	volatile int64_t t151 = -346544232LL;

    t151 = (x605&(x606|(x607^x608)));

    if (t151 != 32653LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = INT8_MIN;
	int8_t x610 = 32;
	int32_t x611 = INT32_MIN;
	volatile int32_t x612 = INT32_MIN;

    t152 = (x609&(x610|(x611^x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x613 = 0U;
	int64_t x614 = INT64_MAX;
	int16_t x615 = -1;
	volatile int64_t x616 = -670573295396LL;
	static int64_t t153 = -7661LL;

    t153 = (x613&(x614|(x615^x616)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = 1LL;
	uint64_t x619 = UINT64_MAX;
	int8_t x620 = -1;
	uint64_t t154 = 3705LLU;

    t154 = (x617&(x618|(x619^x620)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	uint64_t x623 = 665959883943LLU;
	static volatile int8_t x624 = -39;
	volatile uint64_t t155 = 26900583508LLU;

    t155 = (x621&(x622|(x623^x624)));

    if (t155 != 127LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	uint32_t x627 = 1U;
	uint8_t x628 = UINT8_MAX;

    t156 = (x625&(x626|(x627^x628)));

    if (t156 != 4294967168U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x630 = 7306817499155LLU;
	volatile uint16_t x631 = 620U;
	static int32_t x632 = 969;
	uint64_t t157 = 44796047497LLU;

    t157 = (x629&(x630|(x631^x632)));

    if (t157 != 7306817499575LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 536U;
	volatile int8_t x635 = INT8_MAX;
	volatile int32_t x636 = INT32_MAX;
	volatile int64_t t158 = 2665906083LL;

    t158 = (x633&(x634|(x635^x636)));

    if (t158 != 520LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 262U;
	static volatile int16_t x639 = -90;
	int32_t x640 = -29386073;

    t159 = (x637&(x638|(x639^x640)));

    if (t159 != 256) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	int16_t x643 = INT16_MIN;
	volatile uint8_t x644 = UINT8_MAX;
	static int64_t t160 = -51588LL;

    t160 = (x641&(x642|(x643^x644)));

    if (t160 != -32513LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	int32_t x646 = -1;
	int32_t x647 = INT32_MIN;
	int16_t x648 = INT16_MIN;
	int32_t t161 = 0;

    t161 = (x645&(x646|(x647^x648)));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	int32_t x650 = 0;
	int8_t x651 = INT8_MIN;
	static int8_t x652 = INT8_MAX;
	volatile int32_t t162 = 1;

    t162 = (x649&(x650|(x651^x652)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 1;
	uint16_t x655 = 14U;
	static int32_t t163 = 465;

    t163 = (x653&(x654|(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MIN;
	int64_t x658 = -1LL;
	int16_t x659 = -1;
	static volatile int32_t x660 = -1;
	static volatile int64_t t164 = INT64_MIN;

    t164 = (x657&(x658|(x659^x660)));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	volatile int16_t x662 = INT16_MAX;
	static uint8_t x663 = 38U;
	volatile uint32_t x664 = 498221U;
	volatile uint32_t t165 = 589008U;

    t165 = (x661&(x662|(x663^x664)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = 4299677;
	volatile int8_t x666 = 1;
	int16_t x667 = 51;
	uint16_t x668 = 1U;
	volatile int32_t t166 = -638041352;

    t166 = (x665&(x666|(x667^x668)));

    if (t166 != 17) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 1441U;
	uint16_t x670 = UINT16_MAX;
	int32_t x671 = -343;
	static volatile uint8_t x672 = 0U;
	int32_t t167 = -3;

    t167 = (x669&(x670|(x671^x672)));

    if (t167 != 1441) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x673 = INT64_MIN;
	static uint32_t x674 = 20U;
	int64_t x675 = -1LL;
	uint16_t x676 = UINT16_MAX;
	static volatile int64_t t168 = INT64_MIN;

    t168 = (x673&(x674|(x675^x676)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x678 = UINT32_MAX;
	volatile int8_t x679 = 1;
	int16_t x680 = -15498;

    t169 = (x677&(x678|(x679^x680)));

    if (t169 != 4294934528U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 0U;
	volatile int32_t x682 = -1;
	uint64_t x683 = 7634994192LLU;
	uint16_t x684 = 161U;
	volatile uint64_t t170 = 50528242588LLU;

    t170 = (x681&(x682|(x683^x684)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 2U;
	volatile uint64_t x686 = UINT64_MAX;
	int64_t x687 = -1LL;
	volatile uint64_t t171 = 1LLU;

    t171 = (x685&(x686|(x687^x688)));

    if (t171 != 2LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x689 = INT16_MAX;
	static uint64_t x690 = 2535725330LLU;
	int16_t x691 = INT16_MIN;
	volatile uint64_t x692 = 180846355LLU;
	uint64_t t172 = 64328LLU;

    t172 = (x689&(x690|(x691^x692)));

    if (t172 != 32531LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	int16_t x694 = -118;
	static int64_t x695 = -232777547849330LL;
	int8_t x696 = INT8_MAX;
	volatile uint64_t t173 = 19848096690085082LLU;

    t173 = (x693&(x694|(x695^x696)));

    if (t173 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 3754842U;
	int64_t x699 = INT64_MAX;
	int16_t x700 = -7;

    t174 = (x697&(x698|(x699^x700)));

    if (t174 != 2LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	uint8_t x702 = 0U;
	volatile int32_t x703 = -358392;
	volatile uint16_t x704 = 32626U;
	uint64_t t175 = 64635031808LLU;

    t175 = (x701&(x702|(x703^x704)));

    if (t175 != 18446744073709221754LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	uint32_t x706 = UINT32_MAX;
	volatile uint32_t t176 = 1863432U;

    t176 = (x705&(x706|(x707^x708)));

    if (t176 != 2147483648U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = INT32_MIN;
	int8_t x710 = INT8_MAX;
	uint8_t x711 = 11U;
	int32_t x712 = 1;
	int32_t t177 = -2251;

    t177 = (x709&(x710|(x711^x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	volatile int16_t x714 = -1;
	volatile uint32_t x715 = 903U;
	int64_t x716 = INT64_MIN;
	int64_t t178 = -16545757478246LL;

    t178 = (x713&(x714|(x715^x716)));

    if (t178 != -2147483648LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = INT16_MIN;
	static int64_t x718 = INT64_MIN;
	int16_t x719 = 54;
	int64_t x720 = INT64_MAX;
	volatile int64_t t179 = 2249LL;

    t179 = (x717&(x718|(x719^x720)));

    if (t179 != -32768LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = UINT64_MAX;
	static volatile int64_t x723 = INT64_MIN;
	uint8_t x724 = UINT8_MAX;
	volatile uint64_t t180 = UINT64_MAX;

    t180 = (x721&(x722|(x723^x724)));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 1U;
	int64_t x726 = -38508654496202LL;
	volatile int8_t x727 = 0;
	static uint32_t x728 = 190U;
	volatile int64_t t181 = 664358117LL;

    t181 = (x725&(x726|(x727^x728)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x730 = 19677806974LL;
	int64_t x732 = -38921108219LL;
	volatile int64_t t182 = 181397LL;

    t182 = (x729&(x730|(x731^x732)));

    if (t182 != -38839286528LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 8U;
	uint16_t x734 = 165U;
	uint8_t x735 = 1U;
	int32_t x736 = -876721614;
	volatile int32_t t183 = -3;

    t183 = (x733&(x734|(x735^x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x737 = INT8_MAX;
	int8_t x738 = INT8_MAX;
	int16_t x739 = 7889;
	int64_t x740 = -1LL;

    t184 = (x737&(x738|(x739^x740)));

    if (t184 != 127LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x742 = 466;
	uint32_t x743 = 56U;
	uint32_t x744 = 1U;
	uint32_t t185 = 179U;

    t185 = (x741&(x742|(x743^x744)));

    if (t185 != 507U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	volatile uint8_t x746 = UINT8_MAX;
	uint8_t x747 = 3U;
	int64_t t186 = 15LL;

    t186 = (x745&(x746|(x747^x748)));

    if (t186 != 4294967295LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = -213438849756443LL;
	uint64_t x750 = 190335LLU;
	uint64_t x751 = UINT64_MAX;
	int32_t x752 = -1;
	uint64_t t187 = 195593714631509LLU;

    t187 = (x749&(x750|(x751^x752)));

    if (t187 != 49765LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -850804454902055LL;
	static uint32_t x754 = 445930U;
	uint8_t x756 = UINT8_MAX;
	int64_t t188 = 0LL;

    t188 = (x753&(x754|(x755^x756)));

    if (t188 != -850804454902072LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 3683921898064917969LLU;
	int16_t x758 = INT16_MIN;
	volatile uint8_t x760 = 1U;
	static uint64_t t189 = 0LLU;

    t189 = (x757&(x758|(x759^x760)));

    if (t189 != 3683921898064904193LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = 6;
	int16_t x764 = -1;
	uint64_t t190 = 1897769958093195LLU;

    t190 = (x761&(x762|(x763^x764)));

    if (t190 != 45LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MAX;
	uint32_t x767 = UINT32_MAX;
	int32_t x768 = -1;
	volatile uint32_t t191 = 101042002U;

    t191 = (x765&(x766|(x767^x768)));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	volatile int32_t x770 = INT32_MIN;
	uint32_t x771 = 642U;
	int32_t x772 = -1;
	uint64_t t192 = 831272LLU;

    t192 = (x769&(x770|(x771^x772)));

    if (t192 != 4294966653LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -198;
	int64_t x774 = INT64_MAX;
	int64_t t193 = -5223600170987LL;

    t193 = (x773&(x774|(x775^x776)));

    if (t193 != -198LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 534275U;
	int8_t x780 = -1;
	volatile uint32_t t194 = 3317211U;

    t194 = (x777&(x778|(x779^x780)));

    if (t194 != 534275U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	int8_t x782 = 21;
	volatile int8_t x784 = INT8_MIN;

    t195 = (x781&(x782|(x783^x784)));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -7;
	uint64_t x787 = 390204670LLU;
	static volatile uint64_t t196 = 930LLU;

    t196 = (x785&(x786|(x787^x788)));

    if (t196 != 18446744073709522168LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = 1U;
	static uint32_t x791 = 52868U;
	volatile uint64_t x792 = 3931806110630800LLU;
	static volatile uint64_t t197 = 919816986LLU;

    t197 = (x789&(x790|(x791^x792)));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x793 = INT64_MAX;
	volatile uint64_t x795 = 3514LLU;
	volatile uint64_t t198 = 202263620087LLU;

    t198 = (x793&(x794|(x795^x796)));

    if (t198 != 1607319479185515391LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x797 = 17138U;
	int32_t x799 = INT32_MAX;
	static uint32_t x800 = 2303U;
	volatile uint32_t t199 = 30632U;

    t199 = (x797&(x798|(x799^x800)));

    if (t199 != 17138U) { NG(); } else { ; }
	
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

