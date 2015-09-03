#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 384U;
uint32_t t2 = 118365209U;
static int16_t x18 = -9247;
static int32_t x19 = INT32_MIN;
static uint64_t x22 = 3887450275LLU;
uint32_t t6 = 3910447U;
int16_t x29 = INT16_MIN;
int32_t x32 = INT32_MAX;
static int8_t x37 = INT8_MAX;
int8_t x38 = -5;
int8_t x39 = 21;
volatile uint16_t x44 = 1258U;
volatile uint64_t x45 = 1636787010LLU;
int8_t x48 = INT8_MAX;
int16_t x49 = 191;
uint16_t x68 = UINT16_MAX;
uint32_t x70 = 1450U;
volatile int16_t x76 = INT16_MAX;
int64_t x92 = INT64_MIN;
int8_t x103 = INT8_MIN;
static uint64_t x108 = 1768904077LLU;
static volatile uint64_t t26 = 584689199118647395LLU;
int8_t x109 = INT8_MIN;
int8_t x113 = 20;
int32_t x117 = INT32_MAX;
uint16_t x118 = 596U;
static volatile int32_t t30 = -11084;
static uint8_t x125 = UINT8_MAX;
uint8_t x126 = 0U;
uint16_t x127 = UINT16_MAX;
int64_t x132 = INT64_MAX;
volatile int32_t t33 = 13;
static uint8_t x140 = 2U;
static int32_t t35 = 75226;
uint32_t x149 = 25081U;
static uint16_t x150 = 161U;
int16_t x154 = -9;
static uint64_t x156 = 571775LLU;
int32_t x159 = 1;
static volatile int32_t t39 = 7211910;
int64_t x162 = 14831862LL;
int64_t x171 = INT64_MIN;
volatile uint64_t x172 = 188752LLU;
uint64_t x173 = UINT64_MAX;
int8_t x176 = -1;
static int8_t x177 = -1;
static uint64_t x181 = UINT64_MAX;
volatile int64_t x183 = 37LL;
volatile int8_t x191 = INT8_MIN;
int64_t t47 = -7190206865LL;
volatile uint64_t x196 = UINT64_MAX;
static volatile uint64_t t48 = 276666748615332718LLU;
uint16_t x198 = 215U;
int32_t x205 = INT32_MIN;
volatile uint64_t t51 = 14650574484242LLU;
static volatile int64_t t54 = -24639895100165LL;
uint8_t x228 = UINT8_MAX;
volatile uint32_t x231 = UINT32_MAX;
int16_t x238 = INT16_MIN;
static int64_t x240 = INT64_MIN;
int64_t x243 = -255826869LL;
static volatile int32_t t60 = 4;
uint16_t x245 = 3894U;
int16_t x247 = INT16_MAX;
int64_t x249 = INT64_MAX;
static int64_t t62 = 7169741782LL;
static int64_t x257 = -39115431240796LL;
int32_t x261 = INT32_MIN;
uint64_t x265 = 74405830447LLU;
volatile int32_t t66 = 8119;
volatile uint64_t x274 = 1719LLU;
volatile int32_t x278 = INT32_MAX;
volatile int32_t t69 = -4599;
int16_t x281 = 0;
int8_t x285 = INT8_MIN;
uint32_t x286 = 835418U;
int16_t x289 = INT16_MAX;
static int8_t x295 = INT8_MIN;
static volatile int32_t t75 = 1049129526;
uint8_t x305 = UINT8_MAX;
volatile int8_t x306 = INT8_MAX;
volatile uint64_t x310 = 26862564LLU;
int64_t x312 = INT64_MIN;
int32_t x320 = -738376;
int32_t t79 = -2;
volatile int8_t x322 = INT8_MIN;
uint16_t x333 = UINT16_MAX;
int64_t x339 = 17LL;
int32_t x345 = -1;
int8_t x348 = -5;
static int32_t t86 = -49025072;
int8_t x351 = INT8_MIN;
int16_t x358 = -64;
volatile int32_t t89 = -5;
static int8_t x361 = -1;
static int8_t x362 = -1;
volatile uint32_t t91 = 59U;
volatile int64_t x369 = -261727471633LL;
uint64_t t92 = 52163LLU;
int64_t x373 = 212347697889LL;
volatile int16_t x376 = -1;
uint16_t x377 = UINT16_MAX;
uint32_t x378 = UINT32_MAX;
int8_t x382 = -53;
int16_t x383 = INT16_MIN;
uint64_t x385 = UINT64_MAX;
int32_t t96 = 69;
int8_t x389 = -3;
static uint32_t x399 = 800166068U;
int32_t t99 = -28;


