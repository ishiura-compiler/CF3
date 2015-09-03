#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x18 = -1LL;
static volatile uint16_t x20 = 1U;
int64_t x29 = 331441937LL;
uint64_t t5 = 258900155LLU;
int8_t x35 = INT8_MIN;
static volatile uint32_t t6 = 215089548U;
int16_t x44 = INT16_MIN;
int64_t x45 = INT64_MIN;
static int8_t x54 = 1;
uint64_t x68 = UINT64_MAX;
int64_t x69 = -1653342891236LL;
volatile int16_t x73 = -2;
static uint64_t x82 = 182917688316093LLU;
int8_t x84 = INT8_MAX;
int32_t x86 = INT32_MIN;
static volatile uint64_t x96 = 17LLU;
uint32_t x99 = 304592507U;
static volatile int8_t x105 = INT8_MAX;
volatile int64_t t19 = 895429LL;
int8_t x110 = -29;
int16_t x112 = 4;
uint64_t x115 = 1390LLU;
uint64_t x117 = UINT64_MAX;
int32_t x118 = INT32_MAX;
int32_t x120 = 1;
uint32_t t23 = 5U;
int64_t x135 = INT64_MAX;
volatile int16_t x137 = -15;
uint64_t x138 = UINT64_MAX;
static int64_t x139 = INT64_MIN;
int16_t x144 = -1;
int64_t x149 = 24236013447016LL;
volatile uint32_t x150 = 8133466U;
int16_t x151 = 322;
int64_t t29 = -10142LL;
int64_t t31 = -36722584633651539LL;
static int16_t x168 = INT16_MIN;
static int32_t x169 = 222;
uint32_t x173 = 1945441U;
volatile uint64_t t35 = 339LLU;
int8_t x190 = 0;
static uint64_t x192 = 2824325933588727310LLU;
int8_t x197 = INT8_MAX;
static int16_t x207 = INT16_MIN;
volatile int16_t x208 = INT16_MIN;
uint32_t t40 = 331041173U;
volatile int8_t x213 = INT8_MIN;
uint8_t x242 = 4U;
int64_t x243 = -2123LL;
int8_t x244 = INT8_MAX;
int32_t x255 = INT32_MIN;
int32_t x258 = INT32_MIN;
static volatile int32_t x266 = 0;
int16_t x271 = INT16_MIN;
int16_t x272 = 0;
int8_t x280 = INT8_MIN;
uint16_t x281 = UINT16_MAX;
static int16_t x283 = INT16_MIN;
static volatile uint16_t x288 = 697U;
volatile int32_t t54 = -24276808;
static volatile int16_t x292 = -357;
int32_t t55 = 1;
static int32_t t56 = -13408;
int64_t x297 = -1LL;
int64_t x298 = INT64_MIN;
int8_t x300 = 20;
volatile int16_t x307 = INT16_MIN;
uint32_t t59 = 1U;
uint8_t x314 = 1U;
static volatile int32_t t62 = -390084160;
static uint16_t x337 = 1085U;
volatile uint8_t x340 = UINT8_MAX;
volatile uint16_t x388 = 1U;
int16_t x394 = INT16_MIN;
uint8_t x395 = UINT8_MAX;
static volatile int16_t x400 = INT16_MAX;
uint64_t t74 = 23062LLU;
volatile int8_t x405 = INT8_MAX;
uint16_t x407 = UINT16_MAX;
volatile uint32_t x410 = UINT32_MAX;
volatile uint64_t x413 = UINT64_MAX;
volatile int8_t x415 = INT8_MIN;
static volatile uint64_t t78 = 257850088968814028LLU;
int64_t t81 = 10062137888515LL;
static int8_t x436 = INT8_MAX;
int32_t t83 = 1;
int8_t x457 = INT8_MAX;
volatile int8_t x458 = -1;
volatile int8_t x465 = -1;
static int16_t x467 = -1;
static int8_t x468 = 1;
int32_t x486 = 20;
int32_t x492 = -640475;
int8_t x493 = INT8_MIN;
int16_t x501 = -31;
int64_t x502 = INT64_MIN;
int32_t x507 = -1;
volatile uint8_t x513 = UINT8_MAX;
uint32_t x516 = 5584U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = 35U;
	int8_t x3 = INT8_MAX;
	int32_t x4 = -1;
	static int64_t t0 = -3885001967227192360LL;

	t0 = (x1-((x2&x3)*x4));

	if (t0 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = -1LL;
	int16_t x8 = -226;
	volatile int64_t t1 = -11830991LL;

	t1 = (x5-((x6&x7)*x8));

	if (t1 != 970662608925LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;
	volatile uint64_t x15 = 43507LLU;
	int16_t x16 = 2;
	volatile uint64_t t2 = 727829031392843LLU;

	t2 = (x13-((x14&x15)*x16));

	if (t2 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -34;
	int64_t x19 = -1LL;
	volatile int64_t t3 = 204454225103686504LL;

	t3 = (x17-((x18&x19)*x20));

	if (t3 != -33LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 12U;
	int32_t x22 = INT32_MAX;
	volatile int16_t x23 = -1;
	uint64_t x24 = 456607134223926LLU;
	uint64_t t4 = 431272LLU;

	t4 = (x21-((x22&x23)*x24));

	if (t4 != 17220876763514113602LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x30 = 154U;
	volatile uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MAX;

	t5 = (x29-((x30&x31)*x32));

	if (t5 != 331442091LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x33 = 5647U;
	static int8_t x34 = INT8_MAX;
	static int16_t x36 = INT16_MIN;

	t6 = (x33-((x34&x35)*x36));

	if (t6 != 5647U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = INT8_MAX;
	static volatile int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MIN;
	int32_t t7 = 5;

	t7 = (x41-((x42&x43)*x44));

	if (t7 != 1069547647) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x46 = INT64_MIN;
	uint64_t x47 = 15991LLU;
	uint16_t x48 = UINT16_MAX;
	static volatile uint64_t t8 = 1709888LLU;

	t8 = (x45-((x46&x47)*x48));

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	volatile uint64_t x55 = 9759956618LLU;
	static uint64_t x56 = 7707787879LLU;
	volatile uint64_t t9 = 19271122317445986LLU;

	t9 = (x53-((x54&x55)*x56));

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x57 = -1;
	static uint32_t x58 = 15998100U;
	static int64_t x59 = INT64_MIN;
	volatile int64_t x60 = 3064948457242151690LL;
	volatile int64_t t10 = 141170760655964798LL;

	t10 = (x57-((x58&x59)*x60));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = -126723553;
	static int8_t x66 = INT8_MIN;
	uint64_t x67 = 7482603880276477696LLU;
	uint64_t t11 = 216154LLU;

	t11 = (x65-((x66&x67)*x68));

	if (t11 != 7482603880149754143LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x70 = INT32_MIN;
	uint32_t x71 = 150233080U;
	volatile int16_t x72 = INT16_MIN;
	volatile int64_t t12 = 30LL;

	t12 = (x69-((x70&x71)*x72));

	if (t12 != -1653342891236LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x74 = INT32_MIN;
	int16_t x75 = 2;
	int8_t x76 = INT8_MIN;
	volatile int32_t t13 = -1625512;

	t13 = (x73-((x74&x75)*x76));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = UINT32_MAX;
	int8_t x83 = -1;
	static uint64_t t14 = 11LLU;

	t14 = (x81-((x82&x83)*x84));

	if (t14 != 18423513531588375100LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = INT16_MAX;
	static uint64_t x87 = UINT64_MAX;
	int64_t x88 = -62LL;
	uint64_t t15 = 288LLU;

	t15 = (x85-((x86&x87)*x88));

	if (t15 != 18446743940565598207LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 9U;
	static volatile int64_t x95 = -12172558193978LL;
	uint64_t t16 = 4286941700LLU;

	t16 = (x93-((x94&x95)*x96));

	if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1LL;
	uint64_t x98 = 1220909806LLU;
	uint64_t x100 = 68070635726LLU;
	volatile uint64_t t17 = 292427706336810702LLU;

	t17 = (x97-((x98&x99)*x100));

	if (t17 != 18421887264226574003LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x101 = -1LL;
	volatile uint64_t x102 = 3LLU;
	int16_t x103 = INT16_MIN;
	int8_t x104 = -1;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x101-((x102&x103)*x104));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x106 = INT64_MIN;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t x108 = INT32_MIN;

	t19 = (x105-((x106&x107)*x108));

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = -56967;
	int16_t x111 = -21;
	volatile int32_t t20 = -1550254;

	t20 = (x109-((x110&x111)*x112));

	if (t20 != -56851) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = -1;
	volatile uint8_t x114 = 74U;
	volatile int8_t x116 = -2;
	uint64_t t21 = 2505862937484LLU;

	t21 = (x113-((x114&x115)*x116));

	if (t21 != 147LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x119 = 0;
	uint64_t t22 = UINT64_MAX;

	t22 = (x117-((x118&x119)*x120));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = -1;
	uint32_t x122 = 787864077U;
	int8_t x123 = -1;
	uint8_t x124 = UINT8_MAX;

	t23 = (x121-((x122&x123)*x124));

	if (t23 != 958123276U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x125 = -1;
	int32_t x126 = 197;
	int64_t x127 = 7946956537134358LL;
	int16_t x128 = INT16_MIN;
	static int64_t t24 = -11871256083135601LL;

	t24 = (x125-((x126&x127)*x128));

	if (t24 != 131071LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = INT64_MAX;
	volatile uint64_t x130 = 29LLU;
	int32_t x131 = INT32_MAX;
	int16_t x132 = INT16_MAX;
	uint64_t t25 = 4LLU;

	t25 = (x129-((x130&x131)*x132));

	if (t25 != 9223372036853825564LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = 0U;
	uint32_t x134 = 68002605U;
	uint16_t x136 = 1548U;
	int64_t t26 = 154680968230393LL;

	t26 = (x133-((x134&x135)*x136));

	if (t26 != -105268032540LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x140 = INT32_MAX;
	uint64_t t27 = 6119LLU;

	t27 = (x137-((x138&x139)*x140));

	if (t27 != 9223372036854775793LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -80;
	static int32_t x142 = 22547;
	uint16_t x143 = UINT16_MAX;
	static int32_t t28 = 12;

	t28 = (x141-((x142&x143)*x144));

	if (t28 != 22467) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x152 = -1;

	t29 = (x149-((x150&x151)*x152));

	if (t29 != 24231718480042LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x153 = INT32_MIN;
	static volatile int64_t x154 = -76LL;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	int64_t t30 = -2LL;

	t30 = (x153-((x154&x155)*x156));

	if (t30 != -2147500032LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x157 = UINT32_MAX;
	int64_t x158 = -1LL;
	int16_t x159 = -1;
	int8_t x160 = INT8_MIN;

	t31 = (x157-((x158&x159)*x160));

	if (t31 != 4294967167LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x165 = INT8_MIN;
	static int64_t x166 = -1LL;
	static int8_t x167 = INT8_MIN;
	static int64_t t32 = -63598244LL;

	t32 = (x165-((x166&x167)*x168));

	if (t32 != -4194432LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x170 = INT8_MIN;
	volatile uint64_t x171 = 772604994088024LLU;
	volatile int16_t x172 = -1;
	static uint64_t t33 = 168819872998417LLU;

	t33 = (x169-((x170&x171)*x172));

	if (t33 != 772604994088158LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = 6U;
	uint64_t x176 = 400126975LLU;
	static volatile uint64_t t34 = 17954149426965335LLU;

	t34 = (x173-((x174&x175)*x176));

	if (t34 != 1945441LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = 2513U;
	uint64_t x184 = UINT64_MAX;

	t35 = (x181-((x182&x183)*x184));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = 44U;
	static int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	volatile int16_t x188 = INT16_MAX;
	volatile int64_t t36 = -17LL;

	t36 = (x185-((x186&x187)*x188));

	if (t36 != 44LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x189 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	volatile uint64_t t37 = 11164831858622731LLU;

	t37 = (x189-((x190&x191)*x192));

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x198 = 120831LLU;
	static int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	volatile uint64_t t38 = 5614194376143638759LLU;

	t38 = (x197-((x198&x199)*x200));

	if (t38 != 127LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MIN;
	static int8_t x202 = INT8_MIN;
	static volatile uint32_t x203 = 363147U;
	uint32_t x204 = 1952079U;
	volatile uint32_t t39 = 5U;

	t39 = (x201-((x202&x203)*x204));

	if (t39 != 1946927744U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x205 = 62U;
	uint32_t x206 = 1U;

	t40 = (x205-((x206&x207)*x208));

	if (t40 != 62U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MAX;
	int16_t x216 = INT16_MAX;
	volatile int64_t t41 = 48LL;

	t41 = (x213-((x214&x215)*x216));

	if (t41 != -4161537LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int64_t x218 = 639276889217780403LL;
	static int64_t x219 = INT64_MIN;
	uint16_t x220 = 1U;
	volatile int64_t t42 = 921984LL;

	t42 = (x217-((x218&x219)*x220));

	if (t42 != 4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x221 = UINT8_MAX;
	volatile uint16_t x222 = 0U;
	volatile int16_t x223 = -1;
	int16_t x224 = -1565;
	volatile int32_t t43 = 64;

	t43 = (x221-((x222&x223)*x224));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = -103755746LL;
	static uint64_t x234 = 0LLU;
	volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = 4637331252717571898LLU;
	volatile uint64_t t44 = 7130248639297925LLU;

	t44 = (x233-((x234&x235)*x236));

	if (t44 != 18446744073605795870LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x241 = 16354U;
	volatile int64_t t45 = 456692755974965LL;

	t45 = (x241-((x242&x243)*x244));

	if (t45 != 15846LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = INT32_MIN;
	volatile int8_t x250 = INT8_MIN;
	uint8_t x251 = 1U;
	int16_t x252 = INT16_MIN;
	int32_t t46 = INT32_MIN;

	t46 = (x249-((x250&x251)*x252));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x253 = 2U;
	volatile int8_t x254 = INT8_MAX;
	volatile int16_t x256 = INT16_MIN;
	int32_t t47 = -24053785;

	t47 = (x253-((x254&x255)*x256));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x257 = 110LL;
	int16_t x259 = -20;
	uint32_t x260 = 8228U;
	volatile int64_t t48 = 287011805LL;

	t48 = (x257-((x258&x259)*x260));

	if (t48 != 110LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = -1;
	uint16_t x267 = 1040U;
	int32_t x268 = -768334;
	static volatile int32_t t49 = 2757;

	t49 = (x265-((x266&x267)*x268));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x269 = UINT64_MAX;
	static volatile uint16_t x270 = 0U;
	uint64_t t50 = UINT64_MAX;

	t50 = (x269-((x270&x271)*x272));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = -151141416859668803LL;
	int8_t x274 = 6;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = INT8_MIN;
	static volatile int64_t t51 = -3521421936646363LL;

	t51 = (x273-((x274&x275)*x276));

	if (t51 != -151141416859668803LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	uint32_t t52 = 1917816U;

	t52 = (x277-((x278&x279)*x280));

	if (t52 != 4290838527U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x282 = UINT32_MAX;
	int32_t x284 = INT32_MIN;
	volatile uint32_t t53 = 27332U;

	t53 = (x281-((x282&x283)*x284));

	if (t53 != 65535U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MIN;
	static volatile int16_t x287 = INT16_MIN;

	t54 = (x285-((x286&x287)*x288));

	if (t54 != 22872063) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x289 = UINT16_MAX;
	volatile int32_t x290 = 13;
	int32_t x291 = -1;

	t55 = (x289-((x290&x291)*x292));

	if (t55 != 70176) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x293 = 0U;
	uint16_t x294 = 1573U;
	uint8_t x295 = UINT8_MAX;
	uint8_t x296 = 10U;

	t56 = (x293-((x294&x295)*x296));

	if (t56 != -370) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x299 = 614876362181LLU;
	static uint64_t t57 = UINT64_MAX;

	t57 = (x297-((x298&x299)*x300));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = 1;
	volatile int64_t x303 = INT64_MIN;
	int64_t x304 = -1LL;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x301-((x302&x303)*x304));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x305 = 3915;
	static uint32_t x306 = 400504U;
	static uint8_t x308 = 89U;

	t59 = (x305-((x306&x307)*x308));

	if (t59 != 4259974987U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x313 = INT16_MAX;
	static int64_t x315 = INT64_MIN;
	static volatile int32_t x316 = INT32_MIN;
	volatile int64_t t60 = -329899697LL;

	t60 = (x313-((x314&x315)*x316));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x317 = 6U;
	uint32_t x318 = UINT32_MAX;
	volatile int8_t x319 = INT8_MAX;
	static int8_t x320 = -1;
	volatile uint32_t t61 = 3587894U;

	t61 = (x317-((x318&x319)*x320));

	if (t61 != 133U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x321 = UINT8_MAX;
	uint8_t x322 = 34U;
	uint16_t x323 = 240U;
	int8_t x324 = INT8_MIN;

	t62 = (x321-((x322&x323)*x324));

	if (t62 != 4351) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = 187;
	static volatile int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	int16_t x328 = 0;
	static volatile int32_t t63 = 118774;

	t63 = (x325-((x326&x327)*x328));

	if (t63 != 187) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x333 = -1;
	uint64_t x334 = 44550LLU;
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x333-((x334&x335)*x336));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x338 = UINT32_MAX;
	volatile int32_t x339 = INT32_MIN;
	uint32_t t65 = 15U;

	t65 = (x337-((x338&x339)*x340));

	if (t65 != 2147484733U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x349 = 10U;
	uint64_t x350 = 113698298LLU;
	int16_t x351 = INT16_MIN;
	int8_t x352 = 3;
	uint64_t t66 = 17499661105342182LLU;

	t66 = (x349-((x350&x351)*x352));

	if (t66 != 18446744073368535050LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x353 = 361;
	static uint16_t x354 = 1554U;
	int64_t x355 = INT64_MIN;
	int32_t x356 = 96;
	volatile int64_t t67 = -7339921393LL;

	t67 = (x353-((x354&x355)*x356));

	if (t67 != 361LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x361 = 94U;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = 0;
	volatile int16_t x364 = INT16_MIN;
	int32_t t68 = 6;

	t68 = (x361-((x362&x363)*x364));

	if (t68 != 94) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x365 = 5U;
	static int8_t x366 = INT8_MAX;
	int64_t x367 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile int64_t t69 = 1507909959407LL;

	t69 = (x365-((x366&x367)*x368));

	if (t69 != 272730423301LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x381 = -19;
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 366LLU;
	uint16_t x384 = UINT16_MAX;
	volatile uint64_t t70 = 44857248033302LLU;

	t70 = (x381-((x382&x383)*x384));

	if (t70 != 18446744073692774637LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x385 = 31U;
	uint16_t x386 = 6U;
	int8_t x387 = INT8_MIN;
	volatile int32_t t71 = 1;

	t71 = (x385-((x386&x387)*x388));

	if (t71 != 31) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x389 = INT32_MAX;
	static int8_t x390 = 1;
	static volatile int64_t x391 = INT64_MIN;
	volatile uint8_t x392 = 35U;
	volatile int64_t t72 = -21222298106LL;

	t72 = (x389-((x390&x391)*x392));

	if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x393 = INT64_MIN;
	int8_t x396 = -3;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x393-((x394&x395)*x396));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x397 = 111496247LLU;
	static uint64_t x398 = UINT64_MAX;
	volatile uint32_t x399 = UINT32_MAX;

	t74 = (x397-((x398&x399)*x400));

	if (t74 != 18446603340627692598LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x401 = -5806564LL;
	uint16_t x402 = 14933U;
	static int32_t x403 = INT32_MIN;
	int32_t x404 = INT32_MIN;
	volatile int64_t t75 = -35LL;

	t75 = (x401-((x402&x403)*x404));

	if (t75 != -5806564LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x406 = 12U;
	volatile int16_t x408 = -1;
	static int32_t t76 = -697392298;

	t76 = (x405-((x406&x407)*x408));

	if (t76 != 139) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x409 = INT16_MAX;
	volatile int32_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile uint32_t t77 = 58U;

	t77 = (x409-((x410&x411)*x412));

	if (t77 != 32639U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x414 = 87461844579230078LLU;
	int32_t x416 = INT32_MIN;

	t78 = (x413-((x414&x415)*x416));

	if (t78 != 14467198626171977727LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x421 = INT8_MIN;
	uint8_t x422 = UINT8_MAX;
	int64_t x423 = -1LL;
	uint16_t x424 = UINT16_MAX;
	int64_t t79 = 80LL;

	t79 = (x421-((x422&x423)*x424));

	if (t79 != -16711553LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = -1;
	int64_t x426 = INT64_MIN;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 2LLU;
	uint64_t t80 = UINT64_MAX;

	t80 = (x425-((x426&x427)*x428));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x429 = -1LL;
	uint16_t x430 = 5920U;
	volatile int16_t x431 = INT16_MAX;
	int64_t x432 = -1LL;

	t81 = (x429-((x430&x431)*x432));

	if (t81 != 5919LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x433 = 3;
	uint32_t x434 = 226132072U;
	uint16_t x435 = UINT16_MAX;
	uint32_t t82 = 61862U;

	t82 = (x433-((x434&x435)*x436));

	if (t82 != 4290792555U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x441 = -1;
	volatile int16_t x442 = 1345;
	int8_t x443 = INT8_MIN;
	uint16_t x444 = 38U;

	t83 = (x441-((x442&x443)*x444));

	if (t83 != -48641) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x445 = 1U;
	volatile int32_t x446 = 7207;
	uint32_t x447 = 541108846U;
	static uint32_t x448 = UINT32_MAX;
	static volatile uint32_t t84 = 4765587U;

	t84 = (x445-((x446&x447)*x448));

	if (t84 != 2087U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = 214;
	static int8_t x450 = INT8_MAX;
	uint8_t x451 = 2U;
	uint8_t x452 = UINT8_MAX;
	static int32_t t85 = 2;

	t85 = (x449-((x450&x451)*x452));

	if (t85 != -296) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x453 = 383069;
	static uint16_t x454 = UINT16_MAX;
	static int64_t x455 = 47397LL;
	int32_t x456 = INT32_MIN;
	volatile int64_t t86 = -631LL;

	t86 = (x453-((x454&x455)*x456));

	if (t86 != 101784282847325LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x459 = 9028602104147831437LLU;
	static volatile int32_t x460 = -1;
	uint64_t t87 = 661850004323491LLU;

	t87 = (x457-((x458&x459)*x460));

	if (t87 != 9028602104147831564LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x461 = 264669811U;
	int32_t x462 = INT32_MIN;
	int8_t x463 = INT8_MAX;
	static volatile int16_t x464 = -1;
	volatile uint32_t t88 = 164989108U;

	t88 = (x461-((x462&x463)*x464));

	if (t88 != 264669811U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x466 = -1;
	volatile int32_t t89 = 1;

	t89 = (x465-((x466&x467)*x468));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x469 = 8U;
	volatile int8_t x470 = INT8_MAX;
	int64_t x471 = INT64_MIN;
	volatile uint32_t x472 = 2925621U;
	volatile int64_t t90 = -233719808936LL;

	t90 = (x469-((x470&x471)*x472));

	if (t90 != 8LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x473 = INT32_MAX;
	static int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	static int32_t x476 = 1533;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x473-((x474&x475)*x476));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x485 = UINT8_MAX;
	static uint64_t x487 = 437557823LLU;
	int32_t x488 = -1;
	volatile uint64_t t92 = 9111LLU;

	t92 = (x485-((x486&x487)*x488));

	if (t92 != 275LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x489 = INT64_MAX;
	uint16_t x490 = UINT16_MAX;
	int64_t x491 = INT64_MIN;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x489-((x490&x491)*x492));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x494 = -17;
	uint16_t x495 = 7U;
	static uint64_t x496 = UINT64_MAX;
	volatile uint64_t t94 = 177945561616LLU;

	t94 = (x493-((x494&x495)*x496));

	if (t94 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x497 = -45333;
	int16_t x498 = INT16_MIN;
	uint64_t x499 = 5012073LLU;
	static int8_t x500 = 24;
	uint64_t t95 = 4066085049291877LLU;

	t95 = (x497-((x498&x499)*x500));

	if (t95 != 18446744073589968619LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x503 = INT16_MIN;
	volatile uint64_t x504 = 53204608218169LLU;
	static volatile uint64_t t96 = 40293510LLU;

	t96 = (x501-((x502&x503)*x504));

	if (t96 != 9223372036854775777LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x505 = 8582U;
	volatile int16_t x506 = 2;
	static int32_t x508 = -1;
	volatile int32_t t97 = -10319;

	t97 = (x505-((x506&x507)*x508));

	if (t97 != 8584) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x509 = -1;
	static volatile int8_t x510 = -1;
	static uint64_t x511 = 14260614LLU;
	static uint16_t x512 = UINT16_MAX;
	uint64_t t98 = 77950500LLU;

	t98 = (x509-((x510&x511)*x512));

	if (t98 != 18446743139140213125LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x514 = 71513764367LLU;
	int16_t x515 = INT16_MAX;
	uint64_t t99 = 63299349LLU;

	t99 = (x513-((x514&x515)*x516));

	if (t99 != 18446744073546504655LLU) { NG(); } else { ; }
	
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

