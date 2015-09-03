#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -2934;
volatile int64_t x26 = INT64_MIN;
volatile int32_t t7 = -15642607;
uint64_t t10 = 1264509224256286LLU;
static volatile int64_t t11 = 8210865911LL;
int32_t x54 = -1;
volatile uint64_t x55 = UINT64_MAX;
static int16_t x64 = -1;
int32_t t15 = 4528;
static volatile int64_t x67 = INT64_MAX;
int32_t x69 = -22924473;
volatile int16_t x73 = -48;
volatile uint32_t x79 = 3U;
int32_t x95 = -1;
volatile int32_t x96 = INT32_MAX;
volatile int32_t t25 = -46;
int64_t x111 = -10639LL;
volatile int32_t t27 = -71298042;
static int16_t x115 = -1;
volatile int8_t x120 = 1;
static volatile int32_t x121 = 28;
int8_t x125 = 59;
static int32_t x130 = INT32_MIN;
uint32_t x141 = 47570485U;
volatile int32_t t36 = 1;
static volatile int8_t x152 = 1;
uint8_t x157 = 0U;
volatile int8_t x165 = -3;
volatile uint16_t x170 = 1U;
int16_t x173 = -1;
uint16_t x176 = 30637U;
static int64_t x182 = INT64_MIN;
volatile uint16_t x184 = 7U;
volatile int64_t t46 = INT64_MIN;
static int16_t x201 = 70;
static uint16_t x202 = 21105U;
volatile int32_t x207 = INT32_MAX;
uint64_t x211 = 15538379611892LLU;
uint32_t x218 = 196U;
uint32_t x226 = UINT32_MAX;
int8_t x228 = -7;
static int32_t t56 = 27905;
int8_t x234 = INT8_MIN;
int32_t x240 = 479127552;
static int64_t t59 = -73902777693645LL;
int64_t x241 = INT64_MIN;
uint8_t x246 = 2U;
int8_t x253 = 1;
static uint64_t x258 = 92424057LLU;
int8_t x260 = -15;
static uint64_t x267 = UINT64_MAX;
int8_t x268 = 21;
uint64_t t68 = 6990118475852683LLU;
int16_t x279 = -1;
static uint32_t x281 = 868U;
int32_t x286 = 281252236;
static int16_t x287 = -1;
volatile int32_t t71 = -80;
int64_t x294 = -73LL;
int32_t x297 = INT32_MIN;
uint32_t x302 = 2U;
int32_t x304 = INT32_MIN;
int32_t x305 = -2273496;
volatile uint8_t x313 = UINT8_MAX;
int64_t t78 = 452013460796LL;
int16_t x317 = INT16_MIN;
uint64_t x318 = UINT64_MAX;
int16_t x319 = INT16_MIN;
static int8_t x324 = INT8_MAX;
uint16_t x326 = 282U;
int64_t x328 = 1367945491LL;
int32_t x330 = INT32_MIN;
volatile int64_t t86 = 15699001797704387LL;
int32_t x351 = 41176;
int8_t x364 = 5;
int8_t x367 = INT8_MIN;
volatile int64_t x371 = -337336652647661LL;
int64_t x375 = INT64_MAX;
int8_t x376 = -18;
int8_t x382 = INT8_MIN;
int32_t x383 = INT32_MIN;
static int8_t x386 = INT8_MIN;
int32_t x388 = INT32_MIN;
volatile int64_t x389 = INT64_MAX;
int8_t x391 = INT8_MAX;
uint64_t t98 = 495414851LLU;
volatile int16_t x397 = -1;
int8_t x398 = INT8_MAX;
int16_t x399 = -200;
int8_t x400 = 1;


