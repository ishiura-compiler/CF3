#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 1U;
static int32_t t1 = 53600651;
volatile uint16_t x20 = 18818U;
static int32_t t3 = 41;
uint8_t x24 = 0U;
volatile int8_t x33 = -2;
int8_t x34 = 23;
volatile int32_t t6 = -20543089;
uint8_t x41 = UINT8_MAX;
static int16_t x46 = -1;
int16_t x47 = INT16_MAX;
int32_t x57 = -1;
static uint16_t x62 = UINT16_MAX;
static uint8_t x67 = 0U;
int16_t x73 = 7;
static volatile uint32_t t16 = 869548U;
volatile uint8_t x81 = UINT8_MAX;
int64_t x82 = 24154103661391LL;
int16_t x85 = INT16_MIN;
static volatile int32_t t18 = 292648;
static int32_t x90 = -1;
volatile int16_t x91 = INT16_MAX;
volatile int32_t t19 = -4331;
volatile int32_t x97 = INT32_MAX;
static int32_t x100 = INT32_MIN;
int16_t x102 = -1;
uint8_t x105 = 1U;
int32_t x107 = 0;
int16_t x113 = INT16_MAX;
volatile int32_t x126 = -1;
int64_t x127 = -7637846724LL;
volatile int64_t x128 = INT64_MAX;
uint32_t t28 = 30U;
int32_t t29 = -48;
int8_t x149 = INT8_MIN;
uint8_t x152 = UINT8_MAX;
static uint32_t x159 = UINT32_MAX;
int32_t x162 = -1;
int8_t x165 = INT8_MAX;
static int64_t x169 = -4LL;
int8_t x186 = 6;
uint32_t x201 = 41198U;
int32_t x202 = 1;
uint8_t x206 = 2U;
static int32_t t42 = -30256;
volatile int64_t x225 = -2380619LL;
int64_t x232 = -29123777922478LL;
static volatile int64_t t46 = -2222757162184613821LL;
int32_t x236 = -438;
int32_t t47 = -3666334;
volatile uint64_t x238 = 5081129123838413832LLU;
int16_t x244 = INT16_MAX;
int32_t t49 = -193;
int32_t x246 = INT32_MAX;
volatile uint16_t x268 = 645U;
static int32_t x269 = -3899;
volatile int32_t t54 = 1397;
volatile int16_t x274 = INT16_MIN;
static int32_t x275 = -1;
uint32_t x283 = 12U;
volatile uint64_t x285 = 32LLU;
volatile int16_t x290 = INT16_MIN;
int8_t x291 = 3;
uint8_t x297 = 86U;
int32_t x312 = 948889433;
static int32_t x316 = -1;
volatile int64_t x320 = INT64_MAX;
static volatile uint16_t x325 = 13U;
uint64_t x329 = 154215LLU;
volatile int64_t x330 = INT64_MAX;
volatile int32_t t66 = 126755;
volatile uint64_t t67 = 215488333675LLU;
int32_t x355 = INT32_MIN;
int32_t x358 = -1;
uint8_t x359 = 20U;
uint8_t x360 = 115U;
static uint64_t x364 = 27930297820LLU;
volatile int32_t t72 = 6570587;
static int8_t x371 = INT8_MIN;
uint16_t x378 = 2782U;
volatile int64_t x379 = INT64_MIN;
uint64_t x380 = UINT64_MAX;
int64_t x388 = INT64_MIN;
int8_t x394 = 1;
volatile int32_t x409 = -1;
int8_t x424 = INT8_MAX;
static uint16_t x427 = 3289U;
int32_t x428 = -1;
volatile int32_t x451 = INT32_MIN;
uint8_t x454 = 1U;
volatile int64_t t90 = -41259LL;
int16_t x457 = -2;
static int16_t x458 = INT16_MAX;
uint64_t x459 = 739322741465295259LLU;
static uint16_t x460 = 1376U;
uint64_t x461 = UINT64_MAX;
volatile int32_t x467 = 43832713;
uint64_t x468 = UINT64_MAX;
int32_t x484 = INT32_MIN;
static volatile int8_t x490 = INT8_MAX;
uint64_t x491 = UINT64_MAX;
int32_t x495 = INT32_MIN;


