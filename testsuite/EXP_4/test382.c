#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 18688257500LLU;
static int8_t x18 = -49;
int32_t x19 = INT32_MIN;
volatile uint64_t t4 = 3LLU;
int8_t x67 = 17;
int32_t x83 = -1;
uint64_t t7 = 166476817261741LLU;
uint64_t x111 = UINT64_MAX;
volatile int16_t x127 = -1;
int64_t x142 = -206971645324013579LL;
static uint16_t x143 = 384U;
static int32_t x184 = -1;
static volatile uint32_t x222 = UINT32_MAX;
volatile int64_t t14 = 62910351LL;
int32_t x236 = -1;
int64_t x238 = INT64_MIN;
uint8_t x239 = 1U;
int8_t x245 = INT8_MAX;
int32_t t17 = 61784;
int16_t x277 = -1;
volatile int64_t x293 = INT64_MAX;
int16_t x313 = 5061;
int32_t x315 = INT32_MAX;
uint64_t x316 = 1809414592969122LLU;
uint64_t x388 = UINT64_MAX;
volatile uint64_t t25 = 25617121776LLU;
int16_t x423 = INT16_MIN;
static int16_t x426 = -5;
int64_t x427 = INT64_MAX;
int64_t x450 = INT64_MIN;
static int32_t t31 = 387;
int32_t x461 = INT32_MAX;
int8_t x472 = INT8_MAX;
volatile int64_t t33 = -289887851236907LL;
uint8_t x479 = 1U;
volatile int8_t x480 = 3;
int16_t x481 = INT16_MIN;
uint16_t x483 = 1728U;
static volatile uint64_t x484 = 5541834708575551592LLU;
int8_t x490 = INT8_MIN;
int32_t x512 = -1;
static uint8_t x537 = UINT8_MAX;
volatile uint32_t x542 = 379U;
volatile int8_t x544 = INT8_MIN;
int64_t x567 = -598578LL;
volatile int16_t x568 = 2;
int32_t x586 = INT32_MIN;
int16_t x594 = INT16_MIN;
volatile int32_t x652 = -1;
int8_t x660 = -1;
uint32_t x671 = 1U;
int64_t x672 = -1LL;
uint32_t x681 = 1433U;
volatile int64_t t50 = 461739325669617LL;
int64_t x709 = INT64_MIN;
uint64_t x712 = 569210LLU;
int16_t x743 = -1;
uint8_t x760 = 2U;
volatile int32_t t55 = 1;
static uint32_t x788 = 371U;
int16_t x792 = 2;
static volatile uint64_t t58 = 3558LLU;
static volatile uint32_t t60 = 172069U;
uint16_t x820 = 1850U;
volatile int64_t x823 = -1LL;
volatile int64_t t63 = -3847202422188LL;
static int8_t x884 = -1;
int64_t x938 = INT64_MIN;
int64_t t70 = -34483309616LL;
int64_t x953 = -1LL;
static int16_t x989 = -157;
static volatile int8_t x991 = INT8_MIN;
static int32_t x1007 = -1;
uint32_t x1016 = 265265U;
int64_t x1045 = 114192LL;
int64_t x1048 = -1LL;
uint64_t x1061 = 2646966542603087806LLU;
uint8_t x1075 = 15U;
uint32_t x1077 = 24056U;
int16_t x1079 = -1;
uint32_t x1110 = UINT32_MAX;
uint64_t t86 = 4190364LLU;
int64_t x1133 = -14500325371276976LL;
uint16_t x1135 = UINT16_MAX;
int64_t x1174 = -20363014691848562LL;
volatile int32_t x1212 = -1;
int64_t x1233 = INT64_MIN;
int64_t x1234 = INT64_MIN;
int16_t x1236 = INT16_MIN;
int64_t x1237 = -1LL;
uint32_t x1247 = UINT32_MAX;
int64_t x1258 = -1LL;
uint32_t x1313 = 2039853U;


