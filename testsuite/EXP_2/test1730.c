#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
int64_t x13 = -1122627779LL;
int64_t t3 = -3548349472LL;
static int8_t x23 = INT8_MIN;
int64_t x37 = INT64_MIN;
int64_t t8 = -204LL;
volatile int64_t x59 = -1LL;
static uint32_t x63 = UINT32_MAX;
static volatile int16_t x64 = -1;
uint32_t x71 = 82456U;
uint64_t x72 = 104LLU;
static uint64_t t15 = 1092788158723037LLU;
uint16_t x86 = 11837U;
uint16_t x88 = UINT16_MAX;
uint32_t x102 = 1429976U;
uint32_t t19 = 41U;
volatile uint16_t x105 = 1404U;
int16_t x110 = INT16_MAX;
static volatile int8_t x115 = INT8_MIN;
volatile uint64_t x117 = 804LLU;
volatile int64_t x118 = INT64_MAX;
volatile uint64_t x120 = 263159477LLU;
uint64_t t23 = 1066483383833975LLU;
uint32_t x122 = UINT32_MAX;
volatile int64_t t25 = 17899366036014571LL;
int16_t x142 = INT16_MAX;
volatile uint32_t x144 = UINT32_MAX;
int64_t x146 = -1LL;
int32_t x147 = INT32_MAX;
uint64_t x148 = 281938029713LLU;
uint64_t t27 = 1505530LLU;
static int16_t x149 = 2;
static int16_t x151 = 15;
volatile int64_t t28 = INT64_MAX;
static int64_t x156 = -53LL;
volatile int8_t x161 = INT8_MAX;
int16_t x162 = INT16_MIN;
int16_t x165 = -1;
int16_t x170 = INT16_MIN;
int32_t t32 = 484557060;
volatile int16_t x173 = INT16_MIN;
int32_t x176 = 5;
int64_t x187 = INT64_MIN;
int32_t x192 = 1;
volatile int32_t t37 = -445;
uint16_t x202 = UINT16_MAX;
int32_t x203 = -54747;
volatile uint8_t x204 = 5U;
int64_t x205 = INT64_MIN;
static int32_t x210 = -1;
uint64_t x211 = 29446148490LLU;
int32_t x215 = INT32_MAX;
int8_t x216 = -1;
uint64_t t43 = 20024LLU;
volatile int16_t x226 = INT16_MAX;
volatile uint64_t x227 = 1613410LLU;
static uint64_t x239 = 1LLU;
uint64_t t45 = 21002LLU;
int8_t x243 = -1;
uint8_t x245 = UINT8_MAX;
uint64_t x248 = UINT64_MAX;
static int8_t x254 = -1;
int8_t x257 = INT8_MIN;
int8_t x259 = 1;
int16_t x263 = INT16_MAX;
static volatile int64_t t51 = -13352797248LL;
int8_t x272 = INT8_MIN;
int64_t x280 = 383669067204857LL;
int16_t x285 = -2338;
static uint64_t x286 = UINT64_MAX;
volatile int16_t x290 = -3;
int32_t x291 = INT32_MIN;
int16_t x307 = -9586;
static int16_t x315 = -2;
static volatile uint64_t x320 = 736949636087LLU;
int32_t x321 = -46;
static uint64_t x322 = 24098634483383LLU;
int32_t x335 = INT32_MAX;
uint8_t x348 = 5U;
volatile int64_t t66 = 257162855184LL;
static uint32_t x349 = 104917U;
int32_t x354 = -1;
uint64_t t69 = 7137012807818LLU;
static int8_t x374 = 3;
uint32_t x375 = 77500511U;
static int16_t x376 = 877;
volatile uint32_t x377 = 31915193U;
static int64_t x387 = -78080414317419LL;
int32_t x388 = INT32_MIN;
static int32_t x405 = INT32_MIN;
static int32_t t80 = 105947;
int16_t x418 = -15614;
volatile uint64_t x429 = UINT64_MAX;
static int8_t x442 = INT8_MIN;
uint64_t x444 = 89640765154LLU;
volatile int32_t x451 = INT32_MIN;
volatile uint32_t t90 = UINT32_MAX;
volatile int64_t t91 = 54880287LL;
int32_t x474 = -1;
uint64_t x475 = 169102148228812LLU;
int16_t x491 = -1;
volatile int32_t t97 = INT32_MIN;
int64_t t99 = -12247314405390198LL;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint32_t x2 = 7679U;
	uint8_t x3 = 19U;
	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 138173595LLU;

	t0 = ((x1/(x2&x3))+x4);

	if (t0 != 970881267037344820LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	volatile uint32_t x6 = 1268362U;
	volatile uint64_t x7 = 3LLU;
	int8_t x8 = 0;
	uint64_t t1 = 48LLU;

	t1 = ((x5/(x6&x7))+x8);

	if (t1 != 127LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -44;
	volatile int64_t x10 = INT64_MIN;
	volatile int16_t x12 = -1;
	volatile int64_t t2 = 3LL;

	t2 = ((x9/(x10&x11))+x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int32_t x15 = -1;
	int32_t x16 = INT32_MIN;

	t3 = ((x13/(x14&x15))+x16);

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1059770106130644LLU;
	static uint8_t x18 = 28U;
	static volatile uint16_t x19 = 486U;
	volatile uint32_t x20 = 2665U;
	static volatile uint64_t t4 = 366459279975LLU;

	t4 = ((x17/(x18&x19))+x20);

	if (t4 != 264942526535326LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint32_t x22 = 483696U;
	uint16_t x24 = 458U;
	uint32_t t5 = 35590238U;

	t5 = ((x21/(x22&x23))+x24);

	if (t5 != 9339U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	volatile int16_t x26 = -1;
	int32_t x27 = -19070471;
	uint8_t x28 = UINT8_MAX;
	static int64_t t6 = 10341LL;

	t6 = ((x25/(x26&x27))+x28);

	if (t6 != 483646787838LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = INT32_MIN;
	static volatile uint64_t x39 = 2202252520777LLU;
	uint16_t x40 = UINT16_MAX;
	volatile uint64_t t7 = 403LLU;

	t7 = ((x37/(x38&x39))+x40);

	if (t7 != 4255746LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -1LL;
	int16_t x46 = -2;
	static int64_t x47 = INT64_MIN;
	static uint32_t x48 = UINT32_MAX;

	t8 = ((x45/(x46&x47))+x48);

	if (t8 != 4294967295LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x53 = INT64_MIN;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = -1LL;
	volatile uint8_t x56 = 10U;
	int64_t t9 = 63075222758055789LL;

	t9 = ((x53/(x54&x55))+x56);

	if (t9 != -36170086419038326LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	uint32_t x60 = 8U;
	int64_t t10 = -7176389814319156LL;

	t10 = ((x57/(x58&x59))+x60);

	if (t10 != 8LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x61 = 109U;
	uint32_t x62 = 2372407U;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = ((x61/(x62&x63))+x64);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 17U;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 6577631U;
	int8_t x68 = INT8_MIN;
	uint32_t t12 = 339U;

	t12 = ((x65/(x66&x67))+x68);

	if (t12 != 4294967168U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MAX;
	volatile int32_t x70 = -1;
	uint64_t t13 = 59712512448LLU;

	t13 = ((x69/(x70&x71))+x72);

	if (t13 != 111858106588524LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x73 = 61U;
	int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t14 = 157070LLU;

	t14 = ((x73/(x74&x75))+x76);

	if (t14 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = 42U;
	int16_t x84 = INT16_MIN;

	t15 = ((x81/(x82&x83))+x84);

	if (t15 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = -1;
	int32_t x87 = -1;
	int32_t t16 = -2945;

	t16 = ((x85/(x86&x87))+x88);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MIN;
	static int8_t x90 = -1;
	static uint32_t x91 = 441010U;
	uint16_t x92 = UINT16_MAX;
	uint32_t t17 = 6146944U;

	t17 = ((x89/(x90&x91))+x92);

	if (t17 != 75273U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x93 = UINT64_MAX;
	volatile int16_t x94 = -1;
	int64_t x95 = 1LL;
	uint16_t x96 = 235U;
	uint64_t t18 = 157420121552555LLU;

	t18 = ((x93/(x94&x95))+x96);

	if (t18 != 234LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x101 = 7U;
	int8_t x103 = -1;
	uint8_t x104 = 20U;

	t19 = ((x101/(x102&x103))+x104);

	if (t19 != 20U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x106 = -1;
	int64_t x107 = INT64_MAX;
	int16_t x108 = -1;
	int64_t t20 = -55368909118625668LL;

	t20 = ((x105/(x106&x107))+x108);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = -1;
	volatile int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

	t21 = ((x109/(x110&x111))+x112);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MAX;
	int64_t x114 = -1LL;
	static int32_t x116 = INT32_MIN;
	volatile int64_t t22 = -946LL;

	t22 = ((x113/(x114&x115))+x116);

	if (t22 != -72057596185411583LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x119 = 3U;

	t23 = ((x117/(x118&x119))+x120);

	if (t23 != 263159745LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = 36;
	static int16_t x123 = INT16_MIN;
	volatile int32_t x124 = 1935135;
	volatile uint32_t t24 = 3331241U;

	t24 = ((x121/(x122&x123))+x124);

	if (t24 != 1935135U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x137 = INT32_MIN;
	static int8_t x138 = INT8_MIN;
	int64_t x139 = -1LL;
	int32_t x140 = -1;

	t25 = ((x137/(x138&x139))+x140);

	if (t25 != 16777215LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = -1;
	int8_t x143 = -1;
	static volatile uint32_t t26 = UINT32_MAX;

	t26 = ((x141/(x142&x143))+x144);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 2U;

	t27 = ((x145/(x146&x147))+x148);

	if (t27 != 281938029713LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x150 = -1;
	int64_t x152 = INT64_MAX;

	t28 = ((x149/(x150&x151))+x152);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MIN;
	volatile uint64_t t29 = 131499451617201355LLU;

	t29 = ((x153/(x154&x155))+x156);

	if (t29 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x163 = -1;
	static int16_t x164 = 0;
	int32_t t30 = 636524261;

	t30 = ((x161/(x162&x163))+x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x166 = -1047;
	uint64_t x167 = 1833361084858433215LLU;
	int8_t x168 = 1;
	static uint64_t t31 = 92LLU;

	t31 = ((x165/(x166&x167))+x168);

	if (t31 != 11LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -1;

	t32 = ((x169/(x170&x171))+x172);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x174 = UINT8_MAX;
	uint32_t x175 = 463U;
	volatile uint32_t t33 = 252288U;

	t33 = ((x173/(x174&x175))+x176);

	if (t33 != 20748480U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x177 = -1;
	volatile uint64_t x178 = 515869159LLU;
	int32_t x179 = 519;
	int64_t x180 = 78701817089LL;
	volatile uint64_t t34 = 47358228231LLU;

	t34 = ((x177/(x178&x179))+x180);

	if (t34 != 2635249232088895891LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x181 = -3LL;
	uint32_t x182 = 1912666U;
	uint16_t x183 = UINT16_MAX;
	volatile int16_t x184 = INT16_MIN;
	int64_t t35 = -8779064LL;

	t35 = ((x181/(x182&x183))+x184);

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	int16_t x188 = INT16_MIN;
	int64_t t36 = -433632798199716LL;

	t36 = ((x185/(x186&x187))+x188);

	if (t36 != -32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = 6887;
	static int8_t x190 = -1;
	static volatile uint8_t x191 = 56U;

	t37 = ((x189/(x190&x191))+x192);

	if (t37 != 123) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x193 = UINT8_MAX;
	int32_t x194 = -1;
	volatile uint16_t x195 = 5225U;
	int64_t x196 = INT64_MIN;
	volatile int64_t t38 = INT64_MIN;

	t38 = ((x193/(x194&x195))+x196);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x197 = 39LL;
	uint16_t x198 = 12985U;
	int16_t x199 = -1038;
	static int64_t x200 = -1LL;
	volatile int64_t t39 = 105114999LL;

	t39 = ((x197/(x198&x199))+x200);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x201 = 349LLU;
	uint64_t t40 = 6529727629121LLU;

	t40 = ((x201/(x202&x203))+x204);

	if (t40 != 5LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = -7451308;
	int8_t x208 = 58;
	volatile int64_t t41 = -30475LL;

	t41 = ((x205/(x206&x207))+x208);

	if (t41 != 1237805236563LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = 134LL;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t42 = 3115479LLU;

	t42 = ((x209/(x210&x211))+x212);

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = 951734796923911LLU;

	t43 = ((x213/(x214&x215))+x216);

	if (t43 != 169389438070LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	uint64_t t44 = 20540283LLU;

	t44 = ((x225/(x226&x227))+x228);

	if (t44 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x237 = 119879U;
	int32_t x238 = 1027995;
	int8_t x240 = -1;

	t45 = ((x237/(x238&x239))+x240);

	if (t45 != 119878LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 7619008706837LLU;
	int8_t x242 = INT8_MIN;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x241/(x242&x243))+x244);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x246 = UINT32_MAX;
	static int64_t x247 = -754880LL;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x245/(x246&x247))+x248);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x253 = -13304;
	int32_t x255 = INT32_MAX;
	uint32_t x256 = 3848U;
	uint32_t t48 = 64482943U;

	t48 = ((x253/(x254&x255))+x256);

	if (t48 != 3848U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x258 = 2620105;
	int16_t x260 = -9321;
	static int32_t t49 = 266227;

	t49 = ((x257/(x258&x259))+x260);

	if (t49 != -9449) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x261 = INT8_MAX;
	int8_t x262 = -1;
	uint32_t x264 = 1596U;
	volatile uint32_t t50 = 25333382U;

	t50 = ((x261/(x262&x263))+x264);

	if (t50 != 1596U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = -19728LL;
	uint8_t x266 = 19U;
	uint8_t x267 = 10U;
	volatile int8_t x268 = INT8_MAX;

	t51 = ((x265/(x266&x267))+x268);

	if (t51 != -9737LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = INT8_MAX;
	uint32_t x270 = 64852U;
	uint64_t x271 = 27941123LLU;
	volatile uint64_t t52 = 13382309881347476LLU;

	t52 = ((x269/(x270&x271))+x272);

	if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x277 = 1363533692323941LL;
	static volatile uint32_t x278 = UINT32_MAX;
	static uint8_t x279 = 6U;
	volatile int64_t t53 = 1707782LL;

	t53 = ((x277/(x278&x279))+x280);

	if (t53 != 610924682592180LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = UINT16_MAX;
	volatile uint32_t x283 = 251295U;
	int64_t x284 = -135010311261LL;
	int64_t t54 = -3LL;

	t54 = ((x281/(x282&x283))+x284);

	if (t54 != -135010232725LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x287 = INT16_MIN;
	static uint16_t x288 = 22836U;
	static uint64_t t55 = 126621899LLU;

	t55 = ((x285/(x286&x287))+x288);

	if (t55 != 22837LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x289 = INT64_MAX;
	int8_t x292 = 1;
	int64_t t56 = 4330LL;

	t56 = ((x289/(x290&x291))+x292);

	if (t56 != -4294967294LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x293 = 3003742808434LL;
	uint16_t x294 = 46U;
	volatile uint32_t x295 = 45U;
	int64_t x296 = INT64_MIN;
	volatile int64_t t57 = -31850919656504LL;

	t57 = ((x293/(x294&x295))+x296);

	if (t57 != -9223371968587893799LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	volatile uint32_t x299 = 44622U;
	uint16_t x300 = UINT16_MAX;
	static int64_t t58 = 43131LL;

	t58 = ((x297/(x298&x299))+x300);

	if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x305 = INT64_MAX;
	uint8_t x306 = 2U;
	volatile int16_t x308 = INT16_MIN;
	volatile int64_t t59 = -862595943341479LL;

	t59 = ((x305/(x306&x307))+x308);

	if (t59 != 4611686018427355135LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x309 = 32;
	int64_t x310 = 262092179162752LL;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int64_t t60 = -4512715811784829404LL;

	t60 = ((x309/(x310&x311))+x312);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x313 = INT32_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x316 = 7;
	int32_t t61 = -9;

	t61 = ((x313/(x314&x315))+x316);

	if (t61 != -8454653) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = INT32_MIN;
	static uint8_t x318 = 4U;
	int64_t x319 = INT64_MAX;
	uint64_t t62 = 0LLU;

	t62 = ((x317/(x318&x319))+x320);

	if (t62 != 736412765175LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MAX;
	volatile uint64_t t63 = 81952495456LLU;

	t63 = ((x321/(x322&x323))+x324);

	if (t63 != 798235LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = INT8_MIN;
	static int16_t x334 = INT16_MIN;
	int32_t x336 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

	t64 = ((x333/(x334&x335))+x336);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = 3746;
	static uint32_t x338 = 20U;
	int16_t x339 = -14083;
	int32_t x340 = INT32_MAX;
	uint32_t t65 = 946U;

	t65 = ((x337/(x338&x339))+x340);

	if (t65 != 2147483834U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = INT64_MIN;
	static volatile int16_t x347 = -6365;

	t66 = ((x345/(x346&x347))+x348);

	if (t66 != 5LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x350 = 24U;
	static uint32_t x351 = UINT32_MAX;
	volatile int32_t x352 = -325832307;
	volatile uint32_t t67 = 173684U;

	t67 = ((x349/(x350&x351))+x352);

	if (t67 != 3969139360U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x353 = 11806098LLU;
	int8_t x355 = INT8_MIN;
	int64_t x356 = 22328947LL;
	volatile uint64_t t68 = 12453025771624LLU;

	t68 = ((x353/(x354&x355))+x356);

	if (t68 != 22328947LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x357 = 1U;
	volatile uint64_t x358 = 1153867396016LLU;
	int8_t x359 = -1;
	int64_t x360 = INT64_MAX;

	t69 = ((x357/(x358&x359))+x360);

	if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	int32_t x363 = -11708681;
	int8_t x364 = INT8_MIN;
	int32_t t70 = -1590503;

	t70 = ((x361/(x362&x363))+x364);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -1;
	uint64_t t71 = 3825037932LLU;

	t71 = ((x365/(x366&x367))+x368);

	if (t71 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x369 = 4089;
	uint64_t x370 = 1233781058394215884LLU;
	uint32_t x371 = 29506767U;
	volatile int8_t x372 = -1;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x369/(x370&x371))+x372);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x373 = 123071496U;
	volatile uint32_t t73 = 133U;

	t73 = ((x373/(x374&x375))+x376);

	if (t73 != 41024709U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x378 = 3576;
	uint16_t x379 = UINT16_MAX;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t74 = 21U;

	t74 = ((x377/(x378&x379))+x380);

	if (t74 != 8923U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x381 = 3U;
	int16_t x382 = -1;
	static uint8_t x383 = UINT8_MAX;
	volatile int64_t x384 = 20126776694LL;
	static int64_t t75 = 5172565330LL;

	t75 = ((x381/(x382&x383))+x384);

	if (t75 != 20126776694LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MIN;
	int64_t t76 = 5492LL;

	t76 = ((x385/(x386&x387))+x388);

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x389 = -1LL;
	static int32_t x390 = -1;
	static volatile uint64_t x391 = 696938305170LLU;
	int8_t x392 = 25;
	volatile uint64_t t77 = 566241157272LLU;

	t77 = ((x389/(x390&x391))+x392);

	if (t77 != 26468284LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x397 = 10783702LLU;
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = INT8_MIN;
	uint8_t x400 = 1U;
	volatile uint64_t t78 = 189798495LLU;

	t78 = ((x397/(x398&x399))+x400);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x401 = 1U;
	uint64_t x402 = 9786407LLU;
	volatile int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MIN;
	uint64_t t79 = 70331346901483LLU;

	t79 = ((x401/(x402&x403))+x404);

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x406 = -3;
	int32_t x407 = INT32_MIN;
	int16_t x408 = 0;

	t80 = ((x405/(x406&x407))+x408);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x409 = 8141426795892LLU;
	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MIN;
	uint64_t t81 = 3628672446801LLU;

	t81 = ((x409/(x410&x411))+x412);

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x413 = 61U;
	static int8_t x414 = -9;
	int64_t x415 = INT64_MIN;
	static int64_t x416 = -59135701185LL;
	volatile int64_t t82 = -100140527582329LL;

	t82 = ((x413/(x414&x415))+x416);

	if (t82 != -59135701185LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x417 = INT32_MIN;
	uint64_t x419 = 81987287583363219LLU;
	int32_t x420 = INT32_MIN;
	uint64_t t83 = 25424523330421LLU;

	t83 = ((x417/(x418&x419))+x420);

	if (t83 != 18446744071562068192LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x421 = INT16_MIN;
	volatile int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;
	int64_t t84 = 4429264404453139LL;

	t84 = ((x421/(x422&x423))+x424);

	if (t84 != 4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x425 = 242653907U;
	uint32_t x426 = UINT32_MAX;
	static int16_t x427 = -1;
	int32_t x428 = INT32_MIN;
	uint32_t t85 = 0U;

	t85 = ((x425/(x426&x427))+x428);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x430 = -30;
	uint16_t x431 = 3U;
	int8_t x432 = INT8_MIN;
	static volatile uint64_t t86 = 5204470303795949LLU;

	t86 = ((x429/(x430&x431))+x432);

	if (t86 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	static uint64_t x435 = 45850175780LLU;
	static int8_t x436 = INT8_MAX;
	uint64_t t87 = 103063057605595343LLU;

	t87 = ((x433/(x434&x435))+x436);

	if (t87 != 402326699LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x437 = INT16_MAX;
	uint32_t x438 = 459136863U;
	int8_t x439 = INT8_MIN;
	int32_t x440 = INT32_MIN;
	uint32_t t88 = 12555653U;

	t88 = ((x437/(x438&x439))+x440);

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x441 = -18;
	static int32_t x443 = -1;
	uint64_t t89 = 7590LLU;

	t89 = ((x441/(x442&x443))+x444);

	if (t89 != 89640765154LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x449 = INT32_MAX;
	uint32_t x450 = UINT32_MAX;
	uint32_t x452 = UINT32_MAX;

	t90 = ((x449/(x450&x451))+x452);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x457 = UINT16_MAX;
	static int8_t x458 = 26;
	static int64_t x459 = 1783291496646LL;
	int64_t x460 = -104506466494LL;

	t91 = ((x457/(x458&x459))+x460);

	if (t91 != -104506433727LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x465 = INT64_MIN;
	int32_t x466 = -16;
	int8_t x467 = -3;
	int32_t x468 = INT32_MIN;
	static volatile int64_t t92 = -93716237136LL;

	t92 = ((x465/(x466&x467))+x468);

	if (t92 != 576460750155939840LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = -1;
	uint64_t x470 = 28762654LLU;
	static int8_t x471 = 41;
	volatile int8_t x472 = -14;
	static volatile uint64_t t93 = 370314LLU;

	t93 = ((x469/(x470&x471))+x472);

	if (t93 != 2305843009213693937LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = INT8_MIN;
	uint32_t x476 = 308228U;
	uint64_t t94 = 150086LLU;

	t94 = ((x473/(x474&x475))+x476);

	if (t94 != 417314LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x477 = 394048496257743LLU;
	volatile int8_t x478 = 26;
	int32_t x479 = -1;
	int64_t x480 = 1LL;
	volatile uint64_t t95 = 19351591950302630LLU;

	t95 = ((x477/(x478&x479))+x480);

	if (t95 != 15155711394529LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x481 = UINT16_MAX;
	uint8_t x482 = 2U;
	uint64_t x483 = 3057882374179LLU;
	int32_t x484 = INT32_MIN;
	uint64_t t96 = 1236796737251031LLU;

	t96 = ((x481/(x482&x483))+x484);

	if (t96 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x489 = INT8_MAX;
	int32_t x490 = INT32_MIN;
	int32_t x492 = INT32_MIN;

	t97 = ((x489/(x490&x491))+x492);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x493 = INT8_MAX;
	int32_t x494 = -1;
	int8_t x495 = INT8_MIN;
	int8_t x496 = 46;
	int32_t t98 = -555146534;

	t98 = ((x493/(x494&x495))+x496);

	if (t98 != 46) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x505 = -2492;
	static int32_t x506 = -1923645;
	int64_t x507 = INT64_MIN;
	int32_t x508 = 51103885;

	t99 = ((x505/(x506&x507))+x508);

	if (t99 != 51103885LL) { NG(); } else { ; }
	
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

