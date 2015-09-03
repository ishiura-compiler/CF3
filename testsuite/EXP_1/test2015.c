#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = 13633U;
volatile int8_t x11 = INT8_MIN;
volatile int64_t x12 = INT64_MIN;
int64_t t2 = 148761136LL;
static volatile uint8_t x16 = 26U;
volatile uint16_t x18 = UINT16_MAX;
int16_t x25 = -1;
static volatile uint32_t t6 = 161193U;
int32_t x35 = INT32_MAX;
int8_t x37 = INT8_MAX;
volatile int32_t t9 = 3940728;
int8_t x49 = INT8_MIN;
static uint8_t x57 = 88U;
static int32_t x71 = 107559338;
uint64_t x80 = UINT64_MAX;
volatile uint64_t t19 = 7828141104266LLU;
volatile int32_t x85 = 13;
int32_t x92 = INT32_MAX;
static uint8_t x93 = 1U;
int64_t x99 = INT64_MIN;
static uint16_t x104 = 4149U;
int64_t x106 = INT64_MAX;
static volatile uint32_t x112 = 41960873U;
volatile int64_t x115 = INT64_MAX;
int64_t x116 = INT64_MAX;
static int64_t x120 = -1LL;
int8_t x124 = INT8_MIN;
int16_t x128 = 15;
int32_t x131 = -1;
volatile int32_t x137 = 6642;
uint64_t t36 = 952LLU;
volatile uint16_t x156 = 349U;
static volatile int64_t t38 = 33387247206143LL;
int8_t x158 = INT8_MAX;
int16_t x160 = 15;
int32_t x166 = INT32_MIN;
static uint32_t x171 = 1436553U;
static int64_t t42 = INT64_MIN;
int32_t x174 = INT32_MIN;
static int64_t x179 = -1LL;
uint32_t x182 = 27661U;
static volatile uint64_t t45 = 123164262119670833LLU;
int64_t x186 = -1LL;
volatile int64_t x189 = INT64_MIN;
static uint8_t x191 = 1U;
int16_t x195 = -5;
static int8_t x201 = -1;
volatile int32_t x204 = INT32_MAX;
volatile uint32_t t50 = 1548993032U;
uint64_t t51 = 24086049621LLU;
static int8_t x210 = 2;
static int64_t x223 = -1LL;
volatile int8_t x224 = INT8_MIN;
int32_t x225 = 1433;
int8_t x226 = INT8_MIN;
static int64_t x228 = INT64_MIN;
int8_t x232 = INT8_MIN;
volatile int8_t x235 = -63;
int32_t x237 = INT32_MIN;
uint32_t x239 = UINT32_MAX;
uint16_t x242 = 1U;
int8_t x243 = INT8_MIN;
uint32_t x246 = 10U;
int8_t x253 = 10;
int8_t x254 = -1;
uint64_t t63 = 5780914LLU;
int32_t x259 = -1;
int64_t t64 = INT64_MAX;
int8_t x272 = INT8_MIN;
volatile uint8_t x275 = 44U;
int16_t x279 = INT16_MIN;
volatile int32_t t69 = 14167;
uint64_t x281 = 4257028898664LLU;
int64_t x282 = -1LL;
int8_t x285 = INT8_MIN;
int16_t x290 = -1;
volatile int64_t t72 = INT64_MIN;
uint8_t x295 = 1U;
int8_t x302 = -28;
uint16_t x303 = 1957U;
volatile int64_t t75 = 2272LL;
static volatile int8_t x309 = INT8_MAX;
volatile int32_t t77 = 338992735;
int64_t x316 = 11321429599LL;
int64_t x317 = INT64_MAX;
uint32_t x318 = UINT32_MAX;
uint64_t x320 = 7237534296LLU;
int64_t x322 = INT64_MAX;
volatile uint32_t x326 = 5U;
volatile uint16_t x329 = 157U;
uint32_t x335 = 25689792U;
static uint16_t x340 = 2U;
uint16_t x341 = 85U;
uint16_t x343 = UINT16_MAX;
static int8_t x345 = -6;
volatile uint32_t t86 = 57U;
static int64_t t87 = -196676LL;
int8_t x363 = INT8_MIN;
uint8_t x369 = 48U;
static int64_t x371 = -1LL;
volatile uint8_t x378 = 7U;
int16_t x381 = -1;
int64_t x382 = INT64_MIN;
int64_t t95 = 1020262LL;
uint32_t x393 = UINT32_MAX;
volatile uint32_t x394 = 157U;
int8_t x399 = -1;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static int64_t x2 = -115973LL;
	volatile int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MAX;
	int64_t t0 = -1248142818441021LL;

	t0 = (((x1|x2)|x3)^x4);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 38728467210090LL;
	uint64_t x6 = 266858013987934LLU;
	static int8_t x7 = 0;
	int8_t x8 = INT8_MIN;
	volatile uint64_t t1 = 123LLU;

	t1 = (((x5|x6)|x7)^x8);

	if (t1 != 18446476077453287678LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;

	t2 = (((x9|x10)|x11)^x12);

	if (t2 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -49;
	uint8_t x14 = 94U;
	int8_t x15 = INT8_MAX;
	volatile int32_t t3 = 5;

	t3 = (((x13|x14)|x15)^x16);

	if (t3 != -27) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x19 = 1;
	static uint32_t x20 = 114U;
	uint32_t t4 = 539944U;

	t4 = (((x17|x18)|x19)^x20);

	if (t4 != 2147549069U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1020806U;
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = -1LL;
	uint32_t x24 = UINT32_MAX;
	volatile int64_t t5 = -3057157392LL;

	t5 = (((x21|x22)|x23)^x24);

	if (t5 != -4294967296LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static uint32_t x27 = 821735734U;
	int8_t x28 = INT8_MIN;

	t6 = (((x25|x26)|x27)^x28);

	if (t6 != 127U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static int8_t x30 = INT8_MIN;
	volatile int8_t x31 = INT8_MIN;
	uint16_t x32 = 20885U;
	volatile int32_t t7 = -658588209;

	t7 = (((x29|x30)|x31)^x32);

	if (t7 != -20886) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MIN;
	volatile uint32_t x36 = 41946U;
	volatile uint32_t t8 = 2386958U;

	t8 = (((x33|x34)|x35)^x36);

	if (t8 != 4294925349U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1903;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MIN;

	t9 = (((x37|x38)|x39)^x40);

	if (t9 != 30975) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 3890;
	uint16_t x42 = 3U;
	static int16_t x43 = INT16_MAX;
	volatile int8_t x44 = 3;
	int32_t t10 = 310087;

	t10 = (((x41|x42)|x43)^x44);

	if (t10 != 32764) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 285U;
	int32_t t11 = 904372;

	t11 = (((x45|x46)|x47)^x48);

	if (t11 != -286) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int16_t x51 = 1;
	int64_t x52 = 2567348730478375LL;
	int64_t t12 = -4430LL;

	t12 = (((x49|x50)|x51)^x52);

	if (t12 != -2567348730478426LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int16_t x54 = -1;
	static volatile int8_t x55 = INT8_MIN;
	int32_t x56 = -1;
	volatile int64_t t13 = -68304268LL;

	t13 = (((x53|x54)|x55)^x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = -1;
	static uint64_t x59 = 62092845209801LLU;
	uint8_t x60 = 74U;
	static uint64_t t14 = 269935416145LLU;

	t14 = (((x57|x58)|x59)^x60);

	if (t14 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	int32_t x64 = -1;
	volatile int32_t t15 = -3449;

	t15 = (((x61|x62)|x63)^x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 218U;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -1LL;
	int64_t t16 = 48LL;

	t16 = (((x65|x66)|x67)^x68);

	if (t16 != 32512LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = -1;
	volatile int8_t x72 = INT8_MIN;
	int32_t t17 = -588158843;

	t17 = (((x69|x70)|x71)^x72);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = 979923483U;
	int64_t t18 = -1278468635LL;

	t18 = (((x73|x74)|x75)^x76);

	if (t18 != -979897829LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = 1056153;
	volatile int16_t x79 = 13272;

	t19 = (((x77|x78)|x79)^x80);

	if (t19 != 18446744073708437504LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 18U;
	int32_t x82 = -8318;
	int32_t x83 = INT32_MAX;
	volatile int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MAX;

	t20 = (((x81|x82)|x83)^x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	int8_t x88 = INT8_MIN;
	int64_t t21 = 119LL;

	t21 = (((x85|x86)|x87)^x88);

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 92U;
	uint16_t x90 = 15U;
	static volatile int64_t x91 = -1LL;
	int64_t t22 = -12029244LL;

	t22 = (((x89|x90)|x91)^x92);

	if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -1;
	int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 252;

	t23 = (((x93|x94)|x95)^x96);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 61336948LL;
	int16_t x98 = INT16_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile int64_t t24 = 27116LL;

	t24 = (((x97|x98)|x99)^x100);

	if (t24 != -9223372032621150208LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 770619LLU;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = 43652U;
	uint64_t t25 = 180435837208LLU;

	t25 = (((x101|x102)|x103)^x104);

	if (t25 != 9223372036854771658LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x107 = 40U;
	volatile int16_t x108 = INT16_MIN;
	int64_t t26 = 550790176LL;

	t26 = (((x105|x106)|x107)^x108);

	if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	int16_t x110 = 1396;
	static int8_t x111 = INT8_MIN;
	int64_t t27 = -200344LL;

	t27 = (((x109|x110)|x111)^x112);

	if (t27 != -41960867LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MIN;
	static volatile int64_t t28 = INT64_MIN;

	t28 = (((x113|x114)|x115)^x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 1U;
	int32_t x118 = -1;
	static int32_t x119 = 210292;
	static int64_t t29 = -612457019736341LL;

	t29 = (((x117|x118)|x119)^x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = -4;
	uint16_t x122 = 51U;
	int8_t x123 = INT8_MIN;
	int32_t t30 = 103256;

	t30 = (((x121|x122)|x123)^x124);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	uint64_t x126 = 0LLU;
	uint32_t x127 = UINT32_MAX;
	volatile uint64_t t31 = 22203LLU;

	t31 = (((x125|x126)|x127)^x128);

	if (t31 != 4294967280LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static uint16_t x130 = 3U;
	int32_t x132 = INT32_MAX;
	int32_t t32 = INT32_MIN;

	t32 = (((x129|x130)|x131)^x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 28;
	static int16_t x134 = 1272;
	volatile uint16_t x135 = 25U;
	int8_t x136 = 0;
	int32_t t33 = 16413330;

	t33 = (((x133|x134)|x135)^x136);

	if (t33 != 1277) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -25;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -1;

	t34 = (((x137|x138)|x139)^x140);

	if (t34 != 119) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	uint16_t x142 = 2U;
	int32_t x143 = 359013;
	volatile int16_t x144 = INT16_MAX;
	int32_t t35 = 819065380;

	t35 = (((x141|x142)|x143)^x144);

	if (t35 != 360448) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MAX;
	uint16_t x147 = 12096U;
	uint64_t x148 = UINT64_MAX;

	t36 = (((x145|x146)|x147)^x148);

	if (t36 != 9223372036854763648LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	uint32_t x150 = 23009986U;
	static int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	volatile int64_t t37 = -3764459026LL;

	t37 = (((x149|x150)|x151)^x152);

	if (t37 != 2124473661LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 2U;
	int64_t x154 = -218864626LL;
	int16_t x155 = INT16_MAX;

	t38 = (((x153|x154)|x155)^x156);

	if (t38 != -218857822LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = 398663110731LL;
	volatile uint16_t x159 = 25978U;
	int64_t t39 = 4323491578352LL;

	t39 = (((x157|x158)|x159)^x160);

	if (t39 != 398663120240LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MAX;
	static volatile int32_t t40 = -6955;

	t40 = (((x161|x162)|x163)^x164);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 996U;
	static int64_t x167 = INT64_MAX;
	uint16_t x168 = 124U;
	static volatile int64_t t41 = -26322540301291656LL;

	t41 = (((x165|x166)|x167)^x168);

	if (t41 != -125LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	uint16_t x170 = 1U;
	static volatile int8_t x172 = -1;

	t42 = (((x169|x170)|x171)^x172);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 15U;
	volatile int8_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	int32_t t43 = -127136;

	t43 = (((x173|x174)|x175)^x176);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 438U;
	int64_t x178 = -88LL;
	static volatile int64_t x180 = -207564234LL;
	volatile int64_t t44 = 851870911LL;

	t44 = (((x177|x178)|x179)^x180);

	if (t44 != 207564233LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	volatile uint32_t x183 = 431040U;
	int16_t x184 = -1;

	t45 = (((x181|x182)|x183)^x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	volatile uint16_t x187 = 6U;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t46 = -17438624148601LL;

	t46 = (((x185|x186)|x187)^x188);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	static uint64_t x192 = 65742568327LLU;
	volatile uint64_t t47 = 5770736LLU;

	t47 = (((x189|x190)|x191)^x192);

	if (t47 != 18446744007966983174LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 1U;
	int16_t x194 = -372;
	int16_t x196 = 8;
	int32_t t48 = -43588796;

	t48 = (((x193|x194)|x195)^x196);

	if (t48 != -9) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int8_t x198 = INT8_MIN;
	static uint64_t x199 = 1226714126122LLU;
	int32_t x200 = INT32_MIN;
	uint64_t t49 = 3207402532LLU;

	t49 = (((x197|x198)|x199)^x200);

	if (t49 != 2147483562LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = 16285U;
	volatile int8_t x203 = -1;

	t50 = (((x201|x202)|x203)^x204);

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	volatile uint16_t x206 = UINT16_MAX;
	uint64_t x207 = 2949611996994819053LLU;
	static uint8_t x208 = UINT8_MAX;

	t51 = (((x205|x206)|x207)^x208);

	if (t51 != 18446744072805416704LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 21U;
	static uint32_t x211 = UINT32_MAX;
	static int8_t x212 = INT8_MIN;
	uint32_t t52 = 885U;

	t52 = (((x209|x210)|x211)^x212);

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = UINT8_MAX;
	int16_t x214 = 6387;
	volatile int32_t x215 = 110518850;
	int64_t x216 = INT64_MIN;
	int64_t t53 = -1LL;

	t53 = (((x213|x214)|x215)^x216);

	if (t53 != -9223372036744250625LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 13;
	int64_t x218 = -1LL;
	int64_t x219 = -1LL;
	static int32_t x220 = -59;
	int64_t t54 = 177627428LL;

	t54 = (((x217|x218)|x219)^x220);

	if (t54 != 58LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	uint16_t x222 = 44U;
	int64_t t55 = -485473681170571927LL;

	t55 = (((x221|x222)|x223)^x224);

	if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x227 = -1;
	volatile int64_t t56 = INT64_MAX;

	t56 = (((x225|x226)|x227)^x228);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 0;
	volatile uint16_t x230 = UINT16_MAX;
	volatile int64_t x231 = 28246804LL;
	int64_t t57 = -46970768066331089LL;

	t57 = (((x229|x230)|x231)^x232);

	if (t57 != -28311425LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 1U;
	uint8_t x234 = UINT8_MAX;
	uint32_t x236 = 127U;
	volatile uint32_t t58 = 614916U;

	t58 = (((x233|x234)|x235)^x236);

	if (t58 != 4294967168U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x238 = INT8_MIN;
	volatile int32_t x240 = INT32_MIN;
	uint32_t t59 = 150792797U;

	t59 = (((x237|x238)|x239)^x240);

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 15666U;
	int64_t x244 = INT64_MAX;
	int64_t t60 = 637767LL;

	t60 = (((x241|x242)|x243)^x244);

	if (t60 != 9223372032559808588LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = 2U;
	uint64_t x247 = 450LLU;
	int64_t x248 = INT64_MIN;
	uint64_t t61 = 429173483326308LLU;

	t61 = (((x245|x246)|x247)^x248);

	if (t61 != 9223372036854776266LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MIN;
	uint32_t x250 = UINT32_MAX;
	static uint8_t x251 = 37U;
	int32_t x252 = -1;
	volatile uint32_t t62 = 11U;

	t62 = (((x249|x250)|x251)^x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x255 = 3LLU;
	int8_t x256 = 2;

	t63 = (((x253|x254)|x255)^x256);

	if (t63 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	int64_t x260 = INT64_MIN;

	t64 = (((x257|x258)|x259)^x260);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 5915;
	static int16_t x262 = 1714;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = INT16_MAX;
	uint32_t t65 = 465U;

	t65 = (((x261|x262)|x263)^x264);

	if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	int16_t x267 = -2;
	int64_t x268 = 102711LL;
	volatile int64_t t66 = -19LL;

	t66 = (((x265|x266)|x267)^x268);

	if (t66 != -102712LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MAX;
	static int8_t x270 = -1;
	static uint32_t x271 = 426911467U;
	static uint32_t t67 = 480958501U;

	t67 = (((x269|x270)|x271)^x272);

	if (t67 != 127U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 10435;
	volatile int16_t x274 = INT16_MAX;
	static volatile uint16_t x276 = 2U;
	volatile int32_t t68 = 618076959;

	t68 = (((x273|x274)|x275)^x276);

	if (t68 != 32765) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -24;
	int8_t x278 = -7;
	int32_t x280 = -92;

	t69 = (((x277|x278)|x279)^x280);

	if (t69 != 93) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x283 = -26;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t70 = 13554615LLU;

	t70 = (((x281|x282)|x283)^x284);

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -16;
	int16_t x287 = -104;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -18233;

	t71 = (((x285|x286)|x287)^x288);

	if (t71 != 32760) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	uint8_t x291 = 9U;
	int64_t x292 = INT64_MAX;

	t72 = (((x289|x290)|x291)^x292);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	int64_t x294 = INT64_MAX;
	volatile uint32_t x296 = 31324023U;
	int64_t t73 = 3842820903LL;

	t73 = (((x293|x294)|x295)^x296);

	if (t73 != 9223372036823451784LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 32U;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;
	volatile int64_t t74 = -454LL;

	t74 = (((x297|x298)|x299)^x300);

	if (t74 != 32735LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 3453U;
	int64_t x304 = -4439949296LL;

	t75 = (((x301|x302)|x303)^x304);

	if (t75 != 4439949293LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	uint32_t x306 = 17364089U;
	volatile int16_t x307 = INT16_MIN;
	static int64_t x308 = INT64_MAX;
	volatile int64_t t76 = 235104919691LL;

	t76 = (((x305|x306)|x307)^x308);

	if (t76 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x310 = INT8_MIN;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = INT16_MIN;

	t77 = (((x309|x310)|x311)^x312);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	int16_t x314 = 650;
	int32_t x315 = INT32_MAX;
	static volatile int64_t t78 = -769LL;

	t78 = (((x313|x314)|x315)^x316);

	if (t78 != -11321429600LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x319 = 7U;
	static uint64_t t79 = 2936517587LLU;

	t79 = (((x317|x318)|x319)^x320);

	if (t79 != 9223372029617241511LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	uint16_t x323 = UINT16_MAX;
	uint16_t x324 = 13273U;
	static int64_t t80 = 30LL;

	t80 = (((x321|x322)|x323)^x324);

	if (t80 != -13274LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 975798;
	int16_t x327 = 15511;
	uint8_t x328 = UINT8_MAX;
	volatile uint32_t t81 = 239677663U;

	t81 = (((x325|x326)|x327)^x328);

	if (t81 != 982856U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -448138621518952LL;
	uint64_t x331 = 36710123120412026LLU;
	int64_t x332 = -1LL;
	volatile uint64_t t82 = 1071977LLU;

	t82 = (((x329|x330)|x331)^x332);

	if (t82 != 444290326593536LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 0;
	int64_t x334 = INT64_MAX;
	int16_t x336 = -490;
	int64_t t83 = -26708LL;

	t83 = (((x333|x334)|x335)^x336);

	if (t83 != -9223372036854775319LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = 2606233LL;
	int32_t x339 = -79;
	static volatile int64_t t84 = 3LL;

	t84 = (((x337|x338)|x339)^x340);

	if (t84 != -69LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x342 = -2;
	uint8_t x344 = 32U;
	int32_t t85 = 2610;

	t85 = (((x341|x342)|x343)^x344);

	if (t85 != -33) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x346 = 117057238U;
	uint16_t x347 = 349U;
	int32_t x348 = INT32_MAX;

	t86 = (((x345|x346)|x347)^x348);

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	int16_t x351 = 4;
	int64_t x352 = INT64_MIN;

	t87 = (((x349|x350)|x351)^x352);

	if (t87 != 9223372034707292164LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -11;
	static uint32_t x354 = 363258938U;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = INT16_MIN;
	volatile uint32_t t88 = 470U;

	t88 = (((x353|x354)|x355)^x356);

	if (t88 != 32767U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = 133U;
	static uint64_t x359 = UINT64_MAX;
	int16_t x360 = 2;
	uint64_t t89 = 2813100LLU;

	t89 = (((x357|x358)|x359)^x360);

	if (t89 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MAX;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = INT64_MAX;

	t90 = (((x361|x362)|x363)^x364);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 1;
	uint8_t x366 = 120U;
	static int8_t x367 = -1;
	static int64_t x368 = 436106867505496LL;
	volatile int64_t t91 = -27141LL;

	t91 = (((x365|x366)|x367)^x368);

	if (t91 != -436106867505497LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = INT16_MIN;
	static int8_t x372 = -1;
	int64_t t92 = -132LL;

	t92 = (((x369|x370)|x371)^x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = 40;
	int32_t x374 = -30;
	uint32_t x375 = 343455U;
	volatile uint32_t x376 = 1692101128U;
	volatile uint32_t t93 = 15612U;

	t93 = (((x373|x374)|x375)^x376);

	if (t93 != 2602866167U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x379 = 6919U;
	int64_t x380 = -1LL;
	int64_t t94 = 0LL;

	t94 = (((x377|x378)|x379)^x380);

	if (t94 != 25848LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x383 = -1;
	int32_t x384 = INT32_MIN;

	t95 = (((x381|x382)|x383)^x384);

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1968;
	int16_t x386 = INT16_MAX;
	volatile int32_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = INT32_MAX;

	t96 = (((x385|x386)|x387)^x388);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MAX;
	volatile int64_t x391 = 191213952161LL;
	int32_t x392 = -644693889;
	volatile int64_t t97 = 4264312502022LL;

	t97 = (((x389|x390)|x391)^x392);

	if (t97 != 644693888LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x395 = UINT32_MAX;
	static volatile int8_t x396 = INT8_MAX;
	uint32_t t98 = 575944U;

	t98 = (((x393|x394)|x395)^x396);

	if (t98 != 4294967168U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 1U;
	volatile int8_t x398 = -6;
	int32_t x400 = 1;
	uint32_t t99 = 0U;

	t99 = (((x397|x398)|x399)^x400);

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

