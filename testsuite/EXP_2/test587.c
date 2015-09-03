#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = INT16_MIN;
volatile int32_t x24 = INT32_MAX;
volatile uint64_t t2 = 1947LLU;
int16_t x68 = 7;
static volatile int32_t t4 = 915;
int32_t x77 = INT32_MAX;
uint32_t x80 = 239534576U;
volatile uint8_t x101 = 59U;
volatile uint8_t x113 = UINT8_MAX;
int32_t x138 = 56795561;
int64_t x171 = INT64_MIN;
uint64_t x205 = UINT64_MAX;
static volatile int64_t x210 = -1LL;
uint32_t x213 = 4U;
volatile int8_t x215 = INT8_MIN;
uint8_t x223 = 125U;
static uint64_t x224 = 38LLU;
volatile uint16_t x254 = 1U;
uint64_t x263 = 59340811LLU;
int64_t x290 = INT64_MIN;
volatile int32_t t18 = 1103919;
int64_t x311 = INT64_MIN;
int8_t x334 = INT8_MAX;
volatile int64_t x336 = -1LL;
volatile uint32_t x337 = UINT32_MAX;
static volatile int64_t x340 = INT64_MAX;
int64_t t24 = 20966638561201021LL;
volatile uint32_t t25 = 7751932U;
uint64_t x378 = 7201LLU;
uint64_t t26 = 20275539488LLU;
volatile int8_t x390 = INT8_MIN;
volatile uint32_t x392 = UINT32_MAX;
static int64_t x406 = -1LL;
int16_t x407 = 1464;
int64_t x447 = -1LL;
int64_t x477 = INT64_MAX;
uint16_t x480 = UINT16_MAX;
int16_t x513 = 1;
uint8_t x516 = 93U;
static volatile uint8_t x552 = 75U;
int64_t x565 = 1545353456983LL;
static int16_t x598 = INT16_MAX;
int8_t x672 = INT8_MAX;
static int64_t x737 = 1962994441LL;
uint32_t x739 = 9072U;
int64_t t49 = -110535LL;
int32_t x742 = INT32_MAX;
static uint8_t x750 = 8U;
static uint16_t x752 = 17836U;
static int64_t x755 = INT64_MIN;
static uint8_t x777 = 31U;
int16_t x780 = -15;
volatile int32_t t54 = -4998;
int8_t x782 = INT8_MAX;
uint64_t x783 = 298793111LLU;
int32_t t56 = -4917845;
uint32_t x817 = 1U;
volatile uint32_t t57 = 13959U;
uint64_t x829 = 148660LLU;
uint64_t x848 = 90408006LLU;
static volatile uint64_t t62 = 41105LLU;
volatile int32_t t64 = 7962767;
uint16_t x902 = UINT16_MAX;
int32_t x922 = 8;
uint64_t t71 = 15148941224LLU;
uint64_t x959 = 35082429549559772LLU;
static int32_t x1003 = INT32_MIN;
uint16_t x1015 = 3023U;
volatile uint32_t x1017 = 14835238U;
uint64_t x1018 = UINT64_MAX;
uint32_t x1029 = 234108593U;
volatile int64_t x1072 = INT64_MAX;
int64_t x1116 = -1LL;
int64_t x1125 = INT64_MAX;
static int32_t x1139 = INT32_MIN;
uint64_t x1170 = UINT64_MAX;
int16_t x1189 = 1018;
static volatile uint64_t x1192 = UINT64_MAX;
volatile uint16_t x1197 = 53U;
volatile int64_t t90 = -2094434689233LL;
volatile uint16_t x1205 = 664U;
static int16_t x1207 = INT16_MAX;
uint32_t x1297 = UINT32_MAX;
uint32_t t95 = 5U;
int32_t x1347 = INT32_MAX;
static int8_t x1362 = INT8_MAX;
uint32_t t98 = 12822U;
int16_t x1371 = -12;


