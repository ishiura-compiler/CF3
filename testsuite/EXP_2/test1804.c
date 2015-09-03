#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1884U;
int16_t x5 = -10553;
volatile int32_t t1 = -322;
int32_t x12 = INT32_MIN;
volatile int8_t x14 = INT8_MIN;
volatile int32_t t3 = -103828;
int32_t x25 = INT32_MIN;
volatile int32_t x26 = INT32_MIN;
int8_t x32 = -3;
static volatile uint32_t x42 = UINT32_MAX;
int16_t x45 = -65;
static volatile int32_t x51 = -1;
int64_t x53 = -1LL;
int8_t x54 = -4;
volatile uint32_t x57 = 65615U;
int16_t x66 = INT16_MIN;
static int64_t x67 = INT64_MIN;
int8_t x68 = INT8_MIN;
int32_t x72 = INT32_MAX;
int32_t t19 = 383;
static volatile int32_t t22 = 415;
volatile int64_t x110 = INT64_MIN;
static uint32_t x111 = 1U;
uint16_t x120 = 0U;
int32_t x123 = INT32_MIN;
int8_t x126 = INT8_MIN;
int8_t x130 = INT8_MIN;
static int32_t x131 = INT32_MIN;
int32_t t32 = -20210401;
static int64_t x139 = -1357LL;
static int32_t t34 = 3163437;
int32_t t36 = 997902;
uint8_t x153 = 68U;
uint16_t x157 = 0U;
volatile int16_t x161 = 0;
static uint64_t x169 = 227643488732050LLU;
volatile int32_t t42 = 45;
uint64_t x173 = 69LLU;
int16_t x175 = 3181;
static uint16_t x185 = 6235U;
volatile int8_t x186 = INT8_MIN;
static int8_t x189 = INT8_MAX;
int32_t t48 = -1;
int64_t x202 = -1LL;
volatile int32_t t50 = -28784363;
uint32_t x207 = 618244794U;
static int64_t x211 = 14308767LL;
static volatile int8_t x214 = INT8_MIN;
volatile int8_t x216 = 2;
static uint64_t x224 = UINT64_MAX;
int64_t x227 = INT64_MAX;
volatile int32_t t56 = -5285;
int16_t x230 = 34;
int64_t x235 = -1LL;
int32_t x238 = 0;
int16_t x239 = INT16_MAX;
static int16_t x240 = 1;
static uint64_t x242 = 9502064690LLU;
static int32_t x243 = -461;
int8_t x244 = INT8_MIN;
int64_t x250 = INT64_MAX;
int8_t x251 = 0;
uint64_t x258 = 865150518LLU;
int64_t x268 = INT64_MIN;
int8_t x270 = -1;
uint8_t x272 = UINT8_MAX;
int8_t x273 = -1;
volatile int32_t t68 = -2788;
static int8_t x277 = INT8_MAX;
uint16_t x287 = 17U;
volatile uint64_t x288 = UINT64_MAX;
int64_t x296 = -719837100226190768LL;
int64_t x297 = 1368650LL;
volatile uint16_t x298 = 391U;
static volatile uint16_t x302 = 177U;
volatile int64_t x304 = 745831475LL;
static int8_t x306 = -1;
volatile int8_t x310 = -1;
volatile int32_t t77 = -490270;
static uint64_t x319 = UINT64_MAX;
static uint32_t x320 = UINT32_MAX;
int16_t x324 = INT16_MIN;
int32_t t82 = -826651300;
uint32_t x334 = UINT32_MAX;
volatile int32_t x336 = -318492;
volatile int32_t t83 = -7364;
static volatile int16_t x337 = -1;
volatile int64_t x338 = 14202LL;
int8_t x339 = INT8_MIN;
volatile int32_t x340 = INT32_MIN;
static int32_t t84 = -97;
uint32_t x341 = UINT32_MAX;
uint8_t x342 = 29U;
volatile uint8_t x346 = 14U;
volatile int32_t t87 = -7;
int8_t x360 = INT8_MIN;
volatile int64_t x362 = -1LL;
static uint16_t x367 = 5033U;
int64_t x374 = INT64_MIN;
volatile int16_t x375 = INT16_MIN;
int16_t x379 = INT16_MIN;
int16_t x384 = -1667;


