#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = INT64_MIN;
int16_t x5 = 1;
int64_t x9 = INT64_MIN;
static int32_t x20 = INT32_MIN;
static uint16_t x26 = UINT16_MAX;
int32_t x27 = INT32_MIN;
volatile int16_t x32 = INT16_MAX;
static uint32_t x39 = 24575U;
static volatile int64_t x44 = 2140010LL;
volatile int16_t x50 = INT16_MIN;
int16_t x54 = INT16_MAX;
volatile int64_t x64 = INT64_MIN;
int64_t t14 = INT64_MIN;
uint32_t x76 = UINT32_MAX;
volatile int32_t x89 = -1;
volatile int64_t x104 = -1LL;
static int16_t x105 = INT16_MIN;
volatile uint64_t x106 = 9377653510LLU;
volatile int32_t t25 = -441604465;
static int32_t t29 = -401750;
volatile uint16_t x133 = UINT16_MAX;
int8_t x135 = INT8_MIN;
static int32_t t30 = 31932;
int16_t x138 = -1;
static volatile int16_t x146 = -1;
uint32_t x147 = UINT32_MAX;
int8_t x148 = -2;
uint8_t x155 = 56U;
volatile uint8_t x168 = 5U;
uint8_t x176 = 15U;
int32_t t40 = 82;
int32_t x178 = INT32_MIN;
int8_t x184 = INT8_MAX;
int16_t x186 = INT16_MIN;
uint32_t x189 = 5743U;
volatile int8_t x194 = 0;
volatile uint64_t x196 = UINT64_MAX;
static volatile int32_t t46 = 1;
uint16_t x205 = UINT16_MAX;
static int64_t x207 = 3251282725433LL;
static volatile int8_t x208 = -3;
int8_t x209 = 2;
volatile int32_t t49 = 740412046;
volatile uint16_t x216 = UINT16_MAX;
int32_t t50 = -1008054404;
volatile int16_t x222 = -1;
int16_t x224 = INT16_MAX;
int32_t x226 = -65482913;
static uint64_t x227 = 1508633544LLU;
int32_t x237 = -196109;
int16_t x238 = INT16_MAX;
int16_t x239 = INT16_MIN;
uint16_t x240 = UINT16_MAX;
uint16_t x243 = UINT16_MAX;
int32_t t57 = -3125;
volatile uint8_t x251 = 51U;
int32_t t58 = -422040801;
int32_t x254 = INT32_MIN;
volatile uint16_t x260 = UINT16_MAX;
int64_t x266 = INT64_MAX;
volatile int8_t x271 = INT8_MIN;
volatile int32_t t63 = -968883;
uint64_t x273 = UINT64_MAX;
volatile int8_t x279 = INT8_MIN;
static int8_t x281 = 0;
volatile int32_t t66 = -43731;
int16_t x288 = -5;
static int64_t x300 = INT64_MAX;
int8_t x303 = INT8_MAX;
uint8_t x304 = 0U;
int32_t t70 = 14495;
uint32_t t71 = 22910U;
int64_t x311 = -1LL;
int64_t x312 = INT64_MIN;
int32_t t74 = INT32_MAX;
int32_t t76 = 58229;
int64_t t82 = INT64_MIN;
static volatile uint64_t x353 = UINT64_MAX;
volatile uint16_t x354 = UINT16_MAX;
int16_t x355 = -30;
volatile int32_t t83 = 4836154;
static uint64_t t84 = UINT64_MAX;
uint16_t x361 = 0U;
int8_t x363 = -1;
volatile int32_t t85 = -73;
int32_t x370 = INT32_MIN;
int32_t t88 = 8644447;
uint32_t x385 = 1547325206U;
uint64_t x387 = 63LLU;
volatile int32_t t92 = INT32_MAX;
uint8_t x405 = 13U;
int64_t x408 = INT64_MIN;
int32_t x411 = INT32_MIN;
int16_t x414 = INT16_MIN;
int16_t x416 = INT16_MAX;
uint16_t x417 = 14933U;
int32_t t98 = INT32_MIN;
int32_t x422 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint8_t x2 = UINT8_MAX;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;

	t0 = ((x1<=(x2/x3))|x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = UINT64_MAX;
	int8_t x7 = INT8_MIN;
	static int32_t x8 = -1;
	static int32_t t1 = 130075;

	t1 = ((x5<=(x6/x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x10 = -52;
	int64_t x11 = -1LL;
	volatile int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 47691132;

	t2 = ((x9<=(x10/x11))|x12);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	static int16_t x18 = INT16_MIN;
	int32_t x19 = -1;
	int32_t t3 = INT32_MIN;

	t3 = ((x17<=(x18/x19))|x20);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 1U;
	int16_t x22 = INT16_MAX;
	static int8_t x23 = 32;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 8777374;

	t4 = ((x21<=(x22/x23))|x24);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x28 = 3529332857LLU;
	volatile uint64_t t5 = 365942121LLU;

	t5 = ((x25<=(x26/x27))|x28);

	if (t5 != 3529332857LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -47189042;
	uint8_t x30 = 1U;
	int64_t x31 = -13LL;
	int32_t t6 = 2;

	t6 = ((x29<=(x30/x31))|x32);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 27U;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = 25U;
	int32_t x36 = -1;
	int32_t t7 = -3510;

	t7 = ((x33<=(x34/x35))|x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -28987;
	uint16_t x38 = 1U;
	int32_t x40 = 36393;
	int32_t t8 = 33;

	t8 = ((x37<=(x38/x39))|x40);

	if (t8 != 36393) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MAX;
	volatile int64_t t9 = -4880734134LL;

	t9 = ((x41<=(x42/x43))|x44);

	if (t9 != 2140011LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile uint8_t x46 = 7U;
	int32_t x47 = INT32_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	static uint64_t t10 = UINT64_MAX;

	t10 = ((x45<=(x46/x47))|x48);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	static volatile int32_t x51 = -1;
	int64_t x52 = INT64_MAX;
	int64_t t11 = INT64_MAX;

	t11 = ((x49<=(x50/x51))|x52);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	volatile int64_t x55 = INT64_MIN;
	int64_t x56 = -1LL;
	static int64_t t12 = 109LL;

	t12 = ((x53<=(x54/x55))|x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	static int32_t x58 = -1;
	volatile uint8_t x59 = UINT8_MAX;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = ((x57<=(x58/x59))|x60);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 6241541LLU;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;

	t14 = ((x61<=(x62/x63))|x64);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	static volatile int16_t x66 = INT16_MIN;
	static uint8_t x67 = 3U;
	static volatile int8_t x68 = -1;
	volatile int32_t t15 = 240185567;

	t15 = ((x65<=(x66/x67))|x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 1634459034LLU;
	int8_t x70 = INT8_MIN;
	volatile int64_t x71 = INT64_MAX;
	uint64_t x72 = 33750414366212887LLU;
	volatile uint64_t t16 = 3666336646LLU;

	t16 = ((x69<=(x70/x71))|x72);

	if (t16 != 33750414366212887LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	volatile int64_t x74 = -1LL;
	uint64_t x75 = 853883LLU;
	static uint32_t t17 = UINT32_MAX;

	t17 = ((x73<=(x74/x75))|x76);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	int16_t x78 = -1;
	int32_t x79 = INT32_MIN;
	int16_t x80 = -69;
	int32_t t18 = 47685702;

	t18 = ((x77<=(x78/x79))|x80);

	if (t18 != -69) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	static volatile int64_t x82 = -1LL;
	volatile int64_t x83 = -202LL;
	int64_t x84 = -1LL;
	static volatile int64_t t19 = -1179386999816LL;

	t19 = ((x81<=(x82/x83))|x84);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x85<=(x86/x87))|x88);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x90 = 1;
	static int16_t x91 = -333;
	int64_t x92 = -33335624222940LL;
	volatile int64_t t21 = 0LL;

	t21 = ((x89<=(x90/x91))|x92);

	if (t21 != -33335624222939LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 0;
	volatile uint64_t x94 = 569452301808975301LLU;
	static int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MAX;
	int32_t t22 = INT32_MAX;

	t22 = ((x93<=(x94/x95))|x96);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = INT32_MAX;
	int32_t t23 = INT32_MAX;

	t23 = ((x97<=(x98/x99))|x100);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 1;
	uint64_t x102 = 635665898150659227LLU;
	static uint16_t x103 = 63U;
	int64_t t24 = 19LL;

	t24 = ((x101<=(x102/x103))|x104);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = -1;

	t25 = ((x105<=(x106/x107))|x108);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	static volatile int16_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	static volatile uint16_t x112 = 3329U;
	volatile int32_t t26 = 1716948;

	t26 = ((x109<=(x110/x111))|x112);

	if (t26 != 3329) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = 2;
	uint64_t x115 = 14595LLU;
	static uint32_t x116 = 8440009U;
	static volatile uint32_t t27 = 4401U;

	t27 = ((x113<=(x114/x115))|x116);

	if (t27 != 8440009U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 3U;
	static uint32_t x126 = 48106260U;
	uint8_t x127 = 47U;
	int8_t x128 = 1;
	volatile int32_t t28 = 7214452;

	t28 = ((x125<=(x126/x127))|x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x129 = 0;
	static uint16_t x130 = 212U;
	int8_t x131 = -3;
	int16_t x132 = -8897;

	t29 = ((x129<=(x130/x131))|x132);

	if (t29 != -8897) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x134 = -1LL;
	uint16_t x136 = 505U;

	t30 = ((x133<=(x134/x135))|x136);

	if (t30 != 505) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 3208U;
	volatile uint64_t x139 = 1909314609974LLU;
	volatile int8_t x140 = INT8_MIN;
	int32_t t31 = -3110;

	t31 = ((x137<=(x138/x139))|x140);

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 8U;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = -1LL;
	volatile int16_t x144 = 45;
	int32_t t32 = 422;

	t32 = ((x141<=(x142/x143))|x144);

	if (t32 != 45) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 601U;
	int32_t t33 = 132478570;

	t33 = ((x145<=(x146/x147))|x148);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	static int16_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = -5668823791995LL;
	int64_t t34 = -353011183438LL;

	t34 = ((x149<=(x150/x151))|x152);

	if (t34 != -5668823791995LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 50U;
	volatile int16_t x154 = 751;
	volatile int16_t x156 = 29;
	volatile int32_t t35 = 24633761;

	t35 = ((x153<=(x154/x155))|x156);

	if (t35 != 29) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile int32_t x158 = 166458;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 7423U;
	uint32_t t36 = 1310597735U;

	t36 = ((x157<=(x158/x159))|x160);

	if (t36 != 7423U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = 1;
	int16_t x164 = INT16_MIN;
	int32_t t37 = 12883639;

	t37 = ((x161<=(x162/x163))|x164);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 8563387856881187559LLU;
	static uint64_t x166 = 253974LLU;
	int8_t x167 = INT8_MAX;
	volatile int32_t t38 = 6528057;

	t38 = ((x165<=(x166/x167))|x168);

	if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 18U;
	static int64_t x170 = -1LL;
	static int64_t x171 = -2429547607338907LL;
	static int16_t x172 = INT16_MAX;
	int32_t t39 = 19127715;

	t39 = ((x169<=(x170/x171))|x172);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	int32_t x174 = -469167017;
	int32_t x175 = -276461;

	t40 = ((x173<=(x174/x175))|x176);

	if (t40 != 15) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x177 = 83U;
	int8_t x179 = -3;
	uint16_t x180 = 291U;
	volatile int32_t t41 = 6;

	t41 = ((x177<=(x178/x179))|x180);

	if (t41 != 291) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = 10;
	uint64_t x183 = 1605323655322212LLU;
	volatile int32_t t42 = -29302139;

	t42 = ((x181<=(x182/x183))|x184);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 502U;
	static uint64_t x187 = UINT64_MAX;
	int8_t x188 = -1;
	volatile int32_t t43 = 3272;

	t43 = ((x185<=(x186/x187))|x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	uint16_t x191 = UINT16_MAX;
	static int32_t x192 = INT32_MIN;
	static volatile int32_t t44 = INT32_MIN;

	t44 = ((x189<=(x190/x191))|x192);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x193 = INT32_MAX;
	uint16_t x195 = UINT16_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x193<=(x194/x195))|x196);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = INT8_MIN;
	uint32_t x198 = UINT32_MAX;
	volatile uint8_t x199 = 3U;
	int16_t x200 = 1;

	t46 = ((x197<=(x198/x199))|x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 8423558079LLU;
	volatile int32_t x202 = INT32_MIN;
	uint32_t x203 = 168066567U;
	int32_t x204 = -1;
	volatile int32_t t47 = -3853;

	t47 = ((x201<=(x202/x203))|x204);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x206 = 69U;
	int32_t t48 = -3;

	t48 = ((x205<=(x206/x207))|x208);

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x210 = -1;
	volatile int64_t x211 = INT64_MIN;
	uint16_t x212 = UINT16_MAX;

	t49 = ((x209<=(x210/x211))|x212);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 0U;
	static volatile int8_t x214 = INT8_MAX;
	int16_t x215 = 611;

	t50 = ((x213<=(x214/x215))|x216);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = 3377286;
	uint32_t x223 = 207146669U;
	int32_t t51 = 1;

	t51 = ((x221<=(x222/x223))|x224);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 31313344227367585LLU;
	static uint64_t x228 = 77115404688LLU;
	static volatile uint64_t t52 = 0LLU;

	t52 = ((x225<=(x226/x227))|x228);

	if (t52 != 77115404688LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x229 = 6830258981703LLU;
	int16_t x230 = -94;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = -1;
	static int32_t t53 = -1910734;

	t53 = ((x229<=(x230/x231))|x232);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = 0;
	int16_t x234 = INT16_MAX;
	int8_t x235 = 1;
	static int16_t x236 = -40;
	int32_t t54 = -113;

	t54 = ((x233<=(x234/x235))|x236);

	if (t54 != -39) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t t55 = 2027512;

	t55 = ((x237<=(x238/x239))|x240);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 106U;
	volatile int32_t x244 = INT32_MAX;
	int32_t t56 = INT32_MAX;

	t56 = ((x241<=(x242/x243))|x244);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = 1;
	int64_t x247 = -1LL;
	int32_t x248 = -1;

	t57 = ((x245<=(x246/x247))|x248);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = INT64_MIN;
	static int16_t x250 = 203;
	int32_t x252 = -1;

	t58 = ((x249<=(x250/x251))|x252);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = INT8_MAX;
	int8_t x255 = INT8_MIN;
	static volatile int16_t x256 = 229;
	int32_t t59 = -22412;

	t59 = ((x253<=(x254/x255))|x256);

	if (t59 != 229) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x257 = 12U;
	static uint8_t x258 = 56U;
	int16_t x259 = -1;
	int32_t t60 = -469581030;

	t60 = ((x257<=(x258/x259))|x260);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x261 = 50U;
	uint32_t x262 = 33U;
	int64_t x263 = INT64_MIN;
	volatile int32_t x264 = -5;
	volatile int32_t t61 = -1011;

	t61 = ((x261<=(x262/x263))|x264);

	if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = 78895531654415LLU;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = INT16_MAX;
	volatile int32_t t62 = 6;

	t62 = ((x265<=(x266/x267))|x268);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	static volatile int16_t x272 = 6;

	t63 = ((x269<=(x270/x271))|x272);

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x274 = -51;
	uint64_t x275 = 233057709950277864LLU;
	static int32_t x276 = INT32_MIN;
	int32_t t64 = INT32_MIN;

	t64 = ((x273<=(x274/x275))|x276);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = -48;
	uint32_t x280 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = ((x277<=(x278/x279))|x280);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x282 = 237087716222840879LL;
	volatile int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MAX;

	t66 = ((x281<=(x282/x283))|x284);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x285 = UINT8_MAX;
	static int8_t x286 = INT8_MIN;
	volatile int8_t x287 = INT8_MIN;
	volatile int32_t t67 = 7943285;

	t67 = ((x285<=(x286/x287))|x288);

	if (t67 != -5) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = 1U;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 2U;
	volatile uint32_t x296 = 61261376U;
	static volatile uint32_t t68 = 0U;

	t68 = ((x293<=(x294/x295))|x296);

	if (t68 != 61261376U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = INT32_MAX;
	int8_t x298 = 27;
	static int8_t x299 = INT8_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = ((x297<=(x298/x299))|x300);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x301 = 5903727394LL;
	volatile uint32_t x302 = UINT32_MAX;

	t70 = ((x301<=(x302/x303))|x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = 6432555LLU;
	static int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	static volatile uint32_t x308 = 59522U;

	t71 = ((x305<=(x306/x307))|x308);

	if (t71 != 59522U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	volatile int32_t x310 = 10907;
	static volatile int64_t t72 = INT64_MIN;

	t72 = ((x309<=(x310/x311))|x312);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x313 = -8240620995517957LL;
	int16_t x314 = 15243;
	int64_t x315 = -1LL;
	int64_t x316 = -20572LL;
	int64_t t73 = 1423764311LL;

	t73 = ((x313<=(x314/x315))|x316);

	if (t73 != -20571LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = 66048;
	uint32_t x318 = 574818U;
	uint16_t x319 = 99U;
	volatile int32_t x320 = INT32_MAX;

	t74 = ((x317<=(x318/x319))|x320);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	volatile int16_t x323 = -6136;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t75 = -13563;

	t75 = ((x321<=(x322/x323))|x324);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	uint32_t x326 = 7U;
	uint64_t x327 = 3292300149LLU;
	uint16_t x328 = UINT16_MAX;

	t76 = ((x325<=(x326/x327))|x328);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x329 = 7U;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t77 = 6;

	t77 = ((x329<=(x330/x331))|x332);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = -6883;
	static volatile int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	uint8_t x336 = 4U;
	volatile int32_t t78 = 98;

	t78 = ((x333<=(x334/x335))|x336);

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int64_t x338 = -1LL;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -7;
	int32_t t79 = -51;

	t79 = ((x337<=(x338/x339))|x340);

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 130321445608583LLU;
	static int8_t x342 = -2;
	uint8_t x343 = UINT8_MAX;
	static volatile int32_t x344 = -1;
	int32_t t80 = 0;

	t80 = ((x341<=(x342/x343))|x344);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = -1;
	int16_t x346 = INT16_MIN;
	static int16_t x347 = INT16_MIN;
	volatile int32_t x348 = 435729;
	volatile int32_t t81 = -26;

	t81 = ((x345<=(x346/x347))|x348);

	if (t81 != 435729) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x349 = INT64_MAX;
	volatile int32_t x350 = -1;
	int16_t x351 = -159;
	static int64_t x352 = INT64_MIN;

	t82 = ((x349<=(x350/x351))|x352);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x356 = 967;

	t83 = ((x353<=(x354/x355))|x356);

	if (t83 != 967) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x357 = INT32_MAX;
	volatile uint8_t x358 = 43U;
	uint8_t x359 = UINT8_MAX;
	uint64_t x360 = UINT64_MAX;

	t84 = ((x357<=(x358/x359))|x360);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x362 = 1LLU;
	int16_t x364 = 55;

	t85 = ((x361<=(x362/x363))|x364);

	if (t85 != 55) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x365 = UINT32_MAX;
	uint8_t x366 = 25U;
	volatile uint64_t x367 = 738596343122004233LLU;
	int32_t x368 = INT32_MIN;
	int32_t t86 = INT32_MIN;

	t86 = ((x365<=(x366/x367))|x368);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = 28U;
	int16_t x371 = INT16_MAX;
	int8_t x372 = 0;
	int32_t t87 = 11475;

	t87 = ((x369<=(x370/x371))|x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = -8249;
	int64_t x374 = -318303557LL;
	volatile uint32_t x375 = UINT32_MAX;
	int8_t x376 = -1;

	t88 = ((x373<=(x374/x375))|x376);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x377 = 79U;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = 4LLU;
	volatile uint64_t t89 = 233504773LLU;

	t89 = ((x377<=(x378/x379))|x380);

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = -1;
	int64_t x383 = INT64_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x381<=(x382/x383))|x384);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x386 = INT8_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t91 = 2421;

	t91 = ((x385<=(x386/x387))|x388);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x389 = 489U;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MAX;

	t92 = ((x389<=(x390/x391))|x392);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	static volatile int32_t x394 = INT32_MIN;
	int32_t x395 = -49053;
	int64_t x396 = -8489894426LL;
	int64_t t93 = 1767LL;

	t93 = ((x393<=(x394/x395))|x396);

	if (t93 != -8489894425LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 190839115627514410LL;
	uint16_t x398 = 370U;
	volatile int8_t x399 = INT8_MAX;
	volatile uint64_t x400 = 1785346816430994LLU;
	volatile uint64_t t94 = 74612LLU;

	t94 = ((x397<=(x398/x399))|x400);

	if (t94 != 1785346816430994LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x406 = 1146U;
	int32_t x407 = -1;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x405<=(x406/x407))|x408);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x409 = -2;
	uint8_t x410 = 81U;
	volatile uint32_t x412 = 0U;
	uint32_t t96 = 191260475U;

	t96 = ((x409<=(x410/x411))|x412);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = 0;
	int64_t x415 = 288265694572LL;
	int32_t t97 = -9712585;

	t97 = ((x413<=(x414/x415))|x416);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x418 = 0;
	static int16_t x419 = 9988;
	int32_t x420 = INT32_MIN;

	t98 = ((x417<=(x418/x419))|x420);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x423 = -1LL;
	static int32_t x424 = -26387448;
	static volatile int32_t t99 = -59;

	t99 = ((x421<=(x422/x423))|x424);

	if (t99 != -26387448) { NG(); } else { ; }
	
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

