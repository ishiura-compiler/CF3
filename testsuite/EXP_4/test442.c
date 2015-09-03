#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 3316;
static int16_t x14 = -1;
static uint8_t x15 = UINT8_MAX;
volatile uint64_t x25 = 458LLU;
static uint32_t x43 = 32349464U;
uint64_t t8 = 237839381811709LLU;
uint8_t x50 = 4U;
int64_t x52 = INT64_MIN;
static uint32_t x55 = UINT32_MAX;
static volatile int32_t t10 = 266181;
volatile int32_t t11 = 759;
int8_t x63 = -1;
int16_t x64 = INT16_MAX;
int32_t x71 = 0;
int16_t x89 = INT16_MIN;
uint64_t x97 = 183123629605166LLU;
uint16_t x108 = 14U;
uint8_t x119 = 6U;
static int8_t x120 = -1;
volatile int64_t t19 = -2980LL;
static int64_t x122 = INT64_MIN;
volatile int16_t x124 = -1;
volatile int32_t t21 = -126197240;
uint32_t x129 = 2709U;
static int16_t x131 = INT16_MIN;
int64_t x138 = INT64_MIN;
static uint64_t x140 = 129768353828772LLU;
volatile int32_t t24 = -4;
volatile uint16_t x144 = UINT16_MAX;
uint64_t x149 = UINT64_MAX;
static uint8_t x151 = UINT8_MAX;
static volatile uint64_t t26 = UINT64_MAX;
volatile int32_t x166 = 721708;
int8_t x183 = -1;
uint8_t x186 = 29U;
static volatile int8_t x187 = 14;
int8_t x196 = -1;
uint64_t x197 = 263687776776233343LLU;
int8_t x200 = INT8_MAX;
int64_t x203 = -1845496215199395LL;
uint16_t x204 = 514U;
static int64_t x207 = -17618LL;
volatile int32_t t37 = 35276704;
volatile uint8_t x224 = 1U;
static int16_t x230 = 15;
volatile int64_t t40 = -309LL;
volatile uint8_t x238 = 1U;
volatile int16_t x242 = -56;
int16_t x243 = INT16_MIN;
static int16_t x246 = INT16_MAX;
volatile int32_t t44 = INT32_MIN;
int64_t x254 = -16LL;
uint8_t x255 = UINT8_MAX;
uint64_t x256 = UINT64_MAX;
uint64_t x260 = 372440837375982862LLU;
volatile int32_t t47 = 61;
int32_t x265 = INT32_MIN;
uint64_t x269 = 22883133LLU;
uint16_t x273 = UINT16_MAX;
volatile uint16_t x274 = UINT16_MAX;
int32_t x276 = 8;
int8_t x280 = -1;
int64_t x286 = 897965007514890LL;
uint16_t x288 = 167U;
uint64_t x292 = 179767181568713885LLU;
volatile int32_t t54 = -609;
int8_t x297 = -1;
static uint64_t x298 = UINT64_MAX;
volatile int32_t t57 = -647215;
uint64_t x309 = UINT64_MAX;
uint64_t x313 = 0LLU;
int64_t x317 = INT64_MIN;
int64_t t60 = INT64_MIN;
uint32_t x321 = UINT32_MAX;
int64_t x322 = -1LL;
volatile uint32_t t61 = UINT32_MAX;
uint16_t x325 = 28067U;
static int16_t x327 = INT16_MAX;
volatile int32_t t62 = -1249163;
uint16_t x330 = 5450U;
uint64_t x338 = 5802LLU;
volatile int16_t x339 = -431;
volatile uint32_t x348 = 35U;
int64_t x349 = INT64_MAX;
int8_t x355 = -1;
int8_t x361 = INT8_MIN;
volatile int16_t x363 = -1;
int32_t t68 = -15657273;
static volatile int8_t x387 = 1;
volatile int32_t x388 = INT32_MIN;
uint8_t x404 = UINT8_MAX;
int64_t x405 = INT64_MAX;
int8_t x408 = 1;
int64_t x409 = 41454532LL;
int64_t x414 = -360893842LL;
int16_t x419 = INT16_MIN;
int32_t x433 = -22;
static int16_t x437 = INT16_MAX;
int16_t x438 = -1;
static int8_t x440 = INT8_MIN;
int8_t x448 = INT8_MAX;
int64_t x449 = INT64_MIN;
int16_t x451 = INT16_MIN;
uint8_t x459 = 32U;
int16_t x460 = -1;
int64_t x461 = -33547895517LL;
volatile int64_t t84 = -63092512091327935LL;
static int32_t x469 = -81926;
int32_t t87 = 289;
uint32_t x485 = UINT32_MAX;
int16_t x486 = INT16_MAX;
uint64_t x507 = 112103LLU;
int8_t x508 = INT8_MIN;
uint8_t x509 = UINT8_MAX;
int8_t x511 = INT8_MIN;
volatile int64_t t94 = -14306447LL;
int8_t x522 = -1;
volatile uint32_t t95 = 482U;
static int64_t x525 = INT64_MIN;
int64_t x526 = INT64_MIN;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int8_t x2 = 0;
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1^(x2==(x3*x4)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = INT8_MAX;
	uint32_t x11 = 9325741U;
	volatile uint64_t x12 = 121LLU;
	static int32_t t1 = -6;

	t1 = (x9^(x10==(x11*x12)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 1U;
	int8_t x16 = INT8_MIN;
	int32_t t2 = 1;

	t2 = (x13^(x14==(x15*x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 14U;
	static int16_t x18 = INT16_MIN;
	static volatile int64_t x19 = -3830LL;
	int8_t x20 = INT8_MIN;
	int32_t t3 = 75;

	t3 = (x17^(x18==(x19*x20)));

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x26 = 4;
	int8_t x27 = -31;
	uint64_t x28 = 1787LLU;
	static uint64_t t4 = 1047179LLU;

	t4 = (x25^(x26==(x27*x28)));

	if (t4 != 458LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 5438U;
	int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	int64_t x32 = -1LL;
	int32_t t5 = -1;

	t5 = (x29^(x30==(x31*x32)));

	if (t5 != 5438) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = UINT64_MAX;
	uint16_t x38 = 8U;
	uint16_t x39 = 1U;
	int16_t x40 = -6;
	uint64_t t6 = UINT64_MAX;

	t6 = (x37^(x38==(x39*x40)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	int32_t t7 = 6109;

	t7 = (x41^(x42==(x43*x44)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x45 = 3LLU;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = 500;
	volatile int16_t x48 = 346;

	t8 = (x45^(x46==(x47*x48)));

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x49 = UINT16_MAX;
	uint64_t x51 = 16295LLU;
	volatile int32_t t9 = -50;

	t9 = (x49^(x50==(x51*x52)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MAX;
	volatile uint64_t x56 = 6LLU;

	t10 = (x53^(x54==(x55*x56)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x57 = 7U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	int16_t x60 = 45;

	t11 = (x57^(x58==(x59*x60)));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = INT8_MIN;
	uint16_t x62 = 150U;
	volatile int32_t t12 = -7394741;

	t12 = (x61^(x62==(x63*x64)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	uint8_t x70 = 33U;
	int64_t x72 = INT64_MIN;
	int32_t t13 = -3216427;

	t13 = (x69^(x70==(x71*x72)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = -1;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 0U;
	uint16_t x88 = 1609U;
	volatile int32_t t14 = 4;

	t14 = (x85^(x86==(x87*x88)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x90 = 348981LLU;
	int64_t x91 = 3407477638535986157LL;
	volatile int8_t x92 = -1;
	volatile int32_t t15 = 5;

	t15 = (x89^(x90==(x91*x92)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = -2825709;
	uint32_t x95 = UINT32_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t16 = 601503;

	t16 = (x93^(x94==(x95*x96)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x98 = 489641;
	static int16_t x99 = INT16_MAX;
	int64_t x100 = -1LL;
	volatile uint64_t t17 = 107LLU;

	t17 = (x97^(x98==(x99*x100)));

	if (t17 != 183123629605166LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x105 = -5;
	int16_t x106 = INT16_MAX;
	volatile int32_t x107 = 27;
	static volatile int32_t t18 = 7641;

	t18 = (x105^(x106==(x107*x108)));

	if (t18 != -5) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = -8285877197435020LL;
	static volatile uint32_t x118 = 3U;

	t19 = (x117^(x118==(x119*x120)));

	if (t19 != -8285877197435020LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x121 = 15500533108035LLU;
	static uint32_t x123 = UINT32_MAX;
	volatile uint64_t t20 = 6LLU;

	t20 = (x121^(x122==(x123*x124)));

	if (t20 != 15500533108035LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = 6;
	volatile int8_t x127 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;

	t21 = (x125^(x126==(x127*x128)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x130 = UINT8_MAX;
	int32_t x132 = -566;
	uint32_t t22 = 5U;

	t22 = (x129^(x130==(x131*x132)));

	if (t22 != 2709U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x133 = -1LL;
	volatile int32_t x134 = INT32_MIN;
	static int16_t x135 = INT16_MIN;
	int8_t x136 = 1;
	volatile int64_t t23 = 1LL;

	t23 = (x133^(x134==(x135*x136)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 13U;
	int64_t x139 = 29679114163925LL;

	t24 = (x137^(x138==(x139*x140)));

	if (t24 != 13) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MAX;
	static int8_t x142 = INT8_MAX;
	int8_t x143 = -1;
	int32_t t25 = -4;

	t25 = (x141^(x142==(x143*x144)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x150 = 4804379U;
	static int32_t x152 = 1;

	t26 = (x149^(x150==(x151*x152)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x157 = -225531;
	int32_t x158 = 5554;
	uint16_t x159 = UINT16_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t27 = 1841;

	t27 = (x157^(x158==(x159*x160)));

	if (t27 != -225531) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MAX;
	static uint8_t x163 = 58U;
	int8_t x164 = INT8_MIN;
	int64_t t28 = INT64_MIN;

	t28 = (x161^(x162==(x163*x164)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x165 = 504U;
	int64_t x167 = -226LL;
	static uint8_t x168 = 19U;
	volatile int32_t t29 = -12308857;

	t29 = (x165^(x166==(x167*x168)));

	if (t29 != 504) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x169 = 632U;
	int64_t x170 = INT64_MIN;
	int8_t x171 = 1;
	int32_t x172 = INT32_MIN;
	volatile uint32_t t30 = 893U;

	t30 = (x169^(x170==(x171*x172)));

	if (t30 != 632U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x181 = UINT32_MAX;
	volatile int16_t x182 = INT16_MAX;
	volatile int8_t x184 = 11;
	uint32_t t31 = UINT32_MAX;

	t31 = (x181^(x182==(x183*x184)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x185 = 927U;
	int8_t x188 = INT8_MIN;
	int32_t t32 = -1105;

	t32 = (x185^(x186==(x187*x188)));

	if (t32 != 927) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x193 = -1;
	volatile uint32_t x194 = 72U;
	volatile int32_t x195 = -19;
	static volatile int32_t t33 = -1026373;

	t33 = (x193^(x194==(x195*x196)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = 1724;
	volatile uint64_t t34 = 4265833835032536LLU;

	t34 = (x197^(x198==(x199*x200)));

	if (t34 != 263687776776233343LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x201 = 4LLU;
	int32_t x202 = INT32_MAX;
	volatile uint64_t t35 = 30LLU;

	t35 = (x201^(x202==(x203*x204)));

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = 115;
	uint64_t x206 = 5379195178692LLU;
	static int32_t x208 = -1;
	volatile int32_t t36 = -1;

	t36 = (x205^(x206==(x207*x208)));

	if (t36 != 115) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x209 = 1U;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MAX;
	volatile int32_t x212 = 0;

	t37 = (x209^(x210==(x211*x212)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x217 = -3;
	int64_t x218 = INT64_MAX;
	uint64_t x219 = UINT64_MAX;
	volatile int8_t x220 = -1;
	static volatile int32_t t38 = -43880;

	t38 = (x217^(x218==(x219*x220)));

	if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x221 = 937487119LLU;
	static volatile int16_t x222 = -1;
	static int32_t x223 = 116980158;
	uint64_t t39 = 0LLU;

	t39 = (x221^(x222==(x223*x224)));

	if (t39 != 937487119LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x229 = 613697853997759LL;
	int8_t x231 = -1;
	int8_t x232 = INT8_MIN;

	t40 = (x229^(x230==(x231*x232)));

	if (t40 != 613697853997759LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x233 = 2U;
	volatile int8_t x234 = 0;
	uint64_t x235 = 7584867098LLU;
	volatile int64_t x236 = INT64_MIN;
	static int32_t t41 = -70;

	t41 = (x233^(x234==(x235*x236)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t42 = 213;

	t42 = (x237^(x238==(x239*x240)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x241 = INT64_MIN;
	uint16_t x244 = 1U;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x241^(x242==(x243*x244)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x245 = INT32_MIN;
	int16_t x247 = -1;
	uint8_t x248 = 2U;

	t44 = (x245^(x246==(x247*x248)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x253 = 1;
	volatile int32_t t45 = -102949;

	t45 = (x253^(x254==(x255*x256)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x257 = UINT32_MAX;
	volatile int16_t x258 = INT16_MIN;
	static int32_t x259 = -1;
	static volatile uint32_t t46 = UINT32_MAX;

	t46 = (x257^(x258==(x259*x260)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x261 = INT8_MIN;
	volatile int64_t x262 = 44715550LL;
	uint64_t x263 = UINT64_MAX;
	static int8_t x264 = INT8_MIN;

	t47 = (x261^(x262==(x263*x264)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 87379863LLU;
	static int32_t x268 = INT32_MIN;
	static int32_t t48 = INT32_MIN;

	t48 = (x265^(x266==(x267*x268)));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x270 = UINT8_MAX;
	static int64_t x271 = 525LL;
	int8_t x272 = INT8_MAX;
	static uint64_t t49 = 0LLU;

	t49 = (x269^(x270==(x271*x272)));

	if (t49 != 22883133LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x275 = 1389058U;
	int32_t t50 = 3;

	t50 = (x273^(x274==(x275*x276)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = -1;
	int64_t x278 = INT64_MAX;
	int32_t x279 = -1;
	volatile int32_t t51 = -11;

	t51 = (x277^(x278==(x279*x280)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x281 = INT64_MIN;
	uint64_t x282 = 14631177189LLU;
	int64_t x283 = INT64_MIN;
	int8_t x284 = 0;
	int64_t t52 = INT64_MIN;

	t52 = (x281^(x282==(x283*x284)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = INT8_MIN;
	volatile uint8_t x287 = 1U;
	volatile int32_t t53 = 7;

	t53 = (x285^(x286==(x287*x288)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x289 = 99341284;
	uint32_t x290 = 31007U;
	volatile int64_t x291 = -1012243495639LL;

	t54 = (x289^(x290==(x291*x292)));

	if (t54 != 99341284) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x293 = INT16_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	int32_t x295 = 9698121;
	int8_t x296 = INT8_MAX;
	static int32_t t55 = -1;

	t55 = (x293^(x294==(x295*x296)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x299 = 0;
	volatile int64_t x300 = -1584312785633LL;
	static int32_t t56 = -11;

	t56 = (x297^(x298==(x299*x300)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = INT16_MAX;
	uint8_t x302 = UINT8_MAX;
	static uint64_t x303 = 107274683LLU;
	static uint64_t x304 = 2371916LLU;

	t57 = (x301^(x302==(x303*x304)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MAX;
	int64_t x312 = -84LL;
	uint64_t t58 = UINT64_MAX;

	t58 = (x309^(x310==(x311*x312)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x314 = 4818U;
	static int64_t x315 = -1LL;
	volatile int64_t x316 = -4130023898903227421LL;
	volatile uint64_t t59 = 519LLU;

	t59 = (x313^(x314==(x315*x316)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x318 = 1;
	uint8_t x319 = 97U;
	uint8_t x320 = 8U;

	t60 = (x317^(x318==(x319*x320)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x323 = 27550613U;
	static volatile int16_t x324 = INT16_MAX;

	t61 = (x321^(x322==(x323*x324)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x326 = -1LL;
	int16_t x328 = INT16_MIN;

	t62 = (x325^(x326==(x327*x328)));

	if (t62 != 28067) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x329 = -260919774LL;
	int64_t x331 = 42LL;
	int16_t x332 = 13046;
	volatile int64_t t63 = -555454498LL;

	t63 = (x329^(x330==(x331*x332)));

	if (t63 != -260919774LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int16_t x340 = -10457;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x337^(x338==(x339*x340)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	static uint16_t x347 = 88U;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x345^(x346==(x347*x348)));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x350 = -294;
	uint32_t x351 = 12U;
	uint32_t x352 = 17U;
	int64_t t66 = INT64_MAX;

	t66 = (x349^(x350==(x351*x352)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x353 = 776279413885901LLU;
	uint64_t x354 = 453LLU;
	static uint16_t x356 = 0U;
	volatile uint64_t t67 = 52233220198LLU;

	t67 = (x353^(x354==(x355*x356)));

	if (t67 != 776279413885901LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x362 = INT8_MAX;
	int64_t x364 = -1696491LL;

	t68 = (x361^(x362==(x363*x364)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = 497211506LLU;
	int16_t x380 = INT16_MIN;
	volatile int32_t t69 = -789;

	t69 = (x377^(x378==(x379*x380)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x381 = 58U;
	static int64_t x382 = -1LL;
	volatile uint64_t x383 = 331698108593889548LLU;
	int32_t x384 = INT32_MAX;
	int32_t t70 = -877042;

	t70 = (x381^(x382==(x383*x384)));

	if (t70 != 58) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x385 = 85U;
	uint16_t x386 = 38U;
	static volatile int32_t t71 = 367;

	t71 = (x385^(x386==(x387*x388)));

	if (t71 != 85) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int16_t x402 = -458;
	static int16_t x403 = INT16_MIN;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x401^(x402==(x403*x404)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x406 = INT64_MIN;
	volatile int16_t x407 = INT16_MAX;
	static int64_t t73 = INT64_MAX;

	t73 = (x405^(x406==(x407*x408)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	volatile int16_t x412 = INT16_MAX;
	int64_t t74 = 66LL;

	t74 = (x409^(x410==(x411*x412)));

	if (t74 != 41454532LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x413 = -1;
	uint16_t x415 = UINT16_MAX;
	uint32_t x416 = UINT32_MAX;
	static int32_t t75 = 26047122;

	t75 = (x413^(x414==(x415*x416)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x417 = 1;
	int64_t x418 = INT64_MIN;
	static int8_t x420 = INT8_MIN;
	volatile int32_t t76 = 30071378;

	t76 = (x417^(x418==(x419*x420)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = -1;
	int8_t x422 = -19;
	int8_t x423 = 10;
	uint16_t x424 = 49U;
	static int32_t t77 = 504960;

	t77 = (x421^(x422==(x423*x424)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x429 = INT64_MAX;
	static uint64_t x430 = 136LLU;
	int8_t x431 = INT8_MAX;
	int16_t x432 = -1;
	int64_t t78 = INT64_MAX;

	t78 = (x429^(x430==(x431*x432)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x434 = INT32_MAX;
	int64_t x435 = INT64_MIN;
	uint64_t x436 = 985412LLU;
	volatile int32_t t79 = 255752035;

	t79 = (x433^(x434==(x435*x436)));

	if (t79 != -22) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x439 = -1;
	volatile int32_t t80 = 0;

	t80 = (x437^(x438==(x439*x440)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = INT64_MAX;
	uint8_t x446 = 53U;
	int16_t x447 = -1;
	static int64_t t81 = INT64_MAX;

	t81 = (x445^(x446==(x447*x448)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x450 = INT32_MIN;
	volatile int16_t x452 = -618;
	int64_t t82 = INT64_MIN;

	t82 = (x449^(x450==(x451*x452)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x457 = INT8_MIN;
	volatile int8_t x458 = 4;
	static volatile int32_t t83 = 3819938;

	t83 = (x457^(x458==(x459*x460)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x462 = INT64_MIN;
	uint16_t x463 = 18U;
	static int64_t x464 = -6495637805712970LL;

	t84 = (x461^(x462==(x463*x464)));

	if (t84 != -33547895517LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x465 = INT16_MIN;
	static int64_t x466 = -1076111943980LL;
	int8_t x467 = -1;
	uint8_t x468 = UINT8_MAX;
	static volatile int32_t t85 = -202876256;

	t85 = (x465^(x466==(x467*x468)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x470 = 250U;
	uint64_t x471 = 559114069682821875LLU;
	int8_t x472 = INT8_MAX;
	volatile int32_t t86 = -89708869;

	t86 = (x469^(x470==(x471*x472)));

	if (t86 != -81926) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x473 = INT16_MIN;
	int64_t x474 = INT64_MAX;
	int16_t x475 = INT16_MIN;
	static volatile int8_t x476 = INT8_MIN;

	t87 = (x473^(x474==(x475*x476)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = INT64_MIN;
	int8_t x482 = INT8_MAX;
	int64_t x483 = 341580LL;
	int8_t x484 = 29;
	int64_t t88 = INT64_MIN;

	t88 = (x481^(x482==(x483*x484)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x487 = INT8_MIN;
	uint16_t x488 = 0U;
	static uint32_t t89 = UINT32_MAX;

	t89 = (x485^(x486==(x487*x488)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x489 = -1;
	volatile uint16_t x490 = 6854U;
	static volatile uint16_t x491 = 42U;
	static volatile int16_t x492 = INT16_MIN;
	int32_t t90 = -1;

	t90 = (x489^(x490==(x491*x492)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x501 = UINT32_MAX;
	static volatile int8_t x502 = -1;
	static int16_t x503 = INT16_MAX;
	volatile int16_t x504 = -1;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x501^(x502==(x503*x504)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x505 = 3837;
	static int64_t x506 = -1LL;
	volatile int32_t t92 = 1;

	t92 = (x505^(x506==(x507*x508)));

	if (t92 != 3837) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x510 = UINT64_MAX;
	int16_t x512 = INT16_MIN;
	int32_t t93 = 27968268;

	t93 = (x509^(x510==(x511*x512)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = -1LL;
	static int8_t x514 = INT8_MIN;
	static int16_t x515 = -3;
	int32_t x516 = 528172814;

	t94 = (x513^(x514==(x515*x516)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x521 = 244828240U;
	int16_t x523 = INT16_MAX;
	uint8_t x524 = UINT8_MAX;

	t95 = (x521^(x522==(x523*x524)));

	if (t95 != 244828240U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x527 = INT16_MIN;
	uint16_t x528 = 1701U;
	static int64_t t96 = INT64_MIN;

	t96 = (x525^(x526==(x527*x528)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x529 = 230088064764581LLU;
	int32_t x530 = INT32_MAX;
	int64_t x531 = INT64_MAX;
	uint64_t x532 = 2576478341930078LLU;
	static uint64_t t97 = 5476182LLU;

	t97 = (x529^(x530==(x531*x532)));

	if (t97 != 230088064764581LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x537 = 4U;
	int8_t x538 = INT8_MIN;
	uint16_t x539 = UINT16_MAX;
	int16_t x540 = -21;
	static volatile int32_t t98 = 1777;

	t98 = (x537^(x538==(x539*x540)));

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x545 = -70LL;
	int8_t x546 = 1;
	uint16_t x547 = 1227U;
	int8_t x548 = 49;
	int64_t t99 = 1730050440267889978LL;

	t99 = (x545^(x546==(x547*x548)));

	if (t99 != -70LL) { NG(); } else { ; }
	
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

