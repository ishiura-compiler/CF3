#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -372713;
volatile int32_t t1 = 165;
static int16_t x11 = -1;
volatile int32_t x13 = -120313;
static volatile uint64_t x16 = UINT64_MAX;
int8_t x17 = INT8_MAX;
int32_t t5 = -109607;
int8_t x31 = INT8_MIN;
int64_t x32 = -14597258LL;
int16_t x35 = INT16_MAX;
volatile int32_t t11 = -60044;
volatile int32_t x51 = INT32_MIN;
int64_t x52 = 24111LL;
static uint32_t x53 = 1347U;
volatile int32_t t13 = -38079;
uint32_t x62 = 0U;
static int16_t x77 = -561;
volatile uint8_t x84 = 0U;
int8_t x85 = -17;
int32_t t21 = 121752;
int8_t x94 = INT8_MAX;
uint32_t x97 = 7U;
int8_t x110 = -8;
volatile int64_t x111 = 12196LL;
volatile int32_t t27 = 6230828;
int8_t x118 = -14;
int32_t t29 = 2144163;
uint8_t x124 = UINT8_MAX;
int64_t x133 = INT64_MIN;
int32_t x134 = INT32_MIN;
int32_t x138 = -775164280;
static uint32_t x140 = UINT32_MAX;
int16_t x142 = -1;
volatile int32_t t35 = -927;
int32_t x156 = INT32_MIN;
int16_t x161 = -16;
int16_t x171 = INT16_MIN;
int32_t t42 = 191;
volatile uint8_t x173 = 2U;
volatile int8_t x176 = -1;
uint64_t x183 = 4603518771766LLU;
int32_t t45 = -3;
int32_t t46 = -1808;
uint32_t x189 = 227193U;
volatile int32_t x191 = INT32_MIN;
int32_t t48 = -9526109;
int8_t x198 = 12;
int8_t x202 = -1;
int32_t t51 = 14691;
int8_t x213 = 58;
int32_t t54 = 1877234;
int8_t x222 = -1;
int8_t x223 = -1;
int16_t x226 = INT16_MIN;
uint8_t x228 = 2U;
volatile int32_t t56 = -822872041;
int32_t x237 = 60827;
volatile int32_t x241 = -3;
uint32_t x246 = 393734U;
static uint64_t x253 = 13LLU;
uint32_t x258 = 3802U;
volatile uint16_t x267 = UINT16_MAX;
static uint8_t x268 = 2U;
static int16_t x269 = -1;
static int32_t x271 = INT32_MAX;
int32_t t66 = 288811;
uint8_t x278 = 82U;
volatile int64_t x279 = 2645LL;
volatile int32_t t68 = -135539;
int32_t x284 = 25;
static int32_t t69 = -347093091;
volatile int32_t t70 = 5071877;
uint8_t x290 = 3U;
uint32_t x291 = UINT32_MAX;
int16_t x292 = -1;
uint8_t x294 = UINT8_MAX;
static int16_t x298 = INT16_MIN;
volatile int32_t t73 = 38489758;
int16_t x302 = -1;
volatile int16_t x318 = -1;
int32_t t77 = 994;
static uint16_t x324 = UINT16_MAX;
volatile int32_t t79 = -2;
uint64_t x331 = 5LLU;
int32_t t80 = -1600631;
volatile uint32_t x337 = UINT32_MAX;
int32_t x339 = INT32_MAX;
static volatile int8_t x342 = INT8_MIN;
uint64_t x346 = 44820106662LLU;
static volatile int32_t t84 = -3397;
volatile uint8_t x350 = UINT8_MAX;
volatile int32_t t85 = -2895;
static uint16_t x365 = UINT16_MAX;
uint64_t x366 = 4417746581155421186LLU;
volatile int8_t x369 = -1;
int16_t x376 = INT16_MIN;
static int32_t x377 = INT32_MIN;
int32_t x378 = INT32_MIN;
int64_t x386 = INT64_MIN;
volatile uint32_t x387 = UINT32_MAX;
uint16_t x395 = 885U;
int32_t t96 = -930125968;
volatile int64_t x398 = 2262243LL;
static uint16_t x400 = UINT16_MAX;
volatile int32_t t97 = -26189170;
static int32_t x403 = 308037456;


