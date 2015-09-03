#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x27 = UINT64_MAX;
int8_t x53 = -1;
uint64_t t3 = 900LLU;
static volatile int64_t x78 = INT64_MIN;
int8_t x92 = 2;
int16_t x99 = INT16_MAX;
uint32_t x100 = UINT32_MAX;
volatile int64_t t6 = -530816961502837LL;
int8_t x148 = 9;
volatile int8_t x183 = INT8_MAX;
volatile int16_t x184 = -1;
uint16_t x186 = 165U;
volatile uint32_t x193 = 281654U;
uint8_t x196 = 12U;
volatile uint64_t t11 = 229748LLU;
int32_t x204 = INT32_MIN;
int16_t x214 = INT16_MAX;
int64_t x215 = INT64_MIN;
int8_t x218 = -11;
static volatile uint64_t t15 = 1031505943170LLU;
static volatile int8_t x221 = INT8_MAX;
static int8_t x227 = INT8_MIN;
int16_t x230 = -1;
uint32_t x232 = 18806U;
int8_t x280 = INT8_MIN;
static int64_t t23 = -12762616LL;
int8_t x299 = INT8_MAX;
static int64_t t25 = -105335LL;
uint64_t x316 = 218859814LLU;
int64_t x327 = -86851776LL;
static uint64_t x356 = UINT64_MAX;
int32_t x376 = INT32_MIN;
volatile int64_t x389 = INT64_MIN;
volatile int16_t x391 = -15109;
static int8_t x393 = INT8_MIN;
uint32_t x395 = UINT32_MAX;
volatile int64_t t37 = 233729LL;
static int64_t x443 = -17LL;
int32_t x464 = INT32_MIN;
int64_t t45 = 40682760LL;
int32_t x476 = -1;
volatile uint32_t t46 = 390U;
volatile int16_t x491 = 208;
int64_t x526 = INT64_MAX;
static volatile int16_t x528 = -1;
static int64_t x558 = INT64_MIN;
volatile int8_t x559 = -1;
int64_t t50 = -3318219320171LL;
uint32_t x566 = UINT32_MAX;
uint32_t t51 = 20U;
int64_t x586 = 3529385868LL;
int16_t x620 = 85;
uint16_t x627 = 39U;
int16_t x650 = INT16_MIN;
int32_t x651 = 1;
int64_t x663 = INT64_MIN;
uint16_t x664 = 22087U;
int64_t x670 = -3491574553991LL;
static int8_t x680 = -1;
volatile int64_t x691 = INT64_MIN;
int8_t x692 = INT8_MAX;
static volatile int32_t x720 = -1;
int64_t x741 = INT64_MIN;
int32_t x751 = 1730;
static int8_t x757 = INT8_MAX;
int16_t x758 = INT16_MIN;
uint64_t x759 = 36LLU;
uint64_t x766 = 797814587LLU;
volatile uint8_t x767 = 51U;
volatile int8_t x773 = 51;
int16_t x776 = -1;
static int64_t x778 = INT64_MAX;
uint64_t x789 = UINT64_MAX;
static int32_t x790 = INT32_MAX;
volatile int8_t x795 = INT8_MIN;
uint64_t x796 = 2666535LLU;
uint64_t x803 = 2LLU;
uint32_t x856 = 7U;
int8_t x877 = -15;
int64_t x885 = INT64_MIN;
uint32_t x941 = 12824U;
uint32_t x942 = UINT32_MAX;
uint32_t x949 = UINT32_MAX;
int32_t x959 = 1647;
volatile int64_t x962 = INT64_MAX;
uint64_t x976 = UINT64_MAX;
int16_t x977 = INT16_MAX;
uint32_t x979 = 55U;
volatile int64_t x994 = INT64_MAX;
int64_t x996 = -1LL;
static int64_t t95 = -2LL;
static int16_t x1013 = -1;
int64_t x1014 = 819339532507370LL;
int16_t x1015 = INT16_MIN;
uint64_t x1022 = UINT64_MAX;
static int32_t x1028 = INT32_MIN;
static int32_t t99 = -96;


