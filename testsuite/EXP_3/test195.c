#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
static uint8_t x3 = UINT8_MAX;
int64_t x9 = 277082049552692LL;
int16_t x16 = -1;
int16_t x22 = 85;
uint8_t x24 = UINT8_MAX;
uint64_t t6 = 26LLU;
int32_t x39 = -22517398;
volatile uint64_t t9 = 18820949431LLU;
int32_t x41 = -26005118;
static uint32_t t11 = 392U;
uint32_t x53 = 152857040U;
volatile int16_t x64 = -1;
static volatile int16_t x66 = -1;
volatile int32_t x68 = INT32_MIN;
static int16_t x69 = INT16_MIN;
volatile int32_t t15 = -2;
uint32_t x74 = 65322U;
static int32_t x76 = INT32_MIN;
volatile int64_t t17 = 3586608540385610LL;
volatile int8_t x82 = 3;
uint64_t x83 = 29LLU;
static volatile uint64_t t18 = 2853LLU;
int8_t x89 = -1;
volatile uint32_t x94 = 0U;
uint16_t x95 = 1U;
volatile uint64_t x96 = 4420562327269LLU;
volatile int64_t x101 = INT64_MIN;
uint64_t x107 = 107913242593469633LLU;
int16_t x108 = INT16_MIN;
uint16_t x116 = UINT16_MAX;
static volatile uint8_t x123 = UINT8_MAX;
int32_t x130 = -1;
int32_t t29 = 3352;
int32_t x137 = -1;
volatile uint32_t x139 = 0U;
int64_t x143 = -1LL;
int32_t t32 = -180306;
volatile uint16_t x165 = 46U;
volatile uint8_t x175 = UINT8_MAX;
int8_t x185 = -1;
int16_t x187 = -1;
volatile int64_t t38 = 2507470LL;
uint64_t x196 = UINT64_MAX;
int16_t x209 = 6;
int32_t x211 = -1;
volatile int8_t x212 = INT8_MAX;
static int64_t x223 = -1LL;
int64_t t45 = -547113837117401LL;
int8_t x229 = -2;
int32_t x257 = INT32_MAX;
uint16_t x259 = UINT16_MAX;
uint32_t x264 = 137979U;
uint8_t x265 = 0U;
int64_t x274 = -125408547LL;
uint16_t x275 = UINT16_MAX;
volatile int64_t x280 = INT64_MIN;
int64_t t54 = -2921544277LL;
int64_t x290 = INT64_MAX;
int64_t t56 = 57256479193768LL;
int8_t x300 = -47;
uint64_t t57 = 613239898876469341LLU;
int16_t x307 = 718;
uint32_t x315 = 53U;
int32_t x326 = -1;
static int8_t x336 = INT8_MIN;
static volatile uint64_t t63 = 754LLU;
uint64_t x338 = UINT64_MAX;
static volatile int8_t x340 = INT8_MIN;
uint32_t x359 = UINT32_MAX;
int16_t x367 = -1;
int64_t x378 = INT64_MIN;
int8_t x380 = -1;
uint32_t x383 = 199U;
int32_t x385 = -1;
int64_t x388 = -1LL;
uint64_t t75 = 972LLU;
uint16_t x397 = 1709U;
int64_t x401 = -1LL;
int8_t x410 = INT8_MIN;
int16_t x411 = INT16_MIN;
uint16_t x425 = UINT16_MAX;
uint64_t t81 = 3LLU;
int64_t x435 = -99LL;
int32_t x438 = INT32_MIN;
volatile int32_t x442 = INT32_MIN;
static int32_t x443 = -1;
uint32_t t84 = 77658U;
int8_t x447 = INT8_MIN;
volatile uint32_t t85 = 424U;
uint16_t x454 = 1753U;
int16_t x457 = INT16_MAX;
int16_t x478 = INT16_MIN;
int16_t x480 = INT16_MIN;
static volatile uint16_t x481 = UINT16_MAX;
volatile int64_t x483 = -276102LL;
static volatile uint64_t t93 = 1217344LLU;
volatile int32_t x486 = -1;
int8_t x487 = -1;
int32_t t94 = -191;
static int8_t x489 = -13;
int16_t x491 = -1;
static int8_t x495 = 21;
volatile int32_t t97 = 180677479;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	volatile int64_t x4 = INT64_MAX;
	static volatile int64_t t0 = -264408747531698LL;

	t0 = ((x1-x2)^(x3-x4));

	if (t0 != -2147483392LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -24;
	static uint8_t x6 = 0U;
	volatile uint16_t x7 = UINT16_MAX;
	uint8_t x8 = 0U;
	int32_t t1 = 1314300;

	t1 = ((x5-x6)^(x7-x8));

	if (t1 != -65513) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint64_t x11 = 13LLU;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 16732121021205289LLU;

	t2 = ((x9-x10)^(x11-x12));

	if (t2 != 9223649118904361273LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	volatile uint8_t x14 = 1U;
	int8_t x15 = 41;
	int32_t t3 = -8;

	t3 = ((x13-x14)^(x15-x16));

	if (t3 != -32811) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	volatile int16_t x18 = -1;
	uint8_t x19 = 0U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 979012;

	t4 = ((x17-x18)^(x19-x20));

	if (t4 != 2147418112) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int16_t x23 = -1;
	volatile int32_t t5 = 21504;

	t5 = ((x21-x22)^(x23-x24));

	if (t5 != -65366) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 59U;
	uint32_t x26 = 0U;
	uint64_t x27 = UINT64_MAX;
	static int32_t x28 = -6;

	t6 = ((x25-x26)^(x27-x28));

	if (t6 != 62LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	uint64_t x30 = 7802971899920583951LLU;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 27U;
	volatile uint64_t t7 = 860151265345354086LLU;

	t7 = ((x29-x30)^(x31-x32));

	if (t7 != 10643772174833224980LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = -228323770946LL;
	uint64_t x34 = 6LLU;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = INT8_MIN;
	static uint64_t t8 = 157LLU;

	t8 = ((x33-x34)^(x35-x36));

	if (t8 != 18446743845385780679LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	volatile uint64_t x38 = 1641LLU;
	uint64_t x40 = 75299081447LLU;

	t9 = ((x37-x38)^(x39-x40));

	if (t9 != 75321599253LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = -3;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 15U;
	uint32_t t10 = 264U;

	t10 = ((x41-x42)^(x43-x44));

	if (t10 != 26005109U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 595625U;

	t11 = ((x49-x50)^(x51-x52));

	if (t11 != 4294350423U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = 546;
	int16_t x55 = INT16_MAX;
	int8_t x56 = 12;
	uint32_t t12 = 59U;

	t12 = ((x53-x54)^(x55-x56));

	if (t12 != 152836189U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = UINT64_MAX;
	uint32_t x62 = 110969U;
	uint32_t x63 = 93961826U;
	static uint64_t t13 = 297273838507LLU;

	t13 = ((x61-x62)^(x63-x64));

	if (t13 != 18446744073615700197LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 65U;
	int64_t x67 = -1LL;
	volatile int64_t t14 = 4460896105LL;

	t14 = ((x65-x66)^(x67-x68));

	if (t14 != 2147483581LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = -323925990;
	static int8_t x71 = 30;
	int32_t x72 = INT32_MAX;

	t15 = ((x69-x70)^(x71-x72));

	if (t15 != -1823590407) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x73 = UINT8_MAX;
	int16_t x75 = INT16_MIN;
	uint32_t t16 = 259699U;

	t16 = ((x73-x74)^(x75-x76));

	if (t16 != 2147516885U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = 1798582297910065LL;
	int16_t x78 = 1947;
	volatile uint16_t x79 = 820U;
	volatile int32_t x80 = 0;

	t17 = ((x77-x78)^(x79-x80));

	if (t17 != 1798582297907362LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 2174674394073LLU;
	int64_t x84 = INT64_MIN;

	t18 = ((x81-x82)^(x83-x84));

	if (t18 != 9223374211529169867LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = 104634440139340LL;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;
	static int64_t t19 = -661395212LL;

	t19 = ((x89-x90)^(x91-x92));

	if (t19 != -104637841358157LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = 1422984;
	uint64_t t20 = 1986574924100544LLU;

	t20 = ((x93-x94)^(x95-x96));

	if (t20 != 18446739653146337172LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 56U;
	static int16_t x98 = INT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MAX;
	volatile uint64_t t21 = 50026787603LLU;

	t21 = ((x97-x98)^(x99-x100));

	if (t21 != 32697LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = -343;
	int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	volatile int64_t t22 = 1LL;

	t22 = ((x101-x102)^(x103-x104));

	if (t22 != 9223372036854743511LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x105 = 34U;
	volatile uint8_t x106 = 1U;
	static uint64_t t23 = 19691LLU;

	t23 = ((x105-x106)^(x107-x108));

	if (t23 != 107913242593502432LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = -522949139563076LL;
	volatile int16_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	uint64_t t24 = 21LLU;

	t24 = ((x113-x114)^(x115-x116));

	if (t24 != 522949139627453LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MIN;
	volatile int32_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int64_t t25 = 42818890475770LL;

	t25 = ((x117-x118)^(x119-x120));

	if (t25 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 15U;
	volatile int32_t x122 = -1;
	int8_t x124 = -1;
	int32_t t26 = -2081625;

	t26 = ((x121-x122)^(x123-x124));

	if (t26 != 272) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = INT16_MAX;
	int64_t x126 = -1LL;
	int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	volatile int64_t t27 = 84654690LL;

	t27 = ((x125-x126)^(x127-x128));

	if (t27 != 2147450879LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x129 = -1;
	int64_t x131 = 3902794989144195410LL;
	int8_t x132 = -1;
	volatile int64_t t28 = -3LL;

	t28 = ((x129-x130)^(x131-x132));

	if (t28 != 3902794989144195411LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MAX;
	int16_t x135 = 994;
	int8_t x136 = INT8_MIN;

	t29 = ((x133-x134)^(x135-x136));

	if (t29 != -33821) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x138 = INT32_MIN;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t30 = 61510U;

	t30 = ((x137-x138)^(x139-x140));

	if (t30 != 2147450879U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = UINT64_MAX;
	uint8_t x142 = 1U;
	int16_t x144 = -23;
	static uint64_t t31 = 296LLU;

	t31 = ((x141-x142)^(x143-x144));

	if (t31 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = 390;

	t32 = ((x145-x146)^(x147-x148));

	if (t32 != -65402) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 1743892344LLU;
	volatile int16_t x150 = INT16_MIN;
	int32_t x151 = -1;
	uint16_t x152 = 82U;
	static uint64_t t33 = 4615422057288LLU;

	t33 = ((x149-x150)^(x151-x152));

	if (t33 != 18446744071965626581LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x166 = -1;
	volatile uint64_t x167 = 217415095LLU;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t34 = 528498254639LLU;

	t34 = ((x165-x166)^(x167-x168));

	if (t34 != 9223372037072190872LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = -1;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = 3;
	int64_t t35 = -30166LL;

	t35 = ((x169-x170)^(x171-x172));

	if (t35 != 9223372036854710275LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x173 = -22;
	uint32_t x174 = 72343333U;
	static int64_t x176 = -18LL;
	int64_t t36 = 817429317LL;

	t36 = ((x173-x174)^(x175-x176));

	if (t36 != 4222624212LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x186 = UINT32_MAX;
	int16_t x188 = INT16_MAX;
	uint32_t t37 = 30U;

	t37 = ((x185-x186)^(x187-x188));

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = INT16_MAX;
	static uint32_t x190 = 123849U;
	volatile int32_t x191 = -1;
	int64_t x192 = 20187761209LL;

	t38 = ((x189-x190)^(x191-x192));

	if (t38 != -18466887184LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x193 = 1;
	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	uint64_t t39 = 558045696716503544LLU;

	t39 = ((x193-x194)^(x195-x196));

	if (t39 != 33025LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x197 = 98625U;
	volatile uint32_t x198 = UINT32_MAX;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = -43116653;
	uint32_t t40 = 6768U;

	t40 = ((x197-x198)^(x199-x200));

	if (t40 != 43018542U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = 218784;
	static volatile int32_t x206 = -1;
	int8_t x207 = -1;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t41 = 130600422;

	t41 = ((x205-x206)^(x207-x208));

	if (t41 != 218846) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x210 = UINT64_MAX;
	volatile uint64_t t42 = 40821LLU;

	t42 = ((x209-x210)^(x211-x212));

	if (t42 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = 7U;
	static volatile int16_t x214 = 11;
	static volatile int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = 3688230377904LLU;
	uint64_t t43 = 0LLU;

	t43 = ((x213-x214)^(x215-x216));

	if (t43 != 3690377861548LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x221 = -1;
	static uint8_t x222 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	int64_t t44 = 10862132562912951LL;

	t44 = ((x221-x222)^(x223-x224));

	if (t44 != -129LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x225 = -1LL;
	int8_t x226 = INT8_MAX;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 40U;

	t45 = ((x225-x226)^(x227-x228));

	if (t45 != -4294967080LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x230 = 4149U;
	volatile uint64_t x231 = 280884LLU;
	static uint64_t x232 = UINT64_MAX;
	uint64_t t46 = 1058543582LLU;

	t46 = ((x229-x230)^(x231-x232));

	if (t46 != 18446744073709266684LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x234 = -1;
	uint8_t x235 = 0U;
	int8_t x236 = 0;
	int64_t t47 = -117325614378564803LL;

	t47 = ((x233-x234)^(x235-x236));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = UINT32_MAX;
	volatile int32_t x255 = INT32_MIN;
	uint64_t x256 = 3LLU;
	uint64_t t48 = 7LLU;

	t48 = ((x253-x254)^(x255-x256));

	if (t48 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x258 = INT8_MAX;
	int32_t x260 = INT32_MAX;
	volatile int32_t t49 = -55318;

	t49 = ((x257-x258)^(x259-x260));

	if (t49 != -65664) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = UINT16_MAX;
	static int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MAX;
	volatile int64_t t50 = -852111023LL;

	t50 = ((x261-x262)^(x263-x264));

	if (t50 != -9223372034707495676LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x266 = -8048145;
	uint32_t x267 = 3481U;
	uint64_t x268 = 53LLU;
	uint64_t t51 = 406698651804812585LLU;

	t51 = ((x265-x266)^(x267-x268));

	if (t51 != 8045429LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x269 = 30713417994LL;
	int16_t x270 = -1322;
	int16_t x271 = 14411;
	int32_t x272 = INT32_MAX;
	static volatile int64_t t52 = -49664024LL;

	t52 = ((x269-x270)^(x271-x272));

	if (t52 != -31563600264LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x273 = 2U;
	static int8_t x276 = INT8_MIN;
	volatile int64_t t53 = -20724840041LL;

	t53 = ((x273-x274)^(x275-x276));

	if (t53 != 125343066LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x277 = 1181672U;
	uint8_t x278 = 1U;
	volatile int64_t x279 = INT64_MIN;

	t54 = ((x277-x278)^(x279-x280));

	if (t54 != 1181671LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x281 = 43523;
	int32_t x282 = INT32_MAX;
	volatile int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t55 = 432512640193230749LL;

	t55 = ((x281-x282)^(x283-x284));

	if (t55 != -9223372034707346940LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = -1LL;
	volatile int8_t x291 = INT8_MIN;
	volatile int32_t x292 = -1;

	t56 = ((x289-x290)^(x291-x292));

	if (t56 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	volatile uint8_t x298 = 1U;
	uint16_t x299 = 14U;

	t57 = ((x297-x298)^(x299-x300));

	if (t57 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	int32_t x308 = INT32_MAX;
	int32_t t58 = 16592126;

	t58 = ((x305-x306)^(x307-x308));

	if (t58 != 2147483087) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = INT32_MAX;
	volatile int64_t x310 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = -1LL;
	volatile int64_t t59 = 3307062659LL;

	t59 = ((x309-x310)^(x311-x312));

	if (t59 != -9223372034707291904LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x313 = 30LLU;
	int32_t x314 = INT32_MIN;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t60 = 3281342822163923485LLU;

	t60 = ((x313-x314)^(x315-x316));

	if (t60 != 2147516459LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x317 = INT16_MIN;
	static uint8_t x318 = 21U;
	int16_t x319 = -1;
	volatile int64_t x320 = 101396LL;
	volatile int64_t t61 = -815058540436514LL;

	t61 = ((x317-x318)^(x319-x320));

	if (t61 != 68608LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x325 = INT32_MIN;
	static int8_t x327 = 63;
	int32_t x328 = -1;
	volatile int32_t t62 = -42731450;

	t62 = ((x325-x326)^(x327-x328));

	if (t62 != -2147483583) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x333 = 74218313LLU;
	static uint16_t x334 = 7181U;
	int64_t x335 = 14343778LL;

	t63 = ((x333-x334)^(x335-x336));

	if (t63 != 79069662LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x337 = -1LL;
	int32_t x339 = -1;
	uint64_t t64 = 547080234487872LLU;

	t64 = ((x337-x338)^(x339-x340));

	if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = 471340883695624LLU;
	volatile uint64_t t65 = 1063650314814517LLU;

	t65 = ((x345-x346)^(x347-x348));

	if (t65 != 471340013266807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x349 = -786790195;
	static uint8_t x350 = 1U;
	int8_t x351 = -1;
	static int64_t x352 = INT64_MIN;
	static volatile int64_t t66 = 259612549158422757LL;

	t66 = ((x349-x350)^(x351-x352));

	if (t66 != -9223372036067985613LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = 667U;
	static volatile int8_t x360 = INT8_MIN;
	static uint32_t t67 = 3427410U;

	t67 = ((x357-x358)^(x359-x360));

	if (t67 != 4294966426U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x361 = 20962831LLU;
	uint16_t x362 = 103U;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t68 = 1902460760370540403LLU;

	t68 = ((x361-x362)^(x363-x364));

	if (t68 != 2126520919LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -1LL;
	volatile uint16_t x368 = 474U;
	int64_t t69 = -11055LL;

	t69 = ((x365-x366)^(x367-x368));

	if (t69 != -475LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 272U;
	int32_t x375 = -1;
	int16_t x376 = 13;
	volatile int32_t t70 = -2;

	t70 = ((x373-x374)^(x375-x376));

	if (t70 != 386) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x377 = 4178744003LLU;
	int8_t x379 = INT8_MIN;
	uint64_t t71 = 431LLU;

	t71 = ((x377-x378)^(x379-x380));

	if (t71 != 9223372032676031810LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x381 = -15577LL;
	int32_t x382 = INT32_MIN;
	static int32_t x384 = INT32_MIN;
	volatile int64_t t72 = -24681323907LL;

	t72 = ((x381-x382)^(x383-x384));

	if (t72 != 4294951904LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x386 = INT16_MIN;
	volatile uint8_t x387 = 6U;
	int64_t t73 = 6095487020350LL;

	t73 = ((x385-x386)^(x387-x388));

	if (t73 != 32760LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x389 = 14U;
	int16_t x390 = -198;
	uint16_t x391 = 32055U;
	uint32_t x392 = 213760U;
	static volatile uint32_t t74 = 7U;

	t74 = ((x389-x390)^(x391-x392));

	if (t74 != 4294785763U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x393 = 141994552974286660LLU;
	uint8_t x394 = 1U;
	static int16_t x395 = -870;
	int8_t x396 = -17;

	t75 = ((x393-x394)^(x395-x396));

	if (t75 != 18304749520735265768LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x398 = -1;
	int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MAX;
	int64_t t76 = -376293713LL;

	t76 = ((x397-x398)^(x399-x400));

	if (t76 != 9223372034707293870LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x402 = 1307LLU;
	uint16_t x403 = 3808U;
	int64_t x404 = -12484260LL;
	static volatile uint64_t t77 = 58LLU;

	t77 = ((x401-x402)^(x403-x404));

	if (t77 != 18446744073697064800LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = -1;
	uint8_t x412 = 5U;
	static int32_t t78 = -1966;

	t78 = ((x409-x410)^(x411-x412));

	if (t78 != -32892) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x414 = 812U;
	int16_t x415 = INT16_MAX;
	int32_t x416 = -1;
	uint32_t t79 = 0U;

	t79 = ((x413-x414)^(x415-x416));

	if (t79 != 4294966484U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x417 = INT32_MIN;
	volatile int64_t x418 = INT64_MIN;
	volatile int64_t x419 = -938345810737LL;
	static uint64_t x420 = 120431446299528LLU;
	volatile uint64_t t80 = 2872786857644113LLU;

	t80 = ((x417-x418)^(x419-x420));

	if (t80 != 9223493407876817223LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x426 = 7142660LLU;
	int64_t x427 = INT64_MIN;
	static int16_t x428 = INT16_MIN;

	t81 = ((x425-x426)^(x427-x428));

	if (t81 != 9223372036847731451LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x433 = -19;
	uint8_t x434 = 1U;
	int16_t x436 = INT16_MIN;
	volatile int64_t t82 = -6LL;

	t82 = ((x433-x434)^(x435-x436));

	if (t82 != -32655LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x437 = -1;
	int8_t x439 = -1;
	static int32_t x440 = 16;
	int32_t t83 = -6341;

	t83 = ((x437-x438)^(x439-x440));

	if (t83 != -2147483632) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x441 = 0U;
	uint8_t x444 = 5U;

	t84 = ((x441-x442)^(x443-x444));

	if (t84 != 2147483642U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x445 = 12127384U;
	volatile uint32_t x446 = UINT32_MAX;
	static int32_t x448 = -1;

	t85 = ((x445-x446)^(x447-x448));

	if (t85 != 4282839832U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x449 = INT8_MAX;
	volatile uint64_t x450 = UINT64_MAX;
	int32_t x451 = -1;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t86 = 5048899951924665LLU;

	t86 = ((x449-x450)^(x451-x452));

	if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x453 = 1;
	uint64_t x455 = 37LLU;
	int32_t x456 = INT32_MAX;
	volatile uint64_t t87 = 186532339652064725LLU;

	t87 = ((x453-x454)^(x455-x456));

	if (t87 != 2147481870LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x458 = INT16_MIN;
	uint16_t x459 = 6361U;
	uint16_t x460 = UINT16_MAX;
	static volatile int32_t t88 = -230;

	t88 = ((x457-x458)^(x459-x460));

	if (t88 != -6363) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x465 = 1;
	static uint16_t x466 = UINT16_MAX;
	uint32_t x467 = 1152652U;
	static uint32_t x468 = UINT32_MAX;
	volatile uint32_t t89 = 3934899U;

	t89 = ((x465-x466)^(x467-x468));

	if (t89 != 4293826191U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x469 = 439U;
	int8_t x470 = 6;
	static volatile uint64_t x471 = UINT64_MAX;
	static int8_t x472 = -1;
	uint64_t t90 = 44LLU;

	t90 = ((x469-x470)^(x471-x472));

	if (t90 != 433LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x473 = -1;
	static int16_t x474 = 60;
	uint32_t x475 = UINT32_MAX;
	uint64_t x476 = 62LLU;
	uint64_t t91 = 421LLU;

	t91 = ((x473-x474)^(x475-x476));

	if (t91 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x477 = INT32_MIN;
	int64_t x479 = -1LL;
	int64_t t92 = -523511751563956LL;

	t92 = ((x477-x478)^(x479-x480));

	if (t92 != -2147418113LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x482 = -3815595519397LL;
	uint64_t x484 = 433332656LLU;

	t93 = ((x481-x482)^(x483-x484));

	if (t93 != 18446740257717062254LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x485 = INT16_MIN;
	static int8_t x488 = -4;

	t94 = ((x485-x486)^(x487-x488));

	if (t94 != -32766) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x490 = INT16_MIN;
	volatile int16_t x492 = -6390;
	volatile int32_t t95 = -487420;

	t95 = ((x489-x490)^(x491-x492));

	if (t95 != 26374) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	int8_t x496 = INT8_MIN;
	int32_t t96 = 13531;

	t96 = ((x493-x494)^(x495-x496));

	if (t96 != 32533) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x497 = INT8_MIN;
	int8_t x498 = -1;
	int16_t x499 = 1499;
	static volatile uint8_t x500 = UINT8_MAX;

	t97 = ((x497-x498)^(x499-x500));

	if (t97 != -1187) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x501 = INT8_MIN;
	int16_t x502 = 0;
	static uint8_t x503 = 61U;
	uint32_t x504 = 231156811U;
	static uint32_t t98 = 660741688U;

	t98 = ((x501-x502)^(x503-x504));

	if (t98 != 231156850U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x505 = 9534802431872LLU;
	static uint8_t x506 = 4U;
	int16_t x507 = 5;
	int8_t x508 = INT8_MAX;
	uint64_t t99 = 40871172006671LLU;

	t99 = ((x505-x506)^(x507-x508));

	if (t99 != 18446734538907119866LLU) { NG(); } else { ; }
	
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

