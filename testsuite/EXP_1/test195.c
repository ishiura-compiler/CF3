#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = UINT32_MAX;
volatile int32_t t1 = -45;
static volatile int8_t x19 = -1;
int16_t x33 = -1;
int32_t x36 = INT32_MIN;
int32_t x38 = INT32_MIN;
int8_t x43 = -12;
volatile uint64_t t8 = 2217648183LLU;
int8_t x53 = 0;
volatile uint32_t x54 = 5516U;
volatile int32_t x55 = -1;
uint64_t x67 = UINT64_MAX;
static uint64_t t11 = 258630539LLU;
int16_t x69 = 15405;
uint32_t x72 = UINT32_MAX;
volatile int64_t x87 = -1LL;
uint8_t x88 = 2U;
int8_t x89 = 0;
uint16_t x92 = 6U;
static uint32_t x93 = 5U;
static volatile int64_t x94 = -1LL;
int32_t x96 = 1922378;
int32_t x102 = INT32_MIN;
uint8_t x110 = 45U;
int32_t x112 = 7926;
volatile int32_t x114 = 1376065;
int64_t x115 = INT64_MIN;
int16_t x123 = INT16_MIN;
int32_t x129 = INT32_MIN;
int64_t x130 = 241LL;
int64_t x144 = 118825610333216623LL;
int8_t x155 = -1;
static volatile int8_t x162 = 2;
int8_t x170 = INT8_MIN;
volatile int64_t x180 = INT64_MIN;
volatile uint64_t t40 = 4240349301264LLU;
int8_t x207 = -1;
int32_t x217 = INT32_MAX;
uint64_t t47 = 98491759327292LLU;
static volatile int32_t t48 = 1218;
uint32_t x249 = 182U;
static uint64_t x265 = 0LLU;
int8_t x274 = 1;
int16_t x276 = -179;
uint16_t x277 = 1U;
static int64_t x278 = -1012666641LL;
int32_t x279 = -115217175;
int8_t x280 = -1;
uint64_t x282 = 6185509238LLU;
int32_t x283 = INT32_MIN;
volatile uint64_t t55 = 991058179349344LLU;
uint32_t x285 = 0U;
volatile uint16_t x286 = UINT16_MAX;
int64_t x299 = INT64_MIN;
static volatile uint8_t x307 = 111U;
static int64_t t61 = -27812002076115470LL;
int64_t x330 = -1LL;
volatile uint64_t t70 = 5067622LLU;
static volatile uint16_t x353 = UINT16_MAX;
int8_t x356 = INT8_MIN;
int8_t x357 = INT8_MIN;
uint64_t x372 = 1007130463788LLU;
uint64_t t75 = 3730179629022457LLU;
volatile int8_t x387 = INT8_MIN;
int32_t x389 = -1;
int32_t x390 = -1;
int64_t x407 = 957026313512307224LL;
uint16_t x412 = UINT16_MAX;
volatile int64_t t81 = -322627768155LL;
int16_t x419 = INT16_MIN;
int32_t x420 = INT32_MIN;
static int16_t x422 = INT16_MIN;
volatile uint32_t t83 = 12436140U;
int8_t x425 = 5;
uint64_t x427 = UINT64_MAX;
uint64_t x433 = 122218208LLU;
int16_t x434 = INT16_MAX;
static int8_t x435 = 6;
volatile uint8_t x440 = 4U;
uint16_t x446 = 11353U;
volatile int64_t t88 = 1867362983587445LL;
int64_t x453 = -235925487154271LL;
static volatile uint64_t x456 = 112LLU;
static int32_t x457 = -1;
static int8_t x470 = INT8_MIN;
static int64_t x473 = -1LL;
static uint64_t x474 = 2553279166820474LLU;
uint8_t x475 = UINT8_MAX;
volatile int16_t x477 = -1;
volatile uint16_t x479 = UINT16_MAX;
volatile int64_t x482 = -1LL;
uint16_t x483 = 202U;
uint16_t x484 = 18U;
volatile int8_t x489 = -14;
int64_t x491 = INT64_MIN;
volatile uint64_t x502 = UINT64_MAX;


