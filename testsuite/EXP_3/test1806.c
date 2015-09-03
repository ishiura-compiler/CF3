#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = -567;
uint32_t x3 = 11U;
int16_t x4 = INT16_MAX;
static int32_t x7 = INT32_MIN;
int16_t x9 = INT16_MAX;
int8_t x17 = -2;
int64_t x28 = INT64_MIN;
int64_t t6 = -4313061LL;
uint64_t x35 = 539LLU;
int64_t t9 = 15887781977945LL;
int32_t x41 = INT32_MIN;
int32_t x42 = INT32_MIN;
uint8_t x44 = 10U;
int8_t x48 = INT8_MIN;
static volatile int32_t t12 = -6384;
static int64_t x53 = 617840701015421LL;
int32_t x54 = INT32_MAX;
uint64_t x60 = UINT64_MAX;
uint64_t x64 = 932378667779412378LLU;
int64_t x66 = 933LL;
int16_t x72 = INT16_MIN;
int64_t t17 = -3343LL;
int16_t x74 = INT16_MAX;
static int16_t x75 = INT16_MAX;
volatile int32_t t18 = 73996;
int64_t x83 = INT64_MIN;
static volatile uint16_t x85 = 3U;
int8_t x96 = 41;
volatile int32_t t26 = -113;
int8_t x120 = 1;
uint64_t x130 = 7778476550LLU;
uint32_t x135 = 30U;
static int16_t x143 = 314;
static int32_t x145 = INT32_MAX;
uint32_t x148 = 453134651U;
int16_t x150 = -1;
int64_t x156 = INT64_MIN;
uint8_t x168 = 56U;
volatile int32_t x176 = -1;
static int16_t x180 = INT16_MAX;
volatile int32_t t45 = 262880696;
int8_t x192 = 27;
volatile int32_t t47 = 33126528;
static int32_t x194 = -1;
uint32_t t48 = 9880U;
volatile int16_t x200 = INT16_MAX;
int32_t x209 = 369;
volatile uint64_t t52 = UINT64_MAX;
static uint16_t x216 = UINT16_MAX;
int64_t x217 = INT64_MIN;
volatile uint32_t t54 = 988962014U;
volatile int64_t x221 = 2360LL;
volatile int64_t x226 = -1LL;
volatile int8_t x227 = INT8_MAX;
volatile int32_t t56 = -3700230;
int16_t x229 = INT16_MIN;
static int16_t x230 = -1;
uint8_t x232 = UINT8_MAX;
static volatile uint64_t x240 = UINT64_MAX;
uint32_t x242 = 20271U;
volatile uint32_t t60 = UINT32_MAX;
int32_t x250 = INT32_MAX;
int64_t x262 = 518678LL;
static uint8_t x268 = 25U;
int64_t x271 = -1645789LL;
int64_t x273 = 16129668234681623LL;
uint16_t x275 = 4051U;
static int32_t x277 = INT32_MAX;
volatile int16_t x279 = -239;
volatile int32_t t69 = -39;
static int64_t x297 = INT64_MAX;
int64_t x298 = INT64_MIN;
static uint16_t x299 = 3092U;
static int16_t x302 = 9;
uint32_t t75 = 64708809U;
int32_t x311 = -14594089;
int8_t x312 = INT8_MIN;
int16_t x317 = -1;
int32_t x323 = 1973;
static int32_t t80 = -7;
volatile int64_t x327 = INT64_MIN;
static int64_t t81 = INT64_MIN;
int64_t x329 = INT64_MIN;
int64_t x335 = 0LL;
int16_t x339 = INT16_MIN;
static int16_t x340 = 11002;
volatile int32_t t84 = 31027526;
int64_t x342 = INT64_MIN;
uint64_t t85 = 8735LLU;
int32_t x347 = -1;
int64_t x350 = INT64_MIN;
int32_t x351 = INT32_MAX;
static uint64_t x353 = 143603525LLU;
static uint16_t x354 = 38U;
int8_t x355 = INT8_MIN;
uint16_t x358 = 127U;
uint8_t x360 = UINT8_MAX;
int64_t t89 = 24374715703073LL;
static volatile int64_t x364 = -7606503318162874LL;
int64_t x367 = -1LL;
int32_t x369 = INT32_MAX;
uint32_t x378 = 46189U;
int32_t x379 = 252;
uint32_t x381 = UINT32_MAX;
volatile uint64_t t96 = 1114512094993588LLU;
int64_t x389 = INT64_MAX;
volatile uint32_t x397 = 154273U;
int16_t x399 = INT16_MAX;
int32_t x400 = 26139325;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	volatile uint32_t t0 = 11110U;

	t0 = ((x1<x2)|(x3&x4));

	if (t0 != 11U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int8_t x6 = INT8_MIN;
	uint64_t x8 = 56003824572577909LLU;
	volatile uint64_t t1 = 6541LLU;

	t1 = ((x5<x6)|(x7&x8));

	if (t1 != 56003824476749825LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 242540LLU;
	static volatile uint16_t x11 = UINT16_MAX;
	int16_t x12 = 767;
	volatile int32_t t2 = 245002;

	t2 = ((x9<x10)|(x11&x12));

	if (t2 != 767) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int64_t x14 = -37422638LL;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 2U;
	int32_t t3 = -11769;

	t3 = ((x13<x14)|(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x18 = -312;
	int64_t x19 = INT64_MIN;
	int16_t x20 = 0;
	int64_t t4 = -3079802270325209005LL;

	t4 = ((x17<x18)|(x19&x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1401;
	static int16_t x22 = -1;
	volatile int16_t x23 = 7988;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 2936;

	t5 = ((x21<x22)|(x23&x24));

	if (t5 != 52) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	static volatile int32_t x26 = 41821810;
	volatile uint32_t x27 = 79418198U;

	t6 = ((x25<x26)|(x27&x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = 5871LL;
	uint8_t x31 = 15U;
	static int16_t x32 = INT16_MAX;
	int32_t t7 = -25260;

	t7 = ((x29<x30)|(x31&x32));

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MIN;
	uint64_t x36 = 63234091433LLU;
	static uint64_t t8 = 23LLU;

	t8 = ((x33<x34)|(x35&x36));

	if (t8 != 9LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = INT64_MAX;

	t9 = ((x37<x38)|(x39&x40));

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x43 = INT8_MIN;
	int32_t t10 = -3337538;

	t10 = ((x41<x42)|(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	uint64_t x46 = 2128048LLU;
	int64_t x47 = INT64_MIN;
	static int64_t t11 = -43612LL;

	t11 = ((x45<x46)|(x47&x48));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int8_t x50 = 1;
	int16_t x51 = -1;
	int16_t x52 = 270;

	t12 = ((x49<x50)|(x51&x52));

	if (t12 != 271) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x55 = -68;
	int32_t x56 = -3749915;
	int32_t t13 = -841;

	t13 = ((x53<x54)|(x55&x56));

	if (t13 != -3749980) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 662218522676LLU;
	int16_t x58 = 12;
	int16_t x59 = -1392;
	uint64_t t14 = 325063504996160968LLU;

	t14 = ((x57<x58)|(x59&x60));

	if (t14 != 18446744073709550224LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -928199218LL;
	static int8_t x62 = 52;
	int16_t x63 = 1098;
	uint64_t t15 = 7925586121LLU;

	t15 = ((x61<x62)|(x63&x64));

	if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile uint8_t x68 = 2U;
	volatile int32_t t16 = 11316;

	t16 = ((x65<x66)|(x67&x68));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 5013233906545LLU;
	int64_t x70 = -7703LL;
	int64_t x71 = 2501637008540682931LL;

	t17 = ((x69<x70)|(x71&x72));

	if (t17 != 2501637008540663809LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = UINT64_MAX;
	int32_t x76 = -1;

	t18 = ((x73<x74)|(x75&x76));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	int16_t x80 = 1;
	int64_t t19 = -1632773871160299LL;

	t19 = ((x77<x78)|(x79&x80));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	uint64_t x82 = 350937241377784LLU;
	int32_t x84 = INT32_MIN;
	int64_t t20 = INT64_MIN;

	t20 = ((x81<x82)|(x83&x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	int64_t x88 = 382LL;
	int64_t t21 = -33217610689136LL;

	t21 = ((x85<x86)|(x87&x88));

	if (t21 != 382LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static volatile int16_t x90 = INT16_MAX;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = 1759U;
	volatile int32_t t22 = 3;

	t22 = ((x89<x90)|(x91&x92));

	if (t22 != 223) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -205592010632319LL;
	int64_t x94 = INT64_MAX;
	static int64_t x95 = -201LL;
	volatile int64_t t23 = -12306038LL;

	t23 = ((x93<x94)|(x95&x96));

	if (t23 != 33LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 61U;
	static int16_t x98 = INT16_MIN;
	static int16_t x99 = 124;
	int64_t x100 = -2034691LL;
	int64_t t24 = 0LL;

	t24 = ((x97<x98)|(x99&x100));

	if (t24 != 125LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = UINT64_MAX;
	uint64_t x102 = UINT64_MAX;
	int32_t x103 = -1;
	int16_t x104 = 3;
	static int32_t t25 = 96861015;

	t25 = ((x101<x102)|(x103&x104));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x105 = INT64_MIN;
	volatile uint32_t x106 = UINT32_MAX;
	uint8_t x107 = 1U;
	static int16_t x108 = -15;

	t26 = ((x105<x106)|(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 611998635;
	uint64_t x110 = UINT64_MAX;
	volatile int64_t x111 = INT64_MIN;
	static volatile int64_t x112 = INT64_MIN;
	int64_t t27 = 57145042324325720LL;

	t27 = ((x109<x110)|(x111&x112));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	uint32_t x114 = 6U;
	static volatile int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = 916519324;

	t28 = ((x113<x114)|(x115&x116));

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MIN;
	volatile int32_t t29 = -45;

	t29 = ((x117<x118)|(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint16_t x122 = UINT16_MAX;
	int16_t x123 = -1;
	uint64_t x124 = 9462327LLU;
	volatile uint64_t t30 = 18271293999798LLU;

	t30 = ((x121<x122)|(x123&x124));

	if (t30 != 9462327LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	static int8_t x126 = 0;
	int64_t x127 = 7501883LL;
	int64_t x128 = INT64_MAX;
	int64_t t31 = 1112LL;

	t31 = ((x125<x126)|(x127&x128));

	if (t31 != 7501883LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 291U;
	int64_t x131 = 1373487925305475934LL;
	static uint64_t x132 = UINT64_MAX;
	uint64_t t32 = 1306LLU;

	t32 = ((x129<x130)|(x131&x132));

	if (t32 != 1373487925305475935LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 3;
	int64_t x134 = INT64_MIN;
	volatile uint32_t x136 = 176896U;
	uint32_t t33 = 50U;

	t33 = ((x133<x134)|(x135&x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 315991322737747LLU;
	int8_t x138 = INT8_MIN;
	int32_t x139 = -30691;
	int16_t x140 = -1;
	volatile int32_t t34 = 0;

	t34 = ((x137<x138)|(x139&x140));

	if (t34 != -30691) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 7231;
	static uint16_t x142 = 1U;
	volatile uint8_t x144 = UINT8_MAX;
	static int32_t t35 = 38;

	t35 = ((x141<x142)|(x143&x144));

	if (t35 != 58) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -605496134;
	static uint32_t x147 = 6615923U;
	volatile uint32_t t36 = 43742U;

	t36 = ((x145<x146)|(x147&x148));

	if (t36 != 16691U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t37 = INT32_MIN;

	t37 = ((x149<x150)|(x151&x152));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int32_t x154 = INT32_MAX;
	int8_t x155 = 0;
	int64_t t38 = 42610153588LL;

	t38 = ((x153<x154)|(x155&x156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	uint16_t x158 = 14U;
	static int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	volatile int64_t t39 = INT64_MIN;

	t39 = ((x157<x158)|(x159&x160));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	static int32_t x163 = 23235494;
	int64_t x164 = INT64_MIN;
	int64_t t40 = 1755021511LL;

	t40 = ((x161<x162)|(x163&x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -6;
	static uint8_t x166 = 126U;
	volatile int32_t x167 = 440;
	static int32_t t41 = 46679;

	t41 = ((x165<x166)|(x167&x168));

	if (t41 != 57) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int16_t x170 = -1;
	uint32_t x171 = 0U;
	int64_t x172 = -1LL;
	static volatile int64_t t42 = -1174130LL;

	t42 = ((x169<x170)|(x171&x172));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	volatile uint16_t x174 = 12976U;
	int32_t x175 = -1;
	volatile int32_t t43 = -26;

	t43 = ((x173<x174)|(x175&x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 1118547757LLU;
	int32_t x178 = -1;
	uint8_t x179 = 3U;
	volatile int32_t t44 = 210;

	t44 = ((x177<x178)|(x179&x180));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 443U;
	int64_t x182 = INT64_MIN;
	int16_t x183 = 6942;
	int32_t x184 = INT32_MAX;

	t45 = ((x181<x182)|(x183&x184));

	if (t45 != 6942) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 3U;
	int64_t x187 = 210423613139922122LL;
	static volatile int16_t x188 = INT16_MIN;
	int64_t t46 = -2340158229LL;

	t46 = ((x185<x186)|(x187&x188));

	if (t46 != 210423613139910656LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 96989948;
	uint16_t x190 = 698U;
	int16_t x191 = 0;

	t47 = ((x189<x190)|(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 6U;
	uint32_t x195 = UINT32_MAX;
	static uint16_t x196 = 127U;

	t48 = ((x193<x194)|(x195&x196));

	if (t48 != 127U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	static volatile int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MIN;
	int32_t t49 = -15;

	t49 = ((x197<x198)|(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1177;
	static uint16_t x202 = 0U;
	volatile int16_t x203 = -1;
	static uint32_t x204 = 789534716U;
	uint32_t t50 = 6842304U;

	t50 = ((x201<x202)|(x203&x204));

	if (t50 != 789534717U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 1162U;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = 925934;

	t51 = ((x205<x206)|(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -1;
	static uint64_t x211 = UINT64_MAX;
	volatile int16_t x212 = -1;

	t52 = ((x209<x210)|(x211&x212));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	uint64_t x214 = 49093622965136LLU;
	uint16_t x215 = 154U;
	int32_t t53 = 975949434;

	t53 = ((x213<x214)|(x215&x216));

	if (t53 != 155) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = -5843;
	uint32_t x219 = 8U;
	int8_t x220 = -1;

	t54 = ((x217<x218)|(x219&x220));

	if (t54 != 9U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -1;
	int8_t x223 = 2;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -83423;

	t55 = ((x221<x222)|(x223&x224));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int16_t x228 = INT16_MAX;

	t56 = ((x225<x226)|(x227&x228));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x231 = 40U;
	static int32_t t57 = -30889;

	t57 = ((x229<x230)|(x231&x232));

	if (t57 != 41) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	uint32_t x234 = UINT32_MAX;
	static uint16_t x235 = 7040U;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -130;

	t58 = ((x233<x234)|(x235&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	int8_t x239 = 0;
	static uint64_t t59 = 640662LLU;

	t59 = ((x237<x238)|(x239&x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = 0;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = UINT32_MAX;

	t60 = ((x241<x242)|(x243&x244));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile uint32_t x246 = 72U;
	int32_t x247 = 1;
	int32_t x248 = -1;
	volatile int32_t t61 = -1;

	t61 = ((x245<x246)|(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	volatile uint8_t x251 = 8U;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 69;

	t62 = ((x249<x250)|(x251&x252));

	if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MAX;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	volatile int32_t x256 = 150989181;
	volatile int64_t t63 = -1557888981764LL;

	t63 = ((x253<x254)|(x255&x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 7U;
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 3224U;
	uint32_t x260 = 1U;
	volatile uint32_t t64 = 10996392U;

	t64 = ((x257<x258)|(x259&x260));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	static int64_t x264 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = ((x261<x262)|(x263&x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	static volatile int32_t t66 = 14;

	t66 = ((x265<x266)|(x267&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = 1;
	int64_t x272 = INT64_MAX;
	int64_t t67 = -21547995LL;

	t67 = ((x269<x270)|(x271&x272));

	if (t67 != 9223372036853130019LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = 26;
	int8_t x276 = INT8_MAX;
	volatile int32_t t68 = -3003;

	t68 = ((x273<x274)|(x275&x276));

	if (t68 != 83) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x278 = -63479;
	int16_t x280 = -203;

	t69 = ((x277<x278)|(x279&x280));

	if (t69 != -239) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 1U;
	uint8_t x282 = 0U;
	static volatile uint32_t x283 = 2903U;
	static int8_t x284 = INT8_MAX;
	static uint32_t t70 = 363095469U;

	t70 = ((x281<x282)|(x283&x284));

	if (t70 != 87U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	volatile int64_t x286 = -1LL;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -639117257;

	t71 = ((x285<x286)|(x287&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 2;
	int16_t x290 = 0;
	static uint32_t x291 = 34U;
	int8_t x292 = INT8_MIN;
	volatile uint32_t t72 = 21U;

	t72 = ((x289<x290)|(x291&x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 25U;
	uint16_t x294 = 1062U;
	volatile int64_t x295 = -1LL;
	uint8_t x296 = UINT8_MAX;
	volatile int64_t t73 = 377317353604LL;

	t73 = ((x293<x294)|(x295&x296));

	if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x300 = 32U;
	static volatile uint32_t t74 = 23000U;

	t74 = ((x297<x298)|(x299&x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 249U;
	uint32_t x303 = 138U;
	static int16_t x304 = INT16_MIN;

	t75 = ((x301<x302)|(x303&x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile int8_t x306 = INT8_MIN;
	static uint16_t x307 = 165U;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 494791333;

	t76 = ((x305<x306)|(x307&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	volatile uint8_t x310 = UINT8_MAX;
	volatile int32_t t77 = -781202493;

	t77 = ((x309<x310)|(x311&x312));

	if (t77 != -14594175) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 3289927U;
	int64_t x315 = 62391444142LL;
	volatile int32_t x316 = INT32_MIN;
	volatile int64_t t78 = -2130366777831196LL;

	t78 = ((x313<x314)|(x315&x316));

	if (t78 != 62277025792LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x318 = INT8_MIN;
	uint8_t x319 = 8U;
	uint32_t x320 = 70283536U;
	volatile uint32_t t79 = 17978U;

	t79 = ((x317<x318)|(x319&x320));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 1;
	volatile int8_t x322 = INT8_MIN;
	volatile uint16_t x324 = 2U;

	t80 = ((x321<x322)|(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 123323604403LL;
	uint64_t x326 = 80LLU;
	static int64_t x328 = INT64_MIN;

	t81 = ((x325<x326)|(x327&x328));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	int64_t t82 = 6842674LL;

	t82 = ((x329<x330)|(x331&x332));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 658310U;
	int64_t x334 = INT64_MIN;
	static int32_t x336 = -256207251;
	int64_t t83 = -112950089680LL;

	t83 = ((x333<x334)|(x335&x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 172U;
	volatile int64_t x338 = INT64_MAX;

	t84 = ((x337<x338)|(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	int8_t x343 = INT8_MAX;
	static uint64_t x344 = UINT64_MAX;

	t85 = ((x341<x342)|(x343&x344));

	if (t85 != 127LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = 1U;
	int16_t x346 = INT16_MIN;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = ((x345<x346)|(x347&x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -6;

	t87 = ((x349<x350)|(x351&x352));

	if (t87 != 2147450880) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x356 = INT64_MAX;
	volatile int64_t t88 = 172806775761903LL;

	t88 = ((x353<x354)|(x355&x356));

	if (t88 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x359 = -184934927522976LL;

	t89 = ((x357<x358)|(x359&x360));

	if (t89 != 97LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int64_t x362 = -1LL;
	int32_t x363 = INT32_MIN;
	int64_t t90 = -12717990LL;

	t90 = ((x361<x362)|(x363&x364));

	if (t90 != -7606505192816640LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 46385096532049LLU;
	static volatile int32_t x366 = -248348;
	static uint32_t x368 = 878247U;
	volatile int64_t t91 = -1LL;

	t91 = ((x365<x366)|(x367&x368));

	if (t91 != 878247LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x370 = UINT8_MAX;
	int32_t x371 = INT32_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = -2244;

	t92 = ((x369<x370)|(x371&x372));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 608577590U;
	uint8_t x374 = 1U;
	volatile int64_t x375 = -1LL;
	int64_t x376 = -1LL;
	int64_t t93 = -1241370LL;

	t93 = ((x373<x374)|(x375&x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t94 = 13971208718LL;

	t94 = ((x377<x378)|(x379&x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = ((x381<x382)|(x383&x384));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -1;
	static volatile int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = 0LLU;

	t96 = ((x385<x386)|(x387&x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MIN;
	static uint16_t x391 = 704U;
	static int8_t x392 = INT8_MIN;
	int32_t t97 = -2;

	t97 = ((x389<x390)|(x391&x392));

	if (t97 != 640) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MAX;
	volatile int8_t x394 = -1;
	int64_t x395 = -69609217428224675LL;
	int64_t x396 = INT64_MAX;
	int64_t t98 = 3LL;

	t98 = ((x393<x394)|(x395&x396));

	if (t98 != 9153762819426551133LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = 15U;
	int32_t t99 = -922729;

	t99 = ((x397<x398)|(x399&x400));

	if (t99 != 23229) { NG(); } else { ; }
	
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

