#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
uint32_t t1 = 3152U;
volatile int32_t x9 = -1;
int64_t t4 = 5746994199LL;
int8_t x22 = INT8_MIN;
int32_t x31 = -7;
int16_t x56 = -47;
volatile int64_t x59 = -1LL;
uint16_t x68 = 0U;
volatile int32_t t15 = -14172;
int32_t x77 = 0;
volatile int8_t x79 = -1;
uint32_t x80 = UINT32_MAX;
static int64_t t19 = 833616720780306425LL;
uint64_t x85 = 3201LLU;
uint8_t x86 = 1U;
uint16_t x87 = 17489U;
int64_t t21 = 96LL;
volatile int32_t x94 = 4;
volatile int16_t x98 = INT16_MAX;
uint64_t x99 = UINT64_MAX;
uint64_t t23 = 498205220451LLU;
uint64_t x117 = 12685735467LLU;
int32_t x122 = 15840;
uint16_t x123 = 60U;
int64_t x131 = 888353LL;
static uint64_t x145 = UINT64_MAX;
int64_t x146 = INT64_MIN;
uint64_t t34 = 165542623796320516LLU;
int64_t x149 = INT64_MIN;
volatile int8_t x153 = 6;
static int64_t x154 = INT64_MAX;
volatile int64_t t36 = 52217861LL;
volatile int64_t t37 = -195570483860616065LL;
int64_t x164 = -1LL;
volatile int32_t t41 = 21328832;
int64_t x179 = INT64_MIN;
static int8_t x182 = -1;
uint8_t x184 = 8U;
int32_t t43 = -3719;
int8_t x189 = -1;
volatile int64_t x194 = INT64_MAX;
int8_t x209 = -17;
int64_t x216 = -1LL;
static uint64_t x217 = 424LLU;
uint16_t x224 = 27646U;
int32_t t53 = 7;
uint16_t x228 = UINT16_MAX;
static volatile uint32_t t54 = 1914349U;
static int32_t x231 = -30513;
volatile uint32_t t55 = 35136U;
static int16_t x233 = 0;
volatile uint64_t x234 = UINT64_MAX;
static int16_t x243 = INT16_MIN;
int16_t x257 = INT16_MAX;
uint8_t x273 = 0U;
int32_t x276 = INT32_MIN;
static uint64_t t65 = 15LLU;
volatile uint8_t x279 = 25U;
uint16_t x284 = 316U;
int8_t x285 = INT8_MIN;
volatile uint32_t t68 = 1823577197U;
int8_t x289 = INT8_MIN;
int8_t x294 = 11;
static volatile int64_t t70 = -173673727952LL;
int16_t x311 = INT16_MIN;
int32_t t73 = 266;
int8_t x317 = -1;
uint8_t x319 = 31U;
volatile uint16_t x324 = 0U;
int8_t x325 = 14;
int32_t x337 = -1;
int8_t x338 = INT8_MIN;
uint64_t x339 = 218LLU;
uint64_t x340 = 3LLU;
int64_t t84 = 208080683497LL;
int32_t x366 = 8;
static uint64_t x369 = 314705727630185LLU;
static volatile uint64_t t88 = 20896LLU;
int64_t x377 = INT64_MAX;
static volatile int8_t x381 = INT8_MIN;
uint16_t x382 = 586U;
volatile uint32_t x398 = 434U;
uint64_t x412 = 109LLU;
int8_t x413 = -1;
volatile uint32_t x416 = 16U;


