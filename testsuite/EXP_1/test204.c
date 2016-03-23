
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

uint32_t x9 = 101U;
int64_t x13 = -375342042LL;
int16_t x21 = INT16_MIN;
int64_t x40 = -1LL;
volatile int8_t x61 = INT8_MIN;
int32_t t12 = 1;
int16_t x75 = -6;
int32_t t13 = -81152;
static int64_t x77 = INT64_MIN;
uint16_t x94 = 6U;
int16_t x98 = INT16_MIN;
static int32_t t18 = 0;
int8_t x103 = INT8_MIN;
int64_t x104 = 6045360604925212LL;
int32_t x108 = INT32_MIN;
static volatile int64_t x109 = 264946479LL;
static int32_t t22 = 8751;
int8_t x119 = -1;
static int32_t x128 = -15319340;
static volatile uint8_t x129 = UINT8_MAX;
uint8_t x135 = UINT8_MAX;
volatile int32_t x148 = INT32_MAX;
static int32_t t31 = 98;
int8_t x163 = INT8_MIN;
int64_t x164 = -30038LL;
static volatile uint32_t x166 = UINT32_MAX;
int8_t x168 = INT8_MIN;
int32_t t35 = -10370931;
volatile int64_t x180 = -383LL;
int64_t x181 = INT64_MIN;
static int32_t t38 = -6641750;
volatile int8_t x185 = -1;
int32_t x191 = 693148472;
static volatile int64_t x200 = -1LL;
volatile int16_t x206 = INT16_MIN;
static volatile int32_t x215 = -710337436;
int32_t x217 = -1;
int8_t x232 = INT8_MAX;
volatile int8_t x245 = 21;
volatile int64_t x254 = INT64_MIN;
uint8_t x255 = 3U;
static int32_t x268 = 3;
static int32_t t55 = 12619;
volatile uint8_t x281 = 48U;
volatile uint16_t x285 = 27U;
int16_t x286 = -27;
volatile int64_t x289 = -80036002879LL;
volatile uint16_t x291 = UINT16_MAX;
volatile int64_t x292 = -2LL;
uint64_t x296 = UINT64_MAX;
volatile int32_t t60 = -7660;
static volatile int16_t x304 = 108;
int16_t x305 = INT16_MAX;
int64_t x312 = 19191386092LL;
volatile uint64_t x314 = UINT64_MAX;
volatile int32_t t65 = 559219042;
int8_t x324 = INT8_MIN;
int32_t x328 = -242;
volatile int32_t t67 = -49;
static int16_t x333 = -136;
int32_t x334 = -679995;
int16_t x336 = INT16_MIN;
volatile int32_t t69 = 56587;
volatile uint8_t x337 = 1U;
int8_t x339 = INT8_MIN;
volatile int32_t t70 = -816671909;
int16_t x346 = INT16_MIN;
int8_t x347 = 3;
static int8_t x351 = INT8_MIN;
int32_t t73 = 509072934;
uint8_t x357 = UINT8_MAX;
static volatile int32_t t75 = -2906041;
int16_t x370 = -113;
static uint64_t x374 = 118LLU;
int64_t x378 = -1LL;
int32_t x388 = -160109;
uint64_t x390 = UINT64_MAX;
volatile int32_t x392 = INT32_MIN;
uint8_t x398 = 62U;
int8_t x403 = -1;
int8_t x408 = INT8_MIN;
int32_t t83 = 11110;
volatile uint64_t x419 = 396022400376LLU;
uint16_t x420 = 2U;
int32_t x422 = INT32_MAX;
int64_t x423 = -135170631267645775LL;
static int16_t x434 = 6;
uint8_t x436 = 9U;
int32_t t93 = -362591;
static uint16_t x482 = 907U;
static uint8_t x483 = UINT8_MAX;
uint32_t x489 = 1001976359U;
int8_t x491 = -1;
uint64_t x499 = 69077810915926LLU;
static int32_t t98 = 4096535;
static volatile uint32_t x516 = 1621U;
static volatile int32_t t99 = -1;
uint64_t x526 = 2483668928LLU;
int8_t x527 = -1;
volatile int8_t x528 = -6;
uint32_t x536 = 139U;
static uint64_t x540 = 266842LLU;
volatile int32_t t102 = -15;
volatile int32_t x553 = 126017306;
volatile uint32_t x557 = UINT32_MAX;
int64_t x562 = INT64_MIN;
uint64_t x563 = UINT64_MAX;
int32_t x570 = -75876;
int8_t x580 = -24;
int16_t x584 = 114;
static uint8_t x597 = 0U;
static uint16_t x602 = 27313U;
int32_t x609 = -3;
int16_t x610 = INT16_MIN;
int64_t x619 = -1LL;
volatile int16_t x621 = INT16_MIN;
uint64_t x624 = 23919950153564LLU;
int64_t x648 = -1LL;
int16_t x652 = -98;
uint8_t x653 = 1U;
volatile int16_t x659 = INT16_MIN;
static int8_t x660 = INT8_MAX;
static volatile int32_t x669 = -1;
int32_t t131 = -6628121;
volatile int32_t x683 = INT32_MIN;
int64_t x684 = -62943LL;
uint8_t x697 = 3U;
int8_t x700 = INT8_MIN;
int32_t t136 = -17;
uint8_t x703 = UINT8_MAX;
static int32_t t138 = -1;
int64_t x719 = -9216828880771LL;
static int64_t x720 = INT64_MIN;
int16_t x731 = INT16_MIN;
int32_t x735 = 225;
int32_t x741 = -422;
int32_t x749 = -1;
int16_t x753 = INT16_MAX;
volatile int8_t x754 = INT8_MAX;
int32_t x766 = 99585359;
static int32_t x767 = 8084;
int32_t x769 = INT32_MIN;
uint64_t x770 = 48324814896LLU;
static int32_t x772 = INT32_MAX;
int32_t t155 = 2581257;
int64_t x800 = -1LL;
static int8_t x801 = 1;
static uint8_t x807 = 5U;
static int32_t x808 = -3;
uint8_t x812 = UINT8_MAX;
volatile int32_t x837 = -181040585;
volatile int32_t x847 = INT32_MAX;
int32_t t168 = 11732407;
int32_t t170 = -5393;
int32_t t171 = 26;
volatile int64_t x862 = 7350519859LL;
uint32_t x865 = 103928865U;
int8_t x868 = INT8_MIN;
static volatile int32_t t173 = -1752;
uint16_t x869 = 121U;
int64_t x870 = -1LL;
int64_t x872 = -1041073530513571LL;
static uint64_t x873 = 3LLU;
int64_t x875 = INT64_MIN;
uint32_t x879 = 14U;
volatile int32_t t176 = -929857;
int32_t x881 = -1;
uint8_t x888 = UINT8_MAX;
int32_t t180 = 10;
uint8_t x904 = 10U;
int16_t x923 = INT16_MAX;
volatile int32_t t185 = 16;
int8_t x925 = -14;
static int64_t x938 = -1LL;
volatile int32_t t188 = 75;
uint64_t x946 = 3497027230613LLU;
int8_t x947 = INT8_MAX;
static volatile int16_t x950 = INT16_MAX;
int64_t x954 = -1LL;
volatile int8_t x960 = -1;
volatile int32_t t193 = -1876423;
int32_t x964 = -5257174;
uint64_t x979 = 458LLU;
uint64_t x980 = 264863943LLU;
int32_t t198 = 3;
int32_t x988 = -1;


