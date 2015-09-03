#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 4411087LLU;
volatile int16_t x13 = -1;
int64_t x23 = INT64_MAX;
static int16_t x41 = INT16_MIN;
uint64_t x42 = UINT64_MAX;
uint64_t t5 = 5324744LLU;
int8_t x45 = INT8_MIN;
int8_t x46 = INT8_MIN;
int8_t x48 = 28;
int8_t x63 = INT8_MIN;
int64_t x66 = 3862LL;
volatile int32_t x71 = INT32_MIN;
static int16_t x77 = -1;
volatile uint16_t x84 = 25332U;
uint32_t x91 = 24236U;
uint64_t x96 = UINT64_MAX;
volatile uint64_t t16 = 253445734005209813LLU;
uint8_t x99 = 9U;
static int64_t t17 = -1319201311711LL;
static volatile int16_t x101 = -1;
volatile uint8_t x103 = 0U;
uint32_t x113 = 1157106U;
uint8_t x115 = 2U;
int32_t x120 = INT32_MIN;
int8_t x121 = INT8_MAX;
static uint16_t x124 = 2U;
static uint16_t x128 = 37U;
volatile int64_t t24 = -7494928546871490LL;
uint64_t x134 = 628884997685LLU;
uint8_t x141 = 0U;
static uint64_t t27 = 3053055839LLU;
static int16_t x148 = -2;
volatile uint64_t t29 = 480LLU;
static int16_t x155 = -1;
uint32_t t31 = 94522186U;
uint32_t x164 = UINT32_MAX;
uint32_t t34 = 31U;
int16_t x178 = 12565;
int16_t x188 = INT16_MIN;
volatile int32_t t37 = -1;
volatile int16_t x198 = 7213;
volatile int64_t t40 = -1006LL;
int8_t x202 = -1;
int16_t x207 = -1;
uint16_t x233 = 64U;
volatile int16_t x234 = -1154;
int32_t x237 = INT32_MIN;
int16_t x240 = -12;
int16_t x241 = -1;
volatile uint64_t t49 = 2574656185817393LLU;
volatile int32_t t50 = 7809057;
uint16_t x253 = UINT16_MAX;
int32_t x260 = INT32_MAX;
int16_t x273 = 146;
static volatile int8_t x275 = INT8_MIN;
int8_t x277 = -1;
int16_t x283 = INT16_MAX;
int8_t x284 = -18;
volatile int64_t t58 = 15LL;
volatile uint8_t x292 = UINT8_MAX;
int64_t x300 = -520657502305LL;
uint32_t t62 = 1381U;
int16_t x307 = -3;
static volatile uint32_t x308 = 100U;
static uint64_t x309 = 57344504540138LLU;
static uint64_t x310 = 764461416LLU;
int32_t x311 = -1;
volatile int32_t x312 = INT32_MAX;
volatile uint64_t t64 = 1LLU;
int16_t x316 = 862;
int64_t x317 = INT64_MAX;
int64_t t66 = -252LL;
volatile uint64_t t67 = 26220658524680309LLU;
int32_t x327 = INT32_MIN;
static uint64_t t68 = 4396851917734LLU;
volatile uint8_t x329 = 29U;
static int64_t t69 = 35212LL;
uint8_t x334 = UINT8_MAX;
int16_t x337 = 177;
uint16_t x339 = UINT16_MAX;
int64_t x345 = -1LL;
uint32_t x346 = 192893U;
int16_t x350 = -1;
uint32_t x359 = 838U;
int16_t x370 = INT16_MIN;
static uint16_t x374 = UINT16_MAX;
static volatile uint32_t x375 = UINT32_MAX;
static volatile uint8_t x383 = 1U;
static volatile int32_t t80 = -1;
uint64_t t82 = 1901174815821LLU;
uint8_t x396 = 43U;
volatile int32_t x408 = -1;
static int32_t t85 = 1;
int64_t x416 = INT64_MIN;
static volatile uint64_t x425 = UINT64_MAX;
int16_t x428 = INT16_MAX;
volatile int16_t x430 = INT16_MAX;
volatile uint64_t x436 = UINT64_MAX;
uint64_t x440 = 208252992172LLU;
volatile uint64_t t90 = 1LLU;
int64_t x442 = -1LL;
uint64_t t91 = 288529401030467087LLU;
static uint64_t x446 = 645029905LLU;
uint64_t t92 = 20LLU;
static uint16_t x451 = UINT16_MAX;
volatile int64_t x457 = INT64_MIN;
uint32_t x458 = 33949U;
volatile int64_t t94 = -207626402LL;
int64_t x464 = -1LL;
volatile uint16_t x465 = 2U;
volatile int32_t x470 = -1;
int16_t x471 = INT16_MIN;
uint32_t x481 = UINT32_MAX;
static volatile uint64_t x482 = 535649722920LLU;


