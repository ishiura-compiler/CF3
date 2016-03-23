
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

volatile int8_t x2 = INT8_MIN;
volatile uint16_t x7 = UINT16_MAX;
static uint32_t x9 = 1067U;
uint32_t t2 = 1U;
static volatile int8_t x29 = 34;
volatile int32_t x30 = -6377;
static volatile uint32_t x36 = 12466534U;
volatile uint32_t t4 = 3U;
int8_t x44 = 1;
volatile uint16_t x66 = 5384U;
volatile uint16_t x67 = UINT16_MAX;
volatile uint64_t t7 = UINT64_MAX;
static int64_t x71 = INT64_MIN;
uint64_t x81 = 395505705LLU;
volatile uint64_t t9 = 546578972028LLU;
uint32_t x114 = UINT32_MAX;
volatile int32_t t10 = -96876;
int32_t x119 = 1;
volatile uint32_t t11 = 1138340U;
static volatile int64_t x122 = INT64_MAX;
volatile uint64_t x140 = 53179LLU;
int64_t x142 = 11LL;
int8_t x143 = INT8_MAX;
static int32_t x151 = -1;
volatile int32_t t17 = 0;
uint8_t x161 = 30U;
static int8_t x163 = INT8_MIN;
volatile int8_t x164 = -16;
volatile uint16_t x170 = 19U;
static int32_t t20 = 92439863;
static uint8_t x178 = UINT8_MAX;
volatile int64_t x180 = -647776LL;
volatile int32_t t21 = 75;
int32_t x184 = INT32_MAX;
uint16_t x197 = 29U;
int8_t x200 = -63;
static int32_t x212 = 2;
int16_t x214 = -1;
int64_t x215 = INT64_MIN;
int32_t t27 = -1418;
int16_t x231 = INT16_MIN;
uint64_t t29 = 6LLU;
volatile uint8_t x236 = 2U;
uint64_t x237 = 38806934031655367LLU;
int16_t x238 = -1;
volatile int64_t x251 = INT64_MIN;
static uint64_t x297 = UINT64_MAX;
uint8_t x304 = UINT8_MAX;
static uint8_t x305 = 38U;
uint16_t x307 = UINT16_MAX;
uint32_t x309 = 527874U;
volatile uint32_t t39 = 0U;
int32_t x338 = 7;
uint64_t x340 = 15018362370277485LLU;
volatile uint8_t x341 = 17U;
static int16_t x343 = 1247;
int16_t x358 = -129;
static volatile uint64_t x360 = 409LLU;
static uint64_t x363 = 1964LLU;
uint8_t x381 = 73U;
uint16_t x384 = 1U;
volatile uint32_t t48 = 99985806U;
int8_t x413 = 10;
int32_t x414 = INT32_MIN;
int32_t x415 = 6;
volatile int64_t x443 = INT64_MIN;
volatile int32_t t51 = 5870;
int32_t x445 = INT32_MAX;
int8_t x446 = -1;
uint32_t x461 = 2021505U;
int16_t x475 = -1;
int16_t x476 = -218;
static volatile uint16_t x482 = UINT16_MAX;
int32_t t56 = -40;
int16_t x498 = 236;
static int64_t x507 = -1LL;
uint16_t x508 = UINT16_MAX;
int32_t t59 = 6;
uint64_t x519 = 456819332260133630LLU;
int8_t x541 = 1;
static volatile int32_t t64 = -16651681;
static uint32_t x555 = UINT32_MAX;
uint8_t x557 = 41U;
uint32_t t67 = 10736U;
static int64_t x575 = INT64_MIN;
static int8_t x586 = INT8_MIN;
uint64_t x589 = 10LLU;
int64_t x595 = INT64_MIN;
int64_t x618 = INT64_MIN;
volatile int16_t x663 = INT16_MIN;
uint32_t x664 = 1U;
volatile int32_t t79 = -459052729;
int16_t x674 = -59;
uint32_t t80 = 229U;
uint32_t x688 = 10954U;
int8_t x694 = 5;
volatile uint8_t x695 = 91U;
volatile uint64_t t82 = 13LLU;
int8_t x700 = INT8_MIN;
volatile int32_t t83 = -15753338;
uint8_t x702 = 2U;
uint32_t x703 = 946183U;
uint8_t x713 = 0U;
uint32_t t86 = 67020902U;
int64_t x748 = INT64_MIN;
static volatile int16_t x763 = -1;
static uint32_t x768 = 1441U;
static uint32_t t91 = 467349128U;
static uint16_t x775 = 640U;
int32_t t93 = 22101;
volatile int64_t x777 = 130598LL;
uint32_t x787 = 40283638U;
uint64_t x795 = UINT64_MAX;
int32_t t96 = 92;
volatile uint32_t x811 = 14025U;
int16_t x822 = INT16_MAX;
int16_t x824 = INT16_MIN;
uint8_t x827 = UINT8_MAX;
uint16_t x831 = 220U;
int32_t x834 = INT32_MIN;
int16_t x837 = INT16_MAX;
int32_t t104 = -812180299;
static uint16_t x857 = 4544U;
int16_t x858 = 7;
int32_t x867 = -241621;
int8_t x872 = 0;
static int32_t t107 = -302884192;
uint32_t x888 = 3163272U;
uint64_t x889 = UINT64_MAX;
static uint64_t x892 = 499LLU;
uint64_t t111 = 486877569751132LLU;
int64_t x894 = INT64_MIN;
static int8_t x902 = INT8_MIN;
uint8_t x904 = UINT8_MAX;
volatile int32_t t113 = 160;
static uint32_t x905 = 195U;
uint64_t x906 = 0LLU;
uint64_t x913 = 120612360312924LLU;
static int32_t x915 = -1;
static int32_t x916 = -1;
int16_t x918 = -1;
volatile int32_t t116 = -1498;
volatile uint64_t t118 = 63810LLU;
int16_t x938 = -1;
uint32_t t120 = 0U;
volatile int32_t x991 = INT32_MIN;
int32_t x993 = INT32_MAX;
uint64_t x995 = 61687LLU;
int64_t x1006 = INT64_MIN;
volatile int32_t t127 = -8374;
static volatile uint64_t t129 = 456918889LLU;
static int32_t x1056 = -55509968;
uint16_t x1068 = 3U;
volatile int8_t x1069 = INT8_MAX;
int32_t x1071 = INT32_MIN;
uint32_t x1089 = UINT32_MAX;
uint8_t x1100 = UINT8_MAX;
int32_t x1119 = -1;
volatile int64_t x1126 = -1LL;
int8_t x1127 = INT8_MAX;
static int32_t x1128 = INT32_MAX;
static int8_t x1145 = INT8_MAX;
static int32_t x1148 = INT32_MIN;
int32_t x1183 = -1;
volatile uint8_t x1196 = 49U;
uint8_t x1213 = 7U;
static int16_t x1215 = INT16_MIN;
volatile int32_t t149 = 73919;
static uint32_t x1223 = UINT32_MAX;
uint64_t x1229 = 535953337527LLU;
uint8_t x1231 = UINT8_MAX;
volatile int8_t x1236 = 20;
volatile int64_t t153 = INT64_MAX;
volatile uint8_t x1245 = UINT8_MAX;
int32_t t154 = 7723851;
int8_t x1254 = INT8_MAX;
volatile uint32_t x1276 = UINT32_MAX;
uint64_t x1282 = UINT64_MAX;
volatile uint32_t t159 = 711366076U;
int16_t x1286 = INT16_MIN;
static volatile int64_t x1288 = INT64_MIN;
static int64_t x1292 = 4370LL;
volatile uint64_t x1298 = 137041989LLU;
static int64_t x1305 = INT64_MAX;
int64_t x1308 = -1LL;
uint32_t x1314 = UINT32_MAX;
static int16_t x1322 = -1;
volatile uint16_t x1333 = 1U;
int8_t x1345 = INT8_MAX;
int8_t x1348 = INT8_MIN;
int32_t x1358 = INT32_MIN;
int32_t t170 = -95716215;
uint32_t x1389 = 17956U;
static volatile int32_t x1392 = -2;
int8_t x1418 = INT8_MIN;
int16_t x1440 = INT16_MIN;
uint8_t x1450 = UINT8_MAX;
int32_t x1456 = -30353990;
volatile int64_t t182 = INT64_MAX;
int32_t x1460 = -1;
int8_t x1463 = -1;
uint32_t t184 = 387145U;
volatile int16_t x1478 = -1;
uint8_t x1499 = UINT8_MAX;
static int64_t x1500 = INT64_MAX;
volatile int64_t x1507 = INT64_MIN;
int32_t t192 = -11683188;
uint16_t x1525 = UINT16_MAX;
uint16_t x1527 = 21189U;
static uint16_t x1534 = 0U;
volatile int32_t x1538 = INT32_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile uint16_t x3 = 1257U;
	volatile int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MAX;

    t0 = (x1<<(x2<=(x3^x4)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 898U;
	volatile int16_t x6 = INT16_MIN;
	uint16_t x8 = 47U;
	static volatile uint32_t t1 = 4141927U;

    t1 = (x5<<(x6<=(x7^x8)));

    if (t1 != 1796U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x10 = UINT32_MAX;
	int32_t x11 = 52945668;
	static int64_t x12 = -1LL;

    t2 = (x9<<(x10<=(x11^x12)));

    if (t2 != 1067U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x31 = UINT16_MAX;
	static volatile int64_t x32 = INT64_MIN;
	volatile int32_t t3 = 889187;

    t3 = (x29<<(x30<=(x31^x32)));

    if (t3 != 34) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x33 = 1285513U;
	int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MIN;

    t4 = (x33<<(x34<=(x35^x36)));

    if (t4 != 1285513U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x41 = 0U;
	int8_t x42 = 17;
	uint8_t x43 = 61U;
	volatile int32_t t5 = 7;

    t5 = (x41<<(x42<=(x43^x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x45 = 1;
	static int64_t x46 = INT64_MIN;
	volatile int16_t x47 = 6986;
	static int32_t x48 = INT32_MIN;
	int32_t t6 = 172464;

    t6 = (x45<<(x46<=(x47^x48)));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x65 = UINT64_MAX;
	int32_t x68 = -1;

    t7 = (x65<<(x66<=(x67^x68)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x69 = 0;
	static uint16_t x70 = UINT16_MAX;
	int16_t x72 = INT16_MAX;
	static int32_t t8 = -248;

    t8 = (x69<<(x70<=(x71^x72)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x82 = -1002493;
	int16_t x83 = 305;
	volatile int64_t x84 = INT64_MAX;

    t9 = (x81<<(x82<=(x83^x84)));

    if (t9 != 791011410LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x113 = INT16_MAX;
	int16_t x115 = 0;
	volatile int32_t x116 = INT32_MIN;

    t10 = (x113<<(x114<=(x115^x116)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x117 = 717902U;
	int32_t x118 = INT32_MIN;
	int16_t x120 = INT16_MAX;

    t11 = (x117<<(x118<=(x119^x120)));

    if (t11 != 1435804U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x121 = 1907;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t x124 = -1;
	static volatile int32_t t12 = 4;

    t12 = (x121<<(x122<=(x123^x124)));

    if (t12 != 1907) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x133 = UINT16_MAX;
	static uint64_t x134 = 5LLU;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = INT8_MAX;
	int32_t t13 = 3;

    t13 = (x133<<(x134<=(x135^x136)));

    if (t13 != 131070) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x137 = INT8_MAX;
	uint8_t x138 = 1U;
	static int16_t x139 = -1;
	static volatile int32_t t14 = -1998;

    t14 = (x137<<(x138<=(x139^x140)));

    if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x141 = 40U;
	uint32_t x144 = UINT32_MAX;
	int32_t t15 = 19617;

    t15 = (x141<<(x142<=(x143^x144)));

    if (t15 != 80) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x145 = 266995076646LLU;
	int8_t x146 = INT8_MIN;
	volatile int16_t x147 = 3206;
	static volatile int16_t x148 = 11912;
	uint64_t t16 = 6108597748812LLU;

    t16 = (x145<<(x146<=(x147^x148)));

    if (t16 != 533990153292LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x149 = UINT8_MAX;
	static int32_t x150 = INT32_MIN;
	static volatile uint8_t x152 = UINT8_MAX;

    t17 = (x149<<(x150<=(x151^x152)));

    if (t17 != 510) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x162 = INT8_MAX;
	int32_t t18 = 97997947;

    t18 = (x161<<(x162<=(x163^x164)));

    if (t18 != 30) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x165 = 23;
	static volatile uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	uint16_t x168 = 3U;
	volatile int32_t t19 = 11805240;

    t19 = (x165<<(x166<=(x167^x168)));

    if (t19 != 23) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x169 = 15U;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MIN;

    t20 = (x169<<(x170<=(x171^x172)));

    if (t20 != 30) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x177 = 29;
	volatile int32_t x179 = 4140785;

    t21 = (x177<<(x178<=(x179^x180)));

    if (t21 != 29) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MIN;
	volatile int32_t x183 = -63514648;
	volatile int32_t t22 = INT32_MAX;

    t22 = (x181<<(x182<=(x183^x184)));

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x189 = INT32_MAX;
	volatile uint16_t x190 = 146U;
	int8_t x191 = INT8_MAX;
	static volatile int8_t x192 = 4;
	int32_t t23 = INT32_MAX;

    t23 = (x189<<(x190<=(x191^x192)));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x198 = UINT32_MAX;
	int16_t x199 = INT16_MAX;
	volatile int32_t t24 = -176875;

    t24 = (x197<<(x198<=(x199^x200)));

    if (t24 != 29) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x205 = 1U;
	int8_t x206 = -1;
	volatile int16_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	static int32_t t25 = -72078270;

    t25 = (x205<<(x206<=(x207^x208)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x209 = 18;
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	volatile int32_t t26 = -423471882;

    t26 = (x209<<(x210<=(x211^x212)));

    if (t26 != 18) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x213 = INT8_MAX;
	static uint16_t x216 = 137U;

    t27 = (x213<<(x214<=(x215^x216)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x221 = 11U;
	static int32_t x222 = -1;
	static int64_t x223 = INT64_MAX;
	static int64_t x224 = INT64_MAX;
	static int32_t t28 = -90945337;

    t28 = (x221<<(x222<=(x223^x224)));

    if (t28 != 22) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x229 = 73991456011425LLU;
	int16_t x230 = -1;
	int32_t x232 = INT32_MIN;

    t29 = (x229<<(x230<=(x231^x232)));

    if (t29 != 147982912022850LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x233 = 22U;
	uint32_t x234 = 14877813U;
	uint64_t x235 = 134200LLU;
	int32_t t30 = -75538942;

    t30 = (x233<<(x234<=(x235^x236)));

    if (t30 != 22) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	volatile uint64_t t31 = 1272LLU;

    t31 = (x237<<(x238<=(x239^x240)));

    if (t31 != 38806934031655367LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x249 = 1082752657206200349LL;
	static volatile int64_t x250 = 0LL;
	uint8_t x252 = 1U;
	int64_t t32 = 750735646685LL;

    t32 = (x249<<(x250<=(x251^x252)));

    if (t32 != 1082752657206200349LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 1U;
	static int64_t x287 = INT64_MAX;
	uint64_t x288 = 302553LLU;
	int32_t t33 = 162;

    t33 = (x285<<(x286<=(x287^x288)));

    if (t33 != 510) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x293 = 0;
	static int16_t x294 = -1;
	int32_t x295 = -1;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int32_t t34 = 617059;

    t34 = (x293<<(x294<=(x295^x296)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = 0;
	uint64_t t35 = 102606939779627123LLU;

    t35 = (x297<<(x298<=(x299^x300)));

    if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x301 = 20452123130004LL;
	uint32_t x302 = 21440329U;
	volatile uint8_t x303 = 0U;
	int64_t t36 = -11802571923404LL;

    t36 = (x301<<(x302<=(x303^x304)));

    if (t36 != 20452123130004LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x306 = 358136;
	volatile uint64_t x308 = 27904030125LLU;
	volatile int32_t t37 = 36035593;

    t37 = (x305<<(x306<=(x307^x308)));

    if (t37 != 76) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x310 = INT8_MIN;
	int8_t x311 = 53;
	int64_t x312 = -872LL;
	volatile uint32_t t38 = 82544740U;

    t38 = (x309<<(x310<=(x311^x312)));

    if (t38 != 527874U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x325 = 31496U;
	int16_t x326 = INT16_MAX;
	static volatile uint16_t x327 = 445U;
	int64_t x328 = INT64_MIN;

    t39 = (x325<<(x326<=(x327^x328)));

    if (t39 != 31496U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x337 = 977390;
	uint16_t x339 = 11U;
	int32_t t40 = -121451529;

    t40 = (x337<<(x338<=(x339^x340)));

    if (t40 != 1954780) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x342 = INT64_MIN;
	int32_t x344 = INT32_MAX;
	int32_t t41 = -36386;

    t41 = (x341<<(x342<=(x343^x344)));

    if (t41 != 34) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x353 = INT64_MAX;
	static uint8_t x354 = 0U;
	volatile int32_t x355 = INT32_MAX;
	int8_t x356 = -1;
	volatile int64_t t42 = INT64_MAX;

    t42 = (x353<<(x354<=(x355^x356)));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x357 = 203632LLU;
	static volatile int8_t x359 = -1;
	static uint64_t t43 = 14522478012240794LLU;

    t43 = (x357<<(x358<=(x359^x360)));

    if (t43 != 203632LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x361 = 21;
	int16_t x362 = INT16_MIN;
	volatile int64_t x364 = -5462149279LL;
	int32_t t44 = -827151534;

    t44 = (x361<<(x362<=(x363^x364)));

    if (t44 != 21) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x369 = UINT8_MAX;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	int32_t x372 = 4720694;
	volatile int32_t t45 = -3;

    t45 = (x369<<(x370<=(x371^x372)));

    if (t45 != 510) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x382 = UINT16_MAX;
	int16_t x383 = 407;
	int32_t t46 = -185494068;

    t46 = (x381<<(x382<=(x383^x384)));

    if (t46 != 73) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x401 = 1U;
	volatile int32_t x402 = -441044577;
	int8_t x403 = 1;
	int16_t x404 = 13;
	static volatile int32_t t47 = -1;

    t47 = (x401<<(x402<=(x403^x404)));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x409 = 0U;
	static int16_t x410 = INT16_MAX;
	uint32_t x411 = 15951U;
	int32_t x412 = INT32_MAX;

    t48 = (x409<<(x410<=(x411^x412)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x416 = INT16_MIN;
	volatile int32_t t49 = -473;

    t49 = (x413<<(x414<=(x415^x416)));

    if (t49 != 20) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x429 = 0U;
	static int8_t x430 = -1;
	volatile int16_t x431 = -12;
	uint32_t x432 = 35984044U;
	volatile int32_t t50 = 187;

    t50 = (x429<<(x430<=(x431^x432)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x441 = UINT16_MAX;
	static uint64_t x442 = 1LLU;
	int32_t x444 = -1;

    t51 = (x441<<(x442<=(x443^x444)));

    if (t51 != 131070) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x447 = 43U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t52 = INT32_MAX;

    t52 = (x445<<(x446<=(x447^x448)));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x457 = 140;
	int32_t x458 = -2;
	uint32_t x459 = 11U;
	int64_t x460 = INT64_MAX;
	int32_t t53 = 3;

    t53 = (x457<<(x458<=(x459^x460)));

    if (t53 != 280) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x462 = INT64_MIN;
	volatile int64_t x463 = -234183842LL;
	int8_t x464 = INT8_MIN;
	uint32_t t54 = 778402250U;

    t54 = (x461<<(x462<=(x463^x464)));

    if (t54 != 4043010U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x473 = 89U;
	int64_t x474 = -116LL;
	int32_t t55 = -1;

    t55 = (x473<<(x474<=(x475^x476)));

    if (t55 != 178) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x481 = 33U;
	volatile int32_t x483 = 706884;
	int16_t x484 = INT16_MAX;

    t56 = (x481<<(x482<=(x483^x484)));

    if (t56 != 66) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x493 = 4867558566LLU;
	uint8_t x494 = 8U;
	volatile uint64_t x495 = UINT64_MAX;
	int32_t x496 = -51149;
	uint64_t t57 = 7034869LLU;

    t57 = (x493<<(x494<=(x495^x496)));

    if (t57 != 9735117132LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x497 = 23101U;
	int8_t x499 = -1;
	int32_t x500 = -1;
	uint32_t t58 = 7499U;

    t58 = (x497<<(x498<=(x499^x500)));

    if (t58 != 23101U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x505 = 9120U;
	int16_t x506 = INT16_MIN;

    t59 = (x505<<(x506<=(x507^x508)));

    if (t59 != 9120) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x513 = INT16_MAX;
	int8_t x514 = 2;
	int32_t x515 = 3464948;
	int32_t x516 = INT32_MAX;
	int32_t t60 = 27957109;

    t60 = (x513<<(x514<=(x515^x516)));

    if (t60 != 65534) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x517 = UINT32_MAX;
	int64_t x518 = INT64_MIN;
	int64_t x520 = INT64_MIN;
	static uint32_t t61 = 77904220U;

    t61 = (x517<<(x518<=(x519^x520)));

    if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x521 = 522966840LLU;
	int64_t x522 = INT64_MAX;
	int32_t x523 = INT32_MIN;
	static int16_t x524 = -1;
	volatile uint64_t t62 = 1370517175833370473LLU;

    t62 = (x521<<(x522<=(x523^x524)));

    if (t62 != 522966840LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x542 = -1;
	int32_t x543 = INT32_MAX;
	uint16_t x544 = UINT16_MAX;
	int32_t t63 = -41701;

    t63 = (x541<<(x542<=(x543^x544)));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x549 = INT16_MAX;
	volatile int16_t x550 = -1;
	volatile uint64_t x551 = 108491552LLU;
	static int64_t x552 = INT64_MAX;

    t64 = (x549<<(x550<=(x551^x552)));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x553 = 0;
	volatile int32_t x554 = INT32_MIN;
	volatile int64_t x556 = -1LL;
	static volatile int32_t t65 = -1;

    t65 = (x553<<(x554<=(x555^x556)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x558 = -1;
	uint64_t x559 = 1363232952590605467LLU;
	volatile int32_t x560 = INT32_MAX;
	volatile int32_t t66 = 55122;

    t66 = (x557<<(x558<=(x559^x560)));

    if (t66 != 41) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x565 = 7189526U;
	int8_t x566 = INT8_MAX;
	int16_t x567 = -1;
	static volatile uint32_t x568 = 12292U;

    t67 = (x565<<(x566<=(x567^x568)));

    if (t67 != 14379052U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x573 = 3074350;
	int16_t x574 = INT16_MAX;
	int64_t x576 = -12LL;
	int32_t t68 = -407;

    t68 = (x573<<(x574<=(x575^x576)));

    if (t68 != 6148700) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	volatile int16_t x587 = INT16_MAX;
	static int64_t x588 = INT64_MIN;
	volatile int32_t t69 = -163786;

    t69 = (x585<<(x586<=(x587^x588)));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x590 = INT8_MIN;
	uint32_t x591 = 25U;
	volatile uint64_t x592 = UINT64_MAX;
	uint64_t t70 = 2018122821430271LLU;

    t70 = (x589<<(x590<=(x591^x592)));

    if (t70 != 20LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int16_t x594 = 13;
	volatile int8_t x596 = INT8_MAX;
	int32_t t71 = 2;

    t71 = (x593<<(x594<=(x595^x596)));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x601 = UINT8_MAX;
	volatile int64_t x602 = -66569262358321LL;
	static int8_t x603 = INT8_MAX;
	volatile int32_t x604 = INT32_MAX;
	volatile int32_t t72 = -48287917;

    t72 = (x601<<(x602<=(x603^x604)));

    if (t72 != 510) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x617 = 328012LLU;
	int16_t x619 = -1;
	uint32_t x620 = 19163470U;
	static uint64_t t73 = 108081959648LLU;

    t73 = (x617<<(x618<=(x619^x620)));

    if (t73 != 656024LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x621 = UINT64_MAX;
	int16_t x622 = -1;
	static uint16_t x623 = 14U;
	static uint32_t x624 = UINT32_MAX;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (x621<<(x622<=(x623^x624)));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x641 = 41;
	uint16_t x642 = 14165U;
	uint32_t x643 = UINT32_MAX;
	int32_t x644 = 25248919;
	static int32_t t75 = 62965;

    t75 = (x641<<(x642<=(x643^x644)));

    if (t75 != 82) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x645 = UINT64_MAX;
	int32_t x646 = INT32_MIN;
	int16_t x647 = -9114;
	uint64_t x648 = 819LLU;
	volatile uint64_t t76 = 1847535252LLU;

    t76 = (x645<<(x646<=(x647^x648)));

    if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x653 = 12;
	static uint32_t x654 = 44329142U;
	static int64_t x655 = INT64_MAX;
	static int16_t x656 = 0;
	volatile int32_t t77 = 0;

    t77 = (x653<<(x654<=(x655^x656)));

    if (t77 != 24) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x661 = 1;
	static int32_t x662 = 5;
	int32_t t78 = 17782033;

    t78 = (x661<<(x662<=(x663^x664)));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x669 = 997U;
	static int16_t x670 = 1846;
	int32_t x671 = INT32_MIN;
	int64_t x672 = -184549LL;

    t79 = (x669<<(x670<=(x671^x672)));

    if (t79 != 1994) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x673 = 2131U;
	volatile int32_t x675 = INT32_MIN;
	int32_t x676 = -7;

    t80 = (x673<<(x674<=(x675^x676)));

    if (t80 != 4262U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x685 = UINT64_MAX;
	volatile uint32_t x686 = UINT32_MAX;
	int32_t x687 = INT32_MAX;
	uint64_t t81 = UINT64_MAX;

    t81 = (x685<<(x686<=(x687^x688)));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x693 = 134243LLU;
	uint64_t x696 = UINT64_MAX;

    t82 = (x693<<(x694<=(x695^x696)));

    if (t82 != 268486LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x697 = INT16_MAX;
	int8_t x698 = INT8_MIN;
	uint8_t x699 = UINT8_MAX;

    t83 = (x697<<(x698<=(x699^x700)));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x701 = UINT16_MAX;
	volatile int8_t x704 = -1;
	volatile int32_t t84 = 50995;

    t84 = (x701<<(x702<=(x703^x704)));

    if (t84 != 131070) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x714 = INT32_MIN;
	int32_t x715 = -1;
	volatile uint8_t x716 = UINT8_MAX;
	static int32_t t85 = 22;

    t85 = (x713<<(x714<=(x715^x716)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x717 = 4U;
	int32_t x718 = -34247;
	static int32_t x719 = INT32_MIN;
	volatile int16_t x720 = -17;

    t86 = (x717<<(x718<=(x719^x720)));

    if (t86 != 8U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x729 = 124512415U;
	int16_t x730 = -1;
	static uint16_t x731 = UINT16_MAX;
	static int32_t x732 = INT32_MIN;
	uint32_t t87 = 2055847U;

    t87 = (x729<<(x730<=(x731^x732)));

    if (t87 != 124512415U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x741 = INT8_MAX;
	uint16_t x742 = 0U;
	static int64_t x743 = INT64_MIN;
	uint64_t x744 = 255LLU;
	volatile int32_t t88 = -1;

    t88 = (x741<<(x742<=(x743^x744)));

    if (t88 != 254) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x745 = 61;
	volatile int16_t x746 = -1;
	volatile int8_t x747 = -11;
	int32_t t89 = 416;

    t89 = (x745<<(x746<=(x747^x748)));

    if (t89 != 122) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x761 = 91U;
	int64_t x762 = INT64_MAX;
	static int32_t x764 = 74;
	volatile int32_t t90 = 3269885;

    t90 = (x761<<(x762<=(x763^x764)));

    if (t90 != 91) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x765 = 367304U;
	volatile int8_t x766 = INT8_MIN;
	uint64_t x767 = UINT64_MAX;

    t91 = (x765<<(x766<=(x767^x768)));

    if (t91 != 367304U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x769 = INT16_MAX;
	int32_t x770 = -3;
	static int16_t x771 = INT16_MIN;
	volatile int64_t x772 = -1LL;
	int32_t t92 = 337349;

    t92 = (x769<<(x770<=(x771^x772)));

    if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x773 = 12U;
	int32_t x774 = INT32_MIN;
	int16_t x776 = INT16_MIN;

    t93 = (x773<<(x774<=(x775^x776)));

    if (t93 != 24) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x778 = -1;
	int8_t x779 = INT8_MAX;
	int8_t x780 = -24;
	int64_t t94 = -6137LL;

    t94 = (x777<<(x778<=(x779^x780)));

    if (t94 != 130598LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x785 = 1U;
	int64_t x786 = INT64_MIN;
	static volatile uint32_t x788 = UINT32_MAX;
	volatile int32_t t95 = -294472;

    t95 = (x785<<(x786<=(x787^x788)));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x793 = 1355U;
	int64_t x794 = -3090706178LL;
	int16_t x796 = INT16_MAX;

    t96 = (x793<<(x794<=(x795^x796)));

    if (t96 != 2710) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x801 = INT8_MAX;
	uint32_t x802 = 104U;
	int16_t x803 = INT16_MAX;
	int64_t x804 = 10764942184LL;
	static int32_t t97 = 208985;

    t97 = (x801<<(x802<=(x803^x804)));

    if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x809 = 59161LL;
	uint16_t x810 = 5U;
	uint64_t x812 = 1060818125LLU;
	volatile int64_t t98 = -377837366LL;

    t98 = (x809<<(x810<=(x811^x812)));

    if (t98 != 118322LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x821 = 259198386U;
	static volatile uint64_t x823 = UINT64_MAX;
	uint32_t t99 = 1U;

    t99 = (x821<<(x822<=(x823^x824)));

    if (t99 != 518396772U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x825 = UINT64_MAX;
	int64_t x826 = INT64_MAX;
	int64_t x828 = INT64_MAX;
	uint64_t t100 = UINT64_MAX;

    t100 = (x825<<(x826<=(x827^x828)));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x829 = 21625U;
	uint16_t x830 = 28612U;
	int32_t x832 = INT32_MAX;
	int32_t t101 = -1607801;

    t101 = (x829<<(x830<=(x831^x832)));

    if (t101 != 43250) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x833 = UINT64_MAX;
	int32_t x835 = INT32_MIN;
	volatile uint32_t x836 = 3411950U;
	volatile uint64_t t102 = 94LLU;

    t102 = (x833<<(x834<=(x835^x836)));

    if (t102 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x838 = UINT8_MAX;
	uint64_t x839 = 655LLU;
	int64_t x840 = -51473291LL;
	int32_t t103 = -11088857;

    t103 = (x837<<(x838<=(x839^x840)));

    if (t103 != 65534) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x845 = 290U;
	volatile uint32_t x846 = UINT32_MAX;
	uint8_t x847 = 1U;
	static int16_t x848 = -8;

    t104 = (x845<<(x846<=(x847^x848)));

    if (t104 != 290) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x859 = 1908U;
	int64_t x860 = -1011206328938LL;
	volatile int32_t t105 = -152246062;

    t105 = (x857<<(x858<=(x859^x860)));

    if (t105 != 4544) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x865 = INT8_MAX;
	int32_t x866 = 287761;
	static volatile uint8_t x868 = 86U;
	volatile int32_t t106 = 339282;

    t106 = (x865<<(x866<=(x867^x868)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x869 = INT16_MAX;
	int64_t x870 = INT64_MIN;
	volatile int32_t x871 = INT32_MIN;

    t107 = (x869<<(x870<=(x871^x872)));

    if (t107 != 65534) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x877 = INT16_MAX;
	uint16_t x878 = UINT16_MAX;
	int8_t x879 = -1;
	uint32_t x880 = 1545420U;
	int32_t t108 = -481649;

    t108 = (x877<<(x878<=(x879^x880)));

    if (t108 != 65534) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x881 = 0U;
	int32_t x882 = INT32_MAX;
	int8_t x883 = INT8_MAX;
	int8_t x884 = INT8_MIN;
	uint32_t t109 = 85485769U;

    t109 = (x881<<(x882<=(x883^x884)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x885 = UINT32_MAX;
	volatile uint64_t x886 = 2675763278088401722LLU;
	uint64_t x887 = 106LLU;
	uint32_t t110 = UINT32_MAX;

    t110 = (x885<<(x886<=(x887^x888)));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x890 = 1;
	static volatile uint8_t x891 = 3U;

    t111 = (x889<<(x890<=(x891^x892)));

    if (t111 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x893 = 1018U;
	int16_t x895 = INT16_MAX;
	int64_t x896 = -1LL;
	int32_t t112 = 2;

    t112 = (x893<<(x894<=(x895^x896)));

    if (t112 != 2036) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x901 = 243U;
	int32_t x903 = INT32_MIN;

    t113 = (x901<<(x902<=(x903^x904)));

    if (t113 != 243) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x907 = 1U;
	uint8_t x908 = UINT8_MAX;
	volatile uint32_t t114 = 1463671575U;

    t114 = (x905<<(x906<=(x907^x908)));

    if (t114 != 390U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x914 = INT64_MAX;
	volatile uint64_t t115 = 225295583544LLU;

    t115 = (x913<<(x914<=(x915^x916)));

    if (t115 != 120612360312924LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x917 = 2U;
	int16_t x919 = INT16_MIN;
	volatile uint8_t x920 = 1U;

    t116 = (x917<<(x918<=(x919^x920)));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x921 = 1066267228;
	uint8_t x922 = UINT8_MAX;
	int8_t x923 = INT8_MIN;
	int16_t x924 = 10484;
	volatile int32_t t117 = 604;

    t117 = (x921<<(x922<=(x923^x924)));

    if (t117 != 1066267228) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x933 = 7LLU;
	int64_t x934 = -315500509842614866LL;
	int8_t x935 = -1;
	volatile uint64_t x936 = 55LLU;

    t118 = (x933<<(x934<=(x935^x936)));

    if (t118 != 14LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x937 = INT8_MAX;
	volatile uint8_t x939 = UINT8_MAX;
	static int64_t x940 = -1LL;
	int32_t t119 = 1;

    t119 = (x937<<(x938<=(x939^x940)));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x953 = 679084645U;
	uint32_t x954 = 1483554492U;
	int32_t x955 = INT32_MIN;
	int8_t x956 = -1;

    t120 = (x953<<(x954<=(x955^x956)));

    if (t120 != 1358169290U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x957 = 24U;
	static uint16_t x958 = 11042U;
	uint64_t x959 = 61LLU;
	int16_t x960 = INT16_MAX;
	volatile int32_t t121 = -1510594;

    t121 = (x957<<(x958<=(x959^x960)));

    if (t121 != 48) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x961 = 1;
	uint16_t x962 = 665U;
	int32_t x963 = -1;
	volatile int8_t x964 = INT8_MIN;
	volatile int32_t t122 = -730118021;

    t122 = (x961<<(x962<=(x963^x964)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x981 = UINT8_MAX;
	int8_t x982 = -1;
	int16_t x983 = -5212;
	int64_t x984 = INT64_MAX;
	volatile int32_t t123 = -2027;

    t123 = (x981<<(x982<=(x983^x984)));

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x989 = 11899U;
	uint16_t x990 = 2U;
	uint8_t x992 = UINT8_MAX;
	volatile int32_t t124 = -194628965;

    t124 = (x989<<(x990<=(x991^x992)));

    if (t124 != 11899) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x994 = -2;
	static uint64_t x996 = UINT64_MAX;
	volatile int32_t t125 = INT32_MAX;

    t125 = (x993<<(x994<=(x995^x996)));

    if (t125 != INT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x1001 = INT8_MAX;
	int64_t x1002 = INT64_MIN;
	int8_t x1003 = -1;
	volatile uint8_t x1004 = UINT8_MAX;
	static int32_t t126 = -109883;

    t126 = (x1001<<(x1002<=(x1003^x1004)));

    if (t126 != 254) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1005 = 1U;
	int64_t x1007 = -712LL;
	uint64_t x1008 = UINT64_MAX;

    t127 = (x1005<<(x1006<=(x1007^x1008)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1025 = 4U;
	volatile int64_t x1026 = INT64_MIN;
	int64_t x1027 = -1LL;
	int16_t x1028 = -1;
	int32_t t128 = 15;

    t128 = (x1025<<(x1026<=(x1027^x1028)));

    if (t128 != 8) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1029 = 19955749999085LLU;
	static int16_t x1030 = INT16_MIN;
	uint64_t x1031 = 415212578167867795LLU;
	int32_t x1032 = 7605;

    t129 = (x1029<<(x1030<=(x1031^x1032)));

    if (t129 != 19955749999085LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1041 = UINT32_MAX;
	static volatile uint64_t x1042 = 131387759596LLU;
	int32_t x1043 = -1;
	static volatile int64_t x1044 = -1LL;
	volatile uint32_t t130 = UINT32_MAX;

    t130 = (x1041<<(x1042<=(x1043^x1044)));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1053 = INT8_MAX;
	int64_t x1054 = INT64_MIN;
	int16_t x1055 = -3;
	int32_t t131 = 499;

    t131 = (x1053<<(x1054<=(x1055^x1056)));

    if (t131 != 254) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1061 = 3;
	uint32_t x1062 = 16U;
	static uint32_t x1063 = 759517U;
	int64_t x1064 = 3397LL;
	int32_t t132 = -3186467;

    t132 = (x1061<<(x1062<=(x1063^x1064)));

    if (t132 != 6) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x1065 = 197545U;
	int8_t x1066 = INT8_MIN;
	int8_t x1067 = INT8_MAX;
	uint32_t t133 = 39717U;

    t133 = (x1065<<(x1066<=(x1067^x1068)));

    if (t133 != 395090U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1070 = UINT16_MAX;
	int16_t x1072 = INT16_MIN;
	int32_t t134 = -6028968;

    t134 = (x1069<<(x1070<=(x1071^x1072)));

    if (t134 != 254) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1090 = 4980U;
	int64_t x1091 = -1LL;
	static uint32_t x1092 = 695536545U;
	volatile uint32_t t135 = UINT32_MAX;

    t135 = (x1089<<(x1090<=(x1091^x1092)));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x1097 = 358234U;
	volatile int64_t x1098 = -1619003053578715715LL;
	int8_t x1099 = -1;
	static uint32_t t136 = 432489U;

    t136 = (x1097<<(x1098<=(x1099^x1100)));

    if (t136 != 716468U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1101 = INT64_MAX;
	int64_t x1102 = 5154872322LL;
	int32_t x1103 = -1;
	int16_t x1104 = INT16_MIN;
	int64_t t137 = INT64_MAX;

    t137 = (x1101<<(x1102<=(x1103^x1104)));

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1105 = 806099307U;
	int8_t x1106 = INT8_MIN;
	int8_t x1107 = -1;
	int64_t x1108 = INT64_MIN;
	volatile uint32_t t138 = 1U;

    t138 = (x1105<<(x1106<=(x1107^x1108)));

    if (t138 != 1612198614U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1113 = 2935U;
	int16_t x1114 = -1;
	static int8_t x1115 = -1;
	int32_t x1116 = INT32_MAX;
	volatile int32_t t139 = 3;

    t139 = (x1113<<(x1114<=(x1115^x1116)));

    if (t139 != 2935) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1117 = 69U;
	volatile uint16_t x1118 = 1U;
	int8_t x1120 = INT8_MIN;
	static volatile int32_t t140 = 43917342;

    t140 = (x1117<<(x1118<=(x1119^x1120)));

    if (t140 != 138) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1125 = 1671LL;
	static int64_t t141 = 71459881459347LL;

    t141 = (x1125<<(x1126<=(x1127^x1128)));

    if (t141 != 3342LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1146 = 738247414504459914LL;
	int16_t x1147 = -1;
	static int32_t t142 = -187758446;

    t142 = (x1145<<(x1146<=(x1147^x1148)));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x1153 = UINT64_MAX;
	int64_t x1154 = INT64_MAX;
	volatile uint64_t x1155 = 77078435578LLU;
	static volatile int32_t x1156 = -454816597;
	volatile uint64_t t143 = 12LLU;

    t143 = (x1153<<(x1154<=(x1155^x1156)));

    if (t143 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1165 = 217363790064LLU;
	volatile int8_t x1166 = INT8_MAX;
	int64_t x1167 = INT64_MIN;
	int64_t x1168 = INT64_MIN;
	static volatile uint64_t t144 = 11LLU;

    t144 = (x1165<<(x1166<=(x1167^x1168)));

    if (t144 != 217363790064LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1169 = INT64_MAX;
	volatile int64_t x1170 = -1LL;
	int8_t x1171 = INT8_MAX;
	int64_t x1172 = INT64_MIN;
	static int64_t t145 = INT64_MAX;

    t145 = (x1169<<(x1170<=(x1171^x1172)));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1177 = UINT16_MAX;
	int64_t x1178 = -29571735020136LL;
	volatile int64_t x1179 = INT64_MAX;
	uint16_t x1180 = UINT16_MAX;
	int32_t t146 = -10883;

    t146 = (x1177<<(x1178<=(x1179^x1180)));

    if (t146 != 131070) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x1181 = 3092LLU;
	int32_t x1182 = INT32_MIN;
	static volatile int8_t x1184 = INT8_MIN;
	uint64_t t147 = 239382592LLU;

    t147 = (x1181<<(x1182<=(x1183^x1184)));

    if (t147 != 6184LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1193 = UINT8_MAX;
	int8_t x1194 = INT8_MIN;
	int32_t x1195 = INT32_MIN;
	int32_t t148 = -8029;

    t148 = (x1193<<(x1194<=(x1195^x1196)));

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x1214 = 0;
	int8_t x1216 = INT8_MIN;

    t149 = (x1213<<(x1214<=(x1215^x1216)));

    if (t149 != 14) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1217 = 21U;
	uint32_t x1218 = 30150194U;
	volatile int32_t x1219 = -1;
	volatile int32_t x1220 = -1;
	int32_t t150 = 12944496;

    t150 = (x1217<<(x1218<=(x1219^x1220)));

    if (t150 != 21) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1221 = 37LLU;
	static volatile int16_t x1222 = -1;
	int32_t x1224 = INT32_MAX;
	uint64_t t151 = 8LLU;

    t151 = (x1221<<(x1222<=(x1223^x1224)));

    if (t151 != 37LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x1230 = 3482880LL;
	uint32_t x1232 = 47864330U;
	volatile uint64_t t152 = 14985LLU;

    t152 = (x1229<<(x1230<=(x1231^x1232)));

    if (t152 != 1071906675054LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1233 = INT64_MAX;
	int8_t x1234 = -1;
	volatile int16_t x1235 = -378;

    t153 = (x1233<<(x1234<=(x1235^x1236)));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1246 = INT16_MAX;
	int64_t x1247 = INT64_MIN;
	int8_t x1248 = -1;

    t154 = (x1245<<(x1246<=(x1247^x1248)));

    if (t154 != 510) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1253 = UINT16_MAX;
	uint16_t x1255 = 50U;
	uint16_t x1256 = 205U;
	volatile int32_t t155 = 622;

    t155 = (x1253<<(x1254<=(x1255^x1256)));

    if (t155 != 131070) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1269 = 0U;
	uint16_t x1270 = 1381U;
	static int8_t x1271 = INT8_MIN;
	uint8_t x1272 = 2U;
	int32_t t156 = -469756;

    t156 = (x1269<<(x1270<=(x1271^x1272)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1273 = 135U;
	int8_t x1274 = -1;
	int32_t x1275 = 2187512;
	volatile uint32_t t157 = 3U;

    t157 = (x1273<<(x1274<=(x1275^x1276)));

    if (t157 != 135U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x1277 = 14678;
	int32_t x1278 = -1;
	int32_t x1279 = -1;
	int32_t x1280 = INT32_MIN;
	int32_t t158 = 56785;

    t158 = (x1277<<(x1278<=(x1279^x1280)));

    if (t158 != 29356) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1281 = 994707988U;
	int64_t x1283 = INT64_MIN;
	uint64_t x1284 = UINT64_MAX;

    t159 = (x1281<<(x1282<=(x1283^x1284)));

    if (t159 != 994707988U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x1285 = 9U;
	static int16_t x1287 = INT16_MIN;
	uint32_t t160 = 10U;

    t160 = (x1285<<(x1286<=(x1287^x1288)));

    if (t160 != 18U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1289 = 1U;
	uint16_t x1290 = 29U;
	static int16_t x1291 = INT16_MIN;
	volatile int32_t t161 = 130427019;

    t161 = (x1289<<(x1290<=(x1291^x1292)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x1293 = 2218095935131LLU;
	int8_t x1294 = 1;
	int64_t x1295 = 5323921239LL;
	uint8_t x1296 = 0U;
	uint64_t t162 = 91066586LLU;

    t162 = (x1293<<(x1294<=(x1295^x1296)));

    if (t162 != 4436191870262LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1297 = 3677541853512436LL;
	uint32_t x1299 = UINT32_MAX;
	uint32_t x1300 = UINT32_MAX;
	volatile int64_t t163 = -2454859064237906440LL;

    t163 = (x1297<<(x1298<=(x1299^x1300)));

    if (t163 != 3677541853512436LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1306 = 4U;
	int16_t x1307 = 1;
	static volatile int64_t t164 = INT64_MAX;

    t164 = (x1305<<(x1306<=(x1307^x1308)));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1313 = 233U;
	int8_t x1315 = -1;
	uint8_t x1316 = UINT8_MAX;
	int32_t t165 = -1254;

    t165 = (x1313<<(x1314<=(x1315^x1316)));

    if (t165 != 233) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x1321 = 3;
	static int8_t x1323 = 24;
	int64_t x1324 = -1LL;
	volatile int32_t t166 = 1;

    t166 = (x1321<<(x1322<=(x1323^x1324)));

    if (t166 != 3) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1334 = INT8_MAX;
	int32_t x1335 = -171800;
	int32_t x1336 = INT32_MAX;
	static volatile int32_t t167 = -16;

    t167 = (x1333<<(x1334<=(x1335^x1336)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1346 = 2726623U;
	static int32_t x1347 = -7;
	static volatile int32_t t168 = -2037431;

    t168 = (x1345<<(x1346<=(x1347^x1348)));

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1357 = 588674U;
	static uint64_t x1359 = 1027635868385104777LLU;
	static int32_t x1360 = 465;
	uint32_t t169 = 643948U;

    t169 = (x1357<<(x1358<=(x1359^x1360)));

    if (t169 != 588674U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1381 = 976U;
	int8_t x1382 = INT8_MIN;
	static int64_t x1383 = INT64_MAX;
	int32_t x1384 = -1;

    t170 = (x1381<<(x1382<=(x1383^x1384)));

    if (t170 != 976) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1385 = 4LL;
	int64_t x1386 = -261874153818LL;
	volatile uint16_t x1387 = UINT16_MAX;
	int16_t x1388 = INT16_MIN;
	volatile int64_t t171 = 54LL;

    t171 = (x1385<<(x1386<=(x1387^x1388)));

    if (t171 != 8LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1390 = INT64_MAX;
	static int8_t x1391 = INT8_MIN;
	uint32_t t172 = 39U;

    t172 = (x1389<<(x1390<=(x1391^x1392)));

    if (t172 != 17956U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1393 = 2551U;
	int16_t x1394 = INT16_MAX;
	uint32_t x1395 = 5908U;
	volatile int32_t x1396 = INT32_MIN;
	int32_t t173 = 1;

    t173 = (x1393<<(x1394<=(x1395^x1396)));

    if (t173 != 5102) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1401 = 25U;
	static uint8_t x1402 = 20U;
	static uint64_t x1403 = UINT64_MAX;
	volatile int8_t x1404 = 0;
	static int32_t t174 = 48;

    t174 = (x1401<<(x1402<=(x1403^x1404)));

    if (t174 != 50) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1413 = UINT16_MAX;
	uint32_t x1414 = 56U;
	int16_t x1415 = INT16_MIN;
	uint32_t x1416 = 1531277838U;
	static int32_t t175 = 78;

    t175 = (x1413<<(x1414<=(x1415^x1416)));

    if (t175 != 131070) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1417 = 4U;
	static uint8_t x1419 = 43U;
	int32_t x1420 = 55676;
	volatile uint32_t t176 = 5202247U;

    t176 = (x1417<<(x1418<=(x1419^x1420)));

    if (t176 != 8U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1421 = 19;
	int64_t x1422 = INT64_MIN;
	volatile int64_t x1423 = 9327LL;
	uint32_t x1424 = 36712051U;
	volatile int32_t t177 = -824339163;

    t177 = (x1421<<(x1422<=(x1423^x1424)));

    if (t177 != 38) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1429 = 0;
	int16_t x1430 = -1;
	int8_t x1431 = INT8_MAX;
	int32_t x1432 = -122172;
	int32_t t178 = 448937;

    t178 = (x1429<<(x1430<=(x1431^x1432)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1437 = 20U;
	int8_t x1438 = -1;
	volatile uint8_t x1439 = UINT8_MAX;
	int32_t t179 = -205291;

    t179 = (x1437<<(x1438<=(x1439^x1440)));

    if (t179 != 20) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1441 = UINT16_MAX;
	uint16_t x1442 = 12U;
	uint64_t x1443 = 17102LLU;
	uint16_t x1444 = 543U;
	volatile int32_t t180 = 19261;

    t180 = (x1441<<(x1442<=(x1443^x1444)));

    if (t180 != 131070) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1449 = 2LLU;
	int8_t x1451 = 8;
	uint16_t x1452 = 44U;
	static uint64_t t181 = 27467991182115920LLU;

    t181 = (x1449<<(x1450<=(x1451^x1452)));

    if (t181 != 2LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1453 = INT64_MAX;
	static uint8_t x1454 = 1U;
	static int8_t x1455 = 1;

    t182 = (x1453<<(x1454<=(x1455^x1456)));

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1457 = 13511LLU;
	int32_t x1458 = INT32_MIN;
	volatile uint16_t x1459 = 258U;
	uint64_t t183 = 1885739LLU;

    t183 = (x1457<<(x1458<=(x1459^x1460)));

    if (t183 != 27022LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1461 = 590U;
	uint64_t x1462 = 515066537880887339LLU;
	volatile uint32_t x1464 = UINT32_MAX;

    t184 = (x1461<<(x1462<=(x1463^x1464)));

    if (t184 != 590U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1473 = 118533601U;
	volatile uint16_t x1474 = UINT16_MAX;
	int32_t x1475 = INT32_MIN;
	uint16_t x1476 = UINT16_MAX;
	static volatile uint32_t t185 = 29598U;

    t185 = (x1473<<(x1474<=(x1475^x1476)));

    if (t185 != 118533601U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1477 = 129665579725324LLU;
	int32_t x1479 = 44696431;
	int8_t x1480 = -1;
	uint64_t t186 = 70299527005LLU;

    t186 = (x1477<<(x1478<=(x1479^x1480)));

    if (t186 != 129665579725324LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1481 = 1;
	uint64_t x1482 = 286336LLU;
	int8_t x1483 = INT8_MIN;
	uint16_t x1484 = 1U;
	int32_t t187 = 1391;

    t187 = (x1481<<(x1482<=(x1483^x1484)));

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x1485 = 684U;
	int16_t x1486 = 3;
	int64_t x1487 = 3226555633699750113LL;
	static volatile int64_t x1488 = INT64_MIN;
	uint32_t t188 = 162810U;

    t188 = (x1485<<(x1486<=(x1487^x1488)));

    if (t188 != 684U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1489 = INT64_MAX;
	uint16_t x1490 = 92U;
	int32_t x1491 = 116597;
	int64_t x1492 = -96416885553580LL;
	int64_t t189 = INT64_MAX;

    t189 = (x1489<<(x1490<=(x1491^x1492)));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1497 = 22U;
	int64_t x1498 = INT64_MAX;
	static volatile int32_t t190 = -279968164;

    t190 = (x1497<<(x1498<=(x1499^x1500)));

    if (t190 != 22) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1501 = UINT8_MAX;
	int32_t x1502 = INT32_MIN;
	int64_t x1503 = 1530486012021LL;
	int8_t x1504 = -5;
	int32_t t191 = 1278901;

    t191 = (x1501<<(x1502<=(x1503^x1504)));

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1505 = 3U;
	int32_t x1506 = INT32_MIN;
	int64_t x1508 = INT64_MIN;

    t192 = (x1505<<(x1506<=(x1507^x1508)));

    if (t192 != 6) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1509 = 13U;
	uint64_t x1510 = UINT64_MAX;
	static uint16_t x1511 = 23940U;
	uint32_t x1512 = UINT32_MAX;
	volatile int32_t t193 = 1645573;

    t193 = (x1509<<(x1510<=(x1511^x1512)));

    if (t193 != 13) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1526 = 907U;
	static uint8_t x1528 = 58U;
	static int32_t t194 = 99331790;

    t194 = (x1525<<(x1526<=(x1527^x1528)));

    if (t194 != 131070) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1529 = UINT64_MAX;
	static int32_t x1530 = INT32_MIN;
	volatile int8_t x1531 = INT8_MAX;
	volatile int64_t x1532 = INT64_MAX;
	volatile uint64_t t195 = 28LLU;

    t195 = (x1529<<(x1530<=(x1531^x1532)));

    if (t195 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1533 = 990U;
	int16_t x1535 = -1;
	static volatile int64_t x1536 = INT64_MIN;
	static volatile int32_t t196 = -4;

    t196 = (x1533<<(x1534<=(x1535^x1536)));

    if (t196 != 1980) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1537 = INT64_MAX;
	int64_t x1539 = -135LL;
	int8_t x1540 = -1;
	volatile int64_t t197 = INT64_MAX;

    t197 = (x1537<<(x1538<=(x1539^x1540)));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1541 = 1U;
	static int8_t x1542 = 0;
	int16_t x1543 = INT16_MIN;
	static uint64_t x1544 = 66624147856261LLU;
	volatile uint32_t t198 = 2653U;

    t198 = (x1541<<(x1542<=(x1543^x1544)));

    if (t198 != 2U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1545 = 0;
	int64_t x1546 = INT64_MIN;
	uint8_t x1547 = UINT8_MAX;
	volatile uint16_t x1548 = 61U;
	int32_t t199 = 3;

    t199 = (x1545<<(x1546<=(x1547^x1548)));

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

