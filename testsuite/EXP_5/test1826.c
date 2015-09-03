#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x24 = INT8_MIN;
volatile int32_t t2 = 56;
uint32_t x89 = 3101U;
int16_t x111 = 61;
int16_t x141 = 1;
uint64_t x172 = 2068759857197397LLU;
int8_t x178 = 13;
int16_t x180 = INT16_MIN;
int16_t x234 = INT16_MAX;
volatile int16_t x324 = INT16_MIN;
int64_t x328 = INT64_MAX;
uint64_t x365 = 17203468145517106LLU;
uint64_t x373 = 101957743LLU;
int32_t x376 = INT32_MIN;
static int16_t x390 = INT16_MIN;
static int8_t x450 = INT8_MAX;
volatile int64_t x457 = 7473093LL;
int64_t x467 = INT64_MIN;
static int32_t t24 = -91487;
volatile int32_t t25 = 3472;
volatile uint64_t x489 = UINT64_MAX;
uint64_t t26 = UINT64_MAX;
volatile int16_t x536 = 7;
volatile uint8_t x555 = 12U;
int64_t x562 = INT64_MIN;
int16_t x564 = INT16_MAX;
static volatile int32_t t33 = 1;
static volatile int32_t x580 = -1;
uint64_t t34 = 2124980119719970535LLU;
uint16_t x589 = 0U;
static uint16_t x595 = 37U;
int32_t x612 = INT32_MIN;
volatile uint64_t x613 = 27835859826427LLU;
uint16_t x617 = 50U;
volatile int64_t x618 = INT64_MAX;
int32_t x650 = -1;
volatile int8_t x651 = 1;
int16_t x664 = INT16_MIN;
static int64_t t44 = INT64_MAX;
volatile int16_t x724 = INT16_MIN;
volatile int16_t x749 = INT16_MAX;
uint16_t x752 = UINT16_MAX;
int32_t t51 = 312455083;
uint16_t x785 = 132U;
int64_t x789 = 4088822524102LL;
volatile int32_t t57 = 1646;
volatile uint32_t t58 = 1044172099U;
int8_t x873 = 0;
static uint16_t x874 = 4U;
int8_t x882 = 6;
static int64_t x888 = INT64_MIN;
static uint16_t x906 = 1U;
uint16_t x908 = 23U;
uint16_t x909 = UINT16_MAX;
int32_t x911 = INT32_MAX;
uint32_t x929 = 1063U;
int16_t x939 = INT16_MIN;
int8_t x955 = INT8_MIN;
int32_t t73 = 306576159;
static int8_t x965 = 7;
int32_t x973 = 31553033;
uint32_t x1010 = 10U;
static int64_t x1017 = 8LL;
volatile int32_t x1019 = -10;
static int64_t t78 = 8544102750LL;
int64_t x1030 = 38000057708858LL;
int16_t x1031 = INT16_MAX;
uint32_t x1033 = 6U;
uint32_t t81 = 128632189U;
int32_t x1053 = INT32_MAX;
int8_t x1062 = 23;
int32_t t83 = 0;
static int64_t x1092 = INT64_MIN;
int64_t x1142 = INT64_MAX;
volatile int32_t x1149 = 6;
static volatile int32_t x1159 = 3268568;
uint32_t x1181 = 5623513U;
int64_t x1183 = 7112610729166LL;
volatile uint64_t x1206 = 3LLU;
static int32_t t95 = -69993483;
static uint32_t x1239 = 135360306U;
uint16_t x1277 = UINT16_MAX;


