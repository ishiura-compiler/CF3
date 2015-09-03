#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = 193571963427662094LL;
uint16_t x10 = UINT16_MAX;
int32_t t2 = -1071913794;
int16_t x17 = -1;
int8_t x21 = -58;
int8_t x23 = INT8_MIN;
uint32_t x33 = UINT32_MAX;
int16_t x37 = 132;
static int64_t x39 = -1LL;
int32_t x40 = 1;
uint8_t x41 = 61U;
volatile int32_t t11 = -14644177;
int32_t t12 = 1;
int16_t x53 = 0;
static int32_t x54 = INT32_MIN;
int64_t x55 = -1LL;
volatile int8_t x60 = 4;
int32_t t17 = INT32_MIN;
static uint16_t x76 = 1365U;
uint16_t x87 = 11U;
volatile int64_t t21 = 5710359757LL;
uint32_t x89 = UINT32_MAX;
int32_t t26 = INT32_MIN;
uint64_t x109 = 2013079183288350835LLU;
int32_t x115 = INT32_MIN;
volatile int32_t t28 = -1;
static volatile int16_t x118 = INT16_MIN;
static volatile int16_t x123 = INT16_MIN;
uint32_t t30 = 3528U;
int8_t x125 = -1;
static int64_t x131 = -1LL;
int64_t t32 = INT64_MAX;
static int64_t t33 = -69184692151635LL;
int16_t x137 = INT16_MIN;
static volatile uint64_t x139 = 2046281209220914LLU;
int64_t x140 = INT64_MAX;
volatile int64_t t34 = INT64_MAX;
int32_t t35 = 2669140;
volatile int32_t t36 = -1;
volatile int32_t t37 = -1;
int32_t t38 = 1169;
static int8_t x162 = -1;
static uint32_t x166 = UINT32_MAX;
volatile int64_t x168 = 368074471881LL;
volatile uint64_t x172 = UINT64_MAX;
uint16_t x175 = UINT16_MAX;
volatile uint64_t t43 = 238449398LLU;
int64_t x183 = INT64_MIN;
int16_t x187 = INT16_MAX;
int64_t x190 = -1LL;
int32_t t47 = 870612338;
static volatile uint32_t t48 = 32833U;
uint16_t x202 = UINT16_MAX;
uint64_t x204 = 669289683175932529LLU;
int32_t x211 = INT32_MAX;
volatile uint8_t x215 = 1U;
int32_t x216 = INT32_MIN;
int16_t x217 = INT16_MAX;
int8_t x219 = INT8_MIN;
volatile int64_t x228 = -47186969LL;
int64_t x229 = INT64_MIN;
volatile uint32_t t58 = 3865U;
int64_t x238 = 1440409445240952425LL;
int8_t x239 = -1;
static volatile int32_t x242 = INT32_MIN;
volatile uint8_t x245 = 22U;
uint8_t x248 = 17U;
int32_t t61 = -854;
int8_t x252 = -1;
uint32_t x254 = UINT32_MAX;
int64_t x257 = INT64_MIN;
int32_t t64 = -2509875;
int8_t x262 = INT8_MIN;
uint32_t x264 = UINT32_MAX;
uint16_t x266 = 2U;
volatile int16_t x275 = INT16_MIN;
uint16_t x278 = 4U;
volatile uint8_t x279 = UINT8_MAX;
static uint64_t x284 = UINT64_MAX;
int8_t x285 = -1;
uint32_t x294 = UINT32_MAX;
uint32_t x301 = 179U;
static int16_t x304 = 1;
uint64_t x310 = UINT64_MAX;
uint32_t x311 = UINT32_MAX;
int32_t x313 = INT32_MIN;
int8_t x322 = INT8_MIN;
int8_t x323 = 11;
static volatile int32_t t81 = 2;
uint16_t x332 = 12008U;
volatile int32_t t83 = 6;
int8_t x337 = INT8_MIN;
static int16_t x340 = 8;
volatile uint16_t x343 = UINT16_MAX;
int32_t t85 = 1325733;
static volatile int16_t x348 = 882;
int32_t t86 = 1;
uint32_t x352 = UINT32_MAX;
static volatile uint32_t t87 = UINT32_MAX;
int64_t x359 = INT64_MIN;
int16_t x367 = 2;
volatile int64_t x368 = 51215922098734995LL;
int8_t x371 = -1;
volatile int32_t t93 = 49;
int8_t x381 = INT8_MIN;
volatile int64_t x383 = INT64_MIN;
int16_t x385 = 2008;
int64_t x386 = -1LL;
volatile uint64_t x389 = UINT64_MAX;
uint8_t x392 = UINT8_MAX;
volatile int32_t x393 = -7;


