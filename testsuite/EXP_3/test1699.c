#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
volatile int64_t x9 = -1LL;
int32_t t1 = -3976;
int16_t x14 = 187;
volatile int16_t x18 = -2012;
uint32_t x29 = 804U;
static int64_t x31 = -2363978278150LL;
uint16_t x38 = 3U;
static int64_t x45 = 122488644154LL;
int16_t x62 = INT16_MIN;
uint16_t x74 = UINT16_MAX;
int8_t x76 = 36;
int32_t x79 = 14036;
int8_t x86 = -1;
volatile int64_t x92 = INT64_MIN;
static uint64_t x98 = 111538LLU;
int8_t x100 = -6;
uint64_t x102 = UINT64_MAX;
uint64_t x104 = 228143703379275328LLU;
int32_t t22 = 97;
int64_t x113 = INT64_MIN;
uint8_t x116 = UINT8_MAX;
volatile int32_t t23 = 995638;
int8_t x126 = -1;
static uint8_t x127 = UINT8_MAX;
int64_t x128 = INT64_MIN;
int32_t x131 = INT32_MIN;
static volatile int32_t t28 = -89;
int64_t x156 = -404LL;
static int32_t t31 = -15;
int16_t x171 = 0;
uint64_t x174 = 3089005LLU;
uint64_t x175 = 71096481648LLU;
static volatile int16_t x180 = 6745;
static int64_t x193 = -2106240128590LL;
volatile int64_t x194 = -369LL;
uint16_t x203 = UINT16_MAX;
int8_t x211 = -1;
volatile int32_t t42 = 575;
int16_t x213 = -1;
int32_t t43 = 934894;
static int32_t x224 = -3317;
static uint16_t x231 = 537U;
int8_t x234 = INT8_MIN;
static uint32_t x236 = 63U;
volatile int64_t x248 = INT64_MIN;
int32_t x253 = -1;
static uint16_t x254 = 813U;
static int8_t x256 = INT8_MIN;
volatile int32_t t51 = 68;
int32_t x260 = INT32_MIN;
volatile uint64_t x261 = UINT64_MAX;
static volatile int8_t x270 = -7;
uint8_t x271 = UINT8_MAX;
int32_t x272 = INT32_MIN;
int32_t t56 = 60;
int8_t x290 = INT8_MIN;
static uint32_t x317 = 2244075U;
static int32_t x318 = INT32_MIN;
int64_t x323 = 4075975398231359LL;
int32_t x332 = -1;
int8_t x336 = INT8_MIN;
uint64_t x340 = UINT64_MAX;
int64_t x350 = -227217243LL;
uint64_t x352 = UINT64_MAX;
volatile uint64_t x363 = 53LLU;
volatile int32_t x364 = -1;
volatile int8_t x369 = -43;
int32_t x372 = INT32_MIN;
int32_t t77 = -415923;
uint32_t x382 = 1U;
int32_t x384 = INT32_MIN;
uint16_t x390 = 0U;
int8_t x391 = -1;
static volatile uint32_t x397 = 6867U;
static uint8_t x401 = UINT8_MAX;
int32_t x410 = INT32_MIN;
int32_t t86 = -3;
volatile int32_t t89 = 13523;
volatile uint64_t x429 = 1041356186LLU;
int8_t x433 = INT8_MIN;
int32_t t91 = 6305;
volatile uint64_t x438 = 405175312337779LLU;
static int32_t x439 = 22;
uint32_t x440 = UINT32_MAX;
uint64_t x442 = UINT64_MAX;
static int8_t x447 = -3;
int32_t t94 = 3;
uint8_t x455 = UINT8_MAX;
volatile int32_t t96 = 3999;
static int16_t x464 = -1;
volatile uint32_t x465 = 163U;
uint16_t x470 = 778U;
int32_t x471 = 22;


