#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -17425506579702531LL;
static uint64_t x12 = 105597581545656313LLU;
int64_t x21 = -54771797227776736LL;
volatile uint16_t x22 = 5U;
int64_t x23 = -61350LL;
int64_t x30 = INT64_MIN;
int16_t x31 = INT16_MIN;
uint32_t x39 = UINT32_MAX;
int16_t x40 = -1;
uint32_t x44 = 1063107U;
uint64_t x51 = 52164762856172750LLU;
int32_t x52 = -1;
uint8_t x57 = 1U;
uint16_t x64 = 230U;
volatile int32_t t15 = -4;
static uint8_t x69 = UINT8_MAX;
static int16_t x76 = INT16_MIN;
static int32_t t18 = -1210;
int16_t x81 = 0;
static int64_t x84 = INT64_MIN;
int16_t x90 = INT16_MIN;
volatile int32_t t22 = -101;
uint64_t x96 = UINT64_MAX;
uint32_t x102 = 94425394U;
static int16_t x106 = INT16_MIN;
int16_t x112 = -1;
int8_t x115 = 3;
int64_t x116 = INT64_MAX;
int32_t t28 = -1784688;
uint32_t x119 = 70228532U;
volatile uint16_t x121 = UINT16_MAX;
static int64_t x128 = INT64_MIN;
uint64_t x129 = 1082273171100303LLU;
int8_t x132 = INT8_MAX;
int32_t x135 = -1;
volatile int8_t x136 = INT8_MIN;
static volatile int64_t x137 = -2543698515171LL;
static volatile uint32_t x138 = 0U;
int32_t t34 = -1048570;
uint64_t x145 = 1257223844LLU;
int32_t t36 = 0;
int32_t x162 = -1;
volatile int32_t x171 = -1;
int64_t x174 = -1LL;
volatile int32_t t43 = -1;
static int16_t x178 = INT16_MIN;
static int64_t x179 = -6061530199LL;
static volatile uint32_t x187 = 802312074U;
int32_t x194 = -274752234;
int32_t x199 = INT32_MAX;
int32_t t49 = 15282990;
static int32_t x206 = -16715351;
int64_t x210 = -1LL;
volatile int8_t x212 = 55;
static volatile int32_t t52 = 3;
volatile int32_t t54 = 85697;
volatile int16_t x224 = INT16_MAX;
int16_t x238 = INT16_MIN;
int16_t x240 = -1;
int32_t x244 = -1;
uint8_t x245 = UINT8_MAX;
volatile int32_t t61 = 35960363;
int32_t x259 = -1;
uint32_t x260 = 45874232U;
int32_t t65 = 15530;
volatile int32_t t67 = 108;
uint64_t x275 = 13005093693801LLU;
static int64_t x280 = -1LL;
uint32_t x282 = 3U;
uint32_t x285 = 1554U;
volatile int8_t x290 = INT8_MAX;
int64_t x303 = INT64_MIN;
int32_t x305 = INT32_MIN;
static int16_t x322 = 1;
volatile int32_t t80 = -252784;
uint64_t x325 = UINT64_MAX;
static volatile int32_t x331 = 17159;
uint32_t x332 = 14297U;
uint32_t x334 = 9U;
static volatile int32_t t83 = 3599;
int16_t x342 = INT16_MIN;
static uint16_t x354 = 45U;
int8_t x356 = -2;
volatile int32_t t88 = 13749;
int16_t x361 = INT16_MIN;
uint16_t x362 = UINT16_MAX;
static volatile int64_t x369 = -4400607681834318LL;
uint8_t x370 = 15U;
int8_t x372 = -1;
static uint64_t x373 = 15853074151360808LLU;
uint8_t x374 = 66U;
uint32_t x376 = UINT32_MAX;
int32_t x389 = INT32_MIN;
int8_t x396 = 2;
static volatile uint16_t x397 = UINT16_MAX;
static int8_t x400 = -1;


