#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x7 = UINT64_MAX;
int8_t x8 = 7;
uint8_t x17 = 105U;
uint32_t t4 = 965U;
volatile int64_t t5 = 214552207883647847LL;
int16_t x30 = INT16_MIN;
static int64_t x31 = -62571217LL;
volatile int16_t x39 = -1021;
uint32_t x41 = 16U;
int16_t x43 = INT16_MIN;
uint64_t t10 = 1LLU;
uint32_t x52 = 3741412U;
int8_t x55 = -1;
int16_t x58 = INT16_MIN;
uint64_t x67 = 398066231149924744LLU;
int16_t x68 = -2029;
static int64_t x78 = -1LL;
int16_t x80 = 8039;
volatile int64_t x83 = INT64_MIN;
int16_t x91 = INT16_MAX;
volatile uint32_t x93 = 1021U;
volatile uint8_t x113 = 0U;
int32_t x115 = -1;
uint16_t x116 = 17U;
static uint32_t x120 = UINT32_MAX;
int32_t x121 = 1408;
int64_t x123 = INT64_MIN;
static int32_t x125 = 6810;
int64_t x128 = -1LL;
int64_t t25 = -1329635LL;
volatile int64_t x136 = -1LL;
uint8_t x138 = 25U;
int32_t t27 = -137905;
int32_t x142 = INT32_MIN;
static uint16_t x170 = UINT16_MAX;
int16_t x175 = INT16_MIN;
static uint64_t x190 = 5LLU;
static volatile int16_t x199 = -3;
static int8_t x200 = 0;
static int8_t x201 = INT8_MIN;
uint32_t x227 = 15316835U;
static uint8_t x241 = 3U;
static volatile int64_t t43 = -2693292978810LL;
int64_t x248 = -146864LL;
int32_t x249 = -1823564;
volatile int8_t x252 = INT8_MIN;
volatile uint64_t t45 = 732280045748034LLU;
uint16_t x264 = UINT16_MAX;
int8_t x266 = 0;
static int32_t t48 = 4903815;
int16_t x272 = INT16_MIN;
uint32_t t49 = 176574U;
volatile int64_t x281 = INT64_MAX;
int64_t t51 = -1347960172069LL;
int32_t t52 = -20896018;
volatile uint8_t x291 = 110U;
int32_t x297 = 204484;
int16_t x301 = -3769;
uint16_t x306 = 129U;
uint64_t x313 = 291903LLU;
static int16_t x327 = -1;
int64_t x332 = -1LL;
static uint32_t x333 = 11U;
int32_t x335 = -1;
uint64_t t63 = 341071275028790LLU;
uint32_t t64 = 16297389U;
static volatile int32_t t67 = 214;
int64_t x372 = -267863830LL;
volatile int8_t x377 = INT8_MIN;
int32_t x378 = -1903400;
int8_t x383 = -4;
static int64_t t70 = 13988445856017LL;
volatile uint8_t x387 = UINT8_MAX;
volatile uint32_t x396 = UINT32_MAX;
int64_t x399 = -18085994358LL;
volatile int64_t t73 = 11514369938LL;
int8_t x401 = -7;
int32_t x409 = -1;
int8_t x411 = INT8_MIN;
uint8_t x414 = 25U;
int16_t x418 = -1;
int8_t x426 = INT8_MAX;
static uint8_t x433 = 117U;
volatile uint32_t t79 = 197692U;
static uint64_t x437 = UINT64_MAX;
uint16_t x440 = 31U;
uint8_t x467 = 77U;
static int64_t x477 = 48186LL;
int32_t x478 = -1;
int64_t t86 = 0LL;
static volatile int64_t t87 = -109197911LL;
static volatile uint16_t x485 = 703U;
int8_t x489 = -1;
int16_t x492 = INT16_MIN;
volatile uint8_t x504 = 12U;
static int64_t t93 = -28132343795525489LL;
int32_t t95 = 14961485;
uint64_t x525 = 3370LLU;
volatile uint64_t t98 = 9620647520LLU;
int32_t x555 = 6593;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint64_t x2 = UINT64_MAX;
	volatile int8_t x3 = -1;
	int8_t x4 = 1;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1+x2)|(x3-x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile uint32_t x6 = 3U;
	volatile uint64_t t1 = 2936991294101058884LLU;

	t1 = ((x5+x6)|(x7-x8));

	if (t1 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	uint32_t x10 = UINT32_MAX;
	volatile int32_t x11 = INT32_MAX;
	int64_t x12 = -13LL;
	volatile int64_t t2 = -110791LL;

	t2 = ((x9+x10)|(x11-x12));

	if (t2 != 4294967294LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 35918U;
	static int64_t x14 = INT64_MIN;
	int16_t x15 = 1;
	int8_t x16 = INT8_MIN;
	int64_t t3 = -421LL;

	t3 = ((x13+x14)|(x15-x16));

	if (t3 != -9223372036854739761LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x18 = 3U;
	int32_t x19 = -13583;
	uint32_t x20 = UINT32_MAX;

	t4 = ((x17+x18)|(x19-x20));

	if (t4 != 4294953726U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	int64_t x22 = 3538LL;
	volatile uint8_t x23 = 1U;
	int16_t x24 = INT16_MIN;

	t5 = ((x21+x22)|(x23-x24));

	if (t5 != 36307LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = UINT32_MAX;
	static int16_t x26 = -10661;
	int8_t x27 = INT8_MAX;
	uint32_t x28 = 69375U;
	uint32_t t6 = 1U;

	t6 = ((x25+x26)|(x27-x28));

	if (t6 != 4294965210U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 150;
	int16_t x32 = INT16_MAX;
	int64_t t7 = -8167LL;

	t7 = ((x29+x30)|(x31-x32));

	if (t7 != -16970LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -17137556;
	uint64_t x38 = UINT64_MAX;
	uint16_t x40 = 4U;
	volatile uint64_t t8 = 755623948LLU;

	t8 = ((x37+x38)|(x39-x40));

	if (t8 != 18446744073709550591LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	static int64_t x44 = 236747937130LL;
	int64_t t9 = 893181776673547LL;

	t9 = ((x41+x42)|(x43-x44));

	if (t9 != -236747969889LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 350951771745433204LLU;
	int64_t x46 = 199951540865673864LL;
	volatile int64_t x47 = INT64_MIN;
	static volatile int16_t x48 = INT16_MIN;

	t10 = ((x45+x46)|(x47-x48));

	if (t10 != 9774275349465915644LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 103074U;
	int8_t x50 = INT8_MIN;
	uint32_t x51 = 79939334U;
	uint32_t t11 = 696350082U;

	t11 = ((x49+x50)|(x51-x52));

	if (t11 != 76263970U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 2U;
	volatile int16_t x54 = INT16_MIN;
	uint16_t x56 = 2U;
	int32_t t12 = -127502;

	t12 = ((x53+x54)|(x55-x56));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	uint32_t x59 = 159U;
	static int16_t x60 = INT16_MAX;
	uint32_t t13 = 2023590938U;

	t13 = ((x57+x58)|(x59-x60));

	if (t13 != 4294934783U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x65 = INT8_MAX;
	volatile int64_t x66 = -1LL;
	uint64_t t14 = 56139LLU;

	t14 = ((x65+x66)|(x67-x68));

	if (t14 != 398066231149926783LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	volatile int16_t x70 = INT16_MAX;
	static int8_t x71 = -13;
	int32_t x72 = INT32_MIN;
	static int32_t t15 = INT32_MAX;

	t15 = ((x69+x70)|(x71-x72));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x73 = 8138869U;
	volatile uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 570124839159504LLU;
	int16_t x76 = 45;
	uint64_t t16 = 1886776757263LLU;

	t16 = ((x73+x74)|(x75-x76));

	if (t16 != 570124847036151LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -852233832;
	int8_t x79 = INT8_MIN;
	int64_t t17 = 6468800041648LL;

	t17 = ((x77+x78)|(x79-x80));

	if (t17 != -3681LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 122701998;
	static int8_t x82 = INT8_MAX;
	int16_t x84 = INT16_MIN;
	volatile int64_t t18 = 680LL;

	t18 = ((x81+x82)|(x83-x84));

	if (t18 != -9223372036732040915LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = INT16_MAX;
	int16_t x90 = 2676;
	volatile int64_t x92 = -1LL;
	int64_t t19 = -764592LL;

	t19 = ((x89+x90)|(x91-x92));

	if (t19 != 35443LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = 3;
	uint64_t x95 = 3105988811800246LLU;
	static uint8_t x96 = 64U;
	volatile uint64_t t20 = 541326610715LLU;

	t20 = ((x93+x94)|(x95-x96));

	if (t20 != 3105988811800182LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	volatile uint16_t x98 = 0U;
	int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t21 = 1121298;

	t21 = ((x97+x98)|(x99-x100));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x114 = 10U;
	static int32_t t22 = -2491;

	t22 = ((x113+x114)|(x115-x116));

	if (t22 != -18) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 0U;
	static volatile int16_t x119 = INT16_MIN;
	uint32_t t23 = 1U;

	t23 = ((x117+x118)|(x119-x120));

	if (t23 != 4294934529U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x122 = 0;
	volatile uint64_t x124 = 7545215164LLU;
	volatile uint64_t t24 = 2418654451LLU;

	t24 = ((x121+x122)|(x123-x124));

	if (t24 != 9223372029309560772LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x126 = INT8_MAX;
	int16_t x127 = -1;

	t25 = ((x125+x126)|(x127-x128));

	if (t25 != 6937LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -1;
	int64_t x134 = INT64_MAX;
	volatile int32_t x135 = INT32_MIN;
	volatile int64_t t26 = -5587855LL;

	t26 = ((x133+x134)|(x135-x136));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x137 = 28133U;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 1;

	t27 = ((x137+x138)|(x139-x140));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x141 = 0U;
	static volatile int8_t x143 = -2;
	volatile uint16_t x144 = 3146U;
	volatile int32_t t28 = -80483359;

	t28 = ((x141+x142)|(x143-x144));

	if (t28 != -3148) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int32_t x146 = 176868988;
	int64_t x147 = -1LL;
	static volatile int32_t x148 = -1;
	volatile int64_t t29 = -57LL;

	t29 = ((x145+x146)|(x147-x148));

	if (t29 != 176934523LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MAX;
	uint16_t x154 = 8996U;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = -1;
	int64_t t30 = 0LL;

	t30 = ((x153+x154)|(x155-x156));

	if (t30 != -9223372036854766685LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x161 = INT64_MAX;
	int16_t x162 = -1783;
	uint32_t x163 = 35U;
	int32_t x164 = 27939389;
	volatile int64_t t31 = -6177LL;

	t31 = ((x161+x162)|(x163-x164));

	if (t31 != 9223372036854775278LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x169 = -1;
	uint16_t x171 = 5827U;
	int8_t x172 = INT8_MAX;
	volatile int32_t t32 = -361;

	t32 = ((x169+x170)|(x171-x172));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = -1;
	int64_t x174 = 0LL;
	int16_t x176 = -1;
	static volatile int64_t t33 = -115268LL;

	t33 = ((x173+x174)|(x175-x176));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x177 = -1LL;
	uint64_t x178 = 19495840636055784LLU;
	int16_t x179 = INT16_MIN;
	static volatile int64_t x180 = -13428450405LL;
	volatile uint64_t t34 = 113LLU;

	t34 = ((x177+x178)|(x179-x180));

	if (t34 != 19495849767072999LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = -1;
	static volatile int8_t x191 = -20;
	static int16_t x192 = -1;
	uint64_t t35 = 7114706988929LLU;

	t35 = ((x189+x190)|(x191-x192));

	if (t35 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x197 = 31U;
	int32_t x198 = 4349367;
	int32_t t36 = 852;

	t36 = ((x197+x198)|(x199-x200));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x202 = INT64_MAX;
	int32_t x203 = -1;
	volatile int8_t x204 = 14;
	volatile int64_t t37 = 286404898425LL;

	t37 = ((x201+x202)|(x203-x204));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x205 = -1;
	int16_t x206 = INT16_MIN;
	int64_t x207 = 381738587588899636LL;
	volatile int32_t x208 = 11181183;
	static volatile int64_t t38 = -994283857LL;

	t38 = ((x205+x206)|(x207-x208));

	if (t38 != -32769LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = -1;
	static uint16_t x210 = 9U;
	uint8_t x211 = UINT8_MAX;
	volatile int8_t x212 = -48;
	volatile int32_t t39 = -61536;

	t39 = ((x209+x210)|(x211-x212));

	if (t39 != 303) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x213 = 91247U;
	uint64_t x214 = 607119314893LLU;
	int32_t x215 = -769;
	volatile int32_t x216 = INT32_MIN;
	volatile uint64_t t40 = 2797243909582950478LLU;

	t40 = ((x213+x214)|(x215-x216));

	if (t40 != 607737871615LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = -1;
	int64_t x228 = -1LL;
	int64_t t41 = -1230518982247847LL;

	t41 = ((x225+x226)|(x227-x228));

	if (t41 != -129LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x238 = UINT16_MAX;
	static volatile int32_t x239 = INT32_MIN;
	volatile int64_t x240 = -1LL;
	int64_t t42 = 54125118244953686LL;

	t42 = ((x237+x238)|(x239-x240));

	if (t42 != -2147418113LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x242 = 250U;
	uint16_t x243 = UINT16_MAX;
	volatile int64_t x244 = -1LL;

	t43 = ((x241+x242)|(x243-x244));

	if (t43 != 65789LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x245 = -26659495691LL;
	static int32_t x246 = -1;
	int16_t x247 = -2857;
	static int64_t t44 = 102671LL;

	t44 = ((x245+x246)|(x247-x248));

	if (t44 != -26659360009LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x250 = INT16_MIN;
	uint64_t x251 = 7LLU;

	t45 = ((x249+x250)|(x251-x252));

	if (t45 != 18446744073707695287LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = INT16_MAX;
	static volatile int32_t x254 = 56211;
	uint16_t x255 = 11U;
	uint16_t x256 = 3204U;
	int32_t t46 = -32681;

	t46 = ((x253+x254)|(x255-x256));

	if (t46 != -1129) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x261 = 27U;
	uint32_t x262 = 4092111U;
	int32_t x263 = -1;
	static volatile uint32_t t47 = 1323U;

	t47 = ((x261+x262)|(x263-x264));

	if (t47 != 4294930666U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x265 = 1587U;
	int32_t x267 = 4;
	uint16_t x268 = 301U;

	t48 = ((x265+x266)|(x267-x268));

	if (t48 != -265) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x269 = -1521;
	uint32_t x270 = 130815U;
	int16_t x271 = INT16_MIN;

	t49 = ((x269+x270)|(x271-x272));

	if (t49 != 129294U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	uint16_t x276 = 3958U;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x273+x274)|(x275-x276));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x282 = -137814794;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;

	t51 = ((x281+x282)|(x283-x284));

	if (t51 != 9223372036716961013LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x285 = 2U;
	volatile int8_t x286 = -3;
	int8_t x287 = 15;
	volatile int8_t x288 = -1;

	t52 = ((x285+x286)|(x287-x288));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = 1648463378492489LL;
	volatile int8_t x292 = -1;
	int64_t t53 = -61070492139LL;

	t53 = ((x289+x290)|(x291-x292));

	if (t53 != 1648463378492399LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x293 = 79;
	int32_t x294 = -180;
	int16_t x295 = -1;
	static uint8_t x296 = 14U;
	volatile int32_t t54 = -59;

	t54 = ((x293+x294)|(x295-x296));

	if (t54 != -5) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x298 = 952427633503825535LL;
	volatile int16_t x299 = 1287;
	int16_t x300 = INT16_MAX;
	volatile int64_t t55 = -136131880049645399LL;

	t55 = ((x297+x298)|(x299-x300));

	if (t55 != -29365LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x302 = INT64_MAX;
	uint8_t x303 = 3U;
	volatile uint64_t x304 = 8433241LLU;
	volatile uint64_t t56 = 421215LLU;

	t56 = ((x301+x302)|(x303-x304));

	if (t56 != 18446744073709548014LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x305 = INT32_MIN;
	volatile uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t57 = 17331960U;

	t57 = ((x305+x306)|(x307-x308));

	if (t57 != 2147483903U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x314 = 12865LLU;
	int8_t x315 = -1;
	volatile int64_t x316 = INT64_MIN;
	static volatile uint64_t t58 = 450378958248LLU;

	t58 = ((x313+x314)|(x315-x316));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x321 = 0;
	static int32_t x322 = 225;
	int64_t x323 = 3320LL;
	volatile int64_t x324 = -1LL;
	int64_t t59 = -2047LL;

	t59 = ((x321+x322)|(x323-x324));

	if (t59 != 3321LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x325 = 61U;
	uint64_t x326 = 1858661198LLU;
	int8_t x328 = INT8_MIN;
	volatile uint64_t t60 = 66674339439525LLU;

	t60 = ((x325+x326)|(x327-x328));

	if (t60 != 1858661375LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = -27;
	int16_t x331 = INT16_MIN;
	volatile int64_t t61 = -185195352LL;

	t61 = ((x329+x330)|(x331-x332));

	if (t61 != -27LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x334 = 11;
	static int64_t x336 = INT64_MIN;
	volatile int64_t t62 = INT64_MAX;

	t62 = ((x333+x334)|(x335-x336));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x337 = 6206U;
	uint16_t x338 = 952U;
	volatile uint16_t x339 = 551U;
	static uint64_t x340 = 2917812906315029LLU;

	t63 = ((x337+x338)|(x339-x340));

	if (t63 != 18443826260803239926LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x345 = INT8_MAX;
	uint32_t x346 = 32289U;
	static volatile int32_t x347 = 30731193;
	volatile int32_t x348 = 504673;

	t64 = ((x345+x346)|(x347-x348));

	if (t64 != 30244600U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x349 = UINT32_MAX;
	volatile uint32_t x350 = 0U;
	uint32_t x351 = 34890U;
	static int16_t x352 = -1;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = ((x349+x350)|(x351-x352));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x361 = 42LLU;
	static uint32_t x362 = 1994278U;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -1;
	volatile uint64_t t66 = 394410537334969LLU;

	t66 = ((x361+x362)|(x363-x364));

	if (t66 != 18446744073709547089LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x365 = 2967U;
	volatile uint16_t x366 = 77U;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MAX;

	t67 = ((x365+x366)|(x367-x368));

	if (t67 != -62491) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x369 = INT32_MAX;
	volatile int32_t x370 = -1;
	int8_t x371 = 18;
	int64_t t68 = -98687980LL;

	t68 = ((x369+x370)|(x371-x372));

	if (t68 != 2147483646LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x379 = 58;
	int16_t x380 = INT16_MIN;
	int32_t t69 = 476;

	t69 = ((x377+x378)|(x379-x380));

	if (t69 != -1903494) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = 401LL;
	uint32_t x384 = 244U;

	t70 = ((x381+x382)|(x383-x384));

	if (t70 != 8589934488LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int16_t x386 = INT16_MAX;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t71 = 3541703772LLU;

	t71 = ((x385+x386)|(x387-x388));

	if (t71 != 32767LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x393 = INT8_MIN;
	int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t t72 = 598739088379LLU;

	t72 = ((x393+x394)|(x395-x396));

	if (t72 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = 1712LL;
	int8_t x400 = -1;

	t73 = ((x397+x398)|(x399-x400));

	if (t73 != -18085992785LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x402 = INT32_MAX;
	int8_t x403 = INT8_MAX;
	int32_t x404 = -18;
	volatile int32_t t74 = -2;

	t74 = ((x401+x402)|(x403-x404));

	if (t74 != 2147483641) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x410 = INT8_MIN;
	uint32_t x412 = 47510839U;
	uint32_t t75 = 386U;

	t75 = ((x409+x410)|(x411-x412));

	if (t75 != 4294967167U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x413 = 7017625U;
	static uint16_t x415 = 17U;
	uint32_t x416 = 1689U;
	static uint32_t t76 = 1971707948U;

	t76 = ((x413+x414)|(x415-x416));

	if (t76 != 4294966778U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x417 = -1;
	int32_t x419 = INT32_MIN;
	int8_t x420 = -1;
	static int32_t t77 = -43809;

	t77 = ((x417+x418)|(x419-x420));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x425 = 9464;
	static int8_t x427 = INT8_MAX;
	static int8_t x428 = INT8_MAX;
	int32_t t78 = -355971305;

	t78 = ((x425+x426)|(x427-x428));

	if (t78 != 9591) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x434 = INT32_MIN;
	int8_t x435 = -1;
	static uint32_t x436 = 101958329U;

	t79 = ((x433+x434)|(x435-x436));

	if (t79 != 4193009015U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x438 = INT64_MIN;
	int16_t x439 = 1;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x437+x438)|(x439-x440));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = 178949040LL;
	uint64_t x446 = 3738LLU;
	volatile int64_t x447 = -1LL;
	static int16_t x448 = INT16_MAX;
	uint64_t t81 = 815260836LLU;

	t81 = ((x445+x446)|(x447-x448));

	if (t81 != 18446744073709525578LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x449 = -13;
	int16_t x450 = INT16_MIN;
	static uint64_t x451 = 4014575834LLU;
	int64_t x452 = INT64_MAX;
	uint64_t t82 = 0LLU;

	t82 = ((x449+x450)|(x451-x452));

	if (t82 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x453 = 4295;
	uint64_t x454 = 881079LLU;
	uint16_t x455 = 40U;
	volatile uint8_t x456 = 1U;
	volatile uint64_t t83 = 15224246LLU;

	t83 = ((x453+x454)|(x455-x456));

	if (t83 != 885375LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = -1;
	volatile int16_t x466 = INT16_MIN;
	int32_t x468 = 33718;
	int32_t t84 = -4757094;

	t84 = ((x465+x466)|(x467-x468));

	if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x473 = INT16_MIN;
	int32_t x474 = -1;
	int8_t x475 = INT8_MAX;
	int8_t x476 = -3;
	int32_t t85 = 92;

	t85 = ((x473+x474)|(x475-x476));

	if (t85 != -32769) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x479 = -3596645526LL;
	static int16_t x480 = INT16_MAX;

	t86 = ((x477+x478)|(x479-x480));

	if (t86 != -3596632197LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x481 = INT16_MIN;
	int64_t x482 = -2854504373845066LL;
	int16_t x483 = -1;
	uint8_t x484 = 29U;

	t87 = ((x481+x482)|(x483-x484));

	if (t87 != -10LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x486 = 1;
	uint32_t x487 = 86822597U;
	static int16_t x488 = -1;
	uint32_t t88 = 27U;

	t88 = ((x485+x486)|(x487-x488));

	if (t88 != 86822598U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x490 = 5200639U;
	int8_t x491 = 4;
	uint32_t t89 = 7489U;

	t89 = ((x489+x490)|(x491-x492));

	if (t89 != 5233406U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = -1;
	uint8_t x494 = 0U;
	volatile int8_t x495 = INT8_MAX;
	uint32_t x496 = 709U;
	uint32_t t90 = UINT32_MAX;

	t90 = ((x493+x494)|(x495-x496));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x497 = -1;
	int16_t x498 = -1;
	volatile int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MIN;
	int64_t t91 = 5633516LL;

	t91 = ((x497+x498)|(x499-x500));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x501 = 895U;
	int8_t x502 = INT8_MIN;
	int64_t x503 = 12782412596618507LL;
	volatile int64_t t92 = -81655403LL;

	t92 = ((x501+x502)|(x503-x504));

	if (t92 != 12782412596619007LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x505 = INT16_MAX;
	uint8_t x506 = 6U;
	volatile int64_t x507 = 1421146246LL;
	volatile int32_t x508 = -13;

	t93 = ((x505+x506)|(x507-x508));

	if (t93 != 1421146263LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x509 = -1LL;
	volatile uint8_t x510 = 21U;
	static int8_t x511 = INT8_MIN;
	uint64_t x512 = UINT64_MAX;
	uint64_t t94 = 19162540057468214LLU;

	t94 = ((x509+x510)|(x511-x512));

	if (t94 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x513 = 0U;
	volatile int16_t x514 = INT16_MIN;
	int32_t x515 = -166805973;
	static int8_t x516 = -1;

	t95 = ((x513+x514)|(x515-x516));

	if (t95 != -16852) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x521 = 172420699;
	int32_t x522 = INT32_MIN;
	uint64_t x523 = UINT64_MAX;
	static int32_t x524 = 64435191;
	static volatile uint64_t t96 = 3571619270934861724LLU;

	t96 = ((x521+x522)|(x523-x524));

	if (t96 != 18446744073683267163LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x526 = UINT16_MAX;
	int16_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	volatile uint64_t t97 = 751388843LLU;

	t97 = ((x525+x526)|(x527-x528));

	if (t97 != 68905LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x549 = INT32_MIN;
	volatile int32_t x550 = 78;
	int16_t x551 = -1;
	uint64_t x552 = UINT64_MAX;

	t98 = ((x549+x550)|(x551-x552));

	if (t98 != 18446744071562068046LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x553 = UINT8_MAX;
	int32_t x554 = INT32_MIN;
	int16_t x556 = -10;
	volatile int32_t t99 = 20;

	t99 = ((x553+x554)|(x555-x556));

	if (t99 != -2147476993) { NG(); } else { ; }
	
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

