#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 151101730;
static uint16_t x11 = UINT16_MAX;
uint64_t t2 = 2053353LLU;
int8_t x19 = INT8_MIN;
volatile int8_t x20 = -1;
static int32_t t3 = -112150;
volatile int16_t x23 = INT16_MIN;
int16_t x26 = -3472;
uint64_t x38 = 31LLU;
static uint64_t x62 = 57327316787LLU;
int8_t x63 = INT8_MAX;
int64_t x72 = -1LL;
static volatile int64_t t11 = -866263796798050425LL;
static int8_t x78 = -1;
static volatile int8_t x80 = 48;
static int32_t t13 = 28;
static uint64_t x98 = 804830767561438LLU;
int16_t x107 = 0;
int16_t x108 = 13380;
static uint64_t t18 = 56990255LLU;
uint64_t x121 = 282855341049864637LLU;
static uint64_t t20 = 14611580705LLU;
int64_t x156 = INT64_MIN;
static uint32_t t23 = 278U;
static uint8_t x179 = UINT8_MAX;
uint8_t x189 = 3U;
static uint64_t x197 = UINT64_MAX;
uint16_t x203 = 45U;
uint8_t x209 = 108U;
static int64_t x210 = -2LL;
volatile int64_t t32 = 21797827071LL;
uint64_t x223 = 129696956672621012LLU;
static uint32_t x227 = 4768U;
int16_t x244 = INT16_MIN;
uint64_t t39 = 11273LLU;
static volatile uint64_t x246 = 52585202250634799LLU;
uint32_t x250 = 2596U;
volatile uint64_t t41 = 262LLU;
uint32_t x257 = 7U;
int16_t x259 = -1;
static int32_t x263 = -1;
int64_t x268 = -1LL;
int64_t t44 = -19943LL;
int32_t x287 = 281894351;
uint64_t x288 = 11751337949313LLU;
static uint32_t x294 = UINT32_MAX;
volatile uint64_t t50 = 10251795108LLU;
static int8_t x309 = INT8_MIN;
volatile uint8_t x312 = 8U;
uint64_t x329 = UINT64_MAX;
volatile uint64_t t55 = 17140053290992771LLU;
static int8_t x343 = -1;
volatile uint64_t x348 = 349420LLU;
int64_t x358 = 418417985637LL;
int64_t t60 = 25952645719LL;
static int16_t x381 = INT16_MAX;
uint64_t x383 = 230237197LLU;
int8_t x397 = INT8_MIN;
int32_t t64 = 0;
int16_t x410 = -10;
static uint64_t x427 = UINT64_MAX;
int8_t x428 = -1;
static volatile int8_t x433 = -14;
int16_t x436 = INT16_MIN;
int16_t x437 = 7;
uint32_t x440 = 1315788746U;
volatile int32_t t73 = -527778;
int16_t x475 = -1;
int16_t x493 = -3;
volatile int64_t x496 = -1LL;
volatile int64_t t80 = 3324385LL;
uint32_t x518 = 811U;
uint32_t x519 = 48U;
uint8_t x525 = 1U;
uint8_t x530 = UINT8_MAX;
int16_t x546 = INT16_MIN;
int8_t x577 = -5;
volatile int8_t x578 = INT8_MIN;
uint16_t x581 = 0U;
volatile int8_t x583 = -1;
uint16_t x586 = 82U;
int64_t x589 = INT64_MIN;
uint64_t x591 = 860895LLU;
uint8_t x592 = UINT8_MAX;
static int64_t x621 = -1LL;
volatile uint32_t t98 = 1276348U;
volatile uint32_t x637 = 22062U;
int8_t x638 = -12;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	int16_t x3 = -1885;
	static int8_t x4 = INT8_MIN;

	t0 = (x1*((x2+x3)^x4));

	if (t0 != -64061440) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 2457593383543647302LLU;
	int32_t x6 = -2020;
	volatile uint32_t x7 = 6U;
	static int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 30LLU;

	t1 = (x5*((x6+x7)^x8));

	if (t1 != 6401041121884221772LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 207032192394426LLU;
	uint32_t x10 = 1716717U;
	int8_t x12 = INT8_MIN;

	t2 = (x9*((x10+x11)^x12));

	if (t2 != 8060529565857360504LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -3;
	uint8_t x18 = UINT8_MAX;

	t3 = (x17*((x18+x19)^x20));

	if (t3 != 384) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	volatile int64_t x22 = 7937682317729407LL;
	uint16_t x24 = 10257U;
	int64_t t4 = 1888892LL;

	t4 = (x21*((x22+x23)^x24));

	if (t4 != -1016023336665954048LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	uint8_t x27 = UINT8_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	static volatile int32_t t5 = -1;

	t5 = (x25*((x26+x27)^x28));

	if (t5 != 62320) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 0U;
	uint8_t x34 = 43U;
	int8_t x35 = 0;
	static int8_t x36 = INT8_MAX;
	int32_t t6 = 3134986;

	t6 = (x33*((x34+x35)^x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 126468;
	int64_t x39 = -83660576422515424LL;
	uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 1212580492723LLU;

	t7 = (x37*((x38+x39)^x40));

	if (t7 != 10401424767103519488LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -1;
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -1;
	volatile int64_t x48 = 6715864085181998LL;
	int64_t t8 = -418LL;

	t8 = (x45*((x46+x47)^x48));

	if (t8 != -6715860154042832LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x61 = INT16_MIN;
	int32_t x64 = INT32_MAX;
	static uint64_t t9 = 66LLU;

	t9 = (x61*((x62+x63)^x64));

	if (t9 != 18444893031788806144LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = -1;
	static int16_t x66 = -1;
	static uint16_t x67 = 4U;
	int32_t x68 = -50750;
	int32_t t10 = 511;

	t10 = (x65*((x66+x67)^x68));

	if (t10 != 50751) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = 52;
	int32_t x70 = INT32_MAX;
	int16_t x71 = INT16_MIN;

	t11 = (x69*((x70+x71)^x72));

	if (t11 != -111667445760LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = -1;
	volatile int16_t x74 = -1;
	volatile int8_t x75 = 0;
	int32_t x76 = -1;
	int32_t t12 = -1112;

	t12 = (x73*((x74+x75)^x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 9U;
	int8_t x79 = 0;

	t13 = (x77*((x78+x79)^x80));

	if (t13 != -441) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x89 = INT64_MIN;
	uint16_t x90 = 3U;
	static volatile uint64_t x91 = 3989687LLU;
	volatile int64_t x92 = INT64_MIN;
	static uint64_t t14 = 229955063LLU;

	t14 = (x89*((x90+x91)^x92));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x97 = INT64_MIN;
	volatile int64_t x99 = INT64_MAX;
	volatile uint8_t x100 = UINT8_MAX;
	volatile uint64_t t15 = 58468165094322853LLU;

	t15 = (x97*((x98+x99)^x100));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = -1;
	uint64_t t16 = 337721036LLU;

	t16 = (x101*((x102+x103)^x104));

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 190542LLU;
	volatile uint64_t t17 = 17297LLU;

	t17 = (x105*((x106+x107)^x108));

	if (t17 != 47787510LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x117 = -97363;
	int32_t x118 = -19790;
	static volatile int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;

	t18 = (x117*((x118+x119)^x120));

	if (t18 != 18446744071770372745LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x122 = INT16_MIN;
	uint32_t x123 = 88U;
	static int32_t x124 = INT32_MAX;
	volatile uint64_t t19 = 383888104750239LLU;

	t19 = (x121*((x122+x123)^x124));

	if (t19 != 11918717356862047563LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x125 = INT16_MIN;
	int16_t x126 = -90;
	static int32_t x127 = -1;
	uint64_t x128 = 254761264857691387LLU;

	t20 = (x125*((x126+x127)^x128));

	if (t20 != 10088805540111122432LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = 26U;
	int16_t x140 = INT16_MIN;
	int32_t t21 = 9358243;

	t21 = (x137*((x138+x139)^x140));

	if (t21 != 4148582) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x153 = -1;
	uint16_t x154 = 3213U;
	int16_t x155 = 3231;
	int64_t t22 = -1602957651252LL;

	t22 = (x153*((x154+x155)^x156));

	if (t22 != 9223372036854769364LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x161 = INT16_MIN;
	uint16_t x162 = 3U;
	uint32_t x163 = 13U;
	volatile uint16_t x164 = 12U;

	t23 = (x161*((x162+x163)^x164));

	if (t23 != 4294049792U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x173 = UINT16_MAX;
	uint32_t x174 = 20U;
	static int16_t x175 = INT16_MAX;
	int8_t x176 = 0;
	uint32_t t24 = 55U;

	t24 = (x173*((x174+x175)^x176));

	if (t24 != 2148696045U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x177 = INT64_MIN;
	static int8_t x178 = 2;
	uint64_t x180 = 644LLU;
	volatile uint64_t t25 = 3718154LLU;

	t25 = (x177*((x178+x179)^x180));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x181 = 9U;
	static uint8_t x182 = 3U;
	uint16_t x183 = 25925U;
	uint16_t x184 = 3U;
	volatile int32_t t26 = 51532918;

	t26 = (x181*((x182+x183)^x184));

	if (t26 != 233379) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = INT8_MAX;
	static uint32_t x186 = 18U;
	int64_t x187 = INT64_MIN;
	uint64_t x188 = 7592402LLU;
	volatile uint64_t t27 = 7943377622217304588LLU;

	t27 = (x185*((x186+x187)^x188));

	if (t27 != 9223372037819008576LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x190 = -12;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = 0;
	static volatile uint64_t t28 = 786585539157LLU;

	t28 = (x189*((x190+x191)^x192));

	if (t28 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = 395690;
	volatile uint64_t t29 = 42513LLU;

	t29 = (x197*((x198+x199)^x200));

	if (t29 != 18446744069414980012LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x201 = -35;
	int8_t x202 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t30 = 226U;

	t30 = (x201*((x202+x203)^x204));

	if (t30 != 4294964426U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x205 = -1;
	volatile uint64_t x206 = UINT64_MAX;
	volatile int64_t x207 = 97688LL;
	uint8_t x208 = UINT8_MAX;
	volatile uint64_t t31 = 994LLU;

	t31 = (x205*((x206+x207)^x208));

	if (t31 != 18446744073709453976LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x211 = 50U;
	static int16_t x212 = INT16_MIN;

	t32 = (x209*((x210+x211)^x212));

	if (t32 != -3533760LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x213 = 133908851LLU;
	int32_t x214 = INT32_MIN;
	uint32_t x215 = 1455U;
	int16_t x216 = 3363;
	volatile uint64_t t33 = 545275220446650789LLU;

	t33 = (x213*((x214+x215)^x216));

	if (t33 != 287567360837534436LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x217 = -1;
	uint16_t x218 = 61U;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	uint64_t t34 = 9990108LLU;

	t34 = (x217*((x218+x219)^x220));

	if (t34 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x221 = UINT32_MAX;
	static uint32_t x222 = UINT32_MAX;
	static int16_t x224 = 1;
	uint64_t t35 = 976146896LLU;

	t35 = (x221*((x222+x223)^x224));

	if (t35 != 16509900598877111854LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MIN;
	static int32_t x228 = 2524992;
	volatile uint32_t t36 = 5364U;

	t36 = (x225*((x226+x227)^x228));

	if (t36 != 2468633120U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x229 = 21233U;
	int16_t x230 = INT16_MIN;
	static int16_t x231 = -3854;
	volatile int16_t x232 = 56;
	uint32_t t37 = 32414006U;

	t37 = (x229*((x230+x231)^x232));

	if (t37 != 3516523050U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint16_t x238 = 3U;
	int8_t x239 = 1;
	int8_t x240 = INT8_MAX;
	volatile int32_t t38 = 31136281;

	t38 = (x237*((x238+x239)^x240));

	if (t38 != 31365) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x241 = 4627244344640LLU;
	uint16_t x242 = 10U;
	int8_t x243 = INT8_MIN;

	t39 = (x241*((x242+x243)^x244));

	if (t39 != 151079527852496000LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x245 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	static int64_t x248 = -842735LL;
	volatile uint64_t t40 = 54747441627474LLU;

	t40 = (x245*((x246+x247)^x248));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x249 = INT16_MIN;
	static uint64_t x251 = UINT64_MAX;
	int64_t x252 = 7460LL;

	t41 = (x249*((x250+x251)^x252));

	if (t41 != 18446744073516384256LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x258 = -1;
	uint32_t x260 = UINT32_MAX;
	uint32_t t42 = 6U;

	t42 = (x257*((x258+x259)^x260));

	if (t42 != 7U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = -1;
	uint64_t x264 = 4381993231LLU;
	volatile uint64_t t43 = 2674557713314449LLU;

	t43 = (x261*((x262+x263)^x264));

	if (t43 != 4381993231LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x265 = 5LL;
	volatile int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MIN;

	t44 = (x265*((x266+x267)^x268));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x273 = -1;
	int32_t x274 = INT32_MIN;
	uint64_t x275 = 1LLU;
	int64_t x276 = INT64_MAX;
	uint64_t t45 = 2LLU;

	t45 = (x273*((x274+x275)^x276));

	if (t45 != 9223372034707292162LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x277 = 108U;
	int16_t x278 = -1;
	volatile uint16_t x279 = UINT16_MAX;
	static uint64_t x280 = 316271294985491LLU;
	static volatile uint64_t t46 = 210037LLU;

	t46 = (x277*((x278+x279)^x280));

	if (t46 != 34157299855498236LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x285 = UINT8_MAX;
	static volatile int16_t x286 = -1;
	uint64_t t47 = 1814LLU;

	t47 = (x285*((x286+x287)^x288));

	if (t47 != 2996524007401905LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = -9;
	int64_t x292 = -253771LL;
	int64_t t48 = -309100133108654LL;

	t48 = (x289*((x290+x291)^x292));

	if (t48 != 32497280LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x293 = INT8_MAX;
	int32_t x295 = INT32_MAX;
	static int16_t x296 = INT16_MIN;
	volatile uint32_t t49 = 4U;

	t49 = (x293*((x294+x295)^x296));

	if (t49 != 2151644930U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = 21821947U;
	int32_t x299 = INT32_MIN;
	static uint64_t x300 = UINT64_MAX;

	t50 = (x297*((x298+x299)^x300));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x301 = 2;
	uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 0U;
	int16_t x304 = INT16_MIN;
	uint32_t t51 = 749956U;

	t51 = (x301*((x302+x303)^x304));

	if (t51 != 65534U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x305 = 0;
	uint8_t x306 = 49U;
	volatile int64_t x307 = INT64_MIN;
	int32_t x308 = 3938623;
	int64_t t52 = 24168865754LL;

	t52 = (x305*((x306+x307)^x308));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x310 = UINT8_MAX;
	uint8_t x311 = UINT8_MAX;
	int32_t t53 = -226112872;

	t53 = (x309*((x310+x311)^x312));

	if (t53 != -64256) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -28;
	static int32_t t54 = -227563144;

	t54 = (x325*((x326+x327)^x328));

	if (t54 != 28956) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x330 = -1LL;
	static volatile uint8_t x331 = 24U;
	int16_t x332 = INT16_MAX;

	t55 = (x329*((x330+x331)^x332));

	if (t55 != 18446744073709518872LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x341 = -22;
	static int16_t x342 = INT16_MIN;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t56 = 57622;

	t56 = (x341*((x342+x343)^x344));

	if (t56 != 720896) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x345 = 274U;
	int64_t x346 = -8099295353866LL;
	int8_t x347 = -1;
	volatile uint64_t t57 = 14873300668LLU;

	t57 = (x345*((x346+x347)^x348));

	if (t57 != 18444524866878208194LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x350 = 502739419532860703LLU;
	uint64_t x351 = UINT64_MAX;
	uint32_t x352 = UINT32_MAX;
	static volatile uint64_t t58 = 10304010093051LLU;

	t58 = (x349*((x350+x351)^x352));

	if (t58 != 9436330748573290368LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x357 = 2U;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = 178343LLU;
	volatile uint64_t t59 = 1609078LLU;

	t59 = (x357*((x358+x359)^x360));

	if (t59 != 836835729796LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x361 = 30U;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;

	t60 = (x361*((x362+x363)^x364));

	if (t60 != 986850LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x369 = 38U;
	volatile int8_t x370 = 8;
	uint64_t x371 = 51LLU;
	uint32_t x372 = 3645U;
	volatile uint64_t t61 = 7375004422404847716LLU;

	t61 = (x369*((x370+x371)^x372));

	if (t61 != 136420LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x382 = -1;
	static int16_t x384 = INT16_MIN;
	uint64_t t62 = 293508405898941LLU;

	t62 = (x381*((x382+x383)^x384));

	if (t62 != 18446736529058388980LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x393 = -1;
	volatile uint8_t x394 = 12U;
	uint16_t x395 = 41U;
	static int64_t x396 = INT64_MIN;
	int64_t t63 = -48115205552018322LL;

	t63 = (x393*((x394+x395)^x396));

	if (t63 != 9223372036854775755LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x398 = INT8_MIN;
	volatile uint8_t x399 = 3U;
	int32_t x400 = -1;

	t64 = (x397*((x398+x399)^x400));

	if (t64 != -15872) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x409 = 3;
	uint32_t x411 = UINT32_MAX;
	static int32_t x412 = INT32_MIN;
	uint32_t t65 = 72545U;

	t65 = (x409*((x410+x411)^x412));

	if (t65 != 2147483615U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x413 = 15119710418LL;
	uint64_t x414 = 157849LLU;
	int64_t x415 = INT64_MAX;
	volatile int16_t x416 = INT16_MAX;
	uint64_t t66 = 32579832325LLU;

	t66 = (x413*((x414+x415)^x416));

	if (t66 != 2072352869022334LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x421 = UINT32_MAX;
	uint8_t x422 = 2U;
	int16_t x423 = -1306;
	static int8_t x424 = -1;
	uint32_t t67 = 31599U;

	t67 = (x421*((x422+x423)^x424));

	if (t67 != 4294965993U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x425 = 1719U;
	static volatile int8_t x426 = 1;
	volatile uint64_t t68 = 4793623LLU;

	t68 = (x425*((x426+x427)^x428));

	if (t68 != 18446744073709549897LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x434 = 2U;
	static int16_t x435 = 1;
	volatile int32_t t69 = -6;

	t69 = (x433*((x434+x435)^x436));

	if (t69 != 458710) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x438 = 637873577283LL;
	volatile uint16_t x439 = UINT16_MAX;
	static int64_t t70 = 1720825LL;

	t70 = (x437*((x438+x439)^x440));

	if (t70 != 4473348573624LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x453 = INT16_MIN;
	uint64_t x454 = 626038027333953LLU;
	uint8_t x455 = UINT8_MAX;
	static int16_t x456 = -225;
	static volatile uint64_t t71 = 10179398808LLU;

	t71 = (x453*((x454+x455)^x456));

	if (t71 != 2067270005980954624LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x457 = 244078LLU;
	int16_t x458 = 3;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MIN;
	uint64_t t72 = 38800695105LLU;

	t72 = (x457*((x458+x459)^x460));

	if (t72 != 18446744065712335946LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x465 = -1;
	int32_t x466 = INT32_MAX;
	volatile int32_t x467 = INT32_MIN;
	uint16_t x468 = 1705U;

	t73 = (x465*((x466+x467)^x468));

	if (t73 != 1706) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x473 = 334503054796028628LLU;
	int8_t x474 = INT8_MIN;
	int32_t x476 = INT32_MAX;
	static uint64_t t74 = 25485113029031LLU;

	t74 = (x473*((x474+x475)^x476));

	if (t74 != 10051791774365346304LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x485 = 10058U;
	static volatile int32_t x486 = INT32_MIN;
	uint64_t x487 = 40718653993LLU;
	int16_t x488 = -1;
	static volatile uint64_t t75 = 213738109274LLU;

	t75 = (x485*((x486+x487)^x488));

	if (t75 != 18446356124878211548LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x494 = 22;
	int32_t x495 = -1;
	volatile int64_t t76 = 225168625318LL;

	t76 = (x493*((x494+x495)^x496));

	if (t76 != 66LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x501 = 263U;
	volatile int8_t x502 = INT8_MIN;
	int32_t x503 = 16;
	static uint16_t x504 = UINT16_MAX;
	uint32_t t77 = 155352006U;

	t77 = (x501*((x502+x503)^x504));

	if (t77 != 4277760521U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x505 = INT8_MIN;
	static uint16_t x506 = 17U;
	uint32_t x507 = 1U;
	int16_t x508 = INT16_MIN;
	volatile uint32_t t78 = 8711U;

	t78 = (x505*((x506+x507)^x508));

	if (t78 != 4192000U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x509 = 35U;
	int8_t x510 = INT8_MIN;
	static int16_t x511 = INT16_MIN;
	static int32_t x512 = -1;
	volatile int32_t t79 = -10993;

	t79 = (x509*((x510+x511)^x512));

	if (t79 != 1151325) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x513 = INT32_MIN;
	volatile int64_t x514 = -1LL;
	uint32_t x515 = UINT32_MAX;
	int8_t x516 = -1;

	t80 = (x513*((x514+x515)^x516));

	if (t80 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x517 = -1;
	int64_t x520 = INT64_MIN;
	int64_t t81 = 642LL;

	t81 = (x517*((x518+x519)^x520));

	if (t81 != 9223372036854774949LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x521 = 0;
	int64_t x522 = 764058063221406987LL;
	int16_t x523 = -68;
	volatile int64_t x524 = INT64_MIN;
	static volatile int64_t t82 = 33LL;

	t82 = (x521*((x522+x523)^x524));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x526 = 3224U;
	static uint16_t x527 = 72U;
	uint32_t x528 = 263507732U;
	uint32_t t83 = 7U;

	t83 = (x525*((x526+x527)^x528));

	if (t83 != 263504884U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x529 = -461614;
	uint32_t x531 = UINT32_MAX;
	int32_t x532 = -10;
	static uint32_t t84 = 107346377U;

	t84 = (x529*((x530+x531)^x532));

	if (t84 != 114480272U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x537 = -1;
	int8_t x538 = INT8_MIN;
	static uint16_t x539 = UINT16_MAX;
	uint16_t x540 = 6850U;
	volatile int32_t t85 = -472355815;

	t85 = (x537*((x538+x539)^x540));

	if (t85 != -58813) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x545 = UINT8_MAX;
	uint64_t x547 = 1614980797541722706LLU;
	uint8_t x548 = 118U;
	volatile uint64_t t86 = 194082LLU;

	t86 = (x545*((x546+x547)^x548));

	if (t86 != 5991733751520786908LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x565 = -1;
	uint64_t x566 = 1076039040472967597LLU;
	int64_t x567 = -1LL;
	int16_t x568 = -1;
	static volatile uint64_t t87 = 3948695LLU;

	t87 = (x565*((x566+x567)^x568));

	if (t87 != 1076039040472967597LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x579 = UINT32_MAX;
	volatile int16_t x580 = INT16_MIN;
	static uint32_t t88 = 1944U;

	t88 = (x577*((x578+x579)^x580));

	if (t88 != 4294804101U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x582 = UINT32_MAX;
	int32_t x584 = -1;
	volatile uint32_t t89 = 453U;

	t89 = (x581*((x582+x583)^x584));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x585 = UINT8_MAX;
	int16_t x587 = INT16_MAX;
	int32_t x588 = -162912;
	int32_t t90 = 4347886;

	t90 = (x585*((x586+x587)^x588));

	if (t90 != -49877745) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x590 = INT8_MIN;
	static uint64_t t91 = 258914489968LLU;

	t91 = (x589*((x590+x591)^x592));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x593 = 802556395U;
	uint64_t x594 = UINT64_MAX;
	volatile int32_t x595 = -47;
	static int16_t x596 = 683;
	uint64_t t92 = 210687LLU;

	t92 = (x593*((x594+x595)^x596));

	if (t92 != 18446743556060676841LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x605 = -1LL;
	int8_t x606 = -1;
	int8_t x607 = INT8_MIN;
	int32_t x608 = -1;
	volatile int64_t t93 = -5691601932LL;

	t93 = (x605*((x606+x607)^x608));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x609 = 18U;
	uint16_t x610 = 4094U;
	static volatile int16_t x611 = INT16_MIN;
	uint64_t x612 = UINT64_MAX;
	static uint64_t t94 = 1677463092LLU;

	t94 = (x609*((x610+x611)^x612));

	if (t94 != 516114LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x613 = 246U;
	volatile uint8_t x614 = 1U;
	uint64_t x615 = 2229883208LLU;
	volatile uint64_t x616 = 12021711699741LLU;
	uint64_t t95 = 1406541163105325LLU;

	t95 = (x613*((x614+x615)^x616));

	if (t95 != 2957850152895672LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x617 = -1LL;
	int64_t x618 = 113787972143LL;
	int32_t x619 = INT32_MIN;
	int16_t x620 = -1;
	int64_t t96 = -7886915769LL;

	t96 = (x617*((x618+x619)^x620));

	if (t96 != 111640488496LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x622 = UINT16_MAX;
	int8_t x623 = -1;
	static volatile uint8_t x624 = 34U;
	static int64_t t97 = -634177430LL;

	t97 = (x621*((x622+x623)^x624));

	if (t97 != -65500LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x633 = UINT32_MAX;
	uint32_t x634 = 1U;
	volatile int8_t x635 = INT8_MIN;
	int32_t x636 = -1;

	t98 = (x633*((x634+x635)^x636));

	if (t98 != 4294967170U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x639 = -2;
	volatile int32_t x640 = INT32_MAX;
	volatile uint32_t t99 = 387U;

	t99 = (x637*((x638+x639)^x640));

	if (t99 != 286806U) { NG(); } else { ; }
	
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

