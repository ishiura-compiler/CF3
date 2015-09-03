#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -1;
volatile int32_t t0 = 172858723;
int8_t x6 = INT8_MIN;
uint16_t x11 = 126U;
int16_t x23 = 862;
volatile int32_t t5 = 41;
uint8_t x34 = UINT8_MAX;
static int32_t x36 = 3812;
volatile int64_t x44 = -92181967208483LL;
uint16_t x46 = UINT16_MAX;
volatile int32_t t11 = -3581;
int8_t x60 = INT8_MAX;
uint64_t x71 = 980228LLU;
int64_t x72 = -53228233LL;
static int32_t x73 = -1;
volatile int8_t x80 = INT8_MIN;
static int16_t x83 = INT16_MAX;
int16_t x89 = INT16_MIN;
static uint32_t x91 = UINT32_MAX;
int64_t x94 = -4LL;
int32_t x101 = -1;
int16_t x105 = 135;
static uint8_t x106 = 8U;
static int32_t x108 = 31899;
int32_t x125 = -1;
static volatile int64_t x126 = INT64_MAX;
volatile int32_t t26 = -53813;
int64_t x141 = -249896851855310768LL;
volatile int32_t t27 = 1033388391;
static volatile uint16_t x146 = 1U;
volatile uint8_t x152 = 29U;
uint64_t x154 = 194779766673752LLU;
volatile uint64_t x155 = 2296494741744LLU;
int32_t t30 = 7132709;
uint32_t x158 = 237U;
volatile uint32_t x162 = 734U;
int32_t t32 = -221331892;
int32_t t33 = -11266814;
int64_t x182 = -443374649769648977LL;
int16_t x191 = 628;
uint32_t x203 = UINT32_MAX;
int32_t x209 = -1;
int16_t x212 = -1;
uint64_t x213 = 3142409472265LLU;
uint32_t x214 = 105U;
int32_t t43 = 1950706;
volatile int32_t x219 = INT32_MIN;
int32_t t46 = 616;
volatile int8_t x243 = INT8_MIN;
volatile int32_t t47 = -892036;
int32_t x246 = -134988023;
int16_t x256 = INT16_MAX;
int32_t t50 = -26125167;
uint64_t x257 = 29790402395LLU;
uint64_t x262 = UINT64_MAX;
int8_t x264 = 8;
static int16_t x271 = INT16_MIN;
int16_t x272 = 1305;
static volatile int64_t x276 = 56403090124853357LL;
int32_t t55 = -202;
static int8_t x287 = INT8_MIN;
int32_t t60 = 525514232;
int32_t t61 = 26415019;
int32_t x310 = -1;
int8_t x312 = -1;
int8_t x339 = -1;
int32_t t66 = -4;
int8_t x343 = -1;
int32_t x345 = -6834759;
int8_t x346 = INT8_MAX;
int16_t x348 = INT16_MIN;
uint16_t x360 = 9U;
uint16_t x362 = 7634U;
volatile int32_t t71 = -21405;
volatile uint16_t x365 = UINT16_MAX;
uint32_t x368 = 13U;
int64_t x374 = -1LL;
uint8_t x377 = 0U;
uint32_t x380 = 1U;
uint32_t x395 = 87U;
uint8_t x396 = 35U;
volatile int32_t t77 = 1042603955;
int64_t x399 = INT64_MIN;
volatile int16_t x403 = -1;
static uint64_t x404 = 2629247163LLU;
int32_t t80 = -165964;
volatile int32_t t81 = -123;
int32_t x419 = 1163;
static uint8_t x420 = UINT8_MAX;
volatile int64_t x438 = -1LL;
static int32_t x440 = INT32_MAX;
int64_t x441 = INT64_MAX;
int16_t x445 = -1;
volatile int32_t t90 = -84;
volatile int8_t x467 = 27;
static uint8_t x468 = UINT8_MAX;
volatile int32_t t92 = -3522;
uint64_t x470 = 422448349919271694LLU;
int8_t x471 = INT8_MAX;
int16_t x472 = -2;
volatile int16_t x475 = INT16_MAX;
uint32_t x482 = UINT32_MAX;
uint32_t x483 = 102U;
int8_t x487 = INT8_MAX;
static int8_t x491 = INT8_MIN;
int32_t t97 = 76;
volatile int32_t x495 = INT32_MIN;
static int64_t x500 = 8029909LL;


