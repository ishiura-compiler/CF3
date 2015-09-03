#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 752U;
static uint64_t x7 = UINT64_MAX;
int32_t t1 = 788420138;
static uint8_t x9 = 11U;
int32_t x11 = -5;
int8_t x12 = INT8_MAX;
uint16_t x14 = 233U;
int64_t x21 = INT64_MIN;
volatile int32_t t4 = -64710;
int32_t x26 = INT32_MIN;
static volatile int16_t x28 = INT16_MIN;
int8_t x30 = INT8_MAX;
uint8_t x32 = UINT8_MAX;
volatile int64_t x35 = -1LL;
volatile int32_t t7 = 3;
volatile uint32_t x37 = 93043611U;
uint16_t x39 = 1948U;
int32_t t8 = -184236;
int8_t x46 = INT8_MAX;
int16_t x47 = -1;
volatile int16_t x48 = INT16_MIN;
int8_t x54 = -1;
static int8_t x61 = INT8_MIN;
uint16_t x63 = UINT16_MAX;
static volatile int64_t x65 = -4575687LL;
static int64_t x76 = 3162LL;
static uint16_t x77 = UINT16_MAX;
int64_t x79 = INT64_MIN;
volatile int32_t x83 = INT32_MIN;
int32_t t18 = 128;
int32_t x86 = -1;
int64_t x88 = -1LL;
volatile int64_t t19 = -1024485LL;
uint32_t x99 = 19736U;
volatile int32_t x122 = -31499183;
static volatile int16_t x124 = -1;
int32_t x125 = INT32_MIN;
int64_t x133 = INT64_MAX;
uint16_t x143 = UINT16_MAX;
uint16_t x145 = 8200U;
int32_t x149 = INT32_MIN;
int16_t x153 = INT16_MIN;
int8_t x154 = INT8_MAX;
static int16_t x158 = -124;
static int32_t x161 = 52;
static int32_t x164 = 7293;
static int32_t t38 = 1;
int64_t x168 = INT64_MIN;
static int32_t x169 = INT32_MAX;
volatile int8_t x172 = -1;
int8_t x174 = -1;
static volatile int32_t x186 = 3;
int16_t x187 = INT16_MIN;
volatile int32_t x190 = -598;
volatile uint64_t x197 = 5266545343LLU;
uint32_t x199 = UINT32_MAX;
static int8_t x201 = 2;
int16_t x212 = -1;
volatile uint16_t x223 = 36U;
volatile int16_t x227 = INT16_MIN;
int32_t x228 = INT32_MIN;
volatile int32_t x238 = -13;
int64_t x239 = INT64_MIN;
int64_t x243 = -7297604292103LL;
volatile int64_t t59 = INT64_MIN;
uint64_t x253 = UINT64_MAX;
volatile int32_t t60 = 1;
uint16_t x262 = 33U;
uint64_t x279 = 853322LLU;
volatile int32_t x281 = INT32_MIN;
uint8_t x289 = UINT8_MAX;
volatile int32_t t69 = 3;
int32_t x303 = INT32_MIN;
int32_t x306 = -1;
volatile uint32_t x307 = UINT32_MAX;
volatile int8_t x309 = -1;
volatile int32_t x312 = -554291;
int16_t x320 = INT16_MAX;
static int8_t x324 = -54;
int8_t x325 = INT8_MIN;
static uint64_t x326 = 8847427900LLU;
int64_t x327 = -1LL;
int8_t x329 = INT8_MIN;
int16_t x332 = -1;
volatile uint32_t x335 = UINT32_MAX;
int8_t x338 = -3;
int64_t x339 = -2LL;
uint32_t x342 = 12U;
static volatile int32_t x343 = INT32_MIN;
int32_t x345 = -1;
uint64_t x349 = 1227174937533535LLU;
int16_t x350 = 6;
static int32_t t83 = 18;
int16_t x358 = -1;
uint32_t x359 = 9U;
static volatile int8_t x361 = INT8_MAX;
int16_t x364 = -30;
int32_t x368 = INT32_MIN;
volatile uint32_t x371 = UINT32_MAX;
int64_t x372 = 652249LL;
int16_t x374 = INT16_MIN;
static uint8_t x376 = 22U;
int16_t x377 = -1;
int32_t x378 = INT32_MIN;
uint32_t x380 = UINT32_MAX;
static uint32_t x381 = 5206820U;
uint32_t x383 = 1433840139U;
static volatile uint32_t x386 = 3741002U;
volatile int64_t t94 = -904660656249LL;
uint8_t x398 = 71U;
uint8_t x402 = 12U;
volatile int8_t x403 = INT8_MAX;
volatile uint8_t x407 = UINT8_MAX;
int32_t x409 = 2177354;
volatile uint64_t t99 = 213836852036702LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = UINT8_MAX;
	static int8_t x3 = -1;
	volatile int32_t t0 = 112235;

	t0 = (((x1%x2)<x3)^x4);

	if (t0 != 753) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = -1;
	volatile int16_t x8 = 5;

	t1 = (((x5%x6)<x7)^x8);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile int32_t t2 = -910;

	t2 = (((x9%x10)<x11)^x12);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 29275LLU;
	uint8_t x15 = 9U;
	volatile int32_t x16 = -7377844;
	volatile int32_t t3 = -18268324;

	t3 = (((x13%x14)<x15)^x16);

	if (t3 != -7377844) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = -165692750;
	static uint16_t x23 = UINT16_MAX;
	int16_t x24 = -20;

	t4 = (((x21%x22)<x23)^x24);

	if (t4 != -19) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int64_t x27 = INT64_MIN;
	int32_t t5 = 37567;

	t5 = (((x25%x26)<x27)^x28);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 8276;
	uint32_t x31 = 6876U;
	static int32_t t6 = 5;

	t6 = (((x29%x30)<x31)^x32);

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = UINT32_MAX;
	volatile int32_t x34 = 10;
	static int8_t x36 = INT8_MIN;

	t7 = (((x33%x34)<x35)^x36);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = INT32_MAX;
	volatile uint8_t x40 = 16U;

	t8 = (((x37%x38)<x39)^x40);

	if (t8 != 16) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = 466LL;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = 2287;

	t9 = (((x41%x42)<x43)^x44);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = 1645942820U;
	int32_t t10 = -90;

	t10 = (((x45%x46)<x47)^x48);

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = -68;
	uint64_t x50 = 9637362792LLU;
	int16_t x51 = INT16_MIN;
	static int32_t x52 = -1260;
	volatile int32_t t11 = 1417;

	t11 = (((x49%x50)<x51)^x52);

	if (t11 != -1259) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int16_t x55 = INT16_MIN;
	volatile int16_t x56 = INT16_MIN;
	int32_t t12 = -374;

	t12 = (((x53%x54)<x55)^x56);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x62 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t13 = 196;

	t13 = (((x61%x62)<x63)^x64);

	if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t14 = 195;

	t14 = (((x65%x66)<x67)^x68);

	if (t14 != 2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	static uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MIN;
	int32_t x72 = -2029;
	int32_t t15 = -17945735;

	t15 = (((x69%x70)<x71)^x72);

	if (t15 != -2029) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 1U;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = UINT64_MAX;
	int64_t t16 = -4068731012LL;

	t16 = (((x73%x74)<x75)^x76);

	if (t16 != 3163LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x78 = UINT64_MAX;
	static uint8_t x80 = 15U;
	volatile int32_t t17 = -32171;

	t17 = (((x77%x78)<x79)^x80);

	if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint32_t x82 = 32110271U;
	int16_t x84 = INT16_MAX;

	t18 = (((x81%x82)<x83)^x84);

	if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x85 = 1U;
	volatile int64_t x87 = INT64_MIN;

	t19 = (((x85%x86)<x87)^x88);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 4U;
	static int64_t x90 = INT64_MAX;
	uint16_t x91 = UINT16_MAX;
	volatile int16_t x92 = INT16_MAX;
	static int32_t t20 = 11435;

	t20 = (((x89%x90)<x91)^x92);

	if (t20 != 32766) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x93 = 5U;
	static int8_t x94 = -1;
	static int16_t x95 = INT16_MAX;
	uint16_t x96 = 193U;
	int32_t t21 = 563892;

	t21 = (((x93%x94)<x95)^x96);

	if (t21 != 192) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	volatile int32_t x98 = INT32_MIN;
	static volatile int8_t x100 = 0;
	static int32_t t22 = -295535;

	t22 = (((x97%x98)<x99)^x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = 9802675387086LLU;
	uint32_t x102 = 38U;
	int32_t x103 = 124;
	volatile int64_t x104 = INT64_MAX;
	int64_t t23 = -4LL;

	t23 = (((x101%x102)<x103)^x104);

	if (t23 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -31788;
	static int64_t x106 = 17813485057773681LL;
	uint16_t x107 = 26046U;
	uint16_t x108 = 3U;
	int32_t t24 = -12705316;

	t24 = (((x105%x106)<x107)^x108);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 925U;
	static volatile int16_t x110 = 41;
	int16_t x111 = INT16_MIN;
	volatile int64_t x112 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x109%x110)<x111)^x112);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = 30U;
	volatile int16_t x116 = INT16_MIN;
	int32_t t26 = 6544;

	t26 = (((x113%x114)<x115)^x116);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x117 = 10U;
	uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = INT64_MIN;
	static int16_t x120 = -1;
	int32_t t27 = -1717266;

	t27 = (((x117%x118)<x119)^x120);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	int32_t t28 = 313927941;

	t28 = (((x121%x122)<x123)^x124);

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	volatile int64_t x128 = INT64_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (((x125%x126)<x127)^x128);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile int8_t x132 = INT8_MIN;
	int32_t t30 = -671795176;

	t30 = (((x129%x130)<x131)^x132);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x134 = INT32_MIN;
	int8_t x135 = 1;
	volatile int16_t x136 = INT16_MIN;
	int32_t t31 = -6;

	t31 = (((x133%x134)<x135)^x136);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -30250653LL;
	static int32_t x138 = INT32_MAX;
	uint32_t x139 = 42225310U;
	int16_t x140 = INT16_MIN;
	int32_t t32 = -19;

	t32 = (((x137%x138)<x139)^x140);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = 4U;
	int64_t x144 = -198735970155787150LL;
	int64_t t33 = 36130365LL;

	t33 = (((x141%x142)<x143)^x144);

	if (t33 != -198735970155787149LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x146 = -1;
	int64_t x147 = 34253333892694LL;
	volatile int32_t x148 = INT32_MIN;
	int32_t t34 = 162588910;

	t34 = (((x145%x146)<x147)^x148);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x150 = -1;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	volatile int32_t t35 = -2080897;

	t35 = (((x149%x150)<x151)^x152);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x155 = UINT32_MAX;
	static int64_t x156 = -4758227157LL;
	int64_t t36 = 996486421735LL;

	t36 = (((x153%x154)<x155)^x156);

	if (t36 != -4758227158LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 5LLU;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t37 = -28980542;

	t37 = (((x157%x158)<x159)^x160);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = -1;
	volatile int32_t x163 = INT32_MAX;

	t38 = (((x161%x162)<x163)^x164);

	if (t38 != 7292) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x165 = UINT8_MAX;
	static uint32_t x166 = 2U;
	volatile int32_t x167 = -5;
	int64_t t39 = 4LL;

	t39 = (((x165%x166)<x167)^x168);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MAX;
	static int32_t x171 = 57;
	static int32_t t40 = -11678;

	t40 = (((x169%x170)<x171)^x172);

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x173 = UINT8_MAX;
	int32_t x175 = -1;
	int32_t x176 = INT32_MIN;
	int32_t t41 = INT32_MIN;

	t41 = (((x173%x174)<x175)^x176);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 9U;
	int64_t x178 = 858LL;
	volatile int32_t x179 = INT32_MAX;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t42 = 1LLU;

	t42 = (((x177%x178)<x179)^x180);

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x181 = UINT8_MAX;
	uint8_t x182 = UINT8_MAX;
	static uint16_t x183 = 11639U;
	int32_t x184 = INT32_MIN;
	int32_t t43 = -1;

	t43 = (((x181%x182)<x183)^x184);

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (((x185%x186)<x187)^x188);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = -1LL;
	uint32_t x191 = 76U;
	int8_t x192 = -1;
	static volatile int32_t t45 = 870;

	t45 = (((x189%x190)<x191)^x192);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = UINT64_MAX;
	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x195 = UINT8_MAX;
	uint32_t x196 = 47767861U;
	volatile uint32_t t46 = 25441U;

	t46 = (((x193%x194)<x195)^x196);

	if (t46 != 47767860U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x198 = -1LL;
	volatile int64_t x200 = 57937433067257133LL;
	int64_t t47 = 13165376532128392LL;

	t47 = (((x197%x198)<x199)^x200);

	if (t47 != 57937433067257133LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x202 = -1;
	int32_t x203 = -1;
	volatile uint64_t x204 = 0LLU;
	volatile uint64_t t48 = 46246LLU;

	t48 = (((x201%x202)<x203)^x204);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x205 = -1LL;
	int8_t x206 = INT8_MIN;
	int8_t x207 = 49;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t49 = 82137;

	t49 = (((x205%x206)<x207)^x208);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = INT64_MIN;
	int32_t x210 = -160;
	int32_t x211 = INT32_MIN;
	static int32_t t50 = 3052;

	t50 = (((x209%x210)<x211)^x212);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = 83U;
	int32_t x214 = INT32_MIN;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = UINT32_MAX;
	static volatile uint32_t t51 = 440U;

	t51 = (((x213%x214)<x215)^x216);

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = UINT32_MAX;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = 13229;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t52 = -57440451525667LL;

	t52 = (((x217%x218)<x219)^x220);

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MAX;
	int32_t x224 = 1304;
	volatile int32_t t53 = 0;

	t53 = (((x221%x222)<x223)^x224);

	if (t53 != 1305) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (((x225%x226)<x227)^x228);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MAX;
	int8_t x232 = 1;
	int32_t t55 = 3859302;

	t55 = (((x229%x230)<x231)^x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -60;
	volatile int64_t x234 = INT64_MIN;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MIN;
	int64_t t56 = 1230384LL;

	t56 = (((x233%x234)<x235)^x236);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 0;
	uint8_t x240 = UINT8_MAX;
	static int32_t t57 = 20;

	t57 = (((x237%x238)<x239)^x240);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = 32;
	int64_t x242 = INT64_MIN;
	static int8_t x244 = INT8_MIN;
	int32_t t58 = 205546;

	t58 = (((x241%x242)<x243)^x244);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int32_t x250 = -1497;
	int8_t x251 = -1;
	static int64_t x252 = INT64_MIN;

	t59 = (((x249%x250)<x251)^x252);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x254 = 1U;
	uint8_t x255 = 39U;
	int8_t x256 = INT8_MAX;

	t60 = (((x253%x254)<x255)^x256);

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	static volatile uint64_t x260 = 716LLU;
	volatile uint64_t t61 = 188177751LLU;

	t61 = (((x257%x258)<x259)^x260);

	if (t61 != 716LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -121675;
	static int16_t x263 = -1;
	int16_t x264 = 2;
	volatile int32_t t62 = 781195;

	t62 = (((x261%x262)<x263)^x264);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = 31;
	static int64_t x266 = INT64_MAX;
	static int16_t x267 = -1;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t63 = -5568;

	t63 = (((x265%x266)<x267)^x268);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = -1;
	volatile uint32_t x270 = 200U;
	uint16_t x271 = 28U;
	volatile uint64_t x272 = 17576080235294LLU;
	uint64_t t64 = 153304917569LLU;

	t64 = (((x269%x270)<x271)^x272);

	if (t64 != 17576080235294LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = INT64_MIN;
	static uint8_t x274 = 8U;
	uint64_t x275 = 1510LLU;
	uint16_t x276 = 9U;
	static int32_t t65 = 4514710;

	t65 = (((x273%x274)<x275)^x276);

	if (t65 != 8) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x277 = UINT32_MAX;
	int8_t x278 = -1;
	uint32_t x280 = UINT32_MAX;
	static uint32_t t66 = 210628061U;

	t66 = (((x277%x278)<x279)^x280);

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x282 = UINT64_MAX;
	volatile int32_t x283 = INT32_MAX;
	int64_t x284 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (((x281%x282)<x283)^x284);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = 5;
	int16_t x286 = INT16_MIN;
	static uint16_t x287 = 2U;
	int16_t x288 = INT16_MIN;
	int32_t t68 = -30;

	t68 = (((x285%x286)<x287)^x288);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x290 = 8486257836LLU;
	int8_t x291 = INT8_MIN;
	static volatile int32_t x292 = INT32_MAX;

	t69 = (((x289%x290)<x291)^x292);

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = 6697U;
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = -1557;
	uint64_t x296 = 17137006941548LLU;
	uint64_t t70 = 344171207LLU;

	t70 = (((x293%x294)<x295)^x296);

	if (t70 != 17137006941549LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -395492;
	static int16_t x298 = -1;
	volatile uint32_t x299 = 173525U;
	static int32_t x300 = -473386;
	volatile int32_t t71 = 7;

	t71 = (((x297%x298)<x299)^x300);

	if (t71 != -473385) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = UINT16_MAX;
	volatile uint16_t x302 = 175U;
	uint64_t x304 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x301%x302)<x303)^x304);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x308 = -111732;
	volatile int32_t t73 = -6545337;

	t73 = (((x305%x306)<x307)^x308);

	if (t73 != -111731) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	int32_t t74 = 85669680;

	t74 = (((x309%x310)<x311)^x312);

	if (t74 != -554291) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 15507072LLU;
	static int8_t x318 = 1;
	static int16_t x319 = INT16_MAX;
	int32_t t75 = -23;

	t75 = (((x317%x318)<x319)^x320);

	if (t75 != 32766) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x321 = UINT32_MAX;
	int32_t x322 = -44766930;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t t76 = 18284146;

	t76 = (((x321%x322)<x323)^x324);

	if (t76 != -53) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x328 = INT8_MIN;
	int32_t t77 = 121793;

	t77 = (((x325%x326)<x327)^x328);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x330 = -1;
	int64_t x331 = INT64_MIN;
	volatile int32_t t78 = 6053177;

	t78 = (((x329%x330)<x331)^x332);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = 753556905U;
	static int64_t x334 = -1LL;
	static int16_t x336 = -1;
	volatile int32_t t79 = 837;

	t79 = (((x333%x334)<x335)^x336);

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x337 = INT16_MAX;
	static int32_t x340 = -1;
	volatile int32_t t80 = 910;

	t80 = (((x337%x338)<x339)^x340);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int32_t x344 = -1;
	volatile int32_t t81 = 94329;

	t81 = (((x341%x342)<x343)^x344);

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x346 = UINT16_MAX;
	volatile uint16_t x347 = UINT16_MAX;
	static volatile int64_t x348 = INT64_MIN;
	static volatile int64_t t82 = 1670343110LL;

	t82 = (((x345%x346)<x347)^x348);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x351 = 575LLU;
	static volatile int32_t x352 = INT32_MIN;

	t83 = (((x349%x350)<x351)^x352);

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	volatile int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t84 = 5709277;

	t84 = (((x353%x354)<x355)^x356);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 1U;
	int32_t x360 = -278741094;
	volatile int32_t t85 = 7466;

	t85 = (((x357%x358)<x359)^x360);

	if (t85 != -278741093) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x362 = 4U;
	static int8_t x363 = INT8_MIN;
	volatile int32_t t86 = 1;

	t86 = (((x361%x362)<x363)^x364);

	if (t86 != -30) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	static uint8_t x367 = 17U;
	volatile int32_t t87 = INT32_MIN;

	t87 = (((x365%x366)<x367)^x368);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x369 = 214678164U;
	static volatile uint32_t x370 = 8021667U;
	int64_t t88 = 2038087392433438662LL;

	t88 = (((x369%x370)<x371)^x372);

	if (t88 != 652248LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x375 = INT16_MAX;
	volatile int32_t t89 = 5713616;

	t89 = (((x373%x374)<x375)^x376);

	if (t89 != 23) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x379 = -1;
	static uint32_t t90 = UINT32_MAX;

	t90 = (((x377%x378)<x379)^x380);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x382 = INT16_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t91 = -368205205340424052LL;

	t91 = (((x381%x382)<x383)^x384);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x385 = -1LL;
	static int64_t x387 = INT64_MAX;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t92 = -6544;

	t92 = (((x385%x386)<x387)^x388);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x389 = 16556134340602458LLU;
	static volatile uint32_t x390 = 73888U;
	uint32_t x391 = 3718U;
	static int16_t x392 = INT16_MIN;
	int32_t t93 = 130658;

	t93 = (((x389%x390)<x391)^x392);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MIN;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = 3747;
	int64_t x396 = INT64_MIN;

	t94 = (((x393%x394)<x395)^x396);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = 29U;
	static uint32_t x399 = UINT32_MAX;
	volatile uint64_t x400 = 24LLU;
	uint64_t t95 = 50207918050LLU;

	t95 = (((x397%x398)<x399)^x400);

	if (t95 != 25LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	static int32_t x404 = INT32_MIN;
	int32_t t96 = 8;

	t96 = (((x401%x402)<x403)^x404);

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	static uint8_t x406 = 11U;
	int32_t x408 = INT32_MAX;
	volatile int32_t t97 = 321214;

	t97 = (((x405%x406)<x407)^x408);

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x410 = INT8_MIN;
	uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = 57753930828LL;
	volatile int64_t t98 = -88942738LL;

	t98 = (((x409%x410)<x411)^x412);

	if (t98 != 57753930829LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MIN;
	static volatile uint32_t x415 = UINT32_MAX;
	static uint64_t x416 = UINT64_MAX;

	t99 = (((x413%x414)<x415)^x416);

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

