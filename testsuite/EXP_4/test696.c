#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x38 = -1;
int64_t x57 = INT64_MAX;
int32_t x122 = -1;
uint32_t x289 = 5682839U;
uint8_t x290 = 2U;
int32_t x549 = 139994161;
int64_t x667 = INT64_MIN;
uint64_t t8 = 999LLU;
volatile uint8_t x687 = UINT8_MAX;
volatile int16_t x754 = -1;
static int32_t x755 = -2640545;
uint8_t x756 = 3U;
volatile int32_t t10 = 0;
int32_t x981 = 203519;
int32_t t12 = 2;
volatile uint16_t x1057 = 225U;
int8_t x1135 = -3;
int32_t x1136 = INT32_MIN;
volatile int16_t x1192 = INT16_MIN;
volatile uint32_t t16 = UINT32_MAX;
int64_t t17 = 81340696791988LL;
volatile uint32_t x1541 = UINT32_MAX;
int16_t x1653 = INT16_MAX;
int32_t t21 = 8;
uint64_t x1785 = UINT64_MAX;
static int32_t x1788 = INT32_MIN;
volatile int16_t x1886 = -1;
int32_t x1887 = -1;
static int8_t x2038 = 2;
uint16_t x2081 = UINT16_MAX;
static int64_t x2082 = -1LL;
static volatile int32_t t27 = -3758;
int32_t t28 = 13;
int16_t x2140 = INT16_MAX;
int8_t x2285 = INT8_MAX;
int64_t x2288 = INT64_MIN;
volatile uint8_t x2358 = 14U;
static volatile uint64_t t31 = 55316987603142644LLU;
int8_t x2561 = 0;
int64_t x2813 = INT64_MAX;
volatile int64_t t35 = 109825815556846024LL;
int16_t x2974 = INT16_MIN;
int8_t x3022 = -1;
int16_t x3023 = -16325;
int64_t t39 = -765030722661966494LL;
uint64_t x3235 = 5LLU;
uint64_t x3349 = 39116271538891LLU;
int16_t x3381 = INT16_MAX;
int8_t x3383 = -1;
static volatile int64_t t43 = 13LL;
static volatile int64_t x3428 = 15461440LL;
volatile int16_t x3511 = -1;
int64_t x3693 = INT64_MAX;
int16_t x3874 = -1;
int64_t x3895 = -1302380966271505248LL;
int32_t x3896 = -1;
static uint16_t x4214 = 25U;
static int32_t x4215 = 3;
uint8_t x4249 = UINT8_MAX;
int8_t x4251 = INT8_MIN;
int32_t x4252 = -1;
static int16_t x4283 = INT16_MIN;
volatile uint64_t t53 = 14737141LLU;
volatile uint16_t x4430 = 24U;
int8_t x4511 = INT8_MAX;
uint16_t x4645 = UINT16_MAX;
int16_t x4648 = INT16_MIN;
int64_t x4649 = 20982414696150LL;
static int8_t x4650 = INT8_MIN;
int32_t x4656 = -1;
int16_t x4826 = -1;
volatile uint64_t x4853 = 246379LLU;
static volatile uint64_t t61 = 14515210692880087LLU;
volatile int64_t t64 = 1LL;
uint64_t t66 = 731LLU;
int32_t x5376 = INT32_MIN;
static int64_t t68 = 114033LL;
uint32_t x5474 = 7U;
int8_t x5475 = 62;
uint16_t x5854 = 4U;
uint32_t x5904 = UINT32_MAX;
int64_t x5925 = INT64_MAX;
volatile int8_t x5926 = 1;
uint8_t x5962 = 51U;
int32_t t77 = -1;
int8_t x6474 = -1;
static int32_t x6475 = -127030;
int8_t x6582 = -1;
static volatile uint8_t x6775 = 18U;
int8_t x6776 = -1;
int16_t x7109 = 1074;
volatile int32_t t87 = 260;
volatile int32_t t89 = 6494881;
volatile int32_t x7335 = INT32_MIN;
volatile int32_t t90 = INT32_MAX;


