#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 9;
uint64_t t3 = 18657069553LLU;
volatile int64_t x24 = -1LL;
volatile uint16_t x41 = UINT16_MAX;
volatile uint32_t t8 = 6311U;
int32_t x50 = 570152994;
int8_t x65 = INT8_MAX;
uint64_t t13 = 1767065249LLU;
uint16_t x76 = 2283U;
volatile int64_t t15 = 3878550LL;
int16_t x88 = INT16_MAX;
int32_t x90 = INT32_MAX;
uint64_t t17 = 213LLU;
uint32_t t18 = 33055U;
volatile int64_t t19 = -4940LL;
int32_t x109 = -1862580;
int32_t x118 = INT32_MIN;
static uint32_t x119 = 1U;
int16_t x120 = 4795;
static uint32_t t21 = 1165U;
int16_t x123 = -1;
static volatile int32_t t22 = 436872;
uint8_t x133 = UINT8_MAX;
int64_t x134 = -22419386LL;
volatile int8_t x141 = INT8_MAX;
static uint8_t x142 = 2U;
uint64_t x143 = 19848LLU;
static int8_t x149 = INT8_MAX;
volatile int64_t t27 = 1LL;
int64_t x157 = INT64_MAX;
int16_t x174 = INT16_MAX;
volatile int64_t x180 = -18427LL;
static int64_t t31 = 124LL;
static int64_t x183 = 6LL;
uint16_t x186 = 2319U;
static int32_t x189 = 210227386;
volatile int64_t x199 = 34766521776216473LL;
volatile uint64_t t36 = 3660411434LLU;
int32_t x206 = INT32_MAX;
uint32_t x207 = UINT32_MAX;
uint32_t x210 = UINT32_MAX;
int32_t t39 = -107048;
volatile int64_t t41 = 15LL;
static int16_t x228 = -1;
uint64_t t43 = 1377353560LLU;
static int8_t x240 = INT8_MAX;
int8_t x243 = 3;
int8_t x248 = INT8_MIN;
int64_t x261 = INT64_MIN;
int64_t x278 = -1340313005092LL;
int8_t x279 = 14;
static int32_t x284 = -1;
static uint64_t t52 = 4778774794706734LLU;
int8_t x297 = 0;
uint32_t x303 = UINT32_MAX;
uint16_t x304 = 9035U;
int16_t x309 = INT16_MAX;
uint64_t x312 = UINT64_MAX;
static uint64_t x321 = 7027467564317463LLU;
volatile uint64_t x322 = 10LLU;
int32_t x331 = INT32_MIN;
int8_t x338 = -56;
static uint64_t t60 = 163142281774766LLU;
static int64_t t61 = -183864LL;
int16_t x345 = -8998;
volatile uint64_t t68 = 12476LLU;
volatile uint64_t x382 = 39330421LLU;
int32_t x389 = -1;
volatile int16_t x390 = INT16_MIN;
uint32_t x392 = UINT32_MAX;
volatile int32_t x393 = -1;
int16_t x396 = -250;
int8_t x401 = INT8_MAX;
int16_t x403 = -231;
volatile int64_t t74 = -7LL;
volatile uint64_t x416 = 39698LLU;
uint64_t x419 = UINT64_MAX;
int32_t x420 = 248297;
int8_t x421 = INT8_MAX;
int64_t x423 = -1008016424943LL;
uint64_t t77 = 906521689024715079LLU;
volatile uint64_t t78 = 2472LLU;
int16_t x444 = INT16_MIN;
static volatile uint32_t x445 = UINT32_MAX;
volatile int64_t t80 = -11036670907734LL;
int8_t x452 = INT8_MIN;
uint8_t x457 = 5U;
int32_t x463 = 1;
static uint64_t t83 = 15301923LLU;
volatile int64_t x470 = 304485LL;
volatile int64_t t85 = 383714911868LL;
int16_t x482 = INT16_MAX;
static int64_t x485 = INT64_MIN;
volatile uint16_t x488 = UINT16_MAX;
int8_t x490 = 1;
static int8_t x500 = -1;
uint64_t t90 = 190640108200LLU;
uint64_t x503 = UINT64_MAX;
uint8_t x504 = 12U;
int64_t x505 = INT64_MAX;
int64_t x506 = INT64_MIN;
static volatile uint64_t x515 = UINT64_MAX;
static int32_t t94 = -87;
static int32_t x532 = -1;
volatile uint16_t x534 = 34U;
static volatile uint64_t t97 = 143124LLU;
int8_t x541 = -21;
static int8_t x542 = INT8_MAX;
uint16_t x543 = UINT16_MAX;
volatile int32_t t98 = 62806;
int16_t x550 = INT16_MIN;


