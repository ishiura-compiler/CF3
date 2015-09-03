#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x2 = UINT8_MAX;
int64_t x12 = INT64_MIN;
int16_t x15 = INT16_MIN;
uint8_t x16 = 55U;
uint64_t x19 = 7863LLU;
uint16_t x24 = UINT16_MAX;
uint64_t x30 = 460807LLU;
static int16_t x34 = 12;
static int8_t x35 = INT8_MAX;
volatile int16_t x36 = INT16_MIN;
volatile int8_t x45 = -1;
uint16_t x46 = UINT16_MAX;
uint32_t x50 = 376201U;
uint32_t x58 = UINT32_MAX;
int32_t x65 = INT32_MIN;
int32_t x69 = INT32_MAX;
volatile uint32_t x70 = 22U;
volatile int64_t x71 = 206284964141824138LL;
int32_t x74 = INT32_MIN;
volatile uint32_t t17 = UINT32_MAX;
uint64_t x90 = 243LLU;
volatile int32_t x106 = INT32_MAX;
int64_t t25 = INT64_MIN;
static volatile int8_t x127 = INT8_MIN;
volatile int64_t x132 = 242669LL;
uint32_t x134 = UINT32_MAX;
int32_t x139 = -356829;
volatile uint64_t t30 = 60835565844891LLU;
static uint64_t x143 = UINT64_MAX;
uint64_t x145 = 57060270LLU;
static uint8_t x158 = UINT8_MAX;
int16_t x159 = -1;
uint64_t x169 = 8486361882731LLU;
int8_t x182 = -1;
int16_t x184 = 0;
int8_t x188 = -1;
int8_t x191 = -1;
int32_t x192 = -646250;
int64_t t42 = 1354863LL;
int8_t x199 = INT8_MIN;
volatile int8_t x201 = INT8_MAX;
static int8_t x206 = 11;
uint64_t t46 = 2650194721LLU;
int32_t t48 = 1555593;
uint64_t x229 = UINT64_MAX;
volatile int16_t x247 = INT16_MIN;
static int16_t x248 = INT16_MIN;
uint32_t x250 = 2424988U;
uint64_t x251 = UINT64_MAX;
static int8_t x260 = INT8_MAX;
static volatile uint16_t x261 = 124U;
static int8_t x267 = INT8_MIN;
uint16_t x269 = 15U;
int32_t t62 = 579130915;
int8_t x273 = INT8_MAX;
volatile uint32_t x274 = 15U;
static int16_t x276 = INT16_MIN;
static int64_t x277 = INT64_MIN;
uint32_t x278 = 0U;
int32_t x280 = -1;
uint16_t x288 = UINT16_MAX;
static volatile int32_t t66 = 6859934;
volatile uint32_t t68 = UINT32_MAX;
uint8_t x297 = 2U;
static uint32_t x299 = 1078U;
static uint32_t x300 = UINT32_MAX;
static volatile int8_t x302 = -1;
static int32_t x304 = INT32_MAX;
volatile int32_t t70 = 61;
uint32_t x308 = 29659U;
int64_t x312 = INT64_MIN;
volatile int32_t t72 = -64760;
uint16_t x315 = 234U;
uint32_t t73 = 2U;
int64_t x328 = -1LL;
int16_t x330 = INT16_MIN;
uint8_t x334 = UINT8_MAX;
int64_t t78 = INT64_MIN;
uint8_t x348 = 13U;
int64_t x351 = INT64_MIN;
uint8_t x353 = UINT8_MAX;
volatile int64_t x358 = -2617369581033757846LL;
volatile uint8_t x359 = 103U;
uint32_t x360 = 632U;
static volatile uint64_t t84 = UINT64_MAX;
int8_t x373 = -1;
uint16_t x375 = UINT16_MAX;
volatile int64_t x378 = -1LL;
volatile int32_t x386 = INT32_MIN;
volatile int16_t x411 = INT16_MAX;
static int32_t x413 = INT32_MAX;
static int8_t x414 = INT8_MIN;
uint32_t x422 = UINT32_MAX;
int32_t x429 = 283;
int64_t x430 = INT64_MIN;


