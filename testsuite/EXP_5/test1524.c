#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -1;
int32_t x3 = INT32_MIN;
int16_t x6 = INT16_MAX;
static uint16_t x9 = 1617U;
int32_t x10 = -1;
uint32_t x19 = 12578164U;
static volatile uint32_t x20 = 42144U;
int64_t t3 = 90916862763LL;
int16_t x25 = -530;
int32_t x29 = INT32_MIN;
uint64_t x30 = UINT64_MAX;
int16_t x32 = 1;
int16_t x33 = INT16_MAX;
int8_t x39 = -3;
static int16_t x43 = INT16_MAX;
int64_t x44 = -1762191LL;
volatile int8_t x53 = 6;
uint8_t x62 = UINT8_MAX;
volatile uint32_t t13 = 57U;
static volatile int16_t x73 = INT16_MIN;
static uint16_t x81 = 11U;
uint16_t x94 = UINT16_MAX;
volatile uint32_t t18 = 27U;
int64_t x120 = INT64_MIN;
int32_t x134 = -1;
static volatile uint8_t x135 = 2U;
int64_t x138 = INT64_MIN;
volatile int32_t t25 = 2;
static volatile uint64_t t27 = 101407LLU;
static int16_t x189 = 253;
int64_t x193 = -1LL;
int64_t t32 = -1378813726LL;
static int8_t x203 = INT8_MAX;
int32_t x213 = INT32_MIN;
uint32_t x214 = 104683638U;
static int16_t x231 = INT16_MIN;
static volatile int32_t t39 = -27;
int8_t x233 = -1;
int32_t t40 = -23166;
static int16_t x241 = 4132;
static int64_t x253 = 2LL;
volatile int16_t x256 = INT16_MIN;
uint8_t x259 = 1U;
static int64_t x260 = -13643870LL;
static volatile int8_t x261 = INT8_MAX;
uint8_t x262 = 3U;
volatile uint32_t x263 = 5U;
uint64_t x266 = 0LLU;
int32_t t47 = 1776939;
uint8_t x273 = 0U;
static volatile uint64_t x274 = 6LLU;
static volatile int32_t t48 = 0;
volatile int64_t t49 = 8173593770963251LL;
uint32_t t51 = 11U;
volatile int64_t t53 = -196441213355311LL;
uint32_t x304 = UINT32_MAX;
int64_t x307 = INT64_MIN;
uint16_t x310 = 3U;
uint16_t x320 = UINT16_MAX;
static uint32_t x321 = UINT32_MAX;
int16_t x323 = 83;
uint32_t x325 = 118U;
volatile int16_t x332 = INT16_MAX;
volatile uint64_t x333 = 302141770477045LLU;
int64_t x336 = -106981LL;
static uint64_t t63 = 73857051608596LLU;
int8_t x339 = 9;
volatile int64_t t64 = 478LL;
int64_t x362 = INT64_MIN;
volatile int32_t x369 = -268;
volatile int32_t x370 = -1;
int64_t x371 = -1LL;
int32_t t68 = 2033;
uint64_t x381 = 472448710LLU;
int64_t x384 = INT64_MIN;
uint32_t x392 = 14909U;
volatile uint32_t t70 = 28799U;
int16_t x395 = INT16_MIN;
volatile int8_t x396 = -9;
uint64_t x402 = UINT64_MAX;
static int64_t x407 = INT64_MIN;
int32_t x408 = INT32_MIN;
static volatile int32_t t76 = 6730044;
static uint8_t x424 = 46U;
int32_t x428 = -249;
volatile int16_t x431 = INT16_MIN;
uint32_t x436 = 30023972U;
uint16_t x440 = 31U;
uint64_t x447 = UINT64_MAX;
uint8_t x451 = UINT8_MAX;
static int32_t t85 = 71670500;
int16_t x464 = 15836;
int16_t x466 = -1;
static int16_t x484 = -5962;
volatile uint64_t t91 = 2067670945401516791LLU;
uint64_t x498 = UINT64_MAX;
int32_t x500 = 319084;
int8_t x506 = INT8_MAX;
static uint32_t x516 = 4475U;
int32_t x524 = INT32_MIN;