void f0(void) {
	volatile int64_t x1 = 774940854373891477LL;
	static int16_t x2 = 93;
	int8_t x4 = 1;
	volatile int64_t t0 = -24117491LL;

	t0 = (((x1/x2)&x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 1596500994U;
	int16_t x8 = -1;

	t1 = (((x5/x6)&x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	uint8_t x11 = 27U;
	static int8_t x12 = 24;
	volatile int64_t t2 = 40058884926549972LL;

	t2 = (((x9/x10)&x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1193324259LLU;
	int16_t x14 = INT16_MAX;
	int32_t x15 = 28431202;
	int8_t x16 = INT8_MIN;
	static volatile uint64_t t3 = 343936LLU;

	t3 = (((x13/x14)&x15)&x16);

	if (t3 != 33280LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = INT64_MIN;
	uint8_t x18 = 1U;
	static volatile uint16_t x19 = 0U;
	int64_t x20 = INT64_MAX;

	t4 = (((x17/x18)&x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1790072056062560986LL;
	int64_t x23 = 820150660770109400LL;
	int64_t x24 = INT64_MIN;
	int64_t t5 = -4LL;

	t5 = (((x21/x22)&x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = INT64_MIN;
	uint16_t x26 = 1U;
	uint64_t x27 = 110151306597LLU;
	int8_t x28 = -1;
	volatile uint64_t t6 = 3839LLU;

	t6 = (((x25/x26)&x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 2434U;
	uint32_t x30 = 371U;
	int32_t x32 = INT32_MIN;
	volatile uint32_t t7 = 52046U;

	t7 = (((x29/x30)&x31)&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -36127LL;
	int8_t x34 = INT8_MAX;
	int32_t x35 = -2079144;
	int16_t x36 = INT16_MAX;
	static int64_t t8 = -1693573LL;

	t8 = (((x33/x34)&x35)&x36);

	if (t8 != 17984LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MAX;
	int64_t x42 = 230LL;
	static volatile int32_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t9 = 28384830742886LL;

	t9 = (((x41/x42)&x43)&x44);

	if (t9 != 142LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 28710391LLU;
	static int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	uint32_t x48 = 4U;
	volatile uint64_t t10 = 56299007LLU;

	t10 = (((x45/x46)&x47)&x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 10558U;
	int32_t x50 = INT32_MIN;
	int16_t x51 = -49;
	static int8_t x52 = INT8_MAX;
	int32_t t11 = -6;

	t11 = (((x49/x50)&x51)&x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MAX;
	int64_t t12 = 3599968064438958LL;

	t12 = (((x53/x54)&x55)&x56);

	if (t12 != 16777216LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = -61998;
	int32_t x60 = -1;
	static int64_t t13 = 1246LL;

	t13 = (((x57/x58)&x59)&x60);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 0U;
	int64_t x62 = 2349968910654LL;
	int16_t x63 = -1;
	static int8_t x64 = INT8_MIN;
	static volatile int64_t t14 = -49LL;

	t14 = (((x61/x62)&x63)&x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 0;
	int16_t x66 = -10796;
	static int16_t x67 = 268;

	t15 = (((x65/x66)&x67)&x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	int32_t x70 = 13429878;
	int8_t x71 = INT8_MAX;
	volatile int32_t x72 = -1;
	volatile int32_t t16 = -2757644;

	t16 = (((x69/x70)&x71)&x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 6LLU;
	int32_t x74 = INT32_MAX;
	uint8_t x75 = 2U;
	int8_t x76 = INT8_MAX;
	uint64_t t17 = 17LLU;

	t17 = (((x73/x74)&x75)&x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x78 = 462968279LLU;
	volatile uint64_t t18 = 12LLU;

	t18 = (((x77/x78)&x79)&x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1667107296LL;
	volatile uint8_t x83 = 74U;
	int64_t x84 = -1LL;

	t19 = (((x81/x82)&x83)&x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x88 = UINT32_MAX;
	uint64_t t20 = 3749529764LLU;

	t20 = (((x85/x86)&x87)&x88);

	if (t20 != 1025LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t21 = (((x89/x90)&x91)&x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = 11;
	int32_t x95 = -1;
	uint32_t x96 = 31706U;
	volatile uint32_t t22 = 7387187U;

	t22 = (((x93/x94)&x95)&x96);

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	volatile int16_t x100 = -43;

	t23 = (((x97/x98)&x99)&x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = 65;
	static uint32_t x102 = 4U;
	int8_t x103 = INT8_MAX;
	volatile int8_t x104 = INT8_MIN;
	volatile uint32_t t24 = 3781U;

	t24 = (((x101/x102)&x103)&x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = 228506782745930247LLU;
	int8_t x106 = -1;
	int16_t x107 = 0;
	volatile int16_t x108 = -1;
	uint64_t t25 = 49811296154938LLU;

	t25 = (((x105/x106)&x107)&x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = INT64_MAX;
	volatile int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 3862U;
	volatile int64_t t26 = 3920053739LL;

	t26 = (((x109/x110)&x111)&x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = 0;
	int16_t x114 = -4067;
	volatile int16_t x115 = INT16_MAX;
	int8_t x116 = 11;
	int32_t t27 = -12468;

	t27 = (((x113/x114)&x115)&x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x118 = 31U;
	int64_t x119 = INT64_MIN;
	volatile uint64_t x120 = 1652LLU;
	volatile uint64_t t28 = 18LLU;

	t28 = (((x117/x118)&x119)&x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int64_t x124 = INT64_MIN;
	int64_t t29 = -4563000971479LL;

	t29 = (((x121/x122)&x123)&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MIN;
	uint8_t x132 = 0U;
	int64_t t30 = -1011616LL;

	t30 = (((x129/x130)&x131)&x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 0U;
	uint64_t x134 = 179LLU;
	int8_t x135 = 5;
	int16_t x136 = 15;
	static volatile uint64_t t31 = 28LLU;

	t31 = (((x133/x134)&x135)&x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x138 = 62;
	int8_t x139 = INT8_MIN;
	static uint8_t x140 = 1U;
	static volatile int32_t t32 = -4376340;

	t32 = (((x137/x138)&x139)&x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x142 = 4U;
	uint16_t x143 = UINT16_MAX;
	uint64_t x144 = 2394266LLU;
	uint64_t t33 = 249310787046411LLU;

	t33 = (((x141/x142)&x143)&x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x147 = 252123684;
	volatile int32_t x148 = 3043280;

	t34 = (((x145/x146)&x147)&x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x150 = 42U;
	uint32_t x151 = 33923U;
	volatile uint64_t x152 = 34LLU;
	volatile uint64_t t35 = 908635LLU;

	t35 = (((x149/x150)&x151)&x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x155 = INT64_MIN;
	int64_t x156 = 129028639217774561LL;

	t36 = (((x153/x154)&x155)&x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 0U;
	int64_t x158 = INT64_MAX;
	int16_t x159 = -225;
	int32_t x160 = INT32_MAX;

	t37 = (((x157/x158)&x159)&x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MAX;
	volatile uint64_t x162 = UINT64_MAX;
	volatile int8_t x163 = INT8_MIN;
	static volatile uint64_t t38 = 14LLU;

	t38 = (((x161/x162)&x163)&x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = -360212182;
	uint16_t x167 = 15309U;
	int16_t x168 = INT16_MAX;
	int64_t t39 = -1LL;

	t39 = (((x165/x166)&x167)&x168);

	if (t39 != 11213LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 0U;
	uint16_t x170 = 2U;
	uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 8U;
	static volatile uint64_t t40 = 444LLU;

	t40 = (((x169/x170)&x171)&x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MAX;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = -1;
	int16_t x176 = INT16_MAX;

	t41 = (((x173/x174)&x175)&x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 1578963408U;
	volatile int32_t x178 = INT32_MIN;
	int32_t x180 = -1;
	int64_t t42 = 97849LL;

	t42 = (((x177/x178)&x179)&x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 1834U;
	int32_t x183 = INT32_MIN;

	t43 = (((x181/x182)&x183)&x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = -1;
	uint16_t x186 = 24U;
	static int16_t x187 = 1191;
	int8_t x188 = -1;
	int32_t t44 = -74;

	t44 = (((x185/x186)&x187)&x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = -1;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 1U;
	volatile int32_t t45 = 4123921;

	t45 = (((x189/x190)&x191)&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	int32_t x195 = INT32_MAX;
	volatile int8_t x196 = INT8_MIN;
	volatile int64_t t46 = 6507819683607133LL;

	t46 = (((x193/x194)&x195)&x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = 7981LL;
	uint64_t t47 = 193537631889LLU;

	t47 = (((x197/x198)&x199)&x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = UINT32_MAX;
	uint8_t x202 = 1U;
	uint8_t x203 = 2U;
	int32_t x204 = INT32_MIN;
	static volatile uint32_t t48 = 95249094U;

	t48 = (((x201/x202)&x203)&x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 755U;
	int32_t x208 = INT32_MAX;
	static int32_t t49 = 1326;

	t49 = (((x205/x206)&x207)&x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x210 = INT32_MIN;
	volatile int16_t x211 = -2202;
	static int64_t x212 = INT64_MIN;
	int64_t t50 = 66995899014589088LL;

	t50 = (((x209/x210)&x211)&x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	int64_t t51 = 0LL;

	t51 = (((x213/x214)&x215)&x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x218 = UINT32_MAX;
	volatile int16_t x219 = -1;
	int64_t x220 = 836097956959LL;
	uint64_t t52 = 31360383448LLU;

	t52 = (((x217/x218)&x219)&x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = -1;
	volatile int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MAX;

	t53 = (((x221/x222)&x223)&x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = INT32_MIN;
	static int16_t x226 = INT16_MIN;
	uint32_t x227 = UINT32_MAX;

	t54 = (((x225/x226)&x227)&x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static uint32_t x230 = UINT32_MAX;
	static uint32_t x232 = UINT32_MAX;

	t55 = (((x229/x230)&x231)&x232);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x235 = UINT8_MAX;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t56 = 1695418895856364456LLU;

	t56 = (((x233/x234)&x235)&x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = 91;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 493871LLU;
	uint8_t x240 = UINT8_MAX;
	static volatile uint64_t t57 = 3145113319693585737LLU;

	t57 = (((x237/x238)&x239)&x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	static int64_t x242 = 11925682237LL;
	int32_t x244 = INT32_MAX;
	volatile int64_t t58 = -47815LL;

	t58 = (((x241/x242)&x243)&x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = 4861U;
	uint8_t x246 = 44U;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = 5;
	volatile uint32_t t59 = 7692631U;

	t59 = (((x245/x246)&x247)&x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 13901U;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 1U;
	int8_t x252 = INT8_MIN;
	static int32_t t60 = 370;

	t60 = (((x249/x250)&x251)&x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 108136886856344236LLU;
	int64_t x254 = -211690LL;
	uint8_t x255 = 3U;
	uint8_t x256 = 4U;
	volatile uint64_t t61 = 139098319130859LLU;

	t61 = (((x253/x254)&x255)&x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x258 = 116110U;
	volatile int64_t x259 = INT64_MIN;
	volatile int64_t x260 = 471000073690370LL;
	int64_t t62 = -48433958021077LL;

	t62 = (((x257/x258)&x259)&x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x265 = 1947724848257706134LLU;
	int8_t x266 = -3;
	static uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;
	static uint64_t t63 = 22145858329858996LLU;

	t63 = (((x265/x266)&x267)&x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = INT64_MAX;
	int8_t x271 = -6;
	uint32_t x272 = UINT32_MAX;
	volatile uint64_t t64 = 58899023733LLU;

	t64 = (((x269/x270)&x271)&x272);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x274 = 773940LLU;
	volatile int16_t x275 = INT16_MAX;

	t65 = (((x273/x274)&x275)&x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	static int16_t x278 = INT16_MAX;
	int64_t x280 = -986LL;
	static volatile int64_t t66 = -167044LL;

	t66 = (((x277/x278)&x279)&x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = 455739664289677269LLU;
	volatile uint32_t x282 = 184U;
	int64_t x283 = 326380439433332661LL;
	uint64_t t67 = 3764819186005316857LLU;

	t67 = (((x281/x282)&x283)&x284);

	if (t67 != 308LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = -10;
	uint8_t x288 = 1U;

	t68 = (((x285/x286)&x287)&x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x290 = 4437094183984296705LLU;
	int8_t x291 = INT8_MIN;
	int8_t x292 = 9;
	uint64_t t69 = 39245714926818227LLU;

	t69 = (((x289/x290)&x291)&x292);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;

	t70 = (((x293/x294)&x295)&x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 69887U;
	uint64_t x303 = 5910284170600093144LLU;
	int8_t x304 = INT8_MIN;
	volatile uint64_t t71 = 5438539399714348LLU;

	t71 = (((x301/x302)&x303)&x304);

	if (t71 != 36864LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 5U;
	int64_t x306 = -375581221757595LL;
	int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	int64_t t72 = 526406389221LL;

	t72 = (((x305/x306)&x307)&x308);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = -128088;
	int32_t x310 = INT32_MIN;
	uint8_t x312 = 0U;

	t73 = (((x309/x310)&x311)&x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = -1;
	int64_t x314 = 10742599LL;
	static int32_t x315 = -69;
	int64_t x316 = INT64_MAX;
	int64_t t74 = 436719340634950LL;

	t74 = (((x313/x314)&x315)&x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = -1;
	int64_t x320 = 1886490LL;
	int64_t t75 = 33578LL;

	t75 = (((x317/x318)&x319)&x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = -2;
	int64_t x322 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	int64_t t76 = 0LL;

	t76 = (((x321/x322)&x323)&x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = -33;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t77 = -6748491;

	t77 = (((x325/x326)&x327)&x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 351756U;
	uint32_t x330 = 239671151U;
	volatile int32_t x331 = INT32_MIN;
	uint32_t x332 = 67695U;
	uint32_t t78 = 7869660U;

	t78 = (((x329/x330)&x331)&x332);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	static int16_t x334 = INT16_MAX;
	uint64_t x335 = UINT64_MAX;
	static int16_t x336 = -312;
	volatile uint64_t t79 = 33LLU;

	t79 = (((x333/x334)&x335)&x336);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t t80 = 127360LLU;

	t80 = (((x337/x338)&x339)&x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x342 = -660433827;
	int8_t x343 = INT8_MIN;
	int8_t x344 = 1;
	uint64_t t81 = 4065LLU;

	t81 = (((x341/x342)&x343)&x344);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x345 = 188LLU;
	int8_t x346 = -1;
	static uint16_t x347 = 23U;
	uint32_t x348 = 260675U;
	volatile uint64_t t82 = 127130098LLU;

	t82 = (((x345/x346)&x347)&x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = 86;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t83 = -1;

	t83 = (((x349/x350)&x351)&x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MAX;
	static volatile int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MAX;
	int64_t x356 = 20LL;

	t84 = (((x353/x354)&x355)&x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x357 = UINT32_MAX;
	int32_t x358 = -1;
	volatile uint8_t x359 = 0U;
	int64_t x360 = INT64_MAX;
	int64_t t85 = -4295LL;

	t85 = (((x357/x358)&x359)&x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	volatile int64_t x363 = INT64_MAX;
	int16_t x364 = 74;
	static int64_t t86 = -7LL;

	t86 = (((x361/x362)&x363)&x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 12U;
	static uint32_t x367 = UINT32_MAX;
	static int16_t x368 = INT16_MAX;
	uint32_t t87 = 25663257U;

	t87 = (((x365/x366)&x367)&x368);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x370 = 32U;
	volatile int64_t x371 = 240LL;
	uint64_t x372 = 364425909LLU;

	t88 = (((x369/x370)&x371)&x372);

	if (t88 != 16LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = -1LL;
	static int16_t x374 = 99;
	int16_t x375 = -324;
	static int32_t x376 = -386;
	volatile int64_t t89 = 31417921791LL;

	t89 = (((x373/x374)&x375)&x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x378 = -1LL;
	volatile int16_t x379 = 0;
	static int64_t x380 = INT64_MAX;
	int64_t t90 = -3384769852LL;

	t90 = (((x377/x378)&x379)&x380);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x383 = -205853398LL;
	volatile uint32_t x384 = 383674U;
	volatile int64_t t91 = 13362LL;

	t91 = (((x381/x382)&x383)&x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = INT32_MIN;
	volatile uint32_t x386 = UINT32_MAX;
	volatile uint64_t x387 = 21880165067LLU;
	static int16_t x388 = INT16_MAX;
	static uint64_t t92 = 1987706LLU;

	t92 = (((x385/x386)&x387)&x388);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = -1;
	volatile int64_t x390 = 1154LL;
	int8_t x391 = INT8_MAX;
	static volatile int64_t x392 = -1LL;
	int64_t t93 = -1273045836LL;

	t93 = (((x389/x390)&x391)&x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x393 = INT16_MAX;
	static uint8_t x394 = 12U;
	volatile uint32_t x395 = UINT32_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile uint32_t t94 = 74256U;

	t94 = (((x393/x394)&x395)&x396);

	if (t94 != 170U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = UINT16_MAX;
	uint32_t x399 = UINT32_MAX;
	int32_t x400 = -1;
	static volatile uint32_t t95 = 6935340U;

	t95 = (((x397/x398)&x399)&x400);

	if (t95 != 151U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x401 = -31055670;
	static volatile int8_t x402 = INT8_MIN;
	static int16_t x403 = -12221;
	uint16_t x404 = 223U;
	volatile int32_t t96 = -38393860;

	t96 = (((x401/x402)&x403)&x404);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 28U;
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = -1LL;
	volatile uint16_t x408 = 1558U;
	static uint64_t t97 = 1815657021396LLU;

	t97 = (((x405/x406)&x407)&x408);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MAX;
	uint64_t x410 = 984605443LLU;
	int8_t x411 = 0;
	static volatile uint64_t t98 = 1227441200519696578LLU;

	t98 = (((x409/x410)&x411)&x412);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x414 = 282690262670407661LLU;
	uint64_t x415 = UINT64_MAX;
	uint64_t t99 = 162402318LLU;

	t99 = (((x413/x414)&x415)&x416);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