void f0(void) {
	static uint16_t x37 = UINT16_MAX;
	volatile int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;
	int32_t t0 = -110399840;

	t0 = (x37>>(x38-(x39%x40)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x58 = 53;
	int8_t x59 = 1;
	volatile int8_t x60 = INT8_MIN;
	static int64_t t1 = -21109137334739835LL;

	t1 = (x57>>(x58-(x59%x60)));

	if (t1 != 2047LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x73 = UINT16_MAX;
	int32_t x74 = 20;
	static uint32_t x75 = UINT32_MAX;
	static int8_t x76 = 1;
	volatile int32_t t2 = -313;

	t2 = (x73>>(x74-(x75%x76)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x121 = INT32_MAX;
	int8_t x123 = INT8_MIN;
	int8_t x124 = -10;
	static volatile int32_t t3 = -418705;

	t3 = (x121>>(x122-(x123%x124)));

	if (t3 != 16777215) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x291 = UINT8_MAX;
	static uint8_t x292 = 1U;
	uint32_t t4 = 494909375U;

	t4 = (x289>>(x290-(x291%x292)));

	if (t4 != 1420709U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x333 = 0;
	int64_t x334 = -1LL;
	int32_t x335 = -6;
	volatile int64_t x336 = INT64_MAX;
	int32_t t5 = 232503609;

	t5 = (x333>>(x334-(x335%x336)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x405 = 30;
	volatile uint32_t x406 = 16U;
	volatile uint8_t x407 = 13U;
	volatile uint16_t x408 = UINT16_MAX;
	int32_t t6 = 30;

	t6 = (x405>>(x406-(x407%x408)));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x550 = 1;
	int32_t x551 = INT32_MIN;
	int16_t x552 = INT16_MAX;
	volatile int32_t t7 = 3146085;

	t7 = (x549>>(x550-(x551%x552)));

	if (t7 != 17499270) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x665 = 373428651001933LLU;
	volatile int16_t x666 = -1;
	static uint8_t x668 = 6U;

	t8 = (x665>>(x666-(x667%x668)));

	if (t8 != 186714325500966LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x685 = 359318052835678LLU;
	uint8_t x686 = UINT8_MAX;
	int32_t x688 = INT32_MIN;
	uint64_t t9 = 0LLU;

	t9 = (x685>>(x686-(x687%x688)));

	if (t9 != 359318052835678LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x753 = 185626;

	t10 = (x753>>(x754-(x755%x756)));

	if (t10 != 92813) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x877 = 5LL;
	int8_t x878 = -1;
	int64_t x879 = -1LL;
	uint16_t x880 = UINT16_MAX;
	volatile int64_t t11 = -44827851764560836LL;

	t11 = (x877>>(x878-(x879%x880)));

	if (t11 != 5LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x982 = 3U;
	int64_t x983 = -1LL;
	int16_t x984 = -1;

	t12 = (x981>>(x982-(x983%x984)));

	if (t12 != 25439) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1058 = 2LLU;
	int64_t x1059 = -1LL;
	volatile int64_t x1060 = -2521756527245314671LL;
	volatile int32_t t13 = -39813705;

	t13 = (x1057>>(x1058-(x1059%x1060)));

	if (t13 != 28) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1133 = 26;
	uint8_t x1134 = 6U;
	volatile int32_t t14 = 0;

	t14 = (x1133>>(x1134-(x1135%x1136)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1189 = UINT64_MAX;
	uint8_t x1190 = 0U;
	int8_t x1191 = 0;
	static uint64_t t15 = UINT64_MAX;

	t15 = (x1189>>(x1190-(x1191%x1192)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1397 = UINT32_MAX;
	int32_t x1398 = -1;
	volatile int64_t x1399 = -1LL;
	int16_t x1400 = INT16_MIN;

	t16 = (x1397>>(x1398-(x1399%x1400)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1501 = 66391310LL;
	int32_t x1502 = 3;
	volatile int64_t x1503 = INT64_MAX;
	static volatile uint8_t x1504 = 5U;

	t17 = (x1501>>(x1502-(x1503%x1504)));

	if (t17 != 33195655LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1505 = INT8_MAX;
	uint32_t x1506 = UINT32_MAX;
	int32_t x1507 = -1;
	int32_t x1508 = INT32_MAX;
	static int32_t t18 = -104135359;

	t18 = (x1505>>(x1506-(x1507%x1508)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1542 = UINT32_MAX;
	int8_t x1543 = -1;
	int16_t x1544 = INT16_MAX;
	static volatile uint32_t t19 = UINT32_MAX;

	t19 = (x1541>>(x1542-(x1543%x1544)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1589 = 17437LL;
	static uint8_t x1590 = 23U;
	static int8_t x1591 = INT8_MIN;
	uint64_t x1592 = 2LLU;
	volatile int64_t t20 = -3317237LL;

	t20 = (x1589>>(x1590-(x1591%x1592)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1654 = UINT32_MAX;
	volatile int32_t x1655 = INT32_MIN;
	int32_t x1656 = -46;

	t21 = (x1653>>(x1654-(x1655%x1656)));

	if (t21 != 1023) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1786 = INT8_MAX;
	static uint8_t x1787 = 123U;
	uint64_t t22 = 12305LLU;

	t22 = (x1785>>(x1786-(x1787%x1788)));

	if (t22 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1885 = 102;
	int64_t x1888 = INT64_MAX;
	int32_t t23 = 1489;

	t23 = (x1885>>(x1886-(x1887%x1888)));

	if (t23 != 102) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1969 = INT64_MAX;
	uint16_t x1970 = 10U;
	int16_t x1971 = -1;
	int8_t x1972 = INT8_MIN;
	volatile int64_t t24 = -4904827060LL;

	t24 = (x1969>>(x1970-(x1971%x1972)));

	if (t24 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x2005 = INT32_MAX;
	volatile int32_t x2006 = 1;
	uint16_t x2007 = 0U;
	int8_t x2008 = INT8_MAX;
	volatile int32_t t25 = 1390;

	t25 = (x2005>>(x2006-(x2007%x2008)));

	if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x2037 = 16303U;
	volatile int16_t x2039 = INT16_MIN;
	int8_t x2040 = 4;
	static int32_t t26 = 11906;

	t26 = (x2037>>(x2038-(x2039%x2040)));

	if (t26 != 4075) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2083 = -1;
	static uint8_t x2084 = 7U;

	t27 = (x2081>>(x2082-(x2083%x2084)));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x2113 = INT8_MAX;
	int16_t x2114 = 12;
	uint16_t x2115 = 1364U;
	int8_t x2116 = 7;

	t28 = (x2113>>(x2114-(x2115%x2116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2137 = 3;
	int8_t x2138 = -6;
	int64_t x2139 = INT64_MIN;
	int32_t t29 = 8276;

	t29 = (x2137>>(x2138-(x2139%x2140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2286 = INT8_MIN;
	int8_t x2287 = INT8_MIN;
	volatile int32_t t30 = 26052103;

	t30 = (x2285>>(x2286-(x2287%x2288)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2357 = 71508077LLU;
	volatile int64_t x2359 = INT64_MIN;
	volatile int32_t x2360 = -1;

	t31 = (x2357>>(x2358-(x2359%x2360)));

	if (t31 != 4364LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2562 = 1U;
	int64_t x2563 = -1LL;
	volatile int16_t x2564 = INT16_MIN;
	static volatile int32_t t32 = -59;

	t32 = (x2561>>(x2562-(x2563%x2564)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2629 = 4078U;
	int8_t x2630 = 16;
	int32_t x2631 = INT32_MIN;
	uint16_t x2632 = 31U;
	uint32_t t33 = 77U;

	t33 = (x2629>>(x2630-(x2631%x2632)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2797 = INT32_MAX;
	volatile uint32_t x2798 = UINT32_MAX;
	int32_t x2799 = INT32_MIN;
	int32_t x2800 = INT32_MAX;
	int32_t t34 = INT32_MAX;

	t34 = (x2797>>(x2798-(x2799%x2800)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2814 = 49;
	static uint32_t x2815 = UINT32_MAX;
	uint8_t x2816 = 7U;

	t35 = (x2813>>(x2814-(x2815%x2816)));

	if (t35 != 131071LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2937 = 16258540U;
	volatile int16_t x2938 = 6;
	int32_t x2939 = -1;
	uint64_t x2940 = UINT64_MAX;
	static volatile uint32_t t36 = 458506463U;

	t36 = (x2937>>(x2938-(x2939%x2940)));

	if (t36 != 254039U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2973 = UINT8_MAX;
	static int16_t x2975 = INT16_MIN;
	int64_t x2976 = INT64_MIN;
	static volatile int32_t t37 = -214;

	t37 = (x2973>>(x2974-(x2975%x2976)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3021 = UINT64_MAX;
	static int16_t x3024 = -36;
	uint64_t t38 = 0LLU;

	t38 = (x3021>>(x3022-(x3023%x3024)));

	if (t38 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x3081 = 22114LL;
	static int8_t x3082 = 1;
	volatile int16_t x3083 = INT16_MIN;
	volatile uint16_t x3084 = 4U;

	t39 = (x3081>>(x3082-(x3083%x3084)));

	if (t39 != 11057LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x3233 = UINT16_MAX;
	int8_t x3234 = 12;
	static uint16_t x3236 = UINT16_MAX;
	int32_t t40 = 45134086;

	t40 = (x3233>>(x3234-(x3235%x3236)));

	if (t40 != 511) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3350 = INT8_MIN;
	int8_t x3351 = INT8_MIN;
	int32_t x3352 = INT32_MIN;
	static uint64_t t41 = 749476199333LLU;

	t41 = (x3349>>(x3350-(x3351%x3352)));

	if (t41 != 39116271538891LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3382 = -1;
	static int64_t x3384 = -14597785778LL;
	int32_t t42 = 118486;

	t42 = (x3381>>(x3382-(x3383%x3384)));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x3393 = INT64_MAX;
	volatile int8_t x3394 = 1;
	static int32_t x3395 = INT32_MIN;
	volatile int8_t x3396 = -1;

	t43 = (x3393>>(x3394-(x3395%x3396)));

	if (t43 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x3425 = INT64_MAX;
	int16_t x3426 = INT16_MIN;
	int16_t x3427 = INT16_MIN;
	int64_t t44 = INT64_MAX;

	t44 = (x3425>>(x3426-(x3427%x3428)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x3509 = 41;
	int16_t x3510 = 0;
	static volatile int16_t x3512 = INT16_MIN;
	volatile int32_t t45 = -13;

	t45 = (x3509>>(x3510-(x3511%x3512)));

	if (t45 != 20) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x3565 = 0;
	uint16_t x3566 = 27U;
	uint32_t x3567 = UINT32_MAX;
	int32_t x3568 = INT32_MAX;
	volatile int32_t t46 = -39204;

	t46 = (x3565>>(x3566-(x3567%x3568)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3694 = -1;
	volatile int32_t x3695 = INT32_MIN;
	int8_t x3696 = INT8_MAX;
	int64_t t47 = 1424LL;

	t47 = (x3693>>(x3694-(x3695%x3696)));

	if (t47 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3873 = 289U;
	int8_t x3875 = -1;
	uint16_t x3876 = 1014U;
	int32_t t48 = -291576;

	t48 = (x3873>>(x3874-(x3875%x3876)));

	if (t48 != 289) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x3893 = 3007854185602098LL;
	uint8_t x3894 = 1U;
	volatile int64_t t49 = 96730320505622643LL;

	t49 = (x3893>>(x3894-(x3895%x3896)));

	if (t49 != 1503927092801049LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x4045 = 137882U;
	uint8_t x4046 = 1U;
	int8_t x4047 = INT8_MIN;
	int8_t x4048 = -2;
	volatile uint32_t t50 = 42175U;

	t50 = (x4045>>(x4046-(x4047%x4048)));

	if (t50 != 68941U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x4213 = UINT16_MAX;
	volatile int8_t x4216 = INT8_MIN;
	static volatile int32_t t51 = 11130;

	t51 = (x4213>>(x4214-(x4215%x4216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4250 = 1;
	volatile int32_t t52 = 2782;

	t52 = (x4249>>(x4250-(x4251%x4252)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4281 = 1204LLU;
	int16_t x4282 = INT16_MIN;
	int32_t x4284 = INT32_MAX;

	t53 = (x4281>>(x4282-(x4283%x4284)));

	if (t53 != 1204LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x4429 = UINT16_MAX;
	int8_t x4431 = INT8_MIN;
	int32_t x4432 = -1;
	int32_t t54 = -71;

	t54 = (x4429>>(x4430-(x4431%x4432)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4509 = 0LLU;
	uint8_t x4510 = 0U;
	int32_t x4512 = -1;
	uint64_t t55 = 51486007129777150LLU;

	t55 = (x4509>>(x4510-(x4511%x4512)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4646 = 0LL;
	int64_t x4647 = INT64_MIN;
	volatile int32_t t56 = -4;

	t56 = (x4645>>(x4646-(x4647%x4648)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4651 = INT8_MIN;
	static int16_t x4652 = INT16_MAX;
	volatile int64_t t57 = 32662702878808LL;

	t57 = (x4649>>(x4650-(x4651%x4652)));

	if (t57 != 20982414696150LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4653 = INT32_MAX;
	volatile int8_t x4654 = 4;
	uint32_t x4655 = 0U;
	int32_t t58 = 1;

	t58 = (x4653>>(x4654-(x4655%x4656)));

	if (t58 != 134217727) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x4741 = 61U;
	uint8_t x4742 = 5U;
	static uint8_t x4743 = 30U;
	int16_t x4744 = -1;
	static int32_t t59 = 78;

	t59 = (x4741>>(x4742-(x4743%x4744)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4825 = INT16_MAX;
	int64_t x4827 = -1LL;
	static volatile int64_t x4828 = INT64_MIN;
	volatile int32_t t60 = -62;

	t60 = (x4825>>(x4826-(x4827%x4828)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4854 = 7U;
	int16_t x4855 = 329;
	int32_t x4856 = -1;

	t61 = (x4853>>(x4854-(x4855%x4856)));

	if (t61 != 1924LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4897 = 4U;
	int8_t x4898 = 0;
	uint64_t x4899 = 1918014LLU;
	uint8_t x4900 = 2U;
	int32_t t62 = -16353;

	t62 = (x4897>>(x4898-(x4899%x4900)));

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4929 = UINT32_MAX;
	uint8_t x4930 = 8U;
	int64_t x4931 = -1LL;
	int64_t x4932 = INT64_MAX;
	static uint32_t t63 = 411306U;

	t63 = (x4929>>(x4930-(x4931%x4932)));

	if (t63 != 8388607U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5033 = 2866382525266209LL;
	uint32_t x5034 = UINT32_MAX;
	static int8_t x5035 = INT8_MIN;
	volatile int8_t x5036 = 30;

	t64 = (x5033>>(x5034-(x5035%x5036)));

	if (t64 != 22393613478642LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x5145 = INT8_MAX;
	volatile int8_t x5146 = INT8_MAX;
	static volatile int8_t x5147 = INT8_MAX;
	int16_t x5148 = INT16_MIN;
	int32_t t65 = 121722;

	t65 = (x5145>>(x5146-(x5147%x5148)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x5161 = 640758780LLU;
	int32_t x5162 = -1;
	int64_t x5163 = -1LL;
	volatile int64_t x5164 = INT64_MIN;

	t66 = (x5161>>(x5162-(x5163%x5164)));

	if (t66 != 640758780LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x5173 = 210640052U;
	static int64_t x5174 = -1LL;
	int64_t x5175 = -1LL;
	int64_t x5176 = -25LL;
	uint32_t t67 = 6U;

	t67 = (x5173>>(x5174-(x5175%x5176)));

	if (t67 != 210640052U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x5373 = INT64_MAX;
	uint32_t x5374 = 54U;
	int64_t x5375 = INT64_MIN;

	t68 = (x5373>>(x5374-(x5375%x5376)));

	if (t68 != 511LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5473 = INT16_MAX;
	uint8_t x5476 = 1U;
	int32_t t69 = 105;

	t69 = (x5473>>(x5474-(x5475%x5476)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x5505 = 260U;
	uint16_t x5506 = 10U;
	uint8_t x5507 = 30U;
	static uint16_t x5508 = 4U;
	volatile int32_t t70 = 206424672;

	t70 = (x5505>>(x5506-(x5507%x5508)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x5509 = 3530LL;
	int8_t x5510 = INT8_MIN;
	static int16_t x5511 = INT16_MIN;
	uint8_t x5512 = UINT8_MAX;
	volatile int64_t t71 = 705871228184430LL;

	t71 = (x5509>>(x5510-(x5511%x5512)));

	if (t71 != 3530LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x5853 = 417403439831430LLU;
	int8_t x5855 = 1;
	uint8_t x5856 = 68U;
	uint64_t t72 = 243013007LLU;

	t72 = (x5853>>(x5854-(x5855%x5856)));

	if (t72 != 52175429978928LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5873 = 1U;
	int32_t x5874 = -1;
	static volatile int64_t x5875 = INT64_MIN;
	static int64_t x5876 = INT64_MAX;
	volatile int32_t t73 = -1;

	t73 = (x5873>>(x5874-(x5875%x5876)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5901 = INT32_MAX;
	uint16_t x5902 = 0U;
	int64_t x5903 = -1LL;
	static int32_t t74 = -4470798;

	t74 = (x5901>>(x5902-(x5903%x5904)));

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5927 = 342U;
	static int32_t x5928 = 18;
	volatile int64_t t75 = -3471667563457LL;

	t75 = (x5925>>(x5926-(x5927%x5928)));

	if (t75 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x5961 = 0U;
	static uint32_t x5963 = 892718U;
	static int8_t x5964 = INT8_MAX;
	static int32_t t76 = -173105;

	t76 = (x5961>>(x5962-(x5963%x5964)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5997 = INT8_MAX;
	volatile int8_t x5998 = 0;
	int32_t x5999 = -1;
	uint8_t x6000 = 88U;

	t77 = (x5997>>(x5998-(x5999%x6000)));

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x6009 = INT16_MAX;
	static int8_t x6010 = 6;
	int64_t x6011 = -1LL;
	static uint32_t x6012 = UINT32_MAX;
	volatile int32_t t78 = -49;

	t78 = (x6009>>(x6010-(x6011%x6012)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6101 = 57;
	uint32_t x6102 = UINT32_MAX;
	int32_t x6103 = INT32_MIN;
	int16_t x6104 = INT16_MAX;
	int32_t t79 = 82446452;

	t79 = (x6101>>(x6102-(x6103%x6104)));

	if (t79 != 28) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6169 = INT16_MAX;
	static int16_t x6170 = 7;
	uint8_t x6171 = 7U;
	volatile int16_t x6172 = INT16_MAX;
	volatile int32_t t80 = 88167;

	t80 = (x6169>>(x6170-(x6171%x6172)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x6473 = 0U;
	volatile uint16_t x6476 = 8U;
	volatile int32_t t81 = 0;

	t81 = (x6473>>(x6474-(x6475%x6476)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6581 = 27;
	static int8_t x6583 = INT8_MIN;
	static volatile int8_t x6584 = -6;
	volatile int32_t t82 = 5;

	t82 = (x6581>>(x6582-(x6583%x6584)));

	if (t82 != 13) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x6629 = INT32_MAX;
	uint16_t x6630 = 1U;
	int8_t x6631 = -1;
	int32_t x6632 = INT32_MIN;
	int32_t t83 = 607474372;

	t83 = (x6629>>(x6630-(x6631%x6632)));

	if (t83 != 536870911) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6749 = 2694184LLU;
	static int8_t x6750 = 1;
	int32_t x6751 = INT32_MIN;
	int32_t x6752 = INT32_MIN;
	volatile uint64_t t84 = 39098302623108LLU;

	t84 = (x6749>>(x6750-(x6751%x6752)));

	if (t84 != 1347092LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6773 = 979696278235630LLU;
	int8_t x6774 = 21;
	static volatile uint64_t t85 = 982344752844777LLU;

	t85 = (x6773>>(x6774-(x6775%x6776)));

	if (t85 != 467155589LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6833 = 57U;
	int8_t x6834 = 0;
	int8_t x6835 = -6;
	int8_t x6836 = INT8_MAX;
	volatile int32_t t86 = -592284576;

	t86 = (x6833>>(x6834-(x6835%x6836)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x7110 = -1;
	volatile int64_t x7111 = -1LL;
	int64_t x7112 = INT64_MIN;

	t87 = (x7109>>(x7110-(x7111%x7112)));

	if (t87 != 1074) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x7169 = 705LLU;
	volatile int64_t x7170 = -1LL;
	int8_t x7171 = -1;
	int32_t x7172 = INT32_MIN;
	uint64_t t88 = 88066LLU;

	t88 = (x7169>>(x7170-(x7171%x7172)));

	if (t88 != 705LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x7269 = 25U;
	static int16_t x7270 = 8;
	volatile int16_t x7271 = INT16_MIN;
	int8_t x7272 = INT8_MIN;

	t89 = (x7269>>(x7270-(x7271%x7272)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x7333 = INT32_MAX;
	int8_t x7334 = INT8_MIN;
	uint8_t x7336 = UINT8_MAX;

	t90 = (x7333>>(x7334-(x7335%x7336)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
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


    return 0;
}

