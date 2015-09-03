#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 4832981LLU;
int16_t x6 = -1;
int16_t x19 = INT16_MIN;
int32_t x32 = 3687;
volatile int16_t x49 = -2028;
static int32_t x50 = -1;
int8_t x65 = -1;
static uint16_t x70 = 1U;
int16_t x75 = -1;
uint16_t x82 = 5290U;
uint8_t x83 = UINT8_MAX;
int16_t x84 = INT16_MIN;
static volatile int32_t t18 = 90;
int64_t x100 = INT64_MIN;
uint64_t x102 = 442LLU;
int8_t x104 = INT8_MIN;
uint64_t t22 = 351769054180LLU;
static int32_t x112 = INT32_MIN;
volatile uint64_t t24 = 3564054LLU;
int16_t x118 = -6;
static int8_t x122 = -1;
int32_t x123 = -1;
int64_t x124 = -13187662922239LL;
int8_t x126 = 1;
volatile uint32_t t30 = 1U;
int8_t x141 = INT8_MIN;
int32_t t31 = -7470981;
uint8_t x150 = 2U;
volatile int64_t x156 = -243719LL;
int32_t x160 = INT32_MIN;
static volatile int32_t t34 = -13;
volatile int8_t x162 = INT8_MAX;
uint8_t x164 = 44U;
volatile uint32_t t35 = 15U;
int64_t x169 = INT64_MIN;
uint32_t x175 = 10103202U;
int64_t x188 = -1LL;
volatile int32_t x208 = -1;
static volatile int32_t t44 = 3599;
int8_t x218 = INT8_MIN;
static int8_t x221 = INT8_MAX;
volatile uint8_t x222 = 0U;
int8_t x228 = 4;
int8_t x244 = 0;
uint16_t x250 = 19126U;
volatile uint64_t x256 = 991363LLU;
uint32_t x258 = 2U;
int16_t x259 = INT16_MAX;
int64_t x263 = -1LL;
volatile int64_t x264 = INT64_MIN;
volatile int32_t x281 = INT32_MIN;
uint8_t x288 = 0U;
uint32_t x289 = 0U;
static int32_t x300 = -1;
volatile int8_t x310 = INT8_MIN;
uint16_t x313 = 13U;
volatile int8_t x314 = 1;
static uint64_t x315 = 1LLU;
volatile int32_t t66 = 120;
uint16_t x317 = 842U;
volatile uint64_t x320 = 3308996485384414LLU;
int32_t x322 = INT32_MAX;
static uint32_t x325 = UINT32_MAX;
int64_t x328 = INT64_MIN;
int8_t x332 = -1;
int32_t t70 = 7;
uint64_t x338 = 8312668LLU;
volatile int64_t x344 = INT64_MAX;
volatile int32_t t72 = -303;
uint16_t x365 = 2669U;
uint8_t x368 = UINT8_MAX;
static volatile uint16_t x373 = UINT16_MAX;
int16_t x378 = 617;
volatile uint16_t x381 = UINT16_MAX;
static uint16_t x384 = UINT16_MAX;
volatile int32_t t80 = 7276;
uint16_t x397 = UINT16_MAX;
static volatile uint64_t t85 = 30939944LLU;
int16_t x411 = -1;
uint32_t x412 = 587628912U;
uint16_t x417 = UINT16_MAX;
uint32_t x419 = UINT32_MAX;
int8_t x424 = INT8_MIN;
volatile int32_t x432 = INT32_MIN;
int16_t x434 = -1;
volatile int64_t x436 = -346LL;
int64_t x440 = 25544828LL;
static uint64_t x441 = 1312227762755LLU;
uint64_t t94 = 4618762LLU;
uint64_t x450 = UINT64_MAX;
int8_t x457 = 2;
int32_t x458 = INT32_MIN;
static int16_t x460 = -1;
int32_t t97 = 144773351;
static volatile int32_t t98 = 4670484;
static uint8_t x465 = 0U;
static int64_t x468 = INT64_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	volatile int64_t x4 = -1LL;
	uint64_t t0 = 32661471231LLU;

	t0 = (x1*(x2*(x3<=x4)));

	if (t0 != 18446743915342430208LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 7;
	uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 5177U;
	int32_t t1 = 35455012;

	t1 = (x5*(x6*(x7<=x8)));

	if (t1 != -7) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 2916LL;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MAX;
	static int8_t x12 = -1;
	volatile int64_t t2 = 165499132LL;

	t2 = (x9*(x10*(x11<=x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MAX;
	volatile int16_t x15 = -1;
	volatile int32_t x16 = -18106;
	volatile int64_t t3 = -152LL;

	t3 = (x13*(x14*(x15<=x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int8_t x18 = 25;
	uint8_t x20 = 39U;
	static volatile int32_t t4 = 653154118;

	t4 = (x17*(x18*(x19<=x20)));

	if (t4 != -3200) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	uint16_t x22 = UINT16_MAX;
	uint8_t x23 = UINT8_MAX;
	static int16_t x24 = INT16_MIN;
	uint32_t t5 = 1834U;

	t5 = (x21*(x22*(x23<=x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	static uint32_t x30 = UINT32_MAX;
	static int16_t x31 = INT16_MIN;
	volatile uint32_t t6 = 22U;

	t6 = (x29*(x30*(x31<=x32)));

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = 153345942570542377LL;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t7 = 6007911;

	t7 = (x37*(x38*(x39<=x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	static int16_t x42 = -1;
	uint32_t x43 = 1041997U;
	volatile int8_t x44 = INT8_MAX;
	static volatile int32_t t8 = 83;

	t8 = (x41*(x42*(x43<=x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	static int64_t x48 = -128582562LL;
	int32_t t9 = 6;

	t9 = (x45*(x46*(x47<=x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x51 = 1;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t10 = -16890;

	t10 = (x49*(x50*(x51<=x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 1;
	int8_t x54 = INT8_MAX;
	int16_t x55 = 1298;
	int8_t x56 = INT8_MIN;
	int32_t t11 = -506399248;

	t11 = (x53*(x54*(x55<=x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	static int32_t x58 = -196698;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MAX;
	static volatile int32_t t12 = 758070;

	t12 = (x57*(x58*(x59<=x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = -777;
	int8_t x67 = 2;
	int16_t x68 = -1;
	volatile int32_t t13 = -22332;

	t13 = (x65*(x66*(x67<=x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 9191LLU;
	int8_t x71 = -1;
	uint16_t x72 = 26U;
	uint64_t t14 = 46688LLU;

	t14 = (x69*(x70*(x71<=x72)));

	if (t14 != 9191LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MAX;
	uint8_t x74 = 41U;
	int64_t x76 = INT64_MIN;
	int64_t t15 = 670108LL;

	t15 = (x73*(x74*(x75<=x76)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 4175568430468220LLU;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = 30;
	int32_t x80 = -1;
	uint64_t t16 = 4575158199039LLU;

	t16 = (x77*(x78*(x79<=x80)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	volatile int32_t t17 = -3830;

	t17 = (x81*(x82*(x83<=x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	uint16_t x86 = 16625U;
	static int64_t x87 = INT64_MAX;
	int64_t x88 = -1LL;

	t18 = (x85*(x86*(x87<=x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	static uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	volatile uint16_t x92 = 173U;
	static uint32_t t19 = 448315U;

	t19 = (x89*(x90*(x91<=x92)));

	if (t19 != 128U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x97 = 510479678446211LL;
	int16_t x98 = INT16_MIN;
	int32_t x99 = 499600;
	volatile int64_t t20 = 28164LL;

	t20 = (x97*(x98*(x99<=x100)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 574550808U;
	volatile int8_t x103 = INT8_MAX;
	volatile uint64_t t21 = 1066074788136LLU;

	t21 = (x101*(x102*(x103<=x104)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 351520LLU;
	int32_t x106 = -14;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = -48334179;

	t22 = (x105*(x106*(x107<=x108)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = -1;
	uint8_t x111 = 1U;
	int32_t t23 = -101;

	t23 = (x109*(x110*(x111<=x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 1;
	uint64_t x114 = 78414385LLU;
	uint64_t x115 = UINT64_MAX;
	static uint32_t x116 = UINT32_MAX;

	t24 = (x113*(x114*(x115<=x116)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	uint16_t x119 = 371U;
	static uint8_t x120 = UINT8_MAX;
	int32_t t25 = 0;

	t25 = (x117*(x118*(x119<=x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	int64_t t26 = 116693270625865600LL;

	t26 = (x121*(x122*(x123<=x124)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 1U;
	int32_t t27 = 2183409;

	t27 = (x125*(x126*(x127<=x128)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -5;
	uint16_t x130 = 6U;
	uint64_t x131 = 50957587975893278LLU;
	int32_t x132 = INT32_MIN;
	int32_t t28 = 7106619;

	t28 = (x129*(x130*(x131<=x132)));

	if (t28 != -30) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 122827813620411LLU;
	volatile uint16_t x134 = UINT16_MAX;
	static uint64_t x135 = 84LLU;
	int32_t x136 = -1;
	volatile uint64_t t29 = 541786174148LLU;

	t29 = (x133*(x134*(x135<=x136)));

	if (t29 != 8049520765613634885LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = -1;
	uint32_t x138 = 18U;
	int16_t x139 = 4072;
	int8_t x140 = 0;

	t30 = (x137*(x138*(x139<=x140)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = 2;
	int8_t x143 = -1;
	uint8_t x144 = UINT8_MAX;

	t31 = (x141*(x142*(x143<=x144)));

	if (t31 != -256) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	uint16_t x151 = 2U;
	uint64_t x152 = UINT64_MAX;
	static volatile int32_t t32 = -2;

	t32 = (x149*(x150*(x151<=x152)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -1;
	volatile int32_t x154 = INT32_MAX;
	volatile int64_t x155 = INT64_MAX;
	static int32_t t33 = -2874;

	t33 = (x153*(x154*(x155<=x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = 0;
	int32_t x158 = -1;
	volatile uint32_t x159 = 309U;

	t34 = (x157*(x158*(x159<=x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 16U;
	int8_t x163 = 1;

	t35 = (x161*(x162*(x163<=x164)));

	if (t35 != 2032U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = 3;
	uint8_t x167 = UINT8_MAX;
	static uint8_t x168 = UINT8_MAX;
	uint64_t t36 = 5926777709LLU;

	t36 = (x165*(x166*(x167<=x168)));

	if (t36 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x170 = 1U;
	static uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MAX;
	int64_t t37 = -895LL;

	t37 = (x169*(x170*(x171<=x172)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 7976663338672LLU;
	int16_t x174 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t38 = 1288419138LLU;

	t38 = (x173*(x174*(x175<=x176)));

	if (t38 != 18185364769427947520LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -1;
	uint64_t x178 = 767LLU;
	uint8_t x179 = 3U;
	int16_t x180 = INT16_MIN;
	volatile uint64_t t39 = 22209868122086864LLU;

	t39 = (x177*(x178*(x179<=x180)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = 532;
	volatile int32_t x187 = -1;
	uint64_t t40 = 29381536320482LLU;

	t40 = (x185*(x186*(x187<=x188)));

	if (t40 != 18446744073709551084LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = -1;
	volatile int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 55U;
	volatile int64_t t41 = -1LL;

	t41 = (x189*(x190*(x191<=x192)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x197 = INT8_MAX;
	static uint64_t x198 = 193LLU;
	uint64_t x199 = 3014LLU;
	int8_t x200 = -3;
	static volatile uint64_t t42 = 13221LLU;

	t42 = (x197*(x198*(x199<=x200)));

	if (t42 != 24511LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x205 = -1;
	static volatile uint64_t x206 = 661415079787218LLU;
	uint16_t x207 = 1U;
	uint64_t t43 = 8671974096037777LLU;

	t43 = (x205*(x206*(x207<=x208)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x213 = 2368;
	uint8_t x214 = 0U;
	int64_t x215 = INT64_MIN;
	volatile int16_t x216 = -1;

	t44 = (x213*(x214*(x215<=x216)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = -1LL;
	static volatile int32_t x219 = -41;
	int16_t x220 = INT16_MIN;
	volatile int64_t t45 = -25LL;

	t45 = (x217*(x218*(x219<=x220)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x223 = -342268;
	int8_t x224 = INT8_MAX;
	volatile int32_t t46 = -29376;

	t46 = (x221*(x222*(x223<=x224)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = 12U;
	static volatile uint64_t t47 = 0LLU;

	t47 = (x225*(x226*(x227<=x228)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = 0U;
	int8_t x230 = INT8_MAX;
	uint16_t x231 = 700U;
	static int16_t x232 = INT16_MIN;
	int32_t t48 = -13015459;

	t48 = (x229*(x230*(x231<=x232)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	volatile uint32_t x234 = 3U;
	uint64_t x235 = 3917149981LLU;
	static volatile uint16_t x236 = UINT16_MAX;
	volatile uint64_t t49 = 196569316419107173LLU;

	t49 = (x233*(x234*(x235<=x236)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = -874183405094165LL;
	static int8_t x238 = -1;
	int64_t x239 = 1LL;
	int16_t x240 = INT16_MAX;
	volatile int64_t t50 = -29LL;

	t50 = (x237*(x238*(x239<=x240)));

	if (t50 != 874183405094165LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x241 = UINT32_MAX;
	static int32_t x242 = 3239;
	int8_t x243 = INT8_MIN;
	volatile uint32_t t51 = 2520U;

	t51 = (x241*(x242*(x243<=x244)));

	if (t51 != 4294964057U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = INT32_MAX;
	volatile int8_t x246 = INT8_MAX;
	int64_t x247 = 185330782250791308LL;
	static uint32_t x248 = 1014398422U;
	int32_t t52 = 234870;

	t52 = (x245*(x246*(x247<=x248)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x251 = -1;
	volatile int16_t x252 = INT16_MAX;
	volatile uint32_t t53 = 3U;

	t53 = (x249*(x250*(x251<=x252)));

	if (t53 != 4294948170U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -1;
	volatile int16_t x255 = INT16_MIN;
	static int64_t t54 = -392554147681LL;

	t54 = (x253*(x254*(x255<=x256)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x257 = INT32_MAX;
	static uint8_t x260 = 22U;
	static uint32_t t55 = 3310U;

	t55 = (x257*(x258*(x259<=x260)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	int32_t t56 = 12;

	t56 = (x261*(x262*(x263<=x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = 18152874820626LLU;
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = -15;
	uint32_t x268 = 765110U;
	uint64_t t57 = 30169140820275LLU;

	t57 = (x265*(x266*(x267<=x268)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = 383608;
	int32_t x270 = INT32_MIN;
	volatile uint32_t x271 = UINT32_MAX;
	int32_t x272 = INT32_MIN;
	volatile int32_t t58 = 0;

	t58 = (x269*(x270*(x271<=x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = 27U;
	volatile int32_t x279 = INT32_MIN;
	volatile int32_t x280 = INT32_MAX;
	int32_t t59 = -26703;

	t59 = (x277*(x278*(x279<=x280)));

	if (t59 != -3456) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x282 = -3;
	uint16_t x283 = 2U;
	static uint8_t x284 = 1U;
	volatile int32_t t60 = 426205;

	t60 = (x281*(x282*(x283<=x284)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 56843U;
	volatile int32_t x286 = 47442507;
	int16_t x287 = INT16_MIN;
	volatile uint32_t t61 = 1849U;

	t61 = (x285*(x286*(x287<=x288)));

	if (t61 != 3829930809U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x290 = UINT16_MAX;
	static volatile uint32_t x291 = 14245616U;
	int8_t x292 = -2;
	volatile uint32_t t62 = 28493916U;

	t62 = (x289*(x290*(x291<=x292)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = -402;
	int16_t x299 = INT16_MAX;
	int32_t t63 = -1;

	t63 = (x297*(x298*(x299<=x300)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -6;
	int64_t x302 = 552178207LL;
	volatile int8_t x303 = INT8_MIN;
	volatile int16_t x304 = INT16_MIN;
	volatile int64_t t64 = -17LL;

	t64 = (x301*(x302*(x303<=x304)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = -1LL;
	int64_t x311 = -7LL;
	uint8_t x312 = 2U;
	int64_t t65 = 13187LL;

	t65 = (x309*(x310*(x311<=x312)));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x316 = INT32_MIN;

	t66 = (x313*(x314*(x315<=x316)));

	if (t66 != 13) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x318 = -1;
	int32_t x319 = INT32_MIN;
	static volatile int32_t t67 = -3001346;

	t67 = (x317*(x318*(x319<=x320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x321 = UINT64_MAX;
	uint8_t x323 = 0U;
	int32_t x324 = -683;
	volatile uint64_t t68 = 59435LLU;

	t68 = (x321*(x322*(x323<=x324)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x326 = UINT8_MAX;
	int8_t x327 = -57;
	volatile uint32_t t69 = 1931147U;

	t69 = (x325*(x326*(x327<=x328)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = 32236U;
	int16_t x331 = INT16_MIN;

	t70 = (x329*(x330*(x331<=x332)));

	if (t70 != -1056309248) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = UINT16_MAX;
	static volatile uint8_t x339 = 2U;
	static uint16_t x340 = 426U;
	static volatile uint64_t t71 = 1493377191693024LLU;

	t71 = (x337*(x338*(x339<=x340)));

	if (t71 != 544770697380LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = -1;
	uint16_t x342 = 530U;
	uint64_t x343 = UINT64_MAX;

	t72 = (x341*(x342*(x343<=x344)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = 6424;
	int8_t x346 = -11;
	uint8_t x347 = 2U;
	static uint32_t x348 = UINT32_MAX;
	static int32_t t73 = -2501;

	t73 = (x345*(x346*(x347<=x348)));

	if (t73 != -70664) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x353 = 0U;
	volatile int8_t x354 = -1;
	static volatile uint32_t x355 = UINT32_MAX;
	static volatile uint64_t x356 = 4876277797604LLU;
	static volatile int32_t t74 = -83;

	t74 = (x353*(x354*(x355<=x356)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x357 = 3U;
	volatile int8_t x358 = 1;
	int32_t x359 = INT32_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t75 = 258875;

	t75 = (x357*(x358*(x359<=x360)));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x366 = 28U;
	static uint64_t x367 = 240051152LLU;
	static volatile int32_t t76 = -495545030;

	t76 = (x365*(x366*(x367<=x368)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = 15801;
	int8_t x376 = 1;
	uint32_t t77 = 76296436U;

	t77 = (x373*(x374*(x375<=x376)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x377 = -1;
	int8_t x379 = INT8_MAX;
	int8_t x380 = -12;
	volatile int32_t t78 = 46;

	t78 = (x377*(x378*(x379<=x380)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x382 = INT8_MIN;
	volatile int64_t x383 = INT64_MAX;
	int32_t t79 = 5;

	t79 = (x381*(x382*(x383<=x384)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x385 = 2U;
	int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;

	t80 = (x385*(x386*(x387<=x388)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x389 = INT32_MIN;
	uint16_t x390 = UINT16_MAX;
	uint32_t x391 = 65U;
	static uint16_t x392 = 28U;
	volatile int32_t t81 = 113975715;

	t81 = (x389*(x390*(x391<=x392)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	volatile int16_t x395 = INT16_MAX;
	int64_t x396 = -1LL;
	volatile uint64_t t82 = 2538480723778317LLU;

	t82 = (x393*(x394*(x395<=x396)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x398 = -3;
	static volatile uint8_t x399 = 3U;
	volatile int64_t x400 = 2261229LL;
	volatile int32_t t83 = 26840;

	t83 = (x397*(x398*(x399<=x400)));

	if (t83 != -196605) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = INT64_MIN;
	volatile uint64_t x402 = UINT64_MAX;
	int64_t x403 = -34824379LL;
	static volatile int8_t x404 = -1;
	volatile uint64_t t84 = 1093433318267701LLU;

	t84 = (x401*(x402*(x403<=x404)));

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x405 = 19533U;
	uint64_t x406 = 260963479LLU;
	int64_t x407 = INT64_MIN;
	int64_t x408 = -1929059407LL;

	t85 = (x405*(x406*(x407<=x408)));

	if (t85 != 5097399635307LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x409 = INT32_MAX;
	volatile int16_t x410 = -1;
	int32_t t86 = 399;

	t86 = (x409*(x410*(x411<=x412)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x413 = UINT32_MAX;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = -4452LL;
	int64_t x416 = 56LL;
	static volatile uint32_t t87 = 1907U;

	t87 = (x413*(x414*(x415<=x416)));

	if (t87 != 4294901761U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x418 = 1600;
	static int32_t x420 = -12;
	volatile int32_t t88 = -1525806;

	t88 = (x417*(x418*(x419<=x420)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x421 = 18705898U;
	int32_t x422 = -973867703;
	int8_t x423 = INT8_MIN;
	volatile uint32_t t89 = 346311U;

	t89 = (x421*(x422*(x423<=x424)));

	if (t89 != 3803400634U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = 490LL;
	uint16_t x426 = 434U;
	volatile int16_t x427 = INT16_MIN;
	int32_t x428 = -3226;
	volatile int64_t t90 = -8LL;

	t90 = (x425*(x426*(x427<=x428)));

	if (t90 != 212660LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = INT32_MIN;
	static int32_t x430 = INT32_MIN;
	uint8_t x431 = UINT8_MAX;
	volatile int32_t t91 = -220;

	t91 = (x429*(x430*(x431<=x432)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x433 = -35524668061285861LL;
	volatile int64_t x435 = INT64_MIN;
	int64_t t92 = -15714334215LL;

	t92 = (x433*(x434*(x435<=x436)));

	if (t92 != 35524668061285861LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = -1LL;
	uint32_t x438 = UINT32_MAX;
	volatile uint32_t x439 = UINT32_MAX;
	volatile int64_t t93 = 998696835982029275LL;

	t93 = (x437*(x438*(x439<=x440)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x442 = 0;
	int32_t x443 = INT32_MAX;
	static uint8_t x444 = 22U;

	t94 = (x441*(x442*(x443<=x444)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x445 = INT16_MAX;
	static int32_t x446 = -1;
	int32_t x447 = 13181947;
	static int64_t x448 = 86LL;
	volatile int32_t t95 = 3;

	t95 = (x445*(x446*(x447<=x448)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x449 = INT16_MIN;
	int64_t x451 = -503308523LL;
	static int32_t x452 = INT32_MAX;
	volatile uint64_t t96 = 138053LLU;

	t96 = (x449*(x450*(x451<=x452)));

	if (t96 != 32768LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x459 = INT64_MAX;

	t97 = (x457*(x458*(x459<=x460)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = UINT16_MAX;
	int32_t x462 = -1;
	static int16_t x463 = 1023;
	uint8_t x464 = UINT8_MAX;

	t98 = (x461*(x462*(x463<=x464)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x466 = UINT32_MAX;
	volatile int16_t x467 = 2;
	static uint32_t t99 = 1U;

	t99 = (x465*(x466*(x467<=x468)));

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

