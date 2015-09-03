#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x12 = 10339;
int64_t x15 = INT64_MIN;
int64_t t5 = 3LL;
volatile int64_t x47 = -5926015626LL;
int8_t x57 = -7;
uint64_t t12 = 256858452975476LLU;
int16_t x67 = 1;
uint32_t x72 = UINT32_MAX;
static uint8_t x79 = 2U;
int32_t t16 = -13678;
uint32_t x85 = 113907291U;
volatile int8_t x86 = INT8_MIN;
uint16_t x99 = 182U;
volatile uint32_t t21 = 104U;
int32_t x106 = INT32_MIN;
static volatile uint8_t x107 = 12U;
uint8_t x109 = 0U;
static int8_t x122 = INT8_MIN;
volatile int32_t x123 = INT32_MIN;
volatile uint64_t x124 = 4432LLU;
int64_t x132 = -1LL;
volatile int64_t x134 = -1LL;
static int64_t t29 = 510336920162319876LL;
int16_t x141 = 0;
int16_t x142 = 4292;
uint64_t x146 = UINT64_MAX;
int64_t t32 = -3176779213604478916LL;
volatile uint16_t x158 = 9U;
volatile uint16_t x164 = 215U;
int16_t x178 = -2;
uint64_t x181 = UINT64_MAX;
volatile int8_t x182 = -1;
static uint16_t x183 = 0U;
uint8_t x186 = 65U;
uint8_t x193 = 3U;
static int8_t x197 = -1;
volatile uint32_t t41 = 981207U;
static volatile int64_t t42 = -1LL;
int64_t x207 = 46157841541710LL;
uint16_t x214 = 7053U;
int16_t x224 = -1;
volatile int32_t x230 = INT32_MAX;
int64_t x233 = INT64_MIN;
static int64_t t50 = -3855967735349989968LL;
int32_t t53 = -21;
static int8_t x258 = INT8_MIN;
int64_t x260 = 60650LL;
int64_t x265 = -1LL;
int64_t x270 = 35LL;
int16_t x272 = INT16_MAX;
volatile uint64_t t58 = 1496054273876361456LLU;
uint32_t x279 = 294U;
uint32_t t59 = 18U;
int16_t x283 = -1;
int8_t x284 = -1;
int64_t x286 = 26780164794824LL;
int16_t x287 = 2489;
static volatile int16_t x288 = INT16_MIN;
static volatile int16_t x292 = INT16_MIN;
volatile int64_t t62 = -163720007710330111LL;
int64_t x293 = -28LL;
uint32_t x296 = 101922U;
static int16_t x301 = INT16_MAX;
int16_t x312 = INT16_MIN;
static uint64_t x317 = UINT64_MAX;
uint8_t x322 = 11U;
volatile int32_t t70 = -1625877;
uint64_t x327 = UINT64_MAX;
volatile int64_t x330 = -1LL;
static uint16_t x332 = 18739U;
volatile int32_t t74 = -2;
int32_t x353 = -4;
static int64_t x362 = INT64_MIN;
int32_t x377 = -5;
volatile int64_t x378 = INT64_MIN;
int64_t t82 = 27LL;
volatile int32_t t83 = -1316;
volatile uint32_t x388 = 19436717U;
volatile uint32_t t84 = 6275327U;
int64_t t85 = 59465LL;
int8_t x400 = -1;
static uint32_t x411 = 2365871U;
uint8_t x417 = 1U;
volatile uint64_t x420 = 68239497760716LLU;
volatile uint64_t t92 = 22614LLU;
int16_t x430 = -1705;
int16_t x431 = INT16_MIN;
static int64_t x439 = -2822236180LL;
static int32_t x455 = 51;


