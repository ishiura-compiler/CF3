#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
static volatile int32_t t1 = -1;
static uint8_t x17 = 0U;
volatile int32_t t4 = -161493195;
uint8_t x21 = UINT8_MAX;
volatile int32_t x26 = -1;
volatile int8_t x32 = INT8_MIN;
static uint64_t x33 = UINT64_MAX;
static int32_t x36 = 27;
static int32_t x38 = INT32_MAX;
volatile int32_t t9 = 1336091;
volatile int8_t x41 = -1;
int32_t t11 = 3;
int8_t x49 = 11;
int32_t t13 = -58;
int32_t x57 = -1;
volatile int32_t t14 = -136745;
uint8_t x63 = UINT8_MAX;
static int64_t x64 = -1LL;
int64_t x81 = -1LL;
volatile int8_t x86 = INT8_MIN;
int32_t x94 = INT32_MIN;
int32_t t24 = 241646361;
int32_t x103 = INT32_MAX;
int32_t t25 = -81;
volatile int32_t t26 = 0;
uint16_t x116 = UINT16_MAX;
int64_t x117 = -14184957472468416LL;
uint16_t x134 = 13U;
int32_t x135 = INT32_MIN;
static volatile int32_t t34 = 2;
int8_t x153 = INT8_MIN;
static int64_t x157 = INT64_MAX;
uint8_t x159 = 31U;
int8_t x167 = INT8_MIN;
volatile int32_t t42 = -4899298;
int64_t x176 = -6556LL;
int32_t t45 = -2178;
static uint64_t x190 = UINT64_MAX;
volatile int32_t t48 = -322;
int64_t x197 = INT64_MIN;
volatile int16_t x202 = -301;
static int64_t x204 = INT64_MIN;
int64_t x205 = INT64_MIN;
volatile int64_t x206 = -12767117300073374LL;
uint64_t x211 = 1445229219497029LLU;
volatile int32_t t52 = 86923;
volatile uint16_t x219 = 50U;
uint32_t x234 = UINT32_MAX;
int32_t t58 = -16;
int8_t x239 = 30;
volatile int32_t t60 = 1;
uint32_t x246 = 395U;
volatile int32_t t61 = -13131557;
uint64_t x251 = 8121603LLU;
int32_t t62 = -3;
int64_t x253 = -6508930346242LL;
static int8_t x257 = -8;
static int32_t t64 = -1957;
uint16_t x264 = 2294U;
uint16_t x274 = 20U;
int16_t x283 = INT16_MIN;
volatile uint64_t x286 = 52126943432310669LLU;
int64_t x288 = -571762787240062276LL;
int32_t t73 = -130985;
uint8_t x301 = UINT8_MAX;
int32_t x302 = 1902;
static uint8_t x323 = UINT8_MAX;
int32_t t80 = 112410162;
int32_t t81 = 0;
int64_t x329 = INT64_MIN;
static int8_t x334 = 8;
int32_t x350 = 5404268;
static int8_t x353 = -28;
static int16_t x355 = -44;
static int16_t x371 = INT16_MAX;
int8_t x378 = 1;
uint8_t x383 = 3U;
uint8_t x387 = 4U;
volatile int32_t t95 = 3;
int32_t x395 = -1;
int8_t x401 = INT8_MAX;
int8_t x407 = 2;


