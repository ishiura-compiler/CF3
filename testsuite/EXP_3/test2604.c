
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

static int16_t x1 = INT16_MAX;
static volatile int16_t x2 = INT16_MIN;
static int64_t x4 = INT64_MIN;
volatile int64_t x5 = 44117416456421235LL;
int64_t x11 = INT64_MIN;
uint64_t x14 = 31102536LLU;
static int32_t x17 = INT32_MAX;
static int64_t x19 = INT64_MIN;
int64_t x26 = -163182094266LL;
int32_t x34 = INT32_MIN;
int8_t x37 = INT8_MAX;
static int64_t x54 = -631504LL;
int64_t x56 = -1LL;
volatile uint32_t x60 = 110996752U;
static volatile uint32_t t12 = 503619913U;
uint16_t x61 = 112U;
uint8_t x64 = 28U;
static volatile int64_t t13 = 37724850194557LL;
static int16_t x65 = 716;
int8_t x72 = -1;
int8_t x73 = INT8_MAX;
static uint8_t x80 = 1U;
uint64_t x83 = 100LLU;
static int64_t x84 = INT64_MIN;
uint8_t x86 = 3U;
static int32_t t19 = -4;
static volatile int64_t x90 = INT64_MAX;
int64_t t20 = -4312859223434LL;
volatile uint64_t x93 = 26401LLU;
uint64_t x97 = 5577036698029464LLU;
uint32_t x98 = UINT32_MAX;
static uint32_t x100 = 746U;
static int64_t x107 = -1LL;
static int64_t x109 = 1889926050137681LL;
static int64_t t27 = -1073782LL;
int32_t x126 = INT32_MIN;
static int32_t x129 = -1;
int8_t x144 = 0;
int32_t x147 = INT32_MAX;
int32_t x155 = INT32_MIN;
int16_t x156 = -1;
static uint16_t x158 = 3U;
uint16_t x163 = UINT16_MAX;
int32_t x171 = -1;
static int32_t t41 = -15121;
volatile int32_t t42 = 618;
int32_t x181 = 20;
volatile uint64_t t44 = 3454353866185LLU;
int8_t x190 = 5;
int8_t x194 = INT8_MIN;
int32_t x204 = 1434;
uint8_t x210 = 22U;
int16_t x211 = -1;
int16_t x221 = -320;
static uint64_t t52 = 6LLU;
static int64_t t56 = -35261266401928416LL;
int32_t x241 = INT32_MIN;
volatile int16_t x243 = INT16_MIN;
int16_t x244 = -178;
int64_t x248 = INT64_MIN;
static volatile int64_t t58 = -112LL;
int32_t x250 = 73;
volatile int8_t x251 = -29;
uint16_t x253 = 887U;
int8_t x255 = INT8_MIN;
uint64_t t60 = 46894886972LLU;
int64_t x260 = INT64_MIN;
int32_t x262 = -1;
volatile uint16_t x277 = 311U;
uint32_t x278 = 292780U;
volatile int16_t x282 = -1730;
volatile int16_t x285 = INT16_MIN;
volatile uint16_t x288 = 27U;
int32_t x301 = 365;
uint16_t x306 = 7U;
int8_t x308 = -1;
uint32_t x315 = 10675508U;
int16_t x316 = -1;
uint32_t t72 = 6U;
int64_t x320 = INT64_MIN;
uint32_t x326 = 172532U;
static volatile uint16_t x327 = 31501U;
volatile uint32_t x335 = 64253590U;
static int32_t x338 = -1;
uint32_t x342 = UINT32_MAX;
uint8_t x343 = 0U;
volatile int32_t x346 = -42254174;
int64_t t81 = -20108677LL;
uint64_t x354 = 30074729422354LLU;
volatile uint64_t t82 = 80LLU;
static uint32_t x359 = UINT32_MAX;
volatile uint32_t t83 = 26567U;
static volatile int64_t x362 = -1LL;
uint64_t t84 = 152LLU;
uint64_t x374 = 16192238118067LLU;
int64_t t88 = 23595500340879826LL;
int16_t x383 = INT16_MIN;
uint32_t x392 = 477U;
int16_t x396 = INT16_MAX;
uint64_t t92 = 891114718751976LLU;
static volatile uint16_t x398 = 66U;
int32_t x408 = INT32_MIN;
int32_t x414 = -1;
volatile int64_t x416 = 4317088836116321LL;
volatile uint64_t t97 = 510LLU;
static volatile int64_t x420 = -782LL;
int32_t x425 = INT32_MIN;
uint64_t t100 = 30995586437660LLU;
int64_t x429 = -30634698435365674LL;
static int8_t x430 = INT8_MIN;
int16_t x432 = 19;
uint64_t x434 = 30391281385916962LLU;
static volatile int16_t x436 = -1;
int64_t x442 = INT64_MIN;
int64_t x455 = 8736LL;
static int8_t x461 = INT8_MAX;
int16_t x465 = -1;
uint32_t t110 = 499929044U;
volatile int64_t t111 = -1300325235LL;
int64_t x499 = INT64_MIN;
int64_t t116 = -3244717690LL;
int16_t x501 = 4090;
static volatile int32_t t117 = -43439278;
int16_t x514 = INT16_MIN;
static int64_t x516 = INT64_MAX;
volatile int64_t t120 = 108834841513640LL;
int8_t x520 = INT8_MIN;
static uint32_t x521 = 199U;
uint64_t t123 = 239461LLU;
int32_t x529 = -2;
volatile int8_t x534 = INT8_MAX;
int8_t x536 = INT8_MIN;
int64_t x537 = INT64_MIN;
static uint16_t x539 = 5657U;
volatile int64_t x544 = INT64_MIN;
int8_t x550 = INT8_MIN;
static uint8_t x557 = 10U;
volatile int32_t x558 = INT32_MAX;
int16_t x563 = 6577;
static uint64_t x575 = UINT64_MAX;
int16_t x577 = -11;
int64_t x580 = 26647LL;
volatile int64_t t134 = -291843891941LL;
int64_t x583 = -2740154781221LL;
static volatile int32_t x588 = INT32_MIN;
static volatile int64_t x594 = INT64_MAX;
volatile int64_t t138 = -63LL;
uint16_t x597 = 2034U;
static int8_t x599 = -1;
volatile int8_t x604 = INT8_MIN;
int16_t x608 = INT16_MAX;
uint32_t x611 = 288U;
int64_t t142 = -7131088LL;
int64_t x615 = -1LL;
int8_t x616 = INT8_MIN;
int8_t x619 = INT8_MIN;
int16_t x631 = 3;
uint8_t x636 = 26U;
int32_t t149 = -3888647;
int64_t x650 = INT64_MIN;
static uint8_t x651 = 0U;
uint64_t t153 = 89782460174LLU;
volatile uint32_t x663 = 26924154U;
static uint32_t t155 = 4036U;
volatile int8_t x665 = -1;
static volatile int64_t x672 = 3330235565063LL;
volatile int64_t t157 = 1003195640711LL;
static int16_t x673 = INT16_MIN;
volatile int64_t t158 = 30270834139720LL;
volatile int16_t x683 = -231;
volatile uint64_t t160 = 8715695479953LLU;
int16_t x694 = -1;
static int64_t x706 = 952636696387LL;
uint32_t x715 = 2243724U;
uint8_t x721 = UINT8_MAX;
int8_t x724 = INT8_MIN;
uint8_t x726 = 65U;
int16_t x736 = 10522;
int64_t x737 = INT64_MAX;
int64_t x739 = INT64_MAX;
static int16_t x741 = INT16_MIN;
uint8_t x757 = 46U;
uint64_t x765 = 5893441656266835LLU;
static uint32_t x771 = UINT32_MAX;
static volatile int16_t x775 = INT16_MIN;
int16_t x779 = INT16_MAX;
int8_t x780 = INT8_MAX;
int32_t x788 = INT32_MIN;
int16_t x795 = -37;
int8_t x804 = INT8_MIN;
uint64_t x806 = 4016511LLU;
int8_t x807 = -1;
uint8_t x811 = 12U;
uint16_t x814 = UINT16_MAX;
volatile uint64_t t196 = 3375337LLU;
int16_t x832 = INT16_MIN;
int8_t x834 = INT8_MIN;
volatile int16_t x839 = INT16_MAX;


