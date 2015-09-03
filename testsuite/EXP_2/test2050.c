#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MAX;
static int32_t t1 = -1767;
volatile int32_t t2 = -70247;
int32_t x14 = INT32_MIN;
uint64_t x25 = UINT64_MAX;
int32_t x29 = INT32_MIN;
int64_t x30 = -2597916803436LL;
volatile int32_t t8 = -9843466;
uint16_t x43 = 1232U;
int64_t x49 = 92496251140LL;
int64_t x50 = INT64_MIN;
int64_t x53 = INT64_MIN;
int64_t x61 = -9425990LL;
uint16_t x64 = UINT16_MAX;
volatile int32_t t18 = 105617;
uint16_t x81 = 13U;
volatile int32_t t20 = -60091036;
volatile uint32_t x90 = 958229486U;
int64_t x99 = INT64_MIN;
volatile int32_t x100 = INT32_MIN;
int16_t x103 = 916;
volatile uint8_t x112 = 26U;
int64_t x129 = -1LL;
int32_t x132 = 1;
volatile int32_t t31 = -7039329;
uint8_t x137 = 1U;
volatile int32_t t33 = 31179;
uint8_t x154 = UINT8_MAX;
int64_t x155 = INT64_MAX;
int16_t x160 = -1;
volatile int16_t x169 = INT16_MIN;
int32_t x170 = -2;
int8_t x172 = INT8_MIN;
volatile int32_t t38 = -73;
int8_t x174 = INT8_MAX;
int64_t x183 = INT64_MIN;
static volatile int32_t t42 = 944;
int64_t x198 = -4354151130424LL;
static int32_t x202 = -1;
volatile int32_t x206 = INT32_MIN;
int32_t t46 = -1;
static uint64_t x209 = 5LLU;
uint32_t x213 = 2327U;
int32_t x222 = 1393973;
uint64_t x234 = 2151847277039764422LLU;
uint32_t x240 = UINT32_MAX;
volatile int64_t x244 = INT64_MIN;
volatile int32_t t57 = 8;
int32_t x259 = INT32_MIN;
uint8_t x261 = UINT8_MAX;
static uint16_t x262 = 55U;
int32_t x265 = INT32_MIN;
uint8_t x270 = 10U;
static int32_t t63 = -1061225;
int64_t x277 = INT64_MAX;
volatile int16_t x284 = INT16_MIN;
uint64_t x289 = 1804394874LLU;
volatile uint64_t x292 = UINT64_MAX;
static int32_t x298 = 396;
volatile int32_t t68 = 327832477;
int16_t x308 = -1;
volatile int64_t x312 = -62941403648753LL;
int16_t x319 = -1;
volatile int32_t t73 = 387;
static int16_t x327 = -343;
volatile uint32_t x328 = 2331846U;
int32_t x330 = -227;
uint64_t x331 = UINT64_MAX;
static uint16_t x339 = UINT16_MAX;
static int16_t x341 = INT16_MAX;
int8_t x343 = INT8_MIN;
static uint8_t x345 = 25U;
uint32_t x346 = UINT32_MAX;
int32_t x348 = INT32_MAX;
static uint8_t x370 = 10U;
int16_t x372 = INT16_MIN;
int64_t x373 = INT64_MIN;
static int32_t t83 = -18;
int32_t t84 = 1;
int32_t x389 = INT32_MAX;
volatile int32_t t85 = -64881044;
volatile int16_t x396 = INT16_MAX;
uint64_t x398 = UINT64_MAX;
uint32_t x412 = UINT32_MAX;
int32_t t91 = 7716811;
static int32_t t92 = 7852712;
static int8_t x423 = 42;
uint32_t x426 = 10U;
int32_t x428 = INT32_MIN;
int64_t x432 = INT64_MAX;
int32_t t95 = -1072271;
static int8_t x435 = INT8_MIN;
static int8_t x444 = 11;
int32_t x448 = 1065277398;


