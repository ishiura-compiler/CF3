#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
uint32_t x5 = 283019U;
int64_t x15 = -1LL;
int64_t x31 = -1LL;
uint8_t x32 = 7U;
uint64_t t4 = 786617LLU;
static volatile int64_t x34 = -59190988524LL;
int8_t x41 = INT8_MAX;
uint16_t x48 = UINT16_MAX;
int8_t x53 = INT8_MAX;
int32_t x54 = 13744;
int8_t x61 = INT8_MIN;
int8_t x63 = INT8_MIN;
static int32_t x65 = INT32_MIN;
int8_t x67 = 1;
uint32_t x80 = 1164285951U;
int64_t t16 = 70589293028477658LL;
static int64_t x84 = -22887237782647LL;
int16_t x85 = INT16_MAX;
static int64_t t18 = 21837567703776LL;
int64_t x89 = 4451728LL;
volatile uint8_t x90 = 1U;
int8_t x91 = INT8_MAX;
uint64_t x92 = 184541875013LLU;
static int64_t x95 = -1LL;
int32_t x96 = INT32_MIN;
int64_t t21 = -22981037LL;
uint64_t x111 = 1044483626LLU;
int16_t x116 = -4;
int64_t x124 = -1LL;
uint64_t t25 = 996364096621301195LLU;
int32_t x145 = -1;
volatile uint64_t x148 = 127377380324885LLU;
static int16_t x150 = 1;
volatile int32_t t29 = 92910;
int8_t x156 = INT8_MIN;
int16_t x158 = -1;
int16_t x162 = INT16_MIN;
int8_t x168 = -1;
int8_t x172 = INT8_MIN;
volatile int8_t x179 = -12;
int32_t x195 = -43232802;
uint64_t t37 = 137937LLU;
uint32_t t38 = 479888397U;
uint32_t x211 = 1700283U;
int8_t x216 = -1;
uint64_t x230 = 9LLU;
volatile int32_t x231 = INT32_MAX;
static int16_t x235 = INT16_MIN;
uint64_t t44 = 99491085LLU;
int32_t x251 = -1;
static int32_t x257 = INT32_MIN;
int32_t x258 = -1;
int8_t x259 = -1;
uint64_t x265 = UINT64_MAX;
static uint64_t x269 = 233602174776793LLU;
static uint16_t x270 = 735U;
int64_t x272 = -1LL;
uint64_t t50 = 12548LLU;
volatile int8_t x289 = 1;
static volatile int16_t x291 = INT16_MAX;
volatile int8_t x292 = INT8_MAX;
static uint64_t t55 = 181232LLU;
int32_t x305 = INT32_MAX;
static int32_t x320 = INT32_MIN;
uint64_t t59 = 15409283638946LLU;
volatile int32_t x336 = 27021062;
static int64_t t63 = -1861157117LL;
int16_t x345 = 625;
int32_t x346 = INT32_MAX;
volatile int16_t x348 = INT16_MAX;
int8_t x362 = 1;
int8_t x363 = INT8_MIN;
int8_t x364 = -1;
int64_t t65 = 937869580626301LL;
volatile uint32_t t66 = 1U;
volatile uint16_t x377 = 0U;
int16_t x379 = INT16_MAX;
uint8_t x380 = 58U;
volatile int32_t t68 = 415965;
int32_t x381 = INT32_MAX;
static uint16_t x382 = 3292U;
static uint16_t x385 = 36U;
volatile int64_t x386 = 289975978981LL;
volatile int16_t x398 = INT16_MIN;
static volatile uint64_t x400 = 2045158316007LLU;
static volatile uint16_t x406 = 91U;
int16_t x409 = INT16_MAX;
int64_t x413 = -72323801998507081LL;
static uint16_t x414 = UINT16_MAX;
int32_t x415 = 20151306;
int32_t x421 = 3;
int32_t x427 = INT32_MIN;
static int64_t x428 = 2127429LL;
volatile int8_t x430 = -1;
static volatile uint32_t t83 = 6814U;
int64_t x441 = -182096LL;
uint32_t x444 = 3381U;
static uint8_t x451 = 15U;
uint16_t x452 = UINT16_MAX;
static int64_t t86 = 4934449LL;
static int16_t x478 = 1;
static int64_t x487 = -1LL;
static int8_t x495 = 1;
int8_t x497 = INT8_MIN;
int32_t x500 = -1;
uint64_t x504 = UINT64_MAX;
uint32_t x508 = 7412669U;
int8_t x510 = -4;
static volatile uint64_t t96 = 2LLU;
int64_t x513 = 1684226081LL;


