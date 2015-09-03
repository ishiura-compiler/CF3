#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -919;
int16_t x18 = 1;
volatile int32_t x19 = INT32_MIN;
volatile int16_t x20 = 15395;
int32_t x25 = INT32_MIN;
uint64_t x30 = 33207872892478LLU;
int16_t x31 = INT16_MIN;
static int32_t t7 = -46844;
int32_t t8 = 6;
int8_t x43 = INT8_MIN;
int16_t x45 = INT16_MIN;
static uint8_t x48 = 3U;
int32_t x51 = -1;
int8_t x52 = INT8_MIN;
uint64_t x70 = 7933282408199LLU;
int8_t x78 = INT8_MIN;
static volatile int32_t t19 = 52567;
static uint8_t x90 = 9U;
int16_t x95 = INT16_MAX;
volatile int16_t x97 = INT16_MIN;
int32_t x103 = -1;
int32_t t24 = 114271517;
uint64_t x106 = 370127849418656036LLU;
int32_t t25 = 35378;
int32_t x110 = 276402;
int32_t x118 = INT32_MIN;
static volatile uint64_t x127 = 3LLU;
int32_t t29 = 232;
int8_t x136 = -1;
uint8_t x137 = 3U;
int32_t x141 = INT32_MAX;
uint32_t x146 = UINT32_MAX;
int8_t x152 = INT8_MAX;
int8_t x154 = INT8_MIN;
static int32_t x155 = 19006444;
volatile int32_t t36 = 46;
static uint8_t x166 = 95U;
static volatile int32_t t40 = -200934992;
uint8_t x181 = 17U;
int16_t x184 = INT16_MAX;
static uint16_t x188 = 4U;
int8_t x203 = -3;
int8_t x209 = INT8_MIN;
uint64_t x213 = 80408299258966010LLU;
int32_t x216 = 1339;
static int8_t x218 = -1;
int8_t x221 = INT8_MIN;
volatile int32_t t51 = 44699970;
int8_t x232 = -1;
int64_t x241 = 825LL;
volatile int32_t x242 = INT32_MIN;
uint32_t x245 = 10423816U;
uint8_t x248 = 5U;
volatile uint16_t x249 = 1U;
uint64_t x250 = 6321732530196911LLU;
int32_t t57 = -1;
int8_t x254 = INT8_MAX;
uint64_t x260 = 791LLU;
volatile int32_t t59 = 63110237;
static int16_t x261 = INT16_MAX;
int16_t x263 = INT16_MIN;
int32_t t60 = 51569;
int32_t t61 = -103;
int64_t x269 = INT64_MIN;
uint8_t x276 = UINT8_MAX;
volatile int32_t t63 = -56232;
uint8_t x288 = UINT8_MAX;
int32_t t67 = 39030;
uint64_t x295 = UINT64_MAX;
int32_t x300 = -1;
int32_t x303 = INT32_MAX;
static int16_t x304 = INT16_MIN;
int32_t t70 = -31067;
uint16_t x307 = 1798U;
int64_t x316 = -1320LL;
static uint64_t x320 = 60893699LLU;
int32_t x334 = INT32_MAX;
uint8_t x336 = 45U;
int16_t x337 = 5859;
uint64_t x340 = UINT64_MAX;
static int32_t x344 = -24074212;
volatile int8_t x345 = 3;
volatile int32_t t81 = -3;
volatile int8_t x352 = INT8_MAX;
static volatile int32_t t82 = -48;
uint32_t x354 = 3103U;
volatile int8_t x355 = INT8_MAX;
int16_t x356 = INT16_MAX;
int32_t t83 = -506;
int32_t t84 = -511108;
int32_t x370 = -1;
int16_t x371 = INT16_MIN;
static int32_t x374 = INT32_MIN;
static int64_t x381 = INT64_MAX;
int64_t x382 = INT64_MAX;
uint16_t x383 = 5995U;
volatile int32_t t94 = 3;
static int32_t x415 = 5;
uint16_t x422 = 989U;


