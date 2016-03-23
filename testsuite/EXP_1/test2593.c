
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

volatile int16_t x2 = INT16_MIN;
int32_t t0 = 0;
static uint32_t x15 = UINT32_MAX;
volatile int64_t t4 = 0LL;
int16_t x29 = INT16_MIN;
int32_t t7 = 9355;
uint32_t x34 = 6764U;
static int32_t x56 = INT32_MAX;
int32_t x57 = INT32_MIN;
static volatile int32_t t12 = 14614796;
int64_t x62 = INT64_MIN;
uint64_t t14 = 36339401037762LLU;
static int8_t x70 = 18;
int32_t t15 = 4918;
int16_t x73 = 3286;
volatile uint16_t x74 = 1577U;
static uint8_t x84 = 19U;
int32_t x92 = 10871365;
uint64_t t20 = 3313615042709LLU;
uint32_t x98 = 28U;
int8_t x101 = -1;
int32_t x106 = INT32_MIN;
volatile uint64_t x107 = 7933590625796079647LLU;
volatile uint16_t x108 = 104U;
static uint8_t x121 = 1U;
int32_t x123 = 1;
static int8_t x124 = -1;
volatile uint64_t t28 = 3820987551LLU;
uint64_t t29 = 210899444822LLU;
int8_t x135 = -1;
int16_t x137 = -1;
volatile int16_t x138 = INT16_MIN;
uint16_t x146 = 3902U;
int64_t x147 = 231350070843701LL;
volatile int64_t t34 = 6080682995177LL;
int64_t x158 = INT64_MAX;
int16_t x160 = INT16_MAX;
int64_t t36 = -1LL;
volatile int8_t x161 = -1;
int64_t x172 = 278971774659854LL;
int16_t x185 = INT16_MIN;
int8_t x187 = INT8_MAX;
int8_t x188 = INT8_MIN;
int64_t x192 = INT64_MAX;
volatile int64_t x200 = -1LL;
int64_t x202 = INT64_MIN;
static volatile uint64_t x205 = 6951LLU;
uint64_t x206 = UINT64_MAX;
static uint64_t t45 = UINT64_MAX;
uint8_t x209 = UINT8_MAX;
int32_t x213 = INT32_MIN;
static volatile int64_t x226 = INT64_MIN;
volatile int64_t t50 = 5LL;
int32_t x233 = INT32_MIN;
int8_t x234 = INT8_MIN;
volatile int64_t t57 = 20359LL;
uint32_t x268 = UINT32_MAX;
int16_t x269 = INT16_MIN;
int64_t x276 = 2LL;
volatile int16_t x282 = INT16_MAX;
int32_t t62 = 0;
int64_t t63 = 3326576938LL;
int16_t x301 = INT16_MIN;
int32_t x309 = INT32_MAX;
static int16_t x310 = INT16_MIN;
uint64_t t69 = 2145LLU;
uint16_t x325 = UINT16_MAX;
int64_t x326 = INT64_MIN;
uint32_t t73 = 13280U;
uint64_t x345 = UINT64_MAX;
static int8_t x355 = INT8_MIN;
uint64_t x356 = UINT64_MAX;
volatile uint64_t t78 = UINT64_MAX;
static int8_t x377 = INT8_MIN;
uint32_t x380 = 881U;
uint32_t t82 = 253872905U;
int8_t x382 = 15;
static uint16_t x384 = 27939U;
int16_t x388 = -1;
uint32_t t84 = 528070546U;
int8_t x395 = INT8_MIN;
static int64_t t86 = 14912LL;
static int64_t x401 = -157791639LL;
int8_t x404 = -19;
uint8_t x405 = 1U;
int8_t x407 = INT8_MAX;
volatile int8_t x410 = -1;
uint32_t x413 = 415615U;
int16_t x417 = -47;
volatile int16_t x425 = INT16_MIN;
static volatile int32_t t95 = -468660;
volatile uint64_t x442 = 446986LLU;
volatile uint64_t t97 = 8LLU;
volatile int16_t x447 = INT16_MAX;
volatile uint32_t t99 = 1904U;
uint8_t x457 = 0U;
volatile uint16_t x471 = UINT16_MAX;
static volatile uint64_t t105 = 248045703309LLU;
volatile int64_t x487 = -1LL;
volatile int64_t t109 = -189LL;
int16_t x498 = INT16_MIN;
uint16_t x501 = UINT16_MAX;
uint8_t x504 = UINT8_MAX;
int8_t x506 = -8;
int16_t x510 = -847;
volatile uint64_t x517 = UINT64_MAX;
static volatile int32_t x519 = -52;
static int64_t t115 = -11432446298153649LL;
int16_t x526 = 0;
static volatile uint32_t x527 = 550U;
static volatile int16_t x537 = 5;
int8_t x541 = 3;
static volatile int32_t t122 = 528;
int8_t x563 = -1;
int64_t x565 = INT64_MIN;
volatile int64_t x568 = INT64_MIN;
int64_t x575 = -2LL;
uint64_t x581 = UINT64_MAX;
uint64_t t127 = 215668202650027LLU;
int32_t t129 = 0;
static int32_t x598 = INT32_MIN;
int16_t x600 = INT16_MIN;
volatile uint16_t x607 = 17748U;
uint16_t x608 = 457U;
uint64_t x625 = 23LLU;
int32_t x628 = INT32_MIN;
int32_t x629 = INT32_MIN;
volatile int64_t t139 = 65082627LL;
int64_t x651 = INT64_MAX;
static int8_t x656 = -1;
uint64_t t144 = 55924LLU;
int64_t x670 = INT64_MIN;
int16_t x673 = INT16_MIN;
int32_t x678 = INT32_MAX;
uint64_t x680 = 242724823LLU;
volatile int64_t x701 = INT64_MIN;
uint8_t x703 = 1U;
volatile int64_t x711 = 386086086117LL;
int8_t x715 = INT8_MAX;
int64_t t158 = -128686353252668541LL;
int64_t x728 = -1LL;
volatile int64_t t160 = -39051645012729243LL;
int16_t x737 = 300;
int32_t x739 = -7253233;
static uint64_t x740 = 13407LLU;
uint64_t t162 = 29LLU;
int8_t x741 = -1;
int64_t t163 = 13632868688LL;
int8_t x746 = -1;
int32_t x747 = INT32_MAX;
volatile int8_t x768 = 11;
static volatile int8_t x771 = INT8_MIN;
int64_t t169 = -95284146LL;
uint64_t x775 = 369063LLU;
static int16_t x776 = INT16_MAX;
int8_t x778 = INT8_MIN;
int16_t x779 = -1;
int16_t x781 = INT16_MIN;
int32_t x784 = 228313349;
volatile int8_t x788 = 1;
volatile uint64_t t173 = 211481LLU;
static volatile uint32_t x795 = UINT32_MAX;
volatile int64_t t174 = 528710482LL;
static volatile int8_t x798 = INT8_MIN;
int64_t x799 = INT64_MAX;
static int64_t x802 = 2116762954495LL;
int16_t x822 = INT16_MIN;
int8_t x823 = 11;
int16_t x827 = -4675;
static volatile uint32_t x830 = 3U;
volatile uint32_t x831 = 11585431U;
volatile int16_t x834 = 14;
int32_t x852 = 178488;
volatile uint32_t t187 = 1401U;
uint16_t x868 = UINT16_MAX;
int64_t t189 = -204347177LL;
volatile uint8_t x873 = 100U;
volatile int8_t x874 = INT8_MIN;
volatile int64_t t190 = -735948311771LL;
int8_t x877 = INT8_MIN;
static int16_t x879 = INT16_MIN;
volatile int64_t t192 = -1027462899996633LL;
volatile int32_t x885 = INT32_MIN;
int8_t x891 = INT8_MIN;
static uint64_t x893 = 28010936LLU;
int32_t x895 = INT32_MIN;
uint64_t t195 = 153973208063LLU;
int16_t x902 = -1;
int64_t x909 = INT64_MIN;