void f0(void) {
	int8_t x2 = INT8_MAX;
	volatile int32_t x3 = -1;
	volatile uint32_t x4 = 2221290U;
	volatile int32_t t0 = -47504433;

	t0 = ((x1<(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 1U;
	int16_t x8 = -1;

	t1 = ((x5<(x6&x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint32_t x10 = 981690U;
	uint16_t x11 = 916U;
	volatile int32_t t2 = -4933;

	t2 = ((x9<(x10&x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	volatile int8_t x15 = INT8_MAX;
	volatile int32_t x16 = INT32_MAX;

	t3 = ((x13<(x14&x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MAX;
	int64_t x19 = INT64_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 604960783;

	t4 = ((x17<(x18&x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	volatile int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	static int32_t x24 = -4703;
	int32_t t5 = 4190419;

	t5 = ((x21<(x22&x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = INT32_MAX;
	int64_t x28 = 139231238758LL;
	int32_t t6 = -196447;

	t6 = ((x25<(x26&x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	static int32_t t7 = 8;

	t7 = ((x29<(x30&x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 90639633;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = 3;
	int64_t x36 = -8673323384359LL;
	int32_t t8 = 247245107;

	t8 = ((x33<(x34&x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 4649777;
	static uint16_t x38 = 62U;
	volatile int16_t x39 = -2846;
	uint8_t x40 = 27U;
	int32_t t9 = -205;

	t9 = ((x37<(x38&x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile int8_t x43 = 13;
	volatile int64_t x44 = -1LL;
	volatile int32_t t10 = 16;

	t10 = ((x41<(x42&x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	static int16_t x47 = -1;
	int8_t x48 = INT8_MAX;
	int32_t t11 = 43457742;

	t11 = ((x45<(x46&x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 2U;
	int64_t x50 = INT64_MIN;
	uint32_t x52 = 1139082U;
	volatile int32_t t12 = 5235;

	t12 = ((x49<(x50&x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x55 = -178253;
	static volatile int16_t x56 = -1;
	volatile int32_t t13 = 34;

	t13 = ((x53<(x54&x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 380;
	volatile int16_t x59 = 95;
	int64_t x60 = -19842303374891208LL;
	volatile int32_t t14 = -4500;

	t14 = ((x57<(x58&x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 93U;
	int64_t x62 = INT64_MIN;
	static int8_t x63 = -37;
	int16_t x64 = -1;
	int32_t t15 = 419782;

	t15 = ((x61<(x62&x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 6U;
	int32_t t16 = 37;

	t16 = ((x65<(x66&x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 9U;
	static int8_t x70 = INT8_MIN;
	uint32_t x71 = 1730742482U;
	int32_t t17 = 26472817;

	t17 = ((x69<(x70&x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	static uint8_t x74 = UINT8_MAX;
	int8_t x75 = 1;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 40;

	t18 = ((x73<(x74&x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 121U;
	volatile uint8_t x78 = 33U;
	int32_t x79 = INT32_MIN;
	volatile int32_t x80 = -1;

	t19 = ((x77<(x78&x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 38575082754629165LL;
	int64_t x82 = INT64_MIN;
	int16_t x83 = 0;
	int8_t x84 = -14;
	int32_t t20 = -23;

	t20 = ((x81<(x82&x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile uint8_t x86 = 0U;
	int32_t x87 = -1;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = 379;

	t21 = ((x85<(x86&x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	volatile uint16_t x90 = 1104U;
	int16_t x91 = 7586;
	volatile int64_t x92 = -1LL;

	t22 = ((x89<(x90&x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	volatile int32_t x94 = INT32_MAX;
	volatile int8_t x95 = 16;
	int64_t x96 = 537731867810LL;
	volatile int32_t t23 = 7796841;

	t23 = ((x93<(x94&x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 12845U;
	int8_t x98 = 0;
	volatile uint16_t x99 = 359U;
	int32_t x100 = INT32_MIN;
	int32_t t24 = 1477;

	t24 = ((x97<(x98&x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	volatile int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MIN;
	static int32_t x104 = INT32_MIN;
	static int32_t t25 = -1;

	t25 = ((x101<(x102&x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint32_t x106 = UINT32_MAX;
	volatile int16_t x107 = 2807;
	int64_t x108 = INT64_MAX;
	int32_t t26 = -1;

	t26 = ((x105<(x106&x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -20;

	t27 = ((x109<(x110&x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x114 = INT16_MAX;
	int8_t x115 = -31;
	static uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = -899020;

	t28 = ((x113<(x114&x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 5U;
	uint8_t x118 = 2U;
	int16_t x119 = INT16_MAX;
	int32_t t29 = 3347400;

	t29 = ((x117<(x118&x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -213;
	int8_t x122 = INT8_MAX;
	uint32_t x124 = 69U;
	int32_t t30 = 11;

	t30 = ((x121<(x122&x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 1;
	static int32_t x127 = INT32_MIN;
	int16_t x128 = -13544;
	volatile int32_t t31 = -37240;

	t31 = ((x125<(x126&x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 186LLU;
	static uint32_t x132 = 94U;

	t32 = ((x129<(x130&x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint16_t x134 = 131U;
	int32_t x135 = INT32_MIN;
	uint16_t x136 = 14U;
	int32_t t33 = -3436332;

	t33 = ((x133<(x134&x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MIN;
	int32_t x140 = 216;

	t34 = ((x137<(x138&x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile uint32_t x142 = UINT32_MAX;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = 2703U;
	int32_t t35 = 7223;

	t35 = ((x141<(x142&x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = 1421885;
	int8_t x146 = 0;
	int32_t x147 = -1;
	static uint16_t x148 = 115U;

	t36 = ((x145<(x146&x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = 17U;
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = 4LLU;
	static volatile int32_t t37 = -271933;

	t37 = ((x149<(x150&x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 6839678725LLU;
	int64_t x156 = INT64_MAX;
	int32_t t38 = 0;

	t38 = ((x153<(x154&x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -34;
	uint32_t x159 = 407372443U;
	static uint32_t x160 = 2U;
	int32_t t39 = 15;

	t39 = ((x157<(x158&x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	static int32_t t40 = -255991717;

	t40 = ((x161<(x162&x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MAX;
	uint16_t x168 = 1650U;
	int32_t t41 = 914545;

	t41 = ((x165<(x166&x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 11100U;
	uint64_t x172 = UINT64_MAX;

	t42 = ((x169<(x170&x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = 13;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t43 = -3;

	t43 = ((x173<(x174&x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int8_t x178 = -1;
	volatile int64_t x179 = INT64_MAX;
	int16_t x180 = -1;
	static int32_t t44 = 73113;

	t44 = ((x177<(x178&x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 180480LL;
	int32_t x182 = -1;
	int32_t x183 = INT32_MIN;
	volatile uint8_t x184 = 21U;
	static int32_t t45 = -456530687;

	t45 = ((x181<(x182&x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x187 = INT32_MIN;
	volatile int8_t x188 = INT8_MIN;
	int32_t t46 = -31127;

	t46 = ((x185<(x186&x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 321U;
	int32_t t47 = 3140563;

	t47 = ((x189<(x190&x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 11259031U;
	int32_t x195 = -45150;
	static int32_t x196 = INT32_MIN;

	t48 = ((x193<(x194&x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	static volatile int8_t x199 = INT8_MIN;
	static int16_t x200 = INT16_MIN;
	int32_t t49 = -97;

	t49 = ((x197<(x198&x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static int16_t x203 = INT16_MIN;
	static int64_t x204 = INT64_MIN;

	t50 = ((x201<(x202&x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	static int8_t x206 = INT8_MIN;
	static int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 1123;

	t51 = ((x205<(x206&x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int16_t x210 = INT16_MIN;
	static volatile int16_t x212 = INT16_MAX;
	static volatile int32_t t52 = -15;

	t52 = ((x209<(x210&x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	static volatile uint8_t x215 = UINT8_MAX;
	volatile int32_t t53 = -1;

	t53 = ((x213<(x214&x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static int64_t x218 = INT64_MIN;
	static volatile int8_t x219 = -1;
	volatile int64_t x220 = -1LL;
	volatile int32_t t54 = -762963477;

	t54 = ((x217<(x218&x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MAX;
	uint16_t x222 = 5324U;
	static int32_t x223 = INT32_MIN;
	static volatile int32_t t55 = -5804;

	t55 = ((x221<(x222&x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 1;
	int8_t x226 = -1;
	uint32_t x228 = 5826U;

	t56 = ((x225<(x226&x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	int64_t x231 = 452950989376109540LL;
	static uint64_t x232 = UINT64_MAX;
	int32_t t57 = -1400;

	t57 = ((x229<(x230&x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = UINT64_MAX;
	int16_t x234 = -2026;
	static uint16_t x236 = 48U;
	int32_t t58 = 4907;

	t58 = ((x233<(x234&x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 1U;
	int32_t t59 = -64;

	t59 = ((x237<(x238&x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	volatile int32_t t60 = -8723640;

	t60 = ((x241<(x242&x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -877LL;
	static uint32_t x246 = 174U;
	volatile int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t61 = -2;

	t61 = ((x245<(x246&x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 33U;
	static int16_t x252 = -1;
	int32_t t62 = -493980594;

	t62 = ((x249<(x250&x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	int64_t x256 = -189640933LL;
	static int32_t t63 = -1413;

	t63 = ((x253<(x254&x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 479160U;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 6113LLU;
	volatile int32_t t64 = -548;

	t64 = ((x257<(x258&x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 1004174182012274LLU;
	int32_t x262 = -51;
	static int16_t x263 = INT16_MIN;
	uint8_t x264 = 17U;
	int32_t t65 = -12;

	t65 = ((x261<(x262&x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -12761;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MAX;
	volatile int32_t t66 = -45;

	t66 = ((x265<(x266&x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 712869059202LLU;
	int8_t x271 = INT8_MIN;
	volatile int32_t t67 = 4;

	t67 = ((x269<(x270&x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = UINT8_MAX;
	uint16_t x276 = 2761U;

	t68 = ((x273<(x274&x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x278 = 1843U;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	static int32_t t69 = 8547133;

	t69 = ((x277<(x278&x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 24051U;
	uint8_t x282 = UINT8_MAX;
	volatile int16_t x283 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 567;

	t70 = ((x281<(x282&x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	static uint16_t x286 = UINT16_MAX;
	static int32_t t71 = 2295449;

	t71 = ((x285<(x286&x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -1;
	int16_t x290 = -1;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = 2U;
	int32_t t72 = -346549302;

	t72 = ((x289<(x290&x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int8_t x294 = INT8_MAX;
	int64_t x295 = 484750026560736963LL;
	volatile int32_t t73 = -3815;

	t73 = ((x293<(x294&x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -112;

	t74 = ((x297<(x298&x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x303 = 7U;
	int32_t t75 = 778265746;

	t75 = ((x301<(x302&x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -719;
	int8_t x307 = INT8_MIN;
	static uint16_t x308 = 26793U;
	static volatile int32_t t76 = -118803626;

	t76 = ((x305<(x306&x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 87U;
	uint8_t x311 = 2U;
	int64_t x312 = 10077579047LL;

	t77 = ((x309<(x310&x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 31382492002637LLU;
	static int8_t x314 = -1;
	volatile uint8_t x315 = UINT8_MAX;
	int32_t x316 = 6;
	static volatile int32_t t78 = -24;

	t78 = ((x313<(x314&x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -422728;
	int32_t t79 = -184;

	t79 = ((x317<(x318&x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = -1LL;
	uint16_t x323 = 541U;
	volatile int32_t t80 = -78893015;

	t80 = ((x321<(x322&x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	int64_t x326 = -1LL;
	volatile uint16_t x327 = 3528U;
	static int64_t x328 = -44296157332464025LL;
	int32_t t81 = -10;

	t81 = ((x325<(x326&x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	volatile int16_t x330 = 2;
	int64_t x331 = 1143334277685320719LL;
	int16_t x332 = INT16_MAX;

	t82 = ((x329<(x330&x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 4249U;
	int8_t x335 = -1;

	t83 = ((x333<(x334&x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {


	t84 = ((x337<(x338&x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x343 = 31U;
	int8_t x344 = -1;
	volatile int32_t t85 = 1068;

	t85 = ((x341<(x342&x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -649528107574362222LL;
	int16_t x347 = INT16_MIN;
	int8_t x348 = 56;
	static volatile int32_t t86 = -350448;

	t86 = ((x345<(x346&x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 39049818257LL;
	static int64_t x350 = -585444192869138302LL;
	volatile int32_t x351 = -1;
	int32_t x352 = INT32_MIN;

	t87 = ((x349<(x350&x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 387528;
	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MAX;
	uint8_t x356 = 95U;
	int32_t t88 = -69;

	t88 = ((x353<(x354&x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -347566792LL;
	int8_t x358 = -2;
	volatile int64_t x359 = 1640639LL;
	volatile int32_t t89 = 240;

	t89 = ((x357<(x358&x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 7U;
	int8_t x363 = INT8_MAX;
	static volatile int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 101099758;

	t90 = ((x361<(x362&x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -2801;
	uint64_t x366 = UINT64_MAX;
	int64_t x368 = -618LL;
	volatile int32_t t91 = 712724697;

	t91 = ((x365<(x366&x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = UINT64_MAX;
	uint16_t x370 = UINT16_MAX;
	uint16_t x371 = UINT16_MAX;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t92 = 530151;

	t92 = ((x369<(x370&x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 5704;
	int8_t x376 = INT8_MAX;
	int32_t t93 = -227245;

	t93 = ((x373<(x374&x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static uint64_t x378 = 121226000922160LLU;
	static int32_t x380 = 2639;
	static int32_t t94 = 53524;

	t94 = ((x377<(x378&x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int64_t x382 = INT64_MIN;
	static int64_t x383 = INT64_MIN;
	volatile int32_t t95 = -23;

	t95 = ((x381<(x382&x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MIN;
	uint64_t x386 = UINT64_MAX;
	static uint64_t x387 = 2517LLU;
	uint64_t x388 = UINT64_MAX;
	static int32_t t96 = -81177452;

	t96 = ((x385<(x386&x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 258371U;
	uint16_t x390 = 11203U;
	int8_t x391 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -623992;

	t97 = ((x389<(x390&x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	static volatile int32_t x396 = INT32_MAX;
	int32_t t98 = -1;

	t98 = ((x393<(x394&x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 0;
	static int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = -1;
	volatile int32_t t99 = -440401451;

	t99 = ((x397<(x398&x399))<=x400);

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

