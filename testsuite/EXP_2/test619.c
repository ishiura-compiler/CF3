#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
volatile int32_t t1 = -322;
int16_t x9 = INT16_MIN;
int8_t x10 = -1;
uint32_t x12 = 253U;
uint16_t x13 = 165U;
uint64_t x14 = 49LLU;
uint8_t x15 = UINT8_MAX;
volatile uint64_t x17 = UINT64_MAX;
int16_t x21 = 105;
int16_t x32 = -40;
uint64_t x33 = 3746LLU;
static int16_t x34 = INT16_MAX;
int16_t x36 = -1294;
uint32_t x40 = 997073992U;
static uint32_t x46 = 47U;
uint16_t x48 = 0U;
uint32_t x52 = 2263U;
volatile int32_t t14 = 7156718;
static int16_t x62 = INT16_MIN;
static int64_t x67 = INT64_MIN;
volatile int32_t t16 = -6616;
uint8_t x74 = 19U;
int32_t x85 = 27655592;
int64_t x93 = -1LL;
volatile int32_t t22 = -2044819;
int64_t x100 = 3644LL;
int8_t x101 = INT8_MAX;
uint64_t x102 = 3888101LLU;
volatile int32_t t25 = 251058;
uint8_t x109 = UINT8_MAX;
int16_t x113 = INT16_MAX;
static uint16_t x125 = UINT16_MAX;
int16_t x127 = INT16_MAX;
volatile int32_t t31 = -18329359;
int32_t x134 = INT32_MIN;
int16_t x136 = 3755;
uint64_t x140 = 2451LLU;
uint32_t x141 = UINT32_MAX;
uint64_t x146 = 171101LLU;
static int32_t t36 = -99;
static int8_t x154 = INT8_MIN;
static int16_t x156 = 3067;
static int32_t x161 = INT32_MIN;
static uint16_t x162 = 28U;
int8_t x169 = INT8_MIN;
int16_t x172 = INT16_MAX;
int8_t x177 = INT8_MAX;
static volatile int32_t t44 = -7921;
int8_t x189 = -51;
uint16_t x191 = UINT16_MAX;
int8_t x192 = 8;
volatile int32_t t46 = -2131007;
volatile uint64_t x193 = UINT64_MAX;
static uint64_t x196 = 15850648LLU;
uint32_t x199 = 6U;
volatile int8_t x203 = INT8_MAX;
int32_t x206 = INT32_MIN;
static int64_t x207 = -1LL;
int8_t x208 = INT8_MIN;
int64_t x209 = INT64_MIN;
static int64_t x210 = -765576421197LL;
static volatile int32_t t53 = 1;
int8_t x225 = INT8_MAX;
int8_t x226 = INT8_MIN;
static int16_t x228 = INT16_MIN;
volatile int64_t x234 = INT64_MIN;
static volatile int64_t x242 = INT64_MAX;
int64_t x243 = INT64_MAX;
volatile uint64_t x245 = UINT64_MAX;
int8_t x246 = 1;
volatile uint8_t x252 = UINT8_MAX;
int8_t x254 = -6;
static int8_t x263 = -9;
static int64_t x269 = INT64_MIN;
uint16_t x274 = 0U;
int64_t x275 = -940652805315421LL;
volatile int32_t t68 = -9;
uint64_t x282 = UINT64_MAX;
int32_t x284 = -1159457;
int64_t x285 = -1LL;
static volatile int32_t t70 = 24705;
volatile int64_t x293 = -1LL;
int16_t x296 = -1;
int64_t x299 = -1LL;
static int32_t x303 = 2100;
int32_t x304 = INT32_MAX;
volatile int32_t t74 = 119;
uint64_t x307 = UINT64_MAX;
int16_t x309 = -363;
uint16_t x312 = 3036U;
volatile int64_t x317 = 142104LL;
int32_t x327 = INT32_MIN;
static int32_t x334 = -55603665;
static int32_t x339 = INT32_MIN;
uint32_t x344 = UINT32_MAX;
int8_t x346 = -1;
int32_t t85 = 265;
int8_t x354 = INT8_MIN;
volatile int8_t x359 = -1;
volatile int8_t x366 = INT8_MIN;
volatile int32_t x369 = 27958;
static uint32_t x370 = 31U;
int32_t x371 = INT32_MIN;
uint8_t x373 = 0U;
volatile uint8_t x378 = 2U;
volatile uint8_t x384 = UINT8_MAX;
int32_t x385 = INT32_MIN;
int8_t x387 = -1;
static uint32_t x388 = 27848010U;
volatile int32_t x391 = -582703028;
static volatile uint32_t x392 = 454044U;
uint8_t x396 = 16U;
int32_t t98 = 55218;
int16_t x404 = 2;
static int32_t t99 = -41718254;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = 23416252661063LL;
	int64_t x3 = INT64_MIN;
	static uint64_t x4 = UINT64_MAX;
	int32_t t0 = -199;

	t0 = ((x1<(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 42U;
	int8_t x6 = INT8_MAX;
	static int8_t x8 = 10;

	t1 = ((x5<(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = 17;
	int32_t t2 = -17302867;

	t2 = ((x9<(x10/x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x16 = INT8_MAX;
	int32_t t3 = -13879;

	t3 = ((x13<(x14/x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 80U;
	static volatile int16_t x19 = -1;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = 29573392;

	t4 = ((x17<(x18/x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 7266355LL;
	int64_t x23 = -1LL;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 11184;

	t5 = ((x21<(x22/x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -293;
	static int64_t x26 = INT64_MIN;
	int64_t x27 = 224316798LL;
	int16_t x28 = -37;
	int32_t t6 = -78;

	t6 = ((x25<(x26/x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 3U;
	volatile int64_t x30 = -1LL;
	static int32_t x31 = INT32_MAX;
	int32_t t7 = 0;

	t7 = ((x29<(x30/x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x35 = 735876540LLU;
	int32_t t8 = 11933205;

	t8 = ((x33<(x34/x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -26946367571268LL;
	static volatile uint64_t x38 = UINT64_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	volatile int32_t t9 = 39270628;

	t9 = ((x37<(x38/x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = 0;
	int16_t x43 = -1;
	int64_t x44 = 17676008978LL;
	volatile int32_t t10 = 3209;

	t10 = ((x41<(x42/x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 3;
	volatile int64_t x47 = INT64_MAX;
	volatile int32_t t11 = -3680;

	t11 = ((x45<(x46/x47))==x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 0U;
	uint32_t x50 = UINT32_MAX;
	uint16_t x51 = UINT16_MAX;
	static int32_t t12 = 2366577;

	t12 = ((x49<(x50/x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 19U;
	uint16_t x54 = UINT16_MAX;
	volatile int32_t x55 = 378001;
	static int64_t x56 = INT64_MIN;
	int32_t t13 = 11;

	t13 = ((x53<(x54/x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = 267051712LL;
	volatile uint16_t x60 = 10U;

	t14 = ((x57<(x58/x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	int8_t x64 = 7;
	int32_t t15 = -5915;

	t15 = ((x61<(x62/x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = INT32_MIN;
	static uint16_t x66 = 2U;
	uint32_t x68 = UINT32_MAX;

	t16 = ((x65<(x66/x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x69 = UINT8_MAX;
	int32_t x70 = -199;
	static uint32_t x71 = UINT32_MAX;
	uint8_t x72 = 13U;
	volatile int32_t t17 = -1;

	t17 = ((x69<(x70/x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint64_t x75 = 9478LLU;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -15598993;

	t18 = ((x73<(x74/x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = 4U;
	static int32_t x83 = INT32_MAX;
	int16_t x84 = 31;
	int32_t t19 = 19728;

	t19 = ((x81<(x82/x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MIN;
	static int32_t x87 = -1;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t20 = 1709;

	t20 = ((x85<(x86/x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MIN;
	volatile int8_t x91 = INT8_MIN;
	uint32_t x92 = 4U;
	static int32_t t21 = -35;

	t21 = ((x89<(x90/x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MIN;
	uint32_t x95 = 1711U;
	volatile int16_t x96 = INT16_MIN;

	t22 = ((x93<(x94/x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -19;
	static uint32_t x98 = 1367U;
	int16_t x99 = INT16_MIN;
	static int32_t t23 = -6264;

	t23 = ((x97<(x98/x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x103 = 993U;
	int32_t x104 = INT32_MIN;
	int32_t t24 = 5;

	t24 = ((x101<(x102/x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	volatile uint64_t x106 = 1023150LLU;
	int16_t x107 = -1;
	static int16_t x108 = INT16_MAX;

	t25 = ((x105<(x106/x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x110 = UINT32_MAX;
	int8_t x111 = -1;
	int64_t x112 = INT64_MIN;
	volatile int32_t t26 = 77475245;

	t26 = ((x109<(x110/x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x114 = INT32_MIN;
	int16_t x115 = 1;
	volatile int32_t x116 = -21619;
	static volatile int32_t t27 = -56;

	t27 = ((x113<(x114/x115))==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -4;
	int16_t x118 = INT16_MAX;
	int64_t x119 = -11751372664856669LL;
	int8_t x120 = -2;
	static int32_t t28 = -4;

	t28 = ((x117<(x118/x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	volatile int8_t x122 = INT8_MIN;
	volatile uint16_t x123 = 1238U;
	int32_t x124 = 6346;
	volatile int32_t t29 = -1041861402;

	t29 = ((x121<(x122/x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x126 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t30 = 121;

	t30 = ((x125<(x126/x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = 0;
	static uint32_t x130 = 14U;
	uint16_t x131 = 8U;
	int8_t x132 = -1;

	t31 = ((x129<(x130/x131))==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x135 = INT16_MIN;
	int32_t t32 = 3;

	t32 = ((x133<(x134/x135))==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	volatile uint32_t x138 = 30707213U;
	uint16_t x139 = UINT16_MAX;
	static int32_t t33 = 5211;

	t33 = ((x137<(x138/x139))==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x142 = 692LLU;
	int8_t x143 = 1;
	volatile uint16_t x144 = 10725U;
	int32_t t34 = 0;

	t34 = ((x141<(x142/x143))==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	uint16_t x147 = 61U;
	int16_t x148 = 3;
	int32_t t35 = 409055;

	t35 = ((x145<(x146/x147))==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 1;
	int32_t x150 = INT32_MIN;
	volatile int64_t x151 = 578606075LL;
	int16_t x152 = INT16_MIN;

	t36 = ((x149<(x150/x151))==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	static int8_t x155 = INT8_MIN;
	int32_t t37 = 209649;

	t37 = ((x153<(x154/x155))==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = -1;
	int32_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;
	int32_t t38 = 1035678;

	t38 = ((x157<(x158/x159))==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x163 = INT32_MIN;
	int16_t x164 = -10677;
	int32_t t39 = -907220610;

	t39 = ((x161<(x162/x163))==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MAX;
	volatile int16_t x166 = 1267;
	volatile int32_t x167 = -2424;
	volatile int8_t x168 = INT8_MIN;
	static volatile int32_t t40 = -122;

	t40 = ((x165<(x166/x167))==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = -1522745953343676394LL;
	volatile int8_t x171 = -60;
	volatile int32_t t41 = -163;

	t41 = ((x169<(x170/x171))==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MAX;
	volatile int16_t x174 = -1;
	volatile int32_t x175 = 1;
	uint8_t x176 = 1U;
	static volatile int32_t t42 = 2490;

	t42 = ((x173<(x174/x175))==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x178 = UINT8_MAX;
	volatile int64_t x179 = INT64_MAX;
	int64_t x180 = -1LL;
	int32_t t43 = -979385884;

	t43 = ((x177<(x178/x179))==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -1;
	static int16_t x184 = 8049;

	t44 = ((x181<(x182/x183))==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = 0;
	static volatile int64_t x186 = INT64_MAX;
	uint64_t x187 = UINT64_MAX;
	static int32_t x188 = 1803;
	static volatile int32_t t45 = -28171494;

	t45 = ((x185<(x186/x187))==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x190 = 3585;

	t46 = ((x189<(x190/x191))==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x194 = 800LLU;
	int64_t x195 = INT64_MAX;
	int32_t t47 = -614614;

	t47 = ((x193<(x194/x195))==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x197 = 6564U;
	int32_t x198 = INT32_MAX;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t48 = 14194870;

	t48 = ((x197<(x198/x199))==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = 22LL;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t49 = -31;

	t49 = ((x201<(x202/x203))==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t t50 = -421400023;

	t50 = ((x205<(x206/x207))==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x211 = 7U;
	uint8_t x212 = 61U;
	volatile int32_t t51 = 1841;

	t51 = ((x209<(x210/x211))==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 87LLU;
	static int8_t x214 = INT8_MIN;
	static volatile int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MIN;
	int32_t t52 = 210;

	t52 = ((x213<(x214/x215))==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 234035LLU;
	volatile uint16_t x218 = 44U;
	uint32_t x219 = 51553U;
	uint64_t x220 = UINT64_MAX;

	t53 = ((x217<(x218/x219))==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -275;
	uint32_t x222 = 0U;
	int32_t x223 = -1;
	volatile uint16_t x224 = UINT16_MAX;
	static volatile int32_t t54 = 0;

	t54 = ((x221<(x222/x223))==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x227 = -2;
	static int32_t t55 = 15;

	t55 = ((x225<(x226/x227))==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -186995505;
	volatile int64_t x230 = -2182LL;
	int8_t x231 = 43;
	volatile int32_t x232 = INT32_MIN;
	int32_t t56 = 812865988;

	t56 = ((x229<(x230/x231))==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = UINT64_MAX;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 51912U;
	volatile int32_t t57 = -39462;

	t57 = ((x233<(x234/x235))==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x237 = 12U;
	int64_t x238 = INT64_MAX;
	volatile int64_t x239 = -1LL;
	static uint16_t x240 = 13U;
	int32_t t58 = -102305214;

	t58 = ((x237<(x238/x239))==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x241 = UINT64_MAX;
	static uint64_t x244 = 189700LLU;
	int32_t t59 = 64426;

	t59 = ((x241<(x242/x243))==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x247 = INT64_MAX;
	volatile int64_t x248 = -13LL;
	volatile int32_t t60 = 531620480;

	t60 = ((x245<(x246/x247))==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = 0;
	uint32_t x250 = 265259087U;
	int8_t x251 = -1;
	volatile int32_t t61 = -441670417;

	t61 = ((x249<(x250/x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = INT16_MAX;
	volatile int8_t x255 = INT8_MIN;
	uint16_t x256 = 842U;
	static int32_t t62 = -12;

	t62 = ((x253<(x254/x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MAX;
	uint32_t x259 = 406846U;
	volatile int64_t x260 = -1LL;
	volatile int32_t t63 = 137617371;

	t63 = ((x257<(x258/x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = 3;
	int8_t x262 = 2;
	static int32_t x264 = INT32_MIN;
	volatile int32_t t64 = -9290231;

	t64 = ((x261<(x262/x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = 32582;
	volatile uint64_t x267 = 1053420649191842820LLU;
	int64_t x268 = -1557403220644LL;
	int32_t t65 = 22;

	t65 = ((x265<(x266/x267))==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x270 = 44U;
	int16_t x271 = INT16_MIN;
	int8_t x272 = 0;
	int32_t t66 = 1;

	t66 = ((x269<(x270/x271))==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x276 = 0U;
	volatile int32_t t67 = -524307888;

	t67 = ((x273<(x274/x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = 3943U;
	volatile int8_t x278 = INT8_MIN;
	int8_t x279 = -1;
	uint8_t x280 = 0U;

	t68 = ((x277<(x278/x279))==x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -2035;
	int32_t x283 = INT32_MIN;
	int32_t t69 = -7110;

	t69 = ((x281<(x282/x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x286 = 1971U;
	volatile uint64_t x287 = 358591LLU;
	int32_t x288 = INT32_MIN;

	t70 = ((x285<(x286/x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = 2151139;
	uint8_t x290 = UINT8_MAX;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = -1LL;
	int32_t t71 = 3;

	t71 = ((x289<(x290/x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x294 = 210U;
	uint8_t x295 = 3U;
	int32_t t72 = -3285902;

	t72 = ((x293<(x294/x295))==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 18U;
	uint16_t x300 = 735U;
	static int32_t t73 = 430448;

	t73 = ((x297<(x298/x299))==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x301 = 442U;
	int16_t x302 = INT16_MIN;

	t74 = ((x301<(x302/x303))==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MAX;
	volatile uint64_t x306 = 544387068928656904LLU;
	volatile uint32_t x308 = 18453U;
	int32_t t75 = 1242836;

	t75 = ((x305<(x306/x307))==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x310 = UINT64_MAX;
	int16_t x311 = INT16_MIN;
	volatile int32_t t76 = 5006679;

	t76 = ((x309<(x310/x311))==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = 323389959846374LL;
	static volatile int64_t x316 = INT64_MAX;
	volatile int32_t t77 = -2974788;

	t77 = ((x313<(x314/x315))==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x318 = -1;
	static int64_t x319 = INT64_MIN;
	volatile int64_t x320 = 1625673742544751285LL;
	volatile int32_t t78 = -1677542;

	t78 = ((x317<(x318/x319))==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x321 = INT16_MIN;
	uint8_t x322 = 3U;
	volatile int32_t x323 = -1;
	static int8_t x324 = 0;
	volatile int32_t t79 = 903746;

	t79 = ((x321<(x322/x323))==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = -1;
	int32_t x328 = 24775319;
	volatile int32_t t80 = 4060;

	t80 = ((x325<(x326/x327))==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x329 = INT16_MIN;
	uint16_t x330 = 4625U;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = UINT64_MAX;
	static int32_t t81 = 154;

	t81 = ((x329<(x330/x331))==x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x335 = 12U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t82 = 4625;

	t82 = ((x333<(x334/x335))==x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = -1;
	static int64_t x338 = INT64_MIN;
	int32_t x340 = 60;
	volatile int32_t t83 = -76108;

	t83 = ((x337<(x338/x339))==x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = INT64_MAX;
	uint16_t x342 = UINT16_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	volatile int32_t t84 = -14;

	t84 = ((x341<(x342/x343))==x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = -62;
	static uint16_t x347 = 2U;
	int8_t x348 = 8;

	t85 = ((x345<(x346/x347))==x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x349 = -1169;
	volatile uint64_t x350 = 10137LLU;
	static uint32_t x351 = UINT32_MAX;
	int64_t x352 = -1LL;
	volatile int32_t t86 = 832962440;

	t86 = ((x349<(x350/x351))==x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = 25;
	int32_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x353<(x354/x355))==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x357 = 27695U;
	int16_t x358 = -1;
	int32_t x360 = -155;
	volatile int32_t t88 = 1582082;

	t88 = ((x357<(x358/x359))==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -50LL;
	int64_t x362 = INT64_MIN;
	int16_t x363 = 2922;
	static volatile uint32_t x364 = 2U;
	volatile int32_t t89 = -62911;

	t89 = ((x361<(x362/x363))==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x365 = UINT64_MAX;
	uint16_t x367 = 665U;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t90 = -71;

	t90 = ((x365<(x366/x367))==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x372 = 18697U;
	int32_t t91 = -304;

	t91 = ((x369<(x370/x371))==x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x374 = 0;
	uint16_t x375 = 295U;
	uint16_t x376 = 14U;
	int32_t t92 = 7585;

	t92 = ((x373<(x374/x375))==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x377 = INT64_MAX;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -46;
	volatile int32_t t93 = -42;

	t93 = ((x377<(x378/x379))==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x381 = -1;
	int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MAX;
	int32_t t94 = 6617255;

	t94 = ((x381<(x382/x383))==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x386 = 1U;
	volatile int32_t t95 = 49;

	t95 = ((x385<(x386/x387))==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 1U;
	uint32_t x390 = 65U;
	static int32_t t96 = -83239;

	t96 = ((x389<(x390/x391))==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = 3;
	int32_t x394 = 549;
	volatile int32_t x395 = 623556909;
	int32_t t97 = -383754;

	t97 = ((x393<(x394/x395))==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x397 = 413U;
	volatile uint8_t x398 = UINT8_MAX;
	uint8_t x399 = UINT8_MAX;
	int16_t x400 = -1;

	t98 = ((x397<(x398/x399))==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x401 = INT32_MIN;
	static int64_t x402 = -1LL;
	int8_t x403 = -5;

	t99 = ((x401<(x402/x403))==x404);

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

