#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 27890778;
uint32_t x9 = 3585U;
int8_t x16 = 22;
static int64_t x17 = INT64_MIN;
static int32_t t4 = 71909;
int64_t x24 = -116202103387LL;
volatile int32_t x25 = -1;
int64_t x30 = -163978037765995499LL;
static int16_t x32 = INT16_MIN;
volatile int8_t x52 = INT8_MIN;
uint16_t x70 = 61U;
int8_t x75 = INT8_MIN;
uint64_t x79 = 1547664251373622871LLU;
volatile int32_t x80 = INT32_MAX;
int64_t x81 = INT64_MIN;
volatile int32_t t20 = -210820684;
uint8_t x86 = 118U;
int8_t x89 = 0;
volatile uint64_t x101 = 578760005979106291LLU;
volatile int32_t x104 = INT32_MIN;
static int16_t x109 = INT16_MIN;
int8_t x117 = 3;
int64_t x127 = 0LL;
int8_t x131 = INT8_MAX;
int32_t t32 = 1;
uint32_t x134 = UINT32_MAX;
int32_t x140 = -2;
int16_t x163 = INT16_MIN;
int16_t x164 = INT16_MAX;
int32_t t41 = -9519423;
int64_t x173 = -416534611261853396LL;
static int16_t x175 = -1;
int32_t t44 = -7943;
static int32_t x183 = 664162366;
int8_t x184 = INT8_MAX;
static volatile int32_t t48 = -6;
static volatile int8_t x209 = 6;
int32_t x210 = -1;
int64_t x215 = -1LL;
int8_t x216 = INT8_MIN;
int16_t x218 = -1;
int32_t t53 = -1945;
int8_t x223 = 40;
static int32_t t54 = -109;
int32_t x230 = -1;
int32_t x231 = INT32_MIN;
uint64_t x233 = 0LLU;
uint16_t x237 = 0U;
int32_t t59 = 18;
int32_t t60 = 74;
volatile int16_t x255 = INT16_MIN;
static int32_t x258 = -1;
int16_t x275 = INT16_MIN;
volatile uint64_t x277 = 1824334280LLU;
int16_t x281 = -1;
static volatile int32_t t69 = 56288757;
uint32_t x293 = 44321U;
volatile int64_t x307 = -1015286919683LL;
int8_t x309 = -1;
int16_t x310 = -1;
static int64_t x312 = INT64_MAX;
volatile int8_t x314 = INT8_MIN;
static int32_t x325 = 820958610;
static int8_t x333 = 17;
static int32_t x334 = 253;
int32_t x343 = INT32_MIN;
static volatile int32_t t85 = -1;
int32_t x358 = INT32_MAX;
uint8_t x361 = 1U;
static uint32_t x362 = 54944U;
int16_t x366 = INT16_MIN;
int16_t x367 = -1;
int32_t t88 = 33303;
int8_t x381 = INT8_MIN;
int32_t t91 = -2000651;
int64_t x390 = -1LL;
int32_t t93 = -185367174;
volatile int64_t x394 = INT64_MIN;
int64_t x403 = INT64_MIN;
int16_t x407 = INT16_MIN;
uint8_t x408 = 26U;
int8_t x412 = 0;
static int32_t t99 = -15540216;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 0U;
	static volatile int32_t t0 = 283403;

	t0 = ((x1-(x2<x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int64_t x6 = -1LL;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 10786;

	t1 = ((x5-(x6<x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int8_t x11 = -1;
	int32_t x12 = 97184;
	int32_t t2 = -58875;

	t2 = ((x9-(x10<x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	int64_t x14 = -10LL;
	static int64_t x15 = INT64_MIN;
	volatile int32_t t3 = -2148861;

	t3 = ((x13-(x14<x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 2902U;
	int64_t x19 = -24931396633810LL;
	int8_t x20 = -1;

	t4 = ((x17-(x18<x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 33;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MAX;
	volatile int32_t t5 = -3;

	t5 = ((x21-(x22<x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int16_t x27 = INT16_MAX;
	volatile uint64_t x28 = 54LLU;
	static volatile int32_t t6 = -101999171;

	t6 = ((x25-(x26<x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	static volatile uint32_t x31 = 4U;
	static volatile int32_t t7 = 146422323;

	t7 = ((x29-(x30<x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int64_t x34 = -59074104210554LL;
	volatile uint64_t x35 = UINT64_MAX;
	static int16_t x36 = -1;
	volatile int32_t t8 = 2;

	t8 = ((x33-(x34<x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	static volatile uint8_t x38 = UINT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -431;

	t9 = ((x37-(x38<x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile int64_t x42 = -1LL;
	uint64_t x43 = 43083454671841LLU;
	uint64_t x44 = 295906132105LLU;
	volatile int32_t t10 = -13153;

	t10 = ((x41-(x42<x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int64_t x46 = -1LL;
	int16_t x47 = -9;
	uint64_t x48 = 198797798LLU;
	int32_t t11 = -1399;

	t11 = ((x45-(x46<x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int8_t x50 = 3;
	int32_t x51 = INT32_MIN;
	int32_t t12 = 1;

	t12 = ((x49-(x50<x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x54 = 684325180950009LL;
	int16_t x55 = 1463;
	volatile int32_t x56 = INT32_MAX;
	int32_t t13 = 1;

	t13 = ((x53-(x54<x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	uint8_t x58 = 104U;
	int32_t x59 = INT32_MAX;
	int64_t x60 = -77576213690973LL;
	volatile int32_t t14 = -9769089;

	t14 = ((x57-(x58<x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	static volatile int8_t x63 = -1;
	uint32_t x64 = 393170574U;
	volatile int32_t t15 = -47075090;

	t15 = ((x61-(x62<x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x66 = -1;
	uint16_t x67 = 0U;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -3054633;

	t16 = ((x65-(x66<x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -6281;
	static int64_t x71 = INT64_MIN;
	int64_t x72 = -1LL;
	volatile int32_t t17 = -744657;

	t17 = ((x69-(x70<x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 3458U;
	static int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -1;

	t18 = ((x73-(x74<x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -21182;
	static volatile uint16_t x78 = UINT16_MAX;
	volatile int32_t t19 = 3790;

	t19 = ((x77-(x78<x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = 1324758;
	volatile uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 83863851465LLU;

	t20 = ((x81-(x82<x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -1;
	volatile int16_t x87 = INT16_MIN;
	static int32_t x88 = INT32_MIN;
	int32_t t21 = -1274;

	t21 = ((x85-(x86<x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -1;
	volatile int8_t x91 = -39;
	static uint8_t x92 = 8U;
	int32_t t22 = 122;

	t22 = ((x89-(x90<x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile int16_t x94 = -124;
	int8_t x95 = INT8_MIN;
	int8_t x96 = 0;
	int32_t t23 = -3;

	t23 = ((x93-(x94<x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 702269042U;
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 213186;

	t24 = ((x97-(x98<x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 0LLU;
	int32_t x103 = INT32_MIN;
	int32_t t25 = 30;

	t25 = ((x101-(x102<x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 82878797U;
	int32_t x108 = 1510596;
	volatile int32_t t26 = -1;

	t26 = ((x105-(x106<x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x110 = 11U;
	static int32_t x111 = INT32_MIN;
	volatile int32_t x112 = 200528221;
	int32_t t27 = -39;

	t27 = ((x109-(x110<x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -9;
	volatile int32_t x114 = 201603;
	volatile int16_t x115 = -2111;
	uint64_t x116 = 1LLU;
	int32_t t28 = 2440;

	t28 = ((x113-(x114<x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 5LLU;
	int8_t x120 = -8;
	int32_t t29 = -9;

	t29 = ((x117-(x118<x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -13LL;
	int32_t x122 = INT32_MIN;
	static int32_t x123 = 41;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 5489903;

	t30 = ((x121-(x122<x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint16_t x126 = 6U;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -41;

	t31 = ((x125-(x126<x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	volatile int64_t x132 = 274624003811806LL;

	t32 = ((x129-(x130<x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int16_t x135 = INT16_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 8244;

	t33 = ((x133-(x134<x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 2057U;
	uint16_t x138 = UINT16_MAX;
	volatile uint64_t x139 = 134656LLU;
	static int32_t t34 = -376;

	t34 = ((x137-(x138<x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x143 = -66471;
	volatile uint64_t x144 = UINT64_MAX;
	int32_t t35 = -1737;

	t35 = ((x141-(x142<x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 2812270254LLU;
	volatile int8_t x146 = INT8_MAX;
	static volatile int8_t x147 = -1;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -18754;

	t36 = ((x145-(x146<x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 90U;
	uint8_t x150 = UINT8_MAX;
	static int8_t x151 = 0;
	int32_t x152 = -1;
	volatile int32_t t37 = 164941355;

	t37 = ((x149-(x150<x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 5618338271880LLU;
	volatile int32_t x155 = INT32_MIN;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = -8051027;

	t38 = ((x153-(x154<x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 39938850712LLU;
	static uint64_t x158 = 1LLU;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	static int32_t t39 = 25057;

	t39 = ((x157-(x158<x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 7U;
	int32_t x162 = -1;
	volatile int32_t t40 = -6540;

	t40 = ((x161-(x162<x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	volatile int8_t x168 = INT8_MIN;

	t41 = ((x165-(x166<x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -1;
	static int32_t x170 = INT32_MIN;
	static int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = 7672742;

	t42 = ((x169-(x170<x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = UINT8_MAX;
	static int64_t x176 = 68692265222792LL;
	volatile int32_t t43 = 788456;

	t43 = ((x173-(x174<x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	int16_t x178 = -1;
	int32_t x179 = -36573;
	int16_t x180 = 0;

	t44 = ((x177-(x178<x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MAX;
	uint8_t x182 = 0U;
	int32_t t45 = 7643904;

	t45 = ((x181-(x182<x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	uint16_t x186 = 9U;
	int64_t x187 = -677948091616968LL;
	uint32_t x188 = 100U;
	int32_t t46 = -3;

	t46 = ((x185-(x186<x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = -12;
	static int64_t x194 = 233465LL;
	volatile int32_t x195 = 409685293;
	uint32_t x196 = 24U;
	volatile int32_t t47 = 132139;

	t47 = ((x193-(x194<x195))<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 49U;
	static int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	static int32_t x200 = INT32_MIN;

	t48 = ((x197-(x198<x199))<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = 355;
	int16_t x202 = INT16_MAX;
	int16_t x203 = 26;
	int32_t x204 = INT32_MIN;
	volatile int32_t t49 = 0;

	t49 = ((x201-(x202<x203))<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -56258LL;
	uint32_t x206 = 613U;
	int32_t x207 = INT32_MIN;
	static uint32_t x208 = UINT32_MAX;
	volatile int32_t t50 = -5;

	t50 = ((x205-(x206<x207))<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x211 = 217;
	uint64_t x212 = 3400LLU;
	volatile int32_t t51 = -3;

	t51 = ((x209-(x210<x211))<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 3213U;
	static volatile int8_t x214 = 0;
	volatile int32_t t52 = 465358223;

	t52 = ((x213-(x214<x215))<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 40LLU;
	int8_t x219 = INT8_MIN;
	static int8_t x220 = -1;

	t53 = ((x217-(x218<x219))<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = -1100;
	int16_t x224 = -15865;

	t54 = ((x221-(x222<x223))<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MIN;
	static int32_t x227 = 301175104;
	int8_t x228 = 0;
	int32_t t55 = 0;

	t55 = ((x225-(x226<x227))<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x229 = UINT16_MAX;
	static volatile uint32_t x232 = 1347958U;
	static volatile int32_t t56 = 48;

	t56 = ((x229-(x230<x231))<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x234 = INT32_MIN;
	uint64_t x235 = 201015911127899682LLU;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t57 = -1284;

	t57 = ((x233-(x234<x235))<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = INT8_MIN;
	int64_t x239 = -1LL;
	static int8_t x240 = INT8_MIN;
	int32_t t58 = 26;

	t58 = ((x237-(x238<x239))<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -6LL;
	uint64_t x242 = 1LLU;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;

	t59 = ((x241-(x242<x243))<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = INT64_MAX;
	uint64_t x246 = 60612358LLU;
	int16_t x247 = INT16_MAX;
	uint64_t x248 = 137797LLU;

	t60 = ((x245-(x246<x247))<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = -1789;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	static int16_t x252 = INT16_MAX;
	volatile int32_t t61 = 886253;

	t61 = ((x249-(x250<x251))<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = 57806LLU;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t62 = 135;

	t62 = ((x253-(x254<x255))<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	static uint32_t x259 = 32988784U;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t63 = -94967;

	t63 = ((x257-(x258<x259))<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = 168303523177LL;
	uint32_t x263 = 3870U;
	volatile uint16_t x264 = 223U;
	volatile int32_t t64 = -88;

	t64 = ((x261-(x262<x263))<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -54;
	int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = 1781161U;
	int32_t x268 = INT32_MIN;
	int32_t t65 = -992;

	t65 = ((x265-(x266<x267))<=x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 81053010LLU;
	int8_t x270 = INT8_MIN;
	int64_t x271 = -3720100655388594225LL;
	int8_t x272 = INT8_MIN;
	volatile int32_t t66 = -8238768;

	t66 = ((x269-(x270<x271))<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	uint32_t x274 = 329592309U;
	int32_t x276 = INT32_MIN;
	volatile int32_t t67 = -22224;

	t67 = ((x273-(x274<x275))<=x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x278 = 191U;
	int32_t x279 = 12552;
	int32_t x280 = INT32_MIN;
	int32_t t68 = 4574;

	t68 = ((x277-(x278<x279))<=x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x282 = -1342752;
	static int16_t x283 = INT16_MAX;
	uint8_t x284 = 14U;

	t69 = ((x281-(x282<x283))<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	int32_t t70 = 2;

	t70 = ((x285-(x286<x287))<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MIN;
	int8_t x291 = -1;
	int16_t x292 = -1;
	volatile int32_t t71 = 24533394;

	t71 = ((x289-(x290<x291))<=x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = 15279;
	int32_t x296 = -149;
	volatile int32_t t72 = 258805;

	t72 = ((x293-(x294<x295))<=x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = INT64_MIN;
	int32_t x298 = 1694109;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = 0U;
	static int32_t t73 = 2689906;

	t73 = ((x297-(x298<x299))<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x301 = -1767570LL;
	static int8_t x302 = -1;
	static uint8_t x303 = UINT8_MAX;
	int64_t x304 = -1LL;
	volatile int32_t t74 = 49078;

	t74 = ((x301-(x302<x303))<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x305 = 32463U;
	volatile int64_t x306 = INT64_MIN;
	int64_t x308 = 219915LL;
	int32_t t75 = -49029867;

	t75 = ((x305-(x306<x307))<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x311 = INT64_MIN;
	volatile int32_t t76 = 0;

	t76 = ((x309-(x310<x311))<=x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 0U;
	uint8_t x315 = 42U;
	uint8_t x316 = 6U;
	volatile int32_t t77 = 122486289;

	t77 = ((x313-(x314<x315))<=x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t78 = 10570;

	t78 = ((x317-(x318<x319))<=x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MAX;
	static int32_t x323 = -1;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t79 = 77684;

	t79 = ((x321-(x322<x323))<=x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x326 = INT16_MIN;
	int8_t x327 = -1;
	int8_t x328 = INT8_MIN;
	volatile int32_t t80 = 361066;

	t80 = ((x325-(x326<x327))<=x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x335 = 21U;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t81 = 29;

	t81 = ((x333-(x334<x335))<=x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x341 = -20693;
	int16_t x342 = 446;
	volatile int64_t x344 = INT64_MIN;
	int32_t t82 = -67068052;

	t82 = ((x341-(x342<x343))<=x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = 0U;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x345-(x346<x347))<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x349 = 1;
	volatile int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MAX;
	static uint64_t x352 = 3943LLU;
	volatile int32_t t84 = 1;

	t84 = ((x349-(x350<x351))<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x353 = 0;
	static uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MAX;
	static volatile uint8_t x356 = UINT8_MAX;

	t85 = ((x353-(x354<x355))<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t86 = 86962;

	t86 = ((x357-(x358<x359))<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x363 = 312872351881225367LL;
	uint32_t x364 = 3662U;
	volatile int32_t t87 = 18600;

	t87 = ((x361-(x362<x363))<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = -1;
	uint32_t x368 = UINT32_MAX;

	t88 = ((x365-(x366<x367))<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x369 = -1075LL;
	static uint64_t x370 = 2564LLU;
	uint64_t x371 = 940210644976551LLU;
	int64_t x372 = 1169981131843421787LL;
	int32_t t89 = -269410245;

	t89 = ((x369-(x370<x371))<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x373 = 48266389990306452LLU;
	int8_t x374 = -1;
	int32_t x375 = 4336;
	volatile int8_t x376 = INT8_MIN;
	static volatile int32_t t90 = -1765;

	t90 = ((x373-(x374<x375))<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x382 = INT64_MAX;
	int32_t x383 = -349050;
	int32_t x384 = 681;

	t91 = ((x381-(x382<x383))<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -1;
	static uint32_t x386 = 9016U;
	volatile int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MAX;
	volatile int32_t t92 = -1097;

	t92 = ((x385-(x386<x387))<=x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x389 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = 105;

	t93 = ((x389-(x390<x391))<=x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = -1;
	volatile int8_t x395 = -1;
	int32_t x396 = -1;
	int32_t t94 = -5175;

	t94 = ((x393-(x394<x395))<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	static int32_t x398 = 39734;
	static int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t95 = 57;

	t95 = ((x397-(x398<x399))<=x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	static int64_t x402 = -1LL;
	static int8_t x404 = INT8_MIN;
	volatile int32_t t96 = 171040;

	t96 = ((x401-(x402<x403))<=x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x405 = INT8_MAX;
	int8_t x406 = 1;
	int32_t t97 = 29;

	t97 = ((x405-(x406<x407))<=x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x409 = -1LL;
	int16_t x410 = INT16_MAX;
	static int16_t x411 = INT16_MAX;
	volatile int32_t t98 = -2749;

	t98 = ((x409-(x410<x411))<=x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x413 = 1280108960U;
	static int64_t x414 = 738198LL;
	uint8_t x415 = 2U;
	int32_t x416 = -1;

	t99 = ((x413-(x414<x415))<=x416);

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

