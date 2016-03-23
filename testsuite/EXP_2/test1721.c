
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

volatile uint64_t x1 = UINT64_MAX;
volatile uint8_t x3 = 2U;
volatile int32_t x11 = -57335;
int64_t x12 = 4855872LL;
static int64_t x23 = 5953LL;
volatile int16_t x24 = INT16_MIN;
uint64_t x25 = 10259LLU;
int16_t x32 = INT16_MIN;
int8_t x35 = -1;
static int64_t t8 = INT64_MIN;
int32_t x59 = INT32_MAX;
int32_t x62 = INT32_MAX;
volatile uint16_t x63 = 2U;
volatile uint64_t x87 = UINT64_MAX;
int32_t x88 = -1;
static volatile uint64_t t14 = UINT64_MAX;
uint32_t x107 = 352U;
static volatile int64_t t16 = 13959482213LL;
int16_t x119 = -1;
int16_t x120 = INT16_MIN;
int64_t x133 = INT64_MAX;
uint64_t x135 = UINT64_MAX;
int32_t t22 = 120187;
int32_t x156 = INT32_MIN;
uint32_t x157 = UINT32_MAX;
int32_t x158 = 2;
int8_t x165 = 2;
int64_t x166 = INT64_MAX;
int32_t x183 = INT32_MIN;
int32_t x205 = 1;
int64_t x219 = 1108944920660LL;
static uint32_t x221 = UINT32_MAX;
int32_t x222 = INT32_MIN;
static int8_t x242 = INT8_MAX;
int32_t x273 = 892520703;
int32_t x291 = -474;
static int8_t x292 = -1;
static volatile int32_t t39 = -866324303;
uint8_t x301 = UINT8_MAX;
uint8_t x320 = 95U;
static volatile int16_t x323 = INT16_MAX;
volatile uint64_t t43 = 3LLU;
int32_t x332 = INT32_MIN;
volatile uint64_t t45 = 206018603653377870LLU;
int32_t x351 = -53679657;
static uint32_t x352 = UINT32_MAX;
static volatile uint8_t x361 = 23U;
static int8_t x363 = INT8_MAX;
int8_t x366 = -1;
volatile int64_t x368 = -1LL;
int8_t x369 = INT8_MAX;
int16_t x370 = -1;
int8_t x383 = INT8_MIN;
volatile int32_t t52 = -485507;
int64_t x389 = INT64_MAX;
uint8_t x405 = UINT8_MAX;
volatile int64_t t54 = -16762209878486LL;
uint32_t x409 = 1149U;
static volatile uint32_t x423 = 52987U;
uint8_t x429 = UINT8_MAX;
int32_t x450 = INT32_MIN;
static int16_t x452 = INT16_MIN;
int64_t t61 = -106180LL;
volatile uint16_t x453 = 3U;
int32_t x454 = INT32_MAX;
int32_t t62 = 229422705;
static uint64_t t64 = 46LLU;
uint16_t x472 = 2U;
uint64_t t65 = 34451149298679LLU;
uint8_t x491 = UINT8_MAX;
uint64_t x516 = 33913896320132LLU;
uint32_t x525 = UINT32_MAX;
volatile int8_t x539 = 1;
static int64_t x548 = INT64_MAX;
uint16_t x554 = 138U;
int64_t x555 = INT64_MIN;
uint16_t x558 = UINT16_MAX;
uint64_t x582 = UINT64_MAX;
volatile uint64_t x593 = UINT64_MAX;
uint64_t x596 = 3168972003LLU;
int16_t x610 = -12;
uint32_t x611 = UINT32_MAX;
uint16_t x612 = 63U;
int8_t x618 = -1;
volatile int16_t x632 = -1;
uint8_t x649 = 3U;
volatile uint64_t x652 = UINT64_MAX;
uint64_t t86 = 5307LLU;
int32_t x677 = INT32_MAX;
int64_t t88 = INT64_MAX;
uint32_t x681 = UINT32_MAX;
volatile int64_t x683 = -2901LL;
static volatile int64_t t90 = 44485LL;
uint32_t t91 = 7817629U;
int32_t x698 = INT32_MIN;
volatile int32_t t92 = 1;
volatile int32_t t94 = -11;
uint16_t x711 = 212U;
uint64_t x754 = 6LLU;
int16_t x757 = INT16_MAX;
uint32_t x762 = 1U;
uint32_t x763 = 499U;
static int16_t x765 = 2;
static uint64_t x767 = UINT64_MAX;
volatile int8_t x784 = INT8_MIN;
uint64_t x798 = 122733974725071511LLU;
uint32_t t109 = 427606603U;
volatile int32_t t110 = -294892;
int64_t x820 = INT64_MIN;
int32_t x832 = 25547073;
uint64_t x834 = 133942LLU;
volatile uint64_t x836 = 46LLU;
volatile uint64_t t114 = 9LLU;
static int32_t x849 = INT32_MAX;
volatile uint16_t x851 = UINT16_MAX;
uint64_t x856 = UINT64_MAX;
uint8_t x859 = 3U;
volatile int32_t t121 = -298371747;
uint16_t x873 = UINT16_MAX;
volatile int32_t x886 = INT32_MIN;
static uint64_t x888 = 948958800783871607LLU;
static volatile int8_t x890 = INT8_MIN;
uint64_t x899 = 950250807682615LLU;
int8_t x900 = INT8_MIN;
static volatile int64_t x903 = -347409670018705084LL;
int8_t x921 = 0;
uint64_t x922 = UINT64_MAX;
int16_t x923 = -376;
static int32_t x930 = -101155;
static volatile int32_t x944 = INT32_MAX;
volatile int8_t x953 = 7;
int64_t x978 = INT64_MIN;
int32_t t138 = 1228;
uint32_t x1024 = 839209U;
volatile int32_t t142 = 2;
int64_t x1053 = INT64_MAX;
volatile uint8_t x1054 = UINT8_MAX;
uint16_t x1055 = UINT16_MAX;
int64_t t143 = INT64_MAX;
static int64_t t145 = -46LL;
static uint8_t x1069 = 0U;
int32_t x1090 = INT32_MIN;
int32_t x1097 = 980;
uint8_t x1100 = UINT8_MAX;
volatile int32_t t150 = -89632910;
int32_t x1107 = INT32_MIN;
int64_t t153 = 128920302154832LL;
static int8_t x1130 = -1;
uint32_t x1131 = UINT32_MAX;
static int32_t t154 = 3265;
uint32_t x1133 = 43U;
uint16_t x1139 = UINT16_MAX;
uint16_t x1150 = UINT16_MAX;
uint8_t x1162 = UINT8_MAX;
int16_t x1170 = INT16_MIN;
static volatile uint16_t x1175 = 32U;
int64_t x1188 = INT64_MAX;
static volatile uint32_t x1192 = 13813U;
volatile int8_t x1216 = 1;
uint64_t x1222 = 160183746330289723LLU;
uint8_t x1226 = 29U;
static uint32_t x1235 = UINT32_MAX;
int32_t x1239 = -282;
static int8_t x1240 = 13;
uint64_t x1243 = 29613575389LLU;
uint64_t x1244 = UINT64_MAX;
uint64_t t172 = UINT64_MAX;
uint16_t x1250 = 3U;
static int8_t x1263 = INT8_MIN;
int64_t x1270 = -1LL;
int32_t t177 = -13983664;
int32_t x1278 = INT32_MIN;
static int64_t x1291 = INT64_MAX;
int8_t x1294 = 5;
static volatile int16_t x1318 = INT16_MIN;
int8_t x1319 = 0;
static int64_t x1320 = INT64_MIN;
volatile int64_t t183 = -3382791695876148LL;
int32_t x1327 = 176;
int16_t x1334 = INT16_MIN;
int64_t x1338 = -1LL;
int64_t x1340 = 122291054137694LL;
static int8_t x1342 = INT8_MIN;
int32_t t187 = -18382;
static int8_t x1352 = INT8_MIN;
uint8_t x1356 = UINT8_MAX;
static int64_t x1359 = -1LL;
volatile uint64_t t190 = 96394508LLU;
int64_t x1368 = -1299750141991954LL;
uint64_t x1381 = 466915221643142LLU;
volatile uint64_t t194 = 58990707922LLU;
int8_t x1391 = INT8_MIN;
volatile int8_t x1412 = INT8_MIN;
int32_t x1429 = INT32_MAX;
int64_t x1431 = INT64_MIN;
volatile int32_t t198 = 607;
static uint32_t x1436 = UINT32_MAX;


