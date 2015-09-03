#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = UINT64_MAX;
uint8_t x12 = 0U;
int16_t x13 = INT16_MIN;
uint16_t x15 = 1797U;
int32_t x19 = INT32_MAX;
volatile int32_t t4 = -312546379;
volatile int32_t t6 = 194008652;
static volatile int32_t t11 = -100;
int64_t x49 = 2303358157720325LL;
int64_t x56 = INT64_MAX;
static uint8_t x57 = 82U;
int32_t x58 = 1155;
volatile int8_t x62 = -7;
int32_t x65 = -1;
uint64_t x67 = UINT64_MAX;
int16_t x69 = -1;
uint32_t x70 = 0U;
uint32_t x73 = 28912284U;
uint32_t x75 = 432U;
int16_t x86 = INT16_MAX;
static volatile int64_t x87 = 2356LL;
int32_t t21 = -2152;
volatile int64_t x93 = INT64_MIN;
volatile int16_t x100 = -25;
int16_t x102 = INT16_MAX;
int16_t x106 = INT16_MIN;
int8_t x108 = INT8_MIN;
volatile int32_t t26 = 1710210;
int16_t x109 = -1;
int32_t x110 = INT32_MIN;
uint16_t x112 = UINT16_MAX;
volatile int32_t t28 = 30872158;
static volatile int32_t t29 = 10;
int16_t x133 = -40;
volatile int8_t x141 = 21;
volatile int64_t x146 = INT64_MIN;
volatile uint32_t x148 = UINT32_MAX;
volatile int32_t t36 = -11;
uint8_t x153 = 2U;
uint32_t x167 = UINT32_MAX;
uint8_t x168 = 43U;
volatile uint32_t x180 = 1U;
uint8_t x183 = UINT8_MAX;
int64_t x184 = -1101761736191100LL;
static uint8_t x185 = UINT8_MAX;
volatile int8_t x187 = INT8_MAX;
int32_t t46 = -37305;
int16_t x189 = INT16_MIN;
static uint16_t x195 = 11U;
static volatile int8_t x200 = -1;
int8_t x204 = INT8_MAX;
static volatile int32_t t50 = 466225224;
uint8_t x206 = UINT8_MAX;
volatile int32_t t51 = -54099;
int8_t x210 = INT8_MIN;
int32_t t55 = -39209118;
uint16_t x232 = UINT16_MAX;
int16_t x235 = INT16_MIN;
static volatile int32_t t58 = -1147;
int16_t x240 = 4117;
volatile int32_t t59 = -835793182;
int32_t x251 = INT32_MIN;
volatile int32_t t63 = 980957277;
volatile int64_t x259 = INT64_MIN;
volatile int32_t t64 = -842325790;
int64_t x264 = INT64_MIN;
int8_t x268 = 0;
int32_t t66 = 2260;
int32_t x284 = 1587581;
static uint32_t x287 = 340616410U;
uint64_t x288 = 7730502LLU;
int64_t x289 = -1LL;
volatile uint8_t x303 = 24U;
int8_t x305 = -1;
volatile int32_t x311 = -1;
volatile int32_t x322 = -1;
volatile int8_t x323 = -1;
int8_t x326 = INT8_MIN;
uint32_t x329 = 2774U;
static int64_t x330 = 447183882507261LL;
static int32_t t82 = -2610349;
volatile int32_t t83 = 37703930;
int16_t x343 = INT16_MIN;
uint8_t x347 = UINT8_MAX;
static int32_t t86 = -1030987936;
static int16_t x350 = INT16_MIN;
volatile int32_t t87 = -166556;
int64_t x356 = -1LL;
volatile uint32_t x360 = 6U;
static int8_t x361 = -1;
uint64_t x379 = 68340390415404LLU;
volatile int32_t t94 = -1;
static volatile int16_t x383 = 1006;
int16_t x384 = INT16_MIN;
int8_t x385 = 4;
volatile uint16_t x386 = 27970U;
int64_t x388 = 6412239LL;
uint16_t x390 = 483U;
static int32_t x395 = 116382225;
int32_t t98 = 1304;


