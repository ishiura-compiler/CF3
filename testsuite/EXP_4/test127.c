
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

int64_t x3 = INT64_MIN;
int64_t t0 = INT64_MIN;
volatile int8_t x8 = 0;
static int8_t x11 = INT8_MIN;
uint64_t t3 = 466876105749345LLU;
volatile int16_t x21 = 4260;
int64_t x23 = INT64_MIN;
static int8_t x25 = INT8_MIN;
int64_t x27 = INT64_MAX;
uint32_t x31 = 91U;
int32_t x32 = INT32_MIN;
int32_t x47 = -229973;
static int64_t x51 = -1LL;
static int16_t x52 = -4;
int32_t x54 = INT32_MAX;
int8_t x55 = INT8_MIN;
int32_t t11 = -23;
int32_t x63 = -13875647;
static int16_t x64 = -1;
volatile int64_t x69 = INT64_MIN;
volatile uint64_t x70 = UINT64_MAX;
int8_t x72 = INT8_MIN;
uint64_t x80 = 282674869989181841LLU;
volatile uint32_t x84 = 65U;
volatile int32_t t18 = 208160576;
static int8_t x93 = INT8_MIN;
uint8_t x97 = UINT8_MAX;
static int32_t x98 = INT32_MAX;
int8_t x101 = 40;
volatile int16_t x103 = INT16_MIN;
static int8_t x104 = 31;
int32_t x112 = -439459024;
uint16_t x115 = 4064U;
static uint32_t x117 = UINT32_MAX;
int16_t x118 = INT16_MIN;
volatile uint64_t t27 = 276LLU;
volatile int8_t x136 = INT8_MAX;
volatile int32_t t31 = -726031191;
uint32_t x148 = 17490U;
static uint16_t x149 = UINT16_MAX;
int16_t x152 = INT16_MIN;
int16_t x165 = INT16_MIN;
uint64_t x167 = 6578LLU;
int8_t x178 = -1;
int32_t t38 = -500;
int32_t x183 = INT32_MIN;
int64_t x186 = INT64_MIN;
volatile int16_t x189 = -1;
int64_t x190 = INT64_MIN;
static int32_t x197 = -833;
uint64_t x199 = UINT64_MAX;
int64_t x210 = INT64_MIN;
volatile int32_t t44 = 216481;
uint64_t x214 = UINT64_MAX;
int32_t x216 = -3926;
int16_t x226 = -12;
uint32_t t49 = 1874U;
int64_t x242 = INT64_MIN;
static uint32_t x245 = UINT32_MAX;
static int64_t x246 = -75180879LL;
int32_t x250 = -1;
uint8_t x253 = UINT8_MAX;
int8_t x259 = 29;
static int32_t x267 = INT32_MAX;
int8_t x270 = INT8_MIN;
int8_t x272 = INT8_MIN;
volatile int32_t t57 = 12871342;
uint16_t x282 = 2490U;
static uint16_t x284 = UINT16_MAX;
static uint8_t x296 = UINT8_MAX;
int64_t x305 = -1LL;
int8_t x307 = -1;
volatile int8_t x313 = INT8_MIN;
static uint8_t x320 = UINT8_MAX;
int64_t t66 = -1043075LL;
volatile int32_t t67 = -915;
static int32_t x330 = INT32_MIN;
static int16_t x334 = INT16_MIN;
uint16_t x336 = 66U;
int32_t t70 = -43;
uint16_t x341 = 941U;
int32_t x343 = INT32_MIN;
int64_t x355 = INT64_MAX;
int32_t x362 = INT32_MIN;
uint8_t x363 = 13U;
static int32_t x365 = INT32_MIN;
int16_t x369 = 1;
volatile int32_t t77 = 43;
int8_t x373 = 4;
volatile int64_t x374 = -21439199LL;
uint64_t x388 = UINT64_MAX;
int8_t x393 = -1;
int32_t x401 = -1;
static volatile int32_t t84 = 1;
static uint32_t x405 = UINT32_MAX;
int8_t x410 = INT8_MAX;
volatile int64_t x414 = 20649015052038701LL;
static uint32_t x420 = 2U;
uint16_t x421 = 6578U;
volatile int16_t x425 = -1;
uint64_t x429 = 17484809639854LLU;
static uint8_t x432 = 85U;
volatile uint64_t x436 = 8136373988193062LLU;
static int32_t t93 = -4077335;
int8_t x444 = 0;
int64_t x445 = -1LL;
uint64_t t96 = UINT64_MAX;
uint32_t x455 = 489U;
uint32_t x471 = UINT32_MAX;
int16_t x472 = 101;
volatile int32_t x473 = INT32_MIN;
uint8_t x476 = 4U;
int16_t x480 = INT16_MIN;
uint8_t x489 = 1U;
uint64_t x504 = UINT64_MAX;
static int32_t t108 = 361429396;
volatile int64_t x507 = INT64_MIN;
uint64_t x508 = UINT64_MAX;
static uint32_t t109 = 201U;
uint8_t x513 = UINT8_MAX;
volatile uint16_t x515 = UINT16_MAX;
int16_t x516 = -1;
volatile int16_t x532 = INT16_MIN;
int64_t x538 = 277630484018304369LL;
static int8_t x545 = 1;
static volatile int8_t x547 = -3;
uint32_t t119 = UINT32_MAX;
uint16_t x559 = 27U;
uint32_t t120 = 27559518U;
static int8_t x586 = -4;
static volatile uint8_t x588 = UINT8_MAX;
static int32_t t123 = 58190052;
volatile uint16_t x595 = 1301U;
static uint16_t x601 = 1288U;
int32_t x604 = -1;
volatile uint32_t t128 = 648237U;
int8_t x612 = INT8_MAX;
static int64_t x622 = INT64_MIN;
static uint64_t x631 = UINT64_MAX;
static volatile int64_t t135 = 28705667LL;
static int16_t x647 = INT16_MIN;
volatile uint16_t x648 = UINT16_MAX;
uint32_t t136 = 14U;
uint8_t x652 = 9U;
volatile int32_t t137 = -17;
int16_t x655 = -1;
volatile int8_t x660 = INT8_MAX;
static int16_t x663 = -1;
volatile int64_t x666 = -1LL;
static int16_t x668 = -1;
uint32_t t141 = 262012U;
int8_t x671 = -1;
int8_t x672 = 1;
int16_t x686 = INT16_MIN;
int8_t x688 = INT8_MIN;
uint8_t x694 = 98U;
uint32_t x695 = 117U;
uint16_t x699 = 31185U;
int32_t t149 = 106690490;
int16_t x706 = INT16_MIN;
uint8_t x720 = 0U;
int64_t x724 = 39522237670844LL;
int8_t x725 = -1;
int8_t x726 = INT8_MIN;
static uint8_t x727 = UINT8_MAX;
volatile int64_t x731 = -1LL;
int32_t x750 = INT32_MAX;
int8_t x751 = -1;
static volatile int64_t t159 = 15813LL;
static uint32_t x753 = UINT32_MAX;
uint64_t x755 = 715LLU;
volatile uint8_t x756 = 0U;
int8_t x764 = INT8_MIN;
int32_t t161 = -7179;
volatile int64_t t162 = -223426740289402LL;
int8_t x776 = 1;
int32_t t163 = 0;
int32_t x779 = INT32_MAX;
int8_t x786 = INT8_MIN;
int32_t x790 = INT32_MIN;
int16_t x792 = -1;
volatile uint32_t t167 = 49U;
int16_t x800 = INT16_MIN;
static uint32_t x808 = 557U;
int32_t t170 = 1;
int16_t x809 = INT16_MIN;
static int64_t x816 = -1LL;
int64_t x825 = INT64_MIN;
int32_t x826 = -22931406;
static volatile int32_t x827 = INT32_MAX;
int32_t t176 = 175325554;
int64_t x840 = 94LL;
volatile int32_t t178 = 116296;
uint8_t x848 = 127U;
static int16_t x850 = -3626;
int32_t x853 = INT32_MIN;
int16_t x857 = INT16_MAX;
volatile uint64_t x858 = 32114018301954LLU;
static int8_t x859 = -1;
static int16_t x860 = -2;
uint32_t x864 = 25962U;
static int32_t t184 = -6;
uint64_t x874 = 200485938116971LLU;
volatile int8_t x876 = -1;
int32_t t188 = INT32_MIN;
int64_t x885 = INT64_MIN;
int16_t x897 = INT16_MAX;
int16_t x899 = INT16_MAX;
static int32_t x902 = -2584907;
int8_t x947 = -2;
int8_t x948 = INT8_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MIN;
	volatile uint8_t x4 = UINT8_MAX;

    t0 = (x1+(x2<=(x3+x4)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int16_t x6 = -11;
	int32_t x7 = 1;
	static int32_t t1 = 20;

    t1 = (x5+(x6<=(x7+x8)));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	int16_t x10 = -1;
	int16_t x12 = 1769;
	static int32_t t2 = 2;

    t2 = (x9+(x10<=(x11+x12)));

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x13 = 64305890055613LLU;
	int16_t x14 = -1;
	int8_t x15 = INT8_MIN;
	int64_t x16 = -5234476695649443LL;

    t3 = (x13+(x14<=(x15+x16)));

    if (t3 != 64305890055613LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = 28;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t4 = -404;

    t4 = (x21+(x22<=(x23+x24)));

    if (t4 != 4260) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x26 = UINT16_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 5334773;

    t5 = (x25+(x26<=(x27+x28)));

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	static uint64_t x30 = 1831501577LLU;
	volatile int32_t t6 = -13062;

    t6 = (x29+(x30<=(x31+x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x37 = UINT64_MAX;
	int16_t x38 = 2647;
	volatile int64_t x39 = INT64_MIN;
	uint32_t x40 = 338U;
	volatile uint64_t t7 = UINT64_MAX;

    t7 = (x37+(x38<=(x39+x40)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = -1;
	int16_t x46 = -1;
	static uint64_t x48 = UINT64_MAX;
	int32_t t8 = -2494;

    t8 = (x45+(x46<=(x47+x48)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MAX;
	int16_t x50 = 5098;
	static int32_t t9 = -3;

    t9 = (x49+(x50<=(x51+x52)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	int64_t x56 = -183705LL;
	uint64_t t10 = UINT64_MAX;

    t10 = (x53+(x54<=(x55+x56)));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = -1;
	int64_t x59 = -375855LL;
	int64_t x60 = -36205238LL;

    t11 = (x57+(x58<=(x59+x60)));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 3U;
	uint8_t x62 = 1U;
	int32_t t12 = 1519;

    t12 = (x61+(x62<=(x63+x64)));

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x65 = 106U;
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = INT32_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t13 = -6641;

    t13 = (x65+(x66<=(x67+x68)));

    if (t13 != 106) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x71 = -11488;
	int64_t t14 = INT64_MIN;

    t14 = (x69+(x70<=(x71+x72)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x74 = 1U;
	uint16_t x75 = 0U;
	static volatile int8_t x76 = INT8_MIN;
	int64_t t15 = INT64_MIN;

    t15 = (x73+(x74<=(x75+x76)));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	uint16_t x78 = 786U;
	volatile uint8_t x79 = 0U;
	int32_t t16 = 8;

    t16 = (x77+(x78<=(x79+x80)));

    if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x81 = -3182;
	int32_t x82 = -1;
	volatile uint32_t x83 = UINT32_MAX;
	int32_t t17 = -143942730;

    t17 = (x81+(x82<=(x83+x84)));

    if (t17 != -3182) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = -34;
	static uint16_t x88 = 21062U;

    t18 = (x85+(x86<=(x87+x88)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x89 = 7U;
	int64_t x90 = INT64_MIN;
	int16_t x91 = 1;
	int64_t x92 = 22349LL;
	volatile int32_t t19 = 366;

    t19 = (x89+(x90<=(x91+x92)));

    if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x94 = 59U;
	static uint32_t x95 = 0U;
	int32_t x96 = INT32_MIN;
	int32_t t20 = 1623205;

    t20 = (x93+(x94<=(x95+x96)));

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x99 = -44;
	uint8_t x100 = 10U;
	int32_t t21 = 0;

    t21 = (x97+(x98<=(x99+x100)));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = INT8_MIN;
	static volatile int32_t t22 = 495;

    t22 = (x101+(x102<=(x103+x104)));

    if (t22 != 40) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x105 = 28LLU;
	int16_t x106 = INT16_MIN;
	volatile int32_t x107 = 855885;
	int64_t x108 = -141311233476880LL;
	static volatile uint64_t t23 = 10LLU;

    t23 = (x105+(x106<=(x107+x108)));

    if (t23 != 28LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 8U;
	int16_t x110 = INT16_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	volatile int32_t t24 = -25183;

    t24 = (x109+(x110<=(x111+x112)));

    if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x113 = 15U;
	int64_t x114 = -2057181LL;
	int16_t x116 = 84;
	int32_t t25 = 1;

    t25 = (x113+(x114<=(x115+x116)));

    if (t25 != 16) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x119 = -302465LL;
	static int32_t x120 = INT32_MIN;
	uint32_t t26 = UINT32_MAX;

    t26 = (x117+(x118<=(x119+x120)));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 82256LLU;
	uint32_t x126 = 606822U;
	volatile uint32_t x127 = 2U;
	volatile int8_t x128 = -1;

    t27 = (x125+(x126<=(x127+x128)));

    if (t27 != 82256LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t28 = 10406;

    t28 = (x129+(x130<=(x131+x132)));

    if (t28 != 256) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x133 = -53;
	int8_t x134 = -1;
	static uint16_t x135 = 10U;
	static int32_t t29 = 36811091;

    t29 = (x133+(x134<=(x135+x136)));

    if (t29 != -52) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = 0;
	int8_t x138 = 14;
	static uint16_t x139 = UINT16_MAX;
	int16_t x140 = -2;
	static volatile int32_t t30 = -133;

    t30 = (x137+(x138<=(x139+x140)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x141 = 0U;
	uint32_t x142 = 1009599539U;
	static uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 13U;

    t31 = (x141+(x142<=(x143+x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x145 = INT8_MIN;
	uint16_t x146 = UINT16_MAX;
	volatile int32_t x147 = 127928180;
	int32_t t32 = 2206607;

    t32 = (x145+(x146<=(x147+x148)));

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x150 = 1892679504538LLU;
	volatile uint16_t x151 = UINT16_MAX;
	static int32_t t33 = -77;

    t33 = (x149+(x150<=(x151+x152)));

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x157 = 0U;
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = INT32_MIN;
	int32_t x160 = 7;
	volatile int32_t t34 = 345;

    t34 = (x157+(x158<=(x159+x160)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x161 = 1480440320574743LLU;
	uint32_t x162 = UINT32_MAX;
	static uint16_t x163 = UINT16_MAX;
	static uint32_t x164 = UINT32_MAX;
	volatile uint64_t t35 = 3407320329409282LLU;

    t35 = (x161+(x162<=(x163+x164)));

    if (t35 != 1480440320574743LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x166 = UINT16_MAX;
	int32_t x168 = -1;
	int32_t t36 = 8460;

    t36 = (x165+(x166<=(x167+x168)));

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x169 = INT16_MIN;
	volatile int32_t x170 = 242681438;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t37 = 4246363;

    t37 = (x169+(x170<=(x171+x172)));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x179 = -58LL;
	int64_t x180 = INT64_MAX;

    t38 = (x177+(x178<=(x179+x180)));

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x181 = 1U;
	int8_t x182 = -1;
	volatile int64_t x184 = INT64_MAX;
	int32_t t39 = -1;

    t39 = (x181+(x182<=(x183+x184)));

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x185 = 3010841976256349LLU;
	uint8_t x187 = 1U;
	static int8_t x188 = INT8_MIN;
	uint64_t t40 = 1266LLU;

    t40 = (x185+(x186<=(x187+x188)));

    if (t40 != 3010841976256350LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x191 = 407255068178827LLU;
	volatile uint8_t x192 = 42U;
	static volatile int32_t t41 = 3204;

    t41 = (x189+(x190<=(x191+x192)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x193 = 28957U;
	volatile int64_t x194 = 8397LL;
	int32_t x195 = 311611;
	int64_t x196 = -1LL;
	uint32_t t42 = 78235687U;

    t42 = (x193+(x194<=(x195+x196)));

    if (t42 != 28958U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x198 = INT32_MAX;
	int16_t x200 = -1;
	static int32_t t43 = -15055;

    t43 = (x197+(x198<=(x199+x200)));

    if (t43 != -832) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x209 = INT32_MIN;
	int32_t x211 = -1065478788;
	int64_t x212 = 12386946088115LL;

    t44 = (x209+(x210<=(x211+x212)));

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x213 = INT8_MIN;
	volatile uint8_t x215 = 4U;
	volatile int32_t t45 = -259685;

    t45 = (x213+(x214<=(x215+x216)));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x221 = INT16_MIN;
	static volatile int16_t x222 = INT16_MAX;
	static uint64_t x223 = UINT64_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t46 = -17;

    t46 = (x221+(x222<=(x223+x224)));

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x225 = -2;
	static uint16_t x227 = 82U;
	int32_t x228 = INT32_MIN;
	static int32_t t47 = 667;

    t47 = (x225+(x226<=(x227+x228)));

    if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x229 = INT8_MIN;
	static int8_t x230 = 0;
	volatile uint8_t x231 = 0U;
	int8_t x232 = -1;
	int32_t t48 = -6937;

    t48 = (x229+(x230<=(x231+x232)));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x237 = 1003443591U;
	static volatile int8_t x238 = 0;
	int16_t x239 = -1;
	uint32_t x240 = 1U;

    t49 = (x237+(x238<=(x239+x240)));

    if (t49 != 1003443592U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x241+(x242<=(x243+x244)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x247 = INT8_MIN;
	static volatile int16_t x248 = -1;
	uint32_t t51 = 679652056U;

    t51 = (x245+(x246<=(x247+x248)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	volatile int32_t x252 = -1;
	uint32_t t52 = UINT32_MAX;

    t52 = (x249+(x250<=(x251+x252)));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x254 = 1;
	uint16_t x255 = 371U;
	int32_t x256 = -1;
	static int32_t t53 = 128989;

    t53 = (x253+(x254<=(x255+x256)));

    if (t53 != 256) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x257 = -1;
	uint32_t x258 = 110478U;
	int16_t x260 = 10;
	volatile int32_t t54 = 1619783;

    t54 = (x257+(x258<=(x259+x260)));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x261 = 4U;
	int8_t x262 = INT8_MAX;
	uint64_t x263 = 3LLU;
	volatile int16_t x264 = -1;
	volatile int32_t t55 = -82057747;

    t55 = (x261+(x262<=(x263+x264)));

    if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x265 = INT8_MIN;
	static int8_t x266 = -9;
	uint32_t x268 = 26225344U;
	int32_t t56 = -2;

    t56 = (x265+(x266<=(x267+x268)));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;

    t57 = (x269+(x270<=(x271+x272)));

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x273 = -28;
	uint64_t x274 = 126446889989641LLU;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = 23U;
	volatile int32_t t58 = 0;

    t58 = (x273+(x274<=(x275+x276)));

    if (t58 != -27) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x281 = -1;
	uint32_t x283 = 12719800U;
	static int32_t t59 = 2;

    t59 = (x281+(x282<=(x283+x284)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = -51269;
	static int16_t x287 = -43;
	uint32_t x288 = 7114503U;
	int32_t t60 = -8175923;

    t60 = (x285+(x286<=(x287+x288)));

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x293 = 10U;
	int32_t x294 = -82;
	int8_t x295 = -1;
	int32_t t61 = 0;

    t61 = (x293+(x294<=(x295+x296)));

    if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x301 = 0U;
	int32_t x302 = -962376070;
	volatile int32_t x303 = -1;
	uint8_t x304 = 15U;
	int32_t t62 = 38;

    t62 = (x301+(x302<=(x303+x304)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x306 = INT8_MAX;
	int8_t x308 = INT8_MAX;
	int64_t t63 = -9377339410692940LL;

    t63 = (x305+(x306<=(x307+x308)));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x309 = INT8_MAX;
	static int64_t x310 = 1734057147076LL;
	static volatile int32_t x311 = INT32_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t64 = -18;

    t64 = (x309+(x310<=(x311+x312)));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x314 = INT8_MIN;
	uint16_t x315 = 0U;
	static volatile uint16_t x316 = UINT16_MAX;
	int32_t t65 = 0;

    t65 = (x313+(x314<=(x315+x316)));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x317 = -299LL;
	static volatile int8_t x318 = 10;
	static int16_t x319 = -1;

    t66 = (x317+(x318<=(x319+x320)));

    if (t66 != -298LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x321 = 49U;
	volatile int64_t x322 = -11269464675LL;
	static volatile uint16_t x323 = 32U;
	int16_t x324 = -1;

    t67 = (x321+(x322<=(x323+x324)));

    if (t67 != 50) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x325 = 1;
	int16_t x326 = -13;
	static volatile uint16_t x327 = UINT16_MAX;
	volatile int8_t x328 = INT8_MIN;
	volatile int32_t t68 = 51140;

    t68 = (x325+(x326<=(x327+x328)));

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	static uint32_t x331 = 4U;
	int64_t x332 = INT64_MIN;
	uint32_t t69 = UINT32_MAX;

    t69 = (x329+(x330<=(x331+x332)));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x333 = 6;
	int8_t x335 = INT8_MIN;

    t70 = (x333+(x334<=(x335+x336)));

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x342 = UINT32_MAX;
	uint64_t x344 = 36579LLU;
	int32_t t71 = 75313;

    t71 = (x341+(x342<=(x343+x344)));

    if (t71 != 942) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = -1475;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = 27U;
	volatile int8_t x348 = INT8_MIN;
	static int32_t t72 = 721329281;

    t72 = (x345+(x346<=(x347+x348)));

    if (t72 != -1474) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x349 = -7763965222818648LL;
	volatile int8_t x350 = INT8_MAX;
	int64_t x351 = -1LL;
	int32_t x352 = INT32_MIN;
	volatile int64_t t73 = -271064237LL;

    t73 = (x349+(x350<=(x351+x352)));

    if (t73 != -7763965222818648LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = INT64_MIN;
	int32_t x356 = -1;
	volatile int32_t t74 = -125;

    t74 = (x353+(x354<=(x355+x356)));

    if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x361 = -109294LL;
	int8_t x364 = -1;
	volatile int64_t t75 = 3719842982LL;

    t75 = (x361+(x362<=(x363+x364)));

    if (t75 != -109293LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x366 = 1249583546U;
	int32_t x367 = INT32_MAX;
	static volatile int64_t x368 = -1LL;
	int32_t t76 = 5064857;

    t76 = (x365+(x366<=(x367+x368)));

    if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x370 = 0;
	static int32_t x371 = INT32_MIN;
	uint16_t x372 = 467U;

    t77 = (x369+(x370<=(x371+x372)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x375 = UINT32_MAX;
	volatile int16_t x376 = INT16_MAX;
	int32_t t78 = 1575684;

    t78 = (x373+(x374<=(x375+x376)));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x377 = INT32_MAX;
	uint32_t x378 = 302177U;
	volatile int32_t x379 = 438;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t79 = INT32_MAX;

    t79 = (x377+(x378<=(x379+x380)));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x385 = 244U;
	static volatile int8_t x386 = INT8_MIN;
	int32_t x387 = -6101;
	static uint32_t t80 = 221740U;

    t80 = (x385+(x386<=(x387+x388)));

    if (t80 != 244U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x389 = UINT32_MAX;
	uint8_t x390 = UINT8_MAX;
	volatile uint64_t x391 = 12LLU;
	uint8_t x392 = UINT8_MAX;
	static uint32_t t81 = 50U;

    t81 = (x389+(x390<=(x391+x392)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x394 = -155244281LL;
	volatile int16_t x395 = -5779;
	int8_t x396 = INT8_MAX;
	volatile int32_t t82 = 47;

    t82 = (x393+(x394<=(x395+x396)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	uint8_t x399 = 8U;
	uint8_t x400 = 3U;
	volatile int64_t t83 = -127LL;

    t83 = (x397+(x398<=(x399+x400)));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x402 = -1;
	static volatile int16_t x403 = INT16_MAX;
	int8_t x404 = INT8_MIN;

    t84 = (x401+(x402<=(x403+x404)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x406 = 782;
	int8_t x407 = -1;
	uint64_t x408 = UINT64_MAX;
	uint32_t t85 = 5354U;

    t85 = (x405+(x406<=(x407+x408)));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x409 = UINT8_MAX;
	volatile int16_t x411 = -1;
	uint8_t x412 = 84U;
	int32_t t86 = -3722080;

    t86 = (x409+(x410<=(x411+x412)));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x413 = INT8_MAX;
	volatile int8_t x415 = 2;
	int64_t x416 = -811312685LL;
	static int32_t t87 = -7;

    t87 = (x413+(x414<=(x415+x416)));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x417 = 33U;
	volatile int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	static int32_t t88 = 61759712;

    t88 = (x417+(x418<=(x419+x420)));

    if (t88 != 34) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x422 = -625711;
	uint16_t x423 = 3U;
	volatile uint8_t x424 = 15U;
	static volatile int32_t t89 = 89335121;

    t89 = (x421+(x422<=(x423+x424)));

    if (t89 != 6579) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x426 = 13226755U;
	static volatile int16_t x427 = 3;
	static uint64_t x428 = UINT64_MAX;
	static int32_t t90 = 1727314;

    t90 = (x425+(x426<=(x427+x428)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x430 = INT8_MAX;
	int8_t x431 = INT8_MIN;
	volatile uint64_t t91 = 2262098950105220LLU;

    t91 = (x429+(x430<=(x431+x432)));

    if (t91 != 17484809639854LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = -27549878988LL;
	int8_t x435 = 14;
	int64_t t92 = INT64_MIN;

    t92 = (x433+(x434<=(x435+x436)));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x438 = -2992;
	volatile int64_t x439 = 38788715872138LL;
	volatile int16_t x440 = -1;

    t93 = (x437+(x438<=(x439+x440)));

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x441 = -1;
	int64_t x442 = -1LL;
	volatile uint16_t x443 = 1U;
	int32_t t94 = -4276;

    t94 = (x441+(x442<=(x443+x444)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x446 = INT16_MIN;
	volatile int64_t x447 = INT64_MAX;
	volatile int64_t x448 = -1LL;
	int64_t t95 = -700817508071307428LL;

    t95 = (x445+(x446<=(x447+x448)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x449 = UINT64_MAX;
	static volatile int8_t x450 = -1;
	int32_t x451 = INT32_MIN;
	static int64_t x452 = -751256694LL;

    t96 = (x449+(x450<=(x451+x452)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = UINT8_MAX;
	uint32_t x456 = 7U;
	uint64_t t97 = 87186LLU;

    t97 = (x453+(x454<=(x455+x456)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x457 = 284438564353331467LLU;
	volatile int32_t x458 = -3040;
	static uint64_t x459 = 563163LLU;
	int32_t x460 = -1;
	volatile uint64_t t98 = 621808LLU;

    t98 = (x457+(x458<=(x459+x460)));

    if (t98 != 284438564353331467LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x461 = 127U;
	volatile uint32_t x462 = 9848317U;
	uint64_t x463 = UINT64_MAX;
	static uint8_t x464 = 13U;
	volatile int32_t t99 = 25636;

    t99 = (x461+(x462<=(x463+x464)));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x465 = 537363U;
	static int32_t x466 = 91750;
	volatile uint32_t x467 = UINT32_MAX;
	uint8_t x468 = 0U;
	volatile uint32_t t100 = 432298163U;

    t100 = (x465+(x466<=(x467+x468)));

    if (t100 != 537364U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x469 = 26U;
	int32_t x470 = 2786;
	static volatile int32_t t101 = 57354;

    t101 = (x469+(x470<=(x471+x472)));

    if (t101 != 26) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x474 = -3523LL;
	uint32_t x475 = 1477705817U;
	int32_t t102 = -164521695;

    t102 = (x473+(x474<=(x475+x476)));

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x478 = INT8_MIN;
	uint8_t x479 = 31U;
	volatile int32_t t103 = INT32_MAX;

    t103 = (x477+(x478<=(x479+x480)));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x481 = -1;
	volatile uint32_t x482 = 558974953U;
	volatile int16_t x483 = INT16_MIN;
	int16_t x484 = -1;
	static int32_t t104 = 32851484;

    t104 = (x481+(x482<=(x483+x484)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x490 = INT64_MIN;
	volatile uint32_t x491 = UINT32_MAX;
	volatile int32_t x492 = INT32_MIN;
	int32_t t105 = 13286208;

    t105 = (x489+(x490<=(x491+x492)));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x493 = 311U;
	uint8_t x494 = 7U;
	volatile uint16_t x495 = UINT16_MAX;
	int32_t x496 = -119275167;
	int32_t t106 = -115213;

    t106 = (x493+(x494<=(x495+x496)));

    if (t106 != 311) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x497 = -1;
	static volatile int64_t x498 = -1LL;
	static uint32_t x499 = 266U;
	uint8_t x500 = 122U;
	int32_t t107 = -197674597;

    t107 = (x497+(x498<=(x499+x500)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x501 = UINT16_MAX;
	uint8_t x502 = UINT8_MAX;
	int8_t x503 = INT8_MAX;

    t108 = (x501+(x502<=(x503+x504)));

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x505 = 32591U;
	static int8_t x506 = INT8_MIN;

    t109 = (x505+(x506<=(x507+x508)));

    if (t109 != 32591U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x509 = UINT64_MAX;
	int8_t x510 = INT8_MIN;
	volatile int32_t x511 = INT32_MIN;
	volatile uint16_t x512 = 131U;
	uint64_t t110 = UINT64_MAX;

    t110 = (x509+(x510<=(x511+x512)));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x514 = 845LLU;
	int32_t t111 = 6464714;

    t111 = (x513+(x514<=(x515+x516)));

    if (t111 != 256) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x517 = 299LLU;
	uint32_t x518 = UINT32_MAX;
	int16_t x519 = -1;
	static int8_t x520 = -1;
	volatile uint64_t t112 = 273457742LLU;

    t112 = (x517+(x518<=(x519+x520)));

    if (t112 != 299LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x525 = 1613753LL;
	static volatile uint64_t x526 = 1368771LLU;
	static int8_t x527 = INT8_MAX;
	volatile int8_t x528 = 25;
	int64_t t113 = -256189600595LL;

    t113 = (x525+(x526<=(x527+x528)));

    if (t113 != 1613753LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = -43;
	static int8_t x531 = INT8_MIN;
	int32_t t114 = -181156311;

    t114 = (x529+(x530<=(x531+x532)));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x533 = 61;
	static int16_t x534 = INT16_MAX;
	uint8_t x535 = UINT8_MAX;
	volatile int32_t x536 = 53506;
	static int32_t t115 = 348014;

    t115 = (x533+(x534<=(x535+x536)));

    if (t115 != 62) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x537 = -4554;
	volatile int16_t x539 = 1;
	volatile int64_t x540 = -1LL;
	volatile int32_t t116 = 2607;

    t116 = (x537+(x538<=(x539+x540)));

    if (t116 != -4554) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MAX;
	int8_t x543 = 62;
	static int8_t x544 = INT8_MIN;
	volatile int32_t t117 = -931;

    t117 = (x541+(x542<=(x543+x544)));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x546 = UINT32_MAX;
	volatile uint64_t x548 = 141589805093LLU;
	int32_t t118 = -507120831;

    t118 = (x545+(x546<=(x547+x548)));

    if (t118 != 2) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x549 = UINT32_MAX;
	int64_t x550 = 299493655LL;
	static volatile int16_t x551 = INT16_MAX;
	static int64_t x552 = 63188LL;

    t119 = (x549+(x550<=(x551+x552)));

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x557 = 27983U;
	volatile uint8_t x558 = 10U;
	volatile int64_t x560 = 5513LL;

    t120 = (x557+(x558<=(x559+x560)));

    if (t120 != 27984U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x565 = 1U;
	int64_t x566 = INT64_MIN;
	volatile int64_t x567 = -1LL;
	int8_t x568 = INT8_MIN;
	static volatile int32_t t121 = 64218;

    t121 = (x565+(x566<=(x567+x568)));

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x581 = 0;
	int8_t x582 = 10;
	static int8_t x583 = 32;
	int64_t x584 = 12545839718LL;
	int32_t t122 = -99;

    t122 = (x581+(x582<=(x583+x584)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x585 = -1;
	int16_t x587 = -17;

    t123 = (x585+(x586<=(x587+x588)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x589 = INT32_MAX;
	int32_t x590 = -1;
	uint16_t x591 = UINT16_MAX;
	static uint64_t x592 = 9LLU;
	int32_t t124 = INT32_MAX;

    t124 = (x589+(x590<=(x591+x592)));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x593 = 11696332;
	int16_t x594 = -1;
	int8_t x596 = INT8_MIN;
	volatile int32_t t125 = -4039;

    t125 = (x593+(x594<=(x595+x596)));

    if (t125 != 11696333) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x597 = UINT16_MAX;
	int32_t x598 = 5237;
	uint32_t x599 = 2894981U;
	volatile int32_t x600 = 99393675;
	volatile int32_t t126 = 115103;

    t126 = (x597+(x598<=(x599+x600)));

    if (t126 != 65536) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x602 = UINT32_MAX;
	int64_t x603 = -1LL;
	volatile int32_t t127 = 50551104;

    t127 = (x601+(x602<=(x603+x604)));

    if (t127 != 1288) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x605 = 10821U;
	uint64_t x606 = 32175312140848LLU;
	volatile int64_t x607 = 3722342915LL;
	static uint64_t x608 = UINT64_MAX;

    t128 = (x605+(x606<=(x607+x608)));

    if (t128 != 10821U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x609 = 1127075012683022675LLU;
	int16_t x610 = INT16_MIN;
	uint32_t x611 = UINT32_MAX;
	uint64_t t129 = 10LLU;

    t129 = (x609+(x610<=(x611+x612)));

    if (t129 != 1127075012683022675LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x613 = INT16_MIN;
	static volatile int64_t x614 = -1LL;
	int16_t x615 = -1;
	uint64_t x616 = UINT64_MAX;
	int32_t t130 = 775712;

    t130 = (x613+(x614<=(x615+x616)));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x617 = INT16_MIN;
	uint64_t x618 = 774661511671LLU;
	uint16_t x619 = 250U;
	uint32_t x620 = UINT32_MAX;
	static volatile int32_t t131 = -964;

    t131 = (x617+(x618<=(x619+x620)));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x621 = -26;
	int32_t x623 = -1;
	int8_t x624 = INT8_MIN;
	volatile int32_t t132 = 79;

    t132 = (x621+(x622<=(x623+x624)));

    if (t132 != -25) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x625 = 30U;
	int8_t x626 = INT8_MIN;
	int64_t x627 = 303830050LL;
	uint64_t x628 = UINT64_MAX;
	int32_t t133 = -11750655;

    t133 = (x625+(x626<=(x627+x628)));

    if (t133 != 30) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x629 = UINT32_MAX;
	int32_t x630 = 953786103;
	uint64_t x632 = 6LLU;
	static uint32_t t134 = UINT32_MAX;

    t134 = (x629+(x630<=(x631+x632)));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x633 = -1LL;
	int8_t x634 = -1;
	int32_t x635 = -1;
	int64_t x636 = INT64_MAX;

    t135 = (x633+(x634<=(x635+x636)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x645 = 101U;
	uint32_t x646 = 18U;

    t136 = (x645+(x646<=(x647+x648)));

    if (t136 != 102U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x649 = INT8_MIN;
	int32_t x650 = INT32_MAX;
	int8_t x651 = INT8_MAX;

    t137 = (x649+(x650<=(x651+x652)));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x653 = INT64_MIN;
	static volatile int64_t x654 = -116831744757907LL;
	volatile int32_t x656 = INT32_MAX;
	int64_t t138 = 16989LL;

    t138 = (x653+(x654<=(x655+x656)));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x657 = 7014U;
	int8_t x658 = INT8_MIN;
	uint16_t x659 = 104U;
	uint32_t t139 = 3142954U;

    t139 = (x657+(x658<=(x659+x660)));

    if (t139 != 7015U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile uint16_t x662 = UINT16_MAX;
	uint32_t x664 = 103U;
	volatile uint32_t t140 = UINT32_MAX;

    t140 = (x661+(x662<=(x663+x664)));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x665 = 12775U;
	int16_t x667 = -31;

    t141 = (x665+(x666<=(x667+x668)));

    if (t141 != 12775U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x669 = INT64_MIN;
	static int32_t x670 = INT32_MIN;
	volatile int64_t t142 = -178925536979LL;

    t142 = (x669+(x670<=(x671+x672)));

    if (t142 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x673 = -1;
	uint64_t x674 = 1062218022159634017LLU;
	uint64_t x675 = 28328297212298689LLU;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t143 = -733192525;

    t143 = (x673+(x674<=(x675+x676)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x681 = 16274U;
	int32_t x682 = -1;
	int64_t x683 = INT64_MIN;
	uint64_t x684 = 1689LLU;
	int32_t t144 = 135;

    t144 = (x681+(x682<=(x683+x684)));

    if (t144 != 16274) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x685 = INT32_MIN;
	uint64_t x687 = UINT64_MAX;
	volatile int32_t t145 = 718389543;

    t145 = (x685+(x686<=(x687+x688)));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x689 = -1;
	int32_t x690 = 1;
	int64_t x691 = INT64_MIN;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t146 = -5998;

    t146 = (x689+(x690<=(x691+x692)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x693 = 0U;
	static int64_t x696 = INT64_MIN;
	int32_t t147 = 2;

    t147 = (x693+(x694<=(x695+x696)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x697 = INT32_MAX;
	int64_t x698 = -10997401772122LL;
	uint64_t x700 = 74226601LLU;
	static int32_t t148 = INT32_MAX;

    t148 = (x697+(x698<=(x699+x700)));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x701 = -1;
	int16_t x702 = INT16_MIN;
	static volatile int16_t x703 = INT16_MAX;
	int16_t x704 = INT16_MIN;

    t149 = (x701+(x702<=(x703+x704)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x705 = -21;
	uint8_t x707 = 22U;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t150 = 1;

    t150 = (x705+(x706<=(x707+x708)));

    if (t150 != -20) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x713 = 29U;
	volatile int32_t x714 = INT32_MIN;
	uint8_t x715 = 1U;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t151 = 0;

    t151 = (x713+(x714<=(x715+x716)));

    if (t151 != 30) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x717 = 36148398U;
	uint64_t x718 = 387LLU;
	uint32_t x719 = 417387422U;
	volatile uint32_t t152 = 3273503U;

    t152 = (x717+(x718<=(x719+x720)));

    if (t152 != 36148399U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x721 = 3U;
	uint16_t x722 = UINT16_MAX;
	static int16_t x723 = INT16_MAX;
	int32_t t153 = -361952;

    t153 = (x721+(x722<=(x723+x724)));

    if (t153 != 4) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x728 = 139;
	int32_t t154 = 369;

    t154 = (x725+(x726<=(x727+x728)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x729 = 2021886U;
	uint16_t x730 = 885U;
	volatile int32_t x732 = -1;
	volatile uint32_t t155 = 72U;

    t155 = (x729+(x730<=(x731+x732)));

    if (t155 != 2021886U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x733 = 18LL;
	int64_t x734 = -1LL;
	int64_t x735 = 984835414114LL;
	int16_t x736 = INT16_MIN;
	volatile int64_t t156 = -877179955897LL;

    t156 = (x733+(x734<=(x735+x736)));

    if (t156 != 19LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x737 = INT8_MAX;
	int8_t x738 = 6;
	volatile uint16_t x739 = 1U;
	int8_t x740 = INT8_MIN;
	int32_t t157 = 2414;

    t157 = (x737+(x738<=(x739+x740)));

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x741 = INT16_MIN;
	volatile int8_t x742 = INT8_MIN;
	volatile int16_t x743 = 0;
	static uint16_t x744 = 9064U;
	volatile int32_t t158 = -4131238;

    t158 = (x741+(x742<=(x743+x744)));

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x749 = 23833LL;
	static volatile uint16_t x752 = 64U;

    t159 = (x749+(x750<=(x751+x752)));

    if (t159 != 23833LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x754 = -41LL;
	uint32_t t160 = UINT32_MAX;

    t160 = (x753+(x754<=(x755+x756)));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x761 = -1;
	uint16_t x762 = 9U;
	static volatile int8_t x763 = 0;

    t161 = (x761+(x762<=(x763+x764)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x765 = INT64_MIN;
	static uint16_t x766 = 2U;
	volatile uint32_t x767 = 786539U;
	volatile int8_t x768 = 17;

    t162 = (x765+(x766<=(x767+x768)));

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x774 = INT32_MIN;
	int16_t x775 = INT16_MIN;

    t163 = (x773+(x774<=(x775+x776)));

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x777 = INT16_MIN;
	int64_t x778 = INT64_MAX;
	int32_t x780 = INT32_MIN;
	int32_t t164 = 3874713;

    t164 = (x777+(x778<=(x779+x780)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x781 = UINT64_MAX;
	int32_t x782 = -1;
	uint16_t x783 = 6036U;
	uint64_t x784 = 76621997375875LLU;
	uint64_t t165 = UINT64_MAX;

    t165 = (x781+(x782<=(x783+x784)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x785 = INT16_MIN;
	int32_t x787 = -23;
	int64_t x788 = -258048958683870387LL;
	volatile int32_t t166 = 8391130;

    t166 = (x785+(x786<=(x787+x788)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x789 = 16U;
	uint16_t x791 = UINT16_MAX;

    t167 = (x789+(x790<=(x791+x792)));

    if (t167 != 17U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x793 = INT16_MIN;
	int8_t x794 = 0;
	uint32_t x795 = 167U;
	uint16_t x796 = 3135U;
	int32_t t168 = -68470;

    t168 = (x793+(x794<=(x795+x796)));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x797 = UINT16_MAX;
	static volatile int8_t x798 = 1;
	static int64_t x799 = 1258769452LL;
	volatile int32_t t169 = 13;

    t169 = (x797+(x798<=(x799+x800)));

    if (t169 != 65536) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x805 = INT8_MIN;
	static uint64_t x806 = 1861594LLU;
	int32_t x807 = 783982;

    t170 = (x805+(x806<=(x807+x808)));

    if (t170 != -128) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x810 = INT64_MIN;
	int64_t x811 = INT64_MIN;
	int8_t x812 = 2;
	int32_t t171 = 5;

    t171 = (x809+(x810<=(x811+x812)));

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x813 = -1;
	uint32_t x814 = UINT32_MAX;
	static volatile int32_t x815 = 1;
	static int32_t t172 = 933;

    t172 = (x813+(x814<=(x815+x816)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x817 = -1292;
	int16_t x818 = INT16_MIN;
	int32_t x819 = INT32_MAX;
	static int16_t x820 = -9568;
	int32_t t173 = 395;

    t173 = (x817+(x818<=(x819+x820)));

    if (t173 != -1291) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x821 = 7497963211825LLU;
	int16_t x822 = -10;
	int8_t x823 = 0;
	int32_t x824 = INT32_MIN;
	volatile uint64_t t174 = 78598898932LLU;

    t174 = (x821+(x822<=(x823+x824)));

    if (t174 != 7497963211825LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x828 = INT16_MIN;
	static volatile int64_t t175 = -1LL;

    t175 = (x825+(x826<=(x827+x828)));

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x829 = 0U;
	int32_t x830 = -1;
	static int32_t x831 = -1;
	int32_t x832 = INT32_MAX;

    t176 = (x829+(x830<=(x831+x832)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x833 = 1U;
	volatile uint32_t x834 = 873U;
	static uint64_t x835 = 0LLU;
	uint8_t x836 = 0U;
	volatile int32_t t177 = 224397819;

    t177 = (x833+(x834<=(x835+x836)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x837 = INT16_MIN;
	int32_t x838 = INT32_MIN;
	int64_t x839 = -1LL;

    t178 = (x837+(x838<=(x839+x840)));

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x841 = UINT16_MAX;
	int64_t x842 = 23203LL;
	uint32_t x843 = 2172101U;
	uint8_t x844 = 20U;
	static volatile int32_t t179 = -2502;

    t179 = (x841+(x842<=(x843+x844)));

    if (t179 != 65536) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x845 = UINT16_MAX;
	volatile int16_t x846 = -1;
	int32_t x847 = 1;
	volatile int32_t t180 = -561665228;

    t180 = (x845+(x846<=(x847+x848)));

    if (t180 != 65536) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x849 = 0;
	int8_t x851 = INT8_MAX;
	int32_t x852 = -91486;
	static int32_t t181 = 16021;

    t181 = (x849+(x850<=(x851+x852)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x854 = 0;
	static int16_t x855 = -1;
	static volatile int8_t x856 = -1;
	int32_t t182 = INT32_MIN;

    t182 = (x853+(x854<=(x855+x856)));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t t183 = 1;

    t183 = (x857+(x858<=(x859+x860)));

    if (t183 != 32768) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x861 = INT16_MAX;
	static int64_t x862 = INT64_MIN;
	static int8_t x863 = INT8_MAX;

    t184 = (x861+(x862<=(x863+x864)));

    if (t184 != 32768) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x865 = INT32_MIN;
	volatile int32_t x866 = 7;
	volatile int8_t x867 = -1;
	volatile uint32_t x868 = 721760853U;
	int32_t t185 = -26636;

    t185 = (x865+(x866<=(x867+x868)));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x873 = UINT32_MAX;
	volatile int16_t x875 = INT16_MIN;
	static volatile uint32_t t186 = 608566U;

    t186 = (x873+(x874<=(x875+x876)));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x877 = INT32_MIN;
	volatile uint32_t x878 = UINT32_MAX;
	int16_t x879 = 1118;
	int32_t x880 = -1;
	int32_t t187 = INT32_MIN;

    t187 = (x877+(x878<=(x879+x880)));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x881 = INT32_MIN;
	static int32_t x882 = -1;
	int8_t x883 = INT8_MIN;
	static int64_t x884 = -16LL;

    t188 = (x881+(x882<=(x883+x884)));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x886 = 9223290338194576LLU;
	int16_t x887 = INT16_MIN;
	static volatile int64_t x888 = -1LL;
	volatile int64_t t189 = 2010993LL;

    t189 = (x885+(x886<=(x887+x888)));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x889 = INT8_MIN;
	static int16_t x890 = INT16_MAX;
	int8_t x891 = INT8_MIN;
	int32_t x892 = -290354463;
	int32_t t190 = -30;

    t190 = (x889+(x890<=(x891+x892)));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x893 = INT32_MIN;
	uint16_t x894 = UINT16_MAX;
	uint8_t x895 = 1U;
	static int16_t x896 = INT16_MIN;
	int32_t t191 = INT32_MIN;

    t191 = (x893+(x894<=(x895+x896)));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x898 = INT16_MAX;
	int32_t x900 = -1;
	static int32_t t192 = -93730549;

    t192 = (x897+(x898<=(x899+x900)));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x901 = 418U;
	uint16_t x903 = UINT16_MAX;
	int64_t x904 = 74905811356509LL;
	uint32_t t193 = 3600U;

    t193 = (x901+(x902<=(x903+x904)));

    if (t193 != 419U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x909 = INT64_MIN;
	int16_t x910 = INT16_MIN;
	uint64_t x911 = 42238473839767835LLU;
	int16_t x912 = INT16_MAX;
	int64_t t194 = INT64_MIN;

    t194 = (x909+(x910<=(x911+x912)));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x917 = 15360458U;
	int16_t x918 = INT16_MIN;
	int16_t x919 = -1;
	static int16_t x920 = INT16_MIN;
	volatile uint32_t t195 = 4U;

    t195 = (x917+(x918<=(x919+x920)));

    if (t195 != 15360458U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x925 = 9U;
	uint64_t x926 = 4687217519538110LLU;
	uint64_t x927 = UINT64_MAX;
	volatile uint8_t x928 = 0U;
	volatile int32_t t196 = -40541224;

    t196 = (x925+(x926<=(x927+x928)));

    if (t196 != 10) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x929 = -1;
	int8_t x930 = -1;
	uint32_t x931 = UINT32_MAX;
	int32_t x932 = INT32_MIN;
	static volatile int32_t t197 = -6037327;

    t197 = (x929+(x930<=(x931+x932)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x937 = INT64_MAX;
	uint8_t x938 = UINT8_MAX;
	int16_t x939 = INT16_MIN;
	int64_t x940 = -1LL;
	int64_t t198 = INT64_MAX;

    t198 = (x937+(x938<=(x939+x940)));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x945 = -49;
	static int8_t x946 = INT8_MIN;
	volatile int32_t t199 = 465186;

    t199 = (x945+(x946<=(x947+x948)));

    if (t199 != -49) { NG(); } else { ; }
	
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

