#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = 15;
int16_t x4 = -1;
volatile int64_t x5 = 48445799LL;
volatile int32_t x17 = INT32_MAX;
uint32_t x20 = 11568912U;
static volatile uint32_t t3 = 0U;
volatile uint16_t x21 = UINT16_MAX;
uint32_t x24 = 11976929U;
int64_t t7 = 9257333253058127LL;
uint64_t x51 = 117403636299LLU;
uint64_t t8 = 27LLU;
uint64_t x68 = 10605785LLU;
int16_t x70 = INT16_MIN;
int8_t x77 = 26;
int8_t x90 = -1;
uint16_t x113 = 4516U;
uint32_t x114 = 45971773U;
volatile uint64_t x122 = 60235012695LLU;
static int32_t t20 = 3;
volatile uint64_t x130 = 33304831125LLU;
int8_t x165 = 0;
int64_t x182 = -1LL;
int64_t x204 = 1172105183647853LL;
uint32_t x223 = UINT32_MAX;
int32_t x226 = 2671144;
uint64_t t35 = 1787904LLU;
uint32_t x234 = 336369914U;
int8_t x276 = INT8_MIN;
int8_t x280 = 16;
uint32_t x293 = UINT32_MAX;
int16_t x311 = -1299;
int64_t x314 = -1LL;
static uint64_t x317 = 733049698330133LLU;
volatile uint16_t x328 = UINT16_MAX;
static int8_t x347 = INT8_MIN;
uint64_t t46 = 4LLU;
static volatile int16_t x366 = 35;
volatile int32_t t50 = -821902;
volatile int16_t x376 = -514;
int64_t x392 = -1LL;
uint64_t t59 = 111756048832919LLU;
int64_t x461 = 5829555379746439LL;
int16_t x462 = INT16_MIN;
int32_t x463 = 12050745;
int8_t x466 = -63;
int32_t x467 = 120144;
int64_t x470 = INT64_MIN;
int32_t x499 = -1;
volatile int8_t x502 = INT8_MAX;
static volatile uint64_t x503 = UINT64_MAX;
static int64_t x506 = INT64_MIN;
static int8_t x507 = 28;
int64_t x511 = INT64_MAX;
uint32_t x513 = 168240861U;
static uint16_t x516 = UINT16_MAX;
uint64_t x517 = UINT64_MAX;
int8_t x534 = INT8_MAX;
static uint16_t x541 = 27U;
int16_t x543 = INT16_MIN;
static int16_t x545 = INT16_MAX;
int8_t x555 = -1;
int16_t x571 = INT16_MIN;
volatile int32_t x572 = 7510253;
static int8_t x585 = INT8_MAX;
int16_t x586 = INT16_MIN;
volatile int16_t x588 = INT16_MAX;
volatile uint64_t t81 = 4162804606352LLU;
volatile uint16_t x593 = 26U;
int32_t x595 = -1;
int64_t x601 = 3254449525820172609LL;
static volatile uint64_t x610 = UINT64_MAX;
volatile int32_t t84 = 94132;
volatile uint32_t x625 = 13281U;
int32_t x628 = 28;
static volatile uint32_t t86 = 126472358U;
int16_t x636 = INT16_MAX;
volatile int16_t x640 = -1;
int64_t x648 = INT64_MAX;
uint32_t x659 = UINT32_MAX;
int32_t t93 = 1;
static int8_t x675 = INT8_MAX;
volatile uint32_t t95 = 50090U;
static int32_t x684 = INT32_MIN;
uint64_t x690 = 15323795642074875LLU;
uint32_t x691 = 18031U;
int16_t x697 = 2991;
int16_t x698 = INT16_MIN;
volatile uint64_t t99 = 25964881405629LLU;


