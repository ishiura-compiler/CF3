#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 64U;
uint8_t x7 = 45U;
volatile int32_t x8 = 31711;
static uint8_t x10 = 23U;
uint16_t x11 = 8U;
uint32_t t2 = 200168884U;
static int64_t x22 = INT64_MIN;
int32_t t4 = 1;
static volatile uint64_t t5 = 327090234LLU;
uint16_t x47 = UINT16_MAX;
uint32_t t7 = 14482344U;
static uint16_t x52 = 7U;
volatile int64_t t9 = 264825365LL;
static int32_t x65 = -1;
int64_t x66 = INT64_MIN;
int16_t x67 = INT16_MAX;
static int32_t x70 = -397291572;
int32_t x71 = -1;
int8_t x73 = INT8_MAX;
int16_t x74 = 296;
static int16_t x75 = 4;
int64_t x76 = -1LL;
int64_t t13 = -2035959814150LL;
int32_t x82 = INT32_MIN;
int16_t x84 = INT16_MIN;
int64_t x87 = -2008781026LL;
int16_t x88 = -1;
int16_t x99 = 2;
static int32_t t18 = 647701206;
uint32_t x117 = 15U;
uint32_t x121 = UINT32_MAX;
static volatile int64_t x125 = 93LL;
int64_t x128 = -1LL;
volatile int64_t t22 = -3896628462577136418LL;
uint8_t x130 = 11U;
int8_t x131 = 1;
int64_t x149 = 2270164759181LL;
volatile uint16_t x151 = UINT16_MAX;
int64_t x152 = -67973612650LL;
int16_t x153 = 389;
static int8_t x157 = -7;
volatile uint64_t x164 = UINT64_MAX;
int32_t x170 = -1;
int16_t x171 = INT16_MIN;
static uint16_t x176 = UINT16_MAX;
int32_t t31 = 1352915;
volatile uint8_t x178 = 13U;
volatile uint32_t x188 = UINT32_MAX;
uint32_t t33 = 12918419U;
int32_t x189 = -69037891;
uint64_t x190 = 54413LLU;
uint16_t x192 = 3366U;
int64_t x199 = 4413903LL;
volatile int16_t x209 = -1;
uint64_t x213 = UINT64_MAX;
volatile int32_t x221 = 2407696;
uint64_t x239 = UINT64_MAX;
static int32_t x254 = -1;
static int32_t t48 = 761;
static int64_t x269 = INT64_MAX;
volatile uint64_t x271 = 11475386723LLU;
volatile int32_t t50 = 3;
volatile int8_t x282 = -1;
uint32_t x285 = 436935U;
static int16_t x287 = INT16_MAX;
int32_t t52 = -471047;
int16_t x292 = -1;
uint16_t x299 = 23044U;
int32_t x307 = -31586261;
volatile uint64_t t56 = 179856124LLU;
volatile int64_t x315 = INT64_MIN;
static int16_t x325 = INT16_MIN;
int64_t t61 = 3140835171LL;
int16_t x353 = INT16_MAX;
int32_t x362 = INT32_MIN;
uint64_t x364 = UINT64_MAX;
uint64_t t64 = 536LLU;
uint32_t x365 = 11U;
int16_t x369 = INT16_MAX;
static volatile uint16_t x372 = UINT16_MAX;
static int16_t x378 = 13121;
uint64_t x379 = 1289612239533321050LLU;
static volatile int64_t t68 = 1LL;
uint64_t t69 = 102939835LLU;
static uint32_t x399 = 120639U;
int64_t x400 = -1LL;
int64_t x404 = 1005LL;
uint32_t x405 = 957904U;
int32_t t72 = -16;
int32_t t73 = 92972677;
int16_t x422 = -1;
static uint64_t x429 = 1LLU;
uint64_t x431 = UINT64_MAX;
int16_t x435 = -1;
int32_t x447 = INT32_MAX;
volatile int32_t t79 = 1;
uint16_t x455 = UINT16_MAX;
int32_t t80 = -9974;
uint32_t t81 = 49636U;
int64_t x473 = INT64_MIN;
int32_t x474 = INT32_MAX;
int32_t t84 = 20292201;
static int64_t x490 = INT64_MAX;
int64_t x491 = -1LL;
volatile int64_t t86 = -10617991566400LL;
int16_t x513 = INT16_MAX;
uint32_t x517 = 84693U;
volatile int8_t x527 = -1;
uint8_t x544 = 80U;
static uint64_t x555 = UINT64_MAX;
uint32_t x560 = UINT32_MAX;
uint32_t t95 = 3U;
int16_t x561 = -1;
uint16_t x573 = 6268U;
uint64_t x574 = 46432857LLU;
int8_t x575 = INT8_MIN;
volatile int16_t x576 = INT16_MAX;


