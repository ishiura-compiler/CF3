#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 108535159;
volatile int32_t t2 = -374;
uint8_t x19 = 6U;
volatile int32_t t4 = 396;
static volatile int16_t x21 = -1;
int8_t x24 = -13;
int8_t x28 = INT8_MIN;
int32_t t6 = -11891387;
int32_t x34 = 2;
volatile int32_t x37 = 14;
uint16_t x40 = 1U;
static volatile int32_t t9 = -5928835;
static int32_t t10 = -1;
int32_t t11 = -37233423;
int16_t x49 = INT16_MIN;
volatile uint16_t x55 = 12183U;
volatile int8_t x61 = INT8_MIN;
int32_t x64 = 2;
uint8_t x74 = 5U;
uint64_t x76 = 20LLU;
static int64_t x81 = -1LL;
uint32_t x87 = UINT32_MAX;
int64_t x90 = -1536152752163234LL;
int64_t x92 = INT64_MIN;
static int16_t x94 = INT16_MIN;
volatile int32_t t23 = 49682519;
int16_t x100 = INT16_MIN;
volatile int32_t t26 = 374486295;
uint8_t x111 = 53U;
int16_t x119 = INT16_MIN;
static int64_t x123 = 1960430906601LL;
volatile int64_t x128 = -1LL;
volatile int16_t x133 = INT16_MIN;
uint32_t x138 = 27386U;
int16_t x141 = INT16_MIN;
static int64_t x143 = -1LL;
uint32_t x148 = UINT32_MAX;
static int8_t x152 = 27;
int8_t x164 = INT8_MIN;
static int16_t x168 = INT16_MIN;
static int64_t x173 = INT64_MIN;
static int64_t x177 = -69989766LL;
int8_t x182 = 31;
int16_t x187 = -383;
int8_t x189 = -1;
static int8_t x191 = -1;
uint64_t x194 = 414643861LLU;
uint32_t x199 = UINT32_MAX;
int8_t x202 = 1;
int32_t t50 = 8737513;
static uint16_t x210 = 1080U;
int64_t x211 = INT64_MIN;
uint8_t x214 = UINT8_MAX;
volatile int64_t x215 = INT64_MIN;
uint8_t x219 = UINT8_MAX;
int16_t x220 = INT16_MAX;
static int16_t x225 = INT16_MAX;
volatile int8_t x227 = INT8_MAX;
int8_t x233 = 0;
uint64_t x240 = UINT64_MAX;
int16_t x247 = INT16_MAX;
int64_t x248 = -69855154LL;
uint16_t x252 = UINT16_MAX;
int32_t t64 = 188;
volatile int32_t x261 = INT32_MAX;
int64_t x262 = INT64_MIN;
static volatile int32_t x265 = INT32_MAX;
int32_t x267 = INT32_MIN;
static uint16_t x268 = UINT16_MAX;
uint8_t x270 = UINT8_MAX;
int64_t x272 = INT64_MAX;
int16_t x281 = -1;
volatile int32_t t70 = -2067166;
int32_t x288 = 1;
int64_t x293 = INT64_MAX;
static volatile int64_t x300 = -1LL;
uint64_t x305 = 1LLU;
int8_t x316 = INT8_MIN;
int32_t t79 = -429296783;
int64_t x324 = -1LL;
int32_t t81 = -83;
uint64_t x332 = 539065415816LLU;
int32_t t82 = -18323;
int64_t x333 = INT64_MIN;
int8_t x348 = -56;
volatile int8_t x351 = INT8_MIN;
int32_t x355 = -490456;
int32_t t89 = 32264621;
int64_t x367 = -1LL;
uint64_t x370 = UINT64_MAX;
int16_t x372 = INT16_MIN;
static volatile int32_t x374 = INT32_MIN;
static int64_t x378 = INT64_MIN;
static int16_t x379 = INT16_MAX;
volatile int32_t t95 = 46174769;
volatile int32_t x393 = INT32_MIN;


