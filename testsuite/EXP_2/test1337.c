#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 20U;
int64_t x6 = INT64_MAX;
int64_t x10 = INT64_MIN;
uint16_t x21 = 2628U;
volatile int64_t t9 = INT64_MAX;
volatile uint64_t x45 = UINT64_MAX;
int32_t x46 = INT32_MAX;
int32_t t12 = -41860;
static uint16_t x57 = UINT16_MAX;
volatile int32_t t14 = 318382;
volatile int32_t x63 = -1;
int32_t t15 = 1;
static int8_t x67 = 3;
int64_t x69 = 631332490694283LL;
int16_t x83 = INT16_MAX;
int8_t x84 = INT8_MIN;
int32_t t20 = -86495;
int32_t x88 = 10560290;
int32_t x95 = INT32_MIN;
int32_t x98 = -1;
int64_t x99 = INT64_MIN;
uint64_t x100 = 1224972390370LLU;
volatile uint64_t t24 = 4494223880683227LLU;
volatile int64_t x105 = -1LL;
uint32_t x108 = UINT32_MAX;
volatile int64_t t26 = 239631095828613941LL;
int32_t x109 = -2284;
static int16_t x113 = INT16_MIN;
volatile int16_t x114 = -1;
int32_t t28 = -452;
uint64_t x118 = 343746481252697LLU;
int32_t t30 = -68514498;
int8_t x126 = INT8_MIN;
volatile int32_t t33 = 8198;
static uint64_t x145 = 15536639517385420LLU;
int32_t x146 = INT32_MAX;
int64_t x150 = INT64_MAX;
uint8_t x157 = 12U;
uint64_t x160 = 3589823942523684896LLU;
volatile uint64_t t39 = 3LLU;
volatile uint64_t x162 = UINT64_MAX;
volatile uint32_t t40 = 35U;
int32_t x166 = -899786;
int32_t x181 = 37338;
uint16_t x187 = 299U;
volatile int64_t t46 = -25722156658LL;
static uint8_t x189 = 4U;
int16_t x192 = INT16_MAX;
int8_t x197 = -7;
int64_t x203 = INT64_MAX;
int16_t x205 = INT16_MIN;
uint64_t t51 = 44036746421883771LLU;
static int16_t x218 = 0;
uint8_t x224 = 8U;
int64_t x231 = INT64_MIN;
uint16_t x236 = 1U;
volatile int16_t x239 = 3218;
uint32_t t59 = 972U;
int32_t x243 = -170;
volatile int64_t t60 = -1652719082914214363LL;
volatile int8_t x245 = INT8_MIN;
int8_t x246 = 0;
volatile int32_t t62 = -1;
int8_t x256 = -1;
uint16_t x263 = 3084U;
uint64_t x268 = 2966LLU;
int8_t x273 = -1;
volatile uint8_t x274 = UINT8_MAX;
volatile uint16_t x275 = 0U;
volatile int32_t t72 = -368158929;
uint32_t x300 = UINT32_MAX;
int32_t t76 = -54971;
volatile int32_t t77 = 493816;
int8_t x314 = -1;
int64_t x322 = -2145057155856643LL;
static volatile int64_t t80 = INT64_MIN;
int32_t x326 = INT32_MIN;
int8_t x329 = -1;
int64_t x332 = -96774114LL;
uint64_t x334 = 2709068165LLU;
uint8_t x338 = 5U;
int16_t x340 = INT16_MAX;
volatile int32_t t84 = 27;
static int64_t x343 = INT64_MIN;
static volatile int64_t x355 = -1LL;
volatile int64_t t88 = -53342163411LL;
int16_t x358 = INT16_MIN;
static uint16_t x359 = 8325U;
volatile uint32_t x361 = UINT32_MAX;
volatile int16_t x364 = -1;
uint32_t x370 = 8U;
static int64_t x376 = -1LL;
int32_t x378 = INT32_MIN;
int64_t x383 = INT64_MIN;
static int8_t x385 = INT8_MIN;
uint64_t x389 = 9872558852610LLU;
int8_t x395 = -11;
uint64_t t98 = 869LLU;


