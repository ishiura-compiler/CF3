#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x9 = 38U;
static int32_t x12 = INT32_MIN;
volatile int16_t x14 = -1;
uint8_t x19 = UINT8_MAX;
int32_t x23 = INT32_MAX;
uint32_t x30 = 14061269U;
uint32_t x32 = 22252381U;
int32_t x37 = INT32_MIN;
int32_t t8 = 1;
uint32_t x44 = UINT32_MAX;
int8_t x47 = INT8_MAX;
uint8_t x48 = 2U;
int32_t t10 = 7039;
volatile uint8_t x50 = 57U;
uint16_t x51 = UINT16_MAX;
uint8_t x55 = 12U;
int64_t x65 = INT64_MAX;
volatile uint16_t x67 = UINT16_MAX;
volatile int64_t t17 = 7058194106LL;
volatile uint32_t x85 = 173593806U;
int32_t x100 = INT32_MIN;
uint32_t x109 = 89U;
int64_t x112 = -455940LL;
uint16_t x113 = UINT16_MAX;
static volatile int64_t x117 = INT64_MAX;
uint8_t x125 = UINT8_MAX;
uint64_t x138 = 39979819485598LLU;
int8_t x141 = 61;
volatile int16_t x142 = 2069;
volatile int32_t t33 = 1754005;
static uint16_t x150 = 25U;
int16_t x153 = INT16_MAX;
uint64_t x161 = UINT64_MAX;
static int64_t x170 = INT64_MIN;
volatile uint32_t x172 = UINT32_MAX;
uint16_t x174 = 16549U;
int16_t x176 = -1;
int64_t x179 = INT64_MAX;
volatile uint16_t x182 = UINT16_MAX;
int64_t t42 = 331LL;
uint8_t x186 = 1U;
static int16_t x188 = INT16_MIN;
int64_t x196 = INT64_MAX;
static int32_t x197 = 7;
int16_t x203 = INT16_MIN;
uint64_t x214 = UINT64_MAX;
int32_t x217 = INT32_MIN;
uint16_t x218 = UINT16_MAX;
int8_t x222 = -1;
int64_t t53 = 10212924858LL;
uint8_t x232 = UINT8_MAX;
static volatile int32_t x233 = INT32_MIN;
int8_t x239 = -5;
volatile int16_t x240 = -1;
static uint64_t t56 = 9843LLU;
int16_t x243 = INT16_MAX;
volatile int16_t x247 = INT16_MAX;
int16_t x260 = 3335;
volatile uint64_t t61 = UINT64_MAX;
volatile uint32_t t65 = 2304U;
int32_t x281 = INT32_MIN;
int32_t x282 = 918190832;
volatile int32_t t66 = 181209394;
int64_t x287 = 627138850LL;
int16_t x288 = -1;
int64_t x289 = INT64_MIN;
volatile int64_t t68 = 57177893906704371LL;
int8_t x294 = 38;
volatile uint32_t t69 = 13304828U;
int8_t x297 = INT8_MIN;
volatile uint8_t x304 = UINT8_MAX;
uint8_t x314 = 1U;
int8_t x319 = 0;
volatile uint32_t x320 = 1370U;
uint64_t x327 = UINT64_MAX;
volatile int32_t x332 = -46229;
static int32_t x339 = -27695;
static int32_t x348 = INT32_MIN;
int32_t x354 = INT32_MIN;
static uint16_t x355 = 1228U;
int32_t t84 = 436206;
uint32_t x364 = UINT32_MAX;
static volatile int8_t x379 = 0;
static int32_t x380 = -1;
static uint32_t t91 = 12906U;
volatile uint64_t t92 = 54180LLU;
int8_t x389 = INT8_MIN;
volatile uint32_t t94 = 9482544U;
int64_t x405 = INT64_MIN;
uint32_t x409 = 11U;
static int8_t x414 = INT8_MAX;
int8_t x415 = -55;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 1LL;

	t0 = ((x1|x2)&(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static volatile int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = 773588797808926LLU;
	uint64_t t1 = 24752895823LLU;

	t1 = ((x5|x6)&(x7/x8));

	if (t1 != 23845LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = 0;
	static volatile int32_t t2 = 390;

	t2 = ((x9|x10)&(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MIN;
	static volatile int64_t t3 = -1150575659259618821LL;

	t3 = ((x13|x14)&(x15/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	int8_t x18 = INT8_MIN;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -123494LL;

	t4 = ((x17|x18)&(x19/x20));

	if (t4 != -255LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -30;
	volatile int8_t x22 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 45931;

	t5 = ((x21|x22)&(x23/x24));

	if (t5 != -65536) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static int32_t x26 = INT32_MAX;
	static uint32_t x27 = UINT32_MAX;
	volatile int32_t x28 = -20;
	volatile uint32_t t6 = 27813889U;

	t6 = ((x25|x26)&(x27/x28));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x31 = UINT64_MAX;
	static volatile uint64_t t7 = 30445020302259456LLU;

	t7 = ((x29|x30)&(x31/x32));

	if (t7 != 49751236LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 1;
	static uint8_t x39 = 1U;
	uint16_t x40 = 10U;

	t8 = ((x37|x38)&(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	static volatile uint32_t x42 = 0U;
	int32_t x43 = 153;
	uint32_t t9 = 7U;

	t9 = ((x41|x42)&(x43/x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 472;
	volatile int8_t x46 = INT8_MIN;

	t10 = ((x45|x46)&(x47/x48));

	if (t10 != 24) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	int64_t x52 = -1LL;
	volatile int64_t t11 = 26579LL;

	t11 = ((x49|x50)&(x51/x52));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -6;
	uint16_t x54 = UINT16_MAX;
	uint32_t x56 = 102217061U;
	static volatile uint32_t t12 = 15U;

	t12 = ((x53|x54)&(x55/x56));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = UINT32_MAX;
	volatile int8_t x58 = 7;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;
	static volatile uint32_t t13 = 28554U;

	t13 = ((x57|x58)&(x59/x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -61562;
	volatile uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = -1;
	int32_t x64 = -2;
	uint64_t t14 = 1LLU;

	t14 = ((x61|x62)&(x63/x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x66 = 96645357LLU;
	static uint8_t x68 = UINT8_MAX;
	volatile uint64_t t15 = 17357LLU;

	t15 = ((x65|x66)&(x67/x68));

	if (t15 != 257LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -262267848;
	volatile uint64_t x70 = UINT64_MAX;
	volatile int32_t x71 = -1559994;
	int64_t x72 = -7LL;
	uint64_t t16 = 498910161LLU;

	t16 = ((x69|x70)&(x71/x72));

	if (t16 != 222856LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = -1;
	int64_t x74 = -16743LL;
	uint32_t x75 = 43500U;
	volatile int64_t x76 = -677LL;

	t17 = ((x73|x74)&(x75/x76));

	if (t17 != -64LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 1624506312886LL;
	volatile uint64_t x82 = 73704927369052LLU;
	static uint8_t x83 = UINT8_MAX;
	uint64_t x84 = 3974LLU;
	uint64_t t18 = 926LLU;

	t18 = ((x81|x82)&(x83/x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = 585515955LLU;
	volatile int16_t x87 = INT16_MIN;
	uint32_t x88 = 20394523U;
	volatile uint64_t t19 = 65974721212643LLU;

	t19 = ((x85|x86)&(x87/x88));

	if (t19 != 210LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x89 = UINT8_MAX;
	int16_t x90 = 150;
	int64_t x91 = 5471679LL;
	int16_t x92 = INT16_MIN;
	volatile int64_t t20 = -25127340448835963LL;

	t20 = ((x89|x90)&(x91/x92));

	if (t20 != 90LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	static volatile int16_t x94 = 87;
	uint8_t x95 = 11U;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t21 = -3;

	t21 = ((x93|x94)&(x95/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MAX;
	static int64_t x99 = INT64_MIN;
	int64_t t22 = 60569172050141213LL;

	t22 = ((x97|x98)&(x99/x100));

	if (t22 != 4294967296LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	uint64_t x102 = 43950791943LLU;
	int8_t x103 = INT8_MIN;
	volatile int16_t x104 = -86;
	uint64_t t23 = 101094831076LLU;

	t23 = ((x101|x102)&(x103/x104));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = 0;
	volatile int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	volatile int64_t t24 = 17001501387962LL;

	t24 = ((x105|x106)&(x107/x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = INT16_MIN;
	volatile int8_t x111 = 1;
	int64_t t25 = 282630945197476901LL;

	t25 = ((x109|x110)&(x111/x112));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x114 = -1;
	uint32_t x115 = 5U;
	int16_t x116 = INT16_MAX;
	volatile uint32_t t26 = 252298513U;

	t26 = ((x113|x114)&(x115/x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = 9720;
	uint32_t x119 = 3U;
	int16_t x120 = INT16_MAX;
	volatile int64_t t27 = 205125689358LL;

	t27 = ((x117|x118)&(x119/x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	int64_t x122 = -103LL;
	uint16_t x123 = UINT16_MAX;
	volatile uint32_t x124 = 246669177U;
	int64_t t28 = 1145LL;

	t28 = ((x121|x122)&(x123/x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 587U;
	static int32_t t29 = -441438;

	t29 = ((x125|x126)&(x127/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = INT64_MAX;
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MAX;
	static volatile int8_t x132 = -1;
	volatile int64_t t30 = 924773LL;

	t30 = ((x129|x130)&(x131/x132));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = -1;
	uint32_t x134 = 45583U;
	int64_t x135 = -1139423385589418LL;
	volatile int16_t x136 = INT16_MAX;
	volatile int64_t t31 = -92587182271LL;

	t31 = ((x133|x134)&(x135/x136));

	if (t31 != 3881202274LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 0U;
	int32_t x139 = 16048993;
	volatile uint16_t x140 = UINT16_MAX;
	volatile uint64_t t32 = 1061387349LLU;

	t32 = ((x137|x138)&(x139/x140));

	if (t32 != 148LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x143 = 102U;
	static volatile int16_t x144 = 1;

	t33 = ((x141|x142)&(x143/x144));

	if (t33 != 36) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -258;
	uint8_t x151 = UINT8_MAX;
	int64_t x152 = INT64_MAX;
	int64_t t34 = -212360291617LL;

	t34 = ((x149|x150)&(x151/x152));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = -645;
	int8_t x155 = 6;
	uint16_t x156 = 23U;
	int32_t t35 = -1;

	t35 = ((x153|x154)&(x155/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1121949329875139059LL;
	int16_t x158 = INT16_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile int64_t x160 = INT64_MAX;
	int64_t t36 = -105018LL;

	t36 = ((x157|x158)&(x159/x160));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = -3653;
	uint16_t x163 = 7086U;
	int32_t x164 = INT32_MIN;
	uint64_t t37 = 6927792624799526LLU;

	t37 = ((x161|x162)&(x163/x164));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x165 = -6;
	int8_t x166 = -1;
	static volatile int8_t x167 = INT8_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t38 = -7246231;

	t38 = ((x165|x166)&(x167/x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 1946563U;
	int8_t x171 = INT8_MIN;
	int64_t t39 = 1082945951459110287LL;

	t39 = ((x169|x170)&(x171/x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x173 = UINT16_MAX;
	static int32_t x175 = 1;
	volatile int32_t t40 = -1497;

	t40 = ((x173|x174)&(x175/x176));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MAX;
	volatile int64_t x178 = -1LL;
	int32_t x180 = INT32_MIN;
	volatile int64_t t41 = -7LL;

	t41 = ((x177|x178)&(x179/x180));

	if (t41 != -4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = 1;
	static int64_t x183 = INT64_MIN;
	int16_t x184 = -11043;

	t42 = ((x181|x182)&(x183/x184));

	if (t42 != 1418LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -1LL;
	int16_t x187 = INT16_MIN;
	static int64_t t43 = -1074007228LL;

	t43 = ((x185|x186)&(x187/x188));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 2009U;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = 2976;
	int8_t x192 = -39;
	volatile int32_t t44 = 0;

	t44 = ((x189|x190)&(x191/x192));

	if (t44 != 1972) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -13;
	volatile int32_t x194 = -27620583;
	volatile int32_t x195 = INT32_MIN;
	volatile int64_t t45 = -1178310187987632685LL;

	t45 = ((x193|x194)&(x195/x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = 15603503;
	uint64_t x200 = 13173567686823LLU;
	uint64_t t46 = 15024338594LLU;

	t46 = ((x197|x198)&(x199/x200));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	uint16_t x202 = UINT16_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t47 = -124;

	t47 = ((x201|x202)&(x203/x204));

	if (t47 != -258) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	int32_t x207 = -14978;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t48 = -2;

	t48 = ((x205|x206)&(x207/x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x209 = -1;
	uint64_t x210 = 161564LLU;
	volatile uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;
	uint64_t t49 = 6058242675LLU;

	t49 = ((x209|x210)&(x211/x212));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = 4U;
	int8_t x215 = -1;
	static uint16_t x216 = 11584U;
	uint64_t t50 = 26LLU;

	t50 = ((x213|x214)&(x215/x216));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x219 = 25U;
	volatile int64_t x220 = INT64_MAX;
	volatile int64_t t51 = -105337069247059LL;

	t51 = ((x217|x218)&(x219/x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MAX;
	int16_t x223 = 1;
	int8_t x224 = -1;
	volatile int64_t t52 = -298923LL;

	t52 = ((x221|x222)&(x223/x224));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x225 = 1U;
	int64_t x226 = -64409487544LL;
	volatile int8_t x227 = -40;
	static int64_t x228 = INT64_MIN;

	t53 = ((x225|x226)&(x227/x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = INT64_MIN;
	uint64_t x230 = 1479346486LLU;
	int64_t x231 = INT64_MIN;
	uint64_t t54 = 119LLU;

	t54 = ((x229|x230)&(x231/x232));

	if (t54 != 9223372038334122240LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	int16_t x236 = INT16_MAX;
	volatile int32_t t55 = -6674;

	t55 = ((x233|x234)&(x235/x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = -6;

	t56 = ((x237|x238)&(x239/x240));

	if (t56 != 5LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = 342412U;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t57 = 474U;

	t57 = ((x241|x242)&(x243/x244));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	static uint64_t x248 = 255LLU;
	static volatile uint64_t t58 = 275602334LLU;

	t58 = ((x245|x246)&(x247/x248));

	if (t58 != 128LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 1868;
	uint64_t x250 = 2966452409323LLU;
	volatile int16_t x251 = INT16_MIN;
	static volatile uint64_t x252 = 63LLU;
	uint64_t t59 = 45184762170495LLU;

	t59 = ((x249|x250)&(x251/x252));

	if (t59 != 4260360LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 74U;
	static volatile uint32_t x254 = UINT32_MAX;
	int64_t x255 = 1159744401709LL;
	volatile int16_t x256 = INT16_MIN;
	volatile int64_t t60 = -2492541699541LL;

	t60 = ((x253|x254)&(x255/x256));

	if (t60 != 4259574706LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 4731U;
	uint64_t x258 = UINT64_MAX;
	int16_t x259 = -5315;

	t61 = ((x257|x258)&(x259/x260));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = 2;
	volatile int8_t x266 = -12;
	volatile int16_t x267 = INT16_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t62 = -5;

	t62 = ((x265|x266)&(x267/x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -19;
	int64_t x270 = -1645913LL;
	int16_t x271 = -1;
	static int32_t x272 = -1;
	volatile int64_t t63 = -807894LL;

	t63 = ((x269|x270)&(x271/x272));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = 0;
	int32_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = -1;
	volatile uint32_t t64 = 0U;

	t64 = ((x273|x274)&(x275/x276));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = UINT32_MAX;
	volatile int32_t x280 = 492005;

	t65 = ((x277|x278)&(x279/x280));

	if (t65 != 8704U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x283 = -1;
	int8_t x284 = INT8_MIN;

	t66 = ((x281|x282)&(x283/x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -324;
	int8_t x286 = -1;
	volatile int64_t t67 = -2521643736223LL;

	t67 = ((x285|x286)&(x287/x288));

	if (t67 != -627138850LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x290 = -24;
	static volatile uint8_t x291 = 8U;
	int8_t x292 = INT8_MIN;

	t68 = ((x289|x290)&(x291/x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = INT16_MIN;
	uint32_t x295 = 0U;
	uint32_t x296 = UINT32_MAX;

	t69 = ((x293|x294)&(x295/x296));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x298 = INT64_MIN;
	uint8_t x299 = 0U;
	int32_t x300 = -1;
	int64_t t70 = -3022132LL;

	t70 = ((x297|x298)&(x299/x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MAX;
	static int8_t x303 = INT8_MAX;
	static int32_t t71 = -1;

	t71 = ((x301|x302)&(x303/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -31;
	static uint64_t x306 = UINT64_MAX;
	int8_t x307 = -1;
	int64_t x308 = -1LL;
	volatile uint64_t t72 = 3LLU;

	t72 = ((x305|x306)&(x307/x308));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 27633208LLU;
	static int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MAX;
	int64_t x312 = INT64_MIN;
	uint64_t t73 = 1166287LLU;

	t73 = ((x309|x310)&(x311/x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -1;
	volatile uint32_t x315 = 235385817U;
	uint16_t x316 = UINT16_MAX;
	uint32_t t74 = 183U;

	t74 = ((x313|x314)&(x315/x316));

	if (t74 != 3591U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 48U;
	uint32_t x318 = 20U;
	volatile uint32_t t75 = 66137U;

	t75 = ((x317|x318)&(x319/x320));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 1LLU;
	int64_t x322 = -173630177LL;
	uint16_t x323 = 383U;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t76 = 21894809LLU;

	t76 = ((x321|x322)&(x323/x324));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = 181;
	int16_t x326 = -1;
	int64_t x328 = INT64_MAX;
	volatile uint64_t t77 = 5097897LLU;

	t77 = ((x325|x326)&(x327/x328));

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x329 = 6420;
	int32_t x330 = INT32_MIN;
	uint64_t x331 = UINT64_MAX;
	uint64_t t78 = 14LLU;

	t78 = ((x329|x330)&(x331/x332));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	uint16_t x335 = 845U;
	volatile uint64_t x336 = UINT64_MAX;
	volatile uint64_t t79 = 2LLU;

	t79 = ((x333|x334)&(x335/x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = 1;
	int32_t x338 = 1;
	int8_t x340 = INT8_MAX;
	int32_t t80 = 926;

	t80 = ((x337|x338)&(x339/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x341 = INT32_MIN;
	volatile uint8_t x342 = 26U;
	uint64_t x343 = 35LLU;
	volatile uint32_t x344 = 660U;
	static uint64_t t81 = 477815468LLU;

	t81 = ((x341|x342)&(x343/x344));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = -41;
	static int64_t x347 = INT64_MIN;
	static volatile int64_t t82 = 2985871785574LL;

	t82 = ((x345|x346)&(x347/x348));

	if (t82 != 4294967296LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MIN;
	volatile uint64_t x350 = 563866744242238LLU;
	static uint16_t x351 = UINT16_MAX;
	uint16_t x352 = UINT16_MAX;
	uint64_t t83 = 16522074471LLU;

	t83 = ((x349|x350)&(x351/x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 3U;
	uint8_t x356 = 27U;

	t84 = ((x353|x354)&(x355/x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x357 = 432U;
	static uint16_t x358 = UINT16_MAX;
	volatile uint8_t x359 = 6U;
	static uint64_t x360 = UINT64_MAX;
	uint64_t t85 = 2174977169292774218LLU;

	t85 = ((x357|x358)&(x359/x360));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 5274886993605372LLU;
	volatile int32_t x362 = INT32_MAX;
	int32_t x363 = INT32_MAX;
	uint64_t t86 = 1538477223659LLU;

	t86 = ((x361|x362)&(x363/x364));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 1;
	static volatile int64_t x366 = INT64_MIN;
	static int16_t x367 = 7;
	int64_t x368 = INT64_MIN;
	int64_t t87 = -1LL;

	t87 = ((x365|x366)&(x367/x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x369 = INT32_MIN;
	int32_t x370 = 1434121;
	uint32_t x371 = 23U;
	int16_t x372 = -1;
	volatile uint32_t t88 = 3U;

	t88 = ((x369|x370)&(x371/x372));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 34U;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t89 = -8232932;

	t89 = ((x373|x374)&(x375/x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 11891816U;
	uint8_t x378 = 90U;
	volatile uint32_t t90 = 52013U;

	t90 = ((x377|x378)&(x379/x380));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	uint32_t x383 = 143967U;
	int16_t x384 = -22;

	t91 = ((x381|x382)&(x383/x384));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 48U;
	int16_t x386 = -1;
	uint64_t x387 = 1LLU;
	static int32_t x388 = -7621885;

	t92 = ((x385|x386)&(x387/x388));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x390 = INT64_MIN;
	uint32_t x391 = UINT32_MAX;
	volatile int16_t x392 = -1;
	volatile int64_t t93 = 27414661LL;

	t93 = ((x389|x390)&(x391/x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 3006U;
	volatile int16_t x395 = 22;
	uint8_t x396 = UINT8_MAX;

	t94 = ((x393|x394)&(x395/x396));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = -1;
	volatile uint8_t x399 = 92U;
	int16_t x400 = INT16_MAX;
	uint64_t t95 = 26LLU;

	t95 = ((x397|x398)&(x399/x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = 13946U;
	int8_t x402 = INT8_MIN;
	volatile int16_t x403 = INT16_MAX;
	uint16_t x404 = 333U;
	int32_t t96 = 0;

	t96 = ((x401|x402)&(x403/x404));

	if (t96 != 98) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x406 = UINT8_MAX;
	int8_t x407 = INT8_MIN;
	int16_t x408 = -12;
	volatile int64_t t97 = 35141133715797188LL;

	t97 = ((x405|x406)&(x407/x408));

	if (t97 != 10LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = INT16_MIN;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = 1;
	uint32_t t98 = 1342184U;

	t98 = ((x409|x410)&(x411/x412));

	if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	volatile uint64_t x416 = 4192693632020491LLU;
	volatile uint64_t t99 = 72565466938LLU;

	t99 = ((x413|x414)&(x415/x416));

	if (t99 != 4399LLU) { NG(); } else { ; }
	
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

