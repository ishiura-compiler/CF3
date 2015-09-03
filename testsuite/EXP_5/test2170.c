#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 123;
volatile int64_t t1 = -59814LL;
uint64_t x13 = 63LLU;
volatile int8_t x15 = 19;
uint16_t x19 = UINT16_MAX;
int8_t x32 = INT8_MIN;
uint32_t t7 = UINT32_MAX;
uint32_t x35 = 10U;
volatile uint32_t t8 = UINT32_MAX;
static volatile int32_t t13 = -195;
volatile int16_t x57 = INT16_MIN;
volatile int8_t x63 = INT8_MAX;
int8_t x75 = INT8_MIN;
uint16_t x81 = 537U;
static uint8_t x82 = 7U;
static int64_t x89 = 13LL;
int64_t x93 = INT64_MIN;
int64_t x97 = INT64_MAX;
int16_t x99 = 16;
static int64_t t24 = 2734474LL;
int64_t x114 = -117952LL;
volatile uint16_t x115 = 5381U;
uint32_t x119 = 487418591U;
int64_t x120 = INT64_MIN;
volatile int32_t t31 = -87439052;
static uint32_t x130 = UINT32_MAX;
int16_t x132 = INT16_MIN;
int32_t x133 = -1;
int16_t x139 = -24;
static int8_t x143 = 1;
int32_t x146 = INT32_MIN;
int32_t t36 = 59721;
int8_t x149 = 39;
static int32_t x155 = -1;
uint32_t x156 = UINT32_MAX;
uint8_t x160 = UINT8_MAX;
uint64_t t39 = 0LLU;
uint8_t x162 = 41U;
uint16_t x165 = 18881U;
uint32_t x171 = 244U;
static uint32_t t45 = UINT32_MAX;
static volatile uint32_t x186 = UINT32_MAX;
uint8_t x188 = UINT8_MAX;
int64_t x190 = 218107373417928LL;
volatile int16_t x194 = -4737;
uint64_t x195 = UINT64_MAX;
volatile uint32_t x203 = UINT32_MAX;
uint32_t t50 = 19129U;
int8_t x206 = INT8_MIN;
static int64_t x242 = INT64_MIN;
int64_t t60 = -4105826LL;
static int8_t x246 = -1;
int64_t x252 = INT64_MAX;
static volatile int16_t x253 = INT16_MAX;
int64_t x263 = 249LL;
uint32_t x264 = UINT32_MAX;
static volatile uint64_t t65 = 828251674LLU;
static volatile int16_t x265 = INT16_MAX;
int32_t t66 = -165;
volatile int64_t x273 = -13620117774312LL;
volatile int32_t x276 = 7833705;
uint16_t x283 = UINT16_MAX;
int8_t x292 = INT8_MAX;
int32_t x295 = INT32_MIN;
uint16_t x296 = UINT16_MAX;
static volatile int16_t x299 = INT16_MIN;
volatile int64_t x300 = 121LL;
uint64_t x301 = 7LLU;
static int16_t x304 = -1;
int64_t x305 = 0LL;
int64_t x308 = -1LL;
int64_t t76 = -172301768LL;
volatile int64_t t78 = INT64_MIN;
uint32_t x319 = 194U;
uint8_t x327 = 0U;
int64_t t81 = -7LL;
uint64_t x334 = UINT64_MAX;
uint64_t t83 = UINT64_MAX;
uint64_t t84 = 14542999314LLU;
static int64_t x341 = INT64_MIN;
static uint32_t x344 = 26770U;
int64_t x345 = INT64_MAX;
int64_t t86 = -4306647134225068126LL;
static int64_t x352 = INT64_MIN;
volatile int64_t x354 = INT64_MIN;
int64_t x356 = -33LL;
uint32_t x358 = UINT32_MAX;
volatile int8_t x369 = 3;
volatile int32_t x377 = 1213;
uint16_t x382 = 1687U;
int16_t x385 = 0;
uint8_t x400 = UINT8_MAX;


