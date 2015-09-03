#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x19 = 4U;
volatile uint16_t x28 = 0U;
volatile uint32_t t5 = 236042U;
int16_t x33 = -1;
int16_t x36 = INT16_MAX;
volatile int32_t x54 = INT32_MIN;
int16_t x58 = INT16_MIN;
volatile int16_t x67 = -1764;
static int16_t x77 = -9153;
int8_t x85 = INT8_MAX;
uint64_t x86 = 22LLU;
static int16_t x90 = 55;
int8_t x98 = 14;
volatile int8_t x103 = -1;
volatile int64_t t17 = 26400182712753LL;
volatile uint64_t t18 = 257LLU;
int32_t x115 = -1878869;
int8_t x116 = INT8_MIN;
int16_t x125 = -1;
uint8_t x133 = 31U;
uint32_t x134 = 804146U;
volatile uint64_t t23 = 10LLU;
uint32_t x158 = 1405U;
static int32_t x188 = 226610259;
static int8_t x190 = INT8_MIN;
static uint32_t t35 = 1038919650U;
int16_t x221 = -21;
volatile int64_t x222 = INT64_MIN;
static uint64_t x225 = 1741718866610327066LLU;
volatile int16_t x226 = -1;
static int64_t x244 = -1LL;
int32_t x252 = -129339;
int32_t t40 = -67031335;
uint16_t x258 = 6467U;
volatile int8_t x262 = -2;
int16_t x266 = -1;
uint32_t x273 = 11394989U;
uint8_t x275 = 31U;
int8_t x301 = -9;
volatile uint32_t t50 = 1604827U;
uint32_t x309 = 22U;
static int16_t x310 = 4;
uint32_t t52 = 26303U;
volatile int64_t x317 = INT64_MAX;
int32_t t55 = 2;
int64_t x337 = INT64_MAX;
volatile uint16_t x356 = UINT16_MAX;
static volatile uint32_t t58 = 55910U;
int64_t x365 = 28486413102LL;
int32_t x367 = 0;
volatile int16_t x379 = INT16_MIN;
int8_t x385 = INT8_MIN;
static int16_t x386 = INT16_MIN;
uint32_t x387 = UINT32_MAX;
int16_t x393 = -1;
volatile uint64_t t65 = 878LLU;
volatile int16_t x413 = 932;
int8_t x421 = -1;
static int16_t x425 = INT16_MAX;
uint32_t x426 = 1104U;
int64_t x427 = -1LL;
int64_t t69 = -223363LL;
volatile int8_t x430 = INT8_MAX;
int8_t x433 = -1;
uint8_t x439 = 1U;
volatile uint64_t t72 = 1022831627282177LLU;
uint32_t x443 = 256383U;
int8_t x444 = -1;
static int64_t x450 = -33745976745LL;
volatile uint32_t t75 = 5417502U;
volatile uint64_t t76 = UINT64_MAX;
int64_t x462 = -3979866159LL;
int8_t x464 = INT8_MIN;
volatile int64_t t77 = -749771287264LL;
uint8_t x475 = 45U;
volatile int8_t x479 = INT8_MIN;
uint32_t x492 = UINT32_MAX;
static int8_t x494 = 12;
volatile uint8_t x529 = 3U;
volatile int8_t x553 = -1;
uint16_t x554 = UINT16_MAX;
volatile uint8_t x555 = UINT8_MAX;
volatile int64_t x558 = 3400888970344518LL;
volatile int32_t x561 = -1;
static int8_t x566 = -21;
static uint64_t x567 = UINT64_MAX;
uint8_t x595 = UINT8_MAX;


