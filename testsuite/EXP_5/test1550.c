#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
uint64_t x9 = 26980499338LLU;
uint64_t x10 = 368774LLU;
int8_t x13 = INT8_MIN;
int16_t x14 = -3;
int16_t x17 = INT16_MAX;
uint8_t x20 = UINT8_MAX;
static int32_t t4 = 1072770;
int64_t t5 = -94251866LL;
volatile uint64_t t7 = 2406480679696290LLU;
static uint64_t x33 = 2550557LLU;
static volatile int16_t x37 = INT16_MIN;
volatile int16_t x39 = INT16_MAX;
static int8_t x41 = 30;
volatile int32_t x43 = INT32_MIN;
uint64_t x45 = 2098518785057808LLU;
uint64_t x47 = 484275363985853LLU;
static int8_t x54 = 18;
static int8_t x56 = 0;
volatile int64_t x57 = -6LL;
int16_t x60 = INT16_MIN;
static int64_t t14 = 3840510528985768LL;
volatile uint32_t x67 = UINT32_MAX;
int32_t x68 = -1;
static volatile int64_t x69 = 256918LL;
int64_t t16 = -1LL;
int64_t x73 = INT64_MIN;
static int16_t x75 = INT16_MIN;
volatile int8_t x83 = INT8_MIN;
static int64_t x85 = -1LL;
int8_t x89 = -1;
int64_t x91 = INT64_MAX;
volatile int32_t x93 = 222;
volatile int16_t x94 = -1;
static int32_t t21 = 6973361;
int64_t x98 = INT64_MAX;
static uint16_t x99 = UINT16_MAX;
static uint64_t x103 = 32769147132LLU;
int32_t t23 = -30041117;
int8_t x106 = INT8_MIN;
volatile int64_t t24 = 19761931LL;
static uint8_t x110 = 15U;
static uint32_t x126 = UINT32_MAX;
int32_t x128 = INT32_MIN;
int64_t x129 = -1LL;
uint32_t x130 = 124U;
static int8_t x133 = -11;
volatile int8_t x134 = INT8_MAX;
int64_t x136 = 449LL;
int64_t x139 = INT64_MIN;
volatile uint16_t x144 = 0U;
int64_t t34 = 196990807369591LL;
int16_t x162 = INT16_MIN;
int32_t t37 = -14802;
uint16_t x189 = UINT16_MAX;
volatile int32_t x190 = -1;
uint8_t x196 = UINT8_MAX;
static int32_t t44 = 8949;
int64_t t46 = 3836452580871LL;
int32_t x206 = INT32_MIN;
int64_t x207 = INT64_MIN;
static int16_t x210 = 183;
int8_t x216 = -3;
static int64_t x219 = INT64_MIN;
int32_t x220 = -1;
int64_t x223 = INT64_MAX;
int32_t t51 = -746324;
int8_t x225 = -1;
volatile int32_t t52 = 1310118;
int64_t x229 = INT64_MIN;
int32_t x243 = INT32_MAX;
int64_t x246 = INT64_MIN;
uint8_t x247 = 11U;
int32_t t56 = 231;
volatile uint8_t x253 = 5U;
uint32_t x254 = UINT32_MAX;
volatile int64_t x258 = -1LL;
volatile int32_t t60 = 60971507;
volatile uint64_t t62 = 2470627148941540152LLU;
uint32_t x282 = UINT32_MAX;
int32_t x287 = INT32_MAX;
volatile int8_t x290 = INT8_MIN;
volatile int16_t x293 = -1;
static volatile int16_t x294 = -1;
int32_t t67 = -170;
int32_t x303 = 408160840;
int32_t x306 = 663;
int16_t x307 = 20;
int8_t x316 = INT8_MIN;
uint32_t x319 = 18964U;
uint32_t x320 = 1273291U;
static volatile uint32_t x367 = 7U;
static volatile int8_t x376 = INT8_MIN;
static uint32_t x383 = 52349U;
volatile uint16_t x385 = 3U;
int64_t x387 = INT64_MIN;
volatile uint32_t x391 = 130517034U;
static int8_t x406 = 61;
volatile int32_t t83 = 51986;
uint8_t x409 = UINT8_MAX;
static uint16_t x413 = 1793U;
uint16_t x414 = UINT16_MAX;
int32_t x422 = -1;
volatile uint64_t x425 = 2397410136687412837LLU;
int8_t x428 = 10;
volatile int16_t x439 = -1;
static volatile int32_t t89 = -5509295;
uint8_t x441 = 8U;
static int32_t x442 = INT32_MIN;
uint8_t x446 = 15U;
int8_t x456 = 4;
static uint16_t x464 = 771U;
static int8_t x473 = INT8_MIN;
int8_t x475 = INT8_MIN;
volatile int16_t x488 = -1;
volatile int32_t t99 = -1983;


