#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
uint64_t x11 = 58751309746LLU;
uint32_t x34 = UINT32_MAX;
int8_t x42 = -1;
uint64_t x44 = UINT64_MAX;
static int64_t x46 = -1LL;
volatile int64_t t5 = -15677LL;
static uint32_t x52 = UINT32_MAX;
volatile int64_t t6 = -964LL;
int8_t x86 = INT8_MAX;
static int16_t x88 = INT16_MIN;
int32_t x89 = -965;
uint32_t x90 = 71846121U;
volatile uint64_t t14 = 1082946025171181188LLU;
volatile uint32_t x121 = UINT32_MAX;
uint32_t x123 = 13773897U;
int16_t x124 = INT16_MAX;
static volatile int64_t x130 = INT64_MIN;
volatile uint64_t t19 = 346772133826LLU;
int8_t x154 = 1;
int16_t x155 = 16139;
int32_t x164 = INT32_MAX;
int8_t x194 = -10;
volatile int32_t x197 = -121;
static int16_t x198 = -3080;
static uint64_t t28 = 568932LLU;
volatile uint32_t t31 = 3405U;
static int64_t x239 = -32027534LL;
volatile int32_t x242 = INT32_MAX;
int8_t x247 = -1;
int8_t x250 = 3;
int16_t x262 = INT16_MIN;
int32_t t39 = 125;
int64_t t40 = 131LL;
static uint16_t x273 = UINT16_MAX;
uint64_t x274 = 61LLU;
int16_t x278 = INT16_MAX;
volatile int8_t x280 = 43;
int32_t t42 = -311338;
int8_t x293 = INT8_MIN;
int8_t x295 = -1;
static int8_t x296 = -9;
uint64_t x299 = 28917576877LLU;
int32_t t46 = -66106828;
int16_t x324 = INT16_MAX;
int16_t x326 = -1;
int16_t x335 = INT16_MIN;
uint32_t t50 = 200U;
int64_t x366 = 144LL;
uint64_t x367 = 40979257851912LLU;
static uint64_t t51 = 98378925LLU;
volatile uint64_t t52 = 899939097985LLU;
int32_t x376 = -204;
uint8_t x378 = 13U;
uint8_t x393 = 94U;
int8_t x406 = -1;
uint16_t x407 = UINT16_MAX;
uint64_t x408 = 22622628605612LLU;
int8_t x411 = -1;
uint32_t x437 = 221U;
volatile int32_t x455 = INT32_MIN;
volatile int8_t x467 = INT8_MIN;
int64_t t66 = -495330733LL;
static volatile uint32_t t69 = 62825U;
uint64_t x498 = 13044962140749746LLU;
uint16_t x500 = UINT16_MAX;
uint32_t x526 = 62U;
int16_t x527 = INT16_MIN;
int8_t x533 = INT8_MIN;
int8_t x549 = INT8_MIN;
static volatile int8_t x560 = INT8_MIN;
volatile int64_t x568 = -64703LL;
volatile uint64_t t83 = 7333944509LLU;
volatile int64_t t84 = -1037LL;
static int8_t x589 = INT8_MIN;
volatile uint8_t x591 = 7U;
volatile int32_t t86 = -158300908;
int16_t x607 = INT16_MAX;
uint16_t x608 = 476U;
uint8_t x613 = 1U;
int32_t x618 = -1;
volatile int32_t x620 = INT32_MIN;
uint64_t x621 = 69630972068LLU;
uint32_t x622 = UINT32_MAX;
volatile uint64_t t91 = 1557115510398334LLU;
static int8_t x630 = 1;
volatile int32_t t92 = 20945474;
int8_t x659 = 53;
int32_t t95 = -13296468;
int8_t x665 = INT8_MIN;
static uint32_t x667 = UINT32_MAX;
int16_t x670 = 84;
static int64_t x671 = INT64_MAX;
int16_t x673 = INT16_MIN;


