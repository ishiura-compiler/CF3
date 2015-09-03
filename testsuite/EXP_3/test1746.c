#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 2228147596240457LLU;
int64_t x17 = 64LL;
int8_t x19 = -38;
int16_t x25 = INT16_MIN;
int32_t x33 = INT32_MIN;
int8_t x37 = -1;
int32_t x39 = -2;
uint8_t x40 = 40U;
int32_t t8 = -59;
static int32_t x44 = 262161496;
static int32_t x46 = INT32_MIN;
uint16_t x50 = UINT16_MAX;
int64_t x57 = 14471002619LL;
uint8_t x61 = 81U;
int32_t x63 = -1;
volatile uint32_t x69 = 987885U;
static int16_t x74 = -1;
volatile uint64_t t16 = 46LLU;
int64_t x87 = INT64_MIN;
uint64_t x91 = 41519880LLU;
int32_t x100 = INT32_MIN;
volatile int64_t x106 = INT64_MIN;
static uint64_t t22 = 3016920723544972LLU;
volatile int16_t x117 = -405;
int16_t x122 = -1;
int64_t x123 = INT64_MIN;
volatile int64_t x131 = -561519479649LL;
volatile uint64_t t27 = 1282239289780967LLU;
static int32_t x139 = INT32_MIN;
int64_t x147 = INT64_MAX;
volatile int64_t t30 = -50689240550966LL;
int64_t t31 = 1125234927LL;
static volatile uint32_t t34 = 427929334U;
int64_t x173 = INT64_MIN;
int16_t x174 = 3511;
int8_t x176 = INT8_MAX;
volatile uint64_t t36 = 4382LLU;
volatile uint8_t x178 = UINT8_MAX;
int8_t x184 = INT8_MAX;
int16_t x186 = INT16_MIN;
uint16_t x196 = UINT16_MAX;
static uint32_t x198 = 14U;
int8_t x201 = -1;
volatile int64_t t44 = 104577937029339LL;
int32_t x217 = INT32_MIN;
static uint8_t x218 = 2U;
volatile int16_t x222 = INT16_MAX;
static uint16_t x224 = 152U;
volatile int16_t x229 = -14113;
static volatile uint32_t t47 = 203785U;
volatile int8_t x252 = INT8_MIN;
volatile int32_t x256 = -1;
uint8_t x271 = UINT8_MAX;
uint32_t x302 = 2550U;
static volatile uint32_t t56 = 18304U;
volatile int64_t x315 = 6629325LL;
int64_t x316 = -1LL;
int32_t x321 = -1;
static int16_t x334 = INT16_MIN;
uint32_t t62 = 5U;
uint32_t x337 = UINT32_MAX;
volatile int8_t x354 = -1;
static uint64_t x358 = 123258374284196410LLU;
int8_t x362 = -1;
volatile uint32_t x369 = 947U;
uint64_t x373 = UINT64_MAX;
int16_t x381 = INT16_MIN;
volatile int8_t x382 = INT8_MIN;
int16_t x387 = -4;
int64_t x388 = -5952325422225885LL;
volatile int8_t x399 = INT8_MIN;
int8_t x404 = -6;
volatile int64_t t75 = -103461LL;
int64_t x409 = INT64_MIN;
uint32_t x413 = 170874U;
static int32_t x420 = -1119;
static int16_t x424 = 2491;
int64_t x449 = 437540736747LL;
int16_t x451 = INT16_MAX;
int8_t x452 = INT8_MIN;
static uint64_t x457 = UINT64_MAX;
int64_t x458 = INT64_MIN;
int16_t x459 = INT16_MIN;
static volatile int64_t t86 = -4475028124249674820LL;
uint8_t x469 = 85U;
volatile int64_t t87 = 1113LL;
volatile int64_t x474 = -13430665357119333LL;
static int16_t x480 = INT16_MIN;
static uint8_t x486 = UINT8_MAX;
uint32_t x487 = UINT32_MAX;
int16_t x494 = -1;
static int32_t x502 = 8023873;
uint64_t x509 = UINT64_MAX;
volatile int64_t t97 = -69433586512LL;
volatile int8_t x522 = INT8_MIN;


