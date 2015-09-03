#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MAX;
volatile int64_t t0 = -46772LL;
static uint8_t x5 = 3U;
volatile uint16_t x15 = 1874U;
volatile int64_t x18 = -1LL;
int64_t t4 = -161753902958LL;
int64_t x23 = INT64_MAX;
static int64_t t5 = 1778948LL;
int32_t x30 = INT32_MAX;
int32_t x32 = INT32_MIN;
int64_t x39 = INT64_MIN;
uint32_t x42 = UINT32_MAX;
int32_t x50 = INT32_MIN;
static int8_t x52 = INT8_MIN;
uint16_t x57 = 2112U;
static int64_t t14 = 3211LL;
int64_t x79 = INT64_MAX;
int64_t x100 = INT64_MAX;
volatile int16_t x102 = -1;
int64_t x103 = 5LL;
uint64_t x108 = 1601897475LLU;
volatile uint16_t x112 = 51U;
uint8_t x113 = 3U;
uint32_t x117 = UINT32_MAX;
volatile int8_t x119 = INT8_MAX;
static volatile int16_t x120 = INT16_MIN;
volatile uint32_t t27 = 1U;
volatile uint64_t t28 = 35983LLU;
int64_t t30 = -1053933594179LL;
uint64_t t31 = 2463869LLU;
static uint64_t x141 = UINT64_MAX;
static uint8_t x143 = 9U;
uint8_t x146 = 57U;
int16_t x148 = -206;
uint32_t x152 = UINT32_MAX;
static volatile uint16_t x157 = 248U;
volatile int64_t t36 = 87839LL;
int32_t x175 = INT32_MAX;
uint64_t t39 = 7899515770548LLU;
int16_t x179 = INT16_MIN;
uint32_t t42 = 134300917U;
int8_t x195 = -1;
volatile uint16_t x196 = 891U;
int64_t x208 = INT64_MIN;
uint32_t x211 = UINT32_MAX;
int64_t t47 = -207927678864289LL;
uint32_t x218 = UINT32_MAX;
static volatile uint32_t t49 = 11105U;
volatile int16_t x224 = -2;
uint64_t t50 = 14176472051399382LLU;
int64_t x226 = INT64_MAX;
uint64_t x228 = 13076LLU;
int8_t x232 = 22;
int8_t x237 = INT8_MIN;
int64_t x239 = INT64_MIN;
volatile uint64_t t54 = 51147008687967498LLU;
static uint8_t x242 = UINT8_MAX;
int32_t t55 = 400311892;
int32_t x247 = INT32_MIN;
int16_t x248 = -1;
static int64_t x251 = 0LL;
int8_t x254 = -9;
int8_t x257 = INT8_MAX;
static uint8_t x260 = 32U;
volatile uint32_t t59 = 1610325U;
static volatile int64_t x265 = -458810356484LL;
int16_t x268 = -8242;
int64_t t61 = 2898549472944LL;
uint8_t x279 = UINT8_MAX;
int8_t x288 = INT8_MAX;
volatile int16_t x290 = 2;
int16_t x296 = 104;
static volatile int16_t x297 = -1;
int64_t t69 = 102983613LL;
int16_t x304 = 1724;
int16_t x312 = -681;
volatile uint64_t t72 = 562604050800111476LLU;
uint64_t t74 = 12938615767407862LLU;
int32_t x325 = -63;
int64_t x329 = INT64_MAX;
int16_t x338 = 9;
volatile int32_t x342 = INT32_MIN;
volatile uint32_t t78 = 122125799U;
uint64_t x346 = 1400836405LLU;
int8_t x349 = INT8_MIN;
int16_t x351 = INT16_MIN;
uint64_t x354 = 5448707157708LLU;
volatile int64_t x355 = -33302431034LL;
int32_t x360 = 1;
volatile int16_t x361 = INT16_MAX;
int32_t x363 = -884556;
int32_t x366 = -337;
int8_t x368 = INT8_MIN;
static int8_t x369 = -1;
int64_t x371 = INT64_MIN;
volatile int16_t x378 = 14892;
uint8_t x380 = 82U;
volatile int32_t t87 = -1609527;
volatile uint32_t x383 = 249920599U;
int16_t x386 = INT16_MIN;
static int32_t x387 = INT32_MIN;
uint16_t x388 = 6739U;
int16_t x390 = -1;
static int16_t x391 = 10466;
volatile int32_t t90 = -864;
static uint32_t t93 = 359811U;
int16_t x407 = INT16_MIN;
uint32_t x423 = 11256330U;
uint32_t x426 = 106428358U;
static uint16_t x427 = 367U;
int8_t x431 = INT8_MIN;
int8_t x432 = -1;