void f0(void) {
	int64_t x17 = -1LL;
	volatile int64_t x18 = INT64_MIN;
	int8_t x19 = -7;
	volatile uint64_t x20 = 1599746244736698LLU;
	volatile uint64_t t0 = 4037595033468LLU;

	t0 = (x17%(x18/(x19+x20)));

	if (t0 != 2935LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = INT64_MAX;
	volatile int32_t x26 = INT32_MAX;
	int32_t x28 = 110;
	uint64_t t1 = 225647876631101LLU;

	t1 = (x25%(x26/(x27+x28)));

	if (t1 != 16927LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x37 = INT32_MAX;
	static int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	int64_t x40 = INT64_MAX;
	static int64_t t2 = 298189885231522795LL;

	t2 = (x37%(x38/(x39+x40)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x54 = INT8_MIN;
	static uint8_t x55 = 0U;
	uint64_t x56 = 11099283444785LLU;

	t3 = (x53%(x54/(x55+x56)));

	if (t3 != 1440591LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x77 = -1;
	static uint32_t x79 = 3730769U;
	int64_t x80 = INT64_MIN;
	int64_t t4 = -98848376666197LL;

	t4 = (x77%(x78/(x79+x80)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x89 = UINT16_MAX;
	volatile int64_t x90 = INT64_MIN;
	static int16_t x91 = -5393;
	int64_t t5 = -19304540504042785LL;

	t5 = (x89%(x90/(x91+x92)));

	if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x97 = 120U;
	int64_t x98 = -12304631244190241LL;

	t6 = (x97%(x98/(x99+x100)));

	if (t6 != 120LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x141 = -27;
	int8_t x142 = INT8_MAX;
	static uint8_t x143 = 4U;
	uint32_t x144 = 65U;
	uint32_t t7 = 744864U;

	t7 = (x141%(x142/(x143+x144)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x145 = 558U;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 26913U;
	volatile uint32_t t8 = 23633815U;

	t8 = (x145%(x146/(x147+x148)));

	if (t8 != 558U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x181 = -23;
	static uint64_t x182 = UINT64_MAX;
	uint64_t t9 = 214653649286LLU;

	t9 = (x181%(x182/(x183+x184)));

	if (t9 != 146402730743726593LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x185 = 12718U;
	int8_t x187 = -1;
	int8_t x188 = -3;
	volatile int32_t t10 = 23;

	t10 = (x185%(x186/(x187+x188)));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x194 = -32;
	uint64_t x195 = UINT64_MAX;

	t11 = (x193%(x194/(x195+x196)));

	if (t11 != 281654LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	volatile int8_t x203 = INT8_MAX;
	int64_t t12 = 3599470102LL;

	t12 = (x201%(x202/(x203+x204)));

	if (t12 != -32258LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = -1;
	volatile int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MIN;
	static int32_t t13 = 0;

	t13 = (x205%(x206/(x207+x208)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x213 = UINT8_MAX;
	int64_t x216 = INT64_MAX;
	int64_t t14 = 1037460LL;

	t14 = (x213%(x214/(x215+x216)));

	if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x217 = INT8_MIN;
	volatile uint64_t x219 = 299539679168276LLU;
	int8_t x220 = 0;

	t15 = (x217%(x218/(x219+x220)));

	if (t15 != 15948LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x222 = INT32_MIN;
	uint64_t x223 = 441LLU;
	volatile uint8_t x224 = 4U;
	uint64_t t16 = 567LLU;

	t16 = (x221%(x222/(x223+x224)));

	if (t16 != 127LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x225 = -1;
	int64_t x226 = INT64_MAX;
	int16_t x228 = INT16_MAX;
	int64_t t17 = -263624069LL;

	t17 = (x225%(x226/(x227+x228)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x229 = INT16_MAX;
	uint16_t x231 = UINT16_MAX;
	volatile uint32_t t18 = 1285860106U;

	t18 = (x229%(x230/(x231+x232)));

	if (t18 != 32767U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = -14058258LL;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	static int64_t t19 = -14332558151613LL;

	t19 = (x241%(x242/(x243+x244)));

	if (t19 != -46LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x249 = INT16_MAX;
	uint16_t x250 = UINT16_MAX;
	int8_t x251 = -5;
	int8_t x252 = -3;
	volatile int32_t t20 = -1;

	t20 = (x249%(x250/(x251+x252)));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x253 = 3;
	uint32_t x254 = 397U;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = -2;
	uint32_t t21 = 134160358U;

	t21 = (x253%(x254/(x255+x256)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x257 = UINT64_MAX;
	static int64_t x258 = INT64_MAX;
	int64_t x259 = -1LL;
	volatile uint32_t x260 = 35U;
	static uint64_t t22 = 27LLU;

	t22 = (x257%(x258/(x259+x260)));

	if (t22 != 51LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x277 = INT16_MAX;
	uint32_t x278 = 2082189U;
	int64_t x279 = -1LL;

	t23 = (x277%(x278/(x279+x280)));

	if (t23 != 485LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x297 = -402;
	int32_t x298 = INT32_MIN;
	int8_t x300 = -1;
	int32_t t24 = -9084796;

	t24 = (x297%(x298/(x299+x300)));

	if (t24 != -402) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x301 = 102U;
	static volatile int64_t x302 = INT64_MAX;
	int8_t x303 = -10;
	int32_t x304 = -1;

	t25 = (x301%(x302/(x303+x304)));

	if (t25 != 102LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -39628;
	uint64_t x315 = 532943349921572LLU;
	volatile uint64_t t26 = 3572273330999759LLU;

	t26 = (x313%(x314/(x315+x316)));

	if (t26 != 23588LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = -65191LL;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = -25;
	int64_t t27 = 367748562575367LL;

	t27 = (x317%(x318/(x319+x320)));

	if (t27 != 249LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x325 = -1;
	int64_t x326 = INT64_MIN;
	uint32_t x328 = 461404U;
	static int64_t t28 = -15237LL;

	t28 = (x325%(x326/(x327+x328)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x341 = INT64_MAX;
	int8_t x342 = -1;
	uint64_t x343 = 251LLU;
	int16_t x344 = 111;
	volatile uint64_t t29 = 67773395760LLU;

	t29 = (x341%(x342/(x343+x344)));

	if (t29 != 21LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x353 = 290439942468LLU;
	static int16_t x354 = -1;
	static int8_t x355 = INT8_MIN;
	static uint64_t t30 = 219622387LLU;

	t30 = (x353%(x354/(x355+x356)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x365 = 1780U;
	int32_t x366 = 2800927;
	uint32_t x367 = 1391294U;
	uint16_t x368 = 1U;
	volatile uint32_t t31 = 4790620U;

	t31 = (x365%(x366/(x367+x368)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x369 = UINT16_MAX;
	int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t32 = -79629LL;

	t32 = (x369%(x370/(x371+x372)));

	if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x373 = UINT32_MAX;
	static int16_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	uint64_t t33 = 60774439849LLU;

	t33 = (x373%(x374/(x375+x376)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x385 = UINT16_MAX;
	static int64_t x386 = INT64_MIN;
	uint32_t x387 = UINT32_MAX;
	static volatile int16_t x388 = INT16_MIN;
	volatile int64_t t34 = 7777299LL;

	t34 = (x385%(x386/(x387+x388)));

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x390 = 978438353199388245LL;
	int8_t x392 = 5;
	static volatile int64_t t35 = 28582930602009563LL;

	t35 = (x389%(x390/(x391+x392)));

	if (t35 != -48792007375113LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x394 = 15U;
	static int32_t x396 = 2;
	uint32_t t36 = 25U;

	t36 = (x393%(x394/(x395+x396)));

	if (t36 != 8U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = -6883;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 19U;

	t37 = (x409%(x410/(x411+x412)));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MIN;
	volatile uint64_t x424 = 971LLU;
	volatile uint64_t t38 = 2571278551193279680LLU;

	t38 = (x421%(x422/(x423+x424)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x429 = UINT32_MAX;
	static volatile int16_t x430 = INT16_MIN;
	uint64_t x431 = 4935565838LLU;
	int64_t x432 = INT64_MAX;
	volatile uint64_t t39 = 4544569757722033LLU;

	t39 = (x429%(x430/(x431+x432)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = 354U;
	volatile uint8_t x444 = 4U;
	int64_t t40 = 302LL;

	t40 = (x441%(x442/(x443+x444)));

	if (t40 != -17LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x445 = INT32_MIN;
	static int64_t x446 = INT64_MAX;
	int8_t x447 = -1;
	static uint16_t x448 = UINT16_MAX;
	static volatile int64_t t41 = 50630782012488LL;

	t41 = (x445%(x446/(x447+x448)));

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x449 = 124U;
	int64_t x450 = INT64_MIN;
	int32_t x451 = -1;
	int64_t x452 = INT64_MAX;
	volatile int64_t t42 = -101635011184132944LL;

	t42 = (x449%(x450/(x451+x452)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x453 = -4111;
	int32_t x454 = INT32_MIN;
	volatile int8_t x455 = 37;
	uint8_t x456 = 21U;
	static int32_t t43 = 22593;

	t43 = (x453%(x454/(x455+x456)));

	if (t43 != -4111) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x457 = INT32_MIN;
	int64_t x458 = INT64_MIN;
	uint64_t x459 = 0LLU;
	uint16_t x460 = 1623U;
	uint64_t t44 = 11615LLU;

	t44 = (x457%(x458/(x459+x460)));

	if (t44 != 5682913463643078LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x461 = INT16_MAX;
	static volatile int64_t x462 = INT64_MIN;
	uint16_t x463 = UINT16_MAX;

	t45 = (x461%(x462/(x463+x464)));

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x473 = 396U;
	static int32_t x474 = INT32_MIN;
	volatile int32_t x475 = -6;

	t46 = (x473%(x474/(x475+x476)));

	if (t46 != 396U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x489 = INT32_MIN;
	int32_t x490 = 379174978;
	uint8_t x492 = UINT8_MAX;
	static int32_t t47 = -7409;

	t47 = (x489%(x490/(x491+x492)));

	if (t47 != -191504) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x525 = INT16_MAX;
	uint16_t x527 = 45U;
	int64_t t48 = -10683LL;

	t48 = (x525%(x526/(x527+x528)));

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x557 = INT64_MIN;
	volatile int16_t x560 = INT16_MIN;
	static int64_t t49 = -1LL;

	t49 = (x557%(x558/(x559+x560)));

	if (t49 != -8LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MAX;
	int64_t x563 = 32267LL;
	static int8_t x564 = INT8_MIN;

	t50 = (x561%(x562/(x563+x564)));

	if (t50 != -17088LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x565 = -12453;
	static int8_t x567 = INT8_MAX;
	int8_t x568 = INT8_MIN;

	t51 = (x565%(x566/(x567+x568)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x569 = -2;
	int64_t x570 = INT64_MIN;
	int64_t x571 = INT64_MAX;
	volatile int16_t x572 = -1826;
	static volatile int64_t t52 = -12149709311597640LL;

	t52 = (x569%(x570/(x571+x572)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x573 = -1;
	volatile uint64_t x574 = UINT64_MAX;
	volatile int8_t x575 = INT8_MIN;
	uint64_t x576 = UINT64_MAX;
	volatile uint64_t t53 = 0LLU;

	t53 = (x573%(x574/(x575+x576)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x581 = INT16_MIN;
	volatile int16_t x582 = -390;
	uint8_t x583 = 59U;
	int8_t x584 = 37;
	int32_t t54 = -13828486;

	t54 = (x581%(x582/(x583+x584)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x585 = 3U;
	int64_t x587 = -1LL;
	int16_t x588 = INT16_MIN;
	int64_t t55 = 118LL;

	t55 = (x585%(x586/(x587+x588)));

	if (t55 != 3LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x617 = 1;
	static volatile uint16_t x618 = UINT16_MAX;
	int16_t x619 = INT16_MAX;
	static int32_t t56 = -2690446;

	t56 = (x617%(x618/(x619+x620)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x621 = 5U;
	volatile uint32_t x622 = 1134U;
	int8_t x623 = 0;
	uint8_t x624 = 5U;
	volatile uint32_t t57 = 28166U;

	t57 = (x621%(x622/(x623+x624)));

	if (t57 != 5U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x625 = UINT64_MAX;
	int64_t x626 = INT64_MIN;
	int64_t x628 = INT64_MIN;
	uint64_t t58 = 13687983LLU;

	t58 = (x625%(x626/(x627+x628)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x629 = UINT32_MAX;
	static int64_t x630 = INT64_MAX;
	int64_t x631 = -3522299983492723004LL;
	uint8_t x632 = UINT8_MAX;
	static volatile int64_t t59 = -4072738259LL;

	t59 = (x629%(x630/(x631+x632)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x649 = INT8_MAX;
	uint32_t x652 = 9299U;
	volatile uint32_t t60 = 97519219U;

	t60 = (x649%(x650/(x651+x652)));

	if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MAX;
	int64_t t61 = 1LL;

	t61 = (x661%(x662/(x663+x664)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x669 = 665932332U;
	uint8_t x671 = 95U;
	uint16_t x672 = UINT16_MAX;
	volatile int64_t t62 = 1569482013333LL;

	t62 = (x669%(x670/(x671+x672)));

	if (t62 != 27521628LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x677 = INT8_MAX;
	volatile int64_t x678 = INT64_MAX;
	volatile uint8_t x679 = UINT8_MAX;
	volatile int64_t t63 = 840065956LL;

	t63 = (x677%(x678/(x679+x680)));

	if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x689 = -1;
	int64_t x690 = INT64_MAX;
	int64_t t64 = -332965279844814310LL;

	t64 = (x689%(x690/(x691+x692)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x693 = 869206045LLU;
	int64_t x694 = INT64_MIN;
	uint8_t x695 = UINT8_MAX;
	static uint8_t x696 = UINT8_MAX;
	uint64_t t65 = 1193099422535778824LLU;

	t65 = (x693%(x694/(x695+x696)));

	if (t65 != 869206045LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x697 = INT8_MIN;
	int64_t x698 = INT64_MAX;
	static uint16_t x699 = 12813U;
	int16_t x700 = 5;
	static int64_t t66 = -15535549LL;

	t66 = (x697%(x698/(x699+x700)));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x701 = INT64_MIN;
	volatile uint32_t x702 = UINT32_MAX;
	static int32_t x703 = INT32_MAX;
	volatile int16_t x704 = INT16_MIN;
	volatile int64_t t67 = 3030LL;

	t67 = (x701%(x702/(x703+x704)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x717 = UINT8_MAX;
	int32_t x718 = INT32_MAX;
	int64_t x719 = -2330370LL;
	int64_t t68 = 1LL;

	t68 = (x717%(x718/(x719+x720)));

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x742 = INT8_MIN;
	static uint64_t x743 = UINT64_MAX;
	int32_t x744 = INT32_MIN;
	static volatile uint64_t t69 = 280568542599LLU;

	t69 = (x741%(x742/(x743+x744)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x749 = INT16_MIN;
	volatile int16_t x750 = INT16_MIN;
	int32_t x752 = -1344;
	int32_t t70 = 2180;

	t70 = (x749%(x750/(x751+x752)));

	if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x760 = 24;
	static uint64_t t71 = 23LLU;

	t71 = (x757%(x758/(x759+x760)));

	if (t71 != 127LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x765 = -32760826222479684LL;
	int8_t x768 = -1;
	uint64_t t72 = 129906LLU;

	t72 = (x765%(x766/(x767+x768)));

	if (t72 != 4607615LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x774 = INT64_MAX;
	volatile uint32_t x775 = 4U;
	int64_t t73 = 65842508839837LL;

	t73 = (x773%(x774/(x775+x776)));

	if (t73 != 51LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x777 = 51265932551LL;
	volatile uint16_t x779 = UINT16_MAX;
	int64_t x780 = -2700004LL;
	volatile int64_t t74 = -4193244014540245589LL;

	t74 = (x777%(x778/(x779+x780)));

	if (t74 != 51265932551LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x791 = INT8_MIN;
	uint8_t x792 = UINT8_MAX;
	volatile uint64_t t75 = 278735955LLU;

	t75 = (x789%(x790/(x791+x792)));

	if (t75 != 255LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x793 = 3707U;
	int8_t x794 = -1;
	volatile uint64_t t76 = 64728637693362304LLU;

	t76 = (x793%(x794/(x795+x796)));

	if (t76 != 3707LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x801 = -40;
	static int32_t x802 = INT32_MIN;
	int32_t x804 = 2289;
	uint64_t t77 = 8567083304028LLU;

	t77 = (x801%(x802/(x803+x804)));

	if (t77 != 2147485451LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x837 = 524350744LLU;
	int64_t x838 = INT64_MIN;
	int16_t x839 = INT16_MAX;
	static int16_t x840 = -21;
	static volatile uint64_t t78 = 313935670873LLU;

	t78 = (x837%(x838/(x839+x840)));

	if (t78 != 524350744LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x845 = INT32_MAX;
	int16_t x846 = INT16_MAX;
	static int64_t x847 = -1LL;
	uint16_t x848 = 11U;
	int64_t t79 = 253273271018LL;

	t79 = (x845%(x846/(x847+x848)));

	if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x853 = INT16_MIN;
	uint16_t x854 = 33U;
	int8_t x855 = -1;
	volatile uint32_t t80 = 1U;

	t80 = (x853%(x854/(x855+x856)));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x878 = INT16_MIN;
	int64_t x879 = -3257LL;
	int32_t x880 = -1;
	int64_t t81 = -22LL;

	t81 = (x877%(x878/(x879+x880)));

	if (t81 != -5LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x886 = INT16_MIN;
	int16_t x887 = -1;
	static volatile uint32_t x888 = 23174U;
	int64_t t82 = -547663107941LL;

	t82 = (x885%(x886/(x887+x888)));

	if (t82 != -31552LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x897 = -1LL;
	volatile int64_t x898 = INT64_MIN;
	uint8_t x899 = 71U;
	int16_t x900 = 36;
	volatile int64_t t83 = -1992497070292LL;

	t83 = (x897%(x898/(x899+x900)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x905 = -1782667321894176LL;
	static volatile uint16_t x906 = UINT16_MAX;
	uint16_t x907 = 3U;
	uint16_t x908 = 5752U;
	static int64_t t84 = -246370859LL;

	t84 = (x905%(x906/(x907+x908)));

	if (t84 != -3LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x925 = -1;
	int32_t x926 = INT32_MIN;
	int16_t x927 = -97;
	volatile int8_t x928 = 0;
	static volatile int32_t t85 = 240451288;

	t85 = (x925%(x926/(x927+x928)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x929 = INT8_MIN;
	int32_t x930 = INT32_MIN;
	volatile int32_t x931 = 13372;
	uint8_t x932 = 10U;
	volatile int32_t t86 = 28034946;

	t86 = (x929%(x930/(x931+x932)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x937 = 66947082153LL;
	uint64_t x938 = UINT64_MAX;
	int64_t x939 = -5612836123LL;
	int16_t x940 = -3760;
	uint64_t t87 = 202276LLU;

	t87 = (x937%(x938/(x939+x940)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x943 = 32;
	static volatile int32_t x944 = INT32_MIN;
	volatile uint32_t t88 = 58U;

	t88 = (x941%(x942/(x943+x944)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x945 = INT64_MIN;
	int64_t x946 = 523325LL;
	int8_t x947 = 14;
	volatile uint64_t x948 = 18926LLU;
	uint64_t t89 = 10295952106929684LLU;

	t89 = (x945%(x946/(x947+x948)));

	if (t89 != 26LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x950 = UINT16_MAX;
	uint8_t x951 = UINT8_MAX;
	int32_t x952 = -1;
	volatile uint32_t t90 = 141U;

	t90 = (x949%(x950/(x951+x952)));

	if (t90 != 15U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x957 = -2;
	static volatile uint64_t x958 = 1158409389LLU;
	int32_t x960 = -1;
	static uint64_t t91 = 21LLU;

	t91 = (x957%(x958/(x959+x960)));

	if (t91 != 645794LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x961 = INT32_MAX;
	int16_t x963 = -1;
	static int8_t x964 = 18;
	volatile int64_t t92 = -2094117045LL;

	t92 = (x961%(x962/(x963+x964)));

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x973 = -1;
	static volatile int32_t x974 = INT32_MIN;
	int32_t x975 = INT32_MIN;
	static volatile uint64_t t93 = 39293315096LLU;

	t93 = (x973%(x974/(x975+x976)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x978 = UINT32_MAX;
	int16_t x980 = INT16_MAX;
	static uint32_t t94 = 49U;

	t94 = (x977%(x978/(x979+x980)));

	if (t94 != 32767U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x993 = -1LL;
	uint32_t x995 = 524846682U;

	t95 = (x993%(x994/(x995+x996)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x997 = 32061411266LLU;
	uint16_t x998 = 2573U;
	int32_t x999 = -1;
	uint8_t x1000 = UINT8_MAX;
	uint64_t t96 = 341146496LLU;

	t96 = (x997%(x998/(x999+x1000)));

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1016 = INT32_MAX;
	volatile int64_t t97 = 9345171LL;

	t97 = (x1013%(x1014/(x1015+x1016)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1021 = 1U;
	static int32_t x1023 = -1;
	volatile int16_t x1024 = -13;
	static volatile uint64_t t98 = 4LLU;

	t98 = (x1021%(x1022/(x1023+x1024)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1025 = INT32_MIN;
	int16_t x1026 = INT16_MAX;
	static int32_t x1027 = INT32_MAX;

	t99 = (x1025%(x1026/(x1027+x1028)));

	if (t99 != -2) { NG(); } else { ; }
	
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

