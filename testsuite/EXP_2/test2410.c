
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

static uint8_t x1 = 5U;
static volatile int32_t x8 = 14;
volatile uint32_t x10 = 42690346U;
int64_t t2 = -8329169402LL;
static int64_t x15 = -1LL;
int32_t x17 = -7056;
volatile int32_t x18 = -1;
int64_t x19 = -64915752844LL;
int64_t t7 = -3916698126LL;
volatile int32_t x38 = INT32_MIN;
int16_t x39 = INT16_MIN;
int16_t x46 = -1;
int32_t x47 = -6281908;
static volatile int64_t t11 = 40810546929LL;
int16_t x49 = INT16_MIN;
static uint32_t t12 = 2U;
uint32_t t14 = 191610U;
volatile int64_t t15 = -2181612LL;
int32_t x65 = -1;
static int16_t x66 = INT16_MIN;
uint16_t x74 = 1126U;
static volatile int64_t t18 = INT64_MAX;
uint16_t x80 = 44U;
volatile int32_t t19 = 46871863;
static uint64_t x84 = 84241LLU;
volatile int8_t x88 = -3;
uint16_t x104 = UINT16_MAX;
int8_t x106 = INT8_MAX;
volatile int16_t x114 = -1;
int8_t x129 = -1;
static volatile int16_t x132 = 1;
int8_t x135 = 1;
int64_t x138 = INT64_MIN;
static volatile uint64_t x141 = 39524LLU;
static volatile int8_t x143 = INT8_MAX;
volatile int64_t t36 = 9251741059LL;
volatile uint32_t t38 = 60432374U;
uint8_t x167 = 63U;
int16_t x169 = INT16_MAX;
volatile int16_t x174 = 7922;
int64_t x178 = 1305LL;
static uint64_t x179 = UINT64_MAX;
int32_t x184 = INT32_MIN;
static volatile uint64_t x185 = 1978LLU;
static int16_t x187 = -572;
int32_t x194 = -1;
static int8_t x198 = 8;
int32_t x203 = INT32_MAX;
int32_t x208 = INT32_MIN;
static volatile int64_t t51 = -868041015611476626LL;
volatile int64_t t53 = -40419662LL;
static int16_t x221 = INT16_MIN;
volatile uint16_t x228 = UINT16_MAX;
int64_t t55 = -174LL;
int8_t x233 = INT8_MIN;
volatile int8_t x235 = -10;
volatile uint16_t x252 = 1U;
int64_t t60 = -7587747346597LL;
uint8_t x262 = UINT8_MAX;
volatile int64_t x265 = 949606788750985LL;
int64_t t64 = 11010190008743335LL;
int32_t x271 = INT32_MIN;
volatile uint8_t x272 = UINT8_MAX;
uint64_t x280 = UINT64_MAX;
int64_t x281 = INT64_MAX;
volatile uint32_t t70 = 1537493U;
static uint32_t x297 = UINT32_MAX;
int8_t x300 = INT8_MIN;
static uint16_t x301 = 16U;
int32_t x302 = INT32_MIN;
static volatile int32_t t73 = 0;
uint16_t x314 = 2024U;
int32_t x317 = 8019576;
uint8_t x318 = 2U;
static uint32_t x323 = UINT32_MAX;
int16_t x324 = -1;
int64_t x325 = INT64_MIN;
volatile uint64_t x330 = UINT64_MAX;
volatile int8_t x335 = INT8_MIN;
uint64_t x339 = UINT64_MAX;
volatile int64_t t83 = 104941557LL;
volatile uint64_t t84 = 1961LLU;
uint32_t x356 = UINT32_MAX;
static int64_t x360 = -6918327000961LL;
volatile uint64_t t86 = 15594228576LLU;
static uint16_t x364 = UINT16_MAX;
static uint64_t x373 = UINT64_MAX;
static volatile int32_t t94 = 2860;
int64_t x398 = INT64_MIN;
volatile int64_t t97 = -241606331821LL;
volatile uint64_t x409 = UINT64_MAX;
uint64_t t98 = 605384637838LLU;
volatile int8_t x413 = 16;
uint8_t x421 = UINT8_MAX;
static int64_t x432 = INT64_MAX;
uint64_t x437 = UINT64_MAX;
uint64_t t105 = 4797876235445LLU;
static volatile uint32_t t106 = 233438129U;
int64_t x445 = -65425443124LL;
int16_t x449 = INT16_MAX;
static uint32_t x452 = UINT32_MAX;
int16_t x456 = INT16_MIN;
volatile int64_t t110 = -8146001842LL;
static int16_t x464 = -1;
static int8_t x465 = INT8_MIN;
int64_t x470 = INT64_MIN;
volatile int64_t x474 = INT64_MIN;
int32_t x475 = 1983;
volatile uint64_t x477 = 2LLU;
int32_t x479 = 16;
uint64_t t115 = 100619977829010826LLU;
volatile uint16_t x482 = 7U;
volatile int64_t t116 = 151484LL;
uint8_t x486 = 1U;
volatile int64_t t117 = 1694255222259LL;
int8_t x490 = INT8_MIN;
static volatile int32_t x494 = -7924281;
int64_t x496 = -3747628343799LL;
volatile int64_t t119 = 1LL;
uint64_t t120 = 3LLU;
uint32_t x504 = 23936U;
static volatile uint32_t t121 = 926U;
static int16_t x506 = INT16_MIN;
int64_t t122 = -91687937971199722LL;
int32_t x509 = INT32_MIN;
int32_t x511 = 24924;
volatile uint64_t t124 = 2563294LLU;
static int64_t x517 = INT64_MIN;
int32_t t126 = 13;
volatile int16_t x525 = -115;
int64_t x526 = INT64_MAX;
int16_t x530 = INT16_MIN;
int8_t x531 = INT8_MIN;
volatile int16_t x535 = INT16_MAX;
uint8_t x538 = 0U;
static uint16_t x539 = UINT16_MAX;
volatile uint32_t t130 = 1U;
int64_t x547 = INT64_MAX;
static uint32_t x548 = UINT32_MAX;
int64_t t132 = 657044770035LL;
uint32_t x555 = UINT32_MAX;
int64_t x557 = -1LL;
int16_t x565 = 0;
uint16_t x568 = UINT16_MAX;
volatile int64_t t139 = 8942467837085420LL;
uint64_t x585 = 827679216LLU;
int8_t x588 = -1;
static volatile uint64_t t142 = 156286321594LLU;
volatile int16_t x593 = INT16_MIN;
int8_t x607 = -25;
int8_t x610 = 0;
uint16_t x611 = 1910U;
uint32_t t147 = 205U;
static uint32_t x618 = 1445U;
uint64_t x619 = 313610LLU;
static uint16_t x641 = UINT16_MAX;
volatile uint32_t x644 = UINT32_MAX;
int16_t x645 = INT16_MAX;
uint64_t t154 = 12LLU;
uint8_t x649 = 0U;
static int8_t x655 = -4;
int64_t x658 = INT64_MIN;
volatile uint32_t x659 = UINT32_MAX;
static uint16_t x663 = 181U;
uint16_t x668 = 132U;
volatile uint64_t x670 = 5968526117LLU;
volatile uint64_t t160 = 36919782266375211LLU;
volatile int64_t x677 = INT64_MAX;
int64_t t161 = 7LL;
uint8_t x682 = 29U;
uint64_t t163 = 3082557597097148635LLU;
volatile uint32_t x692 = 17933U;
int8_t x695 = INT8_MIN;
volatile int16_t x697 = INT16_MAX;
int64_t x699 = -1LL;
volatile int64_t t166 = -3062258907845LL;
int16_t x707 = INT16_MAX;
uint32_t x713 = UINT32_MAX;
uint32_t x714 = 390U;
static int16_t x718 = -2;
static int64_t x719 = -518LL;
int64_t t170 = -2LL;
uint64_t t172 = 15735LLU;
int16_t x729 = -1;
int16_t x730 = -6;
int64_t x743 = 318281647415647LL;
volatile uint32_t x747 = 13909978U;
int16_t x748 = -105;
int8_t x753 = 3;
uint32_t x755 = 151U;
volatile int64_t t179 = 239259391266528433LL;
volatile int8_t x757 = -1;
uint32_t t180 = 12371974U;
volatile uint64_t t183 = 24LLU;
volatile uint8_t x774 = UINT8_MAX;
uint64_t t188 = 13156LLU;
static int16_t x793 = -1;
volatile int64_t x798 = INT64_MIN;
int16_t x799 = INT16_MAX;
uint64_t t190 = 568536492407649256LLU;
volatile int32_t x802 = INT32_MIN;
static int64_t t191 = -8045819LL;
volatile uint64_t x806 = UINT64_MAX;
volatile int8_t x807 = INT8_MIN;
int16_t x831 = 0;
volatile int32_t x838 = INT32_MIN;
uint64_t x842 = 7067LLU;


