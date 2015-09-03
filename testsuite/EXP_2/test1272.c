#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MIN;
int64_t x3 = -24975723865184LL;
volatile int16_t x9 = INT16_MAX;
static uint32_t x11 = UINT32_MAX;
static volatile int32_t x14 = -793;
static volatile uint64_t t3 = 24533878LLU;
int8_t x25 = INT8_MAX;
volatile int32_t t4 = 3440652;
static int8_t x42 = INT8_MIN;
int32_t x52 = INT32_MIN;
uint64_t t9 = UINT64_MAX;
int16_t x65 = INT16_MAX;
int64_t x67 = -6169475399501832LL;
static uint8_t x74 = 2U;
int64_t x76 = 12184324115406LL;
uint64_t t11 = 43952368652LLU;
volatile int16_t x90 = INT16_MIN;
static uint8_t x91 = 61U;
int8_t x92 = INT8_MIN;
int8_t x94 = -1;
int8_t x108 = INT8_MIN;
int16_t x112 = 2232;
int32_t t17 = -43707095;
volatile int16_t x113 = INT16_MAX;
int8_t x118 = INT8_MAX;
volatile uint64_t t20 = 79428410LLU;
uint16_t x126 = 1U;
int8_t x127 = INT8_MAX;
uint8_t x128 = 0U;
uint8_t x161 = 22U;
static int64_t x163 = INT64_MAX;
static int64_t x171 = 1568883405LL;
int64_t x183 = INT64_MIN;
volatile uint8_t x196 = 0U;
int16_t x227 = -1;
uint32_t x232 = 32591U;
int8_t x244 = 2;
uint8_t x253 = 6U;
int8_t x267 = INT8_MIN;
int64_t x269 = INT64_MAX;
uint16_t x272 = UINT16_MAX;
static uint64_t x277 = UINT64_MAX;
int32_t x278 = 716468811;
uint32_t x289 = 1105U;
uint32_t t40 = 172713U;
int64_t x295 = -1LL;
volatile uint32_t x298 = 5717U;
uint32_t x325 = 61U;
volatile uint64_t x327 = 100373917106LLU;
int64_t t47 = 10679772918LL;
volatile uint64_t x346 = UINT64_MAX;
uint64_t t49 = 7LLU;
int32_t x358 = INT32_MAX;
uint16_t x359 = 1570U;
volatile int32_t t50 = -41456741;
int64_t x369 = 294LL;
int16_t x370 = -198;
uint64_t x386 = UINT64_MAX;
volatile int32_t x389 = INT32_MAX;
int32_t x394 = INT32_MIN;
int8_t x407 = INT8_MAX;
static volatile int16_t x432 = INT16_MAX;
uint32_t t61 = 1585214819U;
uint8_t x475 = UINT8_MAX;
int32_t t67 = -2;
int32_t t69 = -42;
volatile uint64_t t70 = 87003054462LLU;
static volatile int32_t t72 = -15652;
int16_t x510 = -1;
int32_t x512 = INT32_MIN;
static volatile uint64_t x527 = 980LLU;
uint64_t x529 = 491115813755LLU;
static int64_t x543 = 2952691876290LL;
volatile int32_t x544 = -1;
uint16_t x549 = 85U;
volatile uint64_t t82 = 1847276550LLU;
uint8_t x571 = 3U;
int64_t x580 = INT64_MIN;
static int16_t x587 = INT16_MIN;
uint32_t x589 = 165576U;
volatile int16_t x591 = INT16_MAX;
uint32_t x592 = 501712U;
uint32_t t87 = 11640815U;
static volatile uint16_t x597 = 640U;
uint64_t x604 = UINT64_MAX;
static uint16_t x635 = 22U;
static uint16_t x637 = UINT16_MAX;
uint32_t x661 = 131951966U;
static uint8_t x678 = 0U;
uint32_t x685 = 122986U;
static int32_t x687 = INT32_MAX;
int16_t x689 = 1;
int32_t x690 = 81;
int16_t x692 = INT16_MIN;


