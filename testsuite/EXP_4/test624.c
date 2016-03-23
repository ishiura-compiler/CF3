
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

volatile uint8_t x9 = 79U;
int16_t x16 = INT16_MIN;
static volatile int16_t x27 = -1;
int32_t x30 = -4469206;
static volatile int32_t t6 = 5888703;
int32_t x39 = INT32_MIN;
int32_t x42 = INT32_MIN;
volatile uint16_t x43 = 615U;
int32_t t9 = 3;
int16_t x58 = INT16_MAX;
volatile int16_t x59 = INT16_MIN;
volatile int32_t t12 = -302;
int8_t x66 = -1;
volatile uint32_t x68 = 185609U;
int64_t x72 = -1LL;
int16_t x74 = INT16_MIN;
uint16_t x75 = UINT16_MAX;
int8_t x77 = 29;
int64_t x80 = -18879161824LL;
volatile int8_t x83 = INT8_MIN;
int32_t t18 = 7108345;
static int16_t x89 = -1;
int16_t x100 = INT16_MIN;
static int16_t x102 = -1;
int8_t x104 = INT8_MIN;
int32_t t22 = -108466307;
int32_t x116 = -1;
volatile int32_t x127 = -1;
uint8_t x128 = 49U;
int32_t t27 = 14192;
static volatile uint32_t x132 = 687474U;
int32_t t29 = -4700574;
static uint8_t x147 = 1U;
volatile int16_t x153 = 121;
uint8_t x165 = UINT8_MAX;
static volatile int32_t t35 = 0;
volatile int32_t t36 = 1;
int8_t x188 = -1;
int64_t x195 = INT64_MIN;
int64_t x200 = INT64_MIN;
int32_t x208 = 896318;
int32_t x212 = -20475;
static volatile int32_t t44 = 210830;
uint16_t x221 = 503U;
int16_t x224 = 841;
int64_t x226 = -1LL;
int8_t x228 = INT8_MIN;
volatile int64_t x235 = INT64_MIN;
volatile int64_t x238 = INT64_MAX;
int16_t x240 = -1;
volatile int64_t x248 = INT64_MIN;
int32_t t52 = 31864;
int16_t x261 = INT16_MIN;
volatile int32_t t55 = 20;
int32_t x278 = -23;
int32_t t57 = -5381;
int32_t x300 = INT32_MAX;
volatile int32_t t59 = 1;
volatile int32_t x302 = INT32_MIN;
volatile int8_t x303 = -1;
static volatile int16_t x316 = INT16_MIN;
int32_t x322 = INT32_MAX;
int32_t t64 = 2;
static volatile uint32_t x331 = 452661819U;
volatile int32_t t67 = -292;
volatile uint16_t x344 = 1U;
uint64_t x345 = 154025295LLU;
int64_t x347 = -1LL;
int64_t x348 = 103630933552LL;
int32_t t70 = -202989;
uint16_t x355 = UINT16_MAX;
volatile int32_t t71 = -3211455;
static int16_t x360 = -1272;
uint8_t x361 = 3U;
int8_t x362 = INT8_MIN;
int16_t x385 = -1;
int64_t x388 = -1876LL;
volatile int8_t x392 = INT8_MAX;
static int64_t x396 = 104285566670881198LL;
static volatile int32_t t79 = -4;
static int8_t x398 = INT8_MAX;
volatile int32_t t80 = 11890;
volatile uint32_t x407 = 60707739U;
static int16_t x408 = INT16_MIN;
int16_t x414 = INT16_MAX;
int16_t x419 = -1944;
int32_t x428 = INT32_MIN;
int32_t t89 = 1099;
int16_t x442 = INT16_MIN;
static volatile int32_t t91 = 0;
int64_t x450 = 90LL;
int32_t x456 = INT32_MAX;
static int32_t t94 = 127;
volatile int32_t t95 = -1;
uint16_t x465 = 505U;
uint32_t x468 = 4288966U;
volatile int32_t x477 = INT32_MAX;
static uint32_t x479 = 1842U;
uint32_t x480 = 18U;
volatile int32_t t98 = -5;
int32_t t99 = 5;
int8_t x489 = INT8_MIN;
int8_t x491 = INT8_MIN;
volatile int32_t x497 = -32819720;
uint8_t x499 = 2U;
static uint32_t x506 = UINT32_MAX;
int16_t x508 = 100;
static uint8_t x513 = 89U;
static int16_t x520 = INT16_MIN;
static uint64_t x521 = 131190327211442LLU;
volatile int32_t t108 = 84960767;
int16_t x527 = -1;
int32_t t109 = 0;
int64_t x529 = INT64_MIN;
uint64_t x531 = UINT64_MAX;
int64_t x550 = -1LL;
volatile int64_t x560 = INT64_MIN;
volatile int32_t t117 = -3;
static int32_t x568 = INT32_MIN;
static int64_t x584 = INT64_MIN;
static int64_t x585 = INT64_MIN;
int32_t t124 = 373;
static int8_t x597 = INT8_MAX;
volatile int8_t x600 = -1;
int64_t x603 = 0LL;
int32_t t127 = 39768;
static int32_t x605 = INT32_MIN;
volatile int16_t x606 = INT16_MAX;
uint16_t x608 = 18U;
volatile uint16_t x610 = UINT16_MAX;
static int32_t x614 = INT32_MIN;
static uint64_t x618 = UINT64_MAX;
int8_t x619 = -3;
int64_t x640 = INT64_MIN;
int32_t t134 = 3386;
volatile int16_t x643 = INT16_MIN;
int8_t x649 = 35;
volatile int32_t x651 = 153114;
uint8_t x652 = UINT8_MAX;
int16_t x653 = INT16_MIN;
uint32_t x658 = UINT32_MAX;
int32_t x663 = INT32_MIN;
int8_t x668 = -1;
int32_t x693 = -1;
static int16_t x694 = INT16_MIN;
int32_t x696 = INT32_MIN;
static int16_t x708 = INT16_MIN;
int64_t x714 = 45596882551105LL;
int32_t t150 = 54937;
volatile int32_t t151 = 53668;
uint16_t x730 = UINT16_MAX;
int16_t x732 = INT16_MIN;
int64_t x734 = 2601278607033248LL;
uint32_t x735 = UINT32_MAX;
uint64_t x737 = 80022270895LLU;
int8_t x741 = -1;
static int64_t x762 = INT64_MIN;
uint32_t x767 = 11192U;
volatile int32_t t160 = -8;
int32_t x779 = INT32_MIN;
int32_t x780 = INT32_MIN;
int64_t x787 = -1175008832804LL;
volatile int32_t t163 = 486899;
volatile int32_t t164 = 32193;
int32_t x794 = INT32_MIN;
int16_t x795 = -13;
int16_t x796 = INT16_MAX;
int8_t x809 = INT8_MAX;
static int64_t x811 = INT64_MIN;
static int32_t t168 = -367;
static int16_t x817 = INT16_MAX;
static int16_t x820 = 1;
int32_t t170 = 606721594;
volatile int32_t t171 = -14649008;
volatile int8_t x850 = 4;
int8_t x851 = -1;
uint32_t x852 = 22300U;
volatile uint16_t x853 = 82U;
volatile uint8_t x856 = 6U;
volatile int16_t x866 = -1;
int32_t t181 = -1977;
int8_t x874 = INT8_MIN;
static int64_t x876 = 1173265257018625181LL;
uint64_t x878 = 17754745567959188LLU;
int8_t x880 = 1;
static int16_t x888 = 666;
volatile int16_t x889 = INT16_MIN;
int64_t x890 = -6227138248498LL;
volatile uint64_t x891 = 428LLU;
volatile int8_t x894 = 47;
int64_t x900 = 3782509531725780LL;
uint16_t x901 = 3382U;
int64_t x907 = INT64_MIN;
volatile int32_t x912 = INT32_MIN;
int16_t x925 = INT16_MIN;
static int16_t x927 = -1;
int32_t x930 = 135406571;
volatile uint16_t x938 = UINT16_MAX;
static uint8_t x946 = UINT8_MAX;
static int32_t x948 = -1;
int64_t x953 = 0LL;
volatile uint16_t x956 = 257U;
int32_t t198 = -140;


