#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
uint8_t x15 = 0U;
int16_t x19 = INT16_MIN;
int8_t x29 = -6;
static int16_t x39 = 667;
static volatile uint32_t x40 = 10U;
static int16_t x53 = INT16_MIN;
volatile int32_t x58 = INT32_MIN;
int64_t x62 = INT64_MIN;
uint32_t x64 = 168190U;
int32_t x77 = -1;
volatile int16_t x82 = INT16_MIN;
uint16_t x83 = 1U;
int16_t x84 = INT16_MIN;
int32_t t20 = -79865;
int16_t x86 = INT16_MAX;
int16_t x103 = INT16_MAX;
uint8_t x109 = 11U;
static int64_t x119 = INT64_MIN;
static volatile uint64_t t29 = 217804640358LLU;
int64_t t31 = -5043275283277232LL;
uint16_t x129 = 9U;
int8_t x130 = -1;
uint32_t x131 = 882368426U;
static int32_t x134 = INT32_MIN;
static volatile uint16_t x157 = 12583U;
static volatile int8_t x166 = -60;
int8_t x175 = INT8_MIN;
int32_t x176 = 102328111;
int16_t x178 = INT16_MAX;
int8_t x189 = INT8_MIN;
int8_t x194 = 0;
int16_t x196 = -1;
static uint64_t x197 = 8976626355711LLU;
uint32_t t49 = 815784438U;
static volatile int16_t x211 = 16;
int64_t x212 = INT64_MIN;
int64_t x213 = INT64_MAX;
static int8_t x218 = INT8_MIN;
int32_t x221 = INT32_MAX;
int64_t x224 = 32372129929LL;
volatile uint16_t x226 = UINT16_MAX;
volatile uint32_t t56 = 403774589U;
int32_t t57 = 8;
static volatile int16_t x234 = INT16_MIN;
uint16_t x239 = UINT16_MAX;
static int32_t x240 = -362828447;
static volatile uint32_t x241 = 3880U;
uint64_t x244 = UINT64_MAX;
uint32_t x245 = UINT32_MAX;
int32_t x250 = 22448535;
int32_t x258 = -27421516;
int16_t x264 = 1193;
int32_t t68 = -301;
int32_t x278 = INT32_MIN;
int8_t x282 = 1;
static int32_t x283 = -1;
static uint64_t x288 = 24790952427749691LLU;
volatile int32_t x290 = -7554797;
int32_t x291 = INT32_MIN;
static uint64_t x294 = 603LLU;
volatile int16_t x295 = INT16_MIN;
static volatile uint64_t x302 = 92LLU;
uint32_t x303 = 15278U;
uint8_t x305 = 1U;
uint64_t x308 = 954754494LLU;
uint8_t x310 = 5U;
int32_t t78 = 1520248;
uint32_t x319 = 776U;
uint16_t x321 = UINT16_MAX;
uint32_t x324 = UINT32_MAX;
static volatile int32_t x325 = INT32_MAX;
static volatile uint16_t x328 = 63U;
uint64_t x329 = UINT64_MAX;
static volatile int64_t x331 = INT64_MIN;
int8_t x336 = INT8_MIN;
int16_t x348 = -3670;
uint8_t x349 = 0U;
uint8_t x352 = 11U;
volatile int8_t x353 = -1;
volatile uint32_t x354 = UINT32_MAX;
uint8_t x356 = 61U;
int32_t x359 = -235274;
volatile uint8_t x364 = UINT8_MAX;
volatile int8_t x371 = 1;
static int32_t t92 = -1;
uint16_t x376 = 11U;
uint32_t x378 = 511861300U;
int64_t x381 = -33LL;
volatile int32_t x382 = INT32_MAX;
int8_t x386 = INT8_MAX;
int32_t x388 = INT32_MAX;
int8_t x398 = INT8_MAX;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint8_t x2 = 0U;
	int32_t x3 = INT32_MAX;
	static int32_t t0 = -765;

	t0 = (((x1<x2)<x3)&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 5658U;
	static int64_t x6 = -113696018211LL;
	static int32_t x7 = -1;
	uint32_t x8 = 5033U;
	volatile uint32_t t1 = 138471911U;

	t1 = (((x5<x6)<x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile int32_t x10 = INT32_MIN;
	static int32_t x11 = -1;
	uint16_t x12 = 2U;
	static int32_t t2 = -88;

	t2 = (((x9<x10)<x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1312573140417334LL;
	uint64_t x14 = 3636359050LLU;
	int8_t x16 = -3;
	int32_t t3 = 883445969;

	t3 = (((x13<x14)<x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int8_t x18 = -1;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 732554606;

	t4 = (((x17<x18)<x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = -1;
	int32_t x23 = -1;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = -3065834;

	t5 = (((x21<x22)<x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 17U;
	uint64_t x26 = 247661044157653357LLU;
	volatile int8_t x27 = -1;
	int8_t x28 = -13;
	static volatile int32_t t6 = 30861;

	t6 = (((x25<x26)<x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	int16_t x31 = -1;
	volatile int32_t x32 = -22762;
	volatile int32_t t7 = -319667;

	t7 = (((x29<x30)<x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -7156;
	static int16_t x34 = -1;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 2019;

	t8 = (((x33<x34)<x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 2;
	static int32_t x38 = -750283;
	volatile uint32_t t9 = 59U;

	t9 = (((x37<x38)<x39)&x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x42 = -1;
	volatile int8_t x43 = -62;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = -461165797251LL;

	t10 = (((x41<x42)<x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2U;
	static int16_t x46 = INT16_MAX;
	static int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = 2268LL;

	t11 = (((x45<x46)<x47)&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int8_t x50 = 0;
	uint16_t x51 = 18718U;
	static volatile uint16_t x52 = UINT16_MAX;
	int32_t t12 = -163;

	t12 = (((x49<x50)<x51)&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MAX;
	volatile int32_t x55 = 29299306;
	static int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -8708;

	t13 = (((x53<x54)<x55)&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile int8_t x59 = INT8_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -41801;

	t14 = (((x57<x58)<x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x63 = INT8_MIN;
	static uint32_t t15 = 1640470972U;

	t15 = (((x61<x62)<x63)&x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x66 = 25146;
	int8_t x67 = INT8_MIN;
	int8_t x68 = 1;
	volatile int32_t t16 = 28;

	t16 = (((x65<x66)<x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = -1;
	int32_t x71 = 357403;
	uint8_t x72 = 3U;
	int32_t t17 = -1;

	t17 = (((x69<x70)<x71)&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 1;
	volatile int8_t x74 = INT8_MIN;
	int8_t x75 = 1;
	int64_t x76 = 644857258LL;
	volatile int64_t t18 = 5223227LL;

	t18 = (((x73<x74)<x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x78 = 31;
	int64_t x79 = 36290452LL;
	uint16_t x80 = 140U;
	volatile int32_t t19 = -348;

	t19 = (((x77<x78)<x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;

	t20 = (((x81<x82)<x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1572508115U;
	static uint16_t x87 = UINT16_MAX;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t21 = -80;

	t21 = (((x85<x86)<x87)&x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int32_t x90 = INT32_MIN;
	static int8_t x91 = -1;
	int64_t x92 = -1LL;
	volatile int64_t t22 = -1564594246945LL;

	t22 = (((x89<x90)<x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = UINT64_MAX;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 3U;
	volatile int32_t t23 = -10;

	t23 = (((x93<x94)<x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 12954345LLU;
	volatile int32_t x98 = -1;
	int8_t x99 = 6;
	uint8_t x100 = 0U;
	volatile int32_t t24 = 0;

	t24 = (((x97<x98)<x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 0;
	int8_t x102 = -26;
	uint8_t x104 = 2U;
	static volatile int32_t t25 = -7;

	t25 = (((x101<x102)<x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	volatile int32_t x106 = -31250;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = -42;

	t26 = (((x105<x106)<x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	int64_t x111 = -5325470215158078LL;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 6027;

	t27 = (((x109<x110)<x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint32_t x114 = 281850U;
	int16_t x115 = INT16_MAX;
	int8_t x116 = 14;
	int32_t t28 = -126765137;

	t28 = (((x113<x114)<x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -18148LL;
	volatile uint16_t x118 = 30249U;
	static uint64_t x120 = 756316744981672554LLU;

	t29 = (((x117<x118)<x119)&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 4798178;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = 26U;
	uint8_t x124 = 3U;
	volatile int32_t t30 = 28857;

	t30 = (((x121<x122)<x123)&x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 19572507U;
	uint32_t x126 = 27U;
	static uint8_t x127 = UINT8_MAX;
	int64_t x128 = -1LL;

	t31 = (((x125<x126)<x127)&x128);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x132 = 469U;
	static volatile uint32_t t32 = 417687U;

	t32 = (((x129<x130)<x131)&x132);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;
	uint64_t t33 = 165389157271LLU;

	t33 = (((x133<x134)<x135)&x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MAX;
	static int16_t x139 = -1;
	static int64_t x140 = 5156972LL;
	volatile int64_t t34 = -116680266199335250LL;

	t34 = (((x137<x138)<x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = -210774;
	uint64_t x143 = 14591335796LLU;
	uint16_t x144 = 147U;
	static volatile int32_t t35 = 1506861;

	t35 = (((x141<x142)<x143)&x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = -1;
	static uint8_t x147 = 0U;
	uint64_t x148 = 14951766618LLU;
	volatile uint64_t t36 = 11121543139LLU;

	t36 = (((x145<x146)<x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static uint32_t x150 = UINT32_MAX;
	static uint64_t x151 = 46501LLU;
	static volatile int8_t x152 = INT8_MAX;
	int32_t t37 = 1926730;

	t37 = (((x149<x150)<x151)&x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -6066;
	int32_t x154 = INT32_MAX;
	int64_t x155 = 26046885461052LL;
	int8_t x156 = 1;
	static volatile int32_t t38 = 442;

	t38 = (((x153<x154)<x155)&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 495;
	uint16_t x159 = 1U;
	uint32_t x160 = 451416032U;
	uint32_t t39 = 24666U;

	t39 = (((x157<x158)<x159)&x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 5107U;
	uint64_t x162 = 12058LLU;
	volatile int64_t x163 = INT64_MIN;
	static int8_t x164 = 1;
	volatile int32_t t40 = -11184962;

	t40 = (((x161<x162)<x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	uint16_t x167 = 338U;
	int32_t x168 = INT32_MAX;
	int32_t t41 = -76;

	t41 = (((x165<x166)<x167)&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = 4968LL;
	volatile int16_t x170 = INT16_MIN;
	static int8_t x171 = INT8_MAX;
	int8_t x172 = -1;
	volatile int32_t t42 = -150;

	t42 = (((x169<x170)<x171)&x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 15;
	int32_t x174 = 525907497;
	static volatile int32_t t43 = -1294552;

	t43 = (((x173<x174)<x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	volatile int64_t x179 = INT64_MAX;
	int64_t x180 = -2290208574918757LL;
	volatile int64_t t44 = 30198LL;

	t44 = (((x177<x178)<x179)&x180);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -430062908LL;
	int64_t x182 = -1LL;
	static int8_t x183 = 37;
	int64_t x184 = -1LL;
	int64_t t45 = 702239449180111487LL;

	t45 = (((x181<x182)<x183)&x184);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x185 = 6088U;
	volatile int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	volatile uint8_t x188 = 2U;
	static int32_t t46 = 992718718;

	t46 = (((x185<x186)<x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = -10123LL;
	static uint8_t x191 = 0U;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t47 = 1981;

	t47 = (((x189<x190)<x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	uint64_t x195 = 9129584629954319806LLU;
	static volatile int32_t t48 = 149146575;

	t48 = (((x193<x194)<x195)&x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	static volatile int32_t x199 = -1512;
	uint32_t x200 = UINT32_MAX;

	t49 = (((x197<x198)<x199)&x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int16_t x202 = 1;
	static int32_t x203 = INT32_MIN;
	int16_t x204 = 63;
	static int32_t t50 = 144;

	t50 = (((x201<x202)<x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = -1;
	static uint16_t x208 = UINT16_MAX;
	static volatile int32_t t51 = -429;

	t51 = (((x205<x206)<x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 16027U;
	volatile uint16_t x210 = UINT16_MAX;
	volatile int64_t t52 = -231LL;

	t52 = (((x209<x210)<x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x214 = 7063359728083099LLU;
	volatile int64_t x215 = INT64_MAX;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t53 = 1345190338446597395LLU;

	t53 = (((x213<x214)<x215)&x216);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	int16_t x219 = 28;
	static uint64_t x220 = 1778972LLU;
	volatile uint64_t t54 = 780770264569891LLU;

	t54 = (((x217<x218)<x219)&x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = 2473643088633094LL;
	static uint16_t x223 = 212U;
	volatile int64_t t55 = 489440949103373665LL;

	t55 = (((x221<x222)<x223)&x224);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 804U;
	volatile int32_t x227 = -19802302;
	uint32_t x228 = 44U;

	t56 = (((x225<x226)<x227)&x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = UINT16_MAX;
	uint64_t x230 = UINT64_MAX;
	uint64_t x231 = 47632LLU;
	uint16_t x232 = 4U;

	t57 = (((x229<x230)<x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 7U;
	uint32_t x235 = 91976935U;
	static int8_t x236 = -1;
	volatile int32_t t58 = 194;

	t58 = (((x233<x234)<x235)&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 8898302618615879LLU;
	volatile uint64_t x238 = 1LLU;
	volatile int32_t t59 = -3370;

	t59 = (((x237<x238)<x239)&x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MAX;
	static uint64_t t60 = 629659707969LLU;

	t60 = (((x241<x242)<x243)&x244);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	int16_t x247 = -2;
	uint64_t x248 = 96631782704LLU;
	volatile uint64_t t61 = 0LLU;

	t61 = (((x245<x246)<x247)&x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int64_t x251 = INT64_MIN;
	volatile int64_t x252 = INT64_MIN;
	static volatile int64_t t62 = 2LL;

	t62 = (((x249<x250)<x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = -1;
	int64_t x254 = INT64_MAX;
	volatile uint16_t x255 = 0U;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -1522;

	t63 = (((x253<x254)<x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile int16_t x259 = 1;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = 0;

	t64 = (((x257<x258)<x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	uint32_t x262 = 162987365U;
	uint8_t x263 = 5U;
	int32_t t65 = 980037719;

	t65 = (((x261<x262)<x263)&x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 6U;
	int8_t x266 = -1;
	int32_t x267 = 845304463;
	static int16_t x268 = INT16_MAX;
	static volatile int32_t t66 = 27852;

	t66 = (((x265<x266)<x267)&x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MAX;
	static int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	static int32_t x272 = -1;
	int32_t t67 = -13375;

	t67 = (((x269<x270)<x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	static int64_t x274 = INT64_MAX;
	static int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MIN;

	t68 = (((x273<x274)<x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = -13;
	int32_t t69 = -1949740;

	t69 = (((x277<x278)<x279)&x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 15U;
	int64_t x284 = INT64_MIN;
	int64_t t70 = -454LL;

	t70 = (((x281<x282)<x283)&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 3031U;
	int16_t x286 = 1131;
	volatile uint8_t x287 = 59U;
	uint64_t t71 = 2627096815LLU;

	t71 = (((x285<x286)<x287)&x288);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 1525377;

	t72 = (((x289<x290)<x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int64_t x296 = INT64_MIN;
	int64_t t73 = -2949813747324939LL;

	t73 = (((x293<x294)<x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = UINT16_MAX;
	static volatile uint64_t x299 = 16160247817593LLU;
	static volatile int32_t x300 = -6392625;
	volatile int32_t t74 = -1032180190;

	t74 = (((x297<x298)<x299)&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 1780394875443LL;
	static int8_t x304 = INT8_MIN;
	int32_t t75 = 132728669;

	t75 = (((x301<x302)<x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x306 = 2760254;
	volatile uint32_t x307 = UINT32_MAX;
	uint64_t t76 = 105939461615895728LLU;

	t76 = (((x305<x306)<x307)&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	static int64_t x311 = INT64_MIN;
	int16_t x312 = -27;
	int32_t t77 = 2496169;

	t77 = (((x309<x310)<x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = 172230514LLU;
	static int16_t x314 = -1818;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = 1;

	t78 = (((x313<x314)<x315)&x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	static uint8_t x318 = 46U;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t79 = -1;

	t79 = (((x317<x318)<x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = 15U;
	uint16_t x323 = 330U;
	volatile uint32_t t80 = 7902U;

	t80 = (((x321<x322)<x323)&x324);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -4764923;
	uint16_t x327 = 4523U;
	volatile int32_t t81 = 70983;

	t81 = (((x325<x326)<x327)&x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 22U;
	volatile int16_t x332 = INT16_MIN;
	static int32_t t82 = -83444053;

	t82 = (((x329<x330)<x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 4U;
	int8_t x335 = -1;
	int32_t t83 = 676;

	t83 = (((x333<x334)<x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	static volatile int16_t x338 = -1;
	int32_t x339 = 58583;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t84 = 1943U;

	t84 = (((x337<x338)<x339)&x340);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = UINT32_MAX;
	int16_t x342 = 16;
	uint16_t x343 = 6U;
	uint64_t x344 = 49LLU;
	static uint64_t t85 = 149230348878815LLU;

	t85 = (((x341<x342)<x343)&x344);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 7173043LLU;
	static int8_t x346 = -1;
	volatile uint32_t x347 = 100U;
	int32_t t86 = 259119677;

	t86 = (((x345<x346)<x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	int64_t x351 = 238LL;
	static volatile int32_t t87 = -65;

	t87 = (((x349<x350)<x351)&x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x355 = 2576U;
	int32_t t88 = -86733;

	t88 = (((x353<x354)<x355)&x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 77U;
	uint32_t x358 = UINT32_MAX;
	volatile int64_t x360 = INT64_MAX;
	int64_t t89 = 326LL;

	t89 = (((x357<x358)<x359)&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	volatile uint8_t x362 = 121U;
	uint8_t x363 = UINT8_MAX;
	int32_t t90 = 120937847;

	t90 = (((x361<x362)<x363)&x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -31892428LL;
	volatile int64_t x366 = INT64_MAX;
	volatile int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -322;

	t91 = (((x365<x366)<x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	uint16_t x370 = 2036U;
	int32_t x372 = 517697295;

	t92 = (((x369<x370)<x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	uint64_t x374 = 2LLU;
	int64_t x375 = INT64_MIN;
	int32_t t93 = 261049;

	t93 = (((x373<x374)<x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile uint64_t x379 = 17095970518LLU;
	static int64_t x380 = 0LL;
	volatile int64_t t94 = 41001531LL;

	t94 = (((x377<x378)<x379)&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x383 = 79U;
	static volatile uint32_t x384 = 173712U;
	volatile uint32_t t95 = 19274666U;

	t95 = (((x381<x382)<x383)&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	static uint8_t x387 = 1U;
	int32_t t96 = -43;

	t96 = (((x385<x386)<x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 2187852U;
	volatile int32_t x390 = INT32_MIN;
	int64_t x391 = -8227814229LL;
	volatile uint64_t x392 = 54LLU;
	uint64_t t97 = 470240LLU;

	t97 = (((x389<x390)<x391)&x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 11U;
	int32_t x394 = 101;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -1;

	t98 = (((x393<x394)<x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 7;
	static int16_t x399 = INT16_MIN;
	volatile uint64_t x400 = 299LLU;
	uint64_t t99 = 3678LLU;

	t99 = (((x397<x398)<x399)&x400);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

