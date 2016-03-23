
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

static volatile uint32_t x4 = 2025U;
static volatile int64_t x6 = INT64_MAX;
int64_t x11 = INT64_MIN;
volatile int16_t x12 = -1;
uint16_t x16 = 94U;
int32_t t3 = 2759;
static volatile int8_t x18 = INT8_MIN;
uint32_t x25 = UINT32_MAX;
int16_t x28 = -1;
int32_t t6 = -14;
static uint64_t t8 = 1LLU;
int32_t x41 = 34;
int16_t x43 = -7405;
uint16_t x45 = 27303U;
static int64_t x46 = 0LL;
int32_t x51 = 1;
int8_t x56 = INT8_MIN;
int32_t x59 = INT32_MIN;
int8_t x67 = INT8_MIN;
uint16_t x68 = UINT16_MAX;
int8_t x70 = 1;
int8_t x73 = INT8_MIN;
static volatile int8_t x80 = INT8_MIN;
int16_t x81 = INT16_MIN;
int8_t x83 = INT8_MAX;
uint8_t x90 = 7U;
uint8_t x95 = UINT8_MAX;
volatile int32_t t24 = -40277;
static int64_t x105 = 438675805037034LL;
volatile int8_t x106 = 1;
static uint8_t x107 = 0U;
uint16_t x111 = UINT16_MAX;
static int16_t x118 = -1;
volatile uint64_t x119 = 15LLU;
volatile int64_t x121 = 2461510068222LL;
static int32_t x128 = -759436;
int32_t x131 = -1;
volatile int32_t t31 = -908239064;
uint64_t x138 = 116453LLU;
uint16_t x142 = UINT16_MAX;
uint16_t x143 = 6U;
uint32_t x144 = 8781U;
int8_t x146 = INT8_MAX;
uint32_t x154 = UINT32_MAX;
int64_t x157 = INT64_MIN;
uint64_t x170 = 38881474364LLU;
int64_t x173 = INT64_MIN;
volatile int64_t x176 = -1LL;
static int64_t t42 = 39851765221LL;
uint8_t x179 = 13U;
uint8_t x181 = UINT8_MAX;
int16_t x186 = INT16_MIN;
int64_t x197 = 15862118LL;
int32_t x199 = 857;
volatile uint64_t x200 = 1285LLU;
int32_t x210 = -3495254;
int8_t x211 = 18;
uint64_t x216 = UINT64_MAX;
static uint64_t t52 = 3209874160098647615LLU;
volatile int32_t t53 = -351749475;
uint32_t x225 = 22160610U;
volatile uint16_t x226 = 3U;
int32_t t60 = 773587387;
static int8_t x253 = INT8_MIN;
int32_t x255 = INT32_MAX;
volatile int32_t t62 = 6;
uint8_t x263 = 20U;
int32_t t64 = -114160;
volatile int32_t x267 = INT32_MIN;
uint8_t x271 = UINT8_MAX;
volatile int32_t x280 = INT32_MIN;
static int32_t t68 = 1;
int64_t x288 = INT64_MIN;
uint8_t x289 = 1U;
static int64_t x294 = -198438209538200LL;
int32_t t72 = -45;
volatile int32_t x300 = 94097;
int64_t t75 = -14887015LL;
static volatile uint64_t x318 = UINT64_MAX;
static uint8_t x321 = 5U;
uint8_t x328 = 97U;
int32_t t80 = -1;
volatile uint32_t x334 = UINT32_MAX;
int8_t x335 = 0;
static int32_t x338 = INT32_MAX;
int64_t x339 = -1187700507691220LL;
volatile int32_t t82 = 392;
int32_t x350 = -1;
int16_t x352 = INT16_MIN;
int8_t x353 = INT8_MIN;
static int32_t t86 = -29221;
int32_t t87 = 3439979;
uint16_t x362 = UINT16_MAX;
static int8_t x365 = -1;
uint32_t x366 = 0U;
static uint16_t x367 = 20U;
int8_t x376 = INT8_MIN;
uint8_t x377 = 0U;
int32_t x381 = INT32_MIN;
static int16_t x384 = INT16_MIN;
static uint16_t x389 = 838U;
static int64_t x395 = -66556LL;
uint64_t x398 = 588028LLU;
int32_t t96 = 234;
int16_t x402 = 5083;
uint32_t x404 = 81U;
volatile uint64_t x406 = 829787137298353LLU;
int64_t x409 = INT64_MIN;
volatile int32_t t99 = -16192;
static uint16_t x414 = 2992U;
volatile uint32_t x416 = 1027416214U;
int8_t x418 = -1;
int32_t x420 = -1101;
volatile int32_t x427 = -93;
int8_t x432 = 1;
uint32_t x439 = UINT32_MAX;
int16_t x441 = INT16_MAX;
static int32_t x446 = 437545967;
uint64_t x451 = UINT64_MAX;
static uint32_t x452 = 2013860U;
int8_t x460 = -1;
volatile int64_t t113 = 128144754450LL;
int8_t x470 = 0;
volatile uint32_t t116 = 220875U;
static int8_t x488 = INT8_MIN;
static volatile int32_t t118 = 1;
volatile int64_t x494 = INT64_MIN;
volatile int16_t x496 = -1;
volatile int32_t t120 = 14940;
volatile uint64_t x503 = UINT64_MAX;
int16_t x520 = INT16_MIN;
static volatile int32_t t126 = 1;
int32_t x532 = INT32_MAX;
volatile int32_t t129 = -1003680623;
volatile uint16_t x534 = 28524U;
volatile uint64_t x539 = 79883510480281LLU;
static int32_t t131 = -1;
uint32_t x555 = UINT32_MAX;
uint32_t x557 = 1935959U;
uint8_t x559 = 0U;
volatile int16_t x560 = INT16_MAX;
volatile int16_t x562 = 68;
volatile uint32_t x584 = 231297U;
volatile uint32_t t141 = 3U;
int16_t x591 = INT16_MIN;
static int32_t x602 = -3;
static uint64_t x609 = 2137593890074344404LLU;
int8_t x613 = INT8_MIN;
uint64_t x615 = 189337555455823989LLU;
volatile int32_t t149 = -928356;
volatile uint64_t x617 = 13193738LLU;
int32_t x619 = INT32_MIN;
int64_t x625 = -1LL;
int16_t x627 = 0;
int16_t x630 = -1;
static int64_t x632 = -1LL;
int16_t x637 = -1;
volatile int64_t x642 = -1LL;
volatile int32_t x644 = INT32_MAX;
static uint32_t x648 = 127250U;
volatile int8_t x654 = INT8_MAX;
int32_t x662 = -1;
int32_t t162 = -3602494;
int8_t x670 = INT8_MIN;
int32_t x671 = INT32_MAX;
static uint8_t x680 = 33U;
int32_t t165 = 3197;
static int32_t x682 = INT32_MIN;
uint64_t x683 = 10LLU;
volatile int8_t x697 = INT8_MIN;
uint32_t x706 = UINT32_MAX;
int64_t x713 = INT64_MAX;
int8_t x725 = INT8_MAX;
int64_t x730 = 46578669147LL;
int8_t x736 = INT8_MAX;
static int64_t x738 = INT64_MIN;
uint8_t x740 = 54U;
volatile int32_t x741 = INT32_MAX;
static int64_t t182 = 0LL;
uint16_t x749 = 18116U;
int16_t x750 = -1;
int64_t x761 = INT64_MIN;
int8_t x763 = 6;
volatile int64_t t186 = 3720374233LL;
uint8_t x777 = 37U;
uint32_t x780 = 13661827U;
volatile int8_t x784 = 4;
int64_t x786 = -1LL;
int64_t x787 = INT64_MAX;
int16_t x788 = 6269;
volatile int32_t t191 = -338610;
int16_t x789 = INT16_MAX;
static int64_t x798 = INT64_MAX;
int32_t t194 = -36858;
int32_t x801 = -1;
int64_t x802 = INT64_MIN;
volatile int64_t x807 = -1LL;
uint32_t x808 = UINT32_MAX;
volatile int16_t x809 = -143;
volatile int32_t t198 = 0;
volatile uint32_t x820 = UINT32_MAX;