void f0(void) {
	int32_t x1 = -1;
	static volatile uint16_t x2 = UINT16_MAX;
	uint32_t x4 = 158201522U;

	t0 = ((x1^(x2&x3))-x4);

	if (t0 != -158267058LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -2;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 306U;
	int32_t t1 = 1;

	t1 = ((x5^(x6&x7))-x8);

	if (t1 != -431) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -606870134LL;
	volatile int32_t x10 = 420180018;
	uint8_t x11 = UINT8_MAX;
	static int16_t x12 = 14;
	static int64_t t2 = 149733928600LL;

	t2 = ((x9^(x10&x11))-x12);

	if (t2 != -606870102LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MIN;
	volatile int32_t x16 = -1;
	static volatile int32_t t3 = 828;

	t3 = ((x13^(x14&x15))-x16);

	if (t3 != -1919) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 365284293U;
	int64_t x19 = -1LL;
	uint8_t x20 = 3U;

	t4 = ((x17^(x18&x19))-x20);

	if (t4 != -365284297LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 24;
	int16_t x22 = INT16_MIN;
	uint8_t x24 = 3U;

	t5 = ((x21^(x22&x23))-x24);

	if (t5 != 9223372036854743061LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2280U;
	uint32_t x26 = 1808568645U;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = INT32_MIN;
	uint32_t t6 = 1U;

	t6 = ((x25^(x26&x27))-x28);

	if (t6 != 2147485869U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 3430258121LL;
	static int8_t x31 = INT8_MIN;
	int64_t t7 = -5201805LL;

	t7 = ((x29^(x30&x31))-x32);

	if (t7 != 5159676489LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static uint64_t x34 = 1416957091755663LLU;
	static int64_t x35 = INT64_MIN;
	volatile uint64_t x36 = 2232983587290611871LLU;
	volatile uint64_t t8 = 5160048591067LLU;

	t8 = ((x33^(x34&x35))-x36);

	if (t8 != 16213760486418906977LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 7079571552794381LLU;
	int64_t x38 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 1630995136047LLU;

	t9 = ((x37^(x38&x39))-x40);

	if (t9 != 9230451608407570317LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 4U;
	int32_t x43 = -1;
	int16_t x44 = INT16_MIN;
	uint32_t t10 = 2577U;

	t10 = ((x41^(x42&x43))-x44);

	if (t10 != 32763U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	static int32_t x46 = INT32_MAX;
	volatile int8_t x47 = -1;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -27477;

	t11 = ((x45^(x46&x47))-x48);

	if (t11 != 2147483393) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int16_t x51 = 526;
	volatile int64_t t12 = 3190294804469LL;

	t12 = ((x49^(x50&x51))-x52);

	if (t12 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x58 = 43914873158500LLU;
	int32_t x59 = INT32_MIN;
	volatile int64_t x60 = INT64_MIN;
	volatile uint64_t t13 = 944140805LLU;

	t13 = ((x57^(x58&x59))-x60);

	if (t13 != 9223415950747895872LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 910U;
	int64_t x62 = 1934533LL;
	int8_t x63 = 1;
	uint16_t x64 = 4351U;

	t14 = ((x61^(x62&x63))-x64);

	if (t14 != -3440LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	volatile int64_t x66 = 764179525669LL;
	volatile int64_t x67 = -6474102LL;
	int32_t x68 = -1;
	volatile int64_t t15 = -4271067623806363LL;

	t15 = ((x65^(x66&x67))-x68);

	if (t15 != -764177297408LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	int16_t x70 = 0;
	uint64_t x71 = 258LLU;
	int32_t x72 = INT32_MIN;
	uint64_t t16 = 4177803620445667LLU;

	t16 = ((x69^(x70&x71))-x72);

	if (t16 != 2147483647LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -162LL;
	int32_t x78 = 106;
	volatile int16_t x80 = -9;
	volatile int64_t t17 = -8282506735LL;

	t17 = ((x77^(x78&x79))-x80);

	if (t17 != -195LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x81 = 2U;
	int64_t x82 = 13551LL;
	int16_t x83 = -1;
	int64_t x84 = 6LL;
	int64_t t18 = 12LL;

	t18 = ((x81^(x82&x83))-x84);

	if (t18 != 13543LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x85 = UINT16_MAX;
	volatile uint16_t x86 = 1U;
	uint64_t x87 = 1841906414478028LLU;
	uint8_t x88 = 51U;
	volatile uint64_t t19 = 192281669682LLU;

	t19 = ((x85^(x86&x87))-x88);

	if (t19 != 65484LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = 31996339347613020LL;
	int64_t x90 = INT64_MIN;
	volatile int16_t x91 = INT16_MIN;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t20 = -2772LL;

	t20 = ((x89^(x90&x91))-x92);

	if (t20 != -9191375697507163043LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 38U;
	int32_t x94 = -5;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = -1;
	int32_t t21 = 5;

	t21 = ((x93^(x94&x95))-x96);

	if (t21 != 222) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 5935U;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	static int64_t t22 = -5138696LL;

	t22 = ((x97^(x98&x99))-x100);

	if (t22 != -9223372032559835344LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x101 = INT8_MIN;
	int16_t x104 = -161;
	int64_t t23 = 13541120839856776LL;

	t23 = ((x101^(x102&x103))-x104);

	if (t23 != 38LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = UINT8_MAX;
	static uint8_t x106 = 40U;
	static uint32_t x107 = UINT32_MAX;
	volatile uint64_t t24 = 6995LLU;

	t24 = ((x105^(x106&x107))-x108);

	if (t24 != 18446744072107654356LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	int16_t x110 = INT16_MAX;
	static uint8_t x111 = 64U;
	volatile int32_t t25 = -1;

	t25 = ((x109^(x110&x111))-x112);

	if (t25 != -116) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = INT64_MAX;
	int16_t x115 = -1;
	int16_t x116 = 185;
	int64_t t26 = -4635LL;

	t26 = ((x113^(x114&x115))-x116);

	if (t26 != 9223372036854775619LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = -1;

	t27 = ((x117^(x118&x119))-x120);

	if (t27 != 32640U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -30533;
	volatile uint8_t x126 = UINT8_MAX;
	static uint64_t x127 = 26302697294710477LLU;
	int32_t x128 = INT32_MIN;

	t28 = ((x125^(x126&x127))-x128);

	if (t28 != 2147453046LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 64481U;
	int64_t x130 = INT64_MAX;
	int32_t x131 = -1;
	static int64_t x132 = INT64_MAX;
	volatile int64_t t29 = -138293495438703LL;

	t29 = ((x129^(x130&x131))-x132);

	if (t29 != -64481LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	static uint16_t x134 = 5725U;
	int64_t x135 = INT64_MIN;
	int64_t x136 = 179LL;

	t30 = ((x133^(x134&x135))-x136);

	if (t30 != 2147483468LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -176;
	int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = UINT64_MAX;

	t31 = ((x137^(x138&x139))-x140);

	if (t31 != 9223372036854775633LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = -1;
	int64_t x144 = -1308845LL;
	uint64_t t32 = 1021554198699522LLU;

	t32 = ((x141^(x142&x143))-x144);

	if (t32 != 1308835LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	int32_t t33 = -2;

	t33 = ((x145^(x146&x147))-x148);

	if (t33 != -32562) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x149 = 359714514312311070LLU;
	int32_t x150 = -245921994;
	int64_t x151 = INT64_MIN;
	uint64_t t34 = 3831277LLU;

	t34 = ((x149^(x150&x151))-x152);

	if (t34 != 9583086546872119583LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = INT32_MIN;
	volatile int32_t x159 = -800;
	int8_t x160 = -1;
	int32_t t35 = 75;

	t35 = ((x157^(x158&x159))-x160);

	if (t35 != -2147483399) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -127311215580631LL;
	int16_t x162 = INT16_MAX;
	volatile int8_t x163 = -1;
	uint32_t x164 = UINT32_MAX;

	t36 = ((x161^(x162&x163))-x164);

	if (t36 != -127315510536745LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	static int32_t x167 = INT32_MIN;
	int16_t x168 = 12246;
	static int32_t t37 = -78;

	t37 = ((x165^(x166&x167))-x168);

	if (t37 != 2147438634) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = 3581308LLU;
	uint64_t t38 = 12197403146457841LLU;

	t38 = ((x169^(x170&x171))-x172);

	if (t38 != 9223372036851194499LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x173 = 61226243632449724LLU;
	uint8_t x174 = UINT8_MAX;
	int64_t x176 = -78953LL;

	t39 = ((x173^(x174&x175))-x176);

	if (t39 != 61226243632528556LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x177 = 263810U;
	int64_t x178 = 420LL;
	static uint8_t x180 = UINT8_MAX;
	static int64_t t40 = 6LL;

	t40 = ((x177^(x178&x179))-x180);

	if (t40 != 263555LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = -10924;
	int16_t x183 = -1;
	int64_t x184 = -1LL;
	static int64_t t41 = -2556294508264572743LL;

	t41 = ((x181^(x182&x183))-x184);

	if (t41 != -21844LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	uint16_t x186 = 13649U;
	uint32_t x187 = 94507U;
	int16_t x188 = INT16_MAX;

	t42 = ((x185^(x186&x187))-x188);

	if (t42 != 4294921983U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 7U;
	int8_t x190 = -1;
	volatile uint32_t x191 = UINT32_MAX;
	static volatile uint16_t x192 = 29872U;
	uint32_t t43 = 1914U;

	t43 = ((x189^(x190&x191))-x192);

	if (t43 != 4294937416U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -96252242;
	int8_t x194 = INT8_MIN;
	int32_t t44 = 226202618;

	t44 = ((x193^(x194&x195))-x196);

	if (t44 != 96251315) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = 7707;
	int8_t x198 = 0;
	volatile uint32_t x199 = 2U;
	int8_t x200 = -1;
	uint32_t t45 = 2255522U;

	t45 = ((x197^(x198&x199))-x200);

	if (t45 != 7708U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MAX;
	volatile uint32_t x207 = 6020225U;
	int64_t t46 = -304LL;

	t46 = ((x205^(x206&x207))-x208);

	if (t46 != 9223372036854752126LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x209 = 1143946640044LL;
	uint32_t x210 = UINT32_MAX;
	int16_t x212 = INT16_MAX;

	t47 = ((x209^(x210&x211))-x212);

	if (t47 != 1145270895956LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x213 = INT32_MAX;
	uint16_t x214 = 6934U;
	volatile int64_t x215 = INT64_MIN;
	static uint32_t x216 = UINT32_MAX;
	int64_t t48 = -4045597LL;

	t48 = ((x213^(x214&x215))-x216);

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = INT8_MIN;
	uint8_t x219 = 1U;
	int8_t x220 = -25;

	t49 = ((x217^(x218&x219))-x220);

	if (t49 != 4294967194U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = 274383891403805LL;
	uint64_t x222 = 3972704468LLU;
	uint64_t x223 = 28978LLU;

	t50 = ((x221^(x222&x223))-x224);

	if (t50 != 274383891411983LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = 1LL;
	uint16_t x227 = 951U;
	uint64_t t51 = 17414307430911527LLU;

	t51 = ((x225^(x226&x227))-x228);

	if (t51 != 18446744073709539490LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -12104075246LL;
	int16_t x231 = -1;
	volatile uint64_t t52 = 480492629097LLU;

	t52 = ((x229^(x230&x231))-x232);

	if (t52 != 12104075223LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	static int64_t t53 = -1055219949185401LL;

	t53 = ((x233^(x234&x235))-x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x238 = 5114LLU;
	static uint16_t x240 = UINT16_MAX;

	t54 = ((x237^(x238&x239))-x240);

	if (t54 != 18446744073709485953LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x241 = 7U;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = 5U;

	t55 = ((x241^(x242&x243))-x244);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -303;
	static uint32_t x246 = 106U;
	uint32_t t56 = 21981U;

	t56 = ((x245^(x246&x247))-x248);

	if (t56 != 4294966994U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	volatile uint8_t x250 = 2U;
	uint8_t x252 = 0U;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x249^(x250&x251))-x252);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = UINT16_MAX;
	uint32_t x255 = 5445151U;
	uint16_t x256 = 26559U;
	volatile uint32_t t58 = 3784531U;

	t58 = ((x253^(x254&x255))-x256);

	if (t58 != 5472809U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x258 = INT32_MIN;
	uint32_t x259 = 1U;

	t59 = ((x257^(x258&x259))-x260);

	if (t59 != 95U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x261 = INT32_MIN;
	int64_t x262 = -1565202LL;
	static uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 15654710U;
	volatile int64_t t60 = -258862505990LL;

	t60 = ((x261^(x262&x263))-x264);

	if (t60 != -2164703560LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x266 = INT16_MIN;
	static volatile int64_t x267 = 12LL;

	t61 = ((x265^(x266&x267))-x268);

	if (t61 != -458810348242LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x269 = 118019734613662LL;
	volatile uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MAX;
	int16_t x272 = INT16_MIN;
	int64_t t62 = 578LL;

	t62 = ((x269^(x270&x271))-x272);

	if (t62 != 118019734646369LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = 4919432741825LL;
	int8_t x274 = 62;
	int64_t x275 = INT64_MAX;
	static int32_t x276 = 7;
	int64_t t63 = -30LL;

	t63 = ((x273^(x274&x275))-x276);

	if (t63 != 4919432741880LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MAX;
	int64_t x278 = -7694LL;
	volatile uint8_t x280 = 88U;
	int64_t t64 = 7879468030812437LL;

	t64 = ((x277^(x278&x279))-x280);

	if (t64 != 9223372036854775477LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = -9LL;
	int64_t x282 = -1LL;
	volatile int32_t x283 = 173;
	int16_t x284 = -1;
	int64_t t65 = 225201973487156LL;

	t65 = ((x281^(x282&x283))-x284);

	if (t65 != -165LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = 207403;
	volatile int32_t t66 = 3692;

	t66 = ((x285^(x286&x287))-x288);

	if (t66 != -32852) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 446U;
	static uint64_t x291 = 9244977LLU;
	volatile int8_t x292 = -59;
	volatile uint64_t t67 = 19001357241LLU;

	t67 = ((x289^(x290&x291))-x292);

	if (t67 != 505LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x293 = 6U;
	int16_t x294 = 6;
	volatile int64_t x295 = INT64_MIN;
	volatile int64_t t68 = -157163LL;

	t68 = ((x293^(x294&x295))-x296);

	if (t68 != -98LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x298 = INT64_MAX;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;

	t69 = ((x297^(x298&x299))-x300);

	if (t69 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x301 = 1;
	int64_t x302 = -2377147601027991LL;
	volatile uint16_t x303 = 3U;
	int64_t t70 = -13185423691LL;

	t70 = ((x301^(x302&x303))-x304);

	if (t70 != -1724LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x309 = 1875U;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	int32_t t71 = -2529;

	t71 = ((x309^(x310&x311))-x312);

	if (t71 != 31612) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 3315779U;
	volatile uint64_t x314 = 32268583924974LLU;
	volatile int16_t x315 = -1;
	volatile int64_t x316 = -205584830958LL;

	t72 = ((x313^(x314&x315))-x316);

	if (t72 != 32474165509787LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MAX;
	uint8_t x319 = 14U;
	int8_t x320 = INT8_MIN;
	int32_t t73 = 194647087;

	t73 = ((x317^(x318&x319))-x320);

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x321 = 102U;
	static int8_t x322 = -47;
	uint64_t x323 = 7176LLU;
	static volatile int64_t x324 = -226470949004LL;

	t74 = ((x321^(x322&x323))-x324);

	if (t74 != 226470956274LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x326 = -75813087;
	static int64_t x327 = INT64_MIN;
	uint8_t x328 = 0U;
	int64_t t75 = 60316LL;

	t75 = ((x325^(x326&x327))-x328);

	if (t75 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = -1;
	static uint64_t t76 = 373110114965LLU;

	t76 = ((x329^(x330&x331))-x332);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -29;
	static int32_t x339 = INT32_MIN;
	uint64_t x340 = 136LLU;
	uint64_t t77 = 13538390691407LLU;

	t77 = ((x337^(x338&x339))-x340);

	if (t77 != 18446744073709551451LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 0U;
	static int16_t x343 = 1;
	volatile uint32_t x344 = UINT32_MAX;

	t78 = ((x341^(x342&x343))-x344);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = 0;
	int16_t x347 = INT16_MIN;
	int64_t x348 = 25254LL;
	uint64_t t79 = 118731901LLU;

	t79 = ((x345^(x346&x347))-x348);

	if (t79 != 1400806746LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x350 = INT16_MAX;
	volatile int16_t x352 = INT16_MAX;
	volatile int32_t t80 = -81689;

	t80 = ((x349^(x350&x351))-x352);

	if (t80 != -32895) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = INT8_MIN;
	static int64_t x356 = INT64_MAX;
	static volatile uint64_t t81 = 2017725376105940877LLU;

	t81 = ((x353^(x354&x355))-x356);

	if (t81 != 9223366607479166277LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x357 = 13364440495290683LLU;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = 13;
	volatile uint64_t t82 = 136246061262465LLU;

	t82 = ((x357^(x358&x359))-x360);

	if (t82 != 13364440495290682LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x362 = INT8_MAX;
	static int32_t x364 = 583234468;
	static int32_t t83 = 1;

	t83 = ((x361^(x362&x363))-x364);

	if (t83 != -583201753) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x365 = 954699960U;
	uint16_t x367 = 17U;
	uint32_t t84 = 846U;

	t84 = ((x365^(x366&x367))-x368);

	if (t84 != 954700089U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x370 = 132206679U;
	static int32_t x372 = -1;
	static volatile int64_t t85 = -1562060733902738661LL;

	t85 = ((x369^(x370&x371))-x372);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x373 = UINT64_MAX;
	volatile int16_t x374 = 1;
	int32_t x375 = 36275792;
	int64_t x376 = -1LL;
	uint64_t t86 = 453049665706LLU;

	t86 = ((x373^(x374&x375))-x376);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x377 = -1;
	int32_t x379 = 5636;

	t87 = ((x377^(x378&x379))-x380);

	if (t87 != -4695) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = INT16_MAX;
	volatile int32_t x382 = INT32_MIN;
	volatile uint16_t x384 = 120U;
	uint32_t t88 = 455906U;

	t88 = ((x381^(x382&x383))-x384);

	if (t88 != 32647U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = -1LL;
	static int64_t t89 = -155821277700LL;

	t89 = ((x385^(x386&x387))-x388);

	if (t89 != 2147476908LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x392 = INT16_MAX;

	t90 = ((x389^(x390&x391))-x392);

	if (t90 != 22302) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = 31665988599LLU;
	int64_t x394 = -1LL;
	int64_t x395 = 1528129787778LL;
	uint16_t x396 = UINT16_MAX;
	volatile uint64_t t91 = 68490372587LLU;

	t91 = ((x393^(x394&x395))-x396);

	if (t91 != 1531505128566LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x397 = 66U;
	int8_t x398 = 7;
	volatile int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	uint32_t t92 = 7802U;

	t92 = ((x397^(x398&x399))-x400);

	if (t92 != 32837U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	uint16_t x403 = 2922U;
	uint16_t x404 = UINT16_MAX;

	t93 = ((x401^(x402&x403))-x404);

	if (t93 != 4294901760U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x405 = INT16_MIN;
	uint64_t x406 = 293581442272494LLU;
	volatile uint64_t x408 = 290995319479LLU;
	volatile uint64_t t94 = 116280987027512LLU;

	t94 = ((x405^(x406&x407))-x408);

	if (t94 != 18446450201271946569LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MAX;
	static int32_t x414 = INT32_MAX;
	uint32_t x415 = 9785U;
	uint16_t x416 = UINT16_MAX;
	uint32_t t95 = 16U;

	t95 = ((x413^(x414&x415))-x416);

	if (t95 != 2147408327U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x417 = -1LL;
	static uint32_t x418 = 87U;
	static int64_t x419 = INT64_MAX;
	int16_t x420 = INT16_MAX;
	volatile int64_t t96 = -7847050731536LL;

	t96 = ((x417^(x418&x419))-x420);

	if (t96 != -32855LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MAX;
	static int8_t x422 = 0;
	static volatile int32_t x424 = -1;
	uint32_t t97 = 3926733U;

	t97 = ((x421^(x422&x423))-x424);

	if (t97 != 128U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = 184LL;
	static int16_t x428 = INT16_MAX;
	volatile int64_t t98 = -2949481123LL;

	t98 = ((x425^(x426&x427))-x428);

	if (t98 != -32257LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = -2039161894034866LL;
	uint64_t x430 = 1555675LLU;
	static uint64_t t99 = 8053267580LLU;

	t99 = ((x429^(x430&x431))-x432);

	if (t99 != 18444704911816728271LLU) { NG(); } else { ; }
	
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