void f0(void) {
    	int16_t x5 = -1;
	int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int8_t x8 = 4;
	static int32_t t0 = 44290055;

    t0 = (x5==(x6*(x7/x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = 102;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	volatile int32_t t1 = -472;

    t1 = (x9==(x10*(x11/x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x13 = 1U;
	volatile int8_t x14 = INT8_MIN;
	static int16_t x15 = -227;
	volatile int32_t t2 = -3;

    t2 = (x13==(x14*(x15/x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = -31;
	uint32_t x20 = 973U;
	int32_t t3 = 1321;

    t3 = (x17==(x18*(x19/x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = 268005459747LL;
	int16_t x22 = -1;
	int8_t x23 = 0;
	int32_t x24 = INT32_MIN;
	int32_t t4 = 49;

    t4 = (x21==(x22*(x23/x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 0U;
	volatile int64_t x26 = INT64_MAX;
	static int8_t x28 = INT8_MIN;
	int32_t t5 = 17128;

    t5 = (x25==(x26*(x27/x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x29 = 37465718820923LLU;
	static volatile int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;

    t6 = (x29==(x30*(x31/x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	int64_t x40 = -1LL;
	volatile int32_t t7 = -5002;

    t7 = (x37==(x38*(x39/x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 1U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t8 = -84256;

    t8 = (x41==(x42*(x43/x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 596U;
	volatile int16_t x46 = -1;
	int16_t x47 = -125;
	int64_t x48 = 16758843389LL;

    t9 = (x45==(x46*(x47/x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x49 = INT16_MIN;
	volatile int64_t x50 = -493050082LL;
	int64_t x51 = -1LL;
	static volatile int8_t x52 = -1;
	int32_t t10 = -64691461;

    t10 = (x49==(x50*(x51/x52)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x57 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	volatile int32_t t11 = -5404;

    t11 = (x57==(x58*(x59/x60)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = 1586;
	int64_t x62 = -1LL;
	uint32_t x63 = UINT32_MAX;
	int16_t x64 = INT16_MAX;

    t12 = (x61==(x62*(x63/x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	static uint32_t x67 = 8597U;
	volatile int32_t t13 = -19723573;

    t13 = (x65==(x66*(x67/x68)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = 129552368982619LL;
	volatile int32_t x70 = 3;
	static int8_t x71 = INT8_MIN;
	int32_t t14 = -28027;

    t14 = (x69==(x70*(x71/x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = 13458;
	int16_t x76 = INT16_MAX;
	volatile int32_t t15 = 1158;

    t15 = (x73==(x74*(x75/x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x78 = -93;
	int64_t x79 = -1LL;
	volatile int32_t t16 = 79864;

    t16 = (x77==(x78*(x79/x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = 95U;
	int16_t x82 = 7;
	static int16_t x84 = INT16_MIN;
	int32_t t17 = 887120045;

    t17 = (x81==(x82*(x83/x84)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x85 = INT16_MAX;
	static volatile int8_t x86 = 1;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;

    t18 = (x85==(x86*(x87/x88)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x90 = -1LL;
	uint32_t x91 = 19521U;
	uint32_t x92 = UINT32_MAX;
	int32_t t19 = 2666882;

    t19 = (x89==(x90*(x91/x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = 6U;
	uint64_t x98 = 568603744LLU;
	uint32_t x99 = 3174931U;
	int32_t t20 = -79062653;

    t20 = (x97==(x98*(x99/x100)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x101 = UINT16_MAX;
	static int32_t x103 = -712064;
	int32_t t21 = -57772087;

    t21 = (x101==(x102*(x103/x104)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = INT16_MAX;
	uint16_t x106 = UINT16_MAX;
	volatile int64_t x107 = -2LL;
	volatile int16_t x108 = INT16_MIN;

    t22 = (x105==(x106*(x107/x108)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x109 = UINT8_MAX;
	uint64_t x110 = 4473360618038616LLU;
	int16_t x111 = -1;
	static int32_t x112 = INT32_MIN;
	int32_t t23 = -38286961;

    t23 = (x109==(x110*(x111/x112)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x113 = UINT16_MAX;
	int64_t x114 = -1LL;
	uint32_t x115 = 41U;
	volatile int32_t t24 = -1;

    t24 = (x113==(x114*(x115/x116)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = -2;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	static int32_t x120 = INT32_MAX;
	static int32_t t25 = -852;

    t25 = (x117==(x118*(x119/x120)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = -1120;
	int16_t x122 = INT16_MIN;
	volatile uint16_t x123 = UINT16_MAX;
	static uint8_t x124 = UINT8_MAX;
	int32_t t26 = 17;

    t26 = (x121==(x122*(x123/x124)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x125 = INT64_MIN;
	uint32_t x126 = 1267U;

    t27 = (x125==(x126*(x127/x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MAX;
	uint8_t x130 = 5U;
	static int64_t x131 = INT64_MIN;
	volatile int32_t t28 = -172;

    t28 = (x129==(x130*(x131/x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x133 = INT64_MIN;
	static uint16_t x134 = UINT16_MAX;
	uint8_t x135 = 79U;
	uint8_t x136 = 116U;

    t29 = (x133==(x134*(x135/x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = UINT32_MAX;
	int32_t x138 = -1;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t30 = 83;

    t30 = (x137==(x138*(x139/x140)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MIN;
	int8_t x142 = -35;
	uint16_t x143 = 0U;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t31 = 43492837;

    t31 = (x141==(x142*(x143/x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = -212669442419LL;
	int16_t x146 = INT16_MIN;
	volatile int8_t x148 = INT8_MIN;
	int32_t t32 = 413921;

    t32 = (x145==(x146*(x147/x148)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int64_t x152 = 1907569081548LL;
	volatile int32_t t33 = 0;

    t33 = (x149==(x150*(x151/x152)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x154 = -116;
	static int8_t x155 = INT8_MIN;
	volatile int16_t x156 = -1;
	volatile int32_t t34 = -651693;

    t34 = (x153==(x154*(x155/x156)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = 2032;
	volatile int16_t x167 = INT16_MAX;
	volatile int16_t x168 = -1;

    t35 = (x165==(x166*(x167/x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x173 = 3455271;
	static volatile int16_t x174 = 6;
	uint16_t x175 = UINT16_MAX;
	static int32_t x176 = INT32_MAX;

    t36 = (x173==(x174*(x175/x176)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = -1;
	volatile int64_t x182 = 2224949308681086298LL;
	int16_t x183 = 1;
	int16_t x184 = -2;
	static volatile int32_t t37 = -28062;

    t37 = (x181==(x182*(x183/x184)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x185 = 9U;
	static uint64_t x186 = UINT64_MAX;
	int64_t x187 = -167959905644792918LL;
	volatile int32_t t38 = 1466;

    t38 = (x185==(x186*(x187/x188)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x189 = INT16_MIN;
	static int16_t x190 = INT16_MIN;
	uint16_t x191 = 1U;
	volatile uint32_t x192 = UINT32_MAX;
	int32_t t39 = -1932686;

    t39 = (x189==(x190*(x191/x192)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x193 = -5081448;
	volatile int8_t x194 = INT8_MIN;
	int16_t x196 = -927;
	volatile int32_t t40 = 89;

    t40 = (x193==(x194*(x195/x196)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x197 = UINT64_MAX;
	uint16_t x198 = UINT16_MAX;
	static int8_t x199 = -1;
	volatile int32_t t41 = -103081203;

    t41 = (x197==(x198*(x199/x200)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MAX;
	int32_t t42 = -1820;

    t42 = (x205==(x206*(x207/x208)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x209 = INT8_MAX;
	int64_t x210 = INT64_MIN;
	int8_t x211 = -1;
	static int32_t t43 = 1;

    t43 = (x209==(x210*(x211/x212)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x213 = 14101U;
	uint16_t x214 = 1U;
	static int16_t x215 = INT16_MAX;
	uint32_t x216 = 242U;

    t44 = (x213==(x214*(x215/x216)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MAX;
	uint64_t x219 = UINT64_MAX;
	static volatile uint16_t x220 = UINT16_MAX;
	volatile int32_t t45 = -22870323;

    t45 = (x217==(x218*(x219/x220)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x222 = INT64_MIN;
	static volatile uint64_t x223 = UINT64_MAX;
	int32_t t46 = -181;

    t46 = (x221==(x222*(x223/x224)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x225 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;
	int32_t t47 = 87;

    t47 = (x225==(x226*(x227/x228)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x229 = INT8_MAX;
	int8_t x230 = -3;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = 2;
	volatile int32_t t48 = -114;

    t48 = (x229==(x230*(x231/x232)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x233 = 54U;
	static volatile uint64_t x234 = 6172893063LLU;
	int32_t x236 = INT32_MIN;
	int32_t t49 = -258409976;

    t49 = (x233==(x234*(x235/x236)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = 3433U;
	volatile uint32_t x239 = UINT32_MAX;
	volatile int32_t t50 = 1747790;

    t50 = (x237==(x238*(x239/x240)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = -198448539553475938LL;
	uint8_t x246 = 4U;
	int16_t x247 = -5;
	volatile int32_t t51 = 1083;

    t51 = (x245==(x246*(x247/x248)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x249 = -967;
	int32_t x250 = INT32_MIN;
	static int16_t x251 = INT16_MIN;
	uint32_t x252 = 37378U;

    t52 = (x249==(x250*(x251/x252)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x253 = 27801412LL;
	uint8_t x254 = 3U;
	static uint8_t x255 = UINT8_MAX;
	int32_t x256 = INT32_MAX;
	volatile int32_t t53 = 1;

    t53 = (x253==(x254*(x255/x256)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x262 = INT16_MAX;
	uint32_t x263 = 1918U;
	static uint8_t x264 = UINT8_MAX;
	static int32_t t54 = -22;

    t54 = (x261==(x262*(x263/x264)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x265 = 5477389764220318196LLU;
	uint32_t x266 = 51260499U;
	int64_t x267 = -373728LL;
	int32_t x268 = -1;

    t55 = (x265==(x266*(x267/x268)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x269 = 3758332737157011LLU;
	int16_t x270 = INT16_MAX;
	volatile int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t56 = 286333703;

    t56 = (x269==(x270*(x271/x272)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x277 = 43764LLU;
	int32_t x279 = INT32_MIN;
	static int32_t x280 = INT32_MIN;

    t57 = (x277==(x278*(x279/x280)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x285 = 1093U;
	int8_t x286 = INT8_MAX;
	int8_t x287 = -2;
	static int32_t x288 = -1;
	volatile int32_t t58 = -9;

    t58 = (x285==(x286*(x287/x288)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x297 = INT16_MIN;
	uint64_t x298 = 3549742312LLU;
	uint32_t x299 = UINT32_MAX;

    t59 = (x297==(x298*(x299/x300)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x301 = -1;
	int64_t x304 = INT64_MIN;
	static int32_t t60 = -1286;

    t60 = (x301==(x302*(x303/x304)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MIN;
	static volatile int32_t x307 = -1;
	int64_t x308 = -1LL;
	static int32_t t61 = -23;

    t61 = (x305==(x306*(x307/x308)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x313 = 38;
	int16_t x314 = -5408;
	volatile int16_t x315 = 896;
	int32_t t62 = -3512;

    t62 = (x313==(x314*(x315/x316)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x317 = 9050U;
	static volatile uint32_t x318 = 32262508U;
	int32_t x319 = INT32_MAX;
	int16_t x320 = -1;
	static int32_t t63 = 115414988;

    t63 = (x317==(x318*(x319/x320)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x321 = -1155;
	uint64_t x323 = 6343LLU;
	int64_t x324 = INT64_MAX;

    t64 = (x321==(x322*(x323/x324)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x329 = INT16_MIN;
	static uint64_t x330 = UINT64_MAX;
	static int64_t x332 = -7141841474855117LL;
	int32_t t65 = -13928;

    t65 = (x329==(x330*(x331/x332)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t66 = 102736123;

    t66 = (x333==(x334*(x335/x336)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x337 = INT16_MIN;
	volatile int8_t x338 = -1;
	int8_t x339 = -1;
	int8_t x340 = INT8_MIN;

    t67 = (x337==(x338*(x339/x340)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x341 = -3197;
	uint8_t x342 = UINT8_MAX;
	static uint64_t x343 = 8698897522636845635LLU;
	static int32_t t68 = -3129662;

    t68 = (x341==(x342*(x343/x344)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x346 = -46;
	int32_t t69 = -465169935;

    t69 = (x345==(x346*(x347/x348)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x349 = -78;
	uint64_t x350 = 1077LLU;
	uint64_t x351 = 13137793LLU;
	uint32_t x352 = 10U;

    t70 = (x349==(x350*(x351/x352)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x353 = -1LL;
	uint32_t x354 = 83U;
	volatile uint32_t x356 = 266263161U;

    t71 = (x353==(x354*(x355/x356)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x357 = 4U;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -2708305098092473LL;
	volatile int32_t t72 = 5255;

    t72 = (x357==(x358*(x359/x360)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x363 = UINT16_MAX;
	uint8_t x364 = 2U;
	static volatile int32_t t73 = 1292837;

    t73 = (x361==(x362*(x363/x364)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x369 = 27U;
	uint64_t x370 = UINT64_MAX;
	volatile int16_t x371 = INT16_MAX;
	volatile int64_t x372 = INT64_MIN;
	static int32_t t74 = 75752323;

    t74 = (x369==(x370*(x371/x372)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x377 = 79487LLU;
	int16_t x378 = 138;
	int64_t x379 = -218961690LL;
	static int64_t x380 = INT64_MIN;
	volatile int32_t t75 = 14604102;

    t75 = (x377==(x378*(x379/x380)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x381 = -196080949LL;
	uint16_t x382 = 2345U;
	uint8_t x383 = 87U;
	int32_t x384 = -1;
	volatile int32_t t76 = -21768390;

    t76 = (x381==(x382*(x383/x384)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x386 = UINT16_MAX;
	static uint16_t x387 = 3U;
	volatile int32_t t77 = -770359;

    t77 = (x385==(x386*(x387/x388)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x389 = UINT8_MAX;
	volatile int16_t x390 = INT16_MAX;
	static int8_t x391 = INT8_MIN;
	static volatile int32_t t78 = 762526914;

    t78 = (x389==(x390*(x391/x392)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x393 = -1;
	int64_t x394 = INT64_MAX;
	volatile uint8_t x395 = 6U;

    t79 = (x393==(x394*(x395/x396)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x397 = 105;
	volatile int16_t x399 = -509;
	int8_t x400 = INT8_MIN;

    t80 = (x397==(x398*(x399/x400)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x405 = 5841U;
	static int64_t x406 = INT64_MAX;
	volatile int32_t t81 = -63957;

    t81 = (x405==(x406*(x407/x408)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x409 = INT16_MIN;
	int16_t x410 = 572;
	uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 269U;
	int32_t t82 = -24522;

    t82 = (x409==(x410*(x411/x412)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x413 = 44U;
	int8_t x415 = -6;
	volatile uint16_t x416 = 7U;
	static volatile int32_t t83 = -246343;

    t83 = (x413==(x414*(x415/x416)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x417 = 23224LLU;
	static int16_t x418 = -131;
	int16_t x420 = INT16_MAX;
	static int32_t t84 = 3985;

    t84 = (x417==(x418*(x419/x420)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x421 = INT8_MIN;
	volatile uint32_t x422 = 14067250U;
	int32_t x423 = INT32_MIN;
	int16_t x424 = 78;
	static int32_t t85 = 61;

    t85 = (x421==(x422*(x423/x424)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x425 = -1LL;
	int32_t x426 = INT32_MAX;
	int8_t x427 = INT8_MAX;
	volatile int32_t t86 = -253;

    t86 = (x425==(x426*(x427/x428)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x429 = -82209;
	int16_t x430 = -1;
	static int32_t x431 = 1;
	uint64_t x432 = 2795554340421LLU;
	static int32_t t87 = 222;

    t87 = (x429==(x430*(x431/x432)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x433 = -252032331293586136LL;
	int8_t x434 = 5;
	uint16_t x435 = 0U;
	uint32_t x436 = 902571U;
	static int32_t t88 = -11;

    t88 = (x433==(x434*(x435/x436)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x437 = 16342;
	static uint32_t x438 = UINT32_MAX;
	uint64_t x439 = 20576647LLU;
	int8_t x440 = INT8_MIN;

    t89 = (x437==(x438*(x439/x440)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x441 = INT16_MIN;
	uint16_t x443 = 27U;
	int8_t x444 = INT8_MIN;
	volatile int32_t t90 = -8906;

    t90 = (x441==(x442*(x443/x444)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x445 = -1;
	int16_t x446 = 5899;
	volatile uint16_t x447 = 7U;
	static int32_t x448 = INT32_MAX;

    t91 = (x445==(x446*(x447/x448)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x449 = INT8_MIN;
	volatile uint8_t x451 = UINT8_MAX;
	static int8_t x452 = INT8_MIN;
	int32_t t92 = -50;

    t92 = (x449==(x450*(x451/x452)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x453 = -1;
	int32_t x454 = -69;
	int32_t x455 = INT32_MIN;
	volatile int32_t t93 = -63064;

    t93 = (x453==(x454*(x455/x456)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MAX;
	int32_t x459 = -1;
	static int16_t x460 = -109;

    t94 = (x457==(x458*(x459/x460)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x461 = UINT32_MAX;
	static uint16_t x462 = 29U;
	uint8_t x463 = UINT8_MAX;
	int8_t x464 = -1;

    t95 = (x461==(x462*(x463/x464)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x466 = -35033191;
	int8_t x467 = -1;
	volatile int32_t t96 = -1881;

    t96 = (x465==(x466*(x467/x468)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x478 = UINT64_MAX;
	int32_t t97 = -1729436;

    t97 = (x477==(x478*(x479/x480)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x481 = -105;
	int8_t x482 = -1;
	int32_t x483 = INT32_MIN;
	static int8_t x484 = -7;

    t98 = (x481==(x482*(x483/x484)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x485 = 7U;
	volatile int16_t x486 = 0;
	uint32_t x487 = 12188041U;
	uint32_t x488 = UINT32_MAX;

    t99 = (x485==(x486*(x487/x488)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x490 = UINT32_MAX;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t100 = -435714470;

    t100 = (x489==(x490*(x491/x492)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	static int16_t x495 = -1;
	int8_t x496 = INT8_MIN;
	static int32_t t101 = -5;

    t101 = (x493==(x494*(x495/x496)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x498 = INT64_MIN;
	int16_t x500 = INT16_MIN;
	volatile int32_t t102 = 114848;

    t102 = (x497==(x498*(x499/x500)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x501 = -9861;
	int32_t x502 = INT32_MIN;
	static volatile uint8_t x503 = 9U;
	static uint16_t x504 = 273U;
	volatile int32_t t103 = 3739;

    t103 = (x501==(x502*(x503/x504)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x505 = INT16_MAX;
	uint32_t x507 = 13U;
	int32_t t104 = -1007694;

    t104 = (x505==(x506*(x507/x508)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x509 = 4351439674963LLU;
	int16_t x510 = INT16_MIN;
	volatile int16_t x511 = 159;
	static int16_t x512 = INT16_MAX;
	volatile int32_t t105 = 1;

    t105 = (x509==(x510*(x511/x512)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x514 = INT32_MIN;
	static int64_t x515 = 109LL;
	volatile int16_t x516 = INT16_MIN;
	static int32_t t106 = 981213;

    t106 = (x513==(x514*(x515/x516)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x517 = -1;
	int8_t x518 = INT8_MIN;
	int8_t x519 = -1;
	int32_t t107 = -8862;

    t107 = (x517==(x518*(x519/x520)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x522 = -1;
	uint16_t x523 = 0U;
	int16_t x524 = 464;

    t108 = (x521==(x522*(x523/x524)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x525 = 3U;
	int16_t x526 = -4;
	static volatile int64_t x528 = -1LL;

    t109 = (x525==(x526*(x527/x528)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x530 = 144441521LLU;
	static int8_t x532 = INT8_MIN;
	volatile int32_t t110 = -37479536;

    t110 = (x529==(x530*(x531/x532)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = 31;
	volatile int8_t x535 = -11;
	int32_t x536 = -1;
	volatile int32_t t111 = -231;

    t111 = (x533==(x534*(x535/x536)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x537 = 49;
	int8_t x538 = -7;
	static uint16_t x539 = 2012U;
	int16_t x540 = INT16_MIN;
	int32_t t112 = 3618802;

    t112 = (x537==(x538*(x539/x540)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x541 = 9U;
	int8_t x542 = INT8_MIN;
	int8_t x543 = -4;
	int16_t x544 = -1;
	int32_t t113 = 1416294;

    t113 = (x541==(x542*(x543/x544)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	uint16_t x546 = 9U;
	static int32_t x547 = 93449;
	int8_t x548 = 48;
	volatile int32_t t114 = -1465930;

    t114 = (x545==(x546*(x547/x548)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x549 = INT16_MIN;
	int64_t x551 = 15112887624LL;
	int8_t x552 = INT8_MAX;
	int32_t t115 = 1;

    t115 = (x549==(x550*(x551/x552)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x557 = UINT32_MAX;
	uint32_t x558 = UINT32_MAX;
	int8_t x559 = 0;
	volatile int32_t t116 = -144354;

    t116 = (x557==(x558*(x559/x560)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x561 = 5U;
	int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MIN;
	uint8_t x564 = 46U;

    t117 = (x561==(x562*(x563/x564)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MAX;
	int32_t t118 = 1;

    t118 = (x565==(x566*(x567/x568)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x569 = UINT16_MAX;
	int16_t x570 = 13214;
	int32_t x571 = -4484;
	static volatile uint64_t x572 = UINT64_MAX;
	int32_t t119 = -3788;

    t119 = (x569==(x570*(x571/x572)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x573 = UINT32_MAX;
	static volatile int16_t x574 = INT16_MAX;
	static volatile uint8_t x575 = UINT8_MAX;
	int16_t x576 = INT16_MIN;
	int32_t t120 = -51928608;

    t120 = (x573==(x574*(x575/x576)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x577 = UINT16_MAX;
	int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MAX;
	uint32_t x580 = 1036150U;
	volatile int32_t t121 = 2816;

    t121 = (x577==(x578*(x579/x580)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	uint8_t x582 = UINT8_MAX;
	static uint64_t x583 = 118279638674939LLU;
	static volatile int32_t t122 = 35017194;

    t122 = (x581==(x582*(x583/x584)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x586 = INT64_MIN;
	static uint64_t x587 = 0LLU;
	int32_t x588 = INT32_MAX;
	static volatile int32_t t123 = -499308430;

    t123 = (x585==(x586*(x587/x588)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x589 = -1;
	int32_t x590 = -2328262;
	int32_t x591 = INT32_MIN;
	int64_t x592 = INT64_MAX;

    t124 = (x589==(x590*(x591/x592)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x593 = -1;
	volatile int8_t x594 = -1;
	int32_t x595 = INT32_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t125 = 391339460;

    t125 = (x593==(x594*(x595/x596)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x598 = 32;
	static uint8_t x599 = 2U;
	volatile int32_t t126 = 8;

    t126 = (x597==(x598*(x599/x600)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x601 = 102U;
	int64_t x602 = 398531LL;
	int32_t x604 = -305;

    t127 = (x601==(x602*(x603/x604)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x607 = -31;
	int32_t t128 = -105;

    t128 = (x605==(x606*(x607/x608)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x609 = 55;
	int32_t x611 = INT32_MIN;
	volatile int64_t x612 = -1LL;
	volatile int32_t t129 = -1049874197;

    t129 = (x609==(x610*(x611/x612)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x613 = 1175U;
	static uint16_t x615 = 240U;
	int64_t x616 = -1LL;
	volatile int32_t t130 = 63253191;

    t130 = (x613==(x614*(x615/x616)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x617 = 116U;
	volatile int64_t x620 = 60815232LL;
	int32_t t131 = 210145566;

    t131 = (x617==(x618*(x619/x620)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x621 = INT16_MAX;
	uint8_t x622 = 1U;
	int64_t x623 = -2634973LL;
	volatile uint32_t x624 = 119368U;
	int32_t t132 = 6687649;

    t132 = (x621==(x622*(x623/x624)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x625 = 4682U;
	int8_t x626 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	volatile int16_t x628 = INT16_MAX;
	int32_t t133 = 3548;

    t133 = (x625==(x626*(x627/x628)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x637 = INT64_MAX;
	int64_t x638 = INT64_MAX;
	int32_t x639 = -1;

    t134 = (x637==(x638*(x639/x640)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = 175;
	int8_t x644 = INT8_MIN;
	static int32_t t135 = 1266983;

    t135 = (x641==(x642*(x643/x644)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x645 = INT32_MIN;
	volatile int64_t x646 = -1LL;
	volatile uint16_t x647 = 11087U;
	int8_t x648 = 5;
	static int32_t t136 = -1486;

    t136 = (x645==(x646*(x647/x648)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x650 = 455LL;
	volatile int32_t t137 = -190;

    t137 = (x649==(x650*(x651/x652)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x654 = UINT8_MAX;
	int32_t x655 = -1;
	int64_t x656 = -610771986LL;
	volatile int32_t t138 = 763617;

    t138 = (x653==(x654*(x655/x656)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x657 = UINT8_MAX;
	int32_t x659 = INT32_MIN;
	static uint64_t x660 = UINT64_MAX;
	volatile int32_t t139 = -71131;

    t139 = (x657==(x658*(x659/x660)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x661 = 0;
	static uint32_t x662 = 11639U;
	int32_t x664 = INT32_MIN;
	volatile int32_t t140 = 74628;

    t140 = (x661==(x662*(x663/x664)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x665 = INT8_MIN;
	volatile int64_t x666 = INT64_MAX;
	static int16_t x667 = -1;
	int32_t t141 = -14212;

    t141 = (x665==(x666*(x667/x668)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x669 = 528066LLU;
	int32_t x670 = 445077;
	static int16_t x671 = -1;
	uint16_t x672 = 7563U;
	static volatile int32_t t142 = 4522;

    t142 = (x669==(x670*(x671/x672)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x681 = 3374;
	volatile int32_t x682 = -1;
	int16_t x683 = INT16_MIN;
	volatile uint8_t x684 = 23U;
	volatile int32_t t143 = 23;

    t143 = (x681==(x682*(x683/x684)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x685 = UINT16_MAX;
	volatile int8_t x686 = INT8_MIN;
	static uint64_t x687 = 61345301741345398LLU;
	int16_t x688 = -52;
	volatile int32_t t144 = 0;

    t144 = (x685==(x686*(x687/x688)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x695 = 2225423U;
	static int32_t t145 = -728497415;

    t145 = (x693==(x694*(x695/x696)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x697 = 17683U;
	int16_t x698 = 92;
	int8_t x699 = 3;
	volatile uint32_t x700 = 53U;
	int32_t t146 = 435105;

    t146 = (x697==(x698*(x699/x700)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x701 = INT32_MIN;
	static int16_t x702 = INT16_MIN;
	int8_t x703 = -1;
	static uint8_t x704 = 5U;
	volatile int32_t t147 = 3;

    t147 = (x701==(x702*(x703/x704)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x705 = 872U;
	int32_t x706 = -1;
	int16_t x707 = INT16_MIN;
	int32_t t148 = -1;

    t148 = (x705==(x706*(x707/x708)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	int32_t x710 = 60;
	static volatile uint8_t x711 = 44U;
	int16_t x712 = INT16_MIN;
	int32_t t149 = 170;

    t149 = (x709==(x710*(x711/x712)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x713 = 0U;
	int8_t x715 = 1;
	volatile int16_t x716 = -1;

    t150 = (x713==(x714*(x715/x716)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x717 = -1LL;
	static uint16_t x718 = 21221U;
	static uint64_t x719 = UINT64_MAX;
	volatile int32_t x720 = -1;

    t151 = (x717==(x718*(x719/x720)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x729 = UINT16_MAX;
	static uint32_t x731 = 274U;
	volatile int32_t t152 = -96;

    t152 = (x729==(x730*(x731/x732)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x733 = 13089;
	uint64_t x736 = 3803LLU;
	int32_t t153 = 11;

    t153 = (x733==(x734*(x735/x736)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x738 = INT16_MAX;
	int64_t x739 = INT64_MIN;
	int64_t x740 = INT64_MIN;
	int32_t t154 = 6344;

    t154 = (x737==(x738*(x739/x740)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x742 = INT16_MAX;
	int16_t x743 = -135;
	int16_t x744 = INT16_MIN;
	static int32_t t155 = 6;

    t155 = (x741==(x742*(x743/x744)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x749 = INT64_MIN;
	uint32_t x750 = 241U;
	static int32_t x751 = 252;
	int16_t x752 = -86;
	int32_t t156 = -1963;

    t156 = (x749==(x750*(x751/x752)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x753 = 19592451042563LLU;
	static uint64_t x754 = UINT64_MAX;
	uint64_t x755 = UINT64_MAX;
	int32_t x756 = INT32_MIN;
	volatile int32_t t157 = 1;

    t157 = (x753==(x754*(x755/x756)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x757 = -6949148651LL;
	uint8_t x758 = 84U;
	int64_t x759 = -1LL;
	int16_t x760 = INT16_MIN;
	int32_t t158 = 224383;

    t158 = (x757==(x758*(x759/x760)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x761 = -14;
	int8_t x763 = -1;
	uint16_t x764 = 109U;
	volatile int32_t t159 = -40;

    t159 = (x761==(x762*(x763/x764)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x765 = 241799943672482LLU;
	int32_t x766 = INT32_MAX;
	int8_t x768 = -1;

    t160 = (x765==(x766*(x767/x768)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x777 = 9U;
	int32_t x778 = INT32_MAX;
	int32_t t161 = 258724256;

    t161 = (x777==(x778*(x779/x780)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x781 = 3180U;
	int32_t x782 = -1;
	static uint16_t x783 = 518U;
	static int64_t x784 = -18LL;
	volatile int32_t t162 = -7672588;

    t162 = (x781==(x782*(x783/x784)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = -1LL;
	int32_t x788 = -1;

    t163 = (x785==(x786*(x787/x788)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x789 = 2082835497592338246LLU;
	int8_t x790 = INT8_MIN;
	volatile uint8_t x791 = 95U;
	static uint64_t x792 = UINT64_MAX;

    t164 = (x789==(x790*(x791/x792)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x793 = UINT8_MAX;
	volatile int32_t t165 = -1;

    t165 = (x793==(x794*(x795/x796)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x797 = INT16_MAX;
	static volatile int32_t x798 = -1;
	int32_t x799 = -1;
	int64_t x800 = INT64_MAX;
	int32_t t166 = 1836;

    t166 = (x797==(x798*(x799/x800)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x801 = INT8_MAX;
	volatile uint8_t x802 = 17U;
	int16_t x803 = -1;
	uint32_t x804 = 1033585U;
	volatile int32_t t167 = -102318;

    t167 = (x801==(x802*(x803/x804)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x810 = 4LLU;
	static uint8_t x812 = 20U;

    t168 = (x809==(x810*(x811/x812)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x813 = INT64_MAX;
	volatile uint16_t x814 = UINT16_MAX;
	volatile uint16_t x815 = 3U;
	int8_t x816 = 1;
	volatile int32_t t169 = 33488;

    t169 = (x813==(x814*(x815/x816)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x818 = -60756;
	static int32_t x819 = -1;

    t170 = (x817==(x818*(x819/x820)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x825 = 109U;
	int64_t x826 = -1LL;
	uint8_t x827 = UINT8_MAX;
	int64_t x828 = 60LL;

    t171 = (x825==(x826*(x827/x828)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x829 = 1;
	static int32_t x830 = INT32_MIN;
	int16_t x831 = INT16_MIN;
	static int32_t x832 = 244882556;
	static volatile int32_t t172 = -145;

    t172 = (x829==(x830*(x831/x832)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x833 = INT64_MIN;
	static uint8_t x834 = UINT8_MAX;
	uint16_t x835 = 22416U;
	static int64_t x836 = INT64_MIN;
	int32_t t173 = -109;

    t173 = (x833==(x834*(x835/x836)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x837 = 3;
	uint8_t x838 = 11U;
	static uint16_t x839 = 7639U;
	int64_t x840 = INT64_MIN;
	static int32_t t174 = 27335;

    t174 = (x837==(x838*(x839/x840)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x841 = 157U;
	volatile int8_t x842 = INT8_MAX;
	static volatile int32_t x843 = INT32_MIN;
	static int16_t x844 = INT16_MAX;
	static int32_t t175 = 3;

    t175 = (x841==(x842*(x843/x844)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x849 = INT16_MIN;
	int32_t t176 = 1401116;

    t176 = (x849==(x850*(x851/x852)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x854 = 848565209LL;
	int8_t x855 = 0;
	int32_t t177 = -1;

    t177 = (x853==(x854*(x855/x856)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x857 = 1006349028;
	int8_t x858 = 47;
	static int16_t x859 = INT16_MAX;
	uint32_t x860 = 217218U;
	static volatile int32_t t178 = 7;

    t178 = (x857==(x858*(x859/x860)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x861 = INT32_MIN;
	int16_t x862 = 36;
	int32_t x863 = -1;
	int16_t x864 = INT16_MIN;
	int32_t t179 = 86855819;

    t179 = (x861==(x862*(x863/x864)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x865 = -1LL;
	static volatile int32_t x867 = INT32_MIN;
	volatile int64_t x868 = INT64_MIN;
	volatile int32_t t180 = 52807;

    t180 = (x865==(x866*(x867/x868)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x869 = 94U;
	static int32_t x870 = -207306;
	int8_t x871 = -15;
	uint64_t x872 = 368566370302LLU;

    t181 = (x869==(x870*(x871/x872)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x873 = INT8_MIN;
	static volatile int16_t x875 = INT16_MAX;
	static volatile int32_t t182 = -939511;

    t182 = (x873==(x874*(x875/x876)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x877 = INT64_MIN;
	volatile int32_t x879 = INT32_MAX;
	static int32_t t183 = -483725653;

    t183 = (x877==(x878*(x879/x880)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x881 = 2445978LLU;
	uint16_t x882 = 506U;
	static uint64_t x883 = 26132320145483698LLU;
	int16_t x884 = INT16_MAX;
	static volatile int32_t t184 = 8;

    t184 = (x881==(x882*(x883/x884)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x885 = 63LL;
	uint16_t x886 = UINT16_MAX;
	int8_t x887 = -8;
	int32_t t185 = -32418479;

    t185 = (x885==(x886*(x887/x888)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x892 = INT8_MIN;
	volatile int32_t t186 = 27612918;

    t186 = (x889==(x890*(x891/x892)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x893 = INT16_MAX;
	uint8_t x895 = UINT8_MAX;
	int64_t x896 = 540296441061450552LL;
	volatile int32_t t187 = 0;

    t187 = (x893==(x894*(x895/x896)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x897 = INT32_MIN;
	static int32_t x898 = INT32_MAX;
	int8_t x899 = INT8_MAX;
	static volatile int32_t t188 = -124026062;

    t188 = (x897==(x898*(x899/x900)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x902 = 14;
	volatile int64_t x903 = INT64_MIN;
	int32_t x904 = INT32_MIN;
	int32_t t189 = 1010796289;

    t189 = (x901==(x902*(x903/x904)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x905 = INT64_MIN;
	int8_t x906 = INT8_MIN;
	volatile int64_t x908 = 3416821532LL;
	int32_t t190 = 3;

    t190 = (x905==(x906*(x907/x908)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x909 = 5000602LL;
	static volatile int16_t x910 = INT16_MIN;
	static int16_t x911 = INT16_MAX;
	volatile int32_t t191 = -356752113;

    t191 = (x909==(x910*(x911/x912)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x926 = UINT8_MAX;
	volatile int16_t x928 = -485;
	static int32_t t192 = 33422;

    t192 = (x925==(x926*(x927/x928)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x929 = INT32_MIN;
	uint32_t x931 = 23648349U;
	uint64_t x932 = 166248316341LLU;
	volatile int32_t t193 = 42938923;

    t193 = (x929==(x930*(x931/x932)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x937 = 9619054U;
	int16_t x939 = INT16_MIN;
	uint8_t x940 = 1U;
	static volatile int32_t t194 = 10105;

    t194 = (x937==(x938*(x939/x940)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x941 = INT16_MIN;
	volatile int32_t x942 = -1;
	int64_t x943 = 104038259609LL;
	int16_t x944 = INT16_MAX;
	volatile int32_t t195 = -129451;

    t195 = (x941==(x942*(x943/x944)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x945 = INT32_MIN;
	int16_t x947 = -169;
	int32_t t196 = -58;

    t196 = (x945==(x946*(x947/x948)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x949 = 89497612;
	int8_t x950 = -23;
	uint64_t x951 = UINT64_MAX;
	int8_t x952 = INT8_MIN;
	volatile int32_t t197 = 283019;

    t197 = (x949==(x950*(x951/x952)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x954 = 0U;
	int8_t x955 = INT8_MAX;

    t198 = (x953==(x954*(x955/x956)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x957 = INT16_MIN;
	int32_t x958 = -13403;
	static volatile int8_t x959 = INT8_MIN;
	volatile int8_t x960 = INT8_MIN;
	static volatile int32_t t199 = 38;

    t199 = (x957==(x958*(x959/x960)));

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