void f0(void) {
	int8_t x2 = 2;
	int8_t x3 = 15;
	int32_t t0 = -440;

	t0 = ((x1>>(x2==x3))-x4);

	if (t0 != 16) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	volatile int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MAX;
	static volatile int64_t t1 = 1942692062406713309LL;

	t1 = ((x5>>(x6==x7))-x8);

	if (t1 != -2099037848LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 8;
	int16_t x14 = -19;
	uint64_t x15 = UINT64_MAX;
	static uint16_t x16 = UINT16_MAX;
	static int32_t t2 = 106;

	t2 = ((x13>>(x14==x15))-x16);

	if (t2 != -65527) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;

	t3 = ((x17>>(x18==x19))-x20);

	if (t3 != 1062172911U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 4U;
	uint32_t t4 = 2089148036U;

	t4 = ((x21>>(x22==x23))-x24);

	if (t4 != 4283055902U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = 1;
	static volatile int32_t x31 = -1;
	uint16_t x32 = 2U;
	static uint32_t t5 = 157U;

	t5 = ((x29>>(x30==x31))-x32);

	if (t5 != 4294967293U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 2U;
	int16_t x34 = 49;
	static volatile int8_t x35 = -1;
	int16_t x36 = INT16_MIN;
	volatile int32_t t6 = 8;

	t6 = ((x33>>(x34==x35))-x36);

	if (t6 != 32770) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 5U;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = 1;
	int64_t x48 = -1LL;

	t7 = ((x45>>(x46==x47))-x48);

	if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 117848LLU;
	uint32_t x50 = 0U;
	uint8_t x52 = 58U;

	t8 = ((x49>>(x50==x51))-x52);

	if (t8 != 117790LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 18U;
	static int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 9U;
	int32_t t9 = -1012209;

	t9 = ((x53>>(x54==x55))-x56);

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = UINT32_MAX;
	volatile uint32_t x58 = 98U;
	int16_t x59 = 1;
	static volatile uint8_t x60 = 6U;
	volatile uint32_t t10 = 940U;

	t10 = ((x57>>(x58==x59))-x60);

	if (t10 != 4294967289U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x65 = 802246220U;
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = INT64_MIN;
	static uint64_t t11 = 12913LLU;

	t11 = ((x65>>(x66==x67))-x68);

	if (t11 != 791640435LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int8_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t12 = -92;

	t12 = ((x69>>(x70==x71))-x72);

	if (t12 != 65280) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MIN;
	uint16_t x75 = 6U;
	int8_t x76 = -1;
	volatile uint64_t t13 = 1031939733500665009LLU;

	t13 = ((x73>>(x74==x75))-x76);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x78 = -1LL;
	int32_t x79 = INT32_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t14 = -32;

	t14 = ((x77>>(x78==x79))-x80);

	if (t14 != -229) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MAX;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = INT16_MAX;
	int32_t t15 = -177651267;

	t15 = ((x89>>(x90==x91))-x92);

	if (t15 != 2147450880) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 317268U;
	static uint8_t x94 = 0U;
	uint8_t x95 = 35U;
	int16_t x96 = INT16_MIN;
	uint32_t t16 = 1U;

	t16 = ((x93>>(x94==x95))-x96);

	if (t16 != 350036U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;
	volatile int32_t t17 = -292266;

	t17 = ((x105>>(x106==x107))-x108);

	if (t17 != -2147418112) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x115 = -11771412;
	int16_t x116 = INT16_MAX;
	volatile int32_t t18 = 42;

	t18 = ((x113>>(x114==x115))-x116);

	if (t18 != -28251) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x117 = UINT64_MAX;
	volatile uint64_t x118 = 7848047996931740LLU;
	volatile uint64_t x119 = 5LLU;
	int16_t x120 = -439;
	volatile uint64_t t19 = 48861148836LLU;

	t19 = ((x117>>(x118==x119))-x120);

	if (t19 != 438LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x121 = 1U;
	volatile int64_t x123 = -639550750702009655LL;
	int32_t x124 = -27339;

	t20 = ((x121>>(x122==x123))-x124);

	if (t20 != 27340) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x129 = 28772835LL;
	int8_t x131 = -1;
	uint64_t x132 = UINT64_MAX;
	uint64_t t21 = 1LLU;

	t21 = ((x129>>(x130==x131))-x132);

	if (t21 != 28772836LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x149 = UINT64_MAX;
	uint8_t x150 = 5U;
	static int64_t x151 = -1LL;
	uint64_t x152 = 115486LLU;
	static volatile uint64_t t22 = 6595LLU;

	t22 = ((x149>>(x150==x151))-x152);

	if (t22 != 18446744073709436129LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x153 = 305052132LLU;
	int32_t x154 = INT32_MIN;
	static int16_t x155 = -1;
	volatile uint64_t x156 = UINT64_MAX;
	volatile uint64_t t23 = 687LLU;

	t23 = ((x153>>(x154==x155))-x156);

	if (t23 != 305052133LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x157 = 9827186;
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MAX;
	int32_t t24 = 4223;

	t24 = ((x157>>(x158==x159))-x160);

	if (t24 != 4913466) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x166 = 5688913360922859626LLU;
	uint8_t x167 = 7U;
	int64_t x168 = -4959LL;
	volatile int64_t t25 = 17808170LL;

	t25 = ((x165>>(x166==x167))-x168);

	if (t25 != 4959LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x173 = INT16_MAX;
	volatile int32_t x174 = 0;
	int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;
	int32_t t26 = 8072653;

	t26 = ((x173>>(x174==x175))-x176);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x177 = 1338778794772148133LLU;
	int8_t x178 = 0;
	static int32_t x179 = INT32_MAX;
	volatile int16_t x180 = 445;
	static volatile uint64_t t27 = 389LLU;

	t27 = ((x177>>(x178==x179))-x180);

	if (t27 != 1338778794772147688LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x181 = 1LLU;
	uint64_t x183 = 3685789556683207LLU;
	static int16_t x184 = INT16_MIN;
	uint64_t t28 = 29LLU;

	t28 = ((x181>>(x182==x183))-x184);

	if (t28 != 32769LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x185 = 99299055100LLU;
	volatile uint16_t x186 = 4515U;
	volatile int8_t x187 = INT8_MAX;
	uint64_t x188 = 0LLU;
	static uint64_t t29 = 218934266LLU;

	t29 = ((x185>>(x186==x187))-x188);

	if (t29 != 99299055100LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x189 = UINT32_MAX;
	uint16_t x190 = 20U;
	int16_t x191 = -1;
	static int32_t x192 = INT32_MAX;
	uint32_t t30 = 2U;

	t30 = ((x189>>(x190==x191))-x192);

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x201 = 162275;
	static volatile int16_t x202 = INT16_MIN;
	int16_t x203 = 8;
	int64_t t31 = -304445192793846599LL;

	t31 = ((x201>>(x202==x203))-x204);

	if (t31 != -1172105183485578LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x209 = 6U;
	int8_t x210 = INT8_MAX;
	static int8_t x211 = INT8_MIN;
	uint32_t x212 = UINT32_MAX;
	uint32_t t32 = 452569U;

	t32 = ((x209>>(x210==x211))-x212);

	if (t32 != 7U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x217 = 101296U;
	volatile int32_t x218 = -1;
	int32_t x219 = INT32_MIN;
	static volatile int32_t x220 = -1;
	volatile uint32_t t33 = 64580028U;

	t33 = ((x217>>(x218==x219))-x220);

	if (t33 != 101297U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x221 = UINT32_MAX;
	volatile uint16_t x222 = 60U;
	static int16_t x224 = -1;
	uint32_t t34 = 7U;

	t34 = ((x221>>(x222==x223))-x224);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x225 = 12719542U;
	int32_t x227 = -1;
	static uint64_t x228 = UINT64_MAX;

	t35 = ((x225>>(x226==x227))-x228);

	if (t35 != 12719543LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x233 = INT64_MAX;
	uint16_t x235 = 4544U;
	static uint8_t x236 = UINT8_MAX;
	volatile int64_t t36 = 8536LL;

	t36 = ((x233>>(x234==x235))-x236);

	if (t36 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x265 = 22;
	volatile uint64_t x266 = 1779690705151778321LLU;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t37 = 8242;

	t37 = ((x265>>(x266==x267))-x268);

	if (t37 != 32790) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x273 = 1514006401280955290LL;
	static int8_t x274 = INT8_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	static volatile int64_t t38 = -24055675078LL;

	t38 = ((x273>>(x274==x275))-x276);

	if (t38 != 1514006401280955418LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x277 = 4720008;
	int32_t x278 = INT32_MAX;
	int32_t x279 = INT32_MAX;
	int32_t t39 = -2;

	t39 = ((x277>>(x278==x279))-x280);

	if (t39 != 2359988) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x294 = 193U;
	uint8_t x295 = 24U;
	int8_t x296 = -10;
	uint32_t t40 = 71258U;

	t40 = ((x293>>(x294==x295))-x296);

	if (t40 != 9U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x309 = 2U;
	int8_t x310 = -1;
	volatile int32_t x312 = -15021182;
	static volatile int32_t t41 = 5019;

	t41 = ((x309>>(x310==x311))-x312);

	if (t41 != 15021184) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x313 = 45;
	uint8_t x315 = 37U;
	int32_t x316 = INT32_MAX;
	volatile int32_t t42 = 20671590;

	t42 = ((x313>>(x314==x315))-x316);

	if (t42 != -2147483602) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MAX;
	volatile uint64_t x320 = 225226265096LLU;
	uint64_t t43 = 1522675897523745LLU;

	t43 = ((x317>>(x318==x319))-x320);

	if (t43 != 732824472065037LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x325 = 3010341U;
	static int8_t x326 = 1;
	uint8_t x327 = UINT8_MAX;
	uint32_t t44 = 13U;

	t44 = ((x325>>(x326==x327))-x328);

	if (t44 != 2944806U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 3U;
	static int64_t x339 = -185487973LL;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t45 = 7U;

	t45 = ((x337>>(x338==x339))-x340);

	if (t45 != 256U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x345 = 0;
	static int16_t x346 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;

	t46 = ((x345>>(x346==x347))-x348);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x349 = 61U;
	int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;
	volatile int32_t t47 = 3;

	t47 = ((x349>>(x350==x351))-x352);

	if (t47 != 62) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x357 = 7073982907798241LL;
	static int32_t x358 = -1;
	uint32_t x359 = 160434U;
	volatile int32_t x360 = -4;
	int64_t t48 = 22262169111438LL;

	t48 = ((x357>>(x358==x359))-x360);

	if (t48 != 7073982907798245LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x365 = 1U;
	int32_t x367 = -141185406;
	int8_t x368 = INT8_MAX;
	volatile int32_t t49 = -854540528;

	t49 = ((x365>>(x366==x367))-x368);

	if (t49 != -126) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x369 = UINT8_MAX;
	volatile int64_t x370 = INT64_MIN;
	int8_t x371 = 1;
	int16_t x372 = 1231;

	t50 = ((x369>>(x370==x371))-x372);

	if (t50 != -976) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x373 = 76U;
	int16_t x374 = INT16_MIN;
	static uint32_t x375 = 101U;
	volatile int32_t t51 = 57;

	t51 = ((x373>>(x374==x375))-x376);

	if (t51 != 590) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x389 = 7U;
	volatile int8_t x390 = INT8_MAX;
	int8_t x391 = INT8_MIN;
	int64_t t52 = 31152LL;

	t52 = ((x389>>(x390==x391))-x392);

	if (t52 != 8LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x413 = INT64_MAX;
	volatile int64_t x414 = INT64_MIN;
	static int32_t x415 = -1;
	volatile uint8_t x416 = 7U;
	static int64_t t53 = -1283423446736972LL;

	t53 = ((x413>>(x414==x415))-x416);

	if (t53 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x425 = 901;
	uint8_t x426 = 2U;
	int32_t x427 = INT32_MIN;
	volatile int32_t x428 = 2288;
	volatile int32_t t54 = -913048659;

	t54 = ((x425>>(x426==x427))-x428);

	if (t54 != -1387) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x433 = 284443U;
	int8_t x434 = -1;
	static int32_t x435 = INT32_MIN;
	uint16_t x436 = 1U;
	volatile uint32_t t55 = 31651501U;

	t55 = ((x433>>(x434==x435))-x436);

	if (t55 != 284442U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x437 = UINT8_MAX;
	volatile int8_t x438 = 0;
	int8_t x439 = -1;
	int64_t x440 = -1LL;
	int64_t t56 = 43385262971LL;

	t56 = ((x437>>(x438==x439))-x440);

	if (t56 != 256LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x449 = UINT16_MAX;
	static volatile int8_t x450 = INT8_MIN;
	uint32_t x451 = 51654582U;
	uint16_t x452 = 0U;
	static volatile int32_t t57 = 715768586;

	t57 = ((x449>>(x450==x451))-x452);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x453 = 119;
	uint64_t x454 = 1LLU;
	int32_t x455 = 22345402;
	int16_t x456 = -1;
	int32_t t58 = 502493592;

	t58 = ((x453>>(x454==x455))-x456);

	if (t58 != 120) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x457 = 23582556U;
	int64_t x458 = 55934394637LL;
	int8_t x459 = INT8_MIN;
	uint64_t x460 = 5037838LLU;

	t59 = ((x457>>(x458==x459))-x460);

	if (t59 != 18544718LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x464 = 5U;
	volatile int64_t t60 = 16424330LL;

	t60 = ((x461>>(x462==x463))-x464);

	if (t60 != 5829555379746434LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x465 = 2U;
	uint8_t x468 = 67U;
	volatile int32_t t61 = 30138;

	t61 = ((x465>>(x466==x467))-x468);

	if (t61 != -65) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x469 = 14U;
	static uint64_t x471 = UINT64_MAX;
	volatile int16_t x472 = -1;
	volatile int32_t t62 = -116164858;

	t62 = ((x469>>(x470==x471))-x472);

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x473 = 9519052U;
	int8_t x474 = INT8_MAX;
	volatile int8_t x475 = -1;
	int64_t x476 = INT64_MAX;
	static volatile int64_t t63 = 407LL;

	t63 = ((x473>>(x474==x475))-x476);

	if (t63 != -9223372036845256755LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x493 = INT16_MAX;
	uint64_t x494 = 240LLU;
	static int32_t x495 = -1;
	int16_t x496 = -1;
	volatile int32_t t64 = -89767532;

	t64 = ((x493>>(x494==x495))-x496);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x497 = 1545612287LL;
	int64_t x498 = INT64_MIN;
	uint16_t x500 = 5U;
	static int64_t t65 = 1255613LL;

	t65 = ((x497>>(x498==x499))-x500);

	if (t65 != 1545612282LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x501 = 2U;
	volatile uint32_t x504 = UINT32_MAX;
	uint32_t t66 = 1960U;

	t66 = ((x501>>(x502==x503))-x504);

	if (t66 != 3U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x505 = 2U;
	volatile int16_t x508 = INT16_MIN;
	int32_t t67 = -388987772;

	t67 = ((x505>>(x506==x507))-x508);

	if (t67 != 32770) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x509 = 4324139;
	int64_t x510 = INT64_MIN;
	int64_t x512 = -8946LL;
	volatile int64_t t68 = 382LL;

	t68 = ((x509>>(x510==x511))-x512);

	if (t68 != 4333085LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x514 = -1;
	uint32_t x515 = UINT32_MAX;
	volatile uint32_t t69 = 224245U;

	t69 = ((x513>>(x514==x515))-x516);

	if (t69 != 84054895U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x518 = INT8_MIN;
	uint8_t x519 = 1U;
	static uint32_t x520 = UINT32_MAX;
	static uint64_t t70 = 2187082445005LLU;

	t70 = ((x517>>(x518==x519))-x520);

	if (t70 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x521 = INT32_MAX;
	int16_t x522 = INT16_MIN;
	static uint64_t x523 = 219382503145LLU;
	int8_t x524 = 37;
	volatile int32_t t71 = 22796;

	t71 = ((x521>>(x522==x523))-x524);

	if (t71 != 2147483610) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x533 = 62U;
	int32_t x535 = INT32_MIN;
	int8_t x536 = INT8_MIN;
	volatile int32_t t72 = 488;

	t72 = ((x533>>(x534==x535))-x536);

	if (t72 != 190) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x537 = 0U;
	uint16_t x538 = 76U;
	volatile int8_t x539 = INT8_MIN;
	volatile uint16_t x540 = 1U;
	int32_t t73 = -1147;

	t73 = ((x537>>(x538==x539))-x540);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x542 = INT8_MIN;
	int16_t x544 = -1;
	volatile int32_t t74 = -8198;

	t74 = ((x541>>(x542==x543))-x544);

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x546 = -1LL;
	static int32_t x547 = -1;
	int8_t x548 = -1;
	volatile int32_t t75 = -672972419;

	t75 = ((x545>>(x546==x547))-x548);

	if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x553 = 10U;
	uint64_t x554 = 0LLU;
	int32_t x556 = -11;
	volatile int32_t t76 = 8843;

	t76 = ((x553>>(x554==x555))-x556);

	if (t76 != 21) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x557 = 86658778876299011LLU;
	int32_t x558 = INT32_MIN;
	uint8_t x559 = 77U;
	int32_t x560 = -1;
	volatile uint64_t t77 = 243254LLU;

	t77 = ((x557>>(x558==x559))-x560);

	if (t77 != 86658778876299012LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x569 = INT8_MAX;
	uint16_t x570 = 3796U;
	volatile int32_t t78 = 0;

	t78 = ((x569>>(x570==x571))-x572);

	if (t78 != -7510126) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x577 = UINT16_MAX;
	int32_t x578 = 224168;
	int8_t x579 = -1;
	int32_t x580 = 0;
	static int32_t t79 = -2520;

	t79 = ((x577>>(x578==x579))-x580);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x587 = INT64_MIN;
	int32_t t80 = 57651;

	t80 = ((x585>>(x586==x587))-x588);

	if (t80 != -32640) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x589 = UINT64_MAX;
	int16_t x590 = -846;
	int8_t x591 = INT8_MIN;
	uint16_t x592 = 10253U;

	t81 = ((x589>>(x590==x591))-x592);

	if (t81 != 18446744073709541362LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x594 = 111428;
	volatile int16_t x596 = -1;
	volatile int32_t t82 = -42438980;

	t82 = ((x593>>(x594==x595))-x596);

	if (t82 != 27) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x602 = 54U;
	int16_t x603 = -3083;
	int8_t x604 = INT8_MIN;
	int64_t t83 = -3191823789LL;

	t83 = ((x601>>(x602==x603))-x604);

	if (t83 != 3254449525820172737LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x609 = UINT8_MAX;
	static int64_t x611 = -1LL;
	int32_t x612 = -1;

	t84 = ((x609>>(x610==x611))-x612);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x621 = UINT8_MAX;
	static uint16_t x622 = 1264U;
	static int32_t x623 = -1;
	static uint16_t x624 = 0U;
	int32_t t85 = -30096;

	t85 = ((x621>>(x622==x623))-x624);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x626 = -1;
	int8_t x627 = 15;

	t86 = ((x625>>(x626==x627))-x628);

	if (t86 != 13253U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x633 = 0U;
	volatile uint16_t x634 = 4198U;
	uint16_t x635 = 140U;
	int32_t t87 = 2;

	t87 = ((x633>>(x634==x635))-x636);

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x637 = 0;
	uint32_t x638 = 928U;
	static int16_t x639 = -1;
	static int32_t t88 = 350152068;

	t88 = ((x637>>(x638==x639))-x640);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x645 = 26U;
	static int32_t x646 = INT32_MIN;
	int32_t x647 = -1;
	int64_t t89 = 14492435LL;

	t89 = ((x645>>(x646==x647))-x648);

	if (t89 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x649 = UINT8_MAX;
	static volatile int8_t x650 = INT8_MIN;
	int64_t x651 = -1896757757LL;
	static uint8_t x652 = UINT8_MAX;
	volatile int32_t t90 = -2677399;

	t90 = ((x649>>(x650==x651))-x652);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x657 = 5U;
	int8_t x658 = INT8_MAX;
	static int16_t x660 = -1;
	volatile int32_t t91 = 1619;

	t91 = ((x657>>(x658==x659))-x660);

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x661 = 3;
	static int8_t x662 = INT8_MAX;
	static int8_t x663 = 25;
	uint32_t x664 = UINT32_MAX;
	uint32_t t92 = 45U;

	t92 = ((x661>>(x662==x663))-x664);

	if (t92 != 4U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x665 = 0;
	int32_t x666 = INT32_MAX;
	int32_t x667 = -1;
	int32_t x668 = 35620833;

	t93 = ((x665>>(x666==x667))-x668);

	if (t93 != -35620833) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x669 = 985061695347584LLU;
	static int16_t x670 = 96;
	volatile int8_t x671 = -1;
	int32_t x672 = INT32_MAX;
	static uint64_t t94 = 90209LLU;

	t94 = ((x669>>(x670==x671))-x672);

	if (t94 != 985059547863937LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x673 = 29U;
	volatile int32_t x674 = INT32_MIN;
	int32_t x676 = INT32_MAX;

	t95 = ((x673>>(x674==x675))-x676);

	if (t95 != 2147483678U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x681 = UINT32_MAX;
	int32_t x682 = INT32_MIN;
	static volatile int32_t x683 = 26810;
	volatile uint32_t t96 = 1989184U;

	t96 = ((x681>>(x682==x683))-x684);

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x685 = 1861370801199123445LLU;
	uint8_t x686 = UINT8_MAX;
	int64_t x687 = -1LL;
	uint32_t x688 = 0U;
	static volatile uint64_t t97 = 1405683247LLU;

	t97 = ((x685>>(x686==x687))-x688);

	if (t97 != 1861370801199123445LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x689 = UINT8_MAX;
	static int64_t x692 = 5602066939614LL;
	volatile int64_t t98 = 858266991954062LL;

	t98 = ((x689>>(x690==x691))-x692);

	if (t98 != -5602066939359LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x699 = -1;
	uint64_t x700 = 96299386LLU;

	t99 = ((x697>>(x698==x699))-x700);

	if (t99 != 18446744073613255221LLU) { NG(); } else { ; }
	
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

