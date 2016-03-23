
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

volatile uint32_t x16 = 678342U;
static uint32_t x18 = 9084802U;
volatile int8_t x19 = -62;
uint32_t x20 = UINT32_MAX;
uint32_t x25 = 15U;
volatile uint32_t t2 = 1119U;
int8_t x62 = 0;
int8_t x75 = -1;
uint32_t x83 = 841U;
volatile uint64_t x88 = 210LLU;
static int32_t x93 = -1073096733;
volatile int8_t x96 = INT8_MIN;
static volatile int32_t t13 = -8763279;
uint16_t x97 = 3U;
uint16_t x105 = 4U;
static int32_t t16 = 1983404;
uint32_t x114 = 7366190U;
int16_t x119 = -1314;
int16_t x122 = INT16_MIN;
static int16_t x123 = INT16_MIN;
int8_t x127 = INT8_MAX;
volatile int32_t t20 = 4;
int32_t x132 = INT32_MIN;
volatile int64_t x142 = INT64_MIN;
volatile int64_t t24 = 1LL;
int64_t x145 = -1LL;
int32_t t26 = 7800;
volatile int8_t x158 = INT8_MIN;
volatile uint32_t t29 = 101911063U;
int64_t x171 = -5670710181943LL;
volatile int32_t t32 = -22153618;
uint16_t x199 = UINT16_MAX;
static volatile int8_t x200 = INT8_MIN;
volatile uint32_t x214 = 95U;
static int32_t t38 = 1666;
uint8_t x217 = UINT8_MAX;
int16_t x227 = INT16_MIN;
volatile int64_t x228 = 4LL;
int8_t x250 = INT8_MIN;
volatile int32_t t47 = -15146062;
int32_t x277 = 4;
int32_t x279 = -838053;
int32_t x286 = INT32_MIN;
uint8_t x289 = 0U;
int32_t x290 = 18559;
volatile uint64_t x291 = 400260471574671LLU;
uint64_t x292 = UINT64_MAX;
int32_t t52 = -2031;
uint32_t x294 = 5U;
int64_t x297 = INT64_MIN;
static volatile int64_t t54 = 1315LL;
volatile int16_t x302 = -1;
int32_t x304 = -1;
uint32_t x311 = 1154U;
uint32_t x320 = 374U;
static int64_t x329 = INT64_MIN;
static volatile int8_t x346 = -55;
static int32_t x356 = INT32_MAX;
int32_t t61 = 512;
volatile int16_t x357 = INT16_MAX;
int16_t x359 = INT16_MAX;
int64_t x363 = INT64_MAX;
static volatile int64_t x381 = INT64_MIN;
static int64_t x388 = INT64_MAX;
volatile int16_t x392 = 0;
volatile int32_t t66 = 1671;
int64_t x401 = INT64_MIN;
uint32_t x403 = 858309855U;
uint16_t x405 = UINT16_MAX;
static uint64_t x406 = UINT64_MAX;
int8_t x408 = -1;
volatile int64_t x409 = INT64_MAX;
int32_t x438 = INT32_MIN;
static volatile uint64_t t74 = 241092425951437LLU;
uint32_t x448 = UINT32_MAX;
static int64_t x457 = -1LL;
int64_t t76 = -229925761098LL;
static int64_t x466 = INT64_MIN;
static volatile int64_t x486 = 1242LL;
volatile int32_t x517 = INT32_MAX;
static volatile int32_t t82 = -1;
uint8_t x521 = 90U;
int8_t x523 = 7;
volatile uint8_t x524 = 28U;
volatile int32_t t83 = -15971;
int64_t x533 = INT64_MIN;
static volatile uint16_t x538 = 20U;
uint16_t x567 = UINT16_MAX;
int8_t x600 = INT8_MAX;
volatile int32_t t95 = 73;
int32_t x611 = INT32_MIN;
int64_t x612 = INT64_MIN;
int32_t x616 = INT32_MAX;
int64_t x617 = INT64_MIN;
int32_t t100 = -3;
int32_t x629 = -1;
int64_t x633 = 321662990LL;
int16_t x634 = INT16_MIN;
int16_t x637 = INT16_MIN;
uint64_t x639 = 385LLU;
int8_t x645 = -1;
static volatile int8_t x660 = INT8_MIN;
uint32_t t107 = 552659219U;
uint8_t x673 = UINT8_MAX;
uint32_t x675 = 26U;
static int64_t x681 = INT64_MIN;
int16_t x684 = 11;
int64_t x686 = INT64_MIN;
uint64_t x688 = UINT64_MAX;
uint32_t x693 = 1703054794U;
static volatile int64_t x713 = -274072303632837221LL;
volatile int16_t x718 = -1;
uint32_t x719 = UINT32_MAX;
int8_t x722 = INT8_MIN;
int16_t x740 = -53;
static int16_t x761 = -149;
int16_t x763 = INT16_MAX;
int16_t x764 = INT16_MAX;
uint8_t x766 = UINT8_MAX;
uint32_t x767 = 4301683U;
int32_t x779 = -1;
int8_t x780 = -1;
uint16_t x791 = 114U;
int32_t x792 = INT32_MAX;
int64_t x814 = -331692LL;
int8_t x815 = INT8_MAX;
volatile uint64_t t130 = 16791796LLU;
int32_t x834 = INT32_MIN;
volatile uint32_t x843 = UINT32_MAX;
volatile int32_t t133 = -59615;
uint16_t x849 = UINT16_MAX;
int32_t x860 = -6;
int8_t x883 = -1;
int16_t x887 = -4;
static uint64_t x888 = UINT64_MAX;
static volatile int16_t x889 = -1;
volatile uint64_t x899 = UINT64_MAX;
volatile int8_t x907 = -13;
volatile int32_t t143 = 53683433;
int64_t x925 = -62LL;
volatile int32_t x945 = INT32_MAX;
int8_t x946 = INT8_MIN;
volatile int32_t t146 = -15;
static volatile int32_t t147 = -41;
int16_t x956 = -249;
uint16_t x957 = 2U;
static uint64_t x971 = UINT64_MAX;
volatile int32_t t151 = 490917;
uint32_t x977 = 3U;
volatile int32_t x1016 = 75;
static int32_t x1024 = 7;
int32_t t156 = -14254;
int8_t x1046 = INT8_MIN;
int32_t x1055 = INT32_MAX;
int32_t x1083 = -1;
volatile int32_t t165 = 182113664;
volatile int8_t x1101 = INT8_MIN;
uint32_t x1103 = UINT32_MAX;
int64_t x1108 = -1LL;
int8_t x1110 = INT8_MIN;
uint16_t x1111 = 135U;
volatile int32_t t168 = 204;
int16_t x1128 = -1;
volatile int8_t x1140 = INT8_MAX;
int32_t x1150 = -1;
static int16_t x1152 = INT16_MIN;
static int64_t x1161 = 5565110897LL;
uint32_t x1171 = 193687366U;
volatile int32_t x1172 = -8619;
int8_t x1192 = INT8_MIN;
int16_t x1202 = -1;
uint32_t x1217 = 24U;
int32_t x1244 = 772;
volatile int8_t x1246 = INT8_MIN;
int16_t x1248 = -1;
int16_t x1284 = INT16_MIN;
volatile int32_t t187 = 9183;
int32_t x1307 = -713483121;
static uint64_t x1310 = 14LLU;
int32_t t190 = -2;
static int16_t x1315 = INT16_MAX;
uint16_t x1319 = 2280U;
volatile int32_t t192 = -220689984;
volatile uint64_t x1328 = UINT64_MAX;
uint16_t x1339 = UINT16_MAX;
uint64_t x1347 = 3858LLU;
static uint64_t t198 = 22123405383540LLU;
int64_t x1353 = -1LL;
int64_t t199 = 1240774546638750512LL;


