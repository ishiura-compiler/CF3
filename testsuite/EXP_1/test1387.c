#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int32_t t0 = 23407205;
int8_t x5 = 6;
int32_t x8 = 13569544;
int32_t t2 = -94;
static int32_t x14 = INT32_MIN;
int64_t x20 = INT64_MAX;
static int32_t t4 = 131428251;
int8_t x21 = 2;
int16_t x27 = INT16_MIN;
int32_t t6 = 12;
volatile int8_t x31 = INT8_MIN;
int32_t t7 = 156;
volatile int16_t x33 = INT16_MIN;
int32_t t8 = 3;
static volatile int32_t t9 = 253213;
volatile int32_t x46 = -1;
volatile int8_t x49 = INT8_MIN;
int8_t x51 = 10;
int16_t x55 = -455;
int64_t x60 = INT64_MAX;
int64_t x64 = INT64_MIN;
volatile int8_t x65 = INT8_MIN;
int32_t t16 = -115;
int32_t t18 = -21;
int32_t x84 = -1;
uint64_t x87 = UINT64_MAX;
uint8_t x88 = 49U;
uint16_t x91 = UINT16_MAX;
int64_t x108 = INT64_MIN;
volatile uint8_t x109 = 105U;
int16_t x110 = -425;
uint8_t x112 = UINT8_MAX;
static int8_t x114 = INT8_MIN;
int32_t x121 = -1;
int64_t x132 = INT64_MIN;
volatile int32_t t32 = -1389;
int64_t x136 = INT64_MIN;
volatile int32_t t33 = -7883;
int8_t x138 = -1;
int64_t x139 = -243542661LL;
volatile int32_t t34 = 779151090;
int8_t x141 = INT8_MIN;
int64_t x147 = INT64_MIN;
static volatile int32_t x156 = INT32_MAX;
int64_t x159 = INT64_MIN;
volatile int32_t t39 = -53245;
int32_t x164 = -1;
int16_t x165 = -955;
int32_t x167 = 699361672;
uint64_t x180 = UINT64_MAX;
static uint16_t x188 = 12832U;
volatile int32_t t46 = -5846500;
volatile int32_t t47 = -1;
volatile int64_t x198 = -1LL;
int32_t x201 = INT32_MIN;
volatile int32_t t50 = 161;
int16_t x208 = INT16_MAX;
int8_t x211 = INT8_MAX;
int32_t t52 = 2845064;
int32_t x217 = 12;
uint32_t x219 = 205058U;
int16_t x224 = INT16_MIN;
int64_t x225 = INT64_MIN;
static volatile int16_t x231 = INT16_MIN;
static uint8_t x237 = 3U;
int32_t x248 = INT32_MIN;
volatile int64_t x249 = INT64_MAX;
static volatile int32_t t63 = -2659997;
int8_t x257 = -2;
volatile uint16_t x271 = 1U;
volatile int32_t t67 = -513902;
int64_t x273 = -13LL;
uint16_t x278 = UINT16_MAX;
volatile int16_t x282 = INT16_MIN;
volatile int64_t x288 = -9740630752LL;
int16_t x291 = INT16_MAX;
int16_t x295 = INT16_MAX;
static int8_t x298 = INT8_MIN;
int32_t x300 = INT32_MAX;
uint32_t x305 = 63707U;
uint16_t x313 = UINT16_MAX;
int32_t t82 = 0;
int8_t x335 = -26;
int64_t x338 = -1272773158733337773LL;
int16_t x339 = INT16_MIN;
int32_t t85 = 1682;
uint32_t x351 = 74758601U;
volatile uint8_t x354 = 2U;
volatile int64_t x355 = -1LL;
int16_t x356 = INT16_MAX;
uint8_t x360 = UINT8_MAX;
int32_t t89 = 30;
volatile int32_t x361 = INT32_MIN;
static volatile int32_t t90 = 80562;
uint32_t x367 = UINT32_MAX;
volatile int8_t x378 = INT8_MAX;
static int32_t t98 = -15588035;
static volatile int32_t t99 = 24;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x2 = -30;
	volatile int64_t x3 = 1LL;

	t0 = (((x1<x2)*x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int64_t x7 = -1LL;
	static int32_t t1 = 91;

	t1 = (((x5<x6)*x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 384;
	static volatile int64_t x10 = INT64_MAX;
	static uint32_t x11 = 100631U;
	int16_t x12 = 3;

	t2 = (((x9<x10)*x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x15 = 23145;
	static volatile uint16_t x16 = 0U;
	int32_t t3 = -388160642;

	t3 = (((x13<x14)*x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 1211248U;
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;

	t4 = (((x17<x18)*x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 5474U;
	static uint16_t x23 = 1424U;
	int32_t x24 = 45;
	int32_t t5 = -58;

	t5 = (((x21<x22)*x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -62;
	int16_t x26 = INT16_MIN;
	int16_t x28 = -97;

	t6 = (((x25<x26)*x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -122755;
	volatile int32_t x30 = INT32_MIN;
	int32_t x32 = -20899;

	t7 = (((x29<x30)*x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = UINT32_MAX;
	static int64_t x35 = 12381329LL;
	static int16_t x36 = -1;

	t8 = (((x33<x34)*x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	volatile uint16_t x39 = 3U;
	int16_t x40 = INT16_MAX;

	t9 = (((x37<x38)*x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = 5U;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 29U;
	volatile int16_t x44 = -2781;
	volatile int32_t t10 = 95552406;

	t10 = (((x41<x42)*x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile int16_t x47 = INT16_MIN;
	static int8_t x48 = 1;
	volatile int32_t t11 = -710;

	t11 = (((x45<x46)*x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	static volatile int64_t x52 = INT64_MAX;
	int32_t t12 = -1463;

	t12 = (((x49<x50)*x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 106U;
	volatile uint64_t x54 = 44723374655215392LLU;
	static int64_t x56 = INT64_MIN;
	static int32_t t13 = 54366232;

	t13 = (((x53<x54)*x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = 2;
	uint8_t x58 = UINT8_MAX;
	volatile int8_t x59 = INT8_MAX;
	volatile int32_t t14 = 11;

	t14 = (((x57<x58)*x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 13481U;
	volatile int16_t x62 = -6;
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = -5243;

	t15 = (((x61<x62)*x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MIN;
	int32_t x67 = -118;
	uint32_t x68 = 968844765U;

	t16 = (((x65<x66)*x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint8_t x70 = 0U;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 9;

	t17 = (((x69<x70)*x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = -3;
	int32_t x75 = -74;
	volatile int8_t x76 = INT8_MAX;

	t18 = (((x73<x74)*x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	volatile int16_t x78 = -2;
	static uint16_t x79 = 206U;
	int16_t x80 = INT16_MAX;
	int32_t t19 = 14212;

	t19 = (((x77<x78)*x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	volatile int16_t x82 = INT16_MIN;
	static uint64_t x83 = 7881927LLU;
	static volatile int32_t t20 = -5686;

	t20 = (((x81<x82)*x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = 0;
	volatile int64_t x86 = -92725585LL;
	volatile int32_t t21 = 99107746;

	t21 = (((x85<x86)*x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -2507;
	int8_t x90 = INT8_MIN;
	volatile int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -423;

	t22 = (((x89<x90)*x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	uint16_t x94 = 193U;
	static volatile uint16_t x95 = 2U;
	int16_t x96 = -3236;
	int32_t t23 = 4;

	t23 = (((x93<x94)*x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MIN;
	int8_t x98 = -1;
	uint32_t x99 = 8854U;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 2269;

	t24 = (((x97<x98)*x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -30;
	static volatile uint16_t x102 = UINT16_MAX;
	int32_t x103 = 50883371;
	volatile int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 84755;

	t25 = (((x101<x102)*x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	static int16_t x106 = 1043;
	int32_t x107 = INT32_MIN;
	volatile int32_t t26 = -1258282;

	t26 = (((x105<x106)*x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x111 = 25;
	volatile int32_t t27 = -28614562;

	t27 = (((x109<x110)*x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	static volatile uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -558;

	t28 = (((x113<x114)*x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 1U;
	int64_t x118 = 1502LL;
	volatile int8_t x119 = INT8_MIN;
	volatile uint16_t x120 = 642U;
	int32_t t29 = 35537450;

	t29 = (((x117<x118)*x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 5U;
	int64_t x123 = -563023191LL;
	int16_t x124 = 3614;
	volatile int32_t t30 = -2908;

	t30 = (((x121<x122)*x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	uint64_t x126 = 17500711299172089LLU;
	int8_t x127 = -18;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 4779;

	t31 = (((x125<x126)*x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static uint32_t x130 = 1447360U;
	uint16_t x131 = 1323U;

	t32 = (((x129<x130)*x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	static int64_t x135 = INT64_MIN;

	t33 = (((x133<x134)*x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (((x137<x138)*x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x142 = 56944733840288LLU;
	int16_t x143 = INT16_MIN;
	int64_t x144 = 17394264770LL;
	volatile int32_t t35 = 33125;

	t35 = (((x141<x142)*x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 0U;
	volatile int32_t x148 = INT32_MIN;
	int32_t t36 = -5343;

	t36 = (((x145<x146)*x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 474590615883562LL;
	static volatile int8_t x150 = -3;
	int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -1075865;

	t37 = (((x149<x150)*x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = 19U;
	int16_t x154 = -713;
	uint8_t x155 = 39U;
	volatile int32_t t38 = 525684;

	t38 = (((x153<x154)*x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 1623731260U;
	uint8_t x160 = UINT8_MAX;

	t39 = (((x157<x158)*x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	static volatile int64_t x162 = -1LL;
	static int64_t x163 = -1LL;
	int32_t t40 = 44345197;

	t40 = (((x161<x162)*x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = INT16_MIN;
	static volatile int8_t x168 = -1;
	int32_t t41 = -582071770;

	t41 = (((x165<x166)*x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 4542LLU;
	static int16_t x170 = INT16_MIN;
	volatile int16_t x171 = -6664;
	volatile int64_t x172 = INT64_MAX;
	int32_t t42 = -1242;

	t42 = (((x169<x170)*x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 125U;
	static uint32_t x174 = 1120U;
	static volatile uint8_t x175 = 13U;
	static int16_t x176 = INT16_MAX;
	static int32_t t43 = 271;

	t43 = (((x173<x174)*x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 973612U;
	uint32_t x178 = 55197U;
	int64_t x179 = INT64_MAX;
	volatile int32_t t44 = 1;

	t44 = (((x177<x178)*x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int64_t x183 = 1067323915081LL;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -254;

	t45 = (((x181<x182)*x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = 10056LL;
	uint64_t x186 = 8003815533LLU;
	uint8_t x187 = 127U;

	t46 = (((x185<x186)*x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	uint8_t x190 = 49U;
	volatile int8_t x191 = INT8_MAX;
	int32_t x192 = INT32_MIN;

	t47 = (((x189<x190)*x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MAX;
	volatile int16_t x194 = -1;
	int32_t x195 = -1;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -13760996;

	t48 = (((x193<x194)*x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	static int16_t x199 = 3779;
	int64_t x200 = INT64_MIN;
	static volatile int32_t t49 = 4;

	t49 = (((x197<x198)*x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = UINT8_MAX;
	static int16_t x203 = INT16_MAX;
	static int8_t x204 = INT8_MIN;

	t50 = (((x201<x202)*x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 4926;
	uint8_t x206 = 93U;
	int64_t x207 = 19756842LL;
	volatile int32_t t51 = -39946;

	t51 = (((x205<x206)*x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = -1LL;
	static int64_t x212 = INT64_MIN;

	t52 = (((x209<x210)*x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 7;
	uint32_t x214 = 681106642U;
	static int32_t x215 = -1;
	uint32_t x216 = 5U;
	volatile int32_t t53 = 224488;

	t53 = (((x213<x214)*x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x218 = UINT64_MAX;
	int32_t x220 = INT32_MAX;
	static int32_t t54 = 8;

	t54 = (((x217<x218)*x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 7U;
	int32_t x222 = -1;
	static int16_t x223 = INT16_MIN;
	int32_t t55 = 215;

	t55 = (((x221<x222)*x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 7310LLU;
	int64_t x227 = INT64_MIN;
	volatile int8_t x228 = INT8_MIN;
	int32_t t56 = 0;

	t56 = (((x225<x226)*x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MAX;
	int64_t x230 = -36067851052711LL;
	int32_t x232 = INT32_MIN;
	int32_t t57 = -2;

	t57 = (((x229<x230)*x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 31578327516LL;
	int16_t x234 = -1;
	volatile uint16_t x235 = 12069U;
	static volatile int8_t x236 = INT8_MAX;
	volatile int32_t t58 = -3;

	t58 = (((x233<x234)*x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = -1;
	uint8_t x239 = 15U;
	volatile int64_t x240 = INT64_MIN;
	static volatile int32_t t59 = 19119836;

	t59 = (((x237<x238)*x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MAX;
	int64_t x243 = 74069096LL;
	uint64_t x244 = 8276LLU;
	static volatile int32_t t60 = -9559;

	t60 = (((x241<x242)*x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 20224116754527LLU;
	int64_t x246 = -60086LL;
	uint8_t x247 = 14U;
	volatile int32_t t61 = -7597;

	t61 = (((x245<x246)*x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -32339;
	uint8_t x251 = 21U;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = -1;

	t62 = (((x249<x250)*x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint64_t x254 = 9885799LLU;
	int8_t x255 = -1;
	static uint16_t x256 = 0U;

	t63 = (((x253<x254)*x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	static volatile int32_t t64 = 1750384;

	t64 = (((x257<x258)*x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 17U;
	int8_t x262 = -1;
	volatile int32_t x263 = -1;
	static int8_t x264 = INT8_MIN;
	int32_t t65 = 1446;

	t65 = (((x261<x262)*x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int8_t x266 = -24;
	volatile uint32_t x267 = 189585U;
	static int8_t x268 = -1;
	static int32_t t66 = 723362154;

	t66 = (((x265<x266)*x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	static volatile uint16_t x270 = UINT16_MAX;
	volatile int32_t x272 = INT32_MIN;

	t67 = (((x269<x270)*x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 1588LL;
	int32_t x275 = INT32_MAX;
	int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -14788;

	t68 = (((x273<x274)*x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = 51;
	int64_t x279 = -1LL;
	volatile uint16_t x280 = 1U;
	static volatile int32_t t69 = -56238;

	t69 = (((x277<x278)*x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MAX;
	static int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = 334132504;

	t70 = (((x281<x282)*x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 4U;
	static int16_t x286 = -1;
	int32_t x287 = -88685;
	int32_t t71 = 72;

	t71 = (((x285<x286)*x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = 512095411747110LLU;
	static int8_t x290 = 0;
	static uint64_t x292 = UINT64_MAX;
	static volatile int32_t t72 = 30525;

	t72 = (((x289<x290)*x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = 20;
	int32_t x294 = 3;
	int32_t x296 = -11;
	volatile int32_t t73 = -7;

	t73 = (((x293<x294)*x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 9;
	volatile int16_t x299 = INT16_MIN;
	int32_t t74 = -191;

	t74 = (((x297<x298)*x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	volatile uint64_t x302 = 18011491463358LLU;
	static int64_t x303 = INT64_MAX;
	uint8_t x304 = 2U;
	int32_t t75 = 7948635;

	t75 = (((x301<x302)*x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x306 = -3815;
	int8_t x307 = INT8_MIN;
	volatile int64_t x308 = -1LL;
	volatile int32_t t76 = -26;

	t76 = (((x305<x306)*x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 332149070104LLU;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = 4U;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = 3;

	t77 = (((x309<x310)*x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 0;
	uint32_t x315 = 3691629U;
	int32_t x316 = INT32_MIN;
	int32_t t78 = 13;

	t78 = (((x313<x314)*x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	static int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	static uint16_t x320 = 2U;
	int32_t t79 = 29;

	t79 = (((x317<x318)*x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	volatile int32_t x322 = INT32_MAX;
	uint32_t x323 = 64926U;
	uint8_t x324 = 28U;
	volatile int32_t t80 = 13119;

	t80 = (((x321<x322)*x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 143;
	volatile uint8_t x326 = 3U;
	volatile uint16_t x327 = 13250U;
	uint16_t x328 = 481U;
	int32_t t81 = 1534467;

	t81 = (((x325<x326)*x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = -382;
	int64_t x330 = -34908004461867LL;
	int32_t x331 = INT32_MIN;
	volatile int8_t x332 = 2;

	t82 = (((x329<x330)*x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 1014U;
	volatile int16_t x334 = INT16_MAX;
	int16_t x336 = INT16_MAX;
	int32_t t83 = 999;

	t83 = (((x333<x334)*x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = UINT64_MAX;
	uint32_t x340 = 347181371U;
	volatile int32_t t84 = 71728;

	t84 = (((x337<x338)*x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int8_t x342 = INT8_MAX;
	int8_t x343 = INT8_MAX;
	static int8_t x344 = INT8_MIN;

	t85 = (((x341<x342)*x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int32_t x346 = INT32_MIN;
	static int8_t x347 = 3;
	volatile uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = -857;

	t86 = (((x345<x346)*x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 12680;
	int64_t x350 = -29173173284732339LL;
	volatile uint64_t x352 = UINT64_MAX;
	int32_t t87 = -249;

	t87 = (((x349<x350)*x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 9142;
	int32_t t88 = 2909701;

	t88 = (((x353<x354)*x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -467132243;
	static int8_t x358 = INT8_MAX;
	int64_t x359 = INT64_MAX;

	t89 = (((x357<x358)*x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	static uint64_t x363 = 8173862148LLU;
	uint8_t x364 = 7U;

	t90 = (((x361<x362)*x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 0U;
	int16_t x366 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	int32_t t91 = -63;

	t91 = (((x365<x366)*x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint16_t x370 = 1504U;
	int32_t x371 = 384722632;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = 789;

	t92 = (((x369<x370)*x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 4294176744498LL;
	volatile int16_t x374 = -2;
	static volatile uint64_t x375 = 55LLU;
	volatile int8_t x376 = -1;
	static volatile int32_t t93 = -10225;

	t93 = (((x373<x374)*x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 54U;
	static uint16_t x379 = 6809U;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = -3354903;

	t94 = (((x377<x378)*x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = -215216702;
	volatile int8_t x383 = INT8_MAX;
	volatile int32_t x384 = INT32_MIN;
	static int32_t t95 = -196510433;

	t95 = (((x381<x382)*x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -41;
	static int64_t x386 = 12379223770LL;
	static int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -1;

	t96 = (((x385<x386)*x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MAX;
	int32_t x391 = -4580;
	int8_t x392 = -1;
	int32_t t97 = -35;

	t97 = (((x389<x390)*x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	uint16_t x394 = 2U;
	volatile uint64_t x395 = 63420808965LLU;
	static int8_t x396 = 0;

	t98 = (((x393<x394)*x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 29977074LLU;
	int64_t x398 = -132105529LL;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;

	t99 = (((x397<x398)*x399)<x400);

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