void f0(void) {
	int8_t x2 = -1;
	uint64_t x3 = 7861453LLU;
	int8_t x4 = -1;
	static uint64_t t0 = 1535638760LLU;

	t0 = ((x1<=x2)/(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MIN;
	int32_t t1 = 912417119;

	t1 = ((x5<=x6)/(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	uint32_t x12 = 8000500U;

	t2 = ((x9<=x10)/(x11*x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = -1LL;
	int32_t x18 = -1;
	int32_t x19 = -1;
	int8_t x20 = INT8_MAX;
	static volatile int32_t t3 = -38579509;

	t3 = ((x17<=x18)/(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int16_t x23 = -1;
	int32_t x24 = 273803763;

	t4 = ((x21<=x22)/(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	static uint32_t x26 = 0U;
	uint32_t x27 = 251129U;
	uint64_t x28 = UINT64_MAX;

	t5 = ((x25<=x26)/(x27*x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = -1;
	uint8_t x42 = 34U;
	volatile int8_t x43 = INT8_MIN;
	static uint16_t x44 = UINT16_MAX;
	static int32_t t6 = -439;

	t6 = ((x41<=x42)/(x43*x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	uint32_t x48 = 9816350U;

	t7 = ((x45<=x46)/(x47*x48));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = 1;
	uint64_t x51 = 2951380LLU;
	static volatile uint64_t t8 = 16580602863LLU;

	t8 = ((x49<=x50)/(x51*x52));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MIN;
	static volatile int16_t x55 = INT16_MIN;
	int64_t x56 = 227454893520540LL;

	t9 = ((x53<=x54)/(x55*x56));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 3082U;
	int16_t x58 = INT16_MAX;
	int16_t x59 = -1;
	volatile int16_t x60 = -5495;
	volatile int32_t t10 = 6678953;

	t10 = ((x57<=x58)/(x59*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x68 = -40;
	int32_t t11 = 8264187;

	t11 = ((x65<=x66)/(x67*x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x69 = INT64_MIN;
	uint8_t x72 = UINT8_MAX;
	static int32_t t12 = -14936484;

	t12 = ((x69<=x70)/(x71*x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {


	t13 = ((x73<=x74)/(x75*x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x81 = INT64_MIN;
	uint8_t x83 = 11U;
	volatile int32_t t14 = 185;

	t14 = ((x81<=x82)/(x83*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int8_t x86 = INT8_MIN;
	int64_t t15 = 625716572389LL;

	t15 = ((x85<=x86)/(x87*x88));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = -7047;
	int8_t x92 = -3;
	volatile int32_t t16 = -392;

	t16 = ((x89<=x90)/(x91*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x93 = INT8_MAX;
	int8_t x94 = INT8_MAX;
	static volatile int8_t x95 = INT8_MAX;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t17 = 214260;

	t17 = ((x93<=x94)/(x95*x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	static int16_t x100 = INT16_MIN;

	t18 = ((x97<=x98)/(x99*x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = 1;
	static uint64_t t19 = 647LLU;

	t19 = ((x101<=x102)/(x103*x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	int64_t x120 = 9700887763LL;
	int64_t t20 = -55058663LL;

	t20 = ((x117<=x118)/(x119*x120));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	int32_t x124 = -12;
	static int32_t t21 = -10335;

	t21 = ((x121<=x122)/(x123*x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x126 = INT16_MAX;
	static uint32_t x127 = 3201U;

	t22 = ((x125<=x126)/(x127*x128));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = 18U;
	static int32_t x132 = INT32_MAX;
	volatile int32_t t23 = -287;

	t23 = ((x129<=x130)/(x131*x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = -28630399;
	volatile int8_t x138 = INT8_MIN;
	int32_t x139 = 179;
	int8_t x140 = INT8_MAX;
	int32_t t24 = -400163306;

	t24 = ((x137<=x138)/(x139*x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x150 = 377;
	int64_t t25 = -17LL;

	t25 = ((x149<=x150)/(x151*x152));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x154 = 1889U;
	static volatile int8_t x155 = -1;
	int8_t x156 = INT8_MIN;
	int32_t t26 = 2222700;

	t26 = ((x153<=x154)/(x155*x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x158 = UINT8_MAX;
	volatile uint8_t x159 = UINT8_MAX;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t27 = 3388424;

	t27 = ((x157<=x158)/(x159*x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = 4771U;
	volatile int32_t x162 = 1651;
	int64_t x163 = -1LL;
	uint64_t t28 = 2087975779801511LLU;

	t28 = ((x161<=x162)/(x163*x164));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x165 = 6060729976032181LL;
	int32_t x166 = INT32_MIN;
	static volatile uint64_t x167 = UINT64_MAX;
	int64_t x168 = INT64_MIN;
	static volatile uint64_t t29 = 11576545842985LLU;

	t29 = ((x165<=x166)/(x167*x168));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x172 = 13U;
	static int32_t t30 = 3;

	t30 = ((x169<=x170)/(x171*x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = -1;
	static int16_t x175 = 9;

	t31 = ((x173<=x174)/(x175*x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x177 = 1U;
	static uint64_t x179 = UINT64_MAX;
	volatile uint8_t x180 = UINT8_MAX;
	static uint64_t t32 = 122029LLU;

	t32 = ((x177<=x178)/(x179*x180));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = 5;
	static int64_t x186 = INT64_MIN;
	int16_t x187 = -1;

	t33 = ((x185<=x186)/(x187*x188));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x191 = -19;
	static volatile int32_t t34 = -74107;

	t34 = ((x189<=x190)/(x191*x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x197 = -467204291023367LL;
	volatile int8_t x198 = -1;
	int32_t x200 = INT32_MIN;
	static int64_t t35 = 6076940756LL;

	t35 = ((x197<=x198)/(x199*x200));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = -1LL;
	static uint64_t x202 = 4269619331454412LLU;
	uint64_t x203 = 3542318LLU;
	uint64_t x204 = 479234317270427778LLU;
	volatile uint64_t t36 = 588699LLU;

	t36 = ((x201<=x202)/(x203*x204));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x210 = INT32_MIN;
	static int16_t x211 = -1;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t37 = 568;

	t37 = ((x209<=x210)/(x211*x212));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x214 = UINT64_MAX;
	uint8_t x215 = 1U;
	uint32_t x216 = 24783743U;
	uint32_t t38 = 556U;

	t38 = ((x213<=x214)/(x215*x216));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = INT8_MIN;
	static int64_t x218 = -1LL;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t39 = -141933;

	t39 = ((x217<=x218)/(x219*x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x222 = 165U;
	volatile int32_t x223 = INT32_MIN;
	uint64_t x224 = 8901732738781044LLU;
	volatile uint64_t t40 = 5LLU;

	t40 = ((x221<=x222)/(x223*x224));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x225 = -13650;
	volatile int32_t x226 = -1;
	int32_t x227 = 4;
	uint64_t x228 = 22659LLU;
	static volatile uint64_t t41 = 204615672845LLU;

	t41 = ((x225<=x226)/(x227*x228));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x229 = 1U;
	uint16_t x230 = 14093U;
	volatile uint8_t x231 = 7U;
	static uint16_t x232 = UINT16_MAX;
	int32_t t42 = -110;

	t42 = ((x229<=x230)/(x231*x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x237 = 4U;
	volatile int16_t x238 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	static uint64_t t43 = 33995032188208LLU;

	t43 = ((x237<=x238)/(x239*x240));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x241 = 148LLU;
	uint64_t x242 = UINT64_MAX;
	volatile uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = 11;
	volatile uint32_t t44 = 113148U;

	t44 = ((x241<=x242)/(x243*x244));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int8_t x255 = 4;
	int8_t x256 = INT8_MIN;
	volatile int32_t t45 = 4;

	t45 = ((x253<=x254)/(x255*x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x257 = 4994943427994554988LLU;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = 1431U;
	int16_t x260 = INT16_MIN;
	static volatile uint32_t t46 = 21862U;

	t46 = ((x257<=x258)/(x259*x260));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x261 = 957316170107963403LLU;
	volatile uint64_t x262 = 59614LLU;
	static int16_t x263 = INT16_MAX;
	int32_t x264 = 55;
	volatile int32_t t47 = -1362;

	t47 = ((x261<=x262)/(x263*x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	static volatile int16_t x267 = INT16_MIN;
	static int8_t x268 = -1;

	t48 = ((x265<=x266)/(x267*x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x270 = 6760249521LLU;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t49 = 2330459242972LLU;

	t49 = ((x269<=x270)/(x271*x272));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x277 = 452101562;
	int8_t x278 = INT8_MAX;
	uint16_t x279 = 14737U;
	volatile uint8_t x280 = 7U;

	t50 = ((x277<=x278)/(x279*x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x281 = 39U;
	int8_t x283 = INT8_MAX;
	int16_t x284 = INT16_MAX;
	int32_t t51 = 3;

	t51 = ((x281<=x282)/(x283*x284));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x286 = UINT8_MAX;
	uint16_t x288 = UINT16_MAX;

	t52 = ((x285<=x286)/(x287*x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x289 = -6128;
	int32_t x290 = INT32_MIN;
	volatile int32_t x291 = -1;
	volatile int32_t t53 = -1561;

	t53 = ((x289<=x290)/(x291*x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x293 = -445518663;
	uint64_t x294 = 6LLU;
	volatile int16_t x295 = 16265;
	int8_t x296 = -1;
	int32_t t54 = -239839391;

	t54 = ((x293<=x294)/(x295*x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = -1;
	int64_t x300 = 249052194601501LL;
	int64_t t55 = -1005251254366LL;

	t55 = ((x297<=x298)/(x299*x300));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x305 = 630053678U;
	int64_t x306 = 242453810999136644LL;
	volatile uint64_t x308 = UINT64_MAX;

	t56 = ((x305<=x306)/(x307*x308));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x309 = 8LLU;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = -2;
	int32_t t57 = -32322;

	t57 = ((x309<=x310)/(x311*x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x313 = 4254422LL;
	int16_t x314 = INT16_MIN;
	uint64_t x316 = 1773006923293LLU;
	volatile uint64_t t58 = 44321621LLU;

	t58 = ((x313<=x314)/(x315*x316));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = 698645514LLU;
	static int32_t x319 = 1901509;
	int16_t x320 = -1;
	int32_t t59 = 31;

	t59 = ((x317<=x318)/(x319*x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MAX;
	int16_t x328 = -1;
	int32_t t60 = 28722953;

	t60 = ((x325<=x326)/(x327*x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = -60315541288137152LL;
	int8_t x334 = -22;
	int64_t x335 = INT64_MAX;
	int16_t x336 = -1;

	t61 = ((x333<=x334)/(x335*x336));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x354 = -139;
	int8_t x355 = INT8_MAX;
	int16_t x356 = -1;
	int32_t t62 = -167922341;

	t62 = ((x353<=x354)/(x355*x356));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x357 = INT8_MAX;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	static volatile int16_t x360 = -1;
	static int32_t t63 = 355353;

	t63 = ((x357<=x358)/(x359*x360));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x361 = 3436579117773LLU;
	int16_t x363 = INT16_MAX;

	t64 = ((x361<=x362)/(x363*x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x366 = INT32_MIN;
	int64_t x367 = -1LL;
	static uint32_t x368 = 368U;
	volatile int64_t t65 = 41767537338025LL;

	t65 = ((x365<=x366)/(x367*x368));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x370 = -1;
	uint8_t x371 = 13U;
	static volatile int32_t t66 = 3698;

	t66 = ((x369<=x370)/(x371*x372));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x377 = INT8_MIN;
	static int32_t x380 = INT32_MIN;
	uint64_t t67 = 16492927693784329LLU;

	t67 = ((x377<=x378)/(x379*x380));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;
	int16_t x388 = -63;

	t68 = ((x385<=x386)/(x387*x388));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x393 = 0U;
	int8_t x394 = 1;
	int32_t x395 = -1;
	uint64_t x396 = 3LLU;

	t69 = ((x393<=x394)/(x395*x396));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x397 = 82234784108LLU;
	static uint16_t x398 = 6296U;
	int64_t t70 = 0LL;

	t70 = ((x397<=x398)/(x399*x400));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x401 = UINT32_MAX;
	uint16_t x402 = 11458U;
	uint32_t x403 = 27421953U;
	int64_t t71 = 1885014558779847672LL;

	t71 = ((x401<=x402)/(x403*x404));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x406 = 1;
	uint16_t x407 = 13U;
	int16_t x408 = 122;

	t72 = ((x405<=x406)/(x407*x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x409 = 2735;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = -22;
	int16_t x412 = INT16_MIN;

	t73 = ((x409<=x410)/(x411*x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x413 = INT32_MIN;
	static uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MAX;
	int16_t x416 = INT16_MIN;
	volatile int32_t t74 = -14171;

	t74 = ((x413<=x414)/(x415*x416));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x417 = 0;
	uint64_t x418 = 7554803357LLU;
	uint16_t x419 = 81U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t75 = -13458;

	t75 = ((x417<=x418)/(x419*x420));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x421 = INT32_MIN;
	uint64_t x423 = UINT64_MAX;
	static int32_t x424 = INT32_MIN;
	static volatile uint64_t t76 = 64699305LLU;

	t76 = ((x421<=x422)/(x423*x424));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x430 = UINT64_MAX;
	uint8_t x432 = 47U;
	volatile uint64_t t77 = 5271373681900603LLU;

	t77 = ((x429<=x430)/(x431*x432));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x433 = -1;
	int64_t x434 = -131LL;
	int64_t x436 = -1LL;
	static volatile int64_t t78 = -16066822366251LL;

	t78 = ((x433<=x434)/(x435*x436));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x445 = INT8_MIN;
	static volatile uint64_t x446 = 19640993151015LLU;
	volatile int8_t x448 = -1;

	t79 = ((x445<=x446)/(x447*x448));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x453 = -1;
	uint32_t x454 = 364U;
	int32_t x456 = -133;

	t80 = ((x453<=x454)/(x455*x456));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x457 = UINT16_MAX;
	int16_t x458 = INT16_MAX;
	static uint32_t x459 = 350783U;
	int32_t x460 = -3599;

	t81 = ((x457<=x458)/(x459*x460));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x465 = INT8_MIN;
	int32_t x466 = 5075;
	uint8_t x467 = 16U;
	int8_t x468 = INT8_MIN;
	int32_t t82 = -50;

	t82 = ((x465<=x466)/(x467*x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x469 = INT16_MIN;
	int8_t x470 = -1;
	uint32_t x471 = UINT32_MAX;
	static uint64_t x472 = 13549LLU;
	volatile uint64_t t83 = 969405569461336LLU;

	t83 = ((x469<=x470)/(x471*x472));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x475 = 36U;
	int32_t x476 = 14114;

	t84 = ((x473<=x474)/(x475*x476));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x477 = -40;
	uint8_t x478 = UINT8_MAX;
	static int64_t x479 = 331932137084737901LL;
	static int16_t x480 = -1;
	int64_t t85 = -6824295521531874LL;

	t85 = ((x477<=x478)/(x479*x480));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x489 = -1;
	int16_t x492 = 774;

	t86 = ((x489<=x490)/(x491*x492));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x501 = -7043606;
	uint64_t x502 = UINT64_MAX;
	int8_t x503 = INT8_MIN;
	int16_t x504 = -1;
	volatile int32_t t87 = -16209;

	t87 = ((x501<=x502)/(x503*x504));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x514 = INT32_MIN;
	volatile int64_t x515 = 922382715555LL;
	int16_t x516 = 24;
	static volatile int64_t t88 = -63064516224LL;

	t88 = ((x513<=x514)/(x515*x516));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x518 = INT16_MIN;
	static int8_t x519 = INT8_MIN;
	uint64_t x520 = UINT64_MAX;
	uint64_t t89 = 32526175LLU;

	t89 = ((x517<=x518)/(x519*x520));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x521 = 2;
	uint16_t x522 = 6U;
	static uint64_t x523 = UINT64_MAX;
	int8_t x524 = INT8_MAX;
	volatile uint64_t t90 = 1843106403603840LLU;

	t90 = ((x521<=x522)/(x523*x524));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x525 = 6LL;
	static uint32_t x526 = UINT32_MAX;
	int32_t x528 = -1;
	int32_t t91 = -14;

	t91 = ((x525<=x526)/(x527*x528));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x541 = 2917LLU;
	static int16_t x542 = INT16_MIN;
	int16_t x543 = INT16_MAX;
	int32_t t92 = -15218;

	t92 = ((x541<=x542)/(x543*x544));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x545 = -1LL;
	uint16_t x546 = 63U;
	int64_t x547 = -1LL;
	static int8_t x548 = INT8_MIN;
	int64_t t93 = -13709LL;

	t93 = ((x545<=x546)/(x547*x548));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x553 = INT16_MAX;
	uint8_t x554 = 10U;
	int64_t x556 = INT64_MAX;
	volatile uint64_t t94 = 242LLU;

	t94 = ((x553<=x554)/(x555*x556));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x557 = -35;
	int32_t x558 = -74707;
	static volatile int32_t x559 = INT32_MAX;

	t95 = ((x557<=x558)/(x559*x560));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x562 = 8749667718534LL;
	static int8_t x563 = -1;
	volatile int64_t x564 = -508618570702626LL;
	static volatile int64_t t96 = 16258228606083LL;

	t96 = ((x561<=x562)/(x563*x564));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x569 = 7948U;
	static uint8_t x570 = 15U;
	uint64_t x571 = 1088554615607283LLU;
	volatile uint32_t x572 = 156977U;
	uint64_t t97 = 1525903130943LLU;

	t97 = ((x569<=x570)/(x571*x572));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t t98 = 76;

	t98 = ((x573<=x574)/(x575*x576));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x577 = UINT16_MAX;
	static volatile uint64_t x578 = 3LLU;
	static volatile uint8_t x579 = 23U;
	uint16_t x580 = 23250U;
	int32_t t99 = -7;

	t99 = ((x577<=x578)/(x579*x580));

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

