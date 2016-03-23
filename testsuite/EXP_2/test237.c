
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

static int64_t x1 = INT64_MAX;
uint32_t x4 = 1400U;
static int16_t x8 = -23;
static int64_t x13 = -1LL;
volatile int8_t x16 = -63;
int16_t x25 = INT16_MIN;
int16_t x29 = 2;
static uint64_t x32 = 4LLU;
volatile uint64_t t6 = 7409507499LLU;
int32_t x34 = 3095;
int8_t x35 = INT8_MIN;
uint64_t x48 = 5LLU;
uint16_t x54 = 1891U;
int16_t x56 = INT16_MIN;
volatile int32_t t13 = 1;
volatile int16_t x67 = -7;
uint16_t x88 = UINT16_MAX;
static int16_t x95 = 0;
int64_t x96 = -1LL;
int32_t t21 = -140909;
uint8_t x115 = 40U;
volatile uint32_t x116 = 1U;
volatile uint32_t t22 = 0U;
uint32_t x119 = UINT32_MAX;
volatile int64_t x124 = INT64_MAX;
volatile int8_t x128 = -1;
volatile int64_t t25 = -216531465LL;
int32_t x134 = -1;
uint8_t x136 = 9U;
int16_t x137 = INT16_MAX;
volatile int64_t x138 = 9546811984472LL;
int32_t x139 = INT32_MAX;
static volatile int32_t x145 = INT32_MIN;
static uint64_t x156 = 36351LLU;
volatile int64_t x159 = 5153823960633LL;
volatile uint64_t x162 = UINT64_MAX;
uint8_t x164 = 10U;
int16_t x166 = -1;
static volatile int32_t t33 = -1271248;
static uint16_t x169 = UINT16_MAX;
int8_t x170 = 12;
uint32_t x177 = UINT32_MAX;
volatile int8_t x180 = -1;
uint32_t t35 = UINT32_MAX;
int8_t x182 = -1;
static int64_t x199 = -1LL;
static volatile uint32_t x200 = 236926U;
int16_t x201 = 63;
int8_t x202 = INT8_MAX;
int16_t x204 = -143;
uint32_t x206 = 113U;
uint64_t t42 = UINT64_MAX;
int8_t x217 = -1;
uint16_t x218 = UINT16_MAX;
volatile int64_t x224 = INT64_MAX;
uint32_t x228 = 3U;
uint32_t t45 = 162743973U;
int16_t x233 = -1;
volatile int64_t t47 = 548782598045LL;
int16_t x245 = 156;
int64_t x246 = 8530753996723LL;
volatile uint64_t x254 = UINT64_MAX;
static int16_t x255 = INT16_MIN;
int8_t x262 = INT8_MIN;
uint64_t x270 = 60379LLU;
int32_t x273 = 8;
uint8_t x276 = 0U;
static int16_t x277 = -1;
int64_t x280 = INT64_MAX;
volatile int64_t t56 = INT64_MAX;
int16_t x281 = -1;
volatile uint32_t x289 = 9568283U;
volatile uint64_t x301 = 956114322482LLU;
uint32_t x302 = 1U;
int32_t t61 = 5;
int64_t x318 = -15790172LL;
volatile int64_t t63 = -64592609LL;
static volatile int64_t x349 = -19LL;
volatile int64_t x372 = -89506143321438LL;
volatile int64_t t71 = 3428069350885000LL;
volatile uint64_t x374 = 786921LLU;
int16_t x384 = 18;
int32_t x387 = INT32_MAX;
static int64_t t76 = 57015581563273447LL;
static uint64_t x395 = UINT64_MAX;
uint64_t t77 = 17893864LLU;
volatile uint32_t x402 = 0U;
uint64_t x404 = 965615582629LLU;
uint8_t x411 = 36U;
int8_t x417 = INT8_MIN;
uint64_t x419 = 4LLU;
uint32_t x420 = 565U;
volatile uint16_t x427 = UINT16_MAX;
static int8_t x431 = -6;
static int64_t x432 = INT64_MIN;
uint8_t x440 = 47U;
int8_t x458 = INT8_MAX;
static uint16_t x477 = UINT16_MAX;
int32_t x491 = INT32_MAX;
int16_t x492 = INT16_MAX;
volatile uint8_t x499 = 2U;
uint32_t t97 = 716151U;
static int32_t x505 = INT32_MIN;
int32_t t100 = 25305;
int16_t x515 = -1;
volatile uint64_t t101 = 1369908LLU;
volatile int16_t x552 = -4122;
uint8_t x558 = 3U;
int32_t x570 = INT32_MIN;
int64_t x572 = 0LL;
uint64_t t110 = 127634077219945LLU;
int16_t x574 = INT16_MIN;
static int32_t x577 = -1;
uint32_t x583 = 137U;
uint32_t t113 = 1858U;
static int8_t x586 = INT8_MIN;
static int8_t x587 = 61;
uint64_t x589 = 13197LLU;
int16_t x594 = -1;
int64_t t116 = INT64_MIN;
uint64_t t117 = UINT64_MAX;
static uint64_t x608 = UINT64_MAX;
static uint64_t t122 = 1LLU;
uint32_t x626 = 111U;
volatile uint8_t x629 = UINT8_MAX;
int16_t x630 = INT16_MIN;
volatile uint8_t x645 = UINT8_MAX;
static int64_t x648 = -310310418938865LL;
uint64_t x650 = 63LLU;
volatile uint16_t x666 = UINT16_MAX;
uint8_t x668 = 6U;
int32_t x670 = -1;
static int8_t x671 = -1;
uint32_t t130 = 904U;
int8_t x674 = -1;
uint64_t t131 = 49203290LLU;
static int8_t x707 = INT8_MIN;
static volatile int8_t x708 = -1;
uint8_t x722 = UINT8_MAX;
int8_t x727 = 2;
int32_t t140 = 1;
uint8_t x737 = 0U;
static volatile int16_t x741 = -1;
int8_t x754 = INT8_MAX;
int64_t x755 = -34738976281LL;
volatile int64_t t149 = -10175714936105LL;
static volatile uint16_t x775 = 13260U;
uint64_t t150 = 13507034324184816LLU;
volatile int64_t t152 = 79LL;
uint64_t x792 = UINT64_MAX;
uint32_t x794 = 64U;
uint8_t x797 = UINT8_MAX;
static volatile uint8_t x798 = UINT8_MAX;
uint8_t x800 = UINT8_MAX;
static volatile uint64_t t155 = 1296490200343643LLU;
int16_t x806 = INT16_MAX;
volatile int16_t x815 = 25;
uint64_t t160 = 13595790937079395LLU;
int64_t x847 = INT64_MAX;
volatile uint64_t t161 = 28665365LLU;
volatile uint32_t t162 = 3U;
int32_t x860 = -1;
uint16_t x865 = UINT16_MAX;
int32_t t165 = 490215;
int32_t x876 = INT32_MAX;
static uint64_t x882 = UINT64_MAX;
uint64_t t170 = 13598584554LLU;
uint16_t x897 = 5U;
int8_t x898 = -1;
volatile uint32_t t171 = 2U;
uint64_t x901 = 167985235944LLU;
static int64_t x902 = -1LL;
volatile int8_t x904 = INT8_MIN;
uint64_t t174 = UINT64_MAX;
int64_t x926 = -1LL;
volatile uint64_t t175 = 125450093548LLU;
int64_t x932 = INT64_MIN;
volatile int64_t t176 = 37256LL;
int64_t x936 = 6392613731LL;
int16_t x938 = INT16_MIN;
int64_t x944 = INT64_MAX;
volatile int16_t x946 = -2641;
uint8_t x952 = UINT8_MAX;
volatile uint16_t x962 = 0U;
volatile uint16_t x972 = 0U;
int8_t x990 = INT8_MAX;
int8_t x993 = INT8_MIN;
int64_t x994 = -55893865660489974LL;
int32_t x1006 = -8701;
volatile int8_t x1007 = INT8_MIN;
static volatile uint16_t x1012 = 10U;
int32_t x1018 = 126655;
volatile int64_t x1024 = -1210LL;
int64_t x1029 = -3954LL;
int64_t t194 = -885671140663LL;
int8_t x1045 = INT8_MAX;
uint64_t t196 = 1130891323123760234LLU;
volatile uint64_t t199 = 118817175441502LLU;


