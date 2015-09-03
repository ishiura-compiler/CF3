#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
volatile uint16_t x15 = UINT16_MAX;
int32_t t3 = 12902;
int16_t x18 = 14;
volatile int64_t t4 = 2957798675920796LL;
int64_t x23 = 44501105291LL;
static int64_t x35 = -1LL;
int32_t x44 = -1;
uint64_t t10 = 1082647200324LLU;
volatile int8_t x51 = -7;
int32_t t15 = -143106808;
static int64_t x66 = 1546784544204809LL;
static volatile int8_t x67 = -1;
int64_t x74 = -24688044867LL;
int8_t x77 = -1;
int64_t x79 = -1LL;
int8_t x92 = INT8_MIN;
int64_t x94 = INT64_MIN;
volatile int64_t t22 = 255474111483LL;
int64_t x100 = INT64_MAX;
uint32_t x102 = UINT32_MAX;
int64_t x103 = INT64_MIN;
static uint32_t x109 = 1U;
static int64_t x112 = 323131LL;
int64_t x113 = INT64_MAX;
int16_t x117 = INT16_MIN;
int64_t x119 = INT64_MAX;
static volatile int32_t x126 = INT32_MAX;
int64_t x131 = 53LL;
static int16_t x132 = -748;
int32_t x138 = INT32_MAX;
static int64_t x144 = INT64_MIN;
int16_t x147 = INT16_MIN;
int64_t x157 = INT64_MIN;
int64_t x159 = -1LL;
volatile int8_t x161 = -1;
uint32_t x163 = 7U;
int32_t t40 = -17494;
static uint64_t x175 = 7992158591017823285LLU;
int8_t x180 = INT8_MAX;
uint32_t x183 = UINT32_MAX;
int64_t x185 = -1LL;
volatile uint8_t x196 = 34U;
static int16_t x198 = 3523;
uint64_t x206 = 1730809749098LLU;
volatile int8_t x207 = INT8_MAX;
volatile int16_t x208 = 10;
uint16_t x209 = UINT16_MAX;
int64_t x213 = INT64_MIN;
static int16_t x214 = 1;
uint8_t x229 = UINT8_MAX;
volatile uint32_t x234 = 1967826669U;
static int64_t x237 = INT64_MIN;
volatile int16_t x239 = INT16_MIN;
int32_t t58 = -658828320;
uint64_t x247 = 14LLU;
int64_t x248 = INT64_MAX;
static uint32_t x266 = UINT32_MAX;
int64_t x270 = 75409498738LL;
volatile uint16_t x271 = 4514U;
volatile uint64_t t67 = 3LLU;
int32_t x284 = INT32_MIN;
int64_t x292 = INT64_MAX;
uint32_t x293 = 61809943U;
uint8_t x299 = 7U;
int64_t x303 = -1LL;
volatile int32_t x305 = -1;
volatile uint32_t x306 = UINT32_MAX;
static int8_t x307 = INT8_MIN;
volatile uint32_t x313 = 15316U;
static int8_t x316 = -1;
uint16_t x317 = 51U;
int16_t x319 = INT16_MIN;
volatile int32_t t77 = 1;
int16_t x327 = INT16_MAX;
static int64_t x331 = 91582281153376046LL;
int64_t x339 = -1LL;
int32_t x344 = 30;
int64_t t84 = -64190922089LL;
static int16_t x349 = INT16_MIN;
volatile uint64_t t85 = 4220450322675LLU;
static int64_t x353 = 850839LL;
uint16_t x354 = UINT16_MAX;
int64_t t87 = -1311LL;
int8_t x364 = -1;
uint64_t t88 = 1868LLU;
int8_t x371 = 3;
volatile uint64_t t92 = 41437166327144363LLU;
int32_t x381 = 0;
volatile int32_t t93 = -6964;
int16_t x387 = INT16_MAX;
volatile int16_t x390 = 758;
int8_t x395 = -1;
volatile int16_t x400 = INT16_MIN;
volatile int32_t x403 = -1;
volatile int64_t t99 = 3565501453296358LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = 440744;
	int32_t x3 = 923629;
	int32_t t0 = 416;

	t0 = (x1&((x2/x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 22802U;
	static volatile uint32_t t1 = 3U;

	t1 = (x5&((x6/x7)&x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	int16_t x10 = -63;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -233587315835LL;

	t2 = (x9&((x10/x11)&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint16_t x14 = 5U;
	int32_t x16 = -2775575;

	t3 = (x13&((x14/x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 7U;
	int16_t x19 = 1076;
	static int64_t x20 = 265186422439844257LL;

	t4 = (x17&((x18/x19)&x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	int32_t x22 = -35314794;
	int8_t x24 = INT8_MIN;
	int64_t t5 = -544719200275890680LL;

	t5 = (x21&((x22/x23)&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	uint64_t x26 = UINT64_MAX;
	static int16_t x27 = INT16_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 9967LLU;

	t6 = (x25&((x26/x27)&x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int8_t x30 = -4;
	int8_t x31 = -1;
	int64_t x32 = INT64_MIN;
	int64_t t7 = -2180490359631838LL;

	t7 = (x29&((x30/x31)&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -5;
	int32_t x34 = 1071883;
	uint8_t x36 = 1U;
	volatile int64_t t8 = -2287293175212583LL;

	t8 = (x33&((x34/x35)&x36));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 1643613364LLU;
	int16_t x38 = 1063;
	volatile int32_t x39 = -1;
	int32_t x40 = 9575;
	volatile uint64_t t9 = 814366LLU;

	t9 = (x37&((x38/x39)&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 663U;
	int16_t x42 = -39;
	uint64_t x43 = 187810183743463LLU;

	t10 = (x41&((x42/x43)&x44));

	if (t10 != 644LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MIN;
	static uint32_t x47 = 374484U;
	int64_t x48 = -1LL;
	static int64_t t11 = -89545LL;

	t11 = (x45&((x46/x47)&x48));

	if (t11 != 11469LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	static uint16_t x52 = 0U;
	int64_t t12 = 1826257343982576LL;

	t12 = (x49&((x50/x51)&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static int8_t x54 = 1;
	static int32_t x55 = INT32_MAX;
	static uint64_t x56 = UINT64_MAX;
	uint64_t t13 = 8126583909382925LLU;

	t13 = (x53&((x54/x55)&x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 613714571U;
	uint32_t x58 = 1875012407U;
	uint8_t x59 = 25U;
	static uint64_t x60 = 726LLU;
	volatile uint64_t t14 = 8059480149288353LLU;

	t14 = (x57&((x58/x59)&x60));

	if (t14 != 640LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = 5528;
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = -828;
	int16_t x64 = 1441;

	t15 = (x61&((x62/x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int32_t x68 = -1;
	static volatile int64_t t16 = -1378520LL;

	t16 = (x65&((x66/x67)&x68));

	if (t16 != -1546784544204809LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	volatile uint64_t x70 = 467942086LLU;
	volatile uint32_t x71 = 10022U;
	int16_t x72 = INT16_MAX;
	volatile uint64_t t17 = 7102896551LLU;

	t17 = (x69&((x70/x71)&x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -4;
	uint32_t x75 = 364U;
	volatile int16_t x76 = INT16_MAX;
	volatile int64_t t18 = 2423752507070501374LL;

	t18 = (x73&((x74/x75)&x76));

	if (t18 != 5460LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	static volatile int64_t x80 = INT64_MAX;
	volatile int64_t t19 = 180043LL;

	t19 = (x77&((x78/x79)&x80));

	if (t19 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 13961175LL;
	volatile uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = 3607;
	volatile int64_t t20 = 15681539LL;

	t20 = (x81&((x82/x83)&x84));

	if (t20 != 1559LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = -17;
	static int16_t x90 = 3;
	static volatile int8_t x91 = -1;
	static int32_t t21 = -317;

	t21 = (x89&((x90/x91)&x92));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;

	t22 = (x93&((x94/x95)&x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MAX;
	volatile uint64_t x98 = 747608120LLU;
	volatile uint32_t x99 = UINT32_MAX;
	volatile uint64_t t23 = 80298222LLU;

	t23 = (x97&((x98/x99)&x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	static int64_t x104 = INT64_MAX;
	int64_t t24 = 21703580176LL;

	t24 = (x101&((x102/x103)&x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -3293;
	static int8_t x106 = 60;
	int16_t x107 = INT16_MAX;
	volatile int32_t x108 = 0;
	static volatile int32_t t25 = 5;

	t25 = (x105&((x106/x107)&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = -1LL;
	int16_t x111 = 1;
	static volatile int64_t t26 = 3LL;

	t26 = (x109&((x110/x111)&x112));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x114 = 791321LL;
	uint64_t x115 = 490461376630230239LLU;
	int8_t x116 = INT8_MAX;
	volatile uint64_t t27 = 262634021359612054LLU;

	t27 = (x113&((x114/x115)&x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x118 = 165845356023LL;
	uint64_t x120 = UINT64_MAX;
	uint64_t t28 = 3688LLU;

	t28 = (x117&((x118/x119)&x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MAX;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = 15U;
	static volatile int32_t t29 = -45;

	t29 = (x121&((x122/x123)&x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -69074005234701956LL;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t30 = 140136142LL;

	t30 = (x125&((x126/x127)&x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = INT8_MIN;
	int64_t x130 = -1LL;
	static volatile int64_t t31 = -42093LL;

	t31 = (x129&((x130/x131)&x132));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -145825;
	static int8_t x134 = -1;
	static int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t32 = 103;

	t32 = (x133&((x134/x135)&x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -22;
	static volatile int32_t t33 = -396503495;

	t33 = (x137&((x138/x139)&x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = 70466557LL;
	int8_t x142 = 30;
	int32_t x143 = 63019;
	int64_t t34 = -2LL;

	t34 = (x141&((x142/x143)&x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x145 = 485LLU;
	int32_t x146 = -1;
	volatile int32_t x148 = INT32_MIN;
	uint64_t t35 = 3338882920254408LLU;

	t35 = (x145&((x146/x147)&x148));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x149 = 291585161LLU;
	uint32_t x150 = UINT32_MAX;
	uint16_t x151 = UINT16_MAX;
	int8_t x152 = INT8_MIN;
	uint64_t t36 = 81LLU;

	t36 = (x149&((x150/x151)&x152));

	if (t36 != 65536LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	static uint16_t x154 = UINT16_MAX;
	int16_t x155 = 9;
	static int64_t x156 = 2404566988021696733LL;
	volatile int64_t t37 = 1898389653169742LL;

	t37 = (x153&((x154/x155)&x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x158 = INT32_MIN;
	static int8_t x160 = INT8_MAX;
	int64_t t38 = 32LL;

	t38 = (x157&((x158/x159)&x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x162 = 98186895269LLU;
	int8_t x164 = INT8_MAX;
	volatile uint64_t t39 = 11LLU;

	t39 = (x161&((x162/x163)&x164));

	if (t39 != 60LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = 23U;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = INT8_MAX;

	t40 = (x165&((x166/x167)&x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = 1;
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = -3;
	int16_t x172 = INT16_MIN;
	uint32_t t41 = 28685283U;

	t41 = (x169&((x170/x171)&x172));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = 0U;
	volatile int64_t x174 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t42 = 271316675663831639LLU;

	t42 = (x173&((x174/x175)&x176));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = -1803;
	static int64_t t43 = 0LL;

	t43 = (x177&((x178/x179)&x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 1U;
	int16_t x182 = -1;
	int8_t x184 = INT8_MAX;
	volatile uint32_t t44 = 3U;

	t44 = (x181&((x182/x183)&x184));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x186 = 50U;
	static volatile int64_t x187 = 7LL;
	int8_t x188 = INT8_MIN;
	volatile int64_t t45 = -1405416818211LL;

	t45 = (x185&((x186/x187)&x188));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -1LL;
	int32_t x190 = -1;
	volatile uint8_t x191 = 88U;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t46 = 134547124112LLU;

	t46 = (x189&((x190/x191)&x192));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = -5707648442477LL;
	volatile uint32_t x194 = UINT32_MAX;
	static uint8_t x195 = UINT8_MAX;
	static int64_t t47 = -3073552586513LL;

	t47 = (x193&((x194/x195)&x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x197 = 402LLU;
	int64_t x199 = -1318LL;
	int16_t x200 = INT16_MAX;
	volatile uint64_t t48 = 23130507353292LLU;

	t48 = (x197&((x198/x199)&x200));

	if (t48 != 402LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x201 = INT32_MIN;
	int64_t x202 = -1LL;
	int64_t x203 = 119927533LL;
	int32_t x204 = INT32_MAX;
	int64_t t49 = 977036759LL;

	t49 = (x201&((x202/x203)&x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = 1;
	static uint64_t t50 = 29064515LLU;

	t50 = (x205&((x206/x207)&x208));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t51 = 761030390LL;

	t51 = (x209&((x210/x211)&x212));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x215 = INT32_MAX;
	int64_t x216 = -1LL;
	volatile int64_t t52 = 268143159LL;

	t52 = (x213&((x214/x215)&x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = UINT32_MAX;
	static int8_t x222 = -6;
	int32_t x223 = -104;
	volatile uint16_t x224 = UINT16_MAX;
	volatile uint32_t t53 = 17609U;

	t53 = (x221&((x222/x223)&x224));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = 3359U;
	uint32_t x228 = 442811U;
	volatile uint32_t t54 = 2005U;

	t54 = (x225&((x226/x227)&x228));

	if (t54 != 49434U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x230 = -218767439106LL;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = 99;
	static volatile int64_t t55 = 73731LL;

	t55 = (x229&((x230/x231)&x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MAX;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 5462358LLU;
	uint64_t t56 = 585500999705584LLU;

	t56 = (x233&((x234/x235)&x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x238 = -1;
	uint8_t x240 = 3U;
	int64_t t57 = -17745LL;

	t57 = (x237&((x238/x239)&x240));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = -1;

	t58 = (x241&((x242/x243)&x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = UINT8_MAX;
	uint32_t x246 = 45303481U;
	volatile uint64_t t59 = 306728413914933419LLU;

	t59 = (x245&((x246/x247)&x248));

	if (t59 != 122LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = 946927476U;
	static int8_t x250 = -1;
	static uint64_t x251 = 534823836313LLU;
	int64_t x252 = -1LL;
	uint64_t t60 = 18LLU;

	t60 = (x249&((x250/x251)&x252));

	if (t60 != 17268LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = -510053991708193LL;
	uint8_t x254 = 0U;
	volatile int64_t x255 = INT64_MIN;
	int32_t x256 = -559227489;
	volatile int64_t t61 = -2678LL;

	t61 = (x253&((x254/x255)&x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 104709686012LLU;
	int32_t x258 = -1059;
	static int16_t x259 = INT16_MIN;
	uint8_t x260 = UINT8_MAX;
	volatile uint64_t t62 = 145447LLU;

	t62 = (x257&((x258/x259)&x260));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x261 = -1;
	volatile int16_t x262 = 1969;
	uint8_t x263 = 97U;
	static uint16_t x264 = 0U;
	volatile int32_t t63 = -803881600;

	t63 = (x261&((x262/x263)&x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x265 = 35U;
	uint16_t x267 = 270U;
	int64_t x268 = -741117958014LL;
	volatile int64_t t64 = -972LL;

	t64 = (x265&((x266/x267)&x268));

	if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x272 = INT8_MIN;
	static volatile int64_t t65 = -15460792LL;

	t65 = (x269&((x270/x271)&x272));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = INT16_MIN;
	static uint16_t x274 = UINT16_MAX;
	int8_t x275 = -57;
	volatile int16_t x276 = INT16_MIN;
	int32_t t66 = -97071740;

	t66 = (x273&((x274/x275)&x276));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = -1LL;
	volatile int32_t x278 = -1;
	int32_t x279 = -1;
	static uint64_t x280 = UINT64_MAX;

	t67 = (x277&((x278/x279)&x280));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x281 = 116488U;
	int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MAX;
	uint32_t t68 = 2534U;

	t68 = (x281&((x282/x283)&x284));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = 5797;
	int64_t x286 = 0LL;
	volatile int16_t x287 = 9;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t69 = 244764785LL;

	t69 = (x285&((x286/x287)&x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MIN;
	volatile int8_t x290 = -54;
	int16_t x291 = INT16_MIN;
	int64_t t70 = -21903318929076357LL;

	t70 = (x289&((x290/x291)&x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x294 = UINT32_MAX;
	int32_t x295 = 1;
	volatile uint8_t x296 = 23U;
	uint32_t t71 = 4U;

	t71 = (x293&((x294/x295)&x296));

	if (t71 != 23U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	static uint16_t x298 = UINT16_MAX;
	volatile int64_t x300 = -70120090480285LL;
	volatile int64_t t72 = -1834074694547LL;

	t72 = (x297&((x298/x299)&x300));

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 432520759LLU;
	static int8_t x302 = -4;
	volatile uint32_t x304 = 376283753U;
	uint64_t t73 = 37937042422989LLU;

	t73 = (x301&((x302/x303)&x304));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x308 = INT8_MIN;
	volatile uint32_t t74 = 512627U;

	t74 = (x305&((x306/x307)&x308));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x309 = 753185359LLU;
	static int64_t x310 = INT64_MIN;
	static int8_t x311 = 8;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t75 = 553101018748594048LLU;

	t75 = (x309&((x310/x311)&x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x314 = 53;
	int32_t x315 = INT32_MIN;
	static uint32_t t76 = 2628951U;

	t76 = (x313&((x314/x315)&x316));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x318 = -1;
	int16_t x320 = -19;

	t77 = (x317&((x318/x319)&x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MAX;
	int64_t x322 = 17589510187101900LL;
	uint8_t x323 = 12U;
	int64_t x324 = 1266753154LL;
	volatile int64_t t78 = -208LL;

	t78 = (x321&((x322/x323)&x324));

	if (t78 != 1241517696LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -38;
	int8_t x326 = INT8_MIN;
	uint16_t x328 = 968U;
	int32_t t79 = 10;

	t79 = (x325&((x326/x327)&x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x329 = 801472088LLU;
	static int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t80 = 15509873427429LLU;

	t80 = (x329&((x330/x331)&x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = 513926LL;
	static int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	volatile int64_t t81 = 372LL;

	t81 = (x333&((x334/x335)&x336));

	if (t81 != 65536LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = 118;
	int8_t x338 = INT8_MIN;
	static int64_t x340 = INT64_MAX;
	volatile int64_t t82 = -727071749420LL;

	t82 = (x337&((x338/x339)&x340));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	int64_t x342 = -1008140607686LL;
	int8_t x343 = INT8_MIN;
	int64_t t83 = -3781556896LL;

	t83 = (x341&((x342/x343)&x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	uint8_t x346 = 0U;
	static int64_t x347 = 205444731055LL;
	volatile int32_t x348 = INT32_MIN;

	t84 = (x345&((x346/x347)&x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 31292U;
	static int64_t x352 = 101LL;

	t85 = (x349&((x350/x351)&x352));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x355 = -1;
	static uint32_t x356 = 2U;
	int64_t t86 = 3688146LL;

	t86 = (x353&((x354/x355)&x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MIN;
	static int16_t x359 = INT16_MIN;
	volatile int64_t x360 = INT64_MAX;

	t87 = (x357&((x358/x359)&x360));

	if (t87 != 281474976710656LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x362 = 3009976069014158371LLU;
	int64_t x363 = 1187653932584890LL;

	t88 = (x361&((x362/x363)&x364));

	if (t88 != 102LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MAX;
	int32_t x367 = -1;
	int8_t x368 = INT8_MIN;
	volatile int32_t t89 = 632755;

	t89 = (x365&((x366/x367)&x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = -23843247;
	uint64_t x372 = UINT64_MAX;
	uint64_t t90 = 1262452LLU;

	t90 = (x369&((x370/x371)&x372));

	if (t90 != 18446744073701603840LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = INT64_MIN;
	static int8_t x374 = INT8_MIN;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t91 = 8796967LL;

	t91 = (x373&((x374/x375)&x376));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = 22LLU;
	volatile int64_t x380 = -57736900500433544LL;

	t92 = (x377&((x378/x379)&x380));

	if (t92 != 168362080LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x382 = INT16_MAX;
	int16_t x383 = -1419;
	uint16_t x384 = 2853U;

	t93 = (x381&((x382/x383)&x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MAX;
	static int8_t x388 = 1;
	int32_t t94 = -33177915;

	t94 = (x385&((x386/x387)&x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = 1435570648745704257LL;
	static volatile int8_t x391 = INT8_MAX;
	int64_t x392 = -1LL;
	volatile int64_t t95 = -39544604950734223LL;

	t95 = (x389&((x390/x391)&x392));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = 9;
	uint8_t x394 = UINT8_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t96 = 4569848;

	t96 = (x393&((x394/x395)&x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = 14205;
	volatile uint16_t x398 = 18U;
	static int8_t x399 = INT8_MIN;
	static int32_t t97 = -220898;

	t97 = (x397&((x398/x399)&x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 541U;
	volatile int64_t x402 = -170494LL;
	static volatile int16_t x404 = INT16_MIN;
	int64_t t98 = -213430860607156LL;

	t98 = (x401&((x402/x403)&x404));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	uint8_t x407 = UINT8_MAX;
	volatile uint8_t x408 = UINT8_MAX;

	t99 = (x405&((x406/x407)&x408));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