void f0(void) {
	uint64_t x1 = 18856823717LLU;
	volatile int16_t x4 = -1;
	uint64_t t0 = 248497295152278143LLU;

	t0 = ((x1>>(x2==x3))&x4);

	if (t0 != 18856823717LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x10 = -405;
	int64_t x12 = -1LL;
	static volatile int64_t t1 = 33LL;

	t1 = ((x9>>(x10==x11))&x12);

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MAX;
	volatile int32_t t2 = -2589274;

	t2 = ((x13>>(x14==x15))&x16);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 7;
	int8_t x18 = INT8_MAX;
	uint32_t x19 = 824236813U;
	uint64_t x20 = 131831430108LLU;

	t3 = ((x17>>(x18==x19))&x20);

	if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x26 = 130831570LLU;
	uint8_t x27 = 65U;
	int16_t x28 = 0;

	t4 = ((x25>>(x26==x27))&x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 0;
	uint16_t x43 = 2325U;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t5 = 4184230LL;

	t5 = ((x41>>(x42==x43))&x44);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = 1606;
	static uint32_t x46 = 9287438U;
	uint64_t x47 = UINT64_MAX;
	static int32_t x48 = INT32_MIN;
	static int32_t t6 = -3966;

	t6 = ((x45>>(x46==x47))&x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = 4682;
	uint64_t x50 = 1136159LLU;
	static int8_t x51 = INT8_MAX;
	static int32_t t7 = -23801396;

	t7 = ((x49>>(x50==x51))&x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x53 = 2U;
	int64_t x54 = INT64_MIN;
	int32_t x55 = 60;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t8 = -2;

	t8 = ((x53>>(x54==x55))&x56);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x62 = 18;
	volatile uint32_t x63 = 5265662U;
	int32_t x64 = -1;

	t9 = ((x61>>(x62==x63))&x64);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x66 = -477;
	uint8_t x68 = 0U;
	volatile int32_t t10 = 41406;

	t10 = ((x65>>(x66==x67))&x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x73 = 29394540LLU;
	static int16_t x75 = INT16_MIN;

	t11 = ((x73>>(x74==x75))&x76);

	if (t11 != 4227660LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x77 = 343344U;
	int8_t x78 = INT8_MIN;
	volatile int32_t x79 = 11;
	volatile uint8_t x80 = 0U;
	static volatile uint32_t t12 = 12U;

	t12 = ((x77>>(x78==x79))&x80);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MAX;
	volatile int64_t x82 = 1525881LL;
	volatile int16_t x83 = INT16_MIN;
	static uint8_t x84 = UINT8_MAX;
	volatile int64_t t13 = 29642LL;

	t13 = ((x81>>(x82==x83))&x84);

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x89 = 3U;
	uint32_t t14 = 10880U;

	t14 = ((x89>>(x90==x91))&x92);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x93 = 1083656503902184545LLU;
	int64_t x95 = -1LL;
	static int16_t x96 = -706;
	uint64_t t15 = 810041299LLU;

	t15 = ((x93>>(x94==x95))&x96);

	if (t15 != 541828251951091760LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = INT16_MAX;
	static int64_t x106 = INT64_MIN;
	volatile uint32_t x107 = 2U;
	volatile int32_t t16 = -1;

	t16 = ((x105>>(x106==x107))&x108);

	if (t16 != 32640) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MAX;
	static int16_t x111 = INT16_MIN;

	t17 = ((x109>>(x110==x111))&x112);

	if (t17 != 2232) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x114 = 970U;
	int16_t x115 = 9214;
	int64_t x116 = INT64_MIN;
	volatile int64_t t18 = 228138157191LL;

	t18 = ((x113>>(x114==x115))&x116);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x117 = 46U;
	int8_t x119 = -1;
	int64_t x120 = INT64_MAX;
	static int64_t t19 = -7899658LL;

	t19 = ((x117>>(x118==x119))&x120);

	if (t19 != 46LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x121 = 0LLU;
	uint32_t x122 = UINT32_MAX;
	volatile int32_t x123 = INT32_MIN;
	static int8_t x124 = INT8_MIN;

	t20 = ((x121>>(x122==x123))&x124);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int32_t t21 = 177394055;

	t21 = ((x125>>(x126==x127))&x128);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x129 = 170LLU;
	volatile int8_t x130 = INT8_MIN;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	static volatile uint64_t t22 = 116219LLU;

	t22 = ((x129>>(x130==x131))&x132);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = 1053;
	static volatile int32_t t23 = -92633;

	t23 = ((x153>>(x154==x155))&x156);

	if (t23 != 1053) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = 5;
	static uint8_t x158 = UINT8_MAX;
	int16_t x159 = INT16_MIN;
	static volatile uint64_t x160 = 49637952LLU;
	uint64_t t24 = 44LLU;

	t24 = ((x157>>(x158==x159))&x160);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x162 = 511U;
	static volatile int64_t x164 = -1LL;
	volatile int64_t t25 = -2016131320LL;

	t25 = ((x161>>(x162==x163))&x164);

	if (t25 != 22LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x169 = 219LLU;
	uint8_t x170 = 88U;
	uint8_t x172 = UINT8_MAX;
	static volatile uint64_t t26 = 1902280623LLU;

	t26 = ((x169>>(x170==x171))&x172);

	if (t26 != 219LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x181 = 1U;
	int64_t x182 = INT64_MIN;
	static int32_t x184 = 182887278;
	int32_t t27 = 66079;

	t27 = ((x181>>(x182==x183))&x184);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x193 = INT32_MAX;
	volatile uint8_t x194 = 31U;
	uint8_t x195 = UINT8_MAX;
	static int32_t t28 = -7994;

	t28 = ((x193>>(x194==x195))&x196);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x197 = 1317;
	int64_t x198 = 630619897LL;
	static int64_t x199 = -1LL;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t29 = 64429;

	t29 = ((x197>>(x198==x199))&x200);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x201 = 1882;
	int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MAX;
	int64_t x204 = -1LL;
	static int64_t t30 = 9LL;

	t30 = ((x201>>(x202==x203))&x204);

	if (t30 != 1882LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x225 = 808384U;
	int32_t x226 = INT32_MAX;
	static int32_t x228 = 0;
	volatile uint32_t t31 = 373581522U;

	t31 = ((x225>>(x226==x227))&x228);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x229 = UINT32_MAX;
	volatile int32_t x230 = 3765;
	int32_t x231 = INT32_MIN;
	static volatile uint32_t t32 = 4715U;

	t32 = ((x229>>(x230==x231))&x232);

	if (t32 != 32591U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int64_t x242 = 56637070018LL;
	static int64_t x243 = INT64_MIN;
	volatile uint32_t t33 = 1U;

	t33 = ((x241>>(x242==x243))&x244);

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x254 = UINT16_MAX;
	int64_t x255 = -150194674451LL;
	int64_t x256 = INT64_MIN;
	static int64_t t34 = 60047203720LL;

	t34 = ((x253>>(x254==x255))&x256);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x265 = 30U;
	uint16_t x266 = 863U;
	static uint8_t x268 = 62U;
	volatile int32_t t35 = 1235213;

	t35 = ((x265>>(x266==x267))&x268);

	if (t35 != 30) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x270 = -3;
	uint64_t x271 = UINT64_MAX;
	volatile int64_t t36 = -2102961480868739LL;

	t36 = ((x269>>(x270==x271))&x272);

	if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x273 = 7480960433LLU;
	volatile uint8_t x274 = UINT8_MAX;
	uint32_t x275 = UINT32_MAX;
	int32_t x276 = -1;
	uint64_t t37 = 123564LLU;

	t37 = ((x273>>(x274==x275))&x276);

	if (t37 != 7480960433LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x279 = INT64_MAX;
	int32_t x280 = -2;
	static uint64_t t38 = 430587753419LLU;

	t38 = ((x277>>(x278==x279))&x280);

	if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x281 = 1195108250176LLU;
	volatile int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t39 = 34450382936292LLU;

	t39 = ((x281>>(x282==x283))&x284);

	if (t39 != 1194000908288LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x290 = 2U;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MAX;

	t40 = ((x289>>(x290==x291))&x292);

	if (t40 != 1105U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x293 = INT8_MAX;
	int32_t x294 = INT32_MAX;
	int8_t x296 = INT8_MAX;
	volatile int32_t t41 = 38;

	t41 = ((x293>>(x294==x295))&x296);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x297 = INT8_MAX;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t42 = -58917687;

	t42 = ((x297>>(x298==x299))&x300);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x309 = 4834U;
	int32_t x310 = INT32_MIN;
	int32_t x311 = 3789283;
	static int16_t x312 = -104;
	static int32_t t43 = 14027;

	t43 = ((x309>>(x310==x311))&x312);

	if (t43 != 4736) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x313 = 16361U;
	volatile int32_t x314 = INT32_MIN;
	int8_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t44 = 24932095438495LLU;

	t44 = ((x313>>(x314==x315))&x316);

	if (t44 != 16361LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x326 = INT32_MAX;
	static volatile int16_t x328 = -1;
	static uint32_t t45 = 276268003U;

	t45 = ((x325>>(x326==x327))&x328);

	if (t45 != 61U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x333 = 1;
	volatile int8_t x334 = -1;
	int16_t x335 = -3;
	int8_t x336 = INT8_MAX;
	static int32_t t46 = 6;

	t46 = ((x333>>(x334==x335))&x336);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x341 = UINT8_MAX;
	volatile uint64_t x342 = 10151129LLU;
	volatile int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MIN;

	t47 = ((x341>>(x342==x343))&x344);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x345 = 63254U;
	int32_t x347 = -11758518;
	int32_t x348 = INT32_MAX;
	static volatile uint32_t t48 = 5173367U;

	t48 = ((x345>>(x346==x347))&x348);

	if (t48 != 63254U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static uint64_t x350 = UINT64_MAX;
	int16_t x351 = INT16_MAX;
	static int8_t x352 = -22;

	t49 = ((x349>>(x350==x351))&x352);

	if (t49 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x357 = 20U;
	volatile uint16_t x360 = 7042U;

	t50 = ((x357>>(x358==x359))&x360);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x365 = UINT32_MAX;
	static uint32_t x366 = UINT32_MAX;
	static int16_t x367 = INT16_MIN;
	volatile uint64_t x368 = 56592968340481147LLU;
	static uint64_t t51 = 3LLU;

	t51 = ((x365>>(x366==x367))&x368);

	if (t51 != 1052255355LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x371 = 6979601882LLU;
	volatile uint32_t x372 = UINT32_MAX;
	static int64_t t52 = 30LL;

	t52 = ((x369>>(x370==x371))&x372);

	if (t52 != 294LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x373 = 1713;
	int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t53 = -237924438631LL;

	t53 = ((x373>>(x374==x375))&x376);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x377 = 140815495477707343LLU;
	int8_t x378 = INT8_MIN;
	static int8_t x379 = INT8_MIN;
	volatile int8_t x380 = -1;
	static uint64_t t54 = 9897147976LLU;

	t54 = ((x377>>(x378==x379))&x380);

	if (t54 != 70407747738853671LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x381 = 112U;
	int32_t x382 = INT32_MIN;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MAX;
	volatile uint32_t t55 = 661484U;

	t55 = ((x381>>(x382==x383))&x384);

	if (t55 != 112U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x385 = UINT64_MAX;
	static int64_t x387 = 1784LL;
	static volatile int8_t x388 = 17;
	uint64_t t56 = 5002675LLU;

	t56 = ((x385>>(x386==x387))&x388);

	if (t56 != 17LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x390 = -1;
	static int32_t x391 = -1;
	int16_t x392 = INT16_MAX;
	volatile int32_t t57 = 621423081;

	t57 = ((x389>>(x390==x391))&x392);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x393 = 25U;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MAX;
	int64_t t58 = 0LL;

	t58 = ((x393>>(x394==x395))&x396);

	if (t58 != 25LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = INT64_MIN;
	int32_t x408 = -1;
	uint32_t t59 = UINT32_MAX;

	t59 = ((x405>>(x406==x407))&x408);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x421 = UINT8_MAX;
	static uint64_t x422 = 5613235321LLU;
	int8_t x423 = INT8_MAX;
	int8_t x424 = INT8_MAX;
	int32_t t60 = 687077151;

	t60 = ((x421>>(x422==x423))&x424);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x429 = UINT32_MAX;
	int32_t x430 = 350723;
	volatile int16_t x431 = -1;

	t61 = ((x429>>(x430==x431))&x432);

	if (t61 != 32767U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x433 = INT64_MAX;
	uint8_t x434 = 18U;
	static int64_t x435 = INT64_MIN;
	static int8_t x436 = 0;
	int64_t t62 = -33869799845268LL;

	t62 = ((x433>>(x434==x435))&x436);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x437 = UINT64_MAX;
	static int16_t x438 = 379;
	static volatile uint64_t x439 = 8573876654313299127LLU;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t63 = 2LLU;

	t63 = ((x437>>(x438==x439))&x440);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x457 = 380U;
	int32_t x458 = INT32_MAX;
	volatile int16_t x459 = INT16_MAX;
	int32_t x460 = -132;
	volatile int32_t t64 = -14;

	t64 = ((x457>>(x458==x459))&x460);

	if (t64 != 380) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x461 = UINT16_MAX;
	uint8_t x462 = UINT8_MAX;
	int64_t x463 = -1LL;
	int8_t x464 = INT8_MIN;
	static volatile int32_t t65 = 917;

	t65 = ((x461>>(x462==x463))&x464);

	if (t65 != 65408) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x473 = UINT16_MAX;
	uint8_t x474 = UINT8_MAX;
	uint8_t x476 = 0U;
	static volatile int32_t t66 = -28603;

	t66 = ((x473>>(x474==x475))&x476);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x477 = 115U;
	int8_t x478 = INT8_MAX;
	int64_t x479 = INT64_MAX;
	int8_t x480 = -16;

	t67 = ((x477>>(x478==x479))&x480);

	if (t67 != 112) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x485 = UINT64_MAX;
	uint8_t x486 = 6U;
	uint16_t x487 = 202U;
	int64_t x488 = 103732805LL;
	volatile uint64_t t68 = 64781812614334LLU;

	t68 = ((x485>>(x486==x487))&x488);

	if (t68 != 103732805LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x489 = 45U;
	int16_t x490 = -7;
	uint32_t x491 = UINT32_MAX;
	int8_t x492 = 1;

	t69 = ((x489>>(x490==x491))&x492);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x493 = UINT64_MAX;
	int32_t x494 = 98857795;
	int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MAX;

	t70 = ((x493>>(x494==x495))&x496);

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x497 = 27826U;
	int16_t x498 = -3;
	int64_t x499 = -155727263LL;
	uint32_t x500 = 726054979U;
	volatile uint32_t t71 = 0U;

	t71 = ((x497>>(x498==x499))&x500);

	if (t71 != 10242U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x501 = 2460U;
	uint8_t x502 = 45U;
	uint32_t x503 = 90111784U;
	int8_t x504 = -14;

	t72 = ((x501>>(x502==x503))&x504);

	if (t72 != 2448) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x505 = 63676018414LLU;
	volatile int8_t x506 = INT8_MAX;
	static int32_t x507 = -1;
	int32_t x508 = -1;
	uint64_t t73 = 330LLU;

	t73 = ((x505>>(x506==x507))&x508);

	if (t73 != 63676018414LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x509 = 21;
	uint8_t x511 = UINT8_MAX;
	static volatile int32_t t74 = 24020;

	t74 = ((x509>>(x510==x511))&x512);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x525 = INT8_MAX;
	int16_t x526 = 7;
	int32_t x528 = INT32_MAX;
	volatile int32_t t75 = 2012864;

	t75 = ((x525>>(x526==x527))&x528);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x530 = UINT32_MAX;
	volatile int16_t x531 = 242;
	uint8_t x532 = 0U;
	volatile uint64_t t76 = 3106024545439496483LLU;

	t76 = ((x529>>(x530==x531))&x532);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x533 = 6;
	int16_t x534 = INT16_MIN;
	volatile uint8_t x535 = UINT8_MAX;
	uint16_t x536 = 19892U;
	volatile int32_t t77 = -1;

	t77 = ((x533>>(x534==x535))&x536);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x541 = 107U;
	volatile int8_t x542 = INT8_MIN;
	int32_t t78 = 1;

	t78 = ((x541>>(x542==x543))&x544);

	if (t78 != 107) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x550 = UINT16_MAX;
	int64_t x551 = -194376827490645565LL;
	uint64_t x552 = 5825077233LLU;
	static volatile uint64_t t79 = 8700621LLU;

	t79 = ((x549>>(x550==x551))&x552);

	if (t79 != 81LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x553 = 0U;
	volatile int8_t x554 = -1;
	int16_t x555 = -1;
	volatile uint16_t x556 = 40U;
	static volatile int32_t t80 = 17205;

	t80 = ((x553>>(x554==x555))&x556);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x557 = 0;
	int32_t x558 = 481078;
	int16_t x559 = -1;
	volatile int32_t x560 = INT32_MAX;
	static int32_t t81 = 1;

	t81 = ((x557>>(x558==x559))&x560);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x561 = 23097418186862285LLU;
	uint16_t x562 = 37U;
	uint32_t x563 = 1U;
	int32_t x564 = INT32_MAX;

	t82 = ((x561>>(x562==x563))&x564);

	if (t82 != 1044491981LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x569 = 19;
	static int32_t x570 = INT32_MAX;
	uint32_t x572 = UINT32_MAX;
	static volatile uint32_t t83 = 1226U;

	t83 = ((x569>>(x570==x571))&x572);

	if (t83 != 19U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x577 = UINT16_MAX;
	uint32_t x578 = UINT32_MAX;
	uint64_t x579 = 7083930671LLU;
	int64_t t84 = 7796LL;

	t84 = ((x577>>(x578==x579))&x580);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x581 = UINT32_MAX;
	int8_t x582 = INT8_MIN;
	int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MIN;
	int64_t t85 = -16606341774486LL;

	t85 = ((x581>>(x582==x583))&x584);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x585 = INT16_MAX;
	uint8_t x586 = UINT8_MAX;
	uint32_t x588 = 20675U;
	volatile uint32_t t86 = 1U;

	t86 = ((x585>>(x586==x587))&x588);

	if (t86 != 20675U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x590 = 932LLU;

	t87 = ((x589>>(x590==x591))&x592);

	if (t87 != 165568U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x598 = -2048307LL;
	int8_t x599 = INT8_MIN;
	static int8_t x600 = INT8_MIN;
	static volatile int32_t t88 = -5273;

	t88 = ((x597>>(x598==x599))&x600);

	if (t88 != 640) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x601 = 2;
	int64_t x602 = INT64_MIN;
	int8_t x603 = -1;
	volatile uint64_t t89 = 4042LLU;

	t89 = ((x601>>(x602==x603))&x604);

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x613 = 315719371U;
	volatile uint32_t x614 = 202194984U;
	uint64_t x615 = 535287896049LLU;
	int64_t x616 = -1LL;
	volatile int64_t t90 = 1923875134LL;

	t90 = ((x613>>(x614==x615))&x616);

	if (t90 != 315719371LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x633 = UINT64_MAX;
	static int64_t x634 = -1LL;
	uint32_t x636 = 180906U;
	uint64_t t91 = 5292LLU;

	t91 = ((x633>>(x634==x635))&x636);

	if (t91 != 180906LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x638 = INT8_MAX;
	int64_t x639 = INT64_MIN;
	int8_t x640 = INT8_MIN;
	volatile int32_t t92 = 166180;

	t92 = ((x637>>(x638==x639))&x640);

	if (t92 != 65408) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x653 = INT32_MAX;
	uint32_t x654 = 751996049U;
	uint16_t x655 = UINT16_MAX;
	uint64_t x656 = 207029LLU;
	volatile uint64_t t93 = 8529872597LLU;

	t93 = ((x653>>(x654==x655))&x656);

	if (t93 != 207029LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x662 = -1;
	int8_t x663 = INT8_MIN;
	static volatile int8_t x664 = 19;
	volatile uint32_t t94 = 14146429U;

	t94 = ((x661>>(x662==x663))&x664);

	if (t94 != 18U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x669 = 16U;
	int64_t x670 = INT64_MIN;
	int16_t x671 = -1;
	static volatile int32_t x672 = 0;
	int32_t t95 = 105070;

	t95 = ((x669>>(x670==x671))&x672);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x677 = 127266LL;
	int64_t x679 = -1LL;
	int16_t x680 = INT16_MIN;
	static volatile int64_t t96 = -23345213241859LL;

	t96 = ((x677>>(x678==x679))&x680);

	if (t96 != 98304LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x686 = INT32_MAX;
	static int32_t x688 = INT32_MIN;
	uint32_t t97 = 8837U;

	t97 = ((x685>>(x686==x687))&x688);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x691 = -21;
	volatile int32_t t98 = -238;

	t98 = ((x689>>(x690==x691))&x692);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x693 = 1U;
	static int16_t x694 = INT16_MIN;
	volatile uint8_t x695 = 5U;
	int32_t x696 = INT32_MIN;
	volatile int32_t t99 = 447192663;

	t99 = ((x693>>(x694==x695))&x696);

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

