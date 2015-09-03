#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
volatile int8_t x6 = -1;
static volatile int32_t x9 = INT32_MIN;
int8_t x11 = INT8_MIN;
uint64_t x14 = 3LLU;
uint16_t x16 = 3467U;
int8_t x22 = 5;
int8_t x28 = 6;
uint64_t x29 = UINT64_MAX;
int8_t x31 = 1;
static int16_t x32 = -1500;
int32_t t7 = 28;
int16_t x36 = -1628;
static int8_t x37 = INT8_MAX;
uint32_t x38 = 7256266U;
volatile int32_t t9 = 32465087;
int64_t t10 = 13497LL;
int16_t x45 = INT16_MAX;
static volatile int32_t x46 = INT32_MIN;
int32_t x47 = -19620;
int64_t x48 = INT64_MIN;
static int32_t x49 = INT32_MIN;
int16_t x54 = 1;
int64_t x56 = INT64_MAX;
int32_t x60 = 13;
int8_t x61 = -3;
volatile int64_t t15 = 130787LL;
int32_t x67 = -1;
int8_t x69 = INT8_MIN;
uint16_t x73 = UINT16_MAX;
uint64_t t18 = 7283178752779646LLU;
int16_t x77 = -1;
uint64_t x78 = UINT64_MAX;
int8_t x79 = INT8_MAX;
int16_t x85 = INT16_MIN;
volatile int64_t t20 = 246919LL;
int8_t x91 = -14;
int32_t t21 = -3843521;
int64_t x94 = INT64_MAX;
uint64_t x96 = UINT64_MAX;
uint32_t x102 = 1019U;
uint32_t t24 = 5285919U;
static int16_t x113 = INT16_MAX;
int64_t x122 = INT64_MIN;
int16_t x133 = INT16_MIN;
uint32_t x137 = 163253U;
int16_t x142 = -1;
volatile int64_t x144 = -1LL;
int32_t x157 = INT32_MIN;
uint16_t x159 = UINT16_MAX;
volatile int16_t x167 = 1;
int32_t x195 = -312178;
int16_t x196 = -141;
uint64_t x199 = 1777585462214LLU;
int8_t x200 = -1;
int32_t x202 = INT32_MIN;
volatile int64_t t48 = -608953259721944242LL;
volatile int32_t t49 = 1;
volatile int8_t x213 = INT8_MAX;
volatile uint16_t x221 = 65U;
int16_t x222 = INT16_MAX;
volatile int8_t x226 = INT8_MIN;
int16_t x228 = -150;
volatile int8_t x230 = INT8_MAX;
uint64_t x242 = UINT64_MAX;
uint8_t x243 = UINT8_MAX;
static uint16_t x247 = 4375U;
static int16_t x249 = 0;
static int8_t x254 = INT8_MIN;
int64_t x272 = INT64_MIN;
static int64_t t64 = -42853493474660LL;
volatile int64_t x275 = -4204540103973LL;
int64_t t65 = 64507074318009LL;
int64_t x278 = INT64_MAX;
int16_t x279 = -1193;
static uint16_t x280 = 3635U;
int8_t x281 = INT8_MIN;
int16_t x284 = 611;
int32_t t67 = 49;
static uint32_t x288 = UINT32_MAX;
volatile int16_t x299 = INT16_MIN;
uint64_t x301 = 4428514759395LLU;
static int32_t t73 = 420682;
int32_t t74 = 43437;
volatile int32_t t76 = -27;
volatile int64_t x325 = INT64_MIN;
static int32_t t77 = 3531156;
static volatile uint16_t x330 = UINT16_MAX;
int64_t x333 = INT64_MIN;
uint64_t x334 = UINT64_MAX;
int32_t x335 = INT32_MAX;
int32_t x336 = INT32_MIN;
static volatile int32_t t79 = 44897;
volatile int64_t x339 = 5LL;
int16_t x341 = INT16_MIN;
static uint16_t x345 = UINT16_MAX;
uint16_t x347 = UINT16_MAX;
volatile int32_t t82 = -364459673;
int64_t x351 = INT64_MIN;
volatile uint64_t x353 = 644733884315920LLU;
uint32_t x356 = 8U;
int32_t x358 = -161445;
volatile uint16_t x360 = 886U;
int32_t t86 = -4;
int16_t x367 = 8;
int32_t x374 = -1;
int64_t x378 = INT64_MAX;
int64_t x379 = -1LL;
static volatile int32_t t90 = -3901204;
int64_t x382 = -1LL;
int8_t x385 = 25;
volatile int64_t x390 = INT64_MAX;
static int32_t x394 = 251;
int32_t x397 = INT32_MIN;
volatile int32_t t96 = -80731467;
volatile int32_t t97 = 2261;
uint16_t x412 = UINT16_MAX;
int32_t x413 = 3951631;


