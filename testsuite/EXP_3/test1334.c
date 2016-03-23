
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

int32_t x8 = INT32_MIN;
int64_t x10 = INT64_MIN;
int64_t x11 = INT64_MIN;
volatile uint32_t x20 = 523157173U;
uint32_t t4 = 8028072U;
int32_t t6 = 1;
int16_t x29 = -3844;
volatile int32_t t8 = INT32_MIN;
volatile int16_t x47 = INT16_MAX;
volatile int16_t x48 = -1;
volatile int32_t t11 = 5729788;
volatile int32_t x51 = INT32_MIN;
int32_t t12 = -35;
static int64_t x63 = INT64_MIN;
int8_t x64 = 1;
int64_t x65 = INT64_MIN;
static int8_t x68 = INT8_MAX;
volatile int64_t t16 = -3901367481418LL;
static int16_t x74 = -3804;
static int32_t t19 = 137;
uint32_t x103 = 2707750U;
int8_t x110 = INT8_MAX;
int32_t x112 = INT32_MAX;
static int32_t t27 = 1;
volatile int64_t t28 = -41348891LL;
int32_t x119 = INT32_MIN;
static volatile uint64_t t29 = 5072819123934LLU;
volatile uint64_t t30 = 230834205165445796LLU;
int64_t x126 = INT64_MAX;
volatile int16_t x134 = 245;
volatile uint64_t t33 = 2173744473599707333LLU;
volatile int16_t x139 = INT16_MAX;
static int16_t x140 = INT16_MIN;
volatile int64_t t34 = 506986LL;
int8_t x146 = -1;
volatile uint64_t x152 = UINT64_MAX;
volatile int64_t x157 = INT64_MIN;
int64_t x162 = -827627406471226LL;
static volatile int64_t t40 = -117322845LL;
volatile uint16_t x166 = 0U;
volatile int8_t x172 = INT8_MAX;
volatile int8_t x173 = 30;
int16_t x202 = -1;
static volatile int32_t t53 = 4066065;
volatile uint16_t x224 = 121U;
int8_t x236 = 15;
int64_t x239 = -1LL;
int8_t x240 = INT8_MAX;
volatile uint32_t t59 = 4U;
static volatile int64_t x241 = -1LL;
uint16_t x245 = UINT16_MAX;
static uint64_t x248 = 45LLU;
static volatile int8_t x252 = 21;
int32_t t63 = INT32_MIN;
int16_t x271 = INT16_MAX;
int32_t x277 = -103016292;
volatile int8_t x278 = INT8_MIN;
uint8_t x284 = UINT8_MAX;
int8_t x291 = 1;
uint8_t x292 = UINT8_MAX;
uint64_t x300 = UINT64_MAX;
uint64_t x302 = 13753LLU;
uint16_t x304 = 21644U;
uint16_t x305 = UINT16_MAX;
volatile uint8_t x314 = 0U;
int64_t x316 = INT64_MAX;
static volatile int64_t x320 = INT64_MIN;
volatile uint32_t t78 = 5712836U;
static int8_t x322 = INT8_MIN;
int16_t x326 = -40;
int16_t x333 = -1;
int32_t x340 = 33486482;
volatile int8_t x349 = -1;
int32_t t85 = 35180;
uint64_t x354 = 332078481118LLU;
int64_t t88 = -4432232989997480LL;
int32_t x373 = 56465442;
int64_t x374 = INT64_MAX;
uint16_t x376 = 6U;
int8_t x381 = INT8_MIN;
int64_t x382 = 55922079098900LL;
int64_t x387 = INT64_MAX;
int32_t x390 = INT32_MIN;
volatile int16_t x391 = -1;
static int8_t x404 = INT8_MAX;
int32_t t98 = 283026;
static volatile int32_t t100 = -5;
static int64_t x430 = INT64_MAX;
volatile uint32_t x436 = UINT32_MAX;
int8_t x448 = 0;
volatile uint64_t x449 = UINT64_MAX;
uint16_t x456 = 4U;
uint32_t x460 = 113621207U;
int16_t x461 = -1;
int16_t x464 = -457;
uint64_t t113 = 31LLU;
volatile int32_t x478 = INT32_MAX;
int32_t x485 = -316;
int32_t x495 = INT32_MIN;
volatile uint32_t x501 = UINT32_MAX;
uint32_t t121 = UINT32_MAX;
int16_t x506 = -5939;
volatile int64_t x510 = INT64_MIN;
static int16_t x518 = INT16_MIN;
int64_t x523 = INT64_MAX;
static int32_t x524 = INT32_MIN;
int16_t x528 = -1;
int8_t x537 = -2;
uint64_t x538 = 5734125LLU;
volatile uint32_t t132 = 8565571U;
int16_t x549 = INT16_MAX;
uint32_t x557 = 657751504U;
static uint32_t x558 = UINT32_MAX;
int16_t x566 = INT16_MIN;
int8_t x570 = INT8_MIN;
static volatile int8_t x572 = 0;
volatile int32_t x577 = -1;
int8_t x578 = -1;
volatile int32_t t141 = 5;
int64_t x607 = INT64_MIN;
int32_t x635 = INT32_MIN;
uint32_t x636 = 12U;
static volatile uint32_t t153 = 12U;
volatile uint16_t x643 = UINT16_MAX;
uint16_t x648 = UINT16_MAX;
volatile uint32_t t155 = 127229473U;
uint8_t x650 = 1U;
uint64_t x651 = 4100LLU;
volatile int64_t t156 = 52725782LL;
static int8_t x653 = INT8_MIN;
static volatile uint64_t x655 = 1958190LLU;
int32_t x659 = INT32_MIN;
volatile uint32_t x662 = 0U;
volatile int8_t x666 = INT8_MIN;
static int8_t x667 = INT8_MIN;
uint16_t x673 = 4535U;
int64_t x679 = INT64_MIN;
int8_t x681 = -1;
volatile int16_t x688 = INT16_MAX;
uint16_t x689 = 0U;
static volatile int32_t x690 = INT32_MIN;
volatile int32_t x691 = -7;
static int32_t t166 = -235344;
volatile uint16_t x701 = 1U;
volatile int64_t x704 = INT64_MAX;
int64_t x710 = -1LL;
int64_t t171 = 230763897325446422LL;
volatile int8_t x717 = 0;
int8_t x722 = INT8_MIN;
int16_t x723 = -1;
volatile uint64_t t174 = 47LLU;
static volatile uint32_t t175 = 132154U;
int32_t t176 = -322699570;
static volatile uint64_t t177 = 2747LLU;
int32_t x741 = 693947;
int64_t x747 = INT64_MIN;
int32_t x751 = INT32_MAX;
volatile int64_t t180 = 15991840654678LL;
volatile int64_t x757 = INT64_MIN;
int32_t x771 = -1;
int32_t x775 = 358;
int32_t x776 = -1;
int8_t x777 = 5;
static volatile uint64_t x781 = 1LLU;
volatile int32_t x782 = -1;
int32_t x783 = INT32_MAX;
int16_t x787 = -1;
int16_t x791 = -1;
int8_t x792 = -13;
volatile int8_t x794 = -1;
volatile int64_t x798 = -11843LL;
static volatile uint64_t t193 = 209088998081LLU;
int32_t x805 = INT32_MAX;
volatile uint8_t x807 = 3U;
int32_t x809 = 1110569;
int32_t x813 = INT32_MIN;
int16_t x822 = -239;
uint16_t x824 = UINT16_MAX;
int32_t x828 = INT32_MIN;
int64_t x830 = INT64_MAX;


