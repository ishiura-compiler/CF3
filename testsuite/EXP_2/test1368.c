
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

int16_t x1 = 1845;
static uint8_t x7 = 0U;
uint16_t x8 = 3U;
static uint16_t x11 = UINT16_MAX;
volatile int32_t t2 = -75848723;
int32_t t3 = 283051;
int16_t x19 = INT16_MAX;
int8_t x22 = -3;
uint8_t x24 = 72U;
int64_t x25 = INT64_MIN;
static int16_t x26 = 171;
volatile uint8_t x30 = 5U;
int64_t x35 = INT64_MAX;
int32_t t8 = 64;
static int8_t x38 = -1;
volatile uint8_t x39 = 1U;
int8_t x42 = 1;
volatile int32_t t11 = -40646;
int16_t x50 = INT16_MIN;
volatile uint32_t x52 = UINT32_MAX;
int64_t x53 = INT64_MIN;
int16_t x58 = INT16_MAX;
int16_t x59 = INT16_MIN;
volatile int32_t x63 = INT32_MIN;
int32_t t15 = 153765673;
int8_t x66 = -1;
uint8_t x67 = UINT8_MAX;
uint16_t x68 = 12815U;
volatile uint16_t x69 = UINT16_MAX;
static uint16_t x77 = UINT16_MAX;
uint64_t x80 = UINT64_MAX;
static int64_t x86 = -1LL;
uint64_t x87 = 8323701677706142348LLU;
int32_t t21 = 43;
int64_t x90 = -11735748195528986LL;
volatile uint8_t x102 = 106U;
int32_t t27 = 253804692;
uint8_t x119 = 60U;
static volatile uint16_t x120 = 13818U;
int32_t t29 = 1;
static volatile int64_t x122 = -1LL;
uint32_t x124 = 5661077U;
uint32_t x125 = UINT32_MAX;
volatile uint64_t x137 = 591319400402LLU;
int32_t x139 = -1;
static uint8_t x148 = 6U;
int32_t t36 = -377;
static int64_t x155 = 152322688659LL;
static int16_t x157 = -1;
int8_t x159 = -62;
volatile int32_t t39 = 2993681;
static int32_t x167 = 504291343;
uint8_t x168 = UINT8_MAX;
static int32_t x172 = INT32_MAX;
volatile uint32_t x173 = 59962866U;
static int32_t t45 = 12567;
volatile int16_t x185 = -1;
int64_t x189 = -1LL;
int16_t x191 = INT16_MIN;
static int8_t x193 = INT8_MIN;
volatile int32_t x196 = INT32_MAX;
int8_t x200 = 3;
int32_t t49 = 0;
int64_t x203 = -1LL;
uint16_t x209 = UINT16_MAX;
int16_t x223 = INT16_MIN;
int8_t x226 = -11;
volatile int64_t x230 = -4177112664963LL;
int8_t x231 = INT8_MAX;
int16_t x240 = -1019;
volatile int32_t t59 = -145113;
int16_t x242 = INT16_MIN;
volatile int8_t x247 = -3;
uint32_t x252 = UINT32_MAX;
int32_t t64 = 1;
static int32_t x266 = 0;
uint64_t x270 = 426779357LLU;
static volatile uint16_t x275 = 0U;
int32_t t68 = -91;
int16_t x282 = -1;
int32_t x285 = INT32_MIN;
volatile int8_t x293 = INT8_MIN;
uint64_t x296 = 29766668051LLU;
int8_t x299 = INT8_MIN;
static uint16_t x303 = UINT16_MAX;
int32_t x304 = INT32_MIN;
volatile int32_t t75 = 6849444;
static int32_t x310 = -169;
volatile int8_t x321 = INT8_MAX;
int32_t t80 = 6723;
int64_t x326 = -1LL;
int64_t x330 = INT64_MIN;
int32_t x331 = INT32_MIN;
uint16_t x332 = UINT16_MAX;
static int32_t x333 = 50;
uint32_t x334 = UINT32_MAX;
uint8_t x336 = UINT8_MAX;
uint16_t x340 = 303U;
static int64_t x342 = -1712LL;
int8_t x350 = INT8_MAX;
int64_t x353 = INT64_MIN;
int8_t x354 = -1;
static int64_t x363 = INT64_MIN;
static int64_t x374 = INT64_MIN;
static volatile uint64_t x376 = UINT64_MAX;
uint8_t x379 = UINT8_MAX;
volatile int32_t x388 = INT32_MIN;
uint32_t x392 = UINT32_MAX;
int64_t x393 = -1LL;
volatile int32_t t99 = -5440977;
int8_t x406 = INT8_MIN;
int32_t x413 = INT32_MAX;
int16_t x418 = 227;
static uint32_t x419 = 799550383U;
int32_t t104 = 1;
volatile int32_t t106 = -2116;
static volatile uint8_t x433 = 0U;
uint64_t x435 = 28799610325LLU;
int8_t x441 = INT8_MAX;
uint64_t x445 = 144670228LLU;
int64_t x449 = 51808970255113128LL;
static volatile int32_t t112 = -828;
uint64_t x458 = 36268610965803047LLU;
static volatile int32_t t114 = -35896;
int16_t x461 = INT16_MAX;
int32_t t116 = 143;
int8_t x470 = -3;
int64_t x487 = INT64_MIN;
static uint16_t x490 = UINT16_MAX;
volatile uint64_t x491 = 537996LLU;
static int64_t x493 = -1LL;
volatile uint32_t x503 = 7834412U;
uint64_t x507 = 157788205LLU;
uint64_t x513 = UINT64_MAX;
static int32_t x514 = INT32_MAX;
int8_t x519 = INT8_MAX;
volatile int64_t x520 = INT64_MAX;
uint16_t x523 = 1880U;
int32_t x529 = -13665855;
int8_t x531 = 8;
int32_t x532 = INT32_MIN;
static int16_t x533 = 681;
int8_t x534 = INT8_MIN;
int64_t x538 = -28LL;
int64_t x539 = INT64_MIN;
static int64_t x541 = 253779132LL;
uint32_t x543 = UINT32_MAX;
uint64_t x544 = 2870308849930750LLU;
int32_t x545 = -131930297;
static uint8_t x549 = 0U;
volatile uint32_t x551 = 32U;
int32_t t137 = -237587239;
static volatile int16_t x558 = 126;
int64_t x560 = 105LL;
volatile int64_t x565 = -1LL;
int64_t x570 = -1LL;
static uint64_t x572 = 5016769588365706LLU;
int8_t x577 = -1;
int8_t x578 = -1;
uint8_t x583 = 4U;
int32_t t149 = -20035;
volatile int32_t t150 = 2970905;
volatile int32_t t151 = 24602109;
static int8_t x610 = INT8_MIN;
uint64_t x616 = 65LLU;
static volatile int32_t t156 = 1190677;
uint8_t x637 = 18U;
volatile int32_t t159 = -2883;
uint32_t x646 = 5331651U;
int8_t x647 = INT8_MIN;
int32_t t161 = -2677808;
int64_t x650 = INT64_MIN;
uint8_t x653 = 29U;
int32_t x658 = 88508;
static int32_t x661 = INT32_MAX;
static int16_t x662 = INT16_MAX;
int64_t x664 = -219LL;
static uint32_t x665 = 1968531071U;
volatile uint32_t x678 = UINT32_MAX;
int8_t x679 = 21;
volatile uint8_t x680 = 24U;
int32_t t169 = -14292;
static uint8_t x681 = 3U;
uint64_t x686 = UINT64_MAX;
uint16_t x687 = 3200U;
volatile int32_t t171 = -28614;
int64_t x689 = INT64_MAX;
static int32_t t172 = 764669522;
uint64_t x694 = 2087531191587203085LLU;
int32_t x695 = -1;
uint16_t x712 = UINT16_MAX;
uint64_t x716 = 122005633LLU;
static int32_t t179 = -7756207;
int32_t t180 = 5527531;
int32_t x726 = 612;
int64_t x731 = INT64_MIN;
uint64_t x732 = UINT64_MAX;
volatile int32_t t183 = 2;
int32_t x738 = 14;
uint16_t x741 = 230U;
int32_t t185 = 216;
static int16_t x755 = -10546;
static uint16_t x760 = UINT16_MAX;
int32_t x762 = 1;
uint8_t x765 = 2U;
volatile uint16_t x771 = 469U;
volatile int64_t x773 = -1LL;
int32_t x777 = INT32_MIN;
volatile int8_t x778 = INT8_MIN;
volatile int32_t t194 = -6526246;
int8_t x786 = INT8_MIN;
static int16_t x788 = -55;
int64_t x795 = INT64_MIN;


