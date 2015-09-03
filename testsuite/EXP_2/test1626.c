#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -502;
volatile uint32_t t1 = 426U;
static int32_t x10 = -120;
int8_t x16 = INT8_MAX;
static uint64_t x20 = 481LLU;
volatile int64_t x21 = INT64_MIN;
uint16_t x34 = 1U;
uint64_t x36 = 1851883245524LLU;
volatile uint64_t t7 = 214607971240921317LLU;
int32_t x38 = INT32_MAX;
int64_t x51 = INT64_MAX;
uint64_t x52 = UINT64_MAX;
static uint8_t x56 = 0U;
static int32_t x57 = 131076685;
volatile int16_t x58 = INT16_MAX;
static volatile uint16_t x62 = 317U;
volatile uint64_t x65 = UINT64_MAX;
int16_t x67 = 6;
int64_t x69 = INT64_MAX;
int32_t x71 = INT32_MAX;
uint16_t x74 = 21847U;
int16_t x77 = INT16_MIN;
int16_t x80 = INT16_MIN;
volatile int32_t t18 = 7100;
uint8_t x81 = 46U;
int32_t t20 = -7095;
int16_t x91 = INT16_MAX;
int32_t x115 = INT32_MIN;
volatile uint64_t x125 = 8476898842237004LLU;
static volatile uint32_t x140 = 291U;
int8_t x143 = -1;
int8_t x148 = 15;
int32_t t34 = -406;
static int8_t x149 = -1;
static int16_t x155 = INT16_MIN;
volatile int32_t t38 = 1864915;
uint32_t x169 = UINT32_MAX;
volatile int32_t t39 = 141324127;
int16_t x178 = -1;
volatile int32_t t41 = -1;
int64_t x181 = -45614LL;
volatile int64_t t44 = INT64_MIN;
static int16_t x197 = INT16_MIN;
uint32_t x199 = UINT32_MAX;
static uint64_t x200 = 31929972193952368LLU;
volatile int64_t t47 = INT64_MAX;
volatile uint16_t x211 = UINT16_MAX;
int16_t x218 = INT16_MIN;
static volatile uint32_t x219 = 205456497U;
int32_t t49 = -121574631;
uint32_t x223 = 1584U;
uint32_t x224 = 185U;
uint16_t x226 = UINT16_MAX;
volatile uint64_t x228 = 16047616874999LLU;
volatile int16_t x240 = INT16_MAX;
volatile int16_t x243 = 232;
uint8_t x244 = 4U;
uint64_t x247 = UINT64_MAX;
int32_t x250 = INT32_MIN;
static int16_t x253 = INT16_MIN;
int64_t x257 = -1LL;
int64_t x264 = INT64_MIN;
int16_t x266 = -1;
uint8_t x268 = 5U;
volatile int32_t t66 = -3;
volatile int32_t x290 = 2294644;
int8_t x301 = -1;
uint64_t x302 = 1493005405LLU;
int8_t x319 = 4;
volatile int64_t x326 = -1LL;
volatile int64_t x327 = -992LL;
volatile int64_t t76 = INT64_MAX;
int16_t x331 = INT16_MIN;
int64_t x334 = INT64_MIN;
volatile int32_t x335 = -215;
static uint32_t x336 = 19129227U;
uint16_t x338 = 2298U;
volatile int32_t t79 = -930881;
uint16_t x344 = UINT16_MAX;
static uint8_t x345 = 0U;
static int32_t t81 = -48137;
static uint8_t x351 = 126U;
int64_t x355 = -1LL;
static int8_t x357 = -1;
uint8_t x359 = 54U;
int8_t x363 = INT8_MIN;
int16_t x365 = INT16_MIN;
int64_t x366 = -58507654LL;
uint8_t x368 = 1U;
int64_t x370 = 2164574707833854LL;
uint32_t t89 = UINT32_MAX;
int32_t x382 = -1;
int32_t t91 = 4426;
int32_t x389 = INT32_MIN;
int16_t x396 = -193;
uint8_t x397 = 1U;
uint16_t x403 = UINT16_MAX;
uint32_t x407 = 1U;
int16_t x419 = -1;


