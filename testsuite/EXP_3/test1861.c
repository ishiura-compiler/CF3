#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = -1LL;
int8_t x10 = -1;
volatile int64_t t2 = 223LL;
static int32_t x15 = INT32_MIN;
int8_t x23 = 3;
static int32_t x29 = 751423;
volatile int8_t x41 = INT8_MIN;
static int32_t x47 = -1;
uint32_t t11 = 202U;
int64_t x62 = 8984942164408626LL;
int16_t x67 = INT16_MIN;
static volatile int64_t x69 = 624LL;
uint16_t x72 = UINT16_MAX;
int8_t x74 = 0;
int8_t x93 = INT8_MIN;
uint8_t x94 = UINT8_MAX;
uint64_t x103 = UINT64_MAX;
int32_t x106 = -1;
static uint8_t x107 = UINT8_MAX;
int64_t x117 = 243411LL;
int64_t x120 = -1LL;
static int16_t x121 = INT16_MIN;
int8_t x122 = 8;
volatile int64_t x124 = INT64_MIN;
volatile int64_t t24 = -1LL;
uint32_t x130 = 351906940U;
int32_t x141 = INT32_MAX;
uint64_t x142 = UINT64_MAX;
int64_t x151 = INT64_MAX;
int32_t x152 = -372528971;
int16_t x154 = INT16_MIN;
uint16_t x159 = 202U;
uint16_t x160 = UINT16_MAX;
int8_t x162 = INT8_MAX;
volatile int8_t x163 = INT8_MAX;
int64_t x173 = -1LL;
static int32_t x176 = -1;
static volatile int32_t t37 = 1;
volatile uint64_t x185 = 12574827462884LLU;
static volatile int8_t x190 = INT8_MIN;
int16_t x192 = -831;
static volatile int16_t x196 = INT16_MAX;
int16_t x207 = -1;
int64_t x213 = 1LL;
volatile int32_t x238 = -348;
volatile int16_t x239 = -6687;
int64_t x243 = -5LL;
int16_t x245 = INT16_MIN;
volatile int64_t t54 = 682625888791867762LL;
uint32_t x265 = 3221U;
int64_t x270 = -1LL;
int8_t x278 = -1;
uint16_t x280 = UINT16_MAX;
int32_t x284 = -1094;
int16_t x285 = INT16_MIN;
uint64_t x286 = UINT64_MAX;
volatile int16_t x287 = -7;
int32_t x290 = 3;
int8_t x291 = INT8_MIN;
int32_t x307 = INT32_MIN;
uint64_t x321 = UINT64_MAX;
int32_t x323 = -1065;
uint64_t x324 = 657277247LLU;
volatile uint64_t t69 = 17003LLU;
int64_t x326 = 1582254657896LL;
volatile int8_t x334 = 0;
static volatile uint8_t x361 = UINT8_MAX;
int64_t x363 = INT64_MIN;
volatile uint64_t t79 = 679993082LLU;
uint32_t x382 = 134U;
volatile int16_t x388 = INT16_MAX;
int8_t x393 = INT8_MAX;
uint32_t x394 = 42361737U;
int16_t x395 = INT16_MIN;
int16_t x397 = 309;
int64_t x407 = INT64_MAX;
volatile int64_t t90 = -4LL;
int8_t x418 = INT8_MIN;
uint64_t x434 = 818833LLU;


