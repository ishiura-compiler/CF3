#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
int8_t x19 = INT8_MIN;
uint16_t x28 = UINT16_MAX;
int16_t x29 = -1;
int16_t x32 = -1;
int16_t x34 = -1;
uint64_t t6 = 60LLU;
uint64_t t7 = 79627253708LLU;
volatile uint64_t x42 = 7LLU;
int32_t x55 = -1;
volatile uint16_t x56 = 19204U;
uint8_t x57 = 0U;
int16_t x59 = -6114;
uint8_t x70 = 0U;
uint32_t x71 = 246U;
static int8_t x77 = INT8_MIN;
volatile uint32_t t15 = 1U;
uint64_t t16 = 2969LLU;
uint64_t t17 = 31167933458727LLU;
int32_t x95 = INT32_MAX;
uint32_t x96 = UINT32_MAX;
volatile uint64_t t19 = 3226736393999LLU;
static uint32_t x106 = 2U;
static volatile int32_t x111 = -195517;
static int32_t t21 = -336;
uint64_t x114 = UINT64_MAX;
int64_t x124 = INT64_MIN;
int16_t x137 = INT16_MAX;
static uint64_t x148 = UINT64_MAX;
int16_t x150 = INT16_MAX;
uint64_t x153 = 121098112074LLU;
static volatile int8_t x154 = 2;
int16_t x180 = 4;
int8_t x189 = INT8_MIN;
uint64_t x190 = 271243LLU;
volatile int32_t x196 = -1;
static int8_t x198 = -62;
volatile int8_t x200 = INT8_MIN;
static volatile int64_t t38 = 845118903731567561LL;
volatile int8_t x212 = INT8_MIN;
uint32_t t41 = 12U;
uint64_t x226 = UINT64_MAX;
int64_t x236 = -1LL;
uint64_t t44 = 5968969LLU;
int32_t t45 = 45;
int64_t x244 = -120476LL;
uint64_t t48 = 1499936065004175LLU;
volatile int64_t t50 = 987167352269167LL;
static uint64_t x271 = UINT64_MAX;
uint32_t x290 = UINT32_MAX;
volatile int64_t t54 = -27927864LL;
volatile int32_t x310 = -1;
static int32_t x311 = 1823359;
int32_t x316 = INT32_MIN;
static uint64_t x326 = UINT64_MAX;
uint64_t t59 = 241264LLU;
uint64_t x330 = 8330992560880232LLU;
volatile int16_t x351 = -1;
int32_t x357 = 1901426;
volatile uint8_t x359 = 8U;
int8_t x373 = -1;
static int16_t x375 = -1;
uint32_t x378 = 1010791U;
int16_t x380 = INT16_MIN;
uint8_t x387 = UINT8_MAX;
static uint64_t x393 = 7LLU;
uint8_t x400 = 73U;
volatile int64_t x401 = INT64_MAX;
uint64_t x402 = 122387418044435314LLU;
int16_t x404 = -1;
volatile uint32_t x406 = 28426U;
int8_t x408 = 1;
uint64_t x421 = UINT64_MAX;
volatile uint64_t x423 = UINT64_MAX;
static int8_t x431 = 10;
static uint32_t x432 = 491259U;
uint32_t t80 = 202630U;
int64_t x453 = 48LL;
static int32_t x455 = -62;
int64_t t84 = 0LL;
static uint32_t x457 = UINT32_MAX;
volatile uint32_t t89 = 0U;
static int64_t x484 = -9439443LL;
int16_t x489 = 112;
uint64_t x494 = 1985588284LLU;
uint32_t t98 = 11671U;
volatile int16_t x536 = INT16_MIN;


