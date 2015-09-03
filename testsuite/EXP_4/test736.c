#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 34084711U;
int32_t t1 = -26;
int8_t x13 = INT8_MIN;
int32_t x15 = -1;
int32_t x19 = 7310;
int32_t x39 = 161;
volatile int32_t t5 = 434;
int16_t x41 = 5;
static int32_t x45 = INT32_MAX;
volatile uint16_t x47 = 2029U;
int64_t x48 = INT64_MIN;
volatile int32_t t7 = -49134;
static int64_t x51 = -1LL;
int8_t x52 = -38;
uint64_t x59 = UINT64_MAX;
static int8_t x62 = INT8_MAX;
uint32_t x69 = 21U;
uint64_t x70 = 110218690LLU;
int64_t x71 = INT64_MIN;
volatile int64_t x83 = INT64_MIN;
uint16_t x84 = UINT16_MAX;
static uint16_t x85 = UINT16_MAX;
static int16_t x86 = INT16_MAX;
int16_t x101 = INT16_MAX;
volatile int32_t t16 = 1;
uint16_t x111 = 739U;
int16_t x113 = -1;
uint16_t x114 = 21709U;
int64_t x118 = INT64_MIN;
uint16_t x125 = UINT16_MAX;
static uint32_t x132 = 3838U;
volatile int32_t t22 = -852;
int8_t x140 = INT8_MAX;
int64_t x144 = INT64_MIN;
int16_t x148 = 12;
uint16_t x150 = 2U;
int32_t t27 = -339023678;
uint8_t x159 = 106U;
static int8_t x166 = -1;
uint64_t x173 = 98088LLU;
int64_t x174 = INT64_MAX;
int64_t x176 = INT64_MIN;
int8_t x179 = 55;
volatile int32_t x187 = INT32_MAX;
static int32_t t33 = 21634;
int16_t x207 = INT16_MIN;
int32_t x216 = INT32_MIN;
volatile int32_t t36 = 220741209;
volatile uint8_t x221 = UINT8_MAX;
static int32_t t37 = 989;
int32_t x225 = INT32_MIN;
static int32_t t38 = -28;
uint16_t x238 = UINT16_MAX;
int32_t t39 = -66336059;
int32_t t40 = -3;
volatile int32_t t41 = 0;
uint32_t x273 = 44U;
uint64_t x276 = 26653799LLU;
int16_t x282 = INT16_MAX;
int64_t x287 = INT64_MAX;
int32_t t47 = -9599232;
int8_t x294 = -1;
static int64_t x296 = 102103073865347607LL;
volatile uint32_t x303 = 49677507U;
uint16_t x312 = 18U;
uint8_t x318 = 19U;
static int8_t x323 = 15;
int64_t x325 = -1LL;
volatile uint16_t x330 = UINT16_MAX;
volatile int32_t t55 = -3208242;
int8_t x355 = -1;
int8_t x356 = INT8_MAX;
int8_t x365 = INT8_MIN;
int32_t x367 = 92397;
volatile int64_t x383 = -5911888LL;
uint16_t x392 = 321U;
volatile int8_t x393 = 0;
int64_t x395 = 374578182945821348LL;
static volatile int32_t t67 = -41;
uint64_t x405 = 3127862372LLU;
volatile int64_t x411 = INT64_MAX;
uint8_t x412 = 8U;
static int8_t x414 = INT8_MIN;
int64_t x430 = -1LL;
int8_t x432 = INT8_MIN;
int32_t t74 = -244055874;
int16_t x439 = INT16_MAX;
int8_t x443 = -1;
volatile int32_t t77 = -16185;
int64_t x455 = INT64_MIN;
static int32_t x457 = INT32_MAX;
static int32_t x458 = 1122439;
uint16_t x465 = 4U;
uint16_t x474 = 0U;
static int16_t x477 = 5433;
int32_t t84 = 33;
static uint64_t x483 = 953729223722179LLU;
int32_t t85 = -24865085;
int8_t x487 = -1;
static int32_t t86 = 18;
int32_t t87 = -2207484;
volatile uint8_t x503 = 20U;
uint64_t x504 = 1991098LLU;
int32_t t90 = 4;
int16_t x505 = INT16_MAX;
int32_t t91 = 15;
static int64_t x512 = INT64_MIN;
uint8_t x520 = UINT8_MAX;
int16_t x524 = INT16_MAX;
int8_t x533 = -1;
static int64_t x534 = -1LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int32_t x3 = -330;
	uint8_t x4 = 4U;
	static volatile int32_t t0 = 12;

	t0 = (x1==(x2%(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	int32_t x10 = -25077304;
	int32_t x11 = -1;
	int32_t x12 = INT32_MAX;

	t1 = (x9==(x10%(x11%x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MAX;
	static uint8_t x16 = 111U;
	int32_t t2 = -114;

	t2 = (x13==(x14%(x15%x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 6U;
	static uint8_t x18 = 12U;
	uint32_t x20 = 1300621457U;
	static volatile int32_t t3 = 129579;

	t3 = (x17==(x18%(x19%x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	int8_t x26 = -2;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t4 = -21418750;

	t4 = (x25==(x26%(x27%x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x37 = 24U;
	uint16_t x38 = 934U;
	int64_t x40 = INT64_MIN;

	t5 = (x37==(x38%(x39%x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x42 = UINT64_MAX;
	volatile uint16_t x43 = 12891U;
	static uint16_t x44 = UINT16_MAX;
	int32_t t6 = 127741;

	t6 = (x41==(x42%(x43%x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x46 = 0U;

	t7 = (x45==(x46%(x47%x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x49 = INT8_MIN;
	int32_t x50 = -1;
	static int32_t t8 = -119;

	t8 = (x49==(x50%(x51%x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x57 = 59894U;
	int64_t x58 = -1LL;
	int64_t x60 = INT64_MIN;
	int32_t t9 = 541;

	t9 = (x57==(x58%(x59%x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 1939265737938095LLU;
	uint64_t x63 = 270562093630LLU;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t10 = -4;

	t10 = (x61==(x62%(x63%x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x72 = 46464LLU;
	volatile int32_t t11 = -39304500;

	t11 = (x69==(x70%(x71%x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 225U;
	uint32_t x74 = 574U;
	static int64_t x75 = INT64_MAX;
	int16_t x76 = -2;
	volatile int32_t t12 = -48;

	t12 = (x73==(x74%(x75%x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x81 = INT32_MAX;
	static uint8_t x82 = 0U;
	volatile int32_t t13 = 451;

	t13 = (x81==(x82%(x83%x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x87 = 9U;
	uint8_t x88 = 15U;
	volatile int32_t t14 = 1558498;

	t14 = (x85==(x86%(x87%x88)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x89 = INT64_MAX;
	volatile int64_t x90 = -1LL;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 322LLU;
	volatile int32_t t15 = 0;

	t15 = (x89==(x90%(x91%x92)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x102 = 12U;
	int32_t x103 = INT32_MAX;
	uint8_t x104 = 12U;

	t16 = (x101==(x102%(x103%x104)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = INT32_MIN;
	static volatile uint16_t x110 = 11217U;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t17 = -11945332;

	t17 = (x109==(x110%(x111%x112)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x115 = 4U;
	static int8_t x116 = -8;
	int32_t t18 = -1;

	t18 = (x113==(x114%(x115%x116)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = INT8_MAX;
	static int32_t x119 = -14625;
	volatile uint8_t x120 = 48U;
	volatile int32_t t19 = -1993913;

	t19 = (x117==(x118%(x119%x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x126 = INT16_MAX;
	int64_t x127 = -374838465691LL;
	static volatile uint8_t x128 = 58U;
	int32_t t20 = 10907;

	t20 = (x125==(x126%(x127%x128)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x129 = INT32_MIN;
	int64_t x130 = 129255766579018LL;
	uint8_t x131 = 3U;
	int32_t t21 = -54892266;

	t21 = (x129==(x130%(x131%x132)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = INT8_MIN;
	volatile int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static uint32_t x136 = 5122U;

	t22 = (x133==(x134%(x135%x136)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x137 = -1;
	uint64_t x138 = 215LLU;
	uint32_t x139 = 1390122788U;
	volatile int32_t t23 = 328663;

	t23 = (x137==(x138%(x139%x140)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 3301316911LLU;
	int32_t t24 = -61210;

	t24 = (x141==(x142%(x143%x144)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x145 = 3;
	uint16_t x146 = 1691U;
	static int64_t x147 = -1LL;
	volatile int32_t t25 = 1;

	t25 = (x145==(x146%(x147%x148)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = 220469771083616LL;
	uint64_t x151 = 2347048LLU;
	uint64_t x152 = UINT64_MAX;
	static int32_t t26 = 214448472;

	t26 = (x149==(x150%(x151%x152)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = 125U;
	int64_t x154 = INT64_MAX;
	static int64_t x155 = -1LL;
	int64_t x156 = INT64_MIN;

	t27 = (x153==(x154%(x155%x156)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = 319313074909LL;
	int32_t x158 = INT32_MIN;
	uint64_t x160 = 186501057737657LLU;
	static int32_t t28 = -4;

	t28 = (x157==(x158%(x159%x160)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x165 = INT64_MIN;
	static uint8_t x167 = 61U;
	volatile int32_t x168 = 1245;
	int32_t t29 = 7366;

	t29 = (x165==(x166%(x167%x168)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x169 = -792352LL;
	int8_t x170 = INT8_MIN;
	volatile int64_t x171 = INT64_MAX;
	static uint64_t x172 = 10986899392371LLU;
	int32_t t30 = -683649575;

	t30 = (x169==(x170%(x171%x172)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x175 = 1U;
	int32_t t31 = 4;

	t31 = (x173==(x174%(x175%x176)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	static uint16_t x180 = UINT16_MAX;
	static int32_t t32 = -3395512;

	t32 = (x177==(x178%(x179%x180)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x185 = -1;
	uint32_t x186 = 182797917U;
	volatile uint16_t x188 = UINT16_MAX;

	t33 = (x185==(x186%(x187%x188)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = -12;
	int16_t x202 = -1;
	uint16_t x203 = 43U;
	volatile uint32_t x204 = 31837U;
	volatile int32_t t34 = 32051;

	t34 = (x201==(x202%(x203%x204)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 5U;
	static uint8_t x208 = 6U;
	int32_t t35 = 9389;

	t35 = (x205==(x206%(x207%x208)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = 1LL;
	static volatile uint64_t x215 = UINT64_MAX;

	t36 = (x213==(x214%(x215%x216)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x222 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;

	t37 = (x221==(x222%(x223%x224)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x226 = -9250066;
	int8_t x227 = -1;
	static int32_t x228 = -948111;

	t38 = (x225==(x226%(x227%x228)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x237 = -1040177177062717213LL;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = INT64_MIN;

	t39 = (x237==(x238%(x239%x240)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = -4870573917LL;
	uint64_t x242 = 2078491LLU;
	int32_t x243 = INT32_MAX;
	static uint64_t x244 = 152LLU;

	t40 = (x241==(x242%(x243%x244)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x245 = INT32_MIN;
	volatile int32_t x246 = INT32_MAX;
	uint8_t x247 = 25U;
	int16_t x248 = INT16_MIN;

	t41 = (x245==(x246%(x247%x248)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x249 = UINT16_MAX;
	static int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	static volatile int32_t t42 = -210263;

	t42 = (x249==(x250%(x251%x252)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x257 = 0U;
	uint16_t x258 = 11U;
	int8_t x259 = 31;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t43 = 2890;

	t43 = (x257==(x258%(x259%x260)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x274 = -118870141;
	volatile int32_t x275 = INT32_MIN;
	int32_t t44 = -96;

	t44 = (x273==(x274%(x275%x276)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x277 = INT32_MAX;
	static uint32_t x278 = 234922U;
	int32_t x279 = -1100;
	static int32_t x280 = -45519154;
	static volatile int32_t t45 = -23881;

	t45 = (x277==(x278%(x279%x280)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x283 = 14679058150028002LLU;
	volatile uint32_t x284 = 4615808U;
	volatile int32_t t46 = -29129;

	t46 = (x281==(x282%(x283%x284)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = INT32_MAX;
	volatile uint16_t x288 = 9U;

	t47 = (x285==(x286%(x287%x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x290 = -1LL;
	int8_t x291 = INT8_MIN;
	static uint64_t x292 = UINT64_MAX;
	volatile int32_t t48 = -346;

	t48 = (x289==(x290%(x291%x292)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x293 = INT64_MIN;
	volatile uint8_t x295 = 2U;
	int32_t t49 = 9;

	t49 = (x293==(x294%(x295%x296)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MAX;
	volatile int8_t x304 = -17;
	static volatile int32_t t50 = 39;

	t50 = (x301==(x302%(x303%x304)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x309 = 5U;
	uint64_t x310 = 2535083159LLU;
	int8_t x311 = INT8_MAX;
	int32_t t51 = -518096;

	t51 = (x309==(x310%(x311%x312)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x317 = UINT32_MAX;
	uint64_t x319 = UINT64_MAX;
	volatile int64_t x320 = INT64_MAX;
	volatile int32_t t52 = 0;

	t52 = (x317==(x318%(x319%x320)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x321 = INT16_MIN;
	static int16_t x322 = INT16_MIN;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t53 = -89325479;

	t53 = (x321==(x322%(x323%x324)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x326 = -1LL;
	int8_t x327 = INT8_MIN;
	static int64_t x328 = 7502283007805LL;
	volatile int32_t t54 = 1;

	t54 = (x325==(x326%(x327%x328)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x329 = 2U;
	volatile uint8_t x331 = UINT8_MAX;
	int32_t x332 = 18;

	t55 = (x329==(x330%(x331%x332)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MAX;
	int32_t t56 = 168;

	t56 = (x333==(x334%(x335%x336)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x337 = 78U;
	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	static volatile int64_t x340 = INT64_MAX;
	int32_t t57 = 1;

	t57 = (x337==(x338%(x339%x340)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MAX;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 18077U;
	static volatile int32_t t58 = 323;

	t58 = (x341==(x342%(x343%x344)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x349 = -1065;
	static int32_t x350 = -1;
	int64_t x351 = 54180428LL;
	volatile uint64_t x352 = UINT64_MAX;
	int32_t t59 = 6482;

	t59 = (x349==(x350%(x351%x352)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x353 = 1682655639893LLU;
	uint8_t x354 = UINT8_MAX;
	int32_t t60 = 1;

	t60 = (x353==(x354%(x355%x356)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x357 = UINT32_MAX;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = -191859789;
	static uint32_t x360 = 1105716U;
	int32_t t61 = 14196186;

	t61 = (x357==(x358%(x359%x360)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x361 = -1;
	int8_t x362 = INT8_MIN;
	volatile uint64_t x363 = 2564224793623363174LLU;
	int32_t x364 = -6920;
	int32_t t62 = -15327;

	t62 = (x361==(x362%(x363%x364)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x366 = UINT16_MAX;
	volatile uint8_t x368 = UINT8_MAX;
	int32_t t63 = -20411;

	t63 = (x365==(x366%(x367%x368)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x373 = 13;
	int8_t x374 = 1;
	static int32_t x375 = -1073588552;
	uint16_t x376 = 30U;
	int32_t t64 = -58243;

	t64 = (x373==(x374%(x375%x376)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x381 = 41;
	int64_t x382 = INT64_MIN;
	int64_t x384 = -2228015011935620LL;
	int32_t t65 = -40347006;

	t65 = (x381==(x382%(x383%x384)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = 8208U;
	uint32_t x391 = 241U;
	int32_t t66 = -3293;

	t66 = (x389==(x390%(x391%x392)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x394 = 26U;
	uint32_t x396 = 358890266U;

	t67 = (x393==(x394%(x395%x396)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x397 = 7856;
	volatile int8_t x398 = INT8_MIN;
	int64_t x399 = 202151470342LL;
	uint64_t x400 = 30019LLU;
	static int32_t t68 = -3;

	t68 = (x397==(x398%(x399%x400)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x401 = -1;
	int32_t x402 = INT32_MIN;
	static int16_t x403 = -141;
	int64_t x404 = -4042548460289LL;
	int32_t t69 = -2792556;

	t69 = (x401==(x402%(x403%x404)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x406 = 2267279199530895LLU;
	int32_t x407 = -1;
	uint16_t x408 = 1079U;
	static volatile int32_t t70 = -1;

	t70 = (x405==(x406%(x407%x408)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MIN;
	int32_t t71 = -14;

	t71 = (x409==(x410%(x411%x412)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x413 = INT32_MAX;
	int16_t x415 = -2920;
	uint64_t x416 = 20590742LLU;
	volatile int32_t t72 = 3314;

	t72 = (x413==(x414%(x415%x416)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x429 = INT64_MIN;
	volatile int8_t x431 = INT8_MAX;
	static volatile int32_t t73 = -962542;

	t73 = (x429==(x430%(x431%x432)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x433 = INT8_MAX;
	static volatile uint16_t x434 = UINT16_MAX;
	uint64_t x435 = 93741LLU;
	int8_t x436 = -3;

	t74 = (x433==(x434%(x435%x436)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x437 = 1U;
	volatile int64_t x438 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	volatile int32_t t75 = 1;

	t75 = (x437==(x438%(x439%x440)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x441 = INT16_MIN;
	static int8_t x442 = INT8_MIN;
	int32_t x444 = INT32_MIN;
	int32_t t76 = 33969775;

	t76 = (x441==(x442%(x443%x444)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x445 = -1;
	uint64_t x446 = 6LLU;
	uint16_t x447 = 55U;
	int16_t x448 = 60;

	t77 = (x445==(x446%(x447%x448)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x453 = INT64_MIN;
	volatile int32_t x454 = INT32_MIN;
	static int64_t x456 = 170334905LL;
	static volatile int32_t t78 = -1;

	t78 = (x453==(x454%(x455%x456)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x459 = INT32_MIN;
	int32_t x460 = 231499;
	volatile int32_t t79 = 5255043;

	t79 = (x457==(x458%(x459%x460)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = INT8_MIN;
	volatile int32_t x462 = -12002010;
	uint8_t x463 = UINT8_MAX;
	uint8_t x464 = 12U;
	volatile int32_t t80 = 0;

	t80 = (x461==(x462%(x463%x464)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x466 = UINT8_MAX;
	int16_t x467 = INT16_MAX;
	volatile int8_t x468 = -45;
	int32_t t81 = -14664;

	t81 = (x465==(x466%(x467%x468)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x469 = 6U;
	int16_t x470 = INT16_MAX;
	int16_t x471 = INT16_MAX;
	volatile uint16_t x472 = 23022U;
	volatile int32_t t82 = -1199333;

	t82 = (x469==(x470%(x471%x472)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x473 = INT16_MIN;
	volatile int64_t x475 = INT64_MIN;
	int16_t x476 = INT16_MAX;
	volatile int32_t t83 = 3514;

	t83 = (x473==(x474%(x475%x476)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x478 = -8475LL;
	int8_t x479 = INT8_MIN;
	static int8_t x480 = -5;

	t84 = (x477==(x478%(x479%x480)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x481 = INT16_MIN;
	int64_t x482 = -1LL;
	int32_t x484 = INT32_MIN;

	t85 = (x481==(x482%(x483%x484)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = 2;
	volatile uint64_t x486 = 30LLU;
	static uint32_t x488 = 1111642959U;

	t86 = (x485==(x486%(x487%x488)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x489 = 484U;
	int64_t x490 = INT64_MAX;
	int8_t x491 = -22;
	volatile int64_t x492 = INT64_MAX;

	t87 = (x489==(x490%(x491%x492)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x493 = UINT32_MAX;
	int32_t x494 = 450;
	uint64_t x495 = 185965390234186013LLU;
	static volatile int32_t x496 = -1;
	int32_t t88 = -175103;

	t88 = (x493==(x494%(x495%x496)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x497 = 89U;
	static int16_t x498 = INT16_MIN;
	int16_t x499 = 6;
	volatile int8_t x500 = INT8_MAX;
	volatile int32_t t89 = 49191279;

	t89 = (x497==(x498%(x499%x500)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x501 = 8091U;
	int32_t x502 = INT32_MIN;

	t90 = (x501==(x502%(x503%x504)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x506 = -1;
	uint32_t x507 = 546113U;
	static uint64_t x508 = 3LLU;

	t91 = (x505==(x506%(x507%x508)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x509 = 1807LL;
	int32_t x510 = 0;
	int16_t x511 = -1;
	volatile int32_t t92 = 3634;

	t92 = (x509==(x510%(x511%x512)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x513 = 114U;
	int64_t x514 = INT64_MIN;
	uint32_t x515 = UINT32_MAX;
	int64_t x516 = INT64_MIN;
	volatile int32_t t93 = -73;

	t93 = (x513==(x514%(x515%x516)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x517 = 885589678;
	uint8_t x518 = 29U;
	volatile uint16_t x519 = 1U;
	int32_t t94 = 88015;

	t94 = (x517==(x518%(x519%x520)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x521 = INT32_MAX;
	int64_t x522 = -390359141006235LL;
	int16_t x523 = -1;
	int32_t t95 = 118554;

	t95 = (x521==(x522%(x523%x524)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MAX;
	uint64_t x531 = 2LLU;
	uint16_t x532 = 632U;
	int32_t t96 = 261260682;

	t96 = (x529==(x530%(x531%x532)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x535 = INT64_MAX;
	int64_t x536 = 124LL;
	int32_t t97 = -43801276;

	t97 = (x533==(x534%(x535%x536)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x545 = -1;
	uint64_t x546 = 54754LLU;
	static uint8_t x547 = UINT8_MAX;
	int64_t x548 = 1545LL;
	int32_t t98 = -1270;

	t98 = (x545==(x546%(x547%x548)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x549 = -416003800672734374LL;
	uint32_t x550 = 756U;
	static int64_t x551 = INT64_MIN;
	int64_t x552 = 1416167044698LL;
	volatile int32_t t99 = 259315;

	t99 = (x549==(x550%(x551%x552)));

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

