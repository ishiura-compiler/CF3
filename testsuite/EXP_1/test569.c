#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1;
int32_t x7 = INT32_MAX;
volatile int32_t t5 = -37107640;
static int32_t x30 = 15;
static volatile uint16_t x31 = 53U;
int8_t x33 = INT8_MIN;
int32_t x39 = INT32_MIN;
volatile int64_t x49 = -1LL;
int32_t x57 = INT32_MIN;
int16_t x58 = INT16_MIN;
static int64_t x62 = INT64_MIN;
uint64_t x63 = UINT64_MAX;
uint64_t x77 = 328310507LLU;
volatile uint8_t x79 = 13U;
static int32_t x80 = INT32_MAX;
volatile int8_t x85 = INT8_MIN;
int64_t x91 = INT64_MIN;
uint32_t x94 = UINT32_MAX;
volatile uint16_t x99 = 3U;
int32_t t26 = 36;
int8_t x117 = INT8_MIN;
uint8_t x120 = 2U;
int32_t t27 = -14161;
int16_t x124 = INT16_MIN;
int32_t t29 = -1;
volatile int32_t t30 = -3451536;
int32_t x138 = INT32_MAX;
int8_t x152 = -1;
static int64_t x153 = -322715LL;
volatile int32_t t35 = -182060587;
int8_t x157 = 0;
int32_t x162 = -1;
volatile int32_t t37 = -38;
volatile int32_t x167 = INT32_MIN;
int16_t x169 = -5;
uint8_t x171 = 5U;
int8_t x178 = 3;
uint32_t x184 = 222497U;
int64_t x187 = 1857214178069LL;
int8_t x214 = INT8_MAX;
volatile int32_t t49 = -3944;
uint32_t x219 = 5717602U;
int32_t t50 = -33;
volatile uint32_t x221 = 33105515U;
static int8_t x226 = INT8_MAX;
uint16_t x227 = 15855U;
volatile int8_t x228 = 32;
static uint16_t x236 = 0U;
int32_t t54 = 382200502;
static int8_t x243 = INT8_MAX;
volatile uint8_t x245 = UINT8_MAX;
uint32_t x246 = 170398165U;
int64_t x262 = -1LL;
volatile int32_t t63 = -349357055;
volatile int16_t x274 = INT16_MAX;
static int16_t x275 = 1;
int8_t x290 = INT8_MIN;
volatile int32_t t68 = 3165189;
static uint8_t x314 = 3U;
volatile int8_t x322 = INT8_MIN;
int32_t x324 = INT32_MIN;
uint32_t x330 = UINT32_MAX;
int8_t x337 = INT8_MAX;
int32_t x338 = INT32_MIN;
int8_t x339 = INT8_MAX;
int16_t x342 = -1;
uint16_t x343 = UINT16_MAX;
int8_t x369 = INT8_MAX;
volatile uint64_t x373 = 71666859757LLU;
static uint8_t x374 = 25U;
uint32_t x378 = 249952781U;
uint16_t x392 = 3625U;
volatile int16_t x396 = 7099;
int32_t x401 = -1;
volatile int32_t t92 = 203;
int64_t x413 = -15651329617LL;
int32_t x421 = INT32_MIN;
int32_t x423 = INT32_MIN;
uint64_t x424 = 142445040966666883LLU;
volatile uint64_t x425 = UINT64_MAX;
int64_t x429 = -159796687LL;
int32_t x430 = INT32_MAX;