void f0(void) {
	uint64_t x13 = 956106006008384LLU;
	static int8_t x14 = -15;
	int16_t x16 = INT16_MAX;
	static volatile uint64_t t0 = 17116460036467933LLU;

	t0 = ((x13>>(x14/x15))-x16);

	if (t0 != 956106005975617LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = -42;
	static uint64_t x19 = UINT64_MAX;
	volatile int32_t x20 = 7294624;
	volatile uint64_t t1 = 113LLU;

	t1 = ((x17>>(x18/x19))-x20);

	if (t1 != 18446744073702256991LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 32743717850477525LLU;
	int8_t x22 = INT8_MAX;
	static uint64_t x23 = 8007025410LLU;

	t2 = ((x21>>(x22/x23))-x24);

	if (t2 != 32743715702993878LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x61 = 1LL;
	uint64_t x62 = 52770LLU;
	volatile uint16_t x63 = 25772U;
	int16_t x64 = -1;
	volatile int64_t t3 = 21LL;

	t3 = ((x61>>(x62/x63))-x64);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int16_t x66 = 134;
	uint64_t x67 = UINT64_MAX;

	t4 = ((x65>>(x66/x67))-x68);

	if (t4 != 248) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x78 = -7885LL;
	int32_t x79 = INT32_MIN;
	uint32_t t5 = 5944088U;

	t5 = ((x77>>(x78/x79))-x80);

	if (t5 != 1907949071U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MAX;
	int64_t t6 = 25451590408850LL;

	t6 = ((x93>>(x94/x95))-x96);

	if (t6 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x102 = -4;
	int64_t x103 = INT64_MAX;
	static int32_t x104 = 2171441;
	int32_t t7 = -61585394;

	t7 = ((x101>>(x102/x103))-x104);

	if (t7 != -2171382) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t8 = 4;

	t8 = ((x113>>(x114/x115))-x116);

	if (t8 != 32895) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x137 = INT8_MAX;
	uint64_t x139 = 84228814924515688LLU;
	uint8_t x140 = 2U;
	int32_t t9 = 1036009444;

	t9 = ((x137>>(x138/x139))-x140);

	if (t9 != 125) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x169 = 6508539U;
	int16_t x170 = INT16_MIN;
	static uint8_t x172 = 6U;
	uint32_t t10 = 711U;

	t10 = ((x169>>(x170/x171))-x172);

	if (t10 != 6508533U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x206 = -1;
	static uint32_t x207 = UINT32_MAX;
	uint32_t x208 = 22919U;
	volatile uint64_t t11 = 532540253647148LLU;

	t11 = ((x205>>(x206/x207))-x208);

	if (t11 != 9223372036854752888LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x209 = 1;
	int32_t x211 = INT32_MIN;
	static volatile int64_t x212 = -1LL;
	volatile int64_t t12 = -973978833270755830LL;

	t12 = ((x209>>(x210/x211))-x212);

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x214 = 130161U;
	int64_t x216 = -1LL;
	static int64_t t13 = -1468188677604673465LL;

	t13 = ((x213>>(x214/x215))-x216);

	if (t13 != 5LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x221 = 39U;
	uint8_t x222 = 6U;
	static volatile uint64_t t14 = 61387238LLU;

	t14 = ((x221>>(x222/x223))-x224);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x253 = 25U;
	uint64_t x255 = 26437609745LLU;
	int32_t x256 = -8240;
	volatile int32_t t15 = 0;

	t15 = ((x253>>(x254/x255))-x256);

	if (t15 != 8265) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x261 = INT8_MAX;
	uint64_t x262 = 16396964LLU;
	volatile uint32_t x264 = 43602U;
	uint32_t t16 = 24387123U;

	t16 = ((x261>>(x262/x263))-x264);

	if (t16 != 4294923821U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x265 = 198035080203LLU;
	uint8_t x266 = 1U;
	int32_t x267 = 65322020;
	uint64_t x268 = 248600LLU;
	static uint64_t t17 = 31982256514205789LLU;

	t17 = ((x265>>(x266/x267))-x268);

	if (t17 != 198034831603LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x289 = 20;
	int64_t x291 = INT64_MIN;
	static int8_t x292 = INT8_MIN;

	t18 = ((x289>>(x290/x291))-x292);

	if (t18 != 138) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x297 = INT16_MAX;
	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MAX;
	int32_t t19 = 73551;

	t19 = ((x297>>(x298/x299))-x300);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x301 = 84U;
	int8_t x302 = INT8_MAX;
	uint32_t x303 = 380974U;
	int64_t x304 = -23578738048398433LL;
	volatile int64_t t20 = 22333LL;

	t20 = ((x301>>(x302/x303))-x304);

	if (t20 != 23578738048398517LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x309 = 0;
	volatile int32_t x310 = -1;
	int8_t x312 = 1;
	int32_t t21 = 1434;

	t21 = ((x309>>(x310/x311))-x312);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x333 = INT8_MAX;
	volatile int8_t x335 = INT8_MIN;
	static int64_t t22 = 13237042835917422LL;

	t22 = ((x333>>(x334/x335))-x336);

	if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x338 = 163U;
	static int64_t x339 = INT64_MIN;
	volatile int64_t t23 = 17209675523223LL;

	t23 = ((x337>>(x338/x339))-x340);

	if (t23 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x349 = 971228975LL;
	int8_t x350 = INT8_MIN;
	int32_t x351 = 1390;
	volatile int64_t x352 = INT64_MAX;

	t24 = ((x349>>(x350/x351))-x352);

	if (t24 != -9223372035883546832LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x365 = INT16_MAX;
	static uint64_t x366 = 11783591630LLU;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 472U;

	t25 = ((x365>>(x366/x367))-x368);

	if (t25 != 32295U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x377 = 17U;
	uint32_t x379 = UINT32_MAX;
	uint64_t x380 = 138833LLU;

	t26 = ((x377>>(x378/x379))-x380);

	if (t26 != 18446744073709412800LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x389 = 200;
	int32_t x391 = INT32_MIN;
	static uint32_t t27 = 140364U;

	t27 = ((x389>>(x390/x391))-x392);

	if (t27 != 201U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int8_t x394 = INT8_MIN;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = -1;
	volatile uint32_t t28 = 79U;

	t28 = ((x393>>(x394/x395))-x396);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x405 = 4118150781110577446LL;
	int16_t x408 = 77;
	int64_t t29 = 4453165059854LL;

	t29 = ((x405>>(x406/x407))-x408);

	if (t29 != 4118150781110577369LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x445 = 1U;
	static uint8_t x446 = 0U;
	uint16_t x448 = 129U;
	volatile int32_t t30 = -98932;

	t30 = ((x445>>(x446/x447))-x448);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x453 = 1453U;
	static int16_t x454 = INT16_MIN;
	static int64_t x455 = INT64_MIN;
	int8_t x456 = 13;
	volatile int32_t t31 = 6186;

	t31 = ((x453>>(x454/x455))-x456);

	if (t31 != 1440) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x478 = 58U;
	volatile int16_t x479 = INT16_MAX;
	static int64_t t32 = -118135LL;

	t32 = ((x477>>(x478/x479))-x480);

	if (t32 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x481 = 14U;
	static int8_t x482 = INT8_MIN;
	int16_t x483 = -7549;
	static volatile int32_t x484 = -1;
	volatile int32_t t33 = 249217;

	t33 = ((x481>>(x482/x483))-x484);

	if (t33 != 15) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x509 = UINT64_MAX;
	uint8_t x510 = UINT8_MAX;
	volatile uint32_t x511 = UINT32_MAX;
	int32_t x512 = INT32_MIN;
	uint64_t t34 = 682676LLU;

	t34 = ((x509>>(x510/x511))-x512);

	if (t34 != 2147483647LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	volatile int32_t t35 = -11;

	t35 = ((x513>>(x514/x515))-x516);

	if (t35 != -92) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x533 = UINT8_MAX;
	uint32_t x534 = 104080613U;
	static int16_t x535 = -1;
	uint8_t x536 = UINT8_MAX;
	int32_t t36 = -14934938;

	t36 = ((x533>>(x534/x535))-x536);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x537 = 1241U;
	int8_t x538 = -1;
	int16_t x539 = -1;
	int16_t x540 = INT16_MAX;
	volatile int32_t t37 = -1;

	t37 = ((x537>>(x538/x539))-x540);

	if (t37 != -32147) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x549 = INT16_MAX;
	volatile uint64_t x550 = UINT64_MAX;
	volatile int32_t x551 = INT32_MIN;
	static volatile int32_t t38 = -92;

	t38 = ((x549>>(x550/x551))-x552);

	if (t38 != 16308) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x561 = 8850U;
	int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MAX;
	int32_t x564 = -1;
	volatile int32_t t39 = 1292;

	t39 = ((x561>>(x562/x563))-x564);

	if (t39 != 8851) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x566 = 1;
	uint64_t x567 = UINT64_MAX;
	int32_t x568 = INT32_MIN;
	volatile int64_t t40 = -49621969575LL;

	t40 = ((x565>>(x566/x567))-x568);

	if (t40 != 1547500940631LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x569 = INT64_MAX;
	uint8_t x570 = UINT8_MAX;
	volatile uint8_t x571 = UINT8_MAX;
	int8_t x572 = INT8_MIN;
	volatile int64_t t41 = -552056674499LL;

	t41 = ((x569>>(x570/x571))-x572);

	if (t41 != 4611686018427388031LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x581 = UINT64_MAX;
	int8_t x582 = INT8_MAX;
	static uint64_t x583 = 63LLU;
	uint8_t x584 = 1U;
	uint64_t t42 = 279546561LLU;

	t42 = ((x581>>(x582/x583))-x584);

	if (t42 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x585 = INT32_MAX;
	uint64_t x586 = 2589LLU;
	uint64_t x587 = UINT64_MAX;
	uint64_t x588 = 17339508824LLU;
	uint64_t t43 = 1638499523104971807LLU;

	t43 = ((x585>>(x586/x587))-x588);

	if (t43 != 18446744058517526439LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x597 = 6;
	int16_t x599 = INT16_MIN;
	volatile int16_t x600 = INT16_MIN;
	int32_t t44 = -21033844;

	t44 = ((x597>>(x598/x599))-x600);

	if (t44 != 32774) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x613 = 13U;
	uint64_t x614 = 1348LLU;
	int16_t x615 = 1164;
	int8_t x616 = INT8_MIN;
	volatile int32_t t45 = 16;

	t45 = ((x613>>(x614/x615))-x616);

	if (t45 != 134) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x657 = 210183;
	uint16_t x658 = 540U;
	int16_t x659 = INT16_MAX;
	static uint32_t x660 = 39U;
	uint32_t t46 = 1989U;

	t46 = ((x657>>(x658/x659))-x660);

	if (t46 != 210144U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x669 = 1;
	int16_t x670 = -1;
	int16_t x671 = INT16_MIN;
	static volatile int32_t t47 = 5;

	t47 = ((x669>>(x670/x671))-x672);

	if (t47 != -126) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x697 = 133U;
	int64_t x698 = INT64_MIN;
	volatile int64_t x699 = INT64_MIN;
	int32_t x700 = -732924729;
	volatile int32_t t48 = -238180;

	t48 = ((x697>>(x698/x699))-x700);

	if (t48 != 732924795) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x738 = 242875LLU;
	static uint32_t x740 = 1087U;

	t49 = ((x737>>(x738/x739))-x740);

	if (t49 != -1058LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x741 = 6U;
	uint64_t x743 = 714836116LLU;
	volatile uint8_t x744 = UINT8_MAX;
	int32_t t50 = 28333492;

	t50 = ((x741>>(x742/x743))-x744);

	if (t50 != -255) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x749 = INT32_MAX;
	volatile int32_t x751 = -108394027;
	int32_t t51 = 122;

	t51 = ((x749>>(x750/x751))-x752);

	if (t51 != 2147465811) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x753 = INT16_MAX;
	static int16_t x754 = -3757;
	uint8_t x756 = 102U;
	volatile int32_t t52 = 309;

	t52 = ((x753>>(x754/x755))-x756);

	if (t52 != 32665) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x769 = INT8_MAX;
	int16_t x770 = -1;
	int16_t x771 = INT16_MIN;
	int8_t x772 = -10;
	int32_t t53 = 1;

	t53 = ((x769>>(x770/x771))-x772);

	if (t53 != 137) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x778 = INT8_MIN;
	int16_t x779 = INT16_MIN;

	t54 = ((x777>>(x778/x779))-x780);

	if (t54 != 46) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x781 = 751040;
	int8_t x784 = -1;
	int32_t t55 = -12802;

	t55 = ((x781>>(x782/x783))-x784);

	if (t55 != 751041) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x809 = UINT8_MAX;
	uint16_t x810 = 51U;
	uint32_t x811 = UINT32_MAX;
	volatile int8_t x812 = 11;

	t56 = ((x809>>(x810/x811))-x812);

	if (t56 != 244) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x818 = 0U;
	int64_t x819 = INT64_MIN;
	int32_t x820 = -609778137;

	t57 = ((x817>>(x818/x819))-x820);

	if (t57 != 609778138U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x830 = 3;
	int16_t x831 = 2996;
	int16_t x832 = INT16_MAX;
	uint64_t t58 = 6452467739846678480LLU;

	t58 = ((x829>>(x830/x831))-x832);

	if (t58 != 115893LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x833 = UINT64_MAX;
	static int8_t x834 = -44;
	int16_t x835 = INT16_MIN;
	uint64_t x836 = UINT64_MAX;
	uint64_t t59 = 503249311847524LLU;

	t59 = ((x833>>(x834/x835))-x836);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x845 = INT8_MAX;
	int8_t x846 = -1;
	int32_t x847 = INT32_MAX;
	volatile uint64_t t60 = 16819605679280LLU;

	t60 = ((x845>>(x846/x847))-x848);

	if (t60 != 18446744073619143737LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x857 = UINT32_MAX;
	int16_t x858 = INT16_MIN;
	volatile int16_t x859 = INT16_MIN;
	static int16_t x860 = INT16_MIN;
	volatile uint32_t t61 = 0U;

	t61 = ((x857>>(x858/x859))-x860);

	if (t61 != 2147516415U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x861 = UINT64_MAX;
	int64_t x862 = -1LL;
	volatile int16_t x863 = INT16_MIN;
	int16_t x864 = INT16_MIN;

	t62 = ((x861>>(x862/x863))-x864);

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x889 = 5U;
	static volatile int32_t x890 = 1092586;
	uint16_t x891 = UINT16_MAX;
	int8_t x892 = 0;
	volatile int32_t t63 = 12;

	t63 = ((x889>>(x890/x891))-x892);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x893 = 671U;
	int64_t x894 = -1LL;
	uint64_t x895 = UINT64_MAX;
	int32_t x896 = -1;

	t64 = ((x893>>(x894/x895))-x896);

	if (t64 != 336) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x901 = 4U;
	uint64_t x903 = UINT64_MAX;
	int32_t x904 = -5779;
	static uint32_t t65 = 1083U;

	t65 = ((x901>>(x902/x903))-x904);

	if (t65 != 5783U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x909 = UINT8_MAX;
	uint8_t x910 = UINT8_MAX;
	int64_t x911 = INT64_MAX;
	volatile uint64_t x912 = UINT64_MAX;
	volatile uint64_t t66 = 6735986174691LLU;

	t66 = ((x909>>(x910/x911))-x912);

	if (t66 != 256LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x917 = 24U;
	static int32_t x918 = -1;
	volatile int8_t x919 = INT8_MAX;
	int32_t x920 = -12;
	volatile int32_t t67 = 323369;

	t67 = ((x917>>(x918/x919))-x920);

	if (t67 != 36) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x921 = 18441712U;
	uint64_t x923 = 25463857561251413LLU;
	int32_t x924 = INT32_MAX;
	static volatile uint32_t t68 = 79U;

	t68 = ((x921>>(x922/x923))-x924);

	if (t68 != 2165925361U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x933 = 2451820;
	uint64_t x934 = 149312955681435201LLU;
	int64_t x935 = INT64_MIN;
	volatile int8_t x936 = -1;
	static int32_t t69 = -6757;

	t69 = ((x933>>(x934/x935))-x936);

	if (t69 != 2451821) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x937 = 3U;
	int16_t x938 = -1;
	int64_t x939 = INT64_MAX;
	uint16_t x940 = 2186U;
	static int32_t t70 = 370;

	t70 = ((x937>>(x938/x939))-x940);

	if (t70 != -2183) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x949 = 679;
	volatile uint16_t x950 = 222U;
	int32_t x951 = 782;
	uint64_t x952 = UINT64_MAX;

	t71 = ((x949>>(x950/x951))-x952);

	if (t71 != 680LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x957 = 48U;
	uint32_t x958 = UINT32_MAX;
	static uint32_t x960 = 8597U;
	uint32_t t72 = 1868824708U;

	t72 = ((x957>>(x958/x959))-x960);

	if (t72 != 4294958747U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x993 = 462748429074818LL;
	static int8_t x994 = 1;
	uint8_t x995 = 3U;
	static uint64_t x996 = 55338657736759852LLU;
	volatile uint64_t t73 = 0LLU;

	t73 = ((x993>>(x994/x995))-x996);

	if (t73 != 18391868164401866582LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1001 = 0U;
	int64_t x1002 = -3231357579LL;
	int64_t x1004 = -1LL;
	volatile int64_t t74 = 277497115LL;

	t74 = ((x1001>>(x1002/x1003))-x1004);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1013 = 14862;
	int32_t x1014 = 1;
	uint16_t x1016 = UINT16_MAX;
	int32_t t75 = -556413685;

	t75 = ((x1013>>(x1014/x1015))-x1016);

	if (t75 != -50673) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x1019 = -27;
	uint32_t x1020 = UINT32_MAX;
	volatile uint32_t t76 = 3U;

	t76 = ((x1017>>(x1018/x1019))-x1020);

	if (t76 != 7417620U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1030 = INT8_MIN;
	static int64_t x1031 = INT64_MIN;
	int8_t x1032 = 1;
	uint32_t t77 = 51U;

	t77 = ((x1029>>(x1030/x1031))-x1032);

	if (t77 != 234108592U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1053 = 1744961287U;
	int32_t x1054 = -531422;
	volatile int64_t x1055 = INT64_MAX;
	int32_t x1056 = INT32_MIN;
	uint32_t t78 = 1418U;

	t78 = ((x1053>>(x1054/x1055))-x1056);

	if (t78 != 3892444935U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1069 = 2457121;
	uint32_t x1070 = 9U;
	int32_t x1071 = -98908428;
	int64_t t79 = 1353750783550LL;

	t79 = ((x1069>>(x1070/x1071))-x1072);

	if (t79 != -9223372036852318686LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1093 = 1U;
	uint64_t x1094 = 1136927549LLU;
	int8_t x1095 = -21;
	uint32_t x1096 = UINT32_MAX;
	volatile uint32_t t80 = 3790560U;

	t80 = ((x1093>>(x1094/x1095))-x1096);

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1101 = 13U;
	int64_t x1102 = -1LL;
	volatile int16_t x1103 = INT16_MIN;
	int8_t x1104 = 4;
	static int32_t t81 = 590104;

	t81 = ((x1101>>(x1102/x1103))-x1104);

	if (t81 != 9) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1113 = 15U;
	static uint32_t x1114 = 110252092U;
	volatile int16_t x1115 = INT16_MIN;
	static volatile int64_t t82 = -71701LL;

	t82 = ((x1113>>(x1114/x1115))-x1116);

	if (t82 != 16LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x1117 = 2U;
	static int64_t x1118 = -7LL;
	uint32_t x1119 = UINT32_MAX;
	uint16_t x1120 = 5U;
	volatile int32_t t83 = -32344;

	t83 = ((x1117>>(x1118/x1119))-x1120);

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1126 = INT8_MIN;
	volatile int32_t x1127 = INT32_MIN;
	static uint16_t x1128 = 39U;
	static int64_t t84 = -13274849478827364LL;

	t84 = ((x1125>>(x1126/x1127))-x1128);

	if (t84 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1133 = 32672789161LLU;
	uint64_t x1134 = 1823722589741754028LLU;
	int64_t x1135 = -6LL;
	int16_t x1136 = 3;
	volatile uint64_t t85 = 201518925092LLU;

	t85 = ((x1133>>(x1134/x1135))-x1136);

	if (t85 != 32672789158LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x1137 = 44LLU;
	volatile uint16_t x1138 = 13U;
	int64_t x1140 = INT64_MIN;
	volatile uint64_t t86 = 1LLU;

	t86 = ((x1137>>(x1138/x1139))-x1140);

	if (t86 != 9223372036854775852LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1153 = INT16_MAX;
	volatile int16_t x1154 = -1;
	int16_t x1155 = -1;
	int16_t x1156 = INT16_MIN;
	int32_t t87 = 531387777;

	t87 = ((x1153>>(x1154/x1155))-x1156);

	if (t87 != 49151) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1169 = UINT8_MAX;
	int16_t x1171 = -7298;
	int16_t x1172 = INT16_MAX;
	volatile int32_t t88 = 2;

	t88 = ((x1169>>(x1170/x1171))-x1172);

	if (t88 != -32640) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x1190 = UINT8_MAX;
	static uint32_t x1191 = 6829334U;
	uint64_t t89 = 1114923184326LLU;

	t89 = ((x1189>>(x1190/x1191))-x1192);

	if (t89 != 1019LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1198 = 0U;
	int16_t x1199 = 2;
	volatile int64_t x1200 = INT64_MAX;

	t90 = ((x1197>>(x1198/x1199))-x1200);

	if (t90 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x1206 = 364657U;
	volatile int8_t x1208 = -1;
	volatile int32_t t91 = -2933126;

	t91 = ((x1205>>(x1206/x1207))-x1208);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1261 = UINT32_MAX;
	volatile int16_t x1262 = INT16_MAX;
	uint64_t x1263 = 13073764157480LLU;
	volatile int64_t x1264 = INT64_MAX;
	volatile int64_t t92 = -892421LL;

	t92 = ((x1261>>(x1262/x1263))-x1264);

	if (t92 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1298 = -1;
	static int8_t x1299 = 5;
	uint16_t x1300 = UINT16_MAX;
	uint32_t t93 = 27447045U;

	t93 = ((x1297>>(x1298/x1299))-x1300);

	if (t93 != 4294901760U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x1317 = UINT64_MAX;
	uint16_t x1318 = 2891U;
	int8_t x1319 = INT8_MAX;
	int16_t x1320 = 94;
	uint64_t t94 = 1191083315459500467LLU;

	t94 = ((x1317>>(x1318/x1319))-x1320);

	if (t94 != 4398046511009LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1321 = 1546767U;
	uint8_t x1322 = 49U;
	int8_t x1323 = INT8_MIN;
	int8_t x1324 = 45;

	t95 = ((x1321>>(x1322/x1323))-x1324);

	if (t95 != 1546722U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1325 = UINT64_MAX;
	int8_t x1326 = INT8_MAX;
	int32_t x1327 = INT32_MIN;
	uint16_t x1328 = UINT16_MAX;
	static uint64_t t96 = 5LLU;

	t96 = ((x1325>>(x1326/x1327))-x1328);

	if (t96 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x1345 = 8LLU;
	int16_t x1346 = INT16_MAX;
	volatile uint64_t x1348 = UINT64_MAX;
	uint64_t t97 = 110509688LLU;

	t97 = ((x1345>>(x1346/x1347))-x1348);

	if (t97 != 9LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1361 = 13U;
	int64_t x1363 = INT64_MAX;
	static uint32_t x1364 = 6887U;

	t98 = ((x1361>>(x1362/x1363))-x1364);

	if (t98 != 4294960422U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x1369 = 1021U;
	int16_t x1370 = -378;
	uint8_t x1372 = UINT8_MAX;
	volatile int32_t t99 = 1044501206;

	t99 = ((x1369>>(x1370/x1371))-x1372);

	if (t99 != -255) { NG(); } else { ; }
	
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

