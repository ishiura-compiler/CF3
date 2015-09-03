#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = -148;
volatile int64_t t4 = -124151182128858LL;
int16_t x116 = 56;
volatile uint32_t x123 = UINT32_MAX;
volatile int32_t t6 = 0;
int8_t x130 = -11;
volatile uint32_t x163 = UINT32_MAX;
int32_t t9 = -114;
volatile uint8_t x208 = 1U;
volatile int64_t t11 = -235498669062814645LL;
volatile uint64_t t12 = 110367039368296282LLU;
uint16_t x220 = 3U;
volatile uint64_t x225 = UINT64_MAX;
volatile uint8_t x232 = UINT8_MAX;
volatile int32_t t16 = -4;
uint64_t t17 = 161368098LLU;
static int16_t x250 = INT16_MIN;
uint8_t x252 = 1U;
static uint32_t x253 = 826928739U;
int16_t x273 = 100;
uint64_t x297 = 85261LLU;
volatile int32_t x309 = INT32_MAX;
int16_t x311 = 3;
volatile uint16_t x313 = 5025U;
int64_t x315 = INT64_MAX;
int8_t x340 = INT8_MIN;
int8_t x401 = 3;
static volatile uint8_t x402 = 1U;
volatile int32_t x404 = INT32_MAX;
static int16_t x459 = 32;
volatile uint16_t x460 = UINT16_MAX;
volatile int32_t t40 = 5288991;
static uint32_t x475 = 289365504U;
int64_t t43 = 107912602LL;
int64_t t44 = 448344501936854502LL;
volatile uint8_t x533 = 58U;
int32_t x535 = INT32_MIN;
int16_t x546 = 0;
volatile uint8_t x548 = 2U;
uint32_t x562 = UINT32_MAX;
uint64_t x577 = 3483LLU;
uint8_t x578 = 96U;
volatile uint64_t x615 = 1801005212495LLU;
int8_t x616 = INT8_MIN;
int32_t x623 = 42394;
uint16_t x633 = 963U;
volatile int8_t x636 = -1;
uint8_t x657 = 41U;
static int8_t x658 = 1;
uint32_t t57 = 22043U;
static uint8_t x687 = UINT8_MAX;
uint32_t x698 = 36U;
uint8_t x700 = 15U;
volatile int32_t t61 = -42;
int32_t x713 = 0;
volatile int32_t t65 = 8984;
uint8_t x733 = 28U;
uint64_t x753 = UINT64_MAX;
static int32_t x755 = INT32_MIN;
uint32_t x761 = UINT32_MAX;
int8_t x762 = 40;
uint32_t x773 = 1U;
int16_t x804 = INT16_MIN;
static volatile uint64_t t72 = 3LLU;
uint16_t x807 = UINT16_MAX;
static volatile uint16_t x817 = UINT16_MAX;
uint64_t x835 = UINT64_MAX;
int16_t x846 = 562;
int64_t x863 = INT64_MAX;
uint8_t x864 = UINT8_MAX;
volatile uint32_t x874 = 406685U;
volatile int8_t x897 = 1;
volatile int32_t t80 = 598200996;
static int8_t x909 = 0;
static volatile uint32_t x930 = 267U;
uint64_t x965 = UINT64_MAX;
int64_t t86 = -30440309933446LL;
static int64_t x976 = -1LL;
uint8_t x982 = 16U;
static volatile int64_t x983 = 624913539588402880LL;
int64_t x1007 = INT64_MIN;
int32_t x1008 = 6954934;
static int16_t x1028 = 1514;
volatile int32_t t90 = 256200205;
static volatile int32_t t91 = -26;
uint8_t x1105 = 5U;
int16_t x1107 = INT16_MIN;
int64_t x1125 = 60LL;
static volatile int16_t x1159 = INT16_MIN;
int64_t t96 = 2105661603LL;
volatile int16_t x1169 = INT16_MAX;
int8_t x1170 = 8;
static volatile int64_t t97 = 1854101883LL;
int16_t x1196 = INT16_MIN;
uint64_t t99 = 49LLU;


