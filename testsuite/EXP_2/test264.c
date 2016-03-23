
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

int16_t x5 = INT16_MAX;
int8_t x16 = 0;
int8_t x22 = -1;
int16_t x23 = INT16_MIN;
volatile int16_t x28 = -1;
int32_t x32 = -123;
int16_t x35 = INT16_MIN;
int64_t x41 = INT64_MIN;
static int16_t x44 = INT16_MIN;
static int64_t t9 = -436520970400279429LL;
uint32_t x54 = 20659U;
uint16_t x57 = 99U;
static volatile uint32_t x59 = 5176U;
int64_t x60 = -213505446315148550LL;
int64_t t12 = -3300LL;
uint32_t x68 = UINT32_MAX;
volatile int8_t x76 = -1;
volatile int8_t x78 = INT8_MIN;
volatile int32_t x80 = INT32_MIN;
uint32_t t17 = 2322577U;
uint64_t t18 = 340867562443757LLU;
volatile int64_t x86 = -599250526LL;
int8_t x87 = INT8_MAX;
volatile int64_t t19 = -1LL;
int32_t x92 = INT32_MIN;
static uint64_t t20 = 1074951128841858717LLU;
int16_t x98 = INT16_MIN;
uint8_t x103 = 0U;
int8_t x105 = 43;
volatile uint64_t x122 = UINT64_MAX;
int64_t t31 = -1021344101182LL;
int32_t x141 = 23;
int64_t x142 = INT64_MIN;
uint8_t x143 = 0U;
volatile int64_t t33 = 498663346513LL;
uint8_t x154 = 0U;
volatile int32_t t35 = -17908;
volatile uint8_t x157 = 16U;
uint32_t t36 = 1757709U;
uint8_t x170 = UINT8_MAX;
int8_t x176 = INT8_MAX;
int64_t t40 = INT64_MIN;
uint64_t x192 = 53608533LLU;
uint64_t x196 = 11316489028LLU;
uint64_t t42 = 30429LLU;
volatile int64_t x200 = 1031638515LL;
int64_t x206 = INT64_MIN;
volatile int64_t t46 = -249992500170LL;
int64_t x221 = INT64_MIN;
static volatile int8_t x223 = INT8_MIN;
int64_t t48 = INT64_MIN;
uint16_t x227 = 31121U;
int64_t t50 = 47620960375379LL;
static uint8_t x235 = 37U;
volatile int32_t t53 = -1;
uint8_t x245 = 46U;
uint16_t x246 = UINT16_MAX;
volatile int32_t t54 = 599711492;
static int64_t x253 = INT64_MIN;
static uint16_t x257 = UINT16_MAX;
uint8_t x259 = UINT8_MAX;
static uint64_t x266 = 1LLU;
static int8_t x269 = INT8_MAX;
static uint8_t x270 = 1U;
static int16_t x273 = -1;
uint16_t x282 = UINT16_MAX;
int64_t x294 = -80864490067304LL;
static int64_t x296 = -163913427856LL;
int16_t x307 = INT16_MIN;
uint8_t x314 = UINT8_MAX;
volatile int8_t x320 = INT8_MIN;
int64_t x322 = INT64_MIN;
int8_t x323 = -3;
int64_t t74 = -598849037944LL;
volatile int8_t x339 = INT8_MAX;
int32_t x340 = 49;
int64_t x346 = INT64_MAX;
int8_t x352 = INT8_MIN;
volatile int64_t t78 = 2133989757145597470LL;
volatile uint8_t x354 = UINT8_MAX;
int64_t x356 = INT64_MIN;
static int64_t t79 = INT64_MIN;
int64_t x359 = 63415865243311610LL;
uint64_t x364 = 954LLU;
uint64_t x368 = 115LLU;
int32_t x373 = -15;
volatile uint8_t x375 = 28U;
int64_t t84 = -32056476413354753LL;
int32_t x382 = INT32_MAX;
int16_t x402 = -1;
volatile uint32_t t89 = 14U;
int8_t x405 = 41;
int8_t x407 = 2;
static volatile int32_t x410 = -1;
int64_t t91 = 804435856LL;
int32_t x414 = INT32_MIN;
uint8_t x425 = UINT8_MAX;
int64_t x429 = -442949LL;
int64_t x437 = 88577587322622280LL;
int16_t x439 = -2794;
int8_t x452 = 1;
static uint32_t x458 = 994982153U;
int64_t t102 = 18505063898LL;
volatile int8_t x464 = INT8_MIN;
int64_t x465 = -9627074014LL;
int64_t x471 = 8114752258729LL;
int64_t x472 = INT64_MIN;
static uint32_t t106 = 10U;
int32_t x481 = -1;
static int8_t x488 = 11;
int64_t x503 = INT64_MIN;
static int8_t x505 = 1;
int32_t x506 = 173438;
int32_t x507 = 382;
uint32_t x511 = UINT32_MAX;
volatile uint8_t x513 = 3U;
static int64_t x514 = INT64_MIN;
volatile int64_t x530 = 10758171LL;
int64_t x532 = INT64_MIN;
uint64_t t118 = 3303503083933438194LLU;
static uint64_t x536 = UINT64_MAX;
uint32_t x539 = 370U;
volatile int16_t x549 = -1;
volatile uint8_t x551 = UINT8_MAX;
int32_t t122 = -207525978;
static volatile int64_t x564 = INT64_MAX;
int64_t x565 = INT64_MAX;
int8_t x590 = INT8_MAX;
uint32_t x591 = UINT32_MAX;
volatile int8_t x599 = -1;
int64_t x611 = -808251664182LL;
uint8_t x630 = 43U;
int32_t x632 = INT32_MIN;
static int16_t x633 = INT16_MIN;
uint8_t x639 = UINT8_MAX;
uint64_t x640 = 2136908263756443322LLU;
int32_t x643 = INT32_MIN;
int32_t t139 = -94454;
int32_t x672 = -7;
int16_t x678 = 7486;
static int32_t x684 = INT32_MIN;
volatile uint64_t t146 = 7869LLU;
uint32_t x687 = 2012U;
int16_t x690 = 1;
int8_t x692 = INT8_MIN;
static uint32_t t148 = 60270U;
static volatile int64_t t150 = 32572244413LL;
int16_t x711 = INT16_MIN;
volatile int64_t t151 = 118854801LL;
volatile int32_t t152 = -1807;
int8_t x725 = 15;
uint16_t x726 = 3U;
static uint64_t x730 = 8LLU;
static volatile int16_t x731 = -108;
uint64_t t155 = 423LLU;
uint32_t x737 = UINT32_MAX;
uint8_t x743 = 0U;
volatile uint8_t x748 = 27U;
static int16_t x760 = INT16_MIN;
int16_t x766 = INT16_MIN;
uint64_t x767 = 4LLU;
int32_t x772 = INT32_MIN;
int32_t x780 = -104661180;
static uint8_t x785 = UINT8_MAX;
int8_t x794 = INT8_MIN;
volatile int32_t x803 = INT32_MAX;
uint64_t x809 = UINT64_MAX;
int32_t x811 = -1;
static volatile uint64_t t173 = 62320LLU;
volatile uint32_t x817 = UINT32_MAX;
int8_t x819 = -2;
volatile uint16_t x824 = 227U;
int64_t x825 = INT64_MAX;
static int8_t x828 = INT8_MAX;
volatile uint64_t t178 = 30295LLU;
static int16_t x839 = -1;
uint32_t x847 = UINT32_MAX;
uint8_t x852 = UINT8_MAX;
volatile int64_t t183 = 712862476LL;
volatile int64_t x854 = -97LL;
uint32_t x857 = 9858979U;
int8_t x874 = -1;
static uint8_t x879 = 1U;
volatile int64_t x881 = 7827846LL;
int64_t x888 = INT64_MAX;
int64_t x890 = -1LL;
int64_t t192 = -12094747LL;
volatile int8_t x894 = INT8_MAX;
uint32_t x895 = 28082U;
volatile uint32_t x902 = 28102126U;
uint32_t x903 = 5043U;
int16_t x906 = INT16_MIN;


