#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -44740;
uint8_t x13 = 62U;
int32_t x15 = -22;
int64_t x16 = 54418434702270LL;
volatile int64_t x29 = 634695159650549LL;
volatile int64_t t4 = 330945642790516300LL;
int32_t x47 = -1;
volatile int64_t x48 = INT64_MAX;
volatile uint32_t x54 = 317U;
volatile int32_t t6 = 11;
uint8_t x59 = 1U;
int8_t x78 = INT8_MIN;
static uint8_t x110 = 15U;
static volatile uint32_t x114 = 6U;
int32_t x115 = -2773388;
volatile int32_t t17 = 103831;
static uint32_t x169 = 26U;
int16_t x170 = INT16_MIN;
int64_t x174 = INT64_MIN;
int32_t t19 = -59;
int64_t x177 = -1LL;
volatile int16_t x201 = -27;
int32_t t25 = 14;
static uint8_t x212 = 4U;
uint8_t x219 = UINT8_MAX;
int32_t x227 = INT32_MIN;
int8_t x228 = -61;
int32_t x230 = INT32_MIN;
volatile uint8_t x237 = 0U;
volatile int32_t x238 = INT32_MIN;
volatile int64_t t33 = INT64_MIN;
uint8_t x265 = UINT8_MAX;
int32_t x266 = 1921906;
static volatile int32_t x289 = INT32_MIN;
volatile int32_t t36 = INT32_MIN;
int32_t t37 = -1;
int64_t x297 = INT64_MAX;
int32_t t39 = -23;
int16_t x311 = 13;
static uint32_t x320 = UINT32_MAX;
static int64_t t41 = INT64_MIN;
volatile int32_t t42 = 8935394;
volatile int32_t x325 = 8038939;
volatile int16_t x326 = INT16_MIN;
static volatile int32_t t47 = 7924;
static volatile int8_t x369 = -1;
static int8_t x379 = -1;
int32_t x380 = 200409;
int32_t t49 = -1;
int16_t x397 = 8;
int32_t x398 = -793630044;
uint64_t x399 = 3555707508LLU;
volatile int64_t x400 = INT64_MIN;
volatile int8_t x447 = INT8_MIN;
static uint8_t x448 = UINT8_MAX;
uint32_t t53 = 316918366U;
int32_t x459 = INT32_MIN;
uint64_t x474 = 138274501342906673LLU;
int8_t x476 = -1;
static int8_t x493 = 0;
uint32_t x494 = UINT32_MAX;
static int16_t x514 = INT16_MIN;
volatile int32_t t61 = 1;
static int32_t x529 = INT32_MAX;
int32_t x530 = INT32_MIN;
int32_t t62 = INT32_MAX;
static int64_t x561 = -1LL;
static int64_t x564 = INT64_MAX;
int64_t t66 = 816539052882578LL;
uint32_t x569 = UINT32_MAX;
volatile int16_t x571 = -1;
static uint32_t t68 = UINT32_MAX;
volatile int32_t t70 = -1;
int32_t x608 = 13672;
uint64_t t72 = 17LLU;
static volatile int32_t t74 = 2;
volatile uint64_t t76 = 54LLU;
uint8_t x641 = 6U;
uint32_t x646 = UINT32_MAX;
uint64_t x665 = UINT64_MAX;
static volatile int16_t x667 = INT16_MIN;
int8_t x670 = 13;
uint8_t x672 = UINT8_MAX;
int32_t t82 = 0;
static int16_t x686 = 0;
int32_t t83 = -4;
int8_t x711 = INT8_MAX;
int8_t x714 = -1;
int64_t x717 = -7LL;
int64_t x725 = -201559167193LL;
static volatile int64_t t87 = 83428340391LL;
int16_t x746 = INT16_MIN;
volatile uint16_t x762 = 7144U;
volatile int64_t x781 = INT64_MAX;
int64_t x799 = 0LL;
int32_t t97 = -3548;
uint8_t x829 = 64U;


