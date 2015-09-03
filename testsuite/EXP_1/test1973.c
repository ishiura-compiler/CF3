#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = 218;
volatile uint16_t x6 = UINT16_MAX;
int32_t x9 = -1435;
int32_t x17 = -1;
uint32_t x18 = 2023314167U;
int64_t x20 = -15888396228LL;
volatile int8_t x21 = -1;
int16_t x26 = -1;
int8_t x27 = -21;
volatile int32_t x33 = INT32_MAX;
volatile int32_t t8 = -10;
int32_t t9 = 455;
static volatile uint64_t x41 = 918LLU;
int32_t x42 = INT32_MIN;
volatile int64_t x43 = -1996LL;
static int32_t x45 = INT32_MIN;
uint64_t x48 = 18421466LLU;
uint32_t x54 = UINT32_MAX;
volatile int64_t x55 = INT64_MIN;
int64_t x58 = INT64_MIN;
int32_t x70 = -1;
int8_t x76 = INT8_MIN;
int8_t x77 = -21;
int32_t x78 = INT32_MIN;
int16_t x80 = INT16_MIN;
int8_t x81 = INT8_MIN;
uint16_t x89 = 18U;
int32_t t24 = -24150;
int32_t t26 = -12;
int64_t x114 = 26890967LL;
int32_t x115 = INT32_MIN;
volatile int32_t t28 = -1719;
static volatile int32_t t29 = 14;
uint64_t x122 = 9128204340155861558LLU;
int8_t x126 = INT8_MIN;
volatile int32_t t31 = -1;
static int8_t x131 = INT8_MIN;
int16_t x134 = INT16_MAX;
uint16_t x135 = 2U;
static volatile int32_t t35 = -1891;
volatile int16_t x148 = 2338;
uint16_t x150 = UINT16_MAX;
int32_t x162 = INT32_MAX;
volatile int32_t t41 = -16;
static volatile int32_t t43 = -2146;
static uint8_t x177 = UINT8_MAX;
uint16_t x184 = UINT16_MAX;
volatile int32_t t45 = 314340476;
int8_t x189 = -1;
volatile uint8_t x199 = 1U;
int32_t x216 = -1;
static int8_t x217 = -1;
static int32_t t54 = -6;
int8_t x223 = INT8_MIN;
static int16_t x226 = INT16_MAX;
int64_t x232 = INT64_MIN;
int32_t t57 = -70684230;
int32_t x235 = INT32_MIN;
static int16_t x239 = 5880;
int32_t t59 = -12314583;
uint16_t x245 = UINT16_MAX;
static volatile uint8_t x247 = UINT8_MAX;
uint16_t x248 = UINT16_MAX;
volatile int32_t t61 = 1955;
int32_t x251 = -1;
static int8_t x254 = 1;
static uint16_t x260 = 31U;
static int16_t x263 = INT16_MIN;
volatile int32_t t65 = -7;
int64_t x269 = 1563867209146190LL;
int32_t x274 = INT32_MIN;
volatile int32_t t68 = 9986;
int32_t x279 = INT32_MIN;
int64_t x280 = INT64_MIN;
volatile int16_t x282 = INT16_MIN;
int8_t x287 = 0;
int64_t x291 = INT64_MAX;
uint32_t x299 = UINT32_MAX;
uint32_t x301 = 0U;
uint16_t x302 = 10U;
int32_t t75 = 347593641;
uint8_t x311 = UINT8_MAX;
volatile int64_t x316 = INT64_MAX;
volatile int32_t t78 = -841794495;
int32_t x317 = INT32_MAX;
int32_t x318 = INT32_MAX;
volatile uint8_t x319 = UINT8_MAX;
int32_t x320 = -842646954;
static int8_t x327 = -1;
int8_t x328 = INT8_MIN;
volatile int32_t t81 = -176205;
volatile int32_t t82 = -6023228;
uint16_t x333 = 51U;
int64_t x336 = INT64_MIN;
uint16_t x345 = UINT16_MAX;
static volatile uint64_t x350 = UINT64_MAX;
uint32_t x351 = 13349U;
volatile int32_t x355 = -25620;
uint8_t x360 = UINT8_MAX;
volatile uint8_t x363 = 0U;
int64_t x369 = -50362506LL;
volatile int32_t t92 = -480003684;
volatile int16_t x373 = -834;
int16_t x375 = -1;
volatile uint64_t x378 = 61395964982096LLU;
uint32_t x380 = 369398459U;
int32_t t94 = 307417;
static int64_t x381 = INT64_MIN;
volatile int32_t x386 = INT32_MAX;


