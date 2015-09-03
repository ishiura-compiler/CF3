#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 8U;
volatile int8_t x14 = -1;
int64_t x21 = INT64_MAX;
uint64_t t6 = 39201093051886351LLU;
uint64_t x37 = UINT64_MAX;
volatile uint8_t x43 = 1U;
uint32_t x49 = UINT32_MAX;
int32_t x52 = INT32_MAX;
int32_t x53 = INT32_MIN;
static int8_t x57 = INT8_MAX;
int64_t x66 = -1LL;
static uint8_t x68 = 4U;
static int32_t x69 = -1;
int16_t x72 = -1;
volatile int32_t t14 = 0;
static volatile int8_t x78 = 6;
int16_t x85 = -1;
int32_t x86 = INT32_MAX;
static volatile int64_t t18 = 127557571565LL;
uint64_t x92 = UINT64_MAX;
uint32_t x99 = UINT32_MAX;
static int32_t x105 = -1;
int32_t x114 = -1;
volatile int16_t x121 = -1;
static volatile int16_t x126 = INT16_MAX;
static int32_t x145 = -10;
uint8_t x147 = 0U;
uint32_t t31 = 124428837U;
uint16_t x149 = 104U;
int32_t x150 = -1;
volatile uint16_t x151 = UINT16_MAX;
volatile int16_t x154 = -1;
static int8_t x161 = INT8_MIN;
static uint64_t x162 = 21LLU;
volatile int8_t x163 = INT8_MIN;
int64_t x164 = INT64_MIN;
uint32_t x170 = UINT32_MAX;
static volatile uint64_t t37 = 358LLU;
int32_t x183 = 48630901;
static volatile int8_t x184 = INT8_MIN;
int64_t x189 = -1LL;
uint8_t x193 = 7U;
volatile uint64_t x196 = 15LLU;
static int16_t x201 = -1;
int32_t t42 = -50411;
static uint16_t x211 = 1279U;
int8_t x219 = INT8_MIN;
static int16_t x221 = 4789;
int32_t x222 = -1;
uint32_t x224 = 498179U;
int64_t x228 = -6012193637674344LL;
int64_t x231 = -42775263LL;
static volatile int64_t t47 = 1LL;
volatile uint64_t x233 = 3503LLU;
int16_t x239 = -1;
int16_t x241 = -1;
volatile uint64_t t50 = 6690427762602289351LLU;
uint8_t x247 = 3U;
int32_t x249 = INT32_MAX;
static volatile uint64_t t52 = 8LLU;
int16_t x260 = INT16_MIN;
volatile uint32_t t55 = 16155069U;
int64_t t56 = -93355185LL;
static volatile uint64_t t57 = 447659762LLU;
volatile uint32_t x275 = 22902U;
volatile int64_t t59 = -1LL;
static uint16_t x287 = 7U;
int16_t x290 = 129;
static volatile uint64_t x294 = 10133984866076LLU;
int8_t x295 = 0;
uint64_t x298 = UINT64_MAX;
volatile int64_t t64 = -630742351LL;
int32_t x314 = INT32_MAX;
static int8_t x325 = -3;
static volatile int64_t x328 = -5799140259516342LL;
static int16_t x337 = -1755;
int8_t x348 = 3;
int8_t x350 = INT8_MIN;
uint16_t x352 = 11U;
uint64_t t75 = 14503918LLU;
uint32_t x364 = 6U;
int64_t x366 = 1971600538523972399LL;
int16_t x371 = INT16_MAX;
static volatile uint64_t t79 = 7393332700250LLU;
uint8_t x373 = UINT8_MAX;
uint8_t x375 = 8U;
int64_t t81 = 11LL;
uint32_t x383 = 1619179U;
int32_t x385 = INT32_MAX;
uint64_t x390 = 81931666LLU;
uint64_t x391 = 25504906363442LLU;
static volatile uint64_t x396 = UINT64_MAX;
volatile int8_t x420 = -1;
volatile int32_t x421 = -1;
uint8_t x423 = 2U;
int16_t x440 = INT16_MAX;
int16_t x445 = INT16_MAX;
int16_t x447 = INT16_MAX;
static uint32_t x449 = 22111233U;
int32_t x451 = INT32_MIN;
int32_t x457 = INT32_MIN;
volatile int16_t x460 = INT16_MAX;
int8_t x461 = INT8_MIN;
int16_t x463 = -1;