void f0(void) {
	static uint32_t x1 = 1U;
	volatile uint32_t x2 = 5133283U;
	static int32_t x3 = -1;
	int16_t x4 = INT16_MAX;

	t0 = ((x1<(x2<=x3))+x4);

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 9U;
	int8_t x6 = 0;
	int8_t x7 = 12;
	uint32_t x8 = 79474U;

	t1 = ((x5<(x6<=x7))+x8);

	if (t1 != 79474U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 146196LL;
	int64_t x11 = 13185463069LL;
	int16_t x12 = -1;
	int32_t t2 = -552836;

	t2 = ((x9<(x10<=x11))+x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint16_t x14 = 0U;
	static int8_t x15 = INT8_MIN;
	volatile int32_t t3 = -764091;

	t3 = ((x13<(x14<=x15))+x16);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = INT32_MAX;
	volatile uint64_t t4 = 3151424367771LLU;

	t4 = ((x17<(x18<=x19))+x20);

	if (t4 != 482LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 74U;
	uint16_t x24 = 799U;
	volatile int32_t t5 = 683609617;

	t5 = ((x21<(x22<=x23))+x24);

	if (t5 != 800) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 105U;
	uint64_t x26 = 3LLU;
	static uint16_t x27 = 614U;
	static int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = 0;

	t6 = ((x25<(x26<=x27))+x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MIN;
	int16_t x35 = -1;

	t7 = ((x33<(x34<=x35))+x36);

	if (t7 != 1851883245525LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -37;
	uint16_t x39 = 2465U;
	uint32_t x40 = 620964635U;
	static uint32_t t8 = 352191U;

	t8 = ((x37<(x38<=x39))+x40);

	if (t8 != 620964636U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -207;
	int16_t x42 = 4762;
	uint16_t x43 = 91U;
	volatile uint64_t x44 = 103969622LLU;
	volatile uint64_t t9 = 434243LLU;

	t9 = ((x41<(x42<=x43))+x44);

	if (t9 != 103969623LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	static int8_t x48 = INT8_MAX;
	static volatile int32_t t10 = 1258852;

	t10 = ((x45<(x46<=x47))+x48);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = 7U;
	static volatile uint8_t x50 = 0U;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = ((x49<(x50<=x51))+x52);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	volatile int8_t x55 = INT8_MAX;
	int32_t t12 = 1;

	t12 = ((x53<(x54<=x55))+x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = 198938806;

	t13 = ((x57<(x58<=x59))+x60);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	uint16_t x63 = 30553U;
	uint64_t x64 = UINT64_MAX;
	static uint64_t t14 = 471LLU;

	t14 = ((x61<(x62<=x63))+x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x66 = INT64_MIN;
	static volatile uint32_t x68 = 1846921U;
	uint32_t t15 = 718162U;

	t15 = ((x65<(x66<=x67))+x68);

	if (t15 != 1846921U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = INT16_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = 0;

	t16 = ((x69<(x70<=x71))+x72);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 1134579361130446384LLU;
	uint8_t x75 = UINT8_MAX;
	volatile int64_t x76 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = ((x73<(x74<=x75))+x76);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x78 = -55;
	uint32_t x79 = UINT32_MAX;

	t18 = ((x77<(x78<=x79))+x80);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x82 = INT16_MAX;
	int8_t x83 = -6;
	int8_t x84 = INT8_MIN;
	static int32_t t19 = -899238;

	t19 = ((x81<(x82<=x83))+x84);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = INT32_MIN;
	uint16_t x86 = 5U;
	int64_t x87 = 488680165LL;
	int16_t x88 = -27;

	t20 = ((x85<(x86<=x87))+x88);

	if (t20 != -26) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MAX;
	int16_t x90 = -1;
	static int16_t x92 = -1;
	int32_t t21 = 264647898;

	t21 = ((x89<(x90<=x91))+x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 3U;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile uint16_t x96 = UINT16_MAX;
	int32_t t22 = 9;

	t22 = ((x93<(x94<=x95))+x96);

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	volatile int32_t x98 = -38426539;
	static int64_t x99 = -1LL;
	int8_t x100 = INT8_MAX;
	int32_t t23 = -94;

	t23 = ((x97<(x98<=x99))+x100);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 346U;
	volatile uint8_t x103 = 0U;
	int8_t x104 = -1;
	volatile int32_t t24 = 49326;

	t24 = ((x101<(x102<=x103))+x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = 4130572962184LLU;
	static volatile int16_t x106 = INT16_MAX;
	int32_t x107 = -984169649;
	uint32_t x108 = 1U;
	static volatile uint32_t t25 = 309U;

	t25 = ((x105<(x106<=x107))+x108);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 1;
	static uint8_t x110 = 23U;
	static int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	volatile int32_t t26 = -260507;

	t26 = ((x109<(x110<=x111))+x112);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	uint32_t x116 = 516365832U;
	volatile uint32_t t27 = 510U;

	t27 = ((x113<(x114<=x115))+x116);

	if (t27 != 516365833U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = ((x117<(x118<=x119))+x120);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x121 = 11648U;
	int8_t x122 = -1;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = 181499010U;
	static uint32_t t29 = 1216U;

	t29 = ((x121<(x122<=x123))+x124);

	if (t29 != 181499010U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = INT64_MIN;
	static uint32_t x127 = 475U;
	int32_t x128 = -1;
	int32_t t30 = -249;

	t30 = ((x125<(x126<=x127))+x128);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x129 = 620U;
	volatile uint32_t x130 = UINT32_MAX;
	volatile int64_t x131 = 25048710475LL;
	uint64_t x132 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

	t31 = ((x129<(x130<=x131))+x132);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	volatile int64_t x138 = 3111455905958LL;
	int64_t x139 = INT64_MIN;
	volatile uint32_t t32 = 478288U;

	t32 = ((x137<(x138<=x139))+x140);

	if (t32 != 292U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	volatile int16_t x142 = INT16_MIN;
	uint16_t x144 = 0U;
	volatile int32_t t33 = -6153769;

	t33 = ((x141<(x142<=x143))+x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 1U;
	int32_t x147 = 1;

	t34 = ((x145<(x146<=x147))+x148);

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	volatile int64_t t35 = 6781LL;

	t35 = ((x149<(x150<=x151))+x152);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = 12874745U;
	static volatile int8_t x154 = INT8_MIN;
	volatile uint16_t x156 = 1302U;
	volatile int32_t t36 = 1;

	t36 = ((x153<(x154<=x155))+x156);

	if (t36 != 1302) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = UINT16_MAX;
	uint16_t x162 = 3U;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	static int32_t t37 = INT32_MIN;

	t37 = ((x161<(x162<=x163))+x164);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = 1;
	int32_t x166 = 2805373;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MAX;

	t38 = ((x165<(x166<=x167))+x168);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x170 = -48272LL;
	uint8_t x171 = 2U;
	int8_t x172 = INT8_MIN;

	t39 = ((x169<(x170<=x171))+x172);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = 6232656323LL;
	int8_t x174 = -1;
	int8_t x175 = -1;
	volatile int32_t x176 = -1;
	volatile int32_t t40 = -38703772;

	t40 = ((x173<(x174<=x175))+x176);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -8;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;

	t41 = ((x177<(x178<=x179))+x180);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x182 = 0;
	static uint32_t x183 = UINT32_MAX;
	int32_t x184 = 12789;
	int32_t t42 = 21465;

	t42 = ((x181<(x182<=x183))+x184);

	if (t42 != 12790) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x185 = 2837U;
	static int64_t x186 = INT64_MIN;
	int64_t x187 = -1LL;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t43 = -31577;

	t43 = ((x185<(x186<=x187))+x188);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = INT64_MAX;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = INT64_MIN;

	t44 = ((x193<(x194<=x195))+x196);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x198 = -17;
	volatile uint64_t t45 = 584040014LLU;

	t45 = ((x197<(x198<=x199))+x200);

	if (t45 != 31929972193952369LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x201 = -1;
	int32_t x202 = -1;
	uint32_t x203 = 12358U;
	int16_t x204 = INT16_MAX;
	int32_t t46 = -61;

	t46 = ((x201<(x202<=x203))+x204);

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x205 = 537LLU;
	static int8_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;

	t47 = ((x205<(x206<=x207))+x208);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x209 = 3U;
	int16_t x210 = 7300;
	int64_t x212 = INT64_MIN;
	static int64_t t48 = INT64_MIN;

	t48 = ((x209<(x210<=x211))+x212);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -1;
	int16_t x220 = INT16_MAX;

	t49 = ((x217<(x218<=x219))+x220);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x221 = -17;
	int16_t x222 = 1145;
	uint32_t t50 = 107992130U;

	t50 = ((x221<(x222<=x223))+x224);

	if (t50 != 186U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = INT16_MIN;
	uint32_t x227 = 931561584U;
	uint64_t t51 = 624221844441550LLU;

	t51 = ((x225<(x226<=x227))+x228);

	if (t51 != 16047616875000LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = 1U;
	uint16_t x230 = 931U;
	volatile int32_t x231 = 202593;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t52 = -1;

	t52 = ((x229<(x230<=x231))+x232);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int64_t x234 = INT64_MIN;
	static volatile uint8_t x235 = UINT8_MAX;
	static int8_t x236 = -1;
	static volatile int32_t t53 = 16751643;

	t53 = ((x233<(x234<=x235))+x236);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x237 = UINT16_MAX;
	static int8_t x238 = INT8_MAX;
	static uint32_t x239 = 31U;
	volatile int32_t t54 = 6887039;

	t54 = ((x237<(x238<=x239))+x240);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	int32_t t55 = 962183993;

	t55 = ((x241<(x242<=x243))+x244);

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x245 = 63U;
	volatile uint8_t x246 = 0U;
	int32_t x248 = 16;
	int32_t t56 = -5353275;

	t56 = ((x245<(x246<=x247))+x248);

	if (t56 != 16) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -1LL;
	int8_t x251 = -15;
	uint32_t x252 = UINT32_MAX;
	static uint32_t t57 = 244U;

	t57 = ((x249<(x250<=x251))+x252);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x254 = INT8_MIN;
	volatile uint64_t x255 = UINT64_MAX;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t58 = -51;

	t58 = ((x253<(x254<=x255))+x256);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x258 = 2U;
	volatile uint8_t x259 = 52U;
	int8_t x260 = INT8_MIN;
	int32_t t59 = -379;

	t59 = ((x257<(x258<=x259))+x260);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = 275LL;
	static int16_t x262 = INT16_MIN;
	uint32_t x263 = 8990264U;
	int64_t t60 = INT64_MIN;

	t60 = ((x261<(x262<=x263))+x264);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = UINT8_MAX;
	static uint8_t x267 = 0U;
	int32_t t61 = -319853755;

	t61 = ((x265<(x266<=x267))+x268);

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x269 = -1LL;
	static volatile int64_t x270 = -2512223811394LL;
	volatile int16_t x271 = 6;
	static int16_t x272 = -1;
	int32_t t62 = -13;

	t62 = ((x269<(x270<=x271))+x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = INT64_MIN;
	uint16_t x274 = 3610U;
	uint16_t x275 = 505U;
	int16_t x276 = INT16_MIN;
	int32_t t63 = 1304;

	t63 = ((x273<(x274<=x275))+x276);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -48;
	static int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = -2390433213514LL;
	int64_t t64 = 21314355233087LL;

	t64 = ((x277<(x278<=x279))+x280);

	if (t64 != -2390433213513LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = -188934914701880351LL;
	uint64_t x282 = 138143374246404468LLU;
	int16_t x283 = INT16_MAX;
	volatile uint64_t x284 = UINT64_MAX;
	static uint64_t t65 = 4727LLU;

	t65 = ((x281<(x282<=x283))+x284);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = 1U;
	uint64_t x286 = 2507LLU;
	int64_t x287 = 32166788LL;
	int16_t x288 = INT16_MAX;

	t66 = ((x285<(x286<=x287))+x288);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x289 = -1LL;
	int32_t x291 = 39949;
	int64_t x292 = 422637LL;
	volatile int64_t t67 = -2391LL;

	t67 = ((x289<(x290<=x291))+x292);

	if (t67 != 422638LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = -469;
	uint64_t x294 = 850074LLU;
	static int32_t x295 = INT32_MIN;
	uint8_t x296 = 1U;
	volatile int32_t t68 = -12702130;

	t68 = ((x293<(x294<=x295))+x296);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x297 = INT32_MIN;
	uint32_t x298 = 7U;
	volatile int16_t x299 = 0;
	static int8_t x300 = -3;
	int32_t t69 = 3;

	t69 = ((x297<(x298<=x299))+x300);

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x303 = -1;
	int32_t x304 = -80406;
	int32_t t70 = 955;

	t70 = ((x301<(x302<=x303))+x304);

	if (t70 != -80405) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -1LL;
	static int64_t x306 = -1LL;
	volatile uint8_t x307 = UINT8_MAX;
	volatile int64_t x308 = 721518LL;
	volatile int64_t t71 = -27636276LL;

	t71 = ((x305<(x306<=x307))+x308);

	if (t71 != 721519LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = 552;
	int16_t x311 = 43;
	uint64_t x312 = 14364LLU;
	uint64_t t72 = 88939839LLU;

	t72 = ((x309<(x310<=x311))+x312);

	if (t72 != 14365LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x313 = -12266;
	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	static uint64_t x316 = 89132671935444304LLU;
	volatile uint64_t t73 = 7394791089707595LLU;

	t73 = ((x313<(x314<=x315))+x316);

	if (t73 != 89132671935444305LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = 159U;
	int16_t x318 = INT16_MAX;
	static uint64_t x320 = 1136829016757852867LLU;
	uint64_t t74 = 32568LLU;

	t74 = ((x317<(x318<=x319))+x320);

	if (t74 != 1136829016757852867LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = 71107360;
	static int16_t x322 = INT16_MAX;
	int64_t x323 = -1LL;
	volatile int32_t x324 = INT32_MIN;
	int32_t t75 = INT32_MIN;

	t75 = ((x321<(x322<=x323))+x324);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x325 = 1U;
	static int64_t x328 = INT64_MAX;

	t76 = ((x325<(x326<=x327))+x328);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = UINT16_MAX;
	int32_t x330 = -1;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t77 = 103;

	t77 = ((x329<(x330<=x331))+x332);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x333 = INT32_MIN;
	uint32_t t78 = 856U;

	t78 = ((x333<(x334<=x335))+x336);

	if (t78 != 19129228U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x337 = UINT16_MAX;
	static int8_t x339 = -1;
	static int16_t x340 = -1;

	t79 = ((x337<(x338<=x339))+x340);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = 149;
	int64_t x343 = INT64_MAX;
	int32_t t80 = -32727;

	t80 = ((x341<(x342<=x343))+x344);

	if (t80 != 65536) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x346 = -1;
	volatile uint8_t x347 = 1U;
	volatile int32_t x348 = 117;

	t81 = ((x345<(x346<=x347))+x348);

	if (t81 != 118) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = -25704569673LL;
	int32_t x352 = -153737;
	volatile int32_t t82 = -367;

	t82 = ((x349<(x350<=x351))+x352);

	if (t82 != -153736) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -28;
	volatile int64_t x354 = INT64_MIN;
	uint64_t x356 = UINT64_MAX;
	uint64_t t83 = 2LLU;

	t83 = ((x353<(x354<=x355))+x356);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x358 = 1U;
	uint64_t x360 = 742045691LLU;
	static uint64_t t84 = 15760507342LLU;

	t84 = ((x357<(x358<=x359))+x360);

	if (t84 != 742045692LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t85 = -20293;

	t85 = ((x361<(x362<=x363))+x364);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x367 = -1;
	volatile int32_t t86 = 814622029;

	t86 = ((x365<(x366<=x367))+x368);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 4246U;
	static volatile uint32_t t87 = 87U;

	t87 = ((x369<(x370<=x371))+x372);

	if (t87 != 4247U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x373 = -6;
	int64_t x374 = -3823342211535282400LL;
	uint64_t x375 = 224728972788672052LLU;
	uint32_t x376 = 4407U;
	volatile uint32_t t88 = 94677675U;

	t88 = ((x373<(x374<=x375))+x376);

	if (t88 != 4408U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MAX;
	static int16_t x378 = -242;
	volatile int8_t x379 = 5;
	static uint32_t x380 = UINT32_MAX;

	t89 = ((x377<(x378<=x379))+x380);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 969112U;
	int16_t x383 = INT16_MAX;
	uint64_t x384 = 0LLU;
	volatile uint64_t t90 = 1343052449635899LLU;

	t90 = ((x381<(x382<=x383))+x384);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -1101;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	int8_t x388 = 0;

	t91 = ((x385<(x386<=x387))+x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x390 = UINT64_MAX;
	volatile int16_t x391 = INT16_MIN;
	volatile int32_t x392 = -120307;
	static int32_t t92 = 156;

	t92 = ((x389<(x390<=x391))+x392);

	if (t92 != -120306) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x393 = 52396428526513006LLU;
	int8_t x394 = -1;
	static volatile int8_t x395 = -1;
	volatile int32_t t93 = 4442;

	t93 = ((x393<(x394<=x395))+x396);

	if (t93 != -193) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x398 = 21956592873866LLU;
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = -43LL;
	volatile int64_t t94 = 186267LL;

	t94 = ((x397<(x398<=x399))+x400);

	if (t94 != -43LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -7294544;
	int64_t x402 = -37392306737973LL;
	int16_t x404 = INT16_MIN;
	int32_t t95 = 1170328;

	t95 = ((x401<(x402<=x403))+x404);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 19U;
	int32_t x406 = -2973;
	int8_t x408 = 7;
	int32_t t96 = -50;

	t96 = ((x405<(x406<=x407))+x408);

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = -1;
	uint16_t x410 = 551U;
	uint8_t x411 = 85U;
	static int64_t x412 = 6367LL;
	int64_t t97 = 3481238600792731LL;

	t97 = ((x409<(x410<=x411))+x412);

	if (t97 != 6368LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x413 = -6916;
	int16_t x414 = INT16_MAX;
	int32_t x415 = 679801798;
	uint16_t x416 = 0U;
	volatile int32_t t98 = -65380555;

	t98 = ((x413<(x414<=x415))+x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x417 = UINT32_MAX;
	volatile int16_t x418 = INT16_MIN;
	static volatile uint64_t x420 = 1187560225289LLU;
	uint64_t t99 = 2131LLU;

	t99 = ((x417<(x418<=x419))+x420);

	if (t99 != 1187560225289LLU) { NG(); } else { ; }
	
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

