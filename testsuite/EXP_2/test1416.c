#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MIN;
int64_t t2 = -186953942341163356LL;
int64_t x28 = 1362635LL;
volatile int64_t t3 = -184169953713142043LL;
static int32_t x38 = 99;
volatile int32_t t5 = -858774552;
static int32_t t7 = -1;
uint8_t x77 = 1U;
uint64_t x78 = 1915962413LLU;
int64_t x80 = INT64_MIN;
int64_t t8 = INT64_MIN;
volatile int64_t x87 = 12808874193848825LL;
uint8_t x104 = UINT8_MAX;
int16_t x122 = INT16_MIN;
int32_t t14 = -248445190;
uint8_t x132 = 0U;
int16_t x144 = INT16_MIN;
int64_t t16 = -126847539315949LL;
int32_t x147 = -1;
static uint16_t x149 = UINT16_MAX;
int32_t t19 = -1;
int16_t x161 = INT16_MAX;
int16_t x183 = INT16_MAX;
static int64_t x193 = -5671796758LL;
int64_t x194 = -1LL;
uint8_t x196 = 5U;
int16_t x202 = -1;
int32_t x257 = -342941;
int8_t x260 = 22;
volatile int8_t x263 = -1;
uint8_t x270 = UINT8_MAX;
static int32_t t31 = 248268446;
int32_t x276 = INT32_MIN;
static int64_t x279 = INT64_MAX;
static uint64_t x280 = 7LLU;
int16_t x283 = -38;
int16_t x284 = INT16_MIN;
uint16_t x292 = UINT16_MAX;
int64_t x302 = -20478953445821LL;
int64_t t37 = -22064919968189593LL;
int16_t x318 = INT16_MAX;
static int32_t t41 = -4295841;
int8_t x351 = 1;
volatile int32_t x391 = 1;
volatile int32_t t48 = 50536;
int32_t t49 = -11487169;
uint8_t x421 = UINT8_MAX;
int16_t x422 = INT16_MIN;
int32_t x427 = 958333;
static int16_t x430 = INT16_MAX;
static volatile uint64_t t52 = 15375670LLU;
uint64_t x433 = 320905734LLU;
int8_t x441 = 0;
volatile uint16_t x443 = 608U;
int32_t x445 = INT32_MAX;
static uint32_t x474 = 77U;
int32_t x497 = 111;
int32_t x502 = INT32_MIN;
static uint32_t x504 = 100U;
volatile int64_t x513 = -2LL;
uint16_t x518 = 125U;
int32_t t63 = -5706435;
uint16_t x539 = 340U;
static volatile int64_t t64 = 10867184697363497LL;
volatile int32_t x542 = -760;
volatile int32_t t67 = 77424;
uint64_t x585 = UINT64_MAX;
static uint8_t x594 = 19U;
int8_t x598 = INT8_MIN;
int32_t t70 = 226301;
uint32_t x616 = 465U;
volatile int64_t t71 = 60925925623056959LL;
int16_t x645 = INT16_MIN;
volatile int16_t x646 = INT16_MIN;
int32_t t74 = 1;
static uint32_t x651 = UINT32_MAX;
static int32_t t75 = -3325;
uint8_t x657 = UINT8_MAX;
int64_t x674 = INT64_MIN;
uint16_t x676 = 1832U;
static uint16_t x695 = UINT16_MAX;
int64_t x700 = INT64_MAX;
int32_t t82 = 5734686;
int16_t x705 = INT16_MIN;
uint32_t x707 = UINT32_MAX;
volatile uint8_t x708 = UINT8_MAX;
static uint16_t x721 = 46U;
volatile int32_t t84 = -610620587;
int8_t x727 = INT8_MIN;
static volatile uint64_t x728 = 14490LLU;
int32_t x732 = INT32_MAX;
uint64_t x735 = UINT64_MAX;
static int8_t x738 = -8;
uint64_t x740 = 259870LLU;
static int32_t x755 = INT32_MAX;
static int64_t x756 = INT64_MIN;
uint64_t x773 = UINT64_MAX;
static int8_t x785 = -1;
volatile uint32_t x789 = UINT32_MAX;
volatile int8_t x793 = INT8_MIN;
int64_t x796 = -1LL;
int64_t x824 = INT64_MIN;
int16_t x846 = -240;


