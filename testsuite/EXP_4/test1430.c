#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 357U;
int32_t x3 = -1;
volatile int64_t t0 = -292211024LL;
uint64_t x5 = 22876LLU;
volatile uint64_t t1 = 20210941388822133LLU;
int32_t t3 = 540171219;
uint32_t x39 = UINT32_MAX;
volatile uint32_t t5 = 16U;
static uint64_t x49 = 3171984910297042LLU;
volatile uint8_t x51 = 4U;
volatile uint64_t t6 = 43LLU;
int32_t x57 = -8;
volatile uint16_t x59 = 16U;
int32_t t8 = -586673;
uint16_t x77 = 3U;
volatile int16_t x79 = -1;
volatile uint32_t t10 = 98618333U;
uint64_t x85 = 444868456385LLU;
int64_t x90 = INT64_MAX;
volatile uint16_t x98 = 4878U;
int8_t x101 = INT8_MAX;
int8_t x105 = -25;
volatile int32_t x107 = INT32_MIN;
int8_t x121 = INT8_MIN;
int8_t x124 = INT8_MIN;
volatile int8_t x133 = -1;
int16_t x136 = -25;
int32_t x143 = -251;
volatile int32_t t21 = 18426;
static int8_t x156 = 1;
static uint64_t x162 = UINT64_MAX;
static volatile int64_t x163 = -775896838LL;
static int32_t x182 = 6;
int8_t x183 = INT8_MAX;
int16_t x185 = INT16_MIN;
volatile int8_t x189 = INT8_MIN;
int32_t x204 = -1;
uint16_t x225 = UINT16_MAX;
int64_t x228 = INT64_MIN;
uint32_t x234 = UINT32_MAX;
volatile int64_t t34 = 727085642LL;
int8_t x259 = -1;
volatile uint64_t t36 = 28023554819729100LLU;
int16_t x264 = INT16_MIN;
uint64_t x276 = 15581714898437058LLU;
volatile int8_t x280 = 1;
volatile uint16_t x297 = 6710U;
uint16_t x300 = UINT16_MAX;
static uint32_t t45 = 113U;
int16_t x310 = INT16_MAX;
int32_t x317 = INT32_MIN;
int8_t x335 = -9;
int64_t x336 = 17060454649LL;
static volatile uint32_t x345 = 16507U;
volatile uint32_t t51 = 1U;
static int8_t x361 = 6;
volatile int8_t x363 = INT8_MIN;
uint8_t x364 = 100U;
int32_t x369 = INT32_MIN;
int8_t x371 = INT8_MIN;
int16_t x375 = INT16_MIN;
uint8_t x389 = 3U;
uint64_t x390 = UINT64_MAX;
uint32_t x391 = 0U;
int8_t x393 = 0;
int32_t x395 = INT32_MIN;
volatile uint64_t t59 = 249LLU;
int16_t x423 = -1;
volatile uint32_t x443 = UINT32_MAX;
static int64_t t63 = 3LL;
volatile uint32_t x446 = UINT32_MAX;
int64_t x452 = INT64_MAX;
int64_t t65 = -113LL;
static uint32_t x462 = 14U;
uint32_t t66 = 10983U;
static volatile int16_t x467 = -16;
uint64_t x484 = 49293281849LLU;
static volatile int32_t t70 = 4077;
static int64_t x566 = 119002LL;
uint8_t x568 = 40U;
static volatile int64_t t73 = -57514858811LL;
volatile uint8_t x611 = 59U;
static int64_t x627 = INT64_MAX;
int32_t x648 = INT32_MIN;
int8_t x659 = INT8_MIN;
volatile int32_t t82 = -1842;
uint32_t x670 = 71U;
int16_t x671 = -3;
uint16_t x695 = UINT16_MAX;
int32_t t85 = -3542220;
static volatile int8_t x704 = INT8_MIN;
uint64_t t88 = 0LLU;
int32_t t90 = 272;
uint32_t x758 = 950U;
volatile int8_t x763 = INT8_MAX;
volatile uint32_t t96 = 802098143U;
uint16_t x772 = 31422U;
int32_t t97 = -127;
static uint32_t x780 = 1U;


