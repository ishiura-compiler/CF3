#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
int64_t x11 = INT64_MAX;
static int64_t x22 = INT64_MAX;
static uint32_t x24 = UINT32_MAX;
int32_t t5 = -5;
static volatile int32_t t7 = 6;
uint32_t x33 = 8U;
static uint64_t x35 = UINT64_MAX;
volatile int32_t x38 = -190288;
static volatile int8_t x40 = INT8_MAX;
int32_t x43 = INT32_MIN;
uint32_t x44 = UINT32_MAX;
static int32_t t10 = -788;
volatile int16_t x55 = -1;
int32_t t12 = 1;
int32_t x58 = INT32_MIN;
static uint16_t x62 = 2533U;
volatile uint8_t x75 = UINT8_MAX;
volatile int32_t t18 = -23967;
static uint32_t x87 = UINT32_MAX;
int64_t x95 = INT64_MAX;
uint16_t x98 = 1264U;
static volatile int16_t x100 = INT16_MIN;
uint8_t x102 = UINT8_MAX;
int8_t x111 = -1;
static int8_t x116 = -1;
static uint32_t x119 = UINT32_MAX;
static int64_t x132 = -193997866LL;
static int16_t x136 = -1;
volatile int32_t t31 = -48020152;
volatile int8_t x143 = INT8_MIN;
static volatile int32_t t32 = 114;
static uint32_t x151 = 2103U;
uint32_t x154 = 1726602055U;
static int64_t x157 = -3945858475085591LL;
uint32_t x158 = 8097U;
int8_t x159 = INT8_MIN;
int8_t x162 = INT8_MIN;
int16_t x164 = 2178;
volatile int32_t t39 = -16389893;
int32_t x175 = 5913;
int32_t t40 = 133126009;
static uint64_t x183 = 918381LLU;
volatile int32_t t42 = -26388556;
int16_t x186 = INT16_MIN;
int16_t x188 = INT16_MIN;
volatile int8_t x189 = 0;
volatile int16_t x201 = -357;
static int32_t t48 = -9004;
uint64_t x212 = 747910847LLU;
int64_t x217 = INT64_MIN;
int32_t x219 = INT32_MIN;
uint8_t x220 = UINT8_MAX;
static int8_t x225 = INT8_MAX;
volatile int32_t t53 = 587;
static int64_t x229 = INT64_MIN;
int32_t x231 = INT32_MAX;
volatile uint64_t x233 = UINT64_MAX;
static int32_t x235 = INT32_MAX;
volatile int32_t t55 = 288;
volatile uint64_t x237 = 172647352717LLU;
uint16_t x241 = 357U;
volatile int32_t x246 = INT32_MIN;
uint16_t x248 = 244U;
int32_t x249 = INT32_MIN;
int32_t x255 = -223;
volatile int32_t t60 = -3023553;
volatile int16_t x265 = INT16_MIN;
static volatile int8_t x267 = 3;
int64_t x269 = INT64_MAX;
int8_t x271 = INT8_MIN;
volatile int8_t x274 = INT8_MIN;
volatile int32_t t66 = 1246;
int16_t x286 = -12639;
int8_t x290 = INT8_MIN;
int16_t x291 = 15;
int64_t x294 = -26043231018345803LL;
uint64_t x295 = UINT64_MAX;
static volatile int32_t t71 = -1323;
int64_t x308 = -1LL;
uint8_t x314 = UINT8_MAX;
static volatile int32_t x316 = INT32_MIN;
int16_t x317 = -45;
int16_t x319 = INT16_MAX;
volatile int32_t t80 = -571529942;
int8_t x348 = INT8_MIN;
uint16_t x354 = 5U;
static uint64_t x356 = 216546LLU;
volatile int64_t x358 = -1LL;
int32_t t86 = 1533;
int32_t t88 = -5147;
uint16_t x377 = UINT16_MAX;
int16_t x380 = INT16_MAX;
int64_t x388 = INT64_MAX;
int32_t x390 = INT32_MIN;
volatile int32_t t95 = 8906962;
int16_t x415 = -1;
static int32_t t96 = 68;
int64_t x419 = 927985798635LL;
int32_t t97 = 62794;
volatile int32_t x422 = INT32_MIN;
int16_t x426 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 130U;
	uint64_t x2 = 40421LLU;
	int32_t x3 = 1;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 4732113;

	t0 = ((x1-(x2/x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	static volatile int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = 1709;
	int32_t t1 = -848;

	t1 = ((x5-(x6/x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int64_t x12 = -1LL;
	static int32_t t2 = -31212;

	t2 = ((x9-(x10/x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static volatile uint64_t x14 = 200024LLU;
	uint64_t x15 = 462912LLU;
	int64_t x16 = 91LL;
	volatile int32_t t3 = -14391;

	t3 = ((x13-(x14/x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = -1LL;
	int16_t x19 = 500;
	volatile int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 9959467;

	t4 = ((x17-(x18/x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -18;
	int8_t x23 = INT8_MIN;

	t5 = ((x21-(x22/x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static uint32_t x26 = 24U;
	uint32_t x27 = 116092U;
	volatile uint16_t x28 = 22U;
	volatile int32_t t6 = -1;

	t6 = ((x25-(x26/x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = -90203;
	int16_t x31 = -1;
	int8_t x32 = INT8_MAX;

	t7 = ((x29-(x30/x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	int32_t x36 = -1;
	volatile int32_t t8 = -1;

	t8 = ((x33-(x34/x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -3;
	int64_t x39 = 671834LL;
	volatile int32_t t9 = -17;

	t9 = ((x37-(x38/x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int64_t x42 = -5329990455630753LL;

	t10 = ((x41-(x42/x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = UINT32_MAX;
	int64_t x50 = -1LL;
	uint32_t x51 = 20U;
	int32_t x52 = INT32_MIN;
	int32_t t11 = -1018252760;

	t11 = ((x49-(x50/x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = -1LL;
	int16_t x54 = INT16_MAX;
	static int16_t x56 = INT16_MAX;

	t12 = ((x53-(x54/x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	volatile int64_t x59 = -252580969018624211LL;
	int64_t x60 = 3LL;
	int32_t t13 = -51779;

	t13 = ((x57-(x58/x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 0U;
	static uint32_t x63 = 5U;
	uint16_t x64 = UINT16_MAX;
	static int32_t t14 = -12132;

	t14 = ((x61-(x62/x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	static int64_t x70 = INT64_MAX;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = 41;
	int32_t t15 = 242341;

	t15 = ((x69-(x70/x71))<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 1221927780LLU;
	int8_t x74 = INT8_MIN;
	int32_t x76 = -4401;
	volatile int32_t t16 = -1;

	t16 = ((x73-(x74/x75))<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MAX;
	static volatile int64_t x79 = -1LL;
	int8_t x80 = 33;
	volatile int32_t t17 = 2027885;

	t17 = ((x77-(x78/x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	int32_t x82 = -1;
	volatile uint16_t x83 = UINT16_MAX;
	volatile uint64_t x84 = 76956963738LLU;

	t18 = ((x81-(x82/x83))<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = 32775311831340473LLU;
	int32_t x88 = INT32_MIN;
	int32_t t19 = -6732;

	t19 = ((x85-(x86/x87))<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -909556;
	volatile int32_t x90 = -1398;
	static volatile int64_t x91 = INT64_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t20 = -15;

	t20 = ((x89-(x90/x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = UINT32_MAX;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = -1LL;
	int32_t t21 = -39164595;

	t21 = ((x93-(x94/x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 61538102U;
	static int8_t x99 = 1;
	static int32_t t22 = 1802007;

	t22 = ((x97-(x98/x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int16_t x103 = -1;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = -24;

	t23 = ((x101-(x102/x103))<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 298U;
	int16_t x110 = 36;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t24 = -46498116;

	t24 = ((x109-(x110/x111))<=x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 1U;
	int32_t x114 = INT32_MAX;
	static int32_t x115 = INT32_MIN;
	int32_t t25 = 59871859;

	t25 = ((x113-(x114/x115))<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 2921530U;
	static int64_t x118 = INT64_MIN;
	uint8_t x120 = 45U;
	static int32_t t26 = 104;

	t26 = ((x117-(x118/x119))<=x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1589;
	uint32_t x122 = UINT32_MAX;
	volatile uint16_t x123 = UINT16_MAX;
	static int8_t x124 = 1;
	int32_t t27 = 765;

	t27 = ((x121-(x122/x123))<=x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = INT16_MIN;
	uint8_t x126 = 8U;
	uint64_t x127 = 57907433LLU;
	int16_t x128 = INT16_MAX;
	static volatile int32_t t28 = 228;

	t28 = ((x125-(x126/x127))<=x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	static int8_t x130 = 38;
	uint32_t x131 = 16595U;
	int32_t t29 = 243;

	t29 = ((x129-(x130/x131))<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = 7744575;
	volatile int32_t x135 = INT32_MAX;
	volatile int32_t t30 = -475;

	t30 = ((x133-(x134/x135))<=x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = 6;
	int32_t x138 = -6174;
	static int16_t x139 = INT16_MIN;
	int8_t x140 = 15;

	t31 = ((x137-(x138/x139))<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	volatile int64_t x142 = -1LL;
	volatile int16_t x144 = -1;

	t32 = ((x141-(x142/x143))<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = 1;
	uint16_t x146 = 10776U;
	volatile int8_t x147 = INT8_MIN;
	volatile uint64_t x148 = 741209643LLU;
	volatile int32_t t33 = 22;

	t33 = ((x145-(x146/x147))<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	volatile int32_t x150 = -1;
	uint16_t x152 = 0U;
	volatile int32_t t34 = -107252;

	t34 = ((x149-(x150/x151))<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	static int16_t x155 = -3815;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int32_t t35 = 3;

	t35 = ((x153-(x154/x155))<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t36 = -6;

	t36 = ((x157-(x158/x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	int16_t x163 = INT16_MAX;
	int32_t t37 = 128062499;

	t37 = ((x161-(x162/x163))<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x165 = 0U;
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 223358760U;
	static uint16_t x168 = UINT16_MAX;
	static int32_t t38 = -1603415;

	t38 = ((x165-(x166/x167))<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = 28122787559522LL;
	int8_t x170 = -1;
	int32_t x171 = 12304;
	uint32_t x172 = UINT32_MAX;

	t39 = ((x169-(x170/x171))<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 214411494U;
	int8_t x174 = INT8_MIN;
	volatile uint32_t x176 = UINT32_MAX;

	t40 = ((x173-(x174/x175))<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 6U;
	uint64_t x179 = 96018665LLU;
	int16_t x180 = -1;
	int32_t t41 = 18637;

	t41 = ((x177-(x178/x179))<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1;
	volatile int8_t x182 = INT8_MAX;
	uint16_t x184 = 2035U;

	t42 = ((x181-(x182/x183))<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = -6496876276086812LL;
	uint64_t x187 = UINT64_MAX;
	static volatile int32_t t43 = 1;

	t43 = ((x185-(x186/x187))<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x190 = -1LL;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = -5;
	volatile int32_t t44 = 33158827;

	t44 = ((x189-(x190/x191))<=x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x193 = 2U;
	uint32_t x194 = 15U;
	int64_t x195 = -1LL;
	int64_t x196 = INT64_MIN;
	int32_t t45 = -5848;

	t45 = ((x193-(x194/x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -1;
	int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t46 = 1001798;

	t46 = ((x197-(x198/x199))<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x202 = -1;
	uint64_t x203 = 6672LLU;
	int8_t x204 = INT8_MAX;
	volatile int32_t t47 = -115;

	t47 = ((x201-(x202/x203))<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x205 = -1;
	int16_t x206 = -7243;
	volatile int8_t x207 = 1;
	int16_t x208 = 1;

	t48 = ((x205-(x206/x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	volatile int32_t t49 = 734799;

	t49 = ((x209-(x210/x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	int64_t x214 = -1597672LL;
	static uint64_t x215 = 117241827937938070LLU;
	int16_t x216 = 5;
	volatile int32_t t50 = 240;

	t50 = ((x213-(x214/x215))<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x218 = INT8_MIN;
	static volatile int32_t t51 = 116;

	t51 = ((x217-(x218/x219))<=x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = 30;
	int8_t x222 = 0;
	int16_t x223 = -1;
	int32_t x224 = 458113;
	volatile int32_t t52 = -1;

	t52 = ((x221-(x222/x223))<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	int8_t x228 = -2;

	t53 = ((x225-(x226/x227))<=x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x230 = -2;
	int64_t x232 = INT64_MAX;
	volatile int32_t t54 = -494;

	t54 = ((x229-(x230/x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x234 = 1;
	int32_t x236 = INT32_MIN;

	t55 = ((x233-(x234/x235))<=x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x238 = 38U;
	int64_t x239 = INT64_MIN;
	volatile uint16_t x240 = 3746U;
	volatile int32_t t56 = 3;

	t56 = ((x237-(x238/x239))<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MIN;
	int8_t x244 = -1;
	volatile int32_t t57 = 56409;

	t57 = ((x241-(x242/x243))<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = INT8_MIN;
	int32_t x247 = INT32_MAX;
	static volatile int32_t t58 = 7;

	t58 = ((x245-(x246/x247))<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x250 = -5;
	volatile int8_t x251 = INT8_MIN;
	static int16_t x252 = INT16_MIN;
	int32_t t59 = 0;

	t59 = ((x249-(x250/x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x253 = 116U;
	volatile int8_t x254 = INT8_MIN;
	int16_t x256 = INT16_MAX;

	t60 = ((x253-(x254/x255))<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -1LL;
	uint16_t x258 = 497U;
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t61 = -1949;

	t61 = ((x257-(x258/x259))<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = -1LL;
	int16_t x262 = -1;
	int32_t x263 = 485415;
	volatile int32_t x264 = -937436718;
	int32_t t62 = 10525;

	t62 = ((x261-(x262/x263))<=x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = 6;
	uint16_t x268 = 44U;
	volatile int32_t t63 = 15304874;

	t63 = ((x265-(x266/x267))<=x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x270 = UINT32_MAX;
	volatile int8_t x272 = INT8_MAX;
	int32_t t64 = 190;

	t64 = ((x269-(x270/x271))<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;
	volatile int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MAX;
	int32_t t65 = 3750;

	t65 = ((x273-(x274/x275))<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x277 = -1;
	uint64_t x278 = 135560452776LLU;
	static int8_t x279 = -1;
	int8_t x280 = INT8_MIN;

	t66 = ((x277-(x278/x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = 591830440777084LL;
	int16_t x282 = 2;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = -1LL;
	static int32_t t67 = 3;

	t67 = ((x281-(x282/x283))<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t68 = 6493;

	t68 = ((x285-(x286/x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 42;
	int16_t x292 = 0;
	volatile int32_t t69 = 7950490;

	t69 = ((x289-(x290/x291))<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x293 = 10U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = 13607440;

	t70 = ((x293-(x294/x295))<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -6349362067733LL;
	volatile uint8_t x299 = UINT8_MAX;
	static volatile int16_t x300 = -131;

	t71 = ((x297-(x298/x299))<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x305 = INT64_MAX;
	uint32_t x306 = 40515158U;
	int64_t x307 = 328LL;
	volatile int32_t t72 = -9355;

	t72 = ((x305-(x306/x307))<=x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = -1;
	int32_t x311 = -1;
	uint8_t x312 = 15U;
	static int32_t t73 = -9;

	t73 = ((x309-(x310/x311))<=x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -1;
	static int16_t x315 = INT16_MIN;
	static volatile int32_t t74 = 6738;

	t74 = ((x313-(x314/x315))<=x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x318 = 10U;
	int16_t x320 = 11;
	static volatile int32_t t75 = 0;

	t75 = ((x317-(x318/x319))<=x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MAX;
	uint64_t x322 = 15716189211304LLU;
	int8_t x323 = 7;
	int32_t x324 = 908999329;
	int32_t t76 = 1779030;

	t76 = ((x321-(x322/x323))<=x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = -1;
	volatile int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	static int32_t t77 = -305211212;

	t77 = ((x325-(x326/x327))<=x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = -29670670LL;
	uint32_t x330 = 25984196U;
	int16_t x331 = INT16_MIN;
	int32_t x332 = -1;
	int32_t t78 = 567033278;

	t78 = ((x329-(x330/x331))<=x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x337 = INT8_MIN;
	int8_t x338 = -1;
	int8_t x339 = 41;
	uint64_t x340 = 309245444329868485LLU;
	int32_t t79 = -1;

	t79 = ((x337-(x338/x339))<=x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = -1LL;
	static int64_t x343 = INT64_MIN;
	uint64_t x344 = 28901548003948LLU;

	t80 = ((x341-(x342/x343))<=x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x345 = 490LLU;
	uint8_t x346 = 88U;
	static int8_t x347 = INT8_MAX;
	int32_t t81 = -639;

	t81 = ((x345-(x346/x347))<=x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -66;
	int8_t x350 = 3;
	uint32_t x351 = 192888U;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t82 = 118306;

	t82 = ((x349-(x350/x351))<=x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x353 = INT32_MIN;
	int8_t x355 = INT8_MIN;
	volatile int32_t t83 = -79035;

	t83 = ((x353-(x354/x355))<=x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = INT8_MIN;
	int64_t x359 = INT64_MIN;
	static volatile uint32_t x360 = 283633345U;
	volatile int32_t t84 = 538;

	t84 = ((x357-(x358/x359))<=x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x361 = 20668;
	volatile uint16_t x362 = UINT16_MAX;
	int32_t x363 = INT32_MIN;
	static uint16_t x364 = 994U;
	int32_t t85 = 28;

	t85 = ((x361-(x362/x363))<=x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x365 = UINT8_MAX;
	uint16_t x366 = 240U;
	static int32_t x367 = -1866387;
	int32_t x368 = INT32_MIN;

	t86 = ((x365-(x366/x367))<=x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 21U;
	static int16_t x370 = 56;
	uint16_t x371 = 352U;
	uint64_t x372 = 500616LLU;
	volatile int32_t t87 = 53231081;

	t87 = ((x369-(x370/x371))<=x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = 307U;
	static int8_t x374 = 5;
	uint8_t x375 = 11U;
	static volatile int32_t x376 = -1;

	t88 = ((x373-(x374/x375))<=x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x378 = UINT64_MAX;
	static int64_t x379 = 152442683550LL;
	volatile int32_t t89 = -279477851;

	t89 = ((x377-(x378/x379))<=x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 77902735U;
	volatile int64_t x387 = 1881542015318230162LL;
	volatile int32_t t90 = -32466786;

	t90 = ((x385-(x386/x387))<=x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	uint64_t x391 = 54550687632766936LLU;
	int32_t x392 = -377230635;
	volatile int32_t t91 = -562407;

	t91 = ((x389-(x390/x391))<=x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	uint16_t x395 = UINT16_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t92 = 9718602;

	t92 = ((x393-(x394/x395))<=x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = -517620LL;
	static int64_t x399 = INT64_MIN;
	uint16_t x400 = UINT16_MAX;
	int32_t t93 = -3169;

	t93 = ((x397-(x398/x399))<=x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x401 = 84275181LL;
	int32_t x402 = INT32_MAX;
	uint8_t x403 = 3U;
	uint32_t x404 = 5235U;
	int32_t t94 = -1292;

	t94 = ((x401-(x402/x403))<=x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x405 = INT32_MIN;
	static int64_t x406 = 0LL;
	volatile int32_t x407 = -1;
	int8_t x408 = INT8_MIN;

	t95 = ((x405-(x406/x407))<=x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 2671U;
	int8_t x414 = -1;
	static uint16_t x416 = 9414U;

	t96 = ((x413-(x414/x415))<=x416);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MIN;
	volatile int32_t x418 = INT32_MIN;
	static int16_t x420 = 2;

	t97 = ((x417-(x418/x419))<=x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x421 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	int64_t x424 = -1LL;
	static volatile int32_t t98 = -1;

	t98 = ((x421-(x422/x423))<=x424);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x425 = 18325619027229230LLU;
	static int32_t x427 = -32;
	int8_t x428 = INT8_MIN;
	volatile int32_t t99 = -6366;

	t99 = ((x425-(x426/x427))<=x428);

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