void f0(void) {
	volatile uint16_t x1 = 7180U;
	uint64_t x2 = UINT64_MAX;
	volatile int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 1015008;

	t0 = ((x1-(x2^x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -418LL;
	uint8_t x7 = 4U;
	int32_t x8 = INT32_MAX;

	t1 = ((x5-(x6^x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = -1;
	int8_t x11 = -1;
	int16_t x12 = INT16_MIN;

	t2 = ((x9-(x10^x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 1;
	volatile int32_t x15 = INT32_MAX;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 350;

	t3 = ((x13-(x14^x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = -1LL;
	int32_t t4 = -22;

	t4 = ((x17-(x18^x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -2958054LL;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 250008LLU;
	int64_t x24 = -1LL;
	int32_t t5 = 11885;

	t5 = ((x21-(x22^x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	uint32_t x27 = 0U;
	int16_t x28 = 0;
	volatile int32_t t6 = -1387;

	t6 = ((x25-(x26^x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x31 = 8U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 14;

	t7 = ((x29-(x30^x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 485127U;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = 0U;
	int64_t x36 = INT64_MIN;

	t8 = ((x33-(x34^x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 17923180694352LLU;
	static int8_t x38 = -1;
	int16_t x39 = INT16_MAX;
	uint16_t x40 = 0U;
	volatile int32_t t9 = 10202075;

	t9 = ((x37-(x38^x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 4566LLU;
	static int16_t x44 = -11002;
	int32_t t10 = -2138372;

	t10 = ((x41-(x42^x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 31U;
	uint8_t x46 = UINT8_MAX;
	static uint16_t x47 = 1323U;
	static int32_t x48 = -1;
	static int32_t t11 = 1;

	t11 = ((x45-(x46^x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = INT64_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -3759640;

	t12 = ((x49-(x50^x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 6U;
	volatile int64_t x55 = INT64_MIN;
	uint8_t x56 = 43U;
	int32_t t13 = -52;

	t13 = ((x53-(x54^x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -5409300;
	int16_t x58 = -1;
	static volatile int8_t x59 = 6;
	uint32_t x60 = 568U;
	int32_t t14 = -38830;

	t14 = ((x57-(x58^x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = INT64_MIN;
	volatile int16_t x63 = 5;
	volatile int32_t t15 = 242461942;

	t15 = ((x61-(x62^x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static volatile int32_t x66 = 8291;
	uint64_t x67 = 338623011045LLU;
	static int16_t x68 = -1;
	volatile int32_t t16 = 0;

	t16 = ((x65-(x66^x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 1;
	uint32_t x70 = UINT32_MAX;
	static uint16_t x71 = 4U;
	static int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 115;

	t17 = ((x69-(x70^x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	uint8_t x74 = 30U;
	volatile uint32_t x75 = 2U;
	int64_t x76 = INT64_MIN;

	t18 = ((x73-(x74^x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 11U;
	uint8_t x78 = 2U;
	int8_t x79 = INT8_MIN;
	volatile int16_t x80 = -6123;
	volatile int32_t t19 = 6;

	t19 = ((x77-(x78^x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	static uint16_t x83 = 21U;
	static int32_t x84 = -9492;

	t20 = ((x81-(x82^x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x85 = UINT32_MAX;
	static int32_t x86 = -11736337;
	static int8_t x87 = INT8_MIN;
	static uint16_t x88 = 0U;
	int32_t t21 = 431;

	t21 = ((x85-(x86^x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	uint8_t x91 = 17U;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = -228566;

	t22 = ((x89-(x90^x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	volatile uint8_t x98 = 2U;
	int32_t t23 = -64223206;

	t23 = ((x97-(x98^x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -838;
	int32_t x102 = INT32_MIN;
	uint32_t x104 = 2U;
	static volatile int32_t t24 = 733948396;

	t24 = ((x101-(x102^x103))<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 3779;
	int16_t x106 = -249;
	volatile uint8_t x107 = 1U;
	uint64_t x108 = 99629939661LLU;
	volatile int32_t t25 = -52547044;

	t25 = ((x105-(x106^x107))<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 11U;
	static int32_t x111 = INT32_MIN;
	static volatile int32_t t26 = 6237398;

	t26 = ((x109-(x110^x111))<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 1;
	static uint16_t x114 = UINT16_MAX;
	int32_t x115 = -1;
	uint32_t x116 = 1018454132U;
	int32_t t27 = -7138;

	t27 = ((x113-(x114^x115))<x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -31LL;
	int16_t x120 = INT16_MAX;
	int32_t t28 = -1;

	t28 = ((x117-(x118^x119))<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = 58;
	int32_t x122 = -1;
	volatile uint64_t x123 = 489217167941565LLU;
	int16_t x124 = INT16_MAX;
	int32_t t29 = -3217;

	t29 = ((x121-(x122^x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	int8_t x127 = -1;
	static uint32_t x128 = 15U;
	int32_t t30 = -26946;

	t30 = ((x125-(x126^x127))<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = 523203207517LLU;
	int64_t x131 = -1624245LL;

	t31 = ((x129-(x130^x131))<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = 63;
	static int64_t x135 = -1LL;
	uint32_t x136 = 74U;
	int32_t t32 = -31;

	t32 = ((x133-(x134^x135))<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x138 = UINT8_MAX;
	static volatile uint32_t x139 = 96986276U;
	int32_t x140 = INT32_MIN;

	t33 = ((x137-(x138^x139))<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 22;
	static int8_t x146 = -1;
	uint16_t x147 = 0U;
	static int64_t x148 = -1LL;
	static int32_t t34 = -1;

	t34 = ((x145-(x146^x147))<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = 111480202;
	int64_t x156 = 43592119LL;
	static int32_t t35 = -2173;

	t35 = ((x153-(x154^x155))<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x157 = INT64_MAX;
	static int8_t x158 = -31;
	int8_t x159 = INT8_MIN;
	int32_t t36 = -4117;

	t36 = ((x157-(x158^x159))<x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MAX;
	static int32_t x162 = 193;
	uint8_t x163 = 5U;
	int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 0;

	t37 = ((x161-(x162^x163))<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x171 = 10;

	t38 = ((x169-(x170^x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 4U;
	static uint64_t x175 = 6764913680654751763LLU;
	uint64_t x176 = 959686397352156916LLU;
	int32_t t39 = -1;

	t39 = ((x173-(x174^x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = UINT32_MAX;
	uint8_t x178 = 0U;
	static uint8_t x179 = 16U;
	int64_t x180 = -7178971495743234LL;
	volatile int32_t t40 = 6966;

	t40 = ((x177-(x178^x179))<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -1;
	uint8_t x182 = 2U;
	uint64_t x184 = 102530096914LLU;
	static volatile int32_t t41 = -491;

	t41 = ((x181-(x182^x183))<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	int16_t x191 = -1;
	uint16_t x192 = UINT16_MAX;

	t42 = ((x189-(x190^x191))<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	int8_t x194 = -1;
	volatile int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MAX;
	static int32_t t43 = 117461471;

	t43 = ((x193-(x194^x195))<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = -550;
	int32_t t44 = -32;

	t44 = ((x197-(x198^x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x201 = UINT32_MAX;
	int16_t x203 = INT16_MAX;
	int32_t x204 = -1;
	int32_t t45 = -5363761;

	t45 = ((x201-(x202^x203))<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	static int32_t x207 = INT32_MIN;
	int16_t x208 = -1;

	t46 = ((x205-(x206^x207))<x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x210 = -1;
	int8_t x211 = INT8_MAX;
	int32_t x212 = 45006625;
	int32_t t47 = -1;

	t47 = ((x209-(x210^x211))<x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x214 = 9U;
	int16_t x215 = 0;
	volatile uint8_t x216 = 4U;
	volatile int32_t t48 = -12871;

	t48 = ((x213-(x214^x215))<x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x217 = 14216LLU;
	static int64_t x218 = INT64_MIN;
	static uint16_t x219 = 11U;
	uint8_t x220 = 32U;
	int32_t t49 = 643938489;

	t49 = ((x217-(x218^x219))<x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 1531885814LLU;
	int16_t x223 = INT16_MIN;
	int8_t x224 = 11;
	volatile int32_t t50 = 21462;

	t50 = ((x221-(x222^x223))<x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MIN;
	int64_t x227 = 83804964620895LL;
	int8_t x228 = INT8_MIN;
	volatile int32_t t51 = 11063;

	t51 = ((x225-(x226^x227))<x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -55266187529711LL;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t52 = 125;

	t52 = ((x229-(x230^x231))<x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = UINT32_MAX;
	volatile int64_t x235 = INT64_MIN;
	volatile uint64_t x236 = 5606402948715579566LLU;
	int32_t t53 = -17024;

	t53 = ((x233-(x234^x235))<x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 38U;
	int32_t x238 = 1;
	uint32_t x239 = 130061977U;
	volatile int32_t t54 = -6334650;

	t54 = ((x237-(x238^x239))<x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 9400721LLU;
	static uint16_t x242 = 1919U;
	volatile int8_t x243 = INT8_MAX;
	int32_t t55 = 934;

	t55 = ((x241-(x242^x243))<x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -1;
	int8_t x246 = 3;
	int32_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	int32_t t56 = 73;

	t56 = ((x245-(x246^x247))<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = 0;
	int8_t x250 = INT8_MIN;
	int64_t x251 = 191161LL;
	int32_t x252 = 1198;

	t57 = ((x249-(x250^x251))<x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 409485U;
	int16_t x254 = -478;
	uint32_t x255 = 31683U;
	uint8_t x256 = 6U;
	int32_t t58 = -79382;

	t58 = ((x253-(x254^x255))<x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = INT64_MAX;
	int32_t x258 = -1;
	uint32_t x260 = UINT32_MAX;
	int32_t t59 = 547462577;

	t59 = ((x257-(x258^x259))<x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x263 = 15997U;
	int64_t x264 = -1LL;
	int32_t t60 = -160233326;

	t60 = ((x261-(x262^x263))<x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x266 = 24252110LLU;
	int64_t x267 = -818LL;
	int8_t x268 = INT8_MIN;
	static int32_t t61 = 660642;

	t61 = ((x265-(x266^x267))<x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 12370408945670LLU;
	uint16_t x271 = 12687U;
	static int32_t x272 = -1;
	volatile int32_t t62 = -56871;

	t62 = ((x269-(x270^x271))<x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MIN;
	static uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 2U;

	t63 = ((x273-(x274^x275))<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = -1;
	static uint32_t x280 = 633U;
	volatile int32_t t64 = 235352968;

	t64 = ((x277-(x278^x279))<x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = 76510LL;
	int32_t x282 = -425016;
	static uint32_t x283 = UINT32_MAX;
	volatile int32_t t65 = -171876402;

	t65 = ((x281-(x282^x283))<x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x290 = -1973205;
	uint64_t x291 = 19331LLU;
	static volatile int32_t t66 = 29217268;

	t66 = ((x289-(x290^x291))<x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = INT32_MAX;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 5900058807127392959LLU;
	static uint32_t x296 = 859039U;
	static volatile int32_t t67 = -1;

	t67 = ((x293-(x294^x295))<x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x299 = 1;
	static int16_t x300 = -1;

	t68 = ((x297-(x298^x299))<x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x301 = INT16_MIN;
	int16_t x302 = -7847;
	volatile int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	int32_t t69 = -182915;

	t69 = ((x301-(x302^x303))<x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = 1U;
	int32_t x306 = -1;
	volatile int16_t x307 = INT16_MIN;
	static int32_t t70 = 62;

	t70 = ((x305-(x306^x307))<x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = 2539;
	int64_t x310 = INT64_MIN;
	static int32_t x311 = INT32_MIN;
	int32_t t71 = -50155094;

	t71 = ((x309-(x310^x311))<x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = 3;
	volatile int32_t x318 = INT32_MIN;
	int32_t x320 = INT32_MAX;
	int32_t t72 = 1749;

	t72 = ((x317-(x318^x319))<x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = -701;
	int32_t x322 = 1612;
	int64_t x323 = 5941056848451765LL;
	int32_t x324 = INT32_MAX;

	t73 = ((x321-(x322^x323))<x324);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MIN;
	volatile uint8_t x326 = 0U;
	static volatile int32_t t74 = 154;

	t74 = ((x325-(x326^x327))<x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = 272472742051307LL;
	static int8_t x332 = 0;
	static volatile int32_t t75 = 0;

	t75 = ((x329-(x330^x331))<x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 2597676U;
	int32_t x335 = 0;
	int32_t x336 = -1;
	int32_t t76 = -2203162;

	t76 = ((x333-(x334^x335))<x336);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 939822U;
	uint16_t x338 = 4172U;
	static int16_t x340 = -1;
	static int32_t t77 = -67526193;

	t77 = ((x337-(x338^x339))<x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x342 = 11858057157LL;
	int16_t x344 = INT16_MIN;
	volatile int32_t t78 = -858112596;

	t78 = ((x341-(x342^x343))<x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x347 = INT32_MAX;
	static volatile int32_t t79 = -27333;

	t79 = ((x345-(x346^x347))<x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x349 = UINT32_MAX;
	volatile int32_t x350 = 8122;
	int32_t x351 = -1;
	int32_t x352 = INT32_MAX;
	static int32_t t80 = 2653666;

	t80 = ((x349-(x350^x351))<x352);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x353 = -2;
	uint8_t x354 = UINT8_MAX;
	static int32_t x355 = 1;
	static int8_t x356 = INT8_MAX;
	static volatile int32_t t81 = -18649131;

	t81 = ((x353-(x354^x355))<x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = UINT16_MAX;
	static volatile int16_t x371 = -1;
	int32_t t82 = 1;

	t82 = ((x369-(x370^x371))<x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x374 = 0U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;

	t83 = ((x373-(x374^x375))<x376);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x377 = 121U;
	int8_t x378 = INT8_MAX;
	static volatile int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MAX;

	t84 = ((x377-(x378^x379))<x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x390 = 210501123;
	volatile int16_t x391 = INT16_MAX;
	volatile int16_t x392 = 982;

	t85 = ((x389-(x390^x391))<x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MIN;
	volatile int8_t x394 = -49;
	int16_t x395 = INT16_MIN;
	static volatile int32_t t86 = -61495;

	t86 = ((x393-(x394^x395))<x396);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	static uint32_t x400 = 935U;
	int32_t t87 = -865;

	t87 = ((x397-(x398^x399))<x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x401 = INT8_MIN;
	static int32_t x402 = -20725925;
	int16_t x403 = INT16_MIN;
	uint8_t x404 = 33U;
	volatile int32_t t88 = 6973;

	t88 = ((x401-(x402^x403))<x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x405 = -438435439LL;
	int16_t x406 = INT16_MAX;
	int64_t x407 = -1LL;
	static int32_t x408 = -821579417;
	volatile int32_t t89 = -33836;

	t89 = ((x405-(x406^x407))<x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = -1;
	static volatile int32_t x410 = -337;
	uint64_t x411 = 1701191LLU;
	static volatile int32_t t90 = 59471429;

	t90 = ((x409-(x410^x411))<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = INT32_MAX;
	uint16_t x414 = 1223U;
	volatile int16_t x415 = 37;
	volatile uint64_t x416 = 1847LLU;

	t91 = ((x413-(x414^x415))<x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x417 = 54U;
	int8_t x418 = 43;
	static uint32_t x419 = 2U;
	int64_t x420 = INT64_MIN;

	t92 = ((x417-(x418^x419))<x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x421 = 327493025U;
	int16_t x422 = INT16_MAX;
	int16_t x424 = INT16_MAX;
	int32_t t93 = -362550;

	t93 = ((x421-(x422^x423))<x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	int32_t t94 = 1861;

	t94 = ((x425-(x426^x427))<x428);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 3080197LLU;
	static int32_t x430 = 1961;
	static uint16_t x431 = UINT16_MAX;

	t95 = ((x429-(x430^x431))<x432);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = -2955334977LL;
	int32_t x434 = -53;
	int16_t x436 = -1;
	int32_t t96 = -404516;

	t96 = ((x433-(x434^x435))<x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MAX;
	volatile uint8_t x438 = 18U;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	volatile int32_t t97 = 10750;

	t97 = ((x437-(x438^x439))<x440);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = INT16_MIN;
	volatile int16_t x442 = 535;
	int16_t x443 = INT16_MAX;
	static int32_t t98 = -73181906;

	t98 = ((x441-(x442^x443))<x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x445 = INT16_MAX;
	volatile uint32_t x446 = 27U;
	volatile uint16_t x447 = 3U;
	volatile int32_t t99 = 2;

	t99 = ((x445-(x446^x447))<x448);

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

