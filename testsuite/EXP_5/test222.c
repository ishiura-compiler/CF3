#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
int8_t x5 = 11;
static int8_t x14 = INT8_MIN;
int32_t x17 = INT32_MIN;
uint64_t x20 = 15133045416628499LLU;
int32_t x31 = -30955307;
uint64_t x36 = 346077238LLU;
static int32_t x47 = -1;
uint8_t x51 = UINT8_MAX;
static volatile uint64_t t9 = 1384LLU;
volatile uint64_t x57 = 8008709126756449759LLU;
volatile uint64_t t11 = 2289084173608188410LLU;
int32_t x65 = -1;
int32_t x69 = -1;
volatile uint8_t x75 = 89U;
int32_t x76 = INT32_MAX;
uint16_t x77 = 23U;
int8_t x102 = INT8_MAX;
int16_t x107 = INT16_MAX;
static uint32_t x129 = 53U;
uint8_t x131 = 14U;
static volatile uint32_t x133 = 197071317U;
volatile int64_t t24 = -315759404773700399LL;
volatile int64_t t26 = INT64_MAX;
uint64_t x149 = 14081067LLU;
volatile uint64_t t28 = 106761377LLU;
int8_t x154 = INT8_MIN;
int8_t x158 = 7;
int8_t x159 = INT8_MIN;
volatile int32_t x162 = -1;
int64_t x167 = -1LL;
int32_t x168 = INT32_MIN;
uint8_t x176 = 17U;
int32_t t33 = 459713;
volatile int8_t x179 = INT8_MAX;
int16_t x190 = -1;
static volatile uint8_t x198 = 30U;
uint8_t x200 = UINT8_MAX;
static int64_t x207 = -417623310LL;
int16_t x210 = INT16_MAX;
int16_t x211 = INT16_MAX;
int32_t x212 = -1;
uint64_t x216 = 1518963488824798LLU;
volatile int32_t t43 = 64422080;
int32_t t44 = -540;
volatile uint64_t x230 = UINT64_MAX;
volatile int64_t x236 = INT64_MAX;
volatile int32_t x244 = INT32_MIN;
uint64_t x246 = 116LLU;
int8_t x248 = INT8_MIN;
int8_t x249 = -1;
static uint16_t x255 = UINT16_MAX;
uint32_t x261 = 4657137U;
static uint32_t x263 = UINT32_MAX;
static int16_t x266 = -1;
static volatile uint64_t t52 = 537729460519980LLU;
static int64_t x269 = INT64_MAX;
volatile uint16_t x271 = UINT16_MAX;
static uint32_t x273 = 856084950U;
int16_t x277 = -499;
int32_t x283 = -4183;
static uint32_t x296 = 2086802539U;
uint8_t x314 = UINT8_MAX;
int32_t x321 = INT32_MIN;
static uint8_t x324 = 55U;
int32_t x329 = -60235;
volatile int64_t t66 = 258016881022355LL;
uint32_t x334 = 25200U;
volatile uint64_t t69 = 143843007521538705LLU;
static volatile int16_t x358 = -1;
int32_t x363 = 770405187;
static uint8_t x369 = UINT8_MAX;
uint16_t x380 = 1004U;
volatile int8_t x383 = INT8_MIN;
uint16_t x384 = UINT16_MAX;
uint32_t x385 = UINT32_MAX;
int16_t x388 = INT16_MIN;
volatile uint32_t t78 = 1970469560U;
int8_t x401 = -1;
int32_t x421 = INT32_MIN;
int16_t x433 = INT16_MIN;
static uint32_t x434 = UINT32_MAX;
int16_t x440 = INT16_MAX;
int16_t x453 = -1;
uint64_t x455 = UINT64_MAX;
static volatile uint16_t x457 = 1656U;
int8_t x459 = INT8_MAX;
volatile uint64_t x470 = 4113982945744201LLU;
int64_t x471 = INT64_MIN;
volatile uint64_t t92 = 7888508149081LLU;
uint64_t x480 = 5714690226108LLU;
uint64_t t93 = 14618995966274530LLU;
volatile int64_t x483 = -5382213LL;
int32_t x508 = -1;
uint16_t x509 = UINT16_MAX;


