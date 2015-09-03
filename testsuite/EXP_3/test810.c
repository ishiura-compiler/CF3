#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -1LL;
static int64_t x7 = INT64_MIN;
int64_t x11 = -1318945827788203717LL;
uint16_t x20 = 370U;
volatile int64_t t3 = -21962385991532LL;
int32_t x21 = 3247945;
volatile uint64_t x33 = UINT64_MAX;
uint16_t x40 = UINT16_MAX;
volatile uint64_t x44 = 64109894615LLU;
volatile uint64_t t8 = 3707097266614985469LLU;
int32_t x50 = INT32_MIN;
int8_t x51 = 12;
int64_t x55 = INT64_MAX;
int16_t x63 = INT16_MIN;
int16_t x69 = -2349;
uint16_t x88 = 13746U;
uint32_t x89 = UINT32_MAX;
int32_t x92 = INT32_MAX;
uint32_t x95 = 281318623U;
int64_t x98 = INT64_MIN;
uint64_t x112 = 3380763209719804442LLU;
int16_t x119 = 201;
int64_t t21 = -1LL;
uint64_t x127 = 676560962LLU;
uint64_t t22 = 84657LLU;
int32_t x133 = INT32_MAX;
static int16_t x134 = -1;
volatile int64_t t23 = -27799592758644947LL;
int16_t x146 = -1;
int64_t x150 = -1LL;
static int64_t x152 = INT64_MAX;
static int64_t x164 = -1LL;
volatile int8_t x173 = INT8_MIN;
static uint64_t x174 = UINT64_MAX;
volatile int16_t x175 = -1;
volatile uint64_t t33 = 24LLU;
static volatile uint64_t t34 = 7236470287061LLU;
uint64_t x200 = 3022083720703802LLU;
uint64_t t37 = 420671LLU;
uint16_t x205 = 2820U;
int64_t x206 = 8524511097696821LL;
int64_t t41 = 959749516784558400LL;
int16_t x223 = -37;
static volatile uint8_t x229 = 55U;
static uint16_t x231 = UINT16_MAX;
static int8_t x232 = INT8_MIN;
volatile int32_t x237 = INT32_MIN;
uint8_t x245 = UINT8_MAX;
int16_t x248 = INT16_MIN;
uint64_t x264 = UINT64_MAX;
uint8_t x283 = 1U;
static uint8_t x297 = 0U;
static int16_t x318 = -1;
volatile uint8_t x320 = 21U;
static volatile uint8_t x321 = 3U;
uint16_t x322 = UINT16_MAX;
uint16_t x324 = UINT16_MAX;
volatile int32_t t58 = -280779083;
int8_t x326 = INT8_MIN;
volatile uint8_t x334 = 56U;
uint32_t x338 = 0U;
int16_t x340 = INT16_MIN;
int64_t t62 = 193410420LL;
int64_t x345 = -89752LL;
uint8_t x356 = 65U;
int32_t x361 = INT32_MIN;
static uint8_t x364 = 11U;
volatile int32_t t67 = 184;
static int8_t x377 = INT8_MIN;
uint64_t x396 = 596485112249677LLU;
int64_t x397 = -40184LL;
int16_t x403 = INT16_MAX;
static uint64_t x412 = 303059206051LLU;
int8_t x414 = INT8_MAX;
int64_t x415 = -12911469LL;
volatile int64_t t78 = 1LL;
volatile int32_t t79 = 186925554;
volatile uint8_t x427 = 119U;
static int8_t x434 = -1;
int8_t x439 = INT8_MAX;
volatile int64_t t83 = 97236LL;
int16_t x451 = INT16_MAX;
volatile int16_t x456 = INT16_MAX;
volatile uint64_t t86 = 382758352292LLU;
static volatile uint64_t t87 = 2LLU;
uint16_t x469 = 6256U;
volatile uint16_t x470 = 1U;
volatile int32_t x477 = INT32_MIN;
int16_t x478 = -13;
int16_t x494 = INT16_MIN;
volatile int32_t x495 = 479959;
int8_t x497 = INT8_MIN;
int8_t x499 = INT8_MIN;
int16_t x501 = INT16_MIN;
volatile int64_t x503 = -1LL;
uint16_t x504 = 3U;
volatile int16_t x518 = 3823;
volatile int8_t x520 = 57;
uint16_t x531 = UINT16_MAX;
volatile int32_t t99 = -7023740;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = -1;
	static int64_t x3 = 10751072LL;
	static int16_t x4 = INT16_MAX;

	t0 = ((x1&x2)/(x3%x4));

	if (t0 != -9LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = 6810;
	uint64_t x8 = 19180408527259LLU;
	volatile uint64_t t1 = 26373435293610LLU;

	t1 = ((x5&x6)/(x7%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 158975315U;
	static uint32_t x10 = 772U;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 395107621183114LL;

	t2 = ((x9&x10)/(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1339662015295LL;
	static int32_t x18 = -138898651;
	uint32_t x19 = 163673459U;

	t3 = ((x17&x18)/(x19%x20));

	if (t3 != -5172457266LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MAX;
	int8_t x24 = -6;
	static int64_t t4 = -7326LL;

	t4 = ((x21&x22)/(x23%x24));

	if (t4 != 73LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = INT32_MAX;
	static uint64_t x26 = UINT64_MAX;
	int8_t x27 = -1;
	static uint16_t x28 = 778U;
	uint64_t t5 = 743713936746280LLU;

	t5 = ((x25&x26)/(x27%x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = -18;
	static volatile int16_t x35 = -871;
	uint16_t x36 = 84U;
	volatile uint64_t t6 = 5206860692979LLU;

	t6 = ((x33&x34)/(x35%x36));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	volatile int8_t x38 = -1;
	volatile int32_t x39 = -1;
	volatile int32_t t7 = -4448;

	t7 = ((x37&x38)/(x39%x40));

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MIN;

	t8 = ((x41&x42)/(x43%x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MAX;
	volatile int16_t x52 = -774;
	static volatile int64_t t9 = -139688988LL;

	t9 = ((x49&x50)/(x51%x52));

	if (t9 != 768614336225607680LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	uint8_t x54 = 0U;
	int32_t x56 = INT32_MIN;
	volatile int64_t t10 = 407LL;

	t10 = ((x53&x54)/(x55%x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 38U;
	uint32_t x62 = 4810878U;
	static int32_t x64 = INT32_MIN;
	uint32_t t11 = 52711065U;

	t11 = ((x61&x62)/(x63%x64));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x70 = 8477U;
	uint16_t x71 = 1647U;
	static int64_t x72 = 30LL;
	int64_t t12 = -62109750298913LL;

	t12 = ((x69&x70)/(x71%x72));

	if (t12 != 304LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x77 = INT64_MIN;
	static uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = INT64_MIN;
	uint16_t x80 = 51U;
	int64_t t13 = 1221303027718521LL;

	t13 = ((x77&x78)/(x79%x80));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	static volatile int64_t t14 = 17194368014949LL;

	t14 = ((x85&x86)/(x87%x88));

	if (t14 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x90 = INT64_MIN;
	uint32_t x91 = UINT32_MAX;
	int64_t t15 = -6407814912689769LL;

	t15 = ((x89&x90)/(x91%x92));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = -69313801429528LL;
	int16_t x94 = INT16_MAX;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t16 = -23192110LL;

	t16 = ((x93&x94)/(x95%x96));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = INT32_MAX;
	static volatile int16_t x99 = 14996;
	int64_t x100 = -7LL;
	int64_t t17 = -3971LL;

	t17 = ((x97&x98)/(x99%x100));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 33507006U;
	volatile int8_t x102 = INT8_MIN;
	int64_t x103 = INT64_MAX;
	uint8_t x104 = UINT8_MAX;
	int64_t t18 = -1872782261122090500LL;

	t18 = ((x101&x102)/(x103%x104));

	if (t18 != 263834LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	volatile int64_t x110 = -1LL;
	uint32_t x111 = 12U;
	uint64_t t19 = 1LLU;

	t19 = ((x109&x110)/(x111%x112));

	if (t19 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	static uint64_t x116 = 7822485236182LLU;
	static volatile uint64_t t20 = 775422LLU;

	t20 = ((x113&x114)/(x115%x116));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	uint16_t x120 = 398U;

	t21 = ((x117&x118)/(x119%x120));

	if (t21 != -45887423068929232LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = -3;
	int64_t x126 = INT64_MAX;
	static volatile uint32_t x128 = 3U;

	t22 = ((x125&x126)/(x127%x128));

	if (t22 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x135 = -1;
	int64_t x136 = INT64_MIN;

	t23 = ((x133&x134)/(x135%x136));

	if (t23 != -2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = INT8_MAX;
	static uint8_t x138 = 23U;
	int8_t x139 = 1;
	static int64_t x140 = 51129LL;
	int64_t t24 = -30973994879806588LL;

	t24 = ((x137&x138)/(x139%x140));

	if (t24 != 23LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MAX;
	static int16_t x143 = INT16_MIN;
	static int16_t x144 = INT16_MAX;
	int32_t t25 = -75489;

	t25 = ((x141&x142)/(x143%x144));

	if (t25 != -32640) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -36LL;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 113U;
	int64_t t26 = 2LL;

	t26 = ((x145&x146)/(x147%x148));

	if (t26 != -4LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x151 = UINT64_MAX;
	static volatile uint64_t t27 = 168054491741314LLU;

	t27 = ((x149&x150)/(x151%x152));

	if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x153 = 3U;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = -1LL;
	int32_t x156 = INT32_MAX;
	uint64_t t28 = 52688633829856LLU;

	t28 = ((x153&x154)/(x155%x156));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x157 = INT16_MIN;
	uint32_t x158 = 14870U;
	uint32_t x159 = 18U;
	uint16_t x160 = 88U;
	static volatile uint32_t t29 = 143045044U;

	t29 = ((x157&x158)/(x159%x160));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x161 = UINT8_MAX;
	static int8_t x162 = -1;
	uint64_t x163 = 2776LLU;
	volatile uint64_t t30 = 568263542016436500LLU;

	t30 = ((x161&x162)/(x163%x164));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int64_t x166 = -1LL;
	static volatile uint16_t x167 = 539U;
	int16_t x168 = 28;
	volatile int64_t t31 = 26940774LL;

	t31 = ((x165&x166)/(x167%x168));

	if (t31 != 36LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	static int64_t x170 = INT64_MIN;
	uint32_t x171 = 247604708U;
	int32_t x172 = INT32_MIN;
	int64_t t32 = 6LL;

	t32 = ((x169&x170)/(x171%x172));

	if (t32 != -37250390395LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x176 = INT8_MIN;

	t33 = ((x173&x174)/(x175%x176));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = INT16_MAX;
	uint64_t x182 = 10271667982633401LLU;
	uint16_t x183 = 368U;
	uint16_t x184 = 81U;

	t34 = ((x181&x182)/(x183%x184));

	if (t34 != 56LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint16_t x186 = 573U;
	int16_t x187 = INT16_MIN;
	int16_t x188 = -405;
	int32_t t35 = 104014490;

	t35 = ((x185&x186)/(x187%x188));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x189 = 1336197;
	int16_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	uint32_t x192 = 3338U;
	static uint32_t t36 = 7461146U;

	t36 = ((x189&x190)/(x191%x192));

	if (t36 != 5239U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = -1;
	uint64_t x198 = 1324647994228956LLU;
	int64_t x199 = -1LL;

	t37 = ((x197&x198)/(x199%x200));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = INT16_MAX;
	static int16_t x202 = INT16_MIN;
	volatile int64_t x203 = INT64_MIN;
	uint8_t x204 = 15U;
	volatile int64_t t38 = -95021851050656LL;

	t38 = ((x201&x202)/(x203%x204));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x207 = -6;
	volatile uint8_t x208 = 4U;
	int64_t t39 = -7142LL;

	t39 = ((x205&x206)/(x207%x208));

	if (t39 != -258LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x213 = 1;
	int16_t x214 = 0;
	int16_t x215 = INT16_MIN;
	int8_t x216 = -3;
	int32_t t40 = -668;

	t40 = ((x213&x214)/(x215%x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = INT64_MIN;
	static int16_t x218 = INT16_MAX;
	uint16_t x219 = 7U;
	uint16_t x220 = UINT16_MAX;

	t41 = ((x217&x218)/(x219%x220));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = -11333;
	int32_t x222 = -1;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t42 = 5003973;

	t42 = ((x221&x222)/(x223%x224));

	if (t42 != 306) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = INT32_MAX;
	static int8_t x226 = 56;
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = -11855;
	static volatile uint32_t t43 = 0U;

	t43 = ((x225&x226)/(x227%x228));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x230 = 6U;
	int32_t t44 = 6970;

	t44 = ((x229&x230)/(x231%x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x238 = -1;
	int16_t x239 = -4348;
	uint32_t x240 = 29960U;
	static uint32_t t45 = 38126065U;

	t45 = ((x237&x238)/(x239%x240));

	if (t45 != 124940U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x246 = 11;
	uint8_t x247 = 124U;
	int32_t t46 = -126610;

	t46 = ((x245&x246)/(x247%x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 2115374395138270LLU;
	static int64_t x251 = INT64_MIN;
	static volatile uint32_t x252 = 63U;
	volatile uint64_t t47 = 30393640727LLU;

	t47 = ((x249&x250)/(x251%x252));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	volatile int32_t x254 = -80560;
	static volatile int32_t x255 = INT32_MIN;
	uint32_t x256 = 21607U;
	uint32_t t48 = 12075U;

	t48 = ((x253&x254)/(x255%x256));

	if (t48 != 301105U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x261 = 1674811610777LLU;
	static volatile int8_t x262 = 4;
	volatile int8_t x263 = -2;
	volatile uint64_t t49 = 28122931533932498LLU;

	t49 = ((x261&x262)/(x263%x264));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = -1;
	uint8_t x270 = 2U;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	uint64_t t50 = 1699445043575805LLU;

	t50 = ((x269&x270)/(x271%x272));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = 1086685397U;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = INT8_MIN;
	static volatile uint32_t t51 = 403324550U;

	t51 = ((x277&x278)/(x279%x280));

	if (t51 != 8556576U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = -40932740;
	static uint8_t x282 = 1U;
	uint8_t x284 = UINT8_MAX;
	int32_t t52 = -96051;

	t52 = ((x281&x282)/(x283%x284));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x289 = 8U;
	int16_t x290 = -46;
	volatile uint64_t x291 = 2286336335910764LLU;
	uint32_t x292 = 61361741U;
	static uint64_t t53 = 1304195747098LLU;

	t53 = ((x289&x290)/(x291%x292));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x298 = INT8_MAX;
	int64_t x299 = INT64_MIN;
	uint8_t x300 = 6U;
	volatile int64_t t54 = 327880193859654LL;

	t54 = ((x297&x298)/(x299%x300));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = 4;
	uint8_t x304 = 3U;
	int32_t t55 = -6;

	t55 = ((x301&x302)/(x303%x304));

	if (t55 != 65408) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = -63;
	uint32_t x307 = 2264U;
	int32_t x308 = INT32_MIN;
	uint32_t t56 = 826534193U;

	t56 = ((x305&x306)/(x307%x308));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x317 = -24;
	uint64_t x319 = UINT64_MAX;
	volatile uint64_t t57 = 37400LLU;

	t57 = ((x317&x318)/(x319%x320));

	if (t57 != 1229782938247303439LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x323 = INT8_MIN;

	t58 = ((x321&x322)/(x323%x324));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x325 = 111035999;
	static volatile int16_t x327 = 8;
	int32_t x328 = -51431860;
	int32_t t59 = 3519484;

	t59 = ((x325&x326)/(x327%x328));

	if (t59 != 13879488) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x333 = INT8_MAX;
	volatile int32_t x335 = -393776;
	int8_t x336 = INT8_MIN;
	int32_t t60 = 2077411;

	t60 = ((x333&x334)/(x335%x336));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x337 = 27992801436269524LL;
	int64_t x339 = -11131LL;
	static volatile int64_t t61 = 3969878113LL;

	t61 = ((x337&x338)/(x339%x340));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x341 = UINT8_MAX;
	static int64_t x342 = INT64_MIN;
	int32_t x343 = 1569910;
	volatile int16_t x344 = INT16_MAX;

	t62 = ((x341&x342)/(x343%x344));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x346 = 0U;
	static int8_t x347 = INT8_MAX;
	uint32_t x348 = UINT32_MAX;
	int64_t t63 = -39149395567LL;

	t63 = ((x345&x346)/(x347%x348));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x353 = INT64_MAX;
	static volatile int64_t x354 = 4270997926542045LL;
	volatile int16_t x355 = -1;
	int64_t t64 = 3971341376167LL;

	t64 = ((x353&x354)/(x355%x356));

	if (t64 != -4270997926542045LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x357 = 11U;
	int16_t x358 = 3114;
	static int64_t x359 = -1799245243LL;
	volatile int16_t x360 = INT16_MAX;
	int64_t t65 = 982LL;

	t65 = ((x357&x358)/(x359%x360));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x362 = 0U;
	uint64_t x363 = 422LLU;
	volatile uint64_t t66 = 191239977LLU;

	t66 = ((x361&x362)/(x363%x364));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x365 = -1;
	static volatile int16_t x366 = INT16_MIN;
	int8_t x367 = -42;
	volatile int32_t x368 = INT32_MAX;

	t67 = ((x365&x366)/(x367%x368));

	if (t67 != 780) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x369 = 743451U;
	volatile int32_t x370 = -83737;
	int32_t x371 = INT32_MIN;
	static volatile int32_t x372 = INT32_MAX;
	uint32_t t68 = 1U;

	t68 = ((x369&x370)/(x371%x372));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x373 = UINT8_MAX;
	volatile uint16_t x374 = UINT16_MAX;
	int16_t x375 = 1;
	volatile uint32_t x376 = 24755316U;
	volatile uint32_t t69 = 8104U;

	t69 = ((x373&x374)/(x375%x376));

	if (t69 != 255U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x378 = -1;
	int32_t x379 = INT32_MAX;
	static uint16_t x380 = 3886U;
	volatile int32_t t70 = -3047;

	t70 = ((x377&x378)/(x379%x380));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x381 = 83520833LLU;
	static volatile int8_t x382 = -1;
	int16_t x383 = -1;
	static uint64_t x384 = 58LLU;
	volatile uint64_t t71 = 251LLU;

	t71 = ((x381&x382)/(x383%x384));

	if (t71 != 3631340LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x385 = 866381626824506404LLU;
	volatile int64_t x386 = -209702690155LL;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t72 = 620881576753103LLU;

	t72 = ((x385&x386)/(x387%x388));

	if (t72 != 6821900922351648LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 59158U;
	int16_t x395 = INT16_MIN;
	uint64_t t73 = 67837LLU;

	t73 = ((x393&x394)/(x395%x396));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x398 = -1;
	int16_t x399 = -1;
	static volatile int8_t x400 = 19;
	static volatile int64_t t74 = -5829560387LL;

	t74 = ((x397&x398)/(x399%x400));

	if (t74 != 40184LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x401 = UINT16_MAX;
	int8_t x402 = -45;
	uint16_t x404 = 13U;
	int32_t t75 = 153984;

	t75 = ((x401&x402)/(x403%x404));

	if (t75 != 9355) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x405 = INT8_MAX;
	uint8_t x406 = 12U;
	uint64_t x407 = UINT64_MAX;
	static int32_t x408 = INT32_MAX;
	volatile uint64_t t76 = 329680617649099LLU;

	t76 = ((x405&x406)/(x407%x408));

	if (t76 != 4LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x409 = -21;
	int8_t x410 = 1;
	int64_t x411 = -404937360167LL;
	uint64_t t77 = 39551LLU;

	t77 = ((x409&x410)/(x411%x412));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x413 = -1;
	int64_t x416 = 10LL;

	t78 = ((x413&x414)/(x415%x416));

	if (t78 != -14LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x417 = -1;
	static int32_t x418 = INT32_MIN;
	static int32_t x419 = INT32_MAX;
	static int16_t x420 = INT16_MIN;

	t79 = ((x417&x418)/(x419%x420));

	if (t79 != -65538) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x425 = INT32_MIN;
	int8_t x426 = -18;
	uint64_t x428 = 452374369317955408LLU;
	uint64_t t80 = 238100969513LLU;

	t80 = ((x425&x426)/(x427%x428));

	if (t80 != 155014656063546789LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x433 = INT64_MAX;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	static int64_t t81 = -4170955986165LL;

	t81 = ((x433&x434)/(x435%x436));

	if (t81 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = -1;
	int32_t x438 = INT32_MAX;
	uint64_t x440 = 169698453LLU;
	static volatile uint64_t t82 = 248121139313739LLU;

	t82 = ((x437&x438)/(x439%x440));

	if (t82 != 16909320LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x441 = 6;
	uint8_t x442 = 118U;
	static int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MIN;

	t83 = ((x441&x442)/(x443%x444));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x449 = UINT32_MAX;
	uint16_t x450 = 1U;
	int32_t x452 = INT32_MIN;
	volatile uint32_t t84 = 819507U;

	t84 = ((x449&x450)/(x451%x452));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x453 = -29;
	int16_t x454 = -3486;
	static int16_t x455 = -1;
	volatile int32_t t85 = -11992424;

	t85 = ((x453&x454)/(x455%x456));

	if (t85 != 3486) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x461 = 18678584829LL;
	uint8_t x462 = UINT8_MAX;
	uint64_t x463 = 56573707928551115LLU;
	static int32_t x464 = INT32_MIN;

	t86 = ((x461&x462)/(x463%x464));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x465 = INT16_MIN;
	static uint64_t x466 = 16112LLU;
	int16_t x467 = -1;
	int32_t x468 = -54314;

	t87 = ((x465&x466)/(x467%x468));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x471 = INT32_MAX;
	uint64_t x472 = 16113641310071LLU;
	uint64_t t88 = 304858387LLU;

	t88 = ((x469&x470)/(x471%x472));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x479 = INT32_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	volatile int32_t t89 = 62;

	t89 = ((x477&x478)/(x479%x480));

	if (t89 != 16777216) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x489 = 65472234277297306LLU;
	static int64_t x490 = INT64_MIN;
	uint16_t x491 = 743U;
	int8_t x492 = INT8_MAX;
	uint64_t t90 = 2748769619619LLU;

	t90 = ((x489&x490)/(x491%x492));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x493 = -1;
	int8_t x496 = INT8_MIN;
	volatile int32_t t91 = 26;

	t91 = ((x493&x494)/(x495%x496));

	if (t91 != -376) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x498 = UINT8_MAX;
	static uint32_t x500 = UINT32_MAX;
	volatile uint32_t t92 = 1381781U;

	t92 = ((x497&x498)/(x499%x500));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x502 = UINT8_MAX;
	int64_t t93 = -191055439291LL;

	t93 = ((x501&x502)/(x503%x504));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x505 = 86905453LL;
	static int8_t x506 = -1;
	static volatile int8_t x507 = -33;
	int32_t x508 = 66;
	int64_t t94 = 4946LL;

	t94 = ((x505&x506)/(x507%x508));

	if (t94 != -2633498LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x509 = INT64_MIN;
	int64_t x510 = 62527410LL;
	int8_t x511 = INT8_MAX;
	uint32_t x512 = UINT32_MAX;
	int64_t t95 = 1LL;

	t95 = ((x509&x510)/(x511%x512));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x513 = -244;
	static volatile int64_t x514 = INT64_MAX;
	static uint8_t x515 = UINT8_MAX;
	static int16_t x516 = INT16_MIN;
	static volatile int64_t t96 = 54735LL;

	t96 = ((x513&x514)/(x515%x516));

	if (t96 != 36170086419038335LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x517 = -15323;
	uint8_t x519 = UINT8_MAX;
	int32_t t97 = 10919;

	t97 = ((x517&x518)/(x519%x520));

	if (t97 != 39) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x525 = INT16_MAX;
	int8_t x526 = 3;
	uint32_t x527 = 810570023U;
	volatile uint16_t x528 = UINT16_MAX;
	uint32_t t98 = 3U;

	t98 = ((x525&x526)/(x527%x528));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x529 = 3;
	int32_t x530 = INT32_MAX;
	int8_t x532 = -11;

	t99 = ((x529&x530)/(x531%x532));

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

