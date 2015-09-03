#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 14853565858804LLU;
int64_t x6 = INT64_MIN;
int64_t x14 = -459779014751287138LL;
int8_t x16 = -1;
volatile uint8_t x35 = UINT8_MAX;
static uint64_t x37 = UINT64_MAX;
static int32_t t7 = -113088646;
static volatile int32_t t8 = -107;
uint64_t x54 = 12588987422934381LLU;
static int8_t x57 = -13;
int64_t x62 = 15757LL;
volatile uint64_t x76 = UINT64_MAX;
uint16_t x77 = UINT16_MAX;
static int16_t x81 = INT16_MIN;
volatile int16_t x84 = 2;
int64_t x86 = INT64_MAX;
int64_t x89 = INT64_MIN;
int32_t x90 = INT32_MIN;
int8_t x104 = 0;
volatile uint8_t x111 = UINT8_MAX;
int32_t x113 = INT32_MIN;
int64_t x114 = 25979840471567406LL;
int32_t t26 = 24;
uint8_t x130 = 67U;
int16_t x132 = 13;
uint16_t x133 = 2457U;
volatile int32_t t29 = 6713;
int32_t x149 = INT32_MAX;
uint16_t x151 = 1100U;
int64_t x155 = -909LL;
uint16_t x156 = 277U;
int32_t t32 = 32481;
uint32_t x161 = 1262U;
volatile int32_t t35 = 778;
static int8_t x174 = 15;
volatile int32_t t37 = 31416;
volatile int32_t t38 = -25015426;
volatile int32_t t40 = 86978;
int8_t x203 = 0;
int8_t x206 = INT8_MIN;
uint8_t x208 = 60U;
static int32_t x211 = -1;
uint16_t x214 = UINT16_MAX;
volatile int16_t x216 = INT16_MIN;
static int16_t x228 = -205;
volatile int32_t t49 = -120721;
volatile int32_t t50 = 224;
volatile int32_t t51 = -2286;
volatile uint16_t x244 = 0U;
int32_t t53 = -1575;
int16_t x254 = INT16_MIN;
int16_t x255 = INT16_MIN;
volatile int32_t t57 = 196;
int32_t t58 = 15190599;
int32_t x265 = INT32_MAX;
int16_t x269 = -1;
int16_t x271 = INT16_MIN;
uint32_t x275 = 53253527U;
int8_t x276 = INT8_MAX;
int32_t x281 = INT32_MIN;
volatile int32_t t63 = 29055;
volatile int32_t t64 = 1212326;
uint16_t x293 = 115U;
uint16_t x295 = 32450U;
int32_t t66 = -5;
int64_t x301 = INT64_MIN;
static int16_t x302 = -2;
static int16_t x310 = INT16_MIN;
uint16_t x314 = 18802U;
int32_t t71 = 22;
int64_t x323 = -1LL;
static int32_t t74 = -987793690;
uint16_t x339 = 0U;
volatile int32_t t76 = 545563704;
static int16_t x347 = INT16_MIN;
int8_t x350 = -1;
static int32_t x351 = -1;
static volatile int32_t t78 = -48536;
static uint8_t x356 = UINT8_MAX;
int16_t x357 = INT16_MAX;
uint8_t x358 = 28U;
volatile int32_t t80 = -34;
volatile int64_t x368 = INT64_MIN;
static int8_t x374 = INT8_MAX;
volatile int32_t x376 = INT32_MIN;
int32_t t83 = -95218801;
int32_t x377 = INT32_MIN;
uint8_t x385 = 4U;
uint64_t x405 = 1193808LLU;
uint16_t x417 = 1U;
uint64_t x424 = 507734795LLU;
volatile uint64_t x435 = UINT64_MAX;
volatile int16_t x438 = -1;
int16_t x441 = INT16_MIN;
uint8_t x445 = 119U;