void f0(void) {
	int16_t x1 = -12477;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	uint64_t x4 = 14085107138LLU;

	t0 = (((x1/x2)%x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int64_t x6 = INT64_MAX;
	static uint8_t x8 = 15U;
	int32_t t1 = -13128;

	t1 = (((x5/x6)%x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = 717868U;
	int16_t x15 = 1790;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = 330;

	t2 = (((x13/x14)%x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MIN;
	static volatile int64_t x20 = -47242LL;
	volatile int32_t t3 = -138944084;

	t3 = (((x17/x18)%x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = UINT32_MAX;
	static volatile uint8_t x22 = UINT8_MAX;
	volatile int32_t x23 = -1;
	int64_t x24 = INT64_MAX;
	int32_t t4 = -5232472;

	t4 = (((x21/x22)%x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	volatile uint8_t x26 = 1U;
	static int64_t x27 = -1LL;
	volatile int16_t x28 = 2946;

	t5 = (((x25/x26)%x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 2445U;
	static int64_t x32 = -1LL;
	volatile int32_t t6 = 1;

	t6 = (((x29/x30)%x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = -3664470LL;
	int16_t x35 = 13;
	static int8_t x36 = INT8_MIN;
	int32_t t7 = 20999;

	t7 = (((x33/x34)%x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 80U;
	int8_t x38 = INT8_MAX;
	int64_t x40 = -1LL;
	volatile int32_t t8 = -125172;

	t8 = (((x37/x38)%x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -8337288430106LL;
	static uint8_t x42 = 2U;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = 130LLU;
	static volatile int32_t t9 = 2922;

	t9 = (((x41/x42)%x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int8_t x48 = -2;
	int32_t t10 = -50816;

	t10 = (((x45/x46)%x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x50 = 479U;
	static int64_t x51 = INT64_MIN;
	static int8_t x52 = INT8_MAX;
	static volatile int32_t t11 = 4950260;

	t11 = (((x49/x50)%x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	volatile int32_t x54 = -1;
	uint16_t x55 = UINT16_MAX;
	static int16_t x56 = INT16_MIN;
	static volatile int32_t t12 = -1;

	t12 = (((x53/x54)%x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x59 = -2;
	static volatile int32_t x60 = INT32_MAX;
	int32_t t13 = 31780491;

	t13 = (((x57/x58)%x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	volatile int16_t x64 = 4295;
	static int32_t t14 = -40;

	t14 = (((x61/x62)%x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 201347674LL;
	uint16_t x70 = 7U;
	int16_t x71 = INT16_MIN;
	int32_t x72 = -7994838;
	volatile int32_t t15 = -13;

	t15 = (((x69/x70)%x71)<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = -96;
	static volatile int32_t t16 = -2533641;

	t16 = (((x73/x74)%x75)<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x78 = INT32_MIN;
	volatile int32_t t17 = 63;

	t17 = (((x77/x78)%x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 1U;
	int32_t x82 = -94143397;
	static int8_t x83 = 9;
	int32_t x84 = INT32_MIN;
	volatile int32_t t18 = -169817175;

	t18 = (((x81/x82)%x83)<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = -1;
	volatile int32_t t19 = -260175687;

	t19 = (((x85/x86)%x87)<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -49;
	int16_t x90 = -338;
	uint32_t x92 = 58U;
	int32_t t20 = -6;

	t20 = (((x89/x90)%x91)<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int32_t x95 = INT32_MIN;
	int64_t x96 = 860442LL;
	int32_t t21 = -165586;

	t21 = (((x93/x94)%x95)<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -33204540;
	int64_t x98 = INT64_MIN;
	uint32_t x100 = 11U;
	int32_t t22 = -15;

	t22 = (((x97/x98)%x99)<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = -3;
	volatile int8_t x102 = INT8_MAX;
	static int64_t x103 = -1LL;
	static volatile int16_t x104 = INT16_MIN;
	volatile int32_t t23 = 3634409;

	t23 = (((x101/x102)%x103)<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = -1;
	uint8_t x107 = 1U;
	uint32_t x108 = UINT32_MAX;
	int32_t t24 = -18;

	t24 = (((x105/x106)%x107)<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	uint32_t x110 = 268042U;
	uint32_t x111 = 2194062U;
	int8_t x112 = 4;
	volatile int32_t t25 = 2899;

	t25 = (((x109/x110)%x111)<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = 20;
	uint32_t x115 = 2321166U;
	uint64_t x116 = 110147905128410LLU;

	t26 = (((x113/x114)%x115)<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = -1;
	int32_t x119 = 3;

	t27 = (((x117/x118)%x119)<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MIN;
	int32_t t28 = 898;

	t28 = (((x121/x122)%x123)<=x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = 57197;
	static int8_t x126 = INT8_MAX;
	int16_t x127 = INT16_MAX;
	static uint8_t x128 = UINT8_MAX;

	t29 = (((x125/x126)%x127)<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x133 = 11U;
	volatile uint32_t x134 = 22U;
	volatile int32_t x135 = INT32_MIN;
	volatile int32_t x136 = INT32_MIN;

	t30 = (((x133/x134)%x135)<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	int8_t x139 = -10;
	int8_t x140 = -1;
	static volatile int32_t t31 = 2044;

	t31 = (((x137/x138)%x139)<=x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x141 = 40U;
	uint64_t x142 = UINT64_MAX;
	static uint64_t x143 = UINT64_MAX;
	uint64_t x144 = 75340649864638327LLU;
	int32_t t32 = 590;

	t32 = (((x141/x142)%x143)<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MAX;
	uint64_t x147 = UINT64_MAX;
	uint32_t x148 = 35138U;
	static int32_t t33 = 16692;

	t33 = (((x145/x146)%x147)<=x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = -1;
	static int16_t x150 = INT16_MIN;
	uint64_t x151 = 4098382325LLU;
	int32_t t34 = -93;

	t34 = (((x149/x150)%x151)<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x154 = INT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = -60;

	t35 = (((x153/x154)%x155)<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x158 = 1U;
	static int64_t x159 = INT64_MIN;
	int64_t x160 = 62983LL;
	volatile int32_t t36 = 1;

	t36 = (((x157/x158)%x159)<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x161 = INT32_MAX;
	uint8_t x163 = 63U;
	uint32_t x164 = UINT32_MAX;

	t37 = (((x161/x162)%x163)<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = INT32_MIN;
	int64_t x168 = 7220LL;
	int32_t t38 = -64599295;

	t38 = (((x165/x166)%x167)<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x170 = INT16_MAX;
	uint16_t x172 = 83U;
	volatile int32_t t39 = -411;

	t39 = (((x169/x170)%x171)<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x173 = -1;
	uint8_t x174 = 53U;
	int16_t x175 = -30;
	volatile int8_t x176 = INT8_MAX;
	int32_t t40 = 1;

	t40 = (((x173/x174)%x175)<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = -32;
	static int64_t x179 = INT64_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t41 = 107995262;

	t41 = (((x177/x178)%x179)<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	static int16_t x182 = -1;
	uint64_t x183 = 26296029884206007LLU;
	static volatile int32_t t42 = -7;

	t42 = (((x181/x182)%x183)<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = INT64_MIN;
	int16_t x186 = INT16_MAX;
	static int8_t x188 = INT8_MAX;
	static volatile int32_t t43 = -63810;

	t43 = (((x185/x186)%x187)<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = INT8_MIN;
	uint64_t x190 = 111841106693814LLU;
	int64_t x191 = INT64_MIN;
	static volatile int32_t x192 = INT32_MAX;
	int32_t t44 = 97681755;

	t44 = (((x189/x190)%x191)<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = 27;
	uint8_t x194 = 21U;
	static volatile uint8_t x195 = UINT8_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t45 = -6;

	t45 = (((x193/x194)%x195)<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 1U;
	int64_t x198 = -1LL;
	static volatile uint32_t x199 = 9U;
	volatile int64_t x200 = INT64_MIN;
	int32_t t46 = 142276;

	t46 = (((x197/x198)%x199)<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 0U;
	int16_t x202 = -5307;
	int64_t x203 = -3829210LL;
	int8_t x204 = -1;
	int32_t t47 = -186;

	t47 = (((x201/x202)%x203)<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MIN;
	volatile uint32_t x210 = 11428751U;
	static uint16_t x211 = UINT16_MAX;
	int8_t x212 = 7;
	volatile int32_t t48 = 12415;

	t48 = (((x209/x210)%x211)<=x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	int16_t x216 = 155;

	t49 = (((x213/x214)%x215)<=x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 211U;
	volatile int64_t x218 = INT64_MIN;
	int32_t x220 = -1;

	t50 = (((x217/x218)%x219)<=x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x222 = UINT64_MAX;
	static volatile int64_t x223 = INT64_MAX;
	uint16_t x224 = 6610U;
	int32_t t51 = -5166;

	t51 = (((x221/x222)%x223)<=x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = INT32_MAX;
	int32_t t52 = 257036504;

	t52 = (((x225/x226)%x227)<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	static int64_t x231 = INT64_MAX;
	int64_t x232 = INT64_MAX;
	int32_t t53 = -2;

	t53 = (((x229/x230)%x231)<=x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = UINT8_MAX;
	volatile uint8_t x234 = 34U;
	int16_t x235 = 336;

	t54 = (((x233/x234)%x235)<=x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	static uint32_t x239 = 1429463549U;
	int8_t x240 = 1;
	volatile int32_t t55 = -1863871;

	t55 = (((x237/x238)%x239)<=x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x241 = 2708874U;
	int32_t x242 = -211;
	uint16_t x244 = UINT16_MAX;
	static int32_t t56 = -15690588;

	t56 = (((x241/x242)%x243)<=x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x247 = -1;
	int32_t x248 = 513;
	int32_t t57 = 149322;

	t57 = (((x245/x246)%x247)<=x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = 1;
	uint16_t x250 = 218U;
	volatile int64_t x251 = INT64_MIN;
	volatile uint32_t x252 = 272U;
	volatile int32_t t58 = 60;

	t58 = (((x249/x250)%x251)<=x252);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x253 = 61740U;
	volatile uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 10606589205LLU;
	int8_t x256 = INT8_MIN;
	int32_t t59 = -3835614;

	t59 = (((x253/x254)%x255)<=x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	int32_t x260 = 1199025;
	int32_t t60 = 59;

	t60 = (((x257/x258)%x259)<=x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = 139LL;
	uint64_t x263 = 1011572LLU;
	int32_t x264 = INT32_MIN;
	int32_t t61 = -288047099;

	t61 = (((x261/x262)%x263)<=x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x265 = 99212U;
	static int32_t x266 = INT32_MAX;
	uint16_t x267 = UINT16_MAX;
	int64_t x268 = -53LL;
	volatile int32_t t62 = -55;

	t62 = (((x265/x266)%x267)<=x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 10U;
	uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = 3267;
	uint16_t x272 = 348U;

	t63 = (((x269/x270)%x271)<=x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x276 = 59667768553LLU;
	static int32_t t64 = -940081;

	t64 = (((x273/x274)%x275)<=x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	uint32_t x278 = 77U;
	uint32_t x279 = 1174U;
	int8_t x280 = -1;
	int32_t t65 = 25628284;

	t65 = (((x277/x278)%x279)<=x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 21203639U;
	int64_t x282 = INT64_MIN;
	static volatile uint64_t x283 = UINT64_MAX;
	volatile int16_t x284 = INT16_MIN;
	static int32_t t66 = -30;

	t66 = (((x281/x282)%x283)<=x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 467120139909939159LLU;
	int64_t x291 = -712908232017207050LL;
	static int8_t x292 = INT8_MAX;
	static volatile int32_t t67 = 5;

	t67 = (((x289/x290)%x291)<=x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = 39;
	static volatile uint32_t x294 = 5023U;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = UINT16_MAX;

	t68 = (((x293/x294)%x295)<=x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = 4938437922454575262LLU;
	uint8_t x298 = UINT8_MAX;
	static int32_t x299 = -1;
	int16_t x300 = INT16_MAX;
	volatile int32_t t69 = 1;

	t69 = (((x297/x298)%x299)<=x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x305 = 801545270U;
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MAX;
	uint32_t x308 = 254U;
	int32_t t70 = 216;

	t70 = (((x305/x306)%x307)<=x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = 6092;
	uint8_t x310 = 91U;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = -1;
	int32_t t71 = 367501;

	t71 = (((x309/x310)%x311)<=x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = UINT32_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	int64_t x316 = 22363475089LL;
	volatile int32_t t72 = -516;

	t72 = (((x313/x314)%x315)<=x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x317 = 402U;
	int64_t x318 = -70219656451050847LL;
	uint8_t x319 = 1U;
	static int8_t x320 = INT8_MAX;
	int32_t t73 = -44628826;

	t73 = (((x317/x318)%x319)<=x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x321 = -1LL;
	int16_t x323 = -70;
	int32_t t74 = 9;

	t74 = (((x321/x322)%x323)<=x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x325 = 1U;
	int64_t x326 = INT64_MIN;
	int16_t x327 = 1;
	int64_t x328 = INT64_MAX;
	static int32_t t75 = 3333;

	t75 = (((x325/x326)%x327)<=x328);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x329 = -1;
	int16_t x331 = -17;
	uint64_t x332 = 1656725425383LLU;
	int32_t t76 = 150857;

	t76 = (((x329/x330)%x331)<=x332);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x333 = INT8_MIN;
	uint64_t x334 = 581LLU;
	volatile int32_t x335 = INT32_MIN;
	int8_t x336 = -5;
	int32_t t77 = -50;

	t77 = (((x333/x334)%x335)<=x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x340 = -1;
	volatile int32_t t78 = -870278;

	t78 = (((x337/x338)%x339)<=x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -1746825789656592LL;
	uint32_t x344 = 1011U;
	volatile int32_t t79 = -8846;

	t79 = (((x341/x342)%x343)<=x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x349 = INT8_MAX;
	volatile int16_t x350 = 1;
	int16_t x351 = INT16_MAX;
	uint8_t x352 = 0U;
	int32_t t80 = -527246;

	t80 = (((x349/x350)%x351)<=x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = 1U;
	int16_t x354 = -1;
	static uint64_t x355 = 5LLU;
	volatile int16_t x356 = -1;
	int32_t t81 = 16075;

	t81 = (((x353/x354)%x355)<=x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	volatile uint32_t x360 = UINT32_MAX;
	volatile int32_t t82 = -13757026;

	t82 = (((x357/x358)%x359)<=x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x361 = INT64_MIN;
	static int32_t x362 = 6715707;
	static int8_t x363 = -1;
	volatile int8_t x364 = -1;
	volatile int32_t t83 = -242;

	t83 = (((x361/x362)%x363)<=x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	static volatile uint16_t x368 = UINT16_MAX;
	int32_t t84 = -371;

	t84 = (((x365/x366)%x367)<=x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x370 = -1;
	uint64_t x371 = 2481643LLU;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t85 = -587500786;

	t85 = (((x369/x370)%x371)<=x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x375 = -1;
	volatile int32_t x376 = INT32_MIN;
	volatile int32_t t86 = -85822;

	t86 = (((x373/x374)%x375)<=x376);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x377 = -1;
	uint8_t x379 = UINT8_MAX;
	uint64_t x380 = 125LLU;
	static int32_t t87 = -99048;

	t87 = (((x377/x378)%x379)<=x380);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = INT8_MIN;
	int16_t x386 = -1;
	int16_t x387 = -95;
	uint16_t x388 = 2629U;
	volatile int32_t t88 = 21735909;

	t88 = (((x385/x386)%x387)<=x388);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -1;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = INT16_MIN;
	int32_t t89 = 10;

	t89 = (((x389/x390)%x391)<=x392);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x393 = INT32_MIN;
	static uint64_t x394 = 23749177LLU;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t90 = -1000;

	t90 = (((x393/x394)%x395)<=x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -2;
	int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 4U;
	volatile int32_t t91 = -1146;

	t91 = (((x397/x398)%x399)<=x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x402 = 225493548LLU;
	volatile int64_t x403 = -328LL;
	int16_t x404 = INT16_MIN;

	t92 = (((x401/x402)%x403)<=x404);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = INT32_MAX;
	static uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = -1;
	int64_t x408 = INT64_MIN;
	volatile int32_t t93 = -22;

	t93 = (((x405/x406)%x407)<=x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MAX;
	int64_t x411 = -5174LL;
	int8_t x412 = INT8_MIN;
	volatile int32_t t94 = -420734728;

	t94 = (((x409/x410)%x411)<=x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x414 = -21121931652855576LL;
	int16_t x415 = INT16_MAX;
	static int32_t x416 = -1;
	int32_t t95 = 196139;

	t95 = (((x413/x414)%x415)<=x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = INT16_MIN;
	volatile uint16_t x418 = UINT16_MAX;
	int8_t x419 = INT8_MAX;
	int16_t x420 = -46;
	volatile int32_t t96 = -8120316;

	t96 = (((x417/x418)%x419)<=x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x422 = INT16_MAX;
	volatile int32_t t97 = -477;

	t97 = (((x421/x422)%x423)<=x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x426 = UINT16_MAX;
	int8_t x427 = 50;
	int8_t x428 = -1;
	volatile int32_t t98 = 19099714;

	t98 = (((x425/x426)%x427)<=x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x431 = 504149864LL;
	int64_t x432 = INT64_MIN;
	static int32_t t99 = -128287045;

	t99 = (((x429/x430)%x431)<=x432);

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

