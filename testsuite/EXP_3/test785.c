#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 7821127980LLU;
static uint8_t x16 = 6U;
int32_t x24 = INT32_MAX;
int16_t x29 = INT16_MIN;
int16_t x43 = INT16_MAX;
int32_t x46 = INT32_MIN;
int64_t x52 = 51584119556350971LL;
int64_t t10 = -14501185LL;
uint8_t x57 = 3U;
int8_t x58 = INT8_MAX;
uint16_t x61 = 28U;
int32_t x63 = 10;
volatile int16_t x82 = 12;
static volatile uint16_t x87 = 15U;
int8_t x88 = INT8_MIN;
int8_t x92 = 4;
static int64_t x100 = -3000997512224263LL;
int8_t x105 = 1;
volatile uint64_t t20 = 1340249LLU;
int64_t x110 = -1LL;
volatile uint16_t x112 = 2U;
static volatile uint16_t x114 = 2U;
static int32_t x115 = INT32_MIN;
int64_t x120 = INT64_MIN;
int64_t x123 = INT64_MAX;
volatile int64_t t27 = 211LL;
int32_t x145 = INT32_MIN;
static volatile int8_t x165 = 0;
volatile uint16_t x184 = 45U;
int32_t x188 = INT32_MIN;
int32_t t34 = 0;
int8_t x201 = 24;
static int8_t x212 = INT8_MIN;
volatile int32_t t37 = 535664047;
volatile int64_t t38 = -470LL;
int32_t x229 = INT32_MIN;
uint16_t x231 = UINT16_MAX;
static volatile int16_t x235 = -2;
uint64_t x242 = 4LLU;
int64_t x257 = -1LL;
uint8_t x281 = UINT8_MAX;
int8_t x282 = INT8_MIN;
static uint32_t x285 = 6723U;
int8_t x290 = -1;
static volatile int32_t x292 = INT32_MAX;
static uint16_t x300 = 224U;
int8_t x303 = -1;
int64_t x308 = INT64_MIN;
int16_t x328 = INT16_MIN;
volatile int16_t x329 = INT16_MIN;
int64_t x335 = -1LL;
uint16_t x338 = 532U;
uint8_t x339 = 65U;
int32_t x342 = INT32_MIN;
int32_t x345 = -1;
static volatile int64_t t64 = 247518422478LL;
volatile int32_t x349 = INT32_MAX;
int64_t x351 = INT64_MIN;
int32_t x359 = -1;
uint16_t x363 = 1U;
int32_t x364 = 29;
uint16_t x371 = 1U;
int8_t x376 = INT8_MAX;
int32_t t71 = 1;
uint16_t x386 = 26U;
int64_t x390 = INT64_MIN;
uint64_t x391 = 33749264460997LLU;
volatile int32_t t75 = 312883;
int64_t x412 = INT64_MIN;
uint64_t x421 = 1919419285189379LLU;
static volatile int8_t x435 = -1;
uint16_t x437 = 6U;
int16_t x445 = -538;
uint64_t x446 = 1036908488247833LLU;
static int16_t x467 = INT16_MIN;
static int64_t x474 = INT64_MIN;
int32_t x479 = INT32_MIN;
int16_t x486 = -1;
int8_t x493 = -1;
int64_t t93 = -11068629719275344LL;
int16_t x506 = -15475;
int16_t x519 = -274;
int32_t x525 = INT32_MIN;
uint64_t x527 = 7LLU;


