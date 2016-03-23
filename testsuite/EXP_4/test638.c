
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

static volatile int64_t x7 = INT64_MIN;
uint8_t x26 = UINT8_MAX;
volatile int64_t x56 = INT64_MAX;
volatile int32_t t5 = -9697;
uint8_t x58 = UINT8_MAX;
int64_t x78 = 21LL;
volatile int16_t x84 = 4;
static volatile int32_t t10 = 7;
int64_t x102 = INT64_MIN;
uint32_t x104 = UINT32_MAX;
volatile int16_t x128 = INT16_MIN;
volatile int32_t t16 = -13684746;
uint16_t x144 = 63U;
volatile int32_t x177 = INT32_MIN;
int8_t x180 = -1;
static volatile int8_t x207 = -1;
volatile uint32_t x209 = 0U;
int8_t x211 = -3;
int32_t t26 = -1;
static volatile int32_t t28 = -2671;
uint8_t x221 = 3U;
int16_t x226 = INT16_MAX;
int16_t x229 = 1;
volatile int32_t t31 = 226876;
volatile int8_t x235 = INT8_MIN;
volatile int32_t t32 = 480324498;
uint8_t x237 = 14U;
int64_t x239 = -142435LL;
int32_t t33 = 1516909;
int8_t x242 = -1;
volatile int8_t x248 = INT8_MAX;
int32_t t36 = 9298;
int64_t x256 = -17LL;
volatile int32_t t39 = 7198058;
int32_t x273 = INT32_MIN;
int16_t x281 = -22;
static volatile uint16_t x293 = 9622U;
volatile int32_t t43 = -16081;
uint64_t x305 = UINT64_MAX;
int16_t x306 = INT16_MIN;
volatile int8_t x349 = 46;
int16_t x355 = INT16_MIN;
volatile uint64_t x379 = UINT64_MAX;
int32_t t52 = 3759860;
int32_t x389 = INT32_MIN;
static uint64_t x401 = 11953346619017LLU;
int16_t x402 = INT16_MIN;
int32_t x409 = 2887;
static int8_t x414 = INT8_MIN;
int8_t x416 = -1;
int64_t x429 = INT64_MAX;
int16_t x433 = 2;
int16_t x435 = INT16_MIN;
int8_t x465 = -2;
int64_t x466 = 36444855LL;
static volatile int32_t t63 = 2;
static int16_t x477 = INT16_MIN;
volatile uint32_t x478 = 744U;
volatile int32_t t67 = -228698384;
uint8_t x554 = UINT8_MAX;
volatile uint16_t x555 = 333U;
volatile int32_t x562 = INT32_MAX;
int32_t x563 = INT32_MAX;
int32_t t72 = -768;
uint8_t x613 = 126U;
int16_t x616 = -1;
int8_t x621 = INT8_MIN;
static volatile int64_t x623 = INT64_MIN;
int8_t x626 = -1;
static uint16_t x633 = 6906U;
int32_t x636 = 579056884;
uint64_t x639 = UINT64_MAX;
volatile int8_t x644 = INT8_MIN;
static int32_t x666 = -1;
static int32_t t80 = 445957;
uint8_t x693 = 0U;
static uint64_t x695 = UINT64_MAX;
int32_t t83 = 1;
static uint16_t x702 = UINT16_MAX;
static int32_t x727 = INT32_MAX;
int16_t x755 = INT16_MAX;
int16_t x763 = INT16_MIN;
static int32_t x764 = -10;
int32_t t91 = -98536182;
int8_t x787 = INT8_MIN;
int32_t x789 = -13;
uint16_t x791 = 8U;
static uint8_t x803 = 5U;
uint16_t x804 = 3U;
static int32_t t96 = -2;
int16_t x809 = 65;
int8_t x821 = -1;
int8_t x823 = INT8_MIN;
volatile int64_t x868 = -1LL;
int32_t x888 = INT32_MIN;
int64_t x894 = 324302028861LL;
int32_t t104 = -31715545;
uint8_t x921 = 1U;
volatile int32_t t110 = -1003;
uint32_t x960 = 22005U;
int32_t t111 = 34934921;
int32_t x963 = INT32_MAX;
int8_t x973 = -1;
static int16_t x974 = 0;
int64_t x975 = -123800LL;
volatile int64_t x981 = INT64_MIN;
uint64_t x982 = UINT64_MAX;
uint16_t x992 = 142U;
volatile int16_t x1006 = -1;
int64_t x1039 = -14305823037651653LL;
int8_t x1040 = 55;
int32_t t119 = 1815;
static volatile int8_t x1050 = -1;
volatile int16_t x1055 = -1;
int16_t x1070 = 10;
static volatile int32_t t123 = -68016;
int32_t t125 = -116;
int8_t x1096 = INT8_MAX;
int32_t t129 = -907;
volatile int32_t t131 = -122494;
uint32_t x1146 = UINT32_MAX;
static uint16_t x1159 = 2811U;
int32_t t133 = 870;
int16_t x1170 = INT16_MIN;
int32_t x1177 = 2025;
uint16_t x1183 = 2620U;
static int8_t x1187 = INT8_MIN;
volatile int32_t t138 = -22892;
uint64_t x1195 = UINT64_MAX;
uint32_t x1196 = 27U;
int64_t x1210 = -1LL;
static uint8_t x1212 = UINT8_MAX;
static int16_t x1217 = INT16_MIN;
volatile int16_t x1219 = INT16_MIN;
int8_t x1225 = INT8_MIN;
int32_t x1232 = -1;
int16_t x1238 = -1;
int32_t x1239 = INT32_MAX;
uint16_t x1247 = 117U;
static int32_t x1248 = -1;
int32_t t147 = 792635063;
volatile int32_t x1249 = INT32_MIN;
volatile int16_t x1252 = INT16_MAX;
int32_t x1274 = -1;
int32_t t150 = 1;
static int8_t x1297 = 1;
static uint32_t x1328 = UINT32_MAX;
int8_t x1341 = INT8_MIN;
int64_t x1359 = -1LL;
volatile int32_t x1363 = 13461;
uint16_t x1383 = 17528U;
int64_t x1390 = -25878150665LL;
volatile int16_t x1391 = INT16_MIN;
int8_t x1392 = INT8_MAX;
int8_t x1408 = INT8_MAX;
volatile uint16_t x1415 = UINT16_MAX;
volatile int32_t t167 = -3745;
int32_t t170 = -395377015;
uint64_t x1440 = 15795468889679LLU;
uint32_t x1448 = 1U;
static uint16_t x1491 = 1U;
uint8_t x1494 = 14U;
int32_t t179 = -8;
static int32_t x1537 = INT32_MIN;
int32_t x1538 = -54;
uint16_t x1545 = 304U;
uint8_t x1561 = 29U;
volatile int16_t x1567 = -7;
uint64_t x1570 = 10LLU;
volatile int32_t t190 = -272651905;
int64_t x1591 = INT64_MIN;
int64_t x1592 = INT64_MAX;
int64_t x1600 = -326LL;
volatile int32_t t192 = -10;
static int16_t x1601 = -1440;
int8_t x1613 = -1;
static int32_t t195 = -92;
int16_t x1637 = INT16_MIN;
volatile uint8_t x1640 = 25U;
static volatile int16_t x1645 = INT16_MIN;
volatile int32_t t198 = -3;
static int16_t x1652 = 112;


