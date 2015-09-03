#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x342 = 3U;
uint32_t t4 = 29U;
int64_t x404 = INT64_MIN;
volatile int64_t t5 = 10LL;
static int8_t x430 = -1;
int16_t x465 = -3295;
int16_t x466 = INT16_MIN;
volatile int32_t t10 = -3104;
int32_t x741 = INT32_MIN;
int32_t x742 = -1590;
static uint64_t x1002 = 27480349873510LLU;
volatile uint64_t t13 = 5LLU;
static int64_t x1060 = -1LL;
static int16_t x1069 = -1;
int32_t x1072 = INT32_MAX;
uint64_t x1221 = UINT64_MAX;
int8_t x1224 = INT8_MAX;
volatile uint64_t x1248 = UINT64_MAX;
static volatile int64_t t17 = 7576711052980LL;
int64_t x1252 = INT64_MIN;
int16_t x1528 = -1;
volatile int8_t x1573 = INT8_MIN;
int8_t x1574 = INT8_MAX;
int16_t x1575 = INT16_MIN;
volatile int32_t t20 = 1894;
volatile int64_t x2147 = INT64_MIN;
int64_t x2148 = INT64_MIN;
static int16_t x2249 = -3;
int64_t x2251 = INT64_MIN;
volatile uint64_t t24 = 129796475711351LLU;
uint64_t t25 = 7211159944016932453LLU;
int64_t x2521 = INT64_MIN;
int64_t x2522 = INT64_MAX;
int64_t x2713 = 7LL;
volatile int16_t x2715 = INT16_MAX;
volatile int32_t t29 = -749514;
static int32_t x3206 = -195457;
static int16_t x3207 = INT16_MIN;
volatile int32_t t32 = -157993;
uint64_t x3348 = UINT64_MAX;
int16_t x3545 = -1;
int16_t x3619 = INT16_MIN;
static volatile uint32_t x3692 = UINT32_MAX;
int8_t x4236 = -1;
int32_t x4626 = 15;
int16_t x4646 = INT16_MAX;
volatile int32_t t43 = -1022467;
static uint32_t x4671 = UINT32_MAX;
int8_t x4991 = -1;
volatile int32_t x4992 = -1;
volatile int64_t t46 = 152330357025073543LL;
int8_t x5120 = -1;
static int32_t x5148 = INT32_MIN;
volatile int32_t t50 = -1688;
volatile uint32_t x5400 = UINT32_MAX;
static uint32_t x5546 = 76U;
static int32_t x5619 = INT32_MIN;
volatile int32_t x5620 = INT32_MIN;
static volatile int64_t x5701 = INT64_MAX;
int64_t x5702 = -1LL;
int16_t x5717 = -4600;
uint16_t x5828 = 0U;
uint64_t x5890 = 170279LLU;
static int16_t x5892 = -1;
uint32_t x5934 = 28173607U;
volatile int32_t t62 = 853226298;
volatile int8_t x6061 = INT8_MAX;
static int8_t x6128 = INT8_MIN;
volatile int32_t t66 = 95;
uint8_t x6772 = UINT8_MAX;
static volatile uint32_t t71 = 32145231U;
volatile uint64_t x6911 = UINT64_MAX;
uint32_t x6930 = UINT32_MAX;
volatile uint32_t x6931 = UINT32_MAX;
static int32_t x6939 = -1;
int32_t x7134 = INT32_MIN;
int16_t x7136 = INT16_MIN;
int16_t x7233 = -1;
int32_t x7234 = INT32_MIN;
static volatile int32_t t78 = 605465;
int32_t x7242 = -485;
static int64_t x7244 = INT64_MIN;
int8_t x7268 = INT8_MIN;
volatile int64_t x7315 = -1LL;
volatile int32_t x7865 = -1;
int8_t x7866 = INT8_MAX;
int8_t x7905 = 13;
int64_t x7973 = -10967LL;
volatile int64_t t88 = 8648LL;
int32_t x8009 = -2;
volatile int32_t t89 = 990775;
int16_t x8050 = INT16_MIN;
volatile uint8_t x8355 = UINT8_MAX;
int32_t t92 = 19;
int32_t x8551 = -1;
int8_t x8814 = INT8_MAX;
int32_t x8815 = INT32_MIN;
static volatile int32_t t97 = 46840;
int64_t t98 = 1965550130758625LL;


