
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 254LLU;
uint16_t x78 = 7281U;
uint32_t t1 = 57167U;
volatile int64_t x131 = 1LL;
int64_t x132 = 58LL;
volatile uint64_t t2 = 541790590LLU;
static uint64_t t3 = 24074691LLU;
int64_t x390 = -1LL;
volatile int32_t t5 = -2773694;
int32_t x586 = INT32_MAX;
uint32_t t13 = 91U;
int16_t x1058 = INT16_MIN;
int32_t x1142 = -87607193;
int16_t x1143 = INT16_MIN;
uint64_t t16 = 7004057596LLU;
int8_t x1149 = -1;
static uint8_t x1150 = 0U;
uint16_t x1158 = UINT16_MAX;
int32_t x1159 = -1;
uint16_t x1423 = 5U;
int8_t x1424 = 8;
static int16_t x1633 = -2471;
uint64_t x1635 = 57049367651024116LLU;
static volatile uint8_t x1702 = 1U;
int32_t t25 = -30279;
uint64_t x1958 = UINT64_MAX;
volatile uint32_t x2129 = UINT32_MAX;
uint8_t x2130 = 15U;
volatile uint64_t t31 = 268348LLU;


void f0(void) {
    	int16_t x69 = -1692;
	static uint64_t x70 = 1900026571726755LLU;
	int64_t x71 = INT64_MAX;
	uint8_t x72 = 41U;

    t0 = (((x69*x70)-x71)<<x72);

    if (t0 != 10794382837923446784LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x77 = 576675U;
	volatile int32_t x79 = 47377;
	int8_t x80 = 0;

    t1 = (((x77*x78)-x79)<<x80);

    if (t1 != 4198723298U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x129 = 13U;
	uint64_t x130 = UINT64_MAX;

    t2 = (((x129*x130)-x131)<<x132);

    if (t2 != 14411518807585587200LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x329 = UINT64_MAX;
	int8_t x330 = -1;
	uint8_t x331 = 22U;
	int8_t x332 = 0;

    t3 = (((x329*x330)-x331)<<x332);

    if (t3 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x389 = 1661618LLU;
	static volatile uint16_t x391 = UINT16_MAX;
	static uint16_t x392 = 1U;
	volatile uint64_t t4 = 489904465059800795LLU;

    t4 = (((x389*x390)-x391)<<x392);

    if (t4 != 18446744073706097310LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x409 = 0;
	int32_t x410 = INT32_MIN;
	int8_t x411 = -1;
	static uint8_t x412 = 5U;

    t5 = (((x409*x410)-x411)<<x412);

    if (t5 != 32) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x449 = 1766957274516754396LLU;
	static int8_t x450 = -1;
	volatile int32_t x451 = -1;
	int8_t x452 = 12;
	uint64_t t6 = 394293249LLU;

    t6 = (((x449*x450)-x451)<<x452);

    if (t6 != 12113424547227783168LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x533 = 752869305072635LLU;
	int64_t x534 = -7815684799LL;
	volatile uint64_t x535 = 522LLU;
	static uint16_t x536 = 39U;
	uint64_t t7 = 384017867522387LLU;

    t7 = (((x533*x534)-x535)<<x536);

    if (t7 != 4401099305138520064LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x585 = 254085748LL;
	volatile int64_t x587 = -22005LL;
	static uint8_t x588 = 0U;
	int64_t t8 = 10098LL;

    t8 = (((x585*x586)-x587)<<x588);

    if (t8 != 545644988765784961LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x653 = 144862LLU;
	static int16_t x654 = -49;
	volatile uint16_t x655 = 50U;
	uint8_t x656 = 1U;
	volatile uint64_t t9 = 8223856011918921841LLU;

    t9 = (((x653*x654)-x655)<<x656);

    if (t9 != 18446744073695355040LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x681 = 0;
	static volatile uint32_t x682 = 9375U;
	int8_t x683 = -4;
	uint16_t x684 = 3U;
	static uint32_t t10 = 388589U;

    t10 = (((x681*x682)-x683)<<x684);

    if (t10 != 32U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x689 = UINT64_MAX;
	volatile int64_t x690 = -1LL;
	volatile uint32_t x691 = 5357U;
	static uint8_t x692 = 4U;
	volatile uint64_t t11 = 23745LLU;

    t11 = (((x689*x690)-x691)<<x692);

    if (t11 != 18446744073709465920LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x953 = -1LL;
	uint64_t x954 = 35628244LLU;
	int32_t x955 = INT32_MAX;
	uint16_t x956 = 3U;
	uint64_t t12 = 238685LLU;

    t12 = (((x953*x954)-x955)<<x956);

    if (t12 != 18446744056244656488LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x977 = 7U;
	int8_t x978 = INT8_MIN;
	uint8_t x979 = 24U;
	uint8_t x980 = 1U;

    t13 = (((x977*x978)-x979)<<x980);

    if (t13 != 4294965456U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1057 = UINT64_MAX;
	int16_t x1059 = 117;
	uint64_t x1060 = 12LLU;
	volatile uint64_t t14 = 91606LLU;

    t14 = (((x1057*x1058)-x1059)<<x1060);

    if (t14 != 133738496LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x1073 = 813552481U;
	static uint8_t x1074 = 16U;
	int64_t x1075 = 774222LL;
	static volatile int8_t x1076 = 0;
	int64_t t15 = 68555LL;

    t15 = (((x1073*x1074)-x1075)<<x1076);

    if (t15 != 131163586LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1141 = 1615894680790531LLU;
	static volatile uint32_t x1144 = 10U;

    t16 = (((x1141*x1142)-x1143)<<x1144);

    if (t16 != 10040987751476417536LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1151 = INT16_MIN;
	volatile int8_t x1152 = 1;
	int32_t t17 = -30;

    t17 = (((x1149*x1150)-x1151)<<x1152);

    if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x1157 = 25;
	volatile uint16_t x1160 = 4U;
	volatile int32_t t18 = -96983;

    t18 = (((x1157*x1158)-x1159)<<x1160);

    if (t18 != 26214016) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x1401 = 23445LLU;
	int8_t x1402 = -50;
	int64_t x1403 = -1LL;
	int8_t x1404 = 0;
	volatile uint64_t t19 = 250634520618947395LLU;

    t19 = (((x1401*x1402)-x1403)<<x1404);

    if (t19 != 18446744073708379367LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x1421 = UINT32_MAX;
	volatile int16_t x1422 = INT16_MIN;
	static uint32_t t20 = 14660643U;

    t20 = (((x1421*x1422)-x1423)<<x1424);

    if (t20 != 8387328U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1561 = 73383463U;
	uint64_t x1562 = 2791LLU;
	int32_t x1563 = 0;
	static uint8_t x1564 = 12U;
	static volatile uint64_t t21 = 1100545786LLU;

    t21 = (((x1561*x1562)-x1563)<<x1564);

    if (t21 != 838915052474368LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1625 = -2492535370281228LL;
	uint64_t x1626 = 161324LLU;
	uint32_t x1627 = 44473912U;
	int8_t x1628 = 7;
	volatile uint64_t t22 = 29291805519LLU;

    t22 = (((x1625*x1626)-x1627)<<x1628);

    if (t22 != 15323372085816187904LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1634 = 1191371U;
	uint16_t x1636 = 41U;
	static volatile uint64_t t23 = 532693996360052707LLU;

    t23 = (((x1633*x1634)-x1635)<<x1636);

    if (t23 != 1153271149304479744LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1653 = UINT16_MAX;
	int16_t x1654 = 11;
	uint64_t x1655 = 1452LLU;
	int16_t x1656 = 7;
	volatile uint64_t t24 = 9745778033151617LLU;

    t24 = (((x1653*x1654)-x1655)<<x1656);

    if (t24 != 92087424LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1701 = INT8_MIN;
	int16_t x1703 = INT16_MIN;
	uint64_t x1704 = 15LLU;

    t25 = (((x1701*x1702)-x1703)<<x1704);

    if (t25 != 1069547520) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1773 = 1;
	volatile int32_t x1774 = 1970;
	uint32_t x1775 = 103007U;
	int8_t x1776 = 10;
	uint32_t t26 = 8747U;

    t26 = (((x1773*x1774)-x1775)<<x1776);

    if (t26 != 4191505408U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1949 = 3974U;
	uint8_t x1950 = 97U;
	uint32_t x1951 = 115U;
	uint16_t x1952 = 1U;
	uint32_t t27 = 236U;

    t27 = (((x1949*x1950)-x1951)<<x1952);

    if (t27 != 770726U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1957 = INT16_MIN;
	static uint64_t x1959 = UINT64_MAX;
	uint8_t x1960 = 2U;
	uint64_t t28 = 1147580215LLU;

    t28 = (((x1957*x1958)-x1959)<<x1960);

    if (t28 != 131076LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x2061 = 156LLU;
	int16_t x2062 = INT16_MIN;
	int64_t x2063 = 2330800LL;
	int8_t x2064 = 0;
	volatile uint64_t t29 = 45540LLU;

    t29 = (((x2061*x2062)-x2063)<<x2064);

    if (t29 != 18446744073702109008LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x2081 = 13LLU;
	volatile uint32_t x2082 = 17U;
	uint8_t x2083 = 42U;
	static volatile int16_t x2084 = 31;
	uint64_t t30 = 8513751521720LLU;

    t30 = (((x2081*x2082)-x2083)<<x2084);

    if (t30 != 384399572992LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2131 = 8163LLU;
	uint16_t x2132 = 27U;

    t31 = (((x2129*x2130)-x2131)<<x2132);

    if (t31 != 576459654670843904LLU) { NG(); } else { ; }
	
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


    return 0;
}

