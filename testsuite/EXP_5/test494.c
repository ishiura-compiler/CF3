#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
uint64_t x20 = UINT64_MAX;
int64_t x28 = 1652035218230071030LL;
uint8_t x54 = 0U;
static int16_t x57 = 1;
int16_t x60 = INT16_MIN;
uint32_t t8 = 1780U;
int8_t x61 = 23;
int16_t x62 = INT16_MIN;
uint8_t x64 = UINT8_MAX;
int8_t x69 = -1;
int16_t x74 = INT16_MAX;
int8_t x78 = -1;
int64_t x84 = 130432803LL;
volatile int16_t x87 = 1;
uint32_t t14 = 54359U;
static volatile int16_t x90 = INT16_MIN;
volatile int32_t t15 = 391718;
uint8_t x93 = 13U;
volatile int8_t x95 = INT8_MAX;
static uint64_t t16 = 30103003LLU;
volatile int32_t t17 = 12718293;
int32_t x104 = -1;
volatile uint64_t t18 = 317272163LLU;
uint16_t x106 = UINT16_MAX;
static volatile uint16_t x115 = 15U;
volatile int32_t t21 = -151724;
int64_t x123 = -31987066LL;
uint64_t x129 = UINT64_MAX;
static int32_t x130 = 30;
uint32_t x133 = 43U;
static int64_t x135 = -6321LL;
int8_t x136 = -1;
uint32_t x150 = 1076U;
uint64_t x154 = UINT64_MAX;
static volatile int64_t x158 = -1LL;
uint8_t x162 = UINT8_MAX;
int64_t x164 = INT64_MIN;
volatile int64_t t28 = -4978489285LL;
static int32_t x166 = -1;
volatile uint64_t t29 = 1811806224815LLU;
volatile int32_t x184 = -127032;
uint8_t x190 = 60U;
volatile uint64_t x197 = 794230808628742LLU;
static int32_t x208 = -869194832;
uint64_t t35 = 33709179459LLU;
int8_t x222 = INT8_MIN;
volatile uint64_t x224 = UINT64_MAX;
volatile uint64_t t37 = 40LLU;
static int64_t x242 = INT64_MIN;
int64_t t41 = 292LL;
uint16_t x248 = UINT16_MAX;
uint32_t t42 = 5181U;
uint64_t x249 = UINT64_MAX;
volatile uint64_t t43 = 2510032903219LLU;
int16_t x254 = INT16_MIN;
int32_t x264 = -323446217;
int32_t x265 = -1;
uint16_t x275 = 254U;
int8_t x283 = INT8_MIN;
uint32_t t52 = 3638145U;
uint8_t x289 = UINT8_MAX;
static int8_t x293 = INT8_MAX;
int16_t x295 = INT16_MIN;
uint64_t x306 = 38885LLU;
static int32_t x308 = -1;
static int32_t x310 = 28032810;
int32_t x326 = INT32_MIN;
int16_t x335 = -1;
int32_t x336 = INT32_MAX;
int8_t x360 = INT8_MIN;
uint64_t x362 = UINT64_MAX;
uint64_t t65 = 4436850658522602LLU;
static uint64_t x383 = 2679190065831849LLU;
int64_t x384 = -1LL;
uint64_t t69 = 20684793LLU;
uint16_t x386 = 7U;
int8_t x395 = INT8_MAX;
static uint64_t x402 = 939LLU;
static int32_t x436 = -1;
volatile int16_t x443 = INT16_MIN;
int32_t x444 = 269787;
int64_t t82 = -165LL;
uint16_t x468 = 25634U;
int64_t x471 = 12472965540LL;
int16_t x484 = INT16_MIN;
uint64_t x490 = 213475806LLU;
int8_t x501 = INT8_MAX;
static uint8_t x503 = 0U;
static uint8_t x504 = 111U;
volatile uint64_t x507 = 1LLU;
volatile int16_t x511 = INT16_MIN;
static int32_t t91 = -2263;
volatile int32_t t93 = 8190;
static int64_t x526 = INT64_MAX;
volatile int16_t x528 = INT16_MIN;
volatile int8_t x530 = -1;
uint64_t x534 = UINT64_MAX;
volatile uint64_t t96 = 1602504011684197LLU;
int16_t x541 = INT16_MIN;
volatile uint64_t x551 = 601906688174LLU;
static uint16_t x553 = UINT16_MAX;
static uint32_t x556 = UINT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = UINT64_MAX;
	volatile uint8_t x3 = 14U;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 2879LLU;

	t0 = (x1^((x2*x3)|x4));

	if (t0 != 2147483634LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 7U;
	int16_t x6 = 1019;
	volatile int32_t x7 = -1;
	volatile int32_t x8 = 0;
	volatile int32_t t1 = 53686185;

	t1 = (x5^((x6*x7)|x8));

	if (t1 != -1022) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1898421;
	volatile int16_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	static volatile uint32_t t2 = 3235U;

	t2 = (x9^((x10*x11)|x12));

	if (t2 != 1898420U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -7;
	int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	uint64_t t3 = 976637052453822385LLU;

	t3 = (x17^((x18*x19)|x20));

	if (t3 != 6LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 151352066;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MAX;
	volatile int64_t t4 = -1LL;

	t4 = (x25^((x26*x27)|x28));

	if (t4 != 1652035218354900213LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	volatile int8_t x30 = INT8_MIN;
	volatile uint8_t x31 = 0U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t5 = -400549097;

	t5 = (x29^((x30*x31)|x32));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MAX;
	uint32_t x38 = UINT32_MAX;
	uint16_t x39 = 136U;
	volatile uint8_t x40 = UINT8_MAX;
	static uint32_t t6 = 1509U;

	t6 = (x37^((x38*x39)|x40));

	if (t6 != 4294934528U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = 830;
	volatile int32_t t7 = -52406173;

	t7 = (x53^((x54*x55)|x56));

	if (t7 != 31937) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x58 = -1;
	uint32_t x59 = 830139U;

	t8 = (x57^((x58*x59)|x60));

	if (t8 != 4294956356U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x63 = -1LL;
	int64_t t9 = 1123279598631280448LL;

	t9 = (x61^((x62*x63)|x64));

	if (t9 != 33000LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 7684865529987LLU;
	static volatile int64_t x72 = INT64_MIN;
	volatile uint64_t t10 = 57164LLU;

	t10 = (x69^((x70*x71)|x72));

	if (t10 != 251817673686614015LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = UINT16_MAX;
	static uint16_t x75 = 117U;
	static int32_t x76 = INT32_MIN;
	volatile int32_t t11 = 0;

	t11 = (x73^((x74*x75)|x76));

	if (t11 != -2143649676) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = 189LL;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -1;
	uint64_t t12 = 11470677LLU;

	t12 = (x77^((x78*x79)|x80));

	if (t12 != 18446744073709551426LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MAX;
	uint8_t x82 = 57U;
	int8_t x83 = -7;
	int64_t t13 = -70070LL;

	t13 = (x81^((x82*x83)|x84));

	if (t13 != -244LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	uint32_t x88 = 1792306U;

	t14 = (x85^((x86*x87)|x88));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x89 = 23;
	uint8_t x91 = 0U;
	uint8_t x92 = 12U;

	t15 = (x89^((x90*x91)|x92));

	if (t15 != 27) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x94 = -1;
	uint64_t x96 = UINT64_MAX;

	t16 = (x93^((x94*x95)|x96));

	if (t16 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = 0;
	uint16_t x99 = 2U;
	int8_t x100 = INT8_MAX;

	t17 = (x97^((x98*x99)|x100));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = UINT8_MAX;

	t18 = (x101^((x102*x103)|x104));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x105 = UINT64_MAX;
	uint64_t x107 = 15709421LLU;
	static int64_t x108 = INT64_MAX;
	static volatile uint64_t t19 = 5550385312117456538LLU;

	t19 = (x105^((x106*x107)|x108));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	uint64_t x110 = 5662520951625092LLU;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint64_t t20 = 30LLU;

	t20 = (x109^((x110*x111)|x112));

	if (t20 != 5662519242784768LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -1368;
	int8_t x114 = INT8_MAX;
	volatile int16_t x116 = -1;

	t21 = (x113^((x114*x115)|x116));

	if (t21 != 1367) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = -1;
	volatile int16_t x122 = INT16_MAX;
	static int32_t x124 = INT32_MAX;
	int64_t t22 = 3991074507408028LL;

	t22 = (x121^((x122*x123)|x124));

	if (t22 != 1047972020224LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x131 = 663372LLU;
	static int8_t x132 = 46;
	volatile uint64_t t23 = 13446867152794LLU;

	t23 = (x129^((x130*x131)|x132));

	if (t23 != 18446744073689650449LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x134 = INT16_MIN;
	volatile int64_t t24 = -306617892404503LL;

	t24 = (x133^((x134*x135)|x136));

	if (t24 != -44LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -355;
	int8_t x151 = -58;
	uint32_t x152 = 3U;
	volatile uint32_t t25 = 15200186U;

	t25 = (x149^((x150*x151)|x152));

	if (t25 != 62118U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x153 = INT8_MAX;
	volatile int16_t x155 = -1;
	int8_t x156 = INT8_MIN;
	static uint64_t t26 = 31LLU;

	t26 = (x153^((x154*x155)|x156));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x157 = 764729410575707LLU;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	uint64_t t27 = 79LLU;

	t27 = (x157^((x158*x159)|x160));

	if (t27 != 18445979344298975962LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x161 = 818;
	int8_t x163 = -1;

	t28 = (x161^((x162*x163)|x164));

	if (t28 != -973LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x165 = 1940U;
	static volatile uint64_t x167 = 0LLU;
	uint8_t x168 = 4U;

	t29 = (x165^((x166*x167)|x168));

	if (t29 != 1936LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	int32_t t30 = -156937930;

	t30 = (x181^((x182*x183)|x184));

	if (t30 != -127177) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = INT32_MAX;
	volatile int8_t x191 = INT8_MAX;
	volatile int32_t x192 = INT32_MAX;
	int32_t t31 = -253871;

	t31 = (x189^((x190*x191)|x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MIN;
	static uint8_t x195 = UINT8_MAX;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t32 = 0;

	t32 = (x193^((x194*x195)|x196));

	if (t32 != -8355840) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x198 = 0U;
	int64_t x199 = 161250289185683LL;
	static volatile uint8_t x200 = 1U;
	volatile uint64_t t33 = 3089307LLU;

	t33 = (x197^((x198*x199)|x200));

	if (t33 != 794230808628743LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x205 = -367730559520LL;
	int8_t x206 = INT8_MAX;
	uint8_t x207 = 22U;
	volatile int64_t t34 = -2867054848025988584LL;

	t34 = (x205^((x206*x207)|x208));

	if (t34 != 367987121690LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x213 = INT8_MIN;
	static uint64_t x214 = 3LLU;
	volatile uint64_t x215 = 71982351044386LLU;
	static int64_t x216 = 4342LL;

	t35 = (x213^((x214*x215)|x216));

	if (t35 != 18446528126656414326LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x217 = INT8_MIN;
	int8_t x218 = 42;
	int16_t x219 = 8;
	int16_t x220 = -1;
	static int32_t t36 = 11453;

	t36 = (x217^((x218*x219)|x220));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = INT64_MAX;
	int16_t x223 = INT16_MIN;

	t37 = (x221^((x222*x223)|x224));

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = INT64_MAX;
	int64_t x230 = -756810348527082LL;
	int8_t x231 = -1;
	static int16_t x232 = INT16_MIN;
	int64_t t38 = -67280999623465LL;

	t38 = (x229^((x230*x231)|x232));

	if (t38 != -9223372036854775275LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = -1;
	static uint32_t x234 = 9390U;
	int64_t x235 = -1133514148LL;
	uint16_t x236 = UINT16_MAX;
	int64_t t39 = 3331173074LL;

	t39 = (x233^((x234*x235)|x236));

	if (t39 != 10643697827840LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x237 = INT32_MIN;
	static int8_t x238 = -6;
	uint32_t x239 = 180058U;
	volatile int32_t x240 = -1;
	volatile uint32_t t40 = 1600U;

	t40 = (x237^((x238*x239)|x240));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x241 = INT64_MIN;
	volatile uint16_t x243 = 0U;
	int32_t x244 = INT32_MIN;

	t41 = (x241^((x242*x243)|x244));

	if (t41 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = INT8_MIN;
	static uint32_t x246 = 0U;
	int8_t x247 = 0;

	t42 = (x245^((x246*x247)|x248));

	if (t42 != 4294901887U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x250 = UINT16_MAX;
	static int8_t x251 = 0;
	static int64_t x252 = -1LL;

	t43 = (x249^((x250*x251)|x252));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MIN;
	uint16_t x255 = 26U;
	int8_t x256 = -1;
	int32_t t44 = 41325725;

	t44 = (x253^((x254*x255)|x256));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x257 = UINT8_MAX;
	int32_t x258 = 5;
	int16_t x259 = -1;
	static uint16_t x260 = 14736U;
	int32_t t45 = 0;

	t45 = (x257^((x258*x259)|x260));

	if (t45 != -252) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	static uint64_t t46 = 716296913695691335LLU;

	t46 = (x261^((x262*x263)|x264));

	if (t46 != 1824037431LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;
	int32_t t47 = 1419;

	t47 = (x265^((x266*x267)|x268));

	if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x269 = INT32_MIN;
	volatile uint8_t x270 = UINT8_MAX;
	volatile int16_t x271 = -1;
	int64_t x272 = INT64_MIN;
	int64_t t48 = -5813530529LL;

	t48 = (x269^((x270*x271)|x272));

	if (t48 != 2147483393LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x273 = 7726757U;
	volatile uint16_t x274 = 5U;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t49 = 93653U;

	t49 = (x273^((x274*x275)|x276));

	if (t49 != 4287259219U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile uint64_t x278 = 55720417LLU;
	volatile int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t50 = 17427864885LLU;

	t50 = (x277^((x278*x279)|x280));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x281 = -1;
	int8_t x282 = INT8_MAX;
	uint32_t x284 = UINT32_MAX;
	static volatile uint32_t t51 = 1806U;

	t51 = (x281^((x282*x283)|x284));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x285 = INT32_MIN;
	int32_t x286 = -1;
	int8_t x287 = 29;
	uint32_t x288 = 401U;

	t52 = (x285^((x286*x287)|x288));

	if (t52 != 2147483635U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	uint16_t x292 = 0U;
	volatile int32_t t53 = -7888393;

	t53 = (x289^((x290*x291)|x292));

	if (t53 != -2147483394) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x294 = UINT8_MAX;
	static volatile uint64_t x296 = 64715LLU;
	static volatile uint64_t t54 = 439946LLU;

	t54 = (x293^((x294*x295)|x296));

	if (t54 != 18446744073701227700LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x301 = -1;
	static int8_t x302 = -1;
	int8_t x303 = 3;
	int8_t x304 = -1;
	volatile int32_t t55 = -451295;

	t55 = (x301^((x302*x303)|x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x305 = INT32_MIN;
	static uint16_t x307 = 0U;
	volatile uint64_t t56 = 1167781958193044LLU;

	t56 = (x305^((x306*x307)|x308));

	if (t56 != 2147483647LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x309 = INT32_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	int64_t x312 = 71323311LL;
	int64_t t57 = -4716LL;

	t57 = (x309^((x310*x311)|x312));

	if (t57 != -2175512833LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -1LL;
	volatile uint64_t x316 = 15571809450LLU;
	volatile uint64_t t58 = 4856809LLU;

	t58 = (x313^((x314*x315)|x316));

	if (t58 != 18446744058137769130LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x321 = 11386317U;
	int16_t x322 = 13;
	static uint16_t x323 = 0U;
	int16_t x324 = -6065;
	static volatile uint32_t t59 = 71U;

	t59 = (x321^((x322*x323)|x324));

	if (t59 != 4283585922U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x325 = INT64_MIN;
	volatile uint32_t x327 = 4258756U;
	uint16_t x328 = 0U;
	int64_t t60 = INT64_MIN;

	t60 = (x325^((x326*x327)|x328));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = -1;
	int32_t x334 = -25;
	int32_t t61 = INT32_MIN;

	t61 = (x333^((x334*x335)|x336));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x337 = 1553313696015547266LLU;
	uint32_t x338 = UINT32_MAX;
	static volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = -1LL;
	uint64_t t62 = 239LLU;

	t62 = (x337^((x338*x339)|x340));

	if (t62 != 16893430377694004349LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x341 = 51LLU;
	static uint32_t x342 = UINT32_MAX;
	static int8_t x343 = -1;
	int8_t x344 = -1;
	volatile uint64_t t63 = 2513LLU;

	t63 = (x341^((x342*x343)|x344));

	if (t63 != 4294967244LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x357 = -1;
	int8_t x358 = -25;
	uint16_t x359 = 748U;
	static int32_t t64 = 25321279;

	t64 = (x357^((x358*x359)|x360));

	if (t64 != 11) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x361 = 1711604LLU;
	volatile int16_t x363 = -3;
	static uint64_t x364 = 23961672624LLU;

	t65 = (x361^((x362*x363)|x364));

	if (t65 != 23959963207LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x365 = -114;
	int32_t x366 = -1;
	static uint32_t x367 = 497944U;
	volatile int8_t x368 = INT8_MAX;
	static uint32_t t66 = 124891U;

	t66 = (x365^((x366*x367)|x368));

	if (t66 != 498033U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = -1LL;
	int16_t x375 = 391;
	volatile uint8_t x376 = 0U;
	static volatile int64_t t67 = -94163163675LL;

	t67 = (x373^((x374*x375)|x376));

	if (t67 != -2147483258LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int32_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = 8440;
	volatile uint32_t t68 = 11284U;

	t68 = (x377^((x378*x379)|x380));

	if (t68 != 8198U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = -1;
	int16_t x382 = INT16_MIN;

	t69 = (x381^((x382*x383)|x384));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x385 = UINT16_MAX;
	volatile uint64_t x387 = 3LLU;
	int64_t x388 = INT64_MAX;
	uint64_t t70 = 1076904939037952LLU;

	t70 = (x385^((x386*x387)|x388));

	if (t70 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x393 = INT16_MIN;
	uint8_t x394 = 89U;
	int64_t x396 = 965989154131663872LL;
	volatile int64_t t71 = 0LL;

	t71 = (x393^((x394*x395)|x396));

	if (t71 != -965989154131641305LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x401 = INT64_MIN;
	static uint8_t x403 = 45U;
	static int64_t x404 = INT64_MIN;
	uint64_t t72 = 209128530873840LLU;

	t72 = (x401^((x402*x403)|x404));

	if (t72 != 42255LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x409 = INT32_MAX;
	static int16_t x410 = INT16_MAX;
	int16_t x411 = INT16_MIN;
	static volatile uint8_t x412 = UINT8_MAX;
	static int32_t t73 = 133222;

	t73 = (x409^((x410*x411)|x412));

	if (t73 != -1073774848) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = -1;
	static uint8_t x414 = 119U;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t74 = 79466736;

	t74 = (x413^((x414*x415)|x416));

	if (t74 != 118) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	volatile int16_t x420 = INT16_MIN;
	uint32_t t75 = 9548543U;

	t75 = (x417^((x418*x419)|x420));

	if (t75 != 4294934654U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x421 = INT32_MAX;
	static uint8_t x422 = UINT8_MAX;
	volatile uint64_t x423 = 46LLU;
	int16_t x424 = INT16_MAX;
	uint64_t t76 = 107LLU;

	t76 = (x421^((x422*x423)|x424));

	if (t76 != 2147450880LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x425 = 0U;
	int64_t x426 = -239908648232LL;
	static int16_t x427 = INT16_MAX;
	static volatile uint32_t x428 = 1835U;
	static volatile int64_t t77 = 0LL;

	t77 = (x425^((x426*x427)|x428));

	if (t77 != -7861086676617429LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x429 = UINT16_MAX;
	int64_t x430 = 3695LL;
	int16_t x431 = 39;
	volatile int8_t x432 = INT8_MIN;
	int64_t t78 = 167430LL;

	t78 = (x429^((x430*x431)|x432));

	if (t78 != -65514LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x433 = -1;
	uint8_t x434 = 21U;
	static volatile int8_t x435 = INT8_MIN;
	static volatile int32_t t79 = 59;

	t79 = (x433^((x434*x435)|x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x441 = UINT8_MAX;
	static uint32_t x442 = UINT32_MAX;
	volatile uint32_t t80 = 5738U;

	t80 = (x441^((x442*x443)|x444));

	if (t80 != 302372U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x453 = 0U;
	volatile int16_t x454 = -1;
	int8_t x455 = -8;
	static volatile uint32_t x456 = 922U;
	volatile uint32_t t81 = 21197U;

	t81 = (x453^((x454*x455)|x456));

	if (t81 != 922U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x457 = 10U;
	volatile int32_t x458 = INT32_MIN;
	static uint32_t x459 = UINT32_MAX;
	int64_t x460 = INT64_MIN;

	t82 = (x457^((x458*x459)|x460));

	if (t82 != -9223372034707292150LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x465 = INT64_MAX;
	int16_t x466 = -1;
	volatile int16_t x467 = INT16_MIN;
	static volatile int64_t t83 = 119LL;

	t83 = (x465^((x466*x467)|x468));

	if (t83 != 9223372036854717405LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x469 = 97;
	int8_t x470 = -1;
	uint64_t x472 = UINT64_MAX;
	static volatile uint64_t t84 = 0LLU;

	t84 = (x469^((x470*x471)|x472));

	if (t84 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x477 = -1;
	int8_t x478 = INT8_MAX;
	uint8_t x479 = 14U;
	uint32_t x480 = 522U;
	uint32_t t85 = 3716U;

	t85 = (x477^((x478*x479)|x480));

	if (t85 != 4294965509U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = 487360LL;
	uint16_t x482 = 244U;
	uint32_t x483 = UINT32_MAX;
	int64_t t86 = -638LL;

	t86 = (x481^((x482*x483)|x484));

	if (t86 != 4294480076LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x485 = -1LL;
	int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MAX;
	int64_t t87 = 27161413419270LL;

	t87 = (x485^((x486*x487)|x488));

	if (t87 != -16512LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x489 = INT8_MIN;
	static int32_t x491 = INT32_MAX;
	volatile uint8_t x492 = 1U;
	uint64_t t88 = 102614LLU;

	t88 = (x489^((x490*x491)|x492));

	if (t88 != 17988308271294407075LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x502 = -7244207065577273LL;
	static int64_t t89 = 0LL;

	t89 = (x501^((x502*x503)|x504));

	if (t89 != 16LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x505 = INT8_MIN;
	volatile int64_t x506 = INT64_MIN;
	uint32_t x508 = UINT32_MAX;
	volatile uint64_t t90 = 147797380849LLU;

	t90 = (x505^((x506*x507)|x508));

	if (t90 != 9223372032559808639LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x509 = INT8_MAX;
	int8_t x510 = INT8_MIN;
	int32_t x512 = INT32_MIN;

	t91 = (x509^((x510*x511)|x512));

	if (t91 != -2143289217) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x513 = INT32_MAX;
	int32_t x514 = 27208636;
	int32_t x515 = -1;
	volatile uint8_t x516 = 1U;
	volatile int32_t t92 = -441634;

	t92 = (x513^((x514*x515)|x516));

	if (t92 != -2120275014) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x521 = 303U;
	int32_t x522 = -1;
	volatile int16_t x523 = INT16_MIN;
	volatile int8_t x524 = -1;

	t93 = (x521^((x522*x523)|x524));

	if (t93 != -304) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x525 = -1;
	static int32_t x527 = -1;
	int64_t t94 = -117494656974LL;

	t94 = (x525^((x526*x527)|x528));

	if (t94 != 32766LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x529 = -1;
	volatile int8_t x531 = -12;
	volatile uint32_t x532 = 22409921U;
	volatile uint32_t t95 = 28523U;

	t95 = (x529^((x530*x531)|x532));

	if (t95 != 4272557362U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x533 = UINT64_MAX;
	volatile int16_t x535 = 1340;
	int64_t x536 = -1LL;

	t96 = (x533^((x534*x535)|x536));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x542 = 1LLU;
	volatile uint8_t x543 = 62U;
	uint32_t x544 = 3317072U;
	volatile uint64_t t97 = 1065968098LLU;

	t97 = (x541^((x542*x543)|x544));

	if (t97 != 18446744073706216830LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x549 = 15491;
	uint64_t x550 = 4232758242967152LLU;
	int8_t x552 = INT8_MIN;
	volatile uint64_t t98 = 193754652276942LLU;

	t98 = (x549^((x550*x551)|x552));

	if (t98 != 18446744073709536035LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x554 = 1U;
	uint32_t x555 = UINT32_MAX;
	volatile uint32_t t99 = 5261611U;

	t99 = (x553^((x554*x555)|x556));

	if (t99 != 4294901760U) { NG(); } else { ; }
	
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

