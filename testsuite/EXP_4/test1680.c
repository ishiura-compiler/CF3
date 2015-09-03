#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = -4;
volatile uint8_t x5 = 13U;
static int32_t x6 = 1271395;
static int32_t x8 = INT32_MIN;
int32_t t1 = -1940;
uint16_t x9 = UINT16_MAX;
static uint32_t x17 = UINT32_MAX;
int64_t x19 = 2441993036498LL;
uint32_t x22 = 33035543U;
volatile int64_t t5 = -393293900LL;
volatile uint64_t x33 = UINT64_MAX;
volatile int64_t t7 = -16782240537LL;
int16_t x52 = -424;
uint64_t t8 = 3442256352390491LLU;
int64_t x56 = -7742702656009LL;
uint8_t x58 = 13U;
volatile uint8_t x69 = 84U;
int64_t x70 = 661777311LL;
uint8_t x91 = UINT8_MAX;
volatile int64_t t16 = 2431614660333LL;
volatile uint64_t t17 = 39489LLU;
int8_t x103 = INT8_MIN;
uint64_t x111 = 408357786990924992LLU;
volatile uint64_t t20 = 526475158825LLU;
static int16_t x118 = INT16_MIN;
static volatile int64_t x119 = -1LL;
int8_t x120 = -20;
uint8_t x139 = 123U;
uint32_t x140 = 389U;
int32_t t25 = -406805414;
volatile int8_t x142 = INT8_MIN;
int8_t x155 = 6;
static uint32_t x156 = 1595457U;
int32_t x161 = -488950375;
static int64_t x167 = INT64_MIN;
uint8_t x171 = 5U;
int64_t x177 = -130523823931LL;
int32_t x180 = -1;
uint16_t x182 = 2828U;
int16_t x200 = INT16_MIN;
int32_t x202 = INT32_MIN;
volatile int8_t x213 = 1;
static volatile int32_t t41 = -1;
uint32_t x218 = UINT32_MAX;
int8_t x223 = 52;
uint32_t x224 = 2U;
static int16_t x225 = INT16_MIN;
uint8_t x226 = 123U;
int16_t x240 = 442;
int16_t x244 = INT16_MIN;
static int64_t x245 = INT64_MAX;
volatile int8_t x247 = -1;
static volatile uint64_t t47 = 55185734318LLU;
int32_t x254 = -26037311;
volatile int8_t x256 = INT8_MIN;
uint8_t x272 = 1U;
uint8_t x285 = UINT8_MAX;
uint64_t x287 = UINT64_MAX;
static int8_t x292 = INT8_MIN;
static uint64_t x298 = 2LLU;
volatile uint32_t x307 = UINT32_MAX;
volatile uint64_t t57 = 374337LLU;
int16_t x309 = INT16_MIN;
static volatile int64_t x314 = 0LL;
static uint64_t x315 = 3443727868535227651LLU;
static uint16_t x316 = UINT16_MAX;
int8_t x323 = INT8_MAX;
int32_t t61 = 91684893;
int32_t x352 = INT32_MAX;
static int32_t x359 = INT32_MIN;
volatile int8_t x362 = -1;
uint32_t x365 = UINT32_MAX;
int64_t x376 = 167141483080904024LL;
int16_t x382 = -1;
volatile uint32_t x386 = 432U;
static uint32_t t74 = 10436U;
int32_t x392 = INT32_MAX;
int32_t x394 = INT32_MIN;
uint32_t x405 = UINT32_MAX;
int8_t x406 = INT8_MIN;
int16_t x426 = -1;
int16_t x432 = INT16_MIN;
int32_t x441 = -402;
static uint16_t x442 = 13283U;
static int8_t x443 = INT8_MIN;
volatile int32_t t86 = -201;
volatile uint64_t x447 = UINT64_MAX;
volatile int32_t t87 = 9;
int32_t x455 = INT32_MIN;
uint64_t x457 = 31664847035635331LLU;
int8_t x460 = INT8_MIN;
int32_t t91 = -941275799;
int64_t x466 = 25017434814LL;
int64_t t93 = 15690600LL;
int8_t x475 = INT8_MIN;
volatile int32_t t94 = 63351790;
volatile int32_t t95 = -36263;
int32_t x489 = 1280;
int64_t x492 = -93LL;
volatile uint64_t x493 = 579LLU;
static volatile int8_t x494 = INT8_MIN;
uint8_t x504 = 3U;
int32_t x507 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	static int16_t x3 = -1;
	static uint32_t t0 = 928U;

	t0 = (x1*(x2^(x3<=x4)));

	if (t0 != 128U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = -1LL;

	t1 = (x5*(x6^(x7<=x8)));

	if (t1 != 16528135) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	uint16_t x11 = 6619U;
	int64_t x12 = -1LL;
	volatile int64_t t2 = -3655715LL;

	t2 = (x9*(x10^(x11<=x12)));

	if (t2 != -65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	uint8_t x20 = 27U;
	static volatile uint32_t t3 = 540598U;

	t3 = (x17*(x18^(x19<=x20)));

	if (t3 != 128U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 102U;
	uint16_t x23 = 1U;
	int64_t x24 = INT64_MAX;
	volatile uint32_t t4 = 1985469436U;

	t4 = (x21*(x22^(x23<=x24)));

	if (t4 != 3369625284U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	int64_t x26 = -1LL;
	static int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MIN;

	t5 = (x25*(x26^(x27<=x28)));

	if (t5 != -127LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x34 = -4926;
	uint64_t x35 = 10LLU;
	int16_t x36 = INT16_MIN;
	static volatile uint64_t t6 = 23035LLU;

	t6 = (x33*(x34^(x35<=x36)));

	if (t6 != 4925LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = -216583LL;
	volatile int64_t x47 = INT64_MAX;
	static int16_t x48 = 5996;

	t7 = (x45*(x46^(x47<=x48)));

	if (t7 != 27722624LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 11LLU;
	int64_t x50 = INT64_MAX;
	static int8_t x51 = INT8_MAX;

	t8 = (x49*(x50^(x51<=x52)));

	if (t8 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = 1035;
	int32_t x55 = INT32_MIN;
	volatile int32_t t9 = 487486;

	t9 = (x53*(x54^(x55<=x56)));

	if (t9 != 131445) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	uint32_t x59 = UINT32_MAX;
	static int8_t x60 = INT8_MAX;
	uint64_t t10 = 694985195984052946LLU;

	t10 = (x57*(x58^(x59<=x60)));

	if (t10 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x71 = UINT64_MAX;
	static volatile uint32_t x72 = UINT32_MAX;
	volatile int64_t t11 = 2LL;

	t11 = (x69*(x70^(x71<=x72)));

	if (t11 != 55589294124LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x73 = 1818;
	int8_t x74 = INT8_MAX;
	volatile uint8_t x75 = 1U;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t12 = 107243429;

	t12 = (x73*(x74^(x75<=x76)));

	if (t12 != 230886) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x77 = 428;
	uint16_t x78 = UINT16_MAX;
	static int32_t x79 = 257110210;
	int16_t x80 = INT16_MAX;
	volatile int32_t t13 = -24420643;

	t13 = (x77*(x78^(x79<=x80)));

	if (t13 != 28048980) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = 4;
	volatile uint32_t x82 = 13290064U;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t14 = 1583450U;

	t14 = (x81*(x82^(x83<=x84)));

	if (t14 != 53160260U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = 559866693LL;
	int64_t x86 = -63LL;
	volatile int32_t x87 = INT32_MIN;
	int16_t x88 = 1;
	volatile int64_t t15 = 3646757400LL;

	t15 = (x85*(x86^(x87<=x88)));

	if (t15 != -35831468352LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = 986306;
	int64_t x90 = -25385470681LL;
	volatile int16_t x92 = -1;

	t16 = (x89*(x90^(x91<=x92)));

	if (t16 != -25037842045494386LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = 1581838869263LLU;
	volatile uint32_t x94 = UINT32_MAX;
	uint32_t x95 = 743089781U;
	static int32_t x96 = -69905559;

	t17 = (x93*(x94^(x95<=x96)));

	if (t17 != 5544388737411889634LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = 1U;
	uint32_t x102 = UINT32_MAX;
	int32_t x104 = INT32_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = (x101*(x102^(x103<=x104)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x109 = -6;
	static uint64_t x110 = 1295968LLU;
	int32_t x112 = INT32_MIN;
	uint64_t t19 = 427304LLU;

	t19 = (x109*(x110^(x111<=x112)));

	if (t19 != 18446744073701775802LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = 25;
	static uint16_t x116 = 0U;

	t20 = (x113*(x114^(x115<=x116)));

	if (t20 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x117 = INT8_MIN;
	volatile int32_t t21 = 1443;

	t21 = (x117*(x118^(x119<=x120)));

	if (t21 != 4194304) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = UINT32_MAX;
	int32_t t22 = -1753;

	t22 = (x121*(x122^(x123<=x124)));

	if (t22 != -254) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x125 = UINT64_MAX;
	static volatile uint32_t x126 = 57303008U;
	int8_t x127 = -1;
	int16_t x128 = -6520;
	static uint64_t t23 = 8495LLU;

	t23 = (x125*(x126^(x127<=x128)));

	if (t23 != 18446744073652248608LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	volatile int8_t x131 = 0;
	uint64_t x132 = 215446165554LLU;
	volatile int32_t t24 = -1;

	t24 = (x129*(x130^(x131<=x132)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = -1;

	t25 = (x137*(x138^(x139<=x140)));

	if (t25 != 256) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MAX;
	uint32_t x143 = 1917475347U;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t26 = -4;

	t26 = (x141*(x142^(x143<=x144)));

	if (t26 != -4161409) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 10U;
	int32_t x146 = -22013;
	uint32_t x147 = 707591U;
	int32_t x148 = INT32_MAX;
	volatile int32_t t27 = -16958041;

	t27 = (x145*(x146^(x147<=x148)));

	if (t27 != -220140) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = -1;
	static volatile int64_t x150 = -5349843064069206LL;
	static volatile int32_t x151 = INT32_MAX;
	int8_t x152 = -1;
	static volatile int64_t t28 = 452076924581654LL;

	t28 = (x149*(x150^(x151<=x152)));

	if (t28 != 5349843064069206LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = 2;
	int32_t x154 = -1;
	int32_t t29 = -63164;

	t29 = (x153*(x154^(x155<=x156)));

	if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x157 = -1;
	uint32_t x158 = 3U;
	static uint8_t x159 = UINT8_MAX;
	uint64_t x160 = UINT64_MAX;
	uint32_t t30 = 143248435U;

	t30 = (x157*(x158^(x159<=x160)));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x162 = 1;
	volatile int16_t x163 = -1;
	int16_t x164 = 7960;
	volatile int32_t t31 = -60724011;

	t31 = (x161*(x162^(x163<=x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = UINT64_MAX;
	uint16_t x166 = 0U;
	int64_t x168 = -1LL;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x165*(x166^(x167<=x168)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = 1LL;
	uint32_t x170 = 71U;
	static volatile int8_t x172 = 1;
	int64_t t33 = 341977172LL;

	t33 = (x169*(x170^(x171<=x172)));

	if (t33 != 71LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = -1;
	int64_t x174 = -1LL;
	volatile uint64_t x175 = 3286223325757589763LLU;
	int32_t x176 = INT32_MIN;
	static volatile int64_t t34 = 63856LL;

	t34 = (x173*(x174^(x175<=x176)));

	if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	volatile int64_t t35 = -1928191732354LL;

	t35 = (x177*(x178^(x179<=x180)));

	if (t35 != 4276874138747077LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x181 = -233LL;
	volatile int32_t x183 = 107777230;
	int8_t x184 = INT8_MIN;
	volatile int64_t t36 = 428LL;

	t36 = (x181*(x182^(x183<=x184)));

	if (t36 != -658924LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	static volatile int8_t x195 = -1;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t37 = 1006LLU;

	t37 = (x193*(x194^(x195<=x196)));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = 705099LL;
	int32_t x198 = 146584;
	int8_t x199 = 0;
	int64_t t38 = 1489118759514636LL;

	t38 = (x197*(x198^(x199<=x200)));

	if (t38 != 103356231816LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = 1;
	volatile int32_t x203 = INT32_MAX;
	static volatile int32_t x204 = -181;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x201*(x202^(x203<=x204)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 5599181277673254LLU;
	int16_t x206 = 109;
	int32_t x207 = 23195;
	static volatile int8_t x208 = -4;
	volatile uint64_t t40 = 2623101387776LLU;

	t40 = (x205*(x206^(x207<=x208)));

	if (t40 != 610310759266384686LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x214 = -1;
	uint8_t x215 = 11U;
	uint16_t x216 = 205U;

	t41 = (x213*(x214^(x215<=x216)));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = -1;
	uint32_t x219 = 326686512U;
	int64_t x220 = 2867955347489553671LL;
	volatile uint32_t t42 = 4081572U;

	t42 = (x217*(x218^(x219<=x220)));

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = 224U;
	int64_t x222 = -1LL;
	volatile int64_t t43 = -14820780346636530LL;

	t43 = (x221*(x222^(x223<=x224)));

	if (t43 != -224LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x227 = UINT32_MAX;
	volatile int16_t x228 = -1;
	volatile int32_t t44 = 3;

	t44 = (x225*(x226^(x227<=x228)));

	if (t44 != -3997696) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x237 = -1527319134LL;
	volatile int16_t x238 = INT16_MIN;
	volatile int16_t x239 = INT16_MAX;
	static int64_t t45 = 359095546LL;

	t45 = (x237*(x238^(x239<=x240)));

	if (t45 != 50047193382912LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	volatile uint32_t t46 = 163439U;

	t46 = (x241*(x242^(x243<=x244)));

	if (t46 != 2147483649U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x246 = 22790LLU;
	uint64_t x248 = 397350411LLU;

	t47 = (x245*(x246^(x247<=x248)));

	if (t47 != 18446744073709528826LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = -6581LL;
	static uint32_t x250 = 132U;
	static uint8_t x251 = UINT8_MAX;
	int8_t x252 = -9;
	int64_t t48 = 268782813164523984LL;

	t48 = (x249*(x250^(x251<=x252)));

	if (t48 != -868692LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = 6466U;
	volatile int8_t x255 = INT8_MIN;
	volatile uint32_t t49 = 28393U;

	t49 = (x253*(x254^(x255<=x256)));

	if (t49 != 3441432448U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = 0U;
	volatile int16_t x258 = -10567;
	uint32_t x259 = UINT32_MAX;
	uint32_t x260 = UINT32_MAX;
	int32_t t50 = 16;

	t50 = (x257*(x258^(x259<=x260)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x269 = 2069078778LLU;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = -1;
	volatile uint64_t t51 = 2471161531047LLU;

	t51 = (x269*(x270^(x271<=x272)));

	if (t51 != 525546009612LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = INT16_MIN;
	volatile int16_t x274 = INT16_MAX;
	int8_t x275 = -1;
	int8_t x276 = INT8_MAX;
	volatile int32_t t52 = -25403992;

	t52 = (x273*(x274^(x275<=x276)));

	if (t52 != -1073676288) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x286 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	volatile int32_t t53 = 40288;

	t53 = (x285*(x286^(x287<=x288)));

	if (t53 != -32640) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = 1108LL;
	volatile int32_t x290 = 143;
	volatile uint32_t x291 = 347412796U;
	int64_t t54 = 191846240935049LL;

	t54 = (x289*(x290^(x291<=x292)));

	if (t54 != 157336LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = 859;
	volatile uint64_t x294 = UINT64_MAX;
	static uint8_t x295 = UINT8_MAX;
	uint32_t x296 = 250691920U;
	volatile uint64_t t55 = 129749055595LLU;

	t55 = (x293*(x294^(x295<=x296)));

	if (t55 != 18446744073709549898LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x297 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	static uint16_t x300 = UINT16_MAX;
	uint64_t t56 = 4459414730LLU;

	t56 = (x297*(x298^(x299<=x300)));

	if (t56 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = INT16_MIN;
	static volatile uint64_t x306 = UINT64_MAX;
	int16_t x308 = INT16_MAX;

	t57 = (x305*(x306^(x307<=x308)));

	if (t57 != 32768LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x310 = 1520;
	uint8_t x311 = 4U;
	int8_t x312 = INT8_MAX;
	int32_t t58 = -7;

	t58 = (x309*(x310^(x311<=x312)));

	if (t58 != -49840128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x313 = INT32_MIN;
	volatile int64_t t59 = 15191507997LL;

	t59 = (x313*(x314^(x315<=x316)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = -1229;
	int32_t x322 = 22610;
	int64_t x324 = INT64_MIN;
	int32_t t60 = 47016;

	t60 = (x321*(x322^(x323<=x324)));

	if (t60 != -27787690) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x329 = UINT8_MAX;
	static uint16_t x330 = 7527U;
	int32_t x331 = -1;
	uint32_t x332 = UINT32_MAX;

	t61 = (x329*(x330^(x331<=x332)));

	if (t61 != 1919130) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x333 = -1LL;
	static uint8_t x334 = UINT8_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	int64_t x336 = 56491663991043LL;
	int64_t t62 = -20036286917408LL;

	t62 = (x333*(x334^(x335<=x336)));

	if (t62 != -254LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x337 = -191952606;
	int32_t x338 = -1;
	int64_t x339 = INT64_MIN;
	uint16_t x340 = 6576U;
	volatile int32_t t63 = -158;

	t63 = (x337*(x338^(x339<=x340)));

	if (t63 != 383905212) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x341 = INT16_MIN;
	uint64_t x342 = 3717242LLU;
	int8_t x343 = 5;
	static uint16_t x344 = 0U;
	uint64_t t64 = 46443530394LLU;

	t64 = (x341*(x342^(x343<=x344)));

	if (t64 != 18446743951902965760LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x345 = 109U;
	int8_t x346 = -14;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = -1LL;
	volatile int32_t t65 = 0;

	t65 = (x345*(x346^(x347<=x348)));

	if (t65 != -1526) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x349 = -1;
	uint8_t x350 = 8U;
	int16_t x351 = 7274;
	volatile int32_t t66 = -8;

	t66 = (x349*(x350^(x351<=x352)));

	if (t66 != -9) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x353 = 0U;
	int8_t x354 = INT8_MIN;
	static volatile int16_t x355 = INT16_MIN;
	volatile int16_t x356 = INT16_MAX;
	volatile int32_t t67 = -172940344;

	t67 = (x353*(x354^(x355<=x356)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x357 = -1;
	volatile uint64_t x358 = UINT64_MAX;
	volatile uint8_t x360 = UINT8_MAX;
	static uint64_t t68 = 433268652592LLU;

	t68 = (x357*(x358^(x359<=x360)));

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x361 = 4;
	int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t69 = 2191;

	t69 = (x361*(x362^(x363<=x364)));

	if (t69 != -4) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x366 = 144;
	int8_t x367 = INT8_MIN;
	volatile uint32_t x368 = UINT32_MAX;
	volatile uint32_t t70 = 4421023U;

	t70 = (x365*(x366^(x367<=x368)));

	if (t70 != 4294967151U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x369 = 32;
	static int32_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	volatile int32_t t71 = -84116204;

	t71 = (x369*(x370^(x371<=x372)));

	if (t71 != -64) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x373 = UINT8_MAX;
	uint32_t x374 = UINT32_MAX;
	static uint64_t x375 = 3858633945600645LLU;
	volatile uint32_t t72 = 80U;

	t72 = (x373*(x374^(x375<=x376)));

	if (t72 != 4294966786U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x381 = INT16_MIN;
	int64_t x383 = -1LL;
	static uint64_t x384 = UINT64_MAX;
	int32_t t73 = 33047;

	t73 = (x381*(x382^(x383<=x384)));

	if (t73 != 65536) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x385 = INT16_MIN;
	int32_t x387 = -1;
	uint8_t x388 = 25U;

	t74 = (x385*(x386^(x387<=x388)));

	if (t74 != 4280778752U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x389 = INT16_MIN;
	static int8_t x390 = -61;
	int64_t x391 = -1LL;
	volatile int32_t t75 = -129;

	t75 = (x389*(x390^(x391<=x392)));

	if (t75 != 2031616) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x393 = 2509516559966892660LLU;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile uint64_t t76 = 52525276LLU;

	t76 = (x393*(x394^(x395<=x396)));

	if (t76 != 3273798937953792628LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x397 = 123;
	volatile int32_t x398 = 254;
	volatile int8_t x399 = -1;
	static uint64_t x400 = 37339585554LLU;
	volatile int32_t t77 = 45;

	t77 = (x397*(x398^(x399<=x400)));

	if (t77 != 31242) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x401 = -92LL;
	volatile uint16_t x402 = 172U;
	uint64_t x403 = 170295016328LLU;
	int8_t x404 = INT8_MIN;
	volatile int64_t t78 = 118821808960482LL;

	t78 = (x401*(x402^(x403<=x404)));

	if (t78 != -15916LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;
	volatile uint32_t t79 = 0U;

	t79 = (x405*(x406^(x407<=x408)));

	if (t79 != 128U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = 12790891;
	uint64_t x410 = 234LLU;
	volatile int16_t x411 = INT16_MIN;
	volatile uint8_t x412 = 19U;
	uint64_t t80 = 106897553252329383LLU;

	t80 = (x409*(x410^(x411<=x412)));

	if (t80 != 3005859385LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x417 = -1;
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t81 = 30;

	t81 = (x417*(x418^(x419<=x420)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x421 = UINT16_MAX;
	int8_t x422 = INT8_MIN;
	static uint8_t x423 = UINT8_MAX;
	uint64_t x424 = 1825635061LLU;
	static volatile int32_t t82 = -2381;

	t82 = (x421*(x422^(x423<=x424)));

	if (t82 != -8322945) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = INT8_MIN;
	volatile uint16_t x427 = UINT16_MAX;
	uint16_t x428 = 26U;
	static int32_t t83 = 1980;

	t83 = (x425*(x426^(x427<=x428)));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = 1890;
	int32_t x430 = -1;
	uint16_t x431 = 11527U;
	volatile int32_t t84 = 1772;

	t84 = (x429*(x430^(x431<=x432)));

	if (t84 != -1890) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x433 = 77;
	uint32_t x434 = 66U;
	static int64_t x435 = INT64_MIN;
	volatile int16_t x436 = INT16_MAX;
	volatile uint32_t t85 = 151027U;

	t85 = (x433*(x434^(x435<=x436)));

	if (t85 != 5159U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x444 = INT32_MIN;

	t86 = (x441*(x442^(x443<=x444)));

	if (t86 != -5339766) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x445 = INT8_MIN;
	uint16_t x446 = UINT16_MAX;
	int64_t x448 = INT64_MIN;

	t87 = (x445*(x446^(x447<=x448)));

	if (t87 != -8388480) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x449 = 5277035U;
	uint8_t x450 = 79U;
	volatile uint64_t x451 = UINT64_MAX;
	uint32_t x452 = 140972325U;
	uint32_t t88 = 152324070U;

	t88 = (x449*(x450^(x451<=x452)));

	if (t88 != 416885765U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x453 = 8U;
	static int8_t x454 = INT8_MIN;
	int16_t x456 = INT16_MIN;
	int32_t t89 = -82702506;

	t89 = (x453*(x454^(x455<=x456)));

	if (t89 != -1016) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x458 = -1;
	int64_t x459 = -7033346889611LL;
	static uint64_t t90 = 8045479372LLU;

	t90 = (x457*(x458^(x459<=x460)));

	if (t90 != 18383414379638280954LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x461 = INT16_MIN;
	int8_t x462 = 0;
	int32_t x463 = INT32_MAX;
	static int16_t x464 = INT16_MAX;

	t91 = (x461*(x462^(x463<=x464)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x465 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	static uint8_t x468 = 0U;
	volatile int64_t t92 = 9LL;

	t92 = (x465*(x466^(x467<=x468)));

	if (t92 != -3202231656320LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x469 = -157261LL;
	int16_t x470 = INT16_MAX;
	int16_t x471 = -1;
	int8_t x472 = INT8_MAX;

	t93 = (x469*(x470^(x471<=x472)));

	if (t93 != -5152813926LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = -50;
	int32_t x474 = 2056;
	volatile uint64_t x476 = 7211LLU;

	t94 = (x473*(x474^(x475<=x476)));

	if (t94 != -102800) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = -1;
	int8_t x478 = INT8_MAX;
	uint32_t x479 = 239U;
	static int64_t x480 = INT64_MIN;

	t95 = (x477*(x478^(x479<=x480)));

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x490 = 0U;
	uint16_t x491 = 839U;
	volatile int32_t t96 = -4;

	t96 = (x489*(x490^(x491<=x492)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x495 = -5;
	uint64_t x496 = 754LLU;
	volatile uint64_t t97 = 222187653911057LLU;

	t97 = (x493*(x494^(x495<=x496)));

	if (t97 != 18446744073709477504LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x501 = UINT8_MAX;
	volatile int16_t x502 = INT16_MIN;
	uint16_t x503 = 18U;
	static int32_t t98 = -732637122;

	t98 = (x501*(x502^(x503<=x504)));

	if (t98 != -8355840) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x505 = INT64_MAX;
	int32_t x506 = -1;
	volatile int16_t x508 = INT16_MIN;
	int64_t t99 = -4237412709LL;

	t99 = (x505*(x506^(x507<=x508)));

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