void f0(void) {
	volatile int32_t x1 = 190169085;
	uint32_t x2 = 258U;
	int32_t x3 = 178176;
	int16_t x4 = -1;
	static volatile int32_t t0 = -118651;

	t0 = (x1^((x2<=x3)*x4));

	if (t0 != -190169086) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = UINT8_MAX;
	static volatile int8_t x6 = INT8_MIN;
	static uint16_t x8 = 426U;
	int32_t t1 = -214;

	t1 = (x5^((x6<=x7)*x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 22U;
	int16_t x10 = -1;
	int32_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -92;

	t2 = (x9^((x10<=x11)*x12));

	if (t2 != -32746) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 5;
	int32_t x14 = -27996;
	static int16_t x15 = INT16_MAX;
	static int32_t x16 = 0;
	int32_t t3 = -895;

	t3 = (x13^((x14<=x15)*x16));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 845570U;
	static int64_t x18 = -225053331481973LL;
	int64_t x19 = INT64_MIN;
	static uint32_t x20 = 5781U;
	static uint32_t t4 = 536773417U;

	t4 = (x17^((x18<=x19)*x20));

	if (t4 != 845570U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = 2578533U;
	static int64_t x23 = 4592192294049493LL;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 148;

	t5 = (x21^((x22<=x23)*x24));

	if (t5 != 2147450880) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 2183U;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -1124720;

	t6 = (x25^((x26<=x27)*x28));

	if (t6 != 2296) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MIN;
	static uint8_t x32 = 34U;

	t7 = (x29^((x30<=x31)*x32));

	if (t7 != 2147483613) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x34 = 1191550U;
	uint16_t x35 = 222U;
	uint16_t x36 = 9U;
	static volatile int64_t t8 = INT64_MIN;

	t8 = (x33^((x34<=x35)*x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 3U;
	static volatile int8_t x40 = -1;
	volatile int32_t t9 = 916619031;

	t9 = (x37^((x38<=x39)*x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 1123151395696LLU;
	uint32_t x42 = UINT32_MAX;
	volatile uint16_t x43 = 176U;
	uint8_t x44 = 33U;

	t10 = (x41^((x42<=x43)*x44));

	if (t10 != 1123151395696LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint16_t x46 = UINT16_MAX;
	static uint32_t x47 = 8505403U;
	int8_t x48 = 19;

	t11 = (x45^((x46<=x47)*x48));

	if (t11 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 10LLU;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	volatile int64_t x52 = -5LL;
	volatile uint64_t t12 = 397LLU;

	t12 = (x49^((x50<=x51)*x52));

	if (t12 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int32_t x56 = 16218;
	int32_t t13 = 5;

	t13 = (x53^((x54<=x55)*x56));

	if (t13 != 16165) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 21522U;
	uint16_t x58 = 2672U;
	volatile int32_t x59 = INT32_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t14 = -128289926484295LL;

	t14 = (x57^((x58<=x59)*x60));

	if (t14 != 21522LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -6;
	int32_t x62 = 4623330;
	uint32_t x63 = UINT32_MAX;

	t15 = (x61^((x62<=x63)*x64));

	if (t15 != 5) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static volatile uint32_t x66 = 1933270708U;
	uint64_t x68 = 694LLU;
	uint64_t t16 = 1311972645265LLU;

	t16 = (x65^((x66<=x67)*x68));

	if (t16 != 18446744073709550902LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MAX;
	volatile int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = 1381831590476337LL;

	t17 = (x69^((x70<=x71)*x72));

	if (t17 != -22924473LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x74 = UINT32_MAX;
	uint16_t x75 = UINT16_MAX;
	static int8_t x76 = -1;
	static volatile int32_t t18 = -2731164;

	t18 = (x73^((x74<=x75)*x76));

	if (t18 != -48) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint8_t x78 = 15U;
	int8_t x80 = -27;
	static volatile int32_t t19 = 41094906;

	t19 = (x77^((x78<=x79)*x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = 1U;
	static int16_t x83 = -1;
	volatile uint8_t x84 = UINT8_MAX;
	static int64_t t20 = -542263361908489LL;

	t20 = (x81^((x82<=x83)*x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile uint64_t x86 = 481575LLU;
	int32_t x87 = -1;
	static int16_t x88 = -1705;
	int32_t t21 = 62434630;

	t21 = (x85^((x86<=x87)*x88));

	if (t21 != 31063) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 19557778044088222LL;
	static volatile int8_t x90 = 25;
	static int16_t x91 = INT16_MIN;
	volatile int32_t x92 = INT32_MAX;
	volatile int64_t t22 = -2084238930LL;

	t22 = (x89^((x90<=x91)*x92));

	if (t22 != 19557778044088222LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -3;
	volatile int16_t x94 = INT16_MAX;
	static int32_t t23 = 18132;

	t23 = (x93^((x94<=x95)*x96));

	if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	static int16_t x98 = -1437;
	int16_t x99 = INT16_MIN;
	volatile uint64_t x100 = 1457388010786172991LLU;
	static uint64_t t24 = 3966601208407976356LLU;

	t24 = (x97^((x98<=x99)*x100));

	if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = 0;
	int16_t x104 = INT16_MIN;

	t25 = (x101^((x102<=x103)*x104));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	volatile uint8_t x107 = 65U;
	static int16_t x108 = -1;
	int64_t t26 = INT64_MAX;

	t26 = (x105^((x106<=x107)*x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	int16_t x110 = 291;
	int16_t x112 = INT16_MAX;

	t27 = (x109^((x110<=x111)*x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 25U;
	int32_t x114 = -984703;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -28;

	t28 = (x113^((x114<=x115)*x116));

	if (t28 != -103) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	int32_t x118 = -1;
	int64_t x119 = -1LL;
	int64_t t29 = 8807LL;

	t29 = (x117^((x118<=x119)*x120));

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = 72354390130631155LL;
	static volatile uint8_t x123 = 1U;
	volatile int64_t x124 = -4038749485563249905LL;
	int64_t t30 = 51819945362449LL;

	t30 = (x121^((x122<=x123)*x124));

	if (t30 != 28LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x126 = INT64_MAX;
	int8_t x127 = 2;
	static int16_t x128 = INT16_MIN;
	int32_t t31 = 9974;

	t31 = (x125^((x126<=x127)*x128));

	if (t31 != 59) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	uint32_t x131 = 2038U;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = -14738080;

	t32 = (x129^((x130<=x131)*x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int64_t x134 = 5068LL;
	volatile int32_t x135 = 21;
	int32_t x136 = 246;
	volatile int32_t t33 = 16;

	t33 = (x133^((x134<=x135)*x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint32_t x138 = 37U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = 1;
	int32_t t34 = -7443;

	t34 = (x137^((x138<=x139)*x140));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 6U;
	int64_t x143 = 36349745357101522LL;
	static uint16_t x144 = UINT16_MAX;
	volatile uint32_t t35 = 2098346U;

	t35 = (x141^((x142<=x143)*x144));

	if (t35 != 47522250U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	static int64_t x146 = 4180456645581LL;
	uint8_t x147 = 62U;
	int32_t x148 = INT32_MIN;

	t36 = (x145^((x146<=x147)*x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 236U;
	volatile int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MAX;
	static volatile uint32_t t37 = 15429529U;

	t37 = (x149^((x150<=x151)*x152));

	if (t37 != 237U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 7151076780LLU;
	int16_t x154 = INT16_MAX;
	int64_t x155 = -1LL;
	volatile int32_t x156 = 707290192;
	uint64_t t38 = 551LLU;

	t38 = (x153^((x154<=x155)*x156));

	if (t38 != 7151076780LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = 9797;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = -6;
	volatile int32_t t39 = 1344347;

	t39 = (x157^((x158<=x159)*x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 2U;
	int32_t x162 = INT32_MAX;
	int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	volatile int64_t t40 = 6623659723218907LL;

	t40 = (x161^((x162<=x163)*x164));

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x166 = INT64_MIN;
	static int8_t x167 = INT8_MIN;
	volatile int64_t x168 = INT64_MIN;
	volatile int64_t t41 = -47LL;

	t41 = (x165^((x166<=x167)*x168));

	if (t41 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	volatile int32_t x171 = INT32_MAX;
	int32_t x172 = -136792817;
	static int32_t t42 = -2031572;

	t42 = (x169^((x170<=x171)*x172));

	if (t42 != 136792816) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 50296887U;
	uint8_t x175 = UINT8_MAX;
	volatile int32_t t43 = 850;

	t43 = (x173^((x174<=x175)*x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 5LLU;
	volatile uint64_t x178 = UINT64_MAX;
	int8_t x179 = 1;
	static int32_t x180 = 423;
	uint64_t t44 = 367063027919LLU;

	t44 = (x177^((x178<=x179)*x180));

	if (t44 != 5LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -6;
	int16_t x183 = 453;
	int32_t t45 = 1391764;

	t45 = (x181^((x182<=x183)*x184));

	if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	volatile int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = -1LL;

	t46 = (x185^((x186<=x187)*x188));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -1722;
	int16_t x190 = INT16_MAX;
	int64_t x191 = INT64_MAX;
	int16_t x192 = 948;
	int32_t t47 = 2261;

	t47 = (x189^((x190<=x191)*x192));

	if (t47 != -1294) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	int64_t x194 = -56189623LL;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -12235821;

	t48 = (x193^((x194<=x195)*x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MAX;
	int8_t x199 = INT8_MIN;
	static uint16_t x200 = 224U;
	static int32_t t49 = INT32_MIN;

	t49 = (x197^((x198<=x199)*x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x203 = UINT8_MAX;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t50 = 664003805LLU;

	t50 = (x201^((x202<=x203)*x204));

	if (t50 != 70LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 2076794340122737988LL;
	int32_t x206 = INT32_MAX;
	int32_t x208 = INT32_MIN;
	volatile int64_t t51 = -28747396LL;

	t51 = (x205^((x206<=x207)*x208));

	if (t51 != -2076794338426307260LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x210 = UINT8_MAX;
	int8_t x212 = 0;
	volatile int32_t t52 = 1;

	t52 = (x209^((x210<=x211)*x212));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 5U;
	uint8_t x214 = UINT8_MAX;
	volatile int8_t x215 = -1;
	volatile int16_t x216 = 3;
	volatile int32_t t53 = 0;

	t53 = (x213^((x214<=x215)*x216));

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	static uint8_t x219 = 66U;
	int16_t x220 = -1;
	int32_t t54 = INT32_MIN;

	t54 = (x217^((x218<=x219)*x220));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 12U;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -878525179;
	uint32_t x224 = 83U;
	uint32_t t55 = 35U;

	t55 = (x221^((x222<=x223)*x224));

	if (t55 != 95U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int32_t x227 = INT32_MAX;

	t56 = (x225^((x226<=x227)*x228));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 13U;
	uint32_t x230 = 79161451U;
	uint16_t x231 = 10U;
	volatile int8_t x232 = -62;
	volatile int32_t t57 = -17659;

	t57 = (x229^((x230<=x231)*x232));

	if (t57 != 13) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x235 = -1;
	int64_t x236 = INT64_MIN;
	int64_t t58 = 124823LL;

	t58 = (x233^((x234<=x235)*x236));

	if (t58 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MIN;
	uint8_t x239 = 18U;

	t59 = (x237^((x238<=x239)*x240));

	if (t59 != -9223372036375648256LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x242 = 4167839430670LL;
	static int8_t x243 = 1;
	int8_t x244 = INT8_MIN;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x241^((x242<=x243)*x244));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int8_t x247 = -5;
	int64_t x248 = -2081478833081LL;
	int64_t t61 = -22286LL;

	t61 = (x245^((x246<=x247)*x248));

	if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -1LL;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = -428096;
	int8_t x252 = INT8_MIN;
	volatile int64_t t62 = -49010103614484LL;

	t62 = (x249^((x250<=x251)*x252));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 1U;
	int8_t x255 = -23;
	static int32_t x256 = -1;
	volatile int32_t t63 = 2;

	t63 = (x253^((x254<=x255)*x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	int32_t t64 = 0;

	t64 = (x257^((x258<=x259)*x260));

	if (t64 != 32753) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MAX;
	static int32_t x263 = 2;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = 3U;

	t65 = (x261^((x262<=x263)*x264));

	if (t65 != 4294967168U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 44U;
	int32_t x266 = INT32_MIN;
	volatile int32_t t66 = -434317083;

	t66 = (x265^((x266<=x267)*x268));

	if (t66 != 57) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -7;
	int64_t x270 = -1LL;
	int64_t x271 = -1LL;
	static int16_t x272 = 11;
	int32_t t67 = 3;

	t67 = (x269^((x270<=x271)*x272));

	if (t67 != -14) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1856LLU;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = -1;
	uint8_t x276 = 13U;

	t68 = (x273^((x274<=x275)*x276));

	if (t68 != 1856LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -50;
	uint64_t x278 = 482716595874226LLU;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -1;

	t69 = (x277^((x278<=x279)*x280));

	if (t69 != 2147483598) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x282 = INT8_MAX;
	uint8_t x283 = 80U;
	int8_t x284 = 0;
	uint32_t t70 = 5U;

	t70 = (x281^((x282<=x283)*x284));

	if (t70 != 868U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 901U;
	volatile int16_t x288 = INT16_MIN;

	t71 = (x285^((x286<=x287)*x288));

	if (t71 != 901) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 756654487207822662LLU;
	uint32_t x290 = 890708U;
	uint32_t x291 = UINT32_MAX;
	static uint8_t x292 = UINT8_MAX;
	uint64_t t72 = 367904LLU;

	t72 = (x289^((x290<=x291)*x292));

	if (t72 != 756654487207822777LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	uint16_t x295 = 627U;
	volatile int8_t x296 = INT8_MIN;
	int32_t t73 = 3966196;

	t73 = (x293^((x294<=x295)*x296));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	static int64_t x300 = INT64_MAX;
	static volatile int64_t t74 = 11299699873508LL;

	t74 = (x297^((x298<=x299)*x300));

	if (t74 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile int64_t t75 = -24921083823771386LL;

	t75 = (x301^((x302<=x303)*x304));

	if (t75 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MAX;
	int32_t x307 = -183;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -312325;

	t76 = (x305^((x306<=x307)*x308));

	if (t76 != -2273496) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	volatile int64_t t77 = -11303437407929727LL;

	t77 = (x309^((x310<=x311)*x312));

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = 53U;
	int16_t x315 = 1;
	volatile int64_t x316 = -20350LL;

	t78 = (x313^((x314<=x315)*x316));

	if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x320 = -855026335;
	static volatile int32_t t79 = -118350;

	t79 = (x317^((x318<=x319)*x320));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = INT32_MIN;
	int32_t t80 = -77473697;

	t80 = (x321^((x322<=x323)*x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = UINT16_MAX;
	uint32_t x327 = 11023U;
	int64_t t81 = -7673LL;

	t81 = (x325^((x326<=x327)*x328));

	if (t81 != 1367985900LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int32_t x331 = INT32_MAX;
	static uint32_t x332 = UINT32_MAX;
	uint32_t t82 = 1U;

	t82 = (x329^((x330<=x331)*x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 21LLU;
	int16_t x334 = -1;
	int32_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	uint64_t t83 = 357503085LLU;

	t83 = (x333^((x334<=x335)*x336));

	if (t83 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 193U;
	int8_t x338 = -1;
	uint32_t x339 = 109950U;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = -2328861622801632LL;

	t84 = (x337^((x338<=x339)*x340));

	if (t84 != 193LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	static uint32_t x342 = 855U;
	int32_t x343 = INT32_MIN;
	uint16_t x344 = 1U;
	int32_t t85 = -6;

	t85 = (x341^((x342<=x343)*x344));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 1LL;
	int64_t x346 = -708LL;
	int64_t x347 = INT64_MIN;
	uint16_t x348 = 14735U;

	t86 = (x345^((x346<=x347)*x348));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static int32_t x350 = -22930;
	volatile int16_t x352 = INT16_MAX;
	static volatile int32_t t87 = -210;

	t87 = (x349^((x350<=x351)*x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 444290769020LLU;
	static int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t88 = 3762LLU;

	t88 = (x353^((x354<=x355)*x356));

	if (t88 != 9223372481145544828LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -328;
	static int64_t x358 = -10938LL;
	int64_t x359 = INT64_MIN;
	volatile int8_t x360 = 1;
	int32_t t89 = -32272002;

	t89 = (x357^((x358<=x359)*x360));

	if (t89 != -328) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint16_t x362 = 607U;
	int16_t x363 = -3;
	volatile int32_t t90 = 2313118;

	t90 = (x361^((x362<=x363)*x364));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 7;
	int64_t x366 = 3941699278069599LL;
	static volatile int8_t x368 = 0;
	int32_t t91 = -168;

	t91 = (x365^((x366<=x367)*x368));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	static volatile uint64_t x370 = UINT64_MAX;
	int64_t x372 = -447439588018LL;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x369^((x370<=x371)*x372));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 2773;
	static uint16_t x374 = 2110U;
	static int32_t t93 = 6253;

	t93 = (x373^((x374<=x375)*x376));

	if (t93 != -2757) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	uint32_t x378 = 5205U;
	int16_t x379 = 0;
	int64_t x380 = -1LL;
	volatile int64_t t94 = -1796206976LL;

	t94 = (x377^((x378<=x379)*x380));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 1722420;

	t95 = (x381^((x382<=x383)*x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 687323238LLU;
	static int16_t x387 = INT16_MIN;
	uint64_t t96 = 36155253634750965LLU;

	t96 = (x385^((x386<=x387)*x388));

	if (t96 != 687323238LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 0;
	volatile int8_t x392 = INT8_MIN;
	static int64_t t97 = -124902787349799719LL;

	t97 = (x389^((x390<=x391)*x392));

	if (t97 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -355419142;

	t98 = (x393^((x394<=x395)*x396));

	if (t98 != 355419141LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t t99 = 0;

	t99 = (x397^((x398<=x399)*x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

