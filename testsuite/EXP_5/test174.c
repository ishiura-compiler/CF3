#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
int32_t x2 = -1;
static volatile int64_t t0 = 250768LL;
volatile uint16_t x5 = 25372U;
uint32_t t1 = 7U;
int16_t x11 = INT16_MIN;
uint64_t t2 = 28681589LLU;
volatile int64_t t3 = -26889299LL;
uint16_t x22 = 20U;
int8_t x27 = INT8_MIN;
uint32_t x31 = 222U;
uint8_t x35 = 1U;
uint32_t x36 = 86449612U;
int64_t t8 = 86101LL;
uint16_t x43 = 14U;
uint64_t x45 = 25466988471LLU;
int8_t x46 = 56;
static int32_t x48 = -1;
volatile uint64_t t10 = 5541953387410LLU;
int64_t x50 = INT64_MIN;
static int64_t x52 = -1LL;
volatile int64_t t11 = 112LL;
volatile int64_t x55 = -51377488LL;
volatile int64_t t12 = -20729492LL;
static uint8_t x62 = 123U;
int16_t x69 = -20;
int16_t x71 = INT16_MIN;
uint8_t x77 = 4U;
volatile int64_t t16 = 11LL;
uint8_t x81 = UINT8_MAX;
int64_t x83 = 5739LL;
static volatile int64_t t17 = -10285974634LL;
int32_t t18 = -2077;
volatile int64_t t19 = 167LL;
static uint32_t x103 = UINT32_MAX;
int16_t x115 = 180;
uint64_t x117 = 14199LLU;
int8_t x118 = INT8_MIN;
uint8_t x124 = 4U;
volatile int32_t t25 = 35;
int64_t x137 = INT64_MIN;
int8_t x149 = INT8_MIN;
volatile int32_t x152 = -1;
uint64_t t29 = 6950008247LLU;
uint16_t x168 = 3985U;
volatile int64_t t30 = -3LL;
int32_t x169 = INT32_MIN;
uint16_t x170 = 45U;
int64_t x174 = -1117366LL;
int64_t x180 = INT64_MAX;
static int16_t x185 = -166;
int64_t x187 = INT64_MIN;
volatile int8_t x189 = INT8_MIN;
uint64_t x190 = UINT64_MAX;
uint32_t x196 = 18185232U;
int16_t x197 = INT16_MIN;
volatile uint32_t x205 = 1990063U;
uint64_t x207 = 0LLU;
int8_t x213 = 31;
uint64_t x218 = UINT64_MAX;
volatile int16_t x221 = -38;
uint64_t x227 = 46841425408427570LLU;
volatile int16_t x230 = INT16_MAX;
int64_t t48 = -3575625163LL;
static int64_t t49 = -114152177043LL;
int32_t x251 = INT32_MAX;
volatile uint64_t t52 = 3905700866775248587LLU;
int64_t x260 = 7209432284878701LL;
int32_t x262 = INT32_MIN;
int8_t x265 = -1;
int64_t x266 = 640502LL;
uint16_t x269 = 13U;
static volatile int8_t x270 = INT8_MAX;
int32_t x279 = -454361;
uint8_t x282 = UINT8_MAX;
uint8_t x286 = 1U;
uint64_t x287 = 2072009049498LLU;
int16_t x290 = -1;
uint64_t x304 = 9504975962516LLU;
static int32_t x309 = INT32_MIN;
static volatile int16_t x312 = -1;
static int32_t x318 = -1;
int8_t x322 = INT8_MIN;
int32_t x323 = -1;
volatile int16_t x325 = INT16_MAX;
int32_t x333 = 45651235;
int16_t x344 = -1;
static uint32_t x352 = 77U;
uint64_t x371 = 21695LLU;
volatile int8_t x376 = -1;
uint32_t x377 = UINT32_MAX;
int16_t x378 = -6674;
volatile uint32_t t79 = 3667092U;
volatile int32_t x387 = 1496108;
int64_t x388 = INT64_MAX;
volatile uint64_t x390 = UINT64_MAX;
int64_t x391 = INT64_MAX;
int8_t x402 = INT8_MAX;
volatile uint16_t x407 = 3U;
uint64_t x409 = UINT64_MAX;
volatile uint64_t t86 = 8LLU;
uint16_t x413 = 7969U;
int8_t x429 = -1;
uint64_t t91 = 4079667LLU;
int8_t x439 = INT8_MAX;
volatile int16_t x453 = INT16_MIN;
int8_t x473 = -4;
int64_t t99 = 1022563273143698679LL;


