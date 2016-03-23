
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

static uint16_t x17 = 596U;
static uint32_t x21 = UINT32_MAX;
uint32_t t2 = 60269U;
int8_t x25 = INT8_MAX;
static volatile int8_t x26 = INT8_MAX;
int32_t t5 = 108291115;
int8_t x45 = INT8_MAX;
volatile int64_t x84 = 11LL;
uint64_t t9 = 7511591LLU;
uint8_t x86 = UINT8_MAX;
uint64_t x97 = 507489LLU;
int16_t x101 = INT16_MAX;
volatile int16_t x104 = -1;
uint64_t x107 = UINT64_MAX;
static volatile uint32_t t14 = 9165295U;
static volatile uint64_t t15 = 8461193496594917263LLU;
volatile uint16_t x127 = UINT16_MAX;
int8_t x147 = 31;
int16_t x153 = INT16_MAX;
int32_t x155 = 26;
int8_t x156 = INT8_MIN;
int32_t x174 = INT32_MIN;
uint8_t x189 = 11U;
int64_t x191 = INT64_MIN;
static uint16_t x201 = 1549U;
static volatile uint16_t x204 = 2248U;
int8_t x209 = INT8_MAX;
uint16_t x217 = UINT16_MAX;
volatile uint64_t t29 = 43005066862068771LLU;
volatile uint16_t x225 = UINT16_MAX;
volatile int32_t t30 = 22841784;
uint32_t x233 = 6587U;
static volatile int16_t x236 = 1;
int32_t t33 = 1191;
int64_t x267 = -1LL;
volatile int32_t t34 = 6;
int64_t x279 = INT64_MIN;
static volatile uint64_t t36 = 369793464530479071LLU;
int16_t x301 = 1942;
int16_t x328 = -1;
uint64_t x331 = 378243657531961483LLU;
int8_t x332 = -1;
static volatile int64_t t43 = -9LL;
int64_t x394 = INT64_MAX;
uint32_t x409 = UINT32_MAX;
int8_t x419 = -1;
int64_t x422 = -70871535329LL;
int8_t x424 = INT8_MIN;
static volatile int32_t t54 = 18;
static int8_t x463 = 44;
static uint8_t x470 = 7U;
uint32_t x471 = 1829U;
volatile uint32_t x472 = 170422788U;
int32_t t58 = 54;
volatile uint64_t t60 = 5LLU;
uint16_t x487 = UINT16_MAX;
uint16_t x493 = 1U;
volatile int32_t t63 = 2;
volatile uint64_t t64 = 122318830827LLU;
int32_t x523 = 172;
uint8_t x533 = 1U;
int64_t x536 = INT64_MIN;
uint16_t x538 = 31069U;
int16_t x541 = INT16_MAX;
uint16_t x553 = UINT16_MAX;
static uint32_t x556 = UINT32_MAX;
int8_t x577 = 1;
volatile int8_t x593 = 1;
int64_t x596 = 3065219750710676749LL;
volatile uint64_t x632 = 8LLU;
static int32_t x643 = INT32_MIN;
static uint64_t t77 = 2753311236630LLU;
static int16_t x672 = INT16_MIN;
uint32_t x686 = 710389843U;
int8_t x687 = INT8_MIN;
uint16_t x694 = UINT16_MAX;
volatile uint32_t x727 = 25738907U;
int32_t x728 = INT32_MIN;
uint32_t x737 = 401334U;
uint8_t x745 = 90U;
uint16_t x746 = 471U;
volatile int64_t x759 = -3948473122LL;
volatile int8_t x792 = INT8_MAX;
volatile int64_t x793 = 3535288004LL;
int8_t x819 = -1;
uint32_t x829 = UINT32_MAX;
static volatile int32_t x831 = 2;
static int16_t x835 = INT16_MIN;
volatile uint64_t t92 = 1816636LLU;
int8_t x837 = 1;
int16_t x838 = INT16_MIN;
int8_t x840 = -21;
int32_t t94 = -13938499;
uint16_t x849 = 51U;
int16_t x850 = 7256;
uint8_t x852 = 1U;
static volatile int64_t t97 = 643800635726403LL;
int8_t x887 = INT8_MAX;
int64_t t99 = -223LL;
uint16_t x910 = 36U;
int64_t x959 = INT64_MIN;
volatile uint32_t t104 = 188706U;
int64_t x982 = -149905913469360826LL;
uint32_t t107 = 4711477U;
volatile int32_t t108 = -58251669;
uint8_t x1010 = 0U;
uint64_t x1012 = UINT64_MAX;
uint32_t x1025 = 101841561U;
static uint16_t x1029 = UINT16_MAX;
static uint16_t x1030 = UINT16_MAX;
static int16_t x1035 = -558;
uint64_t x1037 = 98370146LLU;
int64_t x1046 = INT64_MIN;
volatile int32_t x1049 = 28360053;
uint8_t x1053 = 62U;
uint32_t x1055 = UINT32_MAX;
uint8_t x1061 = UINT8_MAX;
int8_t x1064 = INT8_MAX;
volatile int32_t t122 = -655845344;
volatile uint64_t x1073 = 544972LLU;
static uint16_t x1078 = UINT16_MAX;
int16_t x1101 = 0;
uint16_t x1107 = 161U;
volatile int32_t t130 = 255961750;
static uint8_t x1146 = 1U;
int32_t x1147 = -1;
int8_t x1148 = INT8_MIN;
int16_t x1153 = 0;
uint64_t x1157 = UINT64_MAX;
static int32_t x1158 = -7176;
int32_t x1160 = -8594288;
static uint64_t t133 = 197140639319972LLU;
volatile uint32_t x1170 = UINT32_MAX;
uint64_t x1173 = 1LLU;
int16_t x1182 = 1;
uint8_t x1193 = 30U;
volatile int32_t x1194 = INT32_MIN;
volatile int16_t x1207 = INT16_MIN;
static int8_t x1208 = INT8_MIN;
volatile int32_t x1215 = -1;
int16_t x1221 = INT16_MAX;
int8_t x1250 = INT8_MIN;
int64_t x1263 = -17058883509LL;
int16_t x1274 = INT16_MIN;
static uint8_t x1276 = 18U;
static volatile uint16_t x1284 = 1U;
int32_t t147 = 131651346;
uint8_t x1285 = 0U;
int8_t x1286 = INT8_MIN;
static volatile int16_t x1297 = 12;
volatile int32_t x1298 = INT32_MIN;
static int64_t x1302 = 219LL;
volatile uint64_t t151 = 29516621614LLU;
static uint16_t x1377 = UINT16_MAX;
int64_t x1386 = 53LL;
static volatile int32_t x1387 = INT32_MIN;
uint64_t x1388 = 1068448431LLU;
uint32_t x1392 = UINT32_MAX;
volatile uint32_t t160 = 58861U;
int16_t x1393 = 323;
int64_t x1398 = INT64_MIN;
uint8_t x1413 = 3U;
int8_t x1414 = INT8_MIN;
int16_t x1430 = -1;
uint64_t t165 = 208533339817414LLU;
static volatile int32_t x1434 = INT32_MIN;
int16_t x1447 = INT16_MAX;
uint32_t x1463 = UINT32_MAX;
volatile uint32_t t169 = 14735221U;
uint64_t x1471 = UINT64_MAX;
uint32_t t172 = 11U;
uint32_t x1483 = 443873U;
volatile int32_t x1484 = -46;
int8_t x1497 = 13;
static int16_t x1500 = INT16_MIN;
static int32_t t176 = 14359941;
static int64_t x1509 = 12LL;
int64_t t179 = 22317837831LL;
int64_t x1521 = 195977LL;
int8_t x1533 = 12;
volatile int16_t x1535 = 0;
volatile int32_t x1571 = INT32_MAX;
volatile int32_t t182 = 922692;
static int32_t x1582 = 25630;
int32_t t183 = 74;
int8_t x1588 = INT8_MIN;
static volatile int32_t t184 = 9246595;
volatile int16_t x1592 = 4;
int8_t x1599 = INT8_MAX;
static uint8_t x1631 = 13U;
int32_t x1632 = 31002;
static uint32_t x1644 = 117334U;
uint32_t x1684 = 2073518901U;
static uint16_t x1685 = 25U;
uint8_t x1691 = UINT8_MAX;
static volatile uint64_t t196 = 344651565LLU;
int8_t x1716 = INT8_MIN;
int32_t t198 = 75363;
int32_t t199 = 22326150;