void f0(void) {
	uint8_t x1 = 0U;
	volatile int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MAX;
	static int8_t x4 = INT8_MAX;
	int32_t t0 = -8370691;

	t0 = (x1*((x2<=x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	static uint32_t x7 = UINT32_MAX;
	int32_t x8 = -248;
	volatile int32_t t1 = 426819684;

	t1 = (x5*((x6<=x7)*x8));

	if (t1 != 248) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MAX;
	volatile uint32_t x12 = 148349U;
	volatile uint64_t t2 = 38LLU;

	t2 = (x9*((x10<=x11)*x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x15 = INT8_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	static volatile int32_t t3 = 291056432;

	t3 = (x13*((x14<=x15)*x16));

	if (t3 != -8388480) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = 1130218319156448LLU;

	t4 = (x17*((x18<=x19)*x20));

	if (t4 != 8355585) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -25957746LL;
	int8_t x22 = -4;
	int32_t x23 = -1;
	int16_t x24 = -78;

	t5 = (x21*((x22<=x23)*x24));

	if (t5 != 2024704188LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -22;
	int32_t x26 = -1;
	volatile int8_t x27 = INT8_MAX;
	volatile uint8_t x28 = UINT8_MAX;
	int32_t t6 = -8;

	t6 = (x25*((x26<=x27)*x28));

	if (t6 != -5610) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 7LLU;
	int32_t x30 = 721889316;
	int64_t x31 = 43556218710894LL;
	int32_t x32 = INT32_MIN;

	t7 = (x29*((x30<=x31)*x32));

	if (t7 != 18446744058677166080LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	uint16_t x35 = 1U;
	uint16_t x36 = 1U;
	volatile uint64_t t8 = 990LLU;

	t8 = (x33*((x34<=x35)*x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 2U;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 12809934;

	t9 = (x37*((x38<=x39)*x40));

	if (t9 != -4161536) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x42 = UINT32_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 12425286LLU;

	t10 = (x41*((x42<=x43)*x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -1734794;
	int8_t x48 = 1;
	uint64_t t11 = 8610176810LLU;

	t11 = (x45*((x46<=x47)*x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 1750746359LLU;
	int8_t x55 = 56;
	uint64_t t12 = 442897468LLU;

	t12 = (x53*((x54<=x55)*x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = INT8_MAX;
	static volatile int64_t x59 = INT64_MIN;
	int64_t t13 = -1193401891945295168LL;

	t13 = (x57*((x58<=x59)*x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 2481;
	int32_t x62 = INT32_MIN;
	static int16_t x63 = INT16_MIN;
	int64_t x64 = 1LL;

	t14 = (x61*((x62<=x63)*x64));

	if (t14 != 2481LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 1017U;
	volatile int64_t x66 = 9662261367081143LL;
	int32_t t15 = 11084581;

	t15 = (x65*((x66<=x67)*x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x70 = 6638469LL;
	static uint32_t x71 = 3U;
	int32_t x72 = INT32_MIN;

	t16 = (x69*((x70<=x71)*x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	volatile int64_t t17 = -35870LL;

	t17 = (x73*((x74<=x75)*x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 0U;
	volatile int8_t x82 = -11;
	int32_t x84 = INT32_MAX;
	volatile int32_t t18 = -2890;

	t18 = (x81*((x82<=x83)*x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = INT8_MAX;
	static uint8_t x87 = 2U;
	uint64_t x88 = 320435771253315LLU;
	uint64_t t19 = 54811862LLU;

	t19 = (x85*((x86<=x87)*x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x90 = INT64_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	uint64_t t20 = 4577334LLU;

	t20 = (x89*((x90<=x91)*x92));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x95 = UINT64_MAX;
	static int16_t x96 = -1;

	t21 = (x93*((x94<=x95)*x96));

	if (t21 != -222) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -122762321;
	int8_t x100 = INT8_MAX;
	int32_t t22 = 37;

	t22 = (x97*((x98<=x99)*x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 861956131;
	static int64_t x102 = 35398175566366LL;
	static int16_t x104 = 2456;

	t23 = (x101*((x102<=x103)*x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = 517755LL;
	volatile uint64_t x107 = 241566177356973LLU;
	int16_t x108 = INT16_MIN;

	t24 = (x105*((x106<=x107)*x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = 4027735U;
	int32_t x111 = -1;
	int32_t x112 = INT32_MAX;
	uint32_t t25 = 1415U;

	t25 = (x109*((x110<=x111)*x112));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	uint32_t x118 = 31U;
	volatile uint32_t x119 = 732U;
	int16_t x120 = INT16_MAX;
	int32_t t26 = -161633;

	t26 = (x117*((x118<=x119)*x120));

	if (t26 != -1073709056) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	volatile int32_t x122 = INT32_MAX;
	int64_t x123 = -1LL;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t27 = 62502510876494LL;

	t27 = (x121*((x122<=x123)*x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = INT64_MIN;
	uint32_t x127 = 89U;
	volatile int64_t t28 = -7310113557992509LL;

	t28 = (x125*((x126<=x127)*x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x131 = -14904LL;
	volatile int64_t x132 = 9LL;
	static volatile int64_t t29 = -43696LL;

	t29 = (x129*((x130<=x131)*x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x135 = 2;
	volatile int64_t t30 = -17700243252550759LL;

	t30 = (x133*((x134<=x135)*x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 9672LLU;
	static int32_t x138 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t31 = 100LLU;

	t31 = (x137*((x138<=x139)*x140));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	uint64_t x142 = 8041826226LLU;
	static volatile uint64_t x143 = 3251096043422260999LLU;
	int32_t t32 = -1952;

	t32 = (x141*((x142<=x143)*x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 3U;
	static uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 14U;
	volatile int32_t t33 = -14480;

	t33 = (x145*((x146<=x147)*x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = -1LL;
	int8_t x154 = -1;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = UINT32_MAX;

	t34 = (x153*((x154<=x155)*x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t35 = -763;

	t35 = (x157*((x158<=x159)*x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x161 = 1;
	int16_t x163 = -1;
	static int16_t x164 = INT16_MIN;
	int32_t t36 = 619998912;

	t36 = (x161*((x162<=x163)*x164));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MAX;
	static int8_t x167 = 1;
	int16_t x168 = -650;

	t37 = (x165*((x166<=x167)*x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 1191U;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;
	static uint32_t t38 = 1773U;

	t38 = (x169*((x170<=x171)*x172));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = 4909;
	static int16_t x174 = 145;
	static volatile int16_t x175 = -1;
	int64_t x176 = 16537374LL;
	static int64_t t39 = -19113LL;

	t39 = (x173*((x174<=x175)*x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	volatile uint16_t x178 = 27U;
	int8_t x179 = INT8_MIN;
	static uint8_t x180 = 15U;
	volatile int32_t t40 = 44497;

	t40 = (x177*((x178<=x179)*x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x181 = INT8_MIN;
	int32_t x182 = -1;
	static int8_t x183 = INT8_MAX;
	static uint16_t x184 = 2U;
	static int32_t t41 = 399608050;

	t41 = (x181*((x182<=x183)*x184));

	if (t41 != -256) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -1;
	int64_t x186 = INT64_MAX;
	uint32_t x187 = 54705841U;
	int16_t x188 = -22;
	int32_t t42 = -21;

	t42 = (x185*((x186<=x187)*x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x191 = -31;
	int64_t x192 = INT64_MIN;
	int64_t t43 = 1278LL;

	t43 = (x189*((x190<=x191)*x192));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 0U;

	t44 = (x193*((x194<=x195)*x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 28U;
	uint64_t x198 = 15639542380499232LLU;
	int8_t x199 = 42;
	int32_t x200 = INT32_MAX;
	int32_t t45 = 198;

	t45 = (x197*((x198<=x199)*x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -26LL;
	int32_t x204 = INT32_MIN;

	t46 = (x201*((x202<=x203)*x204));

	if (t46 != 2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	int8_t x208 = 3;
	int32_t t47 = -27389;

	t47 = (x205*((x206<=x207)*x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	int32_t x211 = INT32_MIN;
	static uint16_t x212 = UINT16_MAX;
	volatile int32_t t48 = -12;

	t48 = (x209*((x210<=x211)*x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -1302;
	static int32_t x214 = -6;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t49 = 39088;

	t49 = (x213*((x214<=x215)*x216));

	if (t49 != 3906) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 1615U;
	volatile int8_t x218 = INT8_MIN;
	volatile int32_t t50 = 47806;

	t50 = (x217*((x218<=x219)*x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = 6;
	volatile int32_t x222 = INT32_MAX;
	int8_t x224 = INT8_MIN;

	t51 = (x221*((x222<=x223)*x224));

	if (t51 != -768) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x226 = INT8_MIN;
	static uint16_t x227 = 214U;
	int32_t x228 = INT32_MAX;

	t52 = (x225*((x226<=x227)*x228));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x230 = INT32_MIN;
	uint64_t x231 = 75874828LLU;
	static int16_t x232 = -3973;
	static volatile int64_t t53 = -1177344872578486LL;

	t53 = (x229*((x230<=x231)*x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = 5;
	int32_t x234 = INT32_MIN;
	int32_t x235 = -252246;
	static int32_t x236 = -1;
	static int32_t t54 = 264;

	t54 = (x233*((x234<=x235)*x236));

	if (t54 != -5) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 1729403567LLU;
	int32_t x242 = INT32_MIN;
	int32_t x244 = -3032187;
	uint64_t t55 = 392364742500LLU;

	t55 = (x241*((x242<=x243)*x244));

	if (t55 != 18441500198695940587LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x245 = -1;
	int16_t x248 = INT16_MIN;

	t56 = (x245*((x246<=x247)*x248));

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = 73;
	uint64_t x250 = 3LLU;
	int8_t x251 = INT8_MAX;
	static uint16_t x252 = 0U;
	static volatile int32_t t57 = -238337;

	t57 = (x249*((x250<=x251)*x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x255 = INT8_MAX;
	volatile int64_t x256 = INT64_MAX;
	static int64_t t58 = 36930222934079188LL;

	t58 = (x253*((x254<=x255)*x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = 0;
	int64_t x259 = INT64_MAX;
	uint32_t x260 = 3686239U;
	uint32_t t59 = 414957U;

	t59 = (x257*((x258<=x259)*x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	volatile int32_t x262 = -251424;
	uint64_t x263 = 1306609663439071LLU;
	int8_t x264 = 11;

	t60 = (x261*((x262<=x263)*x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -1;
	static uint32_t x274 = UINT32_MAX;
	int8_t x275 = -6;
	int32_t x276 = INT32_MIN;
	static int32_t t61 = -21309;

	t61 = (x273*((x274<=x275)*x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = -7;
	volatile int32_t x279 = 6;
	uint64_t x280 = 15463LLU;

	t62 = (x277*((x278<=x279)*x280));

	if (t62 != 506676121LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x281 = 596351263609LLU;
	static uint64_t x283 = 8282563790259419992LLU;
	static int64_t x284 = INT64_MIN;
	uint64_t t63 = 3LLU;

	t63 = (x281*((x282<=x283)*x284));

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x285 = -1;
	static uint32_t x286 = UINT32_MAX;
	int16_t x288 = -1;
	static int32_t t64 = 661275345;

	t64 = (x285*((x286<=x287)*x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MAX;
	volatile int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	volatile int64_t t65 = 687LL;

	t65 = (x289*((x290<=x291)*x292));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x295 = INT8_MIN;
	static uint64_t x296 = 520841137LLU;
	volatile uint64_t t66 = 12LLU;

	t66 = (x293*((x294<=x295)*x296));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x297 = 24U;
	volatile int8_t x298 = -14;
	int16_t x299 = INT16_MAX;
	static volatile int8_t x300 = -1;

	t67 = (x297*((x298<=x299)*x300));

	if (t67 != -24) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = -1;
	int16_t x304 = INT16_MIN;
	volatile int32_t t68 = -6802;

	t68 = (x301*((x302<=x303)*x304));

	if (t68 != 1073741824) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = UINT32_MAX;
	uint16_t x308 = 1U;
	static uint32_t t69 = 253977717U;

	t69 = (x305*((x306<=x307)*x308));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = 3U;
	int8_t x311 = -1;
	int32_t x312 = INT32_MAX;
	volatile int32_t t70 = 1407552;

	t70 = (x309*((x310<=x311)*x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	uint64_t t71 = 793LLU;

	t71 = (x313*((x314<=x315)*x316));

	if (t71 != 128LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int32_t x318 = 1;
	volatile uint64_t t72 = 26855786209928LLU;

	t72 = (x317*((x318<=x319)*x320));

	if (t72 != 18446744073708278325LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = -1;
	static uint16_t x322 = 1050U;
	volatile uint16_t x323 = UINT16_MAX;
	uint16_t x324 = 40U;
	static volatile int32_t t73 = 0;

	t73 = (x321*((x322<=x323)*x324));

	if (t73 != -40) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MIN;
	static int8_t x338 = -1;
	uint64_t x339 = 296731LLU;
	uint8_t x340 = 64U;
	static volatile int32_t t74 = -478658;

	t74 = (x337*((x338<=x339)*x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = 8U;
	uint64_t x342 = 44350744840494702LLU;
	int32_t x343 = -29944380;
	int64_t x344 = -1540715780LL;
	volatile int64_t t75 = 484175779872412400LL;

	t75 = (x341*((x342<=x343)*x344));

	if (t75 != -12325726240LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = -1;
	volatile int16_t x362 = INT16_MAX;
	static volatile uint32_t x363 = 32596854U;
	uint32_t x364 = 10U;
	volatile uint32_t t76 = 1783268951U;

	t76 = (x361*((x362<=x363)*x364));

	if (t76 != 4294967286U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = INT32_MIN;
	static int16_t x366 = INT16_MIN;
	static volatile uint32_t x368 = UINT32_MAX;
	volatile uint32_t t77 = 82942356U;

	t77 = (x365*((x366<=x367)*x368));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x369 = UINT8_MAX;
	static volatile uint32_t x370 = 54628405U;
	uint32_t x371 = 5U;
	int64_t x372 = 1LL;
	volatile int64_t t78 = -163109696LL;

	t78 = (x369*((x370<=x371)*x372));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x373 = 681797136LLU;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = UINT8_MAX;
	uint64_t t79 = 478131168031416641LLU;

	t79 = (x373*((x374<=x375)*x376));

	if (t79 != 18446743986439518208LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x381 = INT64_MAX;
	int8_t x382 = INT8_MAX;
	uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t80 = 97872LLU;

	t80 = (x381*((x382<=x383)*x384));

	if (t80 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x386 = 36U;
	volatile int8_t x388 = INT8_MIN;
	static volatile int32_t t81 = 25;

	t81 = (x385*((x386<=x387)*x388));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x389 = INT16_MIN;
	static int64_t x390 = -1LL;
	static volatile uint32_t x392 = 24062229U;
	uint32_t t82 = 3912U;

	t82 = (x389*((x390<=x391)*x392));

	if (t82 != 1802862592U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = INT32_MAX;
	volatile int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;

	t83 = (x405*((x406<=x407)*x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = -1;
	int32_t t84 = 53715;

	t84 = (x409*((x410<=x411)*x412));

	if (t84 != -255) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x415 = INT64_MIN;
	int32_t x416 = INT32_MIN;
	int32_t t85 = 13311840;

	t85 = (x413*((x414<=x415)*x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x421 = 59837012LL;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 109U;
	volatile int64_t t86 = -30169987556LL;

	t86 = (x421*((x422<=x423)*x424));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x426 = INT16_MIN;
	uint8_t x427 = UINT8_MAX;
	uint64_t t87 = 37399164391922537LLU;

	t87 = (x425*((x426<=x427)*x428));

	if (t87 != 5527357293164576754LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x433 = -9385768;
	uint32_t x434 = UINT32_MAX;
	uint8_t x435 = UINT8_MAX;
	int32_t x436 = -77862019;
	volatile int32_t t88 = -8035069;

	t88 = (x433*((x434<=x435)*x436));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint8_t x440 = 1U;

	t89 = (x437*((x438<=x439)*x440));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x443 = 46267914564LLU;
	volatile uint8_t x444 = 6U;
	int32_t t90 = 2110025;

	t90 = (x441*((x442<=x443)*x444));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x445 = UINT8_MAX;
	int16_t x447 = -1;
	int64_t x448 = INT64_MIN;
	volatile int64_t t91 = -5372403326580500LL;

	t91 = (x445*((x446<=x447)*x448));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MIN;
	static int32_t t92 = -10;

	t92 = (x453*((x454<=x455)*x456));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x457 = INT16_MIN;
	volatile uint16_t x458 = 13584U;
	uint64_t x459 = 7248595798855621LLU;
	int16_t x460 = INT16_MIN;
	volatile int32_t t93 = -7303618;

	t93 = (x457*((x458<=x459)*x460));

	if (t93 != 1073741824) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x461 = UINT16_MAX;
	volatile int16_t x462 = INT16_MIN;
	volatile uint8_t x463 = 1U;
	int32_t t94 = -215;

	t94 = (x461*((x462<=x463)*x464));

	if (t94 != 50527485) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x469 = 223633006U;
	uint16_t x470 = UINT16_MAX;
	volatile uint8_t x471 = 34U;
	uint64_t x472 = 136304211120974LLU;
	uint64_t t95 = 937208773838LLU;

	t95 = (x469*((x470<=x471)*x472));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x474 = -1;
	volatile uint32_t x476 = 915857U;
	uint32_t t96 = 537449U;

	t96 = (x473*((x474<=x475)*x476));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x477 = -491768957498364LL;
	int32_t x478 = -134096956;
	volatile int64_t x479 = INT64_MIN;
	volatile int32_t x480 = 55;
	int64_t t97 = -1891580539279LL;

	t97 = (x477*((x478<=x479)*x480));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = -28708892917160637LL;
	static uint16_t x482 = UINT16_MAX;
	int64_t x483 = -2815241LL;
	static int64_t x484 = INT64_MAX;
	int64_t t98 = -686LL;

	t98 = (x481*((x482<=x483)*x484));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x485 = 3U;
	volatile int32_t x486 = -1;
	static volatile int64_t x487 = INT64_MIN;

	t99 = (x485*((x486<=x487)*x488));

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

