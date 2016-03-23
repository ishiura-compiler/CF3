
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

static uint64_t x5 = UINT64_MAX;
int32_t t1 = -21;
uint8_t x13 = UINT8_MAX;
int32_t x14 = 0;
static int64_t x18 = -1LL;
int32_t x20 = -1;
static volatile int32_t x21 = INT32_MIN;
int16_t x23 = INT16_MIN;
int32_t x29 = -22198;
static volatile uint64_t x38 = 2835858643LLU;
uint32_t t9 = 238094738U;
int32_t x64 = -110630;
int32_t t18 = -1043780129;
uint64_t t19 = 1593369062818366LLU;
static int8_t x82 = INT8_MIN;
int16_t x84 = INT16_MIN;
int32_t t20 = -506501739;
uint16_t x85 = 739U;
uint64_t t22 = 8047292564464600324LLU;
static int64_t x93 = -1403LL;
static uint16_t x95 = UINT16_MAX;
static int32_t x97 = -1;
volatile uint64_t t24 = 168LLU;
int8_t x101 = INT8_MAX;
static int8_t x104 = INT8_MIN;
int32_t t25 = 0;
static uint32_t x111 = UINT32_MAX;
int16_t x119 = 32;
uint32_t x120 = 30U;
volatile int8_t x121 = 1;
uint16_t x123 = 6U;
static int16_t x124 = 6;
volatile int64_t t30 = 1999516459218071717LL;
int32_t x131 = INT32_MAX;
int32_t x139 = -1;
volatile int32_t t33 = 320;
int32_t x146 = 194986;
int32_t x147 = -52568353;
uint16_t x148 = 1U;
int16_t x155 = INT16_MIN;
static volatile int32_t t37 = 1891580;
static int64_t x164 = INT64_MIN;
int8_t x165 = INT8_MIN;
volatile int32_t t42 = 41;
int16_t x178 = INT16_MIN;
uint8_t x181 = 2U;
volatile uint8_t x184 = UINT8_MAX;
uint16_t x190 = 4U;
static uint16_t x201 = 1595U;
uint64_t x208 = 302672136LLU;
uint8_t x210 = 41U;
int64_t x211 = -6989075594303LL;
int64_t t51 = 705192678230980625LL;
int64_t x216 = INT64_MIN;
static int16_t x222 = INT16_MAX;
int32_t x223 = INT32_MAX;
int64_t x231 = INT64_MAX;
static int8_t x239 = -1;
static int32_t x246 = INT32_MIN;
static uint16_t x249 = 598U;
int8_t x254 = INT8_MIN;
int32_t x255 = -1500291;
static int8_t x260 = -1;
uint32_t t64 = 85U;
int32_t x268 = -21;
int8_t x269 = 0;
uint32_t x270 = 644555478U;
uint32_t x276 = UINT32_MAX;
int64_t x280 = INT64_MAX;
static volatile int16_t x285 = INT16_MAX;
int32_t x288 = INT32_MAX;
int64_t x292 = INT64_MIN;
int64_t x294 = -5482LL;
int32_t x297 = -1;
int16_t x298 = -1;
static uint16_t x300 = UINT16_MAX;
uint64_t t74 = 3LLU;
volatile uint8_t x305 = 31U;
int64_t x315 = INT64_MAX;
uint32_t x320 = 381U;
static uint32_t t78 = 512546U;
int32_t x325 = INT32_MIN;
int8_t x327 = INT8_MAX;
static int16_t x331 = -44;
int8_t x338 = -8;
int32_t t85 = 39;
int16_t x353 = -6;
volatile int32_t x359 = 736;
int8_t x362 = INT8_MIN;
int64_t t89 = -94820543770LL;
uint8_t x369 = UINT8_MAX;
uint16_t x371 = UINT16_MAX;
int16_t x373 = 13263;
uint16_t x374 = 0U;
int64_t x375 = 7847278156036LL;
volatile int32_t x386 = -1;
int16_t x389 = 0;
uint16_t x394 = 10386U;
int8_t x395 = INT8_MIN;
uint8_t x398 = 0U;
volatile int32_t t97 = -195955;
volatile int64_t t98 = 279267451452600LL;
int32_t t99 = 4;
uint64_t x409 = 3778834655LLU;
static volatile int32_t t102 = -6865;
int16_t x422 = -57;
int8_t x423 = INT8_MIN;
int32_t t103 = -163380872;
int8_t x432 = -10;
int16_t x436 = INT16_MIN;
int64_t x437 = INT64_MIN;
int64_t t107 = 1931221LL;
static uint32_t x442 = 60U;
volatile int8_t x445 = -1;
static int16_t x449 = INT16_MIN;
int32_t t110 = 55;
int8_t x454 = INT8_MIN;
int32_t t111 = -242;
static int32_t x457 = -1;
int64_t x459 = -1LL;
volatile uint8_t x468 = 46U;
int64_t t115 = 2829779095LL;
volatile uint64_t t116 = 17LLU;
static volatile int32_t t119 = 0;
static volatile int16_t x489 = -1;
volatile int64_t t120 = 10985958090LL;
int64_t t124 = 163784310LL;
static volatile int32_t t125 = -314531970;
uint64_t t126 = 343154917LLU;
static uint32_t t128 = 2856U;
uint32_t x527 = UINT32_MAX;
int32_t x528 = INT32_MIN;
int64_t x531 = INT64_MIN;
static uint8_t x537 = 15U;
uint64_t t133 = 533913609198LLU;
int32_t x549 = 8757;
uint16_t x552 = 413U;
volatile uint64_t x555 = UINT64_MAX;
uint32_t x556 = 1985250691U;
static int64_t t137 = 1349340081548725540LL;
int16_t x561 = INT16_MIN;
int8_t x562 = -1;
volatile int32_t t139 = 2855884;
int16_t x573 = INT16_MAX;
uint64_t x576 = 2583228955276LLU;
uint64_t t141 = 380101892721LLU;
uint16_t x585 = 191U;
static int64_t x590 = INT64_MIN;
int16_t x596 = -1;
volatile uint64_t x603 = 381699912494965842LLU;
uint32_t x607 = 42973389U;
uint64_t x608 = 16480725LLU;
static int8_t x611 = INT8_MAX;
volatile uint16_t x616 = UINT16_MAX;
int16_t x619 = INT16_MIN;
int32_t t149 = 1907;
static int8_t x627 = INT8_MIN;
static uint16_t x628 = UINT16_MAX;
int8_t x630 = INT8_MAX;
int8_t x632 = INT8_MAX;
volatile int8_t x635 = -1;
volatile int64_t t153 = -1LL;
int16_t x639 = -1;
volatile int64_t x644 = INT64_MAX;
volatile int64_t t155 = -1LL;
uint64_t x648 = UINT64_MAX;
volatile int32_t t158 = -1890;
uint16_t x659 = 3579U;
static int64_t t159 = -166LL;
static volatile uint8_t x666 = 2U;
volatile uint64_t x671 = 9303820759LLU;
int32_t x688 = INT32_MIN;
uint8_t x690 = UINT8_MAX;
int16_t x692 = INT16_MIN;
volatile int32_t t167 = 10004;
uint32_t x700 = UINT32_MAX;
uint32_t t169 = 231913U;
int8_t x702 = INT8_MIN;
volatile uint64_t t171 = 9753LLU;
int64_t x721 = -1LL;
static int16_t x723 = 280;
static uint16_t x730 = 9U;
uint32_t x731 = UINT32_MAX;
uint32_t t176 = 91U;
volatile uint32_t t177 = 96884179U;
int32_t x737 = -1;
static int16_t x744 = -1;
uint64_t x747 = 95396019317LLU;
uint16_t x748 = UINT16_MAX;
volatile uint64_t t180 = 7451328932616LLU;
static volatile int64_t x750 = 376561434616LL;
uint64_t t182 = 2LLU;
volatile uint8_t x760 = UINT8_MAX;
static uint8_t x763 = 38U;
volatile int32_t x766 = INT32_MIN;
int8_t x774 = -1;
uint16_t x785 = 89U;
volatile int16_t x788 = -1;
volatile int64_t t191 = 237188134LL;
volatile uint8_t x794 = 54U;
static int32_t x802 = 355406;
int64_t x804 = -1LL;
static volatile uint32_t x806 = 10334U;
int32_t t195 = -669232824;
uint64_t x809 = 215893583464357LLU;
int64_t x810 = INT64_MAX;
int8_t x813 = INT8_MIN;
int64_t x819 = INT64_MAX;
uint64_t x823 = UINT64_MAX;
volatile uint64_t t199 = 50600LLU;


