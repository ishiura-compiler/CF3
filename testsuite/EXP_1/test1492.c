#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = 14546419931906LL;
int32_t t0 = 12133;
volatile uint8_t x6 = 1U;
int16_t x10 = 915;
uint32_t x11 = UINT32_MAX;
volatile int32_t x13 = INT32_MIN;
uint16_t x16 = 0U;
int16_t x19 = INT16_MAX;
int32_t x21 = -39729;
int16_t x22 = INT16_MIN;
int32_t t5 = -995964915;
int32_t x27 = -1;
int64_t x46 = 3152935375LL;
static volatile int32_t x50 = INT32_MIN;
volatile int32_t t12 = -191;
volatile uint8_t x62 = 6U;
int16_t x64 = -1558;
volatile int32_t t15 = 2;
int8_t x65 = INT8_MIN;
int64_t x75 = INT64_MIN;
int8_t x81 = INT8_MIN;
uint8_t x85 = 15U;
static volatile int32_t x93 = INT32_MAX;
int64_t x95 = -1LL;
int8_t x96 = 49;
int32_t t23 = 0;
int8_t x99 = INT8_MAX;
int8_t x102 = -1;
volatile int32_t x107 = -1;
volatile int32_t t27 = 16;
uint32_t x118 = UINT32_MAX;
int32_t x120 = INT32_MIN;
int16_t x123 = INT16_MAX;
int32_t x131 = 31569;
int8_t x133 = INT8_MIN;
static volatile uint16_t x147 = UINT16_MAX;
int32_t t37 = 999858008;
static uint32_t x154 = 1771315319U;
int32_t t40 = 452945462;
static volatile int16_t x175 = INT16_MIN;
int16_t x182 = -1465;
uint8_t x183 = 83U;
volatile int8_t x192 = INT8_MIN;
int16_t x193 = -2;
volatile int32_t t48 = -19112976;
int16_t x200 = INT16_MIN;
int32_t t50 = 34;
volatile int32_t x207 = INT32_MIN;
int64_t x212 = -1LL;
uint32_t x231 = 80U;
static int32_t t57 = -62079945;
uint8_t x235 = 12U;
int32_t x237 = 1832426;
uint64_t x240 = 4LLU;
int32_t t59 = 119027;
volatile int32_t t61 = 0;
int32_t x251 = INT32_MAX;
uint64_t x259 = 130323751594948LLU;
int8_t x263 = INT8_MIN;
static int32_t t65 = 1;
int16_t x276 = 7;
uint16_t x281 = UINT16_MAX;
int16_t x284 = -1;
static volatile int32_t t70 = -10282932;
static int64_t x293 = -1LL;
volatile int32_t t73 = 407707887;
int8_t x299 = INT8_MAX;
volatile int32_t t74 = -6589;
int8_t x303 = -32;
static int8_t x310 = -15;
volatile int32_t t77 = 18;
static int64_t x313 = INT64_MIN;
int16_t x314 = -14;
int16_t x317 = INT16_MAX;
static int32_t x323 = -295978;
uint32_t x324 = UINT32_MAX;
int64_t x331 = INT64_MIN;
int64_t x334 = 356821523630827LL;
static int32_t x336 = INT32_MAX;
int16_t x343 = INT16_MIN;
static int32_t x344 = -1;
static uint16_t x346 = 1U;
volatile int32_t t86 = -86;
static uint8_t x349 = 13U;
int16_t x352 = INT16_MAX;
int32_t x355 = INT32_MIN;
int32_t t88 = -50557856;
uint8_t x359 = 8U;
volatile int32_t t89 = -9396080;
int8_t x362 = -1;
int32_t x365 = 2210;
volatile int16_t x374 = -12059;
uint16_t x376 = UINT16_MAX;
volatile int64_t x384 = -1LL;
int32_t t96 = 6;
uint64_t x397 = 152LLU;
int8_t x400 = 11;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	volatile int32_t x3 = 134129535;
	int16_t x4 = 141;

	t0 = (((x1<x2)&x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 337U;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 0U;
	int32_t t1 = -28;

	t1 = (((x5<x6)&x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = 197026;

	t2 = (((x9<x10)&x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = -1;
	static volatile int32_t t3 = 45696;

	t3 = (((x13<x14)&x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	int64_t x18 = INT64_MIN;
	uint16_t x20 = 97U;
	static int32_t t4 = -7;

	t4 = (((x17<x18)&x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x23 = INT16_MAX;
	uint16_t x24 = UINT16_MAX;

	t5 = (((x21<x22)&x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -29;
	static uint32_t x26 = UINT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -2019686;

	t6 = (((x25<x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 3781LLU;
	int64_t x30 = INT64_MAX;
	uint32_t x31 = 228105262U;
	int32_t x32 = 8;
	volatile int32_t t7 = -25548;

	t7 = (((x29<x30)&x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	uint8_t x34 = UINT8_MAX;
	int64_t x35 = -1LL;
	int8_t x36 = 0;
	volatile int32_t t8 = -37990972;

	t8 = (((x33<x34)&x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 6U;
	int64_t x38 = -1LL;
	static int16_t x39 = INT16_MIN;
	static uint8_t x40 = UINT8_MAX;
	int32_t t9 = 88439481;

	t9 = (((x37<x38)&x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	static volatile uint8_t x43 = 19U;
	static volatile int8_t x44 = 0;
	int32_t t10 = 437662;

	t10 = (((x41<x42)&x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	uint8_t x47 = 0U;
	volatile uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -219890;

	t11 = (((x45<x46)&x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 21154433U;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = INT64_MAX;

	t12 = (((x49<x50)&x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int64_t x54 = INT64_MAX;
	int16_t x55 = -1;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = 4828831;

	t13 = (((x53<x54)&x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 2455U;
	uint16_t x59 = 3U;
	int8_t x60 = 1;
	volatile int32_t t14 = 120;

	t14 = (((x57<x58)&x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int8_t x63 = -1;

	t15 = (((x61<x62)&x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -1;
	uint8_t x67 = UINT8_MAX;
	uint16_t x68 = 1U;
	volatile int32_t t16 = 563;

	t16 = (((x65<x66)&x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int32_t x70 = INT32_MAX;
	int16_t x71 = -1;
	uint8_t x72 = 37U;
	int32_t t17 = -35200976;

	t17 = (((x69<x70)&x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 8U;
	int32_t x74 = INT32_MIN;
	int32_t x76 = 133059613;
	int32_t t18 = -427;

	t18 = (((x73<x74)&x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 140032168;
	int32_t x78 = -5411;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1011;
	int32_t t19 = -857;

	t19 = (((x77<x78)&x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = 47;
	uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 1646U;
	volatile int32_t t20 = 1;

	t20 = (((x81<x82)&x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	static int64_t x87 = INT64_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -509293;

	t21 = (((x85<x86)&x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 140;

	t22 = (((x89<x90)&x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;

	t23 = (((x93<x94)&x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MAX;
	static uint32_t x98 = 7U;
	static int32_t x100 = -61141052;
	int32_t t24 = -114664563;

	t24 = (((x97<x98)&x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 1777963177LLU;
	static int32_t x103 = -25828;
	int16_t x104 = -1;
	static int32_t t25 = 3;

	t25 = (((x101<x102)&x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 2963643186533330134LLU;
	static int16_t x106 = 0;
	uint32_t x108 = 12031062U;
	volatile int32_t t26 = 3542387;

	t26 = (((x105<x106)&x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = 287;
	int32_t x111 = -747;
	int64_t x112 = -1LL;

	t27 = (((x109<x110)&x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	int64_t x114 = INT64_MIN;
	static int16_t x115 = 1;
	static int64_t x116 = INT64_MAX;
	volatile int32_t t28 = 55670573;

	t28 = (((x113<x114)&x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 2U;
	int8_t x119 = INT8_MIN;
	int32_t t29 = -105965062;

	t29 = (((x117<x118)&x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	int32_t x122 = -1;
	volatile int8_t x124 = -1;
	int32_t t30 = 27243;

	t30 = (((x121<x122)&x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	volatile int64_t x126 = -28012LL;
	static int8_t x127 = INT8_MAX;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = -6656;

	t31 = (((x125<x126)&x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 19U;
	uint64_t x130 = 2020697LLU;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t32 = 12218;

	t32 = (((x129<x130)&x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = UINT64_MAX;
	static volatile int8_t x135 = 1;
	int64_t x136 = INT64_MIN;
	static volatile int32_t t33 = 533430156;

	t33 = (((x133<x134)&x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 28U;
	int16_t x138 = -1;
	int16_t x139 = INT16_MAX;
	static int8_t x140 = INT8_MIN;
	static int32_t t34 = -24;

	t34 = (((x137<x138)&x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = INT64_MIN;
	volatile int32_t x143 = -1;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = 119;

	t35 = (((x141<x142)&x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static volatile int32_t x146 = INT32_MIN;
	static int32_t x148 = -1;
	volatile int32_t t36 = -111963;

	t36 = (((x145<x146)&x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = INT16_MIN;
	static uint8_t x150 = 21U;
	uint8_t x151 = 5U;
	uint8_t x152 = 1U;

	t37 = (((x149<x150)&x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	volatile int64_t x155 = INT64_MAX;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t38 = 1494364;

	t38 = (((x153<x154)&x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -164161LL;
	uint64_t x158 = 1LLU;
	int32_t x159 = INT32_MIN;
	static int64_t x160 = -613830LL;
	int32_t t39 = 11366;

	t39 = (((x157<x158)&x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	volatile uint8_t x162 = 30U;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -7;

	t40 = (((x161<x162)&x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MIN;
	static uint16_t x167 = 80U;
	int64_t x168 = INT64_MAX;
	volatile int32_t t41 = -1909;

	t41 = (((x165<x166)&x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 11321U;
	static int16_t x170 = INT16_MIN;
	int8_t x171 = -2;
	static uint32_t x172 = 7164U;
	int32_t t42 = -539312;

	t42 = (((x169<x170)&x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	static uint16_t x174 = UINT16_MAX;
	volatile int64_t x176 = INT64_MAX;
	static volatile int32_t t43 = 80337;

	t43 = (((x173<x174)&x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MAX;
	uint64_t x178 = 7735483284143601868LLU;
	uint8_t x179 = 2U;
	static uint16_t x180 = UINT16_MAX;
	int32_t t44 = 17;

	t44 = (((x177<x178)&x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = UINT32_MAX;
	int32_t x184 = 1055671609;
	int32_t t45 = 117032;

	t45 = (((x181<x182)&x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int16_t x186 = -495;
	uint8_t x187 = 0U;
	uint64_t x188 = UINT64_MAX;
	static int32_t t46 = 91673;

	t46 = (((x185<x186)&x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 956499U;
	int32_t x190 = 123;
	int64_t x191 = INT64_MAX;
	volatile int32_t t47 = 49;

	t47 = (((x189<x190)&x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = 8684882845423LLU;
	uint16_t x195 = 383U;
	int8_t x196 = INT8_MIN;

	t48 = (((x193<x194)&x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	volatile int64_t x199 = -1LL;
	volatile int32_t t49 = -4717;

	t49 = (((x197<x198)&x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -1LL;
	static int32_t x202 = 4995;
	static int64_t x203 = -1LL;
	volatile int16_t x204 = -1;

	t50 = (((x201<x202)&x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -2884051138622371275LL;
	uint64_t x206 = UINT64_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -428822616;

	t51 = (((x205<x206)&x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	volatile int32_t t52 = -5111;

	t52 = (((x209<x210)&x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = 1;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 1U;
	volatile int32_t t53 = -3199;

	t53 = (((x213<x214)&x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1146;
	volatile int8_t x218 = INT8_MIN;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = 14;
	static int32_t t54 = -22169;

	t54 = (((x217<x218)&x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 2U;
	volatile uint64_t x222 = 15885669LLU;
	volatile int64_t x223 = -218745LL;
	int8_t x224 = INT8_MIN;
	static int32_t t55 = 33;

	t55 = (((x221<x222)&x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	static int64_t x226 = 19781455LL;
	int32_t x227 = INT32_MAX;
	int64_t x228 = 473657738501988LL;
	volatile int32_t t56 = -170;

	t56 = (((x225<x226)&x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -21;
	static int32_t x232 = INT32_MIN;

	t57 = (((x229<x230)&x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = 2781006095796123LL;
	volatile int16_t x236 = 6961;
	static volatile int32_t t58 = 66521258;

	t58 = (((x233<x234)&x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	int8_t x239 = INT8_MAX;

	t59 = (((x237<x238)&x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 42U;
	static int8_t x242 = INT8_MIN;
	volatile uint64_t x243 = 6676776894609178626LLU;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -11429772;

	t60 = (((x241<x242)&x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 29U;

	t61 = (((x245<x246)&x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = UINT16_MAX;
	static int64_t x252 = -1377261104753840169LL;
	static volatile int32_t t62 = 533633424;

	t62 = (((x249<x250)&x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	static int8_t x254 = -1;
	uint64_t x255 = 8091487169186009LLU;
	uint16_t x256 = UINT16_MAX;
	int32_t t63 = -4;

	t63 = (((x253<x254)&x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 39U;
	int32_t x258 = INT32_MIN;
	uint16_t x260 = 0U;
	int32_t t64 = -18315283;

	t64 = (((x257<x258)&x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -163;
	int8_t x262 = INT8_MAX;
	int8_t x264 = -1;

	t65 = (((x261<x262)&x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	int32_t t66 = 276812;

	t66 = (((x265<x266)&x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 8LLU;
	int8_t x270 = 3;
	int64_t x271 = 0LL;
	int32_t x272 = INT32_MIN;
	static int32_t t67 = -1019;

	t67 = (((x269<x270)&x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	uint64_t x274 = 75295830LLU;
	int8_t x275 = INT8_MIN;
	static int32_t t68 = -3923;

	t68 = (((x273<x274)&x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MAX;
	static int32_t x279 = INT32_MIN;
	int8_t x280 = -23;
	static int32_t t69 = -59762488;

	t69 = (((x277<x278)&x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = 21;
	int16_t x283 = 0;

	t70 = (((x281<x282)&x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = UINT16_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 541591958552LLU;
	volatile int32_t t71 = -6753558;

	t71 = (((x285<x286)&x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	static uint8_t x290 = 110U;
	int32_t x291 = -1;
	uint64_t x292 = 7501485LLU;
	int32_t t72 = 1417544;

	t72 = (((x289<x290)&x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = 12;
	volatile int8_t x295 = -1;
	static uint16_t x296 = UINT16_MAX;

	t73 = (((x293<x294)&x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 15U;
	static uint64_t x298 = UINT64_MAX;
	volatile uint64_t x300 = UINT64_MAX;

	t74 = (((x297<x298)&x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	static volatile int64_t x302 = -1LL;
	volatile uint32_t x304 = UINT32_MAX;
	int32_t t75 = -523;

	t75 = (((x301<x302)&x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = 1115173506177485181LL;
	volatile int8_t x306 = 28;
	static int8_t x307 = -6;
	int64_t x308 = -1327219654LL;
	volatile int32_t t76 = 1894792;

	t76 = (((x305<x306)&x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 3U;
	int32_t x311 = -983925;
	int32_t x312 = 110385975;

	t77 = (((x309<x310)&x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x315 = INT8_MAX;
	int8_t x316 = 0;
	int32_t t78 = 2051;

	t78 = (((x313<x314)&x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x318 = 14U;
	volatile int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MIN;
	static int32_t t79 = 61738154;

	t79 = (((x317<x318)&x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	static int16_t x322 = -1;
	int32_t t80 = -1;

	t80 = (((x321<x322)&x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int32_t x326 = INT32_MAX;
	volatile int8_t x327 = -7;
	volatile int64_t x328 = INT64_MAX;
	static int32_t t81 = -4;

	t81 = (((x325<x326)&x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MAX;
	uint16_t x330 = 17414U;
	int8_t x332 = 0;
	int32_t t82 = -3;

	t82 = (((x329<x330)&x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = UINT64_MAX;
	uint64_t x335 = UINT64_MAX;
	static int32_t t83 = 19;

	t83 = (((x333<x334)&x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = UINT8_MAX;
	static uint32_t x338 = UINT32_MAX;
	static int8_t x339 = -1;
	int16_t x340 = -1;
	volatile int32_t t84 = 96;

	t84 = (((x337<x338)&x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x342 = INT8_MIN;
	static volatile int32_t t85 = -31266306;

	t85 = (((x341<x342)&x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 93U;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MAX;

	t86 = (((x345<x346)&x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = 12990;
	volatile uint16_t x351 = 0U;
	static int32_t t87 = 31423520;

	t87 = (((x349<x350)&x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 8850LLU;
	int8_t x354 = INT8_MIN;
	int8_t x356 = INT8_MAX;

	t88 = (((x353<x354)&x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static volatile int32_t x358 = 64;
	volatile int64_t x360 = INT64_MIN;

	t89 = (((x357<x358)&x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 3U;
	int8_t x363 = -24;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = 22;

	t90 = (((x361<x362)&x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x366 = -1;
	int8_t x367 = -1;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 427646052;

	t91 = (((x365<x366)&x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	uint8_t x372 = 1U;
	int32_t t92 = -951423611;

	t92 = (((x369<x370)&x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int8_t x375 = INT8_MIN;
	int32_t t93 = -11;

	t93 = (((x373<x374)&x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	static volatile uint16_t x378 = 2U;
	uint64_t x379 = 54124177256068128LLU;
	static volatile uint64_t x380 = 9870392505425LLU;
	volatile int32_t t94 = 1962;

	t94 = (((x377<x378)&x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = -1;
	volatile int64_t x383 = INT64_MAX;
	int32_t t95 = 10;

	t95 = (((x381<x382)&x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int64_t x386 = INT64_MIN;
	static int32_t x387 = INT32_MIN;
	static int64_t x388 = INT64_MAX;

	t96 = (((x385<x386)&x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	static int32_t x390 = -223736;
	int32_t x391 = INT32_MIN;
	static volatile int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -930;

	t97 = (((x389<x390)&x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int16_t x395 = 22;
	volatile uint32_t x396 = UINT32_MAX;
	volatile int32_t t98 = 25;

	t98 = (((x393<x394)&x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x398 = INT32_MIN;
	volatile int32_t x399 = INT32_MAX;
	volatile int32_t t99 = 12942956;

	t99 = (((x397<x398)&x399)<=x400);

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

