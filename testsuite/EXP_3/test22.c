#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1U;
volatile int8_t x4 = INT8_MIN;
int32_t x9 = -1;
volatile uint16_t x15 = 24754U;
uint16_t x16 = 1U;
volatile int32_t t4 = -6;
uint8_t x24 = 1U;
static volatile uint32_t x25 = UINT32_MAX;
int32_t x28 = -32119192;
int32_t t6 = 793577359;
uint32_t x33 = UINT32_MAX;
int64_t x43 = -25034LL;
uint32_t x52 = 246190U;
int64_t x57 = INT64_MAX;
uint32_t x61 = 6485490U;
static int32_t t13 = -3989;
int32_t x70 = -57091;
int16_t x74 = INT16_MIN;
uint32_t x78 = 103071U;
static volatile int32_t t16 = -9687;
uint64_t x85 = 16431122677410LLU;
static volatile int8_t x86 = INT8_MIN;
int32_t t18 = 1;
int16_t x95 = INT16_MIN;
volatile int8_t x96 = INT8_MAX;
volatile int32_t t19 = -1;
static int8_t x100 = INT8_MIN;
int16_t x102 = INT16_MAX;
int32_t t21 = -13854002;
int16_t x111 = -2;
volatile uint16_t x117 = 2710U;
static int32_t x121 = 137824;
int8_t x125 = INT8_MIN;
uint32_t x126 = 1790491U;
static int16_t x127 = -1;
int8_t x131 = INT8_MAX;
static int16_t x132 = -1;
int8_t x149 = INT8_MIN;
int16_t x150 = -1;
int16_t x152 = -1;
uint16_t x158 = 1321U;
int16_t x160 = -1;
int16_t x163 = INT16_MIN;
uint32_t x165 = 465901U;
int32_t x167 = INT32_MIN;
int16_t x175 = 362;
uint32_t x186 = 331U;
int64_t x188 = 5LL;
int32_t x190 = INT32_MIN;
volatile int32_t t39 = -6;
int64_t x194 = 3844LL;
uint64_t x201 = UINT64_MAX;
uint32_t x209 = 105U;
int16_t x210 = -15;
static volatile uint64_t x212 = UINT64_MAX;
volatile uint64_t x222 = UINT64_MAX;
static uint8_t x228 = 16U;
volatile int32_t t46 = -7317153;
int16_t x254 = 289;
volatile int32_t t49 = 7877507;
uint8_t x283 = UINT8_MAX;
int32_t t54 = 120737434;
int8_t x288 = INT8_MIN;
volatile int16_t x296 = INT16_MIN;
static uint8_t x303 = UINT8_MAX;
uint64_t x304 = 325057985356646LLU;
static volatile uint64_t x308 = UINT64_MAX;
static int32_t t60 = 0;
int16_t x309 = -1;
int64_t x312 = 4953365LL;
static int32_t x318 = -83524;
int8_t x319 = -27;
int16_t x332 = INT16_MIN;
int8_t x333 = INT8_MAX;
int16_t x335 = -1;
int32_t t65 = -531;
int64_t x340 = 37688616181026LL;
static int64_t x346 = INT64_MIN;
static int8_t x349 = -1;
int8_t x353 = INT8_MIN;
int16_t x354 = INT16_MAX;
uint32_t x357 = 23348U;
int8_t x359 = INT8_MAX;
volatile int16_t x362 = 602;
volatile int32_t t72 = -581;
int16_t x370 = INT16_MAX;
static volatile uint64_t x377 = UINT64_MAX;
static uint16_t x385 = 3U;
uint64_t x390 = UINT64_MAX;
int16_t x402 = INT16_MAX;
static int64_t x403 = -1LL;
uint32_t x414 = UINT32_MAX;
volatile int32_t t82 = -12;
int16_t x418 = INT16_MAX;
uint32_t x419 = 32199U;
int32_t x420 = INT32_MAX;
int32_t x422 = 4182244;
int16_t x423 = INT16_MIN;
int32_t t85 = 8950;
int32_t x429 = INT32_MAX;
int32_t t87 = 699648;
int8_t x445 = INT8_MAX;
int64_t x446 = 0LL;
int64_t x455 = -7218990159133514LL;
volatile int8_t x466 = -34;
static uint8_t x471 = 42U;
volatile int32_t t95 = 3;
uint16_t x473 = 791U;
uint16_t x475 = UINT16_MAX;
volatile int32_t t96 = -124082;
int8_t x484 = 7;
int32_t x488 = INT32_MIN;


