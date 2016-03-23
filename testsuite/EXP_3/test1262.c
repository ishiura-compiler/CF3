
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

int32_t x1 = -1;
uint16_t x11 = UINT16_MAX;
uint32_t x14 = 720098U;
volatile uint64_t x17 = UINT64_MAX;
uint32_t x20 = UINT32_MAX;
static int8_t x24 = INT8_MIN;
int8_t x33 = INT8_MIN;
uint32_t x35 = 74591583U;
uint16_t x36 = 3644U;
int32_t t8 = 1452;
volatile int8_t x40 = -1;
int16_t x43 = 30;
uint8_t x49 = 7U;
int64_t x50 = INT64_MAX;
uint8_t x51 = 0U;
volatile int32_t t12 = 114432625;
uint16_t x58 = 10604U;
volatile uint64_t x64 = 30LLU;
volatile int32_t t15 = 1939495;
static uint64_t x73 = 239271336091LLU;
uint16_t x74 = 841U;
static int32_t t18 = -1374;
uint8_t x77 = UINT8_MAX;
volatile int64_t x80 = INT64_MIN;
uint32_t x84 = 300U;
uint64_t x85 = 9965730412465540LLU;
uint64_t x86 = 14544821047780109LLU;
int32_t x89 = INT32_MIN;
static int32_t x96 = 22;
static int16_t x98 = -15;
int32_t t24 = 55195;
uint32_t x102 = UINT32_MAX;
static int64_t x103 = -1LL;
volatile int32_t t25 = -3014056;
int8_t x105 = -1;
static int16_t x106 = -1;
static int8_t x108 = -6;
uint8_t x112 = UINT8_MAX;
static volatile int32_t x113 = INT32_MAX;
int32_t t28 = -1625179;
static int32_t x118 = -1;
uint8_t x120 = UINT8_MAX;
static int16_t x121 = INT16_MIN;
volatile int32_t t30 = -439;
volatile int16_t x151 = -1;
static int64_t x152 = -2534LL;
int64_t x156 = 2LL;
uint32_t x161 = UINT32_MAX;
int32_t t40 = 28;
static int32_t x166 = INT32_MIN;
volatile uint16_t x169 = 238U;
static volatile int64_t x171 = INT64_MIN;
static volatile int32_t t42 = 7;
static int32_t t43 = -1;
volatile int8_t x178 = INT8_MIN;
uint16_t x186 = UINT16_MAX;
uint32_t x187 = 2597U;
static uint64_t x192 = UINT64_MAX;
static uint32_t x193 = 2110U;
uint32_t x196 = 12U;
int64_t x199 = -1LL;
volatile int32_t t49 = 0;
int64_t x201 = INT64_MAX;
int32_t t51 = 20;
int32_t x210 = -56415286;
volatile int32_t t53 = -2736441;
int16_t x219 = 3929;
uint16_t x225 = 12874U;
volatile int32_t t56 = 31;
uint64_t x229 = UINT64_MAX;
int8_t x233 = INT8_MAX;
int8_t x240 = INT8_MIN;
static int32_t t59 = -28;
volatile int16_t x248 = INT16_MAX;
int64_t x252 = INT64_MAX;
volatile int8_t x255 = -12;
static int64_t x256 = INT64_MIN;
uint64_t x259 = 10685037009613469LLU;
static int16_t x263 = INT16_MIN;
volatile int32_t t65 = -1797323;
static int8_t x265 = INT8_MIN;
uint8_t x268 = UINT8_MAX;
uint8_t x271 = 1U;
uint32_t x272 = 137U;
uint8_t x281 = 14U;
static int32_t x284 = INT32_MAX;
static volatile int32_t t70 = -43221135;
static int32_t t72 = 14714765;
static volatile int8_t x294 = 26;
int32_t x295 = 110998;
static int32_t t73 = -563244595;
static int32_t x297 = INT32_MAX;
volatile uint8_t x306 = 1U;
int32_t t77 = -108516784;
volatile int64_t x320 = INT64_MAX;
int64_t x321 = 3243140843LL;
uint16_t x324 = UINT16_MAX;
volatile int32_t t80 = -112983;
volatile int64_t x326 = -1LL;
static uint8_t x331 = 0U;
int64_t x334 = -260024259386LL;
volatile int32_t t83 = 39325898;
volatile int8_t x340 = 60;
int32_t t84 = -243;
int8_t x347 = 0;
static int16_t x348 = INT16_MIN;
static volatile int32_t t87 = 2;
int16_t x356 = 6604;
static uint16_t x363 = 1106U;
uint64_t x367 = 2617089LLU;
int32_t t91 = 488;
int8_t x382 = INT8_MIN;
uint8_t x384 = UINT8_MAX;
int32_t t95 = 40781;
uint8_t x386 = 1U;
volatile int16_t x388 = 493;
int32_t t97 = -1654;
volatile int32_t t98 = 7;
int16_t x400 = 5;
int64_t x402 = -1LL;
int8_t x406 = INT8_MAX;
int64_t x408 = INT64_MAX;
static volatile int64_t x410 = INT64_MIN;
volatile int64_t x415 = -1LL;
uint32_t x420 = UINT32_MAX;
volatile uint8_t x423 = 1U;
int32_t x426 = INT32_MIN;
int32_t t106 = -125730;
int16_t x429 = INT16_MIN;
static volatile uint64_t x431 = UINT64_MAX;
int16_t x436 = INT16_MIN;
static volatile int32_t t108 = 8;
static int16_t x438 = 1;
volatile int32_t t109 = 8429;
uint64_t x443 = 4081268084427LLU;
static volatile int32_t t111 = -128553;
volatile uint8_t x454 = 1U;
volatile int64_t x455 = INT64_MAX;
int32_t t113 = 1003;
volatile int32_t x458 = INT32_MAX;
int16_t x462 = -1;
static uint64_t x468 = UINT64_MAX;
uint64_t x469 = 1868411384798871LLU;
int8_t x472 = INT8_MIN;
int64_t x477 = INT64_MIN;
int32_t x478 = 3317;
static int64_t x482 = INT64_MIN;
int64_t x485 = -1955556461LL;
int64_t x486 = INT64_MAX;
static volatile int32_t t123 = 32919419;
uint32_t x498 = 7053442U;
volatile int32_t t126 = 0;
volatile int16_t x509 = INT16_MIN;
volatile int64_t x511 = -1LL;
int16_t x512 = INT16_MIN;
int32_t x513 = 15;
volatile uint64_t x516 = 115484861674125LLU;
static uint32_t x520 = 1138864U;
volatile uint16_t x523 = UINT16_MAX;
int64_t x531 = 175124331857524399LL;
static int32_t x533 = -68;
static volatile int8_t x538 = -1;
int32_t t136 = 449;
int32_t t137 = -8643;
int64_t x562 = INT64_MAX;
int32_t x564 = INT32_MAX;
static volatile int8_t x566 = 0;
static int32_t x568 = -1;
uint8_t x578 = 1U;
int16_t x579 = -1;
static uint8_t x580 = 4U;
uint8_t x587 = 31U;
int16_t x588 = 321;
int32_t t146 = -39;
uint64_t x590 = UINT64_MAX;
int32_t t147 = 11;
int16_t x598 = INT16_MAX;
int16_t x604 = INT16_MAX;
volatile int32_t x608 = -1;
uint32_t x613 = 428197U;
static volatile uint32_t x615 = 1851061U;
static uint16_t x623 = UINT16_MAX;
int32_t t157 = -144618919;
volatile uint32_t x638 = 946202027U;
static volatile int8_t x656 = INT8_MIN;
volatile int32_t t165 = -163674488;
int16_t x666 = 0;
int32_t t167 = -376;
static uint16_t x675 = UINT16_MAX;
volatile int8_t x686 = 0;
volatile int8_t x691 = -2;
int64_t x695 = -59328051247531LL;
static int32_t x696 = INT32_MAX;
int16_t x698 = INT16_MIN;
int16_t x699 = INT16_MIN;
int64_t x705 = -1LL;
uint64_t x708 = 741913LLU;
int64_t x712 = -1126103LL;
static int64_t x718 = INT64_MAX;
volatile int32_t x724 = 53822014;
static int32_t t180 = -357;
uint32_t x725 = 470U;
uint64_t x727 = 1226045068969LLU;
int8_t x732 = -1;
int8_t x733 = INT8_MAX;
static uint16_t x736 = 18225U;
static volatile int32_t t183 = 14952846;
int32_t t184 = 7284322;
int64_t x742 = INT64_MAX;
uint64_t x751 = 833018533LLU;
int64_t x757 = INT64_MIN;
int32_t t189 = -199;
uint64_t x764 = UINT64_MAX;
static volatile uint8_t x779 = 0U;
volatile int32_t t194 = -111;
int32_t x783 = INT32_MAX;
int32_t x784 = 309187738;
volatile int32_t t195 = -119;
static int32_t t196 = 847169;
uint64_t x791 = UINT64_MAX;
int32_t t197 = -54;
uint8_t x793 = 3U;