void f0(void) {
    	uint64_t x9 = 392835144198778269LLU;
	int8_t x10 = 1;
	static volatile int8_t x11 = INT8_MAX;
	static uint32_t x12 = 327U;
	volatile uint64_t t0 = 104LLU;

    t0 = ((x9>>(x10!=x11))*x12);

    if (t0 != 8888313855371591970LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 2223U;
	volatile uint32_t t1 = 302U;

    t1 = ((x17>>(x18!=x19))*x20);

    if (t1 != 662454U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x22 = -1LL;
	int8_t x23 = INT8_MAX;
	int32_t x24 = -1;

    t2 = ((x21>>(x22!=x23))*x24);

    if (t2 != 2147483649U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x27 = -1LL;
	int32_t x28 = -1;
	int32_t t3 = -997;

    t3 = ((x25>>(x26!=x27))*x28);

    if (t3 != -63) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = INT8_MAX;
	static uint8_t x32 = UINT8_MAX;
	volatile int32_t t4 = -1629400;

    t4 = ((x29>>(x30!=x31))*x32);

    if (t4 != 4177665) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = 0U;
	int8_t x34 = 1;
	uint32_t x35 = 1165U;
	uint8_t x36 = 1U;

    t5 = ((x33>>(x34!=x35))*x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x46 = INT64_MIN;
	int8_t x47 = 28;
	static int8_t x48 = -1;
	volatile int32_t t6 = 61113;

    t6 = ((x45>>(x46!=x47))*x48);

    if (t6 != -63) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = INT64_MAX;
	static int64_t x58 = 1261490207875971LL;
	int64_t x59 = INT64_MAX;
	int64_t x60 = -1LL;
	static int64_t t7 = -7085001LL;

    t7 = ((x57>>(x58!=x59))*x60);

    if (t7 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x65 = 7262624U;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = -1;
	int16_t x68 = INT16_MIN;
	static uint32_t t8 = 6438U;

    t8 = ((x65>>(x66!=x67))*x68);

    if (t8 != 1268252672U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x81 = 499737264694325861LLU;
	int8_t x82 = 0;
	uint16_t x83 = 842U;

    t9 = ((x81>>(x82!=x83))*x84);

    if (t9 != 2748554955818792230LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x85 = UINT16_MAX;
	static uint32_t x87 = 3U;
	uint64_t x88 = 264983159905888LLU;
	volatile uint64_t t10 = 247258881LLU;

    t10 = ((x85>>(x86!=x87))*x88);

    if (t10 != 8682703200636232096LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x98 = -1;
	volatile int64_t x99 = -1LL;
	int64_t x100 = -1LL;
	volatile uint64_t t11 = 106985413287714884LLU;

    t11 = ((x97>>(x98!=x99))*x100);

    if (t11 != 18446744073709044127LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int32_t t12 = -1;

    t12 = ((x101>>(x102!=x103))*x104);

    if (t12 != -16383) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x105 = UINT8_MAX;
	static volatile int32_t x106 = 78208;
	static uint32_t x108 = 15830855U;
	volatile uint32_t t13 = 1966412941U;

    t13 = ((x105>>(x106!=x107))*x108);

    if (t13 != 2010518585U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x109 = 116U;
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MAX;
	uint32_t x112 = 2724U;

    t14 = ((x109>>(x110!=x111))*x112);

    if (t14 != 157992U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x113 = UINT64_MAX;
	uint64_t x114 = 111698881203LLU;
	uint64_t x115 = 457LLU;
	int16_t x116 = -233;

    t15 = ((x113>>(x114!=x115))*x116);

    if (t15 != 9223372036854776041LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x117 = INT64_MAX;
	int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MAX;
	static int8_t x120 = -1;
	int64_t t16 = 229579116LL;

    t16 = ((x117>>(x118!=x119))*x120);

    if (t16 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x121 = 3204020156LLU;
	int8_t x122 = INT8_MAX;
	static uint32_t x123 = 407U;
	int16_t x124 = 5;
	volatile uint64_t t17 = 22321716674990LLU;

    t17 = ((x121>>(x122!=x123))*x124);

    if (t17 != 8010050390LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 48U;
	int8_t x128 = INT8_MAX;
	int32_t t18 = 0;

    t18 = ((x125>>(x126!=x127))*x128);

    if (t18 != 4161409) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x141 = 622979432225LL;
	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 2U;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t19 = 3982LL;

    t19 = ((x141>>(x142!=x143))*x144);

    if (t19 != 79429877608560LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x145 = UINT16_MAX;
	uint32_t x146 = 423692U;
	int16_t x148 = 1;
	volatile int32_t t20 = -125112374;

    t20 = ((x145>>(x146!=x147))*x148);

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x154 = -165395030;
	static int32_t t21 = 273536321;

    t21 = ((x153>>(x154!=x155))*x156);

    if (t21 != -2097024) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x157 = INT16_MAX;
	static int64_t x158 = -112535627697710LL;
	uint64_t x159 = 168739630956389LLU;
	uint64_t x160 = 5LLU;
	uint64_t t22 = 631667253LLU;

    t22 = ((x157>>(x158!=x159))*x160);

    if (t22 != 81915LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x161 = UINT64_MAX;
	uint8_t x162 = 27U;
	uint32_t x163 = 1053311719U;
	uint32_t x164 = 10260U;
	volatile uint64_t t23 = 52732419879237434LLU;

    t23 = ((x161>>(x162!=x163))*x164);

    if (t23 != 18446744073709541356LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x173 = 3U;
	int8_t x175 = INT8_MAX;
	int8_t x176 = 37;
	static volatile int32_t t24 = 34487847;

    t24 = ((x173>>(x174!=x175))*x176);

    if (t24 != 37) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x190 = -1LL;
	static uint16_t x192 = 179U;
	int32_t t25 = -4120;

    t25 = ((x189>>(x190!=x191))*x192);

    if (t25 != 895) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x202 = INT64_MAX;
	volatile uint32_t x203 = 7334U;
	static volatile int32_t t26 = -87;

    t26 = ((x201>>(x202!=x203))*x204);

    if (t26 != 1739952) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x210 = -11066186;
	int8_t x211 = INT8_MIN;
	volatile uint16_t x212 = UINT16_MAX;
	static volatile int32_t t27 = 894;

    t27 = ((x209>>(x210!=x211))*x212);

    if (t27 != 4128705) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x218 = 785LL;
	volatile uint32_t x219 = UINT32_MAX;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t28 = 58003560;

    t28 = ((x217>>(x218!=x219))*x220);

    if (t28 != -1073709056) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x221 = 136042601428LLU;
	int64_t x222 = INT64_MIN;
	int16_t x223 = 6442;
	int64_t x224 = INT64_MIN;

    t29 = ((x221>>(x222!=x223))*x224);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x226 = 1776U;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = -1;

    t30 = ((x225>>(x226!=x227))*x228);

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x229 = 9;
	uint16_t x230 = 1680U;
	static uint16_t x231 = 1118U;
	int16_t x232 = 1;
	volatile int32_t t31 = -2592870;

    t31 = ((x229>>(x230!=x231))*x232);

    if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 4U;
	volatile uint32_t t32 = 26975391U;

    t32 = ((x233>>(x234!=x235))*x236);

    if (t32 != 3293U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x257 = 43;
	volatile int64_t x258 = -21LL;
	int8_t x259 = -11;
	int16_t x260 = 58;

    t33 = ((x257>>(x258!=x259))*x260);

    if (t33 != 1218) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x265 = 491;
	int64_t x266 = 748423LL;
	int8_t x268 = INT8_MAX;

    t34 = ((x265>>(x266!=x267))*x268);

    if (t34 != 31115) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	static uint64_t x274 = UINT64_MAX;
	int32_t x275 = INT32_MIN;
	int8_t x276 = -34;
	volatile uint32_t t35 = 12513U;

    t35 = ((x273>>(x274!=x275))*x276);

    if (t35 != 34U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x277 = 14835275275LLU;
	int32_t x278 = -1;
	uint32_t x280 = 21U;

    t36 = ((x277>>(x278!=x279))*x280);

    if (t36 != 155770390377LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = 1659909855892364LLU;
	volatile int8_t x288 = -23;
	int32_t t37 = -5590;

    t37 = ((x285>>(x286!=x287))*x288);

    if (t37 != -376809) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x289 = 0;
	int16_t x290 = INT16_MIN;
	int16_t x291 = 3;
	static int8_t x292 = -14;
	int32_t t38 = 123070;

    t38 = ((x289>>(x290!=x291))*x292);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x302 = -1;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -1;
	static int32_t t39 = 634865;

    t39 = ((x301>>(x302!=x303))*x304);

    if (t39 != -971) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x325 = 30959U;
	static uint16_t x326 = UINT16_MAX;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t t40 = 20372;

    t40 = ((x325>>(x326!=x327))*x328);

    if (t40 != -15479) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x329 = 1U;
	int8_t x330 = INT8_MAX;
	volatile int32_t t41 = -60362;

    t41 = ((x329>>(x330!=x331))*x332);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x341 = 11U;
	uint8_t x342 = 3U;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MIN;
	uint32_t t42 = 281800254U;

    t42 = ((x341>>(x342!=x343))*x344);

    if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x349 = 1706029993306LL;
	volatile int16_t x350 = INT16_MAX;
	uint32_t x351 = 0U;
	volatile int16_t x352 = -1966;

    t43 = ((x349>>(x350!=x351))*x352);

    if (t43 != -1677027483419798LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x357 = 240U;
	static volatile uint64_t x358 = UINT64_MAX;
	volatile uint32_t x359 = 229U;
	int8_t x360 = 5;
	static volatile int32_t t44 = 126812331;

    t44 = ((x357>>(x358!=x359))*x360);

    if (t44 != 600) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x361 = UINT64_MAX;
	uint16_t x362 = 123U;
	static int64_t x363 = -1165LL;
	int8_t x364 = INT8_MIN;
	static uint64_t t45 = 8113LLU;

    t45 = ((x361>>(x362!=x363))*x364);

    if (t45 != 128LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x393 = UINT64_MAX;
	uint32_t x395 = UINT32_MAX;
	uint32_t x396 = 274404261U;
	uint64_t t46 = 1916396812606LLU;

    t46 = ((x393>>(x394!=x395))*x396);

    if (t46 != 9223372036580371547LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x401 = 75679478860196LL;
	int16_t x402 = INT16_MIN;
	static int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	int64_t t47 = -16139LL;

    t47 = ((x401>>(x402!=x403))*x404);

    if (t47 != -37839739430098LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MIN;
	volatile int64_t x407 = INT64_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t48 = 434370255842600LLU;

    t48 = ((x405>>(x406!=x407))*x408);

    if (t48 != 13835058055282163713LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x410 = 3U;
	static uint8_t x411 = UINT8_MAX;
	volatile int32_t x412 = -26043;
	uint32_t t49 = 1U;

    t49 = ((x409>>(x410!=x411))*x412);

    if (t49 != 2147509691U) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x413 = INT32_MAX;
	uint64_t x414 = 28LLU;
	uint64_t x415 = UINT64_MAX;
	static uint64_t x416 = 2462064636512549LLU;
	volatile uint64_t t50 = 490271817LLU;

    t50 = ((x413>>(x414!=x415))*x416);

    if (t50 != 431205427173996251LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x417 = 12670U;
	int32_t x418 = -1;
	int8_t x420 = -12;
	uint32_t t51 = 132802U;

    t51 = ((x417>>(x418!=x419))*x420);

    if (t51 != 4294815256U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x421 = UINT64_MAX;
	int8_t x423 = -1;
	uint64_t t52 = 528839604532846LLU;

    t52 = ((x421>>(x422!=x423))*x424);

    if (t52 != 128LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x449 = 32U;
	int16_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = -1;
	volatile int32_t t53 = 1;

    t53 = ((x449>>(x450!=x451))*x452);

    if (t53 != -32) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x453 = UINT8_MAX;
	int32_t x454 = INT32_MIN;
	volatile int16_t x455 = INT16_MIN;
	uint16_t x456 = UINT16_MAX;

    t54 = ((x453>>(x454!=x455))*x456);

    if (t54 != 8322945) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x461 = 46805233U;
	static volatile int16_t x462 = INT16_MIN;
	static uint32_t x464 = 1U;
	volatile uint32_t t55 = 434295276U;

    t55 = ((x461>>(x462!=x463))*x464);

    if (t55 != 23402616U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x465 = UINT8_MAX;
	volatile int64_t x466 = -1LL;
	int16_t x467 = 0;
	int64_t x468 = -6325LL;
	int64_t t56 = 15065LL;

    t56 = ((x465>>(x466!=x467))*x468);

    if (t56 != -803275LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x469 = UINT16_MAX;
	static volatile uint32_t t57 = 42109U;

    t57 = ((x469>>(x470!=x471))*x472);

    if (t57 != 786009596U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	volatile uint8_t x474 = UINT8_MAX;
	static int64_t x475 = INT64_MIN;
	uint16_t x476 = UINT16_MAX;

    t58 = ((x473>>(x474!=x475))*x476);

    if (t58 != 8322945) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x477 = 10862U;
	volatile int32_t x478 = 0;
	int32_t x479 = 502554479;
	volatile uint16_t x480 = UINT16_MAX;
	volatile uint32_t t59 = 29280665U;

    t59 = ((x477>>(x478!=x479))*x480);

    if (t59 != 355920585U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x481 = 186967657777LLU;
	static int8_t x482 = 0;
	uint32_t x483 = 1877104U;
	int8_t x484 = -3;

    t60 = ((x481>>(x482!=x483))*x484);

    if (t60 != 18446743793258064952LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x485 = 1LLU;
	uint8_t x486 = UINT8_MAX;
	int32_t x488 = INT32_MAX;
	uint64_t t61 = 157LLU;

    t61 = ((x485>>(x486!=x487))*x488);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x494 = INT64_MAX;
	volatile int64_t x495 = -1LL;
	int32_t x496 = INT32_MIN;
	static volatile int32_t t62 = 62;

    t62 = ((x493>>(x494!=x495))*x496);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x501 = 9;
	volatile uint16_t x502 = 5696U;
	static uint32_t x503 = UINT32_MAX;
	volatile int16_t x504 = -1;

    t63 = ((x501>>(x502!=x503))*x504);

    if (t63 != -4) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x513 = 491573LLU;
	volatile uint8_t x514 = UINT8_MAX;
	volatile int8_t x515 = INT8_MIN;
	int8_t x516 = INT8_MIN;

    t64 = ((x513>>(x514!=x515))*x516);

    if (t64 != 18446744073678091008LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	uint64_t x522 = 3151067425101910353LLU;
	uint32_t x524 = 551223U;
	static volatile uint32_t t65 = 15111988U;

    t65 = ((x521>>(x522!=x523))*x524);

    if (t65 != 882054857U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x529 = INT8_MAX;
	int16_t x530 = -884;
	int8_t x531 = INT8_MIN;
	uint64_t x532 = UINT64_MAX;
	uint64_t t66 = 30077245580330LLU;

    t66 = ((x529>>(x530!=x531))*x532);

    if (t66 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x534 = INT8_MIN;
	static int8_t x535 = 3;
	volatile int64_t t67 = -8306444619LL;

    t67 = ((x533>>(x534!=x535))*x536);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x537 = INT32_MAX;
	int64_t x539 = INT64_MIN;
	volatile int16_t x540 = 0;
	volatile int32_t t68 = 1682674;

    t68 = ((x537>>(x538!=x539))*x540);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x542 = 9912247224439388LLU;
	int32_t x543 = 7392;
	int16_t x544 = -2;
	static volatile int32_t t69 = 50;

    t69 = ((x541>>(x542!=x543))*x544);

    if (t69 != -32766) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MIN;
	static uint32_t t70 = 25280598U;

    t70 = ((x553>>(x554!=x555))*x556);

    if (t70 != 4294934529U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x578 = 1183U;
	int16_t x579 = INT16_MIN;
	int16_t x580 = -2;
	volatile int32_t t71 = 64125457;

    t71 = ((x577>>(x578!=x579))*x580);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x594 = 899655317;
	int64_t x595 = 745668133241349411LL;
	int64_t t72 = -11779605227447LL;

    t72 = ((x593>>(x594!=x595))*x596);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x617 = 6U;
	int64_t x618 = INT64_MIN;
	static uint32_t x619 = UINT32_MAX;
	int32_t x620 = -128661;
	int32_t t73 = 17114681;

    t73 = ((x617>>(x618!=x619))*x620);

    if (t73 != -385983) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x621 = 50U;
	uint8_t x622 = UINT8_MAX;
	volatile uint64_t x623 = UINT64_MAX;
	uint32_t x624 = UINT32_MAX;
	uint32_t t74 = 4155495U;

    t74 = ((x621>>(x622!=x623))*x624);

    if (t74 != 4294967271U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x629 = INT32_MAX;
	static int32_t x630 = 196708763;
	uint8_t x631 = 71U;
	static uint64_t t75 = 979708739733LLU;

    t75 = ((x629>>(x630!=x631))*x632);

    if (t75 != 8589934584LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x633 = UINT64_MAX;
	int64_t x634 = -1LL;
	int32_t x635 = 210965180;
	int32_t x636 = -1;
	volatile uint64_t t76 = 2982330257242LLU;

    t76 = ((x633>>(x634!=x635))*x636);

    if (t76 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x641 = UINT64_MAX;
	uint8_t x642 = UINT8_MAX;
	uint8_t x644 = 1U;

    t77 = ((x641>>(x642!=x643))*x644);

    if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x669 = 2;
	int64_t x670 = 109145796896LL;
	int32_t x671 = INT32_MIN;
	int32_t t78 = 224;

    t78 = ((x669>>(x670!=x671))*x672);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x677 = 4U;
	uint64_t x678 = 33879779LLU;
	static uint64_t x679 = 90410731480083LLU;
	static int8_t x680 = -1;
	volatile uint32_t t79 = 1926U;

    t79 = ((x677>>(x678!=x679))*x680);

    if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x685 = 20U;
	int32_t x688 = -1;
	static volatile int32_t t80 = 7;

    t80 = ((x685>>(x686!=x687))*x688);

    if (t80 != -10) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x693 = UINT16_MAX;
	int64_t x695 = INT64_MIN;
	uint16_t x696 = 843U;
	static volatile int32_t t81 = 22337;

    t81 = ((x693>>(x694!=x695))*x696);

    if (t81 != 27622581) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x725 = 163524494U;
	static int16_t x726 = 0;
	uint32_t t82 = 14U;

    t82 = ((x725>>(x726!=x727))*x728);

    if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x738 = -295;
	uint64_t x739 = 34185419658145LLU;
	int8_t x740 = 54;
	uint32_t t83 = 1188266U;

    t83 = ((x737>>(x738!=x739))*x740);

    if (t83 != 10836018U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x747 = UINT16_MAX;
	int64_t x748 = 8452362329054LL;
	int64_t t84 = 28242756936426921LL;

    t84 = ((x745>>(x746!=x747))*x748);

    if (t84 != 380356304807430LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x749 = UINT8_MAX;
	int32_t x750 = -1;
	int16_t x751 = -1;
	int32_t x752 = -1;
	static int32_t t85 = 499509;

    t85 = ((x749>>(x750!=x751))*x752);

    if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x757 = 13U;
	volatile int64_t x758 = INT64_MIN;
	int32_t x760 = INT32_MAX;
	static volatile uint32_t t86 = 104956U;

    t86 = ((x757>>(x758!=x759))*x760);

    if (t86 != 4294967290U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x781 = 371U;
	int64_t x782 = INT64_MIN;
	int16_t x783 = INT16_MAX;
	int8_t x784 = 6;
	int32_t t87 = -1;

    t87 = ((x781>>(x782!=x783))*x784);

    if (t87 != 1110) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x789 = INT16_MAX;
	static int8_t x790 = -1;
	int64_t x791 = -1LL;
	int32_t t88 = -1;

    t88 = ((x789>>(x790!=x791))*x792);

    if (t88 != 4161409) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x794 = 616522274U;
	uint16_t x795 = 5U;
	int8_t x796 = -63;
	volatile int64_t t89 = -47751845LL;

    t89 = ((x793>>(x794!=x795))*x796);

    if (t89 != -111361572126LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x817 = 169049765LL;
	int16_t x818 = 13;
	static volatile int32_t x820 = INT32_MAX;
	volatile int64_t t90 = 231087451853513128LL;

    t90 = ((x817>>(x818!=x819))*x820);

    if (t90 != 181515801859604654LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x830 = INT64_MIN;
	int16_t x832 = INT16_MIN;
	uint32_t t91 = 1580268424U;

    t91 = ((x829>>(x830!=x831))*x832);

    if (t91 != 32768U) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x833 = 81708LLU;
	int16_t x834 = INT16_MIN;
	static int64_t x836 = INT64_MIN;

    t92 = ((x833>>(x834!=x835))*x836);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x839 = INT32_MAX;
	volatile int32_t t93 = 0;

    t93 = ((x837>>(x838!=x839))*x840);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x841 = 1045U;
	int32_t x842 = INT32_MIN;
	int16_t x843 = -7;
	static int16_t x844 = INT16_MIN;

    t94 = ((x841>>(x842!=x843))*x844);

    if (t94 != -17104896) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x845 = 9891574;
	int8_t x846 = INT8_MIN;
	int16_t x847 = 1;
	uint64_t x848 = 20131456184742766LLU;
	volatile uint64_t t95 = 28507790278301712LLU;

    t95 = ((x845>>(x846!=x847))*x848);

    if (t95 != 8816523759920355290LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x851 = UINT16_MAX;
	int32_t t96 = -29;

    t96 = ((x849>>(x850!=x851))*x852);

    if (t96 != 25) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x865 = 603LL;
	uint64_t x866 = UINT64_MAX;
	int32_t x867 = INT32_MAX;
	static volatile int64_t x868 = -27959LL;

    t97 = ((x865>>(x866!=x867))*x868);

    if (t97 != -8415659LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x885 = 5LLU;
	int16_t x886 = INT16_MAX;
	uint32_t x888 = UINT32_MAX;
	uint64_t t98 = 4155496606880154LLU;

    t98 = ((x885>>(x886!=x887))*x888);

    if (t98 != 8589934590LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x893 = UINT8_MAX;
	volatile int64_t x894 = INT64_MIN;
	int64_t x895 = INT64_MAX;
	int64_t x896 = -183591674973LL;

    t99 = ((x893>>(x894!=x895))*x896);

    if (t99 != -23316142721571LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x909 = 1LL;
	int8_t x911 = -11;
	int16_t x912 = INT16_MIN;
	static volatile int64_t t100 = 14685LL;

    t100 = ((x909>>(x910!=x911))*x912);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x913 = UINT32_MAX;
	static volatile uint16_t x914 = 7615U;
	int16_t x915 = 0;
	int8_t x916 = INT8_MIN;
	uint32_t t101 = 56U;

    t101 = ((x913>>(x914!=x915))*x916);

    if (t101 != 128U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x929 = 53567;
	int16_t x930 = INT16_MAX;
	int32_t x931 = INT32_MIN;
	int32_t x932 = 302;
	volatile int32_t t102 = 1010565765;

    t102 = ((x929>>(x930!=x931))*x932);

    if (t102 != 8088466) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x957 = 52U;
	volatile uint8_t x958 = 2U;
	int16_t x960 = -1;
	volatile int32_t t103 = 227580641;

    t103 = ((x957>>(x958!=x959))*x960);

    if (t103 != -26) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x961 = UINT32_MAX;
	uint32_t x962 = 295954931U;
	int16_t x963 = INT16_MAX;
	volatile int8_t x964 = INT8_MAX;

    t104 = ((x961>>(x962!=x963))*x964);

    if (t104 != 2147483521U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x965 = 1LLU;
	volatile uint16_t x966 = 11U;
	static int64_t x967 = INT64_MAX;
	uint32_t x968 = 259U;
	uint64_t t105 = 6429179139441LLU;

    t105 = ((x965>>(x966!=x967))*x968);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x981 = 56;
	int32_t x983 = INT32_MAX;
	int8_t x984 = -1;
	int32_t t106 = 435178;

    t106 = ((x981>>(x982!=x983))*x984);

    if (t106 != -28) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x985 = INT8_MAX;
	static uint64_t x986 = UINT64_MAX;
	int8_t x987 = -5;
	static uint32_t x988 = 0U;

    t107 = ((x985>>(x986!=x987))*x988);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x993 = 318U;
	uint64_t x994 = 10440610LLU;
	static volatile uint8_t x995 = 2U;
	static int8_t x996 = INT8_MIN;

    t108 = ((x993>>(x994!=x995))*x996);

    if (t108 != -20352) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x997 = 56;
	int32_t x998 = INT32_MIN;
	uint8_t x999 = UINT8_MAX;
	static int16_t x1000 = INT16_MIN;
	volatile int32_t t109 = -72878087;

    t109 = ((x997>>(x998!=x999))*x1000);

    if (t109 != -917504) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x1001 = 22753U;
	static volatile int32_t x1002 = INT32_MAX;
	int8_t x1003 = 8;
	int16_t x1004 = -3593;
	int32_t t110 = -10;

    t110 = ((x1001>>(x1002!=x1003))*x1004);

    if (t110 != -40873968) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x1009 = 1912444563U;
	int32_t x1011 = -1;
	static uint64_t t111 = 42537787319LLU;

    t111 = ((x1009>>(x1010!=x1011))*x1012);

    if (t111 != 18446744072753329335LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x1021 = 0;
	static int64_t x1022 = INT64_MAX;
	uint16_t x1023 = UINT16_MAX;
	uint64_t x1024 = 341LLU;
	uint64_t t112 = 60685960170382LLU;

    t112 = ((x1021>>(x1022!=x1023))*x1024);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x1026 = 2U;
	static int32_t x1027 = -1;
	uint64_t x1028 = UINT64_MAX;
	uint64_t t113 = 210LLU;

    t113 = ((x1025>>(x1026!=x1027))*x1028);

    if (t113 != 18446744073658630836LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x1031 = -7;
	uint8_t x1032 = 98U;
	volatile int32_t t114 = -117903;

    t114 = ((x1029>>(x1030!=x1031))*x1032);

    if (t114 != 3211166) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x1033 = UINT16_MAX;
	int64_t x1034 = INT64_MAX;
	uint16_t x1036 = UINT16_MAX;
	int32_t t115 = 17;

    t115 = ((x1033>>(x1034!=x1035))*x1036);

    if (t115 != 2147385345) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x1038 = INT32_MAX;
	uint16_t x1039 = 3U;
	static int64_t x1040 = INT64_MIN;
	uint64_t t116 = 1507455590047002LLU;

    t116 = ((x1037>>(x1038!=x1039))*x1040);

    if (t116 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x1045 = UINT16_MAX;
	int16_t x1047 = 1067;
	volatile int16_t x1048 = INT16_MIN;
	static int32_t t117 = 315436;

    t117 = ((x1045>>(x1046!=x1047))*x1048);

    if (t117 != -1073709056) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x1050 = 4487489589041130399LL;
	int64_t x1051 = -1LL;
	uint32_t x1052 = UINT32_MAX;
	static uint32_t t118 = 20326606U;

    t118 = ((x1049>>(x1050!=x1051))*x1052);

    if (t118 != 4280787270U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x1054 = 89U;
	uint64_t x1056 = 8698288385246429LLU;
	uint64_t t119 = 29841161588181564LLU;

    t119 = ((x1053>>(x1054!=x1055))*x1056);

    if (t119 != 269646939942639299LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x1057 = UINT64_MAX;
	uint16_t x1058 = UINT16_MAX;
	uint64_t x1059 = 186979147081296713LLU;
	uint32_t x1060 = 34086U;
	volatile uint64_t t120 = 32561809313LLU;

    t120 = ((x1057>>(x1058!=x1059))*x1060);

    if (t120 != 18446744073709517530LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1062 = INT8_MAX;
	int32_t x1063 = INT32_MIN;
	static int32_t t121 = 1905779;

    t121 = ((x1061>>(x1062!=x1063))*x1064);

    if (t121 != 16129) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x1065 = 1U;
	int64_t x1066 = -2735583912478802LL;
	int16_t x1067 = -1;
	uint16_t x1068 = 0U;

    t122 = ((x1065>>(x1066!=x1067))*x1068);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1074 = INT8_MIN;
	volatile int8_t x1075 = 1;
	uint64_t x1076 = UINT64_MAX;
	volatile uint64_t t123 = 3833LLU;

    t123 = ((x1073>>(x1074!=x1075))*x1076);

    if (t123 != 18446744073709279130LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1077 = 407318U;
	int16_t x1079 = -28;
	uint8_t x1080 = 1U;
	static volatile uint32_t t124 = 16349U;

    t124 = ((x1077>>(x1078!=x1079))*x1080);

    if (t124 != 203659U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x1081 = INT64_MAX;
	static int64_t x1082 = -1LL;
	uint16_t x1083 = 163U;
	int8_t x1084 = 1;
	int64_t t125 = 14184LL;

    t125 = ((x1081>>(x1082!=x1083))*x1084);

    if (t125 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x1089 = 1613U;
	int8_t x1090 = -7;
	int64_t x1091 = INT64_MIN;
	int64_t x1092 = -1LL;
	volatile int64_t t126 = -6666934230LL;

    t126 = ((x1089>>(x1090!=x1091))*x1092);

    if (t126 != -806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x1093 = UINT64_MAX;
	volatile int16_t x1094 = INT16_MIN;
	int64_t x1095 = INT64_MAX;
	static volatile int8_t x1096 = 7;
	static volatile uint64_t t127 = 15014271256379LLU;

    t127 = ((x1093>>(x1094!=x1095))*x1096);

    if (t127 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x1102 = 4269940487148326719LLU;
	volatile uint64_t x1103 = 2LLU;
	int8_t x1104 = -6;
	int32_t t128 = 337;

    t128 = ((x1101>>(x1102!=x1103))*x1104);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x1105 = INT16_MAX;
	int8_t x1106 = INT8_MIN;
	uint8_t x1108 = 3U;
	int32_t t129 = 159;

    t129 = ((x1105>>(x1106!=x1107))*x1108);

    if (t129 != 49149) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1141 = INT16_MAX;
	static volatile int64_t x1142 = INT64_MIN;
	int64_t x1143 = -598LL;
	int16_t x1144 = 0;

    t130 = ((x1141>>(x1142!=x1143))*x1144);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x1145 = 5U;
	volatile int32_t t131 = 1;

    t131 = ((x1145>>(x1146!=x1147))*x1148);

    if (t131 != -256) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint16_t x1154 = 1U;
	uint64_t x1155 = UINT64_MAX;
	uint64_t x1156 = UINT64_MAX;
	static volatile uint64_t t132 = 7199825335017LLU;

    t132 = ((x1153>>(x1154!=x1155))*x1156);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x1159 = 6070U;

    t133 = ((x1157>>(x1158!=x1159))*x1160);

    if (t133 != 8594288LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x1169 = 5U;
	int16_t x1171 = INT16_MAX;
	int16_t x1172 = INT16_MAX;
	volatile int32_t t134 = 26;

    t134 = ((x1169>>(x1170!=x1171))*x1172);

    if (t134 != 65534) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1174 = -1;
	volatile uint32_t x1175 = 35U;
	static int16_t x1176 = INT16_MAX;
	volatile uint64_t t135 = 183967606056238LLU;

    t135 = ((x1173>>(x1174!=x1175))*x1176);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x1181 = UINT64_MAX;
	static int8_t x1183 = INT8_MAX;
	volatile uint32_t x1184 = 68132U;
	uint64_t t136 = 26930882994LLU;

    t136 = ((x1181>>(x1182!=x1183))*x1184);

    if (t136 != 18446744073709483484LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x1185 = 541614103339201LLU;
	static volatile uint64_t x1186 = 1LLU;
	static uint32_t x1187 = UINT32_MAX;
	int8_t x1188 = INT8_MIN;
	uint64_t t137 = 559474038502LLU;

    t137 = ((x1185>>(x1186!=x1187))*x1188);

    if (t137 != 18412080771095842816LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1195 = -29;
	int8_t x1196 = INT8_MIN;
	volatile int32_t t138 = 26817328;

    t138 = ((x1193>>(x1194!=x1195))*x1196);

    if (t138 != -1920) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1205 = 13U;
	int64_t x1206 = 1314LL;
	volatile int32_t t139 = 229997826;

    t139 = ((x1205>>(x1206!=x1207))*x1208);

    if (t139 != -768) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1213 = 1;
	static uint8_t x1214 = 79U;
	uint8_t x1216 = 3U;
	volatile int32_t t140 = -675992700;

    t140 = ((x1213>>(x1214!=x1215))*x1216);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1222 = -1LL;
	static int64_t x1223 = -2724619940LL;
	int8_t x1224 = INT8_MAX;
	volatile int32_t t141 = 29;

    t141 = ((x1221>>(x1222!=x1223))*x1224);

    if (t141 != 2080641) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x1241 = 0U;
	uint8_t x1242 = 6U;
	uint8_t x1243 = UINT8_MAX;
	int8_t x1244 = INT8_MAX;
	volatile int32_t t142 = 0;

    t142 = ((x1241>>(x1242!=x1243))*x1244);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x1249 = UINT64_MAX;
	static int64_t x1251 = -1LL;
	int8_t x1252 = -7;
	static volatile uint64_t t143 = 146327446082LLU;

    t143 = ((x1249>>(x1250!=x1251))*x1252);

    if (t143 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x1257 = 16281U;
	uint32_t x1258 = UINT32_MAX;
	uint8_t x1259 = UINT8_MAX;
	int64_t x1260 = -1LL;
	volatile int64_t t144 = 5378840747LL;

    t144 = ((x1257>>(x1258!=x1259))*x1260);

    if (t144 != -8140LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x1261 = 3465U;
	static volatile int64_t x1262 = INT64_MAX;
	int8_t x1264 = INT8_MAX;
	volatile uint32_t t145 = 86125U;

    t145 = ((x1261>>(x1262!=x1263))*x1264);

    if (t145 != 219964U) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x1273 = UINT32_MAX;
	int32_t x1275 = INT32_MIN;
	volatile uint32_t t146 = 2U;

    t146 = ((x1273>>(x1274!=x1275))*x1276);

    if (t146 != 4294967278U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x1281 = 6U;
	int8_t x1282 = INT8_MAX;
	static int32_t x1283 = 2;

    t147 = ((x1281>>(x1282!=x1283))*x1284);

    if (t147 != 3) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x1287 = 15959449995290457LLU;
	volatile int8_t x1288 = 15;
	volatile int32_t t148 = -14294006;

    t148 = ((x1285>>(x1286!=x1287))*x1288);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x1299 = INT16_MAX;
	int16_t x1300 = -1;
	int32_t t149 = -141766861;

    t149 = ((x1297>>(x1298!=x1299))*x1300);

    if (t149 != -6) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1301 = UINT32_MAX;
	uint16_t x1303 = 553U;
	volatile uint64_t x1304 = UINT64_MAX;
	volatile uint64_t t150 = 3487544469628LLU;

    t150 = ((x1301>>(x1302!=x1303))*x1304);

    if (t150 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1305 = UINT64_MAX;
	uint16_t x1306 = UINT16_MAX;
	static int16_t x1307 = -1848;
	int32_t x1308 = INT32_MIN;

    t151 = ((x1305>>(x1306!=x1307))*x1308);

    if (t151 != 2147483648LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x1317 = INT32_MAX;
	int8_t x1318 = INT8_MIN;
	int16_t x1319 = 1956;
	uint64_t x1320 = 814894075144217LLU;
	uint64_t t152 = 42641492029050LLU;

    t152 = ((x1317>>(x1318!=x1319))*x1320);

    if (t152 != 1438148985387685863LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1329 = 53117381796625687LLU;
	int16_t x1330 = INT16_MIN;
	static uint64_t x1331 = 79LLU;
	volatile int32_t x1332 = -1;
	static volatile uint64_t t153 = 4040328092LLU;

    t153 = ((x1329>>(x1330!=x1331))*x1332);

    if (t153 != 18420185382811238773LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1333 = 0LL;
	int32_t x1334 = 172;
	int32_t x1335 = -866;
	uint8_t x1336 = 7U;
	volatile int64_t t154 = 19816603362965648LL;

    t154 = ((x1333>>(x1334!=x1335))*x1336);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1349 = 27;
	int16_t x1350 = INT16_MIN;
	static uint32_t x1351 = 3078U;
	int16_t x1352 = INT16_MIN;
	int32_t t155 = -10723;

    t155 = ((x1349>>(x1350!=x1351))*x1352);

    if (t155 != -425984) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1357 = UINT16_MAX;
	static volatile int16_t x1358 = INT16_MIN;
	int8_t x1359 = -1;
	volatile int64_t x1360 = -148778104215LL;
	int64_t t156 = -123917665229LL;

    t156 = ((x1357>>(x1358!=x1359))*x1360);

    if (t156 != -4875012140812905LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1369 = 206143704984505LLU;
	uint64_t x1370 = 3664043150LLU;
	static uint32_t x1371 = UINT32_MAX;
	volatile int16_t x1372 = INT16_MAX;
	volatile uint64_t t157 = 2277941519358116431LLU;

    t157 = ((x1369>>(x1370!=x1371))*x1372);

    if (t157 != 3377355390613621284LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1378 = -124222694;
	static int32_t x1379 = INT32_MIN;
	uint16_t x1380 = 0U;
	volatile int32_t t158 = 24192444;

    t158 = ((x1377>>(x1378!=x1379))*x1380);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1385 = 5841U;
	uint64_t t159 = 3114552115519030LLU;

    t159 = ((x1385>>(x1386!=x1387))*x1388);

    if (t159 != 3119869418520LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1389 = 4;
	volatile int64_t x1390 = INT64_MIN;
	static int8_t x1391 = 17;

    t160 = ((x1389>>(x1390!=x1391))*x1392);

    if (t160 != 4294967294U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1394 = INT32_MIN;
	int16_t x1395 = INT16_MIN;
	int8_t x1396 = INT8_MAX;
	static volatile int32_t t161 = -47768;

    t161 = ((x1393>>(x1394!=x1395))*x1396);

    if (t161 != 20447) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1397 = INT16_MAX;
	int64_t x1399 = INT64_MAX;
	int16_t x1400 = -4;
	int32_t t162 = -20;

    t162 = ((x1397>>(x1398!=x1399))*x1400);

    if (t162 != -65532) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1401 = 54055311312747LLU;
	volatile uint16_t x1402 = 1877U;
	uint64_t x1403 = 124222049LLU;
	volatile int64_t x1404 = INT64_MAX;
	volatile uint64_t t163 = 22949LLU;

    t163 = ((x1401>>(x1402!=x1403))*x1404);

    if (t163 != 9223345009199119435LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1415 = INT16_MIN;
	static volatile int8_t x1416 = -1;
	int32_t t164 = 1;

    t164 = ((x1413>>(x1414!=x1415))*x1416);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1429 = 807241823LLU;
	static int16_t x1431 = INT16_MIN;
	int64_t x1432 = INT64_MIN;

    t165 = ((x1429>>(x1430!=x1431))*x1432);

    if (t165 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1433 = 11921U;
	uint8_t x1435 = 5U;
	volatile uint16_t x1436 = 11U;
	volatile int32_t t166 = -2197;

    t166 = ((x1433>>(x1434!=x1435))*x1436);

    if (t166 != 65560) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1441 = INT16_MAX;
	uint8_t x1442 = UINT8_MAX;
	int32_t x1443 = INT32_MIN;
	static uint8_t x1444 = 52U;
	volatile int32_t t167 = 3;

    t167 = ((x1441>>(x1442!=x1443))*x1444);

    if (t167 != 851916) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1445 = INT16_MAX;
	volatile uint8_t x1446 = 105U;
	volatile uint16_t x1448 = 156U;
	int32_t t168 = 513947;

    t168 = ((x1445>>(x1446!=x1447))*x1448);

    if (t168 != 2555748) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1461 = UINT32_MAX;
	volatile int16_t x1462 = INT16_MIN;
	static int32_t x1464 = -1;

    t169 = ((x1461>>(x1462!=x1463))*x1464);

    if (t169 != 2147483649U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1465 = 81569U;
	int64_t x1466 = -1LL;
	uint8_t x1467 = 10U;
	int8_t x1468 = -1;
	volatile uint32_t t170 = 0U;

    t170 = ((x1465>>(x1466!=x1467))*x1468);

    if (t170 != 4294926512U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1469 = INT8_MAX;
	volatile uint64_t x1470 = 3323242LLU;
	static volatile int8_t x1472 = 13;
	volatile int32_t t171 = 1071935751;

    t171 = ((x1469>>(x1470!=x1471))*x1472);

    if (t171 != 819) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1473 = 46U;
	static int32_t x1474 = 0;
	int16_t x1475 = INT16_MIN;
	static volatile uint32_t x1476 = UINT32_MAX;

    t172 = ((x1473>>(x1474!=x1475))*x1476);

    if (t172 != 4294967273U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x1477 = INT8_MAX;
	static uint8_t x1478 = 1U;
	volatile int64_t x1479 = INT64_MIN;
	uint64_t x1480 = 24LLU;
	volatile uint64_t t173 = 2804170267643602993LLU;

    t173 = ((x1477>>(x1478!=x1479))*x1480);

    if (t173 != 1512LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1481 = 235U;
	int64_t x1482 = INT64_MIN;
	int32_t t174 = 3003520;

    t174 = ((x1481>>(x1482!=x1483))*x1484);

    if (t174 != -5382) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1489 = INT64_MAX;
	uint16_t x1490 = 232U;
	uint16_t x1491 = UINT16_MAX;
	static int16_t x1492 = -1;
	volatile int64_t t175 = -6230947070LL;

    t175 = ((x1489>>(x1490!=x1491))*x1492);

    if (t175 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1498 = -1;
	int16_t x1499 = INT16_MAX;

    t176 = ((x1497>>(x1498!=x1499))*x1500);

    if (t176 != -196608) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x1501 = 6421LL;
	int64_t x1502 = INT64_MIN;
	volatile int64_t x1503 = 2653LL;
	volatile uint64_t x1504 = 8711LLU;
	volatile uint64_t t177 = 8484825303405312316LLU;

    t177 = ((x1501>>(x1502!=x1503))*x1504);

    if (t177 != 27962310LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1505 = 12083;
	volatile int32_t x1506 = 1920974;
	int8_t x1507 = -1;
	int64_t x1508 = -251757137583359LL;
	volatile int64_t t178 = 0LL;

    t178 = ((x1505>>(x1506!=x1507))*x1508);

    if (t178 != -1520864868141071719LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x1510 = 207U;
	uint64_t x1511 = UINT64_MAX;
	static int16_t x1512 = -1;

    t179 = ((x1509>>(x1510!=x1511))*x1512);

    if (t179 != -6LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1522 = INT8_MIN;
	static int8_t x1523 = 0;
	int16_t x1524 = INT16_MAX;
	volatile int64_t t180 = -38719474LL;

    t180 = ((x1521>>(x1522!=x1523))*x1524);

    if (t180 != 3210772796LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x1534 = 1343114470U;
	uint64_t x1536 = 5LLU;
	static uint64_t t181 = 92406863005LLU;

    t181 = ((x1533>>(x1534!=x1535))*x1536);

    if (t181 != 30LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x1569 = 1;
	volatile uint8_t x1570 = UINT8_MAX;
	int32_t x1572 = -2;

    t182 = ((x1569>>(x1570!=x1571))*x1572);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1581 = INT8_MAX;
	volatile uint64_t x1583 = 335LLU;
	int8_t x1584 = INT8_MAX;

    t183 = ((x1581>>(x1582!=x1583))*x1584);

    if (t183 != 8001) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1585 = 1U;
	int32_t x1586 = INT32_MIN;
	uint8_t x1587 = UINT8_MAX;

    t184 = ((x1585>>(x1586!=x1587))*x1588);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1589 = INT8_MAX;
	uint16_t x1590 = 449U;
	int8_t x1591 = INT8_MIN;
	static volatile int32_t t185 = -3;

    t185 = ((x1589>>(x1590!=x1591))*x1592);

    if (t185 != 252) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1597 = INT16_MAX;
	int16_t x1598 = -8;
	int8_t x1600 = INT8_MIN;
	volatile int32_t t186 = -23;

    t186 = ((x1597>>(x1598!=x1599))*x1600);

    if (t186 != -2097024) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x1605 = 12U;
	static int16_t x1606 = INT16_MIN;
	uint16_t x1607 = 126U;
	volatile int8_t x1608 = 11;
	int32_t t187 = 386840;

    t187 = ((x1605>>(x1606!=x1607))*x1608);

    if (t187 != 66) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x1613 = 266U;
	int8_t x1614 = 13;
	static volatile int16_t x1615 = INT16_MAX;
	int16_t x1616 = INT16_MAX;
	volatile int32_t t188 = -1;

    t188 = ((x1613>>(x1614!=x1615))*x1616);

    if (t188 != 4358011) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1629 = INT8_MAX;
	volatile uint8_t x1630 = UINT8_MAX;
	static volatile int32_t t189 = 1701253;

    t189 = ((x1629>>(x1630!=x1631))*x1632);

    if (t189 != 1953126) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1633 = 16U;
	volatile int32_t x1634 = -12196268;
	uint16_t x1635 = 5U;
	volatile uint8_t x1636 = UINT8_MAX;
	uint32_t t190 = 239U;

    t190 = ((x1633>>(x1634!=x1635))*x1636);

    if (t190 != 2040U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1641 = INT8_MAX;
	volatile int16_t x1642 = INT16_MIN;
	int16_t x1643 = INT16_MAX;
	volatile uint32_t t191 = 399U;

    t191 = ((x1641>>(x1642!=x1643))*x1644);

    if (t191 != 7392042U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1649 = INT16_MAX;
	uint64_t x1650 = UINT64_MAX;
	static int64_t x1651 = INT64_MAX;
	int64_t x1652 = -1LL;
	static int64_t t192 = 252193280090642164LL;

    t192 = ((x1649>>(x1650!=x1651))*x1652);

    if (t192 != -16383LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1673 = 826826U;
	volatile uint16_t x1674 = UINT16_MAX;
	uint64_t x1675 = 4431490LLU;
	int8_t x1676 = -8;
	uint32_t t193 = 8620466U;

    t193 = ((x1673>>(x1674!=x1675))*x1676);

    if (t193 != 4291659992U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1681 = UINT16_MAX;
	int8_t x1682 = INT8_MIN;
	uint32_t x1683 = 114U;
	uint32_t t194 = 4726U;

    t194 = ((x1681>>(x1682!=x1683))*x1684);

    if (t194 != 906173643U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1686 = UINT8_MAX;
	uint8_t x1687 = UINT8_MAX;
	static int16_t x1688 = 7255;
	int32_t t195 = -364019648;

    t195 = ((x1685>>(x1686!=x1687))*x1688);

    if (t195 != 181375) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1689 = 592763LLU;
	int16_t x1690 = -1315;
	static int64_t x1692 = INT64_MAX;

    t196 = ((x1689>>(x1690!=x1691))*x1692);

    if (t196 != 9223372036854479427LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1713 = 14;
	volatile uint32_t x1714 = 4077U;
	int32_t x1715 = INT32_MAX;
	int32_t t197 = -2951;

    t197 = ((x1713>>(x1714!=x1715))*x1716);

    if (t197 != -896) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1717 = 3U;
	uint64_t x1718 = 17304648548786524LLU;
	volatile int16_t x1719 = INT16_MIN;
	int16_t x1720 = -1;

    t198 = ((x1717>>(x1718!=x1719))*x1720);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1721 = INT16_MAX;
	static uint16_t x1722 = 172U;
	int8_t x1723 = INT8_MAX;
	static int16_t x1724 = INT16_MAX;

    t199 = ((x1721>>(x1722!=x1723))*x1724);

    if (t199 != 536821761) { NG(); } else { ; }
	
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