void f0(void) {
	volatile int32_t x1 = 64;
	uint16_t x2 = 107U;
	int32_t x3 = -1;
	static volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -109909;

	t0 = ((x1&(x2-x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x7 = INT16_MIN;
	uint32_t x8 = 33193925U;
	int32_t t1 = -222;

	t1 = ((x5&(x6-x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 5LLU;
	int64_t x15 = 1LL;
	static int32_t t2 = -1780960;

	t2 = ((x13&(x14-x15))<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 0U;
	uint16_t x18 = 40U;
	int16_t x19 = 15;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 1094;

	t3 = ((x17&(x18-x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 2U;
	int16_t x22 = -80;
	int16_t x23 = -7;
	int32_t x24 = INT32_MIN;
	int32_t t4 = -3475;

	t4 = ((x21&(x22-x23))<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int64_t x26 = INT64_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 110U;
	volatile int32_t t5 = -1;

	t5 = ((x25&(x26-x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 129;
	int8_t x34 = INT8_MIN;
	uint8_t x36 = UINT8_MAX;
	static int32_t t6 = -105430;

	t6 = ((x33&(x34-x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x38 = INT16_MAX;
	int64_t x39 = 9LL;
	volatile uint64_t x40 = UINT64_MAX;

	t7 = ((x37&(x38-x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MAX;
	int64_t x42 = -1LL;
	int8_t x43 = 0;
	int64_t x44 = INT64_MAX;

	t8 = ((x41&(x42-x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 2LL;
	uint64_t x46 = 15030820670LLU;
	uint32_t x47 = 12U;
	int8_t x48 = 1;
	volatile int32_t t9 = -279181;

	t9 = ((x45&(x46-x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 22U;
	volatile int8_t x50 = 3;
	volatile int8_t x51 = -1;
	volatile uint8_t x52 = 3U;
	volatile int32_t t10 = 6384779;

	t10 = ((x49&(x50-x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 571;
	static int64_t x55 = 65122861446514367LL;
	int64_t x56 = INT64_MAX;
	volatile int32_t t11 = -638;

	t11 = ((x53&(x54-x55))<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MIN;
	static int32_t t12 = -329054245;

	t12 = ((x57&(x58-x59))<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MIN;
	static uint8_t x63 = 54U;
	int64_t x64 = 4089525886581LL;
	volatile int32_t t13 = -106;

	t13 = ((x61&(x62-x63))<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = 16303;
	static uint32_t x71 = 1U;
	int32_t x72 = INT32_MIN;
	volatile int32_t t14 = 1;

	t14 = ((x69&(x70-x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	static volatile int16_t x75 = 4;
	static volatile int32_t t15 = 133875397;

	t15 = ((x73&(x74-x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x78 = -1;
	volatile int32_t x79 = -184922;
	uint64_t x80 = 86525658841040LLU;
	volatile int32_t t16 = -1645;

	t16 = ((x77&(x78-x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	static volatile int32_t t17 = 6795;

	t17 = ((x81&(x82-x83))<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 1U;
	volatile uint8_t x87 = 0U;
	int8_t x88 = -1;
	int32_t t18 = 1778891;

	t18 = ((x85&(x86-x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x91 = 4497673U;
	uint16_t x92 = 14U;
	int32_t t19 = 25350023;

	t19 = ((x89&(x90-x91))<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t20 = -121;

	t20 = ((x93&(x94-x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MAX;
	uint64_t x102 = 1290322613LLU;
	uint16_t x103 = 428U;
	int32_t t21 = -540;

	t21 = ((x101&(x102-x103))<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = 5575;
	volatile int64_t x108 = INT64_MIN;
	int32_t t22 = -22509;

	t22 = ((x105&(x106-x107))<x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x109 = 86416U;
	volatile uint16_t x110 = 1U;
	static int32_t x112 = INT32_MIN;
	int32_t t23 = -2902597;

	t23 = ((x109&(x110-x111))<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t24 = 49355600;

	t24 = ((x113&(x114-x115))<x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = INT32_MAX;
	static volatile int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MAX;
	int32_t t25 = -2;

	t25 = ((x117&(x118-x119))<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = 3;
	uint16_t x122 = 5U;
	uint64_t x123 = 1858123795682783475LLU;
	uint16_t x124 = 5727U;

	t26 = ((x121&(x122-x123))<x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x129 = -1;
	volatile uint32_t x131 = UINT32_MAX;
	volatile int32_t t27 = 3;

	t27 = ((x129&(x130-x131))<x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x134 = INT32_MAX;
	volatile int32_t x135 = 31117;
	int16_t x136 = INT16_MAX;
	static int32_t t28 = 21067326;

	t28 = ((x133&(x134-x135))<x136);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = 31;
	int8_t x138 = -1;
	int16_t x139 = -7827;
	static int64_t x140 = INT64_MIN;

	t29 = ((x137&(x138-x139))<x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x141 = -1;
	static int64_t x142 = -16930LL;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -13605046021241972LL;
	int32_t t30 = 9540;

	t30 = ((x141&(x142-x143))<x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x150 = INT16_MAX;
	static int16_t x152 = -7123;
	volatile int32_t t31 = 0;

	t31 = ((x149&(x150-x151))<x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = 12;

	t32 = ((x153&(x154-x155))<x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 412858315LLU;
	int64_t x158 = 2886241LL;
	static int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t33 = -21;

	t33 = ((x157&(x158-x159))<x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	static volatile uint16_t x164 = 0U;
	int32_t t34 = -3;

	t34 = ((x161&(x162-x163))<x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x165 = -213262;
	uint64_t x166 = UINT64_MAX;
	static int32_t x167 = INT32_MAX;
	int8_t x168 = -1;

	t35 = ((x165&(x166-x167))<x168);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x169 = INT16_MIN;
	static uint64_t x170 = 3731581853329LLU;
	static uint32_t x171 = UINT32_MAX;
	volatile uint16_t x172 = 1U;
	int32_t t36 = 6;

	t36 = ((x169&(x170-x171))<x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = 0;
	volatile int64_t x175 = -28949127713289LL;
	int8_t x176 = 0;

	t37 = ((x173&(x174-x175))<x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x177 = -1;
	volatile uint8_t x178 = 31U;
	int32_t x179 = -44784;
	static int16_t x180 = 4;

	t38 = ((x177&(x178-x179))<x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MIN;
	static int32_t x183 = 3;
	int64_t x184 = INT64_MIN;
	int32_t t39 = -277303237;

	t39 = ((x181&(x182-x183))<x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = 3;
	static int8_t x187 = -1;
	int16_t x188 = -1;

	t40 = ((x185&(x186-x187))<x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	int16_t x191 = 13;
	static uint8_t x192 = 4U;
	volatile int32_t t41 = 331;

	t41 = ((x189&(x190-x191))<x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x193 = 8896139426LL;
	int32_t x194 = 580;
	int8_t x195 = -1;
	static int32_t x196 = -1;
	volatile int32_t t42 = 1;

	t42 = ((x193&(x194-x195))<x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -9;
	static int8_t x202 = -1;
	uint16_t x204 = UINT16_MAX;
	int32_t t43 = -70;

	t43 = ((x201&(x202-x203))<x204);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x205 = UINT64_MAX;
	uint32_t x207 = UINT32_MAX;
	int32_t t44 = 7;

	t44 = ((x205&(x206-x207))<x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = INT8_MIN;
	volatile uint32_t x210 = 15517U;
	int32_t x212 = INT32_MAX;
	volatile int32_t t45 = 10;

	t45 = ((x209&(x210-x211))<x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 6U;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t46 = 59;

	t46 = ((x213&(x214-x215))<x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -39;
	uint8_t x218 = 20U;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MAX;
	static int32_t t47 = -6134970;

	t47 = ((x217&(x218-x219))<x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x221 = INT16_MAX;
	int8_t x222 = INT8_MIN;
	volatile uint32_t x223 = 650263U;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t48 = -78;

	t48 = ((x221&(x222-x223))<x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	static uint64_t x227 = 164891189116865LLU;

	t49 = ((x225&(x226-x227))<x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	volatile uint16_t x230 = 24U;
	static int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;

	t50 = ((x229&(x230-x231))<x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = 3LLU;
	volatile int8_t x234 = 56;
	volatile int32_t x235 = 45607658;
	int64_t x236 = 11818202867269LL;

	t51 = ((x233&(x234-x235))<x236);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x237 = INT16_MAX;
	int16_t x238 = -46;
	int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t52 = 184;

	t52 = ((x237&(x238-x239))<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 15;
	static int16_t x242 = 253;
	int64_t x243 = -45246111LL;

	t53 = ((x241&(x242-x243))<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = 2;
	static volatile int64_t x246 = -500LL;
	int32_t x247 = 960274006;
	volatile uint16_t x248 = 89U;
	volatile int32_t t54 = 1;

	t54 = ((x245&(x246-x247))<x248);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t55 = 1168382;

	t55 = ((x249&(x250-x251))<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	int64_t x256 = -1LL;
	int32_t t56 = 15;

	t56 = ((x253&(x254-x255))<x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x257 = INT32_MAX;
	int32_t x258 = -19723;
	volatile int64_t x259 = -1LL;
	uint8_t x260 = UINT8_MAX;

	t57 = ((x257&(x258-x259))<x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = INT32_MIN;
	uint8_t x262 = 67U;
	static uint8_t x263 = 21U;
	int32_t x264 = -393;

	t58 = ((x261&(x262-x263))<x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x266 = 272401119426536LLU;
	uint32_t x267 = 1062467555U;
	volatile int8_t x268 = INT8_MAX;
	static volatile int32_t t59 = -31;

	t59 = ((x265&(x266-x267))<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x270 = UINT64_MAX;
	int16_t x272 = -6;
	static int32_t t60 = -257185;

	t60 = ((x269&(x270-x271))<x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int32_t x274 = 223154458;
	static int32_t t61 = -41788;

	t61 = ((x273&(x274-x275))<x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = 26190274558264LLU;
	uint16_t x278 = 415U;
	static volatile uint8_t x279 = 0U;
	int16_t x280 = -2067;
	int32_t t62 = 17;

	t62 = ((x277&(x278-x279))<x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x282 = 1U;
	static int32_t x283 = 948513475;
	int8_t x284 = -1;

	t63 = ((x281&(x282-x283))<x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x285 = -5237;
	int16_t x286 = 967;
	static uint32_t x287 = 1U;
	int32_t x288 = INT32_MAX;

	t64 = ((x285&(x286-x287))<x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x289 = INT16_MIN;
	uint8_t x290 = 7U;
	int16_t x291 = INT16_MIN;
	int16_t x292 = -1;
	int32_t t65 = 0;

	t65 = ((x289&(x290-x291))<x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = 16301;
	volatile int32_t x296 = INT32_MIN;

	t66 = ((x293&(x294-x295))<x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = -1;
	volatile uint8_t x300 = 75U;
	int32_t t67 = 18214;

	t67 = ((x297&(x298-x299))<x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x303 = INT16_MAX;
	static int32_t x304 = -28672;
	volatile int32_t t68 = 4507333;

	t68 = ((x301&(x302-x303))<x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = UINT16_MAX;
	static uint16_t x306 = 29547U;
	uint8_t x307 = UINT8_MAX;
	static int64_t x308 = 1LL;
	int32_t t69 = 1038455699;

	t69 = ((x305&(x306-x307))<x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = INT16_MIN;
	int8_t x311 = INT8_MAX;
	int32_t x312 = INT32_MIN;
	static int32_t t70 = 111741463;

	t70 = ((x309&(x310-x311))<x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 0U;
	static uint16_t x315 = 10U;
	uint8_t x316 = 1U;

	t71 = ((x313&(x314-x315))<x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x322 = 12U;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t72 = -5;

	t72 = ((x321&(x322-x323))<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x329 = -150333843LL;
	volatile int8_t x330 = INT8_MIN;
	uint16_t x331 = 25500U;
	static int32_t x332 = INT32_MAX;
	static int32_t t73 = -93;

	t73 = ((x329&(x330-x331))<x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x333 = INT8_MAX;
	int8_t x334 = -1;
	int8_t x335 = INT8_MAX;
	static uint8_t x336 = UINT8_MAX;

	t74 = ((x333&(x334-x335))<x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = INT8_MIN;
	static volatile uint16_t x338 = 3770U;
	int64_t x340 = 4404032LL;
	volatile int32_t t75 = 1139429;

	t75 = ((x337&(x338-x339))<x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 862977U;
	int32_t x342 = -1;
	volatile int16_t x343 = 1825;
	uint16_t x344 = UINT16_MAX;

	t76 = ((x341&(x342-x343))<x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	int8_t x346 = -1;
	int16_t x348 = INT16_MIN;
	static int32_t t77 = 7629334;

	t77 = ((x345&(x346-x347))<x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = INT64_MIN;
	static int16_t x352 = 152;

	t78 = ((x349&(x350-x351))<x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x353 = 16609772LL;
	int8_t x354 = INT8_MAX;
	int64_t x355 = 17517449LL;
	int32_t t79 = 6384661;

	t79 = ((x353&(x354-x355))<x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x359 = 14U;
	int16_t x360 = INT16_MIN;

	t80 = ((x357&(x358-x359))<x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x361 = 1U;
	static volatile uint32_t x362 = 424883U;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 680109LLU;
	volatile int32_t t81 = 21;

	t81 = ((x361&(x362-x363))<x364);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MIN;
	uint8_t x366 = 0U;
	int16_t x367 = -1;
	volatile int32_t t82 = -386179241;

	t82 = ((x365&(x366-x367))<x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x373 = 7U;
	volatile int64_t x375 = 1LL;

	t83 = ((x373&(x374-x375))<x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x378 = -4;
	uint32_t x379 = 3U;
	uint64_t x380 = 215089LLU;
	int32_t t84 = 4182;

	t84 = ((x377&(x378-x379))<x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 1984524119U;
	volatile int64_t x382 = -1LL;
	volatile int32_t x383 = 253922071;
	static uint64_t x384 = 4720329160340170712LLU;
	volatile int32_t t85 = 891;

	t85 = ((x381&(x382-x383))<x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x386 = INT16_MIN;
	uint16_t x387 = 273U;
	uint64_t x388 = UINT64_MAX;
	static int32_t t86 = 5660917;

	t86 = ((x385&(x386-x387))<x388);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MAX;
	uint16_t x390 = UINT16_MAX;
	volatile int32_t x391 = INT32_MAX;
	volatile int16_t x392 = -1;
	static int32_t t87 = 5;

	t87 = ((x389&(x390-x391))<x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x393 = INT16_MIN;
	static volatile uint32_t x394 = 170797U;
	int64_t x395 = -15920757195LL;
	uint64_t x396 = 14409381266354592LLU;
	volatile int32_t t88 = -2940515;

	t88 = ((x393&(x394-x395))<x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x401 = INT8_MAX;
	static uint8_t x402 = 1U;
	static uint64_t x403 = 3644502065LLU;
	static int64_t x404 = INT64_MAX;
	volatile int32_t t89 = 41541;

	t89 = ((x401&(x402-x403))<x404);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x406 = INT8_MIN;
	volatile uint16_t x407 = 13327U;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t90 = 201;

	t90 = ((x405&(x406-x407))<x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x413 = 1600073026460694LL;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MAX;
	static volatile int32_t t91 = -2336351;

	t91 = ((x413&(x414-x415))<x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x418 = -764292442;
	int16_t x419 = -10520;
	int64_t x420 = 0LL;
	static volatile int32_t t92 = -3105;

	t92 = ((x417&(x418-x419))<x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	int32_t t93 = 256183487;

	t93 = ((x421&(x422-x423))<x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = -1;
	static int32_t x426 = 15;
	static int16_t x427 = -1313;
	static uint8_t x428 = 30U;
	volatile int32_t t94 = 125;

	t94 = ((x425&(x426-x427))<x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MIN;
	uint64_t x430 = 5543LLU;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = 67504060269511LL;
	int32_t t95 = -28319;

	t95 = ((x429&(x430-x431))<x432);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = -119326565525218LL;
	static int64_t x434 = 349LL;
	volatile int32_t x436 = INT32_MIN;
	static int32_t t96 = -8563;

	t96 = ((x433&(x434-x435))<x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = 0U;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t97 = 77229;

	t97 = ((x437&(x438-x439))<x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x442 = 27U;
	static uint8_t x443 = 1U;
	uint64_t x444 = 21761346LLU;
	volatile int32_t t98 = 662;

	t98 = ((x441&(x442-x443))<x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x446 = -1;
	uint16_t x447 = 3466U;
	int64_t x448 = INT64_MIN;
	volatile int32_t t99 = -73;

	t99 = ((x445&(x446-x447))<x448);

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

