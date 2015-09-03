#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
uint64_t x4 = 1LLU;
int16_t x7 = -192;
uint16_t x11 = 5537U;
volatile uint64_t x15 = 27892463789LLU;
volatile int16_t x19 = INT16_MAX;
uint16_t x23 = 447U;
uint64_t x25 = UINT64_MAX;
uint64_t t6 = 1852943876LLU;
int8_t x50 = 15;
uint16_t x58 = UINT16_MAX;
int32_t x59 = -1;
int16_t x62 = INT16_MIN;
volatile uint64_t t16 = 659499252483LLU;
int64_t x81 = 1577248872918821327LL;
int64_t x84 = 2073629248902615LL;
uint32_t x93 = 373199U;
int16_t x103 = INT16_MIN;
int64_t x106 = -345428917475209432LL;
volatile uint64_t t21 = 198986236065LLU;
int32_t x110 = INT32_MIN;
volatile int32_t x117 = INT32_MAX;
uint64_t x119 = UINT64_MAX;
static uint8_t x120 = UINT8_MAX;
uint8_t x121 = 7U;
static volatile int64_t x124 = INT64_MIN;
int16_t x129 = INT16_MIN;
int32_t x137 = INT32_MIN;
volatile int8_t x142 = 1;
int64_t x150 = -422259610199538580LL;
uint8_t x152 = 1U;
static int16_t x159 = INT16_MAX;
uint8_t x171 = UINT8_MAX;
int8_t x172 = INT8_MAX;
static int32_t t36 = 62872;
volatile int16_t x177 = INT16_MAX;
uint32_t x178 = 4U;
static int64_t x180 = -1LL;
int64_t x185 = -1LL;
int8_t x195 = -39;
uint16_t x198 = 30452U;
static int16_t x200 = INT16_MAX;
uint64_t t42 = 828238703631353225LLU;
int16_t x202 = INT16_MAX;
static int32_t x212 = -2;
volatile uint32_t t45 = 14458950U;
uint64_t t46 = 8863LLU;
int8_t x222 = INT8_MAX;
static int32_t x229 = INT32_MIN;
static uint32_t x234 = 0U;
static uint8_t x239 = 1U;
uint16_t x257 = 86U;
int32_t x261 = INT32_MAX;
static uint32_t x262 = 22472217U;
int32_t x269 = INT32_MIN;
uint32_t x270 = 27U;
volatile uint32_t x275 = 297992U;
static volatile int16_t x277 = INT16_MIN;
int16_t x282 = -1;
int8_t x283 = -1;
int32_t x284 = -1;
uint8_t x287 = 117U;
volatile int64_t t60 = 794812LL;
uint16_t x289 = UINT16_MAX;
static uint32_t x291 = 0U;
uint8_t x310 = 10U;
int64_t x312 = INT64_MAX;
volatile int32_t x323 = -1;
int64_t x324 = 63189851436462406LL;
uint16_t x326 = UINT16_MAX;
static int64_t x340 = 2LL;
static int8_t x342 = INT8_MIN;
int32_t x352 = -2;
volatile uint64_t x354 = 28861455263943LLU;
int16_t x362 = INT16_MIN;
volatile int32_t x364 = -1;
volatile int32_t t75 = 5945;
uint32_t x370 = 1048033584U;
int64_t x380 = 16210LL;
volatile uint64_t t78 = 1544767425LLU;
uint64_t x400 = UINT64_MAX;
static volatile int16_t x401 = INT16_MIN;
int8_t x403 = INT8_MIN;
volatile int64_t x407 = -1LL;
uint32_t x428 = UINT32_MAX;
static uint32_t x430 = 2725U;
uint32_t t86 = 82747214U;
volatile int32_t t87 = -57173130;
volatile int32_t x437 = -1;
int16_t x439 = 50;
int64_t t88 = -26641823569399028LL;
uint64_t x441 = 58526019LLU;
static int16_t x444 = 1;
static uint64_t t92 = 924LLU;
uint8_t x462 = UINT8_MAX;
uint64_t t93 = 188401162596LLU;
static volatile uint16_t x467 = 0U;
volatile int64_t x484 = INT64_MIN;
uint16_t x495 = UINT16_MAX;
static volatile int8_t x496 = INT8_MIN;
volatile int8_t x498 = INT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint8_t x2 = 54U;
	uint64_t t0 = 808LLU;

	t0 = ((x1|(x2-x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MIN;
	volatile int16_t x8 = -1;
	static int64_t t1 = -260223LL;

	t1 = ((x5|(x6-x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	int32_t x12 = -3491;
	volatile uint64_t t2 = 1641LLU;

	t2 = ((x9|(x10-x11))%x12);

	if (t2 != 3490LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile uint64_t x14 = 45181544491327LLU;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 607330850202033LLU;

	t3 = ((x13|(x14-x15))%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 1503U;
	int16_t x18 = INT16_MIN;
	static uint32_t x20 = 26778U;
	uint32_t t4 = 180U;

	t4 = ((x17|(x18-x19))%x20);

	if (t4 != 6621U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = UINT32_MAX;
	int32_t x24 = -1;
	volatile int64_t t5 = -229LL;

	t5 = ((x21|(x22-x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 2857;
	static int8_t x27 = INT8_MIN;
	volatile uint16_t x28 = 23387U;

	t6 = ((x25|(x26-x27))%x28);

	if (t6 != 18761LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int64_t x30 = -1LL;
	int16_t x31 = INT16_MAX;
	static int32_t x32 = INT32_MIN;
	volatile int64_t t7 = 1371432187825960LL;

	t7 = ((x29|(x30-x31))%x32);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	uint8_t x38 = UINT8_MAX;
	static uint8_t x39 = UINT8_MAX;
	int32_t x40 = -1;
	static volatile int64_t t8 = -1642LL;

	t8 = ((x37|(x38-x39))%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint8_t x42 = UINT8_MAX;
	static int8_t x43 = INT8_MIN;
	uint16_t x44 = 3406U;
	volatile int32_t t9 = 743603;

	t9 = ((x41|(x42-x43))%x44);

	if (t9 != 647) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 1;
	volatile uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 36U;
	uint32_t t10 = 110518292U;

	t10 = ((x49|(x50-x51))%x52);

	if (t10 != 17U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 3;
	int8_t x54 = -1;
	int8_t x55 = -1;
	uint64_t x56 = 489648LLU;
	volatile uint64_t t11 = 14LLU;

	t11 = ((x53|(x54-x55))%x56);

	if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = -1;
	uint64_t x60 = 1095227LLU;
	static uint64_t t12 = 428784LLU;

	t12 = ((x57|(x58-x59))%x60);

	if (t12 != 328308LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = INT8_MIN;
	int16_t x63 = 0;
	int32_t x64 = -158574529;
	volatile int32_t t13 = 7517667;

	t13 = ((x61|(x62-x63))%x64);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	volatile int16_t x66 = -80;
	int8_t x67 = 0;
	int64_t x68 = -1LL;
	int64_t t14 = 7869LL;

	t14 = ((x65|(x66-x67))%x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 6LLU;
	static volatile int16_t x74 = 2020;
	int64_t x75 = 1205545597LL;
	uint32_t x76 = 34940U;
	static uint64_t t15 = 38LLU;

	t15 = ((x73|(x74-x75))%x76);

	if (t15 != 34719LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 14095833LLU;
	uint16_t x79 = 28U;
	volatile uint8_t x80 = 1U;

	t16 = ((x77|(x78-x79))%x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x82 = 6586897672481046375LLU;
	uint8_t x83 = 15U;
	uint64_t t17 = 56718625512877318LLU;

	t17 = ((x81|(x82-x83))%x84);

	if (t17 != 458051986941868LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 213U;
	int64_t x86 = INT64_MIN;
	static int8_t x87 = -1;
	int8_t x88 = -1;
	int64_t t18 = -4LL;

	t18 = ((x85|(x86-x87))%x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x94 = INT32_MIN;
	int32_t x95 = 0;
	int8_t x96 = 15;
	static volatile uint32_t t19 = 11U;

	t19 = ((x93|(x94-x95))%x96);

	if (t19 != 7U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MIN;
	static int16_t x104 = INT16_MAX;
	uint64_t t20 = 1470884567715007LLU;

	t20 = ((x101|(x102-x103))%x104);

	if (t20 != 15LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = 28082;
	static uint64_t x107 = 644LLU;
	int32_t x108 = -1;

	t21 = ((x105|(x106-x107))%x108);

	if (t21 != 18101315156234366390LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x109 = 210937358033LLU;
	uint64_t x111 = 3LLU;
	int16_t x112 = -1;
	static volatile uint64_t t22 = 2421844525LLU;

	t22 = ((x109|(x110-x111))%x112);

	if (t22 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	volatile int8_t x116 = 17;
	static uint64_t t23 = 68707LLU;

	t23 = ((x113|(x114-x115))%x116);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x118 = INT64_MIN;
	static volatile uint64_t t24 = 10391726169649038LLU;

	t24 = ((x117|(x118-x119))%x120);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x122 = -618221310882LL;
	static int64_t x123 = INT64_MIN;
	static volatile int64_t t25 = -40354LL;

	t25 = ((x121|(x122-x123))%x124);

	if (t25 != 9223371418633464927LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = 1867367621948620LL;
	int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	volatile int64_t t26 = 1399230018035647LL;

	t26 = ((x125|(x126-x127))%x128);

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x130 = 1U;
	static int16_t x131 = -22;
	int16_t x132 = INT16_MIN;
	volatile int32_t t27 = -28099;

	t27 = ((x129|(x130-x131))%x132);

	if (t27 != -32745) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x138 = 789U;
	static uint16_t x139 = UINT16_MAX;
	int8_t x140 = INT8_MIN;
	static volatile uint32_t t28 = 0U;

	t28 = ((x137|(x138-x139))%x140);

	if (t28 != 4294902550U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x141 = INT8_MIN;
	volatile int32_t x143 = -1;
	volatile int32_t x144 = INT32_MAX;
	int32_t t29 = 3002;

	t29 = ((x141|(x142-x143))%x144);

	if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MAX;
	static uint32_t x146 = 105932U;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = 114;
	uint32_t t30 = 531358489U;

	t30 = ((x145|(x146-x147))%x148);

	if (t30 != 97U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = 15;
	int16_t x151 = -1;
	int64_t t31 = 247LL;

	t31 = ((x149|(x150-x151))%x152);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x153 = 0;
	int16_t x154 = -26;
	int32_t x155 = -1;
	static int64_t x156 = INT64_MAX;
	static int64_t t32 = 167LL;

	t32 = ((x153|(x154-x155))%x156);

	if (t32 != -25LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = UINT32_MAX;
	uint16_t x158 = 0U;
	static int8_t x160 = -1;
	uint32_t t33 = 49228226U;

	t33 = ((x157|(x158-x159))%x160);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = INT64_MIN;
	uint32_t x162 = 2U;
	int32_t x163 = 0;
	uint64_t x164 = 711578660259103LLU;
	static uint64_t t34 = 22804LLU;

	t34 = ((x161|(x162-x163))%x164);

	if (t34 != 601021236541827LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x169 = INT16_MIN;
	uint16_t x170 = 4U;
	static int32_t t35 = -154720600;

	t35 = ((x169|(x170-x171))%x172);

	if (t35 != -124) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x173 = 0;
	static int8_t x174 = 16;
	static int16_t x175 = INT16_MIN;
	uint8_t x176 = 13U;

	t36 = ((x173|(x174-x175))%x176);

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x179 = 113U;
	int64_t t37 = -1LL;

	t37 = ((x177|(x178-x179))%x180);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = -7939393LL;
	static volatile uint64_t x182 = 1254269700LLU;
	static int8_t x183 = INT8_MAX;
	static uint32_t x184 = 108U;
	volatile uint64_t t38 = 17123153LLU;

	t38 = ((x181|(x182-x183))%x184);

	if (t38 != 63LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MAX;
	static int64_t x188 = 1914389590594LL;
	volatile int64_t t39 = 123818707LL;

	t39 = ((x185|(x186-x187))%x188);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = -1;
	int64_t x190 = 973940697984LL;
	int8_t x191 = 1;
	uint8_t x192 = 1U;
	volatile int64_t t40 = 45168LL;

	t40 = ((x189|(x190-x191))%x192);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x193 = 0U;
	volatile int64_t x194 = -2308902964254LL;
	int32_t x196 = -1;
	int64_t t41 = 1603LL;

	t41 = ((x193|(x194-x195))%x196);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = 351143778093017LLU;
	volatile int16_t x199 = -1;

	t42 = ((x197|(x198-x199))%x200);

	if (t42 != 1485LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	uint32_t x203 = 122U;
	static int8_t x204 = INT8_MAX;
	int64_t t43 = -1LL;

	t43 = ((x201|(x202-x203))%x204);

	if (t43 != -122LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = 2;
	int16_t x210 = INT16_MIN;
	int32_t x211 = 646;
	int32_t t44 = -1;

	t44 = ((x209|(x210-x211))%x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	volatile uint16_t x214 = 2U;
	int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = UINT32_MAX;

	t45 = ((x213|(x214-x215))%x216);

	if (t45 != 4294967170U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x218 = -659;
	static int16_t x219 = -1;
	int32_t x220 = INT32_MIN;

	t46 = ((x217|(x218-x219))%x220);

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -2745975551LL;
	uint32_t x223 = 20612940U;
	uint64_t x224 = 1059026432LLU;
	uint64_t t47 = 614412LLU;

	t47 = ((x221|(x222-x223))%x224);

	if (t47 != 827775283LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x230 = INT32_MIN;
	int32_t x231 = -110494;
	int16_t x232 = 1;
	volatile int32_t t48 = -2;

	t48 = ((x229|(x230-x231))%x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	int32_t x235 = INT32_MIN;
	int16_t x236 = 105;
	static int64_t t49 = -1745352770LL;

	t49 = ((x233|(x234-x235))%x236);

	if (t49 != 7LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = -1;
	static uint16_t x238 = UINT16_MAX;
	static int16_t x240 = -1;
	static volatile int32_t t50 = 227;

	t50 = ((x237|(x238-x239))%x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	static volatile int16_t x242 = 127;
	int16_t x243 = 134;
	int32_t x244 = -1;
	int32_t t51 = 417107502;

	t51 = ((x241|(x242-x243))%x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	volatile int32_t x248 = -200648788;
	volatile int64_t t52 = 63518019244LL;

	t52 = ((x245|(x246-x247))%x248);

	if (t52 != -31697065LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x249 = -1;
	uint32_t x250 = 9U;
	volatile int16_t x251 = INT16_MAX;
	static int16_t x252 = INT16_MIN;
	uint32_t t53 = 5252U;

	t53 = ((x249|(x250-x251))%x252);

	if (t53 != 32767U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x258 = 37U;
	int64_t x259 = -1LL;
	static int8_t x260 = -1;
	int64_t t54 = 4992LL;

	t54 = ((x257|(x258-x259))%x260);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x263 = INT32_MIN;
	volatile int64_t x264 = 20590LL;
	int64_t t55 = -12LL;

	t55 = ((x261|(x262-x263))%x264);

	if (t55 != 16835LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;
	uint32_t t56 = 1765U;

	t56 = ((x269|(x270-x271))%x272);

	if (t56 != 2147483803U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MAX;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t57 = 205U;

	t57 = ((x273|(x274-x275))%x276);

	if (t57 != 2147185783U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t58 = 6274227;

	t58 = ((x277|(x278-x279))%x280);

	if (t58 != -32641) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int32_t t59 = -21;

	t59 = ((x281|(x282-x283))%x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x285 = UINT8_MAX;
	int64_t x286 = -1LL;
	uint8_t x288 = 2U;

	t60 = ((x285|(x286-x287))%x288);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x290 = 404041497645LLU;
	static int32_t x292 = -1;
	volatile uint64_t t61 = 962404955LLU;

	t61 = ((x289|(x290-x291))%x292);

	if (t61 != 404041498623LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x297 = 11157U;
	volatile int16_t x298 = 0;
	volatile uint16_t x299 = 28U;
	int32_t x300 = 400;
	volatile int32_t t62 = -6814;

	t62 = ((x297|(x298-x299))%x300);

	if (t62 != -11) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x301 = -1;
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 2U;
	int8_t x304 = INT8_MIN;
	static int32_t t63 = 131;

	t63 = ((x301|(x302-x303))%x304);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x309 = -16919;
	int16_t x311 = INT16_MIN;
	volatile int64_t t64 = -281534484945595232LL;

	t64 = ((x309|(x310-x311))%x312);

	if (t64 != -16917LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x313 = 4659153410LLU;
	uint8_t x314 = 0U;
	int8_t x315 = -4;
	volatile uint64_t x316 = 863152218796LLU;
	uint64_t t65 = 1090434627566954270LLU;

	t65 = ((x313|(x314-x315))%x316);

	if (t65 != 4659153414LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x317 = 820239342U;
	int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -1112823273370441809LL;
	int64_t t66 = -148235LL;

	t66 = ((x317|(x318-x319))%x320);

	if (t66 != 820239359LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x321 = 2;
	volatile uint8_t x322 = UINT8_MAX;
	int64_t t67 = -30340156900619830LL;

	t67 = ((x321|(x322-x323))%x324);

	if (t67 != 258LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x325 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	int8_t x328 = -1;
	int32_t t68 = 1593503;

	t68 = ((x325|(x326-x327))%x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x333 = UINT32_MAX;
	int8_t x334 = 13;
	uint16_t x335 = UINT16_MAX;
	volatile int8_t x336 = INT8_MIN;
	volatile uint32_t t69 = 13U;

	t69 = ((x333|(x334-x335))%x336);

	if (t69 != 127U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x337 = 5170U;
	static int64_t x338 = -14LL;
	uint32_t x339 = 456U;
	int64_t t70 = -3LL;

	t70 = ((x337|(x338-x339))%x340);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x341 = 99833897U;
	uint8_t x343 = 6U;
	int64_t x344 = 18282369811LL;
	int64_t t71 = 62599LL;

	t71 = ((x341|(x342-x343))%x344);

	if (t71 != 4294967163LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = -1;
	uint16_t x347 = 3U;
	int32_t x348 = INT32_MIN;
	int64_t t72 = 1719LL;

	t72 = ((x345|(x346-x347))%x348);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = 6276198942LLU;
	volatile int16_t x350 = INT16_MIN;
	uint8_t x351 = 6U;
	uint64_t t73 = 11LLU;

	t73 = ((x349|(x350-x351))%x352);

	if (t73 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x353 = 8087558579751638LLU;
	static uint32_t x355 = 255113U;
	volatile int32_t x356 = INT32_MIN;
	uint64_t t74 = 9634LLU;

	t74 = ((x353|(x354-x355))%x356);

	if (t74 != 8087732605619966LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x361 = 0U;
	uint8_t x363 = 41U;

	t75 = ((x361|(x362-x363))%x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x365 = INT16_MAX;
	static int32_t x366 = -1608671;
	volatile int64_t x367 = -1381832LL;
	static uint64_t x368 = 373292835577074868LLU;
	volatile uint64_t t76 = 6467384308180020LLU;

	t76 = ((x365|(x366-x367))%x368);

	if (t76 != 155395130432686475LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = INT8_MAX;
	uint32_t x371 = 231771U;
	uint16_t x372 = 9U;
	static volatile uint32_t t77 = 4U;

	t77 = ((x369|(x370-x371))%x372);

	if (t77 != 3U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 32887039LLU;
	static volatile int32_t x379 = -22;

	t78 = ((x377|(x378-x379))%x380);

	if (t78 != 8981LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x397 = 84U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -55;
	volatile uint64_t t79 = 64466125282522LLU;

	t79 = ((x397|(x398-x399))%x400);

	if (t79 != 9223372036854775927LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x402 = 57LLU;
	static uint8_t x404 = 4U;
	volatile uint64_t t80 = 270LLU;

	t80 = ((x401|(x402-x403))%x404);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = INT64_MIN;
	volatile uint8_t x406 = UINT8_MAX;
	int32_t x408 = INT32_MIN;
	static volatile int64_t t81 = 155425LL;

	t81 = ((x405|(x406-x407))%x408);

	if (t81 != -2147483392LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = INT64_MAX;
	int8_t x410 = INT8_MIN;
	static volatile int64_t x411 = -1LL;
	volatile int64_t x412 = -223023622551LL;
	int64_t t82 = -249110LL;

	t82 = ((x409|(x410-x411))%x412);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x413 = -1;
	uint8_t x414 = 11U;
	int64_t x415 = INT64_MAX;
	uint8_t x416 = 26U;
	volatile int64_t t83 = 0LL;

	t83 = ((x413|(x414-x415))%x416);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x421 = 3U;
	static int8_t x422 = -4;
	uint32_t x423 = 18004637U;
	static int64_t x424 = -52LL;
	static volatile int64_t t84 = -13539441LL;

	t84 = ((x421|(x422-x423))%x424);

	if (t84 != 43LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x425 = 30LLU;
	static uint64_t x426 = UINT64_MAX;
	volatile uint64_t x427 = 2454060LLU;
	static volatile uint64_t t85 = 570330255647790LLU;

	t85 = ((x425|(x426-x427))%x428);

	if (t85 != 4292513247LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x429 = INT16_MIN;
	static uint8_t x431 = 49U;
	int16_t x432 = -1;

	t86 = ((x429|(x430-x431))%x432);

	if (t86 != 4294937204U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x433 = 0;
	uint16_t x434 = 55U;
	static int32_t x435 = -4;
	int8_t x436 = -1;

	t87 = ((x433|(x434-x435))%x436);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x438 = 32U;
	int64_t x440 = INT64_MAX;

	t88 = ((x437|(x438-x439))%x440);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x442 = INT16_MAX;
	int64_t x443 = 11345LL;
	volatile uint64_t t89 = 3286439185265LLU;

	t89 = ((x441|(x442-x443))%x444);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x449 = 1U;
	int8_t x450 = INT8_MAX;
	uint32_t x451 = 4997786U;
	static int8_t x452 = INT8_MAX;
	static uint32_t t90 = 10366230U;

	t90 = ((x449|(x450-x451))%x452);

	if (t90 != 61U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = INT64_MAX;
	int64_t x454 = 83616528LL;
	uint64_t x455 = 49066413887090047LLU;
	int16_t x456 = INT16_MIN;
	volatile uint64_t t91 = 77396894082492LLU;

	t91 = ((x453|(x454-x455))%x456);

	if (t91 != 32767LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x457 = 62U;
	uint8_t x458 = 1U;
	static uint64_t x459 = 1275117008LLU;
	int16_t x460 = INT16_MIN;

	t92 = ((x457|(x458-x459))%x460);

	if (t92 != 18446744072434434623LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x461 = 12;
	static int16_t x463 = -1428;
	uint64_t x464 = UINT64_MAX;

	t93 = ((x461|(x462-x463))%x464);

	if (t93 != 1695LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x465 = -1;
	int16_t x466 = INT16_MAX;
	uint64_t x468 = 26960130616519LLU;
	uint64_t t94 = 7870949966LLU;

	t94 = ((x465|(x466-x467))%x468);

	if (t94 != 2622883071878LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x469 = INT16_MAX;
	uint16_t x470 = 16U;
	volatile int32_t x471 = -25243863;
	int16_t x472 = INT16_MAX;
	volatile int32_t t95 = -749;

	t95 = ((x469|(x470-x471))%x472);

	if (t95 != 770) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x481 = UINT64_MAX;
	int8_t x482 = INT8_MAX;
	static int16_t x483 = 0;
	volatile uint64_t t96 = 67733240233234810LLU;

	t96 = ((x481|(x482-x483))%x484);

	if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x489 = 14966360386853718LL;
	static uint64_t x490 = 801617LLU;
	int8_t x491 = -5;
	int16_t x492 = INT16_MIN;
	uint64_t t97 = 946251LLU;

	t97 = ((x489|(x490-x491))%x492);

	if (t97 != 14966360387648342LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x493 = INT64_MAX;
	int16_t x494 = INT16_MAX;
	volatile int64_t t98 = 830264217LL;

	t98 = ((x493|(x494-x495))%x496);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x497 = -6;
	volatile int8_t x499 = -1;
	int16_t x500 = INT16_MIN;
	static volatile int32_t t99 = 1202939;

	t99 = ((x497|(x498-x499))%x500);

	if (t99 != -6) { NG(); } else { ; }
	
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

