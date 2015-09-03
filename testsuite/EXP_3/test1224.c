#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x6 = 133193U;
int32_t x7 = 128512;
int64_t x9 = INT64_MIN;
int16_t x11 = INT16_MAX;
int64_t x16 = INT64_MAX;
static int64_t t5 = -7793LL;
int32_t x28 = -628096;
static uint64_t x29 = 53500778LLU;
uint8_t x33 = 28U;
static int64_t x40 = INT64_MIN;
static uint16_t x47 = UINT16_MAX;
int32_t t11 = -29268;
static int64_t x58 = -1095390641678923LL;
uint32_t x60 = UINT32_MAX;
uint8_t x70 = UINT8_MAX;
int64_t x74 = INT64_MIN;
volatile int32_t x75 = -13;
int64_t x77 = INT64_MIN;
static uint32_t x80 = 618261255U;
uint64_t x82 = 3827926285524616798LLU;
uint64_t x89 = 1060133596LLU;
int8_t x100 = INT8_MAX;
int32_t x101 = INT32_MAX;
volatile int32_t t24 = 378779;
int8_t x106 = 1;
uint16_t x115 = 3374U;
int8_t x120 = 1;
static int64_t x123 = INT64_MAX;
int16_t x127 = INT16_MIN;
volatile int8_t x129 = INT8_MAX;
volatile int64_t x137 = -1LL;
uint64_t t34 = 20LLU;
uint32_t x146 = 3637132U;
static uint8_t x147 = 0U;
int64_t t35 = 123453484792994797LL;
int32_t x149 = -1;
volatile int8_t x150 = INT8_MAX;
int16_t x151 = -5894;
static int16_t x153 = -1;
volatile int32_t t37 = -12;
volatile int32_t t38 = -13016;
static int32_t t40 = 5;
volatile int64_t x173 = INT64_MIN;
uint64_t x180 = UINT64_MAX;
int32_t t42 = -4522;
static int16_t x190 = INT16_MAX;
uint32_t x192 = UINT32_MAX;
uint32_t x194 = 234U;
volatile uint64_t t46 = 3LLU;
int32_t x199 = INT32_MIN;
int16_t x201 = -993;
int32_t t48 = -1344;
int16_t x214 = INT16_MAX;
volatile int32_t t51 = -3738913;
volatile int16_t x221 = INT16_MIN;
int32_t x227 = INT32_MIN;
volatile int32_t t54 = -686435;
uint64_t t55 = 3901991721LLU;
volatile uint64_t x234 = UINT64_MAX;
volatile int16_t x237 = INT16_MIN;
static int64_t x239 = INT64_MIN;
static int16_t x253 = INT16_MIN;
uint32_t t61 = 27637576U;
int64_t x262 = INT64_MIN;
volatile uint32_t x267 = UINT32_MAX;
int32_t x269 = INT32_MAX;
int32_t x272 = -27916823;
uint8_t x273 = 15U;
uint8_t x275 = 50U;
volatile int32_t t65 = -206817410;
uint32_t x277 = 2U;
uint16_t x279 = UINT16_MAX;
volatile uint8_t x282 = UINT8_MAX;
uint16_t x284 = 140U;
int32_t x285 = INT32_MIN;
int64_t t68 = -4714470178LL;
uint16_t x295 = 8080U;
static int64_t x296 = -1LL;
uint64_t x299 = 17694LLU;
uint8_t x302 = 58U;
int8_t x310 = INT8_MIN;
static volatile int64_t t75 = -114290LL;
static int64_t x319 = INT64_MAX;
uint32_t x320 = 294705679U;
int32_t x336 = 357942;
volatile int64_t t79 = -13LL;
int16_t x341 = -1;
volatile uint64_t x343 = UINT64_MAX;
volatile int32_t t81 = 866820;
uint16_t x346 = UINT16_MAX;
uint32_t x350 = 5134486U;
int8_t x354 = INT8_MAX;
uint8_t x356 = 0U;
int64_t x368 = 2073595399157LL;
int32_t t87 = -7;
uint32_t x375 = UINT32_MAX;
int32_t x382 = INT32_MIN;
int32_t x387 = -1;
volatile int32_t x391 = 961314;
int16_t x400 = -723;
int64_t t95 = 80LL;
int16_t x401 = -1;
uint64_t x402 = UINT64_MAX;
int8_t x403 = -1;
volatile uint32_t x411 = UINT32_MAX;
int16_t x413 = -1;


