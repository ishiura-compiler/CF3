
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

int32_t x10 = 123480;
int32_t x17 = INT32_MIN;
static int64_t x18 = INT64_MIN;
volatile uint64_t x19 = 99877504062LLU;
uint64_t t2 = 3396826214343285LLU;
int64_t x40 = -4925031003496LL;
volatile int64_t t6 = -924909749897911650LL;
static volatile int8_t x52 = -6;
volatile int8_t x69 = INT8_MAX;
volatile int16_t x73 = 1;
int8_t x78 = 2;
uint64_t x79 = 74LLU;
int64_t t13 = 74515LL;
int8_t x98 = INT8_MIN;
static int8_t x105 = 1;
uint64_t t20 = 2064801553LLU;
volatile uint64_t x122 = UINT64_MAX;
uint64_t x123 = UINT64_MAX;
uint64_t t22 = 50148159LLU;
uint16_t x127 = 4014U;
static volatile uint64_t t23 = 40905635370845194LLU;
int16_t x130 = INT16_MIN;
static int64_t x133 = 1674512683747312461LL;
uint8_t x137 = 5U;
uint64_t x141 = 16504271146322110LLU;
static int8_t x143 = INT8_MIN;
int32_t x158 = -1;
static volatile int16_t x159 = INT16_MAX;
volatile int32_t t30 = 2817;
volatile uint32_t x162 = UINT32_MAX;
static int16_t x163 = INT16_MIN;
volatile uint64_t t31 = 1030682619153LLU;
int64_t x178 = INT64_MIN;
static uint8_t x188 = UINT8_MAX;
int16_t x192 = -1233;
static int64_t t37 = 238167975664440541LL;
volatile uint32_t x193 = 132851726U;
static int32_t x194 = INT32_MIN;
uint16_t x199 = UINT16_MAX;
int64_t t39 = -2047LL;
volatile int8_t x210 = INT8_MAX;
int32_t x212 = 1659;
volatile int64_t x216 = -1LL;
volatile int32_t t44 = 22524958;
uint16_t x228 = 62U;
uint32_t x233 = UINT32_MAX;
uint64_t t48 = 4866270649912LLU;
static volatile uint32_t t49 = 30522872U;
int64_t x245 = -1LL;
int8_t x247 = INT8_MAX;
int8_t x248 = -28;
uint16_t x261 = UINT16_MAX;
volatile int32_t x271 = -8;
volatile int32_t t52 = 7;
volatile uint32_t x280 = UINT32_MAX;
volatile int64_t t53 = -33430530571LL;
int64_t t55 = -3LL;
static int8_t x303 = INT8_MAX;
int64_t x308 = -4728190LL;
volatile int32_t t58 = -55859710;
static int32_t x318 = INT32_MIN;
static uint8_t x319 = 107U;
int64_t t60 = -353LL;
static volatile int16_t x321 = 26;
uint8_t x323 = 5U;
uint16_t x335 = UINT16_MAX;
uint8_t x336 = 58U;
static int16_t x338 = INT16_MIN;
int64_t x341 = INT64_MIN;
int32_t x342 = 35436;
int64_t t66 = -1LL;
uint64_t x346 = UINT64_MAX;
static volatile int8_t x359 = 40;
static uint32_t t72 = 172559989U;
static uint8_t x376 = 1U;
int64_t x393 = INT64_MAX;
static int16_t x412 = -1;
uint16_t x416 = 59U;
uint32_t x417 = UINT32_MAX;
uint64_t x422 = UINT64_MAX;
int16_t x430 = -16;
int64_t t86 = -4LL;
uint16_t x446 = UINT16_MAX;
int8_t x447 = INT8_MIN;
uint32_t x456 = 1297U;
volatile uint8_t x475 = 23U;
int32_t x476 = 780162;
int16_t x484 = -1;
static volatile int64_t x488 = 2896885LL;
int8_t x492 = -1;
int32_t x494 = -1;
int16_t x509 = INT16_MIN;
static uint32_t x511 = 13184U;
uint32_t x514 = 118U;
volatile uint64_t t100 = 16502635895360LLU;
int16_t x517 = -27;
uint8_t x518 = 9U;
volatile int64_t x531 = -500134142192846388LL;
int64_t x533 = -1LL;
uint64_t x537 = 965946LLU;
uint32_t x541 = 9U;
static int32_t x552 = -20840084;
volatile int32_t x559 = INT32_MIN;
int8_t x563 = INT8_MIN;
uint8_t x578 = 22U;
static uint64_t x579 = 216LLU;
int64_t x580 = INT64_MIN;
int8_t x581 = -1;
int64_t x583 = INT64_MIN;
int8_t x593 = INT8_MIN;
uint32_t x595 = UINT32_MAX;
uint8_t x598 = UINT8_MAX;
static int32_t x607 = -653222023;
static volatile uint64_t x621 = 208892976988LLU;
static int8_t x624 = 1;
static uint32_t t125 = 122785532U;
int32_t x646 = INT32_MIN;
static int8_t x648 = 6;
uint64_t t128 = 1791LLU;
int16_t x665 = -3;
int8_t x668 = -1;
uint8_t x672 = UINT8_MAX;
static volatile uint32_t t132 = 8365972U;
int8_t x681 = -1;
int8_t x682 = 3;
volatile int16_t x684 = -453;
volatile uint64_t x692 = 1LLU;
int64_t x695 = 219LL;
int64_t t136 = -90LL;
int16_t x707 = INT16_MIN;
int8_t x716 = INT8_MIN;
int8_t x731 = -1;
int64_t x732 = -1079930LL;
volatile int32_t x734 = -47;
int16_t x736 = INT16_MIN;
volatile int64_t t142 = 3621818264LL;
int8_t x737 = -3;
int16_t x738 = 1;
uint32_t x741 = 227514U;
uint32_t x755 = 85566783U;
uint16_t x756 = UINT16_MAX;
int32_t x759 = -1;
int32_t x773 = INT32_MIN;
static volatile uint32_t t151 = 28170472U;
int8_t x797 = -10;
int8_t x799 = INT8_MAX;
int32_t t153 = 12951907;
static volatile uint64_t t155 = 1742342367160949LLU;
uint8_t x814 = UINT8_MAX;
uint32_t x816 = UINT32_MAX;
volatile int64_t t156 = 353LL;
int32_t x819 = -12331;
uint64_t x820 = UINT64_MAX;
static volatile uint64_t x823 = UINT64_MAX;
static volatile int64_t x831 = INT64_MAX;
uint32_t x833 = 175708U;
uint8_t x841 = UINT8_MAX;
volatile uint64_t x852 = 39142449723035LLU;
int64_t x856 = -3LL;
volatile int8_t x863 = INT8_MAX;
int32_t x873 = -1;
int16_t x885 = -1;
uint8_t x889 = 2U;
volatile int64_t t177 = -8LL;
int8_t x917 = INT8_MIN;
static int64_t x918 = INT64_MAX;
int16_t x920 = INT16_MIN;
volatile int64_t t178 = -32605LL;
int64_t x930 = -903225173187573065LL;
uint32_t x933 = 650918U;
int8_t x935 = 0;
uint32_t t181 = 512240486U;
int8_t x943 = INT8_MIN;
static uint32_t x949 = 2447U;
static uint64_t x953 = 46423613343LLU;
volatile int64_t x954 = INT64_MAX;
int8_t x964 = INT8_MIN;
static int64_t x966 = INT64_MAX;
volatile int64_t t188 = 14998LL;
uint64_t x973 = UINT64_MAX;
int64_t x974 = INT64_MIN;
uint8_t x975 = UINT8_MAX;
uint64_t x983 = 254976LLU;
uint64_t t193 = 4902242352989422018LLU;
volatile uint16_t x991 = 57U;