void f0(void) {
	uint16_t x1 = 7U;
	static int8_t x2 = -1;
	static uint32_t x4 = 627506U;
	static int32_t t0 = -933;

	t0 = ((x1/x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	static uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5/x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 92U;
	static uint64_t x10 = 3LLU;
	uint32_t x11 = 1216288U;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 264587;

	t2 = ((x9/x10)==(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	int16_t x15 = -1;
	static int64_t x16 = -252018647253554128LL;
	volatile int32_t t3 = 239937;

	t3 = ((x13/x14)==(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MAX;
	static volatile uint16_t x20 = UINT16_MAX;

	t4 = ((x17/x18)==(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	static volatile uint16_t x23 = 1541U;
	uint16_t x24 = 14U;
	volatile int32_t t5 = -2439915;

	t5 = ((x21/x22)==(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 14U;
	int64_t x27 = INT64_MIN;
	static int64_t x28 = 189335378586059040LL;
	static int32_t t6 = 112336099;

	t6 = ((x25/x26)==(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 3260U;
	uint32_t x30 = 55876U;
	int32_t x31 = 61;
	int32_t t7 = -46672;

	t7 = ((x29/x30)==(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = UINT64_MAX;
	static int8_t x35 = INT8_MIN;
	int32_t t8 = 6342434;

	t8 = ((x33/x34)==(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 3U;
	static int32_t x39 = INT32_MIN;
	int64_t x40 = -541039LL;

	t9 = ((x37/x38)==(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 54992789LL;
	static int64_t x43 = -1485053350213229LL;
	int64_t x44 = -1LL;
	int32_t t10 = -30845;

	t10 = ((x41/x42)==(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int8_t x46 = -1;
	int32_t x47 = INT32_MAX;
	uint8_t x48 = 1U;

	t11 = ((x45/x46)==(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 19215U;
	static volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -89031560;

	t12 = ((x49/x50)==(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile uint64_t x54 = 112LLU;
	volatile int16_t x55 = 1886;
	int32_t x56 = INT32_MIN;

	t13 = ((x53/x54)==(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	static uint8_t x59 = 50U;
	int8_t x60 = 0;

	t14 = ((x57/x58)==(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 52U;
	int32_t x62 = INT32_MIN;
	static volatile int32_t t15 = 1337325;

	t15 = ((x61/x62)==(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int32_t x66 = -8;
	int16_t x67 = -1;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -582;

	t16 = ((x65/x66)==(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -359925440159138LL;
	static int32_t x70 = 1;
	int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MIN;
	static volatile int32_t t17 = -20;

	t17 = ((x69/x70)==(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1641245192U;
	uint64_t x74 = 275LLU;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	int32_t t18 = 16350782;

	t18 = ((x73/x74)==(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	int32_t x78 = 8508863;
	uint8_t x79 = 52U;
	static volatile uint32_t x80 = UINT32_MAX;
	volatile int32_t t19 = -78;

	t19 = ((x77/x78)==(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -53;
	int32_t x83 = 5698;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -138231;

	t20 = ((x81/x82)==(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	uint8_t x87 = 22U;
	int32_t x88 = 139419320;
	volatile int32_t t21 = 216254;

	t21 = ((x85/x86)==(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	int8_t x90 = -1;
	uint8_t x91 = 1U;
	static uint16_t x92 = 0U;
	volatile int32_t t22 = -298142358;

	t22 = ((x89/x90)==(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	int16_t x96 = -2;
	static int32_t t23 = 1047941614;

	t23 = ((x93/x94)==(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 0U;
	volatile uint16_t x98 = 1U;
	int32_t x99 = -1;
	int64_t x100 = INT64_MIN;

	t24 = ((x97/x98)==(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 2203664141015052LLU;
	int8_t x102 = 6;
	volatile int16_t x104 = INT16_MIN;

	t25 = ((x101/x102)==(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -2287141666242LL;
	volatile int16_t x106 = 12;
	uint16_t x107 = 1U;
	int32_t x108 = -1;

	t26 = ((x105/x106)==(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	int16_t x111 = -55;
	static uint64_t x112 = 33978710LLU;
	volatile int32_t t27 = -256;

	t27 = ((x109/x110)==(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 26601U;
	volatile uint64_t x115 = 0LLU;
	int32_t t28 = -539324;

	t28 = ((x113/x114)==(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = -1;
	static uint32_t x119 = 95395291U;
	volatile uint8_t x120 = 46U;
	static int32_t t29 = 27135;

	t29 = ((x117/x118)==(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 21U;
	int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -11132803;

	t30 = ((x121/x122)==(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile uint16_t x126 = 151U;
	int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -6293631;

	t31 = ((x125/x126)==(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MIN;
	static uint16_t x131 = 12U;
	int8_t x132 = INT8_MAX;
	volatile int32_t t32 = 22;

	t32 = ((x129/x130)==(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 1U;
	static int16_t x136 = -1;
	volatile int32_t t33 = 38741;

	t33 = ((x133/x134)==(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MAX;
	int32_t x140 = -3249727;

	t34 = ((x137/x138)==(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile int64_t x142 = INT64_MIN;
	uint64_t x143 = UINT64_MAX;
	static uint16_t x144 = 1992U;
	volatile int32_t t35 = -132177949;

	t35 = ((x141/x142)==(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 331698438U;
	uint16_t x146 = 219U;
	int8_t x147 = -1;
	int64_t x148 = -1454181LL;
	volatile int32_t t36 = 998542;

	t36 = ((x145/x146)==(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	static int32_t x151 = -1;
	static int32_t x152 = INT32_MIN;
	int32_t t37 = -388;

	t37 = ((x149/x150)==(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 361927934033740786LLU;
	uint64_t x155 = 8060677699898LLU;
	int8_t x156 = 1;
	volatile int32_t t38 = 459269;

	t38 = ((x153/x154)==(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	volatile int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = 6;

	t39 = ((x157/x158)==(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 222113954606LLU;
	static int64_t x162 = INT64_MIN;
	int32_t x163 = -1;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 34;

	t40 = ((x161/x162)==(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	int32_t x166 = INT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	int32_t t41 = 3230;

	t41 = ((x165/x166)==(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MAX;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = INT8_MAX;

	t42 = ((x169/x170)==(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 1549901U;
	static uint8_t x174 = 4U;
	int64_t x175 = 9129540LL;
	static int32_t t43 = -36671;

	t43 = ((x173/x174)==(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MAX;
	int8_t x178 = -1;
	int32_t x179 = INT32_MAX;
	int16_t x180 = 1904;
	int32_t t44 = 2;

	t44 = ((x177/x178)==(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	int64_t x184 = 27957122805LL;

	t45 = ((x181/x182)==(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int8_t x186 = INT8_MIN;
	static int16_t x187 = -2526;
	static uint32_t x188 = 1026U;
	static volatile int32_t t46 = 3;

	t46 = ((x185/x186)==(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MAX;
	uint64_t x191 = UINT64_MAX;
	static int64_t x192 = INT64_MIN;
	static int32_t t47 = 268189831;

	t47 = ((x189/x190)==(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 129607933936544LLU;
	uint8_t x194 = UINT8_MAX;
	volatile int64_t x195 = -95106993952LL;
	int8_t x196 = -20;

	t48 = ((x193/x194)==(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x198 = 116U;
	volatile int8_t x199 = 0;
	uint64_t x200 = 100LLU;
	volatile int32_t t49 = -1;

	t49 = ((x197/x198)==(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -1LL;
	volatile uint8_t x203 = 0U;
	int32_t t50 = -55669;

	t50 = ((x201/x202)==(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = INT16_MIN;
	int64_t x208 = -1LL;
	volatile int32_t t51 = -518501;

	t51 = ((x205/x206)==(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = -1LL;
	uint32_t x210 = 526514804U;
	int16_t x212 = INT16_MIN;

	t52 = ((x209/x210)==(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	static int64_t x215 = INT64_MIN;
	uint16_t x216 = 877U;
	volatile int32_t t53 = 48656;

	t53 = ((x213/x214)==(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 3;
	int64_t x218 = INT64_MIN;
	int64_t x220 = -6958950964824LL;
	static volatile int32_t t54 = 495;

	t54 = ((x217/x218)==(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 5332104265669674LL;
	uint64_t x222 = UINT64_MAX;
	volatile int8_t x223 = 3;
	int64_t x224 = 3936LL;
	volatile int32_t t55 = 33570776;

	t55 = ((x221/x222)==(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = 26;
	static uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 3U;
	volatile uint32_t x228 = UINT32_MAX;
	int32_t t56 = 0;

	t56 = ((x225/x226)==(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	uint16_t x231 = 12U;
	int16_t x232 = INT16_MAX;
	static int32_t t57 = 103753320;

	t57 = ((x229/x230)==(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int16_t x235 = -1;
	int32_t x236 = -18054982;

	t58 = ((x233/x234)==(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 4365U;
	static int16_t x238 = -606;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t59 = 14924;

	t59 = ((x237/x238)==(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MAX;
	volatile int64_t x242 = -1LL;
	int64_t x243 = INT64_MAX;
	static int64_t x244 = 220664716LL;

	t60 = ((x241/x242)==(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = 32756U;

	t61 = ((x245/x246)==(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -4920;
	int32_t x250 = 1582893;
	uint16_t x252 = UINT16_MAX;

	t62 = ((x249/x250)==(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x254 = 5346U;
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -262;

	t63 = ((x253/x254)==(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x258 = -1;
	static volatile int32_t x259 = INT32_MIN;
	volatile int16_t x260 = INT16_MIN;

	t64 = ((x257/x258)==(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	uint64_t x262 = 1LLU;
	int16_t x263 = INT16_MIN;
	volatile int32_t t65 = -13475;

	t65 = ((x261/x262)==(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 29930U;
	uint32_t x266 = UINT32_MAX;
	volatile uint8_t x267 = 0U;
	volatile uint64_t x268 = 166687034LLU;
	volatile int32_t t66 = -675502574;

	t66 = ((x265/x266)==(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	int32_t x271 = 55;
	volatile uint8_t x272 = UINT8_MAX;
	int32_t t67 = -34296;

	t67 = ((x269/x270)==(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static volatile int8_t x275 = 1;
	static volatile int32_t x276 = INT32_MAX;
	int32_t t68 = 3219;

	t68 = ((x273/x274)==(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -21;
	volatile int16_t x278 = 1;
	volatile int32_t x279 = INT32_MAX;
	uint32_t x280 = 1026148U;
	static int32_t t69 = -57181887;

	t69 = ((x277/x278)==(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	volatile int32_t x284 = INT32_MIN;
	int32_t t70 = 173;

	t70 = ((x281/x282)==(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 295855588;
	static volatile uint8_t x287 = 5U;
	int32_t t71 = 422;

	t71 = ((x285/x286)==(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 753006324442057LLU;
	static int8_t x290 = INT8_MIN;
	volatile int32_t x291 = INT32_MIN;
	static volatile int64_t x292 = -1LL;
	volatile int32_t t72 = 3413191;

	t72 = ((x289/x290)==(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 109;
	int16_t x294 = -2621;
	int8_t x295 = 58;
	int16_t x296 = 1;

	t73 = ((x293/x294)==(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	int8_t x298 = -36;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 63402641;

	t74 = ((x297/x298)==(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x303 = UINT8_MAX;
	static uint32_t x304 = UINT32_MAX;
	int32_t t75 = 260868314;

	t75 = ((x301/x302)==(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 44;
	static uint16_t x306 = 65U;
	int32_t x307 = INT32_MIN;
	int32_t x308 = 8300;
	static volatile int32_t t76 = 1335244;

	t76 = ((x305/x306)==(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MAX;
	int8_t x310 = 2;
	volatile int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 516;

	t77 = ((x309/x310)==(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = 5051647695051763984LLU;
	static volatile int8_t x314 = -50;
	uint8_t x315 = 5U;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 158545;

	t78 = ((x313/x314)==(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 300797452246540414LL;
	int64_t x318 = INT64_MIN;
	int8_t x319 = -7;
	static uint16_t x320 = 58U;
	int32_t t79 = 62268;

	t79 = ((x317/x318)==(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -8;
	uint64_t x322 = 110459650234892LLU;
	static int8_t x324 = INT8_MIN;

	t80 = ((x321/x322)==(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = -99;
	static uint8_t x326 = 57U;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = 5U;

	t81 = ((x325/x326)==(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = 7185623591302671LL;
	static uint16_t x331 = 2U;
	int64_t x332 = -60058482930790046LL;
	int32_t t82 = 510;

	t82 = ((x329/x330)==(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 640802U;
	int32_t x335 = 1829352;
	int64_t x336 = INT64_MAX;
	volatile int32_t t83 = 91;

	t83 = ((x333/x334)==(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = UINT16_MAX;
	volatile int64_t x338 = INT64_MIN;
	volatile int32_t x339 = INT32_MAX;
	int32_t x340 = 1;
	int32_t t84 = 1;

	t84 = ((x337/x338)==(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = UINT32_MAX;
	static int8_t x343 = -60;
	volatile int8_t x344 = -1;
	volatile int32_t t85 = 894;

	t85 = ((x341/x342)==(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = 117U;
	int8_t x351 = -7;
	volatile int64_t x352 = INT64_MIN;
	static volatile int32_t t86 = -58505342;

	t86 = ((x349/x350)==(x351==x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x354 = 14071609649765LLU;
	int16_t x356 = -1857;
	int32_t t87 = -604283;

	t87 = ((x353/x354)==(x355==x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 2U;
	static uint64_t x358 = 148636LLU;
	int64_t x359 = -3209LL;
	uint8_t x360 = UINT8_MAX;
	static volatile int32_t t88 = 7990;

	t88 = ((x357/x358)==(x359==x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = 564;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = INT8_MAX;
	static uint8_t x364 = 5U;
	static volatile int32_t t89 = 102;

	t89 = ((x361/x362)==(x363==x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	uint32_t x370 = UINT32_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t90 = 22493;

	t90 = ((x369/x370)==(x371==x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = 0;
	int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -83896664LL;
	int32_t t91 = -122241;

	t91 = ((x373/x374)==(x375==x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x377 = 2U;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 93U;
	volatile int32_t t92 = 4282100;

	t92 = ((x377/x378)==(x379==x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	static uint8_t x382 = UINT8_MAX;
	int16_t x384 = INT16_MIN;
	int32_t t93 = -63;

	t93 = ((x381/x382)==(x383==x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t94 = 2821;

	t94 = ((x385/x386)==(x387==x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = 258986136;
	int32_t x390 = 140;
	int64_t x391 = INT64_MIN;
	volatile int8_t x392 = -2;

	t95 = ((x389/x390)==(x391==x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 767U;
	int16_t x394 = INT16_MAX;
	uint32_t x396 = 20297U;
	int32_t t96 = -869819787;

	t96 = ((x393/x394)==(x395==x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = 6;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 18U;
	int16_t x400 = -662;
	int32_t t97 = -9384243;

	t97 = ((x397/x398)==(x399==x400));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = 17U;
	static int32_t t98 = -359386333;

	t98 = ((x401/x402)==(x403==x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x405 = -1;
	int64_t x406 = -1093LL;
	volatile int64_t x408 = -28LL;
	int32_t t99 = 1;

	t99 = ((x405/x406)==(x407==x408));

	if (t99 != 1) { NG(); } else { ; }
	
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

