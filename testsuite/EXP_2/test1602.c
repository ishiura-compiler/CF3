#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
static uint8_t x32 = 1U;
uint32_t x55 = UINT32_MAX;
static uint32_t t3 = 1U;
volatile int32_t x78 = 141;
uint32_t x80 = 360580U;
volatile uint8_t x97 = 3U;
int8_t x105 = 0;
volatile uint32_t x109 = UINT32_MAX;
uint8_t x112 = UINT8_MAX;
int8_t x117 = INT8_MAX;
int8_t x120 = INT8_MAX;
uint32_t x122 = UINT32_MAX;
static uint8_t x125 = 4U;
uint8_t x143 = UINT8_MAX;
uint64_t x161 = 15237549847056LLU;
uint64_t x163 = 126911LLU;
uint64_t t18 = 1604670479639LLU;
static uint8_t x165 = 0U;
volatile uint32_t x166 = 96011709U;
int8_t x168 = 1;
static int32_t x170 = -402;
uint64_t x181 = UINT64_MAX;
uint64_t x183 = UINT64_MAX;
uint16_t x208 = 67U;
static uint8_t x209 = UINT8_MAX;
volatile int32_t x210 = 640;
volatile uint32_t t24 = 98U;
int8_t x215 = 39;
uint64_t t25 = 286LLU;
int16_t x220 = 1890;
int32_t t26 = -81396709;
uint64_t t27 = 15258075019LLU;
int64_t x242 = INT64_MAX;
uint64_t x243 = 1LLU;
volatile uint8_t x244 = 5U;
int32_t x269 = INT32_MAX;
volatile int16_t x280 = -111;
uint16_t x295 = UINT16_MAX;
int8_t x302 = INT8_MAX;
volatile uint32_t x317 = 1700883884U;
static int8_t x329 = INT8_MAX;
int64_t x331 = -1LL;
int16_t x350 = INT16_MIN;
int64_t x351 = INT64_MIN;
static int64_t x370 = INT64_MIN;
uint16_t x379 = 0U;
int32_t t42 = -75830;
int32_t t43 = 708;
uint16_t x385 = UINT16_MAX;
uint64_t t46 = 2503114727906184LLU;
uint16_t x417 = 1342U;
int32_t t47 = -183079394;
uint8_t x439 = 0U;
uint16_t x449 = 981U;
volatile int64_t x467 = -2725LL;
uint8_t x503 = 0U;
int64_t x504 = -1LL;
uint8_t x507 = 10U;
volatile int32_t t54 = 3946;
volatile uint64_t t55 = 15165883LLU;
int32_t x536 = INT32_MIN;
static uint8_t x537 = UINT8_MAX;
int64_t x548 = -60LL;
uint16_t x569 = 119U;
volatile int32_t t62 = -120624065;
int16_t x584 = -7990;
uint16_t x593 = 5124U;
uint16_t x595 = UINT16_MAX;
uint16_t x596 = 14U;
static volatile uint64_t x615 = 49627537954543LLU;
int8_t x619 = -3;
volatile int32_t x632 = -1;
uint64_t x713 = 679453805652LLU;
int32_t x732 = -1;
uint8_t x748 = 2U;
volatile uint32_t x749 = 6U;
int16_t x761 = INT16_MAX;
volatile uint8_t x827 = 34U;
uint8_t x844 = 17U;
uint8_t x868 = 39U;
int8_t x869 = INT8_MAX;
volatile int32_t t84 = 999;
static uint32_t x882 = UINT32_MAX;
uint16_t x886 = 5373U;
volatile uint16_t x891 = 26U;
static int8_t x903 = INT8_MAX;
int64_t x904 = -1LL;
static int16_t x906 = 9;
int32_t t92 = 4;
int16_t x935 = INT16_MAX;
int64_t x936 = 2066440255LL;
uint64_t t93 = 50614486643799LLU;
int32_t t94 = -28946;
uint64_t t96 = 31325063903458512LLU;
volatile int16_t x970 = INT16_MIN;
volatile int64_t x971 = INT64_MIN;
uint32_t x983 = 0U;
static int32_t t99 = 1;


