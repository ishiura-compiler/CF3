#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x20 = INT16_MAX;
static int32_t x22 = -332186;
static int8_t x23 = INT8_MAX;
int8_t x43 = -1;
int8_t x52 = INT8_MIN;
volatile int64_t t6 = -6365648726034807LL;
volatile uint32_t t8 = UINT32_MAX;
int32_t x124 = -1;
int64_t x150 = -21913488LL;
int64_t t14 = INT64_MIN;
int8_t x178 = INT8_MIN;
int8_t x186 = -34;
int16_t x196 = INT16_MIN;
int8_t x204 = 8;
int32_t t19 = 396;
volatile int64_t x213 = -1LL;
int8_t x215 = -1;
volatile int64_t x224 = -2458LL;
int64_t x238 = INT64_MIN;
static int32_t x249 = -1;
int32_t x252 = INT32_MAX;
static volatile int32_t x269 = INT32_MIN;
int32_t t25 = INT32_MIN;
uint32_t x277 = 11903U;
int8_t x280 = 1;
volatile uint16_t x282 = UINT16_MAX;
volatile int32_t t27 = 794253;
int32_t x302 = INT32_MIN;
int32_t x303 = INT32_MIN;
uint8_t x304 = 6U;
int32_t x307 = 313;
int32_t x314 = INT32_MIN;
int32_t x353 = INT32_MIN;
int32_t x360 = 1;
int32_t x374 = INT32_MIN;
volatile int32_t t35 = -146496145;
volatile uint16_t x380 = 56U;
int32_t t36 = 0;
volatile uint32_t x385 = 10933419U;
volatile int8_t x386 = -1;
static int16_t x388 = INT16_MIN;
int32_t x393 = INT32_MAX;
int32_t t40 = INT32_MIN;
uint32_t x416 = 2U;
uint8_t x421 = UINT8_MAX;
volatile int32_t x438 = INT32_MIN;
uint16_t x449 = 7683U;
static uint32_t x469 = UINT32_MAX;
uint32_t x471 = 56293U;
static volatile uint32_t t45 = UINT32_MAX;
volatile uint32_t t46 = 2U;
volatile int32_t t47 = -7488366;
uint8_t x492 = 19U;
static int8_t x502 = -1;
int16_t x519 = -1;
static uint32_t x520 = 11514817U;
volatile int64_t t51 = INT64_MAX;
uint16_t x553 = 966U;
volatile int32_t t53 = -51;
static int8_t x570 = -1;
int64_t x572 = -4384642065408LL;
volatile uint32_t t54 = 6U;
volatile int32_t x598 = -1;
static int32_t x602 = INT32_MIN;
volatile uint8_t x648 = 69U;
static int32_t t60 = 5;
volatile int8_t x650 = -3;
int64_t x655 = INT64_MIN;
volatile uint32_t t63 = 35497U;
volatile int32_t t64 = -156;
volatile int32_t t65 = -1990;
int32_t x737 = -21007;
static int8_t x738 = -1;
int64_t x740 = -132237063291LL;
static uint8_t x770 = 2U;
uint64_t x771 = 20512498653LLU;
uint16_t x781 = 5619U;
int64_t x784 = INT64_MIN;
int16_t x790 = INT16_MIN;
volatile uint32_t x792 = UINT32_MAX;
volatile int8_t x799 = -1;
uint8_t x829 = 105U;
uint32_t x841 = 2050881671U;
int32_t x844 = -329984;
static uint32_t t76 = 22614U;
int8_t x845 = INT8_MIN;
static int8_t x848 = INT8_MAX;
int32_t t78 = 420532;
uint64_t x898 = 11480721846550LLU;
static uint8_t x900 = UINT8_MAX;
int16_t x916 = -4;
static int32_t x940 = INT32_MIN;
volatile uint64_t t84 = 4786LLU;
static uint32_t x965 = 77811U;
uint16_t x974 = 27538U;
int64_t x980 = INT64_MAX;
volatile int8_t x1009 = -1;
int32_t x1012 = INT32_MIN;
int64_t x1022 = INT64_MIN;
uint8_t x1023 = 12U;
static volatile int32_t t90 = 405852;
int64_t x1034 = INT64_MIN;
uint32_t t93 = UINT32_MAX;
static uint16_t x1074 = 17U;
int8_t x1083 = 51;
static int16_t x1084 = INT16_MAX;
volatile int16_t x1095 = -1;


