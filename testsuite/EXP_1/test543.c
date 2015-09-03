#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 3303991600637321450LLU;
static volatile uint64_t x9 = 14657828164LLU;
volatile int64_t x10 = -8181544436219LL;
volatile int32_t x17 = -1;
static int8_t x20 = INT8_MIN;
static uint8_t x24 = UINT8_MAX;
volatile int8_t x27 = INT8_MIN;
volatile int8_t x43 = INT8_MAX;
volatile int32_t t8 = 16625;
int32_t x52 = INT32_MIN;
uint64_t x61 = UINT64_MAX;
volatile int32_t t12 = 0;
static volatile int32_t t15 = 766349;
int32_t t16 = -2;
int32_t x89 = INT32_MAX;
int16_t x92 = INT16_MAX;
int64_t x94 = 5837498407357522LL;
uint64_t x95 = UINT64_MAX;
int32_t x100 = INT32_MIN;
uint16_t x103 = 6U;
int32_t t21 = -2;
static int16_t x105 = -1;
static int32_t x112 = -803575;
volatile int32_t x117 = -1;
int32_t x120 = INT32_MIN;
int32_t x122 = -480;
static int32_t x123 = INT32_MAX;
int64_t x124 = -3605LL;
volatile int8_t x126 = -1;
int8_t x127 = 15;
static int8_t x128 = -20;
int8_t x130 = INT8_MIN;
int32_t t28 = -419;
uint64_t x138 = UINT64_MAX;
int16_t x161 = INT16_MIN;
int32_t t35 = 15;
int8_t x168 = INT8_MIN;
static int16_t x172 = INT16_MIN;
int64_t x174 = INT64_MIN;
uint64_t x180 = 66270026630LLU;
volatile int16_t x181 = 470;
volatile int32_t t40 = -79325;
static int16_t x187 = INT16_MIN;
uint64_t x190 = 154045782LLU;
int32_t x191 = INT32_MAX;
int8_t x196 = INT8_MIN;
static volatile int32_t t43 = 17901735;
int64_t x199 = 118388212945299LL;
static volatile int16_t x203 = INT16_MAX;
volatile int32_t t45 = 10;
int16_t x210 = -3267;
uint32_t x219 = 1834U;
static int64_t x224 = -870LL;
uint16_t x227 = 10965U;
int32_t t51 = 33757074;
int16_t x234 = INT16_MIN;
volatile int32_t t52 = 550340;
int32_t x253 = -1;
int32_t x255 = INT32_MAX;
uint32_t x264 = 1U;
int16_t x270 = INT16_MAX;
int32_t x283 = -1;
volatile int32_t t63 = -1;
int32_t x302 = INT32_MAX;
volatile uint8_t x312 = UINT8_MAX;
int64_t x314 = -18526157LL;
uint64_t x317 = UINT64_MAX;
int32_t x319 = -61;
int32_t x320 = 20;
int32_t x322 = INT32_MIN;
int64_t x323 = -189LL;
int32_t x332 = INT32_MIN;
volatile int32_t t73 = -29;
int16_t x334 = INT16_MIN;
static volatile int64_t x337 = 1054640108218LL;
int32_t t75 = -242;
int16_t x342 = INT16_MIN;
int64_t x347 = 0LL;
static int32_t t77 = 1133;
int64_t x357 = 67908902LL;
static uint16_t x358 = 1792U;
int32_t x360 = INT32_MIN;
static int32_t x364 = -5;
int16_t x367 = INT16_MIN;
uint64_t x368 = 214LLU;
int32_t t82 = 20;
volatile int32_t t83 = 0;
uint8_t x377 = UINT8_MAX;
int16_t x381 = INT16_MAX;
volatile int16_t x382 = INT16_MAX;
int32_t x383 = INT32_MAX;
static int16_t x387 = 3288;
int32_t t87 = -2;
uint8_t x393 = UINT8_MAX;
int64_t x399 = INT64_MIN;
uint32_t x401 = UINT32_MAX;
volatile uint32_t x415 = 57025542U;
int32_t t91 = 1235955;
static int32_t t92 = 0;
int32_t t93 = 234968396;
volatile int8_t x426 = INT8_MIN;
static int16_t x441 = INT16_MIN;
int16_t x444 = 7;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = 23;
	int32_t t0 = -101616;

	t0 = (((x1/x2)*x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x11 = 10U;
	uint16_t x12 = 316U;
	volatile int32_t t1 = 3053;

	t1 = (((x9/x10)*x11)<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	uint64_t x14 = 1885403143LLU;
	volatile int32_t x15 = INT32_MAX;
	volatile int16_t x16 = 7;
	static int32_t t2 = 200854;

	t2 = (((x13/x14)*x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x18 = -1;
	volatile int32_t x19 = -111282;
	int32_t t3 = 18805939;

	t3 = (((x17/x18)*x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 146765610U;
	uint8_t x22 = UINT8_MAX;
	static uint8_t x23 = 1U;
	volatile int32_t t4 = -4043890;

	t4 = (((x21/x22)*x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	int32_t x28 = INT32_MAX;
	int32_t t5 = 6880;

	t5 = (((x25/x26)*x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = -9844301;
	int16_t x32 = 1;
	int32_t t6 = 20312130;

	t6 = (((x29/x30)*x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	volatile uint16_t x40 = 5828U;
	volatile int32_t t7 = 7;

	t7 = (((x37/x38)*x39)<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 39784512;
	int8_t x42 = INT8_MAX;
	volatile int32_t x44 = -1;

	t8 = (((x41/x42)*x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -1;
	static uint64_t x46 = 241236543669LLU;
	volatile uint64_t x47 = 50606506253LLU;
	int16_t x48 = 57;
	volatile int32_t t9 = -16452;

	t9 = (((x45/x46)*x47)<=x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	static uint64_t x51 = UINT64_MAX;
	int32_t t10 = 8794;

	t10 = (((x49/x50)*x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	static int32_t x54 = -1;
	uint32_t x55 = UINT32_MAX;
	static uint8_t x56 = 21U;
	int32_t t11 = -390;

	t11 = (((x53/x54)*x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x62 = 24U;
	int64_t x63 = 1590643LL;
	int64_t x64 = -1LL;

	t12 = (((x61/x62)*x63)<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = -6259;
	volatile int16_t x70 = 1;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = 2U;
	static volatile int32_t t13 = -1803439;

	t13 = (((x69/x70)*x71)<=x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x73 = 11U;
	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MIN;
	static uint64_t x76 = 484815LLU;
	int32_t t14 = -43;

	t14 = (((x73/x74)*x75)<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = 13;
	int8_t x78 = 26;
	volatile int16_t x79 = -1;
	uint32_t x80 = 550U;

	t15 = (((x77/x78)*x79)<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MAX;

	t16 = (((x81/x82)*x83)<=x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int32_t x87 = INT32_MAX;
	static int64_t x88 = INT64_MAX;
	int32_t t17 = 7477;

	t17 = (((x85/x86)*x87)<=x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x90 = 11677213899430LLU;
	int8_t x91 = INT8_MAX;
	int32_t t18 = -1990365;

	t18 = (((x89/x90)*x91)<=x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x96 = 1LL;
	int32_t t19 = -136075;

	t19 = (((x93/x94)*x95)<=x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MAX;
	int16_t x99 = 2;
	volatile int32_t t20 = 11752;

	t20 = (((x97/x98)*x99)<=x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	int64_t x102 = 386525863545LL;
	static volatile uint32_t x104 = 81381U;

	t21 = (((x101/x102)*x103)<=x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x106 = -1;
	int8_t x107 = -1;
	static int8_t x108 = 31;
	static int32_t t22 = -1;

	t22 = (((x105/x106)*x107)<=x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x109 = -1LL;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	int32_t t23 = 450592;

	t23 = (((x109/x110)*x111)<=x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x118 = -1LL;
	int64_t x119 = INT64_MIN;
	int32_t t24 = -5121;

	t24 = (((x117/x118)*x119)<=x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t t25 = -26;

	t25 = (((x121/x122)*x123)<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x125 = 1754U;
	volatile int32_t t26 = -1;

	t26 = (((x125/x126)*x127)<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = 0;
	int16_t x131 = -168;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t27 = -12;

	t27 = (((x129/x130)*x131)<=x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x133 = -4642517278503LL;
	uint16_t x134 = UINT16_MAX;
	int64_t x135 = -1LL;
	int16_t x136 = 677;

	t28 = (((x133/x134)*x135)<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x137 = 225U;
	volatile uint8_t x139 = 3U;
	int16_t x140 = -1;
	volatile int32_t t29 = 1;

	t29 = (((x137/x138)*x139)<=x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1261010692330695LL;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = 7U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t30 = -200;

	t30 = (((x141/x142)*x143)<=x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -820;
	int64_t x146 = INT64_MIN;
	uint16_t x147 = 14U;
	int8_t x148 = -1;
	volatile int32_t t31 = 1957;

	t31 = (((x145/x146)*x147)<=x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = 114906322LL;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MAX;
	int32_t t32 = -1;

	t32 = (((x149/x150)*x151)<=x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 1U;
	int8_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	static int8_t x156 = 1;
	volatile int32_t t33 = -6689709;

	t33 = (((x153/x154)*x155)<=x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MAX;
	uint8_t x159 = 115U;
	int8_t x160 = INT8_MAX;
	volatile int32_t t34 = -2869;

	t34 = (((x157/x158)*x159)<=x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x162 = -867;
	int8_t x163 = INT8_MIN;
	volatile int64_t x164 = 276419046067578926LL;

	t35 = (((x161/x162)*x163)<=x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MIN;
	volatile int32_t t36 = -22;

	t36 = (((x165/x166)*x167)<=x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 26015U;
	int64_t x170 = 27452862LL;
	static volatile int32_t x171 = INT32_MIN;
	int32_t t37 = 6924129;

	t37 = (((x169/x170)*x171)<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	static uint32_t x175 = 27453U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t38 = 7935;

	t38 = (((x173/x174)*x175)<=x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MIN;
	static uint64_t x179 = 1192009821095LLU;
	static int32_t t39 = -32923898;

	t39 = (((x177/x178)*x179)<=x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x182 = -269926455941154LL;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 266311045287949240LLU;

	t40 = (((x181/x182)*x183)<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -429;
	int8_t x186 = INT8_MIN;
	static volatile int16_t x188 = INT16_MAX;
	volatile int32_t t41 = -3397;

	t41 = (((x185/x186)*x187)<=x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	int16_t x192 = INT16_MAX;
	volatile int32_t t42 = -219;

	t42 = (((x189/x190)*x191)<=x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = -3;
	static uint64_t x194 = 8486LLU;
	int32_t x195 = INT32_MAX;

	t43 = (((x193/x194)*x195)<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 25U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t44 = 1;

	t44 = (((x197/x198)*x199)<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	static volatile uint32_t x202 = 231U;
	int8_t x204 = 0;

	t45 = (((x201/x202)*x203)<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = 950710760;
	int64_t x206 = 1585LL;
	int32_t x207 = -1;
	int8_t x208 = -1;
	static volatile int32_t t46 = -123;

	t46 = (((x205/x206)*x207)<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	static volatile int16_t x211 = INT16_MAX;
	volatile uint32_t x212 = UINT32_MAX;
	volatile int32_t t47 = -255;

	t47 = (((x209/x210)*x211)<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x217 = INT16_MAX;
	static uint16_t x218 = UINT16_MAX;
	uint32_t x220 = 91130U;
	static int32_t t48 = -1;

	t48 = (((x217/x218)*x219)<=x220);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = 565U;
	uint8_t x222 = UINT8_MAX;
	static int64_t x223 = -1LL;
	volatile int32_t t49 = 438940471;

	t49 = (((x221/x222)*x223)<=x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	volatile int32_t x226 = -1;
	int16_t x228 = INT16_MIN;
	int32_t t50 = -8343085;

	t50 = (((x225/x226)*x227)<=x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = 10830104LLU;
	uint32_t x231 = UINT32_MAX;
	static int64_t x232 = INT64_MIN;

	t51 = (((x229/x230)*x231)<=x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -20908735;
	volatile uint8_t x235 = 0U;
	static int64_t x236 = -704LL;

	t52 = (((x233/x234)*x235)<=x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	int64_t x238 = 50219095LL;
	int16_t x239 = INT16_MIN;
	int8_t x240 = 62;
	volatile int32_t t53 = 40;

	t53 = (((x237/x238)*x239)<=x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = INT64_MIN;
	static int16_t x242 = INT16_MIN;
	int8_t x243 = 20;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t54 = 4;

	t54 = (((x241/x242)*x243)<=x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 126466805U;
	int8_t x250 = -1;
	volatile int8_t x251 = -1;
	static volatile int32_t x252 = -5929;
	int32_t t55 = 1587208;

	t55 = (((x249/x250)*x251)<=x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x254 = -1;
	volatile int32_t x256 = 13317;
	static int32_t t56 = 40880;

	t56 = (((x253/x254)*x255)<=x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 34213LLU;
	int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MIN;
	int32_t x260 = -1;
	static int32_t t57 = -236;

	t57 = (((x257/x258)*x259)<=x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 1705664605LLU;
	volatile int16_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	int32_t t58 = -9;

	t58 = (((x261/x262)*x263)<=x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 39U;
	uint8_t x266 = 7U;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MIN;
	int32_t t59 = 1054;

	t59 = (((x265/x266)*x267)<=x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = UINT16_MAX;
	static int32_t x271 = -183898;
	volatile int64_t x272 = -1LL;
	int32_t t60 = -196261;

	t60 = (((x269/x270)*x271)<=x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x273 = 204;
	static int64_t x274 = INT64_MAX;
	int8_t x275 = INT8_MIN;
	int64_t x276 = -199165600LL;
	static volatile int32_t t61 = 1291;

	t61 = (((x273/x274)*x275)<=x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = UINT32_MAX;
	uint8_t x282 = 3U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t62 = 30114;

	t62 = (((x281/x282)*x283)<=x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = 1;
	int8_t x286 = 29;
	int32_t x287 = 80114;
	uint16_t x288 = 361U;

	t63 = (((x285/x286)*x287)<=x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x289 = 937U;
	uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 15260230981723LLU;
	int16_t x292 = INT16_MIN;
	int32_t t64 = -54841;

	t64 = (((x289/x290)*x291)<=x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	static uint16_t x295 = UINT16_MAX;
	static volatile uint64_t x296 = UINT64_MAX;
	int32_t t65 = -264295;

	t65 = (((x293/x294)*x295)<=x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x297 = -136;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;
	static volatile int32_t t66 = 3180;

	t66 = (((x297/x298)*x299)<=x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x301 = INT16_MAX;
	int8_t x303 = 0;
	int8_t x304 = -1;
	int32_t t67 = 518;

	t67 = (((x301/x302)*x303)<=x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	int32_t t68 = -15284164;

	t68 = (((x309/x310)*x311)<=x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = INT8_MAX;
	int8_t x316 = -1;
	int32_t t69 = -1067142661;

	t69 = (((x313/x314)*x315)<=x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x318 = INT16_MIN;
	volatile int32_t t70 = -187977325;

	t70 = (((x317/x318)*x319)<=x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x321 = INT64_MAX;
	volatile uint8_t x324 = 20U;
	static int32_t t71 = 81;

	t71 = (((x321/x322)*x323)<=x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x325 = 1823U;
	volatile int32_t x326 = INT32_MIN;
	static volatile int32_t x327 = -1;
	volatile uint32_t x328 = 177356349U;
	int32_t t72 = 235;

	t72 = (((x325/x326)*x327)<=x328);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MAX;
	static volatile uint64_t x330 = 80296834104439498LLU;
	uint8_t x331 = UINT8_MAX;

	t73 = (((x329/x330)*x331)<=x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x333 = UINT32_MAX;
	static uint64_t x335 = 5LLU;
	int16_t x336 = INT16_MAX;
	volatile int32_t t74 = 4060885;

	t74 = (((x333/x334)*x335)<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x338 = 11625821;
	static int8_t x339 = -1;
	volatile int64_t x340 = INT64_MIN;

	t75 = (((x337/x338)*x339)<=x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x341 = INT64_MIN;
	uint32_t x343 = 2U;
	int64_t x344 = -1LL;
	static int32_t t76 = -499080;

	t76 = (((x341/x342)*x343)<=x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x345 = INT64_MIN;
	static uint64_t x346 = 59000462929LLU;
	static uint32_t x348 = UINT32_MAX;

	t77 = (((x345/x346)*x347)<=x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x353 = -12;
	int32_t x354 = -43620214;
	uint16_t x355 = 81U;
	int32_t x356 = -1;
	static volatile int32_t t78 = 125;

	t78 = (((x353/x354)*x355)<=x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x359 = -1;
	volatile int32_t t79 = 222;

	t79 = (((x357/x358)*x359)<=x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = UINT32_MAX;
	uint8_t x362 = 15U;
	static int32_t x363 = INT32_MIN;
	int32_t t80 = 399947333;

	t80 = (((x361/x362)*x363)<=x364);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = 37;
	static int16_t x366 = INT16_MIN;
	int32_t t81 = -157534;

	t81 = (((x365/x366)*x367)<=x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MAX;
	int32_t x371 = -1;
	uint8_t x372 = 12U;

	t82 = (((x369/x370)*x371)<=x372);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x373 = -5493098624LL;
	static int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MIN;

	t83 = (((x373/x374)*x375)<=x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x378 = 89U;
	static volatile int16_t x379 = INT16_MAX;
	uint8_t x380 = 6U;
	int32_t t84 = 7237347;

	t84 = (((x377/x378)*x379)<=x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x384 = INT16_MIN;
	volatile int32_t t85 = 41;

	t85 = (((x381/x382)*x383)<=x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x385 = 1U;
	uint8_t x386 = 2U;
	int8_t x388 = INT8_MAX;
	int32_t t86 = -256226298;

	t86 = (((x385/x386)*x387)<=x388);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x389 = 6224643198183224472LLU;
	volatile int16_t x390 = -5661;
	static uint64_t x391 = 187037545706877LLU;
	int8_t x392 = 1;

	t87 = (((x389/x390)*x391)<=x392);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -1;
	volatile int32_t t88 = -846138159;

	t88 = (((x393/x394)*x395)<=x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x397 = 21810535248266LLU;
	volatile int32_t x398 = -14;
	static volatile int32_t x400 = INT32_MIN;
	int32_t t89 = -1;

	t89 = (((x397/x398)*x399)<=x400);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x402 = INT64_MIN;
	volatile int8_t x403 = -1;
	int64_t x404 = INT64_MAX;
	volatile int32_t t90 = 533631459;

	t90 = (((x401/x402)*x403)<=x404);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x413 = -56;
	volatile int64_t x414 = -1LL;
	int16_t x416 = -1;

	t91 = (((x413/x414)*x415)<=x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x417 = 56U;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = -62;
	int16_t x420 = 3;

	t92 = (((x417/x418)*x419)<=x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = 1;
	static int64_t x422 = INT64_MAX;
	int64_t x423 = 19LL;
	int32_t x424 = INT32_MIN;

	t93 = (((x421/x422)*x423)<=x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = -1;
	static uint8_t x427 = 2U;
	volatile int16_t x428 = -1;
	volatile int32_t t94 = 148548592;

	t94 = (((x425/x426)*x427)<=x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = 0;
	int32_t x430 = INT32_MIN;
	volatile int32_t x431 = INT32_MAX;
	uint16_t x432 = 222U;
	volatile int32_t t95 = -2;

	t95 = (((x429/x430)*x431)<=x432);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x433 = INT8_MIN;
	uint64_t x434 = UINT64_MAX;
	uint32_t x435 = 7U;
	int16_t x436 = INT16_MIN;
	int32_t t96 = 14041;

	t96 = (((x433/x434)*x435)<=x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x442 = -1;
	uint8_t x443 = 123U;
	volatile int32_t t97 = 268486;

	t97 = (((x441/x442)*x443)<=x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = -1;
	int32_t x446 = INT32_MAX;
	volatile int64_t x447 = INT64_MIN;
	int64_t x448 = 117125774816569LL;
	int32_t t98 = 88;

	t98 = (((x445/x446)*x447)<=x448);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = -1LL;
	int8_t x450 = INT8_MIN;
	uint32_t x451 = 15U;
	static int8_t x452 = 12;
	volatile int32_t t99 = 2;

	t99 = (((x449/x450)*x451)<=x452);

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

