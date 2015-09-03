#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
static int8_t x4 = -8;
uint8_t x8 = UINT8_MAX;
volatile int64_t t1 = 16129737502109080LL;
volatile int8_t x58 = 0;
int64_t x66 = INT64_MIN;
uint32_t x75 = 10907469U;
volatile int32_t t6 = 721877986;
static int32_t x78 = INT32_MIN;
int8_t x87 = INT8_MAX;
int8_t x103 = INT8_MIN;
volatile int32_t t9 = -66405185;
uint32_t x115 = UINT32_MAX;
int64_t x116 = INT64_MAX;
volatile int64_t x120 = INT64_MAX;
volatile int32_t t12 = -475555612;
uint64_t x130 = 971096016623048LLU;
static uint64_t t15 = 946958013518270348LLU;
uint16_t x138 = 1U;
int8_t x140 = -1;
volatile int32_t t17 = 1;
int32_t x149 = -1;
uint16_t x153 = 9712U;
int16_t x166 = -1;
volatile int32_t t21 = -4;
volatile int8_t x186 = -1;
volatile uint32_t x189 = 3727U;
volatile uint32_t t23 = 28162U;
static uint16_t x220 = 604U;
int32_t x239 = INT32_MIN;
volatile int64_t x240 = -1LL;
uint64_t t27 = 2004114LLU;
int64_t x254 = INT64_MIN;
uint32_t x265 = UINT32_MAX;
volatile int8_t x279 = 1;
int64_t x281 = INT64_MIN;
static volatile int16_t x340 = -1;
uint16_t x343 = 2U;
uint32_t x346 = 7275612U;
static int16_t x349 = -1;
volatile uint8_t x351 = 0U;
volatile int64_t x352 = INT64_MAX;
volatile int32_t t39 = 266065732;
uint64_t x357 = UINT64_MAX;
uint32_t x360 = UINT32_MAX;
int64_t x363 = 14LL;
static uint32_t x364 = UINT32_MAX;
int64_t x366 = INT64_MAX;
int16_t x367 = -14118;
int16_t x381 = 3390;
volatile int64_t x382 = -1LL;
volatile int32_t x385 = INT32_MIN;
uint64_t x386 = 14246820304755LLU;
int64_t t45 = -1LL;
int8_t x416 = INT8_MAX;
int64_t t46 = -11LL;
int32_t x424 = INT32_MAX;
volatile int32_t x425 = -1;
uint32_t x426 = UINT32_MAX;
int8_t x437 = -1;
int64_t x448 = INT64_MAX;
int8_t x460 = INT8_MAX;
static uint64_t t55 = 10LLU;
volatile uint16_t x473 = 5U;
int64_t x474 = INT64_MIN;
int64_t t58 = 19037110734061779LL;
int32_t x478 = INT32_MAX;
int64_t x494 = INT64_MIN;
static uint64_t x495 = 102386956659965LLU;
uint32_t t61 = 1498U;
int64_t x538 = -2554856432716815LL;
int8_t x539 = 0;
volatile int64_t t67 = -22577LL;
volatile int16_t x561 = 1967;
static int64_t x563 = -158048LL;
int8_t x565 = INT8_MIN;
int32_t x572 = -5703248;
int16_t x576 = INT16_MAX;
volatile uint8_t x581 = 1U;
uint8_t x582 = UINT8_MAX;
static int64_t x584 = 44516618034121LL;
int32_t t73 = 3;
volatile uint32_t x586 = 0U;
int32_t x587 = INT32_MIN;
static volatile int64_t x593 = INT64_MIN;
uint32_t x602 = 8175U;
volatile uint64_t x611 = 13LLU;
int16_t x612 = INT16_MAX;
volatile uint64_t t83 = 116059LLU;
int64_t x654 = -166504120LL;
int64_t t84 = 487801211759952LL;
volatile int16_t x662 = INT16_MIN;
int64_t t89 = 22337536580LL;
uint32_t x688 = 297480U;
volatile uint64_t t90 = UINT64_MAX;
int8_t x692 = INT8_MIN;
volatile int64_t t91 = 840673798644621340LL;
static uint8_t x697 = 42U;
int16_t x700 = INT16_MAX;
int32_t x734 = 1559;
uint8_t x747 = UINT8_MAX;
int16_t x750 = INT16_MAX;
int64_t x755 = INT64_MIN;
volatile int64_t x757 = INT64_MIN;