void f0(void) {
	volatile uint32_t x1 = 6439U;
	int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = -1339331;

	t0 = ((x1*(x2<x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = 11U;
	int16_t x6 = -1;
	uint32_t x7 = 240U;
	int8_t x8 = 1;

	t1 = ((x5*(x6<x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 91672638U;
	int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;
	static int16_t x12 = INT16_MIN;

	t2 = ((x9*(x10<x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 7LLU;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -397;

	t3 = ((x13*(x14<x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -71881944658380LL;
	static int32_t x18 = -1;
	int64_t x20 = INT64_MIN;

	t4 = ((x17*(x18<x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 1749395U;
	uint16_t x23 = 3U;
	volatile int32_t t5 = -3213;

	t5 = ((x21*(x22<x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -244;
	uint64_t x26 = 45260LLU;
	uint64_t x27 = UINT64_MAX;

	t6 = ((x25*(x26<x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 29U;
	int32_t x30 = 5;
	static uint64_t x31 = 1622511493900347LLU;
	int64_t x32 = -1LL;
	static int32_t t7 = 16684265;

	t7 = ((x29*(x30<x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x35 = -41722523510803369LL;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 5520;

	t8 = ((x33*(x34<x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = UINT32_MAX;
	static volatile uint32_t x39 = 732U;

	t9 = ((x37*(x38<x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	volatile int32_t x42 = INT32_MIN;
	volatile int64_t x43 = -1LL;
	int64_t x44 = INT64_MAX;

	t10 = ((x41*(x42<x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MIN;
	volatile int8_t x48 = INT8_MIN;

	t11 = ((x45*(x46<x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	static uint8_t x51 = UINT8_MAX;
	int64_t x52 = INT64_MAX;
	int32_t t12 = -852675;

	t12 = ((x49*(x50<x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = 1111;
	static int64_t x56 = INT64_MIN;
	int32_t t13 = -161;

	t13 = ((x53*(x54<x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	uint8_t x58 = UINT8_MAX;
	static int32_t x59 = INT32_MIN;
	volatile uint64_t x60 = 260901327107LLU;
	int32_t t14 = 41;

	t14 = ((x57*(x58<x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MAX;
	int32_t t15 = 0;

	t15 = ((x61*(x62<x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -2LL;
	int32_t x66 = INT32_MAX;
	int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MAX;
	static int32_t t16 = -169259;

	t16 = ((x65*(x66<x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 17056335544967LLU;
	uint64_t x70 = UINT64_MAX;
	static int32_t x71 = -1;
	int64_t x72 = -1LL;
	int32_t t17 = -1895273;

	t17 = ((x69*(x70<x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 9631784;
	uint16_t x75 = 24077U;
	volatile int32_t t18 = -265;

	t18 = ((x73*(x74<x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int16_t x78 = 0;
	int32_t x79 = INT32_MIN;
	static uint16_t x80 = 7442U;
	volatile int32_t t19 = -7394;

	t19 = ((x77*(x78<x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = 14;
	static uint64_t x83 = UINT64_MAX;
	static volatile int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = -4;

	t20 = ((x81*(x82<x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 209LLU;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 1;

	t21 = ((x85*(x86<x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	volatile int32_t t22 = 37320;

	t22 = ((x89*(x90<x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 29125U;
	int64_t x95 = INT64_MIN;
	static volatile int32_t x96 = 1;

	t23 = ((x93*(x94<x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int64_t x98 = -140219998081LL;
	static int16_t x99 = 2795;
	static volatile int32_t t24 = 25102;

	t24 = ((x97*(x98<x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -1687;
	int32_t x103 = 0;
	volatile uint8_t x104 = UINT8_MAX;
	int32_t t25 = -68704236;

	t25 = ((x101*(x102<x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 5U;
	volatile int32_t x106 = INT32_MIN;
	static int16_t x107 = 419;
	int64_t x108 = INT64_MIN;

	t26 = ((x105*(x106<x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 10U;
	volatile int16_t x110 = 51;
	static volatile uint64_t x112 = 122959346LLU;
	int32_t t27 = -96790656;

	t27 = ((x109*(x110<x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 51U;
	uint8_t x114 = 55U;
	static uint64_t x115 = UINT64_MAX;
	int32_t x116 = 1344;
	volatile int32_t t28 = 5116802;

	t28 = ((x113*(x114<x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint64_t x118 = UINT64_MAX;
	int8_t x120 = INT8_MAX;
	static int32_t t29 = 45871000;

	t29 = ((x117*(x118<x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int32_t x122 = 122778;
	static uint16_t x124 = 124U;
	int32_t t30 = 2088;

	t30 = ((x121*(x122<x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -201;
	int32_t x126 = INT32_MIN;
	static uint8_t x127 = UINT8_MAX;
	static volatile int32_t t31 = -96805261;

	t31 = ((x125*(x126<x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 3;
	uint32_t x130 = 5548422U;
	static uint16_t x131 = 495U;
	int64_t x132 = INT64_MIN;
	int32_t t32 = 815419694;

	t32 = ((x129*(x130<x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 84;
	int32_t x135 = INT32_MIN;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -381252;

	t33 = ((x133*(x134<x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	uint8_t x139 = 4U;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -2050;

	t34 = ((x137*(x138<x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MIN;
	volatile uint8_t x144 = 32U;
	volatile int32_t t35 = -398;

	t35 = ((x141*(x142<x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x146 = 54672997789184LL;
	uint8_t x147 = UINT8_MAX;
	volatile int32_t t36 = 98;

	t36 = ((x145*(x146<x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x149 = 40433U;
	int64_t x150 = INT64_MIN;
	static uint32_t x151 = UINT32_MAX;
	static int32_t t37 = -455815;

	t37 = ((x149*(x150<x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static int8_t x154 = 1;
	int32_t x155 = -1;
	int32_t x156 = 70;
	int32_t t38 = -48778;

	t38 = ((x153*(x154<x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 54173777945776490LLU;
	int8_t x159 = -1;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -3731623;

	t39 = ((x157*(x158<x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 44U;
	volatile int16_t x162 = INT16_MIN;
	volatile uint16_t x163 = 2U;
	int32_t t40 = -15687;

	t40 = ((x161*(x162<x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 19000452988747660LL;
	static uint64_t x166 = UINT64_MAX;
	volatile int8_t x167 = -1;
	int32_t t41 = -1;

	t41 = ((x165*(x166<x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 3U;
	int16_t x170 = INT16_MAX;
	volatile int32_t x171 = -10;
	static int64_t x172 = -247LL;
	volatile int32_t t42 = -1019740;

	t42 = ((x169*(x170<x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = -1;
	static volatile int64_t x175 = -1LL;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 39;

	t43 = ((x173*(x174<x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MAX;
	volatile uint64_t x180 = UINT64_MAX;
	static int32_t t44 = -6;

	t44 = ((x177*(x178<x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 0;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;
	volatile int32_t t45 = -81628;

	t45 = ((x181*(x182<x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = UINT32_MAX;
	static int64_t x186 = -1LL;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -4;

	t46 = ((x185*(x186<x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x190 = 3U;
	uint64_t x192 = 33661LLU;
	volatile int32_t t47 = -25932;

	t47 = ((x189*(x190<x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint32_t x195 = 5693U;
	int16_t x196 = -122;
	int32_t t48 = 3;

	t48 = ((x193*(x194<x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 0U;
	volatile int8_t x198 = INT8_MIN;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = 162101293;

	t49 = ((x197*(x198<x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 104U;
	int32_t x203 = INT32_MIN;
	int32_t x204 = -1;

	t50 = ((x201*(x202<x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 20314075U;
	volatile int8_t x206 = -1;
	int16_t x207 = INT16_MAX;
	int64_t x208 = -1LL;
	int32_t t51 = -5013377;

	t51 = ((x205*(x206<x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = 670;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 8134720;

	t52 = ((x209*(x210<x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	static int32_t t53 = 1248893;

	t53 = ((x213*(x214<x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int64_t x218 = INT64_MIN;
	int32_t t54 = -1837;

	t54 = ((x217*(x218<x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	uint16_t x222 = UINT16_MAX;
	static uint64_t x223 = 4068834LLU;
	static uint64_t x224 = UINT64_MAX;
	int32_t t55 = -50;

	t55 = ((x221*(x222<x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	int64_t x228 = INT64_MAX;
	int32_t t56 = 501773;

	t56 = ((x225*(x226<x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = 2U;
	int64_t x232 = INT64_MAX;
	volatile int32_t t57 = -9617;

	t57 = ((x229*(x230<x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = INT8_MIN;
	static int8_t x235 = INT8_MIN;
	volatile uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -99304;

	t58 = ((x233*(x234<x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;
	int32_t t59 = 0;

	t59 = ((x237*(x238<x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 13U;
	int64_t x242 = 106LL;
	volatile uint8_t x243 = 43U;
	static int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 114;

	t60 = ((x241*(x242<x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = -170410735;
	static int32_t t61 = 128522;

	t61 = ((x245*(x246<x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 1882215468403846099LLU;
	volatile int32_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	int32_t t62 = 96593713;

	t62 = ((x249*(x250<x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -232;
	static int64_t x256 = 1LL;
	volatile int32_t t63 = 1818;

	t63 = ((x253*(x254<x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -2464;
	int16_t x258 = -237;
	int16_t x259 = -1;
	static int64_t x260 = INT64_MIN;

	t64 = ((x257*(x258<x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = INT32_MAX;
	int64_t x264 = -1LL;
	int32_t t65 = 2981874;

	t65 = ((x261*(x262<x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int32_t t66 = 316;

	t66 = ((x265*(x266<x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 1U;
	int64_t x271 = -456710719573875LL;
	static volatile int32_t t67 = -13;

	t67 = ((x269*(x270<x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -985742486;
	volatile int8_t x274 = -9;
	int8_t x275 = INT8_MIN;
	int32_t x276 = -980159;
	volatile int32_t t68 = -194;

	t68 = ((x273*(x274<x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -3128;
	static int8_t x278 = INT8_MIN;
	int8_t x279 = 7;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = -7089513;

	t69 = ((x277*(x278<x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x282 = 7U;
	static int16_t x283 = 23;
	int64_t x284 = INT64_MIN;

	t70 = ((x281*(x282<x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 105U;
	static int16_t x286 = INT16_MIN;
	volatile int64_t x287 = INT64_MIN;
	volatile int32_t t71 = -12590;

	t71 = ((x285*(x286<x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static volatile uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = -12;
	int64_t x292 = -347095017166149LL;
	volatile int32_t t72 = 325;

	t72 = ((x289*(x290<x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = 12354334421LL;
	uint32_t x295 = 3543115U;
	int32_t x296 = -1;
	volatile int32_t t73 = -132136987;

	t73 = ((x293*(x294<x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = 157347LL;
	static int32_t x298 = -87685897;
	static volatile int64_t x299 = INT64_MAX;
	volatile int32_t t74 = 0;

	t74 = ((x297*(x298<x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = UINT16_MAX;
	volatile uint64_t x303 = 219195099836LLU;
	int64_t x304 = -1LL;
	int32_t t75 = 1;

	t75 = ((x301*(x302<x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x306 = INT64_MIN;
	int8_t x307 = -52;
	volatile uint16_t x308 = 6208U;
	volatile int32_t t76 = -343196386;

	t76 = ((x305*(x306<x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile int8_t x311 = 0;
	int32_t x312 = INT32_MIN;
	int32_t t77 = 30646;

	t77 = ((x309*(x310<x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = 27643162LL;
	int32_t t78 = 45763;

	t78 = ((x313*(x314<x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 47U;
	volatile uint16_t x318 = UINT16_MAX;
	volatile int32_t x319 = INT32_MIN;
	volatile int64_t x320 = -1LL;

	t79 = ((x317*(x318<x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 12414U;
	int8_t x322 = -48;
	static int32_t x323 = INT32_MIN;
	static int32_t t80 = 6220750;

	t80 = ((x321*(x322<x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	volatile int32_t x326 = INT32_MIN;
	int64_t x327 = 285LL;
	volatile int16_t x328 = INT16_MAX;

	t81 = ((x325*(x326<x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile uint16_t x330 = 5U;
	volatile uint64_t x331 = 2189923839208679042LLU;

	t82 = ((x329*(x330<x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = UINT32_MAX;
	static uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 6U;
	int32_t t83 = 8333419;

	t83 = ((x333*(x334<x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 3949U;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 17215U;
	uint16_t x340 = 3U;
	int32_t t84 = -186;

	t84 = ((x337*(x338<x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	uint32_t x342 = 2U;
	volatile uint8_t x343 = 3U;
	int16_t x344 = -23;
	int32_t t85 = -18155;

	t85 = ((x341*(x342<x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 9U;
	volatile int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	volatile int32_t t86 = 0;

	t86 = ((x345*(x346<x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 1;
	uint32_t x350 = UINT32_MAX;
	static volatile int64_t x352 = INT64_MIN;
	int32_t t87 = 385489384;

	t87 = ((x349*(x350<x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 13408LLU;
	static int16_t x354 = -1;
	int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -357757080;

	t88 = ((x353*(x354<x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 4473227U;
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	int8_t x360 = 27;

	t89 = ((x357*(x358<x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MIN;
	static volatile int64_t x363 = -3039744221773031096LL;
	int16_t x364 = INT16_MAX;
	volatile int32_t t90 = -182207376;

	t90 = ((x361*(x362<x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 25;
	static volatile uint8_t x366 = UINT8_MAX;
	int8_t x368 = -1;
	static int32_t t91 = 2261;

	t91 = ((x365*(x366<x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 186280238LLU;
	volatile int16_t x371 = -1;
	volatile int32_t t92 = -29735;

	t92 = ((x369*(x370<x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -1;
	volatile int32_t t93 = -1104;

	t93 = ((x373*(x374<x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 21U;
	static int8_t x380 = INT8_MIN;
	int32_t t94 = 9051023;

	t94 = ((x377*(x378<x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MAX;
	uint8_t x382 = 43U;
	int8_t x383 = INT8_MIN;
	static volatile uint32_t x384 = UINT32_MAX;

	t95 = ((x381*(x382<x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1LL;
	int8_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	static int16_t x388 = -7;
	static volatile int32_t t96 = 1;

	t96 = ((x385*(x386<x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = UINT16_MAX;
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = 3U;
	uint64_t x392 = 507554LLU;
	volatile int32_t t97 = 28401;

	t97 = ((x389*(x390<x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x394 = 7;
	int32_t x395 = -2028;
	int64_t x396 = -1LL;
	volatile int32_t t98 = 1870;

	t98 = ((x393*(x394<x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 0U;
	static volatile int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -357634379;

	t99 = ((x397*(x398<x399))<=x400);

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

