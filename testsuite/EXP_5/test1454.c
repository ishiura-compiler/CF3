#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = 2423344599LL;
int32_t x2 = -1;
volatile int8_t x11 = -5;
volatile uint32_t x16 = 1938292U;
static uint32_t x17 = UINT32_MAX;
int64_t x25 = 61355440392005LL;
uint64_t x33 = UINT64_MAX;
int64_t x37 = -1LL;
int32_t x40 = INT32_MIN;
static int64_t t9 = 13451LL;
int8_t x45 = INT8_MIN;
volatile int16_t x46 = INT16_MAX;
static uint16_t x49 = 14U;
int64_t x55 = INT64_MAX;
int64_t x71 = INT64_MAX;
volatile int8_t x73 = INT8_MIN;
static volatile int32_t x81 = -4270;
static int16_t x83 = -6936;
volatile uint8_t x86 = UINT8_MAX;
static int32_t t21 = 213;
uint32_t x92 = 11U;
int16_t x98 = -1;
uint8_t x116 = 2U;
int8_t x122 = INT8_MIN;
volatile int64_t x127 = -1LL;
int32_t t31 = -93301;
int32_t x131 = INT32_MIN;
int32_t t32 = -1011689032;
int8_t x133 = 1;
static uint32_t x136 = 549623931U;
int8_t x137 = 0;
static int16_t x140 = INT16_MIN;
uint32_t x146 = 11401458U;
static int16_t x149 = -1;
static uint8_t x159 = 43U;
int16_t x170 = INT16_MIN;
uint16_t x187 = 44U;
static int16_t x188 = INT16_MIN;
static int32_t x192 = 5;
int8_t x194 = 2;
static volatile int64_t t48 = -193285537820601LL;
static int32_t x197 = INT32_MIN;
static uint8_t x200 = 22U;
int16_t x210 = -33;
int32_t x213 = 17402;
uint32_t x215 = 13042797U;
uint16_t x216 = 275U;
int32_t t56 = -1;
static volatile uint32_t t57 = 67U;
uint8_t x237 = UINT8_MAX;
int32_t x238 = -1;
static volatile int8_t x240 = -1;
int16_t x241 = INT16_MAX;
volatile int16_t x254 = INT16_MAX;
int64_t x257 = -1LL;
uint8_t x259 = 39U;
int8_t x265 = 0;
int16_t x271 = INT16_MAX;
uint8_t x274 = 52U;
int32_t x275 = -10;
static uint16_t x278 = UINT16_MAX;
static volatile int32_t t70 = -92755115;
int64_t x299 = INT64_MIN;
volatile uint64_t t74 = 45392386050LLU;
int16_t x303 = -1;
int64_t x308 = INT64_MIN;
int64_t x312 = 14106987415645195LL;
volatile int32_t t77 = 36;
uint16_t x317 = 5U;
int64_t x320 = -25799593LL;
int8_t x325 = INT8_MIN;
int8_t x328 = INT8_MIN;
volatile int32_t t82 = -28698221;
volatile int32_t t83 = 0;
volatile uint64_t x339 = UINT64_MAX;
int32_t x346 = INT32_MIN;
volatile int64_t x354 = INT64_MAX;
volatile int64_t t88 = 1930542018LL;
volatile int16_t x362 = 330;
uint16_t x366 = UINT16_MAX;
static int32_t x369 = INT32_MAX;
volatile int16_t x370 = INT16_MIN;
volatile int64_t x371 = 1LL;
int32_t x373 = -1;
static int16_t x386 = -1;
volatile int32_t t96 = -12983866;