void f0(void) {
	int64_t x1 = -2071319329401LL;
	static uint64_t x3 = 2446638818261854LLU;
	volatile int64_t t0 = 21LL;

	t0 = ((x1^x2)/(x3<x4));

	if (t0 != 2071319329400LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MAX;
	int8_t x7 = INT8_MAX;

	t1 = ((x5^x6)/(x7<x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = -8;
	int16_t x22 = INT16_MAX;
	uint32_t x23 = 3U;
	int8_t x24 = -28;
	int32_t t2 = 1466;

	t2 = ((x21^x22)/(x23<x24));

	if (t2 != -32761) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x37 = 529U;
	uint16_t x38 = 212U;
	int32_t x39 = -1;
	int8_t x40 = INT8_MAX;
	int32_t t3 = 43718835;

	t3 = ((x37^x38)/(x39<x40));

	if (t3 != 709) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x57 = UINT16_MAX;
	static int32_t x59 = INT32_MIN;
	uint8_t x60 = 34U;
	volatile int32_t t4 = -518168;

	t4 = ((x57^x58)/(x59<x60));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x65 = 2;
	int64_t x67 = -70496988057563314LL;
	int8_t x68 = -1;
	volatile int64_t t5 = 114163747377LL;

	t5 = ((x65^x66)/(x67<x68));

	if (t5 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x73 = -1;
	int16_t x74 = INT16_MAX;
	static volatile uint64_t x76 = UINT64_MAX;

	t6 = ((x73^x74)/(x75<x76));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x77 = UINT64_MAX;
	static int16_t x79 = -1;
	int32_t x80 = 635319;
	volatile uint64_t t7 = 100621993874081LLU;

	t7 = ((x77^x78)/(x79<x80));

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x85 = -1;
	int32_t x86 = 6854450;
	int64_t x88 = 10883LL;
	volatile int32_t t8 = 3836796;

	t8 = ((x85^x86)/(x87<x88));

	if (t8 != -6854451) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x101 = -1;
	int8_t x102 = -42;
	static int16_t x104 = INT16_MAX;

	t9 = ((x101^x102)/(x103<x104));

	if (t9 != 41) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x105 = 263338352381LLU;
	uint8_t x106 = 41U;
	int16_t x107 = INT16_MIN;
	int64_t x108 = -1LL;
	volatile uint64_t t10 = 302669383389LLU;

	t10 = ((x105^x106)/(x107<x108));

	if (t10 != 263338352340LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 92U;
	volatile int32_t t11 = -18664;

	t11 = ((x113^x114)/(x115<x116));

	if (t11 != 65443) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x117 = INT16_MAX;
	static int32_t x118 = INT32_MIN;
	int16_t x119 = -957;

	t12 = ((x117^x118)/(x119<x120));

	if (t12 != -2147450881) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = 1731579707LL;
	int64_t x123 = -1LL;
	uint16_t x124 = 0U;
	int64_t t13 = -13305464LL;

	t13 = ((x121^x122)/(x123<x124));

	if (t13 != 1731579716LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x125 = UINT32_MAX;
	volatile int64_t x126 = -3557138193288723LL;
	int32_t x127 = INT32_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	int64_t t14 = -2002LL;

	t14 = ((x125^x126)/(x127<x128));

	if (t14 != -3557135830118894LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x131 = 5179304357032002LLU;
	volatile uint64_t x132 = UINT64_MAX;

	t15 = ((x129^x130)/(x131<x132));

	if (t15 != 9224343132871398856LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x133 = 1LL;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = -46;
	static uint8_t x136 = UINT8_MAX;
	volatile uint64_t t16 = 1634LLU;

	t16 = ((x133^x134)/(x135<x136));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x137 = INT16_MIN;
	int8_t x139 = INT8_MIN;

	t17 = ((x137^x138)/(x139<x140));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x150 = -23LL;
	int8_t x151 = 17;
	uint8_t x152 = UINT8_MAX;
	volatile int64_t t18 = -1LL;

	t18 = ((x149^x150)/(x151<x152));

	if (t18 != 22LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MAX;
	int64_t x156 = INT64_MAX;
	int32_t t19 = 3202;

	t19 = ((x153^x154)/(x155<x156));

	if (t19 != 55823) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x157 = INT16_MAX;
	static volatile int8_t x158 = INT8_MAX;
	int8_t x159 = INT8_MIN;
	static int64_t x160 = 45971395350LL;
	int32_t t20 = -40192;

	t20 = ((x157^x158)/(x159<x160));

	if (t20 != 32640) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x165 = 226;
	int64_t x167 = 13556003LL;
	static volatile uint64_t x168 = 3665787412892749342LLU;

	t21 = ((x165^x166)/(x167<x168));

	if (t21 != -227) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x185 = UINT8_MAX;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = 11308U;
	volatile int32_t t22 = 2;

	t22 = ((x185^x186)/(x187<x188));

	if (t22 != -256) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x190 = UINT32_MAX;
	static uint8_t x191 = 38U;
	uint32_t x192 = 25663U;

	t23 = ((x189^x190)/(x191<x192));

	if (t23 != 4294963568U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x217 = 12607211294LL;
	int16_t x218 = 167;
	int8_t x219 = -1;
	int64_t t24 = 45435424733543009LL;

	t24 = ((x217^x218)/(x219<x220));

	if (t24 != 12607211449LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x221 = 1826;
	volatile uint64_t x222 = 1906272309LLU;
	static int8_t x223 = INT8_MIN;
	volatile int8_t x224 = 39;
	volatile uint64_t t25 = 4955637144538LLU;

	t25 = ((x221^x222)/(x223<x224));

	if (t25 != 1906274071LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x225 = INT64_MIN;
	uint8_t x226 = 66U;
	uint64_t x227 = 1712041270LLU;
	int16_t x228 = INT16_MIN;
	volatile int64_t t26 = 2LL;

	t26 = ((x225^x226)/(x227<x228));

	if (t26 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x237 = 0;
	uint64_t x238 = 19487473141840181LLU;

	t27 = ((x237^x238)/(x239<x240));

	if (t27 != 19487473141840181LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x253 = INT32_MAX;
	static int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	static int64_t t28 = 5926364262LL;

	t28 = ((x253^x254)/(x255<x256));

	if (t28 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x266 = INT16_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t29 = 1U;

	t29 = ((x265^x266)/(x267<x268));

	if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static uint8_t x280 = UINT8_MAX;
	int32_t t30 = 278;

	t30 = ((x277^x278)/(x279<x280));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int8_t x284 = -17;
	volatile int64_t t31 = INT64_MAX;

	t31 = ((x281^x282)/(x283<x284));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x305 = 0;
	volatile int8_t x306 = INT8_MIN;
	volatile int64_t x307 = -1LL;
	int8_t x308 = INT8_MAX;
	volatile int32_t t32 = 19793964;

	t32 = ((x305^x306)/(x307<x308));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x317 = -843503602;
	uint8_t x318 = 15U;
	static int16_t x319 = INT16_MIN;
	volatile int64_t x320 = INT64_MAX;
	volatile int32_t t33 = 52;

	t33 = ((x317^x318)/(x319<x320));

	if (t33 != -843503615) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x321 = INT32_MIN;
	static uint32_t x322 = 1236855644U;
	static uint8_t x323 = 53U;
	static uint16_t x324 = 291U;
	uint32_t t34 = 1U;

	t34 = ((x321^x322)/(x323<x324));

	if (t34 != 3384339292U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x337 = 1;
	uint32_t x338 = 430881U;
	static uint64_t x339 = 953LLU;
	volatile uint32_t t35 = 3233U;

	t35 = ((x337^x338)/(x339<x340));

	if (t35 != 430880U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MAX;
	static uint64_t x344 = 49330701353743315LLU;
	volatile int64_t t36 = 0LL;

	t36 = ((x341^x342)/(x343<x344));

	if (t36 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x345 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	volatile uint8_t x348 = 3U;
	volatile int64_t t37 = 10979LL;

	t37 = ((x345^x346)/(x347<x348));

	if (t37 != -9223372036847500196LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x350 = -12716;
	static volatile int32_t t38 = -5832;

	t38 = ((x349^x350)/(x351<x352));

	if (t38 != 12715) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = 76363609923LLU;
	int16_t x356 = INT16_MIN;

	t39 = ((x353^x354)/(x355<x356));

	if (t39 != -32641) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x358 = INT8_MIN;
	volatile int8_t x359 = 1;
	volatile uint64_t t40 = 138089560004055947LLU;

	t40 = ((x357^x358)/(x359<x360));

	if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint16_t x362 = UINT16_MAX;
	volatile int32_t t41 = -465199706;

	t41 = ((x361^x362)/(x363<x364));

	if (t41 != 65280) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x368 = -1;
	int64_t t42 = 88644630930502LL;

	t42 = ((x365^x366)/(x367<x368));

	if (t42 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x383 = INT16_MIN;
	int32_t x384 = 4000793;
	int64_t t43 = -746LL;

	t43 = ((x381^x382)/(x383<x384));

	if (t43 != -3391LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x387 = 15LLU;
	uint8_t x388 = 22U;
	uint64_t t44 = 2829449LLU;

	t44 = ((x385^x386)/(x387<x388));

	if (t44 != 18446729825569331059LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x389 = INT32_MAX;
	static volatile int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MAX;

	t45 = ((x389^x390)/(x391<x392));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x413 = 1428879;
	int64_t x414 = INT64_MAX;
	static uint16_t x415 = 11U;

	t46 = ((x413^x414)/(x415<x416));

	if (t46 != 9223372036853346928LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x417 = INT64_MIN;
	volatile int64_t x418 = -199932494115LL;
	int64_t x419 = -511035LL;
	volatile uint32_t x420 = UINT32_MAX;
	volatile int64_t t47 = -460054974LL;

	t47 = ((x417^x418)/(x419<x420));

	if (t47 != 9223371836922281693LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = -1LL;
	uint8_t x423 = 4U;
	int64_t t48 = -111989264600659LL;

	t48 = ((x421^x422)/(x423<x424));

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x427 = INT8_MAX;
	volatile uint32_t x428 = 80243U;
	volatile uint32_t t49 = 3U;

	t49 = ((x425^x426)/(x427<x428));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x429 = 143112233U;
	static int16_t x430 = -1;
	int16_t x431 = INT16_MAX;
	uint64_t x432 = 27980573509533LLU;
	volatile uint32_t t50 = 1258100032U;

	t50 = ((x429^x430)/(x431<x432));

	if (t50 != 4151855062U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x433 = -1;
	volatile int64_t x434 = INT64_MIN;
	static int16_t x435 = -1;
	uint8_t x436 = UINT8_MAX;
	volatile int64_t t51 = INT64_MAX;

	t51 = ((x433^x434)/(x435<x436));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x438 = -256048669384855LL;
	volatile int16_t x439 = INT16_MAX;
	uint32_t x440 = UINT32_MAX;
	volatile int64_t t52 = 74744LL;

	t52 = ((x437^x438)/(x439<x440));

	if (t52 != 256048669384854LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x445 = -2;
	int64_t x446 = INT64_MAX;
	uint32_t x447 = 2686704U;
	volatile int64_t t53 = 33080444859435459LL;

	t53 = ((x445^x446)/(x447<x448));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x449 = 62;
	int8_t x450 = -57;
	int64_t x451 = INT64_MIN;
	int16_t x452 = INT16_MAX;
	int32_t t54 = 21393;

	t54 = ((x449^x450)/(x451<x452));

	if (t54 != -7) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x457 = 45LLU;
	int32_t x458 = 776954;
	volatile int64_t x459 = INT64_MIN;

	t55 = ((x457^x458)/(x459<x460));

	if (t55 != 776919LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x461 = 236;
	static int16_t x462 = INT16_MAX;
	static int64_t x463 = INT64_MIN;
	volatile uint8_t x464 = UINT8_MAX;
	int32_t t56 = 3;

	t56 = ((x461^x462)/(x463<x464));

	if (t56 != 32531) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x469 = -1042173;
	volatile uint16_t x470 = UINT16_MAX;
	volatile int32_t x471 = -114548370;
	static uint32_t x472 = UINT32_MAX;
	volatile int32_t t57 = 8169431;

	t57 = ((x469^x470)/(x471<x472));

	if (t57 != -989444) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x475 = INT64_MIN;
	uint8_t x476 = 10U;

	t58 = ((x473^x474)/(x475<x476));

	if (t58 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x477 = 1;
	static int8_t x479 = INT8_MAX;
	int32_t x480 = 23694957;
	int32_t t59 = 20;

	t59 = ((x477^x478)/(x479<x480));

	if (t59 != 2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x493 = 139977262400573834LLU;
	int64_t x496 = INT64_MIN;
	uint64_t t60 = 317LLU;

	t60 = ((x493^x494)/(x495<x496));

	if (t60 != 9363349299255349642LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x509 = 1933U;
	static uint32_t x510 = 3488394U;
	uint8_t x511 = 43U;
	int16_t x512 = INT16_MAX;

	t61 = ((x509^x510)/(x511<x512));

	if (t61 != 3489031U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x513 = UINT32_MAX;
	int8_t x514 = 14;
	int32_t x515 = INT32_MIN;
	int32_t x516 = -64;
	uint32_t t62 = 255252U;

	t62 = ((x513^x514)/(x515<x516));

	if (t62 != 4294967281U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x529 = 22U;
	uint32_t x530 = 152579947U;
	static uint64_t x531 = 446LLU;
	int8_t x532 = INT8_MIN;
	volatile uint32_t t63 = 202990206U;

	t63 = ((x529^x530)/(x531<x532));

	if (t63 != 152579965U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x533 = 1U;
	int16_t x534 = -335;
	static int8_t x535 = 9;
	volatile uint8_t x536 = UINT8_MAX;
	int32_t t64 = -21650648;

	t64 = ((x533^x534)/(x535<x536));

	if (t64 != -336) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x537 = INT32_MAX;
	uint32_t x540 = 460883818U;
	volatile int64_t t65 = 1538262054LL;

	t65 = ((x537^x538)/(x539<x540));

	if (t65 != -2554855421916146LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	int32_t x547 = -217516961;
	uint8_t x548 = 116U;
	uint32_t t66 = 1U;

	t66 = ((x545^x546)/(x547<x548));

	if (t66 != 127U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x549 = INT8_MIN;
	static int64_t x550 = -1LL;
	volatile int32_t x551 = -1;
	uint8_t x552 = 45U;

	t67 = ((x549^x550)/(x551<x552));

	if (t67 != 127LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x553 = INT16_MAX;
	static uint8_t x554 = 4U;
	volatile int8_t x555 = INT8_MIN;
	static volatile int8_t x556 = -14;
	volatile int32_t t68 = 25503;

	t68 = ((x553^x554)/(x555<x556));

	if (t68 != 32763) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x562 = 177U;
	int8_t x564 = 0;
	volatile uint32_t t69 = 15057443U;

	t69 = ((x561^x562)/(x563<x564));

	if (t69 != 1822U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x566 = INT8_MIN;
	volatile uint16_t x567 = 21U;
	volatile uint64_t x568 = 277374314226367126LLU;
	int32_t t70 = -1530407;

	t70 = ((x565^x566)/(x567<x568));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x569 = INT32_MIN;
	static int8_t x570 = INT8_MIN;
	int64_t x571 = -201556274186887LL;
	volatile int32_t t71 = 41939220;

	t71 = ((x569^x570)/(x571<x572));

	if (t71 != 2147483520) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x573 = 6026389746LLU;
	volatile int32_t x574 = INT32_MIN;
	int8_t x575 = INT8_MAX;
	uint64_t t72 = 578LLU;

	t72 = ((x573^x574)/(x575<x576));

	if (t72 != 18446744068998523122LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x583 = UINT8_MAX;

	t73 = ((x581^x582)/(x583<x584));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x585 = INT64_MAX;
	static int16_t x588 = INT16_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = ((x585^x586)/(x587<x588));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x589 = -1;
	int32_t x590 = INT32_MIN;
	int64_t x591 = INT64_MIN;
	int16_t x592 = -7499;
	static int32_t t75 = INT32_MAX;

	t75 = ((x589^x590)/(x591<x592));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x594 = INT8_MAX;
	uint64_t x595 = 17LLU;
	int32_t x596 = INT32_MAX;
	int64_t t76 = -15814324940315293LL;

	t76 = ((x593^x594)/(x595<x596));

	if (t76 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x597 = 1U;
	int16_t x598 = -1;
	int8_t x599 = -33;
	static int64_t x600 = 3191920106LL;
	volatile int32_t t77 = 682466;

	t77 = ((x597^x598)/(x599<x600));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x601 = INT64_MIN;
	static uint16_t x603 = 101U;
	uint64_t x604 = UINT64_MAX;
	int64_t t78 = 2158LL;

	t78 = ((x601^x602)/(x603<x604));

	if (t78 != -9223372036854767633LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x609 = -1;
	int16_t x610 = -1;
	int32_t t79 = -630;

	t79 = ((x609^x610)/(x611<x612));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x613 = 24406709U;
	int64_t x614 = -1LL;
	static int16_t x615 = INT16_MIN;
	static int16_t x616 = 14107;
	volatile int64_t t80 = -120119567837959809LL;

	t80 = ((x613^x614)/(x615<x616));

	if (t80 != -24406710LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x621 = INT8_MIN;
	volatile int64_t x622 = INT64_MIN;
	uint8_t x623 = 1U;
	static int64_t x624 = INT64_MAX;
	static int64_t t81 = -2865LL;

	t81 = ((x621^x622)/(x623<x624));

	if (t81 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x625 = 6;
	uint16_t x626 = 356U;
	volatile uint32_t x627 = 10363568U;
	volatile int8_t x628 = INT8_MIN;
	int32_t t82 = -95446;

	t82 = ((x625^x626)/(x627<x628));

	if (t82 != 354) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x645 = 126U;
	static volatile uint64_t x646 = UINT64_MAX;
	int64_t x647 = -274438303981LL;
	uint16_t x648 = UINT16_MAX;

	t83 = ((x645^x646)/(x647<x648));

	if (t83 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x653 = -1;
	int8_t x655 = INT8_MAX;
	static int32_t x656 = INT32_MAX;

	t84 = ((x653^x654)/(x655<x656));

	if (t84 != 166504119LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x657 = -113;
	volatile int8_t x658 = -1;
	int64_t x659 = -936234LL;
	volatile int16_t x660 = INT16_MIN;
	volatile int32_t t85 = 44837252;

	t85 = ((x657^x658)/(x659<x660));

	if (t85 != 112) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x661 = INT32_MIN;
	int64_t x663 = -33859LL;
	volatile uint8_t x664 = UINT8_MAX;
	int32_t t86 = -27787129;

	t86 = ((x661^x662)/(x663<x664));

	if (t86 != 2147450880) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x665 = INT8_MIN;
	uint64_t x666 = 129307LLU;
	int8_t x667 = INT8_MIN;
	static uint8_t x668 = UINT8_MAX;
	volatile uint64_t t87 = 112LLU;

	t87 = ((x665^x666)/(x667<x668));

	if (t87 != 18446744073709422235LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x669 = 1163302U;
	volatile uint32_t x670 = 13953503U;
	static int32_t x671 = -17216;
	volatile uint16_t x672 = UINT16_MAX;
	uint32_t t88 = 5482993U;

	t88 = ((x669^x670)/(x671<x672));

	if (t88 != 12921337U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x677 = -2611530LL;
	static int32_t x678 = INT32_MIN;
	int32_t x679 = INT32_MIN;
	int8_t x680 = INT8_MIN;

	t89 = ((x677^x678)/(x679<x680));

	if (t89 != 2144872118LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x685 = UINT64_MAX;
	uint64_t x686 = 0LLU;
	int64_t x687 = INT64_MIN;

	t90 = ((x685^x686)/(x687<x688));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x689 = UINT8_MAX;
	int64_t x690 = INT64_MAX;
	volatile int16_t x691 = INT16_MIN;

	t91 = ((x689^x690)/(x691<x692));

	if (t91 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x698 = INT16_MAX;
	volatile uint32_t x699 = 702U;
	static int32_t t92 = -471958837;

	t92 = ((x697^x698)/(x699<x700));

	if (t92 != 32725) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x729 = UINT64_MAX;
	volatile uint16_t x730 = 12U;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = 15U;
	volatile uint64_t t93 = 25295364174948035LLU;

	t93 = ((x729^x730)/(x731<x732));

	if (t93 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x733 = 247051936855289LLU;
	int32_t x735 = INT32_MIN;
	int8_t x736 = 1;
	volatile uint64_t t94 = 816540LLU;

	t94 = ((x733^x734)/(x735<x736));

	if (t94 != 247051936854766LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x737 = -1;
	int32_t x738 = INT32_MIN;
	int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MIN;
	int32_t t95 = INT32_MAX;

	t95 = ((x737^x738)/(x739<x740));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x745 = 2255894U;
	uint32_t x746 = 1921790U;
	static int64_t x748 = 53537LL;
	static volatile uint32_t t96 = 0U;

	t96 = ((x745^x746)/(x747<x748));

	if (t96 != 4144872U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x749 = INT32_MAX;
	volatile int64_t x751 = -9205806841362222LL;
	volatile uint8_t x752 = 1U;
	static volatile int32_t t97 = 8256118;

	t97 = ((x749^x750)/(x751<x752));

	if (t97 != 2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x753 = INT16_MAX;
	int8_t x754 = 15;
	static int32_t x756 = -1;
	int32_t t98 = -679209;

	t98 = ((x753^x754)/(x755<x756));

	if (t98 != 32752) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x758 = 82979U;
	static volatile int8_t x759 = INT8_MIN;
	int32_t x760 = -1;
	int64_t t99 = -8330943141373808LL;

	t99 = ((x757^x758)/(x759<x760));

	if (t99 != -9223372036854692829LL) { NG(); } else { ; }
	
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