void f0(void) {
	int64_t x141 = 3745578471357749LL;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile int64_t t0 = -316561812197200173LL;

	t0 = (x141/(x142*(x143==x144)));

	if (t0 != -114305983622LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int32_t x343 = -1;
	int64_t x344 = -1LL;
	volatile uint32_t t1 = 0U;

	t1 = (x341/(x342*(x343==x344)));

	if (t1 != 1431655765U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = 245267025108460735LLU;
	volatile int64_t x347 = -1LL;
	int64_t x348 = -1LL;
	uint64_t t2 = 21329LLU;

	t2 = (x345/(x346*(x347==x348)));

	if (t2 != 75LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x369 = -10;
	int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = INT16_MIN;
	int32_t t3 = -21171;

	t3 = (x369/(x370*(x371==x372)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x393 = INT8_MIN;
	uint32_t x394 = 3765349U;
	static int32_t x395 = -1;
	volatile uint64_t x396 = UINT64_MAX;

	t4 = (x393/(x394*(x395==x396)));

	if (t4 != 1140U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x401 = 50674118LL;
	int8_t x402 = -3;
	int64_t x403 = INT64_MIN;

	t5 = (x401/(x402*(x403==x404)));

	if (t5 != -16891372LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x429 = -5;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t6 = -32;

	t6 = (x429/(x430*(x431==x432)));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MIN;
	volatile int32_t t7 = -429;

	t7 = (x465/(x466*(x467==x468)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x529 = -1;
	volatile uint16_t x530 = UINT16_MAX;
	int8_t x531 = -1;
	uint64_t x532 = UINT64_MAX;
	static int32_t t8 = -77759744;

	t8 = (x529/(x530*(x531==x532)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x641 = 1U;
	static uint32_t x642 = 81U;
	int16_t x643 = -1;
	uint32_t x644 = UINT32_MAX;
	uint32_t t9 = 1540255U;

	t9 = (x641/(x642*(x643==x644)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x737 = 270305548;
	volatile int32_t x738 = -1;
	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MIN;

	t10 = (x737/(x738*(x739==x740)));

	if (t10 != -270305548) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x743 = INT64_MIN;
	int64_t x744 = INT64_MIN;
	int32_t t11 = -4721691;

	t11 = (x741/(x742*(x743==x744)));

	if (t11 != 1350618) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x1001 = -1;
	static volatile uint64_t x1003 = UINT64_MAX;
	int8_t x1004 = -1;
	uint64_t t12 = 8601107045638LLU;

	t12 = (x1001/(x1002*(x1003==x1004)));

	if (t12 != 671270LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x1053 = 19LLU;
	volatile int8_t x1054 = INT8_MAX;
	static int32_t x1055 = INT32_MIN;
	int32_t x1056 = INT32_MIN;

	t13 = (x1053/(x1054*(x1055==x1056)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1057 = UINT64_MAX;
	static int64_t x1058 = INT64_MIN;
	uint64_t x1059 = UINT64_MAX;
	uint64_t t14 = 151559506665985029LLU;

	t14 = (x1057/(x1058*(x1059==x1060)));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x1070 = 50;
	int32_t x1071 = INT32_MAX;
	int32_t t15 = -34333;

	t15 = (x1069/(x1070*(x1071==x1072)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x1222 = UINT32_MAX;
	int8_t x1223 = INT8_MAX;
	volatile uint64_t t16 = 2981347461637LLU;

	t16 = (x1221/(x1222*(x1223==x1224)));

	if (t16 != 4294967297LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1245 = UINT16_MAX;
	int64_t x1246 = 50405857LL;
	uint64_t x1247 = UINT64_MAX;

	t17 = (x1245/(x1246*(x1247==x1248)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1249 = 2117U;
	uint16_t x1250 = UINT16_MAX;
	int64_t x1251 = INT64_MIN;
	int32_t t18 = 78855241;

	t18 = (x1249/(x1250*(x1251==x1252)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1525 = 358U;
	int32_t x1526 = INT32_MIN;
	volatile int16_t x1527 = -1;
	int32_t t19 = 1;

	t19 = (x1525/(x1526*(x1527==x1528)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1576 = INT16_MIN;

	t20 = (x1573/(x1574*(x1575==x1576)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1729 = 58698406972LLU;
	uint16_t x1730 = UINT16_MAX;
	int64_t x1731 = -1LL;
	volatile int32_t x1732 = -1;
	uint64_t t21 = 483863676LLU;

	t21 = (x1729/(x1730*(x1731==x1732)));

	if (t21 != 895680LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1813 = 173LLU;
	uint32_t x1814 = UINT32_MAX;
	int64_t x1815 = -1LL;
	int8_t x1816 = -1;
	uint64_t t22 = 4933138LLU;

	t22 = (x1813/(x1814*(x1815==x1816)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x2145 = 23U;
	int64_t x2146 = 1LL;
	volatile int64_t t23 = 5712LL;

	t23 = (x2145/(x2146*(x2147==x2148)));

	if (t23 != 23LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x2250 = UINT64_MAX;
	static int64_t x2252 = INT64_MIN;

	t24 = (x2249/(x2250*(x2251==x2252)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2305 = -454081;
	uint64_t x2306 = UINT64_MAX;
	int32_t x2307 = -1;
	volatile uint32_t x2308 = UINT32_MAX;

	t25 = (x2305/(x2306*(x2307==x2308)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x2523 = UINT8_MAX;
	uint8_t x2524 = UINT8_MAX;
	volatile int64_t t26 = -12894028853459LL;

	t26 = (x2521/(x2522*(x2523==x2524)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2693 = INT64_MIN;
	volatile uint16_t x2694 = UINT16_MAX;
	static volatile uint64_t x2695 = UINT64_MAX;
	int32_t x2696 = -1;
	int64_t t27 = 79LL;

	t27 = (x2693/(x2694*(x2695==x2696)));

	if (t27 != -140739635871744LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2714 = INT16_MIN;
	volatile int16_t x2716 = INT16_MAX;
	volatile int64_t t28 = 378489403LL;

	t28 = (x2713/(x2714*(x2715==x2716)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x3065 = INT8_MIN;
	int32_t x3066 = INT32_MIN;
	volatile int64_t x3067 = -1LL;
	volatile int64_t x3068 = -1LL;

	t29 = (x3065/(x3066*(x3067==x3068)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x3121 = 2873553284835LL;
	volatile int16_t x3122 = INT16_MIN;
	uint32_t x3123 = UINT32_MAX;
	int16_t x3124 = -1;
	volatile int64_t t30 = 14981721577257LL;

	t30 = (x3121/(x3122*(x3123==x3124)));

	if (t30 != -87693886LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x3177 = -1;
	int16_t x3178 = INT16_MIN;
	int64_t x3179 = INT64_MAX;
	int64_t x3180 = INT64_MAX;
	static int32_t t31 = 57243545;

	t31 = (x3177/(x3178*(x3179==x3180)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x3205 = 314;
	int16_t x3208 = INT16_MIN;

	t32 = (x3205/(x3206*(x3207==x3208)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x3345 = -1;
	int64_t x3346 = INT64_MIN;
	int8_t x3347 = -1;
	volatile int64_t t33 = -28LL;

	t33 = (x3345/(x3346*(x3347==x3348)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x3546 = UINT64_MAX;
	uint32_t x3547 = UINT32_MAX;
	int8_t x3548 = -1;
	volatile uint64_t t34 = 38LLU;

	t34 = (x3545/(x3546*(x3547==x3548)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x3617 = 3063985277749LLU;
	int8_t x3618 = INT8_MIN;
	int16_t x3620 = INT16_MIN;
	static volatile uint64_t t35 = 146310906LLU;

	t35 = (x3617/(x3618*(x3619==x3620)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x3689 = -1;
	volatile uint64_t x3690 = 32293944339652276LLU;
	int16_t x3691 = -1;
	static volatile uint64_t t36 = 26851LLU;

	t36 = (x3689/(x3690*(x3691==x3692)));

	if (t36 != 571LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x3705 = INT16_MIN;
	volatile uint32_t x3706 = 732954460U;
	int8_t x3707 = INT8_MIN;
	int8_t x3708 = INT8_MIN;
	static volatile uint32_t t37 = 0U;

	t37 = (x3705/(x3706*(x3707==x3708)));

	if (t37 != 5U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x3993 = UINT16_MAX;
	int16_t x3994 = INT16_MAX;
	int16_t x3995 = -1;
	int16_t x3996 = -1;
	volatile int32_t t38 = 120;

	t38 = (x3993/(x3994*(x3995==x3996)));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x4089 = 9575;
	int64_t x4090 = -1668402690913LL;
	volatile int64_t x4091 = INT64_MIN;
	int64_t x4092 = INT64_MIN;
	volatile int64_t t39 = 12099366268LL;

	t39 = (x4089/(x4090*(x4091==x4092)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x4233 = 10U;
	uint32_t x4234 = UINT32_MAX;
	int8_t x4235 = -1;
	uint32_t t40 = 23321U;

	t40 = (x4233/(x4234*(x4235==x4236)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x4477 = INT8_MIN;
	static volatile int8_t x4478 = INT8_MIN;
	int64_t x4479 = INT64_MIN;
	static int64_t x4480 = INT64_MIN;
	static int32_t t41 = -60114;

	t41 = (x4477/(x4478*(x4479==x4480)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x4625 = 3501LL;
	uint32_t x4627 = UINT32_MAX;
	int32_t x4628 = -1;
	int64_t t42 = -677313LL;

	t42 = (x4625/(x4626*(x4627==x4628)));

	if (t42 != 233LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x4645 = -1;
	uint32_t x4647 = 7U;
	uint8_t x4648 = 7U;

	t43 = (x4645/(x4646*(x4647==x4648)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x4669 = 95U;
	int16_t x4670 = INT16_MIN;
	int32_t x4672 = -1;
	uint32_t t44 = 18334U;

	t44 = (x4669/(x4670*(x4671==x4672)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x4933 = 104766694LL;
	int64_t x4934 = 28LL;
	int64_t x4935 = INT64_MIN;
	int64_t x4936 = INT64_MIN;
	volatile int64_t t45 = 60503009711LL;

	t45 = (x4933/(x4934*(x4935==x4936)));

	if (t45 != 3741667LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x4989 = -1LL;
	int8_t x4990 = INT8_MIN;

	t46 = (x4989/(x4990*(x4991==x4992)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x5101 = 32685U;
	uint8_t x5102 = 3U;
	uint64_t x5103 = UINT64_MAX;
	int32_t x5104 = -1;
	int32_t t47 = 27429;

	t47 = (x5101/(x5102*(x5103==x5104)));

	if (t47 != 10895) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x5117 = 32455U;
	volatile uint64_t x5118 = 1LLU;
	int16_t x5119 = -1;
	uint64_t t48 = 3207983450268952928LLU;

	t48 = (x5117/(x5118*(x5119==x5120)));

	if (t48 != 32455LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x5145 = 31LLU;
	volatile uint64_t x5146 = UINT64_MAX;
	int32_t x5147 = INT32_MIN;
	static uint64_t t49 = 95LLU;

	t49 = (x5145/(x5146*(x5147==x5148)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x5189 = -1;
	int8_t x5190 = INT8_MIN;
	static int32_t x5191 = INT32_MIN;
	int32_t x5192 = INT32_MIN;

	t50 = (x5189/(x5190*(x5191==x5192)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x5345 = UINT16_MAX;
	volatile int16_t x5346 = 2975;
	int64_t x5347 = -1LL;
	uint64_t x5348 = UINT64_MAX;
	int32_t t51 = 58913110;

	t51 = (x5345/(x5346*(x5347==x5348)));

	if (t51 != 22) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x5397 = INT32_MAX;
	int8_t x5398 = 1;
	static int8_t x5399 = -1;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x5397/(x5398*(x5399==x5400)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x5545 = 0;
	int8_t x5547 = -1;
	uint64_t x5548 = UINT64_MAX;
	static uint32_t t53 = 34U;

	t53 = (x5545/(x5546*(x5547==x5548)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x5617 = 116U;
	static int32_t x5618 = INT32_MIN;
	static volatile int32_t t54 = -196441811;

	t54 = (x5617/(x5618*(x5619==x5620)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x5661 = -8059;
	int64_t x5662 = INT64_MAX;
	int8_t x5663 = -1;
	int64_t x5664 = -1LL;
	static volatile int64_t t55 = -53833062LL;

	t55 = (x5661/(x5662*(x5663==x5664)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x5703 = -1LL;
	int64_t x5704 = -1LL;
	volatile int64_t t56 = -18861465LL;

	t56 = (x5701/(x5702*(x5703==x5704)));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x5718 = 57U;
	uint32_t x5719 = UINT32_MAX;
	int8_t x5720 = -1;
	int32_t t57 = 30;

	t57 = (x5717/(x5718*(x5719==x5720)));

	if (t57 != -80) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x5825 = -1LL;
	static volatile int64_t x5826 = -5997LL;
	uint8_t x5827 = 0U;
	int64_t t58 = -176LL;

	t58 = (x5825/(x5826*(x5827==x5828)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x5889 = 739;
	volatile uint64_t x5891 = UINT64_MAX;
	static uint64_t t59 = 19546813400812LLU;

	t59 = (x5889/(x5890*(x5891==x5892)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x5925 = INT64_MIN;
	int16_t x5926 = INT16_MIN;
	uint64_t x5927 = UINT64_MAX;
	uint64_t x5928 = UINT64_MAX;
	int64_t t60 = -25917513348750LL;

	t60 = (x5925/(x5926*(x5927==x5928)));

	if (t60 != 281474976710656LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x5933 = -119160004907304117LL;
	uint8_t x5935 = 12U;
	uint32_t x5936 = 12U;
	volatile int64_t t61 = 117891499LL;

	t61 = (x5933/(x5934*(x5935==x5936)));

	if (t61 != -4229490562LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x6021 = INT16_MIN;
	int8_t x6022 = INT8_MIN;
	static volatile int8_t x6023 = -1;
	int8_t x6024 = -1;

	t62 = (x6021/(x6022*(x6023==x6024)));

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x6062 = INT32_MIN;
	int8_t x6063 = -1;
	volatile uint64_t x6064 = UINT64_MAX;
	volatile int32_t t63 = 69;

	t63 = (x6061/(x6062*(x6063==x6064)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x6125 = -1266;
	int32_t x6126 = INT32_MIN;
	static int8_t x6127 = INT8_MIN;
	volatile int32_t t64 = 4260;

	t64 = (x6125/(x6126*(x6127==x6128)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x6177 = -2346;
	int16_t x6178 = INT16_MIN;
	uint64_t x6179 = UINT64_MAX;
	volatile int32_t x6180 = -1;
	volatile int32_t t65 = 371;

	t65 = (x6177/(x6178*(x6179==x6180)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x6305 = 1718;
	int8_t x6306 = -13;
	static uint16_t x6307 = UINT16_MAX;
	uint16_t x6308 = UINT16_MAX;

	t66 = (x6305/(x6306*(x6307==x6308)));

	if (t66 != -132) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x6465 = 144797562145265315LLU;
	uint32_t x6466 = 150U;
	int32_t x6467 = -1;
	int8_t x6468 = -1;
	volatile uint64_t t67 = 288811578610242838LLU;

	t67 = (x6465/(x6466*(x6467==x6468)));

	if (t67 != 965317080968435LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x6713 = INT8_MAX;
	static volatile uint8_t x6714 = UINT8_MAX;
	static int64_t x6715 = INT64_MIN;
	int64_t x6716 = INT64_MIN;
	static int32_t t68 = -189276;

	t68 = (x6713/(x6714*(x6715==x6716)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x6733 = -1;
	int8_t x6734 = -1;
	volatile int32_t x6735 = INT32_MAX;
	int32_t x6736 = INT32_MAX;
	static volatile int32_t t69 = 6;

	t69 = (x6733/(x6734*(x6735==x6736)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x6769 = -2286;
	uint32_t x6770 = 91259277U;
	uint8_t x6771 = UINT8_MAX;
	static volatile uint32_t t70 = 2U;

	t70 = (x6769/(x6770*(x6771==x6772)));

	if (t70 != 47U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x6801 = 30U;
	static uint32_t x6802 = 16U;
	uint32_t x6803 = UINT32_MAX;
	int32_t x6804 = -1;

	t71 = (x6801/(x6802*(x6803==x6804)));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x6909 = INT32_MIN;
	static int8_t x6910 = -39;
	volatile int64_t x6912 = -1LL;
	volatile int32_t t72 = -7;

	t72 = (x6909/(x6910*(x6911==x6912)));

	if (t72 != 55063683) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x6929 = INT32_MAX;
	volatile int16_t x6932 = -1;
	uint32_t t73 = 11187954U;

	t73 = (x6929/(x6930*(x6931==x6932)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x6937 = UINT32_MAX;
	int64_t x6938 = INT64_MIN;
	int32_t x6940 = -1;
	int64_t t74 = 51108824LL;

	t74 = (x6937/(x6938*(x6939==x6940)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x7009 = INT8_MIN;
	int32_t x7010 = INT32_MIN;
	int64_t x7011 = INT64_MAX;
	int64_t x7012 = INT64_MAX;
	volatile int32_t t75 = 9277467;

	t75 = (x7009/(x7010*(x7011==x7012)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x7133 = INT16_MIN;
	int16_t x7135 = INT16_MIN;
	int32_t t76 = 399547;

	t76 = (x7133/(x7134*(x7135==x7136)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x7225 = INT8_MIN;
	uint32_t x7226 = UINT32_MAX;
	int64_t x7227 = -1LL;
	static int16_t x7228 = -1;
	static uint32_t t77 = 616898U;

	t77 = (x7225/(x7226*(x7227==x7228)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x7235 = -1;
	static volatile uint64_t x7236 = UINT64_MAX;

	t78 = (x7233/(x7234*(x7235==x7236)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x7241 = 35788524U;
	volatile int64_t x7243 = INT64_MIN;
	volatile uint32_t t79 = 280U;

	t79 = (x7241/(x7242*(x7243==x7244)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x7265 = UINT64_MAX;
	volatile uint64_t x7266 = UINT64_MAX;
	int8_t x7267 = INT8_MIN;
	volatile uint64_t t80 = 58105204701237756LLU;

	t80 = (x7265/(x7266*(x7267==x7268)));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x7313 = 81U;
	int64_t x7314 = -141LL;
	uint64_t x7316 = UINT64_MAX;
	int64_t t81 = 4392607332467999LL;

	t81 = (x7313/(x7314*(x7315==x7316)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x7377 = INT8_MIN;
	int16_t x7378 = INT16_MIN;
	static int32_t x7379 = INT32_MIN;
	int32_t x7380 = INT32_MIN;
	int32_t t82 = 1923013;

	t82 = (x7377/(x7378*(x7379==x7380)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x7449 = -1;
	int8_t x7450 = -1;
	static int8_t x7451 = -1;
	int32_t x7452 = -1;
	static volatile int32_t t83 = 9771453;

	t83 = (x7449/(x7450*(x7451==x7452)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x7537 = UINT16_MAX;
	static uint32_t x7538 = UINT32_MAX;
	volatile int64_t x7539 = -1LL;
	static int32_t x7540 = -1;
	uint32_t t84 = 434U;

	t84 = (x7537/(x7538*(x7539==x7540)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x7761 = -1;
	static uint16_t x7762 = 3U;
	volatile int16_t x7763 = -1;
	int32_t x7764 = -1;
	static int32_t t85 = -1;

	t85 = (x7761/(x7762*(x7763==x7764)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x7867 = -1;
	int16_t x7868 = -1;
	int32_t t86 = -62733299;

	t86 = (x7865/(x7866*(x7867==x7868)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x7906 = 63802846899136LLU;
	uint32_t x7907 = UINT32_MAX;
	int16_t x7908 = -1;
	uint64_t t87 = 969623LLU;

	t87 = (x7905/(x7906*(x7907==x7908)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x7974 = -1;
	int64_t x7975 = -1LL;
	static uint64_t x7976 = UINT64_MAX;

	t88 = (x7973/(x7974*(x7975==x7976)));

	if (t88 != 10967LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x8010 = INT8_MIN;
	static int64_t x8011 = INT64_MIN;
	int64_t x8012 = INT64_MIN;

	t89 = (x8009/(x8010*(x8011==x8012)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x8049 = INT32_MIN;
	int8_t x8051 = INT8_MIN;
	int8_t x8052 = INT8_MIN;
	int32_t t90 = 0;

	t90 = (x8049/(x8050*(x8051==x8052)));

	if (t90 != 65536) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x8109 = 56085U;
	int32_t x8110 = -3028272;
	volatile uint8_t x8111 = 0U;
	volatile uint8_t x8112 = 0U;
	uint32_t t91 = 940U;

	t91 = (x8109/(x8110*(x8111==x8112)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x8353 = INT8_MAX;
	uint16_t x8354 = 3615U;
	static uint8_t x8356 = UINT8_MAX;

	t92 = (x8353/(x8354*(x8355==x8356)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x8365 = 886U;
	static int32_t x8366 = -1;
	volatile int16_t x8367 = -1;
	int16_t x8368 = -1;
	int32_t t93 = -168282876;

	t93 = (x8365/(x8366*(x8367==x8368)));

	if (t93 != -886) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x8409 = 859U;
	uint16_t x8410 = 15073U;
	int16_t x8411 = INT16_MIN;
	int16_t x8412 = INT16_MIN;
	static volatile int32_t t94 = 90;

	t94 = (x8409/(x8410*(x8411==x8412)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x8549 = UINT64_MAX;
	static int8_t x8550 = -1;
	int32_t x8552 = -1;
	volatile uint64_t t95 = 25687217054LLU;

	t95 = (x8549/(x8550*(x8551==x8552)));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x8813 = -1;
	int32_t x8816 = INT32_MIN;
	int32_t t96 = 666556453;

	t96 = (x8813/(x8814*(x8815==x8816)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x9021 = -780;
	int8_t x9022 = -2;
	uint32_t x9023 = UINT32_MAX;
	int32_t x9024 = -1;

	t97 = (x9021/(x9022*(x9023==x9024)));

	if (t97 != 390) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x9073 = -1LL;
	static int64_t x9074 = INT64_MIN;
	int32_t x9075 = INT32_MAX;
	int32_t x9076 = INT32_MAX;

	t98 = (x9073/(x9074*(x9075==x9076)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x9249 = -1;
	int16_t x9250 = -1;
	int16_t x9251 = -1;
	int8_t x9252 = -1;
	int32_t t99 = 288933859;

	t99 = (x9249/(x9250*(x9251==x9252)));

	if (t99 != 1) { NG(); } else { ; }
	
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

