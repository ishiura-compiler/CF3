
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

uint16_t x11 = UINT16_MAX;
int64_t x12 = -1LL;
int16_t x17 = INT16_MAX;
int16_t x18 = 4;
uint16_t x22 = 80U;
int64_t t4 = 114001LL;
int32_t x31 = -1;
int64_t x45 = -98303702300LL;
uint32_t x57 = 33192710U;
uint32_t x59 = 87536U;
static uint8_t x83 = 31U;
int16_t x86 = INT16_MAX;
int16_t x97 = 6;
int64_t x104 = -58965471926LL;
static volatile int16_t x110 = -1;
volatile int64_t t19 = 9861969220080855LL;
uint32_t x118 = UINT32_MAX;
static uint32_t x120 = 1551U;
static uint8_t x122 = UINT8_MAX;
int16_t x123 = -1;
volatile uint64_t t22 = 10297743LLU;
int16_t x135 = INT16_MIN;
int64_t x140 = -1LL;
static volatile uint32_t x141 = 4U;
uint8_t x142 = 5U;
uint8_t x144 = UINT8_MAX;
static int64_t x151 = 465LL;
volatile int16_t x152 = INT16_MIN;
static int32_t t31 = -14713465;
int16_t x169 = 103;
int64_t x173 = INT64_MAX;
uint8_t x175 = 12U;
volatile uint64_t t34 = 362830146293140LLU;
int32_t x184 = INT32_MIN;
static uint32_t x190 = UINT32_MAX;
int16_t x199 = INT16_MIN;
int16_t x204 = INT16_MIN;
volatile int8_t x210 = 23;
int64_t x211 = 1289LL;
volatile int8_t x222 = -1;
volatile int32_t x231 = 118947655;
static uint16_t x233 = 25U;
int16_t x234 = -1;
int8_t x235 = INT8_MIN;
uint16_t x243 = 376U;
uint8_t x247 = 0U;
volatile int32_t t49 = 15808027;
int32_t x272 = INT32_MAX;
static int16_t x275 = INT16_MIN;
uint16_t x277 = 20U;
int8_t x284 = -1;
static uint64_t t54 = 778LLU;
volatile uint32_t x308 = UINT32_MAX;
uint8_t x310 = UINT8_MAX;
int8_t x318 = INT8_MAX;
int64_t x319 = -1LL;
int16_t x320 = 1;
volatile int32_t t60 = 866;
static uint64_t t61 = 37929344LLU;
static volatile uint16_t x339 = 26U;
static volatile int32_t x354 = INT32_MAX;
static uint64_t x356 = 415LLU;
int8_t x372 = -1;
static uint8_t x374 = 6U;
static volatile int64_t x375 = -7467264525288067LL;
volatile int64_t t68 = -3889791LL;
uint8_t x384 = UINT8_MAX;
int64_t x387 = 523362595609LL;
static volatile uint8_t x394 = 2U;
static volatile uint64_t t73 = 22152360103299196LLU;
uint64_t x397 = 51812LLU;
static volatile int32_t x399 = -1614510;
uint16_t x400 = UINT16_MAX;
uint64_t t74 = 1045414LLU;
static int64_t x405 = -1137LL;
int64_t x407 = INT64_MIN;
static uint32_t t77 = 7805U;
uint64_t x418 = 53LLU;
uint16_t x426 = 1U;
int32_t t79 = 923;
int32_t x431 = -70;
int8_t x435 = 0;
uint16_t x437 = 909U;
uint8_t x441 = 1U;
static volatile uint64_t t83 = 12762969533769969LLU;
int32_t x447 = 5835;
int8_t x449 = -1;
int64_t t85 = -3LL;
static volatile int64_t x460 = INT64_MAX;
int8_t x467 = INT8_MIN;
int64_t x468 = INT64_MAX;
int64_t t88 = 200234731LL;
uint32_t x470 = UINT32_MAX;
volatile int32_t x475 = -1;
int8_t x488 = INT8_MIN;
volatile int8_t x499 = INT8_MIN;
int8_t x500 = INT8_MAX;
volatile int64_t t95 = -1229004LL;
volatile int8_t x505 = 0;
uint16_t x512 = 627U;
volatile int8_t x522 = -1;
volatile uint32_t t99 = 253474919U;
uint64_t t100 = 121852951661119976LLU;
volatile int64_t x532 = -1LL;
int64_t x541 = -1LL;
uint64_t x553 = 59418683501LLU;
int16_t x554 = -1;
int32_t x557 = INT32_MIN;
int64_t x558 = -1LL;
volatile int32_t t109 = -357844307;
int8_t x574 = INT8_MAX;
uint64_t x576 = UINT64_MAX;
static int64_t x579 = INT64_MIN;
static int32_t x580 = 144668;
int64_t x581 = 4854LL;
static uint64_t x582 = 26LLU;
volatile int16_t x591 = INT16_MIN;
uint8_t x594 = UINT8_MAX;
uint64_t x611 = UINT64_MAX;
static int64_t x612 = INT64_MIN;
uint32_t x616 = UINT32_MAX;
uint16_t x623 = UINT16_MAX;
int16_t x642 = -1475;
uint32_t t124 = 260070U;
uint64_t x651 = 101LLU;
uint8_t x654 = 0U;
int64_t x656 = INT64_MIN;
int32_t t128 = 0;
volatile int64_t x667 = -1LL;
int8_t x672 = 1;
int8_t x690 = -1;
int32_t x691 = -1;
uint8_t x695 = 3U;
static int16_t x696 = -4;
static volatile uint32_t t134 = 125820U;
int8_t x708 = -7;
static int8_t x712 = 21;
int32_t x723 = -1;
int8_t x747 = 1;
volatile int64_t t143 = -98211LL;
int8_t x764 = 5;
uint8_t x767 = 2U;
int16_t x768 = INT16_MAX;
int32_t x770 = -1;
volatile int32_t t146 = 2042;
int8_t x773 = INT8_MIN;
uint8_t x775 = 21U;
static int16_t x781 = INT16_MIN;
uint32_t t150 = 53U;
volatile int32_t t151 = -1;
volatile int32_t x798 = INT32_MIN;
volatile uint64_t t154 = 3494185LLU;
int32_t t159 = -564;
uint32_t x850 = UINT32_MAX;
volatile int64_t t162 = 41834917159455283LL;
volatile int32_t t163 = 49488;
int32_t x869 = INT32_MIN;
static int64_t t164 = 1876838790416801720LL;
uint64_t x875 = 12149474LLU;
static volatile int64_t t168 = 28027613LL;
int16_t x895 = INT16_MAX;
volatile uint16_t x896 = 993U;
int32_t t169 = -28533;
volatile int32_t t170 = -13047427;
int16_t x903 = INT16_MIN;
static volatile uint32_t x913 = UINT32_MAX;
volatile int64_t t173 = -1911585688997724963LL;
volatile int32_t x918 = -1;
static int8_t x922 = -1;
volatile int32_t t176 = -1824902;
uint16_t x940 = 29U;
int16_t x960 = INT16_MIN;
int8_t x961 = 6;
int32_t x968 = -1530;
int8_t x970 = -1;
uint32_t x971 = 2984735U;
volatile uint32_t t183 = 1541492U;
int8_t x973 = 4;
static volatile int16_t x974 = 1;
volatile int64_t x1009 = -1LL;
volatile int64_t t190 = 7802384097703LL;
int64_t t193 = 3LL;
volatile uint32_t t194 = 99332U;
int32_t x1050 = -13243115;
int64_t t195 = -7903LL;
int16_t x1060 = INT16_MIN;
volatile int8_t x1064 = INT8_MAX;
volatile uint8_t x1075 = 26U;
uint16_t x1076 = 13605U;


