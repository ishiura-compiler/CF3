#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 14464U;
int64_t x6 = 16430932LL;
int32_t t3 = 30809704;
static uint8_t x20 = 1U;
int32_t x23 = -1;
volatile int32_t t5 = 7814;
static volatile int64_t x25 = -6615815971LL;
uint64_t x30 = UINT64_MAX;
volatile int8_t x32 = -1;
volatile int32_t t7 = -2189;
int8_t x33 = -3;
int16_t x34 = 0;
int32_t t9 = 2;
int8_t x41 = -1;
uint8_t x43 = 0U;
uint64_t x53 = 339133785LLU;
volatile uint16_t x57 = 3U;
static uint32_t x58 = 68948U;
int64_t x65 = INT64_MAX;
int8_t x68 = INT8_MAX;
int32_t x73 = -1;
int16_t x75 = -3094;
int32_t x76 = INT32_MIN;
volatile int16_t x81 = INT16_MAX;
int16_t x89 = -1;
int64_t x96 = -1LL;
int8_t x100 = 17;
int8_t x102 = INT8_MIN;
static volatile int8_t x103 = -25;
int64_t x113 = 27162LL;
int64_t x121 = -15965548119608254LL;
int32_t x125 = 12134473;
volatile int32_t x127 = INT32_MIN;
int32_t t33 = 848201;
int32_t x146 = INT32_MIN;
volatile int32_t t36 = -387;
int8_t x153 = INT8_MIN;
volatile int32_t t38 = 578870711;
static volatile uint8_t x158 = 3U;
volatile int32_t t39 = -2;
static int16_t x163 = -1;
int8_t x166 = INT8_MIN;
static uint32_t x168 = 2836U;
static int32_t t41 = -1199038;
uint32_t x172 = 305U;
volatile int32_t x175 = INT32_MIN;
uint32_t x176 = 25099U;
int32_t x177 = INT32_MIN;
static int32_t x180 = INT32_MAX;
uint32_t x190 = 810U;
volatile int32_t x191 = INT32_MIN;
static uint32_t x195 = 7534514U;
volatile uint64_t x197 = UINT64_MAX;
volatile uint16_t x205 = 2037U;
uint32_t x210 = 3U;
uint8_t x214 = UINT8_MAX;
static volatile int32_t t53 = -963347;
uint16_t x217 = 2U;
volatile uint64_t x218 = UINT64_MAX;
int64_t x223 = -1LL;
static int16_t x231 = 14;
static volatile int32_t t57 = -18036;
int64_t x239 = INT64_MIN;
static volatile int32_t t60 = 71;
static int16_t x249 = INT16_MAX;
int32_t t62 = -9915;
int16_t x253 = 7;
int8_t x255 = -1;
static int32_t x257 = INT32_MIN;
volatile int8_t x261 = 8;
volatile uint32_t x263 = 32U;
int64_t x266 = -428298619LL;
static uint32_t x267 = 51284645U;
volatile uint64_t x269 = 106LLU;
uint16_t x271 = 14U;
static volatile int16_t x279 = -32;
static volatile int32_t t73 = -12;
volatile uint16_t x301 = 0U;
static volatile int32_t t76 = 1250339;
int16_t x313 = INT16_MIN;
int64_t x315 = 0LL;
int32_t x317 = -3140;
int32_t x319 = -1;
static int16_t x320 = INT16_MIN;
volatile int32_t t80 = -566227;
int64_t x349 = INT64_MAX;
uint8_t x352 = 0U;
uint64_t x357 = UINT64_MAX;
uint16_t x371 = UINT16_MAX;
int32_t t93 = -20640974;
int32_t x384 = -1;
uint8_t x385 = 1U;
volatile uint32_t x390 = 2447264U;
int32_t x393 = INT32_MIN;
volatile int32_t t98 = -12751;