void f0(void) {
    	uint8_t x2 = 6U;
	int64_t x3 = 71410051781LL;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -1LL;

    t0 = ((x1%(x2|x3))-x4);

    if (t0 != 133LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int32_t x6 = INT32_MAX;
	uint16_t x7 = 347U;
	volatile int32_t t1 = 17;

    t1 = ((x5%(x6|x7))-x8);

    if (t1 != -15) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = -1LL;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -2593LL;

    t2 = ((x9%(x10|x11))-x12);

    if (t2 != 2592LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	static volatile uint16_t x14 = 250U;
	volatile int64_t x16 = -1LL;
	volatile int64_t t3 = -4LL;

    t3 = ((x13%(x14|x15))-x16);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x20 = 39715903424449611LLU;
	volatile uint64_t t4 = 9183682187007328919LLU;

    t4 = ((x17%(x18|x19))-x20);

    if (t4 != 18407028170285102005LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int16_t x22 = 78;
	uint32_t x23 = 596262U;
	int64_t x24 = -1LL;
	int64_t t5 = -264252175055LL;

    t5 = ((x21%(x22|x23))-x24);

    if (t5 != 169828LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 3U;
	int32_t x26 = INT32_MAX;
	uint32_t x27 = 22U;
	uint8_t x28 = 49U;
	uint32_t t6 = 82381U;

    t6 = ((x25%(x26|x27))-x28);

    if (t6 != 4294967250U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 7U;
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = -166110LL;
	static uint16_t x32 = 391U;

    t7 = ((x29%(x30|x31))-x32);

    if (t7 != -384LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	uint64_t t8 = 23LLU;

    t8 = ((x33%(x34|x35))-x36);

    if (t8 != 65280LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	volatile int16_t x40 = -238;
	static volatile int32_t t9 = 2617;

    t9 = ((x37%(x38|x39))-x40);

    if (t9 != 493) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 105806868193189947LLU;
	uint64_t x42 = 287822912787107LLU;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	uint64_t t10 = 139LLU;

    t10 = ((x41%(x42|x43))-x44);

    if (t10 != 105806868193190075LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	volatile uint8_t x48 = 15U;

    t11 = ((x45%(x46|x47))-x48);

    if (t11 != -15LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 3672U;
	static uint16_t x52 = 3534U;

    t12 = ((x49%(x50|x51))-x52);

    if (t12 != 4294930994U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = -1LL;
	int64_t t13 = 14LL;

    t13 = ((x53%(x54|x55))-x56);

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 207U;
	static int16_t x58 = INT16_MAX;
	int16_t x59 = -1;
	int16_t x60 = 43;

    t14 = ((x57%(x58|x59))-x60);

    if (t14 != 164U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MAX;
	int64_t x62 = INT64_MAX;
	volatile int64_t x63 = 378159660135411LL;
	static int32_t x64 = 1826;

    t15 = ((x61%(x62|x63))-x64);

    if (t15 != 2147481821LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x67 = INT8_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 445179031LLU;

    t16 = ((x65%(x66|x67))-x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = -6;
	static int16_t x72 = -1;
	int32_t t17 = -820;

    t17 = ((x69%(x70|x71))-x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;

    t18 = ((x73%(x74|x75))-x76);

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -55;
	uint8_t x78 = 86U;
	static int32_t x79 = INT32_MAX;

    t19 = ((x77%(x78|x79))-x80);

    if (t19 != -99) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	static int8_t x83 = INT8_MIN;
	volatile uint64_t t20 = 52347553792573808LLU;

    t20 = ((x81%(x82|x83))-x84);

    if (t20 != 18446744073709467375LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = INT64_MIN;
	volatile uint16_t x86 = 493U;
	int32_t x87 = -1;
	int64_t t21 = -31723LL;

    t21 = ((x85%(x86|x87))-x88);

    if (t21 != 3LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = 5;
	volatile uint32_t x90 = 4U;
	static int64_t x91 = INT64_MAX;
	static int16_t x92 = INT16_MAX;
	volatile int64_t t22 = -1027427650820200748LL;

    t22 = ((x89%(x90|x91))-x92);

    if (t22 != -32762LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = 18;
	uint64_t x94 = UINT64_MAX;
	volatile int64_t x95 = INT64_MAX;
	static int16_t x96 = 1;
	static volatile uint64_t t23 = 269911841238990725LLU;

    t23 = ((x93%(x94|x95))-x96);

    if (t23 != 17LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 38U;
	static uint32_t x102 = 37786442U;
	uint32_t x103 = UINT32_MAX;
	static uint32_t t24 = 2557U;

    t24 = ((x101%(x102|x103))-x104);

    if (t24 != 4294901799U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = UINT8_MAX;
	int16_t x107 = 29;
	uint32_t x108 = 847U;
	volatile uint32_t t25 = 580018165U;

    t25 = ((x105%(x106|x107))-x108);

    if (t25 != 4294966450U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -1LL;
	int64_t x110 = INT64_MIN;
	volatile int16_t x111 = INT16_MIN;
	int64_t x112 = -1564765LL;
	static int64_t t26 = -115896108LL;

    t26 = ((x109%(x110|x111))-x112);

    if (t26 != 1564764LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	uint8_t x115 = 0U;
	int16_t x116 = INT16_MIN;
	static volatile int64_t t27 = -2874650902824667396LL;

    t27 = ((x113%(x114|x115))-x116);

    if (t27 != 32768LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = 28U;
	volatile int32_t x119 = INT32_MIN;
	int8_t x120 = INT8_MAX;
	int32_t t28 = -216;

    t28 = ((x117%(x118|x119))-x120);

    if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x121 = -3;
	int8_t x122 = 0;
	volatile int64_t x123 = -1LL;
	int16_t x124 = -4;
	static int64_t t29 = 388425869643220LL;

    t29 = ((x121%(x122|x123))-x124);

    if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	static uint64_t x127 = 978LLU;
	uint16_t x128 = 1739U;
	uint64_t t30 = 0LLU;

    t30 = ((x125%(x126|x127))-x128);

    if (t30 != 18446744073709517109LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x130 = -104747;
	int8_t x131 = INT8_MIN;
	int32_t t31 = -8;

    t31 = ((x129%(x130|x131))-x132);

    if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = 0;
	int64_t x134 = 554338011172327933LL;
	static int32_t x136 = -1;
	static int64_t t32 = -4072523114972429LL;

    t32 = ((x133%(x134|x135))-x136);

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x137 = 249726240679LLU;
	int32_t x139 = -833388;
	int32_t x140 = -1;
	static uint64_t t33 = 3LLU;

    t33 = ((x137%(x138|x139))-x140);

    if (t33 != 249726240680LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x142 = 64U;
	uint32_t x144 = 104U;
	static volatile uint64_t t34 = 420431835857LLU;

    t34 = ((x141%(x142|x143))-x144);

    if (t34 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = -12145530LL;
	static volatile uint32_t x146 = 7281U;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = UINT16_MAX;
	static volatile int64_t t35 = -2244972700765081697LL;

    t35 = ((x145%(x146|x147))-x148);

    if (t35 != -12211065LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = 62013U;
	int64_t x150 = INT64_MIN;
	static int16_t x151 = 672;
	volatile int16_t x152 = -6765;

    t36 = ((x149%(x150|x151))-x152);

    if (t36 != 68778LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = 49108374800LL;
	int32_t x154 = INT32_MIN;
	volatile uint64_t x155 = 138542461437696019LLU;
	int8_t x156 = 3;
	uint64_t t37 = 12689820087260LLU;

    t37 = ((x153%(x154|x155))-x156);

    if (t37 != 49108374797LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = UINT32_MAX;
	volatile int16_t x158 = INT16_MAX;
	static int16_t x159 = -1;
	volatile int16_t x160 = -24;

    t38 = ((x157%(x158|x159))-x160);

    if (t38 != 24U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = INT8_MAX;
	static volatile int16_t x162 = INT16_MIN;
	static volatile uint32_t x163 = UINT32_MAX;
	static int32_t x164 = -1;
	uint32_t t39 = 1381U;

    t39 = ((x161%(x162|x163))-x164);

    if (t39 != 128U) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x165 = -1;
	int16_t x166 = INT16_MAX;
	volatile int16_t x168 = INT16_MAX;
	int32_t t40 = -7083;

    t40 = ((x165%(x166|x167))-x168);

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x170 = 2133266;
	volatile int8_t x171 = 0;
	static int64_t x172 = -1LL;
	int64_t t41 = -1966337934341LL;

    t41 = ((x169%(x170|x171))-x172);

    if (t41 != 32768LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x173 = -1LL;
	static volatile int64_t x175 = 1407161689404LL;
	int16_t x176 = -1;
	static int64_t t42 = -611126552365LL;

    t42 = ((x173%(x174|x175))-x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x177 = INT32_MIN;
	int16_t x180 = -1;
	uint64_t t43 = 21214039336561635LLU;

    t43 = ((x177%(x178|x179))-x180);

    if (t43 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MAX;
	uint8_t x182 = 63U;
	volatile uint32_t x183 = 13U;
	static uint32_t t44 = 1079U;

    t44 = ((x181%(x182|x183))-x184);

    if (t44 != 2147483649U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x186 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	uint64_t t45 = 2234760618071111LLU;

    t45 = ((x185%(x186|x187))-x188);

    if (t45 != 9223372036854777786LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x189 = 0U;
	uint32_t x190 = 25675U;
	static volatile int8_t x191 = 3;
	int32_t x192 = 0;
	static uint32_t t46 = 347816U;

    t46 = ((x189%(x190|x191))-x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 0U;
	int8_t x195 = INT8_MAX;
	int64_t x196 = -1LL;
	int64_t t47 = 3268104LL;

    t47 = ((x193%(x194|x195))-x196);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = UINT16_MAX;
	static volatile int32_t t48 = -376;

    t48 = ((x197%(x198|x199))-x200);

    if (t48 != -65537) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x201 = UINT32_MAX;
	volatile int64_t x202 = -125031679992365LL;
	volatile uint64_t x204 = 244317231390283686LLU;
	volatile uint64_t t49 = 17816264470LLU;

    t49 = ((x201%(x202|x203))-x204);

    if (t49 != 18202426846614235225LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x205 = INT32_MIN;
	volatile int16_t x206 = 0;
	uint32_t x207 = UINT32_MAX;
	volatile uint32_t t50 = 3049U;

    t50 = ((x205%(x206|x207))-x208);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = 1286067576179255LL;
	int16_t x210 = -1;
	volatile int64_t x211 = INT64_MIN;
	static uint16_t x212 = UINT16_MAX;

    t51 = ((x209%(x210|x211))-x212);

    if (t51 != -65535LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = 48U;
	int64_t x214 = -9083221973649LL;
	volatile int64_t x215 = -1LL;
	volatile int16_t x216 = INT16_MAX;
	static volatile int64_t t52 = 7953761LL;

    t52 = ((x213%(x214|x215))-x216);

    if (t52 != -32767LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = UINT8_MAX;
	volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -468098187372579LL;
	uint32_t x220 = 46673996U;

    t53 = ((x217%(x218|x219))-x220);

    if (t53 != -46673741LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x222 = 1645416721374LL;
	int16_t x223 = INT16_MAX;
	int64_t x224 = -1724798929355520LL;
	int64_t t54 = -3268413875491578416LL;

    t54 = ((x221%(x222|x223))-x224);

    if (t54 != 1724798929322752LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = -1;
	uint32_t x226 = 835080179U;
	int64_t x227 = INT64_MIN;

    t55 = ((x225%(x226|x227))-x228);

    if (t55 != -65536LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x229 = INT8_MAX;
	uint8_t x230 = 0U;
	int64_t x231 = INT64_MAX;
	static int8_t x232 = INT8_MIN;
	int64_t t56 = -47414720048LL;

    t56 = ((x229%(x230|x231))-x232);

    if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x234 = -197612LL;
	uint32_t x236 = 625473U;
	int64_t t57 = -62LL;

    t57 = ((x233%(x234|x235))-x236);

    if (t57 != -625481LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x237 = INT8_MIN;
	volatile int32_t x238 = 1033331;
	uint8_t x239 = 116U;
	static uint64_t x240 = 0LLU;
	static uint64_t t58 = 193242409LLU;

    t58 = ((x237%(x238|x239))-x240);

    if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = -15;
	int8_t x242 = INT8_MIN;
	static uint64_t x243 = 300612734100618030LLU;
	int32_t x244 = 51221209;
	uint64_t t59 = 17194392986LLU;

    t59 = ((x241%(x242|x243))-x244);

    if (t59 != 18446744073658330474LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MIN;
	static int16_t x250 = -1;
	int16_t x251 = -1;

    t60 = ((x249%(x250|x251))-x252);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = INT64_MAX;
	uint32_t x254 = 2U;
	static int8_t x255 = 32;
	static int8_t x256 = INT8_MIN;
	int64_t t61 = 46447943812617475LL;

    t61 = ((x253%(x254|x255))-x256);

    if (t61 != 153LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x257 = -176;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = -5;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t62 = 32199U;

    t62 = ((x257%(x258|x259))-x260);

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1;
	int16_t x263 = 1;
	int64_t x264 = INT64_MIN;
	static int64_t t63 = INT64_MAX;

    t63 = ((x261%(x262|x263))-x264);

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x266 = -1;
	int8_t x267 = INT8_MAX;
	uint32_t x268 = UINT32_MAX;

    t64 = ((x265%(x266|x267))-x268);

    if (t64 != -4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = -1;
	uint8_t x270 = 1U;
	volatile int32_t t65 = -90;

    t65 = ((x269%(x270|x271))-x272);

    if (t65 != -256) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x277 = 421;
	int16_t x278 = INT16_MAX;
	static int32_t x279 = INT32_MIN;
	uint64_t t66 = 9157703738835140950LLU;

    t66 = ((x277%(x278|x279))-x280);

    if (t66 != 422LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x282 = -1;
	uint8_t x283 = 1U;
	int32_t x284 = 1;
	int64_t t67 = -250762056LL;

    t67 = ((x281%(x282|x283))-x284);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = -947;
	int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	volatile uint8_t x288 = UINT8_MAX;
	static volatile int32_t t68 = 21505048;

    t68 = ((x285%(x286|x287))-x288);

    if (t68 != -306) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x289 = 1;
	volatile int8_t x290 = INT8_MAX;
	static int64_t x291 = -1LL;
	uint32_t x292 = UINT32_MAX;
	static int64_t t69 = 252953120272LL;

    t69 = ((x289%(x290|x291))-x292);

    if (t69 != -4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x293 = 2U;
	int32_t x294 = -1;
	uint32_t x295 = 1005U;
	uint16_t x296 = 2770U;

    t70 = ((x293%(x294|x295))-x296);

    if (t70 != 4294964528U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x298 = 61U;
	static int8_t x299 = INT8_MAX;
	uint32_t t71 = 74U;

    t71 = ((x297%(x298|x299))-x300);

    if (t71 != 143U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x303 = 107544457555LLU;
	uint8_t x304 = 38U;
	static volatile uint64_t t72 = 137820976721202091LLU;

    t72 = ((x301%(x302|x303))-x304);

    if (t72 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = -3213121;
	volatile int16_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = 6;

    t73 = ((x305%(x306|x307))-x308);

    if (t73 != -6) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = 177U;
	int32_t x310 = INT32_MIN;
	int8_t x311 = 0;
	int16_t x312 = -1;
	volatile uint32_t t74 = 373863U;

    t74 = ((x309%(x310|x311))-x312);

    if (t74 != 178U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -1;
	uint16_t x315 = UINT16_MAX;
	uint32_t x316 = UINT32_MAX;
	static uint32_t t75 = 31U;

    t75 = ((x313%(x314|x315))-x316);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x319 = -1;
	uint16_t x320 = 1U;
	volatile int32_t t76 = 57;

    t76 = ((x317%(x318|x319))-x320);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x322 = 54301061;
	uint32_t t77 = 3238777U;

    t77 = ((x321%(x322|x323))-x324);

    if (t77 != 256U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -1;
	uint8_t x328 = 1U;
	int64_t t78 = -1353195983019LL;

    t78 = ((x325%(x326|x327))-x328);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = 6U;
	uint32_t x331 = UINT32_MAX;
	uint16_t x332 = 5917U;
	uint64_t t79 = 36445300LLU;

    t79 = ((x329%(x330|x331))-x332);

    if (t79 != 18446744073709545705LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = -54;
	int8_t x336 = -1;
	static volatile int64_t t80 = -11970502715552916LL;

    t80 = ((x333%(x334|x335))-x336);

    if (t80 != -25LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = -1;
	uint64_t x338 = 2898235386021963LLU;
	int8_t x340 = -1;
	uint64_t t81 = 123949746LLU;

    t81 = ((x337%(x338|x339))-x340);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x341 = UINT64_MAX;
	static volatile int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MAX;
	int32_t x344 = -1;
	static uint64_t t82 = 1772LLU;

    t82 = ((x341%(x342|x343))-x344);

    if (t82 != 32641LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x345 = 0U;
	static volatile int64_t x346 = -1LL;
	int16_t x347 = -2;
	int64_t x348 = -1LL;

    t83 = ((x345%(x346|x347))-x348);

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x349 = 112U;
	uint64_t x350 = 1400LLU;
	static uint16_t x351 = 198U;
	uint8_t x352 = UINT8_MAX;

    t84 = ((x349%(x350|x351))-x352);

    if (t84 != 18446744073709551473LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MIN;
	uint64_t x354 = 10LLU;
	uint8_t x355 = 22U;
	volatile uint64_t t85 = 314821LLU;

    t85 = ((x353%(x354|x355))-x356);

    if (t85 != 18446744069414584329LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x357 = 2779176035887657684LLU;
	uint16_t x358 = 5U;
	static volatile uint8_t x359 = 2U;

    t86 = ((x357%(x358|x359))-x360);

    if (t86 != 6918327000966LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = INT64_MAX;
	int32_t x362 = -1;
	static int8_t x363 = -1;
	static volatile int64_t t87 = -14614LL;

    t87 = ((x361%(x362|x363))-x364);

    if (t87 != -65535LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = INT64_MAX;
	int16_t x366 = -1;
	static int8_t x367 = -1;
	uint32_t x368 = 46U;
	volatile int64_t t88 = 4LL;

    t88 = ((x365%(x366|x367))-x368);

    if (t88 != -46LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x369 = -1;
	volatile int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	static int64_t x372 = INT64_MIN;
	int64_t t89 = INT64_MAX;

    t89 = ((x369%(x370|x371))-x372);

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MIN;
	int8_t x376 = -9;
	static uint64_t t90 = 90984043108083LLU;

    t90 = ((x373%(x374|x375))-x376);

    if (t90 != 9LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = INT32_MAX;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -3;
	static volatile int32_t t91 = -166324302;

    t91 = ((x377%(x378|x379))-x380);

    if (t91 != 130) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MAX;
	volatile int32_t x383 = 10;
	int16_t x384 = -117;
	volatile int32_t t92 = 13;

    t92 = ((x381%(x382|x383))-x384);

    if (t92 != 115) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = 17386234250288861LL;
	volatile int32_t x386 = INT32_MIN;
	static int16_t x387 = -1827;
	static volatile int8_t x388 = -1;
	static int64_t t93 = 486452164102494LL;

    t93 = ((x385%(x386|x387))-x388);

    if (t93 != 1218LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x389 = -1;
	volatile int8_t x390 = 3;
	uint16_t x391 = UINT16_MAX;
	int32_t x392 = -276567;

    t94 = ((x389%(x390|x391))-x392);

    if (t94 != 276566) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x393 = 568;
	volatile uint8_t x394 = UINT8_MAX;
	static volatile uint16_t x395 = 4U;
	int32_t x396 = 8;
	static int32_t t95 = -63;

    t95 = ((x393%(x394|x395))-x396);

    if (t95 != 50) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	volatile int32_t x400 = INT32_MAX;
	int64_t t96 = -57646635473LL;

    t96 = ((x397%(x398|x399))-x400);

    if (t96 != -2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x401 = 15U;
	int32_t x402 = -3136;
	int64_t x403 = 7339332651601233LL;
	uint8_t x404 = UINT8_MAX;

    t97 = ((x401%(x402|x403))-x404);

    if (t97 != -240LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x410 = UINT16_MAX;
	volatile uint8_t x411 = 10U;
	int16_t x412 = -28;

    t98 = ((x409%(x410|x411))-x412);

    if (t98 != 28LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x414 = 31351750;
	static int64_t x415 = 192165068LL;
	uint64_t x416 = 699LLU;
	uint64_t t99 = 15658843371642546LLU;

    t99 = ((x413%(x414|x415))-x416);

    if (t99 != 18446744073709550933LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x417 = -809LL;
	int64_t x418 = INT64_MAX;
	int8_t x419 = 54;
	volatile uint64_t x420 = 1788LLU;
	static volatile uint64_t t100 = 19764LLU;

    t100 = ((x417%(x418|x419))-x420);

    if (t100 != 18446744073709549019LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x422 = 30;
	static uint32_t x423 = 1169388256U;
	uint32_t x424 = UINT32_MAX;
	volatile uint32_t t101 = 3514070U;

    t101 = ((x421%(x422|x423))-x424);

    if (t101 != 256U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x425 = 4U;
	volatile int32_t x426 = -1;
	int8_t x427 = INT8_MIN;
	static uint64_t x428 = 39663765908755165LLU;
	uint64_t t102 = 45313LLU;

    t102 = ((x425%(x426|x427))-x428);

    if (t102 != 18407080307800796451LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x429 = -1LL;
	int16_t x430 = INT16_MIN;
	volatile int32_t x431 = 717085773;
	volatile int64_t t103 = INT64_MIN;

    t103 = ((x429%(x430|x431))-x432);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = -49;
	uint8_t x434 = UINT8_MAX;
	volatile int8_t x435 = INT8_MIN;
	volatile int32_t x436 = 3318614;
	int32_t t104 = -122268218;

    t104 = ((x433%(x434|x435))-x436);

    if (t104 != -3318614) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x438 = 9815U;
	static int16_t x439 = -1;
	int64_t x440 = 161758026725126764LL;

    t105 = ((x437%(x438|x439))-x440);

    if (t105 != 18284986046984424852LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x441 = 2U;
	static volatile uint32_t x442 = UINT32_MAX;
	uint8_t x443 = 91U;
	static uint8_t x444 = 1U;

    t106 = ((x441%(x442|x443))-x444);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x446 = -1532276395886141757LL;
	uint32_t x447 = 97U;
	int8_t x448 = 6;
	volatile int64_t t107 = -29138LL;

    t107 = ((x445%(x446|x447))-x448);

    if (t107 != -65425443130LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x450 = INT32_MIN;
	uint16_t x451 = 14U;
	volatile uint32_t t108 = 383U;

    t108 = ((x449%(x450|x451))-x452);

    if (t108 != 32768U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x453 = INT32_MIN;
	volatile int32_t x454 = INT32_MIN;
	uint32_t x455 = 64U;
	static volatile uint32_t t109 = 310334371U;

    t109 = ((x453%(x454|x455))-x456);

    if (t109 != 2147516416U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x457 = 1LL;
	uint32_t x458 = UINT32_MAX;
	uint8_t x459 = 18U;
	int16_t x460 = INT16_MAX;

    t110 = ((x457%(x458|x459))-x460);

    if (t110 != -32766LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x461 = -1LL;
	int8_t x462 = -1;
	int16_t x463 = INT16_MAX;
	volatile int64_t t111 = -1130290182586950497LL;

    t111 = ((x461%(x462|x463))-x464);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x466 = -1LL;
	int16_t x467 = INT16_MIN;
	uint64_t x468 = 60LLU;
	uint64_t t112 = 123244LLU;

    t112 = ((x465%(x466|x467))-x468);

    if (t112 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = INT64_MIN;
	volatile int16_t x471 = INT16_MIN;
	int64_t x472 = -1LL;
	static volatile int64_t t113 = 61661LL;

    t113 = ((x469%(x470|x471))-x472);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x473 = -3;
	static int32_t x476 = INT32_MIN;
	volatile int64_t t114 = 5789170286799191LL;

    t114 = ((x473%(x474|x475))-x476);

    if (t114 != 2147483645LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x478 = 40U;
	uint8_t x480 = 32U;

    t115 = ((x477%(x478|x479))-x480);

    if (t115 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = -3LL;
	int64_t x483 = -469LL;
	uint8_t x484 = 49U;

    t116 = ((x481%(x482|x483))-x484);

    if (t116 != -52LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x485 = INT64_MIN;
	uint8_t x487 = 85U;
	int8_t x488 = INT8_MIN;

    t117 = ((x485%(x486|x487))-x488);

    if (t117 != 85LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x489 = 66LLU;
	volatile uint16_t x491 = 287U;
	uint64_t x492 = 689075095235LLU;
	uint64_t t118 = 971LLU;

    t118 = ((x489%(x490|x491))-x492);

    if (t118 != 18446743384634456447LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x493 = 21U;
	int8_t x495 = -1;

    t119 = ((x493%(x494|x495))-x496);

    if (t119 != 3747628343799LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x497 = INT64_MAX;
	int32_t x498 = 13926;
	int16_t x499 = 0;
	uint64_t x500 = UINT64_MAX;

    t120 = ((x497%(x498|x499))-x500);

    if (t120 != 140LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x501 = 2213699;
	uint32_t x502 = 254695468U;
	int16_t x503 = -33;

    t121 = ((x501%(x502|x503))-x504);

    if (t121 != 2189763U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = INT16_MIN;
	static int64_t x507 = 1LL;
	uint8_t x508 = 4U;

    t122 = ((x505%(x506|x507))-x508);

    if (t122 != -5LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x510 = INT64_MIN;
	static uint32_t x512 = 317394405U;
	volatile int64_t t123 = 1LL;

    t123 = ((x509%(x510|x511))-x512);

    if (t123 != -2464878053LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = -1;
	int32_t x514 = 10288584;
	int16_t x515 = INT16_MIN;
	volatile uint64_t x516 = 87335651827976691LLU;

    t124 = ((x513%(x514|x515))-x516);

    if (t124 != 18359408421881574924LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x518 = INT32_MIN;
	volatile uint64_t x519 = 181LLU;
	int16_t x520 = -1;
	volatile uint64_t t125 = 3330724058853LLU;

    t125 = ((x517%(x518|x519))-x520);

    if (t125 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x521 = 91;
	static int8_t x522 = 6;
	volatile int8_t x523 = INT8_MAX;
	int16_t x524 = INT16_MIN;

    t126 = ((x521%(x522|x523))-x524);

    if (t126 != 32859) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x527 = INT64_MIN;
	volatile int32_t x528 = INT32_MAX;
	volatile int64_t t127 = 1LL;

    t127 = ((x525%(x526|x527))-x528);

    if (t127 != -2147483647LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x529 = 0;
	volatile uint8_t x532 = 43U;
	int32_t t128 = 17;

    t128 = ((x529%(x530|x531))-x532);

    if (t128 != -43) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = -1;
	volatile uint8_t x534 = 38U;
	int16_t x536 = INT16_MIN;
	volatile int32_t t129 = 1956;

    t129 = ((x533%(x534|x535))-x536);

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x537 = 3U;
	uint16_t x540 = 24289U;

    t130 = ((x537%(x538|x539))-x540);

    if (t130 != 4294943010U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x541 = -1;
	static int16_t x542 = 1552;
	int32_t x543 = INT32_MIN;
	static volatile int16_t x544 = 274;
	volatile int32_t t131 = 86265066;

    t131 = ((x541%(x542|x543))-x544);

    if (t131 != -275) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x545 = INT32_MIN;
	int32_t x546 = -4211235;

    t132 = ((x545%(x546|x547))-x548);

    if (t132 != -4294967295LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x549 = 0U;
	int8_t x550 = 49;
	int8_t x551 = INT8_MAX;
	volatile int32_t x552 = INT32_MAX;
	volatile uint32_t t133 = 6921038U;

    t133 = ((x549%(x550|x551))-x552);

    if (t133 != 2147483649U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x553 = 7U;
	static int16_t x554 = -1;
	static int32_t x556 = INT32_MIN;
	volatile uint32_t t134 = 29U;

    t134 = ((x553%(x554|x555))-x556);

    if (t134 != 2147483655U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x558 = INT16_MIN;
	static uint64_t x559 = 1225LLU;
	int32_t x560 = INT32_MAX;
	uint64_t t135 = 63801384826555080LLU;

    t135 = ((x557%(x558|x559))-x560);

    if (t135 != 18446744071562099511LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = 1120409132861LLU;
	static int16_t x562 = -1;
	static int16_t x563 = 1;
	volatile uint8_t x564 = UINT8_MAX;
	uint64_t t136 = 92572713LLU;

    t136 = ((x561%(x562|x563))-x564);

    if (t136 != 1120409132606LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x566 = 14064268065LL;
	volatile int32_t x567 = 5900;
	int64_t t137 = 18376668635LL;

    t137 = ((x565%(x566|x567))-x568);

    if (t137 != -65535LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = UINT32_MAX;
	int64_t x570 = INT64_MAX;
	uint8_t x571 = 102U;
	uint64_t x572 = 3334288205915LLU;
	uint64_t t138 = 1412250284940977608LLU;

    t138 = ((x569%(x570|x571))-x572);

    if (t138 != 18446740743716312996LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x573 = 0U;
	int64_t x574 = INT64_MAX;
	int8_t x575 = 1;
	uint32_t x576 = 373U;

    t139 = ((x573%(x574|x575))-x576);

    if (t139 != -373LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = 748;
	uint32_t x578 = 15998501U;
	static uint64_t x579 = 177833607LLU;
	uint64_t x580 = 15053564614004LLU;
	uint64_t t140 = 1868915LLU;

    t140 = ((x577%(x578|x579))-x580);

    if (t140 != 18446729020144938360LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = 231;
	int32_t x582 = INT32_MAX;
	int16_t x583 = INT16_MAX;
	volatile int32_t x584 = -19568;
	volatile int32_t t141 = 304387;

    t141 = ((x581%(x582|x583))-x584);

    if (t141 != 19799) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x586 = UINT16_MAX;
	static uint64_t x587 = 20LLU;

    t142 = ((x585%(x586|x587))-x588);

    if (t142 != 37702LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x594 = -1;
	volatile int32_t x595 = -17425;
	uint16_t x596 = UINT16_MAX;
	int32_t t143 = -517778668;

    t143 = ((x593%(x594|x595))-x596);

    if (t143 != -65535) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x601 = 16U;
	int64_t x602 = -1LL;
	int16_t x603 = INT16_MIN;
	static volatile int32_t x604 = 5061;
	int64_t t144 = -28LL;

    t144 = ((x601%(x602|x603))-x604);

    if (t144 != -5061LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = INT16_MAX;
	int32_t x606 = INT32_MAX;
	int16_t x608 = 1;
	int32_t t145 = 2;

    t145 = ((x605%(x606|x607))-x608);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x609 = INT16_MAX;
	int32_t x612 = -17;
	volatile int32_t t146 = -786231;

    t146 = ((x609%(x610|x611))-x612);

    if (t146 != 314) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x613 = -6;
	uint32_t x614 = 4976297U;
	uint16_t x615 = UINT16_MAX;
	static int32_t x616 = 11223;

    t147 = ((x613%(x614|x615))-x616);

    if (t147 != 1562497U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x617 = INT64_MIN;
	uint16_t x620 = 1U;
	uint64_t t148 = 9161762755286838511LLU;

    t148 = ((x617%(x618|x619))-x620);

    if (t148 != 26860LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = UINT8_MAX;
	uint8_t x623 = 69U;
	static uint8_t x624 = 0U;
	volatile int32_t t149 = 696;

    t149 = ((x621%(x622|x623))-x624);

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x625 = 171522764524LLU;
	int8_t x626 = -1;
	int8_t x627 = INT8_MIN;
	uint16_t x628 = 124U;
	uint64_t t150 = 295387LLU;

    t150 = ((x625%(x626|x627))-x628);

    if (t150 != 171522764400LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x629 = 0U;
	int64_t x630 = -1LL;
	int8_t x631 = INT8_MAX;
	int8_t x632 = INT8_MIN;
	int64_t t151 = -137444688LL;

    t151 = ((x629%(x630|x631))-x632);

    if (t151 != 128LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x633 = INT64_MAX;
	int32_t x634 = 13123226;
	int16_t x635 = 2;
	uint8_t x636 = 5U;
	int64_t t152 = -100793134945041064LL;

    t152 = ((x633%(x634|x635))-x636);

    if (t152 != 397772LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x642 = -1LL;
	uint8_t x643 = 88U;
	int64_t t153 = 1531LL;

    t153 = ((x641%(x642|x643))-x644);

    if (t153 != -4294967295LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x646 = INT64_MAX;
	static volatile int64_t x647 = INT64_MAX;
	static uint64_t x648 = 183499055308159LLU;

    t154 = ((x645%(x646|x647))-x648);

    if (t154 != 18446560574654276224LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x650 = -1;
	int16_t x651 = INT16_MAX;
	int16_t x652 = -1;
	static volatile int32_t t155 = -132284382;

    t155 = ((x649%(x650|x651))-x652);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = 225848932894876509LL;
	int16_t x656 = 1012;
	int64_t t156 = 0LL;

    t156 = ((x653%(x654|x655))-x656);

    if (t156 != -1011LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x657 = INT16_MAX;
	static uint16_t x660 = 50U;
	static volatile int64_t t157 = -5563174876690062LL;

    t157 = ((x657%(x658|x659))-x660);

    if (t157 != 32717LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x661 = INT32_MIN;
	uint16_t x662 = UINT16_MAX;
	int64_t x664 = 33LL;
	int64_t t158 = 248404549438807460LL;

    t158 = ((x661%(x662|x663))-x664);

    if (t158 != -32801LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x665 = -1;
	uint8_t x666 = 2U;
	volatile int64_t x667 = 2LL;
	volatile int64_t t159 = -7366729LL;

    t159 = ((x665%(x666|x667))-x668);

    if (t159 != -133LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x669 = INT8_MAX;
	int16_t x671 = -1;
	volatile int64_t x672 = INT64_MIN;

    t160 = ((x669%(x670|x671))-x672);

    if (t160 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x678 = -1;
	volatile int32_t x679 = INT32_MAX;
	int16_t x680 = INT16_MIN;

    t161 = ((x677%(x678|x679))-x680);

    if (t161 != 32768LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x681 = -1;
	int32_t x683 = INT32_MIN;
	static int32_t x684 = INT32_MIN;
	int32_t t162 = INT32_MAX;

    t162 = ((x681%(x682|x683))-x684);

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x685 = 599;
	uint64_t x686 = UINT64_MAX;
	volatile int64_t x687 = -1LL;
	volatile int16_t x688 = 1;

    t163 = ((x685%(x686|x687))-x688);

    if (t163 != 598LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x689 = -1;
	volatile int32_t x690 = INT32_MAX;
	int32_t x691 = INT32_MIN;
	uint32_t t164 = 244754625U;

    t164 = ((x689%(x690|x691))-x692);

    if (t164 != 4294949363U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MIN;
	uint64_t x696 = 13407172897LLU;
	static volatile uint64_t t165 = 190689765598234LLU;

    t165 = ((x693%(x694|x695))-x696);

    if (t165 != 18446744060302378719LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x698 = 1971U;
	uint16_t x700 = UINT16_MAX;

    t166 = ((x697%(x698|x699))-x700);

    if (t166 != -65535LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x701 = INT64_MAX;
	int64_t x702 = -1LL;
	static int32_t x703 = INT32_MAX;
	static volatile int32_t x704 = -3366439;
	volatile int64_t t167 = -12454LL;

    t167 = ((x701%(x702|x703))-x704);

    if (t167 != 3366439LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = -1;
	int8_t x706 = -17;
	volatile int8_t x708 = INT8_MIN;
	static int32_t t168 = 55516050;

    t168 = ((x705%(x706|x707))-x708);

    if (t168 != 128) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x715 = INT8_MIN;
	uint64_t x716 = 10789489LLU;
	static volatile uint64_t t169 = 1LLU;

    t169 = ((x713%(x714|x715))-x716);

    if (t169 != 18446744073698762248LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x717 = -1;
	static int64_t x720 = 29753636276989LL;

    t170 = ((x717%(x718|x719))-x720);

    if (t170 != -29753636276990LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x721 = INT16_MIN;
	uint64_t x722 = 588315781516194156LLU;
	static volatile uint8_t x723 = UINT8_MAX;
	volatile uint16_t x724 = 2327U;
	static volatile uint64_t t171 = 808LLU;

    t171 = ((x721%(x722|x723))-x724);

    if (t171 != 208954846707493128LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x725 = -1;
	volatile int32_t x726 = -1463;
	static uint64_t x727 = 3953956415893896234LLU;
	int32_t x728 = -43671;

    t172 = ((x725%(x726|x727))-x728);

    if (t172 != 44075LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x731 = INT16_MIN;
	uint64_t x732 = UINT64_MAX;
	uint64_t t173 = 1370170637126473305LLU;

    t173 = ((x729%(x730|x731))-x732);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x733 = -1LL;
	int32_t x734 = 41854995;
	int16_t x735 = -1;
	uint8_t x736 = 34U;
	static int64_t t174 = -3884356933LL;

    t174 = ((x733%(x734|x735))-x736);

    if (t174 != -34LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x737 = -50;
	int32_t x738 = INT32_MAX;
	static int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MIN;
	int64_t t175 = -33104LL;

    t175 = ((x737%(x738|x739))-x740);

    if (t175 != 78LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x741 = 258507063U;
	volatile uint64_t x742 = UINT64_MAX;
	volatile int8_t x744 = INT8_MIN;
	static uint64_t t176 = 704964539959546361LLU;

    t176 = ((x741%(x742|x743))-x744);

    if (t176 != 258507191LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x745 = INT64_MIN;
	static uint16_t x746 = 322U;
	int64_t t177 = -302901355LL;

    t177 = ((x745%(x746|x747))-x748);

    if (t177 != -5288791LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int32_t x750 = INT32_MIN;
	int16_t x751 = INT16_MIN;
	int16_t x752 = 27;
	static int32_t t178 = 3291357;

    t178 = ((x749%(x750|x751))-x752);

    if (t178 != 32740) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x754 = INT64_MIN;
	volatile int8_t x756 = -1;

    t179 = ((x753%(x754|x755))-x756);

    if (t179 != 4LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x758 = 95;
	static volatile uint32_t x759 = 11U;
	uint8_t x760 = 1U;

    t180 = ((x757%(x758|x759))-x760);

    if (t180 != 4U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x761 = 1U;
	int8_t x762 = 14;
	uint8_t x763 = UINT8_MAX;
	uint16_t x764 = 9U;
	volatile int32_t t181 = 71;

    t181 = ((x761%(x762|x763))-x764);

    if (t181 != -8) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x765 = -1796938147906107276LL;
	int64_t x766 = 15443193854LL;
	int8_t x767 = -1;
	volatile uint16_t x768 = UINT16_MAX;
	static volatile int64_t t182 = 487466535770LL;

    t182 = ((x765%(x766|x767))-x768);

    if (t182 != -65535LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x769 = INT32_MAX;
	uint8_t x770 = 78U;
	int64_t x771 = 1508492020LL;
	static uint64_t x772 = UINT64_MAX;

    t183 = ((x769%(x770|x771))-x772);

    if (t183 != 638991618LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x773 = INT64_MAX;
	static volatile uint32_t x775 = UINT32_MAX;
	uint8_t x776 = 105U;
	int64_t t184 = -44LL;

    t184 = ((x773%(x774|x775))-x776);

    if (t184 != 2147483542LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x777 = INT64_MIN;
	int64_t x778 = 13681LL;
	volatile uint8_t x779 = UINT8_MAX;
	static uint8_t x780 = 110U;
	volatile int64_t t185 = -38742456713740LL;

    t185 = ((x777%(x778|x779))-x780);

    if (t185 != -3494LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x781 = INT8_MIN;
	int32_t x782 = 1556093;
	uint8_t x783 = 8U;
	int64_t x784 = INT64_MIN;
	volatile int64_t t186 = 689072322097069LL;

    t186 = ((x781%(x782|x783))-x784);

    if (t186 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x785 = INT16_MIN;
	volatile int16_t x786 = INT16_MAX;
	static int32_t x787 = INT32_MIN;
	int32_t x788 = INT32_MIN;
	int32_t t187 = 2;

    t187 = ((x785%(x786|x787))-x788);

    if (t187 != 2147450880) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x789 = UINT32_MAX;
	uint64_t x790 = 11031747407970728LLU;
	int8_t x791 = 2;
	int16_t x792 = INT16_MAX;

    t188 = ((x789%(x790|x791))-x792);

    if (t188 != 4294934528LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x794 = -102008;
	int32_t x795 = -1;
	int16_t x796 = -1;
	int32_t t189 = -1;

    t189 = ((x793%(x794|x795))-x796);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x797 = UINT64_MAX;
	int8_t x800 = -1;

    t190 = ((x797%(x798|x799))-x800);

    if (t190 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x801 = -1;
	int64_t x803 = -1LL;
	volatile int8_t x804 = -1;

    t191 = ((x801%(x802|x803))-x804);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x805 = INT16_MIN;
	uint16_t x808 = UINT16_MAX;
	static uint64_t t192 = 0LLU;

    t192 = ((x805%(x806|x807))-x808);

    if (t192 != 18446744073709453313LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x809 = -1;
	int32_t x810 = -1720;
	int64_t x811 = -1LL;
	uint8_t x812 = 0U;
	int64_t t193 = 1042090651254951LL;

    t193 = ((x809%(x810|x811))-x812);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x813 = 219;
	static int32_t x814 = INT32_MAX;
	uint16_t x815 = 9939U;
	static volatile int8_t x816 = -50;
	static volatile int32_t t194 = 79209632;

    t194 = ((x813%(x814|x815))-x816);

    if (t194 != 269) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = -1246;
	int64_t x826 = INT64_MIN;
	static int8_t x827 = -1;
	int32_t x828 = INT32_MIN;
	static volatile int64_t t195 = 16123LL;

    t195 = ((x825%(x826|x827))-x828);

    if (t195 != 2147483648LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x829 = INT64_MIN;
	int32_t x830 = INT32_MIN;
	int32_t x832 = INT32_MIN;
	volatile int64_t t196 = 45279165050102723LL;

    t196 = ((x829%(x830|x831))-x832);

    if (t196 != 2147483648LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x833 = INT32_MIN;
	uint64_t x834 = 206LLU;
	static uint32_t x835 = 3U;
	uint8_t x836 = UINT8_MAX;
	static uint64_t t197 = 3878176226LLU;

    t197 = ((x833%(x834|x835))-x836);

    if (t197 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x837 = -1LL;
	volatile int64_t x839 = -63062900666356LL;
	volatile uint8_t x840 = 6U;
	int64_t t198 = -259731235LL;

    t198 = ((x837%(x838|x839))-x840);

    if (t198 != -7LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x841 = UINT16_MAX;
	int32_t x843 = 46;
	static uint8_t x844 = UINT8_MAX;
	uint64_t t199 = 10890314188LLU;

    t199 = ((x841%(x842|x843))-x844);

    if (t199 != 1353LLU) { NG(); } else { ; }
	
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