void f0(void) {
	uint32_t x1 = 0U;
	static int16_t x2 = INT16_MIN;
	int32_t x4 = -5;
	volatile int32_t t0 = 14524;

	t0 = ((x1<=(x2<=x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint32_t x7 = 9U;
	volatile int8_t x8 = -1;
	int32_t t1 = 2182205;

	t1 = ((x5<=(x6<=x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 8789220;

	t2 = ((x9<=(x10<=x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 13998121U;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = 989190;

	t3 = ((x13<=(x14<=x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 64148595063LLU;
	volatile int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -102061597002766647LL;

	t4 = ((x17<=(x18<=x19))/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -12;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = -2656;
	int32_t t5 = 1;

	t5 = ((x21<=(x22<=x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 480419996LLU;
	uint64_t x26 = 16095531366LLU;
	int32_t x27 = -4;
	int32_t t6 = 9932;

	t6 = ((x25<=(x26<=x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;

	t7 = ((x29<=(x30<=x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	static int8_t x34 = INT8_MIN;
	volatile int32_t x35 = INT32_MIN;
	int32_t t8 = 267624;

	t8 = ((x33<=(x34<=x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MIN;

	t9 = ((x37<=(x38<=x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile int16_t x42 = -1;
	int64_t x43 = 15089LL;
	int64_t x44 = INT64_MIN;

	t10 = ((x41<=(x42<=x43))/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t t11 = -615973057960830LL;

	t11 = ((x45<=(x46<=x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	int8_t x52 = -1;
	static volatile int32_t t12 = 258956;

	t12 = ((x49<=(x50<=x51))/x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 2U;
	volatile int64_t x55 = INT64_MAX;
	volatile int64_t t13 = -58629LL;

	t13 = ((x53<=(x54<=x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int64_t x58 = -1LL;
	uint32_t x59 = UINT32_MAX;
	static int32_t t14 = -49554;

	t14 = ((x57<=(x58<=x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	volatile int8_t x63 = -2;
	int64_t x64 = INT64_MIN;

	t15 = ((x61<=(x62<=x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 25U;
	int32_t x66 = INT32_MAX;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = -123LL;

	t16 = ((x65<=(x66<=x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x70 = 0U;
	volatile int32_t x71 = -1;
	int32_t x72 = INT32_MAX;
	int32_t t17 = 240473;

	t17 = ((x69<=(x70<=x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 2U;
	static int8_t x75 = 0;
	static uint64_t x76 = UINT64_MAX;

	t18 = ((x73<=(x74<=x75))/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x80 = 93U;
	volatile int32_t t19 = 29704936;

	t19 = ((x77<=(x78<=x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MAX;
	int32_t x87 = -25714;
	int64_t x88 = INT64_MIN;

	t20 = ((x85<=(x86<=x87))/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 51684194LLU;
	int64_t x90 = INT64_MIN;
	static volatile int32_t x92 = -1;

	t21 = ((x89<=(x90<=x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = -1LL;
	static int32_t x95 = INT32_MIN;
	static uint64_t t22 = 7148602558486LLU;

	t22 = ((x93<=(x94<=x95))/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = 26083U;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MAX;
	volatile int32_t x100 = 175591962;
	volatile int32_t t23 = -52575;

	t23 = ((x97<=(x98<=x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = 493U;

	t24 = ((x101<=(x102<=x103))/x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 3498761U;
	static int8_t x106 = -1;
	int64_t x107 = INT64_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -758134987;

	t25 = ((x105<=(x106<=x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x110 = INT8_MIN;
	uint64_t x111 = 907LLU;
	volatile int32_t x112 = INT32_MAX;
	int32_t t26 = -22;

	t26 = ((x109<=(x110<=x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	static int32_t t27 = -122;

	t27 = ((x113<=(x114<=x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MAX;
	volatile int32_t x118 = INT32_MIN;
	static volatile int64_t x119 = 78665028LL;
	uint16_t x120 = 13U;
	int32_t t28 = -106073009;

	t28 = ((x117<=(x118<=x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1LL;
	int8_t x123 = 24;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t29 = 15834413864LL;

	t29 = ((x121<=(x122<=x123))/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = -5360LL;
	uint32_t x126 = 118413539U;
	int16_t x127 = INT16_MAX;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 806LLU;

	t30 = ((x125<=(x126<=x127))/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MAX;
	static int32_t x130 = INT32_MIN;
	int16_t x131 = -1;
	volatile uint32_t x132 = 1192305U;
	uint32_t t31 = 3258308U;

	t31 = ((x129<=(x130<=x131))/x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x134 = INT32_MIN;
	volatile int16_t x135 = 0;
	uint8_t x136 = UINT8_MAX;
	int32_t t32 = -1;

	t32 = ((x133<=(x134<=x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x138 = INT32_MIN;
	static int8_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;
	static int32_t t33 = 821;

	t33 = ((x137<=(x138<=x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 1U;
	int8_t x143 = 1;
	int64_t t34 = -2719LL;

	t34 = ((x141<=(x142<=x143))/x144);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	uint8_t x148 = 1U;
	int32_t t35 = 52249628;

	t35 = ((x145<=(x146<=x147))/x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = UINT16_MAX;
	static int8_t x150 = -1;
	int32_t x151 = INT32_MIN;
	uint64_t x152 = 1976151536714LLU;
	volatile uint64_t t36 = 521704LLU;

	t36 = ((x149<=(x150<=x151))/x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 117197795053805LLU;
	uint64_t x154 = 8198992158949798553LLU;
	uint16_t x155 = 5U;
	volatile int64_t x156 = INT64_MAX;
	static int64_t t37 = -1002750613LL;

	t37 = ((x153<=(x154<=x155))/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = 4;
	int16_t x160 = INT16_MIN;
	volatile int32_t t38 = 2261729;

	t38 = ((x157<=(x158<=x159))/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = -1;
	uint64_t x162 = 1015113LLU;
	static volatile int8_t x163 = INT8_MIN;
	int8_t x164 = -1;
	static volatile int32_t t39 = -13821279;

	t39 = ((x161<=(x162<=x163))/x164);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -209128581209855690LL;
	int64_t x166 = -1LL;
	static int64_t x168 = 415326116185LL;
	volatile int64_t t40 = -9581963779LL;

	t40 = ((x165<=(x166<=x167))/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = INT16_MIN;
	int16_t x171 = -1;
	volatile uint16_t x172 = 116U;
	int32_t t41 = 13;

	t41 = ((x169<=(x170<=x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = -1;
	int64_t x176 = INT64_MAX;
	static volatile int64_t t42 = -171013314993563800LL;

	t42 = ((x173<=(x174<=x175))/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x181 = INT16_MAX;
	uint16_t x182 = 14U;
	volatile uint16_t x183 = 523U;
	uint32_t x184 = 13482U;
	volatile uint32_t t43 = 4U;

	t43 = ((x181<=(x182<=x183))/x184);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MAX;
	volatile int32_t x192 = 3060199;
	static int32_t t44 = -1;

	t44 = ((x189<=(x190<=x191))/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x193 = UINT8_MAX;
	static int32_t x194 = 1;
	volatile int32_t t45 = 3;

	t45 = ((x193<=(x194<=x195))/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = -1;
	int16_t x198 = INT16_MIN;
	volatile int32_t t46 = -586278;

	t46 = ((x197<=(x198<=x199))/x200);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -1;
	static uint32_t x203 = UINT32_MAX;
	int16_t x204 = 5;
	volatile int32_t t47 = 3227;

	t47 = ((x201<=(x202<=x203))/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	volatile int32_t x206 = INT32_MAX;
	static volatile int16_t x207 = INT16_MIN;
	int64_t x208 = 19404117469LL;

	t48 = ((x205<=(x206<=x207))/x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MAX;
	int64_t x210 = -1LL;
	static int64_t x211 = 1218456608LL;
	int16_t x212 = -1;

	t49 = ((x209<=(x210<=x211))/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x214 = 454718U;
	int64_t x215 = INT64_MAX;
	volatile int32_t x216 = 1955203;
	int32_t t50 = -472233752;

	t50 = ((x213<=(x214<=x215))/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MAX;
	uint32_t x218 = 0U;
	uint32_t x219 = 133577694U;
	int16_t x220 = -1;
	int32_t t51 = 626610;

	t51 = ((x217<=(x218<=x219))/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x223 = INT16_MAX;
	volatile int8_t x224 = INT8_MAX;
	int32_t t52 = -164779;

	t52 = ((x221<=(x222<=x223))/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MIN;
	volatile uint32_t x227 = 2U;
	int32_t t53 = 2385;

	t53 = ((x225<=(x226<=x227))/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MAX;
	static int16_t x231 = -1;
	volatile int32_t x232 = -423;
	int32_t t54 = 2046276;

	t54 = ((x229<=(x230<=x231))/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x233 = 25786LLU;
	uint64_t x234 = UINT64_MAX;
	volatile uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MAX;
	static volatile int32_t t55 = -1073797;

	t55 = ((x233<=(x234<=x235))/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = -1;
	volatile int16_t x238 = INT16_MIN;
	volatile int16_t x239 = -32;
	int8_t x240 = INT8_MIN;
	volatile int32_t t56 = -5;

	t56 = ((x237<=(x238<=x239))/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	int32_t x244 = -636757;
	int32_t t57 = 56553322;

	t57 = ((x241<=(x242<=x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x245 = 61770251LLU;
	int8_t x246 = INT8_MAX;
	static int32_t x248 = INT32_MIN;
	int32_t t58 = -3;

	t58 = ((x245<=(x246<=x247))/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x250 = -1LL;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = 468878LLU;
	uint64_t t59 = 28477893172986LLU;

	t59 = ((x249<=(x250<=x251))/x252);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 165U;
	static int16_t x255 = INT16_MAX;
	int16_t x256 = 1;
	static volatile int32_t t60 = 11785;

	t60 = ((x253<=(x254<=x255))/x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 37;
	volatile uint16_t x258 = UINT16_MAX;
	int8_t x259 = 12;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t61 = 420232U;

	t61 = ((x257<=(x258<=x259))/x260);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = 777419LLU;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = INT64_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t62 = 816187002592778192LLU;

	t62 = ((x261<=(x262<=x263))/x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MAX;
	uint32_t x266 = 115424U;
	int16_t x267 = -1;
	int16_t x268 = -1;
	int32_t t63 = -6313;

	t63 = ((x265<=(x266<=x267))/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = 467U;
	int64_t x271 = -1LL;

	t64 = ((x269<=(x270<=x271))/x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x274 = INT32_MAX;
	static int64_t x276 = INT64_MAX;

	t65 = ((x273<=(x274<=x275))/x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MIN;
	volatile int32_t t66 = -90494;

	t66 = ((x277<=(x278<=x279))/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = -1;
	int64_t x283 = INT64_MIN;

	t67 = ((x281<=(x282<=x283))/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 61190U;
	uint16_t x286 = 628U;
	int32_t x287 = -1;
	uint32_t t68 = 16U;

	t68 = ((x285<=(x286<=x287))/x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x289 = 99U;
	static uint8_t x290 = 15U;
	int16_t x291 = INT16_MAX;
	static int16_t x292 = -1670;
	volatile int32_t t69 = -83;

	t69 = ((x289<=(x290<=x291))/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x293 = 4070322308822458LLU;
	int8_t x294 = 5;
	uint16_t x295 = 404U;
	uint32_t x296 = 7852U;
	static uint32_t t70 = 24437457U;

	t70 = ((x293<=(x294<=x295))/x296);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 10U;
	int16_t x298 = 589;
	int32_t x300 = 3415024;
	int32_t t71 = 25887120;

	t71 = ((x297<=(x298<=x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x302 = INT16_MIN;
	int64_t x303 = -1LL;
	uint16_t x304 = 12068U;
	static int32_t t72 = -4;

	t72 = ((x301<=(x302<=x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = 6730686235470LL;
	int8_t x307 = -1;
	uint16_t x308 = 1U;

	t73 = ((x305<=(x306<=x307))/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MAX;
	int32_t x314 = INT32_MAX;
	uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;

	t74 = ((x313<=(x314<=x315))/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	uint64_t x319 = 84123941606LLU;
	int64_t x320 = 696300907088861LL;
	static int64_t t75 = -43822929759LL;

	t75 = ((x317<=(x318<=x319))/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x321 = -1;
	static int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MAX;

	t76 = ((x321<=(x322<=x323))/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -11080;

	t77 = ((x325<=(x326<=x327))/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	static uint32_t x331 = 17U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t78 = -31011LL;

	t78 = ((x329<=(x330<=x331))/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {


	t79 = ((x333<=(x334<=x335))/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x337 = 4027007U;
	int8_t x338 = -7;
	volatile int32_t x340 = -1;
	int32_t t80 = -161495;

	t80 = ((x337<=(x338<=x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x342 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;
	static volatile int64_t x344 = 28543894460220LL;
	static volatile int64_t t81 = -43166334265700LL;

	t81 = ((x341<=(x342<=x343))/x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x346 = 7;
	int16_t x348 = -1;

	t82 = ((x345<=(x346<=x347))/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = -1;
	uint8_t x352 = 118U;
	volatile int32_t t83 = -110968;

	t83 = ((x349<=(x350<=x351))/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x354 = INT64_MIN;
	volatile int16_t x355 = 229;
	static uint32_t t84 = 836186U;

	t84 = ((x353<=(x354<=x355))/x356);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = INT16_MIN;
	volatile uint16_t x359 = 13433U;
	volatile int32_t t85 = -252489653;

	t85 = ((x357<=(x358<=x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = INT16_MAX;
	volatile uint16_t x362 = 4420U;
	static uint16_t x363 = 26271U;
	volatile int16_t x364 = -13720;

	t86 = ((x361<=(x362<=x363))/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x365 = INT32_MIN;
	int32_t x366 = -1;
	static uint16_t x368 = 122U;
	volatile int32_t t87 = 3304;

	t87 = ((x365<=(x366<=x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = 0;
	uint16_t x371 = UINT16_MAX;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t88 = 57850;

	t88 = ((x369<=(x370<=x371))/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x373 = UINT64_MAX;
	uint8_t x375 = 0U;
	int32_t x376 = INT32_MIN;
	int32_t t89 = 157000180;

	t89 = ((x373<=(x374<=x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 684447169U;
	int16_t x380 = INT16_MIN;

	t90 = ((x377<=(x378<=x379))/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	static int8_t x383 = 12;
	int64_t x384 = -120392633780303512LL;
	static int64_t t91 = 3302LL;

	t91 = ((x381<=(x382<=x383))/x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 48U;
	int8_t x388 = INT8_MAX;
	int32_t t92 = 4195;

	t92 = ((x385<=(x386<=x387))/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MAX;
	int64_t x391 = -3996LL;
	volatile int64_t x392 = INT64_MIN;
	static volatile int64_t t93 = 178LL;

	t93 = ((x389<=(x390<=x391))/x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 5520183;
	static uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t94 = -41156983;

	t94 = ((x393<=(x394<=x395))/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x398 = -1;
	volatile int16_t x399 = -1;
	int64_t x400 = INT64_MIN;
	volatile int64_t t95 = 17764374LL;

	t95 = ((x397<=(x398<=x399))/x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	int64_t x402 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	int16_t x404 = 1;

	t96 = ((x401<=(x402<=x403))/x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = 1182;
	int8_t x406 = 3;
	volatile uint32_t x407 = UINT32_MAX;
	int32_t x408 = 1008462565;

	t97 = ((x405<=(x406<=x407))/x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	uint32_t x411 = UINT32_MAX;
	int32_t t98 = 1;

	t98 = ((x409<=(x410<=x411))/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MIN;
	volatile int64_t t99 = -76291LL;

	t99 = ((x413<=(x414<=x415))/x416);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

