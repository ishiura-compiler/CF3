#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 1623U;
int16_t x6 = 0;
int32_t x17 = -1;
volatile int16_t x18 = 1;
int32_t x22 = INT32_MIN;
uint32_t x31 = 28U;
static int8_t x37 = -1;
uint32_t x38 = UINT32_MAX;
int32_t x41 = INT32_MIN;
int32_t x45 = -1;
volatile int32_t t9 = -848751;
int8_t x50 = INT8_MIN;
uint64_t x51 = 1LLU;
static int32_t x52 = INT32_MIN;
uint32_t x53 = UINT32_MAX;
volatile int8_t x61 = INT8_MAX;
uint8_t x63 = UINT8_MAX;
volatile int64_t x96 = INT64_MAX;
volatile int64_t x104 = INT64_MIN;
static int64_t t19 = 4545859394013145542LL;
static volatile int32_t x105 = 47145940;
uint64_t x107 = 22738197360LLU;
static volatile uint32_t x108 = 25923U;
volatile uint64_t t20 = 508834802830490737LLU;
int64_t x115 = INT64_MIN;
int8_t x119 = -1;
uint16_t x143 = UINT16_MAX;
int8_t x155 = INT8_MAX;
int16_t x158 = INT16_MIN;
static int16_t x162 = INT16_MAX;
int8_t x172 = -1;
static int8_t x191 = -1;
static int64_t x192 = INT64_MIN;
int64_t t33 = 3844464910551LL;
int32_t x198 = INT32_MIN;
volatile uint64_t x202 = UINT64_MAX;
int16_t x214 = 11;
static volatile int8_t x215 = -1;
int32_t x230 = INT32_MIN;
int64_t x231 = -78777863668901430LL;
static volatile int8_t x235 = 5;
int32_t x241 = INT32_MIN;
uint64_t x244 = UINT64_MAX;
volatile int64_t x246 = -1LL;
int64_t t43 = -32390LL;
volatile int64_t x252 = INT64_MIN;
uint16_t x257 = 2212U;
volatile int8_t x261 = 14;
uint64_t x274 = 16LLU;
uint64_t x275 = 5844691LLU;
uint64_t x282 = UINT64_MAX;
static uint64_t t50 = 871839658LLU;
static volatile int16_t x285 = INT16_MIN;
uint16_t x288 = UINT16_MAX;
int64_t x292 = -4831379576924349LL;
volatile uint64_t t53 = 1736526874650631314LLU;
volatile int64_t t55 = -55223095756LL;
int8_t x319 = INT8_MAX;
volatile int64_t t57 = -1559588236934786LL;
volatile int32_t x332 = -48206058;
static uint32_t x333 = UINT32_MAX;
uint64_t x336 = 437LLU;
uint64_t t61 = 1905499436LLU;
int16_t x337 = -1;
int32_t x340 = 194941786;
static int32_t t62 = -423377091;
uint16_t x342 = UINT16_MAX;
volatile int16_t x353 = INT16_MAX;
volatile uint8_t x358 = 6U;
static int16_t x361 = -2166;
int64_t t69 = 35174613179266208LL;
volatile int32_t t70 = -20;
uint16_t x381 = 620U;
int8_t x382 = INT8_MIN;
static int8_t x383 = 5;
uint16_t x385 = 2509U;
int32_t x388 = 669;
volatile int16_t x402 = 0;
uint64_t t76 = 108939105630LLU;
uint16_t x413 = UINT16_MAX;
int16_t x419 = INT16_MAX;
int32_t t78 = 223990929;
volatile uint32_t x422 = UINT32_MAX;
int32_t x424 = -133277035;
int8_t x425 = -1;
int16_t x429 = INT16_MAX;
int16_t x431 = INT16_MIN;
static uint64_t x435 = UINT64_MAX;
uint32_t x437 = 153315592U;
volatile int32_t x438 = -1;
volatile int32_t x442 = -2086;
int32_t x443 = -660105;
static int64_t x444 = -1LL;
uint64_t x454 = UINT64_MAX;
static uint64_t x456 = 414588749765LLU;
int64_t x458 = -42LL;
int16_t x459 = INT16_MIN;
static volatile uint32_t x460 = UINT32_MAX;
int8_t x466 = -1;
int32_t x467 = INT32_MIN;
static int32_t x468 = INT32_MIN;
int8_t x474 = 25;
volatile uint64_t x475 = 62LLU;
static uint32_t x477 = 301U;
volatile int32_t x479 = 3;
uint32_t x485 = 1189234U;
int32_t x489 = INT32_MAX;
static uint8_t x491 = 10U;
static uint32_t x495 = UINT32_MAX;
int16_t x499 = -1;
volatile uint64_t t96 = 1468338749LLU;
int8_t x521 = INT8_MIN;
static int16_t x522 = -1;
volatile uint32_t x524 = 469653U;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	static volatile uint16_t x2 = 539U;
	static volatile uint64_t x3 = 882516LLU;
	volatile uint64_t t0 = 8918LLU;

	t0 = (x1*(x2+(x3/x4)));

	if (t0 != 18446744073709550534LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x7 = -73;
	uint8_t x8 = 77U;
	volatile int32_t t1 = 23839474;

	t1 = (x5*(x6+(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -178;
	int8_t x10 = 0;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;
	int64_t t2 = -10804LL;

	t2 = (x9*(x10+(x11/x12)));

	if (t2 != -764504178688LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -31;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 7394993637277364647LLU;
	int8_t x16 = -1;
	volatile uint64_t t3 = 1LLU;

	t3 = (x13*(x14+(x15/x16)));

	if (t3 != 3968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x19 = 66;
	static int64_t x20 = INT64_MAX;
	int64_t t4 = -68848916668210442LL;

	t4 = (x17*(x18+(x19/x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int64_t x23 = INT64_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = 1909863LL;

	t5 = (x21*(x22+(x23/x24)));

	if (t5 != -4629770786759000064LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 0;
	int32_t x30 = -2099293;
	uint16_t x32 = UINT16_MAX;
	static volatile uint32_t t6 = 706570U;

	t6 = (x29*(x30+(x31/x32)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x39 = 2037LLU;
	uint32_t x40 = 858021U;
	volatile uint64_t t7 = 67LLU;

	t7 = (x37*(x38+(x39/x40)));

	if (t7 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = 0;
	static int8_t x44 = INT8_MAX;
	volatile uint32_t t8 = 43819U;

	t8 = (x41*(x42+(x43/x44)));

	if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x46 = INT16_MIN;
	uint8_t x47 = 1U;
	int8_t x48 = 1;

	t9 = (x45*(x46+(x47/x48)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	volatile uint64_t t10 = 94261861LLU;

	t10 = (x49*(x50+(x51/x52)));

	if (t10 != 16384LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = -357466;
	uint64_t x55 = 8577270851780939LLU;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t11 = 1LLU;

	t11 = (x53*(x54+(x55/x56)));

	if (t11 != 18445208768930477146LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	uint64_t x58 = 5LLU;
	static uint64_t x59 = UINT64_MAX;
	int16_t x60 = 665;
	static volatile uint64_t t12 = 117230481464869845LLU;

	t12 = (x57*(x58+(x59/x60)));

	if (t12 != 18419004608937056045LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x62 = 12;
	int16_t x64 = INT16_MIN;
	int32_t t13 = -1;

	t13 = (x61*(x62+(x63/x64)));

	if (t13 != 1524) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x69 = UINT8_MAX;
	int16_t x70 = 1911;
	volatile int64_t x71 = -1LL;
	volatile uint16_t x72 = 2U;
	int64_t t14 = 187985543016LL;

	t14 = (x69*(x70+(x71/x72)));

	if (t14 != 487305LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = -1867;
	static uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = -1LL;
	uint16_t x76 = 69U;
	volatile uint64_t t15 = 631788112LLU;

	t15 = (x73*(x74+(x75/x76)));

	if (t15 != 1867LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 3915476U;
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	uint8_t x92 = 3U;
	static uint32_t t16 = 1914265U;

	t16 = (x89*(x90+(x91/x92)));

	if (t16 != 3793786368U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = UINT64_MAX;
	static volatile uint64_t t17 = 18020019084LLU;

	t17 = (x93*(x94+(x95/x96)));

	if (t17 != 18446743523953737600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = 1;
	uint8_t x98 = 1U;
	int8_t x99 = -1;
	int8_t x100 = -1;
	volatile int32_t t18 = -14;

	t18 = (x97*(x98+(x99/x100)));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 6U;
	int8_t x102 = INT8_MAX;
	uint32_t x103 = 6310437U;

	t19 = (x101*(x102+(x103/x104)));

	if (t19 != 762LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x106 = 8870033932112323LL;

	t20 = (x105*(x106+(x107/x108)));

	if (t20 != 16846195763559084936LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x109 = 114068795;
	uint64_t x110 = 52326744153LLU;
	int64_t x111 = -1LL;
	int16_t x112 = -1;
	uint64_t t21 = 1635409049661155127LLU;

	t21 = (x109*(x110+(x111/x112)));

	if (t21 != 5968848651920074430LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = UINT16_MAX;
	static uint64_t x114 = 4636640131100LLU;
	int64_t x116 = INT64_MIN;
	static volatile uint64_t t22 = 4747977LLU;

	t22 = (x113*(x114+(x115/x116)));

	if (t22 != 303862210991704035LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MAX;
	volatile uint32_t x120 = 936U;
	static uint32_t t23 = 399U;

	t23 = (x117*(x118+(x119/x120)));

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x137 = 6U;
	int8_t x138 = -1;
	volatile int32_t x139 = INT32_MIN;
	uint8_t x140 = 12U;
	volatile int32_t t24 = -5;

	t24 = (x137*(x138+(x139/x140)));

	if (t24 != -1073741826) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x142 = -1;
	int64_t x144 = INT64_MIN;
	int64_t t25 = -17LL;

	t25 = (x141*(x142+(x143/x144)));

	if (t25 != -65535LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = INT32_MAX;
	int8_t x146 = -9;
	uint32_t x147 = 284494U;
	static int16_t x148 = INT16_MAX;
	uint32_t t26 = 9155U;

	t26 = (x145*(x146+(x147/x148)));

	if (t26 != 2147483649U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = 110517688LLU;
	uint32_t x154 = 220241021U;
	volatile int16_t x156 = -28;
	static volatile uint64_t t27 = 1468LLU;

	t27 = (x153*(x154+(x155/x156)));

	if (t27 != 24340528001608696LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = 131;
	int32_t x159 = -1;
	static int16_t x160 = 1;
	int32_t t28 = 57;

	t28 = (x157*(x158+(x159/x160)));

	if (t28 != -4292739) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x161 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 4190443U;
	volatile uint32_t t29 = 344276293U;

	t29 = (x161*(x162+(x163/x164)));

	if (t29 != 4290707584U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x165 = 1U;
	volatile uint32_t x166 = 107U;
	uint8_t x167 = 1U;
	static int8_t x168 = INT8_MAX;
	static volatile uint32_t t30 = 123313126U;

	t30 = (x165*(x166+(x167/x168)));

	if (t30 != 107U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x169 = 1LLU;
	int16_t x170 = INT16_MIN;
	int16_t x171 = -1;
	volatile uint64_t t31 = 255953029346LLU;

	t31 = (x169*(x170+(x171/x172)));

	if (t31 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x173 = UINT64_MAX;
	volatile int8_t x174 = -7;
	int64_t x175 = INT64_MAX;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t32 = 13277665877477136LLU;

	t32 = (x173*(x174+(x175/x176)));

	if (t32 != 18446744069414584325LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = 1;
	uint8_t x190 = UINT8_MAX;

	t33 = (x189*(x190+(x191/x192)));

	if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = UINT64_MAX;
	uint8_t x199 = 14U;
	int64_t x200 = INT64_MAX;
	static volatile uint64_t t34 = 22102LLU;

	t34 = (x197*(x198+(x199/x200)));

	if (t34 != 2147483648LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = 1433081177LLU;
	uint64_t x203 = 0LLU;
	int32_t x204 = 621167161;
	volatile uint64_t t35 = 9739240LLU;

	t35 = (x201*(x202+(x203/x204)));

	if (t35 != 18446744072276470439LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = INT64_MAX;
	static int64_t x206 = INT64_MAX;
	int16_t x207 = -1;
	static uint64_t x208 = 39051200821LLU;
	uint64_t t36 = 434305LLU;

	t36 = (x205*(x206+(x207/x208)));

	if (t36 != 18446744073237178331LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x213 = -28785LL;
	volatile int32_t x216 = INT32_MIN;
	static volatile int64_t t37 = -40146LL;

	t37 = (x213*(x214+(x215/x216)));

	if (t37 != -316635LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = 47;
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = INT64_MIN;
	int8_t x224 = 13;
	uint64_t t38 = 1758276272897150LLU;

	t38 = (x221*(x222+(x223/x224)));

	if (t38 != 3547450783405682985LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x225 = -7943797271LL;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 32254505207LLU;
	uint64_t x228 = 297948538359105LLU;
	uint64_t t39 = 235130803918LLU;

	t39 = (x225*(x226+(x227/x228)));

	if (t39 != 1016806050688LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x229 = 7U;
	volatile int8_t x232 = -3;
	int64_t t40 = 1LL;

	t40 = (x229*(x230+(x231/x232)));

	if (t40 != 183815000195051134LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x233 = -1;
	int8_t x234 = -1;
	int16_t x236 = -3850;
	int32_t t41 = 121;

	t41 = (x233*(x234+(x235/x236)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x242 = 2U;
	static int32_t x243 = -1;
	uint64_t t42 = 5423742837583LLU;

	t42 = (x241*(x242+(x243/x244)));

	if (t42 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x245 = -1;
	int8_t x247 = INT8_MIN;
	static int8_t x248 = INT8_MIN;

	t43 = (x245*(x246+(x247/x248)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x249 = -1;
	int16_t x250 = INT16_MAX;
	volatile uint32_t x251 = 0U;
	int64_t t44 = 52393118519614LL;

	t44 = (x249*(x250+(x251/x252)));

	if (t44 != -32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x253 = -1;
	volatile uint32_t x254 = UINT32_MAX;
	uint16_t x255 = UINT16_MAX;
	static int64_t x256 = -6LL;
	int64_t t45 = -4370978181953858797LL;

	t45 = (x253*(x254+(x255/x256)));

	if (t45 != -4294956373LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x258 = INT16_MIN;
	int64_t x259 = -520385LL;
	static uint16_t x260 = 86U;
	int64_t t46 = 4996981LL;

	t46 = (x257*(x258+(x259/x260)));

	if (t46 != -85865416LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x262 = UINT8_MAX;
	static int32_t x263 = -1;
	int64_t x264 = INT64_MAX;
	volatile int64_t t47 = 42424254815LL;

	t47 = (x261*(x262+(x263/x264)));

	if (t47 != 3570LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x269 = INT32_MAX;
	volatile int64_t x270 = -1LL;
	static uint16_t x271 = UINT16_MAX;
	int16_t x272 = -1;
	static volatile int64_t t48 = 21398996297023LL;

	t48 = (x269*(x270+(x271/x272)));

	if (t48 != -140737488289792LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x273 = INT8_MIN;
	volatile uint16_t x276 = UINT16_MAX;
	static volatile uint64_t t49 = 38811766818LLU;

	t49 = (x273*(x274+(x275/x276)));

	if (t49 != 18446744073709538176LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x281 = 1U;
	uint32_t x283 = UINT32_MAX;
	volatile uint32_t x284 = UINT32_MAX;

	t50 = (x281*(x282+(x283/x284)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x286 = 5198U;
	static volatile int8_t x287 = INT8_MAX;
	volatile uint32_t t51 = 6613346U;

	t51 = (x285*(x286+(x287/x288)));

	if (t51 != 4124639232U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x289 = 1;
	volatile int32_t x290 = 1495;
	uint8_t x291 = 0U;
	static int64_t t52 = -3126LL;

	t52 = (x289*(x290+(x291/x292)));

	if (t52 != 1495LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x293 = 20632U;
	volatile uint64_t x294 = UINT64_MAX;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MIN;

	t53 = (x293*(x294+(x295/x296)));

	if (t53 != 18446744073709530984LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x297 = UINT64_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x299 = -7;
	uint64_t x300 = UINT64_MAX;
	uint64_t t54 = 3886755LLU;

	t54 = (x297*(x298+(x299/x300)));

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x305 = -1LL;
	static volatile int8_t x306 = -34;
	int32_t x307 = INT32_MAX;
	int64_t x308 = INT64_MIN;

	t55 = (x305*(x306+(x307/x308)));

	if (t55 != 34LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x313 = 97LL;
	static int64_t x314 = -1LL;
	uint16_t x315 = 89U;
	int16_t x316 = INT16_MAX;
	static int64_t t56 = 1LL;

	t56 = (x313*(x314+(x315/x316)));

	if (t56 != -97LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x317 = 42;
	int8_t x318 = INT8_MIN;
	int64_t x320 = INT64_MIN;

	t57 = (x317*(x318+(x319/x320)));

	if (t57 != -5376LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = 1U;
	static uint32_t x323 = 1012U;
	volatile int64_t x324 = INT64_MAX;
	int64_t t58 = -7787530947LL;

	t58 = (x321*(x322+(x323/x324)));

	if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	static int8_t x327 = -4;
	int8_t x328 = -6;
	static volatile uint64_t t59 = 635088253295226046LLU;

	t59 = (x325*(x326+(x327/x328)));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x329 = 31U;
	volatile uint64_t x330 = 320414594650807932LLU;
	volatile int64_t x331 = -1LL;
	static volatile uint64_t t60 = 286448981196LLU;

	t60 = (x329*(x330+(x331/x332)));

	if (t60 != 9932852434175045892LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x334 = -1;
	volatile int32_t x335 = INT32_MIN;

	t61 = (x333*(x334+(x335/x336)));

	if (t61 != 8210278533587092320LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x338 = 312;
	static int8_t x339 = 3;

	t62 = (x337*(x338+(x339/x340)));

	if (t62 != -312) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x341 = -1310;
	uint8_t x343 = 7U;
	volatile int32_t x344 = 382131314;
	int32_t t63 = 114;

	t63 = (x341*(x342+(x343/x344)));

	if (t63 != -85850850) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x345 = 11U;
	uint8_t x346 = 45U;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = 864054353173466152LL;
	int64_t t64 = -2141930638623LL;

	t64 = (x345*(x346+(x347/x348)));

	if (t64 != 495LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x349 = 0U;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = 24;
	static uint64_t x352 = 3301LLU;
	volatile uint64_t t65 = 122828044LLU;

	t65 = (x349*(x350+(x351/x352)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x354 = INT64_MIN;
	int8_t x355 = -5;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t66 = 2264420956933230855LLU;

	t66 = (x353*(x354+(x355/x356)));

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x357 = INT64_MIN;
	static uint64_t x359 = 83769532357LLU;
	int8_t x360 = INT8_MIN;
	static uint64_t t67 = 0LLU;

	t67 = (x357*(x358+(x359/x360)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x362 = 342U;
	int8_t x363 = -1;
	volatile uint16_t x364 = 2708U;
	volatile int32_t t68 = 164;

	t68 = (x361*(x362+(x363/x364)));

	if (t68 != -740772) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = -1;
	int8_t x366 = -5;
	static int64_t x367 = -1LL;
	int8_t x368 = -1;

	t69 = (x365*(x366+(x367/x368)));

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x369 = INT16_MIN;
	volatile int32_t x370 = -27514;
	static volatile int16_t x371 = -1;
	static int32_t x372 = -1;

	t70 = (x369*(x370+(x371/x372)));

	if (t70 != 901545984) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x373 = INT16_MIN;
	int16_t x374 = -4710;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = 4;
	static uint32_t t71 = 6U;

	t71 = (x373*(x374+(x375/x376)));

	if (t71 != 154370048U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x377 = INT8_MIN;
	volatile int8_t x378 = INT8_MIN;
	int8_t x379 = -7;
	uint8_t x380 = 4U;
	volatile int32_t t72 = -1;

	t72 = (x377*(x378+(x379/x380)));

	if (t72 != 16512) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x384 = 10U;
	volatile int32_t t73 = -81;

	t73 = (x381*(x382+(x383/x384)));

	if (t73 != -79360) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x386 = 5393U;
	static int8_t x387 = INT8_MIN;
	int32_t t74 = 636229760;

	t74 = (x385*(x386+(x387/x388)));

	if (t74 != 13531037) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x401 = INT8_MIN;
	int64_t x403 = 19417788LL;
	uint8_t x404 = UINT8_MAX;
	int64_t t75 = -64LL;

	t75 = (x401*(x402+(x403/x404)));

	if (t75 != -9746944LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MIN;
	static uint16_t x407 = 0U;
	volatile uint64_t x408 = 50154688LLU;

	t76 = (x405*(x406+(x407/x408)));

	if (t76 != 2147483648LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x414 = -1;
	uint64_t x415 = UINT64_MAX;
	static int16_t x416 = -461;
	static volatile uint64_t t77 = 14LLU;

	t77 = (x413*(x414+(x415/x416)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x417 = -1;
	int16_t x418 = 0;
	static int16_t x420 = INT16_MIN;

	t78 = (x417*(x418+(x419/x420)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x421 = -1;
	int32_t x423 = INT32_MIN;
	static volatile uint32_t t79 = 15U;

	t79 = (x421*(x422+(x423/x424)));

	if (t79 != 4294967281U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x426 = 5181166;
	uint8_t x427 = 2U;
	static volatile int16_t x428 = INT16_MAX;
	int32_t t80 = -6;

	t80 = (x425*(x426+(x427/x428)));

	if (t80 != -5181166) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x430 = -5179;
	static uint64_t x432 = 1345LLU;
	volatile uint64_t t81 = 4360634479295LLU;

	t81 = (x429*(x430+(x431/x432)));

	if (t81 != 6679230010161481242LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x433 = UINT64_MAX;
	int32_t x434 = 224098;
	static int16_t x436 = INT16_MAX;
	volatile uint64_t t82 = 1565184LLU;

	t82 = (x433*(x434+(x435/x436)));

	if (t82 != 18446181106575512718LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = 2484;
	static uint32_t t83 = 20410838U;

	t83 = (x437*(x438+(x439/x440)));

	if (t83 != 801186776U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x441 = INT8_MAX;
	volatile int64_t t84 = 207LL;

	t84 = (x441*(x442+(x443/x444)));

	if (t84 != 83568413LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x445 = INT64_MIN;
	static volatile int32_t x446 = INT32_MIN;
	volatile uint64_t x447 = 5539615527LLU;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t85 = 216768701953LLU;

	t85 = (x445*(x446+(x447/x448)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x453 = UINT64_MAX;
	int16_t x455 = -1;
	volatile uint64_t t86 = 2809LLU;

	t86 = (x453*(x454+(x455/x456)));

	if (t86 != 18446744073665057540LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x457 = 3452;
	volatile int64_t t87 = 1596813421437815698LL;

	t87 = (x457*(x458+(x459/x460)));

	if (t87 != -144984LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x465 = INT16_MIN;
	volatile int32_t t88 = 45;

	t88 = (x465*(x466+(x467/x468)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x469 = UINT32_MAX;
	static uint8_t x470 = UINT8_MAX;
	uint32_t x471 = 369088467U;
	int64_t x472 = INT64_MIN;
	int64_t t89 = -7LL;

	t89 = (x469*(x470+(x471/x472)));

	if (t89 != 1095216660225LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = INT32_MIN;
	static int8_t x476 = -1;
	uint64_t t90 = 4323649121429141LLU;

	t90 = (x473*(x474+(x475/x476)));

	if (t90 != 18446744020022460416LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x478 = 1018549LL;
	int32_t x480 = -1;
	static int64_t t91 = 121508259683026LL;

	t91 = (x477*(x478+(x479/x480)));

	if (t91 != 306582346LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x486 = 15U;
	int16_t x487 = INT16_MIN;
	int8_t x488 = 5;
	volatile uint32_t t92 = 1545U;

	t92 = (x485*(x486+(x487/x488)));

	if (t92 != 814722700U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x490 = 0U;
	static uint16_t x492 = UINT16_MAX;
	int32_t t93 = 23851804;

	t93 = (x489*(x490+(x491/x492)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x493 = 4U;
	static int8_t x494 = INT8_MIN;
	int16_t x496 = -20;
	uint32_t t94 = 370310U;

	t94 = (x493*(x494+(x495/x496)));

	if (t94 != 4294966788U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = INT8_MAX;
	int8_t x498 = INT8_MAX;
	int32_t x500 = -1;
	int32_t t95 = 1;

	t95 = (x497*(x498+(x499/x500)));

	if (t95 != 16256) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x501 = -11440855203LL;
	int8_t x502 = 1;
	int8_t x503 = INT8_MIN;
	static uint64_t x504 = 14681028358171212LLU;

	t96 = (x501*(x502+(x503/x504)));

	if (t96 != 18446729692554561445LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x509 = 1;
	uint8_t x510 = 3U;
	uint8_t x511 = UINT8_MAX;
	static int16_t x512 = -1;
	int32_t t97 = -31;

	t97 = (x509*(x510+(x511/x512)));

	if (t97 != -252) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x513 = 81U;
	uint64_t x514 = UINT64_MAX;
	int16_t x515 = 244;
	uint64_t x516 = 350296399LLU;
	static uint64_t t98 = 15LLU;

	t98 = (x513*(x514+(x515/x516)));

	if (t98 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x523 = INT64_MIN;
	int64_t t99 = -3156275835302030LL;

	t99 = (x521*(x522+(x523/x524)));

	if (t99 != 2513752963821056LL) { NG(); } else { ; }
	
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