void f0(void) {
	int32_t x5 = 79;
	int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	int32_t t0 = 429343;

	t0 = ((x5+x6)<(x7&x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;

	t1 = ((x9+x10)<(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -25LL;
	uint8_t x15 = 10U;
	int16_t x16 = -172;
	volatile int32_t t2 = 36;

	t2 = ((x13+x14)<(x15&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	static volatile int16_t x19 = INT16_MAX;
	volatile int16_t x20 = -1;
	volatile int32_t t3 = 192594;

	t3 = ((x17+x18)<(x19&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	static int8_t x22 = INT8_MAX;
	int16_t x23 = 557;
	volatile int8_t x24 = -1;
	int32_t t4 = 1568;

	t4 = ((x21+x22)<(x23&x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -55;
	int8_t x26 = INT8_MAX;
	int32_t x27 = INT32_MAX;
	int32_t x28 = -1;
	static volatile int32_t t5 = 7721;

	t5 = ((x25+x26)<(x27&x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = 343843176U;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t6 = -40048756;

	t6 = ((x29+x30)<(x31&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 94U;
	uint8_t x34 = 1U;
	static uint32_t x35 = 9128U;
	static int8_t x36 = 0;
	static int32_t t7 = 632;

	t7 = ((x33+x34)<(x35&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	static int16_t x39 = INT16_MIN;
	volatile uint8_t x40 = 72U;
	volatile int32_t t8 = -670838222;

	t8 = ((x37+x38)<(x39&x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = 3U;
	uint8_t x47 = 44U;
	static int32_t x48 = -9574;
	int32_t t9 = 2205762;

	t9 = ((x45+x46)<(x47&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -77;
	volatile int64_t x50 = 2156149LL;
	int32_t x51 = -1;
	int16_t x52 = -1;
	volatile int32_t t10 = -9114;

	t10 = ((x49+x50)<(x51&x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = -1;
	volatile int8_t x55 = INT8_MIN;
	static int64_t x56 = INT64_MIN;
	int32_t t11 = 435515803;

	t11 = ((x53+x54)<(x55&x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	uint32_t x63 = 172U;
	int32_t x64 = -1;
	int32_t t12 = -7;

	t12 = ((x61+x62)<(x63&x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -1;
	int8_t x70 = -5;
	static volatile int8_t x71 = INT8_MIN;
	uint16_t x72 = 5134U;
	volatile int32_t t13 = 231874096;

	t13 = ((x69+x70)<(x71&x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x73 = 852289184878055LLU;
	int16_t x75 = -1;
	int32_t t14 = 3;

	t14 = ((x73+x74)<(x75&x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MAX;
	int32_t x78 = INT32_MIN;
	static int32_t x80 = 201696;
	volatile int32_t t15 = 16;

	t15 = ((x77+x78)<(x79&x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 19U;
	uint64_t x83 = 7397LLU;
	int64_t x84 = INT64_MIN;
	volatile int32_t t16 = -435887380;

	t16 = ((x81+x82)<(x83&x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = INT8_MIN;
	static int64_t x87 = INT64_MIN;
	static uint32_t x88 = 10362U;
	volatile int32_t t17 = -12;

	t17 = ((x85+x86)<(x87&x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -107985;
	static int16_t x90 = 3533;
	uint64_t x91 = 251366089026LLU;
	volatile int32_t t18 = -25102;

	t18 = ((x89+x90)<(x91&x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 2U;
	int64_t x94 = -1LL;
	uint32_t x95 = 2856U;
	volatile uint8_t x96 = 9U;
	volatile int32_t t19 = -226704;

	t19 = ((x93+x94)<(x95&x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x97 = 19941122002117LLU;
	uint64_t x99 = 932929037575LLU;
	volatile int32_t t20 = -263;

	t20 = ((x97+x98)<(x99&x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x101 = INT16_MAX;
	int64_t x103 = -41581LL;
	int32_t t21 = -7677556;

	t21 = ((x101+x102)<(x103&x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 486959U;
	volatile uint32_t x106 = 611006U;
	volatile uint64_t x107 = UINT64_MAX;
	static int32_t x108 = INT32_MIN;

	t22 = ((x105+x106)<(x107&x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x114 = 1;
	volatile int64_t x115 = -1LL;

	t23 = ((x113+x114)<(x115&x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x117 = 0U;
	volatile uint16_t x118 = 4240U;
	int64_t x119 = 9878351068665646LL;
	int8_t x120 = -1;
	int32_t t24 = -2002;

	t24 = ((x117+x118)<(x119&x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x121 = INT8_MAX;
	static uint16_t x122 = 16014U;
	int32_t x123 = -1;
	volatile int32_t x124 = 831623004;
	static int32_t t25 = -9817;

	t25 = ((x121+x122)<(x123&x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x125 = 5862U;
	volatile int32_t t26 = -823;

	t26 = ((x125+x126)<(x127&x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x129 = 5U;
	int64_t x130 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	volatile int32_t t27 = 80348162;

	t27 = ((x129+x130)<(x131&x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = 3754540441LL;
	int64_t x138 = -1011607791117792372LL;
	int8_t x139 = INT8_MAX;
	int64_t x140 = -221036388816LL;

	t28 = ((x137+x138)<(x139&x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	volatile int8_t x142 = INT8_MIN;
	int8_t x143 = -2;
	int16_t x144 = INT16_MIN;
	volatile int32_t t29 = -29957076;

	t29 = ((x141+x142)<(x143&x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = -1;
	int16_t x146 = 4;
	volatile uint64_t x147 = 6119981017LLU;
	static volatile int8_t x148 = INT8_MIN;
	static int32_t t30 = -30474;

	t30 = ((x145+x146)<(x147&x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	int8_t x154 = INT8_MAX;
	static int32_t x155 = 1361;

	t31 = ((x153+x154)<(x155&x156));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = 15;
	volatile int8_t x162 = -21;
	volatile uint8_t x163 = UINT8_MAX;
	static int8_t x164 = -1;
	int32_t t32 = -609409749;

	t32 = ((x161+x162)<(x163&x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = 5964U;
	volatile int16_t x166 = 1;
	uint16_t x167 = 3120U;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t33 = -25470;

	t33 = ((x165+x166)<(x167&x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x169 = 17575803U;
	uint64_t x170 = UINT64_MAX;
	int32_t x172 = -349980500;
	volatile int32_t t34 = -12673;

	t34 = ((x169+x170)<(x171&x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = UINT64_MAX;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t35 = -33982;

	t35 = ((x173+x174)<(x175&x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -1;
	uint64_t x178 = 97398922LLU;
	int16_t x179 = 1750;
	int32_t t36 = -1617196;

	t36 = ((x177+x178)<(x179&x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x185 = 0;
	static uint8_t x186 = UINT8_MAX;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = 0;
	int32_t t37 = -4129;

	t37 = ((x185+x186)<(x187&x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x195 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	int32_t t38 = 32;

	t38 = ((x193+x194)<(x195&x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x197 = -2712;
	int64_t x198 = 224849LL;
	static uint32_t x199 = 68U;
	uint64_t x200 = 124644037038345648LLU;
	volatile int32_t t39 = -1183817;

	t39 = ((x197+x198)<(x199&x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x201 = -358;
	int8_t x202 = INT8_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t40 = 546;

	t40 = ((x201+x202)<(x203&x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = -1LL;
	int16_t x206 = 17;
	int32_t x207 = INT32_MAX;
	volatile int8_t x208 = -19;
	int32_t t41 = -15253;

	t41 = ((x205+x206)<(x207&x208));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = -3LL;
	int16_t x210 = -41;
	static volatile uint64_t x212 = 304069LLU;

	t42 = ((x209+x210)<(x211&x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x214 = -28;
	uint64_t x215 = 2472561536630LLU;
	int16_t x216 = -1437;

	t43 = ((x213+x214)<(x215&x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MAX;
	static int8_t x218 = INT8_MIN;
	volatile uint64_t x219 = 510LLU;
	uint16_t x220 = UINT16_MAX;
	int32_t t44 = -1389103;

	t44 = ((x217+x218)<(x219&x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x221 = -1;
	static volatile int64_t x222 = INT64_MAX;
	int32_t x223 = 272934196;
	static volatile int32_t t45 = 2074678;

	t45 = ((x221+x222)<(x223&x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x229 = 44LLU;
	uint8_t x230 = 10U;
	int8_t x232 = 1;
	volatile int32_t t46 = -144;

	t46 = ((x229+x230)<(x231&x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = -1LL;
	static int32_t x235 = -17505;
	static int32_t t47 = -1;

	t47 = ((x233+x234)<(x235&x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = INT32_MAX;
	uint64_t x238 = 13591LLU;
	static volatile int8_t x239 = -17;
	static uint16_t x240 = 9238U;
	int32_t t48 = 97230884;

	t48 = ((x237+x238)<(x239&x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = 35141LLU;
	uint32_t x242 = 19432U;
	static uint16_t x243 = 334U;
	uint8_t x244 = UINT8_MAX;
	static int32_t t49 = 62891545;

	t49 = ((x241+x242)<(x243&x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 54;
	int8_t x246 = 5;
	uint64_t x247 = 205314063771170LLU;
	volatile int32_t t50 = 14450;

	t50 = ((x245+x246)<(x247&x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x255 = INT64_MIN;

	t51 = ((x253+x254)<(x255&x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x257 = 2U;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = 2700;
	volatile int32_t t52 = 27911;

	t52 = ((x257+x258)<(x259&x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x262 = INT64_MIN;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = 4811415302621475LL;
	volatile int32_t t53 = 4;

	t53 = ((x261+x262)<(x263&x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = 129;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t54 = -2733;

	t54 = ((x265+x266)<(x267&x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MAX;
	static int32_t t55 = 2;

	t55 = ((x269+x270)<(x271&x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x273 = INT32_MAX;
	int32_t x274 = -1;
	uint64_t x275 = 15LLU;
	uint32_t x276 = 5056430U;

	t56 = ((x273+x274)<(x275&x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = 1;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t57 = -22671798;

	t57 = ((x281+x282)<(x283&x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x285 = 50U;
	volatile uint32_t x286 = 668U;
	uint64_t x287 = 309826730439007LLU;
	volatile int8_t x288 = -1;
	int32_t t58 = 27085034;

	t58 = ((x285+x286)<(x287&x288));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x289 = 540;
	uint16_t x291 = UINT16_MAX;
	static uint16_t x292 = 422U;
	volatile int32_t t59 = 29350929;

	t59 = ((x289+x290)<(x291&x292));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x293 = INT32_MIN;
	volatile int64_t x294 = INT64_MAX;
	uint16_t x295 = 34U;
	static volatile uint64_t x296 = 3768449105114LLU;
	static volatile int32_t t60 = 25724;

	t60 = ((x293+x294)<(x295&x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x301 = 2;
	volatile uint64_t x302 = 25LLU;
	uint8_t x303 = 79U;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t61 = 156046637;

	t61 = ((x301+x302)<(x303&x304));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x305 = 9306U;
	uint64_t x306 = 8450068LLU;
	uint16_t x307 = UINT16_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t62 = 393979;

	t62 = ((x305+x306)<(x307&x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	volatile int8_t x315 = -25;
	int32_t x316 = -1;
	static volatile int32_t t63 = 333996509;

	t63 = ((x313+x314)<(x315&x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x319 = INT64_MAX;
	int32_t x320 = -307527;
	int32_t t64 = 22706899;

	t64 = ((x317+x318)<(x319&x320));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = -1LL;
	int32_t x322 = INT32_MAX;
	volatile int64_t x324 = INT64_MIN;
	static int32_t t65 = -484033;

	t65 = ((x321+x322)<(x323&x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -8918046384445LL;
	int32_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;
	int32_t t66 = -867;

	t66 = ((x329+x330)<(x331&x332));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x333 = 0U;
	int64_t x334 = -1537841160LL;
	int8_t x335 = INT8_MIN;
	int32_t t67 = -1;

	t67 = ((x333+x334)<(x335&x336));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x337 = UINT8_MAX;
	volatile uint16_t x338 = 17U;
	int8_t x339 = INT8_MIN;
	volatile int32_t t68 = 1010;

	t68 = ((x337+x338)<(x339&x340));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x341 = -40211LL;
	static int32_t x342 = -1;
	static int64_t x343 = -1LL;
	int64_t x344 = -1LL;
	volatile int32_t t69 = 49755;

	t69 = ((x341+x342)<(x343&x344));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = 90391045;
	int8_t x346 = 20;
	static uint16_t x347 = UINT16_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t70 = 0;

	t70 = ((x345+x346)<(x347&x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x349 = INT8_MIN;
	volatile uint16_t x351 = UINT16_MAX;
	volatile int32_t t71 = -13;

	t71 = ((x349+x350)<(x351&x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x353 = 30442779344LLU;
	static int64_t x354 = INT64_MIN;
	int64_t x355 = 312375950394490LL;
	int16_t x356 = INT16_MIN;
	int32_t t72 = 40553;

	t72 = ((x353+x354)<(x355&x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x361 = INT32_MIN;
	static int8_t x362 = INT8_MAX;
	volatile int32_t t73 = -32830533;

	t73 = ((x361+x362)<(x363&x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x365 = -831238;
	int32_t x366 = INT32_MAX;
	static volatile int32_t x367 = 28727168;
	int8_t x368 = INT8_MAX;
	static volatile int32_t t74 = -1;

	t74 = ((x365+x366)<(x367&x368));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x370 = INT32_MAX;
	int64_t x371 = 172LL;
	int32_t t75 = 449948;

	t75 = ((x369+x370)<(x371&x372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 1679U;
	int32_t x375 = INT32_MIN;
	volatile int32_t x376 = INT32_MIN;
	static int32_t t76 = -2;

	t76 = ((x373+x374)<(x375&x376));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x377 = -1;
	uint8_t x378 = 22U;
	uint8_t x379 = 0U;
	volatile uint32_t x380 = 394U;

	t77 = ((x377+x378)<(x379&x380));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x381 = -1;
	uint16_t x383 = 13U;
	int32_t t78 = 829;

	t78 = ((x381+x382)<(x383&x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x385 = -36494;
	int16_t x386 = INT16_MAX;
	volatile int8_t x387 = -1;
	int32_t x388 = INT32_MAX;
	volatile int32_t t79 = 118;

	t79 = ((x385+x386)<(x387&x388));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x389 = INT64_MIN;
	static uint64_t x392 = 65LLU;
	int32_t t80 = -384;

	t80 = ((x389+x390)<(x391&x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x393 = INT32_MIN;
	static int64_t x394 = -5LL;
	static int16_t x395 = 59;
	int16_t x396 = -1;
	volatile int32_t t81 = -36246;

	t81 = ((x393+x394)<(x395&x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x398 = -25;
	volatile uint32_t x399 = 236U;
	static int8_t x400 = INT8_MAX;
	volatile int32_t t82 = 1548134;

	t82 = ((x397+x398)<(x399&x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x402 = -259725440;
	int8_t x403 = -1;
	static int8_t x404 = INT8_MIN;
	int32_t t83 = -10724;

	t83 = ((x401+x402)<(x403&x404));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = -44;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	static uint8_t x408 = 60U;
	volatile int32_t t84 = -351749;

	t84 = ((x405+x406)<(x407&x408));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = -1LL;
	static int8_t x411 = -1;
	int32_t x412 = INT32_MIN;
	int32_t t85 = -1;

	t85 = ((x409+x410)<(x411&x412));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x414 = 3U;
	uint32_t x415 = UINT32_MAX;
	static volatile int64_t x416 = -1LL;

	t86 = ((x413+x414)<(x415&x416));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x417 = INT8_MIN;
	volatile int64_t x418 = 65847532973457267LL;
	int32_t x419 = -1;
	int32_t x420 = -1;
	volatile int32_t t87 = 1;

	t87 = ((x417+x418)<(x419&x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x421 = INT8_MIN;
	int16_t x422 = -1;
	volatile int64_t x423 = -982LL;
	int32_t x424 = INT32_MIN;
	volatile int32_t t88 = 548;

	t88 = ((x421+x422)<(x423&x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = INT8_MAX;
	uint16_t x426 = 58U;
	uint32_t x427 = UINT32_MAX;
	uint64_t x428 = 1LLU;

	t89 = ((x425+x426)<(x427&x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x430 = 0;
	int8_t x431 = INT8_MIN;
	int32_t x432 = 22097;
	int32_t t90 = -345;

	t90 = ((x429+x430)<(x431&x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x434 = -1;
	static int32_t x435 = -3470;
	int16_t x436 = -5949;

	t91 = ((x433+x434)<(x435&x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = -1;
	int32_t t92 = 3;

	t92 = ((x437+x438)<(x439&x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = -360;
	int8_t x443 = 1;
	static uint16_t x444 = 1U;
	int32_t t93 = 27173;

	t93 = ((x441+x442)<(x443&x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x445 = INT64_MAX;
	int64_t x446 = INT64_MIN;
	volatile int64_t x448 = INT64_MIN;

	t94 = ((x445+x446)<(x447&x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x449 = 1U;
	static int8_t x450 = INT8_MIN;
	int64_t x451 = -8430288187LL;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t95 = 897961;

	t95 = ((x449+x450)<(x451&x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x453 = INT16_MIN;
	uint32_t x454 = 103407529U;
	int64_t x456 = INT64_MIN;

	t96 = ((x453+x454)<(x455&x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x461 = 6U;
	uint16_t x462 = 0U;
	uint16_t x463 = 647U;
	volatile int32_t t97 = 219;

	t97 = ((x461+x462)<(x463&x464));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x466 = 17U;
	volatile int64_t x467 = 1046730316227944LL;
	static uint16_t x468 = UINT16_MAX;
	static int32_t t98 = 47;

	t98 = ((x465+x466)<(x467&x468));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x469 = 3;
	static uint16_t x472 = 9158U;
	int32_t t99 = 302;

	t99 = ((x469+x470)<(x471&x472));

	if (t99 != 0) { NG(); } else { ; }
	
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

