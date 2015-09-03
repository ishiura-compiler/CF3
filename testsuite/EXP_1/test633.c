#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 1;
int8_t x7 = -1;
int64_t x8 = -1LL;
volatile int8_t x12 = INT8_MIN;
int32_t t2 = 62809664;
int16_t x17 = INT16_MAX;
int64_t x21 = 63998LL;
int16_t x22 = 2;
int8_t x24 = INT8_MIN;
int32_t t5 = -2086977;
int8_t x28 = -1;
volatile int32_t t10 = 49973350;
int16_t x45 = -510;
uint32_t x53 = UINT32_MAX;
volatile uint16_t x54 = 462U;
int8_t x57 = INT8_MIN;
volatile int32_t t16 = 656748058;
int8_t x70 = 44;
int16_t x86 = 442;
int16_t x87 = -53;
uint16_t x90 = 1787U;
volatile int32_t t22 = -1644471;
uint8_t x96 = 6U;
int8_t x97 = INT8_MIN;
int16_t x109 = INT16_MAX;
int32_t x111 = INT32_MIN;
static int32_t x119 = -1;
int32_t x120 = -1;
int32_t x122 = 548736;
int32_t t30 = -118020;
static int16_t x125 = INT16_MIN;
volatile int32_t t32 = 1;
volatile int32_t t33 = 15697185;
volatile int64_t x140 = INT64_MAX;
static uint64_t x141 = 255254559649LLU;
int64_t x145 = INT64_MAX;
int32_t t36 = 12;
int32_t x153 = INT32_MAX;
volatile uint32_t x155 = 404380082U;
static volatile int32_t t38 = -3157;
int8_t x162 = INT8_MAX;
volatile int32_t t39 = 356;
volatile int32_t x172 = 5298;
static volatile int32_t t41 = 1279;
volatile int16_t x176 = INT16_MAX;
int32_t t42 = -2;
int16_t x177 = INT16_MAX;
static uint32_t x178 = UINT32_MAX;
volatile int16_t x182 = 6;
int64_t x186 = 31176227352511LL;
int32_t t46 = 6465;
int16_t x194 = -1;
volatile int32_t t49 = 12436296;
int8_t x214 = INT8_MIN;
static int32_t t51 = 4449390;
volatile uint8_t x217 = UINT8_MAX;
volatile uint32_t x218 = 408902U;
int64_t x221 = -12248LL;
static int64_t x225 = 296804590519953LL;
int32_t x229 = 37804;
int64_t x230 = INT64_MIN;
static int16_t x232 = INT16_MIN;
int16_t x235 = 2;
int32_t t56 = 7215;
int8_t x239 = INT8_MIN;
int8_t x240 = INT8_MIN;
uint64_t x248 = 2312536006968LLU;
int32_t x251 = -1;
volatile int32_t t60 = -697088207;
volatile int32_t t61 = -772561179;
uint8_t x257 = UINT8_MAX;
uint64_t x261 = UINT64_MAX;
int32_t t64 = -13280;
uint8_t x293 = UINT8_MAX;
uint64_t x294 = 504600LLU;
int16_t x296 = -1;
volatile int32_t t71 = -11538;
int32_t x308 = -1;
static uint16_t x314 = 157U;
uint64_t x316 = 228142LLU;
static int16_t x323 = -404;
uint8_t x327 = UINT8_MAX;
int16_t x334 = INT16_MIN;
static volatile int32_t t80 = 18328;
int32_t x345 = -10;
volatile int16_t x346 = -1;
int32_t t84 = 7769;
int32_t x358 = -1;
static int64_t x360 = 7LL;
volatile int32_t t86 = -3;
volatile int32_t t87 = -239;
int32_t x365 = INT32_MIN;
volatile int32_t t88 = -4470638;
volatile int32_t t89 = 263639;
int32_t t90 = 1;
static volatile int8_t x378 = -8;
static int64_t x381 = -15382262948LL;
int16_t x385 = INT16_MIN;
uint64_t x386 = UINT64_MAX;
volatile int32_t t93 = 58247;
int32_t x392 = INT32_MIN;
static int32_t t94 = 3891357;
uint32_t x398 = 13355U;
int16_t x400 = INT16_MIN;
volatile int32_t t96 = -1647;
uint8_t x409 = 69U;


