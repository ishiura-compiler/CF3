#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x21 = 39U;
static uint64_t x22 = UINT64_MAX;
uint8_t x29 = 1U;
int16_t x30 = 9188;
static uint64_t x49 = 6492092419336LLU;
int64_t x50 = INT64_MIN;
uint64_t t10 = 132584343LLU;
int32_t x59 = -1;
volatile int8_t x67 = 1;
int8_t x78 = INT8_MAX;
int16_t x83 = INT16_MAX;
static uint64_t x90 = 182390685548653LLU;
int64_t x92 = 96301799298965LL;
uint8_t x99 = 2U;
int16_t x105 = INT16_MAX;
int32_t x109 = -1;
int32_t x112 = -1;
volatile int32_t t25 = 23;
uint32_t x117 = UINT32_MAX;
int16_t x119 = INT16_MIN;
uint8_t x126 = UINT8_MAX;
int32_t x128 = 93762853;
volatile int32_t x137 = INT32_MIN;
volatile int16_t x143 = -1;
int16_t x145 = -11313;
uint8_t x162 = 105U;
static int64_t x166 = -3722770187459256LL;
int32_t x167 = 14659;
volatile uint64_t t36 = 195355632375LLU;
int16_t x179 = -2251;
static volatile uint32_t t37 = 15413043U;
uint64_t x183 = UINT64_MAX;
volatile uint64_t t38 = 1096760472681198LLU;
int16_t x185 = -1;
int64_t x188 = INT64_MIN;
volatile int64_t x199 = -1LL;
static int32_t x206 = INT32_MIN;
uint16_t x207 = 93U;
uint64_t x212 = 469822LLU;
volatile uint32_t t45 = UINT32_MAX;
static int32_t x219 = INT32_MAX;
int64_t t47 = 18054904LL;
uint16_t x233 = UINT16_MAX;
uint64_t x240 = 522LLU;
int64_t t52 = -423050625229LL;
int8_t x247 = INT8_MIN;
volatile int16_t x252 = -115;
int64_t t54 = 70248601LL;
uint16_t x253 = 362U;
int16_t x258 = -11;
static volatile uint16_t x275 = UINT16_MAX;
volatile int16_t x284 = -1;
volatile uint64_t x285 = 33814201473LLU;
volatile int16_t x293 = INT16_MIN;
uint32_t x294 = UINT32_MAX;
int8_t x296 = 1;
volatile uint32_t t64 = 9753053U;
static volatile int32_t x309 = -1;
int64_t t68 = -261010LL;
uint16_t x314 = 21788U;
uint16_t x320 = 7U;
static int8_t x321 = INT8_MAX;
int64_t x326 = INT64_MIN;
int32_t x333 = 0;
volatile uint8_t x337 = 19U;
int64_t x340 = INT64_MIN;
static uint16_t x342 = 50U;
volatile int16_t x344 = -1;
int32_t x345 = -168;
int8_t x347 = 0;
uint8_t x356 = 75U;
uint64_t x363 = UINT64_MAX;
uint32_t x364 = UINT32_MAX;
static uint16_t x367 = 57U;
int32_t x373 = INT32_MIN;
int32_t x378 = -1;
static volatile int8_t x379 = INT8_MIN;
uint8_t x387 = UINT8_MAX;
uint32_t x396 = UINT32_MAX;
static int8_t x397 = INT8_MIN;
static volatile int32_t t92 = -141597984;
int32_t x420 = INT32_MAX;
int32_t x423 = INT32_MIN;
uint64_t t94 = 544LLU;
volatile int32_t x425 = INT32_MAX;
static int64_t t96 = -90434746109345LL;
volatile int8_t x433 = 7;
static int8_t x435 = INT8_MIN;