void f0(void) {
	int64_t x1 = 5621242034LL;
	static uint16_t x2 = 7U;
	volatile int8_t x3 = 52;
	int64_t t0 = 382017540LL;

	t0 = ((x1|(x2==x3))&x4);

	if (t0 != 16LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 8657733588LL;
	int16_t x7 = INT16_MAX;
	int64_t x8 = INT64_MAX;
	volatile int64_t t1 = -632LL;

	t1 = ((x5|(x6==x7))&x8);

	if (t1 != 8657733588LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	uint8_t x11 = 1U;
	volatile int16_t x12 = -12;
	volatile int32_t t2 = 1;

	t2 = ((x9|(x10==x11))&x12);

	if (t2 != 116) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	static int64_t x14 = INT64_MAX;
	static uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -5499366LL;

	t3 = ((x13|(x14==x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 6458;
	uint16_t x18 = 151U;
	int8_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = -1381498;

	t4 = ((x17|(x18==x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	static int32_t x23 = INT32_MAX;
	volatile int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = 16274LL;

	t5 = ((x21|(x22==x23))&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	int64_t x26 = -73685LL;
	static int16_t x27 = INT16_MAX;
	static uint64_t x28 = 1158665925559055414LLU;
	uint64_t t6 = 7350627LLU;

	t6 = ((x25|(x26==x27))&x28);

	if (t6 != 1158665925559055414LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = UINT8_MAX;
	uint64_t x32 = 835LLU;
	uint64_t t7 = 276255834107605LLU;

	t7 = ((x29|(x30==x31))&x32);

	if (t7 != 67LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int64_t x34 = INT64_MIN;
	int8_t x35 = 49;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 48227351;

	t8 = ((x33|(x34==x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MAX;
	uint32_t x38 = UINT32_MAX;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = -1LL;

	t9 = ((x37|(x38==x39))&x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x42 = 3244U;
	static int16_t x43 = -12;
	uint32_t x44 = 2954683U;
	volatile uint32_t t10 = 54157U;

	t10 = ((x41|(x42==x43))&x44);

	if (t10 != 2949120U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x47 = UINT8_MAX;
	volatile int16_t x48 = INT16_MAX;
	uint64_t t11 = 28LLU;

	t11 = ((x45|(x46==x47))&x48);

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -414;
	static uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;

	t12 = ((x49|(x50==x51))&x52);

	if (t12 != -512) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	static int8_t x55 = -1;
	volatile uint32_t x56 = 488U;
	uint32_t t13 = 431945816U;

	t13 = ((x53|(x54==x55))&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -8873LL;
	int16_t x59 = -3;
	uint16_t x60 = 26U;

	t14 = ((x57|(x58==x59))&x60);

	if (t14 != 26) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = 7;
	int64_t x62 = INT64_MIN;
	int16_t x64 = -1;

	t15 = ((x61|(x62==x63))&x64);

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 4305735867LLU;
	volatile int64_t x66 = INT64_MAX;
	volatile int32_t x68 = -1;
	static uint64_t t16 = 33169LLU;

	t16 = ((x65|(x66==x67))&x68);

	if (t16 != 4305735867LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 0U;
	uint8_t x72 = UINT8_MAX;
	int64_t t17 = 1537917847LL;

	t17 = ((x69|(x70==x71))&x72);

	if (t17 != 139LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 36U;
	static int32_t t18 = 17199;

	t18 = ((x73|(x74==x75))&x76);

	if (t18 != 36) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -6;
	static int64_t x78 = -1133912285LL;
	volatile uint16_t x79 = 30751U;
	int64_t x80 = 600LL;
	int64_t t19 = 46026340LL;

	t19 = ((x77|(x78==x79))&x80);

	if (t19 != 600LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = INT32_MIN;

	t20 = ((x81|(x82==x83))&x84);

	if (t20 != 32640) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 230099211LLU;
	static int16_t x86 = INT16_MAX;
	volatile int64_t x87 = -21780229650LL;
	static uint64_t t21 = 1756972LLU;

	t21 = ((x85|(x86==x87))&x88);

	if (t21 != 10551554LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MIN;
	int64_t t22 = INT64_MIN;

	t22 = ((x89|(x90==x91))&x92);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 1;
	uint64_t x94 = 2579593794114219997LLU;
	int32_t x96 = -1;
	int32_t t23 = -107007;

	t23 = ((x93|(x94==x95))&x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;

	t24 = ((x97|(x98==x99))&x100);

	if (t24 != 906711010LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	volatile int64_t x102 = INT64_MIN;
	int64_t x103 = 4460606221LL;
	static int16_t x104 = INT16_MIN;
	volatile int64_t t25 = -2310795680905540333LL;

	t25 = ((x101|(x102==x103))&x104);

	if (t25 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;

	t26 = ((x105|(x106==x107))&x108);

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = UINT8_MAX;
	volatile int16_t x111 = 42;
	static int64_t x112 = -37292015950268LL;
	volatile int64_t t27 = -14LL;

	t27 = ((x109|(x110==x111))&x112);

	if (t27 != -37292015950332LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x115 = 1309035484LL;
	int16_t x116 = INT16_MIN;

	t28 = ((x113|(x114==x115))&x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int32_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = ((x117|(x118==x119))&x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 463U;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = -1;

	t30 = ((x121|(x122==x123))&x124);

	if (t30 != 463) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 26194LL;
	static int64_t x127 = INT64_MAX;
	uint64_t x128 = 2112604702060LLU;
	volatile uint64_t t31 = 2294013639710562507LLU;

	t31 = ((x125|(x126==x127))&x128);

	if (t31 != 1088LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 48001426000273LLU;
	int32_t x130 = 0;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -1;
	uint64_t t32 = 46567610939944750LLU;

	t32 = ((x129|(x130==x131))&x132);

	if (t32 != 48001426000273LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int16_t x134 = 1;
	uint32_t x135 = 1635226U;
	volatile int8_t x136 = 12;

	t33 = ((x133|(x134==x135))&x136);

	if (t33 != 12) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	volatile int8_t x138 = -1;
	volatile int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -4;

	t34 = ((x137|(x138==x139))&x140);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;
	static volatile int32_t x142 = -1;
	int32_t x143 = INT32_MIN;
	volatile uint32_t x144 = 301443U;
	volatile uint32_t t35 = 60258U;

	t35 = ((x141|(x142==x143))&x144);

	if (t35 != 301443U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x147 = 503U;
	volatile int32_t x148 = INT32_MIN;
	uint64_t t36 = 858436LLU;

	t36 = ((x145|(x146==x147))&x148);

	if (t36 != 15536638318870528LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 43894;
	uint8_t x151 = 59U;
	volatile int8_t x152 = 0;
	int32_t t37 = 1;

	t37 = ((x149|(x150==x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 79;
	static int8_t x154 = INT8_MIN;
	static int64_t x155 = INT64_MIN;
	int8_t x156 = 13;
	volatile int32_t t38 = 766298393;

	t38 = ((x153|(x154==x155))&x156);

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	int16_t x159 = INT16_MIN;

	t39 = ((x157|(x158==x159))&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = 13;
	int16_t x163 = -1;
	static uint32_t x164 = UINT32_MAX;

	t40 = ((x161|(x162==x163))&x164);

	if (t40 != 13U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -2;
	int64_t x167 = -53LL;
	static volatile int8_t x168 = INT8_MAX;
	int32_t t41 = -139335;

	t41 = ((x165|(x166==x167))&x168);

	if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static volatile uint32_t x170 = 408296U;
	int16_t x171 = -2299;
	volatile int16_t x172 = -1;
	static int32_t t42 = INT32_MIN;

	t42 = ((x169|(x170==x171))&x172);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 26U;
	static int8_t x174 = 1;
	static int8_t x175 = 48;
	volatile int32_t x176 = 819856;
	static int32_t t43 = 1221365;

	t43 = ((x173|(x174==x175))&x176);

	if (t43 != 16) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	uint64_t t44 = 127160120055608LLU;

	t44 = ((x177|(x178==x179))&x180);

	if (t44 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = 112020657;
	volatile uint64_t x183 = 8204701379076LLU;
	volatile int16_t x184 = INT16_MIN;
	int32_t t45 = 1258816;

	t45 = ((x181|(x182==x183))&x184);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	int64_t x188 = INT64_MAX;

	t46 = ((x185|(x186==x187))&x188);

	if (t46 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int32_t t47 = -109421;

	t47 = ((x189|(x190==x191))&x192);

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 81;
	static volatile int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = INT64_MAX;
	int64_t t48 = -480717911023LL;

	t48 = ((x193|(x194==x195))&x196);

	if (t48 != 81LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x198 = INT8_MIN;
	static int32_t x199 = INT32_MAX;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = ((x197|(x198==x199))&x200);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x201 = 14082863U;
	volatile uint8_t x202 = 4U;
	volatile int32_t x204 = INT32_MIN;
	uint32_t t50 = 15256U;

	t50 = ((x201|(x202==x203))&x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = 0;
	static uint8_t x207 = UINT8_MAX;
	uint64_t x208 = UINT64_MAX;

	t51 = ((x205|(x206==x207))&x208);

	if (t51 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = 2LL;
	uint64_t x210 = 6924704093LLU;
	volatile int32_t x211 = 776434722;
	uint8_t x212 = 52U;
	int64_t t52 = -376LL;

	t52 = ((x209|(x210==x211))&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = 1127181LL;
	int64_t x214 = INT64_MAX;
	int64_t x215 = -1LL;
	int64_t x216 = -128620593003234LL;
	volatile int64_t t53 = -5938197260LL;

	t53 = ((x213|(x214==x215))&x216);

	if (t53 != 1048844LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int8_t x219 = -1;
	uint16_t x220 = 510U;
	volatile int32_t t54 = 1;

	t54 = ((x217|(x218==x219))&x220);

	if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static volatile int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	int64_t t55 = -10516252LL;

	t55 = ((x221|(x222==x223))&x224);

	if (t55 != 8LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -15;
	int32_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -9938896011330LL;
	volatile int64_t t56 = -1469626597256927LL;

	t56 = ((x225|(x226==x227))&x228);

	if (t56 != -9938896011344LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 10U;
	uint64_t x230 = 0LLU;
	int32_t x232 = -59;
	volatile int32_t t57 = 0;

	t57 = ((x229|(x230==x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 1;
	int8_t x234 = 0;
	static int32_t x235 = INT32_MIN;
	int32_t t58 = -248;

	t58 = ((x233|(x234==x235))&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = 28;
	static uint32_t x240 = 926U;

	t59 = ((x237|(x238==x239))&x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int16_t x242 = INT16_MIN;
	int8_t x244 = INT8_MAX;

	t60 = ((x241|(x242==x243))&x244);

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x247 = -111822352497060236LL;
	int32_t x248 = -1;
	volatile int32_t t61 = 313870;

	t61 = ((x245|(x246==x247))&x248);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -28;
	static volatile uint16_t x250 = 37U;
	int16_t x251 = INT16_MIN;
	uint8_t x252 = 57U;

	t62 = ((x249|(x250==x251))&x252);

	if (t62 != 32) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	static volatile int64_t x254 = 198594444985025LL;
	volatile int8_t x255 = -44;
	int32_t t63 = -445488;

	t63 = ((x253|(x254==x255))&x256);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x257 = 2469U;
	uint32_t x258 = 153147U;
	int8_t x259 = INT8_MIN;
	static uint32_t x260 = 5U;
	uint32_t t64 = 412946896U;

	t64 = ((x257|(x258==x259))&x260);

	if (t64 != 5U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -1;
	int8_t x262 = -1;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = ((x261|(x262==x263))&x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = -57;
	static uint32_t x267 = UINT32_MAX;
	volatile uint64_t t66 = 128486008163LLU;

	t66 = ((x265|(x266==x267))&x268);

	if (t66 != 2966LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int64_t x270 = -1LL;
	int8_t x271 = 0;
	int32_t x272 = -1;
	static int32_t t67 = INT32_MIN;

	t67 = ((x269|(x270==x271))&x272);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = -44029;

	t68 = ((x273|(x274==x275))&x276);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	int64_t x278 = INT64_MAX;
	volatile uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 7321U;
	static volatile int64_t t69 = -28812555281596937LL;

	t69 = ((x277|(x278==x279))&x280);

	if (t69 != 7321LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 116U;
	int64_t x282 = INT64_MAX;
	int16_t x283 = INT16_MIN;
	int8_t x284 = -1;
	volatile int32_t t70 = -4651;

	t70 = ((x281|(x282==x283))&x284);

	if (t70 != 116) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = -4252;
	static int32_t x288 = 395;
	static volatile int64_t t71 = 37639675301379934LL;

	t71 = ((x285|(x286==x287))&x288);

	if (t71 != 395LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = -1;
	int32_t x291 = -7;
	static uint8_t x292 = 48U;

	t72 = ((x289|(x290==x291))&x292);

	if (t72 != 48) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 97U;
	volatile int8_t x296 = 1;
	static int32_t t73 = -547571206;

	t73 = ((x293|(x294==x295))&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 198245774541995LLU;
	int16_t x298 = INT16_MIN;
	volatile int16_t x299 = -1292;
	uint64_t t74 = 1661061632042LLU;

	t74 = ((x297|(x298==x299))&x300);

	if (t74 != 2969060523LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 20573U;
	volatile uint16_t x302 = 346U;
	volatile uint32_t x303 = 2U;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t75 = 54LL;

	t75 = ((x301|(x302==x303))&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 42U;
	uint16_t x306 = UINT16_MAX;
	volatile uint32_t x307 = UINT32_MAX;
	volatile int8_t x308 = -2;

	t76 = ((x305|(x306==x307))&x308);

	if (t76 != 42) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	static int64_t x310 = 1314672427050670LL;
	int64_t x311 = INT64_MAX;
	volatile int32_t x312 = INT32_MAX;

	t77 = ((x309|(x310==x311))&x312);

	if (t77 != 2147450880) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = -105;
	volatile uint16_t x315 = 5U;
	int32_t x316 = -2661044;
	int32_t t78 = 8965814;

	t78 = ((x313|(x314==x315))&x316);

	if (t78 != -2661116) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = 3017119LL;
	int8_t x318 = 51;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = -1;
	volatile int64_t t79 = 146LL;

	t79 = ((x317|(x318==x319))&x320);

	if (t79 != 3017119LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	static int8_t x323 = -4;
	int64_t x324 = INT64_MIN;

	t80 = ((x321|(x322==x323))&x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	static uint8_t x327 = 4U;
	volatile int8_t x328 = -1;
	int32_t t81 = 58;

	t81 = ((x325|(x326==x327))&x328);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = 2234;
	static volatile uint32_t x331 = UINT32_MAX;
	int64_t t82 = 253297LL;

	t82 = ((x329|(x330==x331))&x332);

	if (t82 != -96774114LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 6U;
	volatile int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = 1LL;

	t83 = ((x333|(x334==x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -40;
	uint64_t x339 = UINT64_MAX;

	t84 = ((x337|(x338==x339))&x340);

	if (t84 != 32728) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	volatile int8_t x342 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t85 = -175178293777734LL;

	t85 = ((x341|(x342==x343))&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static int64_t x346 = INT64_MAX;
	int64_t x347 = INT64_MIN;
	volatile int8_t x348 = 42;
	volatile int32_t t86 = -37;

	t86 = ((x345|(x346==x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int64_t x350 = 53538LL;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	static int32_t t87 = -20999;

	t87 = ((x349|(x350==x351))&x352);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 1409862097LL;
	int16_t x354 = INT16_MAX;
	int8_t x356 = -11;

	t88 = ((x353|(x354==x355))&x356);

	if (t88 != 1409862097LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MAX;
	int64_t x360 = -1LL;
	volatile int64_t t89 = -1969782021690271607LL;

	t89 = ((x357|(x358==x359))&x360);

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 105U;
	uint32_t t90 = UINT32_MAX;

	t90 = ((x361|(x362==x363))&x364);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MIN;
	static int32_t x367 = -1;
	volatile int32_t x368 = -6440;
	static int32_t t91 = -147639135;

	t91 = ((x365|(x366==x367))&x368);

	if (t91 != 88) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -141807232961295241LL;
	uint8_t x371 = UINT8_MAX;
	uint64_t x372 = 25388841747LLU;
	volatile uint64_t t92 = 936600831LLU;

	t92 = ((x369|(x370==x371))&x372);

	if (t92 != 2822948883LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	volatile uint8_t x375 = 58U;
	int64_t t93 = 3874919965592221LL;

	t93 = ((x373|(x374==x375))&x376);

	if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int16_t x379 = INT16_MAX;
	int32_t x380 = -209477;
	int64_t t94 = -467243744110LL;

	t94 = ((x377|(x378==x379))&x380);

	if (t94 != 9223372036854566331LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -992189618LL;
	uint32_t x382 = 10U;
	int32_t x384 = INT32_MIN;
	int64_t t95 = -552LL;

	t95 = ((x381|(x382==x383))&x384);

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = 2347302312871767798LL;
	uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = INT64_MIN;

	t96 = ((x385|(x386==x387))&x388);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 13;
	uint16_t x391 = 1642U;
	int8_t x392 = 30;
	uint64_t t97 = 4402821LLU;

	t97 = ((x389|(x390==x391))&x392);

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = 399925069368013378LL;
	volatile int32_t x394 = INT32_MAX;
	volatile uint64_t x396 = 966944049997108LLU;

	t98 = ((x393|(x394==x395))&x396);

	if (t98 != 71648914186240LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	uint32_t x398 = 197243U;
	int16_t x399 = -1;
	volatile uint16_t x400 = 6U;
	static volatile int32_t t99 = -336;

	t99 = ((x397|(x398==x399))&x400);

	if (t99 != 6) { NG(); } else { ; }
	
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

