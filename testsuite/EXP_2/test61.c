#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int32_t x16 = -1;
static int32_t x25 = INT32_MIN;
int16_t x26 = -299;
static volatile int32_t t6 = -1;
volatile int32_t t7 = -2840674;
volatile uint32_t x35 = 28U;
int32_t t9 = -1;
static volatile int32_t t10 = 229;
volatile int32_t x46 = 6;
uint8_t x49 = 6U;
int32_t x55 = INT32_MAX;
int8_t x57 = 1;
int32_t x59 = 2;
int16_t x60 = 3;
static volatile int32_t t14 = -4027126;
int16_t x63 = 1;
uint16_t x67 = 42U;
volatile int32_t t16 = 1469;
int32_t x73 = INT32_MIN;
int64_t x81 = INT64_MIN;
static int64_t x83 = -1LL;
static int32_t t20 = 1;
static int32_t x85 = INT32_MAX;
volatile int32_t t21 = 39;
static int32_t x90 = INT32_MIN;
uint32_t x95 = 214238688U;
static volatile int64_t x98 = 3786415146LL;
static volatile int16_t x100 = INT16_MIN;
static uint8_t x115 = 0U;
int32_t t28 = 567;
int8_t x122 = 1;
static int32_t t29 = -111630;
static volatile int32_t x133 = INT32_MIN;
int8_t x136 = 0;
int16_t x138 = -367;
uint32_t x148 = 4382880U;
volatile int32_t t33 = 909;
uint64_t x152 = 0LLU;
volatile int32_t t34 = -5739231;
int32_t t35 = 1521768;
int8_t x157 = INT8_MIN;
int32_t t36 = 1;
volatile int8_t x162 = 20;
uint64_t x164 = UINT64_MAX;
volatile int32_t t38 = 158;
int8_t x180 = INT8_MIN;
int32_t x182 = INT32_MIN;
int8_t x184 = INT8_MIN;
int32_t t40 = -121;
int16_t x191 = INT16_MAX;
int16_t x202 = 0;
volatile int32_t t44 = 5;
int16_t x214 = INT16_MAX;
uint8_t x215 = 5U;
static volatile int64_t x220 = -1LL;
int64_t x222 = -1LL;
int32_t x225 = INT32_MIN;
int32_t t52 = -257;
volatile int8_t x241 = INT8_MIN;
static int8_t x251 = 40;
volatile int64_t x257 = INT64_MIN;
static int16_t x260 = -73;
static volatile int32_t t57 = 3718513;
int16_t x262 = INT16_MIN;
int16_t x270 = 1980;
static volatile int16_t x272 = INT16_MAX;
int8_t x276 = INT8_MIN;
static int32_t t61 = 1;
uint32_t x280 = 0U;
int8_t x281 = -42;
volatile int32_t t63 = -39029913;
int16_t x298 = INT16_MAX;
static uint8_t x302 = UINT8_MAX;
volatile int8_t x303 = INT8_MIN;
static int32_t x311 = -1054982876;
uint32_t x317 = UINT32_MAX;
uint16_t x319 = 6816U;
static int16_t x320 = INT16_MAX;
int64_t x325 = -1009405LL;
int8_t x333 = 11;
static uint8_t x334 = UINT8_MAX;
uint32_t x337 = 607800894U;
uint64_t x341 = 597LLU;
int32_t x346 = INT32_MIN;
static uint32_t x347 = UINT32_MAX;
int32_t t77 = -1069448628;
int32_t x354 = -1584;
int64_t x368 = -1LL;
int32_t t80 = -23;
int64_t x373 = INT64_MIN;
int16_t x374 = 6537;
uint8_t x376 = 7U;
int32_t x378 = -294;
volatile int32_t x379 = INT32_MAX;
volatile int16_t x382 = INT16_MAX;
volatile int64_t x393 = INT64_MAX;
int32_t x398 = 0;
volatile int32_t t87 = -1;
static int16_t x406 = -1;
int32_t t89 = 321445;
uint16_t x409 = UINT16_MAX;
static uint16_t x414 = 857U;
int32_t x416 = INT32_MIN;
int8_t x422 = INT8_MIN;
volatile uint16_t x424 = UINT16_MAX;
int16_t x427 = 11428;
volatile int8_t x454 = -7;
static int8_t x458 = INT8_MAX;
uint16_t x469 = 7787U;
static uint16_t x470 = UINT16_MAX;
uint32_t x471 = 1U;