void f0(void) {
	int64_t x5 = 1146357222605105689LL;
	uint16_t x6 = UINT16_MAX;
	volatile int32_t x7 = INT32_MIN;
	volatile uint64_t x8 = 13443LLU;
	volatile uint64_t t0 = 1752222274743232799LLU;

	t0 = ((x5%x6)+(x7|x8));

	if (t0 != 18446744071562107755LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static volatile int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = -41;
	uint32_t t1 = 55862U;

	t1 = ((x9%x10)+(x11|x12));

	if (t1 != 4294967167U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 2;
	volatile int64_t x14 = 509855767LL;
	int64_t x15 = -1LL;
	static int32_t x16 = 3678193;
	volatile int64_t t2 = 1653045808565789032LL;

	t2 = ((x13%x14)+(x15|x16));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 27;
	static int32_t x18 = INT32_MAX;
	int64_t x19 = 6LL;
	int32_t x20 = INT32_MAX;
	int64_t t3 = 66666366139LL;

	t3 = ((x17%x18)+(x19|x20));

	if (t3 != 2147483674LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x23 = 130924944933LLU;
	static int32_t x24 = INT32_MIN;
	volatile uint64_t t4 = 8611264464936LLU;

	t4 = ((x21%x22)+(x23|x24));

	if (t4 != 18446744073637994060LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x31 = INT32_MIN;
	volatile int32_t x32 = INT32_MAX;
	int32_t t5 = 20856;

	t5 = ((x29%x30)+(x31|x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = INT16_MAX;
	int32_t x34 = -17178;
	uint8_t x35 = 3U;
	int16_t x36 = 6355;
	int32_t t6 = -26;

	t6 = ((x33%x34)+(x35|x36));

	if (t6 != 21944) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 0;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MAX;
	static int16_t x40 = INT16_MAX;
	volatile uint64_t t7 = 4754820LLU;

	t7 = ((x37%x38)+(x39|x40));

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 3U;
	uint64_t x42 = 26339578697642433LLU;
	uint64_t x43 = 194282LLU;
	volatile uint16_t x44 = UINT16_MAX;
	volatile uint64_t t8 = 1045053097262816506LLU;

	t8 = ((x41%x42)+(x43|x44));

	if (t8 != 196610LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	static uint8_t x47 = 9U;
	int32_t x48 = -1;
	static volatile int32_t t9 = 217790;

	t9 = ((x45%x46)+(x47|x48));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x51 = INT8_MIN;
	uint64_t x52 = 6476794304568LLU;

	t10 = ((x49%x50)+(x51|x52));

	if (t10 != 6492092419264LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 103U;
	volatile int16_t x54 = -12796;
	uint32_t x55 = 1U;
	static int8_t x56 = -1;
	volatile uint32_t t11 = 1281787310U;

	t11 = ((x53%x54)+(x55|x56));

	if (t11 != 102U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = 3741856760255LL;
	int8_t x60 = -3;
	int64_t t12 = -8937LL;

	t12 = ((x57%x58)+(x59|x60));

	if (t12 != 1955080541716LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = -1;
	int32_t x68 = -1;
	volatile int32_t t13 = -7069462;

	t13 = ((x65%x66)+(x67|x68));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x69 = 1441U;
	static int8_t x70 = INT8_MIN;
	volatile int64_t x71 = 593350740069293LL;
	uint32_t x72 = 11355U;
	volatile int64_t t14 = -2011708322LL;

	t14 = ((x69%x70)+(x71|x72));

	if (t14 != 593350740080032LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -721;
	int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MAX;
	static volatile int64_t t15 = -5258818068010LL;

	t15 = ((x73%x74)+(x75|x76));

	if (t15 != 9223372036854775086LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x77 = 9;
	int64_t x79 = INT64_MAX;
	volatile int32_t x80 = INT32_MIN;
	volatile int64_t t16 = -29LL;

	t16 = ((x77%x78)+(x79|x80));

	if (t16 != 8LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -10LL;
	int32_t x82 = INT32_MIN;
	uint8_t x84 = 4U;
	int64_t t17 = -1334066182LL;

	t17 = ((x81%x82)+(x83|x84));

	if (t17 != 32757LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x85 = 4U;
	uint64_t x86 = UINT64_MAX;
	int8_t x87 = -7;
	static int16_t x88 = -1;
	static volatile uint64_t t18 = 7569656267LLU;

	t18 = ((x85%x86)+(x87|x88));

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x89 = INT64_MIN;
	int32_t x91 = INT32_MAX;
	volatile uint64_t t19 = 1699425277612585LLU;

	t19 = ((x89%x90)+(x91|x92));

	if (t19 != 153763249136810LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x93 = -253829;
	int16_t x94 = -1;
	static volatile uint16_t x95 = 20714U;
	int8_t x96 = INT8_MAX;
	volatile int32_t t20 = -2;

	t20 = ((x93%x94)+(x95|x96));

	if (t20 != 20735) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int8_t x98 = INT8_MAX;
	static int16_t x100 = 821;
	static volatile int32_t t21 = -15100;

	t21 = ((x97%x98)+(x99|x100));

	if (t21 != 822) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = UINT64_MAX;
	static int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 0;
	volatile uint64_t t22 = 4102036551852795LLU;

	t22 = ((x101%x102)+(x103|x104));

	if (t22 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x106 = 13339LLU;
	static int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	uint64_t t23 = 1LLU;

	t23 = ((x105%x106)+(x107|x108));

	if (t23 != 9223372036854781897LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x110 = UINT8_MAX;
	uint8_t x111 = UINT8_MAX;
	static int32_t t24 = -8186;

	t24 = ((x109%x110)+(x111|x112));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x113 = INT32_MIN;
	uint8_t x114 = 108U;
	int32_t x115 = 670;
	int8_t x116 = INT8_MIN;

	t25 = ((x113%x114)+(x115|x116));

	if (t25 != -190) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x118 = UINT64_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = 8LLU;

	t26 = ((x117%x118)+(x119|x120));

	if (t26 != 4294967294LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 25484255U;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -5;
	uint8_t x124 = 2U;
	uint32_t t27 = 2065U;

	t27 = ((x121%x122)+(x123|x124));

	if (t27 != 25484250U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x125 = 4U;
	uint64_t x127 = 3113304411720135709LLU;
	static volatile uint64_t t28 = 203559209LLU;

	t28 = ((x125%x126)+(x127|x128));

	if (t28 != 3113304411812574529LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = 112209119LL;
	int16_t x131 = INT16_MIN;
	static int16_t x132 = 1640;
	int64_t t29 = -68217541439127154LL;

	t29 = ((x129%x130)+(x131|x132));

	if (t29 != -35431710LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = -71;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t30 = 1869841LLU;

	t30 = ((x137%x138)+(x139|x140));

	if (t30 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x141 = 21692U;
	volatile int8_t x142 = -1;
	int16_t x144 = -1;
	int32_t t31 = 22655;

	t31 = ((x141%x142)+(x143|x144));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t32 = 223;

	t32 = ((x145%x146)+(x147|x148));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = 21;
	static volatile uint64_t x158 = 479038LLU;
	int32_t x159 = -1;
	uint32_t x160 = 149499U;
	volatile uint64_t t33 = 926349000010LLU;

	t33 = ((x157%x158)+(x159|x160));

	if (t33 != 4294967316LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = -1;
	uint16_t x163 = 10212U;
	volatile uint32_t x164 = UINT32_MAX;
	uint32_t t34 = 962169U;

	t34 = ((x161%x162)+(x163|x164));

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x165 = 12249391LL;
	int16_t x168 = -1;
	static volatile int64_t t35 = -63174734338LL;

	t35 = ((x165%x166)+(x167|x168));

	if (t35 != 12249390LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x173 = 586422915LLU;
	int16_t x174 = -1;
	uint64_t x175 = 7135648844LLU;
	uint64_t x176 = 32LLU;

	t36 = ((x173%x174)+(x175|x176));

	if (t36 != 7722071791LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = UINT32_MAX;
	volatile uint32_t x178 = 33465405U;
	volatile uint32_t x180 = 3032U;

	t37 = ((x177%x178)+(x179|x180));

	if (t37 != 11395452U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MAX;
	volatile int32_t x182 = -3;
	int32_t x184 = -1;

	t38 = ((x181%x182)+(x183|x184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x186 = -903857706946678756LL;
	uint8_t x187 = 9U;
	volatile int64_t t39 = 181499683661526LL;

	t39 = ((x185%x186)+(x187|x188));

	if (t39 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x189 = -1;
	volatile uint8_t x190 = UINT8_MAX;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	int32_t t40 = 205837082;

	t40 = ((x189%x190)+(x191|x192));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MIN;
	static int8_t x194 = INT8_MIN;
	uint32_t x195 = 263U;
	static uint16_t x196 = 30U;
	uint32_t t41 = 99574612U;

	t41 = ((x193%x194)+(x195|x196));

	if (t41 != 287U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = INT8_MIN;
	volatile int64_t x198 = -24161791702285774LL;
	static int16_t x200 = INT16_MAX;
	static int64_t t42 = 63320LL;

	t42 = ((x197%x198)+(x199|x200));

	if (t42 != -129LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x208 = INT32_MAX;
	volatile int32_t t43 = INT32_MAX;

	t43 = ((x205%x206)+(x207|x208));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = -8205;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	uint64_t t44 = 0LLU;

	t44 = ((x209%x210)+(x211|x212));

	if (t44 != 18446744071562537777LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 1U;
	int32_t x215 = -1;
	static uint32_t x216 = 131341746U;

	t45 = ((x213%x214)+(x215|x216));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = -1;
	volatile uint16_t x220 = 5U;
	volatile int32_t t46 = INT32_MAX;

	t46 = ((x217%x218)+(x219|x220));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 116U;
	int32_t x222 = -247;
	volatile int64_t x223 = INT64_MIN;
	int64_t x224 = -1LL;

	t47 = ((x221%x222)+(x223|x224));

	if (t47 != 115LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x225 = 34;
	int8_t x226 = 1;
	volatile uint64_t x227 = 4449105LLU;
	int32_t x228 = INT32_MIN;
	uint64_t t48 = 74LLU;

	t48 = ((x225%x226)+(x227|x228));

	if (t48 != 18446744071566517073LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MIN;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MAX;
	int16_t x232 = INT16_MAX;
	int64_t t49 = 32223355LL;

	t49 = ((x229%x230)+(x231|x232));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = -6;
	uint64_t t50 = 2068177858181LLU;

	t50 = ((x233%x234)+(x235|x236));

	if (t50 != 65534LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = -58461605;
	uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MAX;
	volatile uint64_t t51 = 4119457LLU;

	t51 = ((x237%x238)+(x239|x240));

	if (t51 != 28382LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -64LL;
	static uint16_t x242 = 10U;
	int64_t x243 = -20140882603690LL;
	int8_t x244 = INT8_MIN;

	t52 = ((x241%x242)+(x243|x244));

	if (t52 != -46LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = -1;
	int8_t x246 = -1;
	volatile int64_t x248 = INT64_MIN;
	int64_t t53 = 45186092LL;

	t53 = ((x245%x246)+(x247|x248));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x249 = INT32_MIN;
	int32_t x250 = 11125;
	int64_t x251 = INT64_MIN;

	t54 = ((x249%x250)+(x251|x252));

	if (t54 != -2763LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x254 = -2909;
	int8_t x255 = 1;
	static volatile int16_t x256 = -38;
	volatile int32_t t55 = -77;

	t55 = ((x253%x254)+(x255|x256));

	if (t55 != 325) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x257 = 13439208969261369LLU;
	static volatile int16_t x259 = INT16_MAX;
	static volatile int64_t x260 = -1LL;
	volatile uint64_t t56 = 141941685263818647LLU;

	t56 = ((x257%x258)+(x259|x260));

	if (t56 != 13439208969261368LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	uint16_t x263 = 27U;
	static int32_t x264 = INT32_MIN;
	int32_t t57 = -101;

	t57 = ((x261%x262)+(x263|x264));

	if (t57 != -2147483623) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x269 = 1708U;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	volatile uint8_t x272 = 46U;
	volatile int32_t t58 = 51;

	t58 = ((x269%x270)+(x271|x272));

	if (t58 != 1963) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 12U;
	int16_t x274 = 1;
	uint64_t x276 = 23073598127667LLU;
	static volatile uint64_t t59 = 27196810236516512LLU;

	t59 = ((x273%x274)+(x275|x276));

	if (t59 != 23073598144511LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x277 = 0U;
	volatile int16_t x278 = INT16_MAX;
	uint32_t x279 = UINT32_MAX;
	volatile int8_t x280 = -1;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x277%x278)+(x279|x280));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MIN;
	static uint8_t x282 = 17U;
	uint16_t x283 = 8100U;
	volatile int64_t t61 = -6238698134LL;

	t61 = ((x281%x282)+(x283|x284));

	if (t61 != -10LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x286 = 44LLU;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = 1U;
	uint64_t t62 = 2128256163460LLU;

	t62 = ((x285%x286)+(x287|x288));

	if (t62 != 296LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x289 = INT16_MIN;
	static volatile int8_t x290 = INT8_MAX;
	static volatile int16_t x291 = INT16_MAX;
	int16_t x292 = 0;
	int32_t t63 = 6029432;

	t63 = ((x289%x290)+(x291|x292));

	if (t63 != 32765) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x295 = 0U;

	t64 = ((x293%x294)+(x295|x296));

	if (t64 != 4294934529U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = -1LL;
	static int32_t x298 = 662257365;
	int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MAX;
	int64_t t65 = -8768877116308LL;

	t65 = ((x297%x298)+(x299|x300));

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x301 = INT32_MAX;
	int64_t x302 = -1LL;
	int64_t x303 = INT64_MIN;
	int8_t x304 = -1;
	int64_t t66 = -29205013608946665LL;

	t66 = ((x301%x302)+(x303|x304));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x305 = -1;
	volatile int16_t x306 = -1;
	int16_t x307 = -1;
	volatile int16_t x308 = 7603;
	int32_t t67 = 198331691;

	t67 = ((x305%x306)+(x307|x308));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = INT16_MAX;
	int64_t x311 = INT64_MIN;
	static int32_t x312 = INT32_MIN;

	t68 = ((x309%x310)+(x311|x312));

	if (t68 != -2147483649LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MAX;
	static uint32_t x315 = 14U;
	int32_t x316 = INT32_MIN;
	uint32_t t69 = 4488768U;

	t69 = ((x313%x314)+(x315|x316));

	if (t69 != 2147498453U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x317 = 0U;
	int16_t x318 = INT16_MIN;
	uint8_t x319 = UINT8_MAX;
	static volatile int32_t t70 = 19111;

	t70 = ((x317%x318)+(x319|x320));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x322 = 31582U;
	int32_t x323 = -6853;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t71 = -2;

	t71 = ((x321%x322)+(x323|x324));

	if (t71 != -6726) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = -4418981426081569570LL;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;
	static volatile int64_t t72 = 148959831267LL;

	t72 = ((x325%x326)+(x327|x328));

	if (t72 != -4418981426081569571LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = 20;
	static uint64_t x330 = UINT64_MAX;
	volatile int64_t x331 = INT64_MAX;
	volatile int64_t x332 = INT64_MIN;
	uint64_t t73 = 8994031LLU;

	t73 = ((x329%x330)+(x331|x332));

	if (t73 != 19LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x334 = 53U;
	volatile int8_t x335 = 0;
	uint16_t x336 = 4U;
	volatile int32_t t74 = 26;

	t74 = ((x333%x334)+(x335|x336));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x338 = 14LLU;
	uint32_t x339 = UINT32_MAX;
	static uint64_t t75 = 35432010974386707LLU;

	t75 = ((x337%x338)+(x339|x340));

	if (t75 != 9223372041149743108LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x343 = 214;
	int32_t t76 = 44;

	t76 = ((x341%x342)+(x343|x344));

	if (t76 != 34) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x346 = -1;
	volatile int16_t x348 = 15904;
	int32_t t77 = 7804;

	t77 = ((x345%x346)+(x347|x348));

	if (t77 != 15904) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x353 = INT64_MIN;
	volatile int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MIN;
	static int64_t t78 = -15909078868247533LL;

	t78 = ((x353%x354)+(x355|x356));

	if (t78 != -32693LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x357 = 749046496;
	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = UINT16_MAX;
	volatile int16_t x360 = -1;
	volatile uint32_t t79 = 855725862U;

	t79 = ((x357%x358)+(x359|x360));

	if (t79 != 749046495U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x361 = -374;
	int8_t x362 = INT8_MIN;
	volatile uint64_t t80 = 1942961666LLU;

	t80 = ((x361%x362)+(x363|x364));

	if (t80 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = INT64_MAX;
	volatile int16_t x366 = -1;
	int64_t x368 = 9341227LL;
	static int64_t t81 = 60486139LL;

	t81 = ((x365%x366)+(x367|x368));

	if (t81 != 9341243LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x369 = -171684962821202LL;
	int8_t x370 = INT8_MAX;
	int16_t x371 = -1;
	volatile int8_t x372 = -8;
	int64_t t82 = -90499969442476LL;

	t82 = ((x369%x370)+(x371|x372));

	if (t82 != -45LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x374 = UINT64_MAX;
	static uint16_t x375 = UINT16_MAX;
	int64_t x376 = INT64_MAX;
	volatile uint64_t t83 = 501LLU;

	t83 = ((x373%x374)+(x375|x376));

	if (t83 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = -183138115496043LL;
	uint32_t x380 = 12009U;
	int64_t t84 = 6175432404686LL;

	t84 = ((x377%x378)+(x379|x380));

	if (t84 != 4294967273LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = INT8_MIN;
	static uint16_t x382 = UINT16_MAX;
	int32_t x383 = -1;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t85 = -479;

	t85 = ((x381%x382)+(x383|x384));

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x385 = UINT16_MAX;
	int32_t x386 = -1;
	uint8_t x388 = 2U;
	volatile int32_t t86 = -3;

	t86 = ((x385%x386)+(x387|x388));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x389 = 117394U;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = -1;
	int64_t x392 = INT64_MAX;
	volatile int64_t t87 = -24498985LL;

	t87 = ((x389%x390)+(x391|x392));

	if (t87 != 93LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 11833U;
	int16_t x394 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t t88 = 3423LLU;

	t88 = ((x393%x394)+(x395|x396));

	if (t88 != 11832LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x398 = UINT8_MAX;
	uint64_t x399 = 110LLU;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t89 = 3LLU;

	t89 = ((x397%x398)+(x399|x400));

	if (t89 != 18446744073709518830LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x401 = INT16_MIN;
	uint16_t x402 = 1U;
	int64_t x403 = -1LL;
	static int32_t x404 = 75306211;
	int64_t t90 = -12868628043LL;

	t90 = ((x401%x402)+(x403|x404));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x409 = 82475321618219004LL;
	uint16_t x410 = 164U;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = 0;
	int64_t t91 = -648LL;

	t91 = ((x409%x410)+(x411|x412));

	if (t91 != 399LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x413 = 65;
	volatile int32_t x414 = -1;
	volatile int8_t x415 = INT8_MIN;
	static volatile int32_t x416 = INT32_MAX;

	t92 = ((x413%x414)+(x415|x416));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x417 = -1LL;
	int64_t x418 = INT64_MIN;
	int32_t x419 = -1;
	int64_t t93 = 1017267251103686742LL;

	t93 = ((x417%x418)+(x419|x420));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x421 = 7U;
	static int32_t x422 = INT32_MAX;
	uint64_t x424 = 1937260035667LLU;

	t94 = ((x421%x422)+(x423|x424));

	if (t94 != 18446744071791853146LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x426 = -1;
	static int16_t x427 = INT16_MIN;
	static int16_t x428 = -1;
	int32_t t95 = -436921;

	t95 = ((x425%x426)+(x427|x428));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = -1;
	uint8_t x431 = 71U;
	int64_t x432 = 24577658307760LL;

	t96 = ((x429%x430)+(x431|x432));

	if (t96 != 24577658307831LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x434 = INT64_MAX;
	static uint64_t x436 = UINT64_MAX;
	volatile uint64_t t97 = 12551LLU;

	t97 = ((x433%x434)+(x435|x436));

	if (t97 != 6LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 36U;
	int32_t x438 = -1;
	int64_t x439 = -657764287418LL;
	uint16_t x440 = UINT16_MAX;
	static volatile int64_t t98 = 189LL;

	t98 = ((x437%x438)+(x439|x440));

	if (t98 != -657764253661LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x441 = 3;
	int64_t x442 = INT64_MIN;
	uint32_t x443 = 20U;
	static int32_t x444 = -10200778;
	int64_t t99 = 18866911LL;

	t99 = ((x441%x442)+(x443|x444));

	if (t99 != 4284766521LL) { NG(); } else { ; }
	
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

