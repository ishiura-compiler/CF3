#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = -648;
static volatile uint64_t t0 = 192691LLU;
int64_t x16 = 18547LL;
volatile int8_t x19 = INT8_MAX;
volatile uint64_t x26 = UINT64_MAX;
volatile uint64_t t3 = 437675544LLU;
int16_t x29 = INT16_MIN;
uint64_t t4 = 395252LLU;
int32_t x37 = INT32_MIN;
volatile uint8_t x51 = 1U;
static int16_t x55 = INT16_MIN;
uint32_t x56 = UINT32_MAX;
int64_t t10 = 0LL;
int32_t x65 = 18;
volatile uint8_t x66 = UINT8_MAX;
static int16_t x68 = -1;
volatile int64_t x71 = INT64_MIN;
uint32_t x73 = UINT32_MAX;
volatile int16_t x74 = -1;
volatile uint32_t t14 = 53596628U;
static volatile int32_t x78 = 457747998;
int8_t x79 = INT8_MIN;
int8_t x83 = 1;
volatile int32_t t16 = INT32_MIN;
volatile uint64_t t17 = 56LLU;
uint64_t x91 = 15930LLU;
uint32_t x93 = 1440053U;
static volatile int64_t t19 = 18923183845329747LL;
volatile uint64_t t21 = 551943283291334661LLU;
volatile int64_t x116 = INT64_MIN;
static int64_t x119 = INT64_MIN;
static uint8_t x126 = 6U;
static int64_t x128 = -1LL;
static int16_t x153 = INT16_MIN;
uint16_t x169 = 5U;
uint8_t x177 = 5U;
uint64_t t34 = 2LLU;
volatile uint64_t t35 = 32772419073040707LLU;
static int64_t x190 = INT64_MIN;
int32_t x193 = 73158;
int16_t x195 = INT16_MIN;
uint32_t x205 = 259U;
static int32_t x206 = INT32_MIN;
int32_t x211 = INT32_MIN;
uint32_t x224 = UINT32_MAX;
static uint8_t x227 = 0U;
volatile int16_t x228 = -2;
int64_t x230 = -1743280931395607609LL;
uint64_t x234 = 1784197170LLU;
int8_t x237 = INT8_MIN;
static volatile int16_t x238 = -1;
static volatile int32_t t46 = -93271;
int16_t x241 = INT16_MIN;
volatile int16_t x242 = 2081;
uint64_t x243 = 887212526921341070LLU;
static int16_t x257 = INT16_MAX;
volatile int8_t x259 = INT8_MAX;
int32_t x267 = 95454;
volatile int16_t x275 = -208;
static uint32_t x276 = 43663U;
static uint8_t x286 = UINT8_MAX;
int32_t x295 = -1;
int8_t x296 = -1;
uint8_t x297 = 49U;
static uint8_t x298 = 3U;
int32_t x303 = INT32_MAX;
int8_t x304 = INT8_MIN;
int32_t x306 = INT32_MIN;
int32_t x307 = -1;
int32_t t62 = 2534685;
static int64_t t63 = 1LL;
int8_t x327 = 63;
static int32_t x336 = -17;
int32_t x342 = 0;
volatile uint8_t x343 = 48U;
int16_t x348 = INT16_MIN;
int32_t x351 = INT32_MIN;
static int64_t x360 = INT64_MAX;
int8_t x370 = -1;
uint32_t t75 = 11U;
uint32_t x373 = 5542U;
int32_t x376 = INT32_MIN;
uint32_t x394 = 51458U;
uint64_t x396 = 199547260894528764LLU;
int32_t x402 = 464953906;
uint8_t x404 = 42U;
int32_t t82 = -2495693;
static int64_t x406 = -2211821802981207LL;
int32_t x411 = 902;
static int8_t x414 = 2;
volatile int8_t x417 = INT8_MIN;
int16_t x419 = -1;
int64_t x424 = INT64_MAX;
int16_t x426 = INT16_MAX;
static uint16_t x428 = 9033U;
static volatile uint16_t x430 = 73U;
volatile int32_t t90 = 26756106;
static int64_t x443 = -6701652011LL;
int16_t x445 = INT16_MIN;
uint16_t x446 = UINT16_MAX;
int32_t x447 = 249624;
static int16_t x450 = -223;
static int64_t x451 = -1LL;
int64_t t94 = -74216LL;
int64_t t95 = -387170821719732906LL;
volatile int16_t x461 = -5;
int16_t x463 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint64_t x4 = 4000982903LLU;

	t0 = (x1&((x2-x3)^x4));

	if (t0 != 55823LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = 30;
	uint64_t x14 = 10560828319764265LLU;
	static int8_t x15 = -1;
	uint64_t t1 = 15762687955LLU;

	t1 = (x13&((x14-x15)^x16));

	if (t1 != 24LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 5292118U;
	uint16_t x20 = UINT16_MAX;
	volatile uint32_t t2 = 703U;

	t2 = (x17&((x18-x19)^x20));

	if (t2 != 16424U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int32_t x28 = 355;

	t3 = (x25&((x26-x27)^x28));

	if (t3 != 18446744069414584576LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x30 = 170515567542986LLU;
	volatile int64_t x31 = -21367868538048937LL;
	uint8_t x32 = 1U;

	t4 = (x29&((x30-x31)^x32));

	if (t4 != 21538384105570304LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 1U;
	uint32_t x40 = 515U;
	uint64_t t5 = 76677LLU;

	t5 = (x37&((x38-x39)^x40));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x41 = -301LL;
	uint32_t x42 = 23U;
	static volatile int64_t x43 = 26070LL;
	int32_t x44 = 1986;
	volatile int64_t t6 = 241400639LL;

	t6 = (x41&((x42-x43)^x44));

	if (t6 != -25469LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -1LL;
	volatile uint32_t x46 = UINT32_MAX;
	int16_t x47 = INT16_MAX;
	int16_t x48 = -1;
	int64_t t7 = -4025438328495953LL;

	t7 = (x45&((x46-x47)^x48));

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = -1LL;
	int64_t x50 = -206059LL;
	volatile int64_t x52 = -259LL;
	int64_t t8 = 1119802394552281499LL;

	t8 = (x49&((x50-x51)^x52));

	if (t8 != 206313LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = -1;
	int64_t x54 = 2512769283282710363LL;
	volatile int64_t t9 = 3980LL;

	t9 = (x53&((x54-x55)^x56));

	if (t9 != 2512769282592166052LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = 0LL;
	uint32_t x58 = 279497U;
	uint16_t x59 = 1U;
	int8_t x60 = INT8_MIN;

	t10 = (x57&((x58-x59)^x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = 8901LL;
	int64_t x62 = -1LL;
	volatile uint8_t x63 = 25U;
	int32_t x64 = INT32_MIN;
	volatile int64_t t11 = 18899743LL;

	t11 = (x61&((x62-x63)^x64));

	if (t11 != 8900LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x67 = 62U;
	static int32_t t12 = 254318;

	t12 = (x65&((x66-x67)^x68));

	if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -81LL;
	int8_t x70 = -47;
	int16_t x72 = -1;
	int64_t t13 = -12969272LL;

	t13 = (x69&((x70-x71)^x72));

	if (t13 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x75 = -386770;
	int32_t x76 = -195;

	t14 = (x73&((x74-x75)^x76));

	if (t14 != 4294580716U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = 321;
	int8_t x80 = INT8_MIN;
	volatile int32_t t15 = -63786900;

	t15 = (x77&((x78-x79)^x80));

	if (t15 != 256) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x81 = INT32_MIN;
	int16_t x82 = 1;
	volatile int32_t x84 = -422;

	t16 = (x81&((x82-x83)^x84));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -47784;
	uint64_t x86 = 10467120LLU;
	static volatile int32_t x87 = -1;
	static int32_t x88 = INT32_MIN;

	t17 = (x85&((x86-x87)^x88));

	if (t17 != 18446744071572489488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	uint64_t x90 = 1795395609LLU;
	int64_t x92 = 1326216800553269LL;
	uint64_t t18 = 18703060LLU;

	t18 = (x89&((x90-x91)^x92));

	if (t18 != 1326215072422016LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x94 = 2945;
	static volatile int64_t x95 = INT64_MAX;
	uint8_t x96 = UINT8_MAX;

	t19 = (x93&((x94-x95)^x96));

	if (t19 != 2357LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 2559363846399621LL;
	volatile uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MAX;
	volatile int64_t x100 = 1107318286839723LL;
	static volatile uint64_t t20 = 5971314146LLU;

	t20 = (x97&((x98-x99)^x100));

	if (t20 != 289274639574657LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = -1;
	static uint64_t x103 = 13826836721715978LLU;
	int64_t x104 = INT64_MIN;

	t21 = (x101&((x102-x103)^x104));

	if (t21 != 9209545199246639104LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = 107806316;
	volatile uint64_t x110 = 513947002249853286LLU;
	uint16_t x111 = UINT16_MAX;
	static int8_t x112 = INT8_MIN;
	uint64_t t22 = 84851050209LLU;

	t22 = (x109&((x110-x111)^x112));

	if (t22 != 280164LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x113 = 1U;
	int32_t x114 = INT32_MAX;
	int8_t x115 = 35;
	int64_t t23 = 1LL;

	t23 = (x113&((x114-x115)^x116));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 305493U;
	static int32_t x118 = INT32_MIN;
	uint64_t x120 = 597242599007249909LLU;
	uint64_t t24 = 687811LLU;

	t24 = (x117&((x118-x119)^x120));

	if (t24 != 303445LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = -1;
	int16_t x122 = 15;
	int64_t x123 = 297221950041853781LL;
	int64_t x124 = 160LL;
	static volatile int64_t t25 = -674169753606110758LL;

	t25 = (x121&((x122-x123)^x124));

	if (t25 != -297221950041853926LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x127 = -1;
	static volatile int64_t t26 = 45979LL;

	t26 = (x125&((x126-x127)^x128));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = 9685;
	uint8_t x130 = UINT8_MAX;
	static uint16_t x131 = 12473U;
	int16_t x132 = -140;
	volatile int32_t t27 = 185916366;

	t27 = (x129&((x130-x131)^x132));

	if (t27 != 9488) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x137 = UINT64_MAX;
	volatile uint16_t x138 = 16U;
	static uint64_t x139 = 22696061180761327LLU;
	int32_t x140 = INT32_MIN;
	uint64_t t28 = 19672620274LLU;

	t28 = (x137&((x138-x139)^x140));

	if (t28 != 22696063043709729LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = -1;
	static uint32_t x142 = 772U;
	int16_t x143 = INT16_MIN;
	static uint8_t x144 = 54U;
	volatile uint32_t t29 = 45524U;

	t29 = (x141&((x142-x143)^x144));

	if (t29 != 33586U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = INT64_MIN;
	uint16_t x146 = 127U;
	int32_t x147 = 233;
	static uint8_t x148 = UINT8_MAX;
	int64_t t30 = INT64_MIN;

	t30 = (x145&((x146-x147)^x148));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x149 = -18;
	static int8_t x150 = -1;
	static uint64_t x151 = 6954422009077LLU;
	static int16_t x152 = -2459;
	volatile uint64_t t31 = 3256LLU;

	t31 = (x149&((x150-x151)^x152));

	if (t31 != 6954422007150LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x154 = 11U;
	int8_t x155 = -1;
	uint32_t x156 = 3985U;
	uint32_t t32 = 86271U;

	t32 = (x153&((x154-x155)^x156));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x170 = -1;
	int64_t x171 = -33003LL;
	static int16_t x172 = INT16_MAX;
	static int64_t t33 = -129994148134832116LL;

	t33 = (x169&((x170-x171)^x172));

	if (t33 != 5LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = -37;
	uint64_t x180 = 8121260219LLU;

	t34 = (x177&((x178-x179)^x180));

	if (t34 != 5LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 9U;

	t35 = (x185&((x186-x187)^x188));

	if (t35 != 8LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 102U;
	int8_t x191 = -1;
	static volatile uint8_t x192 = 0U;
	static volatile int64_t t36 = 1322765437LL;

	t36 = (x189&((x190-x191)^x192));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x194 = 1;
	int64_t x196 = INT64_MAX;
	volatile int64_t t37 = 713LL;

	t37 = (x193&((x194-x195)^x196));

	if (t37 != 73158LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = 8U;
	int8_t x202 = 1;
	volatile uint16_t x203 = 12812U;
	uint16_t x204 = 467U;
	volatile int32_t t38 = -1;

	t38 = (x201&((x202-x203)^x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x207 = 57479071227LLU;
	int64_t x208 = -1663741616LL;
	uint64_t t39 = 3711483656133LLU;

	t39 = (x205&((x206-x207)^x208));

	if (t39 != 257LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	volatile uint32_t x212 = 253587364U;
	volatile int64_t t40 = -15205561563274LL;

	t40 = (x209&((x210-x211)^x212));

	if (t40 != -9223372034453704796LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x217 = 63U;
	int32_t x218 = INT32_MAX;
	uint32_t x219 = 649938U;
	int8_t x220 = 13;
	volatile uint32_t t41 = 485332466U;

	t41 = (x217&((x218-x219)^x220));

	if (t41 != 32U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 10U;
	uint16_t x223 = 1U;
	volatile uint32_t t42 = 433U;

	t42 = (x221&((x222-x223)^x224));

	if (t42 != 65526U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x225 = UINT8_MAX;
	int32_t x226 = -75179461;
	volatile int32_t t43 = 2834;

	t43 = (x225&((x226-x227)^x228));

	if (t43 != 197) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x229 = 104666U;
	uint64_t x231 = 131LLU;
	volatile uint8_t x232 = 101U;
	volatile uint64_t t44 = 32055085076658LLU;

	t44 = (x229&((x230-x231)^x232));

	if (t44 != 98304LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x233 = INT16_MIN;
	uint32_t x235 = 649281U;
	volatile int16_t x236 = -99;
	volatile uint64_t t45 = 1036321LLU;

	t45 = (x233&((x234-x235)^x236));

	if (t45 != 18446744071925989376LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x239 = 14;
	uint16_t x240 = 15U;

	t46 = (x237&((x238-x239)^x240));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x244 = INT32_MIN;
	uint64_t t47 = 838575LLU;

	t47 = (x241&((x242-x243)^x244));

	if (t47 != 887212527343337472LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x249 = 829U;
	int32_t x250 = -561459;
	int8_t x251 = 0;
	static int32_t x252 = 77414;
	uint32_t t48 = 12067864U;

	t48 = (x249&((x250-x251)^x252));

	if (t48 != 41U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = -1;
	int64_t x254 = -1LL;
	uint8_t x255 = 1U;
	int8_t x256 = INT8_MIN;
	int64_t t49 = 13966304102499790LL;

	t49 = (x253&((x254-x255)^x256));

	if (t49 != 126LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x258 = -56961257;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t50 = 79942LL;

	t50 = (x257&((x258-x259)^x260));

	if (t50 != 22168LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x262 = 0;
	static volatile int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MIN;
	int64_t t51 = -266460635480LL;

	t51 = (x261&((x262-x263)^x264));

	if (t51 != 128LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = -1;
	uint64_t x266 = 4514418LLU;
	int8_t x268 = -1;
	uint64_t t52 = 113112068535255LLU;

	t52 = (x265&((x266-x267)^x268));

	if (t52 != 18446744073705132651LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x269 = -2;
	volatile int8_t x270 = INT8_MAX;
	static uint16_t x271 = 1U;
	int8_t x272 = -1;
	int32_t t53 = -3;

	t53 = (x269&((x270-x271)^x272));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = -16;
	int16_t x274 = -1;
	uint32_t t54 = 3U;

	t54 = (x273&((x274-x275)^x276));

	if (t54 != 43584U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x277 = -1;
	uint32_t x278 = 18771U;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t55 = 99908952191019LLU;

	t55 = (x277&((x278-x279)^x280));

	if (t55 != 18446744071562086740LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = INT32_MAX;
	int8_t x287 = INT8_MAX;
	uint64_t x288 = 204LLU;
	static uint64_t t56 = 747497508LLU;

	t56 = (x285&((x286-x287)^x288));

	if (t56 != 76LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x289 = 14686780641LLU;
	static volatile int64_t x290 = -1LL;
	int16_t x291 = 1;
	static uint8_t x292 = 0U;
	uint64_t t57 = 9724875748197LLU;

	t57 = (x289&((x290-x291)^x292));

	if (t57 != 14686780640LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x293 = -1;
	uint32_t x294 = 6U;
	uint32_t t58 = 6U;

	t58 = (x293&((x294-x295)^x296));

	if (t58 != 4294967288U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x299 = INT16_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t59 = 25710;

	t59 = (x297&((x298-x299)^x300));

	if (t59 != 48) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x301 = INT64_MIN;
	static int8_t x302 = INT8_MAX;
	volatile int64_t t60 = 3629063499378LL;

	t60 = (x301&((x302-x303)^x304));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = -7495436LL;
	int8_t x308 = -18;
	static volatile int64_t t61 = -6747702LL;

	t61 = (x305&((x306-x307)^x308));

	if (t61 != 2139988196LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x309 = 0;
	int32_t x310 = 15027899;
	int8_t x311 = -1;
	static uint8_t x312 = 2U;

	t62 = (x309&((x310-x311)^x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x313 = -1;
	uint32_t x314 = 29713U;
	int64_t x315 = INT64_MAX;
	static int16_t x316 = 514;

	t63 = (x313&((x314-x315)^x316));

	if (t63 != -9223372036854745584LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x317 = UINT16_MAX;
	static int64_t x318 = 5377429663LL;
	volatile uint8_t x319 = 80U;
	volatile int8_t x320 = -4;
	int64_t t64 = -518989948226769185LL;

	t64 = (x317&((x318-x319)^x320));

	if (t64 != 61363LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x321 = INT64_MIN;
	static int8_t x322 = INT8_MAX;
	int32_t x323 = -1;
	int64_t x324 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = (x321&((x322-x323)^x324));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x326 = UINT32_MAX;
	uint8_t x328 = UINT8_MAX;
	static uint32_t t66 = 6989683U;

	t66 = (x325&((x326-x327)^x328));

	if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = 502;
	int16_t x331 = 1567;
	int32_t x332 = INT32_MAX;
	static volatile uint32_t t67 = 39873U;

	t67 = (x329&((x330-x331)^x332));

	if (t67 != 2147484712U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x333 = -1LL;
	volatile uint64_t x334 = 0LLU;
	int8_t x335 = INT8_MAX;
	volatile uint64_t t68 = 1217582LLU;

	t68 = (x333&((x334-x335)^x336));

	if (t68 != 110LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x341 = -1;
	int32_t x344 = INT32_MIN;
	volatile int32_t t69 = -3234691;

	t69 = (x341&((x342-x343)^x344));

	if (t69 != 2147483600) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x345 = INT64_MAX;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = 0U;
	int64_t t70 = 1243577895930327803LL;

	t70 = (x345&((x346-x347)^x348));

	if (t70 != 2147450880LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x349 = 42U;
	int32_t x350 = -40845;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t71 = 325919376U;

	t71 = (x349&((x350-x351)^x352));

	if (t71 != 8U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x357 = 6542U;
	int16_t x358 = INT16_MIN;
	static int16_t x359 = INT16_MIN;
	int64_t t72 = -27LL;

	t72 = (x357&((x358-x359)^x360));

	if (t72 != 6542LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	int32_t x363 = -1;
	int8_t x364 = -5;
	int32_t t73 = -169;

	t73 = (x361&((x362-x363)^x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x365 = 7657222U;
	static int64_t x366 = 0LL;
	volatile uint8_t x367 = 3U;
	volatile int8_t x368 = -16;
	int64_t t74 = 1575735467692038390LL;

	t74 = (x365&((x366-x367)^x368));

	if (t74 != 4LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x369 = INT16_MIN;
	uint32_t x371 = 502U;
	static int16_t x372 = INT16_MIN;

	t75 = (x369&((x370-x371)^x372));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x374 = 22;
	uint32_t x375 = 67U;
	volatile uint32_t t76 = 621368222U;

	t76 = (x373&((x374-x375)^x376));

	if (t76 != 5506U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = -1;
	static volatile int16_t x378 = INT16_MAX;
	uint32_t x379 = 604672062U;
	static uint64_t x380 = UINT64_MAX;
	uint64_t t77 = 0LLU;

	t77 = (x377&((x378-x379)^x380));

	if (t77 != 18446744070019223614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	volatile int64_t x383 = -2696LL;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t78 = 197LLU;

	t78 = (x381&((x382-x383)^x384));

	if (t78 != 18446744073709483271LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 863361U;
	volatile int32_t x390 = -40;
	uint8_t x391 = UINT8_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile uint32_t t79 = 1U;

	t79 = (x389&((x390-x391)^x392));

	if (t79 != 863232U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int32_t x395 = INT32_MIN;
	volatile uint64_t t80 = 13873936891854044LLU;

	t80 = (x393&((x394-x395)^x396));

	if (t80 != 199547263042027520LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = 343756880U;
	volatile int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	uint32_t t81 = 1112241636U;

	t81 = (x397&((x398-x399)^x400));

	if (t81 != 343736320U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x401 = UINT16_MAX;
	static int16_t x403 = INT16_MIN;

	t82 = (x401&((x402-x403)^x404));

	if (t82 != 8728) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x405 = -1;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = 444778028689LLU;
	static volatile uint64_t t83 = 2236107596587607LLU;

	t83 = (x405&((x406-x407)^x408));

	if (t83 != 18444532110086006328LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x409 = UINT8_MAX;
	static volatile uint8_t x410 = 13U;
	volatile uint32_t x412 = UINT32_MAX;
	uint32_t t84 = 997116U;

	t84 = (x409&((x410-x411)^x412));

	if (t84 != 120U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x413 = 1511505U;
	uint32_t x415 = 1U;
	int8_t x416 = -1;
	uint32_t t85 = 35816U;

	t85 = (x413&((x414-x415)^x416));

	if (t85 != 1511504U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x418 = 5882U;
	static int64_t x420 = -1LL;
	volatile int64_t t86 = -1539810691578LL;

	t86 = (x417&((x418-x419)^x420));

	if (t86 != -5888LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x421 = INT16_MAX;
	volatile int32_t x422 = INT32_MIN;
	volatile int8_t x423 = INT8_MIN;
	int64_t t87 = 188025501090800LL;

	t87 = (x421&((x422-x423)^x424));

	if (t87 != 32639LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = INT64_MAX;
	int8_t x427 = INT8_MAX;
	volatile int64_t t88 = 8041096LL;

	t88 = (x425&((x426-x427)^x428));

	if (t88 != 23753LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = INT32_MIN;
	int16_t x431 = INT16_MIN;
	volatile int8_t x432 = 1;
	int32_t t89 = -26;

	t89 = (x429&((x430-x431)^x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x433 = UINT16_MAX;
	static int32_t x434 = INT32_MAX;
	uint16_t x435 = UINT16_MAX;
	int8_t x436 = INT8_MAX;

	t90 = (x433&((x434-x435)^x436));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x437 = 96098;
	static int8_t x438 = INT8_MIN;
	uint16_t x439 = UINT16_MAX;
	static uint64_t x440 = UINT64_MAX;
	static volatile uint64_t t91 = 647LLU;

	t91 = (x437&((x438-x439)^x440));

	if (t91 != 65634LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int32_t x442 = INT32_MAX;
	int32_t x444 = INT32_MIN;
	uint64_t t92 = 0LLU;

	t92 = (x441&((x442-x443)^x444));

	if (t92 != 18446744063231334442LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x448 = UINT8_MAX;
	int32_t t93 = -846869709;

	t93 = (x445&((x446-x447)^x448));

	if (t93 != -196608) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = -1;
	static int64_t x452 = INT64_MAX;

	t94 = (x449&((x450-x451)^x452));

	if (t94 != -9223372036854775587LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = INT64_MIN;
	static volatile int64_t x454 = INT64_MAX;
	uint16_t x455 = UINT16_MAX;
	int32_t x456 = 863745;

	t95 = (x453&((x454-x455)^x456));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = 121627946103384312LL;
	int32_t x458 = -4;
	static volatile uint8_t x459 = 11U;
	static uint64_t x460 = UINT64_MAX;
	static uint64_t t96 = 233793676672LLU;

	t96 = (x457&((x458-x459)^x460));

	if (t96 != 8LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x462 = 5002461LLU;
	int8_t x464 = -1;
	static volatile uint64_t t97 = 30557883LLU;

	t97 = (x461&((x462-x463)^x464));

	if (t97 != 18446744073704549153LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x465 = INT64_MAX;
	uint8_t x466 = 115U;
	static uint64_t x467 = UINT64_MAX;
	int32_t x468 = INT32_MIN;
	uint64_t t98 = 59689LLU;

	t98 = (x465&((x466-x467)^x468));

	if (t98 != 9223372034707292276LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x469 = 244;
	uint32_t x470 = 3720U;
	static int8_t x471 = INT8_MIN;
	uint32_t x472 = 56099972U;
	uint32_t t99 = 188226U;

	t99 = (x469&((x470-x471)^x472));

	if (t99 != 132U) { NG(); } else { ; }
	
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