void f0(void) {
	int8_t x2 = -5;
	int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MAX;

	t0 = ((x1+x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint64_t x7 = 3629329453LLU;
	volatile uint32_t x8 = UINT32_MAX;
	static int32_t t1 = -16;

	t1 = ((x5+x6)<(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	uint32_t x10 = 2U;
	uint64_t x12 = 401579LLU;
	int32_t t2 = 7262;

	t2 = ((x9+x10)<(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 129062123675685LL;
	uint64_t x14 = 5068104486027153LLU;
	static int16_t x15 = 0;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -1;

	t3 = ((x13+x14)<(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	static volatile uint64_t x22 = UINT64_MAX;
	int32_t x24 = -622105;
	volatile int32_t t4 = -542662;

	t4 = ((x21+x22)<(x23+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = 1728;
	int16_t x26 = 583;
	volatile int16_t x27 = 4617;
	uint16_t x28 = 6360U;

	t5 = ((x25+x26)<(x27+x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 4U;
	static volatile int64_t x30 = -1LL;
	uint32_t x31 = 354U;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 6;

	t6 = ((x29+x30)<(x31+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x33 = 19U;
	volatile int64_t x35 = INT64_MIN;
	int32_t t7 = 744;

	t7 = ((x33+x34)<(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	uint8_t x38 = 12U;
	uint16_t x39 = 192U;
	int32_t x40 = 978;
	volatile int32_t t8 = 21966237;

	t8 = ((x37+x38)<(x39+x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 624U;
	static int8_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	int32_t t9 = -196;

	t9 = ((x41+x42)<(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 36216U;
	static uint16_t x47 = 435U;
	volatile int64_t x48 = 13LL;
	int32_t t10 = 24;

	t10 = ((x45+x46)<(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	int32_t x50 = -244;
	uint8_t x51 = 57U;
	uint16_t x52 = 28U;

	t11 = ((x49+x50)<(x51+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MAX;
	int16_t x55 = 1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -12060298;

	t12 = ((x53+x54)<(x55+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 345717546769LLU;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = -1LL;
	volatile int32_t t13 = 19493;

	t13 = ((x57+x58)<(x59+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x69 = 3U;
	int32_t x70 = -1;
	static int32_t t14 = 1284;

	t14 = ((x69+x70)<(x71+x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = 4U;
	int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	static volatile int32_t t15 = 2;

	t15 = ((x73+x74)<(x75+x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = -14;
	volatile int32_t t16 = 1761615;

	t16 = ((x77+x78)<(x79+x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = -1;
	static int32_t x82 = -1;
	uint16_t x84 = UINT16_MAX;
	int32_t t17 = 25609266;

	t17 = ((x81+x82)<(x83+x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = 2243845U;
	uint8_t x86 = 55U;
	volatile int16_t x87 = INT16_MAX;
	uint8_t x88 = 12U;
	static int32_t t18 = 79861;

	t18 = ((x85+x86)<(x87+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = -1;
	int32_t x92 = -1631917;
	static volatile int32_t t19 = 35;

	t19 = ((x89+x90)<(x91+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 0U;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = -1LL;
	static int32_t t20 = -1540;

	t20 = ((x93+x94)<(x95+x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x102 = 423937836;
	int16_t x103 = -16;
	uint64_t x104 = UINT64_MAX;
	int32_t t21 = -3385529;

	t21 = ((x101+x102)<(x103+x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x107 = INT16_MIN;
	volatile int32_t t22 = 62524;

	t22 = ((x105+x106)<(x107+x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = -13;
	int32_t x114 = 1;
	int64_t x115 = -700730347494288028LL;
	static volatile int16_t x116 = 229;
	static volatile int32_t t23 = -924079012;

	t23 = ((x113+x114)<(x115+x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x127 = 42;
	int64_t x128 = -1LL;
	volatile int32_t t24 = 24148;

	t24 = ((x125+x126)<(x127+x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = -1LL;
	uint32_t x130 = 31301U;
	static uint64_t x131 = 465371987939LLU;
	uint16_t x132 = 15900U;
	volatile int32_t t25 = -16;

	t25 = ((x129+x130)<(x131+x132));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x137 = INT16_MAX;
	int8_t x138 = INT8_MIN;
	int64_t x139 = -1111LL;
	int8_t x140 = INT8_MIN;

	t26 = ((x137+x138)<(x139+x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x142 = 189310LLU;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;

	t27 = ((x141+x142)<(x143+x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x147 = 1U;
	int16_t x148 = INT16_MAX;
	volatile int32_t t28 = 6;

	t28 = ((x145+x146)<(x147+x148));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x149 = -7327;
	int16_t x150 = -5547;
	int8_t x151 = INT8_MIN;
	volatile int32_t t29 = 0;

	t29 = ((x149+x150)<(x151+x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x153 = 277U;
	uint64_t x156 = 1078540048521641163LLU;

	t30 = ((x153+x154)<(x155+x156));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = 562138LL;
	uint64_t x159 = 307980LLU;
	uint32_t x160 = 31U;
	volatile int32_t t31 = -5990113;

	t31 = ((x157+x158)<(x159+x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x163 = -3981;
	uint8_t x164 = 122U;

	t32 = ((x161+x162)<(x163+x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = 2U;
	int16_t x167 = INT16_MIN;
	int8_t x168 = -1;

	t33 = ((x165+x166)<(x167+x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = 34847388434891LL;
	int8_t x170 = 0;
	volatile uint16_t x171 = 38U;
	int64_t x172 = -1LL;
	int32_t t34 = 7;

	t34 = ((x169+x170)<(x171+x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = -1;
	int16_t x183 = -170;
	int64_t x184 = -18848LL;
	int32_t t35 = -20;

	t35 = ((x181+x182)<(x183+x184));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	static int8_t x186 = -1;
	int32_t x187 = 0;
	uint32_t x188 = 10768025U;
	int32_t t36 = 2074;

	t36 = ((x185+x186)<(x187+x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = 15;
	volatile int32_t x192 = 373441;
	volatile int32_t t37 = -3;

	t37 = ((x189+x190)<(x191+x192));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x193 = 60U;
	volatile int16_t x194 = INT16_MAX;
	volatile uint8_t x195 = 28U;
	static uint64_t x196 = 7819192095411LLU;
	volatile int32_t t38 = 4607211;

	t38 = ((x193+x194)<(x195+x196));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x197 = 23U;
	volatile uint8_t x198 = 15U;
	static uint8_t x199 = 1U;
	static int64_t x200 = -1788083420719944739LL;
	volatile int32_t t39 = 805;

	t39 = ((x197+x198)<(x199+x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = INT16_MIN;
	uint16_t x202 = UINT16_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t40 = 250;

	t40 = ((x201+x202)<(x203+x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = UINT64_MAX;
	uint32_t x206 = 724375531U;
	int64_t x207 = -1LL;
	volatile uint64_t x208 = UINT64_MAX;
	static int32_t t41 = -1;

	t41 = ((x205+x206)<(x207+x208));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x210 = -1LL;
	uint16_t x211 = 88U;
	volatile int32_t t42 = -1535094;

	t42 = ((x209+x210)<(x211+x212));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x215 = INT16_MIN;
	int64_t x216 = 9799500LL;

	t43 = ((x213+x214)<(x215+x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = 5804281525LL;
	uint64_t x218 = 51603191034810855LLU;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t44 = 752601;

	t44 = ((x217+x218)<(x219+x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = INT16_MAX;
	uint32_t x222 = 3858U;
	static uint8_t x223 = 0U;
	static int32_t x224 = INT32_MIN;
	static int32_t t45 = 500;

	t45 = ((x221+x222)<(x223+x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = 26902LL;
	int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MIN;

	t46 = ((x229+x230)<(x231+x232));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x241 = INT8_MAX;
	uint8_t x242 = UINT8_MAX;
	int8_t x244 = INT8_MIN;

	t47 = ((x241+x242)<(x243+x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x245 = 6U;
	volatile int8_t x247 = -1;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t48 = 3537932;

	t48 = ((x245+x246)<(x247+x248));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = -1LL;
	static int64_t x250 = 1LL;
	uint64_t x251 = 474590572773389099LLU;
	uint32_t x252 = UINT32_MAX;
	int32_t t49 = 165;

	t49 = ((x249+x250)<(x251+x252));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x253 = 2U;
	uint16_t x254 = 4U;
	uint16_t x255 = UINT16_MAX;

	t50 = ((x253+x254)<(x255+x256));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x258 = -1;
	volatile int16_t x259 = -1;
	uint64_t x260 = 8448139993344170886LLU;
	volatile int32_t t51 = 347495;

	t51 = ((x257+x258)<(x259+x260));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x261 = INT32_MAX;
	static volatile int32_t x263 = -7;
	volatile int32_t t52 = 1;

	t52 = ((x261+x262)<(x263+x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = -1;
	static volatile int32_t t53 = -2694136;

	t53 = ((x269+x270)<(x271+x272));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = INT8_MAX;
	int64_t x274 = -1LL;
	static int32_t x275 = -1;
	int32_t t54 = 86404891;

	t54 = ((x273+x274)<(x275+x276));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x277 = -58LL;
	uint16_t x278 = 3877U;
	uint8_t x279 = 77U;
	static int16_t x280 = -1;

	t55 = ((x277+x278)<(x279+x280));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x282 = -5715;
	int8_t x283 = -3;
	uint64_t x284 = UINT64_MAX;
	int32_t t56 = 14747310;

	t56 = ((x281+x282)<(x283+x284));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x285 = 3LLU;
	int32_t x286 = INT32_MAX;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t57 = 141166;

	t57 = ((x285+x286)<(x287+x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x289 = UINT16_MAX;
	int8_t x290 = INT8_MAX;
	uint64_t x291 = 11658LLU;
	static int64_t x292 = -1LL;
	static volatile int32_t t58 = 10260;

	t58 = ((x289+x290)<(x291+x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x293 = 35U;
	static volatile uint8_t x294 = 68U;
	static volatile int16_t x295 = -1;
	uint16_t x296 = 64U;
	int32_t t59 = -12540988;

	t59 = ((x293+x294)<(x295+x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = 0;
	int64_t x298 = -9LL;
	int8_t x299 = -1;
	int16_t x300 = INT16_MIN;

	t60 = ((x297+x298)<(x299+x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = 3422LL;
	static int16_t x302 = -6;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MAX;

	t61 = ((x301+x302)<(x303+x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = 1U;
	volatile int16_t x307 = -1;
	static int64_t x308 = 5308010105LL;
	volatile int32_t t62 = -6435;

	t62 = ((x305+x306)<(x307+x308));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x309 = 52120LL;
	uint16_t x311 = 346U;
	volatile int32_t t63 = 172;

	t63 = ((x309+x310)<(x311+x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x321 = INT8_MAX;
	int64_t x322 = 3566338547070LL;
	static uint64_t x323 = UINT64_MAX;
	static int32_t x324 = INT32_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x321+x322)<(x323+x324));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x333 = INT64_MAX;
	int8_t x334 = -1;
	int64_t x335 = -2861225129321586991LL;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t65 = -14801;

	t65 = ((x333+x334)<(x335+x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x337 = UINT32_MAX;
	int8_t x338 = INT8_MIN;
	int32_t x340 = INT32_MAX;

	t66 = ((x337+x338)<(x339+x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x341 = 40;
	static int16_t x342 = INT16_MIN;
	int8_t x344 = 1;
	volatile int32_t t67 = -2;

	t67 = ((x341+x342)<(x343+x344));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x347 = 28U;
	int32_t t68 = 259423;

	t68 = ((x345+x346)<(x347+x348));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x353 = UINT64_MAX;
	int64_t x354 = -14281841LL;
	volatile int32_t x355 = INT32_MIN;
	static uint16_t x356 = UINT16_MAX;
	int32_t t69 = -670669;

	t69 = ((x353+x354)<(x355+x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x357 = UINT8_MAX;
	uint64_t x358 = 179317874906202435LLU;
	volatile uint8_t x359 = 44U;
	int32_t t70 = 5138;

	t70 = ((x357+x358)<(x359+x360));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x361 = 9842;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = INT32_MAX;

	t71 = ((x361+x362)<(x363+x364));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x366 = 2;
	volatile int16_t x367 = INT16_MAX;
	int32_t t72 = 1;

	t72 = ((x365+x366)<(x367+x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = -1;
	uint64_t x375 = 45235334LLU;
	static volatile int16_t x376 = 376;
	static int32_t t73 = -10;

	t73 = ((x373+x374)<(x375+x376));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x378 = 1945592526U;
	int16_t x379 = INT16_MIN;
	static volatile int32_t t74 = 11659719;

	t74 = ((x377+x378)<(x379+x380));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x385 = 12LLU;
	uint16_t x386 = 15729U;
	uint16_t x387 = 22113U;
	int8_t x388 = -41;
	volatile int32_t t75 = 13;

	t75 = ((x385+x386)<(x387+x388));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x389 = 12U;
	static uint64_t x390 = 1599350604897264687LLU;
	uint64_t x391 = 29756940318205LLU;
	uint8_t x392 = 3U;
	static volatile int32_t t76 = -8631;

	t76 = ((x389+x390)<(x391+x392));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x393 = 5U;
	int8_t x394 = INT8_MIN;

	t77 = ((x393+x394)<(x395+x396));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 8394U;
	uint32_t x400 = 68U;
	static int32_t t78 = 85;

	t78 = ((x397+x398)<(x399+x400));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = -1471;
	int32_t x402 = -1;
	volatile int32_t t79 = -1585070;

	t79 = ((x401+x402)<(x403+x404));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x405 = -272;
	int8_t x406 = INT8_MAX;
	uint32_t x407 = 396708U;
	int64_t x408 = INT64_MIN;

	t80 = ((x405+x406)<(x407+x408));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	volatile int8_t x411 = -14;
	static uint8_t x412 = UINT8_MAX;

	t81 = ((x409+x410)<(x411+x412));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x413 = INT8_MIN;
	uint32_t x414 = 29339452U;
	static uint16_t x415 = UINT16_MAX;
	static int64_t x416 = INT64_MIN;
	volatile int32_t t82 = 7;

	t82 = ((x413+x414)<(x415+x416));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x417 = 15LLU;
	int64_t x418 = INT64_MAX;
	volatile int32_t t83 = 28;

	t83 = ((x417+x418)<(x419+x420));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 47U;
	uint16_t x432 = 23U;
	int32_t t84 = -33824;

	t84 = ((x429+x430)<(x431+x432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x433 = INT16_MIN;
	static int8_t x434 = -1;
	int64_t x435 = -491695LL;
	volatile int32_t x436 = INT32_MAX;
	volatile int32_t t85 = -7529965;

	t85 = ((x433+x434)<(x435+x436));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x437 = -43;
	uint64_t x439 = 23085LLU;
	static int32_t t86 = 141346827;

	t86 = ((x437+x438)<(x439+x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x442 = INT64_MIN;
	volatile uint8_t x443 = 9U;
	static volatile int16_t x444 = INT16_MIN;
	volatile int32_t t87 = -17638;

	t87 = ((x441+x442)<(x443+x444));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x446 = INT16_MIN;
	uint64_t x447 = 4059313LLU;
	int8_t x448 = 52;
	volatile int32_t t88 = 41069035;

	t88 = ((x445+x446)<(x447+x448));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x449 = 775LLU;
	uint16_t x450 = 12720U;
	uint8_t x451 = UINT8_MAX;
	uint8_t x452 = 51U;
	static volatile int32_t t89 = 9124861;

	t89 = ((x449+x450)<(x451+x452));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x457 = INT8_MAX;
	static int64_t x458 = INT64_MIN;
	uint8_t x459 = 0U;
	int32_t x460 = 4;

	t90 = ((x457+x458)<(x459+x460));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x461 = UINT8_MAX;
	uint8_t x462 = 5U;
	volatile uint16_t x463 = UINT16_MAX;
	static uint16_t x464 = 32U;
	int32_t t91 = -1041581;

	t91 = ((x461+x462)<(x463+x464));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = -1;
	uint32_t x466 = 121633U;

	t92 = ((x465+x466)<(x467+x468));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x469 = INT32_MIN;
	volatile int32_t t93 = -17731965;

	t93 = ((x469+x470)<(x471+x472));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x473 = 1105230683066966LL;
	uint32_t x474 = 391682U;
	static volatile int16_t x476 = INT16_MIN;
	int32_t t94 = 99851;

	t94 = ((x473+x474)<(x475+x476));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x481 = -1;
	int8_t x484 = INT8_MAX;
	volatile int32_t t95 = -6326087;

	t95 = ((x481+x482)<(x483+x484));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x485 = 979630U;
	int64_t x486 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	int32_t t96 = 100491923;

	t96 = ((x485+x486)<(x487+x488));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x489 = -1;
	volatile int16_t x490 = 3;
	int16_t x492 = 46;

	t97 = ((x489+x490)<(x491+x492));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x493 = UINT32_MAX;
	uint32_t x494 = UINT32_MAX;
	uint32_t x496 = 285008U;
	volatile int32_t t98 = -11;

	t98 = ((x493+x494)<(x495+x496));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x497 = 16880028622588LLU;
	static uint16_t x498 = UINT16_MAX;
	int64_t x499 = INT64_MIN;
	int32_t t99 = -956;

	t99 = ((x497+x498)<(x499+x500));

	if (t99 != 1) { NG(); } else { ; }
	
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

