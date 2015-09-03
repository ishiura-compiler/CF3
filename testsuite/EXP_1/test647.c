#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x7 = UINT8_MAX;
static int64_t x11 = INT64_MIN;
uint8_t x17 = UINT8_MAX;
int64_t x19 = INT64_MIN;
static volatile int32_t t7 = 3801291;
uint64_t x33 = 11331266982706732LLU;
int32_t t9 = -56899242;
int32_t t10 = 158775406;
volatile uint16_t x54 = 17831U;
int8_t x56 = INT8_MIN;
static int8_t x61 = INT8_MIN;
volatile int64_t x62 = -5584759328365724LL;
int32_t t15 = 116;
int8_t x67 = 2;
static int64_t x69 = -1LL;
static uint32_t x72 = UINT32_MAX;
int32_t t18 = -1;
int64_t x80 = INT64_MIN;
int32_t t19 = 13;
static int8_t x82 = INT8_MIN;
static int64_t x83 = INT64_MIN;
uint8_t x85 = 32U;
int32_t t21 = 1348850;
static int8_t x90 = -2;
static uint16_t x91 = 407U;
int64_t x96 = 3732749976892993054LL;
int32_t x98 = -1;
volatile int32_t t24 = 2713;
uint16_t x107 = UINT16_MAX;
int8_t x114 = -29;
uint16_t x116 = UINT16_MAX;
volatile uint16_t x117 = 1U;
volatile int32_t t29 = -965;
static int16_t x122 = -1;
int64_t x123 = INT64_MIN;
static int32_t x132 = INT32_MAX;
static int16_t x133 = INT16_MIN;
volatile int32_t t33 = 13008368;
static uint8_t x143 = UINT8_MAX;
int32_t x145 = -1;
static volatile int32_t t36 = 74347;
int32_t x149 = INT32_MIN;
volatile int16_t x153 = INT16_MAX;
int16_t x158 = 12077;
static uint16_t x163 = UINT16_MAX;
volatile int32_t t40 = 4434;
uint32_t x173 = 5022U;
static uint32_t x175 = 29428467U;
static int16_t x184 = -19;
int32_t x192 = -1;
uint8_t x193 = UINT8_MAX;
int8_t x203 = INT8_MAX;
volatile int32_t t49 = 85914700;
static int16_t x206 = INT16_MIN;
uint8_t x214 = UINT8_MAX;
static volatile int64_t x219 = -1LL;
volatile int32_t x225 = 1;
volatile int32_t t55 = -1;
static int64_t x241 = INT64_MAX;
int32_t x243 = -3608252;
static uint16_t x249 = UINT16_MAX;
volatile uint8_t x252 = UINT8_MAX;
int32_t t63 = 247401624;
int64_t x268 = -1LL;
int64_t x278 = -1LL;
uint32_t x279 = 1166U;
uint64_t x285 = 27093222861192501LLU;
uint64_t x288 = 272520921LLU;
uint8_t x289 = 9U;
volatile int16_t x297 = INT16_MIN;
int8_t x298 = -1;
uint16_t x299 = UINT16_MAX;
static int64_t x307 = -1LL;
volatile int64_t x311 = 14511LL;
volatile uint8_t x313 = UINT8_MAX;
int8_t x316 = INT8_MAX;
int8_t x317 = -1;
int64_t x318 = -1LL;
uint64_t x321 = UINT64_MAX;
volatile int8_t x325 = -1;
volatile int32_t t79 = -9588;
static int16_t x332 = INT16_MIN;
volatile int32_t t80 = -229;
int16_t x338 = -57;
int16_t x339 = 9965;
static int64_t x341 = -1LL;
static int32_t x342 = INT32_MIN;
uint8_t x344 = 1U;
uint16_t x348 = 10U;
uint64_t x350 = UINT64_MAX;
int16_t x351 = 0;
int32_t x352 = -1;
uint64_t x355 = 14244LLU;
static int16_t x357 = 1967;
static uint8_t x364 = 4U;
int16_t x366 = INT16_MIN;
uint16_t x375 = UINT16_MAX;
volatile int32_t x385 = INT32_MIN;
static uint32_t x389 = 678420869U;
volatile int32_t t95 = 953462105;
int32_t x398 = -89;
int64_t x403 = -1LL;