void f0(void) {
	volatile int32_t x1 = -255452162;
	int32_t x2 = INT32_MIN;
	volatile int32_t x3 = -1;
	volatile int32_t t0 = -82649616;

	t0 = (x1/((x2&x3)<x4));

	if (t0 != -255452162) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x14 = 1U;
	volatile int32_t t1 = 11375;

	t1 = (x13/((x14&x15)<x16));

	if (t1 != 62) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MAX;
	uint64_t x19 = 77847974LLU;
	volatile int16_t x20 = INT16_MIN;
	static int32_t t2 = 551694318;

	t2 = (x17/((x18&x19)<x20));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 31U;
	int16_t x24 = 24;
	int64_t t3 = INT64_MAX;

	t3 = (x21/((x22&x23)<x24));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = -152;
	uint16_t x32 = UINT16_MAX;

	t4 = (x29/((x30&x31)<x32));

	if (t4 != 634695159650549LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x45 = UINT64_MAX;
	uint64_t x46 = 9099130612176LLU;
	uint64_t t5 = UINT64_MAX;

	t5 = (x45/((x46&x47)<x48));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x53 = -1;
	int8_t x55 = -1;
	uint32_t x56 = UINT32_MAX;

	t6 = (x53/((x54&x55)<x56));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x57 = INT32_MIN;
	uint32_t x58 = 14167830U;
	uint32_t x60 = 139687U;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x57/((x58&x59)<x60));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x65 = 77985150U;
	uint16_t x66 = 225U;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = 401U;
	uint32_t t8 = 3717464U;

	t8 = (x65/((x66&x67)<x68));

	if (t8 != 77985150U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x77 = INT32_MIN;
	static int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t9 = INT32_MIN;

	t9 = (x77/((x78&x79)<x80));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x93 = 238766586U;
	int16_t x94 = -1;
	static uint8_t x95 = 37U;
	uint64_t x96 = 2234LLU;
	uint32_t t10 = 174776U;

	t10 = (x93/((x94&x95)<x96));

	if (t10 != 238766586U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x109 = 1336125LLU;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = 243719532753LL;
	uint64_t t11 = 562107837884LLU;

	t11 = (x109/((x110&x111)<x112));

	if (t11 != 1336125LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x113 = UINT32_MAX;
	uint32_t x116 = 66026191U;
	static volatile uint32_t t12 = UINT32_MAX;

	t12 = (x113/((x114&x115)<x116));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	static int16_t x123 = -1;
	static int64_t x124 = -1LL;
	int32_t t13 = INT32_MAX;

	t13 = (x121/((x122&x123)<x124));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x129 = INT8_MIN;
	static int8_t x130 = -1;
	static int16_t x131 = -137;
	volatile int32_t x132 = -1;
	static volatile int32_t t14 = -254400;

	t14 = (x129/((x130&x131)<x132));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 11302159517LLU;
	volatile int64_t x140 = INT64_MIN;
	int32_t t15 = -8193;

	t15 = (x137/((x138&x139)<x140));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x153 = -30635682919909LL;
	int32_t x154 = -1;
	static int8_t x155 = 1;
	volatile uint8_t x156 = 12U;
	volatile int64_t t16 = -520727001LL;

	t16 = (x153/((x154&x155)<x156));

	if (t16 != -30635682919909LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x157 = 236U;
	int8_t x158 = 9;
	volatile uint32_t x159 = 2U;
	int8_t x160 = INT8_MIN;

	t17 = (x157/((x158&x159)<x160));

	if (t17 != 236) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x171 = 35402U;
	int16_t x172 = -6839;
	uint32_t t18 = 64884U;

	t18 = (x169/((x170&x171)<x172));

	if (t18 != 26U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x173 = UINT8_MAX;
	static volatile int32_t x175 = 1;
	uint8_t x176 = 16U;

	t19 = (x173/((x174&x175)<x176));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x178 = UINT16_MAX;
	uint32_t x179 = 5U;
	static volatile uint16_t x180 = UINT16_MAX;
	volatile int64_t t20 = 26502318701LL;

	t20 = (x177/((x178&x179)<x180));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x181 = -48;
	int64_t x182 = -1LL;
	int8_t x183 = -1;
	static uint8_t x184 = 1U;
	int32_t t21 = 0;

	t21 = (x181/((x182&x183)<x184));

	if (t21 != -48) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x189 = -1728;
	uint64_t x190 = UINT64_MAX;
	static int32_t x191 = 406;
	int64_t x192 = INT64_MIN;
	int32_t t22 = 46505043;

	t22 = (x189/((x190&x191)<x192));

	if (t22 != -1728) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x197 = 0U;
	int64_t x198 = -1LL;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = UINT16_MAX;
	int32_t t23 = -250493;

	t23 = (x197/((x198&x199)<x200));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x202 = INT32_MIN;
	static volatile int8_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t24 = 915005;

	t24 = (x201/((x202&x203)<x204));

	if (t24 != -27) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x205 = -1;
	int64_t x206 = INT64_MAX;
	int32_t x207 = 496776;
	volatile uint64_t x208 = UINT64_MAX;

	t25 = (x205/((x206&x207)<x208));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x209 = 21;
	static int64_t x210 = INT64_MIN;
	uint16_t x211 = 7549U;
	volatile int32_t t26 = 115718098;

	t26 = (x209/((x210&x211)<x212));

	if (t26 != 21) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x217 = 7;
	static int32_t x218 = -1;
	int16_t x220 = INT16_MAX;
	volatile int32_t t27 = -10026;

	t27 = (x217/((x218&x219)<x220));

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x225 = -280LL;
	volatile uint64_t x226 = 169388LLU;
	int64_t t28 = -169351LL;

	t28 = (x225/((x226&x227)<x228));

	if (t28 != -280LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x229 = UINT8_MAX;
	static int64_t x231 = INT64_MIN;
	int64_t x232 = -1LL;
	static volatile int32_t t29 = 142;

	t29 = (x229/((x230&x231)<x232));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x233 = -46916;
	static volatile int32_t x234 = INT32_MIN;
	int16_t x235 = 11819;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t30 = -1965664;

	t30 = (x233/((x234&x235)<x236));

	if (t30 != -46916) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MAX;
	volatile int32_t t31 = -3279959;

	t31 = (x237/((x238&x239)<x240));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x241 = -1;
	static uint64_t x242 = 206LLU;
	volatile uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t32 = 14726116;

	t32 = (x241/((x242&x243)<x244));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = UINT64_MAX;

	t33 = (x257/((x258&x259)<x260));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x267 = 21U;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t34 = 56;

	t34 = (x265/((x266&x267)<x268));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MIN;
	static int64_t x279 = -1LL;
	int32_t x280 = INT32_MAX;
	volatile int32_t t35 = -1780;

	t35 = (x277/((x278&x279)<x280));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x290 = 15007U;
	int16_t x291 = 14202;
	uint64_t x292 = 501547049841266420LLU;

	t36 = (x289/((x290&x291)<x292));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x293 = -1;
	uint32_t x294 = 58000114U;
	uint64_t x295 = 1762LLU;
	static volatile int32_t x296 = INT32_MIN;

	t37 = (x293/((x294&x295)<x296));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x298 = 81U;
	int64_t x299 = INT64_MIN;
	static int64_t x300 = INT64_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x297/((x298&x299)<x300));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x305 = INT16_MIN;
	int64_t x306 = -882LL;
	volatile int16_t x307 = -1;
	uint32_t x308 = 4306355U;

	t39 = (x305/((x306&x307)<x308));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	uint32_t x312 = UINT32_MAX;
	int32_t t40 = INT32_MIN;

	t40 = (x309/((x310&x311)<x312));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x317 = INT64_MIN;
	volatile int8_t x318 = 25;
	static volatile int8_t x319 = 6;

	t41 = (x317/((x318&x319)<x320));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint32_t x322 = 119U;
	uint32_t x323 = 23657937U;
	volatile int8_t x324 = INT8_MIN;

	t42 = (x321/((x322&x323)<x324));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x327 = 49;
	uint64_t x328 = 3532119433521LLU;
	volatile int32_t t43 = -14102710;

	t43 = (x325/((x326&x327)<x328));

	if (t43 != 8038939) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x333 = 64343346686227918LLU;
	volatile uint16_t x334 = 8656U;
	volatile int8_t x335 = INT8_MIN;
	static uint32_t x336 = 4052138U;
	volatile uint64_t t44 = 46097556700354601LLU;

	t44 = (x333/((x334&x335)<x336));

	if (t44 != 64343346686227918LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x341 = INT32_MAX;
	uint32_t x342 = 415587U;
	static int32_t x343 = 694;
	uint16_t x344 = UINT16_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (x341/((x342&x343)<x344));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x345 = INT64_MIN;
	static int16_t x346 = INT16_MIN;
	volatile int64_t x347 = -1LL;
	volatile int32_t x348 = INT32_MAX;
	int64_t t46 = INT64_MIN;

	t46 = (x345/((x346&x347)<x348));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x349 = -159557;
	uint8_t x350 = 6U;
	int16_t x351 = -1;
	uint64_t x352 = 28975172837812766LLU;

	t47 = (x349/((x350&x351)<x352));

	if (t47 != -159557) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x370 = 3065722U;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = UINT64_MAX;
	int32_t t48 = -3;

	t48 = (x369/((x370&x371)<x372));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x377 = INT16_MIN;
	volatile int64_t x378 = INT64_MIN;

	t49 = (x377/((x378&x379)<x380));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x385 = 24U;
	int8_t x386 = -45;
	int32_t x387 = -1;
	int8_t x388 = INT8_MAX;
	uint32_t t50 = 23010709U;

	t50 = (x385/((x386&x387)<x388));

	if (t50 != 24U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t t51 = 101439262;

	t51 = (x397/((x398&x399)<x400));

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x445 = UINT16_MAX;
	int16_t x446 = INT16_MIN;
	int32_t t52 = -634711;

	t52 = (x445/((x446&x447)<x448));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x453 = 320U;
	int16_t x454 = 4;
	int16_t x455 = INT16_MAX;
	uint64_t x456 = 76625205623623LLU;

	t53 = (x453/((x454&x455)<x456));

	if (t53 != 320U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x457 = 6650U;
	int32_t x458 = INT32_MIN;
	volatile int64_t x460 = -412099LL;
	uint32_t t54 = 7306596U;

	t54 = (x457/((x458&x459)<x460));

	if (t54 != 6650U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x473 = -176176;
	int64_t x475 = -1LL;
	int32_t t55 = -71643;

	t55 = (x473/((x474&x475)<x476));

	if (t55 != -176176) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x477 = INT8_MAX;
	uint32_t x478 = UINT32_MAX;
	static volatile int8_t x479 = 39;
	uint32_t x480 = UINT32_MAX;
	static volatile int32_t t56 = 19416255;

	t56 = (x477/((x478&x479)<x480));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x489 = 54U;
	int16_t x490 = INT16_MAX;
	int32_t x491 = -56;
	uint32_t x492 = 158515178U;
	static int32_t t57 = 708;

	t57 = (x489/((x490&x491)<x492));

	if (t57 != 54) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x495 = 21U;
	static int16_t x496 = -138;
	static int32_t t58 = 306;

	t58 = (x493/((x494&x495)<x496));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x497 = UINT32_MAX;
	int8_t x498 = 0;
	uint64_t x499 = 0LLU;
	int16_t x500 = -1;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = (x497/((x498&x499)<x500));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x501 = 56U;
	uint32_t x502 = 510932816U;
	volatile int32_t x503 = INT32_MIN;
	uint8_t x504 = 48U;
	int32_t t60 = 4794;

	t60 = (x501/((x502&x503)<x504));

	if (t60 != 56) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x513 = INT16_MIN;
	int16_t x515 = INT16_MAX;
	uint16_t x516 = 13U;

	t61 = (x513/((x514&x515)<x516));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x531 = 6U;
	uint64_t x532 = 133853012742LLU;

	t62 = (x529/((x530&x531)<x532));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x537 = 3087U;
	uint64_t x538 = 12LLU;
	volatile int8_t x539 = 39;
	int16_t x540 = -855;
	int32_t t63 = 1;

	t63 = (x537/((x538&x539)<x540));

	if (t63 != 3087) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x553 = 0;
	int32_t x554 = INT32_MIN;
	static int64_t x555 = INT64_MIN;
	int16_t x556 = 1;
	volatile int32_t t64 = 8126;

	t64 = (x553/((x554&x555)<x556));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x557 = 6489214U;
	uint16_t x558 = UINT16_MAX;
	static int32_t x559 = INT32_MIN;
	uint32_t x560 = 227U;
	uint32_t t65 = 63646U;

	t65 = (x557/((x558&x559)<x560));

	if (t65 != 6489214U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x562 = -1;
	uint32_t x563 = 46U;

	t66 = (x561/((x562&x563)<x564));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x565 = -1;
	uint32_t x566 = 1U;
	int16_t x567 = -1;
	int8_t x568 = INT8_MAX;
	int32_t t67 = -733;

	t67 = (x565/((x566&x567)<x568));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x570 = -1;
	uint16_t x572 = UINT16_MAX;

	t68 = (x569/((x570&x571)<x572));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x577 = INT16_MIN;
	int64_t x578 = INT64_MIN;
	static uint8_t x579 = UINT8_MAX;
	uint16_t x580 = 14U;
	int32_t t69 = 25;

	t69 = (x577/((x578&x579)<x580));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x597 = 46U;
	uint32_t x598 = UINT32_MAX;
	uint32_t x599 = 3U;
	uint64_t x600 = UINT64_MAX;

	t70 = (x597/((x598&x599)<x600));

	if (t70 != 46) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x601 = UINT32_MAX;
	static int32_t x602 = -1;
	int64_t x603 = -456202LL;
	int8_t x604 = INT8_MAX;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x601/((x602&x603)<x604));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x605 = 40864768415796791LLU;
	static int32_t x606 = INT32_MIN;
	static int8_t x607 = -1;

	t72 = (x605/((x606&x607)<x608));

	if (t72 != 40864768415796791LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x609 = UINT64_MAX;
	int16_t x610 = -23;
	volatile int8_t x611 = INT8_MIN;
	int8_t x612 = -1;
	static uint64_t t73 = UINT64_MAX;

	t73 = (x609/((x610&x611)<x612));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x613 = INT16_MIN;
	volatile int16_t x614 = 1;
	int32_t x615 = INT32_MIN;
	uint32_t x616 = UINT32_MAX;

	t74 = (x613/((x614&x615)<x616));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x617 = UINT16_MAX;
	uint16_t x618 = 1332U;
	uint16_t x619 = 4U;
	static int16_t x620 = INT16_MAX;
	volatile int32_t t75 = -36614;

	t75 = (x617/((x618&x619)<x620));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x637 = 80319628591085LLU;
	volatile int64_t x638 = -1LL;
	static volatile int16_t x639 = INT16_MAX;
	volatile uint32_t x640 = UINT32_MAX;

	t76 = (x637/((x638&x639)<x640));

	if (t76 != 80319628591085LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x642 = INT64_MIN;
	int16_t x643 = INT16_MIN;
	volatile int32_t x644 = 10171937;
	static int32_t t77 = 11178;

	t77 = (x641/((x642&x643)<x644));

	if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x645 = INT64_MIN;
	int64_t x647 = 6236092LL;
	uint64_t x648 = UINT64_MAX;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x645/((x646&x647)<x648));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x649 = 275058734LL;
	int64_t x650 = -805481321LL;
	volatile uint8_t x651 = 33U;
	static uint16_t x652 = 104U;
	int64_t t79 = 2LL;

	t79 = (x649/((x650&x651)<x652));

	if (t79 != 275058734LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x666 = -16001095933LL;
	static int16_t x668 = INT16_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (x665/((x666&x667)<x668));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x669 = UINT16_MAX;
	int8_t x671 = INT8_MIN;
	int32_t t81 = 7;

	t81 = (x669/((x670&x671)<x672));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x673 = INT8_MIN;
	int8_t x674 = -6;
	int16_t x675 = -1;
	static int16_t x676 = -1;

	t82 = (x673/((x674&x675)<x676));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x685 = INT16_MIN;
	int32_t x687 = INT32_MIN;
	static uint8_t x688 = UINT8_MAX;

	t83 = (x685/((x686&x687)<x688));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x709 = 12LLU;
	int16_t x710 = -1;
	uint32_t x712 = 137558U;
	volatile uint64_t t84 = 1945662960373770341LLU;

	t84 = (x709/((x710&x711)<x712));

	if (t84 != 12LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x713 = INT16_MIN;
	volatile int32_t x715 = -1;
	uint8_t x716 = 7U;
	int32_t t85 = -28189;

	t85 = (x713/((x714&x715)<x716));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x718 = INT64_MIN;
	int8_t x719 = INT8_MIN;
	uint16_t x720 = 0U;
	volatile int64_t t86 = 3110176663157326LL;

	t86 = (x717/((x718&x719)<x720));

	if (t86 != -7LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x726 = INT16_MIN;
	int64_t x727 = INT64_MIN;
	int32_t x728 = -92170;

	t87 = (x725/((x726&x727)<x728));

	if (t87 != -201559167193LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x745 = 2U;
	int8_t x747 = -1;
	int8_t x748 = -1;
	static int32_t t88 = -90501;

	t88 = (x745/((x746&x747)<x748));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x749 = INT8_MAX;
	int64_t x750 = INT64_MIN;
	static volatile int32_t x751 = INT32_MIN;
	volatile int32_t x752 = 24;
	int32_t t89 = 471;

	t89 = (x749/((x750&x751)<x752));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x761 = -1;
	uint32_t x763 = UINT32_MAX;
	int8_t x764 = -20;
	volatile int32_t t90 = 873255591;

	t90 = (x761/((x762&x763)<x764));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x765 = INT8_MIN;
	int32_t x766 = INT32_MAX;
	uint16_t x767 = 139U;
	static uint32_t x768 = UINT32_MAX;
	int32_t t91 = 1637376;

	t91 = (x765/((x766&x767)<x768));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x773 = 1360865;
	static int8_t x774 = 0;
	uint64_t x775 = 17LLU;
	int32_t x776 = INT32_MAX;
	int32_t t92 = -450;

	t92 = (x773/((x774&x775)<x776));

	if (t92 != 1360865) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x782 = 32;
	int32_t x783 = INT32_MAX;
	int32_t x784 = INT32_MAX;
	int64_t t93 = INT64_MAX;

	t93 = (x781/((x782&x783)<x784));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x785 = 495441689U;
	int32_t x786 = INT32_MAX;
	static volatile int16_t x787 = INT16_MIN;
	volatile int32_t x788 = INT32_MAX;
	volatile uint32_t t94 = 493U;

	t94 = (x785/((x786&x787)<x788));

	if (t94 != 495441689U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x797 = UINT64_MAX;
	volatile int16_t x798 = INT16_MIN;
	static uint16_t x800 = UINT16_MAX;
	uint64_t t95 = UINT64_MAX;

	t95 = (x797/((x798&x799)<x800));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x809 = 1LL;
	static int32_t x810 = -699568569;
	uint64_t x811 = 27519605LLU;
	int64_t x812 = INT64_MIN;
	volatile int64_t t96 = 229695LL;

	t96 = (x809/((x810&x811)<x812));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x813 = 52U;
	static volatile int32_t x814 = -20;
	static volatile int64_t x815 = -1LL;
	int8_t x816 = -8;

	t97 = (x813/((x814&x815)<x816));

	if (t97 != 52) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x825 = 19204960954016LL;
	static int16_t x826 = -10934;
	int32_t x827 = -25278058;
	int16_t x828 = INT16_MIN;
	int64_t t98 = 233063433463LL;

	t98 = (x825/((x826&x827)<x828));

	if (t98 != 19204960954016LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x830 = INT32_MIN;
	static int32_t x831 = INT32_MAX;
	uint8_t x832 = 2U;
	volatile int32_t t99 = -4520184;

	t99 = (x829/((x830&x831)<x832));

	if (t99 != 64) { NG(); } else { ; }
	
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

