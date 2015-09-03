#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = -1;
static uint64_t x14 = 826143684346183118LLU;
int32_t x22 = INT32_MIN;
uint64_t x23 = UINT64_MAX;
int32_t t4 = -94141549;
int32_t x25 = 48;
volatile int32_t t5 = -1398128;
volatile int32_t t6 = 20986330;
uint16_t x38 = UINT16_MAX;
static int8_t x42 = -1;
volatile int32_t t9 = -5379;
static uint32_t x49 = UINT32_MAX;
static uint32_t x50 = 60388272U;
int16_t x54 = INT16_MAX;
int64_t x61 = -1LL;
static int64_t x64 = 2320042897611726LL;
int16_t x70 = -1;
int8_t x78 = INT8_MIN;
static volatile int64_t x90 = -1LL;
uint8_t x93 = 27U;
volatile uint8_t x94 = 0U;
uint64_t x102 = UINT64_MAX;
int64_t x112 = -1LL;
static uint8_t x140 = 0U;
int32_t x153 = -1;
int16_t x163 = -1;
int64_t x166 = INT64_MIN;
int16_t x185 = -1;
uint8_t x186 = 106U;
static uint64_t x190 = UINT64_MAX;
int32_t t36 = -4;
volatile int32_t t37 = 1;
int32_t t40 = 1;
int8_t x212 = INT8_MIN;
int32_t t41 = -693;
static int16_t x218 = INT16_MIN;
int16_t x221 = 722;
int64_t x224 = INT64_MIN;
volatile uint64_t x229 = UINT64_MAX;
uint32_t x230 = 3487686U;
int32_t t47 = -3718;
int8_t x245 = INT8_MAX;
uint64_t x247 = UINT64_MAX;
uint64_t x255 = UINT64_MAX;
uint16_t x258 = 109U;
int16_t x263 = INT16_MAX;
int32_t x267 = -1;
volatile int64_t x270 = INT64_MAX;
uint64_t x278 = UINT64_MAX;
int32_t t54 = 1;
int32_t t55 = -19108;
uint64_t x308 = UINT64_MAX;
uint16_t x313 = 12531U;
int64_t x314 = INT64_MAX;
uint16_t x328 = 76U;
uint16_t x334 = 29818U;
int64_t x336 = INT64_MIN;
volatile int32_t t62 = -67;
int32_t t65 = 0;
int8_t x355 = -33;
uint64_t x364 = 6888230377LLU;
int32_t x366 = 6085;
int32_t t69 = -705;
int32_t x379 = -1;
static volatile int32_t t72 = -1233402;
uint64_t x387 = UINT64_MAX;
static int32_t x388 = -1;
uint32_t x390 = UINT32_MAX;
int8_t x396 = 0;
uint8_t x413 = 1U;
volatile uint64_t x415 = 1021140078776LLU;
int8_t x422 = INT8_MIN;
static volatile int16_t x423 = -1;
int32_t x424 = INT32_MAX;
uint8_t x425 = UINT8_MAX;
static volatile uint32_t x427 = 393U;
int8_t x428 = 3;
static volatile int8_t x429 = -1;
volatile int64_t x437 = -1LL;
volatile int64_t x441 = INT64_MAX;
static int16_t x444 = 1;
static int64_t x445 = INT64_MIN;
int64_t x449 = -1LL;
static int32_t t86 = -8;
static int8_t x455 = INT8_MAX;
uint16_t x456 = 15U;
int32_t t87 = 5530;
int16_t x474 = -3;
static volatile int8_t x485 = -1;
uint32_t x487 = 915U;
int32_t t92 = 5060345;
static int8_t x489 = INT8_MIN;
int16_t x490 = INT16_MIN;
static int64_t x497 = 27716892018LL;
int32_t t95 = 24967779;
static int32_t x501 = 187;
uint32_t x502 = UINT32_MAX;
int8_t x503 = -1;
uint32_t x506 = 15671672U;
static volatile int32_t t97 = 79410;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = 0;
	uint32_t x3 = 3734874U;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 54377248;

	t0 = ((x1^(x2*x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 6380;

	t1 = ((x5^(x6*x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x15 = -3;
	int16_t x16 = -1;
	volatile int32_t t2 = 35407438;

	t2 = ((x13^(x14*x15))<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -180433396;
	uint32_t x18 = 1851398264U;
	int32_t x19 = INT32_MIN;
	uint64_t x20 = 5620LLU;
	int32_t t3 = -23;

	t3 = ((x17^(x18*x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int32_t x24 = -3959;

	t4 = ((x21^(x22*x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 756LLU;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 294156697508908LLU;

	t5 = ((x25^(x26*x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	uint32_t x30 = UINT32_MAX;
	static uint64_t x31 = 137611803144461LLU;
	volatile uint16_t x32 = 0U;

	t6 = ((x29^(x30*x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	uint16_t x39 = 6945U;
	int16_t x40 = -1;
	int32_t t7 = 56826;

	t7 = ((x37^(x38*x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	static int16_t x43 = -3873;
	int16_t x44 = INT16_MIN;
	static int32_t t8 = -45304436;

	t8 = ((x41^(x42*x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 26452872;
	int16_t x46 = INT16_MIN;
	uint32_t x47 = 0U;
	static volatile int64_t x48 = INT64_MIN;

	t9 = ((x45^(x46*x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x51 = -1;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t10 = 405246334;

	t10 = ((x49^(x50*x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -104247;
	static volatile int8_t x55 = -7;
	int32_t x56 = INT32_MAX;
	int32_t t11 = 9937;

	t11 = ((x53^(x54*x55))<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = -1;
	static volatile int32_t t12 = 104;

	t12 = ((x61^(x62*x63))<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	int8_t x66 = -1;
	volatile uint8_t x67 = UINT8_MAX;
	int32_t x68 = -1;
	int32_t t13 = 1;

	t13 = ((x65^(x66*x67))<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int16_t x71 = 4464;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t14 = -59975521;

	t14 = ((x69^(x70*x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = UINT32_MAX;
	static int8_t x74 = INT8_MIN;
	uint32_t x75 = 3U;
	static volatile int8_t x76 = INT8_MIN;
	static int32_t t15 = -25711;

	t15 = ((x73^(x74*x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x77 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = 1LLU;
	static volatile int32_t t16 = -5716;

	t16 = ((x77^(x78*x79))<x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = 0;
	int64_t x82 = INT64_MAX;
	static int16_t x83 = -1;
	int8_t x84 = INT8_MAX;
	int32_t t17 = 1;

	t17 = ((x81^(x82*x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = UINT8_MAX;
	volatile int8_t x86 = INT8_MAX;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MAX;
	static int32_t t18 = 1377646;

	t18 = ((x85^(x86*x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x89 = UINT16_MAX;
	volatile uint8_t x91 = 5U;
	int16_t x92 = INT16_MIN;
	volatile int32_t t19 = 7374;

	t19 = ((x89^(x90*x91))<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x95 = 25;
	int64_t x96 = -26329LL;
	int32_t t20 = -6024;

	t20 = ((x93^(x94*x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x101 = INT32_MIN;
	int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t21 = 27912;

	t21 = ((x101^(x102*x103))<x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x109 = -6;
	volatile uint32_t x110 = UINT32_MAX;
	static uint64_t x111 = UINT64_MAX;
	volatile int32_t t22 = -781229;

	t22 = ((x109^(x110*x111))<x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 26709U;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = -30453815013425235LL;
	int32_t t23 = -1657;

	t23 = ((x113^(x114*x115))<x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = -1LL;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -1;
	volatile int32_t t24 = -39399347;

	t24 = ((x117^(x118*x119))<x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = UINT64_MAX;
	static uint64_t x132 = 16954743630LLU;
	int32_t t25 = -6630115;

	t25 = ((x129^(x130*x131))<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = 108U;
	uint64_t x139 = 668367180102746582LLU;
	int32_t t26 = 140755;

	t26 = ((x137^(x138*x139))<x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MIN;
	volatile int32_t x142 = -8821252;
	uint8_t x143 = 2U;
	uint32_t x144 = 2038469U;
	int32_t t27 = 65;

	t27 = ((x141^(x142*x143))<x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = -1;
	int8_t x146 = INT8_MAX;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MAX;
	volatile int32_t t28 = 253;

	t28 = ((x145^(x146*x147))<x148);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x154 = -220;
	uint16_t x155 = 25U;
	volatile int16_t x156 = 4464;
	int32_t t29 = 22599;

	t29 = ((x153^(x154*x155))<x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = 2469115;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = -39587552368031LL;
	volatile int32_t t30 = 1;

	t30 = ((x157^(x158*x159))<x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x161 = UINT16_MAX;
	static int32_t x162 = INT32_MAX;
	uint16_t x164 = 2U;
	volatile int32_t t31 = -34128;

	t31 = ((x161^(x162*x163))<x164);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MAX;
	uint64_t x167 = 15521294491LLU;
	int16_t x168 = 1;
	volatile int32_t t32 = 79901;

	t32 = ((x165^(x166*x167))<x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MAX;
	uint32_t x179 = 7837U;
	int16_t x180 = 0;
	volatile int32_t t33 = 3;

	t33 = ((x177^(x178*x179))<x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x181 = UINT64_MAX;
	static int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int16_t x184 = 6968;
	int32_t t34 = -43;

	t34 = ((x181^(x182*x183))<x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x187 = 2;
	uint8_t x188 = 127U;
	volatile int32_t t35 = -1707;

	t35 = ((x185^(x186*x187))<x188);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = UINT16_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	uint64_t x192 = 1768393890288698LLU;

	t36 = ((x189^(x190*x191))<x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = 2278313594204723LLU;
	static volatile int16_t x194 = -1;
	static volatile int16_t x195 = INT16_MAX;
	uint64_t x196 = 472LLU;

	t37 = ((x193^(x194*x195))<x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x197 = 48U;
	uint8_t x198 = 7U;
	volatile int16_t x199 = -1;
	uint32_t x200 = 32U;
	int32_t t38 = -385362007;

	t38 = ((x197^(x198*x199))<x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = 353;
	static int16_t x203 = INT16_MIN;
	uint32_t x204 = 25417965U;
	int32_t t39 = 12;

	t39 = ((x201^(x202*x203))<x204);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = INT8_MIN;
	uint64_t x206 = 1878240603890719LLU;
	static int16_t x207 = INT16_MAX;
	uint16_t x208 = UINT16_MAX;

	t40 = ((x205^(x206*x207))<x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = 7;
	int8_t x210 = INT8_MIN;
	uint64_t x211 = UINT64_MAX;

	t41 = ((x209^(x210*x211))<x212);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = INT32_MAX;
	volatile uint32_t x214 = 0U;
	static int16_t x215 = INT16_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t42 = 40680;

	t42 = ((x213^(x214*x215))<x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x217 = 1445954184289LL;
	uint64_t x219 = 13LLU;
	uint64_t x220 = 76819283138LLU;
	int32_t t43 = -2;

	t43 = ((x217^(x218*x219))<x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x222 = -1LL;
	int16_t x223 = -9;
	int32_t t44 = -80;

	t44 = ((x221^(x222*x223))<x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = 1061;
	static volatile int8_t x227 = INT8_MIN;
	int16_t x228 = -4978;
	int32_t t45 = -808379;

	t45 = ((x225^(x226*x227))<x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x231 = INT8_MIN;
	volatile int32_t x232 = -1;
	volatile int32_t t46 = -1;

	t46 = ((x229^(x230*x231))<x232);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x237 = 1U;
	volatile int16_t x238 = 0;
	int8_t x239 = INT8_MIN;
	volatile int8_t x240 = -1;

	t47 = ((x237^(x238*x239))<x240);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x246 = 14;
	int16_t x248 = INT16_MAX;
	volatile int32_t t48 = -17;

	t48 = ((x245^(x246*x247))<x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x253 = 7;
	int32_t x254 = INT32_MAX;
	volatile uint16_t x256 = 2U;
	int32_t t49 = 27125;

	t49 = ((x253^(x254*x255))<x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = UINT8_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t50 = 66;

	t50 = ((x257^(x258*x259))<x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = -1;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t51 = 52533755;

	t51 = ((x261^(x262*x263))<x264);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int32_t t52 = -6868;

	t52 = ((x265^(x266*x267))<x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = -1;
	int16_t x271 = -1;
	static volatile int8_t x272 = INT8_MIN;
	int32_t t53 = -20;

	t53 = ((x269^(x270*x271))<x272);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MAX;
	volatile int64_t x279 = INT64_MIN;
	int32_t x280 = 41545074;

	t54 = ((x277^(x278*x279))<x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = 3U;
	int8_t x291 = INT8_MIN;
	static uint8_t x292 = UINT8_MAX;

	t55 = ((x289^(x290*x291))<x292);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = -49;
	uint64_t x295 = 8694974985371326LLU;
	int32_t x296 = 15;
	int32_t t56 = -248;

	t56 = ((x293^(x294*x295))<x296);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x297 = -1LL;
	int64_t x298 = -1LL;
	int32_t x299 = INT32_MIN;
	volatile int32_t x300 = -5729;
	int32_t t57 = 89;

	t57 = ((x297^(x298*x299))<x300);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -31;
	int8_t x304 = INT8_MAX;
	volatile int32_t t58 = 24;

	t58 = ((x301^(x302*x303))<x304);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x305 = -2;
	int64_t x306 = -506368379228LL;
	uint8_t x307 = UINT8_MAX;
	int32_t t59 = -3;

	t59 = ((x305^(x306*x307))<x308);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x315 = UINT64_MAX;
	volatile uint64_t x316 = 1355555509916329840LLU;
	static volatile int32_t t60 = -5898862;

	t60 = ((x313^(x314*x315))<x316);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x325 = 0U;
	static int16_t x326 = -785;
	int32_t x327 = -1432;
	static int32_t t61 = -769902480;

	t61 = ((x325^(x326*x327))<x328);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x333 = INT64_MAX;
	uint16_t x335 = 6U;

	t62 = ((x333^(x334*x335))<x336);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x337 = INT16_MAX;
	static uint8_t x338 = 1U;
	int16_t x339 = INT16_MIN;
	static volatile int64_t x340 = INT64_MIN;
	volatile int32_t t63 = 47612;

	t63 = ((x337^(x338*x339))<x340);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int16_t x342 = -1;
	uint8_t x343 = 17U;
	int32_t x344 = INT32_MIN;
	int32_t t64 = -11376;

	t64 = ((x341^(x342*x343))<x344);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x349 = -6;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 3393LLU;

	t65 = ((x349^(x350*x351))<x352);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x353 = INT16_MIN;
	static int64_t x354 = -191669769520204557LL;
	int8_t x356 = -1;
	static volatile int32_t t66 = -64288;

	t66 = ((x353^(x354*x355))<x356);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x357 = 4906U;
	uint8_t x358 = 1U;
	int64_t x359 = 1297238549181927602LL;
	int64_t x360 = INT64_MAX;
	volatile int32_t t67 = 122315;

	t67 = ((x357^(x358*x359))<x360);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x361 = INT32_MAX;
	int8_t x362 = -1;
	uint16_t x363 = 17461U;
	volatile int32_t t68 = -104;

	t68 = ((x361^(x362*x363))<x364);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = INT8_MAX;
	uint32_t x367 = 43217968U;
	uint64_t x368 = UINT64_MAX;

	t69 = ((x365^(x366*x367))<x368);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x369 = 41U;
	volatile uint64_t x370 = 61451LLU;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = 4;
	volatile int32_t t70 = 1421;

	t70 = ((x369^(x370*x371))<x372);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x373 = 1U;
	static uint32_t x374 = 20U;
	static uint32_t x375 = 2935U;
	uint64_t x376 = 7482372802106LLU;
	int32_t t71 = 1;

	t71 = ((x373^(x374*x375))<x376);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = 3;
	volatile uint32_t x380 = 353228U;

	t72 = ((x377^(x378*x379))<x380);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x385 = INT8_MIN;
	static uint8_t x386 = UINT8_MAX;
	int32_t t73 = -1;

	t73 = ((x385^(x386*x387))<x388);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x389 = INT16_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1LL;
	static volatile int32_t t74 = -1;

	t74 = ((x389^(x390*x391))<x392);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x393 = -7143;
	uint64_t x394 = 346LLU;
	static int32_t x395 = INT32_MIN;
	int32_t t75 = 469243640;

	t75 = ((x393^(x394*x395))<x396);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x397 = 3;
	int16_t x398 = 152;
	uint32_t x399 = 5811301U;
	static volatile uint8_t x400 = UINT8_MAX;
	int32_t t76 = 4725;

	t76 = ((x397^(x398*x399))<x400);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x409 = UINT32_MAX;
	static int8_t x410 = INT8_MAX;
	uint32_t x411 = UINT32_MAX;
	uint16_t x412 = UINT16_MAX;
	int32_t t77 = 477893;

	t77 = ((x409^(x410*x411))<x412);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x414 = INT64_MAX;
	uint8_t x416 = 1U;
	volatile int32_t t78 = 5;

	t78 = ((x413^(x414*x415))<x416);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = UINT64_MAX;
	volatile int32_t t79 = 41873629;

	t79 = ((x421^(x422*x423))<x424);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x426 = 1;
	static int32_t t80 = 3;

	t80 = ((x425^(x426*x427))<x428);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x430 = 90U;
	volatile uint64_t x431 = 176540314077LLU;
	uint8_t x432 = 30U;
	volatile int32_t t81 = -2;

	t81 = ((x429^(x430*x431))<x432);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = UINT32_MAX;
	static uint32_t x434 = 9U;
	int8_t x435 = 3;
	volatile int16_t x436 = -1;
	int32_t t82 = 1313099;

	t82 = ((x433^(x434*x435))<x436);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MAX;
	static uint8_t x440 = UINT8_MAX;
	volatile int32_t t83 = 4416128;

	t83 = ((x437^(x438*x439))<x440);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x442 = -6394;
	static uint64_t x443 = 207178955942921LLU;
	volatile int32_t t84 = 354889;

	t84 = ((x441^(x442*x443))<x444);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x446 = 221022;
	uint64_t x447 = 6LLU;
	int16_t x448 = -213;
	volatile int32_t t85 = -1;

	t85 = ((x445^(x446*x447))<x448);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x450 = INT8_MAX;
	int64_t x451 = 96415LL;
	uint32_t x452 = 2U;

	t86 = ((x449^(x450*x451))<x452);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x453 = 1U;
	int8_t x454 = INT8_MAX;

	t87 = ((x453^(x454*x455))<x456);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x461 = 24932712112LLU;
	uint32_t x462 = 2073210U;
	int64_t x463 = -6928LL;
	int64_t x464 = INT64_MAX;
	int32_t t88 = 2376;

	t88 = ((x461^(x462*x463))<x464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x469 = -8052759;
	int16_t x470 = INT16_MIN;
	int8_t x471 = -20;
	static int8_t x472 = INT8_MIN;
	static volatile int32_t t89 = -5796;

	t89 = ((x469^(x470*x471))<x472);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x473 = 1;
	uint8_t x475 = UINT8_MAX;
	volatile int16_t x476 = 5255;
	int32_t t90 = -25834;

	t90 = ((x473^(x474*x475))<x476);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = -1;
	int32_t x478 = 163297;
	int64_t x479 = 4101742LL;
	uint32_t x480 = UINT32_MAX;
	int32_t t91 = -5970;

	t91 = ((x477^(x478*x479))<x480);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x486 = 10387U;
	int8_t x488 = -1;

	t92 = ((x485^(x486*x487))<x488);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x491 = INT16_MAX;
	volatile uint8_t x492 = 10U;
	static volatile int32_t t93 = 613003092;

	t93 = ((x489^(x490*x491))<x492);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x493 = 13U;
	volatile int16_t x494 = 2837;
	int32_t x495 = -25;
	volatile int16_t x496 = 15;
	volatile int32_t t94 = 4250;

	t94 = ((x493^(x494*x495))<x496);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x498 = UINT8_MAX;
	int8_t x499 = INT8_MAX;
	uint32_t x500 = UINT32_MAX;

	t95 = ((x497^(x498*x499))<x500);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x504 = INT16_MAX;
	volatile int32_t t96 = 0;

	t96 = ((x501^(x502*x503))<x504);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x505 = INT8_MIN;
	volatile int64_t x507 = -3779743433LL;
	volatile int32_t x508 = INT32_MIN;

	t97 = ((x505^(x506*x507))<x508);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x509 = 1;
	static int16_t x510 = -6;
	static uint32_t x511 = 363013631U;
	uint8_t x512 = 1U;
	int32_t t98 = -895006;

	t98 = ((x509^(x510*x511))<x512);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x513 = 29U;
	int32_t x514 = -1;
	int16_t x515 = -1;
	int16_t x516 = INT16_MIN;
	int32_t t99 = 292963;

	t99 = ((x513^(x514*x515))<x516);

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