void f0(void) {
    	uint32_t x3 = UINT32_MAX;
	int64_t t0 = 6787089205LL;

    t0 = ((x1/x2)^(x3^x4));

    if (t0 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	static uint16_t x7 = 114U;
	int32_t x8 = -1480;
	volatile int64_t t1 = 2376486LL;

    t1 = ((x5/x6)^(x7^x8));

    if (t1 != 20544686LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 28U;
	int64_t x10 = -4220274789706222LL;
	static int8_t x12 = -13;
	static int64_t t2 = 176LL;

    t2 = ((x9/x10)^(x11^x12));

    if (t2 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	static int64_t x15 = -1LL;
	uint64_t x16 = 93LLU;
	volatile uint64_t t3 = 2415048208200LLU;

    t3 = ((x13/x14)^(x15^x16));

    if (t3 != 18446743480615018269LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	static int8_t x20 = INT8_MAX;
	volatile int64_t t4 = -990642463LL;

    t4 = ((x17/x18)^(x19^x20));

    if (t4 != 9223372036854710398LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = -1;
	uint64_t x27 = 15845707314623LLU;
	int8_t x28 = INT8_MIN;
	uint64_t t5 = 29406378918LLU;

    t5 = ((x25/x26)^(x27^x28));

    if (t5 != 18446728228002236991LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = -41998074929LL;
	static int64_t x30 = 7LL;
	static volatile int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t6 = -9LL;

    t6 = ((x29/x30)^(x31^x32));

    if (t6 != -5999724989LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = UINT64_MAX;
	int8_t x35 = -1;
	uint64_t x36 = 350772LLU;
	uint64_t t7 = 7449LLU;

    t7 = ((x33/x34)^(x35^x36));

    if (t7 != 18446744073709200842LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MAX;
	volatile int32_t x39 = INT32_MAX;
	uint32_t x40 = 7931032U;
	uint32_t t8 = 125936U;

    t8 = ((x37/x38)^(x39^x40));

    if (t8 != 2139552615U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MAX;
	static int8_t x42 = INT8_MIN;
	static int64_t x43 = -1LL;
	static volatile int16_t x44 = -443;
	static int64_t t9 = -13276744170LL;

    t9 = ((x41/x42)^(x43^x44));

    if (t9 != 442LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x45 = 2U;
	uint32_t x46 = 34071512U;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	uint32_t t10 = 0U;

    t10 = ((x45/x46)^(x47^x48));

    if (t10 != 127U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x53 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	int64_t t11 = 1LL;

    t11 = ((x53/x54)^(x55^x56));

    if (t11 != -9223372036854769008LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = 39;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 53U;

    t12 = ((x57/x58)^(x59^x60));

    if (t12 != 110996773U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x62 = UINT16_MAX;
	static int64_t x63 = -1LL;

    t13 = ((x61/x62)^(x63^x64));

    if (t13 != -29LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MIN;
	static volatile int32_t x68 = INT32_MIN;
	uint32_t t14 = 1517773736U;

    t14 = ((x65/x66)^(x67^x68));

    if (t14 != 2147450880U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = -2;
	int16_t x71 = INT16_MAX;
	int32_t t15 = 565615481;

    t15 = ((x69/x70)^(x71^x72));

    if (t15 != -16384) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 0U;
	int64_t t16 = INT64_MIN;

    t16 = ((x73/x74)^(x75^x76));

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MIN;
	volatile int16_t x78 = -2;
	uint8_t x79 = 1U;
	int64_t t17 = -199LL;

    t17 = ((x77/x78)^(x79^x80));

    if (t17 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = INT8_MAX;
	int8_t x82 = -1;
	uint64_t t18 = 8LLU;

    t18 = ((x81/x82)^(x83^x84));

    if (t18 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	volatile uint8_t x87 = 0U;
	int16_t x88 = 1792;

    t19 = ((x85/x86)^(x87^x88));

    if (t19 != -715828650) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -15594989484LL;
	int64_t x91 = -1LL;
	static int16_t x92 = -1;

    t20 = ((x89/x90)^(x91^x92));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	volatile int8_t x96 = -1;
	static uint64_t t21 = 285538LLU;

    t21 = ((x93/x94)^(x95^x96));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x99 = INT8_MIN;
	static uint64_t t22 = 168238LLU;

    t22 = ((x97/x98)^(x99^x100));

    if (t22 != 4293668131LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	volatile int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MAX;
	volatile int32_t x104 = INT32_MIN;
	static int32_t t23 = -34094175;

    t23 = ((x101/x102)^(x103^x104));

    if (t23 != -2147483521) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = UINT32_MAX;
	uint8_t x106 = UINT8_MAX;
	static volatile int16_t x108 = INT16_MAX;
	volatile int64_t t24 = 64LL;

    t24 = ((x105/x106)^(x107^x108));

    if (t24 != -16875263LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x110 = 249U;
	uint32_t x111 = 5964U;
	static uint8_t x112 = 59U;
	int64_t t25 = 24207833651LL;

    t25 = ((x109/x110)^(x111^x112));

    if (t25 != 7590064463335LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = INT16_MIN;
	static uint8_t x114 = 1U;
	volatile int16_t x115 = -1;
	uint32_t x116 = 6U;
	uint32_t t26 = 27U;

    t26 = ((x113/x114)^(x115^x116));

    if (t26 != 32761U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MIN;
	static int32_t x118 = 37;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = -20;

    t27 = ((x117/x118)^(x119^x120));

    if (t27 != 249280325320418845LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = 15U;
	uint8_t x122 = 2U;
	int32_t x123 = -40585464;
	uint8_t x124 = 18U;
	volatile int32_t t28 = -725472;

    t28 = ((x121/x122)^(x123^x124));

    if (t28 != -40585443) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x125 = 20U;
	int16_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t29 = -5752328;

    t29 = ((x125/x126)^(x127^x128));

    if (t29 != -256) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x130 = UINT64_MAX;
	static int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t30 = 973LLU;

    t30 = ((x129/x130)^(x131^x132));

    if (t30 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x133 = 3U;
	uint32_t x134 = 7U;
	static volatile int64_t x135 = INT64_MAX;
	int32_t x136 = -1;
	int64_t t31 = INT64_MIN;

    t31 = ((x133/x134)^(x135^x136));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x137 = 1572015929102040LL;
	int16_t x138 = INT16_MIN;
	volatile int8_t x139 = 28;
	static uint32_t x140 = 885U;
	volatile int64_t t32 = 1LL;

    t32 = ((x137/x138)^(x139^x140));

    if (t32 != -47974118777LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x141 = UINT16_MAX;
	int32_t x142 = INT32_MAX;
	int16_t x143 = INT16_MAX;
	volatile int32_t t33 = 191;

    t33 = ((x141/x142)^(x143^x144));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -4026596;
	int16_t x146 = -1;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 3;

    t34 = ((x145/x146)^(x147^x148));

    if (t34 != -2143457125) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	uint64_t x150 = UINT64_MAX;
	static int64_t x151 = -1LL;
	static volatile int32_t x152 = INT32_MIN;
	static volatile uint64_t t35 = 9036565127279464LLU;

    t35 = ((x149/x150)^(x151^x152));

    if (t35 != 2147483646LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = -97530574;
	static int32_t t36 = INT32_MAX;

    t36 = ((x153/x154)^(x155^x156));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MAX;
	volatile uint32_t x159 = 6184U;
	volatile int16_t x160 = 119;
	volatile int64_t t37 = -11469760927338875LL;

    t37 = ((x157/x158)^(x159^x160));

    if (t37 != 3074457345618260725LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = UINT32_MAX;
	uint16_t x162 = UINT16_MAX;
	static volatile int16_t x164 = 1225;
	volatile uint32_t t38 = 898532U;

    t38 = ((x161/x162)^(x163^x164));

    if (t38 != 129847U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MAX;
	int64_t x166 = -1LL;
	static int32_t x167 = INT32_MIN;
	int64_t x168 = 1990765118LL;
	volatile int64_t t39 = 15LL;

    t39 = ((x165/x166)^(x167^x168));

    if (t39 != 1990765119LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MAX;
	uint8_t x172 = 14U;
	int64_t t40 = -10802002113756180LL;

    t40 = ((x169/x170)^(x171^x172));

    if (t40 != 281483566907401LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = 1;
	int32_t x174 = INT32_MIN;
	uint8_t x175 = UINT8_MAX;
	volatile uint8_t x176 = UINT8_MAX;

    t41 = ((x173/x174)^(x175^x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = 249;
	uint8_t x178 = 6U;
	uint16_t x179 = 5U;
	volatile uint8_t x180 = 3U;

    t42 = ((x177/x178)^(x179^x180));

    if (t42 != 47) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x182 = 7;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = 101652096161876LL;
	volatile int64_t t43 = 413732336316470143LL;

    t43 = ((x181/x182)^(x183^x184));

    if (t43 != 101650180794281LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = 0U;
	int32_t x186 = -1;
	int64_t x187 = 14815692LL;
	uint64_t x188 = 499556407910946LLU;

    t44 = ((x185/x186)^(x187^x188));

    if (t44 != 499556418532334LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MIN;
	volatile int8_t x191 = -1;
	static volatile int64_t x192 = -491991643176LL;
	static int64_t t45 = 924938261305082LL;

    t45 = ((x189/x190)^(x191^x192));

    if (t45 != -491991643200LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = INT16_MAX;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MAX;
	static int64_t t46 = 120832196131668265LL;

    t46 = ((x193/x194)^(x195^x196));

    if (t46 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 5293U;
	int32_t x203 = -1;
	uint64_t t47 = 23216LLU;

    t47 = ((x201/x202)^(x203^x204));

    if (t47 != 18443258952970138399LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	static uint16_t x207 = 50U;
	int16_t x208 = 17;
	uint64_t t48 = 57034856LLU;

    t48 = ((x205/x206)^(x207^x208));

    if (t48 != 34LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = -192LL;
	volatile int8_t x212 = INT8_MIN;
	static int64_t t49 = -123911495210853252LL;

    t49 = ((x209/x210)^(x211^x212));

    if (t49 != -121LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x213 = 0U;
	int8_t x214 = -1;
	volatile int64_t x215 = 26449505506890465LL;
	uint8_t x216 = 0U;
	volatile int64_t t50 = -12079LL;

    t50 = ((x213/x214)^(x215^x216));

    if (t50 != 26449505506890465LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = -27781652809LL;
	int16_t x218 = -448;
	int64_t x219 = INT64_MAX;
	int8_t x220 = 15;
	int64_t t51 = -100768LL;

    t51 = ((x217/x218)^(x219^x220));

    if (t51 != 9223372036792763193LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x222 = UINT64_MAX;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = UINT16_MAX;

    t52 = ((x221/x222)^(x223^x224));

    if (t52 != 4294901760LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x225 = -1;
	uint32_t x226 = 1512U;
	uint32_t x227 = 127U;
	int16_t x228 = INT16_MAX;
	static volatile uint32_t t53 = 110642U;

    t53 = ((x225/x226)^(x227^x228));

    if (t53 != 2828170U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x229 = -14517;
	static int16_t x230 = 8;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = 0;
	static uint32_t t54 = 3460U;

    t54 = ((x229/x230)^(x231^x232));

    if (t54 != 1813U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x233 = 531306746U;
	int64_t x234 = INT64_MAX;
	uint32_t x235 = 56U;
	int8_t x236 = INT8_MIN;
	volatile int64_t t55 = 3151261LL;

    t55 = ((x233/x234)^(x235^x236));

    if (t55 != 4294967224LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	static volatile int16_t x240 = INT16_MIN;

    t56 = ((x237/x238)^(x239^x240));

    if (t56 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x242 = UINT16_MAX;
	static volatile int32_t t57 = 220944813;

    t57 = ((x241/x242)^(x243^x244));

    if (t57 != -178) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x245 = 0;
	static volatile int8_t x246 = -5;
	uint16_t x247 = UINT16_MAX;

    t58 = ((x245/x246)^(x247^x248));

    if (t58 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x252 = INT32_MAX;
	volatile int32_t t59 = -174622;

    t59 = ((x249/x250)^(x251^x252));

    if (t59 != 2118066060) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x254 = 3U;
	volatile uint64_t x256 = UINT64_MAX;

    t60 = ((x253/x254)^(x255^x256));

    if (t60 != 344LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x257 = INT8_MIN;
	int64_t x258 = -1LL;
	volatile int8_t x259 = 49;
	volatile int64_t t61 = -123149449697LL;

    t61 = ((x257/x258)^(x259^x260));

    if (t61 != -9223372036854775631LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x261 = -2;
	static int64_t x263 = 1LL;
	static int8_t x264 = INT8_MIN;
	volatile int64_t t62 = 2LL;

    t62 = ((x261/x262)^(x263^x264));

    if (t62 != -125LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	static uint32_t t63 = 328177769U;

    t63 = ((x277/x278)^(x279^x280));

    if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x281 = 419441082327233101LLU;
	int32_t x283 = -856642;
	volatile uint32_t x284 = 142740076U;
	volatile uint64_t t64 = 0LLU;

    t64 = ((x281/x282)^(x283^x284));

    if (t64 != 4151371730LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x286 = INT8_MAX;
	int32_t x287 = -1;
	volatile int32_t t65 = -3265974;

    t65 = ((x285/x286)^(x287^x288));

    if (t65 != 282) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = -410;
	uint8_t x290 = 63U;
	int16_t x291 = -1;
	static volatile int32_t x292 = 1030;
	volatile int32_t t66 = -40;

    t66 = ((x289/x290)^(x291^x292));

    if (t66 != 1027) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x293 = INT8_MIN;
	volatile int32_t x294 = 115;
	int16_t x295 = INT16_MIN;
	volatile int8_t x296 = 6;
	int32_t t67 = 37560;

    t67 = ((x293/x294)^(x295^x296));

    if (t67 != 32761) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x297 = -2;
	uint16_t x298 = UINT16_MAX;
	static volatile int16_t x299 = INT16_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t68 = -3186;

    t68 = ((x297/x298)^(x299^x300));

    if (t68 != -32513) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x302 = 2362U;
	static int32_t x303 = -2;
	uint64_t x304 = UINT64_MAX;
	static uint64_t t69 = 2093519584LLU;

    t69 = ((x301/x302)^(x303^x304));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x305 = INT64_MAX;
	uint64_t x307 = 4817635600372831823LLU;
	volatile uint64_t t70 = 4185609098711569LLU;

    t70 = ((x305/x306)^(x307^x308));

    if (t70 != 12640888784538631161LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x309 = 12U;
	static int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int64_t t71 = -372572204LL;

    t71 = ((x309/x310)^(x311^x312));

    if (t71 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x313 = 3371U;
	uint32_t x314 = 41373U;

    t72 = ((x313/x314)^(x315^x316));

    if (t72 != 4284291787U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x317 = INT32_MIN;
	uint32_t x318 = 1037162U;
	int16_t x319 = 2;
	int64_t t73 = 743522821LL;

    t73 = ((x317/x318)^(x319^x320));

    if (t73 != -9223372036854773740LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x321 = INT8_MAX;
	volatile uint32_t x322 = UINT32_MAX;
	static int64_t x323 = -882112LL;
	static uint32_t x324 = UINT32_MAX;
	int64_t t74 = 13518LL;

    t74 = ((x321/x322)^(x323^x324));

    if (t74 != -4294085185LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = -2;
	int32_t x328 = -1;
	volatile uint32_t t75 = 8662081U;

    t75 = ((x325/x326)^(x327^x328));

    if (t75 != 4294960591U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 1092U;
	int8_t x332 = INT8_MIN;
	volatile int64_t t76 = -1045532759545LL;

    t76 = ((x329/x330)^(x331^x332));

    if (t76 != -1083LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x333 = 1;
	int64_t x334 = -562255141988036053LL;
	volatile int32_t x336 = -1;
	int64_t t77 = -17442994890179LL;

    t77 = ((x333/x334)^(x335^x336));

    if (t77 != 4230713705LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	volatile int32_t t78 = -6730462;

    t78 = ((x337/x338)^(x339^x340));

    if (t78 != 32895) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x341 = -13407;
	volatile int16_t x344 = -938;
	uint32_t t79 = 1U;

    t79 = ((x341/x342)^(x343^x344));

    if (t79 != 4294966358U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x345 = INT8_MIN;
	uint32_t x347 = 2399749U;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t80 = -29591468LL;

    t80 = ((x345/x346)^(x347^x348));

    if (t80 != -9223372036852376059LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x349 = -1LL;
	static uint8_t x350 = 53U;
	int8_t x351 = -59;
	int64_t x352 = 268LL;

    t81 = ((x349/x350)^(x351^x352));

    if (t81 != -311LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x353 = INT8_MAX;
	static int8_t x355 = -37;
	uint32_t x356 = 5661135U;

    t82 = ((x353/x354)^(x355^x356));

    if (t82 != 4289306132LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = INT32_MAX;
	uint8_t x358 = 12U;
	static volatile uint16_t x360 = 123U;

    t83 = ((x357/x358)^(x359^x360));

    if (t83 != 4116010286U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	int64_t x363 = 13LL;
	volatile int8_t x364 = INT8_MAX;

    t84 = ((x361/x362)^(x363^x364));

    if (t84 != 115LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = INT8_MIN;
	static int32_t x366 = 2579781;
	uint32_t x367 = 681U;
	static uint16_t x368 = 15U;
	uint32_t t85 = 698350130U;

    t85 = ((x365/x366)^(x367^x368));

    if (t85 != 678U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x369 = -1;
	volatile int64_t x370 = -1LL;
	static int64_t x371 = -2329230108329653910LL;
	int64_t x372 = INT64_MIN;
	int64_t t86 = 4693195286234LL;

    t86 = ((x369/x370)^(x371^x372));

    if (t86 != 6894141928525121899LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x373 = 3263;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = 626906103;
	uint64_t t87 = 25688303LLU;

    t87 = ((x373/x374)^(x375^x376));

    if (t87 != 18446744073082645512LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x377 = 25U;
	static int64_t x378 = 403200983186158561LL;
	static uint8_t x379 = UINT8_MAX;
	static int16_t x380 = 2;

    t88 = ((x377/x378)^(x379^x380));

    if (t88 != 253LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x381 = INT64_MAX;
	volatile int16_t x382 = -279;
	volatile int8_t x384 = -2;
	volatile int64_t t89 = 8094LL;

    t89 = ((x381/x382)^(x383^x384));

    if (t89 != -33058681135674682LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x385 = 4715U;
	uint32_t x386 = 198U;
	uint64_t x387 = 26210459454LLU;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t90 = 490249169822231LLU;

    t90 = ((x385/x386)^(x387^x388));

    if (t90 != 18446744047499092137LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x389 = INT16_MAX;
	int32_t x390 = INT32_MIN;
	static volatile uint64_t x391 = UINT64_MAX;
	volatile uint64_t t91 = 94875763052552026LLU;

    t91 = ((x389/x390)^(x391^x392));

    if (t91 != 18446744073709551138LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x393 = INT32_MAX;
	uint64_t x394 = 273080LLU;
	int8_t x395 = INT8_MIN;

    t92 = ((x393/x394)^(x395^x396));

    if (t92 != 18446744073709526728LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x397 = INT8_MIN;
	static int64_t x399 = -1LL;
	volatile uint32_t x400 = UINT32_MAX;
	static int64_t t93 = 7502706756LL;

    t93 = ((x397/x398)^(x399^x400));

    if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x401 = -1;
	volatile uint16_t x402 = UINT16_MAX;
	volatile uint8_t x403 = UINT8_MAX;
	int64_t x404 = INT64_MAX;
	static int64_t t94 = -1018670735439LL;

    t94 = ((x401/x402)^(x403^x404));

    if (t94 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x405 = -9;
	static int8_t x406 = INT8_MIN;
	int16_t x407 = 6;
	int32_t t95 = 16325200;

    t95 = ((x405/x406)^(x407^x408));

    if (t95 != -2147483642) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x409 = 4;
	volatile int16_t x410 = -10;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MAX;
	volatile int64_t t96 = -4794977LL;

    t96 = ((x409/x410)^(x411^x412));

    if (t96 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x413 = -21;
	static uint64_t x415 = 77LLU;

    t97 = ((x413/x414)^(x415^x416));

    if (t97 != 4317088836116281LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MIN;
	int64_t x419 = -469208646148LL;
	volatile uint64_t t98 = 1LLU;

    t98 = ((x417/x418)^(x419^x420));

    if (t98 != 469208645903LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x421 = INT32_MAX;
	uint32_t x422 = 2848018U;
	static volatile int32_t x423 = INT32_MAX;
	static volatile uint32_t x424 = UINT32_MAX;
	uint32_t t99 = 57992679U;

    t99 = ((x421/x422)^(x423^x424));

    if (t99 != 2147484402U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x426 = 459979935022467LLU;
	static int16_t x427 = -1;
	volatile uint64_t x428 = 0LLU;

    t100 = ((x425/x426)^(x427^x428));

    if (t100 != 18446744073709511512LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x431 = 9895088;
	static int64_t t101 = -12357422942440LL;

    t101 = ((x429/x430)^(x431^x432));

    if (t101 != 239333588789685LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = INT8_MAX;
	static uint32_t x435 = 34530418U;
	uint64_t t102 = 1LLU;

    t102 = ((x433/x434)^(x435^x436));

    if (t102 != 4260436877LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x437 = INT8_MIN;
	int64_t x438 = INT64_MIN;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = INT8_MAX;
	uint64_t t103 = 5866696LLU;

    t103 = ((x437/x438)^(x439^x440));

    if (t103 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x441 = 9960758720LLU;
	int64_t x443 = INT64_MAX;
	uint8_t x444 = 10U;
	uint64_t t104 = 0LLU;

    t104 = ((x441/x442)^(x443^x444));

    if (t104 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x449 = 1;
	uint8_t x450 = 78U;
	static int16_t x451 = 1;
	uint64_t x452 = UINT64_MAX;
	uint64_t t105 = 241565929032571455LLU;

    t105 = ((x449/x450)^(x451^x452));

    if (t105 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x453 = -1LL;
	int64_t x454 = -451997808862944538LL;
	int32_t x456 = -968414631;
	static volatile int64_t t106 = -2768LL;

    t106 = ((x453/x454)^(x455^x456));

    if (t106 != -968423303LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x457 = 1U;
	int32_t x458 = INT32_MAX;
	static volatile int8_t x459 = 1;
	volatile int8_t x460 = INT8_MAX;
	volatile int32_t t107 = -676913;

    t107 = ((x457/x458)^(x459^x460));

    if (t107 != 126) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x462 = INT16_MIN;
	static uint8_t x463 = 2U;
	int64_t x464 = -1LL;
	volatile int64_t t108 = -3677788LL;

    t108 = ((x461/x462)^(x463^x464));

    if (t108 != -3LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x466 = 21U;
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	volatile int64_t t109 = 21772370125700575LL;

    t109 = ((x465/x466)^(x467^x468));

    if (t109 != 9223372036650255116LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x469 = -1;
	int8_t x470 = INT8_MAX;
	int16_t x471 = INT16_MAX;
	uint32_t x472 = 94436U;

    t110 = ((x469/x470)^(x471^x472));

    if (t110 != 69403U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x473 = 26U;
	volatile int64_t x474 = -1LL;
	volatile int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MAX;

    t111 = ((x473/x474)^(x475^x476));

    if (t111 != -2147483546LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x477 = UINT64_MAX;
	static int8_t x478 = INT8_MIN;
	int16_t x479 = -762;
	static uint64_t x480 = 10818531913538LLU;
	volatile uint64_t t112 = 673166LLU;

    t112 = ((x477/x478)^(x479^x480));

    if (t112 != 18446733255177638469LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = INT32_MAX;
	int32_t x486 = 2921715;
	int64_t x487 = INT64_MIN;
	volatile int8_t x488 = INT8_MIN;
	volatile int64_t t113 = 82LL;

    t113 = ((x485/x486)^(x487^x488));

    if (t113 != 9223372036854775135LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	uint32_t x492 = 16514029U;
	int64_t t114 = -135788886693465605LL;

    t114 = ((x489/x490)^(x491^x492));

    if (t114 != -16514030LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x493 = -23;
	uint8_t x494 = UINT8_MAX;
	uint8_t x495 = UINT8_MAX;
	int32_t x496 = INT32_MAX;
	int32_t t115 = 887944;

    t115 = ((x493/x494)^(x495^x496));

    if (t115 != 2147483392) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x497 = UINT8_MAX;
	volatile int32_t x498 = INT32_MAX;
	int8_t x500 = INT8_MIN;

    t116 = ((x497/x498)^(x499^x500));

    if (t116 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x502 = -13;
	int16_t x503 = INT16_MIN;
	static int16_t x504 = INT16_MIN;

    t117 = ((x501/x502)^(x503^x504));

    if (t117 != -314) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x505 = -1;
	int32_t x506 = INT32_MAX;
	int16_t x507 = INT16_MIN;
	int16_t x508 = INT16_MAX;
	int32_t t118 = -3;

    t118 = ((x505/x506)^(x507^x508));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = INT32_MIN;
	static int16_t x510 = INT16_MAX;
	int16_t x511 = INT16_MAX;
	int8_t x512 = -1;
	static volatile int32_t t119 = 343729;

    t119 = ((x509/x510)^(x511^x512));

    if (t119 != 98302) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x513 = -1LL;
	volatile int64_t x515 = INT64_MIN;

    t120 = ((x513/x514)^(x515^x516));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x517 = 81;
	static int16_t x518 = -15880;
	uint32_t x519 = 26165U;
	volatile uint32_t t121 = 19110U;

    t121 = ((x517/x518)^(x519^x520));

    if (t121 != 4294941109U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x522 = UINT32_MAX;
	static int64_t x523 = INT64_MAX;
	int8_t x524 = 0;
	int64_t t122 = INT64_MAX;

    t122 = ((x521/x522)^(x523^x524));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x525 = -1;
	uint64_t x526 = 275034136LLU;
	uint64_t x527 = UINT64_MAX;
	volatile int32_t x528 = INT32_MIN;

    t123 = ((x525/x526)^(x527^x528));

    if (t123 != 68220726017LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x530 = 3373216;
	static int16_t x531 = INT16_MIN;
	int32_t x532 = INT32_MAX;
	static int32_t t124 = -227470005;

    t124 = ((x529/x530)^(x531^x532));

    if (t124 != -2147450881) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x533 = UINT16_MAX;
	int32_t x535 = -23492;
	volatile int32_t t125 = 188;

    t125 = ((x533/x534)^(x535^x536));

    if (t125 != 22968) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x538 = UINT16_MAX;
	uint32_t x540 = 2050226U;
	volatile int64_t t126 = 324210975LL;

    t126 = ((x537/x538)^(x539^x540));

    if (t126 != -140739637879125LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x541 = 3LLU;
	volatile int64_t x542 = 16168LL;
	volatile int8_t x543 = INT8_MIN;
	static uint64_t t127 = 115LLU;

    t127 = ((x541/x542)^(x543^x544));

    if (t127 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x549 = UINT16_MAX;
	volatile int32_t x551 = INT32_MIN;
	int32_t x552 = INT32_MIN;
	volatile int32_t t128 = 53879688;

    t128 = ((x549/x550)^(x551^x552));

    if (t128 != -511) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x553 = -1;
	int8_t x554 = -1;
	int32_t x555 = INT32_MIN;
	int32_t x556 = 54523407;
	volatile int32_t t129 = 21;

    t129 = ((x553/x554)^(x555^x556));

    if (t129 != -2092960242) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x559 = INT32_MIN;
	int8_t x560 = -1;
	int32_t t130 = INT32_MAX;

    t130 = ((x557/x558)^(x559^x560));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x561 = 30458U;
	int8_t x562 = 51;
	volatile int64_t x564 = INT64_MAX;
	volatile int64_t t131 = -146707460901LL;

    t131 = ((x561/x562)^(x563^x564));

    if (t131 != 9223372036854768667LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x569 = INT32_MIN;
	int8_t x570 = 23;
	static int64_t x571 = INT64_MIN;
	int64_t x572 = INT64_MAX;
	static volatile int64_t t132 = -1968LL;

    t132 = ((x569/x570)^(x571^x572));

    if (t132 != 93368853LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x573 = UINT32_MAX;
	volatile int64_t x574 = -1LL;
	static int8_t x576 = -1;
	volatile uint64_t t133 = 1758307705914LLU;

    t133 = ((x573/x574)^(x575^x576));

    if (t133 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x578 = INT8_MIN;
	static uint32_t x579 = UINT32_MAX;

    t134 = ((x577/x578)^(x579^x580));

    if (t134 != 4294940648LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x581 = -54338367422785LL;
	int8_t x582 = 1;
	int8_t x584 = INT8_MIN;
	int64_t t135 = 1729481LL;

    t135 = ((x581/x582)^(x583^x584));

    if (t135 != -56171174383388LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x585 = -1LL;
	int64_t x586 = INT64_MAX;
	int32_t x587 = INT32_MIN;
	static volatile int64_t t136 = 1348LL;

    t136 = ((x585/x586)^(x587^x588));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x589 = -1LL;
	uint16_t x590 = UINT16_MAX;
	uint16_t x591 = 10U;
	int16_t x592 = INT16_MIN;
	int64_t t137 = -1062349577392LL;

    t137 = ((x589/x590)^(x591^x592));

    if (t137 != -32758LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x593 = INT16_MAX;
	int64_t x595 = -1LL;
	uint32_t x596 = UINT32_MAX;

    t138 = ((x593/x594)^(x595^x596));

    if (t138 != -4294967296LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x598 = -1;
	int64_t x600 = INT64_MIN;
	volatile int64_t t139 = 212071LL;

    t139 = ((x597/x598)^(x599^x600));

    if (t139 != -9223372036854773775LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x601 = INT16_MIN;
	static int16_t x602 = INT16_MIN;
	static int8_t x603 = INT8_MIN;
	volatile int32_t t140 = 4563;

    t140 = ((x601/x602)^(x603^x604));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x605 = 3408651U;
	int64_t x606 = INT64_MIN;
	static uint64_t x607 = UINT64_MAX;
	volatile uint64_t t141 = 2996780533LLU;

    t141 = ((x605/x606)^(x607^x608));

    if (t141 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x609 = -1;
	int64_t x610 = -1LL;
	uint32_t x612 = 25673141U;

    t142 = ((x609/x610)^(x611^x612));

    if (t142 != 25672852LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x613 = 0U;
	static int16_t x614 = INT16_MAX;
	volatile int64_t t143 = 30976955LL;

    t143 = ((x613/x614)^(x615^x616));

    if (t143 != 127LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x617 = 279U;
	int32_t x618 = -1;
	int32_t x620 = INT32_MIN;
	int32_t t144 = 1992002;

    t144 = ((x617/x618)^(x619^x620));

    if (t144 != -2147483287) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x621 = -211;
	static volatile int32_t x622 = -1;
	int16_t x623 = -1;
	static int64_t x624 = -1LL;
	int64_t t145 = 1437136226941227650LL;

    t145 = ((x621/x622)^(x623^x624));

    if (t145 != 211LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x625 = 553U;
	static int8_t x626 = INT8_MIN;
	int16_t x627 = -4858;
	static int32_t x628 = INT32_MIN;
	volatile uint32_t t146 = 123601U;

    t146 = ((x625/x626)^(x627^x628));

    if (t146 != 2147478790U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x629 = INT32_MIN;
	uint32_t x630 = 104058910U;
	volatile int8_t x632 = 0;
	volatile uint32_t t147 = 5938711U;

    t147 = ((x629/x630)^(x631^x632));

    if (t147 != 23U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x633 = INT16_MIN;
	uint32_t x634 = 60U;
	volatile int8_t x635 = -1;
	volatile uint32_t t148 = 271122328U;

    t148 = ((x633/x634)^(x635^x636));

    if (t148 != 4223385031U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x637 = UINT16_MAX;
	int8_t x638 = INT8_MIN;
	uint8_t x639 = UINT8_MAX;
	static volatile uint8_t x640 = UINT8_MAX;

    t149 = ((x637/x638)^(x639^x640));

    if (t149 != -511) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x641 = UINT8_MAX;
	int32_t x642 = -1197;
	int64_t x643 = -1LL;
	int16_t x644 = INT16_MIN;
	volatile int64_t t150 = -3380169265492671141LL;

    t150 = ((x641/x642)^(x643^x644));

    if (t150 != 32767LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x645 = INT8_MAX;
	int8_t x646 = INT8_MIN;
	static int64_t x647 = INT64_MAX;
	uint64_t x648 = 109610LLU;
	volatile uint64_t t151 = 114143285125675LLU;

    t151 = ((x645/x646)^(x647^x648));

    if (t151 != 9223372036854666197LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x649 = 3531806156912LLU;
	static int16_t x652 = -4;
	uint64_t t152 = 1066277019486440188LLU;

    t152 = ((x649/x650)^(x651^x652));

    if (t152 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = UINT64_MAX;
	int16_t x656 = 434;

    t153 = ((x653/x654)^(x655^x656));

    if (t153 != 76LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x657 = 491375U;
	int16_t x658 = INT16_MIN;
	volatile uint32_t x659 = 7394U;
	int8_t x660 = INT8_MAX;
	uint32_t t154 = 0U;

    t154 = ((x657/x658)^(x659^x660));

    if (t154 != 7325U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x661 = -1;
	uint32_t x662 = UINT32_MAX;
	uint8_t x664 = 52U;

    t155 = ((x661/x662)^(x663^x664));

    if (t155 != 26924111U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x666 = 6999;
	volatile uint8_t x667 = 1U;
	static int64_t x668 = -1LL;
	volatile int64_t t156 = -90180283LL;

    t156 = ((x665/x666)^(x667^x668));

    if (t156 != -2LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x669 = 2;
	int64_t x670 = INT64_MIN;
	static int8_t x671 = INT8_MIN;

    t157 = ((x669/x670)^(x671^x672));

    if (t157 != -3330235565177LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x674 = 15683;
	int64_t x675 = -1LL;
	uint32_t x676 = 29397186U;

    t158 = ((x673/x674)^(x675^x676));

    if (t158 != 29397187LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x677 = -31768811;
	int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MAX;
	int16_t x680 = INT16_MIN;
	int32_t t159 = -1;

    t159 = ((x677/x678)^(x679^x680));

    if (t159 != -243202) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x681 = 7350987LLU;
	uint8_t x682 = 10U;
	int32_t x684 = -154455813;

    t160 = ((x681/x682)^(x683^x684));

    if (t160 != 155187352LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x685 = 7U;
	volatile uint64_t x686 = 24884LLU;
	static volatile int64_t x687 = INT64_MAX;
	uint8_t x688 = UINT8_MAX;
	volatile uint64_t t161 = 14577506230516355LLU;

    t161 = ((x685/x686)^(x687^x688));

    if (t161 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x689 = 8399221;
	uint8_t x690 = 1U;
	static uint32_t x691 = 15556030U;
	int64_t x692 = 1LL;
	static volatile int64_t t162 = 2953496LL;

    t162 = ((x689/x690)^(x691^x692));

    if (t162 != 7173322LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x693 = -1LL;
	int32_t x695 = 8443;
	int16_t x696 = INT16_MAX;
	int64_t t163 = 32249640LL;

    t163 = ((x693/x694)^(x695^x696));

    if (t163 != 24325LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x697 = INT8_MAX;
	volatile int64_t x698 = INT64_MIN;
	int32_t x699 = -78743;
	int64_t x700 = INT64_MAX;
	static volatile int64_t t164 = 1LL;

    t164 = ((x697/x698)^(x699^x700));

    if (t164 != -9223372036854697066LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x701 = 9U;
	static uint32_t x702 = 13704U;
	volatile uint8_t x703 = 5U;
	int64_t x704 = 120754276156LL;
	int64_t t165 = -251625164881LL;

    t165 = ((x701/x702)^(x703^x704));

    if (t165 != 120754276153LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x705 = -1;
	uint32_t x707 = 183642149U;
	int64_t x708 = -1LL;
	int64_t t166 = -249223101119336424LL;

    t166 = ((x705/x706)^(x707^x708));

    if (t166 != -183642150LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x709 = INT8_MAX;
	int64_t x710 = -131LL;
	int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MIN;
	int64_t t167 = -70296896730500LL;

    t167 = ((x709/x710)^(x711^x712));

    if (t167 != 32640LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x713 = -1;
	int64_t x714 = 30LL;
	int8_t x716 = 0;
	static volatile int64_t t168 = 74562LL;

    t168 = ((x713/x714)^(x715^x716));

    if (t168 != 2243724LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x717 = INT8_MIN;
	int64_t x718 = -1LL;
	uint16_t x719 = 23U;
	volatile int8_t x720 = -1;
	volatile int64_t t169 = -1LL;

    t169 = ((x717/x718)^(x719^x720));

    if (t169 != -152LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x722 = -2751;
	static int32_t x723 = INT32_MAX;
	static volatile int32_t t170 = -1;

    t170 = ((x721/x722)^(x723^x724));

    if (t170 != -2147483521) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x725 = UINT64_MAX;
	static int32_t x727 = 1445830;
	int8_t x728 = 2;
	volatile uint64_t t171 = 139951798826452LLU;

    t171 = ((x725/x726)^(x727^x728));

    if (t171 != 283796062671014964LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x729 = INT8_MAX;
	int64_t x730 = INT64_MIN;
	uint8_t x731 = 2U;
	volatile uint8_t x732 = 1U;
	volatile int64_t t172 = -497946331LL;

    t172 = ((x729/x730)^(x731^x732));

    if (t172 != 3LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x733 = -1;
	uint16_t x734 = 3059U;
	uint64_t x735 = UINT64_MAX;
	volatile uint64_t t173 = 3116LLU;

    t173 = ((x733/x734)^(x735^x736));

    if (t173 != 18446744073709541093LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x738 = INT16_MAX;
	int16_t x740 = -1;
	int64_t t174 = 729586264966163LL;

    t174 = ((x737/x738)^(x739^x740));

    if (t174 != -9223090553287868408LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x742 = 3486LL;
	int64_t x743 = 166771984701633LL;
	int64_t x744 = -1LL;
	int64_t t175 = 747171LL;

    t175 = ((x741/x742)^(x743^x744));

    if (t175 != 166771984701641LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x745 = 247U;
	static int64_t x746 = -2586227602LL;
	uint32_t x747 = 3946139U;
	volatile int8_t x748 = INT8_MAX;
	int64_t t176 = 18771LL;

    t176 = ((x745/x746)^(x747^x748));

    if (t176 != 3946212LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x749 = 1LLU;
	static int64_t x750 = INT64_MIN;
	int64_t x751 = -1LL;
	int64_t x752 = -1LL;
	volatile uint64_t t177 = 0LLU;

    t177 = ((x749/x750)^(x751^x752));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x753 = UINT16_MAX;
	uint8_t x754 = UINT8_MAX;
	volatile int32_t x755 = INT32_MIN;
	int32_t x756 = INT32_MIN;
	static int32_t t178 = -117;

    t178 = ((x753/x754)^(x755^x756));

    if (t178 != 257) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x758 = -1LL;
	volatile int8_t x759 = INT8_MIN;
	static int16_t x760 = INT16_MIN;
	volatile int64_t t179 = -623LL;

    t179 = ((x757/x758)^(x759^x760));

    if (t179 != -32686LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x761 = 3;
	static uint8_t x762 = UINT8_MAX;
	int32_t x763 = INT32_MIN;
	int16_t x764 = INT16_MAX;
	static int32_t t180 = 56869154;

    t180 = ((x761/x762)^(x763^x764));

    if (t180 != -2147450881) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x766 = 50U;
	int16_t x767 = INT16_MIN;
	static int8_t x768 = INT8_MIN;
	volatile uint64_t t181 = 197396264LLU;

    t181 = ((x765/x766)^(x767^x768));

    if (t181 != 117868833131608LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x769 = 79U;
	int64_t x770 = 409639LL;
	int64_t x772 = -3513959239147812997LL;
	static volatile int64_t t182 = -4331164953716LL;

    t182 = ((x769/x770)^(x771^x772));

    if (t182 != -3513959239798523772LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x773 = -3;
	uint64_t x774 = 416623136720363690LLU;
	uint64_t x776 = UINT64_MAX;
	static uint64_t t183 = 209014LLU;

    t183 = ((x773/x774)^(x775^x776));

    if (t183 != 32723LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x777 = 9LLU;
	volatile int32_t x778 = -1;
	uint64_t t184 = 87129568369LLU;

    t184 = ((x777/x778)^(x779^x780));

    if (t184 != 32640LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x781 = -109328LL;
	volatile int16_t x782 = INT16_MAX;
	uint8_t x783 = 3U;
	uint32_t x784 = UINT32_MAX;
	volatile int64_t t185 = 52799752021LL;

    t185 = ((x781/x782)^(x783^x784));

    if (t185 != -4294967295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x785 = -346083434;
	uint8_t x786 = 13U;
	int32_t x787 = 229;
	static volatile int32_t t186 = -230;

    t186 = ((x785/x786)^(x787^x788));

    if (t186 != 2120861811) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x789 = INT64_MIN;
	int16_t x790 = INT16_MAX;
	int64_t x791 = -30LL;
	volatile int16_t x792 = 21;
	int64_t t187 = -592082785342697022LL;

    t187 = ((x789/x790)^(x791^x792));

    if (t187 != 281483566907407LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x793 = INT16_MIN;
	int32_t x794 = -7942819;
	uint16_t x796 = 0U;
	volatile int32_t t188 = 365407349;

    t188 = ((x793/x794)^(x795^x796));

    if (t188 != -37) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x797 = UINT32_MAX;
	int32_t x798 = INT32_MIN;
	int32_t x799 = 426;
	uint8_t x800 = UINT8_MAX;
	volatile uint32_t t189 = 0U;

    t189 = ((x797/x798)^(x799^x800));

    if (t189 != 340U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x801 = UINT64_MAX;
	int16_t x802 = INT16_MIN;
	uint64_t x803 = 9LLU;
	static volatile uint64_t t190 = 1LLU;

    t190 = ((x801/x802)^(x803^x804));

    if (t190 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x805 = INT16_MAX;
	volatile int8_t x808 = INT8_MIN;
	volatile uint64_t t191 = 1LLU;

    t191 = ((x805/x806)^(x807^x808));

    if (t191 != 127LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x809 = 274159142521131341LL;
	int16_t x810 = INT16_MAX;
	uint32_t x812 = UINT32_MAX;
	int64_t t192 = -1131678110736606496LL;

    t192 = ((x809/x810)^(x811^x812));

    if (t192 != 8370559163537LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x813 = 28U;
	int8_t x815 = -37;
	uint16_t x816 = 4202U;
	volatile int32_t t193 = 1;

    t193 = ((x813/x814)^(x815^x816));

    if (t193 != -4175) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x817 = -143546LL;
	uint32_t x818 = UINT32_MAX;
	volatile int64_t x819 = INT64_MIN;
	int16_t x820 = -7263;
	int64_t t194 = -3212107872LL;

    t194 = ((x817/x818)^(x819^x820));

    if (t194 != 9223372036854768545LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x821 = 117U;
	int32_t x822 = -1;
	int8_t x823 = -1;
	int32_t x824 = -2322056;
	volatile int32_t t195 = -3799349;

    t195 = ((x821/x822)^(x823^x824));

    if (t195 != -2322164) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x825 = UINT16_MAX;
	volatile uint64_t x826 = 1387LLU;
	volatile uint32_t x827 = UINT32_MAX;
	static int16_t x828 = -1;

    t196 = ((x825/x826)^(x827^x828));

    if (t196 != 47LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x829 = 11584;
	static volatile uint64_t x830 = UINT64_MAX;
	volatile int32_t x831 = INT32_MAX;
	static volatile uint64_t t197 = 734LLU;

    t197 = ((x829/x830)^(x831^x832));

    if (t197 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x833 = 95273261256LL;
	int64_t x835 = INT64_MIN;
	uint16_t x836 = UINT16_MAX;
	volatile int64_t t198 = 48752096LL;

    t198 = ((x833/x834)^(x835^x836));

    if (t198 != 9223372036110447920LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x837 = INT16_MIN;
	int8_t x838 = INT8_MIN;
	int32_t x840 = INT32_MIN;
	int32_t t199 = 0;

    t199 = ((x837/x838)^(x839^x840));

    if (t199 != -2147451137) { NG(); } else { ; }
	
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