void f0(void) {
    	uint16_t x1 = 2468U;
	int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	volatile uint32_t t0 = 37888261U;

    t0 = ((x1==(x2^x3))%x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 56817188;

    t1 = ((x5==(x6^x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	volatile int32_t t2 = 1;

    t2 = ((x9==(x10^x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 30;
	int64_t x14 = -31631LL;
	int64_t x15 = -101LL;

    t3 = ((x13==(x14^x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int8_t x19 = 11;
	static int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 58051740857248LL;

    t4 = ((x17==(x18^x19))%x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int32_t x22 = INT32_MAX;
	uint64_t x23 = UINT64_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 266950283;

    t5 = ((x21==(x22^x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int8_t x27 = -2;

    t6 = ((x25==(x26^x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = INT32_MIN;
	int64_t x34 = 469354759LL;
	uint16_t x35 = 723U;
	int64_t x36 = -1LL;
	int64_t t7 = -1538626865LL;

    t7 = ((x33==(x34^x35))%x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 661036959U;
	static volatile uint8_t x38 = 111U;
	volatile uint16_t x39 = 2595U;
	uint64_t x40 = 43LLU;

    t8 = ((x37==(x38^x39))%x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x42 = 36;
	int8_t x44 = 25;
	static int32_t t9 = 0;

    t9 = ((x41==(x42^x43))%x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x47 = 61;
	uint64_t x48 = 13425LLU;
	uint64_t t10 = 208040626LLU;

    t10 = ((x45==(x46^x47))%x48);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x49 = INT32_MIN;
	int8_t x50 = 5;
	volatile uint32_t x52 = 3856U;
	volatile uint32_t t11 = 5096994U;

    t11 = ((x49==(x50^x51))%x52);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = INT64_MAX;
	volatile int64_t x54 = -119653LL;
	volatile int16_t x55 = INT16_MIN;
	static volatile int32_t t12 = -386575450;

    t12 = ((x53==(x54^x55))%x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	int64_t x60 = -1LL;
	static int64_t t13 = -6LL;

    t13 = ((x57==(x58^x59))%x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x61 = -269030263970LL;
	int32_t x62 = 1;
	volatile uint32_t x63 = 1396120U;
	uint64_t x64 = 202521540LLU;
	volatile uint64_t t14 = 11681LLU;

    t14 = ((x61==(x62^x63))%x64);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = INT32_MIN;
	static uint32_t x66 = 16149U;
	volatile int32_t t15 = 1;

    t15 = ((x65==(x66^x67))%x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	int8_t x71 = -17;
	static volatile int64_t x72 = INT64_MIN;
	static volatile int64_t t16 = 231062005LL;

    t16 = ((x69==(x70^x71))%x72);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x74 = -4325;
	static volatile int32_t x75 = INT32_MIN;
	static uint8_t x76 = 127U;
	volatile int32_t t17 = 77590;

    t17 = ((x73==(x74^x75))%x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	static int32_t t18 = 25178169;

    t18 = ((x77==(x78^x79))%x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = INT64_MIN;
	int64_t x84 = 85717LL;
	int64_t t19 = -236247845643LL;

    t19 = ((x81==(x82^x83))%x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = 229397138401359LL;
	static uint8_t x86 = 3U;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 1U;
	static int32_t t20 = 54185310;

    t20 = ((x85==(x86^x87))%x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 49U;
	int8_t x91 = -11;
	static uint16_t x92 = UINT16_MAX;
	volatile int32_t t21 = -12820;

    t21 = ((x89==(x90^x91))%x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	int64_t x94 = 65331578214202258LL;
	int16_t x96 = 4;
	int32_t t22 = -2328;

    t22 = ((x93==(x94^x95))%x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = 411;
	uint16_t x98 = 173U;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t23 = -95746005;

    t23 = ((x97==(x98^x99))%x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x101 = -15;
	int32_t x102 = INT32_MIN;
	int8_t x103 = 7;
	int8_t x104 = INT8_MAX;

    t24 = ((x101==(x102^x103))%x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x108 = INT64_MAX;
	volatile int64_t t25 = 562072710589512LL;

    t25 = ((x105==(x106^x107))%x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 32130U;
	uint8_t x110 = 9U;
	uint64_t x112 = UINT64_MAX;
	uint64_t t26 = 7101962180LLU;

    t26 = ((x109==(x110^x111))%x112);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	static int64_t x114 = 14637427270276062LL;
	volatile int16_t x115 = INT16_MAX;
	int64_t x116 = -1LL;
	volatile int64_t t27 = 33493214LL;

    t27 = ((x113==(x114^x115))%x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 52U;
	int64_t x120 = INT64_MAX;
	int64_t t28 = 103903059027763628LL;

    t28 = ((x117==(x118^x119))%x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x122 = 28LLU;
	int64_t x123 = INT64_MAX;
	int64_t x124 = INT64_MAX;
	volatile int64_t t29 = 29635824580717055LL;

    t29 = ((x121==(x122^x123))%x124);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MAX;
	static volatile int16_t x126 = 14;
	int16_t x127 = 1;
	int32_t t30 = -113595994;

    t30 = ((x125==(x126^x127))%x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MAX;
	volatile int32_t x130 = INT32_MIN;
	int8_t x132 = INT8_MAX;

    t31 = ((x129==(x130^x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 3U;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 1;

    t32 = ((x133==(x134^x135))%x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	int16_t x139 = -897;
	int16_t x140 = -1;
	int32_t t33 = 1;

    t33 = ((x137==(x138^x139))%x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = INT64_MIN;
	volatile uint32_t t34 = 14U;

    t34 = ((x141==(x142^x143))%x144);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MIN;
	volatile uint64_t x147 = UINT64_MAX;
	uint32_t x148 = 12637U;
	uint32_t t35 = 333514048U;

    t35 = ((x145==(x146^x147))%x148);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x149 = -1;
	int8_t x150 = -1;
	volatile int64_t x151 = -6807142439LL;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t36 = 58141;

    t36 = ((x149==(x150^x151))%x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	uint64_t x155 = 504950815LLU;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = -57;

    t37 = ((x153==(x154^x155))%x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x158 = -1;
	volatile uint32_t x159 = 106899236U;
	uint8_t x160 = 3U;
	static int32_t t38 = 587153652;

    t38 = ((x157==(x158^x159))%x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x161 = 583984382122149LLU;
	uint16_t x162 = 3083U;
	uint64_t x163 = 866162494206241LLU;
	int8_t x164 = -1;
	int32_t t39 = -17884;

    t39 = ((x161==(x162^x163))%x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = UINT8_MAX;
	int8_t x166 = 4;
	int8_t x167 = -1;
	volatile int64_t x168 = -31386LL;
	volatile int64_t t40 = 66517650756976LL;

    t40 = ((x165==(x166^x167))%x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = -3;
	int16_t x171 = INT16_MIN;
	volatile int64_t x172 = 353383LL;
	int64_t t41 = -555290155164235LL;

    t41 = ((x169==(x170^x171))%x172);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x174 = INT8_MIN;
	int16_t x175 = 1212;

    t42 = ((x173==(x174^x175))%x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MIN;
	volatile int8_t x178 = -1;
	uint64_t x180 = 143720796951LLU;
	static volatile uint64_t t43 = 11935876374610428LLU;

    t43 = ((x177==(x178^x179))%x180);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x182 = 26910721459547523LLU;
	int8_t x183 = INT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = -6;

    t44 = ((x181==(x182^x183))%x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x185 = INT8_MIN;
	volatile uint8_t x187 = 20U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t45 = 3204;

    t45 = ((x185==(x186^x187))%x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x189 = -1;
	int32_t x190 = -119790;
	static int8_t x191 = INT8_MIN;
	uint64_t x192 = 6875697401745626578LLU;
	volatile uint64_t t46 = 56784363581LLU;

    t46 = ((x189==(x190^x191))%x192);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 61U;
	int16_t x194 = INT16_MIN;
	volatile int16_t x195 = INT16_MIN;
	volatile uint8_t x196 = 3U;
	volatile int32_t t47 = 0;

    t47 = ((x193==(x194^x195))%x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x198 = 4259LLU;
	static volatile uint64_t t48 = 198969784299497LLU;

    t48 = ((x197==(x198^x199))%x200);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x201 = UINT64_MAX;
	volatile int16_t x202 = -1;
	int32_t x203 = -1;
	int32_t x204 = -1;
	volatile int32_t t49 = 730849;

    t49 = ((x201==(x202^x203))%x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 481U;
	uint64_t x206 = 233035809317761LLU;
	int64_t x207 = 836176121937LL;
	volatile uint16_t x208 = 1361U;
	volatile int32_t t50 = -3;

    t50 = ((x205==(x206^x207))%x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = -5;
	int16_t x212 = INT16_MIN;
	int32_t t51 = 962;

    t51 = ((x209==(x210^x211))%x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MAX;
	static int16_t x214 = -1;
	static int16_t x215 = INT16_MAX;

    t52 = ((x213==(x214^x215))%x216);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = -1;
	static uint8_t x218 = 0U;
	int32_t x219 = -1;
	static int8_t x220 = INT8_MIN;

    t53 = ((x217==(x218^x219))%x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -1;
	uint64_t x222 = 325467LLU;
	int32_t x223 = INT32_MIN;
	static volatile uint16_t x224 = UINT16_MAX;
	int32_t t54 = -54924442;

    t54 = ((x221==(x222^x223))%x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x227 = INT64_MIN;
	int32_t x228 = 63307482;
	volatile int32_t t55 = -476;

    t55 = ((x225==(x226^x227))%x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = INT16_MIN;
	uint16_t x230 = 1U;
	int8_t x231 = -28;
	int16_t x232 = 2;
	int32_t t56 = -461597751;

    t56 = ((x229==(x230^x231))%x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MAX;
	static int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	static int32_t x236 = INT32_MAX;
	static int32_t t57 = 6074663;

    t57 = ((x233==(x234^x235))%x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x237 = 552347847844817482LLU;
	int64_t x238 = -1LL;
	static int64_t x239 = -1LL;
	int32_t x240 = INT32_MIN;
	volatile int32_t t58 = -653259;

    t58 = ((x237==(x238^x239))%x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -1;
	volatile int64_t x243 = -1LL;
	static uint16_t x244 = UINT16_MAX;
	int32_t t59 = 336;

    t59 = ((x241==(x242^x243))%x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x245 = 1U;
	int32_t x246 = -1115;
	int16_t x247 = -1;
	int32_t x248 = INT32_MIN;

    t60 = ((x245==(x246^x247))%x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x249 = 0U;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t61 = -2241122LL;

    t61 = ((x249==(x250^x251))%x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x254 = INT8_MIN;
	int8_t x256 = -12;

    t62 = ((x253==(x254^x255))%x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = INT64_MIN;
	static uint64_t x258 = 28770LLU;
	int16_t x259 = -202;
	int8_t x260 = -1;
	int32_t t63 = -15639;

    t63 = ((x257==(x258^x259))%x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = UINT8_MAX;
	volatile int64_t x262 = INT64_MIN;
	int16_t x264 = INT16_MAX;

    t64 = ((x261==(x262^x263))%x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x265 = -1LL;
	uint16_t x266 = 8908U;
	uint32_t x268 = UINT32_MAX;
	static uint32_t t65 = 102206718U;

    t65 = ((x265==(x266^x267))%x268);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = INT8_MIN;
	int16_t x270 = -12366;
	int16_t x272 = INT16_MIN;
	int32_t t66 = -548;

    t66 = ((x269==(x270^x271))%x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x273 = 3;
	uint64_t x274 = 138671870906005450LLU;
	volatile uint8_t x275 = 3U;
	int16_t x276 = 6917;
	volatile int32_t t67 = -217;

    t67 = ((x273==(x274^x275))%x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x277 = INT32_MIN;
	volatile int64_t x278 = INT64_MAX;
	int32_t x279 = INT32_MIN;

    t68 = ((x277==(x278^x279))%x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x281 = 624;
	int8_t x282 = INT8_MAX;
	static int32_t x283 = -1;
	volatile uint32_t x284 = 32U;
	uint32_t t69 = 1716U;

    t69 = ((x281==(x282^x283))%x284);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MIN;
	volatile int8_t x286 = 2;
	uint32_t x287 = 6262788U;
	int64_t t70 = 127337208998462393LL;

    t70 = ((x285==(x286^x287))%x288);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x290 = INT64_MAX;
	uint64_t x291 = 110LLU;
	static int8_t x292 = -1;
	volatile int32_t t71 = 24;

    t71 = ((x289==(x290^x291))%x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = -1;
	uint16_t x295 = 8573U;
	int8_t x296 = INT8_MIN;

    t72 = ((x293==(x294^x295))%x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int32_t t73 = -3625106;

    t73 = ((x297==(x298^x299))%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = -387214108738LL;
	int16_t x302 = -1;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t74 = 6857;

    t74 = ((x301==(x302^x303))%x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MAX;
	int64_t x312 = 992018LL;

    t75 = ((x309==(x310^x311))%x312);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = 35726972LL;
	volatile int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MIN;
	static volatile int16_t x316 = -1;
	static int32_t t76 = -3772;

    t76 = ((x313==(x314^x315))%x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x317 = INT8_MIN;
	uint8_t x319 = 0U;
	int32_t x320 = -149662;
	int32_t t77 = 29435396;

    t77 = ((x317==(x318^x319))%x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x322 = INT16_MIN;
	int32_t x323 = -1;
	static int8_t x324 = 10;
	volatile int32_t t78 = 196486;

    t78 = ((x321==(x322^x323))%x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = -1;
	int32_t x326 = -1489;
	int8_t x327 = INT8_MAX;
	volatile int32_t t79 = 15410;

    t79 = ((x325==(x326^x327))%x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x329 = 2U;
	int64_t x330 = INT64_MIN;
	static int64_t x331 = INT64_MIN;
	uint8_t x332 = 10U;

    t80 = ((x329==(x330^x331))%x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x333 = 128057701178573269LLU;
	volatile int16_t x336 = INT16_MIN;
	int32_t t81 = 49;

    t81 = ((x333==(x334^x335))%x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x337 = 2938023U;
	int32_t x340 = INT32_MIN;

    t82 = ((x337==(x338^x339))%x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = 159;
	int16_t x342 = INT16_MIN;
	int32_t x343 = 167427;
	int16_t x344 = INT16_MIN;
	int32_t t83 = 68;

    t83 = ((x341==(x342^x343))%x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x345 = UINT8_MAX;
	volatile uint64_t x346 = UINT64_MAX;
	static int16_t x347 = -112;
	int16_t x348 = INT16_MIN;
	int32_t t84 = 197;

    t84 = ((x345==(x346^x347))%x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x349 = 0;
	int8_t x351 = INT8_MAX;
	int32_t t85 = 1;

    t85 = ((x349==(x350^x351))%x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x354 = INT16_MAX;
	int32_t x355 = -1;
	volatile int8_t x356 = 2;

    t86 = ((x353==(x354^x355))%x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x357 = 2020533U;
	int32_t x358 = INT32_MIN;
	volatile int32_t x359 = -1;
	uint16_t x360 = UINT16_MAX;

    t87 = ((x357==(x358^x359))%x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = UINT32_MAX;
	int8_t x363 = 28;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t88 = 81LL;

    t88 = ((x361==(x362^x363))%x364);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x368 = INT64_MIN;
	static volatile int64_t t89 = 1LL;

    t89 = ((x365==(x366^x367))%x368);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x373 = INT16_MIN;
	static int16_t x374 = INT16_MIN;
	int16_t x375 = 89;
	volatile int32_t t90 = 904859;

    t90 = ((x373==(x374^x375))%x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	static int16_t x380 = 13265;
	int32_t t91 = -1;

    t91 = ((x377==(x378^x379))%x380);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x382 = 119LLU;
	int8_t x383 = 0;
	int32_t t92 = -410501;

    t92 = ((x381==(x382^x383))%x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MIN;
	static int8_t x386 = 19;
	volatile int8_t x387 = INT8_MIN;
	static volatile int16_t x388 = -1;
	int32_t t93 = -4309707;

    t93 = ((x385==(x386^x387))%x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x390 = UINT32_MAX;
	static volatile uint8_t x391 = UINT8_MAX;
	uint16_t x392 = 849U;
	volatile int32_t t94 = -31582247;

    t94 = ((x389==(x390^x391))%x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x393 = 26281U;
	static int16_t x394 = INT16_MIN;
	uint32_t x396 = 217U;
	uint32_t t95 = 33903095U;

    t95 = ((x393==(x394^x395))%x396);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x397 = 234572LLU;
	volatile uint16_t x399 = 176U;
	static volatile int8_t x400 = 1;

    t96 = ((x397==(x398^x399))%x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x401 = INT16_MIN;
	uint16_t x403 = 57U;
	volatile uint32_t t97 = 430075U;

    t97 = ((x401==(x402^x403))%x404);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = 0;
	static int64_t x407 = INT64_MAX;
	int16_t x408 = -1;
	volatile int32_t t98 = -2336714;

    t98 = ((x405==(x406^x407))%x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x410 = INT8_MIN;
	int64_t x411 = -20990891LL;
	volatile uint16_t x412 = 14877U;

    t99 = ((x409==(x410^x411))%x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x413 = 3;
	static int32_t x415 = INT32_MAX;
	volatile uint32_t t100 = 2U;

    t100 = ((x413==(x414^x415))%x416);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x417 = INT8_MIN;
	static int64_t x419 = -1LL;
	int32_t t101 = -6;

    t101 = ((x417==(x418^x419))%x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = 0U;
	int8_t x422 = INT8_MIN;
	static uint32_t x423 = 9815467U;
	static volatile int16_t x424 = INT16_MAX;
	volatile int32_t t102 = 11444370;

    t102 = ((x421==(x422^x423))%x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x425 = UINT8_MAX;
	int32_t x426 = INT32_MAX;
	uint8_t x428 = 4U;
	static volatile int32_t t103 = 234;

    t103 = ((x425==(x426^x427))%x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x429 = -7;
	int16_t x430 = -1101;
	int16_t x431 = INT16_MIN;
	static volatile int32_t t104 = 28215241;

    t104 = ((x429==(x430^x431))%x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -87LL;
	int8_t x434 = 29;
	int16_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	int32_t t105 = -594752;

    t105 = ((x433==(x434^x435))%x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x437 = 9111529029860138986LLU;
	int8_t x438 = INT8_MIN;
	static uint16_t x440 = UINT16_MAX;
	int32_t t106 = -144033;

    t106 = ((x437==(x438^x439))%x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x442 = 197;
	int64_t x443 = INT64_MIN;
	int64_t x444 = INT64_MIN;
	int64_t t107 = -1007276906162194LL;

    t107 = ((x441==(x442^x443))%x444);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = -1;
	static int16_t x447 = 408;
	int16_t x448 = -299;
	int32_t t108 = 1004;

    t108 = ((x445==(x446^x447))%x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = -1;
	int32_t x450 = INT32_MIN;
	volatile uint32_t t109 = 693428898U;

    t109 = ((x449==(x450^x451))%x452);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x453 = 12839329U;
	uint64_t x454 = UINT64_MAX;
	uint8_t x455 = 5U;
	volatile uint8_t x456 = 21U;
	int32_t t110 = -10473665;

    t110 = ((x453==(x454^x455))%x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x457 = UINT32_MAX;
	uint64_t x458 = UINT64_MAX;
	int32_t x459 = INT32_MIN;
	static int32_t t111 = 12824384;

    t111 = ((x457==(x458^x459))%x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x461 = INT8_MAX;
	static int16_t x462 = INT16_MAX;
	static int16_t x463 = -1;
	int64_t x464 = 332LL;
	volatile int64_t t112 = -1584360LL;

    t112 = ((x461==(x462^x463))%x464);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = INT8_MAX;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = INT64_MIN;
	int64_t x468 = 132617456LL;

    t113 = ((x465==(x466^x467))%x468);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x469 = -1;
	int32_t x471 = -1;
	int64_t x472 = INT64_MIN;
	int64_t t114 = 808618443970225052LL;

    t114 = ((x469==(x470^x471))%x472);

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x473 = -1;
	int64_t x474 = INT64_MAX;
	int64_t x475 = INT64_MIN;
	uint8_t x476 = 11U;
	volatile int32_t t115 = -26188769;

    t115 = ((x473==(x474^x475))%x476);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 47U;
	uint16_t x478 = UINT16_MAX;
	volatile int64_t x479 = INT64_MIN;
	uint32_t x480 = 34U;

    t116 = ((x477==(x478^x479))%x480);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = 3LLU;
	int64_t x482 = INT64_MAX;
	int8_t x483 = 1;
	static int64_t x484 = INT64_MIN;
	volatile int64_t t117 = 1559LL;

    t117 = ((x481==(x482^x483))%x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MAX;
	int8_t x486 = -1;
	volatile int8_t x487 = -1;

    t118 = ((x485==(x486^x487))%x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = -1;
	volatile int8_t x490 = INT8_MIN;
	int32_t x491 = -125886;
	int16_t x492 = -1;
	volatile int32_t t119 = 2054;

    t119 = ((x489==(x490^x491))%x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x493 = UINT16_MAX;
	int64_t x495 = -2690LL;

    t120 = ((x493==(x494^x495))%x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = INT32_MIN;
	static uint64_t x498 = 2992222711470413232LLU;
	int64_t x499 = -1LL;
	static uint32_t x500 = 2U;
	uint32_t t121 = 281U;

    t121 = ((x497==(x498^x499))%x500);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x501 = 1638326;
	volatile int32_t x502 = 277177127;
	int32_t x504 = -1;
	int32_t t122 = 62267582;

    t122 = ((x501==(x502^x503))%x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = INT64_MIN;
	static volatile uint8_t x506 = UINT8_MAX;
	int32_t x507 = INT32_MAX;
	int64_t x508 = INT64_MIN;
	volatile int64_t t123 = -41LL;

    t123 = ((x505==(x506^x507))%x508);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x509 = 126927417U;
	int32_t x510 = INT32_MIN;
	int32_t x511 = INT32_MAX;
	int32_t x512 = INT32_MIN;
	volatile int32_t t124 = 141;

    t124 = ((x509==(x510^x511))%x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x513 = -1;
	int16_t x514 = -246;
	int32_t x515 = -1;
	uint8_t x516 = 40U;
	volatile int32_t t125 = -486;

    t125 = ((x513==(x514^x515))%x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x517 = INT32_MIN;
	static volatile uint64_t x518 = 61618142350163304LLU;
	static int16_t x519 = 82;

    t126 = ((x517==(x518^x519))%x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x521 = INT64_MAX;
	volatile int8_t x522 = -1;
	uint64_t x523 = UINT64_MAX;
	volatile int16_t x524 = 3306;
	int32_t t127 = 57554237;

    t127 = ((x521==(x522^x523))%x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x525 = INT32_MIN;
	static uint32_t x526 = 1788919U;
	int8_t x527 = INT8_MIN;
	int64_t x528 = -1LL;
	int64_t t128 = -3LL;

    t128 = ((x525==(x526^x527))%x528);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = 0;
	uint32_t x530 = UINT32_MAX;
	uint16_t x531 = 101U;

    t129 = ((x529==(x530^x531))%x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x533 = INT8_MAX;
	int8_t x535 = 63;
	uint64_t x536 = 359892756713821575LLU;
	static uint64_t t130 = 214574LLU;

    t130 = ((x533==(x534^x535))%x536);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x537 = 965U;
	int8_t x538 = 28;
	int8_t x540 = INT8_MIN;

    t131 = ((x537==(x538^x539))%x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x541 = 3U;
	int8_t x542 = INT8_MAX;
	int8_t x543 = -1;
	int8_t x544 = 7;
	int32_t t132 = -271454764;

    t132 = ((x541==(x542^x543))%x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x549 = INT16_MAX;
	int64_t x550 = INT64_MIN;
	uint32_t x551 = UINT32_MAX;
	volatile int16_t x552 = 124;
	volatile int32_t t133 = -2;

    t133 = ((x549==(x550^x551))%x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MIN;
	static uint32_t x556 = 103U;
	volatile uint32_t t134 = 3U;

    t134 = ((x553==(x554^x555))%x556);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x558 = INT64_MAX;
	volatile int32_t t135 = -24730;

    t135 = ((x557==(x558^x559))%x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x561 = UINT16_MAX;
	static int16_t x563 = -1;
	static int16_t x564 = INT16_MAX;
	static int32_t t136 = -240;

    t136 = ((x561==(x562^x563))%x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x565 = INT16_MAX;
	volatile int8_t x566 = -1;
	int16_t x567 = -1;
	int64_t x568 = INT64_MIN;
	int64_t t137 = 8LL;

    t137 = ((x565==(x566^x567))%x568);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = 3668897U;
	volatile int32_t x570 = INT32_MIN;
	int64_t x571 = INT64_MIN;
	int64_t x572 = INT64_MAX;
	int64_t t138 = 9231982398600430LL;

    t138 = ((x569==(x570^x571))%x572);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = 1;
	int32_t x574 = INT32_MIN;
	static uint64_t x575 = 60598436608384LLU;
	int16_t x576 = -1;
	volatile int32_t t139 = 6847;

    t139 = ((x573==(x574^x575))%x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x577 = UINT8_MAX;
	int8_t x578 = INT8_MIN;
	int32_t x579 = INT32_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t140 = -1;

    t140 = ((x577==(x578^x579))%x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x581 = 203U;
	static uint32_t x582 = 3731U;
	int8_t x583 = -1;

    t141 = ((x581==(x582^x583))%x584);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x585 = -340;
	volatile uint32_t x586 = 1U;
	int32_t x587 = -1;
	volatile int8_t x588 = INT8_MIN;
	static volatile int32_t t142 = 958937;

    t142 = ((x585==(x586^x587))%x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = 1047316355LLU;
	int8_t x590 = -3;
	static int32_t x592 = INT32_MIN;
	static volatile int32_t t143 = 13666989;

    t143 = ((x589==(x590^x591))%x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x593 = UINT64_MAX;
	int8_t x594 = 0;
	int16_t x595 = 4;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t144 = 636710148;

    t144 = ((x593==(x594^x595))%x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = INT16_MIN;
	volatile uint64_t x598 = 0LLU;
	int32_t x599 = 2460;
	static uint8_t x600 = 11U;
	static volatile int32_t t145 = -7;

    t145 = ((x597==(x598^x599))%x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x601 = 3U;
	int64_t x603 = INT64_MAX;
	int64_t x604 = INT64_MIN;
	volatile int64_t t146 = -4593957397489833LL;

    t146 = ((x601==(x602^x603))%x604);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x605 = INT32_MIN;
	uint64_t x606 = 211017443LLU;
	int8_t x607 = -1;
	int8_t x608 = INT8_MIN;
	volatile int32_t t147 = -457368;

    t147 = ((x605==(x606^x607))%x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	volatile int64_t x612 = 40LL;
	int64_t t148 = -222LL;

    t148 = ((x609==(x610^x611))%x612);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x614 = 725656534862LLU;
	int8_t x616 = INT8_MAX;

    t149 = ((x613==(x614^x615))%x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x618 = INT64_MIN;
	uint16_t x620 = UINT16_MAX;
	int32_t t150 = -149788;

    t150 = ((x617==(x618^x619))%x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = INT64_MAX;
	static int8_t x622 = INT8_MAX;
	volatile int16_t x623 = -1;
	int64_t x624 = -1LL;
	volatile int64_t t151 = -105691670018970LL;

    t151 = ((x621==(x622^x623))%x624);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x626 = INT16_MIN;
	uint64_t x628 = UINT64_MAX;
	uint64_t t152 = 125306LLU;

    t152 = ((x625==(x626^x627))%x628);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x629 = UINT32_MAX;
	int64_t x631 = INT64_MAX;
	volatile int64_t t153 = 9356003436LL;

    t153 = ((x629==(x630^x631))%x632);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x633 = 0;
	int32_t x634 = 15618944;
	int32_t x635 = INT32_MAX;
	static int64_t x636 = -1835LL;
	static int64_t t154 = -1997482237665LL;

    t154 = ((x633==(x634^x635))%x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x638 = UINT32_MAX;
	static int64_t x639 = INT64_MAX;
	int64_t x640 = -1LL;
	volatile int64_t t155 = -56LL;

    t155 = ((x637==(x638^x639))%x640);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x641 = INT32_MIN;
	volatile int8_t x643 = -1;
	int32_t t156 = -14;

    t156 = ((x641==(x642^x643))%x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int8_t x646 = 9;
	int8_t x647 = -1;
	uint32_t t157 = 60U;

    t157 = ((x645==(x646^x647))%x648);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = -48591LL;
	volatile int64_t x651 = INT64_MIN;
	int16_t x652 = INT16_MAX;
	static int32_t t158 = -2766553;

    t158 = ((x649==(x650^x651))%x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x653 = -535913702;
	int64_t x655 = 3745970469944LL;
	int32_t x656 = INT32_MIN;
	int32_t t159 = -957470020;

    t159 = ((x653==(x654^x655))%x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x657 = 5U;
	int16_t x658 = INT16_MIN;
	static int8_t x659 = 1;
	uint16_t x660 = 113U;
	static int32_t t160 = -74;

    t160 = ((x657==(x658^x659))%x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x661 = 487939383356LLU;
	int32_t x663 = INT32_MIN;
	static uint16_t x664 = UINT16_MAX;
	volatile int32_t t161 = -6674;

    t161 = ((x661==(x662^x663))%x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x665 = -1;
	uint8_t x666 = UINT8_MAX;
	uint16_t x667 = UINT16_MAX;
	static int8_t x668 = INT8_MIN;

    t162 = ((x665==(x666^x667))%x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x669 = 2126387292788077365LLU;
	int8_t x672 = -1;
	int32_t t163 = -310;

    t163 = ((x669==(x670^x671))%x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x673 = 80;
	static int64_t x674 = 163643LL;
	int32_t x675 = INT32_MAX;
	uint8_t x676 = 2U;
	volatile int32_t t164 = -1081381;

    t164 = ((x673==(x674^x675))%x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x677 = -20995LL;
	static uint8_t x678 = 10U;
	static int16_t x679 = INT16_MAX;

    t165 = ((x677==(x678^x679))%x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x681 = INT8_MAX;
	volatile int32_t x684 = INT32_MIN;
	volatile int32_t t166 = -187775443;

    t166 = ((x681==(x682^x683))%x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x685 = 243993U;
	int64_t x686 = -214867040311298LL;
	int32_t x687 = -89933498;
	uint8_t x688 = UINT8_MAX;
	int32_t t167 = -1381;

    t167 = ((x685==(x686^x687))%x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = INT32_MIN;
	static int8_t x690 = -1;
	volatile uint8_t x691 = 13U;
	int32_t x692 = INT32_MAX;
	int32_t t168 = -316985071;

    t168 = ((x689==(x690^x691))%x692);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x693 = 36;
	static int64_t x694 = INT64_MIN;
	uint8_t x695 = 1U;
	int8_t x696 = -1;
	volatile int32_t t169 = -4511;

    t169 = ((x693==(x694^x695))%x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x698 = INT32_MIN;
	volatile uint32_t x699 = 1636U;
	int32_t x700 = INT32_MAX;
	volatile int32_t t170 = -427;

    t170 = ((x697==(x698^x699))%x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = -198;
	volatile int8_t x702 = -1;
	int32_t x703 = INT32_MIN;
	uint64_t x704 = 374699249992LLU;
	uint64_t t171 = 7052407LLU;

    t171 = ((x701==(x702^x703))%x704);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x705 = INT64_MAX;
	volatile int64_t x707 = INT64_MAX;
	int32_t x708 = INT32_MAX;
	volatile int32_t t172 = 1;

    t172 = ((x705==(x706^x707))%x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x709 = UINT64_MAX;
	static int32_t x710 = INT32_MAX;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = INT32_MAX;
	int32_t t173 = 3;

    t173 = ((x709==(x710^x711))%x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x714 = -1LL;
	uint64_t x715 = 187261216386760LLU;
	int16_t x716 = 3;
	volatile int32_t t174 = -4;

    t174 = ((x713==(x714^x715))%x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x717 = 377LLU;
	static int64_t x718 = 20447LL;
	volatile uint8_t x719 = UINT8_MAX;
	volatile int8_t x720 = 38;
	volatile int32_t t175 = -1;

    t175 = ((x717==(x718^x719))%x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x721 = INT8_MAX;
	int32_t x722 = -732;
	uint8_t x723 = UINT8_MAX;
	int64_t x724 = -1LL;
	int64_t t176 = -4666LL;

    t176 = ((x721==(x722^x723))%x724);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x726 = INT32_MIN;
	int64_t x727 = INT64_MAX;
	int8_t x728 = INT8_MIN;
	volatile int32_t t177 = 37;

    t177 = ((x725==(x726^x727))%x728);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x729 = 44U;
	int8_t x731 = INT8_MIN;
	int8_t x732 = -1;
	int32_t t178 = -136603;

    t178 = ((x729==(x730^x731))%x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = INT64_MIN;
	uint16_t x734 = 68U;
	volatile int32_t x735 = INT32_MIN;
	int32_t t179 = 439830600;

    t179 = ((x733==(x734^x735))%x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	int64_t x739 = INT64_MIN;
	volatile int32_t t180 = 4;

    t180 = ((x737==(x738^x739))%x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x742 = INT8_MIN;
	volatile uint16_t x743 = 53U;
	int8_t x744 = -15;
	volatile int32_t t181 = 2046;

    t181 = ((x741==(x742^x743))%x744);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x745 = -1;
	volatile int8_t x746 = -1;
	int16_t x747 = INT16_MAX;
	static int64_t x748 = INT64_MIN;

    t182 = ((x745==(x746^x747))%x748);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x751 = UINT16_MAX;
	volatile int16_t x752 = INT16_MIN;
	volatile int32_t t183 = -342;

    t183 = ((x749==(x750^x751))%x752);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x753 = INT16_MIN;
	uint8_t x754 = UINT8_MAX;
	int32_t x755 = -697;
	static int32_t x756 = INT32_MIN;
	volatile int32_t t184 = -50;

    t184 = ((x753==(x754^x755))%x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x757 = -1LL;
	uint32_t x758 = UINT32_MAX;
	int32_t x759 = 1;
	static uint64_t x760 = 664154594664LLU;
	static uint64_t t185 = 665LLU;

    t185 = ((x757==(x758^x759))%x760);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x762 = INT8_MIN;
	int64_t x764 = 5451364082LL;

    t186 = ((x761==(x762^x763))%x764);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x765 = INT8_MIN;
	int16_t x766 = 1;
	int32_t x767 = INT32_MIN;
	int16_t x768 = INT16_MIN;
	int32_t t187 = 1069;

    t187 = ((x765==(x766^x767))%x768);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x773 = UINT16_MAX;
	static int8_t x774 = INT8_MAX;
	uint64_t x775 = 6818349628675816LLU;
	static uint8_t x776 = 42U;
	volatile int32_t t188 = 3;

    t188 = ((x773==(x774^x775))%x776);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x778 = 5U;
	static int64_t x779 = 682LL;
	volatile uint32_t t189 = 3U;

    t189 = ((x777==(x778^x779))%x780);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x781 = 38;
	uint16_t x782 = 254U;
	uint8_t x783 = 1U;
	int32_t t190 = -39392;

    t190 = ((x781==(x782^x783))%x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x785 = 0U;

    t191 = ((x785==(x786^x787))%x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x790 = INT64_MAX;
	uint16_t x791 = 3712U;
	uint16_t x792 = 226U;
	static volatile int32_t t192 = -4941149;

    t192 = ((x789==(x790^x791))%x792);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x793 = INT32_MIN;
	volatile int32_t x794 = -1;
	static uint8_t x795 = 13U;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t193 = -2872019;

    t193 = ((x793==(x794^x795))%x796);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x797 = INT8_MAX;
	int16_t x799 = INT16_MIN;
	uint16_t x800 = UINT16_MAX;

    t194 = ((x797==(x798^x799))%x800);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x803 = -10660562787LL;
	volatile uint64_t x804 = 372LLU;
	uint64_t t195 = 2509250973394978LLU;

    t195 = ((x801==(x802^x803))%x804);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x805 = 13U;
	static volatile int8_t x806 = INT8_MAX;
	uint32_t t196 = 34U;

    t196 = ((x805==(x806^x807))%x808);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x810 = -1;
	static int32_t x811 = 120565;
	int64_t x812 = INT64_MIN;
	int64_t t197 = 53LL;

    t197 = ((x809==(x810^x811))%x812);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x813 = 13770504U;
	int16_t x814 = -1;
	int8_t x815 = INT8_MAX;
	int8_t x816 = INT8_MAX;

    t198 = ((x813==(x814^x815))%x816);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x817 = -1627915691568864972LL;
	int8_t x818 = INT8_MIN;
	int16_t x819 = INT16_MIN;
	static volatile uint32_t t199 = 13U;

    t199 = ((x817==(x818^x819))%x820);

    if (t199 != 0U) { NG(); } else { ; }
	
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