void f0(void) {
    	int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 458042205LLU;
	static int64_t x8 = -1LL;
	static volatile uint64_t t0 = 82027488248181LLU;

    t0 = (((x5*x6)+x7)%x8);

    if (t0 != 458042333LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = 35U;
	static uint32_t x10 = UINT32_MAX;
	volatile int64_t t1 = 520009983134262133LL;

    t1 = (((x9*x10)+x11)%x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	int32_t x14 = -1;
	int8_t x15 = -1;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t2 = 153LL;

    t2 = (((x13*x14)+x15)%x16);

    if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x19 = UINT64_MAX;
	int32_t x20 = 15277701;
	volatile uint64_t t3 = 611406493207213LLU;

    t3 = (((x17*x18)+x19)%x20);

    if (t3 != 131067LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = -1LL;
	volatile int32_t x23 = 0;
	int32_t x24 = INT32_MIN;

    t4 = (((x21*x22)+x23)%x24);

    if (t4 != -80LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = 32106LLU;
	int8_t x26 = 41;
	int8_t x27 = INT8_MIN;
	int64_t x28 = -546406303609326LL;
	volatile uint64_t t5 = 786446LLU;

    t5 = (((x25*x26)+x27)%x28);

    if (t5 != 1316218LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x29 = 373U;
	uint64_t x30 = UINT64_MAX;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t6 = 474LLU;

    t6 = (((x29*x30)+x31)%x32);

    if (t6 != 2147483277LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x46 = -1;
	int64_t x47 = 273146964LL;
	static int8_t x48 = -1;
	volatile int64_t t7 = -4075LL;

    t7 = (((x45*x46)+x47)%x48);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x53 = -1;
	static int64_t x54 = 9202LL;
	volatile uint8_t x55 = 27U;
	uint64_t x56 = 746218588226621698LLU;
	volatile uint64_t t8 = 13584LLU;

    t8 = (((x53*x54)+x55)%x56);

    if (t8 != 537497956270621689LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x58 = 7U;
	int32_t x60 = INT32_MIN;
	static volatile uint32_t t9 = 29U;

    t9 = (((x57*x58)+x59)%x60);

    if (t9 != 232436506U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x65 = UINT32_MAX;
	uint8_t x66 = 0U;
	static uint16_t x67 = 0U;
	static int16_t x68 = INT16_MIN;
	static uint32_t t10 = 28821085U;

    t10 = (((x65*x66)+x67)%x68);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x69 = 16377718893LLU;
	static int32_t x70 = -1;
	int32_t x71 = 118;
	uint8_t x72 = 1U;
	volatile uint64_t t11 = 63LLU;

    t11 = (((x69*x70)+x71)%x72);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	uint64_t x78 = 942421486232409075LLU;
	int32_t x79 = -1;
	static int8_t x80 = -6;
	uint64_t t12 = 1970LLU;

    t12 = (((x77*x78)+x79)%x80);

    if (t12 != 17504322587477142540LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x81 = -126307LL;
	uint16_t x82 = 3U;
	int16_t x84 = INT16_MAX;
	volatile int64_t t13 = -32273386746LL;

    t13 = (((x81*x82)+x83)%x84);

    if (t13 != -18453LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x85 = -1;
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = -7;
	int32_t t14 = -999630;

    t14 = (((x85*x86)+x87)%x88);

    if (t14 != -4) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x89 = -53;
	static int32_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	int64_t t15 = -192148662908547295LL;

    t15 = (((x89*x90)+x91)%x92);

    if (t15 != -75LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x93 = UINT16_MAX;
	static volatile int8_t x94 = INT8_MAX;
	volatile uint8_t x95 = UINT8_MAX;
	int32_t x96 = -1;
	int32_t t16 = 13;

    t16 = (((x93*x94)+x95)%x96);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x98 = 17148U;
	static int32_t x99 = -1366319;
	uint16_t x100 = 1367U;
	uint32_t t17 = 6911U;

    t17 = (((x97*x98)+x99)%x100);

    if (t17 != 609U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x101 = 4034U;
	volatile int16_t x102 = INT16_MAX;
	static int8_t x103 = -1;
	int64_t t18 = -21208259LL;

    t18 = (((x101*x102)+x103)%x104);

    if (t18 != 132182077LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x109 = -2327;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = -1;

    t19 = (((x109*x110)+x111)%x112);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x117 = INT8_MIN;
	int32_t x119 = 446;
	uint32_t t20 = 42536611U;

    t20 = (((x117*x118)+x119)%x120);

    if (t20 != 574U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x121 = 15;
	static int64_t x124 = -1LL;
	volatile int64_t t21 = 109LL;

    t21 = (((x121*x122)+x123)%x124);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x125 = 3U;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = UINT32_MAX;
	static int64_t x128 = INT64_MAX;

    t22 = (((x125*x126)+x127)%x128);

    if (t22 != 4294967292LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x129 = -1;
	static volatile uint16_t x130 = 0U;
	int64_t x131 = INT64_MIN;
	int16_t x132 = -7217;
	int64_t t23 = -28409666LL;

    t23 = (((x129*x130)+x131)%x132);

    if (t23 != -7106LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x133 = 104004752203615LLU;
	int32_t x134 = INT32_MAX;
	static volatile int8_t x136 = INT8_MIN;
	volatile uint64_t t24 = 29299LLU;

    t24 = (((x133*x134)+x135)%x136);

    if (t24 != 13774067148885336225LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x137 = 27291U;
	volatile uint32_t x138 = 230U;
	uint32_t x139 = 234637360U;
	volatile int64_t t25 = -232009738094LL;

    t25 = (((x137*x138)+x139)%x140);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x143 = INT32_MAX;
	uint32_t t26 = 10028343U;

    t26 = (((x141*x142)+x143)%x144);

    if (t26 != 147U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x145 = -1LL;
	volatile uint16_t x146 = 5837U;
	volatile uint32_t x147 = 37649U;
	int64_t x148 = INT64_MIN;
	volatile int64_t t27 = 57462115838117770LL;

    t27 = (((x145*x146)+x147)%x148);

    if (t27 != 31812LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x149 = UINT8_MAX;
	static int32_t x150 = 2;
	volatile int64_t t28 = -1LL;

    t28 = (((x149*x150)+x151)%x152);

    if (t28 != 975LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x153 = -5;
	static volatile int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;
	int8_t x156 = INT8_MIN;
	int32_t t29 = -47029;

    t29 = (((x153*x154)+x155)%x156);

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x161 = 1897158U;
	static int16_t x162 = INT16_MIN;
	static int8_t x163 = -20;
	volatile int64_t x164 = INT64_MIN;
	int64_t t30 = -64LL;

    t30 = (((x161*x162)+x163)%x164);

    if (t30 != 2258436076LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x165 = -1;
	int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	static int8_t x168 = -1;

    t31 = (((x165*x166)+x167)%x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x170 = 8U;
	uint64_t x171 = 2549LLU;
	int32_t x172 = INT32_MIN;
	uint64_t t32 = 76229050078351851LLU;

    t32 = (((x169*x170)+x171)%x172);

    if (t32 != 3373LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x174 = -1;
	volatile uint64_t x176 = 41824404834400043LLU;
	volatile uint64_t t33 = 7900526888401978827LLU;

    t33 = (((x173*x174)+x175)%x176);

    if (t33 != 22002973286766361LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x177 = 204886508LLU;
	static uint8_t x178 = 104U;
	int32_t x179 = INT32_MIN;
	volatile int64_t x180 = -2535853181LL;

    t34 = (((x177*x178)+x179)%x180);

    if (t34 != 19160713184LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x181 = -1;
	int32_t x182 = -1;
	static uint64_t x183 = 1727938583798LLU;
	uint64_t t35 = 4465254844593318LLU;

    t35 = (((x181*x182)+x183)%x184);

    if (t35 != 1727938583799LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x189 = -5875;
	uint32_t x191 = 236U;
	uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t36 = 933283607U;

    t36 = (((x189*x190)+x191)%x192);

    if (t36 != 6111U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x197 = -1;
	int8_t x198 = INT8_MAX;
	volatile int16_t x200 = INT16_MAX;
	int32_t t37 = -3694778;

    t37 = (((x197*x198)+x199)%x200);

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x201 = UINT16_MAX;
	static volatile int8_t x202 = -1;
	int64_t x203 = 418674126958818880LL;
	static int64_t t38 = -1305658196558729LL;

    t38 = (((x201*x202)+x203)%x204);

    if (t38 != 30273LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x205 = 23461307045LLU;
	uint16_t x206 = 8U;
	int64_t x207 = -25558040782428788LL;
	uint32_t x208 = 44155U;
	uint64_t t39 = 321527772231698LLU;

    t39 = (((x205*x206)+x207)%x208);

    if (t39 != 23573LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x209 = INT16_MIN;
	volatile int32_t x212 = -1;
	int64_t t40 = -707508082426835717LL;

    t40 = (((x209*x210)+x211)%x212);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x221 = -1;
	static int32_t x223 = INT32_MIN;
	int32_t x224 = -91432;
	volatile int32_t t41 = 10149659;

    t41 = (((x221*x222)+x223)%x224);

    if (t41 != -20263) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x225 = 0U;
	static int64_t x226 = INT64_MIN;
	static uint32_t x227 = 414U;
	static int32_t x228 = INT32_MAX;
	volatile int64_t t42 = 14729423535865LL;

    t42 = (((x225*x226)+x227)%x228);

    if (t42 != 414LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x229 = 100U;
	uint8_t x230 = UINT8_MAX;
	uint8_t x232 = 1U;
	volatile int32_t t43 = 171520597;

    t43 = (((x229*x230)+x231)%x232);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x236 = UINT16_MAX;
	int32_t t44 = 18379557;

    t44 = (((x233*x234)+x235)%x236);

    if (t44 != -153) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t45 = -22729181406LL;

    t45 = (((x241*x242)+x243)%x244);

    if (t45 != -32264LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x245 = -1;
	static int16_t x246 = INT16_MIN;
	uint32_t x248 = UINT32_MAX;
	uint32_t t46 = 11820735U;

    t46 = (((x245*x246)+x247)%x248);

    if (t46 != 32768U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x257 = UINT32_MAX;
	uint64_t x258 = 210005433698571622LLU;
	volatile int8_t x259 = 1;
	uint16_t x260 = 10188U;
	volatile uint64_t t47 = 26345831817616LLU;

    t47 = (((x257*x258)+x259)%x260);

    if (t47 != 2939LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x261 = -20;
	volatile uint64_t x262 = 45LLU;
	int16_t x263 = 296;
	volatile uint16_t x264 = 16U;
	uint64_t t48 = 10393836LLU;

    t48 = (((x261*x262)+x263)%x264);

    if (t48 != 4LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = INT32_MIN;
	int16_t x268 = -1;

    t49 = (((x265*x266)+x267)%x268);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x269 = INT16_MIN;
	static uint32_t x270 = UINT32_MAX;
	int64_t x271 = -1LL;
	int64_t t50 = -100LL;

    t50 = (((x269*x270)+x271)%x272);

    if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x273 = -1;
	int8_t x274 = -1;
	volatile uint16_t x276 = UINT16_MAX;
	int32_t t51 = -13081;

    t51 = (((x273*x274)+x275)%x276);

    if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x278 = 1038LL;
	int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	int64_t t52 = 492389566024829LL;

    t52 = (((x277*x278)+x279)%x280);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x281 = -919;
	volatile uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	volatile int32_t t53 = -78398;

    t53 = (((x281*x282)+x283)%x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x285 = 9438;
	int64_t x286 = -1LL;
	int32_t x287 = 153;
	volatile uint64_t x288 = 254332563LLU;

    t54 = (((x285*x286)+x287)%x288);

    if (t54 != 209807572LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	static int64_t t55 = 77261070LL;

    t55 = (((x293*x294)+x295)%x296);

    if (t55 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x305 = 6788609490642904401LLU;
	int8_t x306 = INT8_MIN;
	static volatile int16_t x307 = INT16_MIN;
	volatile uint64_t t56 = 48582LLU;

    t56 = (((x305*x306)+x307)%x308);

    if (t56 != 2519640292LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x311 = -1;
	static uint32_t x312 = 814U;
	uint32_t t57 = 105U;

    t57 = (((x309*x310)+x311)%x312);

    if (t57 != 357U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x317 = 30380;
	int64_t t58 = -2610796176340560772LL;

    t58 = (((x317*x318)+x319)%x320);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x321 = INT32_MIN;
	int32_t x322 = 1;
	int64_t x323 = 1LL;
	int32_t x324 = INT32_MIN;
	int64_t t59 = 6953568291825LL;

    t59 = (((x321*x322)+x323)%x324);

    if (t59 != -2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x329 = INT16_MIN;
	int32_t x330 = -10;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;

    t60 = (((x329*x330)+x331)%x332);

    if (t60 != -32763) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x333 = -5;
	volatile uint64_t x334 = UINT64_MAX;
	static uint16_t x335 = UINT16_MAX;
	static int16_t x336 = INT16_MIN;

    t61 = (((x333*x334)+x335)%x336);

    if (t61 != 65540LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x337 = INT32_MIN;
	volatile uint32_t x338 = 3642U;
	int16_t x340 = INT16_MAX;
	volatile uint32_t t62 = 21U;

    t62 = (((x337*x338)+x339)%x340);

    if (t62 != 26U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MIN;
	volatile int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	int32_t t63 = -103577301;

    t63 = (((x345*x346)+x347)%x348);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x349 = -5;
	uint64_t x350 = 14490226264LLU;
	uint16_t x351 = 513U;
	uint8_t x352 = 2U;
	uint64_t t64 = 78LLU;

    t64 = (((x349*x350)+x351)%x352);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x353 = -1;
	static int32_t x355 = INT32_MAX;
	volatile uint64_t t65 = 7288038102799425LLU;

    t65 = (((x353*x354)+x355)%x356);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x357 = 3504163839850LLU;
	volatile uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 22U;
	int16_t x360 = INT16_MIN;
	uint64_t t66 = 0LLU;

    t66 = (((x357*x358)+x359)%x360);

    if (t66 != 893561779161772LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x369 = -1LL;
	static int32_t x370 = -1;
	static int64_t x371 = -1LL;
	static int64_t t67 = 8611784762LL;

    t67 = (((x369*x370)+x371)%x372);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x373 = 21U;
	volatile int16_t x376 = -1;

    t68 = (((x373*x374)+x375)%x376);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x377 = INT8_MAX;
	int16_t x378 = -1;
	int8_t x379 = -5;
	int32_t x380 = INT32_MIN;
	volatile int32_t t69 = 47684134;

    t69 = (((x377*x378)+x379)%x380);

    if (t69 != -132) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = 246;
	uint16_t x383 = 897U;
	int32_t t70 = -298592059;

    t70 = (((x381*x382)+x383)%x384);

    if (t70 != -246) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x385 = 0;
	uint32_t x386 = 956U;
	int64_t x388 = INT64_MIN;
	volatile int64_t t71 = 0LL;

    t71 = (((x385*x386)+x387)%x388);

    if (t71 != 523362595609LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x389 = INT16_MIN;
	uint64_t x390 = 6453563313151354367LLU;
	int8_t x391 = -10;
	uint16_t x392 = 409U;
	uint64_t t72 = 98636460540260663LLU;

    t72 = (((x389*x390)+x391)%x392);

    if (t72 != 384LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	uint64_t x395 = 170047LLU;
	volatile int8_t x396 = INT8_MIN;

    t73 = (((x393*x394)+x395)%x396);

    if (t73 != 301117LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x398 = 1;

    t74 = (((x397*x398)+x399)%x400);

    if (t74 != 10143LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x406 = -1;
	volatile uint8_t x408 = 3U;
	static int64_t t75 = -1LL;

    t75 = (((x405*x406)+x407)%x408);

    if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x409 = 1;
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = -19LL;
	static int32_t x412 = 40730;
	int64_t t76 = 201683426093682124LL;

    t76 = (((x409*x410)+x411)%x412);

    if (t76 != 24786LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x413 = 0U;
	static int32_t x414 = INT32_MIN;
	static int8_t x415 = INT8_MIN;
	uint8_t x416 = 22U;

    t77 = (((x413*x414)+x415)%x416);

    if (t77 != 8U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x417 = -79744634321LL;
	int64_t x419 = INT64_MIN;
	static int32_t x420 = 2;
	static volatile uint64_t t78 = 1881671851LLU;

    t78 = (((x417*x418)+x419)%x420);

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x425 = INT8_MAX;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = INT16_MIN;

    t79 = (((x425*x426)+x427)%x428);

    if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x429 = 609001LLU;
	static int16_t x430 = INT16_MIN;
	uint32_t x432 = 3U;
	uint64_t t80 = 13926315474LLU;

    t80 = (((x429*x430)+x431)%x432);

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x433 = -1LL;
	uint16_t x434 = 5610U;
	uint8_t x436 = 19U;
	volatile int64_t t81 = -23LL;

    t81 = (((x433*x434)+x435)%x436);

    if (t81 != -5LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x438 = -890;
	uint16_t x439 = 8U;
	uint16_t x440 = 16171U;
	static int32_t t82 = 236;

    t82 = (((x437*x438)+x439)%x440);

    if (t82 != -452) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	uint64_t x444 = 1480985314534LLU;

    t83 = (((x441*x442)+x443)%x444);

    if (t83 != 1228806107998LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x445 = 4U;
	uint32_t x446 = 11U;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t84 = 4797U;

    t84 = (((x445*x446)+x447)%x448);

    if (t84 != 5879U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x450 = INT16_MIN;
	static int64_t x451 = -4139108LL;
	int8_t x452 = -4;

    t85 = (((x449*x450)+x451)%x452);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x453 = -12005LL;
	int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	int16_t x456 = INT16_MAX;
	static int64_t t86 = 1019LL;

    t86 = (((x453*x454)+x455)%x456);

    if (t86 != 12260LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x457 = 72U;
	int8_t x458 = -5;
	static int8_t x459 = INT8_MIN;
	volatile int64_t t87 = -3205653LL;

    t87 = (((x457*x458)+x459)%x460);

    if (t87 != -488LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x465 = 9;
	int8_t x466 = -1;

    t88 = (((x465*x466)+x467)%x468);

    if (t88 != -137LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x469 = INT8_MIN;
	uint64_t x471 = 712090795531LLU;
	int32_t x472 = -5345960;
	uint64_t t89 = 44802567627LLU;

    t89 = (((x469*x470)+x471)%x472);

    if (t89 != 712090795659LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x473 = 8U;
	int8_t x474 = 14;
	volatile uint64_t x476 = 238130904278LLU;
	uint64_t t90 = 738507469683790LLU;

    t90 = (((x473*x474)+x475)%x476);

    if (t90 != 111LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x477 = -1LL;
	int8_t x478 = 4;
	volatile int64_t x479 = 674441LL;
	uint16_t x480 = 868U;
	int64_t t91 = 2482718832282327229LL;

    t91 = (((x477*x478)+x479)%x480);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x481 = 34U;
	int64_t x482 = -216541744339LL;
	uint8_t x483 = 1U;
	int64_t x484 = INT64_MAX;
	int64_t t92 = 5955190634343LL;

    t92 = (((x481*x482)+x483)%x484);

    if (t92 != -7362419307525LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x485 = UINT8_MAX;
	uint8_t x486 = 9U;
	uint32_t x487 = 37562U;
	uint32_t t93 = 22186964U;

    t93 = (((x485*x486)+x487)%x488);

    if (t93 != 39857U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x489 = -1;
	int8_t x490 = INT8_MAX;
	int16_t x491 = 108;
	static uint32_t x492 = 9U;
	volatile uint32_t t94 = 6U;

    t94 = (((x489*x490)+x491)%x492);

    if (t94 != 3U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x497 = -1LL;
	volatile uint8_t x498 = 1U;

    t95 = (((x497*x498)+x499)%x500);

    if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x506 = UINT64_MAX;
	int64_t x507 = 23LL;
	uint16_t x508 = UINT16_MAX;
	uint64_t t96 = 13514642339490LLU;

    t96 = (((x505*x506)+x507)%x508);

    if (t96 != 23LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x509 = 8881LLU;
	volatile int64_t x510 = -497596757LL;
	int64_t x511 = 7993326485LL;
	uint64_t t97 = 4LLU;

    t97 = (((x509*x510)+x511)%x512);

    if (t97 != 586LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x517 = 1U;
	int8_t x518 = 5;
	uint32_t x519 = 181707210U;
	uint32_t x520 = 11U;
	volatile uint32_t t98 = 46281U;

    t98 = (((x517*x518)+x519)%x520);

    if (t98 != 8U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x521 = INT16_MAX;
	int32_t x523 = INT32_MAX;
	static uint32_t x524 = 110151U;

    t99 = (((x521*x522)+x523)%x524);

    if (t99 != 57135U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x525 = INT64_MIN;
	uint64_t x526 = 6774852910850153683LLU;
	int16_t x527 = -6637;
	int32_t x528 = 493150;

    t100 = (((x525*x526)+x527)%x528);

    if (t100 != 487571LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x529 = INT8_MIN;
	static uint16_t x530 = 22945U;
	uint16_t x531 = 28984U;
	int64_t t101 = -182084290186LL;

    t101 = (((x529*x530)+x531)%x532);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x533 = INT32_MIN;
	static uint8_t x534 = 0U;
	uint8_t x535 = 14U;
	static int32_t x536 = INT32_MAX;
	volatile int32_t t102 = 409;

    t102 = (((x533*x534)+x535)%x536);

    if (t102 != 14) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x537 = 118U;
	int32_t x538 = 70;
	uint8_t x539 = 1U;
	static int64_t x540 = 95466LL;
	volatile int64_t t103 = 966841812LL;

    t103 = (((x537*x538)+x539)%x540);

    if (t103 != 8261LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x542 = 0;
	uint16_t x543 = UINT16_MAX;
	uint32_t x544 = 11691U;
	static volatile int64_t t104 = 323LL;

    t104 = (((x541*x542)+x543)%x544);

    if (t104 != 7080LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x545 = UINT64_MAX;
	static int32_t x546 = 19570047;
	int16_t x547 = INT16_MAX;
	volatile uint8_t x548 = 117U;
	volatile uint64_t t105 = 22772417LLU;

    t105 = (((x545*x546)+x547)%x548);

    if (t105 != 98LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x549 = UINT64_MAX;
	int64_t x550 = 16LL;
	volatile uint32_t x551 = 3905663U;
	uint8_t x552 = UINT8_MAX;
	uint64_t t106 = 164694LLU;

    t106 = (((x549*x550)+x551)%x552);

    if (t106 != 67LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x555 = 0U;
	int8_t x556 = INT8_MIN;
	static volatile uint64_t t107 = 5LLU;

    t107 = (((x553*x554)+x555)%x556);

    if (t107 != 18446744014290868115LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x559 = UINT32_MAX;
	int32_t x560 = INT32_MIN;
	int64_t t108 = -141989989LL;

    t108 = (((x557*x558)+x559)%x560);

    if (t108 != 2147483647LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x561 = INT8_MIN;
	static uint16_t x562 = 5930U;
	int32_t x563 = -1;
	static int8_t x564 = INT8_MIN;

    t109 = (((x561*x562)+x563)%x564);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x565 = 2020678115473LLU;
	int32_t x566 = -1;
	int32_t x567 = 1;
	volatile int8_t x568 = -59;
	volatile uint64_t t110 = 1LLU;

    t110 = (((x565*x566)+x567)%x568);

    if (t110 != 18446742053031436144LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x573 = 47085U;
	int8_t x575 = INT8_MAX;
	static volatile uint64_t t111 = 2294107231289LLU;

    t111 = (((x573*x574)+x575)%x576);

    if (t111 != 5979922LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x577 = 2176;
	volatile int16_t x578 = 202;
	int64_t t112 = 53483174911LL;

    t112 = (((x577*x578)+x579)%x580);

    if (t112 != -56552LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x583 = 16461946382411512LLU;
	int32_t x584 = INT32_MIN;
	volatile uint64_t t113 = 359678153116LLU;

    t113 = (((x581*x582)+x583)%x584);

    if (t113 != 16461946382537716LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x589 = -1;
	int8_t x590 = INT8_MAX;
	volatile int16_t x592 = -429;
	int32_t t114 = 3417;

    t114 = (((x589*x590)+x591)%x592);

    if (t114 != -291) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x593 = INT16_MAX;
	int32_t x595 = -9;
	uint64_t x596 = UINT64_MAX;
	uint64_t t115 = 249973144831LLU;

    t115 = (((x593*x594)+x595)%x596);

    if (t115 != 8355576LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x597 = 391LL;
	volatile int8_t x598 = -1;
	int16_t x599 = -5415;
	volatile int32_t x600 = INT32_MIN;
	volatile int64_t t116 = -1912976710109LL;

    t116 = (((x597*x598)+x599)%x600);

    if (t116 != -5806LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x609 = INT16_MIN;
	static volatile int16_t x610 = -10;
	uint64_t t117 = 45LLU;

    t117 = (((x609*x610)+x611)%x612);

    if (t117 != 327679LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x613 = 14062647571074992LLU;
	int16_t x614 = INT16_MIN;
	static int32_t x615 = INT32_MAX;
	uint64_t t118 = 172504LLU;

    t118 = (((x613*x614)+x615)%x616);

    if (t118 != 3711196021LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = -357LL;
	volatile uint8_t x619 = 28U;
	int8_t x620 = INT8_MAX;
	volatile int64_t t119 = 6LL;

    t119 = (((x617*x618)+x619)%x620);

    if (t119 != 4LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x621 = UINT16_MAX;
	volatile int8_t x622 = INT8_MIN;
	static int8_t x624 = INT8_MIN;
	static volatile int32_t t120 = -123;

    t120 = (((x621*x622)+x623)%x624);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x629 = 1673;
	uint8_t x630 = UINT8_MAX;
	volatile uint32_t x631 = UINT32_MAX;
	int64_t x632 = INT64_MAX;
	volatile int64_t t121 = -707728462243LL;

    t121 = (((x629*x630)+x631)%x632);

    if (t121 != 426614LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x633 = -1;
	static int8_t x634 = INT8_MIN;
	volatile int16_t x635 = -1;
	volatile int8_t x636 = INT8_MIN;
	volatile int32_t t122 = -215;

    t122 = (((x633*x634)+x635)%x636);

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x637 = 0;
	uint32_t x638 = 7267U;
	uint64_t x639 = 2452760866009238152LLU;
	uint64_t x640 = UINT64_MAX;
	uint64_t t123 = 8001360LLU;

    t123 = (((x637*x638)+x639)%x640);

    if (t123 != 2452760866009238152LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x641 = 106U;
	int8_t x643 = INT8_MIN;
	uint32_t x644 = 53373U;

    t124 = (((x641*x642)+x643)%x644);

    if (t124 != 45627U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x645 = -1;
	int32_t x646 = -1;
	volatile int16_t x647 = INT16_MIN;
	int32_t x648 = -64433;
	static volatile int32_t t125 = 25175;

    t125 = (((x645*x646)+x647)%x648);

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x649 = 980230LL;
	static int16_t x650 = INT16_MAX;
	int16_t x652 = -1;
	static uint64_t t126 = 0LLU;

    t126 = (((x649*x650)+x651)%x652);

    if (t126 != 32119196511LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x653 = INT64_MIN;
	volatile int64_t x655 = 1334LL;
	volatile int64_t t127 = -206449196856462LL;

    t127 = (((x653*x654)+x655)%x656);

    if (t127 != 1334LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x661 = -30;
	int16_t x662 = -1;
	int32_t x663 = 675;
	volatile int32_t x664 = -43624003;

    t128 = (((x661*x662)+x663)%x664);

    if (t128 != 705) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x665 = 211125055010963311LLU;
	uint16_t x666 = 1U;
	int32_t x668 = -1;
	uint64_t t129 = 47776LLU;

    t129 = (((x665*x666)+x667)%x668);

    if (t129 != 211125055010963310LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x669 = 1;
	int16_t x670 = -1;
	uint32_t x671 = 2U;
	volatile uint32_t t130 = 10113U;

    t130 = (((x669*x670)+x671)%x672);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x673 = UINT16_MAX;
	int64_t x674 = -4LL;
	static int32_t x675 = 67;
	static uint64_t x676 = UINT64_MAX;
	uint64_t t131 = 3104137LLU;

    t131 = (((x673*x674)+x675)%x676);

    if (t131 != 18446744073709289543LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x689 = 1312417;
	int8_t x692 = INT8_MAX;
	volatile int32_t t132 = -3740798;

    t132 = (((x689*x690)+x691)%x692);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x693 = 24045021589LLU;
	volatile int64_t x694 = -1LL;
	static volatile uint64_t t133 = 3113233LLU;

    t133 = (((x693*x694)+x695)%x696);

    if (t133 != 18446744049664530030LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x697 = INT32_MAX;
	uint32_t x698 = 840604U;
	int8_t x699 = INT8_MIN;
	uint16_t x700 = UINT16_MAX;

    t134 = (((x697*x698)+x699)%x700);

    if (t134 != 11224U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x701 = 1467;
	int64_t x702 = -809005623198260LL;
	int32_t x703 = -1;
	uint16_t x704 = 3U;
	int64_t t135 = 3763LL;

    t135 = (((x701*x702)+x703)%x704);

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x705 = 7U;
	static volatile int16_t x706 = -3;
	int16_t x707 = INT16_MAX;
	uint32_t t136 = 251440U;

    t136 = (((x705*x706)+x707)%x708);

    if (t136 != 32746U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x709 = 2813U;
	int32_t x710 = 12816;
	int32_t x711 = -116;
	volatile uint32_t t137 = 6095441U;

    t137 = (((x709*x710)+x711)%x712);

    if (t137 != 4U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x717 = 0U;
	int64_t x718 = 46534325381LL;
	int16_t x719 = 68;
	uint32_t x720 = 169U;
	volatile int64_t t138 = 2078554001663203LL;

    t138 = (((x717*x718)+x719)%x720);

    if (t138 != 68LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x721 = 2U;
	int8_t x722 = -1;
	int16_t x724 = INT16_MIN;
	int32_t t139 = -7;

    t139 = (((x721*x722)+x723)%x724);

    if (t139 != -3) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x725 = 2801U;
	static uint16_t x726 = UINT16_MAX;
	int64_t x727 = INT64_MIN;
	int16_t x728 = INT16_MIN;
	static int64_t t140 = 7999758441LL;

    t140 = (((x725*x726)+x727)%x728);

    if (t140 != -2801LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x733 = 1389LLU;
	static int8_t x734 = 1;
	static volatile int64_t x735 = -1LL;
	int32_t x736 = -1;
	uint64_t t141 = 95309LLU;

    t141 = (((x733*x734)+x735)%x736);

    if (t141 != 1388LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x737 = 5U;
	static int32_t x738 = -1;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = UINT32_MAX;
	static volatile uint32_t t142 = 0U;

    t142 = (((x737*x738)+x739)%x740);

    if (t142 != 4294967163U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	int64_t x748 = INT64_MAX;

    t143 = (((x745*x746)+x747)%x748);

    if (t143 != 4194305LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x761 = 1;
	int16_t x762 = 572;
	uint32_t x763 = UINT32_MAX;
	static uint32_t t144 = 90827U;

    t144 = (((x761*x762)+x763)%x764);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x765 = -14;
	uint16_t x766 = 51U;
	static int32_t t145 = -230408387;

    t145 = (((x765*x766)+x767)%x768);

    if (t145 != -712) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x769 = 8;
	uint8_t x771 = UINT8_MAX;
	int16_t x772 = INT16_MIN;

    t146 = (((x769*x770)+x771)%x772);

    if (t146 != 247) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x774 = UINT16_MAX;
	int32_t x776 = 10965;
	static int32_t t147 = 163312;

    t147 = (((x773*x774)+x775)%x776);

    if (t147 != -234) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x777 = 968126LLU;
	volatile int16_t x778 = -1;
	volatile uint8_t x779 = 3U;
	int8_t x780 = INT8_MIN;
	static uint64_t t148 = 111987993LLU;

    t148 = (((x777*x778)+x779)%x780);

    if (t148 != 18446744073708583493LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x782 = -179887836528869LL;
	int16_t x783 = -12469;
	int8_t x784 = INT8_MIN;
	volatile int64_t t149 = 13517264LL;

    t149 = (((x781*x782)+x783)%x784);

    if (t149 != 75LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x785 = INT16_MIN;
	volatile uint8_t x786 = 3U;
	uint8_t x787 = 2U;
	volatile uint32_t x788 = 62432U;

    t150 = (((x785*x786)+x787)%x788);

    if (t150 != 46850U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	volatile int8_t x794 = INT8_MAX;
	uint8_t x795 = 3U;
	int32_t x796 = INT32_MIN;

    t151 = (((x793*x794)+x795)%x796);

    if (t151 != 8322948) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x797 = 38U;
	int16_t x799 = INT16_MIN;
	volatile uint16_t x800 = 1586U;
	volatile uint32_t t152 = 1094U;

    t152 = (((x797*x798)+x799)%x800);

    if (t152 != 534U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x809 = -1;
	int8_t x810 = -5;
	uint64_t x811 = UINT64_MAX;
	static volatile int32_t x812 = INT32_MAX;
	uint64_t t153 = 23617813307299LLU;

    t153 = (((x809*x810)+x811)%x812);

    if (t153 != 4LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x813 = 105U;
	int16_t x814 = INT16_MIN;
	uint64_t x815 = 983305381596081059LLU;
	volatile int32_t x816 = INT32_MAX;

    t154 = (((x813*x814)+x815)%x816);

    if (t154 != 47839669LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x821 = UINT16_MAX;
	static int64_t x822 = -1LL;
	static uint8_t x823 = 20U;
	int8_t x824 = INT8_MAX;
	static int64_t t155 = 3706694648964LL;

    t155 = (((x821*x822)+x823)%x824);

    if (t155 != -110LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x825 = 96060370;
	int16_t x826 = -1;
	uint16_t x827 = 281U;
	static int16_t x828 = INT16_MIN;
	volatile int32_t t156 = -11079;

    t156 = (((x825*x826)+x827)%x828);

    if (t156 != -17081) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x829 = -1;
	int64_t x830 = -1LL;
	uint8_t x831 = 0U;
	uint32_t x832 = UINT32_MAX;
	static volatile int64_t t157 = -1576885597490LL;

    t157 = (((x829*x830)+x831)%x832);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x841 = 5479903U;
	int8_t x842 = INT8_MAX;
	static volatile int8_t x843 = 0;
	static uint64_t x844 = 1LLU;
	uint64_t t158 = 3641094941529982066LLU;

    t158 = (((x841*x842)+x843)%x844);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x845 = INT8_MIN;
	int8_t x846 = INT8_MIN;
	int16_t x847 = 7067;
	static int8_t x848 = 1;

    t159 = (((x845*x846)+x847)%x848);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x849 = UINT32_MAX;
	uint8_t x851 = 20U;
	volatile uint32_t x852 = UINT32_MAX;
	volatile uint32_t t160 = 6U;

    t160 = (((x849*x850)+x851)%x852);

    if (t160 != 21U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x853 = 0U;
	int64_t x854 = INT64_MIN;
	int32_t x855 = 0;
	int64_t x856 = -47064LL;
	static int64_t t161 = -1184847203121LL;

    t161 = (((x853*x854)+x855)%x856);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x857 = -1;
	volatile int64_t x858 = INT64_MAX;
	int8_t x859 = 0;
	volatile int64_t x860 = -235LL;

    t162 = (((x857*x858)+x859)%x860);

    if (t162 != -82LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x861 = INT16_MIN;
	static int8_t x862 = INT8_MIN;
	int16_t x863 = INT16_MIN;
	uint16_t x864 = 3242U;

    t163 = (((x861*x862)+x863)%x864);

    if (t163 != 2050) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x870 = -3013084753LL;
	static uint32_t x871 = UINT32_MAX;
	int16_t x872 = INT16_MIN;

    t164 = (((x869*x870)+x871)%x872);

    if (t164 != 32767LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x873 = UINT16_MAX;
	int8_t x874 = 1;
	int32_t x876 = INT32_MIN;
	uint64_t t165 = 45656LLU;

    t165 = (((x873*x874)+x875)%x876);

    if (t165 != 12215009LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x877 = INT8_MIN;
	int8_t x878 = INT8_MAX;
	volatile uint64_t x879 = UINT64_MAX;
	uint8_t x880 = 1U;
	static uint64_t t166 = 2LLU;

    t166 = (((x877*x878)+x879)%x880);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x881 = -49194172LL;
	int32_t x882 = INT32_MAX;
	int32_t x883 = -1;
	int8_t x884 = INT8_MIN;
	volatile int64_t t167 = -5733302774LL;

    t167 = (((x881*x882)+x883)%x884);

    if (t167 != -69LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x885 = INT64_MAX;
	int16_t x886 = -1;
	uint16_t x887 = 303U;
	static int32_t x888 = -1;

    t168 = (((x885*x886)+x887)%x888);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x893 = INT32_MAX;
	int32_t x894 = -1;

    t169 = (((x893*x894)+x895)%x896);

    if (t169 != -3) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x897 = 5U;
	int8_t x898 = -1;
	int32_t x899 = 2445;
	volatile int8_t x900 = -62;

    t170 = (((x897*x898)+x899)%x900);

    if (t170 != 22) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x901 = INT16_MIN;
	int64_t x902 = 7643LL;
	int64_t x904 = INT64_MIN;
	static volatile int64_t t171 = -166940LL;

    t171 = (((x901*x902)+x903)%x904);

    if (t171 != -250478592LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x905 = 0U;
	uint64_t x906 = 365354705248411LLU;
	uint16_t x907 = 20540U;
	volatile int64_t x908 = INT64_MIN;
	volatile uint64_t t172 = 13312827137282669LLU;

    t172 = (((x905*x906)+x907)%x908);

    if (t172 != 20540LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x914 = 28;
	int64_t x915 = INT64_MIN;
	uint8_t x916 = 3U;

    t173 = (((x913*x914)+x915)%x916);

    if (t173 != -2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x917 = 10794U;
	static uint64_t x919 = UINT64_MAX;
	int32_t x920 = INT32_MAX;
	volatile uint64_t t174 = 21996126LLU;

    t174 = (((x917*x918)+x919)%x920);

    if (t174 != 2147472856LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x921 = 1575U;
	int16_t x923 = 58;
	static volatile int64_t x924 = 1784862877010LL;
	volatile int64_t t175 = 11906601436042345LL;

    t175 = (((x921*x922)+x923)%x924);

    if (t175 != -1517LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x925 = -1;
	uint16_t x926 = UINT16_MAX;
	int8_t x927 = INT8_MIN;
	int8_t x928 = INT8_MIN;

    t176 = (((x925*x926)+x927)%x928);

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x929 = 85U;
	int16_t x930 = INT16_MIN;
	int64_t x931 = INT64_MAX;
	int32_t x932 = -150893603;
	volatile int64_t t177 = -141852LL;

    t177 = (((x929*x930)+x931)%x932);

    if (t177 != 150148326LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x937 = INT8_MIN;
	int16_t x938 = INT16_MAX;
	int16_t x939 = INT16_MIN;
	int32_t t178 = 393;

    t178 = (((x937*x938)+x939)%x940);

    if (t178 != -20) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x945 = INT8_MIN;
	int32_t x946 = -1;
	int32_t x947 = 3937;
	int16_t x948 = INT16_MIN;
	int32_t t179 = -6103;

    t179 = (((x945*x946)+x947)%x948);

    if (t179 != 4065) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x957 = UINT8_MAX;
	int32_t x958 = -1;
	static volatile uint16_t x959 = 7896U;
	volatile int32_t t180 = -1;

    t180 = (((x957*x958)+x959)%x960);

    if (t180 != 7641) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x962 = 41;
	volatile uint32_t x963 = UINT32_MAX;
	uint64_t x964 = 16074319929LLU;
	uint64_t t181 = 1465923LLU;

    t181 = (((x961*x962)+x963)%x964);

    if (t181 != 245LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x965 = 1601U;
	int8_t x966 = -3;
	int64_t x967 = -1LL;
	int64_t t182 = 1160096LL;

    t182 = (((x965*x966)+x967)%x968);

    if (t182 != 42LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x969 = -1;
	uint8_t x972 = UINT8_MAX;

    t183 = (((x969*x970)+x971)%x972);

    if (t183 != 216U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x975 = INT64_MIN;
	int8_t x976 = INT8_MIN;
	int64_t t184 = -750190698759LL;

    t184 = (((x973*x974)+x975)%x976);

    if (t184 != -124LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x977 = 1413U;
	int16_t x978 = -1922;
	uint8_t x979 = 120U;
	volatile int32_t x980 = 12202;
	volatile uint32_t t185 = 533567943U;

    t185 = (((x977*x978)+x979)%x980);

    if (t185 != 2898U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x993 = INT8_MIN;
	static int32_t x994 = -5918;
	int64_t x995 = -519154292LL;
	int8_t x996 = -1;
	volatile int64_t t186 = -799997704209782303LL;

    t186 = (((x993*x994)+x995)%x996);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x997 = UINT16_MAX;
	static int16_t x998 = 4;
	static int16_t x999 = INT16_MIN;
	int8_t x1000 = INT8_MAX;
	int32_t t187 = -103556;

    t187 = (((x997*x998)+x999)%x1000);

    if (t187 != 10) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1010 = 3757787U;
	int16_t x1011 = 2;
	static int32_t x1012 = 643740;
	int64_t t188 = -214717LL;

    t188 = (((x1009*x1010)+x1011)%x1012);

    if (t188 != -539085LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1013 = -1;
	uint64_t x1014 = UINT64_MAX;
	static uint8_t x1015 = UINT8_MAX;
	uint64_t x1016 = 28668345490989683LLU;
	volatile uint64_t t189 = 99199LLU;

    t189 = (((x1013*x1014)+x1015)%x1016);

    if (t189 != 256LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1021 = INT16_MIN;
	static int64_t x1022 = -1LL;
	uint32_t x1023 = 86642U;
	int8_t x1024 = INT8_MAX;

    t190 = (((x1021*x1022)+x1023)%x1024);

    if (t190 != 30LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1025 = -64827;
	static int16_t x1026 = INT16_MIN;
	uint64_t x1027 = 94155013155LLU;
	static uint32_t x1028 = 479U;
	uint64_t t191 = 183487619890302312LLU;

    t191 = (((x1025*x1026)+x1027)%x1028);

    if (t191 != 362LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1033 = 65921141;
	uint64_t x1034 = 1348908794674LLU;
	int16_t x1035 = -1382;
	uint16_t x1036 = 4001U;
	volatile uint64_t t192 = 13708084LLU;

    t192 = (((x1033*x1034)+x1035)%x1036);

    if (t192 != 1730LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1041 = 1U;
	int32_t x1042 = 1;
	volatile int64_t x1043 = -28527866586937791LL;
	int8_t x1044 = -1;

    t193 = (((x1041*x1042)+x1043)%x1044);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1045 = 0;
	int32_t x1046 = INT32_MIN;
	int32_t x1047 = -4275;
	uint32_t x1048 = 1645U;

    t194 = (((x1045*x1046)+x1047)%x1048);

    if (t194 != 1266U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1049 = -15;
	static int16_t x1051 = INT16_MIN;
	int64_t x1052 = INT64_MIN;

    t195 = (((x1049*x1050)+x1051)%x1052);

    if (t195 != 198613957LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1053 = 495U;
	static int64_t x1054 = -1LL;
	int16_t x1055 = INT16_MIN;
	static uint8_t x1056 = UINT8_MAX;
	static volatile int64_t t196 = 20403323LL;

    t196 = (((x1053*x1054)+x1055)%x1056);

    if (t196 != -113LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1057 = 33815LLU;
	uint8_t x1058 = 9U;
	int32_t x1059 = INT32_MIN;
	volatile uint64_t t197 = 116108757207787522LLU;

    t197 = (((x1057*x1058)+x1059)%x1060);

    if (t197 != 18446744071562372303LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1061 = UINT16_MAX;
	uint8_t x1062 = 94U;
	static int8_t x1063 = INT8_MAX;
	int32_t t198 = 23469;

    t198 = (((x1061*x1062)+x1063)%x1064);

    if (t198 != 28) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1073 = 3511U;
	uint64_t x1074 = 348456834059418LLU;
	volatile uint64_t t199 = 19LLU;

    t199 = (((x1073*x1074)+x1075)%x1076);

    if (t199 != 12614LLU) { NG(); } else { ; }
	
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