void f0(void) {
	int32_t x1 = -849023;
	int64_t x2 = 11594LL;
	static int64_t x3 = INT64_MIN;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 94964;

	t0 = (((x1<x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 17239175LLU;
	uint8_t x6 = 0U;
	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -90441921;

	t1 = (((x5<x6)<x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	volatile int32_t t2 = -641447017;

	t2 = (((x9<x10)<x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 840U;
	int16_t x14 = 9905;
	uint32_t x15 = 1150U;
	int32_t x16 = -11417952;
	volatile int32_t t3 = -43;

	t3 = (((x13<x14)<x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = UINT16_MAX;
	int8_t x18 = INT8_MIN;
	volatile uint64_t x19 = 923227507725LLU;
	static int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 30790;

	t4 = (((x17<x18)<x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x24 = 2;
	int32_t t5 = -22464630;

	t5 = (((x21<x22)<x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -29581195;
	static uint32_t x27 = UINT32_MAX;
	int16_t x28 = -1;
	int32_t t6 = 699297;

	t6 = (((x25<x26)<x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 6281LLU;
	volatile uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 7871;

	t7 = (((x29<x30)<x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int64_t x34 = INT64_MAX;
	uint32_t x35 = 1600389U;
	int8_t x36 = -1;
	int32_t t8 = -7215595;

	t8 = (((x33<x34)<x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static int64_t x38 = INT64_MAX;
	static volatile int32_t t9 = 585850517;

	t9 = (((x37<x38)<x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = -31013;
	int8_t x43 = INT8_MAX;
	int32_t t10 = 252376;

	t10 = (((x41<x42)<x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MAX;
	int16_t x48 = -1;
	int32_t t11 = 47924;

	t11 = (((x45<x46)<x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	uint32_t x50 = 17324U;
	int32_t t12 = 7;

	t12 = (((x49<x50)<x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	int64_t x54 = -1LL;
	volatile uint64_t x55 = UINT64_MAX;
	static volatile int64_t x56 = -1LL;
	int32_t t13 = -2;

	t13 = (((x53<x54)<x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 588082842U;
	uint8_t x59 = 24U;
	static uint16_t x60 = 1869U;
	int32_t t14 = 80352583;

	t14 = (((x57<x58)<x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -4614157;
	volatile uint8_t x62 = 19U;
	int32_t x63 = -4669606;

	t15 = (((x61<x62)<x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 241253872U;
	int64_t x66 = 132772855657464803LL;
	uint16_t x67 = UINT16_MAX;
	static int32_t x68 = 4243;
	static volatile int32_t t16 = 890;

	t16 = (((x65<x66)<x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 2199256;
	static int32_t x71 = INT32_MIN;
	volatile int16_t x72 = -1;
	int32_t t17 = 6859;

	t17 = (((x69<x70)<x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 7U;
	uint16_t x74 = 1U;
	uint16_t x75 = 516U;

	t18 = (((x73<x74)<x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MIN;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = 9;
	int32_t x80 = -6825;
	volatile int32_t t19 = -35;

	t19 = (((x77<x78)<x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	static int8_t x83 = INT8_MIN;
	static volatile int32_t t20 = -1330331;

	t20 = (((x81<x82)<x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MIN;
	static volatile int32_t x87 = INT32_MIN;
	int32_t x88 = -1;
	volatile int32_t t21 = 13172121;

	t21 = (((x85<x86)<x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 29U;
	static int64_t x91 = 38560980972365283LL;
	static uint8_t x92 = UINT8_MAX;

	t22 = (((x89<x90)<x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int64_t x94 = INT64_MAX;
	static int64_t x95 = 265838LL;
	volatile int32_t t23 = -389;

	t23 = (((x93<x94)<x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 411067LLU;
	int8_t x98 = -3;
	int8_t x99 = INT8_MIN;
	int32_t x100 = -1;
	int32_t t24 = -2;

	t24 = (((x97<x98)<x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 2867419LL;
	volatile uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 240;

	t25 = (((x101<x102)<x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -9;

	t26 = (((x105<x106)<x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	static int32_t x110 = 72246;
	uint32_t x111 = 24454U;
	volatile int32_t t27 = -910;

	t27 = (((x109<x110)<x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x113 = -1;
	uint32_t x114 = 809449U;

	t28 = (((x113<x114)<x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MAX;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t29 = 17296;

	t29 = (((x117<x118)<x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x122 = UINT8_MAX;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t30 = -1;

	t30 = (((x121<x122)<x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 173609U;
	int64_t x126 = 1352536195LL;
	static int32_t x127 = INT32_MAX;
	volatile int32_t t31 = 40823734;

	t31 = (((x125<x126)<x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = 15434;
	static int64_t x131 = -1LL;
	int32_t t32 = -175;

	t32 = (((x129<x130)<x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	uint8_t x134 = 1U;
	volatile int32_t t33 = 2215805;

	t33 = (((x133<x134)<x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;

	t34 = (((x137<x138)<x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static uint8_t x142 = 1U;
	static uint32_t x143 = 1524209U;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -601041954;

	t35 = (((x141<x142)<x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x146 = UINT64_MAX;
	int8_t x147 = -1;
	uint64_t x148 = 10330929LLU;

	t36 = (((x145<x146)<x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static int16_t x150 = -213;
	static int8_t x151 = 1;
	int64_t x152 = 84921431764LL;
	static volatile int32_t t37 = -1005842;

	t37 = (((x149<x150)<x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	uint64_t x154 = 813428063008540LLU;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = 90U;
	static volatile int32_t t38 = -120;

	t38 = (((x153<x154)<x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x157 = 0U;
	static uint64_t x158 = 436LLU;
	int32_t x159 = INT32_MAX;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -2;

	t39 = (((x157<x158)<x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 968U;
	static volatile int8_t x163 = INT8_MIN;
	static int32_t x164 = -20808;
	volatile int32_t t40 = 95619331;

	t40 = (((x161<x162)<x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MIN;
	volatile uint16_t x167 = UINT16_MAX;
	uint8_t x168 = 3U;
	static volatile int32_t t41 = -24701;

	t41 = (((x165<x166)<x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	static int8_t x170 = INT8_MIN;
	static int16_t x172 = -24;
	int32_t t42 = -186972;

	t42 = (((x169<x170)<x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	uint16_t x175 = UINT16_MAX;
	volatile int64_t x176 = -3485621216976LL;

	t43 = (((x173<x174)<x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = -1211;

	t44 = (((x177<x178)<x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 35U;
	int8_t x182 = 1;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	int32_t t45 = -1072435305;

	t45 = (((x181<x182)<x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint32_t x186 = 161558637U;
	uint32_t x188 = 107652817U;
	volatile int32_t t46 = 32541672;

	t46 = (((x185<x186)<x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 30U;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = 11654910071926793LLU;
	static int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 1511;

	t47 = (((x189<x190)<x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = 37U;
	static volatile int32_t t48 = 1;

	t48 = (((x193<x194)<x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -4843LL;
	volatile uint64_t x198 = 766LLU;
	uint16_t x200 = UINT16_MAX;

	t49 = (((x197<x198)<x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 0U;
	static int32_t x202 = INT32_MIN;
	volatile int64_t x203 = 18072LL;
	static uint64_t x204 = UINT64_MAX;
	static volatile int32_t t50 = 18704;

	t50 = (((x201<x202)<x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int32_t x207 = INT32_MIN;
	static volatile int8_t x208 = -3;
	volatile int32_t t51 = 407377628;

	t51 = (((x205<x206)<x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 2482371768916785395LL;
	uint8_t x211 = 4U;

	t52 = (((x209<x210)<x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	uint32_t x214 = 375U;
	uint64_t x215 = 4781158603000198615LLU;
	static uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 5485078;

	t53 = (((x213<x214)<x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = 65751192161683LL;
	volatile int64_t x219 = INT64_MIN;
	int64_t x220 = -1LL;

	t54 = (((x217<x218)<x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 62U;
	int32_t x223 = -1;
	static int32_t t55 = -55;

	t55 = (((x221<x222)<x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	static volatile uint16_t x226 = 163U;
	int32_t x227 = 5;
	volatile int64_t x228 = INT64_MIN;
	int32_t t56 = 39342791;

	t56 = (((x225<x226)<x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	uint16_t x230 = 6U;
	int8_t x231 = INT8_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t57 = -735392;

	t57 = (((x229<x230)<x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 10773418;
	int32_t x234 = INT32_MIN;
	int64_t x235 = -4LL;
	int8_t x236 = -42;
	volatile int32_t t58 = -322575;

	t58 = (((x233<x234)<x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 127U;
	uint32_t x239 = UINT32_MAX;
	volatile int32_t t59 = -1626347;

	t59 = (((x237<x238)<x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MAX;
	uint8_t x242 = 0U;
	uint64_t x243 = 259833262876282849LLU;
	volatile int32_t t60 = -61441;

	t60 = (((x241<x242)<x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MAX;
	volatile int64_t x247 = INT64_MAX;
	uint8_t x248 = 1U;

	t61 = (((x245<x246)<x247)==x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 29U;
	int64_t x250 = -1LL;
	int32_t x251 = INT32_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = 1;

	t62 = (((x249<x250)<x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	volatile int64_t x256 = INT64_MAX;
	volatile int32_t t63 = 0;

	t63 = (((x253<x254)<x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	int64_t x258 = -1LL;
	volatile int32_t t64 = -58313724;

	t64 = (((x257<x258)<x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 106756U;
	uint8_t x264 = UINT8_MAX;

	t65 = (((x261<x262)<x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 5656188245352LLU;
	uint64_t x267 = 158885799276937LLU;
	int8_t x268 = -1;
	int32_t t66 = -1;

	t66 = (((x265<x266)<x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	static int32_t x270 = -348663;
	int64_t x271 = -2208LL;
	int8_t x272 = -1;

	t67 = (((x269<x270)<x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -177;
	uint32_t x274 = UINT32_MAX;
	uint32_t x276 = 2437034U;
	int32_t t68 = -321179;

	t68 = (((x273<x274)<x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 74U;
	int64_t x278 = 2484717002763795LL;
	int32_t x279 = -1;
	static int32_t t69 = 1;

	t69 = (((x277<x278)<x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	volatile int8_t x283 = -32;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 4;

	t70 = (((x281<x282)<x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 5955U;
	int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = -3043869;

	t71 = (((x285<x286)<x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	uint64_t x291 = 102LLU;
	volatile uint32_t x292 = 57598U;
	int32_t t72 = 12;

	t72 = (((x289<x290)<x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	volatile int32_t x295 = 7377;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = -75022;

	t73 = (((x293<x294)<x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	uint64_t x298 = 20213338LLU;
	volatile int8_t x299 = INT8_MIN;
	volatile int32_t x300 = -1;
	static volatile int32_t t74 = -3248010;

	t74 = (((x297<x298)<x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x301 = -8900579;
	int16_t x302 = INT16_MIN;
	uint64_t x304 = 513732211LLU;
	int32_t t75 = 221;

	t75 = (((x301<x302)<x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	int64_t x307 = -2909826035082LL;
	uint16_t x308 = 63U;
	int32_t t76 = -1742;

	t76 = (((x305<x306)<x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -7170266019LL;
	uint16_t x310 = UINT16_MAX;
	volatile int8_t x311 = -26;
	static volatile uint8_t x312 = UINT8_MAX;
	static volatile int32_t t77 = 962202;

	t77 = (((x309<x310)<x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 444699988U;
	uint32_t x314 = 240U;
	int16_t x315 = -78;
	static int8_t x316 = -2;
	int32_t t78 = 8470;

	t78 = (((x313<x314)<x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	volatile uint8_t x318 = 2U;
	volatile uint32_t x319 = 804717887U;
	uint32_t x320 = 331U;
	volatile int32_t t79 = 152428514;

	t79 = (((x317<x318)<x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -115;
	int32_t x323 = -1;
	static volatile int16_t x324 = 5815;

	t80 = (((x321<x322)<x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = -13;
	static uint8_t x327 = 4U;
	int8_t x328 = -44;
	int32_t t81 = 1;

	t81 = (((x325<x326)<x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = 4689;
	volatile int32_t t82 = -9859113;

	t82 = (((x329<x330)<x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	static int32_t x335 = -69825;
	uint32_t x336 = UINT32_MAX;

	t83 = (((x333<x334)<x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -14950;
	volatile int32_t t84 = 0;

	t84 = (((x337<x338)<x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = UINT16_MAX;
	static int8_t x343 = -1;
	uint32_t x344 = 90U;
	volatile int32_t t85 = -751165184;

	t85 = (((x341<x342)<x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	int64_t x346 = -1LL;
	volatile int8_t x347 = -1;
	int16_t x348 = -4;
	int32_t t86 = -83;

	t86 = (((x345<x346)<x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 1U;
	int64_t x350 = 171071991395LL;
	int8_t x351 = -1;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -22483364;

	t87 = (((x349<x350)<x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 36;
	uint32_t x355 = 28516U;

	t88 = (((x353<x354)<x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 87U;
	int8_t x358 = -12;
	int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MAX;
	static int32_t t89 = 490;

	t89 = (((x357<x358)<x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x363 = 26470U;
	volatile uint16_t x364 = 14654U;
	volatile int32_t t90 = -60;

	t90 = (((x361<x362)<x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 1U;
	int64_t x366 = -9174925742990409LL;
	volatile int32_t x367 = INT32_MIN;
	volatile int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -61;

	t91 = (((x365<x366)<x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x371 = INT8_MIN;
	int32_t t92 = -29;

	t92 = (((x369<x370)<x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x375 = INT16_MAX;
	static volatile int32_t t93 = -37;

	t93 = (((x373<x374)<x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = -1LL;
	volatile uint8_t x378 = UINT8_MAX;
	volatile int16_t x379 = INT16_MIN;
	uint8_t x380 = 37U;
	volatile int32_t t94 = -1139645;

	t94 = (((x377<x378)<x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	static uint8_t x383 = 25U;
	int64_t x384 = -1LL;
	int32_t t95 = 0;

	t95 = (((x381<x382)<x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = INT16_MIN;
	uint16_t x386 = 1144U;
	volatile int32_t x387 = INT32_MAX;
	int64_t x388 = -10092622LL;
	int32_t t96 = -3;

	t96 = (((x385<x386)<x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x390 = INT16_MAX;
	volatile int16_t x391 = INT16_MAX;
	int64_t x392 = -198270499718765510LL;
	volatile int32_t t97 = -1338;

	t97 = (((x389<x390)<x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 304985439701612523LLU;
	int64_t x394 = -11932484535LL;
	int64_t x395 = -43336LL;
	int32_t t98 = 2542;

	t98 = (((x393<x394)<x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MIN;
	int32_t t99 = -706254204;

	t99 = (((x397<x398)<x399)==x400);

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
