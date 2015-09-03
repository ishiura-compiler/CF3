#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int32_t x8 = INT32_MIN;
int64_t x9 = 254862456934051864LL;
int16_t x16 = INT16_MIN;
static int32_t x18 = -1;
static uint64_t x19 = 43156181LLU;
uint16_t x24 = UINT16_MAX;
uint32_t x30 = 57U;
int8_t x32 = INT8_MIN;
int8_t x34 = INT8_MIN;
int32_t t8 = 9539744;
static volatile int32_t t9 = 456;
int32_t t10 = 41;
int16_t x45 = INT16_MIN;
static uint8_t x46 = UINT8_MAX;
int32_t t13 = -126811;
static uint16_t x59 = UINT16_MAX;
volatile int32_t t14 = -30;
int16_t x61 = INT16_MIN;
uint64_t x75 = 1754079LLU;
uint32_t x81 = 2U;
int32_t t20 = 37987113;
static volatile int64_t x92 = INT64_MIN;
uint32_t x97 = 3591U;
uint32_t x105 = UINT32_MAX;
int8_t x109 = -1;
int32_t x120 = -15274;
static int8_t x128 = INT8_MIN;
volatile uint16_t x132 = 1U;
int32_t x134 = -1;
uint16_t x136 = 31461U;
static int16_t x143 = 105;
int32_t t35 = 541552520;
uint16_t x149 = UINT16_MAX;
static volatile int32_t x153 = 0;
int16_t x154 = -1;
int16_t x159 = 9895;
int64_t x161 = -1LL;
int8_t x168 = INT8_MIN;
volatile int32_t t41 = 8;
int32_t t42 = 314000711;
int32_t x174 = INT32_MIN;
volatile int8_t x179 = INT8_MIN;
uint64_t x183 = UINT64_MAX;
int32_t t45 = 778;
uint32_t x185 = 7474845U;
volatile uint16_t x188 = 59U;
int32_t t47 = 3;
uint16_t x195 = 0U;
static volatile int32_t t48 = 95851;
volatile uint32_t x198 = UINT32_MAX;
volatile int32_t t49 = 0;
int64_t x209 = INT64_MIN;
static int32_t t53 = -95081;
volatile uint64_t x233 = 62223139LLU;
int8_t x239 = INT8_MAX;
int32_t t59 = 5494;
int32_t x242 = INT32_MIN;
int32_t x246 = INT32_MIN;
int64_t x247 = 245418610LL;
int16_t x250 = 1;
int64_t x251 = INT64_MIN;
uint8_t x252 = 0U;
int32_t x253 = -8485394;
static int16_t x254 = INT16_MAX;
int16_t x255 = INT16_MIN;
int64_t x258 = -50861686679141861LL;
uint16_t x262 = UINT16_MAX;
uint16_t x263 = 2U;
uint16_t x265 = 1U;
int64_t x268 = INT64_MAX;
int16_t x269 = 152;
static int64_t x274 = INT64_MIN;
int16_t x279 = -1;
int8_t x285 = -31;
static int8_t x286 = -1;
static int32_t t72 = 1;
static uint32_t x298 = UINT32_MAX;
uint16_t x300 = 3U;
uint32_t x302 = 3776U;
uint16_t x315 = 181U;
int64_t x316 = INT64_MIN;
static volatile uint8_t x320 = 123U;
volatile uint64_t x324 = UINT64_MAX;
static int16_t x325 = INT16_MIN;
volatile int32_t t81 = 0;
uint8_t x329 = 107U;
uint64_t x330 = 135743248569LLU;
uint16_t x331 = 0U;
volatile int32_t t82 = -983;
int32_t x334 = INT32_MAX;
uint8_t x335 = 59U;
volatile int64_t x340 = INT64_MIN;
int64_t x342 = 1647009LL;
volatile int8_t x351 = -1;
uint8_t x354 = UINT8_MAX;
int8_t x366 = INT8_MIN;
volatile int32_t t91 = -659673668;
int32_t x371 = INT32_MAX;
static int8_t x373 = -14;
volatile int32_t x375 = -597;
static volatile uint32_t x378 = UINT32_MAX;
volatile int32_t t94 = 3059;
static int32_t x383 = -3;
int16_t x384 = -1;
uint32_t x389 = 1166089U;
int32_t t97 = 7944;
uint8_t x394 = UINT8_MAX;
static uint64_t x395 = 48793526LLU;
volatile int32_t t99 = -50;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	uint64_t x2 = UINT64_MAX;
	int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = -10761;

	t0 = (((x1<x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	volatile int64_t x6 = INT64_MAX;
	static uint8_t x7 = 10U;
	volatile int32_t t1 = 53546;

	t1 = (((x5<x6)<x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = INT32_MIN;
	volatile int64_t x11 = -1LL;
	volatile int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -6;

	t2 = (((x9<x10)<x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 1425957152LLU;
	uint64_t x14 = 733207LLU;
	int64_t x15 = 1LL;
	volatile int32_t t3 = -135060387;

	t3 = (((x13<x14)<x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 10811;

	t4 = (((x17<x18)<x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 27U;
	int32_t x22 = INT32_MIN;
	uint32_t x23 = 2695065U;
	volatile int32_t t5 = 113543;

	t5 = (((x21<x22)<x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int64_t x26 = -109429162620386LL;
	volatile int32_t x27 = -1;
	volatile int64_t x28 = 65329955148894340LL;
	volatile int32_t t6 = -12;

	t6 = (((x25<x26)<x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile uint16_t x31 = 3446U;
	int32_t t7 = -4109244;

	t7 = (((x29<x30)<x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 612477866445LLU;
	int16_t x35 = INT16_MAX;
	static int16_t x36 = INT16_MIN;

	t8 = (((x33<x34)<x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 4241328404830631440LLU;
	uint64_t x38 = 55042LLU;
	uint64_t x39 = 2625735LLU;
	uint16_t x40 = UINT16_MAX;

	t9 = (((x37<x38)<x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 118;
	uint32_t x42 = 309U;
	static int8_t x43 = INT8_MIN;
	static uint16_t x44 = UINT16_MAX;

	t10 = (((x41<x42)<x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = -1;
	int32_t t11 = -63639;

	t11 = (((x45<x46)<x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static uint32_t x50 = 14951U;
	static int64_t x51 = 354788LL;
	volatile int32_t x52 = -67210;
	int32_t t12 = 853;

	t12 = (((x49<x50)<x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;

	t13 = (((x53<x54)<x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static int32_t x58 = INT32_MAX;
	int64_t x60 = -62266240203384LL;

	t14 = (((x57<x58)<x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x62 = 120U;
	int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = -12;

	t15 = (((x61<x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = INT32_MAX;
	int32_t x67 = -1;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 20;

	t16 = (((x65<x66)<x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -28LL;
	volatile int32_t t17 = -983;

	t17 = (((x69<x70)<x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	uint8_t x74 = UINT8_MAX;
	volatile uint8_t x76 = 1U;
	volatile int32_t t18 = -450793;

	t18 = (((x73<x74)<x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 1LL;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MIN;
	volatile int16_t x80 = 60;
	int32_t t19 = 2139223;

	t19 = (((x77<x78)<x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = INT16_MAX;
	int32_t x83 = -1;
	int64_t x84 = INT64_MIN;

	t20 = (((x81<x82)<x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -136021588669132LL;
	volatile uint64_t x86 = 44809308054LLU;
	int64_t x87 = INT64_MAX;
	int32_t x88 = 6003;
	volatile int32_t t21 = -54403;

	t21 = (((x85<x86)<x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	static int64_t x90 = -23396LL;
	uint32_t x91 = 5751U;
	int32_t t22 = -45;

	t22 = (((x89<x90)<x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = -1LL;
	static uint8_t x94 = 1U;
	volatile int8_t x95 = 24;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 23657326;

	t23 = (((x93<x94)<x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -311232917LL;
	int8_t x100 = -1;
	volatile int32_t t24 = 4921;

	t24 = (((x97<x98)<x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	volatile uint8_t x102 = UINT8_MAX;
	int16_t x103 = -10788;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -6;

	t25 = (((x101<x102)<x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = INT8_MAX;
	int16_t x108 = INT16_MAX;
	int32_t t26 = 634;

	t26 = (((x105<x106)<x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	int32_t x111 = 1;
	uint8_t x112 = 10U;
	int32_t t27 = 12289141;

	t27 = (((x109<x110)<x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static int16_t x114 = -370;
	volatile int8_t x115 = -1;
	uint16_t x116 = 15U;
	static int32_t t28 = 7071;

	t28 = (((x113<x114)<x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int8_t x119 = -27;
	int32_t t29 = 241;

	t29 = (((x117<x118)<x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 16U;
	static int32_t x122 = -1;
	uint32_t x123 = 864U;
	uint64_t x124 = 31722568827LLU;
	volatile int32_t t30 = 150689342;

	t30 = (((x121<x122)<x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	int32_t t31 = 248465;

	t31 = (((x125<x126)<x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	volatile int32_t t32 = -2;

	t32 = (((x129<x130)<x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 380246445839LLU;
	volatile int8_t x135 = INT8_MIN;
	volatile int32_t t33 = 171288656;

	t33 = (((x133<x134)<x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -1;
	static volatile int64_t x138 = -68483384904274518LL;
	uint32_t x139 = 579U;
	static volatile int16_t x140 = INT16_MIN;
	int32_t t34 = 27162;

	t34 = (((x137<x138)<x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MAX;
	int32_t x144 = -1;

	t35 = (((x141<x142)<x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = UINT16_MAX;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -6;

	t36 = (((x145<x146)<x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = 0;
	volatile int32_t t37 = -26;

	t37 = (((x149<x150)<x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x155 = UINT8_MAX;
	uint32_t x156 = 44278U;
	volatile int32_t t38 = 112;

	t38 = (((x153<x154)<x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -82649;
	uint32_t x158 = UINT32_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -63295481;

	t39 = (((x157<x158)<x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -1;
	volatile int16_t x163 = 2;
	int64_t x164 = 4LL;
	volatile int32_t t40 = 10994916;

	t40 = (((x161<x162)<x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 0U;
	int64_t x166 = INT64_MAX;
	static volatile uint8_t x167 = 2U;

	t41 = (((x165<x166)<x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 1;
	int64_t x170 = 1950941717683272847LL;
	volatile uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 2827U;

	t42 = (((x169<x170)<x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 3481837492005636085LLU;
	int32_t x175 = -120;
	int16_t x176 = INT16_MIN;
	static int32_t t43 = -18623689;

	t43 = (((x173<x174)<x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint64_t x178 = 24LLU;
	volatile int32_t x180 = -1;
	int32_t t44 = -2;

	t44 = (((x177<x178)<x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	volatile uint32_t x184 = 28768724U;

	t45 = (((x181<x182)<x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	volatile int32_t t46 = 5462;

	t46 = (((x185<x186)<x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile int16_t x190 = INT16_MIN;
	uint8_t x191 = 113U;
	uint32_t x192 = 5409U;

	t47 = (((x189<x190)<x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint8_t x194 = 30U;
	volatile uint16_t x196 = 9249U;

	t48 = (((x193<x194)<x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -1;
	static volatile uint32_t x199 = 1725407U;
	static uint8_t x200 = 85U;

	t49 = (((x197<x198)<x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int8_t x202 = 27;
	uint64_t x203 = 8532654061LLU;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -12;

	t50 = (((x201<x202)<x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = UINT8_MAX;
	uint16_t x206 = UINT16_MAX;
	volatile uint8_t x207 = 63U;
	int16_t x208 = INT16_MAX;
	static int32_t t51 = 378;

	t51 = (((x205<x206)<x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x210 = INT16_MIN;
	volatile int16_t x211 = INT16_MAX;
	uint32_t x212 = 1018674509U;
	int32_t t52 = -2474216;

	t52 = (((x209<x210)<x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = INT32_MIN;

	t53 = (((x213<x214)<x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 1U;
	volatile int32_t t54 = 1;

	t54 = (((x217<x218)<x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	uint64_t x222 = 14673LLU;
	uint16_t x223 = 38U;
	volatile int16_t x224 = INT16_MAX;
	static volatile int32_t t55 = 30779321;

	t55 = (((x221<x222)<x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 8U;
	uint32_t x226 = UINT32_MAX;
	int32_t x227 = INT32_MIN;
	static uint8_t x228 = 6U;
	volatile int32_t t56 = 289063413;

	t56 = (((x225<x226)<x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	static int8_t x231 = -1;
	static uint32_t x232 = UINT32_MAX;
	int32_t t57 = -478414;

	t57 = (((x229<x230)<x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	static uint64_t x235 = UINT64_MAX;
	int32_t x236 = -673631265;
	static int32_t t58 = 549;

	t58 = (((x233<x234)<x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int16_t x238 = INT16_MIN;
	int8_t x240 = -1;

	t59 = (((x237<x238)<x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	static int8_t x243 = 1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -62379729;

	t60 = (((x241<x242)<x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 497U;
	static uint16_t x248 = 4030U;
	volatile int32_t t61 = 595846;

	t61 = (((x245<x246)<x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 3796;
	int32_t t62 = -331;

	t62 = (((x249<x250)<x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x256 = 280U;
	volatile int32_t t63 = 0;

	t63 = (((x253<x254)<x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x259 = UINT8_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 1592;

	t64 = (((x257<x258)<x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	static volatile int8_t x264 = INT8_MIN;
	int32_t t65 = -254;

	t65 = (((x261<x262)<x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	volatile int32_t t66 = -49;

	t66 = (((x265<x266)<x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -1;
	int8_t x271 = -1;
	int32_t x272 = -1;
	volatile int32_t t67 = -317287298;

	t67 = (((x269<x270)<x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	volatile int32_t x275 = -1;
	static int32_t x276 = -1;
	int32_t t68 = 173416;

	t68 = (((x273<x274)<x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 1;
	uint16_t x278 = UINT16_MAX;
	static volatile int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 98960709;

	t69 = (((x277<x278)<x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 1;
	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;
	static uint16_t x284 = UINT16_MAX;
	int32_t t70 = -62;

	t70 = (((x281<x282)<x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x287 = UINT32_MAX;
	static volatile int16_t x288 = -20;
	volatile int32_t t71 = 1;

	t71 = (((x285<x286)<x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = 1879483918LLU;
	uint64_t x292 = 11011691417947777LLU;

	t72 = (((x289<x290)<x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int32_t x294 = -9;
	volatile int32_t x295 = INT32_MAX;
	int16_t x296 = 363;
	volatile int32_t t73 = 4590;

	t73 = (((x293<x294)<x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 68736609975801LLU;
	static int32_t x299 = -1;
	static volatile int32_t t74 = -3022123;

	t74 = (((x297<x298)<x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int64_t x303 = 5374134347058LL;
	int8_t x304 = -1;
	int32_t t75 = -200217;

	t75 = (((x301<x302)<x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = UINT64_MAX;
	static int32_t x306 = INT32_MIN;
	int32_t x307 = 24;
	int8_t x308 = 6;
	int32_t t76 = 91;

	t76 = (((x305<x306)<x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile uint8_t x310 = UINT8_MAX;
	int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = -1;

	t77 = (((x309<x310)<x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	static int16_t x314 = INT16_MIN;
	int32_t t78 = 0;

	t78 = (((x313<x314)<x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	volatile uint8_t x318 = 28U;
	int32_t x319 = -1;
	int32_t t79 = -3;

	t79 = (((x317<x318)<x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = INT32_MAX;
	uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 0U;
	static int32_t t80 = -474242324;

	t80 = (((x321<x322)<x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x326 = UINT8_MAX;
	static int8_t x327 = -1;
	uint64_t x328 = 3LLU;

	t81 = (((x325<x326)<x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x332 = 7950;

	t82 = (((x329<x330)<x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -85;
	static int8_t x336 = INT8_MIN;
	int32_t t83 = 259654657;

	t83 = (((x333<x334)<x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int32_t x338 = INT32_MAX;
	volatile int16_t x339 = INT16_MAX;
	int32_t t84 = -12338;

	t84 = (((x337<x338)<x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x343 = 50624U;
	int64_t x344 = -1LL;
	int32_t t85 = -618399429;

	t85 = (((x341<x342)<x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 28344U;
	static int8_t x346 = 0;
	static int16_t x347 = INT16_MIN;
	static int64_t x348 = INT64_MIN;
	int32_t t86 = 6;

	t86 = (((x345<x346)<x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 21U;
	uint64_t x350 = UINT64_MAX;
	int32_t x352 = INT32_MAX;
	int32_t t87 = -460579;

	t87 = (((x349<x350)<x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -3;
	volatile uint64_t x355 = UINT64_MAX;
	volatile uint32_t x356 = 75230104U;
	int32_t t88 = -11069025;

	t88 = (((x353<x354)<x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = UINT8_MAX;
	int16_t x358 = -1;
	int32_t x359 = -1;
	int16_t x360 = INT16_MAX;
	int32_t t89 = 16064771;

	t89 = (((x357<x358)<x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile uint64_t x362 = 2076509884326278LLU;
	uint8_t x363 = 58U;
	int8_t x364 = -1;
	volatile int32_t t90 = -15208;

	t90 = (((x361<x362)<x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 47;
	uint64_t x367 = 141997114169876LLU;
	int16_t x368 = 1;

	t91 = (((x365<x366)<x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	uint8_t x370 = 2U;
	uint32_t x372 = 16264U;
	int32_t t92 = -163041;

	t92 = (((x369<x370)<x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = 15966LL;
	int32_t x376 = INT32_MAX;
	int32_t t93 = -47482;

	t93 = (((x373<x374)<x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x379 = UINT8_MAX;
	static int16_t x380 = 6;

	t94 = (((x377<x378)<x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 6094LLU;
	uint8_t x382 = UINT8_MAX;
	volatile int32_t t95 = -121687;

	t95 = (((x381<x382)<x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 2320820LL;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 1U;
	int16_t x388 = 157;
	volatile int32_t t96 = -466;

	t96 = (((x385<x386)<x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	int32_t x391 = 0;
	int16_t x392 = -4;

	t97 = (((x389<x390)<x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 7946308U;
	volatile int32_t x396 = INT32_MAX;
	volatile int32_t t98 = -1674;

	t98 = (((x393<x394)<x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 1437;
	static volatile int32_t x398 = INT32_MAX;
	int64_t x399 = -1LL;
	uint32_t x400 = 853U;

	t99 = (((x397<x398)<x399)<=x400);

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

