#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = INT8_MIN;
uint8_t x26 = UINT8_MAX;
int32_t x32 = -1;
int8_t x46 = 2;
static int32_t t6 = 119;
int16_t x49 = -1;
static volatile int64_t x52 = INT64_MIN;
int16_t x56 = -1;
volatile int32_t x61 = -1;
static volatile int8_t x65 = -5;
volatile int8_t x73 = INT8_MIN;
static volatile uint32_t t13 = 1777878754U;
volatile int64_t t15 = -33732181822577LL;
int8_t x87 = INT8_MIN;
uint64_t x101 = UINT64_MAX;
static uint32_t t21 = 139252U;
int8_t x117 = 45;
static uint16_t x121 = UINT16_MAX;
static uint32_t x122 = UINT32_MAX;
uint64_t t24 = 9083522028726LLU;
volatile int16_t x130 = 428;
static int32_t x135 = 626732;
uint8_t x142 = UINT8_MAX;
int32_t t27 = 231415008;
int64_t x145 = INT64_MIN;
int64_t x146 = INT64_MIN;
int8_t x156 = INT8_MIN;
static int8_t x160 = INT8_MIN;
volatile int32_t t31 = 5918;
int64_t x165 = 4322391051084LL;
uint64_t x167 = 64286191075LLU;
volatile int32_t t34 = 208205;
uint32_t x190 = 1047U;
uint32_t t36 = 37141U;
int8_t x197 = INT8_MIN;
volatile int32_t t38 = 29888;
int8_t x203 = INT8_MAX;
int64_t x209 = 125251LL;
uint64_t t40 = 7852327430415169709LLU;
static int8_t x220 = -1;
int32_t x222 = INT32_MIN;
uint16_t x226 = UINT16_MAX;
volatile uint16_t x228 = UINT16_MAX;
static uint64_t t44 = 179382778190881LLU;
volatile int8_t x234 = INT8_MIN;
int16_t x238 = INT16_MAX;
volatile uint64_t x240 = 1LLU;
uint8_t x245 = 59U;
uint64_t t48 = 55064LLU;
uint8_t x262 = 3U;
static int16_t x263 = -1106;
int16_t x264 = 299;
static uint32_t t50 = 26U;
int8_t x280 = -1;
static int8_t x284 = -1;
static volatile int32_t t53 = 0;
int8_t x285 = 0;
uint32_t t54 = 0U;
uint16_t x298 = 428U;
int64_t x302 = INT64_MAX;
static int64_t x303 = -1LL;
int32_t t58 = -1;
int32_t x313 = -151;
int32_t x314 = INT32_MIN;
int16_t x323 = 8837;
int64_t x324 = -1LL;
volatile uint8_t x330 = UINT8_MAX;
volatile int32_t t62 = 1;
int64_t x334 = INT64_MIN;
int32_t x338 = -826235749;
volatile int8_t x339 = INT8_MIN;
volatile uint64_t t66 = 1106058033070066498LLU;
uint64_t x351 = 43522887LLU;
static int16_t x360 = -1;
static volatile int16_t x361 = INT16_MAX;
static uint32_t x363 = 109357U;
static int16_t x371 = INT16_MIN;
int32_t x372 = 232;
int16_t x381 = INT16_MAX;
volatile uint8_t x386 = 5U;
volatile int32_t t73 = 3774;
int8_t x390 = -1;
int32_t x391 = 940170;
int8_t x399 = INT8_MAX;
volatile int64_t t76 = 411359472618099LL;
int16_t x405 = INT16_MIN;
volatile int16_t x407 = -1;
int32_t t78 = 66109;
int64_t x412 = 433606150LL;
volatile uint64_t t81 = 210357873LLU;
static int8_t x421 = INT8_MIN;
static uint16_t x422 = 645U;
static uint16_t x427 = 79U;
static int8_t x428 = INT8_MIN;
volatile uint32_t t84 = 2271U;
uint16_t x445 = 12154U;
uint16_t x446 = 24U;
int16_t x450 = INT16_MIN;
int32_t x454 = -1;
int8_t x458 = -21;
int32_t x459 = -3;
int16_t x465 = INT16_MIN;
int32_t t91 = -20601663;
uint64_t x478 = UINT64_MAX;
static uint64_t t93 = 1LLU;
int32_t x482 = INT32_MAX;
int8_t x484 = INT8_MIN;
int32_t t94 = 22411;
int16_t x486 = INT16_MAX;
volatile int16_t x488 = INT16_MAX;
static int64_t t98 = -12728052LL;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x7 = INT8_MIN;
	volatile uint32_t x8 = 401848U;
	uint32_t t0 = 16827U;

	t0 = ((x5%x6)&(x7*x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	int64_t x11 = 55474276LL;
	uint64_t x12 = 41871200334LLU;
	volatile uint64_t t1 = 5391367162582204991LLU;

	t1 = ((x9%x10)&(x11*x12));

	if (t1 != 2322774523779579904LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 177195LL;
	int32_t x14 = INT32_MIN;
	static int16_t x15 = -1;
	int16_t x16 = -14;
	int64_t t2 = -523LL;

	t2 = ((x13%x14)&(x15*x16));

	if (t2 != 10LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x25 = 120U;
	uint64_t x27 = 969647021LLU;
	uint16_t x28 = 34U;
	volatile uint64_t t3 = 1404031594406521LLU;

	t3 = ((x25%x26)&(x27*x28));

	if (t3 != 120LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x29 = INT32_MIN;
	volatile int32_t x30 = -1309193;
	int8_t x31 = INT8_MAX;
	volatile int32_t t4 = 33647746;

	t4 = ((x29%x30)&(x31*x32));

	if (t4 != -407168) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x37 = 20674LLU;
	static uint64_t x38 = 205122LLU;
	int16_t x39 = INT16_MIN;
	int32_t x40 = -1;
	uint64_t t5 = 108973439LLU;

	t5 = ((x37%x38)&(x39*x40));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x45 = 3;
	uint16_t x47 = UINT16_MAX;
	static volatile int16_t x48 = 4;

	t6 = ((x45%x46)&(x47*x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x50 = 1U;
	uint64_t x51 = UINT64_MAX;
	volatile uint64_t t7 = 10687871084021948LLU;

	t7 = ((x49%x50)&(x51*x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x53 = 30;
	uint32_t x54 = 16794U;
	int16_t x55 = INT16_MIN;
	uint32_t t8 = 342U;

	t8 = ((x53%x54)&(x55*x56));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = INT16_MIN;
	static int8_t x58 = -1;
	volatile uint8_t x59 = 1U;
	static int8_t x60 = 1;
	int32_t t9 = -467029;

	t9 = ((x57%x58)&(x59*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	int16_t x64 = 0;
	int32_t t10 = -3106870;

	t10 = ((x61%x62)&(x63*x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x66 = 240U;
	static uint64_t x67 = 135757729395LLU;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t11 = 19803512582983927LLU;

	t11 = ((x65%x66)&(x67*x68));

	if (t11 != 8896882795901321LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x69 = UINT8_MAX;
	static int8_t x70 = INT8_MIN;
	static int16_t x71 = 0;
	static int16_t x72 = -438;
	int32_t t12 = -12755;

	t12 = ((x69%x70)&(x71*x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x74 = UINT8_MAX;
	uint32_t x75 = UINT32_MAX;
	volatile int32_t x76 = 81156;

	t13 = ((x73%x74)&(x75*x76));

	if (t13 != 4294886016U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = 354;
	static volatile int64_t x78 = INT64_MIN;
	uint64_t x79 = 598897640654LLU;
	uint8_t x80 = 0U;
	volatile uint64_t t14 = 47450LLU;

	t14 = ((x77%x78)&(x79*x80));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x82 = 28U;
	int16_t x83 = -11;
	int32_t x84 = -1;

	t15 = ((x81%x82)&(x83*x84));

	if (t15 != 8LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x85 = INT16_MAX;
	int16_t x86 = -1681;
	int16_t x88 = INT16_MAX;
	int32_t t16 = 2954;

	t16 = ((x85%x86)&(x87*x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x93 = -5756;
	static int32_t x94 = INT32_MIN;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = -331;
	static volatile uint64_t t17 = 2303LLU;

	t17 = ((x93%x94)&(x95*x96));

	if (t17 != 256LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MAX;
	static int16_t x98 = INT16_MAX;
	uint32_t x99 = UINT32_MAX;
	int32_t x100 = -2;
	int64_t t18 = -1011587762186667660LL;

	t18 = ((x97%x98)&(x99*x100));

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x102 = -40592;
	int16_t x103 = INT16_MIN;
	int16_t x104 = 45;
	volatile uint64_t t19 = 16917LLU;

	t19 = ((x101%x102)&(x103*x104));

	if (t19 != 32768LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x105 = 2;
	volatile int8_t x106 = 2;
	int8_t x107 = INT8_MIN;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t20 = -6;

	t20 = ((x105%x106)&(x107*x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 2;
	uint32_t x110 = 6U;
	int8_t x111 = -1;
	int32_t x112 = -1;

	t21 = ((x109%x110)&(x111*x112));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = 67U;
	int8_t x114 = 39;
	volatile uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 322175677LLU;
	volatile uint64_t t22 = 17158245152808LLU;

	t22 = ((x113%x114)&(x115*x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x118 = 24U;
	uint32_t x119 = 79051U;
	int32_t x120 = INT32_MIN;
	volatile uint32_t t23 = 1142520485U;

	t23 = ((x117%x118)&(x119*x120));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x123 = -1203031838974LL;
	volatile uint64_t x124 = 16875937629376LLU;

	t24 = ((x121%x122)&(x123*x124));

	if (t24 != 18816LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x129 = -36865060;
	volatile uint32_t x131 = 799995364U;
	static int16_t x132 = -1;
	volatile uint32_t t25 = 4U;

	t25 = ((x129%x130)&(x131*x132));

	if (t25 != 3494971928U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MAX;
	int32_t x134 = 101;
	uint16_t x136 = 46U;
	int32_t t26 = 31;

	t26 = ((x133%x134)&(x135*x136));

	if (t26 != 40) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = -1;
	int32_t x143 = INT32_MAX;
	volatile int16_t x144 = -1;

	t27 = ((x141%x142)&(x143*x144));

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x147 = 4U;
	volatile int64_t x148 = -1LL;
	volatile int64_t t28 = -137LL;

	t28 = ((x145%x146)&(x147*x148));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint8_t x150 = 18U;
	int16_t x151 = -7399;
	int16_t x152 = INT16_MAX;
	volatile uint64_t t29 = 65973719242297571LLU;

	t29 = ((x149%x150)&(x151*x152));

	if (t29 != 7LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = 4213;
	static int64_t x154 = INT64_MIN;
	int16_t x155 = 53;
	static volatile int64_t t30 = 836143919LL;

	t30 = ((x153%x154)&(x155*x156));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = 1;
	static uint16_t x158 = 43U;
	volatile int8_t x159 = INT8_MIN;

	t31 = ((x157%x158)&(x159*x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x166 = -1;
	static int16_t x168 = -1;
	static uint64_t t32 = 3062283768020697LLU;

	t32 = ((x165%x166)&(x167*x168));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x169 = -1;
	static int16_t x170 = 1;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MAX;
	int32_t t33 = 29;

	t33 = ((x169%x170)&(x171*x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = 4U;
	int16_t x176 = INT16_MAX;

	t34 = ((x173%x174)&(x175*x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x177 = 18U;
	volatile int8_t x178 = -1;
	volatile uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	volatile uint32_t t35 = 378U;

	t35 = ((x177%x178)&(x179*x180));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x189 = 4;
	volatile int8_t x191 = 1;
	uint32_t x192 = UINT32_MAX;

	t36 = ((x189%x190)&(x191*x192));

	if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = -1LL;
	int32_t x194 = INT32_MIN;
	uint8_t x195 = 1U;
	int8_t x196 = 6;
	volatile int64_t t37 = 69LL;

	t37 = ((x193%x194)&(x195*x196));

	if (t37 != 6LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x198 = 1;
	int16_t x199 = -5954;
	int8_t x200 = -1;

	t38 = ((x197%x198)&(x199*x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x201 = INT8_MAX;
	int64_t x202 = INT64_MAX;
	static uint8_t x204 = UINT8_MAX;
	volatile int64_t t39 = 10237361075659884LL;

	t39 = ((x201%x202)&(x203*x204));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x210 = INT8_MAX;
	int64_t x211 = INT64_MIN;
	uint64_t x212 = 12601123909870LLU;

	t40 = ((x209%x210)&(x211*x212));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = -1;
	uint64_t x218 = 1441777833075LLU;
	uint32_t x219 = 23363U;
	static volatile uint64_t t41 = 1373580LLU;

	t41 = ((x217%x218)&(x219*x220));

	if (t41 != 365002881LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x221 = 6059291U;
	uint64_t x223 = UINT64_MAX;
	static int32_t x224 = -11;
	uint64_t t42 = 41138971667820253LLU;

	t42 = ((x221%x222)&(x223*x224));

	if (t42 != 11LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = 11;
	uint16_t x227 = 10389U;
	volatile int32_t t43 = -3;

	t43 = ((x225%x226)&(x227*x228));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = 88762845781LL;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = UINT16_MAX;

	t44 = ((x229%x230)&(x231*x232));

	if (t44 != 88762810369LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x233 = 3LL;
	static uint8_t x235 = UINT8_MAX;
	int8_t x236 = 14;
	int64_t t45 = -69LL;

	t45 = ((x233%x234)&(x235*x236));

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x237 = INT64_MAX;
	int64_t x239 = 177LL;
	volatile uint64_t t46 = 356468273575769508LLU;

	t46 = ((x237%x238)&(x239*x240));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x241 = 3197966U;
	static int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = 404LL;
	volatile uint64_t t47 = 136675398302190LLU;

	t47 = ((x241%x242)&(x243*x244));

	if (t47 != 3197964LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x246 = 2729;
	uint64_t x247 = 17600LLU;
	int8_t x248 = INT8_MAX;

	t48 = ((x245%x246)&(x247*x248));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x253 = -9LL;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	int16_t x256 = -1;
	int64_t t49 = 17245683LL;

	t49 = ((x253%x254)&(x255*x256));

	if (t49 != 128LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x261 = 85793486U;

	t50 = ((x261%x262)&(x263*x264));

	if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = -63034LL;
	uint64_t x266 = 3216LLU;
	uint8_t x267 = 0U;
	int16_t x268 = 0;
	uint64_t t51 = 25535837LLU;

	t51 = ((x265%x266)&(x267*x268));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	volatile int64_t t52 = 141734LL;

	t52 = ((x277%x278)&(x279*x280));

	if (t52 != -2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x281 = 1;
	int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;

	t53 = ((x281%x282)&(x283*x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x286 = 14U;
	int32_t x287 = 27320477;
	uint32_t x288 = 54809707U;

	t54 = ((x285%x286)&(x287*x288));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x293 = 3U;
	static int64_t x294 = -1LL;
	volatile int8_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t55 = 8207LLU;

	t55 = ((x293%x294)&(x295*x296));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = 4271823012712829044LL;
	uint16_t x299 = UINT16_MAX;
	int16_t x300 = 448;
	int64_t t56 = -19561LL;

	t56 = ((x297%x298)&(x299*x300));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int16_t x304 = INT16_MIN;
	static int64_t t57 = -1666777380711461LL;

	t57 = ((x301%x302)&(x303*x304));

	if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = -523022;
	uint16_t x306 = 341U;
	int8_t x307 = -1;
	int32_t x308 = -29299198;

	t58 = ((x305%x306)&(x307*x308));

	if (t58 != 29298930) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	volatile uint64_t x311 = 1005160855523LLU;
	int8_t x312 = INT8_MIN;
	uint64_t t59 = 328376364215LLU;

	t59 = ((x309%x310)&(x311*x312));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x315 = UINT16_MAX;
	int8_t x316 = -1;
	volatile int32_t t60 = 7402215;

	t60 = ((x313%x314)&(x315*x316));

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x321 = 19;
	volatile uint16_t x322 = 1U;
	int64_t t61 = -4818400972182LL;

	t61 = ((x321%x322)&(x323*x324));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x329 = 2U;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = 22;

	t62 = ((x329%x330)&(x331*x332));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x333 = -1;
	static volatile int8_t x335 = INT8_MIN;
	int16_t x336 = -26;
	int64_t t63 = 3621516544LL;

	t63 = ((x333%x334)&(x335*x336));

	if (t63 != 3328LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x340 = 514601862LLU;
	volatile uint64_t t64 = 35774149307LLU;

	t64 = ((x337%x338)&(x339*x340));

	if (t64 != 18446744007681127424LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x341 = INT8_MIN;
	int32_t x342 = -1;
	static int16_t x343 = INT16_MIN;
	uint8_t x344 = 0U;
	volatile int32_t t65 = -445534;

	t65 = ((x341%x342)&(x343*x344));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x345 = 454166LLU;
	int8_t x346 = INT8_MIN;
	int32_t x347 = 54099;
	int8_t x348 = -1;

	t66 = ((x345%x346)&(x347*x348));

	if (t66 != 404484LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x349 = 8440845733261968LLU;
	uint32_t x350 = 304382238U;
	uint64_t x352 = 1394988780046599668LLU;
	volatile uint64_t t67 = 42688557261LLU;

	t67 = ((x349%x350)&(x351*x352));

	if (t67 != 279060652LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x357 = INT32_MAX;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 72U;
	volatile int32_t t68 = 2529653;

	t68 = ((x357%x358)&(x359*x360));

	if (t68 != 2147483576) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x362 = -3;
	uint8_t x364 = 0U;
	volatile uint32_t t69 = 81581U;

	t69 = ((x361%x362)&(x363*x364));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x365 = 251795560096380LLU;
	uint8_t x366 = 1U;
	int32_t x367 = INT32_MAX;
	volatile uint32_t x368 = 1539178699U;
	uint64_t t70 = 52205453966429LLU;

	t70 = ((x365%x366)&(x367*x368));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x369 = 181LLU;
	static int8_t x370 = INT8_MAX;
	uint64_t t71 = 1796123648074469LLU;

	t71 = ((x369%x370)&(x371*x372));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x382 = 3U;
	static int16_t x383 = 3547;
	volatile int8_t x384 = -1;
	int32_t t72 = -160474;

	t72 = ((x381%x382)&(x383*x384));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x385 = 7798;
	int32_t x387 = INT32_MAX;
	int16_t x388 = -1;

	t73 = ((x385%x386)&(x387*x388));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x389 = -15;
	int64_t x392 = -219280583LL;
	int64_t t74 = -129183LL;

	t74 = ((x389%x390)&(x391*x392));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x393 = INT64_MIN;
	volatile int32_t x394 = -59;
	uint16_t x395 = 7U;
	int16_t x396 = INT16_MIN;
	static volatile int64_t t75 = -1150255290LL;

	t75 = ((x393%x394)&(x395*x396));

	if (t75 != -229376LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = -7097204LL;
	uint8_t x400 = UINT8_MAX;

	t76 = ((x397%x398)&(x399*x400));

	if (t76 != 11905LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x401 = INT16_MAX;
	uint64_t x402 = 297LLU;
	int32_t x403 = -1;
	uint16_t x404 = 8U;
	volatile uint64_t t77 = 6729745148274109LLU;

	t77 = ((x401%x402)&(x403*x404));

	if (t77 != 96LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x406 = INT32_MIN;
	volatile int8_t x408 = INT8_MIN;

	t78 = ((x405%x406)&(x407*x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x409 = INT64_MIN;
	static uint32_t x410 = 1902839106U;
	int8_t x411 = -7;
	int64_t t79 = 113059113751LL;

	t79 = ((x409%x410)&(x411*x412));

	if (t79 != -3169756860LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x413 = 4069U;
	int64_t x414 = 3536971128LL;
	uint16_t x415 = 106U;
	int16_t x416 = -31;
	int64_t t80 = 2450118253828LL;

	t80 = ((x413%x414)&(x415*x416));

	if (t80 != 800LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MAX;
	int64_t x419 = -347758680619774LL;
	uint64_t x420 = 238882LLU;

	t81 = ((x417%x418)&(x419*x420));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x423 = -1;
	int16_t x424 = -9;
	volatile int32_t t82 = -681163;

	t82 = ((x421%x422)&(x423*x424));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x425 = 1U;
	uint16_t x426 = 5173U;
	volatile int32_t t83 = 2156223;

	t83 = ((x425%x426)&(x427*x428));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = -1;
	uint32_t x430 = 4052U;
	int32_t x431 = INT32_MAX;
	volatile uint32_t x432 = UINT32_MAX;

	t84 = ((x429%x430)&(x431*x432));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x433 = 761U;
	int16_t x434 = INT16_MIN;
	volatile uint16_t x435 = 169U;
	int8_t x436 = INT8_MIN;
	static uint32_t t85 = 112460U;

	t85 = ((x433%x434)&(x435*x436));

	if (t85 != 640U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x447 = 67188575305884400LL;
	static volatile int8_t x448 = -1;
	int64_t t86 = -25251260LL;

	t86 = ((x445%x446)&(x447*x448));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x449 = UINT8_MAX;
	volatile uint32_t x451 = 6813U;
	static volatile int32_t x452 = 1;
	volatile uint32_t t87 = 195927208U;

	t87 = ((x449%x450)&(x451*x452));

	if (t87 != 157U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x453 = 63581240LLU;
	int64_t x455 = -1LL;
	int16_t x456 = 1578;
	volatile uint64_t t88 = 248205904LLU;

	t88 = ((x453%x454)&(x455*x456));

	if (t88 != 63580176LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x457 = 42U;
	uint8_t x460 = 0U;
	volatile int32_t t89 = -72260;

	t89 = ((x457%x458)&(x459*x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x461 = INT32_MIN;
	volatile uint16_t x462 = 7532U;
	volatile uint32_t x463 = 49U;
	int64_t x464 = -1LL;
	int64_t t90 = 358LL;

	t90 = ((x461%x462)&(x463*x464));

	if (t90 != -5048LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x466 = -1;
	uint8_t x467 = 38U;
	int16_t x468 = 77;

	t91 = ((x465%x466)&(x467*x468));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x473 = INT64_MIN;
	static int32_t x474 = -335132246;
	volatile uint8_t x475 = UINT8_MAX;
	int8_t x476 = -1;
	volatile int64_t t92 = 2805981454LL;

	t92 = ((x473%x474)&(x475*x476));

	if (t92 != -250811392LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = -5;
	uint64_t x479 = 32046333643170LLU;
	volatile uint64_t x480 = 15719763LLU;

	t93 = ((x477%x478)&(x479*x480));

	if (t93 != 5698679899401075074LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x481 = 11647649;
	int16_t x483 = INT16_MIN;

	t94 = ((x481%x482)&(x483*x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x485 = 24;
	int8_t x487 = -3;
	volatile int32_t t95 = -20;

	t95 = ((x485%x486)&(x487*x488));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x489 = -27;
	uint16_t x490 = 70U;
	uint32_t x491 = 20U;
	volatile int64_t x492 = 51992187059773109LL;
	volatile int64_t t96 = -51LL;

	t96 = ((x489%x490)&(x491*x492));

	if (t96 != 1039843741195462180LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x493 = 9850128U;
	static uint8_t x494 = UINT8_MAX;
	uint64_t x495 = 302344520LLU;
	static volatile uint8_t x496 = UINT8_MAX;
	static volatile uint64_t t97 = 1727203894887302LLU;

	t97 = ((x493%x494)&(x495*x496));

	if (t97 != 176LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x497 = 4044U;
	volatile int64_t x498 = -1LL;
	int8_t x499 = -1;
	uint32_t x500 = 0U;

	t98 = ((x497%x498)&(x499*x500));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x501 = -1;
	static int64_t x502 = -20595281334816879LL;
	int32_t x503 = -394314;
	int8_t x504 = INT8_MIN;
	int64_t t99 = 10007274LL;

	t99 = ((x501%x502)&(x503*x504));

	if (t99 != 50472192LL) { NG(); } else { ; }
	
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

