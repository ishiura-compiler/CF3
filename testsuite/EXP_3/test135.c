#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 6109121580LLU;
int64_t x8 = -1LL;
static volatile uint64_t t1 = 435348LLU;
uint16_t x13 = UINT16_MAX;
int16_t x26 = INT16_MIN;
volatile int64_t x30 = -1LL;
int64_t t7 = 39LL;
static int64_t t8 = 1414LL;
static int8_t x49 = INT8_MIN;
int8_t x50 = INT8_MAX;
int16_t x53 = INT16_MAX;
int32_t t11 = -378951;
uint32_t x63 = 6235500U;
int32_t x66 = INT32_MIN;
uint32_t x68 = UINT32_MAX;
uint16_t x72 = 869U;
volatile uint8_t x73 = 3U;
volatile uint64_t x83 = UINT64_MAX;
uint64_t t16 = 337669451885991LLU;
uint16_t x86 = UINT16_MAX;
int8_t x87 = -1;
int8_t x88 = INT8_MAX;
int8_t x96 = INT8_MIN;
int64_t x106 = INT64_MAX;
int8_t x110 = INT8_MIN;
uint32_t x114 = 11U;
int8_t x115 = -5;
int64_t x119 = INT64_MIN;
volatile int16_t x124 = -65;
int64_t x126 = -2407LL;
volatile int64_t t26 = -2242558169462934781LL;
uint64_t x130 = 2307058LLU;
uint64_t t28 = 310902528296LLU;
uint64_t x144 = 1001801409LLU;
volatile uint32_t t31 = 14U;
volatile int64_t x154 = -1LL;
int16_t x156 = -612;
int8_t x158 = -1;
int8_t x161 = INT8_MIN;
volatile int32_t t34 = 57501478;
uint64_t x168 = 1LLU;
uint64_t t36 = 842347LLU;
uint8_t x179 = UINT8_MAX;
static volatile int16_t x180 = INT16_MIN;
volatile int64_t t38 = -2LL;
static int64_t x190 = INT64_MAX;
uint64_t x193 = 11017332555LLU;
volatile uint64_t t42 = 140728LLU;
static int16_t x205 = INT16_MIN;
volatile uint16_t x213 = 12U;
volatile int64_t t46 = 85996241066LL;
static volatile int32_t x222 = INT32_MIN;
volatile int8_t x223 = INT8_MAX;
int64_t x225 = -10413819558LL;
int64_t x227 = -184LL;
int8_t x228 = 5;
volatile int64_t t49 = 39348783486517LL;
uint16_t x229 = UINT16_MAX;
uint64_t x234 = 20719971647585592LLU;
int16_t x236 = INT16_MIN;
static uint32_t t54 = 5981927U;
int16_t x253 = -56;
uint16_t x267 = UINT16_MAX;
int64_t x268 = INT64_MIN;
int64_t t57 = 793LL;
int8_t x272 = -1;
int8_t x284 = INT8_MIN;
uint64_t x287 = UINT64_MAX;
uint64_t x292 = 1129LLU;
int32_t x295 = INT32_MIN;
uint64_t x309 = UINT64_MAX;
static uint8_t x310 = 96U;
uint8_t x313 = 31U;
uint8_t x324 = 127U;
uint32_t x328 = UINT32_MAX;
uint32_t x335 = 1496148U;
uint32_t x336 = 221192225U;
static uint8_t x343 = 12U;
static volatile int32_t t76 = -40;
volatile uint32_t x360 = 56461300U;
uint16_t x363 = 2U;
int64_t x378 = INT64_MAX;
int8_t x387 = -2;
int32_t t84 = -117988;
uint32_t x391 = UINT32_MAX;
static int8_t x397 = INT8_MIN;
static int64_t x407 = -20645297LL;
static volatile int32_t x416 = INT32_MAX;
uint32_t t90 = 1879416U;
volatile int16_t x425 = INT16_MIN;
uint64_t x437 = UINT64_MAX;
volatile int32_t x440 = -37;
uint16_t x441 = UINT16_MAX;
uint64_t t95 = 937994093LLU;
static int64_t t96 = -5LL;
static uint16_t x453 = UINT16_MAX;
volatile uint32_t x458 = 1748U;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MAX;
	static int16_t x3 = 0;
	static uint64_t x4 = 6340538716358551LLU;
	static volatile uint64_t t0 = 96599583LLU;

	t0 = ((x1&x2)%(x3+x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint32_t x7 = 683923U;

	t1 = ((x5&x6)%(x7+x8));

	if (t1 != 330276LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -1;
	int16_t x15 = -1;
	static volatile uint8_t x16 = 11U;
	int32_t t2 = -1207;

	t2 = ((x13&x14)%(x15+x16));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MAX;
	int8_t x18 = -1;
	uint8_t x19 = 14U;
	volatile int64_t x20 = 0LL;
	volatile int64_t t3 = -9134LL;

	t3 = ((x17&x18)%(x19+x20));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 19;
	int32_t x27 = -209;
	int16_t x28 = INT16_MIN;
	int32_t t4 = 449;

	t4 = ((x25&x26)%(x27+x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 1106;
	volatile uint64_t x31 = 1640LLU;
	uint32_t x32 = 755734261U;
	volatile uint64_t t5 = 38761202991660LLU;

	t5 = ((x29&x30)%(x31+x32));

	if (t5 != 1106LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x34 = INT32_MAX;
	int64_t x35 = -1LL;
	volatile int32_t x36 = INT32_MIN;
	volatile uint64_t t6 = 107019808010783319LLU;

	t6 = ((x33&x34)%(x35+x36));

	if (t6 != 2147483647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -35;
	static int16_t x38 = -1;
	static int64_t x39 = 14355883904LL;
	int64_t x40 = -1LL;

	t7 = ((x37&x38)%(x39+x40));

	if (t7 != -35LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -367660205013379312LL;
	static int32_t x46 = INT32_MIN;
	volatile int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MAX;

	t8 = ((x45&x46)%(x47+x48));

	if (t8 != -102LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x51 = -16868;
	uint32_t x52 = 461U;
	uint32_t t9 = 8U;

	t9 = ((x49&x50)%(x51+x52));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x54 = 5U;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	volatile int64_t t10 = -552LL;

	t10 = ((x53&x54)%(x55+x56));

	if (t10 != 5LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = INT16_MIN;
	uint8_t x58 = 26U;
	volatile int16_t x59 = -1;
	int8_t x60 = INT8_MIN;

	t11 = ((x57&x58)%(x59+x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = -1LL;
	static volatile int32_t x62 = -1;
	int64_t x64 = INT64_MIN;
	int64_t t12 = -34539292LL;

	t12 = ((x61&x62)%(x63+x64));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	int8_t x67 = -1;
	int64_t t13 = -18LL;

	t13 = ((x65&x66)%(x67+x68));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = -3;
	static uint32_t x71 = UINT32_MAX;
	static volatile uint32_t t14 = 4883901U;

	t14 = ((x69&x70)%(x71+x72));

	if (t14 != 220U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = -1LL;
	static int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t15 = 3220031874722116355LLU;

	t15 = ((x73&x74)%(x75+x76));

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = 3247U;
	int32_t x84 = INT32_MAX;

	t16 = ((x81&x82)%(x83+x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MAX;
	volatile int32_t t17 = 1044;

	t17 = ((x85&x86)%(x87+x88));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -11;
	int32_t x90 = INT32_MIN;
	uint8_t x91 = 39U;
	int64_t x92 = INT64_MIN;
	volatile int64_t t18 = 990792487540216374LL;

	t18 = ((x89&x90)%(x91+x92));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = UINT8_MAX;
	volatile int32_t t19 = 8173;

	t19 = ((x93&x94)%(x95+x96));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	volatile int64_t x99 = -1914500289LL;
	int32_t x100 = INT32_MIN;
	int64_t t20 = -72692973828LL;

	t20 = ((x97&x98)%(x99+x100));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = -1;
	volatile int64_t x107 = 8LL;
	int32_t x108 = 6;
	static volatile int64_t t21 = 152885498LL;

	t21 = ((x105&x106)%(x107+x108));

	if (t21 != 7LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x111 = INT8_MAX;
	uint32_t x112 = 22482812U;
	uint32_t t22 = 223058102U;

	t22 = ((x109&x110)%(x111+x112));

	if (t22 != 725819U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 0LL;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t23 = 880153414995209LLU;

	t23 = ((x113&x114)%(x115+x116));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -1;
	volatile uint64_t x118 = 246101353443LLU;
	int8_t x120 = INT8_MAX;
	uint64_t t24 = 20749950648162LLU;

	t24 = ((x117&x118)%(x119+x120));

	if (t24 != 246101353443LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x121 = -1;
	int32_t x122 = INT32_MIN;
	static uint32_t x123 = 108U;
	volatile uint32_t t25 = 238400U;

	t25 = ((x121&x122)%(x123+x124));

	if (t25 != 8U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = UINT8_MAX;

	t26 = ((x125&x126)%(x127+x128));

	if (t26 != 223LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x129 = INT8_MIN;
	int16_t x131 = INT16_MIN;
	uint8_t x132 = 105U;
	uint64_t t27 = 404417553LLU;

	t27 = ((x129&x130)%(x131+x132));

	if (t27 != 2306944LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -3125482935823LL;
	volatile uint64_t x134 = 32454732828183049LLU;
	uint16_t x135 = UINT16_MAX;
	uint64_t x136 = UINT64_MAX;

	t28 = ((x133&x134)%(x135+x136));

	if (t28 != 49469LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x141 = INT32_MAX;
	static int64_t x142 = INT64_MIN;
	int32_t x143 = -1;
	volatile uint64_t t29 = 134626785066724029LLU;

	t29 = ((x141&x142)%(x143+x144));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = INT16_MAX;
	int8_t x146 = 10;
	volatile int64_t x147 = -1LL;
	int64_t x148 = 1186LL;
	int64_t t30 = -67121555801011LL;

	t30 = ((x145&x146)%(x147+x148));

	if (t30 != 10LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x150 = -1;
	uint32_t x151 = 8039654U;
	int16_t x152 = INT16_MIN;

	t31 = ((x149&x150)%(x151+x152));

	if (t31 != 255U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x155 = INT8_MIN;
	static int64_t t32 = 285404373LL;

	t32 = ((x153&x154)%(x155+x156));

	if (t32 != 635LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = 22296427864997LLU;
	uint64_t t33 = 125414336LLU;

	t33 = ((x157&x158)%(x159+x160));

	if (t33 != 17470993210755LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;

	t34 = ((x161&x162)%(x163+x164));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MAX;
	static int8_t x167 = INT8_MAX;
	volatile uint64_t t35 = 402383484LLU;

	t35 = ((x165&x166)%(x167+x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 74U;
	uint64_t x170 = UINT64_MAX;
	int32_t x171 = 2609;
	int32_t x172 = 614821;

	t36 = ((x169&x170)%(x171+x172));

	if (t36 != 74LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MAX;
	volatile int32_t x174 = -1;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MAX;
	int32_t t37 = -1953666;

	t37 = ((x173&x174)%(x175+x176));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MAX;
	int64_t x178 = -1LL;

	t38 = ((x177&x178)%(x179+x180));

	if (t38 != 254LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MAX;
	uint16_t x182 = 5171U;
	int16_t x183 = 0;
	uint64_t x184 = UINT64_MAX;
	uint64_t t39 = 74478LLU;

	t39 = ((x181&x182)%(x183+x184));

	if (t39 != 5171LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 771840229395949390LLU;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t40 = 2492060201575LLU;

	t40 = ((x185&x186)%(x187+x188));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = 3U;
	int8_t x191 = 30;
	static int32_t x192 = INT32_MIN;
	static volatile int64_t t41 = 38769953LL;

	t41 = ((x189&x190)%(x191+x192));

	if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x194 = INT8_MIN;
	static int32_t x195 = 1;
	static uint8_t x196 = 11U;

	t42 = ((x193&x194)%(x195+x196));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = 43384361U;
	uint16_t x203 = 15361U;
	uint32_t x204 = 3U;
	static volatile uint32_t t43 = 1906360U;

	t43 = ((x201&x202)%(x203+x204));

	if (t43 != 10220U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x206 = 6;
	static uint16_t x207 = 0U;
	int64_t x208 = -23388976105638LL;
	int64_t t44 = 194LL;

	t44 = ((x205&x206)%(x207+x208));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x209 = INT32_MAX;
	int64_t x210 = INT64_MAX;
	int16_t x211 = INT16_MIN;
	volatile int64_t x212 = 4976795LL;
	static int64_t t45 = 537039062LL;

	t45 = ((x209&x210)%(x211+x212));

	if (t45 != 1775929LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x214 = -4LL;
	uint16_t x215 = 1641U;
	int64_t x216 = INT64_MIN;

	t46 = ((x213&x214)%(x215+x216));

	if (t46 != 12LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -1;
	volatile int8_t x218 = -3;
	uint16_t x219 = 8U;
	int16_t x220 = INT16_MIN;
	int32_t t47 = -1;

	t47 = ((x217&x218)%(x219+x220));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x221 = UINT8_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t48 = 39LLU;

	t48 = ((x221&x222)%(x223+x224));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x226 = -1;

	t49 = ((x225&x226)%(x227+x228));

	if (t49 != -160LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x230 = 30;
	int16_t x231 = 3164;
	static uint64_t x232 = 403471LLU;
	static volatile uint64_t t50 = 29824627657854LLU;

	t50 = ((x229&x230)%(x231+x232));

	if (t50 != 30LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x233 = UINT8_MAX;
	volatile int32_t x235 = INT32_MAX;
	uint64_t t51 = 1989740220907437080LLU;

	t51 = ((x233&x234)%(x235+x236));

	if (t51 != 56LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x237 = 2U;
	static int64_t x238 = INT64_MIN;
	static int64_t x239 = INT64_MAX;
	uint64_t x240 = UINT64_MAX;
	uint64_t t52 = 590LLU;

	t52 = ((x237&x238)%(x239+x240));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 127U;
	int32_t x242 = INT32_MIN;
	volatile int64_t x243 = -1LL;
	int64_t x244 = INT64_MAX;
	int64_t t53 = -27993470958LL;

	t53 = ((x241&x242)%(x243+x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x245 = 24U;
	int16_t x246 = 1;
	uint32_t x247 = UINT32_MAX;
	static int16_t x248 = INT16_MAX;

	t54 = ((x245&x246)%(x247+x248));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 0U;
	uint32_t x256 = UINT32_MAX;
	static uint32_t t55 = 2U;

	t55 = ((x253&x254)%(x255+x256));

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = -1LL;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = 103U;
	uint16_t x264 = UINT16_MAX;
	static int64_t t56 = -172238494944747590LL;

	t56 = ((x261&x262)%(x263+x264));

	if (t56 != -5202LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x265 = -1;
	uint8_t x266 = UINT8_MAX;

	t57 = ((x265&x266)%(x267+x268));

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x269 = INT64_MIN;
	uint64_t x270 = 621799LLU;
	uint16_t x271 = UINT16_MAX;
	volatile uint64_t t58 = 24780LLU;

	t58 = ((x269&x270)%(x271+x272));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x281 = -62;
	int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	int32_t t59 = -76553675;

	t59 = ((x281&x282)%(x283+x284));

	if (t59 != -41024) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	uint64_t t60 = 3LLU;

	t60 = ((x285&x286)%(x287+x288));

	if (t60 != 2147450894LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = 27080455LL;
	int32_t x290 = -5871;
	volatile uint32_t x291 = 253879U;
	volatile uint64_t t61 = 301287902382LLU;

	t61 = ((x289&x290)%(x291+x292));

	if (t61 != 43969LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = -12310023791614LL;
	static int32_t x294 = INT32_MIN;
	uint8_t x296 = 19U;
	static int64_t t62 = -1738LL;

	t62 = ((x293&x294)%(x295+x296));

	if (t62 != -108927LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 5U;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = -1LL;
	volatile uint16_t x304 = 5509U;
	int64_t t63 = -34974LL;

	t63 = ((x301&x302)%(x303+x304));

	if (t63 != 5LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 4582580136LLU;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t64 = 6940778002911596344LLU;

	t64 = ((x305&x306)%(x307+x308));

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x311 = UINT8_MAX;
	static uint16_t x312 = 0U;
	uint64_t t65 = 277037840830391391LLU;

	t65 = ((x309&x310)%(x311+x312));

	if (t65 != 96LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x314 = INT8_MIN;
	int8_t x315 = -10;
	uint16_t x316 = 362U;
	volatile int32_t t66 = 641;

	t66 = ((x313&x314)%(x315+x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x317 = -1LL;
	volatile uint32_t x318 = 255193006U;
	int32_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile int64_t t67 = -61451LL;

	t67 = ((x317&x318)%(x319+x320));

	if (t67 != 11398LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x321 = 44U;
	volatile uint8_t x322 = 17U;
	static volatile int8_t x323 = -1;
	volatile int32_t t68 = 3;

	t68 = ((x321&x322)%(x323+x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = 17;
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	volatile uint64_t t69 = 1733LLU;

	t69 = ((x325&x326)%(x327+x328));

	if (t69 != 17LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MIN;
	static uint16_t x330 = 1059U;
	volatile int16_t x331 = 2794;
	uint32_t x332 = 10U;
	uint32_t t70 = 13707562U;

	t70 = ((x329&x330)%(x331+x332));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x333 = UINT64_MAX;
	uint16_t x334 = UINT16_MAX;
	volatile uint64_t t71 = 10962722981314808LLU;

	t71 = ((x333&x334)%(x335+x336));

	if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	int32_t x339 = 29;
	static uint32_t x340 = 1810U;
	static uint32_t t72 = 75260U;

	t72 = ((x337&x338)%(x339+x340));

	if (t72 != 1520U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = UINT64_MAX;
	uint32_t x342 = 277415284U;
	int64_t x344 = -61296LL;
	uint64_t t73 = 218324163157LLU;

	t73 = ((x341&x342)%(x343+x344));

	if (t73 != 277415284LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t74 = 22952274;

	t74 = ((x345&x346)%(x347+x348));

	if (t74 != 32510) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x349 = INT64_MIN;
	int64_t x350 = -1317173LL;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 15LLU;
	volatile uint64_t t75 = 178042523248LLU;

	t75 = ((x349&x350)%(x351+x352));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = -765;
	int8_t x356 = INT8_MIN;

	t76 = ((x353&x354)%(x355+x356));

	if (t76 != -620) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x357 = 3U;
	int8_t x358 = -30;
	volatile uint32_t x359 = UINT32_MAX;
	static uint32_t t77 = 1769U;

	t77 = ((x357&x358)%(x359+x360));

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = 0;
	uint8_t x362 = 0U;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t78 = 3254;

	t78 = ((x361&x362)%(x363+x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x365 = INT32_MAX;
	static int32_t x366 = INT32_MIN;
	int8_t x367 = -1;
	int8_t x368 = INT8_MAX;
	volatile int32_t t79 = 1158181;

	t79 = ((x365&x366)%(x367+x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = 7838;
	uint64_t x370 = 16394490LLU;
	volatile int16_t x371 = -23;
	static int16_t x372 = 22;
	static volatile uint64_t t80 = 60299LLU;

	t80 = ((x369&x370)%(x371+x372));

	if (t80 != 2202LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = -1;
	uint32_t x374 = 836592U;
	int16_t x375 = -9;
	uint32_t x376 = 3U;
	uint32_t t81 = 148U;

	t81 = ((x373&x374)%(x375+x376));

	if (t81 != 836592U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = 896453LL;
	static volatile int8_t x379 = INT8_MIN;
	uint8_t x380 = UINT8_MAX;
	static volatile int64_t t82 = -42621LL;

	t82 = ((x377&x378)%(x379+x380));

	if (t82 != 87LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x381 = 59LLU;
	static uint64_t x382 = UINT64_MAX;
	uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 21436986LLU;
	uint64_t t83 = 31180558LLU;

	t83 = ((x381&x382)%(x383+x384));

	if (t83 != 59LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x385 = -1;
	static int8_t x386 = -1;
	static int8_t x388 = 0;

	t84 = ((x385&x386)%(x387+x388));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 30216U;
	int16_t x392 = INT16_MAX;
	uint32_t t85 = 9354U;

	t85 = ((x389&x390)%(x391+x392));

	if (t85 != 30216U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = -3;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 0U;
	volatile int32_t t86 = 43259;

	t86 = ((x393&x394)%(x395+x396));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x398 = INT8_MAX;
	int64_t x399 = 25LL;
	int16_t x400 = -1;
	static int64_t t87 = -1LL;

	t87 = ((x397&x398)%(x399+x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x405 = 1;
	static int8_t x406 = INT8_MIN;
	static int8_t x408 = 7;
	int64_t t88 = -556LL;

	t88 = ((x405&x406)%(x407+x408));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = INT8_MIN;
	static volatile int16_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int32_t t89 = 1;

	t89 = ((x413&x414)%(x415+x416));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x417 = INT16_MIN;
	volatile int32_t x418 = INT32_MAX;
	uint32_t x419 = 517774127U;
	volatile int8_t x420 = 2;

	t90 = ((x417&x418)%(x419+x420));

	if (t90 != 76354364U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x421 = UINT8_MAX;
	uint16_t x422 = 554U;
	static int16_t x423 = INT16_MIN;
	volatile uint64_t x424 = UINT64_MAX;
	uint64_t t91 = 1224LLU;

	t91 = ((x421&x422)%(x423+x424));

	if (t91 != 42LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x426 = INT16_MIN;
	static volatile int64_t x427 = INT64_MIN;
	volatile uint16_t x428 = 2375U;
	int64_t t92 = -12960880LL;

	t92 = ((x425&x426)%(x427+x428));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x433 = 6857037984LLU;
	int64_t x434 = INT64_MIN;
	uint32_t x435 = UINT32_MAX;
	static volatile int64_t x436 = 1469225805859404LL;
	static uint64_t t93 = 3269LLU;

	t93 = ((x433&x434)%(x435+x436));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x438 = 0;
	uint32_t x439 = 47769217U;
	volatile uint64_t t94 = 8899901444072LLU;

	t94 = ((x437&x438)%(x439+x440));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x442 = 0U;
	int8_t x443 = -1;
	volatile uint64_t x444 = 4774319LLU;

	t95 = ((x441&x442)%(x443+x444));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = -1047517837;
	int64_t x446 = INT64_MIN;
	uint8_t x447 = 44U;
	int16_t x448 = INT16_MIN;

	t96 = ((x445&x446)%(x447+x448));

	if (t96 != -9584LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x454 = INT32_MIN;
	volatile uint64_t x455 = 142259657021LLU;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t97 = 8655161LLU;

	t97 = ((x453&x454)%(x455+x456));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = INT32_MIN;
	int64_t x459 = -1LL;
	uint32_t x460 = 15403982U;
	int64_t t98 = 55410491983454LL;

	t98 = ((x457&x458)%(x459+x460));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = INT64_MIN;
	int64_t x462 = INT64_MAX;
	static uint16_t x463 = 1764U;
	static int64_t x464 = -3256503LL;
	int64_t t99 = 536358LL;

	t99 = ((x461&x462)%(x463+x464));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