void f0(void) {
	static uint32_t x1 = 3U;
	uint8_t x2 = UINT8_MAX;
	static uint16_t x4 = 4U;
	volatile uint32_t t0 = 140498U;

	t0 = ((x1%x2)|(x3*x4));

	if (t0 != 131071U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	static int32_t x8 = -1;
	volatile int64_t t1 = 86296LL;

	t1 = ((x5%x6)|(x7*x8));

	if (t1 != 283019LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int64_t x14 = -1LL;
	int64_t x16 = -6965612301LL;
	static int64_t t2 = 93358921896280LL;

	t2 = ((x13%x14)|(x15*x16));

	if (t2 != 6965612301LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 84U;
	uint16_t x18 = 100U;
	volatile int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 1LLU;

	t3 = ((x17%x18)|(x19*x20));

	if (t3 != 85LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MIN;
	volatile uint64_t x30 = 136901LLU;

	t4 = ((x29%x30)|(x31*x32));

	if (t4 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x33 = 402939U;
	uint32_t x35 = 385171884U;
	uint32_t x36 = 790961133U;
	static int64_t t5 = 250115308LL;

	t5 = ((x33%x34)|(x35*x36));

	if (t5 != 819394047LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x37 = 4LLU;
	int16_t x38 = -1416;
	uint16_t x39 = 7U;
	static int8_t x40 = INT8_MIN;
	volatile uint64_t t6 = 46785793LLU;

	t6 = ((x37%x38)|(x39*x40));

	if (t6 != 18446744073709550724LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = 26;
	int16_t x43 = INT16_MAX;
	int64_t x44 = -1LL;
	volatile int64_t t7 = 1LL;

	t7 = ((x41%x42)|(x43*x44));

	if (t7 != -32745LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x45 = 1U;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	volatile int32_t t8 = -189963363;

	t8 = ((x45%x46)|(x47*x48));

	if (t8 != -2147450879) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	static volatile int32_t x51 = 7644;
	static volatile int64_t x52 = 0LL;
	static int64_t t9 = 753038317LL;

	t9 = ((x49%x50)|(x51*x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x55 = 179;
	uint16_t x56 = 5U;
	int32_t t10 = 1;

	t10 = ((x53%x54)|(x55*x56));

	if (t10 != 895) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	uint64_t x58 = 80LLU;
	volatile int64_t x59 = -1LL;
	static uint8_t x60 = 2U;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = ((x57%x58)|(x59*x60));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x62 = INT8_MIN;
	static int8_t x64 = 1;
	int32_t t12 = -3;

	t12 = ((x61%x62)|(x63*x64));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t13 = -498443516;

	t13 = ((x65%x66)|(x67*x68));

	if (t13 != -8) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MIN;
	int16_t x71 = -9;
	static volatile int32_t x72 = -5979;
	static int32_t t14 = 3582987;

	t14 = ((x69%x70)|(x71*x72));

	if (t14 != 53811) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	uint8_t x74 = 20U;
	uint64_t x75 = UINT64_MAX;
	volatile uint8_t x76 = 2U;
	volatile uint64_t t15 = 379173843827LLU;

	t15 = ((x73%x74)|(x75*x76));

	if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 793772U;
	static int64_t x78 = -4550LL;
	uint16_t x79 = 4U;

	t16 = ((x77%x78)|(x79*x80));

	if (t16 != 362176508LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = -1;
	volatile uint32_t x82 = 55415421U;
	static int8_t x83 = INT8_MIN;
	int64_t t17 = 12330176528LL;

	t17 = ((x81%x82)|(x83*x84));

	if (t17 != 2929566455626726LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MAX;
	int32_t x88 = -443;

	t18 = ((x85%x86)|(x87*x88));

	if (t18 != -14483457LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t t19 = 1918LLU;

	t19 = ((x89%x90)|(x91*x92));

	if (t19 != 23436818126651LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -27;
	static int32_t x94 = -52385;
	int64_t t20 = -3566340600784844LL;

	t20 = ((x93%x94)|(x95*x96));

	if (t20 != -27LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 8223U;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = -1LL;
	int16_t x104 = 0;

	t21 = ((x101%x102)|(x103*x104));

	if (t21 != 8223LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	volatile int8_t x112 = 3;
	uint64_t t22 = UINT64_MAX;

	t22 = ((x109%x110)|(x111*x112));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 55197U;
	int32_t x114 = INT32_MAX;
	uint8_t x115 = UINT8_MAX;
	volatile uint32_t t23 = 0U;

	t23 = ((x113%x114)|(x115*x116));

	if (t23 != 4294967197U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = 45;
	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	static volatile int64_t t24 = 1623710344LL;

	t24 = ((x121%x122)|(x123*x124));

	if (t24 != 2147483693LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = INT16_MIN;
	volatile int16_t x126 = INT16_MIN;
	uint64_t x127 = 207LLU;
	static volatile uint32_t x128 = 151310102U;

	t25 = ((x125%x126)|(x127*x128));

	if (t25 != 31321191114LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 520142U;
	static volatile uint32_t t26 = 12406U;

	t26 = ((x129%x130)|(x131*x132));

	if (t26 != 4294934528U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x141 = -6;
	uint16_t x142 = 2727U;
	static int8_t x143 = -1;
	uint32_t x144 = 4013U;
	volatile uint32_t t27 = 46761U;

	t27 = ((x141%x142)|(x143*x144));

	if (t27 != 4294967291U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x146 = INT32_MIN;
	uint16_t x147 = 4963U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x145%x146)|(x147*x148));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = -1;
	int16_t x151 = -1;
	static int32_t x152 = 866881;

	t29 = ((x149%x150)|(x151*x152));

	if (t29 != -866881) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	volatile int64_t t30 = -7845536LL;

	t30 = ((x153%x154)|(x155*x156));

	if (t30 != 16384LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x157 = 5U;
	static int8_t x159 = INT8_MIN;
	int64_t x160 = -1LL;
	volatile int64_t t31 = 51037LL;

	t31 = ((x157%x158)|(x159*x160));

	if (t31 != 128LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MAX;
	uint64_t x163 = 0LLU;
	int8_t x164 = INT8_MAX;
	volatile uint64_t t32 = 165757508LLU;

	t32 = ((x161%x162)|(x163*x164));

	if (t32 != 32767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 199218LLU;
	uint32_t x166 = 373966U;
	volatile uint32_t x167 = UINT32_MAX;
	uint64_t t33 = 181LLU;

	t33 = ((x165%x166)|(x167*x168));

	if (t33 != 199219LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x169 = 151LLU;
	static int64_t x170 = -52LL;
	int16_t x171 = INT16_MIN;
	volatile uint64_t t34 = 175061LLU;

	t34 = ((x169%x170)|(x171*x172));

	if (t34 != 4194455LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = 7U;
	static uint64_t x180 = UINT64_MAX;
	static uint64_t t35 = 11468939813LLU;

	t35 = ((x177%x178)|(x179*x180));

	if (t35 != 14LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = -1LL;
	int16_t x190 = -1;
	static volatile int8_t x191 = 5;
	static int8_t x192 = -6;
	int64_t t36 = -2376902LL;

	t36 = ((x189%x190)|(x191*x192));

	if (t36 != -30LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x193 = 2172840603076LL;
	uint64_t x194 = UINT64_MAX;
	int16_t x196 = -27;

	t37 = ((x193%x194)|(x195*x196));

	if (t37 != 2172850240982LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 7U;
	int32_t x198 = -1;
	int16_t x199 = -4207;
	uint32_t x200 = 4820U;

	t38 = ((x197%x198)|(x199*x200));

	if (t38 != 4274689556U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x205 = UINT64_MAX;
	static uint8_t x206 = UINT8_MAX;
	uint16_t x207 = 1U;
	int64_t x208 = -3506480039052250LL;
	uint64_t t39 = 826095040662719LLU;

	t39 = ((x205%x206)|(x207*x208));

	if (t39 != 18443237593670499366LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int32_t x212 = -1;
	static int64_t t40 = -114883628935756636LL;

	t40 = ((x209%x210)|(x211*x212));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = -1;
	int16_t x214 = 604;
	int64_t x215 = -1LL;
	int64_t t41 = 5375712006LL;

	t41 = ((x213%x214)|(x215*x216));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x225 = 66000U;
	int32_t x226 = -5311;
	uint32_t x227 = 928U;
	int8_t x228 = -12;
	volatile uint32_t t42 = 1047459U;

	t42 = ((x225%x226)|(x227*x228));

	if (t42 != 4294956496U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x229 = 55U;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t43 = 244468847102785905LLU;

	t43 = ((x229%x230)|(x231*x232));

	if (t43 != 2147483649LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = INT64_MIN;
	volatile uint64_t x234 = 53551LLU;
	volatile int64_t x236 = -1LL;

	t44 = ((x233%x234)|(x235*x236));

	if (t44 != 50176LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 4741474985776612593LLU;
	static uint64_t t45 = 58032102LLU;

	t45 = ((x237%x238)|(x239*x240));

	if (t45 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = INT64_MIN;
	static int64_t x242 = 389412630589LL;
	int16_t x243 = -735;
	int8_t x244 = -4;
	volatile int64_t t46 = -32003402774016662LL;

	t46 = ((x241%x242)|(x243*x244));

	if (t46 != -312822018177LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x249 = -139;
	int64_t x250 = INT64_MAX;
	int64_t x252 = -1LL;
	static int64_t t47 = -10483436680140104LL;

	t47 = ((x249%x250)|(x251*x252));

	if (t47 != -139LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x260 = INT16_MIN;
	int32_t t48 = 1;

	t48 = ((x257%x258)|(x259*x260));

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x266 = INT64_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile uint32_t x268 = 38U;
	volatile uint64_t t49 = 139000742663524LLU;

	t49 = ((x265%x266)|(x267*x268));

	if (t49 != 2490331LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x271 = -1;

	t50 = ((x269%x270)|(x271*x272));

	if (t50 != 509LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x273 = UINT16_MAX;
	static int32_t x274 = INT32_MAX;
	volatile int8_t x275 = -1;
	static uint32_t x276 = 28335U;
	uint32_t t51 = UINT32_MAX;

	t51 = ((x273%x274)|(x275*x276));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x281 = 5948986U;
	volatile uint64_t x282 = 2LLU;
	int64_t x283 = -86972749LL;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t52 = 64347889305696LLU;

	t52 = ((x281%x282)|(x283*x284));

	if (t52 != 2849923039232LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x290 = INT32_MIN;
	int32_t t53 = -314027586;

	t53 = ((x289%x290)|(x291*x292));

	if (t53 != 4161409) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x293 = UINT32_MAX;
	int8_t x294 = -1;
	int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = 1U;
	static volatile int64_t t54 = INT64_MIN;

	t54 = ((x293%x294)|(x295*x296));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = 29691654686LLU;
	int16_t x299 = INT16_MAX;
	int8_t x300 = 8;

	t55 = ((x297%x298)|(x299*x300));

	if (t55 != 262143LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x306 = UINT16_MAX;
	volatile uint16_t x307 = UINT16_MAX;
	uint32_t x308 = 867268138U;
	uint32_t t56 = 8655666U;

	t56 = ((x305%x306)|(x307*x308));

	if (t56 != 1115226111U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int32_t x311 = 459;
	uint32_t x312 = 55073U;
	volatile uint32_t t57 = 504U;

	t57 = ((x309%x310)|(x311*x312));

	if (t57 != 4294967211U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x313 = INT8_MIN;
	uint16_t x314 = 1445U;
	volatile uint64_t x315 = 97333924616527LLU;
	static uint16_t x316 = 0U;
	static uint64_t t58 = 3474069263649916170LLU;

	t58 = ((x313%x314)|(x315*x316));

	if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x317 = 90U;
	int16_t x318 = 393;
	uint64_t x319 = 15414790324996869LLU;

	t59 = ((x317%x318)|(x319*x320));

	if (t59 != 4121385735318143066LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x321 = INT16_MIN;
	uint16_t x322 = 27U;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 34LLU;
	static uint64_t t60 = UINT64_MAX;

	t60 = ((x321%x322)|(x323*x324));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MAX;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = 2082133LLU;
	uint64_t t61 = 0LLU;

	t61 = ((x325%x326)|(x327*x328));

	if (t61 != 18446744073707487231LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x333 = 36417U;
	int32_t x334 = INT32_MIN;
	int8_t x335 = -1;
	volatile uint32_t t62 = 67573U;

	t62 = ((x333%x334)|(x335*x336));

	if (t62 != 4267949819U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x337 = INT64_MIN;
	int16_t x338 = 1253;
	volatile int32_t x339 = INT32_MIN;
	uint32_t x340 = 100827U;

	t63 = ((x337%x338)|(x339*x340));

	if (t63 != -778LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x347 = -21;
	volatile int32_t t64 = -69;

	t64 = ((x345%x346)|(x347*x348));

	if (t64 != -687499) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x361 = INT64_MIN;

	t65 = ((x361%x362)|(x363*x364));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MAX;
	static uint8_t x371 = 13U;
	uint8_t x372 = 21U;

	t66 = ((x369%x370)|(x371*x372));

	if (t66 != 287U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x373 = -5;
	uint32_t x374 = 17338U;
	static int16_t x375 = -6;
	uint32_t x376 = UINT32_MAX;
	uint32_t t67 = 114207U;

	t67 = ((x373%x374)|(x375*x376));

	if (t67 != 15271U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x378 = 7U;

	t68 = ((x377%x378)|(x379*x380));

	if (t68 != 1900486) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x383 = INT32_MAX;
	uint64_t x384 = UINT64_MAX;
	static uint64_t t69 = 125079598361952843LLU;

	t69 = ((x381%x382)|(x383*x384));

	if (t69 != 18446744071562068087LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x387 = INT16_MIN;
	int8_t x388 = -2;
	static volatile int64_t t70 = -12454321868907LL;

	t70 = ((x385%x386)|(x387*x388));

	if (t70 != 65572LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x389 = -6203;
	int32_t x390 = INT32_MIN;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t71 = 10877;

	t71 = ((x389%x390)|(x391*x392));

	if (t71 != -6203) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x393 = 922171379504LLU;
	uint16_t x394 = 31U;
	uint64_t x395 = 53252508025781LLU;
	volatile int8_t x396 = INT8_MAX;
	uint64_t t72 = 43537234023LLU;

	t72 = ((x393%x394)|(x395*x396));

	if (t72 != 6763068519274207LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = 1644256;
	static volatile int8_t x399 = INT8_MIN;
	volatile uint64_t t73 = 55035LLU;

	t73 = ((x397%x398)|(x399*x400));

	if (t73 != 18446482293445107424LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = -4;
	int64_t x403 = 15445LL;
	static int32_t x404 = INT32_MAX;
	static volatile int64_t t74 = 3514186597757LL;

	t74 = ((x401%x402)|(x403*x404));

	if (t74 != 33167884927915LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x405 = -199;
	uint8_t x407 = 19U;
	int32_t x408 = -106;
	int32_t t75 = -7;

	t75 = ((x405%x406)|(x407*x408));

	if (t75 != -17) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x410 = UINT32_MAX;
	uint32_t x411 = 12308100U;
	int16_t x412 = 12;
	uint32_t t76 = 5U;

	t76 = ((x409%x410)|(x411*x412));

	if (t76 != 147718143U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x416 = -1;
	static volatile int64_t t77 = -301413246102913LL;

	t77 = ((x413%x414)|(x415*x416));

	if (t77 != -3074LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x417 = INT64_MAX;
	static int8_t x418 = INT8_MIN;
	static volatile uint16_t x419 = 10065U;
	volatile uint8_t x420 = 1U;
	volatile int64_t t78 = -86569895LL;

	t78 = ((x417%x418)|(x419*x420));

	if (t78 != 10111LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x422 = INT16_MIN;
	uint8_t x423 = 2U;
	volatile int16_t x424 = 0;
	int32_t t79 = 6081442;

	t79 = ((x421%x422)|(x423*x424));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x425 = 227322195U;
	uint64_t x426 = 92599162876880LLU;
	uint64_t t80 = 164898646559564LLU;

	t80 = ((x425%x426)|(x427*x428));

	if (t80 != 18442175454947092819LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x429 = UINT64_MAX;
	static int8_t x431 = 1;
	uint16_t x432 = 3491U;
	volatile uint64_t t81 = 3199627018LLU;

	t81 = ((x429%x430)|(x431*x432));

	if (t81 != 3491LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x433 = INT8_MIN;
	static uint32_t x434 = 64964228U;
	int8_t x435 = INT8_MIN;
	int8_t x436 = 0;
	volatile uint32_t t82 = 627U;

	t82 = ((x433%x434)|(x435*x436));

	if (t82 != 7328120U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x437 = INT16_MIN;
	uint8_t x438 = UINT8_MAX;
	static int32_t x439 = INT32_MIN;
	volatile uint32_t x440 = UINT32_MAX;

	t83 = ((x437%x438)|(x439*x440));

	if (t83 != 4294967168U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x442 = INT64_MIN;
	static int16_t x443 = -1;
	volatile int64_t t84 = -547811884264LL;

	t84 = ((x441%x442)|(x443*x444));

	if (t84 != -1285LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x449 = -1;
	static uint8_t x450 = 70U;
	int32_t t85 = 543;

	t85 = ((x449%x450)|(x451*x452));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x465 = 26085U;
	uint16_t x466 = 427U;
	static int8_t x467 = INT8_MAX;
	volatile int64_t x468 = 2LL;

	t86 = ((x465%x466)|(x467*x468));

	if (t86 != 254LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x469 = INT8_MIN;
	int32_t x470 = INT32_MIN;
	uint8_t x471 = 16U;
	int64_t x472 = -1LL;
	volatile int64_t t87 = -14386353584212564LL;

	t87 = ((x469%x470)|(x471*x472));

	if (t87 != -16LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x477 = -611;
	uint32_t x479 = 1915385027U;
	int32_t x480 = -1;
	uint32_t t88 = 16U;

	t88 = ((x477%x478)|(x479*x480));

	if (t88 != 2379582269U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x481 = 68007239735LLU;
	int16_t x482 = -1;
	uint16_t x483 = 14646U;
	int16_t x484 = INT16_MIN;
	volatile uint64_t t89 = 29280362884LLU;

	t89 = ((x481%x482)|(x483*x484));

	if (t89 != 18446744073574096951LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x485 = -1;
	int64_t x486 = INT64_MIN;
	uint64_t x488 = 206000068LLU;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x485%x486)|(x487*x488));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x489 = INT32_MIN;
	static int8_t x490 = -1;
	int64_t x491 = 26019799357011LL;
	static uint64_t x492 = UINT64_MAX;
	uint64_t t91 = 0LLU;

	t91 = ((x489%x490)|(x491*x492));

	if (t91 != 18446718053910194605LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x493 = 6U;
	int16_t x494 = INT16_MAX;
	int8_t x496 = 0;
	uint32_t t92 = 624U;

	t92 = ((x493%x494)|(x495*x496));

	if (t92 != 6U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x498 = 3;
	int16_t x499 = -1;
	int32_t t93 = -461263;

	t93 = ((x497%x498)|(x499*x500));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x501 = -1LL;
	int64_t x502 = INT64_MAX;
	int16_t x503 = INT16_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x501%x502)|(x503*x504));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x505 = INT16_MIN;
	static volatile uint32_t x506 = 4604308U;
	int64_t x507 = -1LL;
	int64_t t95 = 4LL;

	t95 = ((x505%x506)|(x507*x508));

	if (t95 != -4266637LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x509 = 1U;
	uint64_t x511 = 9209LLU;
	static volatile uint16_t x512 = UINT16_MAX;

	t96 = ((x509%x510)|(x511*x512));

	if (t96 != 603511815LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x514 = UINT8_MAX;
	int8_t x515 = INT8_MIN;
	uint16_t x516 = UINT16_MAX;
	volatile int64_t t97 = -7979288721016LL;

	t97 = ((x513%x514)|(x515*x516));

	if (t97 != -8388439LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x517 = -1;
	int64_t x518 = -1627085LL;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	int64_t t98 = -887810345382835LL;

	t98 = ((x517%x518)|(x519*x520));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = 509147049019574787LL;
	volatile int64_t x522 = -1056038920514940264LL;
	int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MIN;
	int64_t t99 = -65976220755LL;

	t99 = ((x521%x522)|(x523*x524));

	if (t99 != 509147049019574787LL) { NG(); } else { ; }
	
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