void f0(void) {
	volatile int32_t x1 = -10207;
	uint8_t x2 = 15U;
	int16_t x3 = -2;
	int16_t x4 = 793;

	t0 = ((x1+(x2<=x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MAX;

	t1 = ((x5+(x6<=x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint8_t x10 = 45U;
	uint64_t x12 = 16LLU;
	int32_t t2 = -2848217;

	t2 = ((x9+(x10<=x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	volatile int8_t x15 = -14;
	static int32_t t3 = -201028;

	t3 = ((x13+(x14<=x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x18 = INT64_MIN;
	uint8_t x19 = UINT8_MAX;
	uint16_t x20 = 97U;
	int32_t t4 = -172990;

	t4 = ((x17+(x18<=x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 2U;
	int16_t x22 = -1;
	volatile int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MIN;

	t5 = ((x21+(x22<=x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint32_t x26 = 15655571U;
	int16_t x27 = -4;
	int16_t x28 = -1;
	int32_t t6 = 3;

	t6 = ((x25+(x26<=x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int16_t x30 = INT16_MIN;
	int32_t t7 = -2406;

	t7 = ((x29+(x30<=x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 39U;
	int64_t x34 = 1750061LL;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 15987;

	t8 = ((x33+(x34<=x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1703;
	uint8_t x38 = 8U;
	int32_t x39 = INT32_MAX;
	static volatile int8_t x40 = -59;
	volatile int32_t t9 = 65023857;

	t9 = ((x37+(x38<=x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -1;
	volatile int16_t x43 = 18;
	int8_t x44 = -1;
	int32_t t10 = 84013;

	t10 = ((x41+(x42<=x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile int8_t x46 = -30;
	int8_t x47 = 4;
	uint32_t x48 = 210U;

	t11 = ((x45+(x46<=x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile uint64_t x50 = 1LLU;
	volatile int32_t t12 = -2;

	t12 = ((x49+(x50<=x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 1U;
	int8_t x55 = -9;
	volatile int16_t x56 = -1;

	t13 = ((x53+(x54<=x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 752LLU;
	int8_t x58 = 0;
	int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -1763;

	t14 = ((x57+(x58<=x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1673169;
	static volatile uint64_t x63 = 2153653870365231259LLU;
	int8_t x64 = -1;
	volatile int32_t t15 = 752279;

	t15 = ((x61+(x62<=x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint16_t x66 = 42U;
	volatile uint8_t x67 = 2U;
	static volatile uint8_t x68 = 4U;
	volatile int32_t t16 = -23;

	t16 = ((x65+(x66<=x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1198463LLU;
	int64_t x70 = INT64_MAX;
	volatile int8_t x71 = INT8_MIN;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -403665;

	t17 = ((x69+(x70<=x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1792U;
	int8_t x74 = INT8_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = -3034094;

	t18 = ((x73+(x74<=x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	int16_t x80 = 227;
	static volatile int32_t t19 = 494468;

	t19 = ((x77+(x78<=x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int32_t x82 = INT32_MIN;
	static int8_t x83 = INT8_MIN;
	int32_t t20 = 1;

	t20 = ((x81+(x82<=x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = INT16_MIN;
	volatile int8_t x87 = 2;
	int16_t x88 = INT16_MAX;

	t21 = ((x85+(x86<=x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 58622690850217LLU;
	volatile uint64_t x90 = UINT64_MAX;
	static volatile int64_t x91 = INT64_MIN;
	static int8_t x92 = -1;
	volatile int32_t t22 = -48;

	t22 = ((x89+(x90<=x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 302657200645LL;
	int32_t x95 = -9903449;
	volatile int64_t x96 = -1LL;
	int32_t t23 = -108630059;

	t23 = ((x93+(x94<=x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -363;
	int16_t x99 = INT16_MAX;
	uint64_t x100 = 3218722543LLU;
	volatile int32_t t24 = 120041;

	t24 = ((x97+(x98<=x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 2259U;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	static int16_t x104 = -1789;
	volatile int32_t t25 = 438090;

	t25 = ((x101+(x102<=x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 0;
	static uint64_t x106 = UINT64_MAX;
	volatile int32_t x107 = INT32_MIN;
	uint32_t x108 = 231U;
	volatile int32_t t26 = 6722;

	t26 = ((x105+(x106<=x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x112 = -1;

	t27 = ((x109+(x110<=x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	static int64_t x114 = INT64_MIN;
	uint32_t x115 = UINT32_MAX;
	uint32_t x116 = 15176213U;
	volatile int32_t t28 = 5;

	t28 = ((x113+(x114<=x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile uint8_t x119 = 7U;
	int8_t x120 = 0;

	t29 = ((x117+(x118<=x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	static int32_t x122 = INT32_MAX;
	uint16_t x123 = UINT16_MAX;
	int32_t t30 = -22338829;

	t30 = ((x121+(x122<=x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = INT64_MIN;
	uint64_t x127 = 7936LLU;
	uint8_t x128 = 27U;
	static volatile int32_t t31 = -8868931;

	t31 = ((x125+(x126<=x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	volatile int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	volatile int8_t x132 = INT8_MAX;
	volatile int32_t t32 = -188;

	t32 = ((x129+(x130<=x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x135 = 1541;
	int32_t x136 = INT32_MIN;
	int32_t t33 = -352985;

	t33 = ((x133+(x134<=x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	static int16_t x139 = INT16_MAX;
	volatile int32_t t34 = 1;

	t34 = ((x137+(x138<=x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = 15687333963592LLU;
	volatile int64_t x143 = 1172975333662404LL;
	uint64_t x144 = UINT64_MAX;

	t35 = ((x141+(x142<=x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	uint16_t x148 = 16650U;
	volatile int32_t t36 = 1026708;

	t36 = ((x145+(x146<=x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MAX;
	uint64_t x152 = 62723LLU;
	int32_t t37 = 443849;

	t37 = ((x149+(x150<=x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -62;
	volatile int64_t x154 = 463776776359572LL;
	static int32_t x155 = INT32_MIN;
	volatile int32_t t38 = -713;

	t38 = ((x153+(x154<=x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 202U;
	int8_t x158 = -1;
	uint64_t x159 = 23989975227LLU;
	int16_t x160 = -120;
	int32_t t39 = 185;

	t39 = ((x157+(x158<=x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = UINT8_MAX;
	static int32_t x163 = 0;
	static uint64_t x164 = 5406663501731815307LLU;
	static volatile int32_t t40 = 295215;

	t40 = ((x161+(x162<=x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int8_t x166 = 1;
	int32_t x167 = 102251260;
	uint32_t x168 = 29U;
	volatile int32_t t41 = 90878592;

	t41 = ((x165+(x166<=x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint16_t x170 = 17U;
	volatile uint64_t x172 = 316521LLU;

	t42 = ((x169+(x170<=x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	static int8_t x175 = 0;
	static int32_t t43 = -36433;

	t43 = ((x173+(x174<=x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MAX;
	uint16_t x180 = 18U;
	static int32_t t44 = -1;

	t44 = ((x177+(x178<=x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -431121138;
	uint8_t x182 = 21U;
	uint64_t x184 = 20494505LLU;

	t45 = ((x181+(x182<=x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = 402LLU;
	static uint64_t x187 = 5192371893082980667LLU;
	int64_t x188 = -2641994055001239857LL;

	t46 = ((x185+(x186<=x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MAX;
	static int64_t x192 = -100LL;
	volatile int32_t t47 = -7939;

	t47 = ((x189+(x190<=x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int32_t x195 = -1;
	int64_t x196 = INT64_MIN;

	t48 = ((x193+(x194<=x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 194271LLU;
	static volatile uint8_t x199 = 0U;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = -440;

	t49 = ((x197+(x198<=x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = 737;
	volatile int32_t t50 = 37;

	t50 = ((x201+(x202<=x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x205 = INT8_MAX;
	volatile int64_t x206 = -1LL;
	int16_t x207 = -1;
	volatile int8_t x208 = 1;

	t51 = ((x205+(x206<=x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = -1;
	uint16_t x211 = UINT16_MAX;
	static uint16_t x212 = UINT16_MAX;
	int32_t t52 = -3;

	t52 = ((x209+(x210<=x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 7461337143297547797LLU;
	static int64_t x215 = -1LL;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = 7;

	t53 = ((x213+(x214<=x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 6U;
	static int32_t x218 = INT32_MIN;
	volatile uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;

	t54 = ((x217+(x218<=x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile uint64_t x224 = 297LLU;
	int32_t t55 = 5;

	t55 = ((x221+(x222<=x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -127LL;
	static int32_t x227 = -1;

	t56 = ((x225+(x226<=x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = -58360095845255754LL;
	int32_t x234 = INT32_MAX;
	int16_t x235 = 59;
	int8_t x236 = -1;
	int32_t t57 = -55911;

	t57 = ((x233+(x234<=x235))==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = -50;
	int8_t x239 = -20;
	volatile uint8_t x240 = 48U;
	volatile int32_t t58 = 3707146;

	t58 = ((x237+(x238<=x239))==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 118U;
	int64_t x244 = -1LL;
	int32_t t59 = 14157;

	t59 = ((x241+(x242<=x243))==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 0;
	int8_t x247 = -1;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t60 = -1;

	t60 = ((x245+(x246<=x247))==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MIN;
	static int32_t x250 = INT32_MAX;
	uint16_t x251 = 578U;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t61 = 91;

	t61 = ((x249+(x250<=x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = -16998094513867LL;
	uint64_t x255 = 2886788LLU;
	static volatile int64_t x256 = INT64_MIN;
	int32_t t62 = -330999;

	t62 = ((x253+(x254<=x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -5946LL;
	int32_t x259 = -1;
	int8_t x260 = -1;
	volatile int32_t t63 = 7141589;

	t63 = ((x257+(x258<=x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = -16172329LL;
	volatile int64_t x262 = -1LL;
	int16_t x263 = -1592;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t64 = -39962349;

	t64 = ((x261+(x262<=x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x265 = 775993313276427LLU;
	int32_t x266 = -3881;
	static int32_t t65 = -19331;

	t65 = ((x265+(x266<=x267))==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x270 = INT16_MIN;
	int16_t x272 = INT16_MAX;

	t66 = ((x269+(x270<=x271))==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x273 = 2319530U;
	uint16_t x274 = 7U;
	int16_t x275 = INT16_MAX;
	volatile int64_t x276 = 248416247956515LL;
	int32_t t67 = -572743;

	t67 = ((x273+(x274<=x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = 1;
	uint32_t x280 = 3U;

	t68 = ((x277+(x278<=x279))==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = INT32_MAX;
	volatile int64_t x283 = INT64_MIN;

	t69 = ((x281+(x282<=x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = -4121;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = 28036U;
	uint16_t x288 = 34U;

	t70 = ((x285+(x286<=x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	static int32_t t71 = 296879316;

	t71 = ((x289+(x290<=x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = -437093964;
	volatile int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	static int32_t t72 = 372;

	t72 = ((x293+(x294<=x295))==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x297 = 10315U;
	uint16_t x299 = UINT16_MAX;
	static volatile int32_t x300 = INT32_MAX;

	t73 = ((x297+(x298<=x299))==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1011;
	volatile int16_t x303 = INT16_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t74 = 425;

	t74 = ((x301+(x302<=x303))==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = -11LL;
	int8_t x310 = -1;
	uint16_t x311 = 31240U;
	static int32_t x312 = 1018964008;
	volatile int32_t t75 = 11177505;

	t75 = ((x309+(x310<=x311))==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = 1;
	int8_t x314 = -1;
	uint64_t x315 = 8015128321427645LLU;
	int8_t x316 = -1;
	int32_t t76 = -74189;

	t76 = ((x313+(x314<=x315))==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 80683339LLU;
	static volatile int16_t x319 = -1;
	uint32_t x320 = 220772167U;

	t77 = ((x317+(x318<=x319))==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = UINT8_MAX;
	int16_t x322 = -1;
	volatile int64_t x323 = INT64_MAX;
	volatile int32_t t78 = 1012304;

	t78 = ((x321+(x322<=x323))==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -3727;
	uint16_t x326 = 13387U;
	uint8_t x327 = UINT8_MAX;
	int32_t x328 = INT32_MIN;

	t79 = ((x325+(x326<=x327))==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x329 = UINT64_MAX;
	uint16_t x330 = 14268U;
	volatile uint8_t x332 = 7U;

	t80 = ((x329+(x330<=x331))==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = 156389;
	volatile int32_t x334 = INT32_MAX;
	uint64_t x335 = 15567443564056LLU;
	int8_t x336 = -1;
	int32_t t81 = -192249;

	t81 = ((x333+(x334<=x335))==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x338 = INT8_MAX;
	uint64_t x340 = 440956780849303LLU;
	int32_t t82 = 981;

	t82 = ((x337+(x338<=x339))==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x341 = INT16_MAX;
	int64_t x343 = -3425296497669424107LL;
	static volatile int16_t x344 = INT16_MIN;
	int32_t t83 = -16735;

	t83 = ((x341+(x342<=x343))==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	int64_t x348 = INT64_MAX;

	t84 = ((x345+(x346<=x347))==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x349 = INT16_MIN;
	int16_t x351 = -1359;
	int8_t x352 = INT8_MIN;

	t85 = ((x349+(x350<=x351))==x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = 1891505;
	static int16_t x354 = -1;
	int32_t x355 = -127323;
	int8_t x356 = INT8_MAX;
	volatile int32_t t86 = 110;

	t86 = ((x353+(x354<=x355))==x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MIN;
	static volatile int64_t x358 = 6715004607289442LL;
	volatile uint8_t x359 = 35U;
	static volatile uint32_t x360 = 197U;
	volatile int32_t t87 = 210;

	t87 = ((x357+(x358<=x359))==x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = INT32_MAX;
	static volatile int64_t x362 = -7208890LL;
	int32_t x363 = INT32_MIN;
	int32_t x364 = -4187084;
	static int32_t t88 = 5087461;

	t88 = ((x361+(x362<=x363))==x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x367 = 93111672735879440LL;
	static int64_t x368 = INT64_MIN;
	int32_t t89 = -3;

	t89 = ((x365+(x366<=x367))==x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t90 = 5190;

	t90 = ((x369+(x370<=x371))==x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	static uint16_t x374 = 150U;
	int64_t x375 = INT64_MAX;
	int32_t t91 = 0;

	t91 = ((x373+(x374<=x375))==x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x379 = -2126;
	int8_t x380 = INT8_MAX;
	static int32_t t92 = -402274;

	t92 = ((x377+(x378<=x379))==x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = -1;
	static volatile int16_t x383 = -1;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t93 = 15517;

	t93 = ((x381+(x382<=x383))==x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x388 = -1;
	int32_t t94 = 308902;

	t94 = ((x385+(x386<=x387))==x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = 2U;
	int8_t x391 = 22;
	int32_t x392 = 862;
	int32_t t95 = 1546;

	t95 = ((x389+(x390<=x391))==x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MIN;
	volatile int32_t x394 = -195;
	int16_t x396 = INT16_MAX;

	t96 = ((x393+(x394<=x395))==x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = 12;
	volatile int32_t x399 = INT32_MAX;

	t97 = ((x397+(x398<=x399))==x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MIN;
	static int64_t x402 = INT64_MIN;
	static volatile int16_t x404 = -1;
	static int32_t t98 = -1;

	t98 = ((x401+(x402<=x403))==x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = 3978U;
	int64_t x406 = INT64_MAX;
	volatile uint32_t x407 = 375U;
	static uint64_t x408 = 202430293LLU;
	static volatile int32_t t99 = 484961;

	t99 = ((x405+(x406<=x407))==x408);

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

