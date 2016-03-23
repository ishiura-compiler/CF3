
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

static int32_t x3 = INT32_MAX;
int8_t x8 = INT8_MAX;
int32_t t1 = 815184784;
uint64_t x12 = 375601LLU;
static uint16_t x19 = 17460U;
static int16_t x34 = INT16_MIN;
uint16_t x37 = 0U;
int16_t x38 = -1;
int8_t x42 = INT8_MIN;
int16_t x53 = INT16_MIN;
int64_t x55 = INT64_MIN;
volatile uint32_t x58 = 469773U;
uint32_t t15 = 1297506196U;
uint32_t x65 = 56U;
static int8_t x68 = INT8_MIN;
static uint32_t x77 = UINT32_MAX;
volatile uint64_t x80 = 7604886654754LLU;
volatile uint32_t x82 = 0U;
static volatile uint16_t x93 = UINT16_MAX;
volatile uint64_t x96 = 121844035LLU;
uint32_t x98 = 231522U;
int8_t x106 = INT8_MIN;
int16_t x118 = -115;
uint8_t x121 = UINT8_MAX;
volatile uint64_t x126 = 6761LLU;
int64_t x130 = -1LL;
int8_t x132 = INT8_MIN;
uint64_t x135 = 1607LLU;
int8_t x138 = -1;
int32_t t33 = -79077208;
uint16_t x146 = 1959U;
uint16_t x151 = 16U;
volatile int32_t x164 = INT32_MIN;
volatile int8_t x165 = 2;
uint8_t x169 = 73U;
uint16_t x173 = 102U;
volatile int32_t x179 = -1;
static uint32_t x183 = UINT32_MAX;
uint64_t x186 = 51LLU;
volatile int64_t x193 = -2476933064LL;
uint64_t x196 = 1055270795048LLU;
int8_t x197 = INT8_MIN;
int64_t x200 = 130322166645788LL;
int32_t t48 = -10290785;
static int32_t t49 = -1;
static int8_t x219 = -1;
uint16_t x220 = UINT16_MAX;
static int8_t x223 = -8;
int8_t x225 = INT8_MIN;
int64_t x229 = 1LL;
static int64_t x239 = INT64_MIN;
static int16_t x242 = INT16_MIN;
uint16_t x243 = UINT16_MAX;
int8_t x245 = 1;
int16_t x246 = INT16_MAX;
uint16_t x248 = UINT16_MAX;
uint8_t x250 = 112U;
volatile int32_t t59 = -2;
static volatile uint64_t t61 = 112727386271280LLU;
uint32_t x264 = 1606U;
int64_t t62 = -261460LL;
uint64_t x269 = UINT64_MAX;
int32_t t65 = -261;
int8_t x280 = 42;
static int64_t t67 = -1270525127LL;
uint64_t x292 = 950413234344LLU;
int16_t x298 = INT16_MIN;
volatile int32_t x302 = INT32_MIN;
static int32_t t72 = -5134;
int32_t x312 = INT32_MAX;
static volatile int64_t t73 = -31235001523583LL;
static int32_t x318 = -1;
int32_t t75 = -14420;
uint16_t x321 = UINT16_MAX;
int16_t x324 = INT16_MIN;
static uint64_t x327 = 1501662LLU;
int8_t x331 = -1;
volatile int16_t x332 = INT16_MAX;
int64_t x348 = -332509862337132132LL;
int64_t x353 = INT64_MIN;
static int32_t x358 = INT32_MIN;
int32_t x364 = -473;
volatile int16_t x366 = INT16_MIN;
int32_t x370 = -701;
volatile uint16_t x374 = UINT16_MAX;
uint8_t x392 = UINT8_MAX;
int16_t x397 = -1;
static volatile int16_t x409 = INT16_MAX;
int32_t x410 = INT32_MAX;
static int16_t x415 = INT16_MIN;
volatile int64_t t99 = -1784LL;
static uint16_t x418 = 77U;
int32_t x419 = INT32_MIN;
volatile int16_t x420 = -1;
uint64_t t100 = 3LLU;
static volatile int8_t x422 = INT8_MIN;
static int8_t x425 = -19;
static uint64_t x427 = UINT64_MAX;
int8_t x449 = INT8_MIN;
int8_t x454 = -4;
volatile int32_t t109 = -2963;
volatile int32_t x473 = -1;
uint8_t x478 = 0U;
int32_t x480 = INT32_MAX;
volatile int64_t t115 = 8457318285LL;
uint16_t x490 = UINT16_MAX;
int64_t x500 = -1LL;
int8_t x506 = INT8_MIN;
uint64_t x517 = 1251LLU;
uint32_t x519 = 29622U;
volatile uint8_t x522 = 1U;
int8_t x525 = 17;
static uint16_t x530 = UINT16_MAX;
int64_t x532 = -4LL;
static volatile int8_t x536 = 0;
uint8_t x537 = 2U;
int64_t x542 = -2198635518063289409LL;
int8_t x545 = INT8_MAX;
int32_t x547 = INT32_MIN;
int8_t x550 = INT8_MAX;
uint64_t x564 = 1246958061520401LLU;
int8_t x568 = INT8_MIN;
volatile int8_t x572 = INT8_MIN;
volatile int32_t t137 = -1;
int64_t x576 = INT64_MIN;
int64_t x578 = INT64_MIN;
volatile int64_t t139 = INT64_MAX;
static uint8_t x588 = 3U;
uint8_t x603 = UINT8_MAX;
int32_t x606 = -55544638;
int32_t x610 = INT32_MIN;
static int32_t t147 = 1;
int32_t x619 = INT32_MAX;
static uint16_t x625 = 14U;
int64_t t152 = 662802967336995LL;
volatile uint64_t t153 = 2LLU;
int16_t x646 = 176;
volatile uint16_t x652 = 0U;
int64_t x655 = INT64_MIN;
uint32_t x656 = 591511097U;
int32_t t160 = 10478;
static int32_t t161 = 0;
int64_t x674 = 3613052661353883LL;
int64_t t163 = -2429LL;
int64_t x677 = INT64_MIN;
int16_t x681 = INT16_MIN;
int64_t x684 = 24621209905LL;
volatile int64_t x685 = INT64_MAX;
uint32_t t167 = 3432712U;
static int32_t x696 = 27031;
volatile int64_t x698 = -724431751930LL;
int32_t t170 = -1;
volatile int32_t t171 = 217;
static uint32_t x711 = 14476836U;
int32_t t175 = 2;
static int16_t x727 = INT16_MIN;
uint8_t x729 = 66U;
int64_t x730 = INT64_MIN;
int32_t x732 = 3974135;
static volatile int32_t t178 = 33252797;
int16_t x738 = -2716;
uint8_t x741 = UINT8_MAX;
volatile int64_t x743 = INT64_MIN;
uint32_t x744 = UINT32_MAX;
static int32_t t180 = 3;
int32_t x752 = INT32_MIN;
int64_t x769 = INT64_MAX;
uint32_t t186 = 118613U;
uint8_t x779 = UINT8_MAX;
int32_t t187 = -88681;
uint16_t x783 = UINT16_MAX;
static volatile uint32_t t189 = 62U;
static int32_t t190 = -28;
int32_t x794 = -3936971;
int32_t t191 = 0;
uint32_t x802 = 195179U;
uint32_t x803 = UINT32_MAX;
uint32_t t193 = 115987100U;
int16_t x806 = INT16_MAX;
uint16_t x807 = 29U;
int32_t t194 = -6465534;
int32_t t195 = 619;
uint8_t x819 = UINT8_MAX;
static int16_t x820 = -1;
volatile int32_t t199 = 539;