void f0(void) {
	int16_t x1 = 10;
	volatile int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = -71298;

	t0 = ((x1%(x2+x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x6 = -5;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -442517144;

	t1 = ((x5%(x6+x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int8_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	static int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = 13;

	t2 = ((x9%(x10+x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -351274934002LL;
	volatile int16_t x14 = INT16_MAX;
	int64_t x15 = 1532044011088979LL;
	int32_t t3 = 0;

	t3 = ((x13%(x14+x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = 1286U;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 12313883;

	t4 = ((x17%(x18+x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 3U;
	int32_t t5 = -229;

	t5 = ((x21%(x22+x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x27 = 512U;
	uint64_t x28 = 1373782753494586LLU;

	t6 = ((x25%(x26+x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 74405U;
	uint64_t x30 = 4LLU;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 20U;

	t7 = ((x29%(x30+x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 19LLU;
	static int16_t x34 = INT16_MAX;
	int8_t x36 = 0;
	volatile int32_t t8 = -874375897;

	t8 = ((x33%(x34+x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 850U;
	int32_t x38 = 122549908;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -14892;

	t9 = ((x37%(x38+x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int64_t x42 = -399166332LL;
	static volatile int64_t x43 = -1LL;
	static uint64_t x44 = UINT64_MAX;

	t10 = ((x41%(x42+x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	int64_t x47 = -1LL;
	uint64_t x48 = 871305113851740LLU;
	volatile int32_t t11 = 0;

	t11 = ((x45%(x46+x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	static int16_t x52 = -1;
	volatile int32_t t12 = -4827162;

	t12 = ((x49%(x50+x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = -1LL;
	int16_t x56 = -30;
	volatile int32_t t13 = 1;

	t13 = ((x53%(x54+x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = UINT16_MAX;

	t14 = ((x57%(x58+x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x62 = -11288;
	int8_t x64 = -8;
	int32_t t15 = -21;

	t15 = ((x61%(x62+x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int64_t x66 = 2749664505LL;
	static int8_t x68 = INT8_MIN;

	t16 = ((x65%(x66+x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = -32524204;
	static int64_t x71 = -1LL;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = 11152357;

	t17 = ((x69%(x70+x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x74 = 18;
	static uint32_t x75 = 113125470U;
	volatile int64_t x76 = -1LL;
	static volatile int32_t t18 = -1;

	t18 = ((x73%(x74+x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 289;
	static int32_t x78 = INT32_MIN;
	uint32_t x79 = 60064568U;
	volatile int32_t x80 = -1;
	volatile int32_t t19 = 142099896;

	t19 = ((x77%(x78+x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = INT8_MIN;
	int64_t x84 = INT64_MAX;

	t20 = ((x81%(x82+x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 1U;
	static uint64_t x87 = 112305009438426863LLU;
	uint8_t x88 = UINT8_MAX;

	t21 = ((x85%(x86+x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 25U;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = -325665761;
	volatile int32_t t22 = -5;

	t22 = ((x89%(x90+x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static volatile int64_t x94 = -1LL;
	int32_t x96 = 63;
	int32_t t23 = 816556;

	t23 = ((x93%(x94+x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	static int32_t x99 = INT32_MAX;
	static int32_t t24 = 453;

	t24 = ((x97%(x98+x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 0U;
	volatile uint16_t x102 = 481U;
	int64_t x103 = -1LL;
	volatile int64_t x104 = INT64_MIN;
	static volatile int32_t t25 = 69;

	t25 = ((x101%(x102+x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -13281838946534LL;
	int64_t x106 = 412LL;
	static int32_t x107 = INT32_MAX;
	static uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = 72223;

	t26 = ((x105%(x106+x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile int32_t x110 = 8703;
	int64_t x111 = -1LL;
	int16_t x112 = 189;
	int32_t t27 = -1454495;

	t27 = ((x109%(x110+x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -242;
	int8_t x116 = INT8_MAX;

	t28 = ((x113%(x114+x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	static uint64_t x123 = 1593LLU;
	int32_t x124 = -1;

	t29 = ((x121%(x122+x123))<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x134 = 1506U;
	static volatile uint64_t x135 = UINT64_MAX;
	volatile int32_t t30 = 221901560;

	t30 = ((x133%(x134+x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 17U;
	uint64_t x139 = 410560630667582003LLU;
	static volatile int32_t x140 = INT32_MIN;
	int32_t t31 = -1;

	t31 = ((x137%(x138+x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = 1;
	int64_t x142 = -9293446965938560LL;
	static volatile int64_t x143 = -1LL;
	volatile int8_t x144 = INT8_MIN;
	int32_t t32 = -37;

	t32 = ((x141%(x142+x143))<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 59U;
	static int16_t x146 = INT16_MIN;
	static int16_t x147 = INT16_MIN;

	t33 = ((x145%(x146+x147))<x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	static int64_t x150 = INT64_MAX;
	volatile int64_t x151 = -192138LL;

	t34 = ((x149%(x150+x151))<x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MAX;
	volatile uint32_t x155 = 494294861U;
	uint64_t x156 = UINT64_MAX;

	t35 = ((x153%(x154+x155))<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x158 = 2U;
	int8_t x159 = 1;
	uint16_t x160 = 1U;

	t36 = ((x157%(x158+x159))<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -1;
	int16_t x163 = 0;
	volatile int32_t t37 = -6301;

	t37 = ((x161%(x162+x163))<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x165 = INT16_MAX;
	static int8_t x166 = INT8_MIN;
	uint32_t x167 = 1560652944U;
	static int16_t x168 = 0;

	t38 = ((x165%(x166+x167))<x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x177 = 12U;
	static volatile uint8_t x178 = 8U;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t t39 = 0;

	t39 = ((x177%(x178+x179))<x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = INT16_MIN;
	static uint16_t x183 = UINT16_MAX;

	t40 = ((x181%(x182+x183))<x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = -1;
	int32_t x186 = -652;
	uint64_t x187 = 463953109LLU;
	int16_t x188 = 9;
	static volatile int32_t t41 = 3560;

	t41 = ((x185%(x186+x187))<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int32_t x190 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t42 = -168315757;

	t42 = ((x189%(x190+x191))<x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 738713U;
	volatile uint64_t x198 = 1604557696822984736LLU;
	int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MAX;
	static int32_t t43 = 9934;

	t43 = ((x197%(x198+x199))<x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x203 = 1U;
	uint16_t x204 = UINT16_MAX;

	t44 = ((x201%(x202+x203))<x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = -1;
	static int64_t x206 = 89627846449072LL;
	volatile uint64_t x207 = 13147293805830299LLU;
	uint64_t x208 = 7513LLU;
	volatile int32_t t45 = -1;

	t45 = ((x205%(x206+x207))<x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 10872575U;
	int16_t x210 = -561;
	int16_t x211 = 6687;
	int16_t x212 = -65;
	int32_t t46 = -23543;

	t46 = ((x209%(x210+x211))<x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MAX;
	static int16_t x216 = -3;
	volatile int32_t t47 = -112019;

	t47 = ((x213%(x214+x215))<x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = 332153;
	uint8_t x219 = UINT8_MAX;
	int32_t t48 = 4567662;

	t48 = ((x217%(x218+x219))<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x221 = -6601;
	static volatile uint64_t x223 = UINT64_MAX;
	int64_t x224 = -1LL;
	int32_t t49 = 89509972;

	t49 = ((x221%(x222+x223))<x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x226 = -1LL;
	uint16_t x227 = 410U;
	int32_t x228 = -2845;
	int32_t t50 = 1952;

	t50 = ((x225%(x226+x227))<x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = -4LL;
	uint32_t x231 = UINT32_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	int32_t t51 = 251840449;

	t51 = ((x229%(x230+x231))<x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MAX;
	static uint32_t x239 = 131U;
	volatile int64_t x240 = 1402975111121174582LL;

	t52 = ((x237%(x238+x239))<x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MIN;
	int16_t x244 = -23;
	int32_t t53 = -48;

	t53 = ((x241%(x242+x243))<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -6LL;
	static volatile uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MAX;
	volatile int32_t t54 = 1040;

	t54 = ((x245%(x246+x247))<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = UINT8_MAX;
	int32_t x252 = 72820185;
	int32_t t55 = -6708139;

	t55 = ((x249%(x250+x251))<x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MAX;
	static volatile uint8_t x254 = UINT8_MAX;
	int16_t x255 = INT16_MIN;
	static volatile int64_t x256 = INT64_MIN;
	static volatile int32_t t56 = 15;

	t56 = ((x253%(x254+x255))<x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x258 = UINT64_MAX;
	volatile int8_t x259 = INT8_MIN;

	t57 = ((x257%(x258+x259))<x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = INT8_MIN;
	int8_t x263 = 20;
	static int16_t x264 = -1;
	static volatile int32_t t58 = 955;

	t58 = ((x261%(x262+x263))<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MAX;
	int32_t x267 = -1;
	volatile int8_t x268 = -1;
	int32_t t59 = -1;

	t59 = ((x265%(x266+x267))<x268);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x269 = UINT16_MAX;
	uint64_t x271 = 43167392041046LLU;
	int32_t t60 = -1895;

	t60 = ((x269%(x270+x271))<x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = INT16_MIN;
	static uint8_t x274 = 5U;
	static uint16_t x275 = 570U;

	t61 = ((x273%(x274+x275))<x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MIN;
	static int32_t t62 = -2038304;

	t62 = ((x277%(x278+x279))<x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x282 = 515045523LLU;
	int64_t x283 = -1LL;
	uint16_t x284 = 99U;

	t63 = ((x281%(x282+x283))<x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = INT32_MIN;
	static volatile int16_t x294 = 0;
	int8_t x295 = 1;
	volatile int32_t x296 = 638;
	volatile int32_t t64 = -420267844;

	t64 = ((x293%(x294+x295))<x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x299 = INT32_MIN;
	uint32_t x300 = UINT32_MAX;
	int32_t t65 = -3;

	t65 = ((x297%(x298+x299))<x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = -782;
	int32_t x304 = -54494247;
	static volatile int32_t t66 = -259;

	t66 = ((x301%(x302+x303))<x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x305 = 1012U;
	static int8_t x306 = 1;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = 10731121514334978LLU;
	volatile int32_t t67 = 1799;

	t67 = ((x305%(x306+x307))<x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x309 = INT8_MIN;
	static volatile int32_t x310 = -1;
	uint32_t x312 = 17011U;
	static volatile int32_t t68 = 25505;

	t68 = ((x309%(x310+x311))<x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = -6;
	static uint8_t x314 = 112U;
	static volatile int64_t x315 = INT64_MIN;
	static int8_t x316 = INT8_MIN;
	int32_t t69 = -6486246;

	t69 = ((x313%(x314+x315))<x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x318 = -1;
	volatile int32_t t70 = -7;

	t70 = ((x317%(x318+x319))<x320);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x326 = 49U;
	uint8_t x327 = 120U;
	volatile int8_t x328 = INT8_MIN;
	int32_t t71 = 1;

	t71 = ((x325%(x326+x327))<x328);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = UINT16_MAX;
	volatile uint32_t x330 = 3724U;
	volatile int16_t x331 = -1;
	int8_t x332 = -1;
	volatile int32_t t72 = 868538;

	t72 = ((x329%(x330+x331))<x332);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x335 = INT8_MAX;
	int64_t x336 = -1LL;
	int32_t t73 = 16502876;

	t73 = ((x333%(x334+x335))<x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x338 = 0U;
	volatile uint8_t x339 = 2U;
	uint16_t x340 = 0U;
	volatile int32_t t74 = 241;

	t74 = ((x337%(x338+x339))<x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x342 = 183;
	volatile uint64_t x343 = UINT64_MAX;
	int64_t x344 = -138199486943103LL;
	volatile int32_t t75 = 3158020;

	t75 = ((x341%(x342+x343))<x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	static int32_t t76 = 15215814;

	t76 = ((x345%(x346+x347))<x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x349 = UINT16_MAX;
	static volatile uint64_t x350 = 7793427495966886LLU;
	static volatile int16_t x351 = 238;
	volatile int64_t x352 = INT64_MAX;

	t77 = ((x349%(x350+x351))<x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x353 = INT8_MIN;
	static int32_t x355 = INT32_MAX;
	int8_t x356 = -21;
	volatile int32_t t78 = 0;

	t78 = ((x353%(x354+x355))<x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t79 = 888;

	t79 = ((x357%(x358+x359))<x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = -1;
	uint64_t x367 = 750LLU;

	t80 = ((x365%(x366+x367))<x368);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x375 = 58U;
	int32_t t81 = -1;

	t81 = ((x373%(x374+x375))<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x377 = 1U;
	int64_t x380 = -1LL;
	static int32_t t82 = -102255;

	t82 = ((x377%(x378+x379))<x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = 182;
	int32_t x383 = INT32_MIN;
	volatile int16_t x384 = 150;
	static int32_t t83 = 1;

	t83 = ((x381%(x382+x383))<x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MIN;
	int32_t x386 = 986038;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MIN;
	static int32_t t84 = 2164;

	t84 = ((x385%(x386+x387))<x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MIN;
	int32_t t85 = -29554;

	t85 = ((x389%(x390+x391))<x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x394 = INT64_MIN;
	static int32_t x395 = 566;
	uint8_t x396 = 3U;
	int32_t t86 = 4608191;

	t86 = ((x393%(x394+x395))<x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x397 = -1;
	int64_t x399 = -2488811469255454949LL;
	int16_t x400 = INT16_MIN;

	t87 = ((x397%(x398+x399))<x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x402 = 4606723053020092332LL;
	static uint64_t x403 = 857282651LLU;
	uint32_t x404 = 30U;
	volatile int32_t t88 = -773;

	t88 = ((x401%(x402+x403))<x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = -1;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;

	t89 = ((x405%(x406+x407))<x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x410 = INT32_MIN;
	uint32_t x411 = 130U;
	volatile int32_t x412 = INT32_MIN;
	int32_t t90 = 14767;

	t90 = ((x409%(x410+x411))<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x413 = INT32_MIN;
	uint16_t x415 = 27968U;
	volatile int32_t t91 = -275;

	t91 = ((x413%(x414+x415))<x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x421 = UINT32_MAX;
	int16_t x423 = 30;
	int32_t t92 = -41;

	t92 = ((x421%(x422+x423))<x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x425 = 45U;
	int8_t x426 = INT8_MAX;
	int32_t x428 = -126;
	int32_t t93 = -3;

	t93 = ((x425%(x426+x427))<x428);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x441 = 0;
	volatile int32_t x442 = INT32_MIN;
	int32_t x443 = INT32_MAX;
	uint64_t x444 = 68296050194LLU;
	int32_t t94 = -5;

	t94 = ((x441%(x442+x443))<x444);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = 3U;
	int16_t x450 = -1;
	uint8_t x451 = 103U;
	volatile uint8_t x452 = UINT8_MAX;
	static volatile int32_t t95 = 12;

	t95 = ((x449%(x450+x451))<x452);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = UINT8_MAX;
	int8_t x455 = INT8_MAX;
	uint64_t x456 = 16759LLU;
	volatile int32_t t96 = 109866;

	t96 = ((x453%(x454+x455))<x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x457 = 109U;
	int32_t x459 = INT32_MIN;
	uint64_t x460 = 1006548429LLU;
	volatile int32_t t97 = 2209;

	t97 = ((x457%(x458+x459))<x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x465 = 0U;
	int64_t x466 = 30048346LL;
	static int16_t x467 = -1;
	int16_t x468 = -1;
	volatile int32_t t98 = 21;

	t98 = ((x465%(x466+x467))<x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x472 = INT64_MIN;
	int32_t t99 = 497;

	t99 = ((x469%(x470+x471))<x472);

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