void f0(void) {
	int16_t x1 = 0;
	int16_t x3 = INT16_MIN;
	static uint32_t x4 = 88684U;
	int32_t t0 = 94;

	t0 = (x1-((x2+x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int16_t x10 = INT16_MAX;
	volatile int64_t x11 = 4978842943882LL;
	int32_t t1 = -29870997;

	t1 = (x9-((x10+x11)==x12));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = INT32_MIN;
	static int8_t x14 = -1;
	int32_t t2 = INT32_MIN;

	t2 = (x13-((x14+x15)==x16));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint16_t x18 = 59U;
	uint32_t x20 = 356241619U;
	int64_t t3 = INT64_MIN;

	t3 = (x17-((x18+x19)==x20));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 992259667931722556LL;
	volatile int8_t x22 = INT8_MIN;
	static uint8_t x23 = UINT8_MAX;
	static int64_t t4 = -1872816648405693LL;

	t4 = (x21-((x22+x23)==x24));

	if (t4 != 992259667931722556LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	volatile uint8_t x27 = UINT8_MAX;
	int16_t x28 = 829;
	volatile int32_t t5 = 10138166;

	t5 = (x25-((x26+x27)==x28));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x31 = -5;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = -4107837;

	t6 = (x29-((x30+x31)==x32));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -994799102;
	int32_t t7 = -64125179;

	t7 = (x33-((x34+x35)==x36));

	if (t7 != -994799102) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 134077;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 2061664283951LLU;
	int32_t x40 = INT32_MIN;
	volatile int32_t t8 = -14785;

	t8 = (x37-((x38+x39)==x40));

	if (t8 != 134077) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MAX;
	int64_t x42 = INT64_MIN;
	static int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MAX;
	volatile int32_t t9 = -45810;

	t9 = (x41-((x42+x43)==x44));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x47 = -52;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 33178328;

	t10 = (x45-((x46+x47)==x48));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 183375U;
	uint64_t x51 = 9747LLU;
	static int64_t x52 = -1LL;
	volatile uint32_t t11 = 1220959444U;

	t11 = (x49-((x50+x51)==x52));

	if (t11 != 183375U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t12 = 8950760;

	t12 = (x53-((x54+x55)==x56));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -35;
	uint64_t x59 = 994LLU;
	int64_t x60 = INT64_MIN;
	int32_t t13 = 0;

	t13 = (x57-((x58+x59)==x60));

	if (t13 != -35) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x61 = -1;
	volatile int8_t x62 = 56;
	int16_t x63 = INT16_MAX;
	static volatile uint16_t x64 = 178U;
	static int32_t t14 = 456420117;

	t14 = (x61-((x62+x63)==x64));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x66 = INT16_MIN;
	static uint8_t x67 = 60U;
	uint64_t x68 = 178LLU;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x65-((x66+x67)==x68));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x72 = 507371561960LL;
	int32_t t16 = INT32_MAX;

	t16 = (x69-((x70+x71)==x72));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x73 = UINT32_MAX;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = 11;

	t17 = (x73-((x74+x75)==x76));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 19U;
	int64_t x82 = -1LL;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MAX;
	static volatile uint32_t t18 = 94U;

	t18 = (x81-((x82+x83)==x84));

	if (t18 != 19U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = -28;
	int64_t x86 = -1123LL;
	volatile int64_t x87 = 1798843544LL;
	static int16_t x88 = INT16_MIN;
	static volatile int32_t t19 = 676746364;

	t19 = (x85-((x86+x87)==x88));

	if (t19 != -28) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x91 = INT8_MIN;
	volatile int16_t x92 = 7331;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x89-((x90+x91)==x92));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 22411LL;
	int16_t x94 = -1;
	int64_t x95 = -5738053791227LL;
	volatile uint16_t x96 = 2128U;
	static volatile int64_t t21 = -30LL;

	t21 = (x93-((x94+x95)==x96));

	if (t21 != 22411LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -1;
	int32_t x103 = INT32_MAX;
	uint8_t x104 = 0U;
	int32_t t22 = 233925127;

	t22 = (x101-((x102+x103)==x104));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 0U;
	int32_t x107 = -1;
	volatile uint32_t x108 = UINT32_MAX;
	volatile int32_t t23 = 3;

	t23 = (x105-((x106+x107)==x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 837U;
	static uint64_t x111 = UINT64_MAX;
	int16_t x112 = -19;
	volatile int32_t t24 = 81114;

	t24 = (x109-((x110+x111)==x112));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = 9629070LL;
	static int32_t x119 = INT32_MIN;
	static int32_t x120 = 12145487;

	t25 = (x117-((x118+x119)==x120));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x121 = UINT64_MAX;
	uint32_t x122 = UINT32_MAX;
	volatile uint32_t x123 = 32711322U;
	uint8_t x124 = UINT8_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = (x121-((x122+x123)==x124));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x125 = INT64_MIN;
	static uint32_t x126 = 3224U;
	int64_t x128 = -1LL;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x125-((x126+x127)==x128));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x129 = UINT16_MAX;
	static int64_t x130 = -5247078805859347LL;
	static int16_t x131 = INT16_MIN;
	int32_t t28 = -29;

	t28 = (x129-((x130+x131)==x132));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x133 = INT8_MIN;
	static uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t29 = 5361321;

	t29 = (x133-((x134+x135)==x136));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 7069370063LLU;
	int32_t x138 = -1027389;
	int16_t x140 = INT16_MIN;

	t30 = (x137-((x138+x139)==x140));

	if (t30 != 7069370063LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = -1LL;
	volatile int8_t x142 = 0;
	int64_t x144 = 234641252LL;
	int64_t t31 = -8151LL;

	t31 = (x141-((x142+x143)==x144));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x146 = 120712300LLU;
	int64_t x147 = INT64_MAX;
	int32_t x148 = -1;
	volatile uint64_t t32 = 0LLU;

	t32 = (x145-((x146+x147)==x148));

	if (t32 != 57060270LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 5248;
	static uint16_t x150 = 1U;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 381U;
	int32_t t33 = 1;

	t33 = (x149-((x150+x151)==x152));

	if (t33 != 5248) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = INT16_MIN;
	static uint32_t x154 = 1601800U;
	static int16_t x155 = -1088;
	int64_t x156 = INT64_MAX;
	volatile int32_t t34 = -440742368;

	t34 = (x153-((x154+x155)==x156));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 210238U;
	int8_t x160 = INT8_MIN;
	static volatile uint32_t t35 = 1397U;

	t35 = (x157-((x158+x159)==x160));

	if (t35 != 210238U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	int8_t x162 = -1;
	int16_t x163 = -1;
	static int32_t x164 = INT32_MAX;
	volatile int32_t t36 = 21503;

	t36 = (x161-((x162+x163)==x164));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MIN;
	static uint32_t x166 = 163882632U;
	volatile uint32_t x167 = 29823U;
	static int16_t x168 = INT16_MIN;
	int64_t t37 = INT64_MIN;

	t37 = (x165-((x166+x167)==x168));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = INT8_MIN;
	uint8_t x171 = 0U;
	int16_t x172 = -1;
	static uint64_t t38 = 5743688LLU;

	t38 = (x169-((x170+x171)==x172));

	if (t38 != 8486361882731LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MIN;
	static int32_t x179 = -44;
	int8_t x180 = INT8_MAX;
	static volatile uint32_t t39 = UINT32_MAX;

	t39 = (x177-((x178+x179)==x180));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x181 = -45196LL;
	uint16_t x183 = 26812U;
	volatile int64_t t40 = 12729501727LL;

	t40 = (x181-((x182+x183)==x184));

	if (t40 != -45196LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = INT8_MIN;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = 2097696;
	static int32_t t41 = 4;

	t41 = (x185-((x186+x187)==x188));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -1LL;
	uint16_t x190 = 6227U;

	t42 = (x189-((x190+x191)==x192));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = 445;
	static int16_t x194 = INT16_MIN;
	int32_t x195 = -1;
	int64_t x196 = 38801298355LL;
	volatile int32_t t43 = 118613429;

	t43 = (x193-((x194+x195)==x196));

	if (t43 != 445) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 491;
	uint32_t x198 = 106643U;
	uint8_t x200 = UINT8_MAX;
	int32_t t44 = -280431110;

	t44 = (x197-((x198+x199)==x200));

	if (t44 != 491) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int32_t x204 = 4762;
	int32_t t45 = -1643774;

	t45 = (x201-((x202+x203)==x204));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 98LLU;
	static int32_t x207 = INT32_MIN;
	static int64_t x208 = INT64_MIN;

	t46 = (x205-((x206+x207)==x208));

	if (t46 != 98LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = -34;
	int64_t x211 = -1LL;
	uint64_t x212 = 144360203LLU;
	volatile int32_t t47 = -1912;

	t47 = (x209-((x210+x211)==x212));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x213 = -2;
	int32_t x214 = 830397;
	int8_t x215 = -1;
	uint64_t x216 = 27002936215922680LLU;

	t48 = (x213-((x214+x215)==x216));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x217 = -1;
	volatile int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t49 = -7882;

	t49 = (x217-((x218+x219)==x220));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x221 = UINT16_MAX;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -9110;
	uint64_t x224 = 59499873701LLU;
	int32_t t50 = 2;

	t50 = (x221-((x222+x223)==x224));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x225 = 0U;
	uint8_t x226 = 44U;
	uint16_t x227 = 24540U;
	volatile int16_t x228 = -6991;
	volatile int32_t t51 = 0;

	t51 = (x225-((x226+x227)==x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x230 = INT8_MIN;
	volatile int32_t x231 = INT32_MAX;
	static int8_t x232 = -1;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x229-((x230+x231)==x232));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = 917339;
	static volatile int64_t x234 = INT64_MIN;
	uint16_t x235 = 2411U;
	uint64_t x236 = 2581574185227LLU;
	int32_t t53 = 1358384;

	t53 = (x233-((x234+x235)==x236));

	if (t53 != 917339) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = 9313889162098LL;
	int64_t x238 = 416137240LL;
	uint64_t x239 = 91110929602138409LLU;
	int32_t x240 = INT32_MIN;
	static int64_t t54 = 7859992608175LL;

	t54 = (x237-((x238+x239)==x240));

	if (t54 != 9313889162098LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = 181;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MAX;
	uint64_t x244 = 2187149934540351682LLU;
	volatile int32_t t55 = 402;

	t55 = (x241-((x242+x243)==x244));

	if (t55 != 181) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x245 = 7310688084723158190LLU;
	static uint8_t x246 = 15U;
	volatile uint64_t t56 = 1740194LLU;

	t56 = (x245-((x246+x247)==x248));

	if (t56 != 7310688084723158190LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	int16_t x252 = -115;
	static volatile int32_t t57 = -2494420;

	t57 = (x249-((x250+x251)==x252));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x253 = UINT32_MAX;
	static uint16_t x254 = 8U;
	uint16_t x255 = 62U;
	uint8_t x256 = 6U;
	static uint32_t t58 = UINT32_MAX;

	t58 = (x253-((x254+x255)==x256));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = 130328096632453179LL;
	uint32_t x258 = UINT32_MAX;
	volatile uint8_t x259 = 48U;
	static volatile int64_t t59 = 24LL;

	t59 = (x257-((x258+x259)==x260));

	if (t59 != 130328096632453179LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x262 = -1;
	uint16_t x263 = 84U;
	int32_t x264 = 30744;
	static volatile int32_t t60 = 3710439;

	t60 = (x261-((x262+x263)==x264));

	if (t60 != 124) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = -27;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t61 = -416244;

	t61 = (x265-((x266+x267)==x268));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x270 = UINT16_MAX;
	static int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MAX;

	t62 = (x269-((x270+x271)==x272));

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x275 = 1U;
	int32_t t63 = -3255;

	t63 = (x273-((x274+x275)==x276));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x279 = INT64_MIN;
	static int64_t t64 = INT64_MIN;

	t64 = (x277-((x278+x279)==x280));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -1LL;
	int32_t x282 = 1;
	uint16_t x283 = 6611U;
	int64_t x284 = INT64_MIN;
	volatile int64_t t65 = 935042369LL;

	t65 = (x281-((x282+x283)==x284));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = UINT16_MAX;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = INT8_MAX;

	t66 = (x285-((x286+x287)==x288));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = 836863451063LLU;
	uint8_t x292 = 6U;
	int64_t t67 = INT64_MIN;

	t67 = (x289-((x290+x291)==x292));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = UINT32_MAX;
	int64_t x294 = 3609785LL;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = INT32_MIN;

	t68 = (x293-((x294+x295)==x296));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x298 = UINT8_MAX;
	int32_t t69 = 980121016;

	t69 = (x297-((x298+x299)==x300));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = INT8_MIN;
	uint8_t x303 = 15U;

	t70 = (x301-((x302+x303)==x304));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x305 = INT64_MAX;
	volatile int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MIN;
	int64_t t71 = INT64_MAX;

	t71 = (x305-((x306+x307)==x308));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = -1;

	t72 = (x309-((x310+x311)==x312));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x313 = 16853U;
	volatile uint64_t x314 = UINT64_MAX;
	volatile uint64_t x316 = 30948452421LLU;

	t73 = (x313-((x314+x315)==x316));

	if (t73 != 16853U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = 13U;
	int32_t x318 = INT32_MIN;
	uint8_t x319 = 3U;
	int64_t x320 = INT64_MIN;
	uint32_t t74 = 233945014U;

	t74 = (x317-((x318+x319)==x320));

	if (t74 != 13U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x321 = -1LL;
	int8_t x322 = -21;
	static volatile uint32_t x323 = UINT32_MAX;
	int16_t x324 = -1;
	volatile int64_t t75 = 86397822548548LL;

	t75 = (x321-((x322+x323)==x324));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = -13182;
	volatile int32_t x326 = INT32_MIN;
	static volatile int64_t x327 = -91912367347LL;
	int32_t t76 = 57;

	t76 = (x325-((x326+x327)==x328));

	if (t76 != -13182) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x329 = INT32_MIN;
	uint8_t x331 = 3U;
	int8_t x332 = -1;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x329-((x330+x331)==x332));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x333 = INT64_MIN;
	uint8_t x335 = 2U;
	uint16_t x336 = 1560U;

	t78 = (x333-((x334+x335)==x336));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = -203;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t79 = 10762;

	t79 = (x337-((x338+x339)==x340));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = 369284U;
	volatile uint8_t x342 = UINT8_MAX;
	static volatile int8_t x343 = -28;
	int8_t x344 = INT8_MAX;
	static volatile uint32_t t80 = 2118U;

	t80 = (x341-((x342+x343)==x344));

	if (t80 != 369284U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MAX;
	uint16_t x346 = 34U;
	int8_t x347 = -1;
	volatile int32_t t81 = -1235111;

	t81 = (x345-((x346+x347)==x348));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x349 = INT16_MAX;
	uint8_t x350 = 23U;
	int32_t x352 = INT32_MIN;
	int32_t t82 = 3955043;

	t82 = (x349-((x350+x351)==x352));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x354 = -147LL;
	static uint32_t x355 = 539U;
	static uint64_t x356 = 32692493011LLU;
	int32_t t83 = -6709;

	t83 = (x353-((x354+x355)==x356));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = UINT64_MAX;

	t84 = (x357-((x358+x359)==x360));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x365 = INT16_MIN;
	int16_t x366 = 9468;
	int64_t x367 = -1LL;
	uint16_t x368 = 4U;
	volatile int32_t t85 = -22858;

	t85 = (x365-((x366+x367)==x368));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x374 = 41U;
	uint8_t x376 = UINT8_MAX;
	int32_t t86 = 18;

	t86 = (x373-((x374+x375)==x376));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = 48;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -1;
	volatile int32_t t87 = -1044;

	t87 = (x377-((x378+x379)==x380));

	if (t87 != 48) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = -1;
	int8_t x383 = 3;
	int16_t x384 = -3250;
	int32_t t88 = 419;

	t88 = (x381-((x382+x383)==x384));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x387 = 1124691512LLU;
	uint32_t x388 = 904685695U;
	int32_t t89 = -1005030076;

	t89 = (x385-((x386+x387)==x388));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = -439;
	int64_t x390 = INT64_MIN;
	static uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MIN;
	static int32_t t90 = 446;

	t90 = (x389-((x390+x391)==x392));

	if (t90 != -439) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x393 = -1;
	volatile int8_t x394 = -1;
	int64_t x395 = INT64_MAX;
	int8_t x396 = 2;
	volatile int32_t t91 = -2;

	t91 = (x393-((x394+x395)==x396));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = INT16_MAX;
	volatile uint16_t x398 = 8U;
	volatile int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MIN;
	int32_t t92 = 3;

	t92 = (x397-((x398+x399)==x400));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x401 = UINT64_MAX;
	int8_t x402 = INT8_MAX;
	volatile uint32_t x403 = UINT32_MAX;
	int32_t x404 = INT32_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x401-((x402+x403)==x404));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x405 = -1;
	int64_t x406 = -192059650LL;
	static int32_t x407 = INT32_MIN;
	uint32_t x408 = 1U;
	volatile int32_t t94 = -129016;

	t94 = (x405-((x406+x407)==x408));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x409 = 62U;
	volatile int16_t x410 = INT16_MAX;
	int8_t x412 = INT8_MIN;
	uint32_t t95 = 40302920U;

	t95 = (x409-((x410+x411)==x412));

	if (t95 != 62U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x415 = 3424;
	int8_t x416 = 2;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x413-((x414+x415)==x416));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = 211287534LL;
	int8_t x423 = INT8_MIN;
	volatile int32_t x424 = INT32_MIN;
	int64_t t97 = -1706389871525LL;

	t97 = (x421-((x422+x423)==x424));

	if (t97 != 211287534LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x425 = INT32_MAX;
	uint64_t x426 = 85LLU;
	uint16_t x427 = UINT16_MAX;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x425-((x426+x427)==x428));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x431 = INT32_MAX;
	int32_t x432 = 74817;
	volatile int32_t t99 = 29384;

	t99 = (x429-((x430+x431)==x432));

	if (t99 != 283) { NG(); } else { ; }
	
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

