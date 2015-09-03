#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
static uint32_t x7 = UINT32_MAX;
volatile int16_t x16 = -1;
int64_t x18 = 26977986LL;
int64_t x19 = INT64_MIN;
uint32_t t6 = 3U;
volatile uint32_t t7 = 90808U;
int16_t x38 = INT16_MAX;
volatile int16_t x39 = INT16_MIN;
int16_t x49 = -1;
static uint16_t x50 = 3U;
volatile int8_t x54 = INT8_MAX;
volatile int16_t x63 = INT16_MAX;
volatile int32_t t16 = -1;
static uint32_t x70 = 522753466U;
uint32_t x72 = UINT32_MAX;
volatile uint32_t t17 = 0U;
int8_t x75 = 1;
int16_t x77 = -1;
static volatile int32_t t19 = -7;
uint8_t x86 = UINT8_MAX;
static volatile int64_t x90 = INT64_MIN;
static volatile int8_t x98 = INT8_MIN;
int8_t x103 = 9;
volatile int32_t x104 = INT32_MAX;
uint8_t x112 = 3U;
volatile int64_t x122 = INT64_MIN;
int32_t x126 = INT32_MIN;
int16_t x127 = 971;
volatile uint64_t t31 = 93714LLU;
static uint8_t x130 = 3U;
int16_t x138 = INT16_MIN;
int8_t x141 = -1;
volatile uint64_t x144 = UINT64_MAX;
int64_t x145 = INT64_MIN;
uint16_t x151 = 33U;
static uint8_t x156 = UINT8_MAX;
uint8_t x157 = 13U;
volatile int32_t x160 = -576110;
uint8_t x162 = UINT8_MAX;
int16_t x168 = INT16_MIN;
uint8_t x169 = UINT8_MAX;
static volatile uint64_t t43 = 255359LLU;
uint16_t x177 = UINT16_MAX;
int16_t x185 = -1;
static int32_t x191 = INT32_MAX;
uint32_t x192 = 999643596U;
uint16_t x193 = UINT16_MAX;
int16_t x197 = INT16_MIN;
int64_t x199 = 38635435LL;
int32_t t52 = 0;
uint8_t x214 = 1U;
int64_t x216 = INT64_MAX;
static int32_t x227 = 86529901;
volatile int8_t x228 = 8;
volatile int32_t t56 = -19781128;
static int8_t x233 = -1;
volatile int32_t x235 = INT32_MAX;
uint8_t x248 = 86U;
uint8_t x249 = 32U;
volatile int16_t x250 = -6;
int32_t t62 = -39817;
static uint8_t x257 = 3U;
int32_t x272 = INT32_MIN;
int16_t x279 = INT16_MIN;
int16_t x282 = INT16_MIN;
int8_t x283 = -1;
int32_t x285 = -456861;
static int64_t x289 = 4908831325316LL;
volatile int64_t x295 = -879837256661724LL;
volatile uint8_t x301 = 18U;
volatile int32_t x304 = -3;
int16_t x306 = -1;
static volatile uint8_t x312 = 2U;
volatile int32_t t75 = 14;
static int64_t x313 = 690LL;
int16_t x321 = INT16_MIN;
volatile uint32_t x323 = 54U;
int8_t x330 = INT8_MIN;
static volatile int32_t x338 = INT32_MIN;
static uint8_t x339 = 32U;
uint16_t x345 = UINT16_MAX;
volatile uint64_t x350 = UINT64_MAX;
static uint16_t x356 = UINT16_MAX;
int64_t x358 = INT64_MIN;
int32_t x369 = INT32_MIN;
volatile int64_t x374 = 7953960160758LL;
static int64_t x376 = INT64_MIN;
int8_t x379 = INT8_MAX;
int64_t x382 = 53LL;
uint64_t x387 = 6671LLU;
int8_t x391 = 3;
int32_t t93 = -177;
int32_t x396 = -3731266;
int64_t t95 = 125LL;
volatile int32_t x401 = 2978;
int16_t x414 = INT16_MAX;
uint16_t x416 = 23557U;
int16_t x419 = INT16_MIN;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	static volatile int8_t x2 = 10;
	static volatile uint16_t x3 = 9U;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -3622;

	t0 = (((x1/x2)<=x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -2;
	static int16_t x8 = INT16_MAX;
	int32_t t1 = 850551;

	t1 = (((x5/x6)<=x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint64_t x10 = 2749236455551LLU;
	int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -3204695;

	t2 = (((x9/x10)<=x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 2084477725U;
	static int8_t x14 = -6;
	int16_t x15 = INT16_MAX;
	int32_t t3 = 45597;

	t3 = (((x13/x14)<=x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 48000;
	static uint32_t x20 = 8867U;
	static uint32_t t4 = 508621U;

	t4 = (((x17/x18)<=x19)%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	int16_t x22 = 5;
	int32_t x23 = INT32_MAX;
	static uint16_t x24 = 3U;
	volatile int32_t t5 = 7615308;

	t5 = (((x21/x22)<=x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int32_t x26 = INT32_MAX;
	int8_t x27 = 3;
	uint32_t x28 = 7903903U;

	t6 = (((x25/x26)<=x27)%x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 821U;
	volatile int64_t x30 = -19LL;
	static uint16_t x31 = 4016U;
	uint32_t x32 = UINT32_MAX;

	t7 = (((x29/x30)<=x31)%x32);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -53;
	int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	static volatile uint16_t x36 = 2U;
	int32_t t8 = 1498821;

	t8 = (((x33/x34)<=x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 8;
	volatile int16_t x40 = 6745;
	volatile int32_t t9 = 3069;

	t9 = (((x37/x38)<=x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 31LL;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 15889551;

	t10 = (((x41/x42)<=x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = -536626;
	volatile int32_t x47 = INT32_MAX;
	uint32_t x48 = 21399689U;
	uint32_t t11 = 6256007U;

	t11 = (((x45/x46)<=x47)%x48);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 3U;
	int32_t t12 = -49;

	t12 = (((x49/x50)<=x51)%x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint16_t x55 = 6U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -2393617;

	t13 = (((x53/x54)<=x55)%x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	int16_t x59 = -181;
	static volatile uint8_t x60 = 12U;
	volatile int32_t t14 = 25;

	t14 = (((x57/x58)<=x59)%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 243U;
	uint32_t x62 = 42U;
	int64_t x64 = -1LL;
	volatile int64_t t15 = 1795187021LL;

	t15 = (((x61/x62)<=x63)%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static uint8_t x66 = 6U;
	uint8_t x67 = UINT8_MAX;
	static int16_t x68 = INT16_MAX;

	t16 = (((x65/x66)<=x67)%x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	volatile uint16_t x71 = 1U;

	t17 = (((x69/x70)<=x71)%x72);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint16_t x74 = 4515U;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -1;

	t18 = (((x73/x74)<=x75)%x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 24U;
	volatile uint16_t x79 = 9U;
	int16_t x80 = INT16_MAX;

	t19 = (((x77/x78)<=x79)%x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 35;
	int8_t x82 = -1;
	volatile int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t20 = 179513LL;

	t20 = (((x81/x82)<=x83)%x84);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 10028U;
	int16_t x87 = -1;
	int16_t x88 = -1;
	int32_t t21 = -5;

	t21 = (((x85/x86)<=x87)%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile int8_t x91 = INT8_MAX;
	volatile int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -64003;

	t22 = (((x89/x90)<=x91)%x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = UINT8_MAX;
	static int8_t x94 = -1;
	int8_t x95 = INT8_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t23 = 1787070247853LLU;

	t23 = (((x93/x94)<=x95)%x96);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = 1;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = 10;
	volatile int32_t t24 = 3618;

	t24 = (((x97/x98)<=x99)%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	int64_t x102 = -15405352LL;
	volatile int32_t t25 = -247;

	t25 = (((x101/x102)<=x103)%x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x106 = UINT32_MAX;
	static int16_t x107 = -1;
	volatile int16_t x108 = -410;
	int32_t t26 = -441678;

	t26 = (((x105/x106)<=x107)%x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x110 = 207711102LLU;
	int64_t x111 = 51956784417728062LL;
	int32_t t27 = 26007102;

	t27 = (((x109/x110)<=x111)%x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -3;
	uint32_t x114 = 5U;
	int32_t x115 = -496;
	volatile int16_t x116 = INT16_MAX;
	static int32_t t28 = -1;

	t28 = (((x113/x114)<=x115)%x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 315U;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = 112U;

	t29 = (((x117/x118)<=x119)%x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MAX;
	static int32_t t30 = 235107456;

	t30 = (((x121/x122)<=x123)%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -7581665741LL;
	uint64_t x128 = 7081293351157212LLU;

	t31 = (((x125/x126)<=x127)%x128);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 122314LLU;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = 9536;

	t32 = (((x129/x130)<=x131)%x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 94U;
	volatile uint8_t x134 = 3U;
	uint16_t x135 = 15U;
	int64_t x136 = INT64_MIN;
	int64_t t33 = -544700LL;

	t33 = (((x133/x134)<=x135)%x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 931711;
	volatile uint32_t x139 = 336831U;
	uint64_t x140 = UINT64_MAX;
	static uint64_t t34 = 7329048LLU;

	t34 = (((x137/x138)<=x139)%x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MAX;
	volatile uint64_t t35 = 6089777411679LLU;

	t35 = (((x141/x142)<=x143)%x144);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x146 = 5042U;
	int64_t x147 = -452174398LL;
	volatile int32_t x148 = INT32_MIN;
	int32_t t36 = -899;

	t36 = (((x145/x146)<=x147)%x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1721331;
	volatile int64_t x150 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -12;

	t37 = (((x149/x150)<=x151)%x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 253;
	uint64_t x154 = 180798759LLU;
	volatile int64_t x155 = INT64_MIN;
	volatile int32_t t38 = 0;

	t38 = (((x153/x154)<=x155)%x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 43U;
	int32_t x159 = INT32_MAX;
	static volatile int32_t t39 = 1;

	t39 = (((x157/x158)<=x159)%x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	volatile uint16_t x163 = 223U;
	int16_t x164 = 74;
	int32_t t40 = 5531;

	t40 = (((x161/x162)<=x163)%x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -16;
	uint32_t x166 = 141U;
	static uint8_t x167 = 59U;
	volatile int32_t t41 = 2;

	t41 = (((x165/x166)<=x167)%x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = 1;
	int32_t x171 = INT32_MIN;
	int16_t x172 = 676;
	static volatile int32_t t42 = 0;

	t42 = (((x169/x170)<=x171)%x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 2007U;
	volatile uint32_t x174 = 308U;
	volatile int16_t x175 = INT16_MAX;
	uint64_t x176 = 18701463329LLU;

	t43 = (((x173/x174)<=x175)%x176);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MAX;
	uint64_t x179 = 2LLU;
	volatile uint8_t x180 = 11U;
	int32_t t44 = 534713229;

	t44 = (((x177/x178)<=x179)%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x181 = -2706;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 25894568782LLU;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -49;

	t45 = (((x181/x182)<=x183)%x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x186 = INT32_MIN;
	int32_t x187 = -1;
	uint64_t x188 = 1925127027LLU;
	uint64_t t46 = 41703LLU;

	t46 = (((x185/x186)<=x187)%x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	uint64_t x190 = 969115186LLU;
	static uint32_t t47 = 21U;

	t47 = (((x189/x190)<=x191)%x192);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	uint64_t x195 = 279564917343041LLU;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -56556566;

	t48 = (((x193/x194)<=x195)%x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = UINT32_MAX;
	uint32_t x200 = 31114U;
	volatile uint32_t t49 = 2715U;

	t49 = (((x197/x198)<=x199)%x200);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int8_t x202 = 5;
	uint64_t x203 = 9867969943030353LLU;
	int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = -35779411634533413LL;

	t50 = (((x201/x202)<=x203)%x204);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = 423558921147LL;
	int64_t x208 = INT64_MAX;
	int64_t t51 = -5751680245926LL;

	t51 = (((x205/x206)<=x207)%x208);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 230244944LL;
	uint8_t x211 = UINT8_MAX;
	int32_t x212 = 2;

	t52 = (((x209/x210)<=x211)%x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = UINT8_MAX;
	int32_t x215 = INT32_MIN;
	int64_t t53 = 71245540125745LL;

	t53 = (((x213/x214)<=x215)%x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	uint8_t x218 = 13U;
	static int64_t x219 = INT64_MIN;
	static uint64_t x220 = 5107841LLU;
	uint64_t t54 = 70498004895861073LLU;

	t54 = (((x217/x218)<=x219)%x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -42;
	uint32_t x222 = 1594806U;
	static int64_t x223 = INT64_MIN;
	int64_t x224 = 7380816066LL;
	int64_t t55 = 1007989931078583010LL;

	t55 = (((x221/x222)<=x223)%x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x226 = UINT8_MAX;

	t56 = (((x225/x226)<=x227)%x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 40U;
	int32_t x230 = INT32_MAX;
	static volatile int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;
	volatile int64_t t57 = 139818956331983LL;

	t57 = (((x229/x230)<=x231)%x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 7614118LLU;
	int8_t x236 = -14;
	int32_t t58 = 8011;

	t58 = (((x233/x234)<=x235)%x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = -1;
	static volatile uint32_t x239 = 1590127655U;
	static int32_t x240 = 50;
	int32_t t59 = -1;

	t59 = (((x237/x238)<=x239)%x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 15565U;
	static int8_t x242 = 56;
	int16_t x243 = -1;
	static int16_t x244 = 102;
	static int32_t t60 = -1055218749;

	t60 = (((x241/x242)<=x243)%x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int16_t x246 = 39;
	static volatile int8_t x247 = INT8_MAX;
	volatile int32_t t61 = -1031297352;

	t61 = (((x245/x246)<=x247)%x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = -1;
	int32_t x252 = INT32_MAX;

	t62 = (((x249/x250)<=x251)%x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 157;
	int8_t x254 = INT8_MAX;
	volatile int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 193212;

	t63 = (((x253/x254)<=x255)%x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MIN;
	int32_t t64 = 1;

	t64 = (((x257/x258)<=x259)%x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 3;
	volatile int16_t x262 = INT16_MAX;
	static int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MIN;
	int64_t t65 = 49615303240125987LL;

	t65 = (((x261/x262)<=x263)%x264);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = 2U;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = UINT32_MAX;
	int32_t t66 = -214;

	t66 = (((x269/x270)<=x271)%x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	int32_t x275 = 0;
	volatile int16_t x276 = -1;
	volatile int32_t t67 = 192336;

	t67 = (((x273/x274)<=x275)%x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 3219814949LL;
	int64_t x278 = 84LL;
	volatile int32_t x280 = 64367;
	int32_t t68 = -2359226;

	t68 = (((x277/x278)<=x279)%x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	static volatile int64_t t69 = -542245629310LL;

	t69 = (((x281/x282)<=x283)%x284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x286 = -3;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = -1;
	volatile int32_t t70 = 4740904;

	t70 = (((x285/x286)<=x287)%x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x290 = INT8_MAX;
	static int32_t x291 = -11;
	volatile int8_t x292 = -1;
	volatile int32_t t71 = -182313;

	t71 = (((x289/x290)<=x291)%x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -1;
	static int64_t x296 = -1LL;
	static volatile int64_t t72 = -80670045LL;

	t72 = (((x293/x294)<=x295)%x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x302 = 63U;
	int32_t x303 = INT32_MIN;
	volatile int32_t t73 = -409;

	t73 = (((x301/x302)<=x303)%x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 35792635488057LLU;
	uint32_t x307 = UINT32_MAX;
	volatile int64_t x308 = -1LL;
	static volatile int64_t t74 = 16133LL;

	t74 = (((x305/x306)<=x307)%x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MAX;
	static uint16_t x310 = 3U;
	static int32_t x311 = INT32_MIN;

	t75 = (((x309/x310)<=x311)%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = INT32_MAX;
	static volatile int32_t x315 = INT32_MIN;
	static int16_t x316 = INT16_MIN;
	int32_t t76 = -259230232;

	t76 = (((x313/x314)<=x315)%x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = 1;
	int32_t x318 = INT32_MAX;
	volatile uint16_t x319 = 11668U;
	int16_t x320 = -1;
	volatile int32_t t77 = 159929;

	t77 = (((x317/x318)<=x319)%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 190162953LLU;
	volatile int64_t x324 = -1LL;
	volatile int64_t t78 = 2293367810385755342LL;

	t78 = (((x321/x322)<=x323)%x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = -1;
	volatile int32_t x331 = -1;
	volatile int64_t x332 = 1002016970988022547LL;
	static int64_t t79 = -423874701LL;

	t79 = (((x329/x330)<=x331)%x332);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x337 = INT64_MAX;
	static int32_t x340 = -1;
	volatile int32_t t80 = 0;

	t80 = (((x337/x338)<=x339)%x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	volatile int16_t x344 = INT16_MIN;
	int32_t t81 = -618686290;

	t81 = (((x341/x342)<=x343)%x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x346 = 1U;
	int32_t x347 = 58354311;
	int64_t x348 = INT64_MIN;
	static volatile int64_t t82 = -5973327LL;

	t82 = (((x345/x346)<=x347)%x348);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 40U;
	uint8_t x351 = 7U;
	static uint16_t x352 = 39U;
	int32_t t83 = -156952;

	t83 = (((x349/x350)<=x351)%x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 61U;
	int16_t x354 = 3005;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t t84 = -10;

	t84 = (((x353/x354)<=x355)%x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 4067826LLU;
	static uint64_t t85 = 31LLU;

	t85 = (((x357/x358)<=x359)%x360);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = UINT32_MAX;
	int64_t x362 = 5LL;
	volatile int8_t x363 = -1;
	int16_t x364 = INT16_MIN;
	int32_t t86 = -15;

	t86 = (((x361/x362)<=x363)%x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	volatile int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t87 = 44637979064478996LLU;

	t87 = (((x365/x366)<=x367)%x368);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	static int32_t x372 = -229352;
	int32_t t88 = -3567;

	t88 = (((x369/x370)<=x371)%x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = 170376435;
	volatile uint64_t x375 = UINT64_MAX;
	int64_t t89 = 96656165059936908LL;

	t89 = (((x373/x374)<=x375)%x376);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = -79;
	int16_t x380 = INT16_MIN;
	int32_t t90 = -63;

	t90 = (((x377/x378)<=x379)%x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MAX;
	volatile int32_t t91 = 5220660;

	t91 = (((x381/x382)<=x383)%x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -10;
	int32_t x386 = -87136041;
	uint8_t x388 = 36U;
	volatile int32_t t92 = -13;

	t92 = (((x385/x386)<=x387)%x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = -7578LL;
	uint8_t x390 = 3U;
	int32_t x392 = INT32_MIN;

	t93 = (((x389/x390)<=x391)%x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x394 = 417;
	int32_t x395 = -338;
	int32_t t94 = 0;

	t94 = (((x393/x394)<=x395)%x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 44205341U;
	uint16_t x398 = 3824U;
	uint8_t x399 = UINT8_MAX;
	static int64_t x400 = 3027544280024LL;

	t95 = (((x397/x398)<=x399)%x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x402 = 421745221;
	uint64_t x403 = 17999893411531546LLU;
	uint16_t x404 = 20544U;
	volatile int32_t t96 = -117422178;

	t96 = (((x401/x402)<=x403)%x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MAX;
	uint32_t x410 = 368U;
	int32_t x411 = INT32_MAX;
	int16_t x412 = 242;
	volatile int32_t t97 = 91775;

	t97 = (((x409/x410)<=x411)%x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 100U;
	volatile uint8_t x415 = 63U;
	volatile int32_t t98 = 1;

	t98 = (((x413/x414)<=x415)%x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MIN;
	static int8_t x418 = INT8_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	static uint64_t t99 = 175466LLU;

	t99 = (((x417/x418)<=x419)%x420);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