void f0(void) {
	uint16_t x1 = 1U;
	int16_t x2 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 2;

	t0 = (((x1/x2)<=x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint8_t x6 = 10U;
	int32_t t1 = 0;

	t1 = (((x5/x6)<=x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static int8_t x10 = -1;
	int16_t x11 = INT16_MAX;

	t2 = (((x9/x10)<=x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -484353525583988554LL;
	int8_t x14 = -1;
	static uint64_t x15 = UINT64_MAX;
	static volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 8955;

	t3 = (((x13/x14)<=x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int32_t x19 = -1;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 13;

	t4 = (((x17/x18)<=x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x23 = UINT16_MAX;

	t5 = (((x21/x22)<=x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile uint32_t x26 = 26528U;
	int32_t x27 = INT32_MIN;
	volatile int32_t t6 = 6827;

	t6 = (((x25/x26)<=x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	int32_t x31 = INT32_MAX;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -67979944;

	t7 = (((x29/x30)<=x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 3185762LLU;
	uint32_t x34 = UINT32_MAX;
	static uint8_t x35 = 35U;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = 23239350;

	t8 = (((x33/x34)<=x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 2;
	int64_t x38 = 5038291365011508LL;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 4014;

	t9 = (((x37/x38)<=x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 0;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;

	t10 = (((x41/x42)<=x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	int64_t x48 = -2LL;
	int32_t t11 = 430914;

	t11 = (((x45/x46)<=x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 2647259U;
	static int16_t x50 = INT16_MIN;
	uint64_t x51 = 6LLU;
	int16_t x52 = -1;
	int32_t t12 = -1878;

	t12 = (((x49/x50)<=x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x55 = 841LLU;
	static uint64_t x56 = 117LLU;
	static int32_t t13 = 451215452;

	t13 = (((x53/x54)<=x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int16_t x59 = -13150;
	static int64_t x60 = -1LL;
	static volatile int32_t t14 = -27;

	t14 = (((x57/x58)<=x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -1LL;
	volatile int32_t x62 = 524456596;
	volatile uint16_t x63 = 0U;
	static uint8_t x64 = 37U;
	int32_t t15 = -8060;

	t15 = (((x61/x62)<=x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = INT64_MIN;
	uint64_t x66 = 1808507191LLU;
	volatile int16_t x67 = -1;
	int64_t x68 = INT64_MIN;

	t16 = (((x65/x66)<=x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	uint64_t x71 = 1447227635678093LLU;
	int32_t x72 = -1438176;
	volatile int32_t t17 = 702075782;

	t17 = (((x69/x70)<=x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	uint32_t x74 = 254U;
	int16_t x75 = -1;
	volatile int64_t x76 = 5857010650932117LL;
	static volatile int32_t t18 = 255771;

	t18 = (((x73/x74)<=x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	static volatile int8_t x78 = -17;
	uint8_t x79 = 1U;
	static volatile uint32_t x80 = 95410U;
	int32_t t19 = 4918;

	t19 = (((x77/x78)<=x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -3473;
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = 1;
	static int8_t x84 = INT8_MIN;
	int32_t t20 = 98;

	t20 = (((x81/x82)<=x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	int8_t x88 = 10;
	int32_t t21 = -122705619;

	t21 = (((x85/x86)<=x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x91 = 13U;
	int16_t x92 = INT16_MAX;

	t22 = (((x89/x90)<=x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int16_t x94 = INT16_MIN;
	volatile int16_t x95 = INT16_MIN;
	static int32_t t23 = 51668664;

	t23 = (((x93/x94)<=x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	static uint8_t x99 = 110U;
	uint32_t x100 = 9625U;
	static int32_t t24 = 512358;

	t24 = (((x97/x98)<=x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -870950638219127702LL;
	uint64_t x102 = 1619949LLU;
	volatile uint64_t x103 = 5741582814401228395LLU;
	static int8_t x104 = -13;
	int32_t t25 = 1677;

	t25 = (((x101/x102)<=x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	static int32_t x107 = 159;
	int32_t x108 = -1;
	volatile int32_t t26 = -261752848;

	t26 = (((x105/x106)<=x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = INT32_MIN;
	uint8_t x112 = 15U;
	int32_t t27 = -126;

	t27 = (((x109/x110)<=x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 7397U;
	int16_t x114 = 31;
	uint8_t x115 = UINT8_MAX;
	volatile uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -248305;

	t28 = (((x113/x114)<=x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 14;
	uint16_t x118 = 2U;
	volatile int32_t t29 = -1;

	t29 = (((x117/x118)<=x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int8_t x123 = -1;
	uint16_t x124 = UINT16_MAX;

	t30 = (((x121/x122)<=x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	static volatile int32_t x127 = -1;
	static int64_t x128 = INT64_MIN;
	int32_t t31 = 165786;

	t31 = (((x125/x126)<=x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static uint16_t x130 = UINT16_MAX;
	uint64_t x131 = UINT64_MAX;
	static int32_t x132 = 13005295;

	t32 = (((x129/x130)<=x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -83937LL;
	int8_t x134 = 24;
	static int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;

	t33 = (((x133/x134)<=x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	int16_t x138 = -1;
	int16_t x139 = -1;
	int32_t t34 = 34681070;

	t34 = (((x137/x138)<=x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 20;
	int32_t x143 = INT32_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = 3;

	t35 = (((x141/x142)<=x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x146 = INT16_MAX;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = 25;

	t36 = (((x145/x146)<=x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = 740138LL;
	uint8_t x150 = 11U;
	int64_t x151 = 4230445LL;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = 3607;

	t37 = (((x149/x150)<=x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MAX;
	volatile uint16_t x156 = 826U;

	t38 = (((x153/x154)<=x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	static uint8_t x163 = 1U;
	int16_t x164 = INT16_MAX;

	t39 = (((x161/x162)<=x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 382218710LLU;
	int16_t x166 = INT16_MIN;
	volatile uint8_t x167 = 8U;
	int64_t x168 = -14574842LL;
	int32_t t40 = -491991364;

	t40 = (((x165/x166)<=x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x169 = 29U;
	uint16_t x170 = 24U;
	static int32_t x171 = INT32_MAX;

	t41 = (((x169/x170)<=x171)<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = 263196;
	volatile int64_t x174 = 116091055290045425LL;
	volatile int16_t x175 = INT16_MIN;

	t42 = (((x173/x174)<=x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x179 = -1;
	uint32_t x180 = 262390U;
	static int32_t t43 = 1;

	t43 = (((x177/x178)<=x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = INT32_MIN;
	uint16_t x183 = 869U;
	int16_t x184 = INT16_MIN;
	int32_t t44 = -26;

	t44 = (((x181/x182)<=x183)<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -1;
	uint8_t x187 = 14U;
	int64_t x188 = INT64_MAX;
	volatile int32_t t45 = -7369;

	t45 = (((x185/x186)<=x187)<x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;

	t46 = (((x189/x190)<=x191)<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = 7202LL;
	uint16_t x195 = UINT16_MAX;
	static volatile int32_t x196 = -3530214;
	static volatile int32_t t47 = 381;

	t47 = (((x193/x194)<=x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MIN;
	int16_t x199 = 7;
	int64_t x200 = -1LL;
	int32_t t48 = -7;

	t48 = (((x197/x198)<=x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 0U;
	uint64_t x202 = UINT64_MAX;
	volatile int32_t x203 = -1;
	uint32_t x204 = 95U;

	t49 = (((x201/x202)<=x203)<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = 16;
	static int16_t x210 = 70;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = 1355422025U;
	int32_t t50 = 9;

	t50 = (((x209/x210)<=x211)<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x213 = 4507U;
	int8_t x215 = INT8_MAX;
	uint32_t x216 = 1913015207U;

	t51 = (((x213/x214)<=x215)<x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MAX;
	int32_t t52 = 5;

	t52 = (((x217/x218)<=x219)<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x222 = 3329;
	volatile uint8_t x223 = 60U;
	volatile int64_t x224 = -7860475LL;
	static int32_t t53 = 16177812;

	t53 = (((x221/x222)<=x223)<x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x226 = INT16_MIN;
	volatile uint32_t x227 = 4225318U;
	uint16_t x228 = 2839U;
	int32_t t54 = -3328496;

	t54 = (((x225/x226)<=x227)<x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x231 = -1;
	volatile int32_t t55 = 3;

	t55 = (((x229/x230)<=x231)<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x233 = INT64_MIN;
	uint64_t x234 = 2029921865874768LLU;
	static uint64_t x236 = 982465806242230LLU;

	t56 = (((x233/x234)<=x235)<x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 16;
	static uint16_t x238 = 6U;
	volatile int32_t t57 = -3665379;

	t57 = (((x237/x238)<=x239)<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = 1453350368027028LL;
	int64_t x244 = 508524677716LL;
	volatile int32_t t58 = 185;

	t58 = (((x241/x242)<=x243)<x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 851063152319788561LLU;
	static volatile int16_t x246 = INT16_MIN;
	static volatile uint32_t x247 = 1467186310U;
	static int32_t t59 = -1;

	t59 = (((x245/x246)<=x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	uint32_t x250 = 234026130U;
	uint32_t x252 = 78415972U;

	t60 = (((x249/x250)<=x251)<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = 87168;
	uint32_t x254 = 17544U;
	uint32_t x255 = 31677U;
	int16_t x256 = -28;

	t61 = (((x253/x254)<=x255)<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	static int64_t x260 = INT64_MIN;
	volatile int32_t t62 = 28;

	t62 = (((x257/x258)<=x259)<x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MAX;
	uint16_t x264 = UINT16_MAX;
	static int32_t t63 = 162;

	t63 = (((x261/x262)<=x263)<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = 3U;
	static uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int8_t x272 = 0;

	t64 = (((x269/x270)<=x271)<x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MIN;
	int32_t x275 = -14;
	static uint8_t x276 = UINT8_MAX;
	volatile int32_t t65 = 1480;

	t65 = (((x273/x274)<=x275)<x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	uint64_t x279 = 13580298274163LLU;
	volatile int8_t x280 = -1;
	volatile int32_t t66 = -1162031;

	t66 = (((x277/x278)<=x279)<x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t67 = -894621555;

	t67 = (((x281/x282)<=x283)<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = 1;
	uint8_t x286 = UINT8_MAX;
	uint64_t x287 = 943703074147776LLU;
	static int8_t x288 = -1;
	volatile int32_t t68 = 15538;

	t68 = (((x285/x286)<=x287)<x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 4414800076675452260LLU;
	int16_t x290 = INT16_MIN;
	int16_t x291 = -248;
	uint8_t x292 = 37U;
	int32_t t69 = 0;

	t69 = (((x289/x290)<=x291)<x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x295 = INT32_MIN;
	volatile int32_t t70 = 16206;

	t70 = (((x293/x294)<=x295)<x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 126296865U;
	uint8_t x298 = UINT8_MAX;
	int64_t x299 = INT64_MIN;
	static int8_t x300 = -1;

	t71 = (((x297/x298)<=x299)<x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 929U;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = INT64_MAX;
	volatile int32_t t72 = -482;

	t72 = (((x301/x302)<=x303)<x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = 606;
	volatile int8_t x307 = INT8_MIN;
	int32_t t73 = -27819;

	t73 = (((x305/x306)<=x307)<x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 58U;
	int32_t x310 = -7096;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = 447U;
	static int32_t t74 = -101419971;

	t74 = (((x309/x310)<=x311)<x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x315 = UINT16_MAX;
	int32_t t75 = 2795130;

	t75 = (((x313/x314)<=x315)<x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x317 = -1;
	int16_t x318 = INT16_MAX;
	volatile int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	int32_t t76 = -30944;

	t76 = (((x317/x318)<=x319)<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = INT32_MAX;
	int16_t x322 = INT16_MAX;
	uint64_t x324 = 752264080LLU;
	volatile int32_t t77 = -256447;

	t77 = (((x321/x322)<=x323)<x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x325 = UINT32_MAX;
	volatile int8_t x326 = INT8_MIN;
	int64_t x328 = -1LL;
	volatile int32_t t78 = -12928;

	t78 = (((x325/x326)<=x327)<x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	static int8_t x331 = 1;
	int8_t x332 = -1;
	volatile int32_t t79 = -1;

	t79 = (((x329/x330)<=x331)<x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x333 = 22U;
	int32_t x335 = INT32_MAX;
	uint64_t x336 = 4945724804962076LLU;

	t80 = (((x333/x334)<=x335)<x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = 23;
	static int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t81 = 1901;

	t81 = (((x337/x338)<=x339)<x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = 13U;
	int8_t x342 = 1;
	uint8_t x343 = 3U;
	int32_t x344 = INT32_MAX;
	volatile int32_t t82 = 2938587;

	t82 = (((x341/x342)<=x343)<x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x347 = 50LLU;
	int32_t x348 = INT32_MIN;
	static int32_t t83 = 89611;

	t83 = (((x345/x346)<=x347)<x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 203871U;
	uint32_t x350 = 2U;
	uint16_t x351 = UINT16_MAX;
	uint16_t x352 = UINT16_MAX;

	t84 = (((x349/x350)<=x351)<x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t85 = -32499;

	t85 = (((x353/x354)<=x355)<x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 0;
	static uint64_t x359 = 92887982LLU;

	t86 = (((x357/x358)<=x359)<x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MAX;
	static volatile int8_t x363 = INT8_MIN;
	volatile uint16_t x364 = UINT16_MAX;

	t87 = (((x361/x362)<=x363)<x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = -63;
	uint32_t x367 = 38282U;
	int64_t x368 = -1LL;

	t88 = (((x365/x366)<=x367)<x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 1053806228517774LL;
	int32_t x370 = -1;
	int32_t x371 = -54;
	uint64_t x372 = 2115308953104391LLU;

	t89 = (((x369/x370)<=x371)<x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = -249562329;
	static uint16_t x374 = 58U;
	static int16_t x375 = INT16_MIN;
	static volatile int8_t x376 = INT8_MIN;

	t90 = (((x373/x374)<=x375)<x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t91 = 47147;

	t91 = (((x377/x378)<=x379)<x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x382 = 376U;
	int64_t x383 = -22089635576970684LL;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t92 = 25;

	t92 = (((x381/x382)<=x383)<x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x387 = 10U;
	int64_t x388 = INT64_MIN;

	t93 = (((x385/x386)<=x387)<x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = -80;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MAX;

	t94 = (((x389/x390)<=x391)<x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MAX;
	uint64_t x395 = UINT64_MAX;
	uint16_t x396 = 5U;
	static int32_t t95 = -873279544;

	t95 = (((x393/x394)<=x395)<x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = 4;
	uint64_t x399 = 0LLU;

	t96 = (((x397/x398)<=x399)<x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = -24;
	int8_t x402 = INT8_MAX;
	static int32_t x403 = 16;
	int16_t x404 = -222;
	int32_t t97 = 17296294;

	t97 = (((x401/x402)<=x403)<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = -1;
	uint32_t x406 = 29531533U;
	volatile uint8_t x407 = 0U;
	int64_t x408 = INT64_MAX;
	int32_t t98 = 25594;

	t98 = (((x405/x406)<=x407)<x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x410 = 227;
	uint32_t x411 = UINT32_MAX;
	static uint8_t x412 = 1U;
	volatile int32_t t99 = 18015;

	t99 = (((x409/x410)<=x411)<x412);

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