void f0(void) {
	int32_t x1 = -1;
	volatile int32_t x2 = INT32_MIN;
	static int16_t x3 = -8132;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 8698;

	t0 = (((x1/x2)&x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 277530535297985LL;
	volatile int64_t x6 = INT64_MAX;
	uint64_t x8 = 3597231LLU;
	volatile int32_t t1 = -423532;

	t1 = (((x5/x6)&x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = 18;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 1680;

	t2 = (((x9/x10)&x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 15496206462350LLU;
	volatile uint8_t x14 = 1U;
	int64_t x15 = 3720LL;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = 4;

	t3 = (((x13/x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -50373018336404380LL;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 588;

	t4 = (((x17/x18)&x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -6217442;

	t5 = (((x21/x22)&x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	int8_t x26 = -1;
	int16_t x27 = -1;
	volatile int64_t x28 = INT64_MIN;
	int32_t t6 = -589288062;

	t6 = (((x25/x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 0U;
	volatile int64_t x32 = 2787253078LL;

	t7 = (((x29/x30)&x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -2LL;
	uint8_t x35 = 42U;
	uint64_t x36 = 101495223611055091LLU;
	volatile int32_t t8 = -20;

	t8 = (((x33/x34)&x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -33227033;
	int16_t x38 = 13;
	volatile int32_t x39 = 28059;
	int8_t x40 = INT8_MIN;

	t9 = (((x37/x38)&x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = INT16_MAX;
	volatile int16_t x44 = -1;

	t10 = (((x41/x42)&x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 3;
	static int16_t x46 = -1;
	int16_t x47 = -317;
	static int16_t x48 = 503;
	volatile int32_t t11 = -2;

	t11 = (((x45/x46)&x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile int32_t x52 = INT32_MIN;
	int32_t t12 = 1420;

	t12 = (((x49/x50)&x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile int8_t x55 = -1;
	volatile int32_t t13 = -4308182;

	t13 = (((x53/x54)&x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 4LL;
	int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 32325526;

	t14 = (((x57/x58)&x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = -716050271LL;
	int32_t x64 = INT32_MAX;

	t15 = (((x61/x62)&x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	static volatile int32_t x66 = INT32_MIN;
	static uint64_t x68 = 28LLU;
	static int32_t t16 = 1;

	t16 = (((x65/x66)&x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 2;
	volatile uint64_t x71 = 1LLU;
	volatile int32_t t17 = 513696382;

	t17 = (((x69/x70)&x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int64_t x74 = 81776153LL;
	uint64_t x75 = 586457228635264LLU;
	static int32_t x76 = INT32_MIN;

	t18 = (((x73/x74)&x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 1U;
	static int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;

	t19 = (((x77/x78)&x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 3218U;
	static uint64_t x84 = UINT64_MAX;
	int32_t t20 = 8469707;

	t20 = (((x81/x82)&x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = 21048683U;
	uint8_t x87 = UINT8_MAX;
	static int32_t x88 = INT32_MAX;

	t21 = (((x85/x86)&x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -75074;

	t22 = (((x89/x90)&x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MIN;
	int32_t t23 = -268126091;

	t23 = (((x93/x94)&x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int16_t x99 = 8144;
	int64_t x100 = INT64_MIN;

	t24 = (((x97/x98)&x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	volatile int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	static int64_t x104 = -1LL;
	int32_t t25 = 0;

	t25 = (((x101/x102)&x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	static volatile int32_t x108 = 717909427;
	int32_t t26 = -150;

	t26 = (((x105/x106)&x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	int32_t x111 = INT32_MAX;
	uint64_t x112 = 16LLU;
	int32_t t27 = -147358909;

	t27 = (((x109/x110)&x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	static volatile int64_t x115 = -1LL;
	int32_t t28 = -216364757;

	t28 = (((x113/x114)&x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MAX;
	int32_t x119 = -265976255;
	static int8_t x120 = 0;

	t29 = (((x117/x118)&x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x121 = 34U;
	uint16_t x124 = 1U;
	volatile int32_t t30 = -2;

	t30 = (((x121/x122)&x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MAX;
	static int32_t x127 = 6;
	static int32_t x128 = -1;
	volatile int32_t t31 = 7329872;

	t31 = (((x125/x126)&x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x130 = -1;
	volatile uint32_t x131 = 24855725U;
	volatile int32_t t32 = 11944;

	t32 = (((x129/x130)&x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x134 = UINT32_MAX;
	int64_t x135 = INT64_MAX;
	int64_t x136 = 1503079775184LL;

	t33 = (((x133/x134)&x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MAX;
	static volatile uint8_t x139 = 29U;
	static uint16_t x140 = 2714U;
	static volatile int32_t t34 = 214;

	t34 = (((x137/x138)&x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int16_t x142 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	int32_t t35 = -160039;

	t35 = (((x141/x142)&x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x146 = -1;
	uint64_t x147 = 28799636514961149LLU;
	int8_t x148 = -34;

	t36 = (((x145/x146)&x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	static int16_t x151 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = 15552;

	t37 = (((x149/x150)&x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 3U;
	int64_t x155 = -1LL;
	int16_t x156 = -1;
	static volatile int32_t t38 = -445744;

	t38 = (((x153/x154)&x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = 6;
	int16_t x159 = INT16_MAX;
	static int32_t x160 = INT32_MIN;
	int32_t t39 = 116638535;

	t39 = (((x157/x158)&x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 27U;
	static int64_t x162 = INT64_MIN;
	int64_t x164 = INT64_MAX;

	t40 = (((x161/x162)&x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int16_t x166 = -18;
	int64_t x167 = INT64_MIN;
	volatile int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 2;

	t41 = (((x165/x166)&x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x174 = 254U;
	static int32_t x176 = -2053051;
	int32_t t42 = -151;

	t42 = (((x173/x174)&x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = -1;
	uint64_t x178 = 43LLU;
	int32_t x179 = INT32_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t43 = -398;

	t43 = (((x177/x178)&x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int32_t x182 = -1;
	uint64_t x183 = 66LLU;
	static volatile int32_t t44 = -48;

	t44 = (((x181/x182)&x183)<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -1;
	int16_t x186 = -192;
	int8_t x187 = INT8_MIN;
	int8_t x188 = -1;
	static int32_t t45 = 4029;

	t45 = (((x185/x186)&x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x190 = 17;
	uint64_t x191 = 31LLU;
	int32_t t46 = -4694;

	t46 = (((x189/x190)&x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x194 = UINT64_MAX;
	volatile uint8_t x195 = 6U;
	uint16_t x196 = 3U;
	int32_t t47 = 13198;

	t47 = (((x193/x194)&x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = INT16_MAX;
	int32_t x198 = INT32_MAX;
	static volatile uint8_t x199 = 4U;
	int64_t x200 = INT64_MIN;
	volatile int32_t t48 = 20;

	t48 = (((x197/x198)&x199)<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x201 = UINT32_MAX;
	volatile uint64_t x202 = 1659LLU;
	int16_t x204 = INT16_MAX;

	t49 = (((x201/x202)&x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = UINT64_MAX;
	uint64_t x207 = 7842960781542LLU;
	int16_t x208 = -1;
	volatile int32_t t50 = 215281509;

	t50 = (((x205/x206)&x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 1911932735U;
	static volatile int8_t x210 = -1;
	int16_t x211 = INT16_MAX;
	uint16_t x212 = 1998U;
	int32_t t51 = 61832;

	t51 = (((x209/x210)&x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	int32_t t52 = 202;

	t52 = (((x213/x214)&x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MIN;
	int32_t x220 = -1;
	int32_t t53 = -1883320;

	t53 = (((x217/x218)&x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = 92;
	static uint32_t x222 = 641U;
	int32_t x223 = INT32_MIN;
	volatile int64_t x224 = INT64_MIN;
	static volatile int32_t t54 = 3887;

	t54 = (((x221/x222)&x223)<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = -2;
	int64_t x227 = -1LL;
	volatile int16_t x228 = 27;

	t55 = (((x225/x226)&x227)<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 11282518525725499LL;
	volatile uint8_t x230 = 14U;
	uint16_t x231 = 0U;
	int64_t x232 = -1LL;
	int32_t t56 = 9067574;

	t56 = (((x229/x230)&x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile int16_t x238 = INT16_MIN;
	static int32_t x239 = -240225064;
	int32_t x240 = INT32_MIN;
	int32_t t57 = 54;

	t57 = (((x237/x238)&x239)<=x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x242 = INT64_MAX;
	int16_t x244 = INT16_MAX;
	volatile int32_t t58 = 1;

	t58 = (((x241/x242)&x243)<=x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x245 = INT64_MAX;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = 1;
	int8_t x248 = INT8_MAX;
	volatile int32_t t59 = 11243215;

	t59 = (((x245/x246)&x247)<=x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = UINT64_MAX;
	volatile int32_t t60 = -3177;

	t60 = (((x249/x250)&x251)<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 1745;
	int8_t x254 = -8;
	int32_t x255 = INT32_MAX;
	static volatile int64_t x256 = INT64_MAX;
	int32_t t61 = -694119014;

	t61 = (((x253/x254)&x255)<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int32_t t62 = 797095;

	t62 = (((x257/x258)&x259)<=x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	static int8_t x264 = INT8_MAX;

	t63 = (((x261/x262)&x263)<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = -2;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = -1LL;
	volatile int32_t t64 = -118391;

	t64 = (((x265/x266)&x267)<=x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = 0;
	static uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = 16U;
	volatile int32_t t65 = -5391;

	t65 = (((x269/x270)&x271)<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x273 = UINT16_MAX;
	volatile uint8_t x274 = 1U;
	uint32_t x275 = 118U;
	volatile uint32_t x276 = 14355786U;
	volatile int32_t t66 = 3356;

	t66 = (((x273/x274)&x275)<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = -1LL;
	volatile int16_t x280 = -1;
	int32_t t67 = -25;

	t67 = (((x277/x278)&x279)<=x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MAX;
	uint64_t x283 = 7583768061922983LLU;
	int16_t x284 = INT16_MIN;
	volatile int32_t t68 = 21154;

	t68 = (((x281/x282)&x283)<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x286 = -1;
	uint8_t x287 = 3U;
	volatile int32_t t69 = -3343446;

	t69 = (((x285/x286)&x287)<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x290 = 1453541;
	uint8_t x291 = 4U;
	volatile int32_t x292 = INT32_MAX;
	static volatile int32_t t70 = 7876;

	t70 = (((x289/x290)&x291)<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x293 = INT8_MIN;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = 688;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t71 = -521594;

	t71 = (((x293/x294)&x295)<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x300 = -1;
	volatile int32_t t72 = 1;

	t72 = (((x297/x298)&x299)<=x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x301 = 408344433LLU;
	int8_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int8_t x304 = INT8_MIN;
	int32_t t73 = -1502988;

	t73 = (((x301/x302)&x303)<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = UINT8_MAX;
	int8_t x306 = INT8_MIN;
	volatile int8_t x308 = -5;
	int32_t t74 = 9402;

	t74 = (((x305/x306)&x307)<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	volatile uint32_t x312 = 8073856U;
	int32_t t75 = 1;

	t75 = (((x309/x310)&x311)<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = -1LL;
	uint32_t x315 = 7784U;
	volatile int32_t t76 = -7;

	t76 = (((x313/x314)&x315)<=x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x319 = -1;
	static int32_t x320 = INT32_MAX;
	volatile int32_t t77 = 1;

	t77 = (((x317/x318)&x319)<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = -1;
	int16_t x323 = INT16_MAX;
	int32_t x324 = 5;
	static volatile int32_t t78 = 6675;

	t78 = (((x321/x322)&x323)<=x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -6;
	static int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MAX;

	t79 = (((x325/x326)&x327)<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MIN;
	uint64_t x331 = 6937700623105945LLU;

	t80 = (((x329/x330)&x331)<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x334 = -527;
	int64_t x335 = -696LL;
	static volatile uint16_t x336 = 11U;
	static int32_t t81 = 11;

	t81 = (((x333/x334)&x335)<=x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x337 = 657U;
	int32_t x340 = 33771294;
	int32_t t82 = 2334120;

	t82 = (((x337/x338)&x339)<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x343 = -2;
	int32_t t83 = -657;

	t83 = (((x341/x342)&x343)<=x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x345 = -4;
	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 2U;
	volatile int32_t t84 = 11679;

	t84 = (((x345/x346)&x347)<=x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = -1;
	volatile int32_t t85 = -116232;

	t85 = (((x349/x350)&x351)<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 156666861346LLU;
	int16_t x354 = 2;
	uint64_t x356 = 125LLU;
	volatile int32_t t86 = 0;

	t86 = (((x353/x354)&x355)<=x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = 212;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = 386709U;
	int32_t t87 = -2431475;

	t87 = (((x357/x358)&x359)<=x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = -1LL;
	int16_t x362 = INT16_MAX;
	uint8_t x363 = 98U;
	volatile int32_t t88 = -137;

	t88 = (((x361/x362)&x363)<=x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 1594554LLU;
	int32_t x367 = INT32_MIN;
	static uint64_t x368 = UINT64_MAX;
	int32_t t89 = 1585;

	t89 = (((x365/x366)&x367)<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	static volatile int16_t x372 = INT16_MAX;
	int32_t t90 = -14625;

	t90 = (((x369/x370)&x371)<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = INT8_MAX;
	static uint8_t x374 = 6U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t91 = -858488323;

	t91 = (((x373/x374)&x375)<=x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x378 = 1U;
	volatile uint16_t x379 = 2293U;
	int64_t x380 = -6LL;
	int32_t t92 = -15248240;

	t92 = (((x377/x378)&x379)<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x386 = 2U;
	uint16_t x387 = 14135U;
	int32_t x388 = 37459727;
	int32_t t93 = 0;

	t93 = (((x385/x386)&x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x390 = UINT8_MAX;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 162U;
	volatile int32_t t94 = -101468506;

	t94 = (((x389/x390)&x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x393 = 13U;
	int32_t x394 = INT32_MAX;
	static int16_t x395 = -1722;
	int16_t x396 = -1;

	t95 = (((x393/x394)&x395)<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x397 = 0U;
	int32_t x399 = INT32_MAX;
	volatile int8_t x400 = -42;
	volatile int32_t t96 = 917169;

	t96 = (((x397/x398)&x399)<=x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x401 = 1;
	static uint8_t x402 = UINT8_MAX;
	static uint8_t x404 = UINT8_MAX;
	int32_t t97 = 316;

	t97 = (((x401/x402)&x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	static uint8_t x406 = 32U;
	volatile int16_t x407 = INT16_MAX;
	int16_t x408 = 3855;
	volatile int32_t t98 = -32;

	t98 = (((x405/x406)&x407)<=x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x409 = 83U;
	int8_t x410 = INT8_MAX;
	uint64_t x411 = 1367024312LLU;
	uint64_t x412 = 5923LLU;
	int32_t t99 = -2048048;

	t99 = (((x409/x410)&x411)<=x412);

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