void f0(void) {
	static int32_t x1 = -14477561;
	int8_t x3 = INT8_MAX;
	static int32_t x4 = 10;
	uint64_t t0 = 0LLU;

	t0 = ((x1%x2)/(x3&x4));

	if (t0 != 213827201657100LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	volatile int8_t x10 = 1;
	uint64_t x11 = 456811512260LLU;
	uint16_t x12 = 129U;
	uint64_t t1 = 29523184996LLU;

	t1 = ((x9%x10)/(x11&x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 1;
	uint32_t x14 = 6U;
	volatile uint8_t x15 = 5U;
	uint32_t x16 = 6U;
	volatile uint32_t t2 = 9412901U;

	t2 = ((x13%x14)/(x15&x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MAX;
	uint8_t x20 = 2U;
	volatile int64_t t3 = 67288925912798LL;

	t3 = ((x17%x18)/(x19&x20));

	if (t3 != 32LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 190123953;
	int16_t x22 = 3;
	static int16_t x23 = INT16_MAX;
	uint32_t x24 = 8518U;
	static volatile uint32_t t4 = 1460U;

	t4 = ((x21%x22)/(x23&x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	volatile int64_t x27 = 629LL;
	int32_t x28 = INT32_MAX;
	int64_t t5 = 5665474LL;

	t5 = ((x25%x26)/(x27&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	int64_t x31 = -16742LL;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t6 = 550159676LL;

	t6 = ((x29%x30)/(x31&x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x34 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -1953;

	t7 = ((x33%x34)/(x35&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x38 = UINT16_MAX;

	t8 = ((x37%x38)/(x39&x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	static int8_t x42 = -1;
	volatile int8_t x43 = INT8_MAX;
	volatile uint64_t t9 = 212135908425LLU;

	t9 = ((x41%x42)/(x43&x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = 211;
	static uint16_t x47 = 3419U;
	volatile int64_t x48 = INT64_MAX;
	int64_t t10 = -5524LL;

	t10 = ((x45%x46)/(x47&x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 2708U;
	int8_t x51 = INT8_MIN;
	static int8_t x52 = INT8_MIN;
	static volatile uint32_t t11 = 180680U;

	t11 = ((x49%x50)/(x51&x52));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -1;
	int32_t x54 = INT32_MAX;
	static uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 15572U;
	uint64_t t12 = 16676342316471126LLU;

	t12 = ((x53%x54)/(x55&x56));

	if (t12 != 1184609817217412LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = -978;
	int16_t x59 = INT16_MIN;
	int16_t x60 = -2010;
	volatile int64_t t13 = -328381105LL;

	t13 = ((x57%x58)/(x59&x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x62 = 11U;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = 0;

	t14 = ((x61%x62)/(x63&x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = INT64_MAX;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = UINT32_MAX;
	static volatile uint64_t t15 = 1253924771246LLU;

	t15 = ((x69%x70)/(x71&x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = -1;
	int32_t x75 = -12052;
	uint64_t x76 = UINT64_MAX;

	t16 = ((x73%x74)/(x75&x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x77 = 15U;
	volatile uint64_t x78 = 5058321676697LLU;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t17 = 1224404175LLU;

	t17 = ((x77%x78)/(x79&x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = 216U;
	int64_t x86 = -1LL;
	int64_t x88 = INT64_MIN;
	volatile int64_t t18 = 123335201LL;

	t18 = ((x85%x86)/(x87&x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -1LL;
	int16_t x90 = -5;
	static int32_t x92 = INT32_MAX;
	volatile uint64_t t19 = 104LLU;

	t19 = ((x89%x90)/(x91&x92));

	if (t19 != 444287027653LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -5740;
	int8_t x94 = INT8_MAX;
	uint16_t x95 = UINT16_MAX;
	uint64_t x96 = UINT64_MAX;
	uint64_t t20 = 575113807959909904LLU;

	t20 = ((x93%x94)/(x95&x96));

	if (t20 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x97 = 18U;
	volatile uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = -1;
	volatile uint64_t t21 = 2607192LLU;

	t21 = ((x97%x98)/(x99&x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x105 = 3;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = 100553LLU;

	t22 = ((x105%x106)/(x107&x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = INT8_MIN;
	static uint8_t x114 = 1U;
	static uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	uint64_t t23 = 83582LLU;

	t23 = ((x113%x114)/(x115&x116));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = 1843590U;
	int32_t x119 = INT32_MIN;
	static uint32_t x120 = UINT32_MAX;
	uint32_t t24 = 151653U;

	t24 = ((x117%x118)/(x119&x120));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = -1982917014635LL;
	int8_t x124 = -2;
	int64_t t25 = -2067274LL;

	t25 = ((x121%x122)/(x123&x124));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	volatile int32_t x126 = 536;
	static volatile int64_t x127 = -1LL;
	static volatile int32_t x128 = INT32_MAX;
	int64_t t26 = 104969396410062LL;

	t26 = ((x125%x126)/(x127&x128));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = -5489041;
	uint64_t x130 = UINT64_MAX;
	int8_t x132 = 1;

	t27 = ((x129%x130)/(x131&x132));

	if (t27 != 18446744073704062575LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x133 = 483861697855873LLU;
	int64_t x134 = -1LL;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MAX;
	static volatile uint64_t t28 = 11338395168693LLU;

	t28 = ((x133%x134)/(x135&x136));

	if (t28 != 3809934628786LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MAX;
	int32_t x140 = -1;
	int32_t t29 = -673675133;

	t29 = ((x137%x138)/(x139&x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = -1;
	int8_t x146 = -7;
	static volatile uint8_t x148 = UINT8_MAX;

	t30 = ((x145%x146)/(x147&x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MIN;
	static int64_t x151 = INT64_MAX;
	uint32_t x152 = UINT32_MAX;

	t31 = ((x149%x150)/(x151&x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -1;
	static uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;
	uint64_t t32 = 2LLU;

	t32 = ((x153%x154)/(x155&x156));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = 37U;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = -1;
	int16_t x164 = INT16_MAX;
	static volatile uint32_t t33 = 79U;

	t33 = ((x161%x162)/(x163&x164));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	static int16_t x166 = -9;
	int32_t x167 = -1;
	uint32_t x168 = UINT32_MAX;

	t34 = ((x165%x166)/(x167&x168));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x169 = -1LL;
	int64_t x170 = INT64_MIN;
	static int8_t x171 = -1;
	int8_t x172 = INT8_MIN;
	volatile int64_t t35 = 91LL;

	t35 = ((x169%x170)/(x171&x172));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x175 = UINT64_MAX;

	t36 = ((x173%x174)/(x175&x176));

	if (t36 != 145249953336295671LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = -1;
	uint16_t x179 = 3100U;
	uint32_t x180 = 54158887U;
	static volatile uint32_t t37 = 123471U;

	t37 = ((x177%x178)/(x179&x180));

	if (t37 != 4177983U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MIN;
	static uint32_t x182 = 3893U;
	int8_t x183 = 1;
	volatile uint32_t t38 = 8913U;

	t38 = ((x181%x182)/(x183&x184));

	if (t38 != 1743U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = 19;
	int64_t x187 = INT64_MAX;
	static int64_t x188 = 2767826691049LL;
	int64_t t39 = 230880934LL;

	t39 = ((x185%x186)/(x187&x188));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MAX;
	int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	static int32_t t40 = -107648701;

	t40 = ((x193%x194)/(x195&x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x197 = 2376U;
	volatile int16_t x199 = 129;
	int32_t x200 = INT32_MAX;
	uint32_t t41 = 6U;

	t41 = ((x197%x198)/(x199&x200));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x202 = -111;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t42 = 166351;

	t42 = ((x201%x202)/(x203&x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -1LL;
	static int64_t x206 = INT64_MIN;
	int8_t x207 = -1;
	static volatile uint32_t x208 = 99553424U;
	volatile int64_t t43 = 483601569505LL;

	t43 = ((x205%x206)/(x207&x208));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = -25764LL;
	int16_t x215 = INT16_MIN;
	static int32_t x216 = INT32_MAX;

	t44 = ((x213%x214)/(x215&x216));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x219 = 5974989U;
	static volatile int32_t x220 = -744;
	static volatile uint32_t t45 = 11113088U;

	t45 = ((x217%x218)/(x219&x220));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 7407239613405LLU;
	uint32_t x223 = 29U;
	volatile uint64_t t46 = 181640039360098420LLU;

	t46 = ((x221%x222)/(x223&x224));

	if (t46 != 454LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x230 = UINT8_MAX;
	volatile uint32_t x231 = 132366837U;
	static uint32_t x232 = 17420U;

	t47 = ((x229%x230)/(x231&x232));

	if (t47 != 262080U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x233 = 11LLU;
	int16_t x234 = -1;
	int16_t x235 = -731;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t48 = 6428778114928420LLU;

	t48 = ((x233%x234)/(x235&x236));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x249 = -1;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	volatile int64_t t49 = -20384201LL;

	t49 = ((x249%x250)/(x251&x252));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x253 = -359256033978280LL;
	volatile int16_t x254 = 6711;
	volatile uint8_t x255 = 46U;
	int64_t t50 = -495773094357904023LL;

	t50 = ((x253%x254)/(x255&x256));

	if (t50 != -7LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = 1485475LLU;
	uint64_t x270 = 35941892LLU;
	int8_t x272 = -1;
	static uint64_t t51 = 533LLU;

	t51 = ((x269%x270)/(x271&x272));

	if (t51 != 5825LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x273 = UINT8_MAX;
	uint32_t x274 = 1273U;
	int8_t x275 = 1;
	int64_t x276 = -1LL;
	int64_t t52 = 110LL;

	t52 = ((x273%x274)/(x275&x276));

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x277 = -1;
	volatile uint32_t x278 = 295617598U;
	int32_t x279 = INT32_MIN;
	int8_t x280 = -26;
	volatile uint32_t t53 = 11868985U;

	t53 = ((x277%x278)/(x279&x280));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = -3403;
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 24581209U;
	volatile int64_t x288 = -120LL;
	static int64_t t54 = 1214LL;

	t54 = ((x285%x286)/(x287&x288));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x289 = 16LLU;
	static int8_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	uint64_t t55 = 182258408815LLU;

	t55 = ((x289%x290)/(x291&x292));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x303 = 10U;
	uint32_t x304 = UINT32_MAX;

	t56 = ((x301%x302)/(x303&x304));

	if (t56 != 216U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = 0;
	static int16_t x306 = INT16_MIN;
	static int16_t x307 = INT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t57 = 468105587;

	t57 = ((x305%x306)/(x307&x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x313 = -7701LL;
	volatile int16_t x314 = INT16_MIN;
	volatile int64_t t58 = -3LL;

	t58 = ((x313%x314)/(x315&x316));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = 1;
	volatile int32_t t59 = 2;

	t59 = ((x317%x318)/(x319&x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x322 = 2U;
	static volatile uint8_t x323 = UINT8_MAX;
	static volatile uint16_t x324 = 3941U;
	uint32_t t60 = 212403U;

	t60 = ((x321%x322)/(x323&x324));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = -28593642109LL;
	int16_t x331 = -624;
	uint8_t x332 = 87U;
	volatile int64_t t61 = 115185118968140118LL;

	t61 = ((x329%x330)/(x331&x332));

	if (t61 != -1272647588LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x333 = INT32_MIN;
	volatile int16_t x335 = -1;
	uint32_t x336 = 11679628U;

	t62 = ((x333%x334)/(x335&x336));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x338 = 21296550;
	static int64_t x339 = -1LL;
	uint64_t x340 = UINT64_MAX;
	static uint64_t t63 = 10857LLU;

	t63 = ((x337%x338)/(x339&x340));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = INT64_MIN;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MIN;
	static volatile int64_t t64 = 27622065632938018LL;

	t64 = ((x341%x342)/(x343&x344));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x349 = 0LL;
	uint64_t x350 = 182699085LLU;
	volatile int8_t x351 = -1;
	static volatile uint8_t x352 = 4U;
	uint64_t t65 = 74521073903128LLU;

	t65 = ((x349%x350)/(x351&x352));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x353 = INT16_MIN;
	static int8_t x355 = INT8_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t66 = 32553689LLU;

	t66 = ((x353%x354)/(x355&x356));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x357 = -1;
	static int64_t x359 = 10064819803852LL;
	static uint16_t x360 = 903U;
	volatile uint64_t t67 = 62309793715943764LLU;

	t67 = ((x357%x358)/(x359&x360));

	if (t67 != 126158859261314LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x361 = 31152U;
	uint8_t x363 = 1U;
	uint64_t x364 = 662116310273LLU;
	volatile uint64_t t68 = 105LLU;

	t68 = ((x361%x362)/(x363&x364));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x370 = UINT16_MAX;
	uint64_t x371 = 3972540482LLU;
	int16_t x372 = -1;
	uint64_t t69 = 128875270739926260LLU;

	t69 = ((x369%x370)/(x371&x372));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MAX;
	int8_t x376 = -54;
	uint64_t t70 = 67000419246304LLU;

	t70 = ((x373%x374)/(x375&x376));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x383 = 11U;
	volatile uint64_t x384 = UINT64_MAX;
	uint64_t t71 = 19LLU;

	t71 = ((x381%x382)/(x383&x384));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x385 = -1;
	int64_t x386 = -1LL;
	int64_t t72 = 75LL;

	t72 = ((x385%x386)/(x387&x388));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x393 = INT64_MIN;
	static uint8_t x394 = 23U;
	uint8_t x395 = 10U;
	int64_t x396 = -1LL;
	int64_t t73 = 17245LL;

	t73 = ((x393%x394)/(x395&x396));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x397 = 193346U;
	uint32_t x398 = 4784U;
	int16_t x400 = INT16_MIN;
	volatile uint32_t t74 = 930622U;

	t74 = ((x397%x398)/(x399&x400));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x401 = 195U;
	uint32_t x402 = 3688U;
	int64_t x403 = INT64_MIN;

	t75 = ((x401%x402)/(x403&x404));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x410 = -2;
	int32_t x411 = -1;
	int16_t x412 = INT16_MAX;
	volatile int64_t t76 = -72LL;

	t76 = ((x409%x410)/(x411&x412));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x414 = INT64_MIN;
	uint64_t x415 = 1041191020979LLU;
	uint16_t x416 = UINT16_MAX;
	uint64_t t77 = 62296405LLU;

	t77 = ((x413%x414)/(x415&x416));

	if (t77 != 16LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x417 = INT8_MIN;
	uint64_t x418 = 3570332019888848975LLU;
	uint16_t x419 = UINT16_MAX;
	uint64_t t78 = 2519272045961LLU;

	t78 = ((x417%x418)/(x419&x420));

	if (t78 != 9237995781630LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x421 = INT8_MIN;
	static int32_t x422 = INT32_MIN;
	uint16_t x423 = 119U;
	volatile int32_t t79 = 39;

	t79 = ((x421%x422)/(x423&x424));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = INT8_MAX;
	int32_t x426 = 10;
	int16_t x427 = -1;
	static int32_t x428 = -963693109;
	int32_t t80 = 149729;

	t80 = ((x425%x426)/(x427&x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = 7;
	static int8_t x434 = -1;
	static int64_t x435 = -584LL;
	int64_t x436 = 3788LL;
	int64_t t81 = -6229373LL;

	t81 = ((x433%x434)/(x435&x436));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MAX;
	int8_t x442 = -1;
	int8_t x443 = INT8_MIN;
	static volatile int64_t x444 = INT64_MAX;
	int64_t t82 = 1882182401572500266LL;

	t82 = ((x441%x442)/(x443&x444));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x450 = -3325524LL;
	int64_t t83 = 1446969LL;

	t83 = ((x449%x450)/(x451&x452));

	if (t83 != 47LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x453 = INT16_MIN;
	int16_t x454 = -368;
	int32_t x455 = INT32_MAX;
	uint32_t x456 = 9705U;
	volatile uint32_t t84 = 1U;

	t84 = ((x453%x454)/(x455&x456));

	if (t84 != 442552U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x460 = -1140110276293456271LL;
	static uint64_t t85 = 143324989056LLU;

	t85 = ((x457%x458)/(x459&x460));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x465 = 23;
	uint8_t x466 = 79U;
	int64_t x467 = -341069LL;
	volatile int8_t x468 = -1;

	t86 = ((x465%x466)/(x467&x468));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x470 = INT64_MIN;
	uint8_t x471 = 55U;
	static int8_t x472 = 1;

	t87 = ((x469%x470)/(x471&x472));

	if (t87 != 85LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x473 = UINT8_MAX;
	int8_t x475 = INT8_MAX;
	volatile uint64_t x476 = 238330010354LLU;
	static uint64_t t88 = 1033LLU;

	t88 = ((x473%x474)/(x475&x476));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x477 = UINT32_MAX;
	int8_t x478 = INT8_MIN;
	volatile int32_t x479 = -1;
	volatile uint32_t t89 = 99719014U;

	t89 = ((x477%x478)/(x479&x480));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x481 = -1;
	static int64_t x482 = INT64_MAX;
	uint32_t x483 = UINT32_MAX;
	int8_t x484 = -39;
	int64_t t90 = -19006374193921706LL;

	t90 = ((x481%x482)/(x483&x484));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x485 = INT32_MAX;
	static volatile uint8_t x488 = 1U;
	uint32_t t91 = 15983U;

	t91 = ((x485%x486)/(x487&x488));

	if (t91 != 127U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x489 = INT8_MAX;
	int32_t x490 = -30325350;
	int32_t x491 = INT32_MIN;
	int16_t x492 = -1;
	int32_t t92 = 264283;

	t92 = ((x489%x490)/(x491&x492));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x493 = 6874LL;
	volatile int16_t x495 = 1;
	volatile int64_t x496 = INT64_MAX;
	int64_t t93 = -948470095832LL;

	t93 = ((x493%x494)/(x495&x496));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x501 = 280U;
	int16_t x503 = INT16_MAX;
	uint16_t x504 = 1U;
	volatile uint32_t t94 = 12854873U;

	t94 = ((x501%x502)/(x503&x504));

	if (t94 != 280U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x505 = INT8_MAX;
	uint16_t x506 = UINT16_MAX;
	volatile uint32_t x507 = 301639U;
	uint8_t x508 = 112U;
	static volatile uint32_t t95 = 3240U;

	t95 = ((x505%x506)/(x507&x508));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x510 = -5;
	int16_t x511 = INT16_MAX;
	uint32_t x512 = UINT32_MAX;
	static volatile uint64_t t96 = 8976LLU;

	t96 = ((x509%x510)/(x511&x512));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x513 = 98810U;
	int32_t x514 = -1;
	int64_t x515 = -1LL;
	int64_t x516 = INT64_MIN;

	t97 = ((x513%x514)/(x515&x516));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = 29U;
	int16_t x520 = INT16_MAX;
	uint32_t t98 = 16180337U;

	t98 = ((x517%x518)/(x519&x520));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = -3;
	int8_t x523 = -5;
	volatile int16_t x524 = INT16_MAX;
	volatile int32_t t99 = -109076;

	t99 = ((x521%x522)/(x523&x524));

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