void f0(void) {
	static uint64_t x1 = 500LLU;
	int32_t x2 = -1;
	volatile int16_t x3 = -1;
	static int16_t x4 = INT16_MAX;
	uint64_t t0 = 4268808LLU;

	t0 = ((x1+x2)-(x3|x4));

	if (t0 != 500LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	static uint16_t x6 = 18206U;
	uint16_t x7 = 0U;
	int32_t x8 = -2;
	volatile int32_t t1 = -1;

	t1 = ((x5+x6)-(x7|x8));

	if (t1 != 18207) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;

	t2 = ((x9+x10)-(x11|x12));

	if (t2 != 126LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int32_t x16 = -191;
	int32_t t3 = 1;

	t3 = ((x13+x14)-(x15|x16));

	if (t3 != -32578) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -1LL;
	int16_t x22 = INT16_MIN;
	int32_t x24 = -24788;
	int64_t t4 = 67244105LL;

	t4 = ((x21+x22)-(x23|x24));

	if (t4 != -7984LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x30 = 3U;
	int8_t x31 = -1;
	uint8_t x32 = 34U;
	volatile int32_t t5 = 31775186;

	t5 = ((x29+x30)-(x31|x32));

	if (t5 != 751427) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	static volatile int8_t x35 = 1;
	int8_t x36 = INT8_MAX;
	volatile int32_t t6 = 35163;

	t6 = ((x33+x34)-(x35|x36));

	if (t6 != -383) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x42 = -1LL;
	static uint64_t x43 = 1012443LLU;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t7 = 14838775834LLU;

	t7 = ((x41+x42)-(x43|x44));

	if (t7 != 2146471076LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 870U;
	int16_t x46 = INT16_MIN;
	int64_t x48 = INT64_MIN;
	volatile int64_t t8 = 196023052723079LL;

	t8 = ((x45+x46)-(x47|x48));

	if (t8 != -31897LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -1LL;
	int8_t x50 = INT8_MIN;
	static int64_t x51 = INT64_MIN;
	static volatile uint64_t x52 = 4113938534770671048LLU;
	uint64_t t9 = 382068337915LLU;

	t9 = ((x49+x50)-(x51|x52));

	if (t9 != 5109433502084104631LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x53 = 858013397129917LLU;
	int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -100324;
	uint64_t t10 = 126729390893932LLU;

	t10 = ((x53+x54)-(x55|x56));

	if (t10 != 858013397162784LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int32_t x58 = INT32_MIN;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = -1;

	t11 = ((x57+x58)-(x59|x60));

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 1LLU;
	static int64_t x63 = 7LL;
	int32_t x64 = 78243;
	uint64_t t12 = 96341082995LLU;

	t12 = ((x61+x62)-(x63|x64));

	if (t12 != 8984942164330380LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MAX;
	uint32_t x68 = 1U;
	volatile uint64_t t13 = 482LLU;

	t13 = ((x65+x66)-(x67|x68));

	if (t13 != 9223372032559841277LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x70 = 1U;
	int32_t x71 = -1;
	int64_t t14 = 7LL;

	t14 = ((x69+x70)-(x71|x72));

	if (t14 != 626LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -24;
	int16_t x75 = 192;
	static int8_t x76 = INT8_MIN;
	static int32_t t15 = -602614266;

	t15 = ((x73+x74)-(x75|x76));

	if (t15 != 40) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = -1;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t16 = -1201713;

	t16 = ((x77+x78)-(x79|x80));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	volatile uint8_t x82 = 0U;
	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = -1;
	volatile int32_t t17 = 508721872;

	t17 = ((x81+x82)-(x83|x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile uint32_t x90 = 45U;
	uint32_t x91 = 737U;
	volatile int64_t x92 = 944863LL;
	int64_t t18 = -271425817509054LL;

	t18 = ((x89+x90)-(x91|x92));

	if (t18 != 4294022318LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t19 = 104575U;

	t19 = ((x93+x94)-(x95|x96));

	if (t19 != 128U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x97 = UINT32_MAX;
	static int16_t x98 = INT16_MIN;
	volatile uint8_t x99 = 0U;
	volatile int32_t x100 = 4591303;
	uint32_t t20 = 672U;

	t20 = ((x97+x98)-(x99|x100));

	if (t20 != 4290343224U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	static int8_t x102 = INT8_MAX;
	static uint16_t x104 = 1U;
	uint64_t t21 = 3999398546LLU;

	t21 = ((x101+x102)-(x103|x104));

	if (t21 != 32895LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int32_t x108 = -1;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = ((x105+x106)-(x107|x108));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x118 = 3406LL;
	static int16_t x119 = INT16_MAX;
	static volatile int64_t t23 = 177210LL;

	t23 = ((x117+x118)-(x119|x120));

	if (t23 != 246818LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x123 = INT64_MIN;

	t24 = ((x121+x122)-(x123|x124));

	if (t24 != 9223372036854743048LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = INT32_MAX;
	volatile int16_t x131 = INT16_MIN;
	static volatile int8_t x132 = 59;
	uint32_t t25 = 57559U;

	t25 = ((x129+x130)-(x131|x132));

	if (t25 != 2499423296U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MAX;
	static int16_t x134 = -1322;
	uint32_t x135 = 9540U;
	int8_t x136 = -1;
	volatile uint32_t t26 = 0U;

	t26 = ((x133+x134)-(x135|x136));

	if (t26 != 31446U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x137 = -164591848LL;
	volatile int32_t x138 = -10;
	static int8_t x139 = INT8_MAX;
	int32_t x140 = -226026202;
	int64_t t27 = 264LL;

	t27 = ((x137+x138)-(x139|x140));

	if (t27 != 61434255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x143 = INT16_MAX;
	static uint16_t x144 = 9616U;
	uint64_t t28 = 27782425LLU;

	t28 = ((x141+x142)-(x143|x144));

	if (t28 != 2147450879LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x145 = 108U;
	int32_t x146 = -1;
	int32_t x147 = INT32_MAX;
	static uint16_t x148 = 114U;
	volatile int32_t t29 = 15739936;

	t29 = ((x145+x146)-(x147|x148));

	if (t29 != -2147483540) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x149 = INT8_MIN;
	uint8_t x150 = UINT8_MAX;
	static volatile int64_t t30 = -150446418LL;

	t30 = ((x149+x150)-(x151|x152));

	if (t30 != 128LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = 11;
	uint32_t x155 = 529620U;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t31 = 1116522737U;

	t31 = ((x153+x154)-(x155|x156));

	if (t31 != 2146921271U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 3;
	int32_t x158 = 151;
	int32_t t32 = -1;

	t32 = ((x157+x158)-(x159|x160));

	if (t32 != -65381) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x161 = 0;
	uint8_t x164 = UINT8_MAX;
	int32_t t33 = -351870;

	t33 = ((x161+x162)-(x163|x164));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 24U;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = -1;
	static volatile uint8_t x168 = UINT8_MAX;
	static volatile uint32_t t34 = 1709U;

	t34 = ((x165+x166)-(x167|x168));

	if (t34 != 24U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = 1;
	uint8_t x170 = 25U;
	int32_t x171 = -25;
	int8_t x172 = -3;
	int32_t t35 = -1576339;

	t35 = ((x169+x170)-(x171|x172));

	if (t35 != 27) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x174 = INT8_MAX;
	uint32_t x175 = 2128145265U;
	int64_t t36 = -1LL;

	t36 = ((x173+x174)-(x175|x176));

	if (t36 != -4294967169LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 1U;
	volatile int16_t x178 = INT16_MIN;
	uint16_t x179 = 1U;
	int16_t x180 = INT16_MIN;

	t37 = ((x177+x178)-(x179|x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x181 = 2U;
	volatile int8_t x182 = -12;
	static int32_t x183 = INT32_MAX;
	static uint64_t x184 = UINT64_MAX;
	uint64_t t38 = 1968082553618208LLU;

	t38 = ((x181+x182)-(x183|x184));

	if (t38 != 4294967287LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x186 = -1;
	uint8_t x187 = 14U;
	static int32_t x188 = -1;
	uint64_t t39 = 1126947130219489LLU;

	t39 = ((x185+x186)-(x187|x188));

	if (t39 != 12574827462884LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = UINT32_MAX;
	int64_t x191 = -8LL;
	int64_t t40 = 8087LL;

	t40 = ((x189+x190)-(x191|x192));

	if (t40 != 4294967174LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = 10;
	int32_t x194 = 6250;
	volatile int64_t x195 = 177492LL;
	volatile int64_t t41 = 4LL;

	t41 = ((x193+x194)-(x195|x196));

	if (t41 != -190347LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = 9360507U;
	uint64_t t42 = 12LLU;

	t42 = ((x201+x202)-(x203|x204));

	if (t42 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	static volatile int8_t x208 = INT8_MIN;
	int32_t t43 = -165516261;

	t43 = ((x205+x206)-(x207|x208));

	if (t43 != -2147450880) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 35U;
	uint16_t x210 = 23U;
	int32_t x211 = -1;
	int32_t x212 = INT32_MAX;
	volatile int32_t t44 = -689;

	t44 = ((x209+x210)-(x211|x212));

	if (t44 != 59) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x214 = INT32_MAX;
	uint64_t x215 = 8987630507LLU;
	volatile int16_t x216 = 62;
	volatile uint64_t t45 = 9007783483680087LLU;

	t45 = ((x213+x214)-(x215|x216));

	if (t45 != 18446744066869404737LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -1LL;
	uint8_t x218 = 5U;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = INT16_MAX;
	uint64_t t46 = 1LLU;

	t46 = ((x217+x218)-(x219|x220));

	if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x221 = 5LLU;
	int16_t x222 = -1;
	uint64_t x223 = 107129LLU;
	static int8_t x224 = -1;
	volatile uint64_t t47 = 158044049777LLU;

	t47 = ((x221+x222)-(x223|x224));

	if (t47 != 5LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MAX;
	static int32_t x226 = INT32_MIN;
	uint8_t x227 = UINT8_MAX;
	static int16_t x228 = INT16_MAX;
	int64_t t48 = -9122083065LL;

	t48 = ((x225+x226)-(x227|x228));

	if (t48 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 0U;
	uint32_t x236 = 319624U;
	uint32_t t49 = 1281647395U;

	t49 = ((x233+x234)-(x235|x236));

	if (t49 != 4294582136U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = 0;
	int32_t x240 = -72096875;
	volatile int32_t t50 = -23;

	t50 = ((x237+x238)-(x239|x240));

	if (t50 != 5807) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = 1U;
	static uint64_t x242 = 1LLU;
	volatile int16_t x244 = -1;
	static uint64_t t51 = 1LLU;

	t51 = ((x241+x242)-(x243|x244));

	if (t51 != 3LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x246 = INT16_MIN;
	int32_t x247 = 30701530;
	int64_t x248 = -1LL;
	int64_t t52 = -327811LL;

	t52 = ((x245+x246)-(x247|x248));

	if (t52 != -65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = 673;
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 1U;
	uint8_t x252 = 14U;
	volatile uint32_t t53 = 1790890242U;

	t53 = ((x249+x250)-(x251|x252));

	if (t53 != 66193U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x253 = 219U;
	static int16_t x254 = -590;
	int64_t x255 = -1LL;
	volatile int16_t x256 = INT16_MIN;

	t54 = ((x253+x254)-(x255|x256));

	if (t54 != -370LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = 1;
	static int64_t x258 = -1LL;
	int32_t x259 = 1703881;
	int8_t x260 = -1;
	static int64_t t55 = -454325311746LL;

	t55 = ((x257+x258)-(x259|x260));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x261 = 108680415947LL;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = 150;
	int64_t x264 = INT64_MAX;
	uint64_t t56 = 18121541815LLU;

	t56 = ((x261+x262)-(x263|x264));

	if (t56 != 9223372145535191755LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x266 = INT32_MAX;
	uint64_t x267 = 16656856714LLU;
	int16_t x268 = 139;
	uint64_t t57 = 88091582356083005LLU;

	t57 = ((x265+x266)-(x267|x268));

	if (t57 != 18446744059200181769LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x271 = INT32_MAX;
	volatile uint8_t x272 = 22U;
	int64_t t58 = -2LL;

	t58 = ((x269+x270)-(x271|x272));

	if (t58 != -2147483393LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x273 = 0U;
	volatile int8_t x274 = -1;
	volatile int16_t x275 = INT16_MIN;
	static int8_t x276 = INT8_MAX;
	volatile int32_t t59 = 6132541;

	t59 = ((x273+x274)-(x275|x276));

	if (t59 != 32640) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x277 = 622;
	static uint64_t x279 = 11705LLU;
	static uint64_t t60 = 146362172352865425LLU;

	t60 = ((x277+x278)-(x279|x280));

	if (t60 != 18446744073709486702LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = 1;
	int64_t x282 = INT64_MIN;
	volatile int16_t x283 = -1;
	int64_t t61 = 725515LL;

	t61 = ((x281+x282)-(x283|x284));

	if (t61 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x288 = 10;
	uint64_t t62 = 156559458218LLU;

	t62 = ((x285+x286)-(x287|x288));

	if (t62 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = -1;
	int16_t x292 = INT16_MAX;
	static volatile int32_t t63 = -224;

	t63 = ((x289+x290)-(x291|x292));

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x293 = INT16_MIN;
	static int8_t x294 = 30;
	static int64_t x295 = -38685958909LL;
	int8_t x296 = 1;
	int64_t t64 = 663331722LL;

	t64 = ((x293+x294)-(x295|x296));

	if (t64 != 38685926171LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = INT64_MAX;
	int16_t x298 = -1274;
	int64_t x299 = -1LL;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t65 = 7LLU;

	t65 = ((x297+x298)-(x299|x300));

	if (t65 != 9223372036854774534LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t66 = 12;

	t66 = ((x301+x302)-(x303|x304));

	if (t66 != 98047) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = 0;
	volatile int32_t x308 = -1;
	int32_t t67 = -55;

	t67 = ((x305+x306)-(x307|x308));

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x313 = -1;
	volatile int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 0U;
	int32_t t68 = 721935;

	t68 = ((x313+x314)-(x315|x316));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x322 = INT16_MIN;

	t69 = ((x321+x322)-(x323|x324));

	if (t69 != 18446744073709519872LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -2;
	int8_t x327 = INT8_MIN;
	int64_t x328 = -1LL;
	static int64_t t70 = -98LL;

	t70 = ((x325+x326)-(x327|x328));

	if (t70 != 1582254657895LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	static int8_t x330 = -3;
	int16_t x331 = -1;
	volatile int8_t x332 = 1;
	volatile int32_t t71 = 203;

	t71 = ((x329+x330)-(x331|x332));

	if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 43742618U;
	uint32_t t72 = 965183403U;

	t72 = ((x333+x334)-(x335|x336));

	if (t72 != 65637U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x337 = 3005U;
	int32_t x338 = 189;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 1093043854LLU;
	uint64_t t73 = 3581464LLU;

	t73 = ((x337+x338)-(x339|x340));

	if (t73 != 3308LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x341 = 6U;
	static uint8_t x342 = UINT8_MAX;
	static uint16_t x343 = UINT16_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t74 = 35530009;

	t74 = ((x341+x342)-(x343|x344));

	if (t74 != -65274) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x345 = 603731U;
	static int8_t x346 = 1;
	static volatile int16_t x347 = INT16_MIN;
	static int16_t x348 = INT16_MIN;
	uint32_t t75 = 44482U;

	t75 = ((x345+x346)-(x347|x348));

	if (t75 != 636500U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x350 = 162839330LL;
	int64_t x351 = -59888286973984270LL;
	int32_t x352 = INT32_MAX;
	int64_t t76 = -255075469668496326LL;

	t76 = ((x349+x350)-(x351|x352));

	if (t76 != 59888289698855714LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x353 = INT16_MIN;
	static uint64_t x354 = 2473016LLU;
	volatile uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MIN;
	uint64_t t77 = 8535924527923LLU;

	t77 = ((x353+x354)-(x355|x356));

	if (t77 != 9223372036857150521LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x362 = INT16_MIN;
	volatile int16_t x364 = -1;
	volatile int64_t t78 = 1601LL;

	t78 = ((x361+x362)-(x363|x364));

	if (t78 != -32512LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = 7506193LLU;
	volatile int8_t x366 = INT8_MAX;
	uint64_t x367 = 10821807650498770LLU;
	static int32_t x368 = 21;

	t79 = ((x365+x366)-(x367|x368));

	if (t79 != 18435922266066559161LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = 8342187;
	int16_t x370 = -1;
	int8_t x371 = INT8_MAX;
	static volatile uint32_t x372 = 17U;
	uint32_t t80 = 5384U;

	t80 = ((x369+x370)-(x371|x372));

	if (t80 != 8342059U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = 75;
	volatile uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	int8_t x376 = 1;
	volatile uint64_t t81 = 742LLU;

	t81 = ((x373+x374)-(x375|x376));

	if (t81 != 75LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = 481;
	static int32_t t82 = 2;

	t82 = ((x377+x378)-(x379|x380));

	if (t82 != 32158) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = 750;
	static uint8_t x383 = 106U;
	int64_t x384 = -1LL;
	int64_t t83 = -13927782433LL;

	t83 = ((x381+x382)-(x383|x384));

	if (t83 != 885LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 14721U;
	volatile uint64_t x386 = 762681690LLU;
	static int32_t x387 = INT32_MIN;
	uint64_t t84 = 531478140674676LLU;

	t84 = ((x385+x386)-(x387|x388));

	if (t84 != 2910147292LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x389 = 4767703709LL;
	int64_t x390 = -1LL;
	volatile int32_t x391 = -1;
	int16_t x392 = 0;
	int64_t t85 = 530032LL;

	t85 = ((x389+x390)-(x391|x392));

	if (t85 != 4767703709LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x396 = INT32_MIN;
	volatile uint32_t t86 = 842739879U;

	t86 = ((x393+x394)-(x395|x396));

	if (t86 != 42394632U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x398 = UINT16_MAX;
	volatile int16_t x399 = -1;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t87 = -118649097;

	t87 = ((x397+x398)-(x399|x400));

	if (t87 != 65845) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MAX;
	int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = INT8_MIN;
	uint64_t t88 = 166305934755326783LLU;

	t88 = ((x401+x402)-(x403|x404));

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = -2;
	uint64_t x406 = UINT64_MAX;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t89 = 6007741244877453367LLU;

	t89 = ((x405+x406)-(x407|x408));

	if (t89 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = -118LL;
	int8_t x410 = -1;
	uint8_t x411 = 59U;
	static int64_t x412 = -1LL;

	t90 = ((x409+x410)-(x411|x412));

	if (t90 != -118LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = 29U;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = 1LL;
	int8_t x416 = -1;
	int64_t t91 = -223319575266669LL;

	t91 = ((x413+x414)-(x415|x416));

	if (t91 != 65565LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x417 = 22U;
	int32_t x419 = -217826419;
	static uint64_t x420 = 2469563LLU;
	uint64_t t92 = 123660292LLU;

	t92 = ((x417+x418)-(x419|x420));

	if (t92 != 215629783LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x421 = 1U;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MAX;
	int16_t x424 = -889;
	volatile int64_t t93 = 1LL;

	t93 = ((x421+x422)-(x423|x424));

	if (t93 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = -76082;
	static volatile uint32_t x426 = UINT32_MAX;
	static uint16_t x427 = 1U;
	volatile uint64_t x428 = UINT64_MAX;
	uint64_t t94 = 1370895787140LLU;

	t94 = ((x425+x426)-(x427|x428));

	if (t94 != 4294891214LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 61343LLU;
	uint16_t x430 = 2702U;
	uint8_t x431 = UINT8_MAX;
	uint32_t x432 = 2244U;
	uint64_t t95 = 2906LLU;

	t95 = ((x429+x430)-(x431|x432));

	if (t95 != 61742LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x433 = INT8_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	uint32_t x436 = 238246405U;
	volatile uint64_t t96 = 75544735LLU;

	t96 = ((x433+x434)-(x435|x436));

	if (t96 != 818961LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x437 = 1;
	static uint16_t x438 = 18U;
	int32_t x439 = 44030;
	volatile int8_t x440 = INT8_MIN;
	int32_t t97 = 39959;

	t97 = ((x437+x438)-(x439|x440));

	if (t97 != 21) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = 34;
	int32_t x442 = INT32_MIN;
	volatile int8_t x443 = 3;
	static int16_t x444 = INT16_MIN;
	static volatile int32_t t98 = -79;

	t98 = ((x441+x442)-(x443|x444));

	if (t98 != -2147450849) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = -474;
	uint8_t x446 = 30U;
	int32_t x447 = INT32_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t99 = -26075;

	t99 = ((x445+x446)-(x447|x448));

	if (t99 != 2147417669) { NG(); } else { ; }
	
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