void f0(void) {
	static volatile int16_t x1 = 0;
	volatile uint64_t x2 = UINT64_MAX;
	int8_t x3 = -1;
	uint64_t x4 = 849035682621LLU;

	t0 = ((x1&x2)*(x3^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x14 = INT32_MIN;
	static int32_t x15 = -1;
	static volatile int16_t x16 = -1;
	static int32_t t1 = 65676;

	t1 = ((x13&x14)*(x15^x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x21 = -10437;
	static uint64_t x22 = 223426228489332LLU;
	static int32_t x24 = -4979;
	uint64_t t2 = 305805457036LLU;

	t2 = ((x21&x22)*(x23^x24));

	if (t2 != 1112215765409361248LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = -1;
	uint16_t x34 = 50U;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = -1;
	volatile uint64_t t3 = 2021223825LLU;

	t3 = ((x33&x34)*(x35^x36));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x37 = 7U;
	int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	uint64_t x40 = UINT64_MAX;
	uint64_t t4 = 6LLU;

	t4 = ((x37&x38)*(x39^x40));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;

	t5 = ((x41&x42)*(x43^x44));

	if (t5 != 18446673706039115776LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x47 = 0;
	volatile int32_t t6 = 3050968;

	t6 = ((x45&x46)*(x47^x48));

	if (t6 != -3584) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x49 = 0LLU;
	int8_t x50 = 36;
	volatile int32_t x51 = INT32_MAX;
	int64_t x52 = -1LL;
	static volatile uint64_t t7 = 116577256043LLU;

	t7 = ((x49&x50)*(x51^x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = -14LL;
	uint8_t x62 = UINT8_MAX;
	int32_t x64 = INT32_MIN;
	volatile int64_t t8 = -7466LL;

	t8 = ((x61&x62)*(x63^x64));

	if (t8 != 519691011840LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = INT16_MAX;
	volatile uint64_t x67 = 140109617339LLU;
	volatile uint16_t x68 = UINT16_MAX;
	uint64_t t9 = 32331703949LLU;

	t9 = ((x65&x66)*(x67^x68));

	if (t9 != 541103546358744LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	uint8_t x72 = UINT8_MAX;
	uint32_t t10 = 3244311U;

	t10 = ((x69&x70)*(x71^x72));

	if (t10 != 2147483393U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = -1;
	int16_t x74 = -1;
	int64_t x75 = -1LL;
	uint8_t x76 = 12U;
	volatile int64_t t11 = -1LL;

	t11 = ((x73&x74)*(x75^x76));

	if (t11 != 13LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x78 = 8U;
	uint8_t x79 = 11U;
	volatile int8_t x80 = 2;
	volatile int32_t t12 = -219866;

	t12 = ((x77&x78)*(x79^x80));

	if (t12 != 72) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x81 = 2;
	int32_t x82 = -310332;
	static volatile uint8_t x83 = UINT8_MAX;
	static int32_t t13 = 10063;

	t13 = ((x81&x82)*(x83^x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x85 = 3U;
	uint16_t x86 = 6U;
	static int16_t x87 = INT16_MIN;
	int64_t x88 = 1008173726535545LL;
	int64_t t14 = 176357498993897842LL;

	t14 = ((x85&x86)*(x87^x88));

	if (t14 != -2016347453120782LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = INT8_MIN;
	volatile uint8_t x90 = UINT8_MAX;
	volatile uint32_t x92 = UINT32_MAX;
	uint32_t t15 = 634U;

	t15 = ((x89&x90)*(x91^x92));

	if (t15 != 4291864960U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = INT64_MIN;
	volatile uint8_t x94 = 70U;
	uint32_t x95 = 13U;

	t16 = ((x93&x94)*(x95^x96));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = -123;
	volatile int64_t x98 = -1LL;
	uint8_t x100 = UINT8_MAX;

	t17 = ((x97&x98)*(x99^x100));

	if (t17 != -30258LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x102 = INT16_MAX;
	uint64_t x104 = 351717976246LLU;
	uint64_t t18 = 398748075343842LLU;

	t18 = ((x101&x102)*(x103^x104));

	if (t18 != 11524742927652682LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 661903765286826LLU;
	static int8_t x106 = INT8_MAX;
	uint16_t x107 = 7U;
	static volatile uint32_t x108 = 6U;
	static volatile uint64_t t19 = 95205335973LLU;

	t19 = ((x105&x106)*(x107^x108));

	if (t19 != 42LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x114 = INT64_MIN;
	uint64_t x116 = 9578LLU;
	volatile uint64_t t20 = 64594176LLU;

	t20 = ((x113&x114)*(x115^x116));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MAX;
	uint32_t x119 = 4692443U;
	volatile int64_t t21 = 122728501844LL;

	t21 = ((x117&x118)*(x119^x120));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x122 = 7491726U;
	static uint8_t x123 = 1U;
	volatile uint32_t t22 = 298U;

	t22 = ((x121&x122)*(x123^x124));

	if (t22 != 42U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x125 = INT64_MIN;
	static volatile uint16_t x126 = 3161U;
	static uint32_t x127 = 9U;
	volatile int64_t t23 = -96253433516649LL;

	t23 = ((x125&x126)*(x127^x128));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 63U;
	static volatile int64_t x130 = 55LL;
	int32_t x131 = -152848;
	uint8_t x132 = 4U;

	t24 = ((x129&x130)*(x131^x132));

	if (t24 != -8406420LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = INT64_MIN;
	int16_t x135 = -31;
	static int8_t x136 = INT8_MIN;
	volatile uint64_t t25 = 3LLU;

	t25 = ((x133&x134)*(x135^x136));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = -329;
	int64_t x138 = INT64_MIN;
	uint32_t x139 = 2U;
	uint8_t x140 = 2U;
	volatile int64_t t26 = -1596046289464LL;

	t26 = ((x137&x138)*(x139^x140));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x142 = 4275599;
	uint64_t x143 = UINT64_MAX;
	static int8_t x144 = INT8_MAX;

	t27 = ((x141&x142)*(x143^x144));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	volatile uint32_t x147 = UINT32_MAX;
	static volatile uint32_t t28 = 17081U;

	t28 = ((x145&x146)*(x147^x148));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x149 = INT16_MIN;
	static uint64_t x150 = 2442349496619LLU;
	static uint8_t x151 = 15U;
	static int8_t x152 = INT8_MIN;

	t29 = ((x149&x150)*(x151^x152));

	if (t29 != 18446468088218550272LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = 3045175383LL;
	int8_t x156 = -1;
	static volatile int64_t t30 = -777LL;

	t30 = ((x153&x154)*(x155^x156));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MIN;
	volatile int32_t x158 = -49128;
	int16_t x159 = INT16_MAX;
	uint32_t x160 = 110U;

	t31 = ((x157&x158)*(x159^x160));

	if (t31 != 2154758144U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x161 = 2021889U;
	static uint16_t x162 = 390U;
	int16_t x163 = INT16_MIN;
	volatile uint32_t t32 = 1037290U;

	t32 = ((x161&x162)*(x163^x164));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 879U;
	volatile int32_t x166 = INT32_MAX;
	int32_t x167 = INT32_MIN;
	int64_t x168 = -1LL;
	static volatile int64_t t33 = 17621934010196454LL;

	t33 = ((x165&x166)*(x167^x168));

	if (t33 != 1887638125713LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = -1;
	uint32_t x170 = 75791U;
	volatile uint8_t x171 = 4U;
	volatile uint32_t x172 = 20380U;

	t34 = ((x169&x170)*(x171^x172));

	if (t34 != 1544317416U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = INT32_MAX;
	uint16_t x179 = UINT16_MAX;
	uint8_t x180 = UINT8_MAX;
	int32_t t35 = 321800;

	t35 = ((x177&x178)*(x179^x180));

	if (t35 != 820243200) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x181 = -1;
	static int64_t x182 = INT64_MAX;
	uint64_t x183 = 21168641842687959LLU;
	static int64_t x184 = INT64_MAX;
	uint64_t t36 = 0LLU;

	t36 = ((x181&x182)*(x183^x184));

	if (t36 != 9244540678697463768LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = 0;
	static int16_t x187 = -1;

	t37 = ((x185&x186)*(x187^x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x189 = -1751560371LL;
	volatile int16_t x190 = INT16_MIN;
	volatile int64_t x191 = 904LL;
	uint8_t x192 = 37U;
	int64_t t38 = 7509243321318LL;

	t38 = ((x189&x190)*(x191^x192));

	if (t38 != -1648237412352LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = INT64_MAX;
	uint16_t x194 = 1813U;
	int64_t x195 = -1LL;
	static uint64_t x196 = 1691717768478LLU;
	uint64_t t39 = 224259047090LLU;

	t39 = ((x193&x194)*(x195^x196));

	if (t39 != 18443676989395299189LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 133U;
	uint16_t x199 = 24570U;
	static volatile int64_t x200 = -9121396LL;

	t40 = ((x197&x198)*(x199^x200));

	if (t40 != -45692850LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x201 = INT32_MAX;
	int64_t x203 = INT64_MAX;
	static uint64_t x204 = 35579539890241896LLU;
	uint64_t t41 = 1147509160461LLU;

	t41 = ((x201&x202)*(x203^x204));

	if (t41 != 16881574645804695913LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x205 = UINT64_MAX;
	int8_t x206 = 4;
	volatile int16_t x208 = -1;
	volatile uint64_t t42 = 47212296032190LLU;

	t42 = ((x205&x206)*(x207^x208));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MIN;
	uint32_t x211 = 42U;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t43 = 49LLU;

	t43 = ((x209&x210)*(x211^x212));

	if (t43 != 18446743981369163776LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 60417U;
	int8_t x214 = -1;
	volatile int16_t x215 = -1;
	uint8_t x216 = 0U;
	static volatile uint32_t t44 = 5801U;

	t44 = ((x213&x214)*(x215^x216));

	if (t44 != 4294906879U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MIN;
	static int16_t x226 = INT16_MIN;
	static int64_t x227 = INT64_MIN;
	volatile uint64_t x228 = 132LLU;
	static uint64_t t45 = 1548049412146LLU;

	t45 = ((x225&x226)*(x227^x228));

	if (t45 != 18446743790241710080LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x235 = INT64_MAX;
	static uint64_t x236 = 0LLU;
	volatile uint64_t t46 = 7586103553LLU;

	t46 = ((x233&x234)*(x235^x236));

	if (t46 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x238 = 11U;
	uint64_t x239 = UINT64_MAX;
	static uint64_t t47 = 2167310945330LLU;

	t47 = ((x237&x238)*(x239^x240));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x242 = 56349412LLU;
	uint64_t x243 = 4316000LLU;
	int32_t x244 = 375;
	uint64_t t48 = 2174LLU;

	t48 = ((x241&x242)*(x243^x244));

	if (t48 != 243185523235452LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x245 = UINT64_MAX;
	static volatile int64_t x246 = -1LL;
	int64_t x247 = -3233348057931158LL;
	uint64_t x248 = UINT64_MAX;

	t49 = ((x245&x246)*(x247^x248));

	if (t49 != 18443510725651620459LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = -3;
	volatile int32_t x250 = 2;
	volatile int32_t x251 = INT32_MIN;
	int8_t x252 = -1;

	t50 = ((x249&x250)*(x251^x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t51 = -1;

	t51 = ((x253&x254)*(x255^x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x257 = -1;
	int32_t x258 = -1;
	volatile int64_t x259 = INT64_MAX;
	int64_t t52 = 7622782847930109LL;

	t52 = ((x257&x258)*(x259^x260));

	if (t52 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x261 = UINT16_MAX;
	uint8_t x262 = 46U;
	uint64_t x263 = 789444006338448LLU;
	static int8_t x264 = INT8_MIN;
	static volatile uint64_t t53 = 1370296559696156043LLU;

	t53 = ((x261&x262)*(x263^x264));

	if (t53 != 18410429649417978592LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x269 = INT16_MAX;
	volatile int16_t x270 = -16;
	uint32_t x271 = 2U;
	uint16_t x272 = UINT16_MAX;
	volatile uint32_t t54 = 78914520U;

	t54 = ((x269&x270)*(x271^x272));

	if (t54 != 2146336816U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x274 = 1821U;
	static int8_t x276 = INT8_MIN;
	int32_t t55 = 22931;

	t55 = ((x273&x274)*(x275^x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x278 = -437982420;
	uint64_t x279 = UINT64_MAX;
	uint8_t x280 = 16U;
	volatile uint64_t t56 = 25550718206LLU;

	t56 = ((x277&x278)*(x279^x280));

	if (t56 != 7445701140LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x281 = 0;
	static uint16_t x282 = UINT16_MAX;
	static volatile int32_t t57 = 2;

	t57 = ((x281&x282)*(x283^x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x286 = -1;
	int64_t x287 = -7109623647LL;
	int32_t x288 = -1;

	t58 = ((x285&x286)*(x287^x288));

	if (t58 != -910031826688LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x289 = 7;
	uint32_t x290 = UINT32_MAX;
	uint64_t x291 = 15381818859178LLU;
	static uint64_t t59 = 2969004170637LLU;

	t59 = ((x289&x290)*(x291^x292));

	if (t59 != 107672732013651LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x293 = 371;
	uint16_t x294 = 1375U;
	static uint32_t x295 = UINT32_MAX;
	volatile int32_t x296 = INT32_MIN;
	uint32_t t60 = 1U;

	t60 = ((x293&x294)*(x295^x296));

	if (t60 != 2147483309U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x297 = INT64_MIN;
	volatile int64_t x298 = INT64_MAX;
	static volatile uint8_t x299 = 56U;
	static volatile int64_t t61 = 9218229851890LL;

	t61 = ((x297&x298)*(x299^x300));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 4U;
	int32_t x303 = -1;
	static volatile uint32_t x304 = 11U;

	t62 = ((x301&x302)*(x303^x304));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -1;
	static uint16_t x306 = UINT16_MAX;
	uint32_t t63 = 632924U;

	t63 = ((x305&x306)*(x307^x308));

	if (t63 != 4288217191U) { NG(); } else { ; }
	
}

void f64(void) {


	t64 = ((x309&x310)*(x311^x312));

	if (t64 != 17994061169320525824LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x313 = INT32_MAX;
	int8_t x314 = 1;
	int8_t x315 = -1;
	int32_t t65 = 43742431;

	t65 = ((x313&x314)*(x315^x316));

	if (t65 != -863) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x318 = 7U;
	uint8_t x319 = 3U;
	int32_t x320 = -241921915;

	t66 = ((x317&x318)*(x319^x320));

	if (t66 != -1693453398LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = -1;
	int16_t x323 = -1;
	uint64_t x324 = 9076184036LLU;

	t67 = ((x321&x322)*(x323^x324));

	if (t67 != 18446741759282622181LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x325 = -1;
	int64_t x326 = INT64_MAX;
	uint64_t x328 = 19977671481415863LLU;

	t68 = ((x325&x326)*(x327^x328));

	if (t68 != 9243349709541156681LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x330 = 207349749LL;
	int32_t x331 = INT32_MIN;
	int8_t x332 = 0;

	t69 = ((x329&x330)*(x331^x332));

	if (t69 != -45097156608LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x333 = 0;
	int16_t x335 = 1733;
	static int64_t x336 = -8049723LL;
	int64_t t70 = 3206424890463LL;

	t70 = ((x333&x334)*(x335^x336));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x338 = 39U;
	int8_t x340 = 0;
	volatile int32_t t71 = 1957828;

	t71 = ((x337&x338)*(x339^x340));

	if (t71 != 2162655) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MIN;
	volatile uint32_t x343 = 1223529U;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t72 = 533LL;

	t72 = ((x341&x342)*(x343^x344));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x347 = 20793U;
	static uint32_t x348 = 596195U;
	static int64_t t73 = -760396053LL;

	t73 = ((x345&x346)*(x347^x348));

	if (t73 != 117419755890LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -1LL;
	uint8_t x351 = 12U;
	static uint64_t x352 = 16234847LLU;
	uint64_t t74 = 12502LLU;

	t74 = ((x349&x350)*(x351^x352));

	if (t74 != 18446744073693316781LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x353 = UINT16_MAX;
	int64_t x354 = -1LL;
	uint32_t x355 = 1074U;
	volatile int16_t x356 = -1;
	volatile int64_t t75 = -585487635869980LL;

	t75 = ((x353&x354)*(x355^x356));

	if (t75 != 281470611293235LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = INT64_MAX;
	volatile uint64_t x358 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	static volatile uint64_t t76 = 41483837LLU;

	t76 = ((x357&x358)*(x359^x360));

	if (t76 != 18446744069414616250LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MAX;
	int16_t x363 = -1;
	int8_t x364 = 38;
	volatile int32_t t77 = 106874;

	t77 = ((x361&x362)*(x363^x364));

	if (t77 != -1277913) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = -1;
	uint64_t x371 = 26815822LLU;
	int8_t x372 = INT8_MIN;
	uint64_t t78 = 110164823179154LLU;

	t78 = ((x369&x370)*(x371^x372));

	if (t78 != 878699937792LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t79 = 1748U;

	t79 = ((x373&x374)*(x375^x376));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x381 = 4627U;
	static volatile uint8_t x382 = UINT8_MAX;
	int32_t x384 = 9829510;

	t80 = ((x381&x382)*(x383^x384));

	if (t80 != 186760709) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = INT8_MIN;
	volatile uint8_t x386 = UINT8_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t81 = -5327;

	t81 = ((x385&x386)*(x387^x388));

	if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x389 = INT64_MIN;
	volatile int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	uint16_t x392 = UINT16_MAX;

	t82 = ((x389&x390)*(x391^x392));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x393 = INT16_MIN;
	volatile uint32_t x394 = 20U;
	uint32_t x395 = UINT32_MAX;
	uint32_t t83 = 100778U;

	t83 = ((x393&x394)*(x395^x396));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	volatile int32_t x399 = -31559;
	volatile int8_t x400 = -1;
	int64_t t84 = 242743151123284064LL;

	t84 = ((x397&x398)*(x399^x400));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x405 = 9U;
	volatile int8_t x406 = INT8_MIN;
	static volatile int16_t x407 = INT16_MAX;

	t85 = ((x405&x406)*(x407^x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x413 = 4U;
	static int8_t x414 = INT8_MIN;
	int16_t x415 = -1;
	static volatile int64_t t86 = 10564491765LL;

	t86 = ((x413&x414)*(x415^x416));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x426 = INT64_MIN;
	static uint64_t x427 = 1054051091256LLU;
	uint64_t t87 = 14267LLU;

	t87 = ((x425&x426)*(x427^x428));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x429 = -1;
	int16_t x431 = INT16_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t88 = -9;

	t88 = ((x429&x430)*(x431^x432));

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x433 = INT16_MIN;
	static uint64_t x434 = 27596802715LLU;
	volatile int32_t x435 = INT32_MIN;
	uint64_t t89 = 371920197494915LLU;

	t89 = ((x433&x434)*(x435^x436));

	if (t89 != 3923409304028872704LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x437 = 198U;
	uint16_t x438 = 24U;
	static int64_t x439 = INT64_MIN;

	t90 = ((x437&x438)*(x439^x440));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x441 = INT16_MIN;
	int8_t x443 = 1;
	volatile uint64_t x444 = UINT64_MAX;

	t91 = ((x441&x442)*(x443^x444));

	if (t91 != 65536LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x445 = 30156;
	volatile uint8_t x447 = 4U;
	int16_t x448 = INT16_MIN;

	t92 = ((x445&x446)*(x447^x448));

	if (t92 != 18446744072904343552LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x449 = 2U;
	int8_t x450 = 33;
	int8_t x452 = INT8_MIN;
	volatile int32_t t93 = 1891742;

	t93 = ((x449&x450)*(x451^x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MIN;

	t94 = ((x457&x458)*(x459^x460));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x461 = 37421U;
	int16_t x462 = INT16_MIN;
	int8_t x463 = -29;
	static int64_t t95 = 4697825161LL;

	t95 = ((x461&x462)*(x463^x464));

	if (t95 != 917504LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x466 = 86947781612LLU;
	static int16_t x467 = INT16_MIN;
	static uint16_t x468 = UINT16_MAX;
	static volatile uint64_t t96 = 130010970067LLU;

	t96 = ((x465&x466)*(x467^x468));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x469 = 2889LLU;
	uint64_t x472 = 460261929483368LLU;
	uint64_t t97 = 228LLU;

	t97 = ((x469&x470)*(x471^x472));

	if (t97 != 17117047359521452456LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x483 = UINT32_MAX;
	volatile int8_t x484 = -25;
	volatile uint64_t t98 = 1080958906316LLU;

	t98 = ((x481&x482)*(x483^x484));

	if (t98 != 73770677184LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x485 = 12220200834616399LLU;
	int64_t x486 = INT64_MIN;
	uint8_t x487 = 5U;
	int8_t x488 = -35;
	uint64_t t99 = 567021074526804196LLU;

	t99 = ((x485&x486)*(x487^x488));

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