void f0(void) {
	static uint8_t x21 = 1U;
	static uint64_t x22 = 782233LLU;
	int64_t x23 = 1749894222LL;
	int64_t x24 = INT64_MIN;
	int64_t t0 = -2764758LL;

	t0 = ((x21>>(x22/x23))/x24);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = 774;
	uint8_t x27 = 26U;
	int32_t x28 = INT32_MIN;

	t1 = ((x25>>(x26/x27))/x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x37 = UINT8_MAX;
	uint8_t x38 = 1U;
	int32_t x39 = INT32_MAX;
	int32_t x40 = -1;
	int32_t t2 = 209332;

	t2 = ((x37>>(x38/x39))/x40);

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x45 = 203323510;
	volatile uint32_t x46 = UINT32_MAX;
	static int32_t x47 = -1;
	uint16_t x48 = 294U;
	volatile int32_t t3 = -11;

	t3 = ((x45>>(x46/x47))/x48);

	if (t3 != 345788) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x53 = 2LL;
	int8_t x54 = INT8_MIN;
	int32_t x55 = 232;
	int64_t x56 = INT64_MAX;

	t4 = ((x53>>(x54/x55))/x56);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x113 = 4;
	uint32_t x114 = UINT32_MAX;
	static int8_t x115 = INT8_MIN;
	int32_t t5 = -284;

	t5 = ((x113>>(x114/x115))/x116);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x121 = 3U;
	int64_t x122 = -1LL;
	uint16_t x124 = UINT16_MAX;

	t6 = ((x121>>(x122/x123))/x124);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x129 = INT16_MAX;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t7 = -6866;

	t7 = ((x129>>(x130/x131))/x132);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x161 = 27;
	static int32_t x162 = -1;
	int64_t x164 = INT64_MIN;
	volatile int64_t t8 = 5LL;

	t8 = ((x161>>(x162/x163))/x164);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x173 = 23;
	uint8_t x174 = 22U;
	volatile int64_t x175 = -733LL;
	int16_t x176 = 725;

	t9 = ((x173>>(x174/x175))/x176);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x193 = INT64_MAX;
	volatile uint8_t x194 = 1U;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = INT64_MAX;
	int64_t t10 = 2720047647956LL;

	t10 = ((x193>>(x194/x195))/x196);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x205 = 465LL;
	int64_t x206 = -1LL;
	volatile int64_t x207 = INT64_MIN;

	t11 = ((x205>>(x206/x207))/x208);

	if (t11 != 465LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x209 = 1LLU;
	int16_t x210 = INT16_MAX;
	static int64_t x211 = 83954641LL;
	int8_t x212 = -21;

	t12 = ((x209>>(x210/x211))/x212);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x217 = 1543583LL;
	volatile uint32_t x218 = UINT32_MAX;
	int32_t x219 = -12767339;
	volatile int64_t t13 = -135406930445LL;

	t13 = ((x217>>(x218/x219))/x220);

	if (t13 != 257263LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x221 = 6877;
	static uint16_t x222 = UINT16_MAX;
	uint32_t x223 = UINT32_MAX;
	int16_t x224 = -1;
	int32_t t14 = -101290425;

	t14 = ((x221>>(x222/x223))/x224);

	if (t14 != -6877) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x226 = -1;
	static volatile int16_t x227 = INT16_MIN;
	static int64_t x228 = INT64_MIN;
	uint64_t t15 = 51229746032130LLU;

	t15 = ((x225>>(x226/x227))/x228);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = 51;
	int8_t x231 = INT8_MAX;

	t16 = ((x229>>(x230/x231))/x232);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x241 = 30LLU;
	static uint64_t x242 = 592LLU;
	uint32_t x243 = 1496744441U;
	int64_t x244 = INT64_MIN;

	t17 = ((x241>>(x242/x243))/x244);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x245 = 2486U;
	uint8_t x246 = UINT8_MAX;
	int16_t x247 = INT16_MAX;
	volatile int8_t x248 = INT8_MIN;
	int32_t t18 = -2;

	t18 = ((x245>>(x246/x247))/x248);

	if (t18 != -19) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x249 = 1701;
	uint16_t x251 = UINT16_MAX;
	volatile int32_t t19 = -1277;

	t19 = ((x249>>(x250/x251))/x252);

	if (t19 != 1701) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x254 = 0;
	int16_t x255 = 4;
	volatile uint64_t x256 = 166LLU;
	static volatile uint64_t t20 = 13308598979036LLU;

	t20 = ((x253>>(x254/x255))/x256);

	if (t20 != 4981498LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x265 = 10U;
	int8_t x266 = -1;
	static int16_t x267 = -1;
	int8_t x268 = -1;
	volatile uint32_t t21 = 18U;

	t21 = ((x265>>(x266/x267))/x268);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x269 = 5378929U;
	static uint16_t x270 = 2U;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = INT16_MIN;
	uint32_t t22 = 168U;

	t22 = ((x269>>(x270/x271))/x272);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x274 = INT8_MIN;
	int16_t x275 = -7;
	volatile int8_t x276 = -9;
	volatile int32_t t23 = -116503;

	t23 = ((x273>>(x274/x275))/x276);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x289 = UINT32_MAX;
	static volatile int64_t x290 = 1LL;
	int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MAX;
	static uint32_t t24 = 73114U;

	t24 = ((x289>>(x290/x291))/x292);

	if (t24 != 131076U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MAX;
	static uint16_t x296 = 6U;
	uint64_t t25 = 5LLU;

	t25 = ((x293>>(x294/x295))/x296);

	if (t25 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x298 = 31;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MAX;
	volatile uint64_t t26 = 1194961731360368643LLU;

	t26 = ((x297>>(x298/x299))/x300);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x310 = -1LL;
	static int32_t x312 = -1;
	volatile int32_t t27 = -283809947;

	t27 = ((x309>>(x310/x311))/x312);

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x314 = -3;
	int64_t x316 = INT64_MIN;
	volatile int64_t t28 = 446432180LL;

	t28 = ((x313>>(x314/x315))/x316);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x329 = 1877681480070472831LL;
	int16_t x330 = -1;
	int16_t x331 = INT16_MAX;
	int32_t x332 = INT32_MIN;
	int64_t t29 = 48546650LL;

	t29 = ((x329>>(x330/x331))/x332);

	if (t29 != -874363575LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x337 = 0U;
	int64_t x338 = INT64_MIN;
	volatile int64_t x339 = INT64_MIN;
	volatile int32_t t30 = -94987833;

	t30 = ((x337>>(x338/x339))/x340);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 286617U;
	int16_t x371 = INT16_MIN;
	int32_t x372 = -1;
	uint32_t t31 = 1878038U;

	t31 = ((x369>>(x370/x371))/x372);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = 1205493205970LL;
	int64_t x375 = INT64_MAX;
	volatile int32_t x376 = INT32_MIN;
	static volatile int32_t t32 = -135181;

	t32 = ((x373>>(x374/x375))/x376);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x381 = 66U;
	static int16_t x382 = 4471;
	volatile int32_t x383 = -1810978;
	uint64_t x384 = 16489975683018LLU;
	volatile uint64_t t33 = 128642LLU;

	t33 = ((x381>>(x382/x383))/x384);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x385 = INT32_MAX;
	static int16_t x386 = -5;
	uint32_t x387 = UINT32_MAX;
	static volatile int16_t x388 = INT16_MIN;
	int32_t t34 = 138516;

	t34 = ((x385>>(x386/x387))/x388);

	if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x389 = UINT16_MAX;
	static volatile int32_t x390 = -2014;
	int16_t x391 = INT16_MIN;
	int16_t x392 = -130;
	int32_t t35 = 0;

	t35 = ((x389>>(x390/x391))/x392);

	if (t35 != -504) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x397 = 97;
	uint32_t x398 = UINT32_MAX;
	static int8_t x399 = -1;
	int8_t x400 = -1;
	volatile int32_t t36 = -232277;

	t36 = ((x397>>(x398/x399))/x400);

	if (t36 != -48) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x403 = 22;
	int32_t t37 = -23605973;

	t37 = ((x401>>(x402/x403))/x404);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x425 = INT8_MAX;
	uint32_t x426 = UINT32_MAX;
	volatile int32_t x427 = -1;
	int16_t x428 = -1;
	static volatile int32_t t38 = -3115;

	t38 = ((x425>>(x426/x427))/x428);

	if (t38 != -63) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x433 = UINT16_MAX;
	uint64_t x434 = 6139172LLU;
	int16_t x435 = INT16_MIN;
	int32_t x436 = INT32_MAX;
	static int32_t t39 = 187393053;

	t39 = ((x433>>(x434/x435))/x436);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x457 = 1;
	uint8_t x458 = UINT8_MAX;

	t40 = ((x457>>(x458/x459))/x460);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x461 = 1247375118U;
	uint64_t x462 = 31LLU;
	uint64_t x463 = 5LLU;
	int8_t x464 = 23;
	volatile uint32_t t41 = 2U;

	t41 = ((x461>>(x462/x463))/x464);

	if (t41 != 847401U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x473 = INT16_MAX;
	int8_t x474 = -1;
	static int64_t x476 = -233529776081LL;
	volatile int64_t t42 = -114907088110085493LL;

	t42 = ((x473>>(x474/x475))/x476);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x497 = INT64_MAX;
	int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MIN;
	volatile int32_t x500 = INT32_MIN;

	t43 = ((x497>>(x498/x499))/x500);

	if (t43 != -4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x509 = INT64_MAX;
	static uint32_t x510 = 7392U;
	int32_t x511 = INT32_MIN;
	volatile int32_t x512 = INT32_MAX;

	t44 = ((x509>>(x510/x511))/x512);

	if (t44 != 4294967298LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x534 = -1LL;
	int8_t x536 = -1;
	volatile int32_t t45 = 477;

	t45 = ((x533>>(x534/x535))/x536);

	if (t45 != -58) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x537 = 14U;
	int16_t x538 = 78;
	int64_t x539 = INT64_MIN;
	volatile uint32_t x540 = UINT32_MAX;
	uint32_t t46 = 4U;

	t46 = ((x537>>(x538/x539))/x540);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x545 = UINT16_MAX;
	uint32_t x547 = 10189U;
	int32_t t47 = 8126;

	t47 = ((x545>>(x546/x547))/x548);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x561 = INT32_MAX;
	int16_t x563 = -1;
	int32_t x564 = INT32_MIN;
	int32_t t48 = 88189099;

	t48 = ((x561>>(x562/x563))/x564);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x569 = 160419LL;
	int8_t x570 = -4;
	uint32_t x571 = UINT32_MAX;
	uint32_t x572 = UINT32_MAX;
	volatile int64_t t49 = 493883217864LL;

	t49 = ((x569>>(x570/x571))/x572);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x579 = INT8_MIN;
	int64_t x580 = INT64_MIN;
	volatile uint64_t t50 = 857646301595LLU;

	t50 = ((x577>>(x578/x579))/x580);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x581 = 1;
	uint32_t x582 = 78193704U;
	static int8_t x583 = INT8_MIN;
	volatile int8_t x584 = INT8_MIN;
	volatile int32_t t51 = -5;

	t51 = ((x581>>(x582/x583))/x584);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x597 = 2;
	static int16_t x598 = INT16_MAX;
	uint64_t x599 = 34047980379343512LLU;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t52 = -3240263;

	t52 = ((x597>>(x598/x599))/x600);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x613 = 40U;
	int16_t x614 = INT16_MAX;
	static volatile uint32_t t53 = 458U;

	t53 = ((x613>>(x614/x615))/x616);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x621 = INT8_MAX;
	uint8_t x622 = 89U;
	uint16_t x624 = 657U;
	static volatile int32_t t54 = -16;

	t54 = ((x621>>(x622/x623))/x624);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x634 = 24U;
	int64_t x635 = -1160258LL;
	volatile int32_t t55 = 15116484;

	t55 = ((x633>>(x634/x635))/x636);

	if (t55 != -963) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x649 = 1207292682LL;
	uint8_t x650 = UINT8_MAX;
	volatile int32_t x651 = INT32_MIN;
	int16_t x652 = INT16_MAX;
	volatile int64_t t56 = -517149244LL;

	t56 = ((x649>>(x650/x651))/x652);

	if (t56 != 36844LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x659 = 1019;
	static volatile uint32_t x660 = UINT32_MAX;

	t57 = ((x657>>(x658/x659))/x660);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x673 = UINT8_MAX;
	static uint8_t x674 = 101U;
	static volatile int16_t x675 = INT16_MAX;
	volatile int64_t x676 = -423633920LL;
	int64_t t58 = 314275526770LL;

	t58 = ((x673>>(x674/x675))/x676);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x681 = 235LL;
	int8_t x682 = -26;
	uint16_t x683 = 36U;
	uint16_t x684 = UINT16_MAX;
	volatile int64_t t59 = 1LL;

	t59 = ((x681>>(x682/x683))/x684);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x685 = 0U;
	int32_t x686 = -1;
	int64_t x688 = -23221988458LL;
	volatile int64_t t60 = -44646923LL;

	t60 = ((x685>>(x686/x687))/x688);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x697 = 51U;
	int8_t x699 = INT8_MIN;

	t61 = ((x697>>(x698/x699))/x700);

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x701 = 6078167797136LL;
	static uint8_t x702 = 55U;
	int32_t x703 = INT32_MIN;
	int64_t x704 = -1LL;
	static int64_t t62 = -3853551970957LL;

	t62 = ((x701>>(x702/x703))/x704);

	if (t62 != -6078167797136LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x714 = INT8_MIN;
	volatile int64_t x715 = 2510105LL;
	volatile int16_t x716 = INT16_MIN;
	static int32_t t63 = 665503156;

	t63 = ((x713>>(x714/x715))/x716);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x717 = UINT16_MAX;
	volatile uint16_t x718 = 0U;
	int32_t x719 = -1;
	int64_t x720 = 4464047770372LL;
	int64_t t64 = -232LL;

	t64 = ((x717>>(x718/x719))/x720);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x721 = 1U;
	int8_t x722 = 0;
	int8_t x723 = INT8_MAX;
	static int16_t x724 = 1;

	t65 = ((x721>>(x722/x723))/x724);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x734 = -6LL;
	uint8_t x735 = 82U;
	int16_t x736 = INT16_MIN;
	volatile int32_t t66 = -289224738;

	t66 = ((x733>>(x734/x735))/x736);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x737 = UINT32_MAX;
	int16_t x738 = INT16_MIN;
	static uint16_t x739 = UINT16_MAX;
	int64_t x740 = -1LL;
	volatile int64_t t67 = -236291965451LL;

	t67 = ((x737>>(x738/x739))/x740);

	if (t67 != -4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x754 = INT8_MAX;
	int32_t x756 = 53;
	static uint64_t t68 = 28433654312621255LLU;

	t68 = ((x753>>(x754/x755))/x756);

	if (t68 != 348051774975651917LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x757 = 325;
	int8_t x758 = 1;
	static int8_t x759 = INT8_MIN;
	uint16_t x760 = 8154U;
	static int32_t t69 = -28744145;

	t69 = ((x757>>(x758/x759))/x760);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x763 = INT32_MIN;
	int8_t x764 = -1;
	static volatile uint32_t t70 = 2938U;

	t70 = ((x761>>(x762/x763))/x764);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x774 = INT8_MIN;
	static int64_t x775 = -1165712237504LL;
	static uint8_t x776 = UINT8_MAX;
	uint32_t t71 = 13U;

	t71 = ((x773>>(x774/x775))/x776);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x801 = 18791550828LLU;
	int8_t x802 = INT8_MIN;
	int8_t x803 = INT8_MIN;

	t72 = ((x801>>(x802/x803))/x804);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x805 = 153797810U;
	uint64_t x806 = 808LLU;
	static volatile uint8_t x808 = 35U;
	volatile uint32_t t73 = 1U;

	t73 = ((x805>>(x806/x807))/x808);

	if (t73 != 4394223U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x818 = 0U;
	int16_t x819 = INT16_MAX;
	int8_t x820 = INT8_MIN;
	volatile int32_t t74 = -392;

	t74 = ((x817>>(x818/x819))/x820);

	if (t74 != -511) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x833 = 0U;
	int8_t x834 = -1;
	int16_t x836 = -3319;
	volatile int32_t t75 = -6333588;

	t75 = ((x833>>(x834/x835))/x836);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x845 = UINT32_MAX;
	uint64_t x847 = 140297920938LLU;
	volatile int64_t x848 = -1LL;
	static volatile int64_t t76 = -45443042680168LL;

	t76 = ((x845>>(x846/x847))/x848);

	if (t76 != -4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x861 = 1156LLU;
	int8_t x862 = INT8_MIN;
	static volatile uint64_t t77 = 6288LLU;

	t77 = ((x861>>(x862/x863))/x864);

	if (t77 != 4LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x873 = 74U;
	static int8_t x875 = INT8_MIN;
	volatile uint16_t x876 = UINT16_MAX;
	int32_t t78 = 81773;

	t78 = ((x873>>(x874/x875))/x876);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x877 = INT8_MAX;
	static int32_t x878 = -1;
	int32_t x879 = INT32_MIN;
	volatile uint64_t x880 = 369335573490LLU;
	volatile uint64_t t79 = 8705691436369LLU;

	t79 = ((x877>>(x878/x879))/x880);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x898 = 88U;
	int32_t x899 = INT32_MIN;
	volatile uint16_t x900 = 5U;

	t80 = ((x897>>(x898/x899))/x900);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x910 = 1;
	int8_t x911 = INT8_MIN;
	static int8_t x912 = -1;
	int32_t t81 = 710503920;

	t81 = ((x909>>(x910/x911))/x912);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x913 = 388;
	static volatile int8_t x914 = -30;
	int8_t x915 = INT8_MIN;
	int16_t x916 = INT16_MAX;
	int32_t t82 = -422;

	t82 = ((x913>>(x914/x915))/x916);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x925 = 157515310486544LLU;
	int8_t x926 = -1;
	int64_t x927 = 11638099LL;
	int8_t x928 = INT8_MIN;
	uint64_t t83 = 428715LLU;

	t83 = ((x925>>(x926/x927))/x928);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x929 = UINT32_MAX;
	int16_t x931 = 3246;
	int8_t x932 = INT8_MAX;
	uint32_t t84 = 25269U;

	t84 = ((x929>>(x930/x931))/x932);

	if (t84 != 33818640U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x966 = INT32_MAX;
	uint64_t x967 = UINT64_MAX;
	volatile int8_t x968 = -1;
	volatile uint64_t t85 = 18405LLU;

	t85 = ((x965>>(x966/x967))/x968);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x969 = UINT32_MAX;
	int16_t x970 = -251;
	static int8_t x971 = -24;
	int64_t x972 = -1LL;

	t86 = ((x969>>(x970/x971))/x972);

	if (t86 != -4194303LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x973 = UINT64_MAX;
	static uint64_t x974 = 1461865312811LLU;
	int64_t x975 = INT64_MIN;
	volatile uint64_t t87 = 130952955120483645LLU;

	t87 = ((x973>>(x974/x975))/x976);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x981 = 2U;
	uint64_t x984 = 616156770501720050LLU;
	uint64_t t88 = 1146917797655836259LLU;

	t88 = ((x981>>(x982/x983))/x984);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x1005 = 2878U;
	int32_t x1006 = -5244842;
	static volatile int32_t t89 = 3511;

	t89 = ((x1005>>(x1006/x1007))/x1008);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x1025 = INT16_MAX;
	int8_t x1026 = 35;
	int32_t x1027 = INT32_MAX;

	t90 = ((x1025>>(x1026/x1027))/x1028);

	if (t90 != 21) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1029 = UINT16_MAX;
	int8_t x1030 = INT8_MIN;
	volatile int32_t x1031 = 1472;
	volatile int32_t x1032 = INT32_MIN;

	t91 = ((x1029>>(x1030/x1031))/x1032);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1057 = UINT64_MAX;
	volatile int8_t x1058 = INT8_MAX;
	volatile int64_t x1059 = 7201778LL;
	uint16_t x1060 = 10151U;
	uint64_t t92 = 924LLU;

	t92 = ((x1057>>(x1058/x1059))/x1060);

	if (t92 != 1817234171383070LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1106 = INT8_MAX;
	uint64_t x1108 = 16370385697351406LLU;
	volatile uint64_t t93 = 56LLU;

	t93 = ((x1105>>(x1106/x1107))/x1108);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x1121 = 768760210281005325LL;
	static int16_t x1122 = -1;
	volatile int8_t x1123 = INT8_MIN;
	static int64_t x1124 = -1LL;
	int64_t t94 = -774808507913793378LL;

	t94 = ((x1121>>(x1122/x1123))/x1124);

	if (t94 != -768760210281005325LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1126 = -3;
	volatile uint16_t x1127 = UINT16_MAX;
	uint32_t x1128 = UINT32_MAX;
	volatile int64_t t95 = -184LL;

	t95 = ((x1125>>(x1126/x1127))/x1128);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1157 = INT64_MAX;
	static uint8_t x1158 = UINT8_MAX;
	int64_t x1160 = -621852322418LL;

	t96 = ((x1157>>(x1158/x1159))/x1160);

	if (t96 != -14832093LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1171 = -6879;
	int64_t x1172 = INT64_MIN;

	t97 = ((x1169>>(x1170/x1171))/x1172);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1173 = UINT8_MAX;
	static int8_t x1174 = INT8_MIN;
	int8_t x1175 = INT8_MIN;
	static uint8_t x1176 = 117U;
	static volatile int32_t t98 = -36188;

	t98 = ((x1173>>(x1174/x1175))/x1176);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1193 = UINT64_MAX;
	volatile int8_t x1194 = -1;
	uint32_t x1195 = UINT32_MAX;

	t99 = ((x1193>>(x1194/x1195))/x1196);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

