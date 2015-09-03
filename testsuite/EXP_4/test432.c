#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
static int32_t t0 = -3;
uint8_t x14 = 4U;
uint16_t x30 = 22178U;
volatile uint8_t x35 = 3U;
volatile int64_t x52 = INT64_MAX;
uint8_t x59 = 28U;
volatile int64_t t8 = 4981622918LL;
volatile int32_t x76 = 313;
static uint64_t x87 = 201935735LLU;
static int8_t x99 = 1;
uint64_t t16 = 1344775470LLU;
int32_t x110 = INT32_MIN;
volatile int32_t t18 = -1627681;
static int32_t x117 = INT32_MIN;
uint64_t x120 = 356905962062LLU;
static int64_t x146 = 5262726672426LL;
volatile uint16_t x147 = 1U;
static volatile int32_t t24 = -8692;
static int64_t x150 = -1LL;
static int16_t x151 = INT16_MIN;
int32_t t26 = 201841;
uint32_t t27 = 90867609U;
volatile uint8_t x165 = UINT8_MAX;
int64_t x170 = -250916598941671LL;
static uint8_t x179 = 1U;
static int32_t t33 = -1934710;
static uint64_t x214 = UINT64_MAX;
int8_t x221 = -1;
uint64_t x223 = 1789099095260373LLU;
int64_t x225 = -1641713146LL;
int8_t x233 = INT8_MIN;
volatile uint16_t x234 = UINT16_MAX;
uint16_t x237 = 16232U;
volatile int32_t x257 = INT32_MIN;
volatile int8_t x272 = INT8_MIN;
static uint8_t x286 = 114U;
int16_t x289 = -7;
static uint32_t x292 = 38122620U;
int32_t t47 = 55;
int16_t x310 = -13;
uint32_t x311 = 92890U;
static int32_t x312 = -1;
int16_t x320 = 7985;
volatile int8_t x329 = INT8_MAX;
static int32_t t53 = -90;
int32_t t54 = -71070;
static volatile uint32_t x347 = 1016018U;
int64_t t55 = 852441852LL;
static int16_t x355 = -1;
int32_t x369 = 3;
uint32_t x392 = 2047969U;
uint64_t x394 = 4183632088501288863LLU;
volatile int32_t t62 = -328;
volatile uint64_t x397 = UINT64_MAX;
uint64_t t63 = 160LLU;
uint8_t x401 = 50U;
uint16_t x404 = 0U;
int32_t x410 = -6518755;
int64_t t66 = 9LL;
int8_t x413 = INT8_MAX;
volatile uint8_t x414 = UINT8_MAX;
volatile uint64_t x415 = 11436450209161495LLU;
int16_t x437 = INT16_MIN;
int32_t x440 = -1;
volatile int32_t t70 = -406;
int8_t x448 = INT8_MIN;
uint32_t x452 = 387U;
static uint8_t x454 = 5U;
int64_t x461 = -1339939351258LL;
int64_t t74 = -846230353849LL;
int16_t x466 = -467;
volatile int16_t x469 = INT16_MIN;
volatile int8_t x470 = INT8_MIN;
int32_t x473 = 2567967;
int16_t x476 = -87;
volatile int32_t t80 = -1;
int32_t t82 = 139724;
static volatile int8_t x517 = INT8_MIN;
uint16_t x518 = 34U;
int8_t x520 = 20;
int16_t x530 = -9677;
static int8_t x531 = INT8_MIN;
int8_t x532 = INT8_MAX;
int32_t t85 = 112357;
static uint8_t x534 = 0U;
static int8_t x535 = INT8_MIN;
uint16_t x538 = 4U;
uint32_t t89 = 7U;
static int32_t t90 = -897634;
volatile int32_t x565 = 279;
uint64_t x568 = UINT64_MAX;
int8_t x572 = 49;
int64_t t93 = -2827012681463LL;
volatile int32_t t97 = -577947;
int64_t x601 = INT64_MAX;
int16_t x603 = -203;
static uint32_t x608 = 59U;


