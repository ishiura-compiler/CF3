#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
volatile int32_t t0 = 3;
int64_t x7 = -6691LL;
volatile int64_t t1 = INT64_MIN;
uint16_t x11 = 1U;
static uint16_t x13 = 21404U;
static int32_t x28 = -142;
static uint16_t x32 = 208U;
int16_t x35 = -1;
volatile uint32_t t8 = 3588U;
int64_t x38 = INT64_MIN;
static int16_t x40 = -10818;
uint8_t x41 = 0U;
static volatile int64_t x49 = 13890378124071LL;
int16_t x52 = INT16_MIN;
static volatile int32_t t13 = 0;
static int32_t x57 = -85695442;
static uint16_t x70 = 5U;
int8_t x72 = -1;
int16_t x74 = -4;
volatile uint8_t x75 = 1U;
int64_t x80 = -7116462506306LL;
uint64_t x87 = 30271417LLU;
static int64_t x93 = -1LL;
int8_t x96 = INT8_MIN;
uint32_t t23 = 31651204U;
volatile int32_t t24 = -11;
static uint32_t x110 = 332U;
volatile int32_t x111 = INT32_MIN;
int64_t x114 = -1LL;
uint64_t x119 = 1572LLU;
int8_t x120 = INT8_MIN;
volatile int32_t t28 = -86058;
int8_t x121 = INT8_MIN;
uint16_t x124 = 1598U;
int64_t x125 = INT64_MIN;
volatile int32_t t30 = 5;
uint64_t x130 = 32514934LLU;
int16_t x136 = 4;
volatile int32_t t32 = 150458418;
static int16_t x146 = -1;
static volatile int64_t t38 = 13976744008032LL;
uint16_t x163 = 1304U;
volatile uint64_t t39 = 384462203619LLU;
int64_t x165 = INT64_MIN;
int16_t x175 = INT16_MIN;
int8_t x182 = INT8_MIN;
int32_t x183 = 143262751;
int8_t x186 = INT8_MIN;
int16_t x191 = 1;
static volatile uint16_t x200 = UINT16_MAX;
int8_t x201 = -6;
int32_t x209 = INT32_MIN;
volatile uint64_t x210 = 4LLU;
int64_t x219 = 8754088774859LL;
int64_t x232 = INT64_MIN;
uint64_t x237 = 413915674657LLU;
static int64_t x238 = -1LL;
uint64_t x239 = UINT64_MAX;
int32_t x240 = -2244537;
static volatile int64_t x247 = 755791154830LL;
int8_t x260 = INT8_MIN;
int64_t x262 = INT64_MAX;
int8_t x263 = -1;
volatile int64_t t64 = -265185260653LL;
volatile int64_t t65 = 1068781LL;
uint8_t x274 = UINT8_MAX;
int32_t x278 = INT32_MIN;
int64_t x283 = INT64_MIN;
volatile int32_t t68 = 953527;
uint16_t x290 = 344U;
static int8_t x292 = INT8_MIN;
static int32_t t70 = -994561;
volatile int16_t x294 = INT16_MIN;
uint32_t x304 = 15150U;
volatile uint32_t t73 = 2U;
static int32_t x309 = 152206583;
volatile uint32_t x311 = 437936U;
volatile int32_t t75 = INT32_MAX;
int64_t x344 = -2442345LL;
int16_t x346 = 7;
static volatile int32_t t81 = -2;
int16_t x352 = -1;
int32_t x353 = INT32_MIN;
int64_t t84 = INT64_MAX;
static int16_t x361 = -13;
int32_t x364 = INT32_MIN;
int32_t t85 = 14098;
volatile int32_t x367 = -1;
volatile int32_t x370 = INT32_MIN;
int32_t x372 = 6106;
uint32_t t89 = UINT32_MAX;
int32_t x382 = INT32_MAX;
static int16_t x384 = INT16_MAX;
uint16_t x393 = 3U;
static int32_t t94 = -28680;
static int64_t x408 = INT64_MIN;
int32_t t96 = 92;
static volatile int16_t x415 = 523;
uint32_t x416 = 63650261U;
int32_t x418 = INT32_MIN;
int8_t x420 = -31;
volatile int32_t t98 = 279684;


