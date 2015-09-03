#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int8_t x8 = INT8_MIN;
uint32_t x14 = UINT32_MAX;
uint32_t x16 = 12U;
int8_t x18 = INT8_MIN;
volatile uint32_t t4 = 185U;
uint16_t x23 = UINT16_MAX;
volatile uint64_t t7 = 529858263430LLU;
volatile int64_t x40 = INT64_MIN;
uint32_t x42 = 2995523U;
uint32_t x46 = 9423227U;
static uint32_t x51 = 28U;
int16_t x54 = INT16_MAX;
int8_t x61 = INT8_MAX;
int16_t x62 = 808;
volatile int64_t x76 = -1LL;
volatile uint64_t t18 = UINT64_MAX;
uint8_t x85 = UINT8_MAX;
int8_t x86 = INT8_MIN;
static int32_t x87 = INT32_MIN;
uint32_t x88 = 3340U;
static volatile uint32_t t20 = 166782578U;
int64_t x96 = INT64_MIN;
uint64_t x99 = UINT64_MAX;
static int32_t x110 = INT32_MAX;
static int64_t x111 = INT64_MIN;
int32_t x112 = -1;
int8_t x118 = INT8_MAX;
int8_t x142 = INT8_MIN;
uint64_t t31 = UINT64_MAX;
volatile int16_t x152 = 8;
int64_t x157 = -7946853853LL;
uint32_t x160 = 353U;
int32_t x162 = INT32_MIN;
static int8_t x164 = INT8_MIN;
volatile uint32_t x167 = UINT32_MAX;
int8_t x173 = 57;
static int32_t x174 = INT32_MAX;
static int32_t x180 = INT32_MIN;
int8_t x189 = INT8_MIN;
uint32_t x193 = 18U;
static uint32_t x196 = 1621135U;
uint32_t t43 = 74U;
int32_t x212 = INT32_MAX;
int8_t x216 = 53;
int64_t t47 = 165433170293316LL;
static uint16_t x222 = 21394U;
int8_t x227 = INT8_MAX;
volatile int64_t x237 = 411397139LL;
int8_t x240 = INT8_MIN;
static volatile int32_t t53 = -9289362;
int32_t x245 = 54495504;
int64_t x248 = 1LL;
uint16_t x250 = 7932U;
uint32_t x256 = UINT32_MAX;
uint64_t x257 = 44685LLU;
static int64_t x258 = INT64_MIN;
int8_t x260 = INT8_MAX;
int32_t t58 = 801018;
int16_t x266 = INT16_MIN;
volatile uint64_t x268 = UINT64_MAX;
int64_t x274 = INT64_MAX;
uint64_t t61 = 3LLU;
uint16_t x280 = 13065U;
int64_t x282 = -761617LL;
static uint32_t x289 = 52015419U;
volatile int8_t x298 = 35;
int64_t x301 = -17LL;
uint32_t x311 = 54341U;
volatile uint64_t t70 = 56673089465LLU;
int8_t x327 = -1;
int64_t x330 = -1LL;
uint32_t x331 = 342U;
static int8_t x332 = -1;
static uint32_t x333 = UINT32_MAX;
uint64_t x348 = 696453317LLU;
static volatile uint64_t t75 = UINT64_MAX;
int32_t x369 = 188;
static volatile int64_t t80 = 56636059197LL;
uint32_t t84 = UINT32_MAX;
static int8_t x399 = -4;
uint64_t t89 = 18LLU;
int16_t x413 = 1146;
int8_t x414 = INT8_MIN;
int16_t x416 = INT16_MAX;
int16_t x428 = INT16_MIN;
volatile int8_t x433 = -1;
uint8_t x434 = 23U;
uint64_t x436 = 29078763LLU;
int64_t x437 = INT64_MIN;
int16_t x446 = -1007;
volatile int64_t t98 = -84048844394298167LL;
uint32_t x451 = UINT32_MAX;