void f0(void) {
	int8_t x1 = 2;
	int64_t x3 = INT64_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 1;

	t0 = (((x1|x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint64_t x7 = 1LLU;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = -1;

	t1 = (((x5|x6)<x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	int8_t x11 = 3;
	static volatile int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -444613187;

	t2 = (((x9|x10)<x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 735U;
	volatile uint8_t x14 = 48U;
	int32_t x15 = -106;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -3;

	t3 = (((x13|x14)<x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x19 = INT8_MAX;
	volatile int32_t t4 = -212;

	t4 = (((x17|x18)<x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = -1LL;
	int8_t x23 = -7;
	uint16_t x24 = 180U;
	int32_t t5 = 422;

	t5 = (((x21|x22)<x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -54;
	volatile int16_t x28 = INT16_MAX;
	static int32_t t6 = 1;

	t6 = (((x25|x26)<x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	static int32_t x30 = -3;
	static int32_t x31 = INT32_MIN;
	static volatile int32_t x32 = -1;
	int32_t t7 = 19762;

	t7 = (((x29|x30)<x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = -129527693;
	volatile int16_t x35 = -1;
	int32_t x36 = -1;

	t8 = (((x33|x34)<x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	static int32_t x38 = INT32_MIN;
	static int8_t x39 = -12;
	int16_t x40 = 342;

	t9 = (((x37|x38)<x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x44 = -17LL;
	volatile int32_t t10 = -9;

	t10 = (((x41|x42)<x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 6944;
	int16_t x47 = -80;
	static volatile int32_t t11 = -14874;

	t11 = (((x45|x46)<x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = 5433U;
	uint8_t x52 = 118U;
	int32_t t12 = 53;

	t12 = (((x49|x50)<x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	volatile int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 1;

	t13 = (((x53|x54)<x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x59 = 6147740226359754LLU;
	int16_t x60 = -1;
	int32_t t14 = -1;

	t14 = (((x57|x58)<x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	uint32_t x62 = 56179U;
	static int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	int32_t t15 = -492;

	t15 = (((x61|x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	static int32_t x66 = -1;
	int8_t x67 = -1;
	int8_t x68 = -1;
	volatile int32_t t16 = -1;

	t16 = (((x65|x66)<x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int16_t x71 = -53;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -101292;

	t17 = (((x69|x70)<x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 57908;
	uint8_t x74 = 10U;
	int8_t x75 = INT8_MIN;
	int32_t t18 = -25235584;

	t18 = (((x73|x74)<x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x79 = INT8_MAX;
	int32_t t19 = -6855272;

	t19 = (((x77|x78)<x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	uint32_t x83 = 11U;
	static volatile int64_t x84 = 9855789LL;
	volatile int32_t t20 = -3028;

	t20 = (((x81|x82)<x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 30U;
	static int16_t x86 = INT16_MIN;
	static uint64_t x87 = UINT64_MAX;
	int32_t x88 = -1;
	int32_t t21 = 1757813;

	t21 = (((x85|x86)<x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	int16_t x91 = -1423;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -31352;

	t22 = (((x89|x90)<x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 40;

	t23 = (((x93|x94)<x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	uint8_t x98 = 3U;
	volatile int8_t x99 = INT8_MIN;
	static int8_t x100 = 0;

	t24 = (((x97|x98)<x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	static int8_t x102 = INT8_MIN;
	int32_t x103 = -3155;
	int16_t x104 = -1;
	volatile int32_t t25 = -279;

	t25 = (((x101|x102)<x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MAX;
	volatile int8_t x106 = 1;
	int32_t x107 = INT32_MIN;
	volatile int32_t x108 = INT32_MIN;

	t26 = (((x105|x106)<x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 24;
	int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 25986U;
	volatile int32_t t27 = 345600;

	t27 = (((x109|x110)<x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 575;
	static int16_t x116 = INT16_MIN;

	t28 = (((x113|x114)<x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MAX;
	static uint64_t x118 = 21569573223861102LLU;
	static int16_t x119 = 16010;
	uint16_t x120 = UINT16_MAX;

	t29 = (((x117|x118)<x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = 434462734;
	volatile uint16_t x123 = UINT16_MAX;
	uint32_t x124 = 388U;
	int32_t t30 = 715403212;

	t30 = (((x121|x122)<x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 6904042773735LLU;
	static int64_t x127 = 1156243508LL;
	volatile int8_t x128 = INT8_MIN;

	t31 = (((x125|x126)<x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 177110920U;
	int16_t x130 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 28967989;

	t32 = (((x129|x130)<x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	uint16_t x136 = 480U;
	int32_t t33 = 7158761;

	t33 = (((x133|x134)<x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile uint32_t x138 = 294U;
	int64_t x139 = INT64_MIN;
	volatile int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 164;

	t34 = (((x137|x138)<x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 19042U;
	int16_t x142 = INT16_MIN;
	uint8_t x143 = 22U;
	int16_t x144 = -3;

	t35 = (((x141|x142)<x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -178102;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	static int32_t t36 = 993730;

	t36 = (((x145|x146)<x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 217557LLU;
	static int64_t x151 = 1LL;
	static int32_t x152 = INT32_MAX;
	volatile int32_t t37 = -45240;

	t37 = (((x149|x150)<x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	uint16_t x154 = 15905U;
	volatile uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 269U;
	int32_t t38 = 124;

	t38 = (((x153|x154)<x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -34349095LL;
	volatile int64_t x158 = 2291180LL;
	int8_t x159 = INT8_MIN;
	int8_t x160 = 0;
	int32_t t39 = -114114;

	t39 = (((x157|x158)<x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = 26;
	int32_t t40 = -1475;

	t40 = (((x161|x162)<x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = INT8_MAX;
	volatile int64_t x166 = INT64_MAX;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 0U;

	t41 = (((x165|x166)<x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 7U;
	static volatile int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	uint8_t x172 = 3U;
	int32_t t42 = -672885;

	t42 = (((x169|x170)<x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = 36LL;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;

	t43 = (((x173|x174)<x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 1529U;
	volatile int32_t x179 = 259146815;
	uint32_t x180 = 1409925U;
	volatile int32_t t44 = 2;

	t44 = (((x177|x178)<x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 1U;
	uint16_t x182 = 23486U;
	volatile int64_t x183 = INT64_MIN;

	t45 = (((x181|x182)<x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = 94U;
	int64_t x186 = 285061467664LL;
	int16_t x187 = INT16_MIN;
	volatile int8_t x188 = INT8_MAX;
	int32_t t46 = -461373;

	t46 = (((x185|x186)<x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = INT8_MAX;
	static int16_t x191 = INT16_MAX;
	int64_t x192 = -12997LL;
	int32_t t47 = -5378;

	t47 = (((x189|x190)<x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t48 = -63727;

	t48 = (((x193|x194)<x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 1;
	uint16_t x198 = 164U;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 16;

	t49 = (((x197|x198)<x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	uint8_t x202 = 0U;
	int64_t x203 = INT64_MAX;
	static uint64_t x204 = 82762985665807724LLU;
	volatile int32_t t50 = -712;

	t50 = (((x201|x202)<x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = 1;
	uint64_t x206 = 63LLU;
	static int32_t x207 = INT32_MIN;
	static volatile int32_t x208 = INT32_MIN;
	int32_t t51 = 167;

	t51 = (((x205|x206)<x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 116886028974986LLU;
	int8_t x210 = -2;
	uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 11284U;
	volatile int32_t t52 = 2;

	t52 = (((x209|x210)<x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 19134;
	uint8_t x214 = 3U;
	volatile int16_t x215 = INT16_MIN;
	int32_t t53 = -2004;

	t53 = (((x213|x214)<x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;

	t54 = (((x217|x218)<x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	volatile uint16_t x222 = 915U;
	static int8_t x224 = INT8_MIN;
	int32_t t55 = -888372032;

	t55 = (((x221|x222)<x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	static uint32_t x227 = 3438U;
	static int64_t x228 = -1LL;
	static int32_t t56 = 382481245;

	t56 = (((x225|x226)<x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = 1;
	uint32_t x231 = 899822706U;

	t57 = (((x229|x230)<x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	int16_t x234 = -1;
	int16_t x236 = -47;
	volatile int32_t t58 = 0;

	t58 = (((x233|x234)<x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 1561943U;
	int32_t x238 = INT32_MIN;
	volatile uint16_t x240 = 111U;

	t59 = (((x237|x238)<x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 45U;
	uint8_t x242 = 19U;
	int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MAX;
	static volatile int32_t t60 = -2149;

	t60 = (((x241|x242)<x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x246 = INT16_MIN;

	t61 = (((x245|x246)<x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int32_t x250 = -258519474;
	static volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = 4399954;

	t62 = (((x249|x250)<x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 352868983291LLU;
	int32_t x255 = INT32_MIN;
	static int32_t x256 = -2;
	int32_t t63 = 4678;

	t63 = (((x253|x254)<x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	uint16_t x259 = 0U;
	int32_t t64 = 6977687;

	t64 = (((x257|x258)<x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 10550U;
	int8_t x262 = INT8_MIN;
	int32_t x264 = -1;

	t65 = (((x261|x262)<x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MAX;
	int8_t x266 = -2;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = -1862838794LL;
	volatile int32_t t66 = 1324114;

	t66 = (((x265|x266)<x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -1LL;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 244773471296LLU;
	int32_t t67 = -35641;

	t67 = (((x269|x270)<x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int64_t x275 = -1LL;
	volatile int8_t x276 = INT8_MAX;

	t68 = (((x273|x274)<x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	static int32_t t69 = 11;

	t69 = (((x277|x278)<x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x283 = -1;
	static volatile int8_t x284 = -1;
	int32_t t70 = 33530623;

	t70 = (((x281|x282)<x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 249;
	int64_t x286 = 1LL;
	uint64_t x288 = 15LLU;
	volatile int32_t t71 = 1458632;

	t71 = (((x285|x286)<x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 62U;
	int16_t x290 = -1;
	uint16_t x292 = UINT16_MAX;
	static volatile int32_t t72 = -731492;

	t72 = (((x289|x290)<x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	int64_t x294 = 901892734LL;
	int32_t x295 = INT32_MAX;
	static uint32_t x296 = 24940U;
	int32_t t73 = -8766977;

	t73 = (((x293|x294)<x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	volatile int32_t x298 = INT32_MIN;
	uint32_t x300 = 2U;
	int32_t t74 = 1;

	t74 = (((x297|x298)<x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x303 = INT8_MIN;
	int16_t x304 = -1;

	t75 = (((x301|x302)<x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 15U;
	int64_t x308 = INT64_MIN;
	static int32_t t76 = 1;

	t76 = (((x305|x306)<x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 10U;
	int64_t x310 = -1LL;
	int32_t x312 = 7372;
	int32_t t77 = -409332;

	t77 = (((x309|x310)<x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	static int8_t x315 = INT8_MIN;

	t78 = (((x313|x314)<x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t t79 = 22;

	t79 = (((x317|x318)<x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static uint8_t x322 = 106U;
	int16_t x323 = -12869;
	volatile int64_t x324 = INT64_MIN;
	int32_t t80 = 81416;

	t80 = (((x321|x322)<x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 4U;
	int64_t x326 = 766609878551LL;

	t81 = (((x325|x326)<x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x329 = 9LLU;
	uint32_t x330 = 5U;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 3LLU;

	t82 = (((x329|x330)<x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 3032U;
	uint16_t x335 = UINT16_MAX;
	int32_t t83 = -7187864;

	t83 = (((x333|x334)<x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 52;
	int64_t x338 = INT64_MIN;
	static volatile int8_t x339 = INT8_MAX;
	static int32_t x340 = INT32_MAX;
	int32_t t84 = 410;

	t84 = (((x337|x338)<x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MAX;
	volatile int32_t x343 = INT32_MIN;
	int64_t x344 = -1LL;
	volatile int32_t t85 = -15;

	t85 = (((x341|x342)<x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MAX;
	uint64_t x348 = 1283506550371407LLU;
	volatile int32_t t86 = 1165120;

	t86 = (((x345|x346)<x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 11432U;
	static int8_t x352 = -1;
	int32_t t87 = -13404784;

	t87 = (((x349|x350)<x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	int8_t x354 = -1;
	int64_t x356 = INT64_MIN;
	int32_t t88 = 10;

	t88 = (((x353|x354)<x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	volatile int32_t t89 = 29976;

	t89 = (((x357|x358)<x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	static int64_t x364 = 888117428532170336LL;
	int32_t t90 = 3434787;

	t90 = (((x361|x362)<x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	static volatile uint32_t x366 = 3853U;
	int16_t x367 = -1;
	volatile int32_t x368 = INT32_MIN;
	static int32_t t91 = 556154364;

	t91 = (((x365|x366)<x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;

	t92 = (((x369|x370)<x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = INT16_MIN;
	volatile int16_t x376 = INT16_MIN;
	int32_t t93 = 101566883;

	t93 = (((x373|x374)<x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = UINT32_MAX;
	int32_t x379 = 209;

	t94 = (((x377|x378)<x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MIN;
	volatile uint8_t x383 = 5U;
	static volatile uint32_t x384 = 32289026U;
	int32_t t95 = 76367980;

	t95 = (((x381|x382)<x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 5U;
	static int32_t x387 = -14618;
	int64_t x388 = -1LL;
	static int32_t t96 = 211623266;

	t96 = (((x385|x386)<x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -2329;

	t97 = (((x389|x390)<x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int16_t x394 = -1;
	int16_t x395 = -7282;
	int8_t x396 = 51;
	volatile int32_t t98 = 158649;

	t98 = (((x393|x394)<x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = 239;
	int16_t x399 = 5061;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t99 = 2664;

	t99 = (((x397|x398)<x399)<=x400);

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