void f0(void) {
	uint64_t x2 = 1110340697660LLU;
	uint32_t x3 = 458U;
	uint16_t x4 = 1U;
	volatile int32_t t0 = 1859750;

	t0 = (((x1*x2)<=x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint16_t x6 = 1396U;
	uint64_t x7 = 29LLU;
	int8_t x8 = 1;

	t1 = (((x5*x6)<=x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 1882471290807LL;
	volatile uint8_t x10 = 89U;
	int16_t x11 = INT16_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 1601;

	t2 = (((x9*x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 1155U;
	volatile int16_t x18 = -1;
	int32_t x19 = 29697099;

	t3 = (((x17*x18)<=x19)&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MAX;
	int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	volatile int32_t t4 = -127;

	t4 = (((x21*x22)<=x23)&x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -11816254;
	int16_t x26 = -1;
	static volatile uint64_t x27 = UINT64_MAX;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t5 = 27362;

	t5 = (((x25*x26)<=x27)&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x35 = 165;
	int32_t x36 = INT32_MAX;

	t6 = (((x33*x34)<=x35)&x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 55U;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = -127222LL;
	volatile uint32_t x40 = 16811213U;
	static uint32_t t7 = 0U;

	t7 = (((x37*x38)<=x39)&x40);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x42 = -4;
	static volatile int16_t x43 = -1;
	volatile int64_t x44 = 7819191602LL;
	volatile int64_t t8 = -287LL;

	t8 = (((x41*x42)<=x43)&x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 0;
	static uint64_t x48 = 8924639895869552246LLU;
	uint64_t t9 = 2096LLU;

	t9 = (((x45*x46)<=x47)&x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int64_t x50 = INT64_MAX;
	int32_t x51 = INT32_MIN;
	volatile int64_t x52 = INT64_MIN;
	volatile int64_t t10 = 7668169637865LL;

	t10 = (((x49*x50)<=x51)&x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -54;
	static uint8_t x54 = UINT8_MAX;
	volatile int16_t x55 = INT16_MIN;
	volatile uint32_t x56 = 61817U;
	volatile uint32_t t11 = 4153653U;

	t11 = (((x53*x54)<=x55)&x56);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x58 = -398;
	static uint32_t x59 = 31595U;
	volatile int8_t x60 = INT8_MIN;
	int32_t t12 = -429925711;

	t12 = (((x57*x58)<=x59)&x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int8_t x63 = -1;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t13 = -2;

	t13 = (((x61*x62)<=x63)&x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	static int8_t x66 = INT8_MAX;
	uint32_t x68 = 76U;
	static uint32_t t14 = 102U;

	t14 = (((x65*x66)<=x67)&x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 52;
	int8_t x70 = 0;
	int64_t x71 = 357LL;
	int32_t x72 = -26;
	int32_t t15 = 24814;

	t15 = (((x69*x70)<=x71)&x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = -1;
	uint16_t x75 = 232U;
	uint32_t x76 = UINT32_MAX;

	t16 = (((x73*x74)<=x75)&x76);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 8457337402097LLU;
	static uint64_t t17 = 370LLU;

	t17 = (((x81*x82)<=x83)&x84);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x86 = -2326891276167LL;
	int16_t x87 = -1;
	int32_t x88 = 657063;

	t18 = (((x85*x86)<=x87)&x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -487;
	int8_t x92 = -1;

	t19 = (((x89*x90)<=x91)&x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = 46302U;
	int8_t x99 = INT8_MIN;
	int32_t t20 = -492711714;

	t20 = (((x97*x98)<=x99)&x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -6;
	int16_t x103 = -1;
	static uint16_t x104 = 30608U;
	int32_t t21 = 30948;

	t21 = (((x101*x102)<=x103)&x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t22 = 1;

	t22 = (((x105*x106)<=x107)&x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = UINT64_MAX;
	static int8_t x110 = INT8_MIN;
	uint16_t x111 = 19154U;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t23 = 36409740;

	t23 = (((x109*x110)<=x111)&x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x114 = -7911;
	int16_t x115 = INT16_MIN;
	int8_t x116 = 1;
	volatile int32_t t24 = -155948;

	t24 = (((x113*x114)<=x115)&x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 748U;
	uint32_t x118 = 2218844U;
	int64_t x119 = INT64_MAX;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t25 = 51422526U;

	t25 = (((x117*x118)<=x119)&x120);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -55;
	int32_t x122 = 20;
	int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t26 = 44232155888LL;

	t26 = (((x121*x122)<=x123)&x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = -1;
	int64_t t27 = -7574366020LL;

	t27 = (((x125*x126)<=x127)&x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -29;
	int16_t x134 = -1;
	int8_t x135 = INT8_MIN;
	static uint32_t x136 = 255763477U;

	t28 = (((x133*x134)<=x135)&x136);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	static int16_t x139 = 2;
	uint8_t x140 = 4U;

	t29 = (((x137*x138)<=x139)&x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	volatile int64_t x142 = INT64_MAX;
	int16_t x143 = 153;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t30 = 130804596U;

	t30 = (((x141*x142)<=x143)&x144);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = INT32_MIN;
	volatile int32_t t31 = -14939;

	t31 = (((x149*x150)<=x151)&x152);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 90U;
	uint32_t x154 = 10591U;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = 6946U;
	int32_t t32 = -63439360;

	t32 = (((x153*x154)<=x155)&x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 20787329644574LLU;
	static volatile int64_t x160 = INT64_MIN;
	volatile int64_t t33 = -699407LL;

	t33 = (((x157*x158)<=x159)&x160);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MAX;
	volatile int32_t t34 = -262655638;

	t34 = (((x161*x162)<=x163)&x164);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x166 = UINT16_MAX;
	volatile int32_t x167 = -192;
	int64_t x168 = -1LL;
	volatile int64_t t35 = 333659280LL;

	t35 = (((x165*x166)<=x167)&x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x170 = -1;
	int16_t x171 = 1;
	volatile uint64_t x172 = 6347804574500479LLU;
	volatile uint64_t t36 = 39LLU;

	t36 = (((x169*x170)<=x171)&x172);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x173 = 352646U;
	uint64_t x174 = 867052306LLU;
	uint8_t x175 = 16U;
	static volatile int32_t x176 = INT32_MIN;
	volatile int32_t t37 = 6303913;

	t37 = (((x173*x174)<=x175)&x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MAX;
	static int16_t x178 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;
	static volatile uint64_t x180 = 4840450LLU;
	volatile uint64_t t38 = 21898433930LLU;

	t38 = (((x177*x178)<=x179)&x180);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = 51;
	volatile int32_t x183 = -412674;
	int64_t x184 = -237LL;
	static int64_t t39 = 3740679252874LL;

	t39 = (((x181*x182)<=x183)&x184);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = -1;
	uint16_t x187 = 8373U;
	uint16_t x188 = 144U;
	static volatile int32_t t40 = 22225925;

	t40 = (((x185*x186)<=x187)&x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x203 = INT64_MIN;
	int16_t x204 = 178;
	static volatile int32_t t41 = -1;

	t41 = (((x201*x202)<=x203)&x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MAX;
	uint32_t x207 = 81248U;
	volatile int8_t x208 = INT8_MIN;

	t42 = (((x205*x206)<=x207)&x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = 60;
	uint8_t x210 = 4U;
	int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;
	int32_t t43 = -1;

	t43 = (((x209*x210)<=x211)&x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = 1;
	int16_t x215 = -1;
	int16_t x216 = INT16_MAX;
	volatile int32_t t44 = 48;

	t44 = (((x213*x214)<=x215)&x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x226 = UINT64_MAX;
	int64_t x227 = -1LL;
	uint32_t x228 = 67U;
	volatile uint32_t t45 = 8351638U;

	t45 = (((x225*x226)<=x227)&x228);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = -1LL;
	int8_t x230 = -3;
	volatile int64_t x231 = -387057139163350LL;

	t46 = (((x229*x230)<=x231)&x232);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -1;
	uint32_t x234 = 65U;
	int16_t x235 = 6;

	t47 = (((x233*x234)<=x235)&x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x237 = 26U;
	static int16_t x239 = -1;
	int64_t x240 = INT64_MIN;
	int64_t t48 = -9138458LL;

	t48 = (((x237*x238)<=x239)&x240);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x241 = -1;
	uint64_t x242 = 3511562927415LLU;
	int16_t x243 = INT16_MIN;

	t49 = (((x241*x242)<=x243)&x244);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x245 = 124219LLU;
	volatile int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t50 = 694;

	t50 = (((x245*x246)<=x247)&x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 8U;
	volatile int32_t x251 = 6185876;
	static int64_t x252 = INT64_MAX;
	int64_t t51 = 133815805593446127LL;

	t51 = (((x249*x250)<=x251)&x252);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = INT8_MIN;
	volatile int8_t x262 = -1;
	static volatile int64_t x263 = -586026265033497LL;
	int32_t x264 = -1;
	int32_t t52 = -1395;

	t52 = (((x261*x262)<=x263)&x264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = -1;
	int32_t x266 = INT32_MAX;
	int64_t x267 = -1LL;
	volatile int32_t t53 = -17407;

	t53 = (((x265*x266)<=x267)&x268);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x270 = -1;
	uint16_t x271 = 23665U;
	uint8_t x272 = UINT8_MAX;

	t54 = (((x269*x270)<=x271)&x272);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x273 = 1011190636LLU;
	static uint16_t x276 = 58U;
	static volatile int32_t t55 = 252465814;

	t55 = (((x273*x274)<=x275)&x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x277 = -18524981366166870LL;
	uint8_t x278 = 0U;
	uint64_t x279 = UINT64_MAX;
	static uint64_t x280 = 21641681583529204LLU;
	static volatile uint64_t t56 = 134684213989LLU;

	t56 = (((x277*x278)<=x279)&x280);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x281 = INT8_MAX;
	uint16_t x282 = 342U;
	volatile uint32_t x284 = 24U;
	volatile uint32_t t57 = 15031626U;

	t57 = (((x281*x282)<=x283)&x284);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x286 = 7LLU;
	static int64_t x287 = INT64_MIN;
	uint16_t x288 = 13U;
	static volatile int32_t t58 = 790518;

	t58 = (((x285*x286)<=x287)&x288);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = -1LL;
	volatile uint16_t x292 = 299U;
	volatile int32_t t59 = 3693;

	t59 = (((x289*x290)<=x291)&x292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x293 = 310269U;
	int8_t x294 = -1;
	int8_t x295 = -9;
	int16_t x296 = 1;
	volatile int32_t t60 = -87809566;

	t60 = (((x293*x294)<=x295)&x296);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x298 = 23828LLU;
	uint64_t x299 = 18216289705847LLU;
	int64_t x300 = INT64_MAX;
	volatile int64_t t61 = -218929112367444LL;

	t61 = (((x297*x298)<=x299)&x300);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x309 = 85U;
	static uint8_t x310 = 77U;
	static int8_t x311 = INT8_MIN;
	int32_t t62 = 5779;

	t62 = (((x309*x310)<=x311)&x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x313 = UINT8_MAX;
	int32_t x314 = 546;
	uint64_t x315 = 5LLU;
	int32_t t63 = -64367;

	t63 = (((x313*x314)<=x315)&x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x317 = -1;
	uint16_t x318 = 0U;
	int64_t x319 = INT64_MIN;
	volatile int64_t t64 = -13882144876LL;

	t64 = (((x317*x318)<=x319)&x320);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x326 = 24;
	int8_t x327 = -1;
	static uint16_t x328 = 13U;
	int32_t t65 = -124;

	t65 = (((x325*x326)<=x327)&x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x331 = INT32_MIN;
	int8_t x332 = -1;

	t66 = (((x329*x330)<=x331)&x332);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int32_t x339 = 4;
	static uint64_t x340 = UINT64_MAX;

	t67 = (((x337*x338)<=x339)&x340);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MAX;
	volatile int32_t t68 = -7;

	t68 = (((x349*x350)<=x351)&x352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x353 = 421U;
	uint8_t x354 = 14U;
	int64_t x356 = INT64_MIN;
	static int64_t t69 = -90004629845424LL;

	t69 = (((x353*x354)<=x355)&x356);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = INT64_MAX;
	int32_t t70 = 1018;

	t70 = (((x357*x358)<=x359)&x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x361 = -239182LL;
	int16_t x362 = -1;
	static uint8_t x363 = 24U;
	volatile uint64_t t71 = 202799207744195448LLU;

	t71 = (((x361*x362)<=x363)&x364);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x365 = -1;
	static uint32_t x366 = 7665498U;
	volatile int64_t x367 = INT64_MAX;
	volatile uint16_t x368 = 7U;

	t72 = (((x365*x366)<=x367)&x368);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x369 = INT64_MAX;
	static int8_t x370 = 1;
	static int64_t x372 = -8874304281LL;
	volatile int64_t t73 = 20822LL;

	t73 = (((x369*x370)<=x371)&x372);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = -127845678LL;
	static volatile uint8_t x374 = 1U;
	static int8_t x375 = INT8_MIN;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t74 = 1627717U;

	t74 = (((x373*x374)<=x375)&x376);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = INT16_MIN;
	static volatile uint64_t t75 = 509670163686LLU;

	t75 = (((x377*x378)<=x379)&x380);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = 3819471LL;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = 287016324065694LL;
	static int8_t x384 = INT8_MIN;
	int32_t t76 = -1379562;

	t76 = (((x381*x382)<=x383)&x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = 10;
	volatile uint16_t x386 = 26302U;
	uint16_t x387 = UINT16_MAX;
	int64_t t77 = -9969474822461062LL;

	t77 = (((x385*x386)<=x387)&x388);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x389 = 15;
	volatile uint64_t x390 = 1419226841406155LLU;
	int8_t x391 = 52;
	uint32_t x392 = UINT32_MAX;
	uint32_t t78 = 54834041U;

	t78 = (((x389*x390)<=x391)&x392);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int8_t x395 = 3;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t79 = -720;

	t79 = (((x393*x394)<=x395)&x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = -1;
	static uint64_t x398 = 303713LLU;
	uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = INT8_MIN;
	int32_t t80 = -1894141;

	t80 = (((x397*x398)<=x399)&x400);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 175890U;
	int32_t x407 = 96;
	static uint16_t x408 = UINT16_MAX;
	volatile int32_t t81 = -963;

	t81 = (((x405*x406)<=x407)&x408);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x410 = 8772033LLU;
	uint16_t x411 = 1117U;
	uint64_t x412 = 12124451245LLU;
	uint64_t t82 = 8550682434982444LLU;

	t82 = (((x409*x410)<=x411)&x412);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MIN;
	static int32_t x419 = -1;
	volatile uint64_t x420 = 3796LLU;
	volatile uint64_t t83 = 3933142446LLU;

	t83 = (((x417*x418)<=x419)&x420);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x421 = INT16_MIN;
	static int16_t x422 = -1;
	volatile int16_t x423 = 2;
	int32_t t84 = 23376;

	t84 = (((x421*x422)<=x423)&x424);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x425 = INT16_MIN;
	static volatile int8_t x426 = INT8_MIN;
	volatile int32_t t85 = 0;

	t85 = (((x425*x426)<=x427)&x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x433 = INT8_MAX;
	uint16_t x434 = 3U;
	uint32_t x435 = UINT32_MAX;
	uint16_t x436 = 47U;
	int32_t t86 = 923360;

	t86 = (((x433*x434)<=x435)&x436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x437 = UINT64_MAX;
	volatile int8_t x438 = INT8_MIN;
	uint8_t x439 = 15U;
	int16_t x440 = INT16_MIN;
	int32_t t87 = -114508;

	t87 = (((x437*x438)<=x439)&x440);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x441 = 403U;
	int8_t x442 = INT8_MAX;
	int16_t x443 = -7;
	int32_t x444 = -7;
	int32_t t88 = 32633514;

	t88 = (((x441*x442)<=x443)&x444);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x449 = -2229395678014LL;
	uint8_t x450 = 2U;
	int8_t x452 = -1;
	int32_t t89 = -7505899;

	t89 = (((x449*x450)<=x451)&x452);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x453 = 3157898U;
	int8_t x455 = -1;
	int64_t x456 = INT64_MAX;

	t90 = (((x453*x454)<=x455)&x456);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t t91 = 0;

	t91 = (((x457*x458)<=x459)&x460);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	volatile int64_t x464 = -18LL;
	int64_t t92 = -5590LL;

	t92 = (((x461*x462)<=x463)&x464);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = 5U;
	int8_t x466 = -2;
	uint64_t t93 = 90531575LLU;

	t93 = (((x465*x466)<=x467)&x468);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x473 = 3699423412098555886LL;
	uint64_t x474 = 16LLU;
	uint32_t x475 = 29947473U;
	static int8_t x476 = -1;
	int32_t t94 = 30;

	t94 = (((x473*x474)<=x475)&x476);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x481 = -1;
	volatile int64_t x482 = -20LL;
	uint16_t x483 = 1U;
	int32_t t95 = 339;

	t95 = (((x481*x482)<=x483)&x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x485 = -3;
	static uint16_t x486 = UINT16_MAX;
	volatile int32_t x487 = INT32_MAX;
	uint16_t x488 = UINT16_MAX;
	static int32_t t96 = -1821;

	t96 = (((x485*x486)<=x487)&x488);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x489 = INT8_MIN;
	int16_t x492 = -1;
	volatile int32_t t97 = -3;

	t97 = (((x489*x490)<=x491)&x492);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x493 = -1LL;
	uint8_t x494 = UINT8_MAX;
	volatile int16_t x496 = INT16_MIN;
	int32_t t98 = 125;

	t98 = (((x493*x494)<=x495)&x496);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x497 = INT8_MAX;
	volatile uint16_t x498 = 6123U;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MIN;
	volatile int32_t t99 = 27;

	t99 = (((x497*x498)<=x499)&x500);

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

