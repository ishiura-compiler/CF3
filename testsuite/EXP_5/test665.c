#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MAX;
volatile uint64_t x12 = 15389153363LLU;
int16_t x15 = -399;
volatile int16_t x16 = 88;
static uint32_t t2 = 22796U;
volatile int32_t x17 = -1;
int8_t x29 = 29;
int16_t x30 = INT16_MIN;
volatile int64_t t7 = -291143LL;
int8_t x50 = INT8_MAX;
uint64_t x54 = 6359934588381LLU;
static int8_t x57 = INT8_MAX;
static volatile int64_t t13 = 229313463436LL;
int32_t x66 = INT32_MIN;
volatile int64_t x67 = INT64_MIN;
volatile int64_t t15 = 801739511216021103LL;
static int8_t x83 = 10;
uint32_t x87 = 6U;
uint8_t x94 = 12U;
int64_t x105 = -1LL;
int32_t x112 = -304782;
int8_t x114 = -55;
static volatile int32_t x122 = -1;
int8_t x123 = -11;
int64_t x125 = 3LL;
volatile int16_t x126 = INT16_MIN;
uint64_t x128 = UINT64_MAX;
uint64_t t29 = 351LLU;
int16_t x146 = INT16_MIN;
int32_t t32 = -92773577;
int16_t x149 = INT16_MIN;
static int64_t x152 = -4LL;
volatile int32_t x153 = INT32_MAX;
uint32_t x156 = UINT32_MAX;
uint64_t x157 = 1342LLU;
static volatile uint64_t t35 = 275151778816535910LLU;
volatile uint64_t t38 = 29LLU;
int64_t x182 = -1LL;
int64_t x183 = -221849681413LL;
int8_t x185 = -1;
uint32_t x199 = 32011U;
int32_t x210 = -24655;
volatile uint16_t x213 = 44U;
int64_t x214 = -1LL;
int32_t x215 = INT32_MIN;
int32_t x223 = -102168739;
static volatile uint8_t x224 = 68U;
int32_t x231 = -1;
static uint64_t x232 = 20488409762LLU;
volatile uint64_t t49 = 4333498959LLU;
int8_t x233 = 1;
static int8_t x235 = INT8_MIN;
static int64_t x236 = -59853654641LL;
volatile int32_t x240 = -192;
int64_t x241 = -1LL;
static int16_t x244 = -7705;
volatile int16_t x256 = -1;
volatile uint64_t t55 = 808777306521LLU;
int16_t x258 = -1;
int8_t x263 = INT8_MIN;
int32_t x270 = INT32_MIN;
uint64_t x271 = 117539618029249883LLU;
static volatile int32_t x281 = -1;
static int8_t x284 = -6;
static int8_t x285 = -1;
uint8_t x291 = UINT8_MAX;
uint32_t x296 = UINT32_MAX;
static uint64_t x298 = 123508868728LLU;
int64_t x301 = -1LL;
volatile int64_t t70 = 15975781LL;
int64_t x325 = 5LL;
volatile uint32_t x328 = UINT32_MAX;
int64_t t72 = 3269639899362LL;
uint64_t t73 = 20904752342284LLU;
volatile uint8_t x338 = UINT8_MAX;
int64_t x339 = -1LL;
static volatile uint64_t t75 = 7089085406359146857LLU;
uint16_t x341 = UINT16_MAX;
static int32_t x343 = -1;
volatile int64_t t76 = -6186057571238336LL;
int16_t x352 = INT16_MIN;
uint64_t x353 = UINT64_MAX;
int16_t x355 = INT16_MIN;
int8_t x356 = INT8_MIN;
int64_t x371 = -1LL;
static volatile uint64_t x375 = UINT64_MAX;
volatile uint64_t t82 = 79542450448LLU;
volatile uint8_t x377 = 3U;
static int32_t x387 = INT32_MIN;
volatile int64_t x403 = -1LL;
static int16_t x406 = -1;
uint64_t x407 = 26010658991LLU;
int8_t x408 = -7;
int8_t x416 = -1;
uint8_t x427 = 40U;
int64_t t93 = -67577037820LL;
int8_t x429 = -1;
uint32_t x430 = 75U;
uint32_t x433 = 7329569U;
int32_t x434 = INT32_MIN;
int64_t x441 = -996596352LL;
uint32_t x446 = UINT32_MAX;
volatile int32_t x447 = 86402314;
uint32_t t97 = 845U;
int64_t x450 = INT64_MIN;