void f0(void) {
	int16_t x5 = -2;
	int32_t x6 = -1;
	int32_t x7 = -442;
	uint32_t x8 = 325U;
	static volatile uint32_t t0 = 122378U;

	t0 = ((x5<x6)%(x7%x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 12686U;
	int16_t x10 = -844;
	int64_t x11 = INT64_MIN;
	volatile uint64_t x12 = UINT64_MAX;

	t1 = ((x9<x10)%(x11%x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	static uint64_t x14 = UINT64_MAX;
	uint8_t x15 = UINT8_MAX;
	volatile int32_t t2 = -952519111;

	t2 = ((x13<x14)%(x15%x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MIN;
	static uint64_t x23 = 30036889380690064LLU;
	uint64_t t3 = 28032471965LLU;

	t3 = ((x21<x22)%(x23%x24));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x30 = 164663784075109264LLU;
	volatile int16_t x31 = INT16_MAX;
	static uint32_t x32 = 328U;
	volatile uint32_t t4 = 144U;

	t4 = ((x29<x30)%(x31%x32));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x33 = INT32_MAX;
	int32_t x34 = -1;
	volatile uint64_t x35 = 1888074809080LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t5 = 9783089929856667LLU;

	t5 = ((x33<x34)%(x35%x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = -7LL;
	static uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 351211U;
	uint16_t x40 = 5594U;
	volatile uint32_t t6 = 578084339U;

	t6 = ((x37<x38)%(x39%x40));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MIN;
	uint64_t x44 = 133226955LLU;
	uint64_t t7 = 465688942014309106LLU;

	t7 = ((x41<x42)%(x43%x44));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	volatile int32_t x47 = INT32_MIN;
	volatile uint32_t x48 = 14654729U;
	volatile uint32_t t8 = 289342244U;

	t8 = ((x45<x46)%(x47%x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int16_t x50 = INT16_MIN;
	static uint16_t x51 = 4786U;
	static volatile int64_t t9 = 0LL;

	t9 = ((x49<x50)%(x51%x52));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 4U;
	volatile uint8_t x55 = 7U;
	int64_t x56 = 3747910845631253LL;

	t10 = ((x53<x54)%(x55%x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MAX;
	static volatile int64_t t11 = 46969547LL;

	t11 = ((x57<x58)%(x59%x60));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x62 = 116403LLU;
	volatile uint64_t x64 = 207LLU;
	volatile uint64_t t12 = 526490425957249LLU;

	t12 = ((x61<x62)%(x63%x64));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x65 = INT16_MAX;
	volatile int32_t x66 = INT32_MIN;
	int64_t x67 = 4652545LL;
	uint32_t x68 = 137U;
	int64_t t13 = 311LL;

	t13 = ((x65<x66)%(x67%x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x69 = 60856853970LL;
	int32_t x70 = -1;
	uint64_t x71 = 3496LLU;
	volatile uint32_t x72 = 1340604U;
	uint64_t t14 = 1157324013038886314LLU;

	t14 = ((x69<x70)%(x71%x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x73 = 108850721859287LLU;
	static int32_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	volatile int64_t x76 = -311LL;
	static int64_t t15 = -26LL;

	t15 = ((x73<x74)%(x75%x76));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 18;
	static int32_t x83 = INT32_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t16 = 25555LL;

	t16 = ((x81<x82)%(x83%x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MIN;
	uint8_t x86 = 12U;
	static volatile int32_t t17 = -202672337;

	t17 = ((x85<x86)%(x87%x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = -1;
	int8_t x90 = 0;
	volatile uint64_t x91 = 82658LLU;
	uint64_t t18 = 22030406473244995LLU;

	t18 = ((x89<x90)%(x91%x92));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = -1;
	uint64_t x99 = UINT64_MAX;
	volatile uint64_t t19 = 1011719538LLU;

	t19 = ((x97<x98)%(x99%x100));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x106 = INT64_MAX;
	int64_t x107 = 1LL;
	volatile uint64_t x108 = 3364560156955935LLU;

	t20 = ((x105<x106)%(x107%x108));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 198737564770LLU;
	static int8_t x111 = INT8_MAX;
	volatile int32_t t21 = 33526;

	t21 = ((x109<x110)%(x111%x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -1;
	uint16_t x116 = 4999U;
	int32_t t22 = -58673960;

	t22 = ((x113<x114)%(x115%x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	int8_t x119 = 2;
	volatile int64_t t23 = 0LL;

	t23 = ((x117<x118)%(x119%x120));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	volatile int32_t x124 = INT32_MIN;
	int64_t t24 = -2LL;

	t24 = ((x121<x122)%(x123%x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 30U;
	int16_t x131 = 816;
	volatile int64_t x132 = 1770757172685301LL;
	static int64_t t25 = 19596196287LL;

	t25 = ((x129<x130)%(x131%x132));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	static uint32_t x134 = UINT32_MAX;
	uint64_t x135 = 1400797LLU;
	int32_t x136 = -1;
	uint64_t t26 = 1540035167886081LLU;

	t26 = ((x133<x134)%(x135%x136));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = INT64_MAX;
	uint16_t x138 = 303U;
	int32_t x139 = -1;
	static volatile int64_t x140 = INT64_MIN;

	t27 = ((x137<x138)%(x139%x140));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -46;
	volatile int64_t x142 = 25626155960197016LL;
	static uint8_t x143 = UINT8_MAX;
	int8_t x144 = 7;
	static volatile int32_t t28 = 413576;

	t28 = ((x141<x142)%(x143%x144));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x146 = 61LL;
	int32_t x147 = -1;
	int64_t x148 = -14438LL;
	int64_t t29 = 11480637LL;

	t29 = ((x145<x146)%(x147%x148));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = 27;
	static int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	volatile uint32_t x164 = UINT32_MAX;
	uint32_t t30 = 6384159U;

	t30 = ((x161<x162)%(x163%x164));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x166 = 1;
	volatile int32_t x167 = -1;
	volatile int8_t x168 = INT8_MIN;
	int32_t t31 = -1;

	t31 = ((x165<x166)%(x167%x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = -1;
	volatile int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	volatile int64_t t32 = 246667646223369LL;

	t32 = ((x173<x174)%(x175%x176));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = 3014681802895604405LL;
	volatile uint64_t x183 = 8204254LLU;
	uint64_t t33 = 20174LLU;

	t33 = ((x181<x182)%(x183%x184));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = INT8_MIN;
	volatile uint8_t x187 = 113U;

	t34 = ((x185<x186)%(x187%x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x197 = UINT32_MAX;
	static volatile int16_t x198 = 1;
	static int32_t x199 = INT32_MIN;
	uint64_t x200 = UINT64_MAX;
	uint64_t t35 = 46LLU;

	t35 = ((x197<x198)%(x199%x200));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x202 = 727U;
	int8_t x203 = INT8_MAX;
	volatile int32_t x204 = INT32_MIN;
	volatile int32_t t36 = 25334310;

	t36 = ((x201<x202)%(x203%x204));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x209 = 121U;
	int8_t x210 = 15;
	int8_t x211 = -27;

	t37 = ((x209<x210)%(x211%x212));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = UINT8_MAX;
	static int16_t x214 = 3319;
	int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;

	t38 = ((x213<x214)%(x215%x216));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x217 = INT8_MAX;
	static int8_t x218 = INT8_MIN;
	static int8_t x219 = -1;
	uint32_t x220 = 319489472U;
	volatile uint32_t t39 = 28420620U;

	t39 = ((x217<x218)%(x219%x220));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	static int32_t x227 = -163186;
	static int16_t x228 = INT16_MIN;
	int32_t t40 = -61256;

	t40 = ((x225<x226)%(x227%x228));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x230 = INT16_MIN;
	int32_t x232 = INT32_MAX;
	volatile int32_t t41 = 1;

	t41 = ((x229<x230)%(x231%x232));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x233 = UINT8_MAX;
	static int8_t x234 = INT8_MIN;
	uint32_t x236 = 338U;
	static volatile uint32_t t42 = 334752U;

	t42 = ((x233<x234)%(x235%x236));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 20493173LLU;
	int64_t x240 = INT64_MIN;
	uint64_t t43 = 230187697185LLU;

	t43 = ((x237<x238)%(x239%x240));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x241 = UINT8_MAX;
	int64_t x243 = 178164646153LL;
	volatile uint64_t x244 = 80112567344LLU;
	static volatile uint64_t t44 = 1LLU;

	t44 = ((x241<x242)%(x243%x244));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x245 = -1;
	int8_t x246 = -1;
	static int16_t x247 = -6;
	int64_t x248 = 123509338790LL;
	int64_t t45 = -170436091142847LL;

	t45 = ((x245<x246)%(x247%x248));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x249 = INT8_MIN;
	static volatile uint16_t x250 = UINT16_MAX;
	int32_t x251 = -18;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t46 = 908375;

	t46 = ((x249<x250)%(x251%x252));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x253 = 6U;
	volatile int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MAX;
	int32_t t47 = 453868319;

	t47 = ((x253<x254)%(x255%x256));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x258 = -1;
	uint8_t x259 = UINT8_MAX;
	static int16_t x260 = -5289;
	volatile int32_t t48 = -158854212;

	t48 = ((x257<x258)%(x259%x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = -3;
	int16_t x271 = 7;
	volatile uint64_t x272 = 3126145886863LLU;
	static volatile uint64_t t49 = 6618387026671987LLU;

	t49 = ((x269<x270)%(x271%x272));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t50 = 59883;

	t50 = ((x281<x282)%(x283%x284));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x286 = -1;
	uint8_t x287 = 1U;
	static int32_t x288 = INT32_MIN;
	static volatile int32_t t51 = 10;

	t51 = ((x285<x286)%(x287%x288));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x289 = 9U;
	int16_t x291 = -6;
	int32_t t52 = 65135856;

	t52 = ((x289<x290)%(x291%x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x297 = INT32_MIN;
	int8_t x298 = -6;
	int32_t x299 = INT32_MIN;
	int32_t t53 = -442340;

	t53 = ((x297<x298)%(x299%x300));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x301 = 31;
	uint8_t x302 = 23U;
	int64_t x304 = INT64_MIN;
	int64_t t54 = 222581LL;

	t54 = ((x301<x302)%(x303%x304));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x305 = -42;
	int32_t x306 = INT32_MIN;
	uint32_t x307 = UINT32_MAX;
	static volatile int64_t t55 = -12LL;

	t55 = ((x305<x306)%(x307%x308));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = 0;
	uint64_t x311 = 201489029046635LLU;
	static int8_t x312 = 30;
	volatile uint64_t t56 = 86766268LLU;

	t56 = ((x309<x310)%(x311%x312));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x317 = 1LLU;
	volatile int16_t x318 = INT16_MIN;
	volatile int64_t x319 = INT64_MAX;
	volatile uint64_t x320 = 16289814857799516LLU;
	uint64_t t57 = 39025729200LLU;

	t57 = ((x317<x318)%(x319%x320));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -1;
	static int64_t x323 = 6019960135248LL;
	static uint16_t x324 = 886U;
	int64_t t58 = 1104963LL;

	t58 = ((x321<x322)%(x323%x324));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x325 = 7407U;
	static volatile int8_t x326 = -1;
	volatile int64_t x327 = -33009555405LL;
	volatile int64_t t59 = -78323009LL;

	t59 = ((x325<x326)%(x327%x328));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x330 = INT64_MIN;
	static volatile int32_t x331 = -70;
	int8_t x332 = INT8_MAX;
	int32_t t60 = 8124;

	t60 = ((x329<x330)%(x331%x332));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -61;
	volatile uint64_t x336 = 793LLU;
	uint64_t t61 = 3LLU;

	t61 = ((x333<x334)%(x335%x336));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x340 = INT64_MIN;
	volatile int64_t t62 = -1029391229216LL;

	t62 = ((x337<x338)%(x339%x340));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x341 = 16U;
	int16_t x343 = INT16_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t63 = 784583198751278LL;

	t63 = ((x341<x342)%(x343%x344));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MAX;
	uint16_t x348 = 3609U;

	t64 = ((x345<x346)%(x347%x348));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x350 = -1;
	int16_t x352 = INT16_MAX;
	static int64_t t65 = -17494973431311012LL;

	t65 = ((x349<x350)%(x351%x352));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x353 = 24965025305393LL;
	int64_t x354 = -1LL;
	static int16_t x355 = 10418;
	volatile uint8_t x356 = 5U;
	volatile int32_t t66 = -2782930;

	t66 = ((x353<x354)%(x355%x356));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x357 = UINT32_MAX;
	volatile int64_t x358 = 1763526220435188730LL;
	volatile uint32_t x360 = 2649335U;
	static volatile uint32_t t67 = 112U;

	t67 = ((x357<x358)%(x359%x360));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = -2;
	int8_t x362 = INT8_MAX;
	int32_t t68 = -1680201;

	t68 = ((x361<x362)%(x363%x364));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	static int8_t x367 = -44;
	int8_t x368 = INT8_MIN;
	volatile int32_t t69 = 309;

	t69 = ((x365<x366)%(x367%x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x369 = 11677U;
	uint8_t x370 = 99U;
	int16_t x372 = 13;
	volatile int32_t t70 = -92904;

	t70 = ((x369<x370)%(x371%x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x373 = -1;
	int64_t x374 = 67829069LL;
	static int32_t x375 = INT32_MIN;

	t71 = ((x373<x374)%(x375%x376));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x385 = INT64_MIN;
	uint32_t x387 = 307544087U;
	static uint64_t x388 = 12572083971LLU;
	volatile uint64_t t72 = 61143LLU;

	t72 = ((x385<x386)%(x387%x388));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = -1LL;
	int8_t x392 = -8;
	volatile uint64_t t73 = 39556944324LLU;

	t73 = ((x389<x390)%(x391%x392));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x393 = 4U;
	int64_t x394 = INT64_MAX;
	int32_t x395 = 11;
	static uint32_t x396 = 1095U;
	uint32_t t74 = 99619359U;

	t74 = ((x393<x394)%(x395%x396));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x401 = -1;
	int64_t x402 = INT64_MAX;
	int32_t x403 = 38658882;
	volatile uint16_t x404 = 85U;

	t75 = ((x401<x402)%(x403%x404));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x405 = INT8_MIN;
	int16_t x406 = -225;
	uint64_t x407 = 1LLU;
	static int32_t x408 = -46;
	volatile uint64_t t76 = 255709247597LLU;

	t76 = ((x405<x406)%(x407%x408));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MIN;
	static int64_t x411 = -1LL;
	volatile int64_t t77 = 890LL;

	t77 = ((x409<x410)%(x411%x412));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x422 = INT64_MAX;
	static int8_t x423 = INT8_MAX;
	volatile int32_t x424 = INT32_MIN;
	static int32_t t78 = -2016;

	t78 = ((x421<x422)%(x423%x424));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x429 = INT32_MAX;
	int32_t x430 = -17;
	int64_t x431 = -1LL;
	static int8_t x432 = INT8_MIN;
	int64_t t79 = 89LL;

	t79 = ((x429<x430)%(x431%x432));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x433 = -1;
	static uint64_t x434 = 7837180424LLU;
	volatile int16_t x436 = 29;
	volatile int32_t t80 = 1260552;

	t80 = ((x433<x434)%(x435%x436));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t81 = 1347631769U;

	t81 = ((x437<x438)%(x439%x440));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x447 = INT64_MIN;
	uint32_t x448 = 11081103U;
	static volatile int64_t t82 = -11128432LL;

	t82 = ((x445<x446)%(x447%x448));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x449 = 1;
	volatile int32_t x450 = -1;
	uint16_t x451 = 3728U;
	int8_t x452 = INT8_MIN;
	int32_t t83 = 1041851;

	t83 = ((x449<x450)%(x451%x452));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x453 = -1;
	int32_t x454 = 5723;
	int8_t x455 = INT8_MAX;
	uint16_t x456 = 58U;
	volatile int32_t t84 = -5701132;

	t84 = ((x453<x454)%(x455%x456));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MIN;
	uint32_t x460 = 147U;
	uint32_t t85 = 7U;

	t85 = ((x457<x458)%(x459%x460));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x461 = 162LL;
	int8_t x462 = INT8_MIN;
	int64_t x463 = 8300522160812LL;
	int32_t x464 = INT32_MIN;
	volatile int64_t t86 = 117797927219LL;

	t86 = ((x461<x462)%(x463%x464));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x465 = INT8_MIN;
	int8_t x466 = -1;
	static int16_t x468 = INT16_MAX;
	int32_t t87 = -60857711;

	t87 = ((x465<x466)%(x467%x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x473 = 58U;
	volatile int16_t x475 = -1;
	int64_t x476 = 3368279LL;
	int64_t t88 = 9694911547839LL;

	t88 = ((x473<x474)%(x475%x476));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = 14;
	volatile int64_t x478 = -1LL;
	int8_t x480 = 29;
	static int32_t t89 = 32722;

	t89 = ((x477<x478)%(x479%x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x485 = 19841U;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t90 = 25LLU;

	t90 = ((x485<x486)%(x487%x488));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x489 = 60LL;
	uint16_t x490 = UINT16_MAX;
	int16_t x491 = -159;
	int8_t x492 = INT8_MAX;
	int32_t t91 = 628;

	t91 = ((x489<x490)%(x491%x492));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x494 = 2U;
	static uint64_t x495 = 177345769942667LLU;
	static volatile uint8_t x496 = 24U;
	uint64_t t92 = 26328198962860LLU;

	t92 = ((x493<x494)%(x495%x496));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x501 = 3246U;
	int32_t x502 = -28760;
	static uint32_t x503 = UINT32_MAX;
	int64_t x504 = INT64_MAX;

	t93 = ((x501<x502)%(x503%x504));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x505 = 18255867600493LL;
	volatile int32_t x507 = -1383671;
	int64_t x508 = -1815LL;
	volatile int64_t t94 = 1762636881LL;

	t94 = ((x505<x506)%(x507%x508));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x509 = INT64_MAX;
	int8_t x510 = -1;
	int16_t x511 = 80;
	static uint64_t x512 = 230314611298LLU;
	uint64_t t95 = 4LLU;

	t95 = ((x509<x510)%(x511%x512));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x517 = 1U;
	static int64_t x518 = INT64_MIN;
	int32_t x520 = 2492243;
	volatile int32_t t96 = 6130141;

	t96 = ((x517<x518)%(x519%x520));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x521 = -35038LL;
	uint16_t x522 = UINT16_MAX;
	int64_t x523 = INT64_MAX;
	volatile int64_t x524 = INT64_MIN;
	volatile int64_t t97 = 1862782641985180LL;

	t97 = ((x521<x522)%(x523%x524));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x526 = 4;
	static volatile int32_t x528 = INT32_MIN;
	uint64_t t98 = 864574LLU;

	t98 = ((x525<x526)%(x527%x528));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x553 = UINT32_MAX;
	int32_t x554 = 237018114;
	uint64_t x555 = 149781916LLU;
	int32_t x556 = INT32_MIN;
	uint64_t t99 = 16324731254437290LLU;

	t99 = ((x553<x554)%(x555%x556));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

