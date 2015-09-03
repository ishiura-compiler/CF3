#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = 13;
int64_t x12 = -1LL;
int64_t x13 = INT64_MIN;
volatile int32_t t3 = 1;
volatile int16_t x18 = -302;
int32_t t5 = 12425295;
int8_t x26 = INT8_MIN;
static int32_t x41 = INT32_MIN;
int32_t x45 = INT32_MAX;
uint16_t x51 = 444U;
int16_t x56 = INT16_MAX;
static volatile uint16_t x57 = 31779U;
static int32_t t13 = 4168919;
int32_t x70 = INT32_MAX;
uint64_t x75 = 13857455627500371LLU;
volatile int32_t t17 = -83635457;
volatile int64_t x83 = INT64_MAX;
static int8_t x86 = INT8_MIN;
volatile uint32_t x87 = UINT32_MAX;
static uint8_t x88 = 60U;
int32_t t20 = -135758;
uint64_t x94 = UINT64_MAX;
uint64_t x95 = UINT64_MAX;
uint16_t x96 = 4755U;
volatile int32_t t22 = 1566;
int32_t x97 = INT32_MAX;
int8_t x98 = INT8_MIN;
uint32_t x99 = 34274641U;
volatile int32_t x101 = 229;
uint8_t x103 = UINT8_MAX;
static volatile int32_t t24 = 888167159;
volatile uint16_t x105 = UINT16_MAX;
uint32_t x110 = UINT32_MAX;
int16_t x115 = 2653;
uint64_t x116 = UINT64_MAX;
volatile int32_t t27 = 96828144;
int32_t x121 = INT32_MAX;
static int32_t t29 = 58649;
volatile int8_t x129 = -1;
volatile uint16_t x132 = 5U;
volatile int32_t t31 = -1406;
static int8_t x136 = INT8_MAX;
uint8_t x137 = UINT8_MAX;
uint32_t x140 = UINT32_MAX;
int16_t x143 = 4984;
static int32_t x152 = INT32_MIN;
static volatile uint16_t x154 = UINT16_MAX;
static volatile int64_t x162 = 6381399060116220LL;
volatile uint16_t x169 = 0U;
volatile uint16_t x170 = 2U;
uint64_t x172 = UINT64_MAX;
volatile int32_t t42 = 52173161;
int32_t x184 = INT32_MAX;
volatile int32_t t43 = -1;
int32_t x186 = INT32_MAX;
int8_t x189 = INT8_MIN;
int16_t x192 = INT16_MIN;
int16_t x198 = INT16_MAX;
static int32_t t47 = -38254228;
uint8_t x207 = UINT8_MAX;
volatile int32_t t49 = -144020739;
volatile int32_t t50 = -4941157;
int32_t x220 = -1;
int64_t x221 = -1LL;
int16_t x230 = INT16_MIN;
int16_t x236 = INT16_MAX;
static int8_t x239 = INT8_MIN;
static int32_t x243 = INT32_MAX;
int16_t x265 = INT16_MIN;
int64_t x266 = INT64_MIN;
static int64_t x267 = INT64_MIN;
volatile uint64_t x280 = 1035251538351098660LLU;
int32_t x281 = 33624;
volatile int32_t t66 = -26400126;
uint8_t x287 = UINT8_MAX;
volatile int32_t t67 = 1;
int32_t x289 = INT32_MIN;
int64_t x290 = -1LL;
volatile int32_t t68 = -3784488;
static int64_t x293 = 0LL;
volatile uint8_t x295 = 58U;
int16_t x299 = -4;
volatile int8_t x301 = INT8_MIN;
int32_t t71 = -730095;
int8_t x313 = 1;
int8_t x321 = -1;
int16_t x322 = -103;
uint16_t x324 = 2102U;
int32_t x331 = INT32_MIN;
int64_t x343 = -1287011464250278LL;
int64_t x344 = -102510LL;
uint8_t x349 = 0U;
int32_t t84 = -2280467;
volatile int32_t t85 = -540195189;
int32_t x378 = INT32_MIN;
int32_t t90 = -764478753;
int64_t x385 = -3867LL;
int64_t x390 = -794934855022LL;
static int16_t x391 = INT16_MIN;
int32_t t92 = 884;
volatile int16_t x394 = INT16_MIN;
int16_t x403 = -1;
int16_t x407 = -1;
volatile int16_t x413 = -1;
int16_t x420 = INT16_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -1;
	int64_t x3 = -9LL;
	volatile int16_t x4 = 1;
	volatile int32_t t0 = 16313;

	t0 = (x1<((x2%x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -19893660;
	uint32_t x6 = 33882U;
	int8_t x7 = INT8_MAX;
	uint8_t x8 = 34U;
	volatile int32_t t1 = 159856382;

	t1 = (x5<((x6%x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	static uint64_t x11 = UINT64_MAX;
	int32_t t2 = -611896539;

	t2 = (x9<((x10%x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	static volatile uint8_t x15 = 1U;
	int64_t x16 = INT64_MIN;

	t3 = (x13<((x14%x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int64_t x19 = INT64_MIN;
	volatile int64_t x20 = INT64_MAX;
	static int32_t t4 = -7;

	t4 = (x17<((x18%x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int64_t x22 = INT64_MIN;
	int8_t x23 = -1;
	static uint8_t x24 = 0U;

	t5 = (x21<((x22%x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	static int8_t x27 = INT8_MAX;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = -47467136;

	t6 = (x25<((x26%x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -24953174258LL;
	int64_t x30 = INT64_MIN;
	static uint16_t x31 = UINT16_MAX;
	volatile int64_t x32 = -1LL;
	volatile int32_t t7 = -176;

	t7 = (x29<((x30%x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 3U;
	int8_t x38 = INT8_MIN;
	static volatile uint16_t x39 = 4155U;
	int64_t x40 = INT64_MIN;
	static volatile int32_t t8 = 3258991;

	t8 = (x37<((x38%x39)&x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x42 = -1LL;
	uint8_t x43 = 68U;
	static uint16_t x44 = UINT16_MAX;
	volatile int32_t t9 = -767;

	t9 = (x41<((x42%x43)&x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x46 = -10;
	int16_t x47 = INT16_MIN;
	int64_t x48 = INT64_MIN;
	static volatile int32_t t10 = -27085624;

	t10 = (x45<((x46%x47)&x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	static int16_t x50 = INT16_MIN;
	static uint8_t x52 = 6U;
	volatile int32_t t11 = 3556;

	t11 = (x49<((x50%x51)&x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 3171;
	volatile int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MAX;
	int32_t t12 = 5994;

	t12 = (x53<((x54%x55)&x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = 3353641245508LL;
	static int32_t x59 = INT32_MIN;
	int16_t x60 = -7958;

	t13 = (x57<((x58%x59)&x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MAX;
	int64_t x62 = -19251433054509909LL;
	volatile int32_t x63 = 29461000;
	int8_t x64 = 7;
	static int32_t t14 = 3061;

	t14 = (x61<((x62%x63)&x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int64_t x66 = INT64_MIN;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = -1;
	static volatile int32_t t15 = -373356431;

	t15 = (x65<((x66%x67)&x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 6427;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = INT16_MIN;
	int32_t t16 = 2494;

	t16 = (x69<((x70%x71)&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = UINT16_MAX;
	volatile uint16_t x74 = 397U;
	int32_t x76 = -119617;

	t17 = (x73<((x74%x75)&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = 1699LL;
	static int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MAX;
	volatile int32_t t18 = -6719255;

	t18 = (x77<((x78%x79)&x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = 32603010407036LLU;
	volatile uint64_t x82 = 14530258440LLU;
	uint16_t x84 = 235U;
	int32_t t19 = -106840;

	t19 = (x81<((x82%x83)&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;

	t20 = (x85<((x86%x87)&x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = INT32_MAX;
	static int16_t x90 = -1;
	static int16_t x91 = INT16_MIN;
	static uint64_t x92 = 549077LLU;
	volatile int32_t t21 = -3516;

	t21 = (x89<((x90%x91)&x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = 19958842482512LLU;

	t22 = (x93<((x94%x95)&x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x100 = UINT32_MAX;
	volatile int32_t t23 = 879;

	t23 = (x97<((x98%x99)&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = 680932301LLU;
	uint64_t x104 = 16825323236780642LLU;

	t24 = (x101<((x102%x103)&x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = 14;
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = 4804673;
	int32_t t25 = -1;

	t25 = (x105<((x106%x107)&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 112044228105441LLU;
	int32_t x111 = INT32_MIN;
	volatile int32_t x112 = -1;
	volatile int32_t t26 = 793506897;

	t26 = (x109<((x110%x111)&x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	int32_t x114 = INT32_MIN;

	t27 = (x113<((x114%x115)&x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static volatile int8_t x118 = 1;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -1;
	volatile int32_t t28 = -4848;

	t28 = (x117<((x118%x119)&x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x122 = INT64_MIN;
	static int16_t x123 = -1023;
	static volatile int16_t x124 = -1;

	t29 = (x121<((x122%x123)&x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 8231340U;
	uint64_t x126 = UINT64_MAX;
	int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	static int32_t t30 = -170928;

	t30 = (x125<((x126%x127)&x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x130 = 9U;
	int8_t x131 = -33;

	t31 = (x129<((x130%x131)&x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 51U;
	static int32_t x134 = -1;
	int16_t x135 = 820;
	int32_t t32 = -2;

	t32 = (x133<((x134%x135)&x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x138 = -1;
	uint8_t x139 = 1U;
	static int32_t t33 = -419791714;

	t33 = (x137<((x138%x139)&x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 127;

	t34 = (x141<((x142%x143)&x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = 0;
	int8_t x146 = INT8_MAX;
	volatile uint8_t x147 = 1U;
	int64_t x148 = -1LL;
	volatile int32_t t35 = -13923;

	t35 = (x145<((x146%x147)&x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -1;
	static volatile int64_t x150 = INT64_MAX;
	int32_t x151 = 4848;
	static volatile int32_t t36 = 1;

	t36 = (x149<((x150%x151)&x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 11624U;
	uint32_t x155 = 1320U;
	int32_t x156 = -4176652;
	volatile int32_t t37 = 97671266;

	t37 = (x153<((x154%x155)&x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 5U;
	static volatile int8_t x158 = INT8_MIN;
	uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = -1;
	volatile int32_t t38 = -3796;

	t38 = (x157<((x158%x159)&x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = INT16_MIN;
	uint16_t x163 = 294U;
	int16_t x164 = 2112;
	static volatile int32_t t39 = 110418;

	t39 = (x161<((x162%x163)&x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MAX;
	volatile int16_t x166 = INT16_MIN;
	int16_t x167 = 16335;
	volatile uint16_t x168 = 3U;
	volatile int32_t t40 = -2778;

	t40 = (x165<((x166%x167)&x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x171 = INT8_MIN;
	volatile int32_t t41 = -93490158;

	t41 = (x169<((x170%x171)&x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	static int16_t x178 = 9367;
	int8_t x179 = -1;
	static uint16_t x180 = 21U;

	t42 = (x177<((x178%x179)&x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 3945U;

	t43 = (x181<((x182%x183)&x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MAX;
	int32_t x187 = INT32_MIN;
	uint8_t x188 = 0U;
	static int32_t t44 = -894;

	t44 = (x185<((x186%x187)&x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = 12183;
	uint32_t x191 = 60696U;
	static volatile int32_t t45 = -10;

	t45 = (x189<((x190%x191)&x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	int8_t x194 = -1;
	static int64_t x195 = INT64_MAX;
	static uint32_t x196 = UINT32_MAX;
	int32_t t46 = -8626;

	t46 = (x193<((x194%x195)&x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = -1;
	uint16_t x199 = UINT16_MAX;
	uint16_t x200 = 0U;

	t47 = (x197<((x198%x199)&x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile uint16_t x206 = UINT16_MAX;
	uint8_t x208 = 120U;
	int32_t t48 = -3889109;

	t48 = (x205<((x206%x207)&x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = 1U;
	uint16_t x211 = 2390U;
	int64_t x212 = INT64_MIN;

	t49 = (x209<((x210%x211)&x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = 254340794U;
	int64_t x214 = 1LL;
	volatile int64_t x215 = 45525082653476LL;
	int8_t x216 = -2;

	t50 = (x213<((x214%x215)&x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = INT8_MIN;
	uint32_t x218 = 219569U;
	int8_t x219 = -1;
	int32_t t51 = 20014;

	t51 = (x217<((x218%x219)&x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x222 = INT64_MAX;
	int16_t x223 = -1;
	int16_t x224 = INT16_MAX;
	int32_t t52 = 7;

	t52 = (x221<((x222%x223)&x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = 0;
	int32_t x226 = INT32_MAX;
	volatile int16_t x227 = -22;
	int64_t x228 = INT64_MIN;
	volatile int32_t t53 = -323980487;

	t53 = (x225<((x226%x227)&x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = 3;
	int16_t x231 = INT16_MIN;
	int64_t x232 = -460595LL;
	int32_t t54 = -884242652;

	t54 = (x229<((x230%x231)&x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x233 = 6;
	volatile int16_t x234 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t t55 = -863;

	t55 = (x233<((x234%x235)&x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	volatile uint16_t x238 = UINT16_MAX;
	uint8_t x240 = 8U;
	volatile int32_t t56 = 1;

	t56 = (x237<((x238%x239)&x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MIN;
	static int16_t x242 = INT16_MAX;
	uint16_t x244 = 119U;
	volatile int32_t t57 = 381109271;

	t57 = (x241<((x242%x243)&x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -82;
	static volatile uint16_t x246 = 94U;
	static uint32_t x247 = 24076990U;
	volatile int16_t x248 = INT16_MAX;
	volatile int32_t t58 = 954;

	t58 = (x245<((x246%x247)&x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = UINT16_MAX;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = -23073932;
	static int64_t x252 = INT64_MIN;
	int32_t t59 = 8146047;

	t59 = (x249<((x250%x251)&x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MAX;
	int8_t x254 = 1;
	int32_t x255 = -258095;
	static uint8_t x256 = UINT8_MAX;
	static int32_t t60 = -3;

	t60 = (x253<((x254%x255)&x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x258 = 161U;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t61 = 14;

	t61 = (x257<((x258%x259)&x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x261 = 0LLU;
	uint32_t x262 = 9516U;
	int64_t x263 = -1LL;
	int32_t x264 = 8473797;
	static int32_t t62 = -4571396;

	t62 = (x261<((x262%x263)&x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x268 = 12U;
	volatile int32_t t63 = 778261057;

	t63 = (x265<((x266%x267)&x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = 1008U;
	uint8_t x274 = 3U;
	uint64_t x275 = UINT64_MAX;
	static int64_t x276 = -4816573640395593LL;
	volatile int32_t t64 = -2387;

	t64 = (x273<((x274%x275)&x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	static uint32_t x278 = UINT32_MAX;
	int16_t x279 = -7171;
	int32_t t65 = 30772596;

	t65 = (x277<((x278%x279)&x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x282 = 121789165;
	int8_t x283 = INT8_MIN;
	int32_t x284 = 121547;

	t66 = (x281<((x282%x283)&x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = INT16_MIN;
	volatile uint16_t x288 = 363U;

	t67 = (x285<((x286%x287)&x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x291 = UINT32_MAX;
	volatile uint64_t x292 = 6503475595007878LLU;

	t68 = (x289<((x290%x291)&x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x294 = 1;
	uint8_t x296 = 2U;
	int32_t t69 = 14;

	t69 = (x293<((x294%x295)&x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	int16_t x300 = -1;
	int32_t t70 = 254284474;

	t70 = (x297<((x298%x299)&x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x302 = -1;
	int8_t x303 = 1;
	static int64_t x304 = -3374799LL;

	t71 = (x301<((x302%x303)&x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -1;
	int64_t x306 = INT64_MAX;
	uint16_t x307 = 5U;
	uint8_t x308 = 0U;
	static volatile int32_t t72 = 234;

	t72 = (x305<((x306%x307)&x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = 635474;
	uint64_t x310 = UINT64_MAX;
	volatile uint64_t x311 = 40233427938428LLU;
	int64_t x312 = -1LL;
	static int32_t t73 = -11671818;

	t73 = (x309<((x310%x311)&x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x314 = 32U;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MAX;
	int32_t t74 = -207453;

	t74 = (x313<((x314%x315)&x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 123;
	int32_t x318 = 106849781;
	volatile int16_t x319 = INT16_MIN;
	static uint32_t x320 = 1588U;
	int32_t t75 = -15359;

	t75 = (x317<((x318%x319)&x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x323 = UINT32_MAX;
	int32_t t76 = 0;

	t76 = (x321<((x322%x323)&x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = 1;
	int64_t x328 = 812788364LL;
	static volatile int32_t t77 = 131868272;

	t77 = (x325<((x326%x327)&x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x329 = INT64_MIN;
	uint16_t x330 = UINT16_MAX;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t78 = -71693211;

	t78 = (x329<((x330%x331)&x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = 6119U;
	uint32_t x338 = UINT32_MAX;
	uint32_t x339 = 1818818U;
	int32_t x340 = INT32_MIN;
	int32_t t79 = -11;

	t79 = (x337<((x338%x339)&x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x341 = 1329LL;
	volatile int16_t x342 = INT16_MAX;
	int32_t t80 = 61931786;

	t80 = (x341<((x342%x343)&x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x345 = INT64_MIN;
	static volatile int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	int16_t x348 = -1;
	volatile int32_t t81 = 7;

	t81 = (x345<((x346%x347)&x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x350 = INT16_MIN;
	static int32_t x351 = -52147811;
	int16_t x352 = 0;
	int32_t t82 = 622802303;

	t82 = (x349<((x350%x351)&x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x353 = 525212553LLU;
	volatile int32_t x354 = INT32_MAX;
	int32_t x355 = -1;
	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t83 = -26047253;

	t83 = (x353<((x354%x355)&x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x357 = 1U;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = -667370;
	static uint64_t x360 = 189573823026LLU;

	t84 = (x357<((x358%x359)&x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 31U;
	uint8_t x362 = 6U;
	static int8_t x363 = INT8_MIN;
	volatile int64_t x364 = -3880539226591953LL;

	t85 = (x361<((x362%x363)&x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x365 = INT16_MIN;
	uint64_t x366 = 1278471269315858LLU;
	static int32_t x367 = INT32_MIN;
	int32_t x368 = -1;
	volatile int32_t t86 = 344;

	t86 = (x365<((x366%x367)&x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MAX;
	int16_t x370 = -1;
	int16_t x371 = -1;
	static volatile uint64_t x372 = 66397721LLU;
	int32_t t87 = 2055;

	t87 = (x369<((x370%x371)&x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = 66;
	volatile int16_t x374 = 403;
	int64_t x375 = -1718LL;
	int16_t x376 = -97;
	int32_t t88 = 0;

	t88 = (x373<((x374%x375)&x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = 7836;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = -1;
	volatile int32_t t89 = -1463;

	t89 = (x377<((x378%x379)&x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x381 = 227U;
	volatile int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = UINT16_MAX;

	t90 = (x381<((x382%x383)&x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x386 = 860839079LL;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = -1;
	volatile int32_t t91 = 5;

	t91 = (x385<((x386%x387)&x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MIN;
	uint16_t x392 = 669U;

	t92 = (x389<((x390%x391)&x392));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -1;
	int16_t x395 = INT16_MIN;
	volatile int64_t x396 = INT64_MIN;
	static volatile int32_t t93 = -1640;

	t93 = (x393<((x394%x395)&x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = 1U;
	static uint32_t x398 = UINT32_MAX;
	volatile int64_t x399 = 6840710324431LL;
	int16_t x400 = INT16_MAX;
	static int32_t t94 = -150850391;

	t94 = (x397<((x398%x399)&x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 24149672U;
	static int16_t x402 = -1;
	volatile int64_t x404 = INT64_MIN;
	volatile int32_t t95 = -3688;

	t95 = (x401<((x402%x403)&x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = 13776;
	int8_t x406 = INT8_MIN;
	volatile int32_t x408 = INT32_MIN;
	int32_t t96 = -114451776;

	t96 = (x405<((x406%x407)&x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x409 = -1;
	int8_t x410 = -1;
	int32_t x411 = INT32_MIN;
	volatile int32_t x412 = -1;
	int32_t t97 = 3635648;

	t97 = (x409<((x410%x411)&x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x414 = UINT8_MAX;
	volatile int16_t x415 = -2742;
	int8_t x416 = 1;
	int32_t t98 = -408675451;

	t98 = (x413<((x414%x415)&x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = INT16_MAX;
	uint32_t x418 = 502U;
	static int16_t x419 = -1;
	int32_t t99 = -3;

	t99 = (x417<((x418%x419)&x420));

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