void f0(void) {
    	uint16_t x1 = 3U;
	static uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	volatile uint32_t t0 = 48182U;

    t0 = ((x1%(x2-x3))&x4);

    if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -1LL;
	int16_t x7 = -553;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = 1272956168435LL;

    t1 = ((x5%(x6-x7))&x8);

    if (t1 != 199LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int16_t x10 = 5568;
	int64_t x11 = INT64_MAX;
	uint16_t x12 = 107U;
	int64_t t2 = -176355348LL;

    t2 = ((x9%(x10-x11))&x12);

    if (t2 != 107LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	uint64_t t3 = 33765561903630432LLU;

    t3 = ((x13%(x14-x15))&x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 30537U;
	int32_t x18 = -2;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 2842528651783943LLU;
	uint64_t t4 = 6LLU;

    t4 = ((x17%(x18-x19))&x20);

    if (t4 != 9985LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	volatile int16_t x24 = 0;
	int32_t t5 = -6479686;

    t5 = ((x21%(x22-x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int8_t x26 = -1;
	volatile uint8_t x27 = 0U;
	volatile int64_t t6 = 6925075790LL;

    t6 = ((x25%(x26-x27))&x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -3921;
	volatile uint64_t x30 = 6382753LLU;
	int16_t x31 = INT16_MIN;
	uint64_t t7 = 6781LLU;

    t7 = ((x29%(x30-x31))&x32);

    if (t7 != 4650624LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 165U;
	volatile uint64_t x34 = UINT64_MAX;
	uint32_t x36 = 2022515121U;
	uint64_t t8 = 3753169434LLU;

    t8 = ((x33%(x34-x35))&x36);

    if (t8 != 161LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x42 = UINT8_MAX;
	int16_t x43 = -18;

    t9 = ((x41%(x42-x43))&x44);

    if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = INT32_MAX;

    t10 = ((x45%(x46-x47))&x48);

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 22893636396797LLU;
	volatile int16_t x55 = INT16_MIN;
	static volatile uint8_t x56 = 10U;
	uint64_t t11 = 37259990604191900LLU;

    t11 = ((x53%(x54-x55))&x56);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x58 = INT16_MIN;

    t12 = ((x57%(x58-x59))&x60);

    if (t12 != 98LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x61 = -1;
	volatile int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MAX;
	uint64_t t13 = 78663485220LLU;

    t13 = ((x61%(x62-x63))&x64);

    if (t13 != 126LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = -1LL;
	uint16_t x66 = 852U;
	static int32_t x67 = 1792;
	int64_t t14 = 0LL;

    t14 = ((x65%(x66-x67))&x68);

    if (t14 != 4294967295LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x69 = 0LLU;
	volatile int32_t x70 = -1;
	volatile uint8_t x71 = 1U;
	int32_t x72 = 63240825;
	uint64_t t15 = 119567LLU;

    t15 = ((x69%(x70-x71))&x72);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x73 = 4050482LL;
	uint32_t x74 = 11U;
	int32_t x75 = INT32_MIN;
	volatile int64_t t16 = -1161975129041406229LL;

    t16 = ((x73%(x74-x75))&x76);

    if (t16 != 4050482LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = 4317859U;
	volatile int16_t x79 = INT16_MIN;

    t17 = ((x77%(x78-x79))&x80);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = UINT64_MAX;
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	int16_t x84 = 1;

    t18 = ((x81%(x82-x83))&x84);

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x85 = INT64_MAX;
	uint32_t x88 = 31U;

    t19 = ((x85%(x86-x87))&x88);

    if (t19 != 24LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = 13U;
	uint32_t x90 = UINT32_MAX;
	uint64_t x91 = UINT64_MAX;

    t20 = ((x89%(x90-x91))&x92);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -1LL;
	int32_t x94 = INT32_MIN;
	static uint64_t x95 = UINT64_MAX;
	uint8_t x96 = UINT8_MAX;
	static volatile uint64_t t21 = 1399844LLU;

    t21 = ((x93%(x94-x95))&x96);

    if (t21 != 254LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = 502U;
	int32_t x99 = -72702;
	int32_t x100 = -5446403;
	volatile uint32_t t22 = 502758U;

    t22 = ((x97%(x98-x99))&x100);

    if (t22 != 244U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = -1LL;
	int64_t x102 = -1LL;
	int32_t x104 = -1;
	int64_t t23 = -3115356798553479974LL;

    t23 = ((x101%(x102-x103))&x104);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x106 = 7724923LLU;
	uint16_t x107 = 11694U;
	int8_t x108 = 0;
	uint64_t t24 = 7845897306LLU;

    t24 = ((x105%(x106-x107))&x108);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = 4;
	static int64_t x110 = -1064LL;
	volatile uint16_t x111 = 101U;
	uint16_t x112 = 401U;
	static int64_t t25 = 475830878135447216LL;

    t25 = ((x109%(x110-x111))&x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x113 = -1LL;
	volatile int8_t x114 = INT8_MAX;
	static volatile int16_t x115 = 468;
	int16_t x116 = -1;
	int64_t t26 = -544202703LL;

    t26 = ((x113%(x114-x115))&x116);

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x117 = 1U;
	volatile uint8_t x118 = UINT8_MAX;
	volatile int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;
	uint32_t t27 = 807722003U;

    t27 = ((x117%(x118-x119))&x120);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 107274301719809LLU;
	volatile uint16_t x123 = 4496U;
	volatile int32_t x124 = -621020866;
	uint64_t t28 = 14736577465LLU;

    t28 = ((x121%(x122-x123))&x124);

    if (t28 != 107273697476864LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x125 = 6U;
	int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	int16_t x128 = -14;
	volatile int64_t t29 = -296531218793417LL;

    t29 = ((x125%(x126-x127))&x128);

    if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x129 = INT16_MAX;
	static uint32_t x130 = 1U;
	uint64_t x131 = 2448090LLU;
	int64_t x132 = INT64_MAX;
	uint64_t t30 = 22750047167190LLU;

    t30 = ((x129%(x130-x131))&x132);

    if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x137 = 2825;
	uint32_t x138 = 3U;
	static int64_t x139 = INT64_MAX;
	uint32_t x140 = 1722307U;

    t31 = ((x137%(x138-x139))&x140);

    if (t31 != 769LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x144 = -1;
	volatile int64_t t32 = -836421593922LL;

    t32 = ((x141%(x142-x143))&x144);

    if (t32 != 23LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = -1LL;
	static uint32_t x146 = 12270U;
	volatile uint32_t x147 = 0U;
	int16_t x148 = INT16_MIN;

    t33 = ((x145%(x146-x147))&x148);

    if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 1U;
	uint64_t x151 = 55488320829593347LLU;
	int16_t x152 = INT16_MIN;
	uint64_t t34 = 58135489075LLU;

    t34 = ((x149%(x150-x151))&x152);

    if (t34 != 4294934528LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x153 = INT8_MIN;
	volatile uint8_t x155 = 4U;
	static volatile int16_t x156 = -4262;

    t35 = ((x153%(x154-x155))&x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x158 = INT16_MIN;
	uint8_t x159 = UINT8_MAX;
	uint32_t x160 = 85644805U;

    t36 = ((x157%(x158-x159))&x160);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int16_t x163 = 8008;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t37 = INT32_MIN;

    t37 = ((x161%(x162-x163))&x164);

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x169 = 5U;
	uint32_t x171 = 15U;
	uint8_t x172 = UINT8_MAX;
	volatile uint32_t t38 = 1049U;

    t38 = ((x169%(x170-x171))&x172);

    if (t38 != 5U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x175 = INT16_MAX;
	volatile int32_t t39 = 466825;

    t39 = ((x173%(x174-x175))&x176);

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MIN;

    t40 = ((x185%(x186-x187))&x188);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x189 = -1;
	uint64_t x190 = UINT64_MAX;
	static int64_t x191 = INT64_MIN;
	uint64_t t41 = 16134LLU;

    t41 = ((x189%(x190-x191))&x192);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = INT64_MAX;
	static int64_t x194 = INT64_MAX;
	uint8_t x195 = 15U;

    t42 = ((x193%(x194-x195))&x196);

    if (t42 != 4LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x197 = 5LLU;
	uint64_t x198 = 1980968095315679667LLU;
	uint64_t x199 = 282622015554397568LLU;
	volatile uint64_t t43 = 5998899934001628LLU;

    t43 = ((x197%(x198-x199))&x200);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x201 = UINT16_MAX;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MIN;
	uint64_t t44 = 48LLU;

    t44 = ((x201%(x202-x203))&x204);

    if (t44 != 32768LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x205 = -1;
	uint16_t x207 = 0U;
	static uint16_t x208 = 3040U;
	static volatile int64_t t45 = -8LL;

    t45 = ((x205%(x206-x207))&x208);

    if (t45 != 3040LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x209 = -1LL;
	uint16_t x210 = 58U;
	int64_t x211 = -1LL;
	int16_t x212 = -1;

    t46 = ((x209%(x210-x211))&x212);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x217 = 62;
	uint16_t x218 = 12U;
	static volatile int16_t x219 = 0;
	static volatile int16_t x220 = -15;
	int32_t t47 = -68124;

    t47 = ((x217%(x218-x219))&x220);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x222 = 103U;
	int64_t x224 = INT64_MIN;

    t48 = ((x221%(x222-x223))&x224);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x225 = 4U;
	volatile int8_t x226 = 23;
	int64_t x228 = INT64_MIN;
	int64_t t49 = 1736LL;

    t49 = ((x225%(x226-x227))&x228);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x229 = 219U;
	uint16_t x230 = 2U;
	int8_t x231 = 3;
	static int64_t x232 = INT64_MIN;

    t50 = ((x229%(x230-x231))&x232);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x233 = 539U;
	static int64_t x234 = INT64_MAX;
	static int32_t x236 = INT32_MIN;
	static volatile int64_t t51 = 359955771334LL;

    t51 = ((x233%(x234-x235))&x236);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x237 = INT32_MIN;
	volatile uint32_t x238 = 175181166U;
	volatile int32_t x239 = INT32_MAX;
	int16_t x240 = -2;
	uint32_t t52 = 14U;

    t52 = ((x237%(x238-x239))&x240);

    if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x241 = INT8_MIN;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MAX;

    t53 = ((x241%(x242-x243))&x244);

    if (t53 != 32640) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x247 = 0;
	static volatile int16_t x248 = INT16_MIN;

    t54 = ((x245%(x246-x247))&x248);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x249 = -20162977LL;
	uint32_t x250 = 18U;
	volatile int8_t x251 = -1;
	uint64_t x252 = 1025LLU;
	static uint64_t t55 = 23573382906LLU;

    t55 = ((x249%(x250-x251))&x252);

    if (t55 != 1024LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x254 = 115962839338184261LLU;
	int32_t x255 = INT32_MIN;
	volatile int16_t x256 = -473;
	uint64_t t56 = 7682453133LLU;

    t56 = ((x253%(x254-x255))&x256);

    if (t56 != 62307559487010853LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x258 = -2;
	static volatile uint16_t x260 = 3909U;
	volatile int32_t t57 = -42121328;

    t57 = ((x257%(x258-x259))&x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x261 = UINT32_MAX;
	static int8_t x262 = INT8_MAX;
	static uint64_t x263 = 4997926109275LLU;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t58 = 100LLU;

    t58 = ((x261%(x262-x263))&x264);

    if (t58 != 4294934528LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = -1LL;
	int64_t x267 = -1LL;
	int64_t x268 = -1LL;
	static volatile uint64_t t59 = 63LLU;

    t59 = ((x265%(x266-x267))&x268);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x271 = 23016991U;
	uint32_t x272 = 1634299U;
	volatile uint32_t t60 = 16U;

    t60 = ((x269%(x270-x271))&x272);

    if (t60 != 123U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x274 = INT64_MAX;
	uint16_t x275 = 21689U;
	int16_t x276 = -3;
	int64_t t61 = -6350808827LL;

    t61 = ((x273%(x274-x275))&x276);

    if (t61 != -3LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = -1;
	volatile int64_t x278 = 60510787790072LL;
	int32_t x279 = -404738088;
	volatile int32_t x280 = INT32_MIN;
	static int64_t t62 = 277583504707LL;

    t62 = ((x277%(x278-x279))&x280);

    if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x281 = 1630U;
	int8_t x283 = INT8_MAX;
	uint8_t x284 = 74U;
	int32_t t63 = 7444289;

    t63 = ((x281%(x282-x283))&x284);

    if (t63 != 74) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x285 = -1;
	uint32_t x286 = 6U;
	static int8_t x287 = 1;
	int32_t x288 = -1;
	uint32_t t64 = 1463153699U;

    t64 = ((x285%(x286-x287))&x288);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x289 = 5811LLU;
	volatile int64_t x290 = 146LL;
	uint8_t x291 = 22U;
	int16_t x292 = INT16_MAX;
	uint64_t t65 = 82316121813LLU;

    t65 = ((x289%(x290-x291))&x292);

    if (t65 != 107LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x293 = 0;
	static int64_t x295 = 465LL;
	static volatile int64_t t66 = -13464706117706LL;

    t66 = ((x293%(x294-x295))&x296);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x297 = UINT16_MAX;
	static int32_t x298 = -957777034;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = -1;
	volatile uint64_t t67 = 68979564608LLU;

    t67 = ((x297%(x298-x299))&x300);

    if (t67 != 65535LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x301 = INT64_MIN;
	static volatile int16_t x302 = INT16_MIN;
	static int32_t x303 = -250862403;
	static volatile uint16_t x304 = 990U;
	static int64_t t68 = -360443636336413858LL;

    t68 = ((x301%(x302-x303))&x304);

    if (t68 != 920LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t69 = -9LL;

    t69 = ((x305%(x306-x307))&x308);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x309 = 12972U;
	int8_t x310 = INT8_MIN;
	static int16_t x311 = 4310;
	int64_t x312 = 5133418LL;
	volatile int64_t t70 = -4205087144852LL;

    t70 = ((x309%(x310-x311))&x312);

    if (t70 != 4096LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x313 = INT16_MAX;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MAX;
	int64_t t71 = -10920612LL;

    t71 = ((x313%(x314-x315))&x316);

    if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x317 = 3101;
	static int32_t x318 = INT32_MIN;
	static volatile int8_t x319 = -63;
	volatile int32_t t72 = -32312493;

    t72 = ((x317%(x318-x319))&x320);

    if (t72 != 3072) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x321 = INT64_MAX;
	static int32_t x324 = INT32_MIN;
	static volatile int64_t t73 = 0LL;

    t73 = ((x321%(x322-x323))&x324);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x329 = 31U;
	int64_t x330 = 11897LL;
	static int32_t x331 = -1;
	int64_t x332 = INT64_MIN;

    t74 = ((x329%(x330-x331))&x332);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x333 = 2U;
	static int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	static int16_t x336 = 10;
	volatile int64_t t75 = 0LL;

    t75 = ((x333%(x334-x335))&x336);

    if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = -1;
	uint32_t x338 = 437U;
	uint32_t t76 = 28509112U;

    t76 = ((x337%(x338-x339))&x340);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x345 = INT64_MAX;
	int8_t x347 = INT8_MAX;
	uint32_t x348 = 3U;
	volatile int64_t t77 = -215564123308296603LL;

    t77 = ((x345%(x346-x347))&x348);

    if (t77 != 3LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = -507;
	int64_t x350 = -1LL;
	int64_t x351 = INT64_MAX;

    t78 = ((x349%(x350-x351))&x352);

    if (t78 != -512LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x353 = INT16_MIN;
	static uint8_t x355 = 11U;

    t79 = ((x353%(x354-x355))&x356);

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x357 = INT64_MIN;
	static volatile int8_t x358 = INT8_MIN;
	static uint64_t x360 = 3829305327467LLU;
	volatile uint64_t t80 = 584LLU;

    t80 = ((x357%(x358-x359))&x360);

    if (t80 != 1136025142026LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x361 = -1;
	volatile int64_t x362 = INT64_MAX;
	int8_t x363 = 2;
	uint64_t t81 = 4113349LLU;

    t81 = ((x361%(x362-x363))&x364);

    if (t81 != 954LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = INT32_MIN;
	volatile int16_t x366 = 25;
	volatile int8_t x367 = INT8_MAX;
	volatile uint64_t t82 = 2684164LLU;

    t82 = ((x365%(x366-x367))&x368);

    if (t82 != 98LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x369 = 23983U;
	static int16_t x370 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MAX;
	volatile int64_t t83 = -574205LL;

    t83 = ((x369%(x370-x371))&x372);

    if (t83 != 23983LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x374 = -1;
	int64_t x376 = -16088891847451LL;

    t84 = ((x373%(x374-x375))&x376);

    if (t84 != -16088891847455LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x381 = UINT32_MAX;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t85 = 4166337229724860LL;

    t85 = ((x381%(x382-x383))&x384);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MAX;
	uint32_t x388 = UINT32_MAX;
	uint32_t t86 = 217602U;

    t86 = ((x385%(x386-x387))&x388);

    if (t86 != 127U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x389 = 0;
	uint16_t x390 = 3736U;
	static int8_t x391 = -1;
	volatile int16_t x392 = 14760;
	static int32_t t87 = 35393;

    t87 = ((x389%(x390-x391))&x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x397 = 1323785249395121LLU;
	uint16_t x398 = 16076U;
	int16_t x399 = INT16_MAX;
	volatile uint32_t x400 = 117U;
	static uint64_t t88 = 532347917039720412LLU;

    t88 = ((x397%(x398-x399))&x400);

    if (t88 != 49LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x401 = UINT32_MAX;
	uint16_t x403 = 2344U;
	static int32_t x404 = -1;

    t89 = ((x401%(x402-x403))&x404);

    if (t89 != 2344U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x406 = 29U;
	uint16_t x408 = 12U;
	volatile uint32_t t90 = 25045U;

    t90 = ((x405%(x406-x407))&x408);

    if (t90 != 12U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x409 = INT64_MIN;
	uint16_t x411 = 14U;
	int8_t x412 = INT8_MIN;

    t91 = ((x409%(x410-x411))&x412);

    if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x413 = 26;
	int32_t x415 = -1;
	int16_t x416 = INT16_MAX;
	int32_t t92 = 355181756;

    t92 = ((x413%(x414-x415))&x416);

    if (t92 != 26) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x417 = INT64_MIN;
	volatile uint64_t x418 = 11240129116LLU;
	int8_t x419 = -61;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t93 = 2LLU;

    t93 = ((x417%(x418-x419))&x420);

    if (t93 != 2603122944LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x426 = INT16_MIN;
	int32_t x427 = 30775619;
	static volatile int8_t x428 = INT8_MAX;
	volatile int32_t t94 = -100301;

    t94 = ((x425%(x426-x427))&x428);

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x430 = INT32_MIN;
	static int16_t x431 = INT16_MIN;
	int8_t x432 = 18;
	volatile int64_t t95 = 2599246102LL;

    t95 = ((x429%(x430-x431))&x432);

    if (t95 != 18LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x433 = 5;
	static uint16_t x434 = UINT16_MAX;
	int32_t x435 = 3230;
	int16_t x436 = INT16_MIN;
	static int32_t t96 = 4267666;

    t96 = ((x433%(x434-x435))&x436);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x438 = INT8_MIN;
	uint16_t x440 = 1390U;
	int64_t t97 = -11412826LL;

    t97 = ((x437%(x438-x439))&x440);

    if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MIN;
	volatile int16_t x442 = 1126;
	int16_t x443 = 143;
	volatile uint16_t x444 = 3962U;
	volatile int32_t t98 = -2;

    t98 = ((x441%(x442-x443))&x444);

    if (t98 != 3874) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = -128;
	uint8_t x446 = 1U;
	int8_t x447 = -13;
	int64_t x448 = 3667202LL;
	volatile int64_t t99 = 52026607LL;

    t99 = ((x445%(x446-x447))&x448);

    if (t99 != 3667202LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x449 = INT8_MIN;
	uint8_t x450 = UINT8_MAX;
	volatile uint64_t x451 = 84821473LLU;
	static uint64_t t100 = 23454LLU;

    t100 = ((x449%(x450-x451))&x452);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = UINT8_MAX;
	int64_t x455 = 65LL;
	int32_t x456 = 25584593;
	uint64_t t101 = 23026LLU;

    t101 = ((x453%(x454-x455))&x456);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x459 = -1LL;
	int8_t x460 = 7;

    t102 = ((x457%(x458-x459))&x460);

    if (t102 != 4LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int8_t x463 = -1;
	volatile int32_t t103 = 105233;

    t103 = ((x461%(x462-x463))&x464);

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x466 = 2844U;
	int32_t x467 = -1;
	int8_t x468 = -8;
	int64_t t104 = -97627LL;

    t104 = ((x465%(x466-x467))&x468);

    if (t104 != -856LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x469 = -1;
	static int16_t x470 = 506;
	static int64_t t105 = INT64_MIN;

    t105 = ((x469%(x470-x471))&x472);

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x477 = INT8_MAX;
	uint8_t x478 = UINT8_MAX;
	static uint32_t x479 = UINT32_MAX;
	int8_t x480 = -1;

    t106 = ((x477%(x478-x479))&x480);

    if (t106 != 127U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x482 = INT64_MAX;
	uint16_t x483 = 17038U;
	int32_t x484 = INT32_MIN;
	static volatile int64_t t107 = 1219LL;

    t107 = ((x481%(x482-x483))&x484);

    if (t107 != -2147483648LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MIN;
	int8_t x487 = INT8_MIN;
	int32_t t108 = -85918;

    t108 = ((x485%(x486-x487))&x488);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x489 = 1U;
	int16_t x490 = INT16_MIN;
	volatile int32_t x491 = INT32_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t109 = -1;

    t109 = ((x489%(x490-x491))&x492);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x497 = 3;
	int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MAX;
	volatile int16_t x500 = INT16_MIN;
	volatile int32_t t110 = -12174;

    t110 = ((x497%(x498-x499))&x500);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x501 = 1U;
	uint64_t x502 = UINT64_MAX;
	volatile uint16_t x504 = UINT16_MAX;
	uint64_t t111 = 3522560LLU;

    t111 = ((x501%(x502-x503))&x504);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x508 = 1198U;
	volatile int32_t t112 = -1;

    t112 = ((x505%(x506-x507))&x508);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x509 = 9LLU;
	static int16_t x510 = INT16_MIN;
	uint32_t x512 = 4U;
	uint64_t t113 = 3LLU;

    t113 = ((x509%(x510-x511))&x512);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x515 = INT32_MIN;
	volatile int32_t x516 = -1;
	int64_t t114 = 222883149193031LL;

    t114 = ((x513%(x514-x515))&x516);

    if (t114 != 3LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x517 = INT32_MAX;
	volatile uint16_t x518 = UINT16_MAX;
	volatile uint8_t x519 = 2U;
	int16_t x520 = 94;
	static int32_t t115 = -15616383;

    t115 = ((x517%(x518-x519))&x520);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x521 = 0U;
	uint32_t x522 = 19U;
	int64_t x523 = -1141158173LL;
	int8_t x524 = INT8_MIN;
	int64_t t116 = -281361637941732971LL;

    t116 = ((x521%(x522-x523))&x524);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x525 = UINT8_MAX;
	int64_t x526 = -18306271414815LL;
	uint16_t x527 = 15661U;
	int32_t x528 = INT32_MAX;
	int64_t t117 = -470702870655LL;

    t117 = ((x525%(x526-x527))&x528);

    if (t117 != 255LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x529 = UINT64_MAX;
	static volatile int16_t x531 = INT16_MIN;

    t118 = ((x529%(x530-x531))&x532);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x533 = INT64_MAX;
	int64_t x534 = 213583469324261LL;
	int32_t x535 = -1;
	volatile uint64_t t119 = 16150LLU;

    t119 = ((x533%(x534-x535))&x536);

    if (t119 != 197081025169861LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x537 = -54;
	int8_t x538 = INT8_MIN;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t120 = 751813LLU;

    t120 = ((x537%(x538-x539))&x540);

    if (t120 != 444LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x545 = -1;
	static uint16_t x546 = 6U;
	int64_t x547 = -2474642856505LL;
	int32_t x548 = -1;
	static volatile int64_t t121 = 118630955636LL;

    t121 = ((x545%(x546-x547))&x548);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x550 = INT8_MIN;
	int16_t x552 = INT16_MAX;

    t122 = ((x549%(x550-x551))&x552);

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x557 = -1;
	volatile uint64_t x558 = UINT64_MAX;
	static int8_t x559 = INT8_MIN;
	int64_t x560 = -7515885637LL;
	static volatile uint64_t t123 = 402391438226069014LLU;

    t123 = ((x557%(x558-x559))&x560);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MIN;
	volatile int16_t x563 = INT16_MIN;
	static volatile int64_t t124 = -1791185LL;

    t124 = ((x561%(x562-x563))&x564);

    if (t124 != 32767LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x566 = -11LL;
	int8_t x567 = INT8_MAX;
	int32_t x568 = INT32_MIN;
	int64_t t125 = 16222020LL;

    t125 = ((x565%(x566-x567))&x568);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x577 = UINT16_MAX;
	int32_t x578 = -1;
	int8_t x579 = INT8_MIN;
	int32_t x580 = -27795;
	int32_t t126 = 864;

    t126 = ((x577%(x578-x579))&x580);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x581 = -3297;
	uint64_t x582 = 725478LLU;
	int16_t x583 = INT16_MAX;
	volatile int8_t x584 = -1;
	uint64_t t127 = 693260674443623LLU;

    t127 = ((x581%(x582-x583))&x584);

    if (t127 != 566690LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x589 = INT8_MIN;
	uint16_t x592 = 1891U;
	volatile uint32_t t128 = 933U;

    t128 = ((x589%(x590-x591))&x592);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x593 = -1;
	static uint32_t x594 = 18348625U;
	int16_t x595 = 9986;
	int32_t x596 = -1848;
	static volatile uint32_t t129 = 183U;

    t129 = ((x593%(x594-x595))&x596);

    if (t129 != 3725512U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x597 = INT16_MIN;
	volatile uint8_t x598 = 31U;
	uint16_t x600 = 25U;
	int32_t t130 = -43445;

    t130 = ((x597%(x598-x599))&x600);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x609 = 106U;
	int64_t x610 = INT64_MIN;
	int8_t x612 = INT8_MIN;
	int64_t t131 = 208001LL;

    t131 = ((x609%(x610-x611))&x612);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x613 = -7845471072LL;
	int8_t x614 = 20;
	int8_t x615 = 0;
	static uint32_t x616 = UINT32_MAX;
	volatile int64_t t132 = -11LL;

    t132 = ((x613%(x614-x615))&x616);

    if (t132 != 4294967284LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x617 = INT16_MIN;
	static uint8_t x618 = 4U;
	int32_t x619 = INT32_MAX;
	uint64_t x620 = 67462LLU;
	uint64_t t133 = 38LLU;

    t133 = ((x617%(x618-x619))&x620);

    if (t133 != 65536LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x621 = INT16_MIN;
	int16_t x622 = INT16_MAX;
	int16_t x623 = -1;
	int8_t x624 = -6;
	volatile int32_t t134 = 61613;

    t134 = ((x621%(x622-x623))&x624);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x625 = -909745;
	uint64_t x626 = UINT64_MAX;
	static int32_t x627 = INT32_MAX;
	int64_t x628 = INT64_MIN;
	volatile uint64_t t135 = 737125902098408LLU;

    t135 = ((x625%(x626-x627))&x628);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x629 = 3;
	uint32_t x631 = 42713824U;
	volatile uint32_t t136 = 273624U;

    t136 = ((x629%(x630-x631))&x632);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x634 = INT8_MAX;
	uint32_t x635 = 833802U;
	volatile int8_t x636 = -1;
	static volatile uint32_t t137 = 55770336U;

    t137 = ((x633%(x634-x635))&x636);

    if (t137 != 800907U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x637 = -1120LL;
	int64_t x638 = INT64_MAX;
	uint64_t t138 = 60797946990496LLU;

    t138 = ((x637%(x638-x639))&x640);

    if (t138 != 2136908263756442272LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x641 = 2974U;
	int16_t x642 = -1;
	uint16_t x644 = UINT16_MAX;

    t139 = ((x641%(x642-x643))&x644);

    if (t139 != 2974) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x649 = 438;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MIN;
	int8_t x652 = INT8_MAX;
	int32_t t140 = 2;

    t140 = ((x649%(x650-x651))&x652);

    if (t140 != 54) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x653 = -1;
	uint16_t x654 = UINT16_MAX;
	uint8_t x655 = 77U;
	int8_t x656 = 0;
	int32_t t141 = 37;

    t141 = ((x653%(x654-x655))&x656);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x665 = 120U;
	volatile int16_t x666 = -161;
	int16_t x667 = -3396;
	int64_t x668 = INT64_MAX;
	static volatile int64_t t142 = -46LL;

    t142 = ((x665%(x666-x667))&x668);

    if (t142 != 120LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MIN;
	uint32_t x671 = 9920U;
	volatile uint32_t t143 = 121842U;

    t143 = ((x669%(x670-x671))&x672);

    if (t143 != 2147483648U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x673 = INT64_MIN;
	volatile int64_t x674 = -1LL;
	int8_t x675 = 3;
	int16_t x676 = INT16_MIN;
	int64_t t144 = 7669818397579LL;

    t144 = ((x673%(x674-x675))&x676);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x677 = INT16_MIN;
	uint16_t x679 = 15U;
	int32_t x680 = -2819;
	int32_t t145 = -247897;

    t145 = ((x677%(x678-x679))&x680);

    if (t145 != -2884) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x681 = 392386048020LLU;
	int8_t x682 = INT8_MIN;
	static int32_t x683 = INT32_MIN;

    t146 = ((x681%(x682-x683))&x684);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x685 = INT32_MAX;
	int32_t x686 = INT32_MAX;
	static uint8_t x688 = 20U;
	volatile uint32_t t147 = 1976040459U;

    t147 = ((x685%(x686-x687))&x688);

    if (t147 != 20U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x689 = UINT32_MAX;
	uint16_t x691 = 25519U;

    t148 = ((x689%(x690-x691))&x692);

    if (t148 != 25472U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x697 = INT32_MIN;
	int16_t x698 = INT16_MIN;
	static uint16_t x699 = UINT16_MAX;
	static int32_t x700 = -1;
	volatile int32_t t149 = -120;

    t149 = ((x697%(x698-x699))&x700);

    if (t149 != -54613) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x705 = INT32_MIN;
	int32_t x706 = -1;
	int64_t x707 = -182243774345942LL;
	int64_t x708 = -1LL;

    t150 = ((x705%(x706-x707))&x708);

    if (t150 != -2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x709 = 106U;
	int8_t x710 = -3;
	int64_t x712 = -1LL;

    t151 = ((x709%(x710-x711))&x712);

    if (t151 != 106LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x713 = -8;
	int8_t x714 = INT8_MIN;
	uint16_t x715 = UINT16_MAX;
	uint8_t x716 = 0U;

    t152 = ((x713%(x714-x715))&x716);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x717 = INT32_MIN;
	volatile uint16_t x718 = 1623U;
	volatile int16_t x719 = INT16_MIN;
	static int32_t x720 = 72;
	int32_t t153 = 196413;

    t153 = ((x717%(x718-x719))&x720);

    if (t153 != 72) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x727 = 40448LL;
	volatile int32_t x728 = INT32_MIN;
	volatile int64_t t154 = 512407629434311LL;

    t154 = ((x725%(x726-x727))&x728);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x729 = 0;
	static volatile int64_t x732 = -1LL;

    t155 = ((x729%(x730-x731))&x732);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x733 = 29;
	int64_t x734 = INT64_MIN;
	int32_t x735 = -1;
	volatile int16_t x736 = INT16_MAX;
	static volatile int64_t t156 = 66600669405581LL;

    t156 = ((x733%(x734-x735))&x736);

    if (t156 != 29LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x738 = 615;
	static volatile int8_t x739 = INT8_MAX;
	int32_t x740 = -1;
	volatile uint32_t t157 = 6U;

    t157 = ((x737%(x738-x739))&x740);

    if (t157 != 239U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x741 = 84;
	int32_t x742 = 46236;
	static int8_t x744 = INT8_MAX;
	volatile int32_t t158 = 78203;

    t158 = ((x741%(x742-x743))&x744);

    if (t158 != 84) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x745 = 2081714800U;
	uint32_t x746 = 0U;
	int8_t x747 = INT8_MIN;
	volatile uint32_t t159 = 26879051U;

    t159 = ((x745%(x746-x747))&x748);

    if (t159 != 16U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x749 = INT64_MIN;
	uint16_t x750 = 3U;
	static int16_t x751 = INT16_MAX;
	volatile uint16_t x752 = 27897U;
	int64_t t160 = 1056882981LL;

    t160 = ((x749%(x750-x751))&x752);

    if (t160 != 26624LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x753 = 122695034673191329LLU;
	uint16_t x754 = UINT16_MAX;
	uint16_t x755 = 0U;
	static int64_t x756 = 15707LL;
	volatile uint64_t t161 = 203408486259571LLU;

    t161 = ((x753%(x754-x755))&x756);

    if (t161 != 9491LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x757 = 3523U;
	uint16_t x758 = 86U;
	volatile uint64_t x759 = 2045985371LLU;
	volatile uint64_t t162 = 739369454470249506LLU;

    t162 = ((x757%(x758-x759))&x760);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x761 = UINT16_MAX;
	int32_t x762 = INT32_MIN;
	static int32_t x763 = -1;
	volatile int16_t x764 = -15667;
	int32_t t163 = 28715529;

    t163 = ((x761%(x762-x763))&x764);

    if (t163 != 49869) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint8_t x765 = UINT8_MAX;
	uint32_t x768 = 695966605U;
	volatile uint64_t t164 = 70306783LLU;

    t164 = ((x765%(x766-x767))&x768);

    if (t164 != 141LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x769 = 4604115U;
	int16_t x770 = -1;
	int8_t x771 = -47;
	uint32_t t165 = 1U;

    t165 = ((x769%(x770-x771))&x772);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x773 = 3457U;
	int32_t x774 = -3298548;
	static volatile uint32_t x775 = 190803U;
	static volatile int32_t x776 = INT32_MIN;
	uint32_t t166 = 718130U;

    t166 = ((x773%(x774-x775))&x776);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x777 = INT8_MIN;
	int64_t x778 = INT64_MIN;
	uint8_t x779 = 0U;
	static int64_t t167 = -203929669LL;

    t167 = ((x777%(x778-x779))&x780);

    if (t167 != -104661248LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x786 = 85U;
	int8_t x787 = INT8_MIN;
	static volatile int32_t x788 = 41696459;
	int32_t t168 = 34193;

    t168 = ((x785%(x786-x787))&x788);

    if (t168 != 10) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x793 = -1;
	int32_t x795 = -1;
	static int32_t x796 = -1;
	int32_t t169 = -2072;

    t169 = ((x793%(x794-x795))&x796);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x797 = -164LL;
	uint64_t x798 = 203325645932LLU;
	static volatile int8_t x799 = INT8_MIN;
	static volatile int32_t x800 = INT32_MIN;
	uint64_t t170 = 126LLU;

    t170 = ((x797%(x798-x799))&x800);

    if (t170 != 27917287424LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x801 = UINT8_MAX;
	volatile uint64_t x802 = 96587231996750LLU;
	volatile uint64_t x804 = 27LLU;
	static volatile uint64_t t171 = 22642LLU;

    t171 = ((x801%(x802-x803))&x804);

    if (t171 != 27LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x805 = INT8_MIN;
	int64_t x806 = INT64_MIN;
	int32_t x807 = -1;
	int32_t x808 = INT32_MIN;
	static int64_t t172 = -745959LL;

    t172 = ((x805%(x806-x807))&x808);

    if (t172 != -2147483648LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x810 = 1385;
	int8_t x812 = INT8_MAX;

    t173 = ((x809%(x810-x811))&x812);

    if (t173 != 15LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x813 = INT16_MIN;
	int16_t x814 = 34;
	uint64_t x815 = 1490279456LLU;
	volatile uint16_t x816 = 89U;
	uint64_t t174 = 95437859627LLU;

    t174 = ((x813%(x814-x815))&x816);

    if (t174 != 88LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x818 = INT64_MIN;
	int8_t x820 = -5;
	volatile int64_t t175 = -1740405559LL;

    t175 = ((x817%(x818-x819))&x820);

    if (t175 != 4294967291LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x821 = 24948U;
	int8_t x822 = INT8_MAX;
	static uint32_t x823 = 14713119U;
	volatile uint32_t t176 = 17413530U;

    t176 = ((x821%(x822-x823))&x824);

    if (t176 != 96U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x826 = -1;
	int8_t x827 = INT8_MAX;
	int64_t t177 = -22677855459LL;

    t177 = ((x825%(x826-x827))&x828);

    if (t177 != 127LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x829 = 32U;
	int64_t x830 = INT64_MIN;
	uint64_t x831 = 71026843246281LLU;
	volatile uint16_t x832 = 0U;

    t178 = ((x829%(x830-x831))&x832);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x833 = INT8_MIN;
	volatile uint16_t x834 = UINT16_MAX;
	volatile int64_t x835 = -257576997200478444LL;
	int16_t x836 = INT16_MIN;
	volatile int64_t t179 = -66451114979LL;

    t179 = ((x833%(x834-x835))&x836);

    if (t179 != -32768LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MIN;
	volatile int16_t x840 = INT16_MIN;
	static volatile int32_t t180 = 3;

    t180 = ((x837%(x838-x839))&x840);

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x841 = 15U;
	static uint64_t x842 = 16516214025454085LLU;
	int32_t x843 = 16115360;
	int32_t x844 = -663;
	volatile uint64_t t181 = 58680777166LLU;

    t181 = ((x841%(x842-x843))&x844);

    if (t181 != 9LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x845 = 5;
	uint8_t x846 = UINT8_MAX;
	volatile int64_t x848 = 123LL;
	volatile int64_t t182 = 17428646386420160LL;

    t182 = ((x845%(x846-x847))&x848);

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x849 = INT8_MIN;
	int64_t x850 = INT64_MIN;
	int16_t x851 = INT16_MIN;

    t183 = ((x849%(x850-x851))&x852);

    if (t183 != 128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x853 = INT32_MIN;
	static int8_t x855 = -1;
	int8_t x856 = 2;
	static volatile int64_t t184 = -50LL;

    t184 = ((x853%(x854-x855))&x856);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x858 = 11U;
	int8_t x859 = -3;
	uint8_t x860 = 29U;
	volatile uint32_t t185 = 54592370U;

    t185 = ((x857%(x858-x859))&x860);

    if (t185 != 9U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x861 = INT8_MIN;
	volatile int16_t x862 = -7;
	int16_t x863 = -1;
	static uint8_t x864 = 0U;
	volatile int32_t t186 = -4;

    t186 = ((x861%(x862-x863))&x864);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x869 = UINT8_MAX;
	static uint16_t x870 = 216U;
	uint32_t x871 = 36721U;
	static volatile int64_t x872 = 13084243754590LL;
	static int64_t t187 = 0LL;

    t187 = ((x869%(x870-x871))&x872);

    if (t187 != 94LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x873 = 6192064U;
	static int32_t x875 = INT32_MIN;
	uint8_t x876 = 52U;
	volatile uint32_t t188 = 2U;

    t188 = ((x873%(x874-x875))&x876);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x877 = INT8_MAX;
	static volatile uint16_t x878 = UINT16_MAX;
	int16_t x880 = INT16_MIN;
	int32_t t189 = 7;

    t189 = ((x877%(x878-x879))&x880);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x882 = -1LL;
	volatile int16_t x883 = INT16_MAX;
	static int8_t x884 = INT8_MIN;
	int64_t t190 = -8032067561LL;

    t190 = ((x881%(x882-x883))&x884);

    if (t190 != 29056LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x885 = 27U;
	uint64_t x886 = 30LLU;
	uint64_t x887 = UINT64_MAX;
	volatile uint64_t t191 = 1930495363060LLU;

    t191 = ((x885%(x886-x887))&x888);

    if (t191 != 27LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x889 = 9;
	uint32_t x891 = UINT32_MAX;
	uint16_t x892 = 3U;

    t192 = ((x889%(x890-x891))&x892);

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x893 = 1092U;
	int16_t x896 = -1;
	volatile uint32_t t193 = 1172505U;

    t193 = ((x893%(x894-x895))&x896);

    if (t193 != 1092U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x897 = INT64_MIN;
	static int64_t x898 = INT64_MIN;
	int32_t x899 = -1;
	uint32_t x900 = UINT32_MAX;
	volatile int64_t t194 = -2586LL;

    t194 = ((x897%(x898-x899))&x900);

    if (t194 != 4294967295LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x901 = INT16_MIN;
	uint32_t x904 = 1124147504U;
	volatile uint32_t t195 = 147629U;

    t195 = ((x901%(x902-x903))&x904);

    if (t195 != 16785456U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x905 = -1LL;
	static int64_t x907 = INT64_MIN;
	int64_t x908 = -128532LL;
	int64_t t196 = -190109638776477935LL;

    t196 = ((x905%(x906-x907))&x908);

    if (t196 != -128532LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x909 = UINT16_MAX;
	int8_t x910 = INT8_MIN;
	volatile int64_t x911 = INT64_MIN;
	int16_t x912 = -534;
	int64_t t197 = -1435041127227933837LL;

    t197 = ((x909%(x910-x911))&x912);

    if (t197 != 65002LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x913 = 213950529;
	int32_t x914 = INT32_MIN;
	uint32_t x915 = 1U;
	static volatile int8_t x916 = -3;
	volatile uint32_t t198 = 107315230U;

    t198 = ((x913%(x914-x915))&x916);

    if (t198 != 213950529U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x917 = 0;
	int32_t x918 = -1;
	int32_t x919 = INT32_MIN;
	int32_t x920 = 1883;
	static int32_t t199 = -112;

    t199 = ((x917%(x918-x919))&x920);

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