void f0(void) {
    	static int32_t x1 = 2833914;
	int64_t x2 = -81580284LL;
	static int8_t x4 = 19;
	volatile int64_t t0 = -105LL;

    t0 = ((x1^x2)/(x3!=x4));

    if (t0 != -83356930LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1273;
	static uint16_t x6 = 9U;
	int8_t x7 = INT8_MIN;

    t1 = ((x5^x6)/(x7!=x8));

    if (t1 != -1266) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 3205061U;
	int32_t x10 = 820;
	int16_t x11 = INT16_MIN;
	volatile uint32_t t2 = 105237876U;

    t2 = ((x9^x10)/(x11!=x12));

    if (t2 != 3204337U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 488871137766501396LLU;
	static volatile int32_t x14 = INT32_MAX;
	volatile uint32_t x15 = 51U;
	uint16_t x16 = 6316U;
	uint64_t t3 = 692133559LLU;

    t3 = ((x13^x14)/(x15!=x16));

    if (t3 != 488871138453918699LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint64_t x18 = UINT64_MAX;
	static uint32_t x20 = UINT32_MAX;
	uint64_t t4 = 141141LLU;

    t4 = ((x17^x18)/(x19!=x20));

    if (t4 != 32767LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 12;
	uint64_t x22 = UINT64_MAX;
	static uint8_t x23 = 0U;
	uint32_t x24 = 442U;
	uint64_t t5 = 713954837068LLU;

    t5 = ((x21^x22)/(x23!=x24));

    if (t5 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile int64_t x26 = INT64_MIN;
	static int8_t x27 = 15;
	int8_t x28 = -7;
	int64_t t6 = -89181565528LL;

    t6 = ((x25^x26)/(x27!=x28));

    if (t6 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int32_t x30 = 355256733;
	static uint32_t x31 = UINT32_MAX;
	uint16_t x32 = UINT16_MAX;
	static int64_t t7 = 1LL;

    t7 = ((x29^x30)/(x31!=x32));

    if (t7 != -9223372036499519075LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 3123347U;
	static int16_t x35 = INT16_MAX;
	volatile int16_t x36 = -35;
	volatile uint32_t t8 = 16U;

    t8 = ((x33^x34)/(x35!=x36));

    if (t8 != 4291831955U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x39 = 240U;
	static uint64_t x40 = 583257LLU;
	int32_t t9 = -38958;

    t9 = ((x37^x38)/(x39!=x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -1;
	int16_t x43 = INT16_MIN;
	int64_t x44 = 158648405217776573LL;
	static int32_t t10 = -1222218;

    t10 = ((x41^x42)/(x43!=x44));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 550;
	uint64_t x46 = 447108606LLU;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile uint64_t t11 = 23960389302LLU;

    t11 = ((x45^x46)/(x47!=x48));

    if (t11 != 447109080LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MIN;
	uint32_t x50 = 3570U;
	int16_t x51 = -1;
	uint64_t x52 = 5LLU;
	uint32_t t12 = 23U;

    t12 = ((x49^x50)/(x51!=x52));

    if (t12 != 4294938098U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	int64_t t13 = 8310503LL;

    t13 = ((x53^x54)/(x55!=x56));

    if (t13 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int64_t x59 = INT64_MAX;
	volatile uint8_t x60 = 8U;
	uint32_t t14 = 42U;

    t14 = ((x57^x58)/(x59!=x60));

    if (t14 != 4294497522U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	static uint8_t x63 = UINT8_MAX;
	int32_t x64 = -3;

    t15 = ((x61^x62)/(x63!=x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x66 = 415410045U;
	int16_t x67 = INT16_MIN;
	uint32_t t16 = 459252U;

    t16 = ((x65^x66)/(x67!=x68));

    if (t16 != 415409989U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	volatile int32_t x70 = -629;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;
	int32_t t17 = 6121;

    t17 = ((x69^x70)/(x71!=x72));

    if (t17 != 628) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x78 = -1;
	int8_t x79 = INT8_MIN;
	volatile uint32_t t18 = 1714U;

    t18 = ((x77^x78)/(x79!=x80));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = -1;
	static int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MAX;
	volatile uint32_t t19 = UINT32_MAX;

    t19 = ((x81^x82)/(x83!=x84));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	uint8_t x86 = 0U;
	int64_t x87 = 188786LL;
	static volatile uint8_t x88 = 1U;
	volatile int32_t t20 = -180;

    t20 = ((x85^x86)/(x87!=x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	static int8_t x91 = INT8_MIN;
	int64_t x92 = -17623127LL;
	static volatile int32_t t21 = -119;

    t21 = ((x89^x90)/(x91!=x92));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x94 = -1;
	uint8_t x95 = 25U;
	static int32_t t22 = -55709;

    t22 = ((x93^x94)/(x95!=x96));

    if (t22 != -65536) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -1;
	static uint32_t x99 = 183916U;
	int64_t x100 = -7397187447111025LL;
	volatile uint32_t t23 = 731U;

    t23 = ((x97^x98)/(x99!=x100));

    if (t23 != 4294735773U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x105 = UINT64_MAX;
	static int8_t x107 = INT8_MAX;
	int16_t x108 = -1;
	uint64_t t24 = 4860LLU;

    t24 = ((x105^x106)/(x107!=x108));

    if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x109 = INT32_MIN;
	static int64_t x110 = -1LL;
	volatile int8_t x111 = -1;
	uint16_t x112 = 196U;
	int64_t t25 = -4LL;

    t25 = ((x109^x110)/(x111!=x112));

    if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x113 = 1;
	int64_t x114 = INT64_MIN;
	volatile uint8_t x115 = 2U;
	static uint32_t x116 = 208302U;
	volatile int64_t t26 = 169504820868768LL;

    t26 = ((x113^x114)/(x115!=x116));

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 984;
	static int64_t x119 = INT64_MIN;
	static uint8_t x120 = 3U;
	int32_t t27 = -2435;

    t27 = ((x117^x118)/(x119!=x120));

    if (t27 != -939) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x122 = 794LL;
	static volatile int8_t x123 = INT8_MIN;
	int32_t x124 = -385908592;
	static int64_t t28 = 1019LL;

    t28 = ((x121^x122)/(x123!=x124));

    if (t28 != 997LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x125 = 467051LLU;
	int32_t x127 = -1;
	static int8_t x128 = 1;
	volatile uint64_t t29 = 48LLU;

    t29 = ((x125^x126)/(x127!=x128));

    if (t29 != 473602LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = 5U;
	int64_t x131 = INT64_MIN;
	volatile int64_t t30 = 498LL;

    t30 = ((x129^x130)/(x131!=x132));

    if (t30 != -6LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t31 = 36697712;

    t31 = ((x133^x134)/(x135!=x136));

    if (t31 != -2147450881) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -6078135;
	int64_t x139 = 27LL;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t32 = 6490405;

    t32 = ((x137^x138)/(x139!=x140));

    if (t32 != 6078134) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 21U;
	volatile int32_t x142 = INT32_MIN;
	static volatile int32_t x143 = 12511;
	volatile uint16_t x144 = 38U;

    t33 = ((x141^x142)/(x143!=x144));

    if (t33 != -2147483627) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x145 = -66836LL;
	uint64_t x147 = 3371LLU;
	int16_t x148 = INT16_MIN;
	int64_t t34 = -1203434248558LL;

    t34 = ((x145^x146)/(x147!=x148));

    if (t34 != -66229LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = 2U;
	int32_t x150 = INT32_MAX;
	uint64_t x152 = 5LLU;
	static int32_t t35 = 140628778;

    t35 = ((x149^x150)/(x151!=x152));

    if (t35 != 2147483645) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MIN;
	static uint16_t x154 = 7401U;
	static int64_t x155 = INT64_MIN;
	int8_t x156 = 0;
	int32_t t36 = 2316;

    t36 = ((x153^x154)/(x155!=x156));

    if (t36 != -7319) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = 5177LL;
	uint16_t x158 = UINT16_MAX;
	static int8_t x159 = INT8_MAX;
	int16_t x160 = -1;
	int64_t t37 = 0LL;

    t37 = ((x157^x158)/(x159!=x160));

    if (t37 != 60358LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	uint16_t x163 = 667U;
	int64_t t38 = 59249846LL;

    t38 = ((x161^x162)/(x163!=x164));

    if (t38 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x166 = UINT8_MAX;
	uint8_t x167 = UINT8_MAX;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t39 = -270113007;

    t39 = ((x165^x166)/(x167!=x168));

    if (t39 != 253) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x170 = 113U;
	uint16_t x171 = 3U;
	uint32_t x172 = 7227605U;
	static volatile int32_t t40 = -8;

    t40 = ((x169^x170)/(x171!=x172));

    if (t40 != 56) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x174 = INT16_MIN;
	static uint32_t x175 = 10190U;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t41 = 1763497;

    t41 = ((x173^x174)/(x175!=x176));

    if (t41 != -32666) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x177 = -1;
	volatile uint64_t x178 = 632754659277LLU;
	int16_t x180 = INT16_MIN;
	volatile uint64_t t42 = 145LLU;

    t42 = ((x177^x178)/(x179!=x180));

    if (t42 != 18446743440954892338LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x181 = 30U;
	int16_t x182 = -1;
	volatile int32_t x184 = -112040412;
	volatile int32_t t43 = 19822013;

    t43 = ((x181^x182)/(x183!=x184));

    if (t43 != -31) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = -6;
	uint32_t x187 = 2738U;
	volatile int32_t x188 = 796395152;
	volatile uint64_t t44 = 4LLU;

    t44 = ((x185^x186)/(x187!=x188));

    if (t44 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	static int64_t x191 = INT64_MIN;
	volatile int8_t x192 = 41;
	volatile int32_t t45 = 1677;

    t45 = ((x189^x190)/(x191!=x192));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x194 = 233U;
	static uint64_t x195 = 301525551461551106LLU;
	static volatile int64_t t46 = -457146LL;

    t46 = ((x193^x194)/(x195!=x196));

    if (t46 != -2476932911LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x198 = 259809U;
	int32_t x199 = INT32_MAX;
	volatile uint32_t t47 = 1U;

    t47 = ((x197^x198)/(x199!=x200));

    if (t47 != 4294707553U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	volatile int8_t x203 = INT8_MIN;
	int8_t x204 = -1;

    t48 = ((x201^x202)/(x203!=x204));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x205 = 4U;
	uint8_t x206 = 0U;
	uint64_t x207 = 522462762017508LLU;
	int64_t x208 = INT64_MAX;

    t49 = ((x205^x206)/(x207!=x208));

    if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = 22168;
	int16_t x210 = -1;
	uint16_t x211 = UINT16_MAX;
	volatile int64_t x212 = INT64_MAX;
	static int32_t t50 = 3;

    t50 = ((x209^x210)/(x211!=x212));

    if (t50 != -22169) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MAX;
	int32_t x215 = -95540;
	volatile int8_t x216 = -26;
	volatile int64_t t51 = 20964994520LL;

    t51 = ((x213^x214)/(x215!=x216));

    if (t51 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x217 = UINT16_MAX;
	uint32_t x218 = 508165U;
	volatile uint32_t t52 = 107812299U;

    t52 = ((x217^x218)/(x219!=x220));

    if (t52 != 474874U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x221 = INT64_MAX;
	int32_t x222 = -1;
	volatile int64_t x224 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

    t53 = ((x221^x222)/(x223!=x224));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	static int32_t x228 = INT32_MIN;
	int64_t t54 = -185457154LL;

    t54 = ((x225^x226)/(x227!=x228));

    if (t54 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x230 = -1LL;
	int16_t x231 = INT16_MAX;
	int32_t x232 = 1704017;
	static volatile int64_t t55 = 1742981058769LL;

    t55 = ((x229^x230)/(x231!=x232));

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MIN;
	volatile uint16_t x238 = 13U;
	int16_t x240 = 1;
	static int64_t t56 = 13LL;

    t56 = ((x237^x238)/(x239!=x240));

    if (t56 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x241 = INT64_MIN;
	int8_t x244 = -1;
	int64_t t57 = 1346216609LL;

    t57 = ((x241^x242)/(x243!=x244));

    if (t57 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x247 = -8;
	int32_t t58 = -120874;

    t58 = ((x245^x246)/(x247!=x248));

    if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x249 = INT32_MIN;
	volatile int8_t x251 = -7;
	int8_t x252 = -1;

    t59 = ((x249^x250)/(x251!=x252));

    if (t59 != -2147483536) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x253 = 0U;
	int8_t x254 = -1;
	int8_t x255 = 38;
	uint32_t x256 = 7587U;
	volatile uint32_t t60 = UINT32_MAX;

    t60 = ((x253^x254)/(x255!=x256));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x257 = -1;
	uint64_t x258 = 116331454LLU;
	static volatile int16_t x259 = -978;
	int64_t x260 = -13962579852347LL;

    t61 = ((x257^x258)/(x259!=x260));

    if (t61 != 18446744073593220161LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = INT64_MAX;
	int64_t x262 = INT64_MAX;
	int32_t x263 = -1;

    t62 = ((x261^x262)/(x263!=x264));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x265 = 402LLU;
	static volatile int64_t x266 = -1LL;
	int32_t x267 = INT32_MIN;
	int8_t x268 = -29;
	uint64_t t63 = 20651068LLU;

    t63 = ((x265^x266)/(x267!=x268));

    if (t63 != 18446744073709551213LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	static int64_t x272 = INT64_MIN;
	uint64_t t64 = 3765477LLU;

    t64 = ((x269^x270)/(x271!=x272));

    if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = -3;
	int8_t x274 = INT8_MIN;
	int32_t x275 = 3;
	int64_t x276 = -1LL;

    t65 = ((x273^x274)/(x275!=x276));

    if (t65 != 125) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = 1296U;
	int32_t t66 = 7;

    t66 = ((x277^x278)/(x279!=x280));

    if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MAX;
	static volatile int64_t x283 = INT64_MIN;
	static int16_t x284 = 83;

    t67 = ((x281^x282)/(x283!=x284));

    if (t67 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x285 = -9157591977166703LL;
	int64_t x286 = INT64_MIN;
	static volatile uint32_t x287 = 261U;
	static int8_t x288 = 16;
	int64_t t68 = 3898686LL;

    t68 = ((x285^x286)/(x287!=x288));

    if (t68 != 9214214444877609105LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = -3;
	uint16_t x290 = 1779U;
	static int8_t x291 = 13;
	int32_t t69 = -25;

    t69 = ((x289^x290)/(x291!=x292));

    if (t69 != -1778) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = 1;
	int8_t x299 = -6;
	uint64_t x300 = 160818054449LLU;
	volatile int32_t t70 = -36450089;

    t70 = ((x297^x298)/(x299!=x300));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = 1164;
	static int64_t x303 = -231LL;
	int32_t x304 = INT32_MIN;
	volatile int32_t t71 = -50;

    t71 = ((x301^x302)/(x303!=x304));

    if (t71 != -2147482484) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MAX;
	static int8_t x306 = -52;
	static int64_t x307 = 131603628934806955LL;
	int64_t x308 = INT64_MIN;

    t72 = ((x305^x306)/(x307!=x308));

    if (t72 != -32717) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x309 = INT32_MAX;
	volatile int64_t x310 = 18LL;
	int8_t x311 = INT8_MIN;

    t73 = ((x309^x310)/(x311!=x312));

    if (t73 != 2147483629LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	volatile int64_t x315 = INT64_MAX;
	volatile int16_t x316 = -1208;
	static volatile int64_t t74 = 779186927844LL;

    t74 = ((x313^x314)/(x315!=x316));

    if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x317 = 5521U;
	uint64_t x319 = 1365637791779817LLU;
	int16_t x320 = INT16_MIN;

    t75 = ((x317^x318)/(x319!=x320));

    if (t75 != -5522) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x322 = 1455U;
	int16_t x323 = 5296;
	volatile int32_t t76 = 15705;

    t76 = ((x321^x322)/(x323!=x324));

    if (t76 != 64080) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x325 = INT8_MIN;
	uint8_t x326 = UINT8_MAX;
	uint16_t x328 = 3U;
	int32_t t77 = 2012;

    t77 = ((x325^x326)/(x327!=x328));

    if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x329 = 23U;
	static int8_t x330 = INT8_MAX;
	static volatile int32_t t78 = 19;

    t78 = ((x329^x330)/(x331!=x332));

    if (t78 != 104) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x333 = 2U;
	int16_t x334 = -33;
	static int32_t x335 = INT32_MAX;
	volatile int16_t x336 = INT16_MIN;
	uint32_t t79 = 8575755U;

    t79 = ((x333^x334)/(x335!=x336));

    if (t79 != 4294967261U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int64_t x339 = -8011008184010LL;
	static uint16_t x340 = UINT16_MAX;
	static int64_t t80 = INT64_MAX;

    t80 = ((x337^x338)/(x339!=x340));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x341 = 878009U;
	static uint8_t x342 = 20U;
	int64_t x343 = -1LL;
	int8_t x344 = INT8_MIN;
	static uint32_t t81 = 7038346U;

    t81 = ((x341^x342)/(x343!=x344));

    if (t81 != 877997U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x345 = -1;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	volatile int32_t t82 = 1722;

    t82 = ((x345^x346)/(x347!=x348));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 3U;
	int32_t t83 = -61297;

    t83 = ((x349^x350)/(x351!=x352));

    if (t83 != -2147483521) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x354 = INT32_MAX;
	static int64_t x355 = 23828923198185LL;
	uint16_t x356 = 6936U;
	static volatile int64_t t84 = -2182815227109620LL;

    t84 = ((x353^x354)/(x355!=x356));

    if (t84 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x357 = -96413LL;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = -310;
	volatile int64_t t85 = -8529LL;

    t85 = ((x357^x358)/(x359!=x360));

    if (t85 != 2147387235LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x361 = -1;
	int32_t x362 = -69402;
	volatile uint8_t x363 = UINT8_MAX;
	int32_t t86 = 1043;

    t86 = ((x361^x362)/(x363!=x364));

    if (t86 != 69401) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x365 = INT64_MIN;
	static uint32_t x367 = 54U;
	volatile int8_t x368 = INT8_MIN;
	int64_t t87 = -16225843907LL;

    t87 = ((x365^x366)/(x367!=x368));

    if (t87 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x369 = -1;
	uint64_t x371 = UINT64_MAX;
	volatile uint8_t x372 = UINT8_MAX;
	int32_t t88 = -7;

    t88 = ((x369^x370)/(x371!=x372));

    if (t88 != 700) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x375 = -1;
	int16_t x376 = 1497;
	static volatile int32_t t89 = -215;

    t89 = ((x373^x374)/(x375!=x376));

    if (t89 != -2147418113) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x377 = UINT8_MAX;
	uint32_t x378 = UINT32_MAX;
	uint32_t x379 = 984U;
	volatile int16_t x380 = INT16_MIN;
	static volatile uint32_t t90 = 7197U;

    t90 = ((x377^x378)/(x379!=x380));

    if (t90 != 4294967040U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x381 = 53U;
	uint32_t x382 = UINT32_MAX;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MAX;
	volatile uint32_t t91 = 3895909U;

    t91 = ((x381^x382)/(x383!=x384));

    if (t91 != 4294967242U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = 7205457LL;
	int16_t x388 = INT16_MAX;
	static uint64_t t92 = 5783772207LLU;

    t92 = ((x385^x386)/(x387!=x388));

    if (t92 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x389 = 1242098816U;
	int64_t x390 = INT64_MIN;
	int64_t x391 = -397900301348661182LL;
	volatile int64_t t93 = -71623726163032072LL;

    t93 = ((x389^x390)/(x391!=x392));

    if (t93 != -9223372035612676992LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x393 = 11795U;
	uint32_t x394 = 1234917479U;
	static volatile uint32_t x395 = 1084U;
	int32_t x396 = INT32_MAX;
	uint32_t t94 = 169U;

    t94 = ((x393^x394)/(x395!=x396));

    if (t94 != 1234925172U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t95 = 3;

    t95 = ((x397^x398)/(x399!=x400));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = INT32_MIN;
	static uint8_t x402 = UINT8_MAX;
	uint16_t x403 = 43U;
	uint16_t x404 = 7U;
	volatile int32_t t96 = 486090548;

    t96 = ((x401^x402)/(x403!=x404));

    if (t96 != -2147483393) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	static uint32_t x406 = UINT32_MAX;
	int64_t x407 = -1LL;
	volatile int16_t x408 = INT16_MIN;
	static volatile uint64_t t97 = 1625857407LLU;

    t97 = ((x405^x406)/(x407!=x408));

    if (t97 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x411 = -1;
	uint64_t x412 = 630572729LLU;
	int32_t t98 = -3;

    t98 = ((x409^x410)/(x411!=x412));

    if (t98 != 2147450880) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x413 = INT16_MIN;
	static int64_t x414 = INT64_MIN;
	int32_t x416 = 17;

    t99 = ((x413^x414)/(x415!=x416));

    if (t99 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x417 = UINT64_MAX;

    t100 = ((x417^x418)/(x419!=x420));

    if (t100 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = INT32_MIN;
	volatile int64_t x423 = INT64_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t101 = -8144200;

    t101 = ((x421^x422)/(x423!=x424));

    if (t101 != 2147483520) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x426 = INT8_MAX;
	volatile uint32_t x428 = 12690583U;
	static volatile int32_t t102 = 1013427;

    t102 = ((x425^x426)/(x427!=x428));

    if (t102 != -110) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x429 = 7413;
	uint16_t x430 = 243U;
	volatile int8_t x431 = 0;
	int8_t x432 = INT8_MAX;
	int32_t t103 = 1;

    t103 = ((x429^x430)/(x431!=x432));

    if (t103 != 7174) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x433 = UINT64_MAX;
	static volatile uint32_t x434 = 3669U;
	static int64_t x435 = INT64_MAX;
	int8_t x436 = INT8_MIN;
	uint64_t t104 = 4476051340689477LLU;

    t104 = ((x433^x434)/(x435!=x436));

    if (t104 != 18446744073709547946LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = INT16_MAX;
	int16_t x438 = INT16_MIN;
	static int32_t x439 = -1;
	uint64_t x440 = 1301228265LLU;
	int32_t t105 = 1425;

    t105 = ((x437^x438)/(x439!=x440));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x441 = -1;
	int8_t x442 = -1;
	int16_t x443 = 147;
	uint16_t x444 = UINT16_MAX;
	int32_t t106 = -123440;

    t106 = ((x441^x442)/(x443!=x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x450 = -1;
	int32_t x451 = -293530035;
	volatile uint32_t x452 = 1503345706U;
	static int32_t t107 = 228;

    t107 = ((x449^x450)/(x451!=x452));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x453 = 144LLU;
	uint32_t x455 = 42U;
	int16_t x456 = -2;
	uint64_t t108 = 21982LLU;

    t108 = ((x453^x454)/(x455!=x456));

    if (t108 != 18446744073709551468LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = INT32_MAX;
	static int8_t x458 = INT8_MAX;
	volatile int16_t x459 = 1;
	uint8_t x460 = 83U;

    t109 = ((x457^x458)/(x459!=x460));

    if (t109 != 2147483520) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = -3998;
	volatile int8_t x462 = INT8_MIN;
	int8_t x463 = -8;
	volatile uint8_t x464 = UINT8_MAX;
	int32_t t110 = 1063;

    t110 = ((x461^x462)/(x463!=x464));

    if (t110 != 4066) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = INT16_MIN;
	uint64_t x466 = 7716LLU;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = -1;
	static volatile uint64_t t111 = 1066128837327954885LLU;

    t111 = ((x465^x466)/(x467!=x468));

    if (t111 != 18446744073709526564LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = INT64_MAX;
	volatile int32_t x470 = INT32_MAX;
	uint32_t x471 = UINT32_MAX;
	static volatile int64_t x472 = INT64_MIN;
	int64_t t112 = -742869245LL;

    t112 = ((x469^x470)/(x471!=x472));

    if (t112 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x474 = 7866U;
	int32_t x475 = INT32_MIN;
	static uint64_t x476 = 9003336134LLU;
	volatile uint32_t t113 = 9050U;

    t113 = ((x473^x474)/(x475!=x476));

    if (t113 != 4294959429U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x477 = -1;
	uint8_t x479 = UINT8_MAX;
	volatile int32_t t114 = 327607;

    t114 = ((x477^x478)/(x479!=x480));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x481 = 2;
	int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	static uint8_t x484 = 54U;

    t115 = ((x481^x482)/(x483!=x484));

    if (t115 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x485 = 1U;
	static int8_t x486 = -3;
	uint16_t x487 = 31U;
	int16_t x488 = INT16_MAX;
	uint32_t t116 = 26139U;

    t116 = ((x485^x486)/(x487!=x488));

    if (t116 != 4294967292U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x489 = UINT32_MAX;
	int32_t x491 = INT32_MIN;
	int64_t x492 = -66727922490433LL;
	volatile uint32_t t117 = 87U;

    t117 = ((x489^x490)/(x491!=x492));

    if (t117 != 4294901760U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x493 = UINT32_MAX;
	volatile int64_t x494 = INT64_MIN;
	int32_t x495 = 437340;
	uint8_t x496 = UINT8_MAX;
	int64_t t118 = 3096385LL;

    t118 = ((x493^x494)/(x495!=x496));

    if (t118 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = 5652;
	static int16_t x498 = INT16_MIN;
	volatile uint32_t x499 = 14233U;
	static int32_t t119 = -1;

    t119 = ((x497^x498)/(x499!=x500));

    if (t119 != -27116) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = -17;
	static volatile int64_t x502 = INT64_MIN;
	int32_t x503 = INT32_MIN;
	uint64_t x504 = 2780477LLU;
	volatile int64_t t120 = 76327751950LL;

    t120 = ((x501^x502)/(x503!=x504));

    if (t120 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x505 = UINT8_MAX;
	uint32_t x507 = UINT32_MAX;
	int64_t x508 = 3281451179LL;
	static int32_t t121 = 59648;

    t121 = ((x505^x506)/(x507!=x508));

    if (t121 != -129) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = INT64_MAX;
	int8_t x510 = -3;
	int32_t x511 = -3815859;
	volatile uint32_t x512 = 118785603U;
	int64_t t122 = -15057439785702813LL;

    t122 = ((x509^x510)/(x511!=x512));

    if (t122 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x513 = 37947U;
	int64_t x514 = -1LL;
	volatile int16_t x515 = -1;
	static int64_t x516 = -3366800043045LL;
	int64_t t123 = 116586983680LL;

    t123 = ((x513^x514)/(x515!=x516));

    if (t123 != -37948LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x518 = INT64_MIN;
	int32_t x520 = INT32_MIN;
	uint64_t t124 = 211225111431079LLU;

    t124 = ((x517^x518)/(x519!=x520));

    if (t124 != 9223372036854777059LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x521 = 913930930989351LLU;
	uint8_t x523 = UINT8_MAX;
	int64_t x524 = INT64_MAX;
	volatile uint64_t t125 = 4847481562659605LLU;

    t125 = ((x521^x522)/(x523!=x524));

    if (t125 != 913930930989350LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x526 = INT32_MIN;
	static int32_t x527 = INT32_MIN;
	uint32_t x528 = 7963U;
	volatile int32_t t126 = -458882931;

    t126 = ((x525^x526)/(x527!=x528));

    if (t126 != -2147483631) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x529 = UINT64_MAX;
	volatile uint64_t x531 = 2482LLU;
	volatile uint64_t t127 = 517955669769LLU;

    t127 = ((x529^x530)/(x531!=x532));

    if (t127 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x533 = INT32_MIN;
	uint16_t x534 = UINT16_MAX;
	int8_t x535 = -1;
	int32_t t128 = 114;

    t128 = ((x533^x534)/(x535!=x536));

    if (t128 != -2147418113) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x538 = INT32_MAX;
	int32_t x539 = INT32_MIN;
	int16_t x540 = 0;
	volatile int32_t t129 = -3;

    t129 = ((x537^x538)/(x539!=x540));

    if (t129 != 2147483645) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x541 = INT64_MIN;
	int16_t x543 = -1;
	volatile int16_t x544 = INT16_MIN;
	int64_t t130 = -2764197224998631LL;

    t130 = ((x541^x542)/(x543!=x544));

    if (t130 != 7024736518791486399LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x546 = 49U;
	int16_t x548 = 12;
	int32_t t131 = -76;

    t131 = ((x545^x546)/(x547!=x548));

    if (t131 != 78) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x549 = -58983191037LL;
	uint64_t x551 = 150LLU;
	int64_t x552 = INT64_MIN;
	static volatile int64_t t132 = -42594586958LL;

    t132 = ((x549^x550)/(x551!=x552));

    if (t132 != -58983190916LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = -1;
	int16_t x554 = INT16_MAX;
	int16_t x555 = -1;
	int8_t x556 = 1;
	int32_t t133 = -108946;

    t133 = ((x553^x554)/(x555!=x556));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = -30;
	uint8_t x558 = UINT8_MAX;
	int8_t x559 = -1;
	static int64_t x560 = 24378295303086LL;
	static volatile int32_t t134 = 412;

    t134 = ((x557^x558)/(x559!=x560));

    if (t134 != -227) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = INT8_MAX;
	uint16_t x562 = 5389U;
	static int32_t x563 = INT32_MIN;
	volatile int32_t t135 = -10;

    t135 = ((x561^x562)/(x563!=x564));

    if (t135 != 5490) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x565 = 1806831LL;
	volatile uint16_t x566 = 4U;
	int64_t x567 = 52544055773LL;
	volatile int64_t t136 = -522094011LL;

    t136 = ((x565^x566)/(x567!=x568));

    if (t136 != 1806827LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = INT8_MAX;
	uint16_t x570 = UINT16_MAX;
	volatile int64_t x571 = INT64_MIN;

    t137 = ((x569^x570)/(x571!=x572));

    if (t137 != 65408) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	volatile int32_t x574 = 7549922;
	uint64_t x575 = UINT64_MAX;
	volatile int32_t t138 = 92960;

    t138 = ((x573^x574)/(x575!=x576));

    if (t138 != 7588893) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x577 = -1;
	volatile int32_t x579 = -1;
	uint8_t x580 = 1U;

    t139 = ((x577^x578)/(x579!=x580));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x581 = 25977653LL;
	uint8_t x582 = 4U;
	int16_t x583 = 117;
	volatile uint32_t x584 = UINT32_MAX;
	volatile int64_t t140 = -3524952299828434376LL;

    t140 = ((x581^x582)/(x583!=x584));

    if (t140 != 25977649LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = -1;
	int32_t x586 = INT32_MIN;
	static volatile int32_t x587 = -507334;
	int32_t t141 = INT32_MAX;

    t141 = ((x585^x586)/(x587!=x588));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x589 = 1;
	uint64_t x590 = UINT64_MAX;
	volatile int16_t x591 = 0;
	volatile int64_t x592 = -1767532648158517314LL;
	uint64_t t142 = 7706751814068LLU;

    t142 = ((x589^x590)/(x591!=x592));

    if (t142 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x593 = 60U;
	static volatile uint8_t x594 = 26U;
	static volatile int64_t x595 = 264001754155LL;
	static int64_t x596 = INT64_MAX;
	int32_t t143 = -250057;

    t143 = ((x593^x594)/(x595!=x596));

    if (t143 != 38) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x598 = 0;
	static uint32_t x599 = 443U;
	int32_t x600 = INT32_MIN;
	int64_t t144 = INT64_MIN;

    t144 = ((x597^x598)/(x599!=x600));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x601 = UINT8_MAX;
	int64_t x602 = INT64_MAX;
	int8_t x604 = INT8_MAX;
	volatile int64_t t145 = 370806289568887613LL;

    t145 = ((x601^x602)/(x603!=x604));

    if (t145 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x605 = 1142LL;
	int16_t x607 = -2647;
	uint16_t x608 = 2981U;
	static volatile int64_t t146 = 4LL;

    t146 = ((x605^x606)/(x607!=x608));

    if (t146 != -55545676LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x609 = 31U;
	static uint16_t x611 = 28U;
	volatile int8_t x612 = -1;

    t147 = ((x609^x610)/(x611!=x612));

    if (t147 != -2147483617) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x613 = 1918376683U;
	static uint8_t x614 = UINT8_MAX;
	int16_t x615 = INT16_MAX;
	uint32_t x616 = UINT32_MAX;
	uint32_t t148 = 1U;

    t148 = ((x613^x614)/(x615!=x616));

    if (t148 != 1918376468U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x617 = -2163;
	volatile int8_t x618 = -15;
	int32_t x620 = INT32_MIN;
	static volatile int32_t t149 = -94;

    t149 = ((x617^x618)/(x619!=x620));

    if (t149 != 2172) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x621 = -2092252;
	int8_t x622 = INT8_MIN;
	int32_t x623 = -10189406;
	volatile int16_t x624 = INT16_MAX;
	static volatile int32_t t150 = 21;

    t150 = ((x621^x622)/(x623!=x624));

    if (t150 != 2092196) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x626 = 14965572308LLU;
	int64_t x627 = INT64_MIN;
	static int16_t x628 = INT16_MAX;
	volatile uint64_t t151 = 562LLU;

    t151 = ((x625^x626)/(x627!=x628));

    if (t151 != 14965572314LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x629 = INT64_MIN;
	uint8_t x630 = UINT8_MAX;
	static int64_t x631 = 1LL;
	int8_t x632 = -1;

    t152 = ((x629^x630)/(x631!=x632));

    if (t152 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x633 = UINT64_MAX;
	int32_t x634 = INT32_MIN;
	uint16_t x635 = 3U;
	int16_t x636 = INT16_MIN;

    t153 = ((x633^x634)/(x635!=x636));

    if (t153 != 2147483647LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x637 = INT8_MIN;
	uint8_t x638 = UINT8_MAX;
	int64_t x639 = INT64_MIN;
	uint64_t x640 = UINT64_MAX;
	volatile int32_t t154 = 0;

    t154 = ((x637^x638)/(x639!=x640));

    if (t154 != -129) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x641 = -1;
	int32_t x642 = INT32_MIN;
	int8_t x643 = INT8_MIN;
	volatile int16_t x644 = INT16_MAX;
	static volatile int32_t t155 = INT32_MAX;

    t155 = ((x641^x642)/(x643!=x644));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x645 = 1U;
	int64_t x647 = -1LL;
	int8_t x648 = 1;
	static volatile uint32_t t156 = 1543927075U;

    t156 = ((x645^x646)/(x647!=x648));

    if (t156 != 177U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x649 = 38U;
	int8_t x650 = INT8_MIN;
	int16_t x651 = -211;
	int32_t t157 = 876762917;

    t157 = ((x649^x650)/(x651!=x652));

    if (t157 != -90) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x653 = INT8_MIN;
	static volatile int32_t x654 = -2;
	volatile int32_t t158 = -6;

    t158 = ((x653^x654)/(x655!=x656));

    if (t158 != 126) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x657 = 7289320594274621863LLU;
	int8_t x658 = INT8_MAX;
	uint8_t x659 = UINT8_MAX;
	volatile uint16_t x660 = 37U;
	volatile uint64_t t159 = 3066604235LLU;

    t159 = ((x657^x658)/(x659!=x660));

    if (t159 != 7289320594274621912LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x661 = 0;
	uint16_t x662 = 3U;
	volatile uint64_t x663 = 71284LLU;
	uint32_t x664 = 1179132264U;

    t160 = ((x661^x662)/(x663!=x664));

    if (t160 != 3) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x665 = 0;
	static int8_t x666 = -18;
	int32_t x667 = 75587;
	int8_t x668 = -1;

    t161 = ((x665^x666)/(x667!=x668));

    if (t161 != -18) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x669 = INT32_MAX;
	static int32_t x670 = INT32_MAX;
	uint64_t x671 = 4117226624631889485LLU;
	volatile int8_t x672 = INT8_MIN;
	volatile int32_t t162 = -187882;

    t162 = ((x669^x670)/(x671!=x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x673 = 0;
	uint8_t x675 = 109U;
	uint16_t x676 = 2U;

    t163 = ((x673^x674)/(x675!=x676));

    if (t163 != 3613052661353883LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x678 = INT64_MIN;
	volatile int64_t x679 = INT64_MIN;
	int16_t x680 = -5;
	int64_t t164 = 1606LL;

    t164 = ((x677^x678)/(x679!=x680));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x682 = INT64_MIN;
	uint64_t x683 = 10520LLU;
	static int64_t t165 = -50645186759080LL;

    t165 = ((x681^x682)/(x683!=x684));

    if (t165 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x686 = -1;
	static int8_t x687 = 1;
	int64_t x688 = INT64_MAX;
	int64_t t166 = INT64_MIN;

    t166 = ((x685^x686)/(x687!=x688));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x689 = INT16_MIN;
	uint32_t x690 = 1612U;
	static volatile uint8_t x691 = UINT8_MAX;
	int8_t x692 = 0;

    t167 = ((x689^x690)/(x691!=x692));

    if (t167 != 4294936140U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x693 = INT32_MAX;
	int8_t x694 = INT8_MIN;
	uint32_t x695 = 52096U;
	volatile int32_t t168 = 1657545;

    t168 = ((x693^x694)/(x695!=x696));

    if (t168 != -2147483521) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x697 = 525;
	volatile uint64_t x699 = 4673218652947LLU;
	static int8_t x700 = INT8_MIN;
	int64_t t169 = 17LL;

    t169 = ((x697^x698)/(x699!=x700));

    if (t169 != -724431751413LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x701 = UINT8_MAX;
	uint16_t x702 = UINT16_MAX;
	int16_t x703 = INT16_MAX;
	int32_t x704 = -1;

    t170 = ((x701^x702)/(x703!=x704));

    if (t170 != 65280) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x705 = 1U;
	int16_t x706 = 119;
	uint32_t x707 = UINT32_MAX;
	int32_t x708 = INT32_MIN;

    t171 = ((x705^x706)/(x707!=x708));

    if (t171 != 118) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x709 = 2413175639LLU;
	int16_t x710 = -3;
	int16_t x712 = -1;
	static uint64_t t172 = 6752892605546675LLU;

    t172 = ((x709^x710)/(x711!=x712));

    if (t172 != 18446744071296375978LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x713 = 798267LL;
	static int8_t x714 = INT8_MIN;
	int64_t x715 = -1LL;
	uint64_t x716 = 7344918710905094LLU;
	volatile int64_t t173 = 1937331702224963LL;

    t173 = ((x713^x714)/(x715!=x716));

    if (t173 != -798277LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x717 = UINT64_MAX;
	uint64_t x718 = 1LLU;
	volatile uint16_t x719 = 449U;
	static int16_t x720 = INT16_MIN;
	static volatile uint64_t t174 = 6054744559957460LLU;

    t174 = ((x717^x718)/(x719!=x720));

    if (t174 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = INT8_MIN;
	int16_t x722 = -34;
	static int64_t x723 = INT64_MIN;
	uint64_t x724 = 2921532285LLU;

    t175 = ((x721^x722)/(x723!=x724));

    if (t175 != 94) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x725 = INT32_MIN;
	int32_t x726 = 363953;
	volatile int8_t x728 = INT8_MAX;
	int32_t t176 = -43861059;

    t176 = ((x725^x726)/(x727!=x728));

    if (t176 != -2147119695) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x731 = UINT64_MAX;
	int64_t t177 = 2962976064LL;

    t177 = ((x729^x730)/(x731!=x732));

    if (t177 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x733 = -3;
	int8_t x734 = 27;
	int8_t x735 = INT8_MAX;
	int32_t x736 = INT32_MIN;

    t178 = ((x733^x734)/(x735!=x736));

    if (t178 != -26) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = -17859348477245LL;
	int16_t x739 = INT16_MAX;
	uint16_t x740 = 14U;
	int64_t t179 = -58242396LL;

    t179 = ((x737^x738)/(x739!=x740));

    if (t179 != 17859348479911LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x742 = 86987;

    t180 = ((x741^x742)/(x743!=x744));

    if (t180 != 86836) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x745 = 924051380202LLU;
	int32_t x746 = 583843177;
	static int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MAX;
	volatile uint64_t t181 = 6838LLU;

    t181 = ((x745^x746)/(x747!=x748));

    if (t181 != 923536304771LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = 11717;
	int16_t x750 = INT16_MIN;
	static int8_t x751 = INT8_MIN;
	volatile int32_t t182 = -1986;

    t182 = ((x749^x750)/(x751!=x752));

    if (t182 != -21051) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x753 = -1LL;
	uint32_t x754 = UINT32_MAX;
	uint16_t x755 = 4003U;
	volatile int16_t x756 = INT16_MAX;
	int64_t t183 = -16865LL;

    t183 = ((x753^x754)/(x755!=x756));

    if (t183 != -4294967296LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x761 = 215560U;
	volatile uint64_t x762 = UINT64_MAX;
	int32_t x763 = INT32_MIN;
	int16_t x764 = INT16_MIN;
	uint64_t t184 = 95991054741944LLU;

    t184 = ((x761^x762)/(x763!=x764));

    if (t184 != 18446744073709336055LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x770 = UINT16_MAX;
	int64_t x771 = -1LL;
	volatile int8_t x772 = INT8_MIN;
	int64_t t185 = 5578LL;

    t185 = ((x769^x770)/(x771!=x772));

    if (t185 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x773 = INT8_MIN;
	uint32_t x774 = 20049U;
	int64_t x775 = -1LL;
	static int64_t x776 = INT64_MIN;

    t186 = ((x773^x774)/(x775!=x776));

    if (t186 != 4294947281U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x777 = INT8_MIN;
	volatile int32_t x778 = INT32_MIN;
	int32_t x780 = INT32_MIN;

    t187 = ((x777^x778)/(x779!=x780));

    if (t187 != 2147483520) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x781 = 2854;
	int32_t x782 = 3100;
	uint16_t x784 = 12U;
	static int32_t t188 = -13;

    t188 = ((x781^x782)/(x783!=x784));

    if (t188 != 1850) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x785 = UINT32_MAX;
	int16_t x786 = INT16_MIN;
	static int16_t x787 = INT16_MAX;
	int16_t x788 = INT16_MIN;

    t189 = ((x785^x786)/(x787!=x788));

    if (t189 != 32767U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x789 = 4U;
	static volatile uint16_t x790 = 128U;
	int16_t x791 = INT16_MAX;
	volatile int8_t x792 = -1;

    t190 = ((x789^x790)/(x791!=x792));

    if (t190 != 132) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x793 = 1;
	int16_t x795 = INT16_MAX;
	int32_t x796 = INT32_MAX;

    t191 = ((x793^x794)/(x795!=x796));

    if (t191 != -3936972) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x797 = INT64_MIN;
	uint8_t x798 = 38U;
	int64_t x799 = -25448157347LL;
	int16_t x800 = INT16_MIN;
	volatile int64_t t192 = 198705466978717LL;

    t192 = ((x797^x798)/(x799!=x800));

    if (t192 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x801 = 7U;
	int8_t x804 = -3;

    t193 = ((x801^x802)/(x803!=x804));

    if (t193 != 195180U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x805 = INT8_MIN;
	int16_t x808 = 1;

    t194 = ((x805^x806)/(x807!=x808));

    if (t194 != -32641) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x809 = INT8_MIN;
	int8_t x810 = -1;
	volatile int64_t x811 = -290247684262165LL;
	int8_t x812 = 2;

    t195 = ((x809^x810)/(x811!=x812));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x813 = 3506LL;
	int16_t x814 = -1;
	static int8_t x815 = INT8_MIN;
	uint16_t x816 = 1U;
	volatile int64_t t196 = -2867632947661154006LL;

    t196 = ((x813^x814)/(x815!=x816));

    if (t196 != -3507LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x817 = -1LL;
	int8_t x818 = INT8_MAX;
	volatile int64_t t197 = 1421751157173670LL;

    t197 = ((x817^x818)/(x819!=x820));

    if (t197 != -128LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x821 = -1LL;
	int32_t x822 = INT32_MIN;
	uint16_t x823 = UINT16_MAX;
	uint8_t x824 = UINT8_MAX;
	volatile int64_t t198 = 1779771LL;

    t198 = ((x821^x822)/(x823!=x824));

    if (t198 != 2147483647LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x825 = INT16_MAX;
	int16_t x826 = 8;
	int32_t x827 = 558;
	uint8_t x828 = UINT8_MAX;

    t199 = ((x825^x826)/(x827!=x828));

    if (t199 != 32759) { NG(); } else { ; }
	
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

