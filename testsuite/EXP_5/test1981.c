#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x22 = 2U;
static int32_t x23 = -226016271;
int64_t t2 = 1LL;
volatile uint32_t x47 = 1107472415U;
uint8_t x48 = 23U;
uint8_t x63 = 95U;
int16_t x64 = INT16_MIN;
static volatile int32_t t4 = -3;
static uint8_t x77 = 38U;
static volatile int32_t t6 = 27;
static volatile int16_t x87 = -408;
static int64_t x94 = 332454090462396LL;
uint8_t x110 = 1U;
static int8_t x112 = -1;
static int16_t x113 = INT16_MAX;
int8_t x143 = INT8_MIN;
int32_t x149 = INT32_MIN;
int64_t x151 = -1LL;
static int32_t t15 = 1;
volatile int64_t t17 = -27992865640LL;
volatile uint32_t x209 = 19631686U;
volatile int8_t x210 = -3;
int8_t x213 = -1;
int8_t x214 = -1;
uint32_t x216 = UINT32_MAX;
volatile int32_t x234 = INT32_MAX;
int32_t t25 = 0;
uint8_t x256 = 3U;
int32_t t26 = -6;
int64_t x263 = 10578659693064737LL;
int32_t t27 = 7189;
volatile int16_t x283 = 7028;
int32_t x284 = INT32_MAX;
static volatile int32_t t28 = 23;
int32_t x299 = 7611;
uint32_t x300 = 53040747U;
int32_t t30 = 0;
volatile int32_t t32 = 2972355;
volatile int64_t x349 = -33312766417119378LL;
volatile int8_t x352 = -28;
uint32_t x365 = 50713498U;
volatile uint32_t t36 = 290306U;
int8_t x384 = INT8_MIN;
volatile int16_t x390 = -1;
volatile int64_t x423 = 2319LL;
volatile uint32_t t41 = 818777U;
int16_t x458 = 6351;
uint64_t x479 = 491219027310320LLU;
static volatile int32_t t45 = -350;
uint32_t x481 = 111629U;
static int32_t x506 = -8;
int8_t x514 = INT8_MIN;
int32_t x515 = INT32_MAX;
int32_t x529 = -1;
int16_t x546 = -4941;
int32_t x564 = -7446;
int32_t x581 = INT32_MAX;
int32_t t56 = -34293640;
static int64_t x585 = 354289790LL;
int16_t x604 = -1;
int32_t t60 = 6079960;
volatile int16_t x625 = -1;
static int8_t x637 = INT8_MIN;
int32_t x639 = 125908;
int16_t x640 = 11481;
static int8_t x642 = 1;
int16_t x643 = INT16_MIN;
volatile int64_t x644 = INT64_MAX;
int16_t x682 = -1;
volatile int32_t x690 = -37942614;
int16_t x695 = INT16_MIN;
int32_t t68 = 93362;
volatile int16_t x718 = INT16_MIN;
int32_t t70 = 0;
static uint8_t x721 = 0U;
int32_t t72 = -1;
static int64_t x743 = 16LL;
uint16_t x749 = 1U;
uint64_t x750 = 139664860616442LLU;
volatile int16_t x752 = -1;
volatile int8_t x757 = 1;
int8_t x761 = -1;
int32_t t79 = -146;
int64_t x787 = -112453204333306068LL;
volatile int32_t t80 = -1;
volatile uint64_t x798 = 1551430491742131LLU;
int8_t x813 = INT8_MIN;
uint64_t x814 = 1902LLU;
int32_t x865 = 2041;
int64_t x869 = 324433942324726239LL;
static volatile int64_t x875 = INT64_MIN;
int32_t x877 = INT32_MIN;
static int8_t x885 = -1;
uint8_t x886 = 94U;
int32_t x889 = -1;
volatile uint32_t x891 = UINT32_MAX;
int32_t t93 = -431646;
static int8_t x913 = -3;
int64_t x921 = -1LL;
static uint32_t x924 = UINT32_MAX;
static int64_t x934 = 247141842912LL;
uint32_t x945 = 7180305U;
volatile int8_t x959 = -52;
int32_t x960 = INT32_MAX;
int64_t t98 = -10626133560335079LL;