void f0(void) {
	int64_t x2 = 2750630381LL;
	static uint32_t x4 = UINT32_MAX;

	t0 = (x1^(x2<<(x3<x4)));

	if (t0 != 2750630024LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 0U;
	int64_t x7 = 149612LL;
	int32_t x8 = 750626674;

	t1 = (x5^(x6<<(x7<x8)));

	if (t1 != 22876LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = -1;
	int16_t x14 = INT16_MAX;
	int8_t x15 = -1;
	static volatile int64_t x16 = 12LL;
	int32_t t2 = 7;

	t2 = (x13^(x14<<(x15<x16)));

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = 110329;
	uint64_t x23 = 891734142760LLU;
	int8_t x24 = INT8_MAX;

	t3 = (x21^(x22<<(x23<x24)));

	if (t3 != -110215) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MAX;
	uint16_t x38 = UINT16_MAX;
	int32_t x40 = 20455;
	volatile int64_t t4 = 5883LL;

	t4 = (x37^(x38<<(x39<x40)));

	if (t4 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x46 = 10U;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;

	t5 = (x45^(x46<<(x47<x48)));

	if (t5 != 4294967285U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x50 = 7U;
	int64_t x52 = INT64_MIN;

	t6 = (x49^(x50<<(x51<x52)));

	if (t6 != 3171984910297045LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x58 = 12082840864LLU;
	int8_t x60 = -1;
	uint64_t t7 = 116LLU;

	t7 = (x57^(x58<<(x59<x60)));

	if (t7 != 18446744061626710744LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = INT8_MIN;
	volatile uint8_t x62 = 0U;
	uint32_t x63 = 7561U;
	uint32_t x64 = 327646U;

	t8 = (x61^(x62<<(x63<x64)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = 2U;
	int64_t x71 = -1LL;
	volatile int32_t x72 = -1;
	volatile int32_t t9 = 748641;

	t9 = (x69^(x70<<(x71<x72)));

	if (t9 != -2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x78 = 93U;
	int64_t x80 = INT64_MIN;

	t10 = (x77^(x78<<(x79<x80)));

	if (t10 != 94U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x86 = INT8_MAX;
	uint64_t x87 = 124564390938LLU;
	int32_t x88 = INT32_MIN;
	volatile uint64_t t11 = 7383532119677LLU;

	t11 = (x85^(x86<<(x87<x88)));

	if (t11 != 444868456255LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x89 = -1;
	int32_t x91 = 1;
	int8_t x92 = -48;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x89^(x90<<(x91<x92)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x99 = 12U;
	volatile int16_t x100 = -555;
	volatile int32_t t13 = 7919530;

	t13 = (x97^(x98<<(x99<x100)));

	if (t13 != -27890) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x102 = 88739;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	static int32_t t14 = -1;

	t14 = (x101^(x102<<(x103<x104)));

	if (t14 != 88796) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x106 = 2543U;
	static uint32_t x108 = UINT32_MAX;
	int32_t t15 = 91;

	t15 = (x105^(x106<<(x107<x108)));

	if (t15 != -5063) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x113 = -6LL;
	int32_t x114 = 489068451;
	static int32_t x115 = INT32_MIN;
	static int64_t x116 = INT64_MAX;
	volatile int64_t t16 = -6812652549029LL;

	t16 = (x113^(x114<<(x115<x116)));

	if (t16 != -978136900LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x122 = 1LL;
	int16_t x123 = -113;
	int64_t t17 = -225367342LL;

	t17 = (x121^(x122<<(x123<x124)));

	if (t17 != -127LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x129 = -115;
	static volatile uint16_t x130 = UINT16_MAX;
	static uint64_t x131 = UINT64_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t18 = -10406862;

	t18 = (x129^(x130<<(x131<x132)));

	if (t18 != -65422) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x134 = INT64_MAX;
	uint16_t x135 = 34U;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x133^(x134<<(x135<x136)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = INT8_MIN;
	uint32_t x138 = 3910U;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = INT64_MAX;
	uint32_t t20 = 7062450U;

	t20 = (x137^(x138<<(x139<x140)));

	if (t20 != 4294959372U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x141 = 485U;
	uint16_t x142 = UINT16_MAX;
	int16_t x144 = INT16_MAX;

	t21 = (x141^(x142<<(x143<x144)));

	if (t21 != 130587) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = 202396167;
	int16_t x155 = INT16_MIN;
	int32_t t22 = 435779037;

	t22 = (x153^(x154<<(x155<x156)));

	if (t22 != 1742691313) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x161 = -1;
	int16_t x164 = -397;
	static volatile uint64_t t23 = 110552050LLU;

	t23 = (x161^(x162<<(x163<x164)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x165 = 30757043U;
	int16_t x166 = INT16_MAX;
	int8_t x167 = -1;
	volatile uint16_t x168 = UINT16_MAX;
	uint32_t t24 = 3583U;

	t24 = (x165^(x166<<(x167<x168)));

	if (t24 != 30781261U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x177 = -975713988523579LL;
	uint32_t x178 = UINT32_MAX;
	static int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MIN;
	static int64_t t25 = 15700824930LL;

	t25 = (x177^(x178<<(x179<x180)));

	if (t25 != -975717287315910LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x181 = UINT64_MAX;
	static uint8_t x184 = 0U;
	volatile uint64_t t26 = 112184777LLU;

	t26 = (x181^(x182<<(x183<x184)));

	if (t26 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x186 = 261U;
	int16_t x187 = 13;
	int8_t x188 = -1;
	volatile int32_t t27 = 751749500;

	t27 = (x185^(x186<<(x187<x188)));

	if (t27 != -32507) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x190 = UINT8_MAX;
	static int16_t x191 = -305;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t28 = -329;

	t28 = (x189^(x190<<(x191<x192)));

	if (t28 != -129) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x201 = -213;
	static uint64_t x202 = 67821189841359091LLU;
	volatile uint16_t x203 = 6U;
	uint64_t t29 = 242870234LLU;

	t29 = (x201^(x202<<(x203<x204)));

	if (t29 != 18378922883868192728LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	uint32_t t30 = 382123890U;

	t30 = (x221^(x222<<(x223<x224)));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x226 = 15647U;
	static volatile int8_t x227 = 48;
	int32_t t31 = -137;

	t31 = (x225^(x226<<(x227<x228)));

	if (t31 != 49888) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x233 = 123U;
	uint16_t x235 = UINT16_MAX;
	static int16_t x236 = 1;
	volatile uint32_t t32 = 31U;

	t32 = (x233^(x234<<(x235<x236)));

	if (t32 != 4294967172U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x237 = 1044;
	uint32_t x238 = 5421937U;
	static int16_t x239 = -1;
	uint16_t x240 = 11U;
	static uint32_t t33 = 9844635U;

	t33 = (x237^(x238<<(x239<x240)));

	if (t33 != 10842870U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x245 = INT64_MAX;
	uint32_t x246 = 6380564U;
	static volatile int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;

	t34 = (x245^(x246<<(x247<x248)));

	if (t34 != 9223372036842014679LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 11974U;
	uint16_t x251 = 15413U;
	uint32_t x252 = 17542U;
	volatile int32_t t35 = -425104583;

	t35 = (x249^(x250<<(x251<x252)));

	if (t35 != -24052) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x257 = 6833U;
	uint64_t x258 = 288740603349188812LLU;
	static int64_t x260 = -1LL;

	t36 = (x257^(x258<<(x259<x260)));

	if (t36 != 288740603349195389LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = 215;
	uint16_t x263 = UINT16_MAX;
	static volatile int32_t t37 = -7;

	t37 = (x261^(x262<<(x263<x264)));

	if (t37 != -169) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x265 = UINT16_MAX;
	static int64_t x266 = INT64_MAX;
	uint16_t x267 = 12184U;
	static volatile uint64_t x268 = 1474LLU;
	int64_t t38 = 2862LL;

	t38 = (x265^(x266<<(x267<x268)));

	if (t38 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x269 = INT32_MIN;
	volatile uint8_t x270 = 24U;
	int8_t x271 = 2;
	volatile uint8_t x272 = UINT8_MAX;
	volatile int32_t t39 = 1127;

	t39 = (x269^(x270<<(x271<x272)));

	if (t39 != -2147483600) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x273 = -1;
	volatile uint16_t x274 = 1538U;
	uint8_t x275 = UINT8_MAX;
	static int32_t t40 = 1859;

	t40 = (x273^(x274<<(x275<x276)));

	if (t40 != -3077) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = 24;
	int8_t x279 = INT8_MAX;
	static int32_t t41 = -129911;

	t41 = (x277^(x278<<(x279<x280)));

	if (t41 != 65511) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x293 = -1;
	static int16_t x294 = INT16_MAX;
	int32_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	static volatile int32_t t42 = -8457;

	t42 = (x293^(x294<<(x295<x296)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x298 = 30880253LLU;
	static int32_t x299 = INT32_MAX;
	volatile uint64_t t43 = 242LLU;

	t43 = (x297^(x298<<(x299<x300)));

	if (t43 != 30878667LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x301 = UINT32_MAX;
	static volatile int16_t x302 = INT16_MAX;
	int32_t x303 = 397;
	static int32_t x304 = 1045306;
	uint32_t t44 = 1000437U;

	t44 = (x301^(x302<<(x303<x304)));

	if (t44 != 4294901761U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x305 = 5;
	uint32_t x306 = 13U;
	int8_t x307 = -1;
	uint16_t x308 = UINT16_MAX;

	t45 = (x305^(x306<<(x307<x308)));

	if (t45 != 31U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x309 = INT8_MAX;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t46 = -892;

	t46 = (x309^(x310<<(x311<x312)));

	if (t46 != 65409) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x318 = UINT16_MAX;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = 127;
	volatile int32_t t47 = -2774934;

	t47 = (x317^(x318<<(x319<x320)));

	if (t47 != -2147418113) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x333 = 0;
	static volatile uint32_t x334 = UINT32_MAX;
	uint32_t t48 = 20686U;

	t48 = (x333^(x334<<(x335<x336)));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x337 = INT32_MAX;
	static uint8_t x338 = UINT8_MAX;
	int32_t x339 = 19100430;
	int64_t x340 = INT64_MIN;
	volatile int32_t t49 = -464386544;

	t49 = (x337^(x338<<(x339<x340)));

	if (t49 != 2147483392) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x346 = 110U;
	volatile int16_t x347 = INT16_MIN;
	uint16_t x348 = 21U;
	static volatile uint32_t t50 = 2980041U;

	t50 = (x345^(x346<<(x347<x348)));

	if (t50 != 16551U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x357 = UINT8_MAX;
	volatile uint32_t x358 = 1803118U;
	static volatile int64_t x359 = -259990496624647LL;
	int16_t x360 = INT16_MIN;

	t51 = (x357^(x358<<(x359<x360)));

	if (t51 != 3606051U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x362 = 1662353LLU;
	static uint64_t t52 = 1LLU;

	t52 = (x361^(x362<<(x363<x364)));

	if (t52 != 3324708LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x365 = INT64_MAX;
	int64_t x366 = 974LL;
	int16_t x367 = 0;
	int8_t x368 = INT8_MIN;
	int64_t t53 = -3117194608643262493LL;

	t53 = (x365^(x366<<(x367<x368)));

	if (t53 != 9223372036854774833LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x370 = 2;
	uint8_t x372 = 12U;
	int32_t t54 = 252214595;

	t54 = (x369^(x370<<(x371<x372)));

	if (t54 != -2147483644) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x373 = 925369131U;
	uint32_t x374 = UINT32_MAX;
	uint64_t x376 = 1566175823386127851LLU;
	static volatile uint32_t t55 = 3306U;

	t55 = (x373^(x374<<(x375<x376)));

	if (t55 != 3369598164U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x381 = 0U;
	uint32_t x382 = UINT32_MAX;
	volatile int64_t x383 = INT64_MIN;
	uint8_t x384 = 0U;
	uint32_t t56 = 127601U;

	t56 = (x381^(x382<<(x383<x384)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x392 = INT64_MAX;
	volatile uint64_t t57 = 6LLU;

	t57 = (x389^(x390<<(x391<x392)));

	if (t57 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x394 = UINT8_MAX;
	static volatile int16_t x396 = INT16_MIN;
	int32_t t58 = 28;

	t58 = (x393^(x394<<(x395<x396)));

	if (t58 != 510) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x413 = 625670937LL;
	uint64_t x414 = 2847322169479139379LLU;
	static volatile int64_t x415 = -1LL;
	uint64_t x416 = 737879030888LLU;

	t59 = (x413^(x414<<(x415<x416)));

	if (t59 != 2847322169022409514LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x417 = -1LL;
	uint32_t x418 = 22U;
	static int32_t x419 = -1;
	int16_t x420 = INT16_MIN;
	int64_t t60 = 98026LL;

	t60 = (x417^(x418<<(x419<x420)));

	if (t60 != -23LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x421 = -1122LL;
	volatile uint32_t x422 = UINT32_MAX;
	volatile int8_t x424 = -3;
	volatile int64_t t61 = 0LL;

	t61 = (x421^(x422<<(x423<x424)));

	if (t61 != -4294966175LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x425 = 1314155234307611297LLU;
	static uint8_t x426 = 46U;
	volatile int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile uint64_t t62 = 79867195711LLU;

	t62 = (x425^(x426<<(x427<x428)));

	if (t62 != 1314155234307611389LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x441 = 4005582316369209LL;
	uint16_t x442 = 17U;
	int8_t x444 = INT8_MIN;

	t63 = (x441^(x442<<(x443<x444)));

	if (t63 != 4005582316369192LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x447 = 39392006LLU;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t64 = 720U;

	t64 = (x445^(x446<<(x447<x448)));

	if (t64 != 32766U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x449 = -1;
	int64_t x450 = 366594786805915239LL;
	int64_t x451 = INT64_MIN;

	t65 = (x449^(x450<<(x451<x452)));

	if (t65 != -733189573611830479LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x461 = -155635;
	uint8_t x463 = UINT8_MAX;
	int16_t x464 = -1;

	t66 = (x461^(x462<<(x463<x464)));

	if (t66 != 4294811651U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x465 = 190U;
	static uint16_t x466 = 2U;
	int32_t x468 = -1;
	volatile int32_t t67 = -1;

	t67 = (x465^(x466<<(x467<x468)));

	if (t67 != 186) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x481 = 120U;
	int32_t x482 = 300245095;
	int16_t x483 = 7320;
	int32_t t68 = 1;

	t68 = (x481^(x482<<(x483<x484)));

	if (t68 != 600490166) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x497 = UINT16_MAX;
	int16_t x498 = 3148;
	int64_t x499 = INT64_MIN;
	volatile int8_t x500 = INT8_MIN;
	volatile int32_t t69 = 27594;

	t69 = (x497^(x498<<(x499<x500)));

	if (t69 != 59239) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x517 = 1945U;
	int16_t x518 = INT16_MAX;
	int64_t x519 = -1LL;
	volatile int32_t x520 = INT32_MIN;

	t70 = (x517^(x518<<(x519<x520)));

	if (t70 != 30822) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x521 = UINT16_MAX;
	static uint64_t x522 = 3141067496144435LLU;
	int8_t x523 = INT8_MIN;
	int16_t x524 = INT16_MIN;
	static uint64_t t71 = 171206190596LLU;

	t71 = (x521^(x522<<(x523<x524)));

	if (t71 != 3141067496112588LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x541 = 12696U;
	int32_t x542 = INT32_MAX;
	int8_t x543 = INT8_MIN;
	static int16_t x544 = INT16_MIN;
	int32_t t72 = -4799;

	t72 = (x541^(x542<<(x543<x544)));

	if (t72 != 2147470951) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x565 = 2U;
	uint8_t x567 = 1U;

	t73 = (x565^(x566<<(x567<x568)));

	if (t73 != 238006LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x589 = 11870712;
	volatile int32_t x590 = 274;
	int64_t x591 = INT64_MIN;
	int64_t x592 = 22751LL;
	static int32_t t74 = -111779792;

	t74 = (x589^(x590<<(x591<x592)));

	if (t74 != 11871196) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x597 = 0LL;
	static int8_t x598 = 4;
	static int64_t x599 = 3744118945568LL;
	int16_t x600 = INT16_MAX;
	volatile int64_t t75 = -9881LL;

	t75 = (x597^(x598<<(x599<x600)));

	if (t75 != 4LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x601 = 1U;
	int64_t x602 = 683297LL;
	int16_t x603 = INT16_MIN;
	int16_t x604 = -15;
	volatile int64_t t76 = 6063LL;

	t76 = (x601^(x602<<(x603<x604)));

	if (t76 != 1366595LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x609 = 1;
	int16_t x610 = INT16_MAX;
	volatile uint16_t x612 = UINT16_MAX;
	volatile int32_t t77 = 18;

	t77 = (x609^(x610<<(x611<x612)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x617 = 54LLU;
	int16_t x618 = INT16_MAX;
	uint64_t x619 = 1982141290294LLU;
	int8_t x620 = -15;
	volatile uint64_t t78 = 120611643LLU;

	t78 = (x617^(x618<<(x619<x620)));

	if (t78 != 65480LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x625 = 0LLU;
	volatile int8_t x626 = INT8_MAX;
	static uint32_t x628 = 1338U;
	volatile uint64_t t79 = 2666146995738995939LLU;

	t79 = (x625^(x626<<(x627<x628)));

	if (t79 != 127LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x645 = INT16_MIN;
	uint32_t x646 = UINT32_MAX;
	static volatile int32_t x647 = INT32_MIN;
	static uint32_t t80 = 1858U;

	t80 = (x645^(x646<<(x647<x648)));

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x649 = INT32_MAX;
	volatile uint64_t x650 = 290725466683LLU;
	int32_t x651 = -81170;
	volatile uint16_t x652 = 2977U;
	uint64_t t81 = 437736LLU;

	t81 = (x649^(x650<<(x651<x652)));

	if (t81 != 580337720201LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x657 = -61235;
	int16_t x658 = 412;
	int64_t x660 = INT64_MIN;

	t82 = (x657^(x658<<(x659<x660)));

	if (t82 != -61103) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x669 = 59;
	static int16_t x672 = INT16_MAX;
	uint32_t t83 = 1731U;

	t83 = (x669^(x670<<(x671<x672)));

	if (t83 != 181U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x685 = 16724280LLU;
	volatile uint32_t x686 = 368U;
	int16_t x687 = -1;
	volatile uint64_t x688 = 3914070LLU;
	volatile uint64_t t84 = 242LLU;

	t84 = (x685^(x686<<(x687<x688)));

	if (t84 != 16724040LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x693 = 441U;
	uint8_t x694 = UINT8_MAX;
	volatile int16_t x696 = 576;

	t85 = (x693^(x694<<(x695<x696)));

	if (t85 != 326) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x701 = INT8_MAX;
	int64_t x702 = 40175491LL;
	int8_t x703 = -1;
	int64_t t86 = 822485LL;

	t86 = (x701^(x702<<(x703<x704)));

	if (t86 != 40175612LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x709 = INT8_MAX;
	volatile uint16_t x710 = UINT16_MAX;
	int64_t x711 = -2171709808088LL;
	static int64_t x712 = 28738LL;
	int32_t t87 = 1;

	t87 = (x709^(x710<<(x711<x712)));

	if (t87 != 130945) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x721 = INT32_MAX;
	uint64_t x722 = 204575233575314LLU;
	static int16_t x723 = 13;
	int16_t x724 = INT16_MAX;

	t88 = (x721^(x722<<(x723<x724)));

	if (t88 != 409150324403419LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x725 = INT32_MIN;
	int16_t x726 = INT16_MAX;
	static int64_t x727 = INT64_MIN;
	int32_t x728 = -802366;
	volatile int32_t t89 = -1;

	t89 = (x725^(x726<<(x727<x728)));

	if (t89 != -2147418114) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x729 = INT16_MIN;
	static volatile int16_t x730 = 172;
	volatile int16_t x731 = INT16_MAX;
	static int64_t x732 = -233583469184LL;

	t90 = (x729^(x730<<(x731<x732)));

	if (t90 != -32596) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x733 = INT8_MIN;
	static volatile uint64_t x734 = UINT64_MAX;
	int64_t x735 = -1LL;
	uint32_t x736 = UINT32_MAX;
	volatile uint64_t t91 = 1647804279249968941LLU;

	t91 = (x733^(x734<<(x735<x736)));

	if (t91 != 126LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x737 = 12785U;
	static int16_t x738 = 8;
	int32_t x739 = 6686;
	int64_t x740 = INT64_MAX;
	volatile int32_t t92 = -10235;

	t92 = (x737^(x738<<(x739<x740)));

	if (t92 != 12769) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x749 = INT32_MIN;
	uint16_t x750 = 412U;
	int64_t x751 = -22700845432489LL;
	volatile int16_t x752 = INT16_MAX;
	static volatile int32_t t93 = -32337;

	t93 = (x749^(x750<<(x751<x752)));

	if (t93 != -2147482824) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x753 = INT32_MAX;
	int8_t x754 = 0;
	int64_t x755 = INT64_MIN;
	int16_t x756 = INT16_MAX;
	static int32_t t94 = INT32_MAX;

	t94 = (x753^(x754<<(x755<x756)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x757 = -1;
	uint32_t x759 = 2U;
	uint32_t x760 = 8U;
	volatile uint32_t t95 = 2381849U;

	t95 = (x757^(x758<<(x759<x760)));

	if (t95 != 4294965395U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x761 = UINT8_MAX;
	static uint32_t x762 = 98621842U;
	int32_t x764 = INT32_MIN;

	t96 = (x761^(x762<<(x763<x764)));

	if (t96 != 98621805U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x769 = INT8_MIN;
	volatile uint16_t x770 = UINT16_MAX;
	volatile uint64_t x771 = 1029612LLU;

	t97 = (x769^(x770<<(x771<x772)));

	if (t97 != -65409) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x773 = INT8_MIN;
	static int16_t x774 = 345;
	int64_t x775 = INT64_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t98 = 1;

	t98 = (x773^(x774<<(x775<x776)));

	if (t98 != -718) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x777 = INT64_MIN;
	static int16_t x778 = INT16_MAX;
	uint32_t x779 = UINT32_MAX;
	volatile int64_t t99 = -2266299069430332612LL;

	t99 = (x777^(x778<<(x779<x780)));

	if (t99 != -9223372036854743041LL) { NG(); } else { ; }
	
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

