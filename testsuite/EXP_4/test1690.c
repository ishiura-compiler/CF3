
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

static int64_t x2 = INT64_MIN;
volatile int16_t x6 = -1;
int16_t x9 = -4153;
static uint64_t x21 = 823459LLU;
static int64_t x23 = -1LL;
volatile int8_t x38 = -42;
int64_t x40 = -1LL;
static int64_t x44 = -1LL;
uint32_t x48 = UINT32_MAX;
static uint8_t x54 = 0U;
volatile int32_t t13 = 0;
uint32_t x59 = UINT32_MAX;
int8_t x63 = 28;
static volatile int32_t t15 = -25678;
int64_t x68 = -1LL;
volatile int32_t t16 = -48128;
volatile int32_t t17 = 7;
static int8_t x73 = -7;
uint16_t x75 = UINT16_MAX;
static volatile int32_t t18 = -41610048;
static int8_t x77 = -1;
volatile int32_t t20 = -841;
uint32_t x85 = 0U;
int16_t x88 = -1118;
static volatile int64_t x101 = -1LL;
int32_t x109 = INT32_MIN;
int64_t x110 = INT64_MAX;
int32_t t28 = 580041;
int64_t x125 = INT64_MAX;
volatile int32_t x132 = INT32_MAX;
volatile int8_t x133 = INT8_MIN;
uint16_t x134 = 1242U;
static int32_t t33 = 1;
int32_t x144 = -1;
int8_t x145 = -1;
int64_t x149 = -1077LL;
static int64_t x155 = INT64_MAX;
uint32_t x166 = 11674351U;
static volatile int32_t t41 = 59;
static int16_t x169 = -1;
int64_t x173 = 3741490013933696LL;
volatile int32_t x174 = 62;
int16_t x187 = -3221;
volatile uint16_t x189 = 0U;
uint8_t x190 = 0U;
volatile int32_t t48 = 7947;
volatile uint32_t x197 = UINT32_MAX;
volatile int32_t t50 = 858778243;
static uint16_t x209 = 8140U;
int64_t x210 = -41867096134LL;
volatile int32_t t52 = -112391732;
volatile int64_t x214 = -1LL;
int32_t x229 = -1712;
int32_t x235 = -1;
int64_t x236 = -13822084993213LL;
uint32_t x238 = 21887391U;
int32_t x243 = -1;
volatile uint64_t x254 = 465609670LLU;
volatile int32_t t63 = -2970;
int8_t x262 = INT8_MIN;
static int32_t x270 = -1;
int8_t x271 = INT8_MIN;
int16_t x274 = -1;
int8_t x275 = 1;
volatile uint32_t x279 = UINT32_MAX;
static int16_t x281 = INT16_MIN;
uint64_t x282 = 2403LLU;
int8_t x284 = INT8_MAX;
static volatile uint64_t x291 = UINT64_MAX;
static int32_t x293 = INT32_MIN;
int16_t x295 = INT16_MAX;
static int8_t x299 = -35;
int64_t x301 = 26776129LL;
int64_t x304 = 767LL;
uint16_t x310 = UINT16_MAX;
int16_t x312 = 28;
int8_t x318 = INT8_MAX;
uint32_t x322 = UINT32_MAX;
int32_t x324 = 5975;
int32_t t81 = 138484132;
int64_t x330 = -1LL;
uint32_t x335 = UINT32_MAX;
int8_t x338 = -1;
static int64_t x340 = INT64_MAX;
static int8_t x343 = INT8_MIN;
static volatile int32_t t86 = 557097028;
volatile uint64_t x357 = 1772LLU;
int16_t x358 = 406;
int32_t x359 = INT32_MIN;
uint16_t x360 = 473U;
int32_t t89 = 74107742;
static volatile uint32_t x362 = UINT32_MAX;
uint16_t x363 = 12730U;
int16_t x371 = 1;
static int32_t t92 = -492191307;
int32_t x384 = INT32_MIN;
static volatile uint32_t x397 = 6535419U;
static int8_t x400 = 10;
int32_t t99 = -36550872;
uint16_t x405 = UINT16_MAX;
int16_t x412 = INT16_MIN;
int64_t x422 = 21LL;
volatile int32_t x423 = 429;
int32_t x435 = 661040853;
int64_t x438 = 2118667408467523152LL;
int16_t x441 = INT16_MAX;
uint32_t x443 = 220U;
volatile int32_t t112 = -172425;
int64_t x464 = INT64_MIN;
int32_t t116 = -598685757;
static volatile uint32_t x475 = UINT32_MAX;
int64_t x477 = 3237LL;
int16_t x479 = 288;
uint32_t x486 = 645393U;
static int32_t x494 = -1;
int8_t x496 = INT8_MIN;
int32_t t123 = 64039932;
int32_t x510 = 1;
uint16_t x518 = UINT16_MAX;
static volatile int16_t x520 = 0;
int8_t x523 = 1;
static int32_t t130 = -114199586;
uint64_t x529 = 182465669207980LLU;
int32_t t133 = -2769690;
volatile int8_t x541 = INT8_MIN;
uint32_t x544 = 965U;
volatile int32_t t135 = 47;
uint16_t x550 = 1879U;
int32_t x551 = INT32_MIN;
int32_t x552 = INT32_MAX;
int32_t x553 = -1;
volatile int8_t x555 = INT8_MAX;
int8_t x556 = INT8_MAX;
volatile int32_t t138 = 622;
uint32_t x558 = 0U;
static uint8_t x561 = UINT8_MAX;
uint32_t x562 = 9569U;
int64_t x573 = INT64_MIN;
int16_t x576 = -4058;
uint8_t x588 = 1U;
int32_t t148 = -54009;
int16_t x597 = -1;
int8_t x603 = INT8_MIN;
uint64_t x611 = 10701596LLU;
int8_t x613 = -2;
int8_t x618 = 3;
volatile int32_t t154 = 206;
uint16_t x621 = 102U;
static int32_t x624 = -118316;
volatile int32_t t158 = 8;
static volatile int32_t x637 = INT32_MAX;
volatile uint8_t x640 = UINT8_MAX;
int8_t x642 = INT8_MAX;
int8_t x643 = -1;
int64_t x644 = 212617731908LL;
int32_t t160 = -406;
int32_t x646 = -1;
int32_t x647 = INT32_MIN;
int16_t x652 = INT16_MAX;
static int16_t x654 = 0;
int32_t t164 = 55;
volatile int64_t x661 = -10LL;
uint32_t x662 = 5U;
int8_t x663 = 0;
volatile uint16_t x669 = 14064U;
static int64_t x671 = INT64_MIN;
int64_t x675 = INT64_MIN;
int16_t x679 = 1;
static int32_t x681 = INT32_MIN;
static int32_t t170 = 3159;
int16_t x687 = INT16_MIN;
volatile int8_t x688 = 47;
uint64_t x689 = 5798509889LLU;
int32_t x690 = -1;
int16_t x694 = -106;
uint16_t x696 = 73U;
static int32_t t174 = 12;
int16_t x706 = -3112;
static int8_t x713 = INT8_MIN;
int64_t x724 = 466003376483129197LL;
volatile int32_t t181 = -262635823;
volatile int16_t x730 = INT16_MIN;
volatile int32_t t182 = 5;
uint32_t x733 = UINT32_MAX;
int8_t x734 = INT8_MIN;
int32_t t184 = -599;
int16_t x741 = INT16_MIN;
uint16_t x742 = 0U;
uint64_t x744 = UINT64_MAX;
uint16_t x747 = 0U;
volatile int32_t t186 = 18743;
uint16_t x764 = 5U;
volatile int32_t t190 = -12;
int32_t x767 = INT32_MIN;
volatile int32_t t191 = 59505;
static int8_t x778 = INT8_MIN;
int64_t x794 = INT64_MIN;
int32_t t199 = 0;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -313;

    t0 = (x1<=(x2>(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = INT32_MAX;
	static int32_t x7 = -1;
	volatile int64_t x8 = -140453257553LL;
	int32_t t1 = -60;

    t1 = (x5<=(x6>(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x10 = -8388;
	int64_t x11 = -13567046523199472LL;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 3;

    t2 = (x9<=(x10>(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	uint64_t x14 = 1526212347453322LLU;
	int8_t x15 = -1;
	volatile int8_t x16 = 60;
	static int32_t t3 = -2061298;

    t3 = (x13<=(x14>(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 29U;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = 51;
	uint32_t x20 = UINT32_MAX;
	int32_t t4 = 78;

    t4 = (x17<=(x18>(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -321;

    t5 = (x21<=(x22>(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 3295858346112875626LLU;
	uint32_t x26 = 12331859U;
	uint64_t x27 = UINT64_MAX;
	uint8_t x28 = 54U;
	volatile int32_t t6 = -33967773;

    t6 = (x25<=(x26>(x27>x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int64_t x30 = 3252561286LL;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 157872584465207LLU;
	int32_t t7 = 4475;

    t7 = (x29<=(x30>(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 3055U;
	int32_t x34 = -27303223;
	uint8_t x35 = 60U;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = -609986;

    t8 = (x33<=(x34>(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	uint8_t x39 = 12U;
	int32_t t9 = -766317;

    t9 = (x37<=(x38>(x39>x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	static volatile uint64_t x42 = 503LLU;
	int32_t x43 = 471254865;
	int32_t t10 = 40470;

    t10 = (x41<=(x42>(x43>x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	volatile int32_t t11 = -2306;

    t11 = (x45<=(x46>(x47>x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -10602741LL;
	volatile int16_t x50 = INT16_MIN;
	volatile int8_t x51 = INT8_MAX;
	static volatile int32_t x52 = INT32_MIN;
	int32_t t12 = 26390;

    t12 = (x49<=(x50>(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 2845;
	int32_t x55 = -1;
	uint16_t x56 = 2723U;

    t13 = (x53<=(x54>(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 2U;
	int16_t x58 = INT16_MAX;
	uint64_t x60 = 35895126784565151LLU;
	int32_t t14 = 313;

    t14 = (x57<=(x58>(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 86532075363LLU;
	volatile int32_t x62 = INT32_MIN;
	uint64_t x64 = 1862253LLU;

    t15 = (x61<=(x62>(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 124U;
	volatile uint64_t x66 = 7LLU;
	static uint32_t x67 = 132854930U;

    t16 = (x65<=(x66>(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 2U;
	uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = -4;
	uint16_t x72 = 127U;

    t17 = (x69<=(x70>(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = 0;
	volatile int16_t x76 = INT16_MAX;

    t18 = (x73<=(x74>(x75>x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x78 = 8U;
	int16_t x79 = -1;
	int32_t x80 = INT32_MIN;
	static int32_t t19 = -2;

    t19 = (x77<=(x78>(x79>x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	uint64_t x82 = UINT64_MAX;
	static int64_t x83 = INT64_MIN;
	int64_t x84 = 124504136726LL;

    t20 = (x81<=(x82>(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = UINT16_MAX;
	static int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -1568;

    t21 = (x85<=(x86>(x87>x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = 3742978;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 37485;

    t22 = (x89<=(x90>(x91>x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	static int16_t x94 = -1;
	volatile int32_t x95 = INT32_MAX;
	static int16_t x96 = INT16_MAX;
	int32_t t23 = 895278144;

    t23 = (x93<=(x94>(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = 1055031846006LLU;
	volatile uint64_t x98 = 1073406LLU;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MAX;
	int32_t t24 = 364;

    t24 = (x97<=(x98>(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	volatile int16_t x104 = 12;
	volatile int32_t t25 = 3;

    t25 = (x101<=(x102>(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = 0LL;
	static uint8_t x106 = 2U;
	int64_t x107 = -1LL;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = 13;

    t26 = (x105<=(x106>(x107>x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x111 = UINT64_MAX;
	static volatile int64_t x112 = INT64_MIN;
	int32_t t27 = -1860880;

    t27 = (x109<=(x110>(x111>x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -6;
	uint32_t x114 = 77421092U;
	volatile uint32_t x115 = 981663749U;
	static int64_t x116 = -1LL;

    t28 = (x113<=(x114>(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile int8_t x118 = 1;
	static uint16_t x119 = 1404U;
	int32_t x120 = INT32_MIN;
	static int32_t t29 = -32388894;

    t29 = (x117<=(x118>(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 264U;
	int8_t x122 = 0;
	volatile int64_t x123 = -249568837LL;
	volatile int16_t x124 = INT16_MAX;
	static int32_t t30 = -87402851;

    t30 = (x121<=(x122>(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 7U;
	volatile int32_t t31 = 61;

    t31 = (x125<=(x126>(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = -1;
	int16_t x130 = -883;
	static int8_t x131 = -1;
	volatile int32_t t32 = 3516856;

    t32 = (x129<=(x130>(x131>x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x135 = -1;
	int32_t x136 = INT32_MIN;

    t33 = (x133<=(x134>(x135>x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	uint16_t x138 = 0U;
	int64_t x139 = -60114987LL;
	static volatile int8_t x140 = INT8_MIN;
	int32_t t34 = 1;

    t34 = (x137<=(x138>(x139>x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int16_t x142 = -1;
	int16_t x143 = -1;
	static int32_t t35 = 4140427;

    t35 = (x141<=(x142>(x143>x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x146 = 37U;
	uint32_t x147 = 1574634U;
	uint32_t x148 = 20U;
	volatile int32_t t36 = -66;

    t36 = (x145<=(x146>(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x150 = 20U;
	volatile int16_t x151 = 111;
	volatile int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -950;

    t37 = (x149<=(x150>(x151>x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 22999079LLU;
	volatile uint16_t x154 = 11778U;
	static int32_t x156 = -393;
	int32_t t38 = 21;

    t38 = (x153<=(x154>(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -22;
	static uint8_t x158 = 14U;
	int16_t x159 = INT16_MIN;
	volatile int16_t x160 = -1;
	int32_t t39 = 3920;

    t39 = (x157<=(x158>(x159>x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -3LL;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MAX;
	uint32_t x164 = 26783283U;
	volatile int32_t t40 = 63955;

    t40 = (x161<=(x162>(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	int32_t x167 = INT32_MAX;
	int32_t x168 = INT32_MIN;

    t41 = (x165<=(x166>(x167>x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = UINT32_MAX;
	int32_t x171 = 11038;
	int32_t x172 = -1;
	volatile int32_t t42 = -248927238;

    t42 = (x169<=(x170>(x171>x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	static int32_t t43 = 5331;

    t43 = (x173<=(x174>(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	volatile int8_t x178 = INT8_MAX;
	volatile int64_t x179 = 29312004LL;
	int8_t x180 = -10;
	static int32_t t44 = 161002698;

    t44 = (x177<=(x178>(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 0U;
	int8_t x182 = -1;
	int64_t x183 = -9794625LL;
	uint16_t x184 = UINT16_MAX;
	static int32_t t45 = -16339633;

    t45 = (x181<=(x182>(x183>x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -9403;
	int8_t x186 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -42;

    t46 = (x185<=(x186>(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x191 = 153576456239438LL;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -1795848;

    t47 = (x189<=(x190>(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 11467;
	volatile int8_t x194 = -1;
	uint8_t x195 = 1U;
	int8_t x196 = INT8_MIN;

    t48 = (x193<=(x194>(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x198 = -1;
	static uint64_t x199 = 1317815170LLU;
	int64_t x200 = INT64_MIN;
	int32_t t49 = -11349591;

    t49 = (x197<=(x198>(x199>x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x201 = INT32_MAX;
	int8_t x202 = -1;
	uint8_t x203 = 27U;
	volatile int16_t x204 = 15819;

    t50 = (x201<=(x202>(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = INT8_MAX;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t51 = -214197;

    t51 = (x205<=(x206>(x207>x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x211 = 101198LLU;
	int32_t x212 = INT32_MIN;

    t52 = (x209<=(x210>(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 5U;
	static int64_t x215 = -1LL;
	uint64_t x216 = 11741980069037LLU;
	volatile int32_t t53 = -4;

    t53 = (x213<=(x214>(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 3U;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 34U;
	int64_t x220 = 56277LL;
	volatile int32_t t54 = 2165379;

    t54 = (x217<=(x218>(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	uint8_t x222 = 0U;
	uint64_t x223 = 14LLU;
	int32_t x224 = -1;
	volatile int32_t t55 = 1856;

    t55 = (x221<=(x222>(x223>x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	int16_t x226 = 0;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	volatile int32_t t56 = -7414;

    t56 = (x225<=(x226>(x227>x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = 15U;
	volatile uint8_t x231 = 8U;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t57 = 212;

    t57 = (x229<=(x230>(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = 3U;
	int64_t x234 = INT64_MIN;
	int32_t t58 = 14494557;

    t58 = (x233<=(x234>(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MAX;
	int8_t x239 = INT8_MIN;
	static uint16_t x240 = 1207U;
	volatile int32_t t59 = 21207;

    t59 = (x237<=(x238>(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 998U;
	uint32_t x242 = 240U;
	static volatile uint16_t x244 = 9489U;
	volatile int32_t t60 = 19815;

    t60 = (x241<=(x242>(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1515;
	uint8_t x246 = UINT8_MAX;
	static uint16_t x247 = 5685U;
	static int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -19;

    t61 = (x245<=(x246>(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -2;
	static int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -921139627;

    t62 = (x249<=(x250>(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = UINT64_MAX;
	uint32_t x255 = 138401U;
	volatile int16_t x256 = 7562;

    t63 = (x253<=(x254>(x255>x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	int64_t x258 = -60965109145221LL;
	static volatile int16_t x259 = -3586;
	int16_t x260 = -3847;
	volatile int32_t t64 = 11340809;

    t64 = (x257<=(x258>(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x261 = UINT8_MAX;
	volatile int16_t x263 = INT16_MIN;
	int64_t x264 = 9219382921LL;
	static int32_t t65 = -1;

    t65 = (x261<=(x262>(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = 1;
	uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 3828598759LLU;
	int64_t x268 = -16LL;
	volatile int32_t t66 = -10721;

    t66 = (x265<=(x266>(x267>x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 3396U;
	volatile int16_t x272 = INT16_MIN;
	int32_t t67 = -747861612;

    t67 = (x269<=(x270>(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 7U;
	uint8_t x276 = 14U;
	int32_t t68 = -263771;

    t68 = (x273<=(x274>(x275>x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -373579028;
	int32_t x278 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t69 = -673;

    t69 = (x277<=(x278>(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x283 = UINT16_MAX;
	volatile int32_t t70 = -5962205;

    t70 = (x281<=(x282>(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x285 = 3034LLU;
	uint32_t x286 = 29U;
	int8_t x287 = -1;
	volatile int32_t x288 = -1;
	int32_t t71 = 69732;

    t71 = (x285<=(x286>(x287>x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	int16_t x290 = -1;
	uint32_t x292 = 15U;
	volatile int32_t t72 = 1;

    t72 = (x289<=(x290>(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x294 = 11522792U;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -47720044;

    t73 = (x293<=(x294>(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	int8_t x298 = 1;
	int16_t x300 = -1;
	int32_t t74 = -105;

    t74 = (x297<=(x298>(x299>x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	int32_t t75 = -227;

    t75 = (x301<=(x302>(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	uint8_t x306 = 1U;
	int8_t x307 = INT8_MIN;
	int32_t x308 = -128283;
	volatile int32_t t76 = 0;

    t76 = (x305<=(x306>(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x311 = 3052;
	int32_t t77 = -4;

    t77 = (x309<=(x310>(x311>x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MIN;
	static volatile int16_t x315 = 9749;
	int8_t x316 = -1;
	static int32_t t78 = -411330;

    t78 = (x313<=(x314>(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -93529495456248LL;
	static int16_t x319 = INT16_MIN;
	static uint16_t x320 = 59U;
	int32_t t79 = -451406;

    t79 = (x317<=(x318>(x319>x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int32_t t80 = 115905;

    t80 = (x321<=(x322>(x323>x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	uint8_t x326 = 27U;
	static int16_t x327 = INT16_MIN;
	uint64_t x328 = 74961LLU;

    t81 = (x325<=(x326>(x327>x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	volatile uint8_t x331 = 6U;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = -3;

    t82 = (x329<=(x330>(x331>x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = 3U;
	static int32_t x334 = -1;
	volatile int16_t x336 = 8499;
	int32_t t83 = 2874;

    t83 = (x333<=(x334>(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 37U;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t t84 = -9347;

    t84 = (x337<=(x338>(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	uint32_t x342 = 190243U;
	static int8_t x344 = INT8_MAX;
	int32_t t85 = 68610375;

    t85 = (x341<=(x342>(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	uint8_t x346 = 14U;
	uint8_t x347 = 11U;
	uint64_t x348 = UINT64_MAX;

    t86 = (x345<=(x346>(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = UINT16_MAX;
	int32_t x350 = 118;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = -6;
	int32_t t87 = -40815;

    t87 = (x349<=(x350>(x351>x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 245855304331853LLU;
	static int16_t x354 = 0;
	uint16_t x355 = UINT16_MAX;
	volatile uint16_t x356 = 34U;
	int32_t t88 = 1268986;

    t88 = (x353<=(x354>(x355>x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    

    t89 = (x357<=(x358>(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	volatile int16_t x364 = 249;
	volatile int32_t t90 = 83707729;

    t90 = (x361<=(x362>(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 7U;
	int32_t x366 = -15668;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -10;

    t91 = (x365<=(x366>(x367>x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -3555;
	volatile uint64_t x370 = 895437036LLU;
	uint8_t x372 = 122U;

    t92 = (x369<=(x370>(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	volatile int8_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MAX;
	int32_t t93 = -1958214;

    t93 = (x373<=(x374>(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MAX;
	uint8_t x378 = UINT8_MAX;
	static int64_t x379 = 718868506993LL;
	int8_t x380 = INT8_MAX;
	int32_t t94 = 177859034;

    t94 = (x377<=(x378>(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x381 = 231U;
	volatile int32_t x382 = -799682;
	int16_t x383 = INT16_MAX;
	static volatile int32_t t95 = -48261;

    t95 = (x381<=(x382>(x383>x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 22988;
	int8_t x386 = -1;
	int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -2;

    t96 = (x385<=(x386>(x387>x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MIN;
	volatile uint8_t x390 = UINT8_MAX;
	uint64_t x391 = 23898144657LLU;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -768250535;

    t97 = (x389<=(x390>(x391>x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int64_t x394 = INT64_MAX;
	int64_t x395 = 0LL;
	uint32_t x396 = 187U;
	volatile int32_t t98 = -1;

    t98 = (x393<=(x394>(x395>x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = 1995U;

    t99 = (x397<=(x398>(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	volatile uint32_t x402 = 1U;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	int32_t t100 = -1;

    t100 = (x401<=(x402>(x403>x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x406 = -1;
	volatile int64_t x407 = INT64_MAX;
	static int8_t x408 = -42;
	int32_t t101 = 64691235;

    t101 = (x405<=(x406>(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MAX;
	int8_t x410 = -14;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t t102 = 0;

    t102 = (x409<=(x410>(x411>x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	static uint16_t x414 = 4511U;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	static int32_t t103 = 26;

    t103 = (x413<=(x414>(x415>x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MIN;
	uint64_t x420 = 17675098634242LLU;
	static volatile int32_t t104 = -215;

    t104 = (x417<=(x418>(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	static uint16_t x424 = 264U;
	int32_t t105 = 937006790;

    t105 = (x421<=(x422>(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -2045;
	static uint16_t x426 = 25068U;
	uint16_t x427 = 4U;
	int64_t x428 = -163177LL;
	volatile int32_t t106 = 5;

    t106 = (x425<=(x426>(x427>x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 2;
	int64_t x430 = INT64_MAX;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = -1;
	static int32_t t107 = -166876;

    t107 = (x429<=(x430>(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MIN;
	uint64_t x434 = UINT64_MAX;
	int8_t x436 = -1;
	volatile int32_t t108 = -10973;

    t108 = (x433<=(x434>(x435>x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = INT64_MIN;
	volatile uint8_t x439 = 0U;
	uint16_t x440 = 15U;
	int32_t t109 = 570435849;

    t109 = (x437<=(x438>(x439>x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x442 = 2U;
	int8_t x444 = INT8_MIN;
	static volatile int32_t t110 = 300569;

    t110 = (x441<=(x442>(x443>x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 1290U;
	int64_t x446 = -6071484096127LL;
	uint16_t x447 = UINT16_MAX;
	static uint64_t x448 = 14763264LLU;
	static int32_t t111 = 91;

    t111 = (x445<=(x446>(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	volatile uint8_t x450 = UINT8_MAX;
	volatile int8_t x451 = INT8_MIN;
	uint64_t x452 = 6124854191123LLU;

    t112 = (x449<=(x450>(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 2787U;
	int8_t x454 = INT8_MAX;
	uint8_t x455 = UINT8_MAX;
	int64_t x456 = 1660257978LL;
	int32_t t113 = 1867;

    t113 = (x453<=(x454>(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 24092U;
	int16_t x458 = 368;
	int64_t x459 = 1992242734911447102LL;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t114 = -95;

    t114 = (x457<=(x458>(x459>x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = INT8_MIN;
	int8_t x462 = 0;
	int16_t x463 = INT16_MAX;
	int32_t t115 = 57600;

    t115 = (x461<=(x462>(x463>x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MIN;
	int64_t x466 = -151LL;
	int64_t x467 = -1LL;
	volatile int32_t x468 = -650141;

    t116 = (x465<=(x466>(x467>x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	volatile int64_t x470 = -4405728LL;
	volatile int32_t x471 = -19864079;
	static int16_t x472 = -6;
	volatile int32_t t117 = 13628010;

    t117 = (x469<=(x470>(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 0;
	int64_t x474 = INT64_MIN;
	int32_t x476 = INT32_MIN;
	int32_t t118 = 34145;

    t118 = (x473<=(x474>(x475>x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x478 = INT32_MIN;
	static volatile uint16_t x480 = UINT16_MAX;
	static volatile int32_t t119 = 1957758;

    t119 = (x477<=(x478>(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint32_t x482 = 18587U;
	volatile int64_t x483 = 1LL;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t120 = 28164638;

    t120 = (x481<=(x482>(x483>x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 12U;
	volatile int16_t x487 = 3779;
	int8_t x488 = 8;
	static int32_t t121 = 4714422;

    t121 = (x485<=(x486>(x487>x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = 30;
	volatile int16_t x490 = -1;
	uint64_t x491 = 10806LLU;
	int8_t x492 = INT8_MIN;
	int32_t t122 = 7552969;

    t122 = (x489<=(x490>(x491>x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x493 = UINT8_MAX;
	volatile uint8_t x495 = UINT8_MAX;

    t123 = (x493<=(x494>(x495>x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MAX;
	uint64_t x498 = 63985090LLU;
	uint64_t x499 = 36LLU;
	uint32_t x500 = 75405U;
	int32_t t124 = -379087845;

    t124 = (x497<=(x498>(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MAX;
	uint8_t x502 = UINT8_MAX;
	static int16_t x503 = INT16_MIN;
	static uint64_t x504 = 6848798127228077LLU;
	static volatile int32_t t125 = -2299;

    t125 = (x501<=(x502>(x503>x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	volatile int32_t x506 = INT32_MIN;
	static volatile int64_t x507 = INT64_MAX;
	int32_t x508 = -1;
	static volatile int32_t t126 = -6057;

    t126 = (x505<=(x506>(x507>x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 207773413679719LLU;
	static int16_t x511 = INT16_MIN;
	int16_t x512 = INT16_MIN;
	volatile int32_t t127 = 1;

    t127 = (x509<=(x510>(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -9;
	uint64_t x514 = 10LLU;
	uint32_t x515 = UINT32_MAX;
	static uint64_t x516 = 193766305338021556LLU;
	static volatile int32_t t128 = 1831;

    t128 = (x513<=(x514>(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 86450652U;
	volatile int8_t x519 = -1;
	static int32_t t129 = -15;

    t129 = (x517<=(x518>(x519>x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -83;
	int64_t x522 = INT64_MIN;
	int64_t x524 = INT64_MAX;

    t130 = (x521<=(x522>(x523>x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = 28;
	static int16_t x526 = 1975;
	uint32_t x527 = 20185U;
	uint8_t x528 = UINT8_MAX;
	int32_t t131 = -352599688;

    t131 = (x525<=(x526>(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = 13U;
	volatile int8_t x531 = -1;
	int16_t x532 = -16;
	static int32_t t132 = 173607888;

    t132 = (x529<=(x530>(x531>x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x533 = -1LL;
	uint64_t x534 = UINT64_MAX;
	int32_t x535 = INT32_MIN;
	static uint16_t x536 = 30U;

    t133 = (x533<=(x534>(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	int8_t x538 = 0;
	static int32_t x539 = -1;
	uint8_t x540 = 2U;
	volatile int32_t t134 = -881511177;

    t134 = (x537<=(x538>(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x542 = 3674U;
	int8_t x543 = INT8_MIN;

    t135 = (x541<=(x542>(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	int16_t x546 = -1;
	static int32_t x547 = 789944379;
	uint16_t x548 = UINT16_MAX;
	static volatile int32_t t136 = -3;

    t136 = (x545<=(x546>(x547>x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 335961133668LLU;
	int32_t t137 = -107005;

    t137 = (x549<=(x550>(x551>x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x554 = -1295324LL;

    t138 = (x553<=(x554>(x555>x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	volatile uint8_t x559 = 0U;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t139 = 38567880;

    t139 = (x557<=(x558>(x559>x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x563 = UINT32_MAX;
	int8_t x564 = -1;
	int32_t t140 = 5122804;

    t140 = (x561<=(x562>(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	volatile uint8_t x566 = 29U;
	volatile int16_t x567 = -1;
	volatile int16_t x568 = INT16_MIN;
	static volatile int32_t t141 = -63202;

    t141 = (x565<=(x566>(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	volatile int16_t x570 = -407;
	static int64_t x571 = -1LL;
	uint32_t x572 = 16196U;
	volatile int32_t t142 = 820;

    t142 = (x569<=(x570>(x571>x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x574 = INT32_MIN;
	int64_t x575 = INT64_MAX;
	volatile int32_t t143 = -5657;

    t143 = (x573<=(x574>(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = 281U;
	int64_t x578 = -364LL;
	int32_t x579 = -2691;
	volatile uint16_t x580 = 35U;
	int32_t t144 = -18349979;

    t144 = (x577<=(x578>(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MAX;
	int16_t x582 = INT16_MIN;
	int8_t x583 = INT8_MAX;
	int32_t x584 = INT32_MIN;
	static volatile int32_t t145 = 470241;

    t145 = (x581<=(x582>(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -548318999;
	uint32_t x586 = UINT32_MAX;
	int16_t x587 = INT16_MIN;
	volatile int32_t t146 = 48747770;

    t146 = (x585<=(x586>(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	uint16_t x590 = 16195U;
	volatile uint64_t x591 = UINT64_MAX;
	static uint8_t x592 = 0U;
	static volatile int32_t t147 = -6454842;

    t147 = (x589<=(x590>(x591>x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 16U;
	int64_t x594 = INT64_MIN;
	int16_t x595 = INT16_MIN;
	static uint16_t x596 = 6891U;

    t148 = (x593<=(x594>(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x598 = INT16_MIN;
	int64_t x599 = 190324429804364LL;
	static int64_t x600 = -1LL;
	int32_t t149 = 1578;

    t149 = (x597<=(x598>(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x601 = UINT64_MAX;
	int16_t x602 = INT16_MIN;
	static uint8_t x604 = UINT8_MAX;
	int32_t t150 = 2004;

    t150 = (x601<=(x602>(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MAX;
	int64_t x607 = -2810958LL;
	static uint16_t x608 = UINT16_MAX;
	static volatile int32_t t151 = -23829067;

    t151 = (x605<=(x606>(x607>x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x609 = UINT16_MAX;
	uint8_t x610 = 49U;
	static int16_t x612 = INT16_MAX;
	volatile int32_t t152 = -6180;

    t152 = (x609<=(x610>(x611>x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x614 = 1U;
	volatile int32_t x615 = INT32_MAX;
	int64_t x616 = 5412LL;
	int32_t t153 = 3131;

    t153 = (x613<=(x614>(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = 40841;
	uint16_t x619 = UINT16_MAX;
	volatile int64_t x620 = -1LL;

    t154 = (x617<=(x618>(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x622 = INT8_MAX;
	int8_t x623 = INT8_MAX;
	static int32_t t155 = -29788029;

    t155 = (x621<=(x622>(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = 0U;
	static int16_t x626 = INT16_MIN;
	static uint16_t x627 = 12U;
	int32_t x628 = 1;
	int32_t t156 = -5899129;

    t156 = (x625<=(x626>(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = 1;
	static int16_t x630 = -1;
	uint8_t x631 = UINT8_MAX;
	uint64_t x632 = 85094004068351682LLU;
	int32_t t157 = 8;

    t157 = (x629<=(x630>(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	static int16_t x634 = -6;
	int16_t x635 = -13382;
	int8_t x636 = -1;

    t158 = (x633<=(x634>(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int32_t t159 = 35312;

    t159 = (x637<=(x638>(x639>x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = 87830235477063522LL;

    t160 = (x641<=(x642>(x643>x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	volatile int8_t x648 = INT8_MIN;
	volatile int32_t t161 = -920900179;

    t161 = (x645<=(x646>(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	volatile int32_t x650 = INT32_MIN;
	int16_t x651 = -215;
	int32_t t162 = 3;

    t162 = (x649<=(x650>(x651>x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 1735U;
	uint8_t x655 = 8U;
	int16_t x656 = 0;
	int32_t t163 = 2;

    t163 = (x653<=(x654>(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x657 = 11007LLU;
	int64_t x658 = INT64_MIN;
	int16_t x659 = 1;
	int8_t x660 = INT8_MAX;

    t164 = (x657<=(x658>(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x664 = 1;
	int32_t t165 = -367269;

    t165 = (x661<=(x662>(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x665 = 92U;
	static int16_t x666 = INT16_MIN;
	int32_t x667 = -1;
	int32_t x668 = INT32_MAX;
	static volatile int32_t t166 = -19;

    t166 = (x665<=(x666>(x667>x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = INT64_MIN;
	volatile int8_t x672 = -1;
	int32_t t167 = -60;

    t167 = (x669<=(x670>(x671>x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x673 = 19142912U;
	volatile uint8_t x674 = 0U;
	uint32_t x676 = 22U;
	volatile int32_t t168 = -353424711;

    t168 = (x673<=(x674>(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 204U;
	int8_t x678 = 3;
	int32_t x680 = 23182351;
	int32_t t169 = -205911276;

    t169 = (x677<=(x678>(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = 58;
	uint8_t x683 = 17U;
	uint64_t x684 = 10635832697520598LLU;

    t170 = (x681<=(x682>(x683>x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MAX;
	int16_t x686 = INT16_MIN;
	volatile int32_t t171 = 986;

    t171 = (x685<=(x686>(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x691 = INT16_MIN;
	volatile int32_t x692 = -1;
	volatile int32_t t172 = 472615;

    t172 = (x689<=(x690>(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	static int16_t x695 = INT16_MIN;
	volatile int32_t t173 = 1276;

    t173 = (x693<=(x694>(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	uint64_t x698 = 3520298833542499LLU;
	int8_t x699 = INT8_MIN;
	volatile uint32_t x700 = UINT32_MAX;

    t174 = (x697<=(x698>(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = 137577U;
	int32_t x702 = INT32_MAX;
	static int8_t x703 = -1;
	volatile int32_t x704 = INT32_MIN;
	static int32_t t175 = -3;

    t175 = (x701<=(x702>(x703>x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	static uint32_t x707 = 4U;
	volatile uint16_t x708 = 5U;
	int32_t t176 = 29429;

    t176 = (x705<=(x706>(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 23272U;
	int32_t x710 = 2871776;
	uint16_t x711 = UINT16_MAX;
	int32_t x712 = 8;
	int32_t t177 = 21166453;

    t177 = (x709<=(x710>(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = INT8_MIN;
	int8_t x715 = 0;
	static uint16_t x716 = 229U;
	volatile int32_t t178 = 4060128;

    t178 = (x713<=(x714>(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = 1LL;
	int16_t x718 = INT16_MIN;
	static int64_t x719 = -1LL;
	uint16_t x720 = 426U;
	int32_t t179 = 52585727;

    t179 = (x717<=(x718>(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	static volatile int64_t x722 = INT64_MIN;
	volatile uint64_t x723 = 3047LLU;
	int32_t t180 = -213940455;

    t180 = (x721<=(x722>(x723>x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	uint64_t x726 = 1LLU;
	uint32_t x727 = 41008476U;
	int32_t x728 = INT32_MIN;

    t181 = (x725<=(x726>(x727>x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x729 = UINT8_MAX;
	static int32_t x731 = -26295;
	volatile uint64_t x732 = 221743LLU;

    t182 = (x729<=(x730>(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x735 = 8U;
	static int16_t x736 = -1;
	int32_t t183 = -2;

    t183 = (x733<=(x734>(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	uint8_t x738 = 2U;
	int16_t x739 = -13747;
	int64_t x740 = INT64_MIN;

    t184 = (x737<=(x738>(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x743 = -1LL;
	volatile int32_t t185 = 153453;

    t185 = (x741<=(x742>(x743>x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	uint16_t x746 = 125U;
	uint64_t x748 = 62251339LLU;

    t186 = (x745<=(x746>(x747>x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MIN;
	int32_t x750 = INT32_MIN;
	static volatile int8_t x751 = -1;
	int32_t x752 = 8;
	volatile int32_t t187 = -59229610;

    t187 = (x749<=(x750>(x751>x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	volatile uint8_t x754 = 3U;
	volatile uint64_t x755 = 541665636245143599LLU;
	static int64_t x756 = INT64_MIN;
	static int32_t t188 = 972500;

    t188 = (x753<=(x754>(x755>x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = UINT16_MAX;
	int8_t x758 = INT8_MIN;
	int64_t x759 = -1LL;
	uint8_t x760 = 21U;
	volatile int32_t t189 = -277689;

    t189 = (x757<=(x758>(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 260;
	uint32_t x762 = 6880U;
	volatile uint16_t x763 = UINT16_MAX;

    t190 = (x761<=(x762>(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = 2;
	uint32_t x766 = UINT32_MAX;
	int64_t x768 = INT64_MIN;

    t191 = (x765<=(x766>(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = INT64_MIN;
	int64_t x770 = -1LL;
	static int8_t x771 = -1;
	uint16_t x772 = 2U;
	int32_t t192 = -156035450;

    t192 = (x769<=(x770>(x771>x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = -1;
	int32_t x774 = -24492707;
	volatile int32_t x775 = INT32_MAX;
	static uint16_t x776 = UINT16_MAX;
	static int32_t t193 = 511;

    t193 = (x773<=(x774>(x775>x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = 756;
	uint8_t x779 = 3U;
	uint32_t x780 = 1262846591U;
	volatile int32_t t194 = -72666;

    t194 = (x777<=(x778>(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 50109U;
	uint64_t x782 = UINT64_MAX;
	int8_t x783 = INT8_MIN;
	int16_t x784 = INT16_MIN;
	int32_t t195 = 1036;

    t195 = (x781<=(x782>(x783>x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x785 = 731982U;
	int8_t x786 = INT8_MIN;
	int32_t x787 = -1;
	int32_t x788 = INT32_MAX;
	int32_t t196 = -5602835;

    t196 = (x785<=(x786>(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1;
	uint16_t x790 = 314U;
	volatile int32_t x791 = INT32_MIN;
	int8_t x792 = -1;
	static volatile int32_t t197 = 1015893242;

    t197 = (x789<=(x790>(x791>x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = UINT16_MAX;
	static volatile int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MIN;
	volatile int32_t t198 = -193;

    t198 = (x793<=(x794>(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 37U;
	volatile int64_t x798 = 30940597710144888LL;
	volatile int16_t x799 = -696;
	int16_t x800 = INT16_MIN;

    t199 = (x797<=(x798>(x799>x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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