void f0(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = -1;
	static volatile int32_t x11 = INT32_MIN;
	static int16_t x12 = 109;
	int32_t t0 = 717129;

	t0 = (x9%((x10|x11)<=x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x21 = -976;
	static int32_t x24 = 322401575;
	volatile int32_t t1 = 753;

	t1 = (x21%((x22|x23)<=x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x25 = INT64_MAX;
	volatile int8_t x26 = 43;
	uint8_t x27 = 63U;
	static uint16_t x28 = 532U;

	t2 = (x25%((x26|x27)<=x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x45 = INT8_MIN;
	static volatile int64_t x46 = -54191LL;
	int32_t t3 = -7068;

	t3 = (x45%((x46|x47)<=x48));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x61 = -5;
	int64_t x62 = -88082LL;

	t4 = (x61%((x62|x63)<=x64));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x69 = -3;
	static int16_t x70 = INT16_MAX;
	int8_t x71 = -2;
	volatile int64_t x72 = -1LL;
	int32_t t5 = 17559410;

	t5 = (x69%((x70|x71)<=x72));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x78 = INT16_MIN;
	uint8_t x79 = 31U;
	int64_t x80 = INT64_MAX;

	t6 = (x77%((x78|x79)<=x80));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x85 = 0;
	uint8_t x86 = UINT8_MAX;
	int32_t x88 = -1;
	int32_t t7 = 12;

	t7 = (x85%((x86|x87)<=x88));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x93 = 8U;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MAX;
	static volatile int32_t t8 = -8609816;

	t8 = (x93%((x94|x95)<=x96));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x97 = 0;
	static int16_t x98 = INT16_MIN;
	volatile int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	volatile int32_t t9 = 10;

	t9 = (x97%((x98|x99)<=x100));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x101 = 54269;
	int64_t x102 = -870198909416176LL;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	volatile int32_t t10 = 0;

	t10 = (x101%((x102|x103)<=x104));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = 2;
	int32_t x107 = INT32_MIN;
	volatile int16_t x108 = -1;
	volatile int32_t t11 = -8988;

	t11 = (x105%((x106|x107)<=x108));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x109 = INT16_MAX;
	volatile uint64_t x111 = 119688607LLU;
	int32_t t12 = 87;

	t12 = (x109%((x110|x111)<=x112));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MIN;
	volatile uint8_t x116 = UINT8_MAX;
	static int32_t t13 = -77;

	t13 = (x113%((x114|x115)<=x116));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x141 = 239529018433666LLU;
	int8_t x142 = INT8_MAX;
	static int8_t x144 = 1;
	volatile uint64_t t14 = 836199LLU;

	t14 = (x141%((x142|x143)<=x144));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x150 = INT64_MIN;
	int32_t x152 = 121510;

	t15 = (x149%((x150|x151)<=x152));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x166 = 1U;
	int8_t x167 = -36;
	static int64_t x168 = INT64_MAX;
	volatile int32_t t16 = -1;

	t16 = (x165%((x166|x167)<=x168));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x181 = INT64_MAX;
	volatile int64_t x182 = -671866LL;
	static int64_t x183 = INT64_MIN;
	uint16_t x184 = 0U;

	t17 = (x181%((x182|x183)<=x184));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x193 = INT64_MIN;
	static int64_t x194 = INT64_MIN;
	int16_t x195 = 11869;
	volatile uint32_t x196 = UINT32_MAX;
	int64_t t18 = -1096465526250LL;

	t18 = (x193%((x194|x195)<=x196));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x197 = 8480477672950205884LLU;
	int8_t x198 = 1;
	volatile uint16_t x199 = 475U;
	volatile uint32_t x200 = UINT32_MAX;
	uint64_t t19 = 7LLU;

	t19 = (x197%((x198|x199)<=x200));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x211 = 0;
	int8_t x212 = INT8_MAX;
	volatile uint32_t t20 = 350131U;

	t20 = (x209%((x210|x211)<=x212));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x215 = -1;
	volatile int32_t t21 = -34741472;

	t21 = (x213%((x214|x215)<=x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x221 = UINT16_MAX;
	int64_t x222 = -35955113653519027LL;
	volatile int8_t x223 = INT8_MAX;
	int16_t x224 = 13;
	static int32_t t22 = 301;

	t22 = (x221%((x222|x223)<=x224));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x225 = 23037135797302LL;
	static uint8_t x226 = 3U;
	static volatile uint64_t x227 = 328LLU;
	uint32_t x228 = UINT32_MAX;
	volatile int64_t t23 = -11236LL;

	t23 = (x225%((x226|x227)<=x228));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x233 = 41;
	uint16_t x235 = 1U;
	uint64_t x236 = 782278212599LLU;
	int32_t t24 = -1299;

	t24 = (x233%((x234|x235)<=x236));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x249 = 15;
	uint64_t x250 = 1921548370261034LLU;
	static int64_t x251 = INT64_MIN;
	int32_t x252 = -1;

	t25 = (x249%((x250|x251)<=x252));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x253 = 21U;
	volatile int16_t x254 = INT16_MIN;
	uint16_t x255 = UINT16_MAX;

	t26 = (x253%((x254|x255)<=x256));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x261 = 1U;
	int8_t x262 = INT8_MIN;
	uint16_t x264 = 2U;

	t27 = (x261%((x262|x263)<=x264));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x281 = -26915;
	int8_t x282 = INT8_MIN;

	t28 = (x281%((x282|x283)<=x284));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x297 = 111U;
	uint8_t x298 = 47U;
	uint32_t t29 = 4560843U;

	t29 = (x297%((x298|x299)<=x300));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = -2;
	int8_t x319 = INT8_MAX;
	static int8_t x320 = -1;

	t30 = (x317%((x318|x319)<=x320));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x321 = 347600;
	volatile int8_t x322 = INT8_MAX;
	volatile uint32_t x323 = 2475769U;
	int16_t x324 = -2770;
	volatile int32_t t31 = -1;

	t31 = (x321%((x322|x323)<=x324));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = UINT64_MAX;

	t32 = (x333%((x334|x335)<=x336));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x350 = 5535LLU;
	static volatile int64_t x351 = 150501845105381125LL;
	int64_t t33 = 3778558LL;

	t33 = (x349%((x350|x351)<=x352));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	static int8_t x355 = -1;
	int64_t x356 = 5164614LL;
	int32_t t34 = 462151;

	t34 = (x353%((x354|x355)<=x356));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x366 = 1273021410047LLU;
	uint8_t x367 = 8U;
	int16_t x368 = -717;
	volatile uint32_t t35 = 688523U;

	t35 = (x365%((x366|x367)<=x368));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x373 = UINT32_MAX;
	static int64_t x374 = -1718LL;
	volatile int64_t x375 = 15154526846581956LL;
	volatile uint8_t x376 = 4U;

	t36 = (x373%((x374|x375)<=x376));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x381 = 1214159215LL;
	volatile int64_t x382 = INT64_MIN;
	volatile uint32_t x383 = 3513810U;
	static int64_t t37 = -648LL;

	t37 = (x381%((x382|x383)<=x384));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x389 = INT8_MIN;
	int8_t x391 = -8;
	int8_t x392 = 23;
	int32_t t38 = -9349;

	t38 = (x389%((x390|x391)<=x392));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x421 = INT64_MIN;
	volatile uint16_t x422 = 1U;
	uint32_t x424 = UINT32_MAX;
	int64_t t39 = 1103LL;

	t39 = (x421%((x422|x423)<=x424));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x437 = UINT32_MAX;
	static int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	int64_t x440 = -1LL;
	uint32_t t40 = 87U;

	t40 = (x437%((x438|x439)<=x440));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x441 = 8551U;
	int16_t x442 = 123;
	int64_t x443 = -1LL;
	volatile uint8_t x444 = 21U;

	t41 = (x441%((x442|x443)<=x444));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x445 = INT32_MAX;
	volatile int8_t x446 = -1;
	int8_t x447 = INT8_MAX;
	int8_t x448 = 12;
	int32_t t42 = 1;

	t42 = (x445%((x446|x447)<=x448));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x457 = 1U;
	volatile int64_t x459 = INT64_MIN;
	int32_t x460 = -1;
	volatile int32_t t43 = 11869;

	t43 = (x457%((x458|x459)<=x460));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x473 = -1;
	uint16_t x474 = 26U;
	int64_t x475 = INT64_MIN;
	int8_t x476 = -1;
	int32_t t44 = -3560352;

	t44 = (x473%((x474|x475)<=x476));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = -61375928474LL;
	int32_t x480 = INT32_MIN;

	t45 = (x477%((x478|x479)<=x480));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x482 = INT32_MAX;
	int8_t x483 = -22;
	int16_t x484 = INT16_MAX;
	static volatile uint32_t t46 = 84U;

	t46 = (x481%((x482|x483)<=x484));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x489 = -938;
	volatile int64_t x490 = -250049386LL;
	int8_t x491 = 0;
	volatile int64_t x492 = 822093347438018LL;
	int32_t t47 = 1562609;

	t47 = (x489%((x490|x491)<=x492));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x497 = 947479U;
	int64_t x498 = INT64_MIN;
	int32_t x499 = INT32_MIN;
	int32_t x500 = INT32_MAX;
	volatile uint32_t t48 = 67842U;

	t48 = (x497%((x498|x499)<=x500));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x505 = UINT64_MAX;
	volatile int16_t x507 = INT16_MAX;
	uint32_t x508 = UINT32_MAX;
	static volatile uint64_t t49 = 6058LLU;

	t49 = (x505%((x506|x507)<=x508));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x513 = 10606;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t50 = -86;

	t50 = (x513%((x514|x515)<=x516));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x530 = INT16_MIN;
	int32_t x531 = 243;
	int16_t x532 = 14;
	volatile int32_t t51 = -37990735;

	t51 = (x529%((x530|x531)<=x532));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x537 = INT16_MIN;
	uint8_t x538 = 57U;
	int32_t x539 = -1;
	uint8_t x540 = 35U;
	static volatile int32_t t52 = 8151;

	t52 = (x537%((x538|x539)<=x540));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x545 = UINT32_MAX;
	static int64_t x547 = -1LL;
	int32_t x548 = -1;
	uint32_t t53 = 2650U;

	t53 = (x545%((x546|x547)<=x548));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x561 = -11;
	volatile uint8_t x562 = 1U;
	volatile int16_t x563 = INT16_MIN;
	int32_t t54 = 927086;

	t54 = (x561%((x562|x563)<=x564));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x569 = -1;
	static int16_t x570 = INT16_MIN;
	static volatile int32_t x571 = INT32_MAX;
	uint16_t x572 = 12U;
	int32_t t55 = 453615;

	t55 = (x569%((x570|x571)<=x572));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x582 = 8U;
	uint8_t x583 = UINT8_MAX;
	volatile int32_t x584 = INT32_MAX;

	t56 = (x581%((x582|x583)<=x584));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x586 = 6082;
	int64_t x587 = INT64_MIN;
	int32_t x588 = 453;
	volatile int64_t t57 = -147375534393LL;

	t57 = (x585%((x586|x587)<=x588));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x597 = UINT64_MAX;
	int16_t x598 = 13134;
	int16_t x599 = -1;
	static uint16_t x600 = 1590U;
	uint64_t t58 = 4772287LLU;

	t58 = (x597%((x598|x599)<=x600));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x601 = -1LL;
	volatile int8_t x602 = INT8_MAX;
	static int16_t x603 = INT16_MIN;
	volatile int64_t t59 = 9047219392312007LL;

	t59 = (x601%((x602|x603)<=x604));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x621 = -1;
	static volatile int8_t x622 = INT8_MAX;
	int16_t x623 = INT16_MIN;
	int16_t x624 = 5;

	t60 = (x621%((x622|x623)<=x624));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x626 = UINT32_MAX;
	int32_t x627 = INT32_MAX;
	volatile uint64_t x628 = 12067045956237273LLU;
	volatile int32_t t61 = 1805;

	t61 = (x625%((x626|x627)<=x628));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x629 = INT64_MAX;
	int8_t x630 = -1;
	uint16_t x631 = UINT16_MAX;
	uint16_t x632 = 14U;
	static int64_t t62 = 1038363286833785349LL;

	t62 = (x629%((x630|x631)<=x632));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x638 = -1;
	static volatile int32_t t63 = -1249;

	t63 = (x637%((x638|x639)<=x640));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x641 = UINT32_MAX;
	static uint32_t t64 = 250021387U;

	t64 = (x641%((x642|x643)<=x644));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x681 = INT8_MAX;
	static volatile int8_t x683 = 26;
	uint64_t x684 = UINT64_MAX;
	volatile int32_t t65 = -23102;

	t65 = (x681%((x682|x683)<=x684));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x685 = -1;
	uint16_t x686 = UINT16_MAX;
	static int16_t x687 = -1;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t66 = -28898;

	t66 = (x685%((x686|x687)<=x688));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x689 = UINT8_MAX;
	int8_t x691 = 1;
	static int8_t x692 = 0;
	static int32_t t67 = 9600;

	t67 = (x689%((x690|x691)<=x692));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x693 = INT16_MIN;
	int32_t x694 = -1;
	int16_t x696 = INT16_MAX;

	t68 = (x693%((x694|x695)<=x696));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x705 = INT64_MAX;
	volatile uint8_t x706 = 3U;
	volatile int32_t x707 = INT32_MIN;
	uint16_t x708 = 0U;
	volatile int64_t t69 = -202LL;

	t69 = (x705%((x706|x707)<=x708));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x717 = -1;
	uint8_t x719 = 0U;
	static uint64_t x720 = UINT64_MAX;

	t70 = (x717%((x718|x719)<=x720));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x722 = INT64_MIN;
	int16_t x723 = 180;
	volatile int8_t x724 = 0;
	volatile int32_t t71 = 2;

	t71 = (x721%((x722|x723)<=x724));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x733 = -88532;
	int16_t x734 = INT16_MAX;
	int8_t x735 = 5;
	uint16_t x736 = UINT16_MAX;

	t72 = (x733%((x734|x735)<=x736));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x741 = 27;
	int64_t x742 = -400001740861LL;
	volatile int32_t x744 = INT32_MIN;
	int32_t t73 = -1;

	t73 = (x741%((x742|x743)<=x744));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x745 = INT16_MAX;
	int64_t x746 = -1LL;
	int8_t x747 = INT8_MAX;
	int64_t x748 = 736116022414417LL;
	int32_t t74 = -5;

	t74 = (x745%((x746|x747)<=x748));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x751 = 6;
	volatile int32_t t75 = -32055;

	t75 = (x749%((x750|x751)<=x752));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x758 = 44015497;
	int64_t x759 = INT64_MIN;
	volatile int32_t x760 = -1;
	volatile int32_t t76 = 4634769;

	t76 = (x757%((x758|x759)<=x760));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x762 = -1LL;
	int32_t x763 = INT32_MIN;
	int16_t x764 = INT16_MAX;
	volatile int32_t t77 = -56;

	t77 = (x761%((x762|x763)<=x764));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x769 = INT16_MAX;
	int32_t x770 = INT32_MIN;
	static int16_t x771 = -1;
	int16_t x772 = INT16_MAX;
	int32_t t78 = -437480;

	t78 = (x769%((x770|x771)<=x772));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x773 = INT16_MIN;
	int32_t x774 = -119;
	int32_t x775 = -1;
	uint16_t x776 = UINT16_MAX;

	t79 = (x773%((x774|x775)<=x776));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x785 = -15;
	static uint16_t x786 = 33U;
	int32_t x788 = -1;

	t80 = (x785%((x786|x787)<=x788));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x797 = 37U;
	int16_t x799 = INT16_MAX;
	int16_t x800 = -1;
	static int32_t t81 = 257682045;

	t81 = (x797%((x798|x799)<=x800));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x815 = INT32_MAX;
	int64_t x816 = 130385748039LL;
	volatile int32_t t82 = 326107;

	t82 = (x813%((x814|x815)<=x816));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x829 = 228U;
	int8_t x830 = INT8_MIN;
	uint8_t x831 = 3U;
	uint64_t x832 = UINT64_MAX;
	volatile uint32_t t83 = 13U;

	t83 = (x829%((x830|x831)<=x832));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x833 = INT32_MIN;
	int64_t x834 = INT64_MIN;
	volatile int32_t x835 = 1805315;
	uint8_t x836 = 0U;
	int32_t t84 = 1473;

	t84 = (x833%((x834|x835)<=x836));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x857 = 88403LLU;
	int32_t x858 = 55450728;
	uint32_t x859 = UINT32_MAX;
	int8_t x860 = -1;
	uint64_t t85 = 443LLU;

	t85 = (x857%((x858|x859)<=x860));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x861 = 5U;
	int16_t x862 = 0;
	int16_t x863 = -32;
	uint16_t x864 = 135U;
	volatile int32_t t86 = -16;

	t86 = (x861%((x862|x863)<=x864));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x866 = -37;
	uint32_t x867 = 15U;
	volatile int16_t x868 = -1;
	int32_t t87 = 43;

	t87 = (x865%((x866|x867)<=x868));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x870 = INT64_MIN;
	static volatile uint32_t x871 = 894471U;
	int32_t x872 = 0;
	static int64_t t88 = 2585628LL;

	t88 = (x869%((x870|x871)<=x872));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x873 = INT32_MAX;
	volatile uint16_t x874 = UINT16_MAX;
	volatile int64_t x876 = INT64_MAX;
	static volatile int32_t t89 = -770;

	t89 = (x873%((x874|x875)<=x876));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x878 = -93;
	int16_t x879 = -1;
	int8_t x880 = -1;
	volatile int32_t t90 = 824462506;

	t90 = (x877%((x878|x879)<=x880));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x887 = UINT8_MAX;
	volatile uint32_t x888 = 573181U;
	volatile int32_t t91 = 84;

	t91 = (x885%((x886|x887)<=x888));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x890 = INT8_MIN;
	volatile int64_t x892 = INT64_MAX;
	int32_t t92 = -3385;

	t92 = (x889%((x890|x891)<=x892));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x901 = -12;
	int32_t x902 = -28277;
	int64_t x903 = -4888295153492316LL;
	int16_t x904 = INT16_MAX;

	t93 = (x901%((x902|x903)<=x904));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x914 = INT32_MIN;
	int64_t x915 = INT64_MIN;
	int32_t x916 = -37;
	volatile int32_t t94 = -1;

	t94 = (x913%((x914|x915)<=x916));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x922 = -863571701804051LL;
	int32_t x923 = -1;
	int64_t t95 = -28699LL;

	t95 = (x921%((x922|x923)<=x924));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x933 = INT32_MIN;
	int64_t x935 = INT64_MIN;
	int16_t x936 = 3787;
	int32_t t96 = -3421;

	t96 = (x933%((x934|x935)<=x936));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x946 = UINT8_MAX;
	static int8_t x947 = -1;
	int8_t x948 = -1;
	uint32_t t97 = 210394U;

	t97 = (x945%((x946|x947)<=x948));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x957 = -1LL;
	int8_t x958 = INT8_MIN;

	t98 = (x957%((x958|x959)<=x960));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x965 = 6U;
	int32_t x966 = -1;
	int8_t x967 = INT8_MIN;
	int16_t x968 = -1;
	int32_t t99 = 0;

	t99 = (x965%((x966|x967)<=x968));

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