void f0(void) {
	uint16_t x1 = 0U;
	static int8_t x2 = INT8_MIN;
	static int64_t x3 = 6725638056284350LL;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -134123317640LL;

	t0 = (x1*(x2|(x3*x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int64_t x6 = INT64_MIN;
	volatile int16_t x7 = -1;
	static int8_t x8 = INT8_MAX;
	int64_t t1 = -7LL;

	t1 = (x5*(x6|(x7*x8)));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	static int32_t x10 = -1;
	volatile uint32_t x11 = UINT32_MAX;
	uint64_t x12 = 9LLU;
	static uint64_t t2 = 45829309877975793LLU;

	t2 = (x9*(x10|(x11*x12)));

	if (t2 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int32_t x14 = INT32_MIN;
	int64_t x15 = -7923757396LL;
	static volatile int8_t x16 = INT8_MIN;
	static volatile int64_t t3 = 1539167679255640037LL;

	t3 = (x13*(x14|(x15*x16)));

	if (t3 != -99535791106560LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 17133;
	int32_t x18 = -7;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 0;

	t4 = (x17*(x18|(x19*x20)));

	if (t4 != -51399) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 90U;
	uint32_t x26 = UINT32_MAX;
	static int32_t x27 = 2323;

	t5 = (x25*(x26|(x27*x28)));

	if (t5 != 4294967206U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = 22;
	static uint64_t x35 = 2744185565LLU;
	volatile uint64_t t6 = 530484136LLU;

	t6 = (x33*(x34|(x35*x36)));

	if (t6 != 18446654154981143241LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x49 = 38640605346LLU;
	int64_t x50 = -55LL;
	static int64_t x51 = 490LL;
	uint8_t x52 = 0U;
	uint64_t t7 = 127256511LLU;

	t7 = (x49*(x50|(x51*x52)));

	if (t7 != 18446741948476257586LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	uint64_t x55 = 611660469LLU;
	uint64_t x56 = UINT64_MAX;
	uint64_t t8 = 14536190920582027LLU;

	t8 = (x53*(x54|(x55*x56)));

	if (t8 != 611660469LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x57 = INT16_MIN;
	static uint64_t x59 = 42052190113LLU;
	uint32_t x60 = 209U;
	uint64_t t9 = 362161547LLU;

	t9 = (x57*(x58|(x59*x60)));

	if (t9 != 650608640LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = UINT16_MAX;
	uint64_t x62 = UINT64_MAX;
	static volatile uint32_t x63 = 14U;
	uint16_t x64 = UINT16_MAX;
	static volatile uint64_t t10 = 1711844LLU;

	t10 = (x61*(x62|(x63*x64)));

	if (t10 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = 36443;
	int8_t x68 = -1;
	uint32_t t11 = 179U;

	t11 = (x65*(x66|(x67*x68)));

	if (t11 != 4294930689U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x73 = -1;
	uint16_t x74 = 7876U;
	volatile int8_t x75 = INT8_MIN;
	volatile int16_t x76 = 1;
	int32_t t12 = -1;

	t12 = (x73*(x74|(x75*x76)));

	if (t12 != 60) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x78 = 0U;
	static int64_t x79 = -37LL;
	int8_t x80 = INT8_MIN;
	volatile int64_t t13 = 15960614550280LL;

	t13 = (x77*(x78|(x79*x80)));

	if (t13 != -43348608LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x87 = UINT32_MAX;
	int8_t x88 = INT8_MIN;
	uint64_t t14 = 969663972644LLU;

	t14 = (x85*(x86|(x87*x88)));

	if (t14 != 19050LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = -27;
	int64_t x91 = -773173080LL;
	volatile int8_t x92 = 25;
	int64_t t15 = 3LL;

	t15 = (x89*(x90|(x91*x92)));

	if (t15 != 521891828379LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x97 = UINT8_MAX;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = -1;
	volatile uint64_t t16 = 3442LLU;

	t16 = (x97*(x98|(x99*x100)));

	if (t16 != 3825LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = -1LL;
	volatile int8_t x102 = -25;
	volatile uint8_t x104 = 3U;

	t17 = (x101*(x102|(x103*x104)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x105 = 15843U;
	volatile int32_t x106 = INT32_MIN;
	static int16_t x107 = -3896;
	uint64_t x108 = UINT64_MAX;

	t18 = (x105*(x106|(x107*x108)));

	if (t18 != 18446710051187840680LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x109 = INT16_MIN;
	static int8_t x110 = -2;
	int32_t x111 = -1;
	volatile uint16_t x112 = 15U;
	volatile int32_t t19 = -99741;

	t19 = (x109*(x110|(x111*x112)));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x113 = 15577U;
	static int32_t x114 = INT32_MIN;
	volatile uint32_t t20 = 28924557U;

	t20 = (x113*(x114|(x115*x116)));

	if (t20 != 3130230400U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	int32_t x128 = -2;
	int32_t t21 = -975;

	t21 = (x125*(x126|(x127*x128)));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x135 = 13;
	uint64_t x136 = 796153451LLU;
	static volatile uint64_t t22 = 0LLU;

	t22 = (x133*(x134|(x135*x136)));

	if (t22 != 320857999457LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 41803383LLU;
	uint64_t x140 = UINT64_MAX;

	t23 = (x137*(x138|(x139*x140)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MAX;
	uint32_t x143 = 516192U;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t24 = 113549850445925LLU;

	t24 = (x141*(x142|(x143*x144)));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x145 = -1;
	int64_t x146 = -1LL;
	int8_t x147 = -1;
	volatile uint32_t x148 = UINT32_MAX;
	volatile int64_t t25 = -162402619104161LL;

	t25 = (x145*(x146|(x147*x148)));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int32_t x150 = INT32_MIN;
	static int16_t x151 = 1;
	uint32_t x152 = UINT32_MAX;
	uint64_t t26 = 27706604140LLU;

	t26 = (x149*(x150|(x151*x152)));

	if (t26 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x153 = UINT8_MAX;
	uint64_t x154 = UINT64_MAX;
	static int64_t x155 = 3857420LL;
	static uint8_t x156 = UINT8_MAX;
	uint64_t t27 = 239021LLU;

	t27 = (x153*(x154|(x155*x156)));

	if (t27 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = -1;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = 225839346162378293LLU;
	uint64_t t28 = 196LLU;

	t28 = (x157*(x158|(x159*x160)));

	if (t28 != 3159321491281705603LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = 344285144118157LLU;
	static volatile int8_t x162 = INT8_MAX;
	static int8_t x163 = -3;
	int64_t x164 = -4486LL;
	uint64_t t29 = 2023LLU;

	t29 = (x161*(x162|(x163*x164)));

	if (t29 != 4670916550251036019LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	int16_t x187 = 5;
	volatile int32_t t30 = 42705261;

	t30 = (x185*(x186|(x187*x188)));

	if (t30 != 12416) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = -2535;
	int8_t x191 = -1;
	static int32_t x192 = -1;
	static int32_t t31 = -262;

	t31 = (x189*(x190|(x191*x192)));

	if (t31 != 321945) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x197 = UINT8_MAX;
	uint8_t x198 = UINT8_MAX;
	static int8_t x199 = -1;
	int16_t x200 = -31;
	int32_t t32 = 42053;

	t32 = (x197*(x198|(x199*x200)));

	if (t32 != 65025) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x201 = 1U;
	int16_t x202 = 513;
	int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;
	volatile int64_t t33 = -1372588235325LL;

	t33 = (x201*(x202|(x203*x204)));

	if (t33 != 641LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x213 = 1;
	static uint8_t x214 = 6U;
	uint32_t x215 = 938144605U;
	int8_t x216 = INT8_MAX;
	volatile uint32_t t34 = 3U;

	t34 = (x213*(x214|(x215*x216)));

	if (t34 != 3180247847U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x217 = -13;
	uint8_t x218 = 78U;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = 56489U;

	t35 = (x217*(x218|(x219*x220)));

	if (t35 != 2147482634U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x223 = INT16_MIN;
	volatile uint64_t x224 = 776165LLU;
	uint64_t t36 = 9LLU;

	t36 = (x221*(x222|(x223*x224)));

	if (t36 != 534100869120LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 22U;
	uint64_t t37 = 229481085729871LLU;

	t37 = (x225*(x226|(x227*x228)));

	if (t37 != 16705025207099224550LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x241 = -781;
	uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 8U;
	int64_t t38 = 192444978848991993LL;

	t38 = (x241*(x242|(x243*x244)));

	if (t38 != 781LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x245 = 0U;
	uint16_t x246 = UINT16_MAX;
	static int32_t x247 = -1;
	int16_t x248 = INT16_MAX;
	int32_t t39 = -1;

	t39 = (x245*(x246|(x247*x248)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = 0U;
	int16_t x251 = -1;

	t40 = (x249*(x250|(x251*x252)));

	if (t40 != -16555392) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x253 = 0;
	uint16_t x254 = 1U;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = -1;
	static int32_t t41 = -217;

	t41 = (x253*(x254|(x255*x256)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MAX;
	static volatile int64_t x260 = 1431811534LL;
	volatile int64_t t42 = -17872795093LL;

	t42 = (x257*(x258|(x259*x260)));

	if (t42 != -5958535313195008LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x261 = INT32_MIN;
	int8_t x263 = INT8_MAX;
	int64_t x264 = -1LL;
	int64_t t43 = -143951LL;

	t43 = (x261*(x262|(x263*x264)));

	if (t43 != 2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x265 = INT8_MIN;
	static int8_t x267 = INT8_MIN;
	volatile int64_t x268 = -290854278820LL;
	volatile int64_t t44 = -1338230LL;

	t44 = (x265*(x266|(x267*x268)));

	if (t44 != 128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x269 = -2007LL;
	int64_t x270 = 132LL;
	volatile int16_t x271 = 857;
	int16_t x272 = INT16_MIN;
	volatile int64_t t45 = 104LL;

	t45 = (x269*(x270|(x271*x272)));

	if (t45 != 56360662308LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x274 = 98635410117339829LL;
	int16_t x276 = INT16_MIN;
	volatile int64_t t46 = -62LL;

	t46 = (x273*(x274|(x275*x276)));

	if (t46 != -10703757572271LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MIN;
	volatile int16_t x279 = -1;
	uint64_t x280 = 61673929633456378LLU;
	uint64_t t47 = 14LLU;

	t47 = (x277*(x278|(x279*x280)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x286 = 2235LLU;
	volatile uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	static uint64_t t48 = 22LLU;

	t48 = (x285*(x286|(x287*x288)));

	if (t48 != 9223372036854773573LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = 480899438513457097LL;
	uint64_t t49 = 7LLU;

	t49 = (x297*(x298|(x299*x300)));

	if (t49 != 165956281472LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x302 = 514U;
	uint16_t x303 = 26241U;
	uint16_t x304 = UINT16_MAX;

	t50 = (x301*(x302|(x303*x304)));

	if (t50 != 1702529161U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = -33;
	int8_t x306 = INT8_MIN;
	int32_t x307 = 13944;
	int16_t x308 = INT16_MIN;
	int32_t t51 = 8;

	t51 = (x305*(x306|(x307*x308)));

	if (t51 != 4224) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x311 = 6;
	int16_t x312 = INT16_MIN;

	t52 = (x309*(x310|(x311*x312)));

	if (t52 != 4290642008U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x318 = 2U;
	uint64_t x319 = 15010079005476290LLU;
	volatile uint32_t x320 = 1589U;
	volatile uint64_t t53 = 7636003141192872LLU;

	t53 = (x317*(x318|(x319*x320)));

	if (t53 != 13042472607717278422LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 16656269U;
	int64_t x331 = -1LL;
	volatile int16_t x332 = 1356;
	static volatile int64_t t54 = 61396950902863461LL;

	t54 = (x329*(x330|(x331*x332)));

	if (t54 != 8576LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -1;
	int32_t x336 = INT32_MAX;

	t55 = (x333*(x334|(x335*x336)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x338 = 41U;
	uint16_t x339 = 1U;
	uint64_t x340 = UINT64_MAX;
	uint64_t t56 = 59786668307251875LLU;

	t56 = (x337*(x338|(x339*x340)));

	if (t56 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x345 = 22U;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -15900319;
	int32_t x348 = -1;
	uint32_t t57 = 3921U;

	t57 = (x345*(x346|(x347*x348)));

	if (t57 != 349807018U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x353 = 12001423U;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = -1;

	t58 = (x353*(x354|(x355*x356)));

	if (t58 != 4282965873U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = 3U;
	volatile uint8_t x362 = 62U;
	static int8_t x363 = INT8_MIN;
	int64_t x364 = -39498LL;
	int64_t t59 = 17159LL;

	t59 = (x361*(x362|(x363*x364)));

	if (t59 != 15167418LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x366 = -1;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t60 = 3LL;

	t60 = (x365*(x366|(x367*x368)));

	if (t60 != -28486413102LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	volatile uint64_t x376 = 3041461LLU;
	uint64_t t61 = 158022963149LLU;

	t61 = (x373*(x374|(x375*x376)));

	if (t61 != 10882369928405061173LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x377 = -1;
	static int8_t x378 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t62 = 423LLU;

	t62 = (x377*(x378|(x379*x380)));

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x381 = -1;
	static volatile int16_t x382 = INT16_MIN;
	static uint8_t x383 = 28U;
	int32_t x384 = -66;
	static volatile int32_t t63 = 118312;

	t63 = (x381*(x382|(x383*x384)));

	if (t63 != 1848) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x388 = 1U;
	volatile uint32_t t64 = 3980U;

	t64 = (x385*(x386|(x387*x388)));

	if (t64 != 128U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x394 = -1LL;
	int64_t x395 = -3879LL;
	static uint64_t x396 = 221LLU;

	t65 = (x393*(x394|(x395*x396)));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x409 = INT32_MAX;
	uint64_t x410 = 56597LLU;
	volatile uint32_t x411 = 180U;
	int8_t x412 = INT8_MIN;
	static uint64_t t66 = 491322038250LLU;

	t66 = (x409*(x410|(x411*x412)));

	if (t66 != 9223371527901151467LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x414 = 1U;
	int8_t x415 = INT8_MIN;
	uint8_t x416 = 8U;
	uint32_t t67 = 28128U;

	t67 = (x413*(x414|(x415*x416)));

	if (t67 != 4294013860U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x422 = -1001317481;
	uint8_t x423 = 47U;
	uint64_t x424 = UINT64_MAX;
	uint64_t t68 = 60LLU;

	t68 = (x421*(x422|(x423*x424)));

	if (t68 != 41LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x428 = UINT8_MAX;

	t69 = (x425*(x426|(x427*x428)));

	if (t69 != -5734225LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x429 = 162056LL;
	static int16_t x431 = -1;
	int8_t x432 = INT8_MIN;
	volatile int64_t t70 = -474443944486673LL;

	t70 = (x429*(x430|(x431*x432)));

	if (t70 != 41324280LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x434 = UINT16_MAX;
	uint16_t x435 = 125U;
	int64_t x436 = -1LL;
	int64_t t71 = 888939484420132090LL;

	t71 = (x433*(x434|(x435*x436)));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x437 = -10529577814597504LL;
	volatile uint64_t x438 = 7LLU;
	int8_t x440 = INT8_MIN;

	t72 = (x437*(x438|(x439*x440)));

	if (t72 != 1274078915566297984LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x441 = 46862LLU;
	uint32_t x442 = 4U;
	volatile uint64_t t73 = 26255589026LLU;

	t73 = (x441*(x442|(x443*x444)));

	if (t73 != 201258742992454LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x449 = -1;
	uint32_t x451 = 161437U;
	int32_t x452 = -403240299;
	volatile int64_t t74 = 9809146877596214LL;

	t74 = (x449*(x450|(x451*x452)));

	if (t74 != 33443452041LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x453 = INT32_MIN;
	uint32_t x454 = 1203662U;
	static int32_t x455 = 17840;
	volatile int32_t x456 = -1;

	t75 = (x453*(x454|(x455*x456)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x457 = 1U;
	static int64_t x458 = -1LL;
	int16_t x459 = -65;
	volatile uint64_t x460 = UINT64_MAX;

	t76 = (x457*(x458|(x459*x460)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x461 = INT32_MAX;
	uint8_t x463 = 5U;

	t77 = (x461*(x462|(x463*x464)));

	if (t77 != -100931731409LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x473 = -7863;
	int16_t x474 = 99;
	static int32_t x476 = 2;
	volatile int32_t t78 = -21303308;

	t78 = (x473*(x474|(x475*x476)));

	if (t78 != -967149) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x477 = 412;
	static uint32_t x478 = UINT32_MAX;
	int64_t x480 = 6328416189LL;
	volatile int64_t t79 = -252832531524LL;

	t79 = (x477*(x478|(x479*x480)));

	if (t79 != -332670986879388LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x481 = 42;
	volatile int32_t x482 = 93645638;
	uint64_t x483 = 526635976719501087LLU;
	static int64_t x484 = -303323LL;
	uint64_t t80 = 2026213302LLU;

	t80 = (x481*(x482|(x483*x484)));

	if (t80 != 3929703766632997590LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x489 = 172936588;
	int8_t x490 = -1;
	static uint32_t x491 = 65077097U;
	static uint32_t t81 = 6247618U;

	t81 = (x489*(x490|(x491*x492)));

	if (t81 != 4122030708U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x493 = INT16_MIN;
	static uint32_t x495 = 13220U;
	volatile uint8_t x496 = UINT8_MAX;
	volatile uint32_t t82 = 115908U;

	t82 = (x493*(x494|(x495*x496)));

	if (t82 != 1204944896U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x501 = INT8_MAX;
	volatile int8_t x502 = INT8_MIN;
	static int32_t x503 = INT32_MAX;
	uint32_t x504 = 9U;
	volatile uint32_t t83 = 656942U;

	t83 = (x501*(x502|(x503*x504)));

	if (t83 != 4294966153U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x509 = INT16_MIN;
	volatile uint32_t x510 = UINT32_MAX;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -1;
	uint32_t t84 = 88189583U;

	t84 = (x509*(x510|(x511*x512)));

	if (t84 != 32768U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x517 = INT8_MAX;
	static volatile uint8_t x518 = 25U;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = 8622306U;
	static volatile uint32_t t85 = 6041U;

	t85 = (x517*(x518|(x519*x520)));

	if (t85 != 2414939239U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x530 = INT16_MIN;
	uint32_t x531 = 79118U;
	int16_t x532 = INT16_MAX;
	volatile uint32_t t86 = 14637581U;

	t86 = (x529*(x530|(x531*x532)));

	if (t86 != 4294926550U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x533 = 231519547622381795LLU;
	static uint16_t x534 = UINT16_MAX;
	static uint8_t x535 = 26U;
	volatile uint8_t x536 = UINT8_MAX;
	uint64_t t87 = 69603849LLU;

	t87 = (x533*(x534|(x535*x536)));

	if (t87 != 9409924843539506973LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x537 = -1LL;
	volatile uint8_t x538 = 3U;
	volatile uint32_t x539 = 30959U;
	int32_t x540 = -3;
	int64_t t88 = -3189195LL;

	t88 = (x537*(x538|(x539*x540)));

	if (t88 != -4294874419LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x541 = 4095895U;
	uint8_t x542 = 98U;
	int8_t x543 = INT8_MAX;
	volatile int16_t x544 = -1;
	uint32_t t89 = 159270146U;

	t89 = (x541*(x542|(x543*x544)));

	if (t89 != 4176186341U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x545 = INT8_MIN;
	int8_t x546 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	volatile uint64_t x548 = 6882923510LLU;
	static uint64_t t90 = 1468852323573575LLU;

	t90 = (x545*(x546|(x547*x548)));

	if (t90 != 15104LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x556 = 840228238LL;
	int64_t t91 = 256862441321LL;

	t91 = (x553*(x554|(x555*x556)));

	if (t91 != -214258221055LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x557 = 2U;
	uint16_t x559 = 9U;
	int64_t x560 = 69761320208LL;
	volatile int64_t t92 = -193827084280898457LL;

	t92 = (x557*(x558|(x559*x560)));

	if (t92 != 6802877586537388LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x562 = -14659LL;
	uint64_t x563 = 1204LLU;
	uint16_t x564 = 3669U;
	static volatile uint64_t t93 = 2154314222925LLU;

	t93 = (x561*(x562|(x563*x564)));

	if (t93 != 6147LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x565 = INT32_MAX;
	static int8_t x568 = INT8_MAX;
	uint64_t t94 = 690337143214LLU;

	t94 = (x565*(x566|(x567*x568)));

	if (t94 != 18446744028612395029LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x577 = -821884610;
	uint32_t x578 = 175486396U;
	volatile int64_t x579 = -1LL;
	volatile int32_t x580 = INT32_MIN;
	volatile int64_t t95 = 32113LL;

	t95 = (x577*(x578|(x579*x580)));

	if (t95 != -1909213328654622840LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x589 = INT16_MIN;
	volatile uint16_t x590 = 6309U;
	static uint8_t x591 = UINT8_MAX;
	int16_t x592 = -1;
	volatile int32_t t96 = -35;

	t96 = (x589*(x590|(x591*x592)));

	if (t96 != 2981888) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x593 = 1140090799LL;
	uint16_t x594 = 450U;
	uint8_t x596 = 0U;
	int64_t t97 = 37432049924939LL;

	t97 = (x593*(x594|(x595*x596)));

	if (t97 != 513040859550LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x597 = INT8_MIN;
	volatile int8_t x598 = -1;
	static volatile int8_t x599 = -1;
	static int8_t x600 = 1;
	int32_t t98 = -478267;

	t98 = (x597*(x598|(x599*x600)));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x605 = INT8_MIN;
	uint32_t x606 = 1226930U;
	int8_t x607 = -1;
	int32_t x608 = INT32_MAX;
	volatile uint32_t t99 = 10089U;

	t99 = (x605*(x606|(x607*x608)));

	if (t99 != 4137920128U) { NG(); } else { ; }
	
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

