#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MAX;
volatile int32_t t1 = 150197628;
int64_t x9 = -1LL;
uint16_t x10 = 5U;
int64_t x11 = INT64_MIN;
int8_t x22 = -16;
uint16_t x24 = 1132U;
uint16_t x25 = UINT16_MAX;
static volatile uint16_t x28 = 1U;
int8_t x36 = -1;
volatile int8_t x37 = INT8_MIN;
static int8_t x46 = 6;
int32_t t11 = 1097;
int16_t x56 = -1;
static int32_t x58 = INT32_MIN;
int32_t x61 = INT32_MIN;
volatile uint16_t x62 = UINT16_MAX;
int16_t x63 = -1;
uint32_t x65 = UINT32_MAX;
volatile int32_t t16 = 205;
int16_t x73 = 1;
uint16_t x82 = UINT16_MAX;
uint16_t x84 = 1U;
int32_t x93 = -1;
int64_t x108 = -708192098LL;
volatile int32_t t26 = -306940248;
int8_t x129 = -1;
uint8_t x131 = 99U;
static uint8_t x135 = 37U;
static volatile int32_t t30 = 107837;
int8_t x151 = INT8_MIN;
int64_t x161 = INT64_MIN;
uint16_t x165 = 54U;
int32_t t36 = 175;
uint8_t x170 = 93U;
static uint16_t x172 = 1U;
volatile uint32_t x177 = 1466302792U;
int32_t x179 = INT32_MAX;
volatile int32_t x180 = INT32_MIN;
uint64_t x182 = 432199721574608550LLU;
int16_t x183 = -1;
int16_t x184 = INT16_MAX;
static int32_t x185 = INT32_MIN;
int8_t x190 = INT8_MIN;
int8_t x200 = 19;
static uint8_t x201 = 11U;
volatile uint16_t x202 = 115U;
static int8_t x203 = INT8_MIN;
int8_t x204 = 1;
volatile int16_t x210 = 1802;
static volatile int32_t t46 = 0;
int32_t x217 = -114885208;
int16_t x220 = INT16_MIN;
int8_t x230 = -3;
static uint32_t x233 = 100187467U;
int64_t x237 = INT64_MAX;
uint32_t x249 = 577501927U;
uint32_t x251 = 10102866U;
int16_t x252 = INT16_MIN;
int16_t x259 = INT16_MIN;
uint16_t x279 = UINT16_MAX;
int32_t t59 = 13;
int64_t x289 = INT64_MIN;
int16_t x293 = INT16_MIN;
volatile int32_t t63 = 57151531;
uint64_t x306 = 212LLU;
static int64_t x307 = -1LL;
int64_t x308 = 2897256367813511LL;
static volatile int32_t t65 = 50606827;
uint16_t x314 = UINT16_MAX;
volatile uint8_t x315 = 1U;
int32_t x318 = -1;
uint32_t x327 = 21529U;
int64_t x328 = 61247787125147649LL;
int32_t x329 = INT32_MAX;
uint64_t x331 = 20945LLU;
volatile int32_t t70 = -173;
int16_t x337 = -12;
uint16_t x338 = 63U;
uint8_t x339 = 9U;
static int32_t x340 = INT32_MIN;
volatile int16_t x350 = -1;
volatile int64_t x359 = INT64_MIN;
uint8_t x360 = 16U;
int64_t x364 = INT64_MIN;
int32_t t77 = -8053;
uint64_t x367 = 42541095535549664LLU;
int8_t x373 = INT8_MIN;
int32_t x374 = 1780;
static uint32_t x388 = 38415628U;
static uint8_t x390 = 40U;
uint64_t x399 = 56218LLU;
int64_t x402 = -2785801LL;
volatile int32_t t88 = 370514502;
uint8_t x426 = 101U;
uint16_t x431 = 145U;
volatile int32_t t93 = 198268087;
int64_t x435 = INT64_MIN;
int32_t x437 = INT32_MAX;
static int16_t x447 = INT16_MIN;
static uint8_t x450 = 18U;
uint64_t x453 = 160009471LLU;
int32_t t99 = 783814;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int16_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 0;

	t0 = (x1<((x2+x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1161U;
	uint16_t x6 = 21U;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;

	t1 = (x5<((x6+x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x12 = 15U;
	volatile int32_t t2 = 67;

	t2 = (x9<((x10+x11)==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	static uint64_t x14 = 2981497495039385LLU;
	static uint16_t x15 = UINT16_MAX;
	int8_t x16 = 0;
	volatile int32_t t3 = 20202;

	t3 = (x13<((x14+x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static uint32_t x18 = UINT32_MAX;
	volatile uint8_t x19 = UINT8_MAX;
	static volatile int16_t x20 = INT16_MAX;
	int32_t t4 = 118;

	t4 = (x17<((x18+x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int16_t x23 = 5;
	volatile int32_t t5 = -107077312;

	t5 = (x21<((x22+x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 10U;
	uint32_t x27 = 5637U;
	int32_t t6 = -1115;

	t6 = (x25<((x26+x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 5628234U;
	uint8_t x30 = UINT8_MAX;
	static int64_t x31 = INT64_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -107866022;

	t7 = (x29<((x30+x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static int8_t x34 = 1;
	volatile int32_t x35 = -129232;
	int32_t t8 = -161;

	t8 = (x33<((x34+x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 40682146U;
	static uint8_t x39 = 1U;
	volatile int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -4;

	t9 = (x37<((x38+x39)==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	volatile int64_t x47 = -1LL;
	static int64_t x48 = -138719399965573800LL;
	int32_t t10 = 56;

	t10 = (x45<((x46+x47)==x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 1780U;
	int64_t x50 = 622904934339261LL;
	volatile int16_t x51 = -7151;
	uint64_t x52 = UINT64_MAX;

	t11 = (x49<((x50+x51)==x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	uint64_t x54 = UINT64_MAX;
	static int8_t x55 = INT8_MIN;
	int32_t t12 = 930;

	t12 = (x53<((x54+x55)==x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 0U;
	int8_t x59 = 30;
	uint16_t x60 = 0U;
	static int32_t t13 = 1698;

	t13 = (x57<((x58+x59)==x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x64 = -1LL;
	volatile int32_t t14 = -30269;

	t14 = (x61<((x62+x63)==x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MAX;
	int64_t x67 = -6503275LL;
	uint64_t x68 = 639572156867472LLU;
	static volatile int32_t t15 = -3740;

	t15 = (x65<((x66+x67)==x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -22;
	uint8_t x70 = 32U;
	int64_t x71 = -1LL;
	volatile uint32_t x72 = 28538U;

	t16 = (x69<((x70+x71)==x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 33929;

	t17 = (x73<((x74+x75)==x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = 2769761LLU;
	int16_t x78 = 236;
	int8_t x79 = -20;
	int16_t x80 = -49;
	int32_t t18 = -55745506;

	t18 = (x77<((x78+x79)==x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x83 = UINT16_MAX;
	static int32_t t19 = 32;

	t19 = (x81<((x82+x83)==x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -13;
	volatile int32_t x86 = -120;
	volatile uint8_t x87 = 29U;
	int32_t x88 = -45;
	int32_t t20 = 8283808;

	t20 = (x85<((x86+x87)==x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 2734598486522LLU;
	uint16_t x90 = 47U;
	static uint8_t x91 = 2U;
	uint64_t x92 = 3857646750846LLU;
	static volatile int32_t t21 = 1;

	t21 = (x89<((x90+x91)==x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = -1;
	volatile int64_t x95 = INT64_MAX;
	uint16_t x96 = 3340U;
	volatile int32_t t22 = 4;

	t22 = (x93<((x94+x95)==x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 26U;
	static uint64_t x98 = 13345039336882LLU;
	int32_t x99 = INT32_MAX;
	uint64_t x100 = 27609029LLU;
	volatile int32_t t23 = -54;

	t23 = (x97<((x98+x99)==x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	static int8_t x106 = -58;
	uint64_t x107 = 11LLU;
	volatile int32_t t24 = 58128;

	t24 = (x105<((x106+x107)==x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -5042;
	int8_t x110 = -1;
	uint64_t x111 = 61190787219854269LLU;
	int16_t x112 = 331;
	volatile int32_t t25 = 0;

	t25 = (x109<((x110+x111)==x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = 235079016757LLU;
	static int16_t x114 = -1;
	uint8_t x115 = 36U;
	static volatile int32_t x116 = INT32_MIN;

	t26 = (x113<((x114+x115)==x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MIN;
	int8_t x123 = -9;
	volatile uint64_t x124 = UINT64_MAX;
	int32_t t27 = -41436941;

	t27 = (x121<((x122+x123)==x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = 898603685;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t28 = -486;

	t28 = (x129<((x130+x131)==x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = -8527;
	int32_t x134 = INT32_MIN;
	uint32_t x136 = 33539181U;
	int32_t t29 = -9232;

	t29 = (x133<((x134+x135)==x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 0LLU;
	static int8_t x143 = INT8_MIN;
	int16_t x144 = -1659;

	t30 = (x141<((x142+x143)==x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	volatile int32_t x146 = -1;
	volatile uint8_t x147 = 39U;
	uint64_t x148 = UINT64_MAX;
	int32_t t31 = 417811;

	t31 = (x145<((x146+x147)==x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 5U;
	uint16_t x150 = 5U;
	int64_t x152 = INT64_MIN;
	int32_t t32 = 1;

	t32 = (x149<((x150+x151)==x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 1497468518684006114LLU;
	int32_t x154 = 183524543;
	volatile int64_t x155 = -1LL;
	int8_t x156 = INT8_MIN;
	static int32_t t33 = -64;

	t33 = (x153<((x154+x155)==x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 81567596LLU;
	int16_t x158 = -1768;
	static int32_t x159 = -4652;
	volatile uint64_t x160 = 283557156420326458LLU;
	int32_t t34 = -273512;

	t34 = (x157<((x158+x159)==x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x162 = UINT16_MAX;
	volatile uint64_t x163 = 21405857LLU;
	uint64_t x164 = UINT64_MAX;
	static int32_t t35 = 1;

	t35 = (x161<((x162+x163)==x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x166 = 173U;
	static volatile uint8_t x167 = 85U;
	static uint8_t x168 = UINT8_MAX;

	t36 = (x165<((x166+x167)==x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 0LLU;
	uint16_t x171 = 3573U;
	int32_t t37 = 13683;

	t37 = (x169<((x170+x171)==x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x173 = 1254152263974092LLU;
	int32_t x174 = 1633;
	uint8_t x175 = UINT8_MAX;
	static uint16_t x176 = 1996U;
	int32_t t38 = -110609869;

	t38 = (x173<((x174+x175)==x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = -1;
	static volatile int32_t t39 = 74;

	t39 = (x177<((x178+x179)==x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 125005U;
	volatile int32_t t40 = 2;

	t40 = (x181<((x182+x183)==x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x186 = 1948664LLU;
	volatile uint64_t x187 = UINT64_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t41 = 104080;

	t41 = (x185<((x186+x187)==x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x189 = INT64_MIN;
	int16_t x191 = 98;
	int32_t x192 = INT32_MIN;
	volatile int32_t t42 = 2464817;

	t42 = (x189<((x190+x191)==x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = 0;
	uint16_t x199 = 159U;
	static int32_t t43 = -682;

	t43 = (x197<((x198+x199)==x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t t44 = -78927;

	t44 = (x201<((x202+x203)==x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	uint8_t x207 = 4U;
	uint32_t x208 = UINT32_MAX;
	int32_t t45 = 4796;

	t45 = (x205<((x206+x207)==x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -1;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;

	t46 = (x209<((x210+x211)==x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x213 = -22;
	static volatile uint64_t x214 = 428504LLU;
	static int8_t x215 = INT8_MIN;
	int64_t x216 = -62729567212160121LL;
	int32_t t47 = 552443027;

	t47 = (x213<((x214+x215)==x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	static int32_t t48 = 160217769;

	t48 = (x217<((x218+x219)==x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = 2;
	static int64_t x231 = -798891LL;
	volatile int32_t x232 = 33160115;
	volatile int32_t t49 = 524531038;

	t49 = (x229<((x230+x231)==x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x234 = -6;
	uint16_t x235 = 421U;
	uint32_t x236 = 214651685U;
	int32_t t50 = -66136633;

	t50 = (x233<((x234+x235)==x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x238 = -1;
	static int8_t x239 = -1;
	uint32_t x240 = 125495267U;
	int32_t t51 = -51304145;

	t51 = (x237<((x238+x239)==x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x241 = 20U;
	volatile uint32_t x242 = UINT32_MAX;
	static volatile int32_t x243 = 918975;
	volatile int32_t x244 = -1;
	volatile int32_t t52 = 2367;

	t52 = (x241<((x242+x243)==x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x250 = INT8_MIN;
	volatile int32_t t53 = -4703;

	t53 = (x249<((x250+x251)==x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = -104;
	int32_t x254 = 11593225;
	static uint32_t x255 = UINT32_MAX;
	static int16_t x256 = -458;
	int32_t t54 = 8303341;

	t54 = (x253<((x254+x255)==x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x257 = INT8_MIN;
	int64_t x258 = -31LL;
	int8_t x260 = INT8_MIN;
	int32_t t55 = 3094;

	t55 = (x257<((x258+x259)==x260));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x269 = UINT32_MAX;
	uint32_t x270 = UINT32_MAX;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = 18U;
	static int32_t t56 = -953822;

	t56 = (x269<((x270+x271)==x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x273 = -239596LL;
	int64_t x274 = -1LL;
	int64_t x275 = -73266326LL;
	static int64_t x276 = -1522084291LL;
	volatile int32_t t57 = -1;

	t57 = (x273<((x274+x275)==x276));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -54;
	int8_t x278 = INT8_MIN;
	static int16_t x280 = -128;
	volatile int32_t t58 = -55823533;

	t58 = (x277<((x278+x279)==x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x281 = 33;
	int16_t x282 = -1;
	int8_t x283 = 2;
	int16_t x284 = INT16_MIN;

	t59 = (x281<((x282+x283)==x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MAX;
	volatile uint16_t x288 = 1013U;
	static int32_t t60 = 7476;

	t60 = (x285<((x286+x287)==x288));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -14;
	static volatile int32_t t61 = 7;

	t61 = (x289<((x290+x291)==x292));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = UINT64_MAX;
	static int16_t x295 = -2826;
	volatile int16_t x296 = -1;
	volatile int32_t t62 = -34967545;

	t62 = (x293<((x294+x295)==x296));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MAX;
	uint16_t x302 = 8043U;
	volatile int16_t x303 = INT16_MIN;
	volatile int16_t x304 = INT16_MIN;

	t63 = (x301<((x302+x303)==x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -1;
	volatile int32_t t64 = 130619;

	t64 = (x305<((x306+x307)==x308));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x309 = UINT32_MAX;
	int8_t x310 = INT8_MIN;
	int64_t x311 = 519097LL;
	uint8_t x312 = 10U;

	t65 = (x309<((x310+x311)==x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MAX;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t66 = 51;

	t66 = (x313<((x314+x315)==x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x317 = UINT32_MAX;
	static uint16_t x319 = UINT16_MAX;
	uint8_t x320 = 6U;
	static volatile int32_t t67 = 195;

	t67 = (x317<((x318+x319)==x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t68 = -1;

	t68 = (x321<((x322+x323)==x324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = -1;
	int64_t x326 = 8420892186LL;
	int32_t t69 = 1;

	t69 = (x325<((x326+x327)==x328));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x330 = 22LLU;
	uint64_t x332 = UINT64_MAX;

	t70 = (x329<((x330+x331)==x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 2991U;
	int8_t x335 = -28;
	uint32_t x336 = 199815915U;
	static volatile int32_t t71 = -67912;

	t71 = (x333<((x334+x335)==x336));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t t72 = -21835;

	t72 = (x337<((x338+x339)==x340));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int32_t x342 = -838;
	uint32_t x343 = UINT32_MAX;
	volatile uint32_t x344 = 19514U;
	volatile int32_t t73 = 17;

	t73 = (x341<((x342+x343)==x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = -1;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t74 = 8537;

	t74 = (x345<((x346+x347)==x348));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 0U;
	static int64_t x351 = -1LL;
	static volatile uint64_t x352 = 7263511021LLU;
	int32_t t75 = -1808;

	t75 = (x349<((x350+x351)==x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 1034648502U;
	volatile int32_t t76 = 0;

	t76 = (x357<((x358+x359)==x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x361 = 23822U;
	static uint16_t x362 = 91U;
	volatile uint8_t x363 = UINT8_MAX;

	t77 = (x361<((x362+x363)==x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x365 = 13U;
	volatile int8_t x366 = -47;
	int16_t x368 = -1;
	volatile int32_t t78 = -723480490;

	t78 = (x365<((x366+x367)==x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x369 = 30U;
	uint8_t x370 = 4U;
	int64_t x371 = -493645251LL;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t79 = -19929;

	t79 = (x369<((x370+x371)==x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x375 = -770446015758878344LL;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t80 = 3091199;

	t80 = (x373<((x374+x375)==x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 26124U;
	static int8_t x383 = 37;
	volatile int32_t x384 = INT32_MAX;
	int32_t t81 = 13659;

	t81 = (x381<((x382+x383)==x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = 1;
	int32_t t82 = 0;

	t82 = (x385<((x386+x387)==x388));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	int32_t t83 = -426727;

	t83 = (x389<((x390+x391)==x392));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x393 = 25153318;
	static int8_t x394 = -1;
	int16_t x395 = -1;
	int64_t x396 = -3LL;
	int32_t t84 = -21;

	t84 = (x393<((x394+x395)==x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = 0;
	volatile uint8_t x398 = UINT8_MAX;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t85 = 431728729;

	t85 = (x397<((x398+x399)==x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = INT64_MIN;
	volatile int64_t x403 = -269171694123667LL;
	int64_t x404 = INT64_MIN;
	static int32_t t86 = 970258965;

	t86 = (x401<((x402+x403)==x404));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x405 = INT16_MAX;
	uint64_t x406 = 16907080785LLU;
	static int8_t x407 = -1;
	static int32_t x408 = INT32_MIN;
	int32_t t87 = -90535;

	t87 = (x405<((x406+x407)==x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x409 = INT16_MIN;
	static int8_t x410 = INT8_MIN;
	uint32_t x411 = 9380339U;
	int8_t x412 = INT8_MIN;

	t88 = (x409<((x410+x411)==x412));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = INT64_MIN;
	volatile int32_t x414 = INT32_MIN;
	volatile uint8_t x415 = 17U;
	volatile uint64_t x416 = UINT64_MAX;
	volatile int32_t t89 = -868;

	t89 = (x413<((x414+x415)==x416));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = INT16_MAX;
	int32_t x418 = -1;
	int16_t x419 = -1;
	static uint64_t x420 = 4326LLU;
	int32_t t90 = 23;

	t90 = (x417<((x418+x419)==x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x421 = 1520157U;
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = INT16_MIN;
	int8_t x424 = 0;
	static volatile int32_t t91 = 2;

	t91 = (x421<((x422+x423)==x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = INT8_MIN;
	int32_t x427 = 6166698;
	static int8_t x428 = -1;
	volatile int32_t t92 = 251835;

	t92 = (x425<((x426+x427)==x428));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x429 = -1371;
	int32_t x430 = INT32_MIN;
	int64_t x432 = INT64_MIN;

	t93 = (x429<((x430+x431)==x432));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = -4;
	uint64_t x434 = UINT64_MAX;
	int16_t x436 = -1;
	static int32_t t94 = -122;

	t94 = (x433<((x434+x435)==x436));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MAX;
	int16_t x440 = INT16_MIN;
	volatile int32_t t95 = -46147134;

	t95 = (x437<((x438+x439)==x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x441 = INT64_MIN;
	static int8_t x442 = INT8_MIN;
	int8_t x443 = -15;
	uint16_t x444 = 1U;
	volatile int32_t t96 = 257794707;

	t96 = (x441<((x442+x443)==x444));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x445 = INT64_MIN;
	static uint64_t x446 = UINT64_MAX;
	int8_t x448 = -1;
	int32_t t97 = -6084;

	t97 = (x445<((x446+x447)==x448));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = -50;
	int16_t x451 = 1677;
	static int64_t x452 = INT64_MIN;
	int32_t t98 = 0;

	t98 = (x449<((x450+x451)==x452));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x454 = -801778;
	int8_t x455 = -1;
	uint64_t x456 = UINT64_MAX;

	t99 = (x453<((x454+x455)==x456));

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