void f0(void) {
	int16_t x1 = -1;
	int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	int32_t x4 = -1;
	int32_t t0 = -3;

	t0 = ((x1*x2)&(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	static uint32_t x6 = UINT32_MAX;
	uint16_t x7 = 910U;
	volatile uint32_t t1 = 6U;

	t1 = ((x5*x6)&(x7/x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 1;
	static uint32_t x14 = 0U;
	int64_t x15 = INT64_MAX;
	static int64_t x16 = -1LL;
	volatile int64_t t2 = 5286286LL;

	t2 = ((x13*x14)&(x15/x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 50U;
	int64_t x18 = -16070101840529738LL;
	int8_t x20 = 61;
	volatile int64_t t3 = -321637563098919285LL;

	t3 = ((x17*x18)&(x19/x20));

	if (t3 != -803505092026486900LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = UINT16_MAX;
	static int64_t x26 = -1LL;
	int64_t x27 = INT64_MIN;
	volatile int64_t t4 = -1362212LL;

	t4 = ((x25*x26)&(x27/x28));

	if (t4 != -140739635904512LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x30 = 33238025LLU;
	int8_t x31 = INT8_MAX;
	volatile uint64_t t5 = 6896282593908786LLU;

	t5 = ((x29*x30)&(x31/x32));

	if (t5 != 18446744073676313473LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	static uint64_t x35 = 133052581LLU;
	uint64_t x36 = 4082LLU;

	t6 = ((x33*x34)&(x35/x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	static uint16_t x39 = 248U;
	static uint64_t x40 = 27816462498LLU;

	t7 = ((x37*x38)&(x39/x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	int8_t x43 = 4;
	uint8_t x44 = 60U;
	uint64_t t8 = 228LLU;

	t8 = ((x41*x42)&(x43/x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 2U;
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MIN;
	uint32_t t9 = 2640019U;

	t9 = ((x45*x46)&(x47/x48));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	static uint64_t x50 = UINT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	uint32_t x52 = 2023U;
	static uint64_t t10 = 111664LLU;

	t10 = ((x49*x50)&(x51/x52));

	if (t10 != 128LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = 13LLU;
	volatile int64_t x54 = INT64_MIN;
	volatile uint64_t t11 = 14998898040577LLU;

	t11 = ((x53*x54)&(x55/x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = -3633LL;
	static uint16_t x60 = 25U;
	volatile int64_t t12 = 149952110398775556LL;

	t12 = ((x57*x58)&(x59/x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 336U;
	uint32_t x66 = 1706U;
	int32_t x67 = -108681;
	static volatile uint32_t x68 = 971U;
	volatile uint32_t t13 = 59262394U;

	t13 = ((x65*x66)&(x67/x68));

	if (t13 != 15616U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x69 = INT64_MAX;
	int32_t x72 = 248598;
	int64_t t14 = -38LL;

	t14 = ((x69*x70)&(x71/x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = 1;
	volatile uint32_t x79 = 84803U;
	static int16_t x80 = 10883;

	t15 = ((x77*x78)&(x79/x80));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = 7669173955LLU;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 1U;

	t16 = ((x85*x86)&(x87/x88));

	if (t16 != 18446492770217394176LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x89 = UINT64_MAX;
	uint8_t x90 = 5U;
	volatile uint16_t x91 = 24U;
	static volatile uint32_t x92 = 199592U;

	t17 = ((x89*x90)&(x91/x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = INT16_MIN;
	uint8_t x94 = 1U;
	static uint32_t t18 = 6U;

	t18 = ((x93*x94)&(x95/x96));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -1;
	uint64_t x102 = UINT64_MAX;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = -1;

	t19 = ((x101*x102)&(x103/x104));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	int8_t x108 = -38;
	volatile uint32_t t20 = 1129051U;

	t20 = ((x105*x106)&(x107/x108));

	if (t20 != 20694U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = -1;
	volatile uint8_t x110 = 1U;
	static int32_t x112 = INT32_MIN;

	t21 = ((x109*x110)&(x111/x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = 479U;
	volatile int64_t x115 = -1LL;
	static int16_t x116 = INT16_MAX;
	uint64_t t22 = 1LLU;

	t22 = ((x113*x114)&(x115/x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x117 = 13U;
	uint16_t x118 = 1009U;
	uint8_t x119 = 125U;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t23 = 2;

	t23 = ((x117*x118)&(x119/x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MIN;
	static int64_t x123 = -3721391902533545LL;
	uint64_t t24 = 38301694097LLU;

	t24 = ((x121*x122)&(x123/x124));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = INT16_MIN;
	int8_t x126 = 53;
	static uint32_t x127 = UINT32_MAX;
	volatile int64_t x128 = INT64_MIN;
	int64_t t25 = -249884864LL;

	t25 = ((x125*x126)&(x127/x128));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = -1;
	static uint8_t x130 = 7U;
	uint32_t x131 = 15457340U;
	static int16_t x132 = INT16_MIN;
	uint32_t t26 = 14U;

	t26 = ((x129*x130)&(x131/x132));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x138 = UINT32_MAX;
	static uint64_t x139 = 22319062LLU;
	static uint8_t x140 = 3U;
	static volatile uint64_t t27 = 2LLU;

	t27 = ((x137*x138)&(x139/x140));

	if (t27 != 7438337LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x141 = -8069644;
	volatile uint64_t x142 = UINT64_MAX;
	static uint32_t x143 = 12503390U;
	volatile uint8_t x144 = 10U;
	static uint64_t t28 = 134001824431LLU;

	t28 = ((x141*x142)&(x143/x144));

	if (t28 != 1245184LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 215U;
	static volatile int64_t x146 = 391466871LL;
	static volatile uint32_t x147 = 1U;
	uint64_t t29 = 11010234LLU;

	t29 = ((x145*x146)&(x147/x148));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x149 = UINT8_MAX;
	static uint32_t x151 = 1U;
	uint64_t x152 = 2LLU;
	uint64_t t30 = 108158844764809LLU;

	t30 = ((x149*x150)&(x151/x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MAX;
	uint64_t t31 = 2152899657453LLU;

	t31 = ((x153*x154)&(x155/x156));

	if (t31 != 242196224148LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = 85616LLU;
	uint8_t x158 = 30U;
	volatile int32_t x159 = 41369281;
	static int16_t x160 = INT16_MAX;
	volatile uint64_t t32 = 617356LLU;

	t32 = ((x157*x158)&(x159/x160));

	if (t32 != 32LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = UINT8_MAX;
	volatile uint16_t x166 = 0U;
	int32_t x167 = INT32_MAX;
	uint16_t x168 = 11767U;
	volatile int32_t t33 = -22953;

	t33 = ((x165*x166)&(x167/x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = 52LLU;
	int64_t x174 = INT64_MAX;
	int32_t x175 = 89255;
	int32_t x176 = -485;
	volatile uint64_t t34 = 121570582LLU;

	t34 = ((x173*x174)&(x175/x176));

	if (t34 != 18446744073709551432LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x177 = INT64_MAX;
	static volatile int16_t x178 = -1;
	int8_t x179 = -1;
	volatile int64_t t35 = 368LL;

	t35 = ((x177*x178)&(x179/x180));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x191 = 586028943LLU;
	volatile int64_t x192 = INT64_MIN;
	uint64_t t36 = 1047333302LLU;

	t36 = ((x189*x190)&(x191/x192));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x193 = INT32_MIN;
	uint32_t x194 = 181026U;
	uint32_t x195 = 783581504U;
	uint32_t t37 = 3937U;

	t37 = ((x193*x194)&(x195/x196));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = -1;
	volatile int64_t x199 = -1LL;

	t38 = ((x197*x198)&(x199/x200));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 5941010423LLU;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	static int16_t x204 = -1;
	static uint64_t t39 = 15LLU;

	t39 = ((x201*x202)&(x203/x204));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = -1;
	int8_t x211 = INT8_MIN;
	volatile int32_t t40 = 127;

	t40 = ((x209*x210)&(x211/x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x213 = INT16_MIN;
	static volatile int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 1797929U;

	t41 = ((x213*x214)&(x215/x216));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x221 = UINT32_MAX;
	static int8_t x222 = INT8_MAX;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 12U;
	volatile uint32_t t42 = 64U;

	t42 = ((x221*x222)&(x223/x224));

	if (t42 != 5377U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = -15;
	int16_t x227 = -1;
	int64_t x228 = INT64_MAX;
	static uint64_t t43 = 58063739LLU;

	t43 = ((x225*x226)&(x227/x228));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x233 = INT8_MIN;
	static uint8_t x234 = 0U;
	volatile uint64_t x235 = 145040LLU;

	t44 = ((x233*x234)&(x235/x236));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x237 = -1;
	int8_t x238 = INT8_MAX;
	static uint8_t x239 = 44U;
	volatile int8_t x240 = 4;

	t45 = ((x237*x238)&(x239/x240));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x241 = INT8_MAX;
	uint64_t x242 = 28236451LLU;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t t46 = 5096099LLU;

	t46 = ((x241*x242)&(x243/x244));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile int8_t x250 = -2;
	int32_t x251 = INT32_MIN;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t47 = -142;

	t47 = ((x249*x250)&(x251/x252));

	if (t47 != -131072) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x253 = 1062U;
	volatile uint64_t x254 = 2LLU;
	uint64_t x255 = 1875603472LLU;
	static uint8_t x256 = 27U;

	t48 = ((x253*x254)&(x255/x256));

	if (t48 != 2056LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = -1LL;
	static int8_t x260 = INT8_MAX;
	volatile int64_t t49 = 105LL;

	t49 = ((x257*x258)&(x259/x260));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MAX;
	int32_t x267 = 1;
	int64_t x268 = INT64_MAX;

	t50 = ((x265*x266)&(x267/x268));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	static uint8_t x272 = 1U;
	uint64_t t51 = 233538LLU;

	t51 = ((x269*x270)&(x271/x272));

	if (t51 != 4194304LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x273 = 9866U;
	uint32_t x274 = 1005005073U;
	int8_t x275 = INT8_MIN;
	volatile uint32_t x276 = 60417677U;
	volatile uint32_t t52 = 203U;

	t52 = ((x273*x274)&(x275/x276));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = 255;
	uint64_t x278 = UINT64_MAX;
	uint16_t x279 = 0U;
	volatile uint32_t x280 = UINT32_MAX;
	static uint64_t t53 = 65417451061384364LLU;

	t53 = ((x277*x278)&(x279/x280));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;

	t54 = ((x289*x290)&(x291/x292));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x293 = 184356LLU;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	volatile int16_t x296 = INT16_MAX;
	volatile uint64_t t55 = 463302LLU;

	t55 = ((x293*x294)&(x295/x296));

	if (t55 != 23347676LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = 1U;
	int64_t x302 = 24LL;
	int64_t x303 = INT64_MIN;
	static volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t56 = 17575LLU;

	t56 = ((x301*x302)&(x303/x304));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x309 = UINT64_MAX;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t57 = 752931717355LLU;

	t57 = ((x309*x310)&(x311/x312));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 35U;
	uint16_t x315 = UINT16_MAX;
	uint32_t t58 = 21U;

	t58 = ((x313*x314)&(x315/x316));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = -1;
	static uint16_t x327 = 3715U;
	uint8_t x328 = UINT8_MAX;

	t59 = ((x325*x326)&(x327/x328));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint16_t x331 = 119U;
	int32_t x332 = -4289;
	volatile uint64_t t60 = 54045655360LLU;

	t60 = ((x329*x330)&(x331/x332));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x333 = 2U;
	int64_t x334 = 53151711507267364LL;
	int32_t x335 = INT32_MIN;
	static uint8_t x336 = UINT8_MAX;
	static volatile int64_t t61 = 505857764750858218LL;

	t61 = ((x333*x334)&(x335/x336));

	if (t61 != 106303423014534656LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = INT16_MIN;
	static int32_t x342 = 6669;
	uint16_t x343 = 275U;
	int32_t x344 = -19177;
	int32_t t62 = -7788;

	t62 = ((x341*x342)&(x343/x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x349 = INT8_MIN;
	uint16_t x350 = 7935U;
	int64_t x352 = -261LL;
	volatile int64_t t63 = -1887602607125LL;

	t63 = ((x349*x350)&(x351/x352));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x358 = UINT8_MAX;
	static int16_t x360 = -7817;
	int32_t t64 = 115;

	t64 = ((x357*x358)&(x359/x360));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x361 = 64752LL;
	int8_t x362 = 0;
	volatile int64_t x363 = -3LL;
	int16_t x364 = INT16_MAX;
	static int64_t t65 = -443710110881845LL;

	t65 = ((x361*x362)&(x363/x364));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x369 = 351U;
	static volatile int16_t x370 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	static uint64_t x372 = 53591286996436771LLU;
	uint64_t t66 = 28264764833774970LLU;

	t66 = ((x369*x370)&(x371/x372));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x374 = -6;
	static uint64_t x376 = 24LLU;
	uint64_t t67 = 540995458981LLU;

	t67 = ((x373*x374)&(x375/x376));

	if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x377 = 1419553U;
	int64_t x379 = -9643LL;
	static volatile int64_t t68 = -87771729152796LL;

	t68 = ((x377*x378)&(x379/x380));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = -1;
	static int8_t x382 = 6;
	int16_t x383 = INT16_MIN;
	static int64_t x384 = 941436933LL;
	volatile int64_t t69 = 4752357572376LL;

	t69 = ((x381*x382)&(x383/x384));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x385 = INT64_MAX;
	uint64_t x386 = 52200531568LLU;
	static volatile int32_t x388 = 1;
	static volatile uint64_t t70 = 3640801916998390516LLU;

	t70 = ((x385*x386)&(x387/x388));

	if (t70 != 144LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x389 = 5448175;
	uint16_t x390 = 0U;
	volatile uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 139208LLU;
	volatile uint64_t t71 = 241292LLU;

	t71 = ((x389*x390)&(x391/x392));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x394 = 798U;
	int16_t x395 = INT16_MAX;
	volatile int64_t x396 = -837568LL;
	uint64_t t72 = 774006903596434LLU;

	t72 = ((x393*x394)&(x395/x396));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x397 = INT8_MIN;
	uint8_t x398 = 19U;
	int8_t x399 = 0;
	static int32_t t73 = -10;

	t73 = ((x397*x398)&(x399/x400));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x403 = 7353151394157421LLU;
	static volatile uint64_t t74 = 7494943238383209069LLU;

	t74 = ((x401*x402)&(x403/x404));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x405 = INT16_MIN;
	uint32_t x407 = 6U;
	uint32_t t75 = 158228U;

	t75 = ((x405*x406)&(x407/x408));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x409 = UINT8_MAX;
	uint64_t x410 = 8366984649313869774LLU;
	volatile int8_t x411 = INT8_MAX;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t76 = 40LLU;

	t76 = ((x409*x410)&(x411/x412));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x413 = 871826U;
	volatile uint8_t x414 = 4U;
	int32_t x415 = INT32_MIN;
	volatile uint16_t x416 = UINT16_MAX;
	static uint32_t t77 = 8875714U;

	t77 = ((x413*x414)&(x415/x416));

	if (t77 != 3473408U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x422 = 80U;
	volatile int32_t x424 = INT32_MIN;
	volatile uint64_t t78 = 20LLU;

	t78 = ((x421*x422)&(x423/x424));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x425 = -1;
	static volatile uint16_t x426 = UINT16_MAX;
	static uint32_t x427 = UINT32_MAX;
	volatile int8_t x428 = -2;
	uint32_t t79 = 10055032U;

	t79 = ((x425*x426)&(x427/x428));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x429 = 149740647U;
	static int16_t x430 = INT16_MIN;

	t80 = ((x429*x430)&(x431/x432));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x433 = -1;
	uint64_t x434 = 1059004409LLU;
	int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	uint64_t t81 = 137087LLU;

	t81 = ((x433*x434)&(x435/x436));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x437 = -49120090LL;
	uint16_t x438 = 17U;
	uint8_t x439 = 18U;
	static int8_t x440 = -6;
	volatile int64_t t82 = 2542514939581031791LL;

	t82 = ((x437*x438)&(x439/x440));

	if (t82 != -835041532LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x445 = INT8_MIN;
	volatile uint64_t x446 = 1389844381537LLU;
	volatile uint64_t x447 = UINT64_MAX;
	int16_t x448 = INT16_MIN;
	uint64_t t83 = 102544LLU;

	t83 = ((x445*x446)&(x447/x448));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x454 = INT32_MAX;
	static int64_t x456 = INT64_MIN;

	t84 = ((x453*x454)&(x455/x456));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x458 = 46U;
	uint64_t x459 = 6889397LLU;
	int32_t x460 = 2555;
	static volatile uint64_t t85 = 670854282717994392LLU;

	t85 = ((x457*x458)&(x459/x460));

	if (t85 != 2688LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = -2366;
	int64_t x462 = -3893LL;
	static int64_t x463 = -1LL;
	static uint64_t x464 = 486284337LLU;
	volatile uint64_t t86 = 152354650796363LLU;

	t86 = ((x461*x462)&(x463/x464));

	if (t86 != 559298LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x469 = 212947973868592LLU;
	static int8_t x470 = INT8_MAX;
	int16_t x471 = -768;
	volatile uint16_t x472 = 1322U;
	volatile uint64_t t87 = 957661790521110LLU;

	t87 = ((x469*x470)&(x471/x472));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x473 = UINT64_MAX;
	volatile int64_t x474 = -1LL;
	int8_t x475 = INT8_MAX;
	int32_t x476 = -1;
	volatile uint64_t t88 = 226550LLU;

	t88 = ((x473*x474)&(x475/x476));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x477 = -1;
	uint32_t x478 = UINT32_MAX;
	uint16_t x479 = 805U;
	volatile int16_t x480 = INT16_MIN;

	t89 = ((x477*x478)&(x479/x480));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x481 = 13;
	static uint64_t x482 = 799215LLU;
	static int32_t x483 = -2262746;
	volatile uint64_t t90 = 109167768LLU;

	t90 = ((x481*x482)&(x483/x484));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x485 = INT16_MAX;
	int16_t x486 = INT16_MAX;
	int64_t x487 = INT64_MIN;
	volatile uint32_t x488 = UINT32_MAX;
	int64_t t91 = 539335364952187LL;

	t91 = ((x485*x486)&(x487/x488));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x490 = 3979LLU;
	static volatile uint8_t x491 = 0U;
	int32_t x492 = -48094802;
	uint64_t t92 = 3354216LLU;

	t92 = ((x489*x490)&(x491/x492));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x493 = INT8_MAX;
	int32_t x495 = 25021;
	static int8_t x496 = 5;
	volatile uint64_t t93 = 9430001750LLU;

	t93 = ((x493*x494)&(x495/x496));

	if (t93 != 4484LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x505 = UINT8_MAX;
	volatile int8_t x506 = -1;
	static int8_t x507 = INT8_MIN;
	static int8_t x508 = INT8_MAX;
	int32_t t94 = -35;

	t94 = ((x505*x506)&(x507/x508));

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x513 = 11U;
	int16_t x514 = INT16_MAX;
	int64_t x515 = 170662338LL;
	volatile uint64_t x516 = UINT64_MAX;
	static uint64_t t95 = 2864507LLU;

	t95 = ((x513*x514)&(x515/x516));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x517 = INT16_MIN;
	int32_t x518 = -1;
	static uint32_t x519 = 7U;
	int32_t x520 = INT32_MIN;
	uint32_t t96 = 1195U;

	t96 = ((x517*x518)&(x519/x520));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = 39;
	uint64_t x522 = 2192LLU;
	int8_t x523 = INT8_MIN;
	volatile int64_t x524 = INT64_MIN;
	volatile uint64_t t97 = 13LLU;

	t97 = ((x521*x522)&(x523/x524));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x529 = INT16_MIN;
	uint32_t x530 = UINT32_MAX;
	static volatile int16_t x531 = -1;
	volatile int8_t x532 = INT8_MAX;

	t98 = ((x529*x530)&(x531/x532));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x533 = 3325771U;
	volatile uint16_t x534 = 12498U;
	volatile int32_t x535 = INT32_MIN;
	uint32_t t99 = 1U;

	t99 = ((x533*x534)&(x535/x536));

	if (t99 != 0U) { NG(); } else { ; }
	
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

