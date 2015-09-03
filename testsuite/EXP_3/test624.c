#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 9407606U;
int64_t x10 = INT64_MIN;
uint16_t x11 = 11U;
int64_t x17 = INT64_MAX;
static volatile uint64_t x21 = 393LLU;
int64_t t5 = 29LL;
int32_t x27 = INT32_MAX;
static uint64_t x28 = 59LLU;
uint32_t x30 = 297U;
static int32_t x35 = INT32_MIN;
int64_t x40 = INT64_MIN;
static uint64_t t10 = 4479501322855454535LLU;
int16_t x48 = INT16_MIN;
uint8_t x52 = 17U;
static volatile uint32_t x58 = 88468U;
static int16_t x60 = INT16_MAX;
static uint32_t x63 = 765482U;
int8_t x70 = -1;
int8_t x71 = -5;
volatile int32_t t16 = 3;
static uint8_t x74 = 2U;
int8_t x87 = INT8_MIN;
int64_t x88 = INT64_MIN;
int32_t x90 = -1;
volatile int32_t t21 = 351945;
static int8_t x98 = 1;
volatile uint8_t x99 = 49U;
uint16_t x106 = UINT16_MAX;
uint16_t x107 = UINT16_MAX;
volatile uint16_t x110 = UINT16_MAX;
uint16_t x115 = 1445U;
int32_t t26 = 1;
int8_t x123 = INT8_MIN;
int32_t x128 = -1;
uint64_t t29 = 1865LLU;
int32_t x135 = INT32_MIN;
int64_t t32 = -151233331667316LL;
static volatile uint64_t x144 = 243LLU;
int64_t x180 = INT64_MAX;
int32_t t44 = 10;
int8_t x189 = INT8_MIN;
int32_t x192 = INT32_MAX;
int64_t t45 = -13217431776589513LL;
uint32_t x199 = 3U;
volatile int32_t x201 = 57707;
int8_t x212 = INT8_MIN;
static int32_t x219 = INT32_MIN;
uint8_t x225 = 0U;
static uint32_t x226 = 688864U;
uint16_t x228 = UINT16_MAX;
uint16_t x231 = 516U;
uint64_t t55 = 103947LLU;
int16_t x235 = 8;
static int16_t x242 = INT16_MIN;
static int16_t x244 = INT16_MIN;
int16_t x246 = 1509;
int8_t x247 = INT8_MIN;
volatile int32_t t60 = -14241881;
uint16_t x255 = UINT16_MAX;
volatile int64_t t61 = 848711LL;
int16_t x259 = INT16_MIN;
int32_t x273 = INT32_MIN;
uint64_t x276 = UINT64_MAX;
static int64_t x281 = INT64_MIN;
volatile int64_t x282 = INT64_MIN;
static int8_t x283 = 1;
int32_t t67 = 1;
int8_t x285 = INT8_MIN;
static int8_t x289 = INT8_MIN;
static volatile uint8_t x295 = 95U;
static int8_t x299 = INT8_MIN;
int64_t x304 = -1LL;
int16_t x307 = -1;
uint16_t x309 = 4627U;
int8_t x315 = INT8_MIN;
volatile int32_t t75 = -1;
int32_t x318 = INT32_MIN;
int8_t x319 = -1;
volatile uint8_t x320 = 1U;
static int32_t t76 = 458980823;
static volatile uint8_t x331 = 1U;
int64_t x332 = INT64_MIN;
volatile int32_t x334 = 91746;
int16_t x336 = 7;
int32_t x342 = -1;
static int32_t x347 = INT32_MIN;
int8_t x351 = INT8_MAX;
int32_t x368 = INT32_MIN;
volatile int32_t x371 = -1;
static int64_t x374 = -367LL;
static volatile uint16_t x375 = 875U;
static uint32_t x376 = 63995247U;
volatile uint32_t x377 = 86U;
static uint16_t x378 = 13785U;
volatile uint32_t t91 = 347015308U;
int32_t x382 = INT32_MIN;
volatile int8_t x385 = -1;
int64_t t93 = 3838LL;
volatile int64_t t94 = -52247LL;
static int8_t x394 = -1;
uint32_t x402 = UINT32_MAX;
uint8_t x403 = UINT8_MAX;
static volatile int64_t t98 = -2153LL;
uint16_t x410 = UINT16_MAX;
int64_t x411 = -979957473848622707LL;


