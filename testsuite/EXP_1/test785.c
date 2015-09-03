#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x12 = 105574380542LLU;
volatile uint64_t x13 = 713647329146513LLU;
volatile int32_t t3 = -258980836;
int16_t x17 = INT16_MAX;
volatile uint32_t x23 = UINT32_MAX;
int32_t x32 = -1;
uint8_t x33 = UINT8_MAX;
static uint64_t x51 = UINT64_MAX;
static volatile int32_t x55 = -17321365;
uint8_t x56 = UINT8_MAX;
uint16_t x59 = 2647U;
int16_t x69 = INT16_MIN;
volatile int32_t t15 = -6;
volatile int32_t t17 = 1834012;
static uint64_t x83 = 169526487818973534LLU;
uint32_t x84 = 3802U;
volatile int32_t t20 = -2765804;
int64_t t22 = -28156260799945062LL;
int32_t x111 = -13685321;
int64_t x117 = 44255576305487LL;
int8_t x119 = INT8_MIN;
int32_t x123 = -5;
int8_t x124 = INT8_MIN;
volatile int32_t t28 = 22;
int64_t x125 = -1LL;
int16_t x133 = 390;
uint8_t x138 = 52U;
uint32_t x140 = 6232U;
static int32_t x144 = -1;
volatile uint16_t x148 = UINT16_MAX;
int16_t x156 = 1;
int32_t x159 = INT32_MIN;
volatile int32_t t37 = -8151820;
uint32_t x172 = UINT32_MAX;
int64_t x181 = -2618503432LL;
uint8_t x182 = UINT8_MAX;
int64_t x185 = -1LL;
volatile uint64_t x190 = 5918894097230LLU;
static int32_t t44 = 2;
int32_t t46 = 124780135;
static int16_t x216 = 1;
uint16_t x217 = 1U;
static int8_t x228 = -47;
int32_t t53 = 1638;
uint16_t x229 = 5795U;
int8_t x230 = INT8_MIN;
uint16_t x233 = 2U;
int16_t x237 = -1;
int8_t x238 = INT8_MIN;
int64_t x262 = INT64_MIN;
static volatile int32_t x265 = 288659563;
uint32_t x269 = 373737U;
int32_t x279 = INT32_MIN;
int32_t t67 = -40697189;
int32_t x297 = -110986002;
uint32_t x302 = 13812U;
int64_t t69 = 25LL;
uint16_t x305 = UINT16_MAX;
int8_t x334 = INT8_MAX;
int8_t x335 = 14;
volatile int32_t t77 = 6941;
static volatile int32_t t79 = 222787;
uint16_t x356 = 1U;
uint16_t x367 = 0U;
uint64_t x368 = 163140752620LLU;
uint16_t x369 = UINT16_MAX;
static int16_t x370 = INT16_MAX;
int8_t x371 = INT8_MIN;
uint8_t x373 = 61U;
int16_t x374 = -1;
volatile uint16_t x380 = 269U;
int32_t t87 = 1059787997;
volatile uint8_t x391 = UINT8_MAX;
static uint64_t x392 = UINT64_MAX;
int8_t x394 = 3;
int64_t x395 = -32LL;
volatile int32_t t91 = -1;
int8_t x400 = INT8_MIN;
int32_t t92 = 174007;
int64_t x406 = INT64_MIN;
volatile int64_t x408 = 421440714401LL;
uint16_t x412 = 1533U;
int32_t x417 = -519602598;
int64_t t97 = -9336LL;
int32_t x421 = INT32_MIN;


