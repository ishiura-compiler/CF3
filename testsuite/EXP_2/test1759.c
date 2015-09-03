#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = 6952;
uint32_t t4 = 933U;
uint8_t x50 = 59U;
int8_t x51 = INT8_MIN;
volatile int64_t t6 = 507LL;
volatile uint64_t x68 = UINT64_MAX;
uint64_t t7 = 17901500LLU;
int64_t x107 = INT64_MIN;
uint32_t x176 = 47075136U;
int16_t x181 = INT16_MAX;
static int8_t x183 = 4;
uint64_t x208 = 717280LLU;
uint64_t x241 = UINT64_MAX;
static int8_t x252 = INT8_MIN;
static volatile int32_t t17 = -1673;
int8_t x285 = INT8_MAX;
uint32_t x287 = 12U;
uint8_t x288 = 16U;
volatile int32_t t19 = -27;
uint8_t x430 = 0U;
uint32_t t27 = 19U;
int8_t x509 = INT8_MAX;
static uint16_t x511 = 3U;
int64_t x528 = INT64_MIN;
int64_t x540 = INT64_MAX;
static uint64_t x549 = UINT64_MAX;
uint8_t x561 = 39U;
uint8_t x562 = 79U;
int8_t x609 = 3;
volatile uint32_t x610 = 0U;
volatile uint32_t x611 = 12U;
volatile int16_t x624 = INT16_MIN;
static uint64_t t39 = 2520589999795LLU;
int32_t x686 = INT32_MIN;
int8_t x687 = INT8_MAX;
uint8_t x753 = 15U;
uint32_t x754 = 89U;
volatile uint32_t x773 = UINT32_MAX;
volatile uint32_t t45 = 62U;
int8_t x795 = 3;
int16_t x835 = INT16_MIN;
uint8_t x849 = 61U;
uint16_t x905 = 61U;
uint8_t x907 = 1U;
uint64_t x960 = 16357939LLU;
volatile uint64_t x985 = UINT64_MAX;
volatile int16_t x987 = INT16_MAX;
int64_t x1023 = INT64_MAX;
uint64_t x1025 = 8310296LLU;
volatile uint64_t t55 = 3654LLU;
static int8_t x1034 = INT8_MAX;
static int16_t x1040 = INT16_MAX;
static uint32_t x1059 = 1833U;
int64_t x1060 = INT64_MAX;
uint32_t x1085 = UINT32_MAX;
int64_t x1090 = INT64_MIN;
uint64_t t61 = 3439LLU;
static int32_t x1099 = INT32_MIN;
uint32_t x1100 = UINT32_MAX;
static int8_t x1148 = -1;
int32_t t64 = -79165;
int64_t x1168 = INT64_MAX;
int64_t x1175 = INT64_MAX;
uint32_t x1176 = 2574U;
uint64_t t66 = 1LLU;
static uint16_t x1220 = 11U;
volatile int8_t x1248 = INT8_MIN;
uint32_t t72 = 105118U;
volatile int32_t x1254 = INT32_MIN;
volatile int64_t t73 = -7667566383468637LL;
uint64_t x1290 = 635495LLU;
volatile int32_t t77 = 88036092;
volatile int64_t t78 = 0LL;
uint16_t x1365 = 218U;
volatile uint16_t x1376 = 2001U;
volatile uint64_t t81 = 3LLU;
int16_t x1414 = 2795;
static int64_t t82 = -2022259106548LL;
int32_t t84 = -32;
uint32_t x1469 = 3163103U;
int64_t x1507 = INT64_MIN;
int32_t x1508 = INT32_MIN;
volatile uint8_t x1523 = 1U;
static uint16_t x1550 = 1047U;
volatile int64_t x1552 = INT64_MIN;
int8_t x1631 = -1;
volatile int64_t x1634 = INT64_MIN;
int32_t x1648 = -1;
int64_t x1717 = INT64_MAX;
uint32_t x1718 = 489697U;
static uint8_t x1719 = 6U;
uint16_t x1805 = UINT16_MAX;
static uint32_t t98 = 111951U;
volatile uint32_t t99 = 1801392819U;