void f0(void) {
    	static uint32_t x1 = 36U;
	int32_t x2 = 1;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 5U;
	volatile int32_t t0 = -96305;

    t0 = (((x1-x2)+x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	uint64_t x6 = 1956381LLU;
	static uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -2;

    t1 = (((x5-x6)+x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 11772198LLU;
	int64_t x11 = -1LL;
	uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -78;

    t2 = (((x9-x10)+x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 14672;

    t3 = (((x13-x14)+x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x22 = 2LLU;
	volatile int64_t x23 = -1LL;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 42611130;

    t4 = (((x21-x22)+x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = UINT32_MAX;
	static uint8_t x26 = UINT8_MAX;
	int64_t x27 = -89142997144LL;
	uint8_t x28 = UINT8_MAX;
	int32_t t5 = -1;

    t5 = (((x25-x26)+x27)==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 12U;
	volatile int8_t x30 = -1;
	int32_t x31 = INT32_MAX;
	static int32_t x32 = INT32_MIN;
	int32_t t6 = 3;

    t6 = (((x29-x30)+x31)==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MIN;
	static uint8_t x34 = 113U;
	int8_t x35 = 8;
	int64_t x36 = INT64_MIN;
	volatile int32_t t7 = -1276;

    t7 = (((x33-x34)+x35)==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = UINT64_MAX;
	static int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	int32_t t8 = -21895;

    t8 = (((x37-x38)+x39)==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x53 = -28;
	static int8_t x54 = INT8_MIN;
	uint64_t x55 = 348298810LLU;
	static volatile uint64_t x56 = 506061539192251384LLU;
	volatile int32_t t9 = 912784;

    t9 = (((x53-x54)+x55)==x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x62 = -1;
	static uint16_t x63 = UINT16_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	int32_t t10 = 14;

    t10 = (((x61-x62)+x63)==x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x65 = -53;
	uint64_t x66 = 38583629988LLU;
	static uint64_t x67 = UINT64_MAX;
	volatile int64_t x68 = INT64_MIN;
	int32_t t11 = 39471117;

    t11 = (((x65-x66)+x67)==x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = 34U;
	int16_t x71 = -1;
	int16_t x72 = INT16_MIN;

    t12 = (((x69-x70)+x71)==x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x73 = 1U;
	int8_t x74 = 0;
	int64_t x76 = INT64_MIN;

    t13 = (((x73-x74)+x75)==x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t14 = 119406;

    t14 = (((x77-x78)+x79)==x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = -1;
	uint64_t x82 = 0LLU;
	uint32_t x83 = 8050U;
	uint32_t x84 = UINT32_MAX;
	int32_t t15 = -1826;

    t15 = (((x81-x82)+x83)==x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x85 = 19U;
	volatile int8_t x86 = 0;
	int8_t x87 = INT8_MIN;
	static uint64_t x88 = 100714682LLU;
	static volatile int32_t t16 = 14809139;

    t16 = (((x85-x86)+x87)==x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x93 = 85U;
	int64_t x95 = 13967559480004LL;
	int64_t x96 = INT64_MIN;
	volatile int32_t t17 = 3;

    t17 = (((x93-x94)+x95)==x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x97 = 0;
	static volatile int64_t x99 = INT64_MIN;
	int8_t x100 = -1;

    t18 = (((x97-x98)+x99)==x100);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MAX;
	static int32_t t19 = -61549;

    t19 = (((x101-x102)+x103)==x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x105 = 78;
	static uint64_t x106 = UINT64_MAX;
	volatile int32_t x107 = INT32_MIN;
	volatile int32_t t20 = 4602;

    t20 = (((x105-x106)+x107)==x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = INT8_MAX;
	int32_t x111 = 96147915;
	int16_t x112 = INT16_MIN;
	static int32_t t21 = 12148;

    t21 = (((x109-x110)+x111)==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = -1;
	int32_t x114 = 107758855;
	static uint8_t x115 = UINT8_MAX;
	static int8_t x116 = 3;

    t22 = (((x113-x114)+x115)==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x117 = INT64_MIN;
	volatile int16_t x118 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t23 = -119;

    t23 = (((x117-x118)+x119)==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x121 = -1;
	volatile int8_t x122 = INT8_MAX;
	int8_t x123 = -1;
	int16_t x124 = -1;
	int32_t t24 = -123;

    t24 = (((x121-x122)+x123)==x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x125 = INT8_MIN;
	volatile int64_t x126 = 2937776LL;
	int32_t x127 = -49;
	volatile int32_t t25 = -33929399;

    t25 = (((x125-x126)+x127)==x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x130 = 35278044936460148LLU;
	volatile int64_t x131 = INT64_MIN;
	int32_t x132 = -11;
	int32_t t26 = 0;

    t26 = (((x129-x130)+x131)==x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x133 = 123866087U;
	static int8_t x134 = -11;
	volatile int8_t x136 = -1;
	volatile int32_t t27 = -1;

    t27 = (((x133-x134)+x135)==x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x137 = 2708643;
	static uint16_t x138 = 162U;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = -1LL;
	static volatile int32_t t28 = 1014449;

    t28 = (((x137-x138)+x139)==x140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x141 = INT16_MIN;
	volatile int16_t x142 = -75;
	int8_t x143 = -1;
	int16_t x144 = -21;
	volatile int32_t t29 = -3423;

    t29 = (((x141-x142)+x143)==x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x145 = UINT16_MAX;
	int64_t x146 = INT64_MAX;
	int16_t x147 = 3;
	int32_t t30 = 41159633;

    t30 = (((x145-x146)+x147)==x148);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x149 = UINT64_MAX;
	static int16_t x150 = INT16_MIN;
	static int8_t x151 = -11;
	int16_t x152 = INT16_MIN;

    t31 = (((x149-x150)+x151)==x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x153 = -1;
	int8_t x154 = INT8_MIN;
	static int64_t x155 = 505237161LL;
	volatile uint64_t x156 = 452140LLU;
	volatile int32_t t32 = -268787;

    t32 = (((x153-x154)+x155)==x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x157 = UINT8_MAX;
	static uint64_t x158 = 3766951467867LLU;
	int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	volatile int32_t t33 = -738643;

    t33 = (((x157-x158)+x159)==x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = INT32_MAX;
	uint32_t x162 = UINT32_MAX;
	volatile int32_t t34 = -202;

    t34 = (((x161-x162)+x163)==x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = 34524683394081095LL;
	static int64_t x167 = 467LL;

    t35 = (((x165-x166)+x167)==x168);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x173 = -1;
	static uint32_t x174 = 3U;
	int32_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t36 = -45892;

    t36 = (((x173-x174)+x175)==x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x177 = 1184U;
	volatile int32_t x178 = INT32_MIN;
	int16_t x179 = -12;
	volatile int32_t t37 = -4330173;

    t37 = (((x177-x178)+x179)==x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x182 = 28LLU;
	int16_t x183 = -1;
	int32_t x184 = 2155;

    t38 = (((x181-x182)+x183)==x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x186 = 3U;
	uint32_t x187 = UINT32_MAX;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t39 = 1;

    t39 = (((x185-x186)+x187)==x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x189 = 8382;
	int16_t x190 = -3034;
	volatile int32_t x192 = 28;
	volatile int32_t t40 = 23;

    t40 = (((x189-x190)+x191)==x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = -1;
	uint64_t x198 = 52670987961463LLU;
	uint64_t x199 = UINT64_MAX;
	static volatile int32_t t41 = 51900;

    t41 = (((x197-x198)+x199)==x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x205 = 1240649639094LLU;
	int32_t x207 = -511;
	volatile uint16_t x208 = UINT16_MAX;
	static int32_t t42 = -376;

    t42 = (((x205-x206)+x207)==x208);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x209 = INT16_MAX;
	int64_t x210 = 7767542LL;
	int8_t x211 = 40;
	volatile int8_t x212 = -51;
	volatile int32_t t43 = -767132130;

    t43 = (((x209-x210)+x211)==x212);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x213 = 664U;
	volatile uint16_t x214 = UINT16_MAX;
	int64_t x216 = 29262592533LL;
	int32_t t44 = -1123251;

    t44 = (((x213-x214)+x215)==x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x218 = INT64_MIN;
	volatile int32_t x219 = -1;
	uint32_t x220 = 57363U;
	int32_t t45 = 121;

    t45 = (((x217-x218)+x219)==x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = -7202628;
	uint32_t x222 = 10950648U;
	static uint8_t x223 = UINT8_MAX;
	int8_t x224 = INT8_MAX;
	int32_t t46 = 4894145;

    t46 = (((x221-x222)+x223)==x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x229 = UINT32_MAX;
	uint64_t x230 = UINT64_MAX;
	static volatile uint16_t x231 = 2U;
	static volatile int32_t t47 = 120;

    t47 = (((x229-x230)+x231)==x232);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x233 = 1874702580LLU;
	static int64_t x234 = INT64_MAX;
	static volatile uint64_t x235 = 2473LLU;
	static int8_t x236 = -62;
	int32_t t48 = 92;

    t48 = (((x233-x234)+x235)==x236);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x241 = UINT32_MAX;
	volatile int16_t x242 = -1;
	static volatile int16_t x243 = INT16_MIN;
	uint8_t x244 = UINT8_MAX;
	static volatile int32_t t49 = 36;

    t49 = (((x241-x242)+x243)==x244);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x246 = -15359389;
	static int32_t x247 = 3;
	int32_t x248 = -934;
	volatile int32_t t50 = -1604;

    t50 = (((x245-x246)+x247)==x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = -1;
	static uint64_t x250 = 871070382441574LLU;
	int8_t x251 = INT8_MIN;
	static volatile int64_t x252 = INT64_MIN;
	volatile int32_t t51 = 1990219;

    t51 = (((x249-x250)+x251)==x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x253 = -6;
	int8_t x256 = INT8_MIN;
	int32_t t52 = -43617232;

    t52 = (((x253-x254)+x255)==x256);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x265 = 15397883374860LLU;
	int64_t x266 = -89LL;
	uint16_t x267 = UINT16_MAX;
	int32_t t53 = 84;

    t53 = (((x265-x266)+x267)==x268);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x269 = INT64_MIN;
	int64_t x270 = -1LL;
	int64_t x271 = 3619483164086385537LL;
	volatile int32_t x272 = INT32_MIN;
	int32_t t54 = -1;

    t54 = (((x269-x270)+x271)==x272);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x274 = 964;
	uint8_t x275 = UINT8_MAX;
	static uint64_t x276 = 6LLU;

    t55 = (((x273-x274)+x275)==x276);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x282 = -13464;
	uint16_t x283 = 2U;
	static uint64_t x284 = UINT64_MAX;
	volatile int32_t t56 = 9243981;

    t56 = (((x281-x282)+x283)==x284);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t57 = 139623;

    t57 = (((x285-x286)+x287)==x288);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x290 = -1;
	int32_t t58 = 131;

    t58 = (((x289-x290)+x291)==x292);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x293 = INT64_MIN;
	int64_t x294 = -27341LL;
	volatile uint32_t x295 = 243798425U;
	static int32_t t59 = -495030632;

    t59 = (((x293-x294)+x295)==x296);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x297 = -4635;
	volatile int16_t x298 = 120;
	uint32_t x299 = 986021U;
	static int8_t x300 = INT8_MIN;

    t60 = (((x297-x298)+x299)==x300);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x301 = 1;
	uint64_t x302 = 3188LLU;
	volatile uint8_t x303 = UINT8_MAX;
	static volatile int32_t t61 = -115;

    t61 = (((x301-x302)+x303)==x304);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x306 = 401U;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t62 = -84;

    t62 = (((x305-x306)+x307)==x308);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = INT16_MIN;
	uint8_t x310 = 101U;
	int32_t x311 = INT32_MAX;
	volatile int32_t t63 = -1;

    t63 = (((x309-x310)+x311)==x312);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x313 = 3U;
	int32_t x315 = -197260416;
	int32_t x316 = 15621091;
	int32_t t64 = 1091;

    t64 = (((x313-x314)+x315)==x316);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x317 = 51U;
	int32_t x318 = -1;
	uint8_t x319 = 11U;
	volatile int8_t x320 = INT8_MAX;

    t65 = (((x317-x318)+x319)==x320);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x321 = INT16_MIN;
	uint32_t x322 = 2U;
	int8_t x323 = INT8_MIN;
	int32_t t66 = 16522070;

    t66 = (((x321-x322)+x323)==x324);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x325 = UINT32_MAX;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 4127904LLU;

    t67 = (((x325-x326)+x327)==x328);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x329 = 32U;
	volatile int64_t x330 = 153474824232031536LL;
	volatile uint8_t x331 = 0U;
	int8_t x332 = -1;
	volatile int32_t t68 = 176616;

    t68 = (((x329-x330)+x331)==x332);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x335 = UINT16_MAX;

    t69 = (((x333-x334)+x335)==x336);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x338 = INT8_MIN;
	int16_t x340 = -232;

    t70 = (((x337-x338)+x339)==x340);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x345 = 0;
	volatile int8_t x348 = -1;
	static int32_t t71 = 95;

    t71 = (((x345-x346)+x347)==x348);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x349 = INT32_MIN;
	static int64_t x350 = 11059603811LL;
	uint32_t x352 = 1369U;
	volatile int32_t t72 = -245;

    t72 = (((x349-x350)+x351)==x352);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x353 = 0;
	int8_t x354 = INT8_MIN;
	uint32_t x355 = 347U;
	uint16_t x356 = 20976U;

    t73 = (((x353-x354)+x355)==x356);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x358 = INT64_MAX;
	volatile int16_t x359 = 0;
	volatile uint32_t x360 = 30U;
	volatile int32_t t74 = 987267662;

    t74 = (((x357-x358)+x359)==x360);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x361 = -1LL;
	uint32_t x362 = 302535U;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;

    t75 = (((x361-x362)+x363)==x364);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x369 = 430679281LL;
	static volatile uint32_t x371 = UINT32_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t76 = -434027896;

    t76 = (((x369-x370)+x371)==x372);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x373 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	int8_t x376 = 0;
	int32_t t77 = 1;

    t77 = (((x373-x374)+x375)==x376);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x377 = 15010464U;
	volatile uint64_t x379 = UINT64_MAX;
	static int64_t x380 = -2678LL;
	volatile int32_t t78 = 878440;

    t78 = (((x377-x378)+x379)==x380);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x385 = 0;
	int32_t x386 = -2;
	uint16_t x387 = 17800U;
	int32_t t79 = 8364849;

    t79 = (((x385-x386)+x387)==x388);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x389 = 1;
	int32_t x391 = -7;
	int32_t t80 = -1;

    t80 = (((x389-x390)+x391)==x392);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x399 = 2;
	int16_t x400 = INT16_MIN;
	volatile int32_t t81 = 10;

    t81 = (((x397-x398)+x399)==x400);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x401 = 75LL;
	volatile uint16_t x402 = 24767U;
	volatile int64_t x404 = -1LL;
	int32_t t82 = -250443404;

    t82 = (((x401-x402)+x403)==x404);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x405 = UINT64_MAX;
	static int16_t x406 = 1;
	int32_t x407 = -1;

    t83 = (((x405-x406)+x407)==x408);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x413 = UINT32_MAX;
	int32_t x414 = 23177965;
	static volatile int16_t x415 = INT16_MIN;
	volatile uint16_t x416 = 66U;
	volatile int32_t t84 = -3363;

    t84 = (((x413-x414)+x415)==x416);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x417 = 124748581;
	volatile int16_t x418 = INT16_MAX;
	static int32_t t85 = 1627845;

    t85 = (((x417-x418)+x419)==x420);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x421 = 3044;
	uint32_t x424 = 6U;
	static volatile int32_t t86 = 1714;

    t86 = (((x421-x422)+x423)==x424);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x429 = -89187LL;
	int16_t x430 = -1;
	uint64_t x431 = 6175488379470730LLU;
	static volatile int8_t x432 = 1;
	volatile int32_t t87 = 9271076;

    t87 = (((x429-x430)+x431)==x432);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x433 = 193971748U;
	uint32_t x435 = 219233464U;
	int32_t t88 = -5743;

    t88 = (((x433-x434)+x435)==x436);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x437 = UINT16_MAX;
	uint16_t x438 = UINT16_MAX;
	int32_t x439 = -96;
	uint64_t x440 = 3LLU;
	static volatile int32_t t89 = 12092;

    t89 = (((x437-x438)+x439)==x440);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	int16_t x443 = -59;
	int8_t x444 = 2;
	int32_t t90 = 1947;

    t90 = (((x441-x442)+x443)==x444);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint8_t x461 = 66U;
	volatile uint16_t x462 = 13U;
	int8_t x463 = 1;
	int64_t x464 = -81399682275509LL;
	int32_t t91 = -81413920;

    t91 = (((x461-x462)+x463)==x464);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x465 = 13466LLU;
	uint16_t x466 = 0U;
	static int8_t x467 = -4;
	int16_t x468 = INT16_MAX;
	volatile int32_t t92 = -1008;

    t92 = (((x465-x466)+x467)==x468);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x477 = 4210896570607945LLU;
	int64_t x478 = -1LL;
	volatile int32_t x479 = -1;
	static int8_t x480 = -1;

    t93 = (((x477-x478)+x479)==x480);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x481 = UINT16_MAX;
	static volatile int8_t x484 = INT8_MIN;
	volatile int32_t t94 = 4219027;

    t94 = (((x481-x482)+x483)==x484);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x485 = INT64_MAX;
	volatile uint32_t x486 = UINT32_MAX;
	volatile uint64_t x487 = 246678297747LLU;
	static int32_t x488 = 2;
	static volatile int32_t t95 = -1;

    t95 = (((x485-x486)+x487)==x488);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x490 = 1521LLU;
	volatile int64_t x492 = INT64_MIN;
	int32_t t96 = -7;

    t96 = (((x489-x490)+x491)==x492);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x497 = 56919474LL;
	volatile uint8_t x498 = UINT8_MAX;
	int32_t x500 = -1;
	volatile int32_t t97 = 420313;

    t97 = (((x497-x498)+x499)==x500);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x505 = UINT8_MAX;
	volatile uint16_t x506 = 8U;
	int8_t x507 = 1;
	int64_t x508 = INT64_MIN;

    t98 = (((x505-x506)+x507)==x508);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x513 = UINT16_MAX;
	static uint16_t x514 = UINT16_MAX;
	static uint64_t x515 = 81757478066821063LLU;

    t99 = (((x513-x514)+x515)==x516);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x525 = 1U;
	int32_t t100 = 11;

    t100 = (((x525-x526)+x527)==x528);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x533 = -1LL;
	int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MAX;
	volatile int32_t t101 = -242402322;

    t101 = (((x533-x534)+x535)==x536);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x537 = 1;
	uint32_t x538 = 167355U;
	static int32_t x539 = INT32_MIN;

    t102 = (((x537-x538)+x539)==x540);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x541 = -1;
	int32_t x542 = 105839;
	int32_t x543 = -1;
	static int8_t x544 = INT8_MAX;
	volatile int32_t t103 = -12244;

    t103 = (((x541-x542)+x543)==x544);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x545 = -260143;
	static uint16_t x546 = 22U;
	uint64_t x547 = 57LLU;
	static uint64_t x548 = 804159522490LLU;
	static volatile int32_t t104 = 3197772;

    t104 = (((x545-x546)+x547)==x548);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x549 = INT16_MIN;
	volatile int16_t x550 = -423;
	static uint16_t x551 = 10U;
	int32_t x552 = -216576;
	int32_t t105 = -7513;

    t105 = (((x549-x550)+x551)==x552);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x554 = 0LL;
	uint64_t x555 = 453361270029LLU;
	int64_t x556 = 1LL;
	static volatile int32_t t106 = 67236720;

    t106 = (((x553-x554)+x555)==x556);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x558 = -555;
	uint8_t x559 = 2U;
	int64_t x560 = INT64_MAX;
	volatile int32_t t107 = -10527898;

    t107 = (((x557-x558)+x559)==x560);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x561 = -1;
	int16_t x564 = INT16_MAX;
	volatile int32_t t108 = 263;

    t108 = (((x561-x562)+x563)==x564);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x569 = -1;
	int32_t x571 = INT32_MIN;
	volatile int64_t x572 = INT64_MIN;
	int32_t t109 = 0;

    t109 = (((x569-x570)+x571)==x572);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x577 = 299807466600108990LLU;
	uint32_t x578 = 1204745U;
	int16_t x579 = -9;
	int32_t t110 = -58;

    t110 = (((x577-x578)+x579)==x580);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x581 = -1;
	volatile uint64_t x582 = 6LLU;
	volatile int64_t x583 = -8880206209LL;
	int32_t t111 = 2;

    t111 = (((x581-x582)+x583)==x584);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x585 = -1LL;
	static uint64_t x586 = UINT64_MAX;
	static int8_t x587 = 1;
	int8_t x588 = -4;
	static volatile int32_t t112 = 2399;

    t112 = (((x585-x586)+x587)==x588);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x593 = 5;
	int16_t x594 = INT16_MIN;
	uint32_t x595 = UINT32_MAX;
	static int64_t x596 = INT64_MIN;
	volatile int32_t t113 = 0;

    t113 = (((x593-x594)+x595)==x596);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x598 = -1;
	int64_t x599 = 3LL;
	int16_t x600 = 190;
	int32_t t114 = -11896141;

    t114 = (((x597-x598)+x599)==x600);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x601 = 208554U;
	static uint16_t x603 = 0U;
	static int8_t x604 = INT8_MAX;
	volatile int32_t t115 = 31475;

    t115 = (((x601-x602)+x603)==x604);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x605 = INT8_MIN;
	int16_t x606 = -22;
	int16_t x607 = INT16_MAX;
	uint64_t x608 = 1885566289982170LLU;
	volatile int32_t t116 = -229;

    t116 = (((x605-x606)+x607)==x608);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x611 = INT8_MIN;
	int32_t x612 = -1;
	volatile int32_t t117 = 1;

    t117 = (((x609-x610)+x611)==x612);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x613 = -30924490142100LL;
	volatile int64_t x614 = 85181688873LL;
	uint32_t x615 = 37U;
	int64_t x616 = 918LL;
	static volatile int32_t t118 = 11056;

    t118 = (((x613-x614)+x615)==x616);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x617 = INT8_MIN;
	int16_t x618 = INT16_MIN;
	int64_t x620 = INT64_MIN;
	static int32_t t119 = -123065668;

    t119 = (((x617-x618)+x619)==x620);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x622 = INT16_MIN;
	volatile int32_t x623 = INT32_MAX;
	volatile int32_t t120 = 219673384;

    t120 = (((x621-x622)+x623)==x624);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x625 = 2U;
	int32_t x626 = -87277518;
	int8_t x627 = INT8_MAX;
	static int32_t x628 = INT32_MIN;
	volatile int32_t t121 = 24099565;

    t121 = (((x625-x626)+x627)==x628);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x629 = -1;
	static int64_t x630 = 243717525712155335LL;
	volatile int32_t x631 = -494660944;
	int8_t x632 = INT8_MIN;
	static volatile int32_t t122 = 491860;

    t122 = (((x629-x630)+x631)==x632);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x633 = INT16_MIN;
	volatile int32_t x634 = -252640;
	static uint16_t x635 = UINT16_MAX;
	static int8_t x636 = -1;
	int32_t t123 = -109738;

    t123 = (((x633-x634)+x635)==x636);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x641 = 20895555567LL;
	volatile int8_t x642 = INT8_MIN;
	volatile int32_t x643 = -1;
	int32_t x644 = -1;
	int32_t t124 = -320;

    t124 = (((x641-x642)+x643)==x644);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x645 = 2U;
	uint32_t x646 = 4220493U;
	int8_t x647 = INT8_MIN;
	static volatile int32_t t125 = -1;

    t125 = (((x645-x646)+x647)==x648);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x649 = 254629151126064LLU;
	int32_t x650 = 5;
	static int16_t x651 = 12941;
	volatile int32_t t126 = -118843;

    t126 = (((x649-x650)+x651)==x652);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x654 = 597992220468613411LLU;
	int16_t x655 = INT16_MAX;
	int8_t x656 = -1;
	int32_t t127 = 5;

    t127 = (((x653-x654)+x655)==x656);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x657 = 91144267U;
	uint16_t x658 = 4U;
	static int32_t t128 = 1141;

    t128 = (((x657-x658)+x659)==x660);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MAX;
	volatile int64_t x667 = INT64_MAX;
	static volatile int16_t x668 = INT16_MIN;
	volatile int32_t t129 = 754011;

    t129 = (((x665-x666)+x667)==x668);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x670 = -10;
	static volatile int16_t x671 = INT16_MIN;
	uint64_t x672 = UINT64_MAX;
	int32_t t130 = 531;

    t130 = (((x669-x670)+x671)==x672);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x673 = INT8_MIN;
	volatile int64_t x674 = INT64_MIN;
	int16_t x675 = INT16_MIN;
	uint8_t x676 = 18U;

    t131 = (((x673-x674)+x675)==x676);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x677 = INT16_MIN;
	int16_t x678 = 1;
	int64_t x679 = -1LL;
	int16_t x680 = 101;
	volatile int32_t t132 = 19;

    t132 = (((x677-x678)+x679)==x680);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x681 = 214U;
	static int16_t x682 = -1;
	volatile int32_t t133 = 734546;

    t133 = (((x681-x682)+x683)==x684);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x685 = UINT16_MAX;
	uint8_t x686 = 0U;
	int32_t x687 = INT32_MIN;
	uint64_t x688 = 10LLU;
	static volatile int32_t t134 = 17541;

    t134 = (((x685-x686)+x687)==x688);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x693 = INT8_MIN;
	volatile uint16_t x694 = 3151U;
	uint64_t x695 = 3748LLU;
	int16_t x696 = INT16_MIN;
	int32_t t135 = -47181;

    t135 = (((x693-x694)+x695)==x696);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x698 = 514594790391789940LLU;
	volatile int64_t x699 = INT64_MIN;

    t136 = (((x697-x698)+x699)==x700);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x701 = 9041967U;
	static int64_t x702 = -39681870474961079LL;
	volatile uint64_t x704 = UINT64_MAX;
	volatile int32_t t137 = -57097;

    t137 = (((x701-x702)+x703)==x704);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x705 = INT8_MIN;
	static int32_t x706 = INT32_MIN;
	int32_t x707 = INT32_MIN;
	int16_t x708 = -1;

    t138 = (((x705-x706)+x707)==x708);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x717 = INT16_MIN;
	int64_t x718 = INT64_MIN;
	int32_t t139 = -1030663;

    t139 = (((x717-x718)+x719)==x720);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x721 = 0;
	int16_t x722 = INT16_MIN;
	static uint8_t x723 = 0U;
	uint32_t x724 = 1878497U;
	volatile int32_t t140 = -3128;

    t140 = (((x721-x722)+x723)==x724);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x725 = -1;
	int64_t x726 = 329655611006509825LL;
	int32_t x727 = -1;
	int64_t x728 = INT64_MIN;
	volatile int32_t t141 = 1905523;

    t141 = (((x725-x726)+x727)==x728);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x729 = INT8_MIN;
	uint32_t x730 = 769U;
	volatile int16_t x732 = 4;
	static int32_t t142 = 14915;

    t142 = (((x729-x730)+x731)==x732);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x733 = -1;
	int64_t x734 = -3414769639277892140LL;
	int8_t x736 = INT8_MIN;
	int32_t t143 = -94;

    t143 = (((x733-x734)+x735)==x736);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x742 = INT16_MIN;
	uint32_t x743 = 15017806U;
	int32_t x744 = -717778;
	volatile int32_t t144 = -6419;

    t144 = (((x741-x742)+x743)==x744);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x745 = 62U;
	volatile int32_t x746 = -17656990;
	volatile int64_t x747 = INT64_MIN;
	int64_t x748 = INT64_MIN;
	int32_t t145 = 7931314;

    t145 = (((x745-x746)+x747)==x748);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x750 = INT8_MAX;
	uint32_t x751 = UINT32_MAX;
	volatile int16_t x752 = INT16_MIN;
	static volatile int32_t t146 = -12;

    t146 = (((x749-x750)+x751)==x752);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x755 = INT32_MIN;
	int64_t x756 = 2193LL;
	volatile int32_t t147 = 1;

    t147 = (((x753-x754)+x755)==x756);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x757 = -3;
	int8_t x758 = INT8_MIN;
	int8_t x759 = 1;
	int64_t x760 = INT64_MIN;
	int32_t t148 = -1;

    t148 = (((x757-x758)+x759)==x760);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x761 = INT8_MIN;
	volatile int8_t x762 = -60;
	volatile int64_t x763 = INT64_MAX;
	static volatile int64_t x764 = INT64_MAX;
	int32_t t149 = 1038398341;

    t149 = (((x761-x762)+x763)==x764);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x765 = 1133239LL;
	volatile uint64_t x768 = 166LLU;
	volatile int32_t t150 = 51245;

    t150 = (((x765-x766)+x767)==x768);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x771 = INT16_MAX;
	volatile int32_t t151 = 875037;

    t151 = (((x769-x770)+x771)==x772);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x773 = 18U;
	static int16_t x774 = 551;
	int8_t x775 = -12;
	uint16_t x776 = 231U;
	int32_t t152 = 18074;

    t152 = (((x773-x774)+x775)==x776);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x777 = 8684;
	uint64_t x778 = 112924LLU;
	uint64_t x779 = 13LLU;
	static volatile int16_t x780 = INT16_MIN;
	volatile int32_t t153 = 6847;

    t153 = (((x777-x778)+x779)==x780);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x785 = 3425476889LLU;
	uint8_t x786 = 3U;
	int32_t x787 = 45990;
	int64_t x788 = 299LL;
	int32_t t154 = -3080228;

    t154 = (((x785-x786)+x787)==x788);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x789 = 33U;
	volatile uint16_t x790 = 0U;
	static int64_t x791 = -18LL;
	uint32_t x792 = 15398493U;

    t155 = (((x789-x790)+x791)==x792);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x793 = 47LLU;
	int64_t x794 = INT64_MAX;
	static uint64_t x795 = 221443LLU;
	static uint64_t x796 = 0LLU;
	int32_t t156 = 8138949;

    t156 = (((x793-x794)+x795)==x796);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile int32_t x798 = -190923877;
	uint8_t x799 = 3U;
	int32_t t157 = 134203879;

    t157 = (((x797-x798)+x799)==x800);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x802 = 17405641014812LL;
	static uint32_t x803 = 824U;
	int64_t x804 = INT64_MIN;
	volatile int32_t t158 = -21;

    t158 = (((x801-x802)+x803)==x804);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x805 = -1LL;
	static uint16_t x806 = 19U;
	volatile int32_t t159 = 3112;

    t159 = (((x805-x806)+x807)==x808);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x809 = 3294197904514LLU;
	static uint16_t x810 = 15871U;
	volatile int64_t x811 = 12879LL;
	volatile int32_t t160 = -176;

    t160 = (((x809-x810)+x811)==x812);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x813 = 1U;
	uint16_t x814 = UINT16_MAX;
	int8_t x815 = INT8_MAX;
	volatile uint64_t x816 = 1825LLU;
	volatile int32_t t161 = -16;

    t161 = (((x813-x814)+x815)==x816);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x817 = 3U;
	static int64_t x818 = -1LL;
	uint64_t x819 = UINT64_MAX;
	uint8_t x820 = 8U;
	int32_t t162 = -236;

    t162 = (((x817-x818)+x819)==x820);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x825 = INT8_MIN;
	static int8_t x826 = 0;
	volatile uint8_t x827 = 0U;
	int8_t x828 = 0;
	volatile int32_t t163 = -2750;

    t163 = (((x825-x826)+x827)==x828);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x829 = INT8_MIN;
	static volatile int16_t x830 = 117;
	int16_t x831 = INT16_MIN;
	int8_t x832 = -1;
	volatile int32_t t164 = -1;

    t164 = (((x829-x830)+x831)==x832);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x833 = INT16_MAX;
	uint64_t x834 = 158260704LLU;
	volatile uint32_t x835 = 20115U;
	uint32_t x836 = UINT32_MAX;
	int32_t t165 = 181871417;

    t165 = (((x833-x834)+x835)==x836);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x838 = INT8_MAX;
	static int64_t x839 = 132276LL;
	int16_t x840 = -1;
	int32_t t166 = -28306;

    t166 = (((x837-x838)+x839)==x840);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x841 = 16416203609LL;
	static int32_t x842 = INT32_MIN;
	uint16_t x843 = 3799U;
	int16_t x844 = INT16_MIN;
	int32_t t167 = 13677662;

    t167 = (((x841-x842)+x843)==x844);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x845 = 11514U;
	int32_t x846 = 143295;
	int8_t x848 = INT8_MAX;

    t168 = (((x845-x846)+x847)==x848);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x849 = UINT16_MAX;
	uint8_t x850 = 38U;
	int64_t x851 = 98496304454391978LL;
	volatile int32_t x852 = -1;
	int32_t t169 = -5;

    t169 = (((x849-x850)+x851)==x852);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x853 = 94;
	uint16_t x854 = 0U;
	uint64_t x855 = UINT64_MAX;
	static uint8_t x856 = UINT8_MAX;

    t170 = (((x853-x854)+x855)==x856);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x857 = INT32_MIN;
	volatile uint32_t x858 = 2385U;
	uint8_t x859 = 122U;
	static int16_t x860 = INT16_MIN;

    t171 = (((x857-x858)+x859)==x860);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x861 = INT16_MAX;
	uint64_t x863 = 54385266LLU;
	int8_t x864 = INT8_MIN;
	int32_t t172 = -857576168;

    t172 = (((x861-x862)+x863)==x864);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x866 = INT32_MAX;
	volatile uint32_t x867 = 605U;

    t173 = (((x865-x866)+x867)==x868);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x871 = INT64_MIN;
	volatile int32_t t174 = -240423;

    t174 = (((x869-x870)+x871)==x872);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x874 = INT32_MIN;
	int8_t x876 = INT8_MIN;
	volatile int32_t t175 = -72093989;

    t175 = (((x873-x874)+x875)==x876);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x877 = UINT32_MAX;
	int8_t x878 = -1;
	int8_t x880 = INT8_MIN;

    t176 = (((x877-x878)+x879)==x880);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x882 = INT8_MIN;
	uint16_t x883 = UINT16_MAX;
	int32_t x884 = INT32_MIN;
	int32_t t177 = -142;

    t177 = (((x881-x882)+x883)==x884);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x885 = UINT64_MAX;
	volatile int8_t x886 = INT8_MIN;
	int64_t x887 = INT64_MAX;
	int32_t t178 = 5;

    t178 = (((x885-x886)+x887)==x888);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x889 = -1LL;
	int16_t x890 = INT16_MIN;
	static int64_t x891 = -27470016045LL;
	static uint16_t x892 = 24U;
	volatile int32_t t179 = 1637;

    t179 = (((x889-x890)+x891)==x892);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x897 = INT8_MIN;
	int16_t x898 = 0;
	volatile uint64_t x899 = 4273LLU;
	int8_t x900 = INT8_MAX;

    t180 = (((x897-x898)+x899)==x900);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x901 = 35078819242447511LL;
	uint16_t x902 = UINT16_MAX;
	uint16_t x903 = 324U;
	volatile int32_t t181 = 25516;

    t181 = (((x901-x902)+x903)==x904);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x905 = UINT64_MAX;
	int64_t x906 = 23LL;
	int32_t x907 = INT32_MAX;
	int8_t x908 = INT8_MAX;
	volatile int32_t t182 = 325;

    t182 = (((x905-x906)+x907)==x908);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x913 = -1;
	int16_t x914 = -1;
	static uint16_t x915 = 23U;
	static int32_t x916 = INT32_MIN;
	int32_t t183 = -23477207;

    t183 = (((x913-x914)+x915)==x916);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x917 = INT64_MAX;
	uint32_t x918 = 1969755U;
	volatile int32_t x919 = -1;
	int8_t x920 = 8;
	int32_t t184 = 921908905;

    t184 = (((x917-x918)+x919)==x920);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x921 = -80;
	int16_t x922 = 898;
	volatile uint16_t x924 = UINT16_MAX;

    t185 = (((x921-x922)+x923)==x924);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x926 = -1;
	static int32_t x927 = 3;
	static int8_t x928 = -4;
	volatile int32_t t186 = 390;

    t186 = (((x925-x926)+x927)==x928);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x929 = -1;
	volatile int8_t x930 = 1;
	static int16_t x931 = 1433;
	int8_t x932 = 2;
	static int32_t t187 = -72804;

    t187 = (((x929-x930)+x931)==x932);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x937 = INT16_MIN;
	uint8_t x939 = 1U;
	int32_t x940 = -97;

    t188 = (((x937-x938)+x939)==x940);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x941 = 3U;
	int32_t x942 = -537;
	int64_t x943 = 2994411396725LL;
	int32_t x944 = INT32_MAX;
	int32_t t189 = 5260167;

    t189 = (((x941-x942)+x943)==x944);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x945 = INT16_MAX;
	int16_t x948 = 464;
	volatile int32_t t190 = -784986;

    t190 = (((x945-x946)+x947)==x948);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x949 = 5870340848315741498LLU;
	int32_t x951 = -1;
	volatile int8_t x952 = -1;
	int32_t t191 = -76841;

    t191 = (((x949-x950)+x951)==x952);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x953 = UINT8_MAX;
	int16_t x955 = -1;
	int16_t x956 = INT16_MIN;
	int32_t t192 = -65836136;

    t192 = (((x953-x954)+x955)==x956);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x957 = -1;
	static uint8_t x958 = UINT8_MAX;
	static int16_t x959 = INT16_MIN;

    t193 = (((x957-x958)+x959)==x960);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x961 = 22U;
	volatile uint64_t x962 = 2448LLU;
	uint64_t x963 = 947LLU;
	volatile int32_t t194 = -67953;

    t194 = (((x961-x962)+x963)==x964);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x969 = 1230U;
	volatile int64_t x970 = 1370LL;
	int32_t x971 = -1;
	int32_t x972 = -1;
	volatile int32_t t195 = 559877;

    t195 = (((x969-x970)+x971)==x972);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x973 = -1;
	volatile uint32_t x974 = 829069U;
	uint16_t x975 = 2675U;
	uint64_t x976 = 252399LLU;
	static volatile int32_t t196 = -10510816;

    t196 = (((x973-x974)+x975)==x976);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x977 = INT32_MIN;
	volatile int32_t x978 = -1;
	int32_t t197 = -5048;

    t197 = (((x977-x978)+x979)==x980);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x981 = 14529LLU;
	static volatile int16_t x982 = 2011;
	volatile int64_t x983 = INT64_MAX;
	static uint32_t x984 = UINT32_MAX;

    t198 = (((x981-x982)+x983)==x984);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x985 = UINT8_MAX;
	uint32_t x986 = 56949U;
	int8_t x987 = INT8_MIN;
	int32_t t199 = 7171158;

    t199 = (((x985-x986)+x987)==x988);

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

