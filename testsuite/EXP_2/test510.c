#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
uint8_t x4 = 9U;
uint8_t x7 = 29U;
int64_t t2 = 374340680434606LL;
uint64_t x14 = 2487799870309555150LLU;
uint16_t x21 = UINT16_MAX;
uint64_t x22 = 1924179565554329LLU;
static volatile uint64_t x24 = 612LLU;
int8_t x35 = INT8_MIN;
volatile int64_t t8 = -18333LL;
static uint16_t x37 = UINT16_MAX;
static uint64_t t11 = 3051574824LLU;
int8_t x49 = -1;
uint32_t t13 = 15U;
int8_t x58 = INT8_MIN;
static volatile int16_t x60 = -1;
volatile uint64_t t16 = 5856293519836LLU;
volatile int64_t x80 = INT64_MIN;
int8_t x85 = INT8_MIN;
static int64_t x88 = -1LL;
int8_t x94 = -1;
int64_t x95 = INT64_MIN;
uint16_t x104 = UINT16_MAX;
static volatile int64_t t22 = -7693050390LL;
uint16_t x116 = 1U;
int8_t x120 = 1;
static uint8_t x122 = 0U;
int8_t x125 = -1;
int64_t x130 = INT64_MIN;
volatile uint64_t x132 = 1101067564899052LLU;
int32_t x135 = INT32_MAX;
int16_t x137 = INT16_MIN;
static volatile uint64_t x140 = 923322LLU;
uint8_t x167 = 2U;
int8_t x169 = 1;
int32_t x170 = 60;
uint8_t x172 = 29U;
static uint32_t t34 = 4U;
volatile uint64_t x194 = UINT64_MAX;
static int16_t x212 = -1;
uint64_t x222 = 1394827250826LLU;
uint8_t x230 = UINT8_MAX;
static volatile int32_t x240 = INT32_MIN;
volatile uint32_t t46 = 208U;
int16_t x250 = 13;
int64_t x267 = -17071484460LL;
int32_t x270 = -1;
static int32_t t55 = -332429;
volatile int16_t x300 = -250;
uint32_t x302 = 1053972219U;
static volatile uint8_t x303 = 100U;
int32_t x304 = -1;
int64_t x307 = INT64_MAX;
int64_t t58 = 153004727489315508LL;
volatile uint32_t x315 = 3315574U;
static uint64_t x319 = UINT64_MAX;
int64_t t65 = 4206315663722427582LL;
uint32_t x349 = 1532U;
int16_t x350 = INT16_MAX;
uint32_t t67 = 5974994U;
static uint64_t x359 = UINT64_MAX;
int32_t x364 = -1;
volatile int16_t x372 = INT16_MIN;
static uint64_t t75 = 33220LLU;
static int32_t x398 = 115343;
uint16_t x399 = UINT16_MAX;
static volatile int16_t x412 = INT16_MAX;
static int8_t x413 = 8;
int64_t x415 = INT64_MAX;
static int32_t x416 = INT32_MAX;
int32_t x421 = INT32_MIN;
volatile int64_t x422 = INT64_MAX;
int16_t x428 = 1;
static volatile int64_t t80 = 120958857618LL;
int16_t x430 = INT16_MIN;
int32_t x433 = INT32_MIN;
volatile uint16_t x435 = 2512U;
volatile uint64_t x436 = 118416475LLU;
int32_t x458 = -1;
int8_t x465 = 2;
volatile uint64_t x476 = 16LLU;
int64_t x478 = -1LL;
int64_t x480 = 819258LL;
uint8_t x481 = UINT8_MAX;
uint32_t x483 = 59687U;
uint32_t x489 = UINT32_MAX;
int8_t x491 = INT8_MIN;
volatile int32_t x493 = INT32_MIN;
int16_t x498 = -9;
volatile int32_t x500 = -13113;
uint64_t x514 = UINT64_MAX;
int32_t x516 = INT32_MIN;
volatile int16_t x519 = INT16_MAX;
int64_t t99 = -8116529963LL;