void f0(void) {
	int64_t x5 = -1LL;
	int16_t x6 = INT16_MIN;
	int16_t x8 = -1276;
	static volatile int64_t t0 = -8906374368609739LL;

	t0 = ((x5-x6)/(x7%x8));

	if (t0 != -32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = 3355LLU;
	int8_t x10 = -1;
	volatile int64_t x12 = INT64_MIN;
	uint64_t t1 = 49243448LLU;

	t1 = ((x9-x10)/(x11%x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = -1;
	int64_t x26 = INT64_MIN;
	static int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MAX;
	volatile int64_t t2 = INT64_MAX;

	t2 = ((x25-x26)/(x27%x28));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = -1;
	static int64_t x35 = -1LL;
	static uint16_t x36 = 12U;
	int64_t t3 = 2012590999480559LL;

	t3 = ((x33-x34)/(x35%x36));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x41 = 4353816;
	int16_t x43 = INT16_MIN;
	static uint64_t t4 = 11692LLU;

	t4 = ((x41-x42)/(x43%x44));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x45 = 134546486567LL;
	int8_t x47 = INT8_MAX;
	volatile int32_t x48 = 15646;

	t5 = ((x45-x46)/(x47%x48));

	if (t5 != 1059421154LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x49 = 10U;
	int64_t x50 = -1LL;
	uint16_t x51 = 1553U;

	t6 = ((x49-x50)/(x51%x52));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = 123186U;
	volatile uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 4243086085LLU;
	int16_t x60 = -1;
	static uint64_t t7 = 6119478375247LLU;

	t7 = ((x57-x58)/(x59%x60));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = 12806U;
	static int32_t t8 = -10595564;

	t8 = ((x65-x66)/(x67%x68));

	if (t8 != 300095) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x85 = 11019843780LL;
	volatile int8_t x87 = 17;
	volatile int64_t t9 = -506LL;

	t9 = ((x85-x86)/(x87%x88));

	if (t9 != 648226097LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x91 = 43U;
	int64_t x92 = INT64_MIN;
	int64_t t10 = 56241623LL;

	t10 = ((x89-x90)/(x91%x92));

	if (t10 != 98212097LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x101 = 2;
	int16_t x102 = -3676;
	int32_t x103 = INT32_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t11 = 33;

	t11 = ((x101-x102)/(x103%x104));

	if (t11 != -28) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int16_t x106 = INT16_MAX;
	int16_t x107 = -43;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t12 = -1;

	t12 = ((x105-x106)/(x107%x108));

	if (t12 != 756) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x109 = -1LL;
	volatile int16_t x110 = 0;
	int8_t x111 = -1;
	volatile uint64_t x112 = 18630768737LLU;
	volatile uint64_t t13 = 1005487334901475LLU;

	t13 = ((x109-x110)/(x111%x112));

	if (t13 != 1905946856LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = -1;
	static int64_t x118 = -1LL;
	int64_t x119 = 322322185375LL;
	volatile uint64_t x120 = 17153662LLU;

	t14 = ((x117-x118)/(x119%x120));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x122 = INT8_MIN;
	uint32_t t15 = 78859585U;

	t15 = ((x121-x122)/(x123%x124));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x125 = -1;
	int64_t x126 = INT64_MIN;
	static int64_t x127 = -2118314773LL;
	uint32_t x128 = 13788U;
	int64_t t16 = -57883176336837LL;

	t16 = ((x125-x126)/(x127%x128));

	if (t16 != -1004615187545449LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x131 = UINT32_MAX;
	volatile uint64_t x132 = 115971529184LLU;
	volatile uint64_t t17 = 771LLU;

	t17 = ((x129-x130)/(x131%x132));

	if (t17 != 2147483648LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x141 = -1LL;
	int32_t x142 = -1;
	int16_t x143 = -1;
	static int16_t x144 = -1647;
	int64_t t18 = -5468209LL;

	t18 = ((x141-x142)/(x143%x144));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x145 = 2U;
	uint32_t x146 = 152U;
	uint8_t x147 = 4U;
	uint64_t x148 = UINT64_MAX;

	t19 = ((x145-x146)/(x147%x148));

	if (t19 != 1073741786LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x149 = 538840266141745825LLU;
	int64_t x150 = 748465473LL;
	uint16_t x151 = 24U;
	static int32_t x152 = INT32_MIN;
	volatile uint64_t t20 = 1LLU;

	t20 = ((x149-x150)/(x151%x152));

	if (t20 != 22451677724720014LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x153 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t21 = -284LL;

	t21 = ((x153-x154)/(x155%x156));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x161 = INT8_MIN;
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;
	int32_t t22 = -255;

	t22 = ((x161-x162)/(x163%x164));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x165 = -1;
	volatile int8_t x166 = INT8_MIN;
	uint64_t x167 = 1253677914027340LLU;
	int8_t x168 = 6;
	static volatile uint64_t t23 = 17387712124547075LLU;

	t23 = ((x165-x166)/(x167%x168));

	if (t23 != 31LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x173 = -14;
	int8_t x174 = INT8_MAX;
	int32_t x175 = -107;
	uint32_t x176 = UINT32_MAX;
	uint32_t t24 = 12U;

	t24 = ((x173-x174)/(x175%x176));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x181 = 14LL;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = INT16_MIN;
	volatile int64_t t25 = -32796839LL;

	t25 = ((x181-x182)/(x183%x184));

	if (t25 != -256LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x193 = INT64_MIN;
	uint64_t x195 = 19573LLU;
	volatile uint64_t x196 = UINT64_MAX;
	uint64_t t26 = 6804LLU;

	t26 = ((x193-x194)/(x195%x196));

	if (t26 != 471229348431756LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x199 = -1;
	int32_t x200 = INT32_MAX;
	volatile int32_t t27 = 17;

	t27 = ((x197-x198)/(x199%x200));

	if (t27 != -2959) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x205 = 2663880LLU;
	int16_t x206 = INT16_MIN;
	int8_t x207 = -1;
	int32_t x208 = INT32_MAX;

	t28 = ((x205-x206)/(x207%x208));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x213 = 55;
	int64_t x214 = -1LL;
	volatile uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t29 = -104867943420LL;

	t29 = ((x213-x214)/(x215%x216));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x217 = INT32_MIN;
	volatile int32_t x218 = -7;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MAX;
	volatile int32_t t30 = 7319;

	t30 = ((x217-x218)/(x219%x220));

	if (t30 != 1073741820) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x221 = 52106U;
	uint16_t x222 = 1305U;
	static int8_t x223 = -1;
	uint16_t x224 = UINT16_MAX;

	t31 = ((x221-x222)/(x223%x224));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x225 = 0U;
	int64_t x226 = -1LL;
	int8_t x227 = -1;
	static volatile int32_t x228 = INT32_MAX;
	static volatile int64_t t32 = 12547198518765LL;

	t32 = ((x225-x226)/(x227%x228));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x237 = INT32_MAX;
	static volatile int64_t x238 = INT64_MAX;
	uint8_t x240 = UINT8_MAX;
	int64_t t33 = 2401770659504392631LL;

	t33 = ((x237-x238)/(x239%x240));

	if (t33 != 209622091697893003LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x241 = 6219U;
	static uint64_t x243 = 108573670LLU;
	int32_t x244 = INT32_MIN;
	volatile uint64_t t34 = 975108LLU;

	t34 = ((x241-x242)/(x243%x244));

	if (t34 != 169900714156LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x245 = 78U;
	int8_t x246 = INT8_MAX;
	int16_t x248 = INT16_MAX;
	volatile int32_t t35 = 394397;

	t35 = ((x245-x246)/(x247%x248));

	if (t35 != 49) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x249 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	uint64_t x252 = 18LLU;
	uint64_t t36 = 33416LLU;

	t36 = ((x249-x250)/(x251%x252));

	if (t36 != 2305843009213693935LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x253 = -20;
	int16_t x254 = -14;
	uint8_t x255 = 93U;
	volatile uint8_t x256 = 14U;
	int32_t t37 = 9669;

	t37 = ((x253-x254)/(x255%x256));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x257 = INT32_MAX;
	uint32_t x258 = 14U;
	volatile int32_t x259 = -1582;
	int32_t x260 = INT32_MIN;
	uint32_t t38 = 37U;

	t38 = ((x257-x258)/(x259%x260));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x261 = INT32_MIN;
	int16_t x263 = 460;
	uint8_t x264 = UINT8_MAX;

	t39 = ((x261-x262)/(x263%x264));

	if (t39 != -10475370) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x265 = 0U;
	uint8_t x266 = 57U;
	int8_t x267 = -1;
	int64_t x268 = INT64_MIN;

	t40 = ((x265-x266)/(x267%x268));

	if (t40 != -4294967239LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x275 = 48070LLU;
	uint32_t x276 = 722U;
	uint64_t t41 = 13537451612LLU;

	t41 = ((x273-x274)/(x275%x276));

	if (t41 != 156LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x277 = 0;
	uint8_t x279 = UINT8_MAX;

	t42 = ((x277-x278)/(x279%x280));

	if (t42 != -819) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x294 = 22156489485LLU;
	volatile uint64_t t43 = 207672303066LLU;

	t43 = ((x293-x294)/(x295%x296));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x297 = 1U;
	int32_t x298 = INT32_MIN;
	volatile int16_t x300 = -826;
	static volatile uint64_t t44 = 116169415208337257LLU;

	t44 = ((x297-x298)/(x299%x300));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x301 = 677778253LL;
	int32_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	static uint8_t x304 = 32U;
	volatile int64_t t45 = 122041419753978LL;

	t45 = ((x301-x302)/(x303%x304));

	if (t45 != 21863814LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x305 = INT8_MAX;
	static int8_t x306 = 0;
	int16_t x307 = INT16_MIN;
	int32_t x308 = 42527;

	t46 = ((x305-x306)/(x307%x308));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x309 = 1183U;
	volatile int64_t x310 = -1LL;
	int64_t x311 = -701LL;
	uint32_t x312 = UINT32_MAX;
	volatile int64_t t47 = -5149706897951427LL;

	t47 = ((x309-x310)/(x311%x312));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x321 = INT32_MIN;
	volatile uint32_t x322 = 19272U;
	uint16_t x323 = UINT16_MAX;
	volatile uint32_t t48 = 0U;

	t48 = ((x321-x322)/(x323%x324));

	if (t48 != 2147464376U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int64_t x327 = -1LL;
	int64_t x328 = 25267184LL;
	volatile int64_t t49 = 13919063LL;

	t49 = ((x325-x326)/(x327%x328));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x333 = 3;
	static uint32_t x334 = UINT32_MAX;
	int8_t x336 = -50;

	t50 = ((x333-x334)/(x335%x336));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x365 = -1;
	int32_t x368 = 75827230;

	t51 = ((x365-x366)/(x367%x368));

	if (t51 != 776043595757LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x369 = UINT64_MAX;
	static uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 6U;
	static volatile uint64_t x372 = UINT64_MAX;

	t52 = ((x369-x370)/(x371%x372));

	if (t52 != 3074457345618258560LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x373 = INT16_MAX;
	int8_t x374 = -1;
	volatile int32_t x375 = -951717;
	int32_t t53 = 10;

	t53 = ((x373-x374)/(x375%x376));

	if (t53 != -574) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x377 = 26;
	volatile int64_t x379 = -1LL;
	static uint64_t x380 = 1541511077567LLU;
	volatile uint64_t t54 = 184301781599880LLU;

	t54 = ((x377-x378)/(x379%x380));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x381 = 1934675LL;
	volatile int8_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	static int16_t x384 = INT16_MIN;
	int64_t t55 = -3871615714LL;

	t55 = ((x381-x382)/(x383%x384));

	if (t55 != 59LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = 1242U;
	volatile uint16_t x391 = 9U;
	int32_t x392 = INT32_MAX;
	static volatile uint32_t t56 = 527433U;

	t56 = ((x389-x390)/(x391%x392));

	if (t56 != 7143U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x394 = -1LL;
	static uint32_t x395 = 147960310U;
	int8_t x396 = 11;
	volatile int64_t t57 = -679896174969386LL;

	t57 = ((x393-x394)/(x395%x396));

	if (t57 != 31LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x405 = 1662U;
	volatile uint64_t t58 = 536522LLU;

	t58 = ((x405-x406)/(x407%x408));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = -50;
	static volatile uint16_t x412 = 9U;
	int32_t t59 = -357378142;

	t59 = ((x409-x410)/(x411%x412));

	if (t59 != -305) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	int8_t x419 = -1;
	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t60 = -681902;

	t60 = ((x417-x418)/(x419%x420));

	if (t60 != -2147450880) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	uint16_t x435 = UINT16_MAX;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t61 = -5;

	t61 = ((x433-x434)/(x435%x436));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x438 = INT8_MIN;
	uint32_t x439 = UINT32_MAX;
	int16_t x440 = INT16_MIN;
	uint32_t t62 = 9790U;

	t62 = ((x437-x438)/(x439%x440));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x445 = INT8_MIN;
	uint32_t x446 = UINT32_MAX;
	int8_t x447 = 61;
	volatile int64_t x448 = INT64_MIN;
	int64_t t63 = 424LL;

	t63 = ((x445-x446)/(x447%x448));

	if (t63 != 70409297LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x453 = 1769LLU;
	int32_t x454 = -963459;
	uint32_t x456 = 28392949U;
	volatile uint64_t t64 = 3LLU;

	t64 = ((x453-x454)/(x455%x456));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x465 = INT32_MIN;
	int16_t x466 = INT16_MIN;
	static int64_t x468 = INT64_MIN;
	int64_t t65 = 1LL;

	t65 = ((x465-x466)/(x467%x468));

	if (t65 != 16776960LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x481 = -4307;
	int32_t x482 = INT32_MIN;
	volatile int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MIN;

	t66 = ((x481-x482)/(x483%x484));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x485 = INT16_MIN;
	uint64_t x486 = 2123208848LLU;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = 654257704LLU;
	static volatile uint64_t t67 = 221445674LLU;

	t67 = ((x485-x486)/(x487%x488));

	if (t67 != 32315718441LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x489 = INT16_MIN;
	uint8_t x490 = 124U;
	int8_t x491 = INT8_MIN;
	static int32_t x492 = INT32_MIN;
	static int32_t t68 = -3;

	t68 = ((x489-x490)/(x491%x492));

	if (t68 != 256) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x493 = 56U;
	int32_t x494 = 59;
	static uint16_t x495 = UINT16_MAX;
	static uint8_t x496 = 73U;

	t69 = ((x493-x494)/(x495%x496));

	if (t69 != 79536431U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x497 = 225218500LL;
	uint32_t x499 = 22269534U;
	volatile uint64_t t70 = 6310783952513LLU;

	t70 = ((x497-x498)/(x499%x500));

	if (t70 != 346700128115894LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x501 = 15U;
	uint32_t x502 = 7U;
	static int32_t x503 = INT32_MIN;
	volatile int64_t x504 = 10LL;
	volatile int64_t t71 = 1LL;

	t71 = ((x501-x502)/(x503%x504));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x505 = -5;
	int32_t x506 = INT32_MIN;
	uint64_t x507 = UINT64_MAX;
	volatile int64_t x508 = INT64_MAX;
	static uint64_t t72 = 31668LLU;

	t72 = ((x505-x506)/(x507%x508));

	if (t72 != 2147483643LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x513 = UINT16_MAX;
	volatile int16_t x514 = INT16_MIN;
	uint32_t x515 = 2816U;
	uint16_t x516 = 3U;
	static volatile uint32_t t73 = 76718U;

	t73 = ((x513-x514)/(x515%x516));

	if (t73 != 49151U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x517 = INT8_MIN;
	uint64_t x518 = 162608241445LLU;
	int16_t x519 = 2319;
	int64_t x520 = INT64_MAX;
	volatile uint64_t t74 = 902385872408LLU;

	t74 = ((x517-x518)/(x519%x520));

	if (t74 != 7954611432126481LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x525 = -409806139;
	static uint64_t x528 = 163699320579149LLU;
	volatile uint64_t t75 = 203919LLU;

	t75 = ((x525-x526)/(x527%x528));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x534 = -154;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = INT8_MIN;
	uint32_t t76 = 2835U;

	t76 = ((x533-x534)/(x535%x536));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MIN;
	uint64_t x539 = 278475190055182542LLU;
	int32_t x540 = -1;
	volatile uint64_t t77 = 46069104664875LLU;

	t77 = ((x537-x538)/(x539%x540));

	if (t77 != 66LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x541 = 1;
	int8_t x542 = INT8_MIN;
	static int32_t x543 = INT32_MIN;
	uint8_t x544 = 25U;
	int32_t t78 = 120135;

	t78 = ((x541-x542)/(x543%x544));

	if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x550 = 6218;
	uint8_t x551 = 9U;
	int32_t x552 = INT32_MIN;
	int32_t t79 = 1;

	t79 = ((x549-x550)/(x551%x552));

	if (t79 != -705) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x557 = INT8_MAX;
	static volatile int8_t x558 = INT8_MIN;
	volatile uint32_t x559 = 176907U;
	volatile uint32_t t80 = 173U;

	t80 = ((x557-x558)/(x559%x560));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x561 = INT16_MIN;
	int16_t x562 = -1;
	int8_t x563 = INT8_MAX;
	uint16_t x564 = 438U;
	volatile int32_t t81 = 1948;

	t81 = ((x561-x562)/(x563%x564));

	if (t81 != -258) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x565 = -1;
	int64_t x566 = -30LL;
	uint16_t x567 = UINT16_MAX;
	volatile int64_t t82 = 3180824670421098LL;

	t82 = ((x565-x566)/(x567%x568));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x577 = 740499397006949163LL;
	static uint64_t x578 = 335350482823LLU;
	int64_t x579 = -1LL;
	int8_t x580 = -29;

	t83 = ((x577-x578)/(x579%x580));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x585 = -291010805988LL;
	int16_t x586 = INT16_MAX;
	volatile uint32_t x587 = 318U;
	int32_t x588 = INT32_MIN;

	t84 = ((x585-x586)/(x587%x588));

	if (t84 != -915128423LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x590 = 32048LLU;
	uint8_t x592 = 6U;
	volatile uint64_t t85 = 87350887039898LLU;

	t85 = ((x589-x590)/(x591%x592));

	if (t85 != 18446744073709519440LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x593 = 29U;
	int16_t x594 = INT16_MAX;
	int16_t x595 = INT16_MIN;
	uint16_t x596 = UINT16_MAX;

	t86 = ((x593-x594)/(x595%x596));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x601 = 0;
	volatile int8_t x602 = -7;
	int8_t x603 = -1;
	int64_t x604 = 198LL;
	volatile int64_t t87 = -109151699LL;

	t87 = ((x601-x602)/(x603%x604));

	if (t87 != -7LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x605 = INT32_MIN;
	int8_t x606 = INT8_MIN;
	static volatile int32_t t88 = -2;

	t88 = ((x605-x606)/(x607%x608));

	if (t88 != -5382164) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x614 = UINT16_MAX;
	int64_t x615 = -6122257183313424LL;
	int16_t x616 = INT16_MIN;
	volatile int64_t t89 = -1208LL;

	t89 = ((x613-x614)/(x615%x616));

	if (t89 != 18LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x617 = -58;
	int8_t x619 = 1;
	volatile int32_t t90 = -1;

	t90 = ((x617-x618)/(x619%x620));

	if (t90 != -57) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x623 = INT64_MIN;
	uint16_t x624 = 666U;

	t91 = ((x621-x622)/(x623%x624));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x629 = 15U;
	uint16_t x631 = 31U;
	int16_t x632 = INT16_MAX;

	t92 = ((x629-x630)/(x631%x632));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x633 = -381814829;
	static volatile uint16_t x634 = UINT16_MAX;
	int32_t x635 = 622063;
	volatile uint16_t x636 = 28225U;
	static int32_t t93 = -26914872;

	t93 = ((x633-x634)/(x635%x636));

	if (t93 != -343109) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x649 = 1;
	int64_t x650 = INT64_MAX;
	volatile int16_t x651 = INT16_MAX;
	int8_t x652 = INT8_MIN;
	int64_t t94 = -2LL;

	t94 = ((x649-x650)/(x651%x652));

	if (t94 != -72624976668147840LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x657 = 1U;
	uint16_t x658 = 3U;
	int32_t x660 = INT32_MIN;

	t95 = ((x657-x658)/(x659%x660));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x661 = -1;
	int8_t x662 = -1;
	uint8_t x663 = 13U;
	int16_t x664 = -29;
	volatile int32_t t96 = -5722312;

	t96 = ((x661-x662)/(x663%x664));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x666 = 0;
	int16_t x668 = INT16_MIN;
	volatile uint32_t t97 = 1235628U;

	t97 = ((x665-x666)/(x667%x668));

	if (t97 != 131075U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x669 = INT16_MIN;
	volatile uint32_t x672 = 55947352U;
	int64_t t98 = -411797LL;

	t98 = ((x669-x670)/(x671%x672));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x674 = INT8_MIN;
	uint8_t x675 = 121U;
	int64_t x676 = 319701648LL;
	volatile int64_t t99 = 32244LL;

	t99 = ((x673-x674)/(x675%x676));

	if (t99 != -269LL) { NG(); } else { ; }
	
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

