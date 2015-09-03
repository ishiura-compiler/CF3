#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 2U;
volatile int64_t x4 = -1LL;
static volatile int64_t t0 = -18725616821076LL;
int8_t x15 = INT8_MIN;
volatile int16_t x16 = INT16_MIN;
volatile int64_t t5 = -1996157LL;
int16_t x25 = -3533;
static int64_t x29 = INT64_MAX;
uint64_t x32 = UINT64_MAX;
int32_t x40 = INT32_MAX;
volatile uint32_t t9 = 169512912U;
int16_t x42 = -1;
int32_t x46 = -1;
static int16_t x55 = -157;
volatile int16_t x60 = 0;
static volatile uint32_t x71 = 504U;
static int64_t x74 = INT64_MIN;
volatile uint8_t x84 = 62U;
int32_t x92 = -1;
uint64_t x105 = 517522248LLU;
uint64_t x107 = 118196487868LLU;
int64_t x108 = 230LL;
static int64_t x112 = -2249040383040294087LL;
static uint64_t t23 = 2487904186637LLU;
uint32_t x113 = 16926251U;
uint16_t x123 = 539U;
int64_t x136 = INT64_MIN;
volatile int64_t t28 = INT64_MIN;
volatile int16_t x140 = -1;
static uint32_t x141 = UINT32_MAX;
int16_t x143 = -74;
int64_t x144 = INT64_MIN;
static volatile uint64_t t32 = UINT64_MAX;
static uint8_t x153 = UINT8_MAX;
static int64_t x155 = INT64_MAX;
int64_t x157 = INT64_MIN;
int8_t x158 = INT8_MAX;
static uint32_t x159 = UINT32_MAX;
int64_t x162 = INT64_MIN;
int32_t x166 = 152;
static int8_t x168 = INT8_MAX;
int64_t x173 = -1LL;
uint64_t t38 = 11873580648085896LLU;
volatile uint16_t x182 = 27U;
volatile uint64_t t40 = 411797776LLU;
int16_t x190 = -107;
static int32_t x196 = -19;
uint8_t x202 = 13U;
int32_t x203 = -39197;
int64_t x207 = INT64_MIN;
int16_t x210 = -1440;
static volatile uint32_t x211 = 7875278U;
int16_t x214 = -1;
int8_t x225 = INT8_MAX;
static int16_t x227 = -1;
volatile int32_t t50 = -90;
int32_t x232 = INT32_MIN;
uint64_t x242 = 51894259857731LLU;
volatile int16_t x251 = -1;
volatile int16_t x257 = INT16_MIN;
int64_t x259 = 149996959LL;
int64_t t56 = -1013LL;
uint8_t x261 = UINT8_MAX;
int8_t x263 = 3;
int16_t x264 = INT16_MIN;
static int32_t x275 = -1;
static uint16_t x276 = 40U;
int32_t x277 = INT32_MIN;
volatile int64_t t62 = -1921479312644LL;
uint8_t x298 = UINT8_MAX;
uint64_t x300 = UINT64_MAX;
uint64_t x308 = 2LLU;
int32_t x309 = -1;
int8_t x319 = -12;
int8_t x329 = -16;
volatile int64_t x330 = 94978LL;
static volatile int64_t t73 = -2538205357392528678LL;
int8_t x355 = INT8_MAX;
uint32_t x357 = 12U;
volatile int16_t x378 = INT16_MIN;
uint64_t x380 = 27206LLU;
volatile uint64_t t83 = 524686LLU;
volatile int16_t x393 = -1;
volatile uint32_t x395 = 54115273U;
int32_t x397 = 639;
int64_t x405 = -73338955LL;
int32_t x406 = 182222900;
int32_t x407 = 0;
volatile uint16_t x410 = 146U;
int8_t x411 = -29;
static int64_t t88 = 139872856264734401LL;
int16_t x421 = -1;
volatile int16_t x431 = INT16_MIN;
static uint8_t x432 = 36U;
uint16_t x433 = 2026U;
static uint64_t x460 = 12995090375820LLU;
int32_t t99 = 2;