void f0(void) {
    	static int32_t x1 = -1;
	uint16_t x3 = 1458U;
	int8_t x4 = 0;

    t0 = (((x1^x2)/x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x5 = INT16_MAX;
	int16_t x6 = 0;
	int64_t x7 = INT64_MIN;
	int16_t x8 = 1;
	int64_t t1 = 1928976375697429LL;

    t1 = (((x5^x6)/x7)*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x10 = 12645882LL;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = 689339;
	volatile int64_t t2 = -7461930224562LL;

    t2 = (((x9^x10)/x11)*x12);

    if (t2 != -132353088LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 209159963U;
	static int8_t x14 = -1;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 8075167084425368711LLU;

    t3 = (((x13^x14)/x15)*x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MAX;
	uint32_t x18 = UINT32_MAX;
	static int8_t x19 = -1;
	int64_t x20 = -1LL;

    t4 = (((x17^x18)/x19)*x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = 26;
	static int32_t x22 = -1;
	int16_t x23 = 1;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = -93569;

    t5 = (((x21^x22)/x23)*x24);

    if (t5 != -6885) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	int64_t x27 = -1LL;
	uint16_t x28 = 160U;
	volatile int64_t t6 = -998492059LL;

    t6 = (((x25^x26)/x27)*x28);

    if (t6 != 343597383680LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = -37;
	int32_t x31 = -1;
	int16_t x32 = INT16_MIN;

    t7 = (((x29^x30)/x31)*x32);

    if (t7 != 1072529408) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	volatile uint16_t x35 = 19643U;
	static volatile int16_t x36 = -12;
	volatile uint32_t t8 = 7U;

    t8 = (((x33^x34)/x35)*x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = INT32_MIN;
	uint32_t x46 = 30U;
	static uint32_t x47 = UINT32_MAX;
	int64_t x48 = -330LL;
	volatile int64_t t9 = 19778766LL;

    t9 = (((x45^x46)/x47)*x48);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 1U;
	int64_t x50 = -281361858499972312LL;
	volatile int8_t x51 = INT8_MAX;
	int64_t x52 = -1LL;
	static volatile int64_t t10 = -487859754LL;

    t10 = (((x49^x50)/x51)*x52);

    if (t10 != 2215447704724191LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -3;
	uint16_t x54 = 60U;
	uint64_t x55 = UINT64_MAX;
	uint64_t t11 = 1873562LLU;

    t11 = (((x53^x54)/x55)*x56);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x58 = 1604;
	volatile int16_t x59 = -2;
	volatile int32_t x60 = -1;

    t12 = (((x57^x58)/x59)*x60);

    if (t12 != -1073741022) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = UINT8_MAX;
	static int16_t x63 = INT16_MIN;
	int8_t x64 = 1;
	int64_t t13 = 5004723754399758LL;

    t13 = (((x61^x62)/x63)*x64);

    if (t13 != 281474976710655LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 7638U;
	static volatile uint64_t x66 = 3915623726787LLU;
	volatile int32_t x67 = INT32_MIN;
	static int16_t x68 = INT16_MIN;

    t14 = (((x65^x66)/x67)*x68);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x69 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	uint8_t x72 = UINT8_MAX;

    t15 = (((x69^x70)/x71)*x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x75 = INT8_MAX;
	uint16_t x76 = 1305U;
	volatile int32_t t16 = -2;

    t16 = (((x73^x74)/x75)*x76);

    if (t16 != 28710) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = UINT16_MAX;
	int32_t x82 = INT32_MIN;
	volatile int32_t x83 = -4419;
	volatile int32_t t17 = 16065457;

    t17 = (((x81^x82)/x83)*x84);

    if (t17 != 9233069) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x85 = 1405529LLU;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = -1;
	uint16_t x88 = 626U;
	volatile uint64_t t18 = 1654649590703LLU;

    t18 = (((x85^x86)/x87)*x88);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x89 = INT32_MAX;
	int64_t x90 = -1LL;
	volatile int16_t x91 = INT16_MAX;
	volatile int64_t t19 = -494LL;

    t19 = (((x89^x90)/x91)*x92);

    if (t19 != -712487519370LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x93 = 13865186029139LLU;
	int8_t x94 = INT8_MIN;
	static int64_t x95 = -1LL;
	int8_t x96 = 7;

    t20 = (((x93^x94)/x95)*x96);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = -773676808896561LL;
	int16_t x99 = INT16_MIN;
	static volatile uint16_t x100 = 221U;
	int64_t t21 = 1906169373318135LL;

    t21 = (((x97^x98)/x99)*x100);

    if (t21 != 5217974083439LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x102 = -1;
	int8_t x103 = 3;
	int64_t x104 = -1LL;
	int64_t t22 = -1305625286613949LL;

    t22 = (((x101^x102)/x103)*x104);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x105 = -1;
	uint64_t t23 = 9528LLU;

    t23 = (((x105^x106)/x107)*x108);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x109 = 7091868358688492LLU;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t24 = 391100674403695LLU;

    t24 = (((x109^x110)/x111)*x112);

    if (t24 != 18374431712119940388LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = -1LL;
	static uint16_t x114 = 1574U;
	static volatile uint16_t x115 = 27U;
	uint64_t x116 = 8381514542LLU;
	volatile uint64_t t25 = 2082830557347035LLU;

    t25 = (((x113^x114)/x115)*x116);

    if (t25 != 18446743587581708180LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 1487U;
	uint8_t x118 = 12U;
	static int8_t x119 = INT8_MAX;
	int8_t x120 = INT8_MIN;
	int32_t t26 = 4587;

    t26 = (((x117^x118)/x119)*x120);

    if (t26 != -1408) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x122 = 87504537053413003LLU;
	uint64_t t27 = 1954298LLU;

    t27 = (((x121^x122)/x123)*x124);

    if (t27 != 18359239536656138614LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = 534;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 3434U;
	uint16_t x128 = 94U;

    t28 = (((x125^x126)/x127)*x128);

    if (t28 != 504948731196475710LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x129 = -4058LL;
	int16_t x130 = INT16_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	int8_t x132 = -1;

    t29 = (((x129^x130)/x131)*x132);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x133 = UINT16_MAX;
	int64_t x134 = -1LL;
	int16_t x136 = 1403;
	volatile int64_t t30 = 9948430119LL;

    t30 = (((x133^x134)/x135)*x136);

    if (t30 != 91947008LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x139 = 60942;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t31 = 57534867;

    t31 = (((x137^x138)/x139)*x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x141 = 14970U;
	int32_t x142 = INT32_MIN;
	uint16_t x143 = 1U;
	static volatile uint8_t x144 = UINT8_MAX;
	uint32_t t32 = 75146960U;

    t32 = (((x141^x142)/x143)*x144);

    if (t32 != 2151300998U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x148 = -114819845LL;
	volatile uint64_t t33 = 279LLU;

    t33 = (((x145^x146)/x147)*x148);

    if (t33 != 18446734918549210541LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x149 = 4U;
	int8_t x150 = 23;
	static volatile uint16_t x151 = 17949U;
	int64_t x152 = -128404LL;

    t34 = (((x149^x150)/x151)*x152);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	static int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	int64_t t35 = 144821LL;

    t35 = (((x153^x154)/x155)*x156);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x157 = INT64_MAX;
	uint32_t x159 = UINT32_MAX;

    t36 = (((x157^x158)/x159)*x160);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x162 = 2U;
	volatile uint16_t x163 = 13231U;
	static int64_t x164 = INT64_MIN;
	static int64_t t37 = 7888332981528955LL;

    t37 = (((x161^x162)/x163)*x164);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = 742;
	volatile int32_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -827;
	uint32_t t38 = 588515U;

    t38 = (((x165^x166)/x167)*x168);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	int64_t t39 = -94276477487908753LL;

    t39 = (((x169^x170)/x171)*x172);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x186 = 0;
	volatile int32_t t40 = 11373;

    t40 = (((x185^x186)/x187)*x188);

    if (t40 != 33024) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = -1;
	static int64_t t41 = 430341LL;

    t41 = (((x189^x190)/x191)*x192);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x193 = 10U;
	static int16_t x194 = INT16_MIN;
	int8_t x195 = -1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t42 = 3906;

    t42 = (((x193^x194)/x195)*x196);

    if (t42 != -4193024) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x197 = INT64_MAX;
	uint16_t x198 = 8381U;
	int8_t x199 = INT8_MIN;
	int64_t t43 = -31043LL;

    t43 = (((x197^x198)/x199)*x200);

    if (t43 != 72057594037927870LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x201 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MIN;
	volatile int64_t t44 = -80LL;

    t44 = (((x201^x202)/x203)*x204);

    if (t44 != -70368744177664LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x207 = INT16_MIN;
	int64_t x208 = -1LL;

    t45 = (((x205^x206)/x207)*x208);

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x210 = 1;
	static int32_t x211 = INT32_MAX;
	uint16_t x212 = 10576U;
	volatile int32_t t46 = 3;

    t46 = (((x209^x210)/x211)*x212);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x214 = INT32_MAX;
	uint8_t x215 = 10U;
	uint16_t x216 = 4U;
	static int32_t t47 = 9;

    t47 = (((x213^x214)/x215)*x216);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	static volatile int64_t x219 = INT64_MIN;
	int8_t x220 = -14;
	static volatile int64_t t48 = 805895LL;

    t48 = (((x217^x218)/x219)*x220);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MIN;
	uint64_t x224 = 43787085641LLU;
	volatile uint64_t t49 = 108551602LLU;

    t49 = (((x221^x222)/x223)*x224);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 0U;

    t50 = (((x225^x226)/x227)*x228);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x235 = INT32_MIN;
	int8_t x236 = 1;
	int32_t t51 = 8307;

    t51 = (((x233^x234)/x235)*x236);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x241 = UINT16_MAX;
	volatile int64_t x242 = 5759481030502037LL;
	static volatile int8_t x243 = -19;
	volatile uint8_t x244 = 19U;
	volatile int64_t t52 = -483LL;

    t52 = (((x241^x242)/x243)*x244);

    if (t52 != -5759481030449506LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x245 = INT32_MAX;
	uint16_t x246 = 1020U;
	uint32_t x247 = 2709U;
	volatile int32_t x248 = INT32_MAX;
	uint32_t t53 = 6787U;

    t53 = (((x245^x246)/x247)*x248);

    if (t53 != 2146690927U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = INT32_MIN;
	static int16_t x250 = -1;
	static int16_t x251 = INT16_MIN;
	uint32_t x252 = 34611282U;
	volatile uint32_t t54 = 0U;

    t54 = (((x249^x250)/x251)*x252);

    if (t54 != 3787333714U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = -1;
	int16_t x254 = -3880;
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t55 = 1855979612380099LL;

    t55 = (((x253^x254)/x255)*x256);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = -1740LL;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	volatile int32_t x260 = INT32_MIN;
	volatile int64_t t56 = -5325141156235495LL;

    t56 = (((x257^x258)/x259)*x260);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x261 = INT64_MAX;
	uint32_t x262 = UINT32_MAX;
	int32_t x263 = -1;
	uint8_t x264 = 1U;

    t57 = (((x261^x262)/x263)*x264);

    if (t57 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x265 = -1;
	static volatile int32_t x266 = -411440;
	int8_t x267 = -1;
	volatile uint32_t t58 = 1U;

    t58 = (((x265^x266)/x267)*x268);

    if (t58 != 411439U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x270 = -1;
	int64_t x271 = 118098859982560LL;
	int16_t x272 = -1;
	int64_t t59 = 359497776962272779LL;

    t59 = (((x269^x270)/x271)*x272);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x273 = 247605439696LL;
	int8_t x274 = 0;
	int8_t x275 = 1;
	int64_t t60 = 37893407LL;

    t60 = (((x273^x274)/x275)*x276);

    if (t60 != 495210879392LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x277 = -1LL;
	uint64_t x278 = 4037782868LLU;
	uint16_t x279 = 41U;
	int16_t x280 = -1;
	uint64_t t61 = 120755LLU;

    t61 = (((x277^x278)/x279)*x280);

    if (t61 != 17996823486644386525LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x283 = -1;
	int16_t x284 = INT16_MIN;

    t62 = (((x281^x282)/x283)*x284);

    if (t62 != -1069580288) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x285 = -23;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	static volatile int16_t x288 = INT16_MIN;

    t63 = (((x285^x286)/x287)*x288);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x293 = 0U;
	int32_t x294 = -8;
	static int64_t x295 = -247926220773150758LL;
	uint16_t x296 = 18U;
	volatile int64_t t64 = -92LL;

    t64 = (((x293^x294)/x295)*x296);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x297 = UINT64_MAX;
	int8_t x298 = INT8_MIN;
	volatile uint32_t x299 = 202965U;
	static int8_t x300 = INT8_MIN;
	static uint64_t t65 = 3480LLU;

    t65 = (((x297^x298)/x299)*x300);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MAX;
	int64_t x304 = -1LL;
	volatile int64_t t66 = 1LL;

    t66 = (((x301^x302)/x303)*x304);

    if (t66 != -65537LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = -2131478LL;
	static int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MAX;
	volatile int64_t t67 = -55024865475979301LL;

    t67 = (((x305^x306)/x307)*x308);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x311 = INT64_MIN;
	static uint32_t x312 = 979U;
	volatile int64_t t68 = -14609701970689030LL;

    t68 = (((x309^x310)/x311)*x312);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x313 = 57360U;
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	static uint64_t x316 = UINT64_MAX;

    t69 = (((x313^x314)/x315)*x316);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x317 = 58U;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MAX;
	uint8_t x320 = 5U;
	uint32_t t70 = 161130600U;

    t70 = (((x317^x318)/x319)*x320);

    if (t70 != 169093195U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x321 = -18;
	volatile int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	static uint8_t x324 = UINT8_MAX;
	static volatile int32_t t71 = -332262407;

    t71 = (((x321^x322)/x323)*x324);

    if (t71 != -65025) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x327 = INT32_MAX;
	int32_t x328 = -684667;
	static volatile int64_t t72 = 1755911587LL;

    t72 = (((x325^x326)/x327)*x328);

    if (t72 != 2940622374335099LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = INT16_MIN;
	volatile uint16_t x330 = 2U;
	uint32_t x331 = UINT32_MAX;
	uint32_t x332 = 36U;

    t73 = (((x329^x330)/x331)*x332);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x337 = -5335330;
	int8_t x338 = INT8_MIN;
	volatile int32_t x339 = INT32_MIN;
	uint16_t x340 = 1U;
	int32_t t74 = -104801;

    t74 = (((x337^x338)/x339)*x340);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = 3U;
	static uint64_t x343 = 15505652762LLU;
	int64_t x344 = -1LL;
	uint64_t t75 = 451396LLU;

    t75 = (((x341^x342)/x343)*x344);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x346 = 11789;
	int64_t x347 = INT64_MIN;
	int64_t x348 = 390903975653LL;
	volatile uint64_t t76 = 26715LLU;

    t76 = (((x345^x346)/x347)*x348);

    if (t76 != 390903975653LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	uint32_t x350 = 0U;
	int64_t x351 = INT64_MAX;
	volatile uint64_t x352 = 1679956LLU;
	uint64_t t77 = 84473LLU;

    t77 = (((x349^x350)/x351)*x352);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = INT8_MAX;
	volatile uint32_t x354 = UINT32_MAX;

    t78 = (((x353^x354)/x355)*x356);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 4469U;
	int8_t x359 = INT8_MAX;
	volatile uint32_t x360 = UINT32_MAX;
	static uint32_t t79 = 1737U;

    t79 = (((x357^x358)/x359)*x360);

    if (t79 != 4294967261U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = 12;
	uint32_t x366 = UINT32_MAX;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = 37U;
	static volatile uint32_t t80 = 41781135U;

    t80 = (((x365^x366)/x367)*x368);

    if (t80 != 37U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x369 = 1;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = -238;
	uint8_t x372 = UINT8_MAX;
	uint64_t t81 = 1420587598219LLU;

    t81 = (((x369^x370)/x371)*x372);

    if (t81 != 255LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x378 = -1;
	uint8_t x379 = UINT8_MAX;

    t82 = (((x377^x378)/x379)*x380);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x381 = -1;
	uint64_t x383 = 241701758995832458LLU;
	volatile uint64_t t83 = 30850349378592LLU;

    t83 = (((x381^x382)/x383)*x384);

    if (t83 != 2123364LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x385 = INT8_MIN;
	static volatile uint32_t x386 = UINT32_MAX;
	static int16_t x387 = INT16_MAX;

    t84 = (((x385^x386)/x387)*x388);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = INT32_MAX;
	static int32_t x394 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t85 = -255214295;

    t85 = (((x393^x394)/x395)*x396);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x397 = 346U;
	static uint16_t x398 = 82U;
	int32_t x399 = -4180588;
	static volatile int64_t x400 = 18269488802375353LL;

    t86 = (((x397^x398)/x399)*x400);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	volatile int64_t t87 = 82647626897973189LL;

    t87 = (((x401^x402)/x403)*x404);

    if (t87 != -91485LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x406 = 1U;
	uint16_t x408 = 1U;
	static int32_t t88 = 170916;

    t88 = (((x405^x406)/x407)*x408);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x409 = INT32_MAX;
	static uint64_t x411 = 29LLU;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t89 = 1302244LLU;

    t89 = (((x409^x410)/x411)*x412);

    if (t89 != 14630176315438322512LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x414 = -1;
	uint64_t x415 = UINT64_MAX;
	static int16_t x416 = INT16_MIN;
	uint64_t t90 = 1LLU;

    t90 = (((x413^x414)/x415)*x416);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x418 = -1;
	int32_t x419 = -1;
	static uint64_t x420 = 128847765LLU;
	static volatile uint64_t t91 = 10050LLU;

    t91 = (((x417^x418)/x419)*x420);

    if (t91 != 18446744067782554426LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x421 = 4;
	int16_t x422 = INT16_MAX;
	int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	int64_t t92 = -488827049LL;

    t92 = (((x421^x422)/x423)*x424);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x426 = INT16_MAX;
	static uint32_t x427 = 359U;
	int32_t x428 = INT32_MIN;
	uint32_t t93 = 52726305U;

    t93 = (((x425^x426)/x427)*x428);

    if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x429 = -1LL;
	static int16_t x430 = 9934;
	static volatile int16_t x431 = -55;
	uint64_t x432 = 215588539757583LLU;
	static volatile uint64_t t94 = 169986421011LLU;

    t94 = (((x429^x430)/x431)*x432);

    if (t94 != 38805937156364940LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x433 = 2U;
	volatile uint16_t x434 = 60U;
	volatile int8_t x435 = INT8_MAX;
	int32_t x436 = INT32_MIN;

    t95 = (((x433^x434)/x435)*x436);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x437 = 133911424821205475LL;
	int16_t x438 = -1;
	int16_t x439 = -63;
	int8_t x440 = INT8_MAX;
	int64_t t96 = -2532937732656320LL;

    t96 = (((x437^x438)/x439)*x440);

    if (t96 != 269948427814176082LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x441 = -1;
	uint16_t x443 = UINT16_MAX;
	static int64_t x444 = -179922579204977LL;

    t97 = (((x441^x442)/x443)*x444);

    if (t97 != 3712000700194292902LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x445 = 258204U;
	int16_t x446 = INT16_MIN;
	volatile int8_t x448 = INT8_MIN;
	volatile uint32_t t98 = 108581U;

    t98 = (((x445^x446)/x447)*x448);

    if (t98 != 4278190592U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x449 = 5505U;
	int16_t x450 = INT16_MAX;
	volatile int16_t x451 = 3;
	uint32_t x452 = UINT32_MAX;

    t99 = (((x449^x450)/x451)*x452);

    if (t99 != 4294958209U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x453 = -1;
	volatile int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MIN;
	uint16_t x456 = UINT16_MAX;
	volatile int64_t t100 = 493564LL;

    t100 = (((x453^x454)/x455)*x456);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x458 = INT64_MIN;
	int16_t x459 = -126;
	uint8_t x460 = 50U;
	volatile int64_t t101 = -1LL;

    t101 = (((x457^x458)/x459)*x460);

    if (t101 != 3660068268593165000LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x465 = 15;
	static int64_t x466 = 4315302038078143286LL;
	static uint64_t x467 = UINT64_MAX;
	volatile int32_t x468 = -37;
	uint64_t t102 = 6100531432213636LLU;

    t102 = (((x465^x466)/x467)*x468);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x469 = -1;
	int8_t x470 = INT8_MIN;
	uint8_t x472 = 46U;
	static int32_t t103 = -1703;

    t103 = (((x469^x470)/x471)*x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x473 = UINT8_MAX;
	int32_t x474 = INT32_MIN;
	int64_t x475 = -520458216867517LL;
	int32_t x476 = INT32_MAX;
	int64_t t104 = 221121474607147789LL;

    t104 = (((x473^x474)/x475)*x476);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x477 = -1LL;
	uint64_t x478 = 6562387LLU;
	static uint16_t x479 = UINT16_MAX;
	int64_t x480 = INT64_MAX;

    t105 = (((x477^x478)/x479)*x480);

    if (t105 != 18446462594437808228LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x481 = 1;
	uint16_t x482 = 0U;
	static uint8_t x483 = UINT8_MAX;
	uint16_t x484 = 5247U;
	static int32_t t106 = 1092418;

    t106 = (((x481^x482)/x483)*x484);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x485 = 1038737U;
	volatile uint32_t x486 = 2017U;
	int8_t x488 = -1;
	static int64_t t107 = 3431713LL;

    t107 = (((x485^x486)/x487)*x488);

    if (t107 != 1039984LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x489 = 1980U;
	static uint8_t x490 = 15U;
	uint16_t x491 = UINT16_MAX;
	volatile uint64_t x492 = UINT64_MAX;
	volatile uint64_t t108 = 726970843127178887LLU;

    t108 = (((x489^x490)/x491)*x492);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	int16_t x494 = 1;
	uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MIN;

    t109 = (((x493^x494)/x495)*x496);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x497 = -1;
	volatile uint32_t x499 = 80386990U;
	static int64_t x500 = INT64_MIN;
	static int64_t t110 = -18635883390LL;

    t110 = (((x497^x498)/x499)*x500);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x502 = 6;
	int32_t x503 = INT32_MIN;
	int32_t t111 = -4422355;

    t111 = (((x501^x502)/x503)*x504);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x505 = 31U;
	uint64_t x507 = 696594943258509LLU;
	uint32_t x508 = UINT32_MAX;
	uint64_t t112 = 16512602544LLU;

    t112 = (((x505^x506)/x507)*x508);

    if (t112 != 113735028938895LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x509 = 14;
	int32_t x511 = INT32_MAX;
	int8_t x512 = -3;
	static volatile int32_t t113 = -2672;

    t113 = (((x509^x510)/x511)*x512);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x518 = 202087879U;
	volatile uint64_t x520 = 1569895LLU;
	static uint64_t t114 = 117801244868883LLU;

    t114 = (((x517^x518)/x519)*x520);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x521 = INT64_MAX;
	int64_t x522 = INT64_MIN;
	static int32_t x523 = 444259254;
	static int64_t x524 = INT64_MIN;

    t115 = (((x521^x522)/x523)*x524);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x525 = 231LL;
	int8_t x528 = -1;
	volatile int64_t t116 = 10090334404595LL;

    t116 = (((x525^x526)/x527)*x528);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x529 = INT64_MIN;
	int64_t x530 = INT64_MIN;
	int32_t x531 = INT32_MAX;
	int64_t x532 = INT64_MIN;
	static volatile int64_t t117 = 15331224190330LL;

    t117 = (((x529^x530)/x531)*x532);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x533 = -1;
	static int32_t x534 = INT32_MAX;
	static uint32_t x535 = UINT32_MAX;
	static int16_t x536 = INT16_MIN;
	volatile uint32_t t118 = 739U;

    t118 = (((x533^x534)/x535)*x536);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x538 = 1;
	uint64_t x539 = 11890131LLU;
	uint8_t x540 = 2U;
	volatile uint64_t t119 = 0LLU;

    t119 = (((x537^x538)/x539)*x540);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x542 = -3;
	volatile int32_t x543 = 102581;
	uint16_t x544 = 1U;
	volatile int32_t t120 = -70033;

    t120 = (((x541^x542)/x543)*x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x549 = 28U;
	volatile int32_t x550 = 100665046;
	uint8_t x551 = UINT8_MAX;
	volatile uint16_t x552 = 9U;
	int32_t t121 = -7;

    t121 = (((x549^x550)/x551)*x552);

    if (t121 != 3552876) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x557 = -511589994;
	int8_t x558 = INT8_MAX;
	static int8_t x559 = 1;
	uint8_t x560 = 1U;

    t122 = (((x557^x558)/x559)*x560);

    if (t122 != -511589911) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x561 = INT64_MAX;
	static int64_t x562 = INT64_MIN;
	int64_t x564 = -1LL;
	int64_t t123 = -1822981343LL;

    t123 = (((x561^x562)/x563)*x564);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x566 = 6;
	int64_t x567 = INT64_MAX;
	volatile int64_t t124 = -1163093402149408LL;

    t124 = (((x565^x566)/x567)*x568);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x569 = 109148U;
	static int32_t x570 = INT32_MIN;
	volatile int8_t x571 = INT8_MIN;
	static uint16_t x572 = UINT16_MAX;
	static uint32_t t125 = 47419690U;

    t125 = (((x569^x570)/x571)*x572);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x573 = -24;
	uint32_t x574 = UINT32_MAX;
	uint32_t x576 = 46U;
	static int64_t t126 = -718165LL;

    t126 = (((x573^x574)/x575)*x576);

    if (t126 != -506LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x582 = INT64_MAX;
	int64_t x583 = -1LL;
	uint64_t x584 = 100210LLU;

    t127 = (((x581^x582)/x583)*x584);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x585 = UINT16_MAX;
	uint8_t x586 = 4U;
	uint16_t x587 = 317U;
	uint8_t x588 = UINT8_MAX;
	volatile int32_t t128 = -23900181;

    t128 = (((x585^x586)/x587)*x588);

    if (t128 != 52530) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x589 = -16130;
	volatile int16_t x590 = -1;
	uint8_t x591 = 12U;
	volatile int8_t x592 = INT8_MIN;

    t129 = (((x589^x590)/x591)*x592);

    if (t129 != -172032) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x597 = INT32_MIN;
	uint8_t x599 = 34U;
	volatile int32_t t130 = 234704;

    t130 = (((x597^x598)/x599)*x600);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x601 = -1;
	volatile int32_t x602 = 35586;
	int8_t x603 = INT8_MIN;
	int8_t x604 = 3;
	int32_t t131 = -1762679;

    t131 = (((x601^x602)/x603)*x604);

    if (t131 != 834) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x605 = 1872U;
	int16_t x606 = -14;
	static volatile int32_t t132 = 7;

    t132 = (((x605^x606)/x607)*x608);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x609 = INT32_MIN;
	uint16_t x610 = 11263U;
	uint64_t x611 = 2111903833404787508LLU;
	static int32_t x612 = -1;
	uint64_t t133 = 122241LLU;

    t133 = (((x609^x610)/x611)*x612);

    if (t133 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x613 = 171428300000LL;
	uint16_t x614 = 7U;
	uint16_t x615 = 1U;
	uint8_t x616 = 35U;
	int64_t t134 = 1290018294509725LL;

    t134 = (((x613^x614)/x615)*x616);

    if (t134 != 5999990500245LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	uint32_t x620 = 36515U;
	uint32_t t135 = 1668U;

    t135 = (((x617^x618)/x619)*x620);

    if (t135 != 1901956771U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x621 = UINT32_MAX;
	static int32_t x622 = INT32_MIN;
	int16_t x623 = INT16_MIN;
	int64_t x624 = INT64_MAX;
	int64_t t136 = 300827385056869LL;

    t136 = (((x621^x622)/x623)*x624);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x626 = INT64_MIN;
	int8_t x627 = INT8_MAX;
	uint64_t t137 = 268485406975017LLU;

    t137 = (((x625^x626)/x627)*x628);

    if (t137 != 17865744260381278208LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x630 = INT8_MAX;
	static int8_t x631 = INT8_MIN;
	static uint64_t x632 = 1LLU;
	volatile uint64_t t138 = 1674LLU;

    t138 = (((x629^x630)/x631)*x632);

    if (t138 != 16777215LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = INT8_MIN;
	int64_t x635 = INT64_MIN;
	int64_t x636 = 4320LL;

    t139 = (((x633^x634)/x635)*x636);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x637 = INT8_MAX;
	uint32_t x638 = 74565922U;
	static int8_t x639 = INT8_MIN;
	uint32_t x640 = 19909U;
	volatile uint32_t t140 = 35412U;

    t140 = (((x637^x638)/x639)*x640);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x641 = -489621516;
	uint32_t x642 = UINT32_MAX;
	int8_t x643 = INT8_MIN;
	static uint8_t x644 = 110U;
	uint32_t t141 = 12651216U;

    t141 = (((x641^x642)/x643)*x644);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = INT16_MAX;
	int32_t x646 = INT32_MIN;
	int16_t x647 = INT16_MAX;
	static uint64_t x648 = 76831LLU;
	volatile uint64_t t142 = 1LLU;

    t142 = (((x645^x646)/x647)*x648);

    if (t142 != 18446744068674278369LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x649 = INT64_MAX;
	volatile uint64_t x650 = 365603LLU;
	uint8_t x652 = 0U;
	volatile uint64_t t143 = 1090760283425LLU;

    t143 = (((x649^x650)/x651)*x652);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x653 = INT64_MIN;
	int8_t x654 = 50;
	uint64_t x655 = 44784LLU;

    t144 = (((x653^x654)/x655)*x656);

    if (t144 != 18446538121315016631LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x661 = INT64_MIN;
	int64_t x662 = -2220372323250LL;
	int64_t x663 = INT64_MAX;
	int16_t x664 = INT16_MAX;
	volatile int64_t t145 = -1524279531846038926LL;

    t145 = (((x661^x662)/x663)*x664);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x665 = INT32_MIN;
	uint16_t x666 = 1U;
	uint32_t x667 = 3561102U;
	int16_t x668 = INT16_MIN;
	volatile uint32_t t146 = 26U;

    t146 = (((x665^x666)/x667)*x668);

    if (t146 != 4275208192U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x669 = 38611125621336LLU;
	int8_t x671 = INT8_MIN;
	static int64_t x672 = -1LL;
	volatile uint64_t t147 = 124423LLU;

    t147 = (((x669^x670)/x671)*x672);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x674 = 7;
	volatile int32_t x675 = INT32_MAX;
	volatile uint64_t x676 = 2327297LLU;
	uint64_t t148 = 1578525376654LLU;

    t148 = (((x673^x674)/x675)*x676);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x677 = 391178U;
	static uint8_t x679 = 9U;
	volatile uint64_t t149 = 874627650952LLU;

    t149 = (((x677^x678)/x679)*x680);

    if (t149 != 57905848617873267LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x681 = INT8_MIN;
	uint8_t x682 = UINT8_MAX;
	int8_t x683 = INT8_MIN;
	int16_t x684 = -3358;
	int32_t t150 = -237;

    t150 = (((x681^x682)/x683)*x684);

    if (t150 != -3358) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x685 = 354U;
	int64_t x686 = INT64_MIN;
	int8_t x687 = INT8_MIN;
	int32_t x688 = -1;
	volatile int64_t t151 = -351706762203119313LL;

    t151 = (((x685^x686)/x687)*x688);

    if (t151 != -72057594037927933LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x693 = 41667729LLU;
	volatile uint64_t x694 = UINT64_MAX;
	int64_t x695 = -445005621LL;
	static int16_t x696 = INT16_MIN;
	uint64_t t152 = 5228556833612LLU;

    t152 = (((x693^x694)/x695)*x696);

    if (t152 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x697 = -1;
	static int32_t x698 = -198559610;
	volatile int32_t x699 = INT32_MAX;
	volatile int32_t x700 = 801726;
	static int32_t t153 = -4;

    t153 = (((x697^x698)/x699)*x700);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x702 = INT64_MAX;
	uint16_t x704 = 10U;
	int64_t t154 = -2219LL;

    t154 = (((x701^x702)/x703)*x704);

    if (t154 != -10LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x705 = INT16_MAX;
	int32_t x706 = INT32_MIN;
	volatile uint64_t x707 = 64234765781LLU;
	uint32_t x708 = 1203U;
	volatile uint64_t t155 = 273810LLU;

    t155 = (((x705^x706)/x707)*x708);

    if (t155 != 345473869647LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = 3023;
	uint8_t x712 = UINT8_MAX;
	volatile int64_t t156 = 1LL;

    t156 = (((x709^x710)/x711)*x712);

    if (t156 != -6091801590LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x713 = INT32_MIN;
	int8_t x714 = -1;
	uint16_t x716 = 1U;
	int32_t t157 = -1030125804;

    t157 = (((x713^x714)/x715)*x716);

    if (t157 != 16909320) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x721 = INT32_MAX;
	int64_t x722 = INT64_MAX;
	volatile uint32_t x723 = 28U;
	int16_t x724 = 1;

    t158 = (((x721^x722)/x723)*x724);

    if (t158 != 329406144096689005LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x725 = 42LLU;
	volatile uint32_t x726 = UINT32_MAX;
	int16_t x727 = INT16_MAX;
	uint64_t t159 = 19658779272LLU;

    t159 = (((x725^x726)/x727)*x728);

    if (t159 != 18446744073709420541LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x729 = INT16_MIN;
	static int32_t x730 = -3062;
	static uint32_t x731 = 8319824U;
	int64_t x732 = -5328832476LL;

    t160 = (((x729^x730)/x731)*x732);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x733 = 37;
	static uint8_t x734 = UINT8_MAX;
	static int64_t x735 = INT64_MIN;
	volatile int16_t x736 = INT16_MIN;
	static volatile int64_t t161 = -4888873669LL;

    t161 = (((x733^x734)/x735)*x736);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x738 = INT32_MAX;

    t162 = (((x737^x738)/x739)*x740);

    if (t162 != 18446744073705583144LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x742 = INT8_MIN;
	volatile int64_t x743 = -279541135636393LL;
	volatile int16_t x744 = INT16_MAX;

    t163 = (((x741^x742)/x743)*x744);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x745 = -1;
	int16_t x748 = INT16_MIN;
	volatile int32_t t164 = -1;

    t164 = (((x745^x746)/x747)*x748);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x753 = -227444048618598LL;
	volatile int32_t x754 = INT32_MIN;
	int8_t x755 = 17;
	uint16_t x756 = UINT16_MAX;
	volatile int64_t t165 = -236724159855501LL;

    t165 = (((x753^x754)/x755)*x756);

    if (t165 != 876790375484784225LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x757 = -4;
	volatile int8_t x758 = INT8_MAX;
	volatile uint32_t x759 = UINT32_MAX;
	int32_t x760 = INT32_MAX;
	uint32_t t166 = 461088U;

    t166 = (((x757^x758)/x759)*x760);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x761 = 1U;
	int32_t x762 = INT32_MAX;
	volatile int64_t x763 = INT64_MIN;
	int16_t x764 = INT16_MAX;
	volatile int64_t t167 = 3909248794145866LL;

    t167 = (((x761^x762)/x763)*x764);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x765 = -1;
	int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MIN;
	int32_t t168 = 5106860;

    t168 = (((x765^x766)/x767)*x768);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	uint32_t x770 = 1316840042U;
	int64_t x772 = 2161931282752LL;

    t169 = (((x769^x770)/x771)*x772);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x773 = INT16_MAX;
	volatile int16_t x774 = 7110;
	volatile uint64_t t170 = 695258LLU;

    t170 = (((x773^x774)/x775)*x776);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x777 = INT8_MIN;
	int64_t x780 = 63LL;
	int64_t t171 = 606533222LL;

    t171 = (((x777^x778)/x779)*x780);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x782 = UINT32_MAX;
	uint16_t x783 = 990U;
	volatile uint32_t t172 = 4U;

    t172 = (((x781^x782)/x783)*x784);

    if (t172 != 3239373221U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x785 = UINT16_MAX;
	volatile uint64_t x786 = UINT64_MAX;
	int8_t x787 = INT8_MAX;

    t173 = (((x785^x786)/x787)*x788);

    if (t173 != 145249953336295165LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x793 = INT64_MIN;
	volatile int8_t x794 = INT8_MAX;
	static int32_t x796 = INT32_MAX;

    t174 = (((x793^x794)/x795)*x796);

    if (t174 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x797 = 0;
	int8_t x800 = -1;
	int64_t t175 = -535756028436969LL;

    t175 = (((x797^x798)/x799)*x800);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x801 = INT8_MIN;
	int32_t x803 = -143173144;
	static int32_t x804 = -1;
	int64_t t176 = -9780993915LL;

    t176 = (((x801^x802)/x803)*x804);

    if (t176 != -14784LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x805 = 120U;
	uint16_t x806 = 12193U;
	uint64_t x807 = 17200058067672927LLU;
	uint8_t x808 = 9U;
	static volatile uint64_t t177 = 79LLU;

    t177 = (((x805^x806)/x807)*x808);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x817 = INT8_MAX;
	volatile int64_t x818 = 26750080885231LL;
	uint16_t x819 = UINT16_MAX;
	uint32_t x820 = UINT32_MAX;
	int64_t t178 = -3548091365975752LL;

    t178 = (((x817^x818)/x819)*x820);

    if (t178 != 1753120046825843355LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x821 = 113U;
	uint32_t x824 = 131U;
	uint32_t t179 = 31260U;

    t179 = (((x821^x822)/x823)*x824);

    if (t179 != 4294578488U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x825 = INT8_MAX;
	uint8_t x826 = 28U;
	uint8_t x828 = UINT8_MAX;
	volatile int32_t t180 = -16774263;

    t180 = (((x825^x826)/x827)*x828);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x829 = 951U;
	volatile uint64_t x832 = UINT64_MAX;
	volatile uint64_t t181 = 789199423LLU;

    t181 = (((x829^x830)/x831)*x832);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x833 = INT8_MAX;
	static int32_t x835 = INT32_MIN;
	static int8_t x836 = INT8_MIN;
	volatile int32_t t182 = 6;

    t182 = (((x833^x834)/x835)*x836);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x841 = INT32_MIN;
	volatile int8_t x842 = INT8_MAX;
	int16_t x843 = INT16_MIN;
	volatile uint8_t x844 = UINT8_MAX;
	volatile int32_t t183 = 12;

    t183 = (((x841^x842)/x843)*x844);

    if (t183 != 16711425) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x845 = 244165468596570LLU;
	uint64_t x846 = 456188803200LLU;
	static uint32_t x847 = 1298U;
	static uint32_t x848 = 611968U;
	static volatile uint64_t t184 = 603858434338150074LLU;

    t184 = (((x845^x846)/x847)*x848);

    if (t184 != 115330938830695168LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x849 = 12437126560LLU;
	volatile int16_t x850 = -5;
	int64_t x851 = 948231442LL;
	uint64_t t185 = 1055995846697LLU;

    t185 = (((x849^x850)/x851)*x852);

    if (t185 != 3472277239519488LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x853 = -1;
	int8_t x854 = INT8_MIN;
	uint8_t x855 = UINT8_MAX;
	volatile int64_t x856 = INT64_MIN;
	volatile int64_t t186 = 2681753649346LL;

    t186 = (((x853^x854)/x855)*x856);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x857 = INT8_MIN;
	uint16_t x858 = 1U;
	uint32_t x859 = 917U;
	uint8_t x860 = 2U;

    t187 = (((x857^x858)/x859)*x860);

    if (t187 != 9367430U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x861 = -1;
	volatile uint8_t x862 = 118U;
	static uint32_t x863 = UINT32_MAX;
	uint16_t x864 = 6271U;
	volatile uint32_t t188 = 6540797U;

    t188 = (((x861^x862)/x863)*x864);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x865 = 5U;
	int16_t x866 = INT16_MIN;
	static int64_t x867 = -1LL;

    t189 = (((x865^x866)/x867)*x868);

    if (t189 != 2147123205LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x875 = 80481511380LL;
	volatile int32_t x876 = -1;

    t190 = (((x873^x874)/x875)*x876);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x878 = INT32_MAX;
	static volatile uint8_t x880 = 1U;
	int32_t t191 = 3;

    t191 = (((x877^x878)/x879)*x880);

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x881 = INT32_MIN;
	static int32_t x882 = -1;
	static int64_t x883 = -1LL;
	int8_t x884 = 3;

    t192 = (((x881^x882)/x883)*x884);

    if (t192 != -6442450941LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x886 = -47;
	uint16_t x887 = UINT16_MAX;
	uint32_t x888 = UINT32_MAX;
	volatile uint32_t t193 = 1U;

    t193 = (((x885^x886)/x887)*x888);

    if (t193 != 4294934528U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x889 = INT32_MIN;
	int16_t x890 = 2;
	volatile int64_t x892 = -3435LL;
	static volatile int64_t t194 = -7LL;

    t194 = (((x889^x890)/x891)*x892);

    if (t194 != -57629733525LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x894 = INT8_MAX;
	int64_t x896 = INT64_MAX;

    t195 = (((x893^x894)/x895)*x896);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x897 = INT8_MIN;
	int8_t x898 = INT8_MIN;
	uint8_t x899 = 27U;
	int32_t x900 = INT32_MIN;
	volatile int32_t t196 = 1;

    t196 = (((x897^x898)/x899)*x900);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x901 = -1;
	int32_t x903 = INT32_MIN;
	int32_t x904 = 922023004;
	volatile int32_t t197 = -1575;

    t197 = (((x901^x902)/x903)*x904);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x905 = INT32_MAX;
	int16_t x906 = 57;
	uint32_t x907 = 38445064U;
	uint32_t x908 = UINT32_MAX;
	volatile uint32_t t198 = 336577U;

    t198 = (((x905^x906)/x907)*x908);

    if (t198 != 4294967241U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x910 = INT16_MIN;
	int16_t x911 = -1;
	int8_t x912 = -1;
	volatile int64_t t199 = 52741622LL;

    t199 = (((x909^x910)/x911)*x912);

    if (t199 != 9223372036854743040LL) { NG(); } else { ; }
	
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