void f0(void) {
	int32_t x2 = 9855;
	uint8_t x3 = UINT8_MAX;
	uint8_t x4 = 0U;
	int64_t t0 = 421LL;

	t0 = (x1|(x2+(x3|x4)));

	if (t0 != -9223372036854765698LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = 1510334371540942LL;
	volatile int64_t t1 = -3974LL;

	t1 = (x5|(x6+(x7|x8)));

	if (t1 != -2147483698LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int16_t x10 = 11015;
	volatile int8_t x11 = INT8_MIN;
	int16_t x12 = -10;
	static int32_t t2 = 1082965;

	t2 = (x9|(x10+(x11|x12)));

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x15 = -1;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x13|(x14+(x15|x16)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	int16_t x20 = 2194;

	t4 = (x17|(x18+(x19|x20)));

	if (t4 != 4294967167U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 757U;
	static int64_t x22 = -1LL;
	static volatile uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = 862548040228355638LL;

	t5 = (x21|(x22+(x23|x24)));

	if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	int32_t x26 = 504723;
	static int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = -4563;

	t6 = (x25|(x26+(x27|x28)));

	if (t6 != 472082) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1439212981385465136LLU;
	int16_t x30 = -164;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = UINT8_MAX;

	t7 = (x29|(x30+(x31|x32)));

	if (t7 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 66153U;
	uint32_t x34 = 1U;
	uint64_t x35 = 98722147LLU;
	int8_t x36 = INT8_MIN;
	uint64_t t8 = 52981546989760LLU;

	t8 = (x33|(x34+(x35|x36)));

	if (t8 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 4U;
	uint16_t x38 = 1U;
	int32_t x39 = -1185183;
	int64_t t9 = -81222284LL;

	t9 = (x37|(x38+(x39|x40)));

	if (t9 != -1185178LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile uint16_t x43 = 5U;
	static int32_t x44 = 180;
	static volatile uint32_t t10 = 1678971900U;

	t10 = (x41|(x42+(x43|x44)));

	if (t10 != 4294967288U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x47 = -1279;
	volatile int32_t x48 = INT32_MIN;
	volatile uint32_t t11 = 434207878U;

	t11 = (x45|(x46+(x47|x48)));

	if (t11 != 9437183U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = -1;
	int64_t x52 = -1LL;
	volatile int64_t t12 = -1988858758LL;

	t12 = (x49|(x50+(x51|x52)));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static int32_t x55 = 1;
	volatile int64_t x56 = 331821367068502LL;
	static int64_t t13 = -26LL;

	t13 = (x53|(x54+(x55|x56)));

	if (t13 != 331821367132159LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	uint8_t x58 = 3U;
	int8_t x59 = 4;
	static int16_t x60 = 15;
	volatile int64_t t14 = 3LL;

	t14 = (x57|(x58+(x59|x60)));

	if (t14 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MIN;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = -1824396;

	t15 = (x61|(x62+(x63|x64)));

	if (t15 != -2147482753) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = 7679;
	static int8_t x67 = -12;
	volatile int8_t x68 = 5;
	int32_t t16 = -848;

	t16 = (x65|(x66+(x67|x68)));

	if (t16 != 7679) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	volatile int64_t x74 = 2257757LL;
	volatile int16_t x75 = 1;
	int64_t t17 = 477695525LL;

	t17 = (x73|(x74+(x75|x76)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 815601LLU;
	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = UINT64_MAX;
	uint8_t x80 = 25U;

	t18 = (x77|(x78+(x79|x80)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	uint32_t x82 = 36116867U;
	volatile int64_t x83 = INT64_MAX;
	static int16_t x84 = -1;
	int64_t t19 = 0LL;

	t19 = (x81|(x82+(x83|x84)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {


	t20 = (x85|(x86+(x87|x88)));

	if (t20 != 2147486975U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	uint16_t x94 = 33U;
	int64_t x95 = 43495531010963021LL;
	int64_t t21 = -111543LL;

	t21 = (x93|(x94+(x95|x96)));

	if (t21 != -9179876505843812609LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 66021752LLU;
	volatile int32_t x98 = -1;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t22 = 10918060979785LLU;

	t22 = (x97|(x98+(x99|x100)));

	if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 14U;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MAX;
	volatile uint32_t t23 = 49416U;

	t23 = (x101|(x102+(x103|x104)));

	if (t23 != 33022U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int64_t t24 = -8798LL;

	t24 = (x109|(x110+(x111|x112)));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 13493U;
	volatile int32_t x116 = 13583313;
	uint32_t t25 = UINT32_MAX;

	t25 = (x113|(x114+(x115|x116)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 0U;
	static int32_t x119 = INT32_MAX;
	uint32_t x120 = 11961828U;
	volatile uint32_t t26 = 47806382U;

	t26 = (x117|(x118+(x119|x120)));

	if (t26 != 2147483774U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MAX;
	int64_t x127 = INT64_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t27 = 29274038797676533LL;

	t27 = (x125|(x126+(x127|x128)));

	if (t27 != -9223372028264841217LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	int32_t x131 = 6986114;
	volatile int32_t x132 = 21949040;
	volatile int32_t t28 = -138041;

	t28 = (x129|(x130+(x131|x132)));

	if (t28 != -15) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MIN;
	static volatile int64_t x134 = 8040625766858LL;
	static uint16_t x135 = 3U;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t29 = 158674LLU;

	t29 = (x133|(x134+(x135|x136)));

	if (t29 != 9223380077480542665LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 30U;
	int64_t x138 = 28083229451LL;
	uint64_t x139 = 4298951045762276LLU;
	int32_t x140 = -1;
	static volatile uint64_t t30 = 221151LLU;

	t30 = (x137|(x138+(x139|x140)));

	if (t30 != 28083229470LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MAX;
	static uint64_t x143 = 762697785687927LLU;
	int16_t x144 = -1;

	t31 = (x141|(x142+(x143|x144)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = 37272459216LL;
	int64_t x146 = 1189LL;
	uint32_t x147 = 821641U;
	uint8_t x148 = 6U;
	int64_t t32 = -476250142LL;

	t32 = (x145|(x146+(x147|x148)));

	if (t32 != 37272461300LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	uint32_t x150 = 36U;
	static int16_t x151 = -483;
	static volatile uint32_t t33 = UINT32_MAX;

	t33 = (x149|(x150+(x151|x152)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 259U;
	int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t34 = 66899423;

	t34 = (x153|(x154+(x155|x156)));

	if (t34 != 32639) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = INT32_MAX;
	uint32_t x159 = 3U;
	volatile int64_t t35 = -5631550LL;

	t35 = (x157|(x158+(x159|x160)));

	if (t35 != -5799369885LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 6U;
	int64_t x163 = -1LL;
	static volatile int64_t t36 = -2986022937313165939LL;

	t36 = (x161|(x162+(x163|x164)));

	if (t36 != -2147483649LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = UINT16_MAX;
	int8_t x166 = -1;
	volatile uint16_t x168 = UINT16_MAX;
	uint32_t t37 = UINT32_MAX;

	t37 = (x165|(x166+(x167|x168)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	uint64_t x171 = 116657774LLU;
	volatile uint8_t x172 = 41U;
	volatile uint64_t t38 = 650338LLU;

	t38 = (x169|(x170+(x171|x172)));

	if (t38 != 116657919LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x175 = UINT32_MAX;
	static int64_t x176 = INT64_MIN;
	int64_t t39 = -29508143929LL;

	t39 = (x173|(x174+(x175|x176)));

	if (t39 != -9223372030412324865LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 3392931094307777758LLU;
	uint64_t x178 = UINT64_MAX;
	static uint64_t x179 = 16672422160027465LLU;
	uint64_t t40 = 1690334966909826LLU;

	t40 = (x177|(x178+(x179|x180)));

	if (t40 != 18446744072903716830LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x185 = INT64_MIN;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	volatile int32_t x188 = INT32_MIN;
	volatile int64_t t41 = 999LL;

	t41 = (x185|(x186+(x187|x188)));

	if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x190 = 4U;
	uint16_t x191 = 30U;
	volatile int16_t x192 = -80;
	int32_t t42 = 31;

	t42 = (x189|(x190+(x191|x192)));

	if (t42 != -62) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = -600;
	int32_t x195 = INT32_MIN;

	t43 = (x193|(x194+(x195|x196)));

	if (t43 != 2149104183U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t44 = -187LL;

	t44 = (x197|(x198+(x199|x200)));

	if (t44 != -32769LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = 1U;
	static uint64_t x202 = 2185045493163LLU;
	int8_t x203 = -1;
	uint64_t x204 = 450089824948LLU;
	uint64_t t45 = 81173270430715255LLU;

	t45 = (x201|(x202+(x203|x204)));

	if (t45 != 2185045493163LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = 25;
	uint64_t x210 = 2608LLU;
	uint32_t x211 = UINT32_MAX;
	volatile uint64_t t46 = 44678465315520LLU;

	t46 = (x209|(x210+(x211|x212)));

	if (t46 != 4294969919LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = UINT8_MAX;
	static int64_t x214 = -440554393LL;
	int16_t x215 = -2;

	t47 = (x213|(x214+(x215|x216)));

	if (t47 != -440554241LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x217 = 45U;
	int32_t x218 = -466266828;
	static volatile int16_t x219 = INT16_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t48 = 807618783;

	t48 = (x217|(x218+(x219|x220)));

	if (t48 != -466299329) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	static uint32_t x223 = UINT32_MAX;
	static int64_t x224 = 769079LL;
	int64_t t49 = 1LL;

	t49 = (x221|(x222+(x223|x224)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 14U;
	int8_t x228 = -1;
	int32_t t50 = -95535;

	t50 = (x225|(x226+(x227|x228)));

	if (t50 != -115) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -1;
	int32_t x230 = -1;
	uint8_t x231 = 3U;
	static uint64_t x232 = 1896742701LLU;
	uint64_t t51 = UINT64_MAX;

	t51 = (x229|(x230+(x231|x232)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x238 = -7;
	volatile uint64_t x239 = UINT64_MAX;
	volatile uint64_t t52 = 5624460766LLU;

	t52 = (x237|(x238+(x239|x240)));

	if (t52 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	static volatile int32_t x243 = 712;
	int32_t x244 = -415032544;

	t53 = (x241|(x242+(x243|x244)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x246 = -1;
	volatile uint16_t x247 = 743U;
	volatile int64_t t54 = 1908LL;

	t54 = (x245|(x246+(x247|x248)));

	if (t54 != 54496246LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x249 = UINT16_MAX;
	static volatile int8_t x251 = -1;
	int16_t x252 = -1;
	int32_t t55 = 1;

	t55 = (x249|(x250+(x251|x252)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = 5;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MAX;
	uint32_t t56 = 1U;

	t56 = (x253|(x254+(x255|x256)));

	if (t56 != 4294967167U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x259 = INT32_MAX;
	uint64_t t57 = 718LLU;

	t57 = (x257|(x258+(x259|x260)));

	if (t57 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x261 = 0;
	volatile int16_t x262 = -15460;
	static int32_t x263 = -1;
	int32_t x264 = INT32_MAX;

	t58 = (x261|(x262+(x263|x264)));

	if (t58 != -15461) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x265 = INT8_MIN;
	static int16_t x267 = INT16_MAX;
	static uint64_t t59 = UINT64_MAX;

	t59 = (x265|(x266+(x267|x268)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	volatile int8_t x270 = -5;
	static uint64_t x271 = UINT64_MAX;
	static volatile int32_t x272 = 8;
	uint64_t t60 = 43276896LLU;

	t60 = (x269|(x270+(x271|x272)));

	if (t60 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x273 = INT8_MAX;
	int8_t x275 = 0;
	volatile uint64_t x276 = UINT64_MAX;

	t61 = (x273|(x274+(x275|x276)));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x277 = 3LLU;
	volatile uint8_t x278 = UINT8_MAX;
	volatile uint16_t x279 = UINT16_MAX;
	volatile uint64_t t62 = 1097LLU;

	t62 = (x277|(x278+(x279|x280)));

	if (t62 != 65791LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x281 = -440137502099LL;
	int8_t x283 = INT8_MIN;
	volatile uint32_t x284 = UINT32_MAX;
	static volatile int64_t t63 = 91745LL;

	t63 = (x281|(x282+(x283|x284)));

	if (t63 != -438087257361LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	static volatile int64_t x286 = INT64_MAX;
	int32_t x287 = -1;
	volatile int32_t x288 = INT32_MAX;
	static volatile int64_t t64 = -76LL;

	t64 = (x285|(x286+(x287|x288)));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -1;
	uint32_t t65 = 88U;

	t65 = (x289|(x290+(x291|x292)));

	if (t65 != 52015615U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -1;
	uint8_t x294 = 58U;
	uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 11074001683608LLU;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x293|(x294+(x295|x296)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MAX;
	int8_t x299 = 14;
	uint64_t x300 = 4398006106205512LLU;
	uint64_t t67 = 391435994714LLU;

	t67 = (x297|(x298+(x299|x300)));

	if (t67 != 4398006106226687LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x302 = 2007;
	static int8_t x303 = -3;
	uint16_t x304 = 101U;
	int64_t t68 = -14486LL;

	t68 = (x301|(x302+(x303|x304)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static int32_t x310 = INT32_MAX;
	uint32_t x312 = 960141U;
	uint32_t t69 = 6U;

	t69 = (x309|(x310+(x311|x312)));

	if (t69 != 2148464383U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 0U;
	int64_t x318 = INT64_MIN;
	volatile uint16_t x319 = 173U;
	uint64_t x320 = UINT64_MAX;

	t70 = (x317|(x318+(x319|x320)));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = 5LLU;
	int8_t x322 = -1;
	int8_t x323 = INT8_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x321|(x322+(x323|x324)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x325 = 249U;
	static uint32_t x326 = 1937118941U;
	uint16_t x328 = 415U;
	uint32_t t72 = 123065U;

	t72 = (x325|(x326+(x327|x328)));

	if (t72 != 1937118973U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x329 = INT16_MIN;
	static volatile int64_t t73 = -1758LL;

	t73 = (x329|(x330+(x331|x332)));

	if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x334 = -28688811;
	volatile uint64_t x335 = 7563LLU;
	uint16_t x336 = 340U;
	uint64_t t74 = UINT64_MAX;

	t74 = (x333|(x334+(x335|x336)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = INT64_MAX;
	static uint64_t x346 = UINT64_MAX;
	int64_t x347 = -1LL;

	t75 = (x345|(x346+(x347|x348)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint64_t x350 = 43515287885859LLU;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = -1;
	uint64_t t76 = 6566630621855LLU;

	t76 = (x349|(x350+(x351|x352)));

	if (t76 != 43516608643071LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x353 = 11LLU;
	static uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 835U;
	static volatile uint64_t t77 = 29235348360445LLU;

	t77 = (x353|(x354+(x355|x356)));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x361 = -51218LL;
	volatile int8_t x362 = 39;
	static int32_t x363 = INT32_MIN;
	int64_t x364 = 45535448829028LL;
	int64_t t78 = -25009873716134LL;

	t78 = (x361|(x362+(x363|x364)));

	if (t78 != -16401LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 30169532U;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x365|(x366+(x367|x368)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x370 = INT8_MAX;
	volatile int32_t x371 = 6605729;
	int64_t x372 = -1LL;

	t80 = (x369|(x370+(x371|x372)));

	if (t80 != 254LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x373 = 847913804U;
	static int32_t x374 = -33743740;
	volatile int64_t x375 = -1LL;
	static int16_t x376 = INT16_MIN;
	volatile int64_t t81 = -267779465150084LL;

	t81 = (x373|(x374+(x375|x376)));

	if (t81 != -49201LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x377 = -1;
	static int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	int8_t x380 = INT8_MAX;
	volatile int32_t t82 = 1;

	t82 = (x377|(x378+(x379|x380)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x381 = UINT32_MAX;
	static uint64_t x382 = UINT64_MAX;
	volatile int32_t x383 = -52;
	int64_t x384 = 34851LL;
	uint64_t t83 = UINT64_MAX;

	t83 = (x381|(x382+(x383|x384)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int32_t x390 = INT32_MAX;
	static volatile int8_t x391 = -1;
	int8_t x392 = 0;

	t84 = (x389|(x390+(x391|x392)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = 34;
	uint32_t x394 = 2249U;
	int16_t x395 = -1;
	int8_t x396 = 17;
	volatile uint32_t t85 = 3U;

	t85 = (x393|(x394+(x395|x396)));

	if (t85 != 2282U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x397 = 3512U;
	int16_t x398 = INT16_MIN;
	static int64_t x400 = INT64_MIN;
	int64_t t86 = -31786LL;

	t86 = (x397|(x398+(x399|x400)));

	if (t86 != -32772LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MIN;
	static int16_t x402 = -1;
	uint16_t x403 = 14U;
	int64_t x404 = INT64_MIN;
	int64_t t87 = -1859419885046LL;

	t87 = (x401|(x402+(x403|x404)));

	if (t87 != -32755LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MIN;
	int8_t x407 = -1;
	static int32_t x408 = INT32_MAX;
	int32_t t88 = -7449;

	t88 = (x405|(x406+(x407|x408)));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x409 = INT64_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	static uint16_t x411 = UINT16_MAX;
	static int8_t x412 = INT8_MAX;

	t89 = (x409|(x410+(x411|x412)));

	if (t89 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x415 = 5U;
	int32_t t90 = -338560;

	t90 = (x413|(x414+(x415|x416)));

	if (t90 != 32639) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x417 = INT16_MIN;
	int64_t x418 = -7306LL;
	uint8_t x419 = 4U;
	int8_t x420 = INT8_MIN;
	static int64_t t91 = 51164685066994211LL;

	t91 = (x417|(x418+(x419|x420)));

	if (t91 != -7430LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MIN;
	int8_t x423 = INT8_MAX;
	uint16_t x424 = 19531U;
	volatile int32_t t92 = -3;

	t92 = (x421|(x422+(x423|x424)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x425 = 3948U;
	uint16_t x426 = 5U;
	static volatile int64_t x427 = -1LL;
	volatile int64_t t93 = 261420050164LL;

	t93 = (x425|(x426+(x427|x428)));

	if (t93 != 3948LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x429 = 6093U;
	static uint8_t x430 = 14U;
	uint8_t x431 = 16U;
	volatile int64_t x432 = -1LL;
	int64_t t94 = -377182777LL;

	t94 = (x429|(x430+(x431|x432)));

	if (t94 != 6093LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x435 = INT32_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x433|(x434+(x435|x436)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x438 = INT8_MIN;
	uint16_t x439 = UINT16_MAX;
	int32_t x440 = INT32_MIN;
	volatile int64_t t96 = 3LL;

	t96 = (x437|(x438+(x439|x440)));

	if (t96 != -2147418241LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = -2301;
	int16_t x442 = INT16_MIN;
	volatile uint8_t x443 = UINT8_MAX;
	int16_t x444 = INT16_MIN;
	int32_t t97 = -4;

	t97 = (x441|(x442+(x443|x444)));

	if (t97 != -2049) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x445 = UINT32_MAX;
	int64_t x447 = -1LL;
	int32_t x448 = INT32_MAX;

	t98 = (x445|(x446+(x447|x448)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x449 = UINT32_MAX;
	int32_t x450 = INT32_MIN;
	volatile int16_t x452 = -1;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x449|(x450+(x451|x452)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

