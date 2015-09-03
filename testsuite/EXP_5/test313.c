#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x15 = 444241365565LLU;
int16_t x16 = INT16_MIN;
int16_t x19 = INT16_MIN;
int8_t x24 = -59;
volatile int32_t t4 = -2916;
volatile int8_t x31 = -1;
int8_t x32 = INT8_MIN;
int16_t x41 = INT16_MAX;
static int64_t t8 = -924321396530LL;
volatile int64_t x53 = 1694821923992732538LL;
volatile uint64_t x56 = UINT64_MAX;
int32_t x64 = -1;
int16_t x72 = -1;
volatile int64_t t15 = 450290328668390LL;
static int64_t x85 = -1LL;
static volatile uint16_t x87 = UINT16_MAX;
static uint64_t x89 = 408764059143631LLU;
static volatile uint64_t t18 = 23754LLU;
int16_t x97 = -3;
uint32_t x98 = 37338888U;
int32_t x102 = 6496;
int8_t x105 = 1;
static int8_t x106 = INT8_MIN;
int32_t x107 = -1;
int8_t x114 = INT8_MAX;
static volatile uint64_t t24 = 7676446418781LLU;
int8_t x121 = -1;
static int64_t x122 = -1LL;
uint8_t x130 = 0U;
int16_t x143 = 1072;
int64_t x149 = 331LL;
int8_t x152 = -8;
volatile uint16_t x155 = UINT16_MAX;
int8_t x166 = INT8_MAX;
uint8_t x167 = 2U;
int32_t x168 = INT32_MIN;
int8_t x170 = 0;
int64_t x173 = -1LL;
uint16_t x181 = UINT16_MAX;
static volatile int8_t x183 = -1;
uint16_t x185 = 184U;
int16_t x187 = 8;
uint32_t x206 = UINT32_MAX;
volatile int64_t t42 = 371491372353211LL;
volatile int32_t x209 = INT32_MIN;
uint8_t x216 = 56U;
uint64_t t44 = 2LLU;
int64_t x231 = 16060872108415LL;
static uint64_t t47 = 10087985244383LLU;
uint64_t x237 = 2495185959635103383LLU;
uint16_t x239 = UINT16_MAX;
static int32_t x245 = -11;
int8_t x246 = -1;
volatile uint32_t x253 = 949U;
int32_t x257 = INT32_MAX;
uint16_t x258 = 176U;
uint32_t x259 = UINT32_MAX;
static volatile uint8_t x269 = 1U;
volatile uint16_t x270 = 9U;
volatile uint8_t x278 = 4U;
static volatile uint64_t t53 = 274569066201721920LLU;
int64_t t54 = -2LL;
uint16_t x303 = UINT16_MAX;
int64_t x318 = -15671093963997LL;
int16_t x322 = INT16_MIN;
volatile int64_t x326 = 114170812919LL;
int32_t x331 = INT32_MIN;
uint32_t x333 = 1516U;
int8_t x335 = INT8_MIN;
uint32_t t62 = 579507U;
int64_t x351 = -1LL;
int16_t x367 = INT16_MIN;
static volatile int8_t x370 = INT8_MIN;
int8_t x377 = INT8_MIN;
int64_t x384 = -1LL;
static volatile int64_t t72 = -3023LL;
int64_t t73 = 716074290874LL;
uint64_t x397 = UINT64_MAX;
int8_t x398 = INT8_MAX;
uint32_t x400 = 485U;
int32_t x402 = -2600684;
int64_t t77 = 260498293LL;
uint8_t x415 = 11U;
volatile uint64_t t79 = 98LLU;
static volatile int32_t t80 = -35115684;
uint32_t x436 = UINT32_MAX;
int64_t x440 = INT64_MIN;
volatile int64_t t82 = 10963LL;
int16_t x442 = INT16_MIN;
int32_t t83 = -363578455;
volatile int32_t x445 = -51;
uint8_t x447 = 82U;
int8_t x451 = INT8_MAX;
int8_t x452 = INT8_MAX;
int16_t x453 = -1;
int16_t x456 = INT16_MIN;
uint8_t x461 = 8U;
volatile uint64_t t88 = 57971648LLU;
static int8_t x472 = INT8_MIN;
static int8_t x478 = INT8_MIN;
uint16_t x484 = UINT16_MAX;
static int64_t x493 = 1797140172682363LL;
int16_t x496 = -1;
int32_t x497 = -118803;
static int32_t x500 = -813552200;
int32_t x516 = -1;
volatile int32_t t98 = -166;
int8_t x524 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static volatile int32_t x2 = -950232101;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = 8281492LLU;
	volatile uint64_t t0 = 209LLU;

	t0 = (x1+((x2-x3)|x4));

	if (t0 != 18446744072761597791LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -19952863;
	static uint64_t x6 = 6913538755320791LLU;
	uint64_t x7 = UINT64_MAX;
	volatile int16_t x8 = INT16_MIN;
	uint64_t t1 = 43882LLU;

	t1 = (x5+((x6-x7)|x8));

	if (t1 != 18446744073689589497LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = -1LL;
	int16_t x14 = INT16_MAX;
	uint64_t t2 = 389985085204129LLU;

	t2 = (x13+((x14-x15)|x16));

	if (t2 != 18446744073709532609LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 60U;
	int8_t x18 = INT8_MAX;
	static int32_t x20 = -1;
	int32_t t3 = 22;

	t3 = (x17+((x18-x19)|x20));

	if (t3 != 59) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 10121U;

	t4 = (x21+((x22-x23)|x24));

	if (t4 != 32758) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = INT32_MIN;
	uint64_t x26 = 3802362185400295489LLU;
	int32_t x27 = 11;
	volatile int64_t x28 = -35804341LL;
	volatile uint64_t t5 = 137265695626LLU;

	t5 = (x25+((x26-x27)|x28));

	if (t5 != 18446744071528360831LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -18;
	static int16_t x30 = 6;
	volatile int32_t t6 = 2;

	t6 = (x29+((x30-x31)|x32));

	if (t6 != -139) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x42 = 469U;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = -1;
	int32_t t7 = 102776175;

	t7 = (x41+((x42-x43)|x44));

	if (t7 != 32766) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MIN;
	static volatile uint8_t x46 = 31U;
	volatile int64_t x47 = -1LL;
	int16_t x48 = 1150;

	t8 = (x45+((x46-x47)|x48));

	if (t8 != -2147482498LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	uint8_t x50 = 51U;
	static uint64_t x51 = 728LLU;
	volatile int8_t x52 = 0;
	static uint64_t t9 = 997926280905LLU;

	t9 = (x49+((x50-x51)|x52));

	if (t9 != 18446744073709551194LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = 540U;
	uint16_t x55 = 54U;
	uint64_t t10 = 3567846694LLU;

	t10 = (x53+((x54-x55)|x56));

	if (t10 != 1694821923992732537LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	static int8_t x63 = -1;
	static int32_t t11 = 932652;

	t11 = (x61+((x62-x63)|x64));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x65 = INT8_MIN;
	int32_t x66 = -1;
	volatile int16_t x67 = 1;
	int8_t x68 = -1;
	volatile int32_t t12 = -13;

	t12 = (x65+((x66-x67)|x68));

	if (t12 != -129) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -13;
	int64_t x70 = -1LL;
	int32_t x71 = INT32_MIN;
	volatile int64_t t13 = 46578554264452LL;

	t13 = (x69+((x70-x71)|x72));

	if (t13 != -14LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x73 = 7U;
	int64_t x74 = INT64_MIN;
	int8_t x75 = -1;
	uint16_t x76 = 996U;
	int64_t t14 = -1001025575LL;

	t14 = (x73+((x74-x75)|x76));

	if (t14 != -9223372036854774804LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	uint16_t x78 = 868U;
	int64_t x79 = 2089502264906LL;
	uint8_t x80 = UINT8_MAX;

	t15 = (x77+((x78-x79)|x80));

	if (t15 != -2089502263810LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 202359550U;
	int64_t x84 = 24392660397219LL;
	int64_t t16 = 30921673006LL;

	t16 = (x81+((x82-x83)|x84));

	if (t16 != 24395347115299LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x86 = UINT32_MAX;
	static int8_t x88 = 12;
	int64_t t17 = -9922743172LL;

	t17 = (x85+((x86-x87)|x88));

	if (t17 != 4294901771LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x90 = 50231;
	int16_t x91 = -32;
	int64_t x92 = INT64_MAX;

	t18 = (x89+((x90-x91)|x92));

	if (t18 != 9223780800913919438LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = -846927277802779016LL;
	volatile int64_t x96 = 80LL;
	int64_t t19 = 776717204638LL;

	t19 = (x93+((x94-x95)|x96));

	if (t19 != -8376444759051996840LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x99 = 28;
	int8_t x100 = -1;
	uint32_t t20 = 385U;

	t20 = (x97+((x98-x99)|x100));

	if (t20 != 4294967292U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = INT64_MAX;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	uint64_t t21 = 2728833LLU;

	t21 = (x101+((x102-x103)|x104));

	if (t21 != 9223372036854749536LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x108 = 1450801146U;
	static uint32_t t22 = 63199736U;

	t22 = (x105+((x106-x107)|x108));

	if (t22 != 4294967292U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x115 = UINT16_MAX;
	uint32_t x116 = 452558074U;
	volatile uint32_t t23 = 18364U;

	t23 = (x113+((x114-x115)|x116));

	if (t23 != 4294933881U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	static int64_t x120 = INT64_MIN;

	t24 = (x117+((x118-x119)|x120));

	if (t24 != 9223372041149710336LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x123 = 33596655161LLU;
	int16_t x124 = INT16_MIN;
	uint64_t t25 = 74LLU;

	t25 = (x121+((x122-x123)|x124));

	if (t25 != 18446744073709533637LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = -357150;
	volatile int16_t x131 = INT16_MIN;
	int16_t x132 = 11;
	int32_t t26 = 515250;

	t26 = (x129+((x130-x131)|x132));

	if (t26 != -324371) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = 127320LLU;
	uint32_t x134 = 278290559U;
	uint16_t x135 = 26U;
	static int32_t x136 = 3968;
	static uint64_t t27 = 107LLU;

	t27 = (x133+((x134-x135)|x136));

	if (t27 != 278421821LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	uint32_t x138 = 179532204U;
	volatile int32_t x139 = INT32_MAX;
	int32_t x140 = INT32_MIN;
	volatile uint32_t t28 = 12U;

	t28 = (x137+((x138-x139)|x140));

	if (t28 != 179532205U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = INT32_MIN;
	static uint16_t x142 = 136U;
	static int64_t x144 = INT64_MIN;
	volatile int64_t t29 = 1LL;

	t29 = (x141+((x142-x143)|x144));

	if (t29 != -2147484584LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = -1;
	static int16_t x146 = -1;
	static int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	static int64_t t30 = -128396393494000933LL;

	t30 = (x145+((x146-x147)|x148));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = INT8_MIN;
	int32_t x151 = -1;
	volatile int64_t t31 = 4966110576LL;

	t31 = (x149+((x150-x151)|x152));

	if (t31 != 324LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = UINT8_MAX;
	static uint16_t x154 = UINT16_MAX;
	int32_t x156 = -10;
	int32_t t32 = 2;

	t32 = (x153+((x154-x155)|x156));

	if (t32 != 245) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = 5LL;
	static uint32_t x158 = UINT32_MAX;
	volatile uint16_t x159 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t33 = 11319142LLU;

	t33 = (x157+((x158-x159)|x160));

	if (t33 != 4LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x165 = 2713;
	int32_t t34 = 33827505;

	t34 = (x165+((x166-x167)|x168));

	if (t34 != -2147480810) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	int32_t x171 = -1;
	volatile uint32_t x172 = 20074208U;
	static uint32_t t35 = 62U;

	t35 = (x169+((x170-x171)|x172));

	if (t35 != 2167557857U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x174 = -5;
	int64_t x175 = -1LL;
	volatile int16_t x176 = 31;
	volatile int64_t t36 = -6199819933213085LL;

	t36 = (x173+((x174-x175)|x176));

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 24U;
	uint16_t x178 = 5U;
	volatile uint8_t x179 = 3U;
	uint8_t x180 = 18U;
	int32_t t37 = -1979;

	t37 = (x177+((x178-x179)|x180));

	if (t37 != 42) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x182 = INT32_MIN;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t38 = 0;

	t38 = (x181+((x182-x183)|x184));

	if (t38 != 65408) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x186 = 0;
	volatile int64_t x188 = -72869309080LL;
	int64_t t39 = 574585975824087912LL;

	t39 = (x185+((x186-x187)|x188));

	if (t39 != 176LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x189 = 8U;
	int32_t x190 = INT32_MIN;
	int16_t x191 = -1;
	int32_t x192 = INT32_MIN;
	volatile uint32_t t40 = 179430200U;

	t40 = (x189+((x190-x191)|x192));

	if (t40 != 2147483657U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = UINT8_MAX;
	volatile uint32_t x194 = 88072482U;
	int8_t x195 = 0;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t41 = -401552631783023120LL;

	t41 = (x193+((x194-x195)|x196));

	if (t41 != -9223372036766703071LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x205 = -62;
	int64_t x207 = INT64_MAX;
	volatile int8_t x208 = -1;

	t42 = (x205+((x206-x207)|x208));

	if (t42 != -63LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = 7;
	int64_t x211 = -211032865LL;
	volatile int64_t x212 = 18025LL;
	volatile int64_t t43 = 14215LL;

	t43 = (x209+((x210-x211)|x212));

	if (t43 != -1936433303LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -1;
	uint64_t x214 = 14405064044758561LLU;
	int16_t x215 = 108;

	t44 = (x213+((x214-x215)|x216));

	if (t44 != 14405064044758460LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x221 = 4548826U;
	int64_t x222 = -1LL;
	uint16_t x223 = 1U;
	int64_t x224 = INT64_MAX;
	int64_t t45 = 282970LL;

	t45 = (x221+((x222-x223)|x224));

	if (t45 != 4548825LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int16_t x226 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	volatile int8_t x228 = 14;
	volatile uint64_t t46 = 17305388LLU;

	t46 = (x225+((x226-x227)|x228));

	if (t46 != 18446744073709518606LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = UINT8_MAX;
	static uint16_t x230 = 769U;
	static uint64_t x232 = 4487662736430454LLU;

	t47 = (x229+((x230-x231)|x232));

	if (t47 != 18446728568599666421LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x238 = INT8_MAX;
	static volatile int16_t x240 = INT16_MIN;
	uint64_t t48 = 1757138LLU;

	t48 = (x237+((x238-x239)|x240));

	if (t48 != 2495185959635070743LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x247 = -2;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t49 = -271;

	t49 = (x245+((x246-x247)|x248));

	if (t49 != -32778) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x254 = 45244220LLU;
	static volatile int16_t x255 = INT16_MAX;
	int8_t x256 = 5;
	static uint64_t t50 = 9LLU;

	t50 = (x253+((x254-x255)|x256));

	if (t50 != 45212402LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x260 = -3551LL;
	int64_t t51 = 150700970568LL;

	t51 = (x257+((x258-x259)|x260));

	if (t51 != 2147480240LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x271 = INT32_MAX;
	volatile int16_t x272 = -1;
	volatile int32_t t52 = -58903;

	t52 = (x269+((x270-x271)|x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x279 = 52913364626LLU;
	static int64_t x280 = -1LL;

	t53 = (x277+((x278-x279)|x280));

	if (t53 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = -9739;
	int64_t x286 = -1LL;
	int8_t x287 = INT8_MIN;
	static volatile int8_t x288 = INT8_MAX;

	t54 = (x285+((x286-x287)|x288));

	if (t54 != -9612LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x293 = UINT32_MAX;
	static uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 213U;
	uint64_t x296 = 202596424610LLU;
	static volatile uint64_t t55 = 568588242027828030LLU;

	t55 = (x293+((x294-x295)|x296));

	if (t55 != 4294967209LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int32_t x302 = -872964;
	int64_t x304 = INT64_MIN;
	static uint64_t t56 = 8733330LLU;

	t56 = (x301+((x302-x303)|x304));

	if (t56 != 18446744073708613116LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	uint32_t x316 = 1842986257U;
	static uint64_t t57 = 98915935716474581LLU;

	t57 = (x313+((x314-x315)|x316));

	if (t57 != 4294950160LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x317 = -681265711;
	volatile uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MAX;
	volatile int64_t t58 = 17503086149LL;

	t58 = (x317+((x318-x319)|x320));

	if (t58 != -15676070196912LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x321 = UINT8_MAX;
	int8_t x323 = 48;
	volatile int16_t x324 = INT16_MAX;
	int32_t t59 = -860;

	t59 = (x321+((x322-x323)|x324));

	if (t59 != -32514) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x325 = 6U;
	static volatile int64_t x327 = INT64_MAX;
	int8_t x328 = INT8_MIN;
	int64_t t60 = -40647LL;

	t60 = (x325+((x326-x327)|x328));

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int32_t x332 = INT32_MAX;
	static volatile int32_t t61 = -386633970;

	t61 = (x329+((x330-x331)|x332));

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x334 = INT16_MIN;
	int16_t x336 = -1;

	t62 = (x333+((x334-x335)|x336));

	if (t62 != 1515U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x341 = INT64_MAX;
	int64_t x342 = -138LL;
	static int16_t x343 = -1;
	volatile uint16_t x344 = 3706U;
	volatile int64_t t63 = 8147061LL;

	t63 = (x341+((x342-x343)|x344));

	if (t63 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	uint64_t x352 = 14115237752LLU;
	volatile uint64_t t64 = 492817LLU;

	t64 = (x349+((x350-x351)|x352));

	if (t64 != 120LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x353 = -1;
	uint64_t x354 = UINT64_MAX;
	volatile int64_t x355 = 222LL;
	static int32_t x356 = -921508705;
	volatile uint64_t t65 = 13603LLU;

	t65 = (x353+((x354-x355)|x356));

	if (t65 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = -1;
	int32_t x358 = INT32_MAX;
	int32_t x359 = 2;
	static int8_t x360 = INT8_MIN;
	int32_t t66 = 18878506;

	t66 = (x357+((x358-x359)|x360));

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x361 = INT16_MIN;
	int8_t x362 = -1;
	uint16_t x363 = 195U;
	int16_t x364 = 350;
	volatile int32_t t67 = -273016657;

	t67 = (x361+((x362-x363)|x364));

	if (t67 != -32898) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x365 = -1LL;
	int64_t x366 = INT64_MIN;
	uint8_t x368 = 12U;
	int64_t t68 = 10849LL;

	t68 = (x365+((x366-x367)|x368));

	if (t68 != -9223372036854743029LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x369 = 71;
	volatile int64_t x371 = -56094850LL;
	int64_t x372 = -1LL;
	int64_t t69 = 1325843643339150LL;

	t69 = (x369+((x370-x371)|x372));

	if (t69 != 70LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x378 = INT16_MIN;
	static uint64_t x379 = 10883413720177333LLU;
	int8_t x380 = INT8_MIN;
	volatile uint64_t t70 = 10LLU;

	t70 = (x377+((x378-x379)|x380));

	if (t70 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = 0U;
	static int16_t x383 = INT16_MIN;
	static volatile int64_t t71 = 80501061533035286LL;

	t71 = (x381+((x382-x383)|x384));

	if (t71 != -129LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x385 = INT32_MAX;
	static volatile int16_t x386 = 1166;
	int64_t x387 = -1LL;
	volatile int8_t x388 = INT8_MAX;

	t72 = (x385+((x386-x387)|x388));

	if (t72 != 2147484926LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = INT8_MAX;
	int16_t x394 = 4;
	int64_t x395 = -1LL;
	int64_t x396 = -1LL;

	t73 = (x393+((x394-x395)|x396));

	if (t73 != 126LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x399 = 115U;
	uint64_t t74 = 143300502505LLU;

	t74 = (x397+((x398-x399)|x400));

	if (t74 != 492LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x401 = -239714214;
	volatile int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t75 = 8573668;

	t75 = (x401+((x402-x403)|x404));

	if (t75 != -242270119) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x405 = UINT64_MAX;
	static uint16_t x406 = 116U;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	volatile uint64_t t76 = 808565330LLU;

	t76 = (x405+((x406-x407)|x408));

	if (t76 != 18446744073709518963LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x409 = INT64_MIN;
	static uint32_t x410 = 600U;
	static int8_t x411 = INT8_MIN;
	volatile int16_t x412 = INT16_MIN;

	t77 = (x409+((x410-x411)|x412));

	if (t77 != -9223372032559840552LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = UINT16_MAX;
	static int64_t x416 = -1LL;
	volatile int64_t t78 = -243670LL;

	t78 = (x413+((x414-x415)|x416));

	if (t78 != -2147483649LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x421 = 50486058;
	int8_t x422 = INT8_MAX;
	uint64_t x423 = 9LLU;
	volatile uint64_t x424 = UINT64_MAX;

	t79 = (x421+((x422-x423)|x424));

	if (t79 != 50486057LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = 186;
	volatile int16_t x430 = -1;
	int32_t x431 = INT32_MIN;
	volatile int16_t x432 = INT16_MIN;

	t80 = (x429+((x430-x431)|x432));

	if (t80 != 185) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x433 = -86740133LL;
	uint16_t x434 = 370U;
	int8_t x435 = 0;
	static int64_t t81 = 86084346125754706LL;

	t81 = (x433+((x434-x435)|x436));

	if (t81 != 4208227162LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = -1;
	int64_t x438 = INT64_MIN;
	static int8_t x439 = -3;

	t82 = (x437+((x438-x439)|x440));

	if (t82 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x441 = 56;
	uint16_t x443 = 286U;
	uint8_t x444 = 10U;

	t83 = (x441+((x442-x443)|x444));

	if (t83 != -32990) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x446 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	int32_t t84 = -6899;

	t84 = (x445+((x446-x447)|x448));

	if (t84 != -32820) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x449 = 0U;
	int8_t x450 = INT8_MIN;
	int32_t t85 = 1;

	t85 = (x449+((x450-x451)|x452));

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x454 = 1U;
	int8_t x455 = -4;
	volatile int32_t t86 = 30015168;

	t86 = (x453+((x454-x455)|x456));

	if (t86 != -32764) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x462 = UINT16_MAX;
	volatile uint64_t x463 = UINT64_MAX;
	static int16_t x464 = INT16_MIN;
	volatile uint64_t t87 = 472611978364LLU;

	t87 = (x461+((x462-x463)|x464));

	if (t87 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x465 = 7431343442497569761LLU;
	volatile int64_t x466 = -24049LL;
	static int16_t x467 = -1;
	volatile uint8_t x468 = 9U;

	t88 = (x465+((x466-x467)|x468));

	if (t88 != 7431343442497545722LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x469 = -3;
	uint32_t x470 = 820U;
	volatile int16_t x471 = INT16_MIN;
	uint32_t t89 = 436185468U;

	t89 = (x469+((x470-x471)|x472));

	if (t89 != 4294967217U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x473 = UINT32_MAX;
	volatile uint64_t x474 = 1475969023308609788LLU;
	static int8_t x475 = -4;
	int8_t x476 = -53;
	volatile uint64_t t90 = 85LLU;

	t90 = (x473+((x474-x475)|x476));

	if (t90 != 4294967242LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x477 = UINT64_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	uint64_t t91 = 7183LLU;

	t91 = (x477+((x478-x479)|x480));

	if (t91 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x481 = 626850005U;
	volatile int32_t x482 = INT32_MAX;
	int16_t x483 = 0;
	uint32_t t92 = 9037211U;

	t92 = (x481+((x482-x483)|x484));

	if (t92 != 2774333652U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x485 = 1913230LLU;
	static int8_t x486 = INT8_MIN;
	int8_t x487 = 1;
	static int16_t x488 = 468;
	static volatile uint64_t t93 = 530792689LLU;

	t93 = (x485+((x486-x487)|x488));

	if (t93 != 1913229LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x489 = UINT16_MAX;
	int8_t x490 = -13;
	volatile int32_t x491 = 1;
	static int32_t x492 = -24591;
	int32_t t94 = 0;

	t94 = (x489+((x490-x491)|x492));

	if (t94 != 65522) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x494 = -1;
	static int16_t x495 = -1;
	int64_t t95 = 31410997171371LL;

	t95 = (x493+((x494-x495)|x496));

	if (t95 != 1797140172682362LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x498 = -12;
	static int8_t x499 = INT8_MIN;
	volatile int32_t t96 = 3663;

	t96 = (x497+((x498-x499)|x500));

	if (t96 != -813670935) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x509 = UINT16_MAX;
	uint8_t x510 = 2U;
	static uint32_t x511 = 2659U;
	uint16_t x512 = 3U;
	static uint32_t t97 = 255782U;

	t97 = (x509+((x510-x511)|x512));

	if (t97 != 62878U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x513 = -1;
	int8_t x514 = -1;
	volatile uint8_t x515 = UINT8_MAX;

	t98 = (x513+((x514-x515)|x516));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = 18LL;
	int32_t x522 = -4091;
	uint16_t x523 = 0U;
	volatile int64_t t99 = 96162213846438480LL;

	t99 = (x521+((x522-x523)|x524));

	if (t99 != -105LL) { NG(); } else { ; }
	
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

