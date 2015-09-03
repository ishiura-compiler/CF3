#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 234342LLU;
uint8_t x4 = UINT8_MAX;
int32_t x19 = 7234;
static volatile uint8_t x31 = 13U;
volatile int32_t t3 = -323;
uint32_t x35 = UINT32_MAX;
volatile int16_t x57 = 6;
static uint64_t x60 = 45781155LLU;
int64_t t9 = INT64_MIN;
int64_t x73 = 58879980856856018LL;
static int16_t x74 = INT16_MAX;
volatile uint32_t x75 = 228446021U;
int16_t x76 = -1726;
volatile int64_t t11 = 9260167900LL;
static uint8_t x96 = UINT8_MAX;
volatile int32_t t13 = 918;
int64_t x101 = 1LL;
volatile int64_t t14 = -7572368269793777LL;
volatile uint64_t x105 = UINT64_MAX;
volatile int64_t x109 = INT64_MAX;
uint8_t x111 = UINT8_MAX;
volatile int64_t t16 = -74856543463LL;
static uint64_t x114 = UINT64_MAX;
int32_t t20 = 923445;
uint8_t x138 = 3U;
uint16_t x139 = 7802U;
uint16_t x145 = 0U;
int64_t x146 = INT64_MIN;
int8_t x148 = -1;
volatile int32_t t24 = 253;
uint64_t x162 = UINT64_MAX;
int64_t x164 = -722LL;
volatile int64_t t25 = -2763959946LL;
int32_t x171 = INT32_MIN;
volatile int32_t t26 = -1;
volatile uint64_t t27 = 1117607LLU;
static volatile uint64_t x184 = 454843396LLU;
int64_t x198 = 176212726807970LL;
volatile int8_t x202 = -2;
int64_t x229 = INT64_MAX;
static int64_t x231 = INT64_MIN;
volatile int32_t t34 = -1;
uint16_t x246 = 2064U;
uint16_t x260 = 775U;
volatile int32_t t37 = -10999936;
int32_t x280 = -1;
uint32_t t40 = 2018027U;
volatile uint8_t x287 = UINT8_MAX;
uint8_t x313 = 2U;
uint8_t x314 = 28U;
int64_t x328 = INT64_MIN;
volatile int64_t t47 = 516457542915952811LL;
static int8_t x331 = 2;
volatile int32_t t48 = INT32_MIN;
static int64_t x349 = 3611548LL;
volatile uint8_t x352 = 13U;
volatile int64_t t50 = 3502LL;
uint64_t x353 = 25495728424503947LLU;
static volatile uint64_t x355 = 186998495480189LLU;
static volatile uint64_t t51 = 185971LLU;
static uint16_t x380 = UINT16_MAX;
int64_t t59 = -5LL;
volatile uint8_t x397 = 3U;
uint32_t x406 = 341483231U;
uint8_t x444 = UINT8_MAX;
uint8_t x446 = UINT8_MAX;
static int8_t x454 = INT8_MIN;
volatile int32_t x460 = -9727486;
volatile int16_t x469 = 10;
int16_t x474 = 5;
static int64_t x477 = 67368835718LL;
static uint8_t x497 = 0U;
int8_t x498 = -1;
volatile uint64_t t75 = 3892951291LLU;
uint8_t x515 = UINT8_MAX;
static uint32_t t77 = 2479U;
uint16_t x535 = 14U;
static int64_t x539 = INT64_MIN;
int32_t x543 = -1;
static int64_t x546 = INT64_MIN;
int32_t x556 = 265126052;
int32_t t82 = -1522218;
static volatile uint16_t x561 = UINT16_MAX;
uint8_t x562 = 14U;
volatile uint64_t t85 = 21LLU;
int16_t x578 = INT16_MIN;
uint16_t x588 = 130U;
volatile uint32_t x601 = 1590U;
int8_t x602 = 0;
static uint32_t x617 = 127599521U;
static volatile int8_t x623 = -1;
uint8_t x625 = UINT8_MAX;
int8_t x634 = -15;
int32_t x635 = INT32_MAX;
static int32_t x638 = -1;
uint8_t x642 = 45U;
int16_t x651 = INT16_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int16_t x2 = -6449;
	int32_t t0 = 982672201;

	t0 = ((x1>>(x2<x3))^x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 19565267U;
	volatile uint8_t x10 = UINT8_MAX;
	volatile int16_t x11 = 38;
	uint16_t x12 = UINT16_MAX;
	volatile uint32_t t1 = 64736534U;

	t1 = ((x9>>(x10<x11))^x12);

	if (t1 != 19559724U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x17 = INT8_MAX;
	uint16_t x18 = 254U;
	static int32_t x20 = -54291;
	volatile int32_t t2 = 111944;

	t2 = ((x17>>(x18<x19))^x20);

	if (t2 != -54318) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = 30;
	uint16_t x30 = 2U;
	int8_t x32 = INT8_MIN;

	t3 = ((x29>>(x30<x31))^x32);

	if (t3 != -113) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = INT64_MAX;
	int16_t x34 = INT16_MIN;
	volatile int64_t x36 = -1LL;
	static volatile int64_t t4 = -83171LL;

	t4 = ((x33>>(x34<x35))^x36);

	if (t4 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 94U;
	uint16_t x40 = UINT16_MAX;
	int32_t t5 = -2;

	t5 = ((x37>>(x38<x39))^x40);

	if (t5 != 65408) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 2883U;
	int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MAX;
	int64_t x48 = INT64_MIN;
	int64_t t6 = -8101613957054342LL;

	t6 = ((x45>>(x46<x47))^x48);

	if (t6 != -9223372036854774367LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x53 = 39U;
	int32_t x54 = -1;
	static volatile int8_t x55 = 1;
	volatile uint16_t x56 = 219U;
	static int32_t t7 = 821;

	t7 = ((x53>>(x54<x55))^x56);

	if (t7 != 200) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x58 = INT8_MIN;
	int8_t x59 = -62;
	volatile uint64_t t8 = 1027722929226610360LLU;

	t8 = ((x57>>(x58<x59))^x60);

	if (t8 != 45781152LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x61 = INT64_MAX;
	int32_t x62 = 8;
	int8_t x63 = INT8_MIN;
	int32_t x64 = -1;

	t9 = ((x61>>(x62<x63))^x64);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x69 = 1772946U;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t10 = 852601U;

	t10 = ((x69>>(x70<x71))^x72);

	if (t10 != 4293194349U) { NG(); } else { ; }
	
}

void f11(void) {


	t11 = ((x73>>(x74<x75))^x76);

	if (t11 != -29439990428426325LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = 2U;
	uint8_t x94 = UINT8_MAX;
	volatile int64_t x95 = 10774395234415LL;
	volatile int32_t t12 = 1784;

	t12 = ((x93>>(x94<x95))^x96);

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x97 = 7U;
	uint32_t x98 = UINT32_MAX;
	static volatile uint16_t x99 = 30U;
	int8_t x100 = INT8_MAX;

	t13 = ((x97>>(x98<x99))^x100);

	if (t13 != 120) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x102 = 7500U;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 123U;

	t14 = ((x101>>(x102<x103))^x104);

	if (t14 != 122LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	static uint64_t t15 = 18LLU;

	t15 = ((x105>>(x106<x107))^x108);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x110 = INT64_MIN;
	static uint32_t x112 = 610890U;

	t16 = ((x109>>(x110<x111))^x112);

	if (t16 != 4611686018426777013LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x113 = 1U;
	volatile int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t17 = 3858;

	t17 = ((x113>>(x114<x115))^x116);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x117 = 8999U;
	int16_t x118 = INT16_MIN;
	static int8_t x119 = -1;
	static int32_t x120 = -1;
	static volatile int32_t t18 = 308846485;

	t18 = ((x117>>(x118<x119))^x120);

	if (t18 != -4500) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MAX;
	static uint16_t x123 = 3U;
	uint8_t x124 = 0U;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = ((x121>>(x122<x123))^x124);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x125 = 14365;
	static uint64_t x126 = 9101288900LLU;
	volatile int64_t x127 = -23715748679336183LL;
	volatile int8_t x128 = INT8_MIN;

	t20 = ((x125>>(x126<x127))^x128);

	if (t20 != -7282) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x137 = 1U;
	static uint32_t x140 = 4U;
	uint32_t t21 = 987031U;

	t21 = ((x137>>(x138<x139))^x140);

	if (t21 != 4U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x141 = 12438U;
	static int64_t x142 = INT64_MIN;
	int8_t x143 = -1;
	static int32_t x144 = -77479599;
	int32_t t22 = 469005984;

	t22 = ((x141>>(x142<x143))^x144);

	if (t22 != -77473510) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x147 = 14U;
	volatile int32_t t23 = -231960927;

	t23 = ((x145>>(x146<x147))^x148);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = 0;
	volatile uint8_t x150 = UINT8_MAX;
	volatile int8_t x151 = INT8_MAX;
	int32_t x152 = 51494;

	t24 = ((x149>>(x150<x151))^x152);

	if (t24 != 51494) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x161 = INT16_MAX;
	int16_t x163 = INT16_MIN;

	t25 = ((x161>>(x162<x163))^x164);

	if (t25 != -32047LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	uint8_t x172 = 50U;

	t26 = ((x169>>(x170<x171))^x172);

	if (t26 != 77) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x173 = UINT64_MAX;
	static volatile uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = UINT16_MAX;

	t27 = ((x173>>(x174<x175))^x176);

	if (t27 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x177 = 1U;
	static int32_t x178 = INT32_MIN;
	uint32_t x179 = 405U;
	uint16_t x180 = 10365U;
	static int32_t t28 = 42323;

	t28 = ((x177>>(x178<x179))^x180);

	if (t28 != 10364) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x181 = 11945U;
	int8_t x182 = 1;
	int64_t x183 = 901737861191993333LL;
	uint64_t t29 = 820826858819LLU;

	t29 = ((x181>>(x182<x183))^x184);

	if (t29 != 454839120LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x185 = UINT64_MAX;
	static int8_t x186 = 1;
	static volatile int32_t x187 = -8144;
	static int16_t x188 = 1842;
	uint64_t t30 = 371370LLU;

	t30 = ((x185>>(x186<x187))^x188);

	if (t30 != 18446744073709549773LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x197 = UINT64_MAX;
	uint8_t x199 = 7U;
	int32_t x200 = INT32_MAX;
	volatile uint64_t t31 = 3LLU;

	t31 = ((x197>>(x198<x199))^x200);

	if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MAX;
	volatile uint64_t t32 = 157117LLU;

	t32 = ((x201>>(x202<x203))^x204);

	if (t32 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x230 = 8203695264735145366LLU;
	uint32_t x232 = 617447U;
	int64_t t33 = -19682LL;

	t33 = ((x229>>(x230<x231))^x232);

	if (t33 != 4611686018426770456LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x233 = UINT8_MAX;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -1;
	static int8_t x236 = INT8_MIN;

	t34 = ((x233>>(x234<x235))^x236);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x245 = 1024U;
	int16_t x247 = -5;
	int16_t x248 = -1;
	uint32_t t35 = 1711934U;

	t35 = ((x245>>(x246<x247))^x248);

	if (t35 != 4294966271U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x253 = 1;
	volatile int16_t x254 = 1;
	volatile int8_t x255 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t36 = 3125858098602LLU;

	t36 = ((x253>>(x254<x255))^x256);

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x257 = INT16_MAX;
	int64_t x258 = -1LL;
	volatile uint16_t x259 = 8U;

	t37 = ((x257>>(x258<x259))^x260);

	if (t37 != 15608) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x265 = 150U;
	int8_t x266 = -1;
	int32_t x267 = 352823;
	int32_t x268 = 9654;
	volatile int32_t t38 = 602153842;

	t38 = ((x265>>(x266<x267))^x268);

	if (t38 != 9725) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x273 = 62598041LLU;
	volatile uint16_t x274 = UINT16_MAX;
	int8_t x275 = INT8_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t39 = 3882244LLU;

	t39 = ((x273>>(x274<x275))^x276);

	if (t39 != 18446744073646953574LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x277 = UINT32_MAX;
	uint8_t x278 = 4U;
	static int16_t x279 = INT16_MIN;

	t40 = ((x277>>(x278<x279))^x280);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x285 = 32U;
	static int64_t x286 = INT64_MIN;
	int8_t x288 = -1;
	int32_t t41 = 501763758;

	t41 = ((x285>>(x286<x287))^x288);

	if (t41 != -17) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x297 = 1092136526995LLU;
	static uint32_t x298 = 0U;
	int8_t x299 = INT8_MAX;
	int32_t x300 = 22886708;
	volatile uint64_t t42 = 754577052LLU;

	t42 = ((x297>>(x298<x299))^x300);

	if (t42 != 546088504189LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x305 = 15U;
	uint64_t x306 = 2570012552827841384LLU;
	volatile int8_t x307 = -1;
	int16_t x308 = INT16_MAX;
	int32_t t43 = 633704684;

	t43 = ((x305>>(x306<x307))^x308);

	if (t43 != 32760) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x309 = 26LLU;
	uint64_t x310 = 9243587LLU;
	uint8_t x311 = 89U;
	int32_t x312 = INT32_MIN;
	uint64_t t44 = 1519562650651LLU;

	t44 = ((x309>>(x310<x311))^x312);

	if (t44 != 18446744071562067994LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x315 = 468727244;
	static volatile int16_t x316 = INT16_MAX;
	volatile int32_t t45 = 31781;

	t45 = ((x313>>(x314<x315))^x316);

	if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x317 = 1U;
	uint32_t x318 = 185515563U;
	volatile uint16_t x319 = 0U;
	uint16_t x320 = 88U;
	static volatile int32_t t46 = -7;

	t46 = ((x317>>(x318<x319))^x320);

	if (t46 != 89) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MIN;
	volatile int8_t x327 = INT8_MAX;

	t47 = ((x325>>(x326<x327))^x328);

	if (t47 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x329 = INT32_MAX;
	uint16_t x330 = UINT16_MAX;
	static int16_t x332 = -1;

	t48 = ((x329>>(x330<x331))^x332);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x345 = 8290816540122479LLU;
	uint16_t x346 = 510U;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MAX;
	volatile uint64_t t49 = 109992813811150785LLU;

	t49 = ((x345>>(x346<x347))^x348);

	if (t49 != 4145408270053704LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x350 = -1575;
	int64_t x351 = 27712211939274LL;

	t50 = ((x349>>(x350<x351))^x352);

	if (t50 != 1805763LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x354 = -15;
	uint16_t x356 = UINT16_MAX;

	t51 = ((x353>>(x354<x355))^x356);

	if (t51 != 25495728424531316LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x357 = 843046LLU;
	volatile int64_t x358 = -184959246834960533LL;
	static volatile int16_t x359 = INT16_MIN;
	int32_t x360 = 1;
	uint64_t t52 = 12447LLU;

	t52 = ((x357>>(x358<x359))^x360);

	if (t52 != 421522LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x365 = 1;
	int8_t x366 = -35;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = 1621;
	volatile int32_t t53 = 292587;

	t53 = ((x365>>(x366<x367))^x368);

	if (t53 != 1620) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x369 = 10356U;
	static int32_t x370 = INT32_MAX;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = UINT64_MAX;
	uint64_t t54 = 13365488LLU;

	t54 = ((x369>>(x370<x371))^x372);

	if (t54 != 18446744073709541259LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x377 = 3171882076509927LL;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -1;
	int64_t t55 = -3303286974982759532LL;

	t55 = ((x377>>(x378<x379))^x380);

	if (t55 != 1585941038281868LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x381 = 101U;
	static int16_t x382 = 1;
	volatile int64_t x383 = INT64_MAX;
	uint32_t x384 = 49899568U;
	uint32_t t56 = 2104U;

	t56 = ((x381>>(x382<x383))^x384);

	if (t56 != 49899522U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x385 = 41895920LLU;
	int8_t x386 = -5;
	int16_t x387 = -10493;
	int8_t x388 = -41;
	volatile uint64_t t57 = 31826229157025LLU;

	t57 = ((x385>>(x386<x387))^x388);

	if (t57 != 18446744073667655719LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x389 = 256760U;
	int64_t x390 = INT64_MIN;
	static uint32_t x391 = 1U;
	int32_t x392 = INT32_MIN;
	uint32_t t58 = 14494767U;

	t58 = ((x389>>(x390<x391))^x392);

	if (t58 != 2147612028U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x393 = 6954;
	int16_t x394 = -2282;
	static int64_t x395 = -1LL;
	volatile int64_t x396 = INT64_MIN;

	t59 = ((x393>>(x394<x395))^x396);

	if (t59 != -9223372036854772331LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 124208911U;
	int32_t x400 = INT32_MIN;
	int32_t t60 = 538;

	t60 = ((x397>>(x398<x399))^x400);

	if (t60 != -2147483645) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x401 = INT64_MAX;
	int8_t x402 = INT8_MIN;
	static uint8_t x403 = UINT8_MAX;
	int8_t x404 = 29;
	static int64_t t61 = -1901569769LL;

	t61 = ((x401>>(x402<x403))^x404);

	if (t61 != 4611686018427387874LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x405 = 411U;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	static int32_t t62 = 22345;

	t62 = ((x405>>(x406<x407))^x408);

	if (t62 != -179) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x425 = UINT64_MAX;
	uint8_t x426 = 3U;
	static uint32_t x427 = UINT32_MAX;
	int8_t x428 = -1;
	volatile uint64_t t63 = 344053194LLU;

	t63 = ((x425>>(x426<x427))^x428);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x437 = 229838137U;
	static int8_t x438 = -2;
	volatile int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MIN;
	volatile uint32_t t64 = 52586258U;

	t64 = ((x437>>(x438<x439))^x440);

	if (t64 != 4065129145U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x441 = INT32_MAX;
	volatile int16_t x442 = -1;
	static int64_t x443 = 672LL;
	int32_t t65 = 272;

	t65 = ((x441>>(x442<x443))^x444);

	if (t65 != 1073741568) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x445 = INT64_MAX;
	int16_t x447 = 3174;
	volatile uint64_t x448 = 3267455130033834187LLU;
	volatile uint64_t t66 = 237197739081LLU;

	t66 = ((x445>>(x446<x447))^x448);

	if (t66 != 1344230888393553716LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x453 = 6497971U;
	int64_t x455 = INT64_MIN;
	uint16_t x456 = UINT16_MAX;
	uint32_t t67 = 0U;

	t67 = ((x453>>(x454<x455))^x456);

	if (t67 != 6543692U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x457 = 0;
	volatile uint64_t x458 = 385612623848687019LLU;
	int64_t x459 = 1193748318356115080LL;
	int32_t t68 = 19;

	t68 = ((x457>>(x458<x459))^x460);

	if (t68 != -9727486) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x465 = 132030211792LL;
	int64_t x466 = INT64_MIN;
	int16_t x467 = INT16_MAX;
	int32_t x468 = INT32_MIN;
	volatile int64_t t69 = 14989LL;

	t69 = ((x465>>(x466<x467))^x468);

	if (t69 != -64981396632LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x470 = 935268;
	static volatile uint32_t x471 = 0U;
	int32_t x472 = INT32_MAX;
	volatile int32_t t70 = -40270845;

	t70 = ((x469>>(x470<x471))^x472);

	if (t70 != 2147483637) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x473 = INT16_MAX;
	int8_t x475 = INT8_MIN;
	uint64_t x476 = UINT64_MAX;
	static volatile uint64_t t71 = 0LLU;

	t71 = ((x473>>(x474<x475))^x476);

	if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x478 = INT64_MIN;
	static volatile int8_t x479 = -1;
	uint8_t x480 = 5U;
	int64_t t72 = -20209640357LL;

	t72 = ((x477>>(x478<x479))^x480);

	if (t72 != 33684417862LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x493 = 0;
	int32_t x494 = INT32_MAX;
	int16_t x495 = INT16_MIN;
	static volatile int32_t x496 = -1;
	int32_t t73 = 818172497;

	t73 = ((x493>>(x494<x495))^x496);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x499 = 1LL;
	int32_t x500 = -1;
	volatile int32_t t74 = -13693624;

	t74 = ((x497>>(x498<x499))^x500);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x509 = 120701;
	static int16_t x510 = INT16_MIN;
	uint64_t x511 = 57952678063LLU;
	uint64_t x512 = 679LLU;

	t75 = ((x509>>(x510<x511))^x512);

	if (t75 != 120282LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x513 = 10U;
	static volatile int8_t x514 = INT8_MIN;
	volatile int64_t x516 = INT64_MIN;
	volatile int64_t t76 = 2307LL;

	t76 = ((x513>>(x514<x515))^x516);

	if (t76 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x517 = 48U;
	int16_t x518 = 0;
	static uint16_t x519 = 4U;
	static volatile int32_t x520 = 82774165;

	t77 = ((x517>>(x518<x519))^x520);

	if (t77 != 82774157U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x533 = UINT64_MAX;
	static volatile uint8_t x534 = UINT8_MAX;
	volatile uint8_t x536 = UINT8_MAX;
	uint64_t t78 = 366501LLU;

	t78 = ((x533>>(x534<x535))^x536);

	if (t78 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x537 = 1;
	static uint64_t x538 = UINT64_MAX;
	static int16_t x540 = -1;
	static volatile int32_t t79 = 199233996;

	t79 = ((x537>>(x538<x539))^x540);

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x541 = 505877744;
	static int16_t x542 = INT16_MIN;
	volatile int8_t x544 = 1;
	static volatile int32_t t80 = 17296;

	t80 = ((x541>>(x542<x543))^x544);

	if (t80 != 252938873) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x545 = UINT32_MAX;
	uint8_t x547 = UINT8_MAX;
	int64_t x548 = 61098701517538LL;
	int64_t t81 = -164576219645927611LL;

	t81 = ((x545>>(x546<x547))^x548);

	if (t81 != 61099560504605LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x553 = 276U;
	int8_t x554 = INT8_MAX;
	int16_t x555 = -1;

	t82 = ((x553>>(x554<x555))^x556);

	if (t82 != 265126320) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x563 = UINT32_MAX;
	int64_t x564 = -81661311574789450LL;
	static volatile int64_t t83 = 11989126LL;

	t83 = ((x561>>(x562<x563))^x564);

	if (t83 != -81661311574782647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x569 = 34;
	volatile uint16_t x570 = 2265U;
	int16_t x571 = -316;
	volatile uint8_t x572 = 1U;
	int32_t t84 = -77434462;

	t84 = ((x569>>(x570<x571))^x572);

	if (t84 != 35) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x573 = 69768998479631LLU;
	volatile uint16_t x574 = 1977U;
	volatile int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MAX;

	t85 = ((x573>>(x574<x575))^x576);

	if (t85 != 69768998459632LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x577 = 6794U;
	int16_t x579 = -12;
	uint64_t x580 = 1787232642671835528LLU;
	uint64_t t86 = 1828322LLU;

	t86 = ((x577>>(x578<x579))^x580);

	if (t86 != 1787232642671834317LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x585 = INT8_MAX;
	int16_t x586 = INT16_MIN;
	int32_t x587 = -1;
	volatile int32_t t87 = 1790568;

	t87 = ((x585>>(x586<x587))^x588);

	if (t87 != 189) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x593 = UINT8_MAX;
	int8_t x594 = -1;
	static int16_t x595 = -3;
	uint32_t x596 = UINT32_MAX;
	uint32_t t88 = 59U;

	t88 = ((x593>>(x594<x595))^x596);

	if (t88 != 4294967040U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x597 = 1615144LLU;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -51;
	int32_t x600 = INT32_MAX;
	static uint64_t t89 = 13LLU;

	t89 = ((x597>>(x598<x599))^x600);

	if (t89 != 2146676075LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x603 = 117419946128622376LL;
	int64_t x604 = -120947LL;
	volatile int64_t t90 = -2628014268027LL;

	t90 = ((x601>>(x602<x603))^x604);

	if (t90 != -121706LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x605 = 1U;
	uint16_t x606 = 10U;
	static int32_t x607 = INT32_MIN;
	int16_t x608 = -8;
	volatile int32_t t91 = -3;

	t91 = ((x605>>(x606<x607))^x608);

	if (t91 != -7) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x618 = 3006761U;
	static uint32_t x619 = 1690512787U;
	uint32_t x620 = 1427U;
	uint32_t t92 = 87049U;

	t92 = ((x617>>(x618<x619))^x620);

	if (t92 != 63800387U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x621 = UINT16_MAX;
	static uint16_t x622 = 0U;
	static uint8_t x624 = 29U;
	static int32_t t93 = -10;

	t93 = ((x621>>(x622<x623))^x624);

	if (t93 != 65506) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x626 = 8001U;
	int64_t x627 = INT64_MAX;
	int16_t x628 = 7;
	int32_t t94 = 267228545;

	t94 = ((x625>>(x626<x627))^x628);

	if (t94 != 120) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x633 = 9978U;
	static int8_t x636 = -1;
	static int32_t t95 = 13;

	t95 = ((x633>>(x634<x635))^x636);

	if (t95 != -4990) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x637 = INT16_MAX;
	static uint64_t x639 = 15818293327818986LLU;
	volatile int64_t x640 = -1LL;
	volatile int64_t t96 = -3796581152270LL;

	t96 = ((x637>>(x638<x639))^x640);

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x641 = UINT8_MAX;
	static uint32_t x643 = 87406U;
	int8_t x644 = -26;
	volatile int32_t t97 = -80;

	t97 = ((x641>>(x642<x643))^x644);

	if (t97 != -103) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x649 = 1U;
	static int32_t x650 = INT32_MIN;
	int16_t x652 = INT16_MAX;
	int32_t t98 = 16;

	t98 = ((x649>>(x650<x651))^x652);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x661 = 15841U;
	int16_t x662 = INT16_MAX;
	static int32_t x663 = INT32_MIN;
	int8_t x664 = 6;
	int32_t t99 = 1;

	t99 = ((x661>>(x662<x663))^x664);

	if (t99 != 15847) { NG(); } else { ; }
	
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

