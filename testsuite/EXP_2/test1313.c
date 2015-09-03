#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 23U;
uint8_t x15 = 41U;
volatile int64_t t5 = INT64_MIN;
int32_t t6 = INT32_MAX;
volatile uint8_t x30 = UINT8_MAX;
int16_t x37 = INT16_MIN;
volatile int64_t x39 = 2045875LL;
int32_t t9 = 809649242;
uint32_t x41 = UINT32_MAX;
int64_t x44 = -1LL;
volatile int64_t t10 = 0LL;
uint8_t x45 = UINT8_MAX;
int16_t x48 = INT16_MIN;
int32_t x49 = 14611094;
uint64_t x51 = 801917LLU;
static int8_t x55 = -1;
volatile int64_t t17 = -220583244LL;
int64_t x75 = INT64_MIN;
static uint32_t x81 = 1610U;
static volatile int32_t t20 = 96147;
uint32_t x89 = UINT32_MAX;
int8_t x90 = INT8_MAX;
int64_t x91 = -1LL;
volatile int32_t t22 = -128665;
static int8_t x96 = 2;
volatile uint16_t x98 = UINT16_MAX;
int32_t x99 = 0;
static int16_t x101 = -1;
int8_t x104 = INT8_MAX;
static uint8_t x106 = 5U;
int8_t x107 = INT8_MIN;
static volatile uint16_t x119 = UINT16_MAX;
uint32_t x121 = 95U;
static volatile int16_t x125 = INT16_MIN;
int64_t x128 = 921232LL;
int8_t x133 = INT8_MAX;
int64_t x134 = 8324115076568LL;
int32_t x141 = INT32_MIN;
uint8_t x145 = 1U;
static int32_t x146 = 21402;
static volatile uint16_t x150 = 27U;
static int64_t t37 = -2189236610134LL;
int32_t x156 = -1;
int64_t x158 = INT64_MAX;
volatile int64_t x159 = INT64_MAX;
volatile int32_t t39 = -895;
uint8_t x161 = 3U;
static uint32_t x167 = 1815216U;
int8_t x168 = INT8_MAX;
int64_t x170 = 15776LL;
int32_t x171 = INT32_MIN;
static volatile int32_t t42 = 82862;
uint16_t x174 = 4639U;
uint16_t x183 = 878U;
uint16_t x184 = 24U;
int32_t t45 = -107490481;
volatile uint32_t x201 = 494154274U;
uint16_t x203 = 15846U;
int64_t x204 = INT64_MAX;
volatile int64_t t50 = INT64_MAX;
int8_t x228 = -6;
volatile int16_t x229 = -9;
uint64_t x232 = 115138319LLU;
int64_t x234 = -153705406952785LL;
static int8_t x238 = 4;
uint8_t x244 = UINT8_MAX;
volatile int64_t x253 = INT64_MIN;
int8_t x257 = -5;
int32_t t64 = -14736276;
uint8_t x271 = 2U;
int8_t x276 = INT8_MAX;
volatile int32_t t69 = INT32_MIN;
uint64_t x287 = 207LLU;
uint32_t x290 = UINT32_MAX;
uint16_t x291 = 2U;
static int16_t x292 = -7;
volatile int32_t t72 = 6;
uint64_t x303 = UINT64_MAX;
static uint16_t x305 = UINT16_MAX;
volatile int16_t x306 = 1775;
int32_t t76 = INT32_MIN;
uint32_t x312 = UINT32_MAX;
uint16_t x313 = 52U;
uint32_t x314 = UINT32_MAX;
uint16_t x316 = UINT16_MAX;
volatile int32_t t78 = -5827523;
volatile uint32_t x317 = UINT32_MAX;
static volatile uint32_t x318 = 0U;
uint64_t x321 = UINT64_MAX;
uint64_t x330 = 10290810964LLU;
int32_t x331 = -187;
volatile uint32_t t82 = 3U;
int32_t x335 = INT32_MIN;
static volatile int64_t t84 = -1031787959714LL;
static int8_t x345 = -1;
int32_t x347 = INT32_MIN;
static int32_t t86 = 26;
int8_t x349 = INT8_MIN;
int32_t x355 = 450184038;
volatile uint64_t x358 = 209LLU;
int64_t x359 = -1LL;
int64_t x360 = INT64_MAX;
int8_t x362 = INT8_MAX;
uint64_t x372 = 105620LLU;
int64_t x376 = INT64_MIN;
volatile uint64_t x379 = 275896788729354LLU;
uint64_t x381 = 4LLU;
int32_t x386 = INT32_MIN;
static uint8_t x387 = 95U;
int64_t x389 = INT64_MIN;
volatile int32_t x391 = INT32_MIN;
static int16_t x392 = -1;
int16_t x393 = 67;
uint16_t x395 = 1U;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int64_t x2 = -1LL;
	volatile uint16_t x3 = 121U;
	uint32_t x4 = 384U;
	volatile uint32_t t0 = 111946U;

	t0 = ((x1<=(x2==x3))^x4);

	if (t0 != 385U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 393U;
	uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = INT16_MIN;
	int32_t t1 = -814086;

	t1 = ((x5<=(x6==x7))^x8);

	if (t1 != 23) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	uint8_t x10 = UINT8_MAX;
	static int16_t x11 = INT16_MIN;
	static int64_t x12 = INT64_MIN;
	static int64_t t2 = -1607488533540625927LL;

	t2 = ((x9<=(x10==x11))^x12);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile uint64_t x14 = UINT64_MAX;
	int32_t x16 = -603913301;
	int32_t t3 = 29833101;

	t3 = ((x13<=(x14==x15))^x16);

	if (t3 != -603913301) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	volatile int8_t x18 = INT8_MIN;
	volatile int8_t x19 = INT8_MAX;
	volatile int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -15469975LL;

	t4 = ((x17<=(x18==x19))^x20);

	if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	uint16_t x22 = UINT16_MAX;
	volatile int32_t x23 = 6627113;
	int64_t x24 = INT64_MIN;

	t5 = ((x21<=(x22==x23))^x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x26 = -1;
	uint16_t x27 = 1373U;
	int32_t x28 = INT32_MAX;

	t6 = ((x25<=(x26==x27))^x28);

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x31 = -1;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -352957;

	t7 = ((x29<=(x30==x31))^x32);

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = 45;
	static int64_t x36 = -1LL;
	volatile int64_t t8 = 30898995485268048LL;

	t8 = ((x33<=(x34==x35))^x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = -2193980318938LL;
	int16_t x40 = INT16_MIN;

	t9 = ((x37<=(x38==x39))^x40);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x42 = UINT8_MAX;
	static uint8_t x43 = 0U;

	t10 = ((x41<=(x42==x43))^x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -7;
	uint32_t x47 = 0U;
	volatile int32_t t11 = -2896;

	t11 = ((x45<=(x46==x47))^x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x50 = -220211;
	int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MIN;

	t12 = ((x49<=(x50==x51))^x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int32_t x54 = INT32_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -121884;

	t13 = ((x53<=(x54==x55))^x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 468652U;
	int32_t x58 = INT32_MIN;
	static int64_t x59 = 1431881572LL;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = ((x57<=(x58==x59))^x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	uint64_t x62 = 1110130469342261567LLU;
	volatile int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	int32_t t15 = -464;

	t15 = ((x61<=(x62==x63))^x64);

	if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = 10U;
	volatile uint8_t x66 = 15U;
	int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -176786136;

	t16 = ((x65<=(x66==x67))^x68);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MIN;
	volatile int8_t x71 = 0;
	int64_t x72 = INT64_MIN;

	t17 = ((x69<=(x70==x71))^x72);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int16_t x74 = 0;
	static uint16_t x76 = 3390U;
	volatile int32_t t18 = -1041023;

	t18 = ((x73<=(x74==x75))^x76);

	if (t18 != 3391) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MAX;
	int32_t x79 = 0;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 13739;

	t19 = ((x77<=(x78==x79))^x80);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = 6133;
	volatile int8_t x83 = -6;
	uint16_t x84 = UINT16_MAX;

	t20 = ((x81<=(x82==x83))^x84);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x86 = 7357454395423402LL;
	int8_t x87 = -1;
	uint32_t x88 = 22U;
	volatile uint32_t t21 = 26U;

	t21 = ((x85<=(x86==x87))^x88);

	if (t21 != 22U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x92 = 7U;

	t22 = ((x89<=(x90==x91))^x92);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = 131017;
	static int8_t x95 = INT8_MAX;
	volatile int32_t t23 = -214873;

	t23 = ((x93<=(x94==x95))^x96);

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = ((x97<=(x98==x99))^x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	int32_t t25 = 30951688;

	t25 = ((x101<=(x102==x103))^x104);

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	uint32_t x108 = 643U;
	uint32_t t26 = 167803795U;

	t26 = ((x105<=(x106==x107))^x108);

	if (t26 != 643U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	volatile uint8_t x110 = 10U;
	uint32_t x111 = 245U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 16339606;

	t27 = ((x109<=(x110==x111))^x112);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 51U;
	int8_t x114 = -1;
	uint16_t x115 = UINT16_MAX;
	uint8_t x116 = 2U;
	static volatile int32_t t28 = -20;

	t28 = ((x113<=(x114==x115))^x116);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 87;
	uint64_t x118 = UINT64_MAX;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 3329;

	t29 = ((x117<=(x118==x119))^x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -46;
	int16_t x123 = -1;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -2;

	t30 = ((x121<=(x122==x123))^x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = UINT64_MAX;
	static int16_t x127 = INT16_MAX;
	static int64_t t31 = -18520402977609024LL;

	t31 = ((x125<=(x126==x127))^x128);

	if (t31 != 921233LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	static int8_t x130 = 16;
	uint16_t x131 = 211U;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = INT32_MAX;

	t32 = ((x129<=(x130==x131))^x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x135 = -1;
	int32_t x136 = -1;
	static int32_t t33 = 3544;

	t33 = ((x133<=(x134==x135))^x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 211;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 1042257LLU;
	int64_t x140 = -656569566566708944LL;
	int64_t t34 = -17736181669LL;

	t34 = ((x137<=(x138==x139))^x140);

	if (t34 != -656569566566708944LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 3291277U;
	static uint8_t x143 = 0U;
	int64_t x144 = 1179LL;
	volatile int64_t t35 = -461915LL;

	t35 = ((x141<=(x142==x143))^x144);

	if (t35 != 1178LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x147 = 305U;
	uint32_t x148 = 8U;
	volatile uint32_t t36 = 23U;

	t36 = ((x145<=(x146==x147))^x148);

	if (t36 != 8U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int8_t x151 = -1;
	int64_t x152 = INT64_MIN;

	t37 = ((x149<=(x150==x151))^x152);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 1;
	int8_t x154 = INT8_MAX;
	int16_t x155 = INT16_MIN;
	volatile int32_t t38 = 21627559;

	t38 = ((x153<=(x154==x155))^x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x157 = 46626523906636971LLU;
	uint8_t x160 = UINT8_MAX;

	t39 = ((x157<=(x158==x159))^x160);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -63;
	volatile int32_t t40 = 33382773;

	t40 = ((x161<=(x162==x163))^x164);

	if (t40 != -63) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static uint16_t x166 = UINT16_MAX;
	volatile int32_t t41 = -509;

	t41 = ((x165<=(x166==x167))^x168);

	if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1LL;
	uint16_t x172 = UINT16_MAX;

	t42 = ((x169<=(x170==x171))^x172);

	if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	int32_t x175 = -370898;
	static int8_t x176 = INT8_MAX;
	int32_t t43 = 12132;

	t43 = ((x173<=(x174==x175))^x176);

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	volatile uint32_t x178 = 372227U;
	int8_t x179 = -11;
	uint8_t x180 = UINT8_MAX;
	static volatile int32_t t44 = -15503;

	t44 = ((x177<=(x178==x179))^x180);

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 375;
	int8_t x182 = INT8_MIN;

	t45 = ((x181<=(x182==x183))^x184);

	if (t45 != 24) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static volatile int8_t x186 = -1;
	static uint32_t x187 = 247U;
	volatile int32_t x188 = INT32_MAX;
	static volatile int32_t t46 = -28;

	t46 = ((x185<=(x186==x187))^x188);

	if (t46 != 2147483646) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	volatile int32_t x192 = -1;
	int32_t t47 = -390208;

	t47 = ((x189<=(x190==x191))^x192);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -648;
	static uint16_t x194 = UINT16_MAX;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = 11577348;

	t48 = ((x193<=(x194==x195))^x196);

	if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 23U;
	uint8_t x198 = 30U;
	int8_t x199 = INT8_MIN;
	volatile uint8_t x200 = 11U;
	int32_t t49 = -44;

	t49 = ((x197<=(x198==x199))^x200);

	if (t49 != 11) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 9;

	t50 = ((x201<=(x202==x203))^x204);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int16_t x206 = -9034;
	volatile int8_t x207 = INT8_MAX;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t51 = INT32_MAX;

	t51 = ((x205<=(x206==x207))^x208);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static volatile int32_t x210 = INT32_MIN;
	static volatile uint8_t x211 = 20U;
	static uint32_t x212 = 403244U;
	volatile uint32_t t52 = 283118U;

	t52 = ((x209<=(x210==x211))^x212);

	if (t52 != 403245U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile uint8_t x214 = 13U;
	uint8_t x215 = UINT8_MAX;
	uint16_t x216 = 236U;
	int32_t t53 = 4;

	t53 = ((x213<=(x214==x215))^x216);

	if (t53 != 237) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	uint64_t x218 = 9432985519134LLU;
	int32_t x219 = INT32_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -1;

	t54 = ((x217<=(x218==x219))^x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	uint16_t x222 = 1610U;
	uint16_t x223 = 230U;
	int64_t x224 = INT64_MIN;
	int64_t t55 = 210LL;

	t55 = ((x221<=(x222==x223))^x224);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	volatile int16_t x227 = 25;
	int32_t t56 = 3774636;

	t56 = ((x225<=(x226==x227))^x228);

	if (t56 != -5) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MAX;
	uint64_t x231 = UINT64_MAX;
	static uint64_t t57 = 27706LLU;

	t57 = ((x229<=(x230==x231))^x232);

	if (t57 != 115138318LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	int32_t x235 = -1654;
	uint32_t x236 = 48U;
	uint32_t t58 = 15682218U;

	t58 = ((x233<=(x234==x235))^x236);

	if (t58 != 49U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MAX;
	volatile int16_t x239 = INT16_MIN;
	int16_t x240 = -1;
	volatile int32_t t59 = 9;

	t59 = ((x237<=(x238==x239))^x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	static volatile int8_t x242 = 22;
	static uint16_t x243 = UINT16_MAX;
	volatile int32_t t60 = 323;

	t60 = ((x241<=(x242==x243))^x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	static int32_t x246 = INT32_MIN;
	int64_t x247 = -239LL;
	static volatile int64_t x248 = 0LL;
	volatile int64_t t61 = 2LL;

	t61 = ((x245<=(x246==x247))^x248);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int64_t x251 = -687LL;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 10152856;

	t62 = ((x249<=(x250==x251))^x252);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = -8340875;

	t63 = ((x253<=(x254==x255))^x256);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 0U;
	volatile int16_t x259 = INT16_MAX;
	static volatile int32_t x260 = -1;

	t64 = ((x257<=(x258==x259))^x260);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 16312U;
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t65 = 300071;

	t65 = ((x261<=(x262==x263))^x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 546U;
	static uint8_t x266 = 43U;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = -105821568194636394LL;
	volatile int64_t t66 = -3022994LL;

	t66 = ((x265<=(x266==x267))^x268);

	if (t66 != -105821568194636394LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 1;
	int8_t x270 = INT8_MIN;
	uint64_t x272 = 64764LLU;
	static uint64_t t67 = 11681430591451LLU;

	t67 = ((x269<=(x270==x271))^x272);

	if (t67 != 64764LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	uint32_t x274 = UINT32_MAX;
	static int64_t x275 = -1LL;
	static volatile int32_t t68 = -18;

	t68 = ((x273<=(x274==x275))^x276);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = UINT8_MAX;
	static int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;

	t69 = ((x277<=(x278==x279))^x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 6;
	int64_t x282 = -228237576019LL;
	int32_t x283 = INT32_MIN;
	static volatile int64_t x284 = -1LL;
	volatile int64_t t70 = -54309670466LL;

	t70 = ((x281<=(x282==x283))^x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static uint16_t x286 = 61U;
	int8_t x288 = -1;
	volatile int32_t t71 = 335713;

	t71 = ((x285<=(x286==x287))^x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -1;

	t72 = ((x289<=(x290==x291))^x292);

	if (t72 != -8) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1899;
	int32_t x294 = 4;
	uint64_t x295 = 13034990894515694LLU;
	int16_t x296 = -1;
	volatile int32_t t73 = 63;

	t73 = ((x293<=(x294==x295))^x296);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MAX;
	volatile int16_t x298 = INT16_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int64_t x300 = -1LL;
	volatile int64_t t74 = -420027LL;

	t74 = ((x297<=(x298==x299))^x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	int8_t x302 = -2;
	uint8_t x304 = 118U;
	volatile int32_t t75 = 0;

	t75 = ((x301<=(x302==x303))^x304);

	if (t75 != 119) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x307 = -1;
	int32_t x308 = INT32_MIN;

	t76 = ((x305<=(x306==x307))^x308);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -2;
	uint64_t x310 = 68057772404316010LLU;
	static int8_t x311 = INT8_MIN;
	static uint32_t t77 = 1493U;

	t77 = ((x309<=(x310==x311))^x312);

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x315 = -1;

	t78 = ((x313<=(x314==x315))^x316);

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x319 = UINT8_MAX;
	volatile uint16_t x320 = 222U;
	int32_t t79 = 457;

	t79 = ((x317<=(x318==x319))^x320);

	if (t79 != 222) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = INT16_MAX;
	static int64_t x323 = -307LL;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = ((x321<=(x322==x323))^x324);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 3;
	static int32_t x326 = -451;
	static int64_t x327 = 3817297LL;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 104159089;

	t81 = ((x325<=(x326==x327))^x328);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	uint32_t x332 = 2012968U;

	t82 = ((x329<=(x330==x331))^x332);

	if (t82 != 2012969U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 275660LLU;
	int64_t x334 = 6930093181LL;
	volatile uint8_t x336 = 1U;
	volatile int32_t t83 = -1662;

	t83 = ((x333<=(x334==x335))^x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -3;
	int8_t x338 = INT8_MAX;
	int64_t x339 = INT64_MIN;
	int64_t x340 = 1422265500734LL;

	t84 = ((x337<=(x338==x339))^x340);

	if (t84 != 1422265500735LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	int64_t x342 = 145645046024LL;
	int64_t x343 = 400953229LL;
	static int8_t x344 = -1;
	int32_t t85 = 987068521;

	t85 = ((x341<=(x342==x343))^x344);

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x346 = 2567LL;
	volatile uint16_t x348 = 433U;

	t86 = ((x345<=(x346==x347))^x348);

	if (t86 != 432) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	static int32_t x351 = -3;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -19;

	t87 = ((x349<=(x350==x351))^x352);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MIN;
	uint32_t x356 = 15188917U;
	uint32_t t88 = 11U;

	t88 = ((x353<=(x354==x355))^x356);

	if (t88 != 15188917U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 60725585U;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x357<=(x358==x359))^x360);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static int8_t x363 = INT8_MIN;
	uint16_t x364 = 4674U;
	int32_t t90 = 9213;

	t90 = ((x361<=(x362==x363))^x364);

	if (t90 != 4675) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 17LLU;
	uint16_t x366 = 37U;
	static int16_t x367 = 1;
	static int8_t x368 = 0;
	static int32_t t91 = 247327254;

	t91 = ((x365<=(x366==x367))^x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	static int32_t x370 = 875185797;
	int32_t x371 = INT32_MAX;
	uint64_t t92 = 11897LLU;

	t92 = ((x369<=(x370==x371))^x372);

	if (t92 != 105621LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int32_t x374 = 26;
	int64_t x375 = INT64_MIN;
	volatile int64_t t93 = 78LL;

	t93 = ((x373<=(x374==x375))^x376);

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	static uint32_t x378 = UINT32_MAX;
	volatile uint8_t x380 = 1U;
	int32_t t94 = -5590;

	t94 = ((x377<=(x378==x379))^x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	static int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -211871129;

	t95 = ((x381<=(x382==x383))^x384);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = 2;
	int16_t x388 = -1;
	volatile int32_t t96 = -13492782;

	t96 = ((x385<=(x386==x387))^x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x390 = INT64_MAX;
	volatile int32_t t97 = -20577;

	t97 = ((x389<=(x390==x391))^x392);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x394 = UINT32_MAX;
	int64_t x396 = -1LL;
	int64_t t98 = -25774211428LL;

	t98 = ((x393<=(x394==x395))^x396);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	static int64_t x398 = 79956830751319LL;
	volatile int32_t x399 = INT32_MIN;
	static int16_t x400 = -1;
	int32_t t99 = -547613645;

	t99 = ((x397<=(x398==x399))^x400);

	if (t99 != -2) { NG(); } else { ; }
	
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

