#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 32U;
int32_t t1 = -21;
int16_t x17 = INT16_MAX;
uint16_t x18 = 7U;
int32_t t4 = 12278486;
int64_t x25 = 24256LL;
int16_t x26 = -1;
volatile uint32_t x32 = 3706U;
volatile int32_t t7 = -292;
volatile int32_t x38 = -1;
static uint8_t x43 = 0U;
int32_t x47 = 38;
int8_t x50 = INT8_MIN;
static int64_t x61 = -1LL;
static volatile uint16_t x62 = 1252U;
uint32_t x66 = UINT32_MAX;
int32_t x70 = -1;
int64_t x75 = INT64_MIN;
int32_t t17 = 131365;
uint16_t x82 = UINT16_MAX;
int16_t x83 = INT16_MAX;
static int64_t x84 = -1LL;
int32_t t20 = 3132639;
int8_t x94 = -8;
static uint64_t x96 = 9853LLU;
int64_t x98 = INT64_MAX;
uint32_t x109 = UINT32_MAX;
volatile int32_t t26 = 81520857;
static uint16_t x116 = 7834U;
uint32_t x120 = 3874229U;
int64_t x121 = -1447589098LL;
int64_t x125 = -4796635359LL;
int8_t x127 = INT8_MIN;
uint8_t x128 = 0U;
volatile int16_t x131 = INT16_MAX;
uint32_t x134 = 10U;
static volatile int32_t t32 = -121;
static uint32_t x141 = UINT32_MAX;
static int32_t x146 = -17130;
int64_t x151 = INT64_MAX;
volatile int8_t x154 = INT8_MAX;
static int32_t x156 = -1;
volatile int32_t t37 = -15;
int16_t x167 = -15136;
volatile int32_t x171 = -1;
int16_t x181 = INT16_MIN;
int64_t x183 = -8804747773984773LL;
uint32_t x184 = 128215U;
uint32_t x208 = 505144030U;
int8_t x209 = INT8_MAX;
int32_t x225 = INT32_MIN;
int8_t x229 = INT8_MAX;
uint16_t x235 = 177U;
static int8_t x241 = INT8_MIN;
int8_t x245 = INT8_MIN;
int32_t t60 = -4317917;
static int64_t x250 = INT64_MAX;
uint8_t x253 = 112U;
uint8_t x255 = 28U;
volatile int32_t x259 = -1;
uint16_t x275 = UINT16_MAX;
int64_t x290 = -1LL;
uint16_t x297 = UINT16_MAX;
static int64_t x304 = 18496373LL;
volatile int32_t t76 = -255578;
static int32_t x323 = INT32_MIN;
volatile int8_t x328 = 10;
static volatile int8_t x329 = INT8_MIN;
int8_t x333 = 2;
uint64_t x335 = 13LLU;
int16_t x344 = INT16_MAX;
static uint32_t x345 = 367918535U;
int8_t x347 = INT8_MAX;
int16_t x348 = 5465;
uint16_t x352 = UINT16_MAX;
int16_t x355 = INT16_MIN;
uint16_t x358 = 1U;
int16_t x361 = INT16_MIN;
int8_t x365 = INT8_MAX;
volatile int16_t x368 = -1;
volatile int16_t x369 = INT16_MAX;
volatile int64_t x371 = 40630433LL;
static uint8_t x378 = UINT8_MAX;
int32_t t95 = 664696231;
int32_t t97 = -91538627;
volatile int16_t x398 = -15161;
static volatile int64_t x400 = INT64_MIN;
volatile int32_t t98 = 120116;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MIN;
	volatile int32_t x3 = -1;
	static volatile uint8_t x4 = UINT8_MAX;
	static int32_t t0 = 14;

	t0 = ((x1/(x2|x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	int32_t x7 = -1;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5/(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	int64_t x14 = -46996445455513LL;
	int64_t x15 = 67508034LL;
	uint32_t x16 = 4972U;
	volatile int32_t t2 = 3808813;

	t2 = ((x13/(x14|x15))<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x19 = INT32_MIN;
	uint32_t x20 = UINT32_MAX;
	int32_t t3 = 38578822;

	t3 = ((x17/(x18|x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -54;
	volatile int32_t x22 = INT32_MIN;
	static int64_t x23 = 2598357123LL;
	int64_t x24 = INT64_MAX;

	t4 = ((x21/(x22|x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -124913929609462LL;
	static int16_t x28 = -1;
	volatile int32_t t5 = -59;

	t5 = ((x25/(x26|x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x29 = 248553965U;
	uint16_t x30 = 1938U;
	int32_t x31 = INT32_MIN;
	static int32_t t6 = 969674;

	t6 = ((x29/(x30|x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 52231U;
	static volatile uint16_t x34 = 98U;
	volatile int8_t x35 = INT8_MIN;
	volatile int16_t x36 = -1717;

	t7 = ((x33/(x34|x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -3888;
	int32_t x39 = INT32_MIN;
	static int8_t x40 = -10;
	volatile int32_t t8 = 111;

	t8 = ((x37/(x38|x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = INT32_MIN;
	int8_t x44 = -24;
	volatile int32_t t9 = -517;

	t9 = ((x41/(x42|x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	uint32_t x46 = 1U;
	int32_t x48 = -1;
	static volatile int32_t t10 = -1;

	t10 = ((x45/(x46|x47))<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -776LL;
	int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	volatile int32_t t11 = -1940;

	t11 = ((x49/(x50|x51))<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = -1;
	int32_t t12 = -193898732;

	t12 = ((x53/(x54|x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -214842400;
	uint64_t x58 = 159804194LLU;
	int64_t x59 = -114868751745055902LL;
	int64_t x60 = -1LL;
	int32_t t13 = -255;

	t13 = ((x57/(x58|x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x63 = 61500342U;
	static uint8_t x64 = 78U;
	volatile int32_t t14 = -10344463;

	t14 = ((x61/(x62|x63))<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x67 = 15U;
	uint8_t x68 = 59U;
	volatile int32_t t15 = 3;

	t15 = ((x65/(x66|x67))<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	int32_t x71 = -1631487;
	static uint8_t x72 = 0U;
	volatile int32_t t16 = -27429;

	t16 = ((x69/(x70|x71))<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MIN;
	uint32_t x76 = 29U;

	t17 = ((x73/(x74|x75))<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 23359621081657LL;
	int16_t x78 = 1;
	int32_t x79 = -1;
	uint16_t x80 = 4132U;
	int32_t t18 = 145;

	t18 = ((x77/(x78|x79))<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 6U;
	int32_t t19 = 10;

	t19 = ((x81/(x82|x83))<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MAX;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = -1;

	t20 = ((x85/(x86|x87))<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 1925922828287LLU;
	uint8_t x92 = 7U;
	int32_t t21 = -229111;

	t21 = ((x89/(x90|x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;
	int32_t t22 = 17943;

	t22 = ((x93/(x94|x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MIN;
	int32_t x99 = 0;
	uint32_t x100 = UINT32_MAX;
	int32_t t23 = -28890142;

	t23 = ((x97/(x98|x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -7121;
	int32_t x102 = -1;
	uint32_t x103 = 862U;
	volatile uint32_t x104 = 1432043122U;
	volatile int32_t t24 = 3110700;

	t24 = ((x101/(x102|x103))<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 0LLU;
	int8_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = -16840;
	int32_t t25 = -21419;

	t25 = ((x105/(x106|x107))<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MAX;
	volatile int8_t x112 = -29;

	t26 = ((x109/(x110|x111))<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 22U;
	int16_t x114 = -1;
	static int64_t x115 = INT64_MAX;
	int32_t t27 = 855024;

	t27 = ((x113/(x114|x115))<x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = 6096U;
	int64_t x118 = INT64_MIN;
	volatile uint32_t x119 = UINT32_MAX;
	volatile int32_t t28 = 5;

	t28 = ((x117/(x118|x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = INT32_MAX;
	int8_t x123 = 0;
	static volatile int32_t x124 = INT32_MIN;
	int32_t t29 = -10708099;

	t29 = ((x121/(x122|x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 703240697359LLU;
	volatile int32_t t30 = 58;

	t30 = ((x125/(x126|x127))<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -271194522086532LL;
	uint64_t x130 = UINT64_MAX;
	uint8_t x132 = 0U;
	int32_t t31 = 51;

	t31 = ((x129/(x130|x131))<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t x135 = INT32_MIN;
	volatile uint16_t x136 = 17U;

	t32 = ((x133/(x134|x135))<x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MAX;
	uint8_t x138 = 0U;
	uint64_t x139 = 420630914668480LLU;
	int64_t x140 = -256452587972224LL;
	int32_t t33 = 14171725;

	t33 = ((x137/(x138|x139))<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x142 = 238906394LLU;
	static int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MAX;
	volatile int32_t t34 = -62078946;

	t34 = ((x141/(x142|x143))<x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 41210047U;
	volatile int32_t x147 = INT32_MIN;
	static int16_t x148 = INT16_MAX;
	int32_t t35 = 2;

	t35 = ((x145/(x146|x147))<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MAX;
	volatile int16_t x152 = -33;
	volatile int32_t t36 = 3345249;

	t36 = ((x149/(x150|x151))<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x155 = -26763;

	t37 = ((x153/(x154|x155))<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	static volatile uint32_t x158 = 82136822U;
	static int16_t x159 = 473;
	int64_t x160 = INT64_MAX;
	static int32_t t38 = 15;

	t38 = ((x157/(x158|x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	static volatile int16_t x162 = INT16_MAX;
	int64_t x163 = 1LL;
	uint64_t x164 = UINT64_MAX;
	int32_t t39 = 1440901;

	t39 = ((x161/(x162|x163))<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = -1;
	int16_t x166 = INT16_MIN;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t40 = -1495727;

	t40 = ((x165/(x166|x167))<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x169 = 9607U;
	uint64_t x170 = 465184927655307826LLU;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t41 = 66045;

	t41 = ((x169/(x170|x171))<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = UINT8_MAX;
	uint32_t x174 = 1563796U;
	int8_t x175 = INT8_MAX;
	static int16_t x176 = 15900;
	int32_t t42 = 30153;

	t42 = ((x173/(x174|x175))<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = INT64_MIN;
	uint8_t x178 = 9U;
	volatile int64_t x179 = INT64_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t43 = 156776817;

	t43 = ((x177/(x178|x179))<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x182 = 47U;
	int32_t t44 = -58383475;

	t44 = ((x181/(x182|x183))<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x185 = INT16_MIN;
	int32_t x186 = 3612648;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = 148;

	t45 = ((x185/(x186|x187))<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MAX;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	int32_t t46 = -3;

	t46 = ((x189/(x190|x191))<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	int8_t x194 = -10;
	volatile uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MIN;
	volatile int32_t t47 = 63349093;

	t47 = ((x193/(x194|x195))<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	static volatile int64_t x198 = INT64_MIN;
	uint8_t x199 = 111U;
	static int8_t x200 = INT8_MAX;
	volatile int32_t t48 = 7311;

	t48 = ((x197/(x198|x199))<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = UINT32_MAX;
	uint64_t x202 = 240552582811435399LLU;
	int64_t x203 = INT64_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t49 = 804534;

	t49 = ((x201/(x202|x203))<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = UINT32_MAX;
	static uint64_t x206 = UINT64_MAX;
	static int16_t x207 = 57;
	static int32_t t50 = 26093;

	t50 = ((x205/(x206|x207))<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x210 = UINT16_MAX;
	volatile int32_t x211 = INT32_MAX;
	volatile int32_t x212 = -221239;
	static volatile int32_t t51 = -1;

	t51 = ((x209/(x210|x211))<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MAX;
	volatile uint64_t x214 = 0LLU;
	int16_t x215 = -1;
	static volatile uint64_t x216 = UINT64_MAX;
	volatile int32_t t52 = -323517912;

	t52 = ((x213/(x214|x215))<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 15U;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = -989746;
	static int16_t x220 = INT16_MIN;
	int32_t t53 = -11453619;

	t53 = ((x217/(x218|x219))<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 518505740085LLU;
	int32_t x224 = 28017291;
	int32_t t54 = -15658475;

	t54 = ((x221/(x222|x223))<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x226 = 1352296966104907735LLU;
	int8_t x227 = -2;
	volatile int16_t x228 = INT16_MIN;
	int32_t t55 = 20538;

	t55 = ((x225/(x226|x227))<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = INT8_MIN;
	static uint16_t x231 = 2809U;
	uint32_t x232 = 2191U;
	int32_t t56 = -23381758;

	t56 = ((x229/(x230|x231))<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	volatile int16_t x234 = INT16_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t57 = 2;

	t57 = ((x233/(x234|x235))<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -14;
	static uint64_t x238 = UINT64_MAX;
	uint16_t x239 = 2532U;
	int64_t x240 = -1LL;
	volatile int32_t t58 = -18664;

	t58 = ((x237/(x238|x239))<x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int8_t x244 = -1;
	int32_t t59 = -3;

	t59 = ((x241/(x242|x243))<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x246 = INT32_MIN;
	int64_t x247 = 1004958056342501589LL;
	uint16_t x248 = 7U;

	t60 = ((x245/(x246|x247))<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	uint16_t x251 = 3U;
	int16_t x252 = -1;
	int32_t t61 = -25523394;

	t61 = ((x249/(x250|x251))<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x254 = -16957619;
	int8_t x256 = INT8_MIN;
	int32_t t62 = -20;

	t62 = ((x253/(x254|x255))<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = INT8_MAX;
	volatile int16_t x258 = -1;
	volatile int16_t x260 = -1;
	volatile int32_t t63 = -1737;

	t63 = ((x257/(x258|x259))<x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 4U;
	static volatile int32_t x262 = INT32_MAX;
	volatile int8_t x263 = INT8_MIN;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t64 = -9643196;

	t64 = ((x261/(x262|x263))<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	static uint64_t x266 = 11985487196186221LLU;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = 26934U;
	volatile int32_t t65 = -1237;

	t65 = ((x265/(x266|x267))<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x269 = INT32_MAX;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t66 = -1521;

	t66 = ((x269/(x270|x271))<x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 9741U;
	uint16_t x274 = 557U;
	uint64_t x276 = 6526980690LLU;
	int32_t t67 = -111895502;

	t67 = ((x273/(x274|x275))<x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = 1;
	int16_t x278 = INT16_MAX;
	volatile int32_t x279 = -7;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t68 = 32498956;

	t68 = ((x277/(x278|x279))<x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = 7551;
	int64_t x282 = INT64_MIN;
	static int32_t x283 = INT32_MAX;
	uint32_t x284 = 1053U;
	volatile int32_t t69 = 72;

	t69 = ((x281/(x282|x283))<x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = 2380U;
	volatile int8_t x286 = INT8_MAX;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 4U;
	int32_t t70 = -1;

	t70 = ((x285/(x286|x287))<x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x289 = INT64_MAX;
	int16_t x291 = 58;
	int64_t x292 = -216LL;
	volatile int32_t t71 = -337735218;

	t71 = ((x289/(x290|x291))<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = 1756;
	static uint8_t x294 = 3U;
	int8_t x295 = -1;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t72 = -1;

	t72 = ((x293/(x294|x295))<x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x298 = 1U;
	int8_t x299 = INT8_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t73 = -23;

	t73 = ((x297/(x298|x299))<x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	uint16_t x302 = 5290U;
	int32_t x303 = INT32_MAX;
	int32_t t74 = 408318;

	t74 = ((x301/(x302|x303))<x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	volatile int8_t x306 = INT8_MIN;
	volatile int8_t x307 = -18;
	uint64_t x308 = UINT64_MAX;
	static int32_t t75 = -4654216;

	t75 = ((x305/(x306|x307))<x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x309 = UINT64_MAX;
	static int8_t x310 = INT8_MAX;
	int64_t x311 = -133025651LL;
	uint32_t x312 = 1622970240U;

	t76 = ((x309/(x310|x311))<x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x313 = 6356055847004979491LLU;
	uint8_t x314 = 127U;
	static uint16_t x315 = 2507U;
	int8_t x316 = -8;
	static int32_t t77 = -1634;

	t77 = ((x313/(x314|x315))<x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -1;
	static uint8_t x318 = UINT8_MAX;
	static int32_t x319 = INT32_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t78 = -790;

	t78 = ((x317/(x318|x319))<x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t79 = 6;

	t79 = ((x321/(x322|x323))<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -1LL;
	uint64_t x326 = 70LLU;
	int32_t x327 = INT32_MIN;
	volatile int32_t t80 = 49574;

	t80 = ((x325/(x326|x327))<x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x330 = INT16_MAX;
	int16_t x331 = -69;
	uint8_t x332 = 31U;
	int32_t t81 = -21432;

	t81 = ((x329/(x330|x331))<x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x334 = 12584;
	int32_t x336 = -46348;
	int32_t t82 = 5;

	t82 = ((x333/(x334|x335))<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x337 = -1;
	static int16_t x338 = -10;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	volatile int32_t t83 = 329954;

	t83 = ((x337/(x338|x339))<x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = -1LL;
	uint32_t x342 = 159U;
	int32_t x343 = INT32_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x341/(x342|x343))<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x346 = INT8_MIN;
	int32_t t85 = -726;

	t85 = ((x345/(x346|x347))<x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = 19859476840LLU;
	static volatile int64_t x350 = -704468476921194963LL;
	int64_t x351 = -9532695801094LL;
	int32_t t86 = 532;

	t86 = ((x349/(x350|x351))<x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x353 = 23U;
	uint16_t x354 = 1U;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t87 = -5;

	t87 = ((x353/(x354|x355))<x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = 0;
	static volatile int64_t x359 = INT64_MAX;
	uint16_t x360 = 20U;
	int32_t t88 = -1;

	t88 = ((x357/(x358|x359))<x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x362 = -1;
	uint64_t x363 = 8732112348386273LLU;
	volatile int16_t x364 = -10;
	volatile int32_t t89 = -11531;

	t89 = ((x361/(x362|x363))<x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x366 = 273505992719520LLU;
	int8_t x367 = INT8_MIN;
	volatile int32_t t90 = -105;

	t90 = ((x365/(x366|x367))<x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x370 = 2;
	int16_t x372 = INT16_MAX;
	volatile int32_t t91 = -278871;

	t91 = ((x369/(x370|x371))<x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = 5;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MAX;
	int64_t x376 = INT64_MAX;
	static int32_t t92 = 9;

	t92 = ((x373/(x374|x375))<x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x377 = INT16_MIN;
	static int8_t x379 = INT8_MIN;
	uint64_t x380 = 994236021364LLU;
	int32_t t93 = 10404553;

	t93 = ((x377/(x378|x379))<x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = 19260U;
	uint16_t x382 = UINT16_MAX;
	uint8_t x383 = 2U;
	volatile uint64_t x384 = 124833701260910LLU;
	static int32_t t94 = -51465502;

	t94 = ((x381/(x382|x383))<x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 97U;
	static int64_t x388 = INT64_MAX;

	t95 = ((x385/(x386|x387))<x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	uint16_t x390 = 7095U;
	volatile int64_t x391 = INT64_MIN;
	static volatile int16_t x392 = -2;
	static int32_t t96 = -21872900;

	t96 = ((x389/(x390|x391))<x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MAX;

	t97 = ((x393/(x394|x395))<x396);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x397 = 64U;
	volatile uint8_t x399 = 21U;

	t98 = ((x397/(x398|x399))<x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = -1;
	volatile uint32_t x402 = UINT32_MAX;
	int16_t x403 = 954;
	static volatile int8_t x404 = INT8_MIN;
	int32_t t99 = 109521;

	t99 = ((x401/(x402|x403))<x404);

	if (t99 != 1) { NG(); } else { ; }
	
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