void f0(void) {
	static volatile int8_t x1 = INT8_MAX;
	int8_t x2 = 48;
	volatile int16_t x3 = -15;
	uint32_t x4 = 1746U;
	volatile uint32_t t0 = 249855U;

	t0 = (((x1%x2)<x3)%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	int64_t x7 = -21288534LL;
	int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -166029;

	t1 = (((x5%x6)<x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MAX;
	volatile uint64_t x11 = UINT64_MAX;
	uint64_t t2 = 72539099976217LLU;

	t2 = (((x9%x10)<x11)%x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = UINT16_MAX;
	int64_t x15 = 1LL;
	int32_t x16 = -25;

	t3 = (((x13%x14)<x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	uint16_t x20 = 3U;
	static int32_t t4 = -14557509;

	t4 = (((x17%x18)<x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	int16_t x22 = INT16_MIN;
	int32_t x24 = -558;
	volatile int32_t t5 = -2;

	t5 = (((x21%x22)<x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = -36;
	int64_t x27 = -41LL;
	static int16_t x28 = 719;
	static volatile int32_t t6 = -1;

	t6 = (((x25%x26)<x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint32_t x30 = UINT32_MAX;
	static int32_t x31 = INT32_MIN;
	static int32_t t7 = 1231;

	t7 = (((x29%x30)<x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MIN;
	uint8_t x36 = 54U;
	static volatile int32_t t8 = -249701477;

	t8 = (((x33%x34)<x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int8_t x38 = -5;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -2;

	t9 = (((x37%x38)<x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	volatile int32_t x50 = -1;
	int32_t x52 = -1;
	int32_t t10 = 7;

	t10 = (((x49%x50)<x51)%x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MIN;
	volatile int32_t t11 = 308153424;

	t11 = (((x53%x54)<x55)%x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 10;
	int8_t x58 = INT8_MIN;
	int64_t x60 = INT64_MAX;
	int64_t t12 = 17591008033188LL;

	t12 = (((x57%x58)<x59)%x60);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 156LLU;
	static int8_t x62 = INT8_MIN;
	volatile int64_t x63 = INT64_MIN;
	int64_t x64 = -59112404LL;
	volatile int64_t t13 = 627LL;

	t13 = (((x61%x62)<x63)%x64);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = 9LL;
	int64_t x66 = INT64_MAX;
	uint8_t x67 = 67U;
	static uint64_t x68 = 945451207900311409LLU;
	volatile uint64_t t14 = 163196475575LLU;

	t14 = (((x65%x66)<x67)%x68);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x70 = 847332;
	uint32_t x71 = 5525U;
	static uint16_t x72 = UINT16_MAX;

	t15 = (((x69%x70)<x71)%x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	static int64_t x74 = INT64_MAX;
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t16 = 4U;

	t16 = (((x73%x74)<x75)%x76);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = UINT32_MAX;
	volatile uint64_t x78 = 4229263487LLU;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 3U;

	t17 = (((x77%x78)<x79)%x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 56567751U;
	static int32_t x82 = -7;
	uint32_t t18 = 303002586U;

	t18 = (((x81%x82)<x83)%x84);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	static volatile int16_t x86 = INT16_MAX;
	int16_t x87 = INT16_MAX;
	uint8_t x88 = 70U;
	volatile int32_t t19 = 9403;

	t19 = (((x85%x86)<x87)%x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	static int16_t x90 = -3321;
	uint16_t x91 = 347U;
	static volatile uint8_t x92 = UINT8_MAX;

	t20 = (((x89%x90)<x91)%x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 16728U;
	uint32_t x94 = 1431U;
	static int8_t x95 = INT8_MAX;
	int16_t x96 = 107;
	volatile int32_t t21 = -338140;

	t21 = (((x93%x94)<x95)%x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	static uint32_t x98 = 874875490U;
	int8_t x99 = INT8_MIN;
	static int64_t x100 = INT64_MIN;

	t22 = (((x97%x98)<x99)%x100);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	int32_t x102 = -103;
	uint64_t x103 = 116LLU;
	int32_t x104 = INT32_MIN;
	int32_t t23 = -658;

	t23 = (((x101%x102)<x103)%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = 3067799871LL;
	volatile int16_t x107 = -1;
	uint16_t x108 = 959U;
	int32_t t24 = -33335649;

	t24 = (((x105%x106)<x107)%x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = INT16_MIN;
	uint16_t x110 = 1U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 3683;

	t25 = (((x109%x110)<x111)%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -157;
	int16_t x114 = INT16_MIN;
	volatile int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t26 = -194;

	t26 = (((x113%x114)<x115)%x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x118 = UINT16_MAX;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t27 = -27307912;

	t27 = (((x117%x118)<x119)%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	volatile int32_t x122 = -1;

	t28 = (((x121%x122)<x123)%x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x126 = INT32_MIN;
	volatile int16_t x127 = INT16_MIN;
	int32_t x128 = -2;
	int32_t t29 = -837697;

	t29 = (((x125%x126)<x127)%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 23U;
	int32_t x130 = INT32_MAX;
	volatile int8_t x131 = INT8_MIN;
	volatile int8_t x132 = -23;
	int32_t t30 = 0;

	t30 = (((x129%x130)<x131)%x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	int32_t x136 = INT32_MIN;
	static int32_t t31 = -7230513;

	t31 = (((x133%x134)<x135)%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = 7;
	int32_t x139 = INT32_MAX;
	volatile uint32_t t32 = 203412U;

	t32 = (((x137%x138)<x139)%x140);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	uint8_t x142 = 46U;
	uint32_t x143 = 0U;
	int32_t t33 = -2298064;

	t33 = (((x141%x142)<x143)%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -299;
	static int8_t x146 = 14;
	int8_t x147 = INT8_MAX;
	int32_t t34 = 47;

	t34 = (((x145%x146)<x147)%x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x149 = INT8_MIN;
	static volatile int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MAX;
	volatile int32_t x152 = INT32_MIN;
	int32_t t35 = -64;

	t35 = (((x149%x150)<x151)%x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 32426840985LLU;
	static volatile int16_t x154 = 3;
	volatile int8_t x155 = INT8_MAX;
	int32_t t36 = -591210445;

	t36 = (((x153%x154)<x155)%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -5;
	volatile uint16_t x158 = 797U;
	volatile int16_t x160 = -1;

	t37 = (((x157%x158)<x159)%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = 1;
	static int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MAX;
	static int32_t t38 = -6;

	t38 = (((x161%x162)<x163)%x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = UINT64_MAX;
	uint32_t x171 = 1108334U;
	volatile uint32_t t39 = 47400504U;

	t39 = (((x169%x170)<x171)%x172);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = -33;
	int32_t x174 = 1;
	int8_t x175 = 5;
	int16_t x176 = INT16_MIN;
	volatile int32_t t40 = -1;

	t40 = (((x173%x174)<x175)%x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x177 = -1;
	int8_t x178 = -1;
	volatile int32_t x179 = -14438;
	uint8_t x180 = 2U;
	static volatile int32_t t41 = -14658201;

	t41 = (((x177%x178)<x179)%x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x183 = INT32_MIN;
	int16_t x184 = -1;
	int32_t t42 = 2975873;

	t42 = (((x181%x182)<x183)%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x186 = 474;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = 40343LLU;
	static volatile uint64_t t43 = 7345LLU;

	t43 = (((x185%x186)<x187)%x188);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = INT16_MAX;
	volatile uint8_t x191 = 26U;
	int16_t x192 = -5;

	t44 = (((x189%x190)<x191)%x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 42U;
	int32_t x194 = INT32_MAX;
	static int8_t x195 = INT8_MIN;
	uint64_t x196 = 1735LLU;
	volatile uint64_t t45 = 1379565062LLU;

	t45 = (((x193%x194)<x195)%x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = 1;
	int32_t x198 = -35682782;
	uint32_t x199 = 40464U;
	int32_t x200 = INT32_MAX;

	t46 = (((x197%x198)<x199)%x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = 170;
	int64_t x202 = 109LL;
	static int16_t x203 = -1818;
	int16_t x204 = INT16_MAX;
	static volatile int32_t t47 = 9;

	t47 = (((x201%x202)<x203)%x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = -1LL;
	int16_t x207 = 3;
	volatile uint8_t x208 = 21U;
	int32_t t48 = -454322042;

	t48 = (((x205%x206)<x207)%x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = -41;
	volatile int64_t x210 = INT64_MAX;
	static int16_t x211 = 3;
	uint64_t x212 = 2368LLU;
	uint64_t t49 = 1638534275LLU;

	t49 = (((x209%x210)<x211)%x212);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	volatile int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;
	static volatile int32_t t50 = -1939420;

	t50 = (((x213%x214)<x215)%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x218 = 98;
	uint16_t x219 = UINT16_MAX;
	int64_t x220 = -80982664623692LL;
	volatile int64_t t51 = -258562LL;

	t51 = (((x217%x218)<x219)%x220);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	volatile int64_t x222 = 57411LL;
	int8_t x223 = 49;
	int64_t x224 = INT64_MIN;
	volatile int64_t t52 = 529941398178LL;

	t52 = (((x221%x222)<x223)%x224);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MAX;
	static volatile int32_t x226 = INT32_MAX;
	volatile uint16_t x227 = 2U;

	t53 = (((x225%x226)<x227)%x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x231 = -20;
	static uint32_t x232 = 24189U;
	static uint32_t t54 = 28785320U;

	t54 = (((x229%x230)<x231)%x232);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x234 = UINT64_MAX;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = -46775559;
	volatile int32_t t55 = -220;

	t55 = (((x233%x234)<x235)%x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x239 = INT8_MIN;
	static volatile uint16_t x240 = 1344U;
	static volatile int32_t t56 = -39235;

	t56 = (((x237%x238)<x239)%x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	static int32_t t57 = -1;

	t57 = (((x241%x242)<x243)%x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x249 = UINT16_MAX;
	static int32_t x250 = 452;
	int16_t x251 = -1;
	int8_t x252 = INT8_MIN;
	static int32_t t58 = -251;

	t58 = (((x249%x250)<x251)%x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x253 = 3213754675LLU;
	int32_t x254 = INT32_MAX;
	int32_t x255 = 719;
	static int32_t x256 = INT32_MIN;
	int32_t t59 = -27;

	t59 = (((x253%x254)<x255)%x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 7U;
	uint32_t x263 = 12310980U;
	int16_t x264 = INT16_MIN;
	int32_t t60 = -1002765780;

	t60 = (((x261%x262)<x263)%x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x266 = UINT8_MAX;
	int32_t x267 = 11;
	uint32_t x268 = 16U;
	volatile uint32_t t61 = 50U;

	t61 = (((x265%x266)<x267)%x268);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x270 = -1LL;
	volatile uint16_t x271 = 206U;
	int64_t x272 = -96LL;
	volatile int64_t t62 = -1779432741038LL;

	t62 = (((x269%x270)<x271)%x272);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	uint64_t x274 = UINT64_MAX;
	uint64_t x275 = 2790LLU;
	volatile uint8_t x276 = 7U;
	int32_t t63 = 2246;

	t63 = (((x273%x274)<x275)%x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MAX;
	int16_t x280 = 2859;
	int32_t t64 = 2543935;

	t64 = (((x277%x278)<x279)%x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 85U;
	volatile uint16_t x282 = 1U;
	volatile int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MAX;
	volatile int32_t t65 = 6453;

	t65 = (((x281%x282)<x283)%x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x289 = 847U;
	int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	volatile int8_t x292 = 1;
	int32_t t66 = -87;

	t66 = (((x289%x290)<x291)%x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 0U;
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MAX;
	int8_t x296 = 2;

	t67 = (((x293%x294)<x295)%x296);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x298 = INT64_MAX;
	int8_t x299 = 28;
	uint64_t x300 = 20325396658LLU;
	uint64_t t68 = 9257342467LLU;

	t68 = (((x297%x298)<x299)%x300);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = 14369LL;
	uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MIN;

	t69 = (((x301%x302)<x303)%x304);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x306 = -1LL;
	int64_t x307 = INT64_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t70 = 1969;

	t70 = (((x305%x306)<x307)%x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = -1;
	static volatile uint8_t x310 = 21U;
	int32_t x311 = -1;
	uint8_t x312 = 10U;
	volatile int32_t t71 = -545565582;

	t71 = (((x309%x310)<x311)%x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = -1LL;
	int16_t x314 = 169;
	int16_t x315 = 160;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t72 = -205065;

	t72 = (((x313%x314)<x315)%x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = 1023U;
	uint32_t x318 = 1669U;
	volatile int32_t x319 = 664991;
	int64_t x320 = INT64_MIN;
	int64_t t73 = -612422LL;

	t73 = (((x317%x318)<x319)%x320);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = 59U;
	static int64_t x323 = INT64_MIN;
	static volatile int64_t x324 = -1LL;
	volatile int64_t t74 = 0LL;

	t74 = (((x321%x322)<x323)%x324);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = 0U;
	int64_t x326 = -13246LL;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = 31530U;
	int32_t t75 = -1592;

	t75 = (((x325%x326)<x327)%x328);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 6024U;
	int64_t x331 = -1LL;
	int64_t x332 = 353678LL;
	volatile int64_t t76 = 3LL;

	t76 = (((x329%x330)<x331)%x332);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MIN;
	static int8_t x336 = INT8_MIN;

	t77 = (((x333%x334)<x335)%x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x341 = 0;
	volatile int16_t x342 = INT16_MIN;
	uint8_t x343 = 3U;
	volatile int8_t x344 = INT8_MIN;
	volatile int32_t t78 = -8109019;

	t78 = (((x341%x342)<x343)%x344);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x345 = UINT32_MAX;
	volatile int32_t x346 = INT32_MAX;
	uint64_t x347 = 1995LLU;
	volatile uint8_t x348 = 48U;

	t79 = (((x345%x346)<x347)%x348);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = -1;
	int32_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t80 = 103U;

	t80 = (((x349%x350)<x351)%x352);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = 1;
	volatile int32_t x354 = 39484453;
	int8_t x355 = INT8_MIN;
	int32_t t81 = 486;

	t81 = (((x353%x354)<x355)%x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 22U;
	volatile int16_t x358 = INT16_MAX;
	volatile int8_t x359 = INT8_MIN;
	int8_t x360 = 17;
	int32_t t82 = 85007;

	t82 = (((x357%x358)<x359)%x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -89384;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = -8486853;
	static int8_t x364 = 47;
	int32_t t83 = -1535;

	t83 = (((x361%x362)<x363)%x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x365 = 182592769043LL;
	int8_t x366 = -2;
	static volatile uint64_t t84 = 233102449102LLU;

	t84 = (((x365%x366)<x367)%x368);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x372 = -1LL;
	volatile int64_t t85 = 50811974302500LL;

	t85 = (((x369%x370)<x371)%x372);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x375 = -1;
	uint32_t x376 = 4509756U;
	volatile uint32_t t86 = 50558319U;

	t86 = (((x373%x374)<x375)%x376);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = 3500;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;

	t87 = (((x377%x378)<x379)%x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x381 = UINT8_MAX;
	static int8_t x382 = INT8_MAX;
	volatile uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = 11;
	volatile int32_t t88 = -986624525;

	t88 = (((x381%x382)<x383)%x384);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MAX;
	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = INT32_MIN;
	static int32_t t89 = 24419379;

	t89 = (((x385%x386)<x387)%x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x390 = INT64_MAX;
	volatile uint64_t t90 = 416148364694LLU;

	t90 = (((x389%x390)<x391)%x392);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = UINT16_MAX;
	uint16_t x396 = UINT16_MAX;

	t91 = (((x393%x394)<x395)%x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;

	t92 = (((x397%x398)<x399)%x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = INT64_MIN;
	uint64_t x402 = 6882981112LLU;
	static uint64_t x403 = UINT64_MAX;
	static uint8_t x404 = 29U;
	static int32_t t93 = -173943461;

	t93 = (((x401%x402)<x403)%x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x405 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	volatile int64_t t94 = 1LL;

	t94 = (((x405%x406)<x407)%x408);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x409 = UINT8_MAX;
	uint16_t x410 = 227U;
	volatile uint8_t x411 = 13U;
	volatile int32_t t95 = 233;

	t95 = (((x409%x410)<x411)%x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = UINT8_MAX;
	uint32_t x414 = 177981U;
	int32_t x415 = -11791;
	static int16_t x416 = INT16_MIN;
	int32_t t96 = 3954;

	t96 = (((x413%x414)<x415)%x416);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x418 = UINT32_MAX;
	static uint8_t x419 = 7U;
	static int64_t x420 = INT64_MIN;

	t97 = (((x417%x418)<x419)%x420);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x422 = INT32_MIN;
	static uint64_t x423 = 20749303LLU;
	int8_t x424 = -1;
	int32_t t98 = -1637;

	t98 = (((x421%x422)<x423)%x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = 14109;
	int8_t x426 = INT8_MAX;
	int64_t x427 = -1LL;
	int32_t x428 = INT32_MIN;
	static volatile int32_t t99 = -95583;

	t99 = (((x425%x426)<x427)%x428);

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

