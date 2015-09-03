#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
volatile int32_t x3 = INT32_MIN;
static uint64_t x13 = 61641780LLU;
int64_t x16 = -1LL;
int32_t x27 = INT32_MIN;
int32_t t5 = 208025338;
volatile int64_t x30 = INT64_MIN;
static int8_t x34 = 3;
volatile uint32_t t7 = 1U;
static int32_t x41 = INT32_MIN;
int32_t x42 = -1;
int16_t x60 = INT16_MIN;
volatile uint8_t x63 = 5U;
uint32_t x73 = 2065077817U;
uint32_t x76 = UINT32_MAX;
uint64_t x79 = 109287348LLU;
static volatile uint64_t t18 = 6155596348414LLU;
int8_t x82 = -1;
static volatile int32_t t19 = -3394;
volatile int16_t x89 = INT16_MIN;
volatile int32_t t21 = -29;
uint32_t x96 = UINT32_MAX;
volatile int64_t x97 = INT64_MIN;
uint64_t x99 = UINT64_MAX;
volatile uint64_t t23 = 7087610708907433LLU;
volatile uint32_t x102 = 9U;
int64_t x109 = 510315LL;
static int32_t x111 = -1;
uint64_t x112 = 100409039LLU;
volatile int32_t t26 = 5104473;
int32_t x124 = 507177362;
int32_t t27 = 0;
int64_t x125 = 1360782LL;
uint16_t x136 = UINT16_MAX;
int32_t t31 = 1;
int8_t x143 = -1;
static volatile int8_t x144 = -42;
int32_t x147 = INT32_MIN;
uint8_t x148 = UINT8_MAX;
uint16_t x151 = 783U;
int32_t x154 = INT32_MIN;
int64_t x164 = -1LL;
volatile uint32_t x166 = UINT32_MAX;
int64_t x171 = -1LL;
uint64_t x173 = 602LLU;
int16_t x179 = 857;
uint8_t x194 = 1U;
int32_t x195 = INT32_MIN;
int32_t x198 = INT32_MIN;
static int8_t x200 = -22;
volatile uint64_t t48 = 229086101855126LLU;
volatile int8_t x210 = 2;
static int64_t x222 = INT64_MAX;
uint16_t x223 = UINT16_MAX;
uint16_t x228 = 6U;
int32_t x229 = 1967;
uint16_t x237 = UINT16_MAX;
static volatile uint32_t t57 = 1810738817U;
volatile int32_t x245 = INT32_MAX;
uint16_t x248 = 3052U;
static int16_t x260 = INT16_MIN;
int16_t x263 = -1;
volatile uint64_t t63 = 29813LLU;
int16_t x274 = INT16_MIN;
static int32_t x278 = 8126;
int8_t x281 = 1;
int16_t x286 = -1;
int32_t x290 = INT32_MIN;
int16_t x297 = -40;
static volatile int16_t x302 = INT16_MAX;
int8_t x304 = -1;
uint32_t x313 = UINT32_MAX;
static uint8_t x314 = 87U;
volatile int64_t x316 = INT64_MAX;
uint8_t x322 = UINT8_MAX;
int32_t x326 = 1;
volatile uint64_t t78 = 91549213406LLU;
uint16_t x330 = 2160U;
int64_t x331 = INT64_MIN;
static volatile int8_t x337 = INT8_MIN;
volatile int64_t x341 = INT64_MAX;
int16_t x342 = -4169;
uint8_t x343 = 13U;
int8_t x347 = -2;
uint64_t x351 = UINT64_MAX;
int8_t x352 = -2;
int64_t x357 = -1LL;
static volatile int32_t x359 = -1;
uint16_t x363 = 5U;
int64_t x365 = -1LL;
uint16_t x372 = 256U;
int16_t x375 = INT16_MAX;
int32_t t90 = 253500;
int32_t x382 = INT32_MIN;
int32_t x385 = INT32_MAX;
int8_t x396 = -8;
static volatile int32_t x398 = 0;
uint64_t t96 = 3647508068LLU;
static int64_t x402 = INT64_MAX;
uint64_t x406 = UINT64_MAX;
int16_t x412 = 10925;
int32_t t99 = -507495;