void f0(void) {
    	int16_t x5 = -872;
	uint32_t x6 = UINT32_MAX;
	int32_t x8 = -184674402;
	volatile int32_t t0 = 57;

    t0 = (x5==(x6/(x7/x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x25 = 4U;
	uint64_t x27 = 134192547359LLU;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t1 = 10942;

    t1 = (x25==(x26/(x27/x28)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x37 = UINT64_MAX;
	uint16_t x38 = 1038U;
	uint16_t x39 = 2U;
	uint16_t x40 = 2U;
	int32_t t2 = 6162702;

    t2 = (x37==(x38/(x39/x40)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	volatile int32_t x43 = INT32_MIN;
	int16_t x44 = -107;
	volatile int32_t t3 = 33;

    t3 = (x41==(x42/(x43/x44)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = 373U;
	int16_t x52 = 83;
	static volatile int32_t t4 = -13;

    t4 = (x49==(x50/(x51/x52)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x53 = INT32_MIN;
	volatile int32_t x54 = -1;
	int64_t x55 = INT64_MIN;

    t5 = (x53==(x54/(x55/x56)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x57 = 525U;
	volatile int8_t x59 = -1;
	static uint64_t x60 = UINT64_MAX;
	int32_t t6 = -53592;

    t6 = (x57==(x58/(x59/x60)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = 280;
	int8_t x64 = INT8_MAX;
	int32_t t7 = -21380842;

    t7 = (x61==(x62/(x63/x64)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x69 = 0;
	int32_t x70 = INT32_MAX;
	int32_t x71 = -181390240;
	volatile uint64_t x72 = 607156555971233LLU;
	volatile int32_t t8 = -12341656;

    t8 = (x69==(x70/(x71/x72)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x77 = -390768074388LL;
	int32_t x79 = INT32_MAX;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t9 = 1066605090;

    t9 = (x77==(x78/(x79/x80)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x81 = INT64_MIN;
	static int32_t x82 = -1;
	int16_t x83 = INT16_MIN;

    t10 = (x81==(x82/(x83/x84)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x101 = -1;
	int64_t x103 = INT64_MIN;
	int32_t t11 = 32048300;

    t11 = (x101==(x102/(x103/x104)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 4832453U;
	uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = INT8_MIN;
	static volatile int32_t t12 = -1444338;

    t12 = (x113==(x114/(x115/x116)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x118 = -1;
	static int8_t x119 = INT8_MIN;
	uint8_t x120 = 43U;
	int32_t t13 = 26597;

    t13 = (x117==(x118/(x119/x120)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x121 = 24U;
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t14 = -3;

    t14 = (x121==(x122/(x123/x124)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x125 = INT64_MIN;
	static int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MAX;
	static volatile int32_t t15 = -28862637;

    t15 = (x125==(x126/(x127/x128)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x129 = INT16_MAX;
	volatile int32_t x130 = -1;
	uint64_t x131 = 447310285176843LLU;
	volatile uint8_t x132 = UINT8_MAX;

    t16 = (x129==(x130/(x131/x132)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x141 = -456125987LL;
	int8_t x142 = INT8_MAX;
	volatile uint32_t x143 = 1972U;
	volatile int32_t t17 = -5819237;

    t17 = (x141==(x142/(x143/x144)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x153 = UINT32_MAX;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	volatile int8_t x156 = INT8_MIN;
	int32_t t18 = 262245333;

    t18 = (x153==(x154/(x155/x156)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x157 = 7U;
	int16_t x158 = 13306;
	static int64_t x159 = -16937629348894677LL;
	int16_t x160 = 13000;
	static int32_t t19 = -14956633;

    t19 = (x157==(x158/(x159/x160)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x173 = 1206;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MAX;
	uint16_t x176 = 154U;
	volatile int32_t t20 = -1259963;

    t20 = (x173==(x174/(x175/x176)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x178 = UINT32_MAX;
	int8_t x179 = 28;
	static int32_t t21 = -12619;

    t21 = (x177==(x178/(x179/x180)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x181 = INT16_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t22 = 706150110;

    t22 = (x181==(x182/(x183/x184)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 275731LLU;
	volatile uint8_t x200 = 10U;
	static volatile int32_t t23 = -1863128;

    t23 = (x197==(x198/(x199/x200)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x201 = 486876914U;
	uint8_t x202 = UINT8_MAX;
	static volatile int16_t x203 = -2488;
	static int64_t x204 = -1LL;
	volatile int32_t t24 = -1;

    t24 = (x201==(x202/(x203/x204)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x205 = 1132;
	uint32_t x206 = 1504U;
	uint32_t x208 = UINT32_MAX;
	int32_t t25 = -430301;

    t25 = (x205==(x206/(x207/x208)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x210 = -1813;
	static volatile int64_t x212 = -1LL;

    t26 = (x209==(x210/(x211/x212)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x213 = 726804013U;
	uint16_t x214 = 27U;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = -1LL;
	int32_t t27 = 155381596;

    t27 = (x213==(x214/(x215/x216)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x217 = -11396;
	int64_t x218 = -1LL;
	volatile int32_t x219 = INT32_MAX;
	uint16_t x220 = 29451U;

    t28 = (x217==(x218/(x219/x220)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t29 = -1;

    t29 = (x221==(x222/(x223/x224)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x225 = INT32_MIN;
	int16_t x227 = 135;
	uint8_t x228 = 100U;
	int32_t t30 = -2917914;

    t30 = (x225==(x226/(x227/x228)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MIN;

    t31 = (x229==(x230/(x231/x232)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x233 = 995U;
	uint64_t x234 = 2325864567557112LLU;
	int8_t x236 = -1;

    t32 = (x233==(x234/(x235/x236)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x238 = -1;
	int8_t x240 = -1;

    t33 = (x237==(x238/(x239/x240)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x241 = UINT64_MAX;
	int8_t x243 = 5;
	int8_t x244 = -4;
	volatile int32_t t34 = -61462365;

    t34 = (x241==(x242/(x243/x244)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x245 = 22137U;
	volatile uint16_t x246 = 10373U;
	int16_t x247 = INT16_MAX;
	static int32_t t35 = -14351039;

    t35 = (x245==(x246/(x247/x248)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x249 = INT32_MIN;
	uint64_t x250 = 205938320491896471LLU;
	int16_t x251 = 5798;
	static int64_t x252 = -1LL;

    t36 = (x249==(x250/(x251/x252)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x253 = 1311U;
	uint32_t x254 = UINT32_MAX;
	volatile int32_t x255 = INT32_MAX;
	static volatile int32_t t37 = -797119403;

    t37 = (x253==(x254/(x255/x256)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x261 = 42U;
	volatile uint32_t x262 = UINT32_MAX;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t38 = -2;

    t38 = (x261==(x262/(x263/x264)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x265 = INT16_MIN;
	volatile int32_t x266 = INT32_MAX;
	int8_t x267 = INT8_MIN;
	uint8_t x268 = 2U;

    t39 = (x265==(x266/(x267/x268)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x274 = 134LLU;
	int32_t x275 = 14096;
	uint8_t x276 = 1U;
	volatile int32_t t40 = 31377502;

    t40 = (x273==(x274/(x275/x276)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x277 = UINT8_MAX;
	int32_t x278 = 47;
	volatile int64_t x279 = INT64_MIN;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t41 = -33;

    t41 = (x277==(x278/(x279/x280)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x282 = UINT16_MAX;
	uint8_t x283 = UINT8_MAX;
	int16_t x284 = -1;
	int32_t t42 = -109451977;

    t42 = (x281==(x282/(x283/x284)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x294 = -1LL;
	uint32_t x295 = 26097079U;
	int64_t x296 = -1LL;

    t43 = (x293==(x294/(x295/x296)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x307 = INT16_MAX;
	volatile int8_t x308 = -1;
	static volatile int32_t t44 = -1042785;

    t44 = (x305==(x306/(x307/x308)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 342941718240249LLU;
	uint16_t x327 = 154U;
	uint8_t x328 = 101U;
	int32_t t45 = -5;

    t45 = (x325==(x326/(x327/x328)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x333 = 18;
	int64_t x334 = INT64_MIN;
	volatile int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t46 = 1674;

    t46 = (x333==(x334/(x335/x336)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x337 = INT32_MAX;
	volatile uint32_t x338 = UINT32_MAX;
	static int64_t x339 = INT64_MIN;
	uint64_t x340 = 2018667811611454LLU;
	static volatile int32_t t47 = -1235841;

    t47 = (x337==(x338/(x339/x340)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	uint32_t x352 = 114329U;
	volatile int32_t t48 = -6;

    t48 = (x349==(x350/(x351/x352)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x353 = 40612855U;
	uint8_t x354 = UINT8_MAX;
	uint32_t x356 = 547829091U;
	int32_t t49 = 49;

    t49 = (x353==(x354/(x355/x356)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x357 = -1;
	int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	volatile uint32_t x360 = 154U;
	int32_t t50 = 464625;

    t50 = (x357==(x358/(x359/x360)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x373 = 173198;
	volatile uint32_t x374 = UINT32_MAX;
	static int32_t x375 = INT32_MAX;
	int32_t x376 = -1;
	int32_t t51 = 727010758;

    t51 = (x373==(x374/(x375/x376)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x377 = UINT8_MAX;
	uint16_t x378 = UINT16_MAX;
	uint16_t x380 = 109U;

    t52 = (x377==(x378/(x379/x380)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x385 = 220751446;
	int64_t x386 = INT64_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	volatile int32_t t53 = 131100074;

    t53 = (x385==(x386/(x387/x388)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x390 = INT64_MAX;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = 12;
	int32_t t54 = -7585;

    t54 = (x389==(x390/(x391/x392)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x403 = INT32_MAX;
	int16_t x404 = 28;
	volatile int32_t t55 = 20012;

    t55 = (x401==(x402/(x403/x404)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x410 = 169465866638LLU;
	int8_t x411 = -1;
	uint32_t x412 = 3U;
	volatile int32_t t56 = 1023786;

    t56 = (x409==(x410/(x411/x412)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x413 = 6036053423667527208LLU;
	uint16_t x415 = UINT16_MAX;
	static volatile int32_t t57 = -6;

    t57 = (x413==(x414/(x415/x416)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MIN;
	static volatile int8_t x432 = INT8_MIN;
	static int32_t t58 = 12555;

    t58 = (x429==(x430/(x431/x432)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x434 = -1LL;
	static int8_t x436 = INT8_MIN;
	volatile int32_t t59 = 396611973;

    t59 = (x433==(x434/(x435/x436)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x441 = -15;
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MAX;
	static int8_t x444 = 17;
	int32_t t60 = -64316794;

    t60 = (x441==(x442/(x443/x444)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x453 = 4891U;
	uint8_t x454 = UINT8_MAX;
	uint8_t x455 = 111U;
	int32_t x456 = -1;
	static volatile int32_t t61 = 14141;

    t61 = (x453==(x454/(x455/x456)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x457 = INT16_MIN;
	int64_t x458 = -990355022328LL;
	uint8_t x459 = UINT8_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t62 = -75994025;

    t62 = (x457==(x458/(x459/x460)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x467 = 13604873689LL;
	uint32_t x468 = UINT32_MAX;

    t63 = (x465==(x466/(x467/x468)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x479 = 117222253;
	volatile uint8_t x480 = 94U;
	volatile int32_t t64 = -15722;

    t64 = (x477==(x478/(x479/x480)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x481 = INT32_MIN;
	int8_t x482 = -1;
	int64_t x483 = INT64_MIN;
	uint32_t x484 = 19U;
	volatile int32_t t65 = 4;

    t65 = (x481==(x482/(x483/x484)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x489 = INT64_MAX;
	int16_t x490 = -928;
	int64_t x491 = INT64_MIN;
	static int8_t x492 = 1;
	int32_t t66 = -32368;

    t66 = (x489==(x490/(x491/x492)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint16_t x514 = UINT16_MAX;
	int64_t x515 = -135707495972LL;
	int16_t x516 = INT16_MAX;

    t67 = (x513==(x514/(x515/x516)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x553 = INT16_MIN;
	volatile int8_t x556 = INT8_MIN;
	volatile int32_t t68 = 7;

    t68 = (x553==(x554/(x555/x556)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x561 = INT32_MAX;
	int8_t x564 = INT8_MAX;
	volatile int32_t t69 = -1974;

    t69 = (x561==(x562/(x563/x564)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x577 = INT32_MAX;
	int32_t x578 = -1;
	int8_t x579 = INT8_MIN;
	static int32_t x580 = 7;
	volatile int32_t t70 = -40540;

    t70 = (x577==(x578/(x579/x580)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x585 = INT64_MIN;
	int16_t x586 = 375;
	int64_t x587 = INT64_MAX;
	int16_t x588 = 19;
	volatile int32_t t71 = 1470;

    t71 = (x585==(x586/(x587/x588)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x589 = -1LL;
	uint16_t x590 = 442U;
	volatile int32_t x591 = -29546839;
	static uint16_t x592 = UINT16_MAX;

    t72 = (x589==(x590/(x591/x592)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x614 = 7;
	int32_t x615 = 6353;
	volatile int32_t t73 = 1;

    t73 = (x613==(x614/(x615/x616)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x622 = INT32_MIN;
	volatile uint64_t x624 = 3288706745406802797LLU;
	int32_t t74 = 278;

    t74 = (x621==(x622/(x623/x624)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x625 = UINT8_MAX;
	uint32_t x627 = 439312U;
	int16_t x628 = 26;
	int32_t t75 = -3797421;

    t75 = (x625==(x626/(x627/x628)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x634 = 13876310588252LLU;
	int32_t x635 = INT32_MIN;
	volatile int32_t t76 = -118;

    t76 = (x633==(x634/(x635/x636)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x637 = 1U;
	static int16_t x638 = 6389;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t77 = 13327733;

    t77 = (x637==(x638/(x639/x640)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MAX;
	volatile int32_t t78 = 198654512;

    t78 = (x641==(x642/(x643/x644)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x653 = -29;
	int64_t x654 = INT64_MIN;
	int16_t x655 = 1039;
	int8_t x656 = INT8_MIN;
	int32_t t79 = 29;

    t79 = (x653==(x654/(x655/x656)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x665 = INT8_MAX;
	int16_t x667 = -1848;
	int8_t x668 = INT8_MIN;

    t80 = (x665==(x666/(x667/x668)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x673 = INT16_MIN;
	uint32_t x674 = 119872U;
	int64_t x675 = INT64_MIN;
	int8_t x676 = 14;
	volatile int32_t t81 = -30;

    t81 = (x673==(x674/(x675/x676)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x685 = INT16_MAX;
	int8_t x686 = INT8_MIN;
	static int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t82 = -43635013;

    t82 = (x685==(x686/(x687/x688)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x694 = INT32_MAX;
	uint64_t x696 = 9961551519590LLU;

    t83 = (x693==(x694/(x695/x696)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x701 = -1;
	static int64_t x703 = 794740786LL;
	int32_t x704 = -1;
	volatile int32_t t84 = -40;

    t84 = (x701==(x702/(x703/x704)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x709 = INT64_MIN;
	int32_t x710 = INT32_MIN;
	uint64_t x711 = UINT64_MAX;
	int64_t x712 = INT64_MIN;
	static int32_t t85 = -24943110;

    t85 = (x709==(x710/(x711/x712)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x725 = INT32_MIN;
	volatile int8_t x726 = INT8_MAX;
	static int16_t x728 = INT16_MAX;
	volatile int32_t t86 = -2;

    t86 = (x725==(x726/(x727/x728)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x733 = UINT8_MAX;
	uint16_t x734 = UINT16_MAX;
	int16_t x735 = INT16_MIN;
	int16_t x736 = INT16_MAX;
	int32_t t87 = 588001533;

    t87 = (x733==(x734/(x735/x736)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x745 = INT8_MAX;
	int64_t x746 = 33605151706LL;
	int64_t x747 = INT64_MIN;
	uint32_t x748 = UINT32_MAX;
	static volatile int32_t t88 = -170478;

    t88 = (x745==(x746/(x747/x748)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x753 = -814;
	static volatile int32_t x754 = -1;
	static int16_t x756 = -1;
	int32_t t89 = -27;

    t89 = (x753==(x754/(x755/x756)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x761 = 85565;
	int64_t x762 = -186LL;
	static volatile int32_t t90 = 1218305;

    t90 = (x761==(x762/(x763/x764)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x777 = -916LL;
	int16_t x778 = INT16_MIN;
	uint16_t x779 = 151U;
	int8_t x780 = INT8_MIN;

    t91 = (x777==(x778/(x779/x780)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x781 = 109U;
	uint8_t x782 = 15U;
	volatile int64_t x783 = INT64_MIN;
	int16_t x784 = 54;
	volatile int32_t t92 = 1531428;

    t92 = (x781==(x782/(x783/x784)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x785 = UINT32_MAX;
	int64_t x786 = -667256364392LL;
	uint32_t x788 = 1089003U;
	int32_t t93 = -1850446;

    t93 = (x785==(x786/(x787/x788)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x790 = 29;
	int64_t x792 = -1LL;
	int32_t t94 = -1;

    t94 = (x789==(x790/(x791/x792)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x797 = INT64_MIN;
	static int8_t x798 = INT8_MAX;
	int64_t x799 = 4301916584551LL;
	int16_t x800 = INT16_MIN;
	int32_t t95 = -483;

    t95 = (x797==(x798/(x799/x800)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x801 = INT16_MAX;
	int64_t x802 = INT64_MIN;

    t96 = (x801==(x802/(x803/x804)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x810 = 2;
	int32_t x811 = 92798;
	volatile uint16_t x812 = 289U;
	int32_t t97 = 3;

    t97 = (x809==(x810/(x811/x812)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x822 = INT32_MIN;
	static int8_t x824 = INT8_MIN;
	static int32_t t98 = 4051;

    t98 = (x821==(x822/(x823/x824)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x833 = 0;
	int64_t x834 = INT64_MIN;
	static int32_t x835 = 204;
	static int64_t x836 = -1LL;
	static int32_t t99 = -47613605;

    t99 = (x833==(x834/(x835/x836)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x861 = UINT16_MAX;
	int8_t x862 = INT8_MIN;
	int64_t x863 = INT64_MIN;
	uint32_t x864 = 19U;
	int32_t t100 = -1345810;

    t100 = (x861==(x862/(x863/x864)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x865 = INT16_MIN;
	int16_t x866 = -7;
	int8_t x867 = INT8_MIN;
	volatile int32_t t101 = -2842501;

    t101 = (x865==(x866/(x867/x868)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x881 = 16460880569587975LLU;
	uint16_t x882 = 3U;
	uint64_t x883 = UINT64_MAX;
	volatile int64_t x884 = INT64_MAX;
	static int32_t t102 = -779016;

    t102 = (x881==(x882/(x883/x884)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x885 = -3848107458265928785LL;
	static int32_t x886 = INT32_MAX;
	int64_t x887 = INT64_MIN;
	static volatile int32_t t103 = 252181577;

    t103 = (x885==(x886/(x887/x888)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x893 = 7164U;
	static volatile int16_t x895 = INT16_MIN;
	volatile int64_t x896 = -1LL;

    t104 = (x893==(x894/(x895/x896)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x901 = -1LL;
	uint64_t x902 = UINT64_MAX;
	int64_t x903 = INT64_MIN;
	static uint8_t x904 = UINT8_MAX;
	int32_t t105 = -10538521;

    t105 = (x901==(x902/(x903/x904)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x917 = INT32_MIN;
	static int16_t x918 = INT16_MAX;
	int8_t x919 = -1;
	static int32_t x920 = -1;
	volatile int32_t t106 = 317;

    t106 = (x917==(x918/(x919/x920)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x922 = UINT32_MAX;
	int64_t x923 = 1531308LL;
	static uint16_t x924 = UINT16_MAX;
	static volatile int32_t t107 = -6744;

    t107 = (x921==(x922/(x923/x924)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x925 = INT8_MAX;
	uint32_t x926 = 59255U;
	volatile uint64_t x927 = 7217121246236876425LLU;
	uint32_t x928 = 1299208U;
	static volatile int32_t t108 = 181;

    t108 = (x925==(x926/(x927/x928)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x937 = UINT64_MAX;
	volatile int8_t x938 = 0;
	int64_t x939 = 20883218790989LL;
	uint16_t x940 = 724U;
	volatile int32_t t109 = 758;

    t109 = (x937==(x938/(x939/x940)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x941 = INT32_MAX;
	volatile uint64_t x942 = UINT64_MAX;
	int8_t x943 = INT8_MIN;
	int8_t x944 = 3;

    t110 = (x941==(x942/(x943/x944)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x957 = UINT32_MAX;
	volatile int32_t x958 = INT32_MIN;
	uint64_t x959 = 7705415834297LLU;

    t111 = (x957==(x958/(x959/x960)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x961 = 1923364LL;
	int32_t x962 = -1;
	int32_t x964 = -1;
	int32_t t112 = 123235767;

    t112 = (x961==(x962/(x963/x964)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x969 = INT8_MAX;
	static int16_t x970 = -1;
	int64_t x971 = 10626119592LL;
	static uint8_t x972 = 5U;
	int32_t t113 = -1529;

    t113 = (x969==(x970/(x971/x972)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x976 = INT8_MAX;
	static volatile int32_t t114 = -2817;

    t114 = (x973==(x974/(x975/x976)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x983 = 1142091U;
	uint16_t x984 = 274U;
	volatile int32_t t115 = 267545373;

    t115 = (x981==(x982/(x983/x984)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x989 = -430LL;
	int64_t x990 = -1LL;
	uint8_t x991 = UINT8_MAX;
	int32_t t116 = 289275938;

    t116 = (x989==(x990/(x991/x992)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x997 = 11U;
	volatile uint64_t x998 = 362LLU;
	volatile int32_t x999 = -1;
	int8_t x1000 = -1;
	static int32_t t117 = -3429785;

    t117 = (x997==(x998/(x999/x1000)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x1005 = UINT16_MAX;
	int16_t x1007 = INT16_MIN;
	volatile uint8_t x1008 = 106U;
	int32_t t118 = 0;

    t118 = (x1005==(x1006/(x1007/x1008)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1037 = 24LLU;
	int32_t x1038 = -96913;

    t119 = (x1037==(x1038/(x1039/x1040)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x1045 = -1LL;
	uint16_t x1046 = 1U;
	uint16_t x1047 = UINT16_MAX;
	int32_t x1048 = 54016;
	int32_t t120 = 249770;

    t120 = (x1045==(x1046/(x1047/x1048)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x1049 = UINT8_MAX;
	volatile uint64_t x1051 = UINT64_MAX;
	volatile int64_t x1052 = 1138568LL;
	int32_t t121 = -7375955;

    t121 = (x1049==(x1050/(x1051/x1052)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x1053 = -18;
	int32_t x1054 = INT32_MAX;
	volatile uint32_t x1056 = 108900U;
	static int32_t t122 = -6308529;

    t122 = (x1053==(x1054/(x1055/x1056)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x1069 = UINT32_MAX;
	volatile int8_t x1071 = INT8_MAX;
	volatile uint32_t x1072 = 29U;

    t123 = (x1069==(x1070/(x1071/x1072)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x1081 = INT8_MAX;
	int32_t x1082 = INT32_MIN;
	volatile int32_t x1083 = INT32_MAX;
	int32_t x1084 = 1;
	volatile int32_t t124 = 25384;

    t124 = (x1081==(x1082/(x1083/x1084)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x1085 = 468;
	uint8_t x1086 = 8U;
	int32_t x1087 = INT32_MIN;
	uint64_t x1088 = 17615015254LLU;

    t125 = (x1085==(x1086/(x1087/x1088)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x1093 = INT32_MAX;
	volatile int32_t x1094 = -1;
	int8_t x1095 = INT8_MIN;
	int32_t t126 = -7;

    t126 = (x1093==(x1094/(x1095/x1096)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1097 = INT32_MIN;
	int8_t x1098 = INT8_MIN;
	static volatile int32_t x1099 = INT32_MIN;
	int64_t x1100 = 304805319LL;
	int32_t t127 = -241961;

    t127 = (x1097==(x1098/(x1099/x1100)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1105 = INT16_MIN;
	static uint16_t x1106 = 2765U;
	uint16_t x1107 = UINT16_MAX;
	static volatile int32_t x1108 = -1;
	int32_t t128 = 346;

    t128 = (x1105==(x1106/(x1107/x1108)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x1133 = INT32_MIN;
	volatile int64_t x1134 = -1LL;
	int32_t x1135 = INT32_MIN;
	static int32_t x1136 = -10;

    t129 = (x1133==(x1134/(x1135/x1136)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x1137 = 281;
	int8_t x1138 = -1;
	uint64_t x1139 = 2593402511597952549LLU;
	volatile int32_t x1140 = 384;
	static volatile int32_t t130 = -5881535;

    t130 = (x1137==(x1138/(x1139/x1140)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x1141 = 2142125491LL;
	int16_t x1142 = 1;
	int64_t x1143 = INT64_MIN;
	int16_t x1144 = INT16_MIN;

    t131 = (x1141==(x1142/(x1143/x1144)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1145 = INT32_MIN;
	int64_t x1147 = INT64_MAX;
	volatile int32_t x1148 = INT32_MIN;
	volatile int32_t t132 = -4;

    t132 = (x1145==(x1146/(x1147/x1148)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x1157 = 6;
	int32_t x1158 = INT32_MIN;
	uint16_t x1160 = 24U;

    t133 = (x1157==(x1158/(x1159/x1160)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1161 = -3;
	int8_t x1162 = INT8_MIN;
	int8_t x1163 = 30;
	static int64_t x1164 = -1LL;
	volatile int32_t t134 = -978203502;

    t134 = (x1161==(x1162/(x1163/x1164)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x1169 = 1U;
	int16_t x1171 = INT16_MIN;
	int16_t x1172 = 1788;
	volatile int32_t t135 = 114;

    t135 = (x1169==(x1170/(x1171/x1172)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1178 = INT8_MAX;
	static int64_t x1179 = INT64_MIN;
	uint8_t x1180 = 12U;
	int32_t t136 = -2766;

    t136 = (x1177==(x1178/(x1179/x1180)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1181 = 829560689;
	int64_t x1182 = -13730474861598LL;
	int32_t x1184 = 2358;
	volatile int32_t t137 = -843466411;

    t137 = (x1181==(x1182/(x1183/x1184)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x1185 = 3366U;
	int64_t x1186 = -1LL;
	static volatile int64_t x1188 = -1LL;

    t138 = (x1185==(x1186/(x1187/x1188)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1193 = UINT16_MAX;
	int8_t x1194 = 4;
	int32_t t139 = 23;

    t139 = (x1193==(x1194/(x1195/x1196)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1201 = INT64_MAX;
	int8_t x1202 = INT8_MIN;
	int32_t x1203 = INT32_MIN;
	volatile int64_t x1204 = -1LL;
	int32_t t140 = 1799020;

    t140 = (x1201==(x1202/(x1203/x1204)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1209 = INT8_MIN;
	int32_t x1211 = INT32_MIN;
	volatile int32_t t141 = -603;

    t141 = (x1209==(x1210/(x1211/x1212)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1218 = 12LLU;
	static int16_t x1220 = -1;
	static int32_t t142 = -7396;

    t142 = (x1217==(x1218/(x1219/x1220)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1221 = UINT8_MAX;
	volatile uint32_t x1222 = 3U;
	uint32_t x1223 = UINT32_MAX;
	volatile uint16_t x1224 = 3968U;
	int32_t t143 = 842196;

    t143 = (x1221==(x1222/(x1223/x1224)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1226 = 2U;
	int32_t x1227 = -189;
	static uint64_t x1228 = 1526004061563497LLU;
	int32_t t144 = 52028;

    t144 = (x1225==(x1226/(x1227/x1228)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1229 = -1;
	int16_t x1230 = 11;
	volatile uint64_t x1231 = UINT64_MAX;
	int32_t t145 = 1522;

    t145 = (x1229==(x1230/(x1231/x1232)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1237 = -7;
	int32_t x1240 = INT32_MAX;
	volatile int32_t t146 = 3381489;

    t146 = (x1237==(x1238/(x1239/x1240)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1245 = 2U;
	volatile uint64_t x1246 = 3296420742058175LLU;

    t147 = (x1245==(x1246/(x1247/x1248)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1250 = INT32_MIN;
	volatile int32_t x1251 = -244634029;
	volatile int32_t t148 = 103;

    t148 = (x1249==(x1250/(x1251/x1252)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x1253 = -1;
	uint16_t x1254 = 45U;
	int64_t x1255 = INT64_MIN;
	int64_t x1256 = INT64_MAX;
	volatile int32_t t149 = -198188205;

    t149 = (x1253==(x1254/(x1255/x1256)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x1273 = -1;
	volatile int64_t x1275 = INT64_MIN;
	int16_t x1276 = 15;

    t150 = (x1273==(x1274/(x1275/x1276)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1281 = INT16_MAX;
	static int32_t x1282 = -1;
	volatile uint16_t x1283 = 7493U;
	uint8_t x1284 = 50U;
	volatile int32_t t151 = 635802639;

    t151 = (x1281==(x1282/(x1283/x1284)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x1285 = 818105086U;
	volatile int32_t x1286 = INT32_MAX;
	uint32_t x1287 = 47751237U;
	uint8_t x1288 = UINT8_MAX;
	int32_t t152 = 1165385;

    t152 = (x1285==(x1286/(x1287/x1288)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x1298 = -19;
	int64_t x1299 = INT64_MAX;
	int8_t x1300 = INT8_MAX;
	volatile int32_t t153 = 3;

    t153 = (x1297==(x1298/(x1299/x1300)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x1305 = -64;
	int16_t x1306 = INT16_MAX;
	uint64_t x1307 = UINT64_MAX;
	uint64_t x1308 = UINT64_MAX;
	volatile int32_t t154 = -6;

    t154 = (x1305==(x1306/(x1307/x1308)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1309 = UINT64_MAX;
	int64_t x1310 = 497LL;
	volatile uint64_t x1311 = UINT64_MAX;
	uint16_t x1312 = UINT16_MAX;
	static volatile int32_t t155 = 2808;

    t155 = (x1309==(x1310/(x1311/x1312)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1317 = 19U;
	uint16_t x1318 = 1U;
	int64_t x1319 = -1LL;
	static int8_t x1320 = -1;
	int32_t t156 = 13;

    t156 = (x1317==(x1318/(x1319/x1320)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x1325 = 0;
	uint8_t x1326 = 1U;
	uint64_t x1327 = UINT64_MAX;
	volatile int32_t t157 = -158950225;

    t157 = (x1325==(x1326/(x1327/x1328)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1342 = INT8_MAX;
	int16_t x1343 = -3;
	int8_t x1344 = -1;
	volatile int32_t t158 = -1;

    t158 = (x1341==(x1342/(x1343/x1344)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1345 = 5U;
	static int16_t x1346 = INT16_MIN;
	volatile int32_t x1347 = INT32_MIN;
	volatile int16_t x1348 = INT16_MIN;
	volatile int32_t t159 = 1;

    t159 = (x1345==(x1346/(x1347/x1348)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1357 = -112118343;
	static volatile int8_t x1358 = INT8_MIN;
	int8_t x1360 = 1;
	int32_t t160 = -1981;

    t160 = (x1357==(x1358/(x1359/x1360)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1361 = UINT64_MAX;
	int8_t x1362 = -7;
	static volatile int16_t x1364 = -1;
	int32_t t161 = -968;

    t161 = (x1361==(x1362/(x1363/x1364)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x1381 = -1;
	int16_t x1382 = 3066;
	int32_t x1384 = -1;
	int32_t t162 = 1567;

    t162 = (x1381==(x1382/(x1383/x1384)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1389 = 418;
	int32_t t163 = 393;

    t163 = (x1389==(x1390/(x1391/x1392)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1393 = INT32_MIN;
	int32_t x1394 = -134973;
	uint32_t x1395 = UINT32_MAX;
	volatile int32_t x1396 = INT32_MIN;
	volatile int32_t t164 = 6;

    t164 = (x1393==(x1394/(x1395/x1396)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1397 = INT16_MAX;
	volatile uint32_t x1398 = 37260U;
	volatile int32_t x1399 = 652540236;
	volatile int16_t x1400 = -1;
	static int32_t t165 = -1;

    t165 = (x1397==(x1398/(x1399/x1400)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1405 = INT16_MIN;
	int64_t x1406 = INT64_MIN;
	int64_t x1407 = INT64_MIN;
	volatile int32_t t166 = 38390450;

    t166 = (x1405==(x1406/(x1407/x1408)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x1413 = 13U;
	static int64_t x1414 = INT64_MIN;
	uint8_t x1416 = 10U;

    t167 = (x1413==(x1414/(x1415/x1416)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1421 = INT64_MAX;
	int16_t x1422 = 1452;
	uint32_t x1423 = UINT32_MAX;
	int32_t x1424 = INT32_MIN;
	volatile int32_t t168 = -16999907;

    t168 = (x1421==(x1422/(x1423/x1424)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1429 = -27;
	static int64_t x1430 = INT64_MIN;
	int16_t x1431 = -1;
	static uint64_t x1432 = UINT64_MAX;
	int32_t t169 = -6536398;

    t169 = (x1429==(x1430/(x1431/x1432)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1433 = INT16_MIN;
	int16_t x1434 = INT16_MIN;
	static uint16_t x1435 = UINT16_MAX;
	int8_t x1436 = INT8_MIN;

    t170 = (x1433==(x1434/(x1435/x1436)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1437 = -1LL;
	int32_t x1438 = 42;
	int32_t x1439 = -79115443;
	volatile int32_t t171 = -52629363;

    t171 = (x1437==(x1438/(x1439/x1440)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1445 = INT8_MIN;
	int64_t x1446 = INT64_MIN;
	volatile int8_t x1447 = -8;
	volatile int32_t t172 = 1;

    t172 = (x1445==(x1446/(x1447/x1448)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1449 = INT64_MIN;
	uint16_t x1450 = 3U;
	int64_t x1451 = -1LL;
	uint64_t x1452 = 2925LLU;
	static volatile int32_t t173 = -7729;

    t173 = (x1449==(x1450/(x1451/x1452)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x1453 = INT32_MAX;
	static int64_t x1454 = INT64_MIN;
	int8_t x1455 = INT8_MIN;
	uint64_t x1456 = 5838457654225684LLU;
	int32_t t174 = 4704384;

    t174 = (x1453==(x1454/(x1455/x1456)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1461 = INT16_MAX;
	uint16_t x1462 = 6U;
	int32_t x1463 = INT32_MIN;
	uint16_t x1464 = 18U;
	volatile int32_t t175 = 1;

    t175 = (x1461==(x1462/(x1463/x1464)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1477 = -1LL;
	int8_t x1478 = -1;
	volatile int16_t x1479 = INT16_MAX;
	int8_t x1480 = INT8_MIN;
	volatile int32_t t176 = -14603444;

    t176 = (x1477==(x1478/(x1479/x1480)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1489 = UINT32_MAX;
	int8_t x1490 = 17;
	volatile int64_t x1492 = -1LL;
	int32_t t177 = -2724217;

    t177 = (x1489==(x1490/(x1491/x1492)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1493 = INT64_MAX;
	uint64_t x1495 = 155278LLU;
	uint32_t x1496 = 1739U;
	volatile int32_t t178 = -215;

    t178 = (x1493==(x1494/(x1495/x1496)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1497 = INT32_MIN;
	int8_t x1498 = INT8_MAX;
	int16_t x1499 = 5076;
	int64_t x1500 = 1LL;

    t179 = (x1497==(x1498/(x1499/x1500)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1521 = -1;
	int64_t x1522 = INT64_MAX;
	int16_t x1523 = INT16_MAX;
	int16_t x1524 = INT16_MAX;
	int32_t t180 = 13;

    t180 = (x1521==(x1522/(x1523/x1524)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1525 = -4611LL;
	uint32_t x1526 = UINT32_MAX;
	int64_t x1527 = 137649067294547698LL;
	int32_t x1528 = INT32_MAX;
	int32_t t181 = 9438217;

    t181 = (x1525==(x1526/(x1527/x1528)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1529 = 53878875470172431LLU;
	volatile int64_t x1530 = INT64_MIN;
	static int32_t x1531 = INT32_MAX;
	int16_t x1532 = -54;
	volatile int32_t t182 = 28;

    t182 = (x1529==(x1530/(x1531/x1532)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x1539 = 5U;
	int16_t x1540 = -1;
	int32_t t183 = 53;

    t183 = (x1537==(x1538/(x1539/x1540)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1541 = UINT8_MAX;
	uint16_t x1542 = 1000U;
	volatile int32_t x1543 = INT32_MAX;
	int16_t x1544 = 6926;
	int32_t t184 = -1;

    t184 = (x1541==(x1542/(x1543/x1544)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1546 = INT16_MIN;
	uint64_t x1547 = UINT64_MAX;
	int8_t x1548 = -1;
	volatile int32_t t185 = 0;

    t185 = (x1545==(x1546/(x1547/x1548)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1549 = 705131LLU;
	int32_t x1550 = 55106;
	volatile int32_t x1551 = INT32_MIN;
	int16_t x1552 = INT16_MIN;
	volatile int32_t t186 = 1597675;

    t186 = (x1549==(x1550/(x1551/x1552)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1557 = 8006U;
	int64_t x1558 = 21317773435LL;
	volatile int64_t x1559 = -343256260696984LL;
	static uint32_t x1560 = 1745126394U;
	int32_t t187 = -103;

    t187 = (x1557==(x1558/(x1559/x1560)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x1562 = INT64_MAX;
	int16_t x1563 = -10545;
	int16_t x1564 = 398;
	volatile int32_t t188 = -5;

    t188 = (x1561==(x1562/(x1563/x1564)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1565 = INT32_MIN;
	int8_t x1566 = -1;
	volatile int32_t x1568 = -1;
	int32_t t189 = -7;

    t189 = (x1565==(x1566/(x1567/x1568)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1569 = INT8_MIN;
	int64_t x1571 = INT64_MIN;
	int64_t x1572 = 127209953LL;

    t190 = (x1569==(x1570/(x1571/x1572)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1589 = INT8_MIN;
	int16_t x1590 = -98;
	volatile int32_t t191 = -1;

    t191 = (x1589==(x1590/(x1591/x1592)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1597 = INT8_MIN;
	static int16_t x1598 = INT16_MAX;
	static volatile int64_t x1599 = INT64_MIN;

    t192 = (x1597==(x1598/(x1599/x1600)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1602 = INT32_MIN;
	int8_t x1603 = -1;
	int64_t x1604 = -1LL;
	volatile int32_t t193 = 142740996;

    t193 = (x1601==(x1602/(x1603/x1604)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1605 = 38LL;
	int16_t x1606 = -1;
	volatile int8_t x1607 = INT8_MIN;
	int8_t x1608 = INT8_MIN;
	int32_t t194 = 42;

    t194 = (x1605==(x1606/(x1607/x1608)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1614 = INT8_MAX;
	uint8_t x1615 = UINT8_MAX;
	volatile int8_t x1616 = -23;

    t195 = (x1613==(x1614/(x1615/x1616)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1625 = INT64_MIN;
	int16_t x1626 = 4;
	static uint64_t x1627 = UINT64_MAX;
	int32_t x1628 = -1502485;
	volatile int32_t t196 = -147843;

    t196 = (x1625==(x1626/(x1627/x1628)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1638 = 20927U;
	int64_t x1639 = INT64_MIN;
	int32_t t197 = 228705928;

    t197 = (x1637==(x1638/(x1639/x1640)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1646 = 18189731LL;
	uint8_t x1647 = 48U;
	static int64_t x1648 = -1LL;

    t198 = (x1645==(x1646/(x1647/x1648)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1649 = 15972159271LLU;
	uint32_t x1650 = UINT32_MAX;
	int64_t x1651 = 22738900LL;
	int32_t t199 = 7023;

    t199 = (x1649==(x1650/(x1651/x1652)));

    if (t199 != 0) { NG(); } else { ; }
	
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

