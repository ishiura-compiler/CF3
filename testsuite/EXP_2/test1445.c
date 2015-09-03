#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t6 = -239;
static int32_t x34 = INT32_MAX;
volatile int32_t t8 = 30167593;
static int8_t x37 = INT8_MAX;
int32_t x57 = INT32_MAX;
volatile int64_t x73 = -2675LL;
int16_t x74 = 452;
uint32_t x80 = UINT32_MAX;
uint16_t x81 = 440U;
uint8_t x82 = 0U;
static volatile int64_t x94 = INT64_MAX;
int32_t x95 = INT32_MAX;
int32_t t26 = 7048934;
static volatile int16_t x122 = -1;
uint32_t x123 = 3U;
uint64_t x124 = 48480017655459324LLU;
uint64_t x129 = 292096393945LLU;
volatile uint64_t t29 = 102LLU;
uint8_t x134 = 122U;
static int64_t t30 = -69519375708LL;
volatile uint8_t x138 = UINT8_MAX;
volatile int64_t x140 = 93220323LL;
volatile uint32_t t32 = 1018U;
int8_t x145 = INT8_MIN;
volatile int64_t t33 = -1084257904844318LL;
uint8_t x161 = UINT8_MAX;
static int64_t x170 = -12743LL;
volatile int32_t t37 = 54;
int8_t x177 = -6;
uint32_t t39 = 1906U;
static int32_t x183 = INT32_MAX;
int8_t x184 = INT8_MIN;
uint8_t x191 = 14U;
int8_t x192 = 2;
uint64_t x194 = 613971729418350LLU;
volatile int32_t t43 = -4011;
volatile uint64_t t44 = 442909188780748LLU;
static int64_t x203 = INT64_MIN;
volatile int32_t t47 = -270;
int32_t x221 = INT32_MIN;
int32_t x222 = INT32_MAX;
int8_t x230 = INT8_MIN;
uint8_t x232 = 5U;
volatile int32_t x237 = INT32_MIN;
static uint64_t x244 = 1618714714703859282LLU;
uint64_t t53 = 465873LLU;
uint32_t x245 = 21U;
int16_t x248 = -8;
uint32_t t55 = 44U;
volatile uint8_t x258 = 4U;
int64_t x263 = -1LL;
int16_t x271 = INT16_MIN;
int16_t x283 = INT16_MIN;
int8_t x285 = -1;
uint16_t x296 = 537U;
static int32_t t63 = -116733;
uint8_t x303 = 4U;
int32_t x308 = -1;
static uint32_t x310 = UINT32_MAX;
static volatile int32_t t67 = 1328;
static volatile int32_t t69 = -136233;
uint8_t x329 = 1U;
uint64_t t71 = 340143LLU;
volatile int16_t x333 = -1;
int8_t x334 = INT8_MIN;
volatile int16_t x337 = INT16_MIN;
int32_t x341 = INT32_MAX;
static volatile int64_t t74 = 862330508682LL;
static volatile int64_t x345 = INT64_MIN;
static int16_t x347 = INT16_MAX;
int16_t x348 = -45;
static volatile uint16_t x353 = UINT16_MAX;
int32_t x355 = 131;
volatile uint32_t x356 = 0U;
int32_t x358 = -35;
static int64_t t80 = -441362471LL;
uint32_t x370 = 2U;
static int32_t t81 = 4;
volatile int64_t x375 = 112997LL;
static volatile int16_t x376 = INT16_MIN;
volatile int64_t t84 = -128958LL;
int16_t x386 = -1;
static int16_t x388 = 38;
volatile int32_t t85 = -25;
static uint32_t x398 = UINT32_MAX;
static uint64_t x399 = UINT64_MAX;
static int32_t t88 = 0;
uint64_t x406 = 15072619LLU;
int32_t t91 = 39301999;
int32_t x418 = -1;
static uint32_t x424 = 6206U;
int8_t x428 = INT8_MIN;
static uint8_t x435 = UINT8_MAX;
static int64_t x446 = INT64_MIN;
static volatile uint64_t x447 = 1094329843286099536LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile uint64_t x2 = 11959607083LLU;
	uint64_t x3 = 5820414670985LLU;
	int32_t x4 = -1;
	int32_t t0 = -404;

	t0 = ((x1==(x2<x3))-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1U;
	uint16_t x6 = UINT16_MAX;
	static int16_t x7 = -1;
	uint64_t x8 = 3843526662862LLU;
	volatile uint64_t t1 = 261155300094273LLU;

	t1 = ((x5==(x6<x7))-x8);

	if (t1 != 18446740230182888754LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x10 = -275171545;
	static int64_t x11 = -1LL;
	uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 91U;

	t2 = ((x9==(x10<x11))-x12);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 236302;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -45;

	t3 = ((x13==(x14<x15))-x16);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 37LL;
	int64_t x18 = INT64_MAX;
	volatile int8_t x19 = INT8_MAX;
	uint8_t x20 = 0U;
	static volatile int32_t t4 = 8560227;

	t4 = ((x17==(x18<x19))-x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -3526LL;
	uint16_t x22 = UINT16_MAX;
	volatile int16_t x23 = INT16_MIN;
	int8_t x24 = 0;
	volatile int32_t t5 = 496776662;

	t5 = ((x21==(x22<x23))-x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 851019027LLU;
	int64_t x26 = INT64_MIN;
	static int8_t x27 = INT8_MIN;
	int8_t x28 = 0;

	t6 = ((x25==(x26<x27))-x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile int32_t x30 = 6973748;
	uint32_t x31 = 963U;
	int8_t x32 = -1;
	static int32_t t7 = -2210644;

	t7 = ((x29==(x30<x31))-x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 982U;
	volatile int8_t x35 = -1;
	static volatile int16_t x36 = -40;

	t8 = ((x33==(x34<x35))-x36);

	if (t8 != 40) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = INT32_MIN;
	static uint64_t x39 = 28126863LLU;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 33;

	t9 = ((x37==(x38<x39))-x40);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 8U;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = 469;
	int64_t x48 = -1LL;
	int64_t t10 = -371666877728176271LL;

	t10 = ((x45==(x46<x47))-x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 10602;
	volatile int16_t x50 = 11;
	static int64_t x51 = -1LL;
	int16_t x52 = INT16_MAX;
	volatile int32_t t11 = -779994545;

	t11 = ((x49==(x50<x51))-x52);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	int64_t x55 = -1LL;
	static int64_t x56 = INT64_MAX;
	volatile int64_t t12 = 487394657854690299LL;

	t12 = ((x53==(x54<x55))-x56);

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MAX;
	int32_t x59 = -6;
	static uint64_t x60 = 43881LLU;
	static volatile uint64_t t13 = 559470283362113746LLU;

	t13 = ((x57==(x58<x59))-x60);

	if (t13 != 18446744073709507735LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 4U;
	int32_t x62 = INT32_MIN;
	int8_t x63 = 5;
	static int64_t x64 = -2031678LL;
	static volatile int64_t t14 = 6LL;

	t14 = ((x61==(x62<x63))-x64);

	if (t14 != 2031678LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = -31812;
	int8_t x67 = INT8_MAX;
	static uint64_t x68 = 938235LLU;
	volatile uint64_t t15 = 870882520721015LLU;

	t15 = ((x65==(x66<x67))-x68);

	if (t15 != 18446744073708613381LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 4367718737600309LLU;
	volatile uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 2736912334442737840LLU;
	static int32_t x72 = 2;
	static int32_t t16 = 29847273;

	t16 = ((x69==(x70<x71))-x72);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x75 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t17 = 100198;

	t17 = ((x73==(x74<x75))-x76);

	if (t17 != -65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = 31U;
	uint32_t x78 = 20386074U;
	int8_t x79 = 3;
	uint32_t t18 = 100951594U;

	t18 = ((x77==(x78<x79))-x80);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x83 = -1LL;
	static int16_t x84 = -39;
	static volatile int32_t t19 = 8;

	t19 = ((x81==(x82<x83))-x84);

	if (t19 != 39) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	int8_t x86 = -1;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MAX;
	int32_t t20 = 0;

	t20 = ((x85==(x86<x87))-x88);

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = 454;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t21 = -63970341;

	t21 = ((x89==(x90<x91))-x92);

	if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 79285U;
	uint64_t x96 = 1210LLU;
	static volatile uint64_t t22 = 4029504359780025LLU;

	t22 = ((x93==(x94<x95))-x96);

	if (t22 != 18446744073709550406LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	uint64_t x98 = 16501640542444073LLU;
	volatile uint16_t x99 = 3667U;
	int16_t x100 = INT16_MIN;
	int32_t t23 = 86271287;

	t23 = ((x97==(x98<x99))-x100);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x110 = 14U;
	uint16_t x111 = 3U;
	int8_t x112 = INT8_MAX;
	volatile int32_t t24 = -7;

	t24 = ((x109==(x110<x111))-x112);

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -90;
	volatile uint64_t x114 = UINT64_MAX;
	int16_t x115 = INT16_MAX;
	static int64_t x116 = -568LL;
	volatile int64_t t25 = 998LL;

	t25 = ((x113==(x114<x115))-x116);

	if (t25 != 568LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	static int8_t x118 = INT8_MIN;
	static uint8_t x119 = 0U;
	volatile int8_t x120 = 2;

	t26 = ((x117==(x118<x119))-x120);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x121 = 2U;
	uint64_t t27 = 146708069908771933LLU;

	t27 = ((x121==(x122<x123))-x124);

	if (t27 != 18398264056054092292LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = 11;
	int64_t x126 = INT64_MAX;
	int8_t x127 = INT8_MIN;
	volatile int32_t x128 = -81;
	int32_t t28 = 22032630;

	t28 = ((x125==(x126<x127))-x128);

	if (t28 != 81) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x130 = 29947U;
	int16_t x131 = INT16_MIN;
	volatile uint64_t x132 = UINT64_MAX;

	t29 = ((x129==(x130<x131))-x132);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x133 = 2U;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -125111091875128LL;

	t30 = ((x133==(x134<x135))-x136);

	if (t30 != 125111091875128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	static int64_t t31 = 1LL;

	t31 = ((x137==(x138<x139))-x140);

	if (t31 != -93220323LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint64_t x142 = 4133363LLU;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = 238U;

	t32 = ((x141==(x142<x143))-x144);

	if (t32 != 4294967058U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x146 = 56U;
	int32_t x147 = -1;
	int64_t x148 = -1LL;

	t33 = ((x145==(x146<x147))-x148);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 226204946966LLU;
	uint16_t x158 = 41U;
	int8_t x159 = 39;
	int64_t x160 = -4551097136950845540LL;
	volatile int64_t t34 = -1420861458293440LL;

	t34 = ((x157==(x158<x159))-x160);

	if (t34 != 4551097136950845540LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x162 = UINT32_MAX;
	int8_t x163 = INT8_MAX;
	volatile uint64_t x164 = 85LLU;
	uint64_t t35 = 4738879LLU;

	t35 = ((x161==(x162<x163))-x164);

	if (t35 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 2LLU;
	static uint8_t x166 = UINT8_MAX;
	volatile int64_t x167 = -88LL;
	volatile int64_t x168 = 380896LL;
	int64_t t36 = -19464742751152482LL;

	t36 = ((x165==(x166<x167))-x168);

	if (t36 != -380896LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x169 = 1243U;
	static volatile uint32_t x171 = 42U;
	static int16_t x172 = INT16_MIN;

	t37 = ((x169==(x170<x171))-x172);

	if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -1LL;
	int64_t x174 = INT64_MAX;
	static int32_t x175 = -1;
	volatile uint32_t x176 = 10109765U;
	static uint32_t t38 = 26216774U;

	t38 = ((x173==(x174<x175))-x176);

	if (t38 != 4284857531U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x178 = 9U;
	int64_t x179 = 304194962910803LL;
	static uint32_t x180 = UINT32_MAX;

	t39 = ((x177==(x178<x179))-x180);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x181 = 950U;
	int16_t x182 = INT16_MAX;
	volatile int32_t t40 = 780074753;

	t40 = ((x181==(x182<x183))-x184);

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x185 = 1102121609U;
	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = 113960522092681LLU;
	uint64_t t41 = 28779522048466LLU;

	t41 = ((x185==(x186<x187))-x188);

	if (t41 != 18446630113187458935LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -1LL;
	int16_t x190 = -3340;
	volatile int32_t t42 = 343;

	t42 = ((x189==(x190<x191))-x192);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x193 = INT8_MIN;
	volatile uint16_t x195 = 1329U;
	uint8_t x196 = 32U;

	t43 = ((x193==(x194<x195))-x196);

	if (t43 != -32) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 817365U;
	int64_t x198 = -1LL;
	volatile uint64_t x199 = 132668LLU;
	uint64_t x200 = 4770053LLU;

	t44 = ((x197==(x198<x199))-x200);

	if (t44 != 18446744073704781563LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MAX;
	static volatile uint32_t x202 = 23694U;
	volatile uint8_t x204 = 88U;
	int32_t t45 = -53;

	t45 = ((x201==(x202<x203))-x204);

	if (t45 != -88) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x205 = 35233679460062424LL;
	int8_t x206 = 1;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 17U;
	volatile int32_t t46 = -584784;

	t46 = ((x205==(x206<x207))-x208);

	if (t46 != -17) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x209 = INT8_MIN;
	volatile int32_t x210 = -1;
	volatile int8_t x211 = -1;
	volatile int32_t x212 = -1;

	t47 = ((x209==(x210<x211))-x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x223 = 2U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t48 = 40;

	t48 = ((x221==(x222<x223))-x224);

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = INT64_MAX;
	uint32_t x228 = UINT32_MAX;
	static volatile uint32_t t49 = 210U;

	t49 = ((x225==(x226<x227))-x228);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile int64_t x231 = INT64_MIN;
	volatile int32_t t50 = 286;

	t50 = ((x229==(x230<x231))-x232);

	if (t50 != -5) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x233 = UINT32_MAX;
	volatile int32_t x234 = -1;
	static int8_t x235 = -1;
	int8_t x236 = INT8_MIN;
	static int32_t t51 = 704364122;

	t51 = ((x233==(x234<x235))-x236);

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x238 = INT64_MAX;
	volatile uint8_t x239 = UINT8_MAX;
	int8_t x240 = -51;
	volatile int32_t t52 = 108960;

	t52 = ((x237==(x238<x239))-x240);

	if (t52 != 51) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -1;
	int64_t x243 = 50LL;

	t53 = ((x241==(x242<x243))-x244);

	if (t53 != 16828029359005692334LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x246 = 2166LLU;
	static uint16_t x247 = 1810U;
	volatile int32_t t54 = 439166;

	t54 = ((x245==(x246<x247))-x248);

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -3979;
	static int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;

	t55 = ((x253==(x254<x255))-x256);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x257 = UINT16_MAX;
	static int8_t x259 = INT8_MAX;
	int64_t x260 = -46819946332743039LL;
	int64_t t56 = 3040103LL;

	t56 = ((x257==(x258<x259))-x260);

	if (t56 != 46819946332743039LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	volatile int64_t x264 = 1704688494539141LL;
	int64_t t57 = 852139750856621LL;

	t57 = ((x261==(x262<x263))-x264);

	if (t57 != -1704688494539141LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -1;
	volatile uint64_t x270 = 142509610326211944LLU;
	volatile uint16_t x272 = 3663U;
	volatile int32_t t58 = 28;

	t58 = ((x269==(x270<x271))-x272);

	if (t58 != -3663) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	static int64_t x275 = INT64_MAX;
	uint8_t x276 = 0U;
	volatile int32_t t59 = 460636154;

	t59 = ((x273==(x274<x275))-x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x277 = INT8_MAX;
	static volatile uint8_t x278 = 1U;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 119U;
	uint32_t t60 = 18594404U;

	t60 = ((x277==(x278<x279))-x280);

	if (t60 != 4294967177U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 43506326U;
	static int64_t x282 = INT64_MIN;
	static volatile int8_t x284 = INT8_MIN;
	volatile int32_t t61 = -229369;

	t61 = ((x281==(x282<x283))-x284);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x286 = 26U;
	int8_t x287 = INT8_MAX;
	int64_t x288 = -24328844835640LL;
	static volatile int64_t t62 = 13888766LL;

	t62 = ((x285==(x286<x287))-x288);

	if (t62 != 24328844835640LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;

	t63 = ((x293==(x294<x295))-x296);

	if (t63 != -537) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x297 = 14094818;
	uint32_t x298 = 1U;
	int32_t x299 = INT32_MIN;
	static int64_t x300 = INT64_MAX;
	int64_t t64 = -1182LL;

	t64 = ((x297==(x298<x299))-x300);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MIN;
	volatile int8_t x302 = INT8_MIN;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t65 = -31621036;

	t65 = ((x301==(x302<x303))-x304);

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x305 = INT32_MIN;
	static uint32_t x306 = 44U;
	int32_t x307 = INT32_MAX;
	static int32_t t66 = 0;

	t66 = ((x305==(x306<x307))-x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x309 = 1U;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;

	t67 = ((x309==(x310<x311))-x312);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = 2U;
	uint8_t x318 = 78U;
	uint16_t x319 = 5U;
	int8_t x320 = INT8_MIN;
	int32_t t68 = -310615;

	t68 = ((x317==(x318<x319))-x320);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = 428576801655366LL;
	int8_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	static int16_t x324 = INT16_MAX;

	t69 = ((x321==(x322<x323))-x324);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = 308LL;
	static int8_t x326 = INT8_MAX;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = 45;
	int32_t t70 = -15900;

	t70 = ((x325==(x326<x327))-x328);

	if (t70 != -45) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x330 = 16159175U;
	int16_t x331 = -1;
	uint64_t x332 = UINT64_MAX;

	t71 = ((x329==(x330<x331))-x332);

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x335 = -424;
	volatile int32_t x336 = 666755;
	volatile int32_t t72 = 1269646;

	t72 = ((x333==(x334<x335))-x336);

	if (t72 != -666755) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x338 = INT8_MIN;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MAX;
	volatile int32_t t73 = -110;

	t73 = ((x337==(x338<x339))-x340);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x342 = -1;
	int16_t x343 = 1762;
	static int64_t x344 = INT64_MAX;

	t74 = ((x341==(x342<x343))-x344);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = INT8_MAX;
	static int32_t t75 = -5330;

	t75 = ((x345==(x346<x347))-x348);

	if (t75 != 45) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = 124U;
	uint64_t x350 = 677670332438LLU;
	uint16_t x351 = 1529U;
	uint16_t x352 = 77U;
	static int32_t t76 = -1;

	t76 = ((x349==(x350<x351))-x352);

	if (t76 != -77) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x354 = -1LL;
	static volatile uint32_t t77 = 364U;

	t77 = ((x353==(x354<x355))-x356);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x357 = 427;
	static volatile int8_t x359 = INT8_MIN;
	int64_t x360 = 273691633034LL;
	static int64_t t78 = 234246091LL;

	t78 = ((x357==(x358<x359))-x360);

	if (t78 != -273691633034LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x361 = 11185U;
	static int64_t x362 = -1LL;
	int32_t x363 = -882980;
	static int16_t x364 = -1;
	volatile int32_t t79 = -1492;

	t79 = ((x361==(x362<x363))-x364);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x365 = 2U;
	volatile int8_t x366 = INT8_MAX;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = 30827764LL;

	t80 = ((x365==(x366<x367))-x368);

	if (t80 != -30827764LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MIN;

	t81 = ((x369==(x370<x371))-x372);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x373 = 26765U;
	volatile int32_t x374 = -1260764;
	static int32_t t82 = -53899699;

	t82 = ((x373==(x374<x375))-x376);

	if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = -2594176164LL;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = UINT64_MAX;
	static volatile int64_t x380 = -71518232548548LL;
	volatile int64_t t83 = 918153081LL;

	t83 = ((x377==(x378<x379))-x380);

	if (t83 != 71518232548548LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = -1LL;
	volatile int16_t x382 = -1;
	int32_t x383 = INT32_MAX;
	int64_t x384 = -260LL;

	t84 = ((x381==(x382<x383))-x384);

	if (t84 != 260LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = 5857455LLU;
	int16_t x387 = 3;

	t85 = ((x385==(x386<x387))-x388);

	if (t85 != -38) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = -15;
	int8_t x390 = INT8_MIN;
	int16_t x391 = -400;
	volatile uint32_t x392 = 0U;
	volatile uint32_t t86 = 10692845U;

	t86 = ((x389==(x390<x391))-x392);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x393 = 29U;
	static int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = UINT64_MAX;
	uint64_t t87 = 3340412234LLU;

	t87 = ((x393==(x394<x395))-x396);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 11953732LLU;
	int16_t x400 = INT16_MIN;

	t88 = ((x397==(x398<x399))-x400);

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x401 = -542715945317944486LL;
	int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MAX;
	int32_t t89 = -294693957;

	t89 = ((x401==(x402<x403))-x404);

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x405 = 18U;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = 0;
	static volatile int32_t t90 = -2;

	t90 = ((x405==(x406<x407))-x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 6U;
	int16_t x412 = INT16_MIN;

	t91 = ((x409==(x410<x411))-x412);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = UINT8_MAX;
	static int64_t x414 = INT64_MIN;
	static int32_t x415 = INT32_MIN;
	uint8_t x416 = 0U;
	volatile int32_t t92 = -2591583;

	t92 = ((x413==(x414<x415))-x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x417 = -1;
	volatile int8_t x419 = INT8_MAX;
	int32_t x420 = INT32_MAX;
	int32_t t93 = 99940;

	t93 = ((x417==(x418<x419))-x420);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x421 = 487;
	volatile int16_t x422 = INT16_MIN;
	static int32_t x423 = 87090;
	uint32_t t94 = 10618U;

	t94 = ((x421==(x422<x423))-x424);

	if (t94 != 4294961090U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = 7938234409LLU;
	int32_t t95 = -555376758;

	t95 = ((x425==(x426<x427))-x428);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x433 = INT32_MAX;
	int64_t x434 = INT64_MIN;
	static uint64_t x436 = 996304417986717LLU;
	volatile uint64_t t96 = 15LLU;

	t96 = ((x433==(x434<x435))-x436);

	if (t96 != 18445747769291564899LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x437 = INT16_MIN;
	volatile int64_t x438 = -2728LL;
	uint16_t x439 = UINT16_MAX;
	int64_t x440 = INT64_MAX;
	int64_t t97 = 1278LL;

	t97 = ((x437==(x438<x439))-x440);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x445 = INT8_MIN;
	static int64_t x448 = INT64_MAX;
	int64_t t98 = 17406LL;

	t98 = ((x445==(x446<x447))-x448);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x449 = 113U;
	static uint8_t x450 = UINT8_MAX;
	int64_t x451 = INT64_MAX;
	uint16_t x452 = 7072U;
	int32_t t99 = -1645385;

	t99 = ((x449==(x450<x451))-x452);

	if (t99 != -7072) { NG(); } else { ; }
	
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

