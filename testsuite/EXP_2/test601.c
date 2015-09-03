#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 9712;
static int32_t x10 = -15981197;
static int32_t x18 = INT32_MAX;
uint16_t x20 = UINT16_MAX;
volatile int64_t x25 = -1LL;
uint64_t x28 = UINT64_MAX;
int32_t x35 = INT32_MIN;
int64_t t8 = -137041848904LL;
static int32_t x55 = INT32_MIN;
volatile int32_t t13 = -1;
volatile int32_t t14 = 4143;
int8_t x67 = INT8_MAX;
int32_t t17 = 200391541;
static uint8_t x74 = UINT8_MAX;
volatile uint64_t x76 = UINT64_MAX;
volatile int32_t t19 = -2375090;
uint8_t x83 = UINT8_MAX;
int16_t x84 = -1;
uint8_t x86 = 1U;
volatile uint64_t x88 = 1684031LLU;
static uint64_t t21 = 263659396290812LLU;
uint64_t x96 = 7837968807LLU;
uint16_t x100 = 370U;
static int16_t x103 = -1;
int8_t x115 = -1;
volatile uint32_t t28 = 188U;
uint64_t x126 = 6LLU;
uint32_t t31 = 55471U;
volatile uint8_t x133 = 50U;
volatile uint64_t x138 = UINT64_MAX;
uint16_t x139 = 2U;
volatile uint16_t x142 = UINT16_MAX;
uint16_t x152 = 2256U;
static int64_t x161 = INT64_MIN;
int32_t x175 = INT32_MIN;
static int32_t x177 = -1;
int8_t x180 = INT8_MIN;
uint8_t x188 = 21U;
int32_t t46 = -112742;
int32_t x197 = 2112988;
uint32_t x198 = UINT32_MAX;
int32_t x208 = -223466;
int32_t t49 = -568;
int16_t x209 = 494;
volatile int64_t x211 = -4373410279478157198LL;
int32_t t50 = 458;
volatile int32_t x217 = INT32_MAX;
volatile uint32_t x230 = 8585017U;
uint64_t x233 = 17LLU;
uint64_t x235 = 134LLU;
static volatile int64_t t55 = -205274592457402589LL;
volatile uint32_t x242 = UINT32_MAX;
volatile int32_t t57 = 3;
static int16_t x246 = INT16_MAX;
int32_t x247 = -1;
volatile int32_t t58 = 0;
int64_t x261 = -1LL;
static volatile int32_t x263 = INT32_MIN;
static int32_t x273 = -254709012;
volatile int8_t x278 = INT8_MAX;
int64_t x280 = INT64_MIN;
volatile int8_t x282 = -1;
volatile int8_t x297 = INT8_MAX;
uint64_t x299 = UINT64_MAX;
int32_t t69 = 0;
int64_t x303 = -1LL;
volatile int32_t t70 = 2697;
int32_t x312 = INT32_MIN;
volatile int32_t t72 = -233117489;
uint8_t x316 = 34U;
int8_t x320 = -1;
volatile int8_t x328 = -6;
static int32_t x329 = -19031;
int16_t x330 = INT16_MAX;
int64_t x332 = INT64_MIN;
static int64_t t77 = 1512681666LL;
static volatile int8_t x336 = INT8_MIN;
uint32_t x339 = UINT32_MAX;
volatile uint64_t x341 = 4127783133LLU;
int16_t x350 = -749;
int32_t t82 = 77395;
int32_t x354 = INT32_MIN;
static int64_t x356 = INT64_MIN;
int32_t x358 = -1;
uint64_t t84 = 17562215602423903LLU;
int16_t x363 = INT16_MIN;
static volatile int32_t t85 = -38;
int8_t x377 = -1;
uint16_t x382 = 573U;
static volatile uint16_t x384 = UINT16_MAX;
volatile int32_t x387 = INT32_MIN;
volatile int32_t x391 = -24336;
int32_t x393 = -1;
int32_t t92 = -2916950;
static volatile int16_t x399 = INT16_MAX;
volatile int32_t t93 = 29;
uint32_t x403 = UINT32_MAX;
volatile uint8_t x416 = UINT8_MAX;
int32_t x417 = 15584646;
int8_t x420 = INT8_MAX;
static volatile int32_t t99 = 6552024;


