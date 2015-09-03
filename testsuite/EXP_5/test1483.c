#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
int32_t x2 = INT32_MIN;
int16_t x7 = INT16_MIN;
int8_t x9 = 9;
uint64_t x12 = 1264151196009LLU;
int64_t t3 = -209102188087714LL;
static volatile int32_t x22 = 61;
volatile int32_t t5 = 4;
volatile int32_t t6 = -31227;
uint32_t x30 = 32993556U;
int32_t x35 = -14191;
uint64_t t8 = 511505737634226LLU;
int64_t x40 = INT64_MIN;
int8_t x51 = INT8_MAX;
uint64_t x52 = 1990442115241197LLU;
volatile uint64_t t12 = 1LLU;
static int64_t x54 = -1LL;
int8_t x55 = 12;
static int32_t x61 = -1;
static int32_t t16 = INT32_MIN;
int8_t x76 = INT8_MIN;
int32_t x77 = -1;
volatile uint8_t x78 = 11U;
static uint32_t t19 = UINT32_MAX;
uint64_t x84 = 433555721634256LLU;
uint16_t x86 = UINT16_MAX;
static int8_t x93 = -1;
int32_t t24 = 7072;
int16_t x101 = 915;
uint32_t x102 = 7U;
int64_t t26 = -2118479691LL;
static int32_t x110 = INT32_MIN;
int64_t x112 = -1LL;
int64_t x118 = INT64_MAX;
static int8_t x119 = 0;
static uint8_t x121 = 115U;
static int32_t x122 = INT32_MIN;
int32_t t30 = -11308;
uint8_t x125 = 44U;
uint16_t x126 = 719U;
int16_t x128 = INT16_MIN;
int64_t x131 = -8LL;
int16_t x132 = -462;
uint16_t x148 = 26406U;
int8_t x153 = INT8_MAX;
volatile uint64_t x159 = 297322LLU;
int8_t x160 = INT8_MIN;
uint64_t x161 = 23873308714080437LLU;
static int64_t x163 = -34483188LL;
volatile int8_t x168 = INT8_MIN;
volatile uint32_t t44 = 105482U;
volatile uint32_t x188 = 38539932U;
volatile int64_t x190 = -135LL;
static int32_t x191 = -1;
uint8_t x192 = 1U;
uint16_t x196 = 5U;
int64_t t49 = 129088012080701805LL;
volatile int8_t x201 = -1;
volatile int8_t x207 = 1;
static uint32_t x210 = UINT32_MAX;
static int64_t x211 = -1LL;
volatile uint32_t x215 = UINT32_MAX;
static int32_t x222 = INT32_MAX;
volatile int32_t t55 = INT32_MIN;
int64_t x226 = -453378546658549738LL;
uint8_t x230 = 118U;
uint64_t t58 = 153805846LLU;
uint8_t x247 = 64U;
static int64_t t62 = -126376597LL;
uint64_t t64 = UINT64_MAX;
int16_t x261 = INT16_MIN;
uint16_t x262 = 20U;
volatile int32_t t65 = -5;
uint64_t x274 = 3311531844508988LLU;
int64_t x275 = INT64_MIN;
static uint16_t x277 = 1U;
int64_t x281 = -13403711LL;
static uint32_t x282 = 47U;
volatile int16_t x287 = INT16_MAX;
static int64_t x292 = 210853479486130LL;
volatile uint8_t x294 = 2U;
int64_t x296 = -1LL;
volatile uint64_t t73 = 38537479510LLU;
static volatile int32_t t75 = 1595985;
int16_t x307 = INT16_MIN;
volatile int32_t x311 = INT32_MIN;
uint16_t x314 = 477U;
static volatile uint32_t t78 = 61903907U;
volatile int8_t x323 = INT8_MIN;
uint16_t x332 = UINT16_MAX;
int64_t x333 = INT64_MIN;
int32_t x335 = 1;
int32_t t84 = -1388;
int8_t x346 = INT8_MIN;
uint16_t x359 = 52U;
uint32_t x361 = 100616U;
int64_t x367 = INT64_MAX;
volatile int8_t x370 = 25;
int32_t x372 = INT32_MAX;
volatile int64_t t92 = 359356387LL;
static volatile int8_t x377 = INT8_MIN;
static uint32_t x379 = UINT32_MAX;
int16_t x381 = INT16_MIN;
int64_t x384 = -1LL;
static int32_t x393 = -1;
int16_t x394 = INT16_MIN;