void f0(void) {
	uint64_t x2 = 31896090576425LLU;
	int32_t x3 = -1;
	int8_t x4 = -7;

	t0 = (x1*(x2==(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x13 = -3474;
	static int64_t x15 = 9460605LL;
	uint16_t x16 = 8782U;
	int32_t t1 = -183;

	t1 = (x13*(x14==(x15*x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MIN;
	static int8_t x19 = -1;
	int64_t x20 = 50327299273LL;
	int32_t t2 = -194463573;

	t2 = (x17*(x18==(x19*x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 2765U;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = UINT8_MAX;
	uint64_t x24 = 2888300778166LLU;
	volatile uint32_t t3 = 11812586U;

	t3 = (x21*(x22==(x23*x24)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x29 = 3725111987623395210LLU;
	uint64_t x31 = 2984LLU;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t4 = 11623959796602924LLU;

	t4 = (x29*(x30==(x31*x32)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = 546718010;
	int64_t x34 = INT64_MAX;
	int64_t x36 = -1LL;
	int32_t t5 = 134529;

	t5 = (x33*(x34==(x35*x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = 339;
	int16_t x50 = -1;
	volatile uint64_t x51 = 11350419LLU;
	volatile int32_t t6 = -45869;

	t6 = (x49*(x50==(x51*x52)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x53 = 3U;
	int32_t x54 = 981134;
	volatile int16_t x55 = 0;
	int16_t x56 = 1;
	int32_t t7 = -3302;

	t7 = (x53*(x54==(x55*x56)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = INT64_MIN;
	volatile uint64_t x58 = 37388661483776LLU;
	int16_t x60 = INT16_MIN;

	t8 = (x57*(x58==(x59*x60)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 2U;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = UINT8_MAX;
	volatile uint32_t t9 = 2151U;

	t9 = (x69*(x70==(x71*x72)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x73 = INT16_MIN;
	uint32_t x74 = UINT32_MAX;
	static int8_t x75 = 4;
	static volatile int32_t t10 = -2520;

	t10 = (x73*(x74==(x75*x76)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x77 = INT32_MAX;
	int64_t x78 = 495LL;
	int16_t x79 = INT16_MIN;
	static uint64_t x80 = 80562958464LLU;
	int32_t t11 = -42465;

	t11 = (x77*(x78==(x79*x80)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = 88827193441213LLU;
	uint64_t x88 = 648739991783614LLU;
	volatile int32_t t12 = 3213883;

	t12 = (x85*(x86==(x87*x88)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x89 = INT64_MIN;
	static int64_t x90 = 1039LL;
	int8_t x91 = -5;
	uint16_t x92 = UINT16_MAX;
	volatile int64_t t13 = 35397694994784709LL;

	t13 = (x89*(x90==(x91*x92)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x93 = 0;
	int64_t x94 = INT64_MIN;
	uint64_t x95 = UINT64_MAX;
	static int64_t x96 = -1LL;
	int32_t t14 = -317000793;

	t14 = (x93*(x94==(x95*x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 7U;
	static uint32_t x100 = UINT32_MAX;
	static uint32_t t15 = 7398U;

	t15 = (x97*(x98==(x99*x100)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x101 = 1499447883LLU;
	uint16_t x102 = 18375U;
	int32_t x103 = 438;
	uint8_t x104 = UINT8_MAX;

	t16 = (x101*(x102==(x103*x104)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MAX;
	static volatile int16_t x107 = INT16_MIN;
	volatile uint8_t x108 = 2U;
	volatile int32_t t17 = -25;

	t17 = (x105*(x106==(x107*x108)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x109 = 1U;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = UINT8_MAX;

	t18 = (x109*(x110==(x111*x112)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x113 = 26U;
	int64_t x114 = INT64_MAX;
	int8_t x115 = INT8_MAX;
	int32_t x116 = -1;
	static volatile int32_t t19 = 0;

	t19 = (x113*(x114==(x115*x116)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x118 = UINT64_MAX;
	uint64_t x119 = 16043814627LLU;
	static volatile int32_t t20 = -670;

	t20 = (x117*(x118==(x119*x120)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 1615151844LLU;
	uint8_t x122 = 0U;
	uint32_t x123 = 138U;
	uint8_t x124 = 98U;
	uint64_t t21 = 194496941LLU;

	t21 = (x121*(x122==(x123*x124)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = INT16_MIN;
	uint16_t x126 = 22U;
	uint16_t x127 = 1180U;
	static int16_t x128 = INT16_MAX;
	int32_t t22 = -1023710653;

	t22 = (x125*(x126==(x127*x128)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = -1;
	uint64_t x139 = 677883120545713592LLU;
	int32_t x140 = INT32_MAX;
	int64_t t23 = -41LL;

	t23 = (x137*(x138==(x139*x140)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = 419U;
	static uint8_t x148 = 3U;

	t24 = (x145*(x146==(x147*x148)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x149 = INT32_MIN;
	int8_t x152 = -1;
	static volatile int32_t t25 = 257342;

	t25 = (x149*(x150==(x151*x152)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	int8_t x159 = -26;
	uint64_t x160 = 64938688358017LLU;

	t26 = (x157*(x158==(x159*x160)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x161 = 795U;
	static int16_t x162 = -15;
	uint16_t x163 = 1U;
	int16_t x164 = INT16_MIN;

	t27 = (x161*(x162==(x163*x164)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x166 = INT16_MIN;
	int32_t x167 = 15088;
	volatile uint8_t x168 = 44U;
	volatile int32_t t28 = 8748;

	t28 = (x165*(x166==(x167*x168)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	volatile int64_t t29 = -998LL;

	t29 = (x169*(x170==(x171*x172)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = INT32_MIN;
	volatile int8_t x174 = INT8_MAX;
	volatile uint32_t x175 = 1087U;
	int32_t x176 = INT32_MIN;
	int32_t t30 = 7074;

	t30 = (x173*(x174==(x175*x176)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x177 = -66902038150168063LL;
	int8_t x178 = -1;
	int8_t x180 = 50;
	static volatile int64_t t31 = -4500LL;

	t31 = (x177*(x178==(x179*x180)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = -1;
	int16_t x182 = -360;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = INT16_MAX;
	int32_t t32 = 6;

	t32 = (x181*(x182==(x183*x184)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	uint64_t x195 = 34769887554233LLU;
	int64_t x196 = -1LL;

	t33 = (x193*(x194==(x195*x196)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x213 = 163810590642832024LLU;
	int8_t x215 = 9;
	uint64_t x216 = 57940012LLU;
	static volatile uint64_t t34 = 29026349LLU;

	t34 = (x213*(x214==(x215*x216)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x222 = 5U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t35 = -9;

	t35 = (x221*(x222==(x223*x224)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x226 = 2U;
	int8_t x227 = 6;
	int8_t x228 = INT8_MIN;
	static int64_t t36 = 3927189230323416LL;

	t36 = (x225*(x226==(x227*x228)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MIN;
	volatile uint64_t x231 = 25LLU;
	int16_t x232 = 1;
	int32_t t37 = -90454;

	t37 = (x229*(x230==(x231*x232)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x235 = INT16_MIN;
	static int8_t x236 = -4;
	static volatile int32_t t38 = -4762939;

	t38 = (x233*(x234==(x235*x236)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x238 = INT8_MAX;
	volatile int64_t x239 = -465548300636255LL;
	uint8_t x240 = 8U;
	static int32_t t39 = -101786838;

	t39 = (x237*(x238==(x239*x240)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	uint16_t x247 = 201U;
	volatile uint16_t x248 = 0U;
	volatile int32_t t40 = -1853;

	t40 = (x245*(x246==(x247*x248)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = -29;
	uint8_t x251 = 24U;
	int32_t x252 = -1;
	volatile int32_t t41 = 0;

	t41 = (x249*(x250==(x251*x252)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x258 = UINT8_MAX;
	volatile uint16_t x259 = 2854U;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t42 = -378635;

	t42 = (x257*(x258==(x259*x260)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x269 = INT8_MIN;
	volatile int32_t x270 = 1000;
	uint32_t x271 = UINT32_MAX;
	int32_t t43 = -120;

	t43 = (x269*(x270==(x271*x272)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x273 = 30U;
	int32_t x274 = -1;
	uint16_t x275 = 125U;
	int8_t x276 = -4;
	volatile int32_t t44 = 197;

	t44 = (x273*(x274==(x275*x276)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x277 = 0;
	int32_t x278 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t45 = -6221;

	t45 = (x277*(x278==(x279*x280)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x285 = UINT8_MAX;
	volatile uint64_t x287 = 6753495891659718973LLU;
	int8_t x288 = INT8_MIN;
	int32_t t46 = -57;

	t46 = (x285*(x286==(x287*x288)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x290 = INT16_MIN;
	uint16_t x291 = 1U;

	t47 = (x289*(x290==(x291*x292)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = -1;
	uint32_t x299 = 3667U;
	volatile int8_t x300 = -1;
	volatile uint64_t t48 = 506974LLU;

	t48 = (x297*(x298==(x299*x300)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x301 = 7U;
	static volatile int32_t x302 = -2772;
	static uint8_t x303 = UINT8_MAX;
	uint16_t x304 = 134U;
	int32_t t49 = -7927;

	t49 = (x301*(x302==(x303*x304)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x309 = INT64_MIN;
	int64_t t50 = -29LL;

	t50 = (x309*(x310==(x311*x312)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x317 = -1;
	int64_t x318 = -1LL;
	static volatile int16_t x319 = INT16_MAX;
	volatile int32_t t51 = -37797;

	t51 = (x317*(x318==(x319*x320)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 54U;
	int64_t x323 = -1LL;
	int8_t x324 = 35;
	uint32_t t52 = 320827U;

	t52 = (x321*(x322==(x323*x324)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x330 = -24;
	static int64_t x331 = INT64_MAX;
	int32_t x332 = -1;

	t53 = (x329*(x330==(x331*x332)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x341 = INT16_MAX;
	uint16_t x342 = 14U;
	int64_t x343 = 1402769390376234LL;
	int8_t x344 = INT8_MIN;

	t54 = (x341*(x342==(x343*x344)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x345 = -145869853344LL;
	static volatile int16_t x346 = INT16_MIN;
	uint64_t x348 = 3429920014LLU;

	t55 = (x345*(x346==(x347*x348)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x353 = INT16_MIN;
	static int64_t x354 = INT64_MAX;
	volatile int64_t x356 = -1LL;
	int32_t t56 = 1949;

	t56 = (x353*(x354==(x355*x356)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x357 = 223318;
	static int64_t x358 = INT64_MAX;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = -114;
	static volatile int32_t t57 = -259831;

	t57 = (x357*(x358==(x359*x360)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x370 = 3U;
	int16_t x371 = -172;
	int16_t x372 = 5;
	int32_t t58 = -1;

	t58 = (x369*(x370==(x371*x372)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x373 = INT16_MAX;
	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = 7U;
	uint64_t x376 = 753447LLU;
	volatile int32_t t59 = 72;

	t59 = (x373*(x374==(x375*x376)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	uint32_t x387 = 1240U;
	static uint64_t x388 = 29690656503LLU;
	int32_t t60 = 42202409;

	t60 = (x385*(x386==(x387*x388)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x389 = 1320399;
	static int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MIN;
	int32_t t61 = 15;

	t61 = (x389*(x390==(x391*x392)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x393 = 686;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -1;

	t62 = (x393*(x394==(x395*x396)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x398 = INT32_MIN;
	uint32_t x399 = 56U;
	uint32_t x400 = 5U;

	t63 = (x397*(x398==(x399*x400)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x402 = UINT16_MAX;
	static int64_t x403 = -1LL;
	volatile int32_t t64 = 827;

	t64 = (x401*(x402==(x403*x404)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x405 = 1628888652LLU;
	volatile int16_t x406 = -1;
	int64_t x407 = INT64_MAX;
	int8_t x408 = 0;
	uint64_t t65 = 1123LLU;

	t65 = (x405*(x406==(x407*x408)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x409 = 0LL;
	int8_t x411 = -1;
	static volatile int16_t x412 = 177;

	t66 = (x409*(x410==(x411*x412)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x416 = 30;
	int32_t t67 = 899;

	t67 = (x413*(x414==(x415*x416)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x433 = INT64_MAX;
	int16_t x434 = INT16_MAX;
	static int8_t x435 = 36;
	int64_t x436 = -1LL;
	static int64_t t68 = -1041530378LL;

	t68 = (x433*(x434==(x435*x436)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x438 = INT8_MIN;
	uint16_t x439 = 25U;
	static volatile int32_t t69 = -890035;

	t69 = (x437*(x438==(x439*x440)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x441 = 18277543;
	static int32_t x442 = INT32_MIN;
	volatile uint8_t x443 = 0U;
	static int16_t x444 = 25;

	t70 = (x441*(x442==(x443*x444)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = -1;
	uint8_t x447 = 13U;
	volatile int32_t t71 = 2;

	t71 = (x445*(x446==(x447*x448)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x449 = INT8_MAX;
	uint32_t x450 = 6U;
	uint64_t x451 = UINT64_MAX;
	static volatile int32_t t72 = -6444216;

	t72 = (x449*(x450==(x451*x452)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x453 = -1;
	volatile uint8_t x455 = 124U;
	uint32_t x456 = 1903U;
	int32_t t73 = 870149;

	t73 = (x453*(x454==(x455*x456)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x462 = INT8_MIN;
	int64_t x463 = 28028923151494197LL;
	volatile uint64_t x464 = 6714811501728154LLU;

	t74 = (x461*(x462==(x463*x464)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x465 = 130501189472795LLU;
	static uint32_t x467 = UINT32_MAX;
	int32_t x468 = -1;
	static uint64_t t75 = 479LLU;

	t75 = (x465*(x466==(x467*x468)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x471 = 5140U;
	volatile uint8_t x472 = UINT8_MAX;
	static int32_t t76 = 195;

	t76 = (x469*(x470==(x471*x472)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x474 = 78;
	int16_t x475 = 483;
	static int32_t t77 = -8218592;

	t77 = (x473*(x474==(x475*x476)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x481 = 202809842LLU;
	volatile int8_t x482 = INT8_MIN;
	int64_t x483 = 929673836LL;
	int32_t x484 = -17707394;
	uint64_t t78 = 19363120LLU;

	t78 = (x481*(x482==(x483*x484)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x489 = -16423546;
	uint16_t x490 = 0U;
	volatile uint16_t x491 = 1U;
	int64_t x492 = -508LL;
	volatile int32_t t79 = -23428173;

	t79 = (x489*(x490==(x491*x492)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x493 = UINT8_MAX;
	int16_t x494 = INT16_MIN;
	int64_t x495 = -1LL;
	static int8_t x496 = INT8_MIN;

	t80 = (x493*(x494==(x495*x496)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x505 = 3243U;
	static int64_t x506 = INT64_MIN;
	static volatile uint16_t x507 = 299U;
	int8_t x508 = INT8_MIN;
	volatile uint32_t t81 = 3742U;

	t81 = (x505*(x506==(x507*x508)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x509 = INT8_MIN;
	int8_t x510 = -1;
	static int8_t x511 = INT8_MIN;
	volatile int16_t x512 = -1;

	t82 = (x509*(x510==(x511*x512)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x513 = INT64_MIN;
	uint32_t x514 = 132438U;
	int16_t x515 = INT16_MIN;
	uint8_t x516 = 9U;
	volatile int64_t t83 = -12779445150LL;

	t83 = (x513*(x514==(x515*x516)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x519 = 105U;
	volatile int32_t t84 = 2233573;

	t84 = (x517*(x518==(x519*x520)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x529 = 3U;

	t85 = (x529*(x530==(x531*x532)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x533 = -1;
	static uint32_t x536 = 56238914U;
	static volatile int32_t t86 = 9457;

	t86 = (x533*(x534==(x535*x536)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x537 = -1;
	volatile int16_t x539 = INT16_MAX;
	uint32_t x540 = 12241U;
	volatile int32_t t87 = 2173;

	t87 = (x537*(x538==(x539*x540)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x541 = -1;
	uint16_t x542 = 7U;
	int16_t x543 = INT16_MIN;
	static int8_t x544 = 51;
	volatile int32_t t88 = 203826;

	t88 = (x541*(x542==(x543*x544)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x549 = 155644U;
	volatile uint8_t x550 = UINT8_MAX;
	static int16_t x551 = INT16_MIN;
	volatile int64_t x552 = -5971LL;

	t89 = (x549*(x550==(x551*x552)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x553 = INT32_MIN;
	uint64_t x554 = UINT64_MAX;
	int16_t x555 = INT16_MIN;
	int16_t x556 = -1;

	t90 = (x553*(x554==(x555*x556)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x566 = 81U;
	uint32_t x567 = UINT32_MAX;
	static volatile int32_t t91 = 1583358;

	t91 = (x565*(x566==(x567*x568)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x569 = 5;
	int64_t x570 = -2281631LL;
	volatile int8_t x571 = INT8_MAX;
	int32_t t92 = -1770;

	t92 = (x569*(x570==(x571*x572)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x573 = -1LL;
	int32_t x574 = INT32_MAX;
	uint8_t x575 = 51U;
	int16_t x576 = -1;

	t93 = (x573*(x574==(x575*x576)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x577 = -750962671LL;
	int64_t x578 = INT64_MIN;
	uint64_t x579 = 46276272738LLU;
	static int16_t x580 = 5824;
	static volatile int64_t t94 = 11112LL;

	t94 = (x577*(x578==(x579*x580)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x581 = 9U;
	int8_t x582 = 5;
	static uint64_t x583 = UINT64_MAX;
	int16_t x584 = 14;
	volatile int32_t t95 = 1;

	t95 = (x581*(x582==(x583*x584)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x585 = INT16_MIN;
	int8_t x586 = INT8_MIN;
	uint8_t x587 = 15U;
	uint64_t x588 = UINT64_MAX;
	int32_t t96 = -1;

	t96 = (x585*(x586==(x587*x588)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x597 = UINT16_MAX;
	static int8_t x598 = INT8_MAX;
	int8_t x599 = INT8_MIN;
	static int32_t x600 = -34849;

	t97 = (x597*(x598==(x599*x600)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x602 = -1;
	static uint32_t x604 = 1U;
	int64_t t98 = -122012LL;

	t98 = (x601*(x602==(x603*x604)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x605 = INT8_MAX;
	int32_t x606 = -461;
	volatile int8_t x607 = INT8_MIN;
	static int32_t t99 = 235247311;

	t99 = (x605*(x606==(x607*x608)));

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

