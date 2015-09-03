#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint8_t x4 = 2U;
int64_t x11 = 5548521188265219LL;
volatile int32_t t4 = -846698820;
volatile uint16_t x21 = UINT16_MAX;
volatile int64_t x29 = INT64_MAX;
static uint64_t x31 = 161319LLU;
int64_t x32 = INT64_MIN;
uint64_t x42 = 4372035483671LLU;
static int64_t x48 = INT64_MAX;
int32_t x54 = 133613623;
int16_t x55 = INT16_MIN;
int8_t x67 = INT8_MIN;
uint64_t x72 = 27172362210LLU;
uint32_t x76 = 110816794U;
volatile int32_t t19 = -2;
int8_t x82 = -1;
int8_t x83 = INT8_MIN;
uint8_t x85 = UINT8_MAX;
int16_t x88 = INT16_MIN;
uint32_t x92 = 1U;
volatile int32_t t22 = -7755144;
int32_t x93 = INT32_MIN;
uint32_t x95 = 2901529U;
static uint32_t x100 = UINT32_MAX;
static uint64_t x102 = 385780LLU;
uint8_t x110 = 6U;
int32_t x112 = -1;
int64_t x113 = -193474610052198729LL;
uint16_t x115 = UINT16_MAX;
volatile int32_t x121 = INT32_MAX;
static int64_t x122 = INT64_MIN;
static int32_t t30 = 132007014;
int64_t x126 = INT64_MIN;
static volatile int32_t t32 = 20;
int16_t x142 = INT16_MIN;
static uint32_t x146 = UINT32_MAX;
uint16_t x147 = 1248U;
int8_t x163 = 0;
volatile uint16_t x165 = UINT16_MAX;
int16_t x168 = 117;
static int32_t t41 = -351;
int32_t x170 = -1014;
uint16_t x172 = 1495U;
static int32_t t43 = -3790;
uint32_t x184 = 523324U;
uint8_t x185 = UINT8_MAX;
int16_t x187 = INT16_MIN;
uint64_t x190 = 3700LLU;
int8_t x193 = -7;
int16_t x199 = INT16_MIN;
static volatile int16_t x205 = -5;
int32_t t53 = 1025168;
int16_t x221 = INT16_MIN;
volatile int32_t t55 = -739171;
int64_t x226 = INT64_MAX;
int16_t x227 = 14;
int8_t x231 = -1;
volatile int32_t t59 = 53205048;
uint16_t x246 = 0U;
static volatile int32_t x255 = -119343;
int32_t x259 = -1;
int32_t t65 = 217;
uint64_t x266 = 52166789384036241LLU;
static uint64_t x267 = 25627489456020351LLU;
static volatile int64_t x269 = INT64_MIN;
volatile int64_t x271 = INT64_MIN;
volatile int32_t t71 = -1;
int64_t x298 = 138591LL;
volatile int16_t x303 = -1;
uint64_t x304 = 2394577LLU;
volatile int32_t t75 = 130111;
int32_t t76 = 0;
int16_t x310 = INT16_MIN;
int64_t x312 = 489013847102599LL;
volatile int32_t x316 = INT32_MIN;
static uint8_t x320 = UINT8_MAX;
int8_t x321 = INT8_MIN;
volatile int16_t x324 = INT16_MIN;
uint8_t x331 = UINT8_MAX;
static uint64_t x333 = 301LLU;
int32_t x336 = 24;
static int32_t x338 = INT32_MIN;
uint64_t x351 = UINT64_MAX;
volatile int8_t x356 = -18;
int16_t x358 = INT16_MIN;
uint64_t x363 = UINT64_MAX;
volatile uint64_t x370 = 15988868235LLU;
uint8_t x372 = 6U;
int16_t x374 = 204;
int16_t x376 = INT16_MIN;
uint32_t x381 = 1553407567U;
int32_t x384 = -953673;
static int64_t x387 = INT64_MIN;
static int32_t x389 = INT32_MIN;
uint16_t x390 = UINT16_MAX;
int32_t x395 = -445;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	int32_t t0 = -191;

	t0 = ((x1&(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -15;
	int8_t x6 = INT8_MIN;
	int32_t x7 = -259765173;
	uint64_t x8 = 406396LLU;
	int32_t t1 = -533;

	t1 = ((x5&(x6&x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -176977LL;
	int32_t x10 = -4;
	static int8_t x12 = -1;
	volatile int32_t t2 = -55;

	t2 = ((x9&(x10&x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 7;
	int32_t x14 = -18001196;
	static int32_t x15 = INT32_MIN;
	int32_t x16 = 14084;
	int32_t t3 = -163445;

	t3 = ((x13&(x14&x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	int16_t x20 = -12;

	t4 = ((x17&(x18&x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = 472522242966LL;
	uint64_t x23 = 104515958LLU;
	uint64_t x24 = 1396474462LLU;
	static int32_t t5 = 907498846;

	t5 = ((x21&(x22&x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 0;
	static volatile int32_t x26 = -1;
	int32_t x27 = 1;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -11;

	t6 = ((x25&(x26&x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -1;
	volatile int32_t t7 = -81526;

	t7 = ((x29&(x30&x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 20U;
	int16_t x34 = INT16_MIN;
	int8_t x35 = 6;
	volatile int8_t x36 = 13;
	static volatile int32_t t8 = -1;

	t8 = ((x33&(x34&x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 11U;
	int32_t x38 = 7;
	int64_t x39 = -650263960674118LL;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -938;

	t9 = ((x37&(x38&x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 90U;
	static volatile int16_t x43 = INT16_MIN;
	static int64_t x44 = 1547078LL;
	volatile int32_t t10 = -18809687;

	t10 = ((x41&(x42&x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MIN;
	static int32_t t11 = 165139223;

	t11 = ((x45&(x46&x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	volatile int8_t x50 = INT8_MIN;
	static int32_t x51 = -1756769;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -1;

	t12 = ((x49&(x50&x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 5321;

	t13 = ((x53&(x54&x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 52255807799LL;
	static int8_t x58 = INT8_MIN;
	uint64_t x59 = 2100623814237650985LLU;
	int64_t x60 = -5340LL;
	volatile int32_t t14 = 10756601;

	t14 = ((x57&(x58&x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = -2;
	int32_t x63 = INT32_MAX;
	volatile int16_t x64 = 1;
	int32_t t15 = 66649;

	t15 = ((x61&(x62&x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 116U;
	volatile int32_t x66 = -1;
	int64_t x68 = -38874615LL;
	int32_t t16 = -1;

	t16 = ((x65&(x66&x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -208807LL;
	uint64_t x70 = 177240900521LLU;
	static int16_t x71 = INT16_MAX;
	volatile int32_t t17 = 2140;

	t17 = ((x69&(x70&x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	uint64_t x74 = 2617968LLU;
	int64_t x75 = -307518043940LL;
	volatile int32_t t18 = -101;

	t18 = ((x73&(x74&x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 2074489986LLU;
	volatile int32_t x78 = 0;
	int8_t x79 = INT8_MIN;
	static int32_t x80 = -714970507;

	t19 = ((x77&(x78&x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 13258269;

	t20 = ((x81&(x82&x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = -12;
	int8_t x87 = 1;
	volatile int32_t t21 = 19419;

	t21 = ((x85&(x86&x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int8_t x90 = 1;
	int16_t x91 = 2;

	t22 = ((x89&(x90&x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	int8_t x96 = -2;
	int32_t t23 = -4;

	t23 = ((x93&(x94&x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	static int16_t x98 = INT16_MAX;
	int32_t x99 = INT32_MAX;
	static volatile int32_t t24 = -16;

	t24 = ((x97&(x98&x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 3197336160LLU;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 18U;
	static int32_t t25 = 13129969;

	t25 = ((x101&(x102&x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int16_t x106 = -403;
	static uint32_t x107 = UINT32_MAX;
	static volatile int64_t x108 = INT64_MIN;
	int32_t t26 = 120176608;

	t26 = ((x105&(x106&x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	static volatile int32_t t27 = 13459513;

	t27 = ((x109&(x110&x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -1LL;
	uint16_t x116 = 3981U;
	volatile int32_t t28 = 977;

	t28 = ((x113&(x114&x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 573592630;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = 18U;
	volatile int64_t x120 = INT64_MIN;
	int32_t t29 = 3874918;

	t29 = ((x117&(x118&x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x123 = 7U;
	int32_t x124 = 2046;

	t30 = ((x121&(x122&x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	uint8_t x127 = UINT8_MAX;
	uint64_t x128 = 28222LLU;
	static volatile int32_t t31 = -73;

	t31 = ((x125&(x126&x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 5704;
	int64_t x130 = INT64_MIN;
	static int32_t x131 = INT32_MIN;
	static int64_t x132 = -1LL;

	t32 = ((x129&(x130&x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -8;
	static int32_t x134 = INT32_MIN;
	volatile int16_t x135 = INT16_MIN;
	volatile int32_t x136 = INT32_MAX;
	static volatile int32_t t33 = -255;

	t33 = ((x133&(x134&x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	volatile int16_t x138 = INT16_MAX;
	static int16_t x139 = -116;
	uint32_t x140 = 343908248U;
	volatile int32_t t34 = -5109;

	t34 = ((x137&(x138&x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int64_t x143 = -65629957790LL;
	int32_t x144 = INT32_MAX;
	int32_t t35 = 2261;

	t35 = ((x141&(x142&x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 35920745;

	t36 = ((x145&(x146&x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 2U;
	uint8_t x150 = 1U;
	uint64_t x151 = 1372LLU;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -613869851;

	t37 = ((x149&(x150&x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x153 = 97;
	static volatile int8_t x154 = 21;
	static int64_t x155 = 71279716744055679LL;
	int8_t x156 = -7;
	static int32_t t38 = 244899614;

	t38 = ((x153&(x154&x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	volatile uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -33777;

	t39 = ((x157&(x158&x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x162 = UINT16_MAX;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t40 = -43068840;

	t40 = ((x161&(x162&x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MIN;
	int16_t x167 = -1;

	t41 = ((x165&(x166&x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 4380955286LLU;
	uint8_t x171 = UINT8_MAX;
	static int32_t t42 = -26594;

	t42 = ((x169&(x170&x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 439266863415223645LLU;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	volatile uint8_t x176 = UINT8_MAX;

	t43 = ((x173&(x174&x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = 5392U;
	int64_t x179 = INT64_MIN;
	volatile int32_t x180 = INT32_MIN;
	static int32_t t44 = -10;

	t44 = ((x177&(x178&x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -6222LL;
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 3505381795619548699LLU;
	static int32_t t45 = 0;

	t45 = ((x181&(x182&x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 213105695LL;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -218672;

	t46 = ((x185&(x186&x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	volatile int64_t x191 = 191LL;
	int8_t x192 = -49;
	int32_t t47 = -17369895;

	t47 = ((x189&(x190&x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -21118329;

	t48 = ((x193&(x194&x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	int32_t x198 = -16666;
	int8_t x200 = -1;
	volatile int32_t t49 = -164152;

	t49 = ((x197&(x198&x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MAX;
	int16_t x203 = 2;
	int64_t x204 = -1LL;
	int32_t t50 = 157;

	t50 = ((x201&(x202&x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MAX;
	int32_t x207 = INT32_MIN;
	volatile int8_t x208 = 1;
	int32_t t51 = -1;

	t51 = ((x205&(x206&x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int64_t x210 = 66297206610072LL;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t52 = -52815345;

	t52 = ((x209&(x210&x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	int8_t x215 = -1;
	int32_t x216 = -3;

	t53 = ((x213&(x214&x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 41577100556563020LLU;
	int32_t x218 = -1;
	int16_t x219 = -1;
	static volatile int64_t x220 = 220LL;
	volatile int32_t t54 = 12;

	t54 = ((x217&(x218&x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MAX;
	volatile uint32_t x223 = UINT32_MAX;
	int64_t x224 = -155349858363133743LL;

	t55 = ((x221&(x222&x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int8_t x228 = 1;
	volatile int32_t t56 = 19488950;

	t56 = ((x225&(x226&x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t57 = -1;

	t57 = ((x229&(x230&x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	int32_t x234 = 31;
	uint8_t x235 = UINT8_MAX;
	static uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = -32053;

	t58 = ((x233&(x234&x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	int8_t x239 = -1;
	int16_t x240 = 4;

	t59 = ((x237&(x238&x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = 2396;
	volatile uint16_t x243 = UINT16_MAX;
	volatile int8_t x244 = 0;
	int32_t t60 = -48529997;

	t60 = ((x241&(x242&x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -1;
	int64_t x247 = 66LL;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 600;

	t61 = ((x245&(x246&x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 10743436070LLU;
	static int16_t x250 = INT16_MAX;
	uint16_t x251 = 2771U;
	uint16_t x252 = 5U;
	volatile int32_t t62 = 10166;

	t62 = ((x249&(x250&x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	int16_t x256 = 4;
	volatile int32_t t63 = 30269504;

	t63 = ((x253&(x254&x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int32_t x258 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	int32_t t64 = 19;

	t64 = ((x257&(x258&x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 0;
	int16_t x262 = -1;
	int32_t x263 = INT32_MIN;
	static volatile uint32_t x264 = 79047255U;

	t65 = ((x261&(x262&x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	int64_t x268 = -471289690LL;
	int32_t t66 = -15535290;

	t66 = ((x265&(x266&x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = 493;
	int64_t x272 = INT64_MAX;
	int32_t t67 = -10042149;

	t67 = ((x269&(x270&x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int16_t x274 = -639;
	volatile int64_t x275 = -1LL;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t68 = -14;

	t68 = ((x273&(x274&x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 31U;
	static int16_t x278 = -1;
	volatile int32_t x279 = -10040571;
	int64_t x280 = 3110369510909LL;
	volatile int32_t t69 = -6198;

	t69 = ((x277&(x278&x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = 25853813880633880LL;
	int64_t x283 = -1LL;
	static volatile uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = 14095;

	t70 = ((x281&(x282&x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -1;
	volatile int8_t x286 = INT8_MAX;
	int8_t x287 = 20;
	uint32_t x288 = 0U;

	t71 = ((x285&(x286&x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	volatile uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 18887U;
	uint64_t x292 = UINT64_MAX;
	int32_t t72 = -1;

	t72 = ((x289&(x290&x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 2259;
	int64_t x294 = INT64_MIN;
	int32_t x295 = -1;
	int16_t x296 = -1155;
	int32_t t73 = 2447278;

	t73 = ((x293&(x294&x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = INT64_MAX;
	uint8_t x299 = 1U;
	int64_t x300 = 17454816396859LL;
	int32_t t74 = 165513845;

	t74 = ((x297&(x298&x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 0;
	int16_t x302 = -1;

	t75 = ((x301&(x302&x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 0;
	volatile int8_t x306 = 13;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MAX;

	t76 = ((x305&(x306&x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 36876661906008LLU;
	int8_t x311 = INT8_MAX;
	volatile int32_t t77 = 380054952;

	t77 = ((x309&(x310&x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -59;
	volatile int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	int32_t t78 = -3416;

	t78 = ((x313&(x314&x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x317 = -284;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = 24446675;
	static int32_t t79 = -27899727;

	t79 = ((x317&(x318&x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x322 = 33061455LLU;
	int64_t x323 = -17687016655781943LL;
	int32_t t80 = -539619;

	t80 = ((x321&(x322&x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 3927468;
	int8_t x326 = INT8_MIN;
	int16_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -6;

	t81 = ((x325&(x326&x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	volatile int8_t x330 = INT8_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t82 = -34201;

	t82 = ((x329&(x330&x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = UINT16_MAX;
	static uint16_t x335 = 25197U;
	volatile int32_t t83 = -301;

	t83 = ((x333&(x334&x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 233U;
	int8_t x339 = -1;
	static uint32_t x340 = 1261069387U;
	int32_t t84 = 9;

	t84 = ((x337&(x338&x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = 1U;
	static volatile uint32_t x342 = 15450863U;
	static volatile uint32_t x343 = 6277473U;
	static uint32_t x344 = 30904U;
	int32_t t85 = 505262;

	t85 = ((x341&(x342&x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -17534284LL;
	int16_t x346 = INT16_MAX;
	int16_t x347 = 1902;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -194386358;

	t86 = ((x345&(x346&x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	volatile int32_t x350 = INT32_MIN;
	static uint16_t x352 = 476U;
	static int32_t t87 = 147;

	t87 = ((x349&(x350&x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	static uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MAX;
	volatile int32_t t88 = 510795371;

	t88 = ((x353&(x354&x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = UINT32_MAX;
	uint32_t x359 = 8U;
	int64_t x360 = -11787740650330853LL;
	int32_t t89 = -2;

	t89 = ((x357&(x358&x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 189240074U;
	uint64_t x362 = UINT64_MAX;
	int32_t x364 = 7168;
	static volatile int32_t t90 = 1667153;

	t90 = ((x361&(x362&x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 1303U;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MAX;
	static int16_t x368 = INT16_MIN;
	int32_t t91 = -28162;

	t91 = ((x365&(x366&x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	volatile int32_t t92 = -1;

	t92 = ((x369&(x370&x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int32_t x375 = -2;
	volatile int32_t t93 = 5863697;

	t93 = ((x373&(x374&x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x377 = INT32_MIN;
	static uint16_t x378 = 18797U;
	volatile uint32_t x379 = 222U;
	int16_t x380 = 0;
	int32_t t94 = -99035149;

	t94 = ((x377&(x378&x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MAX;
	int64_t x383 = INT64_MAX;
	int32_t t95 = 0;

	t95 = ((x381&(x382&x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 5615864;
	int16_t x386 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;
	int32_t t96 = -630;

	t96 = ((x385&(x386&x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x391 = INT64_MIN;
	int16_t x392 = -48;
	volatile int32_t t97 = -830400248;

	t97 = ((x389&(x390&x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MIN;
	int64_t x394 = -8716164LL;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t98 = 106045;

	t98 = ((x393&(x394&x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 30U;
	static uint64_t x398 = 92180794LLU;
	uint64_t x399 = 461590608485037084LLU;
	static int32_t x400 = -1;
	volatile int32_t t99 = 580383;

	t99 = ((x397&(x398&x399))<=x400);

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