void f0(void) {
	uint8_t x3 = 0U;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x1+((x2<x3)&x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1729709137681LLU;
	uint8_t x6 = UINT8_MAX;
	int32_t x8 = -1;
	volatile uint64_t t1 = 133601707567LLU;

	t1 = (x5+((x6<x7)&x8));

	if (t1 != 1729709137681LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 15018U;
	uint16_t x11 = UINT16_MAX;
	volatile uint64_t t2 = 482746179867460552LLU;

	t2 = (x9+((x10<x11)&x12));

	if (t2 != 10LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	static int16_t x15 = -1;
	int64_t x16 = INT64_MIN;

	t3 = (x13+((x14<x15)&x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 179LLU;
	int8_t x18 = -1;
	static int16_t x19 = 754;
	volatile int8_t x20 = -8;
	uint64_t t4 = 9725168519LLU;

	t4 = (x17+((x18<x19)&x20));

	if (t4 != 179LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int64_t x23 = INT64_MIN;
	volatile int32_t x24 = INT32_MIN;

	t5 = (x21+((x22<x23)&x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 62U;
	int8_t x26 = 0;
	int32_t x27 = -1;
	uint16_t x28 = 0U;

	t6 = (x25+((x26<x27)&x28));

	if (t6 != 62) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 1396;
	int16_t x31 = 1016;
	uint32_t x32 = UINT32_MAX;
	static uint32_t t7 = 58077218U;

	t7 = (x29+((x30<x31)&x32));

	if (t7 != 1396U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 5037946LLU;
	static volatile uint8_t x34 = UINT8_MAX;
	int8_t x36 = -1;

	t8 = (x33+((x34<x35)&x36));

	if (t8 != 5037946LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 81U;
	int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	int64_t t9 = -1337LL;

	t9 = (x37+((x38<x39)&x40));

	if (t9 != 81LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 919U;
	int8_t x42 = 1;
	uint32_t x43 = 257U;
	int8_t x44 = -1;
	int32_t t10 = -107483;

	t10 = (x41+((x42<x43)&x44));

	if (t10 != 920) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -5;
	int8_t x46 = -1;
	int32_t x47 = INT32_MIN;
	volatile int32_t x48 = -1;
	int32_t t11 = -29806;

	t11 = (x45+((x46<x47)&x48));

	if (t11 != -5) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 0LLU;
	uint32_t x50 = UINT32_MAX;

	t12 = (x49+((x50<x51)&x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -3688473027274408734LL;
	int8_t x56 = INT8_MIN;
	volatile int64_t t13 = -236952LL;

	t13 = (x53+((x54<x55)&x56));

	if (t13 != -3688473027274408734LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -4;
	int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	volatile int16_t x60 = -1;
	int32_t t14 = 0;

	t14 = (x57+((x58<x59)&x60));

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -1;
	volatile int8_t x63 = 0;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 141;

	t15 = (x61+((x62<x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int32_t x66 = -1;
	static int16_t x67 = -1;
	static uint8_t x68 = 8U;

	t16 = (x65+((x66<x67)&x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static int64_t x70 = INT64_MAX;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = 623863019LLU;
	volatile uint64_t t17 = 6519LLU;

	t17 = (x69+((x70<x71)&x72));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 5U;
	int64_t x75 = INT64_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = (x73+((x74<x75)&x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x79 = -1LL;
	static uint32_t x80 = 0U;

	t19 = (x77+((x78<x79)&x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	uint64_t x82 = 3487440607419440281LLU;
	volatile int64_t x83 = INT64_MIN;
	volatile uint64_t t20 = 1706983482956085LLU;

	t20 = (x81+((x82<x83)&x84));

	if (t20 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = 286883103692879LL;
	uint32_t x87 = 192621U;
	int32_t x88 = -278621176;
	volatile int64_t t21 = 0LL;

	t21 = (x85+((x86<x87)&x88));

	if (t21 != 286883103692879LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 7;
	static int8_t x90 = -40;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = UINT64_MAX;
	static uint64_t t22 = 6857703482719482LLU;

	t22 = (x89+((x90<x91)&x92));

	if (t22 != 8LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -1;
	int64_t x95 = -1LL;
	volatile int8_t x96 = -1;
	static int32_t t23 = 8;

	t23 = (x93+((x94<x95)&x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 4U;
	uint8_t x98 = 22U;
	int8_t x99 = INT8_MIN;
	int8_t x100 = 3;

	t24 = (x97+((x98<x99)&x100));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x103 = 232U;
	int8_t x104 = INT8_MAX;
	static volatile int32_t t25 = 1043042;

	t25 = (x101+((x102<x103)&x104));

	if (t25 != 916) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	static uint16_t x106 = 306U;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = -1LL;

	t26 = (x105+((x106<x107)&x108));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	volatile int16_t x111 = -1;
	volatile int64_t t27 = -8LL;

	t27 = (x109+((x110<x111)&x112));

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	uint16_t x114 = UINT16_MAX;
	int32_t x115 = INT32_MIN;
	uint64_t x116 = 61479839LLU;
	volatile uint64_t t28 = 171534146LLU;

	t28 = (x113+((x114<x115)&x116));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 1U;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = 282784205;

	t29 = (x117+((x118<x119)&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = -1;
	int8_t x124 = INT8_MAX;

	t30 = (x121+((x122<x123)&x124));

	if (t30 != 116) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x127 = UINT16_MAX;
	int32_t t31 = -32;

	t31 = (x125+((x126<x127)&x128));

	if (t31 != 44) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	int8_t x130 = -1;
	int32_t t32 = 38652123;

	t32 = (x129+((x130<x131)&x132));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MIN;
	int8_t x135 = -1;
	static volatile int32_t x136 = -5;
	int32_t t33 = -428404;

	t33 = (x133+((x134<x135)&x136));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 4U;
	volatile int8_t x138 = -6;
	volatile uint16_t x139 = 805U;
	int64_t x140 = 584563148LL;
	volatile int64_t t34 = 6620962293LL;

	t34 = (x137+((x138<x139)&x140));

	if (t34 != 4LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int16_t x142 = 1666;
	volatile int32_t x143 = -1;
	uint16_t x144 = 1U;
	static volatile int32_t t35 = 38772458;

	t35 = (x141+((x142<x143)&x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1510LLU;
	uint8_t x146 = 3U;
	static uint32_t x147 = UINT32_MAX;
	volatile uint64_t t36 = 5322521LLU;

	t36 = (x145+((x146<x147)&x148));

	if (t36 != 1510LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -987356;
	int32_t x150 = -1;
	static int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MAX;
	int64_t t37 = 529789716LL;

	t37 = (x149+((x150<x151)&x152));

	if (t37 != -987356LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x154 = UINT64_MAX;
	int8_t x155 = -1;
	int8_t x156 = -1;
	volatile int32_t t38 = -32901010;

	t38 = (x153+((x154<x155)&x156));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint16_t x158 = 1929U;
	int32_t t39 = 1;

	t39 = (x157+((x158<x159)&x160));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = 224;
	static int32_t x164 = -1;
	uint64_t t40 = 13LLU;

	t40 = (x161+((x162<x163)&x164));

	if (t40 != 23873308714080437LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	uint32_t x166 = 38U;
	int16_t x167 = -9;
	int32_t t41 = -4284;

	t41 = (x165+((x166<x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = 5LLU;

	t42 = (x169+((x170<x171)&x172));

	if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 5U;
	int32_t x174 = -1;
	int32_t x175 = -2;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t43 = 46U;

	t43 = (x173+((x174<x175)&x176));

	if (t43 != 5U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 199U;
	volatile int16_t x178 = -1;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 1U;

	t44 = (x177+((x178<x179)&x180));

	if (t44 != 199U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 25720LL;
	int64_t x182 = -1LL;
	static int16_t x183 = -1;
	static uint8_t x184 = 44U;
	volatile int64_t t45 = -4112715002727810LL;

	t45 = (x181+((x182<x183)&x184));

	if (t45 != 25720LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = 25;
	int8_t x186 = 1;
	uint8_t x187 = 11U;
	uint32_t t46 = 52053970U;

	t46 = (x185+((x186<x187)&x188));

	if (t46 != 25U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 78U;
	volatile int32_t t47 = -247;

	t47 = (x189+((x190<x191)&x192));

	if (t47 != 79) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	uint8_t x194 = UINT8_MAX;
	volatile int16_t x195 = 3;
	int64_t t48 = INT64_MIN;

	t48 = (x193+((x194<x195)&x196));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	volatile int64_t x198 = 1790345863LL;
	int64_t x199 = INT64_MIN;
	int64_t x200 = -27LL;

	t49 = (x197+((x198<x199)&x200));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x202 = INT16_MIN;
	uint8_t x203 = 1U;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -122;

	t50 = (x201+((x202<x203)&x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x206 = 5;
	volatile int16_t x208 = -1;
	int64_t t51 = INT64_MIN;

	t51 = (x205+((x206<x207)&x208));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int16_t x212 = -1;
	int32_t t52 = 77961278;

	t52 = (x209+((x210<x211)&x212));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 2U;
	int64_t x214 = INT64_MIN;
	int8_t x216 = 60;
	volatile int32_t t53 = 1;

	t53 = (x213+((x214<x215)&x216));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	static int64_t x218 = 626LL;
	static int64_t x219 = INT64_MIN;
	int32_t x220 = -1;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x217+((x218<x219)&x220));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = 7U;

	t55 = (x221+((x222<x223)&x224));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	uint64_t x227 = UINT64_MAX;
	uint16_t x228 = 1714U;
	volatile int32_t t56 = -129075;

	t56 = (x225+((x226<x227)&x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	int32_t x231 = INT32_MIN;
	volatile uint64_t x232 = 108538LLU;
	uint64_t t57 = UINT64_MAX;

	t57 = (x229+((x230<x231)&x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 254LLU;
	int32_t x234 = 1;
	volatile int8_t x235 = INT8_MIN;
	static uint8_t x236 = 2U;

	t58 = (x233+((x234<x235)&x236));

	if (t58 != 254LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = 7;
	static int32_t x238 = -27;
	static int64_t x239 = 14194689437LL;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 623260185;

	t59 = (x237+((x238<x239)&x240));

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = UINT32_MAX;
	int8_t x242 = INT8_MAX;
	volatile int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	static uint32_t t60 = UINT32_MAX;

	t60 = (x241+((x242<x243)&x244));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	uint8_t x248 = 0U;
	volatile int32_t t61 = -551779848;

	t61 = (x245+((x246<x247)&x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 595LL;
	int8_t x250 = 3;
	int8_t x251 = -6;
	uint8_t x252 = UINT8_MAX;

	t62 = (x249+((x250<x251)&x252));

	if (t62 != 595LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = -3;
	uint8_t x254 = 16U;
	uint16_t x255 = 28956U;
	volatile uint32_t x256 = 2423U;
	volatile uint32_t t63 = 76095U;

	t63 = (x253+((x254<x255)&x256));

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int8_t x258 = 40;
	int8_t x259 = -1;
	uint64_t x260 = UINT64_MAX;

	t64 = (x257+((x258<x259)&x260));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x263 = 13299U;
	volatile uint8_t x264 = UINT8_MAX;

	t65 = (x261+((x262<x263)&x264));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 2341270;
	static int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int8_t x268 = 1;
	volatile int32_t t66 = -1061015859;

	t66 = (x265+((x266<x267)&x268));

	if (t66 != 2341271) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static volatile int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = 7572U;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x269+((x270<x271)&x272));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 525105677279725LL;
	uint16_t x276 = 3802U;
	volatile int64_t t68 = -688927905718LL;

	t68 = (x273+((x274<x275)&x276));

	if (t68 != 525105677279725LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = 12318442U;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = 1U;
	int32_t t69 = -923;

	t69 = (x277+((x278<x279)&x280));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x283 = 0;
	int64_t x284 = -1LL;
	volatile int64_t t70 = -19LL;

	t70 = (x281+((x282<x283)&x284));

	if (t70 != -13403711LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int8_t x286 = INT8_MAX;
	int64_t x288 = -1LL;
	int64_t t71 = -553946736LL;

	t71 = (x285+((x286<x287)&x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	volatile int16_t x291 = INT16_MIN;
	static int64_t t72 = -2LL;

	t72 = (x289+((x290<x291)&x292));

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 327041LLU;
	int8_t x295 = -1;

	t73 = (x293+((x294<x295)&x296));

	if (t73 != 327041LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	volatile int64_t x298 = 2294895305LL;
	uint16_t x299 = 231U;
	static uint32_t x300 = 27637U;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x297+((x298<x299)&x300));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -403448439;
	static int16_t x302 = -1;
	uint32_t x303 = 102629162U;
	static int8_t x304 = INT8_MAX;

	t75 = (x301+((x302<x303)&x304));

	if (t75 != -403448439) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = INT32_MAX;
	uint16_t x308 = 255U;
	volatile int32_t t76 = 158881091;

	t76 = (x305+((x306<x307)&x308));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 10287LLU;
	int16_t x310 = INT16_MAX;
	uint32_t x312 = UINT32_MAX;
	static volatile uint64_t t77 = 13963386949LLU;

	t77 = (x309+((x310<x311)&x312));

	if (t77 != 10287LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int32_t x315 = -3;
	uint32_t x316 = UINT32_MAX;

	t78 = (x313+((x314<x315)&x316));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1903;
	static int8_t x318 = -51;
	static int32_t x319 = 14442;
	uint8_t x320 = 6U;
	static volatile int32_t t79 = -3;

	t79 = (x317+((x318<x319)&x320));

	if (t79 != -1903) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 12LLU;
	uint16_t x322 = 1583U;
	int8_t x324 = 1;
	volatile uint64_t t80 = 4049674119259LLU;

	t80 = (x321+((x322<x323)&x324));

	if (t80 != 12LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 14723335751LLU;
	uint64_t x326 = 15631073532714LLU;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MAX;
	static uint64_t t81 = 7LLU;

	t81 = (x325+((x326<x327)&x328));

	if (t81 != 14723335752LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	static volatile int64_t x330 = -1LL;
	int64_t x331 = 269LL;
	volatile int32_t t82 = -46612576;

	t82 = (x329+((x330<x331)&x332));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;
	int16_t x336 = -1;
	volatile int64_t t83 = -251931941087988LL;

	t83 = (x333+((x334<x335)&x336));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 0;
	int64_t x338 = 8985415898682202LL;
	int8_t x339 = INT8_MIN;
	volatile int8_t x340 = INT8_MIN;

	t84 = (x337+((x338<x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	uint32_t x343 = 59334803U;
	static int64_t x344 = 936445LL;
	volatile int64_t t85 = 9421285202LL;

	t85 = (x341+((x342<x343)&x344));

	if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x345 = 17U;
	volatile uint8_t x347 = 20U;
	int64_t x348 = -797832839138390773LL;
	volatile int64_t t86 = 3326291502877LL;

	t86 = (x345+((x346<x347)&x348));

	if (t86 != 18LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	volatile uint8_t x350 = UINT8_MAX;
	volatile uint8_t x351 = 124U;
	int8_t x352 = INT8_MIN;
	int32_t t87 = INT32_MIN;

	t87 = (x349+((x350<x351)&x352));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -1LL;
	volatile uint8_t x354 = UINT8_MAX;
	uint64_t x355 = 61283LLU;
	int16_t x356 = -6435;
	static int64_t t88 = 1833754556074149121LL;

	t88 = (x353+((x354<x355)&x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 930U;
	volatile uint8_t x358 = 5U;
	static uint8_t x360 = UINT8_MAX;
	uint32_t t89 = 58200714U;

	t89 = (x357+((x358<x359)&x360));

	if (t89 != 931U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x362 = INT32_MIN;
	static volatile int32_t x363 = -1;
	int32_t x364 = INT32_MAX;
	volatile uint32_t t90 = 12920063U;

	t90 = (x361+((x362<x363)&x364));

	if (t90 != 100617U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint64_t x366 = 85484LLU;
	int8_t x368 = 2;
	int64_t t91 = INT64_MAX;

	t91 = (x365+((x366<x367)&x368));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -154425LL;
	int64_t x371 = -1LL;

	t92 = (x369+((x370<x371)&x372));

	if (t92 != -154425LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	volatile int32_t x374 = INT32_MAX;
	static volatile uint64_t x375 = 240256202814937654LLU;
	int32_t x376 = INT32_MIN;
	static int32_t t93 = INT32_MIN;

	t93 = (x373+((x374<x375)&x376));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = -1;
	int64_t x380 = -15843465705669284LL;
	volatile int64_t t94 = -3202LL;

	t94 = (x377+((x378<x379)&x380));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	int32_t x383 = -22;
	static int64_t t95 = 48150LL;

	t95 = (x381+((x382<x383)&x384));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MAX;
	int64_t x387 = INT64_MIN;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x385+((x386<x387)&x388));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -79;
	int64_t x390 = INT64_MAX;
	static int16_t x391 = INT16_MAX;
	static int64_t x392 = INT64_MIN;
	int64_t t97 = -3601LL;

	t97 = (x389+((x390<x391)&x392));

	if (t97 != -79LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x395 = INT64_MAX;
	int8_t x396 = 6;
	int32_t t98 = 448399121;

	t98 = (x393+((x394<x395)&x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = 6066;

	t99 = (x397+((x398<x399)&x400));

	if (t99 != -32767) { NG(); } else { ; }
	
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

