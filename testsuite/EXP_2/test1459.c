#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 8U;
volatile int32_t t1 = 1002;
uint32_t x9 = 4034U;
uint32_t x21 = UINT32_MAX;
uint16_t x42 = 7259U;
static int8_t x43 = INT8_MIN;
int16_t x47 = INT16_MIN;
int16_t x48 = INT16_MAX;
volatile int64_t x49 = INT64_MIN;
volatile int8_t x50 = -1;
int32_t x57 = 100;
uint64_t x58 = UINT64_MAX;
int16_t x69 = INT16_MAX;
volatile uint32_t x79 = 562948708U;
uint64_t x80 = UINT64_MAX;
int32_t x82 = -1;
int16_t x84 = 12;
int32_t x85 = 390947;
int8_t x89 = INT8_MAX;
static uint64_t x92 = UINT64_MAX;
static int32_t x98 = INT32_MAX;
static uint16_t x103 = UINT16_MAX;
int32_t x109 = 1949751;
static uint8_t x117 = UINT8_MAX;
int16_t x120 = -234;
int32_t t30 = 2804;
uint64_t x131 = 272136103516868668LLU;
int8_t x135 = 1;
int16_t x137 = INT16_MAX;
int32_t t34 = 5497712;
int16_t x142 = INT16_MIN;
int8_t x154 = -3;
static int64_t x162 = 45602933LL;
uint32_t x165 = 18344771U;
static int16_t x167 = INT16_MAX;
int32_t x168 = INT32_MIN;
int8_t x169 = -7;
static int16_t x170 = INT16_MIN;
volatile int32_t t42 = -486212162;
int32_t x175 = 94965;
volatile int32_t t46 = -271536387;
uint16_t x192 = UINT16_MAX;
int32_t x202 = INT32_MIN;
volatile int32_t t50 = -3031;
int32_t x208 = -51467;
volatile int32_t x229 = 10396;
volatile int64_t x230 = -130399221177324891LL;
volatile int64_t t57 = -946195LL;
volatile uint16_t x236 = 117U;
static int8_t x243 = INT8_MIN;
uint64_t x244 = 44846105937962637LLU;
int64_t x258 = -2LL;
volatile int64_t t64 = 72LL;
volatile int8_t x264 = -5;
int8_t x265 = INT8_MIN;
int32_t x276 = INT32_MIN;
int16_t x279 = INT16_MAX;
int64_t t69 = 80103033368536674LL;
static int16_t x281 = 186;
static int8_t x282 = INT8_MIN;
static volatile uint16_t x283 = UINT16_MAX;
int32_t x289 = -1;
uint64_t t72 = UINT64_MAX;
volatile uint64_t t73 = 51LLU;
static uint32_t t77 = 461981U;
static uint8_t x319 = 9U;
int32_t x322 = INT32_MAX;
int32_t t80 = -662;
int32_t t81 = -7;
uint8_t x332 = UINT8_MAX;
uint64_t t83 = 648643242980LLU;
int16_t x337 = INT16_MIN;
volatile uint16_t x339 = 383U;
int16_t x341 = 15;
volatile int16_t x347 = -12774;
int16_t x349 = INT16_MIN;
int32_t x363 = -922675;
int32_t x365 = INT32_MAX;
uint16_t x366 = UINT16_MAX;
int32_t x371 = -1;
int8_t x375 = INT8_MAX;
int32_t x376 = INT32_MIN;
int64_t x384 = INT64_MAX;
int32_t x385 = INT32_MIN;
static int32_t t96 = -2737;
uint8_t x391 = 97U;
volatile int32_t x395 = -12;
int16_t x399 = INT16_MAX;
static int32_t t99 = -25;