void f0(void) {
    	int16_t x2 = -3470;
	static uint64_t x3 = 4880LLU;
	volatile uint64_t t0 = 57919324564LLU;

    t0 = ((x1*(x2-x3))|x4);

    if (t0 != 9726LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 3097U;
	uint64_t x6 = UINT64_MAX;
	static uint8_t x7 = 1U;
	uint64_t t1 = 580849036281667LLU;

    t1 = ((x5*(x6-x7))|x8);

    if (t1 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	volatile int32_t x10 = -1;
	int64_t x11 = 2LL;
	uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = UINT64_MAX;

    t2 = ((x9*(x10-x11))|x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	int64_t x15 = -1LL;
	volatile int64_t t3 = 29610905714LL;

    t3 = ((x13*(x14-x15))|x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 1U;
	uint32_t x22 = 823U;
	uint8_t x23 = 11U;
	int32_t x24 = -913044;
	uint32_t t4 = 4376954U;

    t4 = ((x21*(x22-x23))|x24);

    if (t4 != 4294054764U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x26 = INT32_MIN;
	volatile int32_t x27 = INT32_MIN;
	uint16_t x28 = 14824U;
	volatile int32_t t5 = -11;

    t5 = ((x25*(x26-x27))|x28);

    if (t5 != 14824) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MIN;

    t6 = ((x29*(x30-x31))|x32);

    if (t6 != 510LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x33 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t7 = 3941;

    t7 = ((x33*(x34-x35))|x36);

    if (t7 != -23) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x37 = 2U;
	int32_t x38 = -1;
	uint32_t x39 = 27601610U;
	static int32_t x40 = INT32_MIN;
	volatile uint32_t t8 = 1U;

    t8 = ((x37*(x38-x39))|x40);

    if (t8 != 4239764074U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	static int8_t x43 = -1;
	int16_t x44 = INT16_MAX;
	uint64_t t9 = 1130529LLU;

    t9 = ((x41*(x42-x43))|x44);

    if (t9 != 32767LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = -1;
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MAX;
	volatile uint64_t t10 = 6615409522738130255LLU;

    t10 = ((x45*(x46-x47))|x48);

    if (t10 != 5LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -1;
	int64_t x50 = -1LL;
	volatile uint32_t x51 = 212U;
	int32_t x52 = INT32_MIN;
	volatile int64_t t11 = 70295447258915224LL;

    t11 = ((x49*(x50-x51))|x52);

    if (t11 != -2147483435LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = 16;
	int32_t x55 = -1;
	static volatile int32_t t12 = 0;

    t12 = ((x53*(x54-x55))|x56);

    if (t12 != -2496) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	volatile int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;

    t13 = ((x57*(x58-x59))|x60);

    if (t13 != 1069547647) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 1LLU;
	uint8_t x66 = UINT8_MAX;
	uint8_t x68 = UINT8_MAX;
	uint64_t t14 = 349497LLU;

    t14 = ((x65*(x66-x67))|x68);

    if (t14 != 511LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = 55U;
	int16_t x70 = INT16_MIN;
	volatile uint64_t x71 = 408LLU;
	int8_t x72 = -1;
	uint64_t t15 = UINT64_MAX;

    t15 = ((x69*(x70-x71))|x72);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x81 = -162;
	static volatile int64_t x82 = -1LL;
	uint16_t x83 = 24470U;
	volatile int16_t x84 = 16;
	volatile int64_t t16 = -338732657555LL;

    t16 = ((x81*(x82-x83))|x84);

    if (t16 != 3964318LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = INT32_MIN;
	uint64_t x86 = 124786879416LLU;
	static uint64_t x87 = 87361938475LLU;
	uint64_t t17 = 65072707LLU;

    t17 = ((x85*(x86-x87))|x88);

    if (t17 != 11864271670384590847LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t18 = 51256200463333LL;

    t18 = ((x89*(x90-x91))|x92);

    if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 113U;
	static uint8_t x94 = 12U;
	int64_t t19 = 165466352120257LL;

    t19 = ((x93*(x94-x95))|x96);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = -3425614;
	int16_t x106 = -3;
	uint64_t x107 = UINT64_MAX;
	volatile uint16_t x108 = UINT16_MAX;
	volatile uint64_t t20 = 43894061399LLU;

    t20 = ((x105*(x106-x107))|x108);

    if (t20 != 6881279LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x109 = -223;
	int16_t x110 = INT16_MIN;
	int32_t x111 = -1;
	int32_t x112 = -4;

    t21 = ((x109*(x110-x111))|x112);

    if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;

    t22 = ((x113*(x114-x115))|x116);

    if (t22 != 1075052545U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x117 = -1;
	uint32_t x118 = 615625539U;
	int8_t x120 = -59;
	volatile uint32_t t23 = 12063U;

    t23 = ((x117*(x118-x119))|x120);

    if (t23 != 4294967293U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x121 = 0U;
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	volatile int64_t t24 = INT64_MAX;

    t24 = ((x121*(x122-x123))|x124);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x125 = 0U;
	static int64_t x126 = -1LL;
	static volatile uint32_t x127 = 25646U;

    t25 = ((x125*(x126-x127))|x128);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x133 = INT8_MAX;
	int16_t x135 = -6;
	static volatile int32_t t26 = 7470;

    t26 = ((x133*(x134-x135))|x136);

    if (t26 != 635) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x140 = INT64_MIN;
	volatile int64_t t27 = 129LL;

    t27 = ((x137*(x138-x139))|x140);

    if (t27 != -8910622015156243033LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x141 = -2913074;
	int16_t x142 = -661;
	int8_t x143 = -5;
	int16_t x144 = -1;
	int32_t t28 = 0;

    t28 = ((x141*(x142-x143))|x144);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x146 = 9716810582047002LLU;
	uint16_t x147 = UINT16_MAX;
	volatile int64_t x148 = INT64_MIN;
	uint64_t t29 = 476LLU;

    t29 = ((x145*(x146-x147))|x148);

    if (t29 != 16029616685887520768LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x153 = -1;
	int8_t x154 = -1;
	int8_t x155 = -3;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = ((x153*(x154-x155))|x156);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x157 = -1;
	static int8_t x158 = -1;
	int64_t x160 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = ((x157*(x158-x159))|x160);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x161 = -1;
	int64_t x163 = INT64_MIN;
	uint64_t t32 = 3001892LLU;

    t32 = ((x161*(x162-x163))|x164);

    if (t32 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x165 = UINT16_MAX;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 4U;

    t33 = ((x165*(x166-x167))|x168);

    if (t33 != 8322949) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x171 = 247U;
	volatile uint8_t x172 = 1U;
	volatile int32_t t34 = 2756269;

    t34 = ((x169*(x170-x171))|x172);

    if (t34 != -15400725) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x178 = 214U;
	uint8_t x179 = 96U;

    t35 = ((x177*(x178-x179))|x180);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x181 = 44;
	static uint16_t x183 = 275U;
	int32_t x184 = INT32_MIN;
	int32_t t36 = -458378;

    t36 = ((x181*(x182-x183))|x184);

    if (t36 != -12144) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x189 = 75316LL;
	uint16_t x190 = 0U;
	static volatile int16_t x191 = INT16_MIN;
	int8_t x192 = -1;
	int64_t t37 = 3047916533837367LL;

    t37 = ((x189*(x190-x191))|x192);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	volatile int64_t t38 = 7361278420722LL;

    t38 = ((x197*(x198-x199))|x200);

    if (t38 != 1073716606LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x203 = UINT16_MAX;
	volatile int32_t t39 = 59;

    t39 = ((x201*(x202-x203))|x204);

    if (t39 != -15) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x205 = INT16_MIN;
	uint32_t x207 = 1951U;
	int8_t x208 = 0;
	volatile uint32_t t40 = 15U;

    t40 = ((x205*(x206-x207))|x208);

    if (t40 != 60227584U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = -1;
	int16_t x210 = -1;
	uint8_t x211 = 82U;
	uint16_t x212 = UINT16_MAX;
	int32_t t41 = 0;

    t41 = ((x209*(x210-x211))|x212);

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x213 = INT32_MAX;
	volatile uint16_t x214 = 77U;
	uint64_t x215 = 5372987189LLU;
	uint64_t x216 = UINT64_MAX;

    t42 = ((x213*(x214-x215))|x216);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x219 = UINT32_MAX;
	int32_t x220 = -165;
	uint32_t t43 = 27853968U;

    t43 = ((x217*(x218-x219))|x220);

    if (t43 != 4294967131U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x221 = -1;
	static volatile int16_t x222 = INT16_MAX;
	uint8_t x223 = 16U;
	int64_t t44 = 1398917755043207LL;

    t44 = ((x221*(x222-x223))|x224);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = INT8_MAX;
	int16_t x226 = -1742;
	uint32_t x227 = 3777U;

    t45 = ((x225*(x226-x227))|x228);

    if (t45 != 4294266383U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x234 = UINT64_MAX;
	int32_t x235 = INT32_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile uint64_t t46 = 8254914737394LLU;

    t46 = ((x233*(x234-x235))|x236);

    if (t46 != 2147483903LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x237 = 7LL;
	int8_t x238 = 28;
	int64_t x239 = -3403115LL;
	int8_t x240 = INT8_MAX;

    t47 = ((x237*(x238-x239))|x240);

    if (t47 != 23822079LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x241 = INT32_MIN;
	uint32_t x242 = 21U;
	static int64_t x243 = 255850042LL;
	uint8_t x244 = 105U;
	int64_t t48 = 121805476966LL;

    t48 = ((x241*(x242-x243))|x244);

    if (t48 != 549433736437956713LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x247 = 4133891097088853LL;
	int32_t x248 = -492758;
	volatile int64_t t49 = 530122055LL;

    t49 = ((x245*(x246-x247))|x248);

    if (t49 != -459926LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = 0;
	static int64_t x250 = 277728LL;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	volatile int64_t t50 = 21LL;

    t50 = ((x249*(x250-x251))|x252);

    if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x253 = INT64_MAX;
	int8_t x256 = -1;
	volatile uint64_t t51 = UINT64_MAX;

    t51 = ((x253*(x254-x255))|x256);

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = 1U;
	int32_t x260 = INT32_MAX;
	int32_t t52 = 178168;

    t52 = ((x257*(x258-x259))|x260);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x261 = INT8_MIN;
	uint32_t x263 = 95524U;
	uint32_t x264 = UINT32_MAX;
	uint32_t t53 = UINT32_MAX;

    t53 = ((x261*(x262-x263))|x264);

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x271 = 889778410LL;
	uint64_t x272 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

    t54 = ((x269*(x270-x271))|x272);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x274 = UINT8_MAX;
	uint16_t x275 = UINT16_MAX;
	volatile int32_t t55 = 227;

    t55 = ((x273*(x274-x275))|x276);

    if (t55 != -522240) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x278 = 6U;
	uint32_t x279 = 119821U;

    t56 = ((x277*(x278-x279))|x280);

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x282 = -1LL;
	static uint8_t x283 = 5U;
	uint32_t x284 = 0U;
	volatile int64_t t57 = 52LL;

    t57 = ((x281*(x282-x283))|x284);

    if (t57 != 6LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x285 = -1;
	static int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	volatile uint8_t x288 = 4U;
	int32_t t58 = 363000;

    t58 = ((x285*(x286-x287))|x288);

    if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x290 = -45;
	uint8_t x291 = 0U;
	int16_t x292 = INT16_MAX;
	uint32_t t59 = 11101483U;

    t59 = ((x289*(x290-x291))|x292);

    if (t59 != 3864395775U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x303 = INT16_MIN;
	uint64_t x304 = 608167104116558514LLU;
	uint64_t t60 = 26651LLU;

    t60 = ((x301*(x302-x303))|x304);

    if (t60 != 612471733780467378LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x305 = 143U;
	uint8_t x306 = UINT8_MAX;
	volatile int16_t x307 = INT16_MIN;
	uint16_t x308 = 31U;

    t61 = ((x305*(x306-x307))|x308);

    if (t61 != 4722303) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x317 = INT8_MIN;
	static int8_t x319 = INT8_MAX;
	int64_t x320 = -337119492696524743LL;
	int64_t t62 = -245104347LL;

    t62 = ((x317*(x318-x319))|x320);

    if (t62 != -337119490682716743LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x329 = 0U;
	int64_t x330 = -857335576LL;
	volatile uint16_t x331 = 0U;
	static int32_t x332 = INT32_MIN;

    t63 = ((x329*(x330-x331))|x332);

    if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x333 = 1679U;
	uint8_t x334 = UINT8_MAX;
	static volatile int32_t x335 = INT32_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile uint32_t t64 = 405867U;

    t64 = ((x333*(x334-x335))|x336);

    if (t64 != 2147913727U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x341 = 572;
	static int8_t x342 = -3;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t65 = UINT64_MAX;

    t65 = ((x341*(x342-x343))|x344);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x345 = 65203608LL;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = 0;
	uint32_t x348 = 178U;
	static volatile int64_t t66 = 830527LL;

    t66 = ((x345*(x346-x347))|x348);

    if (t66 != 4273118450426LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x350 = INT16_MIN;
	int64_t x351 = 11597LL;
	int16_t x352 = 1735;
	static volatile int64_t t67 = -43209131453955565LL;

    t67 = ((x349*(x350-x351))|x352);

    if (t67 != 843511LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x353 = 4060805LLU;
	uint64_t x354 = 26298663LLU;
	uint64_t x355 = 30377LLU;
	volatile uint16_t x356 = 7U;
	volatile uint64_t t68 = 2900666371LLU;

    t68 = ((x353*(x354-x355))|x356);

    if (t68 != 106670387130231LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 12U;
	int8_t x360 = INT8_MAX;
	uint32_t t69 = 489423000U;

    t69 = ((x357*(x358-x359))|x360);

    if (t69 != 255U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x365 = 1831U;
	uint16_t x366 = 1577U;
	static uint64_t x367 = UINT64_MAX;
	volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t70 = 96LLU;

    t70 = ((x365*(x366-x367))|x368);

    if (t70 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x369 = -1238;
	static volatile int16_t x370 = -1;
	volatile uint32_t x371 = UINT32_MAX;

    t71 = ((x369*(x370-x371))|x372);

    if (t71 != -89506143321438LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x375 = -282;
	int16_t x376 = INT16_MAX;
	uint64_t t72 = 3256318067LLU;

    t72 = ((x373*(x374-x375))|x376);

    if (t72 != 18446744073608790015LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x377 = 2U;
	int64_t x378 = -1LL;
	uint8_t x379 = 23U;
	uint8_t x380 = 2U;
	int64_t t73 = 15824LL;

    t73 = ((x377*(x378-x379))|x380);

    if (t73 != -46LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = 4LL;
	int8_t x383 = -1;
	volatile int64_t t74 = -1211560LL;

    t74 = ((x381*(x382-x383))|x384);

    if (t74 != -163822LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x385 = 13LLU;
	static uint64_t x386 = 154487375363519242LLU;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t75 = 701578227112823586LLU;

    t75 = ((x385*(x386-x387))|x388);

    if (t75 != 11231707888663238543LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x389 = UINT8_MAX;
	int16_t x390 = -218;
	int64_t x391 = 2LL;
	static volatile int64_t x392 = INT64_MIN;

    t76 = ((x389*(x390-x391))|x392);

    if (t76 != -56100LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x393 = 99176956U;
	int8_t x394 = INT8_MAX;
	uint16_t x396 = 6781U;

    t77 = ((x393*(x394-x395))|x396);

    if (t77 != 12694650493LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x401 = -368209654;
	static int8_t x403 = INT8_MIN;
	volatile uint64_t t78 = 19600888850LLU;

    t78 = ((x401*(x402-x403))|x404);

    if (t78 != 965695307173LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	int64_t x407 = -1LL;
	uint32_t x408 = 1U;
	volatile int64_t t79 = -1LL;

    t79 = ((x405*(x406-x407))|x408);

    if (t79 != 4194177LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x409 = -234888357092358LL;
	uint32_t x410 = 360U;
	int8_t x412 = INT8_MIN;
	int64_t t80 = -1490014765095LL;

    t80 = ((x409*(x410-x411))|x412);

    if (t80 != -24LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x413 = -1LL;
	uint32_t x414 = 6592U;
	static volatile uint16_t x415 = 6U;
	uint8_t x416 = 5U;
	int64_t t81 = -25658085LL;

    t81 = ((x413*(x414-x415))|x416);

    if (t81 != -6585LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x418 = UINT16_MAX;
	static volatile uint64_t t82 = 204LLU;

    t82 = ((x417*(x418-x419))|x420);

    if (t82 != 18446744073701163701LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MAX;
	uint64_t x423 = 7740433LLU;
	int8_t x424 = INT8_MAX;
	volatile uint64_t t83 = 22625272289132509LLU;

    t83 = ((x421*(x422-x423))|x424);

    if (t83 != 18446673958603915391LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x425 = 28U;
	volatile uint8_t x426 = 35U;
	volatile uint8_t x428 = UINT8_MAX;
	volatile uint32_t t84 = 1910U;

    t84 = ((x425*(x426-x427))|x428);

    if (t84 != 4293133311U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x429 = -36;
	volatile uint16_t x430 = 119U;
	int64_t t85 = 405943818LL;

    t85 = ((x429*(x430-x431))|x432);

    if (t85 != -4500LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x437 = INT32_MAX;
	uint64_t x438 = 3LLU;
	static int32_t x439 = INT32_MIN;
	uint64_t t86 = 118688338LLU;

    t86 = ((x437*(x438-x439))|x440);

    if (t86 != 4611686022722355199LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x453 = UINT16_MAX;
	int64_t x454 = INT64_MIN;
	uint64_t x455 = 565717855685435LLU;
	uint16_t x456 = 15421U;
	static volatile uint64_t t87 = 8405525412346LLU;

    t87 = ((x453*(x454-x455))|x456);

    if (t87 != 9042540511928909631LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x457 = 563106758034457927LLU;
	static int64_t x459 = INT64_MAX;
	int8_t x460 = INT8_MAX;
	uint64_t t88 = 875516295400LLU;

    t88 = ((x457*(x458-x459))|x460);

    if (t88 != 7514060770427184127LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x461 = 5U;
	uint32_t x462 = 2297223U;
	static uint16_t x463 = 345U;
	static volatile int8_t x464 = -3;
	volatile uint32_t t89 = UINT32_MAX;

    t89 = ((x461*(x462-x463))|x464);

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x465 = UINT8_MAX;
	int8_t x466 = -12;
	uint8_t x467 = 1U;
	uint32_t x468 = UINT32_MAX;
	volatile uint32_t t90 = UINT32_MAX;

    t90 = ((x465*(x466-x467))|x468);

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x469 = -1LL;
	static uint64_t x470 = UINT64_MAX;
	uint64_t x471 = UINT64_MAX;
	int32_t x472 = INT32_MAX;
	uint64_t t91 = 2369321805948649208LLU;

    t91 = ((x469*(x470-x471))|x472);

    if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x473 = 1;
	int8_t x474 = INT8_MIN;
	static int64_t x475 = -86851973792LL;
	volatile int16_t x476 = 1727;
	static volatile int64_t t92 = -1928465LL;

    t92 = ((x473*(x474-x475))|x476);

    if (t92 != 86851974847LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x478 = 26U;
	static int16_t x479 = INT16_MAX;
	static volatile int8_t x480 = INT8_MAX;
	volatile int32_t t93 = -422;

    t93 = ((x477*(x478-x479))|x480);

    if (t93 != -2145681409) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x481 = -1;
	int64_t x482 = 179LL;
	int32_t x483 = -124436;
	uint8_t x484 = 5U;
	int64_t t94 = -349LL;

    t94 = ((x481*(x482-x483))|x484);

    if (t94 != -124611LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x485 = 6U;
	int8_t x486 = 1;
	volatile uint16_t x487 = 3809U;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t95 = -14895;

    t95 = ((x485*(x486-x487))|x488);

    if (t95 != -22785) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	static int8_t x490 = INT8_MAX;
	static uint64_t t96 = 2162190351142LLU;

    t96 = ((x489*(x490-x491))|x492);

    if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x497 = INT16_MIN;
	uint16_t x498 = UINT16_MAX;
	uint32_t x500 = 2916U;

    t97 = ((x497*(x498-x499))|x500);

    if (t97 != 2147584868U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MIN;
	static volatile int32_t x504 = -981710608;
	uint32_t t98 = 2784420U;

    t98 = ((x501*(x502-x503))|x504);

    if (t98 != 3313270513U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x506 = -119178221LL;
	int32_t x507 = INT32_MIN;
	uint32_t x508 = 75209U;
	volatile int64_t t99 = 1LL;

    t99 = ((x505*(x506-x507))|x508);

    if (t99 != -4355752737632082487LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x509 = 5222U;
	int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	static int16_t x512 = INT16_MIN;

    t100 = ((x509*(x510-x511))|x512);

    if (t100 != -19712) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x513 = UINT64_MAX;
	static uint8_t x514 = UINT8_MAX;
	volatile uint32_t x516 = 132445299U;

    t101 = ((x513*(x514-x515))|x516);

    if (t101 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x537 = INT8_MIN;
	uint32_t x538 = 4459U;
	int8_t x539 = -1;
	int16_t x540 = INT16_MIN;
	volatile uint32_t t102 = 222674699U;

    t102 = ((x537*(x538-x539))|x540);

    if (t102 != 4294953472U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x541 = 18424935;
	static int16_t x542 = -1;
	static uint64_t x543 = 115LLU;
	static int64_t x544 = -1LL;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = ((x541*(x542-x543))|x544);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x545 = -1;
	static int8_t x546 = INT8_MIN;
	static int32_t x547 = 12;
	int16_t x548 = INT16_MIN;
	int32_t t104 = -130;

    t104 = ((x545*(x546-x547))|x548);

    if (t104 != -32628) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x549 = UINT16_MAX;
	int16_t x550 = -1;
	int8_t x551 = -1;
	volatile int32_t t105 = -118;

    t105 = ((x549*(x550-x551))|x552);

    if (t105 != -4122) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x553 = 2U;
	int8_t x554 = INT8_MAX;
	static uint16_t x555 = UINT16_MAX;
	int32_t x556 = INT32_MIN;
	int32_t t106 = -206;

    t106 = ((x553*(x554-x555))|x556);

    if (t106 != -130816) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x557 = INT64_MAX;
	uint64_t x559 = 16117288640LLU;
	uint8_t x560 = UINT8_MAX;
	volatile uint64_t t107 = 308206LLU;

    t107 = ((x557*(x558-x559))|x560);

    if (t107 != 9223372052972064511LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x561 = 1385U;
	int16_t x562 = INT16_MIN;
	volatile int64_t x563 = -4974970092LL;
	int64_t x564 = 67877240367045LL;
	volatile int64_t t108 = 64353170LL;

    t108 = ((x561*(x562-x563))|x564);

    if (t108 != 70368340404173LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x565 = UINT32_MAX;
	int32_t x566 = -25;
	volatile int16_t x567 = 0;
	int8_t x568 = 3;
	static volatile uint32_t t109 = 205U;

    t109 = ((x565*(x566-x567))|x568);

    if (t109 != 27U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x569 = UINT64_MAX;
	int32_t x571 = -1;

    t110 = ((x569*(x570-x571))|x572);

    if (t110 != 2147483647LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x573 = 0;
	int8_t x575 = INT8_MIN;
	volatile int32_t x576 = INT32_MIN;
	static int32_t t111 = INT32_MIN;

    t111 = ((x573*(x574-x575))|x576);

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x578 = UINT8_MAX;
	int8_t x579 = 1;
	uint32_t x580 = 688244845U;
	uint32_t t112 = 808U;

    t112 = ((x577*(x578-x579))|x580);

    if (t112 != 4294967151U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x581 = INT16_MAX;
	static uint8_t x582 = UINT8_MAX;
	int32_t x584 = INT32_MIN;

    t113 = ((x581*(x582-x583))|x584);

    if (t113 != 2151350154U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile uint8_t x588 = 4U;
	volatile uint64_t t114 = 14LLU;

    t114 = ((x585*(x586-x587))|x588);

    if (t114 != 189LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x590 = 5033U;
	static int32_t x591 = 14788;
	int32_t x592 = -698852016;
	static volatile uint64_t t115 = 3522155544LLU;

    t115 = ((x589*(x590-x591))|x592);

    if (t115 != 18446744073682026353LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x595 = -1;
	volatile int64_t x596 = INT64_MIN;

    t116 = ((x593*(x594-x595))|x596);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x601 = 43U;
	volatile uint64_t x602 = UINT64_MAX;
	int16_t x603 = 2;
	static uint8_t x604 = UINT8_MAX;

    t117 = ((x601*(x602-x603))|x604);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x605 = 7U;
	volatile uint64_t x606 = 247LLU;
	volatile uint8_t x607 = 0U;
	uint64_t t118 = UINT64_MAX;

    t118 = ((x605*(x606-x607))|x608);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x609 = 134159743LLU;
	int64_t x610 = 3331463673LL;
	volatile int32_t x611 = -1;
	int32_t x612 = 15324809;
	volatile uint64_t t119 = 498202LLU;

    t119 = ((x609*(x610-x611))|x612);

    if (t119 != 446948310326704015LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x613 = 319489404633LLU;
	uint8_t x614 = UINT8_MAX;
	uint64_t x615 = 13242054LLU;
	volatile int32_t x616 = 951;
	uint64_t t120 = 11094LLU;

    t120 = ((x613*(x614-x615))|x616);

    if (t120 != 14216129594929697783LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x617 = UINT32_MAX;
	uint32_t x618 = 4U;
	int32_t x619 = INT32_MIN;
	int64_t x620 = 1496356784281LL;
	static volatile int64_t t121 = -24LL;

    t121 = ((x617*(x618-x619))|x620);

    if (t121 != 1496796102653LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x621 = 1918358LL;
	volatile uint64_t x622 = UINT64_MAX;
	int16_t x623 = 968;
	int64_t x624 = INT64_MIN;

    t122 = ((x621*(x622-x623))|x624);

    if (t122 != 18446744071850662714LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x625 = INT32_MAX;
	uint32_t x627 = 0U;
	uint64_t x628 = 283076083328LLU;
	uint64_t t123 = 10199007LLU;

    t123 = ((x625*(x626-x627))|x628);

    if (t123 != 283467841425LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x631 = -398192LL;
	int32_t x632 = -79960;
	static volatile int64_t t124 = 34823582486745368LL;

    t124 = ((x629*(x630-x631))|x632);

    if (t124 != -8264LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x637 = -1;
	static int64_t x638 = 3315346876601775LL;
	volatile int32_t x639 = INT32_MAX;
	uint32_t x640 = UINT32_MAX;
	static volatile int64_t t125 = 268967622249334221LL;

    t125 = ((x637*(x638-x639))|x640);

    if (t125 != -3315341090357249LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x646 = -1;
	static int16_t x647 = INT16_MAX;
	int64_t t126 = -29LL;

    t126 = ((x645*(x646-x647))|x648);

    if (t126 != -4881393LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x649 = -1;
	static uint8_t x651 = UINT8_MAX;
	int32_t x652 = -16499748;
	static volatile uint64_t t127 = 885720LLU;

    t127 = ((x649*(x650-x651))|x652);

    if (t127 != 18446744073693051868LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x657 = -1LL;
	static int32_t x658 = INT32_MAX;
	uint8_t x659 = UINT8_MAX;
	uint16_t x660 = UINT16_MAX;
	volatile int64_t t128 = 30LL;

    t128 = ((x657*(x658-x659))|x660);

    if (t128 != -2147418113LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x665 = UINT64_MAX;
	uint32_t x667 = 1355U;
	volatile uint64_t t129 = 12466439896232LLU;

    t129 = ((x665*(x666-x667))|x668);

    if (t129 != 18446744073709487438LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x669 = INT16_MIN;
	uint32_t x672 = 49817U;

    t130 = ((x669*(x670-x671))|x672);

    if (t130 != 49817U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x673 = INT8_MAX;
	uint64_t x675 = 15055708898468LLU;
	static int8_t x676 = 1;

    t131 = ((x673*(x674-x675))|x676);

    if (t131 != 18444831998679446053LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x677 = -1;
	static int32_t x678 = -1;
	volatile int8_t x679 = -1;
	int8_t x680 = -1;
	int32_t t132 = -371;

    t132 = ((x677*(x678-x679))|x680);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x689 = UINT64_MAX;
	static volatile uint16_t x690 = 595U;
	uint16_t x691 = 0U;
	uint64_t x692 = 7122LLU;
	uint64_t t133 = UINT64_MAX;

    t133 = ((x689*(x690-x691))|x692);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x693 = -1;
	int8_t x694 = -2;
	volatile uint32_t x695 = 47U;
	int8_t x696 = 1;
	volatile uint32_t t134 = 27U;

    t134 = ((x693*(x694-x695))|x696);

    if (t134 != 49U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x701 = INT16_MAX;
	int16_t x702 = INT16_MIN;
	int16_t x703 = 6;
	uint32_t x704 = 22980U;
	uint32_t t135 = 1872490U;

    t135 = ((x701*(x702-x703))|x704);

    if (t135 != 3221084614U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x705 = INT32_MIN;
	volatile int64_t x706 = -1LL;
	int64_t t136 = -1LL;

    t136 = ((x705*(x706-x707))|x708);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x709 = 0LLU;
	int32_t x710 = INT32_MIN;
	int8_t x711 = -1;
	uint64_t x712 = UINT64_MAX;
	volatile uint64_t t137 = UINT64_MAX;

    t137 = ((x709*(x710-x711))|x712);

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x717 = -1LL;
	int8_t x718 = -13;
	uint32_t x719 = UINT32_MAX;
	static int64_t x720 = -1LL;
	volatile int64_t t138 = 631LL;

    t138 = ((x717*(x718-x719))|x720);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x721 = -755006953LL;
	int32_t x723 = -2636196;
	uint32_t x724 = UINT32_MAX;
	volatile int64_t t139 = 278045628534LL;

    t139 = ((x721*(x722-x723))|x724);

    if (t139 != -1990536953069569LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x725 = 21072U;
	volatile int32_t x726 = -1;
	volatile uint8_t x728 = UINT8_MAX;

    t140 = ((x725*(x726-x727))|x728);

    if (t140 != -62977) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x738 = -1;
	uint32_t x739 = UINT32_MAX;
	int32_t x740 = INT32_MIN;
	static uint32_t t141 = 0U;

    t141 = ((x737*(x738-x739))|x740);

    if (t141 != 2147483648U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x742 = INT8_MIN;
	uint64_t x743 = 216894623LLU;
	uint64_t x744 = UINT64_MAX;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = ((x741*(x742-x743))|x744);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x745 = 7040LLU;
	volatile uint8_t x746 = 51U;
	volatile int64_t x747 = -1LL;
	uint8_t x748 = 0U;
	volatile uint64_t t143 = 971921992956031935LLU;

    t143 = ((x745*(x746-x747))|x748);

    if (t143 != 366080LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x749 = INT16_MIN;
	uint64_t x750 = 64987852953964234LLU;
	volatile uint64_t x751 = 61LLU;
	volatile uint32_t x752 = 1738682461U;
	static uint64_t t144 = 4714592LLU;

    t144 = ((x749*(x750-x751))|x752);

    if (t144 != 10300346955464421469LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x756 = -1;
	static volatile int64_t t145 = -6941068LL;

    t145 = ((x753*(x754-x755))|x756);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x757 = -2757975506714LL;
	static int16_t x758 = 718;
	int16_t x759 = -1;
	static int32_t x760 = INT32_MIN;
	volatile int64_t t146 = -86LL;

    t146 = ((x757*(x758-x759))|x760);

    if (t146 != -136247814LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x761 = 0U;
	int8_t x762 = -1;
	int64_t x763 = -1LL;
	volatile int16_t x764 = -8130;
	volatile int64_t t147 = -3602141972318240LL;

    t147 = ((x761*(x762-x763))|x764);

    if (t147 != -8130LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x765 = UINT64_MAX;
	volatile uint32_t x766 = 130935830U;
	volatile uint16_t x767 = 32U;
	int64_t x768 = 1LL;
	static uint64_t t148 = 45179LLU;

    t148 = ((x765*(x766-x767))|x768);

    if (t148 != 18446744073578615819LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x769 = 24229264U;
	static int64_t x770 = -64491857LL;
	int16_t x771 = INT16_MIN;
	int32_t x772 = INT32_MIN;

    t149 = ((x769*(x770-x771))|x772);

    if (t149 != -146866832LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x773 = INT8_MIN;
	volatile uint32_t x774 = UINT32_MAX;
	uint64_t x776 = 12216LLU;

    t150 = ((x773*(x774-x775))|x776);

    if (t150 != 1699768LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x777 = 3U;
	int16_t x778 = INT16_MAX;
	int16_t x779 = INT16_MAX;
	volatile uint16_t x780 = UINT16_MAX;
	int32_t t151 = -1963;

    t151 = ((x777*(x778-x779))|x780);

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x781 = -1;
	int32_t x782 = INT32_MIN;
	int64_t x783 = INT64_MIN;
	int64_t x784 = INT64_MIN;

    t152 = ((x781*(x782-x783))|x784);

    if (t152 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x789 = INT8_MAX;
	static volatile int8_t x790 = -25;
	volatile int64_t x791 = -1LL;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = ((x789*(x790-x791))|x792);

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x793 = 2LLU;
	int8_t x795 = 0;
	volatile int64_t x796 = 10004473710647458LL;
	uint64_t t154 = 5LLU;

    t154 = ((x793*(x794-x795))|x796);

    if (t154 != 10004473710647458LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x799 = 16389908LLU;

    t155 = ((x797*(x798-x799))|x800);

    if (t155 != 18446744069530190335LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x805 = UINT8_MAX;
	static int8_t x807 = INT8_MIN;
	uint16_t x808 = 1U;
	volatile int32_t t156 = -43633;

    t156 = ((x805*(x806-x807))|x808);

    if (t156 != 8388225) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x813 = 100U;
	int16_t x814 = -120;
	int32_t x816 = INT32_MIN;
	volatile int32_t t157 = 27962;

    t157 = ((x813*(x814-x815))|x816);

    if (t157 != -14500) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x817 = INT8_MIN;
	int8_t x818 = -1;
	int16_t x819 = INT16_MIN;
	int16_t x820 = INT16_MIN;
	volatile int32_t t158 = 207681253;

    t158 = ((x817*(x818-x819))|x820);

    if (t158 != -32640) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x825 = 4U;
	uint16_t x826 = 7483U;
	int8_t x827 = INT8_MIN;
	int64_t x828 = -1042444745346545LL;
	volatile int64_t t159 = -83402186984779235LL;

    t159 = ((x825*(x826-x827))|x828);

    if (t159 != -1042444745345297LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x829 = 2759;
	uint8_t x830 = 20U;
	int32_t x831 = 1;
	uint64_t x832 = 645723797805354LLU;

    t160 = ((x829*(x830-x831))|x832);

    if (t160 != 645723797839343LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x845 = UINT64_MAX;
	uint8_t x846 = 37U;
	static volatile uint8_t x848 = 2U;

    t161 = ((x845*(x846-x847))|x848);

    if (t161 != 9223372036854775770LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x853 = INT8_MAX;
	volatile int8_t x854 = INT8_MIN;
	uint32_t x855 = 21349U;
	int8_t x856 = INT8_MAX;

    t162 = ((x853*(x854-x855))|x856);

    if (t162 != 4292239743U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x857 = 121661U;
	volatile int32_t x858 = -56587;
	uint16_t x859 = UINT16_MAX;
	static uint32_t t163 = UINT32_MAX;

    t163 = ((x857*(x858-x859))|x860);

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x861 = INT8_MAX;
	volatile uint64_t x862 = UINT64_MAX;
	int32_t x863 = -3729;
	int64_t x864 = INT64_MIN;
	uint64_t t164 = 1085466LLU;

    t164 = ((x861*(x862-x863))|x864);

    if (t164 != 9223372036855249264LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x866 = 15;
	int8_t x867 = INT8_MAX;
	uint8_t x868 = UINT8_MAX;

    t165 = ((x865*(x866-x867))|x868);

    if (t165 != -7339777) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x869 = UINT32_MAX;
	uint8_t x870 = UINT8_MAX;
	static uint8_t x871 = UINT8_MAX;
	int16_t x872 = INT16_MIN;
	volatile uint32_t t166 = 1U;

    t166 = ((x869*(x870-x871))|x872);

    if (t166 != 4294934528U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x873 = UINT8_MAX;
	static uint64_t x874 = 637LLU;
	int16_t x875 = INT16_MIN;
	volatile uint64_t t167 = 20827420562319LLU;

    t167 = ((x873*(x874-x875))|x876);

    if (t167 != 2147483647LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x881 = INT32_MAX;
	uint8_t x883 = 1U;
	uint16_t x884 = 11U;
	volatile uint64_t t168 = 65210078339125LLU;

    t168 = ((x881*(x882-x883))|x884);

    if (t168 != 18446744069414584331LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x885 = INT64_MIN;
	uint64_t x886 = 7368294482LLU;
	static int64_t x887 = -1LL;
	int64_t x888 = INT64_MIN;
	static uint64_t t169 = 7136143670363044275LLU;

    t169 = ((x885*(x886-x887))|x888);

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x893 = -132098730938LL;
	uint64_t x894 = 12356566023232431LLU;
	static uint16_t x895 = 0U;
	uint8_t x896 = 6U;

    t170 = ((x893*(x894-x895))|x896);

    if (t170 != 3806298183081885150LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x899 = 1U;
	int16_t x900 = 6;

    t171 = ((x897*(x898-x899))|x900);

    if (t171 != 4294967286U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x903 = UINT64_MAX;
	volatile uint64_t t172 = 1862112968LLU;

    t172 = ((x901*(x902-x903))|x904);

    if (t172 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x905 = -1LL;
	static int16_t x906 = INT16_MAX;
	static int64_t x907 = -1LL;
	static int16_t x908 = INT16_MAX;
	volatile int64_t t173 = -60164301731701738LL;

    t173 = ((x905*(x906-x907))|x908);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x913 = -1;
	volatile int16_t x914 = INT16_MIN;
	static volatile uint64_t x915 = 1084966460391LLU;
	volatile int16_t x916 = -1;

    t174 = ((x913*(x914-x915))|x916);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x925 = 15U;
	int64_t x927 = -85440LL;
	uint64_t x928 = 4203225671LLU;

    t175 = ((x925*(x926-x927))|x928);

    if (t175 != 4204506743LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x929 = INT16_MIN;
	int16_t x930 = INT16_MIN;
	uint32_t x931 = UINT32_MAX;

    t176 = ((x929*(x930-x931))|x932);

    if (t176 != -9223372035781066752LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x933 = 117U;
	static volatile int8_t x934 = INT8_MAX;
	static int8_t x935 = INT8_MIN;
	int64_t t177 = 1376LL;

    t177 = ((x933*(x934-x935))|x936);

    if (t177 != 6392643563LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x937 = 19;
	static int16_t x939 = INT16_MIN;
	static volatile int16_t x940 = INT16_MIN;
	volatile int32_t t178 = -1923;

    t178 = ((x937*(x938-x939))|x940);

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x941 = -1;
	static int8_t x942 = -4;
	uint16_t x943 = UINT16_MAX;
	volatile int64_t t179 = INT64_MAX;

    t179 = ((x941*(x942-x943))|x944);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x945 = 423491LLU;
	int8_t x947 = -1;
	int32_t x948 = 216591;
	volatile uint64_t t180 = 36935816170LLU;

    t180 = ((x945*(x946-x947))|x948);

    if (t180 != 18446744072591732511LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x949 = INT16_MIN;
	int16_t x950 = -1;
	int16_t x951 = INT16_MIN;
	volatile int32_t t181 = -155135;

    t181 = ((x949*(x950-x951))|x952);

    if (t181 != -1073708801) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x961 = INT8_MAX;
	volatile int8_t x963 = INT8_MIN;
	int32_t x964 = INT32_MIN;
	volatile int32_t t182 = 864;

    t182 = ((x961*(x962-x963))|x964);

    if (t182 != -2147467392) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x969 = 3U;
	uint8_t x970 = 17U;
	int64_t x971 = -5248LL;
	volatile int64_t t183 = 47067979585157LL;

    t183 = ((x969*(x970-x971))|x972);

    if (t183 != 15795LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x973 = INT8_MIN;
	uint32_t x974 = UINT32_MAX;
	int8_t x975 = INT8_MIN;
	int8_t x976 = INT8_MIN;
	uint32_t t184 = 1644163214U;

    t184 = ((x973*(x974-x975))|x976);

    if (t184 != 4294967168U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x977 = 52;
	int32_t x978 = -1;
	volatile uint16_t x979 = 31U;
	static int16_t x980 = 14;
	int32_t t185 = -82704058;

    t185 = ((x977*(x978-x979))|x980);

    if (t185 != -1650) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x989 = UINT16_MAX;
	int16_t x991 = 11517;
	volatile int16_t x992 = -1;
	volatile int32_t t186 = 6;

    t186 = ((x989*(x990-x991))|x992);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x995 = 17264LL;
	int8_t x996 = INT8_MAX;
	int64_t t187 = 100308761596LL;

    t187 = ((x993*(x994-x995))|x996);

    if (t187 != 7154414804544926591LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x997 = 8U;
	int8_t x998 = INT8_MIN;
	int8_t x999 = -1;
	int32_t x1000 = -1;
	int32_t t188 = -99;

    t188 = ((x997*(x998-x999))|x1000);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1005 = INT8_MAX;
	int32_t x1008 = INT32_MIN;
	volatile int32_t t189 = 227033;

    t189 = ((x1005*(x1006-x1007))|x1008);

    if (t189 != -1088771) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1009 = 38460765570653725LLU;
	static int8_t x1010 = -1;
	static uint32_t x1011 = UINT32_MAX;
	volatile uint64_t t190 = 234164LLU;

    t190 = ((x1009*(x1010-x1011))|x1012);

    if (t190 != 10LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1017 = -506;
	int16_t x1019 = INT16_MIN;
	int16_t x1020 = INT16_MIN;
	static volatile int32_t t191 = -419;

    t191 = ((x1017*(x1018-x1019))|x1020);

    if (t191 != -25990) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1021 = 5137475421960LLU;
	volatile int8_t x1022 = -1;
	uint8_t x1023 = 0U;
	uint64_t t192 = 704974256358LLU;

    t192 = ((x1021*(x1022-x1023))|x1024);

    if (t192 != 18446744073709550590LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1025 = INT16_MIN;
	int8_t x1026 = INT8_MIN;
	uint32_t x1027 = 27917U;
	int16_t x1028 = -1;
	volatile uint32_t t193 = UINT32_MAX;

    t193 = ((x1025*(x1026-x1027))|x1028);

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1030 = 1U;
	static int64_t x1031 = 2LL;
	uint32_t x1032 = UINT32_MAX;

    t194 = ((x1029*(x1030-x1031))|x1032);

    if (t194 != 4294967295LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1041 = 0U;
	uint32_t x1042 = UINT32_MAX;
	uint16_t x1043 = 17832U;
	int64_t x1044 = INT64_MAX;
	volatile int64_t t195 = INT64_MAX;

    t195 = ((x1041*(x1042-x1043))|x1044);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1046 = -1LL;
	static int32_t x1047 = 6518;
	uint64_t x1048 = 24LLU;

    t196 = ((x1045*(x1046-x1047))|x1048);

    if (t196 != 18446744073708723711LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1053 = 4U;
	uint8_t x1054 = 49U;
	static volatile int8_t x1055 = INT8_MAX;
	int16_t x1056 = -1;
	static volatile int32_t t197 = 14;

    t197 = ((x1053*(x1054-x1055))|x1056);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1057 = -1;
	int8_t x1058 = 53;
	int64_t x1059 = INT64_MAX;
	int8_t x1060 = 0;
	volatile int64_t t198 = -323715LL;

    t198 = ((x1057*(x1058-x1059))|x1060);

    if (t198 != 9223372036854775754LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1061 = INT32_MIN;
	static int8_t x1062 = -1;
	uint64_t x1063 = 58900734243LLU;
	uint64_t x1064 = 0LLU;

    t199 = ((x1061*(x1062-x1063))|x1064);

    if (t199 != 15807899201926332416LLU) { NG(); } else { ; }
	
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

