#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 227846LLU;
uint64_t x7 = 877LLU;
volatile uint64_t t1 = 27496998875303092LLU;
uint32_t x20 = 4U;
int32_t x21 = -1;
static uint8_t x22 = 2U;
int16_t x24 = -1;
int32_t t4 = 1;
uint32_t x33 = UINT32_MAX;
uint16_t x46 = 27119U;
int32_t x64 = -190;
uint8_t x66 = UINT8_MAX;
uint64_t x81 = 25LLU;
int16_t x84 = INT16_MIN;
int32_t x97 = INT32_MAX;
int64_t x110 = -129570LL;
static int64_t x119 = INT64_MAX;
volatile int32_t x132 = -13698685;
int8_t x134 = INT8_MAX;
int16_t x139 = 7213;
int8_t x140 = 0;
int32_t t21 = 126138;
uint16_t x141 = UINT16_MAX;
static int64_t x143 = -1LL;
volatile uint64_t x147 = 3347084446LLU;
static volatile int16_t x167 = INT16_MIN;
uint16_t x174 = UINT16_MAX;
static uint16_t x175 = UINT16_MAX;
static int32_t x176 = INT32_MIN;
volatile uint32_t t28 = 696366789U;
int8_t x184 = -3;
uint32_t x191 = UINT32_MAX;
volatile int32_t t32 = -16597198;
uint8_t x200 = 6U;
int16_t x213 = -1;
uint64_t x237 = UINT64_MAX;
uint64_t x242 = 15LLU;
uint64_t t40 = 107042316LLU;
uint64_t x245 = 22076047953968LLU;
uint64_t x263 = UINT64_MAX;
volatile int32_t x278 = -1;
volatile uint32_t x279 = 49676693U;
int8_t x284 = INT8_MIN;
static volatile int64_t x287 = INT64_MAX;
uint16_t x303 = 3U;
uint8_t x312 = 1U;
int16_t x328 = INT16_MIN;
uint32_t x332 = 1186U;
int64_t x351 = 1LL;
int16_t x358 = INT16_MIN;
static uint8_t x371 = UINT8_MAX;
static uint32_t x374 = UINT32_MAX;
int32_t x375 = INT32_MIN;
static uint64_t x384 = UINT64_MAX;
int64_t x388 = INT64_MIN;
int16_t x400 = INT16_MAX;
volatile int32_t t65 = 119141464;
volatile uint16_t x430 = 39U;
int8_t x437 = INT8_MIN;
volatile uint8_t x446 = UINT8_MAX;
int64_t t68 = 15845247258159LL;
static int16_t x454 = -1;
volatile uint32_t t69 = 28820101U;
static volatile uint64_t t71 = 7383738399LLU;
uint64_t x480 = UINT64_MAX;
volatile uint64_t t73 = 364229943LLU;
int64_t x481 = 49512882335LL;
static uint32_t x484 = UINT32_MAX;
int32_t x513 = -24165549;
uint32_t x516 = 2U;
int64_t x522 = -1LL;
int64_t x535 = -29LL;
volatile int64_t t81 = 14485898602LL;
volatile int64_t t83 = -4433770134857LL;
int16_t x568 = INT16_MAX;
uint64_t t84 = 14368906LLU;
uint16_t x570 = 145U;
static uint8_t x572 = 0U;
int32_t x576 = 1;
int8_t x579 = 2;
static uint32_t x583 = UINT32_MAX;
uint16_t x584 = 8U;
int8_t x598 = INT8_MIN;
static volatile int32_t t89 = 1;
static int32_t x603 = -1;
volatile int32_t t90 = -35865;
int64_t x605 = -10055505286LL;
uint32_t x618 = UINT32_MAX;
volatile int16_t x627 = INT16_MAX;
int8_t x628 = -1;
int8_t x639 = INT8_MIN;
volatile uint64_t x640 = 89690LLU;
volatile int32_t x645 = INT32_MIN;
int64_t x647 = INT64_MIN;
uint64_t t97 = 135334408869LLU;


