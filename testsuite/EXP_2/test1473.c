#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = INT64_MIN;
static uint8_t x6 = 23U;
int32_t x10 = INT32_MAX;
static int32_t t2 = 303563;
int16_t x21 = -57;
volatile int8_t x23 = INT8_MAX;
uint64_t x26 = 6712028LLU;
int64_t x27 = INT64_MIN;
int8_t x29 = INT8_MIN;
uint16_t x31 = UINT16_MAX;
static volatile int32_t t7 = -3;
int16_t x36 = -1;
uint64_t x39 = 3147572540229271116LLU;
uint32_t t10 = 1982U;
uint8_t x48 = UINT8_MAX;
int8_t x53 = INT8_MIN;
volatile int8_t x62 = 57;
int8_t x70 = INT8_MIN;
volatile int64_t x72 = 560837972779LL;
volatile int64_t x74 = -1LL;
uint64_t x77 = 3052091170826300LLU;
int32_t x85 = INT32_MIN;
static volatile int32_t t22 = -29108;
static uint32_t x98 = 104U;
volatile int8_t x100 = 1;
uint16_t x103 = UINT16_MAX;
int32_t t24 = -45405;
volatile uint16_t x110 = 0U;
uint16_t x124 = 35U;
int64_t x138 = INT64_MIN;
static uint32_t x140 = UINT32_MAX;
uint32_t t32 = 189U;
int16_t x144 = -1;
int64_t x151 = -1LL;
int8_t x153 = -2;
static int16_t x155 = -1;
int32_t t39 = 140;
static int64_t x188 = INT64_MAX;
int64_t t44 = 80LL;
int8_t x196 = INT8_MIN;
int16_t x199 = -1;
volatile int32_t t48 = -405;
static uint32_t x205 = UINT32_MAX;
int32_t x211 = INT32_MIN;
static int32_t t51 = 86229430;
static volatile uint64_t t52 = 133393291863659LLU;
volatile uint64_t t53 = 128796831223746LLU;
uint16_t x232 = 1U;
uint64_t x237 = 6372760591547LLU;
int64_t x239 = INT64_MAX;
uint32_t x240 = 199544206U;
uint8_t x247 = 13U;
volatile int32_t t61 = 5;
volatile int32_t x262 = INT32_MIN;
volatile int16_t x264 = INT16_MIN;
uint32_t x270 = UINT32_MAX;
static int8_t x271 = 30;
static int32_t t64 = 2057544;
static int32_t x276 = INT32_MAX;
uint32_t x281 = UINT32_MAX;
int32_t x283 = INT32_MIN;
int16_t x290 = 130;
int64_t x293 = INT64_MAX;
int32_t x301 = -1;
int64_t x302 = INT64_MIN;
int8_t x303 = INT8_MAX;
uint8_t x309 = 0U;
volatile uint32_t t74 = 546889U;
static int8_t x313 = -1;
int64_t t75 = -3LL;
static int32_t x320 = INT32_MAX;
int64_t x324 = INT64_MIN;
int8_t x333 = -1;
int32_t x340 = INT32_MIN;
volatile int32_t t81 = -84;
int16_t x348 = 912;
static uint64_t x352 = 483LLU;
uint64_t t83 = 0LLU;
volatile int16_t x356 = -1;
volatile int32_t t84 = -52240;
uint64_t x357 = 130708LLU;
volatile uint64_t x359 = UINT64_MAX;
int32_t t86 = 212914677;
uint32_t x377 = 19224U;
uint16_t x381 = 25572U;
int16_t x382 = INT16_MIN;
static uint64_t x389 = 35450LLU;
int64_t x394 = -2LL;
int64_t x395 = INT64_MIN;
uint8_t x398 = 6U;
static int32_t x404 = INT32_MAX;
int32_t t96 = 1121121;
uint64_t x410 = UINT64_MAX;
volatile int64_t x411 = -1LL;
uint64_t x412 = 61818402477125499LLU;
uint8_t x414 = 2U;
int32_t t99 = -1199;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile int32_t x2 = INT32_MAX;
	int64_t x3 = -2013603737319875252LL;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -38;

	t0 = ((x1<=(x2<x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = 1;
	int32_t x8 = -1;
	volatile int32_t t1 = -7714;

	t1 = ((x5<=(x6<x7))/x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -72122LL;
	volatile uint8_t x11 = UINT8_MAX;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9<=(x10<x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -2638289;
	uint8_t x14 = 46U;
	int16_t x15 = INT16_MAX;
	volatile int16_t x16 = 8274;
	volatile int32_t t3 = 504567;

	t3 = ((x13<=(x14<x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 8342965U;
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	uint64_t x20 = 161094LLU;
	uint64_t t4 = 765525729LLU;

	t4 = ((x17<=(x18<x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	volatile int8_t x24 = -1;
	int32_t t5 = -1129;

	t5 = ((x21<=(x22<x23))/x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 12;

	t6 = ((x25<=(x26<x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = 0;
	uint8_t x32 = 1U;

	t7 = ((x29<=(x30<x31))/x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -3314;
	uint32_t x34 = UINT32_MAX;
	static int64_t x35 = INT64_MAX;
	static volatile int32_t t8 = 67;

	t8 = ((x33<=(x34<x35))/x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 31LL;

	t9 = ((x37<=(x38<x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 203;
	static uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;

	t10 = ((x41<=(x42<x43))/x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 5695073U;
	uint16_t x46 = 1U;
	int16_t x47 = -1;
	volatile int32_t t11 = -1495477;

	t11 = ((x45<=(x46<x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	static int16_t x51 = INT16_MIN;
	static volatile uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 1;

	t12 = ((x49<=(x50<x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	volatile int8_t x55 = 22;
	int64_t x56 = INT64_MIN;
	int64_t t13 = 1LL;

	t13 = ((x53<=(x54<x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 112U;
	int32_t x58 = INT32_MIN;
	volatile int64_t x59 = INT64_MAX;
	static uint8_t x60 = UINT8_MAX;
	static volatile int32_t t14 = 3;

	t14 = ((x57<=(x58<x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	int64_t x63 = -782898358137305716LL;
	int8_t x64 = INT8_MAX;
	int32_t t15 = -24609088;

	t15 = ((x61<=(x62<x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -355818LL;
	int8_t x66 = -1;
	uint8_t x67 = 26U;
	int64_t x68 = INT64_MIN;
	int64_t t16 = -246LL;

	t16 = ((x65<=(x66<x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MAX;
	int32_t x71 = -1;
	int64_t t17 = -5101930674140934LL;

	t17 = ((x69<=(x70<x71))/x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	static int16_t x75 = INT16_MIN;
	static uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 26996229931704LLU;

	t18 = ((x73<=(x74<x75))/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = -1;
	int8_t x79 = 4;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 2;

	t19 = ((x77<=(x78<x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 74U;
	volatile uint32_t x82 = 374910879U;
	volatile int32_t x83 = 3;
	int64_t x84 = INT64_MAX;
	int64_t t20 = -2LL;

	t20 = ((x81<=(x82<x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -58688215822LL;
	uint8_t x87 = 0U;
	volatile uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -248;

	t21 = ((x85<=(x86<x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = 107207058199735LL;
	static uint8_t x90 = 3U;
	int64_t x91 = -601LL;
	int8_t x92 = -1;

	t22 = ((x89<=(x90<x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = 214U;
	uint16_t x99 = 1U;
	volatile int32_t t23 = 0;

	t23 = ((x97<=(x98<x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = -116728639;
	static uint16_t x102 = UINT16_MAX;
	int8_t x104 = INT8_MIN;

	t24 = ((x101<=(x102<x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = 2339682388789LLU;
	int8_t x106 = INT8_MIN;
	int64_t x107 = 455LL;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t25 = -1763;

	t25 = ((x105<=(x106<x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x111 = 9584013LLU;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t26 = -2;

	t26 = ((x109<=(x110<x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x113 = 38243335389LLU;
	uint8_t x114 = 81U;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = 9LLU;
	static volatile uint64_t t27 = 505157708645021LLU;

	t27 = ((x113<=(x114<x115))/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	int32_t x123 = -1;
	int32_t t28 = -4;

	t28 = ((x121<=(x122<x123))/x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -27;
	static int64_t x127 = 332029300120LL;
	static int16_t x128 = 7693;
	volatile int32_t t29 = -6423;

	t29 = ((x125<=(x126<x127))/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -1LL;
	int16_t x130 = -1;
	uint16_t x131 = 6244U;
	uint64_t x132 = 1549725902310127LLU;
	static uint64_t t30 = 2302LLU;

	t30 = ((x129<=(x130<x131))/x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = INT8_MIN;
	static int32_t x135 = 11;
	int32_t x136 = -69753180;
	volatile int32_t t31 = 29513;

	t31 = ((x133<=(x134<x135))/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = -1;
	volatile uint8_t x139 = 6U;

	t32 = ((x137<=(x138<x139))/x140);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = 14;
	static uint64_t x142 = 30LLU;
	uint16_t x143 = 27621U;
	int32_t t33 = -952510;

	t33 = ((x141<=(x142<x143))/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 228;
	int64_t x146 = 32318006LL;
	static int64_t x147 = 553041206801LL;
	static volatile uint16_t x148 = 67U;
	int32_t t34 = -3149;

	t34 = ((x145<=(x146<x147))/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x150 = -5LL;
	uint16_t x152 = 1847U;
	int32_t t35 = -3921;

	t35 = ((x149<=(x150<x151))/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x154 = 81U;
	static uint32_t x156 = 12031048U;
	volatile uint32_t t36 = 1949344U;

	t36 = ((x153<=(x154<x155))/x156);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = 56176LL;
	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t37 = 4;

	t37 = ((x157<=(x158<x159))/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	volatile int64_t x163 = -1LL;
	int64_t x164 = 344543961881LL;
	int64_t t38 = -487491384864092LL;

	t38 = ((x161<=(x162<x163))/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = 52246;
	volatile int32_t x166 = 422579;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;

	t39 = ((x165<=(x166<x167))/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -11;
	volatile int64_t x170 = -1LL;
	static int8_t x171 = INT8_MIN;
	static volatile int64_t x172 = INT64_MIN;
	volatile int64_t t40 = -97344LL;

	t40 = ((x169<=(x170<x171))/x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -785379748279607LL;
	int8_t x174 = INT8_MIN;
	int64_t x175 = -1LL;
	static int16_t x176 = INT16_MAX;
	volatile int32_t t41 = 2037;

	t41 = ((x173<=(x174<x175))/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = 3855100653LL;
	int64_t x178 = INT64_MIN;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MAX;
	int64_t t42 = -5LL;

	t42 = ((x177<=(x178<x179))/x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 35U;
	volatile uint16_t x182 = 86U;
	int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	volatile int64_t t43 = 15260041257387773LL;

	t43 = ((x181<=(x182<x183))/x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 2U;
	uint16_t x186 = 4U;
	uint64_t x187 = UINT64_MAX;

	t44 = ((x185<=(x186<x187))/x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 8293465U;
	volatile uint16_t x191 = 3U;
	int64_t x192 = INT64_MAX;
	int64_t t45 = 51915LL;

	t45 = ((x189<=(x190<x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 51810863U;
	uint8_t x194 = 0U;
	int16_t x195 = INT16_MAX;
	volatile int32_t t46 = 1181283;

	t46 = ((x193<=(x194<x195))/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 19772595LLU;
	uint16_t x198 = UINT16_MAX;
	static int64_t x200 = INT64_MAX;
	int64_t t47 = -767LL;

	t47 = ((x197<=(x198<x199))/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 11453217LLU;
	int32_t x202 = 39;
	uint8_t x203 = 1U;
	int16_t x204 = -1;

	t48 = ((x201<=(x202<x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = -410948931;
	int16_t x207 = -20;
	volatile int8_t x208 = 5;
	int32_t t49 = -9;

	t49 = ((x205<=(x206<x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = -1;
	int32_t x210 = -1;
	volatile uint32_t x212 = UINT32_MAX;
	uint32_t t50 = 64584551U;

	t50 = ((x209<=(x210<x211))/x212);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 2566U;
	int64_t x214 = -1LL;
	static int8_t x215 = 0;
	int8_t x216 = INT8_MAX;

	t51 = ((x213<=(x214<x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 1653915381709350468LLU;
	int8_t x218 = -1;
	static uint16_t x219 = 1123U;
	volatile uint64_t x220 = 2086309738706LLU;

	t52 = ((x217<=(x218<x219))/x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = -1;
	uint32_t x222 = 6450045U;
	int16_t x223 = -1;
	uint64_t x224 = UINT64_MAX;

	t53 = ((x221<=(x222<x223))/x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x225 = 3LLU;
	static volatile uint64_t x226 = 9174663686350LLU;
	volatile int32_t x227 = INT32_MIN;
	volatile int8_t x228 = -1;
	int32_t t54 = 59113;

	t54 = ((x225<=(x226<x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	int64_t x230 = -1LL;
	int16_t x231 = -1;
	volatile int32_t t55 = -1244499;

	t55 = ((x229<=(x230<x231))/x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x233 = UINT16_MAX;
	volatile int64_t x234 = 139LL;
	uint32_t x235 = 2U;
	volatile int8_t x236 = 1;
	static volatile int32_t t56 = 1009;

	t56 = ((x233<=(x234<x235))/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = INT16_MAX;
	volatile uint32_t t57 = 488U;

	t57 = ((x237<=(x238<x239))/x240);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	int32_t x242 = INT32_MAX;
	int32_t x243 = -1;
	int16_t x244 = -1;
	static int32_t t58 = 640;

	t58 = ((x241<=(x242<x243))/x244);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	static int16_t x246 = -1;
	static int8_t x248 = INT8_MIN;
	int32_t t59 = 856;

	t59 = ((x245<=(x246<x247))/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	volatile uint16_t x250 = 286U;
	int16_t x251 = -1;
	int8_t x252 = -1;
	volatile int32_t t60 = 11760;

	t60 = ((x249<=(x250<x251))/x252);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x253 = INT8_MAX;
	uint64_t x254 = 301LLU;
	static int64_t x255 = INT64_MIN;
	static volatile int32_t x256 = -1;

	t61 = ((x253<=(x254<x255))/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 653U;
	static int16_t x263 = 1;
	int32_t t62 = 35;

	t62 = ((x261<=(x262<x263))/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = -1;
	static int16_t x266 = INT16_MIN;
	static volatile int32_t x267 = -477714437;
	int64_t x268 = INT64_MIN;
	static int64_t t63 = 8247720206132586LL;

	t63 = ((x265<=(x266<x267))/x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = 3080;
	static volatile int16_t x272 = INT16_MIN;

	t64 = ((x269<=(x270<x271))/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	volatile int64_t x275 = INT64_MAX;
	int32_t t65 = -6083213;

	t65 = ((x273<=(x274<x275))/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	volatile int32_t x278 = INT32_MIN;
	uint64_t x279 = 20LLU;
	uint16_t x280 = UINT16_MAX;
	static int32_t t66 = 32;

	t66 = ((x277<=(x278<x279))/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = 1081;
	volatile uint8_t x284 = 122U;
	int32_t t67 = -12926518;

	t67 = ((x281<=(x282<x283))/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 11;
	int64_t x286 = 95662880133189264LL;
	uint16_t x287 = UINT16_MAX;
	static uint32_t x288 = 297219U;
	uint32_t t68 = 6U;

	t68 = ((x285<=(x286<x287))/x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t69 = -254468235;

	t69 = ((x289<=(x290<x291))/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x294 = INT32_MIN;
	int16_t x295 = -1;
	static uint64_t x296 = UINT64_MAX;
	volatile uint64_t t70 = 6LLU;

	t70 = ((x293<=(x294<x295))/x296);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 65LLU;
	static uint16_t x298 = 165U;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;
	volatile int32_t t71 = -1456;

	t71 = ((x297<=(x298<x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x304 = INT8_MIN;
	volatile int32_t t72 = 1;

	t72 = ((x301<=(x302<x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = 1;
	int64_t x307 = INT64_MIN;
	int8_t x308 = 1;
	static int32_t t73 = 194776258;

	t73 = ((x305<=(x306<x307))/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x310 = -83281LL;
	static volatile uint64_t x311 = 104LLU;
	uint32_t x312 = 1349154306U;

	t74 = ((x309<=(x310<x311))/x312);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	volatile int64_t x316 = INT64_MIN;

	t75 = ((x313<=(x314<x315))/x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = UINT32_MAX;
	static int16_t x318 = INT16_MIN;
	static uint8_t x319 = UINT8_MAX;
	volatile int32_t t76 = 7353;

	t76 = ((x317<=(x318<x319))/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = 8348144650LLU;
	uint32_t x322 = UINT32_MAX;
	static uint32_t x323 = UINT32_MAX;
	int64_t t77 = 531708582187LL;

	t77 = ((x321<=(x322<x323))/x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = UINT32_MAX;
	uint8_t x330 = 1U;
	uint8_t x331 = 1U;
	int64_t x332 = -1LL;
	int64_t t78 = -361642097036672772LL;

	t78 = ((x329<=(x330<x331))/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x334 = INT32_MAX;
	uint8_t x335 = UINT8_MAX;
	static int16_t x336 = -1;
	volatile int32_t t79 = -27310776;

	t79 = ((x333<=(x334<x335))/x336);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x337 = UINT32_MAX;
	int64_t x338 = 6755458894831113LL;
	volatile int8_t x339 = INT8_MAX;
	static volatile int32_t t80 = -181192;

	t80 = ((x337<=(x338<x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = UINT16_MAX;
	volatile uint32_t x342 = 13691207U;
	volatile int32_t x343 = 11;
	static int8_t x344 = INT8_MIN;

	t81 = ((x341<=(x342<x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 1798U;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t82 = -1954;

	t82 = ((x345<=(x346<x347))/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 351U;
	int8_t x350 = INT8_MAX;
	volatile int16_t x351 = 252;

	t83 = ((x349<=(x350<x351))/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x353 = -62089097870906LL;
	static volatile uint32_t x354 = 5520U;
	int64_t x355 = -672051720186307878LL;

	t84 = ((x353<=(x354<x355))/x356);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x358 = -1;
	static uint64_t x360 = UINT64_MAX;
	uint64_t t85 = 625LLU;

	t85 = ((x357<=(x358<x359))/x360);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = -1;
	uint16_t x362 = 56U;
	int16_t x363 = INT16_MAX;
	int32_t x364 = -1;

	t86 = ((x361<=(x362<x363))/x364);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x365 = -1LL;
	int16_t x366 = -1;
	uint64_t x367 = 1441738197LLU;
	int32_t x368 = -81;
	static volatile int32_t t87 = -242432277;

	t87 = ((x365<=(x366<x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = 455682633U;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 1U;
	static int32_t x376 = INT32_MIN;
	static volatile int32_t t88 = -192;

	t88 = ((x373<=(x374<x375))/x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t89 = 184;

	t89 = ((x377<=(x378<x379))/x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = 25LL;
	volatile int64_t t90 = -7091866LL;

	t90 = ((x381<=(x382<x383))/x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 11U;
	uint64_t x386 = 228192558LLU;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t91 = -13179755;

	t91 = ((x385<=(x386<x387))/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x390 = INT16_MAX;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = 3369;
	int32_t t92 = 35;

	t92 = ((x389<=(x390<x391))/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x396 = UINT8_MAX;
	int32_t t93 = -2615;

	t93 = ((x393<=(x394<x395))/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x397 = 219U;
	static int32_t x399 = INT32_MIN;
	int32_t x400 = -1;
	volatile int32_t t94 = 447895;

	t94 = ((x397<=(x398<x399))/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 589U;
	static uint32_t x402 = 528U;
	int16_t x403 = -3550;
	volatile int32_t t95 = -578191;

	t95 = ((x401<=(x402<x403))/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = 53413514433LL;
	int64_t x406 = -1LL;
	int32_t x407 = INT32_MIN;
	int32_t x408 = -1;

	t96 = ((x405<=(x406<x407))/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = INT64_MIN;
	volatile uint64_t t97 = 1663868516484114LLU;

	t97 = ((x409<=(x410<x411))/x412);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x413 = 0U;
	static uint8_t x415 = 123U;
	static volatile int64_t x416 = 283LL;
	static int64_t t98 = -66997179421298LL;

	t98 = ((x413<=(x414<x415))/x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 1U;
	uint64_t x418 = 40481326125LLU;
	int64_t x419 = INT64_MIN;
	int32_t x420 = -1;

	t99 = ((x417<=(x418<x419))/x420);

	if (t99 != -1) { NG(); } else { ; }
	
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

