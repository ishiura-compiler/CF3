#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 91689159LLU;
uint32_t t4 = 3U;
static volatile int16_t x27 = 3592;
int64_t x39 = -267861LL;
int8_t x40 = 23;
int16_t x45 = -1;
volatile int32_t t12 = -18360324;
int8_t x53 = -1;
static volatile uint32_t x54 = 41339934U;
static volatile int8_t x66 = -1;
int16_t x67 = -1;
int32_t x68 = 1;
int32_t t16 = 119514;
int16_t x71 = INT16_MIN;
static int32_t x73 = INT32_MIN;
int8_t x76 = 1;
int16_t x78 = 721;
static volatile uint32_t t19 = 9114U;
int8_t x82 = INT8_MIN;
int64_t x95 = -1LL;
int64_t t23 = 21526LL;
int64_t x100 = -1LL;
volatile int64_t t24 = 6192770LL;
uint64_t t25 = 51255425150005LLU;
volatile uint16_t x122 = 123U;
uint16_t x123 = 451U;
uint32_t t31 = 202763614U;
volatile int64_t t32 = 124793561LL;
uint64_t t33 = 971470406931994LLU;
int16_t x137 = 6239;
volatile int8_t x147 = INT8_MIN;
uint8_t x150 = 2U;
volatile int32_t t36 = -619796275;
int64_t x159 = INT64_MIN;
int64_t x162 = 19LL;
int8_t x166 = INT8_MIN;
uint64_t x174 = UINT64_MAX;
int32_t x175 = INT32_MIN;
volatile uint64_t t41 = 3845354LLU;
int64_t x177 = -18154273501LL;
static uint32_t x178 = UINT32_MAX;
int64_t x180 = 265132442LL;
int64_t x182 = -1LL;
int32_t x183 = INT32_MIN;
int64_t x184 = -4916929487LL;
static uint32_t x190 = 248U;
int64_t t45 = -97581025937LL;
uint32_t x198 = 161726864U;
uint32_t t47 = 2U;
int16_t x207 = -1;
volatile uint8_t x209 = UINT8_MAX;
int32_t x211 = INT32_MIN;
static int8_t x214 = INT8_MIN;
int16_t x217 = INT16_MIN;
static int64_t x220 = -1LL;
int64_t t51 = -94954737LL;
uint16_t x241 = 24U;
static int16_t x243 = 54;
int32_t t59 = 9;
int16_t x263 = 182;
int16_t x264 = INT16_MIN;
volatile uint32_t t63 = 690978U;
int32_t x281 = INT32_MIN;
static int32_t x290 = INT32_MIN;
uint32_t t69 = 47361198U;
int32_t x298 = -1;
uint8_t x313 = 0U;
int16_t x317 = INT16_MIN;
volatile int8_t x318 = INT8_MAX;
static int32_t t75 = 3;
int64_t x323 = INT64_MIN;
uint32_t x328 = 23958127U;
uint64_t x330 = 3LLU;
volatile uint64_t t78 = 404772LLU;
int32_t x337 = 0;
uint64_t x339 = 6027LLU;
static int16_t x342 = -2895;
int32_t x350 = INT32_MIN;
int64_t t87 = -885503346LL;
int8_t x369 = 0;
int64_t x372 = -821086LL;
int8_t x374 = 24;
uint8_t x383 = UINT8_MAX;
int16_t x385 = INT16_MAX;
uint8_t x386 = 14U;
int16_t x387 = -1;
static uint32_t x389 = 737389U;
static uint8_t x390 = 14U;
int16_t x391 = INT16_MIN;
int64_t x394 = -12373LL;
uint32_t x397 = UINT32_MAX;
uint16_t x403 = 13U;
int8_t x406 = INT8_MIN;
uint16_t x412 = UINT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = 16;
	uint8_t x3 = UINT8_MAX;
	static int8_t x4 = 1;
	int64_t t0 = -47583689LL;

	t0 = (((x1/x2)&x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int32_t x6 = INT32_MIN;
	int64_t x7 = -2201321604564261888LL;
	volatile uint64_t t1 = 41720610927885LLU;

	t1 = (((x5/x6)&x7)%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int32_t x10 = INT32_MIN;
	int8_t x11 = 0;
	int16_t x12 = -3;
	volatile int32_t t2 = -474;

	t2 = (((x9/x10)&x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = 1751LL;
	int8_t x15 = -16;
	uint64_t x16 = 39977773362LLU;
	static volatile uint64_t t3 = 3557192216448930LLU;

	t3 = (((x13/x14)&x15)%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	uint32_t x18 = 476U;
	int32_t x19 = INT32_MAX;
	volatile int32_t x20 = -5;

	t4 = (((x17/x18)&x19)%x20);

	if (t4 != 9023040U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint16_t x22 = 74U;
	static volatile int16_t x23 = 10814;
	volatile int16_t x24 = 96;
	int32_t t5 = 2792;

	t5 = (((x21/x22)&x23)%x24);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -153;
	int8_t x26 = 15;
	int64_t x28 = -1LL;
	volatile int64_t t6 = -4686931LL;

	t6 = (((x25/x26)&x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 5592022549727LLU;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -1;
	static volatile uint64_t t7 = 25778454554253LLU;

	t7 = (((x29/x30)&x31)%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 30957490;
	int16_t x34 = INT16_MAX;
	static volatile int8_t x35 = -1;
	uint16_t x36 = 310U;
	volatile int32_t t8 = 3368;

	t8 = (((x33/x34)&x35)%x36);

	if (t8 != 14) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 0U;
	static volatile int32_t x38 = INT32_MIN;
	volatile int64_t t9 = -159032148317909LL;

	t9 = (((x37/x38)&x39)%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int16_t x42 = 14;
	volatile int8_t x43 = -1;
	volatile uint64_t x44 = 2260510724015LLU;
	static uint64_t t10 = 239LLU;

	t10 = (((x41/x42)&x43)%x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	volatile uint64_t x47 = UINT64_MAX;
	int8_t x48 = INT8_MIN;
	uint64_t t11 = 16325682071557112LLU;

	t11 = (((x45/x46)&x47)%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static uint8_t x50 = 3U;
	int32_t x51 = INT32_MAX;
	volatile int16_t x52 = INT16_MIN;

	t12 = (((x49/x50)&x51)%x52);

	if (t12 != 21846) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x55 = UINT8_MAX;
	static int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -57000LL;

	t13 = (((x53/x54)&x55)%x56);

	if (t13 != 103LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	static uint32_t x58 = 8U;
	uint32_t x59 = 9998532U;
	int64_t x60 = INT64_MAX;
	static volatile int64_t t14 = -6656227111LL;

	t14 = (((x57/x58)&x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int8_t x62 = INT8_MAX;
	volatile int32_t x63 = -1;
	int64_t x64 = INT64_MIN;
	static int64_t t15 = 21091727LL;

	t15 = (((x61/x62)&x63)%x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 0U;

	t16 = (((x65/x66)&x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 322;
	int32_t x70 = INT32_MIN;
	int32_t x72 = -8;
	int32_t t17 = 488917656;

	t17 = (((x69/x70)&x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = 8U;
	int16_t x75 = -1;
	volatile uint32_t t18 = 1574405481U;

	t18 = (((x73/x74)&x75)%x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MIN;

	t19 = (((x77/x78)&x79)%x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 7U;
	static volatile int32_t x83 = 46478892;
	uint32_t x84 = UINT32_MAX;
	uint32_t t20 = 3588U;

	t20 = (((x81/x82)&x83)%x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -1;
	int32_t x86 = INT32_MAX;
	int64_t x87 = -1LL;
	int8_t x88 = -39;
	volatile int64_t t21 = 14LL;

	t21 = (((x85/x86)&x87)%x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = -6888;
	volatile int16_t x90 = INT16_MAX;
	uint32_t x91 = 3U;
	volatile int16_t x92 = -1;
	volatile uint32_t t22 = 1501849963U;

	t22 = (((x89/x90)&x91)%x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 67U;
	static volatile int8_t x94 = INT8_MAX;
	volatile uint16_t x96 = UINT16_MAX;

	t23 = (((x93/x94)&x95)%x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	uint32_t x98 = 185U;
	int16_t x99 = -1;

	t24 = (((x97/x98)&x99)%x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static volatile int64_t x102 = INT64_MIN;
	int16_t x103 = -37;
	uint64_t x104 = UINT64_MAX;

	t25 = (((x101/x102)&x103)%x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	static int8_t x106 = INT8_MIN;
	static int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MIN;
	int64_t t26 = -8193118LL;

	t26 = (((x105/x106)&x107)%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	uint32_t x111 = 11072695U;
	volatile uint64_t x112 = 12149166382LLU;
	uint64_t t27 = 940677025593956LLU;

	t27 = (((x109/x110)&x111)%x112);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = UINT8_MAX;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = -1297LL;
	static int8_t x116 = -1;
	int64_t t28 = 3807758LL;

	t28 = (((x113/x114)&x115)%x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int64_t x118 = -1LL;
	int32_t x119 = INT32_MAX;
	int16_t x120 = -13204;
	static int64_t t29 = -131484556896495150LL;

	t29 = (((x117/x118)&x119)%x120);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 255U;
	int64_t x124 = -261133LL;
	int64_t t30 = -16562360LL;

	t30 = (((x121/x122)&x123)%x124);

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 1864812U;
	volatile int8_t x126 = INT8_MIN;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;

	t31 = (((x125/x126)&x127)%x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	static uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	static volatile int16_t x132 = INT16_MAX;

	t32 = (((x129/x130)&x131)%x132);

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x133 = 70386890861201239LLU;
	uint64_t x134 = 777408223152LLU;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;

	t33 = (((x133/x134)&x135)%x136);

	if (t33 != 65536LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = UINT32_MAX;
	static volatile uint64_t x139 = 57192LLU;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t34 = 1603584828LLU;

	t34 = (((x137/x138)&x139)%x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static uint16_t x146 = 1U;
	static volatile uint16_t x148 = 19472U;
	int32_t t35 = -118286;

	t35 = (((x145/x146)&x147)%x148);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 68U;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = -1;

	t36 = (((x149/x150)&x151)%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	volatile uint64_t x154 = 39143867771888LLU;
	int32_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t37 = 69939183542LLU;

	t37 = (((x153/x154)&x155)%x156);

	if (t37 != 471255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MAX;
	uint16_t x160 = 1U;
	int64_t t38 = -7508533492LL;

	t38 = (((x157/x158)&x159)%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 193LLU;
	static volatile uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 19U;
	volatile uint64_t t39 = 67276884773032LLU;

	t39 = (((x161/x162)&x163)%x164);

	if (t39 != 10LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MAX;
	uint16_t x167 = 7U;
	int64_t x168 = -1LL;
	int64_t t40 = 1537554851924593LL;

	t40 = (((x165/x166)&x167)%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -2;
	static int8_t x176 = 34;

	t41 = (((x173/x174)&x175)%x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x179 = INT64_MAX;
	volatile int64_t t42 = 875192906382960035LL;

	t42 = (((x177/x178)&x179)%x180);

	if (t42 != 235678774LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	volatile int64_t t43 = 37049103979828LL;

	t43 = (((x181/x182)&x183)%x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile uint8_t x186 = 39U;
	int8_t x187 = 1;
	volatile int16_t x188 = 1;
	uint32_t t44 = 207127213U;

	t44 = (((x185/x186)&x187)%x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	int64_t x191 = INT64_MAX;
	volatile uint32_t x192 = 1951U;

	t45 = (((x189/x190)&x191)%x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	static volatile int8_t x194 = INT8_MAX;
	static uint8_t x195 = UINT8_MAX;
	int32_t x196 = 63419;
	volatile int64_t t46 = -2400125LL;

	t46 = (((x193/x194)&x195)%x196);

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = 0;
	static int32_t x199 = -132826;
	volatile uint8_t x200 = 30U;

	t47 = (((x197/x198)&x199)%x200);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 30U;
	int32_t x206 = 11954;
	int16_t x208 = -239;
	volatile int32_t t48 = 0;

	t48 = (((x205/x206)&x207)%x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x210 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	uint32_t t49 = 2092093147U;

	t49 = (((x209/x210)&x211)%x212);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	static int32_t x215 = -1;
	int8_t x216 = -61;
	int32_t t50 = 97438619;

	t50 = (((x213/x214)&x215)%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = INT64_MAX;
	volatile int8_t x219 = INT8_MIN;

	t51 = (((x217/x218)&x219)%x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MAX;
	int8_t x222 = 4;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = 549490351594952LLU;
	volatile uint64_t t52 = 65527536LLU;

	t52 = (((x221/x222)&x223)%x224);

	if (t52 != 127LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x225 = INT16_MIN;
	static volatile int32_t x226 = INT32_MAX;
	volatile int64_t x227 = INT64_MAX;
	static volatile uint64_t x228 = 3435416011LLU;
	uint64_t t53 = 71LLU;

	t53 = (((x225/x226)&x227)%x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	static uint8_t x232 = 53U;
	int32_t t54 = -1727273;

	t54 = (((x229/x230)&x231)%x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = 101U;
	static int16_t x235 = -1;
	int32_t x236 = INT32_MAX;
	int64_t t55 = 900469163021816LL;

	t55 = (((x233/x234)&x235)%x236);

	if (t55 != -1488355002LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	static uint32_t x238 = 92559U;
	int32_t x239 = 44465175;
	int16_t x240 = 1726;
	volatile int64_t t56 = -44370845422898LL;

	t56 = (((x237/x238)&x239)%x240);

	if (t56 != 292LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x242 = 14588U;
	volatile uint32_t x244 = 461614135U;
	uint32_t t57 = 0U;

	t57 = (((x241/x242)&x243)%x244);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -1;
	volatile int64_t x246 = -1LL;
	static uint32_t x247 = 3U;
	static volatile uint8_t x248 = 11U;
	static int64_t t58 = -18217597888626881LL;

	t58 = (((x245/x246)&x247)%x248);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x249 = 8035;
	int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = -1;

	t59 = (((x249/x250)&x251)%x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	static uint16_t x255 = 73U;
	static volatile int8_t x256 = -1;
	volatile int32_t t60 = 153;

	t60 = (((x253/x254)&x255)%x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 72770LLU;
	int8_t x262 = -1;
	static uint64_t t61 = 46945733237572997LLU;

	t61 = (((x261/x262)&x263)%x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MAX;
	static uint64_t x268 = 9135968205165LLU;
	volatile uint64_t t62 = 28190625LLU;

	t62 = (((x265/x266)&x267)%x268);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x270 = 6U;
	uint32_t x271 = 84613400U;
	static uint16_t x272 = 1U;

	t63 = (((x269/x270)&x271)%x272);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x273 = 1644298731542LLU;
	int16_t x274 = 1364;
	uint8_t x275 = 0U;
	volatile int8_t x276 = -7;
	volatile uint64_t t64 = 5937101467119143459LLU;

	t64 = (((x273/x274)&x275)%x276);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = INT16_MIN;
	static int32_t x278 = INT32_MIN;
	int8_t x279 = -6;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t65 = 11;

	t65 = (((x277/x278)&x279)%x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 18742543072265270LLU;
	int16_t x284 = -1;
	uint64_t t66 = 1498413LLU;

	t66 = (((x281/x282)&x283)%x284);

	if (t66 != 18742543072232448LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 9U;
	uint32_t x286 = 10U;
	static uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 2091614U;
	volatile uint32_t t67 = 2U;

	t67 = (((x285/x286)&x287)%x288);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 8136743673366LLU;
	int16_t x291 = -1;
	uint64_t x292 = 378816539481144LLU;
	static volatile uint64_t t68 = 35312922189653LLU;

	t68 = (((x289/x290)&x291)%x292);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = 17U;
	uint32_t x294 = 434080U;
	static int32_t x295 = INT32_MIN;
	volatile uint8_t x296 = 122U;

	t69 = (((x293/x294)&x295)%x296);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = 16U;
	uint8_t x299 = 0U;
	int16_t x300 = INT16_MIN;
	static int32_t t70 = 1799335;

	t70 = (((x297/x298)&x299)%x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MAX;
	uint32_t x303 = UINT32_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile int64_t t71 = 1805924234113223010LL;

	t71 = (((x301/x302)&x303)%x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x305 = 70U;
	volatile int16_t x306 = -1;
	static uint64_t x307 = 285717LLU;
	volatile int32_t x308 = INT32_MAX;
	uint64_t t72 = 0LLU;

	t72 = (((x305/x306)&x307)%x308);

	if (t72 != 285712LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = 17U;
	int32_t x310 = -1;
	int16_t x311 = -1;
	int64_t x312 = 109581069285LL;
	volatile int64_t t73 = -887266400LL;

	t73 = (((x309/x310)&x311)%x312);

	if (t73 != -17LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x314 = 699178966844LLU;
	uint8_t x315 = UINT8_MAX;
	static int8_t x316 = -1;
	uint64_t t74 = 957966202LLU;

	t74 = (((x313/x314)&x315)%x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;

	t75 = (((x317/x318)&x319)%x320);

	if (t75 != 32510) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x321 = INT16_MAX;
	int16_t x322 = -367;
	int64_t x324 = INT64_MIN;
	int64_t t76 = 23207998530LL;

	t76 = (((x321/x322)&x323)%x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x325 = -1341;
	volatile uint32_t x326 = 116U;
	int8_t x327 = INT8_MIN;
	volatile uint32_t t77 = 234U;

	t77 = (((x325/x326)&x327)%x328);

	if (t77 != 13067409U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	int8_t x331 = 1;
	volatile int64_t x332 = INT64_MAX;

	t78 = (((x329/x330)&x331)%x332);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x333 = INT16_MAX;
	uint32_t x334 = UINT32_MAX;
	static uint32_t x335 = 489522878U;
	int8_t x336 = -1;
	uint32_t t79 = 7U;

	t79 = (((x333/x334)&x335)%x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x338 = 933905U;
	static int8_t x340 = INT8_MIN;
	uint64_t t80 = 21LLU;

	t80 = (((x337/x338)&x339)%x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	uint64_t x343 = 358906846567328847LLU;
	uint64_t x344 = 61609075LLU;
	static uint64_t t81 = 278208652703440LLU;

	t81 = (((x341/x342)&x343)%x344);

	if (t81 != 16989276LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	int16_t x348 = 243;
	volatile int64_t t82 = 66LL;

	t82 = (((x345/x346)&x347)%x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 96U;
	uint64_t x351 = 145276599LLU;
	int64_t x352 = -1LL;
	static uint64_t t83 = 36270903LLU;

	t83 = (((x349/x350)&x351)%x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	static volatile uint16_t x354 = 20U;
	int64_t x355 = -124556881463633416LL;
	uint64_t x356 = 9946702757093LLU;
	volatile uint64_t t84 = 153075351638007165LLU;

	t84 = (((x353/x354)&x355)%x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = 485143286LL;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = -2;
	volatile int64_t t85 = 1578830LL;

	t85 = (((x357/x358)&x359)%x360);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	int64_t x363 = -4340LL;
	int64_t x364 = -1LL;
	volatile int64_t t86 = 1381451615173190LL;

	t86 = (((x361/x362)&x363)%x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x365 = UINT32_MAX;
	int64_t x366 = -11905945932921765LL;
	int32_t x367 = INT32_MAX;
	static volatile int16_t x368 = -1;

	t87 = (((x365/x366)&x367)%x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x370 = -1;
	uint8_t x371 = 30U;
	static int64_t t88 = 0LL;

	t88 = (((x369/x370)&x371)%x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x373 = UINT8_MAX;
	int16_t x375 = 109;
	uint32_t x376 = 2649U;
	static uint32_t t89 = 2U;

	t89 = (((x373/x374)&x375)%x376);

	if (t89 != 8U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 56930U;
	int32_t x378 = 4054604;
	int16_t x379 = -1;
	int16_t x380 = 4570;
	uint32_t t90 = 209U;

	t90 = (((x377/x378)&x379)%x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 3316U;
	static int64_t x382 = INT64_MIN;
	uint64_t x384 = 47380766014946LLU;
	uint64_t t91 = 188LLU;

	t91 = (((x381/x382)&x383)%x384);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x388 = 2LLU;
	uint64_t t92 = 2317739031070LLU;

	t92 = (((x385/x386)&x387)%x388);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x392 = 2U;
	volatile uint32_t t93 = 15933U;

	t93 = (((x389/x390)&x391)%x392);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = 3644758U;
	static volatile int64_t x395 = INT64_MAX;
	uint32_t x396 = 1976425375U;
	volatile int64_t t94 = -7LL;

	t94 = (((x393/x394)&x395)%x396);

	if (t94 != 1085302014LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = -4045;
	int64_t x400 = INT64_MAX;
	static volatile int64_t t95 = -31750252196357LL;

	t95 = (((x397/x398)&x399)%x400);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	uint32_t x402 = 779057U;
	static int8_t x404 = -1;
	int64_t t96 = -88003LL;

	t96 = (((x401/x402)&x403)%x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MAX;
	uint16_t x407 = UINT16_MAX;
	uint32_t x408 = 479U;
	static volatile uint32_t t97 = 0U;

	t97 = (((x405/x406)&x407)%x408);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x409 = INT32_MAX;
	volatile int8_t x410 = INT8_MIN;
	uint8_t x411 = 1U;
	volatile int32_t t98 = -753154;

	t98 = (((x409/x410)&x411)%x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -642;
	uint8_t x418 = 3U;
	static int32_t x419 = -1;
	int8_t x420 = INT8_MIN;
	static int32_t t99 = -10371;

	t99 = (((x417/x418)&x419)%x420);

	if (t99 != -86) { NG(); } else { ; }
	
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