void f0(void) {
	int64_t x2 = 448470361323429LL;
	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -1010558334513110007LL;

	t0 = (x1+((x2-x3)%x4));

	if (t0 != -9222923566493452251LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -588;
	int64_t x7 = -648LL;
	uint32_t x8 = UINT32_MAX;
	volatile int64_t t1 = -54451509885596LL;

	t1 = (x5+((x6-x7)%x8));

	if (t1 != 71LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	static volatile int8_t x11 = 1;
	int64_t x12 = -2118921546758852230LL;
	int64_t t2 = -59691LL;

	t2 = (x9+((x10-x11)%x12));

	if (t2 != -32897LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 1U;
	int16_t x15 = -583;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 15536;

	t3 = (x13+((x14-x15)%x16));

	if (t3 != 456) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	volatile int64_t x19 = -1LL;
	uint64_t t4 = 299465765LLU;

	t4 = (x17+((x18-x19)%x20));

	if (t4 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 28U;
	static int16_t x26 = -5;
	static uint8_t x27 = 12U;
	uint8_t x28 = UINT8_MAX;
	int32_t t5 = 60969;

	t5 = (x25+((x26-x27)%x28));

	if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 8168;
	volatile int16_t x30 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t6 = -943;

	t6 = (x29+((x30-x31)%x32));

	if (t6 != 30483) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -53;
	volatile uint32_t x34 = 38U;
	static int8_t x35 = INT8_MIN;
	uint64_t t7 = 9159346054362657745LLU;

	t7 = (x33+((x34-x35)%x36));

	if (t7 != 113LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x45 = INT64_MIN;
	uint32_t x46 = 402U;
	int8_t x48 = 6;
	static int64_t t8 = -705699LL;

	t8 = (x45+((x46-x47)%x48));

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x49 = 110LLU;
	static int64_t x50 = -1LL;
	int64_t x52 = -19257LL;

	t9 = (x49+((x50-x51)%x52));

	if (t9 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 154629;
	static int16_t x54 = INT16_MAX;
	static int32_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	uint32_t t10 = 167471U;

	t10 = (x53+((x54-x55)%x56));

	if (t10 != 187397U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x58 = -13024;
	int16_t x59 = INT16_MIN;
	static volatile uint64_t x60 = UINT64_MAX;

	t11 = (x57+((x58-x59)%x60));

	if (t11 != 8008709126756469503LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -6047929121239591LL;
	int16_t x62 = -534;
	static int32_t x63 = INT32_MIN;
	int16_t x64 = -5;
	static volatile int64_t t12 = -4496LL;

	t12 = (x61+((x62-x63)%x64));

	if (t12 != -6047929121239587LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = -1539209LL;
	int16_t x67 = INT16_MIN;
	volatile uint64_t x68 = 6738324664129178LLU;
	volatile uint64_t t13 = 1387221622061159LLU;

	t13 = (x65+((x66-x67)%x68));

	if (t13 != 3949467986484988LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x70 = -14;
	int16_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	uint32_t t14 = 45812577U;

	t14 = (x69+((x70-x71)%x72));

	if (t14 != 4294967282U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	volatile int32_t t15 = -2;

	t15 = (x73+((x74-x75)%x76));

	if (t15 != -32858) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = -1;
	volatile int16_t x79 = -1;
	int16_t x80 = 5;
	int32_t t16 = 68369683;

	t16 = (x77+((x78-x79)%x80));

	if (t16 != 23) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = -12;
	volatile int8_t x90 = 3;
	uint64_t x91 = 3415406840016LLU;
	static uint16_t x92 = UINT16_MAX;
	uint64_t t17 = 45013820LLU;

	t17 = (x89+((x90-x91)%x92));

	if (t17 != 15856LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -11;
	static int16_t x94 = -1;
	int16_t x95 = -1;
	int8_t x96 = INT8_MIN;
	volatile int32_t t18 = 2;

	t18 = (x93+((x94-x95)%x96));

	if (t18 != -11) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 3U;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -5900854709574LL;
	volatile int64_t t19 = -592958328LL;

	t19 = (x101+((x102-x103)%x104));

	if (t19 != 258LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = 10LL;
	uint64_t x106 = 109579687968856516LLU;
	static int32_t x108 = INT32_MAX;
	volatile uint64_t t20 = 1084896048630733LLU;

	t20 = (x105+((x106-x107)%x108));

	if (t20 != 1258649113LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = 49U;
	uint8_t x110 = 2U;
	volatile int16_t x111 = -79;
	static volatile int8_t x112 = -1;
	volatile int32_t t21 = 585618;

	t21 = (x109+((x110-x111)%x112));

	if (t21 != 49) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x121 = INT16_MAX;
	int64_t x122 = -1LL;
	int16_t x123 = -5;
	int32_t x124 = 4706;
	volatile int64_t t22 = 303375104164843LL;

	t22 = (x121+((x122-x123)%x124));

	if (t22 != 32771LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x130 = -217322356647195LL;
	uint16_t x132 = 3679U;
	int64_t t23 = -496931198322926190LL;

	t23 = (x129+((x130-x131)%x132));

	if (t23 != -1528LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	volatile int64_t x136 = INT64_MIN;

	t24 = (x133+((x134-x135)%x136));

	if (t24 != 197038550LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -407304011;
	int16_t x138 = INT16_MIN;
	volatile uint32_t x139 = UINT32_MAX;
	int32_t x140 = 90835937;
	uint32_t t25 = 10668U;

	t25 = (x137+((x138-x139)%x140));

	if (t25 != 3913308775U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x141 = INT64_MAX;
	volatile int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;

	t26 = (x141+((x142-x143)%x144));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = -1;
	uint32_t x147 = 2067U;
	uint8_t x148 = UINT8_MAX;
	static uint32_t t27 = 138U;

	t27 = (x145+((x146-x147)%x148));

	if (t27 != 4294934756U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x150 = INT16_MIN;
	uint32_t x151 = UINT32_MAX;
	uint64_t x152 = UINT64_MAX;

	t28 = (x149+((x150-x151)%x152));

	if (t28 != 4309015596LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = 5;
	volatile uint32_t x155 = UINT32_MAX;
	int64_t x156 = 3873515LL;
	int64_t t29 = -1360185LL;

	t29 = (x153+((x154-x155)%x156));

	if (t29 != 3112554LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t30 = 1;

	t30 = (x157+((x158-x159)%x160));

	if (t30 != 65670) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = -3;
	uint32_t x163 = 29U;
	uint64_t x164 = 1525951LLU;
	static uint64_t t31 = 225LLU;

	t31 = (x161+((x162-x163)%x164));

	if (t31 != 941149LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 12710U;
	int16_t x166 = -14096;
	int64_t t32 = -6LL;

	t32 = (x165+((x166-x167)%x168));

	if (t32 != -1385LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	static int8_t x175 = INT8_MIN;

	t33 = (x173+((x174-x175)%x176));

	if (t33 != -32759) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x177 = 1U;
	volatile int32_t x178 = -1;
	uint64_t x180 = 6889803LLU;
	volatile uint64_t t34 = 35LLU;

	t34 = (x177+((x178-x179)%x180));

	if (t34 != 3388203LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = -53;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t35 = -400315;

	t35 = (x181+((x182-x183)%x184));

	if (t35 != -53) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x189 = 6;
	uint16_t x191 = 935U;
	int8_t x192 = INT8_MAX;
	int32_t t36 = 6;

	t36 = (x189+((x190-x191)%x192));

	if (t36 != -41) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = 12676622LL;
	volatile int8_t x195 = INT8_MIN;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int64_t t37 = -5396LL;

	t37 = (x193+((x194-x195)%x196));

	if (t37 != 4294967485LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x197 = -1;
	int8_t x199 = -1;
	static volatile int32_t t38 = -968127326;

	t38 = (x197+((x198-x199)%x200));

	if (t38 != 30) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x201 = 1U;
	uint64_t x202 = 0LLU;
	static volatile int16_t x203 = INT16_MIN;
	volatile uint16_t x204 = 439U;
	uint64_t t39 = 109646LLU;

	t39 = (x201+((x202-x203)%x204));

	if (t39 != 283LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = 1015732633072LL;
	static volatile int32_t x206 = INT32_MAX;
	static int8_t x208 = -1;
	volatile int64_t t40 = -698170707LL;

	t40 = (x205+((x206-x207)%x208));

	if (t40 != 1015732633072LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = INT16_MIN;
	volatile int32_t t41 = -66;

	t41 = (x209+((x210-x211)%x212));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x213 = UINT32_MAX;
	static int32_t x214 = 23673115;
	int16_t x215 = -6308;
	volatile uint64_t t42 = 5712183537707651LLU;

	t42 = (x213+((x214-x215)%x216));

	if (t42 != 4318646718LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x217 = -38297752;
	static uint8_t x218 = 18U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;

	t43 = (x217+((x218-x219)%x220));

	if (t43 != -38297734) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x221 = 0;
	int16_t x222 = INT16_MAX;
	int16_t x223 = -25;
	int32_t x224 = -1;

	t44 = (x221+((x222-x223)%x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x229 = INT64_MIN;
	int8_t x231 = INT8_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t45 = 101510188928LLU;

	t45 = (x229+((x230-x231)%x232));

	if (t45 != 9223372036854808448LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x233 = 3U;
	int8_t x234 = INT8_MAX;
	int8_t x235 = INT8_MAX;
	volatile int64_t t46 = 2912388861887444LL;

	t46 = (x233+((x234-x235)%x236));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x241 = 1LL;
	int16_t x242 = -9;
	static int16_t x243 = INT16_MAX;
	volatile int64_t t47 = -94LL;

	t47 = (x241+((x242-x243)%x244));

	if (t47 != -32775LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x245 = 0U;
	static volatile int8_t x247 = -1;
	uint64_t t48 = 930286171313LLU;

	t48 = (x245+((x246-x247)%x248));

	if (t48 != 117LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x250 = -1;
	int32_t x251 = -1;
	int8_t x252 = INT8_MAX;
	static int32_t t49 = 16400694;

	t49 = (x249+((x250-x251)%x252));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = INT32_MIN;
	static volatile uint16_t x254 = UINT16_MAX;
	int16_t x256 = -1;
	static int32_t t50 = INT32_MIN;

	t50 = (x253+((x254-x255)%x256));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x262 = -1LL;
	static uint8_t x264 = 5U;
	int64_t t51 = -55264933161957040LL;

	t51 = (x261+((x262-x263)%x264));

	if (t51 != 4657136LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x265 = UINT64_MAX;
	uint32_t x267 = 4747511U;
	int8_t x268 = INT8_MIN;

	t52 = (x265+((x266-x267)%x268));

	if (t52 != 4290219783LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x270 = -1LL;
	int64_t x272 = INT64_MAX;
	int64_t t53 = 7593593LL;

	t53 = (x269+((x270-x271)%x272));

	if (t53 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x274 = 0U;
	int32_t x275 = 906367953;
	static int8_t x276 = INT8_MIN;
	static uint32_t t54 = 1760821U;

	t54 = (x273+((x274-x275)%x276));

	if (t54 != 4244684293U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	uint32_t t55 = 32852U;

	t55 = (x277+((x278-x279)%x280));

	if (t55 != 2147483148U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x281 = 7204841472LL;
	volatile int32_t x282 = INT32_MIN;
	static int64_t x284 = -23623083355247LL;
	int64_t t56 = -2LL;

	t56 = (x281+((x282-x283)%x284));

	if (t56 != 5057362007LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = 1;
	volatile uint16_t x291 = 6U;
	static int8_t x292 = 1;
	volatile int32_t t57 = 565;

	t57 = (x289+((x290-x291)%x292));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x293 = 254U;
	int32_t x294 = -1;
	int8_t x295 = 25;
	volatile uint32_t t58 = 1U;

	t58 = (x293+((x294-x295)%x296));

	if (t58 != 121362446U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x297 = INT8_MIN;
	uint32_t x298 = 296627268U;
	int8_t x299 = -1;
	int8_t x300 = INT8_MAX;
	uint32_t t59 = 1U;

	t59 = (x297+((x298-x299)%x300));

	if (t59 != 4294967268U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x301 = -1;
	static int64_t x302 = -1243705376745334470LL;
	int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;
	int64_t t60 = -62335649618LL;

	t60 = (x301+((x302-x303)%x304));

	if (t60 != -1243705374597850823LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x305 = -1LL;
	int8_t x306 = INT8_MIN;
	volatile int32_t x307 = 2880532;
	int8_t x308 = INT8_MIN;
	static int64_t t61 = 179740779426LL;

	t61 = (x305+((x306-x307)%x308));

	if (t61 != -21LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 370U;
	volatile int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	uint64_t t62 = UINT64_MAX;

	t62 = (x309+((x310-x311)%x312));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x313 = 571446U;
	uint8_t x315 = 0U;
	volatile uint32_t x316 = 56090372U;
	static volatile uint32_t t63 = 40U;

	t63 = (x313+((x314-x315)%x316));

	if (t63 != 571701U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x317 = -748677;
	int32_t x318 = -506;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -1764;
	volatile int32_t t64 = 73;

	t64 = (x317+((x318-x319)%x320));

	if (t64 != -748167) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x322 = 168542560859LL;
	static uint32_t x323 = 43375U;
	volatile int64_t t65 = 448614131062LL;

	t65 = (x321+((x322-x323)%x324));

	if (t65 != -2147483604LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x330 = -1;
	static int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MAX;

	t66 = (x329+((x330-x331)%x332));

	if (t66 != -60234LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = -984;
	int16_t x335 = -1765;
	uint32_t x336 = 4098U;
	uint32_t t67 = 0U;

	t67 = (x333+((x334-x335)%x336));

	if (t67 != 1393U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MIN;
	static volatile uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 3054136230383403LLU;
	static volatile uint64_t t68 = 37LLU;

	t68 = (x341+((x342-x343)%x344));

	if (t68 != 4295032704LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x349 = 2758U;
	int64_t x350 = -150759263234LL;
	static uint64_t x351 = 3992295096504LLU;
	volatile uint8_t x352 = UINT8_MAX;

	t69 = (x349+((x350-x351)%x352));

	if (t69 != 2766LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x353 = INT8_MIN;
	volatile uint64_t x354 = UINT64_MAX;
	static int16_t x355 = -9040;
	int32_t x356 = INT32_MIN;
	uint64_t t70 = 90830LLU;

	t70 = (x353+((x354-x355)%x356));

	if (t70 != 8911LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x357 = INT16_MIN;
	volatile int8_t x359 = 28;
	static uint16_t x360 = 3137U;
	static volatile int32_t t71 = -948;

	t71 = (x357+((x358-x359)%x360));

	if (t71 != -32797) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x361 = INT8_MAX;
	int16_t x362 = 0;
	int16_t x364 = INT16_MAX;
	volatile int32_t t72 = 9442503;

	t72 = (x361+((x362-x363)%x364));

	if (t72 != -20123) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = 31906838759590656LLU;
	uint32_t x366 = UINT32_MAX;
	volatile int8_t x367 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t73 = 87393LLU;

	t73 = (x365+((x366-x367)%x368));

	if (t73 != 31906838759590783LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 2;
	volatile uint32_t t74 = 258899U;

	t74 = (x369+((x370-x371)%x372));

	if (t74 != 256U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = INT16_MAX;
	static int16_t x374 = INT16_MIN;
	uint8_t x375 = 21U;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t75 = 32;

	t75 = (x373+((x374-x375)%x376));

	if (t75 != -22) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = 460;
	static int32_t x378 = 183;
	int16_t x379 = INT16_MAX;
	static int32_t t76 = -11574458;

	t76 = (x377+((x378-x379)%x380));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = -44;
	int32_t t77 = -23;

	t77 = (x381+((x382-x383)%x384));

	if (t77 != -32684) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x386 = INT8_MAX;
	int8_t x387 = 13;

	t78 = (x385+((x386-x387)%x388));

	if (t78 != 113U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MAX;
	int8_t x399 = -1;
	int64_t x400 = -1LL;
	int64_t t79 = INT64_MIN;

	t79 = (x397+((x398-x399)%x400));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x402 = 98311952U;
	static volatile int64_t x403 = -1LL;
	int32_t x404 = INT32_MIN;
	volatile int64_t t80 = -195749092472953854LL;

	t80 = (x401+((x402-x403)%x404));

	if (t80 != 98311952LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x413 = INT16_MIN;
	volatile uint32_t x414 = 1275955523U;
	static int32_t x415 = 1265516;
	static int64_t x416 = INT64_MAX;
	static int64_t t81 = 104LL;

	t81 = (x413+((x414-x415)%x416));

	if (t81 != 1274657239LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x417 = UINT8_MAX;
	volatile int32_t x418 = INT32_MAX;
	static int16_t x419 = INT16_MAX;
	int64_t x420 = 5LL;
	static int64_t t82 = 8145LL;

	t82 = (x417+((x418-x419)%x420));

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x422 = 23U;
	int8_t x423 = INT8_MAX;
	int64_t x424 = 1374LL;
	static int64_t t83 = -472LL;

	t83 = (x421+((x422-x423)%x424));

	if (t83 != -2147483752LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	volatile uint32_t t84 = 15355224U;

	t84 = (x433+((x434-x435)%x436));

	if (t84 != 4294934655U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x437 = 28U;
	int32_t x438 = -1;
	int64_t x439 = 118081322866LL;
	int64_t t85 = 8428LL;

	t85 = (x437+((x438-x439)%x440));

	if (t85 != -31784LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x441 = 9510853U;
	uint8_t x442 = UINT8_MAX;
	int8_t x443 = -1;
	volatile int32_t x444 = -1;
	volatile uint32_t t86 = 180718U;

	t86 = (x441+((x442-x443)%x444));

	if (t86 != 9510853U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x449 = 34;
	static int8_t x450 = INT8_MAX;
	static int64_t x451 = -1LL;
	volatile int8_t x452 = 26;
	volatile int64_t t87 = -13252LL;

	t87 = (x449+((x450-x451)%x452));

	if (t87 != 58LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x454 = INT16_MIN;
	uint8_t x456 = 44U;
	uint64_t t88 = 1806800534495973LLU;

	t88 = (x453+((x454-x455)%x456));

	if (t88 != 28LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x458 = -105;
	int64_t x460 = INT64_MIN;
	int64_t t89 = 5540793817572LL;

	t89 = (x457+((x458-x459)%x460));

	if (t89 != 1424LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x461 = UINT16_MAX;
	uint64_t x462 = 1LLU;
	volatile int16_t x463 = -5733;
	volatile int32_t x464 = -1928032;
	volatile uint64_t t90 = 535827921673843LLU;

	t90 = (x461+((x462-x463)%x464));

	if (t90 != 71269LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x469 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	static volatile uint64_t t91 = 355LLU;

	t91 = (x469+((x470-x471)%x472));

	if (t91 != 9227486017653036361LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x473 = 2800298794640797LLU;
	uint16_t x474 = 3U;
	uint32_t x475 = 7850465U;
	static int8_t x476 = INT8_MIN;

	t92 = (x473+((x474-x475)%x476));

	if (t92 != 2800303081757631LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x477 = -1LL;
	int32_t x478 = 8;
	volatile int64_t x479 = -1LL;

	t93 = (x477+((x478-x479)%x480));

	if (t93 != 8LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x481 = UINT32_MAX;
	uint8_t x482 = UINT8_MAX;
	int32_t x484 = -1;
	static int64_t t94 = 30LL;

	t94 = (x481+((x482-x483)%x484));

	if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x485 = 42449549;
	int64_t x486 = -69839512888412485LL;
	uint8_t x487 = 1U;
	volatile uint8_t x488 = 121U;
	static int64_t t95 = -7263538424LL;

	t95 = (x485+((x486-x487)%x488));

	if (t95 != 42449451LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x489 = 7U;
	int16_t x490 = INT16_MAX;
	int64_t x491 = -1LL;
	int8_t x492 = 1;
	int64_t t96 = 3225LL;

	t96 = (x489+((x490-x491)%x492));

	if (t96 != 7LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x501 = -1LL;
	int32_t x502 = INT32_MIN;
	static volatile uint32_t x503 = 610U;
	uint8_t x504 = UINT8_MAX;
	int64_t t97 = -129295384619LL;

	t97 = (x501+((x502-x503)%x504));

	if (t97 != 27LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x505 = 15699;
	static uint16_t x506 = 41U;
	int32_t x507 = -1;
	volatile int32_t t98 = 1457646;

	t98 = (x505+((x506-x507)%x508));

	if (t98 != 15699) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x510 = INT64_MAX;
	uint16_t x511 = 26U;
	uint16_t x512 = UINT16_MAX;
	static volatile int64_t t99 = -50597LL;

	t99 = (x509+((x510-x511)%x512));

	if (t99 != 98276LL) { NG(); } else { ; }
	
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