void f0(void) {
	uint64_t x1 = 1693284LLU;
	static uint16_t x4 = 9611U;
	volatile uint64_t t0 = 553673671043427537LLU;

	t0 = (x1*((x2<=x3)+x4));

	if (t0 != 16274152524LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 389992U;
	volatile int64_t x7 = INT64_MIN;
	static int32_t x8 = -970120;
	uint32_t t1 = 11833U;

	t1 = (x5*((x6<=x7)+x8));

	if (t1 != 3913050304U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MAX;
	int16_t x12 = -10618;
	volatile int32_t t2 = 19;

	t2 = (x9*((x10<=x11)+x12));

	if (t2 != -17167689) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint16_t x18 = 15U;

	t3 = (x17*((x18<=x19)+x20));

	if (t3 != -42145LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static uint16_t x22 = UINT16_MAX;
	int64_t x23 = INT64_MIN;
	static uint8_t x24 = 0U;
	int32_t t4 = 296;

	t4 = (x21*((x22<=x23)+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x26 = INT8_MIN;
	volatile int8_t x27 = -10;
	uint8_t x28 = 3U;
	volatile int32_t t5 = -112202661;

	t5 = (x25*((x26<=x27)+x28));

	if (t5 != -2120) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x31 = 4LL;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x29*((x30<=x31)+x32));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 78LLU;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 3723U;
	uint32_t t7 = 93488U;

	t7 = (x33*((x34<=x35)+x36));

	if (t7 != 122024308U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t8 = 2473;

	t8 = (x37*((x38<=x39)+x40));

	if (t8 != -4161536) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = -1;
	int64_t x42 = 0LL;
	static volatile int64_t t9 = 119689345LL;

	t9 = (x41*((x42<=x43)+x44));

	if (t9 != 1762190LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -18904;
	uint8_t x50 = 1U;
	volatile int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t10 = 5;

	t10 = (x49*((x50<=x51)+x52));

	if (t10 != -4820520) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = 24;
	volatile int8_t x55 = INT8_MIN;
	uint32_t x56 = UINT32_MAX;
	static uint32_t t11 = 6921U;

	t11 = (x53*((x54<=x55)+x56));

	if (t11 != 4294967290U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	uint32_t x63 = 167620U;
	static volatile uint8_t x64 = 2U;
	volatile int32_t t12 = -43;

	t12 = (x61*((x62<=x63)+x64));

	if (t12 != 98301) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 35U;
	int32_t x66 = INT32_MIN;
	int16_t x67 = 9240;
	int16_t x68 = INT16_MIN;

	t13 = (x65*((x66<=x67)+x68));

	if (t13 != 4293820451U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = -15;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	int16_t x72 = INT16_MIN;
	static int32_t t14 = -382;

	t14 = (x69*((x70<=x71)+x72));

	if (t14 != 491505) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = INT16_MAX;
	volatile int16_t x75 = INT16_MAX;
	static int8_t x76 = INT8_MIN;
	int32_t t15 = 13450387;

	t15 = (x73*((x74<=x75)+x76));

	if (t15 != 4161536) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x82 = UINT16_MAX;
	volatile uint64_t x83 = 12830299149808LLU;
	uint32_t x84 = 1U;
	uint32_t t16 = 248705328U;

	t16 = (x81*((x82<=x83)+x84));

	if (t16 != 22U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = -1;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t17 = 196;

	t17 = (x89*((x90<=x91)+x92));

	if (t17 != -65536) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = 1478U;
	static uint64_t x95 = 82355119474422470LLU;
	uint16_t x96 = 29303U;

	t18 = (x93*((x94<=x95)+x96));

	if (t18 != 43311312U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	static int8_t x98 = INT8_MIN;
	int32_t x99 = -11200640;
	static volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t19 = 5932915LLU;

	t19 = (x97*((x98<=x99)+x100));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	volatile uint64_t x106 = 143996640948091154LLU;
	int64_t x107 = INT64_MIN;
	volatile int8_t x108 = -12;
	volatile int32_t t20 = 40594;

	t20 = (x105*((x106<=x107)+x108));

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = -1LL;
	int16_t x115 = 1;
	int16_t x116 = INT16_MIN;
	int32_t t21 = 899259;

	t21 = (x113*((x114<=x115)+x116));

	if (t21 != -8355585) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x117 = 1;
	int64_t x118 = -16971754632001677LL;
	uint8_t x119 = 31U;
	volatile int64_t t22 = 3LL;

	t22 = (x117*((x118<=x119)+x120));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x129 = -1LL;
	static int16_t x130 = 947;
	uint32_t x131 = 343905115U;
	uint64_t x132 = 515213601LLU;
	volatile uint64_t t23 = 190LLU;

	t23 = (x129*((x130<=x131)+x132));

	if (t23 != 18446744073194338014LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = -2;
	uint16_t x136 = 2U;
	int32_t t24 = -39092;

	t24 = (x133*((x134<=x135)+x136));

	if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MIN;
	volatile uint64_t x139 = 28LLU;
	volatile int8_t x140 = INT8_MIN;

	t25 = (x137*((x138<=x139)+x140));

	if (t25 != 16384) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x146 = 52;
	static volatile uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MAX;
	volatile int32_t t26 = 4612;

	t26 = (x145*((x146<=x147)+x148));

	if (t26 != 2147450880) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x157 = INT16_MIN;
	static volatile int16_t x158 = -73;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = UINT64_MAX;

	t27 = (x157*((x158<=x159)+x160));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x167 = -1LL;
	volatile int64_t x168 = 33136935LL;
	volatile int64_t t28 = 213368LL;

	t28 = (x165*((x166<=x167)+x168));

	if (t28 != 142322056376508120LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x169 = INT16_MIN;
	static uint16_t x170 = 0U;
	int8_t x171 = INT8_MAX;
	int16_t x172 = -233;
	volatile int32_t t29 = 0;

	t29 = (x169*((x170<=x171)+x172));

	if (t29 != 7602176) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x177 = -1;
	int8_t x178 = INT8_MAX;
	int16_t x179 = 7;
	int32_t x180 = INT32_MAX;
	int32_t t30 = 38;

	t30 = (x177*((x178<=x179)+x180));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 7412817154LLU;
	int64_t x192 = -1LL;
	volatile int64_t t31 = 6841381998023LL;

	t31 = (x189*((x190<=x191)+x192));

	if (t31 != -253LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x194 = INT64_MAX;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = 2U;

	t32 = (x193*((x194<=x195)+x196));

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x201 = 1856U;
	int16_t x202 = INT16_MAX;
	uint8_t x204 = 4U;
	int32_t t33 = 1011119115;

	t33 = (x201*((x202<=x203)+x204));

	if (t33 != 7424) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x205 = UINT32_MAX;
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MIN;
	int16_t x208 = 13532;
	static volatile uint32_t t34 = 91U;

	t34 = (x205*((x206<=x207)+x208));

	if (t34 != 4294953764U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x215 = INT64_MIN;
	volatile uint32_t x216 = 598020530U;
	uint32_t t35 = 99906U;

	t35 = (x213*((x214<=x215)+x216));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x217 = UINT32_MAX;
	static uint8_t x218 = 1U;
	uint8_t x219 = 51U;
	int64_t x220 = -1LL;
	int64_t t36 = -3718LL;

	t36 = (x217*((x218<=x219)+x220));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x221 = -21110;
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = -1LL;
	volatile uint32_t x224 = 9U;
	uint32_t t37 = 83U;

	t37 = (x221*((x222<=x223)+x224));

	if (t37 != 4294777306U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x226 = 31LL;
	int64_t x227 = 69007LL;
	int32_t x228 = 0;
	uint64_t t38 = UINT64_MAX;

	t38 = (x225*((x226<=x227)+x228));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	static volatile uint16_t x230 = 613U;
	static int16_t x232 = INT16_MIN;

	t39 = (x229*((x230<=x231)+x232));

	if (t39 != 4194304) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x234 = 251U;
	static int16_t x235 = 10370;
	uint8_t x236 = 14U;

	t40 = (x233*((x234<=x235)+x236));

	if (t40 != -15) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x242 = 4U;
	int8_t x243 = 0;
	int8_t x244 = -1;
	volatile int32_t t41 = -392339775;

	t41 = (x241*((x242<=x243)+x244));

	if (t41 != -4132) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x249 = INT32_MIN;
	uint64_t x250 = 1LLU;
	static volatile uint8_t x251 = 64U;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t42 = 34U;

	t42 = (x249*((x250<=x251)+x252));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x254 = 0U;
	int64_t x255 = -508LL;
	volatile int64_t t43 = -60973959LL;

	t43 = (x253*((x254<=x255)+x256));

	if (t43 != -65536LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x257 = 108346740U;
	volatile int16_t x258 = INT16_MIN;
	int64_t t44 = 2091199006311647LL;

	t44 = (x257*((x258<=x259)+x260));

	if (t44 != -1478268727137060LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x264 = 8;
	static volatile int32_t t45 = -3712;

	t45 = (x261*((x262<=x263)+x264));

	if (t45 != 1143) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x265 = 0;
	static int16_t x267 = -56;
	static volatile uint32_t x268 = 497481765U;
	volatile uint32_t t46 = 10U;

	t46 = (x265*((x266<=x267)+x268));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = 1634;
	int16_t x270 = INT16_MIN;
	volatile int8_t x271 = -1;
	static int16_t x272 = INT16_MAX;

	t47 = (x269*((x270<=x271)+x272));

	if (t47 != 53542912) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x275 = INT16_MAX;
	static int16_t x276 = -18;

	t48 = (x273*((x274<=x275)+x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x277 = -33608580902666857LL;
	volatile int32_t x278 = INT32_MIN;
	static volatile int16_t x279 = INT16_MAX;
	int8_t x280 = INT8_MIN;

	t49 = (x277*((x278<=x279)+x280));

	if (t49 != 4268289774638690839LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = 463707;
	volatile int32_t x283 = 133030774;
	uint32_t x284 = UINT32_MAX;
	static int64_t t50 = -134LL;

	t50 = (x281*((x282<=x283)+x284));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 11857LLU;
	uint32_t x288 = UINT32_MAX;

	t51 = (x285*((x286<=x287)+x288));

	if (t51 != 128U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x289 = 280U;
	volatile uint16_t x290 = 1U;
	int8_t x291 = -1;
	volatile int32_t x292 = -97;
	int32_t t52 = 4397754;

	t52 = (x289*((x290<=x291)+x292));

	if (t52 != -27160) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x293 = -1LL;
	int32_t x294 = 1;
	volatile int8_t x295 = INT8_MIN;
	volatile uint32_t x296 = 2759405U;

	t53 = (x293*((x294<=x295)+x296));

	if (t53 != -2759405LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = -1LL;
	int32_t x298 = INT32_MIN;
	volatile uint32_t x299 = 519835368U;
	uint64_t x300 = 513732LLU;
	volatile uint64_t t54 = 11414LLU;

	t54 = (x297*((x298<=x299)+x300));

	if (t54 != 18446744073709037884LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -1;
	int16_t x302 = -6;
	int64_t x303 = INT64_MAX;
	volatile uint32_t t55 = 454762661U;

	t55 = (x301*((x302<=x303)+x304));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = INT8_MAX;
	uint32_t x306 = 1651U;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t56 = 1029203LLU;

	t56 = (x305*((x306<=x307)+x308));

	if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = INT8_MIN;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	int32_t t57 = 0;

	t57 = (x309*((x310<=x311)+x312));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x313 = INT32_MIN;
	volatile int64_t x314 = 965267629387910LL;
	int16_t x315 = -1;
	uint8_t x316 = 1U;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x313*((x314<=x315)+x316));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x317 = -1;
	int64_t x318 = -1LL;
	int16_t x319 = INT16_MIN;
	int32_t t59 = 5;

	t59 = (x317*((x318<=x319)+x320));

	if (t59 != -65535) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x322 = UINT8_MAX;
	int16_t x324 = INT16_MAX;
	volatile uint32_t t60 = 42460603U;

	t60 = (x321*((x322<=x323)+x324));

	if (t60 != 4294934529U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MIN;
	static volatile int16_t x328 = INT16_MIN;
	volatile uint32_t t61 = 570U;

	t61 = (x325*((x326<=x327)+x328));

	if (t61 != 4291100790U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = 488;
	volatile int64_t x330 = INT64_MAX;
	static int8_t x331 = INT8_MIN;
	volatile int32_t t62 = 10625;

	t62 = (x329*((x330<=x331)+x332));

	if (t62 != 15990296) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x334 = 641520280655LLU;
	uint16_t x335 = 154U;

	t63 = (x333*((x334<=x335)+x336));

	if (t63 != 4570059400014352087LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = -1LL;
	uint32_t x338 = UINT32_MAX;
	int8_t x340 = -9;

	t64 = (x337*((x338<=x339)+x340));

	if (t64 != 9LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x345 = 6U;
	uint8_t x346 = 0U;
	int32_t x347 = 1;
	int8_t x348 = -3;
	volatile uint32_t t65 = 42017U;

	t65 = (x345*((x346<=x347)+x348));

	if (t65 != 4294967284U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x357 = -1323965301992LL;
	volatile uint8_t x358 = 15U;
	int32_t x359 = -1;
	uint8_t x360 = UINT8_MAX;
	volatile int64_t t66 = -889631739479597LL;

	t66 = (x357*((x358<=x359)+x360));

	if (t66 != -337611152007960LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x361 = -1;
	static int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t67 = INT32_MAX;

	t67 = (x361*((x362<=x363)+x364));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x372 = INT8_MIN;

	t68 = (x369*((x370<=x371)+x372));

	if (t68 != 34036) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x382 = INT8_MAX;
	int32_t x383 = 31;
	uint64_t t69 = 1941734942742187LLU;

	t69 = (x381*((x382<=x383)+x384));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;

	t70 = (x389*((x390<=x391)+x392));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x393 = INT16_MAX;
	volatile uint8_t x394 = 1U;
	int32_t t71 = 8378909;

	t71 = (x393*((x394<=x395)+x396));

	if (t71 != -294903) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x397 = -1;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	int16_t x400 = -1;
	volatile int32_t t72 = 7001;

	t72 = (x397*((x398<=x399)+x400));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x401 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	static uint64_t x404 = 86797LLU;
	volatile uint64_t t73 = 743609252433796007LLU;

	t73 = (x401*((x402<=x403)+x404));

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x405 = UINT64_MAX;
	static int16_t x406 = INT16_MIN;
	static uint64_t t74 = 310588831374242LLU;

	t74 = (x405*((x406<=x407)+x408));

	if (t74 != 2147483648LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x413 = -7705LL;
	int64_t x414 = INT64_MIN;
	int32_t x415 = INT32_MIN;
	volatile int16_t x416 = -1;
	volatile int64_t t75 = 17LL;

	t75 = (x413*((x414<=x415)+x416));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x417 = -62;
	static int16_t x418 = 104;
	uint16_t x419 = 1U;
	uint8_t x420 = 1U;

	t76 = (x417*((x418<=x419)+x420));

	if (t76 != -62) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x421 = UINT32_MAX;
	int64_t x422 = 177506484LL;
	static uint8_t x423 = 1U;
	static uint32_t t77 = 393060401U;

	t77 = (x421*((x422<=x423)+x424));

	if (t77 != 4294967250U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = -1;
	uint8_t x426 = 4U;
	volatile int8_t x427 = -1;
	int32_t t78 = 69850;

	t78 = (x425*((x426<=x427)+x428));

	if (t78 != 249) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = INT16_MAX;
	static volatile uint32_t x430 = 382U;
	volatile int8_t x432 = INT8_MAX;
	int32_t t79 = 315290;

	t79 = (x429*((x430<=x431)+x432));

	if (t79 != 4194176) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x433 = 13;
	uint16_t x434 = UINT16_MAX;
	static int16_t x435 = -1;
	volatile uint32_t t80 = 360U;

	t80 = (x433*((x434<=x435)+x436));

	if (t80 != 390311636U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x437 = 206LLU;
	static uint64_t x438 = 4151428LLU;
	static volatile int32_t x439 = INT32_MIN;
	volatile uint64_t t81 = 1525834413163864239LLU;

	t81 = (x437*((x438<=x439)+x440));

	if (t81 != 6592LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x441 = 1367;
	int8_t x442 = 6;
	static int8_t x443 = INT8_MIN;
	int16_t x444 = 930;
	int32_t t82 = -30;

	t82 = (x441*((x442<=x443)+x444));

	if (t82 != 1271310) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = -1;
	int64_t x448 = 207099LL;
	volatile int64_t t83 = 188439500LL;

	t83 = (x445*((x446<=x447)+x448));

	if (t83 != -444743863500800LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = -1;
	static uint64_t x450 = UINT64_MAX;
	static int8_t x452 = 0;
	int32_t t84 = 949975;

	t84 = (x449*((x450<=x451)+x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x453 = 6U;
	uint16_t x454 = 24101U;
	volatile uint16_t x455 = 634U;
	int16_t x456 = INT16_MIN;

	t85 = (x453*((x454<=x455)+x456));

	if (t85 != -196608) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x457 = -1217163;
	static volatile int32_t x458 = INT32_MIN;
	static int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	static int32_t t86 = 4291;

	t86 = (x457*((x458<=x459)+x460));

	if (t86 != 154579701) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x461 = UINT64_MAX;
	uint32_t x462 = 7498558U;
	uint16_t x463 = 2U;
	volatile uint64_t t87 = 5690260LLU;

	t87 = (x461*((x462<=x463)+x464));

	if (t87 != 18446744073709535780LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = INT32_MIN;
	volatile int16_t x467 = INT16_MIN;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t88 = 346LLU;

	t88 = (x465*((x466<=x467)+x468));

	if (t88 != 2147483648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = 6U;
	volatile uint32_t x470 = UINT32_MAX;
	volatile int16_t x471 = -5294;
	static uint16_t x472 = UINT16_MAX;
	volatile int32_t t89 = 7117838;

	t89 = (x469*((x470<=x471)+x472));

	if (t89 != 393210) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x477 = 46071U;
	uint32_t x478 = 4U;
	int64_t x479 = INT64_MIN;
	volatile int32_t x480 = INT32_MIN;
	uint32_t t90 = 860405U;

	t90 = (x477*((x478<=x479)+x480));

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x481 = 67729LLU;
	uint8_t x482 = 0U;
	volatile uint64_t x483 = 917461LLU;

	t91 = (x481*((x482<=x483)+x484));

	if (t91 != 18446744073305819047LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x485 = -1;
	static uint64_t x486 = UINT64_MAX;
	int8_t x487 = 0;
	int8_t x488 = -1;
	volatile int32_t t92 = -7236175;

	t92 = (x485*((x486<=x487)+x488));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x493 = UINT16_MAX;
	int64_t x494 = INT64_MAX;
	int16_t x495 = 0;
	uint16_t x496 = 123U;
	int32_t t93 = -76191;

	t93 = (x493*((x494<=x495)+x496));

	if (t93 != 8060805) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x497 = 11895LLU;
	static uint16_t x499 = 78U;
	volatile uint64_t t94 = 201647852751041LLU;

	t94 = (x497*((x498<=x499)+x500));

	if (t94 != 3795504180LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x501 = 1U;
	uint8_t x502 = 2U;
	int16_t x503 = 5121;
	int16_t x504 = -14;
	volatile int32_t t95 = 222105;

	t95 = (x501*((x502<=x503)+x504));

	if (t95 != -13) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x505 = UINT32_MAX;
	int64_t x507 = -1LL;
	uint8_t x508 = 25U;
	static volatile uint32_t t96 = 3017883U;

	t96 = (x505*((x506<=x507)+x508));

	if (t96 != 4294967271U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x509 = 3291LLU;
	uint8_t x510 = 1U;
	int8_t x511 = -43;
	int64_t x512 = INT64_MAX;
	uint64_t t97 = 47203422856488LLU;

	t97 = (x509*((x510<=x511)+x512));

	if (t97 != 9223372036854772517LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x513 = INT8_MAX;
	int8_t x514 = INT8_MAX;
	static volatile uint8_t x515 = UINT8_MAX;
	volatile uint32_t t98 = 7756U;

	t98 = (x513*((x514<=x515)+x516));

	if (t98 != 568452U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x521 = UINT64_MAX;
	static uint16_t x522 = UINT16_MAX;
	int8_t x523 = -1;
	uint64_t t99 = 40990863LLU;

	t99 = (x521*((x522<=x523)+x524));

	if (t99 != 2147483648LLU) { NG(); } else { ; }
	
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