void f0(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x14 = 15676;
	uint8_t x15 = 5U;
	int32_t t0 = -1611;

    t0 = (x13%(x14<=(x15|x16)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x17 = 29U;
	int32_t t1 = -352793;

    t1 = (x17%(x18<=(x19|x20)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x26 = INT8_MIN;
	uint16_t x27 = 21887U;
	volatile int32_t x28 = 23;

    t2 = (x25%(x26<=(x27|x28)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x33 = UINT64_MAX;
	int32_t x34 = -1;
	uint8_t x35 = 3U;
	volatile uint16_t x36 = 966U;
	volatile uint64_t t3 = 45LLU;

    t3 = (x33%(x34<=(x35|x36)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x37 = -1LL;
	volatile int32_t x38 = 448636549;
	int8_t x39 = -13;
	static uint64_t x40 = UINT64_MAX;
	static volatile int64_t t4 = -10LL;

    t4 = (x37%(x38<=(x39|x40)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x41 = 160698819353032LL;
	uint64_t x42 = UINT64_MAX;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = INT64_MAX;
	int64_t t5 = 58746740LL;

    t5 = (x41%(x42<=(x43|x44)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x57 = INT64_MIN;
	uint8_t x58 = 64U;
	volatile int8_t x59 = -1;
	uint32_t x60 = 35U;
	int64_t t6 = -2878LL;

    t6 = (x57%(x58<=(x59|x60)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x61 = 26952218U;
	uint32_t x63 = 4178U;
	static int8_t x64 = INT8_MIN;
	volatile uint32_t t7 = 514579344U;

    t7 = (x61%(x62<=(x63|x64)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x69 = -1;
	static int16_t x70 = INT16_MIN;
	volatile int32_t x71 = INT32_MAX;
	int32_t x72 = 511;
	volatile int32_t t8 = -1;

    t8 = (x69%(x70<=(x71|x72)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x73 = 0;
	int64_t x74 = -1LL;
	int64_t x76 = 2443351119651LL;
	static int32_t t9 = -5895;

    t9 = (x73%(x74<=(x75|x76)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x77 = INT8_MIN;
	uint64_t x78 = 2754307LLU;
	uint32_t x79 = 0U;
	volatile int32_t x80 = INT32_MIN;
	int32_t t10 = 57219855;

    t10 = (x77%(x78<=(x79|x80)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x81 = INT32_MAX;
	int64_t x82 = INT64_MIN;
	int64_t x84 = INT64_MIN;
	static int32_t t11 = 63;

    t11 = (x81%(x82<=(x83|x84)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x85 = UINT8_MAX;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = -1;
	int32_t t12 = 298010820;

    t12 = (x85%(x86<=(x87|x88)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x94 = UINT32_MAX;
	static int8_t x95 = INT8_MAX;

    t13 = (x93%(x94<=(x95|x96)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x98 = -1;
	int8_t x99 = -1;
	int16_t x100 = 577;
	static int32_t t14 = -49;

    t14 = (x97%(x98<=(x99|x100)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x106 = -2039;
	int64_t x107 = INT64_MAX;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t15 = -809;

    t15 = (x105%(x106<=(x107|x108)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x109 = 125U;
	int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 22901792U;

    t16 = (x109%(x110<=(x111|x112)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x113 = 555728U;
	static uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 1192LLU;
	static volatile uint32_t t17 = 6U;

    t17 = (x113%(x114<=(x115|x116)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x117 = 2U;
	int8_t x118 = INT8_MIN;
	int8_t x120 = -1;
	static int32_t t18 = -1;

    t18 = (x117%(x118<=(x119|x120)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x121 = 19U;
	uint64_t x124 = 14252939745977LLU;
	volatile int32_t t19 = -29310;

    t19 = (x121%(x122<=(x123|x124)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x125 = INT32_MIN;
	uint16_t x126 = UINT16_MAX;
	int64_t x128 = INT64_MAX;

    t20 = (x125%(x126<=(x127|x128)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x129 = -1;
	volatile int16_t x130 = INT16_MIN;
	static int8_t x131 = -41;
	volatile int32_t t21 = 11;

    t21 = (x129%(x130<=(x131|x132)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	uint8_t x135 = 3U;
	int32_t x136 = -816;
	int32_t t22 = 321747;

    t22 = (x133%(x134<=(x135|x136)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MAX;
	uint8_t x139 = UINT8_MAX;
	static uint16_t x140 = UINT16_MAX;
	volatile int64_t t23 = 1186222469089817LL;

    t23 = (x137%(x138<=(x139|x140)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x141 = -1LL;
	static uint8_t x143 = 0U;
	int16_t x144 = INT16_MIN;

    t24 = (x141%(x142<=(x143|x144)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x146 = -1;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = -1LL;
	int64_t t25 = -783LL;

    t25 = (x145%(x146<=(x147|x148)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x149 = -8909;
	int32_t x150 = INT32_MIN;
	static volatile int8_t x151 = -3;
	volatile int16_t x152 = INT16_MAX;

    t26 = (x149%(x150<=(x151|x152)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x153 = INT8_MIN;
	volatile uint16_t x154 = 261U;
	uint32_t x155 = 59751058U;
	int32_t x156 = -119852623;
	volatile int32_t t27 = 19791;

    t27 = (x153%(x154<=(x155|x156)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x157 = -1;
	volatile int16_t x159 = -1;
	int64_t x160 = INT64_MIN;
	static volatile int32_t t28 = -22827;

    t28 = (x157%(x158<=(x159|x160)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x161 = 5249166U;
	volatile int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = 510360121665LL;

    t29 = (x161%(x162<=(x163|x164)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x165 = 647459U;
	int8_t x166 = 0;
	int32_t x167 = 3550511;
	uint32_t x168 = UINT32_MAX;
	uint32_t t30 = 0U;

    t30 = (x165%(x166<=(x167|x168)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x169 = INT32_MAX;
	volatile int8_t x170 = INT8_MIN;
	int8_t x172 = -52;
	volatile int32_t t31 = -18366012;

    t31 = (x169%(x170<=(x171|x172)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x189 = 0U;
	int64_t x190 = INT64_MIN;
	int64_t x191 = -8LL;
	int8_t x192 = INT8_MAX;

    t32 = (x189%(x190<=(x191|x192)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x193 = INT32_MIN;
	uint32_t x194 = 60711U;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 59078LLU;
	volatile int32_t t33 = 32747;

    t33 = (x193%(x194<=(x195|x196)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	volatile int32_t t34 = 0;

    t34 = (x197%(x198<=(x199|x200)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x201 = INT64_MAX;
	int64_t x202 = -1LL;
	volatile int64_t x203 = -1LL;
	uint16_t x204 = 0U;
	volatile int64_t t35 = 14762LL;

    t35 = (x201%(x202<=(x203|x204)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x205 = -11342;
	uint16_t x206 = 1401U;
	volatile int8_t x207 = -1;
	uint64_t x208 = 1400254418762LLU;
	int32_t t36 = -328;

    t36 = (x205%(x206<=(x207|x208)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x209 = 1095;
	volatile int32_t x210 = INT32_MIN;
	int16_t x211 = -1;
	uint16_t x212 = 17046U;
	static int32_t t37 = 2094430;

    t37 = (x209%(x210<=(x211|x212)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x213 = 56U;
	uint8_t x215 = 2U;
	int8_t x216 = -1;

    t38 = (x213%(x214<=(x215|x216)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x218 = 782U;
	int8_t x219 = -6;
	uint64_t x220 = UINT64_MAX;
	int32_t t39 = 28538993;

    t39 = (x217%(x218<=(x219|x220)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x221 = 30U;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = -1;
	uint32_t x224 = 164017330U;
	volatile int32_t t40 = 15;

    t40 = (x221%(x222<=(x223|x224)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x225 = -1498;
	int16_t x226 = INT16_MIN;
	static volatile int32_t t41 = -24;

    t41 = (x225%(x226<=(x227|x228)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x229 = 3U;
	uint32_t x230 = 792U;
	static volatile int32_t x231 = -681;
	int16_t x232 = -9;
	int32_t t42 = -1992444;

    t42 = (x229%(x230<=(x231|x232)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x241 = 56U;
	static int32_t x242 = -6;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	static volatile int32_t t43 = -35164;

    t43 = (x241%(x242<=(x243|x244)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x245 = INT16_MIN;
	volatile int64_t x246 = INT64_MIN;
	uint16_t x247 = 4529U;
	int8_t x248 = INT8_MIN;
	volatile int32_t t44 = -29;

    t44 = (x245%(x246<=(x247|x248)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x249 = 2692;
	static int32_t x251 = -1;
	uint32_t x252 = 229U;
	volatile int32_t t45 = 13797133;

    t45 = (x249%(x250<=(x251|x252)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x253 = INT8_MAX;
	int64_t x254 = -1LL;
	int32_t x255 = -554903;
	volatile int32_t x256 = INT32_MAX;
	int32_t t46 = 11398391;

    t46 = (x253%(x254<=(x255|x256)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x261 = INT16_MIN;
	static int64_t x262 = 917LL;
	static volatile uint32_t x263 = UINT32_MAX;
	int8_t x264 = INT8_MIN;

    t47 = (x261%(x262<=(x263|x264)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	static volatile int16_t x266 = INT16_MIN;
	int16_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t48 = 7046585LLU;

    t48 = (x265%(x266<=(x267|x268)));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x269 = INT32_MIN;
	volatile int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	volatile uint32_t x272 = 1U;
	static int32_t t49 = -61805991;

    t49 = (x269%(x270<=(x271|x272)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x278 = INT8_MIN;
	int32_t x280 = -1;
	int32_t t50 = 24480758;

    t50 = (x277%(x278<=(x279|x280)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x285 = UINT32_MAX;
	int64_t x287 = -11686791LL;
	int8_t x288 = INT8_MAX;
	uint32_t t51 = 5316033U;

    t51 = (x285%(x286<=(x287|x288)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    

    t52 = (x289%(x290<=(x291|x292)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x293 = -1;
	static volatile int16_t x295 = -1;
	volatile uint8_t x296 = UINT8_MAX;
	int32_t t53 = 927950215;

    t53 = (x293%(x294<=(x295|x296)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x298 = 166U;
	int32_t x299 = INT32_MAX;
	uint8_t x300 = UINT8_MAX;

    t54 = (x297%(x298<=(x299|x300)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x301 = UINT16_MAX;
	volatile int32_t x303 = INT32_MAX;
	int32_t t55 = 618;

    t55 = (x301%(x302<=(x303|x304)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x309 = INT64_MIN;
	int64_t x310 = -1LL;
	int8_t x312 = INT8_MAX;
	int64_t t56 = 147040253697LL;

    t56 = (x309%(x310<=(x311|x312)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MAX;
	static int16_t x319 = -13;
	static volatile int64_t t57 = 757LL;

    t57 = (x317%(x318<=(x319|x320)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x330 = 148U;
	uint16_t x331 = 0U;
	int32_t x332 = INT32_MAX;
	int64_t t58 = -7595427517729LL;

    t58 = (x329%(x330<=(x331|x332)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x333 = 13LLU;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	static uint8_t x336 = 25U;
	volatile uint64_t t59 = 3287957460036091LLU;

    t59 = (x333%(x334<=(x335|x336)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x345 = 205LL;
	int32_t x347 = INT32_MAX;
	uint8_t x348 = 18U;
	volatile int64_t t60 = -13081608574883LL;

    t60 = (x345%(x346<=(x347|x348)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x353 = UINT16_MAX;
	int8_t x354 = 0;
	volatile uint64_t x355 = 2129LLU;

    t61 = (x353%(x354<=(x355|x356)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x358 = 2U;
	volatile uint32_t x360 = 66606115U;
	volatile int32_t t62 = 0;

    t62 = (x357%(x358<=(x359|x360)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x361 = INT8_MAX;
	int64_t x362 = INT64_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t63 = -2598817;

    t63 = (x361%(x362<=(x363|x364)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x382 = -1;
	volatile int8_t x383 = -1;
	int16_t x384 = -15649;
	static volatile int64_t t64 = -234LL;

    t64 = (x381%(x382<=(x383|x384)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x385 = UINT16_MAX;
	static int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	int32_t t65 = 604559;

    t65 = (x385%(x386<=(x387|x388)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x389 = 61U;
	static int16_t x390 = 24;
	uint64_t x391 = UINT64_MAX;

    t66 = (x389%(x390<=(x391|x392)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x393 = INT16_MIN;
	int16_t x394 = -1;
	uint16_t x395 = 2291U;
	uint64_t x396 = UINT64_MAX;
	static volatile int32_t t67 = -336;

    t67 = (x393%(x394<=(x395|x396)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x402 = 401950880;
	int64_t x404 = INT64_MAX;
	int64_t t68 = -456501028237LL;

    t68 = (x401%(x402<=(x403|x404)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x407 = INT64_MIN;
	volatile int32_t t69 = -8360;

    t69 = (x405%(x406<=(x407|x408)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	static int32_t x412 = INT32_MAX;
	volatile int64_t t70 = -5934552839443LL;

    t70 = (x409%(x410<=(x411|x412)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x413 = 920789LLU;
	uint32_t x414 = 128467247U;
	volatile uint64_t x415 = 1877931655083LLU;
	uint16_t x416 = UINT16_MAX;
	static uint64_t t71 = 724944696239206LLU;

    t71 = (x413%(x414<=(x415|x416)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x421 = 0U;
	int8_t x422 = INT8_MIN;
	int8_t x423 = -1;
	uint8_t x424 = 1U;
	volatile int32_t t72 = -6;

    t72 = (x421%(x422<=(x423|x424)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x429 = INT16_MAX;
	volatile int8_t x430 = INT8_MIN;
	int8_t x431 = -53;
	int8_t x432 = 5;
	int32_t t73 = 20889;

    t73 = (x429%(x430<=(x431|x432)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x437 = 1LLU;
	int64_t x439 = 15562912851LL;
	uint16_t x440 = 9U;

    t74 = (x437%(x438<=(x439|x440)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	volatile uint16_t x447 = 2968U;
	volatile int32_t t75 = -2084524;

    t75 = (x445%(x446<=(x447|x448)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x458 = 756891708LL;
	int64_t x459 = INT64_MAX;
	volatile int8_t x460 = 0;

    t76 = (x457%(x458<=(x459|x460)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x465 = 3368627879946985LLU;
	uint8_t x467 = UINT8_MAX;
	static int8_t x468 = -1;
	uint64_t t77 = 19697662LLU;

    t77 = (x465%(x466<=(x467|x468)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x485 = 96021;
	int64_t x487 = 9602664639671051LL;
	uint64_t x488 = 65LLU;
	int32_t t78 = 0;

    t78 = (x485%(x486<=(x487|x488)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x493 = 19471U;
	int64_t x494 = 512294589829LL;
	int16_t x495 = INT16_MAX;
	int64_t x496 = INT64_MAX;
	volatile int32_t t79 = 99211;

    t79 = (x493%(x494<=(x495|x496)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x505 = -136353839;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = 24449U;
	volatile int32_t x508 = 1239;
	volatile int32_t t80 = 220710604;

    t80 = (x505%(x506<=(x507|x508)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x513 = INT64_MIN;
	int64_t x514 = -1029517659702332LL;
	int16_t x515 = INT16_MIN;
	volatile uint16_t x516 = 152U;
	volatile int64_t t81 = -92862964312588LL;

    t81 = (x513%(x514<=(x515|x516)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x518 = 143524196910309091LLU;
	int32_t x519 = INT32_MIN;
	uint8_t x520 = 63U;

    t82 = (x517%(x518<=(x519|x520)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x522 = -1;

    t83 = (x521%(x522<=(x523|x524)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x534 = 3144453307366LL;
	int8_t x535 = INT8_MIN;
	volatile uint64_t x536 = UINT64_MAX;
	int64_t t84 = -72556680LL;

    t84 = (x533%(x534<=(x535|x536)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x537 = INT16_MAX;
	static int16_t x539 = INT16_MIN;
	static uint32_t x540 = UINT32_MAX;
	static int32_t t85 = 2;

    t85 = (x537%(x538<=(x539|x540)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x541 = 61879;
	int16_t x542 = INT16_MAX;
	int8_t x543 = 10;
	int32_t x544 = INT32_MAX;
	int32_t t86 = 1;

    t86 = (x541%(x542<=(x543|x544)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x545 = 0;
	uint32_t x546 = 16U;
	uint16_t x547 = 155U;
	int64_t x548 = INT64_MAX;
	int32_t t87 = -1;

    t87 = (x545%(x546<=(x547|x548)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x549 = 16640507U;
	uint16_t x550 = UINT16_MAX;
	int8_t x551 = INT8_MAX;
	uint64_t x552 = 752150980490917LLU;
	uint32_t t88 = 1U;

    t88 = (x549%(x550<=(x551|x552)));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x557 = UINT32_MAX;
	int16_t x558 = -1003;
	static volatile uint8_t x559 = 60U;
	volatile int16_t x560 = 98;
	volatile uint32_t t89 = 30U;

    t89 = (x557%(x558<=(x559|x560)));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x565 = INT16_MAX;
	static volatile int16_t x566 = INT16_MIN;
	static volatile int8_t x568 = INT8_MAX;
	int32_t t90 = 143475;

    t90 = (x565%(x566<=(x567|x568)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x569 = 280;
	int8_t x570 = INT8_MAX;
	int16_t x571 = INT16_MIN;
	uint64_t x572 = 606LLU;
	volatile int32_t t91 = -9986962;

    t91 = (x569%(x570<=(x571|x572)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x581 = INT16_MIN;
	uint8_t x582 = 15U;
	uint64_t x583 = 10LLU;
	uint16_t x584 = UINT16_MAX;
	int32_t t92 = -296786;

    t92 = (x581%(x582<=(x583|x584)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x585 = INT64_MIN;
	volatile int16_t x586 = -16;
	uint8_t x587 = UINT8_MAX;
	int32_t x588 = 155429;
	volatile int64_t t93 = -253867504LL;

    t93 = (x585%(x586<=(x587|x588)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x589 = 8917318342114185LLU;
	static int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MAX;
	static int64_t x592 = -1LL;
	uint64_t t94 = 85258681053435LLU;

    t94 = (x589%(x590<=(x591|x592)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x597 = 2U;
	volatile uint16_t x598 = 28506U;
	uint64_t x599 = UINT64_MAX;

    t95 = (x597%(x598<=(x599|x600)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x601 = -1;
	int8_t x602 = -1;
	int64_t x603 = -1LL;
	volatile uint16_t x604 = 7U;
	volatile int32_t t96 = 1;

    t96 = (x601%(x602<=(x603|x604)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x609 = 48U;
	static uint64_t x610 = 6237210892286564LLU;
	static volatile int32_t t97 = 24941;

    t97 = (x609%(x610<=(x611|x612)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x613 = 59U;
	int64_t x614 = -141686LL;
	int16_t x615 = -1;
	volatile int32_t t98 = -5;

    t98 = (x613%(x614<=(x615|x616)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x618 = UINT64_MAX;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = 11822;
	volatile int64_t t99 = -10271234428581LL;

    t99 = (x617%(x618<=(x619|x620)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x625 = -1;
	uint32_t x626 = 16502U;
	int32_t x627 = -11;
	uint8_t x628 = 19U;

    t100 = (x625%(x626<=(x627|x628)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x630 = -1;
	static int32_t x631 = 207547416;
	int32_t x632 = -1;
	int32_t t101 = 1154;

    t101 = (x629%(x630<=(x631|x632)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x635 = -2;
	int8_t x636 = INT8_MIN;
	volatile int64_t t102 = -8731445072576698LL;

    t102 = (x633%(x634<=(x635|x636)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x638 = 1;
	int64_t x640 = -15LL;
	volatile int32_t t103 = -7198522;

    t103 = (x637%(x638<=(x639|x640)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x646 = INT32_MIN;
	int32_t x647 = -2400113;
	static int16_t x648 = 2281;
	volatile int32_t t104 = 5;

    t104 = (x645%(x646<=(x647|x648)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x653 = INT64_MIN;
	uint8_t x654 = 1U;
	uint64_t x655 = UINT64_MAX;
	volatile int16_t x656 = INT16_MIN;
	volatile int64_t t105 = -229LL;

    t105 = (x653%(x654<=(x655|x656)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x657 = 870389U;
	uint32_t x658 = 0U;
	uint8_t x659 = 1U;
	uint32_t t106 = 0U;

    t106 = (x657%(x658<=(x659|x660)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x661 = 59916U;
	int64_t x662 = -1LL;
	int64_t x663 = INT64_MIN;
	volatile int16_t x664 = -1;

    t107 = (x661%(x662<=(x663|x664)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x669 = INT8_MIN;
	volatile uint64_t x670 = UINT64_MAX;
	static volatile int8_t x671 = INT8_MAX;
	static uint64_t x672 = UINT64_MAX;
	volatile int32_t t108 = 0;

    t108 = (x669%(x670<=(x671|x672)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x674 = -1;
	volatile int8_t x676 = -1;
	int32_t t109 = 1065824;

    t109 = (x673%(x674<=(x675|x676)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x682 = 0;
	static int16_t x683 = INT16_MAX;
	int64_t t110 = -1547207393595327848LL;

    t110 = (x681%(x682<=(x683|x684)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x685 = INT32_MIN;
	volatile int8_t x687 = INT8_MIN;
	volatile int32_t t111 = -829;

    t111 = (x685%(x686<=(x687|x688)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x694 = INT32_MIN;
	static volatile int16_t x695 = -8978;
	int8_t x696 = -1;
	uint32_t t112 = 7815U;

    t112 = (x693%(x694<=(x695|x696)));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x705 = INT16_MAX;
	uint8_t x706 = UINT8_MAX;
	volatile uint64_t x707 = UINT64_MAX;
	volatile uint16_t x708 = 17U;
	volatile int32_t t113 = 15;

    t113 = (x705%(x706<=(x707|x708)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x714 = 1U;
	static volatile int8_t x715 = 7;
	int16_t x716 = 126;
	int64_t t114 = -31087864312LL;

    t114 = (x713%(x714<=(x715|x716)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x717 = INT16_MIN;
	volatile uint8_t x720 = UINT8_MAX;
	int32_t t115 = -16028;

    t115 = (x717%(x718<=(x719|x720)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x721 = -1;
	int16_t x723 = INT16_MAX;
	static uint8_t x724 = 65U;
	static volatile int32_t t116 = -6882425;

    t116 = (x721%(x722<=(x723|x724)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x733 = INT32_MIN;
	int32_t x734 = INT32_MAX;
	uint8_t x735 = 5U;
	int32_t x736 = INT32_MAX;
	int32_t t117 = -97982;

    t117 = (x733%(x734<=(x735|x736)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x737 = -6;
	static uint32_t x738 = 15703799U;
	volatile int16_t x739 = INT16_MAX;
	static int32_t t118 = -5864430;

    t118 = (x737%(x738<=(x739|x740)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x745 = INT64_MIN;
	uint16_t x746 = UINT16_MAX;
	int32_t x747 = INT32_MAX;
	static int8_t x748 = 29;
	int64_t t119 = -3990876951293LL;

    t119 = (x745%(x746<=(x747|x748)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x753 = -1LL;
	volatile int8_t x754 = 0;
	uint16_t x755 = 205U;
	uint64_t x756 = UINT64_MAX;
	volatile int64_t t120 = 2952903LL;

    t120 = (x753%(x754<=(x755|x756)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x762 = INT32_MIN;
	int32_t t121 = 133258256;

    t121 = (x761%(x762<=(x763|x764)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x765 = 0U;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t122 = 17537928;

    t122 = (x765%(x766<=(x767|x768)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x769 = 1749653655985354LLU;
	uint16_t x770 = 11U;
	volatile uint64_t x771 = 28637819276LLU;
	int16_t x772 = INT16_MAX;
	uint64_t t123 = 176640399101418226LLU;

    t123 = (x769%(x770<=(x771|x772)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x777 = 126U;
	int16_t x778 = INT16_MIN;
	static volatile int32_t t124 = -98337;

    t124 = (x777%(x778<=(x779|x780)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x785 = 57U;
	int64_t x786 = -336692875988LL;
	int16_t x787 = INT16_MIN;
	volatile int8_t x788 = INT8_MIN;
	static volatile int32_t t125 = -121504073;

    t125 = (x785%(x786<=(x787|x788)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x789 = INT16_MIN;
	static int8_t x790 = -1;
	int32_t t126 = 0;

    t126 = (x789%(x790<=(x791|x792)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x801 = INT64_MIN;
	volatile uint8_t x802 = 59U;
	uint32_t x803 = 48315U;
	volatile int16_t x804 = 0;
	volatile int64_t t127 = -5943314989237LL;

    t127 = (x801%(x802<=(x803|x804)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x809 = -16141702;
	uint16_t x810 = 3U;
	int16_t x811 = INT16_MAX;
	volatile int64_t x812 = 408446LL;
	int32_t t128 = 16;

    t128 = (x809%(x810<=(x811|x812)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x813 = UINT64_MAX;
	int8_t x816 = -41;
	static volatile uint64_t t129 = 4069952LLU;

    t129 = (x813%(x814<=(x815|x816)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x817 = 8381098263LLU;
	static int16_t x818 = -1;
	int16_t x819 = 16;
	int64_t x820 = INT64_MAX;

    t130 = (x817%(x818<=(x819|x820)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x821 = -3760;
	volatile int32_t x822 = INT32_MIN;
	int64_t x823 = INT64_MAX;
	static uint32_t x824 = 43362U;
	volatile int32_t t131 = -1776081;

    t131 = (x821%(x822<=(x823|x824)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x833 = 99578826047785LL;
	uint8_t x835 = UINT8_MAX;
	static int32_t x836 = INT32_MAX;
	volatile int64_t t132 = 37993298LL;

    t132 = (x833%(x834<=(x835|x836)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x841 = 51U;
	uint8_t x842 = 94U;
	uint64_t x844 = UINT64_MAX;

    t133 = (x841%(x842<=(x843|x844)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x850 = 7801870500492551811LLU;
	uint16_t x851 = UINT16_MAX;
	int8_t x852 = INT8_MIN;
	volatile int32_t t134 = -185377243;

    t134 = (x849%(x850<=(x851|x852)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x857 = 36157299U;
	uint64_t x858 = 913898974568LLU;
	static int16_t x859 = INT16_MAX;
	volatile uint32_t t135 = 3U;

    t135 = (x857%(x858<=(x859|x860)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x869 = UINT32_MAX;
	static uint64_t x870 = 2010111154695458921LLU;
	int16_t x871 = INT16_MIN;
	volatile uint16_t x872 = UINT16_MAX;
	static volatile uint32_t t136 = 253485453U;

    t136 = (x869%(x870<=(x871|x872)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x873 = INT16_MIN;
	uint8_t x874 = UINT8_MAX;
	int64_t x875 = 0LL;
	volatile uint32_t x876 = 10664683U;
	volatile int32_t t137 = 29883;

    t137 = (x873%(x874<=(x875|x876)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x881 = INT32_MIN;
	volatile int32_t x882 = -1;
	int16_t x884 = INT16_MAX;
	int32_t t138 = -1232;

    t138 = (x881%(x882<=(x883|x884)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x885 = -1;
	static uint64_t x886 = 61602822LLU;
	int32_t t139 = 2703;

    t139 = (x885%(x886<=(x887|x888)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x890 = 1U;
	int8_t x891 = 39;
	int64_t x892 = INT64_MAX;
	volatile int32_t t140 = -9;

    t140 = (x889%(x890<=(x891|x892)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x897 = INT32_MIN;
	uint8_t x898 = 15U;
	static int16_t x900 = INT16_MIN;
	static volatile int32_t t141 = 14631991;

    t141 = (x897%(x898<=(x899|x900)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x901 = INT16_MIN;
	static uint64_t x902 = 1028LLU;
	static volatile int32_t x903 = -12360623;
	int32_t x904 = 2;
	static volatile int32_t t142 = -85738;

    t142 = (x901%(x902<=(x903|x904)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x905 = UINT16_MAX;
	uint32_t x906 = 54U;
	uint8_t x908 = 104U;

    t143 = (x905%(x906<=(x907|x908)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x917 = -1;
	int64_t x918 = INT64_MIN;
	int8_t x919 = INT8_MAX;
	int64_t x920 = INT64_MIN;
	static int32_t t144 = -18;

    t144 = (x917%(x918<=(x919|x920)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x926 = INT64_MIN;
	volatile int32_t x927 = -1458;
	uint16_t x928 = UINT16_MAX;
	int64_t t145 = 292674078646775914LL;

    t145 = (x925%(x926<=(x927|x928)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x947 = 190306846;
	int8_t x948 = INT8_MIN;

    t146 = (x945%(x946<=(x947|x948)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x949 = 0;
	static int32_t x950 = INT32_MIN;
	int64_t x951 = -1LL;
	volatile uint64_t x952 = 8514500804LLU;

    t147 = (x949%(x950<=(x951|x952)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x953 = INT16_MAX;
	int32_t x954 = INT32_MIN;
	volatile uint8_t x955 = 1U;
	int32_t t148 = 10317;

    t148 = (x953%(x954<=(x955|x956)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x958 = -2;
	int8_t x959 = -4;
	uint8_t x960 = 59U;
	int32_t t149 = 92847247;

    t149 = (x957%(x958<=(x959|x960)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x961 = -921;
	int8_t x962 = INT8_MIN;
	int16_t x963 = -1;
	uint64_t x964 = 452664288443LLU;
	static volatile int32_t t150 = 971;

    t150 = (x961%(x962<=(x963|x964)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x969 = INT8_MIN;
	static uint16_t x970 = UINT16_MAX;
	int64_t x972 = INT64_MIN;

    t151 = (x969%(x970<=(x971|x972)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x978 = 5;
	uint8_t x979 = 16U;
	volatile uint16_t x980 = 6U;
	uint32_t t152 = 3U;

    t152 = (x977%(x978<=(x979|x980)));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1001 = INT8_MIN;
	int64_t x1002 = -1LL;
	static volatile uint32_t x1003 = 1345855U;
	uint32_t x1004 = UINT32_MAX;
	volatile int32_t t153 = -192201;

    t153 = (x1001%(x1002<=(x1003|x1004)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1009 = -1;
	int64_t x1010 = -123842601987843LL;
	uint16_t x1011 = 5U;
	volatile int32_t x1012 = -1;
	volatile int32_t t154 = 1;

    t154 = (x1009%(x1010<=(x1011|x1012)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1013 = -1;
	int32_t x1014 = INT32_MIN;
	uint16_t x1015 = 5U;
	volatile int32_t t155 = -69;

    t155 = (x1013%(x1014<=(x1015|x1016)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1021 = -77;
	int64_t x1022 = -5145389LL;
	uint8_t x1023 = 6U;

    t156 = (x1021%(x1022<=(x1023|x1024)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x1029 = INT8_MIN;
	int16_t x1030 = -160;
	int16_t x1031 = INT16_MAX;
	int16_t x1032 = INT16_MIN;
	static volatile int32_t t157 = -88464;

    t157 = (x1029%(x1030<=(x1031|x1032)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1033 = UINT64_MAX;
	uint16_t x1034 = UINT16_MAX;
	int16_t x1035 = INT16_MIN;
	static volatile uint32_t x1036 = 2420698U;
	volatile uint64_t t158 = 40686040159009723LLU;

    t158 = (x1033%(x1034<=(x1035|x1036)));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x1041 = -1;
	uint64_t x1042 = 57296LLU;
	int16_t x1043 = -952;
	int32_t x1044 = INT32_MIN;
	int32_t t159 = -2;

    t159 = (x1041%(x1042<=(x1043|x1044)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1045 = -1;
	uint64_t x1047 = UINT64_MAX;
	int64_t x1048 = INT64_MAX;
	volatile int32_t t160 = -1;

    t160 = (x1045%(x1046<=(x1047|x1048)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1053 = UINT64_MAX;
	int16_t x1054 = INT16_MIN;
	int32_t x1056 = INT32_MAX;
	volatile uint64_t t161 = 1757268459LLU;

    t161 = (x1053%(x1054<=(x1055|x1056)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x1065 = 1;
	int64_t x1066 = INT64_MIN;
	uint32_t x1067 = 58683352U;
	uint32_t x1068 = 216U;
	volatile int32_t t162 = 15785;

    t162 = (x1065%(x1066<=(x1067|x1068)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1069 = INT16_MIN;
	uint16_t x1070 = 14291U;
	static volatile uint8_t x1071 = 4U;
	uint64_t x1072 = 223464869460670LLU;
	int32_t t163 = -17;

    t163 = (x1069%(x1070<=(x1071|x1072)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1077 = UINT32_MAX;
	int64_t x1078 = -611583802245763486LL;
	int16_t x1079 = -1;
	int64_t x1080 = INT64_MAX;
	static volatile uint32_t t164 = 42310U;

    t164 = (x1077%(x1078<=(x1079|x1080)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1081 = UINT16_MAX;
	int32_t x1082 = INT32_MIN;
	int32_t x1084 = -160787;

    t165 = (x1081%(x1082<=(x1083|x1084)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1102 = INT64_MIN;
	uint64_t x1104 = UINT64_MAX;
	volatile int32_t t166 = -40651843;

    t166 = (x1101%(x1102<=(x1103|x1104)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1105 = -123LL;
	int64_t x1106 = INT64_MIN;
	uint8_t x1107 = UINT8_MAX;
	volatile int64_t t167 = -7114033624LL;

    t167 = (x1105%(x1106<=(x1107|x1108)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1109 = INT32_MIN;
	int8_t x1112 = INT8_MIN;

    t168 = (x1109%(x1110<=(x1111|x1112)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1121 = 5458384LLU;
	int64_t x1122 = -1LL;
	uint16_t x1123 = UINT16_MAX;
	int32_t x1124 = 3;
	static volatile uint64_t t169 = 11389LLU;

    t169 = (x1121%(x1122<=(x1123|x1124)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1125 = INT8_MIN;
	int16_t x1126 = -1;
	uint32_t x1127 = 1021640012U;
	volatile int32_t t170 = -211680552;

    t170 = (x1125%(x1126<=(x1127|x1128)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x1137 = 351U;
	static int16_t x1138 = -1;
	int16_t x1139 = 16;
	volatile int32_t t171 = 7;

    t171 = (x1137%(x1138<=(x1139|x1140)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1141 = INT8_MIN;
	int16_t x1142 = 7;
	uint16_t x1143 = UINT16_MAX;
	static uint64_t x1144 = 67923LLU;
	int32_t t172 = -2313;

    t172 = (x1141%(x1142<=(x1143|x1144)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1149 = INT64_MAX;
	int8_t x1151 = -1;
	static volatile int64_t t173 = -862888598874910LL;

    t173 = (x1149%(x1150<=(x1151|x1152)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1162 = INT16_MAX;
	uint64_t x1163 = UINT64_MAX;
	volatile uint64_t x1164 = UINT64_MAX;
	volatile int64_t t174 = 3994926LL;

    t174 = (x1161%(x1162<=(x1163|x1164)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1169 = INT16_MAX;
	volatile int64_t x1170 = 28LL;
	volatile int32_t t175 = -153245;

    t175 = (x1169%(x1170<=(x1171|x1172)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x1185 = -1;
	static uint64_t x1186 = 130LLU;
	int32_t x1187 = 152426706;
	volatile int32_t x1188 = INT32_MIN;
	int32_t t176 = -1464809;

    t176 = (x1185%(x1186<=(x1187|x1188)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1189 = 50;
	static int32_t x1190 = INT32_MIN;
	uint8_t x1191 = 27U;
	int32_t t177 = 71154;

    t177 = (x1189%(x1190<=(x1191|x1192)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1201 = UINT64_MAX;
	int16_t x1203 = 1662;
	static int8_t x1204 = -1;
	volatile uint64_t t178 = 4199872413412800LLU;

    t178 = (x1201%(x1202<=(x1203|x1204)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x1218 = INT32_MIN;
	int8_t x1219 = 52;
	volatile uint8_t x1220 = 1U;
	uint32_t t179 = 6328U;

    t179 = (x1217%(x1218<=(x1219|x1220)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1221 = 55U;
	volatile int64_t x1222 = -1LL;
	int32_t x1223 = INT32_MIN;
	uint32_t x1224 = UINT32_MAX;
	static int32_t t180 = 1;

    t180 = (x1221%(x1222<=(x1223|x1224)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1241 = INT8_MIN;
	uint64_t x1242 = 83078322LLU;
	volatile int8_t x1243 = INT8_MIN;
	int32_t t181 = -27;

    t181 = (x1241%(x1242<=(x1243|x1244)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1245 = 1;
	volatile int64_t x1247 = INT64_MAX;
	int32_t t182 = 1984;

    t182 = (x1245%(x1246<=(x1247|x1248)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1269 = -1;
	uint32_t x1270 = 423990169U;
	volatile uint8_t x1271 = UINT8_MAX;
	int8_t x1272 = INT8_MIN;
	int32_t t183 = 3488;

    t183 = (x1269%(x1270<=(x1271|x1272)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1273 = INT16_MIN;
	int16_t x1274 = INT16_MIN;
	int64_t x1275 = 2035347833LL;
	int16_t x1276 = INT16_MIN;
	volatile int32_t t184 = 190591651;

    t184 = (x1273%(x1274<=(x1275|x1276)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1281 = 4146078210317876LL;
	uint32_t x1282 = 500975U;
	int16_t x1283 = INT16_MIN;
	int64_t t185 = 3057LL;

    t185 = (x1281%(x1282<=(x1283|x1284)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1285 = UINT64_MAX;
	int16_t x1286 = -1;
	int64_t x1287 = 1931392671068LL;
	uint16_t x1288 = UINT16_MAX;
	static uint64_t t186 = 10016223322441LLU;

    t186 = (x1285%(x1286<=(x1287|x1288)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1289 = INT16_MIN;
	int8_t x1290 = INT8_MIN;
	volatile int16_t x1291 = -25;
	int32_t x1292 = INT32_MAX;

    t187 = (x1289%(x1290<=(x1291|x1292)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1301 = 134849341U;
	int8_t x1302 = -4;
	uint64_t x1303 = UINT64_MAX;
	uint64_t x1304 = UINT64_MAX;
	uint32_t t188 = 66850250U;

    t188 = (x1301%(x1302<=(x1303|x1304)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1305 = INT32_MIN;
	static uint64_t x1306 = 7050242706170883LLU;
	int64_t x1308 = -3670199LL;
	volatile int32_t t189 = 0;

    t189 = (x1305%(x1306<=(x1307|x1308)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1309 = INT16_MIN;
	static int32_t x1311 = INT32_MIN;
	static int64_t x1312 = -19LL;

    t190 = (x1309%(x1310<=(x1311|x1312)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1313 = 1;
	uint8_t x1314 = 3U;
	int8_t x1316 = INT8_MAX;
	volatile int32_t t191 = -619630000;

    t191 = (x1313%(x1314<=(x1315|x1316)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1317 = INT16_MAX;
	int16_t x1318 = -2478;
	volatile uint32_t x1320 = UINT32_MAX;

    t192 = (x1317%(x1318<=(x1319|x1320)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1325 = -1370948798944808669LL;
	int16_t x1326 = INT16_MIN;
	int8_t x1327 = -1;
	volatile int64_t t193 = 129079421644165785LL;

    t193 = (x1325%(x1326<=(x1327|x1328)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x1329 = 3958LLU;
	volatile int32_t x1330 = INT32_MIN;
	uint16_t x1331 = 5959U;
	volatile int64_t x1332 = -43344990LL;
	uint64_t t194 = 16001567587641LLU;

    t194 = (x1329%(x1330<=(x1331|x1332)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1333 = -1LL;
	int32_t x1334 = INT32_MAX;
	uint32_t x1335 = 56934U;
	int8_t x1336 = INT8_MIN;
	int64_t t195 = -51304LL;

    t195 = (x1333%(x1334<=(x1335|x1336)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1337 = -61;
	uint16_t x1338 = 6012U;
	static uint8_t x1340 = 19U;
	int32_t t196 = -5042;

    t196 = (x1337%(x1338<=(x1339|x1340)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1345 = 10U;
	uint8_t x1346 = 0U;
	int16_t x1348 = -1;
	int32_t t197 = -720925920;

    t197 = (x1345%(x1346<=(x1347|x1348)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1349 = 706367LLU;
	volatile int16_t x1350 = INT16_MIN;
	int8_t x1351 = 1;
	static int32_t x1352 = 9;

    t198 = (x1349%(x1350<=(x1351|x1352)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1354 = INT16_MIN;
	int16_t x1355 = -5419;
	uint64_t x1356 = UINT64_MAX;

    t199 = (x1353%(x1354<=(x1355|x1356)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