void f0(void) {
    	int16_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	int8_t x4 = -6;
	volatile int32_t t0 = 10;

    t0 = ((x1!=x2)-(x3!=x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 343093987;
	uint16_t x6 = 312U;
	int8_t x7 = INT8_MIN;
	volatile int8_t x8 = 1;
	volatile int32_t t1 = -86527;

    t1 = ((x5!=x6)-(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -4442;
	static volatile int8_t x10 = INT8_MAX;
	static int8_t x12 = 1;
	static volatile int32_t t2 = 1477216;

    t2 = ((x9!=x10)-(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = INT32_MAX;
	int8_t x15 = INT8_MIN;
	static volatile uint16_t x16 = 19401U;
	int32_t t3 = -1738;

    t3 = ((x13!=x14)-(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = INT32_MIN;
	int32_t x19 = -455;
	static volatile int32_t t4 = 324003738;

    t4 = ((x17!=x18)-(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 11476;
	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = INT16_MIN;
	static volatile int32_t t5 = 343798;

    t5 = ((x21!=x22)-(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 27U;
	static uint32_t x26 = UINT32_MAX;
	uint16_t x27 = 21009U;
	uint16_t x28 = 27U;
	int32_t t6 = -170;

    t6 = ((x25!=x26)-(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 5105825316694LLU;
	int64_t x30 = -6930443941731599LL;
	static uint8_t x31 = 30U;
	uint16_t x32 = 1U;
	static volatile int32_t t7 = 26;

    t7 = ((x29!=x30)-(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = UINT32_MAX;

    t8 = ((x33!=x34)-(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static int8_t x38 = -1;
	int64_t x39 = 155586161157833946LL;
	volatile int32_t t9 = -117;

    t9 = ((x37!=x38)-(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int8_t x42 = 5;
	volatile uint64_t x44 = UINT64_MAX;
	int32_t t10 = -32212;

    t10 = ((x41!=x42)-(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 517145903798LLU;
	static int64_t x46 = INT64_MIN;
	static int16_t x47 = -1;
	uint16_t x48 = 1U;
	volatile int32_t t11 = -238516381;

    t11 = ((x45!=x46)-(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x52 = -1LL;

    t12 = ((x49!=x50)-(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MAX;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = -6;
	static uint16_t x56 = UINT16_MAX;
	static volatile int32_t t13 = 871270;

    t13 = ((x53!=x54)-(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 0LLU;
	static volatile uint16_t x59 = UINT16_MAX;
	int8_t x60 = -1;
	int32_t t14 = 1;

    t14 = ((x57!=x58)-(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	int8_t x62 = -25;
	uint64_t x63 = UINT64_MAX;

    t15 = ((x61!=x62)-(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 2018273708577LLU;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	int32_t x68 = -1688625;
	int32_t t16 = -6;

    t16 = ((x65!=x66)-(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	volatile uint64_t x70 = 3513660LLU;
	volatile int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 50;

    t17 = ((x69!=x70)-(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x75 = UINT8_MAX;
	volatile int32_t x76 = INT32_MIN;

    t18 = ((x73!=x74)-(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = -1;
	uint16_t x79 = UINT16_MAX;
	int32_t t19 = 51;

    t19 = ((x77!=x78)-(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 6;
	int8_t x82 = INT8_MAX;
	volatile int8_t x83 = -10;
	int32_t t20 = -24;

    t20 = ((x81!=x82)-(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x87 = INT64_MIN;
	static int16_t x88 = -1;
	static int32_t t21 = 5;

    t21 = ((x85!=x86)-(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = 503;
	volatile uint64_t x91 = 132363695010180LLU;
	int8_t x92 = 1;
	volatile int32_t t22 = 16199;

    t22 = ((x89!=x90)-(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 0;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	int32_t t23 = -1102;

    t23 = ((x93!=x94)-(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 128771183560232LLU;
	int8_t x99 = -2;
	volatile uint8_t x100 = 2U;

    t24 = ((x97!=x98)-(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	static uint32_t x104 = 53U;

    t25 = ((x101!=x102)-(x103!=x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x107 = INT8_MIN;
	int32_t t26 = -826635;

    t26 = ((x105!=x106)-(x107!=x108));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 15594;
	int32_t x110 = -1;
	volatile int32_t x111 = -3004;
	volatile int32_t t27 = 20460202;

    t27 = ((x109!=x110)-(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = 11090;
	uint32_t x115 = UINT32_MAX;
	static int16_t x116 = -1;

    t28 = ((x113!=x114)-(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int32_t x119 = 64667194;
	volatile int32_t t29 = -15342;

    t29 = ((x117!=x118)-(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x122 = 4;
	uint64_t x123 = UINT64_MAX;
	static uint16_t x124 = 13014U;

    t30 = ((x121!=x122)-(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x125 = -1;
	uint64_t x126 = 52392845646034LLU;
	volatile int32_t x127 = INT32_MIN;
	volatile int32_t x128 = -1;
	int32_t t31 = -49072711;

    t31 = ((x125!=x126)-(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = -1LL;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = 11942LL;
	int32_t t32 = 203;

    t32 = ((x129!=x130)-(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = 182507809530LLU;
	uint8_t x134 = 1U;
	volatile int64_t x135 = 831895866361388676LL;
	int8_t x136 = -1;
	static int32_t t33 = 730;

    t33 = ((x133!=x134)-(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 2U;
	static int32_t x138 = INT32_MIN;
	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	int32_t t34 = 205502;

    t34 = ((x137!=x138)-(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = -1;
	int16_t x142 = INT16_MAX;
	static int32_t x143 = -1;
	static int32_t x144 = INT32_MAX;
	static volatile int32_t t35 = 79;

    t35 = ((x141!=x142)-(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 89022018107389LLU;
	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MAX;
	volatile int8_t x148 = 1;
	volatile int32_t t36 = -1;

    t36 = ((x145!=x146)-(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = 34U;
	uint32_t x150 = UINT32_MAX;
	int32_t t37 = 6441;

    t37 = ((x149!=x150)-(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MAX;
	static int32_t t38 = -43;

    t38 = ((x153!=x154)-(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MIN;
	uint16_t x158 = 1646U;
	int64_t x159 = 2683316652LL;
	static int16_t x160 = -686;
	volatile int32_t t39 = -8045;

    t39 = ((x157!=x158)-(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	int32_t x164 = -771322;

    t40 = ((x161!=x162)-(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 0U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = -1;
	static volatile int32_t t41 = 494824669;

    t41 = ((x165!=x166)-(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = -1;
	static int16_t x172 = 7129;

    t42 = ((x169!=x170)-(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -20LL;
	int32_t x174 = INT32_MIN;
	uint32_t x175 = 2613047U;
	int16_t x176 = INT16_MAX;

    t43 = ((x173!=x174)-(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	uint32_t x179 = 13U;
	int64_t x180 = -13336959650392LL;
	int32_t t44 = 201956050;

    t44 = ((x177!=x178)-(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 1U;
	static int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = 1491U;
	int32_t t45 = 199155;

    t45 = ((x181!=x182)-(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x185 = 22144LLU;
	volatile uint8_t x188 = 0U;
	int32_t t46 = 6205136;

    t46 = ((x185!=x186)-(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MAX;
	static int32_t t47 = 1;

    t47 = ((x189!=x190)-(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = INT16_MIN;
	static int32_t x195 = -43946;
	int32_t t48 = -321001543;

    t48 = ((x193!=x194)-(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	static uint32_t x198 = 2240751U;
	static int64_t x200 = INT64_MAX;

    t49 = ((x197!=x198)-(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = -204LL;
	int32_t x203 = -1;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t50 = -24890618;

    t50 = ((x201!=x202)-(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	uint32_t x206 = 295U;
	uint32_t x207 = UINT32_MAX;
	uint16_t x208 = UINT16_MAX;

    t51 = ((x205!=x206)-(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	int16_t x211 = INT16_MIN;
	static int64_t x212 = INT64_MAX;
	volatile int32_t t52 = -127112;

    t52 = ((x209!=x210)-(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 171U;
	volatile uint16_t x214 = 220U;
	static uint32_t x215 = 47U;
	uint32_t x216 = UINT32_MAX;

    t53 = ((x213!=x214)-(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 543;
	static int32_t x218 = 816567535;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 806;

    t54 = ((x217!=x218)-(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	static int8_t x222 = -1;
	int32_t x223 = INT32_MAX;
	int32_t x224 = 1325;
	int32_t t55 = -1621777;

    t55 = ((x221!=x222)-(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x226 = UINT64_MAX;
	static uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MIN;

    t56 = ((x225!=x226)-(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x230 = INT32_MIN;
	uint8_t x231 = UINT8_MAX;
	int32_t x232 = INT32_MIN;
	int32_t t57 = -1;

    t57 = ((x229!=x230)-(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = 124LL;
	static int8_t x235 = INT8_MIN;
	uint16_t x236 = UINT16_MAX;
	int32_t t58 = 382;

    t58 = ((x233!=x234)-(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 1465845122U;
	static int8_t x238 = -13;
	volatile int8_t x239 = INT8_MIN;

    t59 = ((x237!=x238)-(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -114049624353LL;
	volatile int16_t x244 = INT16_MIN;
	int32_t t60 = -1397;

    t60 = ((x241!=x242)-(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = 79;
	int16_t x246 = -2580;
	uint16_t x247 = 4024U;
	int32_t t61 = 2401472;

    t61 = ((x245!=x246)-(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 93U;
	static volatile int32_t x250 = 103093;
	volatile int32_t x251 = 39891;
	static volatile int32_t t62 = -1;

    t62 = ((x249!=x250)-(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	volatile int32_t x254 = INT32_MAX;
	volatile int32_t t63 = -451;

    t63 = ((x253!=x254)-(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -251315445958288694LL;
	static uint16_t x258 = 319U;
	uint32_t x260 = 17806U;
	int32_t t64 = -211;

    t64 = ((x257!=x258)-(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	static volatile int8_t x262 = INT8_MIN;
	int64_t x264 = -1LL;

    t65 = ((x261!=x262)-(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = 28U;
	volatile uint32_t x267 = UINT32_MAX;
	volatile int32_t t66 = 6435;

    t66 = ((x265!=x266)-(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = 16178;
	int8_t x270 = INT8_MAX;
	volatile int32_t t67 = 54;

    t67 = ((x269!=x270)-(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x273 = 676U;
	int64_t x274 = 31344812113304092LL;
	int32_t x275 = -1;
	static volatile int8_t x276 = INT8_MAX;
	volatile int32_t t68 = -71541;

    t68 = ((x273!=x274)-(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = 1938;
	static int8_t x278 = INT8_MIN;
	static uint8_t x279 = 6U;
	uint32_t x280 = UINT32_MAX;
	static volatile int32_t t69 = 0;

    t69 = ((x277!=x278)-(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x282 = UINT16_MAX;
	int32_t x283 = -15;

    t70 = ((x281!=x282)-(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x285 = -411169;
	int32_t x286 = INT32_MIN;
	int8_t x287 = 14;
	uint32_t x288 = 5017922U;
	volatile int32_t t71 = 0;

    t71 = ((x285!=x286)-(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x289 = INT64_MIN;
	volatile int8_t x290 = -1;
	uint8_t x291 = 5U;
	volatile uint16_t x292 = UINT16_MAX;

    t72 = ((x289!=x290)-(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = UINT32_MAX;
	int8_t x296 = -1;

    t73 = ((x293!=x294)-(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	uint8_t x300 = 3U;
	int32_t t74 = 231102341;

    t74 = ((x297!=x298)-(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	uint8_t x302 = UINT8_MAX;
	static uint8_t x303 = 16U;
	static volatile uint32_t x304 = 0U;
	int32_t t75 = -1411;

    t75 = ((x301!=x302)-(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x305 = INT64_MAX;
	int8_t x307 = INT8_MIN;
	volatile uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = -94268;

    t76 = ((x305!=x306)-(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = 2;
	static int64_t x311 = INT64_MAX;
	int8_t x312 = -1;

    t77 = ((x309!=x310)-(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = INT16_MIN;
	volatile int8_t x314 = INT8_MIN;
	uint64_t x315 = 7563692184746227LLU;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 121;

    t78 = ((x313!=x314)-(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 10007LLU;
	static int32_t x318 = -78;
	int16_t x319 = INT16_MAX;
	static int32_t t79 = 1503;

    t79 = ((x317!=x318)-(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x322 = 120971LLU;
	volatile int32_t x323 = 133339;

    t80 = ((x321!=x322)-(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 786595273489298367LLU;
	volatile int64_t x327 = INT64_MAX;
	volatile int16_t x328 = -1;
	int32_t t81 = -203;

    t81 = ((x325!=x326)-(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 160614571;
	int32_t x330 = -1;
	static int64_t x332 = -1LL;
	volatile int32_t t82 = 121019709;

    t82 = ((x329!=x330)-(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	volatile int16_t x335 = 13543;
	int16_t x336 = INT16_MIN;

    t83 = ((x333!=x334)-(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x337 = -1LL;
	int8_t x338 = INT8_MAX;
	static uint64_t x339 = 717LLU;

    t84 = ((x337!=x338)-(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x341 = 5U;
	int8_t x342 = -1;
	int64_t x343 = -29899336LL;
	int8_t x344 = -59;
	volatile int32_t t85 = -698;

    t85 = ((x341!=x342)-(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = 257U;
	volatile int32_t t86 = 53110;

    t86 = ((x345!=x346)-(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 0;
	int32_t x350 = -8528363;
	int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MAX;

    t87 = ((x349!=x350)-(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	static int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int32_t t88 = -1;

    t88 = ((x353!=x354)-(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 9502567808371LLU;
	volatile int32_t x358 = -989657;
	int8_t x359 = INT8_MIN;
	static int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 3;

    t89 = ((x357!=x358)-(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -608;
	uint64_t x362 = 199724125500787LLU;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 789550;

    t90 = ((x361!=x362)-(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	int16_t x366 = INT16_MIN;
	volatile int64_t x368 = 362515912532780975LL;

    t91 = ((x365!=x366)-(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 4355585U;
	int8_t x370 = 34;
	static volatile int32_t x371 = -1;
	int16_t x372 = -1;
	static int32_t t92 = -905;

    t92 = ((x369!=x370)-(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = 3;
	int16_t x374 = 5;
	int32_t x375 = INT32_MIN;
	volatile int32_t x376 = 2022;
	static int32_t t93 = 1;

    t93 = ((x373!=x374)-(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint32_t x378 = 13429482U;
	int16_t x379 = -70;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -76703;

    t94 = ((x377!=x378)-(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	volatile int16_t x383 = -1816;

    t95 = ((x381!=x382)-(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = -1LL;
	int64_t x387 = -11640964674386429LL;
	static int32_t t96 = -411;

    t96 = ((x385!=x386)-(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = UINT32_MAX;
	int32_t x390 = 27;
	uint64_t x391 = 184414283774368792LLU;
	static uint64_t x392 = 683203111LLU;

    t97 = ((x389!=x390)-(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = 103U;
	uint64_t x394 = 88905323260LLU;
	static int64_t x395 = INT64_MAX;
	int64_t x396 = -409265875LL;

    t98 = ((x393!=x394)-(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 372;
	volatile uint64_t x398 = 225480871LLU;
	volatile int64_t x399 = -1LL;
	static volatile int32_t t99 = 76626916;

    t99 = ((x397!=x398)-(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	int64_t x403 = INT64_MAX;
	volatile int64_t x404 = INT64_MIN;
	static int32_t t100 = -316;

    t100 = ((x401!=x402)-(x403!=x404));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = -1;
	int64_t x407 = INT64_MIN;
	volatile int32_t t101 = 1;

    t101 = ((x405!=x406)-(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = -2506;
	int16_t x411 = INT16_MAX;
	volatile int16_t x412 = -864;
	volatile int32_t t102 = 249906;

    t102 = ((x409!=x410)-(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 9824428U;
	static volatile int64_t x414 = 78339418801010198LL;
	volatile int32_t x416 = INT32_MIN;
	static volatile int32_t t103 = -5;

    t103 = ((x413!=x414)-(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x417 = 0U;
	int64_t x418 = INT64_MAX;
	int32_t x419 = -1;
	int32_t t104 = -1292;

    t104 = ((x417!=x418)-(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 325129816;
	volatile int8_t x422 = -1;
	int16_t x424 = INT16_MAX;
	volatile int32_t t105 = 11581;

    t105 = ((x421!=x422)-(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x425 = 289735U;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = 13;

    t106 = ((x425!=x426)-(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x430 = 275U;
	volatile uint64_t x432 = 17785137534222LLU;
	volatile int32_t t107 = -15848303;

    t107 = ((x429!=x430)-(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = INT16_MIN;
	static int8_t x434 = INT8_MIN;
	static int8_t x435 = -1;

    t108 = ((x433!=x434)-(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x439 = -1558;
	uint32_t x440 = 264037664U;

    t109 = ((x437!=x438)-(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 115;
	int8_t x442 = -1;
	uint64_t x444 = 679507522004897LLU;
	static int32_t t110 = 11;

    t110 = ((x441!=x442)-(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x445 = 7603U;
	int16_t x446 = INT16_MAX;
	int8_t x447 = -1;
	int64_t x448 = INT64_MIN;

    t111 = ((x445!=x446)-(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 5529U;
	static volatile uint64_t x450 = 255357051582580LLU;
	int32_t x451 = INT32_MIN;
	int32_t x452 = 3;
	volatile int32_t t112 = 136956;

    t112 = ((x449!=x450)-(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = -68;
	int64_t x456 = INT64_MAX;

    t113 = ((x453!=x454)-(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	volatile int64_t x459 = 15801848153LL;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = -333244;

    t114 = ((x457!=x458)-(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	int16_t x463 = -1;
	volatile int8_t x464 = INT8_MIN;
	int32_t t115 = -1;

    t115 = ((x461!=x462)-(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x465 = -5;
	uint8_t x466 = 24U;
	int64_t x467 = INT64_MIN;
	int32_t t116 = 8929099;

    t116 = ((x465!=x466)-(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = 1108;
	int64_t x471 = INT64_MAX;
	int32_t t117 = 191633;

    t117 = ((x469!=x470)-(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = -1;
	int32_t x474 = -7464;
	volatile uint16_t x475 = UINT16_MAX;
	int16_t x476 = -1;
	int32_t t118 = -10817;

    t118 = ((x473!=x474)-(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x479 = 3293272697604LLU;
	uint16_t x480 = 2697U;
	volatile int32_t t119 = -107;

    t119 = ((x477!=x478)-(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	volatile int8_t x483 = INT8_MIN;
	static volatile int16_t x484 = -960;
	int32_t t120 = -120830415;

    t120 = ((x481!=x482)-(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x487 = -1LL;
	volatile int64_t x488 = -188425878205078469LL;
	int32_t t121 = 835783;

    t121 = ((x485!=x486)-(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x489 = -437432802702403113LL;
	int64_t x490 = 219828923181LL;
	int16_t x491 = INT16_MAX;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t122 = 343250291;

    t122 = ((x489!=x490)-(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	uint16_t x494 = UINT16_MAX;
	volatile int8_t x495 = INT8_MIN;
	static int32_t x496 = INT32_MAX;

    t123 = ((x493!=x494)-(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = 62;
	int16_t x499 = -622;
	uint16_t x500 = 1U;
	int32_t t124 = -18;

    t124 = ((x497!=x498)-(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 19U;
	static int8_t x502 = -12;
	uint8_t x503 = UINT8_MAX;
	volatile int8_t x504 = -1;
	volatile int32_t t125 = 232;

    t125 = ((x501!=x502)-(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1768295884061004LL;
	int8_t x506 = 3;
	static int32_t x507 = 0;
	uint64_t x508 = 8492845028245154LLU;

    t126 = ((x505!=x506)-(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MAX;
	int32_t t127 = 7;

    t127 = ((x509!=x510)-(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x514 = 4621U;
	uint64_t x515 = 1623282161081277108LLU;
	volatile int32_t t128 = -26117;

    t128 = ((x513!=x514)-(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = -49;
	int16_t x518 = INT16_MIN;
	static uint32_t x519 = UINT32_MAX;
	volatile int32_t t129 = -7982211;

    t129 = ((x517!=x518)-(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = INT16_MIN;
	static uint64_t x522 = 4674413743840LLU;
	static volatile int16_t x524 = INT16_MIN;
	volatile int32_t t130 = -14;

    t130 = ((x521!=x522)-(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 16469LL;
	static volatile int32_t x526 = -51346;
	static int8_t x527 = INT8_MIN;
	static int64_t x528 = -22311423520739LL;
	static int32_t t131 = -1;

    t131 = ((x525!=x526)-(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	volatile int32_t x530 = -883;
	volatile uint8_t x532 = UINT8_MAX;
	int32_t t132 = 13240;

    t132 = ((x529!=x530)-(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = 4U;
	uint8_t x535 = UINT8_MAX;
	volatile int32_t x536 = INT32_MIN;
	int32_t t133 = 59439;

    t133 = ((x533!=x534)-(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MAX;
	int32_t x539 = INT32_MAX;
	int64_t x540 = -1LL;
	static volatile int32_t t134 = 1306744;

    t134 = ((x537!=x538)-(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int32_t x542 = INT32_MAX;
	int16_t x543 = -1;
	int64_t x544 = -402605LL;
	int32_t t135 = -81710399;

    t135 = ((x541!=x542)-(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile uint64_t x546 = UINT64_MAX;
	int64_t x547 = 75867880353LL;
	int64_t x548 = -1LL;

    t136 = ((x545!=x546)-(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 2;
	int8_t x550 = INT8_MAX;
	int8_t x551 = 0;
	int8_t x552 = INT8_MIN;

    t137 = ((x549!=x550)-(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	uint32_t x554 = UINT32_MAX;
	volatile uint64_t x555 = 8731747844214LLU;
	int32_t x556 = -5;
	volatile int32_t t138 = 445360784;

    t138 = ((x553!=x554)-(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	uint8_t x558 = 60U;
	int8_t x559 = -7;
	static int8_t x560 = -2;
	volatile int32_t t139 = 107969;

    t139 = ((x557!=x558)-(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 13U;
	int64_t x563 = INT64_MIN;
	volatile int32_t t140 = -538308;

    t140 = ((x561!=x562)-(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 0;
	uint64_t x567 = 1491034LLU;
	volatile int32_t t141 = 127;

    t141 = ((x565!=x566)-(x567!=x568));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MAX;
	int8_t x570 = -4;
	int8_t x571 = INT8_MIN;
	static volatile int64_t x572 = 51869230593425LL;
	static int32_t t142 = 796902;

    t142 = ((x569!=x570)-(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = -6171LL;
	int32_t x574 = INT32_MAX;
	uint8_t x575 = 1U;
	uint64_t x576 = 864029921360528LLU;
	volatile int32_t t143 = -24927207;

    t143 = ((x573!=x574)-(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	int32_t t144 = -299947;

    t144 = ((x577!=x578)-(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	int8_t x582 = INT8_MAX;
	static volatile int16_t x583 = -595;
	int32_t x584 = INT32_MAX;
	int32_t t145 = -32909817;

    t145 = ((x581!=x582)-(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 36U;
	volatile int16_t x586 = -1;

    t146 = ((x585!=x586)-(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 217U;
	int8_t x591 = 1;
	volatile int8_t x592 = INT8_MIN;

    t147 = ((x589!=x590)-(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -20654708;
	volatile int32_t x594 = -53820;
	uint16_t x595 = 1109U;
	volatile int16_t x596 = -1;
	int32_t t148 = 45885958;

    t148 = ((x593!=x594)-(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MAX;
	int8_t x599 = INT8_MAX;
	int32_t x600 = 5994;
	int32_t t149 = -9197;

    t149 = ((x597!=x598)-(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -13;
	int8_t x602 = 1;
	int64_t x603 = -1LL;
	volatile int32_t t150 = 182196436;

    t150 = ((x601!=x602)-(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	int32_t x606 = INT32_MAX;
	uint64_t x607 = UINT64_MAX;
	int32_t t151 = 255;

    t151 = ((x605!=x606)-(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -681;
	int8_t x610 = -1;
	volatile int64_t x611 = INT64_MIN;
	static int32_t x612 = INT32_MAX;
	int32_t t152 = 18461;

    t152 = ((x609!=x610)-(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x614 = UINT64_MAX;
	static int16_t x616 = INT16_MIN;
	volatile int32_t t153 = -14373;

    t153 = ((x613!=x614)-(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = -17;
	static int16_t x618 = INT16_MIN;
	int32_t x619 = 1;
	volatile int8_t x620 = -19;
	static int32_t t154 = -54;

    t154 = ((x617!=x618)-(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	static int8_t x622 = INT8_MIN;
	int32_t x624 = -139313;
	static volatile int32_t t155 = -30307;

    t155 = ((x621!=x622)-(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	int8_t x626 = INT8_MAX;
	uint64_t x627 = UINT64_MAX;
	uint16_t x628 = 7U;
	volatile int32_t t156 = 794291180;

    t156 = ((x625!=x626)-(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	static volatile int64_t x630 = -3LL;
	uint8_t x631 = UINT8_MAX;
	uint16_t x632 = 945U;

    t157 = ((x629!=x630)-(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	int32_t x634 = -1;
	int32_t x635 = INT32_MIN;
	uint32_t x636 = 7U;
	volatile int32_t t158 = 267;

    t158 = ((x633!=x634)-(x635!=x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	int16_t x639 = -1;
	int64_t x640 = INT64_MAX;
	int32_t t159 = 130129;

    t159 = ((x637!=x638)-(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int16_t x642 = -1;
	static int16_t x643 = -27;
	int32_t x644 = -297081;
	static int32_t t160 = -8006;

    t160 = ((x641!=x642)-(x643!=x644));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 630549LLU;
	int8_t x646 = INT8_MIN;
	int16_t x647 = INT16_MAX;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = 15263800;

    t161 = ((x645!=x646)-(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	static int8_t x650 = INT8_MIN;
	uint64_t x651 = 1LLU;
	uint64_t x652 = 15LLU;
	int32_t t162 = 66996109;

    t162 = ((x649!=x650)-(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	uint16_t x654 = 2108U;
	int64_t x655 = -7750151427LL;
	int32_t t163 = -3;

    t163 = ((x653!=x654)-(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = UINT32_MAX;
	volatile uint64_t x658 = 5608252LLU;
	int8_t x659 = INT8_MAX;
	int16_t x660 = 90;
	int32_t t164 = 112;

    t164 = ((x657!=x658)-(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int16_t x662 = -1;
	static volatile int32_t x663 = -1;
	uint16_t x664 = UINT16_MAX;

    t165 = ((x661!=x662)-(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = 358;
	int64_t x667 = INT64_MIN;
	int32_t x668 = 5127007;
	int32_t t166 = -170955;

    t166 = ((x665!=x666)-(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 7270506090LL;
	volatile int8_t x670 = -1;
	int32_t x671 = INT32_MIN;
	int32_t x672 = 71197317;

    t167 = ((x669!=x670)-(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x673 = 0U;
	int32_t x674 = INT32_MIN;
	static int8_t x676 = -1;
	volatile int32_t t168 = 101555690;

    t168 = ((x673!=x674)-(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -726721544822LL;
	uint32_t x678 = 1043343679U;
	static volatile uint16_t x679 = UINT16_MAX;
	volatile int16_t x680 = -54;
	int32_t t169 = 51;

    t169 = ((x677!=x678)-(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	volatile uint64_t x682 = 3403LLU;
	static uint64_t x683 = 20945543996713LLU;
	int64_t x684 = INT64_MAX;
	volatile int32_t t170 = -1034932;

    t170 = ((x681!=x682)-(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x685 = UINT64_MAX;
	int16_t x687 = -1;
	int16_t x688 = -27;
	static int32_t t171 = 1;

    t171 = ((x685!=x686)-(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	uint16_t x690 = 1323U;
	uint8_t x692 = UINT8_MAX;
	volatile int32_t t172 = 2616;

    t172 = ((x689!=x690)-(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MIN;
	int64_t x694 = -1LL;
	static volatile int32_t t173 = 24169;

    t173 = ((x693!=x694)-(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = 941546100072189738LL;
	volatile int64_t x700 = -1LL;
	int32_t t174 = 481146;

    t174 = ((x697!=x698)-(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = 9U;
	volatile uint32_t x702 = 372U;
	int32_t x703 = -1;
	volatile int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 1;

    t175 = ((x701!=x702)-(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 403290LLU;
	uint16_t x707 = UINT16_MAX;
	volatile int32_t t176 = -1;

    t176 = ((x705!=x706)-(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 7U;
	static int16_t x710 = INT16_MIN;
	static uint8_t x711 = 56U;
	volatile int32_t t177 = 711;

    t177 = ((x709!=x710)-(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 562U;
	int16_t x714 = 9057;
	uint32_t x715 = 122330U;
	volatile uint64_t x716 = 3224331939269298212LLU;
	int32_t t178 = -1109804;

    t178 = ((x713!=x714)-(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 3U;
	static int64_t x719 = INT64_MIN;
	int8_t x720 = -1;
	volatile int32_t t179 = -1856627;

    t179 = ((x717!=x718)-(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = INT64_MIN;
	static uint32_t x722 = 5U;
	uint8_t x723 = UINT8_MAX;

    t180 = ((x721!=x722)-(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	int64_t x728 = INT64_MIN;
	volatile int32_t t181 = 199192855;

    t181 = ((x725!=x726)-(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = 1;
	static volatile uint32_t x730 = 51U;
	volatile uint32_t x731 = 56177U;
	volatile int32_t t182 = -120996040;

    t182 = ((x729!=x730)-(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x734 = UINT64_MAX;
	static int8_t x735 = INT8_MIN;

    t183 = ((x733!=x734)-(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int8_t x738 = -1;
	static uint8_t x739 = 27U;
	int32_t x740 = INT32_MIN;

    t184 = ((x737!=x738)-(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 2883;
	int32_t x743 = 75;
	int16_t x744 = -1;
	volatile int32_t t185 = 141;

    t185 = ((x741!=x742)-(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = INT8_MAX;
	static volatile uint8_t x746 = 1U;
	uint8_t x747 = 25U;
	int64_t x748 = INT64_MIN;
	int32_t t186 = 3;

    t186 = ((x745!=x746)-(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 14LLU;
	int16_t x750 = -1;
	volatile int32_t x752 = INT32_MIN;
	volatile int32_t t187 = 0;

    t187 = ((x749!=x750)-(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -296606225LL;
	int32_t x754 = INT32_MIN;
	int8_t x755 = INT8_MIN;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 13827274;

    t188 = ((x753!=x754)-(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = 0;
	int8_t x759 = INT8_MIN;
	uint16_t x760 = 3448U;

    t189 = ((x757!=x758)-(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 11;
	volatile int64_t x762 = -1LL;
	static volatile int64_t x763 = INT64_MAX;
	int32_t t190 = -1621029;

    t190 = ((x761!=x762)-(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	int16_t x766 = 4;
	uint32_t x767 = 934722869U;
	int16_t x768 = INT16_MAX;
	int32_t t191 = 13;

    t191 = ((x765!=x766)-(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = INT32_MAX;
	uint64_t x770 = 17983095394LLU;
	int8_t x771 = INT8_MIN;
	static int32_t x772 = 1;
	int32_t t192 = 185;

    t192 = ((x769!=x770)-(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 197;
	int32_t x774 = INT32_MAX;
	volatile int16_t x775 = -1;
	uint64_t x776 = 12LLU;
	int32_t t193 = -2838974;

    t193 = ((x773!=x774)-(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	int64_t x778 = -1LL;
	uint32_t x780 = 430474326U;

    t194 = ((x777!=x778)-(x779!=x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -19;
	static int32_t x782 = INT32_MIN;

    t195 = ((x781!=x782)-(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	volatile int8_t x786 = INT8_MIN;
	volatile int64_t x787 = 214385128779613LL;
	int8_t x788 = INT8_MIN;

    t196 = ((x785!=x786)-(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MAX;
	volatile int64_t x790 = -26335759LL;
	int16_t x792 = INT16_MAX;

    t197 = ((x789!=x790)-(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = 0;
	uint8_t x795 = 4U;
	static int64_t x796 = -1LL;
	volatile int32_t t198 = 0;

    t198 = ((x793!=x794)-(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	int16_t x798 = INT16_MIN;
	uint32_t x799 = 940U;
	static int16_t x800 = 6138;
	int32_t t199 = -2;

    t199 = ((x797!=x798)-(x799!=x800));

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

