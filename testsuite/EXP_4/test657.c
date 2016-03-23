
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

static volatile int8_t x2 = 1;
uint64_t x5 = UINT64_MAX;
int64_t x6 = -400864LL;
int64_t x21 = -1LL;
int64_t t4 = 7LL;
int32_t x38 = INT32_MIN;
uint8_t x40 = UINT8_MAX;
static volatile int32_t t6 = -1;
int32_t x47 = -250016;
uint8_t x49 = 39U;
volatile int8_t x50 = 6;
static int32_t x64 = -1;
volatile int8_t x79 = -1;
static volatile int64_t t13 = 31984344LL;
int32_t x109 = -1;
uint8_t x112 = 24U;
volatile int8_t x116 = -1;
int8_t x117 = -44;
static volatile int32_t t18 = -230956;
static volatile uint64_t x145 = 4117922476281550LLU;
int8_t x146 = INT8_MIN;
int64_t t21 = 307866613LL;
int16_t x186 = -1;
int8_t x189 = 6;
int16_t x193 = -237;
uint64_t x210 = 15535037LLU;
uint32_t x211 = UINT32_MAX;
int64_t x213 = -15173095393794LL;
volatile int64_t t29 = 4326373856295181LL;
int8_t x222 = -46;
static uint64_t x225 = 39686LLU;
static uint64_t x228 = 43752543LLU;
static uint32_t t33 = 165474U;
int16_t x269 = INT16_MIN;
uint64_t x278 = UINT64_MAX;
volatile int8_t x280 = -55;
static int64_t t37 = 29LL;
volatile int32_t x302 = 1;
int8_t x304 = -1;
static int32_t x315 = -1;
int8_t x322 = INT8_MIN;
volatile int32_t x330 = 106;
volatile int64_t x333 = INT64_MAX;
int8_t x334 = INT8_MIN;
static uint64_t t45 = 1LLU;
int64_t x347 = INT64_MAX;
volatile int8_t x388 = -1;
volatile int8_t x401 = 14;
int32_t x404 = INT32_MIN;
static volatile int16_t x426 = 2918;
static volatile uint64_t t56 = UINT64_MAX;
static volatile int32_t x455 = INT32_MIN;
volatile uint8_t x456 = UINT8_MAX;
int64_t t58 = -961166LL;
uint16_t x458 = UINT16_MAX;
uint8_t x464 = UINT8_MAX;
int8_t x474 = 32;
static int64_t x475 = INT64_MIN;
uint32_t x489 = 215018U;
uint16_t x503 = 103U;
int64_t t66 = 1550256750LL;
int64_t x514 = INT64_MAX;
volatile uint8_t x518 = UINT8_MAX;
volatile int32_t t68 = -60018264;
int64_t x523 = INT64_MIN;
volatile uint64_t t70 = 7808398083808LLU;
uint32_t x530 = 1881U;
static int32_t x532 = -25934;
static int64_t x535 = -2222074664494229LL;
static int16_t x536 = INT16_MAX;
uint16_t x541 = UINT16_MAX;
int8_t x542 = INT8_MIN;
int16_t x544 = INT16_MIN;
int16_t x553 = INT16_MIN;
volatile int64_t t76 = -29893618136LL;
int8_t x569 = -1;
int32_t x595 = INT32_MIN;
uint8_t x608 = 98U;
uint64_t t81 = 228795540812LLU;
uint32_t x637 = 764U;
uint32_t x645 = 2039602033U;
uint8_t x661 = 3U;
volatile uint64_t x662 = UINT64_MAX;
volatile uint64_t t84 = 30092898277211221LLU;
int16_t x677 = -1;
volatile uint32_t x679 = UINT32_MAX;
volatile uint32_t t85 = UINT32_MAX;
int8_t x689 = INT8_MIN;
int32_t x690 = 3597869;
int16_t x696 = INT16_MIN;
uint16_t x701 = 212U;
int16_t x703 = -1;
uint16_t x730 = 32407U;
uint32_t x735 = UINT32_MAX;
int64_t x742 = INT64_MIN;
volatile int64_t x743 = 28637056381LL;
static uint64_t x749 = UINT64_MAX;
static int8_t x750 = -1;
int16_t x753 = INT16_MIN;
int8_t x779 = INT8_MIN;
int32_t x821 = INT32_MAX;
int64_t t99 = -1614935956638LL;
int8_t x845 = -1;
int32_t x846 = INT32_MAX;
volatile int64_t t100 = -3877355LL;
static int64_t x859 = INT64_MAX;
static int32_t x861 = -16;
int64_t x864 = 487076864147LL;
static volatile int64_t t103 = 33847LL;
uint64_t x872 = 2LLU;
int16_t x882 = INT16_MIN;
uint32_t x894 = 1051U;
volatile uint32_t x922 = 85U;
int64_t x924 = 30323660059753LL;
volatile uint64_t x926 = 12523045067868LLU;
volatile int16_t x949 = -1;
static int32_t x950 = INT32_MAX;
uint32_t x958 = 253U;
int16_t x967 = 267;
int64_t x968 = -1LL;
uint8_t x984 = 41U;
int8_t x992 = INT8_MIN;
static uint32_t x996 = 1112U;
volatile int8_t x1024 = INT8_MIN;
int8_t x1037 = 59;
volatile uint64_t t123 = 32967418LLU;
int64_t t125 = 705908041517LL;
static uint8_t x1057 = 4U;
uint64_t x1060 = UINT64_MAX;
int64_t x1063 = INT64_MIN;
static int16_t x1072 = 11039;
volatile int8_t x1080 = 63;
int8_t x1081 = INT8_MIN;
int16_t x1092 = -1;
static int16_t x1093 = 2;
int8_t x1095 = INT8_MAX;
volatile int32_t t133 = -315;
static uint8_t x1128 = 13U;
int64_t x1129 = INT64_MIN;
volatile int16_t x1132 = INT16_MIN;
int64_t x1135 = INT64_MAX;
int32_t x1145 = -1;
volatile int64_t x1150 = -1012641774691854213LL;
int64_t x1158 = INT64_MIN;
int64_t x1164 = -1LL;
int16_t x1165 = 0;
int64_t x1173 = INT64_MIN;
uint64_t x1183 = 399095470LLU;
int32_t x1187 = -29;
static int32_t t146 = 52;
static uint32_t x1191 = UINT32_MAX;
int8_t x1192 = INT8_MIN;
static volatile uint32_t t147 = 57749692U;
volatile int64_t t148 = -38029LL;
int16_t x1210 = INT16_MIN;
uint64_t x1212 = 764451LLU;
int64_t x1221 = 1108457256277708LL;
uint8_t x1222 = 1U;
int16_t x1234 = -1;
uint8_t x1257 = 7U;
int64_t x1274 = INT64_MIN;
int64_t x1293 = INT64_MAX;
int16_t x1296 = 37;
int16_t x1303 = -11;
static int8_t x1304 = 1;
int32_t x1307 = INT32_MIN;
int32_t x1308 = INT32_MAX;
volatile int32_t x1406 = INT32_MAX;
uint64_t t168 = 1595LLU;
uint64_t x1418 = 315242484109LLU;
int16_t x1420 = INT16_MIN;
uint64_t t169 = UINT64_MAX;
int16_t x1421 = -2;
uint32_t x1423 = 12835544U;
uint16_t x1424 = UINT16_MAX;
uint32_t t170 = 3806421U;
volatile uint64_t t171 = 1LLU;
static volatile int16_t x1442 = -20;
int16_t x1443 = 58;
uint32_t x1451 = 10U;
int16_t x1462 = -1;
uint64_t x1479 = UINT64_MAX;
static int16_t x1492 = -39;
volatile int64_t x1497 = INT64_MAX;
static int8_t x1499 = INT8_MIN;
int32_t x1500 = -3;
static volatile uint16_t x1516 = 233U;
int64_t x1519 = INT64_MIN;
volatile int32_t t182 = 3;
uint64_t x1529 = 2591623785438903LLU;
uint16_t x1541 = 1U;
uint8_t x1542 = UINT8_MAX;
int16_t x1561 = -1;
int8_t x1563 = INT8_MAX;
static volatile int64_t x1564 = -1LL;
int64_t t189 = -393949489397LL;
int32_t x1575 = INT32_MIN;
uint64_t t192 = UINT64_MAX;
int8_t x1600 = 45;
uint32_t x1605 = UINT32_MAX;
volatile int32_t x1606 = INT32_MIN;
int16_t x1610 = -35;
volatile int16_t x1659 = INT16_MAX;
uint32_t x1660 = 6811U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int32_t x3 = INT32_MIN;
	uint16_t x4 = 129U;
	static volatile int32_t t0 = -39475;

    t0 = (x1|(x2%(x3/x4)));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x7 = INT64_MIN;
	uint8_t x8 = 7U;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (x5|(x6%(x7/x8)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x13 = -1;
	static int8_t x14 = -3;
	int8_t x15 = -1;
	int64_t x16 = -1LL;
	volatile int64_t t2 = -47084136LL;

    t2 = (x13|(x14%(x15/x16)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	int16_t x18 = INT16_MAX;
	uint64_t x19 = 201238444LLU;
	uint32_t x20 = 16204293U;
	volatile uint64_t t3 = 3755086518868801LLU;

    t3 = (x17|(x18%(x19/x20)));

    if (t3 != 65535LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x22 = 3U;
	volatile int32_t x23 = -439416949;
	volatile uint16_t x24 = UINT16_MAX;

    t4 = (x21|(x22%(x23/x24)));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MAX;
	int64_t x30 = -26LL;
	volatile int64_t x31 = -804858813484411LL;
	int32_t x32 = -1;
	volatile int64_t t5 = 505067293748LL;

    t5 = (x29|(x30%(x31/x32)));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x37 = 5U;
	int32_t x39 = INT32_MIN;

    t6 = (x37|(x38%(x39/x40)));

    if (t6 != -123) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x45 = -7;
	int32_t x46 = -985260452;
	int32_t x48 = -1;
	volatile int32_t t7 = 2791;

    t7 = (x45|(x46%(x47/x48)));

    if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x51 = INT16_MAX;
	int64_t x52 = -1LL;
	int64_t t8 = 23070729394250LL;

    t8 = (x49|(x50%(x51/x52)));

    if (t8 != 39LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x61 = 2;
	int32_t x62 = -43300;
	int8_t x63 = 1;
	volatile int32_t t9 = -1;

    t9 = (x61|(x62%(x63/x64)));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x69 = INT16_MAX;
	uint16_t x70 = 0U;
	int32_t x71 = INT32_MIN;
	int8_t x72 = 1;
	volatile int32_t t10 = 0;

    t10 = (x69|(x70%(x71/x72)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x77 = INT16_MAX;
	int32_t x78 = -10818;
	volatile uint64_t x80 = UINT64_MAX;
	uint64_t t11 = 27598874350LLU;

    t11 = (x77|(x78%(x79/x80)));

    if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x81 = 527974336003LLU;
	uint64_t x82 = 124045719577801LLU;
	volatile int64_t x83 = INT64_MIN;
	uint64_t x84 = 7LLU;
	uint64_t t12 = 988719LLU;

    t12 = (x81|(x82%(x83/x84)));

    if (t12 != 124227327698635LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x85 = -10475;
	int64_t x86 = INT64_MIN;
	volatile int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MIN;

    t13 = (x85|(x86%(x87/x88)));

    if (t13 != -10475LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x93 = 0U;
	static uint16_t x94 = 285U;
	int64_t x95 = 351172LL;
	static uint16_t x96 = 10677U;
	volatile int64_t t14 = -95511804381953LL;

    t14 = (x93|(x94%(x95/x96)));

    if (t14 != 29LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x110 = -327566888976026181LL;
	int16_t x111 = INT16_MIN;
	volatile int64_t t15 = -29077689062470259LL;

    t15 = (x109|(x110%(x111/x112)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x113 = 6;
	static int32_t x114 = INT32_MIN;
	int32_t x115 = 16;
	int32_t t16 = -190229;

    t16 = (x113|(x114%(x115/x116)));

    if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x118 = 29LL;
	int16_t x119 = -6965;
	volatile int32_t x120 = -1;
	int64_t t17 = -17227727641198088LL;

    t17 = (x117|(x118%(x119/x120)));

    if (t17 != -35LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x141 = -1;
	static int16_t x142 = 10;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;

    t18 = (x141|(x142%(x143/x144)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t19 = 1170398LLU;

    t19 = (x145|(x146%(x147/x148)));

    if (t19 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x149 = -1;
	int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 636U;
	volatile int64_t t20 = 7504023LL;

    t20 = (x149|(x150%(x151/x152)));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x153 = 1914119463841320LL;
	static uint32_t x154 = 4U;
	volatile int64_t x155 = 1LL;
	static volatile int64_t x156 = -1LL;

    t21 = (x153|(x154%(x155/x156)));

    if (t21 != 1914119463841320LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	volatile uint32_t x176 = 32551U;
	uint32_t t22 = 644346109U;

    t22 = (x173|(x174%(x175/x176)));

    if (t22 != 4294959912U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x181 = INT16_MIN;
	int64_t x182 = -59LL;
	volatile int32_t x183 = -22401;
	static int8_t x184 = INT8_MIN;
	volatile int64_t t23 = 1656491LL;

    t23 = (x181|(x182%(x183/x184)));

    if (t23 != -59LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x185 = INT16_MIN;
	int32_t x187 = -16;
	int16_t x188 = 1;
	int32_t t24 = 113560;

    t24 = (x185|(x186%(x187/x188)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x190 = INT16_MIN;
	uint16_t x191 = 154U;
	int8_t x192 = 3;
	volatile int32_t t25 = 1;

    t25 = (x189|(x190%(x191/x192)));

    if (t25 != -26) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x194 = -3901946799542LL;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = UINT32_MAX;
	static volatile int64_t t26 = -124921LL;

    t26 = (x193|(x194%(x195/x196)));

    if (t26 != -165LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x209 = -139;
	int32_t x212 = -24804886;
	uint64_t t27 = 698LLU;

    t27 = (x209|(x210%(x211/x212)));

    if (t27 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	int64_t t28 = 27710864147095LL;

    t28 = (x213|(x214%(x215/x216)));

    if (t28 != -15173095393794LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x217 = UINT16_MAX;
	static uint8_t x218 = 77U;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = 6U;

    t29 = (x217|(x218%(x219/x220)));

    if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x221 = UINT8_MAX;
	static int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t30 = -158609;

    t30 = (x221|(x222%(x223/x224)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x226 = -4242;
	int64_t x227 = INT64_MIN;
	uint64_t t31 = 636561982457492624LLU;

    t31 = (x225|(x226%(x227/x228)));

    if (t31 != 4579078LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x237 = UINT16_MAX;
	uint16_t x238 = 0U;
	static int64_t x239 = 16576052536963341LL;
	int16_t x240 = -1;
	static int64_t t32 = -1487LL;

    t32 = (x237|(x238%(x239/x240)));

    if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x241 = UINT16_MAX;
	int16_t x242 = 196;
	static uint32_t x243 = UINT32_MAX;
	static int32_t x244 = INT32_MIN;

    t33 = (x241|(x242%(x243/x244)));

    if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x249 = 3U;
	int16_t x250 = -1;
	uint64_t x251 = UINT64_MAX;
	static int8_t x252 = INT8_MIN;
	volatile uint64_t t34 = 140787671161485495LLU;

    t34 = (x249|(x250%(x251/x252)));

    if (t34 != 3LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x270 = 6037197U;
	volatile int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;
	volatile int64_t t35 = 217473615123LL;

    t35 = (x269|(x270%(x271/x272)));

    if (t35 != -24883LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x277 = INT64_MIN;
	uint16_t x279 = 5514U;
	uint64_t t36 = 111LLU;

    t36 = (x277|(x278%(x279/x280)));

    if (t36 != 9223372036854775907LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x285 = -17;
	uint32_t x286 = 134686122U;
	int64_t x287 = INT64_MAX;
	int8_t x288 = 2;

    t37 = (x285|(x286%(x287/x288)));

    if (t37 != -17LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x289 = INT32_MIN;
	volatile uint32_t x290 = 22U;
	volatile int64_t x291 = INT64_MAX;
	int64_t x292 = -1709831125495474704LL;
	volatile int64_t t38 = 1254584923566LL;

    t38 = (x289|(x290%(x291/x292)));

    if (t38 != -2147483646LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x301 = 2U;
	int8_t x303 = -20;
	volatile int32_t t39 = -382365872;

    t39 = (x301|(x302%(x303/x304)));

    if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x313 = 1;
	int16_t x314 = -1;
	int8_t x316 = -1;
	volatile int32_t t40 = -1;

    t40 = (x313|(x314%(x315/x316)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x321 = INT8_MIN;
	int8_t x323 = 12;
	static int32_t x324 = 2;
	int32_t t41 = 34785;

    t41 = (x321|(x322%(x323/x324)));

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x325 = -7;
	static uint32_t x326 = 94566U;
	static int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;
	uint32_t t42 = UINT32_MAX;

    t42 = (x325|(x326%(x327/x328)));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x329 = 79458700279368746LLU;
	int16_t x331 = -1;
	int16_t x332 = -1;
	uint64_t t43 = 1312937022LLU;

    t43 = (x329|(x330%(x331/x332)));

    if (t43 != 79458700279368746LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x335 = 105U;
	uint8_t x336 = 81U;
	volatile int64_t t44 = INT64_MAX;

    t44 = (x333|(x334%(x335/x336)));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x337 = 6791LLU;
	static int8_t x338 = INT8_MIN;
	volatile int64_t x339 = 7360LL;
	int8_t x340 = -1;

    t45 = (x337|(x338%(x339/x340)));

    if (t45 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x345 = -1LL;
	int64_t x346 = 23LL;
	int64_t x348 = -1LL;
	int64_t t46 = 4518237876LL;

    t46 = (x345|(x346%(x347/x348)));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x353 = -1;
	static int16_t x354 = INT16_MIN;
	static volatile int32_t x355 = INT32_MAX;
	volatile uint8_t x356 = 1U;
	volatile int32_t t47 = 648;

    t47 = (x353|(x354%(x355/x356)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x357 = INT32_MIN;
	volatile int64_t x358 = 6LL;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	volatile int64_t t48 = -3095607LL;

    t48 = (x357|(x358%(x359/x360)));

    if (t48 != -2147483642LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x369 = -29LL;
	uint64_t x370 = 2239597790930LLU;
	static volatile int64_t x371 = INT64_MAX;
	volatile uint64_t x372 = 889136947383LLU;
	volatile uint64_t t49 = 3947633560238753LLU;

    t49 = (x369|(x370%(x371/x372)));

    if (t49 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x385 = INT32_MIN;
	static int32_t x386 = INT32_MIN;
	int32_t x387 = -2;
	static volatile int32_t t50 = INT32_MIN;

    t50 = (x385|(x386%(x387/x388)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x393 = -41428810166154565LL;
	static volatile uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	volatile int16_t x396 = INT16_MIN;
	volatile uint64_t t51 = 6915LLU;

    t51 = (x393|(x394%(x395/x396)));

    if (t51 != 18405315263543397051LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x402 = 13705460449344648LLU;
	int64_t x403 = INT64_MAX;
	volatile uint64_t t52 = 25LLU;

    t52 = (x401|(x402%(x403/x404)));

    if (t52 != 13705460449344654LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x405 = 71LLU;
	volatile uint8_t x406 = UINT8_MAX;
	int32_t x407 = INT32_MIN;
	volatile int16_t x408 = INT16_MIN;
	uint64_t t53 = 59744403369LLU;

    t53 = (x405|(x406%(x407/x408)));

    if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MIN;
	volatile int64_t x415 = INT64_MIN;
	int64_t x416 = 495206286860990LL;
	int64_t t54 = 5493947LL;

    t54 = (x413|(x414%(x415/x416)));

    if (t54 != -2523LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x425 = INT16_MIN;
	volatile int32_t x427 = INT32_MIN;
	volatile int32_t x428 = -78;
	volatile int32_t t55 = 47;

    t55 = (x425|(x426%(x427/x428)));

    if (t55 != -29850) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x429 = 106903477399731245LLU;
	int64_t x430 = -1LL;
	static uint16_t x431 = UINT16_MAX;
	int32_t x432 = -1;

    t56 = (x429|(x430%(x431/x432)));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x445 = 1;
	static uint32_t x446 = UINT32_MAX;
	int64_t x447 = INT64_MAX;
	int64_t x448 = 7834035LL;
	volatile int64_t t57 = -4144956255LL;

    t57 = (x445|(x446%(x447/x448)));

    if (t57 != 4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x453 = -64096512LL;
	static int32_t x454 = INT32_MIN;

    t58 = (x453|(x454%(x455/x456)));

    if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x457 = INT64_MIN;
	int32_t x459 = INT32_MIN;
	static int8_t x460 = -19;
	int64_t t59 = -1LL;

    t59 = (x457|(x458%(x459/x460)));

    if (t59 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x461 = 3537U;
	volatile int64_t x462 = INT64_MAX;
	uint8_t x463 = UINT8_MAX;
	volatile int64_t t60 = 22742652818032LL;

    t60 = (x461|(x462%(x463/x464)));

    if (t60 != 3537LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x469 = 8;
	uint8_t x470 = 7U;
	int64_t x471 = INT64_MIN;
	int64_t x472 = INT64_MIN;
	int64_t t61 = 8788345423447092LL;

    t61 = (x469|(x470%(x471/x472)));

    if (t61 != 8LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x473 = 16;
	volatile uint64_t x476 = 19066365275LLU;
	volatile uint64_t t62 = 223061844837LLU;

    t62 = (x473|(x474%(x475/x476)));

    if (t62 != 48LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x481 = 511;
	static int64_t x482 = 150595551261311405LL;
	int32_t x483 = 6;
	int8_t x484 = -1;
	int64_t t63 = 26156974401170404LL;

    t63 = (x481|(x482%(x483/x484)));

    if (t63 != 511LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x485 = INT64_MIN;
	static int64_t x486 = 1103429356117LL;
	static uint16_t x487 = 64U;
	int32_t x488 = -1;
	int64_t t64 = 0LL;

    t64 = (x485|(x486%(x487/x488)));

    if (t64 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x490 = UINT8_MAX;
	int64_t x491 = INT64_MIN;
	uint8_t x492 = 3U;
	volatile int64_t t65 = -243407419216623496LL;

    t65 = (x489|(x490%(x491/x492)));

    if (t65 != 215039LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x501 = -90709964780575LL;
	int32_t x502 = INT32_MIN;
	uint8_t x504 = 2U;

    t66 = (x501|(x502%(x503/x504)));

    if (t66 != -25LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x513 = 135U;
	static volatile int64_t x515 = INT64_MIN;
	int64_t x516 = -15804038831797LL;
	volatile int64_t t67 = 4LL;

    t67 = (x513|(x514%(x515/x516)));

    if (t67 != 328927LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x517 = 820597255;
	int16_t x519 = INT16_MAX;
	volatile int16_t x520 = -1;

    t68 = (x517|(x518%(x519/x520)));

    if (t68 != 820597503) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x521 = INT32_MAX;
	uint16_t x522 = 8619U;
	int64_t x524 = 842808212787637LL;
	static int64_t t69 = 255243173371LL;

    t69 = (x521|(x522%(x523/x524)));

    if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x525 = -62920588581905145LL;
	uint64_t x526 = 19065818235LLU;
	static uint64_t x527 = 1489LLU;
	static uint32_t x528 = 2U;

    t70 = (x525|(x526%(x527/x528)));

    if (t70 != 18383823485127647047LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x529 = 495518151;
	uint16_t x531 = UINT16_MAX;
	static volatile uint32_t t71 = 24599U;

    t71 = (x529|(x530%(x531/x532)));

    if (t71 != 495519711U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x533 = INT8_MIN;
	static int32_t x534 = -276;
	static volatile int64_t t72 = 57213LL;

    t72 = (x533|(x534%(x535/x536)));

    if (t72 != -20LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x537 = UINT64_MAX;
	volatile int8_t x538 = -1;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = UINT16_MAX;
	uint64_t t73 = UINT64_MAX;

    t73 = (x537|(x538%(x539/x540)));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x543 = INT32_MIN;
	volatile int32_t t74 = -1;

    t74 = (x541|(x542%(x543/x544)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x554 = INT8_MAX;
	static uint32_t x555 = UINT32_MAX;
	static uint32_t x556 = 6396533U;
	static volatile uint32_t t75 = 1489398U;

    t75 = (x553|(x554%(x555/x556)));

    if (t75 != 4294934655U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x565 = UINT32_MAX;
	int16_t x566 = -1;
	int64_t x567 = -1LL;
	static volatile int32_t x568 = -1;

    t76 = (x565|(x566%(x567/x568)));

    if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x570 = -25;
	static uint32_t x571 = 82325981U;
	int16_t x572 = INT16_MAX;
	uint32_t t77 = UINT32_MAX;

    t77 = (x569|(x570%(x571/x572)));

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x573 = INT32_MAX;
	int32_t x574 = -1;
	int64_t x575 = -489792583LL;
	volatile uint16_t x576 = UINT16_MAX;
	static int64_t t78 = 56896686LL;

    t78 = (x573|(x574%(x575/x576)));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x593 = INT16_MAX;
	static int8_t x594 = -46;
	int32_t x596 = 1012109297;
	volatile int32_t t79 = 64;

    t79 = (x593|(x594%(x595/x596)));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x605 = 47U;
	int16_t x606 = INT16_MAX;
	int64_t x607 = INT64_MIN;
	volatile int64_t t80 = -45359519495LL;

    t80 = (x605|(x606%(x607/x608)));

    if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x625 = INT32_MIN;
	volatile uint32_t x626 = 207440124U;
	uint64_t x627 = UINT64_MAX;
	volatile int8_t x628 = INT8_MIN;

    t81 = (x625|(x626%(x627/x628)));

    if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x638 = UINT64_MAX;
	static uint8_t x639 = 6U;
	static volatile int8_t x640 = -1;
	volatile uint64_t t82 = 275157107LLU;

    t82 = (x637|(x638%(x639/x640)));

    if (t82 != 765LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint16_t x646 = 212U;
	int32_t x647 = INT32_MAX;
	int16_t x648 = INT16_MIN;
	uint32_t t83 = 157860181U;

    t83 = (x645|(x646%(x647/x648)));

    if (t83 != 2039602165U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x663 = 339U;
	volatile int16_t x664 = 2;

    t84 = (x661|(x662%(x663/x664)));

    if (t84 != 95LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x678 = -1;
	uint8_t x680 = UINT8_MAX;

    t85 = (x677|(x678%(x679/x680)));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x691 = 35U;
	static uint8_t x692 = 1U;
	volatile int32_t t86 = -117310143;

    t86 = (x689|(x690%(x691/x692)));

    if (t86 != -119) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x693 = 97U;
	uint64_t x694 = UINT64_MAX;
	static int64_t x695 = 17314723248601LL;
	uint64_t t87 = 66770109393289275LLU;

    t87 = (x693|(x694%(x695/x696)));

    if (t87 != 528403451LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x702 = 0LLU;
	static int16_t x704 = -1;
	static uint64_t t88 = 104243233LLU;

    t88 = (x701|(x702%(x703/x704)));

    if (t88 != 212LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x705 = 17;
	uint8_t x706 = 20U;
	uint64_t x707 = UINT64_MAX;
	static int32_t x708 = 10759574;
	volatile uint64_t t89 = 100905247LLU;

    t89 = (x705|(x706%(x707/x708)));

    if (t89 != 21LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x729 = 81265144U;
	volatile int16_t x731 = INT16_MAX;
	volatile int8_t x732 = -1;
	volatile uint32_t t90 = 754U;

    t90 = (x729|(x730%(x731/x732)));

    if (t90 != 81297407U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x733 = INT16_MAX;
	int8_t x734 = INT8_MAX;
	volatile int32_t x736 = -3;
	volatile uint32_t t91 = 7988893U;

    t91 = (x733|(x734%(x735/x736)));

    if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x741 = 460654014LLU;
	static int16_t x744 = INT16_MAX;
	volatile uint64_t t92 = 6786031009232777LLU;

    t92 = (x741|(x742%(x743/x744)));

    if (t92 != 18446744073709010430LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x751 = INT16_MIN;
	volatile int16_t x752 = -882;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = (x749|(x750%(x751/x752)));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x754 = UINT16_MAX;
	int8_t x755 = INT8_MIN;
	int64_t x756 = -1LL;
	static int64_t t94 = -553999985746660LL;

    t94 = (x753|(x754%(x755/x756)));

    if (t94 != -32641LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MIN;
	uint32_t x780 = 128900U;
	volatile int64_t t95 = 24935LL;

    t95 = (x777|(x778%(x779/x780)));

    if (t95 != -9223372036854756640LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x805 = UINT64_MAX;
	uint16_t x806 = 3057U;
	int8_t x807 = INT8_MIN;
	uint64_t x808 = 390269740626921LLU;
	uint64_t t96 = UINT64_MAX;

    t96 = (x805|(x806%(x807/x808)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x809 = -597725193LL;
	int16_t x810 = -1;
	uint64_t x811 = UINT64_MAX;
	int16_t x812 = 3302;
	volatile uint64_t t97 = 175350LLU;

    t97 = (x809|(x810%(x811/x812)));

    if (t97 != 18446744073111826431LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x822 = 56;
	int64_t x823 = INT64_MIN;
	static uint32_t x824 = 370193U;
	int64_t t98 = 252904220203095LL;

    t98 = (x821|(x822%(x823/x824)));

    if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x829 = INT8_MIN;
	static int8_t x830 = INT8_MAX;
	int16_t x831 = 29;
	int64_t x832 = 1LL;

    t99 = (x829|(x830%(x831/x832)));

    if (t99 != -117LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x847 = INT64_MAX;
	volatile int8_t x848 = INT8_MAX;

    t100 = (x845|(x846%(x847/x848)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x849 = 3LLU;
	static uint32_t x850 = UINT32_MAX;
	uint16_t x851 = 11U;
	volatile int8_t x852 = -1;
	uint64_t t101 = 4443554134166755565LLU;

    t101 = (x849|(x850%(x851/x852)));

    if (t101 != 11LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x857 = 529U;
	int64_t x858 = -58185LL;
	int32_t x860 = INT32_MAX;
	static int64_t t102 = -27958763743502LL;

    t102 = (x857|(x858%(x859/x860)));

    if (t102 != -57673LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x862 = INT16_MIN;
	volatile int64_t x863 = INT64_MAX;

    t103 = (x861|(x862%(x863/x864)));

    if (t103 != -16LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x865 = INT32_MIN;
	volatile int8_t x866 = INT8_MIN;
	int16_t x867 = INT16_MIN;
	int16_t x868 = INT16_MIN;
	static volatile int32_t t104 = INT32_MIN;

    t104 = (x865|(x866%(x867/x868)));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x869 = 702U;
	int16_t x870 = INT16_MIN;
	static volatile int32_t x871 = -4;
	volatile uint64_t t105 = 175466206485967856LLU;

    t105 = (x869|(x870%(x871/x872)));

    if (t105 != 9223372036854743742LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x877 = 9U;
	uint16_t x878 = UINT16_MAX;
	int16_t x879 = 261;
	static int32_t x880 = -1;
	int32_t t106 = -15783;

    t106 = (x877|(x878%(x879/x880)));

    if (t106 != 25) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x881 = -353;
	static uint32_t x883 = UINT32_MAX;
	static volatile uint8_t x884 = 1U;
	static uint32_t t107 = 792076U;

    t107 = (x881|(x882%(x883/x884)));

    if (t107 != 4294966943U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x885 = UINT64_MAX;
	uint8_t x886 = 29U;
	uint64_t x887 = 1511991601908318LLU;
	int32_t x888 = INT32_MAX;
	uint64_t t108 = UINT64_MAX;

    t108 = (x885|(x886%(x887/x888)));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x893 = 13U;
	static uint64_t x895 = UINT64_MAX;
	int16_t x896 = -11;
	uint64_t t109 = 510487LLU;

    t109 = (x893|(x894%(x895/x896)));

    if (t109 != 13LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x921 = 685819198LLU;
	int64_t x923 = INT64_MIN;
	uint64_t t110 = 231551986LLU;

    t110 = (x921|(x922%(x923/x924)));

    if (t110 != 685819263LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x925 = 3U;
	static uint64_t x927 = 8131394674LLU;
	int8_t x928 = 11;
	static uint64_t t111 = 1653308LLU;

    t111 = (x925|(x926%(x927/x928)));

    if (t111 != 697280691LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x929 = INT16_MAX;
	static volatile uint64_t x930 = 362296811923476828LLU;
	int64_t x931 = INT64_MIN;
	int32_t x932 = 91;
	volatile uint64_t t112 = 2678732660LLU;

    t112 = (x929|(x930%(x931/x932)));

    if (t112 != 362296811923505151LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x937 = -1;
	int64_t x938 = 126816801339LL;
	uint32_t x939 = UINT32_MAX;
	uint64_t x940 = 63LLU;
	volatile uint64_t t113 = UINT64_MAX;

    t113 = (x937|(x938%(x939/x940)));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x941 = 0U;
	volatile uint32_t x942 = UINT32_MAX;
	volatile int32_t x943 = -60;
	int8_t x944 = 30;
	uint32_t t114 = 15U;

    t114 = (x941|(x942%(x943/x944)));

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x951 = UINT64_MAX;
	int16_t x952 = 7;
	volatile uint64_t t115 = UINT64_MAX;

    t115 = (x949|(x950%(x951/x952)));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x957 = 274449LL;
	int32_t x959 = INT32_MAX;
	static int8_t x960 = -2;
	int64_t t116 = 310LL;

    t116 = (x957|(x958%(x959/x960)));

    if (t116 != 274685LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x965 = 0;
	uint16_t x966 = 0U;
	int64_t t117 = -1995043899846732274LL;

    t117 = (x965|(x966%(x967/x968)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x981 = INT64_MIN;
	volatile uint8_t x982 = 0U;
	static int64_t x983 = INT64_MIN;
	int64_t t118 = INT64_MIN;

    t118 = (x981|(x982%(x983/x984)));

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x989 = UINT16_MAX;
	int32_t x990 = INT32_MIN;
	int64_t x991 = INT64_MAX;
	int64_t t119 = 21LL;

    t119 = (x989|(x990%(x991/x992)));

    if (t119 != -2147418113LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x993 = -254;
	volatile uint16_t x994 = 8U;
	int16_t x995 = INT16_MIN;
	uint32_t t120 = 55U;

    t120 = (x993|(x994%(x995/x996)));

    if (t120 != 4294967050U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x1017 = 6546;
	uint16_t x1018 = UINT16_MAX;
	int64_t x1019 = 363836564735545091LL;
	uint8_t x1020 = 2U;
	volatile int64_t t121 = -132868742LL;

    t121 = (x1017|(x1018%(x1019/x1020)));

    if (t121 != 65535LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x1021 = INT64_MAX;
	static int32_t x1022 = -1;
	volatile int16_t x1023 = INT16_MAX;
	int64_t t122 = 0LL;

    t122 = (x1021|(x1022%(x1023/x1024)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x1038 = 23;
	uint64_t x1039 = UINT64_MAX;
	uint64_t x1040 = 109620970LLU;

    t123 = (x1037|(x1038%(x1039/x1040)));

    if (t123 != 63LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1049 = 174U;
	static uint8_t x1050 = 19U;
	volatile int8_t x1051 = INT8_MAX;
	int32_t x1052 = -1;
	int32_t t124 = 8152410;

    t124 = (x1049|(x1050%(x1051/x1052)));

    if (t124 != 191) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x1053 = INT64_MIN;
	volatile int8_t x1054 = INT8_MAX;
	int32_t x1055 = INT32_MAX;
	int8_t x1056 = INT8_MIN;

    t125 = (x1053|(x1054%(x1055/x1056)));

    if (t125 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1058 = -1LL;
	int32_t x1059 = -1;
	volatile uint64_t t126 = 24176LLU;

    t126 = (x1057|(x1058%(x1059/x1060)));

    if (t126 != 4LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x1061 = 4569671402047789151LLU;
	int32_t x1062 = 187881;
	int16_t x1064 = 334;
	uint64_t t127 = 18131948LLU;

    t127 = (x1061|(x1062%(x1063/x1064)));

    if (t127 != 4569671402047921663LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1069 = 1567;
	static uint8_t x1070 = UINT8_MAX;
	uint32_t x1071 = 950112215U;
	uint32_t t128 = 184099141U;

    t128 = (x1069|(x1070%(x1071/x1072)));

    if (t128 != 1791U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1077 = INT64_MAX;
	int8_t x1078 = -40;
	int64_t x1079 = -560572957349LL;
	int64_t t129 = 1LL;

    t129 = (x1077|(x1078%(x1079/x1080)));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x1082 = -681328LL;
	int32_t x1083 = INT32_MIN;
	static int64_t x1084 = -1LL;
	volatile int64_t t130 = 749LL;

    t130 = (x1081|(x1082%(x1083/x1084)));

    if (t130 != -112LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x1085 = 1480340540441LLU;
	static volatile int8_t x1086 = INT8_MAX;
	uint32_t x1087 = UINT32_MAX;
	static int8_t x1088 = INT8_MAX;
	static volatile uint64_t t131 = 9441898832LLU;

    t131 = (x1085|(x1086%(x1087/x1088)));

    if (t131 != 1480340540543LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1089 = -22039902196801LL;
	volatile uint16_t x1090 = 6U;
	int32_t x1091 = -168200016;
	static volatile int64_t t132 = 4LL;

    t132 = (x1089|(x1090%(x1091/x1092)));

    if (t132 != -22039902196801LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x1094 = INT32_MIN;
	volatile int16_t x1096 = 1;

    t133 = (x1093|(x1094%(x1095/x1096)));

    if (t133 != -6) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1125 = INT32_MAX;
	int8_t x1126 = -1;
	uint16_t x1127 = UINT16_MAX;
	int32_t t134 = -209;

    t134 = (x1125|(x1126%(x1127/x1128)));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x1130 = -1;
	static int32_t x1131 = INT32_MIN;
	volatile int64_t t135 = 184992501819987LL;

    t135 = (x1129|(x1130%(x1131/x1132)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1133 = INT32_MIN;
	uint16_t x1134 = 6U;
	int8_t x1136 = INT8_MIN;
	int64_t t136 = -6LL;

    t136 = (x1133|(x1134%(x1135/x1136)));

    if (t136 != -2147483642LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1141 = INT32_MIN;
	uint16_t x1142 = UINT16_MAX;
	static int8_t x1143 = INT8_MIN;
	static int16_t x1144 = -1;
	int32_t t137 = -6448;

    t137 = (x1141|(x1142%(x1143/x1144)));

    if (t137 != -2147483521) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x1146 = 4018565617705LLU;
	volatile int16_t x1147 = INT16_MIN;
	static uint32_t x1148 = 10388729U;
	uint64_t t138 = UINT64_MAX;

    t138 = (x1145|(x1146%(x1147/x1148)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x1149 = 236592U;
	uint8_t x1151 = UINT8_MAX;
	static int32_t x1152 = -1;
	volatile int64_t t139 = -5974LL;

    t139 = (x1149|(x1150%(x1151/x1152)));

    if (t139 != -136LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1153 = -11889LL;
	int16_t x1154 = INT16_MIN;
	uint64_t x1155 = UINT64_MAX;
	uint64_t x1156 = 262422132107464LLU;
	uint64_t t140 = 6389LLU;

    t140 = (x1153|(x1154%(x1155/x1156)));

    if (t140 != 18446744073709539791LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1157 = 12783739579760556LL;
	int32_t x1159 = INT32_MAX;
	int32_t x1160 = -22970;
	static volatile int64_t t141 = 5175745LL;

    t141 = (x1157|(x1158%(x1159/x1160)));

    if (t141 != -2LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1161 = INT32_MAX;
	int32_t x1162 = INT32_MAX;
	int64_t x1163 = INT64_MAX;
	static int64_t t142 = -734976097566LL;

    t142 = (x1161|(x1162%(x1163/x1164)));

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1166 = 83513375593LLU;
	static volatile uint8_t x1167 = 2U;
	int8_t x1168 = -1;
	volatile uint64_t t143 = 12932LLU;

    t143 = (x1165|(x1166%(x1167/x1168)));

    if (t143 != 83513375593LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1174 = INT32_MAX;
	int16_t x1175 = -1;
	int16_t x1176 = -1;
	static int64_t t144 = INT64_MIN;

    t144 = (x1173|(x1174%(x1175/x1176)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x1181 = INT64_MAX;
	int32_t x1182 = 873582244;
	uint32_t x1184 = 14586038U;
	volatile uint64_t t145 = 1575LLU;

    t145 = (x1181|(x1182%(x1183/x1184)));

    if (t145 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1185 = INT32_MIN;
	int32_t x1186 = -1;
	int16_t x1188 = -1;

    t146 = (x1185|(x1186%(x1187/x1188)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x1189 = 2U;
	int32_t x1190 = INT32_MAX;

    t147 = (x1189|(x1190%(x1191/x1192)));

    if (t147 != 2U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x1197 = INT64_MIN;
	int32_t x1198 = 467069;
	static int8_t x1199 = INT8_MIN;
	uint8_t x1200 = 63U;

    t148 = (x1197|(x1198%(x1199/x1200)));

    if (t148 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1209 = 25825U;
	volatile int16_t x1211 = INT16_MIN;
	uint64_t t149 = 185629LLU;

    t149 = (x1209|(x1210%(x1211/x1212)));

    if (t149 != 353785LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1213 = INT8_MAX;
	int64_t x1214 = -334LL;
	uint16_t x1215 = UINT16_MAX;
	uint32_t x1216 = 214U;
	int64_t t150 = -42939425241912616LL;

    t150 = (x1213|(x1214%(x1215/x1216)));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x1223 = 15779LL;
	volatile uint16_t x1224 = 273U;
	int64_t t151 = -8428630057585LL;

    t151 = (x1221|(x1222%(x1223/x1224)));

    if (t151 != 1108457256277709LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1233 = 230U;
	uint64_t x1235 = UINT64_MAX;
	static int64_t x1236 = INT64_MIN;
	volatile uint64_t t152 = 1370LLU;

    t152 = (x1233|(x1234%(x1235/x1236)));

    if (t152 != 230LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1253 = 3934280479LLU;
	int64_t x1254 = -1LL;
	int16_t x1255 = INT16_MIN;
	int16_t x1256 = -1;
	uint64_t t153 = UINT64_MAX;

    t153 = (x1253|(x1254%(x1255/x1256)));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1258 = -37538988;
	uint8_t x1259 = 5U;
	static int64_t x1260 = -1LL;
	int64_t t154 = 6264329LL;

    t154 = (x1257|(x1258%(x1259/x1260)));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x1265 = 1847U;
	volatile uint64_t x1266 = UINT64_MAX;
	uint16_t x1267 = UINT16_MAX;
	int16_t x1268 = 12323;
	uint64_t t155 = 63434927LLU;

    t155 = (x1265|(x1266%(x1267/x1268)));

    if (t155 != 1847LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x1273 = -103848671271LL;
	int64_t x1275 = INT64_MIN;
	int32_t x1276 = INT32_MAX;
	static volatile int64_t t156 = -1278959LL;

    t156 = (x1273|(x1274%(x1275/x1276)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1281 = 483U;
	int64_t x1282 = INT64_MIN;
	volatile int64_t x1283 = INT64_MIN;
	int32_t x1284 = INT32_MIN;
	int64_t t157 = -39382LL;

    t157 = (x1281|(x1282%(x1283/x1284)));

    if (t157 != 483LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1294 = INT8_MAX;
	static int16_t x1295 = INT16_MIN;
	static int64_t t158 = INT64_MAX;

    t158 = (x1293|(x1294%(x1295/x1296)));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x1297 = UINT32_MAX;
	int16_t x1298 = INT16_MIN;
	volatile int16_t x1299 = INT16_MIN;
	uint64_t x1300 = 3077530434059LLU;
	static volatile uint64_t t159 = 514743069282LLU;

    t159 = (x1297|(x1298%(x1299/x1300)));

    if (t159 != 4294967295LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x1301 = -1;
	volatile int8_t x1302 = INT8_MIN;
	int32_t t160 = -112091;

    t160 = (x1301|(x1302%(x1303/x1304)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x1305 = INT64_MAX;
	static uint32_t x1306 = 118U;
	int64_t t161 = INT64_MAX;

    t161 = (x1305|(x1306%(x1307/x1308)));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1329 = INT64_MIN;
	volatile int64_t x1330 = 53962634647824900LL;
	int32_t x1331 = INT32_MIN;
	int32_t x1332 = INT32_MIN;
	int64_t t162 = INT64_MIN;

    t162 = (x1329|(x1330%(x1331/x1332)));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1333 = INT64_MIN;
	int64_t x1334 = INT64_MIN;
	int8_t x1335 = INT8_MAX;
	int8_t x1336 = INT8_MAX;
	volatile int64_t t163 = INT64_MIN;

    t163 = (x1333|(x1334%(x1335/x1336)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x1345 = -1;
	uint64_t x1346 = 15164191745200LLU;
	int64_t x1347 = 2000433268662296223LL;
	static int32_t x1348 = -407866817;
	static uint64_t t164 = UINT64_MAX;

    t164 = (x1345|(x1346%(x1347/x1348)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x1361 = -1;
	uint64_t x1362 = 202248684560049LLU;
	static int64_t x1363 = INT64_MIN;
	int32_t x1364 = INT32_MAX;
	static uint64_t t165 = UINT64_MAX;

    t165 = (x1361|(x1362%(x1363/x1364)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1393 = 0U;
	volatile uint64_t x1394 = 6253354851741525086LLU;
	uint8_t x1395 = UINT8_MAX;
	int8_t x1396 = -1;
	volatile uint64_t t166 = 1963007012807996093LLU;

    t166 = (x1393|(x1394%(x1395/x1396)));

    if (t166 != 6253354851741525086LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1397 = INT64_MIN;
	uint32_t x1398 = 57297944U;
	volatile int64_t x1399 = 4004099155083310LL;
	int16_t x1400 = INT16_MIN;
	volatile int64_t t167 = 678235203740LL;

    t167 = (x1397|(x1398%(x1399/x1400)));

    if (t167 != -9223372036797477864LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1405 = 38U;
	volatile uint64_t x1407 = 68871930888579400LLU;
	int8_t x1408 = INT8_MAX;

    t168 = (x1405|(x1406%(x1407/x1408)));

    if (t168 != 2147483647LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1417 = -1;
	int16_t x1419 = INT16_MIN;

    t169 = (x1417|(x1418%(x1419/x1420)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1422 = 1513161848U;

    t170 = (x1421|(x1422%(x1423/x1424)));

    if (t170 != 4294967294U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1437 = 29;
	static int64_t x1438 = INT64_MIN;
	int32_t x1439 = -1;
	uint64_t x1440 = 3057731986539690LLU;

    t171 = (x1437|(x1438%(x1439/x1440)));

    if (t171 != 2013LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1441 = 2;
	static int8_t x1444 = 29;
	int32_t t172 = -1;

    t172 = (x1441|(x1442%(x1443/x1444)));

    if (t172 != 2) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1449 = 4U;
	uint32_t x1450 = 3U;
	uint8_t x1452 = 1U;
	uint32_t t173 = 13U;

    t173 = (x1449|(x1450%(x1451/x1452)));

    if (t173 != 7U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x1461 = 340046U;
	int32_t x1463 = -1;
	volatile int8_t x1464 = -1;
	uint32_t t174 = 77U;

    t174 = (x1461|(x1462%(x1463/x1464)));

    if (t174 != 340046U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1477 = INT16_MIN;
	int64_t x1478 = INT64_MAX;
	int32_t x1480 = INT32_MAX;
	uint64_t t175 = 53128322420622853LLU;

    t175 = (x1477|(x1478%(x1479/x1480)));

    if (t175 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1481 = INT16_MAX;
	int8_t x1482 = INT8_MAX;
	int64_t x1483 = 554346380638420LL;
	int8_t x1484 = -1;
	int64_t t176 = 469875LL;

    t176 = (x1481|(x1482%(x1483/x1484)));

    if (t176 != 32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1489 = 1U;
	volatile uint64_t x1490 = 5515183110380023LLU;
	static int32_t x1491 = INT32_MIN;
	volatile uint64_t t177 = 1747962LLU;

    t177 = (x1489|(x1490%(x1491/x1492)));

    if (t177 != 50814335LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1493 = -1;
	int8_t x1494 = INT8_MIN;
	int16_t x1495 = INT16_MAX;
	int32_t x1496 = -489;
	volatile int32_t t178 = -1694;

    t178 = (x1493|(x1494%(x1495/x1496)));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1498 = 58U;
	volatile int64_t t179 = INT64_MAX;

    t179 = (x1497|(x1498%(x1499/x1500)));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1513 = -1LL;
	int8_t x1514 = -1;
	uint64_t x1515 = UINT64_MAX;
	uint64_t t180 = UINT64_MAX;

    t180 = (x1513|(x1514%(x1515/x1516)));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1517 = INT32_MAX;
	static int8_t x1518 = INT8_MIN;
	int16_t x1520 = INT16_MIN;
	int64_t t181 = 13LL;

    t181 = (x1517|(x1518%(x1519/x1520)));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1521 = 28;
	static uint16_t x1522 = 2U;
	int32_t x1523 = INT32_MIN;
	int16_t x1524 = 53;

    t182 = (x1521|(x1522%(x1523/x1524)));

    if (t182 != 30) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint8_t x1525 = UINT8_MAX;
	uint64_t x1526 = 5562617369468991891LLU;
	int64_t x1527 = INT64_MIN;
	int64_t x1528 = INT64_MIN;
	volatile uint64_t t183 = 1326928LLU;

    t183 = (x1525|(x1526%(x1527/x1528)));

    if (t183 != 255LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1530 = INT32_MAX;
	int64_t x1531 = -107205544LL;
	int16_t x1532 = 236;
	static uint64_t t184 = 108LLU;

    t184 = (x1529|(x1530%(x1531/x1532)));

    if (t184 != 2591623785438903LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1533 = -1LL;
	uint8_t x1534 = 60U;
	int16_t x1535 = 245;
	int8_t x1536 = 4;
	static volatile int64_t t185 = -76168LL;

    t185 = (x1533|(x1534%(x1535/x1536)));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1543 = 104901926U;
	uint16_t x1544 = 3370U;
	volatile uint32_t t186 = 2566920U;

    t186 = (x1541|(x1542%(x1543/x1544)));

    if (t186 != 255U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1549 = 177901U;
	int32_t x1550 = INT32_MAX;
	int64_t x1551 = INT64_MIN;
	int32_t x1552 = -88;
	int64_t t187 = -50249LL;

    t187 = (x1549|(x1550%(x1551/x1552)));

    if (t187 != 2147483647LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1557 = UINT64_MAX;
	int64_t x1558 = INT64_MIN;
	uint32_t x1559 = UINT32_MAX;
	int8_t x1560 = INT8_MIN;
	uint64_t t188 = UINT64_MAX;

    t188 = (x1557|(x1558%(x1559/x1560)));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1562 = 3;

    t189 = (x1561|(x1562%(x1563/x1564)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1565 = INT8_MIN;
	uint64_t x1566 = 7LLU;
	int32_t x1567 = INT32_MIN;
	uint8_t x1568 = 112U;
	uint64_t t190 = 1434501523LLU;

    t190 = (x1565|(x1566%(x1567/x1568)));

    if (t190 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1573 = INT8_MIN;
	int32_t x1574 = INT32_MIN;
	int8_t x1576 = INT8_MIN;
	volatile int32_t t191 = 4;

    t191 = (x1573|(x1574%(x1575/x1576)));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1585 = UINT64_MAX;
	int64_t x1586 = INT64_MAX;
	static int16_t x1587 = INT16_MAX;
	static int8_t x1588 = 24;

    t192 = (x1585|(x1586%(x1587/x1588)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1593 = INT64_MIN;
	volatile int16_t x1594 = 908;
	uint64_t x1595 = 479244LLU;
	uint32_t x1596 = 7U;
	static volatile uint64_t t193 = 60955LLU;

    t193 = (x1593|(x1594%(x1595/x1596)));

    if (t193 != 9223372036854776716LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1597 = -1;
	static int16_t x1598 = -1;
	int64_t x1599 = -428486446LL;
	static volatile int64_t t194 = -25LL;

    t194 = (x1597|(x1598%(x1599/x1600)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1607 = UINT32_MAX;
	static volatile uint16_t x1608 = 10491U;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (x1605|(x1606%(x1607/x1608)));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1609 = UINT8_MAX;
	uint16_t x1611 = UINT16_MAX;
	volatile int16_t x1612 = 14;
	static int32_t t196 = 20;

    t196 = (x1609|(x1610%(x1611/x1612)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1613 = 5;
	volatile uint64_t x1614 = 18720784927802LLU;
	int16_t x1615 = INT16_MAX;
	int8_t x1616 = INT8_MIN;
	uint64_t t197 = 95LLU;

    t197 = (x1613|(x1614%(x1615/x1616)));

    if (t197 != 18720784927807LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1629 = INT32_MIN;
	int16_t x1630 = -2;
	volatile int32_t x1631 = INT32_MAX;
	int32_t x1632 = -487715247;
	static int32_t t198 = -629981;

    t198 = (x1629|(x1630%(x1631/x1632)));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1657 = INT8_MIN;
	int64_t x1658 = INT64_MIN;
	int64_t t199 = -438LL;

    t199 = (x1657|(x1658%(x1659/x1660)));

    if (t199 != -128LL) { NG(); } else { ; }
	
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