void f0(void) {
	int32_t x1 = -1;
	static int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MAX;

	t0 = (x1|((x2^x3)&x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;

	t1 = (x5|((x6^x7)&x8));

	if (t1 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 573195913U;
	static volatile int64_t x10 = INT64_MIN;
	static uint64_t x11 = 35633979LLU;
	static volatile int64_t x12 = INT64_MIN;
	static volatile uint64_t t2 = 80424941883LLU;

	t2 = (x9|((x10^x11)&x12));

	if (t2 != 9223372037427971721LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MIN;
	int64_t x16 = -1LL;
	static uint64_t t3 = 15495426460LLU;

	t3 = (x13|((x14^x15)&x16));

	if (t3 != 18446744073709518911LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x18 = -1;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18^x19)&x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int16_t x22 = 840;
	int16_t x23 = INT16_MIN;
	int16_t x24 = -76;
	volatile int32_t t5 = -120;

	t5 = (x21|((x22^x23)&x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = 548LLU;
	int64_t x28 = INT64_MAX;
	volatile uint64_t t6 = 5LLU;

	t6 = (x25|((x26^x27)&x28));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = 0;
	int32_t x31 = -1;

	t7 = (x29|((x30^x31)&x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int8_t x34 = INT8_MAX;
	int32_t x36 = -1;

	t8 = (x33|((x34^x35)&x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 74U;
	int64_t x38 = 8069284LL;
	uint16_t x39 = 3728U;
	uint32_t x40 = 269594U;
	volatile int64_t t9 = -17321315187255LL;

	t9 = (x37|((x38^x39)&x40));

	if (t9 != 3162LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = -15;
	uint8_t x44 = 6U;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x41|((x42^x43)&x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile uint8_t x46 = UINT8_MAX;
	static uint64_t x47 = UINT64_MAX;
	int32_t x48 = -4;
	static volatile uint64_t t11 = 231096LLU;

	t11 = (x45|((x46^x47)&x48));

	if (t11 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	volatile uint8_t x50 = 0U;
	volatile int16_t x51 = -1;
	uint16_t x52 = 3U;
	int64_t t12 = -207081453166189748LL;

	t12 = (x49|((x50^x51)&x52));

	if (t12 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 11U;
	int16_t x54 = INT16_MIN;
	static int8_t x55 = -1;
	int8_t x56 = INT8_MIN;

	t13 = (x53|((x54^x55)&x56));

	if (t13 != 32651) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x58 = 23504929825161LL;
	int64_t x59 = 1LL;
	int16_t x60 = INT16_MIN;
	int64_t t14 = 2827LL;

	t14 = (x57|((x58^x59)&x60));

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static volatile uint64_t x62 = 405LLU;
	uint32_t x64 = 30U;
	uint64_t t15 = 14666196586362LLU;

	t15 = (x61|((x62^x63)&x64));

	if (t15 != 18446744071562067978LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 3223462996LLU;
	static int64_t x66 = INT64_MAX;
	uint8_t x67 = 0U;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 2776LLU;

	t16 = (x65|((x66^x67)&x68));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 93451141U;
	static int64_t x70 = 1977LL;
	int64_t x71 = INT64_MAX;
	int32_t x72 = INT32_MAX;
	int64_t t17 = -281LL;

	t17 = (x69|((x70^x71)&x72));

	if (t17 != 2147482567LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	uint64_t x76 = 2LLU;
	uint64_t t18 = 12183396544949303LLU;

	t18 = (x73|((x74^x75)&x76));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int32_t x78 = -1;
	int8_t x79 = INT8_MAX;
	static int8_t x80 = -7;
	volatile int32_t t19 = 457;

	t19 = (x77|((x78^x79)&x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x83 = INT64_MAX;
	int32_t x84 = -1;
	int64_t t20 = 374323657LL;

	t20 = (x81|((x82^x83)&x84));

	if (t20 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 7635U;
	int32_t x86 = INT32_MIN;
	static int8_t x87 = 1;
	static int16_t x88 = 11834;
	int32_t t21 = -47;

	t21 = (x85|((x86^x87)&x88));

	if (t21 != 7635) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 10;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile int64_t t22 = -154957473556845LL;

	t22 = (x89|((x90^x91)&x92));

	if (t22 != 253LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 4199U;
	volatile int32_t x95 = INT32_MIN;
	volatile int32_t x96 = -1873278;
	int64_t t23 = -95550073LL;

	t23 = (x93|((x94^x95)&x96));

	if (t23 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	int16_t x100 = INT16_MIN;

	t24 = (x97|((x98^x99)&x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 7U;
	static int16_t x102 = INT16_MIN;
	static int64_t x103 = INT64_MIN;
	static uint16_t x104 = UINT16_MAX;
	volatile int64_t t25 = 455553038749641LL;

	t25 = (x101|((x102^x103)&x104));

	if (t25 != 32775LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	int16_t x106 = -1;
	int64_t x107 = -1LL;
	int64_t x108 = 4048303834LL;
	static int64_t t26 = INT64_MAX;

	t26 = (x105|((x106^x107)&x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -14;
	volatile int16_t x110 = INT16_MAX;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t27 = 25016;

	t27 = (x109|((x110^x111)&x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 63224801312453079LLU;
	uint16_t x116 = 8U;
	volatile uint64_t t28 = 57162416588LLU;

	t28 = (x113|((x114^x115)&x116));

	if (t28 != 63224801312453079LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static int16_t x118 = -5;
	volatile int64_t t29 = -49014LL;

	t29 = (x117|((x118^x119)&x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 314063761155LL;
	int32_t x122 = INT32_MIN;
	int16_t x123 = 6;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 2665323454LL;

	t30 = (x121|((x122^x123)&x124));

	if (t30 != -9223371722791014653LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 2U;
	int8_t x126 = -1;
	int8_t x127 = INT8_MIN;
	volatile int16_t x128 = -10349;

	t31 = (x125|((x126^x127)&x128));

	if (t31 != 19) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	int64_t x131 = INT64_MAX;
	static volatile int64_t t32 = 72842LL;

	t32 = (x129|((x130^x131)&x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = UINT16_MAX;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t33 = UINT64_MAX;

	t33 = (x133|((x134^x135)&x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -39;
	int16_t x138 = INT16_MIN;
	static int32_t x140 = 14185628;
	volatile int32_t t34 = 61684;

	t34 = (x137|((x138^x139)&x140));

	if (t34 != -39) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int16_t x142 = -1;
	uint64_t x144 = 0LLU;
	volatile uint64_t t35 = 6484LLU;

	t35 = (x141|((x142^x143)&x144));

	if (t35 != 65535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 375715;
	volatile int8_t x147 = 1;
	static int16_t x148 = INT16_MIN;

	t36 = (x145|((x146^x147)&x148));

	if (t36 != -2147107933) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = -1;
	int64_t t37 = 1064182278199422LL;

	t37 = (x149|((x150^x151)&x152));

	if (t37 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	uint32_t x154 = 25029140U;
	uint32_t t38 = UINT32_MAX;

	t38 = (x153|((x154^x155)&x156));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 2U;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 65LLU;

	t39 = (x157|((x158^x159)&x160));

	if (t39 != 67LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 3895U;
	int16_t x163 = -1;
	uint16_t x164 = 160U;
	volatile int32_t t40 = -499;

	t40 = (x161|((x162^x163)&x164));

	if (t40 != 4023) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = -1;
	int32_t x168 = 206;
	volatile int32_t t41 = -40;

	t41 = (x165|((x166^x167)&x168));

	if (t41 != 18881) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 0U;
	uint16_t x170 = UINT16_MAX;
	int16_t x172 = 1511;
	volatile uint32_t t42 = 1603926224U;

	t42 = (x169|((x170^x171)&x172));

	if (t42 != 1283U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MIN;
	int64_t x176 = -416507177392649LL;
	volatile int64_t t43 = 7297LL;

	t43 = (x173|((x174^x175)&x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 34242LLU;
	volatile uint8_t x178 = 53U;
	uint32_t x179 = 31U;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t44 = 535278634LLU;

	t44 = (x177|((x178^x179)&x180));

	if (t44 != 34282LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	uint8_t x183 = 0U;
	uint32_t x184 = 3U;

	t45 = (x181|((x182^x183)&x184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 32162LLU;
	int64_t x187 = INT64_MAX;
	uint64_t t46 = 257151LLU;

	t46 = (x185|((x186^x187)&x188));

	if (t46 != 32162LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -1;
	static uint64_t x191 = 23154863895135LLU;
	int64_t x192 = -1LL;
	uint64_t t47 = UINT64_MAX;

	t47 = (x189|((x190^x191)&x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MAX;
	volatile int64_t x196 = -1LL;
	static uint64_t t48 = 38418016855LLU;

	t48 = (x193|((x194^x195)&x196));

	if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	static uint16_t x198 = UINT16_MAX;
	static int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x197|((x198^x199)&x200));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 27U;
	volatile int32_t x202 = 41966621;
	static int32_t x204 = INT32_MIN;

	t50 = (x201|((x202^x203)&x204));

	if (t50 != 2147483675U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x207 = 6939;
	static int64_t x208 = 2164076385112044189LL;
	int64_t t51 = -6718819378234LL;

	t51 = (x205|((x206^x207)&x208));

	if (t51 != -7059295651742736231LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 201;
	uint64_t x210 = 2401998LLU;
	int16_t x211 = 332;
	int64_t x212 = -1LL;
	volatile uint64_t t52 = 64010531101536LLU;

	t52 = (x209|((x210^x211)&x212));

	if (t52 != 2402251LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	static int64_t x214 = -241LL;
	static volatile int32_t x215 = INT32_MAX;
	int8_t x216 = -1;
	volatile int64_t t53 = 2076759907078681453LL;

	t53 = (x213|((x214^x215)&x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 3U;
	int64_t x218 = INT64_MAX;
	static int8_t x219 = 0;
	int8_t x220 = INT8_MIN;
	volatile int64_t t54 = -815942954304286448LL;

	t54 = (x217|((x218^x219)&x220));

	if (t54 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 242LLU;
	uint32_t x222 = UINT32_MAX;
	volatile int32_t x223 = INT32_MAX;
	static uint64_t x224 = 1509111639248LLU;
	volatile uint64_t t55 = 120LLU;

	t55 = (x221|((x222^x223)&x224));

	if (t55 != 242LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = 1;
	uint32_t x226 = 10611U;
	int16_t x227 = 14949;
	volatile int64_t x228 = -1LL;
	volatile int64_t t56 = -20826251756007460LL;

	t56 = (x225|((x226^x227)&x228));

	if (t56 != 4887LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 469249539LLU;
	int16_t x230 = INT16_MIN;
	static int64_t x231 = INT64_MIN;
	uint16_t x232 = 11U;
	volatile uint64_t t57 = 4670346LLU;

	t57 = (x229|((x230^x231)&x232));

	if (t57 != 469249539LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 1398U;
	uint64_t x234 = 12LLU;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = -96295;
	static uint64_t t58 = 90LLU;

	t58 = (x233|((x234^x235)&x236));

	if (t58 != 18446744073709455351LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 0U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x237|((x238^x239)&x240));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile int32_t x243 = -677;
	int32_t x244 = INT32_MIN;

	t60 = (x241|((x242^x243)&x244));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = UINT8_MAX;
	int32_t x247 = -2739051;
	static volatile uint64_t x248 = 7916612200305350090LLU;
	volatile uint64_t t61 = 52097LLU;

	t61 = (x245|((x246^x247)&x248));

	if (t61 != 2703871LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 497;
	static int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MAX;
	int64_t t62 = -469678LL;

	t62 = (x249|((x250^x251)&x252));

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = INT64_MIN;
	int32_t x255 = 190148;
	volatile uint32_t x256 = 12U;
	volatile int64_t t63 = 103306849LL;

	t63 = (x253|((x254^x255)&x256));

	if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int32_t x258 = 3;
	volatile int16_t x259 = -1;
	static int64_t x260 = 327314317853212LL;
	static int64_t t64 = 53384LL;

	t64 = (x257|((x258^x259)&x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 117225432817LLU;
	volatile uint16_t x262 = 5U;

	t65 = (x261|((x262^x263)&x264));

	if (t65 != 117225432829LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -1;
	int32_t x267 = -71;
	volatile uint16_t x268 = UINT16_MAX;

	t66 = (x265|((x266^x267)&x268));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MAX;
	int8_t x271 = -1;
	uint32_t x272 = 0U;
	volatile uint32_t t67 = 226U;

	t67 = (x269|((x270^x271)&x272));

	if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x274 = 69U;
	int64_t x275 = -5LL;
	int64_t t68 = -97747718191419246LL;

	t68 = (x273|((x274^x275)&x276));

	if (t68 != -13620113577928LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = -102;
	int16_t x279 = INT16_MAX;
	int16_t x280 = -1;
	volatile int32_t t69 = 7812285;

	t69 = (x277|((x278^x279)&x280));

	if (t69 != -32667) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 0;
	static uint8_t x282 = UINT8_MAX;
	int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -118;

	t70 = (x281|((x282^x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1710U;
	uint64_t x286 = 127679320325182LLU;
	int32_t x287 = -1;
	volatile uint64_t x288 = 14LLU;
	uint64_t t71 = 76643640870430LLU;

	t71 = (x285|((x286^x287)&x288));

	if (t71 != 1710LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 3U;
	int8_t x290 = -11;
	static uint8_t x291 = 120U;
	volatile int32_t t72 = 31095;

	t72 = (x289|((x290^x291)&x292));

	if (t72 != 15) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	int64_t x294 = -1713LL;
	volatile int64_t t73 = 3352148916899LL;

	t73 = (x293|((x294^x295)&x296));

	if (t73 != 65535LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	int64_t x298 = -63775496166LL;
	static int64_t t74 = 0LL;

	t74 = (x297|((x298^x299)&x300));

	if (t74 != -32744LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = INT64_MIN;
	static volatile int16_t x303 = INT16_MIN;
	uint64_t t75 = 101615LLU;

	t75 = (x301|((x302^x303)&x304));

	if (t75 != 9223372036854743047LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x306 = INT8_MAX;
	static int32_t x307 = -1;

	t76 = (x305|((x306^x307)&x308));

	if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = 0U;
	volatile uint64_t x311 = 198502706783373LLU;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t77 = 136267LLU;

	t77 = (x309|((x310^x311)&x312));

	if (t77 != 18446744073709528205LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 0U;
	int64_t x314 = INT64_MAX;
	volatile int16_t x315 = -1;
	static int16_t x316 = INT16_MIN;

	t78 = (x313|((x314^x315)&x316));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 125045400548286LLU;
	static uint16_t x318 = UINT16_MAX;
	static uint64_t x320 = 254929236LLU;
	volatile uint64_t t79 = 212190683490LLU;

	t79 = (x317|((x318^x319)&x320));

	if (t79 != 125045400599486LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	int64_t x323 = 11923286383501LL;
	static uint16_t x324 = 5761U;
	int64_t t80 = -6109669016342LL;

	t80 = (x321|((x322^x323)&x324));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 244LL;
	volatile uint8_t x326 = 9U;
	int32_t x328 = INT32_MIN;

	t81 = (x325|((x326^x327)&x328));

	if (t81 != 244LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	volatile int16_t x330 = INT16_MAX;
	uint8_t x331 = UINT8_MAX;
	uint16_t x332 = 3337U;
	int32_t t82 = INT32_MAX;

	t82 = (x329|((x330^x331)&x332));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int16_t x335 = -574;
	int32_t x336 = -94;

	t83 = (x333|((x334^x335)&x336));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 6847709918035LLU;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = 0U;

	t84 = (x337|((x338^x339)&x340));

	if (t84 != 6847709918035LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = -1;
	static uint32_t x343 = 11717209U;
	int64_t t85 = -61504170678LL;

	t85 = (x341|((x342^x343)&x344));

	if (t85 != -9223372036854767486LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MAX;
	int64_t x347 = INT64_MIN;
	int8_t x348 = -1;

	t86 = (x345|((x346^x347)&x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 26;
	int32_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int64_t t87 = 1420320LL;

	t87 = (x349|((x350^x351)&x352));

	if (t87 != 26LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 4U;
	volatile uint16_t x355 = 7U;
	static int64_t t88 = -911158820008856LL;

	t88 = (x353|((x354^x355)&x356));

	if (t88 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = -10286466;
	uint32_t t89 = UINT32_MAX;

	t89 = (x357|((x358^x359)&x360));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	int32_t x363 = -1;
	int16_t x364 = 4535;
	int32_t t90 = INT32_MAX;

	t90 = (x361|((x362^x363)&x364));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 16U;
	int64_t x366 = INT64_MIN;
	int16_t x367 = 1;
	volatile uint64_t x368 = UINT64_MAX;
	volatile uint64_t t91 = 48483283652140LLU;

	t91 = (x365|((x366^x367)&x368));

	if (t91 != 9223372036854775825LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x370 = 6U;
	int32_t x371 = INT32_MIN;
	static int8_t x372 = 2;
	static volatile int32_t t92 = -1;

	t92 = (x369|((x370^x371)&x372));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 548;
	int32_t x374 = -24;
	int32_t x375 = -26664;
	uint16_t x376 = 1655U;
	volatile int32_t t93 = 1073;

	t93 = (x373|((x374^x375)&x376));

	if (t93 != 564) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x378 = UINT32_MAX;
	int64_t x379 = -25781460LL;
	volatile int32_t x380 = INT32_MIN;
	int64_t t94 = 33LL;

	t94 = (x377|((x378^x379)&x380));

	if (t94 != -4294966083LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 1521U;
	int8_t x383 = -22;
	int8_t x384 = 1;
	uint32_t t95 = 10U;

	t95 = (x381|((x382^x383)&x384));

	if (t95 != 1521U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x386 = -54033075LL;
	uint64_t x387 = 7851LLU;
	volatile int32_t x388 = -250;
	static uint64_t t96 = 2522520274773577LLU;

	t96 = (x385|((x386^x387)&x388));

	if (t96 != 18446744073655524102LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = -1LL;
	uint16_t x391 = 9U;
	int8_t x392 = -1;
	volatile int64_t t97 = 197444543LL;

	t97 = (x389|((x390^x391)&x392));

	if (t97 != -10LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -1;
	uint8_t x394 = 2U;
	static uint16_t x395 = 89U;
	int16_t x396 = -1;
	static int32_t t98 = -10351669;

	t98 = (x393|((x394^x395)&x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 357LLU;
	uint16_t x398 = 8668U;
	int16_t x399 = 878;
	volatile uint64_t t99 = 0LLU;

	t99 = (x397|((x398^x399)&x400));

	if (t99 != 503LLU) { NG(); } else { ; }
	
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