void f0(void) {
    	volatile int64_t x1 = -3286545LL;
	int64_t x2 = INT64_MIN;
	uint32_t x3 = 29662U;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = INT64_MIN;

    t0 = ((x1&x2)/(x3!=x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	static uint8_t x6 = 0U;
	int64_t x7 = 395953957255424428LL;
	static volatile int32_t t1 = 31771566;

    t1 = ((x5&x6)/(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 12LL;
	int16_t x12 = INT16_MAX;
	volatile int64_t t2 = -1LL;

    t2 = ((x9&x10)/(x11!=x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 2;
	int64_t x14 = 28443671628598LL;
	int16_t x15 = -1;
	volatile int8_t x16 = -4;
	static int64_t t3 = 6583801634539LL;

    t3 = ((x13&x14)/(x15!=x16));

    if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 22U;
	int32_t x19 = INT32_MAX;

    t4 = ((x17&x18)/(x19!=x20));

    if (t4 != 22U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	volatile uint64_t x22 = UINT64_MAX;
	static int32_t x23 = INT32_MAX;
	uint8_t x24 = 13U;
	volatile uint64_t t5 = 114LLU;

    t5 = ((x21&x22)/(x23!=x24));

    if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 8;
	volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MAX;

    t6 = ((x25&x26)/(x27!=x28));

    if (t6 != 8) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x30 = 411370420LLU;
	volatile int8_t x31 = INT8_MAX;
	static int16_t x32 = 57;
	uint64_t t7 = 25628084530297LLU;

    t7 = ((x29&x30)/(x31!=x32));

    if (t7 != 411369652LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -7;
	int32_t x34 = INT32_MIN;
	int32_t x35 = -1;
	volatile int64_t x36 = 5630677LL;

    t8 = ((x33&x34)/(x35!=x36));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile int8_t x38 = -25;
	int8_t x39 = -29;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 40;

    t9 = ((x37&x38)/(x39!=x40));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	volatile int32_t x43 = INT32_MIN;
	int16_t x44 = -8;
	volatile int32_t t10 = 559501594;

    t10 = ((x41&x42)/(x43!=x44));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint8_t x46 = UINT8_MAX;

    t11 = ((x45&x46)/(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	volatile int8_t x52 = INT8_MAX;

    t12 = ((x49&x50)/(x51!=x52));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	volatile uint64_t x54 = 125LLU;
	int16_t x55 = -111;
	int32_t x56 = 41;
	static volatile uint64_t t13 = 1096206320552017LLU;

    t13 = ((x53&x54)/(x55!=x56));

    if (t13 != 125LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = 613593;
	volatile int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 0;

    t14 = ((x57&x58)/(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int16_t x62 = 37;
	volatile int32_t t15 = -1121;

    t15 = ((x61&x62)/(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 1U;
	int8_t x67 = -16;

    t16 = ((x65&x66)/(x67!=x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 862U;
	int8_t x70 = INT8_MIN;
	volatile uint32_t x71 = 638564U;
	static volatile uint16_t x72 = UINT16_MAX;
	static uint32_t t17 = 22495U;

    t17 = ((x69&x70)/(x71!=x72));

    if (t17 != 768U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = UINT64_MAX;
	static uint8_t x75 = UINT8_MAX;
	static int8_t x76 = INT8_MAX;
	static uint64_t t18 = 33254846063908LLU;

    t18 = ((x73&x74)/(x75!=x76));

    if (t18 != 18446744073709547812LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -111086070;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 291055U;
	int64_t x80 = -1LL;

    t19 = ((x77&x78)/(x79!=x80));

    if (t19 != 62986) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	uint32_t x83 = UINT32_MAX;
	static volatile int64_t x84 = -437747879LL;
	volatile int64_t t20 = -1LL;

    t20 = ((x81&x82)/(x83!=x84));

    if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 515282723914160204LLU;
	uint64_t x86 = 48281018077278LLU;
	uint32_t x87 = UINT32_MAX;
	static int16_t x88 = INT16_MAX;
	static volatile uint64_t t21 = 244LLU;

    t21 = ((x85&x86)/(x87!=x88));

    if (t21 != 38380982014028LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int16_t x90 = -1;
	volatile int64_t x91 = -51LL;
	int32_t x92 = INT32_MAX;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = ((x89&x90)/(x91!=x92));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 164U;
	uint32_t x94 = 449904732U;
	uint16_t x95 = 1749U;
	int64_t x96 = INT64_MAX;
	volatile uint32_t t23 = 30U;

    t23 = ((x93&x94)/(x95!=x96));

    if (t23 != 4U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 1656109183388LLU;
	int32_t x98 = -1;
	uint16_t x99 = 14U;
	int64_t x100 = INT64_MAX;
	static uint64_t t24 = 12931777937LLU;

    t24 = ((x97&x98)/(x99!=x100));

    if (t24 != 1656109183388LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	int64_t x102 = -4106493LL;
	uint8_t x104 = 6U;
	static volatile int64_t t25 = 171260499990884907LL;

    t25 = ((x101&x102)/(x103!=x104));

    if (t25 != 9223372036850669315LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x105 = INT32_MIN;
	volatile int8_t x106 = INT8_MIN;
	volatile int32_t x107 = -483223;
	int64_t x108 = -7364114554LL;
	int32_t t26 = INT32_MIN;

    t26 = ((x105&x106)/(x107!=x108));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -59;
	static int32_t x111 = -1;

    t27 = ((x109&x110)/(x111!=x112));

    if (t27 != 69) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1088805680089453433LL;
	static int16_t x114 = INT16_MIN;
	static uint32_t x115 = 31235062U;
	uint8_t x116 = UINT8_MAX;

    t28 = ((x113&x114)/(x115!=x116));

    if (t28 != -1088805680089464832LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x117 = UINT64_MAX;
	static uint64_t x118 = 94540142741857883LLU;
	int64_t x120 = INT64_MIN;

    t29 = ((x117&x118)/(x119!=x120));

    if (t29 != 94540142741857883LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 5762;
	volatile uint64_t x122 = 1682576097887832889LLU;
	static int8_t x123 = -3;
	uint64_t x124 = UINT64_MAX;

    t30 = ((x121&x122)/(x123!=x124));

    if (t30 != 512LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	uint64_t x127 = 908206853238LLU;
	uint64_t x128 = 2807051696069322653LLU;
	int64_t t31 = 94913116312968108LL;

    t31 = ((x125&x126)/(x127!=x128));

    if (t31 != 127LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 0U;
	volatile int16_t x130 = 2;
	int64_t x131 = INT64_MIN;
	volatile int32_t x132 = 58;
	volatile int32_t t32 = 762;

    t32 = ((x129&x130)/(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = UINT64_MAX;
	uint16_t x135 = 6559U;
	volatile uint32_t x136 = 9328U;

    t33 = ((x133&x134)/(x135!=x136));

    if (t33 != 245LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 41352934LL;
	static uint16_t x138 = 4U;

    t34 = ((x137&x138)/(x139!=x140));

    if (t34 != 4LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	volatile int64_t x142 = -1LL;
	int32_t x143 = 2175;
	uint32_t x144 = 512274U;
	int64_t t35 = -1LL;

    t35 = ((x141&x142)/(x143!=x144));

    if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 1823749323U;
	volatile int32_t x147 = -1;
	int64_t x148 = INT64_MIN;
	volatile uint32_t t36 = 1704U;

    t36 = ((x145&x146)/(x147!=x148));

    if (t36 != 1823749323U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	volatile int32_t x150 = -955672360;
	volatile uint8_t x151 = 22U;
	static volatile int64_t t37 = 118LL;

    t37 = ((x149&x150)/(x151!=x152));

    if (t37 != -955672360LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	uint16_t x154 = 59U;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = INT16_MAX;
	volatile int32_t t38 = -15;

    t38 = ((x153&x154)/(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x158 = 1555726U;
	int8_t x159 = -1;
	static uint16_t x160 = 21U;
	volatile int64_t t39 = 1LL;

    t39 = ((x157&x158)/(x159!=x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = 63519U;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 11U;

    t40 = ((x161&x162)/(x163!=x164));

    if (t40 != 18438LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 489107032U;
	uint64_t x167 = UINT64_MAX;
	uint8_t x168 = 30U;
	volatile uint32_t t41 = 854786U;

    t41 = ((x165&x166)/(x167!=x168));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = 22;
	int16_t x170 = -1;
	static int64_t x171 = -27073374LL;
	int32_t t42 = 53;

    t42 = ((x169&x170)/(x171!=x172));

    if (t42 != 22) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x174 = -1;
	uint8_t x175 = 4U;
	int8_t x176 = 1;
	volatile int32_t t43 = -71;

    t43 = ((x173&x174)/(x175!=x176));

    if (t43 != 30) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -49LL;
	uint32_t x178 = 111601U;
	static uint8_t x179 = 2U;
	int32_t x180 = -116776;
	int64_t t44 = 16334LL;

    t44 = ((x177&x178)/(x179!=x180));

    if (t44 != 111553LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 2;
	static int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 63205609141220LLU;
	int32_t t45 = -1563;

    t45 = ((x181&x182)/(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int16_t x186 = INT16_MAX;
	int64_t x187 = INT64_MAX;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -81;

    t46 = ((x185&x186)/(x187!=x188));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	int32_t x190 = INT32_MIN;
	int16_t x191 = 3;
	int64_t x192 = INT64_MAX;
	int64_t t47 = 8101487098LL;

    t47 = ((x189&x190)/(x191!=x192));

    if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MAX;
	volatile uint16_t x194 = 1634U;
	uint8_t x195 = 0U;
	int32_t x196 = -15931;
	volatile int32_t t48 = -19379;

    t48 = ((x193&x194)/(x195!=x196));

    if (t48 != 1634) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 399LLU;
	volatile int16_t x200 = -292;
	int32_t t49 = INT32_MIN;

    t49 = ((x197&x198)/(x199!=x200));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	static int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -1755;

    t50 = ((x201&x202)/(x203!=x204));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = 7U;
	int8_t x206 = 16;
	int64_t x207 = 1292445982LL;
	uint32_t x208 = 62095U;
	int32_t t51 = 187730;

    t51 = ((x205&x206)/(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 459948LLU;
	int64_t x210 = INT64_MIN;
	static int16_t x211 = 1;
	int8_t x212 = 43;
	uint64_t t52 = 4554156581LLU;

    t52 = ((x209&x210)/(x211!=x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 129;
	static int32_t x214 = INT32_MAX;
	int16_t x215 = 2013;
	volatile int64_t x216 = INT64_MIN;

    t53 = ((x213&x214)/(x215!=x216));

    if (t53 != 129) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 57U;
	int8_t x219 = INT8_MAX;
	static int8_t x220 = -1;
	uint64_t t54 = 790LLU;

    t54 = ((x217&x218)/(x219!=x220));

    if (t54 != 57LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -14;
	int16_t x222 = -1;
	uint16_t x223 = 2662U;
	int32_t t55 = -22241;

    t55 = ((x221&x222)/(x223!=x224));

    if (t55 != -14) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 199U;
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = 8797;
	volatile int64_t t56 = 775785924LL;

    t56 = ((x225&x226)/(x227!=x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -9;
	int16_t x230 = 21;
	uint32_t x231 = 0U;
	int32_t x232 = -1;
	static volatile int32_t t57 = 896189034;

    t57 = ((x229&x230)/(x231!=x232));

    if (t57 != 21) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -1;
	int32_t x234 = 1137550;
	static int8_t x235 = INT8_MIN;
	int32_t t58 = -453;

    t58 = ((x233&x234)/(x235!=x236));

    if (t58 != 1137550) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 30U;
	volatile uint32_t x238 = UINT32_MAX;

    t59 = ((x237&x238)/(x239!=x240));

    if (t59 != 30U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x242 = 8U;
	volatile int64_t x243 = -1LL;
	uint32_t x244 = 20325U;
	static int64_t t60 = 27134511519LL;

    t60 = ((x241&x242)/(x243!=x244));

    if (t60 != 8LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MAX;
	int32_t t61 = 524;

    t61 = ((x245&x246)/(x247!=x248));

    if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MAX;
	static int16_t x250 = 14;
	uint64_t x251 = 181354214LLU;
	int32_t t62 = -14;

    t62 = ((x249&x250)/(x251!=x252));

    if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	int8_t x255 = -1;
	int8_t x256 = INT8_MAX;

    t63 = ((x253&x254)/(x255!=x256));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = 1226;
	uint64_t x258 = UINT64_MAX;
	volatile int16_t x259 = 1;
	volatile int32_t x260 = 88931678;
	volatile uint64_t t64 = 4234872383533005LLU;

    t64 = ((x257&x258)/(x259!=x260));

    if (t64 != 1226LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MAX;
	uint64_t x263 = 34325626144579320LLU;
	static uint64_t x264 = UINT64_MAX;
	int64_t t65 = -209161787263363752LL;

    t65 = ((x261&x262)/(x263!=x264));

    if (t65 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = -1;
	int32_t x267 = -1;
	static volatile int64_t x268 = 701127602LL;
	volatile int32_t t66 = 603;

    t66 = ((x265&x266)/(x267!=x268));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 90;
	int64_t x270 = -1385750587777254LL;
	static int64_t x272 = INT64_MAX;
	volatile int64_t t67 = -18596970LL;

    t67 = ((x269&x270)/(x271!=x272));

    if (t67 != 26LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	volatile int8_t x274 = 0;
	uint32_t x275 = 110862481U;
	volatile int16_t x276 = -1;
	int32_t t68 = -528254363;

    t68 = ((x273&x274)/(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x279 = INT64_MIN;
	uint32_t x280 = 2093160428U;
	volatile int32_t t69 = -1;

    t69 = ((x277&x278)/(x279!=x280));

    if (t69 != -103016320) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	static volatile int8_t x282 = 61;
	int64_t x283 = INT64_MIN;
	static int64_t t70 = 1470291573072084981LL;

    t70 = ((x281&x282)/(x283!=x284));

    if (t70 != 61LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	static uint8_t x290 = UINT8_MAX;
	static volatile uint64_t t71 = 1333778450705155LLU;

    t71 = ((x289&x290)/(x291!=x292));

    if (t71 != 255LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = INT16_MAX;
	static uint16_t x294 = UINT16_MAX;
	volatile int8_t x295 = INT8_MAX;
	int64_t x296 = -1LL;
	int32_t t72 = 83061;

    t72 = ((x293&x294)/(x295!=x296));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	static int32_t t73 = INT32_MIN;

    t73 = ((x297&x298)/(x299!=x300));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	uint64_t t74 = 3436528977133059LLU;

    t74 = ((x301&x302)/(x303!=x304));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x306 = UINT32_MAX;
	static int16_t x307 = INT16_MIN;
	volatile int32_t x308 = -14;
	uint32_t t75 = 117U;

    t75 = ((x305&x306)/(x307!=x308));

    if (t75 != 65535U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	volatile int64_t x311 = INT64_MAX;
	static volatile int64_t x312 = INT64_MIN;
	int32_t t76 = -1044;

    t76 = ((x309&x310)/(x311!=x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x313 = 34266LL;
	int64_t x315 = -1LL;
	volatile int64_t t77 = -156640LL;

    t77 = ((x313&x314)/(x315!=x316));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = INT8_MIN;
	static uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;

    t78 = ((x317&x318)/(x319!=x320));

    if (t78 != 4294967168U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = INT64_MIN;
	static uint8_t x323 = UINT8_MAX;
	int32_t x324 = 199;
	static volatile int64_t t79 = INT64_MIN;

    t79 = ((x321&x322)/(x323!=x324));

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x325 = UINT64_MAX;
	static uint64_t x327 = 98488438701LLU;
	int64_t x328 = -1LL;
	volatile uint64_t t80 = 670142936881808842LLU;

    t80 = ((x325&x326)/(x327!=x328));

    if (t80 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x329 = 4U;
	volatile int64_t x330 = INT64_MAX;
	uint64_t x331 = 24320LLU;
	volatile int16_t x332 = -88;
	int64_t t81 = -2LL;

    t81 = ((x329&x330)/(x331!=x332));

    if (t81 != 4LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x334 = -42859150483562LL;
	uint16_t x335 = 1488U;
	static uint16_t x336 = UINT16_MAX;
	volatile int64_t t82 = -6LL;

    t82 = ((x333&x334)/(x335!=x336));

    if (t82 != -42859150483562LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x337 = 1U;
	int16_t x338 = INT16_MAX;
	volatile int64_t x339 = INT64_MIN;
	volatile int32_t t83 = 63612;

    t83 = ((x337&x338)/(x339!=x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x345 = UINT8_MAX;
	int64_t x346 = -1LL;
	int8_t x347 = INT8_MIN;
	static int8_t x348 = INT8_MAX;
	int64_t t84 = -9069LL;

    t84 = ((x345&x346)/(x347!=x348));

    if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x350 = INT8_MAX;
	int16_t x351 = -5;
	uint32_t x352 = UINT32_MAX;

    t85 = ((x349&x350)/(x351!=x352));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = -2;
	int16_t x355 = 70;
	int32_t x356 = -6331;
	volatile uint64_t t86 = 31898046933332369LLU;

    t86 = ((x353&x354)/(x355!=x356));

    if (t86 != 332078481118LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MAX;
	volatile uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MIN;
	volatile int32_t t87 = 0;

    t87 = ((x357&x358)/(x359!=x360));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x361 = -1;
	int64_t x362 = -1LL;
	uint16_t x363 = 431U;
	int64_t x364 = 17442041278591LL;

    t88 = ((x361&x362)/(x363!=x364));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = 5662;
	static int32_t x366 = 63076;
	static int16_t x367 = 793;
	static int64_t x368 = -25759186436705LL;
	volatile int32_t t89 = 6860136;

    t89 = ((x365&x366)/(x367!=x368));

    if (t89 != 5636) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x369 = -1;
	uint16_t x370 = 1625U;
	uint16_t x371 = UINT16_MAX;
	static int32_t x372 = INT32_MAX;
	static volatile int32_t t90 = 4;

    t90 = ((x369&x370)/(x371!=x372));

    if (t90 != 1625) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x375 = UINT64_MAX;
	int64_t t91 = 1169043938621LL;

    t91 = ((x373&x374)/(x375!=x376));

    if (t91 != 56465442LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = -1;
	int64_t x378 = -1LL;
	int16_t x379 = -1;
	uint8_t x380 = 97U;
	static volatile int64_t t92 = 6631512045633774LL;

    t92 = ((x377&x378)/(x379!=x380));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x383 = -1093752127944475073LL;
	static uint16_t x384 = 4255U;
	static volatile int64_t t93 = -542105755LL;

    t93 = ((x381&x382)/(x383!=x384));

    if (t93 != 55922079098880LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t94 = UINT64_MAX;

    t94 = ((x385&x386)/(x387!=x388));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = 47100254495LL;
	volatile int16_t x392 = INT16_MIN;
	static int64_t t95 = 115902121978579585LL;

    t95 = ((x389&x390)/(x391!=x392));

    if (t95 != 45097156608LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x393 = INT64_MIN;
	volatile int16_t x394 = -1;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = 156LL;
	int64_t t96 = INT64_MIN;

    t96 = ((x393&x394)/(x395!=x396));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x397 = UINT64_MAX;
	int8_t x398 = 2;
	int8_t x399 = 34;
	int64_t x400 = INT64_MAX;
	uint64_t t97 = 5179503887717LLU;

    t97 = ((x397&x398)/(x399!=x400));

    if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x401 = 9483U;
	int32_t x402 = INT32_MIN;
	int16_t x403 = 587;

    t98 = ((x401&x402)/(x403!=x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = -28611528377124080LL;
	int64_t x406 = INT64_MIN;
	volatile uint8_t x407 = 1U;
	static int16_t x408 = INT16_MAX;
	int64_t t99 = INT64_MIN;

    t99 = ((x405&x406)/(x407!=x408));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x409 = 26901U;
	int16_t x410 = -1;
	int64_t x411 = INT64_MIN;
	int32_t x412 = -587658122;

    t100 = ((x409&x410)/(x411!=x412));

    if (t100 != 26901) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x413 = 1;
	int64_t x414 = INT64_MIN;
	uint32_t x415 = UINT32_MAX;
	static int64_t x416 = INT64_MIN;
	static volatile int64_t t101 = -3703LL;

    t101 = ((x413&x414)/(x415!=x416));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MAX;
	volatile uint16_t x422 = 10U;
	uint64_t x423 = 5704596LLU;
	int64_t x424 = INT64_MIN;
	static int32_t t102 = -41;

    t102 = ((x421&x422)/(x423!=x424));

    if (t102 != 10) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x425 = 23U;
	volatile int8_t x426 = INT8_MIN;
	uint8_t x427 = 103U;
	int16_t x428 = -1;
	static uint32_t t103 = 107090U;

    t103 = ((x425&x426)/(x427!=x428));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x429 = 39U;
	static uint32_t x431 = UINT32_MAX;
	volatile int64_t x432 = -1LL;
	volatile int64_t t104 = -49888LL;

    t104 = ((x429&x430)/(x431!=x432));

    if (t104 != 39LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x433 = 284047260302LLU;
	uint32_t x434 = 1552320741U;
	int32_t x435 = INT32_MAX;
	uint64_t t105 = 14LLU;

    t105 = ((x433&x434)/(x435!=x436));

    if (t105 != 8390788LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x437 = INT64_MIN;
	static int16_t x438 = INT16_MAX;
	static volatile uint32_t x439 = 5573595U;
	uint16_t x440 = 68U;
	int64_t t106 = 7156468LL;

    t106 = ((x437&x438)/(x439!=x440));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x441 = INT8_MIN;
	uint16_t x442 = 7098U;
	int32_t x443 = -44;
	uint16_t x444 = 2231U;
	volatile int32_t t107 = -66698271;

    t107 = ((x441&x442)/(x443!=x444));

    if (t107 != 7040) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = -8842067565508848LL;
	static int64_t x446 = -14529958587350005LL;
	int32_t x447 = -1;
	volatile int64_t t108 = 141642643398LL;

    t108 = ((x445&x446)/(x447!=x448));

    if (t108 != -18014380733201408LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	int16_t x452 = 63;
	uint64_t t109 = 14450943215618LLU;

    t109 = ((x449&x450)/(x451!=x452));

    if (t109 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x453 = UINT16_MAX;
	int32_t x454 = -62;
	uint16_t x455 = 7317U;
	static int32_t t110 = 62119;

    t110 = ((x453&x454)/(x455!=x456));

    if (t110 != 65474) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = INT64_MIN;
	int64_t x458 = INT64_MAX;
	uint64_t x459 = 10663985351682911LLU;
	static volatile int64_t t111 = -33798517710210769LL;

    t111 = ((x457&x458)/(x459!=x460));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x462 = UINT32_MAX;
	int64_t x463 = -3756450LL;
	volatile uint32_t t112 = UINT32_MAX;

    t112 = ((x461&x462)/(x463!=x464));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x469 = 6658739102279698504LLU;
	static uint32_t x470 = 11U;
	int32_t x471 = INT32_MIN;
	int32_t x472 = 99;

    t113 = ((x469&x470)/(x471!=x472));

    if (t113 != 8LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x473 = 199066632U;
	int64_t x474 = -1LL;
	int32_t x475 = 21;
	volatile uint64_t x476 = 27665LLU;
	static int64_t t114 = -14538015441LL;

    t114 = ((x473&x474)/(x475!=x476));

    if (t114 != 199066632LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x477 = UINT64_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MAX;
	volatile uint64_t t115 = 61041159538533LLU;

    t115 = ((x477&x478)/(x479!=x480));

    if (t115 != 2147483647LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = -1;
	int8_t x482 = -1;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	int32_t t116 = -2;

    t116 = ((x481&x482)/(x483!=x484));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x486 = -24;
	static int8_t x487 = -19;
	static int16_t x488 = INT16_MIN;
	int32_t t117 = -3286919;

    t117 = ((x485&x486)/(x487!=x488));

    if (t117 != -320) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x489 = UINT32_MAX;
	uint64_t x490 = 0LLU;
	uint32_t x491 = 16U;
	int8_t x492 = 38;
	volatile uint64_t t118 = 49438LLU;

    t118 = ((x489&x490)/(x491!=x492));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x493 = -1LL;
	int32_t x494 = -28387568;
	static int8_t x496 = -3;
	int64_t t119 = 11443433524759580LL;

    t119 = ((x493&x494)/(x495!=x496));

    if (t119 != -28387568LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = INT8_MAX;
	volatile int64_t x498 = INT64_MIN;
	volatile int64_t x499 = 7399104495LL;
	int16_t x500 = 890;
	volatile int64_t t120 = -35627110417760322LL;

    t120 = ((x497&x498)/(x499!=x500));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x502 = -1;
	uint16_t x503 = 2U;
	static uint16_t x504 = 87U;

    t121 = ((x501&x502)/(x503!=x504));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x505 = UINT16_MAX;
	static int16_t x507 = INT16_MIN;
	int16_t x508 = 8;
	volatile int32_t t122 = 22503005;

    t122 = ((x505&x506)/(x507!=x508));

    if (t122 != 59597) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x509 = INT64_MIN;
	int64_t x511 = INT64_MAX;
	int8_t x512 = INT8_MIN;
	volatile int64_t t123 = INT64_MIN;

    t123 = ((x509&x510)/(x511!=x512));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = -1;
	static uint32_t x514 = 15684U;
	int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MAX;
	static uint32_t t124 = 298486U;

    t124 = ((x513&x514)/(x515!=x516));

    if (t124 != 15684U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MAX;
	static int64_t x519 = -936588644499LL;
	volatile int8_t x520 = -3;
	static int32_t t125 = -254;

    t125 = ((x517&x518)/(x519!=x520));

    if (t125 != 2147450880) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	int32_t x522 = 860804886;
	int32_t t126 = -426;

    t126 = ((x521&x522)/(x523!=x524));

    if (t126 != 55062) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = -1;
	int32_t x526 = 0;
	uint32_t x527 = 7093U;
	static int32_t t127 = -343;

    t127 = ((x525&x526)/(x527!=x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = -27;
	volatile uint32_t x530 = UINT32_MAX;
	int16_t x531 = 0;
	static int64_t x532 = -1LL;
	static uint32_t t128 = 1U;

    t128 = ((x529&x530)/(x531!=x532));

    if (t128 != 4294967269U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MIN;
	int8_t x535 = 4;
	static uint64_t x536 = UINT64_MAX;
	volatile int32_t t129 = 1;

    t129 = ((x533&x534)/(x535!=x536));

    if (t129 != 2147483520) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x539 = -451LL;
	int8_t x540 = INT8_MIN;
	volatile uint64_t t130 = 323986444495555601LLU;

    t130 = ((x537&x538)/(x539!=x540));

    if (t130 != 5734124LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x541 = 2092U;
	int16_t x542 = -1;
	volatile uint16_t x543 = UINT16_MAX;
	uint16_t x544 = 1U;
	static volatile uint32_t t131 = 28678U;

    t131 = ((x541&x542)/(x543!=x544));

    if (t131 != 2092U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x546 = 1019287288U;
	uint8_t x547 = UINT8_MAX;
	static int64_t x548 = -1LL;

    t132 = ((x545&x546)/(x547!=x548));

    if (t132 != 1019281408U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MIN;
	volatile int16_t x552 = INT16_MIN;
	volatile int32_t t133 = -418;

    t133 = ((x549&x550)/(x551!=x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = 149485U;
	uint32_t x554 = 2196537U;
	int16_t x555 = -1;
	volatile int64_t x556 = -3LL;
	uint32_t t134 = 1056984644U;

    t134 = ((x553&x554)/(x555!=x556));

    if (t134 != 1065U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x559 = -1;
	static int16_t x560 = INT16_MIN;
	uint32_t t135 = 440403572U;

    t135 = ((x557&x558)/(x559!=x560));

    if (t135 != 657751504U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x561 = INT64_MIN;
	static volatile int64_t x562 = -1LL;
	int64_t x563 = 1489940784406LL;
	static int32_t x564 = INT32_MAX;
	volatile int64_t t136 = INT64_MIN;

    t136 = ((x561&x562)/(x563!=x564));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = INT64_MIN;
	uint32_t x567 = 48569756U;
	int64_t x568 = INT64_MIN;
	int64_t t137 = INT64_MIN;

    t137 = ((x565&x566)/(x567!=x568));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x569 = INT64_MIN;
	int64_t x571 = INT64_MIN;
	volatile int64_t t138 = INT64_MIN;

    t138 = ((x569&x570)/(x571!=x572));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = 50;
	int8_t x574 = INT8_MIN;
	uint64_t x575 = 11762227788231LLU;
	int8_t x576 = INT8_MIN;
	volatile int32_t t139 = -109;

    t139 = ((x573&x574)/(x575!=x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x579 = 0;
	uint16_t x580 = 5839U;
	volatile int32_t t140 = -7065;

    t140 = ((x577&x578)/(x579!=x580));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = -219;
	static int8_t x582 = INT8_MIN;
	static int32_t x583 = INT32_MAX;
	uint16_t x584 = UINT16_MAX;

    t141 = ((x581&x582)/(x583!=x584));

    if (t141 != -256) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = INT16_MAX;
	int32_t x586 = -1;
	uint32_t x587 = UINT32_MAX;
	uint8_t x588 = 26U;
	volatile int32_t t142 = 0;

    t142 = ((x585&x586)/(x587!=x588));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = 11324750578319LLU;
	static volatile int16_t x590 = INT16_MAX;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = INT8_MAX;
	uint64_t t143 = 352149LLU;

    t143 = ((x589&x590)/(x591!=x592));

    if (t143 != 17039LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x593 = -115394926145LL;
	int16_t x594 = INT16_MAX;
	int16_t x595 = INT16_MIN;
	int8_t x596 = -25;
	volatile int64_t t144 = 4LL;

    t144 = ((x593&x594)/(x595!=x596));

    if (t144 != 10687LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x597 = UINT16_MAX;
	int32_t x598 = -1;
	int16_t x599 = 1231;
	int64_t x600 = -1LL;
	volatile int32_t t145 = 66162;

    t145 = ((x597&x598)/(x599!=x600));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x601 = INT16_MIN;
	uint32_t x602 = 0U;
	uint64_t x603 = UINT64_MAX;
	volatile int32_t x604 = INT32_MAX;
	volatile uint32_t t146 = 127U;

    t146 = ((x601&x602)/(x603!=x604));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = -539;
	static uint64_t x606 = UINT64_MAX;
	static volatile int8_t x608 = INT8_MAX;
	volatile uint64_t t147 = 271402634086425650LLU;

    t147 = ((x605&x606)/(x607!=x608));

    if (t147 != 18446744073709551077LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x613 = UINT32_MAX;
	uint64_t x614 = 132352152972088LLU;
	int64_t x615 = INT64_MIN;
	volatile int8_t x616 = -57;
	uint64_t t148 = 24662902397LLU;

    t148 = ((x613&x614)/(x615!=x616));

    if (t148 != 2735745848LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x617 = 30U;
	static int16_t x618 = INT16_MAX;
	int64_t x619 = -1919321561LL;
	int64_t x620 = 776824741566LL;
	volatile int32_t t149 = -22;

    t149 = ((x617&x618)/(x619!=x620));

    if (t149 != 30) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x625 = -1;
	int32_t x626 = 144;
	uint32_t x627 = 935706071U;
	int8_t x628 = 7;
	volatile int32_t t150 = 1;

    t150 = ((x625&x626)/(x627!=x628));

    if (t150 != 144) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x629 = INT16_MIN;
	int8_t x630 = 2;
	volatile uint32_t x631 = 28336U;
	uint16_t x632 = 10U;
	volatile int32_t t151 = 1;

    t151 = ((x629&x630)/(x631!=x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x633 = INT16_MIN;
	uint64_t x634 = 665332154057051973LLU;
	volatile uint64_t t152 = 1015583872586822101LLU;

    t152 = ((x633&x634)/(x635!=x636));

    if (t152 != 665332154057031680LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x637 = INT16_MAX;
	uint32_t x638 = UINT32_MAX;
	int8_t x639 = 0;
	volatile int8_t x640 = INT8_MIN;

    t153 = ((x637&x638)/(x639!=x640));

    if (t153 != 32767U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x641 = 105U;
	int16_t x642 = INT16_MAX;
	volatile int32_t x644 = 126061;
	int32_t t154 = -6151;

    t154 = ((x641&x642)/(x643!=x644));

    if (t154 != 105) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x645 = -9;
	uint32_t x646 = 54307185U;
	int64_t x647 = INT64_MIN;

    t155 = ((x645&x646)/(x647!=x648));

    if (t155 != 54307185U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = -1LL;
	int8_t x652 = 10;

    t156 = ((x649&x650)/(x651!=x652));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x654 = INT16_MIN;
	uint64_t x656 = 44706132559976LLU;
	volatile int32_t t157 = -3654151;

    t157 = ((x653&x654)/(x655!=x656));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x657 = -664;
	int64_t x658 = -1LL;
	int32_t x660 = -487461708;
	volatile int64_t t158 = -1777059LL;

    t158 = ((x657&x658)/(x659!=x660));

    if (t158 != -664LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x661 = 108U;
	static int64_t x663 = 3219375655284158435LL;
	static int32_t x664 = -1;
	static uint32_t t159 = 155163U;

    t159 = ((x661&x662)/(x663!=x664));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x665 = 658U;
	int16_t x668 = -1;
	volatile int32_t t160 = 59552735;

    t160 = ((x665&x666)/(x667!=x668));

    if (t160 != 640) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x669 = INT8_MIN;
	uint64_t x670 = UINT64_MAX;
	uint64_t x671 = UINT64_MAX;
	static int16_t x672 = -4;
	volatile uint64_t t161 = 34096369767LLU;

    t161 = ((x669&x670)/(x671!=x672));

    if (t161 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x674 = 2;
	volatile int32_t x675 = INT32_MIN;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t162 = -305456291;

    t162 = ((x673&x674)/(x675!=x676));

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x677 = -481394842LL;
	int16_t x678 = INT16_MAX;
	static uint16_t x680 = UINT16_MAX;
	int64_t t163 = 7954293935419LL;

    t163 = ((x677&x678)/(x679!=x680));

    if (t163 != 32614LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x682 = UINT16_MAX;
	uint16_t x683 = UINT16_MAX;
	int16_t x684 = 0;
	volatile int32_t t164 = 10;

    t164 = ((x681&x682)/(x683!=x684));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x685 = -1;
	uint32_t x686 = 1862U;
	int32_t x687 = -7;
	uint32_t t165 = 438U;

    t165 = ((x685&x686)/(x687!=x688));

    if (t165 != 1862U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x692 = 2U;

    t166 = ((x689&x690)/(x691!=x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x693 = 1613369U;
	int16_t x694 = -2223;
	volatile uint32_t x695 = 20177U;
	int64_t x696 = INT64_MIN;
	static uint32_t t167 = 4104043U;

    t167 = ((x693&x694)/(x695!=x696));

    if (t167 != 1611281U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x697 = 8316U;
	int8_t x698 = 0;
	int32_t x699 = -861;
	volatile uint16_t x700 = 2527U;
	volatile uint32_t t168 = 29367517U;

    t168 = ((x697&x698)/(x699!=x700));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x702 = INT8_MIN;
	uint64_t x703 = 4005759921037621LLU;
	volatile int32_t t169 = 174;

    t169 = ((x701&x702)/(x703!=x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x705 = 414267529U;
	int8_t x706 = -1;
	int8_t x707 = -1;
	uint32_t x708 = 1796484U;
	volatile uint32_t t170 = 85678U;

    t170 = ((x705&x706)/(x707!=x708));

    if (t170 != 414267529U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x709 = INT32_MIN;
	volatile uint64_t x711 = 0LLU;
	uint64_t x712 = 944597LLU;

    t171 = ((x709&x710)/(x711!=x712));

    if (t171 != -2147483648LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x713 = -1;
	int64_t x714 = -8031609160558LL;
	uint16_t x715 = 456U;
	int8_t x716 = INT8_MIN;
	int64_t t172 = -780621017LL;

    t172 = ((x713&x714)/(x715!=x716));

    if (t172 != -8031609160558LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x718 = UINT8_MAX;
	volatile int8_t x719 = 1;
	int64_t x720 = -5LL;
	int32_t t173 = -100951638;

    t173 = ((x717&x718)/(x719!=x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x721 = 160302754245418717LLU;
	volatile int64_t x724 = INT64_MAX;

    t174 = ((x721&x722)/(x723!=x724));

    if (t174 != 160302754245418624LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x729 = UINT32_MAX;
	int16_t x730 = INT16_MAX;
	int16_t x731 = INT16_MAX;
	volatile int16_t x732 = INT16_MIN;

    t175 = ((x729&x730)/(x731!=x732));

    if (t175 != 32767U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x733 = -1;
	uint16_t x734 = 5U;
	static uint64_t x735 = 3166610967689LLU;
	int32_t x736 = INT32_MIN;

    t176 = ((x733&x734)/(x735!=x736));

    if (t176 != 5) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x737 = UINT32_MAX;
	static uint64_t x738 = UINT64_MAX;
	int16_t x739 = INT16_MIN;
	int64_t x740 = INT64_MIN;

    t177 = ((x737&x738)/(x739!=x740));

    if (t177 != 4294967295LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x742 = INT64_MAX;
	static uint16_t x743 = 0U;
	int32_t x744 = INT32_MIN;
	volatile int64_t t178 = 2LL;

    t178 = ((x741&x742)/(x743!=x744));

    if (t178 != 693947LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x745 = 75139LLU;
	static int64_t x746 = 92049262336871LL;
	static uint16_t x748 = UINT16_MAX;
	static uint64_t t179 = 271825565LLU;

    t179 = ((x745&x746)/(x747!=x748));

    if (t179 != 65795LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x749 = -2829LL;
	int64_t x750 = 130802424LL;
	int8_t x752 = INT8_MIN;

    t180 = ((x749&x750)/(x751!=x752));

    if (t180 != 130801904LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x753 = 1U;
	int32_t x754 = INT32_MAX;
	volatile uint64_t x755 = 2443607172LLU;
	int64_t x756 = INT64_MIN;
	static volatile int32_t t181 = 1;

    t181 = ((x753&x754)/(x755!=x756));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x758 = INT64_MIN;
	int16_t x759 = -54;
	volatile uint64_t x760 = 11741764154670LLU;
	int64_t t182 = INT64_MIN;

    t182 = ((x757&x758)/(x759!=x760));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x761 = -1;
	static int16_t x762 = -15110;
	uint8_t x763 = UINT8_MAX;
	uint32_t x764 = 1011182U;
	int32_t t183 = -6864;

    t183 = ((x761&x762)/(x763!=x764));

    if (t183 != -15110) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x765 = INT8_MAX;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MAX;
	uint16_t x768 = 123U;
	volatile uint32_t t184 = 2U;

    t184 = ((x765&x766)/(x767!=x768));

    if (t184 != 127U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x769 = 0U;
	static uint64_t x770 = UINT64_MAX;
	int16_t x772 = -4;
	static volatile uint64_t t185 = 495291509LLU;

    t185 = ((x769&x770)/(x771!=x772));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x773 = 31U;
	volatile uint32_t x774 = UINT32_MAX;
	uint32_t t186 = 2U;

    t186 = ((x773&x774)/(x775!=x776));

    if (t186 != 31U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x778 = INT8_MAX;
	int8_t x779 = -1;
	volatile int8_t x780 = 1;
	int32_t t187 = 27398244;

    t187 = ((x777&x778)/(x779!=x780));

    if (t187 != 5) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x784 = 2;
	volatile uint64_t t188 = 3078175103LLU;

    t188 = ((x781&x782)/(x783!=x784));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x785 = 1U;
	int32_t x786 = INT32_MAX;
	volatile int32_t x788 = INT32_MIN;
	static int32_t t189 = -8198872;

    t189 = ((x785&x786)/(x787!=x788));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x789 = 0U;
	int16_t x790 = -1;
	static volatile int32_t t190 = -13128;

    t190 = ((x789&x790)/(x791!=x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = 7;
	uint8_t x795 = 4U;
	volatile int16_t x796 = INT16_MAX;
	volatile int32_t t191 = 27;

    t191 = ((x793&x794)/(x795!=x796));

    if (t191 != 7) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x797 = -1;
	volatile int32_t x799 = INT32_MAX;
	uint16_t x800 = UINT16_MAX;
	int64_t t192 = -1903LL;

    t192 = ((x797&x798)/(x799!=x800));

    if (t192 != -11843LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x801 = 169;
	uint64_t x802 = 3721828332LLU;
	volatile uint16_t x803 = 13U;
	int16_t x804 = -375;

    t193 = ((x801&x802)/(x803!=x804));

    if (t193 != 168LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x806 = 3696U;
	int64_t x808 = -19LL;
	volatile int32_t t194 = -27;

    t194 = ((x805&x806)/(x807!=x808));

    if (t194 != 3696) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x810 = INT8_MIN;
	int64_t x811 = 7658701362LL;
	static int64_t x812 = INT64_MAX;
	volatile int32_t t195 = 16368645;

    t195 = ((x809&x810)/(x811!=x812));

    if (t195 != 1110528) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x814 = -7;
	uint64_t x815 = 66520074LLU;
	int8_t x816 = INT8_MIN;
	volatile int32_t t196 = INT32_MIN;

    t196 = ((x813&x814)/(x815!=x816));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x821 = INT32_MIN;
	uint64_t x823 = 251406LLU;
	volatile int32_t t197 = INT32_MIN;

    t197 = ((x821&x822)/(x823!=x824));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x825 = 53U;
	static int32_t x826 = 16056090;
	int64_t x827 = -1LL;
	static volatile uint32_t t198 = 252503969U;

    t198 = ((x825&x826)/(x827!=x828));

    if (t198 != 16U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x829 = INT16_MIN;
	int64_t x831 = INT64_MAX;
	int32_t x832 = -1;
	volatile int64_t t199 = -545LL;

    t199 = ((x829&x830)/(x831!=x832));

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