void f0(void) {
	volatile int8_t x1 = -7;
	int16_t x2 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 158160;

	t0 = ((x1<(x2<x3))*x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	static uint8_t x6 = 72U;
	uint64_t x7 = 7920248LLU;
	volatile uint16_t x8 = UINT16_MAX;

	t1 = ((x5<(x6<x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 128982452186188059LLU;
	int64_t x11 = -1LL;
	int8_t x12 = -34;
	static volatile int32_t t2 = -1;

	t2 = ((x9<(x10<x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 5158;
	static int16_t x14 = 3;
	static int8_t x15 = 8;
	static int64_t x16 = -95780279LL;
	static int64_t t3 = 30516284LL;

	t3 = ((x13<(x14<x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -354646148206343LL;
	volatile int16_t x18 = INT16_MIN;
	volatile int64_t x19 = INT64_MAX;
	static volatile int64_t x20 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = ((x17<(x18<x19))*x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	volatile uint16_t x23 = 1000U;
	static int64_t x24 = 16373126159LL;
	volatile int64_t t5 = -1509568LL;

	t5 = ((x21<(x22<x23))*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -11;
	int16_t x26 = -39;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = INT32_MIN;

	t6 = ((x25<(x26<x27))*x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	int64_t x30 = -1LL;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 11;

	t7 = ((x29<(x30<x31))*x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	static volatile uint64_t x34 = UINT64_MAX;
	volatile int16_t x35 = -1;
	uint8_t x36 = 94U;
	static volatile int32_t t8 = -4792;

	t8 = ((x33<(x34<x35))*x36);

	if (t8 != 94) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint16_t x38 = 27535U;
	static volatile int16_t x39 = -1;
	uint32_t x40 = 353641U;
	volatile uint32_t t9 = 3U;

	t9 = ((x37<(x38<x39))*x40);

	if (t9 != 353641U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static volatile uint32_t x44 = 0U;
	uint32_t t10 = 263U;

	t10 = ((x41<(x42<x43))*x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 2522791400313059LL;
	int16_t x46 = INT16_MAX;
	int32_t t11 = -3793466;

	t11 = ((x45<(x46<x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = 17949028;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = INT32_MIN;

	t12 = ((x49<(x50<x51))*x52);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	volatile int64_t x54 = INT64_MIN;
	static uint16_t x55 = 145U;
	volatile int64_t x56 = INT64_MIN;
	int64_t t13 = INT64_MIN;

	t13 = ((x53<(x54<x55))*x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = 2325915;

	t14 = ((x57<(x58<x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	int8_t x62 = -7;
	static uint32_t x63 = 2U;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -2317519814796LL;

	t15 = ((x61<(x62<x63))*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -2003;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	uint8_t x68 = 0U;
	static int32_t t16 = -15597610;

	t16 = ((x65<(x66<x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = -1;
	uint8_t x71 = 0U;
	static uint64_t x72 = 8477919986293LLU;
	volatile uint64_t t17 = 27104357LLU;

	t17 = ((x69<(x70<x71))*x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 678543759U;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 6460U;
	static volatile int32_t t18 = 119;

	t18 = ((x73<(x74<x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -9279LL;
	int8_t x78 = 7;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x77<(x78<x79))*x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 30U;
	static int16_t x83 = INT16_MAX;
	volatile int32_t t20 = 24;

	t20 = ((x81<(x82<x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MAX;
	static int16_t x87 = 0;
	static int32_t x88 = INT32_MIN;
	static int32_t t21 = 262;

	t21 = ((x85<(x86<x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x90 = 56179688LLU;
	volatile int8_t x91 = -1;
	uint64_t t22 = 382279487603830LLU;

	t22 = ((x89<(x90<x91))*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	volatile int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = INT16_MIN;
	int32_t t23 = 0;

	t23 = ((x93<(x94<x95))*x96);

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -13793905LL;
	volatile uint32_t x99 = 2936U;
	static int64_t x100 = INT64_MIN;
	static int64_t t24 = INT64_MIN;

	t24 = ((x97<(x98<x99))*x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 454;
	int64_t x102 = 10LL;
	int16_t x104 = -1;
	volatile int32_t t25 = 52500537;

	t25 = ((x101<(x102<x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	static int64_t x106 = 2LL;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	int64_t t26 = INT64_MIN;

	t26 = ((x105<(x106<x107))*x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 44961844;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	int32_t t27 = 1919819;

	t27 = ((x109<(x110<x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = INT8_MIN;
	uint8_t x116 = 18U;
	int32_t t28 = 52153;

	t28 = ((x113<(x114<x115))*x116);

	if (t28 != 18) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 44998LLU;
	int32_t x119 = -1;
	static volatile int32_t t29 = 7870;

	t29 = ((x117<(x118<x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 3269834225012867LLU;
	int8_t x122 = INT8_MIN;
	volatile uint32_t x123 = 442U;
	int8_t x124 = INT8_MAX;

	t30 = ((x121<(x122<x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1;
	static int64_t x126 = INT64_MIN;
	uint8_t x127 = 1U;
	volatile uint16_t x128 = 16854U;
	volatile int32_t t31 = -3963231;

	t31 = ((x125<(x126<x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 208U;
	int8_t x130 = INT8_MIN;
	uint8_t x132 = 60U;
	int32_t t32 = 147;

	t32 = ((x129<(x130<x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static volatile int64_t x134 = -1LL;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 375937;

	t33 = ((x133<(x134<x135))*x136);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MAX;
	int32_t x140 = -1;

	t34 = ((x137<(x138<x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int16_t x143 = -1;
	static uint32_t x144 = 45672038U;
	uint32_t t35 = 561912U;

	t35 = ((x141<(x142<x143))*x144);

	if (t35 != 45672038U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 78677U;
	int16_t x146 = INT16_MIN;
	volatile int8_t x147 = INT8_MIN;
	volatile int8_t x148 = INT8_MAX;
	volatile int32_t t36 = 0;

	t36 = ((x145<(x146<x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MAX;
	volatile uint32_t x151 = 44U;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 1677;

	t37 = ((x149<(x150<x151))*x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	static int16_t x155 = -1;
	volatile uint64_t x156 = 3LLU;
	static uint64_t t38 = 29LLU;

	t38 = ((x153<(x154<x155))*x156);

	if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int16_t x159 = 7533;
	uint16_t x160 = 4U;
	static volatile int32_t t39 = -12398;

	t39 = ((x157<(x158<x159))*x160);

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static uint32_t x163 = 41926413U;
	int64_t x164 = -1LL;
	int64_t t40 = 272145155897699438LL;

	t40 = ((x161<(x162<x163))*x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	static volatile int32_t t41 = -6370983;

	t41 = ((x165<(x166<x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x171 = -1;
	int16_t x172 = -1;

	t42 = ((x169<(x170<x171))*x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int8_t x174 = INT8_MIN;
	uint8_t x176 = 23U;
	static int32_t t43 = -393103;

	t43 = ((x173<(x174<x175))*x176);

	if (t43 != 23) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 22LLU;
	volatile int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;
	uint32_t t44 = 484U;

	t44 = ((x177<(x178<x179))*x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t45 = INT64_MIN;

	t45 = ((x181<(x182<x183))*x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	static int32_t x186 = INT32_MAX;
	static int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MIN;

	t46 = ((x185<(x186<x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MAX;
	uint64_t x191 = 156LLU;
	int32_t t47 = 193;

	t47 = ((x189<(x190<x191))*x192);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MAX;
	int8_t x194 = -48;
	volatile int32_t x195 = INT32_MAX;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -1;

	t48 = ((x193<(x194<x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 4U;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MIN;
	static volatile uint8_t x200 = 1U;
	volatile int32_t t49 = 11534995;

	t49 = ((x197<(x198<x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	static int32_t x203 = INT32_MAX;
	volatile int16_t x204 = INT16_MIN;

	t50 = ((x201<(x202<x203))*x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 4113U;
	static int16_t x206 = INT16_MIN;
	volatile uint64_t x207 = 234LLU;
	volatile int32_t t51 = 84;

	t51 = ((x205<(x206<x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 643U;
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = 303;

	t52 = ((x209<(x210<x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 8814719007739955990LLU;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	int16_t x216 = -1;
	int32_t t53 = 1;

	t53 = ((x213<(x214<x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile uint8_t x218 = 1U;
	static int32_t x219 = INT32_MIN;
	uint8_t x220 = 27U;
	volatile int32_t t54 = -1638181;

	t54 = ((x217<(x218<x219))*x220);

	if (t54 != 27) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static int16_t x222 = -80;
	int8_t x223 = INT8_MIN;
	volatile uint8_t x224 = UINT8_MAX;
	static volatile int32_t t55 = -48197914;

	t55 = ((x221<(x222<x223))*x224);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = 0;
	int8_t x227 = 10;
	volatile int64_t x228 = 6367LL;
	int64_t t56 = 241995LL;

	t56 = ((x225<(x226<x227))*x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x231 = INT32_MIN;
	static volatile int64_t x232 = 516183LL;

	t57 = ((x229<(x230<x231))*x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	int32_t t58 = -704527;

	t58 = ((x233<(x234<x235))*x236);

	if (t58 != 117) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MAX;
	int32_t x238 = -220558;
	int32_t x239 = INT32_MAX;
	static int32_t x240 = -129;
	static int32_t t59 = 21871;

	t59 = ((x237<(x238<x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -3976;
	int32_t x242 = INT32_MIN;
	uint64_t t60 = 44606107LLU;

	t60 = ((x241<(x242<x243))*x244);

	if (t60 != 44846105937962637LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int64_t x246 = 318372LL;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MAX;
	int32_t t61 = 76002;

	t61 = ((x245<(x246<x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	volatile int8_t x250 = INT8_MAX;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -1;
	int32_t t62 = 140162387;

	t62 = ((x249<(x250<x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 1U;
	static volatile uint32_t x254 = 9867U;
	int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = 273976651662LL;

	t63 = ((x253<(x254<x255))*x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -500784LL;
	uint16_t x259 = UINT16_MAX;
	int64_t x260 = 1046441650543257273LL;

	t64 = ((x257<(x258<x259))*x260);

	if (t64 != 1046441650543257273LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	uint16_t x262 = 3843U;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t t65 = 167908812;

	t65 = ((x261<(x262<x263))*x264);

	if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	static int16_t x268 = 10959;
	volatile int32_t t66 = -13;

	t66 = ((x265<(x266<x267))*x268);

	if (t66 != 10959) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 2605U;
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = INT64_MAX;
	uint8_t x272 = UINT8_MAX;
	int32_t t67 = -8526389;

	t67 = ((x269<(x270<x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x274 = 5U;
	int32_t x275 = -1;
	int32_t t68 = 207937755;

	t68 = ((x273<(x274<x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -3LL;
	uint32_t x278 = 3569U;
	int64_t x280 = 14922LL;

	t69 = ((x277<(x278<x279))*x280);

	if (t69 != 14922LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x284 = 3U;
	int32_t t70 = -368086236;

	t70 = ((x281<(x282<x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 40U;
	int32_t x286 = -1;
	int64_t x287 = INT64_MIN;
	int64_t x288 = 4932476970721LL;
	int64_t t71 = 173396LL;

	t71 = ((x285<(x286<x287))*x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 0U;
	uint64_t x292 = UINT64_MAX;

	t72 = ((x289<(x290<x291))*x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 151444835LLU;

	t73 = ((x293<(x294<x295))*x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 63U;
	int64_t x298 = INT64_MIN;
	static volatile int32_t x299 = INT32_MIN;
	uint16_t x300 = 14U;
	int32_t t74 = -8048009;

	t74 = ((x297<(x298<x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 7U;
	volatile int64_t x302 = INT64_MIN;
	static uint64_t x303 = UINT64_MAX;
	volatile uint64_t x304 = 1589875834681LLU;
	volatile uint64_t t75 = 29871790LLU;

	t75 = ((x301<(x302<x303))*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	volatile int16_t x306 = 6194;
	uint32_t x307 = 122U;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = -634707286;

	t76 = ((x305<(x306<x307))*x308);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 6U;
	uint8_t x310 = UINT8_MAX;
	uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 207U;

	t77 = ((x309<(x310<x311))*x312);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 0U;
	uint16_t x314 = UINT16_MAX;
	volatile uint32_t x315 = 1816U;
	uint8_t x316 = 10U;
	volatile int32_t t78 = 6;

	t78 = ((x313<(x314<x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	uint64_t x318 = 14840765759LLU;
	int64_t x320 = 3446220964329255572LL;
	int64_t t79 = 4003998858LL;

	t79 = ((x317<(x318<x319))*x320);

	if (t79 != 3446220964329255572LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 50;
	int32_t x323 = -1;
	volatile uint8_t x324 = 26U;

	t80 = ((x321<(x322<x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	volatile int64_t x326 = -1LL;
	uint64_t x327 = 14LLU;
	uint8_t x328 = 2U;

	t81 = ((x325<(x326<x327))*x328);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 2U;
	static int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MAX;
	int32_t t82 = -843;

	t82 = ((x329<(x330<x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 0U;
	static int32_t x334 = INT32_MIN;
	volatile int32_t x335 = 989765235;
	uint64_t x336 = 10301319439LLU;

	t83 = ((x333<(x334<x335))*x336);

	if (t83 != 10301319439LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x338 = INT16_MAX;
	int8_t x340 = 0;
	int32_t t84 = -9;

	t84 = ((x337<(x338<x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MAX;
	volatile uint32_t x344 = UINT32_MAX;
	uint32_t t85 = 0U;

	t85 = ((x341<(x342<x343))*x344);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	static int8_t x346 = -1;
	int8_t x348 = INT8_MAX;
	static volatile int32_t t86 = -3;

	t86 = ((x345<(x346<x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = 2639LL;
	uint16_t x351 = 5809U;
	static int16_t x352 = -1;
	volatile int32_t t87 = -66;

	t87 = ((x349<(x350<x351))*x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 5;
	static int64_t x354 = -1LL;
	int8_t x355 = INT8_MAX;
	int32_t x356 = 25467;
	volatile int32_t t88 = -24483283;

	t88 = ((x353<(x354<x355))*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint8_t x358 = 2U;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 94444U;
	uint32_t t89 = 6686U;

	t89 = ((x357<(x358<x359))*x360);

	if (t89 != 94444U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x361 = 1021U;
	volatile int8_t x362 = 42;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -63216450;

	t90 = ((x361<(x362<x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x367 = INT32_MIN;
	volatile int32_t x368 = INT32_MIN;
	int32_t t91 = -1138;

	t91 = ((x365<(x366<x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 47U;
	int8_t x370 = INT8_MIN;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t92 = 0U;

	t92 = ((x369<(x370<x371))*x372);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MIN;
	static int32_t t93 = -12;

	t93 = ((x373<(x374<x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 5709U;
	volatile int32_t x378 = -1;
	static uint32_t x379 = 26297U;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 212;

	t94 = ((x377<(x378<x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int8_t x382 = INT8_MAX;
	static volatile int8_t x383 = 0;
	int64_t t95 = INT64_MAX;

	t95 = ((x381<(x382<x383))*x384);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 389U;
	int16_t x388 = -849;

	t96 = ((x385<(x386<x387))*x388);

	if (t96 != -849) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 1;
	int16_t x390 = -1;
	uint32_t x392 = 253011236U;
	uint32_t t97 = 4U;

	t97 = ((x389<(x390<x391))*x392);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 6LLU;
	volatile uint16_t x394 = 0U;
	uint64_t x396 = 5221504624848LLU;
	uint64_t t98 = 24963556118511029LLU;

	t98 = ((x393<(x394<x395))*x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 2U;
	static uint8_t x398 = UINT8_MAX;
	static int16_t x400 = INT16_MIN;

	t99 = ((x397<(x398<x399))*x400);

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

