#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 124054U;
volatile int8_t x12 = INT8_MAX;
volatile int8_t x17 = INT8_MAX;
volatile int16_t x18 = INT16_MIN;
int32_t t5 = -743900490;
int32_t x27 = -1;
uint32_t x30 = 220562U;
uint16_t x32 = 26U;
int32_t x45 = 1271005;
uint16_t x50 = 11U;
int64_t x52 = INT64_MIN;
volatile uint8_t x58 = UINT8_MAX;
volatile uint32_t t14 = 1914U;
volatile int16_t x67 = 1;
static int16_t x77 = -1777;
int64_t x83 = INT64_MIN;
uint8_t x86 = 2U;
volatile int16_t x92 = -1;
int16_t x93 = INT16_MIN;
static volatile uint64_t x101 = UINT64_MAX;
static uint32_t x108 = 18741818U;
uint32_t x112 = 5066U;
volatile uint32_t x114 = 7425846U;
volatile uint16_t x126 = 3257U;
static volatile uint64_t x132 = UINT64_MAX;
volatile uint64_t t32 = UINT64_MAX;
uint8_t x138 = 1U;
int64_t x140 = INT64_MIN;
volatile int8_t x143 = INT8_MIN;
volatile int32_t t35 = 19;
static uint32_t x152 = 1012946162U;
volatile uint32_t x160 = 0U;
uint32_t t38 = 5U;
int32_t x167 = INT32_MAX;
int32_t x168 = INT32_MIN;
static int8_t x172 = -1;
int64_t x174 = INT64_MIN;
uint16_t x175 = 1119U;
int16_t x178 = INT16_MIN;
int16_t x179 = INT16_MIN;
volatile int32_t x182 = -601;
uint32_t x184 = 435U;
volatile uint32_t t44 = 7272U;
int8_t x185 = INT8_MAX;
int64_t x189 = -22857661932939880LL;
int16_t x191 = INT16_MIN;
int16_t x209 = 81;
volatile int32_t x210 = INT32_MIN;
static int32_t t51 = 12104170;
int8_t x213 = -1;
int8_t x217 = -5;
static int16_t x224 = INT16_MIN;
volatile int32_t t54 = 32;
uint64_t x227 = UINT64_MAX;
static uint16_t x228 = 5U;
volatile uint64_t x229 = UINT64_MAX;
int32_t x234 = INT32_MAX;
int64_t x235 = -1LL;
int16_t x239 = INT16_MAX;
static uint64_t x249 = 14LLU;
static volatile int32_t x259 = INT32_MIN;
volatile int32_t t63 = -4946;
int8_t x275 = -1;
int16_t x292 = 245;
volatile uint16_t x293 = UINT16_MAX;
int64_t x294 = -1LL;
static int16_t x298 = -2099;
int64_t x312 = 22436LL;
static volatile int8_t x314 = 28;
volatile int32_t t77 = -7386594;
volatile uint32_t x321 = 1187U;
uint32_t x327 = UINT32_MAX;
int8_t x331 = INT8_MIN;
volatile int64_t x340 = INT64_MIN;
volatile int32_t t83 = -14;
int32_t t84 = -23623;
int32_t t86 = -534165;
uint8_t x363 = 15U;
static uint32_t x364 = UINT32_MAX;
int32_t x365 = INT32_MAX;
int32_t x370 = -1;
int16_t x372 = 24;
int32_t t89 = 628187427;
static int64_t t91 = -66117631146731259LL;
int64_t x383 = INT64_MIN;
int64_t x385 = 369835430810985LL;
int32_t x386 = -1;
static int16_t x390 = 1084;
int64_t x395 = INT64_MIN;
int32_t x404 = -18302;
static int32_t t97 = -40904;
volatile int16_t x405 = INT16_MIN;
uint64_t x406 = 15497538503LLU;
static int16_t x409 = INT16_MAX;