void f0(void) {
	static int32_t x1 = -18833598;
	uint64_t x2 = 6219893511257LLU;
	int16_t x3 = -1;
	static int32_t x4 = INT32_MAX;

	t0 = (x1+((x2^x3)*x4));

	if (t0 != 16769851931440690076LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 11LL;
	volatile int8_t x6 = -27;
	volatile int16_t x8 = -1;

	t1 = (x5+((x6^x7)*x8));

	if (t1 != 899LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	static int64_t x14 = INT64_MIN;
	static volatile uint64_t x15 = UINT64_MAX;
	int64_t x16 = -1LL;
	uint64_t t2 = 9031LLU;

	t2 = (x13+((x14^x15)*x16));

	if (t2 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 11U;
	int32_t x18 = INT32_MIN;
	static int8_t x19 = INT8_MAX;
	volatile uint32_t t3 = 15U;

	t3 = (x17+((x18^x19)*x20));

	if (t3 != 519U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = INT32_MIN;

	t4 = (x21+((x22^x23)*x24));

	if (t4 != 2147483645) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	int16_t x27 = INT16_MAX;
	volatile int16_t x28 = -1;
	static volatile int32_t t5 = 0;

	t5 = (x25+((x26^x27)*x28));

	if (t5 != 32640) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = 3LL;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	volatile int64_t t6 = 65372LL;

	t6 = (x29+((x30^x31)*x32));

	if (t6 != -2143387648LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = -1;
	int8_t x36 = 1;
	uint64_t t7 = 2585573493932LLU;

	t7 = (x33+((x34^x35)*x36));

	if (t7 != 4294967295LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = 3465U;
	uint8_t x39 = 15U;
	uint8_t x40 = 17U;
	int32_t t8 = 13751;

	t8 = (x37+((x38^x39)*x40));

	if (t8 != 59109) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x45 = 20680U;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 590522009U;
	volatile uint32_t t9 = 43640679U;

	t9 = (x45+((x46^x47)*x48));

	if (t9 != 1330780831U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 854632111U;
	int8_t x62 = 1;
	static volatile int32_t x63 = -83;
	volatile uint32_t t10 = 4978U;

	t10 = (x61+((x62^x63)*x64));

	if (t10 != 854648071U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x67 = 868837LLU;
	int32_t x68 = -3;
	volatile uint64_t t11 = 33483264007LLU;

	t11 = (x65+((x66^x67)*x68));

	if (t11 != 9223372036852169906LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x82 = 4885LLU;
	uint32_t x83 = 114U;
	volatile uint64_t t12 = 20383512LLU;

	t12 = (x81+((x82^x83)*x84));

	if (t12 != 18446744073546792985LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x89 = INT64_MAX;
	uint64_t x90 = UINT64_MAX;
	uint32_t x91 = 1750U;
	uint16_t x92 = 216U;
	static volatile uint64_t t13 = 8951229044072178LLU;

	t13 = (x89+((x90^x91)*x92));

	if (t13 != 9223372036854397591LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x93 = 1U;
	uint64_t x94 = 5LLU;
	uint64_t x95 = 46991317236LLU;
	static int64_t x96 = INT64_MIN;
	uint64_t t14 = 170456LLU;

	t14 = (x93+((x94^x95)*x96));

	if (t14 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x98 = -96;
	int8_t x99 = INT8_MAX;
	uint64_t x100 = 10LLU;
	uint64_t t15 = 50916366LLU;

	t15 = (x97+((x98^x99)*x100));

	if (t15 != 2147483317LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = -3;
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = 6745499265730034LLU;
	volatile uint64_t t16 = 1775279LLU;

	t16 = (x105+((x106^x107)*x108));

	if (t16 != 1505496296893444875LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x109 = -1;
	uint16_t x111 = UINT16_MAX;
	static volatile uint32_t x112 = 159211552U;
	volatile int64_t t17 = -12566335063LL;

	t17 = (x109+((x110^x111)*x112));

	if (t17 != -10673383234529LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x117 = 50U;
	volatile int64_t x118 = -1LL;
	volatile uint64_t x120 = 1452420714394LLU;
	volatile uint64_t t18 = 29778940073622273LLU;

	t18 = (x117+((x118^x119)*x120));

	if (t18 != 50LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = INT8_MIN;
	volatile int16_t x130 = -1;
	uint8_t x131 = 6U;
	int32_t t19 = -615454;

	t19 = (x129+((x130^x131)*x132));

	if (t19 != 95890667) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x135 = 49213301U;
	int16_t x136 = INT16_MAX;
	volatile int64_t t20 = 26038964LL;

	t20 = (x133+((x134^x135)*x136));

	if (t20 != -9223372034898784010LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x137 = INT16_MAX;
	static int32_t x138 = INT32_MAX;

	t21 = (x137+((x138^x139)*x140));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x142 = UINT8_MAX;
	static volatile int8_t x144 = INT8_MIN;
	int64_t t22 = 70162LL;

	t22 = (x141+((x142^x143)*x144));

	if (t22 != 98303LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x145 = -1LL;
	volatile int16_t x146 = INT16_MIN;
	uint16_t x148 = 2390U;
	static uint64_t t23 = 141LLU;

	t23 = (x145+((x146^x147)*x148));

	if (t23 != 18446736074242112275LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x161 = UINT16_MAX;
	int8_t x162 = -1;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = UINT64_MAX;
	uint64_t t24 = 20397494700643339LLU;

	t24 = (x161+((x162^x163)*x164));

	if (t24 != 65408LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x165 = 2U;
	int8_t x166 = -1;
	static volatile uint64_t x168 = 9504709LLU;
	volatile uint64_t t25 = 956980679LLU;

	t25 = (x165+((x166^x167)*x168));

	if (t25 != 311440799805LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x169 = -1;
	int64_t x170 = -3158765496416863LL;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 1U;
	int64_t t26 = -8057621565LL;

	t26 = (x169+((x170^x171)*x172));

	if (t26 != 3158765496416800LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = INT8_MIN;
	volatile int32_t t27 = -44873;

	t27 = (x173+((x174^x175)*x176));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x177 = INT8_MAX;
	int8_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = -1;

	t28 = (x177+((x178^x179)*x180));

	if (t28 != 127U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x181 = 126U;
	volatile int32_t x182 = INT32_MIN;
	static int32_t x183 = INT32_MIN;
	volatile int32_t t29 = 87229321;

	t29 = (x181+((x182^x183)*x184));

	if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = -1135399455120783LL;
	uint64_t x186 = 6666261602443LLU;
	volatile uint8_t x187 = 63U;
	volatile int64_t x188 = -19787LL;
	volatile uint64_t t30 = 1023144918LLU;

	t30 = (x185+((x186^x187)*x188));

	if (t30 != 18313703355926079925LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x189 = -5;
	int32_t x190 = -1;
	uint64_t x192 = 30458624LLU;
	uint64_t t31 = 35265133549LLU;

	t31 = (x189+((x190^x191)*x192));

	if (t31 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x193 = 24U;
	uint16_t x194 = 3U;
	volatile uint8_t x195 = 41U;
	uint16_t x196 = 25U;

	t32 = (x193+((x194^x195)*x196));

	if (t32 != 1074) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x197 = 64U;
	int32_t x198 = -1;
	int8_t x199 = INT8_MIN;
	volatile int32_t t33 = -214;

	t33 = (x197+((x198^x199)*x200));

	if (t33 != 826) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -11;
	static uint8_t x204 = 3U;
	uint64_t t34 = 2LLU;

	t34 = (x201+((x202^x203)*x204));

	if (t34 != 350LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x209 = -1;
	int32_t x210 = -24048778;
	static int64_t x211 = -7854490848LL;
	static int16_t x212 = -504;
	volatile int64_t t35 = 12560396941047LL;

	t35 = (x209+((x210^x211)*x212));

	if (t35 != -3968008268113LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x214 = 10111U;
	volatile int8_t x215 = -1;
	int32_t x216 = -1;
	volatile uint32_t t36 = 0U;

	t36 = (x213+((x214^x215)*x216));

	if (t36 != 10111U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = -1590;
	volatile int32_t x227 = -3309;
	static uint32_t x228 = 6796276U;
	uint32_t t37 = 982950505U;

	t37 = (x225+((x226^x227)*x228));

	if (t37 != 1693389395U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 418849667U;
	int16_t x231 = 1;
	int8_t x232 = INT8_MIN;
	int64_t t38 = -20485031176623381LL;

	t38 = (x229+((x230^x231)*x232));

	if (t38 != -9223372034632958208LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x238 = 9923LLU;
	uint16_t x239 = UINT16_MAX;
	static int16_t x240 = -1;
	uint64_t t39 = 55LLU;

	t39 = (x237+((x238^x239)*x240));

	if (t39 != 18446744073709496003LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = INT64_MIN;
	int8_t x243 = INT8_MIN;
	volatile uint8_t x244 = UINT8_MAX;

	t40 = (x241+((x242^x243)*x244));

	if (t40 != 9223372036854746993LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x246 = 1338U;
	uint8_t x247 = UINT8_MAX;
	static uint64_t x248 = 837695271LLU;
	uint64_t t41 = 3576424644815589LLU;

	t41 = (x245+((x246^x247)*x248));

	if (t41 != 23313323869235LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = -121247828222819LL;
	volatile uint64_t x251 = 622518625369155708LLU;
	int32_t x252 = -1;
	static volatile uint64_t t42 = 12937795596347954LLU;

	t42 = (x249+((x250^x251)*x252));

	if (t42 != 9845940955541818143LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x261 = -193598413927237560LL;
	int64_t x262 = -2564148LL;
	int32_t x264 = INT32_MAX;
	volatile uint64_t t43 = 23186696656310024LLU;

	t43 = (x261+((x262^x263)*x264));

	if (t43 != 18258652123533318165LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x269 = -1;
	static uint32_t x270 = 3537U;
	static volatile int64_t x271 = -355554052LL;
	volatile int8_t x272 = 13;
	volatile int64_t t44 = -694072711490LL;

	t44 = (x269+((x270^x271)*x272));

	if (t44 != -4622241976LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x277 = 108648505760163813LLU;
	uint8_t x280 = 92U;
	volatile uint64_t t45 = 24256244238LLU;

	t45 = (x277+((x278^x279)*x280));

	if (t45 != 108648509779842557LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -1387112373760247LL;
	volatile int16_t x283 = -1;
	static int64_t t46 = 47703722602520154LL;

	t46 = (x281+((x282^x283)*x284));

	if (t46 != -177550383841311616LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x285 = -1LL;
	volatile uint64_t x286 = 955480LLU;
	static int8_t x288 = INT8_MAX;
	uint64_t t47 = 1338161LLU;

	t47 = (x285+((x286^x287)*x288));

	if (t47 != 9223372036733429720LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	int32_t x291 = 97855145;
	int8_t x292 = -1;
	int64_t t48 = 954390003749LL;

	t48 = (x289+((x290^x291)*x292));

	if (t48 != -9223372036756920617LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x293 = -1;
	static uint64_t x294 = UINT64_MAX;
	int32_t x295 = 1;
	int64_t x296 = -1LL;
	volatile uint64_t t49 = 141245034691957LLU;

	t49 = (x293+((x294^x295)*x296));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 9121U;
	static uint32_t x304 = 81330U;
	volatile int64_t t50 = -4303771255496800367LL;

	t50 = (x301+((x302^x303)*x304));

	if (t50 != -9223372036112883548LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x309 = -209978372301LL;
	uint64_t x310 = 468295048951444172LLU;
	int32_t x311 = -117220;
	uint64_t t51 = 246902653LLU;

	t51 = (x309+((x310^x311)*x312));

	if (t51 != 17978448814779749379LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x313 = INT32_MIN;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = 61;
	uint16_t x316 = 77U;
	volatile int32_t t52 = -99527;

	t52 = (x313+((x314^x315)*x316));

	if (t52 != -2147468710) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x317 = UINT64_MAX;
	uint32_t x318 = 2253U;
	volatile uint64_t x319 = 32973491450342815LLU;
	volatile uint32_t x320 = 990304395U;
	static uint64_t t53 = 502219215100566173LLU;

	t53 = (x317+((x318^x319)*x320));

	if (t53 != 12778529241117995909LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x325 = 370;
	int64_t x326 = -177389LL;
	int8_t x327 = INT8_MIN;
	static volatile int64_t t54 = -66321150661694LL;

	t54 = (x325+((x326^x327)*x328));

	if (t54 != -5809733262LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile uint8_t x331 = 1U;
	static volatile uint32_t t55 = 242956109U;

	t55 = (x329+((x330^x331)*x332));

	if (t55 != 1185U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 53750888252704LLU;
	volatile int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MAX;
	volatile uint64_t t56 = 6278097419329039536LLU;

	t56 = (x333+((x334^x335)*x336));

	if (t56 != 10570878730691528287LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = UINT64_MAX;
	uint16_t x352 = 11179U;
	uint64_t t57 = 206LLU;

	t57 = (x349+((x350^x351)*x352));

	if (t57 != 4294944937LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x357 = UINT64_MAX;
	uint8_t x359 = 3U;
	uint16_t x360 = 5883U;
	uint64_t t58 = 4091624700LLU;

	t58 = (x357+((x358^x359)*x360));

	if (t58 != 18446744073516795120LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	uint64_t x372 = 25074LLU;
	volatile uint64_t t59 = 29245207796579LLU;

	t59 = (x369+((x370^x371)*x372));

	if (t59 != 107692003560959LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x373 = INT64_MIN;
	int32_t x376 = -61;
	int64_t t60 = 11129204LL;

	t60 = (x373+((x374^x375)*x376));

	if (t60 != -9223372034707292099LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x381 = 57911458U;
	int16_t x382 = -1;
	static uint64_t x383 = 138558483539821LLU;
	volatile uint64_t t61 = 12778907652574LLU;

	t61 = (x381+((x382^x383)*x384));

	if (t61 != 138558541451280LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x385 = INT32_MAX;
	uint64_t x386 = 4094LLU;
	uint32_t x387 = UINT32_MAX;
	volatile uint64_t t62 = 652LLU;

	t62 = (x385+((x386^x387)*x388));

	if (t62 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 42U;
	volatile int16_t x399 = INT16_MIN;
	volatile uint32_t t63 = 441539588U;

	t63 = (x397+((x398^x399)*x400));

	if (t63 != 3222601686U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x409 = INT16_MIN;
	uint16_t x410 = 2U;
	int16_t x411 = 72;
	int8_t x412 = 0;
	volatile int32_t t64 = -12853710;

	t64 = (x409+((x410^x411)*x412));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x417 = UINT16_MAX;
	static int16_t x418 = INT16_MAX;
	volatile int8_t x419 = INT8_MIN;
	uint16_t x420 = 3U;

	t65 = (x417+((x418^x419)*x420));

	if (t65 != -32388) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x429 = 2U;
	volatile int8_t x431 = -1;
	int32_t x432 = -1;
	static volatile int32_t t66 = 0;

	t66 = (x429+((x430^x431)*x432));

	if (t66 != 42) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x438 = 955U;
	static uint64_t x439 = 16LLU;
	uint64_t x440 = 12053LLU;
	static volatile uint64_t t67 = 50834561956605LLU;

	t67 = (x437+((x438^x439)*x440));

	if (t67 != 11317639LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x445 = -1;
	int64_t x447 = -2628192645989553LL;
	static int8_t x448 = INT8_MIN;

	t68 = (x445+((x446^x447)*x448));

	if (t68 != 336408658686650367LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x455 = INT16_MAX;
	int8_t x456 = INT8_MIN;

	t69 = (x453+((x454^x455)*x456));

	if (t69 != 4194303U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x465 = INT64_MAX;
	volatile uint32_t x466 = UINT32_MAX;
	int8_t x467 = 27;
	static volatile int32_t x468 = INT32_MIN;
	int64_t t70 = INT64_MAX;

	t70 = (x465+((x466^x467)*x468));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x469 = 1737728LLU;
	int8_t x470 = 5;
	static int16_t x471 = INT16_MIN;
	static volatile int8_t x472 = 10;

	t71 = (x469+((x470^x471)*x472));

	if (t71 != 1410098LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x473 = -155781182;
	int16_t x474 = -1;
	static int8_t x475 = 55;
	uint16_t x476 = 3980U;
	int32_t t72 = 1;

	t72 = (x473+((x474^x475)*x476));

	if (t72 != -156004062) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x477 = 3U;
	uint16_t x478 = UINT16_MAX;
	int8_t x479 = 2;

	t73 = (x477+((x478^x479)*x480));

	if (t73 != 18446744073709486086LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x482 = 1U;
	int8_t x483 = -3;
	volatile int64_t t74 = -371LL;

	t74 = (x481+((x482^x483)*x484));

	if (t74 != 49512882339LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x485 = INT64_MAX;
	static int32_t x486 = INT32_MIN;
	int16_t x487 = -1;
	uint64_t x488 = UINT64_MAX;
	uint64_t t75 = 10501291LLU;

	t75 = (x485+((x486^x487)*x488));

	if (t75 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x489 = -44877928986302192LL;
	int8_t x490 = -1;
	uint64_t x491 = 17LLU;
	uint16_t x492 = UINT16_MAX;
	static volatile uint64_t t76 = 242022462986LLU;

	t76 = (x489+((x490^x491)*x492));

	if (t76 != 18401866144722069794LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x509 = UINT64_MAX;
	int64_t x510 = 1111LL;
	int8_t x511 = INT8_MIN;
	volatile int32_t x512 = 1514;
	uint64_t t77 = 63247986310063667LLU;

	t77 = (x509+((x510^x511)*x512));

	if (t77 != 18446744073707939205LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x514 = 279169077255198LL;
	volatile uint32_t x515 = 7487608U;
	volatile int64_t t78 = -150179839477133LL;

	t78 = (x513+((x514^x515)*x516));

	if (t78 != 558338136407071LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x521 = INT16_MIN;
	int8_t x523 = -9;
	int8_t x524 = INT8_MAX;
	static volatile int64_t t79 = 1725984549141070980LL;

	t79 = (x521+((x522^x523)*x524));

	if (t79 != -31752LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x525 = INT16_MIN;
	static volatile uint64_t x526 = UINT64_MAX;
	uint64_t x527 = 16946684226LLU;
	uint8_t x528 = UINT8_MAX;
	volatile uint64_t t80 = 43LLU;

	t80 = (x525+((x526^x527)*x528));

	if (t80 != 18446739752305040963LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x533 = 0;
	int32_t x534 = -12;
	static int32_t x536 = INT32_MAX;

	t81 = (x533+((x534^x535)*x536));

	if (t81 != 49392123881LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x549 = -1LL;
	int64_t x550 = 6373LL;
	uint64_t x551 = 265253501174LLU;
	int32_t x552 = -3;
	uint64_t t82 = 193288022LLU;

	t82 = (x549+((x550^x551)*x552));

	if (t82 != 18446743277949067206LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x553 = 1U;
	int64_t x554 = 698488217301010LL;
	int8_t x555 = -1;
	uint8_t x556 = UINT8_MAX;

	t83 = (x553+((x554^x555)*x556));

	if (t83 != -178114495411757804LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x565 = -1;
	int16_t x566 = INT16_MIN;
	volatile uint64_t x567 = 11LLU;

	t84 = (x565+((x566^x567)*x568));

	if (t84 != 18446744072636202996LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x569 = -168345LL;
	int8_t x571 = 36;
	int64_t t85 = 203LL;

	t85 = (x569+((x570^x571)*x572));

	if (t85 != -168345LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x573 = INT32_MIN;
	int32_t x574 = -263;
	static volatile int64_t x575 = INT64_MIN;
	volatile int64_t t86 = 6LL;

	t86 = (x573+((x574^x575)*x576));

	if (t86 != 9223372034707291897LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x577 = INT8_MIN;
	uint16_t x578 = UINT16_MAX;
	volatile uint32_t x580 = 761153512U;
	volatile uint32_t t87 = 630367184U;

	t87 = (x577+((x578^x579)*x580));

	if (t87 != 3217893320U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x581 = UINT32_MAX;
	volatile int64_t x582 = -6LL;
	static int64_t t88 = -4313998584785652486LL;

	t88 = (x581+((x582^x583)*x584));

	if (t88 != -30064771033LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x597 = -163293329;
	int16_t x599 = 14;
	int16_t x600 = INT16_MAX;

	t89 = (x597+((x598^x599)*x600));

	if (t89 != -167028767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x601 = -1;
	int16_t x602 = -1;
	int8_t x604 = -1;

	t90 = (x601+((x602^x603)*x604));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x606 = INT8_MIN;
	static volatile int16_t x607 = -7;
	int8_t x608 = -1;
	static int64_t t91 = 8LL;

	t91 = (x605+((x606^x607)*x608));

	if (t91 != -10055505407LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x609 = 61071674;
	int8_t x610 = 13;
	uint32_t x611 = UINT32_MAX;
	uint16_t x612 = 12U;
	static uint32_t t92 = 49618U;

	t92 = (x609+((x610^x611)*x612));

	if (t92 != 61071506U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x617 = -5;
	static volatile int32_t x619 = -12;
	static uint8_t x620 = 117U;
	static volatile uint32_t t93 = 32U;

	t93 = (x617+((x618^x619)*x620));

	if (t93 != 1282U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x625 = -1LL;
	static volatile int32_t x626 = INT32_MIN;
	int64_t t94 = 105601910LL;

	t94 = (x625+((x626^x627)*x628));

	if (t94 != 2147450880LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x629 = INT16_MIN;
	uint8_t x630 = 26U;
	static volatile int16_t x631 = -1;
	int32_t x632 = -1;
	volatile int32_t t95 = 76369236;

	t95 = (x629+((x630^x631)*x632));

	if (t95 != -32741) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x637 = INT64_MAX;
	volatile int64_t x638 = INT64_MAX;
	uint64_t t96 = 14603LLU;

	t96 = (x637+((x638^x639)*x640));

	if (t96 != 9223372036866166437LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x646 = INT16_MAX;
	uint64_t x648 = 17805691114786391LLU;

	t97 = (x645+((x646^x647)*x648));

	if (t97 != 2366642434207314345LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x649 = -4251464343877LL;
	int64_t x650 = 6574065LL;
	int16_t x651 = INT16_MIN;
	int64_t x652 = -603457LL;
	int64_t t98 = 168019504LL;

	t98 = (x649+((x650^x651)*x652));

	if (t98 != -289224217206LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x653 = 6827;
	static int32_t x654 = -6915;
	static int8_t x655 = -31;
	volatile int8_t x656 = INT8_MIN;
	static volatile int32_t t99 = -69183066;

	t99 = (x653+((x654^x655)*x656));

	if (t99 != -881493) { NG(); } else { ; }
	
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