void f0(void) {
	int64_t x1 = 27973989LL;
	int32_t x2 = INT32_MAX;
	volatile int32_t x3 = -57048104;
	static int64_t x4 = 535432697360120LL;
	int32_t t0 = -101620956;

	t0 = ((x1%x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int8_t x6 = -1;
	volatile int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 7952339;

	t1 = ((x5%x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x11 = 3192;
	int32_t x12 = 49192520;
	int32_t t2 = -252513;

	t2 = ((x9%x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int64_t x14 = -1459001172345390322LL;
	int16_t x15 = -2;
	int16_t x16 = -1;
	volatile int32_t t3 = -25050;

	t3 = ((x13%x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int32_t t4 = -11;

	t4 = ((x17%x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 13409;
	int64_t x22 = INT64_MIN;
	int64_t x23 = 2954975LL;
	static int8_t x24 = INT8_MIN;
	static int32_t t5 = 42;

	t5 = ((x21%x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static uint16_t x27 = 0U;
	int32_t x28 = -1509392;
	int32_t t6 = 3776150;

	t6 = ((x25%x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static uint16_t x32 = 5U;

	t7 = ((x29%x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 3050;
	uint64_t x34 = 1508496020LLU;
	int32_t x35 = 1;
	uint32_t x36 = 116U;

	t8 = ((x33%x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	static int16_t x38 = INT16_MAX;
	uint32_t x39 = UINT32_MAX;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 108521;

	t9 = ((x37%x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int64_t x42 = -443773LL;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -266;

	t10 = ((x41%x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	int64_t x47 = -447987260375169301LL;
	volatile int32_t t11 = -1;

	t11 = ((x45%x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = -1LL;
	int16_t x50 = INT16_MAX;
	int32_t t12 = -2002752;

	t12 = ((x49%x50)==(x51|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	static uint16_t x56 = 2U;
	static int32_t t13 = -50904036;

	t13 = ((x53%x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MAX;
	uint64_t x60 = 5751962062485LLU;
	static volatile int32_t t14 = 1420381;

	t14 = ((x57%x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -2534;
	int64_t x66 = INT64_MIN;
	uint32_t x67 = 16483556U;
	volatile uint8_t x68 = 124U;
	int32_t t15 = 6927;

	t15 = ((x65%x66)==(x67|x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 821U;
	int8_t x71 = -1;
	volatile int8_t x72 = INT8_MIN;
	int32_t t16 = -7895;

	t16 = ((x69%x70)==(x71|x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	volatile int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -31;
	volatile int32_t t17 = -384580415;

	t17 = ((x73%x74)==(x75|x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	int64_t x79 = 696537062486719LL;
	int8_t x80 = INT8_MAX;
	int32_t t18 = -61872462;

	t18 = ((x77%x78)==(x79|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = INT64_MAX;
	static int16_t x82 = INT16_MAX;
	static uint64_t x83 = 570503596201295906LLU;
	int32_t x84 = -86305064;

	t19 = ((x81%x82)==(x83|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -2363518LL;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -1512963;
	int64_t x88 = INT64_MIN;
	int32_t t20 = -40418329;

	t20 = ((x85%x86)==(x87|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x91 = 6;
	volatile uint32_t x92 = 16643339U;
	volatile int32_t t21 = -799;

	t21 = ((x89%x90)==(x91|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	static int32_t x94 = 949;
	static int64_t x96 = -1LL;
	volatile int32_t t22 = 26205;

	t22 = ((x93%x94)==(x95|x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MIN;
	static int8_t x99 = INT8_MAX;
	volatile int16_t x100 = INT16_MIN;
	int32_t t23 = -44106288;

	t23 = ((x97%x98)==(x99|x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 28539045U;
	uint8_t x102 = 12U;
	static uint16_t x104 = 640U;

	t24 = ((x101%x102)==(x103|x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	static int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;

	t25 = ((x105%x106)==(x107|x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t26 = 90046732;

	t26 = ((x109%x110)==(x111|x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	volatile int64_t x119 = 51238702415LL;
	static volatile uint16_t x120 = 7U;
	static int32_t t27 = -158;

	t27 = ((x117%x118)==(x119|x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	int8_t x122 = -20;
	volatile int8_t x123 = -1;
	int8_t x124 = -2;
	static volatile int32_t t28 = -749262805;

	t28 = ((x121%x122)==(x123|x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = -2;
	uint8_t x126 = 77U;
	volatile int64_t x128 = INT64_MAX;

	t29 = ((x125%x126)==(x127|x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = -1LL;
	int64_t x130 = -28LL;
	volatile int16_t x131 = -1;
	volatile uint64_t x132 = 80726959952601511LLU;
	int32_t t30 = -3720;

	t30 = ((x129%x130)==(x131|x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 2389;
	int8_t x134 = 1;
	static int64_t x135 = -1LL;
	static volatile int32_t t31 = -3405;

	t31 = ((x133%x134)==(x135|x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = -1;
	static uint64_t x139 = 25303LLU;
	int8_t x140 = 45;
	int32_t t32 = 224011;

	t32 = ((x137%x138)==(x139|x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x142 = INT32_MAX;
	uint64_t x143 = 342985201705LLU;
	static int8_t x144 = INT8_MAX;
	int32_t t33 = 41;

	t33 = ((x141%x142)==(x143|x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -22LL;
	volatile int16_t x147 = INT16_MAX;
	uint64_t x148 = 45184443LLU;
	int32_t t34 = 265199;

	t34 = ((x145%x146)==(x147|x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x149 = -1;
	static volatile int64_t x150 = 642349503LL;
	int32_t x151 = 27;
	volatile int32_t t35 = 80784;

	t35 = ((x149%x150)==(x151|x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int16_t x156 = INT16_MIN;

	t36 = ((x153%x154)==(x155|x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = -1;
	int8_t x159 = -2;
	int32_t x160 = INT32_MAX;
	int32_t t37 = -5618;

	t37 = ((x157%x158)==(x159|x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MIN;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = INT32_MAX;
	uint16_t x164 = UINT16_MAX;
	int32_t t38 = 16253;

	t38 = ((x161%x162)==(x163|x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MAX;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = 50;
	volatile int32_t t39 = 630;

	t39 = ((x165%x166)==(x167|x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MIN;
	static volatile int8_t x171 = -1;
	uint64_t x172 = 6252299278424741473LLU;

	t40 = ((x169%x170)==(x171|x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x177 = 89;
	static uint8_t x178 = 66U;
	int32_t x179 = INT32_MAX;
	volatile uint8_t x180 = UINT8_MAX;
	int32_t t41 = -508;

	t41 = ((x177%x178)==(x179|x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x182 = 1;
	static volatile uint64_t x183 = 95544659750828359LLU;
	volatile int32_t t42 = -1643032;

	t42 = ((x181%x182)==(x183|x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 10U;
	int16_t x186 = -1;
	volatile uint8_t x187 = 1U;
	volatile int32_t t43 = -16;

	t43 = ((x185%x186)==(x187|x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MAX;
	int16_t x190 = -9684;
	int8_t x191 = -1;
	volatile uint32_t x192 = 22U;
	volatile int32_t t44 = 24258;

	t44 = ((x189%x190)==(x191|x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = 836238;
	int64_t x194 = INT64_MAX;
	uint64_t x195 = 22LLU;
	static int8_t x196 = -1;
	static volatile int32_t t45 = -12;

	t45 = ((x193%x194)==(x195|x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	int64_t x202 = INT64_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t46 = -12;

	t46 = ((x201%x202)==(x203|x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x205 = UINT32_MAX;
	uint8_t x206 = 30U;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t47 = 21128580;

	t47 = ((x205%x206)==(x207|x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x210 = -74194658712LL;
	static int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	int32_t t48 = -27662;

	t48 = ((x209%x210)==(x211|x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MAX;
	volatile int32_t t49 = 0;

	t49 = ((x213%x214)==(x215|x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x219 = 22229191LLU;
	uint8_t x220 = 27U;
	int32_t t50 = -803601222;

	t50 = ((x217%x218)==(x219|x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x222 = -1;
	uint16_t x223 = 148U;
	volatile int64_t x224 = 126974LL;

	t51 = ((x221%x222)==(x223|x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = 69U;
	uint32_t x228 = 253772862U;
	static volatile int32_t t52 = 861;

	t52 = ((x225%x226)==(x227|x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 25321828U;
	int32_t x230 = 15061518;
	int16_t x231 = -1;
	int32_t t53 = -634623205;

	t53 = ((x229%x230)==(x231|x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 901849158313LLU;
	int16_t x238 = INT16_MAX;
	uint8_t x239 = 1U;
	volatile uint8_t x240 = 30U;
	volatile int32_t t54 = -539;

	t54 = ((x237%x238)==(x239|x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x243 = -1;
	uint8_t x244 = 2U;
	int32_t t55 = -1644304;

	t55 = ((x241%x242)==(x243|x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x246 = -1LL;
	static int32_t x247 = -8133083;
	static int32_t t56 = 120579461;

	t56 = ((x245%x246)==(x247|x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x251 = -1LL;
	static int8_t x252 = -1;

	t57 = ((x249%x250)==(x251|x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	int64_t x255 = -11LL;
	int64_t x256 = 8068036LL;
	int32_t t58 = -220484490;

	t58 = ((x253%x254)==(x255|x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 0;
	int16_t x258 = INT16_MAX;
	static int64_t x259 = INT64_MAX;

	t59 = ((x257%x258)==(x259|x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x262 = 1190648U;
	static int32_t x264 = INT32_MIN;

	t60 = ((x261%x262)==(x263|x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = 24;
	int64_t x266 = 4LL;
	uint64_t x267 = 6610242244072LLU;
	int64_t x268 = 5886419885911439LL;

	t61 = ((x265%x266)==(x267|x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MAX;
	static uint16_t x272 = UINT16_MAX;
	static int32_t t62 = 13505;

	t62 = ((x269%x270)==(x271|x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -3710820;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = -1;

	t63 = ((x273%x274)==(x275|x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = INT8_MIN;
	static int16_t x278 = INT16_MIN;
	int8_t x279 = 6;
	uint32_t x280 = UINT32_MAX;
	static int32_t t64 = 603;

	t64 = ((x277%x278)==(x279|x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = -511533;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 3771647U;
	int32_t t65 = 1;

	t65 = ((x281%x282)==(x283|x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -9LL;
	volatile uint16_t x287 = 3U;
	volatile int32_t t66 = -7;

	t66 = ((x285%x286)==(x287|x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -1231LL;
	int16_t x292 = -1;

	t67 = ((x289%x290)==(x291|x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x293 = INT8_MAX;
	volatile uint8_t x294 = 9U;
	uint64_t x296 = UINT64_MAX;
	int32_t t68 = -4;

	t68 = ((x293%x294)==(x295|x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MIN;
	volatile uint64_t x298 = 1938245404LLU;
	static uint32_t x299 = UINT32_MAX;
	volatile int32_t t69 = 34111489;

	t69 = ((x297%x298)==(x299|x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 95319U;

	t70 = ((x301%x302)==(x303|x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x305 = INT16_MIN;
	static volatile int64_t x306 = -1LL;
	static volatile uint8_t x308 = 1U;
	static volatile int32_t t71 = -15728;

	t71 = ((x305%x306)==(x307|x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = 93;
	volatile uint32_t x312 = 609650U;
	int32_t t72 = -3683;

	t72 = ((x309%x310)==(x311|x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = 79055710606063462LLU;
	static int8_t x314 = -36;
	volatile int64_t x315 = -1LL;
	static volatile int32_t t73 = -22503824;

	t73 = ((x313%x314)==(x315|x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = 2;
	int32_t x318 = INT32_MAX;
	uint8_t x319 = 21U;
	int32_t t74 = -5566116;

	t74 = ((x317%x318)==(x319|x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	volatile uint16_t x322 = 3U;
	int64_t x323 = -1LL;
	volatile int16_t x324 = INT16_MAX;
	int32_t t75 = 3;

	t75 = ((x321%x322)==(x323|x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 51;
	int64_t x326 = 687386LL;
	int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t76 = -360970;

	t76 = ((x325%x326)==(x327|x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MAX;
	int64_t x331 = INT64_MAX;
	uint64_t x332 = 62698817557LLU;
	int32_t t77 = 2;

	t77 = ((x329%x330)==(x331|x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x335 = 9U;
	volatile int32_t t78 = -872761;

	t78 = ((x333%x334)==(x335|x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x338 = -1;
	uint16_t x339 = 3345U;
	volatile int32_t t79 = -1;

	t79 = ((x337%x338)==(x339|x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MIN;
	static int32_t x342 = INT32_MAX;
	uint32_t x343 = 5U;
	int32_t t80 = -810;

	t80 = ((x341%x342)==(x343|x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x346 = -2920;
	volatile int16_t x347 = -4100;
	int32_t x348 = -1;

	t81 = ((x345%x346)==(x347|x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = INT64_MIN;
	int16_t x351 = -1;

	t82 = ((x349%x350)==(x351|x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x353 = -3792;

	t83 = ((x353%x354)==(x355|x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -1;
	int32_t x358 = -1;
	uint32_t x359 = 73U;
	int32_t x360 = INT32_MIN;

	t84 = ((x357%x358)==(x359|x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x361 = 416U;
	static volatile uint8_t x362 = UINT8_MAX;
	volatile int8_t x363 = -1;
	int64_t x364 = 172151LL;
	volatile int32_t t85 = 5829540;

	t85 = ((x361%x362)==(x363|x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = -21;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 0U;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t86 = 6709;

	t86 = ((x365%x366)==(x367|x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = UINT64_MAX;
	static volatile int32_t x372 = INT32_MAX;
	int32_t t87 = -2958375;

	t87 = ((x369%x370)==(x371|x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = -1LL;
	int32_t t88 = 51;

	t88 = ((x373%x374)==(x375|x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x384 = INT32_MIN;
	volatile int32_t t89 = -9;

	t89 = ((x381%x382)==(x383|x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x385 = INT16_MIN;
	uint8_t x386 = UINT8_MAX;
	uint16_t x387 = 142U;
	volatile int8_t x388 = -1;
	int32_t t90 = 362;

	t90 = ((x385%x386)==(x387|x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 6LLU;
	volatile int32_t x390 = 3635183;
	int64_t x391 = -151104790LL;
	static int16_t x392 = INT16_MAX;
	volatile int32_t t91 = 13275569;

	t91 = ((x389%x390)==(x391|x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MAX;
	static volatile int8_t x394 = INT8_MIN;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = 6U;
	volatile int32_t t92 = 240245;

	t92 = ((x393%x394)==(x395|x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x397 = INT64_MIN;
	static uint64_t x398 = 6537399490224682LLU;
	int16_t x399 = 9221;
	uint64_t x400 = 175663LLU;
	int32_t t93 = 10;

	t93 = ((x397%x398)==(x399|x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MAX;
	volatile int64_t x402 = 38417652124LL;
	volatile int32_t x403 = -3;
	int64_t x404 = INT64_MIN;

	t94 = ((x401%x402)==(x403|x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x406 = INT64_MIN;
	uint16_t x407 = 2U;
	int64_t x408 = 4160745870501LL;
	int32_t t95 = 347313176;

	t95 = ((x405%x406)==(x407|x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = -22729866LL;
	static uint64_t x410 = 2436753666209LLU;
	uint16_t x411 = UINT16_MAX;
	static volatile int32_t x412 = INT32_MIN;
	int32_t t96 = -163;

	t96 = ((x409%x410)==(x411|x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MIN;
	uint16_t x416 = UINT16_MAX;
	static int32_t t97 = 279;

	t97 = ((x413%x414)==(x415|x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = INT8_MIN;
	uint8_t x418 = 2U;
	volatile int64_t x419 = -57165311661LL;
	int8_t x420 = 20;
	volatile int32_t t98 = 7;

	t98 = ((x417%x418)==(x419|x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x421 = -1;
	static int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MIN;
	volatile int32_t t99 = 101451308;

	t99 = ((x421%x422)==(x423|x424));

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

