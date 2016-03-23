
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
int32_t t1 = INT32_MAX;
uint32_t t2 = 387492202U;
int8_t x16 = INT8_MIN;
static volatile int32_t t5 = 5;
uint64_t x26 = 569721458224631707LLU;
uint32_t t6 = 3040U;
int64_t x29 = -3179LL;
int32_t t7 = 6724335;
int64_t x37 = INT64_MIN;
uint8_t x40 = 60U;
uint16_t x43 = 423U;
uint8_t x44 = UINT8_MAX;
int32_t t10 = -1;
uint16_t x56 = 22U;
static volatile int32_t t13 = -129848;
uint64_t t14 = 551636221590232LLU;
int16_t x70 = INT16_MIN;
int64_t x74 = INT64_MIN;
volatile int64_t x80 = INT64_MAX;
uint8_t x81 = UINT8_MAX;
int64_t x83 = INT64_MAX;
uint32_t x88 = 16130U;
uint8_t x92 = 9U;
volatile int16_t x99 = -1;
int32_t x101 = -1;
int8_t x102 = INT8_MIN;
int32_t t24 = 7866;
int64_t x107 = INT64_MIN;
static volatile int32_t t25 = 28;
static uint8_t x109 = 26U;
static uint32_t x117 = 1392283U;
volatile int32_t t29 = INT32_MAX;
static int64_t x127 = -623323265LL;
static volatile int32_t t30 = 222409;
static int32_t x139 = INT32_MAX;
volatile int16_t x148 = INT16_MAX;
volatile uint16_t x149 = UINT16_MAX;
uint64_t x158 = 4141889LLU;
static int64_t x170 = -43695243262830257LL;
static int64_t x171 = -1LL;
volatile int16_t x174 = INT16_MIN;
int64_t x176 = -13995690LL;
int8_t x180 = -9;
volatile int16_t x183 = -2880;
volatile int64_t x195 = INT64_MIN;
int8_t x197 = INT8_MIN;
uint8_t x198 = UINT8_MAX;
static int16_t x201 = INT16_MIN;
int64_t x202 = INT64_MIN;
int32_t x206 = INT32_MAX;
uint64_t x210 = 203193LLU;
int64_t x212 = -1LL;
static int16_t x223 = 1;
static volatile uint64_t x230 = 173961670155782298LLU;
volatile int32_t t55 = 615602;
int32_t x233 = INT32_MAX;
int8_t x235 = INT8_MIN;
volatile int32_t t56 = -22946;
int64_t x243 = 86136826548762184LL;
int8_t x251 = INT8_MIN;
int8_t x253 = INT8_MIN;
volatile int32_t t61 = 1372493;
static volatile int32_t x257 = -876183161;
static int16_t x258 = -952;
static uint8_t x265 = 2U;
int32_t x269 = -1;
int8_t x270 = INT8_MAX;
static int64_t x279 = INT64_MAX;
volatile uint64_t t67 = 20486000018618857LLU;
volatile int32_t t69 = -3;
int64_t x300 = 94873652LL;
volatile int64_t t72 = -1327924853692512250LL;
uint64_t x302 = 117662600631848LLU;
int8_t x304 = -1;
static int8_t x307 = INT8_MIN;
int64_t x308 = 53010995LL;
int32_t x312 = INT32_MAX;
int64_t x313 = INT64_MAX;
volatile int32_t x316 = INT32_MAX;
volatile int32_t t76 = INT32_MAX;
uint32_t x325 = 16485373U;
static volatile int32_t x329 = INT32_MAX;
uint8_t x330 = 13U;
int32_t x334 = -12;
volatile int64_t x337 = INT64_MAX;
int16_t x338 = INT16_MAX;
static int32_t t83 = 20116550;
volatile int16_t x363 = INT16_MAX;
int16_t x376 = -1;
volatile int32_t t91 = -62099;
int8_t x379 = INT8_MAX;
int16_t x385 = 4;
int64_t x387 = INT64_MIN;
uint16_t x390 = 19399U;
int64_t x396 = -162766745938708LL;
static int64_t x398 = INT64_MIN;
int8_t x399 = -18;
int32_t x412 = 0;
volatile int32_t x415 = INT32_MIN;
uint32_t t101 = 6146577U;
static uint64_t t102 = 49611983745918LLU;
static int8_t x423 = INT8_MIN;
int32_t t104 = -27630;
int8_t x431 = INT8_MIN;
volatile uint16_t x432 = 15U;
volatile uint64_t t106 = UINT64_MAX;
int16_t x441 = 1549;
int64_t x449 = INT64_MAX;
static volatile int8_t x453 = INT8_MIN;
volatile int32_t x462 = INT32_MIN;
uint16_t x478 = UINT16_MAX;
int32_t x479 = -1;
volatile int16_t x492 = INT16_MIN;
uint16_t x496 = 109U;
uint16_t x498 = 26245U;
int32_t t121 = -46971;
static volatile int16_t x502 = -1;
volatile uint64_t x506 = 209590877LLU;
uint16_t x511 = 69U;
uint64_t x513 = UINT64_MAX;
int32_t x517 = INT32_MAX;
int64_t x518 = 80LL;
uint8_t x520 = UINT8_MAX;
int16_t x521 = -59;
volatile int32_t x523 = -1;
int32_t t127 = 1123;
int8_t x528 = INT8_MIN;
volatile int8_t x529 = INT8_MIN;
static int8_t x531 = INT8_MIN;
volatile int16_t x544 = INT16_MAX;
int8_t x545 = INT8_MAX;
int64_t x548 = 36LL;
static int64_t t133 = 519280LL;
uint32_t x549 = UINT32_MAX;
int32_t t136 = -297;
uint64_t x563 = UINT64_MAX;
static int32_t x564 = INT32_MIN;
static int32_t t137 = INT32_MIN;
static int32_t x570 = -1;
volatile int32_t t139 = 108923;
static int32_t x573 = INT32_MIN;
static uint64_t x577 = 292265971991LLU;
int32_t x580 = INT32_MIN;
static volatile int16_t x582 = -816;
uint32_t x583 = 12U;
volatile int64_t t142 = INT64_MIN;
int64_t x586 = INT64_MIN;
int8_t x591 = INT8_MAX;
static volatile uint8_t x592 = 9U;
int32_t x593 = INT32_MAX;
static volatile int32_t t146 = 1;
int32_t x602 = 23;
int64_t x607 = INT64_MAX;
volatile int32_t t148 = -1671240;
uint64_t t149 = 159773803595LLU;
int64_t x613 = INT64_MIN;
int16_t x625 = INT16_MIN;
volatile int32_t t154 = 16659;
int64_t x633 = INT64_MIN;
int16_t x640 = 11362;
int32_t t157 = 1;
static volatile uint64_t x667 = 2LLU;
int16_t x682 = INT16_MIN;
volatile int8_t x683 = -1;
int32_t x693 = -1;
static volatile int32_t x705 = INT32_MAX;
int16_t x706 = 32;
volatile int32_t t172 = INT32_MAX;
uint16_t x709 = UINT16_MAX;
int8_t x716 = -7;
int32_t t174 = 131831066;
static int64_t x718 = 12987389879827LL;
int8_t x725 = -1;
uint64_t x733 = UINT64_MAX;
int32_t x734 = -1;
uint8_t x737 = 7U;
static volatile int64_t t180 = INT64_MAX;
int16_t x743 = INT16_MIN;
static volatile uint64_t x744 = UINT64_MAX;
volatile uint64_t t181 = UINT64_MAX;
static volatile int16_t x747 = INT16_MIN;
int8_t x749 = 0;
static int64_t x752 = 4262590514466LL;
int64_t x753 = -4040446513LL;
static uint64_t x756 = 450951777796LLU;
static int16_t x768 = INT16_MIN;
static int32_t x782 = INT32_MIN;
volatile int32_t x786 = -1;
uint32_t x789 = UINT32_MAX;
uint32_t t193 = 528U;
int8_t x795 = INT8_MAX;
int8_t x797 = INT8_MIN;
int32_t x798 = -1;
volatile int32_t t195 = -774994;
volatile int32_t t196 = -426020924;
volatile uint64_t x810 = UINT64_MAX;
volatile int32_t x813 = 12384257;
volatile uint8_t x815 = 44U;
uint32_t t199 = UINT32_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile uint16_t x2 = UINT16_MAX;
	static int8_t x3 = -1;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = -983167449709892633LL;

    t0 = ((x1==(x2/x3))|x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 42306U;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;

    t1 = ((x5==(x6/x7))|x8);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	uint64_t x10 = UINT64_MAX;
	volatile int16_t x11 = INT16_MIN;
	static volatile uint32_t x12 = 214023551U;

    t2 = ((x9==(x10/x11))|x12);

    if (t2 != 214023551U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int32_t x14 = -3414444;
	static int8_t x15 = -19;
	volatile int32_t t3 = -17;

    t3 = ((x13==(x14/x15))|x16);

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 377275928537249LLU;
	int8_t x18 = 0;
	int32_t x19 = -16330;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 137;

    t4 = ((x17==(x18/x19))|x20);

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1853019089U;
	int8_t x22 = INT8_MAX;
	static uint64_t x23 = 153543416863737LLU;
	static volatile int8_t x24 = INT8_MIN;

    t5 = ((x21==(x22/x23))|x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint16_t x27 = 111U;
	volatile uint32_t x28 = 7U;

    t6 = ((x25==(x26/x27))|x28);

    if (t6 != 7U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 6475050U;
	uint16_t x31 = 116U;
	int8_t x32 = INT8_MIN;

    t7 = ((x29==(x30/x31))|x32);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	int32_t x34 = -607827;
	uint64_t x35 = 5952776423595LLU;
	int64_t x36 = -888LL;
	static int64_t t8 = -16918665378004LL;

    t8 = ((x33==(x34/x35))|x36);

    if (t8 != -888LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MAX;
	static volatile int32_t t9 = 2088078;

    t9 = ((x37==(x38/x39))|x40);

    if (t9 != 60) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MAX;
	static uint64_t x42 = 2080257794LLU;

    t10 = ((x41==(x42/x43))|x44);

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile int32_t x46 = INT32_MIN;
	static uint16_t x47 = 215U;
	static volatile uint8_t x48 = 119U;
	volatile int32_t t11 = 25792068;

    t11 = ((x45==(x46/x47))|x48);

    if (t11 != 119) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int32_t x50 = 24219;
	uint64_t x51 = 57LLU;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = INT32_MIN;

    t12 = ((x49==(x50/x51))|x52);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x53 = INT32_MIN;
	uint16_t x54 = 14U;
	uint16_t x55 = 647U;

    t13 = ((x53==(x54/x55))|x56);

    if (t13 != 22) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 22095520U;
	static int32_t x58 = -1;
	static uint32_t x59 = 60U;
	uint64_t x60 = 58977686LLU;

    t14 = ((x57==(x58/x59))|x60);

    if (t14 != 58977686LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 0;
	static int16_t x66 = 46;
	volatile int16_t x67 = -1;
	volatile uint8_t x68 = 46U;
	volatile int32_t t15 = 0;

    t15 = ((x65==(x66/x67))|x68);

    if (t15 != 46) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = UINT64_MAX;
	volatile uint32_t x71 = 343285964U;
	int16_t x72 = INT16_MAX;
	volatile int32_t t16 = -26482;

    t16 = ((x69==(x70/x71))|x72);

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	static uint32_t x75 = 1419U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

    t17 = ((x73==(x74/x75))|x76);

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 27127132937502635LLU;
	uint32_t x78 = 1271U;
	uint8_t x79 = UINT8_MAX;
	volatile int64_t t18 = INT64_MAX;

    t18 = ((x77==(x78/x79))|x80);

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x82 = -3075756;
	int64_t x84 = INT64_MIN;
	int64_t t19 = INT64_MIN;

    t19 = ((x81==(x82/x83))|x84);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x85 = 29U;
	volatile uint64_t x86 = 416268000LLU;
	int16_t x87 = INT16_MIN;
	uint32_t t20 = 1U;

    t20 = ((x85==(x86/x87))|x88);

    if (t20 != 16130U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = -2;
	static volatile int64_t x90 = 14832432100696003LL;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t21 = 1;

    t21 = ((x89==(x90/x91))|x92);

    if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x93 = 52638873696LLU;
	volatile int64_t x94 = -1LL;
	int32_t x95 = -1;
	volatile int8_t x96 = -52;
	int32_t t22 = -512408549;

    t22 = ((x93==(x94/x95))|x96);

    if (t22 != -52) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = 11;
	static int16_t x98 = -1;
	int16_t x100 = INT16_MAX;
	volatile int32_t t23 = 10;

    t23 = ((x97==(x98/x99))|x100);

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x103 = UINT16_MAX;
	int16_t x104 = 6;

    t24 = ((x101==(x102/x103))|x104);

    if (t24 != 6) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 239510;
	uint64_t x106 = 495059925714732LLU;
	int8_t x108 = INT8_MIN;

    t25 = ((x105==(x106/x107))|x108);

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x110 = INT64_MIN;
	static uint16_t x111 = UINT16_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t26 = INT32_MIN;

    t26 = ((x109==(x110/x111))|x112);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = 16;
	volatile int16_t x114 = 15;
	static int64_t x115 = INT64_MIN;
	volatile uint8_t x116 = 1U;
	int32_t t27 = -709645519;

    t27 = ((x113==(x114/x115))|x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MIN;
	int64_t x120 = -1LL;
	int64_t t28 = 1141630383476254499LL;

    t28 = ((x117==(x118/x119))|x120);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	volatile int32_t x122 = -1762518;
	int16_t x123 = INT16_MAX;
	volatile int32_t x124 = INT32_MAX;

    t29 = ((x121==(x122/x123))|x124);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = -61306LL;
	int16_t x126 = -1;
	int8_t x128 = INT8_MIN;

    t30 = ((x125==(x126/x127))|x128);

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x129 = -73679498LL;
	volatile uint8_t x130 = 114U;
	volatile uint16_t x131 = 24U;
	static volatile uint16_t x132 = 2U;
	volatile int32_t t31 = 361;

    t31 = ((x129==(x130/x131))|x132);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = -3549688LL;
	int64_t x134 = 102193803403LL;
	int8_t x135 = -62;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = -551;

    t32 = ((x133==(x134/x135))|x136);

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 42196U;
	int16_t x138 = INT16_MIN;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

    t33 = ((x137==(x138/x139))|x140);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x141 = 1376U;
	static int16_t x142 = -46;
	static uint64_t x143 = 52987211553969580LLU;
	uint32_t x144 = UINT32_MAX;
	uint32_t t34 = UINT32_MAX;

    t34 = ((x141==(x142/x143))|x144);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = 0;
	int32_t x146 = -237477759;
	int64_t x147 = -70003LL;
	static volatile int32_t t35 = -3362765;

    t35 = ((x145==(x146/x147))|x148);

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x150 = INT32_MAX;
	volatile uint64_t x151 = 4443680649512531LLU;
	static int32_t x152 = INT32_MIN;
	int32_t t36 = INT32_MIN;

    t36 = ((x149==(x150/x151))|x152);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = INT32_MIN;
	volatile int32_t x154 = 99567;
	static int64_t x155 = INT64_MAX;
	int8_t x156 = -1;
	static volatile int32_t t37 = -5;

    t37 = ((x153==(x154/x155))|x156);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x157 = INT64_MAX;
	int32_t x159 = 79161359;
	int8_t x160 = INT8_MIN;
	volatile int32_t t38 = -139194082;

    t38 = ((x157==(x158/x159))|x160);

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	int64_t x163 = 13631395542629LL;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t39 = 1045;

    t39 = ((x161==(x162/x163))|x164);

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = UINT8_MAX;
	static uint64_t x166 = 214938175770565LLU;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = -1351984;
	static volatile int32_t t40 = 476371;

    t40 = ((x165==(x166/x167))|x168);

    if (t40 != -1351984) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = -1;
	int16_t x172 = INT16_MAX;
	int32_t t41 = -986;

    t41 = ((x169==(x170/x171))|x172);

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = 14U;
	volatile uint32_t x175 = UINT32_MAX;
	int64_t t42 = 2813092947610106LL;

    t42 = ((x173==(x174/x175))|x176);

    if (t42 != -13995690LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MAX;
	uint64_t x178 = 3385601210385LLU;
	int64_t x179 = INT64_MIN;
	int32_t t43 = -2447033;

    t43 = ((x177==(x178/x179))|x180);

    if (t43 != -9) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x181 = UINT8_MAX;
	uint16_t x182 = 0U;
	int64_t x184 = INT64_MAX;
	static volatile int64_t t44 = INT64_MAX;

    t44 = ((x181==(x182/x183))|x184);

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MAX;
	static uint16_t x187 = 13039U;
	static int16_t x188 = -1;
	int32_t t45 = 199243758;

    t45 = ((x185==(x186/x187))|x188);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = -177443LL;
	int64_t x191 = INT64_MIN;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

    t46 = ((x189==(x190/x191))|x192);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	static int32_t x194 = INT32_MAX;
	int8_t x196 = -54;
	volatile int32_t t47 = -2;

    t47 = ((x193==(x194/x195))|x196);

    if (t47 != -54) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x199 = 1857332062217LLU;
	uint16_t x200 = 143U;
	volatile int32_t t48 = -170;

    t48 = ((x197==(x198/x199))|x200);

    if (t48 != 143) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x203 = 8980LLU;
	static uint8_t x204 = UINT8_MAX;
	int32_t t49 = 73668;

    t49 = ((x201==(x202/x203))|x204);

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x205 = INT8_MAX;
	uint64_t x207 = 4LLU;
	int16_t x208 = -86;
	static int32_t t50 = -89;

    t50 = ((x205==(x206/x207))|x208);

    if (t50 != -86) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = INT64_MIN;
	static int8_t x211 = -1;
	int64_t t51 = 1600642066484LL;

    t51 = ((x209==(x210/x211))|x212);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = 36U;
	static volatile uint32_t x218 = 3681000U;
	int16_t x219 = INT16_MAX;
	int16_t x220 = -1;
	volatile int32_t t52 = -112;

    t52 = ((x217==(x218/x219))|x220);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x221 = 3U;
	int64_t x222 = -5LL;
	int8_t x224 = INT8_MAX;
	static int32_t t53 = 1;

    t53 = ((x221==(x222/x223))|x224);

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -1;
	static volatile uint32_t x226 = 4U;
	volatile int8_t x227 = INT8_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t54 = -84;

    t54 = ((x225==(x226/x227))|x228);

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = UINT8_MAX;
	int8_t x231 = -1;
	static uint8_t x232 = 0U;

    t55 = ((x229==(x230/x231))|x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x234 = INT64_MIN;
	int16_t x236 = INT16_MAX;

    t56 = ((x233==(x234/x235))|x236);

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = -1;
	volatile int8_t x238 = -6;
	uint32_t x239 = 813218U;
	volatile uint8_t x240 = 1U;
	volatile int32_t t57 = 4674818;

    t57 = ((x237==(x238/x239))|x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x241 = -1;
	int8_t x242 = 27;
	static int32_t x244 = -34303117;
	int32_t t58 = -41040478;

    t58 = ((x241==(x242/x243))|x244);

    if (t58 != -34303117) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = 448322974U;
	uint8_t x246 = 40U;
	volatile int16_t x247 = INT16_MAX;
	static volatile int32_t x248 = INT32_MAX;
	int32_t t59 = INT32_MAX;

    t59 = ((x245==(x246/x247))|x248);

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x249 = 1023119U;
	int64_t x250 = INT64_MIN;
	int64_t x252 = -1LL;
	int64_t t60 = -1751884198253491178LL;

    t60 = ((x249==(x250/x251))|x252);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x254 = INT64_MIN;
	static int32_t x255 = -1090915;
	uint16_t x256 = 21U;

    t61 = ((x253==(x254/x255))|x256);

    if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x259 = -1;
	int16_t x260 = 1;
	int32_t t62 = 0;

    t62 = ((x257==(x258/x259))|x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = 0;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	volatile int8_t x264 = -1;
	volatile int32_t t63 = 2;

    t63 = ((x261==(x262/x263))|x264);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x266 = 506477;
	int64_t x267 = INT64_MAX;
	static int32_t x268 = -1;
	static volatile int32_t t64 = -114;

    t64 = ((x265==(x266/x267))|x268);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x271 = INT8_MAX;
	static uint32_t x272 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

    t65 = ((x269==(x270/x271))|x272);

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

    t66 = ((x273==(x274/x275))|x276);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	int64_t x278 = -14598LL;
	static uint64_t x280 = 27867691LLU;

    t67 = ((x277==(x278/x279))|x280);

    if (t67 != 27867691LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x281 = 29U;
	uint64_t x282 = 3017LLU;
	int16_t x283 = -1;
	static uint32_t x284 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

    t68 = ((x281==(x282/x283))|x284);

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x285 = 76U;
	int64_t x286 = INT64_MIN;
	volatile uint64_t x287 = 13LLU;
	static uint16_t x288 = 24U;

    t69 = ((x285==(x286/x287))|x288);

    if (t69 != 24) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x289 = -89341;
	int64_t x290 = INT64_MIN;
	int32_t x291 = 434458;
	int64_t x292 = INT64_MIN;
	int64_t t70 = INT64_MIN;

    t70 = ((x289==(x290/x291))|x292);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 17867U;
	static uint16_t x296 = UINT16_MAX;
	volatile int32_t t71 = 5349;

    t71 = ((x293==(x294/x295))|x296);

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = -1;
	volatile int64_t x299 = INT64_MIN;

    t72 = ((x297==(x298/x299))|x300);

    if (t72 != 94873652LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = 235U;
	int16_t x303 = -423;
	static volatile int32_t t73 = -13;

    t73 = ((x301==(x302/x303))|x304);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = -12851344719766LL;
	static int8_t x306 = INT8_MIN;
	volatile int64_t t74 = -44645817LL;

    t74 = ((x305==(x306/x307))|x308);

    if (t74 != 53010995LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MIN;
	static volatile int16_t x310 = INT16_MIN;
	uint64_t x311 = 24029808047846861LLU;
	static int32_t t75 = INT32_MAX;

    t75 = ((x309==(x310/x311))|x312);

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x314 = -10;
	int64_t x315 = -34468501201601LL;

    t76 = ((x313==(x314/x315))|x316);

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x317 = INT64_MIN;
	static int16_t x318 = INT16_MAX;
	int64_t x319 = INT64_MAX;
	uint64_t x320 = 444628687LLU;
	uint64_t t77 = 13237010670645979LLU;

    t77 = ((x317==(x318/x319))|x320);

    if (t77 != 444628687LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = INT8_MAX;
	uint64_t x322 = 453868458063LLU;
	static uint16_t x323 = 103U;
	int64_t x324 = 248635870581LL;
	static int64_t t78 = -3780749LL;

    t78 = ((x321==(x322/x323))|x324);

    if (t78 != 248635870581LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x326 = INT16_MAX;
	static uint16_t x327 = 79U;
	int64_t x328 = INT64_MAX;
	volatile int64_t t79 = INT64_MAX;

    t79 = ((x325==(x326/x327))|x328);

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x331 = 226459U;
	int64_t x332 = INT64_MIN;
	static int64_t t80 = INT64_MIN;

    t80 = ((x329==(x330/x331))|x332);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x333 = 14U;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MIN;
	int32_t t81 = -95;

    t81 = ((x333==(x334/x335))|x336);

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x339 = INT64_MIN;
	static uint32_t x340 = 90535390U;
	uint32_t t82 = 7838U;

    t82 = ((x337==(x338/x339))|x340);

    if (t82 != 90535390U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x341 = -1;
	static uint16_t x342 = 320U;
	volatile int64_t x343 = -2LL;
	int8_t x344 = INT8_MAX;

    t83 = ((x341==(x342/x343))|x344);

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x345 = 2719U;
	volatile int16_t x346 = 7397;
	static uint32_t x347 = UINT32_MAX;
	static uint32_t x348 = 855117636U;
	static uint32_t t84 = 604908918U;

    t84 = ((x345==(x346/x347))|x348);

    if (t84 != 855117636U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = -1;
	static volatile int16_t x350 = -246;
	int32_t x351 = INT32_MAX;
	static volatile int16_t x352 = -1;
	volatile int32_t t85 = -4071936;

    t85 = ((x349==(x350/x351))|x352);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x353 = 91586492927LLU;
	int8_t x354 = -1;
	int64_t x355 = 8813893LL;
	volatile int32_t x356 = INT32_MIN;
	int32_t t86 = INT32_MIN;

    t86 = ((x353==(x354/x355))|x356);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x357 = UINT64_MAX;
	int8_t x358 = -1;
	volatile int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t87 = 41952898;

    t87 = ((x357==(x358/x359))|x360);

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MAX;
	uint16_t x364 = 665U;
	int32_t t88 = -298362197;

    t88 = ((x361==(x362/x363))|x364);

    if (t88 != 665) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x365 = INT32_MIN;
	volatile int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	int32_t t89 = -22;

    t89 = ((x365==(x366/x367))|x368);

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x369 = UINT8_MAX;
	volatile int64_t x370 = -1LL;
	int64_t x371 = INT64_MIN;
	static uint8_t x372 = 17U;
	static volatile int32_t t90 = -31567211;

    t90 = ((x369==(x370/x371))|x372);

    if (t90 != 17) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = INT16_MAX;
	static uint64_t x374 = 5086357293501749LLU;
	int8_t x375 = -1;

    t91 = ((x373==(x374/x375))|x376);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x377 = INT32_MIN;
	int16_t x378 = -1;
	int64_t x380 = INT64_MIN;
	static int64_t t92 = INT64_MIN;

    t92 = ((x377==(x378/x379))|x380);

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x381 = INT8_MIN;
	int64_t x382 = -18LL;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	static int32_t t93 = -151638;

    t93 = ((x381==(x382/x383))|x384);

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x386 = 0U;
	uint64_t x388 = 20538524LLU;
	uint64_t t94 = 63478303003LLU;

    t94 = ((x385==(x386/x387))|x388);

    if (t94 != 20538524LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	uint64_t x391 = 36418301LLU;
	static int16_t x392 = INT16_MIN;
	int32_t t95 = -27955000;

    t95 = ((x389==(x390/x391))|x392);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -1;
	int8_t x394 = -1;
	uint32_t x395 = 1320683U;
	volatile int64_t t96 = -7171LL;

    t96 = ((x393==(x394/x395))|x396);

    if (t96 != -162766745938708LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = 2506044U;
	static int8_t x400 = -1;
	volatile int32_t t97 = -499;

    t97 = ((x397==(x398/x399))|x400);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = INT8_MIN;
	uint16_t x402 = 11504U;
	volatile int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t98 = INT32_MIN;

    t98 = ((x401==(x402/x403))|x404);

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x405 = -13778613;
	int8_t x406 = INT8_MIN;
	static volatile int32_t x407 = INT32_MAX;
	static uint32_t x408 = 753576U;
	static volatile uint32_t t99 = 6U;

    t99 = ((x405==(x406/x407))|x408);

    if (t99 != 753576U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x409 = UINT64_MAX;
	uint8_t x410 = 1U;
	int8_t x411 = 56;
	static volatile int32_t t100 = -79102843;

    t100 = ((x409==(x410/x411))|x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x413 = 29147U;
	int64_t x414 = INT64_MIN;
	uint32_t x416 = 39842U;

    t101 = ((x413==(x414/x415))|x416);

    if (t101 != 39842U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x417 = UINT8_MAX;
	volatile uint64_t x418 = 20LLU;
	static int32_t x419 = INT32_MIN;
	volatile uint64_t x420 = 547035742911066762LLU;

    t102 = ((x417==(x418/x419))|x420);

    if (t102 != 547035742911066762LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x421 = UINT8_MAX;
	volatile uint64_t x422 = UINT64_MAX;
	static int64_t x424 = INT64_MIN;
	volatile int64_t t103 = INT64_MIN;

    t103 = ((x421==(x422/x423))|x424);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x425 = 23U;
	volatile int32_t x426 = -1;
	static int8_t x427 = INT8_MAX;
	int16_t x428 = -1;

    t104 = ((x425==(x426/x427))|x428);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x429 = 12073LLU;
	static int8_t x430 = INT8_MAX;
	volatile int32_t t105 = 3387;

    t105 = ((x429==(x430/x431))|x432);

    if (t105 != 15) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MAX;
	int64_t x435 = 136158288LL;
	uint64_t x436 = UINT64_MAX;

    t106 = ((x433==(x434/x435))|x436);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = UINT32_MAX;
	static volatile int64_t x438 = -1LL;
	int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MIN;
	int32_t t107 = INT32_MIN;

    t107 = ((x437==(x438/x439))|x440);

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x442 = -1;
	static uint8_t x443 = 6U;
	int16_t x444 = INT16_MAX;
	volatile int32_t t108 = -259861819;

    t108 = ((x441==(x442/x443))|x444);

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = INT64_MAX;
	static int8_t x446 = -1;
	uint16_t x447 = 1391U;
	volatile int32_t x448 = -1;
	int32_t t109 = 3277;

    t109 = ((x445==(x446/x447))|x448);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x450 = INT64_MAX;
	volatile int8_t x451 = 17;
	int16_t x452 = -1;
	volatile int32_t t110 = -845101;

    t110 = ((x449==(x450/x451))|x452);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x454 = INT32_MAX;
	int16_t x455 = 1;
	volatile int64_t x456 = 28815LL;
	static volatile int64_t t111 = -1935195LL;

    t111 = ((x453==(x454/x455))|x456);

    if (t111 != 28815LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x457 = 14686U;
	int32_t x458 = INT32_MAX;
	uint16_t x459 = 11716U;
	int64_t x460 = INT64_MIN;
	volatile int64_t t112 = INT64_MIN;

    t112 = ((x457==(x458/x459))|x460);

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x461 = 85U;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t113 = 301048;

    t113 = ((x461==(x462/x463))|x464);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = INT16_MIN;
	static uint32_t x466 = 279130U;
	int32_t x467 = -1;
	volatile uint64_t x468 = UINT64_MAX;
	uint64_t t114 = UINT64_MAX;

    t114 = ((x465==(x466/x467))|x468);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = INT64_MIN;
	int8_t x474 = INT8_MAX;
	int8_t x475 = -1;
	int64_t x476 = INT64_MAX;
	static int64_t t115 = INT64_MAX;

    t115 = ((x473==(x474/x475))|x476);

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = 2662U;
	int64_t x480 = 54300264LL;
	int64_t t116 = 755671282333822LL;

    t116 = ((x477==(x478/x479))|x480);

    if (t116 != 54300264LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -1;
	uint8_t x482 = 61U;
	uint16_t x483 = UINT16_MAX;
	int64_t x484 = INT64_MAX;
	volatile int64_t t117 = INT64_MAX;

    t117 = ((x481==(x482/x483))|x484);

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x485 = -99040;
	static uint64_t x486 = UINT64_MAX;
	int16_t x487 = -1;
	int64_t x488 = -1LL;
	static volatile int64_t t118 = -2248LL;

    t118 = ((x485==(x486/x487))|x488);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x489 = 11567;
	volatile uint32_t x490 = 3722U;
	static uint32_t x491 = 173612U;
	volatile int32_t t119 = 51923;

    t119 = ((x489==(x490/x491))|x492);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = INT64_MAX;
	int8_t x494 = -40;
	uint16_t x495 = UINT16_MAX;
	volatile int32_t t120 = 555;

    t120 = ((x493==(x494/x495))|x496);

    if (t120 != 109) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = INT32_MIN;
	int16_t x499 = -7;
	int16_t x500 = INT16_MIN;

    t121 = ((x497==(x498/x499))|x500);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x501 = -788;
	uint32_t x503 = UINT32_MAX;
	int32_t x504 = -41864;
	static int32_t t122 = 1;

    t122 = ((x501==(x502/x503))|x504);

    if (t122 != -41864) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = INT16_MIN;
	uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MAX;
	volatile int32_t t123 = -4;

    t123 = ((x505==(x506/x507))|x508);

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x509 = 0LL;
	static volatile int16_t x510 = -2630;
	uint16_t x512 = 13U;
	volatile int32_t t124 = -3;

    t124 = ((x509==(x510/x511))|x512);

    if (t124 != 13) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x514 = UINT32_MAX;
	static uint16_t x515 = UINT16_MAX;
	uint32_t x516 = UINT32_MAX;
	uint32_t t125 = UINT32_MAX;

    t125 = ((x513==(x514/x515))|x516);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x519 = -497414391885LL;
	int32_t t126 = 104758641;

    t126 = ((x517==(x518/x519))|x520);

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x522 = -1LL;
	static int16_t x524 = INT16_MIN;

    t127 = ((x521==(x522/x523))|x524);

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x525 = 23U;
	static int16_t x526 = INT16_MIN;
	int32_t x527 = -3093194;
	int32_t t128 = 1640;

    t128 = ((x525==(x526/x527))|x528);

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x530 = INT32_MIN;
	int8_t x532 = INT8_MIN;
	int32_t t129 = -48;

    t129 = ((x529==(x530/x531))|x532);

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = 635825;
	int16_t x534 = INT16_MIN;
	int8_t x535 = 12;
	static int32_t x536 = -18546725;
	static int32_t t130 = -3145;

    t130 = ((x533==(x534/x535))|x536);

    if (t130 != -18546725) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x537 = 8;
	uint64_t x538 = 1249429554LLU;
	int64_t x539 = INT64_MIN;
	volatile uint32_t x540 = UINT32_MAX;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = ((x537==(x538/x539))|x540);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = 90465485;
	int64_t x542 = INT64_MIN;
	int64_t x543 = INT64_MIN;
	volatile int32_t t132 = -30;

    t132 = ((x541==(x542/x543))|x544);

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x546 = 2470U;
	uint32_t x547 = UINT32_MAX;

    t133 = ((x545==(x546/x547))|x548);

    if (t133 != 36LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x550 = 1550U;
	uint16_t x551 = 447U;
	int16_t x552 = -1;
	volatile int32_t t134 = -89;

    t134 = ((x549==(x550/x551))|x552);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = -1;
	int64_t x554 = -132444835299657LL;
	volatile uint32_t x555 = UINT32_MAX;
	int16_t x556 = -1;
	volatile int32_t t135 = 64598;

    t135 = ((x553==(x554/x555))|x556);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x557 = INT64_MAX;
	int32_t x558 = INT32_MIN;
	uint32_t x559 = 44250228U;
	static volatile int8_t x560 = INT8_MIN;

    t136 = ((x557==(x558/x559))|x560);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = -2638166;

    t137 = ((x561==(x562/x563))|x564);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x565 = INT64_MIN;
	int64_t x566 = INT64_MIN;
	static uint32_t x567 = 64495487U;
	uint32_t x568 = 738870U;
	uint32_t t138 = 297633410U;

    t138 = ((x565==(x566/x567))|x568);

    if (t138 != 738870U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x569 = 1U;
	int32_t x571 = INT32_MIN;
	int16_t x572 = 106;

    t139 = ((x569==(x570/x571))|x572);

    if (t139 != 106) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x574 = INT16_MAX;
	volatile int8_t x575 = -1;
	uint32_t x576 = 108393063U;
	static uint32_t t140 = 374748333U;

    t140 = ((x573==(x574/x575))|x576);

    if (t140 != 108393063U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x578 = 30U;
	static int16_t x579 = INT16_MIN;
	int32_t t141 = INT32_MIN;

    t141 = ((x577==(x578/x579))|x580);

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x581 = 0;
	int64_t x584 = INT64_MIN;

    t142 = ((x581==(x582/x583))|x584);

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x585 = 2U;
	uint8_t x587 = 3U;
	int8_t x588 = INT8_MIN;
	int32_t t143 = 2;

    t143 = ((x585==(x586/x587))|x588);

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x589 = -113;
	volatile uint16_t x590 = UINT16_MAX;
	static int32_t t144 = -177;

    t144 = ((x589==(x590/x591))|x592);

    if (t144 != 9) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x594 = INT64_MAX;
	volatile uint8_t x595 = 2U;
	uint64_t x596 = 7882656898LLU;
	uint64_t t145 = 65LLU;

    t145 = ((x593==(x594/x595))|x596);

    if (t145 != 7882656898LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x597 = 0U;
	int32_t x598 = 462;
	int64_t x599 = INT64_MAX;
	static volatile uint8_t x600 = UINT8_MAX;

    t146 = ((x597==(x598/x599))|x600);

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x601 = INT64_MIN;
	static int32_t x603 = INT32_MIN;
	int16_t x604 = -1;
	int32_t t147 = -170756467;

    t147 = ((x601==(x602/x603))|x604);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x605 = -1186LL;
	uint32_t x606 = UINT32_MAX;
	int8_t x608 = 26;

    t148 = ((x605==(x606/x607))|x608);

    if (t148 != 26) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x609 = INT8_MIN;
	volatile int8_t x610 = INT8_MAX;
	uint32_t x611 = 13986U;
	uint64_t x612 = 212LLU;

    t149 = ((x609==(x610/x611))|x612);

    if (t149 != 212LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x614 = 12U;
	int64_t x615 = INT64_MAX;
	static int64_t x616 = -1LL;
	static volatile int64_t t150 = -1LL;

    t150 = ((x613==(x614/x615))|x616);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x617 = 1;
	volatile int8_t x618 = INT8_MIN;
	int16_t x619 = INT16_MIN;
	int32_t x620 = 0;
	int32_t t151 = 222;

    t151 = ((x617==(x618/x619))|x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x621 = 1U;
	int64_t x622 = -71127610272634353LL;
	static int8_t x623 = INT8_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t152 = 4;

    t152 = ((x621==(x622/x623))|x624);

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x626 = INT16_MIN;
	volatile int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MIN;
	static int32_t t153 = INT32_MIN;

    t153 = ((x625==(x626/x627))|x628);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x629 = 2;
	int16_t x630 = 1;
	uint16_t x631 = UINT16_MAX;
	volatile int16_t x632 = INT16_MIN;

    t154 = ((x629==(x630/x631))|x632);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x634 = INT32_MIN;
	int64_t x635 = INT64_MIN;
	volatile int8_t x636 = INT8_MIN;
	int32_t t155 = -31519394;

    t155 = ((x633==(x634/x635))|x636);

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x637 = 147;
	static int16_t x638 = 5172;
	static int8_t x639 = -50;
	volatile int32_t t156 = 460737;

    t156 = ((x637==(x638/x639))|x640);

    if (t156 != 11362) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x641 = -18;
	uint64_t x642 = UINT64_MAX;
	static volatile int64_t x643 = INT64_MIN;
	uint16_t x644 = UINT16_MAX;

    t157 = ((x641==(x642/x643))|x644);

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x645 = -1;
	int8_t x646 = INT8_MAX;
	int8_t x647 = 2;
	int8_t x648 = INT8_MIN;
	int32_t t158 = -2;

    t158 = ((x645==(x646/x647))|x648);

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = INT16_MIN;
	int8_t x654 = -36;
	int8_t x655 = INT8_MAX;
	uint32_t x656 = 795U;
	uint32_t t159 = 2623U;

    t159 = ((x653==(x654/x655))|x656);

    if (t159 != 795U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x657 = -1;
	int16_t x658 = -3056;
	volatile int32_t x659 = INT32_MAX;
	volatile uint64_t x660 = UINT64_MAX;
	volatile uint64_t t160 = UINT64_MAX;

    t160 = ((x657==(x658/x659))|x660);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x661 = INT64_MIN;
	int8_t x662 = -1;
	volatile int32_t x663 = INT32_MIN;
	static uint8_t x664 = 0U;
	int32_t t161 = -1;

    t161 = ((x661==(x662/x663))|x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = INT32_MIN;
	static int8_t x666 = INT8_MIN;
	int64_t x668 = INT64_MAX;
	volatile int64_t t162 = INT64_MAX;

    t162 = ((x665==(x666/x667))|x668);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x669 = 8800U;
	uint16_t x670 = 0U;
	uint16_t x671 = UINT16_MAX;
	volatile int32_t x672 = -1;
	int32_t t163 = -1030281;

    t163 = ((x669==(x670/x671))|x672);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x673 = 69461393965557LLU;
	static int64_t x674 = 15164401612LL;
	uint32_t x675 = 5402U;
	static int16_t x676 = 44;
	int32_t t164 = 814;

    t164 = ((x673==(x674/x675))|x676);

    if (t164 != 44) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x677 = -165;
	int64_t x678 = -1LL;
	int16_t x679 = INT16_MIN;
	static int32_t x680 = 3167;
	volatile int32_t t165 = 301162;

    t165 = ((x677==(x678/x679))|x680);

    if (t165 != 3167) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x681 = UINT16_MAX;
	static uint16_t x684 = 101U;
	volatile int32_t t166 = 1466624;

    t166 = ((x681==(x682/x683))|x684);

    if (t166 != 101) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x685 = INT64_MAX;
	int16_t x686 = INT16_MIN;
	int16_t x687 = INT16_MIN;
	volatile int16_t x688 = -1;
	volatile int32_t t167 = 787903358;

    t167 = ((x685==(x686/x687))|x688);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x689 = INT16_MAX;
	uint16_t x690 = UINT16_MAX;
	int16_t x691 = INT16_MIN;
	int64_t x692 = 32279989LL;
	static int64_t t168 = 22763519797878368LL;

    t168 = ((x689==(x690/x691))|x692);

    if (t168 != 32279989LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x694 = -10;
	volatile int8_t x695 = INT8_MAX;
	uint64_t x696 = UINT64_MAX;
	uint64_t t169 = UINT64_MAX;

    t169 = ((x693==(x694/x695))|x696);

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x697 = INT8_MIN;
	volatile int64_t x698 = 181019193359329986LL;
	static int16_t x699 = -19;
	volatile int64_t x700 = -144578136LL;
	volatile int64_t t170 = -23772655502702LL;

    t170 = ((x697==(x698/x699))|x700);

    if (t170 != -144578136LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x701 = -1;
	volatile uint64_t x702 = 6050083364LLU;
	static int16_t x703 = -1;
	int16_t x704 = INT16_MIN;
	volatile int32_t t171 = -4350;

    t171 = ((x701==(x702/x703))|x704);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x707 = -207447LL;
	volatile int32_t x708 = INT32_MAX;

    t172 = ((x705==(x706/x707))|x708);

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x710 = -1;
	int16_t x711 = -31;
	uint64_t x712 = UINT64_MAX;
	uint64_t t173 = UINT64_MAX;

    t173 = ((x709==(x710/x711))|x712);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x713 = INT8_MIN;
	static uint32_t x714 = 100439848U;
	volatile int8_t x715 = -1;

    t174 = ((x713==(x714/x715))|x716);

    if (t174 != -7) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x717 = INT64_MIN;
	uint64_t x719 = 70037627249153904LLU;
	int32_t x720 = 198;
	int32_t t175 = 129340840;

    t175 = ((x717==(x718/x719))|x720);

    if (t175 != 198) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	static uint64_t x722 = UINT64_MAX;
	volatile uint8_t x723 = 1U;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t176 = 51072094;

    t176 = ((x721==(x722/x723))|x724);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x726 = UINT32_MAX;
	volatile int16_t x727 = -1;
	int16_t x728 = -2323;
	int32_t t177 = -467;

    t177 = ((x725==(x726/x727))|x728);

    if (t177 != -2323) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x729 = INT64_MAX;
	uint32_t x730 = UINT32_MAX;
	int8_t x731 = INT8_MAX;
	static int64_t x732 = -99LL;
	volatile int64_t t178 = 854307842961293230LL;

    t178 = ((x729==(x730/x731))|x732);

    if (t178 != -99LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x735 = -1;
	int32_t x736 = INT32_MIN;
	volatile int32_t t179 = INT32_MIN;

    t179 = ((x733==(x734/x735))|x736);

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x738 = 27U;
	static volatile uint8_t x739 = UINT8_MAX;
	int64_t x740 = INT64_MAX;

    t180 = ((x737==(x738/x739))|x740);

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x741 = -5327865925LL;
	int8_t x742 = INT8_MIN;

    t181 = ((x741==(x742/x743))|x744);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x745 = INT32_MIN;
	uint32_t x746 = UINT32_MAX;
	static int32_t x748 = -21539;
	int32_t t182 = -10;

    t182 = ((x745==(x746/x747))|x748);

    if (t182 != -21539) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x750 = -3698372;
	int64_t x751 = INT64_MIN;
	int64_t t183 = 53LL;

    t183 = ((x749==(x750/x751))|x752);

    if (t183 != 4262590514467LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x754 = UINT64_MAX;
	uint16_t x755 = 4U;
	volatile uint64_t t184 = 1629817LLU;

    t184 = ((x753==(x754/x755))|x756);

    if (t184 != 450951777796LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x757 = UINT64_MAX;
	static uint32_t x758 = 37341U;
	static int32_t x759 = INT32_MIN;
	int8_t x760 = INT8_MIN;
	int32_t t185 = -2796937;

    t185 = ((x757==(x758/x759))|x760);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x761 = -723;
	uint32_t x762 = 34756U;
	int16_t x763 = INT16_MIN;
	int64_t x764 = 74212321LL;
	volatile int64_t t186 = 0LL;

    t186 = ((x761==(x762/x763))|x764);

    if (t186 != 74212321LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x765 = -2126055;
	volatile uint32_t x766 = 29492U;
	int32_t x767 = INT32_MAX;
	volatile int32_t t187 = 9229;

    t187 = ((x765==(x766/x767))|x768);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x769 = 585U;
	int16_t x770 = -1;
	uint16_t x771 = 360U;
	int32_t x772 = -1;
	static volatile int32_t t188 = 151;

    t188 = ((x769==(x770/x771))|x772);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x773 = 467178633939415498LLU;
	static uint8_t x774 = UINT8_MAX;
	int16_t x775 = -1;
	int8_t x776 = INT8_MAX;
	volatile int32_t t189 = 4059768;

    t189 = ((x773==(x774/x775))|x776);

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x777 = INT8_MAX;
	int16_t x778 = -54;
	static int32_t x779 = -1;
	static int32_t x780 = -1;
	int32_t t190 = 2542553;

    t190 = ((x777==(x778/x779))|x780);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x781 = UINT8_MAX;
	uint16_t x783 = 842U;
	volatile int64_t x784 = INT64_MIN;
	volatile int64_t t191 = INT64_MIN;

    t191 = ((x781==(x782/x783))|x784);

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	int32_t x787 = -1;
	int16_t x788 = INT16_MAX;
	int32_t t192 = -9262;

    t192 = ((x785==(x786/x787))|x788);

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x790 = INT32_MIN;
	static int64_t x791 = 28836540LL;
	uint32_t x792 = 15909118U;

    t193 = ((x789==(x790/x791))|x792);

    if (t193 != 15909118U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x793 = INT16_MIN;
	int16_t x794 = -1;
	static int16_t x796 = -65;
	volatile int32_t t194 = 1;

    t194 = ((x793==(x794/x795))|x796);

    if (t194 != -65) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x799 = UINT32_MAX;
	uint8_t x800 = 31U;

    t195 = ((x797==(x798/x799))|x800);

    if (t195 != 31) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x801 = -1LL;
	static volatile uint32_t x802 = 2046806U;
	volatile uint32_t x803 = 777401U;
	int32_t x804 = -525320;

    t196 = ((x801==(x802/x803))|x804);

    if (t196 != -525320) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x805 = 157U;
	int64_t x806 = 2320710489LL;
	int16_t x807 = 5;
	int32_t x808 = -1;
	static volatile int32_t t197 = -13;

    t197 = ((x805==(x806/x807))|x808);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x809 = INT16_MAX;
	int8_t x811 = 1;
	int64_t x812 = 12LL;
	int64_t t198 = -6688125LL;

    t198 = ((x809==(x810/x811))|x812);

    if (t198 != 12LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x814 = 4254652;
	uint32_t x816 = UINT32_MAX;

    t199 = ((x813==(x814/x815))|x816);

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

