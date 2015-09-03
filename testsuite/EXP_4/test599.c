#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 308U;
static int64_t x3 = INT64_MIN;
int8_t x14 = 1;
static uint16_t x18 = UINT16_MAX;
volatile uint64_t t4 = UINT64_MAX;
static uint32_t x26 = 8045427U;
uint64_t x31 = 497053244LLU;
int64_t x35 = INT64_MIN;
volatile int64_t t7 = INT64_MIN;
static volatile int64_t x42 = INT64_MAX;
static volatile int8_t x43 = INT8_MIN;
int8_t x44 = INT8_MIN;
int32_t t8 = -77;
int8_t x52 = INT8_MIN;
uint64_t x53 = 59LLU;
int32_t x56 = -166669137;
static int8_t x57 = INT8_MIN;
static volatile uint16_t x59 = 4076U;
int16_t x60 = 7;
int8_t x62 = INT8_MAX;
static uint16_t x69 = 29U;
static uint64_t x72 = 89LLU;
static int64_t x78 = INT64_MAX;
uint32_t t18 = 1639069067U;
volatile uint32_t x88 = UINT32_MAX;
uint64_t x93 = 135LLU;
int32_t t22 = 5;
int8_t x102 = INT8_MIN;
int32_t x105 = 216007;
int16_t x107 = INT16_MAX;
int32_t x112 = -1;
int16_t x120 = -15;
int8_t x122 = INT8_MIN;
int32_t t28 = 50665960;
static int8_t x131 = -1;
int8_t x137 = INT8_MIN;
static uint64_t x148 = UINT64_MAX;
int32_t t34 = -89;
int16_t x161 = INT16_MIN;
uint8_t x162 = UINT8_MAX;
volatile int32_t x172 = -1;
static int8_t x176 = -19;
int8_t x181 = 1;
static uint64_t x184 = 14716667238185LLU;
int32_t x189 = INT32_MIN;
static int16_t x192 = INT16_MIN;
uint64_t x193 = 3334533739961348LLU;
int16_t x195 = 1;
volatile uint64_t t45 = 71724170412212LLU;
volatile int16_t x202 = INT16_MIN;
uint64_t x207 = 210185427LLU;
volatile uint64_t x212 = 1882991754574LLU;
int16_t x213 = INT16_MAX;
int64_t x216 = 3848970265LL;
int8_t x223 = INT8_MIN;
int64_t x225 = 2341279970LL;
static uint64_t x229 = UINT64_MAX;
int64_t x237 = INT64_MAX;
int16_t x238 = -2;
uint8_t x239 = 88U;
int8_t x251 = -2;
uint8_t x257 = UINT8_MAX;
uint32_t x264 = 15204U;
volatile int8_t x266 = -1;
static int32_t t61 = -6;
uint32_t x269 = 73193910U;
static volatile int16_t x278 = 0;
volatile int64_t x279 = 3473058568LL;
volatile int64_t x287 = -1LL;
int16_t x291 = -1;
int64_t x292 = -1LL;
volatile uint32_t x301 = 153065U;
volatile uint32_t x306 = 0U;
volatile int32_t t71 = 0;
volatile int16_t x312 = INT16_MIN;
uint16_t x316 = 6U;
uint32_t x318 = UINT32_MAX;
uint64_t t75 = UINT64_MAX;
int64_t x329 = -1LL;
static int16_t x331 = INT16_MAX;
int32_t t77 = 44650;
int16_t x344 = INT16_MIN;
int32_t t79 = 345130;
static int64_t t81 = 98473989578LL;
int8_t x354 = INT8_MIN;
volatile int64_t x355 = INT64_MAX;
int64_t x356 = 157462574439647090LL;
uint64_t x359 = 524660025859332LLU;
uint8_t x365 = 26U;
static int8_t x370 = 26;
static int64_t t87 = INT64_MIN;
static volatile int32_t x382 = -1;
int64_t x385 = -1LL;
int32_t x388 = -1;
static int32_t x392 = -1;
uint8_t x402 = 1U;
volatile uint16_t x403 = 533U;
volatile int16_t x410 = -11345;
int16_t x415 = INT16_MAX;
static int16_t x420 = INT16_MIN;
int32_t x429 = INT32_MIN;
uint16_t x431 = 3603U;


