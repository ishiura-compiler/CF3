
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

static uint32_t x2 = 16U;
volatile uint16_t x5 = 5U;
static int32_t t3 = -1241988;
volatile int32_t x34 = -14455;
int16_t x38 = -1;
volatile int16_t x39 = 988;
int16_t x43 = 77;
volatile int32_t x44 = -1;
uint16_t x52 = UINT16_MAX;
static int64_t x59 = INT64_MIN;
static volatile int64_t t10 = -458LL;
uint64_t x83 = 422975428LLU;
volatile uint8_t x84 = UINT8_MAX;
volatile uint64_t t15 = 1855142LLU;
volatile int16_t x85 = -1040;
uint16_t x98 = UINT16_MAX;
int64_t t18 = 534095506220283LL;
int64_t x110 = -1LL;
static volatile uint64_t t21 = 1973LLU;
int32_t x131 = 713;
int8_t x132 = INT8_MIN;
uint32_t x134 = 916571U;
volatile uint64_t t28 = 1949985013223325288LLU;
int8_t x188 = INT8_MAX;
static volatile int32_t t32 = -7;
static volatile int32_t t33 = 45592;
static int32_t x202 = INT32_MIN;
static volatile uint16_t x209 = 16U;
volatile uint16_t x210 = 11U;
int32_t x223 = INT32_MAX;
int32_t x224 = -390439574;
uint32_t t40 = 64858678U;
static uint32_t x226 = 45U;
volatile int16_t x228 = 9668;
int32_t x230 = -1;
uint64_t t43 = 255847060734559454LLU;
static uint64_t x252 = UINT64_MAX;
static volatile uint64_t t45 = 231LLU;
int16_t x275 = INT16_MAX;
volatile uint16_t x282 = 21U;
int64_t t51 = 150720LL;
volatile uint64_t x290 = 390753241092792LLU;
uint32_t x297 = 0U;
volatile uint64_t t54 = 62LLU;
int8_t x306 = INT8_MIN;
uint64_t t57 = 536321575LLU;
int32_t x323 = INT32_MIN;
static int16_t x335 = INT16_MAX;
int32_t x336 = INT32_MIN;
uint64_t x340 = 2308LLU;
volatile int8_t x343 = INT8_MIN;
volatile uint64_t t65 = 856144646456767514LLU;
volatile uint32_t x361 = 26900322U;
int32_t x363 = INT32_MIN;
int32_t x370 = INT32_MIN;
static volatile int32_t x377 = INT32_MIN;
volatile uint64_t x379 = 25LLU;
static int32_t x380 = INT32_MIN;
static volatile uint64_t t72 = 63LLU;
int16_t x384 = INT16_MIN;
static uint32_t t73 = 1U;
uint64_t x392 = UINT64_MAX;
static uint64_t t75 = 268450329416LLU;
static volatile int32_t x395 = INT32_MIN;
static uint64_t t76 = 725331702LLU;
uint32_t x399 = UINT32_MAX;
static volatile uint32_t x400 = UINT32_MAX;
volatile int32_t x403 = -1;
uint8_t x405 = UINT8_MAX;
uint64_t x406 = 793408473LLU;
uint8_t x421 = 5U;
uint16_t x422 = 0U;
uint8_t x427 = UINT8_MAX;
volatile uint64_t t84 = 13273643339381LLU;
int8_t x433 = INT8_MIN;
uint32_t x446 = 464622U;
int8_t x448 = 0;
uint64_t x463 = 1158186001311659LLU;
static uint64_t x465 = UINT64_MAX;
uint16_t x467 = 5U;
static int32_t x470 = INT32_MIN;
uint32_t t92 = 58713U;
int64_t x479 = INT64_MIN;
int64_t t93 = 0LL;
int16_t x487 = INT16_MIN;
int16_t x490 = INT16_MIN;
uint8_t x495 = UINT8_MAX;
uint8_t x499 = 7U;
static volatile uint64_t x506 = 784543986034895662LLU;
int8_t x509 = -17;
volatile uint64_t t100 = 44236LLU;
volatile int32_t x522 = -1;
uint8_t x524 = UINT8_MAX;
uint64_t t103 = 105126LLU;
uint64_t x529 = UINT64_MAX;
static int32_t x532 = INT32_MIN;
uint64_t t105 = 42980413LLU;
uint32_t x541 = UINT32_MAX;
volatile uint64_t x549 = 4868040900LLU;
int64_t x550 = 1794333LL;
uint16_t x552 = UINT16_MAX;
static volatile uint64_t t107 = 67205682LLU;
static uint8_t x556 = 20U;
uint64_t t108 = 10036294528LLU;
uint8_t x558 = 27U;
uint64_t x559 = 26982684304288LLU;
volatile uint32_t x569 = UINT32_MAX;
int16_t x570 = INT16_MIN;
uint64_t t111 = 9LLU;
uint64_t t112 = 81143405LLU;
int8_t x578 = -5;
int16_t x579 = INT16_MIN;
int64_t x580 = 534565590LL;
int32_t x581 = INT32_MIN;
int32_t x584 = -1;
int16_t x591 = INT16_MIN;
int64_t t115 = -232458290635LL;
uint64_t x617 = 24364186279508LLU;
static int16_t x623 = -1;
static uint64_t x624 = 431133182501882262LLU;
int16_t x626 = INT16_MAX;
int32_t x627 = -1;
uint64_t x629 = UINT64_MAX;
volatile uint64_t t123 = 95523914515077472LLU;
int64_t x647 = -1LL;
static int8_t x663 = -2;
int32_t x669 = -4;
int8_t x672 = INT8_MIN;
static uint64_t x678 = UINT64_MAX;
int32_t x679 = 25508141;
static uint64_t x681 = UINT64_MAX;
int32_t x684 = INT32_MAX;
static volatile int32_t x701 = INT32_MIN;
volatile int32_t x706 = INT32_MIN;
int8_t x708 = 0;
volatile uint64_t t135 = 32898636664804758LLU;
int8_t x722 = 2;
static int8_t x724 = 0;
static int64_t t137 = -8LL;
int32_t x730 = -328;
static int8_t x731 = INT8_MIN;
volatile int64_t t139 = -139140402366938LL;
volatile uint32_t x755 = UINT32_MAX;
int64_t x756 = 130486LL;
int64_t t144 = -171884LL;
uint8_t x764 = UINT8_MAX;
static int64_t x767 = -1621757694LL;
uint16_t x774 = 121U;
static volatile uint64_t x783 = UINT64_MAX;
static int16_t x789 = -1;
int64_t x802 = 12LL;
volatile int8_t x803 = INT8_MIN;
uint32_t x825 = UINT32_MAX;
int8_t x826 = -1;
static int64_t x827 = 121739649139620690LL;
static volatile int64_t x830 = INT64_MIN;
int16_t x838 = -64;
volatile uint32_t t158 = 3U;
uint64_t x848 = 5632681129345LLU;
uint8_t x858 = 1U;
static uint32_t x869 = 82U;
static uint16_t x875 = UINT16_MAX;
uint32_t x878 = 11432875U;
uint64_t x879 = 3748294LLU;
static uint64_t x892 = 864326847LLU;
uint64_t t164 = 859118LLU;
uint8_t x895 = 30U;
int8_t x902 = 13;
uint32_t x913 = 416878U;
volatile int16_t x914 = INT16_MIN;
int16_t x923 = -1;
static volatile int32_t t169 = -2;
int32_t t170 = -186304568;
uint64_t x946 = 3LLU;
int8_t x952 = -15;
uint64_t x961 = UINT64_MAX;
int64_t x977 = INT64_MIN;
int8_t x983 = 17;
volatile uint8_t x985 = 1U;
int64_t x989 = 10527188625920LL;
static volatile int64_t x995 = -1178017035LL;
int32_t x1007 = INT32_MAX;
uint64_t x1008 = 3560976905LLU;
static volatile uint64_t x1025 = 37LLU;
static int32_t x1030 = -201985;
static int64_t t186 = 12123359781418LL;
uint32_t x1036 = UINT32_MAX;
int32_t x1040 = INT32_MIN;
uint32_t x1046 = UINT32_MAX;
int8_t x1048 = -1;
volatile int64_t t189 = 7621773840611205LL;
int32_t x1053 = INT32_MAX;
int64_t x1055 = INT64_MAX;
int64_t x1059 = INT64_MIN;
volatile int8_t x1061 = -9;
volatile uint16_t x1065 = 6U;
int8_t x1068 = -50;
uint64_t t194 = 1LLU;
int8_t x1076 = INT8_MIN;
volatile uint64_t x1083 = 4281602472804724720LLU;
static uint64_t x1085 = 100169032598992665LLU;
static volatile int8_t x1090 = INT8_MAX;