void f0(void) {
	uint16_t x1 = 328U;
	static int32_t x2 = INT32_MIN;
	static uint8_t x3 = 0U;
	int8_t x4 = -7;
	int32_t t0 = 2;

	t0 = ((x1<<(x2&x3))/x4);

	if (t0 != -46) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x10 = UINT64_MAX;
	uint16_t x11 = 0U;
	volatile int32_t t1 = 0;

	t1 = ((x9<<(x10&x11))/x12);

	if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	uint8_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	volatile int16_t x16 = INT16_MAX;
	volatile int32_t t2 = -6168150;

	t2 = ((x13<<(x14&x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = 2818889LLU;
	static int32_t x18 = INT32_MIN;
	static volatile uint32_t x19 = 24322710U;
	int32_t x20 = INT32_MIN;
	volatile uint64_t t3 = 91049LLU;

	t3 = ((x17<<(x18&x19))/x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MIN;
	int8_t x39 = 19;
	uint32_t x40 = 204U;

	t4 = ((x37<<(x38&x39))/x40);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x45 = 59U;
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MAX;
	int64_t x48 = 2675LL;
	int64_t t5 = 1545LL;

	t5 = ((x45<<(x46&x47))/x48);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x49 = 219381898380285873LL;
	int32_t x52 = INT32_MIN;

	t6 = ((x49<<(x50&x51))/x52);

	if (t6 != -102157657LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x65 = 28469725474062833LL;
	static int64_t x66 = INT64_MIN;
	volatile uint8_t x67 = UINT8_MAX;

	t7 = ((x65<<(x66&x67))/x68);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x85 = 47U;
	int8_t x86 = 1;
	int16_t x87 = -1;
	static int8_t x88 = INT8_MAX;
	volatile int32_t t8 = 752;

	t8 = ((x85<<(x86&x87))/x88);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x105 = 3667750LL;
	static uint16_t x106 = UINT16_MAX;
	int8_t x108 = -1;
	int64_t t9 = -4286608110168033088LL;

	t9 = ((x105<<(x106&x107))/x108);

	if (t9 != -3667750LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x173 = 7042U;
	int64_t x174 = INT64_MIN;
	uint32_t x175 = 92494U;
	uint32_t t10 = 7U;

	t10 = ((x173<<(x174&x175))/x176);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x177 = 2;
	uint16_t x178 = 4U;
	int32_t x179 = -1;
	int32_t x180 = INT32_MIN;
	volatile int32_t t11 = 26;

	t11 = ((x177<<(x178&x179))/x180);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x182 = -21897192;
	uint16_t x184 = 99U;
	int32_t t12 = 754;

	t12 = ((x181<<(x182&x183))/x184);

	if (t12 != 330) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x189 = 4453492LL;
	int8_t x190 = INT8_MAX;
	static int16_t x191 = INT16_MIN;
	volatile uint16_t x192 = 1711U;
	int64_t t13 = 3735751908798LL;

	t13 = ((x189<<(x190&x191))/x192);

	if (t13 != 2602LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x205 = 10830392U;
	static int16_t x206 = 8;
	int16_t x207 = 9;
	static volatile uint64_t t14 = 63LLU;

	t14 = ((x205<<(x206&x207))/x208);

	if (t14 != 3865LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x221 = UINT8_MAX;
	static int16_t x222 = 0;
	uint16_t x223 = 242U;
	volatile uint32_t x224 = 1U;
	volatile uint32_t t15 = 8173539U;

	t15 = ((x221<<(x222&x223))/x224);

	if (t15 != 255U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x242 = 4U;
	volatile int8_t x243 = INT8_MIN;
	static uint64_t x244 = 2802LLU;
	volatile uint64_t t16 = 13321013678LLU;

	t16 = ((x241<<(x242&x243))/x244);

	if (t16 != 6583420440296056LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x249 = INT16_MAX;
	static int8_t x250 = 11;
	static uint64_t x251 = UINT64_MAX;

	t17 = ((x249<<(x250&x251))/x252);

	if (t17 != -524272) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x281 = UINT32_MAX;
	int8_t x282 = INT8_MIN;
	int8_t x283 = 0;
	volatile uint64_t x284 = 436022848575231952LLU;
	uint64_t t18 = 1948393833044458LLU;

	t18 = ((x281<<(x282&x283))/x284);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x286 = 6;

	t19 = ((x285<<(x286&x287))/x288);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x293 = 256U;
	uint32_t x294 = 88U;
	volatile int32_t x295 = INT32_MIN;
	int16_t x296 = -1;
	volatile int32_t t20 = 3832517;

	t20 = ((x293<<(x294&x295))/x296);

	if (t20 != -256) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x313 = 43807950;
	static int16_t x314 = 2;
	volatile int32_t x315 = INT32_MAX;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t21 = 28;

	t21 = ((x313<<(x314&x315))/x316);

	if (t21 != 687183) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = 16U;
	uint8_t x324 = UINT8_MAX;
	volatile uint64_t t22 = 516LLU;

	t22 = ((x321<<(x322&x323))/x324);

	if (t22 != 72340172838076416LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x349 = 0U;
	volatile uint32_t x350 = 1U;
	uint16_t x351 = 373U;
	volatile int32_t x352 = INT32_MIN;
	int32_t t23 = 29132184;

	t23 = ((x349<<(x350&x351))/x352);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x357 = 55317293U;
	uint8_t x358 = 27U;
	static volatile int64_t x359 = INT64_MIN;
	volatile uint32_t x360 = UINT32_MAX;
	static uint32_t t24 = 408310764U;

	t24 = ((x357<<(x358&x359))/x360);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x425 = 2657372;
	int8_t x426 = 0;
	int16_t x427 = INT16_MIN;
	static int8_t x428 = INT8_MIN;
	int32_t t25 = -102;

	t25 = ((x425<<(x426&x427))/x428);

	if (t25 != -20760) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x429 = INT8_MAX;
	volatile int64_t x431 = 67469336325678LL;
	volatile int64_t x432 = -1LL;
	int64_t t26 = 1LL;

	t26 = ((x429<<(x430&x431))/x432);

	if (t26 != -127LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x473 = 425U;
	volatile int8_t x474 = INT8_MAX;
	volatile uint32_t x475 = 251180313U;
	uint32_t x476 = UINT32_MAX;

	t27 = ((x473<<(x474&x475))/x476);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x505 = 3720U;
	int64_t x506 = INT64_MIN;
	uint8_t x507 = 3U;
	volatile uint64_t x508 = 249662LLU;
	uint64_t t28 = 7LLU;

	t28 = ((x505<<(x506&x507))/x508);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x510 = INT8_MIN;
	static int64_t x512 = INT64_MAX;
	volatile int64_t t29 = -5225114353092447LL;

	t29 = ((x509<<(x510&x511))/x512);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x517 = 2U;
	volatile int16_t x518 = 2;
	int32_t x519 = -218920;
	static volatile int16_t x520 = INT16_MIN;
	volatile uint32_t t30 = 2805U;

	t30 = ((x517<<(x518&x519))/x520);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x525 = UINT64_MAX;
	static int16_t x526 = INT16_MIN;
	int8_t x527 = 43;
	static uint64_t t31 = 93LLU;

	t31 = ((x525<<(x526&x527))/x528);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x529 = 8126612848LLU;
	int32_t x530 = INT32_MIN;
	uint8_t x531 = UINT8_MAX;
	uint16_t x532 = UINT16_MAX;
	uint64_t t32 = 3LLU;

	t32 = ((x529<<(x530&x531))/x532);

	if (t32 != 124004LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x537 = 54U;
	uint8_t x538 = UINT8_MAX;
	int64_t x539 = INT64_MIN;
	int64_t t33 = -77036038LL;

	t33 = ((x537<<(x538&x539))/x540);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x550 = 10801518U;
	int64_t x551 = INT64_MIN;
	volatile int32_t x552 = -1;
	volatile uint64_t t34 = 1063109436002LLU;

	t34 = ((x549<<(x550&x551))/x552);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x563 = 13LL;
	volatile uint16_t x564 = 13U;
	volatile int32_t t35 = 84325;

	t35 = ((x561<<(x562&x563))/x564);

	if (t35 != 24576) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x612 = INT32_MIN;
	volatile int32_t t36 = 63;

	t36 = ((x609<<(x610&x611))/x612);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x617 = INT8_MAX;
	volatile int32_t x618 = INT32_MIN;
	int16_t x619 = 52;
	volatile uint32_t x620 = 26U;
	uint32_t t37 = 439U;

	t37 = ((x617<<(x618&x619))/x620);

	if (t37 != 4U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x621 = 0;
	uint32_t x622 = UINT32_MAX;
	int64_t x623 = INT64_MIN;
	static volatile int32_t t38 = -72824496;

	t38 = ((x621<<(x622&x623))/x624);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x661 = 217736LLU;
	int8_t x662 = 36;
	uint8_t x663 = 0U;
	uint32_t x664 = UINT32_MAX;

	t39 = ((x661<<(x662&x663))/x664);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x673 = UINT16_MAX;
	int64_t x674 = INT64_MIN;
	static int8_t x675 = 1;
	static uint32_t x676 = 1U;
	uint32_t t40 = 57680U;

	t40 = ((x673<<(x674&x675))/x676);

	if (t40 != 65535U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x685 = 1U;
	uint8_t x688 = 21U;
	int32_t t41 = 148444337;

	t41 = ((x685<<(x686&x687))/x688);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x689 = 1322U;
	uint8_t x690 = UINT8_MAX;
	static uint16_t x691 = 2U;
	int16_t x692 = -1;
	int32_t t42 = 186117;

	t42 = ((x689<<(x690&x691))/x692);

	if (t42 != -5288) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x717 = 89U;
	static uint64_t x718 = 7776752320LLU;
	volatile uint32_t x719 = 11U;
	uint64_t x720 = 553497571509722LLU;
	volatile uint64_t t43 = 4741930594LLU;

	t43 = ((x717<<(x718&x719))/x720);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x755 = 0U;
	volatile int64_t x756 = -1LL;
	int64_t t44 = -110999569280628591LL;

	t44 = ((x753<<(x754&x755))/x756);

	if (t44 != -15LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x774 = 21;
	int16_t x775 = -1;
	int16_t x776 = 45;

	t45 = ((x773<<(x774&x775))/x776);

	if (t45 != 95397114U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x793 = 32673885LL;
	int8_t x794 = 1;
	static int64_t x796 = INT64_MIN;
	volatile int64_t t46 = -3617LL;

	t46 = ((x793<<(x794&x795))/x796);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x833 = 5862U;
	int16_t x834 = INT16_MAX;
	volatile int32_t x836 = INT32_MIN;
	int32_t t47 = 44;

	t47 = ((x833<<(x834&x835))/x836);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x850 = 1;
	int8_t x851 = -1;
	volatile uint64_t x852 = 1817560883728190049LLU;
	volatile uint64_t t48 = 522270427LLU;

	t48 = ((x849<<(x850&x851))/x852);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x906 = 456471403746343LLU;
	uint8_t x908 = 100U;
	volatile int32_t t49 = 1559;

	t49 = ((x905<<(x906&x907))/x908);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x909 = 22;
	int64_t x910 = INT64_MIN;
	uint64_t x911 = 688030395897455LLU;
	int16_t x912 = INT16_MIN;
	volatile int32_t t50 = 23922;

	t50 = ((x909<<(x910&x911))/x912);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x945 = 1U;
	static uint8_t x946 = UINT8_MAX;
	static int64_t x947 = INT64_MIN;
	volatile int32_t x948 = -1;
	volatile int32_t t51 = -9;

	t51 = ((x945<<(x946&x947))/x948);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x957 = 15U;
	volatile uint8_t x958 = UINT8_MAX;
	uint32_t x959 = 2U;
	uint64_t t52 = 4546488814152378430LLU;

	t52 = ((x957<<(x958&x959))/x960);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x986 = INT32_MIN;
	int32_t x988 = INT32_MIN;
	uint64_t t53 = 25461LLU;

	t53 = ((x985<<(x986&x987))/x988);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1021 = INT16_MAX;
	static uint8_t x1022 = 3U;
	int16_t x1024 = INT16_MIN;
	volatile int32_t t54 = 26300758;

	t54 = ((x1021<<(x1022&x1023))/x1024);

	if (t54 != -7) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1026 = 573U;
	uint64_t x1027 = 69632523635LLU;
	int8_t x1028 = INT8_MIN;

	t55 = ((x1025<<(x1026&x1027))/x1028);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1033 = 4LLU;
	uint32_t x1035 = 444794010U;
	int32_t x1036 = 30;
	static volatile uint64_t t56 = 2017586898334LLU;

	t56 = ((x1033<<(x1034&x1035))/x1036);

	if (t56 != 8947848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1037 = UINT8_MAX;
	volatile int16_t x1038 = INT16_MIN;
	int16_t x1039 = INT16_MAX;
	int32_t t57 = -315534402;

	t57 = ((x1037<<(x1038&x1039))/x1040);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1045 = 577494983404LLU;
	int8_t x1046 = 1;
	volatile uint8_t x1047 = 1U;
	volatile uint64_t x1048 = 116LLU;
	volatile uint64_t t58 = 6824701026LLU;

	t58 = ((x1045<<(x1046&x1047))/x1048);

	if (t58 != 9956810058LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x1057 = 29800022U;
	uint64_t x1058 = 27LLU;
	int64_t t59 = 301LL;

	t59 = ((x1057<<(x1058&x1059))/x1060);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x1086 = 0U;
	uint64_t x1087 = 1906960897LLU;
	volatile int16_t x1088 = INT16_MIN;
	volatile uint32_t t60 = 47079U;

	t60 = ((x1085<<(x1086&x1087))/x1088);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x1089 = 4214661604LLU;
	uint8_t x1091 = 79U;
	volatile uint32_t x1092 = 42272U;

	t61 = ((x1089<<(x1090&x1091))/x1092);

	if (t61 != 99703LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1097 = UINT16_MAX;
	int32_t x1098 = INT32_MAX;
	uint32_t t62 = 126237U;

	t62 = ((x1097<<(x1098&x1099))/x1100);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x1125 = UINT16_MAX;
	uint8_t x1126 = 69U;
	int16_t x1127 = INT16_MIN;
	int32_t x1128 = INT32_MIN;
	int32_t t63 = 34620;

	t63 = ((x1125<<(x1126&x1127))/x1128);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1145 = 2U;
	volatile uint64_t x1146 = 86232939235794348LLU;
	static int64_t x1147 = 4LL;

	t64 = ((x1145<<(x1146&x1147))/x1148);

	if (t64 != -32) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x1165 = 5U;
	volatile int8_t x1166 = 0;
	int8_t x1167 = -4;
	volatile int64_t t65 = 210819399457347LL;

	t65 = ((x1165<<(x1166&x1167))/x1168);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1173 = 8392876043813LLU;
	int64_t x1174 = INT64_MIN;

	t66 = ((x1173<<(x1174&x1175))/x1176);

	if (t66 != 3260635603LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1193 = 0U;
	int16_t x1194 = 5;
	uint16_t x1195 = 3197U;
	int32_t x1196 = INT32_MIN;
	uint32_t t67 = 1921856374U;

	t67 = ((x1193<<(x1194&x1195))/x1196);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1205 = 0U;
	uint64_t x1206 = 42266277270784LLU;
	int8_t x1207 = 0;
	uint32_t x1208 = UINT32_MAX;
	uint32_t t68 = 48U;

	t68 = ((x1205<<(x1206&x1207))/x1208);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1209 = 198070271U;
	static uint16_t x1210 = 850U;
	uint16_t x1211 = 1U;
	int32_t x1212 = INT32_MAX;
	uint32_t t69 = 135073659U;

	t69 = ((x1209<<(x1210&x1211))/x1212);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1213 = 116U;
	int8_t x1214 = 1;
	int16_t x1215 = INT16_MIN;
	static volatile int8_t x1216 = -1;
	int32_t t70 = 20215;

	t70 = ((x1213<<(x1214&x1215))/x1216);

	if (t70 != -116) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1217 = 1U;
	int16_t x1218 = INT16_MIN;
	static int8_t x1219 = INT8_MAX;
	volatile int32_t t71 = 1;

	t71 = ((x1217<<(x1218&x1219))/x1220);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1245 = UINT32_MAX;
	volatile int32_t x1246 = -1;
	uint64_t x1247 = 15LLU;

	t72 = ((x1245<<(x1246&x1247))/x1248);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x1253 = 5U;
	uint16_t x1255 = 394U;
	int64_t x1256 = INT64_MIN;

	t73 = ((x1253<<(x1254&x1255))/x1256);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x1277 = UINT32_MAX;
	int8_t x1278 = INT8_MAX;
	static volatile int32_t x1279 = INT32_MIN;
	int64_t x1280 = -1LL;
	int64_t t74 = 58390411712156514LL;

	t74 = ((x1277<<(x1278&x1279))/x1280);

	if (t74 != -4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x1285 = 40U;
	volatile uint8_t x1286 = 54U;
	int16_t x1287 = INT16_MIN;
	uint8_t x1288 = UINT8_MAX;
	int32_t t75 = 0;

	t75 = ((x1285<<(x1286&x1287))/x1288);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x1289 = 55U;
	int32_t x1291 = INT32_MIN;
	int64_t x1292 = -225189432671LL;
	volatile int64_t t76 = -255459463874768398LL;

	t76 = ((x1289<<(x1290&x1291))/x1292);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x1317 = 48U;
	volatile int16_t x1318 = -4634;
	volatile int8_t x1319 = 1;
	int32_t x1320 = -1;

	t77 = ((x1317<<(x1318&x1319))/x1320);

	if (t77 != -48) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1341 = 12U;
	static uint32_t x1342 = 2U;
	uint16_t x1343 = 5535U;
	int64_t x1344 = -1LL;

	t78 = ((x1341<<(x1342&x1343))/x1344);

	if (t78 != -48LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1366 = INT8_MIN;
	uint8_t x1367 = 1U;
	int8_t x1368 = -1;
	volatile int32_t t79 = -483;

	t79 = ((x1365<<(x1366&x1367))/x1368);

	if (t79 != -218) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1373 = UINT16_MAX;
	int32_t x1374 = INT32_MAX;
	volatile uint8_t x1375 = 1U;
	volatile int32_t t80 = -398564530;

	t80 = ((x1373<<(x1374&x1375))/x1376);

	if (t80 != 65) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1389 = UINT64_MAX;
	int32_t x1390 = INT32_MIN;
	uint32_t x1391 = 1U;
	int8_t x1392 = INT8_MAX;

	t81 = ((x1389<<(x1390&x1391))/x1392);

	if (t81 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1413 = 260669U;
	int64_t x1415 = INT64_MIN;
	int64_t x1416 = 219LL;

	t82 = ((x1413<<(x1414&x1415))/x1416);

	if (t82 != 1190LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x1429 = 49U;
	uint16_t x1430 = UINT16_MAX;
	int32_t x1431 = INT32_MIN;
	int64_t x1432 = -948LL;
	volatile int64_t t83 = -1161079531558LL;

	t83 = ((x1429<<(x1430&x1431))/x1432);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1433 = 276;
	uint16_t x1434 = 0U;
	int32_t x1435 = INT32_MAX;
	int16_t x1436 = INT16_MAX;

	t84 = ((x1433<<(x1434&x1435))/x1436);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1470 = 1;
	int8_t x1471 = 1;
	uint16_t x1472 = 2U;
	uint32_t t85 = 62948231U;

	t85 = ((x1469<<(x1470&x1471))/x1472);

	if (t85 != 3163103U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1505 = UINT32_MAX;
	static int64_t x1506 = INT64_MAX;
	static uint32_t t86 = 255660U;

	t86 = ((x1505<<(x1506&x1507))/x1508);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1521 = 0;
	int32_t x1522 = -1;
	uint32_t x1524 = UINT32_MAX;
	static uint32_t t87 = 4596U;

	t87 = ((x1521<<(x1522&x1523))/x1524);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x1549 = 19;
	int8_t x1551 = 8;
	volatile int64_t t88 = 1153626283703623862LL;

	t88 = ((x1549<<(x1550&x1551))/x1552);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x1597 = 74U;
	static int16_t x1598 = -52;
	uint32_t x1599 = 0U;
	int32_t x1600 = INT32_MAX;
	uint32_t t89 = 255914U;

	t89 = ((x1597<<(x1598&x1599))/x1600);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x1605 = UINT8_MAX;
	static uint64_t x1606 = 1814578LLU;
	static int32_t x1607 = INT32_MIN;
	static uint16_t x1608 = UINT16_MAX;
	static volatile int32_t t90 = -2240;

	t90 = ((x1605<<(x1606&x1607))/x1608);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1629 = 30U;
	uint16_t x1630 = 2U;
	int32_t x1632 = INT32_MAX;
	int32_t t91 = 52010262;

	t91 = ((x1629<<(x1630&x1631))/x1632);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1633 = 5U;
	volatile int16_t x1635 = 1;
	static int64_t x1636 = -637995LL;
	int64_t t92 = -651005829175529412LL;

	t92 = ((x1633<<(x1634&x1635))/x1636);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1645 = UINT16_MAX;
	uint16_t x1646 = 18U;
	int64_t x1647 = -1245933756LL;
	int32_t t93 = 112267996;

	t93 = ((x1645<<(x1646&x1647))/x1648);

	if (t93 != -65535) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1657 = INT32_MAX;
	volatile int8_t x1658 = INT8_MIN;
	int32_t x1659 = 11;
	static uint16_t x1660 = 10U;
	volatile int32_t t94 = -841389662;

	t94 = ((x1657<<(x1658&x1659))/x1660);

	if (t94 != 214748364) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x1661 = 7730088;
	int8_t x1662 = INT8_MIN;
	int16_t x1663 = 9;
	uint8_t x1664 = UINT8_MAX;
	volatile int32_t t95 = 0;

	t95 = ((x1661<<(x1662&x1663))/x1664);

	if (t95 != 30314) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1720 = INT64_MIN;
	int64_t t96 = -47911658281786LL;

	t96 = ((x1717<<(x1718&x1719))/x1720);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1769 = 20U;
	int8_t x1770 = INT8_MIN;
	int8_t x1771 = INT8_MAX;
	volatile uint16_t x1772 = 25121U;
	static int32_t t97 = -172815602;

	t97 = ((x1769<<(x1770&x1771))/x1772);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1806 = 104U;
	int32_t x1807 = INT32_MIN;
	static uint32_t x1808 = UINT32_MAX;

	t98 = ((x1805<<(x1806&x1807))/x1808);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1813 = 24U;
	uint32_t x1814 = 6591170U;
	uint32_t x1815 = 13U;
	volatile uint32_t x1816 = 44U;

	t99 = ((x1813<<(x1814&x1815))/x1816);

	if (t99 != 0U) { NG(); } else { ; }
	
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