void f0(void) {
    	static int8_t x2 = INT8_MIN;
	int64_t x4 = 651591LL;
	uint64_t t0 = UINT64_MAX;

    t0 = ((x1>>(x2>x3))|x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = 0;
	int64_t x10 = INT64_MAX;
	volatile int64_t t1 = -132135615LL;

    t1 = ((x9>>(x10>x11))|x12);

    if (t1 != 4855872LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x13 = 169860U;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = -184LL;
	static int16_t x16 = INT16_MIN;
	volatile uint32_t t2 = 75U;

    t2 = ((x13>>(x14>x15))|x16);

    if (t2 != 4294953922U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = UINT32_MAX;
	static int8_t x18 = -1;
	static int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	static uint32_t t3 = UINT32_MAX;

    t3 = ((x17>>(x18>x19))|x20);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 6873197545317606LLU;
	volatile int32_t x22 = INT32_MIN;
	volatile uint64_t t4 = 45692269814669676LLU;

    t4 = ((x21>>(x22>x23))|x24);

    if (t4 != 18446744073709544678LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x26 = 1;
	static uint32_t x27 = UINT32_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t5 = UINT64_MAX;

    t5 = ((x25>>(x26>x27))|x28);

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -117889520;
	volatile int16_t x31 = INT16_MAX;
	volatile int32_t t6 = -46390259;

    t6 = ((x29>>(x30>x31))|x32);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MAX;
	uint64_t x34 = 424LLU;
	int64_t x36 = 406LL;
	static int64_t t7 = 16385LL;

    t7 = ((x33>>(x34>x35))|x36);

    if (t7 != 2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 1U;
	uint8_t x38 = UINT8_MAX;
	uint16_t x39 = 49U;
	static volatile int64_t x40 = INT64_MIN;

    t8 = ((x37>>(x38>x39))|x40);

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 0U;
	static int64_t x47 = INT64_MIN;
	int16_t x48 = 1264;
	int32_t t9 = 811815915;

    t9 = ((x45>>(x46>x47))|x48);

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x53 = 62U;
	uint16_t x54 = 29896U;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = 54286752278LL;
	int64_t t10 = -12LL;

    t10 = ((x53>>(x54>x55))|x56);

    if (t10 != 54286752318LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x57 = UINT64_MAX;
	static int8_t x58 = -37;
	uint16_t x60 = 52U;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = ((x57>>(x58>x59))|x60);

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t12 = -628801171;

    t12 = ((x61>>(x62>x63))|x64);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x77 = INT32_MAX;
	int8_t x78 = INT8_MIN;
	int32_t x79 = 5415337;
	static int8_t x80 = 0;
	volatile int32_t t13 = INT32_MAX;

    t13 = ((x77>>(x78>x79))|x80);

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x85 = 1183029195502872526LLU;
	volatile uint64_t x86 = UINT64_MAX;

    t14 = ((x85>>(x86>x87))|x88);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	static int32_t x90 = INT32_MIN;
	uint8_t x91 = 1U;
	uint16_t x92 = 16840U;
	static volatile int32_t t15 = 379401852;

    t15 = ((x89>>(x90>x91))|x92);

    if (t15 != 16895) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x105 = INT64_MAX;
	int32_t x106 = -1693110;
	uint8_t x108 = UINT8_MAX;

    t16 = ((x105>>(x106>x107))|x108);

    if (t16 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x109 = INT64_MAX;
	uint16_t x110 = 9U;
	static volatile uint8_t x111 = UINT8_MAX;
	static volatile uint8_t x112 = 41U;
	int64_t t17 = INT64_MAX;

    t17 = ((x109>>(x110>x111))|x112);

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x117 = 0U;
	uint64_t x118 = UINT64_MAX;
	int32_t t18 = 0;

    t18 = ((x117>>(x118>x119))|x120);

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x125 = 38;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 4U;
	static volatile int32_t t19 = -2;

    t19 = ((x125>>(x126>x127))|x128);

    if (t19 != 38) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x129 = 9U;
	int16_t x130 = INT16_MAX;
	static volatile int8_t x131 = -3;
	uint32_t x132 = 22283U;
	uint32_t t20 = 642U;

    t20 = ((x129>>(x130>x131))|x132);

    if (t20 != 22287U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x134 = 2018194;
	uint16_t x136 = 447U;
	int64_t t21 = INT64_MAX;

    t21 = ((x133>>(x134>x135))|x136);

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MIN;
	static int16_t x151 = INT16_MIN;
	volatile int16_t x152 = -31;

    t22 = ((x149>>(x150>x151))|x152);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x153 = 412;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MAX;
	volatile int32_t t23 = 22;

    t23 = ((x153>>(x154>x155))|x156);

    if (t23 != -2147483236) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x159 = -43;
	static uint32_t x160 = UINT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

    t24 = ((x157>>(x158>x159))|x160);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x161 = 15LL;
	int64_t x162 = INT64_MIN;
	static volatile int16_t x163 = 62;
	int64_t x164 = INT64_MIN;
	volatile int64_t t25 = 31LL;

    t25 = ((x161>>(x162>x163))|x164);

    if (t25 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x167 = 6994067;
	static int8_t x168 = -1;
	volatile int32_t t26 = -120046;

    t26 = ((x165>>(x166>x167))|x168);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x173 = UINT16_MAX;
	volatile int64_t x174 = INT64_MAX;
	static volatile int8_t x175 = 1;
	volatile uint64_t x176 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

    t27 = ((x173>>(x174>x175))|x176);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x181 = 104978061753LLU;
	volatile int32_t x182 = INT32_MIN;
	volatile int8_t x184 = INT8_MIN;
	volatile uint64_t t28 = 540LLU;

    t28 = ((x181>>(x182>x183))|x184);

    if (t28 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x206 = 1;
	uint16_t x207 = 1835U;
	int64_t x208 = -394115431551LL;
	static volatile int64_t t29 = -1448658508439919119LL;

    t29 = ((x205>>(x206>x207))|x208);

    if (t29 != -394115431551LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x213 = 51U;
	int64_t x214 = -1LL;
	uint32_t x215 = 4U;
	uint32_t x216 = 3U;
	static volatile uint32_t t30 = 19030U;

    t30 = ((x213>>(x214>x215))|x216);

    if (t30 != 51U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x217 = 1;
	volatile int16_t x218 = INT16_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = ((x217>>(x218>x219))|x220);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x223 = INT64_MIN;
	int16_t x224 = -3;
	volatile uint32_t t32 = UINT32_MAX;

    t32 = ((x221>>(x222>x223))|x224);

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x225 = INT32_MAX;
	volatile int64_t x226 = INT64_MIN;
	volatile int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t33 = -1;

    t33 = ((x225>>(x226>x227))|x228);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x229 = INT16_MAX;
	volatile int32_t x230 = 1037829550;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = 727432LL;
	volatile int64_t t34 = -12872708568181LL;

    t34 = ((x229>>(x230>x231))|x232);

    if (t34 != 737279LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x241 = UINT16_MAX;
	volatile int32_t x243 = INT32_MIN;
	int8_t x244 = -1;
	volatile int32_t t35 = 0;

    t35 = ((x241>>(x242>x243))|x244);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x249 = 3813561148LLU;
	volatile int8_t x250 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	volatile uint64_t t36 = 432LLU;

    t36 = ((x249>>(x250>x251))|x252);

    if (t36 != 18446744073228145468LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint64_t x274 = 4LLU;
	volatile int32_t x275 = -910;
	volatile uint16_t x276 = UINT16_MAX;
	volatile int32_t t37 = 3361404;

    t37 = ((x273>>(x274>x275))|x276);

    if (t37 != 892534783) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x281 = 250436388515254599LLU;
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	int32_t x284 = 38857;
	volatile uint64_t t38 = 880754715015541LLU;

    t38 = ((x281>>(x282>x283))|x284);

    if (t38 != 250436388515256271LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x289 = INT16_MAX;
	int32_t x290 = INT32_MIN;

    t39 = ((x289>>(x290>x291))|x292);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x297 = 357954068602296745LL;
	int32_t x298 = INT32_MIN;
	static int64_t x299 = -92LL;
	uint32_t x300 = UINT32_MAX;
	volatile int64_t t40 = -186391024499715LL;

    t40 = ((x297>>(x298>x299))|x300);

    if (t40 != 357954072076091391LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x302 = INT32_MAX;
	volatile int16_t x303 = -1;
	int32_t x304 = -1;
	int32_t t41 = 59415797;

    t41 = ((x301>>(x302>x303))|x304);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x317 = 20728U;
	int32_t x318 = INT32_MIN;
	volatile uint32_t x319 = 0U;
	int32_t t42 = -42;

    t42 = ((x317>>(x318>x319))|x320);

    if (t42 != 10367) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x321 = 8327463308640656193LLU;
	int16_t x322 = -1;
	int32_t x324 = INT32_MIN;

    t43 = ((x321>>(x322>x323))|x324);

    if (t43 != 18446744072226872129LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x325 = INT32_MAX;
	int16_t x326 = -395;
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t44 = INT32_MAX;

    t44 = ((x325>>(x326>x327))|x328);

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x329 = 1960225596797926LLU;
	int8_t x330 = INT8_MIN;
	volatile uint64_t x331 = 5389657224136053691LLU;

    t45 = ((x329>>(x330>x331))|x332);

    if (t45 != 18446744072823519731LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x349 = 72U;
	volatile int8_t x350 = 1;
	uint32_t t46 = UINT32_MAX;

    t46 = ((x349>>(x350>x351))|x352);

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x357 = 8U;
	int16_t x358 = 3406;
	uint8_t x359 = 31U;
	static int32_t x360 = -14571618;
	volatile int32_t t47 = -404487206;

    t47 = ((x357>>(x358>x359))|x360);

    if (t47 != -14571618) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x362 = UINT8_MAX;
	volatile int8_t x364 = -1;
	static volatile int32_t t48 = -807921146;

    t48 = ((x361>>(x362>x363))|x364);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x365 = UINT64_MAX;
	int32_t x367 = 31;
	uint64_t t49 = UINT64_MAX;

    t49 = ((x365>>(x366>x367))|x368);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x371 = 11801;
	int8_t x372 = -25;
	volatile int32_t t50 = 510867;

    t50 = ((x369>>(x370>x371))|x372);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x377 = 2U;
	volatile int16_t x378 = INT16_MAX;
	static int16_t x379 = INT16_MIN;
	static uint8_t x380 = 82U;
	static int32_t t51 = -52492;

    t51 = ((x377>>(x378>x379))|x380);

    if (t51 != 83) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x381 = 51U;
	int16_t x382 = INT16_MAX;
	int16_t x384 = INT16_MIN;

    t52 = ((x381>>(x382>x383))|x384);

    if (t52 != -32743) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x390 = 14179952U;
	static uint16_t x391 = 4U;
	int64_t x392 = 1103984247LL;
	volatile int64_t t53 = 10LL;

    t53 = ((x389>>(x390>x391))|x392);

    if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x406 = UINT32_MAX;
	static int8_t x407 = 1;
	static volatile int64_t x408 = -117304600LL;

    t54 = ((x405>>(x406>x407))|x408);

    if (t54 != -117304577LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x410 = 0;
	uint64_t x411 = 28861432743LLU;
	uint32_t x412 = 1072539112U;
	volatile uint32_t t55 = 4999U;

    t55 = ((x409>>(x410>x411))|x412);

    if (t55 != 1072539133U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x421 = UINT16_MAX;
	static uint32_t x422 = UINT32_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t56 = -912226;

    t56 = ((x421>>(x422>x423))|x424);

    if (t56 != -2147450881) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x425 = INT64_MAX;
	static volatile uint32_t x426 = UINT32_MAX;
	static int64_t x427 = INT64_MAX;
	int64_t x428 = INT64_MIN;
	static volatile int64_t t57 = -15403703762LL;

    t57 = ((x425>>(x426>x427))|x428);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x430 = -1952196248705LL;
	int16_t x431 = 885;
	static int8_t x432 = INT8_MIN;
	int32_t t58 = 2261;

    t58 = ((x429>>(x430>x431))|x432);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x437 = INT64_MAX;
	volatile int32_t x438 = INT32_MAX;
	int16_t x439 = -3671;
	int8_t x440 = INT8_MIN;
	int64_t t59 = 72120700LL;

    t59 = ((x437>>(x438>x439))|x440);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x445 = 3;
	uint16_t x446 = 184U;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = -1;
	static int32_t t60 = -311889;

    t60 = ((x445>>(x446>x447))|x448);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x449 = INT64_MAX;
	static uint16_t x451 = UINT16_MAX;

    t61 = ((x449>>(x450>x451))|x452);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x455 = -1LL;
	int16_t x456 = INT16_MAX;

    t62 = ((x453>>(x454>x455))|x456);

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x461 = 790U;
	static int64_t x462 = INT64_MIN;
	uint8_t x463 = 49U;
	int16_t x464 = -2210;
	uint32_t t63 = 4693U;

    t63 = ((x461>>(x462>x463))|x464);

    if (t63 != 4294965086U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x465 = 15911511090320282LLU;
	uint32_t x466 = 7583U;
	uint32_t x467 = 110751065U;
	static int64_t x468 = 631133030524LL;

    t64 = ((x465>>(x466>x467))|x468);

    if (t64 != 15912132251343870LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x469 = 10111396603LLU;
	uint16_t x470 = 111U;
	static volatile uint64_t x471 = 4455286312145382LLU;

    t65 = ((x469>>(x470>x471))|x472);

    if (t65 != 10111396603LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x477 = INT16_MAX;
	int16_t x478 = INT16_MIN;
	volatile int32_t x479 = 3523946;
	int16_t x480 = -1;
	int32_t t66 = -1;

    t66 = ((x477>>(x478>x479))|x480);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x485 = UINT64_MAX;
	int32_t x486 = -52;
	int64_t x487 = -2034539430869717839LL;
	int64_t x488 = 465LL;
	volatile uint64_t t67 = 86600554994997358LLU;

    t67 = ((x485>>(x486>x487))|x488);

    if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x489 = 468009242656440033LLU;
	int32_t x490 = -1;
	int32_t x492 = -303899351;
	volatile uint64_t t68 = 6783LLU;

    t68 = ((x489>>(x490>x491))|x492);

    if (t68 != 18446744073674096617LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x513 = 3U;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MIN;
	static volatile uint64_t t69 = 793801013749638272LLU;

    t69 = ((x513>>(x514>x515))|x516);

    if (t69 != 33913896320133LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x517 = INT16_MAX;
	int8_t x518 = -1;
	int16_t x519 = INT16_MIN;
	static uint8_t x520 = 77U;
	volatile int32_t t70 = 5810503;

    t70 = ((x517>>(x518>x519))|x520);

    if (t70 != 16383) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x526 = INT32_MIN;
	volatile uint16_t x527 = UINT16_MAX;
	volatile uint64_t x528 = 3110002825LLU;
	volatile uint64_t t71 = 868LLU;

    t71 = ((x525>>(x526>x527))|x528);

    if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	uint8_t x538 = 22U;
	static int64_t x540 = INT64_MAX;
	volatile uint64_t t72 = 2650328511255025085LLU;

    t72 = ((x537>>(x538>x539))|x540);

    if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x545 = 1U;
	static volatile int16_t x546 = INT16_MAX;
	int8_t x547 = INT8_MIN;
	int64_t t73 = INT64_MAX;

    t73 = ((x545>>(x546>x547))|x548);

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x549 = 1;
	int32_t x550 = INT32_MAX;
	volatile int8_t x551 = INT8_MIN;
	uint32_t x552 = 342336U;
	volatile uint32_t t74 = 1044217U;

    t74 = ((x549>>(x550>x551))|x552);

    if (t74 != 342336U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x553 = 960829213763652LLU;
	volatile uint16_t x556 = 11014U;
	volatile uint64_t t75 = 54903LLU;

    t75 = ((x553>>(x554>x555))|x556);

    if (t75 != 480414606884646LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x557 = 0;
	volatile uint16_t x559 = UINT16_MAX;
	int32_t x560 = INT32_MIN;
	static volatile int32_t t76 = INT32_MIN;

    t76 = ((x557>>(x558>x559))|x560);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x581 = UINT32_MAX;
	volatile int64_t x583 = INT64_MAX;
	uint16_t x584 = UINT16_MAX;
	static volatile uint32_t t77 = 122U;

    t77 = ((x581>>(x582>x583))|x584);

    if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x594 = INT32_MAX;
	static uint16_t x595 = UINT16_MAX;
	volatile uint64_t t78 = 17748LLU;

    t78 = ((x593>>(x594>x595))|x596);

    if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x609 = 61804156LLU;
	volatile uint64_t t79 = 15LLU;

    t79 = ((x609>>(x610>x611))|x612);

    if (t79 != 61804159LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x617 = 8725563LLU;
	static uint32_t x619 = 12483617U;
	int32_t x620 = 315626008;
	volatile uint64_t t80 = 8527071726LLU;

    t80 = ((x617>>(x618>x619))|x620);

    if (t80 != 315789853LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x621 = INT8_MAX;
	int32_t x622 = INT32_MIN;
	static uint64_t x623 = UINT64_MAX;
	static int64_t x624 = 3344648408738LL;
	int64_t t81 = -18531145498289240LL;

    t81 = ((x621>>(x622>x623))|x624);

    if (t81 != 3344648408831LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x629 = 1;
	uint16_t x630 = 27355U;
	uint8_t x631 = 8U;
	static volatile int32_t t82 = 628008868;

    t82 = ((x629>>(x630>x631))|x632);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x641 = 6856U;
	volatile int32_t x642 = INT32_MIN;
	static int32_t x643 = INT32_MIN;
	int32_t x644 = INT32_MIN;
	volatile uint32_t t83 = 22U;

    t83 = ((x641>>(x642>x643))|x644);

    if (t83 != 2147490504U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x645 = 49LLU;
	volatile int16_t x646 = INT16_MIN;
	int16_t x647 = -13844;
	int64_t x648 = INT64_MIN;
	volatile uint64_t t84 = 21610363412LLU;

    t84 = ((x645>>(x646>x647))|x648);

    if (t84 != 9223372036854775857LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x650 = INT16_MIN;
	uint8_t x651 = 29U;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = ((x649>>(x650>x651))|x652);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = -1LL;
	volatile int8_t x671 = INT8_MIN;
	static uint64_t x672 = 68LLU;

    t86 = ((x669>>(x670>x671))|x672);

    if (t86 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x673 = UINT64_MAX;
	int8_t x674 = 1;
	volatile int32_t x675 = INT32_MIN;
	static volatile int32_t x676 = -1;
	uint64_t t87 = UINT64_MAX;

    t87 = ((x673>>(x674>x675))|x676);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x678 = INT64_MIN;
	volatile int32_t x679 = INT32_MAX;
	int64_t x680 = INT64_MAX;

    t88 = ((x677>>(x678>x679))|x680);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x682 = 7U;
	static int16_t x684 = 131;
	static volatile uint32_t t89 = 502231U;

    t89 = ((x681>>(x682>x683))|x684);

    if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x689 = 12038212128759469LL;
	static int8_t x690 = 15;
	uint64_t x691 = UINT64_MAX;
	static uint16_t x692 = 23212U;

    t90 = ((x689>>(x690>x691))|x692);

    if (t90 != 12038212128759469LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x693 = 40U;
	static int64_t x694 = -1LL;
	volatile uint8_t x695 = 8U;
	int16_t x696 = INT16_MIN;

    t91 = ((x693>>(x694>x695))|x696);

    if (t91 != 4294934568U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x697 = 160U;
	int64_t x699 = -74783053909LL;
	static uint16_t x700 = 170U;

    t92 = ((x697>>(x698>x699))|x700);

    if (t92 != 250) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x701 = 10;
	static volatile int16_t x702 = INT16_MAX;
	int8_t x703 = INT8_MIN;
	uint8_t x704 = 5U;
	volatile int32_t t93 = -386;

    t93 = ((x701>>(x702>x703))|x704);

    if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x705 = 4U;
	int64_t x706 = 2026253538292LL;
	volatile int32_t x707 = -561172717;
	int16_t x708 = -1;

    t94 = ((x705>>(x706>x707))|x708);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x709 = INT64_MAX;
	volatile int8_t x710 = INT8_MAX;
	int16_t x712 = -1;
	int64_t t95 = 0LL;

    t95 = ((x709>>(x710>x711))|x712);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x717 = UINT8_MAX;
	volatile uint8_t x718 = UINT8_MAX;
	volatile int8_t x719 = 0;
	int32_t x720 = 13241;
	int32_t t96 = 186;

    t96 = ((x717>>(x718>x719))|x720);

    if (t96 != 13311) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x721 = 4393904641896LLU;
	int32_t x722 = INT32_MIN;
	uint16_t x723 = UINT16_MAX;
	int32_t x724 = INT32_MIN;
	uint64_t t97 = 184254822LLU;

    t97 = ((x721>>(x722>x723))|x724);

    if (t97 != 18446744071715166056LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	volatile uint64_t x738 = UINT64_MAX;
	int8_t x739 = -1;
	static uint64_t x740 = 2351509636LLU;
	volatile uint64_t t98 = 801951282815LLU;

    t98 = ((x737>>(x738>x739))|x740);

    if (t98 != 2351562751LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x753 = 6U;
	int64_t x755 = -67093618LL;
	uint16_t x756 = UINT16_MAX;
	uint32_t t99 = 32575U;

    t99 = ((x753>>(x754>x755))|x756);

    if (t99 != 65535U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x758 = UINT64_MAX;
	int8_t x759 = -1;
	int8_t x760 = 1;
	volatile int32_t t100 = 53;

    t100 = ((x757>>(x758>x759))|x760);

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x761 = 22312U;
	int8_t x764 = INT8_MIN;
	uint32_t t101 = 5280052U;

    t101 = ((x761>>(x762>x763))|x764);

    if (t101 != 4294967208U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x766 = UINT8_MAX;
	int8_t x768 = INT8_MAX;
	volatile int32_t t102 = -38;

    t102 = ((x765>>(x766>x767))|x768);

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x773 = 7982LLU;
	static int32_t x774 = 37;
	static volatile int8_t x775 = INT8_MAX;
	uint32_t x776 = 2654726U;
	volatile uint64_t t103 = 26764115303007004LLU;

    t103 = ((x773>>(x774>x775))|x776);

    if (t103 != 2662190LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x777 = INT8_MAX;
	uint16_t x778 = UINT16_MAX;
	static volatile uint32_t x779 = 11U;
	static uint32_t x780 = UINT32_MAX;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = ((x777>>(x778>x779))|x780);

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x781 = 872785411;
	static volatile int8_t x782 = INT8_MIN;
	uint16_t x783 = 120U;
	volatile int32_t t105 = -100318852;

    t105 = ((x781>>(x782>x783))|x784);

    if (t105 != -125) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x789 = INT16_MAX;
	volatile uint16_t x790 = 1855U;
	static volatile int64_t x791 = 3LL;
	int16_t x792 = -1;
	int32_t t106 = -54523;

    t106 = ((x789>>(x790>x791))|x792);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x797 = 192540U;
	uint8_t x799 = UINT8_MAX;
	int8_t x800 = INT8_MIN;
	uint32_t t107 = 53339U;

    t107 = ((x797>>(x798>x799))|x800);

    if (t107 != 4294967182U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x801 = 244U;
	volatile int32_t x802 = -43;
	int8_t x803 = -1;
	int64_t x804 = -119724973325606675LL;
	volatile int64_t t108 = 24880295779LL;

    t108 = ((x801>>(x802>x803))|x804);

    if (t108 != -119724973325606659LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x809 = 7U;
	uint16_t x810 = 139U;
	int8_t x811 = INT8_MAX;
	int16_t x812 = 189;

    t109 = ((x809>>(x810>x811))|x812);

    if (t109 != 191U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x813 = INT16_MAX;
	int8_t x814 = INT8_MIN;
	volatile uint64_t x815 = UINT64_MAX;
	int32_t x816 = INT32_MIN;

    t110 = ((x813>>(x814>x815))|x816);

    if (t110 != -2147450881) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x817 = INT64_MAX;
	int64_t x818 = INT64_MIN;
	int64_t x819 = INT64_MIN;
	volatile int64_t t111 = 8555529717937185LL;

    t111 = ((x817>>(x818>x819))|x820);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x821 = 54;
	int32_t x822 = -1;
	static uint32_t x823 = 134079289U;
	int16_t x824 = INT16_MIN;
	int32_t t112 = -14;

    t112 = ((x821>>(x822>x823))|x824);

    if (t112 != -32741) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x829 = 372;
	int32_t x830 = -1;
	static uint64_t x831 = 22LLU;
	int32_t t113 = 22;

    t113 = ((x829>>(x830>x831))|x832);

    if (t113 != 25547259) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x833 = UINT32_MAX;
	int64_t x835 = -127334629LL;

    t114 = ((x833>>(x834>x835))|x836);

    if (t114 != 4294967295LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x837 = UINT32_MAX;
	int32_t x838 = INT32_MIN;
	int32_t x839 = INT32_MIN;
	int64_t x840 = INT64_MIN;
	int64_t t115 = 1321371614218287LL;

    t115 = ((x837>>(x838>x839))|x840);

    if (t115 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x850 = 6U;
	int32_t x852 = 178156;
	volatile int32_t t116 = INT32_MAX;

    t116 = ((x849>>(x850>x851))|x852);

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x853 = UINT64_MAX;
	uint16_t x854 = UINT16_MAX;
	int8_t x855 = -1;
	uint64_t t117 = UINT64_MAX;

    t117 = ((x853>>(x854>x855))|x856);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x857 = 163819LLU;
	static int32_t x858 = INT32_MIN;
	int8_t x860 = -1;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = ((x857>>(x858>x859))|x860);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x861 = INT16_MAX;
	volatile uint8_t x862 = 2U;
	int8_t x863 = -2;
	static int64_t x864 = -401LL;
	volatile int64_t t119 = 43344294LL;

    t119 = ((x861>>(x862>x863))|x864);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x865 = 492229831LLU;
	uint16_t x866 = 10U;
	static int16_t x867 = -4363;
	uint16_t x868 = 1U;
	volatile uint64_t t120 = 172215679181LLU;

    t120 = ((x865>>(x866>x867))|x868);

    if (t120 != 246114915LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x869 = 112U;
	int64_t x870 = INT64_MIN;
	static int64_t x871 = -78907953314447LL;
	uint16_t x872 = 6U;

    t121 = ((x869>>(x870>x871))|x872);

    if (t121 != 118) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x874 = 1837952653U;
	volatile int16_t x875 = INT16_MAX;
	int32_t x876 = INT32_MAX;
	volatile int32_t t122 = INT32_MAX;

    t122 = ((x873>>(x874>x875))|x876);

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x877 = UINT32_MAX;
	int32_t x878 = 8508;
	volatile int16_t x879 = 921;
	int8_t x880 = -14;
	static volatile uint32_t t123 = UINT32_MAX;

    t123 = ((x877>>(x878>x879))|x880);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x885 = 7801U;
	int64_t x887 = INT64_MIN;
	uint64_t t124 = 6LLU;

    t124 = ((x885>>(x886>x887))|x888);

    if (t124 != 948958800783871871LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x889 = INT32_MAX;
	volatile int16_t x891 = 5492;
	int8_t x892 = INT8_MAX;
	int32_t t125 = INT32_MAX;

    t125 = ((x889>>(x890>x891))|x892);

    if (t125 != INT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x897 = 2U;
	static int64_t x898 = INT64_MIN;
	volatile int32_t t126 = 106859312;

    t126 = ((x897>>(x898>x899))|x900);

    if (t126 != -127) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x901 = 890419758792470175LL;
	int16_t x902 = INT16_MIN;
	uint64_t x904 = UINT64_MAX;
	static volatile uint64_t t127 = UINT64_MAX;

    t127 = ((x901>>(x902>x903))|x904);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x924 = -3232;
	int32_t t128 = -224;

    t128 = ((x921>>(x922>x923))|x924);

    if (t128 != -3232) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x929 = 2912LL;
	int16_t x931 = -1;
	uint8_t x932 = 6U;
	int64_t t129 = 270664LL;

    t129 = ((x929>>(x930>x931))|x932);

    if (t129 != 2918LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x941 = 2;
	volatile int16_t x942 = 168;
	volatile int64_t x943 = INT64_MIN;
	int32_t t130 = INT32_MAX;

    t130 = ((x941>>(x942>x943))|x944);

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x949 = INT64_MAX;
	uint8_t x950 = UINT8_MAX;
	int8_t x951 = INT8_MAX;
	volatile int32_t x952 = INT32_MIN;
	static int64_t t131 = -442LL;

    t131 = ((x949>>(x950>x951))|x952);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x954 = UINT16_MAX;
	uint8_t x955 = UINT8_MAX;
	int32_t x956 = -1;
	int32_t t132 = -656;

    t132 = ((x953>>(x954>x955))|x956);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x961 = 574245876642136527LLU;
	volatile uint32_t x962 = UINT32_MAX;
	static uint64_t x963 = UINT64_MAX;
	static uint16_t x964 = 7U;
	static volatile uint64_t t133 = 330907463LLU;

    t133 = ((x961>>(x962>x963))|x964);

    if (t133 != 574245876642136527LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x965 = INT64_MAX;
	int8_t x966 = -57;
	int64_t x967 = -1LL;
	int16_t x968 = INT16_MIN;
	int64_t t134 = -28988901849720LL;

    t134 = ((x965>>(x966>x967))|x968);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x977 = 1U;
	int32_t x979 = INT32_MIN;
	int64_t x980 = INT64_MIN;
	int64_t t135 = -8240817787176LL;

    t135 = ((x977>>(x978>x979))|x980);

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x993 = INT16_MAX;
	int8_t x994 = -1;
	uint64_t x995 = UINT64_MAX;
	int64_t x996 = -882869645415LL;
	int64_t t136 = 121806334384231LL;

    t136 = ((x993>>(x994>x995))|x996);

    if (t136 != -882869633025LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1001 = UINT16_MAX;
	static int32_t x1002 = INT32_MAX;
	uint32_t x1003 = UINT32_MAX;
	int16_t x1004 = -1;
	int32_t t137 = -118;

    t137 = ((x1001>>(x1002>x1003))|x1004);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1005 = 1U;
	int64_t x1006 = -18LL;
	static volatile uint32_t x1007 = UINT32_MAX;
	uint8_t x1008 = 9U;

    t138 = ((x1005>>(x1006>x1007))|x1008);

    if (t138 != 9) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x1021 = 44699LLU;
	uint32_t x1022 = 55522U;
	uint32_t x1023 = 259U;
	static volatile uint64_t t139 = 517770174157022LLU;

    t139 = ((x1021>>(x1022>x1023))|x1024);

    if (t139 != 843629LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x1025 = 57LLU;
	uint32_t x1026 = UINT32_MAX;
	static uint8_t x1027 = 127U;
	static volatile int32_t x1028 = INT32_MIN;
	static volatile uint64_t t140 = 70LLU;

    t140 = ((x1025>>(x1026>x1027))|x1028);

    if (t140 != 18446744071562067996LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x1029 = 2LLU;
	uint8_t x1030 = 0U;
	volatile int64_t x1031 = -1LL;
	int8_t x1032 = -1;
	static volatile uint64_t t141 = UINT64_MAX;

    t141 = ((x1029>>(x1030>x1031))|x1032);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x1033 = 4;
	int8_t x1034 = INT8_MIN;
	volatile int16_t x1035 = INT16_MIN;
	int16_t x1036 = -1;

    t142 = ((x1033>>(x1034>x1035))|x1036);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1056 = 3U;

    t143 = ((x1053>>(x1054>x1055))|x1056);

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1057 = 3;
	int32_t x1058 = -1;
	uint16_t x1059 = 14663U;
	static uint16_t x1060 = 163U;
	static int32_t t144 = -116409132;

    t144 = ((x1057>>(x1058>x1059))|x1060);

    if (t144 != 163) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x1061 = INT64_MAX;
	volatile int8_t x1062 = -15;
	static int16_t x1063 = -1;
	static volatile int64_t x1064 = -364942733LL;

    t145 = ((x1061>>(x1062>x1063))|x1064);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x1070 = -1;
	static int16_t x1071 = INT16_MIN;
	int8_t x1072 = INT8_MIN;
	static int32_t t146 = 258354;

    t146 = ((x1069>>(x1070>x1071))|x1072);

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x1073 = 624643297882305LLU;
	volatile int16_t x1074 = 29;
	int32_t x1075 = -681;
	int32_t x1076 = INT32_MIN;
	volatile uint64_t t147 = 2371LLU;

    t147 = ((x1073>>(x1074>x1075))|x1076);

    if (t147 != 18446744071779178592LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1077 = 70U;
	int64_t x1078 = INT64_MIN;
	static int32_t x1079 = INT32_MIN;
	int16_t x1080 = 1;
	volatile int32_t t148 = 0;

    t148 = ((x1077>>(x1078>x1079))|x1080);

    if (t148 != 71) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1089 = UINT16_MAX;
	int16_t x1091 = -1;
	static int64_t x1092 = INT64_MIN;
	int64_t t149 = -4LL;

    t149 = ((x1089>>(x1090>x1091))|x1092);

    if (t149 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x1098 = -1LL;
	uint8_t x1099 = 87U;

    t150 = ((x1097>>(x1098>x1099))|x1100);

    if (t150 != 1023) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1105 = 8U;
	static int8_t x1106 = 5;
	uint32_t x1108 = UINT32_MAX;
	volatile uint32_t t151 = UINT32_MAX;

    t151 = ((x1105>>(x1106>x1107))|x1108);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1121 = 7;
	int64_t x1122 = 36351274LL;
	int32_t x1123 = -1;
	static volatile uint16_t x1124 = 66U;
	volatile int32_t t152 = 1247447;

    t152 = ((x1121>>(x1122>x1123))|x1124);

    if (t152 != 67) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x1125 = INT64_MAX;
	static uint64_t x1126 = 3017LLU;
	uint64_t x1127 = UINT64_MAX;
	static int16_t x1128 = INT16_MIN;

    t153 = ((x1125>>(x1126>x1127))|x1128);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x1129 = 33U;
	int32_t x1132 = -1;

    t154 = ((x1129>>(x1130>x1131))|x1132);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x1134 = UINT8_MAX;
	int32_t x1135 = -1;
	volatile int16_t x1136 = INT16_MIN;
	uint32_t t155 = 99500U;

    t155 = ((x1133>>(x1134>x1135))|x1136);

    if (t155 != 4294934549U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1137 = INT8_MAX;
	int16_t x1138 = -1;
	uint8_t x1140 = 8U;
	static volatile int32_t t156 = -11605580;

    t156 = ((x1137>>(x1138>x1139))|x1140);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1141 = 623U;
	volatile int16_t x1142 = 316;
	uint8_t x1143 = 0U;
	static int64_t x1144 = -13LL;
	volatile int64_t t157 = -598535755LL;

    t157 = ((x1141>>(x1142>x1143))|x1144);

    if (t157 != -9LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x1149 = 11U;
	int32_t x1151 = -1981;
	int16_t x1152 = INT16_MAX;
	static volatile int32_t t158 = -1;

    t158 = ((x1149>>(x1150>x1151))|x1152);

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x1161 = 3386530580LLU;
	int64_t x1163 = INT64_MIN;
	int64_t x1164 = 46559956066LL;
	uint64_t t159 = 1127376843LLU;

    t159 = ((x1161>>(x1162>x1163))|x1164);

    if (t159 != 47110270442LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x1169 = UINT16_MAX;
	int16_t x1171 = -1;
	int64_t x1172 = INT64_MAX;
	volatile int64_t t160 = INT64_MAX;

    t160 = ((x1169>>(x1170>x1171))|x1172);

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x1173 = 1;
	volatile int16_t x1174 = -14;
	volatile int8_t x1176 = INT8_MIN;
	int32_t t161 = 47;

    t161 = ((x1173>>(x1174>x1175))|x1176);

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x1177 = 2U;
	int8_t x1178 = INT8_MAX;
	int32_t x1179 = INT32_MIN;
	static int64_t x1180 = INT64_MAX;
	volatile int64_t t162 = INT64_MAX;

    t162 = ((x1177>>(x1178>x1179))|x1180);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x1185 = INT8_MAX;
	int8_t x1186 = -1;
	int8_t x1187 = INT8_MAX;
	static int64_t t163 = INT64_MAX;

    t163 = ((x1185>>(x1186>x1187))|x1188);

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x1189 = 26;
	static int32_t x1190 = 6313119;
	static volatile int64_t x1191 = -1LL;
	static uint32_t t164 = 76U;

    t164 = ((x1189>>(x1190>x1191))|x1192);

    if (t164 != 13821U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1193 = 843613934621735LLU;
	int16_t x1194 = -1;
	int32_t x1195 = INT32_MIN;
	int32_t x1196 = INT32_MIN;
	volatile uint64_t t165 = 683648898413888LLU;

    t165 = ((x1193>>(x1194>x1195))|x1196);

    if (t165 != 18446744071938722323LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1213 = 3;
	int16_t x1214 = -1;
	int32_t x1215 = INT32_MAX;
	volatile int32_t t166 = -35903818;

    t166 = ((x1213>>(x1214>x1215))|x1216);

    if (t166 != 3) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1217 = 49253577823386LL;
	int8_t x1218 = INT8_MIN;
	uint8_t x1219 = 5U;
	uint64_t x1220 = UINT64_MAX;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = ((x1217>>(x1218>x1219))|x1220);

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1221 = UINT8_MAX;
	volatile uint64_t x1223 = 1867LLU;
	int32_t x1224 = -1;
	static volatile int32_t t168 = 21625141;

    t168 = ((x1221>>(x1222>x1223))|x1224);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x1225 = 1U;
	int16_t x1227 = -9;
	uint64_t x1228 = UINT64_MAX;
	uint64_t t169 = UINT64_MAX;

    t169 = ((x1225>>(x1226>x1227))|x1228);

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1233 = 9417861460LL;
	volatile int64_t x1234 = -1LL;
	volatile int16_t x1236 = INT16_MAX;
	static volatile int64_t t170 = 14LL;

    t170 = ((x1233>>(x1234>x1235))|x1236);

    if (t170 != 9417883647LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x1237 = 194U;
	int8_t x1238 = 0;
	volatile int32_t t171 = -17;

    t171 = ((x1237>>(x1238>x1239))|x1240);

    if (t171 != 109) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1241 = 215460035269805655LL;
	int8_t x1242 = -26;

    t172 = ((x1241>>(x1242>x1243))|x1244);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1249 = 0;
	int64_t x1251 = INT64_MIN;
	uint32_t x1252 = UINT32_MAX;
	uint32_t t173 = UINT32_MAX;

    t173 = ((x1249>>(x1250>x1251))|x1252);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1257 = 4458U;
	int64_t x1258 = INT64_MIN;
	volatile int8_t x1259 = INT8_MIN;
	int8_t x1260 = INT8_MIN;
	uint32_t t174 = 211U;

    t174 = ((x1257>>(x1258>x1259))|x1260);

    if (t174 != 4294967274U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x1261 = 10779;
	static int8_t x1262 = 26;
	int8_t x1264 = INT8_MAX;
	volatile int32_t t175 = -7246201;

    t175 = ((x1261>>(x1262>x1263))|x1264);

    if (t175 != 5503) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1265 = 3U;
	int64_t x1266 = INT64_MIN;
	uint32_t x1267 = UINT32_MAX;
	int64_t x1268 = INT64_MIN;
	int64_t t176 = -803892036603266877LL;

    t176 = ((x1265>>(x1266>x1267))|x1268);

    if (t176 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1269 = 0;
	int8_t x1271 = 0;
	int8_t x1272 = -16;

    t177 = ((x1269>>(x1270>x1271))|x1272);

    if (t177 != -16) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1277 = 27U;
	int32_t x1279 = INT32_MIN;
	volatile uint16_t x1280 = 24262U;
	volatile uint32_t t178 = 0U;

    t178 = ((x1277>>(x1278>x1279))|x1280);

    if (t178 != 24287U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1289 = 373LLU;
	static uint32_t x1290 = 2937U;
	uint64_t x1292 = 1771357958130808011LLU;
	static uint64_t t179 = 1136652569579LLU;

    t179 = ((x1289>>(x1290>x1291))|x1292);

    if (t179 != 1771357958130808319LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1293 = 18392308LLU;
	static uint64_t x1295 = 184377424958629LLU;
	static int8_t x1296 = INT8_MIN;
	static volatile uint64_t t180 = 383238168854080939LLU;

    t180 = ((x1293>>(x1294>x1295))|x1296);

    if (t180 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1305 = 1U;
	int16_t x1306 = INT16_MIN;
	uint64_t x1307 = UINT64_MAX;
	int32_t x1308 = INT32_MAX;
	volatile int32_t t181 = INT32_MAX;

    t181 = ((x1305>>(x1306>x1307))|x1308);

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1309 = UINT16_MAX;
	int8_t x1310 = INT8_MIN;
	int8_t x1311 = INT8_MIN;
	int16_t x1312 = -3920;
	static volatile int32_t t182 = -1;

    t182 = ((x1309>>(x1310>x1311))|x1312);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1317 = UINT16_MAX;

    t183 = ((x1317>>(x1318>x1319))|x1320);

    if (t183 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1325 = 0;
	static uint8_t x1326 = 0U;
	uint8_t x1328 = UINT8_MAX;
	volatile int32_t t184 = -31796;

    t184 = ((x1325>>(x1326>x1327))|x1328);

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1333 = 0;
	static uint64_t x1335 = UINT64_MAX;
	int16_t x1336 = INT16_MIN;
	int32_t t185 = 1098085;

    t185 = ((x1333>>(x1334>x1335))|x1336);

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1337 = UINT16_MAX;
	volatile int32_t x1339 = INT32_MAX;
	int64_t t186 = -3749361LL;

    t186 = ((x1337>>(x1338>x1339))|x1340);

    if (t186 != 122291054182399LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1341 = UINT16_MAX;
	volatile int16_t x1343 = 83;
	volatile int32_t x1344 = INT32_MIN;

    t187 = ((x1341>>(x1342>x1343))|x1344);

    if (t187 != -2147418113) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1349 = INT32_MAX;
	int32_t x1350 = INT32_MIN;
	static int16_t x1351 = INT16_MAX;
	volatile int32_t t188 = 11;

    t188 = ((x1349>>(x1350>x1351))|x1352);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1353 = 26;
	static uint16_t x1354 = UINT16_MAX;
	int8_t x1355 = INT8_MIN;
	volatile int32_t t189 = -84993101;

    t189 = ((x1353>>(x1354>x1355))|x1356);

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1357 = 1705759308180LLU;
	static uint16_t x1358 = 159U;
	static int32_t x1360 = INT32_MAX;

    t190 = ((x1357>>(x1358>x1359))|x1360);

    if (t190 != 854698491903LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1365 = 45876U;
	int32_t x1366 = -2;
	uint64_t x1367 = 253519263715052LLU;
	int64_t t191 = -104877180711LL;

    t191 = ((x1365>>(x1366>x1367))|x1368);

    if (t191 != -1299750141985794LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1373 = INT64_MAX;
	int16_t x1374 = INT16_MIN;
	int32_t x1375 = INT32_MAX;
	static uint16_t x1376 = 0U;
	static int64_t t192 = INT64_MAX;

    t192 = ((x1373>>(x1374>x1375))|x1376);

    if (t192 != INT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1377 = INT16_MAX;
	int64_t x1378 = 166534636LL;
	uint16_t x1379 = UINT16_MAX;
	volatile uint8_t x1380 = UINT8_MAX;
	static volatile int32_t t193 = -884;

    t193 = ((x1377>>(x1378>x1379))|x1380);

    if (t193 != 16383) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1382 = 362189LLU;
	int16_t x1383 = 4;
	uint32_t x1384 = 6904U;

    t194 = ((x1381>>(x1382>x1383))|x1384);

    if (t194 != 233457610825723LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1385 = 2194;
	static volatile int16_t x1386 = INT16_MIN;
	static volatile int8_t x1387 = INT8_MIN;
	uint64_t x1388 = 2181891014265630LLU;
	uint64_t t195 = 1962302LLU;

    t195 = ((x1385>>(x1386>x1387))|x1388);

    if (t195 != 2181891014265758LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1389 = 1219989555U;
	uint16_t x1390 = UINT16_MAX;
	static int32_t x1392 = 1259;
	volatile uint32_t t196 = 77967U;

    t196 = ((x1389>>(x1390>x1391))|x1392);

    if (t196 != 609996027U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1409 = 18U;
	static int16_t x1410 = INT16_MIN;
	int32_t x1411 = -11867;
	int32_t t197 = -25593;

    t197 = ((x1409>>(x1410>x1411))|x1412);

    if (t197 != -110) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1430 = -7;
	int16_t x1432 = INT16_MIN;

    t198 = ((x1429>>(x1430>x1431))|x1432);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1433 = 6356;
	int64_t x1434 = -23477728725375LL;
	uint8_t x1435 = 8U;
	uint32_t t199 = UINT32_MAX;

    t199 = ((x1433>>(x1434>x1435))|x1436);

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

