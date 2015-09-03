#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -5588583;
int32_t x8 = INT32_MAX;
int32_t t4 = -6;
int32_t x27 = INT32_MIN;
int64_t x30 = INT64_MAX;
volatile int32_t t8 = -6;
static uint16_t x39 = UINT16_MAX;
static int64_t x40 = INT64_MIN;
volatile int32_t x41 = -10327;
int16_t x46 = -1899;
int32_t t11 = 15620;
uint16_t x50 = UINT16_MAX;
int16_t x56 = 8043;
volatile int16_t x58 = INT16_MAX;
uint8_t x59 = 0U;
int32_t t14 = -80621;
int8_t x61 = INT8_MIN;
uint32_t x73 = 2570458U;
int16_t x76 = 1;
volatile int32_t x78 = INT32_MIN;
volatile int64_t x89 = -28941517145668615LL;
static int32_t x95 = INT32_MIN;
volatile int32_t t24 = 1;
static volatile int32_t t25 = -253026780;
uint32_t x108 = 1033582439U;
int8_t x114 = -1;
static int8_t x116 = -1;
uint16_t x127 = 7U;
int32_t t31 = -8073669;
static uint8_t x136 = UINT8_MAX;
volatile int32_t t33 = -238;
int32_t x140 = INT32_MIN;
volatile int32_t t35 = 1;
int32_t t37 = 88463406;
uint16_t x157 = 8868U;
int64_t x164 = -1LL;
static int8_t x174 = INT8_MIN;
int32_t x194 = INT32_MIN;
volatile uint16_t x195 = 20961U;
volatile int32_t x208 = 14321;
int32_t x212 = 38263;
static uint8_t x216 = 6U;
static int64_t x219 = 5778LL;
int16_t x220 = INT16_MIN;
volatile uint64_t x228 = UINT64_MAX;
int64_t x229 = -8204375LL;
int8_t x245 = INT8_MIN;
volatile int32_t t59 = -10;
volatile uint8_t x250 = UINT8_MAX;
int16_t x251 = 23;
int8_t x254 = 1;
int16_t x257 = 1379;
int16_t x266 = 1;
static uint64_t x267 = 749022429LLU;
int16_t x272 = INT16_MIN;
int16_t x274 = INT16_MIN;
volatile int32_t t66 = -1;
volatile int32_t t68 = -54097965;
uint64_t x301 = UINT64_MAX;
static int32_t x305 = -1;
static volatile int8_t x310 = INT8_MIN;
uint8_t x316 = UINT8_MAX;
uint8_t x318 = UINT8_MAX;
int32_t x320 = -1;
static volatile int64_t x321 = INT64_MIN;
uint32_t x324 = 450475751U;
volatile int8_t x329 = 56;
static uint32_t x330 = UINT32_MAX;
int64_t x347 = -1LL;
uint16_t x351 = UINT16_MAX;
int8_t x352 = INT8_MIN;
volatile int16_t x360 = -1;
static uint16_t x366 = UINT16_MAX;
volatile int16_t x368 = -1;
int16_t x374 = 162;
volatile uint64_t x385 = 0LLU;
int32_t t92 = -266;
uint64_t x391 = UINT64_MAX;
static volatile int8_t x394 = -1;
uint16_t x395 = 99U;
static int8_t x400 = -1;
volatile int32_t t95 = -16504587;
static uint8_t x403 = UINT8_MAX;
static uint16_t x404 = 4618U;
static int32_t t96 = -8251;
volatile int8_t x407 = -25;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile uint8_t x2 = 8U;
	volatile uint32_t x3 = UINT32_MAX;
	static volatile uint16_t x4 = 1U;
	int32_t t0 = 2;

	t0 = ((x1<=x2)==(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 53898436728300954LL;
	int16_t x7 = INT16_MAX;
	volatile int32_t t1 = 16357;

	t1 = ((x5<=x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 62944LLU;
	uint64_t x10 = 770479505078433LLU;
	int16_t x11 = INT16_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 60249;

	t2 = ((x9<=x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 144LLU;
	static volatile uint64_t x15 = UINT64_MAX;
	static int32_t x16 = -7177;
	volatile int32_t t3 = 9860458;

	t3 = ((x13<=x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 563LLU;
	uint32_t x18 = 16741415U;
	uint64_t x19 = UINT64_MAX;
	static uint16_t x20 = 51U;

	t4 = ((x17<=x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	uint32_t x22 = UINT32_MAX;
	uint16_t x23 = 15U;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 3;

	t5 = ((x21<=x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	volatile int32_t x26 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 29;

	t6 = ((x25<=x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 3;
	volatile int64_t x31 = -1LL;
	volatile int16_t x32 = -13036;
	int32_t t7 = -536377;

	t7 = ((x29<=x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -10;
	volatile uint32_t x34 = 1663191U;
	int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MAX;

	t8 = ((x33<=x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	int64_t x38 = -1LL;
	static int32_t t9 = -2348573;

	t9 = ((x37<=x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	static int16_t x43 = 1;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -4466883;

	t10 = ((x41<=x42)==(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static volatile uint32_t x47 = 1145649U;
	int16_t x48 = INT16_MAX;

	t11 = ((x45<=x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	uint64_t x51 = 1625324853247LLU;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 2781;

	t12 = ((x49<=x50)==(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static volatile uint8_t x54 = 8U;
	int32_t x55 = INT32_MAX;
	volatile int32_t t13 = -4599065;

	t13 = ((x53<=x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 15;
	volatile int16_t x60 = INT16_MIN;

	t14 = ((x57<=x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MIN;
	uint8_t x63 = UINT8_MAX;
	volatile uint8_t x64 = UINT8_MAX;
	int32_t t15 = -198;

	t15 = ((x61<=x62)==(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	volatile int32_t x66 = INT32_MIN;
	volatile int64_t x67 = 36819LL;
	static uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -6014555;

	t16 = ((x65<=x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int8_t x70 = -25;
	int64_t x71 = -615LL;
	int8_t x72 = -1;
	static volatile int32_t t17 = -262696;

	t17 = ((x69<=x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 122062622213LL;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t18 = -27959415;

	t18 = ((x73<=x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = -8127;
	static int32_t t19 = 90;

	t19 = ((x77<=x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 53;
	int16_t x82 = INT16_MIN;
	static int32_t x83 = INT32_MIN;
	int32_t x84 = -11960670;
	int32_t t20 = 46967;

	t20 = ((x81<=x82)==(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -91749LL;
	int64_t x86 = INT64_MAX;
	static uint8_t x87 = 14U;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -1217814;

	t21 = ((x85<=x86)==(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = -1;
	int32_t x91 = 293;
	uint64_t x92 = 1LLU;
	volatile int32_t t22 = 23147;

	t22 = ((x89<=x90)==(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = INT64_MIN;
	volatile uint64_t x96 = UINT64_MAX;
	int32_t t23 = -23261;

	t23 = ((x93<=x94)==(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 81U;
	int8_t x98 = 0;
	static uint32_t x99 = UINT32_MAX;
	int8_t x100 = INT8_MAX;

	t24 = ((x97<=x98)==(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	volatile uint16_t x103 = UINT16_MAX;
	uint8_t x104 = UINT8_MAX;

	t25 = ((x101<=x102)==(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x105 = 22U;
	static int64_t x106 = -112211515578855442LL;
	uint8_t x107 = 24U;
	int32_t t26 = -79233;

	t26 = ((x105<=x106)==(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	static uint32_t x110 = 368U;
	static volatile int8_t x111 = -1;
	static int32_t x112 = 60049;
	static int32_t t27 = 2906808;

	t27 = ((x109<=x110)==(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static volatile int16_t x115 = INT16_MIN;
	volatile int32_t t28 = -233160;

	t28 = ((x113<=x114)==(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = 3;
	static volatile uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 951U;
	volatile int32_t t29 = -636219426;

	t29 = ((x117<=x118)==(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 27692U;
	volatile int16_t x122 = INT16_MIN;
	uint64_t x123 = 5297LLU;
	volatile uint32_t x124 = 13988290U;
	volatile int32_t t30 = 432;

	t30 = ((x121<=x122)==(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int8_t x126 = -6;
	int32_t x128 = INT32_MIN;

	t31 = ((x125<=x126)==(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -990888735950076653LL;
	uint8_t x130 = 1U;
	static int32_t x131 = INT32_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t32 = -245805;

	t32 = ((x129<=x130)==(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 132863U;
	int16_t x134 = -1;
	uint32_t x135 = 33282U;

	t33 = ((x133<=x134)==(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 842974LL;
	int32_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	volatile int32_t t34 = 67252;

	t34 = ((x137<=x138)==(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -11431LL;
	static int64_t x146 = -1LL;
	int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MAX;

	t35 = ((x145<=x146)==(x147%x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -1;
	int8_t x150 = 1;
	int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = 7708444324021LLU;
	volatile int32_t t36 = 8465;

	t36 = ((x149<=x150)==(x151%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MAX;
	uint8_t x154 = 45U;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -10;

	t37 = ((x153<=x154)==(x155%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x158 = INT64_MIN;
	volatile int8_t x159 = -14;
	int8_t x160 = -1;
	static volatile int32_t t38 = 0;

	t38 = ((x157<=x158)==(x159%x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 11263721LLU;
	int32_t x162 = INT32_MIN;
	volatile int8_t x163 = INT8_MAX;
	volatile int32_t t39 = -33;

	t39 = ((x161<=x162)==(x163%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 33923785959LLU;
	volatile int8_t x166 = -1;
	int16_t x167 = INT16_MAX;
	volatile uint64_t x168 = 1527573402376213LLU;
	volatile int32_t t40 = 1;

	t40 = ((x165<=x166)==(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = UINT32_MAX;
	uint8_t x170 = UINT8_MAX;
	int32_t x171 = 1681648;
	uint32_t x172 = 87320U;
	volatile int32_t t41 = -3545;

	t41 = ((x169<=x170)==(x171%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	static int16_t x175 = 15;
	int64_t x176 = 1315728LL;
	int32_t t42 = -10301;

	t42 = ((x173<=x174)==(x175%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x178 = UINT8_MAX;
	volatile int8_t x179 = INT8_MIN;
	static int16_t x180 = -1;
	volatile int32_t t43 = -3;

	t43 = ((x177<=x178)==(x179%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = INT64_MIN;
	uint8_t x182 = 54U;
	int8_t x183 = 1;
	int32_t x184 = 25133106;
	int32_t t44 = -255;

	t44 = ((x181<=x182)==(x183%x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	int8_t x187 = 0;
	static int64_t x188 = -1LL;
	int32_t t45 = -559;

	t45 = ((x185<=x186)==(x187%x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	volatile int8_t x196 = -1;
	int32_t t46 = -2696181;

	t46 = ((x193<=x194)==(x195%x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 2U;
	static int16_t x198 = -8153;
	int32_t x199 = INT32_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t47 = 38680;

	t47 = ((x197<=x198)==(x199%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x201 = INT64_MIN;
	static int16_t x202 = -51;
	static int8_t x203 = INT8_MIN;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t48 = -35;

	t48 = ((x201<=x202)==(x203%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = -1;
	uint32_t x207 = UINT32_MAX;
	static volatile int32_t t49 = -155;

	t49 = ((x205<=x206)==(x207%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = 601272;
	uint8_t x211 = 2U;
	static volatile int32_t t50 = -2433;

	t50 = ((x209<=x210)==(x211%x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 33646LLU;
	static int64_t x214 = INT64_MAX;
	int8_t x215 = 11;
	int32_t t51 = 67001921;

	t51 = ((x213<=x214)==(x215%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x218 = INT32_MAX;
	static volatile int32_t t52 = 130248495;

	t52 = ((x217<=x218)==(x219%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t53 = 3;

	t53 = ((x221<=x222)==(x223%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x225 = -13;
	int64_t x226 = -1457247843LL;
	int16_t x227 = INT16_MIN;
	int32_t t54 = 1133345;

	t54 = ((x225<=x226)==(x227%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x230 = 519737LL;
	int64_t x231 = INT64_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t55 = -78165257;

	t55 = ((x229<=x230)==(x231%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MAX;
	static uint32_t x234 = 132962307U;
	static volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t56 = 9;

	t56 = ((x233<=x234)==(x235%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = 47098;
	int8_t x238 = -15;
	int8_t x239 = INT8_MAX;
	int16_t x240 = -98;
	int32_t t57 = -37716;

	t57 = ((x237<=x238)==(x239%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 25238LLU;
	volatile uint8_t x242 = 3U;
	volatile int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	static int32_t t58 = 751037521;

	t58 = ((x241<=x242)==(x243%x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x246 = 2U;
	static volatile uint64_t x247 = 6LLU;
	static int64_t x248 = INT64_MAX;

	t59 = ((x245<=x246)==(x247%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = -29;
	int32_t x252 = INT32_MIN;
	int32_t t60 = -35853085;

	t60 = ((x249<=x250)==(x251%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = -1;
	int8_t x255 = -1;
	volatile uint32_t x256 = 30484896U;
	int32_t t61 = 11460252;

	t61 = ((x253<=x254)==(x255%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x258 = -1;
	int64_t x259 = -216LL;
	static uint32_t x260 = 3U;
	static int32_t t62 = -232119;

	t62 = ((x257<=x258)==(x259%x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 909LLU;
	volatile int16_t x262 = INT16_MIN;
	static uint32_t x263 = UINT32_MAX;
	volatile int16_t x264 = 24;
	static int32_t t63 = -13591506;

	t63 = ((x261<=x262)==(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t64 = 3628482;

	t64 = ((x265<=x266)==(x267%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 44;
	volatile int16_t x270 = -5;
	int16_t x271 = INT16_MIN;
	volatile int32_t t65 = -5;

	t65 = ((x269<=x270)==(x271%x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 99678U;
	int16_t x275 = -389;
	int16_t x276 = INT16_MAX;

	t66 = ((x273<=x274)==(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = UINT16_MAX;
	static int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = -1;
	volatile int32_t t67 = -187584944;

	t67 = ((x277<=x278)==(x279%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x281 = 1U;
	int32_t x282 = INT32_MAX;
	volatile uint16_t x283 = 16U;
	int64_t x284 = INT64_MAX;

	t68 = ((x281<=x282)==(x283%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 200U;
	int32_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	static int8_t x288 = -1;
	volatile int32_t t69 = -1;

	t69 = ((x285<=x286)==(x287%x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x289 = INT16_MAX;
	int16_t x290 = 0;
	int32_t x291 = 13;
	uint16_t x292 = 5489U;
	int32_t t70 = 0;

	t70 = ((x289<=x290)==(x291%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = 134414;
	int64_t x294 = 120822644302583LL;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t71 = 77941136;

	t71 = ((x293<=x294)==(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MAX;
	int16_t x298 = 116;
	int16_t x299 = INT16_MIN;
	volatile int8_t x300 = INT8_MAX;
	int32_t t72 = -1;

	t72 = ((x297<=x298)==(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x302 = -1;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 916980292U;
	volatile int32_t t73 = -288228;

	t73 = ((x301<=x302)==(x303%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x306 = INT8_MAX;
	static volatile int16_t x307 = INT16_MIN;
	static uint8_t x308 = UINT8_MAX;
	int32_t t74 = 7;

	t74 = ((x305<=x306)==(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	volatile uint32_t x311 = 145118116U;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t75 = 9641888;

	t75 = ((x309<=x310)==(x311%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = 2;
	volatile int16_t x314 = 1;
	int32_t x315 = INT32_MIN;
	static volatile int32_t t76 = -12824;

	t76 = ((x313<=x314)==(x315%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x319 = INT8_MAX;
	int32_t t77 = 302807522;

	t77 = ((x317<=x318)==(x319%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = INT32_MAX;
	int8_t x323 = INT8_MIN;
	volatile int32_t t78 = 202658;

	t78 = ((x321<=x322)==(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x331 = 3U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t79 = 266503697;

	t79 = ((x329<=x330)==(x331%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MIN;
	volatile uint32_t x334 = 6U;
	int8_t x335 = -1;
	int64_t x336 = INT64_MIN;
	int32_t t80 = 22033835;

	t80 = ((x333<=x334)==(x335%x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -1;
	static uint32_t x338 = 4U;
	volatile uint8_t x339 = 4U;
	static uint32_t x340 = UINT32_MAX;
	int32_t t81 = 3739;

	t81 = ((x337<=x338)==(x339%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 353077911LLU;
	int16_t x342 = 634;
	uint16_t x343 = 14974U;
	int32_t x344 = 752809685;
	volatile int32_t t82 = -13696;

	t82 = ((x341<=x342)==(x343%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	volatile uint64_t x346 = UINT64_MAX;
	uint16_t x348 = UINT16_MAX;
	static int32_t t83 = -122;

	t83 = ((x345<=x346)==(x347%x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x349 = 8U;
	uint64_t x350 = 223629LLU;
	volatile int32_t t84 = -1;

	t84 = ((x349<=x350)==(x351%x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = 24LLU;
	volatile uint32_t x358 = 6244890U;
	int32_t x359 = INT32_MAX;
	static volatile int32_t t85 = 2;

	t85 = ((x357<=x358)==(x359%x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x361 = INT64_MIN;
	volatile int8_t x362 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MAX;
	static int32_t t86 = -14768;

	t86 = ((x361<=x362)==(x363%x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 13U;
	int16_t x367 = INT16_MIN;
	volatile int32_t t87 = 14664;

	t87 = ((x365<=x366)==(x367%x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = -3109;
	volatile int16_t x372 = -724;
	volatile int32_t t88 = 18642344;

	t88 = ((x369<=x370)==(x371%x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x375 = INT8_MAX;
	int64_t x376 = INT64_MIN;
	int32_t t89 = 574084040;

	t89 = ((x373<=x374)==(x375%x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	uint8_t x379 = UINT8_MAX;
	volatile uint32_t x380 = UINT32_MAX;
	static volatile int32_t t90 = -206177553;

	t90 = ((x377<=x378)==(x379%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	uint8_t x382 = 2U;
	volatile int64_t x383 = -1LL;
	int8_t x384 = 3;
	int32_t t91 = 2178;

	t91 = ((x381<=x382)==(x383%x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x386 = UINT64_MAX;
	uint64_t x387 = 87905337LLU;
	uint16_t x388 = UINT16_MAX;

	t92 = ((x385<=x386)==(x387%x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x389 = 10385U;
	volatile uint32_t x390 = 337026676U;
	static uint64_t x392 = 86234548978398333LLU;
	int32_t t93 = 1633343;

	t93 = ((x389<=x390)==(x391%x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x393 = 226038;
	uint8_t x396 = 7U;
	volatile int32_t t94 = 1;

	t94 = ((x393<=x394)==(x395%x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = 2;
	uint8_t x398 = UINT8_MAX;
	static int8_t x399 = INT8_MIN;

	t95 = ((x397<=x398)==(x399%x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -179;
	static uint8_t x402 = 38U;

	t96 = ((x401<=x402)==(x403%x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 1U;
	static int8_t x406 = -18;
	static uint8_t x408 = 122U;
	volatile int32_t t97 = 7;

	t97 = ((x405<=x406)==(x407%x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x409 = UINT8_MAX;
	volatile uint8_t x410 = UINT8_MAX;
	volatile int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t98 = -483810741;

	t98 = ((x409<=x410)==(x411%x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = -1;
	int16_t x414 = INT16_MAX;
	int64_t x415 = -33983320978182944LL;
	int16_t x416 = INT16_MAX;
	static volatile int32_t t99 = 0;

	t99 = ((x413<=x414)==(x415%x416));

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