void f0(void) {
	int64_t x5 = INT64_MAX;
	int8_t x7 = INT8_MAX;
	uint32_t x8 = UINT32_MAX;
	static int64_t t0 = 41471568518LL;

	t0 = ((x5%(x6<x7))|x8);

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static volatile uint64_t x10 = 1094733864914880906LLU;
	int8_t x11 = INT8_MIN;
	int64_t x12 = 3906467LL;
	static volatile int64_t t1 = 9539245190056801LL;

	t1 = ((x9%(x10<x11))|x12);

	if (t1 != 3906467LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	uint16_t x23 = 16U;
	static volatile int64_t x24 = -1833141217LL;

	t2 = ((x21%(x22<x23))|x24);

	if (t2 != -1833141217LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = INT8_MAX;
	int16_t x26 = -1;
	uint8_t x27 = 127U;

	t3 = ((x25%(x26<x27))|x28);

	if (t3 != 1362635LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -1073014163LL;
	static int8_t x30 = -3;
	int8_t x31 = -1;
	volatile int8_t x32 = -5;
	int64_t t4 = 1032175656LL;

	t4 = ((x29%(x30<x31))|x32);

	if (t4 != -5LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x37 = -1;
	uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 115U;

	t5 = ((x37%(x38<x39))|x40);

	if (t5 != 115) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x45 = -32931259568858729LL;
	static int8_t x46 = -1;
	int8_t x47 = 0;
	int64_t x48 = INT64_MAX;
	int64_t t6 = INT64_MAX;

	t6 = ((x45%(x46<x47))|x48);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x57 = INT8_MIN;
	uint8_t x58 = 111U;
	uint16_t x59 = 875U;
	uint16_t x60 = UINT16_MAX;

	t7 = ((x57%(x58<x59))|x60);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x79 = -1;

	t8 = ((x77%(x78<x79))|x80);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MAX;
	uint8_t x88 = 4U;
	int32_t t9 = -30526901;

	t9 = ((x85%(x86<x87))|x88);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x97 = -7;
	int64_t x98 = -1LL;
	int16_t x99 = 12;
	int8_t x100 = -1;
	static volatile int32_t t10 = 384529;

	t10 = ((x97%(x98<x99))|x100);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x101 = -40LL;
	int16_t x102 = 33;
	int32_t x103 = INT32_MAX;
	int64_t t11 = 15LL;

	t11 = ((x101%(x102<x103))|x104);

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MIN;
	volatile int32_t t12 = 823887349;

	t12 = ((x113%(x114<x115))|x116);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x117 = INT64_MIN;
	volatile int32_t x118 = INT32_MIN;
	static int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MIN;
	static volatile int64_t t13 = 834562570LL;

	t13 = ((x117%(x118<x119))|x120);

	if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x121 = 31;
	static int8_t x123 = INT8_MAX;
	static volatile uint16_t x124 = 2U;

	t14 = ((x121%(x122<x123))|x124);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x129 = 22U;
	uint32_t x130 = 31U;
	int16_t x131 = INT16_MIN;
	volatile int32_t t15 = -2984997;

	t15 = ((x129%(x130<x131))|x132);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x141 = INT64_MAX;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = UINT64_MAX;

	t16 = ((x141%(x142<x143))|x144);

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x146 = 3780589U;
	int64_t x148 = INT64_MAX;
	int64_t t17 = INT64_MAX;

	t17 = ((x145%(x146<x147))|x148);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x150 = INT32_MIN;
	static int16_t x151 = 13;
	uint16_t x152 = 3U;
	volatile int32_t t18 = -62539;

	t18 = ((x149%(x150<x151))|x152);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x157 = -2;
	int8_t x158 = 1;
	uint32_t x159 = 15U;
	int16_t x160 = INT16_MIN;

	t19 = ((x157%(x158<x159))|x160);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x162 = 5680785156LLU;
	volatile uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t20 = 16018;

	t20 = ((x161%(x162<x163))|x164);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x173 = 23LLU;
	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MAX;
	int16_t x176 = INT16_MIN;
	volatile uint64_t t21 = 29515538288466LLU;

	t21 = ((x173%(x174<x175))|x176);

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x181 = INT32_MAX;
	int16_t x182 = -42;
	int32_t x184 = 12348;
	int32_t t22 = 119489;

	t22 = ((x181%(x182<x183))|x184);

	if (t22 != 12348) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x195 = UINT16_MAX;
	int64_t t23 = -196821289147636LL;

	t23 = ((x193%(x194<x195))|x196);

	if (t23 != 5LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = -7364;
	int8_t x199 = -1;
	volatile int64_t x200 = -1LL;
	int64_t t24 = -185423304LL;

	t24 = ((x197%(x198<x199))|x200);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x201 = -1;
	static volatile int64_t x203 = INT64_MAX;
	uint16_t x204 = UINT16_MAX;
	static int32_t t25 = -3;

	t25 = ((x201%(x202<x203))|x204);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x233 = INT64_MIN;
	static uint64_t x234 = 30109LLU;
	volatile int16_t x235 = -1;
	int8_t x236 = 30;
	int64_t t26 = 17640400544190LL;

	t26 = ((x233%(x234<x235))|x236);

	if (t26 != 30LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x241 = -1;
	int32_t x242 = -1;
	uint16_t x243 = 3959U;
	static int8_t x244 = INT8_MIN;
	int32_t t27 = -969040;

	t27 = ((x241%(x242<x243))|x244);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x245 = -1;
	volatile uint16_t x246 = 4U;
	static uint8_t x247 = UINT8_MAX;
	static int8_t x248 = -1;
	static int32_t t28 = -3;

	t28 = ((x245%(x246<x247))|x248);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int32_t t29 = -376839111;

	t29 = ((x257%(x258<x259))|x260);

	if (t29 != 22) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x261 = 0U;
	int16_t x262 = INT16_MIN;
	static int32_t x264 = INT32_MIN;
	static int32_t t30 = INT32_MIN;

	t30 = ((x261%(x262<x263))|x264);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x269 = -1;
	uint16_t x271 = 5399U;
	static int32_t x272 = -1;

	t31 = ((x269%(x270<x271))|x272);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	int8_t x275 = 0;
	static int64_t t32 = 1438372420309721159LL;

	t32 = ((x273%(x274<x275))|x276);

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x277 = INT8_MAX;
	volatile uint16_t x278 = 1653U;
	volatile uint64_t t33 = 106147LLU;

	t33 = ((x277%(x278<x279))|x280);

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x281 = -2185;
	volatile int64_t x282 = -31968123455LL;
	int32_t t34 = 732083;

	t34 = ((x281%(x282<x283))|x284);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MIN;
	volatile int32_t x288 = INT32_MAX;
	int32_t t35 = INT32_MAX;

	t35 = ((x285%(x286<x287))|x288);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x289 = 4428957718014LL;
	int8_t x290 = 2;
	int64_t x291 = 86308947LL;
	int64_t t36 = 1776558209LL;

	t36 = ((x289%(x290<x291))|x292);

	if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x301 = -1;
	int16_t x303 = INT16_MAX;
	int64_t x304 = -1LL;

	t37 = ((x301%(x302<x303))|x304);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x305 = UINT16_MAX;
	volatile int16_t x306 = INT16_MIN;
	uint8_t x307 = 47U;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x305%(x306<x307))|x308);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x313 = 139835590U;
	int32_t x314 = -354108297;
	uint32_t x315 = UINT32_MAX;
	uint8_t x316 = 101U;
	uint32_t t39 = 14606227U;

	t39 = ((x313%(x314<x315))|x316);

	if (t39 != 101U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x317 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	volatile int16_t x320 = INT16_MIN;
	int64_t t40 = 1616928LL;

	t40 = ((x317%(x318<x319))|x320);

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 935LLU;
	int64_t x331 = INT64_MAX;
	volatile int16_t x332 = -1;

	t41 = ((x329%(x330<x331))|x332);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x345 = INT32_MAX;
	static int16_t x346 = INT16_MAX;
	static uint32_t x347 = 182554U;
	int8_t x348 = -1;
	int32_t t42 = 1076037;

	t42 = ((x345%(x346<x347))|x348);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x349 = UINT8_MAX;
	int64_t x350 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t43 = INT64_MIN;

	t43 = ((x349%(x350<x351))|x352);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x357 = 25;
	int64_t x358 = INT64_MIN;
	volatile uint32_t x359 = UINT32_MAX;
	int64_t x360 = -1LL;
	int64_t t44 = -1717456468LL;

	t44 = ((x357%(x358<x359))|x360);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x361 = 5U;
	uint64_t x362 = 11568923289230321LLU;
	int8_t x363 = INT8_MIN;
	static int8_t x364 = -2;
	volatile int32_t t45 = 26;

	t45 = ((x361%(x362<x363))|x364);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x373 = -3;
	uint8_t x374 = 54U;
	int64_t x375 = 32422000920973804LL;
	int16_t x376 = INT16_MAX;
	volatile int32_t t46 = -1622;

	t46 = ((x373%(x374<x375))|x376);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x377 = -17;
	int32_t x378 = -393;
	static int16_t x379 = INT16_MAX;
	static uint16_t x380 = 250U;
	volatile int32_t t47 = 467124090;

	t47 = ((x377%(x378<x379))|x380);

	if (t47 != 250) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x389 = 7U;
	volatile int32_t x390 = INT32_MIN;
	int32_t x392 = -1;

	t48 = ((x389%(x390<x391))|x392);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 124U;
	int8_t x396 = -1;

	t49 = ((x393%(x394<x395))|x396);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x423 = 400U;
	int16_t x424 = 157;
	int32_t t50 = 0;

	t50 = ((x421%(x422<x423))|x424);

	if (t50 != 157) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x425 = 1U;
	static volatile int16_t x426 = 9896;
	volatile uint8_t x428 = 4U;
	volatile int32_t t51 = -1;

	t51 = ((x425%(x426<x427))|x428);

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x429 = 487;
	uint64_t x431 = 525449943LLU;
	uint64_t x432 = 8909LLU;

	t52 = ((x429%(x430<x431))|x432);

	if (t52 != 8909LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x434 = UINT16_MAX;
	uint64_t x435 = 5926026550184LLU;
	static int16_t x436 = -11175;
	uint64_t t53 = 5384022LLU;

	t53 = ((x433%(x434<x435))|x436);

	if (t53 != 18446744073709540441LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x442 = INT16_MIN;
	volatile int64_t x444 = -5638216LL;
	volatile int64_t t54 = 372663LL;

	t54 = ((x441%(x442<x443))|x444);

	if (t54 != -5638216LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x446 = 253668049883991LLU;
	volatile int64_t x447 = INT64_MAX;
	int32_t x448 = INT32_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = ((x445%(x446<x447))|x448);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x457 = 1821;
	int64_t x458 = INT64_MIN;
	volatile int16_t x459 = INT16_MAX;
	volatile int16_t x460 = 0;
	int32_t t56 = -7529029;

	t56 = ((x457%(x458<x459))|x460);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x469 = UINT8_MAX;
	static int32_t x470 = INT32_MIN;
	int8_t x471 = -56;
	int64_t x472 = INT64_MIN;
	static int64_t t57 = INT64_MIN;

	t57 = ((x469%(x470<x471))|x472);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x473 = 441;
	static uint32_t x475 = 29897783U;
	uint32_t x476 = 127242045U;
	uint32_t t58 = 3U;

	t58 = ((x473%(x474<x475))|x476);

	if (t58 != 127242045U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x477 = 398U;
	uint16_t x478 = 18U;
	volatile int32_t x479 = INT32_MAX;
	static volatile int8_t x480 = 16;
	uint32_t t59 = 0U;

	t59 = ((x477%(x478<x479))|x480);

	if (t59 != 16U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x498 = 25057U;
	int16_t x499 = INT16_MAX;
	int8_t x500 = -1;
	int32_t t60 = 6042;

	t60 = ((x497%(x498<x499))|x500);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x501 = -1;
	uint8_t x503 = 5U;
	volatile uint32_t t61 = 217U;

	t61 = ((x501%(x502<x503))|x504);

	if (t61 != 100U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x514 = UINT8_MAX;
	uint64_t x515 = UINT64_MAX;
	volatile int32_t x516 = INT32_MAX;
	int64_t t62 = -4465025729121354LL;

	t62 = ((x513%(x514<x515))|x516);

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x517 = INT32_MIN;
	static uint32_t x519 = 493739U;
	uint16_t x520 = UINT16_MAX;

	t63 = ((x517%(x518<x519))|x520);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x537 = INT64_MIN;
	int64_t x538 = -314257644496017354LL;
	int64_t x540 = -423435178472893LL;

	t64 = ((x537%(x538<x539))|x540);

	if (t64 != -423435178472893LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x541 = UINT8_MAX;
	volatile int32_t x543 = 2;
	int8_t x544 = -4;
	static volatile int32_t t65 = -1492275;

	t65 = ((x541%(x542<x543))|x544);

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x549 = -61;
	static volatile int8_t x550 = -1;
	uint8_t x551 = UINT8_MAX;
	static int32_t x552 = INT32_MAX;
	int32_t t66 = INT32_MAX;

	t66 = ((x549%(x550<x551))|x552);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x565 = 249U;
	int64_t x566 = -1LL;
	volatile uint8_t x567 = 4U;
	static int32_t x568 = -1;

	t67 = ((x565%(x566<x567))|x568);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x586 = INT8_MIN;
	int8_t x587 = 1;
	int16_t x588 = INT16_MIN;
	uint64_t t68 = 11793428999753159LLU;

	t68 = ((x585%(x586<x587))|x588);

	if (t68 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x593 = INT16_MIN;
	static uint32_t x595 = 1930621525U;
	int32_t x596 = 146632;
	int32_t t69 = 53;

	t69 = ((x593%(x594<x595))|x596);

	if (t69 != 146632) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x597 = -28;
	static int16_t x599 = 91;
	volatile int16_t x600 = INT16_MIN;

	t70 = ((x597%(x598<x599))|x600);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x613 = INT64_MIN;
	int8_t x614 = -1;
	uint8_t x615 = UINT8_MAX;

	t71 = ((x613%(x614<x615))|x616);

	if (t71 != 465LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x617 = INT16_MIN;
	static uint8_t x618 = UINT8_MAX;
	static int16_t x619 = INT16_MAX;
	uint8_t x620 = UINT8_MAX;
	volatile int32_t t72 = 1;

	t72 = ((x617%(x618<x619))|x620);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x629 = 211U;
	static int8_t x630 = INT8_MIN;
	int64_t x631 = 7150LL;
	static volatile uint64_t x632 = UINT64_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x629%(x630<x631))|x632);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = 0;

	t74 = ((x645%(x646<x647))|x648);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x649 = -1;
	int16_t x650 = INT16_MIN;
	uint16_t x652 = 423U;

	t75 = ((x649%(x650<x651))|x652);

	if (t75 != 423) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x658 = INT64_MIN;
	static uint64_t x659 = UINT64_MAX;
	uint16_t x660 = 214U;
	static int32_t t76 = 434;

	t76 = ((x657%(x658<x659))|x660);

	if (t76 != 214) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x665 = 168;
	int16_t x666 = -1;
	volatile int32_t x667 = INT32_MAX;
	static uint64_t x668 = 1627599478433LLU;
	uint64_t t77 = 9716965201LLU;

	t77 = ((x665%(x666<x667))|x668);

	if (t77 != 1627599478433LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x673 = -10120620085071856LL;
	int8_t x675 = INT8_MIN;
	int64_t t78 = 477LL;

	t78 = ((x673%(x674<x675))|x676);

	if (t78 != 1832LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x677 = INT16_MIN;
	int32_t x678 = INT32_MIN;
	static int16_t x679 = INT16_MIN;
	int16_t x680 = 1;
	volatile int32_t t79 = 6;

	t79 = ((x677%(x678<x679))|x680);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x693 = 49;
	static uint8_t x694 = UINT8_MAX;
	uint8_t x696 = 1U;
	volatile int32_t t80 = -26983299;

	t80 = ((x693%(x694<x695))|x696);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x697 = INT16_MIN;
	int64_t x698 = INT64_MIN;
	uint64_t x699 = UINT64_MAX;
	static int64_t t81 = INT64_MAX;

	t81 = ((x697%(x698<x699))|x700);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MIN;
	volatile int16_t x703 = INT16_MIN;
	static uint8_t x704 = 0U;

	t82 = ((x701%(x702<x703))|x704);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x706 = 21U;
	volatile int32_t t83 = -60;

	t83 = ((x705%(x706<x707))|x708);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x722 = INT64_MIN;
	volatile uint8_t x723 = 108U;
	int32_t x724 = -1;

	t84 = ((x721%(x722<x723))|x724);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x725 = -50;
	int64_t x726 = INT64_MIN;
	static uint64_t t85 = 7304LLU;

	t85 = ((x725%(x726<x727))|x728);

	if (t85 != 14490LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x729 = -51;
	int32_t x730 = -1;
	int64_t x731 = INT64_MAX;
	volatile int32_t t86 = INT32_MAX;

	t86 = ((x729%(x730<x731))|x732);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x733 = -1;
	static int16_t x734 = 7;
	static int32_t x736 = 4728;
	volatile int32_t t87 = -13;

	t87 = ((x733%(x734<x735))|x736);

	if (t87 != 4728) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x737 = -1808096699834LL;
	uint8_t x739 = UINT8_MAX;
	uint64_t t88 = 2101LLU;

	t88 = ((x737%(x738<x739))|x740);

	if (t88 != 259870LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x753 = 124753U;
	int16_t x754 = INT16_MAX;
	static volatile int64_t t89 = INT64_MIN;

	t89 = ((x753%(x754<x755))|x756);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MIN;
	int32_t x763 = -1;
	int8_t x764 = INT8_MIN;
	volatile int32_t t90 = 348243;

	t90 = ((x761%(x762<x763))|x764);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x769 = -1;
	volatile int8_t x770 = INT8_MIN;
	static uint16_t x771 = 1495U;
	int32_t x772 = 28505333;
	volatile int32_t t91 = -920406865;

	t91 = ((x769%(x770<x771))|x772);

	if (t91 != 28505333) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x774 = INT64_MIN;
	int16_t x775 = -1;
	volatile int8_t x776 = INT8_MIN;
	volatile uint64_t t92 = 1018969353265269LLU;

	t92 = ((x773%(x774<x775))|x776);

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x786 = UINT8_MAX;
	int32_t x787 = 5145;
	uint64_t x788 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = ((x785%(x786<x787))|x788);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x790 = INT8_MIN;
	int32_t x791 = INT32_MAX;
	static uint64_t x792 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x789%(x790<x791))|x792);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x794 = INT8_MIN;
	uint32_t x795 = UINT32_MAX;
	int64_t t95 = -13237660007LL;

	t95 = ((x793%(x794<x795))|x796);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x801 = INT8_MIN;
	uint8_t x802 = 1U;
	volatile uint8_t x803 = 21U;
	uint64_t x804 = 744995LLU;
	uint64_t t96 = 66452LLU;

	t96 = ((x801%(x802<x803))|x804);

	if (t96 != 744995LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x805 = INT32_MIN;
	int32_t x806 = -1;
	int64_t x807 = 1LL;
	static uint16_t x808 = 3573U;
	volatile int32_t t97 = -1524;

	t97 = ((x805%(x806<x807))|x808);

	if (t97 != 3573) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x821 = -79;
	int16_t x822 = INT16_MIN;
	volatile int8_t x823 = INT8_MIN;
	int64_t t98 = INT64_MIN;

	t98 = ((x821%(x822<x823))|x824);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x845 = UINT32_MAX;
	int16_t x847 = INT16_MAX;
	int8_t x848 = -1;
	uint32_t t99 = UINT32_MAX;

	t99 = ((x845%(x846<x847))|x848);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