void f0(void) {
	static int16_t x1 = 93;
	volatile int64_t x2 = INT64_MAX;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;
	static int64_t t0 = 3920LL;

	t0 = (((x1|x2)==x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint32_t x7 = 0U;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -393LL;

	t1 = (((x5|x6)==x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	static int64_t x10 = INT64_MIN;
	uint8_t x11 = 3U;
	static uint32_t x12 = UINT32_MAX;

	t2 = (((x9|x10)==x11)&x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MAX;
	uint8_t x15 = 8U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -4798292;

	t3 = (((x13|x14)==x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = 382;

	t4 = (((x17|x18)==x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t5 = 46029LL;

	t5 = (((x21|x22)==x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 52U;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = 350386172605838LLU;
	uint32_t x28 = UINT32_MAX;

	t6 = (((x25|x26)==x27)&x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 0U;
	int16_t x31 = INT16_MAX;
	int32_t t7 = -31657;

	t7 = (((x29|x30)==x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = UINT32_MAX;
	static int8_t x34 = -11;
	int8_t x35 = -1;
	volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 5679099;

	t8 = (((x33|x34)==x35)&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 12LLU;

	t9 = (((x37|x38)==x39)&x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int16_t x42 = INT16_MIN;
	volatile int64_t x43 = INT64_MIN;
	volatile int32_t t10 = -297238225;

	t10 = (((x41|x42)==x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	int64_t x47 = 224306389LL;
	volatile int32_t t11 = 787270;

	t11 = (((x45|x46)==x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	static int64_t x51 = INT64_MAX;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = 113;

	t12 = (((x49|x50)==x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static volatile int8_t x54 = INT8_MAX;
	uint32_t x55 = 2711981U;
	int8_t x56 = -1;
	volatile int32_t t13 = 0;

	t13 = (((x53|x54)==x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = 0;
	static int8_t x59 = INT8_MAX;
	int32_t x60 = 1006258;
	static volatile int32_t t14 = -499030;

	t14 = (((x57|x58)==x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static uint64_t x62 = 167783LLU;
	int32_t x63 = INT32_MAX;
	int8_t x64 = 4;
	volatile int32_t t15 = -1;

	t15 = (((x61|x62)==x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -52;
	int32_t x66 = INT32_MIN;
	volatile uint64_t x67 = 32LLU;
	static int32_t t16 = 31;

	t16 = (((x65|x66)==x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = -100276144079454LL;

	t17 = (((x69|x70)==x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	volatile uint16_t x74 = 11U;
	int8_t x75 = -1;
	volatile int32_t t18 = 244476145;

	t18 = (((x73|x74)==x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	uint32_t x80 = 424U;
	uint32_t t19 = 1605535U;

	t19 = (((x77|x78)==x79)&x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	int8_t x82 = 1;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = 48U;
	volatile int32_t t20 = -297002;

	t20 = (((x81|x82)==x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -2;
	int32_t x86 = INT32_MAX;
	int16_t x87 = 838;
	volatile int8_t x88 = INT8_MIN;
	int32_t t21 = 0;

	t21 = (((x85|x86)==x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 3715504LLU;
	volatile int64_t x90 = 1536LL;
	static uint64_t x91 = 2384LLU;
	volatile int64_t t22 = 247849793012LL;

	t22 = (((x89|x90)==x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 1367693375U;
	volatile int64_t x95 = -1LL;
	int8_t x96 = -1;
	volatile int32_t t23 = -233;

	t23 = (((x93|x94)==x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MAX;
	int8_t x98 = INT8_MIN;
	uint64_t x99 = 16LLU;
	int32_t x100 = 355490;
	static int32_t t24 = 3;

	t24 = (((x97|x98)==x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	static uint32_t x102 = 205U;
	static volatile int8_t x104 = -1;
	int32_t t25 = 3854208;

	t25 = (((x101|x102)==x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static uint8_t x106 = 22U;
	volatile uint16_t x107 = 502U;

	t26 = (((x105|x106)==x107)&x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = 198U;
	uint32_t x111 = 5U;
	volatile int16_t x112 = 19;
	volatile int32_t t27 = 13706;

	t27 = (((x109|x110)==x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = -5LL;
	uint8_t x116 = 99U;
	static volatile int32_t t28 = -226;

	t28 = (((x113|x114)==x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x119 = 872U;
	static int16_t x120 = 2;
	volatile int32_t t29 = 24;

	t29 = (((x117|x118)==x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = 2;
	int32_t x122 = INT32_MIN;
	static uint8_t x123 = 1U;
	int16_t x124 = 0;

	t30 = (((x121|x122)==x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x128 = 27U;
	int32_t t31 = 222;

	t31 = (((x125|x126)==x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 14;
	int8_t x130 = -1;
	static int32_t x131 = INT32_MAX;
	volatile int64_t t32 = -1LL;

	t32 = (((x129|x130)==x131)&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = -28240498087LL;
	static uint16_t x135 = 77U;
	volatile uint8_t x136 = 5U;

	t33 = (((x133|x134)==x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	int16_t x138 = 11970;
	volatile int32_t x139 = -470;
	volatile int32_t t34 = -1;

	t34 = (((x137|x138)==x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MAX;
	uint64_t x142 = 1062788785175639883LLU;
	static volatile uint32_t x143 = 126477891U;
	int8_t x144 = 41;

	t35 = (((x141|x142)==x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 26U;
	uint8_t x146 = 35U;
	volatile int8_t x147 = -14;
	int16_t x148 = 59;
	volatile int32_t t36 = 178;

	t36 = (((x145|x146)==x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = INT8_MIN;
	static volatile int32_t x152 = -201;
	volatile int32_t t37 = -166868920;

	t37 = (((x149|x150)==x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	uint64_t t38 = 14941968LLU;

	t38 = (((x153|x154)==x155)&x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static uint64_t x158 = 4135LLU;
	int32_t x160 = -16958652;

	t39 = (((x157|x158)==x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MAX;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = 2U;
	int32_t t40 = 1964405;

	t40 = (((x161|x162)==x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 33U;
	static uint32_t x168 = 116220781U;
	uint32_t t41 = 70539102U;

	t41 = (((x165|x166)==x167)&x168);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 13676LL;
	volatile int8_t x170 = 0;
	uint64_t t42 = 86LLU;

	t42 = (((x169|x170)==x171)&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 213U;
	uint8_t x175 = 16U;
	volatile int32_t t43 = 1223423;

	t43 = (((x173|x174)==x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x178 = INT16_MAX;
	int64_t x179 = 1302LL;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 3;

	t44 = (((x177|x178)==x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = 356405;
	int32_t x184 = -233;
	int32_t t45 = -79554494;

	t45 = (((x181|x182)==x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 1;
	int64_t x186 = -19057917046LL;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = -4634;
	volatile int32_t t46 = 36995;

	t46 = (((x185|x186)==x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 0;
	static volatile int16_t x190 = INT16_MIN;
	volatile int64_t x192 = 2101430810334653084LL;

	t47 = (((x189|x190)==x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MAX;

	t48 = (((x193|x194)==x195)&x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = -1LL;
	int64_t t49 = -123313411964LL;

	t49 = (((x197|x198)==x199)&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -1;
	volatile uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -58070;

	t50 = (((x201|x202)==x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	volatile int64_t x207 = 701600024LL;
	uint64_t x208 = UINT64_MAX;

	t51 = (((x205|x206)==x207)&x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 25;
	static int64_t x210 = -1LL;
	volatile uint64_t x211 = 8974LLU;
	volatile int16_t x212 = INT16_MAX;
	static int32_t t52 = -72435844;

	t52 = (((x209|x210)==x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int8_t x214 = -1;
	uint16_t x215 = 1116U;
	uint16_t x216 = 47U;
	volatile int32_t t53 = 4115;

	t53 = (((x213|x214)==x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = 8U;
	uint16_t x218 = 1U;
	uint16_t x219 = 116U;
	int64_t x220 = -1LL;

	t54 = (((x217|x218)==x219)&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -93963LL;
	uint8_t x222 = 29U;
	int64_t x223 = -214528LL;
	uint32_t x224 = 324099U;
	uint32_t t55 = 1817044U;

	t55 = (((x221|x222)==x223)&x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	static volatile uint64_t x227 = 4193LLU;
	volatile int32_t t56 = 3522;

	t56 = (((x225|x226)==x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -204;
	int32_t x230 = INT32_MAX;
	volatile int8_t x232 = 12;
	volatile int32_t t57 = -290;

	t57 = (((x229|x230)==x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -1;
	int64_t x234 = INT64_MAX;
	uint64_t x235 = 32459277860LLU;
	int16_t x236 = -1;
	static volatile int32_t t58 = -759621409;

	t58 = (((x233|x234)==x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MAX;
	uint32_t x239 = 434U;
	static volatile int64_t t59 = -1LL;

	t59 = (((x237|x238)==x239)&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	int64_t x242 = INT64_MAX;
	volatile int8_t x244 = INT8_MIN;

	t60 = (((x241|x242)==x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t61 = -10400;

	t61 = (((x245|x246)==x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MIN;
	static volatile uint64_t x251 = 40699956436LLU;
	volatile int64_t x252 = INT64_MIN;

	t62 = (((x249|x250)==x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = UINT32_MAX;
	static uint8_t x255 = 4U;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 6318;

	t63 = (((x253|x254)==x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t64 = -271819619892174392LL;

	t64 = (((x257|x258)==x259)&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	uint16_t x263 = 5U;
	static int64_t x264 = INT64_MIN;
	static int64_t t65 = -44LL;

	t65 = (((x261|x262)==x263)&x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = -1829433;
	int16_t x267 = INT16_MIN;
	int32_t x268 = INT32_MIN;

	t66 = (((x265|x266)==x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 48;
	volatile uint64_t x270 = UINT64_MAX;
	uint16_t x271 = 1977U;
	int64_t x272 = INT64_MIN;
	int64_t t67 = 1529251266LL;

	t67 = (((x269|x270)==x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 629U;
	volatile int32_t x275 = INT32_MIN;
	int8_t x276 = 1;
	static volatile int32_t t68 = 75;

	t68 = (((x273|x274)==x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static int8_t x279 = -1;
	uint16_t x280 = 50U;

	t69 = (((x277|x278)==x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = INT64_MAX;
	int16_t x283 = -1;
	uint32_t x284 = 67903U;
	volatile uint32_t t70 = 46280460U;

	t70 = (((x281|x282)==x283)&x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x287 = INT8_MAX;
	volatile uint32_t x288 = 70554U;
	volatile uint32_t t71 = 156236U;

	t71 = (((x285|x286)==x287)&x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = 1;
	uint16_t x291 = UINT16_MAX;
	static int64_t x292 = -1LL;
	static int64_t t72 = -3649576369LL;

	t72 = (((x289|x290)==x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 3U;
	int32_t x294 = INT32_MIN;
	volatile int32_t x296 = INT32_MAX;
	static int32_t t73 = -4;

	t73 = (((x293|x294)==x295)&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 2384431848812LLU;
	uint16_t x299 = 0U;
	uint8_t x300 = 1U;
	volatile int32_t t74 = 92746824;

	t74 = (((x297|x298)==x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = -1;
	volatile uint64_t x302 = 103163460LLU;
	int64_t x303 = -162139037354319LL;
	int8_t x304 = INT8_MIN;

	t75 = (((x301|x302)==x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x307 = -3432;
	int8_t x308 = INT8_MAX;
	int32_t t76 = -15;

	t76 = (((x305|x306)==x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -1;
	int16_t x311 = -1;
	static int64_t t77 = -101823366665812261LL;

	t77 = (((x309|x310)==x311)&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	volatile int64_t x314 = -527414455179LL;
	static uint64_t x315 = 2855409709LLU;
	static int8_t x316 = 9;
	int32_t t78 = -504025;

	t78 = (((x313|x314)==x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 2217209459505635LLU;
	volatile int8_t x318 = 22;
	volatile int32_t x319 = -1;

	t79 = (((x317|x318)==x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	volatile int16_t x323 = -1;
	static int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = 20204;

	t80 = (((x321|x322)==x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x326 = UINT16_MAX;
	uint64_t x327 = UINT64_MAX;
	uint32_t x328 = 250110U;
	volatile uint32_t t81 = 950785U;

	t81 = (((x325|x326)==x327)&x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 101U;
	static uint64_t x331 = 175LLU;
	int16_t x332 = -7;
	static volatile int32_t t82 = 5;

	t82 = (((x329|x330)==x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -2;
	int16_t x335 = 145;
	static int16_t x336 = INT16_MIN;
	int32_t t83 = -9305;

	t83 = (((x333|x334)==x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	static volatile int16_t x338 = INT16_MAX;
	int32_t x340 = 7;
	int32_t t84 = -16112;

	t84 = (((x337|x338)==x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 12U;
	static uint64_t x342 = 159701529726062LLU;
	int8_t x343 = -1;
	uint32_t x344 = 81U;
	uint32_t t85 = 8295365U;

	t85 = (((x341|x342)==x343)&x344);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x346 = INT64_MIN;
	uint64_t x347 = 5815350153LLU;

	t86 = (((x345|x346)==x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 1653469264U;
	volatile int16_t x350 = INT16_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t87 = 10478254625052501LL;

	t87 = (((x349|x350)==x351)&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	static int64_t x354 = 119617135123LL;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = -1;
	volatile int32_t t88 = -1;

	t88 = (((x353|x354)==x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int32_t x359 = 15;
	int32_t x360 = 24722;

	t89 = (((x357|x358)==x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x363 = 8U;
	uint64_t x364 = UINT64_MAX;
	uint64_t t90 = 3031LLU;

	t90 = (((x361|x362)==x363)&x364);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -231380LL;
	static volatile int8_t x366 = 4;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = 4431918U;

	t91 = (((x365|x366)==x367)&x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	int32_t x371 = 79;
	uint64_t x372 = UINT64_MAX;

	t92 = (((x369|x370)==x371)&x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 1934U;
	static uint8_t x375 = 7U;
	int32_t t93 = 220;

	t93 = (((x373|x374)==x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x379 = INT32_MAX;
	static int64_t x380 = INT64_MIN;
	static volatile int64_t t94 = -41160420943287LL;

	t94 = (((x377|x378)==x379)&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int64_t x384 = -1LL;
	static int64_t t95 = 401835LL;

	t95 = (((x381|x382)==x383)&x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x386 = INT16_MAX;
	int64_t x387 = -1LL;
	int32_t x388 = 4340;

	t96 = (((x385|x386)==x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = 52979783530LL;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = -9;
	volatile int32_t t97 = -21;

	t97 = (((x389|x390)==x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 979339717294LLU;
	int8_t x394 = INT8_MAX;
	volatile int32_t x395 = INT32_MAX;
	int64_t x396 = -1LL;
	volatile int64_t t98 = 31255594102675LL;

	t98 = (((x393|x394)==x395)&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 19821U;
	int32_t x398 = INT32_MIN;
	int8_t x400 = -1;

	t99 = (((x397|x398)==x399)&x400);

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