void f0(void) {
    	int16_t x1 = -19;
	uint8_t x2 = 0U;
	uint32_t x3 = 724U;
	volatile int32_t x4 = 544;
	uint32_t t0 = 765U;

    t0 = (((x1==x2)%x3)&x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MAX;

    t1 = (((x5==x6)%x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 3U;
	int8_t x10 = 1;
	int64_t x11 = INT64_MIN;
	uint64_t x12 = 364LLU;
	uint64_t t2 = 4776849LLU;

    t2 = (((x9==x10)%x11)&x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x15 = 5257U;
	static int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 64701;

    t3 = (((x13==x14)%x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 10656U;
	int32_t x19 = INT32_MAX;
	static int32_t t4 = 24477106;

    t4 = (((x17==x18)%x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -1654708900319LL;

    t5 = (((x21==x22)%x23)&x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x25 = INT64_MIN;
	int32_t x26 = -90;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	static int64_t t6 = 3610989162142695LL;

    t6 = (((x25==x26)%x27)&x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MIN;
	uint16_t x31 = 21U;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -4;

    t7 = (((x29==x30)%x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1587;
	static int64_t x34 = -1LL;
	uint32_t x35 = 6U;
	int32_t x36 = INT32_MIN;
	uint32_t t8 = 1150771233U;

    t8 = (((x33==x34)%x35)&x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = INT16_MIN;
	volatile int16_t x39 = 1733;
	uint32_t x40 = UINT32_MAX;

    t9 = (((x37==x38)%x39)&x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	uint64_t x43 = 4689021083LLU;
	volatile int32_t x44 = INT32_MIN;
	volatile uint64_t t10 = 2144825064925LLU;

    t10 = (((x41==x42)%x43)&x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int16_t x46 = 4041;
	volatile int64_t x47 = -1LL;
	int32_t x48 = -1;
	volatile int64_t t11 = -248114974LL;

    t11 = (((x45==x46)%x47)&x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 85244U;
	static int32_t x51 = INT32_MIN;
	static volatile int16_t x52 = -1;
	volatile int32_t t12 = -11720292;

    t12 = (((x49==x50)%x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = -10979;
	static uint64_t x55 = 6LLU;
	static uint64_t x56 = 19772540811LLU;
	volatile uint64_t t13 = 88349LLU;

    t13 = (((x53==x54)%x55)&x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x57 = 190268U;
	uint64_t x58 = 706421713295LLU;
	volatile int16_t x59 = -1;
	uint32_t x60 = 77796530U;
	volatile uint32_t t14 = 223876U;

    t14 = (((x57==x58)%x59)&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 51;
	int16_t x62 = 91;
	int32_t x63 = INT32_MAX;
	volatile int32_t t15 = 527155;

    t15 = (((x61==x62)%x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 2U;
	int8_t x66 = -1;
	int64_t x67 = INT64_MAX;
	int32_t x68 = 5834343;
	int64_t t16 = -4554764010135309LL;

    t16 = (((x65==x66)%x67)&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	int8_t x70 = -6;
	static uint32_t x71 = 3929195U;
	static volatile uint32_t x72 = 63948465U;
	uint32_t t17 = 2U;

    t17 = (((x69==x70)%x71)&x72);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	volatile int32_t x76 = 32213;

    t18 = (((x73==x74)%x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MAX;
	uint16_t x78 = UINT16_MAX;
	uint64_t x79 = 12872421390705LLU;
	int8_t x80 = -1;

    t19 = (((x77==x78)%x79)&x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile int16_t x83 = INT16_MIN;

    t20 = (((x81==x82)%x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 61U;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t21 = 561546427;

    t21 = (((x85==x86)%x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 250642LL;
	static uint64_t x90 = 121307661LLU;
	int16_t x91 = INT16_MAX;
	volatile uint64_t x92 = UINT64_MAX;

    t22 = (((x89==x90)%x91)&x92);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = -83;
	uint64_t x96 = 199233082480LLU;
	static volatile uint64_t t23 = 26609195450LLU;

    t23 = (((x93==x94)%x95)&x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MIN;
	int32_t x99 = -1;
	uint64_t x100 = UINT64_MAX;

    t24 = (((x97==x98)%x99)&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x102 = 7;
	static int16_t x103 = INT16_MAX;

    t25 = (((x101==x102)%x103)&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x109 = 14U;
	int64_t x110 = -15LL;
	static int16_t x112 = -1;
	uint32_t t26 = 153U;

    t26 = (((x109==x110)%x111)&x112);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	volatile uint8_t x114 = 31U;
	uint64_t x115 = 2650417047019LLU;
	uint32_t x116 = UINT32_MAX;
	uint64_t t27 = 135948051LLU;

    t27 = (((x113==x114)%x115)&x116);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -1;
	static int64_t x118 = -7792160LL;
	uint32_t t28 = 8U;

    t28 = (((x117==x118)%x119)&x120);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x122 = UINT16_MAX;
	static volatile int32_t t29 = -27404;

    t29 = (((x121==x122)%x123)&x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = -4179606958963053LL;
	int32_t x126 = INT32_MAX;
	int64_t x127 = -8LL;
	static int64_t x128 = 70397952969985134LL;

    t30 = (((x125==x126)%x127)&x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = INT8_MAX;
	uint64_t x130 = 8056106667752378LLU;
	int16_t x132 = 2446;
	volatile int32_t t31 = -4;

    t31 = (((x129==x130)%x131)&x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 9317LLU;
	uint16_t x134 = UINT16_MAX;
	static volatile uint64_t x135 = UINT64_MAX;
	volatile uint8_t x136 = 2U;
	uint64_t t32 = 181268463LLU;

    t32 = (((x133==x134)%x135)&x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 1891370256402036LLU;
	static volatile int32_t x138 = INT32_MIN;
	int8_t x140 = INT8_MAX;

    t33 = (((x137==x138)%x139)&x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = -6;
	int16_t x142 = -1;
	int16_t x143 = INT16_MAX;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t34 = 752091093LLU;

    t34 = (((x141==x142)%x143)&x144);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x145 = -1;
	static volatile int32_t t35 = -13017113;

    t35 = (((x145==x146)%x147)&x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	static volatile int64_t x151 = INT64_MAX;
	int64_t x152 = INT64_MAX;
	int64_t t36 = 518993524264LL;

    t36 = (((x149==x150)%x151)&x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x153 = UINT8_MAX;
	uint8_t x154 = 43U;
	int8_t x156 = INT8_MAX;

    t37 = (((x153==x154)%x155)&x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = 1125U;
	volatile int64_t x158 = INT64_MIN;
	int16_t x159 = 12743;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t38 = -1;

    t38 = (((x157==x158)%x159)&x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	uint16_t x162 = 11U;
	volatile int16_t x163 = INT16_MIN;
	int64_t t39 = -218624431495LL;

    t39 = (((x161==x162)%x163)&x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x166 = INT16_MAX;
	static int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MAX;
	volatile int32_t t40 = -470318265;

    t40 = (((x165==x166)%x167)&x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	static uint16_t x170 = 32349U;
	int8_t x171 = -28;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t41 = -26;

    t41 = (((x169==x170)%x171)&x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x173 = 43987585829432316LL;
	volatile uint64_t x174 = 212LLU;
	int16_t x175 = INT16_MIN;
	int8_t x176 = 0;

    t42 = (((x173==x174)%x175)&x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MIN;
	uint8_t x179 = 5U;
	volatile int64_t x180 = -59928027355668LL;
	volatile int64_t t43 = -186615272191609LL;

    t43 = (((x177==x178)%x179)&x180);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x182 = -1LL;
	uint32_t x183 = 29024738U;
	static uint32_t t44 = 649U;

    t44 = (((x181==x182)%x183)&x184);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = 8547U;
	uint8_t x186 = 2U;
	volatile int16_t x187 = -1;
	int64_t x188 = INT64_MIN;
	int64_t t45 = -98003LL;

    t45 = (((x185==x186)%x187)&x188);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = INT64_MAX;
	static uint8_t x191 = 2U;
	static int64_t x192 = INT64_MIN;
	int64_t t46 = -1LL;

    t46 = (((x189==x190)%x191)&x192);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = -98;
	int64_t x194 = INT64_MIN;
	int64_t x195 = -1039366LL;
	uint64_t x196 = UINT64_MAX;
	uint64_t t47 = 8173441640LLU;

    t47 = (((x193==x194)%x195)&x196);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x197 = -1;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 119U;
	volatile uint8_t x200 = 4U;
	volatile int32_t t48 = 1061238392;

    t48 = (((x197==x198)%x199)&x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x202 = 0;
	int32_t x203 = 529091;
	int16_t x204 = -1;
	volatile int32_t t49 = -5810;

    t49 = (((x201==x202)%x203)&x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = 20;
	volatile int16_t x206 = -1;
	static int16_t x207 = INT16_MIN;
	uint64_t t50 = 97266LLU;

    t50 = (((x205==x206)%x207)&x208);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -1;
	uint8_t x212 = UINT8_MAX;

    t51 = (((x209==x210)%x211)&x212);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = -1;
	int16_t x214 = INT16_MAX;
	static int8_t x215 = INT8_MIN;
	int64_t t52 = -2620LL;

    t52 = (((x213==x214)%x215)&x216);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = 481970798;
	volatile uint8_t x218 = 66U;
	static int16_t x219 = 3;
	int16_t x220 = INT16_MIN;
	volatile int32_t t53 = 9619089;

    t53 = (((x217==x218)%x219)&x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x221 = UINT8_MAX;
	static volatile int16_t x224 = INT16_MIN;
	int32_t t54 = -1061939180;

    t54 = (((x221==x222)%x223)&x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 15224U;
	uint64_t x226 = 261183LLU;
	uint16_t x227 = 3U;
	static int8_t x228 = -9;
	int32_t t55 = -8909129;

    t55 = (((x225==x226)%x227)&x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	int8_t x230 = -56;
	int32_t x232 = INT32_MIN;
	static volatile int64_t t56 = -20468580467526LL;

    t56 = (((x229==x230)%x231)&x232);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x233 = 2211U;
	volatile int16_t x234 = INT16_MAX;
	uint16_t x235 = 1335U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t57 = -1;

    t57 = (((x233==x234)%x235)&x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x237 = UINT16_MAX;
	volatile uint64_t x238 = 403122LLU;
	int8_t x240 = INT8_MIN;
	volatile int32_t t58 = 52;

    t58 = (((x237==x238)%x239)&x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	static int64_t x244 = -1LL;
	volatile int64_t t59 = 423763626914LL;

    t59 = (((x241==x242)%x243)&x244);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = INT8_MAX;
	volatile uint8_t x247 = 2U;
	int8_t x248 = 2;
	int32_t t60 = -2;

    t60 = (((x245==x246)%x247)&x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -45;
	int32_t t61 = -196477;

    t61 = (((x249==x250)%x251)&x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = INT8_MAX;
	volatile int64_t x256 = INT64_MIN;
	static volatile int64_t t62 = -732LL;

    t62 = (((x253==x254)%x255)&x256);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = INT16_MIN;
	static int8_t x258 = INT8_MAX;
	uint64_t x259 = 6LLU;
	volatile uint64_t t63 = 12023068LLU;

    t63 = (((x257==x258)%x259)&x260);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = -127;
	uint32_t x263 = 9420U;
	int32_t x264 = INT32_MIN;

    t64 = (((x261==x262)%x263)&x264);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x265 = INT16_MIN;
	static int32_t x266 = -1;
	int32_t x267 = INT32_MIN;
	volatile int32_t t65 = -259219488;

    t65 = (((x265==x266)%x267)&x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x271 = -1;
	uint16_t x272 = 2077U;
	volatile int32_t t66 = 6758;

    t66 = (((x269==x270)%x271)&x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MAX;
	volatile int32_t x274 = -40185;
	uint16_t x275 = 340U;
	uint32_t t67 = 5288U;

    t67 = (((x273==x274)%x275)&x276);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x277 = 1U;
	int8_t x278 = -1;
	volatile int8_t x279 = INT8_MIN;
	int64_t t68 = -273861300647178LL;

    t68 = (((x277==x278)%x279)&x280);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x281 = -334761675;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	int16_t x284 = -1;
	volatile int32_t t69 = -657;

    t69 = (((x281==x282)%x283)&x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x286 = INT8_MAX;
	volatile int64_t x287 = INT64_MAX;
	volatile int64_t t70 = 5113255LL;

    t70 = (((x285==x286)%x287)&x288);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x289 = -1;
	volatile int8_t x290 = -1;
	uint32_t x291 = 29299U;
	volatile int64_t t71 = -4205542922090386579LL;

    t71 = (((x289==x290)%x291)&x292);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x293 = INT16_MIN;
	int32_t x295 = -1;
	volatile int16_t x296 = -1;
	int32_t t72 = 2478;

    t72 = (((x293==x294)%x295)&x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x299 = INT8_MAX;
	volatile int32_t t73 = 277121;

    t73 = (((x297==x298)%x299)&x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = -19;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 10720011LLU;
	volatile int16_t x304 = INT16_MIN;

    t74 = (((x301==x302)%x303)&x304);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x306 = -1;
	static volatile uint64_t x307 = 5803LLU;
	uint64_t x308 = 1784726170327394LLU;
	volatile uint64_t t75 = 617780335299LLU;

    t75 = (((x305==x306)%x307)&x308);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x309 = INT16_MAX;
	int16_t x310 = 3;
	volatile int16_t x311 = -1;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t76 = 6078770;

    t76 = (((x309==x310)%x311)&x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = 9;
	static int8_t x314 = INT8_MIN;
	int64_t x316 = -1923692LL;
	static volatile int64_t t77 = 683692LL;

    t77 = (((x313==x314)%x315)&x316);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x317 = INT32_MIN;
	uint16_t x318 = 29915U;
	uint32_t x319 = UINT32_MAX;

    t78 = (((x317==x318)%x319)&x320);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = -1;
	uint8_t x322 = 61U;
	uint8_t x323 = 11U;
	static int16_t x324 = 0;
	int32_t t79 = 44;

    t79 = (((x321==x322)%x323)&x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x326 = 1016476LLU;
	uint64_t x328 = UINT64_MAX;
	uint64_t t80 = 1LLU;

    t80 = (((x325==x326)%x327)&x328);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = INT8_MIN;
	static int64_t x330 = INT64_MIN;
	static int8_t x332 = INT8_MAX;
	volatile int32_t t81 = -122;

    t81 = (((x329==x330)%x331)&x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	uint32_t x335 = 4173853U;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t82 = 145U;

    t82 = (((x333==x334)%x335)&x336);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = 100;
	uint32_t x339 = 828172482U;
	int8_t x340 = INT8_MIN;
	static uint32_t t83 = 92594U;

    t83 = (((x337==x338)%x339)&x340);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x341 = -1;
	int8_t x342 = -1;
	int16_t x343 = -1;
	int64_t x344 = INT64_MIN;
	int64_t t84 = 1566537405115LL;

    t84 = (((x341==x342)%x343)&x344);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = -119684061LL;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;

    t85 = (((x345==x346)%x347)&x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = INT64_MIN;
	uint8_t x350 = 0U;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = 419U;
	volatile uint32_t t86 = 2565U;

    t86 = (((x349==x350)%x351)&x352);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x354 = -344;
	int64_t x355 = 889LL;
	uint64_t x356 = 467LLU;
	volatile uint64_t t87 = 501LLU;

    t87 = (((x353==x354)%x355)&x356);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	static uint64_t x358 = 673255104119LLU;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t88 = 963394;

    t88 = (((x357==x358)%x359)&x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 117U;
	int64_t x363 = -4666082LL;
	uint16_t x364 = 25112U;

    t89 = (((x361==x362)%x363)&x364);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x365 = -1;
	static int32_t x366 = INT32_MAX;
	volatile int64_t x367 = INT64_MAX;
	static int16_t x368 = 7813;
	static int64_t t90 = -41LL;

    t90 = (((x365==x366)%x367)&x368);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x370 = 0;
	uint32_t x372 = UINT32_MAX;
	uint32_t t91 = 1570U;

    t91 = (((x369==x370)%x371)&x372);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x376 = 1U;
	int64_t t92 = 44743LL;

    t92 = (((x373==x374)%x375)&x376);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x381 = UINT64_MAX;
	uint32_t x382 = 2133705U;
	int64_t x383 = INT64_MIN;
	static int8_t x384 = INT8_MIN;
	int64_t t93 = -26468513952LL;

    t93 = (((x381==x382)%x383)&x384);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = -1;
	static int16_t x387 = 1549;
	static uint8_t x388 = 3U;
	int32_t t94 = 1;

    t94 = (((x385==x386)%x387)&x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x390 = 64049U;
	int8_t x391 = 3;
	int8_t x392 = INT8_MIN;
	static int32_t t95 = -2;

    t95 = (((x389==x390)%x391)&x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x393 = 934425U;
	int8_t x396 = INT8_MAX;
	static int32_t t96 = 2984;

    t96 = (((x393==x394)%x395)&x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = 2233895251085LLU;
	volatile uint8_t x399 = 25U;
	int8_t x400 = INT8_MIN;

    t97 = (((x397==x398)%x399)&x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x401 = -1;
	volatile uint64_t x402 = 40903430280483LLU;
	int64_t x403 = 125LL;
	volatile int64_t x404 = INT64_MIN;

    t98 = (((x401==x402)%x403)&x404);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	volatile int8_t x406 = INT8_MIN;
	static volatile int8_t x407 = -1;
	static int8_t x408 = INT8_MAX;

    t99 = (((x405==x406)%x407)&x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x410 = INT16_MIN;
	int32_t x411 = -3264;
	int16_t x412 = INT16_MIN;
	volatile int32_t t100 = 0;

    t100 = (((x409==x410)%x411)&x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x413 = -913;
	static int8_t x414 = INT8_MAX;
	static int16_t x415 = -508;
	int8_t x416 = -2;
	volatile int32_t t101 = 98;

    t101 = (((x413==x414)%x415)&x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = -1053LL;
	int8_t x418 = INT8_MIN;
	int8_t x419 = 58;
	int16_t x420 = 1;

    t102 = (((x417==x418)%x419)&x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = INT32_MIN;
	int32_t x424 = INT32_MIN;

    t103 = (((x421==x422)%x423)&x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = 99LL;
	int64_t x426 = -1LL;
	uint64_t x427 = 26921122LLU;
	int64_t x428 = -15156103718434169LL;
	static volatile uint64_t t104 = 3018926572LLU;

    t104 = (((x425==x426)%x427)&x428);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x429 = INT64_MAX;
	static uint32_t x430 = 1997469U;
	volatile int8_t x431 = INT8_MIN;
	static volatile int32_t t105 = -94990;

    t105 = (((x429==x430)%x431)&x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	static int32_t x435 = 2335;
	volatile int32_t t106 = -208;

    t106 = (((x433==x434)%x435)&x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x438 = -2917040;
	static int64_t x439 = -2227697545282956458LL;
	int8_t x440 = -1;

    t107 = (((x437==x438)%x439)&x440);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = INT32_MIN;
	int32_t x443 = INT32_MAX;
	uint16_t x444 = 6U;
	int32_t t108 = 267040;

    t108 = (((x441==x442)%x443)&x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x446 = INT16_MIN;
	volatile int16_t x447 = INT16_MAX;
	uint8_t x448 = 0U;
	static int32_t t109 = -471040;

    t109 = (((x445==x446)%x447)&x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x450 = INT64_MIN;
	volatile int16_t x451 = INT16_MAX;
	int32_t x452 = -1;

    t110 = (((x449==x450)%x451)&x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x453 = 3003LL;
	int8_t x455 = INT8_MIN;
	volatile int8_t x456 = INT8_MIN;

    t111 = (((x453==x454)%x455)&x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x458 = INT16_MIN;
	volatile uint16_t x460 = 8U;
	volatile int64_t t112 = 1912346926795LL;

    t112 = (((x457==x458)%x459)&x460);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MIN;
	static uint8_t x463 = 22U;
	int32_t x464 = -7;
	volatile int32_t t113 = 1697346;

    t113 = (((x461==x462)%x463)&x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x465 = 4957U;
	uint16_t x466 = UINT16_MAX;
	volatile int64_t x467 = INT64_MIN;
	int64_t t114 = -7LL;

    t114 = (((x465==x466)%x467)&x468);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = 526;
	int8_t x470 = -1;
	int64_t x471 = INT64_MIN;
	int8_t x472 = 5;

    t115 = (((x469==x470)%x471)&x472);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x473 = INT32_MIN;
	int32_t x474 = INT32_MIN;
	volatile int8_t x475 = INT8_MAX;
	static uint64_t x476 = UINT64_MAX;

    t116 = (((x473==x474)%x475)&x476);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x477 = 56U;
	int64_t x478 = 416276433181LL;
	int64_t x479 = INT64_MIN;
	volatile int8_t x480 = INT8_MAX;
	volatile int64_t t117 = 1608628LL;

    t117 = (((x477==x478)%x479)&x480);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MAX;
	uint64_t x483 = 18LLU;
	int32_t x484 = 2;
	volatile uint64_t t118 = 146097135LLU;

    t118 = (((x481==x482)%x483)&x484);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x485 = INT8_MIN;
	int16_t x486 = -1;
	int8_t x487 = INT8_MIN;
	int16_t x488 = INT16_MIN;

    t119 = (((x485==x486)%x487)&x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x490 = INT16_MAX;
	int64_t x491 = -1LL;
	static int32_t x492 = -904;

    t120 = (((x489==x490)%x491)&x492);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x493 = 924163U;
	volatile uint8_t x494 = 26U;
	static uint16_t x495 = 1176U;
	int16_t x496 = INT16_MIN;
	static int32_t t121 = -29;

    t121 = (((x493==x494)%x495)&x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x497 = INT16_MIN;
	static uint16_t x498 = 1U;
	int8_t x499 = INT8_MAX;
	uint16_t x500 = 13162U;
	int32_t t122 = -192;

    t122 = (((x497==x498)%x499)&x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x501 = UINT16_MAX;
	uint8_t x502 = 41U;
	static uint32_t x503 = 197741192U;
	volatile uint64_t x504 = 59735LLU;
	uint64_t t123 = 206018249514966LLU;

    t123 = (((x501==x502)%x503)&x504);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x505 = INT64_MIN;
	int16_t x506 = INT16_MIN;
	int64_t x507 = -1LL;
	volatile int32_t x508 = 114118;

    t124 = (((x505==x506)%x507)&x508);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x509 = -1LL;
	int8_t x510 = -1;
	static int8_t x511 = -1;
	int16_t x512 = INT16_MIN;

    t125 = (((x509==x510)%x511)&x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = INT64_MAX;
	uint16_t x515 = 4604U;
	static volatile uint64_t x516 = UINT64_MAX;

    t126 = (((x513==x514)%x515)&x516);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x517 = 356U;
	uint32_t x518 = UINT32_MAX;
	int32_t x519 = INT32_MIN;
	int32_t x520 = INT32_MIN;
	volatile int32_t t127 = 872117;

    t127 = (((x517==x518)%x519)&x520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x521 = INT8_MIN;
	static int32_t x522 = -1;
	uint32_t x523 = 1U;
	int16_t x524 = -7003;

    t128 = (((x521==x522)%x523)&x524);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x525 = 45883805674LLU;
	volatile int32_t x526 = INT32_MIN;
	uint32_t t129 = 21U;

    t129 = (((x525==x526)%x527)&x528);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x529 = 281U;
	volatile int8_t x530 = 0;
	static int32_t x532 = INT32_MIN;
	volatile int64_t t130 = 4603048933128LL;

    t130 = (((x529==x530)%x531)&x532);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x533 = INT32_MIN;
	int8_t x534 = INT8_MIN;
	static int8_t x535 = -1;
	int8_t x536 = INT8_MIN;
	volatile int32_t t131 = 21;

    t131 = (((x533==x534)%x535)&x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x538 = INT32_MIN;
	uint64_t x539 = 918LLU;
	int64_t x540 = -1LL;
	volatile uint64_t t132 = 125569743985LLU;

    t132 = (((x537==x538)%x539)&x540);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x541 = INT16_MIN;
	volatile int16_t x542 = -1;
	int16_t x543 = INT16_MAX;
	uint64_t x544 = 2083471648978474LLU;

    t133 = (((x541==x542)%x543)&x544);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x545 = 92U;
	int64_t x546 = -245591510693LL;
	volatile uint16_t x547 = 3452U;
	uint32_t x548 = 3654U;
	volatile uint32_t t134 = 4U;

    t134 = (((x545==x546)%x547)&x548);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x550 = -32;
	uint32_t x551 = 4315U;
	uint32_t t135 = 726U;

    t135 = (((x549==x550)%x551)&x552);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x553 = 708428181389819LL;
	uint16_t x554 = 427U;
	volatile uint64_t t136 = 12975581565742LLU;

    t136 = (((x553==x554)%x555)&x556);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x557 = UINT64_MAX;
	int32_t x558 = -1626;
	int64_t x559 = 6263503738572LL;
	static uint16_t x560 = 86U;

    t137 = (((x557==x558)%x559)&x560);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x563 = INT8_MIN;
	static int64_t x564 = -1LL;
	volatile int64_t t138 = -10LL;

    t138 = (((x561==x562)%x563)&x564);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = 413;
	volatile int8_t x570 = -1;
	int32_t x571 = -1;
	uint16_t x572 = 20U;

    t139 = (((x569==x570)%x571)&x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x574 = UINT32_MAX;
	int8_t x575 = -1;
	static volatile uint64_t t140 = 314479LLU;

    t140 = (((x573==x574)%x575)&x576);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = INT16_MAX;
	int64_t x582 = -1LL;
	int8_t x583 = -1;
	static volatile uint64_t x584 = 125LLU;

    t141 = (((x581==x582)%x583)&x584);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MIN;
	static int32_t x588 = -8169340;
	volatile int32_t t142 = -814539352;

    t142 = (((x585==x586)%x587)&x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x589 = 3U;
	int16_t x591 = -1;
	static uint8_t x592 = 6U;
	static int32_t t143 = -129528;

    t143 = (((x589==x590)%x591)&x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = INT32_MIN;
	int32_t x594 = INT32_MIN;
	uint64_t x595 = UINT64_MAX;
	static volatile uint64_t t144 = 412118847676713503LLU;

    t144 = (((x593==x594)%x595)&x596);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = INT64_MIN;
	static int16_t x602 = -12264;
	volatile uint16_t x604 = 0U;
	volatile uint64_t t145 = 8118695785032073LLU;

    t145 = (((x601==x602)%x603)&x604);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x605 = INT64_MAX;
	int8_t x606 = INT8_MIN;
	volatile uint64_t t146 = 5221134759311LLU;

    t146 = (((x605==x606)%x607)&x608);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x609 = 2U;
	int64_t x610 = 24LL;
	static int16_t x612 = 1;
	volatile int32_t t147 = -262732177;

    t147 = (((x609==x610)%x611)&x612);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x613 = 4882062LL;
	int64_t x614 = INT64_MIN;
	int8_t x615 = INT8_MIN;
	volatile int32_t t148 = 356982;

    t148 = (((x613==x614)%x615)&x616);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x617 = INT32_MAX;
	int16_t x618 = -63;
	static int8_t x620 = -3;

    t149 = (((x617==x618)%x619)&x620);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x621 = -381214073;
	int32_t x622 = INT32_MAX;
	int8_t x623 = -1;
	int16_t x624 = 1;
	volatile int32_t t150 = 924961;

    t150 = (((x621==x622)%x623)&x624);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x625 = -1854LL;
	int8_t x626 = 0;
	int32_t t151 = -32083388;

    t151 = (((x625==x626)%x627)&x628);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x629 = -3LL;
	int8_t x631 = 1;
	static volatile int32_t t152 = 25120;

    t152 = (((x629==x630)%x631)&x632);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x633 = INT8_MIN;
	uint64_t x634 = 27364594LLU;
	int64_t x636 = -96450897LL;

    t153 = (((x633==x634)%x635)&x636);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x637 = -56733247LL;
	uint32_t x638 = 82U;
	volatile int8_t x640 = INT8_MIN;
	volatile int32_t t154 = 215685130;

    t154 = (((x637==x638)%x639)&x640);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x641 = -4LL;
	int64_t x642 = INT64_MIN;
	static volatile int16_t x643 = -14;

    t155 = (((x641==x642)%x643)&x644);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x645 = -1;
	uint8_t x646 = UINT8_MAX;
	volatile int16_t x647 = -3;
	uint64_t t156 = 13362569LLU;

    t156 = (((x645==x646)%x647)&x648);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x649 = -43;
	uint8_t x650 = UINT8_MAX;
	uint16_t x651 = 2U;
	static int8_t x652 = INT8_MAX;
	volatile int32_t t157 = 501914;

    t157 = (((x649==x650)%x651)&x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x653 = -2;
	int16_t x654 = -326;
	int8_t x655 = 1;
	int32_t x656 = -3;

    t158 = (((x653==x654)%x655)&x656);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = -1305;
	static int64_t x658 = -1LL;
	int64_t x660 = INT64_MAX;

    t159 = (((x657==x658)%x659)&x660);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = INT64_MAX;
	static uint64_t x662 = 8033LLU;
	uint64_t x663 = 2559001410LLU;
	int8_t x664 = -1;
	uint64_t t160 = 3278794446393110879LLU;

    t160 = (((x661==x662)%x663)&x664);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x665 = 4034410942560LL;
	static uint8_t x667 = 6U;
	int64_t x668 = -13159818LL;
	volatile int64_t t161 = -14425LL;

    t161 = (((x665==x666)%x667)&x668);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x669 = -1;
	uint16_t x670 = 5U;
	int16_t x672 = -1;
	volatile uint64_t t162 = 1909983541834990LLU;

    t162 = (((x669==x670)%x671)&x672);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x673 = UINT8_MAX;
	static int64_t x674 = -1LL;
	volatile int64_t x675 = -23569809247809LL;
	static volatile int8_t x676 = INT8_MIN;
	int64_t t163 = 620481LL;

    t163 = (((x673==x674)%x675)&x676);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x677 = 32104;
	int64_t x678 = INT64_MAX;
	int64_t x679 = INT64_MAX;
	int64_t x680 = INT64_MIN;
	int64_t t164 = -13558885885946LL;

    t164 = (((x677==x678)%x679)&x680);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = 7904;
	uint32_t x683 = UINT32_MAX;
	int64_t x684 = INT64_MAX;
	int64_t t165 = 576892109604920LL;

    t165 = (((x681==x682)%x683)&x684);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = INT16_MAX;
	int32_t x686 = INT32_MAX;
	volatile int64_t x687 = -1LL;
	volatile int64_t t166 = -11753951963353216LL;

    t166 = (((x685==x686)%x687)&x688);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	int8_t x691 = 23;

    t167 = (((x689==x690)%x691)&x692);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x693 = 18056186210960LL;
	static int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MIN;
	int8_t x696 = INT8_MIN;
	volatile int32_t t168 = 77907353;

    t168 = (((x693==x694)%x695)&x696);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x697 = UINT16_MAX;
	uint32_t x698 = 1827U;
	volatile uint8_t x699 = 11U;

    t169 = (((x697==x698)%x699)&x700);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = INT32_MAX;
	static volatile int16_t x703 = INT16_MIN;
	static uint64_t x704 = 52883639063960LLU;
	volatile uint64_t t170 = 409805142127LLU;

    t170 = (((x701==x702)%x703)&x704);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x705 = UINT32_MAX;
	int32_t x706 = 17131085;
	uint32_t x707 = 69524U;
	uint64_t x708 = 25225LLU;

    t171 = (((x705==x706)%x707)&x708);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x709 = 8U;
	volatile int8_t x710 = INT8_MIN;
	int64_t x711 = INT64_MAX;
	volatile int8_t x712 = -8;
	static volatile int64_t t172 = 3LL;

    t172 = (((x709==x710)%x711)&x712);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x717 = UINT8_MAX;
	volatile uint8_t x718 = 0U;
	uint8_t x719 = 3U;
	int8_t x720 = INT8_MIN;
	volatile int32_t t173 = -8637;

    t173 = (((x717==x718)%x719)&x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x722 = INT8_MIN;
	uint64_t x724 = 1763LLU;
	static volatile uint64_t t174 = 518096LLU;

    t174 = (((x721==x722)%x723)&x724);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = -1LL;
	int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MIN;
	static int32_t t175 = -1192876;

    t175 = (((x725==x726)%x727)&x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = INT32_MIN;
	volatile int16_t x732 = 16;

    t176 = (((x729==x730)%x731)&x732);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x733 = 289U;
	int16_t x734 = -3015;
	volatile uint32_t x735 = UINT32_MAX;
	int32_t x736 = INT32_MAX;

    t177 = (((x733==x734)%x735)&x736);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x738 = -1LL;
	int64_t x739 = INT64_MIN;
	uint8_t x740 = UINT8_MAX;
	volatile int64_t t178 = -54LL;

    t178 = (((x737==x738)%x739)&x740);

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x741 = INT64_MIN;
	int64_t x742 = 7232927538LL;
	volatile int32_t x743 = -1;
	int32_t t179 = 501847;

    t179 = (((x741==x742)%x743)&x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x745 = INT64_MIN;
	uint32_t x746 = 200U;

    t180 = (((x745==x746)%x747)&x748);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x749 = INT16_MIN;
	volatile int64_t x751 = -4184641364LL;
	static int16_t x752 = INT16_MIN;
	volatile int64_t t181 = 48943165LL;

    t181 = (((x749==x750)%x751)&x752);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x753 = INT16_MIN;
	static uint8_t x754 = 6U;
	uint64_t x755 = 3868LLU;
	volatile int64_t x756 = INT64_MIN;

    t182 = (((x753==x754)%x755)&x756);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = -2;
	int8_t x758 = INT8_MIN;
	int64_t x759 = -345257551565LL;
	volatile int64_t t183 = 453274525921315LL;

    t183 = (((x757==x758)%x759)&x760);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x761 = 232062711476LL;
	static uint8_t x762 = UINT8_MAX;
	uint16_t x764 = UINT16_MAX;
	volatile int32_t t184 = 5700126;

    t184 = (((x761==x762)%x763)&x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x765 = INT64_MIN;
	int8_t x767 = INT8_MIN;
	int64_t x768 = -169305928LL;
	int64_t t185 = 35397261LL;

    t185 = (((x765==x766)%x767)&x768);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x769 = 29LLU;
	int8_t x770 = INT8_MIN;
	int8_t x771 = -19;
	int32_t x772 = -106;
	int32_t t186 = -8634;

    t186 = (((x769==x770)%x771)&x772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x773 = INT16_MIN;
	uint32_t x775 = UINT32_MAX;
	int8_t x776 = -2;
	static uint32_t t187 = 108861439U;

    t187 = (((x773==x774)%x775)&x776);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x777 = INT8_MAX;
	int16_t x778 = -16195;
	volatile int32_t x779 = INT32_MIN;
	volatile uint16_t x780 = UINT16_MAX;
	volatile int32_t t188 = 0;

    t188 = (((x777==x778)%x779)&x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	uint16_t x782 = 2187U;
	static volatile int64_t x783 = -510046654551LL;
	uint8_t x784 = 1U;
	int64_t t189 = 124LL;

    t189 = (((x781==x782)%x783)&x784);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x786 = INT8_MAX;
	int32_t x787 = INT32_MIN;
	static int32_t t190 = 773455577;

    t190 = (((x785==x786)%x787)&x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = -1;
	uint64_t x790 = UINT64_MAX;
	int32_t x791 = INT32_MIN;
	int64_t x792 = -52126053LL;

    t191 = (((x789==x790)%x791)&x792);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x793 = 1U;
	int16_t x795 = -1;
	static volatile uint64_t x796 = 3079367898105434426LLU;
	static uint64_t t192 = 1845745LLU;

    t192 = (((x793==x794)%x795)&x796);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x797 = INT32_MAX;
	int8_t x798 = 0;
	uint16_t x799 = 17172U;
	int32_t x800 = INT32_MAX;
	volatile int32_t t193 = -340607027;

    t193 = (((x797==x798)%x799)&x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = INT64_MIN;
	volatile int8_t x803 = 8;
	static int64_t t194 = -86225LL;

    t194 = (((x801==x802)%x803)&x804);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x805 = UINT8_MAX;
	int16_t x807 = -1;
	int32_t x808 = -26;

    t195 = (((x805==x806)%x807)&x808);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x811 = INT64_MIN;
	volatile uint64_t x812 = UINT64_MAX;
	volatile uint64_t t196 = 1738812822732847341LLU;

    t196 = (((x809==x810)%x811)&x812);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x814 = -254457392064486458LL;
	int64_t x815 = INT64_MAX;
	uint64_t x816 = UINT64_MAX;
	volatile uint64_t t197 = 3108645101776LLU;

    t197 = (((x813==x814)%x815)&x816);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x817 = 111U;
	int64_t x818 = INT64_MAX;
	static int32_t x820 = INT32_MIN;
	volatile int64_t t198 = -13400LL;

    t198 = (((x817==x818)%x819)&x820);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = INT16_MIN;
	static uint64_t x822 = UINT64_MAX;
	uint32_t x824 = UINT32_MAX;

    t199 = (((x821==x822)%x823)&x824);

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

