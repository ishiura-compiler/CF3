#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
uint16_t x3 = 0U;
volatile int8_t x6 = -1;
uint32_t x8 = 476769739U;
static uint16_t x10 = 1826U;
static int8_t x11 = 2;
uint16_t x22 = UINT16_MAX;
volatile int16_t x23 = -4;
volatile uint32_t x27 = 27861129U;
static int16_t x31 = INT16_MIN;
int64_t x32 = INT64_MAX;
volatile uint16_t x43 = 1U;
int32_t x45 = -1;
int64_t x54 = 5170920475LL;
int32_t x58 = INT32_MAX;
int16_t x59 = -9;
static volatile uint16_t x62 = UINT16_MAX;
static uint64_t x64 = UINT64_MAX;
volatile uint64_t t15 = 28LLU;
uint16_t x72 = 43U;
volatile int32_t x80 = -32241764;
static volatile int16_t x96 = -63;
static volatile int32_t t23 = -241;
static uint64_t x100 = UINT64_MAX;
volatile int64_t x103 = INT64_MIN;
static int16_t x106 = INT16_MIN;
int32_t x107 = INT32_MAX;
volatile int32_t t28 = -7499858;
static int8_t x117 = INT8_MIN;
static volatile int32_t x128 = 359726881;
volatile int16_t x130 = 1624;
static volatile uint32_t x133 = UINT32_MAX;
int32_t t33 = -98;
uint64_t x138 = 97183LLU;
static int64_t x140 = -8857870LL;
volatile int64_t x141 = INT64_MAX;
int64_t x151 = INT64_MIN;
volatile int64_t t37 = -739301LL;
volatile int32_t x155 = 13741;
static uint16_t x161 = 1146U;
int32_t x162 = INT32_MIN;
static int16_t x169 = INT16_MIN;
int16_t x176 = INT16_MIN;
int16_t x177 = INT16_MIN;
volatile int64_t x181 = -1LL;
volatile int32_t x183 = INT32_MIN;
uint64_t x187 = 522658583013696LLU;
uint64_t t46 = 34953765320569762LLU;
static int8_t x190 = INT8_MIN;
static volatile int8_t x193 = -2;
int32_t t48 = 4041424;
static int64_t x197 = -34163004700LL;
int32_t x204 = INT32_MIN;
int32_t x209 = INT32_MIN;
volatile int8_t x210 = INT8_MIN;
int64_t t52 = 870338939378307507LL;
int8_t x213 = INT8_MIN;
int64_t x223 = INT64_MIN;
static volatile int64_t t56 = 0LL;
static uint32_t x229 = 123396130U;
uint32_t x234 = 82U;
uint32_t t59 = 2927U;
int32_t x245 = -85712499;
int32_t t61 = 0;
int8_t x250 = INT8_MIN;
volatile int32_t x256 = 1977;
int32_t x258 = INT32_MIN;
uint8_t x263 = 1U;
volatile int64_t t65 = INT64_MAX;
volatile int32_t x267 = -1;
int16_t x270 = INT16_MIN;
static int64_t x274 = -96860396516607872LL;
int64_t x278 = -1LL;
int32_t x280 = INT32_MAX;
int32_t x284 = INT32_MIN;
static int32_t t70 = 2;
static int8_t x285 = INT8_MAX;
static uint8_t x289 = 5U;
int8_t x297 = INT8_MIN;
volatile int8_t x305 = INT8_MIN;
uint64_t x310 = UINT64_MAX;
int32_t x311 = -1;
uint32_t t80 = 84U;
static int32_t x325 = -582;
volatile int32_t t81 = 14078517;
volatile uint16_t x330 = UINT16_MAX;
int64_t x333 = -57LL;
int32_t x336 = -52;
static int8_t x341 = -1;
int16_t x345 = INT16_MAX;
static int32_t x349 = -679729245;
volatile uint8_t x355 = 17U;
static int8_t x356 = -1;
uint16_t x357 = UINT16_MAX;
uint64_t x362 = 76238202083514319LLU;
int32_t x367 = INT32_MIN;
uint16_t x378 = UINT16_MAX;
volatile uint8_t x383 = UINT8_MAX;
uint32_t x387 = 7486649U;
uint32_t x388 = 61710172U;
uint32_t t96 = 145703U;
int8_t x397 = -1;
static int8_t x400 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = 69;

	t0 = ((x1<x2)^(x3|x4));

	if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 13;
	int64_t x7 = -17054626961375LL;
	int64_t t1 = -107680636LL;

	t1 = ((x5<x6)^(x7|x8));

	if (t1 != -17054284452373LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int32_t x12 = -1;
	int32_t t2 = 131;

	t2 = ((x9<x10)^(x11|x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	uint64_t x14 = 1564LLU;
	int16_t x15 = INT16_MIN;
	static volatile int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -41590;

	t3 = ((x13<x14)^(x15|x16));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 99;
	static int32_t x18 = INT32_MIN;
	volatile int8_t x19 = -3;
	volatile int8_t x20 = -6;
	int32_t t4 = -7;

	t4 = ((x17<x18)^(x19|x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 4U;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 52812370LLU;

	t5 = ((x21<x22)^(x23|x24));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1085LLU;
	int64_t x26 = INT64_MAX;
	int32_t x28 = -1;
	volatile uint32_t t6 = 26517U;

	t6 = ((x25<x26)^(x27|x28));

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 0;
	int8_t x30 = 0;
	volatile int64_t t7 = 247231226745131602LL;

	t7 = ((x29<x30)^(x31|x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	volatile int16_t x34 = -58;
	volatile int16_t x35 = INT16_MIN;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x33<x34)^(x35|x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	int16_t x38 = INT16_MAX;
	static int32_t x39 = INT32_MIN;
	uint64_t x40 = 2956LLU;
	volatile uint64_t t9 = 16445473023104960LLU;

	t9 = ((x37<x38)^(x39|x40));

	if (t9 != 18446744071562070924LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 16;
	static int8_t x42 = -1;
	int16_t x44 = -18;
	volatile int32_t t10 = 105;

	t10 = ((x41<x42)^(x43|x44));

	if (t10 != -17) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = 471317243405840LL;

	t11 = ((x45<x46)^(x47|x48));

	if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 6160204U;
	int64_t x50 = INT64_MAX;
	static uint8_t x51 = 3U;
	static int64_t x52 = -6193857LL;
	int64_t t12 = 21LL;

	t12 = ((x49<x50)^(x51|x52));

	if (t12 != -6193858LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int16_t x55 = INT16_MIN;
	static int32_t x56 = -1637696;
	int32_t t13 = -15426;

	t13 = ((x53<x54)^(x55|x56));

	if (t13 != -32063) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 85LLU;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 2350177598097404593LLU;

	t14 = ((x57<x58)^(x59|x60));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 0;
	static int16_t x63 = -1;

	t15 = ((x61<x62)^(x63|x64));

	if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 315136239U;
	int64_t x67 = INT64_MAX;
	volatile int32_t x68 = INT32_MIN;
	volatile int64_t t16 = -1LL;

	t16 = ((x65<x66)^(x67|x68));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -899251;
	int64_t x70 = -1LL;
	static uint8_t x71 = UINT8_MAX;
	static int32_t t17 = -1014284078;

	t17 = ((x69<x70)^(x71|x72));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	static int32_t x74 = -1;
	volatile int16_t x75 = -57;
	volatile int8_t x76 = -18;
	int32_t t18 = 44897;

	t18 = ((x73<x74)^(x75|x76));

	if (t18 != -17) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MAX;
	int32_t x79 = INT32_MAX;
	int32_t t19 = 97976;

	t19 = ((x77<x78)^(x79|x80));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	uint8_t x82 = 35U;
	int64_t x83 = 1089876655833332LL;
	volatile int16_t x84 = INT16_MAX;
	volatile int64_t t20 = -4243014790422460239LL;

	t20 = ((x81<x82)^(x83|x84));

	if (t20 != 1089876655865855LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 448U;
	static int32_t x88 = -228781106;
	int32_t t21 = 8774569;

	t21 = ((x85<x86)^(x87|x88));

	if (t21 != -228781106) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 90U;
	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 3U;
	int64_t t22 = 763LL;

	t22 = ((x89<x90)^(x91|x92));

	if (t22 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	static uint8_t x94 = UINT8_MAX;
	static uint8_t x95 = 0U;

	t23 = ((x93<x94)^(x95|x96));

	if (t23 != -64) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -26;
	int64_t x98 = INT64_MAX;
	static int16_t x99 = INT16_MIN;
	volatile uint64_t t24 = 3240590969LLU;

	t24 = ((x97<x98)^(x99|x100));

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	static int32_t x104 = -1;
	volatile int64_t t25 = -1600401838353LL;

	t25 = ((x101<x102)^(x103|x104));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int32_t x108 = -63738;
	int32_t t26 = -150;

	t26 = ((x105<x106)^(x107|x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	volatile int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	volatile uint32_t x112 = 2523011U;
	volatile uint32_t t27 = 27355179U;

	t27 = ((x109<x110)^(x111|x112));

	if (t27 != 4294967171U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -238538LL;
	static int8_t x114 = 15;
	static uint16_t x115 = UINT16_MAX;
	int8_t x116 = 27;

	t28 = ((x113<x114)^(x115|x116));

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MIN;
	uint32_t t29 = 82396395U;

	t29 = ((x117<x118)^(x119|x120));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint32_t x122 = 44U;
	uint64_t x123 = 136LLU;
	volatile int8_t x124 = -1;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x121<x122)^(x123|x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	volatile int32_t t31 = 4080;

	t31 = ((x125<x126)^(x127|x128));

	if (t31 != -223) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 1;
	static int16_t x131 = INT16_MIN;
	volatile int32_t x132 = 173399719;
	int32_t t32 = -18742802;

	t32 = ((x129<x130)^(x131|x132));

	if (t32 != -8538) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x134 = 47563070;
	int8_t x135 = -24;
	int8_t x136 = -27;

	t33 = ((x133<x134)^(x135|x136));

	if (t33 != -19) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	volatile int32_t x139 = -1;
	int64_t t34 = 1634602335794LL;

	t34 = ((x137<x138)^(x139|x140));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = INT16_MIN;
	static int16_t x143 = -10;
	volatile int16_t x144 = INT16_MAX;
	int32_t t35 = -14897076;

	t35 = ((x141<x142)^(x143|x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 144574205923LLU;
	static volatile uint16_t x146 = 3310U;
	int32_t x147 = -1;
	int64_t x148 = 15818971185478LL;
	volatile int64_t t36 = -190958717515735487LL;

	t36 = ((x145<x146)^(x147|x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 39785U;
	static uint8_t x150 = 2U;
	static uint8_t x152 = UINT8_MAX;

	t37 = ((x149<x150)^(x151|x152));

	if (t37 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 4671927899575541LLU;
	int64_t x154 = -1LL;
	static int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 422118620322756LL;

	t38 = ((x153<x154)^(x155|x156));

	if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = INT32_MIN;
	uint64_t x158 = 489LLU;
	static volatile uint64_t x159 = 51856046126842248LLU;
	int32_t x160 = INT32_MIN;
	static uint64_t t39 = 204LLU;

	t39 = ((x157<x158)^(x159|x160));

	if (t39 != 18446744071978926472LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = -58023005211567LL;
	int64_t t40 = 42LL;

	t40 = ((x161<x162)^(x163|x164));

	if (t40 != -58023005192193LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;
	volatile uint8_t x167 = 0U;
	int64_t x168 = INT64_MAX;
	int64_t t41 = 2LL;

	t41 = ((x165<x166)^(x167|x168));

	if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	int64_t x171 = -1LL;
	int64_t x172 = INT64_MIN;
	int64_t t42 = -1576823826300LL;

	t42 = ((x169<x170)^(x171|x172));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 23842U;
	int8_t x175 = INT8_MIN;
	int32_t t43 = -80;

	t43 = ((x173<x174)^(x175|x176));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = 51670421236LLU;
	uint64_t t44 = 1387723861011265022LLU;

	t44 = ((x177<x178)^(x179|x180));

	if (t44 != 18446744073709522677LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x182 = INT8_MIN;
	uint64_t x184 = 488990LLU;
	static volatile uint64_t t45 = 3344459802977774996LLU;

	t45 = ((x181<x182)^(x183|x184));

	if (t45 != 18446744071562556958LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 76096216491386LLU;
	int32_t x186 = -1;
	static int64_t x188 = INT64_MAX;

	t46 = ((x185<x186)^(x187|x188));

	if (t46 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	static volatile uint8_t x191 = 120U;
	int64_t x192 = INT64_MAX;
	int64_t t47 = INT64_MAX;

	t47 = ((x189<x190)^(x191|x192));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MAX;

	t48 = ((x193<x194)^(x195|x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 127U;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MAX;
	static volatile uint32_t t49 = 362880079U;

	t49 = ((x197<x198)^(x199|x200));

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	volatile int8_t x202 = -5;
	int8_t x203 = INT8_MIN;
	int32_t t50 = 1;

	t50 = ((x201<x202)^(x203|x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -3LL;
	volatile uint32_t x206 = 4223886U;
	int32_t x207 = INT32_MAX;
	volatile int8_t x208 = -1;
	static volatile int32_t t51 = -13;

	t51 = ((x205<x206)^(x207|x208));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x211 = -1;
	volatile int64_t x212 = INT64_MIN;

	t52 = ((x209<x210)^(x211|x212));

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x214 = 34853LLU;
	uint8_t x215 = 0U;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = INT32_MIN;

	t53 = ((x213<x214)^(x215|x216));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 2287;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = -448489;
	static uint16_t x220 = UINT16_MAX;
	int32_t t54 = 12;

	t54 = ((x217<x218)^(x219|x220));

	if (t54 != -393218) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 6U;
	int32_t x222 = INT32_MIN;
	int32_t x224 = 1400;
	int64_t t55 = 798131962518991LL;

	t55 = ((x221<x222)^(x223|x224));

	if (t55 != -9223372036854774408LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	volatile uint16_t x226 = UINT16_MAX;
	static int8_t x227 = INT8_MAX;
	int64_t x228 = INT64_MIN;

	t56 = ((x225<x226)^(x227|x228));

	if (t56 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 3503722;

	t57 = ((x229<x230)^(x231|x232));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 232U;
	int16_t x235 = -4049;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 13033;

	t58 = ((x233<x234)^(x235|x236));

	if (t58 != -3969) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	int32_t x238 = 69;
	static volatile uint32_t x239 = UINT32_MAX;
	int16_t x240 = -1;

	t59 = ((x237<x238)^(x239|x240));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 290279547U;
	uint64_t x242 = 8555LLU;
	uint64_t x243 = 651402842179488880LLU;
	int16_t x244 = -1;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x241<x242)^(x243|x244));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 8638484LLU;
	int32_t x247 = 1370810;
	int8_t x248 = -1;

	t61 = ((x245<x246)^(x247|x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 210680U;
	uint64_t x251 = 1652764691058070925LLU;
	uint32_t x252 = 126U;
	volatile uint64_t t62 = 53LLU;

	t62 = ((x249<x250)^(x251|x252));

	if (t62 != 1652764691058071038LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 2;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = 736418424;
	static int32_t t63 = 60381;

	t63 = ((x253<x254)^(x255|x256));

	if (t63 != 736419833) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 0;
	static int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x257<x258)^(x259|x260));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	static int32_t x262 = INT32_MIN;
	volatile int64_t x264 = INT64_MAX;

	t65 = ((x261<x262)^(x263|x264));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int64_t x266 = INT64_MAX;
	int16_t x268 = INT16_MIN;
	int32_t t66 = 6;

	t66 = ((x265<x266)^(x267|x268));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = -481333;
	int16_t x271 = -33;
	static volatile int16_t x272 = INT16_MIN;
	int32_t t67 = 35;

	t67 = ((x269<x270)^(x271|x272));

	if (t67 != -34) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = -1261657LL;
	volatile int64_t x275 = -64483LL;
	static uint16_t x276 = UINT16_MAX;
	int64_t t68 = 1394158096021814LL;

	t68 = ((x273<x274)^(x275|x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 24699U;
	volatile uint64_t x279 = 6942826624702LLU;
	volatile uint64_t t69 = 632503553451251733LLU;

	t69 = ((x277<x278)^(x279|x280));

	if (t69 != 6944962117631LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 19U;
	volatile int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;

	t70 = ((x281<x282)^(x283|x284));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	static uint32_t x287 = 273U;
	uint16_t x288 = UINT16_MAX;
	static volatile uint32_t t71 = 86U;

	t71 = ((x285<x286)^(x287|x288));

	if (t71 != 65534U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = 23122261728970819LL;
	volatile int32_t x291 = 26839358;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 10001795;

	t72 = ((x289<x290)^(x291|x292));

	if (t72 != -2120644289) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x293 = 5217529LL;
	volatile int64_t x294 = -1LL;
	int8_t x295 = 52;
	int8_t x296 = INT8_MIN;
	int32_t t73 = 8;

	t73 = ((x293<x294)^(x295|x296));

	if (t73 != -76) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = UINT32_MAX;
	int8_t x299 = INT8_MIN;
	static uint16_t x300 = 0U;
	static volatile int32_t t74 = -19309;

	t74 = ((x297<x298)^(x299|x300));

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 11774710016LLU;
	int32_t x302 = INT32_MIN;
	volatile int32_t x303 = 976;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = 15345917;

	t75 = ((x301<x302)^(x303|x304));

	if (t75 != -47) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = INT32_MAX;
	int64_t x308 = -1LL;
	static volatile int64_t t76 = -1186LL;

	t76 = ((x305<x306)^(x307|x308));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 8547173170LLU;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -24566;

	t77 = ((x309<x310)^(x311|x312));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -2;
	static volatile uint32_t x314 = 856341U;
	uint8_t x315 = 1U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 19645306;

	t78 = ((x313<x314)^(x315|x316));

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	volatile int64_t x318 = INT64_MIN;
	static volatile int8_t x319 = INT8_MIN;
	int8_t x320 = 30;
	int32_t t79 = -2293;

	t79 = ((x317<x318)^(x319|x320));

	if (t79 != -98) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 96675U;
	volatile int64_t x322 = -1LL;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 6776U;

	t80 = ((x321<x322)^(x323|x324));

	if (t80 != 65535U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	static int32_t x327 = INT32_MIN;
	volatile int8_t x328 = INT8_MAX;

	t81 = ((x325<x326)^(x327|x328));

	if (t81 != -2147483521) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int32_t x332 = -1;
	volatile int32_t t82 = -107105877;

	t82 = ((x329<x330)^(x331|x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 0U;
	uint16_t x335 = 6448U;
	static int32_t t83 = -2513817;

	t83 = ((x333<x334)^(x335|x336));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -49211256663386740LL;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 1666LLU;
	uint64_t x340 = 940820135715LLU;
	uint64_t t84 = 2578LLU;

	t84 = ((x337<x338)^(x339|x340));

	if (t84 != 940820135842LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	uint16_t x343 = 43U;
	int64_t x344 = -1LL;
	volatile int64_t t85 = -36LL;

	t85 = ((x341<x342)^(x343|x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 0U;
	int16_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t86 = 101963;

	t86 = ((x345<x346)^(x347|x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 108U;
	int32_t x351 = -1;
	int64_t x352 = INT64_MAX;
	int64_t t87 = -2826844669324180LL;

	t87 = ((x349<x350)^(x351|x352));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = 708840114LLU;
	volatile int32_t t88 = 2150664;

	t88 = ((x353<x354)^(x355|x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	int32_t x359 = 708994;
	int8_t x360 = -31;
	int32_t t89 = 1368720;

	t89 = ((x357<x358)^(x359|x360));

	if (t89 != -29) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 61LL;
	volatile int32_t x363 = INT32_MIN;
	int64_t x364 = -2374246552433510LL;
	int64_t t90 = 400587604954216LL;

	t90 = ((x361<x362)^(x363|x364));

	if (t90 != -1516106597LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -112;
	uint8_t x366 = UINT8_MAX;
	int8_t x368 = -7;
	volatile int32_t t91 = 69460;

	t91 = ((x365<x366)^(x367|x368));

	if (t91 != -8) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x369 = INT64_MIN;
	volatile int16_t x370 = 9;
	static int16_t x371 = -1;
	int32_t x372 = 24;
	int32_t t92 = -7596722;

	t92 = ((x369<x370)^(x371|x372));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	static int16_t x374 = INT16_MIN;
	int32_t x375 = 537440;
	volatile int16_t x376 = INT16_MIN;
	int32_t t93 = -216543367;

	t93 = ((x373<x374)^(x375|x376));

	if (t93 != -19616) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 1U;
	volatile int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 255;

	t94 = ((x377<x378)^(x379|x380));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MAX;
	static volatile int16_t x384 = INT16_MIN;
	int32_t t95 = 52775812;

	t95 = ((x381<x382)^(x383|x384));

	if (t95 != -32513) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 2053LLU;
	uint32_t x386 = UINT32_MAX;

	t96 = ((x385<x386)^(x387|x388));

	if (t96 != 67092476U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MIN;
	static int8_t x390 = 0;
	volatile int16_t x391 = INT16_MIN;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 1556;

	t97 = ((x389<x390)^(x391|x392));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -452;

	t98 = ((x393<x394)^(x395|x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = 29U;
	static uint64_t x399 = 2146326917309613691LLU;
	static volatile uint64_t t99 = 6663869LLU;

	t99 = ((x397<x398)^(x399|x400));

	if (t99 != 18446744073709551610LLU) { NG(); } else { ; }
	
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

