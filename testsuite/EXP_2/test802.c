#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = UINT16_MAX;
volatile uint64_t x5 = 359687350LLU;
int32_t t2 = -1624;
int32_t x14 = -1;
int16_t x21 = -312;
int64_t x32 = INT64_MIN;
static uint64_t x36 = 52511317669894LLU;
int32_t t8 = 877;
int8_t x40 = 1;
volatile int32_t t10 = -1220;
volatile int64_t x47 = -2LL;
static int16_t x50 = -1;
volatile uint16_t x52 = UINT16_MAX;
int32_t t12 = -351401128;
int32_t x53 = INT32_MIN;
volatile uint64_t x55 = 1502561LLU;
volatile uint64_t x57 = UINT64_MAX;
uint16_t x60 = UINT16_MAX;
int64_t x64 = -1LL;
int64_t x68 = INT64_MIN;
uint8_t x71 = UINT8_MAX;
int8_t x72 = INT8_MIN;
int16_t x82 = -5;
int32_t t20 = -89869983;
static int32_t x91 = INT32_MIN;
uint64_t x96 = 84061569769935LLU;
int32_t x100 = -1;
int32_t t25 = 7306;
static int32_t t27 = 100;
static int64_t x122 = -20LL;
uint64_t x125 = 1488414LLU;
int32_t x126 = INT32_MIN;
volatile int16_t x129 = -1;
static int16_t x130 = -15;
int16_t x137 = INT16_MAX;
volatile int32_t t34 = 175071921;
int8_t x144 = INT8_MIN;
static int8_t x146 = -1;
int16_t x150 = -1;
int16_t x152 = 7369;
static int32_t x154 = 139328;
int64_t x159 = -9871301577645361LL;
int8_t x162 = -1;
static int64_t x171 = -63958685LL;
int8_t x175 = -3;
uint64_t x181 = 1771111201875LLU;
static volatile int16_t x192 = INT16_MAX;
int16_t x194 = INT16_MIN;
int32_t t48 = -78617015;
uint32_t x208 = UINT32_MAX;
uint16_t x216 = 2U;
int32_t x218 = INT32_MIN;
volatile int16_t x223 = 9734;
volatile int32_t t54 = 3249;
int32_t t55 = 0;
static int16_t x233 = 52;
uint32_t x243 = 1U;
int32_t x250 = INT32_MIN;
uint64_t x253 = UINT64_MAX;
uint64_t x254 = 280279297734LLU;
volatile int32_t t64 = 252204;
uint8_t x268 = UINT8_MAX;
int32_t x276 = INT32_MIN;
static int8_t x280 = -4;
static uint32_t x285 = 0U;
int8_t x296 = INT8_MAX;
static uint16_t x302 = 20992U;
volatile int8_t x308 = -1;
uint32_t x310 = 109715U;
static int32_t x317 = INT32_MAX;
static volatile int32_t x318 = INT32_MAX;
static volatile int64_t x332 = -393LL;
static volatile uint64_t x336 = 2LLU;
uint16_t x343 = 2864U;
static int32_t x344 = 2845545;
int32_t t84 = 9;
int16_t x349 = 201;
volatile int16_t x354 = INT16_MAX;
uint32_t x358 = UINT32_MAX;
uint16_t x364 = 4U;
int32_t x365 = INT32_MIN;
uint32_t x370 = UINT32_MAX;
int16_t x389 = INT16_MIN;
int32_t x390 = INT32_MIN;
volatile int64_t x398 = -1LL;
uint8_t x399 = UINT8_MAX;
volatile uint8_t x405 = 5U;
static uint32_t x406 = UINT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = -1;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int32_t t0 = -169;

	t0 = ((x1<=(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = 0;
	int32_t t1 = 296;

	t1 = ((x5<=(x6%x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	uint16_t x10 = UINT16_MAX;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;

	t2 = ((x9<=(x10%x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = 1626687175LL;
	static volatile int32_t t3 = -1;

	t3 = ((x13<=(x14%x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int64_t x18 = 5LL;
	volatile uint32_t x19 = 1906626196U;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 21;

	t4 = ((x17<=(x18%x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	int8_t x23 = 1;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = 24;

	t5 = ((x21<=(x22%x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int16_t x26 = 6590;
	int64_t x27 = INT64_MIN;
	static uint8_t x28 = 13U;
	static int32_t t6 = -82;

	t6 = ((x25<=(x26%x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static uint16_t x30 = 1U;
	uint64_t x31 = 2459240LLU;
	volatile int32_t t7 = -13;

	t7 = ((x29<=(x30%x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int16_t x34 = INT16_MAX;
	int16_t x35 = -1;

	t8 = ((x33<=(x34%x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MAX;
	int16_t x39 = 636;
	volatile int32_t t9 = 21182;

	t9 = ((x37<=(x38%x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -61LL;
	int32_t x42 = 39;
	int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;

	t10 = ((x41<=(x42%x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 7020U;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = 24247741;

	t11 = ((x45<=(x46%x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 238554829LLU;
	uint8_t x51 = UINT8_MAX;

	t12 = ((x49<=(x50%x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	volatile uint32_t x56 = UINT32_MAX;
	static volatile int32_t t13 = -33;

	t13 = ((x53<=(x54%x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x58 = UINT16_MAX;
	volatile uint8_t x59 = 24U;
	int32_t t14 = -28568;

	t14 = ((x57<=(x58%x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 29U;
	volatile int32_t t15 = 188986652;

	t15 = ((x61<=(x62%x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 29U;
	volatile int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	volatile int32_t t16 = -8158;

	t16 = ((x65<=(x66%x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static int8_t x70 = INT8_MIN;
	static int32_t t17 = 26;

	t17 = ((x69<=(x70%x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 1202593043U;
	uint16_t x74 = 1098U;
	int32_t x75 = -89;
	uint16_t x76 = 362U;
	static int32_t t18 = 7006;

	t18 = ((x73<=(x74%x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	volatile int16_t x78 = INT16_MAX;
	int64_t x79 = 939LL;
	static uint64_t x80 = 9LLU;
	volatile int32_t t19 = -923555758;

	t19 = ((x77<=(x78%x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 1220716839856LL;
	uint64_t x83 = 265LLU;
	int8_t x84 = -6;

	t20 = ((x81<=(x82%x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 1024132;
	int8_t x86 = 10;
	volatile int16_t x87 = -1;
	uint64_t x88 = 250LLU;
	volatile int32_t t21 = -258539201;

	t21 = ((x85<=(x86%x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = UINT8_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 3662882;

	t22 = ((x89<=(x90%x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MAX;
	static int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MAX;
	volatile int32_t t23 = 4350;

	t23 = ((x93<=(x94%x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = 1637LL;
	volatile int32_t t24 = -20;

	t24 = ((x97<=(x98%x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 11U;
	int32_t x102 = INT32_MIN;
	volatile uint16_t x103 = 1U;
	uint16_t x104 = 1U;

	t25 = ((x101<=(x102%x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MAX;
	int64_t x106 = INT64_MIN;
	volatile uint16_t x107 = 2U;
	int32_t x108 = 0;
	static int32_t t26 = -828;

	t26 = ((x105<=(x106%x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1487012;
	int8_t x110 = -38;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = 1;

	t27 = ((x109<=(x110%x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MAX;
	int16_t x115 = 7101;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -563014;

	t28 = ((x113<=(x114%x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 4175904U;
	static uint16_t x118 = UINT16_MAX;
	volatile int8_t x119 = INT8_MAX;
	static volatile int32_t x120 = INT32_MIN;
	int32_t t29 = 3785;

	t29 = ((x117<=(x118%x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = 10;
	int8_t x123 = 1;
	int32_t x124 = 1;
	int32_t t30 = 20789779;

	t30 = ((x121<=(x122%x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x127 = 104063171426LLU;
	int16_t x128 = -1;
	volatile int32_t t31 = -344;

	t31 = ((x125<=(x126%x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x131 = INT64_MIN;
	static int32_t x132 = INT32_MAX;
	static int32_t t32 = 0;

	t32 = ((x129<=(x130%x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	volatile int16_t x134 = -1;
	volatile int8_t x135 = 1;
	uint8_t x136 = 11U;
	int32_t t33 = -1;

	t33 = ((x133<=(x134%x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int16_t x140 = -1;

	t34 = ((x137<=(x138%x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MAX;
	uint32_t x142 = UINT32_MAX;
	static uint32_t x143 = 201507U;
	int32_t t35 = 153;

	t35 = ((x141<=(x142%x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 110U;
	int8_t x147 = -15;
	int8_t x148 = -15;
	volatile int32_t t36 = -25102479;

	t36 = ((x145<=(x146%x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -50088844LL;
	int16_t x151 = INT16_MIN;
	int32_t t37 = 0;

	t37 = ((x149<=(x150%x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static int16_t x155 = INT16_MIN;
	uint64_t x156 = 746020284493LLU;
	int32_t t38 = -2;

	t38 = ((x153<=(x154%x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -7LL;
	int8_t x158 = INT8_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	static volatile int32_t t39 = 50422888;

	t39 = ((x157<=(x158%x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x163 = 211564U;
	static int16_t x164 = 25;
	static volatile int32_t t40 = 0;

	t40 = ((x161<=(x162%x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 1707U;
	volatile int64_t x166 = INT64_MIN;
	static volatile int32_t x167 = 1;
	static int8_t x168 = -1;
	volatile int32_t t41 = 1;

	t41 = ((x165<=(x166%x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 15525LLU;
	int64_t x170 = 986592LL;
	int64_t x172 = INT64_MIN;
	static volatile int32_t t42 = -610041;

	t42 = ((x169<=(x170%x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	uint8_t x174 = UINT8_MAX;
	int32_t x176 = 22;
	static int32_t t43 = 78;

	t43 = ((x173<=(x174%x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 3;
	int64_t x178 = INT64_MIN;
	static uint16_t x179 = 48U;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 107861;

	t44 = ((x177<=(x178%x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int32_t x183 = 48;
	volatile uint32_t x184 = 956329U;
	int32_t t45 = 29662;

	t45 = ((x181<=(x182%x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = 2047;
	uint32_t x190 = UINT32_MAX;
	volatile int8_t x191 = -1;
	volatile int32_t t46 = 6270;

	t46 = ((x189<=(x190%x191))<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	int32_t x195 = -1170;
	static int64_t x196 = INT64_MIN;
	volatile int32_t t47 = 1;

	t47 = ((x193<=(x194%x195))<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MAX;
	int8_t x200 = -1;

	t48 = ((x197<=(x198%x199))<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 20U;
	int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MAX;
	int8_t x204 = INT8_MAX;
	volatile int32_t t49 = -6627842;

	t49 = ((x201<=(x202%x203))<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -3;
	int16_t x206 = -2209;
	volatile int8_t x207 = INT8_MIN;
	static int32_t t50 = -318;

	t50 = ((x205<=(x206%x207))<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x209 = INT32_MIN;
	volatile uint16_t x210 = 656U;
	uint8_t x211 = 1U;
	volatile int64_t x212 = INT64_MAX;
	static volatile int32_t t51 = -9029;

	t51 = ((x209<=(x210%x211))<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 1;
	uint8_t x214 = 30U;
	volatile uint32_t x215 = UINT32_MAX;
	static volatile int32_t t52 = -32107558;

	t52 = ((x213<=(x214%x215))<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 19629900U;
	int64_t x219 = -1LL;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t53 = -44027714;

	t53 = ((x217<=(x218%x219))<x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 8;
	volatile uint32_t x222 = 445434711U;
	uint32_t x224 = UINT32_MAX;

	t54 = ((x221<=(x222%x223))<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	volatile uint64_t x226 = UINT64_MAX;
	int64_t x227 = -115750LL;
	uint16_t x228 = 7U;

	t55 = ((x225<=(x226%x227))<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MAX;
	static uint64_t x230 = 1614696412025039LLU;
	int16_t x231 = INT16_MAX;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t56 = -442567;

	t56 = ((x229<=(x230%x231))<x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x234 = 0LL;
	int8_t x235 = -1;
	int16_t x236 = INT16_MIN;
	static int32_t t57 = -16696697;

	t57 = ((x233<=(x234%x235))<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 1823U;
	uint64_t x238 = 7922904746952329224LLU;
	volatile uint8_t x239 = UINT8_MAX;
	int64_t x240 = -1LL;
	static int32_t t58 = -384455;

	t58 = ((x237<=(x238%x239))<x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	static uint64_t x244 = 140LLU;
	volatile int32_t t59 = 1;

	t59 = ((x241<=(x242%x243))<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	static int8_t x247 = 6;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t60 = 36;

	t60 = ((x245<=(x246%x247))<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x249 = 12U;
	volatile int32_t x251 = INT32_MIN;
	volatile uint64_t x252 = UINT64_MAX;
	volatile int32_t t61 = -9629489;

	t61 = ((x249<=(x250%x251))<x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x255 = -1690;
	int16_t x256 = -1;
	int32_t t62 = 5242276;

	t62 = ((x253<=(x254%x255))<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	static int64_t x258 = 663577833374956LL;
	volatile uint8_t x259 = 2U;
	int64_t x260 = INT64_MIN;
	static int32_t t63 = -42;

	t63 = ((x257<=(x258%x259))<x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 1U;
	volatile int32_t x263 = INT32_MIN;
	uint16_t x264 = UINT16_MAX;

	t64 = ((x261<=(x262%x263))<x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	volatile int32_t t65 = -3;

	t65 = ((x265<=(x266%x267))<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = 0;
	static int8_t x270 = 15;
	uint16_t x271 = 5U;
	uint8_t x272 = 6U;
	volatile int32_t t66 = -303280;

	t66 = ((x269<=(x270%x271))<x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = 2728558215426337136LLU;
	int64_t x274 = INT64_MIN;
	volatile uint64_t x275 = 6140LLU;
	int32_t t67 = -6877043;

	t67 = ((x273<=(x274%x275))<x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MIN;
	volatile int16_t x278 = 30;
	uint8_t x279 = 5U;
	static int32_t t68 = -1590631;

	t68 = ((x277<=(x278%x279))<x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 51997U;
	uint64_t x282 = UINT64_MAX;
	static int16_t x283 = INT16_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t69 = 4;

	t69 = ((x281<=(x282%x283))<x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x286 = UINT64_MAX;
	static int64_t x287 = -1LL;
	static int32_t x288 = -5;
	int32_t t70 = -21013259;

	t70 = ((x285<=(x286%x287))<x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = -1LL;
	static uint16_t x290 = UINT16_MAX;
	static int16_t x291 = 1;
	uint64_t x292 = UINT64_MAX;
	volatile int32_t t71 = 34237;

	t71 = ((x289<=(x290%x291))<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = 11500213;
	int16_t x294 = 468;
	static uint32_t x295 = UINT32_MAX;
	int32_t t72 = -5890;

	t72 = ((x293<=(x294%x295))<x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = 3386;
	int32_t x298 = INT32_MAX;
	int32_t x299 = -2;
	int16_t x300 = 30;
	int32_t t73 = 158667;

	t73 = ((x297<=(x298%x299))<x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	int8_t x303 = -1;
	int64_t x304 = INT64_MAX;
	volatile int32_t t74 = -76;

	t74 = ((x301<=(x302%x303))<x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x305 = -2;
	uint8_t x306 = 7U;
	static int8_t x307 = 5;
	volatile int32_t t75 = -3831;

	t75 = ((x305<=(x306%x307))<x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x309 = 16134U;
	static volatile int64_t x311 = -28629704507LL;
	int64_t x312 = 206LL;
	volatile int32_t t76 = 223176;

	t76 = ((x309<=(x310%x311))<x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x313 = 256U;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t77 = -837;

	t77 = ((x313<=(x314%x315))<x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x319 = UINT32_MAX;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t78 = 156117;

	t78 = ((x317<=(x318%x319))<x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x321 = -1LL;
	int8_t x322 = INT8_MAX;
	volatile int32_t x323 = INT32_MIN;
	uint8_t x324 = 2U;
	volatile int32_t t79 = -14396921;

	t79 = ((x321<=(x322%x323))<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = -3;
	volatile int16_t x326 = INT16_MAX;
	int32_t x327 = 18;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t80 = -2;

	t80 = ((x325<=(x326%x327))<x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 0U;
	volatile uint64_t x330 = 573948345285989716LLU;
	uint64_t x331 = UINT64_MAX;
	static volatile int32_t t81 = 3;

	t81 = ((x329<=(x330%x331))<x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = 3152LL;
	static int8_t x334 = -1;
	int16_t x335 = INT16_MAX;
	int32_t t82 = 5838;

	t82 = ((x333<=(x334%x335))<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x337 = UINT32_MAX;
	volatile uint32_t x338 = 0U;
	uint16_t x339 = UINT16_MAX;
	uint64_t x340 = UINT64_MAX;
	int32_t t83 = -344004888;

	t83 = ((x337<=(x338%x339))<x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	static int16_t x342 = 1;

	t84 = ((x341<=(x342%x343))<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 1754182099U;
	int8_t x348 = 0;
	volatile int32_t t85 = -83134489;

	t85 = ((x345<=(x346%x347))<x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x350 = INT64_MIN;
	int8_t x351 = 15;
	int64_t x352 = INT64_MIN;
	int32_t t86 = -470;

	t86 = ((x349<=(x350%x351))<x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = 1;
	int32_t x355 = -1;
	uint8_t x356 = 46U;
	volatile int32_t t87 = 79;

	t87 = ((x353<=(x354%x355))<x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = -30;
	static uint64_t x359 = 4LLU;
	static volatile int16_t x360 = -1;
	volatile int32_t t88 = -22374;

	t88 = ((x357<=(x358%x359))<x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MIN;
	volatile int16_t x362 = -10171;
	volatile int32_t x363 = 14475;
	int32_t t89 = -2;

	t89 = ((x361<=(x362%x363))<x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x366 = -1;
	int8_t x367 = INT8_MAX;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t90 = -21;

	t90 = ((x365<=(x366%x367))<x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = -15LL;
	int32_t x371 = INT32_MAX;
	int16_t x372 = 2295;
	int32_t t91 = -2101;

	t91 = ((x369<=(x370%x371))<x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = -24;
	int32_t x379 = -2971;
	static int64_t x380 = 484340859913059LL;
	int32_t t92 = 19733;

	t92 = ((x377<=(x378%x379))<x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -33517LL;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	static int64_t x384 = 1LL;
	volatile int32_t t93 = -13;

	t93 = ((x381<=(x382%x383))<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x385 = UINT16_MAX;
	static uint8_t x386 = 127U;
	int32_t x387 = -250;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t94 = 29840974;

	t94 = ((x385<=(x386%x387))<x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x391 = -845698147588329557LL;
	volatile uint64_t x392 = 3332470LLU;
	static int32_t t95 = 122;

	t95 = ((x389<=(x390%x391))<x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -1;
	uint16_t x394 = 362U;
	int32_t x395 = -1;
	int32_t x396 = -37816875;
	int32_t t96 = 13372;

	t96 = ((x393<=(x394%x395))<x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x397 = 92U;
	static int32_t x400 = -15581004;
	int32_t t97 = 115348;

	t97 = ((x397<=(x398%x399))<x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = 0LL;
	static int64_t x402 = 106091LL;
	uint64_t x403 = 465343906443LLU;
	int32_t x404 = 78261076;
	int32_t t98 = 229841;

	t98 = ((x401<=(x402%x403))<x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x407 = INT16_MAX;
	int64_t x408 = INT64_MIN;
	int32_t t99 = -3727;

	t99 = ((x405<=(x406%x407))<x408);

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