void f0(void) {
	volatile int16_t x21 = INT16_MAX;
	volatile uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 5188461U;
	int32_t t0 = 18;

	t0 = (x21<<((x22&x23)&x24));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x61 = 1722643103865094LL;
	int16_t x62 = -1;
	volatile int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = 2126U;
	int64_t t1 = 1917LL;

	t1 = (x61<<((x62&x63)&x64));

	if (t1 != 1722643103865094LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x69 = 194979840;
	int16_t x70 = -1;
	volatile int32_t x71 = 113920;
	static int32_t x72 = INT32_MIN;

	t2 = (x69<<((x70&x71)&x72));

	if (t2 != 194979840) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x90 = 4105U;
	volatile uint64_t x91 = 599720559548429LLU;
	uint16_t x92 = 1202U;
	uint32_t t3 = 4U;

	t3 = (x89<<((x90&x91)&x92));

	if (t3 != 3101U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x109 = INT8_MAX;
	uint16_t x110 = UINT16_MAX;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t4 = 941282;

	t4 = (x109<<((x110&x111)&x112));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x142 = 10;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = 17750LL;
	static int32_t t5 = 49;

	t5 = (x141<<((x142&x143)&x144));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x153 = 11U;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 68U;
	volatile int64_t x156 = INT64_MIN;
	int32_t t6 = -2957018;

	t6 = (x153<<((x154&x155)&x156));

	if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x169 = UINT32_MAX;
	static int32_t x170 = INT32_MIN;
	uint16_t x171 = UINT16_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (x169<<((x170&x171)&x172));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x177 = 20;
	int32_t x179 = 207177;
	static int32_t t8 = 2301;

	t8 = (x177<<((x178&x179)&x180));

	if (t8 != 20) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x197 = UINT16_MAX;
	uint64_t x198 = 3742733461LLU;
	volatile int8_t x199 = INT8_MIN;
	volatile uint16_t x200 = 47U;
	volatile int32_t t9 = 1;

	t9 = (x197<<((x198&x199)&x200));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x233 = UINT64_MAX;
	uint32_t x235 = 30U;
	static int16_t x236 = -1;
	static volatile uint64_t t10 = 633401350586566LLU;

	t10 = (x233<<((x234&x235)&x236));

	if (t10 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MAX;
	static int32_t x263 = INT32_MIN;
	volatile uint8_t x264 = 0U;
	int32_t t11 = -53814;

	t11 = (x261<<((x262&x263)&x264));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x286 = INT64_MIN;
	static uint64_t x287 = 26LLU;
	volatile int8_t x288 = 9;
	volatile int32_t t12 = -32398767;

	t12 = (x285<<((x286&x287)&x288));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x293 = INT32_MAX;
	uint32_t x294 = 0U;
	static volatile int16_t x295 = INT16_MAX;
	int16_t x296 = 3;
	static int32_t t13 = INT32_MAX;

	t13 = (x293<<((x294&x295)&x296));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x321 = UINT64_MAX;
	static volatile int8_t x322 = -4;
	int16_t x323 = 1713;
	static uint64_t t14 = UINT64_MAX;

	t14 = (x321<<((x322&x323)&x324));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 472U;
	volatile int32_t t15 = 1167593;

	t15 = (x325<<((x326&x327)&x328));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x366 = INT8_MAX;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = 1U;
	volatile uint64_t t16 = 60933003574009043LLU;

	t16 = (x365<<((x366&x367)&x368));

	if (t16 != 17203468145517106LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x374 = 3U;
	uint32_t x375 = 8664424U;
	uint64_t t17 = 53380717187LLU;

	t17 = (x373<<((x374&x375)&x376));

	if (t17 != 101957743LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x391 = INT8_MAX;
	int8_t x392 = -6;
	uint64_t t18 = UINT64_MAX;

	t18 = (x389<<((x390&x391)&x392));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x409 = 0;
	volatile int64_t x410 = -1LL;
	static uint32_t x411 = 1U;
	int32_t x412 = -357152296;
	static volatile int32_t t19 = -5408;

	t19 = (x409<<((x410&x411)&x412));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x421 = UINT16_MAX;
	uint64_t x422 = UINT64_MAX;
	volatile int8_t x423 = 1;
	static int64_t x424 = INT64_MIN;
	volatile int32_t t20 = 2364;

	t20 = (x421<<((x422&x423)&x424));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x449 = 142U;
	int16_t x451 = INT16_MIN;
	int8_t x452 = 1;
	int32_t t21 = -199;

	t21 = (x449<<((x450&x451)&x452));

	if (t21 != 142) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x458 = INT8_MAX;
	int8_t x459 = 2;
	int8_t x460 = -50;
	volatile int64_t t22 = -8457592LL;

	t22 = (x457<<((x458&x459)&x460));

	if (t22 != 29892372LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x461 = UINT64_MAX;
	uint16_t x462 = 3U;
	uint8_t x463 = UINT8_MAX;
	static int8_t x464 = 2;
	static volatile uint64_t t23 = 162LLU;

	t23 = (x461<<((x462&x463)&x464));

	if (t23 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x465 = INT8_MAX;
	static volatile int16_t x466 = INT16_MIN;
	static int64_t x468 = INT64_MAX;

	t24 = (x465<<((x466&x467)&x468));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x477 = 14712U;
	volatile uint32_t x478 = UINT32_MAX;
	volatile int8_t x479 = INT8_MIN;
	uint32_t x480 = 3U;

	t25 = (x477<<((x478&x479)&x480));

	if (t25 != 14712) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x490 = UINT16_MAX;
	volatile uint16_t x491 = 0U;
	volatile int8_t x492 = 10;

	t26 = (x489<<((x490&x491)&x492));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x501 = 158LLU;
	int32_t x502 = INT32_MIN;
	uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 404U;
	static volatile uint64_t t27 = 0LLU;

	t27 = (x501<<((x502&x503)&x504));

	if (t27 != 158LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x509 = 1;
	static volatile uint8_t x510 = 4U;
	int32_t x511 = INT32_MAX;
	int16_t x512 = -1;
	volatile int32_t t28 = -477081;

	t28 = (x509<<((x510&x511)&x512));

	if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x513 = 54U;
	int64_t x514 = -28321857515759710LL;
	int32_t x515 = -55;
	int8_t x516 = 1;
	int32_t t29 = -237;

	t29 = (x513<<((x514&x515)&x516));

	if (t29 != 54) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x529 = 318888;
	int8_t x530 = 11;
	uint64_t x531 = 3772551577672789LLU;
	int32_t x532 = INT32_MIN;
	volatile int32_t t30 = 1326;

	t30 = (x529<<((x530&x531)&x532));

	if (t30 != 318888) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x533 = 7469LL;
	int64_t x534 = 37459463550810359LL;
	volatile int16_t x535 = INT16_MIN;
	volatile int64_t t31 = -106LL;

	t31 = (x533<<((x534&x535)&x536));

	if (t31 != 7469LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x553 = INT32_MAX;
	uint32_t x554 = 15630800U;
	uint16_t x556 = UINT16_MAX;
	int32_t t32 = INT32_MAX;

	t32 = (x553<<((x554&x555)&x556));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x561 = 3223U;
	uint32_t x563 = 42U;

	t33 = (x561<<((x562&x563)&x564));

	if (t33 != 3223) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x577 = 17385859589229LLU;
	int16_t x578 = INT16_MAX;
	int8_t x579 = 41;

	t34 = (x577<<((x578&x579)&x580));

	if (t34 != 17890789213264150528LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x590 = 5U;
	uint8_t x591 = 25U;
	int8_t x592 = -1;
	volatile int32_t t35 = -448222;

	t35 = (x589<<((x590&x591)&x592));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x593 = 1U;
	volatile int8_t x594 = INT8_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t36 = 368612;

	t36 = (x593<<((x594&x595)&x596));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x609 = 70;
	int8_t x610 = 12;
	int32_t x611 = INT32_MIN;
	static volatile int32_t t37 = 0;

	t37 = (x609<<((x610&x611)&x612));

	if (t37 != 70) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x614 = -53089976676406LL;
	uint8_t x615 = 7U;
	static uint16_t x616 = 5U;
	volatile uint64_t t38 = 1947869LLU;

	t38 = (x613<<((x614&x615)&x616));

	if (t38 != 27835859826427LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x619 = -1;
	int8_t x620 = 10;
	static volatile int32_t t39 = -787074279;

	t39 = (x617<<((x618&x619)&x620));

	if (t39 != 51200) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x625 = UINT32_MAX;
	int64_t x626 = 38585489100335LL;
	int16_t x627 = INT16_MIN;
	static uint32_t x628 = 54U;
	static uint32_t t40 = UINT32_MAX;

	t40 = (x625<<((x626&x627)&x628));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x649 = 50U;
	int8_t x652 = INT8_MIN;
	volatile uint32_t t41 = 60U;

	t41 = (x649<<((x650&x651)&x652));

	if (t41 != 50U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x661 = UINT16_MAX;
	volatile int32_t x662 = INT32_MIN;
	static volatile int32_t x663 = 2476;
	volatile int32_t t42 = -175537;

	t42 = (x661<<((x662&x663)&x664));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x669 = UINT64_MAX;
	uint32_t x670 = 56645608U;
	int16_t x671 = 0;
	int8_t x672 = INT8_MAX;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (x669<<((x670&x671)&x672));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x673 = INT64_MAX;
	static int16_t x674 = 9019;
	uint16_t x675 = 1U;
	int64_t x676 = 54LL;

	t44 = (x673<<((x674&x675)&x676));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x685 = 766743906LLU;
	int8_t x686 = INT8_MIN;
	int32_t x687 = 259;
	uint8_t x688 = 10U;
	static uint64_t t45 = 3LLU;

	t45 = (x685<<((x686&x687)&x688));

	if (t45 != 766743906LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x717 = 14LL;
	int64_t x718 = INT64_MIN;
	static int16_t x719 = 3636;
	int64_t x720 = -862LL;
	int64_t t46 = 127LL;

	t46 = (x717<<((x718&x719)&x720));

	if (t46 != 14LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x721 = 1247617221U;
	int64_t x722 = 2443605058799815884LL;
	int8_t x723 = INT8_MAX;
	uint32_t t47 = 153495U;

	t47 = (x721<<((x722&x723)&x724));

	if (t47 != 1247617221U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x725 = 28U;
	int64_t x726 = INT64_MIN;
	uint16_t x727 = 70U;
	static uint32_t x728 = 0U;
	volatile int32_t t48 = -1979;

	t48 = (x725<<((x726&x727)&x728));

	if (t48 != 28) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x733 = 31;
	int32_t x734 = INT32_MIN;
	volatile int32_t x735 = -47386189;
	int32_t x736 = INT32_MAX;
	int32_t t49 = -59476455;

	t49 = (x733<<((x734&x735)&x736));

	if (t49 != 31) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x737 = 702U;
	static uint16_t x738 = 0U;
	uint8_t x739 = 42U;
	static int32_t x740 = INT32_MIN;
	static int32_t t50 = 0;

	t50 = (x737<<((x738&x739)&x740));

	if (t50 != 702) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x750 = 45U;
	static int8_t x751 = INT8_MIN;

	t51 = (x749<<((x750&x751)&x752));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x777 = INT8_MAX;
	int8_t x778 = 0;
	uint8_t x779 = UINT8_MAX;
	int64_t x780 = INT64_MAX;
	volatile int32_t t52 = 911930;

	t52 = (x777<<((x778&x779)&x780));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x786 = INT64_MAX;
	uint8_t x787 = 1U;
	int8_t x788 = INT8_MAX;
	volatile int32_t t53 = 20;

	t53 = (x785<<((x786&x787)&x788));

	if (t53 != 264) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x790 = UINT16_MAX;
	uint8_t x791 = 17U;
	int32_t x792 = -1;
	int64_t t54 = -27999191185646234LL;

	t54 = (x789<<((x790&x791)&x792));

	if (t54 != 535930145879097344LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x809 = 3797U;
	uint8_t x810 = 70U;
	static uint32_t x811 = 1530435854U;
	int64_t x812 = 0LL;
	volatile int32_t t55 = 13;

	t55 = (x809<<((x810&x811)&x812));

	if (t55 != 3797) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x821 = UINT16_MAX;
	int64_t x822 = -723199582LL;
	int64_t x823 = -1LL;
	volatile uint8_t x824 = 0U;
	volatile int32_t t56 = 5;

	t56 = (x821<<((x822&x823)&x824));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x829 = 15U;
	volatile uint32_t x830 = 7U;
	int16_t x831 = -1;
	static volatile int32_t x832 = INT32_MAX;

	t57 = (x829<<((x830&x831)&x832));

	if (t57 != 1920) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x837 = 56U;
	int32_t x838 = INT32_MIN;
	int32_t x839 = INT32_MIN;
	static int16_t x840 = 17;

	t58 = (x837<<((x838&x839)&x840));

	if (t58 != 56U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x853 = INT64_MAX;
	static uint32_t x854 = 719382U;
	volatile uint64_t x855 = 3697LLU;
	int32_t x856 = INT32_MIN;
	int64_t t59 = INT64_MAX;

	t59 = (x853<<((x854&x855)&x856));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x865 = 374231418;
	static int8_t x866 = INT8_MIN;
	static int64_t x867 = INT64_MIN;
	volatile uint16_t x868 = 8382U;
	volatile int32_t t60 = 29399;

	t60 = (x865<<((x866&x867)&x868));

	if (t60 != 374231418) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x875 = -3684;
	volatile int32_t x876 = 1870;
	int32_t t61 = 38;

	t61 = (x873<<((x874&x875)&x876));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x881 = 66U;
	static int8_t x883 = -46;
	static uint64_t x884 = UINT64_MAX;
	static volatile int32_t t62 = 517161425;

	t62 = (x881<<((x882&x883)&x884));

	if (t62 != 264) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x885 = UINT8_MAX;
	volatile uint8_t x886 = 10U;
	int64_t x887 = INT64_MAX;
	int32_t t63 = 0;

	t63 = (x885<<((x886&x887)&x888));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x893 = UINT8_MAX;
	int8_t x894 = 11;
	int16_t x895 = -6307;
	static volatile int64_t x896 = INT64_MAX;
	volatile int32_t t64 = -1625030;

	t64 = (x893<<((x894&x895)&x896));

	if (t64 != 130560) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x905 = 52LLU;
	uint32_t x907 = 162743U;
	static volatile uint64_t t65 = 5LLU;

	t65 = (x905<<((x906&x907)&x908));

	if (t65 != 104LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x910 = 0;
	int32_t x912 = INT32_MAX;
	volatile int32_t t66 = -1400;

	t66 = (x909<<((x910&x911)&x912));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x913 = INT16_MAX;
	int8_t x914 = -31;
	int32_t x915 = 2938;
	int16_t x916 = INT16_MIN;
	int32_t t67 = -375;

	t67 = (x913<<((x914&x915)&x916));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x917 = INT32_MAX;
	int16_t x918 = 0;
	int32_t x919 = INT32_MIN;
	uint8_t x920 = 6U;
	int32_t t68 = INT32_MAX;

	t68 = (x917<<((x918&x919)&x920));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x930 = -1;
	volatile uint16_t x931 = 348U;
	volatile int16_t x932 = INT16_MIN;
	volatile uint32_t t69 = 1U;

	t69 = (x929<<((x930&x931)&x932));

	if (t69 != 1063U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x937 = INT8_MAX;
	int8_t x938 = INT8_MIN;
	int8_t x940 = 39;
	int32_t t70 = -21;

	t70 = (x937<<((x938&x939)&x940));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x945 = INT32_MAX;
	int16_t x946 = INT16_MAX;
	static int16_t x947 = INT16_MIN;
	int64_t x948 = -1LL;
	int32_t t71 = INT32_MAX;

	t71 = (x945<<((x946&x947)&x948));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x949 = 603803803702758LLU;
	uint32_t x950 = 1U;
	volatile int32_t x951 = INT32_MAX;
	static uint32_t x952 = UINT32_MAX;
	volatile uint64_t t72 = 488510117156LLU;

	t72 = (x949<<((x950&x951)&x952));

	if (t72 != 1207607607405516LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x953 = INT8_MAX;
	int8_t x954 = 30;
	uint16_t x956 = 0U;

	t73 = (x953<<((x954&x955)&x956));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x966 = INT32_MIN;
	static int32_t x967 = INT32_MIN;
	static int16_t x968 = 0;
	volatile int32_t t74 = 344007;

	t74 = (x965<<((x966&x967)&x968));

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x974 = 0U;
	static volatile uint16_t x975 = 4616U;
	static int32_t x976 = INT32_MAX;
	int32_t t75 = -5908919;

	t75 = (x973<<((x974&x975)&x976));

	if (t75 != 31553033) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x985 = 25707408675736415LLU;
	int32_t x986 = INT32_MAX;
	volatile int32_t x987 = INT32_MIN;
	int8_t x988 = INT8_MIN;
	uint64_t t76 = 4691555881745222081LLU;

	t76 = (x985<<((x986&x987)&x988));

	if (t76 != 25707408675736415LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1009 = 24U;
	static int16_t x1011 = INT16_MIN;
	int16_t x1012 = INT16_MIN;
	volatile int32_t t77 = 112785;

	t77 = (x1009<<((x1010&x1011)&x1012));

	if (t77 != 24) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1018 = 5U;
	uint64_t x1020 = UINT64_MAX;

	t78 = (x1017<<((x1018&x1019)&x1020));

	if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1021 = 22855716581LLU;
	static volatile uint16_t x1022 = 1U;
	static volatile int16_t x1023 = INT16_MIN;
	volatile int16_t x1024 = INT16_MAX;
	static volatile uint64_t t79 = 71370306LLU;

	t79 = (x1021<<((x1022&x1023)&x1024));

	if (t79 != 22855716581LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x1029 = UINT8_MAX;
	int16_t x1032 = INT16_MIN;
	int32_t t80 = -17432;

	t80 = (x1029<<((x1030&x1031)&x1032));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x1034 = 3242700U;
	int64_t x1035 = -1222579676816314793LL;
	int16_t x1036 = INT16_MIN;

	t81 = (x1033<<((x1034&x1035)&x1036));

	if (t81 != 6U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1054 = -1;
	uint16_t x1055 = 25632U;
	uint8_t x1056 = 28U;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x1053<<((x1054&x1055)&x1056));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x1061 = 4U;
	int8_t x1063 = -1;
	volatile uint64_t x1064 = 3LLU;

	t83 = (x1061<<((x1062&x1063)&x1064));

	if (t83 != 32) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1077 = 1;
	volatile uint8_t x1078 = 1U;
	int64_t x1079 = -188782269296967LL;
	int8_t x1080 = INT8_MIN;
	volatile int32_t t84 = -17697280;

	t84 = (x1077<<((x1078&x1079)&x1080));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1085 = 2558974887LLU;
	uint8_t x1086 = 61U;
	int16_t x1087 = 1;
	int16_t x1088 = INT16_MIN;
	uint64_t t85 = 28201107LLU;

	t85 = (x1085<<((x1086&x1087)&x1088));

	if (t85 != 2558974887LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1089 = INT8_MAX;
	volatile int32_t x1090 = INT32_MIN;
	uint16_t x1091 = UINT16_MAX;
	int32_t t86 = -21;

	t86 = (x1089<<((x1090&x1091)&x1092));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1117 = INT64_MAX;
	volatile uint32_t x1118 = 75U;
	int16_t x1119 = -7014;
	int8_t x1120 = 5;
	volatile int64_t t87 = INT64_MAX;

	t87 = (x1117<<((x1118&x1119)&x1120));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1121 = 2U;
	int64_t x1122 = INT64_MIN;
	uint8_t x1123 = UINT8_MAX;
	volatile int8_t x1124 = INT8_MAX;
	int32_t t88 = -60385922;

	t88 = (x1121<<((x1122&x1123)&x1124));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1137 = 5U;
	uint16_t x1138 = UINT16_MAX;
	int32_t x1139 = INT32_MIN;
	int32_t x1140 = -1;
	static int32_t t89 = -27695412;

	t89 = (x1137<<((x1138&x1139)&x1140));

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1141 = 154351443470562LLU;
	volatile uint8_t x1143 = 47U;
	int64_t x1144 = INT64_MAX;
	volatile uint64_t t90 = 17936974821675715LLU;

	t90 = (x1141<<((x1142&x1143)&x1144));

	if (t90 != 13002173599195332608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1150 = -1;
	static volatile uint8_t x1151 = 0U;
	uint32_t x1152 = 2811746U;
	volatile int32_t t91 = 0;

	t91 = (x1149<<((x1150&x1151)&x1152));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x1157 = INT8_MAX;
	int32_t x1158 = INT32_MIN;
	int64_t x1160 = INT64_MAX;
	int32_t t92 = -325205;

	t92 = (x1157<<((x1158&x1159)&x1160));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x1182 = 10U;
	uint8_t x1184 = 3U;
	volatile uint32_t t93 = 210851292U;

	t93 = (x1181<<((x1182&x1183)&x1184));

	if (t93 != 22494052U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1205 = 0U;
	volatile uint16_t x1207 = 21302U;
	volatile int8_t x1208 = 6;
	static volatile int32_t t94 = 0;

	t94 = (x1205<<((x1206&x1207)&x1208));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1233 = 2;
	int64_t x1234 = -88955793083769562LL;
	uint8_t x1235 = UINT8_MAX;
	uint8_t x1236 = 0U;

	t95 = (x1233<<((x1234&x1235)&x1236));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1237 = UINT16_MAX;
	uint16_t x1238 = 2U;
	int8_t x1240 = INT8_MIN;
	int32_t t96 = 15;

	t96 = (x1237<<((x1238&x1239)&x1240));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1245 = INT16_MAX;
	int8_t x1246 = INT8_MIN;
	int8_t x1247 = INT8_MAX;
	static int64_t x1248 = -2043LL;
	volatile int32_t t97 = -151097;

	t97 = (x1245<<((x1246&x1247)&x1248));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1273 = 316676;
	int32_t x1274 = -48974;
	uint32_t x1275 = 28686U;
	int16_t x1276 = INT16_MIN;
	static int32_t t98 = 599;

	t98 = (x1273<<((x1274&x1275)&x1276));

	if (t98 != 316676) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1278 = UINT16_MAX;
	static volatile int64_t x1279 = 3059571007209808LL;
	static int8_t x1280 = 0;
	int32_t t99 = -1;

	t99 = (x1277<<((x1278&x1279)&x1280));

	if (t99 != 65535) { NG(); } else { ; }
	
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