void f0(void) {
	uint32_t x1 = 16U;
	int16_t x2 = -23;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	volatile uint32_t t0 = 398U;

	t0 = ((x1/x2)-(x3==x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	volatile int8_t x8 = INT8_MAX;
	volatile uint32_t t1 = 514U;

	t1 = ((x5/x6)-(x7==x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	uint8_t x12 = UINT8_MAX;
	static int64_t t2 = -3520406749841945935LL;

	t2 = ((x9/x10)-(x11==x12));

	if (t2 != -281483566907400LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	volatile int8_t x14 = INT8_MIN;
	int32_t x15 = 955540;
	volatile int32_t t3 = -6609;

	t3 = ((x13/x14)-(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 36U;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 1012088LLU;
	volatile int64_t x20 = INT64_MIN;
	static int32_t t4 = 128588823;

	t4 = ((x17/x18)-(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static int32_t x22 = -1;
	uint32_t x23 = 28U;
	int32_t x24 = 1;

	t5 = ((x21/x22)-(x23==x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 0LL;
	int8_t x26 = -1;
	int16_t x27 = 807;
	static int64_t t6 = -274296162229595LL;

	t6 = ((x25/x26)-(x27==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	uint16_t x31 = UINT16_MAX;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 117LLU;

	t7 = ((x29/x30)-(x31==x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x34 = UINT64_MAX;
	uint64_t x35 = UINT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	uint64_t t8 = 274360816517603LLU;

	t8 = ((x33/x34)-(x35==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	volatile int8_t x38 = -5;
	volatile int32_t x39 = INT32_MIN;
	static volatile int32_t t9 = 0;

	t9 = ((x37/x38)-(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile uint8_t x42 = 40U;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t10 = 11304267376LLU;

	t10 = ((x41/x42)-(x43==x44));

	if (t10 != 461168601842738790LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile uint8_t x46 = 5U;
	uint32_t x48 = 179204204U;

	t11 = ((x45/x46)-(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 73U;
	volatile int64_t x50 = INT64_MAX;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 25LLU;
	volatile int64_t t12 = -4LL;

	t12 = ((x49/x50)-(x51==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 1U;
	int64_t x59 = 200400LL;
	static volatile int64_t t13 = 1LL;

	t13 = ((x57/x58)-(x59==x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int8_t x62 = INT8_MIN;
	volatile int8_t x63 = -2;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = 6601;

	t14 = ((x61/x62)-(x63==x64));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	volatile int8_t x66 = INT8_MAX;
	volatile int16_t x67 = INT16_MIN;
	int64_t x68 = 1LL;
	static volatile int32_t t15 = 400;

	t15 = ((x65/x66)-(x67==x68));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = -1;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -1;
	volatile int32_t t16 = -128774763;

	t16 = ((x69/x70)-(x71==x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int8_t x76 = -1;
	int64_t t17 = -335286278719790798LL;

	t17 = ((x73/x74)-(x75==x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x78 = INT16_MAX;
	int64_t x79 = INT64_MIN;
	volatile int64_t t18 = -954863726054506LL;

	t18 = ((x77/x78)-(x79==x80));

	if (t18 != -281483566907400LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 40463229U;
	volatile int16_t x83 = 9;
	int64_t x84 = INT64_MIN;
	uint64_t t19 = 852LLU;

	t19 = ((x81/x82)-(x83==x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 90388;
	uint8_t x86 = 17U;
	uint64_t x87 = 438LLU;
	uint64_t x88 = 3137947378403697LLU;
	int32_t t20 = -19925;

	t20 = ((x85/x86)-(x87==x88));

	if (t20 != 5316) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = 7;
	int32_t x91 = -1;
	volatile uint16_t x92 = UINT16_MAX;
	uint64_t t21 = 1595093LLU;

	t21 = ((x89/x90)-(x91==x92));

	if (t21 != 151447656LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -409583;
	int16_t x94 = -1;
	int16_t x95 = INT16_MIN;
	static uint16_t x96 = 22U;
	int32_t t22 = 119635;

	t22 = ((x93/x94)-(x95==x96));

	if (t22 != 409583) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = -1;
	int8_t x98 = -1;
	static volatile uint64_t x99 = 4164598110678173LLU;
	volatile int32_t t23 = -36438794;

	t23 = ((x97/x98)-(x99==x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	int64_t x104 = 2688629132254254660LL;

	t24 = ((x101/x102)-(x103==x104));

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 92U;
	uint8_t x107 = UINT8_MAX;
	uint8_t x108 = UINT8_MAX;
	static volatile int32_t t25 = 7595928;

	t25 = ((x105/x106)-(x107==x108));

	if (t25 != 91) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	static int8_t x110 = -3;
	static volatile int8_t x111 = INT8_MAX;
	uint16_t x112 = UINT16_MAX;
	int32_t t26 = -331038;

	t26 = ((x109/x110)-(x111==x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 26U;
	uint64_t x114 = UINT64_MAX;
	int16_t x116 = -1;
	static volatile uint64_t t27 = 139767LLU;

	t27 = ((x113/x114)-(x115==x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 59U;
	uint8_t x118 = 2U;
	volatile int16_t x119 = -1;
	volatile uint32_t t28 = 1634781480U;

	t28 = ((x117/x118)-(x119==x120));

	if (t28 != 29U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -4;
	static int32_t x122 = INT32_MIN;
	volatile int32_t x124 = -1;
	int32_t t29 = 91255821;

	t29 = ((x121/x122)-(x123==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 920U;
	static int8_t x126 = INT8_MAX;
	int32_t x128 = -1;
	int32_t t30 = 304034;

	t30 = ((x125/x126)-(x127==x128));

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x130 = UINT16_MAX;
	int64_t x131 = INT64_MIN;
	int8_t x132 = -1;
	static int32_t t31 = 30503;

	t31 = ((x129/x130)-(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = 6364402LLU;
	int32_t x134 = 2;
	volatile int16_t x135 = -1;
	uint32_t x136 = UINT32_MAX;
	uint64_t t32 = 1485027420LLU;

	t32 = ((x133/x134)-(x135==x136));

	if (t32 != 3182200LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MIN;
	uint64_t x139 = UINT64_MAX;
	static int64_t x140 = -202073LL;
	volatile int64_t t33 = 29LL;

	t33 = ((x137/x138)-(x139==x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 57111LLU;
	int16_t x142 = INT16_MIN;
	static uint8_t x143 = 3U;
	uint8_t x144 = UINT8_MAX;

	t34 = ((x141/x142)-(x143==x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile int16_t x148 = -1;

	t35 = ((x145/x146)-(x147==x148));

	if (t35 != -2535891476266LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x152 = -7919841;
	volatile int32_t t36 = 11;

	t36 = ((x149/x150)-(x151==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x154 = INT16_MAX;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 13289667U;

	t37 = ((x153/x154)-(x155==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 8;
	volatile uint16_t x158 = 1416U;
	volatile int32_t x159 = INT32_MIN;
	static volatile uint64_t x160 = UINT64_MAX;

	t38 = ((x157/x158)-(x159==x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 11LLU;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -316;
	static volatile uint64_t t39 = 72789118527LLU;

	t39 = ((x161/x162)-(x163==x164));

	if (t39 != 390451572LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 22;
	static int16_t x166 = INT16_MIN;
	static int64_t x167 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;

	t40 = ((x165/x166)-(x167==x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MAX;
	static int16_t x175 = 3;
	int16_t x176 = INT16_MIN;
	volatile int64_t t41 = 269596604LL;

	t41 = ((x173/x174)-(x175==x176));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = 2;
	int32_t x178 = INT32_MIN;
	static volatile int32_t x179 = INT32_MAX;

	t42 = ((x177/x178)-(x179==x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = -1;
	static int8_t x182 = INT8_MAX;
	int16_t x183 = INT16_MAX;
	volatile uint16_t x184 = 7U;
	static volatile int32_t t43 = -5471972;

	t43 = ((x181/x182)-(x183==x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = -32226801;
	volatile int8_t x186 = -2;
	int16_t x187 = -62;
	uint32_t x188 = 3833U;
	static volatile int32_t t44 = 42075839;

	t44 = ((x185/x186)-(x187==x188));

	if (t44 != 16113400) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = INT16_MIN;
	volatile uint16_t x191 = 18U;
	volatile int32_t t45 = 4;

	t45 = ((x189/x190)-(x191==x192));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 12753LLU;
	uint32_t x195 = 858421U;
	static int8_t x196 = INT8_MIN;

	t46 = ((x193/x194)-(x195==x196));

	if (t46 != 54LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	uint8_t x200 = UINT8_MAX;
	int32_t t47 = -1805;

	t47 = ((x197/x198)-(x199==x200));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x202 = 22;
	int32_t x203 = INT32_MAX;
	int8_t x204 = INT8_MIN;

	t48 = ((x201/x202)-(x203==x204));

	if (t48 != -45) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 189LLU;
	volatile int64_t t49 = 1939556889937LL;

	t49 = ((x205/x206)-(x207==x208));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = -1;
	volatile int32_t x210 = -7124;
	uint16_t x211 = 3U;
	static int64_t x212 = INT64_MAX;
	int32_t t50 = -3697;

	t50 = ((x209/x210)-(x211==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	static volatile uint8_t x215 = 0U;
	volatile uint8_t x216 = UINT8_MAX;

	t51 = ((x213/x214)-(x215==x216));

	if (t51 != -65538) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	volatile uint8_t x218 = 64U;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -15;
	int64_t t52 = -21883LL;

	t52 = ((x217/x218)-(x219==x220));

	if (t52 != -144115188075855872LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x222 = 1U;
	int32_t x223 = 0;
	uint8_t x224 = UINT8_MAX;
	static int32_t t53 = 10616077;

	t53 = ((x221/x222)-(x223==x224));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x225 = UINT8_MAX;
	int8_t x226 = 25;
	int64_t x228 = INT64_MIN;

	t54 = ((x225/x226)-(x227==x228));

	if (t54 != 10) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MAX;
	static volatile uint64_t x230 = 33283597929414191LLU;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -1;

	t55 = ((x229/x230)-(x231==x232));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 174103LLU;
	volatile int32_t x235 = INT32_MIN;
	int64_t x236 = 170LL;
	volatile uint64_t t56 = 576348LLU;

	t56 = ((x233/x234)-(x235==x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x238 = INT16_MAX;
	int8_t x240 = -1;
	volatile int32_t t57 = -1041947;

	t57 = ((x237/x238)-(x239==x240));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = 0;
	static uint16_t x242 = 263U;
	int64_t x243 = -20787012686872LL;
	uint64_t x244 = 18390LLU;
	volatile int32_t t58 = -4;

	t58 = ((x241/x242)-(x243==x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x245 = UINT16_MAX;
	volatile int64_t x246 = -1586LL;
	static uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MIN;
	volatile int64_t t59 = -5874978LL;

	t59 = ((x245/x246)-(x247==x248));

	if (t59 != -41LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = 4084U;
	volatile int64_t x250 = 1015181761187136LL;
	uint64_t x251 = UINT64_MAX;
	volatile int8_t x252 = INT8_MAX;
	int64_t t60 = 8413715LL;

	t60 = ((x249/x250)-(x251==x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x254 = UINT32_MAX;
	int16_t x255 = 10;
	int64_t x256 = INT64_MIN;

	t61 = ((x253/x254)-(x255==x256));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 3U;
	int32_t x263 = 1779203;
	int8_t x264 = INT8_MAX;
	static volatile int64_t t62 = -242570232LL;

	t62 = ((x261/x262)-(x263==x264));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	volatile int8_t x268 = -7;
	volatile int32_t t63 = 1057305083;

	t63 = ((x265/x266)-(x267==x268));

	if (t63 != -255) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x270 = 14;
	volatile int64_t x271 = -1LL;
	static volatile int32_t t64 = -89609;

	t64 = ((x269/x270)-(x271==x272));

	if (t64 != 153391689) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x274 = 1;
	volatile int16_t x276 = 6372;

	t65 = ((x273/x274)-(x275==x276));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x278 = -1LL;
	int8_t x280 = INT8_MIN;
	int64_t t66 = 39756LL;

	t66 = ((x277/x278)-(x279==x280));

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x281 = 8U;
	int32_t x283 = -154600;
	volatile int32_t t67 = 253213388;

	t67 = ((x281/x282)-(x283==x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x286 = INT64_MAX;
	int16_t x287 = 597;
	int32_t x288 = -216;

	t68 = ((x285/x286)-(x287==x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 11U;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	int32_t t69 = -26101860;

	t69 = ((x289/x290)-(x291==x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = 784698717;
	int32_t x294 = INT32_MIN;
	int32_t t70 = -151;

	t70 = ((x293/x294)-(x295==x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = 1;
	int8_t x298 = INT8_MAX;
	int32_t x300 = INT32_MAX;
	int32_t t71 = -210985380;

	t71 = ((x297/x298)-(x299==x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = INT8_MIN;
	int16_t x303 = -1;
	int64_t x304 = INT64_MAX;
	int32_t t72 = -287;

	t72 = ((x301/x302)-(x303==x304));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	static int32_t x308 = 447;
	static uint32_t t73 = 115950U;

	t73 = ((x305/x306)-(x307==x308));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MAX;
	int64_t x311 = -1LL;
	uint16_t x312 = 0U;
	volatile int64_t t74 = 3203377LL;

	t74 = ((x309/x310)-(x311==x312));

	if (t74 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x313 = -1LL;
	uint16_t x314 = 427U;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -1;

	t75 = ((x313/x314)-(x315==x316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = UINT8_MAX;
	int64_t x318 = 943497LL;
	static volatile int64_t t76 = 7477768LL;

	t76 = ((x317/x318)-(x319==x320));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MAX;
	uint8_t x322 = 50U;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = -32;
	int32_t t77 = 962553336;

	t77 = ((x321/x322)-(x323==x324));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MIN;
	static int16_t x330 = INT16_MIN;
	uint64_t x331 = 9450936LLU;
	int32_t x332 = -654;
	volatile int32_t t78 = 66;

	t78 = ((x329/x330)-(x331==x332));

	if (t78 != 65536) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -10588052897257688LL;
	int16_t x334 = INT16_MAX;
	int32_t x335 = INT32_MIN;

	t79 = ((x333/x334)-(x335==x336));

	if (t79 != -323131592677LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 19LLU;
	int64_t x338 = -1LL;
	int32_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	volatile uint64_t t80 = 2070511237LLU;

	t80 = ((x337/x338)-(x339==x340));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x342 = -1;
	int16_t x344 = INT16_MIN;

	t81 = ((x341/x342)-(x343==x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x345 = -1;
	uint64_t x347 = 39LLU;
	uint16_t x348 = 193U;
	static int32_t t82 = 4354;

	t82 = ((x345/x346)-(x347==x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	int32_t x351 = -2505328;
	int64_t x352 = 12225936829LL;
	volatile uint32_t t83 = 506U;

	t83 = ((x349/x350)-(x351==x352));

	if (t83 != 836U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x353 = 1255078027715255LLU;
	int32_t x355 = -1;
	volatile uint64_t t84 = 480LLU;

	t84 = ((x353/x354)-(x355==x356));

	if (t84 != 9882504155238LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = 654;
	int32_t x358 = INT32_MIN;
	int8_t x359 = -15;
	int8_t x360 = INT8_MIN;
	static int32_t t85 = -52;

	t85 = ((x357/x358)-(x359==x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x361 = 113853760LLU;
	volatile int32_t x362 = INT32_MAX;
	int32_t x363 = INT32_MAX;
	static volatile int8_t x364 = INT8_MIN;
	static volatile uint64_t t86 = 460235355847512622LLU;

	t86 = ((x361/x362)-(x363==x364));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	volatile uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MAX;

	t87 = ((x365/x366)-(x367==x368));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x369 = 99950576356729015LLU;
	static int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MAX;
	uint64_t t88 = 121377LLU;

	t88 = ((x369/x370)-(x371==x372));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = 0LLU;
	static int16_t x374 = INT16_MIN;
	int64_t x376 = 18965936629073LL;
	uint64_t t89 = 534836382324574513LLU;

	t89 = ((x373/x374)-(x375==x376));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = 41;
	int32_t x378 = INT32_MIN;
	int32_t x379 = 191515628;
	static uint32_t x380 = UINT32_MAX;
	int32_t t90 = -146182;

	t90 = ((x377/x378)-(x379==x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -21;
	volatile uint16_t x383 = 1546U;
	int32_t x384 = 898;
	int32_t t91 = 38519;

	t91 = ((x381/x382)-(x383==x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MAX;
	static uint16_t x388 = UINT16_MAX;
	volatile int64_t t92 = 2671696032018LL;

	t92 = ((x385/x386)-(x387==x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = 59U;
	uint8_t x390 = 9U;
	volatile uint64_t x392 = UINT64_MAX;
	volatile int32_t t93 = 3;

	t93 = ((x389/x390)-(x391==x392));

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = 68LLU;
	static int8_t x394 = INT8_MIN;
	int16_t x395 = 1;
	volatile uint16_t x396 = UINT16_MAX;
	uint64_t t94 = 21631775LLU;

	t94 = ((x393/x394)-(x395==x396));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	uint16_t x399 = 588U;

	t95 = ((x397/x398)-(x399==x400));

	if (t95 != 32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x404 = -1;
	volatile uint64_t t96 = 6765394106430464LLU;

	t96 = ((x401/x402)-(x403==x404));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = 1720;
	uint64_t x406 = 814471739417742436LLU;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = 94546LLU;
	volatile uint64_t t97 = 2020017862215696LLU;

	t97 = ((x405/x406)-(x407==x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x409 = 56;
	int32_t x410 = INT32_MIN;
	uint64_t x412 = UINT64_MAX;
	static int32_t t98 = 37870;

	t98 = ((x409/x410)-(x411==x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x414 = UINT8_MAX;
	static int8_t x415 = INT8_MIN;
	volatile int8_t x416 = INT8_MIN;
	static volatile int32_t t99 = 3943157;

	t99 = ((x413/x414)-(x415==x416));

	if (t99 != -1) { NG(); } else { ; }
	
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

