#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint16_t x4 = 1U;
volatile int32_t x5 = INT32_MIN;
int8_t x8 = INT8_MIN;
int16_t x11 = INT16_MIN;
uint8_t x15 = 56U;
static int16_t x23 = INT16_MIN;
uint32_t x24 = 18374U;
volatile int8_t x31 = 1;
int32_t x32 = INT32_MAX;
int64_t x35 = INT64_MIN;
volatile int64_t x42 = -1LL;
int16_t x44 = 8;
static volatile int64_t t10 = 7779405LL;
static volatile uint16_t x49 = 1264U;
uint8_t x53 = 44U;
int32_t t16 = -10469890;
int16_t x70 = INT16_MIN;
int32_t x71 = -1;
uint64_t x72 = 2858160534993LLU;
volatile uint64_t t17 = 1LLU;
int32_t x80 = INT32_MIN;
volatile uint64_t x81 = UINT64_MAX;
int32_t x84 = INT32_MIN;
static int64_t t20 = -750082916776952LL;
static uint16_t x85 = 23U;
static int64_t x86 = -1LL;
static uint64_t x93 = UINT64_MAX;
uint16_t x94 = UINT16_MAX;
volatile uint64_t x99 = 21950294215912893LLU;
uint64_t x103 = 1LLU;
int16_t x107 = 69;
volatile int32_t t26 = 113;
volatile int16_t x109 = -1;
uint16_t x112 = UINT16_MAX;
int16_t x115 = INT16_MIN;
int8_t x116 = INT8_MIN;
uint8_t x119 = 7U;
static int8_t x124 = 16;
volatile int64_t t30 = 1LL;
static int64_t x125 = -1LL;
volatile uint64_t t32 = 182604LLU;
int16_t x133 = INT16_MIN;
uint16_t x137 = 2U;
volatile int8_t x139 = INT8_MAX;
int8_t x144 = INT8_MIN;
int16_t x145 = INT16_MAX;
static int64_t x157 = 1080843285894LL;
int64_t x159 = INT64_MIN;
volatile int32_t t40 = -1;
volatile int64_t t42 = -26052561LL;
static uint16_t x175 = 1820U;
int8_t x178 = INT8_MIN;
volatile uint16_t x184 = 4773U;
volatile int32_t t45 = -581935;
static uint16_t x190 = 13U;
int16_t x195 = -3;
int64_t x197 = INT64_MIN;
int32_t x199 = -1;
volatile int64_t t48 = 194138824332096LL;
static int8_t x204 = -1;
volatile int64_t x206 = INT64_MAX;
uint64_t x207 = 2353879093807181971LLU;
int16_t x211 = INT16_MAX;
uint16_t x216 = 9U;
static volatile uint64_t x218 = UINT64_MAX;
int64_t x220 = -1LL;
int16_t x223 = -81;
static int16_t x226 = INT16_MAX;
int8_t x227 = INT8_MIN;
uint32_t x230 = UINT32_MAX;
int16_t x233 = INT16_MIN;
volatile uint64_t t57 = 3626786964757760LLU;
int64_t x240 = INT64_MAX;
int64_t t58 = INT64_MAX;
static volatile int64_t t60 = INT64_MIN;
volatile int32_t t61 = -16715763;
static volatile uint16_t x253 = 0U;
int16_t x263 = -14;
uint8_t x264 = 44U;
static uint8_t x266 = 12U;
volatile uint16_t x270 = UINT16_MAX;
int32_t t66 = INT32_MAX;
uint64_t x273 = UINT64_MAX;
int16_t x279 = INT16_MAX;
static int16_t x294 = -1;
static uint64_t x295 = 1611LLU;
int16_t x298 = -1;
int16_t x307 = INT16_MAX;
volatile int64_t t75 = 53LL;
int32_t x309 = INT32_MAX;
static uint16_t x312 = 423U;
uint64_t x319 = UINT64_MAX;
uint16_t x320 = 23520U;
uint8_t x321 = 55U;
uint32_t x322 = 5918750U;
int32_t x324 = -9;
volatile int32_t t80 = -280;
static volatile int8_t x329 = 0;
int8_t x331 = -1;
volatile uint8_t x333 = 4U;
int16_t x334 = -1;
static uint64_t t83 = 241LLU;
volatile uint16_t x341 = 16808U;
uint32_t x342 = UINT32_MAX;
uint32_t x343 = UINT32_MAX;
static volatile int64_t x352 = INT64_MAX;
static uint64_t x353 = 1370348144416548599LLU;
int8_t x358 = 2;
static int64_t x359 = 375LL;
int8_t x361 = -61;
static int8_t x366 = 11;
int32_t t90 = 434665;
uint32_t x369 = UINT32_MAX;
uint16_t x371 = 5U;
int32_t x372 = INT32_MIN;
uint64_t x374 = 10LLU;
static uint64_t t92 = UINT64_MAX;
volatile uint8_t x377 = 61U;
volatile int64_t t95 = INT64_MIN;
int32_t x395 = 5;
uint32_t x402 = 1527961380U;