void f0(void) {
    	int16_t x1 = -1;
	uint32_t x3 = 235U;
	int16_t x4 = 8864;
	volatile uint32_t t0 = 7027U;

    t0 = ((x1^(x2^x3))*x4);

    if (t0 != 4292733568U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = 24;
	volatile int16_t x7 = INT16_MAX;
	int8_t x8 = -10;
	static volatile int32_t t1 = -350911;

    t1 = ((x5^(x6^x7))*x8);

    if (t1 != -327380) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -12;
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = -4357;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 40653344610LLU;

    t2 = ((x9^(x10^x11))*x12);

    if (t2 != 4368LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	volatile int32_t x14 = -1;
	int16_t x15 = 34;
	int16_t x16 = -139;

    t3 = ((x13^(x14^x15))*x16);

    if (t3 != -4726) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x21 = 3U;
	static int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	static uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 0LLU;

    t4 = ((x21^(x22^x23))*x24);

    if (t4 != 9223372036854710276LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = 27U;
	static volatile int16_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t5 = -2748687;

    t5 = ((x33^(x34^x35))*x36);

    if (t5 != 3683475) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x37 = UINT8_MAX;
	static int64_t x40 = -1LL;
	int64_t t6 = -117970686429784625LL;

    t6 = ((x37^(x38^x39))*x40);

    if (t6 != 804LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = INT8_MIN;
	static volatile uint16_t x42 = 62U;
	int32_t t7 = 879777799;

    t7 = ((x41^(x42^x43))*x44);

    if (t7 != 13) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x45 = 12U;
	volatile int16_t x46 = -1;
	volatile int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	volatile int32_t t8 = -134203672;

    t8 = ((x45^(x46^x47))*x48);

    if (t8 != -4192640) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x49 = 100632815469322975LLU;
	static uint16_t x50 = 1822U;
	volatile uint16_t x51 = 0U;
	static uint64_t t9 = 35LLU;

    t9 = ((x49^(x50^x51))*x52);

    if (t9 != 9483927467819604543LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = INT32_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	int64_t x60 = -1LL;

    t10 = ((x57^(x58^x59))*x60);

    if (t10 != 9223372034707357696LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x61 = 7138981944041553848LLU;
	int64_t x62 = 68070054672LL;
	int16_t x63 = -1;
	int32_t x64 = 113010110;
	uint64_t t11 = 472767939483LLU;

    t11 = ((x61^(x62^x63))*x64);

    if (t11 != 9715308672892738962LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x65 = 2082046005U;
	static int8_t x66 = INT8_MIN;
	volatile int64_t x67 = INT64_MAX;
	uint64_t x68 = 1LLU;
	volatile uint64_t t12 = 769602LLU;

    t12 = ((x65^(x66^x67))*x68);

    if (t12 != 9223372038936821834LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MIN;
	int64_t x75 = -1LL;
	int32_t x76 = 85663591;
	uint64_t t13 = 9645474243890892LLU;

    t13 = ((x73^(x74^x75))*x76);

    if (t13 != 18446744062744611968LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = INT16_MIN;
	static volatile int8_t x78 = -1;
	uint16_t x79 = 41U;
	uint16_t x80 = 140U;
	volatile int32_t t14 = -3;

    t14 = ((x77^(x78^x79))*x80);

    if (t14 != 4581640) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	uint16_t x82 = UINT16_MAX;

    t15 = ((x81^(x82^x83))*x84);

    if (t15 != 987344317500LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x86 = -4354907LL;
	int64_t x87 = INT64_MAX;
	static int8_t x88 = -1;
	static int64_t t16 = -1712268580616LL;

    t16 = ((x85^(x86^x87))*x88);

    if (t16 != -9223372036850419882LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = 119712626236LL;
	uint64_t x94 = 260365557LLU;
	volatile int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	uint64_t t17 = 4425951LLU;

    t17 = ((x93^(x94^x95))*x96);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x97 = -1LL;
	volatile int16_t x99 = -1;
	int32_t x100 = -11;

    t18 = ((x97^(x98^x99))*x100);

    if (t18 != -720885LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x101 = 3;
	int8_t x102 = 0;
	int16_t x103 = -1;
	static volatile int8_t x104 = 0;
	volatile int32_t t19 = 1449;

    t19 = ((x101^(x102^x103))*x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x109 = UINT32_MAX;
	int64_t x111 = -46LL;
	int8_t x112 = INT8_MIN;
	static volatile int64_t t20 = 1LL;

    t20 = ((x109^(x110^x111))*x112);

    if (t20 != -549755808000LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = INT64_MAX;
	int32_t x114 = -720213318;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = 0;

    t21 = ((x113^(x114^x115))*x116);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x117 = -1;
	uint8_t x118 = 12U;
	int32_t x119 = -1;
	int16_t x120 = -419;
	static int32_t t22 = 27413;

    t22 = ((x117^(x118^x119))*x120);

    if (t22 != -5028) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x125 = INT32_MAX;
	uint32_t x126 = 1003U;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t23 = 1LLU;

    t23 = ((x125^(x126^x127))*x128);

    if (t23 != 18446744071562068885LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x129 = INT32_MIN;
	static int64_t x130 = 166672122003890LL;
	volatile int64_t t24 = -631LL;

    t24 = ((x129^(x130^x131))*x132);

    if (t24 != 21333891488825984LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x133 = INT8_MAX;
	volatile int16_t x135 = 82;
	static int32_t x136 = 39;
	volatile uint32_t t25 = 14805606U;

    t25 = ((x133^(x134^x135))*x136);

    if (t25 != 35747322U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x141 = -1;
	int8_t x142 = -1;
	int16_t x143 = -98;
	volatile uint8_t x144 = 76U;
	static int32_t t26 = 4808800;

    t26 = ((x141^(x142^x143))*x144);

    if (t26 != -7448) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x153 = -3631;
	int16_t x154 = 0;
	int16_t x155 = INT16_MIN;
	static int16_t x156 = INT16_MAX;
	volatile int32_t t27 = 163166037;

    t27 = ((x153^(x154^x155))*x156);

    if (t27 != 954732079) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x161 = UINT32_MAX;
	static uint16_t x162 = UINT16_MAX;
	static int32_t x163 = INT32_MIN;
	static volatile uint64_t x164 = 21402LLU;

    t28 = ((x161^(x162^x163))*x164);

    if (t28 != 45959042433024LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x169 = 31905551532977214LLU;
	static int32_t x170 = -1;
	uint16_t x171 = 4289U;
	static uint16_t x172 = 54U;
	uint64_t t29 = 1265812556496LLU;

    t29 = ((x169^(x170^x171))*x172);

    if (t29 != 16723844290928550400LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x173 = -1LL;
	int64_t x174 = -1LL;
	uint64_t x175 = 13346125LLU;
	static uint32_t x176 = UINT32_MAX;
	static uint64_t t30 = 600552223179007LLU;

    t30 = ((x173^(x174^x175))*x176);

    if (t30 != 57321170389981875LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x177 = 147;
	uint32_t x178 = 103225349U;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 259LLU;
	uint64_t t31 = 0LLU;

    t31 = ((x177^(x178^x179))*x180);

    if (t31 != 9223372063590178754LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x185 = INT16_MIN;
	static int16_t x186 = INT16_MIN;
	uint16_t x187 = 231U;

    t32 = ((x185^(x186^x187))*x188);

    if (t32 != 29337) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x189 = 16005;
	volatile int16_t x190 = INT16_MIN;
	volatile uint16_t x191 = 0U;
	uint16_t x192 = 3301U;

    t33 = ((x189^(x190^x191))*x192);

    if (t33 != -55334663) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x197 = 21U;
	int16_t x198 = INT16_MIN;
	int16_t x199 = -7197;
	volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t34 = 166516034480706043LLU;

    t34 = ((x197^(x198^x199))*x200);

    if (t34 != 18446744073709526026LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x201 = UINT64_MAX;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t35 = 3049644931127884LLU;

    t35 = ((x201^(x202^x203))*x204);

    if (t35 != 4611685745696964608LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x205 = UINT16_MAX;
	int8_t x206 = -1;
	static int64_t x207 = -666LL;
	int8_t x208 = INT8_MIN;
	static int64_t t36 = 790LL;

    t36 = ((x205^(x206^x207))*x208);

    if (t36 != -8303360LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x211 = -26;
	int64_t x212 = 10052425LL;
	volatile int64_t t37 = 607902807322LL;

    t37 = ((x209^(x210^x211))*x212);

    if (t37 != -30157275LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x213 = 0U;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MIN;
	uint32_t x216 = 1121801262U;
	static volatile uint32_t t38 = 247U;

    t38 = ((x213^(x214^x215))*x216);

    if (t38 != 3617506002U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x217 = -2144661;
	uint64_t x218 = 63260790501183LLU;
	int8_t x219 = -2;
	static uint16_t x220 = 910U;
	volatile uint64_t t39 = 132108614334755LLU;

    t39 = ((x217^(x218^x219))*x220);

    if (t39 != 57567317471760460LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = UINT32_MAX;

    t40 = ((x221^(x222^x223))*x224);

    if (t40 != 3511353344U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x225 = -8492741LL;
	static uint32_t x227 = UINT32_MAX;
	volatile int64_t t41 = 14LL;

    t41 = ((x225^(x226^x227))*x228);

    if (t41 != -41441635649692LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = -1;
	int16_t x231 = INT16_MAX;
	static uint32_t x232 = 99U;
	uint32_t t42 = 33705822U;

    t42 = ((x229^(x230^x231))*x232);

    if (t42 != 3243933U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x233 = -5;
	volatile int8_t x234 = -1;
	uint64_t x235 = 34719234936996LLU;
	uint64_t x236 = UINT64_MAX;

    t43 = ((x233^(x234^x235))*x236);

    if (t43 != 18446709354474614624LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x237 = 24783488LLU;
	static uint32_t x238 = 0U;
	int64_t x239 = INT64_MAX;
	static uint32_t x240 = UINT32_MAX;
	volatile uint64_t t44 = 116621124234LLU;

    t44 = ((x237^(x238^x239))*x240);

    if (t44 != 9116927762143783553LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x249 = 20U;
	volatile uint64_t x250 = 196192889LLU;
	volatile int16_t x251 = -1;

    t45 = ((x249^(x250^x251))*x252);

    if (t45 != 196192878LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x261 = -3;
	int16_t x262 = INT16_MIN;
	volatile int8_t x263 = 1;
	int16_t x264 = INT16_MIN;
	int32_t t46 = 116906589;

    t46 = ((x261^(x262^x263))*x264);

    if (t46 != -1073610752) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x265 = 198716892424071LLU;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = INT64_MAX;
	int32_t x268 = INT32_MAX;
	static uint64_t t47 = 179560866LLU;

    t47 = ((x265^(x266^x267))*x268);

    if (t47 != 14923909913024964473LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x273 = 67U;
	static volatile int8_t x274 = INT8_MIN;
	static uint32_t x276 = 79U;
	static volatile uint32_t t48 = 13992U;

    t48 = ((x273^(x274^x275))*x276);

    if (t48 != 4292383364U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x277 = 247;
	int32_t x278 = INT32_MIN;
	volatile int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MAX;
	int32_t t49 = -42243;

    t49 = ((x277^(x278^x279))*x280);

    if (t49 != 8093449) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x281 = INT16_MIN;
	static uint64_t x283 = 4221424563191678LLU;
	int32_t x284 = -1;
	uint64_t t50 = 12LLU;

    t50 = ((x281^(x282^x283))*x284);

    if (t50 != 4221424563159189LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x285 = -1;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = 368U;

    t51 = ((x285^(x286^x287))*x288);

    if (t51 != -368LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x289 = 49687684U;
	volatile uint32_t x291 = 1U;
	int32_t x292 = INT32_MIN;
	uint64_t t52 = 50132LLU;

    t52 = ((x289^(x290^x291))*x292);

    if (t52 != 6094567532998426624LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x298 = 1LL;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = -1;
	static uint64_t t53 = 3LLU;

    t53 = ((x297^(x298^x299))*x300);

    if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x301 = -1;
	uint8_t x302 = 0U;
	static volatile uint64_t x303 = UINT64_MAX;
	uint32_t x304 = UINT32_MAX;

    t54 = ((x301^(x302^x303))*x304);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x305 = INT8_MAX;
	uint64_t x307 = 4LLU;
	int8_t x308 = INT8_MAX;
	volatile uint64_t t55 = 60081082LLU;

    t55 = ((x305^(x306^x307))*x308);

    if (t55 != 18446744073709550981LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x309 = UINT32_MAX;
	volatile uint8_t x310 = 70U;
	int16_t x311 = -322;
	static volatile int32_t x312 = INT32_MIN;
	static uint32_t t56 = 1732706275U;

    t56 = ((x309^(x310^x311))*x312);

    if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MAX;
	static int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;

    t57 = ((x317^(x318^x319))*x320);

    if (t57 != 2147483648LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MIN;
	int64_t x324 = -1LL;
	static volatile uint64_t t58 = 3038697165058LLU;

    t58 = ((x321^(x322^x323))*x324);

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x325 = INT32_MAX;
	int64_t x326 = -1LL;
	static volatile uint8_t x327 = 57U;
	int8_t x328 = INT8_MAX;
	volatile int64_t t59 = 1LL;

    t59 = ((x325^(x326^x327))*x328);

    if (t59 != -272730416057LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 507525726U;
	static int16_t x332 = INT16_MIN;
	volatile uint32_t t60 = 6714972U;

    t60 = ((x329^(x330^x331))*x332);

    if (t60 != 3710877696U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x333 = -3551LL;
	int16_t x334 = -1;
	static int64_t t61 = -647022340153317LL;

    t61 = ((x333^(x334^x335))*x336);

    if (t61 != -62743029743616LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x337 = 19U;
	volatile uint8_t x338 = 0U;
	volatile uint32_t x339 = 2258180U;
	volatile uint64_t t62 = 0LLU;

    t62 = ((x337^(x338^x339))*x340);

    if (t62 != 5211923292LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x341 = 14938164LLU;
	int64_t x342 = -1LL;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t63 = 2017487153628689271LLU;

    t63 = ((x341^(x342^x343))*x344);

    if (t63 != 18414664561396285440LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x345 = -1;
	int32_t x346 = INT32_MAX;
	static int16_t x347 = 1;
	uint32_t x348 = 5423955U;
	volatile uint32_t t64 = 501U;

    t64 = ((x345^(x346^x347))*x348);

    if (t64 != 2152907603U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x349 = 52964037U;
	static volatile int16_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	volatile int8_t x352 = -1;

    t65 = ((x349^(x350^x351))*x352);

    if (t65 != 18446744073656587579LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x353 = INT64_MAX;
	volatile int64_t x354 = 89384257963LL;
	static volatile int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int64_t t66 = 62867599LL;

    t66 = ((x353^(x354^x355))*x356);

    if (t66 != 2928943364964352LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x357 = -1LL;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 1236U;
	volatile int32_t x360 = -2409;
	volatile int64_t t67 = -106211221173LL;

    t67 = ((x357^(x358^x359))*x360);

    if (t67 != 10346573337309LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x362 = INT64_MAX;
	uint16_t x364 = 1U;
	int64_t t68 = -1LL;

    t68 = ((x361^(x362^x363))*x364);

    if (t68 != -9223372034734192483LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x365 = 50;
	static int8_t x366 = INT8_MIN;
	int16_t x367 = 1;
	static uint64_t x368 = 3963577002LLU;
	uint64_t t69 = 7514370LLU;

    t69 = ((x365^(x366^x367))*x368);

    if (t69 != 18446743768514122462LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x371 = -1;
	uint32_t x372 = UINT32_MAX;
	uint32_t t70 = 691U;

    t70 = ((x369^(x370^x371))*x372);

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x373 = 157925LLU;
	int16_t x374 = 0;
	int64_t x375 = -1LL;
	int16_t x376 = -2280;
	uint64_t t71 = 169LLU;

    t71 = ((x373^(x374^x375))*x376);

    if (t71 != 360071280LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x378 = INT32_MAX;

    t72 = ((x377^(x378^x379))*x380);

    if (t72 != 55834574848LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x381 = 4029901U;
	uint16_t x382 = 576U;
	int16_t x383 = INT16_MIN;

    t73 = ((x381^(x382^x383))*x384);

    if (t73 != 2151251968U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x385 = 165;
	volatile uint64_t x386 = 1904LLU;
	static int32_t x387 = 3;
	static volatile uint16_t x388 = 1073U;
	volatile uint64_t t74 = 0LLU;

    t74 = ((x385^(x386^x387))*x388);

    if (t74 != 2152438LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MAX;
	volatile uint8_t x391 = UINT8_MAX;

    t75 = ((x389^(x390^x391))*x392);

    if (t75 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x393 = UINT32_MAX;
	int64_t x394 = -241506331LL;
	uint64_t x396 = 1781235LLU;

    t76 = ((x393^(x394^x395))*x396);

    if (t76 != 4255352563462830LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x397 = 3U;
	int32_t x398 = INT32_MIN;
	static volatile uint32_t t77 = 21478U;

    t77 = ((x397^(x398^x399))*x400);

    if (t77 != 2147483652U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x401 = INT8_MIN;
	uint32_t x402 = UINT32_MAX;
	static volatile int32_t x404 = INT32_MIN;
	static volatile uint32_t t78 = 9U;

    t78 = ((x401^(x402^x403))*x404);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x407 = INT64_MIN;
	static uint32_t x408 = 179U;
	static uint64_t t79 = 521652349LLU;

    t79 = ((x405^(x406^x407))*x408);

    if (t79 != 9223372178874860434LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x409 = INT32_MAX;
	static volatile int32_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = -1LL;
	static volatile uint64_t t80 = 550048550305LLU;

    t80 = ((x409^(x410^x411))*x412);

    if (t80 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MIN;
	static volatile int32_t x419 = -4372;
	uint16_t x420 = 2900U;
	volatile int32_t t81 = -218429;

    t81 = ((x417^(x418^x419))*x420);

    if (t81 != 82090300) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x423 = 3494424352LLU;
	int8_t x424 = -1;
	uint64_t t82 = 37714120LLU;

    t82 = ((x421^(x422^x423))*x424);

    if (t82 != 18446744070215127259LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x425 = -1;
	volatile int8_t x426 = -1;
	int16_t x428 = -1;
	int32_t t83 = 12;

    t83 = ((x425^(x426^x427))*x428);

    if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x429 = 1332211LLU;
	int16_t x430 = INT16_MAX;
	static uint8_t x431 = 81U;
	static int64_t x432 = -137580014LL;

    t84 = ((x429^(x430^x431))*x432);

    if (t84 != 18446562182337382538LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x434 = -1;
	int8_t x435 = INT8_MAX;
	int16_t x436 = -1;
	static volatile int32_t t85 = 1563;

    t85 = ((x433^(x434^x435))*x436);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x445 = -1LL;
	static uint8_t x447 = UINT8_MAX;
	int64_t t86 = -28368698998489LL;

    t86 = ((x445^(x446^x447))*x448);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x449 = 2181LLU;
	volatile int8_t x450 = -1;
	volatile int16_t x451 = INT16_MAX;
	int32_t x452 = -1;
	uint64_t t87 = 1120154LLU;

    t87 = ((x449^(x450^x451))*x452);

    if (t87 != 30587LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x453 = 29794U;
	int32_t x454 = -1;
	uint32_t x455 = 15U;
	int8_t x456 = 1;
	uint32_t t88 = 3U;

    t88 = ((x453^(x454^x455))*x456);

    if (t88 != 4294937490U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x457 = INT32_MAX;
	uint16_t x458 = UINT16_MAX;
	int64_t x459 = -1431935316LL;
	static int32_t x460 = INT32_MAX;
	volatile int64_t t89 = 993867275LL;

    t89 = ((x457^(x458^x459))*x460);

    if (t89 != -1536656190176061100LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x461 = -4;
	volatile int16_t x462 = INT16_MIN;
	volatile uint8_t x464 = 117U;
	uint64_t t90 = 13991404013LLU;

    t90 = ((x461^(x462^x463))*x464);

    if (t90 != 135507762154921923LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x466 = 0;
	int16_t x468 = INT16_MIN;
	uint64_t t91 = 115593828991LLU;

    t91 = ((x465^(x466^x467))*x468);

    if (t91 != 196608LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x469 = -1;
	uint32_t x471 = UINT32_MAX;
	volatile uint8_t x472 = 7U;

    t92 = ((x469^(x470^x471))*x472);

    if (t92 != 2147483648U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = INT64_MAX;
	int32_t x480 = INT32_MIN;

    t93 = ((x477^(x478^x479))*x480);

    if (t93 != -272730423296LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x485 = 48609LLU;
	int8_t x486 = INT8_MIN;
	uint32_t x488 = 723211U;
	uint64_t t94 = 60758107LLU;

    t94 = ((x485^(x486^x487))*x488);

    if (t94 != 35987702571LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x489 = INT64_MIN;
	uint64_t x491 = 10554LLU;
	int64_t x492 = INT64_MIN;
	volatile uint64_t t95 = 438063701LLU;

    t95 = ((x489^(x490^x491))*x492);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x493 = INT16_MIN;
	static int16_t x494 = -1;
	static uint8_t x496 = 11U;
	volatile int32_t t96 = 2338;

    t96 = ((x493^(x494^x495))*x496);

    if (t96 != 357632) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x497 = UINT64_MAX;
	uint64_t x498 = 3400483162741045456LLU;
	int8_t x500 = -40;
	uint64_t t97 = 147912315514LLU;

    t97 = ((x497^(x498^x499))*x500);

    if (t97 != 6892117993674957248LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x501 = 1264914102113728LLU;
	static int16_t x502 = -1;
	int8_t x503 = INT8_MIN;
	int16_t x504 = -1928;
	volatile uint64_t t98 = 1060394159072065LLU;

    t98 = ((x501^(x502^x503))*x504);

    if (t98 != 16007989684834285960LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x505 = INT16_MIN;
	volatile uint8_t x507 = 5U;
	volatile int16_t x508 = INT16_MAX;
	volatile uint64_t t99 = 3965336673773923LLU;

    t99 = ((x505^(x506^x507))*x508);

    if (t99 != 7608448346413110485LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x510 = 37;
	int64_t x511 = INT64_MAX;
	uint64_t x512 = 4LLU;

    t100 = ((x509^(x510^x511))*x512);

    if (t100 != 212LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x513 = -1LL;
	int16_t x514 = INT16_MIN;
	uint8_t x515 = UINT8_MAX;
	int32_t x516 = INT32_MIN;
	int64_t t101 = -3846632LL;

    t101 = ((x513^(x514^x515))*x516);

    if (t101 != -69818988363776LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x521 = 58;
	static int16_t x523 = -172;
	volatile int32_t t102 = -1;

    t102 = ((x521^(x522^x523))*x524);

    if (t102 != 36975) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x525 = INT32_MIN;
	static int16_t x526 = INT16_MAX;
	uint64_t x527 = 15298835834463LLU;
	static int8_t x528 = INT8_MIN;

    t103 = ((x525^(x526^x527))*x528);

    if (t103 != 1958484311748608LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x530 = -1;
	uint8_t x531 = 1U;
	static uint64_t t104 = 893145368437137LLU;

    t104 = ((x529^(x530^x531))*x532);

    if (t104 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x533 = INT8_MIN;
	uint16_t x534 = UINT16_MAX;
	static volatile int64_t x535 = INT64_MIN;
	static uint64_t x536 = 538496200548LLU;

    t105 = ((x533^(x534^x535))*x536);

    if (t105 != 18411521575727907484LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MIN;
	int8_t x544 = INT8_MIN;
	volatile uint32_t t106 = 300U;

    t106 = ((x541^(x542^x543))*x544);

    if (t106 != 16384U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x551 = 0;

    t107 = ((x549^(x550^x551))*x552);

    if (t107 != 319072711865895LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x553 = 98455341;
	uint64_t x554 = UINT64_MAX;
	uint32_t x555 = 5U;

    t108 = ((x553^(x554^x555))*x556);

    if (t108 != 18446744071740444876LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x557 = INT16_MIN;
	int64_t x560 = INT64_MIN;
	uint64_t t109 = 192857361734775679LLU;

    t109 = ((x557^(x558^x559))*x560);

    if (t109 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x565 = 0;
	int8_t x566 = -1;
	static int64_t x567 = 1LL;
	static int32_t x568 = -1;
	volatile int64_t t110 = -574175766854276483LL;

    t110 = ((x565^(x566^x567))*x568);

    if (t110 != 2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x571 = INT8_MIN;
	uint64_t x572 = UINT64_MAX;

    t111 = ((x569^(x570^x571))*x572);

    if (t111 != 18446744069414616961LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x573 = 11036248028LLU;
	uint64_t x574 = 24186140LLU;
	volatile int32_t x575 = INT32_MIN;
	int64_t x576 = 16466221LL;

    t112 = ((x573^(x574^x575))*x576);

    if (t112 != 18239204438613189568LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x577 = INT8_MIN;
	int64_t t113 = -1022774164578542LL;

    t113 = ((x577^(x578^x579))*x580);

    if (t113 != -17450893685550LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x582 = -3;
	int64_t x583 = INT64_MIN;
	int64_t t114 = 61082452LL;

    t114 = ((x581^(x582^x583))*x584);

    if (t114 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x589 = 1;
	int64_t x590 = -1LL;
	int8_t x592 = 0;

    t115 = ((x589^(x590^x591))*x592);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x593 = INT32_MAX;
	static int32_t x594 = -1;
	volatile uint32_t x595 = 2095U;
	uint16_t x596 = 231U;
	static uint32_t t116 = 167117030U;

    t116 = ((x593^(x594^x595))*x596);

    if (t116 != 2147967593U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x601 = 57500LLU;
	int64_t x602 = -1LL;
	static int16_t x603 = INT16_MAX;
	volatile int64_t x604 = INT64_MIN;
	uint64_t t117 = 533542576732288LLU;

    t117 = ((x601^(x602^x603))*x604);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x609 = 64LLU;
	int32_t x610 = INT32_MIN;
	volatile int32_t x611 = INT32_MIN;
	int16_t x612 = 39;
	uint64_t t118 = 4572LLU;

    t118 = ((x609^(x610^x611))*x612);

    if (t118 != 2496LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x618 = INT16_MIN;
	uint64_t x619 = 49458694LLU;
	static volatile int64_t x620 = -1LL;
	volatile uint64_t t119 = 2042415748185104019LLU;

    t119 = ((x617^(x618^x619))*x620);

    if (t119 != 24364147396526LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint32_t x621 = UINT32_MAX;
	int8_t x622 = -1;
	volatile uint64_t t120 = 285845085460LLU;

    t120 = ((x621^(x622^x623))*x624);

    if (t120 != 6623906911112099434LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x625 = -1;
	uint64_t x628 = UINT64_MAX;
	uint64_t t121 = 2883LLU;

    t121 = ((x625^(x626^x627))*x628);

    if (t121 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x630 = 3657482126196792123LLU;
	uint32_t x631 = 331711U;
	int32_t x632 = INT32_MIN;
	volatile uint64_t t122 = 3172034LLU;

    t122 = ((x629^(x630^x631))*x632);

    if (t122 != 14710139854235107328LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x637 = 317975U;
	uint16_t x638 = 1U;
	uint64_t x639 = 9767312854023362LLU;
	int32_t x640 = 961517605;

    t123 = ((x637^(x638^x639))*x640);

    if (t123 != 2940775311709404324LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x641 = 2004253931LLU;
	int32_t x642 = 53990;
	uint32_t x643 = 7424611U;
	int32_t x644 = INT32_MAX;
	volatile uint64_t t124 = 27235728422533083LLU;

    t124 = ((x641^(x642^x643))*x644);

    if (t124 != 4288537586226961298LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x645 = -50426128682737931LL;
	int32_t x646 = INT32_MIN;
	uint32_t x648 = 7U;
	int64_t t125 = 29687LL;

    t125 = ((x645^(x646^x647))*x648);

    if (t125 != -352982885856532666LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x657 = 14U;
	static int16_t x658 = -1;
	int32_t x659 = INT32_MIN;
	static int16_t x660 = 0;
	volatile int32_t t126 = 791;

    t126 = ((x657^(x658^x659))*x660);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x661 = 0;
	int32_t x662 = -5;
	int32_t x664 = 48;
	int32_t t127 = 742;

    t127 = ((x661^(x662^x663))*x664);

    if (t127 != 240) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x670 = -1;
	uint32_t x671 = 47705958U;
	uint32_t t128 = 17183525U;

    t128 = ((x669^(x670^x671))*x672);

    if (t128 != 2483572096U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x677 = 73517880;
	static int64_t x680 = 76LL;
	volatile uint64_t t129 = 39061LLU;

    t129 = ((x677^(x678^x679))*x680);

    if (t129 != 18446744066193891704LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x682 = 206411749133121LLU;
	static int8_t x683 = -19;
	volatile uint64_t t130 = 5LLU;

    t130 = ((x681^(x682^x683))*x684);

    if (t130 != 9042464915612497069LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x685 = 267638LL;
	int16_t x686 = 0;
	static int64_t x687 = 797540LL;
	uint8_t x688 = UINT8_MAX;
	int64_t t131 = -500596484883LL;

    t131 = ((x685^(x686^x687))*x688);

    if (t131 != 137745390LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x689 = INT8_MIN;
	static uint64_t x690 = UINT64_MAX;
	uint32_t x691 = 914713294U;
	int32_t x692 = INT32_MIN;
	volatile uint64_t t132 = 98210873006326207LLU;

    t132 = ((x689^(x690^x691))*x692);

    if (t132 != 16482412294513360896LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x697 = INT8_MIN;
	volatile int32_t x698 = -1;
	int64_t x699 = -1314433769LL;
	int32_t x700 = INT32_MIN;
	volatile int64_t t133 = -43816LL;

    t133 = ((x697^(x698^x699))*x700);

    if (t133 != 2822724851360333824LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x702 = 7U;
	uint64_t x703 = 135222450LLU;
	int64_t x704 = -1859657122405896866LL;
	volatile uint64_t t134 = 4352510508694705502LLU;

    t134 = ((x701^(x702^x703))*x704);

    if (t134 != 8130786291059485558LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x705 = 519054LLU;
	uint32_t x707 = 126639215U;

    t135 = ((x705^(x706^x707))*x708);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x717 = -1;
	static int16_t x718 = 596;
	static int16_t x719 = 2303;
	volatile uint8_t x720 = 46U;
	int32_t t136 = 27383;

    t136 = ((x717^(x718^x719))*x720);

    if (t136 != -125672) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x721 = -6;
	static volatile int64_t x723 = -2026595673LL;

    t137 = ((x721^(x722^x723))*x724);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x725 = INT16_MAX;
	static int16_t x726 = INT16_MAX;
	volatile int16_t x727 = -435;
	volatile int16_t x728 = -6;
	int32_t t138 = 824;

    t138 = ((x725^(x726^x727))*x728);

    if (t138 != 2610) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x729 = INT16_MAX;
	int64_t x732 = -1LL;

    t139 = ((x729^(x730^x731))*x732);

    if (t139 != -32455LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x733 = 2U;
	int16_t x734 = -1;
	int32_t x735 = -78472;
	volatile uint8_t x736 = 1U;
	volatile int32_t t140 = -30420037;

    t140 = ((x733^(x734^x735))*x736);

    if (t140 != 78469) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x737 = -1;
	static int8_t x738 = INT8_MIN;
	uint32_t x739 = 17650711U;
	static uint8_t x740 = 65U;
	uint32_t t141 = 1042225U;

    t141 = ((x737^(x738^x739))*x740);

    if (t141 != 1147301480U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x749 = 1LL;
	uint16_t x750 = 26456U;
	uint16_t x751 = 5U;
	volatile uint64_t x752 = 187705753041LLU;
	static volatile uint64_t t142 = 248280706LLU;

    t142 = ((x749^(x750^x751))*x752);

    if (t142 != 4966694225464860LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x753 = -1LL;
	int32_t x754 = INT32_MIN;
	int64_t t143 = -43LL;

    t143 = ((x753^(x754^x755))*x756);

    if (t143 != -280216551292928LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x757 = 1418U;
	int64_t x758 = -1LL;
	static int32_t x759 = INT32_MIN;
	int16_t x760 = 61;

    t144 = ((x757^(x758^x759))*x760);

    if (t144 != 130996415969LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x761 = -1;
	uint32_t x762 = 1726803U;
	int16_t x763 = INT16_MAX;
	uint32_t t145 = 42456U;

    t145 = ((x761^(x762^x763))*x764);

    if (t145 != 3857938861U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x765 = 36U;
	int16_t x766 = INT16_MIN;
	int32_t x768 = INT32_MAX;
	int64_t t146 = 26LL;

    t146 = ((x765^(x766^x767))*x768);

    if (t146 != 3482752089230511834LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x769 = INT32_MIN;
	int16_t x770 = INT16_MIN;
	int32_t x771 = INT32_MAX;
	static uint32_t x772 = UINT32_MAX;
	volatile uint32_t t147 = 34558755U;

    t147 = ((x769^(x770^x771))*x772);

    if (t147 != 4294934529U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x773 = 109LLU;
	static int16_t x775 = -1;
	int64_t x776 = -1LL;
	volatile uint64_t t148 = 1592299835648886LLU;

    t148 = ((x773^(x774^x775))*x776);

    if (t148 != 21LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x781 = INT32_MIN;
	static int8_t x782 = INT8_MAX;
	static int8_t x784 = 9;
	uint64_t t149 = 331895979LLU;

    t149 = ((x781^(x782^x783))*x784);

    if (t149 != 19327351680LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x790 = 2009U;
	uint64_t x791 = 54007LLU;
	static int64_t x792 = INT64_MIN;
	uint64_t t150 = 27199LLU;

    t150 = ((x789^(x790^x791))*x792);

    if (t150 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x793 = -1LL;
	uint64_t x794 = UINT64_MAX;
	int8_t x795 = INT8_MIN;
	int64_t x796 = -1LL;
	volatile uint64_t t151 = 184LLU;

    t151 = ((x793^(x794^x795))*x796);

    if (t151 != 128LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x797 = 6914LLU;
	int16_t x798 = INT16_MIN;
	int8_t x799 = INT8_MAX;
	uint16_t x800 = 0U;
	uint64_t t152 = 384706247815LLU;

    t152 = ((x797^(x798^x799))*x800);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x801 = INT16_MIN;
	uint64_t x804 = 57687LLU;
	volatile uint64_t t153 = 34239517381046LLU;

    t153 = ((x801^(x802^x803))*x804);

    if (t153 != 1883595924LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x813 = 50;
	static int64_t x814 = -316103LL;
	int8_t x815 = -1;
	int64_t x816 = -1LL;
	static int64_t t154 = -48515371LL;

    t154 = ((x813^(x814^x815))*x816);

    if (t154 != -316148LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x828 = 718161278LLU;
	uint64_t t155 = 7962151780853LLU;

    t155 = ((x825^(x826^x827))*x828);

    if (t155 != 12729162095086423132LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x829 = INT64_MAX;
	static int16_t x831 = INT16_MAX;
	int32_t x832 = 127426;
	volatile int64_t t156 = -38734467870LL;

    t156 = ((x829^(x830^x831))*x832);

    if (t156 != -4175495168LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x837 = 65U;
	uint32_t x839 = 197U;
	volatile int32_t x840 = INT32_MIN;
	uint32_t t157 = 107U;

    t157 = ((x837^(x838^x839))*x840);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x841 = INT16_MAX;
	int32_t x842 = -1;
	uint16_t x843 = 113U;
	uint32_t x844 = UINT32_MAX;

    t158 = ((x841^(x842^x843))*x844);

    if (t158 != 32655U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x845 = 2U;
	static int32_t x846 = INT32_MIN;
	int64_t x847 = 1975088LL;
	volatile uint64_t t159 = 1906193973227177533LLU;

    t159 = ((x845^(x846^x847))*x848);

    if (t159 != 16098544858663425586LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x857 = INT16_MIN;
	static int64_t x859 = INT64_MIN;
	static uint64_t x860 = 239101345LLU;
	volatile uint64_t t160 = 2116LLU;

    t160 = ((x857^(x858^x859))*x860);

    if (t160 != 9223364202221004193LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x870 = INT8_MAX;
	volatile int8_t x871 = INT8_MIN;
	int32_t x872 = -66;
	volatile uint32_t t161 = 485194861U;

    t161 = ((x869^(x870^x871))*x872);

    if (t161 != 5478U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x873 = 39;
	int8_t x874 = INT8_MIN;
	int16_t x876 = INT16_MIN;
	int32_t t162 = -5016111;

    t162 = ((x873^(x874^x875))*x876);

    if (t162 != 2144600064) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x877 = -1;
	int64_t x880 = INT64_MAX;
	uint64_t t163 = 1310131535257264LLU;

    t163 = ((x877^(x878^x879))*x880);

    if (t163 != 9912942LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x889 = 1U;
	int64_t x890 = -46448205316813613LL;
	static volatile int32_t x891 = INT32_MIN;

    t164 = ((x889^(x890^x891))*x892);

    if (t164 != 8515002552349620398LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x893 = UINT16_MAX;
	uint64_t x894 = 295883LLU;
	int32_t x896 = INT32_MIN;
	static uint64_t t165 = 557LLU;

    t165 = ((x893^(x894^x895))*x896);

    if (t165 != 18446112863840894976LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x901 = 1188;
	int8_t x903 = INT8_MIN;
	static uint64_t x904 = 1050471633691762618LLU;
	static volatile uint64_t t166 = 50672784824543LLU;

    t166 = ((x901^(x902^x903))*x904);

    if (t166 != 8184475089284281034LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x915 = -705047;
	uint16_t x916 = UINT16_MAX;
	volatile uint32_t t167 = 2U;

    t167 = ((x913^(x914^x915))*x916);

    if (t167 != 3782876793U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x917 = 5U;
	uint64_t x918 = 2383755LLU;
	int8_t x919 = INT8_MAX;
	int16_t x920 = INT16_MIN;
	volatile uint64_t t168 = 343955731540638884LLU;

    t168 = ((x917^(x918^x919))*x920);

    if (t168 != 18446743995595325440LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x921 = INT16_MIN;
	int8_t x922 = INT8_MIN;
	uint16_t x924 = 3U;

    t169 = ((x921^(x922^x923))*x924);

    if (t169 != -97923) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x925 = -1;
	volatile int16_t x926 = 2;
	int32_t x927 = -7638;
	int8_t x928 = INT8_MIN;

    t170 = ((x925^(x926^x927))*x928);

    if (t170 != -977792) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x941 = INT8_MIN;
	uint64_t x942 = UINT64_MAX;
	static int8_t x943 = -1;
	uint16_t x944 = 7898U;
	volatile uint64_t t171 = 238311210687755898LLU;

    t171 = ((x941^(x942^x943))*x944);

    if (t171 != 18446744073708540672LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x945 = 0;
	int64_t x947 = -1LL;
	int8_t x948 = -12;
	static uint64_t t172 = 5LLU;

    t172 = ((x945^(x946^x947))*x948);

    if (t172 != 48LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x949 = -2;
	uint32_t x950 = 97216U;
	volatile int16_t x951 = INT16_MAX;
	volatile uint32_t t173 = 32279U;

    t173 = ((x949^(x950^x951))*x952);

    if (t173 != 999345U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x953 = UINT64_MAX;
	int8_t x954 = INT8_MIN;
	int32_t x955 = -1;
	int8_t x956 = INT8_MIN;
	volatile uint64_t t174 = 101149LLU;

    t174 = ((x953^(x954^x955))*x956);

    if (t174 != 16384LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x962 = INT64_MIN;
	int64_t x963 = -4162429LL;
	volatile int32_t x964 = INT32_MIN;
	volatile uint64_t t175 = 1776916925LLU;

    t175 = ((x961^(x962^x963))*x964);

    if (t175 != 18437805327643574272LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x965 = 14;
	volatile int8_t x966 = INT8_MIN;
	volatile uint16_t x967 = 24492U;
	int16_t x968 = INT16_MIN;
	int32_t t176 = 2938;

    t176 = ((x965^(x966^x967))*x968);

    if (t176 != 804192256) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x973 = INT32_MIN;
	int64_t x974 = -58LL;
	uint32_t x975 = UINT32_MAX;
	static int16_t x976 = -37;
	int64_t t177 = 27291026199LL;

    t177 = ((x973^(x974^x975))*x976);

    if (t177 != -79456897085LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x978 = 29;
	int8_t x979 = INT8_MAX;
	uint64_t x980 = UINT64_MAX;
	uint64_t t178 = 695161913823243LLU;

    t178 = ((x977^(x978^x979))*x980);

    if (t178 != 9223372036854775710LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x981 = INT8_MAX;
	int16_t x982 = INT16_MAX;
	int16_t x984 = -1;
	int32_t t179 = 17;

    t179 = ((x981^(x982^x983))*x984);

    if (t179 != -32657) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x986 = INT64_MAX;
	int64_t x987 = INT64_MIN;
	static int32_t x988 = INT32_MIN;
	int64_t t180 = 338128221LL;

    t180 = ((x985^(x986^x987))*x988);

    if (t180 != 4294967296LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x990 = INT32_MIN;
	uint16_t x991 = UINT16_MAX;
	int16_t x992 = -605;
	int64_t t181 = -1863665141658311292LL;

    t181 = ((x989^(x990^x991))*x992);

    if (t181 != 6369977581356125LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x993 = INT8_MIN;
	uint32_t x994 = 43U;
	int32_t x996 = -7449;
	int64_t t182 = -31058534145LL;

    t182 = ((x993^(x994^x995))*x996);

    if (t182 != -8775049511982LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1005 = -1LL;
	int8_t x1006 = 24;
	volatile uint64_t t183 = 42937303222LLU;

    t183 = ((x1005^(x1006^x1007))*x1008);

    if (t183 != 10799604484779847896LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1017 = 14897293U;
	uint32_t x1018 = UINT32_MAX;
	uint16_t x1019 = 762U;
	uint64_t x1020 = 1746LLU;
	uint64_t t184 = 2876804541LLU;

    t184 = ((x1017^(x1018^x1019))*x1020);

    if (t184 != 7473001367952LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1026 = -1;
	uint16_t x1027 = 22U;
	volatile int32_t x1028 = INT32_MIN;
	static volatile uint64_t t185 = 38617336640601533LLU;

    t185 = ((x1025^(x1026^x1027))*x1028);

    if (t185 != 111669149696LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1029 = -1LL;
	uint8_t x1031 = 13U;
	int16_t x1032 = 1220;

    t186 = ((x1029^(x1030^x1031))*x1032);

    if (t186 != 246436340LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1033 = 61303LLU;
	static int8_t x1034 = INT8_MAX;
	uint32_t x1035 = UINT32_MAX;
	static volatile uint64_t t187 = 249LLU;

    t187 = ((x1033^(x1034^x1035))*x1036);

    if (t187 != 18446481247480901385LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1037 = 77934813401LLU;
	static uint16_t x1038 = 18985U;
	static volatile int32_t x1039 = -1;
	uint64_t t188 = 1047777940440381699LLU;

    t188 = ((x1037^(x1038^x1039))*x1040);

    if (t188 != 1343011089918459904LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1045 = -564580;
	int64_t x1047 = 13771LL;

    t189 = ((x1045^(x1046^x1047))*x1048);

    if (t189 != 4294399832LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1054 = 1279LLU;
	static int64_t x1056 = INT64_MIN;
	volatile uint64_t t190 = 1258898LLU;

    t190 = ((x1053^(x1054^x1055))*x1056);

    if (t190 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1057 = INT32_MAX;
	int16_t x1058 = 12;
	uint64_t x1060 = UINT64_MAX;
	volatile uint64_t t191 = 3246449411570489168LLU;

    t191 = ((x1057^(x1058^x1059))*x1060);

    if (t191 != 9223372034707292173LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1062 = 5U;
	uint64_t x1063 = UINT64_MAX;
	int16_t x1064 = -1;
	static uint64_t t192 = 21949LLU;

    t192 = ((x1061^(x1062^x1063))*x1064);

    if (t192 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x1066 = 3LLU;
	uint32_t x1067 = UINT32_MAX;
	volatile uint64_t t193 = 50831938376LLU;

    t193 = ((x1065^(x1066^x1067))*x1068);

    if (t193 != 18446743858961187116LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1069 = 84714657640155748LLU;
	uint32_t x1070 = UINT32_MAX;
	int64_t x1071 = INT64_MAX;
	uint8_t x1072 = UINT8_MAX;

    t194 = ((x1069^(x1070^x1071))*x1072);

    if (t194 != 6067877898174421404LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1073 = INT8_MAX;
	int64_t x1074 = -1LL;
	int16_t x1075 = INT16_MIN;
	int64_t t195 = -7310LL;

    t195 = ((x1073^(x1074^x1075))*x1076);

    if (t195 != -4177920LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1077 = UINT64_MAX;
	uint32_t x1078 = UINT32_MAX;
	int64_t x1079 = -1LL;
	int32_t x1080 = INT32_MIN;
	volatile uint64_t t196 = 294132375LLU;

    t196 = ((x1077^(x1078^x1079))*x1080);

    if (t196 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x1081 = UINT8_MAX;
	int8_t x1082 = -2;
	volatile int64_t x1084 = -341778386436LL;
	static uint64_t t197 = 543764360331515628LLU;

    t197 = ((x1081^(x1082^x1083))*x1084);

    if (t197 != 16984670759263227452LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x1086 = 11U;
	static uint16_t x1087 = UINT16_MAX;
	static uint64_t x1088 = 60741370LLU;
	static uint64_t t198 = 249468096LLU;

    t198 = ((x1085^(x1086^x1087))*x1088);

    if (t198 != 3993339698275636594LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1089 = INT8_MAX;
	volatile uint8_t x1091 = 0U;
	int64_t x1092 = -1LL;
	static volatile int64_t t199 = -81979LL;

    t199 = ((x1089^(x1090^x1091))*x1092);

    if (t199 != 0LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