void f0(void) {
	volatile int8_t x1 = 0;
	uint8_t x2 = 23U;
	volatile int32_t t0 = 108;

	t0 = ((x1+(x2/x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = 2;
	static uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 1514526U;

	t1 = ((x5+(x6/x7))*x8);

	if (t1 != 4294967169U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 25U;
	uint8_t x10 = 77U;
	int16_t x11 = 1;
	int64_t x12 = -62878450027LL;

	t2 = ((x9+(x10/x11))*x12);

	if (t2 != -6413601902754LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	uint64_t t3 = 99808511082693LLU;

	t3 = ((x13+(x14/x15))*x16);

	if (t3 != 18446706112900300800LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 40;
	int32_t x18 = 81;
	uint8_t x19 = 3U;
	static volatile int64_t x20 = -4416868410734936LL;
	int64_t t4 = -3174786706LL;

	t4 = ((x17+(x18/x19))*x20);

	if (t4 != -295930183519240712LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = INT8_MIN;
	volatile uint64_t t5 = 2192012567795758036LLU;

	t5 = ((x21+(x22/x23))*x24);

	if (t5 != 40107420LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = 2400LLU;
	int32_t x28 = INT32_MIN;
	uint64_t t6 = 49724609474564765LLU;

	t6 = ((x25+(x26/x27))*x28);

	if (t6 != 2705522467379609600LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int64_t x30 = 12366308LL;
	static volatile uint64_t x31 = UINT64_MAX;
	uint8_t x32 = 6U;
	volatile uint64_t t7 = 5028363033617213LLU;

	t7 = ((x29+(x30/x31))*x32);

	if (t7 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = -1LL;
	int64_t x34 = 105860LL;
	uint32_t x36 = 6U;

	t8 = ((x33+(x34/x35))*x36);

	if (t8 != -4968LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -54;
	uint8_t x39 = UINT8_MAX;
	volatile uint16_t x40 = 1U;
	int32_t t9 = -1008507;

	t9 = ((x37+(x38/x39))*x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 0;
	int8_t x42 = -8;
	int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = 0U;
	static volatile int32_t t10 = 13098503;

	t10 = ((x41+(x42/x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 3415U;
	uint64_t x47 = UINT64_MAX;
	volatile int16_t x48 = INT16_MAX;

	t11 = ((x45+(x46/x47))*x48);

	if (t11 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -48492492;
	int16_t x51 = 8059;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 209684;

	t12 = ((x49+(x50/x51))*x52);

	if (t12 != 770304) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1006;
	int16_t x54 = INT16_MIN;
	static uint32_t x55 = 1205U;
	int32_t x56 = INT32_MIN;

	t13 = ((x53+(x54/x55))*x56);

	if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	int64_t x59 = INT64_MAX;
	static int64_t t14 = 18902916603601898LL;

	t14 = ((x57+(x58/x59))*x60);

	if (t14 != -2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = 61;
	uint32_t x70 = 1673U;
	int16_t x71 = -1;
	static volatile uint8_t x72 = 2U;
	uint32_t t15 = 2U;

	t15 = ((x69+(x70/x71))*x72);

	if (t15 != 122U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = -9;
	uint64_t x74 = 1LLU;
	static volatile int16_t x75 = 1;
	volatile uint32_t x76 = 47082812U;

	t16 = ((x73+(x74/x75))*x76);

	if (t16 != 18446744073332889120LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	volatile uint64_t x78 = UINT64_MAX;
	int16_t x79 = -11;
	uint64_t t17 = 59LLU;

	t17 = ((x77+(x78/x79))*x80);

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 2U;
	static volatile int8_t x82 = INT8_MIN;
	int8_t x83 = 1;
	volatile uint16_t x84 = 12U;
	static volatile int32_t t18 = -40;

	t18 = ((x81+(x82/x83))*x84);

	if (t18 != -1512) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x86 = -1;
	int32_t x87 = INT32_MIN;
	int64_t t19 = 43904022LL;

	t19 = ((x85+(x86/x87))*x88);

	if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -6888LL;
	uint8_t x96 = 4U;
	volatile int64_t t20 = 2540LL;

	t20 = ((x93+(x94/x95))*x96);

	if (t20 != -27552LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	static volatile int64_t t21 = -90263495LL;

	t21 = ((x101+(x102/x103))*x104);

	if (t21 != 8322945LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -419324118782LL;
	static uint8_t x107 = 5U;
	int8_t x108 = INT8_MAX;

	t22 = ((x105+(x106/x107))*x108);

	if (t22 != -10650832633268LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = -4;
	uint64_t x115 = 929061328885104946LLU;
	volatile uint64_t t23 = 15LLU;

	t23 = ((x113+(x114/x115))*x116);

	if (t23 != 65554LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	volatile int64_t t24 = 2476974649933LL;

	t24 = ((x117+(x118/x119))*x120);

	if (t24 != -72624976668147969LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int32_t x124 = -1;
	static volatile int32_t t25 = 21;

	t25 = ((x121+(x122/x123))*x124);

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x126 = 223;
	int16_t x127 = -1;
	static uint16_t x128 = 0U;
	volatile int32_t t26 = 6;

	t26 = ((x125+(x126/x127))*x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -1;
	volatile int8_t x131 = INT8_MIN;
	static volatile uint64_t t27 = 161557697LLU;

	t27 = ((x129+(x130/x131))*x132);

	if (t27 != 17004491125386093844LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	uint32_t x136 = 3009711U;
	uint64_t t28 = 3357119141LLU;

	t28 = ((x133+(x134/x135))*x136);

	if (t28 != 9249225257497637564LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 367U;
	uint64_t t29 = 5872069969882LLU;

	t29 = ((x137+(x138/x139))*x140);

	if (t29 != 18446744043371960662LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -4;
	static int16_t x150 = 6;
	static int8_t x151 = INT8_MIN;
	int8_t x152 = -6;
	volatile int32_t t30 = 20409;

	t30 = ((x149+(x150/x151))*x152);

	if (t30 != 24) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x157 = -3;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = -1;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t31 = 17531034;

	t31 = ((x157+(x158/x159))*x160);

	if (t31 != -16712190) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = -1;
	int8_t x163 = -1;
	static volatile uint64_t x164 = 1504215729803LLU;
	volatile uint64_t t32 = 1542593031311LLU;

	t32 = ((x161+(x162/x163))*x164);

	if (t32 != 192539613414784LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	static uint64_t x168 = 102857834390LLU;
	volatile uint64_t t33 = 7477547428798080LLU;

	t33 = ((x165+(x166/x167))*x168);

	if (t33 != 475411463297564672LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x171 = 56U;

	t34 = ((x169+(x170/x171))*x172);

	if (t34 != 58U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x173 = INT16_MIN;
	int16_t x174 = -41;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;
	int64_t t35 = 178802514951LL;

	t35 = ((x173+(x174/x175))*x176);

	if (t35 != 1072398336LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x189 = 6765238LLU;
	volatile uint32_t x190 = 2U;
	volatile int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t36 = 417224226877LLU;

	t36 = ((x189+(x190/x191))*x192);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x193 = 29147990;
	int64_t x195 = -1LL;
	int64_t x196 = INT64_MIN;
	uint64_t t37 = 90LLU;

	t37 = ((x193+(x194/x195))*x196);

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x197 = INT64_MIN;
	uint8_t x198 = 26U;
	uint64_t x199 = 688495LLU;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t38 = 1598LLU;

	t38 = ((x197+(x198/x199))*x200);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = 1;
	int32_t x210 = -11417;
	int64_t x211 = -28894158272LL;
	volatile int64_t t39 = 5494028LL;

	t39 = ((x209+(x210/x211))*x212);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x213 = 11U;
	static int16_t x214 = 1155;
	uint32_t x215 = 71U;
	int8_t x216 = -1;
	static uint32_t t40 = 142U;

	t40 = ((x213+(x214/x215))*x216);

	if (t40 != 4294967269U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x221 = -1;
	int8_t x223 = INT8_MAX;
	uint8_t x224 = 78U;
	static uint64_t t41 = 951944446LLU;

	t41 = ((x221+(x222/x223))*x224);

	if (t41 != 856665555486LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x225 = 8601686064LLU;
	int64_t x226 = -14834LL;
	uint16_t x227 = 220U;
	uint32_t x228 = 25U;
	volatile uint64_t t42 = 323548LLU;

	t42 = ((x225+(x226/x227))*x228);

	if (t42 != 215042149925LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x229 = -1;
	int64_t x231 = -1LL;
	int32_t x232 = 0;
	int64_t t43 = -7LL;

	t43 = ((x229+(x230/x231))*x232);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x233 = INT32_MIN;
	static volatile int8_t x234 = -41;
	static uint32_t x235 = 764952356U;
	static uint64_t x236 = 7579LLU;
	volatile uint64_t t44 = 8LLU;

	t44 = ((x233+(x234/x235))*x236);

	if (t44 != 16275778606087LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x237 = INT8_MIN;
	static volatile int32_t x238 = INT32_MIN;
	static volatile int64_t x239 = -1LL;
	static volatile int64_t t45 = 2LL;

	t45 = ((x237+(x238/x239))*x240);

	if (t45 != -4611685743549480960LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x241 = 6659849U;
	int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	static volatile int8_t x244 = INT8_MIN;

	t46 = ((x241+(x242/x243))*x244);

	if (t46 != 3442506624U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = INT16_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile uint64_t x248 = 1392375021LLU;
	volatile uint64_t t47 = 21LLU;

	t47 = ((x245+(x246/x247))*x248);

	if (t47 != 355055630355LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x249 = INT8_MIN;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = 225208;
	volatile int32_t t48 = -75;

	t48 = ((x249+(x250/x251))*x252);

	if (t48 != -28826624) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x253 = 2U;
	static int8_t x254 = INT8_MIN;
	volatile uint32_t x255 = 1108647U;
	int8_t x256 = INT8_MIN;
	volatile uint32_t t49 = 7541U;

	t49 = ((x253+(x254/x255))*x256);

	if (t49 != 4294471168U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x261 = UINT64_MAX;
	uint32_t x262 = UINT32_MAX;
	volatile int64_t x263 = INT64_MIN;
	static int64_t x264 = INT64_MAX;
	volatile uint64_t t50 = 4303LLU;

	t50 = ((x261+(x262/x263))*x264);

	if (t50 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x265 = UINT8_MAX;
	static int64_t x266 = INT64_MIN;
	uint16_t x268 = 173U;
	static volatile int64_t t51 = -1222808LL;

	t51 = ((x265+(x266/x267))*x268);

	if (t51 != 93468386889LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x269 = 11U;
	int8_t x271 = -1;
	volatile int8_t x272 = INT8_MAX;
	volatile int32_t t52 = 1;

	t52 = ((x269+(x270/x271))*x272);

	if (t52 != 1524) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x274 = 5U;
	int64_t x275 = INT64_MAX;
	static volatile uint32_t x276 = 2047828U;
	int64_t t53 = -7664577273183LL;

	t53 = ((x273+(x274/x275))*x276);

	if (t53 != -4397677143916544LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = 277;
	static int32_t x290 = -5929286;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = -343150213471LL;
	int64_t t54 = -97313913288735954LL;

	t54 = ((x289+(x290/x291))*x292);

	if (t54 != -156819647556247LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 60;
	int32_t x296 = -465842;

	t55 = ((x293+(x294/x295))*x296);

	if (t55 != 254815574) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x297 = UINT8_MAX;
	int32_t x298 = -3;
	volatile uint64_t x299 = 681LLU;
	uint64_t t56 = 7LLU;

	t56 = ((x297+(x298/x299))*x300);

	if (t56 != 11674811594374116616LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x301 = UINT16_MAX;
	volatile uint32_t t57 = 14414647U;

	t57 = ((x301+(x302/x303))*x304);

	if (t57 != 4284362039U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x305 = INT8_MIN;
	static volatile int16_t x306 = INT16_MIN;
	int16_t x308 = INT16_MAX;

	t58 = ((x305+(x306/x307))*x308);

	if (t58 != -4194176LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x309 = 1661190U;
	volatile int64_t x310 = 367LL;
	int32_t x311 = INT32_MIN;
	static int16_t x312 = -2718;
	static volatile int64_t t59 = 1069LL;

	t59 = ((x309+(x310/x311))*x312);

	if (t59 != -4515114420LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x313 = INT16_MAX;
	static uint64_t x314 = UINT64_MAX;
	int8_t x316 = 1;
	uint64_t t60 = 1354772LLU;

	t60 = ((x313+(x314/x315))*x316);

	if (t60 != 5563665350962LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x317 = UINT16_MAX;
	static int32_t x318 = INT32_MAX;
	uint8_t x320 = UINT8_MAX;
	uint64_t t61 = 7855541326442697291LLU;

	t61 = ((x317+(x318/x319))*x320);

	if (t61 != 16711425LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x321 = INT8_MIN;
	int32_t x322 = -1;
	int32_t x323 = INT32_MIN;
	static uint64_t x324 = 3723569279LLU;
	uint64_t t62 = 3813LLU;

	t62 = ((x321+(x322/x323))*x324);

	if (t62 != 18446743597092683904LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x325 = UINT8_MAX;
	volatile uint8_t x326 = 28U;
	int16_t x327 = -715;
	uint32_t x328 = UINT32_MAX;
	static volatile uint32_t t63 = 978428942U;

	t63 = ((x325+(x326/x327))*x328);

	if (t63 != 4294967041U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = 31;
	volatile int32_t x334 = 0;
	int16_t x335 = INT16_MIN;
	int32_t x336 = -1;
	volatile int32_t t64 = -58183467;

	t64 = ((x333+(x334/x335))*x336);

	if (t64 != -31) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x337 = -1;
	static int32_t x338 = INT32_MIN;
	volatile int64_t x339 = -539244794277506575LL;
	volatile int8_t x340 = INT8_MIN;

	t65 = ((x337+(x338/x339))*x340);

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x345 = 3199U;
	static int64_t x346 = -1LL;
	uint32_t x347 = 213366364U;
	int16_t x348 = 7261;
	volatile int64_t t66 = -1497LL;

	t66 = ((x345+(x346/x347))*x348);

	if (t66 != 23227939LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x351 = -1;
	uint32_t x352 = 918U;

	t67 = ((x349+(x350/x351))*x352);

	if (t67 != 4266293566U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 0U;
	volatile int32_t x355 = INT32_MAX;
	int8_t x356 = INT8_MIN;
	uint32_t t68 = 3793012U;

	t68 = ((x353+(x354/x355))*x356);

	if (t68 != 128U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = INT8_MAX;
	uint64_t x358 = 72191265252LLU;
	int64_t x360 = INT64_MIN;
	volatile uint64_t t69 = 26367LLU;

	t69 = ((x357+(x358/x359))*x360);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x361 = 2U;
	uint16_t x362 = 30U;
	volatile uint64_t x363 = 979895453409150LLU;
	volatile uint64_t t70 = 385235192LLU;

	t70 = ((x361+(x362/x363))*x364);

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = -1;
	volatile int64_t x367 = INT64_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int64_t t71 = 14787337939LL;

	t71 = ((x365+(x366/x367))*x368);

	if (t71 != -2147450880LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x369 = INT64_MAX;
	int32_t x370 = -862497;
	volatile uint64_t x371 = UINT64_MAX;
	volatile uint64_t t72 = 1219392720333474LLU;

	t72 = ((x369+(x370/x371))*x372);

	if (t72 != 32768LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	uint32_t t73 = 356U;

	t73 = ((x373+(x374/x375))*x376);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t74 = 183241022;

	t74 = ((x381+(x382/x383))*x384);

	if (t74 != -8388480) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = 0;
	uint64_t x390 = 7891LLU;
	int16_t x391 = INT16_MAX;
	static int64_t x392 = INT64_MIN;

	t75 = ((x389+(x390/x391))*x392);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x397 = INT8_MAX;
	volatile uint16_t x400 = 154U;
	volatile int32_t t76 = -5411;

	t76 = ((x397+(x398/x399))*x400);

	if (t76 != 19712) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MAX;
	volatile uint32_t x411 = 2581746U;
	uint32_t t77 = 2259U;

	t77 = ((x409+(x410/x411))*x412);

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x414 = -1;
	int64_t t78 = 217444038136LL;

	t78 = ((x413+(x414/x415))*x416);

	if (t78 != 17179869176LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x423 = 1737;
	static volatile int16_t x424 = -225;
	int64_t t79 = 26038709555251LL;

	t79 = ((x421+(x422/x423))*x424);

	if (t79 != -1194736827289595625LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x425 = 1U;
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MIN;

	t80 = ((x425+(x426/x427))*x428);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = INT16_MAX;
	int8_t x431 = INT8_MAX;
	static volatile int16_t x432 = 159;
	int32_t t81 = -2;

	t81 = ((x429+(x430/x431))*x432);

	if (t81 != 5168931) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x434 = 1;
	uint64_t t82 = 114LLU;

	t82 = ((x433+(x434/x435))*x436);

	if (t82 != 18192446629993250816LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x437 = -1;
	uint16_t x438 = 2U;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = 2044064;
	uint64_t t83 = 1964858615LLU;

	t83 = ((x437+(x438/x439))*x440);

	if (t83 != 18446744073707507552LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x445 = INT16_MIN;
	uint32_t x446 = 1571967497U;
	int32_t x447 = 5860;
	int8_t x448 = -2;
	uint32_t t84 = 732325U;

	t84 = ((x445+(x446/x447))*x448);

	if (t84 != 4294496326U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x449 = 2;
	volatile int8_t x450 = INT8_MIN;
	volatile int16_t x451 = INT16_MIN;
	int32_t x452 = 1016724;
	int32_t t85 = 234288;

	t85 = ((x449+(x450/x451))*x452);

	if (t85 != 2033448) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x457 = -3802;
	int16_t x459 = -15;
	volatile uint8_t x460 = 5U;
	int32_t t86 = -504086006;

	t86 = ((x457+(x458/x459))*x460);

	if (t86 != -19010) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x466 = INT16_MIN;
	volatile int16_t x467 = -1;
	static uint64_t x468 = 2695LLU;
	volatile uint64_t t87 = 963637360595LLU;

	t87 = ((x465+(x466/x467))*x468);

	if (t87 != 88315150LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MIN;
	int32_t x471 = INT32_MIN;
	int16_t x472 = -1;
	int32_t t88 = -4264645;

	t88 = ((x469+(x470/x471))*x472);

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x473 = 1U;
	int64_t x474 = INT64_MAX;
	volatile int32_t x475 = 174155;
	volatile uint64_t t89 = 29445861LLU;

	t89 = ((x473+(x474/x475))*x476);

	if (t89 != 847371322038864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x477 = UINT32_MAX;
	uint16_t x479 = 172U;
	volatile int64_t t90 = 2197LL;

	t90 = ((x477+(x478/x479))*x480);

	if (t90 != 3518686316167110LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x482 = INT16_MAX;
	int8_t x484 = INT8_MIN;
	static volatile uint32_t t91 = 21038U;

	t91 = ((x481+(x482/x483))*x484);

	if (t91 != 4294934656U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x490 = 16133923LLU;
	int32_t x492 = INT32_MIN;
	uint64_t t92 = 1452523007LLU;

	t92 = ((x489+(x490/x491))*x492);

	if (t92 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x494 = INT8_MIN;
	static uint64_t x495 = UINT64_MAX;
	int8_t x496 = 46;
	volatile uint64_t t93 = 444459LLU;

	t93 = ((x493+(x494/x495))*x496);

	if (t93 != 18446743974925303808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x497 = INT8_MIN;
	static uint64_t x499 = 260309867998LLU;
	volatile uint64_t t94 = 145850377052582857LLU;

	t94 = ((x497+(x498/x499))*x500);

	if (t94 != 18446743144464267913LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x505 = INT32_MIN;
	static uint64_t x506 = 48597970LLU;
	int64_t x507 = -2790787394953823LL;
	int8_t x508 = -50;
	static volatile uint64_t t95 = 0LLU;

	t95 = ((x505+(x506/x507))*x508);

	if (t95 != 107374182400LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x509 = -53377122716LL;
	volatile int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MAX;
	uint64_t x512 = 30427LLU;
	uint64_t t96 = 479972LLU;

	t96 = ((x509+(x510/x511))*x512);

	if (t96 != 18445119967996671884LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x513 = -1;
	uint16_t x515 = 68U;
	volatile uint64_t t97 = 134200047740245615LLU;

	t97 = ((x513+(x514/x515))*x516);

	if (t97 != 2170205188931977216LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x517 = INT64_MIN;
	volatile uint64_t x518 = UINT64_MAX;
	uint8_t x520 = UINT8_MAX;
	volatile uint64_t t98 = 139371LLU;

	t98 = ((x517+(x518/x519))*x520);

	if (t98 != 9366928655977549808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x525 = -2868LL;
	int64_t x526 = INT64_MIN;
	int32_t x527 = 209193;
	static int16_t x528 = -1;

	t99 = ((x525+(x526/x527))*x528);

	if (t99 != 44090251764900LL) { NG(); } else { ; }
	
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