void f0(void) {
	uint32_t x5 = 3584U;
	static int16_t x6 = INT16_MIN;
	int64_t x7 = -367900338476LL;
	int32_t x8 = -162;
	volatile int64_t t0 = -3675362LL;

	t0 = (((x5-x6)^x7)+x8);

	if (t0 != -367900305358LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 3U;
	uint64_t x10 = 14LLU;
	static int16_t x12 = -1;
	static uint64_t t1 = 128434809648035LLU;

	t1 = (((x9-x10)^x11)+x12);

	if (t1 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 70541U;
	int64_t x15 = INT64_MIN;
	static int16_t x16 = -95;
	volatile int64_t t2 = -11LL;

	t2 = (((x13-x14)^x15)+x16);

	if (t2 != -9223372036854705361LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x22 = 70775U;
	int8_t x23 = -3;
	uint8_t x24 = 28U;
	volatile int64_t t3 = 132941393LL;

	t3 = (((x21-x22)^x23)+x24);

	if (t3 != -9223372036854705007LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	int8_t x26 = -1;
	int16_t x27 = -186;
	static volatile int64_t x28 = -54251095325189LL;
	uint64_t t4 = 5091LLU;

	t4 = (((x25-x26)^x27)+x28);

	if (t4 != 18446689822614226241LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 41;
	static int32_t x30 = -1;
	volatile int64_t x31 = 60666255LL;
	int64_t x32 = 0LL;
	int64_t t5 = -268601314514LL;

	t5 = (((x29-x30)^x31)+x32);

	if (t5 != 60666277LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 22;
	volatile int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = UINT16_MAX;

	t6 = (((x33-x34)^x35)+x36);

	if (t6 != 32744LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x38 = 35580809U;
	static uint16_t x39 = UINT16_MAX;
	uint16_t x40 = 27493U;
	volatile uint64_t t7 = 25531922714532360LLU;

	t7 = (((x37-x38)^x39)+x40);

	if (t7 != 18446744073674053358LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 15;
	uint8_t x42 = UINT8_MAX;
	uint64_t x44 = 170629738173839875LLU;
	static uint64_t t8 = 9647222LLU;

	t8 = (((x41-x42)^x43)+x44);

	if (t8 != 170629738173839636LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x50 = INT32_MIN;
	uint64_t x51 = 473829567LLU;
	volatile uint64_t t9 = 1336851340239193879LLU;

	t9 = (((x49-x50)^x51)+x52);

	if (t9 != 3821137727LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x54 = 682568879852688LL;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;
	volatile int64_t t10 = 1555958297200LL;

	t10 = (((x53-x54)^x55)+x56);

	if (t10 != 682571027303567LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = INT8_MIN;
	uint64_t x59 = 3900702048190LLU;
	int32_t x60 = -1;
	volatile uint64_t t11 = 2LLU;

	t11 = (((x57-x58)^x59)+x60);

	if (t11 != 3900702048064LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	volatile int8_t x62 = 10;
	volatile int16_t x63 = -1;
	static uint64_t x64 = UINT64_MAX;
	static uint64_t t12 = 6259138916103LLU;

	t12 = (((x61-x62)^x63)+x64);

	if (t12 != 9LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	static int64_t x67 = INT64_MIN;
	static int64_t t13 = -4040019211LL;

	t13 = (((x65-x66)^x67)+x68);

	if (t13 != 9223372036854743045LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = INT8_MIN;
	volatile uint8_t x71 = 0U;

	t14 = (((x69-x70)^x71)+x72);

	if (t14 != 126) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = -1;
	int8_t x75 = -19;
	static int64_t x76 = -2786582194660531LL;
	static int64_t t15 = -13743700236LL;

	t15 = (((x73-x74)^x75)+x76);

	if (t15 != -2786580047176903LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 1U;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 1885024834U;
	static volatile uint32_t t16 = 57195U;

	t16 = (((x77-x78)^x79)+x80);

	if (t16 != 1885057597U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = INT32_MIN;
	static int8_t x82 = -1;
	int32_t x83 = -3135;
	volatile uint32_t x84 = UINT32_MAX;
	uint32_t t17 = 4721U;

	t17 = (((x81-x82)^x83)+x84);

	if (t17 != 2147480511U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x87 = -1LL;
	int16_t x88 = INT16_MIN;

	t18 = (((x85-x86)^x87)+x88);

	if (t18 != 2147450879LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	int16_t x91 = -1;
	static volatile uint64_t t19 = 5428551818LLU;

	t19 = (((x89-x90)^x91)+x92);

	if (t19 != 2147483645LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 125924458LLU;
	volatile uint16_t x94 = 6205U;
	int64_t x95 = INT64_MAX;
	int64_t x96 = INT64_MIN;
	uint64_t t20 = 448279862555835477LLU;

	t20 = (((x93-x94)^x95)+x96);

	if (t20 != 18446744073583633362LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = UINT64_MAX;
	volatile uint16_t x100 = UINT16_MAX;
	uint64_t t21 = 9115742418062077LLU;

	t21 = (((x97-x98)^x99)+x100);

	if (t21 != 4295032574LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = 158395741LL;
	int16_t x108 = INT16_MIN;
	int64_t t22 = 2977973930446314LL;

	t22 = (((x105-x106)^x107)+x108);

	if (t22 != -158372515LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = 4325;
	volatile int8_t x110 = INT8_MIN;
	volatile int32_t x111 = -624828188;
	uint16_t x112 = 1U;
	int32_t t23 = -34694;

	t23 = (((x109-x110)^x111)+x112);

	if (t23 != -624823934) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = 5;
	int32_t x115 = -114;
	volatile uint8_t x116 = UINT8_MAX;
	static volatile int32_t t24 = 28511250;

	t24 = (((x113-x114)^x115)+x116);

	if (t24 != 135) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 970U;
	volatile uint32_t x118 = 13U;
	volatile int8_t x119 = -13;
	volatile int32_t x120 = INT32_MIN;
	volatile uint32_t t25 = 38794356U;

	t25 = (((x117-x118)^x119)+x120);

	if (t25 != 2147482702U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t26 = 392LL;

	t26 = (((x121-x122)^x123)+x124);

	if (t26 != 9223372036854710144LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	static volatile uint8_t x127 = UINT8_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int64_t t27 = -106546948814482834LL;

	t27 = (((x125-x126)^x127)+x128);

	if (t27 != 33022LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = 6;
	uint32_t x134 = UINT32_MAX;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = UINT16_MAX;
	static volatile int64_t t28 = -4055734943185LL;

	t28 = (((x133-x134)^x135)+x136);

	if (t28 != -9223372036854710266LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MAX;
	static int64_t x138 = -100210306345653212LL;
	static volatile int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MIN;
	int64_t t29 = 29537407269079LL;

	t29 = (((x137-x138)^x139)+x140);

	if (t29 != 9123161728361606180LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -6;
	int32_t x142 = 26;
	uint8_t x143 = 1U;
	volatile uint16_t x144 = 23U;
	int32_t t30 = -1;

	t30 = (((x141-x142)^x143)+x144);

	if (t30 != -8) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x146 = -3;
	uint32_t x148 = 51U;

	t31 = (((x145-x146)^x147)+x148);

	if (t31 != 44U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x152 = 2151U;
	int32_t t32 = 8343418;

	t32 = (((x149-x150)^x151)+x152);

	if (t32 != 67581) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -1;
	volatile int64_t x155 = -7748241816LL;
	uint32_t x156 = UINT32_MAX;
	int64_t t33 = -2715032533717896364LL;

	t33 = (((x153-x154)^x155)+x156);

	if (t33 != -3453274521LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t t34 = 3779104LLU;

	t34 = (((x161-x162)^x163)+x164);

	if (t34 != 9223372036854776043LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -7335;
	uint32_t x166 = 99U;
	volatile uint16_t x167 = 1U;
	int16_t x168 = 106;
	uint32_t t35 = 5836U;

	t35 = (((x165-x166)^x167)+x168);

	if (t35 != 4294959969U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x169 = 85U;
	volatile uint8_t x171 = 0U;
	static int32_t x172 = -1;
	volatile uint32_t t36 = 29069514U;

	t36 = (((x169-x170)^x171)+x172);

	if (t36 != 85U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = 26397250394930857LLU;
	int32_t x175 = INT32_MIN;
	uint32_t x176 = 957615825U;

	t37 = (((x173-x174)^x175)+x176);

	if (t37 != 26397253069295656LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = 43U;
	static volatile int32_t x182 = INT32_MAX;
	volatile int32_t t38 = 8595975;

	t38 = (((x181-x182)^x183)+x184);

	if (t38 != -2098852903) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x190 = 6;
	int32_t x191 = 235025;
	int32_t x192 = INT32_MAX;
	static volatile int64_t t39 = -97885LL;

	t39 = (((x189-x190)^x191)+x192);

	if (t39 != 2147248615LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x194 = -1;
	static volatile int64_t x195 = INT64_MIN;
	uint64_t t40 = 674LLU;

	t40 = (((x193-x194)^x195)+x196);

	if (t40 != 9223372036854775831LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = INT64_MAX;
	int8_t x198 = 2;
	int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MAX;
	int64_t t41 = -6156984289LL;

	t41 = (((x197-x198)^x199)+x200);

	if (t41 != 9223372034707292289LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;

	t42 = (((x201-x202)^x203)+x204);

	if (t42 != -32896) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = -6;
	int16_t x210 = INT16_MAX;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t43 = 114117;

	t43 = (((x209-x210)^x211)+x212);

	if (t43 != -33917) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = UINT16_MAX;
	static int16_t x220 = -805;
	int32_t t44 = 51250843;

	t44 = (((x217-x218)^x219)+x220);

	if (t44 != 97372) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x223 = INT8_MAX;
	uint32_t t45 = 856683U;

	t45 = (((x221-x222)^x223)+x224);

	if (t45 != 502988U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x225 = 14U;
	uint64_t x226 = 530936722LLU;
	static volatile uint32_t x227 = UINT32_MAX;
	uint64_t t46 = 996461LLU;

	t46 = (((x225-x226)^x227)+x228);

	if (t46 != 18440731876307846683LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x229 = 89U;
	int8_t x230 = -1;
	uint8_t x232 = 61U;

	t47 = (((x229-x230)^x231)+x232);

	if (t47 != -42775112LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x234 = 2688767U;
	uint16_t x235 = 108U;
	uint8_t x236 = UINT8_MAX;
	uint64_t t48 = 153752614785557LLU;

	t48 = (((x233-x234)^x235)+x236);

	if (t48 != 18446744073706866651LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x237 = 11411U;
	int16_t x238 = -12103;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t49 = 174868601U;

	t49 = (((x237-x238)^x239)+x240);

	if (t49 != 4294943780U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x242 = UINT64_MAX;
	volatile uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;

	t50 = (((x241-x242)^x243)+x244);

	if (t50 != 4294967167LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x245 = 778U;
	int64_t x246 = INT64_MAX;
	static uint32_t x248 = 325703U;
	volatile int64_t t51 = -42535670LL;

	t51 = (((x245-x246)^x247)+x248);

	if (t51 != -9223372036854449329LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x250 = 8077880226501723931LLU;
	volatile int64_t x251 = 253LL;
	uint8_t x252 = 5U;

	t52 = (((x249-x250)^x251)+x252);

	if (t52 != 10368863849355311134LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x253 = 0;
	uint64_t x254 = UINT64_MAX;
	static int64_t x255 = INT64_MIN;
	int32_t x256 = 1706091;
	uint64_t t53 = 2680679309LLU;

	t53 = (((x253-x254)^x255)+x256);

	if (t53 != 9223372036856481900LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint64_t x259 = 13398576532317661LLU;
	static volatile uint64_t t54 = 1091455376750631719LLU;

	t54 = (((x257-x258)^x259)+x260);

	if (t54 != 13398576532331042LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x261 = INT32_MIN;
	static uint32_t x262 = 27202306U;
	uint32_t x263 = 5U;
	volatile int16_t x264 = -1;

	t55 = (((x261-x262)^x263)+x264);

	if (t55 != 2120281338U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x265 = UINT16_MAX;
	uint8_t x266 = 2U;
	int64_t x267 = INT64_MAX;
	int16_t x268 = INT16_MAX;

	t56 = (((x265-x266)^x267)+x268);

	if (t56 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = 905;
	uint64_t x270 = 1820053949982593683LLU;
	int16_t x271 = 104;
	volatile int64_t x272 = INT64_MIN;

	t57 = (((x269-x270)^x271)+x272);

	if (t57 != 7403318086872182942LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = UINT32_MAX;
	uint64_t x274 = 27142372230589252LLU;
	uint8_t x276 = 0U;
	volatile uint64_t t58 = 3853252199LLU;

	t58 = (((x273-x274)^x275)+x276);

	if (t58 != 18419601705773944269LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = 3LL;
	int16_t x279 = INT16_MAX;
	static int8_t x280 = 1;

	t59 = (((x277-x278)^x279)+x280);

	if (t59 != -65533LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x285 = 1;
	int32_t x286 = -7242;
	int32_t x288 = INT32_MIN;
	volatile int32_t t60 = 70;

	t60 = (((x285-x286)^x287)+x288);

	if (t60 != -2147476404) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x289 = 6U;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t61 = -94401107;

	t61 = (((x289-x290)^x291)+x292);

	if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = INT32_MIN;
	volatile int16_t x296 = INT16_MIN;
	static volatile uint64_t t62 = 64681630886LLU;

	t62 = (((x293-x294)^x295)+x296);

	if (t62 != 18446733937577169124LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x297 = UINT16_MAX;
	uint8_t x299 = 15U;
	int64_t x300 = -1LL;
	volatile uint64_t t63 = 49663424771842LLU;

	t63 = (((x297-x298)^x299)+x300);

	if (t63 != 65550LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = INT64_MAX;
	uint8_t x302 = 79U;
	int32_t x303 = INT32_MAX;
	uint32_t x304 = 569854U;

	t64 = (((x301-x302)^x303)+x304);

	if (t64 != 9223372034707862093LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = -7;
	static int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t65 = 7;

	t65 = (((x305-x306)^x307)+x308);

	if (t65 != -121) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x309 = -11746;
	static uint32_t x310 = 1193017890U;
	static int8_t x311 = INT8_MIN;
	volatile int32_t x312 = -1;
	static volatile uint32_t t66 = 1881109U;

	t66 = (((x309-x310)^x311)+x312);

	if (t66 != 1193029755U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x313 = INT32_MAX;
	int64_t x315 = 707528652430053005LL;
	int32_t x316 = -11193;
	volatile int64_t t67 = 1095526319713LL;

	t67 = (((x313-x314)^x315)+x316);

	if (t67 != 707528652430041812LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x321 = -8LL;
	int32_t x322 = INT32_MAX;
	static int8_t x323 = -1;
	int64_t x324 = -4349618874478LL;
	static volatile int64_t t68 = 2214232675237080270LL;

	t68 = (((x321-x322)^x323)+x324);

	if (t68 != -4347471390824LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x326 = -53;
	volatile uint32_t x327 = 1U;
	volatile int64_t t69 = -419371LL;

	t69 = (((x325-x326)^x327)+x328);

	if (t69 != -5799140259516291LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = -1027696499LL;
	static volatile int32_t x330 = -1;
	volatile int32_t x331 = -1319;
	volatile int64_t x332 = INT64_MIN;
	int64_t t70 = -220196445LL;

	t70 = (((x329-x330)^x331)+x332);

	if (t70 != -9223372035827080617LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x333 = INT8_MIN;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = -399;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t71 = 80529207721470485LLU;

	t71 = (((x333-x334)^x335)+x336);

	if (t71 != 18446744073709551216LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x338 = INT8_MAX;
	volatile uint64_t x339 = 4265887LLU;
	static uint8_t x340 = UINT8_MAX;
	uint64_t t72 = 401281366LLU;

	t72 = (((x337-x338)^x339)+x340);

	if (t72 != 18446744073705287736LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = 10U;
	int64_t x343 = INT64_MAX;
	static uint8_t x344 = 1U;
	int64_t t73 = -16490280023423177LL;

	t73 = (((x341-x342)^x343)+x344);

	if (t73 != 9223372034707292170LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = INT16_MAX;
	static int32_t x346 = -1;
	int16_t x347 = -1;
	volatile int32_t t74 = 242;

	t74 = (((x345-x346)^x347)+x348);

	if (t74 != -32766) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x349 = 1796020058U;
	uint64_t x351 = UINT64_MAX;

	t75 = (((x349-x350)^x351)+x352);

	if (t75 != 18446744071913531440LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x353 = 0;
	static volatile uint16_t x354 = 0U;
	static volatile int64_t x355 = INT64_MIN;
	int8_t x356 = 38;
	volatile int64_t t76 = 38054987730LL;

	t76 = (((x353-x354)^x355)+x356);

	if (t76 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x361 = 13273450U;
	volatile uint16_t x362 = UINT16_MAX;
	static uint8_t x363 = UINT8_MAX;
	static uint32_t t77 = 70U;

	t77 = (((x361-x362)^x363)+x364);

	if (t77 != 13207962U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = -1LL;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -1304;
	volatile int64_t t78 = 1607128935557LL;

	t78 = (((x365-x366)^x367)+x368);

	if (t78 != 7251771498330802104LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = 58U;
	static volatile uint64_t x370 = UINT64_MAX;
	int8_t x372 = INT8_MIN;

	t79 = (((x369-x370)^x371)+x372);

	if (t79 != 32580LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x374 = 4728873846402LLU;
	int64_t x376 = INT64_MIN;
	uint64_t t80 = 2LLU;

	t80 = (((x373-x374)^x375)+x376);

	if (t80 != 9223367307980929653LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	static int64_t x379 = -1237541LL;
	volatile int64_t x380 = 63080819933LL;

	t81 = (((x377-x378)^x379)+x380);

	if (t81 != 63082039864LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = -53;
	int8_t x382 = INT8_MIN;
	int16_t x384 = 12868;
	uint32_t t82 = 3U;

	t82 = (((x381-x382)^x383)+x384);

	if (t82 != 1631972U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x386 = 110U;
	static int32_t x387 = 33864;
	static int64_t x388 = -1LL;
	int64_t t83 = 73233915581953382LL;

	t83 = (((x385-x386)^x387)+x388);

	if (t83 != 2147449816LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x389 = 15U;
	uint8_t x392 = UINT8_MAX;
	uint64_t t84 = 10645LLU;

	t84 = (((x389-x390)^x391)+x392);

	if (t84 != 18446718568750879054LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x393 = 19U;
	uint32_t x394 = 29015985U;
	int64_t x395 = -74391LL;
	uint64_t t85 = 53836057LLU;

	t85 = (((x393-x394)^x395)+x396);

	if (t85 != 18446744069443656970LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x397 = 12993U;
	uint64_t x398 = 1590517362LLU;
	int32_t x399 = -9;
	int8_t x400 = INT8_MIN;
	static uint64_t t86 = 2595LLU;

	t86 = (((x397-x398)^x399)+x400);

	if (t86 != 1590504248LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = -1232506596152LL;
	int8_t x406 = INT8_MAX;
	static int32_t x407 = -1;
	int32_t x408 = INT32_MAX;
	volatile int64_t t87 = -136LL;

	t87 = (((x405-x406)^x407)+x408);

	if (t87 != 1234654079925LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x413 = 304LLU;
	int32_t x414 = INT32_MIN;
	int64_t x415 = INT64_MAX;
	static uint32_t x416 = 3202U;
	static volatile uint64_t t88 = 27407195634111LLU;

	t88 = (((x413-x414)^x415)+x416);

	if (t88 != 9223372034707295057LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = -6939896469931LL;
	int8_t x418 = INT8_MIN;
	uint64_t x419 = UINT64_MAX;
	uint64_t t89 = 115583424LLU;

	t89 = (((x417-x418)^x419)+x420);

	if (t89 != 6939896469801LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x422 = 4369U;
	int16_t x424 = -1;
	volatile int32_t t90 = 788020591;

	t90 = (((x421-x422)^x423)+x424);

	if (t90 != -4373) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x426 = 171637125352LLU;
	int32_t x427 = INT32_MIN;
	static volatile int8_t x428 = 10;
	uint64_t t91 = 37LLU;

	t91 = (((x425-x426)^x427)+x428);

	if (t91 != 165517807393LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = 56;
	int16_t x435 = 0;
	uint32_t x436 = 1284270601U;
	volatile uint32_t t92 = 413U;

	t92 = (((x433-x434)^x435)+x436);

	if (t92 != 1284270417U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x437 = 108U;
	uint64_t x438 = UINT64_MAX;
	int64_t x439 = INT64_MIN;
	uint64_t t93 = 286780892761878674LLU;

	t93 = (((x437-x438)^x439)+x440);

	if (t93 != 9223372036854808684LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = INT64_MIN;
	int32_t x442 = INT32_MIN;
	static int32_t x443 = INT32_MIN;
	int32_t x444 = 506;
	volatile int64_t t94 = 8632796LL;

	t94 = (((x441-x442)^x443)+x444);

	if (t94 != 9223372032559809018LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x446 = -1LL;
	uint32_t x448 = 1476838U;
	static volatile int64_t t95 = -6702645614851LL;

	t95 = (((x445-x446)^x447)+x448);

	if (t95 != 1542373LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x450 = 511U;
	uint8_t x452 = UINT8_MAX;
	uint32_t t96 = 4U;

	t96 = (((x449-x450)^x451)+x452);

	if (t96 != 2169594625U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = 33500LL;
	uint16_t x454 = 21376U;
	volatile int32_t x455 = INT32_MIN;
	static int32_t x456 = -1;
	int64_t t97 = -85LL;

	t97 = (((x453-x454)^x455)+x456);

	if (t97 != -2147471525LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x458 = INT16_MIN;
	static volatile int32_t x459 = INT32_MAX;
	int32_t t98 = -60659;

	t98 = (((x457-x458)^x459)+x460);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x462 = 8U;
	int8_t x464 = 14;
	static volatile int32_t t99 = -21;

	t99 = (((x461-x462)^x463)+x464);

	if (t99 != 149) { NG(); } else { ; }
	
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