void f0(void) {
	uint8_t x5 = 12U;
	static int8_t x6 = INT8_MIN;
	volatile uint16_t x7 = 144U;
	int64_t x8 = INT64_MAX;
	int64_t t0 = -3780212390539LL;

	t0 = (x5%((x6^x7)&x8));

	if (t0 != 12LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	uint64_t x10 = 1893LLU;
	int8_t x11 = 7;
	static volatile uint64_t t1 = 161LLU;

	t1 = (x9%((x10^x11)&x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = 250425793U;
	int8_t x16 = -25;
	static volatile int64_t t2 = 14324330LL;

	t2 = (x13%((x14^x15)&x16));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -390587390865641LL;
	int16_t x18 = 3;
	uint64_t x19 = 195634061392875LLU;
	int8_t x20 = INT8_MIN;
	static uint64_t t3 = 31124641437LLU;

	t3 = (x17%((x18^x19)&x20));

	if (t3 != 17837594591255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	volatile int64_t t4 = 17914861706965701LL;

	t4 = (x29%((x30^x31)&x32));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 217654183045066LL;
	int64_t x34 = 2548027797411813571LL;
	int32_t x35 = -13489859;
	static volatile int64_t x36 = INT64_MIN;

	t5 = (x33%((x34^x35)&x36));

	if (t5 != 217654183045066LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = 0;
	static uint64_t x39 = 2258648307340907290LLU;
	int32_t x40 = -1;
	volatile uint64_t t6 = 33003328747LLU;

	t6 = (x37%((x38^x39)&x40));

	if (t6 != 377557614982260528LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x41 = 1753U;
	uint32_t x42 = 2U;
	static uint8_t x43 = 21U;
	volatile int32_t x44 = -5803979;
	volatile uint32_t t7 = 6U;

	t7 = (x41%((x42^x43)&x44));

	if (t7 != 10U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 11U;
	volatile int32_t x46 = INT32_MAX;
	volatile int16_t x48 = INT16_MIN;
	int64_t t8 = 7LL;

	t8 = (x45%((x46^x47)&x48));

	if (t8 != 11LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x49 = 1558U;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = -6;
	int32_t x52 = 1;
	volatile int32_t t9 = 1340067;

	t9 = (x49%((x50^x51)&x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 16175U;
	int64_t x54 = -1LL;
	volatile int16_t x55 = INT16_MIN;
	uint8_t x56 = UINT8_MAX;
	static int64_t t10 = -100177LL;

	t10 = (x53%((x54^x55)&x56));

	if (t10 != 110LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x58 = INT16_MIN;
	uint64_t x59 = 1008LLU;
	int8_t x60 = INT8_MIN;
	uint64_t t11 = 5847925377648517LLU;

	t11 = (x57%((x58^x59)&x60));

	if (t11 != 31865LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -180;
	int8_t x62 = INT8_MIN;
	volatile int16_t x63 = INT16_MIN;
	uint64_t x64 = 813255071LLU;

	t12 = (x61%((x62^x63)&x64));

	if (t12 != 16972LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = 7341U;
	uint64_t x66 = UINT64_MAX;
	uint16_t x68 = UINT16_MAX;
	uint64_t t13 = 8850023033LLU;

	t13 = (x65%((x66^x67)&x68));

	if (t13 != 7341LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	static volatile uint32_t x70 = 172990836U;
	volatile int32_t x71 = -1;
	volatile uint32_t t14 = 12037U;

	t14 = (x69%((x70^x71)&x72));

	if (t14 != 172990709U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	uint32_t t15 = 15083023U;

	t15 = (x77%((x78^x79)&x80));

	if (t15 != 255U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x81 = 12;
	static int32_t x82 = -7;
	int32_t x83 = 4;
	volatile int16_t x84 = INT16_MIN;

	t16 = (x81%((x82^x83)&x84));

	if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x87 = -1;
	uint16_t x88 = 10125U;
	uint32_t t17 = 5U;

	t17 = (x85%((x86^x87)&x88));

	if (t17 != 4U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = 1;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	static int32_t x92 = -2051596;
	static int32_t t18 = 349606310;

	t18 = (x89%((x90^x91)&x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = 11;
	static int64_t x94 = -1LL;
	volatile int64_t x95 = INT64_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int64_t t19 = 1956470LL;

	t19 = (x93%((x94^x95)&x96));

	if (t19 != 11LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -1;
	int16_t x98 = -61;
	int64_t x100 = 41863LL;
	int64_t t20 = -2416955222106809358LL;

	t20 = (x97%((x98^x99)&x100));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 5534;
	static uint32_t x102 = 920308U;
	uint16_t x103 = UINT16_MAX;
	volatile uint16_t x104 = UINT16_MAX;

	t21 = (x101%((x102^x103)&x104));

	if (t21 != 5534U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = 22;
	static uint16_t x108 = 10105U;
	int32_t t22 = 541;

	t22 = (x105%((x106^x107)&x108));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = -1;
	uint64_t x111 = 19588677869908403LLU;
	static uint64_t x112 = 425126LLU;
	uint64_t t23 = 3354801687314737457LLU;

	t23 = (x109%((x110^x111)&x112));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 12776798767LLU;
	uint64_t t24 = 3496471658465198085LLU;

	t24 = (x117%((x118^x119)&x120));

	if (t24 != 1348018175LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -1LL;
	uint64_t t25 = 393393LLU;

	t25 = (x121%((x122^x123)&x124));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x125 = 61517328933837LLU;
	int32_t x126 = INT32_MAX;
	int16_t x127 = 2548;
	int64_t x128 = -1LL;
	uint64_t t26 = 114837038935162389LLU;

	t26 = (x125%((x126^x127)&x128));

	if (t26 != 585371883LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -15737330;
	uint64_t x130 = 2031808989116LLU;
	uint32_t x131 = 686533964U;
	uint64_t t27 = 42767641099732LLU;

	t27 = (x129%((x130^x131)&x132));

	if (t27 != 1213784645294LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x133 = INT16_MAX;
	uint8_t x135 = 1U;
	volatile int64_t x136 = INT64_MIN;
	volatile int64_t t28 = 2382870332LL;

	t28 = (x133%((x134^x135)&x136));

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x137 = 112413709U;
	int64_t x138 = 436209149295803548LL;
	uint8_t x139 = UINT8_MAX;
	static int8_t x140 = -1;

	t29 = (x137%((x138^x139)&x140));

	if (t29 != 112413709LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x143 = UINT16_MAX;
	volatile int8_t x144 = INT8_MAX;
	int32_t t30 = 1;

	t30 = (x141%((x142^x143)&x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x145 = -52;
	static volatile int16_t x147 = 1616;
	uint64_t x148 = 4883787828LLU;
	volatile uint64_t t31 = 123LLU;

	t31 = (x145%((x146^x147)&x148));

	if (t31 != 4321331864LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = UINT8_MAX;
	static int8_t x154 = 17;
	uint16_t x155 = 214U;
	int64_t x156 = INT64_MAX;

	t32 = (x153%((x154^x155)&x156));

	if (t32 != 56LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x157 = 241U;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = -1;
	static volatile uint64_t t33 = 1967455367203405LLU;

	t33 = (x157%((x158^x159)&x160));

	if (t33 != 241LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 1;
	uint16_t x162 = UINT16_MAX;
	static int16_t x163 = INT16_MIN;
	volatile int32_t t34 = -25455052;

	t34 = (x161%((x162^x163)&x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = INT8_MIN;
	static volatile int32_t t35 = 24690665;

	t35 = (x169%((x170^x171)&x172));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = 10;
	int64_t x174 = INT64_MIN;
	static int64_t x175 = 44990520326LL;
	uint8_t x176 = 5U;
	int64_t t36 = 704LL;

	t36 = (x173%((x174^x175)&x176));

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x179 = -9;
	uint32_t x180 = 12472044U;
	volatile uint32_t t37 = 4663U;

	t37 = (x177%((x178^x179)&x180));

	if (t37 != 7U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x184 = 1U;
	uint64_t t38 = 406954LLU;

	t38 = (x181%((x182^x183)&x184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = -1LL;
	volatile int64_t t39 = -2271830LL;

	t39 = (x185%((x186^x187)&x188));

	if (t39 != -88LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x194 = -1LL;
	uint16_t x195 = 1U;
	volatile uint8_t x196 = UINT8_MAX;
	static int64_t t40 = 7673022425471LL;

	t40 = (x193%((x194^x195)&x196));

	if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x198 = 269162;
	int8_t x199 = 18;
	volatile uint32_t x200 = 11087853U;

	t41 = (x197%((x198^x199)&x200));

	if (t41 != 615U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	volatile int8_t x202 = 1;
	int64_t x203 = -1LL;
	uint32_t x204 = 81857U;

	t42 = (x201%((x202^x203)&x204));

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x205 = -4990;
	int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t43 = -81395LL;

	t43 = (x205%((x206^x207)&x208));

	if (t43 != -4990LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x209 = -1212530LL;
	int16_t x210 = 15781;
	int8_t x211 = -1;
	int32_t x212 = -88;
	volatile int64_t t44 = 42646LL;

	t44 = (x209%((x210^x211)&x212));

	if (t44 != -6866LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = 54;
	int64_t x215 = INT64_MAX;
	int16_t x216 = INT16_MAX;
	int64_t t45 = 7388762577082975LL;

	t45 = (x213%((x214^x215)&x216));

	if (t45 != 54LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = 117LLU;
	int64_t x219 = INT64_MAX;
	uint64_t x220 = 19259146LLU;
	volatile uint64_t t46 = 1417106906214439LLU;

	t46 = (x217%((x218^x219)&x220));

	if (t46 != 2898602LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x221 = 312U;
	int8_t x222 = -1;
	volatile uint16_t x223 = 5187U;
	volatile int32_t t47 = -211045;

	t47 = (x221%((x222^x223)&x224));

	if (t47 != 312) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x225 = INT8_MIN;
	uint32_t x226 = 33U;
	uint8_t x227 = 2U;
	int32_t x228 = 944734;
	uint32_t t48 = 95U;

	t48 = (x225%((x226^x227)&x228));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x229 = INT8_MAX;
	int64_t x231 = INT64_MIN;
	static int16_t x232 = INT16_MIN;
	volatile int64_t t49 = -97533300867625044LL;

	t49 = (x229%((x230^x231)&x232));

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x234 = UINT16_MAX;
	uint32_t x235 = 13716767U;
	volatile uint16_t x236 = 10188U;

	t50 = (x233%((x234^x235)&x236));

	if (t50 != -3968LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -45;
	int64_t x242 = 541385LL;
	uint8_t x243 = 126U;
	static volatile uint64_t x244 = 56113774559521LLU;
	volatile uint64_t t51 = 115685531LLU;

	t51 = (x241%((x242^x243)&x244));

	if (t51 != 118908LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MAX;
	static uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	static uint64_t t52 = 2237756517776569LLU;

	t52 = (x245%((x246^x247)&x248));

	if (t52 != 32640LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MAX;
	static volatile int8_t x250 = -1;
	int32_t x251 = 151297570;
	int8_t x252 = INT8_MIN;

	t53 = (x249%((x250^x251)&x252));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x257 = 35U;
	volatile int32_t x259 = -21;
	volatile int64_t t54 = 1LL;

	t54 = (x257%((x258^x259)&x260));

	if (t54 != 35LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x261 = UINT32_MAX;
	uint32_t x262 = UINT32_MAX;
	volatile int64_t x263 = INT64_MIN;
	uint8_t x264 = 15U;
	static int64_t t55 = -28131LL;

	t55 = (x261%((x262^x263)&x264));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x266 = -62;
	int8_t x267 = 1;
	volatile int32_t x268 = INT32_MIN;
	volatile int64_t t56 = -3735LL;

	t56 = (x265%((x266^x267)&x268));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x269 = INT16_MIN;
	static volatile int64_t x271 = INT64_MIN;
	volatile int64_t t57 = 3147206864LL;

	t57 = (x269%((x270^x271)&x272));

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x273 = 5630377433LLU;
	int8_t x274 = -1;
	int32_t x275 = INT32_MIN;
	volatile int64_t x276 = -43463715923LL;

	t58 = (x273%((x274^x275)&x276));

	if (t58 != 730055378LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 13U;
	int32_t x278 = -15548;
	int16_t x280 = INT16_MIN;

	t59 = (x277%((x278^x279)&x280));

	if (t59 != 13U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = INT16_MAX;
	uint32_t x282 = 60485685U;
	static uint32_t t60 = 206919U;

	t60 = (x281%((x282^x283)&x284));

	if (t60 != 32767U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x285 = INT16_MIN;
	int64_t t61 = -863766261LL;

	t61 = (x285%((x286^x287)&x288));

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = 16885981313LL;
	int8_t x290 = -12;
	int64_t x291 = INT64_MIN;

	t62 = (x289%((x290^x291)&x292));

	if (t62 != 16885981313LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x294 = INT8_MAX;
	int16_t x295 = -1;
	static volatile int64_t t63 = 1570LL;

	t63 = (x293%((x294^x295)&x296));

	if (t63 != -28LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x297 = 1U;
	int8_t x298 = -1;
	volatile int16_t x299 = INT16_MAX;
	int8_t x300 = -1;
	int32_t t64 = -133;

	t64 = (x297%((x298^x299)&x300));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x302 = 1418991487788LL;
	static uint64_t x303 = 91866218359LLU;
	int8_t x304 = -1;
	static uint64_t t65 = 33474891294878LLU;

	t65 = (x301%((x302^x303)&x304));

	if (t65 != 32767LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x305 = 2020U;
	static uint16_t x306 = UINT16_MAX;
	int16_t x307 = 19;
	uint64_t x308 = 1604318717705069LLU;
	volatile uint64_t t66 = 697360747296LLU;

	t66 = (x305%((x306^x307)&x308));

	if (t66 != 2020LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -93LL;
	int64_t x310 = INT64_MIN;
	volatile int64_t x311 = -289401LL;
	int64_t t67 = 111780LL;

	t67 = (x309%((x310^x311)&x312));

	if (t67 != -93LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x313 = 1936467916LLU;
	int8_t x314 = INT8_MIN;
	int8_t x315 = -1;
	volatile int16_t x316 = -1;
	static volatile uint64_t t68 = 72715789LLU;

	t68 = (x313%((x314^x315)&x316));

	if (t68 != 110LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MAX;
	volatile int32_t x320 = -11514;
	volatile uint64_t t69 = 15675808LLU;

	t69 = (x317%((x318^x319)&x320));

	if (t69 != 2147483647LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = -28;
	int16_t x323 = -1;
	int16_t x324 = 44;

	t70 = (x321%((x322^x323)&x324));

	if (t70 != -28) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -1LL;
	int32_t x326 = 6102548;
	static int8_t x328 = INT8_MIN;
	volatile uint64_t t71 = 251233428LLU;

	t71 = (x325%((x326^x327)&x328));

	if (t71 != 6102655LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x329 = 0U;
	int8_t x331 = INT8_MAX;
	int64_t t72 = 126LL;

	t72 = (x329%((x330^x331)&x332));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x333 = 117U;
	static volatile int32_t x334 = INT32_MIN;
	int32_t x335 = -2;
	int64_t x336 = -3486LL;
	volatile int64_t t73 = -989LL;

	t73 = (x333%((x334^x335)&x336));

	if (t73 != 117LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MAX;

	t74 = (x341%((x342^x343)&x344));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = 2402;
	volatile uint8_t x346 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MIN;
	static int32_t t75 = -29321;

	t75 = (x345%((x346^x347)&x348));

	if (t75 != 2402) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = -1;
	uint16_t x350 = 255U;
	uint16_t x351 = 1U;
	int32_t x352 = 8278;
	volatile int32_t t76 = -6461;

	t76 = (x349%((x350^x351)&x352));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x354 = INT16_MIN;
	int8_t x355 = -1;
	int16_t x356 = -47;
	volatile int32_t t77 = 240049705;

	t77 = (x353%((x354^x355)&x356));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x361 = 836168361031526800LLU;
	volatile int64_t x363 = -5518175457LL;
	int16_t x364 = INT16_MAX;
	volatile uint64_t t78 = 617520372377LLU;

	t78 = (x361%((x362^x363)&x364));

	if (t78 != 4480LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = 2;
	int32_t x366 = INT32_MIN;
	static int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t79 = 322256;

	t79 = (x365%((x366^x367)&x368));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 0U;
	int32_t x370 = 4341115;
	volatile int32_t x371 = INT32_MAX;
	int16_t x372 = -1;
	volatile uint32_t t80 = 0U;

	t80 = (x369%((x370^x371)&x372));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x373 = INT64_MIN;
	uint8_t x374 = 3U;
	volatile uint32_t x375 = UINT32_MAX;
	static uint8_t x376 = 53U;
	volatile int64_t t81 = -1450872868LL;

	t81 = (x373%((x374^x375)&x376));

	if (t81 != -8LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x379 = 72783713U;
	int32_t x380 = 9;

	t82 = (x377%((x378^x379)&x380));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x381 = INT32_MIN;
	static int32_t x382 = INT32_MIN;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = 2756;

	t83 = (x381%((x382^x383)&x384));

	if (t83 != -180) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile int16_t x386 = INT16_MAX;
	volatile uint8_t x387 = UINT8_MAX;

	t84 = (x385%((x386^x387)&x388));

	if (t84 != 2048U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = -1;
	uint32_t x394 = 236825753U;
	volatile int64_t x395 = INT64_MIN;
	uint32_t x396 = 1072001U;

	t85 = (x393%((x394^x395)&x396));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x397 = UINT32_MAX;
	uint64_t x398 = UINT64_MAX;
	uint8_t x399 = 16U;
	uint64_t t86 = 1301132294879969573LLU;

	t86 = (x397%((x398^x399)&x400));

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 27646LLU;
	int16_t x406 = INT16_MAX;
	volatile int64_t x407 = -2LL;
	int16_t x408 = INT16_MAX;
	uint64_t t87 = 1LLU;

	t87 = (x405%((x406^x407)&x408));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x409 = INT64_MAX;
	int32_t x410 = 0;
	static volatile uint64_t x412 = 3416939651202LLU;
	uint64_t t88 = 24052557LLU;

	t88 = (x409%((x410^x411)&x412));

	if (t88 != 1997563LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = 173;
	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = -5965135LL;
	uint8_t x416 = UINT8_MAX;
	volatile int64_t t89 = -1LL;

	t89 = (x413%((x414^x415)&x416));

	if (t89 != 26LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x418 = 108U;
	int8_t x419 = -1;
	uint64_t t90 = 38865372823LLU;

	t90 = (x417%((x418^x419)&x420));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x421 = UINT8_MAX;
	static uint64_t x422 = 473154672178096197LLU;
	uint64_t x423 = 5519267724773902LLU;
	int16_t x424 = INT16_MIN;
	static uint64_t t91 = 4059812607762LLU;

	t91 = (x421%((x422^x423)&x424));

	if (t91 != 255LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x425 = UINT64_MAX;
	static uint16_t x426 = 10220U;
	int8_t x427 = INT8_MIN;
	uint32_t x428 = UINT32_MAX;

	t92 = (x425%((x426^x427)&x428));

	if (t92 != 102657423LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x429 = 87U;
	int16_t x432 = -1;
	volatile int32_t t93 = -141742164;

	t93 = (x429%((x430^x431)&x432));

	if (t93 != 87) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x433 = INT32_MIN;
	static int8_t x434 = INT8_MAX;
	int8_t x435 = 61;
	int16_t x436 = INT16_MAX;
	volatile int32_t t94 = -9;

	t94 = (x433%((x434^x435)&x436));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x437 = 31292U;
	int64_t x438 = 35577061750899314LL;
	int8_t x440 = 7;
	volatile int64_t t95 = -12058437513459012LL;

	t95 = (x437%((x438^x439)&x440));

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x441 = 2U;
	volatile int32_t x442 = 6460;
	int16_t x443 = -7;
	static int16_t x444 = -6;
	uint32_t t96 = 2601753U;

	t96 = (x441%((x442^x443)&x444));

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x445 = 38236LL;
	uint8_t x446 = 0U;
	int16_t x447 = 1953;
	uint32_t x448 = UINT32_MAX;
	volatile int64_t t97 = -6311LL;

	t97 = (x445%((x446^x447)&x448));

	if (t97 != 1129LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = -1;
	int32_t x454 = -606;
	static int8_t x456 = INT8_MIN;
	int32_t t98 = 370775660;

	t98 = (x453%((x454^x455)&x456));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x457 = INT8_MIN;
	uint16_t x458 = 23143U;
	uint8_t x459 = UINT8_MAX;
	int8_t x460 = INT8_MAX;
	int32_t t99 = -17308;

	t99 = (x457%((x458^x459)&x460));

	if (t99 != -8) { NG(); } else { ; }
	
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

