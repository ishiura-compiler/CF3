#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
static uint8_t x22 = UINT8_MAX;
volatile uint8_t x27 = UINT8_MAX;
int64_t x46 = INT64_MIN;
int64_t x47 = -547131961900604834LL;
int32_t x48 = INT32_MIN;
int16_t x50 = 11;
int32_t t11 = 74049965;
int64_t x58 = 134399LL;
int8_t x60 = INT8_MAX;
static int8_t x62 = -1;
int16_t x65 = 2;
static int32_t x68 = -1;
static uint64_t x73 = 3LLU;
uint64_t t17 = 6945838224906LLU;
int64_t x83 = 129903254LL;
uint32_t x89 = UINT32_MAX;
uint32_t x109 = UINT32_MAX;
static int16_t x112 = INT16_MIN;
int32_t t25 = 23;
volatile int32_t t26 = -1;
volatile uint16_t x127 = 943U;
volatile int32_t t27 = 13219841;
uint64_t x130 = 2859LLU;
uint64_t x134 = 1146458593961579826LLU;
volatile int32_t t30 = 93;
uint64_t x143 = 3205890254LLU;
volatile int32_t t32 = 5;
static volatile int32_t t33 = 513954;
volatile int64_t x155 = 7350LL;
int16_t x156 = INT16_MAX;
volatile int32_t x164 = INT32_MIN;
int8_t x172 = -2;
int32_t t37 = -226341;
int16_t x183 = -1;
uint32_t t42 = UINT32_MAX;
int64_t x195 = -1105554425361302LL;
int16_t x198 = -1;
uint32_t x201 = UINT32_MAX;
volatile uint32_t x202 = 2169834U;
uint32_t t45 = 21U;
int64_t t46 = INT64_MIN;
volatile uint64_t t48 = 6953838218391128854LLU;
int8_t x218 = INT8_MIN;
static volatile int8_t x220 = 0;
static volatile int32_t t49 = -2401;
static int8_t x225 = INT8_MIN;
static volatile uint8_t x228 = 3U;
int32_t x231 = INT32_MIN;
int16_t x239 = -1;
uint32_t x241 = UINT32_MAX;
volatile uint16_t x242 = UINT16_MAX;
int8_t x248 = 1;
int64_t x249 = -1LL;
uint16_t x250 = 19U;
volatile uint64_t x268 = UINT64_MAX;
int64_t t61 = 3743902LL;
uint64_t x283 = 453276313014995497LLU;
int16_t x285 = INT16_MIN;
static uint16_t x289 = UINT16_MAX;
volatile int64_t x292 = -98895730LL;
int32_t t64 = 0;
uint32_t x294 = 3291810U;
uint32_t x301 = 32079U;
static int64_t x302 = -1LL;
volatile int16_t x303 = 26;
int64_t x311 = INT64_MIN;
volatile int32_t t69 = 772;
int8_t x316 = 0;
volatile int32_t t70 = -1140;
static volatile int8_t x318 = 7;
int64_t x320 = 12474LL;
int16_t x327 = INT16_MIN;
int32_t t73 = -27493;
volatile uint16_t x337 = 0U;
uint16_t x338 = 8077U;
static volatile uint32_t x345 = 59868U;
volatile int8_t x347 = 40;
volatile uint32_t x349 = UINT32_MAX;
volatile uint64_t x351 = UINT64_MAX;
int16_t x353 = INT16_MAX;
uint8_t x358 = UINT8_MAX;
int32_t t80 = -8;
static uint32_t x364 = 21264U;
volatile int64_t t81 = 41978LL;
int16_t x374 = INT16_MAX;
int16_t x375 = INT16_MIN;
volatile uint32_t t83 = 87710U;
int16_t x378 = -1;
volatile int8_t x383 = INT8_MIN;
static int16_t x386 = INT16_MIN;
static uint64_t t86 = 95911168585052375LLU;
volatile int16_t x390 = INT16_MIN;
int8_t x395 = 0;
int32_t t90 = 345128;
int64_t x406 = INT64_MIN;
static volatile uint16_t x408 = UINT16_MAX;
volatile int32_t t92 = 866706;
static volatile uint64_t x417 = 12LLU;
static int64_t x419 = -653LL;
static volatile int16_t x426 = INT16_MIN;
int32_t x428 = INT32_MIN;
int32_t x430 = INT32_MIN;
volatile uint32_t x434 = UINT32_MAX;
static int16_t x442 = INT16_MIN;
uint16_t x444 = UINT16_MAX;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x3 = 5U;
	static uint64_t x4 = 3154497745837642654LLU;
	volatile int32_t t0 = -977984330;

	t0 = (x1+((x2-x3)<=x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	volatile uint16_t x6 = 2U;
	uint64_t x7 = 881328530LLU;
	int64_t x8 = 8294249094347056LL;
	int32_t t1 = -426778;

	t1 = (x5+((x6-x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MIN;
	int64_t x11 = -778791350607LL;
	volatile uint8_t x12 = 4U;
	volatile int64_t t2 = 1503270LL;

	t2 = (x9+((x10-x11)<=x12));

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 0U;
	uint16_t x14 = 7861U;
	int16_t x15 = -1;
	int16_t x16 = -1;
	static volatile uint32_t t3 = 32498590U;

	t3 = (x13+((x14-x15)<=x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 23655U;
	volatile int8_t x18 = 1;
	int8_t x19 = 1;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 22;

	t4 = (x17+((x18-x19)<=x20));

	if (t4 != 23655) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 75U;
	volatile uint64_t x23 = 1270911352LLU;
	static uint16_t x24 = 13871U;
	uint32_t t5 = 75U;

	t5 = (x21+((x22-x23)<=x24));

	if (t5 != 75U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 25903U;
	int16_t x26 = INT16_MIN;
	uint16_t x28 = 501U;
	volatile uint32_t t6 = 5075276U;

	t6 = (x25+((x26-x27)<=x28));

	if (t6 != 25904U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 114093447093062LL;
	volatile int8_t x34 = -14;
	static uint32_t x35 = 47U;
	uint64_t x36 = 488LLU;
	volatile int64_t t7 = -43371168677LL;

	t7 = (x33+((x34-x35)<=x36));

	if (t7 != 114093447093062LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	static int32_t x38 = INT32_MAX;
	uint16_t x39 = 10U;
	uint16_t x40 = 8990U;
	int64_t t8 = INT64_MIN;

	t8 = (x37+((x38-x39)<=x40));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	static uint64_t x42 = 1LLU;
	static int8_t x43 = INT8_MAX;
	int64_t x44 = 394337403247227954LL;
	int32_t t9 = 0;

	t9 = (x41+((x42-x43)<=x44));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 28U;
	volatile int32_t t10 = 205968302;

	t10 = (x45+((x46-x47)<=x48));

	if (t10 != 29) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 4U;

	t11 = (x49+((x50-x51)<=x52));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	static uint8_t x54 = 3U;
	int64_t x55 = -1LL;
	uint16_t x56 = UINT16_MAX;
	static int32_t t12 = -15886;

	t12 = (x53+((x54-x55)<=x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x57 = 58191332281LL;
	static int64_t x59 = 57589146LL;
	int64_t t13 = 36LL;

	t13 = (x57+((x58-x59)<=x60));

	if (t13 != 58191332282LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t14 = 906907846;

	t14 = (x61+((x62-x63)<=x64));

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x66 = 29146592;
	int8_t x67 = INT8_MIN;
	volatile int32_t t15 = 53938;

	t15 = (x65+((x66-x67)<=x68));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static volatile int64_t x70 = -1LL;
	static int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MAX;
	int32_t t16 = 136170102;

	t16 = (x69+((x70-x71)<=x72));

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -238118LL;
	int8_t x75 = -15;
	volatile int32_t x76 = -4011;

	t17 = (x73+((x74-x75)<=x76));

	if (t17 != 4LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 4228760852087LL;
	int16_t x78 = INT16_MAX;
	volatile int64_t x79 = -1LL;
	int8_t x80 = INT8_MAX;
	volatile int64_t t18 = 3005578526307LL;

	t18 = (x77+((x78-x79)<=x80));

	if (t18 != 4228760852087LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MIN;
	int64_t x84 = -1LL;
	uint64_t t19 = 48455908283460464LLU;

	t19 = (x81+((x82-x83)<=x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	static int64_t x86 = 1122560LL;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t20 = 227097617;

	t20 = (x85+((x86-x87)<=x88));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = 4096403125821358583LLU;
	int32_t x92 = 127178;
	uint32_t t21 = UINT32_MAX;

	t21 = (x89+((x90-x91)<=x92));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = 130053U;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x101+((x102-x103)<=x104));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -7;
	volatile uint8_t x106 = UINT8_MAX;
	static int32_t x107 = -1;
	int8_t x108 = INT8_MAX;
	int32_t t23 = -3;

	t23 = (x105+((x106-x107)<=x108));

	if (t23 != -7) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x110 = 1250147416LLU;
	int8_t x111 = 1;
	volatile uint32_t t24 = 0U;

	t24 = (x109+((x110-x111)<=x112));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = 27;
	static uint32_t x114 = 393668310U;
	int16_t x115 = 152;
	int16_t x116 = -1;

	t25 = (x113+((x114-x115)<=x116));

	if (t25 != 28) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x117 = 18U;
	volatile int8_t x118 = INT8_MAX;
	static int64_t x119 = -11408366910906907LL;
	int32_t x120 = -175936118;

	t26 = (x117+((x118-x119)<=x120));

	if (t26 != 18) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = -1;
	volatile uint64_t x126 = UINT64_MAX;
	uint64_t x128 = 39997996990LLU;

	t27 = (x125+((x126-x127)<=x128));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x129 = -12869853;
	int32_t x131 = 22;
	int16_t x132 = 22;
	volatile int32_t t28 = 2;

	t28 = (x129+((x130-x131)<=x132));

	if (t28 != -12869853) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x133 = 438664988273LLU;
	static uint16_t x135 = 3897U;
	volatile uint64_t x136 = UINT64_MAX;
	static uint64_t t29 = 849250698461LLU;

	t29 = (x133+((x134-x135)<=x136));

	if (t29 != 438664988274LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = -1;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = INT8_MIN;
	static int32_t x140 = 65176238;

	t30 = (x137+((x138-x139)<=x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	static uint16_t x142 = 22001U;
	uint32_t x144 = 4212931U;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x141+((x142-x143)<=x144));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x145 = UINT8_MAX;
	volatile int32_t x146 = 46977;
	int8_t x147 = INT8_MAX;
	volatile int64_t x148 = INT64_MAX;

	t32 = (x145+((x146-x147)<=x148));

	if (t32 != 256) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x149 = INT16_MIN;
	int16_t x150 = 0;
	int16_t x151 = -1;
	int32_t x152 = 125572145;

	t33 = (x149+((x150-x151)<=x152));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x153 = 2131254674U;
	static int32_t x154 = INT32_MAX;
	static uint32_t t34 = 2U;

	t34 = (x153+((x154-x155)<=x156));

	if (t34 != 2131254674U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = -1;
	volatile int16_t x158 = -1;
	volatile uint8_t x159 = 24U;
	int32_t x160 = -877520;
	static int32_t t35 = 9;

	t35 = (x157+((x158-x159)<=x160));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	static volatile int8_t x162 = -1;
	static int16_t x163 = INT16_MIN;
	static volatile int32_t t36 = 24;

	t36 = (x161+((x162-x163)<=x164));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -52720729;
	volatile uint8_t x170 = UINT8_MAX;
	static uint64_t x171 = 78820LLU;

	t37 = (x169+((x170-x171)<=x172));

	if (t37 != -52720728) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -1LL;
	static uint16_t x174 = UINT16_MAX;
	uint32_t x175 = 767163U;
	int32_t x176 = INT32_MAX;
	int64_t t38 = -2992991952LL;

	t38 = (x173+((x174-x175)<=x176));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 114765LLU;
	volatile int8_t x179 = INT8_MAX;
	uint32_t x180 = 12900U;
	static volatile int32_t t39 = INT32_MIN;

	t39 = (x177+((x178-x179)<=x180));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x181 = INT8_MAX;
	int16_t x182 = -6;
	int32_t x184 = -1;
	volatile int32_t t40 = -12;

	t40 = (x181+((x182-x183)<=x184));

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MAX;
	int16_t x187 = INT16_MAX;
	int64_t x188 = 67766LL;
	static volatile int64_t t41 = -57275158609307396LL;

	t41 = (x185+((x186-x187)<=x188));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = 0;
	uint32_t x191 = 20676580U;
	int64_t x192 = 26366LL;

	t42 = (x189+((x190-x191)<=x192));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x193 = 3U;
	int8_t x194 = INT8_MIN;
	volatile int16_t x196 = INT16_MIN;
	static volatile int32_t t43 = 422;

	t43 = (x193+((x194-x195)<=x196));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 9352325U;
	static int64_t x199 = INT64_MIN;
	uint8_t x200 = UINT8_MAX;
	volatile uint32_t t44 = 1013280U;

	t44 = (x197+((x198-x199)<=x200));

	if (t44 != 9352325U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x203 = -29513727;
	uint64_t x204 = 16432195136435LLU;

	t45 = (x201+((x202-x203)<=x204));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MIN;
	int64_t x206 = 209891203365924LL;
	static uint8_t x207 = UINT8_MAX;
	int32_t x208 = 496002222;

	t46 = (x205+((x206-x207)<=x208));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = -1LL;
	int32_t x210 = -341;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	int64_t t47 = 1226248LL;

	t47 = (x209+((x210-x211)<=x212));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 0LLU;
	volatile int32_t x214 = -1;
	int8_t x215 = -1;
	int64_t x216 = INT64_MAX;

	t48 = (x213+((x214-x215)<=x216));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = INT16_MAX;
	int16_t x219 = 1944;

	t49 = (x217+((x218-x219)<=x220));

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x221 = INT8_MIN;
	uint16_t x222 = 0U;
	int64_t x223 = -1LL;
	static uint32_t x224 = 21135536U;
	static volatile int32_t t50 = 24864290;

	t50 = (x221+((x222-x223)<=x224));

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x226 = 1U;
	int32_t x227 = INT32_MAX;
	volatile int32_t t51 = 1239527;

	t51 = (x225+((x226-x227)<=x228));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = 902U;
	int32_t x230 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t52 = -1039020379;

	t52 = (x229+((x230-x231)<=x232));

	if (t52 != 902) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MAX;
	volatile uint32_t x238 = 5U;
	volatile uint32_t x240 = 171708U;
	int32_t t53 = 888226;

	t53 = (x237+((x238-x239)<=x240));

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x243 = 8U;
	volatile uint64_t x244 = 733033363602307LLU;
	uint32_t t54 = 538378U;

	t54 = (x241+((x242-x243)<=x244));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = INT8_MAX;
	volatile int16_t x247 = INT16_MAX;
	static volatile uint32_t t55 = 1U;

	t55 = (x245+((x246-x247)<=x248));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x251 = INT16_MAX;
	static int32_t x252 = 292472139;
	static volatile int64_t t56 = 877509518112LL;

	t56 = (x249+((x250-x251)<=x252));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 60152926U;
	uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	static uint32_t t57 = 1265U;

	t57 = (x261+((x262-x263)<=x264));

	if (t57 != 60152927U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x265 = 328803070251236180LLU;
	uint8_t x266 = UINT8_MAX;
	static int64_t x267 = -1LL;
	uint64_t t58 = 10101699LLU;

	t58 = (x265+((x266-x267)<=x268));

	if (t58 != 328803070251236181LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 1036798LLU;
	volatile int32_t x270 = -1;
	int32_t x271 = -1;
	int16_t x272 = -1;
	volatile uint64_t t59 = 991702290LLU;

	t59 = (x269+((x270-x271)<=x272));

	if (t59 != 1036798LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = 121764540U;
	int32_t x274 = 0;
	uint8_t x275 = 20U;
	int8_t x276 = INT8_MIN;
	uint32_t t60 = 27U;

	t60 = (x273+((x274-x275)<=x276));

	if (t60 != 121764540U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MAX;

	t61 = (x277+((x278-x279)<=x280));

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x281 = 1U;
	uint64_t x282 = 534189143LLU;
	int16_t x284 = -4000;
	volatile int32_t t62 = -672223516;

	t62 = (x281+((x282-x283)<=x284));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	volatile int32_t t63 = 10886;

	t63 = (x285+((x286-x287)<=x288));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x290 = 732720;
	int8_t x291 = -20;

	t64 = (x289+((x290-x291)<=x292));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = 697U;
	volatile int8_t x295 = 2;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t65 = -39;

	t65 = (x293+((x294-x295)<=x296));

	if (t65 != 698) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x297 = 2610;
	volatile int64_t x298 = INT64_MAX;
	volatile int8_t x299 = 10;
	int8_t x300 = -1;
	static volatile int32_t t66 = 23;

	t66 = (x297+((x298-x299)<=x300));

	if (t66 != 2610) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x304 = 22806183LL;
	uint32_t t67 = 14566176U;

	t67 = (x301+((x302-x303)<=x304));

	if (t67 != 32080U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x305 = 58308U;
	static int16_t x306 = 286;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = 20U;
	volatile uint32_t t68 = 2623659U;

	t68 = (x305+((x306-x307)<=x308));

	if (t68 != 58309U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	volatile int32_t x310 = -5326;
	int64_t x312 = 1082903819828772LL;

	t69 = (x309+((x310-x311)<=x312));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x313 = 0U;
	static volatile int32_t x314 = 893989;
	uint64_t x315 = 10001568846931LLU;

	t70 = (x313+((x314-x315)<=x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = 1757560437U;
	int16_t x319 = INT16_MIN;
	static volatile uint32_t t71 = 48051U;

	t71 = (x317+((x318-x319)<=x320));

	if (t71 != 1757560437U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	static int32_t t72 = 2448374;

	t72 = (x325+((x326-x327)<=x328));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -1;
	uint32_t x330 = 1U;
	static volatile int8_t x331 = INT8_MIN;
	int16_t x332 = -1;

	t73 = (x329+((x330-x331)<=x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x333 = UINT64_MAX;
	static int16_t x334 = -1;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x333+((x334-x335)<=x336));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x339 = 0U;
	uint16_t x340 = 321U;
	volatile int32_t t75 = 7926390;

	t75 = (x337+((x338-x339)<=x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x341 = 881;
	uint32_t x342 = 68972577U;
	static int16_t x343 = 4200;
	int16_t x344 = 334;
	int32_t t76 = -1;

	t76 = (x341+((x342-x343)<=x344));

	if (t76 != 881) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x346 = INT32_MAX;
	int32_t x348 = -485;
	static volatile uint32_t t77 = 15171U;

	t77 = (x345+((x346-x347)<=x348));

	if (t77 != 59868U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x350 = -1;
	uint64_t x352 = 1255374LLU;
	static uint32_t t78 = 198497053U;

	t78 = (x349+((x350-x351)<=x352));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x354 = INT8_MAX;
	static int16_t x355 = -2;
	uint16_t x356 = 196U;
	volatile int32_t t79 = 2281;

	t79 = (x353+((x354-x355)<=x356));

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = -1;
	static int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;

	t80 = (x357+((x358-x359)<=x360));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x361 = -778059LL;
	volatile uint32_t x362 = 59983U;
	int16_t x363 = 2;

	t81 = (x361+((x362-x363)<=x364));

	if (t81 != -778059LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x369 = INT32_MIN;
	uint64_t x370 = 6362LLU;
	int32_t x371 = INT32_MIN;
	int32_t x372 = 156766;
	static int32_t t82 = INT32_MIN;

	t82 = (x369+((x370-x371)<=x372));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = UINT32_MAX;
	volatile uint32_t x376 = UINT32_MAX;

	t83 = (x373+((x374-x375)<=x376));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = INT64_MIN;
	int16_t x379 = 1;
	static int8_t x380 = 30;
	int64_t t84 = 211056LL;

	t84 = (x377+((x378-x379)<=x380));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MAX;
	static int8_t x382 = INT8_MAX;
	static int16_t x384 = INT16_MIN;
	static volatile int32_t t85 = INT32_MAX;

	t85 = (x381+((x382-x383)<=x384));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x387 = 659U;
	int16_t x388 = 1;

	t86 = (x385+((x386-x387)<=x388));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	volatile int8_t x391 = 1;
	static int64_t x392 = -4869527LL;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x389+((x390-x391)<=x392));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 4971941318LLU;
	int64_t x394 = INT64_MAX;
	uint8_t x396 = 1U;
	volatile uint64_t t88 = 944873128740866LLU;

	t88 = (x393+((x394-x395)<=x396));

	if (t88 != 4971941318LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = UINT32_MAX;
	static int32_t x398 = -17401;
	static volatile uint64_t x399 = 50965254834454LLU;
	int16_t x400 = -1;
	volatile uint32_t t89 = 1371551989U;

	t89 = (x397+((x398-x399)<=x400));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;

	t90 = (x401+((x402-x403)<=x404));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MIN;
	static int16_t x407 = INT16_MIN;
	static int64_t t91 = -1LL;

	t91 = (x405+((x406-x407)<=x408));

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MAX;
	uint8_t x411 = 1U;
	uint32_t x412 = UINT32_MAX;

	t92 = (x409+((x410-x411)<=x412));

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	int64_t x414 = -1LL;
	int16_t x415 = -253;
	int64_t x416 = INT64_MIN;
	int32_t t93 = -54;

	t93 = (x413+((x414-x415)<=x416));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x418 = INT32_MIN;
	int64_t x420 = 745545041128LL;
	volatile uint64_t t94 = 2LLU;

	t94 = (x417+((x418-x419)<=x420));

	if (t94 != 13LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = INT32_MAX;
	uint32_t x427 = UINT32_MAX;
	volatile int32_t t95 = INT32_MAX;

	t95 = (x425+((x426-x427)<=x428));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x429 = UINT16_MAX;
	int8_t x431 = -3;
	uint8_t x432 = 4U;
	volatile int32_t t96 = 2389;

	t96 = (x429+((x430-x431)<=x432));

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = 7058145975LLU;
	static int32_t x435 = INT32_MIN;
	int16_t x436 = -6235;
	uint64_t t97 = 118067476LLU;

	t97 = (x433+((x434-x435)<=x436));

	if (t97 != 7058145976LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x438 = 6;
	int8_t x439 = -1;
	volatile int16_t x440 = INT16_MIN;
	int32_t t98 = 576;

	t98 = (x437+((x438-x439)<=x440));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = 0;
	uint16_t x443 = UINT16_MAX;
	volatile int32_t t99 = -6388;

	t99 = (x441+((x442-x443)<=x444));

	if (t99 != 1) { NG(); } else { ; }
	
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