void f0(void) {
    	int8_t x2 = -1;
	int16_t x3 = -1;
	volatile int32_t x4 = 198;
	static int32_t t0 = 268121;

    t0 = ((x1^(x2!=x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 85851U;
	int16_t x6 = -235;
	int32_t t1 = 3689;

    t1 = ((x5^(x6!=x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -27427971415LL;
	int64_t x10 = INT64_MIN;
	int8_t x12 = -8;

    t2 = ((x9^(x10!=x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int16_t x14 = -1;
	static int64_t x15 = 47995LL;
	int32_t x16 = -1;

    t3 = ((x13^(x14!=x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = 3767;
	int16_t x18 = 442;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -50469;

    t4 = ((x17^(x18!=x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 4U;
	int16_t x23 = INT16_MIN;
	volatile int32_t t5 = 725;

    t5 = ((x21^(x22!=x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x27 = 28;
	int8_t x28 = -1;
	volatile int32_t t6 = 3893110;

    t6 = ((x25^(x26!=x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -417;
	uint64_t x31 = UINT64_MAX;
	int32_t x32 = -12523650;
	static volatile int32_t t7 = -1013160;

    t7 = ((x29^(x30!=x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -508294LL;
	volatile int16_t x34 = -5796;
	uint16_t x36 = UINT16_MAX;

    t8 = ((x33^(x34!=x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	uint8_t x40 = 20U;
	int32_t t9 = 442264360;

    t9 = ((x37^(x38!=x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 0U;
	static uint8_t x43 = UINT8_MAX;
	static uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 5694058;

    t10 = ((x41^(x42!=x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int32_t x46 = -1;
	volatile uint8_t x47 = 3U;
	int32_t x48 = 33886692;

    t11 = ((x45^(x46!=x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static int64_t x51 = 0LL;
	static int32_t t12 = 1673523;

    t12 = ((x49^(x50!=x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -7988;
	int8_t x55 = 30;
	static int32_t x56 = INT32_MIN;
	int32_t t13 = -497021326;

    t13 = ((x53^(x54!=x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	uint32_t x60 = 15532352U;
	int32_t t14 = -426752652;

    t14 = ((x57^(x58!=x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	uint64_t x64 = 5059085082573646731LLU;

    t15 = ((x61^(x62!=x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -232;
	int32_t t16 = -437235;

    t16 = ((x65^(x66!=x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MAX;
	static int32_t x71 = INT32_MAX;
	int64_t x72 = 13106800549LL;
	int32_t t17 = 8408285;

    t17 = ((x69^(x70!=x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int8_t x74 = -22;
	uint64_t x75 = 12984590965975743LLU;
	int32_t x76 = INT32_MIN;
	int32_t t18 = -26723093;

    t18 = ((x73^(x74!=x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MAX;
	volatile int64_t x79 = -4146LL;
	int32_t t19 = 1461;

    t19 = ((x77^(x78!=x79))<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 0;
	volatile int16_t x82 = 264;
	int8_t x83 = INT8_MAX;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 911;

    t20 = ((x81^(x82!=x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	int16_t x88 = INT16_MIN;

    t21 = ((x85^(x86!=x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -10584;
	int64_t x91 = INT64_MAX;
	int32_t x92 = INT32_MIN;
	static int32_t t22 = -78072;

    t22 = ((x89^(x90!=x91))<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = -1;
	int32_t x95 = -114203830;
	static int8_t x96 = INT8_MIN;
	static int32_t t23 = 1;

    t23 = ((x93^(x94!=x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	static volatile uint16_t x99 = UINT16_MAX;
	int8_t x100 = 0;
	int32_t t24 = 2;

    t24 = ((x97^(x98!=x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	static int8_t x103 = INT8_MIN;
	static int32_t x104 = INT32_MIN;
	int32_t t25 = -15867657;

    t25 = ((x101^(x102!=x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 16184537681556LLU;
	uint16_t x106 = 1694U;
	int32_t x107 = 22;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = 6060578;

    t26 = ((x105^(x106!=x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x109 = 175U;
	volatile int32_t x110 = -102813910;
	uint32_t x111 = 4805401U;
	int64_t x112 = -22LL;

    t27 = ((x109^(x110!=x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x113 = 97U;
	int32_t x114 = -1;
	int32_t x115 = 55;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = 1010956;

    t28 = ((x113^(x114!=x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	static volatile uint8_t x118 = 3U;

    t29 = ((x117^(x118!=x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int64_t x123 = INT64_MAX;
	int32_t t30 = -160;

    t30 = ((x121^(x122!=x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x126 = -1;
	static uint8_t x127 = 16U;
	int16_t x128 = 3441;
	volatile int32_t t31 = -4;

    t31 = ((x125^(x126!=x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = -521974;
	int64_t x130 = 5010803078520496LL;
	int8_t x131 = -12;
	volatile int16_t x132 = -1;
	int32_t t32 = 1779;

    t32 = ((x129^(x130!=x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 0U;
	uint64_t x134 = 6837864864LLU;
	int16_t x135 = -6187;
	static int8_t x136 = 1;
	int32_t t33 = -20636264;

    t33 = ((x133^(x134!=x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x138 = INT32_MAX;
	int16_t x140 = 3;
	static int32_t t34 = 96;

    t34 = ((x137^(x138!=x139))<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	volatile int64_t x142 = INT64_MAX;
	static int8_t x143 = INT8_MAX;
	static volatile int64_t x144 = INT64_MIN;
	int32_t t35 = 187;

    t35 = ((x141^(x142!=x143))<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	int32_t x147 = INT32_MIN;

    t36 = ((x145^(x146!=x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	uint16_t x151 = 7928U;
	uint32_t x152 = 8U;
	int32_t t37 = -1;

    t37 = ((x149^(x150!=x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -387063;
	int8_t x154 = -3;
	volatile uint64_t x156 = 328818913588870LLU;
	volatile int32_t t38 = -106104;

    t38 = ((x153^(x154!=x155))<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x158 = UINT64_MAX;
	static int8_t x160 = INT8_MAX;

    t39 = ((x157^(x158!=x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = -1;
	static int16_t x162 = 4171;
	uint8_t x163 = 3U;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = -859;

    t40 = ((x161^(x162!=x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -2;
	static volatile int16_t x166 = INT16_MIN;
	int32_t t41 = 17;

    t41 = ((x165^(x166!=x167))<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 8U;
	uint16_t x170 = 502U;
	int8_t x171 = -1;
	int32_t t42 = -251645267;

    t42 = ((x169^(x170!=x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = -1LL;
	static int32_t x175 = INT32_MIN;
	volatile int64_t x176 = 3LL;
	int32_t t43 = -354118901;

    t43 = ((x173^(x174!=x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	int64_t x178 = INT64_MAX;
	int32_t x179 = -1;
	volatile uint32_t x180 = 2151U;
	volatile int32_t t44 = 1;

    t44 = ((x177^(x178!=x179))<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	static int64_t x182 = -59LL;
	uint16_t x183 = 1U;
	int8_t x184 = 0;

    t45 = ((x181^(x182!=x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x186 = 3U;
	static int8_t x187 = -1;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -36933547;

    t46 = ((x185^(x186!=x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = UINT64_MAX;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = -25293357;

    t47 = ((x189^(x190!=x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x194 = -1;
	uint32_t x195 = 1857334588U;
	volatile int32_t t48 = -144;

    t48 = ((x193^(x194!=x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x197 = 14LLU;
	static int16_t x198 = INT16_MAX;
	uint64_t x199 = 1902824174435LLU;

    t49 = ((x197^(x198!=x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static uint32_t x202 = UINT32_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 318943;

    t50 = ((x201^(x202!=x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = 113LL;
	static int8_t x206 = -1;
	uint8_t x207 = 2U;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 11787;

    t51 = ((x205^(x206!=x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x210 = 409U;
	int8_t x211 = 49;
	int32_t x212 = INT32_MAX;
	static volatile int32_t t52 = -53;

    t52 = ((x209^(x210!=x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 135816998LL;
	uint32_t x214 = 6471U;
	volatile int8_t x215 = -1;
	volatile int32_t x216 = INT32_MIN;
	static volatile int32_t t53 = -520017;

    t53 = ((x213^(x214!=x215))<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int64_t x218 = INT64_MIN;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 457972;

    t54 = ((x217^(x218!=x219))<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	static int8_t x222 = -1;
	static uint32_t x224 = 339924173U;
	int32_t t55 = -51262;

    t55 = ((x221^(x222!=x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x227 = -952048982LL;
	volatile int64_t x228 = -2018804996980LL;
	int32_t t56 = 1048211283;

    t56 = ((x225^(x226!=x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	uint8_t x232 = 5U;
	volatile int32_t t57 = -2;

    t57 = ((x229^(x230!=x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	uint32_t x234 = 925564U;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -7663032;

    t58 = ((x233^(x234!=x235))<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int64_t x238 = 3228LL;
	volatile uint8_t x239 = 1U;

    t59 = ((x237^(x238!=x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = INT16_MIN;
	static int8_t x243 = -1;
	volatile uint64_t x244 = 165531LLU;
	volatile int32_t t60 = 1;

    t60 = ((x241^(x242!=x243))<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = 5;
	int8_t x246 = -2;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -1438;

    t61 = ((x245^(x246!=x247))<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -38;
	int16_t x250 = INT16_MAX;
	static volatile uint8_t x251 = 2U;
	volatile int32_t t62 = -553267589;

    t62 = ((x249^(x250!=x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = 582959U;
	int32_t x254 = INT32_MIN;
	volatile int8_t x255 = INT8_MIN;
	uint16_t x256 = 14708U;
	static volatile int32_t t63 = 156;

    t63 = ((x253^(x254!=x255))<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	uint64_t x258 = 355707143557262LLU;
	static int8_t x259 = 1;
	int16_t x260 = INT16_MIN;

    t64 = ((x257^(x258!=x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	uint8_t x262 = 13U;
	int32_t x263 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 3;

    t65 = ((x261^(x262!=x263))<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MAX;
	uint64_t x267 = 2429565749346615333LLU;
	static int8_t x268 = 5;
	volatile int32_t t66 = -4;

    t66 = ((x265^(x266!=x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile uint16_t x271 = 898U;
	int32_t x272 = -2566;
	int32_t t67 = 14097;

    t67 = ((x269^(x270!=x271))<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MAX;
	int32_t x276 = INT32_MAX;

    t68 = ((x273^(x274!=x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int64_t x278 = -1LL;
	int64_t x279 = 281675019741991674LL;
	volatile int64_t x280 = 14508LL;
	volatile int32_t t69 = 38;

    t69 = ((x277^(x278!=x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x283 = -1;
	int32_t x284 = 241;
	int32_t t70 = 1772890;

    t70 = ((x281^(x282!=x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x286 = -1LL;
	uint32_t x287 = UINT32_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = 132;

    t71 = ((x285^(x286!=x287))<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = 36;
	volatile int32_t x290 = INT32_MAX;
	int16_t x291 = -1;
	volatile int32_t x292 = -1;
	volatile int32_t t72 = 0;

    t72 = ((x289^(x290!=x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MIN;
	int16_t x295 = -131;
	static volatile int32_t t73 = -36425;

    t73 = ((x293^(x294!=x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	uint32_t x298 = 0U;
	volatile uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = -268;

    t74 = ((x297^(x298!=x299))<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = INT16_MAX;
	volatile uint32_t x302 = UINT32_MAX;

    t75 = ((x301^(x302!=x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1;
	int64_t x306 = -1LL;
	uint64_t x307 = 79735430LLU;
	static int16_t x308 = -1;
	int32_t t76 = 3;

    t76 = ((x305^(x306!=x307))<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	int64_t x311 = -1LL;
	int32_t x312 = -1;
	int32_t t77 = 768;

    t77 = ((x309^(x310!=x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = -50442LL;
	int32_t x314 = -2224;
	static uint32_t x315 = 56U;
	volatile int16_t x316 = INT16_MAX;
	static int32_t t78 = 162945;

    t78 = ((x313^(x314!=x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 28U;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = 1;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -2660388;

    t79 = ((x317^(x318!=x319))<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MAX;
	int64_t x323 = -1LL;
	volatile int64_t x324 = -1LL;

    t80 = ((x321^(x322!=x323))<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -81;
	int16_t x327 = INT16_MAX;
	int64_t x328 = -16551265LL;
	int32_t t81 = -31;

    t81 = ((x325^(x326!=x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = UINT64_MAX;
	volatile int32_t t82 = -1;

    t82 = ((x329^(x330!=x331))<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x335 = 35;
	volatile int32_t t83 = -120012012;

    t83 = ((x333^(x334!=x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 0;
	volatile int16_t x338 = -2;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t t84 = 188342;

    t84 = ((x337^(x338!=x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = -1LL;
	static volatile int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 164084571;

    t85 = ((x341^(x342!=x343))<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	uint64_t x346 = 45231023822361LLU;
	int16_t x347 = 1;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = -7201445;

    t86 = ((x345^(x346!=x347))<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -811149;
	int32_t x351 = INT32_MAX;
	int32_t x352 = INT32_MAX;
	volatile int32_t t87 = -33;

    t87 = ((x349^(x350!=x351))<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x355 = 85LLU;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = -15;

    t88 = ((x353^(x354!=x355))<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MAX;
	int8_t x358 = 25;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -80178774;

    t89 = ((x357^(x358!=x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	volatile int64_t x362 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = 24020909;

    t90 = ((x361^(x362!=x363))<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MAX;
	int64_t x366 = INT64_MIN;
	uint32_t x367 = UINT32_MAX;
	uint8_t x368 = 8U;
	volatile int32_t t91 = -10277059;

    t91 = ((x365^(x366!=x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x369 = -1;
	volatile int32_t x370 = 12416;
	int16_t x371 = INT16_MIN;
	int8_t x372 = 0;
	volatile int32_t t92 = 12937;

    t92 = ((x369^(x370!=x371))<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	int16_t x375 = INT16_MIN;
	int32_t t93 = -27;

    t93 = ((x373^(x374!=x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 5815U;
	int64_t x380 = INT64_MAX;
	volatile int32_t t94 = 1022363;

    t94 = ((x377^(x378!=x379))<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = -6728LL;
	static volatile int16_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t95 = -190163;

    t95 = ((x381^(x382!=x383))<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 1094488598U;
	int8_t x386 = 0;
	int8_t x387 = INT8_MAX;
	volatile int32_t t96 = 676371;

    t96 = ((x385^(x386!=x387))<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 53097860U;
	int8_t x390 = -31;
	uint16_t x391 = 1U;
	static int32_t t97 = 260748;

    t97 = ((x389^(x390!=x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = -539785255;

    t98 = ((x393^(x394!=x395))<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 242U;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	static int32_t x400 = -1;

    t99 = ((x397^(x398!=x399))<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	static int16_t x402 = -1;
	int32_t x403 = -1;
	uint8_t x404 = 5U;
	static int32_t t100 = 12;

    t100 = ((x401^(x402!=x403))<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	static int32_t x407 = INT32_MIN;
	static int64_t x408 = -1LL;
	static volatile int32_t t101 = 14326249;

    t101 = ((x405^(x406!=x407))<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MAX;
	int16_t x411 = -1;
	int32_t x412 = -1;
	volatile int32_t t102 = -5190813;

    t102 = ((x409^(x410!=x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = INT16_MAX;
	uint16_t x415 = 0U;
	int8_t x416 = -14;
	volatile int32_t t103 = 240342;

    t103 = ((x413^(x414!=x415))<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -2;
	int8_t x420 = -1;

    t104 = ((x417^(x418!=x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	uint32_t x422 = 31807U;
	int32_t x423 = INT32_MIN;
	static uint8_t x424 = UINT8_MAX;
	int32_t t105 = -142657202;

    t105 = ((x421^(x422!=x423))<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = -1;
	static uint32_t x426 = UINT32_MAX;
	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;

    t106 = ((x425^(x426!=x427))<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -2;
	int8_t x430 = INT8_MIN;
	int32_t x431 = 3;
	int16_t x432 = INT16_MIN;
	int32_t t107 = 0;

    t107 = ((x429^(x430!=x431))<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	int8_t x436 = 33;
	volatile int32_t t108 = -153428129;

    t108 = ((x433^(x434!=x435))<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	uint16_t x438 = 1743U;
	uint32_t x439 = 18U;
	uint16_t x440 = UINT16_MAX;
	int32_t t109 = 21;

    t109 = ((x437^(x438!=x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x442 = INT8_MIN;
	static int32_t x443 = -1;
	int16_t x444 = -13;
	static volatile int32_t t110 = -9803943;

    t110 = ((x441^(x442!=x443))<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = -1;
	int64_t x447 = INT64_MAX;
	static uint32_t x448 = 918801U;
	int32_t t111 = -61;

    t111 = ((x445^(x446!=x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = UINT16_MAX;
	int16_t x451 = 7011;
	int32_t x452 = -126951;

    t112 = ((x449^(x450!=x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x454 = 70;
	static uint32_t x455 = 146U;
	volatile int32_t x456 = -12;
	volatile int32_t t113 = 1;

    t113 = ((x453^(x454!=x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x457 = UINT16_MAX;
	uint8_t x459 = 9U;
	int16_t x460 = 0;

    t114 = ((x457^(x458!=x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = -814725464;
	int32_t x463 = INT32_MIN;
	int16_t x464 = -1;
	volatile int32_t t115 = 0;

    t115 = ((x461^(x462!=x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1892;
	int8_t x466 = 5;
	int32_t x467 = -1;
	uint8_t x468 = 3U;

    t116 = ((x465^(x466!=x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	static int32_t x471 = INT32_MAX;
	volatile int16_t x472 = -1;
	int32_t t117 = 1861;

    t117 = ((x469^(x470!=x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -612332408765528LL;
	static uint64_t x474 = 1904287560328532587LLU;
	int64_t x475 = 63055585LL;
	int8_t x476 = -3;
	volatile int32_t t118 = 17775055;

    t118 = ((x473^(x474!=x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 485834319U;
	volatile int64_t x478 = INT64_MAX;
	volatile int8_t x479 = 0;
	uint8_t x480 = 46U;
	volatile int32_t t119 = 161673;

    t119 = ((x477^(x478!=x479))<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = 2;
	int16_t x482 = INT16_MIN;
	static int32_t x483 = 36307767;
	int8_t x484 = -1;
	int32_t t120 = 8791;

    t120 = ((x481^(x482!=x483))<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -1LL;
	volatile int64_t x486 = -1085385368207LL;
	int8_t x488 = INT8_MIN;
	int32_t t121 = -62988;

    t121 = ((x485^(x486!=x487))<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t122 = -54;

    t122 = ((x489^(x490!=x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = INT32_MIN;
	int64_t x495 = -1LL;
	static int16_t x496 = INT16_MAX;
	volatile int32_t t123 = 69028494;

    t123 = ((x493^(x494!=x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = -7;
	uint8_t x498 = UINT8_MAX;
	uint32_t x499 = UINT32_MAX;
	int8_t x500 = 5;
	static int32_t t124 = -7;

    t124 = ((x497^(x498!=x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	int16_t x502 = -1;
	int32_t x504 = INT32_MIN;
	static volatile int32_t t125 = 513794242;

    t125 = ((x501^(x502!=x503))<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = -57;
	uint8_t x506 = UINT8_MAX;
	int32_t x508 = -1;
	int32_t t126 = 52425;

    t126 = ((x505^(x506!=x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 18897405142893444LL;
	int32_t x510 = INT32_MIN;
	static uint32_t x511 = 2963732U;
	int8_t x512 = -1;
	volatile int32_t t127 = -9;

    t127 = ((x509^(x510!=x511))<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x515 = -1LL;
	static volatile int8_t x516 = INT8_MIN;
	volatile int32_t t128 = 6803161;

    t128 = ((x513^(x514!=x515))<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	volatile int32_t x518 = -3;
	int32_t t129 = 3024;

    t129 = ((x517^(x518!=x519))<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -57;
	volatile int64_t x522 = -9700728679564LL;
	int16_t x524 = 1;
	static volatile int32_t t130 = 16370007;

    t130 = ((x521^(x522!=x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = 2933572LL;
	static int8_t x526 = INT8_MIN;
	uint32_t x527 = 2489U;
	int8_t x528 = 0;
	volatile int32_t t131 = -3558;

    t131 = ((x525^(x526!=x527))<=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = -1LL;
	volatile int32_t t132 = -1011228;

    t132 = ((x529^(x530!=x531))<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x535 = 1318;
	int32_t x536 = -214929;
	volatile int32_t t133 = -43366735;

    t133 = ((x533^(x534!=x535))<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x537 = 11945U;
	int64_t x540 = INT64_MAX;
	int32_t t134 = -15;

    t134 = ((x537^(x538!=x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x542 = INT32_MIN;
	static volatile int32_t t135 = 3270;

    t135 = ((x541^(x542!=x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x546 = -15;
	static uint16_t x547 = 2512U;
	int32_t x548 = 364494;
	int32_t t136 = 3978166;

    t136 = ((x545^(x546!=x547))<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x550 = 180LLU;
	static volatile int8_t x552 = INT8_MIN;

    t137 = ((x549^(x550!=x551))<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x553 = 5U;
	uint16_t x554 = 293U;
	int16_t x555 = -44;
	int64_t x556 = 53801838116LL;
	static volatile int32_t t138 = -574;

    t138 = ((x553^(x554!=x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -841;
	volatile uint64_t x559 = 70731278380361023LLU;
	volatile int32_t t139 = 212603220;

    t139 = ((x557^(x558!=x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 40U;
	volatile int32_t x562 = INT32_MIN;
	uint16_t x563 = 65U;
	volatile int64_t x564 = 3324226714119LL;
	volatile int32_t t140 = -256376;

    t140 = ((x561^(x562!=x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x566 = INT16_MIN;
	volatile uint32_t x567 = 0U;
	int64_t x568 = INT64_MIN;
	int32_t t141 = -81;

    t141 = ((x565^(x566!=x567))<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile int32_t x571 = INT32_MAX;
	static int32_t t142 = 53422590;

    t142 = ((x569^(x570!=x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x574 = 193;
	int16_t x575 = INT16_MAX;
	volatile int16_t x576 = -1;
	int32_t t143 = -343;

    t143 = ((x573^(x574!=x575))<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x579 = 60U;
	volatile int8_t x580 = -10;
	int32_t t144 = -55114;

    t144 = ((x577^(x578!=x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = INT64_MAX;
	int8_t x582 = INT8_MAX;
	static volatile int16_t x584 = 1;
	static volatile int32_t t145 = -281;

    t145 = ((x581^(x582!=x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	volatile int32_t x586 = -1;
	int32_t x587 = 0;
	int64_t x588 = 20957LL;
	volatile int32_t t146 = -5723901;

    t146 = ((x585^(x586!=x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MAX;
	static uint32_t x590 = UINT32_MAX;
	static int32_t x591 = 58952869;
	uint16_t x592 = 19U;
	volatile int32_t t147 = 385290;

    t147 = ((x589^(x590!=x591))<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	static int8_t x594 = 1;
	uint8_t x595 = UINT8_MAX;
	int64_t x596 = INT64_MAX;
	int32_t t148 = 217439602;

    t148 = ((x593^(x594!=x595))<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int32_t x598 = 385565;
	static int16_t x599 = 957;
	volatile uint8_t x600 = UINT8_MAX;

    t149 = ((x597^(x598!=x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int16_t x602 = INT16_MAX;
	uint8_t x603 = 4U;
	uint64_t x604 = 30LLU;

    t150 = ((x601^(x602!=x603))<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	volatile int64_t x606 = INT64_MIN;
	int64_t x607 = -78LL;
	int64_t x608 = INT64_MAX;

    t151 = ((x605^(x606!=x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int8_t x611 = INT8_MAX;
	uint64_t x612 = 58938587922410311LLU;
	volatile int32_t t152 = 1090851;

    t152 = ((x609^(x610!=x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = 86504094;
	int32_t x614 = 17;
	volatile int16_t x615 = -1;
	int32_t t153 = 474062673;

    t153 = ((x613^(x614!=x615))<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 59U;
	uint32_t x618 = UINT32_MAX;
	volatile int16_t x619 = INT16_MAX;
	uint64_t x620 = 202896390102067192LLU;
	volatile int32_t t154 = 172708345;

    t154 = ((x617^(x618!=x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	static volatile int16_t x622 = INT16_MAX;
	int32_t x623 = INT32_MIN;
	uint64_t x624 = 270766636653LLU;
	volatile int32_t t155 = -2751627;

    t155 = ((x621^(x622!=x623))<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = -1LL;
	int64_t x626 = -24286256LL;
	int32_t x627 = 11019749;
	static volatile int16_t x628 = INT16_MAX;

    t156 = ((x625^(x626!=x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = -1LL;
	uint8_t x631 = 7U;
	int64_t x632 = -1269213545920929887LL;
	int32_t t157 = -708823;

    t157 = ((x629^(x630!=x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile int32_t x634 = -162;
	int64_t x635 = -35344039215338783LL;
	int8_t x636 = -1;
	int32_t t158 = -102999637;

    t158 = ((x633^(x634!=x635))<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x638 = 18U;
	int16_t x639 = -4462;
	volatile uint32_t x640 = 2214357U;

    t159 = ((x637^(x638!=x639))<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 1343U;
	static volatile int8_t x642 = -57;
	static int32_t x643 = INT32_MIN;
	volatile int64_t x644 = INT64_MAX;
	volatile int32_t t160 = 29172;

    t160 = ((x641^(x642!=x643))<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	volatile int32_t x648 = 2;

    t161 = ((x645^(x646!=x647))<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int32_t x651 = INT32_MAX;
	uint16_t x652 = UINT16_MAX;
	static int32_t t162 = -117071;

    t162 = ((x649^(x650!=x651))<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MIN;
	uint64_t x656 = 119515306522318LLU;
	int32_t t163 = 41592625;

    t163 = ((x653^(x654!=x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	int16_t x659 = -1;
	int32_t x660 = 801;
	int32_t t164 = 1;

    t164 = ((x657^(x658!=x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x663 = INT64_MIN;
	volatile int32_t t165 = -337;

    t165 = ((x661^(x662!=x663))<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x666 = 11U;
	uint8_t x667 = 22U;
	int16_t x668 = INT16_MAX;
	static int32_t t166 = 68084;

    t166 = ((x665^(x666!=x667))<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	volatile int8_t x670 = INT8_MIN;
	int8_t x671 = -1;
	int8_t x672 = -1;
	static int32_t t167 = 5;

    t167 = ((x669^(x670!=x671))<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 1U;
	static uint8_t x674 = 2U;
	int32_t x675 = -6;
	int32_t x676 = -2406768;
	volatile int32_t t168 = -7399;

    t168 = ((x673^(x674!=x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MAX;

    t169 = ((x677^(x678!=x679))<=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x682 = -1;
	volatile int16_t x683 = -1;
	uint16_t x684 = UINT16_MAX;
	int32_t t170 = 79;

    t170 = ((x681^(x682!=x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	int8_t x688 = INT8_MIN;

    t171 = ((x685^(x686!=x687))<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = -16;
	int32_t x691 = -1;
	int8_t x692 = INT8_MIN;

    t172 = ((x689^(x690!=x691))<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x693 = INT16_MIN;
	uint64_t x696 = UINT64_MAX;
	volatile int32_t t173 = 2090460;

    t173 = ((x693^(x694!=x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = 15;
	int32_t x698 = -1;
	int8_t x699 = -1;
	static int32_t x700 = INT32_MAX;
	volatile int32_t t174 = -28;

    t174 = ((x697^(x698!=x699))<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = 1;
	int64_t x702 = -1LL;
	int32_t x703 = INT32_MIN;
	volatile int64_t x704 = -100LL;
	volatile int32_t t175 = 299437426;

    t175 = ((x701^(x702!=x703))<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 0LL;
	uint16_t x706 = 2U;
	volatile int32_t x707 = -1;
	uint64_t x708 = UINT64_MAX;
	int32_t t176 = 208687259;

    t176 = ((x705^(x706!=x707))<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MIN;
	int8_t x710 = INT8_MIN;
	uint16_t x711 = 12U;
	volatile int32_t t177 = 67481;

    t177 = ((x709^(x710!=x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	static volatile uint16_t x714 = 1959U;
	int32_t x715 = -1;
	int32_t t178 = 387800970;

    t178 = ((x713^(x714!=x715))<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	int64_t x718 = 600596LL;
	int32_t x719 = INT32_MAX;
	static int16_t x720 = INT16_MIN;

    t179 = ((x717^(x718!=x719))<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	static volatile int32_t x722 = INT32_MIN;
	static int16_t x723 = -12325;
	uint8_t x724 = 16U;

    t180 = ((x721^(x722!=x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int16_t x727 = INT16_MAX;
	int8_t x728 = -2;
	int32_t t181 = -81;

    t181 = ((x725^(x726!=x727))<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = INT16_MIN;
	int8_t x730 = 43;
	volatile int32_t t182 = -671;

    t182 = ((x729^(x730!=x731))<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int16_t x734 = 1;
	volatile int16_t x735 = INT16_MIN;
	uint16_t x736 = 4367U;

    t183 = ((x733^(x734!=x735))<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = 24;
	uint32_t x739 = 240893596U;
	volatile int32_t x740 = INT32_MAX;
	int32_t t184 = -5230;

    t184 = ((x737^(x738!=x739))<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MIN;
	uint32_t x743 = 577350845U;
	int16_t x744 = INT16_MIN;

    t185 = ((x741^(x742!=x743))<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -1;
	volatile int16_t x746 = 13;
	int64_t x747 = INT64_MIN;
	static int32_t x748 = -1;
	volatile int32_t t186 = -740363;

    t186 = ((x745^(x746!=x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = -1;
	volatile int64_t x750 = INT64_MAX;
	int64_t x751 = INT64_MIN;
	static int64_t x752 = 127850LL;
	static volatile int32_t t187 = 450361;

    t187 = ((x749^(x750!=x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = UINT8_MAX;
	static uint64_t x754 = 15LLU;
	int64_t x756 = INT64_MAX;
	volatile int32_t t188 = 415513219;

    t188 = ((x753^(x754!=x755))<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	uint16_t x758 = 13850U;
	int16_t x759 = INT16_MIN;
	int32_t t189 = -1;

    t189 = ((x757^(x758!=x759))<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 49785;
	int8_t x763 = 0;
	static int8_t x764 = INT8_MIN;
	volatile int32_t t190 = 75;

    t190 = ((x761^(x762!=x763))<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x766 = INT64_MIN;
	int8_t x767 = 9;
	int8_t x768 = 2;
	static int32_t t191 = -178140084;

    t191 = ((x765^(x766!=x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	volatile int8_t x770 = -1;
	int16_t x772 = INT16_MAX;
	int32_t t192 = 3;

    t192 = ((x769^(x770!=x771))<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x774 = -1;
	volatile int8_t x775 = 3;
	static int8_t x776 = -14;
	int32_t t193 = -35298;

    t193 = ((x773^(x774!=x775))<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x779 = UINT16_MAX;
	static uint8_t x780 = UINT8_MAX;

    t194 = ((x777^(x778!=x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	int16_t x782 = -1;
	volatile int8_t x783 = INT8_MIN;
	int16_t x784 = 2;
	int32_t t195 = -43667825;

    t195 = ((x781^(x782!=x783))<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 0;
	int64_t x787 = INT64_MIN;
	volatile int32_t t196 = -53;

    t196 = ((x785^(x786!=x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MIN;
	volatile int8_t x790 = INT8_MAX;
	static int64_t x791 = 11553LL;
	volatile uint8_t x792 = 48U;
	int32_t t197 = 390983;

    t197 = ((x789^(x790!=x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = -3302;
	int16_t x794 = 6;
	volatile int32_t x796 = -1;
	static volatile int32_t t198 = 15;

    t198 = ((x793^(x794!=x795))<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 396U;
	int32_t x798 = 14714;
	static int64_t x799 = INT64_MIN;
	int16_t x800 = -1;
	volatile int32_t t199 = 15;

    t199 = ((x797^(x798!=x799))<=x800);

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

