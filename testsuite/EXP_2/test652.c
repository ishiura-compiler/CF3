#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x14 = 6U;
int8_t x18 = 6;
uint16_t x28 = 6U;
volatile uint8_t x31 = UINT8_MAX;
volatile uint16_t x33 = UINT16_MAX;
static uint64_t x49 = 156LLU;
volatile int8_t x53 = -1;
int8_t x62 = -11;
uint16_t x64 = 52U;
uint32_t x72 = UINT32_MAX;
int64_t x73 = INT64_MIN;
int8_t x75 = INT8_MIN;
int32_t x79 = 1762;
int8_t x82 = INT8_MIN;
int16_t x85 = -1;
uint16_t x90 = UINT16_MAX;
static int32_t x93 = -1;
volatile uint16_t x94 = UINT16_MAX;
volatile int32_t x95 = -8186;
volatile int16_t x98 = INT16_MIN;
int64_t x100 = -3232600033LL;
static volatile uint64_t t23 = 260371316028794LLU;
int64_t x108 = INT64_MIN;
int8_t x114 = INT8_MAX;
int16_t x116 = INT16_MIN;
uint64_t x119 = 770771LLU;
static uint16_t x124 = 399U;
volatile uint16_t x127 = 8686U;
int64_t t30 = -7LL;
int32_t x133 = INT32_MIN;
uint64_t x139 = 7846217024832786LLU;
uint64_t t32 = 15LLU;
uint64_t x143 = 20078038320239364LLU;
int32_t x146 = 2489;
int8_t x147 = INT8_MAX;
static uint32_t x148 = 1577311465U;
static int64_t x151 = -772429100344038261LL;
uint64_t t35 = 171LLU;
static int8_t x172 = INT8_MAX;
int32_t t40 = 5492074;
uint64_t x180 = 12407030LLU;
volatile int64_t x185 = -794816509544LL;
uint8_t x188 = 0U;
uint64_t x189 = UINT64_MAX;
int64_t x191 = -427009LL;
static uint64_t t45 = 13LLU;
volatile uint64_t x193 = UINT64_MAX;
static int8_t x200 = INT8_MIN;
int32_t x204 = -1;
int32_t x205 = INT32_MAX;
static uint64_t x208 = UINT64_MAX;
uint8_t x218 = 7U;
uint64_t x220 = UINT64_MAX;
static uint64_t t52 = 332800549765487751LLU;
uint16_t x227 = 16U;
volatile uint64_t t53 = 105954LLU;
int64_t x239 = -314766757050LL;
int32_t x240 = 305;
int64_t t55 = -48412232254897493LL;
int16_t x243 = INT16_MAX;
uint64_t x244 = 136627287258472LLU;
volatile uint32_t t57 = 8U;
volatile uint16_t x252 = UINT16_MAX;
volatile int32_t x269 = -1;
int64_t t63 = -213891074LL;
int64_t x279 = -1LL;
int32_t x280 = INT32_MIN;
volatile int32_t x293 = 1;
int16_t x302 = -10;
volatile uint16_t x303 = 1U;
static int64_t x305 = INT64_MIN;
int64_t x306 = -1LL;
int32_t x308 = INT32_MAX;
volatile uint8_t x313 = UINT8_MAX;
int64_t x314 = INT64_MAX;
static int64_t t72 = 1469000026945832LL;
volatile int16_t x324 = -1;
int32_t x330 = INT32_MAX;
int16_t x331 = 41;
uint32_t x333 = 7U;
int32_t x334 = INT32_MAX;
volatile int8_t x340 = INT8_MIN;
static uint16_t x343 = UINT16_MAX;
int64_t x359 = 403049907231LL;
int32_t x366 = 0;
uint64_t t83 = 183544516LLU;
static int64_t t84 = INT64_MIN;
int8_t x373 = INT8_MIN;
int8_t x375 = INT8_MAX;
static uint32_t x377 = UINT32_MAX;
volatile int8_t x383 = INT8_MIN;
static int32_t x390 = INT32_MAX;
static uint32_t x399 = 2094980U;
volatile int16_t x400 = INT16_MAX;
uint64_t t91 = 8050161LLU;
volatile uint64_t x416 = UINT64_MAX;
static int64_t t96 = -5136012964690093LL;
int64_t x432 = 75LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 120U;
	static uint32_t x4 = 5636867U;
	static volatile int64_t t0 = 690469998250934299LL;

	t0 = ((x1|(x2/x3))-x4);

	if (t0 != -76861433646093332LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 31925855325617LL;
	uint64_t x6 = 3914608237LLU;
	int8_t x7 = -6;
	static uint8_t x8 = 1U;
	uint64_t t1 = 863LLU;

	t1 = ((x5|(x6/x7))-x8);

	if (t1 != 31925855325616LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	volatile uint32_t x10 = 1153795952U;
	int8_t x11 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	uint32_t t2 = 62U;

	t2 = ((x9|(x10/x11))-x12);

	if (t2 != 9117775U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 9805;
	int32_t x15 = 43679347;
	static volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -64;

	t3 = ((x13|(x14/x15))-x16);

	if (t3 != 9678) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -2;
	uint32_t x19 = UINT32_MAX;
	uint64_t x20 = 2912LLU;
	uint64_t t4 = 8LLU;

	t4 = ((x17|(x18/x19))-x20);

	if (t4 != 4294964382LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 1678LL;
	uint32_t x26 = 2575U;
	volatile uint16_t x27 = 1587U;
	volatile int64_t t5 = -323LL;

	t5 = ((x25|(x26/x27))-x28);

	if (t5 != 1673LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = 1532;
	static volatile uint64_t x30 = 116080191311916LLU;
	int64_t x32 = -1LL;
	static uint64_t t6 = 110547245LLU;

	t6 = ((x29|(x30/x31))-x32);

	if (t6 != 455216436734LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = -1;
	uint32_t x35 = 40819U;
	static int32_t x36 = INT32_MIN;
	uint32_t t7 = 273U;

	t7 = ((x33|(x34/x35))-x36);

	if (t7 != 2147614719U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	int8_t x42 = -1;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t8 = 15024;

	t8 = ((x41|(x42/x43))-x44);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MAX;
	volatile int32_t x46 = -280;
	int64_t x47 = 60626746893655435LL;
	uint8_t x48 = UINT8_MAX;
	static int64_t t9 = 3630424169190630742LL;

	t9 = ((x45|(x46/x47))-x48);

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x50 = 419877303510LL;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = 2449867;
	volatile uint64_t t10 = 411460279LLU;

	t10 = ((x49|(x50/x51))-x52);

	if (t10 != 18446744070426810324LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = 119162056U;
	int16_t x55 = -148;
	uint32_t x56 = 45790U;
	volatile uint32_t t11 = 620826U;

	t11 = ((x53|(x54/x55))-x56);

	if (t11 != 4294921505U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -64236543227885LL;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 1LLU;
	int8_t x60 = -40;
	static volatile uint64_t t12 = 231136474557618LLU;

	t12 = ((x57|(x58/x59))-x60);

	if (t12 != 18446679837166323771LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 58719596U;
	uint64_t x63 = 16534795LLU;
	static uint64_t t13 = 6843550736940LLU;

	t13 = ((x61|(x62/x63))-x64);

	if (t13 != 1115684863931LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MAX;
	static int8_t x66 = 8;
	int64_t x67 = 1LL;
	int32_t x68 = INT32_MIN;
	volatile int64_t t14 = -12259522877840LL;

	t14 = ((x65|(x66/x67))-x68);

	if (t14 != 2147516415LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 0;
	volatile int16_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	static uint32_t t15 = 14913072U;

	t15 = ((x69|(x70/x71))-x72);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x74 = 24U;
	static int16_t x76 = -1;
	int64_t t16 = 65512766826LL;

	t16 = ((x73|(x74/x75))-x76);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t17 = -1;

	t17 = ((x77|(x78/x79))-x80);

	if (t17 != -1185921) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 0;
	volatile int16_t x83 = INT16_MIN;
	uint32_t x84 = 117942438U;
	static volatile uint32_t t18 = 68560990U;

	t18 = ((x81|(x82/x83))-x84);

	if (t18 != 4177024858U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = -420;
	static volatile int32_t x87 = -1;
	int32_t x88 = INT32_MAX;
	int32_t t19 = INT32_MIN;

	t19 = ((x85|(x86/x87))-x88);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int16_t x91 = 10;
	volatile int8_t x92 = -2;
	int32_t t20 = -1;

	t20 = ((x89|(x90/x91))-x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x96 = INT32_MIN;
	static int32_t t21 = INT32_MAX;

	t21 = ((x93|(x94/x95))-x96);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	volatile uint16_t x99 = 34U;
	int64_t t22 = -3852247496285136089LL;

	t22 = ((x97|(x98/x99))-x100);

	if (t22 != 3232600032LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 13288LLU;
	volatile int8_t x102 = -62;
	int64_t x103 = 18728040684758273LL;
	volatile int8_t x104 = -2;

	t23 = ((x101|(x102/x103))-x104);

	if (t23 != 13290LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -5;
	static volatile int16_t x106 = 17;
	volatile int8_t x107 = INT8_MIN;
	volatile int64_t t24 = -325096LL;

	t24 = ((x105|(x106/x107))-x108);

	if (t24 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 0LLU;
	int64_t x110 = INT64_MIN;
	int32_t x111 = 775992412;
	int64_t x112 = INT64_MIN;
	uint64_t t25 = 1386LLU;

	t25 = ((x109|(x110/x111))-x112);

	if (t25 != 9223372024968870877LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -1;
	int32_t x115 = -406925747;
	volatile int32_t t26 = -67124;

	t26 = ((x113|(x114/x115))-x116);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MAX;
	volatile uint16_t x118 = 57U;
	int8_t x120 = INT8_MAX;
	volatile uint64_t t27 = 39945349992158LLU;

	t27 = ((x117|(x118/x119))-x120);

	if (t27 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = UINT64_MAX;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	volatile uint64_t t28 = 473458757LLU;

	t28 = ((x121|(x122/x123))-x124);

	if (t28 != 18446744073709551216LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	volatile int64_t x126 = INT64_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int64_t t29 = 10578LL;

	t29 = ((x125|(x126/x127))-x128);

	if (t29 != -1061866239492096LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 385U;
	int16_t x130 = INT16_MIN;
	volatile int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;

	t30 = ((x129|(x130/x131))-x132);

	if (t30 != 33153LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = INT32_MAX;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t31 = -732;

	t31 = ((x133|(x134/x135))-x136);

	if (t31 != -2147450752) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = INT64_MAX;
	static int16_t x138 = 435;
	uint32_t x140 = UINT32_MAX;

	t32 = ((x137|(x138/x139))-x140);

	if (t32 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MAX;
	volatile uint64_t x142 = 100982424733LLU;
	int8_t x144 = 2;
	volatile uint64_t t33 = 2818719319456LLU;

	t33 = ((x141|(x142/x143))-x144);

	if (t33 != 125LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = -1;
	volatile uint32_t t34 = 129900046U;

	t34 = ((x145|(x146/x147))-x148);

	if (t34 != 2717655830U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int8_t x150 = INT8_MAX;
	int16_t x152 = INT16_MIN;

	t35 = ((x149|(x150/x151))-x152);

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = 908352384U;
	int8_t x155 = INT8_MIN;
	volatile uint32_t x156 = 1186352731U;
	static uint32_t t36 = 50878204U;

	t36 = ((x153|(x154/x155))-x156);

	if (t36 != 3108581797U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 112413LLU;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MIN;
	volatile int32_t x160 = 99;
	uint64_t t37 = 560749948582144LLU;

	t37 = ((x157|(x158/x159))-x160);

	if (t37 != 112314LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 59961U;
	static int32_t x163 = -1;
	uint8_t x164 = 0U;
	uint32_t t38 = UINT32_MAX;

	t38 = ((x161|(x162/x163))-x164);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x165 = -1LL;
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 1741878478U;
	uint32_t x168 = 142251U;
	volatile int64_t t39 = -95313390735116LL;

	t39 = ((x165|(x166/x167))-x168);

	if (t39 != -142252LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -2;
	int32_t x170 = INT32_MAX;
	volatile uint16_t x171 = 58U;

	t40 = ((x169|(x170/x171))-x172);

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = 20481915;
	int8_t x174 = -1;
	static int64_t x175 = 113220140265576271LL;
	int32_t x176 = INT32_MIN;
	int64_t t41 = 142912113692128496LL;

	t41 = ((x173|(x174/x175))-x176);

	if (t41 != 2167965563LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x177 = 1305U;
	int64_t x178 = INT64_MIN;
	static volatile uint32_t x179 = UINT32_MAX;
	static volatile uint64_t t42 = 12599959632LLU;

	t42 = ((x177|(x178/x179))-x180);

	if (t42 != 18446744071549662243LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1;
	int64_t x182 = -33351999342956524LL;
	uint64_t x183 = 2985LLU;
	static int8_t x184 = -1;
	volatile uint64_t t43 = 261023992LLU;

	t43 = ((x181|(x182/x183))-x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x186 = -1;
	uint64_t x187 = 22925707168LLU;
	static volatile uint64_t t44 = 9LLU;

	t44 = ((x185|(x186/x187))-x188);

	if (t44 != 18446743279140584441LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = INT16_MAX;
	int32_t x192 = -43353871;

	t45 = ((x189|(x190/x191))-x192);

	if (t45 != 43353870LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x194 = 10580670674068731LLU;
	int8_t x195 = -1;
	static uint32_t x196 = 28136U;
	static volatile uint64_t t46 = 5473219LLU;

	t46 = ((x193|(x194/x195))-x196);

	if (t46 != 18446744073709523479LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 8599895275LLU;
	volatile int32_t x198 = -1;
	volatile int16_t x199 = INT16_MIN;
	volatile uint64_t t47 = 1335776132209LLU;

	t47 = ((x197|(x198/x199))-x200);

	if (t47 != 8599895403LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int8_t x202 = -2;
	uint8_t x203 = 3U;
	volatile uint64_t t48 = 56134205549669LLU;

	t48 = ((x201|(x202/x203))-x204);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = -779717;
	int16_t x207 = INT16_MIN;
	volatile uint64_t t49 = 66514590LLU;

	t49 = ((x205|(x206/x207))-x208);

	if (t49 != 2147483648LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 976U;
	volatile int64_t x210 = -265206924987465953LL;
	int8_t x211 = -1;
	static int32_t x212 = INT32_MAX;
	volatile int64_t t50 = -2556982538270124LL;

	t50 = ((x209|(x210/x211))-x212);

	if (t50 != 265206922839983090LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	int8_t x214 = 12;
	int64_t x215 = -1LL;
	static volatile uint16_t x216 = UINT16_MAX;
	int64_t t51 = -28035453333327LL;

	t51 = ((x213|(x214/x215))-x216);

	if (t51 != -65536LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 7LLU;
	volatile int32_t x219 = INT32_MAX;

	t52 = ((x217|(x218/x219))-x220);

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 22509LLU;
	int32_t x226 = INT32_MIN;
	volatile int16_t x228 = 0;

	t53 = ((x225|(x226/x227))-x228);

	if (t53 != 18446744073575356397LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MIN;
	static int8_t x234 = INT8_MIN;
	int32_t x235 = -6;
	uint64_t x236 = 74852584LLU;
	volatile uint64_t t54 = 1820243LLU;

	t54 = ((x233|(x234/x235))-x236);

	if (t54 != 18446744073634666285LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MIN;

	t55 = ((x237|(x238/x239))-x240);

	if (t55 != -50LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 23U;
	volatile int16_t x242 = 81;
	uint64_t t56 = 249431LLU;

	t56 = ((x241|(x242/x243))-x244);

	if (t56 != 18446607446422293167LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x245 = 1U;
	uint8_t x246 = 4U;
	uint32_t x247 = 1227492430U;
	int8_t x248 = INT8_MAX;

	t57 = ((x245|(x246/x247))-x248);

	if (t57 != 4294967170U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = 1U;
	volatile int16_t x250 = 1;
	int16_t x251 = -1;
	int32_t t58 = -125152644;

	t58 = ((x249|(x250/x251))-x252);

	if (t58 != -65536) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x253 = 28622845;
	int64_t x254 = INT64_MIN;
	volatile uint64_t x255 = UINT64_MAX;
	static int32_t x256 = INT32_MIN;
	uint64_t t59 = 1998102850LLU;

	t59 = ((x253|(x254/x255))-x256);

	if (t59 != 2176106493LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = -1030969609372893LL;
	uint8_t x258 = 5U;
	uint16_t x259 = 15U;
	static int16_t x260 = -137;
	volatile int64_t t60 = 225654373702LL;

	t60 = ((x257|(x258/x259))-x260);

	if (t60 != -1030969609372756LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	int64_t x266 = -1244099303210369003LL;
	uint64_t x267 = UINT64_MAX;
	volatile uint8_t x268 = 51U;
	volatile uint64_t t61 = 85415494118LLU;

	t61 = ((x265|(x266/x267))-x268);

	if (t61 != 65484LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x270 = 846U;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t62 = -1102;

	t62 = ((x269|(x270/x271))-x272);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 15U;
	int64_t x274 = -668631772559679LL;
	uint8_t x275 = 9U;
	int32_t x276 = -1;

	t63 = ((x273|(x274/x275))-x276);

	if (t63 != -74292419173296LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	int64_t t64 = -136222173735973164LL;

	t64 = ((x277|(x278/x279))-x280);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = -996760707;
	uint16_t x282 = 3105U;
	int8_t x283 = INT8_MAX;
	static uint64_t x284 = UINT64_MAX;
	uint64_t t65 = 797829026LLU;

	t65 = ((x281|(x282/x283))-x284);

	if (t65 != 18446744072712790910LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = 0U;
	volatile int8_t x286 = -13;
	uint8_t x287 = 29U;
	uint16_t x288 = 4U;
	int32_t t66 = -45226;

	t66 = ((x285|(x286/x287))-x288);

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = UINT8_MAX;
	uint32_t x296 = UINT32_MAX;
	uint32_t t67 = 41U;

	t67 = ((x293|(x294/x295))-x296);

	if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x297 = -8510018;
	int8_t x298 = -1;
	uint8_t x299 = 3U;
	int32_t x300 = -1;
	volatile int32_t t68 = 16941;

	t68 = ((x297|(x298/x299))-x300);

	if (t68 != -8510017) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -1;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t69 = -53144322;

	t69 = ((x301|(x302/x303))-x304);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x307 = 75645752634LLU;
	volatile uint64_t t70 = 91465463801230LLU;

	t70 = ((x305|(x306/x307))-x308);

	if (t70 != 9223372034951149131LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	static int64_t x310 = -1LL;
	static int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	volatile int64_t t71 = 659547100LL;

	t71 = ((x309|(x310/x311))-x312);

	if (t71 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x315 = INT16_MIN;
	uint16_t x316 = 60U;

	t72 = ((x313|(x314/x315))-x316);

	if (t72 != -281474976710461LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MAX;
	int16_t x318 = 14789;
	static int16_t x319 = 911;
	int8_t x320 = INT8_MIN;
	int32_t t73 = 221;

	t73 = ((x317|(x318/x319))-x320);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x321 = 3;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = 13U;
	volatile int32_t t74 = 259;

	t74 = ((x321|(x322/x323))-x324);

	if (t74 != -2516) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = -3;
	static int32_t x332 = INT32_MIN;
	int32_t t75 = 257315575;

	t75 = ((x329|(x330/x331))-x332);

	if (t75 != 2147483645) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x335 = INT64_MIN;
	int32_t x336 = -9326272;
	int64_t t76 = 44LL;

	t76 = ((x333|(x334/x335))-x336);

	if (t76 != 9326279LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x337 = 393;
	uint64_t x338 = 1LLU;
	int64_t x339 = INT64_MIN;
	volatile uint64_t t77 = 53293126472115360LLU;

	t77 = ((x337|(x338/x339))-x340);

	if (t77 != 521LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x341 = INT8_MIN;
	int64_t x342 = 3632699459289646LL;
	int32_t x344 = INT32_MIN;
	volatile int64_t t78 = -9768LL;

	t78 = ((x341|(x342/x343))-x344);

	if (t78 != 2147483601LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = 115;
	int64_t x346 = -401LL;
	uint8_t x347 = 2U;
	volatile uint16_t x348 = 2350U;
	int64_t t79 = -233337923LL;

	t79 = ((x345|(x346/x347))-x348);

	if (t79 != -2483LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = -1;
	uint16_t x350 = 236U;
	int8_t x351 = -1;
	static int32_t x352 = -217021061;
	int32_t t80 = 3;

	t80 = ((x349|(x350/x351))-x352);

	if (t80 != 217021060) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x357 = 16;
	int8_t x358 = INT8_MIN;
	static int64_t x360 = -1LL;
	int64_t t81 = -2041350656LL;

	t81 = ((x357|(x358/x359))-x360);

	if (t81 != 17LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x361 = INT32_MIN;
	uint16_t x362 = UINT16_MAX;
	volatile uint16_t x363 = 1852U;
	uint64_t x364 = 7LLU;
	volatile uint64_t t82 = 43832515126688380LLU;

	t82 = ((x361|(x362/x363))-x364);

	if (t82 != 18446744071562067996LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x365 = 16U;
	int32_t x367 = 15323;
	uint64_t x368 = 115044892792675LLU;

	t83 = ((x365|(x366/x367))-x368);

	if (t83 != 18446629028816758957LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -361;
	int32_t x370 = INT32_MIN;
	int8_t x371 = 54;
	int64_t x372 = INT64_MAX;

	t84 = ((x369|(x370/x371))-x372);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = -868;
	static int64_t x376 = 17615975LL;
	int64_t t85 = 912LL;

	t85 = ((x373|(x374/x375))-x376);

	if (t85 != -17615981LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x378 = -1;
	uint64_t x379 = 32613LLU;
	int16_t x380 = -1;
	uint64_t t86 = 315384518LLU;

	t86 = ((x377|(x378/x379))-x380);

	if (t86 != 565625718046720LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x381 = 0;
	uint64_t x382 = UINT64_MAX;
	volatile int16_t x384 = 6716;
	uint64_t t87 = 11LLU;

	t87 = ((x381|(x382/x383))-x384);

	if (t87 != 18446744073709544901LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x385 = 3718761474004172730LL;
	uint64_t x386 = 12188LLU;
	int8_t x387 = INT8_MIN;
	volatile int8_t x388 = INT8_MIN;
	uint64_t t88 = 7962936LLU;

	t88 = ((x385|(x386/x387))-x388);

	if (t88 != 3718761474004172858LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t89 = 1071177647;

	t89 = ((x389|(x390/x391))-x392);

	if (t89 != -33022) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int32_t x394 = -1;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = INT16_MIN;
	uint64_t t90 = 324644011716258LLU;

	t90 = ((x393|(x394/x395))-x396);

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x397 = UINT64_MAX;
	static uint64_t x398 = 416197795249175572LLU;

	t91 = ((x397|(x398/x399))-x400);

	if (t91 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = 0U;
	static int64_t x402 = INT64_MIN;
	static volatile uint64_t x403 = 28277057326515LLU;
	int32_t x404 = -123368;
	volatile uint64_t t92 = 18747LLU;

	t92 = ((x401|(x402/x403))-x404);

	if (t92 != 449546LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MAX;
	int32_t x406 = 213245;
	volatile uint64_t x407 = UINT64_MAX;
	int64_t x408 = INT64_MIN;
	volatile uint64_t t93 = 204340LLU;

	t93 = ((x405|(x406/x407))-x408);

	if (t93 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x409 = INT8_MIN;
	static int32_t x410 = -1;
	static uint16_t x411 = 1U;
	volatile uint32_t x412 = 12972970U;
	static volatile uint32_t t94 = 29U;

	t94 = ((x409|(x410/x411))-x412);

	if (t94 != 4281994325U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x413 = UINT8_MAX;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = -1;
	volatile uint64_t t95 = 28735854779LLU;

	t95 = ((x413|(x414/x415))-x416);

	if (t95 != 256LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = 4;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -35;
	static int64_t x420 = INT64_MAX;

	t96 = ((x417|(x418/x419))-x420);

	if (t96 != -9223372036793419128LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x421 = 26U;
	static volatile uint16_t x422 = 255U;
	volatile int8_t x423 = INT8_MAX;
	static int8_t x424 = 0;
	volatile uint32_t t97 = 75U;

	t97 = ((x421|(x422/x423))-x424);

	if (t97 != 26U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = 1;
	uint16_t x426 = 6U;
	int64_t x427 = -20196142425082707LL;
	int8_t x428 = INT8_MIN;
	int64_t t98 = 119026073858574LL;

	t98 = ((x425|(x426/x427))-x428);

	if (t98 != 129LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = UINT8_MAX;
	int16_t x430 = INT16_MIN;
	int64_t x431 = -1LL;
	volatile int64_t t99 = -907095511816788LL;

	t99 = ((x429|(x430/x431))-x432);

	if (t99 != 32948LL) { NG(); } else { ; }
	
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

