
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

int64_t x4 = 126899342LL;
uint64_t x7 = 459LLU;
volatile int16_t x13 = INT16_MIN;
uint32_t x14 = 63U;
static int8_t x16 = 3;
int32_t x32 = 1;
int8_t x34 = 0;
int16_t x43 = -1;
uint32_t x47 = 6996761U;
volatile int16_t x48 = INT16_MIN;
uint16_t x49 = 6321U;
int32_t t12 = -19155569;
int16_t x65 = -87;
int64_t x67 = 2954LL;
static int8_t x72 = INT8_MAX;
int32_t t14 = -2;
uint32_t x73 = 2618080U;
volatile int32_t x81 = INT32_MIN;
static int64_t x87 = INT64_MAX;
uint64_t x88 = 428449LLU;
int32_t t20 = -704;
int8_t x103 = INT8_MIN;
static volatile int32_t t21 = 153431903;
uint32_t x108 = 1U;
static int32_t t22 = -6188933;
static int16_t x109 = -451;
int32_t t23 = 1;
int8_t x119 = INT8_MAX;
int32_t x128 = -1;
volatile uint16_t x135 = 17588U;
int16_t x138 = -1;
static uint8_t x139 = 13U;
volatile int32_t x142 = INT32_MIN;
int32_t x146 = -24510149;
int64_t x167 = -4976730951LL;
static volatile uint64_t x170 = 908192597LLU;
static int64_t x177 = INT64_MIN;
static int8_t x194 = INT8_MIN;
uint32_t x201 = UINT32_MAX;
volatile int8_t x209 = INT8_MAX;
int32_t t42 = -112281;
uint16_t x228 = 190U;
static int32_t x231 = -1;
static int8_t x232 = -36;
static volatile int32_t x240 = INT32_MIN;
volatile int16_t x245 = -1;
uint8_t x248 = 0U;
static int32_t t50 = -3283856;
int64_t x269 = INT64_MIN;
volatile int8_t x270 = INT8_MIN;
uint64_t x275 = UINT64_MAX;
int32_t t55 = -1;
int16_t x278 = 5;
int16_t x280 = -1;
volatile int32_t t56 = 3;
volatile int8_t x282 = INT8_MIN;
uint16_t x295 = 1466U;
int32_t t60 = 23;
static int8_t x304 = -21;
static int16_t x315 = INT16_MIN;
int32_t x317 = INT32_MIN;
int64_t x318 = 72432614793170LL;
volatile int16_t x319 = -1;
int16_t x320 = 16165;
volatile int8_t x330 = INT8_MIN;
int32_t x331 = 3076;
volatile int32_t t66 = -12728949;
static volatile uint32_t x334 = UINT32_MAX;
uint16_t x336 = UINT16_MAX;
static volatile int32_t t67 = -1579;
int32_t t71 = 249;
static uint16_t x358 = UINT16_MAX;
static volatile uint16_t x364 = 9U;
static uint32_t x369 = UINT32_MAX;
int64_t x387 = -1LL;
static volatile int8_t x389 = INT8_MIN;
volatile int32_t x394 = INT32_MAX;
static volatile int32_t t79 = 2908;
int16_t x401 = INT16_MIN;
volatile uint8_t x410 = 0U;
static int8_t x416 = 6;
uint8_t x423 = 2U;
int32_t x425 = 10493;
int16_t x433 = INT16_MIN;
volatile int64_t x436 = INT64_MIN;
int64_t x438 = 1983858LL;
static uint64_t x449 = 5937LLU;
uint8_t x463 = 31U;
volatile int32_t t93 = 1935457;
volatile int16_t x473 = -1;
int8_t x474 = -35;
volatile uint16_t x475 = 5U;
uint8_t x479 = 5U;
int64_t x486 = INT64_MIN;
volatile int16_t x487 = INT16_MIN;
int16_t x494 = INT16_MIN;
volatile int32_t t103 = -1;
int8_t x525 = INT8_MIN;
volatile int32_t t106 = -8;
static int8_t x530 = -1;
int32_t x532 = INT32_MAX;
static int16_t x533 = -199;
volatile uint32_t x562 = 1021U;
int8_t x565 = INT8_MAX;
volatile int32_t t115 = 41900;
uint8_t x580 = UINT8_MAX;
int32_t t118 = 0;
uint16_t x593 = 351U;
volatile int16_t x595 = 128;
int16_t x602 = 4;
int32_t x603 = INT32_MIN;
volatile int64_t x604 = INT64_MIN;
static volatile int8_t x605 = INT8_MIN;
uint8_t x607 = 2U;
volatile int32_t t122 = 3275211;
volatile int8_t x628 = INT8_MAX;
volatile int32_t t125 = 2;
int8_t x639 = 7;
int32_t x646 = INT32_MAX;
volatile int32_t t127 = -799206374;
volatile int32_t x650 = -83836018;
volatile int16_t x653 = -1;
int16_t x655 = INT16_MIN;
static volatile int16_t x656 = -40;
int8_t x659 = INT8_MAX;
volatile int8_t x660 = INT8_MIN;
int32_t t130 = -5445245;
volatile int16_t x662 = INT16_MAX;
int8_t x664 = INT8_MIN;
volatile int8_t x666 = -1;
volatile int32_t t132 = -2;
static int32_t x677 = -1;
int16_t x682 = -1;
int32_t x683 = INT32_MAX;
volatile uint16_t x684 = 1U;
static volatile int16_t x689 = 811;
int64_t x693 = 79304691530976977LL;
uint8_t x695 = 19U;
static int32_t x696 = INT32_MAX;
int64_t x697 = INT64_MAX;
int32_t x708 = 294;
volatile uint64_t x709 = UINT64_MAX;
uint32_t x723 = UINT32_MAX;
static int32_t x728 = -1;
static volatile int32_t t144 = 69;
static int8_t x745 = 55;
int16_t x746 = 6652;
volatile int32_t x749 = -1;
int16_t x754 = -1;
static volatile int16_t x756 = -1;
static uint16_t x758 = UINT16_MAX;
int32_t x759 = 13;
int16_t x765 = INT16_MIN;
static uint8_t x774 = 7U;
static int32_t x782 = INT32_MAX;
int32_t t154 = 0;
int8_t x785 = INT8_MAX;
int8_t x786 = -1;
int16_t x789 = INT16_MIN;
int32_t x796 = -1;
int16_t x798 = -166;
int8_t x799 = INT8_MIN;
volatile int32_t x819 = -90622;
volatile uint16_t x820 = 4047U;
static volatile int64_t x823 = INT64_MAX;
volatile uint8_t x832 = UINT8_MAX;
int32_t t165 = 63851774;
int16_t x850 = 1;
uint32_t x852 = UINT32_MAX;
volatile int32_t t166 = 719277974;
static uint8_t x854 = 76U;
static volatile uint32_t x856 = UINT32_MAX;
volatile int16_t x857 = INT16_MIN;
volatile int16_t x860 = 13913;
int32_t x864 = 3897775;
volatile int16_t x866 = -1;
int32_t t170 = 0;
int64_t x869 = INT64_MIN;
volatile uint16_t x887 = UINT16_MAX;
static volatile int32_t t178 = -132;
static int16_t x927 = -1;
uint64_t x931 = UINT64_MAX;
volatile int32_t t181 = 0;
int16_t x937 = 1;
volatile uint16_t x939 = UINT16_MAX;
int16_t x947 = INT16_MIN;
int8_t x949 = -1;
volatile int16_t x951 = 0;
volatile uint8_t x961 = 15U;
int32_t x962 = -1;
static int32_t x964 = 11890;
int64_t x976 = INT64_MIN;
volatile uint32_t x982 = 2138U;
int32_t t192 = -3;
int8_t x986 = INT8_MAX;
volatile int8_t x988 = 14;
int32_t t194 = 3910;
static volatile uint8_t x1001 = UINT8_MAX;
int8_t x1006 = INT8_MIN;
int16_t x1021 = -1;
uint16_t x1027 = 151U;
uint8_t x1028 = 37U;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile uint8_t x2 = UINT8_MAX;
	int8_t x3 = -1;
	volatile int32_t t0 = -1;

    t0 = ((x1-x2)==(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 43U;
	int32_t x6 = -18;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -60945145;

    t1 = ((x5-x6)==(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	uint16_t x10 = 2256U;
	int8_t x11 = 54;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -222530789;

    t2 = ((x9-x10)==(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = 86245862355LL;
	int32_t t3 = 198652;

    t3 = ((x13-x14)==(x15-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MIN;
	static uint64_t x19 = 5477649LLU;
	static int8_t x20 = INT8_MAX;
	int32_t t4 = -60393;

    t4 = ((x17-x18)==(x19-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 7944397;
	int32_t x22 = -1;
	int64_t x23 = INT64_MAX;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -504;

    t5 = ((x21-x22)==(x23-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 101264770809144353LLU;
	static int32_t x26 = -70921;
	int8_t x27 = 26;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -1;

    t6 = ((x25-x26)==(x27-x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MIN;
	int8_t x31 = -7;
	int32_t t7 = -53902;

    t7 = ((x29-x30)==(x31-x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 122373LLU;
	static uint16_t x35 = 34U;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -5274203;

    t8 = ((x33-x34)==(x35-x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 1124U;
	int64_t x42 = -664164090710649882LL;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t9 = -1456310;

    t9 = ((x41-x42)==(x43-x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = -11;
	int8_t x46 = INT8_MIN;
	int32_t t10 = 223742937;

    t10 = ((x45-x46)==(x47-x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x50 = INT64_MAX;
	uint64_t x51 = 2229030535702215LLU;
	int8_t x52 = 1;
	static volatile int32_t t11 = -993;

    t11 = ((x49-x50)==(x51-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	volatile uint16_t x54 = 25831U;
	int32_t x55 = -1;
	uint64_t x56 = UINT64_MAX;

    t12 = ((x53-x54)==(x55-x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x66 = -1;
	int32_t x68 = INT32_MAX;
	int32_t t13 = 5345;

    t13 = ((x65-x66)==(x67-x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x69 = -1;
	uint32_t x70 = 609127133U;
	volatile uint16_t x71 = 68U;

    t14 = ((x69-x70)==(x71-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x74 = 200727740LL;
	int64_t x75 = INT64_MAX;
	uint16_t x76 = 229U;
	volatile int32_t t15 = 12274;

    t15 = ((x73-x74)==(x75-x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x77 = 291U;
	int16_t x78 = 0;
	static volatile uint16_t x79 = 5U;
	uint32_t x80 = 1U;
	volatile int32_t t16 = 418;

    t16 = ((x77-x78)==(x79-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x82 = -1971;
	int32_t x83 = INT32_MIN;
	static volatile int16_t x84 = -1;
	volatile int32_t t17 = -756245;

    t17 = ((x81-x82)==(x83-x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = 85791362LLU;
	static int8_t x86 = -10;
	int32_t t18 = -33;

    t18 = ((x85-x86)==(x87-x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x89 = 3LLU;
	volatile int32_t x90 = 29;
	int32_t x91 = -1;
	int8_t x92 = 0;
	static volatile int32_t t19 = -40611263;

    t19 = ((x89-x90)==(x91-x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MAX;
	static int64_t x94 = INT64_MAX;
	int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;

    t20 = ((x93-x94)==(x95-x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = INT8_MAX;
	uint16_t x102 = 16679U;
	int32_t x104 = INT32_MIN;

    t21 = ((x101-x102)==(x103-x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x105 = INT16_MIN;
	static volatile int16_t x106 = INT16_MIN;
	int8_t x107 = 0;

    t22 = ((x105-x106)==(x107-x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x110 = -1;
	uint16_t x111 = 8064U;
	uint64_t x112 = UINT64_MAX;

    t23 = ((x109-x110)==(x111-x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = -1;
	volatile uint8_t x118 = UINT8_MAX;
	static volatile uint8_t x120 = 1U;
	volatile int32_t t24 = 392;

    t24 = ((x117-x118)==(x119-x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x125 = INT32_MAX;
	static int16_t x126 = 152;
	static uint8_t x127 = 10U;
	static volatile int32_t t25 = 382137372;

    t25 = ((x125-x126)==(x127-x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x133 = 6U;
	uint8_t x134 = 126U;
	int32_t x136 = 499844515;
	static int32_t t26 = 3;

    t26 = ((x133-x134)==(x135-x136));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = INT8_MIN;
	int16_t x140 = -1;
	int32_t t27 = -7;

    t27 = ((x137-x138)==(x139-x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x141 = 100963445LL;
	int64_t x143 = -1LL;
	int32_t x144 = -1;
	volatile int32_t t28 = 63;

    t28 = ((x141-x142)==(x143-x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	int8_t x148 = -1;
	volatile int32_t t29 = -1008629;

    t29 = ((x145-x146)==(x147-x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = -1LL;
	static volatile int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int32_t t30 = -101;

    t30 = ((x153-x154)==(x155-x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x157 = 4U;
	static volatile int32_t x158 = 70;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = 22;
	int32_t t31 = 132378399;

    t31 = ((x157-x158)==(x159-x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x161 = -132510733781162552LL;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	static int8_t x164 = INT8_MIN;
	static volatile int32_t t32 = -7916963;

    t32 = ((x161-x162)==(x163-x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x165 = 10U;
	int32_t x166 = -6632;
	static uint16_t x168 = UINT16_MAX;
	int32_t t33 = -8131412;

    t33 = ((x165-x166)==(x167-x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = -1;
	uint32_t x171 = UINT32_MAX;
	static volatile int32_t x172 = INT32_MIN;
	volatile int32_t t34 = 417;

    t34 = ((x169-x170)==(x171-x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x178 = UINT64_MAX;
	int32_t x179 = -687029;
	int8_t x180 = INT8_MIN;
	int32_t t35 = 205865843;

    t35 = ((x177-x178)==(x179-x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x185 = INT8_MIN;
	volatile uint8_t x186 = 11U;
	int32_t x187 = 2128;
	volatile uint64_t x188 = 34329959427410LLU;
	static int32_t t36 = 13081951;

    t36 = ((x185-x186)==(x187-x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	int16_t x191 = -1;
	volatile int32_t x192 = INT32_MIN;
	static int32_t t37 = -12538;

    t37 = ((x189-x190)==(x191-x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x193 = INT8_MIN;
	int8_t x195 = -8;
	uint64_t x196 = 2738149393240LLU;
	volatile int32_t t38 = 52118989;

    t38 = ((x193-x194)==(x195-x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x197 = INT16_MAX;
	int8_t x198 = 51;
	uint16_t x199 = 1U;
	volatile int64_t x200 = 21922118776955171LL;
	int32_t t39 = -47;

    t39 = ((x197-x198)==(x199-x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x202 = 3306143U;
	static int32_t x203 = INT32_MIN;
	int16_t x204 = -51;
	volatile int32_t t40 = 52;

    t40 = ((x201-x202)==(x203-x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x205 = 1577U;
	int8_t x206 = -1;
	static volatile int8_t x207 = INT8_MIN;
	int64_t x208 = -1LL;
	volatile int32_t t41 = -101717323;

    t41 = ((x205-x206)==(x207-x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x210 = UINT32_MAX;
	static int16_t x211 = -15230;
	int64_t x212 = 982788343528246LL;

    t42 = ((x209-x210)==(x211-x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x213 = UINT16_MAX;
	int32_t x214 = -1;
	static volatile int64_t x215 = -95LL;
	static int8_t x216 = -41;
	volatile int32_t t43 = -2260407;

    t43 = ((x213-x214)==(x215-x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x221 = -1;
	uint32_t x222 = 1457116727U;
	static volatile uint64_t x223 = 4008044LLU;
	volatile uint8_t x224 = 12U;
	volatile int32_t t44 = -2289;

    t44 = ((x221-x222)==(x223-x224));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = UINT16_MAX;
	volatile int8_t x227 = -1;
	volatile int32_t t45 = -1;

    t45 = ((x225-x226)==(x227-x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x229 = INT64_MAX;
	static int64_t x230 = INT64_MAX;
	int32_t t46 = 28;

    t46 = ((x229-x230)==(x231-x232));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x233 = 6U;
	int8_t x234 = 0;
	static volatile int8_t x235 = INT8_MIN;
	static uint32_t x236 = 10170U;
	static volatile int32_t t47 = 1;

    t47 = ((x233-x234)==(x235-x236));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x237 = -46;
	volatile int64_t x238 = -1LL;
	static int64_t x239 = INT64_MIN;
	int32_t t48 = -3;

    t48 = ((x237-x238)==(x239-x240));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x241 = INT16_MAX;
	int32_t x242 = 32222827;
	int8_t x243 = -1;
	static int32_t x244 = INT32_MAX;
	int32_t t49 = -3832535;

    t49 = ((x241-x242)==(x243-x244));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x246 = 1250U;
	uint32_t x247 = UINT32_MAX;

    t50 = ((x245-x246)==(x247-x248));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x249 = INT32_MAX;
	static uint64_t x250 = 1LLU;
	static uint64_t x251 = 66LLU;
	uint16_t x252 = 35U;
	volatile int32_t t51 = -3474520;

    t51 = ((x249-x250)==(x251-x252));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x261 = INT8_MAX;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 327LLU;
	static uint16_t x264 = 2536U;
	volatile int32_t t52 = -5;

    t52 = ((x261-x262)==(x263-x264));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x265 = 14188681LL;
	uint64_t x266 = 349292543135393LLU;
	int16_t x267 = INT16_MIN;
	int32_t x268 = -32678;
	volatile int32_t t53 = -1;

    t53 = ((x265-x266)==(x267-x268));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x271 = -1;
	static int8_t x272 = -1;
	volatile int32_t t54 = -625;

    t54 = ((x269-x270)==(x271-x272));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x273 = 108174723U;
	int16_t x274 = 3;
	uint8_t x276 = 104U;

    t55 = ((x273-x274)==(x275-x276));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x277 = 1U;
	int64_t x279 = 15LL;

    t56 = ((x277-x278)==(x279-x280));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x281 = 53;
	static int64_t x283 = -3LL;
	int16_t x284 = INT16_MAX;
	volatile int32_t t57 = -55576150;

    t57 = ((x281-x282)==(x283-x284));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x285 = INT16_MAX;
	uint8_t x286 = UINT8_MAX;
	static int32_t x287 = INT32_MIN;
	static volatile int8_t x288 = -7;
	static volatile int32_t t58 = -63;

    t58 = ((x285-x286)==(x287-x288));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x289 = INT64_MIN;
	volatile int32_t x290 = -1;
	volatile int32_t x291 = 1181;
	int8_t x292 = INT8_MIN;
	int32_t t59 = 711642127;

    t59 = ((x289-x290)==(x291-x292));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	static volatile int64_t x296 = -1LL;

    t60 = ((x293-x294)==(x295-x296));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x297 = 10U;
	static int16_t x298 = INT16_MIN;
	static uint16_t x299 = 3489U;
	uint16_t x300 = 0U;
	volatile int32_t t61 = -513;

    t61 = ((x297-x298)==(x299-x300));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	int32_t x303 = -1451;
	int32_t t62 = -73268172;

    t62 = ((x301-x302)==(x303-x304));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = -1;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t63 = -1182;

    t63 = ((x305-x306)==(x307-x308));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x313 = -82;
	int32_t x314 = INT32_MIN;
	int16_t x316 = 3065;
	int32_t t64 = -14;

    t64 = ((x313-x314)==(x315-x316));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t t65 = -1049910281;

    t65 = ((x317-x318)==(x319-x320));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x329 = -1LL;
	volatile uint32_t x332 = 48U;

    t66 = ((x329-x330)==(x331-x332));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint32_t x333 = 56934472U;
	static int8_t x335 = 15;

    t67 = ((x333-x334)==(x335-x336));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x337 = 1LLU;
	volatile int64_t x338 = -1LL;
	int8_t x339 = -1;
	uint8_t x340 = 7U;
	int32_t t68 = 63;

    t68 = ((x337-x338)==(x339-x340));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x341 = INT16_MIN;
	volatile uint64_t x342 = 100635LLU;
	int8_t x343 = INT8_MAX;
	int16_t x344 = -1;
	static volatile int32_t t69 = 182648;

    t69 = ((x341-x342)==(x343-x344));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x345 = 11U;
	static uint16_t x346 = UINT16_MAX;
	uint8_t x347 = 1U;
	int32_t x348 = -1;
	int32_t t70 = 0;

    t70 = ((x345-x346)==(x347-x348));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x349 = INT8_MAX;
	uint64_t x350 = 7540LLU;
	int64_t x351 = -1LL;
	uint32_t x352 = 642351380U;

    t71 = ((x349-x350)==(x351-x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x357 = UINT32_MAX;
	volatile int64_t x359 = -7592LL;
	int8_t x360 = 21;
	volatile int32_t t72 = -494103;

    t72 = ((x357-x358)==(x359-x360));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x361 = -469;
	static uint32_t x362 = 2732831U;
	uint8_t x363 = 1U;
	volatile int32_t t73 = -3930233;

    t73 = ((x361-x362)==(x363-x364));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x365 = INT8_MIN;
	volatile int64_t x366 = -383444314060LL;
	int16_t x367 = INT16_MIN;
	volatile uint16_t x368 = UINT16_MAX;
	static volatile int32_t t74 = 1947;

    t74 = ((x365-x366)==(x367-x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x370 = 144U;
	int64_t x371 = 1777799907834619724LL;
	uint8_t x372 = 3U;
	volatile int32_t t75 = 53;

    t75 = ((x369-x370)==(x371-x372));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	int32_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int32_t t76 = -2722628;

    t76 = ((x381-x382)==(x383-x384));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x385 = INT32_MAX;
	static int64_t x386 = -1LL;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t77 = -46388270;

    t77 = ((x385-x386)==(x387-x388));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x390 = -3014396300630LL;
	volatile uint8_t x391 = 7U;
	static uint16_t x392 = 2794U;
	int32_t t78 = 1;

    t78 = ((x389-x390)==(x391-x392));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x393 = 356;
	int16_t x395 = INT16_MAX;
	int16_t x396 = -1;

    t79 = ((x393-x394)==(x395-x396));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x402 = 11U;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = UINT16_MAX;
	static volatile int32_t t80 = -219214247;

    t80 = ((x401-x402)==(x403-x404));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x405 = -9889;
	int64_t x406 = INT64_MIN;
	static int16_t x407 = INT16_MIN;
	uint8_t x408 = UINT8_MAX;
	int32_t t81 = -922123;

    t81 = ((x405-x406)==(x407-x408));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x409 = -1;
	uint64_t x411 = 378069024308831714LLU;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t82 = 10;

    t82 = ((x409-x410)==(x411-x412));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x413 = 1U;
	int16_t x414 = 7128;
	int64_t x415 = 18440849359LL;
	volatile int32_t t83 = 11513099;

    t83 = ((x413-x414)==(x415-x416));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x417 = INT8_MIN;
	volatile uint8_t x418 = 76U;
	static int64_t x419 = -1LL;
	int16_t x420 = 118;
	static int32_t t84 = 1954;

    t84 = ((x417-x418)==(x419-x420));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x421 = -1;
	static uint32_t x422 = 711211U;
	static uint8_t x424 = UINT8_MAX;
	int32_t t85 = 12217418;

    t85 = ((x421-x422)==(x423-x424));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x426 = UINT16_MAX;
	int64_t x427 = INT64_MIN;
	static volatile int16_t x428 = INT16_MIN;
	volatile int32_t t86 = -15;

    t86 = ((x425-x426)==(x427-x428));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x434 = 7500632123011706743LLU;
	int8_t x435 = -1;
	volatile int32_t t87 = 5447106;

    t87 = ((x433-x434)==(x435-x436));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x437 = INT16_MIN;
	static volatile int32_t x439 = INT32_MIN;
	volatile int8_t x440 = 0;
	int32_t t88 = -45413826;

    t88 = ((x437-x438)==(x439-x440));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x441 = -1;
	uint16_t x442 = 31206U;
	volatile uint32_t x443 = UINT32_MAX;
	int8_t x444 = 0;
	int32_t t89 = -7402518;

    t89 = ((x441-x442)==(x443-x444));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x445 = 0U;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = INT32_MAX;
	uint8_t x448 = 20U;
	volatile int32_t t90 = 10;

    t90 = ((x445-x446)==(x447-x448));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x450 = 110LLU;
	int16_t x451 = -1;
	int16_t x452 = -946;
	int32_t t91 = 61680;

    t91 = ((x449-x450)==(x451-x452));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x457 = 728;
	int64_t x458 = -1LL;
	volatile int16_t x459 = INT16_MIN;
	int32_t x460 = -1;
	int32_t t92 = -8888;

    t92 = ((x457-x458)==(x459-x460));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x461 = 183447457226827LL;
	int32_t x462 = INT32_MAX;
	uint64_t x464 = 126517021430471LLU;

    t93 = ((x461-x462)==(x463-x464));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x465 = INT64_MAX;
	static volatile int16_t x466 = INT16_MAX;
	int8_t x467 = 1;
	uint32_t x468 = 9909U;
	volatile int32_t t94 = 318639735;

    t94 = ((x465-x466)==(x467-x468));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x476 = -1;
	volatile int32_t t95 = 0;

    t95 = ((x473-x474)==(x475-x476));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x477 = 848012702U;
	uint8_t x478 = 3U;
	int16_t x480 = INT16_MIN;
	int32_t t96 = -54;

    t96 = ((x477-x478)==(x479-x480));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x481 = -1;
	int16_t x482 = 3;
	volatile int16_t x483 = INT16_MIN;
	uint16_t x484 = 9U;
	static volatile int32_t t97 = 0;

    t97 = ((x481-x482)==(x483-x484));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x485 = -1LL;
	uint16_t x488 = 54U;
	static int32_t t98 = -1771;

    t98 = ((x485-x486)==(x487-x488));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x489 = INT8_MAX;
	int8_t x490 = 2;
	static int8_t x491 = INT8_MIN;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t99 = 290801812;

    t99 = ((x489-x490)==(x491-x492));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x493 = 6U;
	static uint64_t x495 = 5LLU;
	volatile int16_t x496 = INT16_MAX;
	int32_t t100 = -17068;

    t100 = ((x493-x494)==(x495-x496));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x501 = -670525413590LL;
	static int16_t x502 = 3001;
	static uint32_t x503 = UINT32_MAX;
	static int8_t x504 = 1;
	int32_t t101 = -2807;

    t101 = ((x501-x502)==(x503-x504));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x505 = -1;
	int8_t x506 = INT8_MIN;
	int16_t x507 = -1;
	uint32_t x508 = 0U;
	volatile int32_t t102 = 0;

    t102 = ((x505-x506)==(x507-x508));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x509 = INT8_MIN;
	int16_t x510 = INT16_MIN;
	static int64_t x511 = -1LL;
	int8_t x512 = 0;

    t103 = ((x509-x510)==(x511-x512));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x517 = -198LL;
	static uint32_t x518 = UINT32_MAX;
	uint16_t x519 = UINT16_MAX;
	volatile uint16_t x520 = 0U;
	volatile int32_t t104 = 6;

    t104 = ((x517-x518)==(x519-x520));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x521 = INT8_MIN;
	static int32_t x522 = INT32_MIN;
	uint32_t x523 = UINT32_MAX;
	volatile uint32_t x524 = 4374325U;
	int32_t t105 = -1510474;

    t105 = ((x521-x522)==(x523-x524));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x526 = UINT8_MAX;
	int8_t x527 = INT8_MIN;
	volatile int8_t x528 = INT8_MAX;

    t106 = ((x525-x526)==(x527-x528));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x529 = 0U;
	uint16_t x531 = 91U;
	static int32_t t107 = 807493008;

    t107 = ((x529-x530)==(x531-x532));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x534 = INT8_MIN;
	int64_t x535 = -1LL;
	int32_t x536 = 301;
	volatile int32_t t108 = -93475543;

    t108 = ((x533-x534)==(x535-x536));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x537 = -1;
	static int16_t x538 = INT16_MIN;
	volatile int8_t x539 = INT8_MAX;
	volatile int16_t x540 = 99;
	static int32_t t109 = 711;

    t109 = ((x537-x538)==(x539-x540));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x545 = INT16_MAX;
	int8_t x546 = INT8_MAX;
	static int32_t x547 = -18210;
	static int32_t x548 = -229113503;
	int32_t t110 = -6;

    t110 = ((x545-x546)==(x547-x548));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x553 = UINT8_MAX;
	int32_t x554 = -1;
	uint64_t x555 = 403530018511690074LLU;
	int16_t x556 = -1;
	volatile int32_t t111 = -3920693;

    t111 = ((x553-x554)==(x555-x556));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x557 = INT32_MIN;
	static int32_t x558 = INT32_MIN;
	uint64_t x559 = 3968015LLU;
	int32_t x560 = 6724876;
	volatile int32_t t112 = -1358;

    t112 = ((x557-x558)==(x559-x560));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x561 = 0U;
	int32_t x563 = -1;
	volatile int64_t x564 = INT64_MAX;
	int32_t t113 = 7077017;

    t113 = ((x561-x562)==(x563-x564));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x566 = INT16_MIN;
	uint8_t x567 = 25U;
	int32_t x568 = INT32_MAX;
	int32_t t114 = 41213;

    t114 = ((x565-x566)==(x567-x568));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x573 = INT64_MIN;
	int32_t x574 = -1;
	volatile int64_t x575 = INT64_MIN;
	int64_t x576 = -1LL;

    t115 = ((x573-x574)==(x575-x576));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x577 = 74U;
	uint16_t x578 = 20U;
	static volatile uint64_t x579 = 1911440LLU;
	volatile int32_t t116 = 1510124;

    t116 = ((x577-x578)==(x579-x580));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x581 = INT32_MIN;
	static uint32_t x582 = UINT32_MAX;
	int8_t x583 = -1;
	int64_t x584 = -1LL;
	volatile int32_t t117 = 25;

    t117 = ((x581-x582)==(x583-x584));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x585 = INT32_MIN;
	volatile int32_t x586 = -1;
	int16_t x587 = INT16_MAX;
	volatile int16_t x588 = INT16_MAX;

    t118 = ((x585-x586)==(x587-x588));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x594 = 2751LLU;
	static int16_t x596 = INT16_MIN;
	static int32_t t119 = 238;

    t119 = ((x593-x594)==(x595-x596));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x601 = -1;
	volatile int32_t t120 = 1;

    t120 = ((x601-x602)==(x603-x604));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x606 = 36;
	int8_t x608 = INT8_MAX;
	int32_t t121 = 23056342;

    t121 = ((x605-x606)==(x607-x608));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x609 = -1LL;
	volatile int8_t x610 = INT8_MIN;
	static uint16_t x611 = 230U;
	uint16_t x612 = UINT16_MAX;

    t122 = ((x609-x610)==(x611-x612));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x621 = UINT64_MAX;
	static int8_t x622 = INT8_MAX;
	volatile int8_t x623 = -1;
	static uint8_t x624 = UINT8_MAX;
	volatile int32_t t123 = -42280489;

    t123 = ((x621-x622)==(x623-x624));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x625 = -55LL;
	int16_t x626 = INT16_MAX;
	static int64_t x627 = -514298549779055LL;
	int32_t t124 = -1477;

    t124 = ((x625-x626)==(x627-x628));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x633 = INT16_MIN;
	uint8_t x634 = 88U;
	uint8_t x635 = UINT8_MAX;
	int16_t x636 = -1;

    t125 = ((x633-x634)==(x635-x636));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x637 = -1;
	volatile int16_t x638 = -56;
	volatile uint8_t x640 = UINT8_MAX;
	volatile int32_t t126 = -271803593;

    t126 = ((x637-x638)==(x639-x640));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x645 = 24U;
	uint8_t x647 = UINT8_MAX;
	volatile int8_t x648 = -1;

    t127 = ((x645-x646)==(x647-x648));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x649 = 1315597208255147439LLU;
	volatile uint32_t x651 = UINT32_MAX;
	int32_t x652 = -7357;
	int32_t t128 = 61;

    t128 = ((x649-x650)==(x651-x652));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x654 = -1;
	int32_t t129 = -1545901;

    t129 = ((x653-x654)==(x655-x656));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x657 = INT64_MAX;
	int32_t x658 = INT32_MAX;

    t130 = ((x657-x658)==(x659-x660));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x661 = -1LL;
	int16_t x663 = -1;
	static int32_t t131 = 205347972;

    t131 = ((x661-x662)==(x663-x664));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x665 = 258050U;
	volatile uint32_t x667 = UINT32_MAX;
	int32_t x668 = INT32_MAX;

    t132 = ((x665-x666)==(x667-x668));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x678 = -12744;
	static uint8_t x679 = 7U;
	volatile uint64_t x680 = 139478LLU;
	int32_t t133 = 69260;

    t133 = ((x677-x678)==(x679-x680));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x681 = -1;
	int32_t t134 = -23739497;

    t134 = ((x681-x682)==(x683-x684));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x685 = INT64_MAX;
	uint32_t x686 = 676299U;
	static int16_t x687 = INT16_MIN;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t135 = -14661771;

    t135 = ((x685-x686)==(x687-x688));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x690 = 42;
	int32_t x691 = -1;
	uint8_t x692 = 0U;
	int32_t t136 = 10582963;

    t136 = ((x689-x690)==(x691-x692));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x694 = 252755657768636LLU;
	volatile int32_t t137 = -57984868;

    t137 = ((x693-x694)==(x695-x696));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x698 = 475LLU;
	int8_t x699 = INT8_MAX;
	int16_t x700 = INT16_MIN;
	int32_t t138 = -1;

    t138 = ((x697-x698)==(x699-x700));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x701 = -3;
	volatile uint8_t x702 = 29U;
	int32_t x703 = -1;
	static int32_t x704 = INT32_MIN;
	volatile int32_t t139 = 12927;

    t139 = ((x701-x702)==(x703-x704));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x705 = UINT32_MAX;
	uint64_t x706 = UINT64_MAX;
	int8_t x707 = 1;
	int32_t t140 = 68316811;

    t140 = ((x705-x706)==(x707-x708));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x710 = 30U;
	int64_t x711 = 3322521572LL;
	static int32_t x712 = INT32_MAX;
	volatile int32_t t141 = -7020636;

    t141 = ((x709-x710)==(x711-x712));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x721 = 218U;
	static int8_t x722 = -1;
	int8_t x724 = -1;
	volatile int32_t t142 = 36;

    t142 = ((x721-x722)==(x723-x724));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x725 = 7172U;
	int64_t x726 = -3LL;
	uint16_t x727 = 27U;
	int32_t t143 = -59;

    t143 = ((x725-x726)==(x727-x728));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x733 = -2;
	int64_t x734 = -1LL;
	uint64_t x735 = 54730968578LLU;
	static volatile int32_t x736 = -1;

    t144 = ((x733-x734)==(x735-x736));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x737 = -1;
	int16_t x738 = INT16_MIN;
	int32_t x739 = INT32_MIN;
	int16_t x740 = INT16_MIN;
	volatile int32_t t145 = -371180482;

    t145 = ((x737-x738)==(x739-x740));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = INT8_MIN;
	static int16_t x743 = INT16_MIN;
	int16_t x744 = 2;
	volatile int32_t t146 = 438111124;

    t146 = ((x741-x742)==(x743-x744));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x747 = 14;
	int32_t x748 = INT32_MAX;
	volatile int32_t t147 = 1671;

    t147 = ((x745-x746)==(x747-x748));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x750 = INT32_MIN;
	static uint8_t x751 = 62U;
	int16_t x752 = -1;
	volatile int32_t t148 = 2278577;

    t148 = ((x749-x750)==(x751-x752));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x753 = INT16_MIN;
	volatile int64_t x755 = INT64_MIN;
	static int32_t t149 = -4587;

    t149 = ((x753-x754)==(x755-x756));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x757 = 679U;
	int32_t x760 = -1;
	volatile int32_t t150 = 460179350;

    t150 = ((x757-x758)==(x759-x760));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x766 = INT16_MIN;
	int16_t x767 = 1383;
	volatile int32_t x768 = -2;
	static volatile int32_t t151 = -417;

    t151 = ((x765-x766)==(x767-x768));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x773 = -1;
	int8_t x775 = 3;
	volatile uint16_t x776 = 122U;
	int32_t t152 = -21550548;

    t152 = ((x773-x774)==(x775-x776));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x777 = INT16_MIN;
	int8_t x778 = INT8_MIN;
	uint8_t x779 = UINT8_MAX;
	static volatile int8_t x780 = INT8_MIN;
	volatile int32_t t153 = -320440;

    t153 = ((x777-x778)==(x779-x780));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	int8_t x783 = INT8_MIN;
	int64_t x784 = -1LL;

    t154 = ((x781-x782)==(x783-x784));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x787 = -17276LL;
	int32_t x788 = 2014411;
	volatile int32_t t155 = -35937496;

    t155 = ((x785-x786)==(x787-x788));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x790 = 6572U;
	int16_t x791 = -1;
	volatile int16_t x792 = -10;
	volatile int32_t t156 = -4015;

    t156 = ((x789-x790)==(x791-x792));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x793 = INT32_MAX;
	static int32_t x794 = INT32_MAX;
	int64_t x795 = -1030227016241531LL;
	volatile int32_t t157 = 15;

    t157 = ((x793-x794)==(x795-x796));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x797 = 0;
	volatile int16_t x800 = INT16_MAX;
	int32_t t158 = -190950;

    t158 = ((x797-x798)==(x799-x800));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x801 = UINT8_MAX;
	int8_t x802 = -1;
	int32_t x803 = -1;
	uint8_t x804 = UINT8_MAX;
	int32_t t159 = 58887;

    t159 = ((x801-x802)==(x803-x804));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x813 = -1;
	uint32_t x814 = UINT32_MAX;
	int8_t x815 = INT8_MIN;
	uint16_t x816 = UINT16_MAX;
	static int32_t t160 = -1644;

    t160 = ((x813-x814)==(x815-x816));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x817 = -1;
	int32_t x818 = INT32_MAX;
	int32_t t161 = 420693;

    t161 = ((x817-x818)==(x819-x820));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x821 = INT8_MIN;
	static volatile int32_t x822 = -97967;
	uint8_t x824 = UINT8_MAX;
	static volatile int32_t t162 = -337;

    t162 = ((x821-x822)==(x823-x824));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x829 = -1;
	int32_t x830 = INT32_MIN;
	int32_t x831 = INT32_MAX;
	volatile int32_t t163 = -167;

    t163 = ((x829-x830)==(x831-x832));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x833 = INT32_MIN;
	int32_t x834 = INT32_MIN;
	int16_t x835 = INT16_MIN;
	volatile uint8_t x836 = UINT8_MAX;
	int32_t t164 = 80;

    t164 = ((x833-x834)==(x835-x836));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x837 = UINT8_MAX;
	volatile int16_t x838 = INT16_MAX;
	int64_t x839 = INT64_MAX;
	uint64_t x840 = 142788036304223474LLU;

    t165 = ((x837-x838)==(x839-x840));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x849 = INT32_MAX;
	uint32_t x851 = 1485U;

    t166 = ((x849-x850)==(x851-x852));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x853 = 1LL;
	volatile int16_t x855 = -8418;
	volatile int32_t t167 = -2;

    t167 = ((x853-x854)==(x855-x856));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x858 = -1;
	uint16_t x859 = 1U;
	int32_t t168 = 213;

    t168 = ((x857-x858)==(x859-x860));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x861 = UINT64_MAX;
	uint64_t x862 = UINT64_MAX;
	uint8_t x863 = UINT8_MAX;
	volatile int32_t t169 = -7621972;

    t169 = ((x861-x862)==(x863-x864));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x865 = 8U;
	int64_t x867 = INT64_MAX;
	uint64_t x868 = 8127624000694LLU;

    t170 = ((x865-x866)==(x867-x868));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x870 = -1;
	int64_t x871 = INT64_MIN;
	static int64_t x872 = -1LL;
	volatile int32_t t171 = 0;

    t171 = ((x869-x870)==(x871-x872));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x873 = 1U;
	static int16_t x874 = INT16_MIN;
	int16_t x875 = INT16_MAX;
	int8_t x876 = INT8_MIN;
	static volatile int32_t t172 = 399;

    t172 = ((x873-x874)==(x875-x876));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x881 = INT32_MAX;
	uint16_t x882 = 9255U;
	uint8_t x883 = 55U;
	int16_t x884 = -2;
	volatile int32_t t173 = -978706169;

    t173 = ((x881-x882)==(x883-x884));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x885 = 4332137U;
	int16_t x886 = INT16_MIN;
	int16_t x888 = INT16_MAX;
	int32_t t174 = 0;

    t174 = ((x885-x886)==(x887-x888));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x897 = 3;
	static int32_t x898 = 168806;
	static int64_t x899 = -1LL;
	int32_t x900 = -147552;
	int32_t t175 = -26731260;

    t175 = ((x897-x898)==(x899-x900));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x901 = 13285U;
	uint16_t x902 = UINT16_MAX;
	volatile uint32_t x903 = 1324U;
	static uint32_t x904 = 924U;
	int32_t t176 = 296;

    t176 = ((x901-x902)==(x903-x904));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x909 = -4755650736724924LL;
	int64_t x910 = 6186124088LL;
	int16_t x911 = INT16_MIN;
	int64_t x912 = INT64_MIN;
	int32_t t177 = -6758594;

    t177 = ((x909-x910)==(x911-x912));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x913 = -1;
	volatile int8_t x914 = INT8_MAX;
	int8_t x915 = INT8_MIN;
	uint16_t x916 = UINT16_MAX;

    t178 = ((x913-x914)==(x915-x916));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x917 = 358965020415LLU;
	static int8_t x918 = INT8_MAX;
	static volatile uint64_t x919 = 24794082776815LLU;
	volatile uint8_t x920 = 1U;
	int32_t t179 = -103669478;

    t179 = ((x917-x918)==(x919-x920));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x925 = 578U;
	int16_t x926 = -774;
	int8_t x928 = -1;
	int32_t t180 = -631087935;

    t180 = ((x925-x926)==(x927-x928));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x929 = 0;
	int8_t x930 = INT8_MIN;
	volatile int16_t x932 = INT16_MIN;

    t181 = ((x929-x930)==(x931-x932));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x938 = INT16_MIN;
	int16_t x940 = -1;
	static int32_t t182 = 1;

    t182 = ((x937-x938)==(x939-x940));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x941 = -1LL;
	uint8_t x942 = 4U;
	int8_t x943 = INT8_MIN;
	int64_t x944 = -1LL;
	int32_t t183 = 1;

    t183 = ((x941-x942)==(x943-x944));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x945 = 19935052U;
	uint16_t x946 = 7U;
	static volatile int32_t x948 = 245623;
	volatile int32_t t184 = -5057;

    t184 = ((x945-x946)==(x947-x948));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x950 = INT8_MIN;
	static uint32_t x952 = 6U;
	static volatile int32_t t185 = -82;

    t185 = ((x949-x950)==(x951-x952));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x953 = -7;
	volatile int16_t x954 = INT16_MIN;
	static int32_t x955 = 36935;
	int32_t x956 = 104700293;
	volatile int32_t t186 = 12822234;

    t186 = ((x953-x954)==(x955-x956));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x957 = INT64_MIN;
	int16_t x958 = INT16_MIN;
	int8_t x959 = -7;
	static uint16_t x960 = 864U;
	static int32_t t187 = 1;

    t187 = ((x957-x958)==(x959-x960));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x963 = 189;
	int32_t t188 = -1258;

    t188 = ((x961-x962)==(x963-x964));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x965 = -1;
	int8_t x966 = 3;
	volatile uint32_t x967 = 102U;
	int8_t x968 = INT8_MIN;
	volatile int32_t t189 = -6374;

    t189 = ((x965-x966)==(x967-x968));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x969 = 15920169009LLU;
	int16_t x970 = -1;
	int8_t x971 = INT8_MIN;
	volatile int8_t x972 = INT8_MIN;
	int32_t t190 = 85483;

    t190 = ((x969-x970)==(x971-x972));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x973 = 0U;
	int8_t x974 = 23;
	int8_t x975 = INT8_MIN;
	int32_t t191 = 89706;

    t191 = ((x973-x974)==(x975-x976));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x981 = 538U;
	volatile int32_t x983 = 3888275;
	volatile uint64_t x984 = UINT64_MAX;

    t192 = ((x981-x982)==(x983-x984));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x985 = INT16_MAX;
	int16_t x987 = 221;
	int32_t t193 = -60102302;

    t193 = ((x985-x986)==(x987-x988));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x993 = INT8_MIN;
	static int64_t x994 = -1LL;
	volatile int16_t x995 = -1;
	int32_t x996 = INT32_MIN;

    t194 = ((x993-x994)==(x995-x996));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1002 = 514094668550116576LLU;
	volatile int16_t x1003 = INT16_MIN;
	int32_t x1004 = 10;
	volatile int32_t t195 = 2;

    t195 = ((x1001-x1002)==(x1003-x1004));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1005 = -1;
	volatile uint32_t x1007 = UINT32_MAX;
	static int16_t x1008 = INT16_MIN;
	int32_t t196 = 486106;

    t196 = ((x1005-x1006)==(x1007-x1008));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1013 = INT64_MIN;
	int8_t x1014 = -3;
	int16_t x1015 = -3;
	uint16_t x1016 = 30U;
	int32_t t197 = -3715;

    t197 = ((x1013-x1014)==(x1015-x1016));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1022 = -1;
	static int64_t x1023 = -1LL;
	volatile int64_t x1024 = INT64_MAX;
	volatile int32_t t198 = -4967;

    t198 = ((x1021-x1022)==(x1023-x1024));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1025 = 1380;
	int64_t x1026 = INT64_MAX;
	static volatile int32_t t199 = -1334;

    t199 = ((x1025-x1026)==(x1027-x1028));

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