void f0(void) {
	int16_t x1 = -712;
	static int64_t x2 = 46LL;
	volatile int32_t t0 = 689855;

	t0 = (((x1<x2)%x3)|x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 1LLU;
	static int32_t x7 = -77810951;
	volatile int32_t t1 = -1;

	t1 = (((x5<x6)%x7)|x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint16_t x10 = 8982U;
	static int64_t x12 = INT64_MIN;
	volatile int64_t t2 = -3538LL;

	t2 = (((x9<x10)%x11)|x12);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -6;
	volatile int32_t x14 = INT32_MIN;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -7579550;

	t3 = (((x13<x14)%x15)|x16);

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int8_t x18 = -3;
	uint8_t x19 = 24U;
	static uint8_t x20 = UINT8_MAX;
	int32_t t4 = -199;

	t4 = (((x17<x18)%x19)|x20);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int16_t x22 = -2;
	uint32_t t5 = 2U;

	t5 = (((x21<x22)%x23)|x24);

	if (t5 != 18374U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static int16_t x26 = -447;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MAX;
	int64_t t6 = 7LL;

	t6 = (((x25<x26)%x27)|x28);

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile uint8_t x30 = UINT8_MAX;
	int32_t t7 = INT32_MAX;

	t7 = (((x29<x30)%x31)|x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int8_t x34 = INT8_MAX;
	int8_t x36 = 1;
	int64_t t8 = 3921005LL;

	t8 = (((x33<x34)%x35)|x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -46;
	uint32_t x38 = 471157583U;
	int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;
	static int64_t t9 = INT64_MIN;

	t9 = (((x37<x38)%x39)|x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 232;
	int64_t x43 = -566405655509LL;

	t10 = (((x41<x42)%x43)|x44);

	if (t10 != 8LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = UINT8_MAX;
	static int8_t x46 = 1;
	int64_t x47 = -1LL;
	int8_t x48 = -5;
	int64_t t11 = -505261434LL;

	t11 = (((x45<x46)%x47)|x48);

	if (t11 != -5LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	volatile int64_t x52 = -1LL;
	volatile int64_t t12 = 115060316128542910LL;

	t12 = (((x49<x50)%x51)|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = INT8_MIN;
	int8_t x56 = 1;
	volatile int32_t t13 = -379053;

	t13 = (((x53<x54)%x55)|x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	volatile int64_t t14 = 67371607LL;

	t14 = (((x57<x58)%x59)|x60);

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int32_t x62 = INT32_MIN;
	static int32_t x63 = 10568885;
	volatile int64_t x64 = INT64_MAX;
	int64_t t15 = INT64_MAX;

	t15 = (((x61<x62)%x63)|x64);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int32_t x66 = INT32_MIN;
	static int16_t x67 = INT16_MIN;
	volatile uint16_t x68 = 517U;

	t16 = (((x65<x66)%x67)|x68);

	if (t16 != 517) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;

	t17 = (((x69<x70)%x71)|x72);

	if (t17 != 2858160534993LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 5852240258477LLU;
	uint8_t x74 = 26U;
	uint64_t x75 = 5229678810878887120LLU;
	int8_t x76 = -1;
	uint64_t t18 = UINT64_MAX;

	t18 = (((x73<x74)%x75)|x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	uint64_t x78 = 96499387829080LLU;
	int8_t x79 = INT8_MAX;
	static volatile int32_t t19 = INT32_MIN;

	t19 = (((x77<x78)%x79)|x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MIN;

	t20 = (((x81<x82)%x83)|x84);

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x87 = UINT16_MAX;
	int64_t x88 = INT64_MIN;
	static int64_t t21 = INT64_MIN;

	t21 = (((x85<x86)%x87)|x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 43LLU;
	volatile uint64_t x90 = UINT64_MAX;
	uint64_t x91 = 7844002243305LLU;
	uint16_t x92 = 213U;
	volatile uint64_t t22 = 30LLU;

	t22 = (((x89<x90)%x91)|x92);

	if (t22 != 213LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -5108578;

	t23 = (((x93<x94)%x95)|x96);

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 4U;
	int16_t x98 = -1;
	static int32_t x100 = -57318;
	uint64_t t24 = 2LLU;

	t24 = (((x97<x98)%x99)|x100);

	if (t24 != 18446744073709494298LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -15;
	volatile int64_t x102 = INT64_MIN;
	uint32_t x104 = UINT32_MAX;
	uint64_t t25 = 217937792188612206LLU;

	t25 = (((x101<x102)%x103)|x104);

	if (t25 != 4294967295LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	int16_t x108 = INT16_MIN;

	t26 = (((x105<x106)%x107)|x108);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	uint32_t x111 = 30750429U;
	static volatile uint32_t t27 = 2025002U;

	t27 = (((x109<x110)%x111)|x112);

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	int16_t x114 = INT16_MIN;
	int32_t t28 = 17305;

	t28 = (((x113<x114)%x115)|x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = -1;
	static uint64_t x120 = UINT64_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = (((x117<x118)%x119)|x120);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	int16_t x122 = 3;
	int64_t x123 = INT64_MIN;

	t30 = (((x121<x122)%x123)|x124);

	if (t30 != 17LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = -1;
	int16_t x127 = -1;
	static volatile int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -189844;

	t31 = (((x125<x126)%x127)|x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = 4;
	uint64_t x131 = 2441LLU;
	int16_t x132 = INT16_MIN;

	t32 = (((x129<x130)%x131)|x132);

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -1LL;
	uint16_t x135 = UINT16_MAX;
	volatile int8_t x136 = -1;
	volatile int32_t t33 = -1481854;

	t33 = (((x133<x134)%x135)|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = (((x137<x138)%x139)|x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 3085LLU;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int32_t t35 = 41474252;

	t35 = (((x141<x142)%x143)|x144);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x146 = -1;
	static int32_t x147 = -1;
	static uint8_t x148 = 1U;
	int32_t t36 = 84227;

	t36 = (((x145<x146)%x147)|x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = 20;
	int8_t x152 = -3;
	int32_t t37 = 751119128;

	t37 = (((x149<x150)%x151)|x152);

	if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	int32_t x154 = -245660648;
	int8_t x155 = INT8_MIN;
	static int32_t x156 = 1;
	int32_t t38 = 128078;

	t38 = (((x153<x154)%x155)|x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = INT8_MAX;
	static volatile int64_t x160 = INT64_MIN;
	static volatile int64_t t39 = INT64_MIN;

	t39 = (((x157<x158)%x159)|x160);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int8_t x162 = INT8_MIN;
	uint16_t x163 = 1897U;
	int32_t x164 = -22356419;

	t40 = (((x161<x162)%x163)|x164);

	if (t40 != -22356419) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 92430LL;
	uint8_t x166 = 43U;
	uint8_t x167 = 10U;
	static volatile int8_t x168 = -7;
	static int32_t t41 = 8283871;

	t41 = (((x165<x166)%x167)|x168);

	if (t41 != -7) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 3;
	int32_t x170 = -501;
	volatile int64_t x171 = 5287720666754709LL;
	int32_t x172 = INT32_MIN;

	t42 = (((x169<x170)%x171)|x172);

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	volatile int64_t x174 = INT64_MIN;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

	t43 = (((x173<x174)%x175)|x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MAX;
	int16_t x179 = -1;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (((x177<x178)%x179)|x180);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 1214U;
	int8_t x182 = -1;
	volatile int8_t x183 = INT8_MAX;

	t45 = (((x181<x182)%x183)|x184);

	if (t45 != 4773) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -1;
	volatile int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t46 = -1701651108LL;

	t46 = (((x189<x190)%x191)|x192);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 3U;
	uint16_t x194 = UINT16_MAX;
	static volatile uint32_t x196 = 6U;
	volatile uint32_t t47 = 923654928U;

	t47 = (((x193<x194)%x195)|x196);

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x198 = 34U;
	int64_t x200 = -1LL;

	t48 = (((x197<x198)%x199)|x200);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = 10U;
	uint16_t x203 = 13U;
	volatile int32_t t49 = -12597;

	t49 = (((x201<x202)%x203)|x204);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = 58;
	int16_t x208 = -1;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (((x205<x206)%x207)|x208);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	static volatile int32_t x210 = -1;
	uint8_t x212 = 3U;
	int32_t t51 = -1018035284;

	t51 = (((x209<x210)%x211)|x212);

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 0U;
	uint8_t x214 = 9U;
	uint64_t x215 = 2858969676104050578LLU;
	static uint64_t t52 = 46901306LLU;

	t52 = (((x213<x214)%x215)|x216);

	if (t52 != 9LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x217 = -1;
	int32_t x219 = INT32_MAX;
	int64_t t53 = -7796580LL;

	t53 = (((x217<x218)%x219)|x220);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = INT32_MIN;
	uint16_t x222 = 1400U;
	uint32_t x224 = 84312428U;
	static volatile uint32_t t54 = 2461543U;

	t54 = (((x221<x222)%x223)|x224);

	if (t54 != 84312429U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x225 = -27754591;
	int32_t x228 = INT32_MIN;
	int32_t t55 = -156;

	t55 = (((x225<x226)%x227)|x228);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 1U;
	uint32_t x231 = 23645502U;
	int16_t x232 = INT16_MAX;
	static uint32_t t56 = 1U;

	t56 = (((x229<x230)%x231)|x232);

	if (t56 != 32767U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x234 = 2U;
	int16_t x235 = 1897;
	uint64_t x236 = 3805LLU;

	t57 = (((x233<x234)%x235)|x236);

	if (t57 != 3805LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = 59LL;

	t58 = (((x237<x238)%x239)|x240);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = -1LL;
	int8_t x242 = 1;
	uint32_t x243 = 163U;
	int8_t x244 = -1;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x241<x242)%x243)|x244);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 0U;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 15U;
	int64_t x248 = INT64_MIN;

	t60 = (((x245<x246)%x247)|x248);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x249 = -7;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 53U;
	int8_t x252 = -1;

	t61 = (((x249<x250)%x251)|x252);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = UINT32_MAX;
	volatile uint32_t x256 = 4U;
	volatile uint32_t t62 = 8223U;

	t62 = (((x253<x254)%x255)|x256);

	if (t62 != 5U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = -1;
	int32_t x259 = 2;
	int8_t x260 = -2;
	volatile int32_t t63 = 27624;

	t63 = (((x257<x258)%x259)|x260);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = INT8_MIN;
	int32_t t64 = 3572;

	t64 = (((x261<x262)%x263)|x264);

	if (t64 != 44) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -177367040242LL;
	volatile int64_t t65 = -1730140275LL;

	t65 = (((x265<x266)%x267)|x268);

	if (t65 != -177367040241LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x269 = INT16_MAX;
	int32_t x271 = INT32_MAX;
	static int32_t x272 = INT32_MAX;

	t66 = (((x269<x270)%x271)|x272);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x274 = UINT8_MAX;
	volatile uint16_t x275 = 3U;
	static volatile int64_t x276 = -1LL;
	static int64_t t67 = 18138425LL;

	t67 = (((x273<x274)%x275)|x276);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	uint8_t x278 = 23U;
	volatile int8_t x280 = 29;
	volatile int32_t t68 = 3;

	t68 = (((x277<x278)%x279)|x280);

	if (t68 != 29) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x281 = -1LL;
	uint32_t x282 = 83008250U;
	uint32_t x283 = UINT32_MAX;
	static uint16_t x284 = 2009U;
	static volatile uint32_t t69 = 166095U;

	t69 = (((x281<x282)%x283)|x284);

	if (t69 != 2009U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = -1;
	int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = -1;
	static uint64_t t70 = UINT64_MAX;

	t70 = (((x285<x286)%x287)|x288);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = UINT32_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	uint8_t x291 = UINT8_MAX;
	static uint64_t x292 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x289<x290)%x291)|x292);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t72 = 4249105040963632LLU;

	t72 = (((x293<x294)%x295)|x296);

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x297 = 491331U;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = INT64_MIN;
	volatile int64_t t73 = 0LL;

	t73 = (((x297<x298)%x299)|x300);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = -1LL;
	uint8_t x303 = 3U;
	int8_t x304 = INT8_MIN;
	int32_t t74 = 60035;

	t74 = (((x301<x302)%x303)|x304);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x306 = 27U;
	static int64_t x308 = 109961061LL;

	t75 = (((x305<x306)%x307)|x308);

	if (t75 != 109961061LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x310 = UINT8_MAX;
	int64_t x311 = -1LL;
	int64_t t76 = -3200696LL;

	t76 = (((x309<x310)%x311)|x312);

	if (t76 != 423LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x313 = INT8_MIN;
	int64_t x314 = 1LL;
	int64_t x315 = INT64_MIN;
	static int16_t x316 = INT16_MIN;
	volatile int64_t t77 = 83626903476336510LL;

	t77 = (((x313<x314)%x315)|x316);

	if (t77 != -32767LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -1;
	volatile uint64_t x318 = UINT64_MAX;
	volatile uint64_t t78 = 14136LLU;

	t78 = (((x317<x318)%x319)|x320);

	if (t78 != 23520LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x323 = INT8_MAX;
	volatile int32_t t79 = -4823;

	t79 = (((x321<x322)%x323)|x324);

	if (t79 != -9) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MAX;
	volatile uint16_t x326 = 1U;
	int32_t x327 = 60381372;
	int16_t x328 = INT16_MAX;

	t80 = (((x325<x326)%x327)|x328);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x330 = 6U;
	volatile uint8_t x332 = UINT8_MAX;
	volatile int32_t t81 = -8;

	t81 = (((x329<x330)%x331)|x332);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x335 = INT32_MIN;
	uint8_t x336 = UINT8_MAX;
	int32_t t82 = -102426172;

	t82 = (((x333<x334)%x335)|x336);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x337 = 902875866U;
	static int16_t x338 = -14;
	uint16_t x339 = 28U;
	uint64_t x340 = 573477390141282884LLU;

	t83 = (((x337<x338)%x339)|x340);

	if (t83 != 573477390141282885LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x344 = -1LL;
	static volatile int64_t t84 = 220LL;

	t84 = (((x341<x342)%x343)|x344);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -1;
	int64_t x346 = -1LL;
	uint64_t x347 = 747911463612260LLU;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t85 = 33586309759890715LLU;

	t85 = (((x345<x346)%x347)|x348);

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x349 = 6518733LLU;
	volatile uint16_t x350 = 0U;
	volatile uint8_t x351 = 24U;
	int64_t t86 = INT64_MAX;

	t86 = (((x349<x350)%x351)|x352);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x354 = -31;
	uint64_t x355 = UINT64_MAX;
	int64_t x356 = -10325735667LL;
	volatile uint64_t t87 = 1535LLU;

	t87 = (((x353<x354)%x355)|x356);

	if (t87 != 18446744063383815949LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MIN;
	volatile int64_t x360 = 14757579263376335LL;
	volatile int64_t t88 = -61279854931957LL;

	t88 = (((x357<x358)%x359)|x360);

	if (t88 != 14757579263376335LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x362 = INT32_MIN;
	static uint32_t x363 = 192984210U;
	int64_t x364 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = (((x361<x362)%x363)|x364);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = 7U;
	uint16_t x367 = 2U;
	volatile int8_t x368 = INT8_MIN;

	t90 = (((x365<x366)%x367)|x368);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x370 = 2;
	volatile int32_t t91 = INT32_MIN;

	t91 = (((x369<x370)%x371)|x372);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MIN;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;

	t92 = (((x373<x374)%x375)|x376);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x378 = INT8_MAX;
	static uint32_t x379 = 267070239U;
	static int64_t x380 = -7LL;
	volatile int64_t t93 = 0LL;

	t93 = (((x377<x378)%x379)|x380);

	if (t93 != -7LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x381 = 1;
	int16_t x382 = INT16_MAX;
	volatile int32_t x383 = INT32_MIN;
	static int16_t x384 = -1;
	int32_t t94 = -1;

	t94 = (((x381<x382)%x383)|x384);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x385 = INT64_MIN;
	uint64_t x386 = 77550145598280901LLU;
	static volatile int8_t x387 = -18;
	int64_t x388 = INT64_MIN;

	t95 = (((x385<x386)%x387)|x388);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 4277101474045314LLU;
	uint32_t x392 = 353307U;
	uint64_t t96 = 5LLU;

	t96 = (((x389<x390)%x391)|x392);

	if (t96 != 353307LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 103149LLU;
	uint8_t x394 = UINT8_MAX;
	volatile uint32_t x396 = 0U;
	volatile uint32_t t97 = 378880867U;

	t97 = (((x393<x394)%x395)|x396);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	static int8_t x400 = -1;
	volatile int32_t t98 = 31;

	t98 = (((x397<x398)%x399)|x400);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 1033364588785LLU;
	int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MAX;
	int64_t t99 = INT64_MAX;

	t99 = (((x401<x402)%x403)|x404);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