void f0(void) {
	volatile uint32_t x1 = 52580U;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -81;
	int32_t t0 = 78636719;

	t0 = ((x1-(x2==x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -2410379;

	t1 = ((x5-(x6==x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 108215715U;
	volatile uint32_t x10 = 7807100U;
	static volatile int32_t x11 = INT32_MIN;
	volatile int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 11900822;

	t2 = ((x9-(x10==x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 209454991697116LLU;
	static volatile uint16_t x14 = 388U;
	int8_t x15 = INT8_MIN;
	int8_t x16 = 0;

	t3 = ((x13-(x14==x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1216788285886LLU;
	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	int32_t t4 = -15;

	t4 = ((x17-(x18==x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 28U;
	static uint32_t x22 = 702U;
	volatile int64_t x24 = INT64_MIN;

	t5 = ((x21-(x22==x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = INT32_MIN;
	static uint8_t x27 = 0U;
	uint32_t x28 = 12U;
	volatile int32_t t6 = -87323;

	t6 = ((x25-(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x31 = -3LL;

	t7 = ((x29-(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x35 = INT32_MIN;
	static int64_t x36 = INT64_MAX;
	int32_t t8 = 35;

	t8 = ((x33-(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 54U;
	int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MIN;
	int64_t x40 = 4320721806LL;

	t9 = ((x37-(x38==x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = INT32_MIN;
	volatile int16_t x44 = 4;
	volatile int32_t t10 = 8305;

	t10 = ((x41-(x42==x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -5;
	static int8_t x46 = INT8_MIN;
	int64_t x47 = 29187884084705LL;
	static volatile int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 228117;

	t11 = ((x45-(x46==x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 1237U;
	static int8_t x50 = INT8_MIN;
	int32_t x51 = 69397;
	static int32_t x52 = -1;
	volatile int32_t t12 = 33;

	t12 = ((x49-(x50==x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 446311;

	t13 = ((x53-(x54==x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = -1;
	uint8_t x60 = 10U;
	volatile int32_t t14 = 15;

	t14 = ((x57-(x58==x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	static uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MAX;
	volatile int32_t t15 = 472518021;

	t15 = ((x61-(x62==x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 2495U;
	int16_t x67 = -2;
	int32_t t16 = -18;

	t16 = ((x65-(x66==x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	static uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -2080806;

	t17 = ((x69-(x70==x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = INT32_MIN;
	int32_t t18 = -805669041;

	t18 = ((x73-(x74==x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	uint32_t x78 = 3U;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 228447637688269LLU;
	int32_t t19 = 171041;

	t19 = ((x77-(x78==x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = -16457451338LL;
	int32_t x83 = INT32_MAX;
	static int32_t x84 = -1;
	static int32_t t20 = 539;

	t20 = ((x81-(x82==x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -2171;
	int8_t x86 = 2;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	int32_t t21 = 0;

	t21 = ((x85-(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = 55;
	volatile int32_t t22 = 16397725;

	t22 = ((x89-(x90==x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile int32_t x94 = -808647759;
	volatile uint8_t x95 = 1U;
	int32_t t23 = 6;

	t23 = ((x93-(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 961750136682068LLU;
	static int64_t x98 = 39LL;
	volatile uint32_t x99 = UINT32_MAX;
	volatile int32_t t24 = -1;

	t24 = ((x97-(x98==x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 4U;
	int32_t x104 = 148173;
	static volatile int32_t t25 = -2368122;

	t25 = ((x101-(x102==x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 2545181981021LLU;
	int8_t x106 = INT8_MIN;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = -147923;
	int32_t t26 = -29053935;

	t26 = ((x105-(x106==x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	uint16_t x110 = 62U;
	int8_t x111 = INT8_MAX;
	uint16_t x112 = 1465U;
	static volatile int32_t t27 = 1;

	t27 = ((x109-(x110==x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = 6;
	int32_t t28 = -679301;

	t28 = ((x113-(x114==x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = -1;
	int32_t x119 = INT32_MIN;
	static volatile int32_t x120 = -9;
	int32_t t29 = 62;

	t29 = ((x117-(x118==x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	volatile int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = 4253;

	t30 = ((x121-(x122==x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -2;
	static uint32_t x128 = 219U;
	volatile int32_t t31 = 137152693;

	t31 = ((x125-(x126==x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -195LL;
	uint8_t x130 = 15U;
	uint16_t x131 = 3U;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = -6488;

	t32 = ((x129-(x130==x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 28U;
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	int8_t x136 = INT8_MIN;

	t33 = ((x133-(x134==x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 361613476;
	int32_t x138 = -1914233;
	uint32_t x139 = UINT32_MAX;
	static int16_t x140 = INT16_MAX;
	static volatile int32_t t34 = -203893;

	t34 = ((x137-(x138==x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MIN;
	int64_t x143 = -2543448992LL;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -830583;

	t35 = ((x141-(x142==x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -27781476681666LL;
	int8_t x147 = INT8_MAX;
	int16_t x148 = INT16_MIN;

	t36 = ((x145-(x146==x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 6;

	t37 = ((x149-(x150==x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MAX;
	static int32_t x156 = INT32_MIN;

	t38 = ((x153-(x154==x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	volatile int32_t x159 = -1;
	uint64_t x160 = UINT64_MAX;

	t39 = ((x157-(x158==x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = 390500411529782LL;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 535390091;

	t40 = ((x161-(x162==x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1;
	int64_t x167 = INT64_MIN;

	t41 = ((x165-(x166==x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 1;
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = UINT8_MAX;
	volatile int32_t t42 = 466;

	t42 = ((x169-(x170==x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int32_t x174 = 329;
	int32_t t43 = 519;

	t43 = ((x173-(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 45451U;
	int16_t x179 = -1;
	volatile int32_t t44 = -6037;

	t44 = ((x177-(x178==x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MAX;
	volatile uint8_t x183 = 96U;
	int32_t x184 = 3;
	volatile int32_t t45 = 6295;

	t45 = ((x181-(x182==x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 1407U;
	static int8_t x186 = INT8_MIN;
	uint64_t x187 = UINT64_MAX;
	volatile int8_t x188 = -1;
	int32_t t46 = 1779;

	t46 = ((x185-(x186==x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int16_t x192 = 274;
	volatile int32_t t47 = -1;

	t47 = ((x189-(x190==x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int64_t x194 = -222LL;
	volatile int16_t x196 = 199;
	volatile int32_t t48 = 15128032;

	t48 = ((x193-(x194==x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = INT8_MIN;
	uint16_t x199 = 504U;
	volatile int64_t x200 = INT64_MIN;
	int32_t t49 = -249431;

	t49 = ((x197-(x198==x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -33919357128155LL;
	int8_t x202 = 0;
	uint8_t x203 = 21U;
	static int8_t x204 = 22;
	static int32_t t50 = 7064;

	t50 = ((x201-(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	uint32_t x208 = 61494655U;
	static volatile int32_t t51 = 53476845;

	t51 = ((x205-(x206==x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 105U;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = 808851144;

	t52 = ((x209-(x210==x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 318378809;
	static int32_t x215 = INT32_MIN;
	volatile int64_t x216 = INT64_MIN;

	t53 = ((x213-(x214==x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = 17165015463404LL;
	int64_t x220 = INT64_MAX;
	int32_t t54 = 2985;

	t54 = ((x217-(x218==x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	uint16_t x222 = 7249U;
	int32_t x224 = 104480;
	int32_t t55 = 257;

	t55 = ((x221-(x222==x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 25U;
	static int16_t x226 = INT16_MAX;
	volatile uint64_t x227 = UINT64_MAX;
	uint16_t x228 = UINT16_MAX;
	int32_t t56 = 208349442;

	t56 = ((x225-(x226==x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 664884;
	int16_t x230 = INT16_MAX;
	static int64_t x232 = -1LL;

	t57 = ((x229-(x230==x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	uint64_t x234 = 22409480203596LLU;
	int64_t x235 = INT64_MAX;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -14775399;

	t58 = ((x233-(x234==x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	volatile uint8_t x238 = 6U;
	uint64_t x240 = 351389611385346670LLU;
	volatile int32_t t59 = 2712;

	t59 = ((x237-(x238==x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = -1;
	uint8_t x243 = 1U;
	volatile int16_t x244 = -1702;

	t60 = ((x241-(x242==x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = -886698945;

	t61 = ((x245-(x246==x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = 14U;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;

	t62 = ((x249-(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = 15LL;
	uint8_t x256 = 2U;
	int32_t t63 = -486;

	t63 = ((x253-(x254==x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x258 = INT64_MIN;
	static volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = -1;
	int32_t t64 = 0;

	t64 = ((x257-(x258==x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	int16_t x264 = -1;
	int32_t t65 = -206366;

	t65 = ((x261-(x262==x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 999589LLU;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -26114032;

	t66 = ((x265-(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 97U;
	int64_t x272 = -3LL;
	volatile int32_t t67 = -132;

	t67 = ((x269-(x270==x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	volatile int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	static volatile int32_t t68 = -16169690;

	t68 = ((x273-(x274==x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 2486U;
	int32_t x278 = -10178733;
	int8_t x280 = INT8_MAX;
	volatile int32_t t69 = -716914760;

	t69 = ((x277-(x278==x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 16352LL;
	int16_t x282 = -27;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = -25;
	int32_t t70 = 1;

	t70 = ((x281-(x282==x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static int64_t x286 = INT64_MIN;
	volatile int8_t x287 = 0;
	volatile int32_t x288 = -1;
	static int32_t t71 = 20370;

	t71 = ((x285-(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 12U;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 0;

	t72 = ((x289-(x290==x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -7;
	volatile uint8_t x294 = 0U;
	static int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;

	t73 = ((x293-(x294==x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x297 = -2;
	int32_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int8_t x300 = 21;
	int32_t t74 = 1548056;

	t74 = ((x297-(x298==x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 19469U;
	uint64_t x303 = UINT64_MAX;
	volatile int8_t x304 = INT8_MIN;
	int32_t t75 = -418593;

	t75 = ((x301-(x302==x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	static uint8_t x307 = 2U;
	uint8_t x308 = 23U;

	t76 = ((x305-(x306==x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	uint8_t x310 = 38U;
	int8_t x311 = INT8_MIN;
	int64_t x312 = 0LL;
	int32_t t77 = -14781203;

	t77 = ((x309-(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x314 = UINT16_MAX;
	int32_t x316 = -1879822;
	volatile int32_t t78 = 0;

	t78 = ((x313-(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = 59U;
	static volatile int32_t t79 = 4;

	t79 = ((x317-(x318==x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile uint16_t x322 = 5195U;
	int16_t x323 = -1;
	volatile uint32_t x324 = 1865U;

	t80 = ((x321-(x322==x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 488585;

	t81 = ((x325-(x326==x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MAX;
	static uint16_t x331 = UINT16_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -256;

	t82 = ((x329-(x330==x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x334 = 13U;
	int64_t x335 = 29089725492084LL;
	volatile uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = -4445039;

	t83 = ((x333-(x334==x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = 1U;
	static volatile int8_t x339 = 1;
	int16_t x340 = -3098;
	int32_t t84 = -23545;

	t84 = ((x337-(x338==x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1203;
	static int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	static int32_t x344 = 32983;
	volatile int32_t t85 = -8078752;

	t85 = ((x341-(x342==x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 17U;
	int32_t x346 = -109;
	int32_t x347 = 131432527;
	int32_t x348 = -760341040;
	int32_t t86 = 5;

	t86 = ((x345-(x346==x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	volatile uint16_t x351 = 2851U;
	int32_t t87 = 412;

	t87 = ((x349-(x350==x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = 13120641;
	int64_t x354 = -1LL;
	uint64_t x355 = 389464089884LLU;
	uint8_t x356 = UINT8_MAX;
	static int32_t t88 = -650;

	t88 = ((x353-(x354==x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MIN;
	int64_t x359 = -2084122LL;
	uint64_t x360 = 3580LLU;
	int32_t t89 = 966;

	t89 = ((x357-(x358==x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	static int32_t x363 = INT32_MIN;
	int64_t x364 = 1LL;
	int32_t t90 = -152;

	t90 = ((x361-(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 65U;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = -1;
	int64_t x368 = -74557125068580910LL;
	int32_t t91 = -67;

	t91 = ((x365-(x366==x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	int8_t x372 = 1;
	volatile int32_t t92 = 1;

	t92 = ((x369-(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MAX;
	static int64_t x376 = -1LL;

	t93 = ((x373-(x374==x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	uint32_t x383 = UINT32_MAX;
	int32_t t94 = -664;

	t94 = ((x381-(x382==x383))<x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x386 = 167950927U;
	uint64_t x387 = 584LLU;
	static int64_t x388 = 193LL;
	int32_t t95 = -991194;

	t95 = ((x385-(x386==x387))<x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x389 = 68268048617714LLU;
	static uint16_t x391 = 4829U;
	uint32_t x392 = UINT32_MAX;
	static int32_t t96 = 105;

	t96 = ((x389-(x390==x391))<x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x394 = UINT32_MAX;
	uint8_t x395 = 2U;
	int64_t x396 = INT64_MIN;
	int32_t t97 = -50065;

	t97 = ((x393-(x394==x395))<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 18124U;
	int8_t x398 = -1;
	uint16_t x399 = 463U;
	int16_t x400 = -625;

	t98 = ((x397-(x398==x399))<x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 17U;
	int16_t x404 = -1;
	int32_t t99 = 3680529;

	t99 = ((x401-(x402==x403))<x404);

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