void f0(void) {
	static int16_t x2 = -1;
	volatile int16_t x3 = 7;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = 14749;

	t0 = (x1|(x2+(x3*x4)));

	if (t0 != 458745) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	static uint8_t x10 = 0U;
	volatile int32_t x11 = INT32_MAX;
	static int32_t x12 = -1;
	static volatile int32_t t1 = 3621;

	t1 = (x9|(x10+(x11*x12)));

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 45U;
	volatile int16_t x14 = INT16_MAX;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t2 = 10158;

	t2 = (x13|(x14+(x15*x16)));

	if (t2 != 8388397) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1976;
	int64_t x18 = INT64_MAX;
	int16_t x19 = 6271;
	uint64_t x20 = 31965LLU;

	t3 = (x17|(x18+(x19*x20)));

	if (t3 != 18446744073709550058LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -1LL;
	static int64_t x22 = 75332554902LL;
	uint8_t x23 = 0U;
	int64_t t4 = 512LL;

	t4 = (x21|(x22+(x23*x24)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 1475;
	int16_t x26 = -1;
	int8_t x27 = -1;
	int16_t x28 = 11135;
	volatile int32_t t5 = 174335783;

	t5 = (x25|(x26+(x27*x28)));

	if (t5 != -10813) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int8_t x30 = -1;
	int32_t x31 = -31164745;
	uint32_t x32 = 323U;
	uint32_t t6 = UINT32_MAX;

	t6 = (x29|(x30+(x31*x32)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 25;
	volatile int16_t x34 = -1;
	int8_t x35 = INT8_MAX;
	uint64_t x36 = 1346LLU;
	static volatile uint64_t t7 = 90869655300577783LLU;

	t7 = (x33|(x34+(x35*x36)));

	if (t7 != 170941LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x42 = 36U;
	uint32_t x43 = 44U;
	volatile uint16_t x44 = UINT16_MAX;

	t8 = (x41|(x42+(x43*x44)));

	if (t8 != 2883583U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x51 = 5022949U;
	volatile uint64_t x52 = 17466485451LLU;
	volatile uint64_t t9 = 51244217442LLU;

	t9 = (x49|(x50+(x51*x52)));

	if (t9 != 18446744073709546425LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 124993480557994LLU;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MAX;
	static int8_t x56 = -1;
	volatile uint64_t t10 = 49452264LLU;

	t10 = (x53|(x54+(x55*x56)));

	if (t10 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = UINT64_MAX;
	int16_t x58 = -1;
	volatile int16_t x59 = INT16_MIN;
	uint32_t x60 = UINT32_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = (x57|(x58+(x59*x60)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 13U;
	static uint16_t x62 = 44U;
	static int8_t x63 = -3;
	static uint8_t x64 = 1U;
	volatile int32_t t12 = -185288431;

	t12 = (x61|(x62+(x63*x64)));

	if (t12 != 45) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x66 = 2U;
	uint64_t x67 = 229146081089344LLU;
	int16_t x68 = -1;

	t13 = (x65|(x66+(x67*x68)));

	if (t13 != 18446514927628462335LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1581809832886LL;
	volatile uint64_t x70 = 0LLU;
	volatile int16_t x71 = INT16_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t14 = 742849667813026154LLU;

	t14 = (x69|(x70+(x71*x72)));

	if (t14 != 18446742491899751498LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = 491191026U;

	t15 = (x73|(x74+(x75*x76)));

	if (t15 != -9223372036452122625LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	static volatile int8_t x86 = -10;
	volatile int8_t x87 = -44;
	volatile int32_t t16 = -94;

	t16 = (x85|(x86+(x87*x88)));

	if (t16 != -94) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 150LLU;
	int8_t x91 = -48;
	uint8_t x92 = UINT8_MAX;

	t17 = (x89|(x90+(x91*x92)));

	if (t17 != 2147471551LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MIN;
	static uint32_t x94 = 15340645U;
	int16_t x95 = -1;
	uint32_t x96 = 338U;

	t18 = (x93|(x94+(x95*x96)));

	if (t18 != 4294967187U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x105 = 3238;
	static uint16_t x106 = 2002U;
	int64_t x107 = -1LL;
	uint32_t x108 = 43233376U;

	t19 = (x105|(x106+(x107*x108)));

	if (t19 != -43229194LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x110 = 5U;
	static int8_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t20 = -92392484;

	t20 = (x109|(x110+(x111*x112)));

	if (t20 != -178) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x117 = -1204;

	t21 = (x117|(x118+(x119*x120)));

	if (t21 != 4294966271U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = 9;
	int16_t x122 = INT16_MIN;
	int32_t x124 = 365692;

	t22 = (x121|(x122+(x123*x124)));

	if (t22 != -398451) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MIN;
	int8_t x132 = -13;
	volatile int32_t t23 = -11536383;

	t23 = (x129|(x130+(x131*x132)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x135 = UINT32_MAX;
	volatile int16_t x136 = -1;
	volatile int64_t t24 = 25749420059559LL;

	t24 = (x133|(x134+(x135*x136)));

	if (t24 != -22419201LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x144 = INT16_MIN;
	uint64_t t25 = 116LLU;

	t25 = (x141|(x142+(x143*x144)));

	if (t25 != 18446744073059172479LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = 353813881;
	uint32_t x146 = 2855U;
	int32_t x147 = -1;
	volatile uint16_t x148 = 2639U;
	uint32_t t26 = 1169292759U;

	t26 = (x145|(x146+(x147*x148)));

	if (t26 != 353814009U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MIN;
	int32_t x152 = 62061;

	t27 = (x149|(x150+(x151*x152)));

	if (t27 != 9223372036846831999LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = INT32_MIN;
	volatile uint32_t x154 = 88965933U;
	uint64_t x155 = 543205121318677LLU;
	int32_t x156 = INT32_MAX;
	volatile uint64_t t28 = 1611936LLU;

	t28 = (x153|(x154+(x155*x156)));

	if (t28 != 18446744072518476824LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x158 = UINT64_MAX;
	volatile uint16_t x159 = 9335U;
	int16_t x160 = INT16_MIN;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = (x157|(x158+(x159*x160)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = -1LL;
	uint32_t x175 = UINT32_MAX;
	static int16_t x176 = -3677;
	volatile int64_t t30 = -269307363LL;

	t30 = (x173|(x174+(x175*x176)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = 3;
	uint16_t x178 = 26756U;
	static int32_t x179 = INT32_MIN;

	t31 = (x177|(x178+(x179*x180)));

	if (t31 != 39571681208455LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x181 = INT8_MIN;
	static int64_t x182 = 8606939392LL;
	int16_t x184 = -1;
	volatile int64_t t32 = 476737553993264535LL;

	t32 = (x181|(x182+(x183*x184)));

	if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MIN;
	volatile uint64_t x187 = UINT64_MAX;
	uint8_t x188 = 0U;
	uint64_t t33 = 118548LLU;

	t33 = (x185|(x186+(x187*x188)));

	if (t33 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x190 = -1;
	static int8_t x191 = 15;
	uint64_t x192 = UINT64_MAX;
	uint64_t t34 = 225983632384256010LLU;

	t34 = (x189|(x190+(x191*x192)));

	if (t34 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = 6183691LL;
	static volatile int32_t x194 = -5166;
	int32_t x195 = INT32_MIN;
	static uint32_t x196 = UINT32_MAX;
	int64_t t35 = -88848302608LL;

	t35 = (x193|(x194+(x195*x196)));

	if (t35 != 2147482587LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = INT32_MIN;
	static int8_t x198 = INT8_MIN;
	static uint64_t x200 = 172894LLU;

	t36 = (x197|(x198+(x199*x200)));

	if (t36 != 18446744072953516206LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x205 = INT32_MIN;
	static int8_t x208 = INT8_MIN;
	uint32_t t37 = 144U;

	t37 = (x205|(x206+(x207*x208)));

	if (t37 != 2147483775U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x209 = UINT16_MAX;
	volatile int8_t x211 = INT8_MIN;
	int64_t x212 = 2LL;
	static int64_t t38 = -51908735357LL;

	t38 = (x209|(x210+(x211*x212)));

	if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = -1;
	volatile int8_t x214 = -1;
	int32_t x215 = 103685733;
	uint8_t x216 = 5U;

	t39 = (x213|(x214+(x215*x216)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = -1180183036206224LL;
	int64_t x218 = INT64_MAX;
	int8_t x219 = 0;
	volatile int32_t x220 = -1;
	int64_t t40 = -1LL;

	t40 = (x217|(x218+(x219*x220)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x221 = 1259LL;
	uint16_t x222 = 10627U;
	int32_t x223 = 736;
	static uint8_t x224 = UINT8_MAX;

	t41 = (x221|(x222+(x223*x224)));

	if (t41 != 198379LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x225 = INT32_MAX;
	volatile int16_t x226 = INT16_MIN;
	volatile uint32_t x227 = 774585026U;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x225|(x226+(x227*x228)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x229 = UINT16_MAX;
	uint16_t x230 = UINT16_MAX;
	static uint64_t x231 = 92638976LLU;
	int64_t x232 = 1820401750LL;

	t43 = (x229|(x230+(x231*x232)));

	if (t43 != 168640154028736511LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x233 = 4253261;
	uint16_t x234 = 2U;
	uint32_t x235 = UINT32_MAX;
	uint16_t x236 = 456U;
	volatile uint32_t t44 = 1297U;

	t44 = (x233|(x234+(x235*x236)));

	if (t44 != 4294966911U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x237 = 678483482U;
	uint64_t x238 = 2340LLU;
	uint16_t x239 = 861U;
	static uint64_t t45 = 28076374LLU;

	t45 = (x237|(x238+(x239*x240)));

	if (t45 != 678557279LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = INT16_MIN;
	volatile uint64_t x242 = UINT64_MAX;
	int16_t x244 = 2525;
	static uint64_t t46 = 42613389216045850LLU;

	t46 = (x241|(x242+(x243*x244)));

	if (t46 != 18446744073709526422LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x245 = 45588611LL;
	int16_t x246 = 27;
	static int8_t x247 = INT8_MAX;
	static int64_t t47 = 1304144178354318038LL;

	t47 = (x245|(x246+(x247*x248)));

	if (t47 != -8037LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x262 = 22881305397412721LLU;
	int16_t x263 = 1;
	int8_t x264 = INT8_MIN;
	static uint64_t t48 = 6LLU;

	t48 = (x261|(x262+(x263*x264)));

	if (t48 != 9246253342252188401LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x273 = 630U;
	uint64_t x274 = UINT64_MAX;
	static uint16_t x275 = UINT16_MAX;
	static uint32_t x276 = UINT32_MAX;
	uint64_t t49 = 20309379LLU;

	t49 = (x273|(x274+(x275*x276)));

	if (t49 != 4294902390LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x277 = -1;
	int16_t x280 = INT16_MIN;
	int64_t t50 = 105786341119LL;

	t50 = (x277|(x278+(x279*x280)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x281 = INT32_MAX;
	int32_t x282 = INT32_MIN;
	static volatile int16_t x283 = -136;
	int32_t t51 = 0;

	t51 = (x281|(x282+(x283*x284)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x289 = 19860869825054443LLU;
	volatile int64_t x290 = -1LL;
	uint64_t x291 = 224051215633LLU;
	int32_t x292 = -1;

	t52 = (x289|(x290+(x291*x292)));

	if (t52 != 18446743918551484143LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	static int64_t x300 = -1LL;
	int64_t t53 = 234833960805463LL;

	t53 = (x297|(x298+(x299*x300)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x301 = UINT32_MAX;
	int64_t x302 = INT64_MIN;
	int64_t t54 = -6651977328675LL;

	t54 = (x301|(x302+(x303*x304)));

	if (t54 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x310 = 1608982545480923124LL;
	uint16_t x311 = UINT16_MAX;
	volatile uint64_t t55 = 19152498114LLU;

	t55 = (x309|(x310+(x311*x312)));

	if (t55 != 1608982545480876031LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x317 = -56038875;
	static int32_t x318 = -1;
	static uint64_t x319 = 173327499434LLU;
	static uint32_t x320 = 117U;
	static volatile uint64_t t56 = 403973LLU;

	t56 = (x317|(x318+(x319*x320)));

	if (t56 != 18446744073670487989LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	volatile uint64_t t57 = 3492170731LLU;

	t57 = (x321|(x322+(x323*x324)));

	if (t57 != 7027467564350239LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x329 = -1;
	volatile int8_t x330 = INT8_MIN;
	static uint8_t x332 = 0U;
	volatile int32_t t58 = 5259215;

	t58 = (x329|(x330+(x331*x332)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = INT32_MAX;
	int8_t x335 = 29;
	volatile uint8_t x336 = 0U;
	int32_t t59 = INT32_MAX;

	t59 = (x333|(x334+(x335*x336)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = 731U;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MAX;

	t60 = (x337|(x338+(x339*x340)));

	if (t60 != 18446744073709518811LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	volatile uint8_t x343 = 51U;
	static uint16_t x344 = UINT16_MAX;

	t61 = (x341|(x342+(x343*x344)));

	if (t61 != -9223372036851466291LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x346 = INT16_MIN;
	static int32_t x347 = INT32_MAX;
	int64_t x348 = -1LL;
	static volatile int64_t t62 = -1373178274213LL;

	t62 = (x345|(x346+(x347*x348)));

	if (t62 != -8997LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x349 = INT64_MIN;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MIN;
	int64_t t63 = -4378747311790214LL;

	t63 = (x349|(x350+(x351*x352)));

	if (t63 != -9223372032559824769LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = -195334366LL;
	static uint64_t x359 = 34809075707LLU;
	static volatile uint16_t x360 = 376U;
	static volatile uint64_t t64 = 243001698732620518LLU;

	t64 = (x357|(x358+(x359*x360)));

	if (t64 != 13088017131519LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -382;
	volatile int16_t x363 = -1;
	int16_t x364 = -88;
	volatile int32_t t65 = 11095956;

	t65 = (x361|(x362+(x363*x364)));

	if (t65 != -294) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x369 = UINT16_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MAX;
	uint64_t x372 = UINT64_MAX;
	uint64_t t66 = 11957075756401768LLU;

	t66 = (x369|(x370+(x371*x372)));

	if (t66 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x373 = 370;
	static int32_t x374 = -1;
	uint32_t x375 = 7264652U;
	int64_t x376 = 4LL;
	static int64_t t67 = -127952089379736234LL;

	t67 = (x373|(x374+(x375*x376)));

	if (t67 != 29058943LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x377 = INT32_MIN;
	volatile uint64_t x378 = UINT64_MAX;
	int64_t x379 = -44396516LL;
	volatile int16_t x380 = -1;

	t68 = (x377|(x378+(x379*x380)));

	if (t68 != 18446744071606464483LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x381 = 151768588967405LL;
	static int8_t x383 = -1;
	int64_t x384 = -90217LL;
	static uint64_t t69 = 79LLU;

	t69 = (x381|(x382+(x383*x384)));

	if (t69 != 151768623079423LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x385 = -1LL;
	int64_t x386 = -143355037023443LL;
	int32_t x387 = -172111;
	uint32_t x388 = 501068U;
	volatile int64_t t70 = 12530LL;

	t70 = (x385|(x386+(x387*x388)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x391 = INT8_MIN;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x389|(x390+(x391*x392)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x394 = 1967118LL;
	static int16_t x395 = 0;
	int64_t t72 = -28816639156470LL;

	t72 = (x393|(x394+(x395*x396)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x402 = UINT64_MAX;
	volatile int64_t x404 = 578888LL;
	static volatile uint64_t t73 = 0LLU;

	t73 = (x401|(x402+(x403*x404)));

	if (t73 != 18446744073575828607LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x409 = INT32_MIN;
	volatile uint16_t x410 = 6U;
	uint8_t x411 = UINT8_MAX;
	static int64_t x412 = -1LL;

	t74 = (x409|(x410+(x411*x412)));

	if (t74 != -249LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = INT64_MAX;
	uint32_t x414 = 1U;
	int32_t x415 = INT32_MIN;
	uint64_t t75 = UINT64_MAX;

	t75 = (x413|(x414+(x415*x416)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x417 = -245;
	int8_t x418 = INT8_MIN;
	uint64_t t76 = 800073510553529LLU;

	t76 = (x417|(x418+(x419*x420)));

	if (t76 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x422 = 42U;
	volatile uint64_t x424 = 546616984679LLU;

	t77 = (x421|(x422+(x423*x424)));

	if (t77 != 5346772456122321791LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x433 = 11LLU;
	static int8_t x434 = -1;
	uint16_t x435 = 156U;
	int16_t x436 = -2;

	t78 = (x433|(x434+(x435*x436)));

	if (t78 != 18446744073709551311LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x441 = 1825445794758LLU;
	uint64_t x442 = 7LLU;
	volatile int64_t x443 = -1LL;
	volatile uint64_t t79 = 31934056739303554LLU;

	t79 = (x441|(x442+(x443*x444)));

	if (t79 != 1825445827527LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x446 = 10U;
	int64_t x447 = -29LL;
	int16_t x448 = INT16_MIN;

	t80 = (x445|(x446+(x447*x448)));

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x449 = INT32_MIN;
	uint64_t x450 = UINT64_MAX;
	static int16_t x451 = 1;
	static uint64_t t81 = 26629LLU;

	t81 = (x449|(x450+(x451*x452)));

	if (t81 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x458 = INT16_MIN;
	volatile uint16_t x459 = 128U;
	static uint64_t x460 = 413494LLU;
	volatile uint64_t t82 = 10414691923LLU;

	t82 = (x457|(x458+(x459*x460)));

	if (t82 != 52894469LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x461 = UINT32_MAX;
	static volatile int8_t x462 = 2;
	volatile uint64_t x464 = 3439200111547181211LLU;

	t83 = (x461|(x462+(x463*x464)));

	if (t83 != 3439200113153540095LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x465 = -31857LL;
	volatile int8_t x466 = -1;
	static uint32_t x467 = 60329U;
	static uint64_t x468 = 41019531LLU;
	uint64_t t84 = 995325LLU;

	t84 = (x465|(x466+(x467*x468)));

	if (t84 != 18446744073709526991LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x469 = -1;
	int8_t x471 = -1;
	int32_t x472 = INT32_MAX;

	t85 = (x469|(x470+(x471*x472)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x477 = INT64_MAX;
	int16_t x478 = -3333;
	uint32_t x479 = 28903117U;
	int32_t x480 = -1;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x477|(x478+(x479*x480)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x481 = -1;
	uint8_t x483 = 5U;
	volatile uint8_t x484 = UINT8_MAX;
	static int32_t t87 = -9238278;

	t87 = (x481|(x482+(x483*x484)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x486 = -1;
	static int8_t x487 = INT8_MIN;
	int64_t t88 = -900006438136LL;

	t88 = (x485|(x486+(x487*x488)));

	if (t88 != -8388481LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x489 = INT32_MIN;
	int16_t x491 = 6;
	static int16_t x492 = -8;
	static volatile int32_t t89 = 14;

	t89 = (x489|(x490+(x491*x492)));

	if (t89 != -47) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x497 = 8170;
	uint64_t x498 = 535699LLU;
	static int64_t x499 = -1LL;

	t90 = (x497|(x498+(x499*x500)));

	if (t90 != 540670LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x501 = INT64_MIN;
	static uint8_t x502 = 3U;
	volatile uint64_t t91 = 2LLU;

	t91 = (x501|(x502+(x503*x504)));

	if (t91 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x507 = UINT64_MAX;
	int8_t x508 = -1;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x505|(x506+(x507*x508)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x513 = INT16_MIN;
	int8_t x514 = 8;
	int32_t x516 = INT32_MIN;
	uint64_t t93 = 12230490799464LLU;

	t93 = (x513|(x514+(x515*x516)));

	if (t93 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x517 = INT32_MIN;
	static int16_t x518 = -42;
	uint8_t x519 = 86U;
	int32_t x520 = 60;

	t94 = (x517|(x518+(x519*x520)));

	if (t94 != -2147478530) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x529 = INT16_MIN;
	static int32_t x530 = 729;
	int32_t x531 = -1;
	volatile int32_t t95 = 1737;

	t95 = (x529|(x530+(x531*x532)));

	if (t95 != -32038) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x533 = UINT16_MAX;
	volatile int8_t x535 = -1;
	uint64_t x536 = UINT64_MAX;
	uint64_t t96 = 5504577LLU;

	t96 = (x533|(x534+(x535*x536)));

	if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x537 = 2452151LLU;
	volatile uint64_t x538 = 35161174438663395LLU;
	static volatile uint8_t x539 = 79U;
	static volatile int32_t x540 = 357687;

	t97 = (x537|(x538+(x539*x540)));

	if (t97 != 35161174467013375LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x544 = -974;

	t98 = (x541|(x542+(x543*x544)));

	if (t98 != -17) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x549 = 54U;
	volatile int16_t x551 = INT16_MAX;
	static volatile uint32_t x552 = 464368U;
	uint32_t t99 = 5U;

	t99 = (x549|(x550+(x551*x552)));

	if (t99 != 2331011638U) { NG(); } else { ; }
	
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

