#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x8 = UINT32_MAX;
int32_t t2 = -8264984;
static int16_t x23 = -1;
static int16_t x29 = INT16_MIN;
uint64_t x32 = 2061119813135534344LLU;
static volatile int32_t x33 = INT32_MAX;
int32_t x37 = INT32_MAX;
volatile int64_t x39 = INT64_MIN;
int32_t x43 = 29;
volatile int32_t t9 = 12805;
static volatile int64_t t10 = INT64_MAX;
static volatile int64_t x53 = -57555775LL;
uint32_t t11 = 93529U;
uint64_t x57 = 234610980LLU;
static uint8_t x70 = 127U;
uint8_t x74 = 5U;
static int64_t x76 = INT64_MIN;
volatile int8_t x78 = 3;
uint32_t x81 = 1498529558U;
volatile int32_t x82 = INT32_MIN;
static volatile int16_t x83 = INT16_MIN;
int8_t x84 = INT8_MIN;
volatile int32_t t18 = 6365022;
uint64_t x89 = 414LLU;
static volatile int16_t x90 = INT16_MIN;
uint8_t x96 = 29U;
uint64_t x99 = 147885275458LLU;
int32_t t27 = 1478;
volatile int8_t x126 = INT8_MAX;
static uint64_t x127 = 5422943084803LLU;
volatile uint16_t x135 = 11U;
static int8_t x137 = -1;
int8_t x139 = INT8_MIN;
int8_t x144 = INT8_MIN;
volatile int32_t t32 = 191269575;
int8_t x159 = INT8_MIN;
volatile int64_t x165 = 3991951565483671LL;
int32_t t37 = 81620;
int16_t x176 = -1;
int32_t t39 = -1633;
int32_t x177 = INT32_MAX;
uint16_t x178 = 10U;
int32_t x179 = -8985;
int8_t x181 = -1;
static volatile int8_t x187 = -1;
int8_t x193 = 0;
int16_t x194 = -1;
int64_t x196 = INT64_MIN;
int64_t x197 = INT64_MIN;
int32_t x202 = -30273841;
int64_t t45 = -288275332LL;
int8_t x206 = -1;
volatile int32_t x216 = -1;
volatile int64_t t48 = 150686309293LL;
static uint32_t x223 = 1722U;
static int16_t x224 = INT16_MIN;
uint8_t x227 = UINT8_MAX;
int16_t x233 = -1;
static volatile int8_t x236 = INT8_MAX;
int16_t x239 = -14;
uint64_t x243 = 32212777900165LLU;
int16_t x245 = 5053;
static int64_t x255 = INT64_MIN;
static volatile uint32_t x256 = UINT32_MAX;
uint32_t x259 = UINT32_MAX;
volatile int32_t t61 = -72;
uint8_t x277 = UINT8_MAX;
uint32_t x283 = 127U;
volatile int32_t t65 = -10;
int8_t x289 = -1;
int32_t t67 = 4012;
static int32_t x302 = -578169;
volatile int64_t t70 = 6327662282002105LL;
int64_t x312 = 13936118LL;
int8_t x314 = -1;
static int16_t x318 = INT16_MAX;
uint8_t x319 = 19U;
static int32_t x321 = INT32_MIN;
static int16_t x323 = -1;
volatile int32_t t75 = -26021302;
int32_t x336 = INT32_MIN;
static uint8_t x339 = UINT8_MAX;
int32_t t78 = 148665;
static int16_t x346 = 51;
static volatile uint8_t x354 = 2U;
static int16_t x356 = -1;
static volatile int32_t t80 = -1;
int32_t x357 = -1;
int32_t x359 = -1;
int64_t x360 = INT64_MIN;
static int64_t t82 = 28443688974728LL;
static volatile int32_t x378 = INT32_MIN;
int8_t x380 = -4;
volatile int32_t t86 = 95933124;
uint64_t x383 = 1203LLU;
int32_t x386 = -1;
volatile int8_t x387 = INT8_MIN;
int64_t x392 = -1LL;
int64_t t89 = 1LL;
static uint16_t x393 = 177U;
uint8_t x395 = 0U;
uint64_t x417 = 2314173738718667386LLU;
int32_t x421 = -1;
volatile int32_t x423 = -97308451;
volatile int32_t t97 = -22;
static int8_t x433 = 1;
int16_t x434 = INT16_MIN;
int8_t x435 = INT8_MIN;
volatile int64_t t99 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = 1U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -248451360;
	volatile int32_t t0 = -47461545;

	t0 = ((x1<(x2-x3))+x4);

	if (t0 != -248451360) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 8U;
	int32_t x6 = 29487008;
	static int16_t x7 = -1;
	volatile uint32_t t1 = 63U;

	t1 = ((x5<(x6-x7))+x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 550023542001887681LLU;
	int64_t x10 = -60401611418LL;
	static int16_t x11 = 3612;
	uint16_t x12 = 7683U;

	t2 = ((x9<(x10-x11))+x12);

	if (t2 != 7684) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int32_t x14 = -1;
	static uint32_t x15 = 4891U;
	static int32_t x16 = INT32_MAX;
	int32_t t3 = INT32_MAX;

	t3 = ((x13<(x14-x15))+x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static volatile int16_t x22 = INT16_MAX;
	uint32_t x24 = 1481U;
	volatile uint32_t t4 = 1838U;

	t4 = ((x21<(x22-x23))+x24);

	if (t4 != 1482U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	uint8_t x27 = 118U;
	static uint32_t x28 = 50U;
	uint32_t t5 = 3084U;

	t5 = ((x25<(x26-x27))+x28);

	if (t5 != 51U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 177100837357LLU;
	int32_t x31 = -1;
	static uint64_t t6 = 532220042805LLU;

	t6 = ((x29<(x30-x31))+x32);

	if (t6 != 2061119813135534344LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = -1;
	int16_t x35 = -1;
	volatile int32_t x36 = INT32_MAX;
	int32_t t7 = INT32_MAX;

	t7 = ((x33<(x34-x35))+x36);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MIN;
	uint8_t x40 = UINT8_MAX;
	int32_t t8 = 0;

	t8 = ((x37<(x38-x39))+x40);

	if (t8 != 256) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MAX;
	int64_t x42 = INT64_MAX;
	uint16_t x44 = UINT16_MAX;

	t9 = ((x41<(x42-x43))+x44);

	if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 47353;
	volatile int16_t x46 = 405;
	int8_t x47 = -4;
	int64_t x48 = INT64_MAX;

	t10 = ((x45<(x46-x47))+x48);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x54 = -720810LL;
	volatile uint8_t x55 = 6U;
	static uint32_t x56 = 122U;

	t11 = ((x53<(x54-x55))+x56);

	if (t11 != 123U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 10U;
	int32_t x60 = 313647;
	static volatile int32_t t12 = -981782;

	t12 = ((x57<(x58-x59))+x60);

	if (t12 != 313648) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = 773995928LLU;
	int16_t x62 = 2;
	uint8_t x63 = 30U;
	uint8_t x64 = 88U;
	volatile int32_t t13 = 347471;

	t13 = ((x61<(x62-x63))+x64);

	if (t13 != 89) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x65 = 1780755LLU;
	uint16_t x66 = 38U;
	int64_t x67 = INT64_MAX;
	static int64_t x68 = INT64_MIN;
	static volatile int64_t t14 = 2LL;

	t14 = ((x65<(x66-x67))+x68);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x71 = UINT64_MAX;
	static int16_t x72 = -1;
	int32_t t15 = -8;

	t15 = ((x69<(x70-x71))+x72);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x75 = 550;
	static volatile int64_t t16 = -60LL;

	t16 = ((x73<(x74-x75))+x76);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 7U;
	int16_t x79 = 4;
	volatile int16_t x80 = INT16_MAX;
	volatile int32_t t17 = -12;

	t17 = ((x77<(x78-x79))+x80);

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {


	t18 = ((x81<(x82-x83))+x84);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = UINT64_MAX;
	volatile uint32_t x86 = 1827U;
	int16_t x87 = -15;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x85<(x86-x87))+x88);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x91 = 11179U;
	uint32_t x92 = 45631U;
	static uint32_t t20 = 1993036U;

	t20 = ((x89<(x90-x91))+x92);

	if (t20 != 45632U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 31;
	int32_t x94 = INT32_MIN;
	static int64_t x95 = -129170855782729837LL;
	volatile int32_t t21 = -4398;

	t21 = ((x93<(x94-x95))+x96);

	if (t21 != 30) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -43;
	volatile int8_t x98 = INT8_MIN;
	int64_t x100 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = ((x97<(x98-x99))+x100);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	static int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -644247550;
	volatile int32_t t23 = 2;

	t23 = ((x101<(x102-x103))+x104);

	if (t23 != -644247549) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 2U;
	static uint32_t x106 = 7471U;
	uint32_t x107 = UINT32_MAX;
	static uint64_t x108 = UINT64_MAX;
	uint64_t t24 = 873871830LLU;

	t24 = ((x105<(x106-x107))+x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x109 = INT8_MIN;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = -5096;
	int16_t x112 = -2;
	volatile int32_t t25 = -1559;

	t25 = ((x109<(x110-x111))+x112);

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	volatile uint8_t x116 = 14U;
	int32_t t26 = -4086906;

	t26 = ((x113<(x114-x115))+x116);

	if (t26 != 15) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 4364685487687527LL;
	static volatile int32_t x118 = 13888;
	uint16_t x119 = 8139U;
	static int16_t x120 = INT16_MAX;

	t27 = ((x117<(x118-x119))+x120);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x125 = 12429431U;
	int16_t x128 = INT16_MIN;
	int32_t t28 = 111084;

	t28 = ((x125<(x126-x127))+x128);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = 62;
	static volatile int64_t x130 = -1LL;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	uint32_t t29 = 2462U;

	t29 = ((x129<(x130-x131))+x132);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	volatile uint32_t x134 = UINT32_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t30 = 11469;

	t30 = ((x133<(x134-x135))+x136);

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x138 = 1055U;
	int64_t x140 = INT64_MAX;
	int64_t t31 = INT64_MAX;

	t31 = ((x137<(x138-x139))+x140);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;

	t32 = ((x141<(x142-x143))+x144);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 10749049999LLU;
	volatile uint64_t x146 = 278298793581LLU;
	int8_t x147 = INT8_MIN;
	int8_t x148 = -1;
	static int32_t t33 = 0;

	t33 = ((x145<(x146-x147))+x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 0U;
	int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;
	static int16_t x152 = 3422;
	volatile int32_t t34 = 314;

	t34 = ((x149<(x150-x151))+x152);

	if (t34 != 3422) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	volatile int64_t x154 = INT64_MAX;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = 5;
	volatile int32_t t35 = 14571;

	t35 = ((x153<(x154-x155))+x156);

	if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 10896U;
	int64_t x158 = INT64_MIN;
	int16_t x160 = -1;
	static int32_t t36 = 110;

	t36 = ((x157<(x158-x159))+x160);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MIN;
	static int8_t x167 = -1;
	uint16_t x168 = 1U;

	t37 = ((x165<(x166-x167))+x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -1LL;
	uint16_t x170 = 2642U;
	uint64_t x171 = 246142512624LLU;
	int64_t x172 = -1LL;
	int64_t t38 = -2077208880447750LL;

	t38 = ((x169<(x170-x171))+x172);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = 359U;
	int8_t x174 = INT8_MAX;
	uint64_t x175 = 6713212426116LLU;

	t39 = ((x173<(x174-x175))+x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x180 = 4U;
	volatile int32_t t40 = -1938387;

	t40 = ((x177<(x178-x179))+x180);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = 7;
	static int16_t x183 = -104;
	uint64_t x184 = 10290316LLU;
	uint64_t t41 = 212450LLU;

	t41 = ((x181<(x182-x183))+x184);

	if (t41 != 10290317LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -3031;
	int16_t x186 = 3053;
	static int16_t x188 = INT16_MAX;
	volatile int32_t t42 = 0;

	t42 = ((x185<(x186-x187))+x188);

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x195 = 15083192127LL;
	int64_t t43 = INT64_MIN;

	t43 = ((x193<(x194-x195))+x196);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x198 = INT8_MAX;
	int16_t x199 = -1;
	int64_t x200 = 1667532274782979LL;
	volatile int64_t t44 = -15970150545070749LL;

	t44 = ((x197<(x198-x199))+x200);

	if (t44 != 1667532274782980LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	static volatile uint32_t x203 = 73732U;
	int64_t x204 = 1557LL;

	t45 = ((x201<(x202-x203))+x204);

	if (t45 != 1558LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 758374LL;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 2733511U;
	volatile uint32_t t46 = 4058968U;

	t46 = ((x205<(x206-x207))+x208);

	if (t46 != 2733512U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 87U;
	int16_t x214 = 101;
	volatile int16_t x215 = 16131;
	int32_t t47 = 1037;

	t47 = ((x213<(x214-x215))+x216);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = UINT64_MAX;
	int8_t x218 = INT8_MIN;
	volatile int32_t x219 = 5;
	int64_t x220 = -1LL;

	t48 = ((x217<(x218-x219))+x220);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = 32U;
	volatile uint16_t x222 = UINT16_MAX;
	int32_t t49 = 9868304;

	t49 = ((x221<(x222-x223))+x224);

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x225 = INT8_MAX;
	int16_t x226 = 122;
	int16_t x228 = 14;
	volatile int32_t t50 = -14140;

	t50 = ((x225<(x226-x227))+x228);

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MAX;
	static volatile uint8_t x230 = 0U;
	int8_t x231 = 0;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t51 = 320373863;

	t51 = ((x229<(x230-x231))+x232);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x234 = UINT8_MAX;
	int8_t x235 = -26;
	int32_t t52 = -352;

	t52 = ((x233<(x234-x235))+x236);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -12242796987634223LL;
	volatile int16_t x238 = -1;
	uint16_t x240 = UINT16_MAX;
	int32_t t53 = -996232;

	t53 = ((x237<(x238-x239))+x240);

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x241 = -1LL;
	uint32_t x242 = UINT32_MAX;
	volatile int16_t x244 = -40;
	static volatile int32_t t54 = 38491;

	t54 = ((x241<(x242-x243))+x244);

	if (t54 != -40) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = INT8_MIN;
	int8_t x247 = -53;
	volatile int16_t x248 = -1;
	static volatile int32_t t55 = -1;

	t55 = ((x245<(x246-x247))+x248);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = 18LL;
	uint64_t x251 = 12024148LLU;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t56 = 0LLU;

	t56 = ((x249<(x250-x251))+x252);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = -8246948991909LL;
	int64_t x254 = -1LL;
	volatile uint32_t t57 = 170U;

	t57 = ((x253<(x254-x255))+x256);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 1U;
	int16_t x258 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t58 = 742438029;

	t58 = ((x257<(x258-x259))+x260);

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MAX;
	int64_t x262 = -1LL;
	int64_t x263 = INT64_MAX;
	static int8_t x264 = INT8_MAX;
	int32_t t59 = 20491417;

	t59 = ((x261<(x262-x263))+x264);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 0U;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	static volatile uint32_t x268 = UINT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x265<(x266-x267))+x268);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 2162U;
	uint16_t x271 = UINT16_MAX;
	static int16_t x272 = INT16_MIN;

	t61 = ((x269<(x270-x271))+x272);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = 153563450LL;
	static uint16_t x275 = 19U;
	volatile uint16_t x276 = 2U;
	int32_t t62 = 263873479;

	t62 = ((x273<(x274-x275))+x276);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x278 = 312507469LLU;
	int64_t x279 = INT64_MIN;
	static int32_t x280 = -95273100;
	volatile int32_t t63 = 4156;

	t63 = ((x277<(x278-x279))+x280);

	if (t63 != -95273099) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MAX;
	uint32_t x282 = 764U;
	int64_t x284 = INT64_MAX;
	int64_t t64 = INT64_MAX;

	t64 = ((x281<(x282-x283))+x284);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 55604589U;
	int64_t x286 = -1LL;
	static volatile int32_t x287 = INT32_MAX;
	volatile int8_t x288 = 1;

	t65 = ((x285<(x286-x287))+x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x290 = 26U;
	static int64_t x291 = -28915146894093147LL;
	static uint32_t x292 = 10639U;
	static uint32_t t66 = 857958287U;

	t66 = ((x289<(x290-x291))+x292);

	if (t66 != 10640U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = 75946301042554695LLU;
	volatile int64_t x294 = INT64_MAX;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 1897U;

	t67 = ((x293<(x294-x295))+x296);

	if (t67 != 1898) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x297 = INT32_MIN;
	uint8_t x298 = 1U;
	int8_t x299 = 3;
	uint8_t x300 = 0U;
	int32_t t68 = -4120622;

	t68 = ((x297<(x298-x299))+x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x301 = 4U;
	static uint8_t x303 = 40U;
	volatile uint16_t x304 = 1U;
	volatile int32_t t69 = 1;

	t69 = ((x301<(x302-x303))+x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x305 = INT64_MIN;
	int32_t x306 = -10460;
	int64_t x307 = -1LL;
	int64_t x308 = -1LL;

	t70 = ((x305<(x306-x307))+x308);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -4;
	int64_t x311 = 1038171936950843LL;
	volatile int64_t t71 = 353751179LL;

	t71 = ((x309<(x310-x311))+x312);

	if (t71 != 13936118LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x313 = 52U;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 10260086111LLU;
	volatile uint64_t t72 = 414917617738411867LLU;

	t72 = ((x313<(x314-x315))+x316);

	if (t72 != 10260086112LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x320 = 0;
	volatile int32_t t73 = 23;

	t73 = ((x317<(x318-x319))+x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x322 = INT32_MIN;
	uint16_t x324 = 11U;
	volatile int32_t t74 = -102973;

	t74 = ((x321<(x322-x323))+x324);

	if (t74 != 12) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = 11;
	volatile int16_t x330 = 33;
	uint8_t x331 = 1U;
	static volatile int16_t x332 = -1;

	t75 = ((x329<(x330-x331))+x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x333 = INT16_MIN;
	static uint16_t x334 = 35U;
	uint16_t x335 = 5U;
	static volatile int32_t t76 = 1230918;

	t76 = ((x333<(x334-x335))+x336);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	int16_t x340 = 0;
	volatile int32_t t77 = 123998211;

	t77 = ((x337<(x338-x339))+x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 259U;
	int64_t x342 = INT64_MIN;
	static volatile int8_t x343 = INT8_MIN;
	volatile int16_t x344 = INT16_MIN;

	t78 = ((x341<(x342-x343))+x344);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x345 = UINT64_MAX;
	volatile uint16_t x347 = 3703U;
	static int64_t x348 = INT64_MIN;
	int64_t t79 = INT64_MIN;

	t79 = ((x345<(x346-x347))+x348);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x353 = 1;
	volatile int16_t x355 = -108;

	t80 = ((x353<(x354-x355))+x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x358 = INT32_MIN;
	static int64_t t81 = INT64_MIN;

	t81 = ((x357<(x358-x359))+x360);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x361 = INT32_MIN;
	volatile int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -27LL;

	t82 = ((x361<(x362-x363))+x364);

	if (t82 != -26LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x365 = -186032034941LL;
	static uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	static int32_t t83 = 144898;

	t83 = ((x365<(x366-x367))+x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = -26;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t84 = -7;

	t84 = ((x369<(x370-x371))+x372);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	uint64_t x374 = UINT64_MAX;
	int32_t x375 = -12029745;
	static int8_t x376 = -1;
	int32_t t85 = -6;

	t85 = ((x373<(x374-x375))+x376);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 56357606169LLU;
	uint64_t x379 = UINT64_MAX;

	t86 = ((x377<(x378-x379))+x380);

	if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x381 = INT16_MIN;
	uint32_t x382 = 18801U;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t87 = UINT32_MAX;

	t87 = ((x381<(x382-x383))+x384);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MIN;
	static uint64_t x388 = 951433255903LLU;
	volatile uint64_t t88 = 4131498496492206LLU;

	t88 = ((x385<(x386-x387))+x388);

	if (t88 != 951433255904LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x389 = 1U;
	static uint64_t x390 = 524653164799LLU;
	int64_t x391 = INT64_MIN;

	t89 = ((x389<(x390-x391))+x392);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x394 = INT16_MIN;
	volatile uint16_t x396 = 160U;
	int32_t t90 = -86897;

	t90 = ((x393<(x394-x395))+x396);

	if (t90 != 160) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -1LL;
	uint64_t x398 = 3844LLU;
	static uint64_t x399 = UINT64_MAX;
	uint8_t x400 = 24U;
	static int32_t t91 = -824;

	t91 = ((x397<(x398-x399))+x400);

	if (t91 != 24) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x401 = 0;
	int32_t x402 = INT32_MAX;
	int16_t x403 = INT16_MAX;
	static uint64_t x404 = 0LLU;
	static volatile uint64_t t92 = 3072928LLU;

	t92 = ((x401<(x402-x403))+x404);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x405 = -1;
	int16_t x406 = 684;
	int16_t x407 = -1135;
	uint32_t x408 = 2U;
	uint32_t t93 = 178400987U;

	t93 = ((x405<(x406-x407))+x408);

	if (t93 != 3U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = 36969;
	int8_t x410 = INT8_MIN;
	volatile int32_t x411 = INT32_MIN;
	static int32_t x412 = -1;
	int32_t t94 = 14886;

	t94 = ((x409<(x410-x411))+x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MAX;
	static int32_t x414 = INT32_MIN;
	uint64_t x415 = UINT64_MAX;
	static volatile int64_t x416 = INT64_MIN;
	int64_t t95 = -6854LL;

	t95 = ((x413<(x414-x415))+x416);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x418 = 423LLU;
	int16_t x419 = -1;
	uint64_t x420 = 5398LLU;
	uint64_t t96 = 423930476385LLU;

	t96 = ((x417<(x418-x419))+x420);

	if (t96 != 5398LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x422 = -1LL;
	int16_t x424 = INT16_MAX;

	t97 = ((x421<(x422-x423))+x424);

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x429 = INT64_MAX;
	volatile int16_t x430 = 122;
	static volatile uint32_t x431 = 13247U;
	uint32_t x432 = UINT32_MAX;
	static uint32_t t98 = UINT32_MAX;

	t98 = ((x429<(x430-x431))+x432);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x436 = INT64_MIN;

	t99 = ((x433<(x434-x435))+x436);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