void f0(void) {
	int16_t x5 = INT16_MIN;
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 533608632343491LLU;
	int8_t x8 = 0;
	volatile uint64_t t0 = 260283832853LLU;

	t0 = (x5-((x6/x7)^x8));

	if (t0 != 18446744073709484279LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x10 = -1LL;
	static int64_t x11 = -26308LL;
	static volatile uint64_t t1 = 2129808885949579238LLU;

	t1 = (x9-((x10/x11)^x12));

	if (t1 != 18446744058320398380LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 7U;
	uint32_t x14 = 15U;

	t2 = (x13-((x14/x15)^x16));

	if (t2 != 4294967215U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 211LLU;
	volatile uint8_t x20 = 8U;
	volatile uint64_t t3 = 124LLU;

	t3 = (x17-((x18/x19)^x20));

	if (t3 != 18359318746345999247LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MAX;
	uint64_t x23 = UINT64_MAX;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t4 = 38815LLU;

	t4 = (x21-((x22/x23)^x24));

	if (t4 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -27;
	uint32_t x26 = 59819698U;
	int16_t x27 = INT16_MAX;
	static int32_t x28 = INT32_MIN;
	static volatile uint32_t t5 = 1U;

	t5 = (x25-((x26/x27)^x28));

	if (t5 != 2147481796U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x31 = 1U;
	int8_t x32 = -1;
	volatile int32_t t6 = -6832;

	t6 = (x29-((x30/x31)^x32));

	if (t6 != -32738) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MIN;
	int16_t x34 = 6;
	int64_t x35 = -1LL;
	uint32_t x36 = 29027U;

	t7 = (x33-((x34/x35)^x36));

	if (t7 != 28903LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = 19022LL;
	int8_t x38 = INT8_MIN;
	int8_t x39 = 53;
	static int16_t x40 = INT16_MIN;
	static int64_t t8 = -7670LL;

	t8 = (x37-((x38/x39)^x40));

	if (t8 != -13744LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static uint16_t x42 = UINT16_MAX;
	volatile int32_t x43 = INT32_MIN;
	int64_t x44 = -1LL;
	int64_t t9 = -14167389359LL;

	t9 = (x41-((x42/x43)^x44));

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	static uint16_t x46 = 3355U;
	int8_t x47 = INT8_MAX;
	volatile uint64_t x48 = 82575LLU;
	uint64_t t10 = 248696293327844958LLU;

	t10 = (x45-((x46/x47)^x48));

	if (t10 != 18446744073709469034LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	volatile int16_t x51 = -67;
	int8_t x52 = INT8_MIN;
	static int32_t t11 = -5451;

	t11 = (x49-((x50/x51)^x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 1952LLU;
	volatile uint64_t t12 = 36562428292147190LLU;

	t12 = (x53-((x54/x55)^x56));

	if (t12 != 18446744073709549791LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = 260489LL;
	int64_t x59 = 18LL;
	int16_t x60 = -1;

	t13 = (x57-((x58/x59)^x60));

	if (t13 != 14599LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -2LL;
	int8_t x62 = -1;
	int16_t x63 = -126;
	volatile int32_t x64 = INT32_MIN;
	int64_t t14 = 7338092242125657LL;

	t14 = (x61-((x62/x63)^x64));

	if (t14 != 2147483646LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	volatile int32_t x68 = INT32_MAX;

	t15 = (x65-((x66/x67)^x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -47;
	int16_t x70 = -1;
	volatile uint32_t x71 = UINT32_MAX;
	volatile uint32_t x72 = UINT32_MAX;
	static uint32_t t16 = 4897U;

	t16 = (x69-((x70/x71)^x72));

	if (t16 != 4294967251U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = 7U;
	int64_t x76 = 1549118957169217548LL;
	int64_t t17 = 203800347792838815LL;

	t17 = (x73-((x74/x75)^x76));

	if (t17 != 519805021278339652LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = 390897;
	int16_t x78 = -25;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	int64_t t18 = -3272863053348521LL;

	t18 = (x77-((x78/x79)^x80));

	if (t18 != 2147874545LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 21U;
	int16_t x82 = 203;
	static int8_t x84 = -1;
	int32_t t19 = 224614782;

	t19 = (x81-((x82/x83)^x84));

	if (t19 != 42) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = 126LL;
	int16_t x88 = INT16_MAX;
	static int64_t t20 = 471LL;

	t20 = (x85-((x86/x87)^x88));

	if (t20 != -2147516394LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 2U;
	uint16_t x90 = UINT16_MAX;
	static int16_t x91 = INT16_MIN;
	static int32_t x92 = -1;
	int32_t t21 = -348159;

	t21 = (x89-((x90/x91)^x92));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	uint16_t x95 = 11199U;
	int64_t x96 = INT64_MIN;
	static uint64_t t22 = 3427LLU;

	t22 = (x93-((x94/x95)^x96));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -80682344407907LL;
	uint32_t x102 = 44800U;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	int64_t t23 = 4779782057506433LL;

	t23 = (x101-((x102/x103)^x104));

	if (t23 != -80684491891554LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x106 = -507398LL;
	int8_t x107 = -3;
	static int64_t x108 = INT64_MIN;
	static volatile int64_t t24 = 481LL;

	t24 = (x105-((x106/x107)^x108));

	if (t24 != 9223372036854606675LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	volatile int64_t t25 = -52535847LL;

	t25 = (x109-((x110/x111)^x112));

	if (t25 != -9223372036854471026LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	int16_t x115 = 448;
	uint64_t x116 = 3LLU;
	volatile uint64_t t26 = 672LLU;

	t26 = (x113-((x114/x115)^x116));

	if (t26 != 32764LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	static int64_t x118 = INT64_MIN;
	volatile int32_t x119 = INT32_MIN;
	static volatile int32_t x120 = -13536;
	int64_t t27 = 153471236LL;

	t27 = (x117-((x118/x119)^x120));

	if (t27 != 2147497184LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x121 = 33U;
	volatile int64_t x124 = 1030854LL;
	volatile int64_t t28 = -495237573221190014LL;

	t28 = (x121-((x122/x123)^x124));

	if (t28 != -1030821LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x127 = 35U;

	t29 = (x125-((x126/x127)^x128));

	if (t29 != 18446744073709550684LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = 996;
	int16_t x130 = -1;
	int8_t x131 = 19;
	static uint16_t x132 = UINT16_MAX;
	volatile int32_t t30 = -243;

	t30 = (x129-((x130/x131)^x132));

	if (t30 != -64539) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = 1;
	uint64_t x138 = UINT64_MAX;
	uint64_t x139 = 3043085734022260696LLU;
	int64_t x140 = INT64_MIN;
	uint64_t t31 = 466113LLU;

	t31 = (x137-((x138/x139)^x140));

	if (t31 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = -50;

	t32 = (x145-((x146/x147)^x148));

	if (t32 != 305) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	int64_t t33 = 5437LL;

	t33 = (x149-((x150/x151)^x152));

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = INT8_MAX;
	int8_t x155 = -20;
	uint32_t t34 = 132U;

	t34 = (x153-((x154/x155)^x156));

	if (t34 != 2147483642U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = 0;
	uint64_t x159 = 18352241LLU;
	static volatile int64_t x160 = INT64_MAX;

	t35 = (x157-((x158/x159)^x160));

	if (t35 != 9223372036854777151LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 99747915199LLU;
	uint32_t x162 = 7989621U;
	volatile int8_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	static volatile uint64_t t36 = 442704631LLU;

	t36 = (x161-((x162/x163)^x164));

	if (t36 != 95452947904LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile int64_t x166 = INT64_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile int64_t x168 = INT64_MIN;
	int64_t t37 = 598795623047632313LL;

	t37 = (x165-((x166/x167)^x168));

	if (t37 != 9187201948288253824LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -1;
	uint64_t x170 = 94156750447LLU;
	int32_t x171 = -1;
	int64_t x172 = INT64_MIN;

	t38 = (x169-((x170/x171)^x172));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = UINT16_MAX;
	static int64_t x174 = 5333252LL;
	volatile uint8_t x175 = 1U;
	volatile uint16_t x176 = 2011U;
	volatile int64_t t39 = -1LL;

	t39 = (x173-((x174/x175)^x176));

	if (t39 != -5269216LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -1;
	int8_t x184 = -3;
	static int64_t t40 = -48LL;

	t40 = (x181-((x182/x183)^x184));

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x186 = 343101973LLU;
	int16_t x187 = -14277;
	uint64_t x188 = UINT64_MAX;
	uint64_t t41 = 2494444962LLU;

	t41 = (x185-((x186/x187)^x188));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 0U;
	int8_t x190 = INT8_MIN;
	static uint32_t x191 = 13315U;
	int64_t x192 = INT64_MIN;
	int64_t t42 = -2LL;

	t42 = (x189-((x190/x191)^x192));

	if (t42 != 9223372036854453242LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = 2U;
	int32_t x195 = -1;
	uint8_t x196 = 90U;
	volatile int64_t t43 = 47565041LL;

	t43 = (x193-((x194/x195)^x196));

	if (t43 != -9223372036854775716LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 3U;
	volatile int32_t x198 = 32882;
	int8_t x200 = INT8_MAX;
	static volatile uint32_t t44 = 19751U;

	t44 = (x197-((x198/x199)^x200));

	if (t44 != 4294967173U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MAX;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = 534806512LLU;
	uint64_t t45 = 55125LLU;

	t45 = (x209-((x210/x211)^x212));

	if (t45 != 18446744073174777871LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x216 = 44U;
	static int64_t t46 = -1440353407577LL;

	t46 = (x213-((x214/x215)^x216));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = 1;
	int8_t x218 = 1;
	uint64_t x219 = 382447207LLU;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t47 = 236517LLU;

	t47 = (x217-((x218/x219)^x220));

	if (t47 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = 665LL;
	int8_t x222 = -1;
	static int64_t t48 = -26887072LL;

	t48 = (x221-((x222/x223)^x224));

	if (t48 != 597LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = 718346138059711LL;
	int32_t x230 = INT32_MAX;

	t49 = (x229-((x230/x231)^x232));

	if (t49 != 718366451839260LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x234 = UINT8_MAX;
	static volatile int64_t t50 = 587930349390323LL;

	t50 = (x233-((x234/x235)^x236));

	if (t50 != -59853654639LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x237 = UINT8_MAX;
	static uint64_t x238 = UINT64_MAX;
	uint32_t x239 = UINT32_MAX;
	volatile uint64_t t51 = 11013100101LLU;

	t51 = (x237-((x238/x239)^x240));

	if (t51 != 4294967742LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x242 = INT32_MIN;
	uint8_t x243 = 90U;
	int64_t t52 = 148781368LL;

	t52 = (x241-((x242/x243)^x244));

	if (t52 != -23857369LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x245 = 60474961U;
	volatile uint8_t x246 = UINT8_MAX;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 291U;
	volatile uint32_t t53 = 217040U;

	t53 = (x245-((x246/x247)^x248));

	if (t53 != 60475253U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = INT64_MIN;
	static int64_t x250 = 790LL;
	static int32_t x251 = INT32_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t54 = 62699280239190769LLU;

	t54 = (x249-((x250/x251)^x252));

	if (t54 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x253 = 13108142077738LLU;
	uint16_t x254 = 27804U;
	uint32_t x255 = 388711U;

	t55 = (x253-((x254/x255)^x256));

	if (t55 != 13103847110443LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MIN;
	int32_t x259 = INT32_MAX;
	int32_t x260 = -1;
	volatile int32_t t56 = 387;

	t56 = (x257-((x258/x259)^x260));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x261 = -3;
	int8_t x262 = INT8_MAX;
	int32_t x264 = 0;
	volatile int32_t t57 = 9;

	t57 = (x261-((x262/x263)^x264));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MIN;
	uint16_t x266 = 1U;
	uint64_t x267 = UINT64_MAX;
	volatile int32_t x268 = -1;
	volatile uint64_t t58 = 252679460290176838LLU;

	t58 = (x265-((x266/x267)^x268));

	if (t58 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x269 = 1U;
	int8_t x272 = INT8_MIN;
	volatile uint64_t t59 = 2099372LLU;

	t59 = (x269-((x270/x271)^x272));

	if (t59 != 229LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = -336946929;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -1;
	int32_t t60 = 1;

	t60 = (x273-((x274/x275)^x276));

	if (t60 != -336946928) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MIN;
	static int16_t x278 = -1;
	uint8_t x279 = 3U;
	static volatile int8_t x280 = INT8_MIN;
	int64_t t61 = -7561767558435LL;

	t61 = (x277-((x278/x279)^x280));

	if (t61 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x282 = 3U;
	static volatile uint32_t x283 = 34U;
	static volatile uint32_t t62 = 354U;

	t62 = (x281-((x282/x283)^x284));

	if (t62 != 5U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MAX;
	uint32_t x288 = 15277086U;
	static volatile uint32_t t63 = 1509899960U;

	t63 = (x285-((x286/x287)^x288));

	if (t63 != 15277086U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = -1LL;
	volatile uint32_t x290 = 25U;
	int16_t x292 = -1;
	volatile int64_t t64 = 443721656276799982LL;

	t64 = (x289-((x290/x291)^x292));

	if (t64 != -4294967296LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = 21;
	int8_t x295 = INT8_MAX;
	volatile int64_t t65 = 188LL;

	t65 = (x293-((x294/x295)^x296));

	if (t65 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x299 = 74U;
	volatile int32_t x300 = 1700130;
	volatile uint64_t t66 = 41708062858LLU;

	t66 = (x297-((x298/x299)^x300));

	if (t66 != 18446744072042154996LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x302 = -1;
	int16_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int64_t t67 = -29675LL;

	t67 = (x301-((x302/x303)^x304));

	if (t67 != 126LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = 11257304;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	static volatile int64_t x312 = INT64_MIN;
	volatile int64_t t68 = -33005406205492546LL;

	t68 = (x309-((x310/x311)^x312));

	if (t68 != -9223231297207646760LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = -17LL;
	volatile uint8_t x314 = 19U;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -185814;
	int64_t t69 = 143757580763177592LL;

	t69 = (x313-((x314/x315)^x316));

	if (t69 != 185797LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x317 = 230;
	volatile int64_t x318 = INT64_MAX;
	volatile int64_t x319 = INT64_MAX;
	uint32_t x320 = 726U;

	t70 = (x317-((x318/x319)^x320));

	if (t70 != -497LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x321 = 607U;
	uint32_t x322 = 13079U;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = 2;
	static uint32_t t71 = 43337094U;

	t71 = (x321-((x322/x323)^x324));

	if (t71 != 605U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x326 = -3;
	volatile int16_t x327 = -7;

	t72 = (x325-((x326/x327)^x328));

	if (t72 != -4294967290LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x329 = INT32_MAX;
	static int64_t x330 = INT64_MAX;
	static uint64_t x331 = 57854696596680LLU;
	int64_t x332 = -86934299103281LL;

	t73 = (x329-((x330/x331)^x332));

	if (t73 != 86936446713487LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = UINT16_MAX;
	static int16_t x334 = -1;
	int8_t x335 = -6;
	static int8_t x336 = -1;
	int32_t t74 = -75448;

	t74 = (x333-((x334/x335)^x336));

	if (t74 != 65536) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x337 = 264109220903245LLU;
	static int32_t x340 = INT32_MIN;

	t75 = (x337-((x338/x339)^x340));

	if (t75 != 264107073419852LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x342 = -5322LL;
	static int8_t x344 = 46;

	t76 = (x341-((x342/x343)^x344));

	if (t76 != 60187LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = -1LL;
	uint16_t x346 = 6666U;
	int32_t x347 = INT32_MIN;
	int16_t x348 = 1;
	int64_t t77 = 96537070LL;

	t77 = (x345-((x346/x347)^x348));

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int64_t x350 = 1533543739869616573LL;
	int8_t x351 = INT8_MIN;
	int64_t t78 = -2368943LL;

	t78 = (x349-((x350/x351)^x352));

	if (t78 != -11980806172743758LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x354 = -1;
	volatile uint64_t t79 = 8502385527LLU;

	t79 = (x353-((x354/x355)^x356));

	if (t79 != 127LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = 1238U;
	static uint32_t x362 = 4U;
	static int8_t x363 = -21;
	int8_t x364 = INT8_MIN;
	volatile uint32_t t80 = 6126369U;

	t80 = (x361-((x362/x363)^x364));

	if (t80 != 1366U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x369 = 15U;
	int16_t x370 = 20;
	uint8_t x372 = 2U;
	volatile int64_t t81 = -18148927115635LL;

	t81 = (x369-((x370/x371)^x372));

	if (t81 != 33LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MAX;
	int32_t x376 = INT32_MIN;

	t82 = (x373-((x374/x375)^x376));

	if (t82 != 2147483775LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x378 = INT64_MAX;
	static int64_t x379 = -1LL;
	volatile int64_t x380 = INT64_MIN;
	int64_t t83 = 2068233320LL;

	t83 = (x377-((x378/x379)^x380));

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MIN;
	static uint8_t x382 = 94U;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	int64_t t84 = 242LL;

	t84 = (x381-((x382/x383)^x384));

	if (t84 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 110U;
	int16_t x386 = INT16_MAX;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t85 = -1775534;

	t85 = (x385-((x386/x387)^x388));

	if (t85 != -2147483537) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x389 = 1581U;
	int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = 4;
	int64_t t86 = 27510LL;

	t86 = (x389-((x390/x391)^x392));

	if (t86 != -281474976709079LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x393 = 67078243120LL;
	uint8_t x394 = UINT8_MAX;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	int64_t t87 = -13LL;

	t87 = (x393-((x394/x395)^x396));

	if (t87 != 67078275888LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = UINT64_MAX;
	uint32_t x398 = 1U;
	static uint32_t x399 = UINT32_MAX;
	int32_t x400 = 4696;
	uint64_t t88 = 228975LLU;

	t88 = (x397-((x398/x399)^x400));

	if (t88 != 18446744073709546919LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = -1LL;
	uint16_t x402 = 6613U;
	uint64_t x404 = 344LLU;
	uint64_t t89 = 6353270181751809516LLU;

	t89 = (x401-((x402/x403)^x404));

	if (t89 != 6284LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x405 = 75LLU;
	static uint64_t t90 = 410190038993082108LLU;

	t90 = (x405-((x406/x407)^x408));

	if (t90 != 709199486LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = 1;
	uint32_t x410 = 9U;
	static uint16_t x411 = UINT16_MAX;
	uint8_t x412 = 24U;
	uint32_t t91 = 39176235U;

	t91 = (x409-((x410/x411)^x412));

	if (t91 != 4294967273U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int64_t x414 = INT64_MIN;
	static int32_t x415 = 324847;
	uint64_t t92 = 2097LLU;

	t92 = (x413-((x414/x415)^x416));

	if (t92 != 18446715680736746404LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x425 = INT64_MIN;
	volatile int64_t x426 = INT64_MIN;
	uint16_t x428 = 3U;

	t93 = (x425-((x426/x427)^x428));

	if (t93 != -8992787735933406414LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x431 = -9046568826LL;
	static uint32_t x432 = 8429U;
	volatile int64_t t94 = 167239773559619LL;

	t94 = (x429-((x430/x431)^x432));

	if (t94 != -8430LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x435 = 784227LLU;
	int64_t x436 = -13022918417LL;
	uint64_t t95 = 307789238LLU;

	t95 = (x433-((x434/x435)^x436));

	if (t95 != 23535226650646LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x442 = 16088344211265573LLU;
	int8_t x443 = -1;
	volatile int32_t x444 = INT32_MIN;
	volatile uint64_t t96 = 6884076070148695487LLU;

	t96 = (x441-((x442/x443)^x444));

	if (t96 != 1150887296LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -6;
	int32_t x448 = INT32_MIN;

	t97 = (x445-((x446/x447)^x448));

	if (t97 != 2147483593U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = -1181758;
	int8_t x451 = 3;
	int16_t x452 = -1;
	static volatile int64_t t98 = -657892902979092039LL;

	t98 = (x449-((x450/x451)^x452));

	if (t98 != -3074457345619440359LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x453 = UINT16_MAX;
	volatile int8_t x454 = 6;
	volatile int16_t x455 = 6172;
	int8_t x456 = INT8_MIN;
	volatile int32_t t99 = -1680;

	t99 = (x453-((x454/x455)^x456));

	if (t99 != 65663) { NG(); } else { ; }
	
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

