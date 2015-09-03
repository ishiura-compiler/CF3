#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 5U;
static int8_t x9 = INT8_MIN;
static uint32_t x12 = 21689U;
static volatile int32_t t3 = 876597;
int64_t t5 = 472157190LL;
int32_t x30 = -29673;
int32_t t7 = -1374;
static uint8_t x34 = 86U;
int16_t x38 = INT16_MAX;
int32_t x41 = INT32_MIN;
int16_t x43 = -2;
int8_t x45 = -2;
int8_t x47 = INT8_MIN;
int16_t x48 = -1;
int64_t x51 = INT64_MAX;
int32_t x54 = INT32_MAX;
int8_t x62 = 0;
volatile int8_t x80 = INT8_MIN;
volatile int32_t t20 = -59382372;
volatile int16_t x91 = 6;
int64_t x98 = INT64_MAX;
static volatile int8_t x102 = INT8_MIN;
int32_t t24 = 18207;
int64_t t25 = -242084399632LL;
static uint8_t x139 = 0U;
int32_t x140 = -766;
volatile int32_t x149 = INT32_MIN;
uint32_t x160 = 257657585U;
int8_t x167 = INT8_MIN;
uint8_t x174 = 1U;
volatile uint16_t x185 = 2U;
uint16_t x186 = 0U;
int8_t x188 = INT8_MAX;
uint64_t x194 = 3661LLU;
static volatile int8_t x198 = 15;
static int8_t x201 = INT8_MAX;
static uint64_t x205 = 7825835200LLU;
volatile int64_t x207 = 24506595449255947LL;
int64_t x216 = -1955166965132343634LL;
volatile int8_t x225 = INT8_MIN;
int32_t x228 = -1;
static volatile uint64_t t46 = 31060LLU;
volatile uint32_t x242 = 38143432U;
uint64_t x243 = 13059LLU;
uint64_t t48 = 81917896470LLU;
int64_t x247 = INT64_MAX;
int32_t x258 = INT32_MAX;
uint32_t x262 = 271U;
static volatile int16_t x264 = INT16_MAX;
int16_t x273 = INT16_MAX;
static int8_t x274 = 1;
int64_t x279 = -1LL;
volatile int8_t x283 = -25;
volatile int8_t x295 = 0;
uint64_t t58 = 507080175320222LLU;
static int16_t x301 = 0;
volatile int64_t x302 = INT64_MAX;
static int32_t t61 = 7;
uint64_t x321 = UINT64_MAX;
static volatile int32_t t63 = -9984001;
volatile int64_t x336 = INT64_MIN;
uint8_t x343 = 104U;
int64_t x344 = 17324681548530311LL;
static volatile int64_t x351 = -1LL;
static uint32_t x358 = 0U;
volatile int32_t x359 = 1254727;
uint8_t x366 = 0U;
volatile int8_t x367 = 1;
volatile uint64_t x369 = 232923339313194008LLU;
int16_t x371 = 31;
static uint64_t x375 = 129842739LLU;
uint16_t x379 = UINT16_MAX;
uint8_t x382 = 21U;
int64_t t72 = 24790858026485LL;
static uint32_t x385 = 6711U;
int16_t x386 = INT16_MIN;
int64_t x391 = -2764848869908LL;
int32_t x396 = -1;
static uint32_t x399 = 1U;
int32_t x405 = 1643;
uint16_t x408 = 499U;
static volatile uint32_t x413 = UINT32_MAX;
uint64_t x415 = UINT64_MAX;
int32_t x419 = 1;
int8_t x429 = -1;
uint16_t x430 = 10000U;
int16_t x439 = 0;
volatile uint8_t x440 = 60U;
int16_t x462 = INT16_MIN;
static uint32_t x463 = 10399U;
int8_t x466 = 1;
volatile uint8_t x469 = 7U;
uint16_t x470 = 20U;
uint8_t x472 = UINT8_MAX;
int16_t x475 = -1;
volatile int32_t t91 = -3;
int64_t t92 = -715198174LL;
volatile int64_t t93 = 32670318174LL;
static int16_t x487 = INT16_MIN;
volatile int16_t x493 = INT16_MAX;
int64_t t95 = 2055015572827332308LL;
int32_t x505 = 846;
static volatile int16_t x508 = 552;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int64_t x2 = -4429732597LL;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 1432229829215LLU;
	uint64_t t0 = 589767004083349LLU;

	t0 = ((x1+x2)%(x3-x4));

	if (t0 != 9223372032425043210LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 0;
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	int32_t t1 = -234052230;

	t1 = ((x5+x6)%(x7-x8));

	if (t1 != -79) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	static int16_t x11 = 23;
	uint64_t t2 = 5432815915LLU;

	t2 = ((x9+x10)%(x11-x12));

	if (t2 != 469415427LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	uint16_t x14 = 3126U;
	uint16_t x15 = UINT16_MAX;
	volatile int32_t x16 = -30;

	t3 = ((x13+x14)%(x15-x16));

	if (t3 != 3096) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	int32_t x18 = 6977041;
	int32_t x19 = 139212;
	int16_t x20 = -1;
	volatile int32_t t4 = -11286833;

	t4 = ((x17+x18)%(x19-x20));

	if (t4 != -106732) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 468;
	int8_t x22 = INT8_MAX;
	int32_t x23 = -1;
	static volatile int64_t x24 = -10095525723200923LL;

	t5 = ((x21+x22)%(x23-x24));

	if (t5 != 595LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MAX;
	volatile int64_t x27 = -1LL;
	int64_t x28 = -110777491648894256LL;
	volatile int64_t t6 = 236097315LL;

	t6 = ((x25+x26)%(x27-x28));

	if (t6 != 2147450879LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 31U;
	static int8_t x31 = -33;
	volatile int32_t x32 = -1;

	t7 = ((x29+x30)%(x31-x32));

	if (t7 != -10) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint8_t x35 = 21U;
	static uint32_t x36 = 3792774U;
	volatile uint32_t t8 = 27U;

	t8 = ((x33+x34)%(x35-x36));

	if (t8 != 3760071U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 1U;
	volatile int8_t x39 = INT8_MIN;
	volatile int8_t x40 = -3;
	int32_t t9 = -81342884;

	t9 = ((x37+x38)%(x39-x40));

	if (t9 != 18) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = INT64_MAX;
	int32_t x44 = 240043776;
	volatile int64_t t10 = 1021LL;

	t10 = ((x41+x42)%(x43-x44));

	if (t10 != 178205491LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	static volatile uint32_t t11 = 4170524U;

	t11 = ((x45+x46)%(x47-x48));

	if (t11 != 124U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -5;
	static uint16_t x50 = 4U;
	uint16_t x52 = UINT16_MAX;
	int64_t t12 = -52124727945346LL;

	t12 = ((x49+x50)%(x51-x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	uint64_t x55 = 19277LLU;
	int16_t x56 = -1;
	static uint64_t t13 = 4019932LLU;

	t13 = ((x53+x54)%(x55-x56));

	if (t13 != 10836LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	volatile uint16_t x58 = 84U;
	uint16_t x59 = 18394U;
	volatile uint32_t x60 = UINT32_MAX;
	uint32_t t14 = 1U;

	t14 = ((x57+x58)%(x59-x60));

	if (t14 != 14456U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile int32_t x63 = 519818395;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = -111639099;

	t15 = ((x61+x62)%(x63-x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = 25752595644LLU;
	uint8_t x68 = 14U;
	uint64_t t16 = 27287LLU;

	t16 = ((x65+x66)%(x67-x68));

	if (t16 != 1666003149LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 2U;
	volatile int32_t x70 = -1;
	uint32_t x71 = 270729730U;
	int8_t x72 = INT8_MIN;
	uint32_t t17 = 3007U;

	t17 = ((x69+x70)%(x71-x72));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 1;
	static int16_t x78 = INT16_MAX;
	int32_t x79 = 49016;
	static int32_t t18 = 0;

	t18 = ((x77+x78)%(x79-x80));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 753973628048LL;
	int16_t x82 = -1;
	static int32_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	int64_t t19 = -1LL;

	t19 = ((x81+x82)%(x83-x84));

	if (t19 != 143LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;

	t20 = ((x85+x86)%(x87-x88));

	if (t20 != -8129) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 488U;
	int32_t x90 = -4648;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t21 = 969LLU;

	t21 = ((x89+x90)%(x91-x92));

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 89U;
	static int64_t x94 = -218414951881LL;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = -444;
	uint64_t t22 = 6871742399LLU;

	t22 = ((x93+x94)%(x95-x96));

	if (t22 != 410LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x97 = -1LL;
	static uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MIN;
	int64_t t23 = -35295169LL;

	t23 = ((x97+x98)%(x99-x100));

	if (t23 != 17730LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile int32_t x103 = -4954282;
	volatile int8_t x104 = -1;

	t24 = ((x101+x102)%(x103-x104));

	if (t24 != -32896) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x113 = INT32_MAX;
	int32_t x114 = -252;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;

	t25 = ((x113+x114)%(x115-x116));

	if (t25 != 2147483395LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	int64_t x120 = 3279179643629484LL;
	volatile int64_t t26 = 96691541LL;

	t26 = ((x117+x118)%(x119-x120));

	if (t26 != -256LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MAX;
	int8_t x126 = 32;
	static int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MAX;
	int32_t t27 = -1845;

	t27 = ((x125+x126)%(x127-x128));

	if (t27 != 159) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x137 = 0U;
	uint64_t x138 = UINT64_MAX;
	volatile uint64_t t28 = 16LLU;

	t28 = ((x137+x138)%(x139-x140));

	if (t28 != 525LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x150 = INT8_MAX;
	static uint8_t x151 = 0U;
	static int64_t x152 = -1LL;
	volatile int64_t t29 = -2592913864866114643LL;

	t29 = ((x149+x150)%(x151-x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MIN;
	volatile uint32_t x158 = 4692710U;
	int16_t x159 = -1;
	static int64_t t30 = -286467882LL;

	t30 = ((x157+x158)%(x159-x160));

	if (t30 != -1034575878LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	volatile uint32_t x163 = 125595547U;
	uint32_t x164 = 82U;
	uint64_t t31 = 128826829669LLU;

	t31 = ((x161+x162)%(x163-x164));

	if (t31 != 67112384LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x165 = INT8_MAX;
	uint16_t x166 = 80U;
	int8_t x168 = INT8_MAX;
	int32_t t32 = -1;

	t32 = ((x165+x166)%(x167-x168));

	if (t32 != 207) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x173 = 123005027349LLU;
	int16_t x175 = INT16_MIN;
	volatile int32_t x176 = INT32_MIN;
	uint64_t t33 = 4716955059LLU;

	t33 = ((x173+x174)%(x175-x176));

	if (t33 != 600327190LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x187 = -15686;
	volatile int32_t t34 = -17198157;

	t34 = ((x185+x186)%(x187-x188));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = INT8_MAX;
	static volatile int32_t x190 = INT32_MIN;
	static int16_t x191 = 4;
	int16_t x192 = 3756;
	volatile int32_t t35 = -339633739;

	t35 = ((x189+x190)%(x191-x192));

	if (t35 != -57) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x193 = INT32_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	static int8_t x196 = INT8_MAX;
	volatile uint64_t t36 = 89LLU;

	t36 = ((x193+x194)%(x195-x196));

	if (t36 != 61901LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x197 = 52629;
	int64_t x199 = -699LL;
	int16_t x200 = INT16_MIN;
	static int64_t t37 = -1853247805342454LL;

	t37 = ((x197+x198)%(x199-x200));

	if (t37 != 20575LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x202 = INT8_MIN;
	static int32_t x203 = -12574394;
	volatile int8_t x204 = INT8_MIN;
	int32_t t38 = 0;

	t38 = ((x201+x202)%(x203-x204));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x206 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t39 = 478670814364412LLU;

	t39 = ((x205+x206)%(x207-x208));

	if (t39 != 7825835072LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = -54;
	volatile int64_t x210 = -12919LL;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MAX;
	int64_t t40 = -1432560888677480LL;

	t40 = ((x209+x210)%(x211-x212));

	if (t40 != -12973LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MIN;
	int16_t x215 = -5562;
	volatile int64_t t41 = -7402513196075576LL;

	t41 = ((x213+x214)%(x215-x216));

	if (t41 != -2147450881LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x217 = 1;
	int32_t x218 = 2014;
	int8_t x219 = -1;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t42 = -3;

	t42 = ((x217+x218)%(x219-x220));

	if (t42 != 2015) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = UINT16_MAX;
	int64_t x222 = INT64_MIN;
	volatile uint32_t x223 = 10U;
	volatile uint8_t x224 = 4U;
	volatile int64_t t43 = -419712890435190429LL;

	t43 = ((x221+x222)%(x223-x224));

	if (t43 != -5LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x226 = 1709U;
	uint8_t x227 = 0U;
	static volatile int32_t t44 = 9155;

	t44 = ((x225+x226)%(x227-x228));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x229 = 488410U;
	int8_t x230 = -7;
	volatile int16_t x231 = 7;
	int64_t x232 = -1LL;
	static volatile int64_t t45 = -13102987314115110LL;

	t45 = ((x229+x230)%(x231-x232));

	if (t45 != 3LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x233 = 6949718505503401LLU;
	volatile int16_t x234 = 3;
	static int32_t x235 = INT32_MIN;
	int32_t x236 = -3947;

	t46 = ((x233+x234)%(x235-x236));

	if (t46 != 6949718505503404LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = 7U;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t47 = -1;

	t47 = ((x237+x238)%(x239-x240));

	if (t47 != -121) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x241 = 10875U;
	static uint16_t x244 = 62U;

	t48 = ((x241+x242)%(x243-x244));

	if (t48 != 8112LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = -1LL;
	static int16_t x246 = INT16_MAX;
	volatile uint64_t x248 = 45076390183LLU;
	uint64_t t49 = 28978442424LLU;

	t49 = ((x245+x246)%(x247-x248));

	if (t49 != 32766LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x253 = -5426;
	int16_t x254 = INT16_MIN;
	int64_t x255 = -3811LL;
	int64_t x256 = -248586751769606LL;
	int64_t t50 = -460325LL;

	t50 = ((x253+x254)%(x255-x256));

	if (t50 != -38194LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = 2756LLU;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	uint64_t t51 = 207856879477267914LLU;

	t51 = ((x257+x258)%(x259-x260));

	if (t51 != 2147486403LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x261 = -2774827988344006LL;
	int64_t x263 = -105681444LL;
	static volatile int64_t t52 = 1LL;

	t52 = ((x261+x262)%(x263-x264));

	if (t52 != -43759234LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x275 = INT8_MIN;
	int64_t x276 = -1LL;
	int64_t t53 = 12367LL;

	t53 = ((x273+x274)%(x275-x276));

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = -1;
	int64_t x278 = -1LL;
	uint32_t x280 = 3U;
	volatile int64_t t54 = 462002434723LL;

	t54 = ((x277+x278)%(x279-x280));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x281 = 34;
	uint64_t x282 = 0LLU;
	static uint8_t x284 = 0U;
	uint64_t t55 = 252561740501LLU;

	t55 = ((x281+x282)%(x283-x284));

	if (t55 != 34LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -423;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = 3U;
	static int32_t t56 = 428561543;

	t56 = ((x285+x286)%(x287-x288));

	if (t56 != -47) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x293 = UINT64_MAX;
	volatile int8_t x294 = INT8_MAX;
	volatile int64_t x296 = 1653LL;
	volatile uint64_t t57 = 5290998452747145946LLU;

	t57 = ((x293+x294)%(x295-x296));

	if (t57 != 126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = -780297728LL;
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = 55U;
	static volatile uint32_t x300 = 151341U;

	t58 = ((x297+x298)%(x299-x300));

	if (t58 != 633076017LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x303 = 2410302LL;
	int32_t x304 = INT32_MIN;
	int64_t t59 = 2259032LL;

	t59 = ((x301+x302)%(x303-x304));

	if (t59 != 1084556607LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x305 = 0U;
	volatile uint8_t x306 = 36U;
	int8_t x307 = -2;
	volatile uint32_t x308 = 7854U;
	volatile uint32_t t60 = 5291U;

	t60 = ((x305+x306)%(x307-x308));

	if (t60 != 36U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = -1;
	uint16_t x318 = 21U;
	static int16_t x319 = -1;
	int16_t x320 = INT16_MIN;

	t61 = ((x317+x318)%(x319-x320));

	if (t61 != 20) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x322 = 2470U;
	volatile uint64_t x323 = 299LLU;
	volatile int8_t x324 = -1;
	volatile uint64_t t62 = 72LLU;

	t62 = ((x321+x322)%(x323-x324));

	if (t62 != 69LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x325 = 42U;
	int8_t x326 = INT8_MAX;
	int8_t x327 = INT8_MIN;
	static int32_t x328 = -79;

	t63 = ((x325+x326)%(x327-x328));

	if (t63 != 22) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x333 = -28108LL;
	int32_t x334 = INT32_MIN;
	int16_t x335 = -1411;
	int64_t t64 = -990095328468LL;

	t64 = ((x333+x334)%(x335-x336));

	if (t64 != -2147511756LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x341 = 0U;
	volatile uint32_t x342 = UINT32_MAX;
	static int64_t t65 = -746532768767LL;

	t65 = ((x341+x342)%(x343-x344));

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x349 = -9;
	static int16_t x350 = INT16_MIN;
	int32_t x352 = INT32_MAX;
	int64_t t66 = -1009891065956414LL;

	t66 = ((x349+x350)%(x351-x352));

	if (t66 != -32777LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x357 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	uint32_t t67 = 3443972U;

	t67 = ((x357+x358)%(x359-x360));

	if (t67 != 853358U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x365 = 14836490608279721LLU;
	uint8_t x368 = UINT8_MAX;
	volatile uint64_t t68 = 42589551237990988LLU;

	t68 = ((x365+x366)%(x367-x368));

	if (t68 != 14836490608279721LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x370 = 3;
	uint64_t x372 = 776536797LLU;
	volatile uint64_t t69 = 1096448387088LLU;

	t69 = ((x369+x370)%(x371-x372));

	if (t69 != 232923339313194011LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x373 = 3U;
	int32_t x374 = INT32_MIN;
	int64_t x376 = INT64_MAX;
	uint64_t t70 = 3280431307472185679LLU;

	t70 = ((x373+x374)%(x375-x376));

	if (t70 != 9223372034577449423LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int64_t x378 = -63860038152LL;
	volatile int8_t x380 = -1;
	static volatile int64_t t71 = -15274828561483510LL;

	t71 = ((x377+x378)%(x379-x380));

	if (t71 != -55944LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = INT64_MIN;
	int8_t x383 = 10;
	int16_t x384 = INT16_MIN;

	t72 = ((x381+x382)%(x383-x384));

	if (t72 != -14423LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x387 = UINT16_MAX;
	static int64_t x388 = INT64_MAX;
	volatile int64_t t73 = 245107220589960LL;

	t73 = ((x385+x386)%(x387-x388));

	if (t73 != 4294941239LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x389 = 1U;
	int8_t x390 = 6;
	static uint32_t x392 = 833560264U;
	volatile int64_t t74 = -1187355188075550LL;

	t74 = ((x389+x390)%(x391-x392));

	if (t74 != 7LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x393 = -8;
	uint32_t x394 = 2547379U;
	uint8_t x395 = 14U;
	uint32_t t75 = 3647U;

	t75 = ((x393+x394)%(x395-x396));

	if (t75 != 11U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = -1;
	uint64_t x398 = 254702392947067602LLU;
	static int32_t x400 = INT32_MIN;
	volatile uint64_t t76 = 881905540LLU;

	t76 = ((x397+x398)%(x399-x400));

	if (t76 != 268142045LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	uint16_t x403 = 32400U;
	int64_t x404 = -1LL;
	volatile int64_t t77 = 84LL;

	t77 = ((x401+x402)%(x403-x404));

	if (t77 != -368LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x406 = 134151539017924LL;
	uint32_t x407 = 81705037U;
	volatile int64_t t78 = -19458805483172284LL;

	t78 = ((x405+x406)%(x407-x408));

	if (t78 != 41031987LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x414 = INT8_MIN;
	int64_t x416 = INT64_MAX;
	uint64_t t79 = 20308354014360LLU;

	t79 = ((x413+x414)%(x415-x416));

	if (t79 != 4294967167LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x417 = 308LL;
	uint16_t x418 = 542U;
	int16_t x420 = INT16_MAX;
	int64_t t80 = -103911606LL;

	t80 = ((x417+x418)%(x419-x420));

	if (t80 != 850LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x431 = INT64_MIN;
	int16_t x432 = -1;
	int64_t t81 = -49439416LL;

	t81 = ((x429+x430)%(x431-x432));

	if (t81 != 9999LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x433 = INT32_MIN;
	int32_t x434 = 21810029;
	static volatile int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	static volatile int64_t t82 = 137899966705664LL;

	t82 = ((x433+x434)%(x435-x436));

	if (t82 != -2125673619LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x437 = 33441750LLU;
	int16_t x438 = INT16_MAX;
	volatile uint64_t t83 = 615440954704213LLU;

	t83 = ((x437+x438)%(x439-x440));

	if (t83 != 33474517LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x441 = -2;
	static uint64_t x442 = 793LLU;
	int8_t x443 = 1;
	uint8_t x444 = 109U;
	uint64_t t84 = 71481055451LLU;

	t84 = ((x441+x442)%(x443-x444));

	if (t84 != 791LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x445 = 58011498U;
	volatile int32_t x446 = INT32_MIN;
	int8_t x447 = 21;
	int64_t x448 = -17LL;
	volatile int64_t t85 = -8732783706620836LL;

	t85 = ((x445+x446)%(x447-x448));

	if (t85 != 36LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = INT16_MIN;
	int64_t x454 = -1LL;
	int16_t x455 = INT16_MAX;
	int16_t x456 = -1;
	volatile int64_t t86 = 6210024961LL;

	t86 = ((x453+x454)%(x455-x456));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x457 = -219;
	uint8_t x458 = 12U;
	uint32_t x459 = 25404610U;
	uint16_t x460 = UINT16_MAX;
	uint32_t t87 = 10U;

	t87 = ((x457+x458)%(x459-x460));

	if (t87 != 12663414U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x461 = -2567463;
	int8_t x464 = -1;
	uint32_t t88 = 0U;

	t88 = ((x461+x462)%(x463-x464));

	if (t88 != 6265U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = INT8_MIN;
	volatile uint8_t x467 = 4U;
	volatile int64_t x468 = -1LL;
	int64_t t89 = 95821600LL;

	t89 = ((x465+x466)%(x467-x468));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x471 = -1;
	volatile int32_t t90 = -281;

	t90 = ((x469+x470)%(x471-x472));

	if (t90 != 27) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x473 = UINT8_MAX;
	uint16_t x474 = UINT16_MAX;
	uint8_t x476 = 7U;

	t91 = ((x473+x474)%(x475-x476));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x477 = -1LL;
	int8_t x478 = -6;
	int16_t x479 = 5127;
	int32_t x480 = 3768;

	t92 = ((x477+x478)%(x479-x480));

	if (t92 != -7LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x481 = -357728;
	int32_t x482 = -1;
	static int64_t x483 = INT64_MAX;
	volatile int64_t x484 = 100490372LL;

	t93 = ((x481+x482)%(x483-x484));

	if (t93 != -357729LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x485 = 1058U;
	volatile int16_t x486 = -1;
	int32_t x488 = 13;
	uint32_t t94 = 233U;

	t94 = ((x485+x486)%(x487-x488));

	if (t94 != 1057U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x494 = INT16_MIN;
	static int8_t x495 = INT8_MIN;
	int64_t x496 = INT64_MIN;

	t95 = ((x493+x494)%(x495-x496));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x497 = 9U;
	int8_t x498 = 61;
	static uint16_t x499 = 8161U;
	int16_t x500 = 3;
	volatile int32_t t96 = 5621;

	t96 = ((x497+x498)%(x499-x500));

	if (t96 != 70) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x501 = -1LL;
	volatile int16_t x502 = 2251;
	uint16_t x503 = 1U;
	static int32_t x504 = 21;
	int64_t t97 = -130887005LL;

	t97 = ((x501+x502)%(x503-x504));

	if (t97 != 10LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x506 = 106U;
	volatile int16_t x507 = INT16_MIN;
	static volatile int32_t t98 = -169267;

	t98 = ((x505+x506)%(x507-x508));

	if (t98 != 952) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x509 = UINT16_MAX;
	static uint64_t x510 = 148509292933303LLU;
	uint8_t x511 = UINT8_MAX;
	uint16_t x512 = 0U;
	uint64_t t99 = 441LLU;

	t99 = ((x509+x510)%(x511-x512));

	if (t99 != 43LLU) { NG(); } else { ; }
	
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