void f0(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static uint32_t x11 = UINT32_MAX;
	static uint16_t x12 = UINT16_MAX;
	volatile uint32_t t0 = 16698469U;

	t0 = ((x9>>(x10<=x11))*x12);

	if (t0 != 2147418113U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x13 = 274489777242035LL;
	uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 14441U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t1 = 13LLU;

	t1 = ((x13>>(x14<=x15))*x16);

	if (t1 != 18446469583932309581LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MIN;
	int8_t x31 = 1;
	volatile int64_t t2 = 4988016953220012LL;

	t2 = ((x29>>(x30<=x31))*x32);

	if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x53 = UINT8_MAX;
	static volatile uint8_t x54 = 4U;
	static uint32_t x56 = 1746652U;

	t3 = ((x53>>(x54<=x55))*x56);

	if (t3 != 221824804U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x61 = INT32_MAX;
	int32_t x62 = 3;
	static uint16_t x63 = UINT16_MAX;
	uint64_t x64 = 24145539547400LLU;
	volatile uint64_t t4 = 7LLU;

	t4 = ((x61>>(x62<=x63))*x64);

	if (t4 != 8400227381950889720LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x77 = 1147452183937842LLU;
	uint32_t x79 = 93235U;
	uint64_t t5 = 5848413496103515267LLU;

	t5 = ((x77>>(x78<=x79))*x80);

	if (t5 != 3959969431348466404LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x93 = 21U;
	uint16_t x94 = 17U;
	uint16_t x95 = 148U;
	int16_t x96 = 2956;
	int32_t t6 = 18;

	t6 = ((x93>>(x94<=x95))*x96);

	if (t6 != 29560) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	int64_t t7 = 358251548048933106LL;

	t7 = ((x97>>(x98<=x99))*x100);

	if (t7 != -3LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x101 = 4;
	static uint8_t x102 = 75U;
	int16_t x103 = INT16_MAX;
	volatile int32_t x104 = 0;
	int32_t t8 = -1;

	t8 = ((x101>>(x102<=x103))*x104);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x106 = 15;
	int8_t x107 = -1;
	int16_t x108 = 4846;
	static volatile int32_t t9 = -19218740;

	t9 = ((x105>>(x106<=x107))*x108);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x110 = -3230350;
	int8_t x111 = -1;
	volatile uint32_t t10 = 2161U;

	t10 = ((x109>>(x110<=x111))*x112);

	if (t10 != 2147483393U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x113 = 0U;
	static int32_t x114 = -2;
	uint8_t x115 = UINT8_MAX;
	static volatile int32_t x116 = 6232988;
	uint32_t t11 = 1866U;

	t11 = ((x113>>(x114<=x115))*x116);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x118 = UINT32_MAX;
	int64_t x119 = INT64_MIN;
	int32_t t12 = 27505;

	t12 = ((x117>>(x118<=x119))*x120);

	if (t12 != 16129) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x121 = 32603;
	static uint16_t x123 = 1324U;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t13 = -718;

	t13 = ((x121>>(x122<=x123))*x124);

	if (t13 != -4173184) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x126 = 12722;
	int16_t x127 = INT16_MAX;
	uint8_t x128 = 51U;
	static int32_t t14 = 253;

	t14 = ((x125>>(x126<=x127))*x128);

	if (t14 != 102) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x141 = INT64_MAX;
	uint32_t x142 = UINT32_MAX;
	volatile int32_t x144 = -1;
	volatile int64_t t15 = -3445090954689LL;

	t15 = ((x141>>(x142<=x143))*x144);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x145 = UINT64_MAX;
	int64_t x146 = INT64_MAX;
	static int16_t x147 = 1;
	static uint32_t x148 = UINT32_MAX;
	volatile uint64_t t16 = 906LLU;

	t16 = ((x145>>(x146<=x147))*x148);

	if (t16 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x149 = INT32_MAX;
	volatile int8_t x150 = -1;
	int16_t x151 = INT16_MAX;
	static volatile int8_t x152 = 0;
	volatile int32_t t17 = 132437785;

	t17 = ((x149>>(x150<=x151))*x152);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x162 = -1;
	int64_t x164 = -1LL;

	t18 = ((x161>>(x162<=x163))*x164);

	if (t18 != 18446728836159704560LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x167 = UINT32_MAX;
	int32_t t19 = 526480539;

	t19 = ((x165>>(x166<=x167))*x168);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x169 = UINT16_MAX;
	uint16_t x171 = 43U;
	uint64_t x172 = 1328657761026LLU;
	uint64_t t20 = 671393994966943673LLU;

	t20 = ((x169>>(x170<=x171))*x172);

	if (t20 != 43536128855538942LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x182 = INT64_MIN;
	volatile int64_t x184 = INT64_MIN;
	uint64_t t21 = 6760123074200731174LLU;

	t21 = ((x181>>(x182<=x183))*x184);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x185 = 3U;
	int8_t x186 = INT8_MIN;
	static int32_t x187 = -1;
	static int8_t x188 = INT8_MIN;
	int32_t t22 = 525663335;

	t22 = ((x185>>(x186<=x187))*x188);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x205 = 1;
	static int32_t x206 = INT32_MIN;
	uint32_t x207 = 3631U;
	static volatile int32_t t23 = 10820;

	t23 = ((x205>>(x206<=x207))*x208);

	if (t23 != 67) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x211 = INT64_MIN;
	static volatile uint32_t x212 = 3267039U;

	t24 = ((x209>>(x210<=x211))*x212);

	if (t24 != 833094945U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x213 = 3LLU;
	int32_t x214 = INT32_MIN;
	static uint32_t x216 = 2724029U;

	t25 = ((x213>>(x214<=x215))*x216);

	if (t25 != 2724029LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x217 = 13925U;
	int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MAX;

	t26 = ((x217>>(x218<=x219))*x220);

	if (t26 != 26318250) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x225 = 185277541700941649LLU;
	static int64_t x226 = INT64_MIN;
	uint8_t x227 = 6U;
	volatile int8_t x228 = INT8_MAX;

	t27 = ((x225>>(x226<=x227))*x228);

	if (t27 != 11765123898009794648LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x241 = INT16_MAX;
	volatile int32_t t28 = -77;

	t28 = ((x241>>(x242<=x243))*x244);

	if (t28 != 163835) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x270 = -1;
	static int8_t x271 = 0;
	static int16_t x272 = -1;
	int32_t t29 = 94;

	t29 = ((x269>>(x270<=x271))*x272);

	if (t29 != -1073741823) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x277 = INT16_MAX;
	static volatile uint64_t x278 = 888576603LLU;
	int64_t x279 = INT64_MIN;
	volatile int32_t t30 = -324967;

	t30 = ((x277>>(x278<=x279))*x280);

	if (t30 != -1818513) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x293 = 7;
	int64_t x294 = 7434604432LL;
	int16_t x296 = INT16_MIN;
	int32_t t31 = 1;

	t31 = ((x293>>(x294<=x295))*x296);

	if (t31 != -229376) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x301 = UINT64_MAX;
	int16_t x303 = -5;
	int16_t x304 = -5121;
	uint64_t t32 = 12079684486278747LLU;

	t32 = ((x301>>(x302<=x303))*x304);

	if (t32 != 5121LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x309 = 425U;
	int8_t x310 = 3;
	volatile uint64_t x311 = 6651236538102676850LLU;
	static int64_t x312 = -4LL;
	static volatile int64_t t33 = -2464LL;

	t33 = ((x309>>(x310<=x311))*x312);

	if (t33 != -848LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x313 = 31451542291LLU;
	uint16_t x314 = 16600U;
	static uint64_t x315 = 15969840358994LLU;
	uint64_t x316 = 109880092171331587LLU;
	uint64_t t34 = 3134661062LLU;

	t34 = ((x313>>(x314<=x315))*x316);

	if (t34 != 16621194550717600923LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x318 = INT8_MIN;
	uint8_t x319 = 19U;
	volatile uint16_t x320 = 31201U;
	uint32_t t35 = 5636610U;

	t35 = ((x317>>(x318<=x319))*x320);

	if (t35 != 331077654U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x321 = UINT8_MAX;
	static uint16_t x322 = UINT16_MAX;
	static volatile uint64_t x323 = 2589726674796LLU;
	int64_t x324 = -5501018LL;
	volatile int64_t t36 = -136652940899LL;

	t36 = ((x321>>(x322<=x323))*x324);

	if (t36 != -698629286LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x330 = UINT8_MAX;
	int8_t x332 = -1;
	volatile int32_t t37 = -20713453;

	t37 = ((x329>>(x330<=x331))*x332);

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x333 = UINT64_MAX;
	uint32_t x334 = 52426327U;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MIN;
	volatile uint64_t t38 = 32400982294225LLU;

	t38 = ((x333>>(x334<=x335))*x336);

	if (t38 != 128LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x349 = 3295064U;
	uint32_t x352 = 290U;
	uint32_t t39 = 15056208U;

	t39 = ((x349>>(x350<=x351))*x352);

	if (t39 != 955568560U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x369 = 1U;
	int64_t x371 = 183LL;
	static int32_t x372 = 330618;
	volatile int32_t t40 = -102;

	t40 = ((x369>>(x370<=x371))*x372);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x373 = UINT8_MAX;
	static int8_t x374 = 50;
	static uint16_t x375 = 1073U;
	uint32_t x376 = 10482U;
	static uint32_t t41 = 39064081U;

	t41 = ((x373>>(x374<=x375))*x376);

	if (t41 != 1331214U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x377 = 10240;
	volatile int64_t x378 = -1LL;
	volatile uint8_t x380 = 86U;

	t42 = ((x377>>(x378<=x379))*x380);

	if (t42 != 440320) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x381 = 1491U;
	volatile int16_t x382 = -1;
	int8_t x383 = 7;
	volatile int8_t x384 = INT8_MIN;

	t43 = ((x381>>(x382<=x383))*x384);

	if (t43 != -95360) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x386 = INT64_MIN;
	static uint8_t x387 = 0U;
	uint32_t x388 = 13632U;
	uint32_t t44 = 110182U;

	t44 = ((x385>>(x386<=x387))*x388);

	if (t44 != 446679744U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x389 = 1U;
	uint64_t x390 = 965046981542LLU;
	static volatile uint64_t x391 = 4574534663836997399LLU;
	int8_t x392 = -16;
	static volatile int32_t t45 = 0;

	t45 = ((x389>>(x390<=x391))*x392);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x397 = 127578LLU;
	uint8_t x398 = 19U;
	int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MAX;

	t46 = ((x397>>(x398<=x399))*x400);

	if (t46 != 8101203LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x418 = -1;
	int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;

	t47 = ((x417>>(x418<=x419))*x420);

	if (t47 != -171776) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x437 = 6;
	static volatile int32_t x438 = 12;
	static volatile uint64_t x440 = UINT64_MAX;
	volatile uint64_t t48 = 12LLU;

	t48 = ((x437>>(x438<=x439))*x440);

	if (t48 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x450 = -1;
	int16_t x451 = INT16_MIN;
	static uint64_t x452 = 908791312385721283LLU;
	volatile uint64_t t49 = 3297933193181LLU;

	t49 = ((x449>>(x450<=x451))*x452);

	if (t49 != 6080561912334101055LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x457 = 1939024130513LLU;
	static volatile int8_t x458 = -1;
	int16_t x459 = -1;
	int64_t x460 = INT64_MAX;
	volatile uint64_t t50 = 10LLU;

	t50 = ((x457>>(x458<=x459))*x460);

	if (t50 != 18446743104197486360LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x465 = 1LL;
	int64_t x466 = INT64_MIN;
	volatile int64_t x468 = -306229345322716034LL;
	int64_t t51 = 3665LL;

	t51 = ((x465>>(x466<=x467))*x468);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x501 = 11337LL;
	static int16_t x502 = INT16_MIN;
	static int64_t t52 = 125252566LL;

	t52 = ((x501>>(x502<=x503))*x504);

	if (t52 != -5668LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x505 = UINT64_MAX;
	uint32_t x506 = 5384U;
	int64_t x508 = INT64_MIN;
	uint64_t t53 = 8876526215234LLU;

	t53 = ((x505>>(x506<=x507))*x508);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x513 = UINT8_MAX;
	int64_t x514 = -92LL;
	uint32_t x515 = 15853U;
	int8_t x516 = INT8_MAX;

	t54 = ((x513>>(x514<=x515))*x516);

	if (t54 != 16129) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x517 = 4365387506741LLU;
	volatile int8_t x518 = 1;
	int32_t x519 = INT32_MIN;
	static int16_t x520 = INT16_MIN;

	t55 = ((x517>>(x518<=x519))*x520);

	if (t55 != 18303699055888662528LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x529 = UINT32_MAX;
	volatile int32_t x530 = -1;
	int32_t x531 = -1;
	int8_t x532 = -19;
	static uint32_t t56 = 2018397U;

	t56 = ((x529>>(x530<=x531))*x532);

	if (t56 != 2147483667U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x533 = 867780U;
	int32_t x534 = -4684538;
	uint64_t x535 = 2426LLU;
	static volatile uint32_t t57 = 7834778U;

	t57 = ((x533>>(x534<=x535))*x536);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x538 = INT32_MAX;
	int8_t x539 = 44;
	int16_t x540 = INT16_MIN;
	int32_t t58 = 5393485;

	t58 = ((x537>>(x538<=x539))*x540);

	if (t58 != -8355840) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x545 = INT8_MAX;
	int32_t x546 = INT32_MAX;
	static int16_t x547 = -38;
	volatile int64_t t59 = -87379167847391746LL;

	t59 = ((x545>>(x546<=x547))*x548);

	if (t59 != -7620LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x557 = 8U;
	uint32_t x558 = 2815547U;
	volatile int64_t x559 = INT64_MIN;
	static int8_t x560 = INT8_MAX;
	static int32_t t60 = -531;

	t60 = ((x557>>(x558<=x559))*x560);

	if (t60 != 1016) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x565 = 1;
	uint8_t x566 = UINT8_MAX;
	volatile uint32_t x567 = UINT32_MAX;
	static int32_t x568 = INT32_MIN;
	volatile int32_t t61 = -172655237;

	t61 = ((x565>>(x566<=x567))*x568);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x570 = -1;
	uint32_t x571 = 2043906U;
	static volatile uint16_t x572 = 21989U;

	t62 = ((x569>>(x570<=x571))*x572);

	if (t62 != 2616691) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x577 = 29942LL;
	uint16_t x578 = 62U;
	static int8_t x579 = 1;
	uint8_t x580 = UINT8_MAX;
	volatile int64_t t63 = 3048110LL;

	t63 = ((x577>>(x578<=x579))*x580);

	if (t63 != 7635210LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x581 = UINT8_MAX;
	static volatile uint16_t x582 = 3U;
	int8_t x583 = -2;
	int32_t t64 = -42;

	t64 = ((x581>>(x582<=x583))*x584);

	if (t64 != -2037450) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x585 = 269337830U;
	uint64_t x586 = 399LLU;
	uint8_t x587 = UINT8_MAX;
	uint64_t x588 = 9222LLU;
	volatile uint64_t t65 = 122LLU;

	t65 = ((x585>>(x586<=x587))*x588);

	if (t65 != 2483833468260LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x594 = 2311U;
	volatile int32_t t66 = -37;

	t66 = ((x593>>(x594<=x595))*x596);

	if (t66 != 35868) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MAX;
	volatile int64_t x616 = -1LL;
	int64_t t67 = -306247684746LL;

	t67 = ((x613>>(x614<=x615))*x616);

	if (t67 != -63LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x617 = 115;
	uint16_t x618 = UINT16_MAX;
	static uint32_t x620 = 429U;
	uint32_t t68 = 62U;

	t68 = ((x617>>(x618<=x619))*x620);

	if (t68 != 49335U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x629 = INT32_MAX;
	int8_t x630 = INT8_MIN;
	volatile uint8_t x631 = 0U;
	int32_t t69 = 568742987;

	t69 = ((x629>>(x630<=x631))*x632);

	if (t69 != -1073741823) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x714 = -1;
	int16_t x715 = 2325;
	int8_t x716 = INT8_MIN;
	static uint64_t t70 = 70343696938006434LLU;

	t70 = ((x713>>(x714<=x715))*x716);

	if (t70 != 18446700588665989888LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x729 = UINT8_MAX;
	uint64_t x730 = UINT64_MAX;
	int32_t x731 = -15;
	int32_t t71 = 33;

	t71 = ((x729>>(x730<=x731))*x732);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x745 = 25LLU;
	volatile uint32_t x746 = UINT32_MAX;
	int32_t x747 = INT32_MIN;
	uint64_t t72 = 1LLU;

	t72 = ((x745>>(x746<=x747))*x748);

	if (t72 != 50LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x750 = INT16_MIN;
	uint16_t x751 = 5343U;
	uint8_t x752 = 1U;
	uint32_t t73 = 378U;

	t73 = ((x749>>(x750<=x751))*x752);

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x762 = 1143244073878477705LLU;
	int16_t x763 = -1107;
	static uint32_t x764 = UINT32_MAX;
	volatile uint32_t t74 = 523433U;

	t74 = ((x761>>(x762<=x763))*x764);

	if (t74 != 4294950913U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x777 = INT8_MAX;
	static uint8_t x778 = UINT8_MAX;
	int32_t x779 = -1;
	volatile int16_t x780 = -5823;
	volatile int32_t t75 = -65943857;

	t75 = ((x777>>(x778<=x779))*x780);

	if (t75 != -739521) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x781 = UINT64_MAX;
	int16_t x782 = -1;
	int8_t x783 = INT8_MIN;
	static uint32_t x784 = 7933U;
	volatile uint64_t t76 = 1285LLU;

	t76 = ((x781>>(x782<=x783))*x784);

	if (t76 != 18446744073709543683LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x805 = UINT32_MAX;
	uint16_t x806 = 218U;
	volatile int32_t x807 = INT32_MIN;
	volatile int8_t x808 = INT8_MIN;
	volatile uint32_t t77 = 33U;

	t77 = ((x805>>(x806<=x807))*x808);

	if (t77 != 128U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x817 = UINT64_MAX;
	int8_t x818 = INT8_MAX;
	volatile uint16_t x819 = UINT16_MAX;
	volatile uint32_t x820 = 3377U;
	static volatile uint64_t t78 = 22508825382754LLU;

	t78 = ((x817>>(x818<=x819))*x820);

	if (t78 != 9223372036854772431LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x821 = 5U;
	int64_t x822 = INT64_MAX;
	int8_t x823 = INT8_MAX;
	uint16_t x824 = 5U;
	volatile int32_t t79 = 8;

	t79 = ((x821>>(x822<=x823))*x824);

	if (t79 != 25) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x825 = UINT32_MAX;
	uint64_t x826 = 1209910LLU;
	uint64_t x828 = 533533323LLU;
	volatile uint64_t t80 = 2365264LLU;

	t80 = ((x825>>(x826<=x827))*x828);

	if (t80 != 2291508173077671285LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x841 = 35U;
	int8_t x842 = INT8_MAX;
	int8_t x843 = 1;
	int32_t t81 = 10312302;

	t81 = ((x841>>(x842<=x843))*x844);

	if (t81 != 595) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x849 = INT64_MAX;
	volatile uint64_t x850 = 14515LLU;
	static int64_t x851 = 10602431744LL;
	uint64_t x852 = 5LLU;
	uint64_t t82 = 143756193542LLU;

	t82 = ((x849>>(x850<=x851))*x852);

	if (t82 != 4611686018427387899LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x865 = 501825LL;
	static uint64_t x866 = 2527LLU;
	int64_t x867 = 1844973LL;
	volatile int64_t t83 = 2LL;

	t83 = ((x865>>(x866<=x867))*x868);

	if (t83 != 9785568LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x870 = 7148U;
	int64_t x871 = -1LL;
	uint16_t x872 = 20U;

	t84 = ((x869>>(x870<=x871))*x872);

	if (t84 != 2540) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x873 = 2004;
	int64_t x874 = -958298485LL;
	int64_t x875 = 36862329LL;
	uint32_t x876 = 1868U;
	static volatile uint32_t t85 = 242273U;

	t85 = ((x873>>(x874<=x875))*x876);

	if (t85 != 1871736U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x881 = INT16_MAX;
	uint8_t x883 = 19U;
	uint32_t x884 = UINT32_MAX;
	volatile uint32_t t86 = 327U;

	t86 = ((x881>>(x882<=x883))*x884);

	if (t86 != 4294934529U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x885 = 7926888841896LLU;
	static uint64_t x887 = 98LLU;
	int16_t x888 = INT16_MIN;
	uint64_t t87 = 583935539LLU;

	t87 = ((x885>>(x886<=x887))*x888);

	if (t87 != 18186995780138303488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x889 = 17U;
	volatile int8_t x890 = INT8_MAX;
	static uint8_t x892 = 38U;
	volatile int32_t t88 = 119808164;

	t88 = ((x889>>(x890<=x891))*x892);

	if (t88 != 646) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x901 = 741U;
	int8_t x902 = 0;
	int64_t t89 = 36803116064LL;

	t89 = ((x901>>(x902<=x903))*x904);

	if (t89 != -370LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x905 = 1018183415965911338LL;
	int32_t x907 = INT32_MAX;
	volatile uint64_t x908 = UINT64_MAX;
	volatile uint64_t t90 = 46799LLU;

	t90 = ((x905>>(x906<=x907))*x908);

	if (t90 != 17937652365726595947LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x921 = 0U;
	int16_t x922 = -763;
	int8_t x923 = INT8_MAX;
	static int64_t x924 = INT64_MAX;
	volatile int64_t t91 = 0LL;

	t91 = ((x921>>(x922<=x923))*x924);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x929 = 2013;
	volatile int64_t x930 = INT64_MAX;
	int64_t x931 = INT64_MIN;
	volatile int16_t x932 = INT16_MAX;

	t92 = ((x929>>(x930<=x931))*x932);

	if (t92 != 65959971) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x933 = UINT64_MAX;
	int32_t x934 = 1056932866;

	t93 = ((x933>>(x934<=x935))*x936);

	if (t93 != 18446744071643111361LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x945 = INT16_MAX;
	int8_t x946 = INT8_MIN;
	uint32_t x947 = 1335480U;
	volatile int16_t x948 = INT16_MAX;

	t94 = ((x945>>(x946<=x947))*x948);

	if (t94 != 1073676289) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x949 = 450U;
	volatile int8_t x950 = INT8_MAX;
	static int16_t x951 = -1;
	uint16_t x952 = 9U;
	int32_t t95 = -91842;

	t95 = ((x949>>(x950<=x951))*x952);

	if (t95 != 4050) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x965 = 58552;
	volatile int16_t x966 = INT16_MAX;
	int16_t x967 = 11803;
	volatile uint64_t x968 = 8471874907586399931LLU;

	t96 = ((x965>>(x966<=x967))*x968);

	if (t96 != 12271446949045805672LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x969 = 4U;
	volatile int16_t x972 = -1;
	uint32_t t97 = 2U;

	t97 = ((x969>>(x970<=x971))*x972);

	if (t97 != 4294967292U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x977 = INT8_MAX;
	int64_t x978 = INT64_MAX;
	uint16_t x979 = UINT16_MAX;
	uint8_t x980 = 3U;
	static int32_t t98 = 1609806;

	t98 = ((x977>>(x978<=x979))*x980);

	if (t98 != 381) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x981 = UINT16_MAX;
	volatile uint32_t x982 = 0U;
	int16_t x984 = -11;

	t99 = ((x981>>(x982<=x983))*x984);

	if (t99 != -360437) { NG(); } else { ; }
	
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