void f0(void) {
	uint8_t x1 = 38U;
	volatile int64_t x2 = INT64_MAX;
	static int64_t x3 = -13353133344428012LL;
	int16_t x4 = INT16_MIN;

	t0 = ((x1==(x2/x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint64_t x6 = 2116967611872030747LLU;
	int32_t x7 = INT32_MIN;
	static volatile uint64_t x8 = 3210099591779255372LLU;
	volatile uint64_t t1 = 7796990LLU;

	t1 = ((x5==(x6/x7))*x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 217979556U;
	static int8_t x11 = INT8_MAX;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 9628LLU;

	t2 = ((x9==(x10/x11))*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static volatile int64_t x14 = -480028794622654LL;
	volatile int32_t x15 = INT32_MIN;
	static int8_t x16 = 0;
	volatile int32_t t3 = -9;

	t3 = ((x13==(x14/x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	static int32_t t4 = 430;

	t4 = ((x17==(x18/x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint32_t x22 = 13586U;
	volatile uint64_t x23 = 121390LLU;
	static volatile uint32_t x24 = UINT32_MAX;
	uint32_t t5 = 1672U;

	t5 = ((x21==(x22/x23))*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x26 = 12U;
	volatile int8_t x27 = INT8_MAX;
	volatile uint64_t t6 = 769837706LLU;

	t6 = ((x25==(x26/x27))*x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	volatile int64_t x30 = 1927349774987244425LL;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -78;

	t7 = ((x29==(x30/x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 7U;
	volatile int16_t x34 = INT16_MIN;
	volatile int64_t x36 = -1LL;

	t8 = ((x33==(x34/x35))*x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = INT64_MAX;
	uint8_t x39 = UINT8_MAX;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -7979LL;

	t9 = ((x37==(x38/x39))*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 11U;
	static int64_t x42 = -1LL;
	uint8_t x43 = UINT8_MAX;
	volatile int8_t x44 = INT8_MAX;
	static int32_t t10 = 1;

	t10 = ((x41==(x42/x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint16_t x46 = 154U;
	int64_t x47 = INT64_MIN;
	volatile uint8_t x48 = 30U;
	volatile int32_t t11 = 15580;

	t11 = ((x45==(x46/x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int64_t x50 = -561601887315324546LL;
	uint32_t x51 = 129858U;
	volatile int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -13025548;

	t12 = ((x49==(x50/x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -28694367483LL;
	int8_t x54 = 0;
	int32_t x56 = -1;

	t13 = ((x53==(x54/x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 127241;
	uint64_t x58 = 26747757521534835LLU;
	volatile int32_t x59 = INT32_MAX;
	volatile int16_t x60 = 2865;

	t14 = ((x57==(x58/x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = -1LL;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = -60863;

	t15 = ((x61==(x62/x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	volatile int16_t x66 = INT16_MIN;
	uint8_t x68 = 63U;
	int32_t t16 = -1669;

	t16 = ((x65==(x66/x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint16_t x70 = UINT16_MAX;
	uint16_t x71 = UINT16_MAX;
	volatile int32_t x72 = 1383;

	t17 = ((x69==(x70/x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 7171496099LL;
	uint64_t x75 = 7170972219794LLU;
	static uint64_t t18 = 6698LLU;

	t18 = ((x73==(x74/x75))*x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 0U;
	int64_t x78 = 207236924906684LL;
	static uint16_t x79 = 80U;
	int16_t x80 = -1;

	t19 = ((x77==(x78/x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x82 = 13U;
	int32_t t20 = -1101;

	t20 = ((x81==(x82/x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int16_t x87 = INT16_MIN;

	t21 = ((x85==(x86/x87))*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	uint32_t x90 = 1837U;
	int64_t x91 = INT64_MAX;
	volatile uint64_t x92 = 719690LLU;
	static volatile uint64_t t22 = 96123651434641881LLU;

	t22 = ((x89==(x90/x91))*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 12416LL;
	volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	static volatile uint64_t t23 = 5496721779LLU;

	t23 = ((x93==(x94/x95))*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -24;
	volatile int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MAX;
	volatile int32_t t24 = 4920;

	t24 = ((x97==(x98/x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x101 = -86LL;
	uint32_t x102 = 90U;
	uint32_t x104 = 58852250U;
	volatile uint32_t t25 = 46012536U;

	t25 = ((x101==(x102/x103))*x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	static uint8_t x106 = UINT8_MAX;
	uint16_t x107 = UINT16_MAX;
	static int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = -761;

	t26 = ((x105==(x106/x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static uint8_t x110 = 114U;
	static int8_t x111 = -1;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -7079;

	t27 = ((x109==(x110/x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -7294;
	volatile uint16_t x114 = 248U;
	uint32_t x116 = 1U;

	t28 = ((x113==(x114/x115))*x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = -7629;
	volatile int8_t x118 = 2;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 0U;
	static uint32_t t29 = 30546U;

	t29 = ((x117==(x118/x119))*x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MAX;
	int64_t x127 = INT64_MIN;
	static uint16_t x128 = UINT16_MAX;
	static volatile int32_t t30 = 522;

	t30 = ((x125==(x126/x127))*x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MAX;
	uint32_t x132 = UINT32_MAX;

	t31 = ((x129==(x130/x131))*x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x134 = -1LL;
	static uint16_t x135 = 2U;
	int64_t x136 = INT64_MIN;
	volatile int64_t t32 = -1280280059852LL;

	t32 = ((x133==(x134/x135))*x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x137 = 17784U;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t33 = 3U;

	t33 = ((x137==(x138/x139))*x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 22U;
	int32_t x143 = -23471;
	int8_t x144 = INT8_MIN;
	int32_t t34 = 13;

	t34 = ((x141==(x142/x143))*x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 23LLU;
	volatile int64_t x146 = 68LL;
	volatile uint16_t x147 = UINT16_MAX;
	static uint32_t x148 = 1770722063U;
	uint32_t t35 = 653970905U;

	t35 = ((x145==(x146/x147))*x148);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = -1LL;
	volatile int8_t x150 = -1;
	int16_t x151 = 464;
	int32_t t36 = 30;

	t36 = ((x149==(x150/x151))*x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = 1;
	int32_t x154 = 121;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 224531429105LLU;
	uint64_t t37 = 1405118691346176736LLU;

	t37 = ((x153==(x154/x155))*x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MIN;
	uint16_t x158 = 0U;
	static uint8_t x159 = 7U;
	int64_t x160 = INT64_MAX;
	static volatile int64_t t38 = -449044LL;

	t38 = ((x157==(x158/x159))*x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x162 = 2U;
	static uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = -10;
	int32_t t39 = -729712678;

	t39 = ((x161==(x162/x163))*x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = 10791255U;
	int32_t x167 = INT32_MAX;
	static uint32_t x168 = UINT32_MAX;
	volatile uint32_t t40 = 11066U;

	t40 = ((x165==(x166/x167))*x168);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x173 = -1;
	int16_t x174 = INT16_MIN;
	uint16_t x176 = 26U;
	volatile int32_t t41 = -11769870;

	t41 = ((x173==(x174/x175))*x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x178 = 32430U;
	int64_t x179 = INT64_MAX;
	volatile int32_t t42 = 144;

	t42 = ((x177==(x178/x179))*x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = -2785232LL;
	int32_t x182 = 633175476;
	volatile int64_t x183 = INT64_MAX;
	static uint8_t x184 = 24U;
	volatile int32_t t43 = -2028827;

	t43 = ((x181==(x182/x183))*x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = 592550143;
	int32_t x186 = -1;
	int16_t x187 = -47;
	int32_t t44 = -473;

	t44 = ((x185==(x186/x187))*x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 8595726LLU;
	int8_t x190 = -1;
	static volatile uint32_t x191 = UINT32_MAX;
	int8_t x192 = 0;
	int32_t t45 = 245788;

	t45 = ((x189==(x190/x191))*x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x193 = 18396U;
	int8_t x194 = INT8_MIN;
	int16_t x195 = 7;
	volatile int32_t x196 = -12;

	t46 = ((x193==(x194/x195))*x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x199 = 487418282;
	int16_t x200 = INT16_MAX;
	volatile int32_t t47 = -100349780;

	t47 = ((x197==(x198/x199))*x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -12;
	int32_t x202 = -3073;
	volatile int64_t x203 = INT64_MAX;
	volatile uint32_t x204 = 78U;
	static uint32_t t48 = 5553U;

	t48 = ((x201==(x202/x203))*x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	int64_t x206 = INT64_MIN;
	uint8_t x207 = UINT8_MAX;

	t49 = ((x205==(x206/x207))*x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x210 = 10U;
	int16_t x212 = INT16_MIN;

	t50 = ((x209==(x210/x211))*x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = -214667LL;
	int64_t x219 = 67LL;
	int8_t x220 = INT8_MIN;
	volatile int32_t t51 = 1;

	t51 = ((x217==(x218/x219))*x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = 1292314475LL;
	static int16_t x222 = -1;
	volatile int8_t x223 = -53;
	volatile int32_t x224 = INT32_MIN;
	int32_t t52 = -199;

	t52 = ((x221==(x222/x223))*x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 8618LLU;
	static int64_t x227 = -2423694734679662444LL;
	volatile int32_t x228 = INT32_MIN;
	int32_t t53 = -1509443;

	t53 = ((x225==(x226/x227))*x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x229 = INT16_MIN;
	static uint16_t x231 = UINT16_MAX;
	uint8_t x232 = 20U;
	volatile int32_t t54 = 408;

	t54 = ((x229==(x230/x231))*x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x234 = UINT16_MAX;
	static int64_t x236 = INT64_MAX;

	t55 = ((x233==(x234/x235))*x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = -73LL;
	uint16_t x238 = 1478U;
	int16_t x239 = -1;
	int16_t x240 = INT16_MAX;
	int32_t t56 = 4808;

	t56 = ((x237==(x238/x239))*x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x241 = -1;
	int64_t x243 = INT64_MIN;
	static uint16_t x244 = 97U;

	t57 = ((x241==(x242/x243))*x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x245 = 0U;
	int8_t x248 = -3;

	t58 = ((x245==(x246/x247))*x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = -33;
	static uint64_t x250 = 1820LLU;
	uint16_t x251 = 607U;
	uint32_t x252 = UINT32_MAX;
	static uint32_t t59 = 1U;

	t59 = ((x249==(x250/x251))*x252);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	static volatile uint32_t x255 = 91656654U;
	static volatile int64_t x256 = -1LL;
	volatile int64_t t60 = -1LL;

	t60 = ((x253==(x254/x255))*x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x262 = UINT64_MAX;
	static uint8_t x264 = UINT8_MAX;
	int32_t t61 = -2613911;

	t61 = ((x261==(x262/x263))*x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MAX;
	uint64_t x266 = UINT64_MAX;
	static uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t62 = 98;

	t62 = ((x265==(x266/x267))*x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x274 = 177U;
	volatile int16_t x275 = INT16_MAX;
	int16_t x276 = 1;
	static volatile int32_t t63 = -238068046;

	t63 = ((x273==(x274/x275))*x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = 11U;
	int16_t x279 = INT16_MIN;
	static int64_t t64 = -37216LL;

	t64 = ((x277==(x278/x279))*x280);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x281 = UINT64_MAX;
	volatile int64_t x283 = INT64_MIN;
	volatile int16_t x284 = INT16_MIN;
	int32_t t65 = -718970;

	t65 = ((x281==(x282/x283))*x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = -8308788LL;
	volatile int64_t x286 = INT64_MIN;
	int8_t x287 = 58;
	static uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t66 = 996861276976352LLU;

	t66 = ((x285==(x286/x287))*x288);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = -3;
	uint16_t x290 = 30864U;
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MAX;
	volatile int32_t t67 = -1646982;

	t67 = ((x289==(x290/x291))*x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	volatile uint16_t x295 = 823U;
	uint8_t x296 = 52U;
	int32_t t68 = -73414;

	t68 = ((x293==(x294/x295))*x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x298 = INT64_MIN;
	uint8_t x300 = 104U;

	t69 = ((x297==(x298/x299))*x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x301 = -1;
	int16_t x302 = INT16_MAX;
	int32_t x304 = 206702601;

	t70 = ((x301==(x302/x303))*x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x305 = INT64_MIN;
	uint32_t x306 = 1157667U;
	static int64_t x307 = -7568629LL;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t71 = -1991261;

	t71 = ((x305==(x306/x307))*x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x309 = -3;
	volatile uint16_t x310 = 2146U;
	int8_t x311 = INT8_MIN;

	t72 = ((x309==(x310/x311))*x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	uint16_t x315 = 1947U;
	volatile int32_t t73 = 53;

	t73 = ((x313==(x314/x315))*x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = -10;
	volatile uint64_t x318 = 7596243422377411LLU;
	int64_t x319 = -5431369LL;
	static volatile int32_t t74 = -11;

	t74 = ((x317==(x318/x319))*x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x321 = 5898352693LLU;
	int64_t x322 = -6105460LL;
	int32_t x323 = 309;
	volatile uint32_t x324 = 1841385U;
	volatile uint32_t t75 = 13U;

	t75 = ((x321==(x322/x323))*x324);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 83U;
	uint32_t x326 = 163U;
	uint16_t x327 = 1990U;
	volatile int32_t t76 = -75490;

	t76 = ((x325==(x326/x327))*x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x331 = -117564700755977719LL;

	t77 = ((x329==(x330/x331))*x332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	int32_t t78 = 344;

	t78 = ((x333==(x334/x335))*x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	static int16_t x338 = INT16_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t79 = 169086173;

	t79 = ((x337==(x338/x339))*x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t80 = -2562412LL;

	t80 = ((x341==(x342/x343))*x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 36U;
	uint8_t x346 = 28U;
	volatile int16_t x347 = 3719;
	int32_t x348 = INT32_MAX;
	volatile int32_t t81 = 297957;

	t81 = ((x345==(x346/x347))*x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	int16_t x351 = -1;
	static uint16_t x352 = 10U;

	t82 = ((x349==(x350/x351))*x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int64_t t83 = -36LL;

	t83 = ((x353==(x354/x355))*x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x357 = UINT32_MAX;
	int32_t x359 = -1;
	uint64_t x360 = UINT64_MAX;

	t84 = ((x357==(x358/x359))*x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = -1;
	int8_t x362 = 0;
	int32_t x364 = INT32_MIN;

	t85 = ((x361==(x362/x363))*x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = INT32_MAX;
	static int64_t x370 = 36148579LL;
	static volatile int64_t x371 = -48030859448628LL;
	uint32_t x372 = UINT32_MAX;
	static uint32_t t86 = 3777556U;

	t86 = ((x369==(x370/x371))*x372);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = -5181;
	static int64_t x374 = INT64_MIN;
	uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 3U;
	static int32_t t87 = -29818;

	t87 = ((x373==(x374/x375))*x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x378 = 0;
	int16_t x379 = INT16_MIN;
	uint64_t x380 = 123360211621441915LLU;
	volatile uint64_t t88 = 2697657680033375916LLU;

	t88 = ((x377==(x378/x379))*x380);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = -1;
	volatile int8_t x383 = INT8_MIN;
	int32_t t89 = 42;

	t89 = ((x381==(x382/x383))*x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x385 = 2U;
	static int16_t x386 = -1;
	uint64_t x388 = 1745LLU;
	uint64_t t90 = 16639434963LLU;

	t90 = ((x385==(x386/x387))*x388);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	uint64_t x392 = 88386442LLU;
	volatile uint64_t t91 = 33319640074769LLU;

	t91 = ((x389==(x390/x391))*x392);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MAX;

	t92 = ((x393==(x394/x395))*x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x397 = 20U;
	static uint16_t x398 = 1566U;
	int16_t x400 = INT16_MAX;

	t93 = ((x397==(x398/x399))*x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MIN;
	static int8_t x402 = 30;
	uint8_t x404 = 18U;
	volatile int32_t t94 = -2;

	t94 = ((x401==(x402/x403))*x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x405 = INT32_MAX;
	uint32_t x406 = 5U;
	uint32_t x407 = 197U;
	volatile int8_t x408 = -24;
	int32_t t95 = -2;

	t95 = ((x405==(x406/x407))*x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 28345LL;
	int32_t x410 = 3204566;
	volatile uint16_t x411 = UINT16_MAX;
	int64_t x412 = INT64_MIN;
	static volatile int64_t t96 = -76262974915041015LL;

	t96 = ((x409==(x410/x411))*x412);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = INT32_MAX;
	uint16_t x414 = UINT16_MAX;
	static int64_t x415 = -1LL;
	volatile int32_t t97 = -391337;

	t97 = ((x413==(x414/x415))*x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x418 = INT16_MAX;
	int16_t x419 = INT16_MIN;
	volatile int32_t t98 = -1;

	t98 = ((x417==(x418/x419))*x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x421 = 20U;
	uint16_t x422 = 25761U;
	int8_t x423 = 2;
	static uint16_t x424 = UINT16_MAX;

	t99 = ((x421==(x422/x423))*x424);

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