void f0(void) {
	int8_t x5 = -2;
	uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 6401U;
	uint64_t t0 = 42276094302115284LLU;

	t0 = (x5%(x6/(x7*x8)));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 9;
	uint32_t x10 = UINT32_MAX;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = INT8_MAX;
	uint32_t t1 = 520910745U;

	t1 = (x9%(x10/(x11*x12)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 3U;
	uint64_t x20 = 7662810909361752646LLU;
	uint64_t t2 = 778703329LLU;

	t2 = (x17%(x18/(x19*x20)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MIN;
	int32_t x31 = -1;
	volatile uint16_t x32 = UINT16_MAX;
	static volatile uint64_t t3 = 71128454222055264LLU;

	t3 = (x29%(x30/(x31*x32)));

	if (t3 != 32767LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x45 = -87;
	static uint64_t x46 = UINT64_MAX;
	static uint8_t x47 = UINT8_MAX;
	int64_t x48 = 57305366LL;

	t4 = (x45%(x46/(x47*x48)));

	if (t4 != 64565857LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MAX;
	int8_t x59 = -2;
	int16_t x60 = -1;
	int64_t t5 = -9634352351705LL;

	t5 = (x57%(x58/(x59*x60)));

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x65 = 1;
	volatile int16_t x66 = INT16_MIN;
	uint16_t x68 = 250U;
	volatile int32_t t6 = 110589379;

	t6 = (x65%(x66/(x67*x68)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	uint64_t x84 = UINT64_MAX;

	t7 = (x81%(x82/(x83*x84)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x109 = INT64_MIN;
	volatile int16_t x110 = INT16_MAX;
	int8_t x112 = -1;
	uint64_t t8 = 3829853865518534856LLU;

	t8 = (x109%(x110/(x111*x112)));

	if (t8 != 8LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x117 = 41U;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = 5006439LL;
	static int32_t x120 = INT32_MAX;
	static uint64_t t9 = 1374834496LLU;

	t9 = (x117%(x118/(x119*x120)));

	if (t9 != 41LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x125 = 19LLU;
	int16_t x126 = INT16_MIN;
	uint64_t x128 = 49493488719LLU;
	uint64_t t10 = 123052994LLU;

	t10 = (x125%(x126/(x127*x128)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x141 = 78230945LL;
	int8_t x144 = 1;
	static volatile int64_t t11 = 165931LL;

	t11 = (x141%(x142/(x143*x144)));

	if (t11 != 78230945LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x181 = 527U;
	volatile int64_t x182 = 15047710222257LL;
	static volatile uint64_t x183 = UINT64_MAX;
	static uint64_t t12 = 103509749931LLU;

	t12 = (x181%(x182/(x183*x184)));

	if (t12 != 527LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x221 = INT64_MIN;
	static int8_t x223 = INT8_MIN;
	int8_t x224 = 3;
	volatile int64_t t13 = -818LL;

	t13 = (x221%(x222/(x223*x224)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x225 = INT64_MIN;
	volatile int32_t x226 = INT32_MAX;
	static int32_t x227 = -1;
	int16_t x228 = 370;

	t14 = (x225%(x226/(x227*x228)));

	if (t14 != -202248LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x233 = -9;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = UINT64_MAX;
	volatile uint64_t t15 = 5LLU;

	t15 = (x233%(x234/(x235*x236)));

	if (t15 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x237 = -1LL;
	volatile int8_t x240 = -2;
	int64_t t16 = 1510944722365833LL;

	t16 = (x237%(x238/(x239*x240)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x246 = 3580168;
	static int8_t x247 = INT8_MIN;
	int32_t x248 = 2707;

	t17 = (x245%(x246/(x247*x248)));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x278 = 23489781LLU;
	int16_t x279 = 3428;
	uint16_t x280 = 1194U;
	uint64_t t18 = 1169LLU;

	t18 = (x277%(x278/(x279*x280)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x294 = INT32_MIN;
	volatile int8_t x295 = -5;
	static volatile int8_t x296 = -1;
	int64_t t19 = 149174328692LL;

	t19 = (x293%(x294/(x295*x296)));

	if (t19 != 17LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x314 = -49;
	uint64_t t20 = 8335904569154786499LLU;

	t20 = (x313%(x314/(x315*x316)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x345 = -1;
	int8_t x346 = INT8_MAX;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = -1;
	uint64_t t21 = 3765984084710LLU;

	t21 = (x345%(x346/(x347*x348)));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MIN;
	int32_t x351 = 25772;
	int8_t x352 = -7;
	volatile int64_t t22 = -8004LL;

	t22 = (x349%(x350/(x351*x352)));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x369 = INT16_MIN;
	static int64_t x370 = INT64_MAX;
	static uint8_t x371 = 3U;
	int64_t x372 = -1LL;
	int64_t t23 = 12LL;

	t23 = (x369%(x370/(x371*x372)));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	static int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	int32_t x384 = -1;
	int64_t t24 = -60504332LL;

	t24 = (x381%(x382/(x383*x384)));

	if (t24 != 255LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x385 = 310;
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = UINT16_MAX;

	t25 = (x385%(x386/(x387*x388)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x393 = INT8_MAX;
	int64_t x394 = INT64_MIN;
	static int8_t x395 = INT8_MIN;
	int16_t x396 = 3159;
	int64_t t26 = 22478562831LL;

	t26 = (x393%(x394/(x395*x396)));

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x397 = 106412;
	volatile int64_t x398 = -1LL;
	uint8_t x399 = 1U;
	uint8_t x400 = 1U;
	volatile int64_t t27 = -1180911345774LL;

	t27 = (x397%(x398/(x399*x400)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x421 = 3U;
	int64_t x422 = INT64_MIN;
	static int64_t x424 = 896605417279LL;
	volatile int64_t t28 = 1LL;

	t28 = (x421%(x422/(x423*x424)));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x425 = INT8_MAX;
	uint64_t x428 = 3455519885LLU;
	volatile uint64_t t29 = 261447LLU;

	t29 = (x425%(x426/(x427*x428)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x449 = INT8_MAX;
	volatile int16_t x451 = INT16_MAX;
	int8_t x452 = 3;
	volatile int64_t t30 = -451LL;

	t30 = (x449%(x450/(x451*x452)));

	if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x457 = -4621166;
	volatile int16_t x458 = INT16_MIN;
	int16_t x459 = 106;
	static int8_t x460 = INT8_MIN;

	t31 = (x457%(x458/(x459*x460)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x462 = UINT32_MAX;
	int32_t x463 = -1;
	static int16_t x464 = INT16_MIN;
	uint32_t t32 = 826774636U;

	t32 = (x461%(x462/(x463*x464)));

	if (t32 != 16383U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x469 = UINT16_MAX;
	int64_t x470 = -8238637948246153LL;
	int16_t x471 = INT16_MAX;

	t33 = (x469%(x470/(x471*x472)));

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x477 = INT64_MAX;
	int16_t x478 = INT16_MIN;
	static int64_t t34 = -60LL;

	t34 = (x477%(x478/(x479*x480)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x482 = -22778568;
	volatile uint64_t t35 = 227972LLU;

	t35 = (x481%(x482/(x483*x484)));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x489 = 20477048LLU;
	int16_t x491 = 126;
	uint64_t x492 = 49488LLU;
	uint64_t t36 = 9229624682419639LLU;

	t36 = (x489%(x490/(x491*x492)));

	if (t36 != 20477048LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x501 = 109U;
	int64_t x502 = INT64_MAX;
	static volatile uint8_t x503 = UINT8_MAX;
	static uint16_t x504 = 1310U;
	volatile int64_t t37 = -1780705LL;

	t37 = (x501%(x502/(x503*x504)));

	if (t37 != 109LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x509 = 1;
	int32_t x510 = INT32_MIN;
	int8_t x511 = -45;
	volatile int32_t t38 = -52;

	t38 = (x509%(x510/(x511*x512)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x538 = 2631LLU;
	volatile int8_t x539 = INT8_MIN;
	int16_t x540 = -3;
	uint64_t t39 = 612425866560173LLU;

	t39 = (x537%(x538/(x539*x540)));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x541 = INT64_MIN;
	uint32_t x543 = UINT32_MAX;
	volatile int64_t t40 = 199519LL;

	t40 = (x541%(x542/(x543*x544)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x565 = UINT32_MAX;
	static volatile int64_t x566 = INT64_MIN;
	int64_t t41 = -1243LL;

	t41 = (x565%(x566/(x567*x568)));

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x569 = INT32_MIN;
	static int16_t x570 = -2;
	int32_t x571 = INT32_MIN;
	uint32_t x572 = UINT32_MAX;
	volatile uint32_t t42 = 898U;

	t42 = (x569%(x570/(x571*x572)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x585 = 1U;
	volatile int16_t x587 = INT16_MIN;
	uint64_t x588 = 6994462237021383LLU;
	uint64_t t43 = 116267822952LLU;

	t43 = (x585%(x586/(x587*x588)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x593 = -1;
	uint16_t x595 = 5876U;
	uint64_t x596 = 250880870505889453LLU;
	uint64_t t44 = 2382463245482916078LLU;

	t44 = (x593%(x594/(x595*x596)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x633 = INT16_MIN;
	int64_t x634 = INT64_MIN;
	uint16_t x635 = 59U;
	static uint64_t x636 = 122337755LLU;
	uint64_t t45 = 14988528LLU;

	t45 = (x633%(x634/(x635*x636)));

	if (t45 != 222461295LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x649 = UINT64_MAX;
	static int64_t x650 = INT64_MIN;
	static int32_t x651 = 3;
	uint64_t t46 = 37LLU;

	t46 = (x649%(x650/(x651*x652)));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x657 = -1;
	int64_t x658 = -527LL;
	uint8_t x659 = 5U;
	static int64_t t47 = 2492508083LL;

	t47 = (x657%(x658/(x659*x660)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x669 = 4353LLU;
	uint64_t x670 = UINT64_MAX;
	static volatile uint64_t t48 = 1350LLU;

	t48 = (x669%(x670/(x671*x672)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x682 = INT64_MIN;
	int8_t x683 = INT8_MAX;
	int16_t x684 = INT16_MIN;
	int64_t t49 = 55519LL;

	t49 = (x681%(x682/(x683*x684)));

	if (t49 != 1433LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x697 = INT64_MIN;
	int32_t x698 = INT32_MAX;
	int64_t x699 = -1LL;
	int16_t x700 = -29;

	t50 = (x697%(x698/(x699*x700)));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x701 = -939304;
	int64_t x702 = -869894763674LL;
	uint64_t x703 = UINT64_MAX;
	uint64_t x704 = UINT64_MAX;
	static volatile uint64_t t51 = 1LLU;

	t51 = (x701%(x702/(x703*x704)));

	if (t51 != 869893824370LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x710 = INT64_MIN;
	uint8_t x711 = UINT8_MAX;
	volatile uint64_t t52 = 2LLU;

	t52 = (x709%(x710/(x711*x712)));

	if (t52 != 92143358LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x713 = INT8_MAX;
	int64_t x714 = 27919915397610LL;
	int16_t x715 = INT16_MIN;
	int8_t x716 = INT8_MIN;
	int64_t t53 = -871986517960019932LL;

	t53 = (x713%(x714/(x715*x716)));

	if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x741 = -66557639062LL;
	static int32_t x742 = INT32_MIN;
	int8_t x744 = INT8_MIN;
	volatile int64_t t54 = 30024LL;

	t54 = (x741%(x742/(x743*x744)));

	if (t54 != -2423190LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x757 = 1U;
	static uint16_t x758 = 341U;
	volatile int32_t x759 = -1;

	t55 = (x757%(x758/(x759*x760)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x785 = INT32_MIN;
	int64_t x786 = 2921931953LL;
	uint16_t x787 = 31U;
	static int64_t t56 = 26835205LL;

	t56 = (x785%(x786/(x787*x788)));

	if (t56 != -185432LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x789 = INT32_MIN;
	static volatile uint64_t x790 = 1012657849LLU;
	int8_t x791 = INT8_MAX;
	volatile uint64_t t57 = 60797LLU;

	t57 = (x789%(x790/(x791*x792)));

	if (t57 != 560903LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x797 = INT16_MAX;
	static int64_t x798 = 204478LL;
	uint64_t x799 = UINT64_MAX;
	int8_t x800 = -1;

	t58 = (x797%(x798/(x799*x800)));

	if (t58 != 32767LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x801 = 6436772495LLU;
	int8_t x802 = -1;
	volatile uint8_t x803 = UINT8_MAX;
	uint64_t x804 = 35548081274730884LLU;
	volatile uint64_t t59 = 1013265492LLU;

	t59 = (x801%(x802/(x803*x804)));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x805 = INT16_MIN;
	int8_t x806 = INT8_MIN;
	uint32_t x807 = 1U;
	static int8_t x808 = 1;

	t60 = (x805%(x806/(x807*x808)));

	if (t60 != 4294934528U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x817 = -723;
	static uint64_t x818 = 1550188LLU;
	static volatile uint16_t x819 = 205U;
	uint64_t t61 = 194LLU;

	t61 = (x817%(x818/(x819*x820)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x821 = INT32_MAX;
	static int64_t x822 = 112673266LL;
	static volatile int16_t x824 = INT16_MIN;
	volatile int64_t t62 = 1579825LL;

	t62 = (x821%(x822/(x823*x824)));

	if (t62 != 2269LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x825 = INT64_MIN;
	int32_t x826 = -516327285;
	int8_t x827 = INT8_MIN;
	static int8_t x828 = -1;

	t63 = (x825%(x826/(x827*x828)));

	if (t63 != -3128252LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x849 = INT16_MIN;
	volatile int16_t x850 = -10;
	uint16_t x851 = UINT16_MAX;
	uint64_t x852 = UINT64_MAX;
	volatile uint64_t t64 = 46594LLU;

	t64 = (x849%(x850/(x851*x852)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x877 = INT16_MAX;
	uint32_t x878 = UINT32_MAX;
	volatile int32_t x879 = 1;
	uint64_t x880 = 828LLU;
	uint64_t t65 = 1061806029076746359LLU;

	t65 = (x877%(x878/(x879*x880)));

	if (t65 != 32767LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x881 = INT64_MIN;
	int8_t x882 = -1;
	uint32_t x883 = 5699924U;
	static volatile int64_t t66 = 1953665121851207361LL;

	t66 = (x881%(x882/(x883*x884)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x917 = UINT16_MAX;
	int64_t x918 = INT64_MIN;
	int8_t x919 = INT8_MAX;
	volatile uint8_t x920 = 3U;
	int64_t t67 = 23105270926LL;

	t67 = (x917%(x918/(x919*x920)));

	if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x933 = INT64_MAX;
	volatile int8_t x934 = INT8_MIN;
	volatile uint64_t x935 = UINT64_MAX;
	int32_t x936 = 766;
	uint64_t t68 = 2911024167841LLU;

	t68 = (x933%(x934/(x935*x936)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x937 = INT8_MIN;
	int8_t x939 = INT8_MIN;
	uint16_t x940 = 3403U;
	static int64_t t69 = -11LL;

	t69 = (x937%(x938/(x939*x940)));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x945 = 380867U;
	static int64_t x946 = INT64_MIN;
	uint32_t x947 = UINT32_MAX;
	int64_t x948 = -7076LL;

	t70 = (x945%(x946/(x947*x948)));

	if (t70 != 77379LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x954 = INT8_MIN;
	int16_t x955 = INT16_MAX;
	volatile uint64_t x956 = 130518236177752LLU;
	volatile uint64_t t71 = 2998936943LLU;

	t71 = (x953%(x954/(x955*x956)));

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x957 = 36LLU;
	volatile int8_t x958 = -1;
	uint8_t x959 = 56U;
	static volatile uint32_t x960 = 62972U;
	uint64_t t72 = 3113335081LLU;

	t72 = (x957%(x958/(x959*x960)));

	if (t72 != 36LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x969 = 73898U;
	volatile int64_t x970 = -55984441610932219LL;
	volatile int8_t x971 = INT8_MAX;
	int32_t x972 = -1;
	volatile int64_t t73 = 255556819051LL;

	t73 = (x969%(x970/(x971*x972)));

	if (t73 != 73898LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x990 = UINT64_MAX;
	int16_t x992 = 81;
	uint64_t t74 = 308236LLU;

	t74 = (x989%(x990/(x991*x992)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x997 = 4U;
	volatile uint32_t x998 = UINT32_MAX;
	int16_t x999 = 104;
	int32_t x1000 = -5219939;
	volatile uint32_t t75 = 11U;

	t75 = (x997%(x998/(x999*x1000)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1005 = UINT32_MAX;
	int64_t x1006 = INT64_MIN;
	uint16_t x1008 = UINT16_MAX;
	int64_t t76 = 172361198LL;

	t76 = (x1005%(x1006/(x1007*x1008)));

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1013 = UINT16_MAX;
	static volatile int64_t x1014 = -7760492687465LL;
	uint16_t x1015 = 13U;
	int64_t t77 = -3945432334251905LL;

	t77 = (x1013%(x1014/(x1015*x1016)));

	if (t77 != 65535LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1025 = INT8_MIN;
	int64_t x1026 = INT64_MAX;
	volatile uint16_t x1027 = 10U;
	int64_t x1028 = -50018941LL;
	volatile int64_t t78 = -135623703839LL;

	t78 = (x1025%(x1026/(x1027*x1028)));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1041 = -1;
	int8_t x1042 = INT8_MIN;
	int8_t x1043 = -1;
	uint16_t x1044 = 1U;
	static int32_t t79 = -254010054;

	t79 = (x1041%(x1042/(x1043*x1044)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1046 = INT32_MIN;
	uint32_t x1047 = 32145U;
	int64_t t80 = -2679523038625496026LL;

	t80 = (x1045%(x1046/(x1047*x1048)));

	if (t80 != 47386LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x1057 = -418;
	uint64_t x1058 = 34776827LLU;
	uint16_t x1059 = 12293U;
	uint16_t x1060 = 3U;
	volatile uint64_t t81 = 244498908LLU;

	t81 = (x1057%(x1058/(x1059*x1060)));

	if (t81 != 852LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1062 = -16;
	int64_t x1063 = 26LL;
	uint64_t x1064 = UINT64_MAX;
	uint64_t t82 = 79402211153906441LLU;

	t82 = (x1061%(x1062/(x1063*x1064)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1073 = INT64_MAX;
	int32_t x1074 = INT32_MIN;
	uint8_t x1076 = 35U;
	int64_t t83 = -3373LL;

	t83 = (x1073%(x1074/(x1075*x1076)));

	if (t83 != 1057LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1078 = INT32_MIN;
	int16_t x1080 = 782;
	static volatile uint32_t t84 = 118528580U;

	t84 = (x1077%(x1078/(x1079*x1080)));

	if (t84 != 24056U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1109 = INT64_MIN;
	volatile int8_t x1111 = INT8_MIN;
	uint8_t x1112 = 3U;
	volatile int64_t t85 = -547LL;

	t85 = (x1109%(x1110/(x1111*x1112)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1121 = -63;
	static volatile int8_t x1122 = INT8_MIN;
	uint64_t x1123 = UINT64_MAX;
	volatile int32_t x1124 = -983202;

	t86 = (x1121%(x1122/(x1123*x1124)));

	if (t86 != 900259LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1134 = INT32_MAX;
	uint8_t x1136 = 17U;
	int64_t t87 = 136027291374LL;

	t87 = (x1133%(x1134/(x1135*x1136)));

	if (t87 != -211LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1173 = 54LL;
	int16_t x1175 = -1;
	int16_t x1176 = -31;
	volatile int64_t t88 = -1213979527143LL;

	t88 = (x1173%(x1174/(x1175*x1176)));

	if (t88 != 54LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1177 = 918U;
	uint64_t x1178 = UINT64_MAX;
	static int16_t x1179 = INT16_MAX;
	uint16_t x1180 = 5141U;
	static volatile uint64_t t89 = 255028659588154LLU;

	t89 = (x1177%(x1178/(x1179*x1180)));

	if (t89 != 918LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1209 = -1;
	volatile int64_t x1210 = -8308178LL;
	int32_t x1211 = -1;
	int64_t t90 = -514221669819547LL;

	t90 = (x1209%(x1210/(x1211*x1212)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1213 = INT32_MIN;
	int32_t x1214 = INT32_MIN;
	static int32_t x1215 = -1;
	volatile int32_t x1216 = 3;
	volatile int32_t t91 = -58165;

	t91 = (x1213%(x1214/(x1215*x1216)));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1235 = 1265U;
	volatile int64_t t92 = 467579307LL;

	t92 = (x1233%(x1234/(x1235*x1236)));

	if (t92 != -1899266048LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1238 = UINT32_MAX;
	static volatile uint16_t x1239 = 52U;
	int8_t x1240 = -49;
	volatile int64_t t93 = 3151616721769LL;

	t93 = (x1237%(x1238/(x1239*x1240)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1245 = -1;
	static int16_t x1246 = INT16_MIN;
	int32_t x1248 = INT32_MIN;
	uint32_t t94 = 92869711U;

	t94 = (x1245%(x1246/(x1247*x1248)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x1257 = 330209153U;
	volatile uint32_t x1259 = UINT32_MAX;
	int8_t x1260 = -1;
	int64_t t95 = -1776576563199804LL;

	t95 = (x1257%(x1258/(x1259*x1260)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1277 = 11882872127LLU;
	int32_t x1278 = INT32_MAX;
	int64_t x1279 = -426LL;
	int8_t x1280 = -1;
	uint64_t t96 = 22606470LLU;

	t96 = (x1277%(x1278/(x1279*x1280)));

	if (t96 != 1138490LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x1314 = INT64_MAX;
	int32_t x1315 = INT32_MIN;
	uint64_t x1316 = UINT64_MAX;
	static uint64_t t97 = 13553483LLU;

	t97 = (x1313%(x1314/(x1315*x1316)));

	if (t97 != 2039853LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x1329 = -491;
	volatile int64_t x1330 = -136463513232621LL;
	uint16_t x1331 = 247U;
	static int8_t x1332 = INT8_MIN;
	static volatile int64_t t98 = 0LL;

	t98 = (x1329%(x1330/(x1331*x1332)));

	if (t98 != -491LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x1333 = INT64_MAX;
	int16_t x1334 = INT16_MIN;
	static volatile int16_t x1335 = INT16_MIN;
	volatile int16_t x1336 = 1;
	int64_t t99 = -184601020775693424LL;

	t99 = (x1333%(x1334/(x1335*x1336)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

