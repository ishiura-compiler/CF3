#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = 23LL;
int32_t x10 = INT32_MIN;
static int64_t t2 = 348139LL;
int16_t x19 = INT16_MIN;
int8_t x20 = -1;
volatile uint64_t t4 = 7600808993114741415LLU;
int8_t x27 = INT8_MIN;
volatile int8_t x32 = -51;
static int32_t t7 = 13;
int8_t x36 = 12;
uint64_t x38 = 72616743285LLU;
uint64_t t9 = 1186073LLU;
static uint8_t x46 = 54U;
static volatile int32_t t11 = -1480510;
volatile uint32_t t12 = 1671639U;
uint32_t x71 = UINT32_MAX;
static volatile uint32_t t13 = 5U;
static volatile uint8_t x73 = 2U;
int64_t x75 = INT64_MIN;
int16_t x77 = INT16_MIN;
uint32_t x80 = UINT32_MAX;
int32_t x81 = 459942;
uint64_t x85 = 30618LLU;
volatile uint64_t t17 = 4232087043LLU;
int32_t t18 = 125;
volatile uint64_t t19 = 317879779500435LLU;
int8_t x104 = INT8_MIN;
int64_t x109 = 7986732LL;
uint8_t x111 = UINT8_MAX;
uint32_t x116 = 3540U;
int8_t x119 = 0;
volatile int32_t t24 = 1964257;
volatile uint32_t x122 = UINT32_MAX;
int32_t x123 = -986;
volatile uint32_t t25 = 1728U;
int16_t x125 = INT16_MAX;
int8_t x132 = INT8_MIN;
volatile int32_t x133 = INT32_MIN;
volatile uint8_t x135 = UINT8_MAX;
uint32_t x137 = 1702U;
uint32_t x138 = UINT32_MAX;
uint32_t x155 = UINT32_MAX;
uint16_t x160 = 12U;
volatile uint32_t t33 = 967572373U;
int64_t x161 = INT64_MIN;
volatile uint32_t x166 = 191658U;
uint64_t x168 = UINT64_MAX;
int8_t x179 = -1;
int16_t x180 = INT16_MAX;
uint64_t t36 = 538916491537420227LLU;
int64_t x181 = INT64_MAX;
uint16_t x200 = UINT16_MAX;
int32_t x217 = -1;
int16_t x218 = INT16_MAX;
static uint32_t x226 = UINT32_MAX;
int64_t x230 = -46047458340LL;
uint64_t x232 = UINT64_MAX;
volatile uint64_t x241 = 316983317590362648LLU;
int64_t x242 = 439857458476594396LL;
int64_t x243 = -1LL;
static int16_t x254 = INT16_MAX;
static volatile uint32_t x256 = 430U;
int64_t x258 = 7LL;
int64_t x268 = INT64_MIN;
static volatile int32_t t50 = -1799;
int32_t x283 = INT32_MIN;
int32_t x293 = -1;
static int32_t x296 = INT32_MIN;
uint8_t x311 = 10U;
volatile uint64_t t57 = 18877LLU;
static uint8_t x322 = 20U;
int64_t x323 = -12844LL;
int32_t x325 = -300170;
volatile int64_t x328 = INT64_MIN;
volatile int32_t t60 = -6975;
uint8_t x334 = 12U;
volatile int32_t t62 = 1;
uint32_t x348 = UINT32_MAX;
uint32_t t65 = 673572616U;
uint64_t x362 = UINT64_MAX;
volatile uint64_t t66 = 229020752606LLU;
static uint32_t t67 = 2565U;
static uint16_t x402 = 158U;
volatile int32_t t73 = -2822;
int16_t x449 = -170;
static uint16_t x450 = UINT16_MAX;
int32_t t76 = -190;
static volatile int32_t x461 = -1;
int16_t x467 = INT16_MIN;
volatile int8_t x477 = -49;
volatile int32_t x484 = INT32_MIN;
int32_t t82 = -134101493;
int32_t x485 = INT32_MAX;
int64_t x486 = 29LL;
int16_t x489 = 2284;
uint32_t x491 = UINT32_MAX;
uint32_t x494 = UINT32_MAX;
int64_t x504 = INT64_MIN;
volatile int64_t t86 = -7378877LL;
int8_t x514 = INT8_MIN;
static volatile int32_t x528 = INT32_MIN;
int8_t x537 = INT8_MIN;
int8_t x539 = INT8_MIN;
uint32_t x540 = 2387U;
int64_t x546 = -1LL;
int64_t t93 = -133326520448LL;
int32_t x551 = 793427928;
int32_t t94 = 2682;
static int8_t x570 = INT8_MAX;
static volatile int32_t t98 = 804;