void f0(void) {
	uint32_t x3 = 9046U;
	static uint16_t x4 = UINT16_MAX;

	t0 = (x1%((x2-x3)+x4));

	if (t0 != 49935LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	static uint8_t x7 = 104U;
	int16_t x8 = -1;

	t1 = (x5%((x6-x7)+x8));

	if (t1 != 25372U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 451076LLU;
	volatile uint8_t x10 = UINT8_MAX;
	int8_t x12 = -1;

	t2 = (x9%((x10-x11)+x12));

	if (t2 != 21790LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = 33U;
	int64_t x15 = INT64_MAX;
	uint8_t x16 = UINT8_MAX;

	t3 = (x13%((x14-x15)+x16));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -44;
	volatile int32_t x18 = -953;
	int8_t x19 = -1;
	static int16_t x20 = 3;
	int32_t t4 = 109;

	t4 = (x17%((x18-x19)+x20));

	if (t4 != -44) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint8_t x23 = 1U;
	static volatile int16_t x24 = 1;
	int32_t t5 = 85622;

	t5 = (x21%((x22-x23)+x24));

	if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint8_t x26 = 7U;
	static volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -42;

	t6 = (x25%((x26-x27)+x28));

	if (t6 != -8) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1357U;
	int64_t x30 = INT64_MAX;
	volatile int8_t x32 = INT8_MIN;
	volatile int64_t t7 = 165805648455LL;

	t7 = (x29%((x30-x31)+x32));

	if (t7 != 1357LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = 8708696423LL;

	t8 = (x33%((x34-x35)+x36));

	if (t8 != -8324807174LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static volatile int8_t x42 = INT8_MIN;
	int16_t x44 = -14;
	volatile int32_t t9 = -89;

	t9 = (x41%((x42-x43)+x44));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x47 = 1U;

	t10 = (x45%((x46-x47)+x48));

	if (t10 != 33LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int8_t x51 = -33;

	t11 = (x49%((x50-x51)+x52));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -448702735;
	int64_t x54 = INT64_MIN;
	uint32_t x56 = UINT32_MAX;

	t12 = (x53%((x54-x55)+x56));

	if (t12 != -448702735LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = 1099514058280624986LL;
	int8_t x58 = 0;
	static uint8_t x59 = 7U;
	int64_t x60 = INT64_MAX;
	int64_t t13 = 14LL;

	t13 = (x57%((x58-x59)+x60));

	if (t13 != 1099514058280624986LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	static int64_t x63 = INT64_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t14 = 3511LLU;

	t14 = (x61%((x62-x63)+x64));

	if (t14 != 9223372036854775684LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = INT8_MIN;
	int8_t x72 = 1;
	int32_t t15 = 1726284;

	t15 = (x69%((x70-x71)+x72));

	if (t15 != -20) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	volatile int64_t x80 = -4LL;

	t16 = (x77%((x78-x79)+x80));

	if (t16 != 4LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = UINT16_MAX;
	static int32_t x84 = INT32_MIN;

	t17 = (x81%((x82-x83)+x84));

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	static volatile int16_t x90 = -1;
	volatile uint8_t x91 = 2U;
	volatile int32_t x92 = -1;

	t18 = (x89%((x90-x91)+x92));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MAX;
	uint32_t x94 = 219740U;
	uint16_t x95 = 52U;
	uint16_t x96 = 332U;

	t19 = (x93%((x94-x95)+x96));

	if (t19 != 35167LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x97 = INT64_MIN;
	volatile int16_t x98 = INT16_MAX;
	static volatile int32_t x99 = -1;
	int8_t x100 = -1;
	int64_t t20 = 198787LL;

	t20 = (x97%((x98-x99)+x100));

	if (t20 != -8LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = 52426LL;
	volatile int64_t x102 = INT64_MAX;
	uint8_t x104 = UINT8_MAX;
	static int64_t t21 = 2137043603466174793LL;

	t21 = (x101%((x102-x103)+x104));

	if (t21 != 52426LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x105 = UINT16_MAX;
	uint8_t x106 = 70U;
	volatile int16_t x107 = 3045;
	volatile int16_t x108 = 1;
	volatile int32_t t22 = -923368503;

	t22 = (x105%((x106-x107)+x108));

	if (t22 != 107) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = INT8_MAX;
	int16_t x114 = 201;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t23 = 9;

	t23 = (x113%((x114-x115)+x116));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x119 = INT8_MAX;
	volatile uint16_t x120 = UINT16_MAX;
	volatile uint64_t t24 = 761744316LLU;

	t24 = (x117%((x118-x119)+x120));

	if (t24 != 14199LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x121 = INT8_MAX;
	uint8_t x122 = 63U;
	int32_t x123 = -1;

	t25 = (x121%((x122-x123)+x124));

	if (t25 != 59) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = 0;
	static uint64_t x134 = UINT64_MAX;
	int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MAX;
	static uint64_t t26 = 21780363LLU;

	t26 = (x133%((x134-x135)+x136));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x138 = 11U;
	static uint32_t x139 = UINT32_MAX;
	static int16_t x140 = -1;
	int64_t t27 = -1LL;

	t27 = (x137%((x138-x139)+x140));

	if (t27 != -8LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = 3737087709560993610LLU;
	int64_t x142 = -425LL;
	static int32_t x143 = INT32_MAX;
	uint8_t x144 = 3U;
	static uint64_t t28 = 2050542198019LLU;

	t28 = (x141%((x142-x143)+x144));

	if (t28 != 3737087709560993610LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x150 = INT16_MAX;
	volatile uint64_t x151 = 1LLU;

	t29 = (x149%((x150-x151)+x152));

	if (t29 != 1168LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = -1LL;
	int32_t x166 = -2;
	static volatile int32_t x167 = 49319;

	t30 = (x165%((x166-x167)+x168));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x171 = 11986783341993200LLU;
	int64_t x172 = -1LL;
	uint64_t t31 = 103637548955LLU;

	t31 = (x169%((x170-x171)+x172));

	if (t31 != 11986781194509508LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = -1;
	uint32_t x175 = 4U;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t32 = 467337543LLU;

	t32 = (x173%((x174-x175)+x176));

	if (t32 != 1117370LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x177 = INT16_MIN;
	static int16_t x178 = INT16_MIN;
	uint16_t x179 = 6U;
	int64_t t33 = -257599835620153759LL;

	t33 = (x177%((x178-x179)+x180));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x182 = 23011878128LLU;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -1;
	uint64_t t34 = 637419206LLU;

	t34 = (x181%((x182-x183)+x184));

	if (t34 != 127LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x186 = -545460LL;
	static uint8_t x188 = 1U;
	static int64_t t35 = -57759409588955LL;

	t35 = (x185%((x186-x187)+x188));

	if (t35 != -166LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = 27612LLU;
	static uint64_t t36 = 310303717393LLU;

	t36 = (x189%((x190-x191)+x192));

	if (t36 != 21884LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x193 = 140012U;
	int16_t x194 = -1;
	int32_t x195 = 86545;
	static uint32_t t37 = 921863189U;

	t37 = (x193%((x194-x195)+x196));

	if (t37 != 140012U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x198 = 108302;
	int64_t x199 = -4533LL;
	int32_t x200 = INT32_MIN;
	int64_t t38 = 57301086887898705LL;

	t38 = (x197%((x198-x199)+x200));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x201 = 0U;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -1;
	int8_t x204 = -16;
	int32_t t39 = 352709;

	t39 = (x201%((x202-x203)+x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x206 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t40 = 6LLU;

	t40 = (x205%((x206-x207)+x208));

	if (t40 != 1990063LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = INT16_MAX;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = 29;
	volatile int16_t x212 = -2569;
	volatile uint64_t t41 = 366LLU;

	t41 = (x209%((x210-x211)+x212));

	if (t41 != 32767LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x214 = UINT32_MAX;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = 190426394730717LL;
	static volatile int64_t t42 = 14186654941724LL;

	t42 = (x213%((x214-x215)+x216));

	if (t42 != 31LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = 238;
	int8_t x219 = -1;
	uint32_t x220 = 589U;
	static volatile uint64_t t43 = 5LLU;

	t43 = (x217%((x218-x219)+x220));

	if (t43 != 238LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x222 = 483U;
	int64_t x223 = 4LL;
	int32_t x224 = INT32_MIN;
	int64_t t44 = 3355402LL;

	t44 = (x221%((x222-x223)+x224));

	if (t44 != -38LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x225 = -1;
	int8_t x226 = 0;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t45 = 1915496205LLU;

	t45 = (x225%((x226-x227)+x228));

	if (t45 != 46841427555911217LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = 4U;
	volatile int8_t x231 = INT8_MIN;
	static int64_t x232 = INT64_MIN;
	int64_t t46 = -1LL;

	t46 = (x229%((x230-x231)+x232));

	if (t46 != 4LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = INT16_MIN;
	static uint64_t x235 = 737852LLU;
	uint16_t x236 = 9U;
	static uint64_t t47 = 87585239033488LLU;

	t47 = (x233%((x234-x235)+x236));

	if (t47 != 127LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x238 = -5486639;
	int64_t x239 = -1LL;
	static int64_t x240 = -65502943670787735LL;

	t48 = (x237%((x238-x239)+x240));

	if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x241 = -4677072300LL;
	int16_t x242 = INT16_MAX;
	uint8_t x243 = 10U;
	int8_t x244 = -19;

	t49 = (x241%((x242-x243)+x244));

	if (t49 != -23406LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = INT64_MIN;
	static int16_t x246 = -1;
	uint64_t x247 = 128616869881LLU;
	uint8_t x248 = 42U;
	uint64_t t50 = 87LLU;

	t50 = (x245%((x246-x247)+x248));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 501375667068631923LLU;
	int16_t x252 = -1;
	uint64_t t51 = 149121LLU;

	t51 = (x249%((x250-x251)+x252));

	if (t51 != 397220136548213715LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x253 = 8U;
	uint64_t x254 = 8931472564397638692LLU;
	int16_t x255 = INT16_MIN;
	static uint32_t x256 = UINT32_MAX;

	t52 = (x253%((x254-x255)+x256));

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x257 = 317U;
	uint32_t x258 = 259372105U;
	volatile int8_t x259 = -3;
	volatile int64_t t53 = 29321460887LL;

	t53 = (x257%((x258-x259)+x260));

	if (t53 != 317LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1429174547378LL;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MAX;
	volatile int64_t t54 = 160204LL;

	t54 = (x261%((x262-x263)+x264));

	if (t54 != -31686LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x267 = -1;
	uint32_t x268 = 61473U;
	static volatile int64_t t55 = 169LL;

	t55 = (x265%((x266-x267)+x268));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x271 = UINT16_MAX;
	uint16_t x272 = UINT16_MAX;
	int32_t t56 = 26741;

	t56 = (x269%((x270-x271)+x272));

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 870630182U;
	int32_t x275 = INT32_MAX;
	static int16_t x276 = -1;
	volatile uint32_t t57 = 21995658U;

	t57 = (x273%((x274-x275)+x276));

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x277 = 0U;
	uint64_t x278 = UINT64_MAX;
	volatile int64_t x280 = -1LL;
	static uint64_t t58 = 34303088002LLU;

	t58 = (x277%((x278-x279)+x280));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x281 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	static uint16_t x284 = 249U;
	uint64_t t59 = 20837486477552294LLU;

	t59 = (x281%((x282-x283)+x284));

	if (t59 != 10767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x285 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;
	uint64_t t60 = 2752460264236227957LLU;

	t60 = (x285%((x286-x287)+x288));

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x289 = 0U;
	uint32_t x291 = 1805514U;
	int8_t x292 = INT8_MAX;
	uint32_t t61 = 3U;

	t61 = (x289%((x290-x291)+x292));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = INT32_MAX;
	uint8_t x294 = UINT8_MAX;
	volatile uint16_t x295 = 100U;
	volatile int16_t x296 = -1063;
	int32_t t62 = 377922016;

	t62 = (x293%((x294-x295)+x296));

	if (t62 != 87) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 1440U;
	int8_t x302 = 1;
	volatile int8_t x303 = INT8_MAX;
	uint64_t t63 = 30391058743356LLU;

	t63 = (x301%((x302-x303)+x304));

	if (t63 != 1440LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x305 = 58546387LLU;
	static uint32_t x306 = 627414840U;
	volatile uint64_t x307 = UINT64_MAX;
	static int32_t x308 = 2738440;
	static volatile uint64_t t64 = 75919405LLU;

	t64 = (x305%((x306-x307)+x308));

	if (t64 != 58546387LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x310 = 1159376569855090199LLU;
	static volatile int8_t x311 = INT8_MIN;
	volatile uint64_t t65 = 3323343254LLU;

	t65 = (x309%((x310-x311)+x312));

	if (t65 != 1056095523735713078LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	volatile int64_t t66 = -473636063435LL;

	t66 = (x317%((x318-x319)+x320));

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x321 = UINT32_MAX;
	int8_t x324 = 0;
	volatile uint32_t t67 = 1082756U;

	t67 = (x321%((x322-x323)+x324));

	if (t67 != 126U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x326 = -1;
	volatile uint64_t x327 = UINT64_MAX;
	uint8_t x328 = 1U;
	volatile uint64_t t68 = 13015LLU;

	t68 = (x325%((x326-x327)+x328));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = 10;
	int16_t x330 = -2290;
	int32_t x331 = INT32_MIN;
	static uint8_t x332 = UINT8_MAX;
	int32_t t69 = -811774842;

	t69 = (x329%((x330-x331)+x332));

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x334 = 92413092U;
	static int64_t x335 = 2081287842204565LL;
	uint16_t x336 = 127U;
	int64_t t70 = 20872342LL;

	t70 = (x333%((x334-x335)+x336));

	if (t70 != 45651235LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile int64_t t71 = -16981643155031841LL;

	t71 = (x337%((x338-x339)+x340));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = -1;
	int32_t x343 = INT32_MIN;
	static uint32_t t72 = 417586565U;

	t72 = (x341%((x342-x343)+x344));

	if (t72 != 3U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = -1LL;
	static int16_t x351 = -1;
	int64_t t73 = -8370958LL;

	t73 = (x349%((x350-x351)+x352));

	if (t73 != 8LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x353 = 12U;
	int16_t x354 = -37;
	int8_t x355 = 0;
	int64_t x356 = -1185486663858571191LL;
	int64_t t74 = -429655765509538559LL;

	t74 = (x353%((x354-x355)+x356));

	if (t74 != 12LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = 0U;
	static int16_t x363 = -6;
	uint16_t x364 = 3064U;
	volatile uint32_t t75 = 15U;

	t75 = (x361%((x362-x363)+x364));

	if (t75 != 1458U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = -1;
	int8_t x372 = 1;
	volatile uint64_t t76 = 451LLU;

	t76 = (x369%((x370-x371)+x372));

	if (t76 != 65535LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x373 = 1265U;
	uint16_t x374 = 225U;
	volatile int16_t x375 = -1;
	int32_t t77 = -3;

	t77 = (x373%((x374-x375)+x376));

	if (t77 != 140) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x379 = -5382;
	volatile int64_t x380 = -1LL;
	int64_t t78 = -9655388LL;

	t78 = (x377%((x378-x379)+x380));

	if (t78 != 144LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int16_t x382 = -4432;
	uint16_t x383 = 605U;
	int32_t x384 = -1;

	t79 = (x381%((x382-x383)+x384));

	if (t79 != 5037U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = -17;
	uint64_t t80 = 1796192913555939410LLU;

	t80 = (x385%((x386-x387)+x388));

	if (t80 != 2992251LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = 47181LL;
	static int16_t x392 = INT16_MAX;
	uint64_t t81 = 2454644923936LLU;

	t81 = (x389%((x390-x391)+x392));

	if (t81 != 47181LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = -1810850182998999LL;
	uint64_t x394 = 3403459114380101487LLU;
	uint16_t x395 = 3U;
	int32_t x396 = INT32_MIN;
	uint64_t t82 = 31095751647LLU;

	t82 = (x393%((x394-x395)+x396));

	if (t82 != 1427637662363463437LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x397 = INT64_MAX;
	uint64_t x398 = UINT64_MAX;
	static int64_t x399 = 17LL;
	uint64_t x400 = 7376307837697284625LLU;
	uint64_t t83 = 58LLU;

	t83 = (x397%((x398-x399)+x400));

	if (t83 != 1847064199157491200LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x401 = UINT32_MAX;
	volatile uint32_t x403 = 72U;
	uint32_t x404 = 166992703U;
	uint32_t t84 = 194080772U;

	t84 = (x401%((x402-x403)+x404));

	if (t84 != 120148345U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x405 = INT8_MAX;
	int8_t x406 = 6;
	int16_t x408 = -1;
	volatile int32_t t85 = -15563;

	t85 = (x405%((x406-x407)+x408));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x410 = 764333976764183557LLU;
	int8_t x411 = -1;
	uint8_t x412 = 21U;

	t86 = (x409%((x410-x411)+x412));

	if (t86 != 102728631369145719LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x414 = INT16_MIN;
	uint8_t x415 = 4U;
	static int8_t x416 = -1;
	volatile int32_t t87 = -484;

	t87 = (x413%((x414-x415)+x416));

	if (t87 != 7969) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = -1LL;
	uint8_t x418 = 11U;
	volatile uint64_t x419 = 20LLU;
	static uint32_t x420 = UINT32_MAX;
	volatile uint64_t t88 = 8801142925710246LLU;

	t88 = (x417%((x418-x419)+x420));

	if (t88 != 99LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = INT32_MAX;
	uint8_t x422 = UINT8_MAX;
	uint32_t x423 = UINT32_MAX;
	volatile int8_t x424 = -5;
	volatile uint32_t t89 = 453298U;

	t89 = (x421%((x422-x423)+x424));

	if (t89 != 186U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = INT32_MIN;
	volatile uint8_t x426 = 1U;
	int16_t x427 = -1459;
	int8_t x428 = INT8_MIN;
	int32_t t90 = -8089;

	t90 = (x425%((x426-x427)+x428));

	if (t90 != -1280) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x430 = INT8_MAX;
	volatile uint32_t x431 = UINT32_MAX;
	uint64_t x432 = UINT64_MAX;

	t91 = (x429%((x430-x431)+x432));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = 1;
	uint32_t x438 = 31U;
	uint64_t x440 = 63LLU;
	volatile uint64_t t92 = 3LLU;

	t92 = (x437%((x438-x439)+x440));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x441 = -1LL;
	static int64_t x442 = -40LL;
	static uint32_t x443 = 228623U;
	uint8_t x444 = UINT8_MAX;
	volatile int64_t t93 = 12846560324LL;

	t93 = (x441%((x442-x443)+x444));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x449 = UINT8_MAX;
	int64_t x450 = 97790776663LL;
	static int16_t x451 = -7;
	volatile int16_t x452 = -157;
	volatile int64_t t94 = 265486991601LL;

	t94 = (x449%((x450-x451)+x452));

	if (t94 != 255LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x454 = 6;
	static uint16_t x455 = 25U;
	int16_t x456 = 0;
	volatile int32_t t95 = 123927447;

	t95 = (x453%((x454-x455)+x456));

	if (t95 != -12) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x457 = -1LL;
	volatile int16_t x458 = INT16_MAX;
	volatile int16_t x459 = INT16_MIN;
	static int32_t x460 = -1;
	volatile int64_t t96 = -1634079658939626LL;

	t96 = (x457%((x458-x459)+x460));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x465 = 0;
	static int16_t x466 = INT16_MAX;
	static int8_t x467 = INT8_MIN;
	static volatile int64_t x468 = INT64_MIN;
	int64_t t97 = 6205143LL;

	t97 = (x465%((x466-x467)+x468));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x469 = INT32_MIN;
	volatile int16_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	uint16_t x472 = 16445U;
	uint64_t t98 = 3978985274252130237LLU;

	t98 = (x469%((x470-x471)+x472));

	if (t98 != 16008LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x474 = 3;
	int16_t x475 = 1;
	static int64_t x476 = 11LL;

	t99 = (x473%((x474-x475)+x476));

	if (t99 != -4LL) { NG(); } else { ; }
	
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

