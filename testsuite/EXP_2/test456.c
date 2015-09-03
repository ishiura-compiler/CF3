#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x13 = 778U;
uint32_t x17 = UINT32_MAX;
int16_t x21 = -112;
uint32_t x22 = 796U;
static int32_t x26 = 1908;
int32_t t6 = -9658;
volatile uint64_t x40 = UINT64_MAX;
static volatile int16_t x43 = INT16_MIN;
static int16_t x46 = INT16_MIN;
int16_t x47 = -4311;
volatile int32_t x50 = -1;
int16_t x55 = INT16_MIN;
static uint8_t x57 = 2U;
int8_t x64 = INT8_MIN;
static volatile int64_t t15 = INT64_MIN;
uint32_t x73 = 3U;
static volatile int64_t x76 = INT64_MIN;
volatile uint64_t t17 = 8822867002709669058LLU;
int32_t x84 = INT32_MIN;
int8_t x89 = -1;
int32_t x102 = 0;
uint8_t x103 = 3U;
uint32_t x104 = 554U;
static int8_t x109 = INT8_MIN;
static uint16_t x110 = 31614U;
volatile uint32_t x111 = 1914084U;
int16_t x113 = -1;
int64_t t25 = INT64_MAX;
uint16_t x122 = 26U;
volatile uint64_t x123 = UINT64_MAX;
static int8_t x124 = -1;
volatile int8_t x125 = -4;
uint8_t x127 = 7U;
int16_t x128 = 0;
int32_t t27 = 0;
static uint64_t x135 = 3LLU;
static volatile int32_t t32 = -13932;
int32_t x149 = INT32_MIN;
int16_t x152 = INT16_MIN;
int32_t x166 = -1;
volatile int32_t t36 = 0;
uint8_t x179 = 0U;
static int64_t x187 = -3227540828024378LL;
int8_t x192 = INT8_MIN;
volatile int32_t t42 = 1288;
int64_t x200 = INT64_MIN;
int32_t x205 = -1;
volatile int32_t t45 = 7206193;
int8_t x209 = INT8_MIN;
uint8_t x210 = UINT8_MAX;
static int64_t x229 = 874146491348LL;
int8_t x230 = INT8_MIN;
volatile uint64_t t50 = 194LLU;
uint64_t x234 = 1914437260183235LLU;
int16_t x236 = INT16_MIN;
uint8_t x240 = 1U;
int32_t t52 = 7359;
static volatile int8_t x248 = INT8_MIN;
volatile int32_t t54 = 0;
int16_t x250 = INT16_MIN;
uint16_t x260 = 72U;
static volatile int64_t x261 = -1LL;
volatile int16_t x262 = INT16_MIN;
volatile int64_t x263 = 178563958LL;
uint8_t x266 = 3U;
uint16_t x269 = UINT16_MAX;
volatile uint32_t x271 = UINT32_MAX;
uint32_t x272 = UINT32_MAX;
int32_t x277 = -1;
static int64_t x279 = -20827454070473LL;
static uint64_t x293 = 3558LLU;
volatile int16_t x296 = INT16_MIN;
int64_t x338 = -233743LL;
int64_t x340 = -1LL;
int32_t x349 = -1;
volatile int32_t t71 = 222;
volatile int32_t t72 = 4266;
uint32_t x373 = UINT32_MAX;
int8_t x374 = INT8_MIN;
int32_t t74 = 113;
static volatile int32_t x384 = 17;
static volatile int32_t x390 = -1;
uint32_t x409 = 81626U;
uint64_t x410 = UINT64_MAX;
volatile int32_t t79 = 229628;
int16_t x419 = INT16_MIN;
uint8_t x424 = UINT8_MAX;
int32_t x426 = 42883;
int64_t x427 = 875814LL;
volatile uint16_t x428 = 446U;
volatile int32_t t82 = -2;
int8_t x430 = 31;
static volatile int64_t x431 = -7511978724703LL;
int16_t x436 = 21;
static int64_t x437 = 68LL;
int8_t x441 = 1;
static volatile uint16_t x444 = UINT16_MAX;
volatile int32_t t86 = 3922;
volatile int64_t x456 = -1LL;
uint8_t x472 = 4U;
uint64_t x473 = 1LLU;
volatile uint32_t x476 = UINT32_MAX;
uint16_t x482 = 3579U;
volatile uint16_t x484 = 24U;
int64_t x500 = INT64_MIN;
int64_t x509 = -429781877240936LL;
int8_t x510 = INT8_MAX;
uint32_t x511 = 1460789041U;
uint64_t t95 = 2022332733573LLU;
uint8_t x514 = 44U;
int64_t x516 = 3838603637886LL;
int16_t x517 = 25;
uint32_t x518 = 1734U;
static int8_t x523 = 0;


