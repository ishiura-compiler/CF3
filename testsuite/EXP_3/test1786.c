#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -3;
int8_t x10 = INT8_MAX;
int16_t x35 = -1;
uint32_t x36 = 7706U;
int16_t x40 = -1;
static int64_t t7 = 55593LL;
uint32_t t8 = 255693U;
uint8_t x45 = 2U;
static int8_t x47 = 9;
int8_t x51 = -1;
volatile int16_t x54 = INT16_MAX;
volatile int8_t x95 = -1;
volatile int8_t x126 = -1;
int64_t x134 = -7034486587477LL;
int64_t x153 = INT64_MAX;
int64_t x183 = INT64_MIN;
int8_t x184 = INT8_MIN;
int16_t x207 = -20;
static int8_t x216 = INT8_MIN;
static uint32_t x219 = UINT32_MAX;
int8_t x223 = INT8_MAX;
static uint32_t x224 = 131246760U;
int64_t x231 = INT64_MAX;
uint8_t x240 = 5U;
int16_t x253 = INT16_MAX;
int32_t x256 = 1;
volatile int16_t x258 = -1;
int32_t x260 = 1561836;
int32_t x262 = INT32_MAX;
volatile int32_t x269 = INT32_MIN;
volatile int32_t t47 = -40992;
volatile int8_t x280 = 13;
volatile int64_t x281 = 14275783LL;
int64_t x283 = INT64_MAX;
int32_t x287 = -1;
static int32_t t51 = -10812;
static int64_t x297 = INT64_MIN;
static int16_t x301 = INT16_MIN;
int8_t x306 = INT8_MIN;
uint32_t x307 = UINT32_MAX;
int16_t x308 = INT16_MAX;
volatile uint32_t t56 = 1143254338U;
int32_t x310 = INT32_MIN;
static int16_t x321 = INT16_MAX;
static uint64_t x323 = 39608LLU;
volatile uint64_t t60 = 869521223754LLU;
uint16_t x326 = 158U;
int32_t t61 = -327152193;
int16_t x330 = INT16_MAX;
int64_t x332 = INT64_MAX;
uint16_t x334 = UINT16_MAX;
uint64_t x338 = UINT64_MAX;
static volatile int32_t x339 = INT32_MIN;
uint32_t x340 = UINT32_MAX;
static volatile uint32_t t64 = 13277212U;
int16_t x350 = -1;
int8_t x351 = INT8_MIN;
static int8_t x366 = -1;
int16_t x368 = INT16_MIN;
int16_t x379 = INT16_MIN;
uint64_t x386 = 1319465407LLU;
int32_t x392 = -1;
volatile int64_t t78 = 28LL;
volatile int32_t t80 = -1805;
uint64_t x439 = 218564988238120516LLU;
int8_t x457 = -1;
volatile int8_t x460 = 1;
volatile uint16_t x466 = UINT16_MAX;
static volatile int32_t t87 = 627574996;
uint16_t x470 = 0U;
int16_t x472 = -1;
int8_t x479 = 1;
static volatile int8_t x480 = -1;
volatile int32_t t90 = 3;
int64_t x490 = -2014917369157LL;
uint64_t x506 = 41148603134LLU;
volatile int32_t x514 = 12;
int8_t x523 = INT8_MIN;
uint64_t t96 = 5335018422LLU;
volatile int32_t x536 = 785146;
uint8_t x537 = 22U;
int16_t x539 = 189;
int8_t x545 = -3;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 534254;

	t0 = ((x1==x2)%(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = -1;
	volatile int32_t x11 = INT32_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int32_t t1 = -1;

	t1 = ((x9==x10)%(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = 2;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MAX;
	volatile int64_t x16 = -35867221917LL;
	volatile int64_t t2 = 500471LL;

	t2 = ((x13==x14)%(x15&x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 2;
	uint32_t x18 = 4U;
	uint16_t x19 = 795U;
	int16_t x20 = INT16_MAX;
	int32_t t3 = -243492;

	t3 = ((x17==x18)%(x19&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x21 = -1LL;
	int64_t x22 = INT64_MIN;
	static volatile uint16_t x23 = 5997U;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t4 = 1133280765861009500LLU;

	t4 = ((x21==x22)%(x23&x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 6370560U;
	uint16_t x26 = 13U;
	int8_t x27 = -1;
	int64_t x28 = -34146420589817841LL;
	static int64_t t5 = 6LL;

	t5 = ((x25==x26)%(x27&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MIN;
	static int64_t x34 = INT64_MAX;
	volatile uint32_t t6 = 72342U;

	t6 = ((x33==x34)%(x35&x36));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	uint64_t x38 = 2927740LLU;
	int64_t x39 = -1LL;

	t7 = ((x37==x38)%(x39&x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = 309U;
	int8_t x44 = INT8_MIN;

	t8 = ((x41==x42)%(x43&x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x46 = INT8_MIN;
	int32_t x48 = -1;
	int32_t t9 = -477;

	t9 = ((x45==x46)%(x47&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int64_t x50 = 57LL;
	volatile int64_t x52 = -1118549033LL;
	int64_t t10 = 23LL;

	t10 = ((x49==x50)%(x51&x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 758;
	int64_t x55 = -94699LL;
	volatile int16_t x56 = INT16_MIN;
	int64_t t11 = -4547LL;

	t11 = ((x53==x54)%(x55&x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	static int8_t x66 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t12 = 256407;

	t12 = ((x65==x66)%(x67&x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = -60LL;
	int32_t x70 = -7944884;
	uint32_t x71 = 25927U;
	uint8_t x72 = UINT8_MAX;
	volatile uint32_t t13 = 218128634U;

	t13 = ((x69==x70)%(x71&x72));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 210960527U;
	static int16_t x83 = -1;
	static int16_t x84 = INT16_MIN;
	static int32_t t14 = -669886538;

	t14 = ((x81==x82)%(x83&x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 3289U;
	int16_t x88 = -1;
	int32_t t15 = 49487857;

	t15 = ((x85==x86)%(x87&x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = INT8_MIN;
	static int64_t x90 = INT64_MIN;
	int8_t x91 = -1;
	volatile uint16_t x92 = 1412U;
	volatile int32_t t16 = -344863;

	t16 = ((x89==x90)%(x91&x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	int64_t t17 = 17852098098541LL;

	t17 = ((x93==x94)%(x95&x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x101 = 3487997583LL;
	static uint32_t x102 = 150960U;
	static uint64_t x103 = UINT64_MAX;
	static int16_t x104 = INT16_MIN;
	uint64_t t18 = 3724043255033107440LLU;

	t18 = ((x101==x102)%(x103&x104));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -791130361;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	uint32_t x116 = 376456U;
	volatile uint32_t t19 = 0U;

	t19 = ((x113==x114)%(x115&x116));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = 855LLU;
	uint64_t x118 = UINT64_MAX;
	static uint64_t x119 = 21649LLU;
	uint32_t x120 = UINT32_MAX;
	static volatile uint64_t t20 = 1977687646LLU;

	t20 = ((x117==x118)%(x119&x120));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x125 = 178156LLU;
	int64_t x127 = 3451LL;
	int16_t x128 = 3;
	int64_t t21 = -1753492156951002839LL;

	t21 = ((x125==x126)%(x127&x128));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x129 = 7LLU;
	static int16_t x130 = INT16_MAX;
	static volatile uint8_t x131 = 19U;
	static volatile int16_t x132 = 82;
	int32_t t22 = 7207472;

	t22 = ((x129==x130)%(x131&x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x133 = INT32_MIN;
	uint32_t x135 = 6U;
	static int64_t x136 = INT64_MAX;
	int64_t t23 = -3127096838LL;

	t23 = ((x133==x134)%(x135&x136));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	static int16_t x138 = 39;
	static uint32_t x139 = 151U;
	uint32_t x140 = 83706227U;
	uint32_t t24 = 2U;

	t24 = ((x137==x138)%(x139&x140));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x141 = -1;
	int16_t x142 = -1;
	static int16_t x143 = 12964;
	int8_t x144 = 40;
	static int32_t t25 = -3085;

	t25 = ((x141==x142)%(x143&x144));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x149 = -22910202291219LL;
	uint16_t x150 = 32463U;
	static int64_t x151 = INT64_MIN;
	static int64_t x152 = -313396111962LL;
	int64_t t26 = -17020759LL;

	t26 = ((x149==x150)%(x151&x152));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x154 = 21U;
	int64_t x155 = 66290646LL;
	int16_t x156 = -3882;
	volatile int64_t t27 = -152921551LL;

	t27 = ((x153==x154)%(x155&x156));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = UINT16_MAX;
	static int32_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t28 = 50598566027387LLU;

	t28 = ((x161==x162)%(x163&x164));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x173 = 28U;
	volatile int8_t x174 = INT8_MIN;
	volatile int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MIN;
	int32_t t29 = 46591856;

	t29 = ((x173==x174)%(x175&x176));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = UINT8_MAX;
	static uint32_t x182 = 193413U;
	int64_t t30 = 879468LL;

	t30 = ((x181==x182)%(x183&x184));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x193 = 5046019105467LLU;
	uint32_t x194 = 2306U;
	static int16_t x195 = -1;
	static volatile int64_t x196 = INT64_MIN;
	volatile int64_t t31 = 562498LL;

	t31 = ((x193==x194)%(x195&x196));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	static int16_t x200 = 3063;
	volatile int32_t t32 = 2863361;

	t32 = ((x197==x198)%(x199&x200));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x205 = INT32_MAX;
	static int32_t x206 = INT32_MIN;
	int16_t x208 = -2017;
	int32_t t33 = 1;

	t33 = ((x205==x206)%(x207&x208));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x209 = -22433;
	static uint32_t x210 = UINT32_MAX;
	uint8_t x211 = UINT8_MAX;
	uint32_t x212 = 826U;
	volatile uint32_t t34 = 53561732U;

	t34 = ((x209==x210)%(x211&x212));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x213 = -1;
	uint64_t x214 = 5777500839657LLU;
	int32_t x215 = -1;
	volatile int32_t t35 = 20782;

	t35 = ((x213==x214)%(x215&x216));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = 15;
	int64_t x220 = INT64_MAX;
	int64_t t36 = 4LL;

	t36 = ((x217==x218)%(x219&x220));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = INT16_MIN;
	uint8_t x222 = 3U;
	uint32_t t37 = 100U;

	t37 = ((x221==x222)%(x223&x224));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	int32_t x228 = -3669;
	static int32_t t38 = 1965;

	t38 = ((x225==x226)%(x227&x228));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x229 = INT8_MAX;
	int64_t x230 = -99934605093LL;
	int32_t x232 = INT32_MAX;
	int64_t t39 = 82905013768562LL;

	t39 = ((x229==x230)%(x231&x232));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MIN;
	uint16_t x239 = 705U;
	static int32_t t40 = 933;

	t40 = ((x237==x238)%(x239&x240));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x245 = UINT8_MAX;
	static int64_t x246 = INT64_MAX;
	static uint32_t x247 = UINT32_MAX;
	int32_t x248 = INT32_MAX;
	uint32_t t41 = 1034015805U;

	t41 = ((x245==x246)%(x247&x248));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x249 = INT32_MAX;
	uint8_t x250 = 2U;
	int32_t x251 = -1;
	static uint64_t x252 = 582LLU;
	uint64_t t42 = 659191385554979LLU;

	t42 = ((x249==x250)%(x251&x252));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x254 = -1;
	int16_t x255 = 1;
	volatile int32_t t43 = -686;

	t43 = ((x253==x254)%(x255&x256));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int16_t x259 = 5;
	int32_t t44 = -83748812;

	t44 = ((x257==x258)%(x259&x260));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x263 = -1LL;
	int8_t x264 = INT8_MIN;
	volatile int64_t t45 = -29559LL;

	t45 = ((x261==x262)%(x263&x264));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = INT32_MAX;
	static int32_t x266 = 234560;
	volatile int64_t x267 = 213172124467830039LL;
	uint16_t x268 = UINT16_MAX;
	volatile int64_t t46 = -3023233512023LL;

	t46 = ((x265==x266)%(x267&x268));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x270 = 748243902LL;
	int32_t x271 = INT32_MAX;
	int32_t x272 = 58610358;

	t47 = ((x269==x270)%(x271&x272));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = 28;
	volatile uint8_t x274 = UINT8_MAX;
	int16_t x275 = -1;
	static volatile int16_t x276 = INT16_MIN;
	volatile int32_t t48 = -4;

	t48 = ((x273==x274)%(x275&x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x277 = 805U;
	int32_t x278 = -1;
	int8_t x279 = -1;
	static int32_t t49 = 303172;

	t49 = ((x277==x278)%(x279&x280));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x282 = -1;
	uint32_t x284 = 20568U;
	int64_t t50 = 293053LL;

	t50 = ((x281==x282)%(x283&x284));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x285 = 0U;
	int16_t x286 = -1;
	int16_t x288 = -1;

	t51 = ((x285==x286)%(x287&x288));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	volatile int32_t x291 = -203170;
	uint8_t x292 = 109U;
	volatile int32_t t52 = -130315604;

	t52 = ((x289==x290)%(x291&x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x293 = 1013329298U;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 1545526U;
	volatile uint32_t t53 = 68876237U;

	t53 = ((x293==x294)%(x295&x296));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x298 = 34753U;
	uint8_t x299 = UINT8_MAX;
	static uint64_t x300 = 226373LLU;
	uint64_t t54 = 7777054LLU;

	t54 = ((x297==x298)%(x299&x300));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x302 = 393116474LLU;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = 6;
	volatile int32_t t55 = -6611;

	t55 = ((x301==x302)%(x303&x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = INT16_MAX;

	t56 = ((x305==x306)%(x307&x308));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x309 = 51535950242941LLU;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t57 = 794094;

	t57 = ((x309==x310)%(x311&x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MIN;
	static volatile uint64_t x314 = UINT64_MAX;
	uint32_t x315 = UINT32_MAX;
	static int32_t x316 = INT32_MAX;
	uint32_t t58 = 1776122224U;

	t58 = ((x313==x314)%(x315&x316));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = -1LL;
	uint16_t x318 = 1U;
	int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MAX;
	static volatile int64_t t59 = 59244973046586LL;

	t59 = ((x317==x318)%(x319&x320));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x322 = UINT16_MAX;
	int16_t x324 = -1;

	t60 = ((x321==x322)%(x323&x324));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MIN;

	t61 = ((x325==x326)%(x327&x328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x329 = 40U;
	uint8_t x331 = 3U;
	volatile int64_t t62 = -10124015LL;

	t62 = ((x329==x330)%(x331&x332));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = -9;
	volatile uint32_t x335 = UINT32_MAX;
	int16_t x336 = -9232;
	uint32_t t63 = 5741774U;

	t63 = ((x333==x334)%(x335&x336));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = 60LL;

	t64 = ((x337==x338)%(x339&x340));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x341 = 1;
	uint8_t x342 = 9U;
	uint32_t x343 = 1U;
	int32_t x344 = 13428659;
	uint32_t t65 = 47206915U;

	t65 = ((x341==x342)%(x343&x344));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x349 = INT64_MIN;
	int16_t x352 = INT16_MAX;
	volatile int32_t t66 = 9629;

	t66 = ((x349==x350)%(x351&x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int32_t x354 = -98;
	int32_t x355 = INT32_MIN;
	int64_t x356 = -18LL;
	volatile int64_t t67 = 74307298078950806LL;

	t67 = ((x353==x354)%(x355&x356));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x361 = 973686930U;
	uint32_t x362 = 6U;
	uint16_t x363 = 6U;
	volatile int32_t x364 = 3678103;
	static int32_t t68 = 0;

	t68 = ((x361==x362)%(x363&x364));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = INT32_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	volatile uint32_t t69 = 522U;

	t69 = ((x365==x366)%(x367&x368));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x369 = INT16_MAX;
	uint32_t x370 = 1708447113U;
	static uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t70 = -47249;

	t70 = ((x369==x370)%(x371&x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x373 = INT64_MAX;
	uint16_t x374 = 66U;
	int8_t x375 = -1;
	int32_t x376 = -1;
	static volatile int32_t t71 = -1;

	t71 = ((x373==x374)%(x375&x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x377 = UINT8_MAX;
	uint32_t x378 = 15901808U;
	int64_t x380 = INT64_MIN;
	int64_t t72 = 3865286LL;

	t72 = ((x377==x378)%(x379&x380));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x385 = 23U;
	int16_t x387 = -705;
	int32_t x388 = 20;
	int32_t t73 = 11590510;

	t73 = ((x385==x386)%(x387&x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x389 = -1LL;
	uint16_t x390 = 94U;
	uint8_t x391 = 115U;
	volatile int32_t t74 = -9498;

	t74 = ((x389==x390)%(x391&x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = 2;
	int8_t x402 = INT8_MIN;
	int16_t x403 = -1;
	int32_t x404 = -1;
	int32_t t75 = 3909;

	t75 = ((x401==x402)%(x403&x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x405 = INT32_MIN;
	uint64_t x406 = 30584488638115LLU;
	uint32_t x407 = 17916U;
	uint32_t x408 = 27077825U;
	uint32_t t76 = 74526U;

	t76 = ((x405==x406)%(x407&x408));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x409 = 6151U;
	int16_t x410 = 134;
	uint16_t x411 = 5U;
	volatile uint32_t x412 = UINT32_MAX;
	uint32_t t77 = 425124U;

	t77 = ((x409==x410)%(x411&x412));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MIN;
	static int64_t x415 = INT64_MIN;
	int8_t x416 = -4;

	t78 = ((x413==x414)%(x415&x416));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x421 = INT8_MIN;
	static int32_t x422 = 4907;
	static volatile int32_t x423 = -416675;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t79 = 2;

	t79 = ((x421==x422)%(x423&x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = INT32_MAX;
	uint64_t x430 = 114862LLU;
	int8_t x431 = -1;
	uint16_t x432 = 372U;

	t80 = ((x429==x430)%(x431&x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = 4U;
	int16_t x438 = INT16_MAX;
	int8_t x440 = -31;
	volatile uint64_t t81 = 22540LLU;

	t81 = ((x437==x438)%(x439&x440));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x445 = INT8_MIN;
	volatile int64_t x446 = -32028989134059027LL;
	static volatile uint16_t x447 = 1319U;
	uint8_t x448 = 10U;
	volatile int32_t t82 = 52666;

	t82 = ((x445==x446)%(x447&x448));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x449 = -4;
	uint16_t x450 = 10U;
	static int32_t x451 = -1;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x449==x450)%(x451&x452));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x453 = 436733729U;
	static uint8_t x454 = UINT8_MAX;
	static int8_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t84 = 23348756;

	t84 = ((x453==x454)%(x455&x456));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MAX;
	int32_t t85 = 21569;

	t85 = ((x457==x458)%(x459&x460));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x461 = 895559112LL;
	static volatile uint64_t x462 = 33960299030LLU;
	volatile int64_t x463 = INT64_MIN;
	int64_t x464 = INT64_MIN;
	int64_t t86 = 11306LL;

	t86 = ((x461==x462)%(x463&x464));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x465 = INT32_MIN;
	static uint16_t x467 = 1U;
	int32_t x468 = INT32_MAX;

	t87 = ((x465==x466)%(x467&x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x469 = INT32_MIN;
	static uint8_t x471 = 34U;
	int32_t t88 = 65818966;

	t88 = ((x469==x470)%(x471&x472));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = INT32_MAX;
	int8_t x478 = -1;
	volatile int32_t t89 = 4055160;

	t89 = ((x477==x478)%(x479&x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x481 = UINT64_MAX;
	int64_t x482 = INT64_MIN;
	volatile int16_t x483 = INT16_MAX;
	volatile uint16_t x484 = 1018U;

	t90 = ((x481==x482)%(x483&x484));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x485 = 35U;
	static int16_t x486 = -1;
	volatile int8_t x487 = INT8_MAX;
	uint32_t x488 = 5204U;
	volatile uint32_t t91 = 3138U;

	t91 = ((x485==x486)%(x487&x488));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x489 = 1620U;
	volatile int32_t x491 = 326;
	uint8_t x492 = 13U;
	volatile int32_t t92 = 6;

	t92 = ((x489==x490)%(x491&x492));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x505 = INT32_MIN;
	int32_t x507 = -7643205;
	volatile int16_t x508 = INT16_MIN;
	int32_t t93 = -147;

	t93 = ((x505==x506)%(x507&x508));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x513 = 7U;
	static int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	int64_t t94 = -3968LL;

	t94 = ((x513==x514)%(x515&x516));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x521 = INT64_MIN;
	int64_t x522 = 2813266LL;
	int8_t x524 = INT8_MIN;
	static int32_t t95 = -11367371;

	t95 = ((x521==x522)%(x523&x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x525 = -9;
	int32_t x526 = -1;
	uint64_t x527 = 239786LLU;
	uint16_t x528 = 1289U;

	t96 = ((x525==x526)%(x527&x528));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x533 = -192;
	int64_t x534 = INT64_MAX;
	static int16_t x535 = INT16_MAX;
	static int32_t t97 = -109708;

	t97 = ((x533==x534)%(x535&x536));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x538 = INT64_MIN;
	int8_t x540 = -1;
	volatile int32_t t98 = 938964;

	t98 = ((x537==x538)%(x539&x540));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x546 = UINT16_MAX;
	volatile int32_t x547 = 7;
	uint32_t x548 = 848179U;
	uint32_t t99 = 417185374U;

	t99 = ((x545==x546)%(x547&x548));

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