void f0(void) {
	static int32_t x2 = -1;
	uint8_t x3 = 3U;
	uint32_t x4 = 1033U;
	volatile uint32_t t0 = 4948734U;

	t0 = (((x1-x2)-x3)^x4);

	if (t0 != 4294966260U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 11;
	static int16_t x6 = INT16_MIN;
	int8_t x7 = 27;
	int16_t x8 = INT16_MIN;

	t1 = (((x5-x6)-x7)^x8);

	if (t1 != -16) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 24542438LLU;
	int16_t x18 = INT16_MIN;
	uint32_t x20 = 6927U;
	uint64_t t2 = 430381368871131769LLU;

	t2 = (((x17-x18)-x19)^x20);

	if (t2 != 24569832LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x25 = UINT64_MAX;
	int8_t x26 = 1;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t3 = 403803094691LLU;

	t3 = (((x25-x26)-x27)^x28);

	if (t3 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 4660571U;
	static volatile int8_t x30 = -49;
	uint32_t x31 = 102185585U;
	int64_t x32 = -29436586504LL;
	int64_t t4 = 48796369839012LL;

	t4 = (((x29-x30)-x31)^x32);

	if (t4 != -26317244701LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x34 = -1LL;
	int64_t x35 = -408185755984911327LL;
	volatile int64_t t5 = -9229339LL;

	t5 = (((x33-x34)-x35)^x36);

	if (t5 != -408185755587126305LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	static uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	static int32_t t6 = 13084;

	t6 = (((x37-x38)-x39)^x40);

	if (t6 != -33023) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -1;
	int8_t x42 = -1;
	int32_t x44 = INT32_MIN;
	static volatile int32_t t7 = 95366622;

	t7 = (((x41-x42)-x43)^x44);

	if (t7 != -2147483636) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 16578645330LLU;
	uint64_t x46 = 10569606678956LLU;
	int64_t x47 = -1LL;
	int32_t x48 = INT32_MIN;

	t8 = (((x45-x46)-x47)^x48);

	if (t8 != 10554588742567LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x56 = INT32_MAX;
	uint32_t t9 = 15867U;

	t9 = (((x53-x54)-x55)^x56);

	if (t9 != 2147489162U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 3U;
	int64_t x62 = INT64_MAX;
	int64_t x63 = -1LL;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t10 = 57093LLU;

	t10 = (((x61-x62)-x63)^x64);

	if (t10 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -1;
	int32_t x66 = INT32_MAX;
	static volatile int16_t x68 = INT16_MIN;

	t11 = (((x65-x66)-x67)^x68);

	if (t11 != 2147450881LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x70 = INT16_MAX;
	static uint32_t x71 = 196U;
	uint32_t t12 = 4U;

	t12 = (((x69-x70)-x71)^x72);

	if (t12 != 17557U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MAX;
	static uint16_t x74 = 2679U;
	uint8_t x75 = UINT8_MAX;
	static volatile uint64_t x76 = UINT64_MAX;
	uint64_t t13 = 328319LLU;

	t13 = (((x73-x74)-x75)^x76);

	if (t13 != 18446744073709521782LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = 1;
	volatile uint32_t x78 = 7103U;
	static uint64_t x79 = 12502846865102LLU;
	int32_t x80 = INT32_MAX;
	static volatile uint64_t t14 = 4278299730455056707LLU;

	t14 = (((x77-x78)-x79)^x80);

	if (t14 != 18446731573404310155LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1399024538426409LL;
	int8_t x83 = -6;
	volatile int64_t x84 = INT64_MIN;
	int64_t t15 = -23875751556998LL;

	t15 = (((x81-x82)-x83)^x84);

	if (t15 != -9221973012316382161LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	static uint8_t x86 = UINT8_MAX;
	int64_t t16 = 16405084557LL;

	t16 = (((x85-x86)-x87)^x88);

	if (t16 != -253LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x90 = 9U;
	uint32_t x91 = 2057259U;
	uint32_t t17 = 21928716U;

	t17 = (((x89-x90)-x91)^x92);

	if (t17 != 4292910026U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x95 = -10303;
	int64_t t18 = 29622434457442LL;

	t18 = (((x93-x94)-x95)^x96);

	if (t18 != 1932559LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 7U;
	int64_t x98 = -1LL;
	uint64_t x99 = 77314803447972118LLU;
	int8_t x100 = -1;
	uint64_t t19 = 299271605160204LLU;

	t19 = (((x97-x98)-x99)^x100);

	if (t19 != 77314803447972109LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile int64_t x103 = -1LL;
	volatile int64_t x104 = INT64_MIN;
	int64_t t20 = 1023763860LL;

	t20 = (((x101-x102)-x103)^x104);

	if (t20 != 2147483649LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = -236306045878872170LL;
	int8_t x106 = -10;
	volatile int64_t x107 = INT64_MIN;
	int8_t x108 = -1;
	int64_t t21 = -53LL;

	t21 = (((x105-x106)-x107)^x108);

	if (t21 != -8987065990975903649LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 4U;
	static int16_t x111 = 3153;
	volatile int32_t t22 = 1226694;

	t22 = (((x109-x110)-x111)^x112);

	if (t22 != -4752) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	static int16_t x116 = INT16_MIN;
	volatile int64_t t23 = -45421293773901622LL;

	t23 = (((x113-x114)-x115)^x116);

	if (t23 != -9223372036853432130LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x117 = UINT16_MAX;
	volatile int16_t x118 = INT16_MAX;
	uint32_t x119 = 1772944U;
	uint8_t x120 = 26U;
	uint32_t t24 = 0U;

	t24 = (((x117-x118)-x119)^x120);

	if (t24 != 4293227114U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = 22974788065LL;
	int32_t x122 = 1687396;
	volatile int32_t x124 = -3;
	volatile int64_t t25 = 342197707406LL;

	t25 = (((x121-x122)-x123)^x124);

	if (t25 != -22973133440LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x131 = -425;
	static volatile int32_t x132 = INT32_MIN;
	static int64_t t26 = -1LL;

	t26 = (((x129-x130)-x131)^x132);

	if (t26 != 184LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -10526;
	volatile int16_t x134 = 121;
	int16_t x135 = INT16_MAX;
	int8_t x136 = 59;
	volatile int32_t t27 = 5734087;

	t27 = (((x133-x134)-x135)^x136);

	if (t27 != -43439) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = -554;
	int64_t x139 = -29273LL;
	static volatile uint32_t x140 = UINT32_MAX;
	volatile int64_t t28 = -438LL;

	t28 = (((x137-x138)-x139)^x140);

	if (t28 != 4294937596LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	uint8_t x143 = 38U;
	int64_t t29 = 214391LL;

	t29 = (((x141-x142)-x143)^x144);

	if (t29 != -118825609590644939LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int32_t x147 = 8555424;
	volatile int16_t x148 = INT16_MIN;
	int64_t t30 = 60353378411957LL;

	t30 = (((x145-x146)-x147)^x148);

	if (t30 != -9223372036846193569LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = -1;
	int8_t x151 = -21;
	uint8_t x152 = 0U;
	volatile int32_t t31 = 31148;

	t31 = (((x149-x150)-x151)^x152);

	if (t31 != -32746) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x153 = 50;
	int16_t x154 = INT16_MAX;
	static int16_t x156 = INT16_MIN;
	int32_t t32 = 1;

	t32 = (((x153-x154)-x155)^x156);

	if (t32 != 52) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = 2;
	volatile int64_t x158 = -1LL;
	static uint8_t x159 = 2U;
	volatile int64_t x160 = 2348589401526LL;
	int64_t t33 = -41LL;

	t33 = (((x157-x158)-x159)^x160);

	if (t33 != 2348589401527LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = 59503556U;
	int64_t x163 = -1LL;
	volatile int8_t x164 = INT8_MIN;
	volatile int64_t t34 = 1787399877646LL;

	t34 = (((x161-x162)-x163)^x164);

	if (t34 != -59503549LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x165 = UINT16_MAX;
	volatile uint8_t x166 = 3U;
	uint64_t x167 = UINT64_MAX;
	uint32_t x168 = 554316064U;
	static volatile uint64_t t35 = 22749746070990LLU;

	t35 = (((x165-x166)-x167)^x168);

	if (t35 != 554356445LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = UINT64_MAX;
	uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 2LLU;
	volatile uint64_t t36 = 1LLU;

	t36 = (((x169-x170)-x171)^x172);

	if (t36 != 18446744073709486210LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x177 = INT8_MAX;
	uint32_t x178 = 1U;
	static uint8_t x179 = UINT8_MAX;
	int64_t t37 = -581675667339LL;

	t37 = (((x177-x178)-x179)^x180);

	if (t37 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = 166937019;
	volatile int64_t x182 = -17858883242LL;
	uint16_t x183 = 908U;
	int16_t x184 = -1;
	int64_t t38 = -436739725LL;

	t38 = (((x181-x182)-x183)^x184);

	if (t38 != -18025819354LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x193 = -256793805373159189LL;
	uint64_t x194 = UINT64_MAX;
	static int32_t x195 = INT32_MIN;
	static int32_t x196 = 70320;
	static volatile uint64_t t39 = 463LLU;

	t39 = (((x193-x194)-x195)^x196);

	if (t39 != 18189950270483946076LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = 23167736209LLU;
	static volatile int8_t x202 = 1;
	int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MIN;

	t40 = (((x201-x202)-x203)^x204);

	if (t40 != 18446744051780098449LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x205 = -46130122;
	uint64_t x206 = UINT64_MAX;
	int32_t x208 = -1;
	uint64_t t41 = 150615386LLU;

	t41 = (((x205-x206)-x207)^x208);

	if (t41 != 46130119LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x213 = 13577788U;
	int8_t x214 = INT8_MIN;
	static uint64_t x215 = 24075006001155058LLU;
	static volatile int32_t x216 = -7748592;
	volatile uint64_t t42 = 56974LLU;

	t42 = (((x213-x214)-x215)^x216);

	if (t42 != 24075005984564954LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x218 = 11;
	int8_t x219 = 0;
	volatile int32_t x220 = -1;
	static volatile int32_t t43 = 5666;

	t43 = (((x217-x218)-x219)^x220);

	if (t43 != -2147483637) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MAX;
	int64_t x222 = 63636149071LL;
	int64_t x223 = -1LL;
	uint32_t x224 = 374U;
	static volatile int64_t t44 = -13288282LL;

	t44 = (((x221-x222)-x223)^x224);

	if (t44 != -63636149177LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = 14;
	uint64_t x230 = 26801228558607LLU;
	int32_t x231 = INT32_MIN;
	static int8_t x232 = -1;
	uint64_t t45 = 2350692LLU;

	t45 = (((x229-x230)-x231)^x232);

	if (t45 != 26799081074944LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x233 = UINT16_MAX;
	static int16_t x234 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = INT32_MIN;
	static volatile uint32_t t46 = 361U;

	t46 = (((x233-x234)-x235)^x236);

	if (t46 != 2147581952U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x242 = 340739408U;
	int8_t x243 = INT8_MAX;
	volatile uint64_t x244 = UINT64_MAX;

	t47 = (((x241-x242)-x243)^x244);

	if (t47 != 18446744071902807503LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = 1;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 739U;

	t48 = (((x245-x246)-x247)^x248);

	if (t48 != 2147483036) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x250 = 0LL;
	static int16_t x251 = INT16_MIN;
	uint16_t x252 = 13U;
	volatile int64_t t49 = -16407655609112LL;

	t49 = (((x249-x250)-x251)^x252);

	if (t49 != 32955LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = 211210043;
	volatile int64_t x258 = INT64_MAX;
	int64_t x259 = INT64_MIN;
	uint16_t x260 = 0U;
	static volatile int64_t t50 = 45774520940080LL;

	t50 = (((x257-x258)-x259)^x260);

	if (t50 != 211210044LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x261 = INT16_MIN;
	uint8_t x262 = 1U;
	int16_t x263 = INT16_MIN;
	static volatile int32_t x264 = INT32_MAX;
	int32_t t51 = INT32_MIN;

	t51 = (((x261-x262)-x263)^x264);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = 54;
	uint64_t t52 = 20586824608LLU;

	t52 = (((x265-x266)-x267)^x268);

	if (t52 != 9223372036854775991LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x273 = 379U;
	int8_t x275 = INT8_MIN;
	volatile int32_t t53 = -23477063;

	t53 = (((x273-x274)-x275)^x276);

	if (t53 != -329) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t t54 = 3935685411072LL;

	t54 = (((x277-x278)-x279)^x280);

	if (t54 != -1127883818LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x281 = INT64_MAX;
	int32_t x284 = 18335;

	t55 = (((x281-x282)-x283)^x284);

	if (t55 != 9223372032816765206LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x287 = UINT16_MAX;
	uint32_t x288 = 1480301U;
	uint32_t t56 = 24435023U;

	t56 = (((x285-x286)-x287)^x288);

	if (t56 != 4293432943U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = -1;
	static uint16_t x290 = 0U;
	volatile uint32_t x291 = 424U;
	uint64_t x292 = UINT64_MAX;
	static uint64_t t57 = 1LLU;

	t57 = (((x289-x290)-x291)^x292);

	if (t57 != 18446744069414584744LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile uint32_t x294 = 15U;
	uint16_t x295 = 488U;
	int16_t x296 = 1069;
	uint32_t t58 = 105601U;

	t58 = (((x293-x294)-x295)^x296);

	if (t58 != 4294965668U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x297 = -79042;
	int32_t x298 = 302380;
	int16_t x300 = INT16_MAX;
	volatile int64_t t59 = -318LL;

	t59 = (((x297-x298)-x299)^x300);

	if (t59 != 9223372036854403565LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = -1;
	int8_t x302 = INT8_MAX;
	volatile int8_t x303 = -1;
	int32_t x304 = 24862;
	static int32_t t60 = -103250;

	t60 = (((x301-x302)-x303)^x304);

	if (t60 != -24929) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x305 = 67U;
	int16_t x306 = INT16_MIN;
	int64_t x308 = INT64_MIN;

	t61 = (((x305-x306)-x307)^x308);

	if (t61 != -9223372036854743084LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = -206;
	int32_t x310 = -41674;
	static int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t62 = 47;

	t62 = (((x309-x310)-x311)^x312);

	if (t62 != -8579) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = UINT8_MAX;
	static uint8_t x314 = 44U;
	volatile int8_t x315 = INT8_MIN;
	int32_t x316 = -1;
	int32_t t63 = 2367;

	t63 = (((x313-x314)-x315)^x316);

	if (t63 != -340) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x317 = INT16_MAX;
	static uint64_t x318 = UINT64_MAX;
	volatile int32_t x319 = -1645135;
	int64_t x320 = INT64_MIN;
	uint64_t t64 = 26324156763859206LLU;

	t64 = (((x317-x318)-x319)^x320);

	if (t64 != 9223372036856453711LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x321 = -7407;
	volatile int8_t x322 = 1;
	int32_t x323 = -66;
	volatile int16_t x324 = INT16_MIN;
	int32_t t65 = -119729;

	t65 = (((x321-x322)-x323)^x324);

	if (t65 != 25426) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MAX;
	static uint32_t x326 = UINT32_MAX;
	uint16_t x327 = 1U;
	uint32_t x328 = 9U;
	volatile uint32_t t66 = 26U;

	t66 = (((x325-x326)-x327)^x328);

	if (t66 != 118U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x329 = 3U;
	int8_t x331 = -1;
	int64_t x332 = -81525330450247675LL;
	volatile int64_t t67 = -7LL;

	t67 = (((x329-x330)-x331)^x332);

	if (t67 != -81525330450247680LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x333 = 278558299497890LL;
	int64_t x334 = -1LL;
	int8_t x335 = 0;
	int16_t x336 = INT16_MIN;
	volatile int64_t t68 = -16458802LL;

	t68 = (((x333-x334)-x335)^x336);

	if (t68 != -278558299511389LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;
	static int64_t t69 = -13363882969312LL;

	t69 = (((x341-x342)-x343)^x344);

	if (t69 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x345 = INT64_MAX;
	uint32_t x346 = 12U;
	static uint64_t x347 = 158915LLU;
	uint8_t x348 = 25U;

	t70 = (((x345-x346)-x347)^x348);

	if (t70 != 9223372036854616873LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x349 = -1LL;
	volatile int32_t x350 = -3118960;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;
	static int64_t t71 = 14LL;

	t71 = (((x349-x350)-x351)^x352);

	if (t71 != 2150602640LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x354 = -21;
	int32_t x355 = -1163;
	static int32_t t72 = -118282723;

	t72 = (((x353-x354)-x355)^x356);

	if (t72 != -66785) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x358 = -1;
	volatile int32_t x359 = INT32_MIN;
	static uint32_t x360 = UINT32_MAX;
	uint32_t t73 = 3681U;

	t73 = (((x357-x358)-x359)^x360);

	if (t73 != 2147483774U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x365 = INT8_MIN;
	int64_t x366 = -1LL;
	static int8_t x367 = -1;
	static int64_t x368 = -34941176613226056LL;
	volatile int64_t t74 = -101LL;

	t74 = (((x365-x366)-x367)^x368);

	if (t74 != 34941176613226042LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x369 = 29U;
	static volatile int8_t x370 = -1;
	int16_t x371 = -898;

	t75 = (((x369-x370)-x371)^x372);

	if (t75 != 1007130463628LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x385 = 29U;
	int64_t x386 = -1LL;
	volatile int16_t x388 = INT16_MAX;
	int64_t t76 = 544LL;

	t76 = (((x385-x386)-x387)^x388);

	if (t76 != 32609LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x391 = -841065;
	uint64_t x392 = 311LLU;
	uint64_t t77 = 352812398952284404LLU;

	t77 = (((x389-x390)-x391)^x392);

	if (t77 != 840798LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x397 = -88068596350425LL;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = 0LL;
	volatile int8_t x400 = -59;
	uint64_t t78 = 6LLU;

	t78 = (((x397-x398)-x399)^x400);

	if (t78 != 88068596350445LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x401 = -1LL;
	uint16_t x402 = 163U;
	static int32_t x403 = 1;
	static volatile int8_t x404 = INT8_MIN;
	volatile int64_t t79 = 489093812542161082LL;

	t79 = (((x401-x402)-x403)^x404);

	if (t79 != 219LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x405 = 1576349U;
	int32_t x406 = 49607514;
	volatile uint64_t x408 = 432479LLU;
	volatile uint64_t t80 = 23283194003605LLU;

	t80 = (((x405-x406)-x407)^x408);

	if (t80 != 17489717764444539252LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x409 = 190088U;
	int64_t x410 = INT64_MAX;
	uint16_t x411 = 0U;

	t81 = (((x409-x410)-x411)^x412);

	if (t81 != -9223372036854638218LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x417 = 3U;
	static int32_t x418 = -2;
	volatile int32_t t82 = 86463;

	t82 = (((x417-x418)-x419)^x420);

	if (t82 != -2147450875) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x423 = -1;
	uint32_t x424 = UINT32_MAX;

	t83 = (((x421-x422)-x423)^x424);

	if (t83 != 4294868991U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x426 = -2934090;
	static volatile int32_t x428 = INT32_MAX;
	uint64_t t84 = 8807514657922LLU;

	t84 = (((x425-x426)-x427)^x428);

	if (t84 != 2144549551LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x429 = 566395586840530631LLU;
	static volatile int8_t x430 = INT8_MAX;
	static int64_t x431 = -1LL;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t85 = 232002240066570624LLU;

	t85 = (((x429-x430)-x431)^x432);

	if (t85 != 17880348485123477065LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x436 = INT8_MIN;
	static uint64_t t86 = 237LLU;

	t86 = (((x433-x434)-x435)^x436);

	if (t86 != 18446744073587366235LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x437 = -12350849;
	int64_t x438 = INT64_MIN;
	int64_t x439 = 282254146456LL;
	volatile int64_t t87 = 5LL;

	t87 = (((x437-x438)-x439)^x440);

	if (t87 != 9223371754588278499LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x445 = -1;
	volatile int64_t x447 = 45861684601918LL;
	uint16_t x448 = UINT16_MAX;

	t88 = (((x445-x446)-x447)^x448);

	if (t88 != -45861684604777LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = 114;
	int8_t x450 = INT8_MIN;
	int8_t x451 = -1;
	volatile int8_t x452 = 10;
	int32_t t89 = 747;

	t89 = (((x449-x450)-x451)^x452);

	if (t89 != 249) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x454 = -61;
	int8_t x455 = -1;
	uint64_t t90 = 64003LLU;

	t90 = (((x453-x454)-x455)^x456);

	if (t90 != 18446508148222397359LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x458 = INT8_MAX;
	uint16_t x459 = 250U;
	uint8_t x460 = 122U;
	int32_t t91 = -7505839;

	t91 = (((x457-x458)-x459)^x460);

	if (t91 != -260) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x461 = -58;
	int32_t x462 = INT32_MIN;
	int8_t x463 = -1;
	uint16_t x464 = 1978U;
	volatile int32_t t92 = -143927417;

	t92 = (((x461-x462)-x463)^x464);

	if (t92 != 2147481725) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x465 = -1467727343204LL;
	uint16_t x466 = 876U;
	int16_t x467 = INT16_MIN;
	int32_t x468 = 5412405;
	int64_t t93 = -4300689435904LL;

	t93 = (((x465-x466)-x467)^x468);

	if (t93 != -1467722229755LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x469 = INT8_MAX;
	uint64_t x471 = 1056424997086LLU;
	int32_t x472 = INT32_MAX;
	uint64_t t94 = 170335LLU;

	t94 = (((x469-x470)-x471)^x472);

	if (t94 != 18446743019158122462LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x476 = UINT8_MAX;
	uint64_t t95 = 1883079687742LLU;

	t95 = (((x473-x474)-x475)^x476);

	if (t95 != 18444190794542730873LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x478 = 9;
	int8_t x480 = INT8_MIN;
	int32_t t96 = -185;

	t96 = (((x477-x478)-x479)^x480);

	if (t96 != 65655) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x481 = INT16_MIN;
	static int64_t t97 = -3701935067346660LL;

	t97 = (((x481-x482)-x483)^x484);

	if (t97 != -32987LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x490 = -1;
	volatile int32_t x492 = INT32_MIN;
	volatile int64_t t98 = 5947LL;

	t98 = (((x489-x490)-x491)^x492);

	if (t98 != -9223372034707292173LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x501 = UINT8_MAX;
	uint32_t x503 = 41618994U;
	uint8_t x504 = UINT8_MAX;
	uint64_t t99 = 6456212565086257LLU;

	t99 = (((x501-x502)-x503)^x504);

	if (t99 != 18446744073667932721LLU) { NG(); } else { ; }
	
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