void f0(void) {
	int32_t x2 = INT32_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int32_t t0 = 10947;

	t0 = ((x1-x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -248;
	static volatile int32_t x6 = INT32_MIN;
	static int32_t x7 = INT32_MIN;
	uint32_t x8 = 664293U;
	int32_t t1 = 28030248;

	t1 = ((x5-x6)<(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile int16_t x11 = INT16_MAX;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -70;

	t2 = ((x9-x10)<(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	int8_t x14 = 0;
	static volatile int32_t t3 = 362595;

	t3 = ((x13-x14)<(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	static int32_t x19 = -1;
	int16_t x20 = 30;

	t4 = ((x17-x18)<(x19+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	static volatile int64_t x22 = INT64_MAX;
	volatile uint8_t x23 = UINT8_MAX;
	static volatile int32_t t5 = -11;

	t5 = ((x21-x22)<(x23+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 3U;
	uint16_t x27 = UINT16_MAX;

	t6 = ((x25-x26)<(x27+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = 103U;
	int32_t x35 = -436;
	int64_t x36 = INT64_MAX;
	int32_t t7 = -1706;

	t7 = ((x33-x34)<(x35+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 385U;
	volatile int16_t x42 = INT16_MIN;
	volatile int8_t x44 = INT8_MIN;
	int32_t t8 = -7237062;

	t8 = ((x41-x42)<(x43+x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -1LL;
	volatile int32_t t9 = -523015720;

	t9 = ((x49-x50)<(x51+x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -109;
	volatile uint8_t x54 = UINT8_MAX;
	static uint16_t x55 = 45U;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t10 = 1632;

	t10 = ((x53-x54)<(x55+x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x58 = 1290423U;
	static uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t11 = -1007776157;

	t11 = ((x57-x58)<(x59+x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = -1927;
	int32_t x63 = -1;
	uint16_t x64 = 10U;
	int32_t t12 = -256587170;

	t12 = ((x61-x62)<(x63+x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	uint64_t x68 = 1970005599870279170LLU;

	t13 = ((x65-x66)<(x67+x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -38;
	static int32_t x71 = 162298;
	int64_t x72 = INT64_MIN;
	int32_t t14 = -111;

	t14 = ((x69-x70)<(x71+x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -4578;
	int32_t x75 = INT32_MIN;
	int64_t x76 = 386431LL;
	int32_t t15 = 23126139;

	t15 = ((x73-x74)<(x75+x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 156705788U;
	static uint8_t x79 = 3U;
	int8_t x80 = INT8_MIN;

	t16 = ((x77-x78)<(x79+x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x87 = INT8_MIN;
	static uint32_t x88 = 973445U;
	volatile int32_t t17 = 14960;

	t17 = ((x85-x86)<(x87+x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	int16_t x90 = -1;
	int16_t x91 = -250;
	int16_t x92 = -383;

	t18 = ((x89-x90)<(x91+x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = -820;
	int32_t x94 = INT32_MIN;

	t19 = ((x93-x94)<(x95+x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x97 = 389U;
	volatile uint32_t x98 = UINT32_MAX;
	int64_t x99 = -336586LL;
	volatile int32_t t20 = -528404;

	t20 = ((x97-x98)<(x99+x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = 17425106429830LL;
	volatile int16_t x103 = -199;
	volatile int32_t x104 = 24186;

	t21 = ((x101-x102)<(x103+x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int64_t x106 = INT64_MAX;
	static int32_t x107 = INT32_MAX;
	volatile int32_t x108 = -1;
	static volatile int32_t t22 = -19;

	t22 = ((x105-x106)<(x107+x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x109 = 2769683617381286LLU;
	int32_t x110 = -2;
	volatile int64_t x112 = -38634323LL;
	volatile int32_t t23 = -823493622;

	t23 = ((x109-x110)<(x111+x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 1408181795401106933LLU;
	int8_t x114 = INT8_MIN;
	static int16_t x115 = INT16_MIN;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t24 = -23329;

	t24 = ((x113-x114)<(x115+x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x118 = 15U;
	uint64_t x119 = UINT64_MAX;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t25 = 145;

	t25 = ((x117-x118)<(x119+x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = INT16_MAX;
	static uint64_t x123 = 295896560412044380LLU;
	uint8_t x124 = UINT8_MAX;
	int32_t t26 = 1483;

	t26 = ((x121-x122)<(x123+x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x128 = INT8_MIN;
	volatile int32_t t27 = 52567977;

	t27 = ((x125-x126)<(x127+x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = 4U;
	int32_t x130 = INT32_MAX;
	volatile int32_t t28 = -1;

	t28 = ((x129-x130)<(x131+x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x137 = 4007LLU;
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MAX;
	volatile int32_t t29 = 3;

	t29 = ((x137-x138)<(x139+x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1LL;
	volatile int8_t x142 = 27;
	int32_t x143 = -11;
	static volatile uint16_t x144 = 1508U;
	volatile int32_t t30 = -12338;

	t30 = ((x141-x142)<(x143+x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x151 = UINT8_MAX;
	volatile int32_t t31 = 42;

	t31 = ((x149-x150)<(x151+x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = 7503630LLU;
	uint64_t x155 = 24932014188101LLU;
	int32_t x156 = INT32_MIN;
	int32_t t32 = 88753;

	t32 = ((x153-x154)<(x155+x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = -412;
	uint8_t x159 = UINT8_MAX;
	static volatile int32_t t33 = 1073031;

	t33 = ((x157-x158)<(x159+x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = -97;
	uint16_t x162 = 3349U;
	int8_t x164 = -1;
	volatile int32_t t34 = 14031;

	t34 = ((x161-x162)<(x163+x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x166 = INT16_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t35 = -28482;

	t35 = ((x165-x166)<(x167+x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = 47895543894LL;
	uint8_t x170 = UINT8_MAX;
	static uint32_t x171 = 89314U;
	uint8_t x172 = UINT8_MAX;
	static int32_t t36 = -3;

	t36 = ((x169-x170)<(x171+x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	volatile int16_t x176 = -1;
	int32_t t37 = 547522274;

	t37 = ((x173-x174)<(x175+x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x185 = 131;
	int32_t x187 = -26118545;
	int32_t t38 = 3;

	t38 = ((x185-x186)<(x187+x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = -3;
	uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 15U;

	t39 = ((x189-x190)<(x191+x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x193 = -1;
	int8_t x195 = 1;
	static int8_t x196 = 1;
	int32_t t40 = 194;

	t40 = ((x193-x194)<(x195+x196));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x197 = -1;
	uint8_t x198 = 6U;
	static int16_t x199 = INT16_MIN;
	static int32_t x200 = -329713907;
	int32_t t41 = -3575;

	t41 = ((x197-x198)<(x199+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x202 = INT8_MIN;
	int64_t x203 = 2389LL;
	volatile int8_t x204 = -1;
	volatile int32_t t42 = 44384;

	t42 = ((x201-x202)<(x203+x204));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x211 = 24;
	volatile int32_t t43 = 2537746;

	t43 = ((x209-x210)<(x211+x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x221 = 46682845U;
	static int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = 7550U;
	int32_t t44 = -183;

	t44 = ((x221-x222)<(x223+x224));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MAX;
	volatile int16_t x227 = -3;
	volatile int32_t t45 = -3;

	t45 = ((x225-x226)<(x227+x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = 125U;
	volatile uint16_t x230 = 28U;
	int16_t x231 = INT16_MAX;
	int64_t x232 = -1LL;

	t46 = ((x229-x230)<(x231+x232));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = -1;
	int64_t x234 = -602291223LL;
	int8_t x235 = 14;
	int32_t x236 = INT32_MIN;
	volatile int32_t t47 = -180406869;

	t47 = ((x233-x234)<(x235+x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x241 = -1;
	uint64_t x242 = 573593617130068218LLU;
	volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = 6976LLU;
	int32_t t48 = 4704;

	t48 = ((x241-x242)<(x243+x244));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = -1;
	volatile int16_t x255 = -3;
	volatile int8_t x256 = INT8_MIN;

	t49 = ((x253-x254)<(x255+x256));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int16_t x260 = 19;
	int32_t t50 = -15;

	t50 = ((x257-x258)<(x259+x260));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = INT8_MIN;
	static uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t51 = -812;

	t51 = ((x265-x266)<(x267+x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x269 = UINT8_MAX;
	static uint32_t x270 = 133500U;
	uint16_t x271 = 1U;
	int8_t x272 = INT8_MAX;
	volatile int32_t t52 = -1;

	t52 = ((x269-x270)<(x271+x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x277 = 7;
	int16_t x278 = 41;
	uint8_t x279 = 12U;
	volatile int16_t x280 = INT16_MIN;
	int32_t t53 = 35852;

	t53 = ((x277-x278)<(x279+x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = INT8_MIN;
	volatile uint64_t x282 = 1455107LLU;
	int64_t x284 = -1LL;

	t54 = ((x281-x282)<(x283+x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x285 = INT64_MAX;
	int64_t x286 = 173LL;
	int32_t x287 = -1;
	static int32_t t55 = -262091;

	t55 = ((x285-x286)<(x287+x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t56 = 1243150;

	t56 = ((x289-x290)<(x291+x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x294 = 3640764482280500LLU;
	static uint16_t x295 = 2922U;
	static int32_t t57 = -972;

	t57 = ((x293-x294)<(x295+x296));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = -2952258346LL;
	volatile int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = 3524U;
	volatile int32_t t58 = 0;

	t58 = ((x297-x298)<(x299+x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x301 = 1;
	uint64_t x302 = UINT64_MAX;
	volatile int32_t t59 = -1;

	t59 = ((x301-x302)<(x303+x304));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = -1;
	volatile int32_t x306 = 112442847;
	int8_t x307 = INT8_MIN;

	t60 = ((x305-x306)<(x307+x308));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x310 = 1U;
	static volatile int32_t x311 = INT32_MIN;
	int32_t t61 = 0;

	t61 = ((x309-x310)<(x311+x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x313 = -1LL;
	int32_t x314 = INT32_MIN;
	static uint8_t x315 = 14U;
	int64_t x316 = 31LL;
	volatile int32_t t62 = 94928;

	t62 = ((x313-x314)<(x315+x316));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = INT8_MIN;
	static volatile int8_t x320 = INT8_MIN;
	int32_t t63 = 612124913;

	t63 = ((x317-x318)<(x319+x320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x329 = 1U;
	volatile int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	int32_t t64 = -105;

	t64 = ((x329-x330)<(x331+x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x334 = 3;
	uint16_t x336 = 4018U;

	t65 = ((x333-x334)<(x335+x336));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	volatile uint8_t x339 = UINT8_MAX;
	int32_t t66 = -1577929;

	t66 = ((x337-x338)<(x339+x340));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x341 = UINT64_MAX;
	static int32_t x342 = INT32_MIN;
	static int8_t x343 = -1;
	int8_t x344 = INT8_MIN;
	int32_t t67 = -1049860776;

	t67 = ((x341-x342)<(x343+x344));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	volatile int64_t x347 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	int32_t t68 = -158;

	t68 = ((x345-x346)<(x347+x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x350 = 1531U;
	static int8_t x351 = INT8_MAX;
	int32_t x352 = -1;
	volatile int32_t t69 = 224;

	t69 = ((x349-x350)<(x351+x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x355 = 1379184868152550683LLU;
	volatile int64_t x356 = INT64_MAX;
	int32_t t70 = -457545968;

	t70 = ((x353-x354)<(x355+x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x358 = INT8_MIN;
	int64_t x360 = 406340LL;
	static volatile int32_t t71 = -18;

	t71 = ((x357-x358)<(x359+x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x361 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	int32_t x364 = -41689;

	t72 = ((x361-x362)<(x363+x364));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int16_t x366 = -23;
	static volatile uint8_t x367 = 22U;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t73 = -879;

	t73 = ((x365-x366)<(x367+x368));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x369 = 11447779242LLU;
	static uint16_t x371 = 2U;
	uint8_t x372 = 89U;
	volatile int32_t t74 = -18515;

	t74 = ((x369-x370)<(x371+x372));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x373 = 6271;
	int8_t x374 = INT8_MIN;
	static volatile int8_t x375 = INT8_MIN;
	uint32_t x376 = UINT32_MAX;
	static int32_t t75 = -52;

	t75 = ((x373-x374)<(x375+x376));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x378 = INT64_MIN;
	uint32_t x379 = 1620328451U;
	uint8_t x380 = 2U;
	int32_t t76 = 673652;

	t76 = ((x377-x378)<(x379+x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x386 = UINT64_MAX;
	static int8_t x387 = INT8_MIN;
	static int64_t x388 = -1LL;
	int32_t t77 = -1400143;

	t77 = ((x385-x386)<(x387+x388));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x389 = -114;
	int16_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	int32_t t78 = -474243;

	t78 = ((x389-x390)<(x391+x392));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = 2676;
	int16_t x404 = INT16_MIN;
	int32_t t79 = -308620;

	t79 = ((x401-x402)<(x403+x404));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x405 = 1853296LLU;
	uint64_t x406 = 57135110102203656LLU;
	int32_t x407 = 8970;
	int32_t x408 = INT32_MIN;
	static volatile int32_t t80 = -2645;

	t80 = ((x405-x406)<(x407+x408));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x409 = INT32_MIN;
	volatile int8_t x410 = INT8_MIN;
	uint32_t x411 = UINT32_MAX;
	volatile uint64_t x412 = UINT64_MAX;
	int32_t t81 = 438;

	t81 = ((x409-x410)<(x411+x412));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x413 = INT16_MIN;
	volatile uint64_t x415 = 6667LLU;
	int64_t x416 = INT64_MAX;

	t82 = ((x413-x414)<(x415+x416));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x417 = -1;
	volatile int32_t t83 = 3894;

	t83 = ((x417-x418)<(x419+x420));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x424 = -1;
	int32_t t84 = 1554;

	t84 = ((x421-x422)<(x423+x424));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x425 = -22;
	uint32_t x426 = 1494U;
	volatile uint64_t x427 = UINT64_MAX;
	uint8_t x428 = 20U;

	t85 = ((x425-x426)<(x427+x428));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x430 = 13;
	static uint64_t x431 = 1060LLU;
	volatile int32_t x432 = 1;
	static volatile int32_t t86 = -67735;

	t86 = ((x429-x430)<(x431+x432));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x433 = UINT8_MAX;
	uint16_t x434 = 537U;
	volatile int16_t x435 = -1;
	int16_t x436 = INT16_MIN;

	t87 = ((x433-x434)<(x435+x436));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x437 = UINT8_MAX;
	int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MIN;
	static int32_t x440 = -1;
	int32_t t88 = 149822;

	t88 = ((x437-x438)<(x439+x440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x441 = -1;
	volatile int64_t x442 = -161031LL;
	uint8_t x443 = 6U;
	int64_t x444 = -1LL;
	volatile int32_t t89 = 17726;

	t89 = ((x441-x442)<(x443+x444));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x447 = -1;
	int32_t x448 = 44416;
	volatile int32_t t90 = -28614;

	t90 = ((x445-x446)<(x447+x448));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x453 = 86159LLU;
	uint32_t x454 = 301185U;
	volatile int8_t x456 = -1;
	volatile int32_t t91 = 153;

	t91 = ((x453-x454)<(x455+x456));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x457 = 2U;
	uint64_t x458 = 11497116726065903LLU;
	static uint64_t x459 = UINT64_MAX;
	static int64_t x460 = 8248402696LL;
	static volatile int32_t t92 = 85;

	t92 = ((x457-x458)<(x459+x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x461 = INT16_MIN;
	static uint32_t x462 = UINT32_MAX;
	int64_t x463 = -1LL;
	int32_t x464 = 1270020;
	int32_t t93 = 7;

	t93 = ((x461-x462)<(x463+x464));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x465 = UINT64_MAX;
	static int32_t x467 = 400290952;
	static uint32_t x468 = UINT32_MAX;
	int32_t t94 = 23;

	t94 = ((x465-x466)<(x467+x468));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x469 = -1;
	uint8_t x470 = UINT8_MAX;
	static int16_t x472 = INT16_MIN;

	t95 = ((x469-x470)<(x471+x472));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x474 = -1LL;
	int16_t x476 = -4954;

	t96 = ((x473-x474)<(x475+x476));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	uint8_t x478 = 2U;
	uint8_t x479 = UINT8_MAX;
	volatile uint32_t x480 = 10U;
	int32_t t97 = 1899;

	t97 = ((x477-x478)<(x479+x480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x481 = -1;
	uint64_t x482 = 983303665020193LLU;
	uint8_t x483 = UINT8_MAX;
	int32_t t98 = -4623553;

	t98 = ((x481-x482)<(x483+x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = 185955653818712LL;
	volatile int32_t x486 = -280830;
	static uint16_t x487 = UINT16_MAX;
	static int32_t t99 = 1934;

	t99 = ((x485-x486)<(x487+x488));

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

