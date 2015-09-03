#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
static volatile uint32_t x3 = UINT32_MAX;
volatile int32_t t1 = 101;
volatile int16_t x9 = INT16_MIN;
volatile int32_t t4 = 190931;
volatile int8_t x31 = INT8_MAX;
static int32_t t7 = 1919;
volatile uint32_t x42 = UINT32_MAX;
int8_t x43 = -3;
volatile int32_t t10 = 49661;
volatile int16_t x48 = INT16_MAX;
static int8_t x51 = -1;
int8_t x53 = 4;
int16_t x56 = INT16_MAX;
int16_t x64 = -1;
static int32_t t19 = -1000467835;
int32_t x82 = INT32_MIN;
int32_t t20 = 1;
static uint32_t x86 = 722U;
uint8_t x94 = 2U;
uint64_t x95 = 7366LLU;
volatile int32_t t23 = 1164609;
int16_t x98 = 59;
int32_t x99 = 774821499;
int32_t t27 = -2;
static volatile uint16_t x116 = 1U;
static volatile int8_t x119 = INT8_MIN;
static int32_t x149 = -1;
static uint8_t x152 = 97U;
int16_t x159 = -6;
int64_t x164 = 826851LL;
uint8_t x165 = UINT8_MAX;
int16_t x168 = 357;
volatile int32_t t41 = 13287;
int64_t x176 = INT64_MIN;
static int16_t x180 = INT16_MAX;
uint64_t x183 = 119601590053LLU;
int64_t x187 = INT64_MIN;
int16_t x188 = INT16_MIN;
int32_t x190 = INT32_MIN;
int32_t t47 = 6343207;
volatile int16_t x196 = INT16_MAX;
volatile uint32_t x197 = UINT32_MAX;
uint16_t x199 = 12162U;
int16_t x201 = -1;
int8_t x203 = -1;
volatile int16_t x204 = INT16_MIN;
volatile int32_t t50 = 163161940;
uint32_t x206 = 1090U;
int64_t x209 = 123578LL;
volatile int8_t x213 = 0;
uint16_t x214 = 43U;
volatile uint64_t x216 = UINT64_MAX;
volatile int32_t t56 = 1;
int8_t x230 = INT8_MAX;
int64_t x232 = INT64_MIN;
int32_t t57 = 6741950;
int8_t x233 = INT8_MIN;
uint8_t x236 = UINT8_MAX;
volatile uint8_t x240 = 25U;
volatile int32_t t61 = 720246528;
int64_t x249 = -4674920613LL;
int32_t t62 = 161;
uint16_t x255 = 1384U;
int64_t x258 = -13LL;
int32_t x263 = -1;
int16_t x264 = -1;
uint32_t x265 = 3587U;
uint64_t x267 = UINT64_MAX;
int16_t x272 = -1;
int16_t x275 = 0;
uint64_t x283 = 57LLU;
static volatile int32_t t70 = -32787446;
int8_t x286 = 1;
static uint16_t x287 = UINT16_MAX;
uint16_t x303 = 16314U;
int32_t x307 = -3278;
volatile uint64_t x315 = 1505547098356530LLU;
int8_t x318 = INT8_MIN;
int8_t x323 = -1;
uint8_t x325 = 52U;
uint16_t x326 = UINT16_MAX;
int32_t x327 = INT32_MIN;
int16_t x330 = INT16_MIN;
int16_t x333 = INT16_MIN;
uint16_t x334 = 0U;
static int32_t t87 = 7309853;
uint64_t x355 = 54564LLU;
int32_t t88 = -4990132;
int8_t x362 = INT8_MIN;
int32_t x367 = INT32_MIN;
int32_t t91 = 782;
volatile int16_t x369 = -1;
uint8_t x378 = 15U;
uint16_t x383 = 4U;
int8_t x392 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 1;

	t0 = ((x1*(x2<=x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int16_t x6 = 344;
	int8_t x7 = -1;
	volatile int8_t x8 = 0;

	t1 = ((x5*(x6<=x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 52;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = -323912267;

	t2 = ((x9*(x10<=x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 2;
	int16_t x14 = 2;
	int32_t x15 = INT32_MAX;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 137;

	t3 = ((x13*(x14<=x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = 0;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17*(x18<=x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -253;
	int32_t x22 = -1;
	int8_t x23 = INT8_MAX;
	static int64_t x24 = 298951562471LL;
	int32_t t5 = -1490;

	t5 = ((x21*(x22<=x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 27405LLU;
	volatile uint16_t x26 = UINT16_MAX;
	uint16_t x27 = UINT16_MAX;
	uint8_t x28 = 0U;
	volatile int32_t t6 = 95639;

	t6 = ((x25*(x26<=x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MAX;
	int32_t x32 = INT32_MIN;

	t7 = ((x29*(x30<=x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 96U;
	uint8_t x34 = 15U;
	int8_t x35 = -3;
	int16_t x36 = -1;
	volatile int32_t t8 = 5469761;

	t8 = ((x33*(x34<=x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 90985414446LLU;
	uint32_t x40 = 563U;
	volatile int32_t t9 = 0;

	t9 = ((x37*(x38<=x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 935400539093814058LL;
	uint8_t x44 = 1U;

	t10 = ((x41*(x42<=x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	int32_t t11 = -27326;

	t11 = ((x45*(x46<=x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 48LL;
	int64_t x50 = 1LL;
	static uint32_t x52 = 1335171423U;
	int32_t t12 = -196;

	t12 = ((x49*(x50<=x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 6U;
	uint32_t x55 = 44154U;
	int32_t t13 = -46;

	t13 = ((x53*(x54<=x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static uint32_t x58 = 924956577U;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = 4095520LLU;
	volatile int32_t t14 = -104846500;

	t14 = ((x57*(x58<=x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static uint32_t x62 = 32U;
	volatile int16_t x63 = INT16_MIN;
	volatile int32_t t15 = 233920707;

	t15 = ((x61*(x62<=x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint64_t x66 = 2041943013LLU;
	uint16_t x67 = 3508U;
	static int32_t x68 = 12212;
	static int32_t t16 = -1;

	t16 = ((x65*(x66<=x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	uint16_t x70 = 95U;
	uint16_t x71 = 2U;
	uint16_t x72 = 240U;
	int32_t t17 = -132463057;

	t17 = ((x69*(x70<=x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 209;
	int8_t x74 = -24;
	int32_t x75 = 23325;
	volatile int16_t x76 = INT16_MIN;
	int32_t t18 = 41;

	t18 = ((x73*(x74<=x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	volatile int16_t x78 = INT16_MIN;
	static int8_t x79 = 1;
	volatile int32_t x80 = INT32_MIN;

	t19 = ((x77*(x78<=x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile uint16_t x83 = 5U;
	int32_t x84 = -1;

	t20 = ((x81*(x82<=x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 76U;
	static int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = -91994727;

	t21 = ((x85*(x86<=x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	static volatile int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MAX;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -152799;

	t22 = ((x89*(x90<=x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -14762;
	uint16_t x96 = 11204U;

	t23 = ((x93*(x94<=x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int16_t x100 = -1;
	static volatile int32_t t24 = -343;

	t24 = ((x97*(x98<=x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	static int16_t x103 = INT16_MIN;
	int64_t x104 = 21559917LL;
	int32_t t25 = 195402;

	t25 = ((x101*(x102<=x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -7838;
	static int64_t x106 = INT64_MAX;
	volatile uint8_t x107 = 0U;
	int8_t x108 = 1;
	static volatile int32_t t26 = 1697;

	t26 = ((x105*(x106<=x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 11077846613992LLU;
	uint64_t x110 = UINT64_MAX;
	static volatile uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;

	t27 = ((x109*(x110<=x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 985LLU;
	int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	volatile int32_t t28 = 3;

	t28 = ((x113*(x114<=x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 1533481153U;
	int64_t x118 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 0;

	t29 = ((x117*(x118<=x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = INT64_MAX;
	int8_t x122 = 0;
	volatile uint64_t x123 = UINT64_MAX;
	volatile uint64_t x124 = UINT64_MAX;
	int32_t t30 = -4588238;

	t30 = ((x121*(x122<=x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = 24U;
	uint16_t x126 = UINT16_MAX;
	volatile int64_t x127 = -64368024LL;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -6;

	t31 = ((x125*(x126<=x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int16_t x130 = 6783;
	volatile int16_t x131 = 22;
	int64_t x132 = INT64_MIN;
	int32_t t32 = -3420;

	t32 = ((x129*(x130<=x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 31038U;
	static volatile int32_t t33 = -1445;

	t33 = ((x133*(x134<=x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 0U;
	int32_t x138 = INT32_MIN;
	int64_t x139 = 500LL;
	uint16_t x140 = 4U;
	int32_t t34 = 5734917;

	t34 = ((x137*(x138<=x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -7;
	int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t35 = 139323;

	t35 = ((x141*(x142<=x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = 2486;
	static uint8_t x146 = 50U;
	int32_t x147 = -1;
	uint32_t x148 = 5914298U;
	volatile int32_t t36 = 3358;

	t36 = ((x145*(x146<=x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = INT32_MAX;
	volatile int32_t t37 = -919059327;

	t37 = ((x149*(x150<=x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	int32_t x154 = INT32_MAX;
	volatile int32_t x155 = INT32_MAX;
	static int64_t x156 = INT64_MAX;
	volatile int32_t t38 = -254612;

	t38 = ((x153*(x154<=x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	uint64_t x160 = 24367LLU;
	int32_t t39 = 186;

	t39 = ((x157*(x158<=x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static int16_t x162 = INT16_MAX;
	static int32_t x163 = INT32_MIN;
	int32_t t40 = -13556;

	t40 = ((x161*(x162<=x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MAX;
	uint8_t x167 = 47U;

	t41 = ((x165*(x166<=x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static int64_t x170 = -1LL;
	int16_t x171 = INT16_MAX;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 392;

	t42 = ((x169*(x170<=x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 3750472627320180LL;
	uint8_t x174 = 48U;
	int8_t x175 = -1;
	volatile int32_t t43 = 35589328;

	t43 = ((x173*(x174<=x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 206044866;
	int64_t x178 = -1LL;
	static uint16_t x179 = UINT16_MAX;
	int32_t t44 = 470050607;

	t44 = ((x177*(x178<=x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = 33795296459390LLU;
	static int32_t x182 = INT32_MIN;
	uint64_t x184 = UINT64_MAX;
	int32_t t45 = -1;

	t45 = ((x181*(x182<=x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 1592847155U;
	int64_t x186 = INT64_MIN;
	int32_t t46 = -1087813;

	t46 = ((x185*(x186<=x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	uint8_t x191 = 5U;
	int32_t x192 = -1;

	t47 = ((x189*(x190<=x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = 154LLU;
	static int8_t x195 = 4;
	volatile int32_t t48 = 30;

	t48 = ((x193*(x194<=x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = 1;

	t49 = ((x197*(x198<=x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;

	t50 = ((x201*(x202<=x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -15068645;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = 378525773405993LL;
	int32_t t51 = 3594312;

	t51 = ((x205*(x206<=x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = UINT64_MAX;
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = -38;
	int32_t t52 = 989029;

	t52 = ((x209*(x210<=x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x215 = 1;
	int32_t t53 = 8;

	t53 = ((x213*(x214<=x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 643819090U;
	static volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -1LL;
	int32_t x220 = 0;
	static int32_t t54 = 810165925;

	t54 = ((x217*(x218<=x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 64595873LLU;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -1;
	volatile uint64_t x224 = 718105623LLU;
	volatile int32_t t55 = 14;

	t55 = ((x221*(x222<=x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile uint16_t x226 = UINT16_MAX;
	int64_t x227 = 5LL;
	int8_t x228 = 0;

	t56 = ((x225*(x226<=x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int32_t x231 = INT32_MAX;

	t57 = ((x229*(x230<=x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 16U;
	uint16_t x235 = 2527U;
	volatile int32_t t58 = -29687;

	t58 = ((x233*(x234<=x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile int32_t x238 = INT32_MAX;
	static int64_t x239 = INT64_MAX;
	volatile int32_t t59 = -122407549;

	t59 = ((x237*(x238<=x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	static volatile int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	static int32_t t60 = -1021;

	t60 = ((x241*(x242<=x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 1071U;
	static int64_t x246 = 3858LL;
	volatile int32_t x247 = -1;
	int8_t x248 = INT8_MIN;

	t61 = ((x245*(x246<=x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 0U;
	int32_t x251 = -53;
	uint16_t x252 = 901U;

	t62 = ((x249*(x250<=x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 4U;
	int64_t x254 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -2009475;

	t63 = ((x253*(x254<=x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	static volatile int64_t x259 = -1LL;
	static int8_t x260 = INT8_MIN;
	int32_t t64 = -3;

	t64 = ((x257*(x258<=x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -15196610;
	volatile int16_t x262 = INT16_MIN;
	int32_t t65 = 77555118;

	t65 = ((x261*(x262<=x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -1;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -1;

	t66 = ((x265*(x266<=x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	static int32_t x271 = INT32_MIN;
	int32_t t67 = -2076069;

	t67 = ((x269*(x270<=x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = 55;
	uint32_t x276 = UINT32_MAX;
	int32_t t68 = -33317953;

	t68 = ((x273*(x274<=x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 2206U;
	int32_t x278 = INT32_MIN;
	int8_t x279 = -1;
	static uint64_t x280 = 3642LLU;
	int32_t t69 = -1343;

	t69 = ((x277*(x278<=x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	uint8_t x282 = 2U;
	static int32_t x284 = INT32_MAX;

	t70 = ((x281*(x282<=x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -70512030;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -20015;

	t71 = ((x285*(x286<=x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int64_t x290 = -1LL;
	static int8_t x291 = -1;
	volatile uint64_t x292 = 3573359542577012077LLU;
	int32_t t72 = -84;

	t72 = ((x289*(x290<=x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 28;
	static volatile int16_t x294 = 0;
	uint8_t x295 = 2U;
	volatile int8_t x296 = -1;
	int32_t t73 = -1;

	t73 = ((x293*(x294<=x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	uint16_t x298 = 2U;
	int8_t x299 = INT8_MIN;
	int8_t x300 = 46;
	volatile int32_t t74 = -466;

	t74 = ((x297*(x298<=x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	volatile int16_t x304 = INT16_MIN;
	int32_t t75 = 893690;

	t75 = ((x301*(x302<=x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int16_t x306 = -1;
	uint64_t x308 = 37214217655893670LLU;
	static int32_t t76 = 2487;

	t76 = ((x305*(x306<=x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile uint16_t x310 = UINT16_MAX;
	uint32_t x311 = 22U;
	int32_t x312 = -1;
	static volatile int32_t t77 = -5079;

	t77 = ((x309*(x310<=x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x314 = 2U;
	static int16_t x316 = -1;
	volatile int32_t t78 = 1;

	t78 = ((x313*(x314<=x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 7U;
	int16_t x319 = INT16_MAX;
	static volatile uint8_t x320 = 20U;
	volatile int32_t t79 = 194;

	t79 = ((x317*(x318<=x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = UINT64_MAX;
	int32_t x324 = INT32_MAX;
	static volatile int32_t t80 = 4764;

	t80 = ((x321*(x322<=x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x328 = 49792416542389LLU;
	int32_t t81 = -4;

	t81 = ((x325*(x326<=x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	static volatile int64_t x332 = INT64_MAX;
	static volatile int32_t t82 = 473806256;

	t82 = ((x329*(x330<=x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x335 = 291234506U;
	volatile int16_t x336 = -1;
	volatile int32_t t83 = -35594267;

	t83 = ((x333*(x334<=x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = 136881601453430579LL;
	volatile int32_t t84 = 434902427;

	t84 = ((x337*(x338<=x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 27962LL;
	uint16_t x342 = UINT16_MAX;
	static volatile uint16_t x343 = 1445U;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = -630261;

	t85 = ((x341*(x342<=x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	volatile uint16_t x348 = 2392U;
	static int32_t t86 = 9593251;

	t86 = ((x345*(x346<=x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	static int32_t x352 = -19;

	t87 = ((x349*(x350<=x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static volatile uint16_t x354 = 0U;
	static uint32_t x356 = 15U;

	t88 = ((x353*(x354<=x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	static uint32_t x359 = 11U;
	int16_t x360 = -1;
	int32_t t89 = 29556;

	t89 = ((x357*(x358<=x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -59;
	int32_t t90 = 2548;

	t90 = ((x361*(x362<=x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MAX;
	static uint64_t x368 = 126LLU;

	t91 = ((x365*(x366<=x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x370 = 13U;
	uint8_t x371 = 14U;
	static int64_t x372 = -1LL;
	int32_t t92 = -1290;

	t92 = ((x369*(x370<=x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = INT16_MIN;
	volatile int64_t x375 = INT64_MAX;
	uint32_t x376 = 1923183694U;
	int32_t t93 = -5;

	t93 = ((x373*(x374<=x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1704474769160495207LLU;
	int64_t x379 = -795649488714230668LL;
	int64_t x380 = 3889671713370450LL;
	int32_t t94 = 1074425;

	t94 = ((x377*(x378<=x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -2776174716169874451LL;
	uint16_t x382 = 2022U;
	int32_t x384 = -1;
	volatile int32_t t95 = -2;

	t95 = ((x381*(x382<=x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MAX;
	uint32_t x387 = 178990U;
	int32_t x388 = INT32_MAX;
	int32_t t96 = 188;

	t96 = ((x385*(x386<=x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 0U;
	uint32_t x390 = 24116U;
	volatile int32_t x391 = INT32_MIN;
	int32_t t97 = -1623;

	t97 = ((x389*(x390<=x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = -1LL;
	uint8_t x395 = 6U;
	volatile int8_t x396 = -1;
	int32_t t98 = -763;

	t98 = ((x393*(x394<=x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = 170U;
	static int16_t x399 = -1;
	static int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = 144196;

	t99 = ((x397*(x398<=x399))<x400);

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