void f0(void) {
	int8_t x1 = -1;
	volatile int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 56;

	t0 = (x1<((x2<x3)&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = 423U;
	static volatile int64_t x7 = -1LL;
	uint8_t x8 = UINT8_MAX;
	static volatile int32_t t1 = -12;

	t1 = (x5<((x6<x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MAX;
	uint8_t x11 = 31U;
	volatile int32_t t2 = 48;

	t2 = (x9<((x10<x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static int8_t x16 = -1;
	static volatile int32_t t3 = -127;

	t3 = (x13<((x14<x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MIN;
	int64_t x20 = INT64_MIN;

	t4 = (x17<((x18<x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int16_t x23 = 765;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -1124;

	t5 = (x21<((x22<x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = -1;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = 42771U;

	t6 = (x25<((x26<x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	static int16_t x31 = -5;
	static int64_t x32 = -3724LL;
	int32_t t7 = 14184;

	t7 = (x29<((x30<x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MIN;
	volatile int8_t x35 = -1;
	volatile uint16_t x36 = 1U;
	static int32_t t8 = -98111;

	t8 = (x33<((x34<x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MAX;
	int16_t x40 = 9;
	int32_t t9 = 6097;

	t9 = (x37<((x38<x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 627021LLU;
	int8_t x42 = -1;
	int8_t x43 = 5;
	int8_t x44 = -1;
	static volatile int32_t t10 = -955;

	t10 = (x41<((x42<x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 9588U;
	uint8_t x46 = 0U;
	uint8_t x47 = 117U;
	int32_t x48 = -2;

	t11 = (x45<((x46<x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	static volatile int16_t x52 = -117;
	static int32_t t12 = 1;

	t12 = (x49<((x50<x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 7;
	int64_t x54 = 3949LL;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = 191609;

	t13 = (x53<((x54<x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x59 = INT64_MAX;
	volatile int16_t x60 = 371;
	volatile int32_t t14 = 1;

	t14 = (x57<((x58<x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -125;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 5;

	t15 = (x61<((x62<x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = INT16_MAX;
	volatile int16_t x68 = -1;
	int32_t t16 = 37799;

	t16 = (x65<((x66<x67)&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	volatile int32_t t17 = 12;

	t17 = (x69<((x70<x71)&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = INT64_MIN;
	static volatile int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 7928;

	t18 = (x73<((x74<x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static uint8_t x78 = UINT8_MAX;
	uint32_t x79 = 3U;
	int64_t x80 = 26021252LL;
	int32_t t19 = -251120870;

	t19 = (x77<((x78<x79)&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -9;
	int16_t x82 = -3737;
	uint8_t x83 = 9U;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 243144634;

	t20 = (x81<((x82<x83)&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -258474063017307LL;
	static uint64_t x88 = UINT64_MAX;

	t21 = (x85<((x86<x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 99091;
	int32_t x90 = 163;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = 341885485;

	t22 = (x89<((x90<x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	int8_t x96 = 3;
	int32_t t23 = -14322;

	t23 = (x93<((x94<x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 21;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 221852833LLU;
	volatile int32_t t24 = 182;

	t24 = (x97<((x98<x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static uint16_t x103 = 7945U;
	uint16_t x104 = 14U;
	volatile int32_t t25 = -123227283;

	t25 = (x101<((x102<x103)&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	int64_t x107 = -42580964LL;

	t26 = (x105<((x106<x107)&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x111 = 6U;
	static int32_t t27 = -14417;

	t27 = (x109<((x110<x111)&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x115 = -1;
	static int8_t x116 = INT8_MIN;

	t28 = (x113<((x114<x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x118 = 16U;
	uint16_t x119 = 0U;
	int16_t x120 = INT16_MIN;

	t29 = (x117<((x118<x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int32_t x122 = INT32_MIN;
	int8_t x123 = -41;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -6470560;

	t30 = (x121<((x122<x123)&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 8606337267785114LLU;
	int64_t x126 = 359014LL;
	int8_t x127 = -1;
	volatile int64_t x128 = 88763950847686716LL;
	int32_t t31 = 46;

	t31 = (x125<((x126<x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 3714LLU;
	int16_t x130 = -19;
	static int8_t x131 = INT8_MIN;
	int16_t x132 = 1;
	int32_t t32 = 66;

	t32 = (x129<((x130<x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -117269013867LL;
	static uint8_t x135 = UINT8_MAX;
	int16_t x136 = -8825;
	volatile int32_t t33 = -44538404;

	t33 = (x133<((x134<x135)&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -1;

	t34 = (x137<((x138<x139)&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	static volatile uint8_t x143 = UINT8_MAX;
	static volatile int16_t x144 = 1291;
	volatile int32_t t35 = -4011;

	t35 = (x141<((x142<x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 1528LL;
	static uint64_t x147 = UINT64_MAX;

	t36 = (x145<((x146<x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 1U;
	int16_t x150 = 11971;
	int16_t x151 = -41;
	uint8_t x152 = 44U;
	volatile int32_t t37 = -296000461;

	t37 = (x149<((x150<x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	static uint8_t x155 = 62U;
	uint64_t x156 = 279628916690534901LLU;
	volatile int32_t t38 = -478;

	t38 = (x153<((x154<x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = 33LLU;
	static int32_t t39 = 366694;

	t39 = (x157<((x158<x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = -81227912898156LL;
	int8_t x163 = 1;
	uint32_t x164 = 16876574U;
	int32_t t40 = 60709;

	t40 = (x161<((x162<x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static volatile int16_t x166 = -1452;
	int32_t t41 = 42780;

	t41 = (x165<((x166<x167)&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 3U;
	int8_t x170 = -25;
	static int16_t x171 = -1;
	static int32_t x172 = -104;
	static volatile int32_t t42 = 8188;

	t42 = (x169<((x170<x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 5797U;
	int16_t x174 = -454;
	uint64_t x175 = UINT64_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -7777451;

	t43 = (x173<((x174<x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	static volatile int32_t t44 = -9;

	t44 = (x177<((x178<x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MIN;
	int32_t t45 = 23760906;

	t45 = (x181<((x182<x183)&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = -1;
	int8_t x188 = INT8_MIN;

	t46 = (x185<((x186<x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = 0;
	uint32_t x191 = 621773U;
	int8_t x192 = -1;
	volatile int32_t t47 = 47;

	t47 = (x189<((x190<x191)&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = 0;
	int32_t x194 = -2697;
	int16_t x196 = 10;
	static volatile int32_t t48 = 489942;

	t48 = (x193<((x194<x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = -1;
	int16_t x199 = 1;
	volatile int32_t t49 = 75;

	t49 = (x197<((x198<x199)&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -259;
	uint32_t x203 = 0U;

	t50 = (x201<((x202<x203)&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 2905025364LLU;
	int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MIN;

	t51 = (x205<((x206<x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int8_t x211 = -51;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = -251557402;

	t52 = (x209<((x210<x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 89U;
	uint32_t x214 = 314U;
	uint16_t x215 = 11U;
	int32_t x216 = 2;
	int32_t t53 = -4316620;

	t53 = (x213<((x214<x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 3;
	int64_t x218 = 6555LL;
	volatile uint16_t x219 = 11U;
	int16_t x220 = -1;
	int32_t t54 = 3;

	t54 = (x217<((x218<x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -36743287;
	int64_t x222 = INT64_MIN;
	int8_t x223 = 7;
	uint8_t x224 = UINT8_MAX;

	t55 = (x221<((x222<x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 712;
	int16_t x226 = 0;
	int16_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	int32_t t56 = -5979;

	t56 = (x225<((x226<x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int32_t x230 = INT32_MIN;
	static int32_t x231 = INT32_MIN;
	static volatile int32_t t57 = -6;

	t57 = (x229<((x230<x231)&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	uint8_t x234 = UINT8_MAX;
	uint8_t x236 = 16U;

	t58 = (x233<((x234<x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = 144690302U;
	static int8_t x238 = INT8_MIN;
	static uint16_t x239 = UINT16_MAX;

	t59 = (x237<((x238<x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int64_t x242 = -3140LL;
	static uint64_t x243 = 2911310628854539LLU;
	int8_t x244 = 0;
	static int32_t t60 = 3070753;

	t60 = (x241<((x242<x243)&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	volatile int16_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	static uint32_t x248 = 1U;
	int32_t t61 = -518817;

	t61 = (x245<((x246<x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -1;
	int16_t x250 = 2467;
	static uint64_t x252 = 49LLU;
	volatile int32_t t62 = 0;

	t62 = (x249<((x250<x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 8175871U;
	volatile int16_t x254 = INT16_MAX;
	uint32_t x255 = 12180654U;
	static uint16_t x256 = 18U;

	t63 = (x253<((x254<x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	volatile int64_t x260 = -28691674169356LL;

	t64 = (x257<((x258<x259)&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	volatile int64_t x263 = 1866833666889548LL;
	static volatile int32_t t65 = 0;

	t65 = (x261<((x262<x263)&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MAX;
	int8_t x267 = -1;

	t66 = (x265<((x266<x267)&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 0U;
	int16_t x270 = -1;
	volatile uint8_t x271 = 15U;
	static uint32_t x272 = 2U;
	int32_t t67 = 0;

	t67 = (x269<((x270<x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MIN;
	volatile int16_t x274 = 0;
	static int8_t x275 = -1;
	uint32_t x276 = 3U;
	volatile int32_t t68 = -52463;

	t68 = (x273<((x274<x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 554LLU;
	int32_t x278 = INT32_MIN;
	volatile int8_t x279 = -1;
	volatile int16_t x280 = INT16_MIN;
	int32_t t69 = -1;

	t69 = (x277<((x278<x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 121U;
	int8_t x282 = INT8_MIN;
	static volatile int8_t x283 = INT8_MAX;
	volatile int32_t t70 = -738055;

	t70 = (x281<((x282<x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 580284831U;
	uint32_t x286 = UINT32_MAX;
	int32_t t71 = -3519;

	t71 = (x285<((x286<x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 44U;
	uint16_t x291 = 1722U;
	int32_t x292 = INT32_MAX;
	int32_t t72 = 194;

	t72 = (x289<((x290<x291)&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	volatile int32_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 0;

	t73 = (x293<((x294<x295)&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int64_t x298 = -29079LL;
	int8_t x299 = 11;
	int64_t x300 = 6LL;
	volatile int32_t t74 = 223655;

	t74 = (x297<((x298<x299)&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 304;
	int64_t x302 = -1LL;
	static volatile uint64_t x304 = 4437468174320914622LLU;
	volatile int32_t t75 = 18516040;

	t75 = (x301<((x302<x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = -2135676077307LL;
	int16_t x307 = INT16_MAX;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t76 = -15165081;

	t76 = (x305<((x306<x307)&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x310 = 55201058U;
	uint8_t x312 = 0U;
	static int32_t t77 = 1516331;

	t77 = (x309<((x310<x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	static uint8_t x314 = 14U;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 1536U;
	volatile int32_t t78 = -12;

	t78 = (x313<((x314<x315)&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -1LL;
	int16_t x318 = INT16_MIN;
	static uint64_t x319 = 3229LLU;
	static volatile int64_t x320 = INT64_MIN;
	int32_t t79 = -3558;

	t79 = (x317<((x318<x319)&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = -20534;

	t80 = (x321<((x322<x323)&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int64_t x327 = -101653026505560568LL;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = -48;

	t81 = (x325<((x326<x327)&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x331 = -1;
	int16_t x332 = INT16_MAX;

	t82 = (x329<((x330<x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MAX;
	int32_t x334 = INT32_MIN;
	int8_t x335 = -45;
	uint32_t x336 = 61396122U;

	t83 = (x333<((x334<x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	volatile int32_t x338 = INT32_MIN;
	static int32_t x339 = -1;
	static int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 1836;

	t84 = (x337<((x338<x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MIN;
	static volatile int32_t x344 = -1;
	volatile int32_t t85 = -5773;

	t85 = (x341<((x342<x343)&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -127557738;
	int32_t x346 = -1;
	static int64_t x348 = -273662992128013022LL;

	t86 = (x345<((x346<x347)&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	static int32_t x351 = 124280;
	static volatile uint16_t x352 = 59U;

	t87 = (x349<((x350<x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	volatile int32_t x354 = -5;
	int64_t x355 = 1463677528481564LL;
	static volatile int32_t t88 = -42;

	t88 = (x353<((x354<x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	static int16_t x358 = 7;
	int64_t x359 = INT64_MIN;
	volatile int32_t t89 = 1720;

	t89 = (x357<((x358<x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = UINT64_MAX;
	uint64_t x363 = 7LLU;
	int32_t x364 = 718789;
	volatile int32_t t90 = -105413579;

	t90 = (x361<((x362<x363)&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -611;
	int32_t x366 = INT32_MAX;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = -1068680067112863694LL;
	volatile int32_t t91 = -347670;

	t91 = (x365<((x366<x367)&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	static int64_t x370 = INT64_MAX;
	volatile int8_t x371 = 0;
	uint32_t x372 = UINT32_MAX;
	int32_t t92 = -76131;

	t92 = (x369<((x370<x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint64_t x374 = 866127369537068297LLU;
	static int16_t x375 = 963;
	int16_t x376 = 12015;
	volatile int32_t t93 = 130689514;

	t93 = (x373<((x374<x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -1LL;
	int8_t x378 = INT8_MAX;
	static int8_t x380 = 55;

	t94 = (x377<((x378<x379)&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	volatile int64_t x382 = 22851038833LL;
	int32_t t95 = 0;

	t95 = (x381<((x382<x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = INT8_MIN;
	static volatile int32_t t96 = 55782;

	t96 = (x385<((x386<x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	volatile int8_t x391 = -1;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -3547917;

	t97 = (x389<((x390<x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = UINT32_MAX;
	int16_t x396 = -1;

	t98 = (x393<((x394<x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 2651;

	t99 = (x397<((x398<x399)&x400));

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