void f0(void) {
	static volatile int16_t x3 = INT16_MIN;
	int16_t x4 = -1;
	static volatile int64_t t0 = 301564407849177LL;

	t0 = (x1&((x2<x3)==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 15154U;
	int32_t x6 = INT32_MIN;
	static uint16_t x7 = 2U;
	int32_t x8 = -1;
	volatile int32_t t1 = 942519486;

	t1 = (x5&((x6<x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = -15496023LL;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 2297;

	t2 = (x9&((x10<x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	volatile int16_t x14 = INT16_MIN;
	int16_t x15 = 12573;
	int64_t t3 = 1LL;

	t3 = (x13&((x14<x15)==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 1U;
	static int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MIN;
	uint32_t t4 = 1U;

	t4 = (x17&((x18<x19)==x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 1150330891U;
	int16_t x23 = INT16_MAX;
	volatile uint64_t x24 = 85LLU;
	uint64_t t5 = 17539463820194LLU;

	t5 = (x21&((x22<x23)==x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MIN;
	static volatile int32_t x27 = INT32_MAX;
	int64_t x28 = 92445187494925LL;
	int64_t t6 = 5724LL;

	t6 = (x25&((x26<x27)==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 31U;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MAX;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 0;

	t7 = (x29&((x30<x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = INT16_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t x36 = 1;
	volatile uint64_t t8 = 16362LLU;

	t8 = (x33&((x34<x35)==x36));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 30U;
	volatile uint64_t x39 = UINT64_MAX;

	t9 = (x37&((x38<x39)==x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static volatile int32_t x42 = -2;
	static int32_t x43 = -2912;
	int8_t x44 = INT8_MIN;
	uint32_t t10 = 8195521U;

	t10 = (x41&((x42<x43)==x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = INT16_MIN;
	volatile uint16_t x48 = 158U;
	int32_t t11 = -1604;

	t11 = (x45&((x46<x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int32_t x51 = INT32_MIN;
	static uint8_t x52 = UINT8_MAX;
	int32_t t12 = 6410556;

	t12 = (x49&((x50<x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	static uint32_t x54 = 10567757U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -64387171;

	t13 = (x53&((x54<x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	static int16_t x58 = 13042;
	static int32_t x59 = INT32_MIN;
	uint16_t x60 = 25U;
	volatile int32_t t14 = 1;

	t14 = (x57&((x58<x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	static volatile uint8_t x62 = UINT8_MAX;
	int64_t x63 = -1LL;
	static volatile int16_t x64 = INT16_MIN;
	int32_t t15 = 343720;

	t15 = (x61&((x62<x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static uint16_t x66 = 8108U;
	static int8_t x67 = INT8_MAX;
	int64_t x68 = INT64_MAX;
	int64_t t16 = -302947664533234151LL;

	t16 = (x65&((x66<x67)==x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 29LL;
	static volatile int16_t x70 = 0;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -277342581585LL;

	t17 = (x69&((x70<x71)==x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = -1;
	volatile uint16_t x76 = 586U;
	static int32_t t18 = 9;

	t18 = (x73&((x74<x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 51U;
	static int16_t x78 = -1;
	int16_t x79 = -1;
	static volatile int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 37206521;

	t19 = (x77&((x78<x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -7889;
	int64_t x84 = INT64_MIN;
	static volatile int32_t t20 = 13714136;

	t20 = (x81&((x82<x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int16_t x87 = -88;
	volatile uint32_t x88 = 49U;

	t21 = (x85&((x86<x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 3419125U;
	static volatile int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	volatile uint32_t t22 = 77U;

	t22 = (x89&((x90<x91)==x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 0;
	int32_t x94 = 1;
	static int16_t x95 = INT16_MIN;
	static int32_t x96 = INT32_MIN;
	int32_t t23 = 54;

	t23 = (x93&((x94<x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 20;
	int32_t x99 = -1;
	int16_t x100 = 2;
	volatile int32_t t24 = -40292;

	t24 = (x97&((x98<x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MAX;
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = 16707865U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -5674;

	t25 = (x101&((x102<x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	static uint32_t x107 = 4710489U;
	static int8_t x108 = INT8_MAX;
	int32_t t26 = 37;

	t26 = (x105&((x106<x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = UINT32_MAX;
	volatile uint8_t x111 = 19U;
	uint8_t x112 = 33U;
	static volatile int32_t t27 = 125289517;

	t27 = (x109&((x110<x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 6U;
	int32_t x114 = INT32_MIN;
	int64_t x115 = 50355982270624LL;
	volatile int32_t t28 = -86253;

	t28 = (x113&((x114<x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MAX;
	static uint16_t x120 = 3298U;
	volatile int32_t t29 = -26119721;

	t29 = (x117&((x118<x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -248458345;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = 18U;
	static int32_t t30 = -53127;

	t30 = (x121&((x122<x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = 1;
	static uint64_t x126 = 2550286655LLU;
	int8_t x128 = INT8_MIN;

	t31 = (x125&((x126<x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	uint64_t x132 = 25703294887136515LLU;

	t32 = (x129&((x130<x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 920;
	int64_t x135 = INT64_MAX;
	volatile int32_t t33 = 46804711;

	t33 = (x133&((x134<x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x138 = 57U;
	int16_t x139 = -1;
	volatile int32_t t34 = 6;

	t34 = (x137&((x138<x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	int8_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	static volatile int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -331663753;

	t35 = (x141&((x142<x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 2;
	int64_t x147 = INT64_MIN;
	static uint8_t x148 = 49U;
	volatile int32_t t36 = 2188;

	t36 = (x145&((x146<x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x150 = -1LL;
	volatile int8_t x151 = INT8_MIN;
	volatile int32_t x152 = INT32_MAX;
	static volatile int32_t t37 = 85;

	t37 = (x149&((x150<x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 70227599U;
	int64_t x154 = INT64_MIN;
	static int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile uint32_t t38 = 24900794U;

	t38 = (x153&((x154<x155)==x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -679;
	uint16_t x158 = 218U;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = -1270;

	t39 = (x157&((x158<x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = -49;
	static int8_t x162 = INT8_MIN;
	uint8_t x163 = 99U;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 102956;

	t40 = (x161&((x162<x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -4623951;
	static volatile uint32_t x166 = 150328U;
	uint16_t x167 = UINT16_MAX;
	static int16_t x168 = -1;
	int32_t t41 = 118979672;

	t41 = (x165&((x166<x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = -1;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 21;

	t42 = (x169&((x170<x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MAX;
	int64_t x176 = 225605LL;
	volatile int32_t t43 = 40;

	t43 = (x173&((x174<x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	uint16_t x180 = 1U;
	volatile int32_t t44 = -166111047;

	t44 = (x177&((x178<x179)==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	int64_t x182 = INT64_MAX;
	int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = -5139;

	t45 = (x181&((x182<x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	uint16_t x186 = 30091U;
	int32_t t46 = -6436497;

	t46 = (x185&((x186<x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	int32_t t47 = -70;

	t47 = (x189&((x190<x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -39LL;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 0U;

	t48 = (x193&((x194<x195)==x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MIN;
	int32_t t49 = 516435286;

	t49 = (x197&((x198<x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1650;
	uint8_t x202 = 15U;
	volatile uint64_t x203 = 1LLU;
	int8_t x204 = -1;
	int32_t t50 = -1717;

	t50 = (x201&((x202<x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	static int8_t x208 = INT8_MIN;
	int32_t t51 = -1660;

	t51 = (x205&((x206<x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 15;
	uint32_t x211 = 38430U;
	int64_t x212 = 100711226LL;
	int32_t t52 = -7;

	t52 = (x209&((x210<x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = UINT32_MAX;
	int32_t t53 = -1996;

	t53 = (x213&((x214<x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t54 = -61;

	t54 = (x217&((x218<x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 26U;
	volatile uint8_t x222 = 94U;
	static int16_t x223 = -3;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 34;

	t55 = (x221&((x222<x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 22U;
	int8_t x226 = INT8_MAX;
	int32_t x227 = -1;
	uint32_t x228 = UINT32_MAX;

	t56 = (x225&((x226<x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 6U;
	int32_t x230 = 596850;
	volatile uint32_t x231 = 2610U;
	volatile int64_t x232 = INT64_MIN;

	t57 = (x229&((x230<x231)==x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 418U;
	uint8_t x234 = 0U;
	static int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MIN;
	volatile uint32_t t58 = 79767567U;

	t58 = (x233&((x234<x235)==x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x239 = 10749840U;
	int32_t t59 = 1;

	t59 = (x237&((x238<x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x242 = UINT64_MAX;
	volatile int64_t x243 = 17263448384LL;
	static volatile uint8_t x244 = 2U;
	volatile int32_t t60 = 184;

	t60 = (x241&((x242<x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MIN;
	uint64_t x246 = 417LLU;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = 129384081LLU;
	static int32_t t61 = -150147744;

	t61 = (x245&((x246<x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 4U;
	int64_t x250 = INT64_MAX;
	int16_t x251 = INT16_MIN;
	int64_t x252 = -132823910LL;
	static volatile int32_t t62 = 238029;

	t62 = (x249&((x250<x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -5;
	int16_t x255 = INT16_MIN;
	static uint64_t x256 = 955362LLU;
	int32_t t63 = -54823;

	t63 = (x253&((x254<x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x258 = -419LL;
	int64_t x260 = -1LL;
	volatile int64_t t64 = -1469259LL;

	t64 = (x257&((x258<x259)==x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	static uint64_t x262 = 2014732448782026089LLU;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = INT32_MIN;
	uint32_t t65 = 92257636U;

	t65 = (x261&((x262<x263)==x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x266 = INT64_MAX;
	uint8_t x267 = 1U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -48491097;

	t66 = (x265&((x266<x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	int64_t x272 = 327LL;
	static volatile int32_t t67 = -23914;

	t67 = (x269&((x270<x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 0;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = -241400;

	t68 = (x273&((x274<x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	uint64_t x279 = 1887711883811LLU;
	volatile int16_t x280 = 0;
	int32_t t69 = -3730;

	t69 = (x277&((x278<x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	uint8_t x282 = 19U;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = -1;

	t70 = (x281&((x282<x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 401513538783338217LLU;
	static uint64_t x286 = 0LLU;
	volatile int64_t x287 = -896655733210930LL;
	int8_t x288 = 0;
	static uint64_t t71 = 11224850082321LLU;

	t71 = (x285&((x286<x287)==x288));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 12100U;
	volatile int8_t x290 = 53;
	volatile int8_t x291 = 1;
	uint16_t x292 = 294U;
	volatile int32_t t72 = 470417;

	t72 = (x289&((x290<x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -77233805LL;
	int8_t x294 = 0;
	int32_t x295 = 2;
	uint8_t x296 = 10U;
	int64_t t73 = -55335961LL;

	t73 = (x293&((x294<x295)==x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 1230250149853701911LLU;
	volatile int16_t x298 = INT16_MIN;
	int64_t x300 = INT64_MIN;

	t74 = (x297&((x298<x299)==x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = 1;
	static int64_t x304 = 2719236810398449546LL;
	static volatile int32_t t75 = 1;

	t75 = (x301&((x302<x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 6U;
	volatile int32_t x306 = INT32_MIN;
	uint64_t x307 = 623001483LLU;
	volatile int32_t t76 = -5;

	t76 = (x305&((x306<x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 5506U;
	uint32_t x310 = UINT32_MAX;
	volatile uint8_t x311 = UINT8_MAX;

	t77 = (x309&((x310<x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	uint16_t x314 = 8U;
	uint8_t x315 = 2U;
	int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 5619393;

	t78 = (x313&((x314<x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = 0;
	volatile uint32_t x319 = 410U;
	volatile int32_t t79 = 16;

	t79 = (x317&((x318<x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 44391088467598LLU;
	int8_t x322 = INT8_MAX;
	int64_t x323 = -1LL;
	volatile uint16_t x324 = UINT16_MAX;
	static volatile uint64_t t80 = 107287940322LLU;

	t80 = (x321&((x322<x323)==x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x326 = -1LL;
	int32_t x327 = -1608;
	volatile int32_t t81 = 2595797;

	t81 = (x325&((x326<x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 43;
	uint64_t x330 = 646157734LLU;
	int64_t x331 = -496370772LL;
	volatile int8_t x332 = INT8_MIN;

	t82 = (x329&((x330<x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 31U;
	uint8_t x334 = UINT8_MAX;
	static int64_t x335 = INT64_MAX;
	int32_t x336 = INT32_MIN;

	t83 = (x333&((x334<x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 17608304LLU;
	static int64_t x338 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t84 = 1213116714729029LLU;

	t84 = (x337&((x338<x339)==x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -226854841341LL;
	static volatile int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MAX;
	volatile int8_t x344 = 1;
	int64_t t85 = 0LL;

	t85 = (x341&((x342<x343)==x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 10U;
	static int64_t x347 = 3236208443809766LL;
	volatile uint64_t x348 = 32117398LLU;
	int32_t t86 = -26910700;

	t86 = (x345&((x346<x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	int64_t x350 = -140953835042143159LL;
	static uint64_t x351 = 21391578937LLU;
	int16_t x352 = -1;
	static volatile int32_t t87 = 516211;

	t87 = (x349&((x350<x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;

	t88 = (x353&((x354<x355)==x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -1;
	volatile int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = -1564;
	volatile int32_t t89 = -1035409;

	t89 = (x357&((x358<x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int8_t x363 = 0;
	int32_t x364 = INT32_MIN;
	int32_t t90 = -93715716;

	t90 = (x361&((x362<x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 3U;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 622449;

	t91 = (x365&((x366<x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = 1271;

	t92 = (x369&((x370<x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	uint64_t x375 = 45LLU;
	static volatile int32_t x376 = -327;
	int32_t t93 = -723;

	t93 = (x373&((x374<x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -1LL;
	int64_t x379 = INT64_MIN;
	int8_t x380 = -1;
	volatile int32_t t94 = -295;

	t94 = (x377&((x378<x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static volatile int64_t x382 = INT64_MAX;
	int64_t x383 = INT64_MAX;
	volatile int32_t x384 = INT32_MIN;
	static volatile int32_t t95 = 977;

	t95 = (x381&((x382<x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	volatile uint64_t x387 = 2294072741823LLU;
	volatile int8_t x388 = -1;

	t96 = (x385&((x386<x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	static int32_t x390 = -17;
	static uint8_t x391 = UINT8_MAX;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -860;

	t97 = (x389&((x390<x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MAX;
	int16_t x394 = -75;
	volatile uint32_t x395 = 232134700U;
	int16_t x396 = 27;
	static int32_t t98 = -489;

	t98 = (x393&((x394<x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -128;
	int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = 23098U;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -30;

	t99 = (x397&((x398<x399)==x400));

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

