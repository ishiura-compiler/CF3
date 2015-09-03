#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x4 = UINT8_MAX;
int32_t t0 = 185988590;
uint16_t x9 = 5U;
int64_t x21 = 11671850216744486LL;
uint32_t x24 = 210027U;
uint8_t x27 = 41U;
int32_t x35 = -1;
uint64_t x41 = UINT64_MAX;
volatile int32_t x49 = -1;
volatile int16_t x50 = INT16_MIN;
volatile uint64_t t15 = 7LLU;
uint16_t x73 = 2U;
int64_t t17 = -162148075840019LL;
static volatile int32_t t18 = -3016;
volatile uint64_t x88 = 5326807430874LLU;
static int32_t x93 = INT32_MIN;
int8_t x97 = INT8_MIN;
int32_t x100 = INT32_MIN;
uint32_t x107 = 12U;
int64_t t25 = 477LL;
uint64_t x112 = UINT64_MAX;
volatile uint16_t x113 = 11342U;
int8_t x115 = INT8_MAX;
uint16_t x117 = 0U;
int8_t x118 = 3;
int64_t x121 = INT64_MIN;
uint64_t x127 = 16223LLU;
uint64_t t30 = 393253LLU;
volatile uint8_t x130 = 110U;
static volatile int16_t x133 = INT16_MAX;
static int16_t x136 = INT16_MIN;
int64_t x144 = INT64_MAX;
uint64_t t38 = 23894594654476757LLU;
uint16_t x167 = UINT16_MAX;
int32_t t39 = 16113907;
static volatile int16_t x171 = 0;
uint64_t x172 = 53199001200754LLU;
volatile uint32_t x173 = UINT32_MAX;
volatile int32_t t43 = 1;
static uint64_t x186 = UINT64_MAX;
static volatile int16_t x202 = INT16_MAX;
static int64_t x211 = 7905LL;
volatile int16_t x212 = -10;
int8_t x216 = 32;
static int16_t x218 = -281;
int16_t x221 = -1;
volatile int64_t x222 = 8282226965889LL;
int32_t t53 = 9515;
int16_t x231 = INT16_MIN;
volatile int8_t x233 = INT8_MAX;
int32_t x234 = INT32_MIN;
static int32_t t55 = 1;
int8_t x238 = INT8_MIN;
volatile int32_t t56 = -723;
volatile int8_t x251 = -5;
volatile int64_t t60 = -977LL;
int32_t x258 = INT32_MIN;
static int8_t x263 = -20;
int32_t x264 = INT32_MIN;
static volatile int32_t t62 = -34274997;
static int8_t x269 = INT8_MIN;
int8_t x274 = INT8_MIN;
int64_t x283 = INT64_MIN;
static volatile int64_t x286 = INT64_MAX;
volatile int32_t t68 = 990970356;
int64_t t69 = -304273372LL;
int32_t x294 = -1;
int64_t t71 = 7142952023290139LL;
uint32_t x301 = UINT32_MAX;
uint16_t x305 = 23075U;
volatile uint64_t x306 = UINT64_MAX;
static uint64_t x308 = 1LLU;
int32_t x309 = INT32_MIN;
int64_t x310 = INT64_MIN;
static volatile int32_t t80 = -111482;
uint8_t x338 = UINT8_MAX;
int16_t x340 = INT16_MIN;
int8_t x347 = 0;
static int16_t x349 = INT16_MIN;
static volatile uint32_t t84 = 2900532U;
int8_t x356 = INT8_MIN;
int16_t x360 = INT16_MAX;
uint16_t x369 = 19872U;
int64_t x376 = -31411LL;
int16_t x378 = INT16_MIN;
volatile int32_t x386 = -1124734;
static volatile int16_t x402 = -366;
int8_t x406 = -1;
int64_t x410 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = 4888U;
	uint16_t x3 = 498U;

	t0 = ((x1==x2)^(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MAX;
	int32_t x11 = -422242;
	volatile int64_t x12 = -115237711266LL;
	volatile int64_t t1 = 42789369192LL;

	t1 = ((x9==x10)^(x11/x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -3;
	int8_t x14 = 1;
	int32_t x15 = INT32_MAX;
	int64_t x16 = -1LL;
	int64_t t2 = 20495606LL;

	t2 = ((x13==x14)^(x15/x16));

	if (t2 != -2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = -1058;
	uint32_t x19 = UINT32_MAX;
	static uint32_t x20 = 490U;
	uint32_t t3 = 10808U;

	t3 = ((x17==x18)^(x19/x20));

	if (t3 != 8765239U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = 13925778868648LL;
	int8_t x23 = -1;
	static volatile uint32_t t4 = 1U;

	t4 = ((x21==x22)^(x23/x24));

	if (t4 != 20449U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -103868;
	volatile uint32_t x26 = 0U;
	uint8_t x28 = UINT8_MAX;
	int32_t t5 = -9544;

	t5 = ((x25==x26)^(x27/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = 0;
	int16_t x31 = -2;
	int32_t x32 = -959;
	volatile int32_t t6 = -832646;

	t6 = ((x29==x30)^(x31/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 2498015LLU;
	volatile int16_t x34 = INT16_MAX;
	int64_t x36 = -1LL;
	int64_t t7 = -422028530623LL;

	t7 = ((x33==x34)^(x35/x36));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 106U;
	static int16_t x40 = 242;
	int32_t t8 = -6143325;

	t8 = ((x37==x38)^(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	uint32_t x43 = 26U;
	uint16_t x44 = 31U;
	volatile uint32_t t9 = 0U;

	t9 = ((x41==x42)^(x43/x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = 0;
	uint8_t x46 = 5U;
	static uint8_t x47 = 1U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = 2;

	t10 = ((x45==x46)^(x47/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x51 = -1;
	uint16_t x52 = 15843U;
	int32_t t11 = 1;

	t11 = ((x49==x50)^(x51/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = 7811;
	int64_t x55 = INT64_MIN;
	static int64_t x56 = INT64_MAX;
	volatile int64_t t12 = 10542LL;

	t12 = ((x53==x54)^(x55/x56));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 186U;
	uint16_t x59 = 1527U;
	uint32_t x60 = UINT32_MAX;
	static uint32_t t13 = 14699U;

	t13 = ((x57==x58)^(x59/x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = 11132;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = 4045LLU;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t14 = 264835709LLU;

	t14 = ((x61==x62)^(x63/x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = -3;
	uint64_t x67 = 490348083024046490LLU;
	uint64_t x68 = UINT64_MAX;

	t15 = ((x65==x66)^(x67/x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = UINT16_MAX;
	static int16_t x70 = INT16_MIN;
	volatile int32_t x71 = -1;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t16 = -21783876;

	t16 = ((x69==x70)^(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x74 = INT8_MAX;
	static int64_t x75 = INT64_MIN;
	int32_t x76 = -1531207;

	t17 = ((x73==x74)^(x75/x76));

	if (t17 != 6023595788717LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -120420693314366546LL;
	uint64_t x78 = 51LLU;
	int32_t x79 = INT32_MAX;
	int32_t x80 = INT32_MIN;

	t18 = ((x77==x78)^(x79/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -1;
	volatile int8_t x82 = INT8_MAX;
	static int64_t x83 = -52981521LL;
	uint8_t x84 = UINT8_MAX;
	int64_t t19 = -413794LL;

	t19 = ((x81==x82)^(x83/x84));

	if (t19 != -207770LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = 8954740416130871LL;
	volatile int16_t x87 = 9838;
	uint64_t t20 = 224767311LLU;

	t20 = ((x85==x86)^(x87/x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = 109112736U;
	volatile int8_t x91 = -6;
	uint8_t x92 = 86U;
	int32_t t21 = 1349;

	t21 = ((x89==x90)^(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	int32_t x95 = -12;
	int8_t x96 = INT8_MIN;
	volatile int32_t t22 = -217202035;

	t22 = ((x93==x94)^(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x98 = 237940U;
	uint16_t x99 = 475U;
	int32_t t23 = 11883;

	t23 = ((x97==x98)^(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x102 = -4;
	int16_t x103 = -1;
	int16_t x104 = -1;
	static volatile int32_t t24 = 43;

	t24 = ((x101==x102)^(x103/x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = 56626936302546LL;
	int64_t x108 = INT64_MAX;

	t25 = ((x105==x106)^(x107/x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	volatile int16_t x110 = INT16_MIN;
	uint8_t x111 = 113U;
	volatile uint64_t t26 = 653072936152521LLU;

	t26 = ((x109==x110)^(x111/x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x114 = INT64_MIN;
	int32_t x116 = 1;
	volatile int32_t t27 = 185825298;

	t27 = ((x113==x114)^(x115/x116));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x119 = 6U;
	int32_t x120 = 13;
	static volatile int32_t t28 = 3901910;

	t28 = ((x117==x118)^(x119/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = -105919440352LL;
	volatile uint16_t x123 = 8582U;
	int8_t x124 = INT8_MAX;
	int32_t t29 = 12775855;

	t29 = ((x121==x122)^(x123/x124));

	if (t29 != 67) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	volatile int32_t x126 = -3016;
	int8_t x128 = -9;

	t30 = ((x125==x126)^(x127/x128));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static int16_t x131 = -3709;
	int32_t x132 = INT32_MIN;
	int32_t t31 = 1;

	t31 = ((x129==x130)^(x131/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x134 = -35416;
	volatile int32_t x135 = INT32_MAX;
	volatile int32_t t32 = 127317516;

	t32 = ((x133==x134)^(x135/x136));

	if (t32 != -65535) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x138 = INT64_MAX;
	uint16_t x139 = 3771U;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t33 = 4402605838LLU;

	t33 = ((x137==x138)^(x139/x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	int32_t x143 = -1;
	int64_t t34 = -293094263762453115LL;

	t34 = ((x141==x142)^(x143/x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 1466724U;
	volatile int16_t x146 = -1;
	static volatile int32_t x147 = INT32_MIN;
	static int64_t x148 = INT64_MIN;
	int64_t t35 = 333LL;

	t35 = ((x145==x146)^(x147/x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;
	static uint32_t x151 = 595687U;
	int64_t x152 = -1LL;
	int64_t t36 = 62179105259350963LL;

	t36 = ((x149==x150)^(x151/x152));

	if (t36 != -595687LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	uint32_t x155 = 19725U;
	int8_t x156 = INT8_MAX;
	uint32_t t37 = 712916550U;

	t37 = ((x153==x154)^(x155/x156));

	if (t37 != 155U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MAX;
	static volatile int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = 4102763LLU;

	t38 = ((x161==x162)^(x163/x164));

	if (t38 != 4496175887739LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 0U;
	uint32_t x166 = 4260434U;
	int32_t x168 = INT32_MAX;

	t39 = ((x165==x166)^(x167/x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x169 = 1U;
	int16_t x170 = -432;
	volatile uint64_t t40 = 3870477786709096LLU;

	t40 = ((x169==x170)^(x171/x172));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = 206361187284835618LL;
	static volatile int8_t x175 = 4;
	int16_t x176 = INT16_MIN;
	int32_t t41 = -77602;

	t41 = ((x173==x174)^(x175/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = -630LL;
	int64_t x178 = INT64_MAX;
	uint16_t x179 = 29563U;
	volatile int16_t x180 = INT16_MAX;
	int32_t t42 = 15;

	t42 = ((x177==x178)^(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = 3474;
	volatile int32_t x182 = -1;
	uint8_t x183 = 2U;
	int8_t x184 = INT8_MIN;

	t43 = ((x181==x182)^(x183/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -187286797213759LL;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t44 = 1033537;

	t44 = ((x185==x186)^(x187/x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x189 = -1;
	uint8_t x190 = UINT8_MAX;
	int64_t x191 = INT64_MIN;
	int32_t x192 = 13619;
	volatile int64_t t45 = 58617570147008246LL;

	t45 = ((x189==x190)^(x191/x192));

	if (t45 != -677242972087141LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 18340896165601256LLU;
	int8_t x198 = 1;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	static int32_t t46 = -48733748;

	t46 = ((x197==x198)^(x199/x200));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 25235U;
	static int8_t x203 = INT8_MIN;
	int8_t x204 = 1;
	volatile int32_t t47 = -29902931;

	t47 = ((x201==x202)^(x203/x204));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x205 = 27957U;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = -1;
	uint32_t x208 = 18U;
	uint32_t t48 = 9388U;

	t48 = ((x205==x206)^(x207/x208));

	if (t48 != 238609294U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = 7;
	volatile uint16_t x210 = UINT16_MAX;
	volatile int64_t t49 = 0LL;

	t49 = ((x209==x210)^(x211/x212));

	if (t49 != -790LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MIN;
	volatile int64_t x214 = -1LL;
	static int8_t x215 = 1;
	volatile int32_t t50 = 0;

	t50 = ((x213==x214)^(x215/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = -237132079590203521LL;
	int16_t x219 = 2093;
	int16_t x220 = INT16_MIN;
	volatile int32_t t51 = 109911864;

	t51 = ((x217==x218)^(x219/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x223 = -1;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t52 = -30695602;

	t52 = ((x221==x222)^(x223/x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = 0;
	int8_t x226 = INT8_MAX;
	int8_t x227 = -1;
	volatile uint16_t x228 = UINT16_MAX;

	t53 = ((x225==x226)^(x227/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = 1;
	volatile int8_t x230 = INT8_MAX;
	int32_t x232 = INT32_MIN;
	volatile int32_t t54 = 5193120;

	t54 = ((x229==x230)^(x231/x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x235 = INT16_MIN;
	int8_t x236 = 1;

	t55 = ((x233==x234)^(x235/x236));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = -9;
	uint16_t x239 = 2U;
	int32_t x240 = INT32_MAX;

	t56 = ((x237==x238)^(x239/x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = INT32_MIN;
	static int64_t x242 = -4601628736541675765LL;
	volatile uint32_t x243 = 266450850U;
	volatile int16_t x244 = INT16_MIN;
	volatile uint32_t t57 = 16U;

	t57 = ((x241==x242)^(x243/x244));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = -17792444;
	volatile int64_t x246 = INT64_MAX;
	int64_t x247 = -1LL;
	volatile int32_t x248 = -1;
	volatile int64_t t58 = -11783LL;

	t58 = ((x245==x246)^(x247/x248));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x249 = -2;
	static uint64_t x250 = 4709092311LLU;
	int32_t x252 = INT32_MAX;
	int32_t t59 = -2961999;

	t59 = ((x249==x250)^(x251/x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = -64;
	int8_t x254 = INT8_MIN;
	static volatile int64_t x255 = -122101LL;
	static int64_t x256 = INT64_MAX;

	t60 = ((x253==x254)^(x255/x256));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x257 = -1;
	volatile int8_t x259 = -1;
	uint32_t x260 = UINT32_MAX;
	uint32_t t61 = 303630U;

	t61 = ((x257==x258)^(x259/x260));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = -1;
	uint64_t x262 = UINT64_MAX;

	t62 = ((x261==x262)^(x263/x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MAX;
	int32_t x266 = -1;
	static uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MIN;
	volatile int64_t t63 = 108679044846584399LL;

	t63 = ((x265==x266)^(x267/x268));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x270 = -1;
	volatile uint16_t x271 = 8U;
	uint64_t x272 = UINT64_MAX;
	uint64_t t64 = 737LLU;

	t64 = ((x269==x270)^(x271/x272));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	volatile uint16_t x275 = UINT16_MAX;
	uint64_t x276 = 12567506137166895LLU;
	volatile uint64_t t65 = 439659455002259683LLU;

	t65 = ((x273==x274)^(x275/x276));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = 2076353725LLU;
	volatile uint64_t t66 = 3203LLU;

	t66 = ((x277==x278)^(x279/x280));

	if (t66 != 8884201111LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = -1LL;
	int16_t x282 = INT16_MAX;
	uint64_t x284 = UINT64_MAX;
	static volatile uint64_t t67 = 23019LLU;

	t67 = ((x281==x282)^(x283/x284));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 594;
	int32_t x287 = INT32_MIN;
	static uint8_t x288 = 58U;

	t68 = ((x285==x286)^(x287/x288));

	if (t68 != -37025580) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = 1;
	int64_t x290 = 14545LL;
	int64_t x291 = 55575LL;
	static int32_t x292 = INT32_MAX;

	t69 = ((x289==x290)^(x291/x292));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 21322U;
	static int8_t x295 = INT8_MAX;
	uint16_t x296 = 145U;
	int32_t t70 = -10821786;

	t70 = ((x293==x294)^(x295/x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = 52;
	static int32_t x298 = INT32_MAX;
	int32_t x299 = -452;
	volatile int64_t x300 = INT64_MIN;

	t71 = ((x297==x298)^(x299/x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x302 = UINT32_MAX;
	volatile uint64_t x303 = 128261LLU;
	int8_t x304 = INT8_MIN;
	uint64_t t72 = 3429172LLU;

	t72 = ((x301==x302)^(x303/x304));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x307 = INT16_MIN;
	volatile uint64_t t73 = 28LLU;

	t73 = ((x305==x306)^(x307/x308));

	if (t73 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x311 = 3U;
	static int64_t x312 = INT64_MAX;
	volatile int64_t t74 = -68517623170936LL;

	t74 = ((x309==x310)^(x311/x312));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = 493U;
	int32_t x314 = -1;
	volatile int64_t x315 = -1LL;
	static uint16_t x316 = 1U;
	int64_t t75 = -8648010666209LL;

	t75 = ((x313==x314)^(x315/x316));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = -8;
	static uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t76 = -157537511;

	t76 = ((x317==x318)^(x319/x320));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x321 = UINT32_MAX;
	int32_t x322 = 188;
	int16_t x323 = -2;
	int8_t x324 = INT8_MAX;
	int32_t t77 = 74251176;

	t77 = ((x321==x322)^(x323/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = -1LL;
	int64_t x327 = INT64_MIN;
	static int8_t x328 = INT8_MIN;
	int64_t t78 = -1LL;

	t78 = ((x325==x326)^(x327/x328));

	if (t78 != 72057594037927937LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = 6;
	uint32_t x330 = 28U;
	static int32_t x331 = INT32_MAX;
	int64_t x332 = 147393LL;
	volatile int64_t t79 = 560619998594636LL;

	t79 = ((x329==x330)^(x331/x332));

	if (t79 != 14569LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x333 = INT32_MAX;
	uint16_t x334 = 6U;
	int32_t x335 = INT32_MIN;
	volatile int32_t x336 = INT32_MIN;

	t80 = ((x333==x334)^(x335/x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x337 = UINT64_MAX;
	uint32_t x339 = UINT32_MAX;
	static uint32_t t81 = 1381U;

	t81 = ((x337==x338)^(x339/x340));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = UINT32_MAX;
	volatile int16_t x343 = -44;
	volatile uint16_t x344 = 5967U;
	static volatile int32_t t82 = -3983;

	t82 = ((x341==x342)^(x343/x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	volatile int16_t x348 = INT16_MAX;
	int32_t t83 = 1077786;

	t83 = ((x345==x346)^(x347/x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;

	t84 = ((x349==x350)^(x351/x352));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MAX;
	uint8_t x354 = 65U;
	static volatile int16_t x355 = INT16_MIN;
	static int32_t t85 = -4835;

	t85 = ((x353==x354)^(x355/x356));

	if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = 11405;
	int64_t x358 = 71LL;
	volatile uint16_t x359 = 85U;
	int32_t t86 = 40;

	t86 = ((x357==x358)^(x359/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = -312;
	uint16_t x362 = 1U;
	int32_t x363 = -1;
	uint16_t x364 = 6301U;
	volatile int32_t t87 = -5;

	t87 = ((x361==x362)^(x363/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MAX;
	static volatile uint16_t x367 = UINT16_MAX;
	int8_t x368 = INT8_MAX;
	volatile int32_t t88 = -7;

	t88 = ((x365==x366)^(x367/x368));

	if (t88 != 516) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x370 = -1LL;
	static int32_t x371 = INT32_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t89 = 61U;

	t89 = ((x369==x370)^(x371/x372));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -1;
	uint64_t x374 = 0LLU;
	int8_t x375 = -1;
	static volatile int64_t t90 = -17042737650LL;

	t90 = ((x373==x374)^(x375/x376));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x377 = -2473;
	static uint64_t x379 = UINT64_MAX;
	static int32_t x380 = -1;
	volatile uint64_t t91 = 46145182220LLU;

	t91 = ((x377==x378)^(x379/x380));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x381 = INT64_MIN;
	static volatile int8_t x382 = 7;
	int64_t x383 = 5LL;
	static uint64_t x384 = 71LLU;
	static volatile uint64_t t92 = 169229LLU;

	t92 = ((x381==x382)^(x383/x384));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = -62;
	volatile int16_t x387 = -1;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t93 = 16195;

	t93 = ((x385==x386)^(x387/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t94 = 117755223788805356LL;

	t94 = ((x389==x390)^(x391/x392));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	volatile int32_t x394 = -1;
	int32_t x395 = INT32_MIN;
	int8_t x396 = 18;
	int32_t t95 = 0;

	t95 = ((x393==x394)^(x395/x396));

	if (t95 != -119304647) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -1;
	static int64_t x398 = 72280LL;
	uint32_t x399 = UINT32_MAX;
	volatile uint32_t x400 = 16342959U;
	uint32_t t96 = 296422U;

	t96 = ((x397==x398)^(x399/x400));

	if (t96 != 262U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x401 = -690167232384888LL;
	int16_t x403 = -1;
	int32_t x404 = INT32_MAX;
	int32_t t97 = 33;

	t97 = ((x401==x402)^(x403/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	volatile int32_t x408 = INT32_MIN;
	int32_t t98 = 1;

	t98 = ((x405==x406)^(x407/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MAX;
	uint64_t x411 = 30138396246LLU;
	volatile int8_t x412 = -3;
	uint64_t t99 = 26481389LLU;

	t99 = ((x409==x410)^(x411/x412));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