void f0(void) {
	static int32_t x2 = 301;
	uint64_t x4 = 220LLU;
	uint32_t t0 = 93998494U;

	t0 = (x1+(x2==(x3/x4)));

	if (t0 != 308U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 20;
	static int32_t x10 = 0;
	static uint16_t x11 = 6U;
	uint64_t x12 = 49959533LLU;
	volatile int32_t t1 = -1;

	t1 = (x9+(x10==(x11/x12)));

	if (t1 != 21) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 4U;
	static int32_t x15 = -90;
	static int8_t x16 = 2;
	int32_t t2 = -2559;

	t2 = (x13+(x14==(x15/x16)));

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -145608567376752145LL;
	uint32_t x19 = 408U;
	volatile int8_t x20 = -3;
	static volatile int64_t t3 = -1438498116LL;

	t3 = (x17+(x18==(x19/x20)));

	if (t3 != -145608567376752145LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	static volatile uint8_t x22 = 15U;
	static int16_t x23 = INT16_MIN;
	static uint32_t x24 = UINT32_MAX;

	t4 = (x21+(x22==(x23/x24)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	volatile uint8_t x27 = UINT8_MAX;
	volatile int32_t x28 = -1;
	static volatile uint64_t t5 = UINT64_MAX;

	t5 = (x25+(x26==(x27/x28)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 51U;
	static volatile int32_t x30 = 1863465;
	int16_t x32 = -1;
	volatile int32_t t6 = 1899613;

	t6 = (x29+(x30==(x31/x32)));

	if (t6 != 51) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static int32_t x34 = INT32_MAX;
	uint64_t x36 = UINT64_MAX;

	t7 = (x33+(x34==(x35/x36)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 2075192;

	t8 = (x41+(x42==(x43/x44)));

	if (t8 != 2075192) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x46 = 15;
	volatile int8_t x47 = INT8_MIN;
	static int16_t x48 = INT16_MAX;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = (x45+(x46==(x47/x48)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 20985U;
	int64_t x50 = -401764727895429044LL;
	static uint64_t x51 = 16530100930731327LLU;
	int32_t t10 = -1;

	t10 = (x49+(x50==(x51/x52)));

	if (t10 != 20985) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = 105U;
	uint8_t x55 = 9U;
	static volatile uint64_t t11 = 721031166LLU;

	t11 = (x53+(x54==(x55/x56)));

	if (t11 != 59LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = INT8_MIN;
	int32_t t12 = 9019;

	t12 = (x57+(x58==(x59/x60)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x63 = 13647169540156LLU;
	static uint32_t x64 = UINT32_MAX;
	int64_t t13 = INT64_MIN;

	t13 = (x61+(x62==(x63/x64)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 3860636039104991879LLU;
	int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	static int16_t x68 = INT16_MAX;
	uint64_t t14 = 945LLU;

	t14 = (x65+(x66==(x67/x68)));

	if (t14 != 3860636039104991879LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x70 = 26;
	int16_t x71 = -1;
	volatile int32_t t15 = -9447878;

	t15 = (x69+(x70==(x71/x72)));

	if (t15 != 29) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint64_t x74 = UINT64_MAX;
	volatile int16_t x75 = INT16_MIN;
	static int64_t x76 = INT64_MIN;
	static int32_t t16 = 1691536;

	t16 = (x73+(x74==(x75/x76)));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 483;
	int64_t x79 = INT64_MAX;
	static volatile uint32_t x80 = 11275U;
	int32_t t17 = -6;

	t17 = (x77+(x78==(x79/x80)));

	if (t17 != 483) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 67785U;
	static uint64_t x82 = 1679488333025889LLU;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;

	t18 = (x81+(x82==(x83/x84)));

	if (t18 != 67785U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 20625387LLU;
	int64_t x86 = 22479689787236LL;
	volatile int32_t x87 = INT32_MIN;
	volatile uint64_t t19 = 33028809772LLU;

	t19 = (x85+(x86==(x87/x88)));

	if (t19 != 20625387LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = 50448866290304LL;
	int64_t x90 = 818087611864227LL;
	int16_t x91 = 324;
	volatile uint32_t x92 = 1105644695U;
	int64_t t20 = 2LL;

	t20 = (x89+(x90==(x91/x92)));

	if (t20 != 50448866290304LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = INT64_MAX;
	static uint16_t x95 = 1902U;
	int8_t x96 = -1;
	static volatile uint64_t t21 = 0LLU;

	t21 = (x93+(x94==(x95/x96)));

	if (t21 != 135LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x97 = INT8_MIN;
	uint64_t x98 = 8549127135435619LLU;
	static int32_t x99 = INT32_MAX;
	int8_t x100 = INT8_MAX;

	t22 = (x97+(x98==(x99/x100)));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x103 = 5461U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x101+(x102==(x103/x104)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = 9;
	uint16_t x108 = 556U;
	volatile int32_t t24 = -66781769;

	t24 = (x105+(x106==(x107/x108)));

	if (t24 != 216007) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = 1;
	static int16_t x111 = -1;
	volatile int32_t t25 = 468870;

	t25 = (x109+(x110==(x111/x112)));

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MAX;
	static volatile uint32_t x114 = UINT32_MAX;
	uint8_t x115 = 117U;
	int64_t x116 = INT64_MIN;
	int32_t t26 = INT32_MAX;

	t26 = (x113+(x114==(x115/x116)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	uint64_t x118 = 16621986LLU;
	int64_t x119 = INT64_MAX;
	static int32_t t27 = -124024821;

	t27 = (x117+(x118==(x119/x120)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 0U;
	static int8_t x123 = 3;
	uint16_t x124 = 42U;

	t28 = (x121+(x122==(x123/x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -8;
	int8_t x126 = -23;
	int8_t x127 = -1;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t29 = 1;

	t29 = (x125+(x126==(x127/x128)));

	if (t29 != -8) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -61481456224584287LL;
	int16_t x130 = -64;
	int8_t x132 = 5;
	int64_t t30 = 363134473520LL;

	t30 = (x129+(x130==(x131/x132)));

	if (t30 != -61481456224584287LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -40025;
	uint16_t x134 = 651U;
	volatile int8_t x135 = INT8_MIN;
	volatile int8_t x136 = -1;
	int32_t t31 = 609643;

	t31 = (x133+(x134==(x135/x136)));

	if (t31 != -40025) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = UINT32_MAX;
	uint32_t x139 = 119312U;
	volatile int8_t x140 = INT8_MIN;
	int32_t t32 = -2;

	t32 = (x137+(x138==(x139/x140)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	int8_t x142 = INT8_MIN;
	int8_t x143 = 5;
	int16_t x144 = -1;
	int32_t t33 = -105188410;

	t33 = (x141+(x142==(x143/x144)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -8976;
	uint32_t x147 = 49U;

	t34 = (x145+(x146==(x147/x148)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	int64_t x150 = 1LL;
	int8_t x151 = INT8_MIN;
	int64_t x152 = 1LL;
	static volatile int32_t t35 = 138;

	t35 = (x149+(x150==(x151/x152)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = -1;
	int8_t x158 = -1;
	static uint8_t x159 = UINT8_MAX;
	uint64_t x160 = 961LLU;
	static int32_t t36 = 1;

	t36 = (x157+(x158==(x159/x160)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x163 = 11460U;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t37 = 38;

	t37 = (x161+(x162==(x163/x164)));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x165 = INT64_MIN;
	static int64_t x166 = INT64_MAX;
	uint16_t x167 = 725U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x165+(x166==(x167/x168)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = 2;
	uint16_t x170 = 29U;
	int16_t x171 = INT16_MAX;
	int32_t t39 = 1;

	t39 = (x169+(x170==(x171/x172)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -1;
	uint16_t x174 = 5297U;
	int8_t x175 = INT8_MIN;
	int32_t t40 = -354020;

	t40 = (x173+(x174==(x175/x176)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	static int32_t x178 = 11955390;
	static int16_t x179 = INT16_MAX;
	static int32_t x180 = -350;
	static volatile int64_t t41 = INT64_MIN;

	t41 = (x177+(x178==(x179/x180)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x182 = 14233;
	uint32_t x183 = 137857U;
	volatile int32_t t42 = 374259434;

	t42 = (x181+(x182==(x183/x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = 221502512;
	static uint64_t x187 = UINT64_MAX;
	volatile uint8_t x188 = 3U;
	int64_t t43 = INT64_MAX;

	t43 = (x185+(x186==(x187/x188)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x190 = 23761U;
	uint8_t x191 = 104U;
	static int32_t t44 = INT32_MIN;

	t44 = (x189+(x190==(x191/x192)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x194 = UINT8_MAX;
	int32_t x196 = 55000119;

	t45 = (x193+(x194==(x195/x196)));

	if (t45 != 3334533739961348LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MAX;
	volatile int8_t x203 = 22;
	int8_t x204 = -1;
	int32_t t46 = -28796435;

	t46 = (x201+(x202==(x203/x204)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x205 = INT16_MAX;
	int64_t x206 = -1LL;
	int64_t x208 = INT64_MIN;
	volatile int32_t t47 = -529769363;

	t47 = (x205+(x206==(x207/x208)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = -739012412881LL;
	int32_t x210 = 19;
	int16_t x211 = -1;
	int64_t t48 = 311869249LL;

	t48 = (x209+(x210==(x211/x212)));

	if (t48 != -739012412881LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x214 = UINT64_MAX;
	uint16_t x215 = 0U;
	int32_t t49 = 11081396;

	t49 = (x213+(x214==(x215/x216)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = INT32_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	uint16_t x224 = UINT16_MAX;
	static int32_t t50 = INT32_MIN;

	t50 = (x221+(x222==(x223/x224)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x226 = -27;
	int64_t x227 = 32061080239LL;
	static int64_t x228 = -1LL;
	volatile int64_t t51 = -156334LL;

	t51 = (x225+(x226==(x227/x228)));

	if (t51 != 2341279970LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x230 = INT64_MIN;
	static int8_t x231 = 56;
	int32_t x232 = INT32_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x229+(x230==(x231/x232)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x233 = 25889899756LLU;
	volatile int8_t x234 = INT8_MAX;
	volatile int8_t x235 = 2;
	static int32_t x236 = -12103;
	uint64_t t53 = 10147LLU;

	t53 = (x233+(x234==(x235/x236)));

	if (t53 != 25889899756LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x240 = 113884638033296340LLU;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x237+(x238==(x239/x240)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x241 = UINT64_MAX;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x241+(x242==(x243/x244)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MIN;
	static uint64_t x247 = 74385028099481866LLU;
	uint8_t x248 = 71U;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x245+(x246==(x247/x248)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	static int32_t x250 = -1;
	uint16_t x252 = 13729U;
	uint64_t t57 = UINT64_MAX;

	t57 = (x249+(x250==(x251/x252)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = 12537;
	volatile int16_t x255 = INT16_MAX;
	static int16_t x256 = INT16_MAX;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x253+(x254==(x255/x256)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MAX;
	static volatile uint32_t x260 = UINT32_MAX;
	static volatile int32_t t59 = -95926430;

	t59 = (x257+(x258==(x259/x260)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = INT64_MAX;
	static uint16_t x262 = 57U;
	uint16_t x263 = UINT16_MAX;
	volatile int64_t t60 = INT64_MAX;

	t60 = (x261+(x262==(x263/x264)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = -52;
	int64_t x267 = -1LL;
	uint32_t x268 = 18374U;

	t61 = (x265+(x266==(x267/x268)));

	if (t61 != -52) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x270 = 7290400780009512LL;
	static uint32_t x271 = UINT32_MAX;
	uint64_t x272 = 5575LLU;
	volatile uint32_t t62 = 154U;

	t62 = (x269+(x270==(x271/x272)));

	if (t62 != 73193910U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = 18U;
	int32_t x274 = -103;
	static int64_t x275 = INT64_MAX;
	uint64_t x276 = 63241912755289881LLU;
	static volatile int32_t t63 = -7686;

	t63 = (x273+(x274==(x275/x276)));

	if (t63 != 18) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = 70853LL;
	uint32_t x280 = 82U;
	int64_t t64 = 227421326752207LL;

	t64 = (x277+(x278==(x279/x280)));

	if (t64 != 70853LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t65 = -321;

	t65 = (x281+(x282==(x283/x284)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = UINT32_MAX;
	static uint16_t x286 = 0U;
	int64_t x288 = INT64_MIN;
	volatile uint32_t t66 = 1181004U;

	t66 = (x285+(x286==(x287/x288)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 630LLU;
	volatile uint32_t x290 = 2U;
	uint64_t t67 = 55711382LLU;

	t67 = (x289+(x290==(x291/x292)));

	if (t67 != 630LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = UINT16_MAX;
	static uint32_t x294 = 15019U;
	uint8_t x295 = UINT8_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t68 = 149079139;

	t68 = (x293+(x294==(x295/x296)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = 23255LLU;
	uint16_t x298 = 3529U;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = INT64_MAX;
	static uint64_t t69 = 1779050653357379LLU;

	t69 = (x297+(x298==(x299/x300)));

	if (t69 != 23255LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 353827548605LLU;
	volatile int16_t x304 = -1;
	static uint32_t t70 = 13571U;

	t70 = (x301+(x302==(x303/x304)));

	if (t70 != 153065U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MAX;
	int8_t x307 = -8;
	uint64_t x308 = 1914LLU;

	t71 = (x305+(x306==(x307/x308)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -19LL;
	static int64_t x310 = 4468437208695276LL;
	int16_t x311 = INT16_MIN;
	int64_t t72 = -12439268702LL;

	t72 = (x309+(x310==(x311/x312)));

	if (t72 != -19LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = -1;
	int8_t x314 = INT8_MAX;
	static int8_t x315 = 8;
	volatile int32_t t73 = -105976;

	t73 = (x313+(x314==(x315/x316)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x317 = -1;
	int16_t x319 = -833;
	volatile uint64_t x320 = UINT64_MAX;
	static volatile int32_t t74 = 2;

	t74 = (x317+(x318==(x319/x320)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x321 = UINT64_MAX;
	int64_t x322 = -1LL;
	volatile uint8_t x323 = 36U;
	int8_t x324 = INT8_MAX;

	t75 = (x321+(x322==(x323/x324)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x330 = INT32_MAX;
	int8_t x332 = INT8_MIN;
	volatile int64_t t76 = 1LL;

	t76 = (x329+(x330==(x331/x332)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x333 = 3U;
	static int32_t x334 = INT32_MIN;
	int8_t x335 = -5;
	int8_t x336 = -1;

	t77 = (x333+(x334==(x335/x336)));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 110568U;
	int8_t x339 = 0;
	uint32_t x340 = 6336934U;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x337+(x338==(x339/x340)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MIN;
	static uint64_t x342 = 60968318257069LLU;
	uint64_t x343 = 29388384LLU;

	t79 = (x341+(x342==(x343/x344)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x345 = -21101;
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = 1LL;
	int64_t x348 = -6517060LL;
	volatile int32_t t80 = -702549830;

	t80 = (x345+(x346==(x347/x348)));

	if (t80 != -21101) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = -8322229350LL;
	uint32_t x350 = UINT32_MAX;
	volatile int64_t x351 = 196195510536848LL;
	uint16_t x352 = 332U;

	t81 = (x349+(x350==(x351/x352)));

	if (t81 != -8322229350LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = INT8_MIN;
	static volatile int32_t t82 = -464511953;

	t82 = (x353+(x354==(x355/x356)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = -1493203;
	int8_t x360 = INT8_MAX;
	int32_t t83 = -8167;

	t83 = (x357+(x358==(x359/x360)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int32_t x362 = -36;
	int16_t x363 = INT16_MIN;
	static volatile int8_t x364 = 48;
	static uint32_t t84 = UINT32_MAX;

	t84 = (x361+(x362==(x363/x364)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x366 = 57U;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t85 = 48667009;

	t85 = (x365+(x366==(x367/x368)));

	if (t85 != 26) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MAX;
	static volatile int32_t t86 = 3243255;

	t86 = (x369+(x370==(x371/x372)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x373 = INT64_MIN;
	static uint16_t x374 = 452U;
	uint32_t x375 = 0U;
	volatile int16_t x376 = -1;

	t87 = (x373+(x374==(x375/x376)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -17;
	uint16_t x378 = 11714U;
	int64_t x379 = -1LL;
	static uint64_t x380 = UINT64_MAX;
	int32_t t88 = -1531;

	t88 = (x377+(x378==(x379/x380)));

	if (t88 != -17) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = 1U;
	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = INT16_MAX;
	static int32_t t89 = 4156;

	t89 = (x381+(x382==(x383/x384)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x386 = 14452;
	static int8_t x387 = INT8_MIN;
	volatile int64_t t90 = -1356LL;

	t90 = (x385+(x386==(x387/x388)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x389 = 29259531997859LLU;
	volatile int16_t x390 = INT16_MAX;
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t t91 = 4388745597534LLU;

	t91 = (x389+(x390==(x391/x392)));

	if (t91 != 29259531997859LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x393 = 44620U;
	int32_t x394 = -111;
	volatile uint32_t x395 = 0U;
	static int16_t x396 = INT16_MIN;
	volatile uint32_t t92 = 2631U;

	t92 = (x393+(x394==(x395/x396)));

	if (t92 != 44620U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x401 = 18U;
	int64_t x404 = INT64_MIN;
	volatile int32_t t93 = -1;

	t93 = (x401+(x402==(x403/x404)));

	if (t93 != 18) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x409 = UINT32_MAX;
	static uint32_t x411 = UINT32_MAX;
	uint8_t x412 = UINT8_MAX;
	uint32_t t94 = UINT32_MAX;

	t94 = (x409+(x410==(x411/x412)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MIN;
	uint32_t x416 = 44798524U;
	int64_t t95 = INT64_MIN;

	t95 = (x413+(x414==(x415/x416)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x417 = -58120004LL;
	static int64_t x418 = INT64_MIN;
	volatile int32_t x419 = 8869909;
	static int64_t t96 = -1295513580LL;

	t96 = (x417+(x418==(x419/x420)));

	if (t96 != -58120004LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = 7570;
	int64_t x422 = INT64_MIN;
	static uint64_t x423 = UINT64_MAX;
	int32_t x424 = -1;
	volatile int32_t t97 = -107895666;

	t97 = (x421+(x422==(x423/x424)));

	if (t97 != 7570) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 201U;
	uint8_t x426 = 3U;
	uint32_t x427 = UINT32_MAX;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t98 = 4055224;

	t98 = (x425+(x426==(x427/x428)));

	if (t98 != 201) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x430 = 222;
	int64_t x432 = INT64_MAX;
	int32_t t99 = INT32_MIN;

	t99 = (x429+(x430==(x431/x432)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

