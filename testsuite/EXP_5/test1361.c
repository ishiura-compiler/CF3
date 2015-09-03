#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 57U;
volatile int16_t x3 = -1;
volatile int32_t t0 = -1515;
int8_t x11 = INT8_MAX;
uint64_t x17 = 2743436659468703478LLU;
static int32_t x18 = INT32_MIN;
int16_t x19 = -1;
static volatile uint32_t x20 = UINT32_MAX;
int32_t t4 = 265383113;
volatile int16_t x24 = INT16_MAX;
uint16_t x26 = 29U;
static volatile int32_t x28 = -1;
static int32_t x29 = INT32_MIN;
int64_t x38 = INT64_MIN;
static int8_t x42 = INT8_MIN;
static int32_t t10 = 5505;
uint64_t x49 = 223781LLU;
int8_t x57 = INT8_MIN;
uint32_t x58 = UINT32_MAX;
static volatile uint8_t x65 = 1U;
uint64_t x67 = UINT64_MAX;
volatile int32_t t16 = 0;
static uint32_t x73 = UINT32_MAX;
int16_t x75 = 8;
int16_t x77 = INT16_MIN;
int16_t x78 = INT16_MIN;
int64_t x83 = -1LL;
static uint64_t x84 = 22560891102202LLU;
int8_t x91 = 0;
static uint16_t x106 = UINT16_MAX;
int64_t x107 = -8870LL;
uint32_t x111 = 7158U;
static int16_t x112 = -13;
volatile uint32_t x114 = 3088838U;
int16_t x116 = 6;
static int16_t x118 = 125;
int32_t t27 = 13007;
int64_t x128 = INT64_MIN;
int32_t x130 = INT32_MIN;
static volatile int32_t t31 = -14428;
volatile int32_t x138 = -1;
volatile int32_t t32 = 943029;
uint64_t x142 = UINT64_MAX;
int64_t x143 = INT64_MAX;
int32_t x150 = INT32_MIN;
volatile int64_t x152 = -65638220LL;
int8_t x157 = INT8_MAX;
static int8_t x160 = INT8_MAX;
int32_t t37 = -26;
static uint8_t x165 = 9U;
uint32_t x166 = UINT32_MAX;
volatile uint16_t x167 = 477U;
int64_t x169 = INT64_MIN;
volatile int32_t x176 = INT32_MIN;
volatile uint8_t x181 = 2U;
int64_t x189 = INT64_MIN;
static uint8_t x195 = 15U;
static int16_t x200 = -5380;
static int16_t x203 = INT16_MIN;
static int32_t x208 = INT32_MIN;
volatile int32_t t49 = -15911178;
volatile int64_t x211 = INT64_MIN;
volatile int32_t x214 = INT32_MAX;
static volatile uint64_t x219 = UINT64_MAX;
int64_t x221 = INT64_MAX;
int32_t x223 = 1699487;
volatile int32_t t53 = -3424;
uint8_t x234 = 73U;
int8_t x240 = 3;
volatile int32_t t58 = -976;
int16_t x252 = INT16_MIN;
volatile int8_t x254 = INT8_MAX;
static int8_t x259 = INT8_MIN;
static volatile int32_t t61 = -54891;
volatile uint32_t x261 = UINT32_MAX;
int32_t x263 = 0;
volatile int32_t t62 = 36669;
volatile int32_t t63 = 5418;
int8_t x269 = INT8_MIN;
int16_t x271 = 0;
volatile int8_t x272 = -1;
uint32_t x276 = UINT32_MAX;
uint8_t x278 = 0U;
volatile uint16_t x280 = 12332U;
int32_t x281 = INT32_MAX;
static int16_t x283 = INT16_MIN;
volatile int64_t x284 = 4211522LL;
static volatile int32_t t67 = 31349;
static int64_t x287 = -1013820LL;
int8_t x288 = -1;
int32_t x290 = -107626;
uint16_t x291 = 14602U;
uint64_t x292 = 2818838979788157217LLU;
static volatile int16_t x297 = INT16_MIN;
int32_t t72 = 38;
uint32_t x307 = UINT32_MAX;
uint32_t x308 = 185039U;
volatile int32_t x319 = INT32_MIN;
static int8_t x320 = -4;
int32_t t76 = 62049196;
int32_t x331 = INT32_MAX;
int16_t x332 = -1;
int32_t t79 = -3793108;
volatile uint16_t x338 = UINT16_MAX;
uint16_t x339 = UINT16_MAX;
int64_t x342 = INT64_MIN;
int32_t t82 = 0;
int8_t x347 = INT8_MIN;
static int16_t x349 = INT16_MIN;
int64_t x351 = INT64_MIN;
int64_t x356 = -3681LL;
int16_t x366 = INT16_MAX;
int32_t t89 = -1158215;
int8_t x383 = -17;
int32_t x389 = INT32_MIN;
volatile int64_t x391 = INT64_MIN;
int16_t x399 = INT16_MAX;
static int16_t x411 = INT16_MIN;
int8_t x415 = INT8_MAX;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint32_t x4 = 4757U;

	t0 = (x1<((x2<x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 1225517416LLU;
	volatile int64_t x6 = -113072518773082LL;
	volatile int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 27959360;

	t1 = (x5<((x6<x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = -1LL;
	volatile int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = 404851556;

	t2 = (x9<((x10<x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 12834U;
	int64_t x14 = 203932LL;
	int8_t x15 = -1;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = -537204103;

	t3 = (x13<((x14<x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {


	t4 = (x17<((x18<x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = -8LL;
	static int8_t x23 = INT8_MAX;
	int32_t t5 = -498628523;

	t5 = (x21<((x22<x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int64_t x27 = INT64_MIN;
	static int32_t t6 = -523331193;

	t6 = (x25<((x26<x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	static int64_t x31 = INT64_MIN;
	int64_t x32 = 1627261LL;
	volatile int32_t t7 = 3615;

	t7 = (x29<((x30<x31)+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	int16_t x39 = 1;
	uint64_t x40 = 16180447093945LLU;
	volatile int32_t t8 = 1090;

	t8 = (x37<((x38<x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint64_t x43 = 1752475344655417LLU;
	int32_t x44 = 122430;
	static volatile int32_t t9 = -25400529;

	t9 = (x41<((x42<x43)+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	int8_t x46 = -1;
	int32_t x47 = INT32_MAX;
	volatile uint16_t x48 = 243U;

	t10 = (x45<((x46<x47)+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = 408;
	volatile int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t11 = 63;

	t11 = (x49<((x50<x51)+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 0U;
	int64_t x54 = 1328595567564823716LL;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t12 = -132;

	t12 = (x53<((x54<x55)+x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t13 = -117006;

	t13 = (x57<((x58<x59)+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 119376U;
	uint64_t x62 = 643717564798736768LLU;
	volatile int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MAX;
	volatile int32_t t14 = -3;

	t14 = (x61<((x62<x63)+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x66 = 0;
	volatile uint8_t x68 = UINT8_MAX;
	static volatile int32_t t15 = -346;

	t15 = (x65<((x66<x67)+x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MAX;
	volatile int8_t x70 = -11;
	int8_t x71 = -1;
	static int32_t x72 = INT32_MIN;

	t16 = (x69<((x70<x71)+x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -1LL;
	uint16_t x76 = UINT16_MAX;
	static int32_t t17 = 2145;

	t17 = (x73<((x74<x75)+x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x79 = 0;
	uint16_t x80 = UINT16_MAX;
	int32_t t18 = 75652;

	t18 = (x77<((x78<x79)+x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = UINT16_MAX;
	static volatile int64_t x82 = -1162296297756978544LL;
	int32_t t19 = -3506655;

	t19 = (x81<((x82<x83)+x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MAX;
	int64_t x87 = INT64_MIN;
	int8_t x88 = -1;
	int32_t t20 = 90;

	t20 = (x85<((x86<x87)+x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static uint32_t x90 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t21 = 75;

	t21 = (x89<((x90<x91)+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x93 = 3U;
	uint64_t x94 = UINT64_MAX;
	uint16_t x95 = UINT16_MAX;
	uint8_t x96 = 0U;
	volatile int32_t t22 = -6924395;

	t22 = (x93<((x94<x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MAX;
	static int8_t x102 = INT8_MAX;
	static int16_t x103 = 2384;
	int32_t x104 = -1;
	volatile int32_t t23 = 398;

	t23 = (x101<((x102<x103)+x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 42U;
	int16_t x108 = -1;
	int32_t t24 = 16192566;

	t24 = (x105<((x106<x107)+x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 44LLU;
	int32_t x110 = INT32_MIN;
	static volatile int32_t t25 = 34668;

	t25 = (x109<((x110<x111)+x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MAX;
	int8_t x115 = -1;
	int32_t t26 = 55;

	t26 = (x113<((x114<x115)+x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MIN;

	t27 = (x117<((x118<x119)+x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	volatile uint8_t x122 = 0U;
	int16_t x123 = -11;
	int8_t x124 = -10;
	static int32_t t28 = -1044039207;

	t28 = (x121<((x122<x123)+x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MAX;
	static int32_t t29 = 3810018;

	t29 = (x125<((x126<x127)+x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x129 = INT8_MIN;
	static int16_t x131 = -20;
	uint64_t x132 = 5003123LLU;
	volatile int32_t t30 = 15307898;

	t30 = (x129<((x130<x131)+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 28U;
	volatile uint64_t x134 = UINT64_MAX;
	static int16_t x135 = INT16_MIN;
	uint32_t x136 = UINT32_MAX;

	t31 = (x133<((x134<x135)+x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -613867383;
	static int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;

	t32 = (x137<((x138<x139)+x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 12626U;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t33 = 51;

	t33 = (x141<((x142<x143)+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x145 = -1;
	static volatile uint32_t x146 = 29613U;
	int32_t x147 = -10;
	static volatile int16_t x148 = INT16_MIN;
	volatile int32_t t34 = -39;

	t34 = (x145<((x146<x147)+x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int32_t x151 = -1;
	static volatile int32_t t35 = 297541;

	t35 = (x149<((x150<x151)+x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t36 = -4834507;

	t36 = (x153<((x154<x155)+x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x158 = -1;
	int64_t x159 = INT64_MIN;

	t37 = (x157<((x158<x159)+x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = INT8_MAX;
	static int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	static volatile int32_t x164 = -1;
	int32_t t38 = -1;

	t38 = (x161<((x162<x163)+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x168 = -1469LL;
	static volatile int32_t t39 = 7029141;

	t39 = (x165<((x166<x167)+x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = 2;
	static int32_t x171 = -1503907;
	volatile int8_t x172 = INT8_MAX;
	int32_t t40 = 1305555;

	t40 = (x169<((x170<x171)+x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MIN;
	volatile uint8_t x174 = UINT8_MAX;
	static int64_t x175 = INT64_MIN;
	int32_t t41 = -42;

	t41 = (x173<((x174<x175)+x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = -1LL;
	volatile int8_t x178 = -3;
	int8_t x179 = -8;
	int64_t x180 = -1LL;
	static int32_t t42 = -24873786;

	t42 = (x177<((x178<x179)+x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x182 = INT16_MIN;
	int16_t x183 = -11;
	int16_t x184 = INT16_MIN;
	volatile int32_t t43 = 45841;

	t43 = (x181<((x182<x183)+x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = 9U;
	uint16_t x186 = 1731U;
	uint32_t x187 = 10503U;
	int64_t x188 = 101532883298295LL;
	volatile int32_t t44 = -88450214;

	t44 = (x185<((x186<x187)+x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x190 = 4829U;
	uint64_t x191 = 2LLU;
	static int32_t x192 = 117;
	volatile int32_t t45 = -1955;

	t45 = (x189<((x190<x191)+x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	int64_t x196 = -1LL;
	volatile int32_t t46 = -1;

	t46 = (x193<((x194<x195)+x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 37U;
	static int64_t x198 = INT64_MAX;
	volatile int64_t x199 = INT64_MIN;
	int32_t t47 = 0;

	t47 = (x197<((x198<x199)+x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	int16_t x202 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t48 = -1;

	t48 = (x201<((x202<x203)+x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MAX;
	uint8_t x206 = 2U;
	int16_t x207 = INT16_MAX;

	t49 = (x205<((x206<x207)+x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x209 = 4542744;
	int32_t x210 = -419547;
	int8_t x212 = INT8_MAX;
	static volatile int32_t t50 = 19;

	t50 = (x209<((x210<x211)+x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = INT64_MIN;
	int64_t x215 = -122975999031771855LL;
	int8_t x216 = INT8_MAX;
	volatile int32_t t51 = -162;

	t51 = (x213<((x214<x215)+x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x218 = INT16_MIN;
	volatile int16_t x220 = INT16_MIN;
	static int32_t t52 = 634111;

	t52 = (x217<((x218<x219)+x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x222 = INT8_MAX;
	static int16_t x224 = -1;

	t53 = (x221<((x222<x223)+x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MAX;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 9U;
	uint64_t x232 = 779005LLU;
	static int32_t t54 = 674544580;

	t54 = (x229<((x230<x231)+x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int8_t x235 = 1;
	uint8_t x236 = 0U;
	int32_t t55 = 3528620;

	t55 = (x233<((x234<x235)+x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = 1;
	volatile int8_t x238 = 0;
	volatile int16_t x239 = -2;
	volatile int32_t t56 = -7997;

	t56 = (x237<((x238<x239)+x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x241 = INT32_MAX;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = -12;
	int64_t x244 = -9797428LL;
	volatile int32_t t57 = -31;

	t57 = (x241<((x242<x243)+x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = -15;
	int32_t x246 = -84777;
	int32_t x247 = -1;
	uint32_t x248 = 48217U;

	t58 = (x245<((x246<x247)+x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	int32_t x251 = 8093;
	volatile int32_t t59 = 67;

	t59 = (x249<((x250<x251)+x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -1;
	int64_t x255 = -581157213425LL;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t60 = -172;

	t60 = (x253<((x254<x255)+x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -28;
	int32_t x258 = INT32_MAX;
	int64_t x260 = -1413290429610LL;

	t61 = (x257<((x258<x259)+x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x262 = UINT16_MAX;
	uint16_t x264 = UINT16_MAX;

	t62 = (x261<((x262<x263)+x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	int8_t x268 = -12;

	t63 = (x265<((x266<x267)+x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x270 = 4U;
	int32_t t64 = 461;

	t64 = (x269<((x270<x271)+x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x273 = 6343;
	uint64_t x274 = 3940184321LLU;
	volatile uint8_t x275 = 1U;
	static volatile int32_t t65 = 100;

	t65 = (x273<((x274<x275)+x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = -1;
	int16_t x279 = -1950;
	int32_t t66 = -1955540;

	t66 = (x277<((x278<x279)+x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x282 = 444311U;

	t67 = (x281<((x282<x283)+x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	volatile int32_t t68 = -28;

	t68 = (x285<((x286<x287)+x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x289 = -1LL;
	int32_t t69 = -357089301;

	t69 = (x289<((x290<x291)+x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = INT32_MIN;
	int64_t x294 = -601770290010263639LL;
	volatile int32_t x295 = INT32_MIN;
	static volatile int8_t x296 = 0;
	static volatile int32_t t70 = -22085;

	t70 = (x293<((x294<x295)+x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	static int32_t t71 = 31;

	t71 = (x297<((x298<x299)+x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 3576U;
	uint8_t x302 = UINT8_MAX;
	static int8_t x303 = INT8_MIN;
	static int16_t x304 = INT16_MIN;

	t72 = (x301<((x302<x303)+x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 27733U;
	int64_t x306 = INT64_MAX;
	int32_t t73 = 0;

	t73 = (x305<((x306<x307)+x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = 9012;
	uint64_t x310 = 7615594LLU;
	int32_t x311 = -1;
	volatile int16_t x312 = -133;
	volatile int32_t t74 = 4655;

	t74 = (x309<((x310<x311)+x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x313 = INT8_MIN;
	static uint16_t x314 = 699U;
	int64_t x315 = INT64_MIN;
	int32_t x316 = INT32_MAX;
	int32_t t75 = -20370815;

	t75 = (x313<((x314<x315)+x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	static volatile int64_t x318 = -1LL;

	t76 = (x317<((x318<x319)+x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MIN;
	static int64_t x322 = -1LL;
	int64_t x323 = INT64_MIN;
	int32_t x324 = 6415019;
	volatile int32_t t77 = -31;

	t77 = (x321<((x322<x323)+x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 9U;
	static volatile int32_t x326 = INT32_MIN;
	volatile uint64_t x327 = 4LLU;
	int32_t x328 = INT32_MIN;
	volatile int32_t t78 = -1901;

	t78 = (x325<((x326<x327)+x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;

	t79 = (x329<((x330<x331)+x332));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x333 = 26U;
	uint32_t x334 = 101U;
	int64_t x335 = -1064667LL;
	volatile int32_t x336 = 245;
	static volatile int32_t t80 = 2;

	t80 = (x333<((x334<x335)+x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x337 = INT8_MIN;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t81 = 6680;

	t81 = (x337<((x338<x339)+x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MAX;
	int16_t x343 = -2;
	static uint8_t x344 = UINT8_MAX;

	t82 = (x341<((x342<x343)+x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = -1;
	uint16_t x346 = 206U;
	static int64_t x348 = -10LL;
	volatile int32_t t83 = -6684919;

	t83 = (x345<((x346<x347)+x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x350 = 323942253LLU;
	static int8_t x352 = INT8_MAX;
	int32_t t84 = 48239;

	t84 = (x349<((x350<x351)+x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 0U;
	int32_t x354 = 0;
	uint32_t x355 = 972U;
	static volatile int32_t t85 = -211467;

	t85 = (x353<((x354<x355)+x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x361 = 60056096680LLU;
	static int64_t x362 = -23771LL;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	static volatile int32_t t86 = 12481;

	t86 = (x361<((x362<x363)+x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 77U;
	static int8_t x367 = INT8_MIN;
	static int16_t x368 = INT16_MAX;
	volatile int32_t t87 = 31;

	t87 = (x365<((x366<x367)+x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = INT8_MIN;
	uint64_t x371 = 123704LLU;
	uint8_t x372 = 3U;
	int32_t t88 = 20;

	t88 = (x369<((x370<x371)+x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	volatile uint32_t x375 = 5U;
	int16_t x376 = -1;

	t89 = (x373<((x374<x375)+x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 260961771U;
	volatile uint32_t x378 = 18926U;
	static int32_t x379 = -1372713;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t90 = 1006;

	t90 = (x377<((x378<x379)+x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x382 = UINT16_MAX;
	volatile int16_t x384 = 1;
	volatile int32_t t91 = -93;

	t91 = (x381<((x382<x383)+x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = 240545;
	int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MAX;
	static int32_t t92 = 1505;

	t92 = (x385<((x386<x387)+x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x390 = UINT32_MAX;
	int32_t x392 = -183309413;
	volatile int32_t t93 = 0;

	t93 = (x389<((x390<x391)+x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MAX;
	static int64_t x396 = -1045200576LL;
	volatile int32_t t94 = 52;

	t94 = (x393<((x394<x395)+x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MAX;
	int8_t x400 = 12;
	int32_t t95 = 0;

	t95 = (x397<((x398<x399)+x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -7;
	uint8_t x402 = UINT8_MAX;
	volatile uint16_t x403 = 0U;
	int32_t x404 = INT32_MIN;
	volatile int32_t t96 = -1783620;

	t96 = (x401<((x402<x403)+x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x405 = 8176;
	volatile int32_t x406 = -8031635;
	int8_t x407 = INT8_MAX;
	int8_t x408 = 1;
	volatile int32_t t97 = -37;

	t97 = (x405<((x406<x407)+x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MAX;
	uint32_t x410 = 53765118U;
	int16_t x412 = 31;
	static volatile int32_t t98 = 52956587;

	t98 = (x409<((x410<x411)+x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x413 = 2962LLU;
	uint8_t x414 = 12U;
	uint16_t x416 = 153U;
	int32_t t99 = 3106543;

	t99 = (x413<((x414<x415)+x416));

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