void f0(void) {
	static volatile int8_t x2 = INT8_MIN;
	uint16_t x3 = 5126U;

	t0 = (x1+((x2-x3)&x4));

	if (t0 != -5252LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int8_t x6 = 25;
	int32_t x7 = INT32_MAX;
	uint16_t x8 = 27836U;
	volatile int32_t t1 = 343732;

	t1 = (x5+((x6-x7)&x8));

	if (t1 != -104) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static volatile uint32_t x10 = 20681501U;
	uint64_t x11 = 172146LLU;
	static uint64_t x12 = 668177828LLU;
	uint64_t t2 = 4679010805566LLU;

	t2 = (x9+((x10-x11)&x12));

	if (t2 != 17862815LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -12LL;
	static volatile int64_t t3 = 32828116196LL;

	t3 = (x13+((x14-x15)&x16));

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static volatile uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = 10LLU;
	volatile uint64_t t4 = 247091242570003197LLU;

	t4 = (x17+((x18-x19)&x20));

	if (t4 != 9LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = 19LL;
	volatile int32_t x23 = -4;
	static int64_t x24 = -18306LL;

	t5 = (x21+((x22-x23)&x24));

	if (t5 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x26 = UINT32_MAX;
	static uint8_t x27 = 37U;
	int32_t x28 = -1;
	volatile uint32_t t6 = 32510948U;

	t6 = (x25+((x26-x27)&x28));

	if (t6 != 4294963725U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x30 = UINT64_MAX;
	int8_t x31 = 33;
	uint64_t t7 = 75648794022775LLU;

	t7 = (x29+((x30-x31)&x32));

	if (t7 != 9223372036854775773LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 14374U;
	int16_t x34 = -1;
	int16_t x35 = -3;
	int8_t x36 = -1;
	volatile int32_t t8 = -276157;

	t8 = (x33+((x34-x35)&x36));

	if (t8 != 14376) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -7;
	int16_t x38 = INT16_MIN;
	volatile uint32_t x39 = UINT32_MAX;

	t9 = (x37+((x38-x39)&x40));

	if (t9 != 2147450874U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -1LL;
	static int64_t x43 = 245253346771792235LL;
	static uint32_t x44 = 1146223U;
	static volatile int64_t t10 = 963LL;

	t10 = (x41+((x42-x43)&x44));

	if (t10 != 1117187LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 458U;
	int32_t x47 = -1;
	static volatile uint16_t x48 = 106U;
	int32_t t11 = 1;

	t11 = (x45+((x46-x47)&x48));

	if (t11 != 458) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 13U;
	uint32_t x54 = 5297U;
	int16_t x56 = -1;
	volatile uint32_t t12 = 2091414U;

	t12 = (x53+((x54-x55)&x56));

	if (t12 != 5467U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	int16_t x58 = -1;
	int8_t x59 = INT8_MIN;
	static volatile int64_t t13 = 3094139037127LL;

	t13 = (x57+((x58-x59)&x60));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 10419679LLU;
	int8_t x62 = 53;
	int8_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	uint64_t t14 = 1722279484796LLU;

	t14 = (x61+((x62-x63)&x64));

	if (t14 != 10419733LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	static int8_t x70 = -1;
	static volatile int8_t x72 = INT8_MIN;
	uint32_t t15 = 5U;

	t15 = (x69+((x70-x71)&x72));

	if (t15 != 4294966656U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	int32_t x76 = -1;
	int64_t t16 = INT64_MIN;

	t16 = (x73+((x74-x75)&x76));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = 721U;
	uint32_t x80 = 243231U;
	volatile uint32_t t17 = 81714U;

	t17 = (x77+((x78-x79)&x80));

	if (t17 != 2147693583U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MAX;
	int8_t x83 = 0;
	static volatile int32_t t18 = -958;

	t18 = (x81+((x82-x83)&x84));

	if (t18 != -32706) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	static int64_t x90 = -6789592LL;
	int8_t x91 = 3;
	volatile int64_t t19 = 1363LL;

	t19 = (x89+((x90-x91)&x92));

	if (t19 != -6789468LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 5;
	uint16_t x98 = 376U;
	int16_t x99 = 63;
	static int8_t x100 = 32;
	volatile int32_t t20 = -7405499;

	t20 = (x97+((x98-x99)&x100));

	if (t20 != 37) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 23318410U;
	int16_t x102 = -110;
	int64_t x103 = -6976635LL;
	int16_t x104 = -1;
	volatile int64_t t21 = -32443642167600021LL;

	t21 = (x101+((x102-x103)&x104));

	if (t21 != 30294935LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x106 = 0U;
	volatile uint64_t t22 = 1652579LLU;

	t22 = (x105+((x106-x107)&x108));

	if (t22 != 517522316LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x109 = -1;
	static uint8_t x110 = 20U;
	uint64_t x111 = 3LLU;

	t23 = (x109+((x110-x111)&x112));

	if (t23 != 16LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x114 = -1;
	int32_t x115 = INT32_MIN;
	static volatile int64_t x116 = INT64_MAX;
	static volatile int64_t t24 = 0LL;

	t24 = (x113+((x114-x115)&x116));

	if (t24 != 2164409898LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = 405578872794948270LL;
	int32_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	uint32_t x120 = 694U;
	volatile uint64_t t25 = 48LLU;

	t25 = (x117+((x118-x119)&x120));

	if (t25 != 405578872794948270LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x121 = INT8_MIN;
	uint16_t x122 = 244U;
	static uint16_t x124 = UINT16_MAX;
	static int32_t t26 = 363;

	t26 = (x121+((x122-x123)&x124));

	if (t26 != 65113) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = 38;
	uint64_t x126 = 2021363933614761LLU;
	uint64_t x127 = 1489537920737000LLU;
	int8_t x128 = INT8_MAX;
	volatile uint64_t t27 = 830665569369255500LLU;

	t27 = (x125+((x126-x127)&x128));

	if (t27 != 103LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MAX;
	int32_t x135 = -623817;

	t28 = (x133+((x134-x135)&x136));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = -391;
	uint8_t x138 = UINT8_MAX;
	volatile int32_t x139 = -1;
	static volatile int32_t t29 = -1;

	t29 = (x137+((x138-x139)&x140));

	if (t29 != -135) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x142 = 182404545595LLU;
	uint64_t t30 = 114048LLU;

	t30 = (x141+((x142-x143)&x144));

	if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -1063908585164547LL;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	int64_t t31 = -11LL;

	t31 = (x145+((x146-x147)&x148));

	if (t31 != 9222308126122127613LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -1;
	int64_t x150 = -371456LL;
	static uint64_t x151 = 17238256950LLU;
	int8_t x152 = 0;

	t32 = (x149+((x150-x151)&x152));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x154 = -1;
	int64_t x156 = INT64_MAX;
	int64_t t33 = 128073405676248857LL;

	t33 = (x153+((x154-x155)&x156));

	if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x160 = 51132145U;
	volatile int64_t t34 = 89682072088LL;

	t34 = (x157+((x158-x159)&x160));

	if (t34 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = 249779914837117701LL;
	static volatile int32_t x163 = INT32_MIN;
	volatile int8_t x164 = -6;
	int64_t t35 = -42180648LL;

	t35 = (x161+((x162-x163)&x164));

	if (t35 != -8973592119870174459LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = 0;
	static volatile int64_t x167 = 5478668LL;
	volatile int64_t t36 = 77279757510LL;

	t36 = (x165+((x166-x167)&x168));

	if (t36 != 12LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x174 = UINT64_MAX;
	static volatile uint64_t x175 = UINT64_MAX;
	int8_t x176 = -1;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x173+((x174-x175)&x176));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = 0;
	uint8_t x178 = 8U;
	uint64_t x179 = 5700593024LLU;
	volatile int64_t x180 = 19786149280LL;

	t38 = (x177+((x178-x179)&x180));

	if (t38 != 19462654080LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = 19U;
	uint16_t x183 = 362U;
	int8_t x184 = 60;
	volatile int32_t t39 = -4;

	t39 = (x181+((x182-x183)&x184));

	if (t39 != 67) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x185 = 390121515850615LLU;
	volatile int8_t x186 = -1;
	int32_t x187 = INT32_MIN;
	volatile uint16_t x188 = 0U;

	t40 = (x185+((x186-x187)&x188));

	if (t40 != 390121515850615LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x189 = 0U;
	volatile int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MAX;
	int64_t t41 = 208506206145750375LL;

	t41 = (x189+((x190-x191)&x192));

	if (t41 != 32661LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -1;
	static int64_t x194 = -1LL;
	uint8_t x195 = 1U;
	volatile int64_t t42 = 107646455003854294LL;

	t42 = (x193+((x194-x195)&x196));

	if (t42 != -21LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MAX;
	int32_t x198 = -21;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t43 = -59262700;

	t43 = (x197+((x198-x199)&x200));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int16_t x204 = -21;
	static volatile int32_t t44 = 37;

	t44 = (x201+((x202-x203)&x204));

	if (t44 != 104745) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = 714965U;
	static int64_t x206 = INT64_MIN;
	volatile int32_t x208 = INT32_MAX;
	volatile int64_t t45 = -227295006312LL;

	t45 = (x205+((x206-x207)&x208));

	if (t45 != 714965LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = 1810U;
	volatile uint64_t x212 = UINT64_MAX;
	uint64_t t46 = 394668276509212LLU;

	t46 = (x209+((x210-x211)&x212));

	if (t46 != 4287092388LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = 461;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = 271662295549LL;
	int64_t t47 = 3744878586LL;

	t47 = (x213+((x214-x215)&x216));

	if (t47 != 271662252493LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -1;
	int64_t x218 = 53976928290LL;
	int16_t x219 = INT16_MAX;
	volatile int8_t x220 = -25;
	volatile int64_t t48 = 920526LL;

	t48 = (x217+((x218-x219)&x220));

	if (t48 != 53976895522LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = 9;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x221+((x222-x223)&x224));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x226 = INT8_MAX;
	int8_t x228 = -1;

	t50 = (x225+((x226-x227)&x228));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 2238859154533135LLU;
	static int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	static volatile uint64_t t51 = 129013250246612LLU;

	t51 = (x229+((x230-x231)&x232));

	if (t51 != 2238857007049487LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = -1LL;
	static uint16_t x238 = 2769U;
	volatile int32_t x239 = -1;
	uint8_t x240 = 47U;
	static volatile int64_t t52 = 64LL;

	t52 = (x237+((x238-x239)&x240));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = INT64_MAX;
	int32_t x243 = 364;
	uint16_t x244 = 255U;
	volatile uint64_t t53 = 460668807016464LLU;

	t53 = (x241+((x242-x243)&x244));

	if (t53 != 9223372036854776022LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MAX;
	volatile int32_t x247 = -1;
	volatile uint8_t x248 = 65U;
	int32_t t54 = 2453046;

	t54 = (x245+((x246-x247)&x248));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -28392087LL;
	volatile int8_t x250 = -9;
	uint32_t x252 = 42U;
	volatile int64_t t55 = -15383544LL;

	t55 = (x249+((x250-x251)&x252));

	if (t55 != -28392047LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x258 = 858883351LL;
	int8_t x260 = -45;

	t56 = (x257+((x258-x259)&x260));

	if (t56 != 708853584LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x262 = 3LL;
	static volatile int64_t t57 = -828194LL;

	t57 = (x261+((x262-x263)&x264));

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x266 = 10U;
	volatile int32_t x267 = 1;
	int16_t x268 = 210;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x265+((x266-x267)&x268));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = -1LL;
	int64_t x271 = INT64_MAX;
	static uint32_t x272 = 428482U;
	int64_t t59 = -33465880410597741LL;

	t59 = (x269+((x270-x271)&x272));

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x273 = INT32_MAX;
	uint32_t x274 = UINT32_MAX;
	volatile uint32_t t60 = 2458U;

	t60 = (x273+((x274-x275)&x276));

	if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = INT16_MIN;
	static uint32_t x279 = UINT32_MAX;
	volatile int16_t x280 = -187;
	volatile uint32_t t61 = 138U;

	t61 = (x277+((x278-x279)&x280));

	if (t61 != 2147450881U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = 15U;
	static volatile uint8_t x283 = 1U;
	int64_t x284 = -1LL;

	t62 = (x281+((x282-x283)&x284));

	if (t62 != -32754LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	static volatile int8_t x291 = 0;
	uint8_t x292 = 27U;
	static int32_t t63 = -1378;

	t63 = (x289+((x290-x291)&x292));

	if (t63 != 32794) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x293 = UINT64_MAX;
	uint64_t x294 = 47955418871248650LLU;
	int32_t x295 = 2893458;
	uint64_t x296 = 9216894859807803079LLU;
	volatile uint64_t t64 = 1043553322132964LLU;

	t64 = (x293+((x294-x295)&x296));

	if (t64 != 47390059304058943LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x297 = -1;
	int32_t x299 = -1;
	volatile uint64_t t65 = 150LLU;

	t65 = (x297+((x298-x299)&x300));

	if (t65 != 255LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = UINT32_MAX;
	static uint64_t x303 = 642523827LLU;
	volatile int16_t x304 = -9;
	uint64_t t66 = 130534244LLU;

	t66 = (x301+((x302-x303)&x304));

	if (t66 != 3652508995LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x306 = INT64_MAX;
	static int32_t x307 = 0;
	uint64_t t67 = 4645693059188490173LLU;

	t67 = (x305+((x306-x307)&x308));

	if (t67 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = 477;
	int64_t x311 = 415278806377LL;
	uint32_t x312 = 1U;
	static int64_t t68 = 30718944365LL;

	t68 = (x309+((x310-x311)&x312));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = 65903696LL;
	uint64_t x318 = UINT64_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t69 = 2LLU;

	t69 = (x317+((x318-x319)&x320));

	if (t69 != 65903707LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 6U;
	int32_t x322 = INT32_MIN;
	int16_t x323 = -1;
	int8_t x324 = INT8_MAX;
	int32_t t70 = 27466094;

	t70 = (x321+((x322-x323)&x324));

	if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = -1;
	volatile int64_t x326 = 822773LL;
	int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MIN;
	volatile int64_t t71 = -479939636251LL;

	t71 = (x325+((x326-x327)&x328));

	if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x331 = -1;
	uint16_t x332 = 16196U;
	volatile int64_t t72 = 59621151074303244LL;

	t72 = (x329+((x330-x331)&x332));

	if (t72 != 13040LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = -29800428LL;
	static int32_t x334 = -75142005;
	volatile int16_t x335 = INT16_MAX;
	int16_t x336 = INT16_MIN;

	t73 = (x333+((x334-x335)&x336));

	if (t73 != -105002988LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = 1;
	uint8_t x339 = 0U;
	int16_t x340 = INT16_MAX;
	volatile int32_t t74 = 1;

	t74 = (x337+((x338-x339)&x340));

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 10012182592441130LLU;
	uint8_t x346 = 125U;
	int16_t x347 = INT16_MIN;
	int32_t x348 = -1;
	uint64_t t75 = 6448285559LLU;

	t75 = (x345+((x346-x347)&x348));

	if (t75 != 10012182592474023LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = 1U;
	int16_t x350 = INT16_MIN;
	static uint64_t x351 = 24445LLU;
	uint32_t x352 = 185U;
	volatile uint64_t t76 = 153155856055244LLU;

	t76 = (x349+((x350-x351)&x352));

	if (t76 != 130LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MIN;
	static uint32_t x354 = UINT32_MAX;
	int8_t x356 = -1;
	volatile int64_t t77 = -42LL;

	t77 = (x353+((x354-x355)&x356));

	if (t77 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 12493101734325LLU;
	uint64_t t78 = 72LLU;

	t78 = (x357+((x358-x359)&x360));

	if (t78 != 140LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	volatile int16_t x366 = INT16_MIN;
	uint8_t x367 = 4U;
	int8_t x368 = -1;
	int32_t t79 = -11;

	t79 = (x365+((x366-x367)&x368));

	if (t79 != -32900) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = -1;
	uint32_t x370 = 2020U;
	volatile int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t80 = 615651LL;

	t80 = (x369+((x370-x371)&x372));

	if (t80 != 228LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = -1LL;
	uint8_t x379 = 0U;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x377+((x378-x379)&x380));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MIN;
	volatile int32_t x383 = -143;
	volatile int8_t x384 = -1;
	static volatile int32_t t82 = 1;

	t82 = (x381+((x382-x383)&x384));

	if (t82 != -2147450738) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x389 = 288754638364LLU;
	int16_t x390 = -1;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = 116U;

	t83 = (x389+((x390-x391)&x392));

	if (t83 != 288754638480LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x394 = INT32_MAX;
	uint64_t x396 = 185819180139LLU;
	static uint64_t t84 = 43746164369396851LLU;

	t84 = (x393+((x394-x395)&x396));

	if (t84 != 1082524705LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x398 = -10842;
	int32_t x399 = -710;
	int32_t x400 = -52;
	volatile int32_t t85 = 18183449;

	t85 = (x397+((x398-x399)&x400));

	if (t85 != -9525) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = -2377;
	volatile int64_t x403 = -1LL;
	int64_t x404 = -4LL;
	uint64_t t86 = 3171667122LLU;

	t86 = (x401+((x402-x403)&x404));

	if (t86 != 18446744073709549239LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x408 = INT8_MIN;
	int64_t t87 = -47408124LL;

	t87 = (x405+((x406-x407)&x408));

	if (t87 != 108883893LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = INT64_MIN;
	static int32_t x412 = 1;

	t88 = (x409+((x410-x411)&x412));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x422 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	int32_t x424 = -1;
	uint64_t t89 = 56849114341LLU;

	t89 = (x421+((x422-x423)&x424));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = INT16_MAX;
	static int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MAX;
	uint16_t x428 = 15U;
	int32_t t90 = -1;

	t90 = (x425+((x426-x427)&x428));

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = -1;
	int64_t x430 = INT64_MIN;
	volatile int64_t t91 = -7204LL;

	t91 = (x429+((x430-x431)&x432));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x434 = INT16_MAX;
	uint64_t x435 = 1572435735540LLU;
	int8_t x436 = -1;
	volatile uint64_t t92 = 601305LLU;

	t92 = (x433+((x434-x435)&x436));

	if (t92 != 18446742501273850869LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x437 = 1U;
	int8_t x438 = -1;
	uint64_t x439 = 253737692086985LLU;
	static int64_t x440 = 41122LL;
	uint64_t t93 = 70401675474307099LLU;

	t93 = (x437+((x438-x439)&x440));

	if (t93 != 8227LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x441 = -41;
	uint8_t x442 = 10U;
	uint64_t x443 = 1794743002665267530LLU;
	int32_t x444 = INT32_MIN;
	uint64_t t94 = 975940472580LLU;

	t94 = (x441+((x442-x443)&x444));

	if (t94 != 16652001068913262551LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x445 = UINT16_MAX;
	uint8_t x446 = 26U;
	uint64_t x447 = 122323863365LLU;
	volatile uint64_t x448 = 18912305LLU;
	static uint64_t t95 = 4556620225794171733LLU;

	t95 = (x445+((x446-x447)&x448));

	if (t95 != 2199568LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x449 = 0U;
	uint32_t x450 = UINT32_MAX;
	int16_t x451 = -1;
	volatile int16_t x452 = INT16_MAX;
	volatile uint32_t t96 = 4U;

	t96 = (x449+((x450-x451)&x452));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x453 = INT16_MAX;
	uint16_t x454 = UINT16_MAX;
	static uint16_t x455 = 60U;
	int32_t x456 = -1;
	volatile int32_t t97 = 21802636;

	t97 = (x453+((x454-x455)&x456));

	if (t97 != 98242) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x457 = 10U;
	int16_t x458 = INT16_MIN;
	volatile int8_t x459 = -14;
	static uint64_t t98 = 27504847LLU;

	t98 = (x457+((x458-x459)&x460));

	if (t98 != 12995090350102LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = 0;
	int8_t x462 = -1;
	uint16_t x463 = 21U;
	uint8_t x464 = UINT8_MAX;

	t99 = (x461+((x462-x463)&x464));

	if (t99 != 234) { NG(); } else { ; }
	
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