void f0(void) {
	uint32_t x5 = 1525034U;
	uint8_t x6 = 2U;
	static int8_t x7 = -1;
	int8_t x8 = -25;
	int32_t t0 = -8195229;

	t0 = ((x5<=(x6*x7))+x8);

	if (t0 != -24) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 8488U;
	uint64_t x10 = UINT64_MAX;
	static int32_t x11 = 58500;
	uint16_t x12 = UINT16_MAX;
	static volatile int32_t t1 = 867;

	t1 = ((x9<=(x10*x11))+x12);

	if (t1 != 65536) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	uint16_t x15 = 2623U;
	volatile int8_t x16 = 61;
	int32_t t2 = -1;

	t2 = ((x13<=(x14*x15))+x16);

	if (t2 != 62) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x18 = -1;
	volatile uint32_t x19 = 3021029U;
	int16_t x20 = INT16_MIN;
	int32_t t3 = 9521;

	t3 = ((x17<=(x18*x19))+x20);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x23 = -1;
	int16_t x24 = 1;
	static int32_t t4 = 1;

	t4 = ((x21<=(x22*x23))+x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x27 = -49;
	static uint64_t x28 = UINT64_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x25<=(x26*x27))+x28);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint8_t x30 = 2U;
	int16_t x31 = INT16_MIN;
	uint8_t x32 = 13U;

	t6 = ((x29<=(x30*x31))+x32);

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int16_t x34 = INT16_MIN;
	static int8_t x35 = INT8_MAX;
	static volatile int16_t x36 = INT16_MAX;
	volatile int32_t t7 = 218838;

	t7 = ((x33<=(x34*x35))+x36);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static volatile int32_t x38 = -1;
	volatile int64_t x39 = INT64_MAX;
	uint64_t t8 = 20LLU;

	t8 = ((x37<=(x38*x39))+x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 604U;
	static volatile uint8_t x42 = UINT8_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t9 = -2077029;

	t9 = ((x41<=(x42*x43))+x44);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -139568233331LL;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = 2;

	t10 = ((x45<=(x46*x47))+x48);

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -39;
	volatile int16_t x51 = INT16_MIN;
	uint32_t x52 = 3089U;
	volatile uint32_t t11 = 232075376U;

	t11 = ((x49<=(x50*x51))+x52);

	if (t11 != 3090U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 15;
	int16_t x54 = 11710;
	volatile int32_t x56 = -675;
	volatile int32_t t12 = 56755961;

	t12 = ((x53<=(x54*x55))+x56);

	if (t12 != -675) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x58 = 113U;
	volatile uint32_t x59 = 2035653U;
	static int8_t x60 = -1;
	static volatile int32_t t13 = 2839791;

	t13 = ((x57<=(x58*x59))+x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 1U;
	int8_t x62 = INT8_MIN;
	static volatile int16_t x63 = INT16_MIN;
	static volatile int32_t t14 = 12779;

	t14 = ((x61<=(x62*x63))+x64);

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 111;
	static int64_t x66 = -1LL;
	static volatile int8_t x67 = 1;
	static int64_t x68 = INT64_MIN;

	t15 = ((x65<=(x66*x67))+x68);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MIN;
	uint32_t x75 = UINT32_MAX;
	static volatile int64_t t16 = -130355057498LL;

	t16 = ((x73<=(x74*x75))+x76);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -1;
	uint16_t x78 = 1U;
	int32_t x79 = INT32_MAX;
	static uint64_t x80 = 19235099169204LLU;

	t17 = ((x77<=(x78*x79))+x80);

	if (t17 != 19235099169205LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MIN;
	static volatile uint32_t x82 = 140919413U;
	int32_t x83 = -1;
	int32_t t18 = INT32_MIN;

	t18 = ((x81<=(x82*x83))+x84);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = 1;
	int16_t x87 = 1390;
	static int64_t x88 = -228214207761LL;
	volatile int64_t t19 = 1765728630LL;

	t19 = ((x85<=(x86*x87))+x88);

	if (t19 != -228214207760LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x90 = UINT32_MAX;
	volatile uint32_t x91 = 758067U;
	volatile uint16_t x92 = 79U;
	int32_t t20 = -147;

	t20 = ((x89<=(x90*x91))+x92);

	if (t20 != 79) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MIN;
	int32_t x98 = 13005;
	volatile int16_t x99 = INT16_MAX;
	int16_t x100 = 23;
	int32_t t21 = -48459563;

	t21 = ((x97<=(x98*x99))+x100);

	if (t21 != 24) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = 0;
	volatile uint32_t t22 = 1446935U;

	t22 = ((x101<=(x102*x103))+x104);

	if (t22 != 555U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	uint16_t x106 = UINT16_MAX;
	uint8_t x107 = 15U;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t23 = -1;

	t23 = ((x105<=(x106*x107))+x108);

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x112 = 70U;
	int32_t t24 = 215;

	t24 = ((x109<=(x110*x111))+x112);

	if (t24 != 70) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x114 = 1408300LLU;
	volatile uint16_t x115 = 981U;
	int64_t x116 = INT64_MAX;

	t25 = ((x113<=(x114*x115))+x116);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	static int32_t t26 = -150621796;

	t26 = ((x121<=(x122*x123))+x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = INT16_MAX;

	t27 = ((x125<=(x126*x127))+x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x130 = INT64_MAX;
	uint16_t x131 = 0U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t28 = -1;

	t28 = ((x129<=(x130*x131))+x132);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 113U;
	int8_t x134 = 5;
	static int32_t x136 = 10337656;
	int32_t t29 = 1;

	t29 = ((x133<=(x134*x135))+x136);

	if (t29 != 10337656) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = INT64_MIN;
	int64_t x138 = 118637737LL;
	static int32_t x139 = INT32_MAX;
	uint16_t x140 = 7U;
	static volatile int32_t t30 = -597053375;

	t30 = ((x137<=(x138*x139))+x140);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 1U;
	volatile int16_t x142 = INT16_MIN;
	static int16_t x143 = 449;
	static int32_t x144 = 6102;
	volatile int32_t t31 = -3263;

	t31 = ((x141<=(x142*x143))+x144);

	if (t31 != 6103) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	int16_t x147 = 536;
	static int8_t x148 = INT8_MIN;

	t32 = ((x145<=(x146*x147))+x148);

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	int32_t t33 = -1819214;

	t33 = ((x149<=(x150*x151))+x152);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = UINT8_MAX;
	static int64_t x158 = 85058LL;
	uint64_t x159 = 61897LLU;
	static int32_t x160 = -36658417;
	int32_t t34 = 12933668;

	t34 = ((x157<=(x158*x159))+x160);

	if (t34 != -36658416) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x165 = UINT16_MAX;
	uint64_t x167 = 229091950138619483LLU;
	uint64_t x168 = 13759483993LLU;
	uint64_t t35 = 866LLU;

	t35 = ((x165<=(x166*x167))+x168);

	if (t35 != 13759483994LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MAX;
	int32_t x170 = -11642;
	volatile int16_t x171 = 0;
	int16_t x172 = INT16_MAX;

	t36 = ((x169<=(x170*x171))+x172);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 275LLU;
	volatile int32_t x174 = 65831;
	uint64_t x175 = UINT64_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t37 = 64896U;

	t37 = ((x173<=(x174*x175))+x176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x177 = 20U;
	uint64_t x178 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = ((x177<=(x178*x179))+x180);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -1;
	static uint32_t x182 = 4183160U;
	int64_t x183 = -1LL;
	uint16_t x184 = 577U;
	volatile int32_t t39 = -250;

	t39 = ((x181<=(x182*x183))+x184);

	if (t39 != 577) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 35U;
	int8_t x186 = -1;
	int64_t x188 = -1LL;
	int64_t t40 = 64543678697LL;

	t40 = ((x185<=(x186*x187))+x188);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t t41 = 21181;

	t41 = ((x189<=(x190*x191))+x192);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x193 = 28U;
	volatile uint32_t x194 = UINT32_MAX;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = -1;

	t42 = ((x193<=(x194*x195))+x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = 3;
	int8_t x199 = -1;
	int64_t t43 = INT64_MIN;

	t43 = ((x197<=(x198*x199))+x200);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	volatile int32_t x203 = 20731;
	int8_t x204 = INT8_MIN;
	int32_t t44 = -313131;

	t44 = ((x201<=(x202*x203))+x204);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x206 = INT8_MIN;
	uint64_t x207 = 70980118037854256LLU;
	volatile int32_t x208 = -1;

	t45 = ((x205<=(x206*x207))+x208);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x211 = 87659;
	int32_t x212 = INT32_MIN;
	int32_t t46 = 81860690;

	t46 = ((x209<=(x210*x211))+x212);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = -26;
	int16_t x215 = INT16_MIN;
	static volatile int32_t x216 = -1;
	int32_t t47 = -293952;

	t47 = ((x213<=(x214*x215))+x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x217 = 10U;
	uint64_t x218 = 176822LLU;
	static uint8_t x219 = 9U;
	uint8_t x220 = 30U;
	int32_t t48 = -7;

	t48 = ((x217<=(x218*x219))+x220);

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	int32_t x227 = -1;
	uint64_t x228 = 1845319412059LLU;
	uint64_t t49 = 26236815LLU;

	t49 = ((x225<=(x226*x227))+x228);

	if (t49 != 1845319412060LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x231 = -1;
	uint64_t x232 = 24171358133775LLU;

	t50 = ((x229<=(x230*x231))+x232);

	if (t50 != 24171358133775LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MAX;
	volatile int32_t x235 = 1501;
	volatile int32_t t51 = 210750808;

	t51 = ((x233<=(x234*x235))+x236);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = 19069;
	int16_t x238 = 1;
	int64_t x239 = 36LL;

	t52 = ((x237<=(x238*x239))+x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 262137128777763363LLU;
	volatile uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = 1;
	int32_t t53 = -3792;

	t53 = ((x241<=(x242*x243))+x244);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x245 = -975750;
	int32_t x246 = -1;
	volatile uint16_t x247 = UINT16_MAX;

	t54 = ((x245<=(x246*x247))+x248);

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	static uint32_t x251 = 12U;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t55 = 815591987;

	t55 = ((x249<=(x250*x251))+x252);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x253 = UINT64_MAX;
	uint64_t x254 = UINT64_MAX;
	static int16_t x255 = -7321;
	int64_t x256 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x253<=(x254*x255))+x256);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 242709LLU;
	int8_t x259 = -1;
	volatile int32_t t57 = 270;

	t57 = ((x257<=(x258*x259))+x260);

	if (t57 != 72) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x264 = 1248728U;
	uint32_t t58 = 11340U;

	t58 = ((x261<=(x262*x263))+x264);

	if (t58 != 1248728U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = -1LL;
	int8_t x267 = INT8_MIN;
	int16_t x268 = 122;
	volatile int32_t t59 = -161115051;

	t59 = ((x265<=(x266*x267))+x268);

	if (t59 != 122) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x270 = 3U;
	uint32_t t60 = 24848U;

	t60 = ((x269<=(x270*x271))+x272);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int16_t x274 = 3;
	int8_t x275 = INT8_MAX;
	uint64_t x276 = 817446430LLU;
	volatile uint64_t t61 = 4355086467LLU;

	t61 = ((x273<=(x274*x275))+x276);

	if (t61 != 817446430LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x278 = INT16_MAX;
	static int64_t x280 = INT64_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = ((x277<=(x278*x279))+x280);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = -110952080;
	int8_t x290 = 2;
	static int64_t x291 = -1LL;
	int64_t x292 = INT64_MIN;
	static int64_t t63 = 14179208LL;

	t63 = ((x289<=(x290*x291))+x292);

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x294 = 2U;
	static volatile uint32_t x295 = 4579560U;
	volatile int32_t t64 = -15287955;

	t64 = ((x293<=(x294*x295))+x296);

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = -1;
	uint8_t x318 = 119U;
	volatile int16_t x319 = INT16_MIN;
	uint64_t x320 = 150275618177980LLU;
	static uint64_t t65 = 62883058LLU;

	t65 = ((x317<=(x318*x319))+x320);

	if (t65 != 150275618177980LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = -1;
	int16_t x322 = -79;
	static uint16_t x323 = 2060U;
	static volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t66 = 0;

	t66 = ((x321<=(x322*x323))+x324);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = INT32_MIN;
	static int16_t x330 = 6131;
	int16_t x331 = -1;
	volatile int64_t x332 = -1LL;
	volatile int64_t t67 = -4132LL;

	t67 = ((x329<=(x330*x331))+x332);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x333 = 258U;
	int8_t x334 = -1;
	static int64_t x335 = 13489164611680LL;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t68 = 315465078;

	t68 = ((x333<=(x334*x335))+x336);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x337 = INT64_MIN;
	uint64_t x339 = 5238319500069136340LLU;
	static int64_t t69 = -956LL;

	t69 = ((x337<=(x338*x339))+x340);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x350 = -1;
	volatile uint32_t x351 = 261131108U;
	int32_t x352 = 9067908;
	volatile int32_t t70 = 1185892;

	t70 = ((x349<=(x350*x351))+x352);

	if (t70 != 9067908) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	static int16_t x355 = 238;
	static int16_t x356 = -259;

	t71 = ((x353<=(x354*x355))+x356);

	if (t71 != -258) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x365 = -1;
	static int16_t x366 = INT16_MIN;
	int16_t x367 = -41;
	uint16_t x368 = 5260U;

	t72 = ((x365<=(x366*x367))+x368);

	if (t72 != 5261) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = 1;
	uint64_t x370 = 15073412762LLU;
	int32_t x371 = -3;
	int8_t x372 = INT8_MIN;
	static int32_t t73 = 25372346;

	t73 = ((x369<=(x370*x371))+x372);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x375 = INT8_MIN;
	volatile int8_t x376 = -14;

	t74 = ((x373<=(x374*x375))+x376);

	if (t74 != -14) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x381 = INT16_MIN;
	volatile uint64_t x382 = 702580205035LLU;
	volatile uint8_t x383 = 3U;
	static volatile int32_t t75 = -627543;

	t75 = ((x381<=(x382*x383))+x384);

	if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x385 = 30;
	uint8_t x386 = 2U;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = -1;
	volatile int32_t t76 = 23818;

	t76 = ((x385<=(x386*x387))+x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x389 = -41954928711LL;
	static uint8_t x391 = 12U;
	static int8_t x392 = 2;
	int32_t t77 = 7821238;

	t77 = ((x389<=(x390*x391))+x392);

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = 222U;
	volatile uint16_t x403 = UINT16_MAX;
	uint8_t x404 = 2U;
	volatile int32_t t78 = 41;

	t78 = ((x401<=(x402*x403))+x404);

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MIN;

	t79 = ((x409<=(x410*x411))+x412);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x417 = INT64_MIN;
	volatile int16_t x418 = -4;
	static int16_t x420 = INT16_MIN;
	static volatile int32_t t80 = 10;

	t80 = ((x417<=(x418*x419))+x420);

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x421 = 3386;
	volatile int8_t x422 = -11;
	uint8_t x423 = 0U;
	static int32_t t81 = 6;

	t81 = ((x421<=(x422*x423))+x424);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x425 = 50U;

	t82 = ((x425<=(x426*x427))+x428);

	if (t82 != 447) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x429 = -4881139;
	int8_t x432 = -1;
	int32_t t83 = 0;

	t83 = ((x429<=(x430*x431))+x432);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x433 = 4;
	volatile int32_t x434 = 23822176;
	uint32_t x435 = UINT32_MAX;
	static int32_t t84 = -32737426;

	t84 = ((x433<=(x434*x435))+x436);

	if (t84 != 22) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	int64_t x440 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x437<=(x438*x439))+x440);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x442 = -628;
	int8_t x443 = -1;

	t86 = ((x441<=(x442*x443))+x444);

	if (t86 != 65536) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x445 = -261661473869776407LL;
	int16_t x446 = INT16_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	int16_t x448 = -15868;
	volatile int32_t t87 = -507216130;

	t87 = ((x445<=(x446*x447))+x448);

	if (t87 != -15867) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x453 = -1070;
	uint8_t x454 = 9U;
	uint16_t x455 = 8U;
	static volatile int64_t t88 = -187403283204LL;

	t88 = ((x453<=(x454*x455))+x456);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = 1U;
	static int64_t x470 = INT64_MIN;
	uint8_t x471 = 0U;
	int32_t t89 = 2;

	t89 = ((x469<=(x470*x471))+x472);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x474 = 489U;
	int8_t x475 = -1;
	static volatile uint32_t t90 = 2088025U;

	t90 = ((x473<=(x474*x475))+x476);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x477 = -1;
	uint64_t x478 = 19955775071LLU;
	volatile uint64_t x479 = UINT64_MAX;
	uint64_t x480 = 1327797016473457643LLU;
	uint64_t t91 = 55LLU;

	t91 = ((x477<=(x478*x479))+x480);

	if (t91 != 1327797016473457643LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x481 = 2;
	static uint8_t x483 = UINT8_MAX;
	static volatile int32_t t92 = 171;

	t92 = ((x481<=(x482*x483))+x484);

	if (t92 != 25) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x497 = 0U;
	int16_t x498 = -129;
	volatile uint8_t x499 = 5U;
	volatile int64_t t93 = INT64_MIN;

	t93 = ((x497<=(x498*x499))+x500);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x501 = INT8_MIN;
	static volatile uint64_t x502 = 4241LLU;
	uint16_t x503 = 24407U;
	int64_t x504 = -8550080032946LL;
	volatile int64_t t94 = 25352490611716412LL;

	t94 = ((x501<=(x502*x503))+x504);

	if (t94 != -8550080032946LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x512 = UINT64_MAX;

	t95 = ((x509<=(x510*x511))+x512);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x513 = -94017803;
	int8_t x515 = INT8_MIN;
	int64_t t96 = -168091LL;

	t96 = ((x513<=(x514*x515))+x516);

	if (t96 != 3838603637887LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x519 = INT16_MAX;
	static int8_t x520 = 15;
	volatile int32_t t97 = -13638940;

	t97 = ((x517<=(x518*x519))+x520);

	if (t97 != 16) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x521 = 1588819LLU;
	int64_t x522 = INT64_MAX;
	volatile int16_t x524 = -1;
	volatile int32_t t98 = 910251;

	t98 = ((x521<=(x522*x523))+x524);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x533 = UINT32_MAX;
	volatile uint64_t x534 = 228020913658153202LLU;
	static uint64_t x535 = 8194429950683LLU;
	static int64_t x536 = -181441382386072LL;
	int64_t t99 = 43246017731298953LL;

	t99 = ((x533<=(x534*x535))+x536);

	if (t99 != -181441382386071LL) { NG(); } else { ; }
	
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