void f0(void) {
	volatile uint64_t x1 = 1223165791298131LLU;
	int8_t x2 = -1;
	static int16_t x3 = -44;
	static volatile int64_t x4 = -16478345LL;
	static volatile int64_t t0 = 6438704226271LL;

	t0 = (((x1<x2)==x3)+x4);

	if (t0 != -16478345LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile uint8_t x6 = 0U;
	int16_t x7 = INT16_MIN;
	volatile int64_t t1 = 387954426416164LL;

	t1 = (((x5<x6)==x7)+x8);

	if (t1 != 193571963427662094LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	volatile int16_t x11 = INT16_MIN;
	static uint16_t x12 = 5769U;

	t2 = (((x9<x10)==x11)+x12);

	if (t2 != 5769) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile int32_t x14 = 26851722;
	volatile int32_t x15 = INT32_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -2952;

	t3 = (((x13<x14)==x15)+x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	static uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MAX;
	int32_t t4 = INT32_MAX;

	t4 = (((x17<x18)==x19)+x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 26U;
	int64_t x24 = -9949105570461995LL;
	volatile int64_t t5 = -394766214LL;

	t5 = (((x21<x22)==x23)+x24);

	if (t5 != -9949105570461995LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	uint16_t x26 = 3778U;
	int32_t x27 = 20;
	uint64_t x28 = 19305LLU;
	uint64_t t6 = 138597980097519LLU;

	t6 = (((x25<x26)==x27)+x28);

	if (t6 != 19305LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	uint8_t x30 = 52U;
	static int16_t x31 = INT16_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -18640;

	t7 = (((x29<x30)==x31)+x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = UINT32_MAX;
	uint16_t x35 = 5818U;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 3086163;

	t8 = (((x33<x34)==x35)+x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	volatile int32_t t9 = -162627;

	t9 = (((x37<x38)==x39)+x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -333LL;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t x44 = 644034555790LL;
	int64_t t10 = 121107100929LL;

	t10 = (((x41<x42)==x43)+x44);

	if (t10 != 644034555790LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int32_t x46 = INT32_MIN;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = -1;

	t11 = (((x45<x46)==x47)+x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int16_t x51 = -1;
	volatile int16_t x52 = INT16_MAX;

	t12 = (((x49<x50)==x51)+x52);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x56 = UINT64_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x53<x54)==x55)+x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint8_t x58 = 20U;
	int8_t x59 = INT8_MAX;
	int32_t t14 = 5;

	t14 = (((x57<x58)==x59)+x60);

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int64_t x62 = -1LL;
	uint16_t x63 = 1U;
	int64_t x64 = -99LL;
	int64_t t15 = -37369017LL;

	t15 = (((x61<x62)==x63)+x64);

	if (t15 != -98LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	static int8_t x68 = -1;
	static int32_t t16 = 10054102;

	t16 = (((x65<x66)==x67)+x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 743U;
	static volatile int16_t x70 = 31;
	int32_t x71 = 17099;
	int32_t x72 = INT32_MIN;

	t17 = (((x69<x70)==x71)+x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x74 = 204;
	uint64_t x75 = 25LLU;
	static int32_t t18 = 2063836;

	t18 = (((x73<x74)==x75)+x76);

	if (t18 != 1365) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 3U;
	volatile uint8_t x79 = 1U;
	int16_t x80 = -631;
	volatile int32_t t19 = 441802;

	t19 = (((x77<x78)==x79)+x80);

	if (t19 != -631) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = -1;
	volatile int64_t x84 = 1LL;
	int64_t t20 = 8LL;

	t20 = (((x81<x82)==x83)+x84);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	uint8_t x86 = UINT8_MAX;
	int64_t x88 = 1750529078552LL;

	t21 = (((x85<x86)==x87)+x88);

	if (t21 != 1750529078552LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x90 = UINT32_MAX;
	uint16_t x91 = 0U;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 3;

	t22 = (((x89<x90)==x91)+x92);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	int8_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	uint32_t x96 = 908133379U;
	volatile uint32_t t23 = 1U;

	t23 = (((x93<x94)==x95)+x96);

	if (t23 != 908133379U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int32_t x98 = -194932588;
	int16_t x99 = -1;
	uint64_t x100 = 398791820LLU;
	uint64_t t24 = 13972667375909LLU;

	t24 = (((x97<x98)==x99)+x100);

	if (t24 != 398791820LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 51U;
	uint16_t x102 = UINT16_MAX;
	static volatile int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x101<x102)==x103)+x104);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	uint16_t x106 = 10U;
	uint8_t x107 = UINT8_MAX;
	volatile int32_t x108 = INT32_MIN;

	t26 = (((x105<x106)==x107)+x108);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 3839LLU;
	volatile int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = (((x109<x110)==x111)+x112);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -45;
	volatile int8_t x114 = -1;
	volatile uint16_t x116 = UINT16_MAX;

	t28 = (((x113<x114)==x115)+x116);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	uint64_t x119 = 3060043145188347LLU;
	int16_t x120 = 768;
	int32_t t29 = 245117;

	t29 = (((x117<x118)==x119)+x120);

	if (t29 != 768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int32_t x122 = INT32_MIN;
	static uint32_t x124 = 1727003U;

	t30 = (((x121<x122)==x123)+x124);

	if (t30 != 1727003U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MAX;
	int64_t x127 = -1LL;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t31 = -559048;

	t31 = (((x125<x126)==x127)+x128);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	uint64_t x130 = UINT64_MAX;
	int64_t x132 = INT64_MAX;

	t32 = (((x129<x130)==x131)+x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile int16_t x134 = -6936;
	uint16_t x135 = 61U;
	int64_t x136 = -1149711472025LL;

	t33 = (((x133<x134)==x135)+x136);

	if (t33 != -1149711472025LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x138 = INT8_MIN;

	t34 = (((x137<x138)==x139)+x140);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 13U;
	static int32_t x142 = INT32_MAX;
	int8_t x143 = INT8_MIN;
	int16_t x144 = 908;

	t35 = (((x141<x142)==x143)+x144);

	if (t35 != 908) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -9LL;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = INT64_MIN;
	uint16_t x148 = 1U;

	t36 = (((x145<x146)==x147)+x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int32_t x150 = -1;
	volatile uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 1U;

	t37 = (((x149<x150)==x151)+x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 0U;
	uint32_t x154 = 91751457U;
	int16_t x155 = -1;
	int16_t x156 = INT16_MIN;

	t38 = (((x153<x154)==x155)+x156);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	uint64_t x158 = 628526596446029621LLU;
	int64_t x159 = INT64_MIN;
	int8_t x160 = 1;
	volatile int32_t t39 = 7822;

	t39 = (((x157<x158)==x159)+x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 6;
	uint8_t x163 = 40U;
	static int32_t x164 = -1;
	static int32_t t40 = -64855503;

	t40 = (((x161<x162)==x163)+x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	static int64_t t41 = 3875774296LL;

	t41 = (((x165<x166)==x167)+x168);

	if (t41 != 368074471881LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	static int8_t x170 = 1;
	int32_t x171 = INT32_MIN;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (((x169<x170)==x171)+x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = UINT8_MAX;
	volatile uint64_t x176 = 10319329470309796LLU;

	t43 = (((x173<x174)==x175)+x176);

	if (t43 != 10319329470309796LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	volatile uint16_t x180 = 17U;
	static int32_t t44 = -284104;

	t44 = (((x177<x178)==x179)+x180);

	if (t44 != 17) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	uint32_t t45 = UINT32_MAX;

	t45 = (((x181<x182)==x183)+x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	int8_t x186 = 2;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = INT32_MIN;

	t46 = (((x185<x186)==x187)+x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	volatile int64_t x191 = INT64_MAX;
	static int32_t x192 = -1;

	t47 = (((x189<x190)==x191)+x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int8_t x194 = -1;
	int64_t x195 = -1996941691327LL;
	static uint32_t x196 = 567993039U;

	t48 = (((x193<x194)==x195)+x196);

	if (t48 != 567993039U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = -4;
	volatile int32_t x199 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -17790;

	t49 = (((x197<x198)==x199)+x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 924U;
	static uint64_t x203 = 601559LLU;
	uint64_t t50 = 26502267LLU;

	t50 = (((x201<x202)==x203)+x204);

	if (t50 != 669289683175932529LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int8_t x206 = 0;
	uint16_t x207 = UINT16_MAX;
	static volatile int8_t x208 = INT8_MIN;
	int32_t t51 = -59258;

	t51 = (((x205<x206)==x207)+x208);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -561416161LL;
	uint8_t x210 = 3U;
	int64_t x212 = -1LL;
	static volatile int64_t t52 = 3967148LL;

	t52 = (((x209<x210)==x211)+x212);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = 1;
	int32_t t53 = 409399;

	t53 = (((x213<x214)==x215)+x216);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = INT8_MAX;
	int16_t x220 = -225;
	static int32_t t54 = -44;

	t54 = (((x217<x218)==x219)+x220);

	if (t54 != -225) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = 18879U;
	static volatile uint32_t x223 = 0U;
	static uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = -156603213;

	t55 = (((x221<x222)==x223)+x224);

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = INT16_MIN;
	volatile int8_t x227 = INT8_MIN;
	int64_t t56 = -12463662LL;

	t56 = (((x225<x226)==x227)+x228);

	if (t56 != -47186969LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = 54310;

	t57 = (((x229<x230)==x231)+x232);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = UINT64_MAX;
	uint64_t x234 = 5203448273311736785LLU;
	static int16_t x235 = INT16_MIN;
	volatile uint32_t x236 = 7246383U;

	t58 = (((x233<x234)==x235)+x236);

	if (t58 != 7246383U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;
	static uint64_t t59 = UINT64_MAX;

	t59 = (((x237<x238)==x239)+x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 7;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;
	static int32_t t60 = 5;

	t60 = (((x241<x242)==x243)+x244);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = 16;
	volatile uint32_t x247 = UINT32_MAX;

	t61 = (((x245<x246)==x247)+x248);

	if (t61 != 17) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 53U;
	static uint8_t x250 = 8U;
	static uint32_t x251 = 203428U;
	volatile int32_t t62 = -342465248;

	t62 = (((x249<x250)==x251)+x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -4;
	static uint16_t x255 = 4573U;
	static int16_t x256 = INT16_MIN;
	int32_t t63 = -81339;

	t63 = (((x253<x254)==x255)+x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x258 = 16U;
	volatile uint64_t x259 = UINT64_MAX;
	int16_t x260 = 7505;

	t64 = (((x257<x258)==x259)+x260);

	if (t64 != 7505) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	int8_t x263 = INT8_MIN;
	static volatile uint32_t t65 = UINT32_MAX;

	t65 = (((x261<x262)==x263)+x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	static volatile int64_t x267 = 1016689265612LL;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t66 = INT32_MIN;

	t66 = (((x265<x266)==x267)+x268);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 2U;
	volatile int32_t x270 = INT32_MIN;
	static int64_t x271 = INT64_MIN;
	volatile uint8_t x272 = 64U;
	int32_t t67 = 1;

	t67 = (((x269<x270)==x271)+x272);

	if (t67 != 64) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MAX;
	int8_t x274 = INT8_MAX;
	int8_t x276 = -1;
	int32_t t68 = -46;

	t68 = (((x273<x274)==x275)+x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int8_t x280 = -4;
	volatile int32_t t69 = 31949727;

	t69 = (((x277<x278)==x279)+x280);

	if (t69 != -4) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 24335U;
	int8_t x282 = INT8_MAX;
	static uint64_t x283 = 82259879820786776LLU;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x281<x282)==x283)+x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x286 = UINT32_MAX;
	volatile int64_t x287 = 1024419302116675LL;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 41880;

	t71 = (((x285<x286)==x287)+x288);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 172592331LLU;
	int32_t x290 = 527405792;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = -1;
	volatile int32_t t72 = -239;

	t72 = (((x289<x290)==x291)+x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x293 = 4400LLU;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = INT32_MIN;

	t73 = (((x293<x294)==x295)+x296);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 23;
	static int8_t x298 = INT8_MAX;
	uint32_t x299 = 19243268U;
	uint64_t x300 = 5429257LLU;
	uint64_t t74 = 1116943LLU;

	t74 = (((x297<x298)==x299)+x300);

	if (t74 != 5429257LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	static int32_t x303 = INT32_MIN;
	volatile int32_t t75 = -1811;

	t75 = (((x301<x302)==x303)+x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x305 = UINT8_MAX;
	volatile int8_t x306 = -1;
	int64_t x307 = INT64_MAX;
	int32_t x308 = -483;
	int32_t t76 = 75433317;

	t76 = (((x305<x306)==x307)+x308);

	if (t76 != -483) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = UINT64_MAX;
	int64_t x312 = -1LL;
	volatile int64_t t77 = -2968LL;

	t77 = (((x309<x310)==x311)+x312);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 265614099478LLU;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = 0U;
	int32_t t78 = -5961;

	t78 = (((x313<x314)==x315)+x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -147066485;
	static uint64_t x318 = 62LLU;
	int8_t x319 = -40;
	static volatile int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -3202;

	t79 = (((x317<x318)==x319)+x320);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 106U;
	static int32_t x324 = -25;
	static volatile int32_t t80 = -29228;

	t80 = (((x321<x322)==x323)+x324);

	if (t80 != -25) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = 0;
	volatile uint16_t x327 = 1703U;
	static volatile uint8_t x328 = 0U;

	t81 = (((x325<x326)==x327)+x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = 11U;
	uint16_t x331 = 104U;
	int32_t t82 = 58595175;

	t82 = (((x329<x330)==x331)+x332);

	if (t82 != 12008) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 4321;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;

	t83 = (((x333<x334)==x335)+x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	int64_t x339 = -1LL;
	volatile int32_t t84 = -7055;

	t84 = (((x337<x338)==x339)+x340);

	if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 2LLU;
	int16_t x342 = -1;
	static uint16_t x344 = 2U;

	t85 = (((x341<x342)==x343)+x344);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MIN;
	uint8_t x346 = 3U;
	int64_t x347 = -1LL;

	t86 = (((x345<x346)==x347)+x348);

	if (t86 != 882) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -5;
	static uint8_t x350 = UINT8_MAX;
	int32_t x351 = INT32_MAX;

	t87 = (((x349<x350)==x351)+x352);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	volatile uint64_t x354 = 54939306000256099LLU;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -1;
	volatile int32_t t88 = 19054763;

	t88 = (((x353<x354)==x355)+x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	volatile int64_t x358 = INT64_MIN;
	int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = (((x357<x358)==x359)+x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 99567940841970LLU;
	volatile uint8_t x362 = UINT8_MAX;
	int32_t x363 = -294;
	volatile int64_t x364 = INT64_MAX;
	int64_t t90 = INT64_MAX;

	t90 = (((x361<x362)==x363)+x364);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MAX;
	int64_t t91 = 124444659230110141LL;

	t91 = (((x365<x366)==x367)+x368);

	if (t91 != 51215922098734995LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 63241;
	int8_t x370 = -1;
	static uint16_t x372 = 6U;
	static volatile int32_t t92 = -3270297;

	t92 = (((x369<x370)==x371)+x372);

	if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	static int16_t x374 = -95;
	static int32_t x375 = 2398919;
	uint16_t x376 = 12240U;

	t93 = (((x373<x374)==x375)+x376);

	if (t93 != 12240) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 470823U;
	volatile int64_t x378 = INT64_MIN;
	static int16_t x379 = INT16_MIN;
	uint32_t x380 = 971817919U;
	static uint32_t t94 = 50777124U;

	t94 = (((x377<x378)==x379)+x380);

	if (t94 != 971817919U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x382 = 2784836252639LL;
	volatile int8_t x384 = -34;
	volatile int32_t t95 = 400;

	t95 = (((x381<x382)==x383)+x384);

	if (t95 != -34) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x387 = 105;
	int64_t x388 = INT64_MIN;
	static int64_t t96 = INT64_MIN;

	t96 = (((x385<x386)==x387)+x388);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 1684U;
	static uint8_t x391 = UINT8_MAX;
	volatile int32_t t97 = -1;

	t97 = (((x389<x390)==x391)+x392);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x394 = UINT8_MAX;
	volatile uint64_t x395 = UINT64_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = 0;

	t98 = (((x393<x394)==x395)+x396);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x397 = UINT32_MAX;
	int8_t x398 = 1;
	int8_t x399 = INT8_MAX;
	volatile int32_t x400 = 148;
	volatile int32_t t99 = 929581;

	t99 = (((x397<x398)==x399)+x400);

	if (t99 != 148) { NG(); } else { ; }
	
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