void f0(void) {
	volatile uint32_t x1 = 5515U;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 11880927LLU;
	volatile uint64_t t0 = 777701229LLU;

	t0 = ((x1*x2)*(x3<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	int32_t x6 = 17;
	volatile int16_t x7 = INT16_MAX;
	static int8_t x8 = INT8_MAX;

	t1 = ((x5*x6)*(x7<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -1LL;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MIN;

	t2 = ((x9*x10)*(x11<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	volatile int8_t x15 = -1;
	uint16_t x16 = 0U;
	int64_t t3 = 43401359028LL;

	t3 = ((x13*x14)*(x15<=x16));

	if (t3 != 128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 695LLU;

	t4 = ((x17*x18)*(x19<=x20));

	if (t4 != 2985002270025LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int8_t x22 = 18;
	int32_t x23 = -55738;
	static int32_t x24 = -1034377394;
	static volatile int32_t t5 = 22;

	t5 = ((x21*x22)*(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int32_t x26 = 27455;
	int16_t x28 = -1;
	int32_t t6 = 266405;

	t6 = ((x25*x26)*(x27<=x28));

	if (t6 != 7001025) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 62359;
	int32_t x30 = -1;
	volatile uint8_t x31 = UINT8_MAX;

	t7 = ((x29*x30)*(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static int32_t x34 = -1;
	int8_t x35 = INT8_MAX;
	volatile int32_t t8 = 131532174;

	t8 = ((x33*x34)*(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 30U;
	int32_t x39 = -1289265;
	int16_t x40 = INT16_MIN;

	t9 = ((x37*x38)*(x39<=x40));

	if (t9 != 2178502298550LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	int32_t t10 = 448;

	t10 = ((x45*x46)*(x47<=x48));

	if (t10 != -6912) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = 192;
	int32_t x50 = -1379;
	volatile int32_t x51 = INT32_MIN;
	uint16_t x52 = 1U;

	t11 = ((x49*x50)*(x51<=x52));

	if (t11 != -264768) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = 625;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = -1;
	static int8_t x68 = INT8_MIN;

	t12 = ((x65*x66)*(x67<=x68));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	volatile uint32_t x70 = UINT32_MAX;
	int16_t x72 = INT16_MAX;

	t13 = ((x69*x70)*(x71<=x72));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x74 = INT16_MAX;
	static int8_t x76 = -1;
	int32_t t14 = 276776;

	t14 = ((x73*x74)*(x75<=x76));

	if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = -124222360LL;
	volatile int32_t x79 = INT32_MIN;
	int64_t t15 = 62840032111055475LL;

	t15 = ((x77*x78)*(x79<=x80));

	if (t15 != 4070518292480LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MAX;
	int32_t x84 = INT32_MIN;
	int32_t t16 = -85245033;

	t16 = ((x81*x82)*(x83<=x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = -1;
	int8_t x87 = -9;
	static int16_t x88 = 2496;

	t17 = ((x85*x86)*(x87<=x88));

	if (t17 != 18446744073709520998LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = -92003;
	int8_t x90 = -1;
	uint8_t x91 = 4U;
	int8_t x92 = -16;

	t18 = ((x89*x90)*(x91<=x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 21874LLU;
	volatile int16_t x94 = -1;
	uint64_t x95 = 29236049LLU;
	uint8_t x96 = 0U;

	t19 = ((x93*x94)*(x95<=x96));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = UINT32_MAX;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = -6;
	uint32_t t20 = 2092896071U;

	t20 = ((x101*x102)*(x103<=x104));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 36U;
	uint8_t x106 = 22U;
	int32_t x107 = -1;
	uint16_t x108 = 1527U;
	volatile int32_t t21 = 240120344;

	t21 = ((x105*x106)*(x107<=x108));

	if (t21 != 792) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = 795;
	int8_t x112 = -5;
	volatile int64_t t22 = 15855465529824LL;

	t22 = ((x109*x110)*(x111<=x112));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -16053;
	uint16_t x114 = 1955U;
	static int8_t x115 = INT8_MIN;
	static volatile int32_t t23 = -784440;

	t23 = ((x113*x114)*(x115<=x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = -1;
	static int16_t x118 = INT16_MAX;
	volatile uint64_t x120 = 6076223215143LLU;

	t24 = ((x117*x118)*(x119<=x120));

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = 2;
	int64_t x124 = -1LL;

	t25 = ((x121*x122)*(x123<=x124));

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x126 = 3U;
	uint32_t x127 = 0U;
	volatile uint64_t x128 = UINT64_MAX;
	volatile int32_t t26 = 3;

	t26 = ((x125*x126)*(x127<=x128));

	if (t26 != 98301) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	volatile int16_t x131 = -1;
	int64_t t27 = -6LL;

	t27 = ((x129*x130)*(x131<=x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x134 = 839U;
	int16_t x136 = INT16_MIN;
	uint32_t t28 = 3U;

	t28 = ((x133*x134)*(x135<=x136));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x139 = 719152;
	int16_t x140 = INT16_MIN;
	static volatile uint32_t t29 = 1522U;

	t29 = ((x137*x138)*(x139<=x140));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	static int64_t x142 = -1LL;
	static volatile uint32_t x143 = 9U;
	static uint16_t x144 = UINT16_MAX;
	volatile int64_t t30 = 35792575262538LL;

	t30 = ((x141*x142)*(x143<=x144));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x145 = 12U;
	volatile uint32_t x146 = 6U;
	int32_t x147 = -63659;
	volatile int16_t x148 = -1;
	volatile uint32_t t31 = 28987478U;

	t31 = ((x145*x146)*(x147<=x148));

	if (t31 != 72U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = 493;
	uint8_t x154 = 48U;
	uint32_t x156 = UINT32_MAX;
	static int32_t t32 = 402;

	t32 = ((x153*x154)*(x155<=x156));

	if (t32 != 23664) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = -1;
	uint32_t x158 = 155833U;
	static int16_t x159 = INT16_MIN;

	t33 = ((x157*x158)*(x159<=x160));

	if (t33 != 4294811463U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x162 = 1;
	int32_t x163 = 0;
	uint16_t x164 = UINT16_MAX;
	int64_t t34 = INT64_MIN;

	t34 = ((x161*x162)*(x163<=x164));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 0U;
	int32_t x167 = INT32_MAX;
	uint32_t t35 = 3U;

	t35 = ((x165*x166)*(x167<=x168));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = 7U;
	uint64_t x178 = 193260LLU;

	t36 = ((x177*x178)*(x179<=x180));

	if (t36 != 1352820LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x182 = -1LL;
	static volatile uint32_t x183 = 0U;
	static uint8_t x184 = 2U;
	int64_t t37 = -410382724083213LL;

	t37 = ((x181*x182)*(x183<=x184));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x189 = UINT32_MAX;
	int32_t x190 = 1973048;
	int16_t x191 = 1;
	int16_t x192 = INT16_MAX;
	volatile uint32_t t38 = 257307025U;

	t38 = ((x189*x190)*(x191<=x192));

	if (t38 != 4292994248U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = -1;
	uint32_t x196 = 38222225U;
	volatile uint64_t t39 = 1102LLU;

	t39 = ((x193*x194)*(x195<=x196));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x197 = 51U;
	static volatile uint16_t x198 = 5119U;
	uint8_t x199 = 1U;
	static int32_t t40 = -57;

	t40 = ((x197*x198)*(x199<=x200));

	if (t40 != 261069) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x213 = 14U;
	int32_t x214 = -6;
	static uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t41 = -75179;

	t41 = ((x213*x214)*(x215<=x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 1990U;
	volatile int32_t t42 = 1890301;

	t42 = ((x217*x218)*(x219<=x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x225 = 0U;
	int8_t x227 = -2;
	volatile uint8_t x228 = 1U;
	volatile uint32_t t43 = 3871503U;

	t43 = ((x225*x226)*(x227<=x228));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = INT16_MAX;
	int8_t x231 = INT8_MIN;
	static int64_t t44 = 733LL;

	t44 = ((x229*x230)*(x231<=x232));

	if (t44 != -1508837067426780LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x244 = INT8_MIN;
	volatile uint64_t t45 = 334922726LLU;

	t45 = ((x241*x242)*(x243<=x244));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MAX;
	int16_t x247 = -56;
	static int8_t x248 = -1;
	volatile int32_t t46 = 150965930;

	t46 = ((x245*x246)*(x247<=x248));

	if (t46 != -4161536) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x255 = INT64_MIN;
	static volatile uint64_t t47 = 7955512198LLU;

	t47 = ((x253*x254)*(x255<=x256));

	if (t47 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = -517;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = 1U;
	static int64_t t48 = -48030208349977LL;

	t48 = ((x257*x258)*(x259<=x260));

	if (t48 != -3619LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x265 = 8U;
	uint64_t x266 = 5186248336414233LLU;
	uint8_t x267 = 6U;
	static volatile uint64_t t49 = 531493071LLU;

	t49 = ((x265*x266)*(x267<=x268));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x273 = INT16_MIN;
	uint16_t x274 = 44U;
	uint16_t x275 = 15U;
	uint8_t x276 = 15U;

	t50 = ((x273*x274)*(x275<=x276));

	if (t50 != -1441792) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x277 = UINT16_MAX;
	volatile uint32_t x278 = 2U;
	static int16_t x279 = -1;
	int32_t x280 = INT32_MAX;
	volatile uint32_t t51 = 42U;

	t51 = ((x277*x278)*(x279<=x280));

	if (t51 != 131070U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x281 = INT16_MIN;
	volatile uint16_t x282 = UINT16_MAX;
	uint64_t x284 = UINT64_MAX;
	int32_t t52 = -7172;

	t52 = ((x281*x282)*(x283<=x284));

	if (t52 != -2147450880) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x289 = INT8_MIN;
	int8_t x290 = 13;
	int64_t x291 = INT64_MAX;
	static uint64_t x292 = 117342541262598LLU;
	volatile int32_t t53 = 215;

	t53 = ((x289*x290)*(x291<=x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x294 = INT8_MIN;
	static int32_t x295 = 0;
	static int32_t t54 = 1431751;

	t54 = ((x293*x294)*(x295<=x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = UINT8_MAX;
	static int8_t x299 = -39;
	uint32_t x300 = UINT32_MAX;
	static volatile int64_t t55 = -28645755725064777LL;

	t55 = ((x297*x298)*(x299<=x300));

	if (t55 != -255LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x309 = 1;
	int32_t x310 = -1903282;
	int64_t x312 = -57095183719512LL;
	static volatile int32_t t56 = -7242;

	t56 = ((x309*x310)*(x311<=x312));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x313 = 2537764LLU;
	int16_t x314 = 15;
	uint32_t x315 = UINT32_MAX;
	volatile int8_t x316 = INT8_MIN;

	t57 = ((x313*x314)*(x315<=x316));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x317 = -57;
	uint8_t x318 = 0U;
	uint8_t x319 = 28U;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t58 = 3;

	t58 = ((x317*x318)*(x319<=x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x321 = -2;
	int16_t x324 = INT16_MAX;
	volatile int32_t t59 = -367469924;

	t59 = ((x321*x322)*(x323<=x324));

	if (t59 != -40) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x326 = -691;
	int32_t x327 = INT32_MAX;

	t60 = ((x325*x326)*(x327<=x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 11625U;
	int32_t x331 = -1;
	int64_t x332 = INT64_MIN;
	volatile uint32_t t61 = 7U;

	t61 = ((x329*x330)*(x331<=x332));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x333 = 3U;
	int64_t x335 = INT64_MAX;
	volatile uint64_t x336 = 784167992189LLU;

	t62 = ((x333*x334)*(x335<=x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x345 = 14U;
	uint16_t x346 = 229U;
	int32_t x347 = INT32_MIN;
	int32_t t63 = 7549549;

	t63 = ((x345*x346)*(x347<=x348));

	if (t63 != 3206) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x349 = 2895LLU;
	int32_t x350 = INT32_MIN;
	uint16_t x351 = 5274U;
	static uint8_t x352 = 80U;
	uint64_t t64 = 1LLU;

	t64 = ((x349*x350)*(x351<=x352));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x357 = 16U;
	int16_t x358 = INT16_MIN;
	volatile uint8_t x359 = UINT8_MAX;
	int16_t x360 = 2;

	t65 = ((x357*x358)*(x359<=x360));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = INT16_MAX;
	int8_t x363 = INT8_MIN;
	static int8_t x364 = -1;

	t66 = ((x361*x362)*(x363<=x364));

	if (t66 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x385 = 24U;
	uint32_t x386 = 2122U;
	int32_t x387 = 343;
	static int32_t x388 = -54;

	t67 = ((x385*x386)*(x387<=x388));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int8_t x398 = 0;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MAX;
	static int32_t t68 = -342989669;

	t68 = ((x397*x398)*(x399<=x400));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x401 = 107U;
	static uint16_t x403 = 5201U;
	static uint64_t x404 = 252194LLU;
	volatile int32_t t69 = 1;

	t69 = ((x401*x402)*(x403<=x404));

	if (t69 != 16906) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x405 = 78U;
	int16_t x406 = INT16_MAX;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t70 = -555;

	t70 = ((x405*x406)*(x407<=x408));

	if (t70 != 2555826) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = -32;
	uint32_t x411 = 235121617U;
	int32_t x412 = INT32_MIN;
	volatile int32_t t71 = -60;

	t71 = ((x409*x410)*(x411<=x412));

	if (t71 != 4096) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = -7;
	volatile int16_t x415 = INT16_MIN;
	int64_t x416 = -86209613LL;
	volatile int32_t t72 = -11604044;

	t72 = ((x413*x414)*(x415<=x416));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = -1082;
	int8_t x419 = 6;
	int64_t x420 = 13LL;

	t73 = ((x417*x418)*(x419<=x420));

	if (t73 != 35454976) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x441 = INT64_MIN;
	uint64_t x442 = 21995727210LLU;
	int8_t x443 = -2;
	int32_t x444 = INT32_MAX;
	volatile uint64_t t74 = 350941450318994LLU;

	t74 = ((x441*x442)*(x443<=x444));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x445 = -714430003LL;
	int32_t x446 = 3889;
	int8_t x447 = INT8_MIN;
	int64_t x448 = INT64_MAX;
	volatile int64_t t75 = 0LL;

	t75 = ((x445*x446)*(x447<=x448));

	if (t75 != -2778418281667LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x451 = 4119U;
	static uint8_t x452 = 2U;

	t76 = ((x449*x450)*(x451<=x452));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x457 = 947107845922LLU;
	int16_t x458 = -1;
	volatile int64_t x459 = 2002596LL;
	int64_t x460 = INT64_MAX;
	static volatile uint64_t t77 = 16132633152505479LLU;

	t77 = ((x457*x458)*(x459<=x460));

	if (t77 != 18446743126601705694LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x462 = 170205212310413LLU;
	int8_t x463 = -1;
	int32_t x464 = INT32_MAX;
	volatile uint64_t t78 = 4428926516320LLU;

	t78 = ((x461*x462)*(x463<=x464));

	if (t78 != 18446573868497241203LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x465 = INT16_MAX;
	volatile int8_t x466 = -1;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t79 = -87;

	t79 = ((x465*x466)*(x467<=x468));

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x473 = UINT32_MAX;
	int32_t x474 = INT32_MAX;
	volatile int16_t x475 = INT16_MIN;
	uint8_t x476 = UINT8_MAX;
	uint32_t t80 = 261107U;

	t80 = ((x473*x474)*(x475<=x476));

	if (t80 != 2147483649U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x478 = INT8_MIN;
	uint16_t x479 = 26U;
	int64_t x480 = INT64_MAX;
	int32_t t81 = -1;

	t81 = ((x477*x478)*(x479<=x480));

	if (t81 != 6272) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x481 = -1;
	int8_t x482 = INT8_MIN;
	uint64_t x483 = 1269191LLU;

	t82 = ((x481*x482)*(x483<=x484));

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x487 = INT8_MIN;
	uint64_t x488 = 78548491276571886LLU;
	volatile int64_t t83 = -722633LL;

	t83 = ((x485*x486)*(x487<=x488));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x490 = 439U;
	int8_t x492 = INT8_MAX;
	volatile int32_t t84 = 6;

	t84 = ((x489*x490)*(x491<=x492));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x493 = -1;
	uint32_t x495 = UINT32_MAX;
	int8_t x496 = 59;
	uint32_t t85 = 30049829U;

	t85 = ((x493*x494)*(x495<=x496));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x501 = -1LL;
	volatile int64_t x502 = -1LL;
	int16_t x503 = INT16_MIN;

	t86 = ((x501*x502)*(x503<=x504));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x505 = 3U;
	static volatile int8_t x506 = INT8_MAX;
	static int16_t x507 = INT16_MIN;
	int8_t x508 = -1;
	volatile int32_t t87 = -1;

	t87 = ((x505*x506)*(x507<=x508));

	if (t87 != 381) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x509 = 28;
	volatile int32_t x510 = -1;
	int16_t x511 = INT16_MIN;
	static int64_t x512 = INT64_MIN;
	static int32_t t88 = 2584;

	t88 = ((x509*x510)*(x511<=x512));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x513 = UINT32_MAX;
	uint64_t x515 = 1037622225342322LLU;
	static int16_t x516 = INT16_MIN;
	uint32_t t89 = 424324667U;

	t89 = ((x513*x514)*(x515<=x516));

	if (t89 != 128U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x525 = INT8_MIN;
	uint32_t x526 = 327106380U;
	uint8_t x527 = 0U;
	static uint32_t t90 = 1557890386U;

	t90 = ((x525*x526)*(x527<=x528));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x533 = 22U;
	int8_t x534 = -1;
	int64_t x535 = -1LL;
	static int32_t x536 = -1;
	volatile int32_t t91 = 6;

	t91 = ((x533*x534)*(x535<=x536));

	if (t91 != -22) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x538 = -1;
	static int32_t t92 = -52109175;

	t92 = ((x537*x538)*(x539<=x540));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x545 = INT16_MIN;
	int64_t x547 = -47819257LL;
	static int64_t x548 = INT64_MIN;

	t93 = ((x545*x546)*(x547<=x548));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x549 = INT8_MIN;
	volatile int16_t x550 = INT16_MIN;
	int8_t x552 = -1;

	t94 = ((x549*x550)*(x551<=x552));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x553 = 180013079U;
	int32_t x554 = INT32_MIN;
	static volatile int8_t x555 = -6;
	static int32_t x556 = -13;
	volatile uint32_t t95 = 1U;

	t95 = ((x553*x554)*(x555<=x556));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x561 = 5U;
	static uint64_t x562 = 3477677979112LLU;
	int8_t x563 = 3;
	static uint8_t x564 = 0U;
	volatile uint64_t t96 = 281804866120518603LLU;

	t96 = ((x561*x562)*(x563<=x564));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x565 = -1;
	uint64_t x566 = 3033500LLU;
	volatile int64_t x567 = INT64_MIN;
	static int32_t x568 = 50482994;
	volatile uint64_t t97 = 21370118LLU;

	t97 = ((x565*x566)*(x567<=x568));

	if (t97 != 18446744073706518116LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x569 = -1;
	int64_t x571 = -1LL;
	uint8_t x572 = 5U;

	t98 = ((x569*x570)*(x571<=x572));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x573 = -1;
	static uint64_t x574 = 84LLU;
	int32_t x575 = INT32_MIN;
	uint16_t x576 = 69U;
	static uint64_t t99 = 5650309463708177LLU;

	t99 = ((x573*x574)*(x575<=x576));

	if (t99 != 18446744073709551532LLU) { NG(); } else { ; }
	
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