void f0(void) {
	static uint8_t x1 = 2U;
	uint32_t x3 = 2831U;
	int16_t x4 = INT16_MIN;

	t0 = ((x1<(x2<x3))+x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int32_t x6 = -539312247;
	int64_t x8 = INT64_MIN;

	t1 = ((x5<(x6<x7))+x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint32_t x10 = 1393U;
	volatile uint8_t x12 = 13U;
	int32_t t2 = 64612;

	t2 = ((x9<(x10<x11))+x12);

	if (t2 != 14) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	static volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 25915911;

	t3 = ((x13<(x14<x15))+x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 211158437411219LLU;
	int32_t x18 = 118;
	static volatile uint16_t x19 = 7361U;
	static int16_t x20 = 23;
	static volatile int32_t t4 = -2;

	t4 = ((x17<(x18<x19))+x20);

	if (t4 != 23) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 2;
	int32_t x22 = INT32_MAX;
	int64_t x23 = -7068569713486492LL;
	int64_t x24 = 68417784481898219LL;
	static int64_t t5 = 15029050LL;

	t5 = ((x21<(x22<x23))+x24);

	if (t5 != 68417784481898219LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	int8_t x26 = -1;
	int16_t x27 = INT16_MIN;
	int32_t t6 = -2925;

	t6 = ((x25<(x26<x27))+x28);

	if (t6 != -142) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = 30;
	int64_t x30 = INT64_MIN;
	int8_t x31 = INT8_MAX;
	volatile int32_t t7 = -26726;

	t7 = ((x29<(x30<x31))+x32);

	if (t7 != 208) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static uint32_t x34 = 40U;
	uint32_t x36 = UINT32_MAX;

	t8 = ((x33<(x34<x35))+x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	volatile int64_t x39 = INT64_MIN;
	volatile int32_t t9 = -105;

	t9 = ((x37<(x38<x39))+x40);

	if (t9 != -10817) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 371565256LLU;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 510725LLU;

	t10 = ((x41<(x42<x43))+x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 167U;
	int32_t x46 = -30503;
	static int64_t x47 = -1LL;
	volatile uint32_t x48 = 33U;
	static uint32_t t11 = 5901U;

	t11 = ((x45<(x46<x47))+x48);

	if (t11 != 33U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x50 = INT32_MIN;
	volatile int8_t x51 = 1;
	static volatile int32_t t12 = -231025791;

	t12 = ((x49<(x50<x51))+x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	static int32_t x56 = -1;

	t13 = ((x53<(x54<x55))+x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 257516;

	t14 = ((x57<(x58<x59))+x60);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	static volatile uint8_t x66 = 45U;
	int32_t x67 = -54676964;
	static int16_t x68 = -61;
	volatile int32_t t15 = 11056091;

	t15 = ((x65<(x66<x67))+x68);

	if (t15 != -60) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 7U;
	int64_t x71 = INT64_MIN;
	static volatile int32_t t16 = 1763102;

	t16 = ((x69<(x70<x71))+x72);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MAX;
	volatile int32_t x76 = INT32_MAX;
	int32_t t17 = INT32_MAX;

	t17 = ((x73<(x74<x75))+x76);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MAX;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = -2;
	int64_t t18 = -839086468521087980LL;

	t18 = ((x77<(x78<x79))+x80);

	if (t18 != -7116462506306LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 5535;
	uint16_t x82 = 5U;
	volatile int16_t x83 = 13;
	volatile uint16_t x84 = 935U;
	volatile int32_t t19 = 15096;

	t19 = ((x81<(x82<x83))+x84);

	if (t19 != 935) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -4;
	uint8_t x86 = 1U;
	static uint32_t x88 = 404096U;
	volatile uint32_t t20 = 5969U;

	t20 = ((x85<(x86<x87))+x88);

	if (t20 != 404097U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = INT64_MIN;
	int16_t x90 = -1;
	volatile uint64_t x91 = 6LLU;
	static int16_t x92 = -24;
	volatile int32_t t21 = 6959;

	t21 = ((x89<(x90<x91))+x92);

	if (t21 != -23) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x94 = 6796518483104LLU;
	int64_t x95 = INT64_MIN;
	volatile int32_t t22 = -75;

	t22 = ((x93<(x94<x95))+x96);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 1U;
	uint16_t x98 = 2U;
	uint64_t x99 = 98612594LLU;
	uint32_t x100 = 1U;

	t23 = ((x97<(x98<x99))+x100);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MAX;
	static int32_t x104 = -1;

	t24 = ((x101<(x102<x103))+x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = -1;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t25 = 22674554U;

	t25 = ((x105<(x106<x107))+x108);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -7;
	volatile int32_t x112 = INT32_MIN;
	int32_t t26 = -20561;

	t26 = ((x109<(x110<x111))+x112);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = -116605LL;
	volatile int64_t t27 = -511LL;

	t27 = ((x113<(x114<x115))+x116);

	if (t27 != -116605LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MIN;
	int32_t x118 = 0;

	t28 = ((x117<(x118<x119))+x120);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x122 = -33635071LL;
	int8_t x123 = INT8_MAX;
	static int32_t t29 = -65270;

	t29 = ((x121<(x122<x123))+x124);

	if (t29 != 1599) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = UINT32_MAX;
	int64_t x127 = -1LL;
	int32_t x128 = INT32_MIN;

	t30 = ((x125<(x126<x127))+x128);

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x131 = INT16_MIN;
	static uint16_t x132 = 979U;
	volatile int32_t t31 = 916189258;

	t31 = ((x129<(x130<x131))+x132);

	if (t31 != 980) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	volatile int16_t x135 = -14;

	t32 = ((x133<(x134<x135))+x136);

	if (t32 != 5) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x137 = 49U;
	uint32_t x138 = UINT32_MAX;
	volatile uint32_t x139 = 2074829U;
	int64_t x140 = -1LL;
	int64_t t33 = 109034570482LL;

	t33 = ((x137<(x138<x139))+x140);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	static uint16_t x143 = UINT16_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t34 = -181594;

	t34 = ((x141<(x142<x143))+x144);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 809971372;

	t35 = ((x145<(x146<x147))+x148);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -32167LL;
	int32_t x150 = INT32_MIN;
	static volatile int64_t x151 = INT64_MAX;
	static int64_t x152 = -1LL;
	int64_t t36 = -1LL;

	t36 = ((x149<(x150<x151))+x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	volatile int32_t x154 = INT32_MIN;
	uint64_t x155 = UINT64_MAX;
	static uint32_t x156 = 12519960U;
	uint32_t t37 = 30U;

	t37 = ((x153<(x154<x155))+x156);

	if (t37 != 12519961U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x158 = -29629075;
	int32_t x159 = INT32_MIN;
	volatile int64_t x160 = -1LL;

	t38 = ((x157<(x158<x159))+x160);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	int64_t x162 = INT64_MIN;
	uint64_t x164 = 758488815822377LLU;

	t39 = ((x161<(x162<x163))+x164);

	if (t39 != 758488815822378LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = -1;
	int64_t x167 = INT64_MAX;
	int16_t x168 = -1339;
	volatile int32_t t40 = -1042988;

	t40 = ((x165<(x166<x167))+x168);

	if (t40 != -1338) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = -1;
	volatile int16_t x172 = -16;
	volatile int32_t t41 = 40537;

	t41 = ((x169<(x170<x171))+x172);

	if (t41 != -15) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = -434526169;
	int8_t x176 = 1;
	static volatile int32_t t42 = -57094684;

	t42 = ((x173<(x174<x175))+x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -9;
	int32_t x178 = 0;
	int64_t x179 = INT64_MIN;
	static volatile int16_t x180 = -7;
	volatile int32_t t43 = 217349650;

	t43 = ((x177<(x178<x179))+x180);

	if (t43 != -6) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 44337069LL;
	int16_t x184 = INT16_MAX;
	int32_t t44 = 3373;

	t44 = ((x181<(x182<x183))+x184);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 50996U;
	int16_t x187 = INT16_MIN;
	uint16_t x188 = UINT16_MAX;
	static volatile int32_t t45 = -5089;

	t45 = ((x185<(x186<x187))+x188);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MAX;
	volatile int32_t x190 = -1;
	static volatile int64_t x192 = -36163377LL;
	int64_t t46 = -1121429104915LL;

	t46 = ((x189<(x190<x191))+x192);

	if (t46 != -36163377LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	uint32_t x194 = 2640U;
	volatile int32_t x195 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t47 = INT64_MIN;

	t47 = ((x193<(x194<x195))+x196);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = -1;
	static volatile uint64_t x198 = UINT64_MAX;
	uint32_t x199 = UINT32_MAX;
	int32_t t48 = -465;

	t48 = ((x197<(x198<x199))+x200);

	if (t48 != 65536) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = -1;
	uint64_t x203 = 110745610385LLU;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t49 = 93;

	t49 = ((x201<(x202<x203))+x204);

	if (t49 != 65536) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x205 = 354U;
	static uint32_t x206 = 58U;
	int32_t x207 = INT32_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = ((x205<(x206<x207))+x208);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x211 = INT16_MIN;
	static volatile int64_t x212 = INT64_MIN;
	int64_t t51 = 125434878LL;

	t51 = ((x209<(x210<x211))+x212);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -10373;
	volatile uint16_t x214 = 11061U;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	int32_t t52 = 6;

	t52 = ((x213<(x214<x215))+x216);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 4057676473516292LL;
	volatile uint64_t x218 = 72144439LLU;
	static volatile int8_t x220 = INT8_MAX;
	volatile int32_t t53 = 5;

	t53 = ((x217<(x218<x219))+x220);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x226 = 2189734748726696775LL;
	int32_t x227 = INT32_MAX;
	int64_t x228 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = ((x225<(x226<x227))+x228);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = 1;
	uint64_t x231 = UINT64_MAX;
	volatile int64_t t55 = INT64_MIN;

	t55 = ((x229<(x230<x231))+x232);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 0U;
	volatile uint64_t x234 = 205LLU;
	static int8_t x235 = INT8_MAX;
	int8_t x236 = 7;
	volatile int32_t t56 = 28;

	t56 = ((x233<(x234<x235))+x236);

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t t57 = 36912582;

	t57 = ((x237<(x238<x239))+x240);

	if (t57 != -2244537) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int8_t x242 = -8;
	int64_t x243 = -114014711LL;
	int8_t x244 = INT8_MIN;
	int32_t t58 = -1386;

	t58 = ((x241<(x242<x243))+x244);

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = INT32_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	static int8_t x248 = 0;
	static volatile int32_t t59 = -98827018;

	t59 = ((x245<(x246<x247))+x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 16092074476LLU;
	int64_t x252 = 72272126240898LL;
	int64_t t60 = -162098013902743236LL;

	t60 = ((x249<(x250<x251))+x252);

	if (t60 != 72272126240898LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 9U;
	volatile int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MAX;
	static volatile int64_t x256 = -573641000910349LL;
	int64_t t61 = -1324760164733765LL;

	t61 = ((x253<(x254<x255))+x256);

	if (t61 != -573641000910349LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 1102954U;
	int16_t x258 = 0;
	int64_t x259 = INT64_MAX;
	int32_t t62 = 38404380;

	t62 = ((x257<(x258<x259))+x260);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = -124;
	int32_t x264 = -1;
	volatile int32_t t63 = 9;

	t63 = ((x261<(x262<x263))+x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x265 = UINT32_MAX;
	int32_t x266 = 12915021;
	static uint16_t x267 = 1U;
	static int64_t x268 = 15772LL;

	t64 = ((x265<(x266<x267))+x268);

	if (t64 != 15772LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 39U;
	int64_t x270 = INT64_MIN;
	volatile uint64_t x271 = 38747831266LLU;
	int64_t x272 = 67025379776LL;

	t65 = ((x269<(x270<x271))+x272);

	if (t65 != 67025379776LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -9683;
	int32_t x275 = INT32_MIN;
	volatile uint8_t x276 = UINT8_MAX;
	volatile int32_t t66 = -27158872;

	t66 = ((x273<(x274<x275))+x276);

	if (t66 != 256) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	int32_t x279 = INT32_MIN;
	volatile int64_t x280 = INT64_MIN;
	static int64_t t67 = -1198LL;

	t67 = ((x277<(x278<x279))+x280);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 1U;
	static int8_t x282 = INT8_MIN;
	int16_t x284 = INT16_MIN;

	t68 = ((x281<(x282<x283))+x284);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 20U;
	volatile int64_t x286 = 0LL;
	int8_t x287 = 1;
	uint32_t x288 = 38563776U;
	volatile uint32_t t69 = 18U;

	t69 = ((x285<(x286<x287))+x288);

	if (t69 != 38563776U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 1;
	uint8_t x291 = 0U;

	t70 = ((x289<(x290<x291))+x292);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = -1LL;
	int32_t x295 = -592;
	uint64_t x296 = UINT64_MAX;
	uint64_t t71 = 749480784LLU;

	t71 = ((x293<(x294<x295))+x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = INT64_MIN;
	int64_t x298 = 546591931734893022LL;
	int8_t x299 = -1;
	uint32_t x300 = 50U;
	volatile uint32_t t72 = 8U;

	t72 = ((x297<(x298<x299))+x300);

	if (t72 != 51U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 4;
	uint16_t x302 = 6U;
	uint32_t x303 = UINT32_MAX;

	t73 = ((x301<(x302<x303))+x304);

	if (t73 != 15150U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x305 = INT32_MAX;
	volatile int64_t x306 = INT64_MAX;
	volatile int16_t x307 = 2097;
	int16_t x308 = INT16_MIN;
	volatile int32_t t74 = -1;

	t74 = ((x305<(x306<x307))+x308);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x310 = -1;
	int32_t x312 = INT32_MAX;

	t75 = ((x309<(x310<x311))+x312);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = -23799509017LL;
	volatile uint8_t x314 = 9U;
	int8_t x315 = 1;
	int8_t x316 = INT8_MIN;
	volatile int32_t t76 = 953714542;

	t76 = ((x313<(x314<x315))+x316);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = 42220LL;
	volatile int32_t x318 = -254;
	int8_t x319 = 1;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t77 = 7343073;

	t77 = ((x317<(x318<x319))+x320);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MAX;
	int64_t x332 = INT64_MIN;
	static int64_t t78 = 79107439960LL;

	t78 = ((x329<(x330<x331))+x332);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x337 = INT8_MIN;
	static int32_t x338 = -1;
	static uint16_t x339 = 1909U;
	volatile int32_t x340 = -1;
	int32_t t79 = 1;

	t79 = ((x337<(x338<x339))+x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x341 = INT8_MIN;
	static volatile int8_t x342 = 1;
	volatile int16_t x343 = INT16_MIN;
	volatile int64_t t80 = 126601214035797321LL;

	t80 = ((x341<(x342<x343))+x344);

	if (t80 != -2442344LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x345 = INT8_MAX;
	int64_t x347 = INT64_MAX;
	uint8_t x348 = UINT8_MAX;

	t81 = ((x345<(x346<x347))+x348);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = UINT32_MAX;
	uint8_t x350 = UINT8_MAX;
	volatile int64_t x351 = 2685572LL;
	int32_t t82 = 10;

	t82 = ((x349<(x350<x351))+x352);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = -178470;
	int8_t x355 = INT8_MIN;
	int8_t x356 = 28;
	volatile int32_t t83 = -687119552;

	t83 = ((x353<(x354<x355))+x356);

	if (t83 != 29) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x357 = 2574758LLU;
	uint16_t x358 = UINT16_MAX;
	static int16_t x359 = INT16_MIN;
	volatile int64_t x360 = INT64_MAX;

	t84 = ((x357<(x358<x359))+x360);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x362 = 51LL;
	volatile int16_t x363 = INT16_MIN;

	t85 = ((x361<(x362<x363))+x364);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MIN;
	static int16_t x366 = -3;
	static uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t86 = 524231U;

	t86 = ((x365<(x366<x367))+x368);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 307673890U;
	uint32_t x371 = 1450U;
	int32_t t87 = -128793;

	t87 = ((x369<(x370<x371))+x372);

	if (t87 != 6106) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x373 = -2132307135918LL;
	static uint8_t x374 = 125U;
	int8_t x375 = INT8_MAX;
	static int8_t x376 = 0;
	static int32_t t88 = -30903120;

	t88 = ((x373<(x374<x375))+x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x377 = 22U;
	int8_t x378 = -1;
	int8_t x379 = 0;
	uint32_t x380 = UINT32_MAX;

	t89 = ((x377<(x378<x379))+x380);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 10189U;
	int8_t x383 = 0;
	static volatile int32_t t90 = 182;

	t90 = ((x381<(x382<x383))+x384);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x389 = 0U;
	int32_t x390 = 35;
	uint16_t x391 = 0U;
	int32_t x392 = INT32_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = ((x389<(x390<x391))+x392);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x394 = -3106126789625388516LL;
	volatile int64_t x395 = -6150481791LL;
	int64_t x396 = INT64_MIN;
	volatile int64_t t92 = INT64_MIN;

	t92 = ((x393<(x394<x395))+x396);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x397 = 22383349759LLU;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = -1;
	uint8_t x400 = 89U;
	int32_t t93 = -50;

	t93 = ((x397<(x398<x399))+x400);

	if (t93 != 89) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x401 = 584926U;
	int8_t x402 = INT8_MAX;
	int64_t x403 = -1LL;
	int16_t x404 = -1;

	t94 = ((x401<(x402<x403))+x404);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = INT64_MAX;
	int32_t x406 = 42;
	int32_t x407 = INT32_MIN;
	int64_t t95 = INT64_MIN;

	t95 = ((x405<(x406<x407))+x408);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = -1;
	static int32_t x410 = INT32_MAX;
	int64_t x411 = -337478642083LL;
	volatile uint16_t x412 = UINT16_MAX;

	t96 = ((x409<(x410<x411))+x412);

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = INT32_MAX;
	volatile int16_t x414 = INT16_MIN;
	volatile uint32_t t97 = 1999U;

	t97 = ((x413<(x414<x415))+x416);

	if (t97 != 63650261U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x417 = -3LL;
	static int64_t x419 = 12882LL;

	t98 = ((x417<(x418<x419))+x420);

	if (t98 != -30) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x421 = 0U;
	static int8_t x422 = INT8_MAX;
	uint32_t x423 = UINT32_MAX;
	int16_t x424 = 0;
	static volatile int32_t t99 = -72446;

	t99 = ((x421<(x422<x423))+x424);

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