void f0(void) {
    	int32_t x5 = 195259437;
	static int8_t x6 = INT8_MIN;
	uint8_t x7 = 7U;
	uint16_t x8 = 0U;
	int32_t t0 = -2739230;

    t0 = (x5+(x6%(x7-x8)));

    if (t0 != 195259435) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x9 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	volatile uint64_t t1 = 55269517491816777LLU;

    t1 = (x9+(x10%(x11-x12)));

    if (t1 != 24794LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x20 = -1;

    t2 = (x17+(x18%(x19-x20)));

    if (t2 != 47524577177LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = UINT32_MAX;
	volatile uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 232U;
	uint32_t x24 = UINT32_MAX;
	uint32_t t3 = 385U;

    t3 = (x21+(x22%(x23-x24)));

    if (t3 != 21U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	uint16_t x27 = 949U;
	static int8_t x28 = -1;
	static volatile int64_t t4 = 163959345861LL;

    t4 = (x25+(x26%(x27-x28)));

    if (t4 != -129LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x37 = 9LLU;
	volatile int16_t x38 = INT16_MAX;
	int16_t x39 = -1;
	uint64_t t5 = 3LLU;

    t5 = (x37+(x38%(x39-x40)));

    if (t5 != 32776LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x45 = 56634607296LL;
	int64_t x46 = -1LL;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -13421;

    t6 = (x45+(x46%(x47-x48)));

    if (t6 != 56634607295LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = -1LL;
	int8_t x51 = INT8_MIN;
	volatile int64_t t7 = 22764LL;

    t7 = (x49+(x50%(x51-x52)));

    if (t7 != 254LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x57 = INT8_MIN;
	static uint8_t x58 = 1U;
	uint64_t x59 = 72566419378496122LLU;
	int64_t x60 = INT64_MAX;
	static volatile uint64_t t8 = 149360513745LLU;

    t8 = (x57+(x58%(x59-x60)));

    if (t8 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x70 = 22U;
	uint64_t x71 = 227714412092930275LLU;
	static uint32_t x72 = 0U;
	uint64_t t9 = 3128340287133138595LLU;

    t9 = (x69+(x70%(x71-x72)));

    if (t9 != 149LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x74 = 0;
	static int64_t x75 = -1LL;
	uint32_t x76 = 375088681U;
	int64_t t10 = -11622633LL;

    t10 = (x73+(x74%(x75-x76)));

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x77 = 492461118928075LLU;
	int32_t x80 = -1;
	uint64_t t11 = 53LLU;

    t11 = (x77+(x78%(x79-x80)));

    if (t11 != 492461118928077LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x81 = INT8_MIN;
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = INT8_MIN;
	static int16_t x84 = 2;
	int32_t t12 = -56933588;

    t12 = (x81+(x82%(x83-x84)));

    if (t12 != -113) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x85 = -1LL;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = -1;
	uint16_t x88 = 1642U;

    t13 = (x85+(x86%(x87-x88)));

    if (t13 != 1457LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x89 = 521102LL;
	int64_t x90 = INT64_MAX;
	int64_t x91 = 921139LL;
	static volatile uint16_t x92 = 1015U;
	int64_t t14 = -391020LL;

    t14 = (x89+(x90%(x91-x92)));

    if (t14 != 958113LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x93 = -6584LL;
	volatile uint8_t x94 = 20U;
	static int16_t x95 = -1;
	static volatile int16_t x96 = -17;
	int64_t t15 = 5642407881LL;

    t15 = (x93+(x94%(x95-x96)));

    if (t15 != -6580LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x97 = INT8_MIN;
	int32_t x99 = -1;
	uint16_t x100 = 6U;
	static volatile int32_t t16 = 23249;

    t16 = (x97+(x98%(x99-x100)));

    if (t16 != -130) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x101 = 1U;
	int8_t x102 = INT8_MIN;
	volatile int32_t x103 = -1;
	uint64_t x104 = 2558321LLU;
	uint64_t t17 = 839499979918218LLU;

    t17 = (x101+(x102%(x103-x104)));

    if (t17 != 2558195LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x106 = -384456021479LL;
	int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MIN;
	volatile int64_t t18 = -925LL;

    t18 = (x105+(x106%(x107-x108)));

    if (t18 != -56471398LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x109 = 585LLU;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;
	int64_t x112 = INT64_MAX;
	static volatile uint64_t t19 = 81238295LLU;

    t19 = (x109+(x110%(x111-x112)));

    if (t19 != 18446744073709519433LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x113 = INT16_MAX;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int64_t x116 = INT64_MAX;

    t20 = (x113+(x114%(x115-x116)));

    if (t20 != 9223372034707324927LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int32_t x119 = -1;
	int8_t x120 = INT8_MIN;
	volatile int64_t t21 = -6117LL;

    t21 = (x117+(x118%(x119-x120)));

    if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x121 = 88U;
	uint8_t x124 = 96U;

    t22 = (x121+(x122%(x123-x124)));

    if (t22 != 184LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x125 = 7572572552843LL;
	int16_t x126 = INT16_MAX;
	static uint64_t x128 = UINT64_MAX;

    t23 = (x125+(x126%(x127-x128)));

    if (t23 != 7572572553490LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x129 = 0U;
	uint32_t x131 = 56U;
	static int32_t x132 = INT32_MIN;
	uint32_t t24 = 1292U;

    t24 = (x129+(x130%(x131-x132)));

    if (t24 != 2147450824U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x134 = -999;
	static volatile uint16_t x135 = 1U;
	volatile int32_t x136 = 110;
	int64_t t25 = 7510859462574LL;

    t25 = (x133+(x134%(x135-x136)));

    if (t25 != 1674512683747312443LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x138 = INT32_MAX;
	uint32_t x139 = UINT32_MAX;
	static int16_t x140 = INT16_MIN;
	volatile uint32_t t26 = 197444U;

    t26 = (x137+(x138%(x139-x140)));

    if (t26 != 6U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x142 = -1LL;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t27 = 2095233LLU;

    t27 = (x141+(x142%(x143-x144)));

    if (t27 != 16504271146322109LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = -8952;
	uint32_t x146 = 33380776U;
	static int64_t x147 = -2157297803048LL;
	volatile int8_t x148 = INT8_MIN;
	volatile int64_t t28 = 3LL;

    t28 = (x145+(x146%(x147-x148)));

    if (t28 != 33371824LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = -525;
	int16_t x150 = INT16_MAX;
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = 392695650567584838LLU;
	static volatile uint64_t t29 = 4LLU;

    t29 = (x149+(x150%(x151-x152)));

    if (t29 != 32242LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x157 = 0;
	int16_t x160 = INT16_MIN;

    t30 = (x157+(x158%(x159-x160)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x161 = UINT64_MAX;
	static volatile int8_t x164 = INT8_MIN;

    t31 = (x161+(x162%(x163-x164)));

    if (t31 != 32638LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x169 = UINT16_MAX;
	int64_t x170 = 26LL;
	uint16_t x171 = 5U;
	static volatile uint32_t x172 = 288U;
	int64_t t32 = 1714087341778LL;

    t32 = (x169+(x170%(x171-x172)));

    if (t32 != 65561LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x173 = INT16_MAX;
	int64_t x174 = -1LL;
	static int16_t x175 = INT16_MAX;
	volatile int8_t x176 = -1;
	static int64_t t33 = -919227LL;

    t33 = (x173+(x174%(x175-x176)));

    if (t33 != 32766LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x177 = 81;
	volatile uint16_t x179 = 179U;
	int16_t x180 = INT16_MAX;
	volatile int64_t t34 = -98416716LL;

    t34 = (x177+(x178%(x179-x180)));

    if (t34 != -21967LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x181 = 1650298;
	uint32_t x182 = UINT32_MAX;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = 1421181;
	volatile uint32_t t35 = 411U;

    t35 = (x181+(x182%(x183-x184)));

    if (t35 != 3071606U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x185 = 61403126993LLU;
	static volatile int64_t x186 = -1548992085533LL;
	int64_t x187 = INT64_MAX;
	volatile uint64_t t36 = 27092774LLU;

    t36 = (x185+(x186%(x187-x188)));

    if (t36 != 18446742586120593076LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x189 = UINT8_MAX;
	volatile int64_t x190 = -2177834LL;
	volatile int64_t x191 = -54LL;

    t37 = (x189+(x190%(x191-x192)));

    if (t37 != 34LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x195 = INT32_MIN;
	int16_t x196 = 0;
	uint32_t t38 = 2U;

    t38 = (x193+(x194%(x195-x196)));

    if (t38 != 132851726U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x197 = 15128146U;
	int64_t x198 = INT64_MIN;
	int8_t x200 = INT8_MIN;

    t39 = (x197+(x198%(x199-x200)));

    if (t39 != 15101397LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x205 = INT16_MAX;
	volatile uint32_t x206 = 819289U;
	int8_t x207 = 56;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t40 = 249633521U;

    t40 = (x205+(x206%(x207-x208)));

    if (t40 != 32795U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x211 = 73252;
	int64_t t41 = -61704571641950950LL;

    t41 = (x209+(x210%(x211-x212)));

    if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x213 = INT8_MIN;
	int64_t x214 = -80808LL;
	volatile int64_t x215 = INT64_MIN;
	volatile int64_t t42 = -7609665440007336LL;

    t42 = (x213+(x214%(x215-x216)));

    if (t42 != -80936LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x217 = -6637836LL;
	int16_t x218 = 8004;
	int16_t x219 = 7;
	uint16_t x220 = 12902U;
	static volatile int64_t t43 = 24915548601597LL;

    t43 = (x217+(x218%(x219-x220)));

    if (t43 != -6629832LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x221 = -513;
	uint8_t x222 = 2U;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 14780U;

    t44 = (x221+(x222%(x223-x224)));

    if (t44 != -511) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x225 = 136;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = INT64_MAX;
	int64_t t45 = -343925LL;

    t45 = (x225+(x226%(x227-x228)));

    if (t45 != 391LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x229 = -56786285;
	uint8_t x230 = 117U;
	volatile uint32_t x231 = 704880410U;
	static int64_t x232 = 1869517659703896274LL;
	int64_t t46 = 145539418807452LL;

    t46 = (x229+(x230%(x231-x232)));

    if (t46 != -56786168LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x234 = INT16_MIN;
	uint64_t x235 = UINT64_MAX;
	static int8_t x236 = 12;
	uint64_t t47 = 5200484LLU;

    t47 = (x233+(x234%(x235-x236)));

    if (t47 != 4294934527LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x237 = 1488U;
	uint64_t x238 = 1500070041813LLU;
	uint32_t x239 = 12261904U;
	uint8_t x240 = 127U;

    t48 = (x237+(x238%(x239-x240)));

    if (t48 != 1030452LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x241 = 35U;
	volatile uint8_t x242 = 13U;
	uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = INT8_MIN;

    t49 = (x241+(x242%(x243-x244)));

    if (t49 != 48U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x246 = 111U;
	static int64_t t50 = -46455705711935LL;

    t50 = (x245+(x246%(x247-x248)));

    if (t50 != 110LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x262 = INT32_MIN;
	volatile int64_t x263 = -1LL;
	int8_t x264 = INT8_MIN;
	int64_t t51 = 333709532471361419LL;

    t51 = (x261+(x262%(x263-x264)));

    if (t51 != 65527LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x269 = 281U;
	int32_t x270 = -1;
	int16_t x272 = -27;

    t52 = (x269+(x270%(x271-x272)));

    if (t52 != 280) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x277 = 0U;
	int8_t x278 = -3;
	int64_t x279 = -250LL;

    t53 = (x277+(x278%(x279-x280)));

    if (t53 != -3LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x281 = 60364U;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MAX;
	int16_t x284 = -1;
	uint64_t t54 = 66LLU;

    t54 = (x281+(x282%(x283-x284)));

    if (t54 != 93131LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x293 = UINT16_MAX;
	volatile int64_t x294 = INT64_MAX;
	static int8_t x295 = INT8_MIN;
	uint32_t x296 = 1937701558U;

    t55 = (x293+(x294%(x295-x296)));

    if (t55 != 2030033062LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x301 = 5U;
	int16_t x302 = -4;
	volatile uint32_t x304 = 6U;
	volatile uint32_t t56 = 2U;

    t56 = (x301+(x302%(x303-x304)));

    if (t56 != 60U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x305 = INT8_MIN;
	int32_t x306 = 103;
	uint64_t x307 = UINT64_MAX;
	uint64_t t57 = 1085302408LLU;

    t57 = (x305+(x306%(x307-x308)));

    if (t57 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x309 = INT8_MAX;
	uint16_t x310 = UINT16_MAX;
	uint8_t x311 = UINT8_MAX;
	uint16_t x312 = 1U;

    t58 = (x309+(x310%(x311-x312)));

    if (t58 != 130) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MAX;
	static volatile uint32_t x316 = 236269U;
	static volatile int64_t t59 = 5LL;

    t59 = (x313+(x314%(x315-x316)));

    if (t59 != 4294934527LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x317 = -170LL;
	volatile int16_t x320 = -1;

    t60 = (x317+(x318%(x319-x320)));

    if (t60 != -262LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x322 = 1;
	int64_t x324 = -1LL;
	volatile int64_t t61 = 32703442LL;

    t61 = (x321+(x322%(x323-x324)));

    if (t61 != 27LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x326 = INT16_MIN;
	static int64_t x327 = -1LL;
	uint16_t x328 = 3U;
	static volatile int64_t t62 = 199521729LL;

    t62 = (x325+(x326%(x327-x328)));

    if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	static uint64_t x331 = 1LLU;
	uint16_t x332 = 16U;
	static uint64_t t63 = 3LLU;

    t63 = (x329+(x330%(x331-x332)));

    if (t63 != 13LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = 0;
	volatile int32_t t64 = 1821706;

    t64 = (x333+(x334%(x335-x336)));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x337 = INT32_MIN;
	volatile int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;
	static int64_t t65 = -469LL;

    t65 = (x337+(x338%(x339-x340)));

    if (t65 != -2147516416LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x343 = 8200989;
	int8_t x344 = INT8_MAX;

    t66 = (x341+(x342%(x343-x344)));

    if (t66 != -9223372036854740372LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x345 = 2228537;
	volatile int64_t x347 = 2LL;
	int32_t x348 = INT32_MIN;
	static volatile uint64_t t67 = 1981273598175251380LLU;

    t67 = (x345+(x346%(x347-x348)));

    if (t67 != 2228552LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x349 = 4U;
	volatile uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 3024200992681290534LLU;
	int8_t x352 = -1;
	volatile uint64_t t68 = 132LLU;

    t68 = (x349+(x350%(x351-x352)));

    if (t68 != 65539LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x357 = INT16_MIN;
	uint8_t x358 = 2U;
	int16_t x360 = -1;
	static volatile int32_t t69 = -2650559;

    t69 = (x357+(x358%(x359-x360)));

    if (t69 != -32766) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	static volatile int32_t x363 = -1;
	int32_t x364 = INT32_MAX;
	int32_t t70 = -67;

    t70 = (x361+(x362%(x363-x364)));

    if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x365 = 173597356;
	int64_t x366 = INT64_MIN;
	volatile int64_t x367 = -45LL;
	int32_t x368 = 1169;
	int64_t t71 = 8757112674259373LL;

    t71 = (x365+(x366%(x367-x368)));

    if (t71 != 173596266LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x369 = 55023U;
	int32_t x370 = -80426270;
	int8_t x371 = -4;
	uint8_t x372 = UINT8_MAX;

    t72 = (x369+(x370%(x371-x372)));

    if (t72 != 54987U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x373 = -15;
	int16_t x374 = 3664;
	int16_t x375 = 4;
	static volatile int32_t t73 = -7017171;

    t73 = (x373+(x374%(x375-x376)));

    if (t73 != -14) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x377 = 3350LLU;
	uint8_t x378 = 54U;
	volatile int8_t x379 = -1;
	int64_t x380 = INT64_MAX;
	static volatile uint64_t t74 = 247950405712LLU;

    t74 = (x377+(x378%(x379-x380)));

    if (t74 != 3404LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x389 = INT32_MIN;
	static volatile uint32_t x390 = 1050U;
	static int64_t x391 = INT64_MIN;
	uint64_t x392 = 688096LLU;
	uint64_t t75 = 455599857245LLU;

    t75 = (x389+(x390%(x391-x392)));

    if (t75 != 18446744071562069018LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = -70;
	static int64_t t76 = -115LL;

    t76 = (x393+(x394%(x395-x396)));

    if (t76 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	volatile int32_t x407 = INT32_MIN;
	int32_t x408 = -1;
	volatile int64_t t77 = -100424LL;

    t77 = (x405+(x406%(x407-x408)));

    if (t77 != -130LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x409 = INT8_MAX;
	int8_t x410 = 14;
	int16_t x411 = INT16_MIN;
	int32_t t78 = -244446;

    t78 = (x409+(x410%(x411-x412)));

    if (t78 != 141) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x413 = UINT8_MAX;
	volatile int8_t x414 = INT8_MIN;
	int16_t x415 = -58;
	volatile int32_t t79 = 1709;

    t79 = (x413+(x414%(x415-x416)));

    if (t79 != 244) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x418 = -1;
	int32_t x419 = 3;
	int16_t x420 = INT16_MIN;
	uint32_t t80 = 464760U;

    t80 = (x417+(x418%(x419-x420)));

    if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x421 = -75755;
	static int16_t x423 = -1;
	int32_t x424 = 6534;
	uint64_t t81 = 731268874739843813LLU;

    t81 = (x421+(x422%(x423-x424)));

    if (t81 != 18446744073709482395LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x425 = -1;
	int16_t x426 = -204;
	uint16_t x427 = 106U;
	uint32_t x428 = 357549389U;
	uint32_t t82 = 8U;

    t82 = (x425+(x426%(x427-x428)));

    if (t82 != 357549078U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x429 = -20;
	static volatile uint16_t x431 = 504U;
	int8_t x432 = INT8_MIN;
	static int32_t t83 = -7;

    t83 = (x429+(x430%(x431-x432)));

    if (t83 != -36) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x433 = 1U;
	static uint8_t x434 = 1U;
	static volatile int8_t x435 = -56;
	uint32_t x436 = 0U;
	uint32_t t84 = 205788644U;

    t84 = (x433+(x434%(x435-x436)));

    if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x437 = INT8_MIN;
	static volatile int64_t x438 = 983619LL;
	int16_t x439 = -1;
	int8_t x440 = 0;
	int64_t t85 = 13LL;

    t85 = (x437+(x438%(x439-x440)));

    if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x441 = INT16_MAX;
	int8_t x442 = INT8_MAX;
	volatile int64_t x443 = -37LL;
	static int64_t x444 = -1LL;

    t86 = (x441+(x442%(x443-x444)));

    if (t86 != 32786LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x445 = 0U;
	int16_t x448 = -11972;
	uint32_t t87 = 60732738U;

    t87 = (x445+(x446%(x447-x448)));

    if (t87 != 6315U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x449 = 10278U;
	int16_t x450 = 0;
	uint32_t x451 = 104547U;
	static int16_t x452 = -1;
	static uint32_t t88 = 51894U;

    t88 = (x449+(x450%(x451-x452)));

    if (t88 != 10278U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x453 = 5;
	volatile int8_t x454 = INT8_MAX;
	int8_t x455 = -1;
	volatile uint32_t t89 = 182476309U;

    t89 = (x453+(x454%(x455-x456)));

    if (t89 != 132U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x469 = -1;
	uint64_t x470 = 25755698LLU;
	static int16_t x471 = INT16_MIN;
	int32_t x472 = INT32_MIN;
	volatile uint64_t t90 = 6LLU;

    t90 = (x469+(x470%(x471-x472)));

    if (t90 != 25755697LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x473 = 10363187693LLU;
	int8_t x474 = INT8_MIN;
	volatile uint64_t t91 = 2LLU;

    t91 = (x473+(x474%(x475-x476)));

    if (t91 != 10363187565LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x481 = -1;
	static int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MIN;
	volatile int64_t t92 = 368504LL;

    t92 = (x481+(x482%(x483-x484)));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x485 = 0;
	static uint8_t x486 = 9U;
	int64_t x487 = -1LL;
	int64_t t93 = -648620LL;

    t93 = (x485+(x486%(x487-x488)));

    if (t93 != 9LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x489 = -62LL;
	static uint64_t x490 = UINT64_MAX;
	int8_t x491 = INT8_MIN;
	volatile uint64_t t94 = 12822259975082542LLU;

    t94 = (x489+(x490%(x491-x492)));

    if (t94 != 64LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x493 = 0;
	int64_t x495 = -1LL;
	volatile uint32_t x496 = UINT32_MAX;
	int64_t t95 = -1106LL;

    t95 = (x493+(x494%(x495-x496)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x497 = INT16_MAX;
	uint64_t x498 = UINT64_MAX;
	volatile int32_t x499 = INT32_MAX;
	int16_t x500 = 23;
	static uint64_t t96 = 4242682753744LLU;

    t96 = (x497+(x498%(x499-x500)));

    if (t96 != 35070LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x501 = INT32_MIN;
	uint8_t x502 = UINT8_MAX;
	static int32_t x503 = INT32_MIN;
	int32_t x504 = -1;
	int32_t t97 = -2;

    t97 = (x501+(x502%(x503-x504)));

    if (t97 != -2147483393) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x505 = -947282396005LL;
	uint32_t x506 = 103841915U;
	int8_t x507 = -1;
	uint16_t x508 = 23051U;
	int64_t t98 = -259051LL;

    t98 = (x505+(x506%(x507-x508)));

    if (t98 != -947178554090LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x510 = INT16_MIN;
	int16_t x512 = 234;
	uint32_t t99 = 32321U;

    t99 = (x509+(x510%(x511-x512)));

    if (t99 != 4294936806U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x513 = UINT64_MAX;
	uint32_t x515 = 18494140U;
	int16_t x516 = INT16_MAX;

    t100 = (x513+(x514%(x515-x516)));

    if (t100 != 117LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x519 = 3U;
	int16_t x520 = INT16_MIN;
	int32_t t101 = 141535;

    t101 = (x517+(x518%(x519-x520)));

    if (t101 != -18) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x521 = UINT32_MAX;
	static int16_t x522 = 367;
	uint32_t x523 = 74549U;
	int32_t x524 = INT32_MIN;
	static volatile uint32_t t102 = 48747U;

    t102 = (x521+(x522%(x523-x524)));

    if (t102 != 366U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x525 = INT64_MIN;
	int16_t x526 = INT16_MAX;
	volatile uint32_t x527 = UINT32_MAX;
	int16_t x528 = 5108;
	volatile int64_t t103 = -1324509979631LL;

    t103 = (x525+(x526%(x527-x528)));

    if (t103 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x529 = 0;
	int16_t x530 = INT16_MIN;
	uint32_t x532 = 228867681U;
	int64_t t104 = 76LL;

    t104 = (x529+(x530%(x531-x532)));

    if (t104 != -32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x534 = -601731258;
	int8_t x535 = -12;
	int8_t x536 = INT8_MAX;
	volatile int64_t t105 = 12402639525465LL;

    t105 = (x533+(x534%(x535-x536)));

    if (t105 != -120LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x538 = -1;
	uint64_t x539 = UINT64_MAX;
	uint16_t x540 = 6U;
	static volatile uint64_t t106 = 8300822LLU;

    t106 = (x537+(x538%(x539-x540)));

    if (t106 != 965952LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x542 = -1;
	uint16_t x543 = 26U;
	int8_t x544 = -1;
	uint32_t t107 = 68U;

    t107 = (x541+(x542%(x543-x544)));

    if (t107 != 8U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x549 = UINT64_MAX;
	int8_t x550 = -1;
	uint64_t x551 = UINT64_MAX;
	uint64_t t108 = 93825LLU;

    t108 = (x549+(x550%(x551-x552)));

    if (t108 != 7946898LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x553 = UINT16_MAX;
	uint8_t x554 = 1U;
	int8_t x555 = INT8_MIN;
	static volatile uint32_t x556 = 3350U;
	volatile uint32_t t109 = 6913606U;

    t109 = (x553+(x554%(x555-x556)));

    if (t109 != 65536U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	int16_t x558 = -1;
	int64_t x560 = -1LL;
	int64_t t110 = 773091684LL;

    t110 = (x557+(x558%(x559-x560)));

    if (t110 != 4294967294LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x561 = 448LLU;
	uint16_t x562 = 196U;
	volatile uint16_t x564 = 21U;
	uint64_t t111 = 40346616LLU;

    t111 = (x561+(x562%(x563-x564)));

    if (t111 != 495LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x565 = -1;
	int64_t x566 = -1LL;
	uint32_t x567 = 11873U;
	int16_t x568 = INT16_MIN;
	volatile int64_t t112 = 190728595LL;

    t112 = (x565+(x566%(x567-x568)));

    if (t112 != -2LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x569 = -1;
	static int16_t x570 = -1;
	uint8_t x571 = 1U;
	uint32_t x572 = 63U;
	static uint32_t t113 = 416983U;

    t113 = (x569+(x570%(x571-x572)));

    if (t113 != 60U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x577 = 42150U;
	volatile uint64_t t114 = 8828823444987515198LLU;

    t114 = (x577+(x578%(x579-x580)));

    if (t114 != 42172LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x582 = 4041LL;
	int8_t x584 = 0;
	int64_t t115 = -1374686LL;

    t115 = (x581+(x582%(x583-x584)));

    if (t115 != 4040LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x585 = INT16_MAX;
	int32_t x586 = INT32_MAX;
	volatile int16_t x587 = INT16_MIN;
	int8_t x588 = INT8_MIN;
	volatile int32_t t116 = 2374;

    t116 = (x585+(x586%(x587-x588)));

    if (t116 != 32894) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x594 = INT8_MIN;
	uint8_t x596 = 1U;
	volatile uint32_t t117 = 1009206U;

    t117 = (x593+(x594%(x595-x596)));

    if (t117 != 4294967040U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x599 = -1;
	int8_t x600 = 11;
	volatile int32_t t118 = 96223769;

    t118 = (x597+(x598%(x599-x600)));

    if (t118 != -125) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x601 = -1;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	uint16_t x604 = UINT16_MAX;
	static int32_t t119 = 303;

    t119 = (x601+(x602%(x603-x604)));

    if (t119 != -32769) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MAX;
	int16_t x608 = 1;
	volatile int32_t t120 = 3350;

    t120 = (x605+(x606%(x607-x608)));

    if (t120 != -32641) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x609 = 924924851LLU;
	int16_t x610 = INT16_MIN;
	int16_t x611 = 6;
	int16_t x612 = INT16_MIN;
	uint64_t t121 = 563LLU;

    t121 = (x609+(x610%(x611-x612)));

    if (t121 != 924892083LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x613 = INT16_MAX;
	int64_t x614 = INT64_MAX;
	int32_t x615 = 8378667;
	int16_t x616 = INT16_MIN;
	int64_t t122 = 16690770027744926LL;

    t122 = (x613+(x614%(x615-x616)));

    if (t122 != 6478599LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x622 = -1;
	int32_t x623 = -882436333;
	uint64_t t123 = 494317899411511549LLU;

    t123 = (x621+(x622%(x623-x624)));

    if (t123 != 208892976987LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x625 = 0LLU;
	int64_t x626 = INT64_MIN;
	static int64_t x627 = -23343551785925495LL;
	int64_t x628 = -534LL;
	static volatile uint64_t t124 = 43062590961989LLU;

    t124 = (x625+(x626%(x627-x628)));

    if (t124 != 18444074992295135403LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x629 = INT8_MIN;
	uint32_t x630 = 3583U;
	int16_t x631 = 98;
	static int16_t x632 = INT16_MIN;

    t125 = (x629+(x630%(x631-x632)));

    if (t125 != 3455U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x637 = INT8_MIN;
	static int32_t x638 = -393311560;
	int64_t x639 = -50139038LL;
	static int16_t x640 = INT16_MIN;
	volatile int64_t t126 = -504731570LL;

    t126 = (x637+(x638%(x639-x640)));

    if (t126 != -42567798LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x641 = UINT64_MAX;
	volatile int8_t x642 = -45;
	uint32_t x643 = 334800U;
	int64_t x644 = -1LL;
	uint64_t t127 = 312151276019120682LLU;

    t127 = (x641+(x642%(x643-x644)));

    if (t127 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x645 = 12U;
	volatile uint64_t x647 = 10819621LLU;

    t128 = (x645+(x646%(x647-x648)));

    if (t128 != 3212435LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x649 = 12U;
	int64_t x650 = 623LL;
	int64_t x651 = 298849LL;
	static int8_t x652 = INT8_MIN;
	volatile int64_t t129 = -296225889LL;

    t129 = (x649+(x650%(x651-x652)));

    if (t129 != 635LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x653 = -1;
	volatile uint16_t x654 = UINT16_MAX;
	int64_t x655 = -12633715301317LL;
	static volatile int16_t x656 = 983;
	static volatile int64_t t130 = 32923669341LL;

    t130 = (x653+(x654%(x655-x656)));

    if (t130 != 65534LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x666 = 500225371;
	volatile int32_t x667 = INT32_MIN;
	static volatile int32_t t131 = -62579;

    t131 = (x665+(x666%(x667-x668)));

    if (t131 != 500225368) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x669 = 564767356;
	uint32_t x670 = 5378145U;
	int8_t x671 = 5;

    t132 = (x669+(x670%(x671-x672)));

    if (t132 != 570145501U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x677 = 2U;
	int8_t x678 = INT8_MAX;
	volatile int64_t x679 = -1LL;
	int8_t x680 = 0;
	int64_t t133 = -121830843662LL;

    t133 = (x677+(x678%(x679-x680)));

    if (t133 != 2LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x683 = 53U;
	volatile int32_t t134 = -8181704;

    t134 = (x681+(x682%(x683-x684)));

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x689 = -1505648962549538LL;
	uint8_t x690 = UINT8_MAX;
	int8_t x691 = -45;
	uint64_t t135 = 2015863001LLU;

    t135 = (x689+(x690%(x691-x692)));

    if (t135 != 18445238424747002333LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x693 = 47;
	int16_t x694 = -220;
	int32_t x696 = INT32_MIN;

    t136 = (x693+(x694%(x695-x696)));

    if (t136 != -173LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x701 = 59U;
	static volatile uint8_t x702 = 2U;
	uint16_t x703 = UINT16_MAX;
	static int8_t x704 = INT8_MIN;
	static int32_t t137 = -11534609;

    t137 = (x701+(x702%(x703-x704)));

    if (t137 != 61) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x705 = INT8_MIN;
	int8_t x706 = -3;
	int8_t x708 = 1;
	static volatile int32_t t138 = -10;

    t138 = (x705+(x706%(x707-x708)));

    if (t138 != -131) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x713 = INT32_MIN;
	int64_t x714 = INT64_MIN;
	int32_t x715 = 238934440;
	int64_t t139 = 152579107LL;

    t139 = (x713+(x714%(x715-x716)));

    if (t139 != -2267190760LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x725 = INT8_MIN;
	volatile uint32_t x726 = UINT32_MAX;
	uint16_t x727 = 90U;
	volatile int16_t x728 = INT16_MAX;
	uint32_t t140 = 7673920U;

    t140 = (x725+(x726%(x727-x728)));

    if (t140 != 32548U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x729 = 7U;
	volatile int8_t x730 = -1;
	int64_t t141 = 3516498878585189803LL;

    t141 = (x729+(x730%(x731-x732)));

    if (t141 != 6LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x733 = INT64_MAX;
	static int64_t x735 = INT64_MIN;

    t142 = (x733+(x734%(x735-x736)));

    if (t142 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x739 = 565477322276LLU;
	int8_t x740 = 1;
	uint64_t t143 = 1748537798886061LLU;

    t143 = (x737+(x738%(x739-x740)));

    if (t143 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x742 = -430;
	int8_t x743 = INT8_MAX;
	volatile int32_t x744 = -11636267;
	uint32_t t144 = 153050U;

    t144 = (x741+(x742%(x743-x744)));

    if (t144 != 227084U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x750 = 195281LL;
	uint64_t x751 = UINT64_MAX;
	int32_t x752 = -870976;
	volatile uint64_t t145 = 1064443574LLU;

    t145 = (x749+(x750%(x751-x752)));

    if (t145 != 195153LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x753 = INT16_MIN;
	volatile int8_t x754 = -1;
	uint32_t t146 = 4U;

    t146 = (x753+(x754%(x755-x756)));

    if (t146 != 19872127U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MIN;
	static volatile int32_t x760 = INT32_MIN;
	int32_t t147 = 5137368;

    t147 = (x757+(x758%(x759-x760)));

    if (t147 != -256) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x761 = INT8_MAX;
	static int16_t x762 = INT16_MAX;
	uint64_t x763 = 374LLU;
	volatile int64_t x764 = 432016515LL;
	static volatile uint64_t t148 = 505834LLU;

    t148 = (x761+(x762%(x763-x764)));

    if (t148 != 32894LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x765 = INT32_MAX;
	static int64_t x766 = -602739LL;
	volatile uint16_t x767 = UINT16_MAX;
	int16_t x768 = -3;
	volatile int64_t t149 = 7035451290698636LL;

    t149 = (x765+(x766%(x767-x768)));

    if (t149 != 2147470750LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x769 = 4837U;
	volatile uint32_t x770 = 19U;
	volatile int8_t x771 = 1;
	uint32_t x772 = 560915U;
	static volatile uint32_t t150 = 95U;

    t150 = (x769+(x770%(x771-x772)));

    if (t150 != 4856U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x774 = INT32_MIN;
	int16_t x775 = -59;
	uint32_t x776 = 1650570U;

    t151 = (x773+(x774%(x775-x776)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x785 = INT16_MIN;
	static uint8_t x786 = 4U;
	volatile uint32_t x787 = 23822U;
	int16_t x788 = -1;
	volatile uint32_t t152 = 25U;

    t152 = (x785+(x786%(x787-x788)));

    if (t152 != 4294934532U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x798 = INT8_MIN;
	int32_t x800 = -1;

    t153 = (x797+(x798%(x799-x800)));

    if (t153 != -10) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x805 = 6U;
	uint8_t x806 = UINT8_MAX;
	volatile uint16_t x807 = UINT16_MAX;
	int8_t x808 = 5;
	int32_t t154 = 11;

    t154 = (x805+(x806%(x807-x808)));

    if (t154 != 261) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x809 = 6LLU;
	uint16_t x810 = 971U;
	volatile int8_t x811 = -3;
	int64_t x812 = -155084739810LL;

    t155 = (x809+(x810%(x811-x812)));

    if (t155 != 977LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x813 = INT64_MIN;
	int64_t x815 = INT64_MAX;

    t156 = (x813+(x814%(x815-x816)));

    if (t156 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x817 = 4114507354143LLU;
	uint16_t x818 = 4488U;
	static volatile uint64_t t157 = 41690464LLU;

    t157 = (x817+(x818%(x819-x820)));

    if (t157 != 4114507358631LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x821 = -1;
	uint16_t x822 = UINT16_MAX;
	static int64_t x824 = INT64_MIN;
	uint64_t t158 = 246625223040273621LLU;

    t158 = (x821+(x822%(x823-x824)));

    if (t158 != 65534LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x825 = INT8_MAX;
	volatile int32_t x826 = INT32_MIN;
	int64_t x827 = INT64_MIN;
	volatile int32_t x828 = INT32_MIN;
	int64_t t159 = 160974671344LL;

    t159 = (x825+(x826%(x827-x828)));

    if (t159 != -2147483521LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x829 = -1;
	static int16_t x830 = INT16_MIN;
	uint16_t x832 = UINT16_MAX;
	static int64_t t160 = -383754509LL;

    t160 = (x829+(x830%(x831-x832)));

    if (t160 != -32769LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x834 = INT8_MAX;
	int64_t x835 = -213LL;
	uint32_t x836 = 90071U;
	int64_t t161 = -3827628941LL;

    t161 = (x833+(x834%(x835-x836)));

    if (t161 != 175835LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x842 = 3101146LL;
	int16_t x843 = INT16_MAX;
	uint16_t x844 = 1U;
	int64_t t162 = -9048LL;

    t162 = (x841+(x842%(x843-x844)));

    if (t162 != 21397LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x845 = 538182319917786LLU;
	uint8_t x846 = 61U;
	int32_t x847 = -1;
	int32_t x848 = INT32_MIN;
	uint64_t t163 = 957LLU;

    t163 = (x845+(x846%(x847-x848)));

    if (t163 != 538182319917847LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x849 = INT64_MIN;
	volatile int64_t x850 = INT64_MIN;
	int16_t x851 = 1;
	static volatile uint64_t t164 = 271689776421293306LLU;

    t164 = (x849+(x850%(x851-x852)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x853 = -1;
	volatile int64_t x854 = INT64_MAX;
	static int32_t x855 = -128;
	int64_t t165 = 13520058019414LL;

    t165 = (x853+(x854%(x855-x856)));

    if (t165 != 56LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x857 = 79U;
	int16_t x858 = -1;
	int8_t x859 = 1;
	static volatile int8_t x860 = -26;
	volatile int32_t t166 = 0;

    t166 = (x857+(x858%(x859-x860)));

    if (t166 != 78) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x861 = 2;
	uint8_t x862 = UINT8_MAX;
	uint32_t x864 = UINT32_MAX;
	static uint32_t t167 = 1491614U;

    t167 = (x861+(x862%(x863-x864)));

    if (t167 != 129U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x869 = 175247416144LLU;
	uint32_t x870 = UINT32_MAX;
	int64_t x871 = -1LL;
	uint8_t x872 = 1U;
	uint64_t t168 = 13704220661674841LLU;

    t168 = (x869+(x870%(x871-x872)));

    if (t168 != 175247416145LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x874 = INT8_MIN;
	volatile uint64_t x875 = 1LLU;
	int16_t x876 = -4;
	volatile uint64_t t169 = 10981775659339LLU;

    t169 = (x873+(x874%(x875-x876)));

    if (t169 != 2LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x877 = INT8_MAX;
	int16_t x878 = INT16_MAX;
	int64_t x879 = -93777462112666LL;
	int64_t x880 = -190665512214LL;
	static int64_t t170 = -4179246LL;

    t170 = (x877+(x878%(x879-x880)));

    if (t170 != 32894LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x881 = INT16_MIN;
	uint32_t x882 = UINT32_MAX;
	volatile int8_t x883 = 46;
	uint32_t x884 = UINT32_MAX;
	volatile uint32_t t171 = 674953U;

    t171 = (x881+(x882%(x883-x884)));

    if (t171 != 4294934569U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x886 = 1679126LLU;
	static int64_t x887 = 15621458587LL;
	int64_t x888 = 55596096091LL;
	volatile uint64_t t172 = 605913442300LLU;

    t172 = (x885+(x886%(x887-x888)));

    if (t172 != 1679125LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x890 = 8;
	static int16_t x891 = -9530;
	int8_t x892 = 0;
	int32_t t173 = -53471;

    t173 = (x889+(x890%(x891-x892)));

    if (t173 != 10) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x897 = -1LL;
	static int8_t x898 = INT8_MAX;
	int64_t x899 = -1LL;
	volatile uint16_t x900 = 23480U;
	int64_t t174 = -7926059LL;

    t174 = (x897+(x898%(x899-x900)));

    if (t174 != 126LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x905 = INT16_MIN;
	volatile int8_t x906 = INT8_MAX;
	uint64_t x907 = 1639027726804LLU;
	uint16_t x908 = 186U;
	uint64_t t175 = 17537LLU;

    t175 = (x905+(x906%(x907-x908)));

    if (t175 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x909 = 5527959076358309LL;
	uint16_t x910 = 414U;
	int16_t x911 = 1;
	static int64_t x912 = -3LL;
	static volatile int64_t t176 = 5724588838419LL;

    t176 = (x909+(x910%(x911-x912)));

    if (t176 != 5527959076358311LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x913 = 1U;
	uint16_t x914 = 108U;
	static int64_t x915 = -1LL;
	volatile int32_t x916 = INT32_MAX;

    t177 = (x913+(x914%(x915-x916)));

    if (t177 != 109LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x919 = UINT8_MAX;

    t178 = (x917+(x918%(x919-x920)));

    if (t178 != 17603LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x925 = 32U;
	int16_t x926 = INT16_MAX;
	volatile int64_t x927 = -1LL;
	int32_t x928 = 56;
	int64_t t179 = 3273177432LL;

    t179 = (x925+(x926%(x927-x928)));

    if (t179 != 81LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x929 = 11219898608LLU;
	static int8_t x931 = INT8_MIN;
	uint32_t x932 = UINT32_MAX;
	static uint64_t t180 = 111760290LLU;

    t180 = (x929+(x930%(x931-x932)));

    if (t180 != 8402140719LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x934 = UINT8_MAX;
	int8_t x936 = INT8_MAX;

    t181 = (x933+(x934%(x935-x936)));

    if (t181 != 650919U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x937 = UINT32_MAX;
	int16_t x938 = -2020;
	int32_t x939 = 1353721;
	int16_t x940 = 7703;
	uint32_t t182 = 5U;

    t182 = (x937+(x938%(x939-x940)));

    if (t182 != 4294965275U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x941 = -6;
	int32_t x942 = -1;
	uint32_t x944 = 1749515U;
	uint32_t t183 = 9U;

    t183 = (x941+(x942%(x943-x944)));

    if (t183 != 1749636U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x945 = 6620LL;
	uint16_t x946 = UINT16_MAX;
	static int64_t x947 = INT64_MAX;
	volatile uint64_t x948 = 2832527527LLU;
	volatile uint64_t t184 = 2753822914LLU;

    t184 = (x945+(x946%(x947-x948)));

    if (t184 != 72155LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x950 = INT8_MIN;
	int32_t x951 = INT32_MIN;
	volatile uint32_t x952 = 2U;
	volatile uint32_t t185 = 448135U;

    t185 = (x949+(x950%(x951-x952)));

    if (t185 != 2147485969U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x955 = 375U;
	volatile uint64_t x956 = 7LLU;
	uint64_t t186 = 2LLU;

    t186 = (x953+(x954%(x955-x956)));

    if (t186 != 46423613598LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x961 = 3603U;
	static int64_t x962 = 2362597283LL;
	static int64_t x963 = 594LL;
	volatile int64_t t187 = 6512120LL;

    t187 = (x961+(x962%(x963-x964)));

    if (t187 != 3896LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x965 = 55;
	int8_t x967 = INT8_MIN;
	int64_t x968 = 12752LL;

    t188 = (x965+(x966%(x967-x968)));

    if (t188 != 10982LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x969 = -1;
	uint64_t x970 = UINT64_MAX;
	int32_t x971 = 1011815;
	uint16_t x972 = UINT16_MAX;
	volatile uint64_t t189 = 118504LLU;

    t189 = (x969+(x970%(x971-x972)));

    if (t189 != 377214LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x976 = -5;
	volatile uint64_t t190 = 180769752LLU;

    t190 = (x973+(x974%(x975-x976)));

    if (t190 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x977 = INT64_MAX;
	int32_t x978 = INT32_MIN;
	uint64_t x979 = 603925757LLU;
	static uint16_t x980 = UINT16_MAX;
	volatile uint64_t t191 = 217654908LLU;

    t191 = (x977+(x978%(x979-x980)));

    if (t191 != 9223372037263472319LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x981 = 497U;
	static int64_t x982 = INT64_MAX;
	volatile int8_t x984 = 6;
	uint64_t t192 = 1LLU;

    t192 = (x981+(x982%(x983-x984)));

    if (t192 != 221454LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x985 = 191370995U;
	static int64_t x986 = -4178532401254210012LL;
	uint64_t x987 = 1693013167425182241LLU;
	int16_t x988 = INT16_MIN;

    t193 = (x985+(x986%(x987-x988)));

    if (t193 != 724106333244992527LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x989 = INT64_MAX;
	int32_t x990 = INT32_MIN;
	static int16_t x992 = 12;
	volatile int64_t t194 = 24012954995163LL;

    t194 = (x989+(x990%(x991-x992)));

    if (t194 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x993 = UINT32_MAX;
	volatile int32_t x994 = INT32_MIN;
	int32_t x995 = 776;
	int16_t x996 = INT16_MIN;
	uint32_t t195 = 875185050U;

    t195 = (x993+(x994%(x995-x996)));

    if (t195 != 4294936983U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1001 = 84U;
	static uint8_t x1002 = 31U;
	volatile uint64_t x1003 = 0LLU;
	static int32_t x1004 = 9;
	static volatile uint64_t t196 = 2761539389323521LLU;

    t196 = (x1001+(x1002%(x1003-x1004)));

    if (t196 != 115LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1005 = -1LL;
	int16_t x1006 = INT16_MIN;
	static int16_t x1007 = -1;
	static int32_t x1008 = INT32_MAX;
	volatile int64_t t197 = -684LL;

    t197 = (x1005+(x1006%(x1007-x1008)));

    if (t197 != -32769LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1009 = INT16_MAX;
	volatile uint32_t x1010 = 1152713U;
	int64_t x1011 = INT64_MIN;
	static int16_t x1012 = INT16_MIN;
	volatile int64_t t198 = 231LL;

    t198 = (x1009+(x1010%(x1011-x1012)));

    if (t198 != 1185480LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1013 = -3224763932202435501LL;
	static int8_t x1014 = INT8_MIN;
	uint8_t x1015 = UINT8_MAX;
	uint32_t x1016 = 23369452U;
	volatile int64_t t199 = 6427901085953871LL;

    t199 = (x1013+(x1014%(x1015-x1016)));

    if (t199 != -3224763932179066432LL) { NG(); } else { ; }
	
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