void f0(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = -1LL;
	uint32_t x19 = UINT32_MAX;
	static int32_t t0 = 0;

	t0 = (x17/(x18<(x19/x20)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = 65166273U;
	int32_t x24 = -704698955;
	volatile uint32_t t1 = 916322245U;

	t1 = (x21/(x22<(x23/x24)));

	if (t1 != 65166273U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x37 = -313025;
	int8_t x38 = 1;
	int16_t x39 = -1;
	volatile uint32_t x40 = 7813U;
	static volatile int32_t t2 = 117007;

	t2 = (x37/(x38<(x39/x40)));

	if (t2 != -313025) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = -1;
	static int8_t x42 = INT8_MIN;
	static volatile int8_t x44 = -1;
	int32_t t3 = -124;

	t3 = (x41/(x42<(x43/x44)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x49 = INT32_MAX;
	int64_t x50 = -1359089485851830652LL;
	int64_t x51 = -3407LL;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x49/(x50<(x51/x52)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x57 = 1;
	int32_t x58 = INT32_MIN;
	volatile int32_t x59 = -645370;
	int8_t x60 = 1;
	static int32_t t5 = 26;

	t5 = (x57/(x58<(x59/x60)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x61 = 866807LL;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = -314647639701LL;

	t6 = (x61/(x62<(x63/x64)));

	if (t6 != 866807LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x73 = UINT32_MAX;
	int8_t x74 = -1;
	static int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x73/(x74<(x75/x76)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = -20;
	static volatile int16_t x79 = -33;
	int64_t x80 = INT64_MAX;

	t8 = (x77/(x78<(x79/x80)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 2LLU;
	static int32_t x83 = INT32_MAX;
	static volatile int8_t x84 = INT8_MAX;
	int32_t t9 = -10;

	t9 = (x81/(x82<(x83/x84)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x93 = 27U;
	static int64_t x94 = INT64_MIN;
	volatile uint32_t x95 = 747821U;
	uint8_t x96 = 4U;
	int32_t t10 = 5670816;

	t10 = (x93/(x94<(x95/x96)));

	if (t10 != 27) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x105 = 4U;
	int32_t x106 = -1;
	int64_t x107 = -1LL;
	int64_t x108 = INT64_MIN;
	static volatile int32_t t11 = -7905085;

	t11 = (x105/(x106<(x107/x108)));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -7890;
	int16_t x123 = -1;
	volatile int32_t t12 = -27969309;

	t12 = (x121/(x122<(x123/x124)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x149 = -1;
	volatile uint16_t x151 = 1306U;
	volatile int8_t x152 = -1;
	volatile int32_t t13 = 16943062;

	t13 = (x149/(x150<(x151/x152)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x173 = INT64_MIN;
	volatile int32_t x174 = -1;
	int32_t x175 = INT32_MIN;
	volatile int64_t x176 = INT64_MIN;

	t14 = (x173/(x174<(x175/x176)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x177 = INT64_MIN;
	static uint16_t x179 = 0U;
	static volatile uint16_t x180 = UINT16_MAX;
	int64_t t15 = INT64_MIN;

	t15 = (x177/(x178<(x179/x180)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	int64_t x184 = -3096335930579259LL;
	int64_t t16 = INT64_MIN;

	t16 = (x181/(x182<(x183/x184)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x185 = -1;
	static uint8_t x187 = 35U;
	volatile int16_t x188 = INT16_MIN;
	int32_t t17 = -7887604;

	t17 = (x185/(x186<(x187/x188)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x193 = -233;
	int64_t x194 = -1725291883799LL;
	static int32_t x195 = 161650;
	int32_t t18 = -174982;

	t18 = (x193/(x194<(x195/x196)));

	if (t18 != -233) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x202 = 108554973617LLU;
	volatile uint64_t x203 = 1038446562284029744LLU;

	t19 = (x201/(x202<(x203/x204)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x205 = 21951573LLU;
	int64_t x206 = -1LL;
	int16_t x207 = -14;
	uint16_t x208 = UINT16_MAX;
	uint64_t t20 = 172793LLU;

	t20 = (x205/(x206<(x207/x208)));

	if (t20 != 21951573LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x214 = INT32_MIN;
	static int64_t x216 = -1LL;
	volatile int64_t t21 = -113303617426324LL;

	t21 = (x213/(x214<(x215/x216)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x221 = 34138;
	int64_t x222 = INT64_MIN;
	volatile int32_t x223 = -177853;
	volatile int32_t t22 = 0;

	t22 = (x221/(x222<(x223/x224)));

	if (t22 != 34138) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x237 = -1;
	int16_t x239 = -1;
	int8_t x240 = INT8_MIN;
	volatile int32_t t23 = 3913346;

	t23 = (x237/(x238<(x239/x240)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x250 = -1355;
	int32_t x251 = 1;
	volatile int32_t t24 = -1744468;

	t24 = (x249/(x250<(x251/x252)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x270 = INT16_MIN;
	int64_t x271 = -1LL;
	int16_t x272 = -1;

	t25 = (x269/(x270<(x271/x272)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x278 = 213771467293765LLU;
	volatile int16_t x279 = INT16_MIN;
	volatile uint32_t t26 = 41544U;

	t26 = (x277/(x278<(x279/x280)));

	if (t26 != 11903U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x281 = -1;
	int32_t x283 = INT32_MIN;
	int64_t x284 = -1LL;

	t27 = (x281/(x282<(x283/x284)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x301 = INT64_MAX;
	static int64_t t28 = INT64_MAX;

	t28 = (x301/(x302<(x303/x304)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x305 = 25;
	volatile int8_t x306 = -2;
	int64_t x308 = INT64_MIN;
	volatile int32_t t29 = 27524822;

	t29 = (x305/(x306<(x307/x308)));

	if (t29 != 25) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x313 = INT32_MAX;
	uint8_t x315 = UINT8_MAX;
	volatile int16_t x316 = -5;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x313/(x314<(x315/x316)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x317 = -1;
	static int32_t x318 = -52235;
	static int64_t x319 = INT64_MIN;
	int8_t x320 = -2;
	static volatile int32_t t31 = -2848899;

	t31 = (x317/(x318<(x319/x320)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x333 = INT8_MAX;
	uint64_t x334 = 2327056409648226314LLU;
	int16_t x335 = INT16_MAX;
	volatile int64_t x336 = -1LL;
	int32_t t32 = -26;

	t32 = (x333/(x334<(x335/x336)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MIN;
	static int64_t x356 = INT64_MIN;
	int32_t t33 = INT32_MIN;

	t33 = (x353/(x354<(x355/x356)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = 0;
	static uint32_t x359 = UINT32_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x357/(x358<(x359/x360)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x373 = INT16_MIN;
	static uint8_t x375 = 6U;
	int64_t x376 = 3399217403671LL;

	t35 = (x373/(x374<(x375/x376)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x377 = -1;
	int16_t x378 = -1;
	static volatile int16_t x379 = -5;

	t36 = (x377/(x378<(x379/x380)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x381 = INT16_MIN;
	volatile int16_t x382 = -1;
	static uint8_t x383 = 69U;
	volatile int32_t x384 = INT32_MAX;
	static int32_t t37 = 79488261;

	t37 = (x381/(x382<(x383/x384)));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x387 = INT64_MIN;
	static uint32_t t38 = 8U;

	t38 = (x385/(x386<(x387/x388)));

	if (t38 != 10933419U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x394 = -2096825;
	int8_t x395 = -6;
	int16_t x396 = -1;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x393/(x394<(x395/x396)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x405 = INT32_MIN;
	static int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MAX;
	volatile int32_t x408 = INT32_MAX;

	t40 = (x405/(x406<(x407/x408)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x413 = UINT64_MAX;
	int8_t x414 = INT8_MAX;
	int8_t x415 = -1;
	static uint64_t t41 = UINT64_MAX;

	t41 = (x413/(x414<(x415/x416)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x422 = INT32_MIN;
	uint8_t x423 = 1U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t42 = 3906;

	t42 = (x421/(x422<(x423/x424)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x437 = INT64_MIN;
	int8_t x439 = -1;
	static int16_t x440 = 414;
	int64_t t43 = INT64_MIN;

	t43 = (x437/(x438<(x439/x440)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x450 = -116;
	static int16_t x451 = INT16_MIN;
	volatile int16_t x452 = -5;
	static int32_t t44 = 175951;

	t44 = (x449/(x450<(x451/x452)));

	if (t44 != 7683) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x470 = 92U;
	uint32_t x472 = 22U;

	t45 = (x469/(x470<(x471/x472)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x473 = 2897U;
	volatile int64_t x474 = INT64_MIN;
	uint32_t x475 = UINT32_MAX;
	uint16_t x476 = 1586U;

	t46 = (x473/(x474<(x475/x476)));

	if (t46 != 2897U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x481 = INT16_MIN;
	uint32_t x482 = 1261U;
	static int32_t x483 = INT32_MIN;
	uint16_t x484 = UINT16_MAX;

	t47 = (x481/(x482<(x483/x484)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x489 = INT64_MIN;
	static int64_t x490 = -372672355581LL;
	static int8_t x491 = -1;
	int64_t t48 = INT64_MIN;

	t48 = (x489/(x490<(x491/x492)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x501 = 2364677539LL;
	int64_t x503 = INT64_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int64_t t49 = 2LL;

	t49 = (x501/(x502<(x503/x504)));

	if (t49 != 2364677539LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x513 = UINT16_MAX;
	static int32_t x514 = -393;
	int16_t x515 = INT16_MIN;
	int8_t x516 = INT8_MAX;
	volatile int32_t t50 = -1621;

	t50 = (x513/(x514<(x515/x516)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x517 = INT64_MAX;
	int8_t x518 = INT8_MAX;

	t51 = (x517/(x518<(x519/x520)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x537 = 31U;
	int16_t x538 = INT16_MIN;
	int16_t x539 = INT16_MIN;
	static uint16_t x540 = 5041U;
	static volatile uint32_t t52 = 202008137U;

	t52 = (x537/(x538<(x539/x540)));

	if (t52 != 31U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x554 = INT8_MAX;
	uint64_t x555 = 2376216LLU;
	volatile int16_t x556 = 1;

	t53 = (x553/(x554<(x555/x556)));

	if (t53 != 966) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x569 = 130672U;
	volatile int64_t x571 = INT64_MIN;

	t54 = (x569/(x570<(x571/x572)));

	if (t54 != 130672U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x577 = UINT64_MAX;
	static int16_t x578 = INT16_MIN;
	uint16_t x579 = 24360U;
	uint8_t x580 = 55U;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = (x577/(x578<(x579/x580)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x585 = 115U;
	static int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MIN;
	static int64_t x588 = INT64_MIN;
	int32_t t56 = 466546122;

	t56 = (x585/(x586<(x587/x588)));

	if (t56 != 115) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x597 = -1;
	static int32_t x599 = INT32_MAX;
	volatile int32_t x600 = INT32_MIN;
	int32_t t57 = -245776328;

	t57 = (x597/(x598<(x599/x600)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x601 = UINT8_MAX;
	int8_t x603 = INT8_MIN;
	static int16_t x604 = -5;
	volatile int32_t t58 = -229158;

	t58 = (x601/(x602<(x603/x604)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x621 = INT16_MIN;
	static int64_t x622 = INT64_MIN;
	int16_t x623 = -1;
	int32_t x624 = INT32_MIN;
	volatile int32_t t59 = 10;

	t59 = (x621/(x622<(x623/x624)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x645 = UINT8_MAX;
	int16_t x646 = 70;
	volatile uint64_t x647 = 5667650678LLU;

	t60 = (x645/(x646<(x647/x648)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x649 = 0LL;
	uint8_t x651 = 26U;
	volatile uint16_t x652 = UINT16_MAX;
	int64_t t61 = 2565301491LL;

	t61 = (x649/(x650<(x651/x652)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x653 = INT64_MIN;
	int16_t x654 = -2;
	int64_t x656 = -686193817795LL;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x653/(x654<(x655/x656)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x685 = 737U;
	static int64_t x686 = INT64_MIN;
	volatile int16_t x687 = INT16_MAX;
	volatile uint16_t x688 = 12659U;

	t63 = (x685/(x686<(x687/x688)));

	if (t63 != 737U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x697 = INT16_MIN;
	int32_t x698 = -7487;
	uint16_t x699 = UINT16_MAX;
	uint16_t x700 = UINT16_MAX;

	t64 = (x697/(x698<(x699/x700)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x725 = -164031959;
	int64_t x726 = INT64_MIN;
	int32_t x727 = 15;
	int64_t x728 = INT64_MIN;

	t65 = (x725/(x726<(x727/x728)));

	if (t65 != -164031959) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x729 = -13815;
	static int8_t x730 = -1;
	static int8_t x731 = INT8_MIN;
	int16_t x732 = -3;
	static int32_t t66 = 262986842;

	t66 = (x729/(x730<(x731/x732)));

	if (t66 != -13815) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x739 = 1U;
	volatile int32_t t67 = -19985750;

	t67 = (x737/(x738<(x739/x740)));

	if (t67 != -21007) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x769 = 28377279U;
	int8_t x772 = 13;
	volatile uint32_t t68 = 4336551U;

	t68 = (x769/(x770<(x771/x772)));

	if (t68 != 28377279U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x782 = -1;
	int32_t x783 = INT32_MIN;
	int32_t t69 = -113;

	t69 = (x781/(x782<(x783/x784)));

	if (t69 != 5619) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x789 = 1U;
	int64_t x791 = INT64_MAX;
	static int32_t t70 = 257784865;

	t70 = (x789/(x790<(x791/x792)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x797 = INT64_MIN;
	int16_t x798 = -1;
	int16_t x800 = INT16_MIN;
	static int64_t t71 = INT64_MIN;

	t71 = (x797/(x798<(x799/x800)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x805 = UINT8_MAX;
	int32_t x806 = INT32_MIN;
	int8_t x807 = -1;
	int64_t x808 = -4379LL;
	volatile int32_t t72 = 101;

	t72 = (x805/(x806<(x807/x808)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x825 = -1LL;
	volatile int8_t x826 = INT8_MIN;
	int16_t x827 = -54;
	int8_t x828 = INT8_MIN;
	int64_t t73 = 110732913991216215LL;

	t73 = (x825/(x826<(x827/x828)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x830 = 2631583462342074300LLU;
	uint64_t x831 = UINT64_MAX;
	volatile int64_t x832 = 3LL;
	int32_t t74 = -9672;

	t74 = (x829/(x830<(x831/x832)));

	if (t74 != 105) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x833 = INT64_MAX;
	int8_t x834 = -29;
	int32_t x835 = -9701;
	int16_t x836 = INT16_MAX;
	int64_t t75 = INT64_MAX;

	t75 = (x833/(x834<(x835/x836)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x842 = INT64_MIN;
	int16_t x843 = INT16_MIN;

	t76 = (x841/(x842<(x843/x844)));

	if (t76 != 2050881671U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x846 = INT16_MIN;
	volatile int64_t x847 = INT64_MAX;
	int32_t t77 = 31774496;

	t77 = (x845/(x846<(x847/x848)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x857 = -3;
	int8_t x858 = INT8_MIN;
	static int64_t x859 = -50986862280LL;
	int8_t x860 = INT8_MIN;

	t78 = (x857/(x858<(x859/x860)));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x865 = UINT16_MAX;
	static int16_t x866 = -1;
	volatile int16_t x867 = 9;
	static uint16_t x868 = UINT16_MAX;
	volatile int32_t t79 = -317;

	t79 = (x865/(x866<(x867/x868)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x893 = INT8_MIN;
	int8_t x894 = 14;
	int8_t x895 = -1;
	uint64_t x896 = 782890698469979LLU;
	volatile int32_t t80 = -2188623;

	t80 = (x893/(x894<(x895/x896)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x897 = UINT32_MAX;
	uint64_t x899 = 214233004687078146LLU;
	static volatile uint32_t t81 = UINT32_MAX;

	t81 = (x897/(x898<(x899/x900)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x913 = INT32_MIN;
	static int64_t x914 = -1LL;
	static int8_t x915 = 0;
	int32_t t82 = INT32_MIN;

	t82 = (x913/(x914<(x915/x916)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x925 = 1;
	static int64_t x926 = INT64_MIN;
	uint8_t x927 = 60U;
	volatile int8_t x928 = -54;
	int32_t t83 = 1;

	t83 = (x925/(x926<(x927/x928)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x937 = 33527825013839LLU;
	int64_t x938 = INT64_MIN;
	volatile int64_t x939 = 59592256308648067LL;

	t84 = (x937/(x938<(x939/x940)));

	if (t84 != 33527825013839LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x949 = 58U;
	int16_t x950 = INT16_MIN;
	int64_t x951 = -1LL;
	static int16_t x952 = INT16_MAX;
	volatile int32_t t85 = -1;

	t85 = (x949/(x950<(x951/x952)));

	if (t85 != 58) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x966 = INT16_MIN;
	int64_t x967 = -1LL;
	uint16_t x968 = UINT16_MAX;
	static uint32_t t86 = 18147872U;

	t86 = (x965/(x966<(x967/x968)));

	if (t86 != 77811U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x973 = 2U;
	uint32_t x975 = 9415451U;
	int8_t x976 = INT8_MAX;
	static int32_t t87 = 7;

	t87 = (x973/(x974<(x975/x976)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x977 = -489917098499LL;
	int16_t x978 = INT16_MIN;
	int8_t x979 = -1;
	int64_t t88 = -11LL;

	t88 = (x977/(x978<(x979/x980)));

	if (t88 != -489917098499LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x1010 = 10;
	static int64_t x1011 = -12511353279111LL;
	int32_t t89 = 2670471;

	t89 = (x1009/(x1010<(x1011/x1012)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1021 = 0U;
	volatile int64_t x1024 = -1405LL;

	t90 = (x1021/(x1022<(x1023/x1024)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1025 = INT32_MIN;
	int16_t x1026 = -1;
	int8_t x1027 = INT8_MAX;
	int16_t x1028 = INT16_MAX;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x1025/(x1026<(x1027/x1028)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1033 = 3602314484LLU;
	int16_t x1035 = INT16_MAX;
	int8_t x1036 = 4;
	static volatile uint64_t t92 = 3266959347372961244LLU;

	t92 = (x1033/(x1034<(x1035/x1036)));

	if (t92 != 3602314484LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1049 = UINT32_MAX;
	int64_t x1050 = -186238798383459LL;
	int16_t x1051 = INT16_MIN;
	volatile int8_t x1052 = INT8_MIN;

	t93 = (x1049/(x1050<(x1051/x1052)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1053 = -366;
	int64_t x1054 = INT64_MIN;
	uint32_t x1055 = 8595U;
	int8_t x1056 = 21;
	int32_t t94 = -4655538;

	t94 = (x1053/(x1054<(x1055/x1056)));

	if (t94 != -366) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1057 = INT16_MAX;
	int16_t x1058 = INT16_MIN;
	int64_t x1059 = -1LL;
	static int16_t x1060 = -2312;
	static int32_t t95 = 131990;

	t95 = (x1057/(x1058<(x1059/x1060)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x1061 = -2;
	static uint16_t x1062 = 37U;
	static uint64_t x1063 = 28901801647352LLU;
	int16_t x1064 = INT16_MAX;
	volatile int32_t t96 = 74;

	t96 = (x1061/(x1062<(x1063/x1064)));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x1073 = INT32_MIN;
	int16_t x1075 = INT16_MIN;
	static int32_t x1076 = -13;
	volatile int32_t t97 = INT32_MIN;

	t97 = (x1073/(x1074<(x1075/x1076)));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1081 = INT8_MIN;
	static int64_t x1082 = -675747333918LL;
	int32_t t98 = 430808874;

	t98 = (x1081/(x1082<(x1083/x1084)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1093 = INT16_MIN;
	static int64_t x1094 = -1LL;
	volatile int64_t x1096 = INT64_MIN;
	int32_t t99 = 1881284;

	t99 = (x1093/(x1094<(x1095/x1096)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