void f0(void) {
	volatile int64_t x1 = 1548LL;
	static volatile int16_t x3 = INT16_MIN;
	static int32_t x4 = 30150723;
	volatile int32_t t0 = -768;

	t0 = ((x1<x2)^(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	volatile int32_t x7 = INT32_MIN;
	volatile int64_t x8 = 367586LL;
	int64_t t1 = -16625950017718782LL;

	t1 = ((x5<x6)^(x7/x8));

	if (t1 != -5842LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 281;
	int8_t x12 = 3;
	int32_t t2 = 20818575;

	t2 = ((x9<x10)^(x11/x12));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	int32_t x14 = 3427;
	static int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -12870115;

	t3 = ((x13<x14)^(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = INT64_MIN;
	int16_t x19 = -1;
	uint64_t x20 = 19LLU;
	volatile uint64_t t4 = 151369659713LLU;

	t4 = ((x17<x18)^(x19/x20));

	if (t4 != 970881267037344821LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 8594543735831300LL;
	volatile int64_t x23 = 0LL;
	int16_t x24 = INT16_MAX;

	t5 = ((x21<x22)^(x23/x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int8_t x26 = 1;
	static uint64_t t6 = 743415552772120LLU;

	t6 = ((x25<x26)^(x27/x28));

	if (t6 != 36398026LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	int8_t x31 = -7;
	int16_t x32 = -1;
	volatile int32_t t7 = 746691128;

	t7 = ((x29<x30)^(x31/x32));

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int32_t x34 = -1;
	volatile int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 114338433LL;

	t8 = ((x33<x34)^(x35/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int64_t x38 = -4259869966016LL;
	int8_t x39 = -1;
	volatile int64_t t9 = 0LL;

	t9 = ((x37<x38)^(x39/x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int16_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	static uint64_t x44 = 1265441111474LLU;

	t10 = ((x41<x42)^(x43/x44));

	if (t10 != 14577322LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile uint16_t x46 = 228U;
	int32_t x47 = INT32_MAX;
	volatile int32_t t11 = 220122238;

	t11 = ((x45<x46)^(x47/x48));

	if (t11 != -65536) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	int8_t x50 = INT8_MAX;
	static int8_t x51 = INT8_MIN;
	int32_t t12 = 153966;

	t12 = ((x49<x50)^(x51/x52));

	if (t12 != -8) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = UINT32_MAX;
	int32_t x59 = INT32_MAX;
	int32_t t13 = 995116635;

	t13 = ((x57<x58)^(x59/x60));

	if (t13 != 65538) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile int16_t x64 = 1;
	volatile uint32_t t14 = 179102U;

	t14 = ((x61<x62)^(x63/x64));

	if (t14 != 765482U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static uint8_t x66 = 3U;
	static int64_t x67 = INT64_MIN;
	int32_t x68 = 4961136;
	volatile int64_t t15 = 560057287LL;

	t15 = ((x65<x66)^(x67/x68));

	if (t15 != -1859125014282LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	static int8_t x72 = 39;

	t16 = ((x69<x70)^(x71/x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	volatile uint64_t x75 = 192888LLU;
	static int64_t x76 = -18817496311LL;
	static volatile uint64_t t17 = 346441942108102367LLU;

	t17 = ((x73<x74)^(x75/x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -20LL;
	static int16_t x82 = -1;
	static int64_t x83 = 26628099908LL;
	int8_t x84 = INT8_MIN;
	static int64_t t18 = 5329166530505026LL;

	t18 = ((x81<x82)^(x83/x84));

	if (t18 != -208032029LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = -28417878LL;
	int32_t x86 = -33181;
	volatile int64_t t19 = -44027190314LL;

	t19 = ((x85<x86)^(x87/x88));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 259359433066LLU;
	int16_t x91 = INT16_MAX;
	volatile int8_t x92 = INT8_MIN;
	static int32_t t20 = 101;

	t20 = ((x89<x90)^(x91/x92));

	if (t20 != -256) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	uint64_t x94 = UINT64_MAX;
	volatile uint16_t x95 = 0U;
	int32_t x96 = 276191873;

	t21 = ((x93<x94)^(x95/x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = -1LL;
	int64_t x100 = INT64_MIN;
	volatile int64_t t22 = 1LL;

	t22 = ((x97<x98)^(x99/x100));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x102 = 28220330U;
	volatile uint32_t x103 = 1737739008U;
	int8_t x104 = 48;
	volatile uint32_t t23 = 1222231U;

	t23 = ((x101<x102)^(x103/x104));

	if (t23 != 36202896U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MAX;
	uint64_t x108 = 81780LLU;
	static volatile uint64_t t24 = 139473731954523576LLU;

	t24 = ((x105<x106)^(x107/x108));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -12LL;
	static int64_t x111 = INT64_MIN;
	uint64_t x112 = 32859738551LLU;
	volatile uint64_t t25 = 977836LLU;

	t25 = ((x109<x110)^(x111/x112));

	if (t25 != 280689149LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 0U;
	int16_t x114 = -26;
	volatile int8_t x116 = 13;

	t26 = ((x113<x114)^(x115/x116));

	if (t26 != 111) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = 31878LL;
	int32_t x119 = -204510;
	uint32_t x120 = 1U;
	static uint32_t t27 = 5835U;

	t27 = ((x117<x118)^(x119/x120));

	if (t27 != 4294762787U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x121 = 0U;
	uint64_t x122 = 610708974054007LLU;
	static uint32_t x124 = 17014U;
	uint32_t t28 = 1305U;

	t28 = ((x121<x122)^(x123/x124));

	if (t28 != 252436U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	volatile int32_t x126 = -1;
	volatile uint64_t x127 = 50LLU;

	t29 = ((x125<x126)^(x127/x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x129 = 6;
	volatile int8_t x130 = -1;
	int8_t x131 = 0;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t30 = 147757384;

	t30 = ((x129<x130)^(x131/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 1864875U;
	static uint8_t x134 = 20U;
	int16_t x136 = INT16_MIN;
	int32_t t31 = 10864406;

	t31 = ((x133<x134)^(x135/x136));

	if (t31 != 65536) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = -1;
	int64_t x138 = -1LL;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MAX;

	t32 = ((x137<x138)^(x139/x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = -207120925446LL;
	uint32_t x142 = 344199691U;
	volatile int32_t x143 = -4;
	volatile uint64_t t33 = 11186103591682198LLU;

	t33 = ((x141<x142)^(x143/x144));

	if (t33 != 75912527052302680LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = 25U;
	static volatile uint16_t x147 = 3161U;
	int64_t x148 = 22116871405569LL;
	int64_t t34 = -257084272833489980LL;

	t34 = ((x145<x146)^(x147/x148));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 1;
	static uint64_t x150 = UINT64_MAX;
	int16_t x151 = -1;
	static uint64_t x152 = 647421LLU;
	volatile uint64_t t35 = 15933196LLU;

	t35 = ((x149<x150)^(x151/x152));

	if (t35 != 28492656360712LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = -1;
	uint8_t x154 = 3U;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = -2;
	volatile int32_t t36 = 31428;

	t36 = ((x153<x154)^(x155/x156));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = UINT8_MAX;
	int8_t x159 = -1;
	int8_t x160 = -1;
	static int32_t t37 = 110607;

	t37 = ((x157<x158)^(x159/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x161 = 62687LLU;
	uint16_t x162 = 419U;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MAX;
	int32_t t38 = 10423;

	t38 = ((x161<x162)^(x163/x164));

	if (t38 != -258) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x165 = UINT64_MAX;
	static uint8_t x166 = 1U;
	static uint16_t x167 = 0U;
	int16_t x168 = INT16_MAX;
	volatile int32_t t39 = -22169163;

	t39 = ((x165<x166)^(x167/x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile int64_t x170 = INT64_MAX;
	uint8_t x171 = UINT8_MAX;
	volatile uint16_t x172 = 29379U;
	int32_t t40 = -405504731;

	t40 = ((x169<x170)^(x171/x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	uint8_t x175 = 3U;
	int64_t x176 = INT64_MIN;
	volatile int64_t t41 = 14021126242LL;

	t41 = ((x173<x174)^(x175/x176));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 170212586;
	int32_t x178 = 1134;
	int64_t x179 = INT64_MIN;
	static volatile int64_t t42 = -178645421125650LL;

	t42 = ((x177<x178)^(x179/x180));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = 6354;
	volatile int8_t x182 = INT8_MIN;
	int64_t x183 = 13876LL;
	uint8_t x184 = UINT8_MAX;
	int64_t t43 = -1990090LL;

	t43 = ((x181<x182)^(x183/x184));

	if (t43 != 54LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -1LL;
	int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MAX;

	t44 = ((x185<x186)^(x187/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x190 = 14U;
	static int64_t x191 = INT64_MIN;

	t45 = ((x189<x190)^(x191/x192));

	if (t45 != -4294967297LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 34U;
	volatile uint16_t x194 = 7165U;
	int64_t x195 = 37173198969LL;
	volatile uint8_t x196 = 2U;
	volatile int64_t t46 = 6LL;

	t46 = ((x193<x194)^(x195/x196));

	if (t46 != 18586599485LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	int16_t x198 = INT16_MIN;
	uint16_t x200 = 1097U;
	volatile uint32_t t47 = 1034092U;

	t47 = ((x197<x198)^(x199/x200));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x202 = 5900329849493LLU;
	int64_t x203 = INT64_MAX;
	static uint32_t x204 = 1676U;
	volatile int64_t t48 = -9978LL;

	t48 = ((x201<x202)^(x203/x204));

	if (t48 != 5503205272586380LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x205 = -239813495;
	uint64_t x206 = 192443756758359496LLU;
	static uint8_t x207 = UINT8_MAX;
	static uint32_t x208 = UINT32_MAX;
	static uint32_t t49 = 496012964U;

	t49 = ((x205<x206)^(x207/x208));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = 34;
	int32_t x210 = INT32_MIN;
	volatile int8_t x211 = INT8_MIN;
	volatile int32_t t50 = 456729;

	t50 = ((x209<x210)^(x211/x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -172612049155564LL;
	uint32_t x214 = 1811U;
	static int16_t x215 = 1776;
	int32_t x216 = -1;
	volatile int32_t t51 = -25306;

	t51 = ((x213<x214)^(x215/x216));

	if (t51 != -1775) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = UINT16_MAX;
	volatile int8_t x218 = INT8_MAX;
	uint32_t x220 = 1797U;
	uint32_t t52 = 46244U;

	t52 = ((x217<x218)^(x219/x220));

	if (t52 != 1195038U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = INT16_MAX;
	int64_t x224 = INT64_MIN;
	static int64_t t53 = -64504565007010LL;

	t53 = ((x221<x222)^(x223/x224));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x227 = INT32_MIN;
	int32_t t54 = 46650;

	t54 = ((x225<x226)^(x227/x228));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MIN;
	uint32_t x230 = 59968446U;
	volatile uint64_t x232 = 516620LLU;

	t55 = ((x229<x230)^(x231/x232));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x233 = 3U;
	uint8_t x234 = 2U;
	int32_t x236 = -1;
	volatile int32_t t56 = 75005788;

	t56 = ((x233<x234)^(x235/x236));

	if (t56 != -8) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	static int8_t x239 = -12;
	volatile uint16_t x240 = 458U;
	volatile int32_t t57 = 786217988;

	t57 = ((x237<x238)^(x239/x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 540U;
	int32_t x243 = INT32_MIN;
	int32_t t58 = -185044;

	t58 = ((x241<x242)^(x243/x244));

	if (t58 != 65536) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MAX;
	volatile int8_t x248 = -1;
	static volatile int32_t t59 = 2;

	t59 = ((x245<x246)^(x247/x248));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = -1;
	int32_t x251 = 1102263;
	uint16_t x252 = UINT16_MAX;

	t60 = ((x249<x250)^(x251/x252));

	if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -1;
	volatile int64_t x254 = INT64_MAX;
	int64_t x256 = -111LL;

	t61 = ((x253<x254)^(x255/x256));

	if (t61 != -589LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -15;
	static int32_t x258 = INT32_MIN;
	static int8_t x260 = INT8_MAX;
	volatile int32_t t62 = 13802;

	t62 = ((x257<x258)^(x259/x260));

	if (t62 != -258) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = -14;
	int64_t x263 = -1LL;
	int8_t x264 = -1;
	int64_t t63 = -26441779461088LL;

	t63 = ((x261<x262)^(x263/x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x265 = INT32_MIN;
	uint8_t x266 = UINT8_MAX;
	int32_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t64 = -2;

	t64 = ((x265<x266)^(x267/x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 9LLU;
	int64_t x270 = 11LL;
	uint8_t x271 = 4U;
	uint64_t x272 = 54649669085LLU;
	uint64_t t65 = 8623LLU;

	t65 = ((x269<x270)^(x271/x272));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = -17;
	int32_t x275 = -1;
	volatile uint64_t t66 = 16204533434LLU;

	t66 = ((x273<x274)^(x275/x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x284 = -1;

	t67 = ((x281<x282)^(x283/x284));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x286 = 42;
	uint64_t x287 = 230655101LLU;
	int16_t x288 = -24;
	volatile uint64_t t68 = 804LLU;

	t68 = ((x285<x286)^(x287/x288));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x290 = 28119315U;
	int64_t x291 = -340974594836371579LL;
	uint64_t x292 = 55539060410610LLU;
	uint64_t t69 = 74867732LLU;

	t69 = ((x289<x290)^(x291/x292));

	if (t69 != 326000LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -1;
	volatile int32_t x294 = -1;
	static int64_t x296 = INT64_MAX;
	static volatile int64_t t70 = -53367302LL;

	t70 = ((x293<x294)^(x295/x296));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = 2;
	int8_t x298 = INT8_MIN;
	uint32_t x300 = 5871U;
	uint32_t t71 = 202109547U;

	t71 = ((x297<x298)^(x299/x300));

	if (t71 != 731556U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 6U;
	static volatile int16_t x302 = INT16_MIN;
	static int64_t x303 = -1LL;
	int64_t t72 = 3398901267090211227LL;

	t72 = ((x301<x302)^(x303/x304));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x305 = UINT64_MAX;
	int8_t x306 = 1;
	static int16_t x308 = INT16_MAX;
	static volatile int32_t t73 = 119;

	t73 = ((x305<x306)^(x307/x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x310 = INT64_MAX;
	static volatile uint32_t x311 = UINT32_MAX;
	int32_t x312 = INT32_MAX;
	volatile uint32_t t74 = 78680U;

	t74 = ((x309<x310)^(x311/x312));

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	static int16_t x314 = INT16_MIN;
	int16_t x316 = 247;

	t75 = ((x313<x314)^(x315/x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = 612366;

	t76 = ((x317<x318)^(x319/x320));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	uint32_t x322 = 0U;
	int32_t x323 = -1;
	int16_t x324 = -109;
	volatile int32_t t77 = -3558;

	t77 = ((x321<x322)^(x323/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	volatile uint8_t x326 = UINT8_MAX;
	int32_t x327 = -56;
	int16_t x328 = -1;
	static int32_t t78 = -1121983;

	t78 = ((x325<x326)^(x327/x328));

	if (t78 != 57) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = 2432U;
	int64_t t79 = -1LL;

	t79 = ((x329<x330)^(x331/x332));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x333 = 6U;
	int8_t x335 = 0;
	int32_t t80 = -246;

	t80 = ((x333<x334)^(x335/x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MAX;
	static volatile int32_t x338 = INT32_MAX;
	volatile int8_t x339 = -32;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t81 = -770;

	t81 = ((x337<x338)^(x339/x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 59718396LLU;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = UINT32_MAX;
	static uint32_t t82 = 4388U;

	t82 = ((x341<x342)^(x343/x344));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = INT8_MIN;
	static int16_t x346 = -6;
	int32_t x348 = INT32_MAX;
	int32_t t83 = 0;

	t83 = ((x345<x346)^(x347/x348));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MIN;
	volatile int32_t x350 = -6551467;
	int8_t x352 = -1;
	volatile int32_t t84 = 5894;

	t84 = ((x349<x350)^(x351/x352));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x354 = UINT32_MAX;
	volatile uint8_t x355 = 19U;
	int8_t x356 = INT8_MAX;
	int32_t t85 = 14;

	t85 = ((x353<x354)^(x355/x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x357 = INT16_MIN;
	static int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MIN;
	static int8_t x360 = -26;
	static int64_t t86 = -481507188LL;

	t86 = ((x357<x358)^(x359/x360));

	if (t86 != 354745078340568301LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x361 = -1;
	volatile int32_t x362 = 2711;
	uint32_t x363 = 126812U;
	uint8_t x364 = 12U;
	static volatile uint32_t t87 = 5U;

	t87 = ((x361<x362)^(x363/x364));

	if (t87 != 10566U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x365 = -1;
	static volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	static uint32_t t88 = 70568752U;

	t88 = ((x365<x366)^(x367/x368));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x369 = INT8_MAX;
	uint32_t x370 = 853508806U;
	int8_t x372 = -1;
	volatile int32_t t89 = 976830;

	t89 = ((x369<x370)^(x371/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -1;
	volatile uint32_t t90 = 1231923471U;

	t90 = ((x373<x374)^(x375/x376));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x379 = 36280536U;
	uint16_t x380 = UINT16_MAX;

	t91 = ((x377<x378)^(x379/x380));

	if (t91 != 552U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x381 = 11U;
	uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 4802177431993396689LLU;
	static volatile uint64_t t92 = 121394770124621716LLU;

	t92 = ((x381<x382)^(x383/x384));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x386 = 15U;
	volatile int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MAX;

	t93 = ((x385<x386)^(x387/x388));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = -1LL;
	int8_t x390 = INT8_MAX;
	volatile int64_t x391 = -1970783130LL;
	int8_t x392 = INT8_MIN;

	t94 = ((x389<x390)^(x391/x392));

	if (t94 != 15396742LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 20U;
	uint16_t x395 = 0U;
	int32_t x396 = -1;
	int32_t t95 = -14;

	t95 = ((x393<x394)^(x395/x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = INT16_MIN;
	volatile int64_t x399 = INT64_MIN;
	uint8_t x400 = UINT8_MAX;
	static int64_t t96 = 2019246994400765LL;

	t96 = ((x397<x398)^(x399/x400));

	if (t96 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MAX;
	int8_t x404 = INT8_MIN;
	volatile int32_t t97 = 789111381;

	t97 = ((x401<x402)^(x403/x404));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = 522U;
	uint32_t x406 = 256U;
	static volatile uint8_t x407 = 2U;
	static int64_t x408 = INT64_MIN;

	t98 = ((x405<x406)^(x407/x408));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	static int32_t x412 = INT32_MAX;
	volatile int64_t t99 = -3022321513483LL;

	t99 = ((x409<x410)^(x411/x412));

	if (t99 != -456328257LL) { NG(); } else { ; }
	
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