void f0(void) {
	static int8_t x1 = 61;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 409904565212459437LL;

	t0 = ((x1<=(x2&x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x6 = 61043954374395424LL;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 1;

	t1 = ((x5<=(x6&x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 2009424098515LL;
	uint8_t x10 = 0U;
	int64_t x11 = -161681531724LL;
	volatile int16_t x12 = -494;
	int32_t t2 = -995470;

	t2 = ((x9<=(x10&x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static int32_t x15 = 813652;
	static int64_t t3 = -2430581LL;

	t3 = ((x13<=(x14&x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MIN;
	volatile int8_t x23 = 12;
	int32_t x24 = 278;
	volatile int32_t t4 = -65381466;

	t4 = ((x21<=(x22&x23))/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = UINT64_MAX;
	int8_t x26 = -5;
	volatile int16_t x28 = INT16_MAX;

	t5 = ((x25<=(x26&x27))/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 454237670889LLU;
	volatile int8_t x31 = -1;
	static uint64_t x32 = 102266046090LLU;
	uint64_t t6 = 1961674LLU;

	t6 = ((x29<=(x30&x31))/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -1;
	uint64_t x35 = UINT64_MAX;
	static uint32_t x36 = 1U;

	t7 = ((x33<=(x34&x35))/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static volatile uint8_t x38 = 1U;
	int16_t x39 = 28;
	static int16_t x40 = -1;
	volatile int32_t t8 = 10;

	t8 = ((x37<=(x38&x39))/x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x43 = INT32_MAX;
	static int64_t x44 = -21709340LL;
	static volatile int64_t t9 = 2158062846630LL;

	t9 = ((x41<=(x42&x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 103;
	static int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -444981;

	t10 = ((x45<=(x46&x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 6635;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -123020LL;
	volatile int64_t x52 = INT64_MAX;
	int64_t t11 = -66331492832950758LL;

	t11 = ((x49<=(x50&x51))/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = -6521LL;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 53182U;
	volatile uint32_t t12 = 22U;

	t12 = ((x53<=(x54&x55))/x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int8_t x58 = -1;
	volatile uint32_t x59 = 52528U;
	static int32_t t13 = 51841690;

	t13 = ((x57<=(x58&x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MIN;
	static uint8_t x64 = 23U;
	volatile int32_t t14 = -419951;

	t14 = ((x61<=(x62&x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1U;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 18U;
	int8_t x68 = INT8_MIN;
	static int32_t t15 = 172334;

	t15 = ((x65<=(x66&x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	volatile int8_t x70 = INT8_MIN;
	uint8_t x71 = 78U;
	uint32_t x72 = 12U;
	static uint32_t t16 = 261861U;

	t16 = ((x69<=(x70&x71))/x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MAX;
	uint32_t t17 = 0U;

	t17 = ((x73<=(x74&x75))/x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -5;
	int32_t x78 = 122834484;
	uint64_t x80 = 20521LLU;

	t18 = ((x77<=(x78&x79))/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 4U;
	int32_t x83 = INT32_MIN;
	volatile uint16_t x84 = 55U;

	t19 = ((x81<=(x82&x83))/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 1U;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	static int32_t x88 = -26422;
	volatile int32_t t20 = -1;

	t20 = ((x85<=(x86&x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = 105U;
	uint32_t x91 = 1678U;
	volatile int8_t x92 = INT8_MIN;

	t21 = ((x89<=(x90&x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 1;
	static volatile int32_t x94 = INT32_MIN;
	volatile int16_t x95 = -40;
	uint32_t t22 = 1039U;

	t22 = ((x93<=(x94&x95))/x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = -471;
	volatile uint64_t x100 = UINT64_MAX;

	t23 = ((x97<=(x98&x99))/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	int16_t x103 = -1136;
	int32_t x104 = INT32_MIN;
	int32_t t24 = 1;

	t24 = ((x101<=(x102&x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MAX;
	uint64_t t25 = 8035264LLU;

	t25 = ((x109<=(x110&x111))/x112);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 6;
	static volatile int32_t x114 = 5780399;
	int16_t x115 = INT16_MAX;
	volatile int32_t x116 = INT32_MIN;

	t26 = ((x113<=(x114&x115))/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 0;
	int64_t x122 = -37801762151LL;
	int16_t x123 = INT16_MAX;

	t27 = ((x121<=(x122&x123))/x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x126 = -222;
	volatile int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	volatile int64_t t28 = -30232248516LL;

	t28 = ((x125<=(x126&x127))/x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 712U;
	int32_t x130 = INT32_MAX;
	volatile int8_t x131 = INT8_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t29 = 11545042036LL;

	t29 = ((x129<=(x130&x131))/x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	volatile int32_t t30 = 25606409;

	t30 = ((x133<=(x134&x135))/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	int64_t x139 = 12195LL;
	uint8_t x140 = 3U;

	t31 = ((x137<=(x138&x139))/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	int32_t x142 = -6034230;
	volatile int32_t t32 = 362;

	t32 = ((x141<=(x142&x143))/x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = 117U;
	uint32_t x146 = 16982496U;
	static int32_t t33 = 3578913;

	t33 = ((x145<=(x146&x147))/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x149 = 2U;
	uint16_t x150 = UINT16_MAX;
	volatile int64_t x152 = 9744662992LL;
	volatile int64_t t34 = 42477877693408106LL;

	t34 = ((x149<=(x150&x151))/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -3367;
	static int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t35 = 5269;

	t35 = ((x153<=(x154&x155))/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MIN;
	int16_t x159 = -1;
	volatile uint64_t x160 = UINT64_MAX;
	volatile uint64_t t36 = 62681960LLU;

	t36 = ((x157<=(x158&x159))/x160);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x161 = 172927540LLU;
	static volatile uint32_t x162 = UINT32_MAX;
	static uint64_t x163 = UINT64_MAX;
	volatile int64_t t37 = -494225916142LL;

	t37 = ((x161<=(x162&x163))/x164);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -1;
	int64_t x167 = INT64_MIN;
	int16_t x168 = 119;
	int32_t t38 = 5311;

	t38 = ((x165<=(x166&x167))/x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = -1;
	int16_t x170 = -376;
	int16_t x172 = -1;
	volatile int32_t t39 = 1;

	t39 = ((x169<=(x170&x171))/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x174 = 7U;
	int8_t x175 = -1;
	uint64_t x176 = UINT64_MAX;
	uint64_t t40 = 12LLU;

	t40 = ((x173<=(x174&x175))/x176);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	static uint32_t x178 = UINT32_MAX;
	uint64_t x180 = 13LLU;
	uint64_t t41 = 28807011487605640LLU;

	t41 = ((x177<=(x178&x179))/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x181 = UINT8_MAX;
	int64_t x182 = -2459LL;
	uint8_t x183 = 1U;
	volatile uint8_t x184 = 2U;
	int32_t t42 = -177;

	t42 = ((x181<=(x182&x183))/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x185 = 1U;
	int8_t x186 = 1;
	uint8_t x187 = 1U;
	uint32_t x188 = UINT32_MAX;
	uint32_t t43 = 2169057U;

	t43 = ((x185<=(x186&x187))/x188);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = -1;
	volatile int8_t x191 = INT8_MAX;
	volatile int32_t x192 = INT32_MAX;
	int32_t t44 = 296303;

	t44 = ((x189<=(x190&x191))/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = -1;
	int16_t x196 = INT16_MIN;
	volatile int32_t t45 = 1;

	t45 = ((x193<=(x194&x195))/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -3159;
	int64_t x199 = 6273308891692LL;
	volatile int32_t t46 = 51;

	t46 = ((x197<=(x198&x199))/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x201 = -1894;
	int8_t x202 = INT8_MAX;
	volatile int32_t x203 = INT32_MAX;
	volatile uint32_t x204 = 1185684U;
	uint32_t t47 = 2U;

	t47 = ((x201<=(x202&x203))/x204);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = INT64_MIN;
	int64_t x206 = 1701269726435356LL;
	static int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;

	t48 = ((x205<=(x206&x207))/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	volatile uint16_t x211 = UINT16_MAX;
	int16_t x212 = 1555;
	int32_t t49 = 12;

	t49 = ((x209<=(x210&x211))/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = 19;
	uint16_t x215 = 1461U;
	uint8_t x216 = UINT8_MAX;
	int32_t t50 = 523;

	t50 = ((x213<=(x214&x215))/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x217 = INT32_MIN;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = 2793LL;
	volatile int32_t x220 = INT32_MIN;
	int32_t t51 = -2773131;

	t51 = ((x217<=(x218&x219))/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x224 = 67870U;
	uint32_t t52 = 106806518U;

	t52 = ((x221<=(x222&x223))/x224);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x225 = 16932650972LL;
	int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MIN;
	volatile int32_t t53 = -28275;

	t53 = ((x225<=(x226&x227))/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x230 = INT32_MAX;
	uint16_t x231 = 2372U;
	uint32_t x232 = UINT32_MAX;
	uint32_t t54 = 1184903U;

	t54 = ((x229<=(x230&x231))/x232);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	static uint8_t x234 = 5U;
	static uint16_t x235 = UINT16_MAX;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t55 = -6638;

	t55 = ((x233<=(x234&x235))/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x238 = -1;
	static int32_t x239 = 2773474;
	int16_t x240 = INT16_MAX;
	int32_t t56 = -331266854;

	t56 = ((x237<=(x238&x239))/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x241 = -11;
	int64_t x242 = INT64_MIN;
	int64_t x243 = 69399090233LL;
	static uint32_t x244 = 504U;

	t57 = ((x241<=(x242&x243))/x244);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x246 = 235399846U;
	uint32_t x247 = 72086503U;
	static volatile int32_t t58 = 9649;

	t58 = ((x245<=(x246&x247))/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MAX;
	volatile int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t59 = 81639LL;

	t59 = ((x249<=(x250&x251))/x252);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x253 = 2U;
	int64_t x254 = INT64_MAX;
	uint8_t x255 = 4U;
	int64_t x256 = INT64_MAX;
	static int64_t t60 = -61654051213LL;

	t60 = ((x253<=(x254&x255))/x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = -5;
	int8_t x258 = INT8_MAX;
	int32_t x259 = -1;
	volatile int32_t t61 = 62506834;

	t61 = ((x257<=(x258&x259))/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x261 = UINT64_MAX;
	uint16_t x262 = UINT16_MAX;
	int32_t x264 = -328265491;
	static volatile int32_t t62 = 23;

	t62 = ((x261<=(x262&x263))/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = 931894;
	int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = UINT32_MAX;
	uint64_t x268 = 4186764106637870LLU;

	t63 = ((x265<=(x266&x267))/x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -6;
	uint16_t x270 = 123U;
	int32_t x271 = -1;
	uint8_t x272 = 14U;
	volatile int32_t t64 = -799;

	t64 = ((x269<=(x270&x271))/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x273 = 1;
	uint32_t x275 = 8461550U;
	uint16_t x276 = 23U;
	volatile int32_t t65 = 6;

	t65 = ((x273<=(x274&x275))/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	static uint64_t x279 = 12390804240548349LLU;
	volatile int64_t x280 = INT64_MIN;
	volatile int64_t t66 = 11379LL;

	t66 = ((x277<=(x278&x279))/x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	int32_t x284 = 540;
	int32_t t67 = 60847313;

	t67 = ((x281<=(x282&x283))/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = INT32_MIN;
	volatile uint32_t x287 = 91961U;
	static int8_t x288 = INT8_MIN;
	int32_t t68 = 219631332;

	t68 = ((x285<=(x286&x287))/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 22072576LLU;
	volatile int32_t x291 = INT32_MAX;
	static uint32_t x292 = 23722U;
	volatile uint32_t t69 = 620U;

	t69 = ((x289<=(x290&x291))/x292);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MAX;
	int64_t x296 = INT64_MAX;
	int64_t t70 = -736593147947763LL;

	t70 = ((x293<=(x294&x295))/x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x298 = 1445320;
	int8_t x299 = 0;
	int64_t x300 = 4401914562153242095LL;
	int64_t t71 = 1804777068593962204LL;

	t71 = ((x297<=(x298&x299))/x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = INT16_MIN;
	volatile uint32_t x303 = UINT32_MAX;
	int32_t t72 = 6;

	t72 = ((x301<=(x302&x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = UINT64_MAX;
	volatile uint16_t x306 = UINT16_MAX;
	uint16_t x307 = 1U;
	uint32_t x308 = UINT32_MAX;
	uint32_t t73 = 8017852U;

	t73 = ((x305<=(x306&x307))/x308);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	static int16_t x311 = -179;
	static int32_t x312 = -447138638;
	volatile int32_t t74 = 43;

	t74 = ((x309<=(x310&x311))/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x315 = INT32_MIN;
	int64_t t75 = -127LL;

	t75 = ((x313<=(x314&x315))/x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = 4;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = INT32_MAX;
	int32_t x320 = -1;
	static int32_t t76 = -2475941;

	t76 = ((x317<=(x318&x319))/x320);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = 335558279150208LLU;
	int32_t x323 = INT32_MAX;
	static int16_t x324 = -2100;
	int32_t t77 = -29;

	t77 = ((x321<=(x322&x323))/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	uint16_t x327 = UINT16_MAX;
	volatile uint64_t x328 = 4322732471LLU;

	t78 = ((x325<=(x326&x327))/x328);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x329 = 402067932860706313LLU;
	int8_t x332 = -2;
	volatile int32_t t79 = -1;

	t79 = ((x329<=(x330&x331))/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	volatile uint16_t x334 = 45U;
	volatile uint32_t x335 = 7407U;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t80 = 91703;

	t80 = ((x333<=(x334&x335))/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x338 = 14;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t81 = -155;

	t81 = ((x337<=(x338&x339))/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x344 = 1277LL;
	volatile int64_t t82 = 353732143295LL;

	t82 = ((x341<=(x342&x343))/x344);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x345 = -1;
	static int16_t x346 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t83 = 5;

	t83 = ((x345<=(x346&x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = 24;
	int16_t x350 = INT16_MAX;
	int32_t t84 = -6748232;

	t84 = ((x349<=(x350&x351))/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 50U;
	static int64_t x354 = INT64_MIN;
	uint64_t x355 = 66193981LLU;
	static volatile uint8_t x356 = 20U;
	int32_t t85 = 10;

	t85 = ((x353<=(x354&x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x358 = UINT16_MAX;
	int8_t x360 = 21;
	volatile int32_t t86 = 14;

	t86 = ((x357<=(x358&x359))/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x361 = UINT64_MAX;
	uint16_t x362 = 261U;
	volatile int16_t x364 = INT16_MIN;
	int32_t t87 = -42;

	t87 = ((x361<=(x362&x363))/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x366 = -80843356239LL;
	int16_t x367 = 517;
	static uint8_t x368 = 6U;
	volatile int32_t t88 = 3225;

	t88 = ((x365<=(x366&x367))/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = -549;
	volatile int8_t x370 = INT8_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	int32_t t89 = 1202;

	t89 = ((x369<=(x370&x371))/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x374 = UINT32_MAX;
	int8_t x376 = -10;

	t90 = ((x373<=(x374&x375))/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = 92LL;
	static int32_t x378 = INT32_MAX;
	static int16_t x379 = -1;
	static int16_t x380 = INT16_MAX;
	volatile int32_t t91 = -21033;

	t91 = ((x377<=(x378&x379))/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = -29;
	int32_t t92 = 1;

	t92 = ((x381<=(x382&x383))/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x386 = -1;
	static uint64_t x387 = UINT64_MAX;
	volatile int16_t x388 = INT16_MAX;
	static int32_t t93 = -1248;

	t93 = ((x385<=(x386&x387))/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = UINT64_MAX;
	uint64_t t94 = 92883830LLU;

	t94 = ((x389<=(x390&x391))/x392);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = UINT8_MAX;
	volatile uint8_t x394 = UINT8_MAX;
	volatile int32_t x395 = INT32_MIN;
	volatile int32_t t95 = 1218283;

	t95 = ((x393<=(x394&x395))/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = 747016LLU;
	int8_t x399 = 9;
	uint64_t x400 = 196647944201LLU;

	t96 = ((x397<=(x398&x399))/x400);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = -1;
	int16_t x403 = -2504;
	static int16_t x404 = -2660;
	volatile int32_t t97 = 648785706;

	t97 = ((x401<=(x402&x403))/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x405 = INT16_MIN;
	uint8_t x407 = 0U;
	volatile int16_t x408 = -1;
	int32_t t98 = 390788444;

	t98 = ((x405<=(x406&x407))/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int32_t x411 = 578485;

	t99 = ((x409<=(x410&x411))/x412);

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