void f0(void) {
	volatile int64_t x1 = 7LL;
	int8_t x3 = INT8_MIN;
	static uint16_t x4 = UINT16_MAX;
	static int32_t t0 = -10983462;

	t0 = ((x1<(x2/x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MAX;
	static int8_t x7 = INT8_MIN;
	static uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -129;

	t1 = ((x5<(x6/x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MAX;
	int32_t t2 = -1;

	t2 = ((x9<(x10/x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	static uint16_t x14 = 0U;
	volatile uint32_t x15 = UINT32_MAX;
	static volatile int64_t x16 = -105937166690LL;
	volatile int64_t t3 = 0LL;

	t3 = ((x13<(x14/x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x19 = UINT8_MAX;
	int16_t x20 = -1;
	volatile int32_t t4 = 611577758;

	t4 = ((x17<(x18/x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 8;
	uint16_t x22 = UINT16_MAX;
	int32_t x23 = -1;
	static uint8_t x24 = 2U;

	t5 = ((x21<(x22/x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MIN;
	volatile uint32_t x28 = 12U;
	uint32_t t6 = 52529U;

	t6 = ((x25<(x26/x27))*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static int64_t x31 = 2587118842094454LL;
	int32_t t7 = -67811;

	t7 = ((x29<(x30/x31))*x32);

	if (t7 != 26) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	uint32_t x35 = 349657U;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 524916973;

	t8 = ((x33<(x34/x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x37<(x38/x39))*x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 0;
	int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	volatile uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 4560U;

	t10 = ((x41<(x42/x43))*x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = INT64_MIN;
	volatile int64_t x48 = -1LL;
	volatile int64_t t11 = -443504LL;

	t11 = ((x45<(x46/x47))*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	int64_t t12 = -6587769LL;

	t12 = ((x49<(x50/x51))*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	int32_t x54 = INT32_MIN;
	static volatile uint16_t x55 = 209U;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -154836;

	t13 = ((x53<(x54/x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -133346844;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 1742325U;

	t14 = ((x57<(x58/x59))*x60);

	if (t14 != 1742325U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = UINT64_MAX;
	uint32_t x63 = UINT32_MAX;
	static uint64_t x64 = 176671827516621LLU;
	uint64_t t15 = 16544251977LLU;

	t15 = ((x61<(x62/x63))*x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = 27616;
	int32_t x68 = 17086945;
	int32_t t16 = 210825918;

	t16 = ((x65<(x66/x67))*x68);

	if (t16 != 17086945) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x71 = 98;
	static uint32_t x72 = 3690U;
	volatile uint32_t t17 = 3438U;

	t17 = ((x69<(x70/x71))*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MAX;
	int32_t x74 = -244596571;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = ((x73<(x74/x75))*x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = INT16_MAX;
	volatile uint32_t x79 = 20493056U;
	volatile uint8_t x80 = 55U;
	volatile int32_t t19 = 5794492;

	t19 = ((x77<(x78/x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	volatile int64_t x82 = INT64_MIN;
	volatile int32_t x84 = 594067;
	int32_t t20 = 152;

	t20 = ((x81<(x82/x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int32_t x87 = -249157410;
	uint64_t x88 = 676688497LLU;
	uint64_t t21 = 8297948247172LLU;

	t21 = ((x85<(x86/x87))*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -6295254;
	static int8_t x90 = 11;
	volatile uint8_t x91 = UINT8_MAX;
	int32_t t22 = 64641;

	t22 = ((x89<(x90/x91))*x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -760;
	static uint8_t x95 = 7U;
	int8_t x96 = 1;
	int32_t t23 = -1;

	t23 = ((x93<(x94/x95))*x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile int16_t x98 = 88;
	int16_t x99 = -1;
	int64_t x100 = -4789400721260276LL;
	int64_t t24 = -611395003LL;

	t24 = ((x97<(x98/x99))*x100);

	if (t24 != -4789400721260276LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -3073LL;
	int64_t x103 = INT64_MIN;
	int32_t x104 = -5925119;
	static volatile int32_t t25 = -1;

	t25 = ((x101<(x102/x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int32_t x106 = -133;
	static int32_t x107 = -6031839;
	uint32_t t26 = 129518U;

	t26 = ((x105<(x106/x107))*x108);

	if (t26 != 18741818U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int32_t x110 = -939310255;
	uint32_t x111 = UINT32_MAX;
	static volatile uint32_t t27 = 11443U;

	t27 = ((x109<(x110/x111))*x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 55;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 233956531LLU;
	uint64_t t28 = 216151486203987LLU;

	t28 = ((x113<(x114/x115))*x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -4143574136LL;
	uint32_t x118 = 849U;
	volatile int32_t x119 = -1;
	int8_t x120 = INT8_MAX;
	int32_t t29 = -210973963;

	t29 = ((x117<(x118/x119))*x120);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = 4;
	static int64_t x122 = 383245LL;
	int8_t x123 = -1;
	uint8_t x124 = 54U;
	volatile int32_t t30 = 43518733;

	t30 = ((x121<(x122/x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static int16_t x127 = INT16_MAX;
	uint16_t x128 = 72U;
	static int32_t t31 = 288;

	t31 = ((x125<(x126/x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = -1;

	t32 = ((x129<(x130/x131))*x132);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int16_t x134 = INT16_MAX;
	uint16_t x135 = 1U;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t33 = INT64_MIN;

	t33 = ((x133<(x134/x135))*x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = 2;
	static uint8_t x139 = 25U;
	static int64_t t34 = 49590LL;

	t34 = ((x137<(x138/x139))*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 1816453LL;
	int64_t x142 = 425678104117873832LL;
	static int16_t x144 = INT16_MAX;

	t35 = ((x141<(x142/x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -4;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = 93369184;
	uint32_t t36 = 328225054U;

	t36 = ((x149<(x150/x151))*x152);

	if (t36 != 1012946162U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	int64_t x155 = -1LL;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int32_t t37 = 131418;

	t37 = ((x153<(x154/x155))*x156);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 41858822784535608LLU;
	int64_t x158 = -1LL;
	int8_t x159 = -1;

	t38 = ((x157<(x158/x159))*x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x162 = -9;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = 6;
	int32_t t39 = 352;

	t39 = ((x161<(x162/x163))*x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = UINT32_MAX;
	static int8_t x166 = INT8_MIN;
	volatile int32_t t40 = 3926111;

	t40 = ((x165<(x166/x167))*x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	volatile int32_t x170 = INT32_MIN;
	static volatile int64_t x171 = INT64_MIN;
	volatile int32_t t41 = -5;

	t41 = ((x169<(x170/x171))*x172);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -320;
	static uint32_t x176 = UINT32_MAX;
	volatile uint32_t t42 = 10344274U;

	t42 = ((x173<(x174/x175))*x176);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = INT8_MIN;
	static uint32_t x180 = 50950973U;
	volatile uint32_t t43 = 2582841U;

	t43 = ((x177<(x178/x179))*x180);

	if (t43 != 50950973U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -31;
	uint32_t x183 = 1003565U;

	t44 = ((x181<(x182/x183))*x184);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x186 = -4776;
	uint8_t x187 = UINT8_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t45 = 42138U;

	t45 = ((x185<(x186/x187))*x188);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x190 = -10;
	int64_t x192 = INT64_MIN;
	static volatile int64_t t46 = INT64_MIN;

	t46 = ((x189<(x190/x191))*x192);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 0;
	volatile uint8_t x194 = 2U;
	static uint64_t x195 = 1114844674472251169LLU;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t47 = 16;

	t47 = ((x193<(x194/x195))*x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MAX;
	static volatile int32_t x199 = INT32_MIN;
	volatile int8_t x200 = INT8_MIN;
	int32_t t48 = 497994000;

	t48 = ((x197<(x198/x199))*x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MAX;
	uint16_t x203 = 73U;
	int16_t x204 = -1010;
	static int32_t t49 = -22;

	t49 = ((x201<(x202/x203))*x204);

	if (t49 != -1010) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = UINT8_MAX;
	volatile uint8_t x206 = 10U;
	volatile int16_t x207 = INT16_MAX;
	uint8_t x208 = 1U;
	volatile int32_t t50 = -106;

	t50 = ((x205<(x206/x207))*x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x211 = 4U;
	int16_t x212 = INT16_MIN;

	t51 = ((x209<(x210/x211))*x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x214 = UINT32_MAX;
	volatile int16_t x215 = -1;
	int64_t x216 = INT64_MIN;
	volatile int64_t t52 = -8344648534LL;

	t52 = ((x213<(x214/x215))*x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x218 = -5809LL;
	uint8_t x219 = UINT8_MAX;
	volatile int16_t x220 = 786;
	int32_t t53 = 5212996;

	t53 = ((x217<(x218/x219))*x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x221 = INT16_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	uint64_t x223 = UINT64_MAX;

	t54 = ((x221<(x222/x223))*x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	volatile int32_t t55 = 1;

	t55 = ((x225<(x226/x227))*x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x230 = INT8_MAX;
	uint16_t x231 = 14U;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t56 = 1;

	t56 = ((x229<(x230/x231))*x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x236 = 41U;
	int32_t t57 = -113;

	t57 = ((x233<(x234/x235))*x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	uint32_t x240 = 182U;
	uint32_t t58 = 30070U;

	t58 = ((x237<(x238/x239))*x240);

	if (t58 != 182U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	uint8_t x242 = 64U;
	volatile int64_t x243 = INT64_MIN;
	int16_t x244 = -968;
	static volatile int32_t t59 = -159597;

	t59 = ((x241<(x242/x243))*x244);

	if (t59 != -968) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x245 = -27463;
	int64_t x246 = INT64_MIN;
	static uint16_t x247 = UINT16_MAX;
	uint8_t x248 = 76U;
	int32_t t60 = -23;

	t60 = ((x245<(x246/x247))*x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x250 = INT64_MIN;
	int8_t x251 = -22;
	volatile int16_t x252 = INT16_MAX;
	static volatile int32_t t61 = 218629731;

	t61 = ((x249<(x250/x251))*x252);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 5121003U;
	volatile int64_t x254 = INT64_MAX;
	static int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t62 = 10294049;

	t62 = ((x253<(x254/x255))*x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 1871786085554LL;
	int8_t x258 = -1;
	uint16_t x260 = 1U;

	t63 = ((x257<(x258/x259))*x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	static int16_t x262 = -214;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t64 = -20;

	t64 = ((x261<(x262/x263))*x264);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = 58;
	volatile uint32_t x266 = 91U;
	int32_t x267 = -815;
	int32_t x268 = 24;
	int32_t t65 = -1;

	t65 = ((x265<(x266/x267))*x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	volatile int16_t x270 = -36;
	static uint32_t x271 = UINT32_MAX;
	int8_t x272 = -42;
	static int32_t t66 = -237;

	t66 = ((x269<(x270/x271))*x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -763;
	static uint16_t x274 = UINT16_MAX;
	static int64_t x276 = INT64_MIN;
	static int64_t t67 = -6LL;

	t67 = ((x273<(x274/x275))*x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 9U;
	int64_t x278 = INT64_MIN;
	static uint8_t x279 = 1U;
	int16_t x280 = -193;
	volatile int32_t t68 = -68130;

	t68 = ((x277<(x278/x279))*x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x281 = INT8_MIN;
	int32_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

	t69 = ((x281<(x282/x283))*x284);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = UINT8_MAX;
	uint32_t x286 = 2980035U;
	uint16_t x287 = 49U;
	int8_t x288 = -1;
	int32_t t70 = 9543981;

	t70 = ((x285<(x286/x287))*x288);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = INT16_MIN;
	static volatile uint8_t x290 = 28U;
	static int16_t x291 = INT16_MAX;
	volatile int32_t t71 = -194490;

	t71 = ((x289<(x290/x291))*x292);

	if (t71 != 245) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x295 = INT64_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t72 = 462393460;

	t72 = ((x293<(x294/x295))*x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x297 = INT16_MAX;
	int8_t x299 = -11;
	volatile uint32_t x300 = UINT32_MAX;
	uint32_t t73 = 82555032U;

	t73 = ((x297<(x298/x299))*x300);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x301 = 22U;
	static uint8_t x302 = 1U;
	int32_t x303 = -718;
	static int16_t x304 = INT16_MIN;
	int32_t t74 = -964104;

	t74 = ((x301<(x302/x303))*x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MAX;
	int32_t x311 = -1;
	int64_t t75 = -2LL;

	t75 = ((x309<(x310/x311))*x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = -2;
	uint16_t x315 = 4384U;
	int16_t x316 = -541;
	int32_t t76 = 0;

	t76 = ((x313<(x314/x315))*x316);

	if (t76 != -541) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = 13;
	int64_t x318 = INT64_MIN;
	static uint32_t x319 = UINT32_MAX;
	uint8_t x320 = UINT8_MAX;

	t77 = ((x317<(x318/x319))*x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x322 = 1U;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = 2;
	int32_t t78 = 2;

	t78 = ((x321<(x322/x323))*x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	int16_t x326 = 3;
	int8_t x328 = INT8_MAX;
	int32_t t79 = 1008310426;

	t79 = ((x325<(x326/x327))*x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 13782398LLU;
	uint8_t x330 = 31U;
	int64_t x332 = INT64_MIN;
	static int64_t t80 = 7470859796195LL;

	t80 = ((x329<(x330/x331))*x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MAX;
	volatile uint8_t x338 = 78U;
	int16_t x339 = 256;
	int64_t t81 = 1376645896650378LL;

	t81 = ((x337<(x338/x339))*x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = -29LL;
	int8_t x342 = -10;
	uint32_t x343 = 2U;
	int8_t x344 = 59;
	int32_t t82 = 2780133;

	t82 = ((x341<(x342/x343))*x344);

	if (t82 != 59) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x345 = -1;
	volatile uint32_t x346 = UINT32_MAX;
	int64_t x347 = -1977133508LL;
	int16_t x348 = INT16_MIN;

	t83 = ((x345<(x346/x347))*x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 3632429LLU;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;

	t84 = ((x349<(x350/x351))*x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MAX;
	static uint8_t x355 = 63U;
	uint32_t x356 = 0U;
	volatile uint32_t t85 = 11602U;

	t85 = ((x353<(x354/x355))*x356);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x357 = 8U;
	uint32_t x358 = UINT32_MAX;
	volatile uint32_t x359 = 690457U;
	int32_t x360 = -1;

	t86 = ((x357<(x358/x359))*x360);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MAX;
	static int64_t x362 = -1LL;
	uint32_t t87 = 14317U;

	t87 = ((x361<(x362/x363))*x364);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = INT32_MAX;
	uint8_t x367 = 13U;
	static volatile int16_t x368 = INT16_MAX;
	volatile int32_t t88 = -937129;

	t88 = ((x365<(x366/x367))*x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = -364678153;
	int64_t x371 = -62582070043LL;

	t89 = ((x369<(x370/x371))*x372);

	if (t89 != 24) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x373 = 1LLU;
	int8_t x374 = INT8_MAX;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t90 = 910253393;

	t90 = ((x373<(x374/x375))*x376);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = 0;
	volatile uint8_t x378 = 0U;
	uint32_t x379 = UINT32_MAX;
	volatile int64_t x380 = -2867426LL;

	t91 = ((x377<(x378/x379))*x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = 3436;
	volatile int32_t x384 = -1;
	volatile int32_t t92 = 727846;

	t92 = ((x381<(x382/x383))*x384);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x387 = INT8_MIN;
	int8_t x388 = 0;
	int32_t t93 = -61798;

	t93 = ((x385<(x386/x387))*x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = UINT64_MAX;
	volatile int64_t x391 = -4130LL;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t94 = 15118645;

	t94 = ((x389<(x390/x391))*x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 0U;
	int64_t x394 = INT64_MIN;
	int16_t x396 = 2085;
	volatile int32_t t95 = 194372870;

	t95 = ((x393<(x394/x395))*x396);

	if (t95 != 2085) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = -2651386094470482846LL;
	static uint8_t x398 = 1U;
	int64_t x399 = -1697649852390532571LL;
	int64_t x400 = INT64_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = ((x397<(x398/x399))*x400);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x401 = 0U;
	uint8_t x402 = 47U;
	int16_t x403 = INT16_MAX;

	t97 = ((x401<(x402/x403))*x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = -1;
	int32_t t98 = 126205;

	t98 = ((x405<(x406/x407))*x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x410 = INT32_MIN;
	volatile int16_t x411 = INT16_MAX;
	static int32_t x412 = INT32_MAX;
	static int32_t t99 = 37;

	t99 = ((x409<(x410/x411))*x412);

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

