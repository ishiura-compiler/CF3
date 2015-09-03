#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x15 = -1LL;
volatile int64_t t3 = 0LL;
volatile uint64_t t6 = 98694918LLU;
int16_t x36 = 13;
volatile int32_t t7 = -20;
uint32_t t9 = 1722322U;
int32_t x58 = INT32_MAX;
volatile int8_t x60 = INT8_MIN;
uint32_t t11 = 781U;
volatile int32_t x69 = 1114;
int16_t x71 = INT16_MIN;
static volatile uint64_t t14 = 6358387805LLU;
int64_t x86 = INT64_MIN;
volatile int64_t t15 = -41800636331LL;
volatile uint32_t x92 = 1U;
volatile int64_t x95 = -1LL;
uint16_t x97 = 31002U;
uint8_t x98 = 68U;
uint64_t t19 = 1371574LLU;
volatile int16_t x105 = 3;
static volatile int64_t x106 = 852945256367219580LL;
volatile uint32_t t21 = 1478U;
volatile uint64_t t22 = 4536994510LLU;
static int64_t x130 = INT64_MIN;
int16_t x132 = INT16_MIN;
volatile int64_t t25 = 7469757574490LL;
int16_t x156 = -1;
volatile int64_t x159 = -1LL;
static uint32_t x163 = 0U;
static volatile int32_t x172 = -1;
int16_t x174 = 14;
volatile uint16_t x175 = UINT16_MAX;
volatile int16_t x177 = INT16_MIN;
int64_t x179 = -30285767444960LL;
volatile uint64_t x184 = 7606964LLU;
static uint16_t x185 = 22441U;
int64_t x190 = 964611308LL;
volatile int64_t t38 = -7LL;
uint64_t x218 = UINT64_MAX;
volatile uint64_t t43 = 402835154436968LLU;
volatile int16_t x233 = -1;
static uint8_t x241 = UINT8_MAX;
static int16_t x252 = INT16_MIN;
int8_t x254 = -47;
int8_t x255 = INT8_MAX;
int16_t x256 = 12;
int16_t x263 = INT16_MIN;
uint32_t x265 = 4391U;
int32_t x269 = -9945381;
volatile int8_t x275 = -1;
static int8_t x276 = 2;
volatile uint64_t t54 = 88096743560856LLU;
static volatile int32_t t55 = 383;
int64_t x287 = -269LL;
volatile uint16_t x292 = UINT16_MAX;
int32_t x297 = 1;
int64_t x298 = INT64_MAX;
uint32_t x308 = UINT32_MAX;
uint32_t x310 = UINT32_MAX;
static uint32_t t60 = 1077116395U;
int16_t x313 = -10693;
static volatile int64_t x315 = -679904287LL;
int32_t t62 = -87992;
volatile int8_t x326 = INT8_MIN;
int8_t x330 = 28;
int8_t x334 = -27;
int32_t x335 = INT32_MIN;
int8_t x336 = 0;
uint8_t x348 = 23U;
uint8_t x355 = 10U;
uint32_t x357 = 12215U;
static int64_t x363 = INT64_MAX;
volatile int32_t x364 = INT32_MAX;
volatile int32_t x366 = -1;
int32_t t72 = -27896169;
int64_t x379 = -1LL;
static uint8_t x381 = 14U;
int64_t x387 = INT64_MIN;
volatile int32_t x389 = 21217;
uint8_t x392 = UINT8_MAX;
uint64_t x394 = 30252LLU;
uint64_t x404 = 78268006LLU;
static int8_t x406 = INT8_MAX;
volatile int64_t x407 = -1LL;
static uint64_t t81 = 75226198340438026LLU;
int8_t x423 = INT8_MIN;
int16_t x433 = INT16_MIN;
static uint16_t x442 = UINT16_MAX;
int8_t x460 = -1;
volatile int32_t t88 = 1398123;
static volatile uint8_t x462 = 15U;
uint8_t x471 = 107U;
static int8_t x473 = -1;
static volatile uint64_t t91 = 548205063686681LLU;
uint32_t t92 = 7402489U;
int32_t x487 = INT32_MIN;
uint32_t t93 = 155U;
static int16_t x492 = INT16_MIN;
uint8_t x498 = UINT8_MAX;
volatile int64_t t96 = -75691623LL;
static uint64_t t97 = 48474459093756LLU;
int32_t t98 = -128968;
int32_t t99 = -834502;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	volatile uint64_t x4 = 3LLU;
	volatile uint64_t t0 = 896428336906298876LLU;

	t0 = ((x1*x2)&(x3&x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x6 = -7;
	int32_t x7 = INT32_MIN;
	static uint8_t x8 = 2U;
	uint64_t t1 = 17651293015418411LLU;

	t1 = ((x5*x6)&(x7&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 57U;
	int32_t x10 = INT32_MAX;
	static int8_t x11 = -1;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 143882039750982869LLU;

	t2 = ((x9*x10)&(x11&x12));

	if (t2 != 2147483591LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -127;
	int16_t x14 = INT16_MIN;
	uint8_t x16 = 29U;

	t3 = ((x13*x14)&(x15&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	volatile uint8_t x19 = UINT8_MAX;
	static int64_t x20 = INT64_MAX;
	int64_t t4 = -13806787244259405LL;

	t4 = ((x17*x18)&(x19&x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 82100217;
	static volatile uint16_t x22 = 3U;
	static int8_t x23 = INT8_MIN;
	static volatile int64_t x24 = INT64_MAX;
	static volatile int64_t t5 = -247207435766529261LL;

	t5 = ((x21*x22)&(x23&x24));

	if (t5 != 246300544LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 30154479163759485LLU;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = 40U;
	int16_t x32 = -1;

	t6 = ((x29*x30)&(x31&x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 3U;
	int32_t x34 = 7445386;
	int8_t x35 = -1;

	t7 = ((x33*x34)&(x35&x36));

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 3U;
	int16_t x42 = INT16_MAX;
	uint16_t x43 = 4275U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t8 = 22255;

	t8 = ((x41*x42)&(x43&x44));

	if (t8 != 177) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MAX;
	volatile int8_t x50 = -1;
	uint32_t x51 = 157341U;
	int16_t x52 = INT16_MAX;

	t9 = ((x49*x50)&(x51&x52));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int32_t x59 = -1;
	volatile uint64_t t10 = 53876698092LLU;

	t10 = ((x57*x58)&(x59&x60));

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MAX;
	static volatile int32_t x63 = 16406;
	int8_t x64 = INT8_MIN;

	t11 = ((x61*x62)&(x63&x64));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 199256461132253LLU;
	int64_t x66 = 255410049774138390LL;
	uint8_t x67 = 6U;
	static volatile uint8_t x68 = 2U;
	uint64_t t12 = 100185947627776327LLU;

	t12 = ((x65*x66)&(x67&x68));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x70 = INT16_MAX;
	static int64_t x72 = -4306611505840LL;
	static volatile int64_t t13 = 208137LL;

	t13 = ((x69*x70)&(x71&x72));

	if (t13 != 2097152LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = INT16_MIN;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MIN;
	static volatile int8_t x84 = INT8_MAX;

	t14 = ((x81*x82)&(x83&x84));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x85 = 1U;
	int32_t x87 = INT32_MAX;
	int64_t x88 = INT64_MIN;

	t15 = ((x85*x86)&(x87&x88));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -1;
	volatile int16_t x90 = 0;
	volatile int8_t x91 = INT8_MIN;
	volatile uint32_t t16 = 228795772U;

	t16 = ((x89*x90)&(x91&x92));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x93 = 1U;
	int16_t x94 = -1;
	int8_t x96 = INT8_MIN;
	volatile int64_t t17 = 297821935LL;

	t17 = ((x93*x94)&(x95&x96));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x99 = 57U;
	static int64_t x100 = INT64_MAX;
	int64_t t18 = 0LL;

	t18 = ((x97*x98)&(x99&x100));

	if (t18 != 40LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 3U;
	static volatile uint64_t x102 = 25934870346LLU;
	int32_t x103 = -1;
	int8_t x104 = INT8_MAX;

	t19 = ((x101*x102)&(x103&x104));

	if (t19 != 94LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x107 = -59500316;
	int8_t x108 = INT8_MAX;
	int64_t t20 = 1956846LL;

	t20 = ((x105*x106)&(x107&x108));

	if (t20 != 100LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x109 = 13277691U;
	static uint8_t x110 = 73U;
	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;

	t21 = ((x109*x110)&(x111&x112));

	if (t21 != 969271424U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 1559776630383LLU;
	int8_t x118 = -1;
	static uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 21415U;

	t22 = ((x117*x118)&(x119&x120));

	if (t22 != 16769LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = UINT32_MAX;
	int16_t x122 = -58;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t23 = -1147095297988488111LL;

	t23 = ((x121*x122)&(x123&x124));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 1U;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -22353845;
	volatile int8_t x128 = INT8_MAX;
	int64_t t24 = -2481633259842878LL;

	t24 = ((x125*x126)&(x127&x128));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 0U;
	volatile uint32_t x131 = 4464U;

	t25 = ((x129*x130)&(x131&x132));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = -5;
	uint8_t x134 = 114U;
	int8_t x135 = INT8_MIN;
	int8_t x136 = -55;
	static volatile int32_t t26 = -65059554;

	t26 = ((x133*x134)&(x135&x136));

	if (t26 != -640) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = UINT32_MAX;
	uint16_t x138 = 9U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	uint32_t t27 = 343990461U;

	t27 = ((x137*x138)&(x139&x140));

	if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	volatile int16_t x143 = INT16_MIN;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t28 = 203;

	t28 = ((x141*x142)&(x143&x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 1U;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MAX;
	volatile uint16_t x152 = 17312U;
	int64_t t29 = 30817LL;

	t29 = ((x149*x150)&(x151&x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = INT8_MAX;
	static int32_t t30 = -442202473;

	t30 = ((x153*x154)&(x155&x156));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 3227U;
	static volatile int16_t x158 = INT16_MIN;
	static volatile uint16_t x160 = 0U;
	int64_t t31 = 20360118771751LL;

	t31 = ((x157*x158)&(x159&x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x162 = 29U;
	static int64_t x164 = INT64_MIN;
	static int64_t t32 = -5126523951LL;

	t32 = ((x161*x162)&(x163&x164));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 31081U;
	uint64_t x171 = UINT64_MAX;
	volatile uint64_t t33 = 124400068956LLU;

	t33 = ((x169*x170)&(x171&x172));

	if (t33 != 2036893335LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint8_t x176 = 27U;
	volatile uint32_t t34 = 129U;

	t34 = ((x173*x174)&(x175&x176));

	if (t34 != 18U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x178 = -1LL;
	int8_t x180 = INT8_MIN;
	int64_t t35 = 2LL;

	t35 = ((x177*x178)&(x179&x180));

	if (t35 != 32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = 168LL;
	uint16_t x182 = 1U;
	static uint32_t x183 = 20947439U;
	uint64_t t36 = 411LLU;

	t36 = ((x181*x182)&(x183&x184));

	if (t36 != 160LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	static int8_t x188 = INT8_MAX;
	volatile int32_t t37 = -2150;

	t37 = ((x185*x186)&(x187&x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = 2156193635LL;
	static uint32_t x191 = 123440U;
	uint8_t x192 = 59U;

	t38 = ((x189*x190)&(x191&x192));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int16_t x194 = 71;
	static uint8_t x195 = 78U;
	static int16_t x196 = -1;
	int32_t t39 = 1;

	t39 = ((x193*x194)&(x195&x196));

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = 30U;
	uint8_t x206 = 15U;
	volatile int32_t x207 = -74166989;
	uint8_t x208 = 14U;
	static int32_t t40 = 1;

	t40 = ((x205*x206)&(x207&x208));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int16_t x210 = -219;
	uint32_t x211 = 31U;
	int64_t x212 = INT64_MAX;
	static volatile int64_t t41 = 24836LL;

	t41 = ((x209*x210)&(x211&x212));

	if (t41 != 27LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x213 = -54;
	static volatile uint64_t x214 = UINT64_MAX;
	int16_t x215 = 1924;
	volatile int16_t x216 = INT16_MAX;
	volatile uint64_t t42 = 37846889337775002LLU;

	t42 = ((x213*x214)&(x215&x216));

	if (t42 != 4LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = 7963539072190LL;
	static int8_t x219 = -1;
	volatile uint32_t x220 = 4U;

	t43 = ((x217*x218)&(x219&x220));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = 903085U;
	uint64_t x230 = 113010763918205LLU;
	uint64_t x231 = 64490244121503835LLU;
	uint32_t x232 = 21322608U;
	volatile uint64_t t44 = 16187LLU;

	t44 = ((x229*x230)&(x231&x232));

	if (t44 != 4524112LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x234 = 3830U;
	static int32_t x235 = -984012;
	int8_t x236 = INT8_MIN;
	volatile int32_t t45 = 1;

	t45 = ((x233*x234)&(x235&x236));

	if (t45 != -987136) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x242 = INT16_MAX;
	int32_t x243 = -1;
	uint32_t x244 = 548869999U;
	volatile uint32_t t46 = 952U;

	t46 = ((x241*x242)&(x243&x244));

	if (t46 != 3610369U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x245 = 172;
	static int32_t x246 = -13312;
	int64_t x247 = 8251340078708426LL;
	int16_t x248 = -1;
	volatile int64_t t47 = -5336LL;

	t47 = ((x245*x246)&(x247&x248));

	if (t47 != 8251340078518272LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	static uint64_t x251 = 1043038706100LLU;
	uint64_t t48 = 5177737LLU;

	t48 = ((x249*x250)&(x251&x252));

	if (t48 != 1043038699520LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = -1;
	volatile int32_t t49 = 224182412;

	t49 = ((x253*x254)&(x255&x256));

	if (t49 != 12) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x257 = 12U;
	volatile uint8_t x258 = UINT8_MAX;
	int16_t x259 = -1;
	volatile int8_t x260 = INT8_MAX;
	volatile int32_t t50 = 8017;

	t50 = ((x257*x258)&(x259&x260));

	if (t50 != 116) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = 79;
	int8_t x264 = 6;
	int32_t t51 = -153944;

	t51 = ((x261*x262)&(x263&x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x266 = UINT32_MAX;
	static int32_t x267 = -1;
	int32_t x268 = 653;
	uint32_t t52 = 3976U;

	t52 = ((x265*x266)&(x267&x268));

	if (t52 != 649U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x270 = INT8_MIN;
	static uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;
	volatile int64_t t53 = -1421351142890LL;

	t53 = ((x269*x270)&(x271&x272));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 0U;

	t54 = ((x273*x274)&(x275&x276));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = 42;
	static uint16_t x278 = UINT16_MAX;
	int32_t x279 = -1;
	int16_t x280 = 189;

	t55 = ((x277*x278)&(x279&x280));

	if (t55 != 148) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = -1;
	int64_t x286 = 4162213473941441LL;
	static volatile int16_t x288 = INT16_MAX;
	volatile int64_t t56 = -239211014660722LL;

	t56 = ((x285*x286)&(x287&x288));

	if (t56 != 2099LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = -1;
	static uint8_t x290 = UINT8_MAX;
	static uint64_t x291 = 537657017639933LLU;
	volatile uint64_t t57 = 39178LLU;

	t57 = ((x289*x290)&(x291&x292));

	if (t57 != 8961LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	int64_t t58 = -1LL;

	t58 = ((x297*x298)&(x299&x300));

	if (t58 != 4294967168LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	static uint16_t x307 = 1814U;
	uint32_t t59 = 1457U;

	t59 = ((x305*x306)&(x307&x308));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x309 = 17;
	uint16_t x311 = 1441U;
	int16_t x312 = INT16_MIN;

	t60 = ((x309*x310)&(x311&x312));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x314 = 3478898LL;
	int8_t x316 = INT8_MAX;
	static int64_t t61 = -13240594999082LL;

	t61 = ((x313*x314)&(x315&x316));

	if (t61 != 64LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = -1;
	int16_t x322 = -6470;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = UINT8_MAX;

	t62 = ((x321*x322)&(x323&x324));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x327 = 4944U;
	int64_t x328 = INT64_MAX;
	volatile int64_t t63 = 510LL;

	t63 = ((x325*x326)&(x327&x328));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x329 = 6;
	int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MIN;
	int32_t t64 = -1;

	t64 = ((x329*x330)&(x331&x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x333 = 116667862357267861LLU;
	uint64_t t65 = 39973912336660LLU;

	t65 = ((x333*x334)&(x335&x336));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x337 = UINT8_MAX;
	int8_t x338 = 6;
	uint64_t x339 = 13020460827192980LLU;
	uint64_t x340 = 187538LLU;
	static uint64_t t66 = 203432LLU;

	t66 = ((x337*x338)&(x339&x340));

	if (t66 != 1168LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	volatile int8_t x347 = INT8_MAX;
	static uint64_t t67 = 17027LLU;

	t67 = ((x345*x346)&(x347&x348));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x353 = 101505U;
	static volatile int16_t x354 = 41;
	static volatile int8_t x356 = INT8_MIN;
	volatile uint32_t t68 = 498802710U;

	t68 = ((x353*x354)&(x355&x356));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x358 = 1;
	volatile int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	volatile uint32_t t69 = 20U;

	t69 = ((x357*x358)&(x359&x360));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = 63336U;
	int64_t t70 = -1020009289135LL;

	t70 = ((x361*x362)&(x363&x364));

	if (t70 != 72089600LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x365 = 4LLU;
	static volatile int64_t x367 = -4446282643694795LL;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t71 = 50904LLU;

	t71 = ((x365*x366)&(x367&x368));

	if (t71 != 18442297791065856820LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x369 = -1;
	int16_t x370 = -1;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 0U;

	t72 = ((x369*x370)&(x371&x372));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x377 = 1664362289U;
	int32_t x378 = INT32_MIN;
	uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t73 = 1935502806LLU;

	t73 = ((x377*x378)&(x379&x380));

	if (t73 != 2147483648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x382 = UINT8_MAX;
	static volatile int8_t x383 = 0;
	uint64_t x384 = 12957629LLU;
	volatile uint64_t t74 = 17088583506133371LLU;

	t74 = ((x381*x382)&(x383&x384));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	volatile uint64_t x388 = UINT64_MAX;
	volatile uint64_t t75 = 3473LLU;

	t75 = ((x385*x386)&(x387&x388));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x390 = -345463241387LL;
	int16_t x391 = INT16_MAX;
	int64_t t76 = -159689472427LL;

	t76 = ((x389*x390)&(x391&x392));

	if (t76 != 181LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x393 = 10037488;
	volatile uint32_t x395 = 94U;
	volatile int32_t x396 = 2;
	volatile uint64_t t77 = 926481576751702634LLU;

	t77 = ((x393*x394)&(x395&x396));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x401 = -1LL;
	volatile int16_t x402 = -1;
	int64_t x403 = INT64_MAX;
	uint64_t t78 = 822280763LLU;

	t78 = ((x401*x402)&(x403&x404));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x405 = 9U;
	uint64_t x408 = 394335LLU;
	uint64_t t79 = 400425561942636LLU;

	t79 = ((x405*x406)&(x407&x408));

	if (t79 != 1111LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x409 = 242526976U;
	static volatile int8_t x410 = INT8_MIN;
	volatile int64_t x411 = INT64_MIN;
	uint16_t x412 = 22867U;
	volatile int64_t t80 = 78782858927017LL;

	t80 = ((x409*x410)&(x411&x412));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x417 = INT64_MIN;
	static uint64_t x418 = 18145208905189825LLU;
	int16_t x419 = 3238;
	int64_t x420 = -1866564524301287LL;

	t81 = ((x417*x418)&(x419&x420));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x421 = 0LL;
	volatile int32_t x422 = 82;
	int64_t x424 = INT64_MIN;
	static int64_t t82 = 152713246574LL;

	t82 = ((x421*x422)&(x423&x424));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x434 = 1;
	static int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MAX;
	volatile int32_t t83 = -597500;

	t83 = ((x433*x434)&(x435&x436));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = 105;
	int8_t x438 = 1;
	volatile uint32_t x439 = 3U;
	int16_t x440 = 69;
	static uint32_t t84 = 294666U;

	t84 = ((x437*x438)&(x439&x440));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x441 = 157246LLU;
	int8_t x443 = INT8_MIN;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t85 = 11727971LLU;

	t85 = ((x441*x442)&(x443&x444));

	if (t85 != 10305110016LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x445 = INT32_MIN;
	static uint64_t x446 = UINT64_MAX;
	int32_t x447 = -81;
	volatile uint64_t x448 = 6213391LLU;
	volatile uint64_t t86 = 18071LLU;

	t86 = ((x445*x446)&(x447&x448));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x449 = UINT32_MAX;
	int16_t x450 = -1;
	int32_t x451 = -1;
	int64_t x452 = -1LL;
	volatile int64_t t87 = -130082135LL;

	t87 = ((x449*x450)&(x451&x452));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x457 = 12U;
	static int32_t x458 = -257289;
	uint8_t x459 = UINT8_MAX;

	t88 = ((x457*x458)&(x459&x460));

	if (t88 != 148) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x461 = 1341;
	int64_t x463 = -1LL;
	uint8_t x464 = 1U;
	int64_t t89 = -56662963LL;

	t89 = ((x461*x462)&(x463&x464));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x469 = -1;
	static uint32_t x470 = 5061U;
	int32_t x472 = -1;
	static volatile uint32_t t90 = 9U;

	t90 = ((x469*x470)&(x471&x472));

	if (t90 != 43U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x474 = INT8_MAX;
	uint64_t x475 = 12LLU;
	static int32_t x476 = -86983528;

	t91 = ((x473*x474)&(x475&x476));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x477 = 0U;
	uint8_t x478 = 49U;
	int16_t x479 = 4890;
	int16_t x480 = INT16_MIN;

	t92 = ((x477*x478)&(x479&x480));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x485 = 14471U;
	uint16_t x486 = 7348U;
	int32_t x488 = INT32_MIN;

	t93 = ((x485*x486)&(x487&x488));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = -1;
	static volatile uint16_t x490 = UINT16_MAX;
	uint32_t x491 = UINT32_MAX;
	uint32_t t94 = 82620U;

	t94 = ((x489*x490)&(x491&x492));

	if (t94 != 4294901760U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x493 = UINT16_MAX;
	uint64_t x494 = 0LLU;
	volatile uint16_t x495 = 19240U;
	int64_t x496 = INT64_MIN;
	volatile uint64_t t95 = 175468232590LLU;

	t95 = ((x493*x494)&(x495&x496));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x497 = 2602771LL;
	uint8_t x499 = 17U;
	static uint32_t x500 = 2022600U;

	t96 = ((x497*x498)&(x499&x500));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x501 = 182754369LLU;
	volatile int32_t x502 = -1;
	uint64_t x503 = UINT64_MAX;
	int32_t x504 = INT32_MIN;

	t97 = ((x501*x502)&(x503&x504));

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = 1692889;
	int8_t x510 = -28;
	int16_t x511 = INT16_MAX;
	int32_t x512 = -1;

	t98 = ((x509*x510)&(x511&x512));

	if (t98 != 14404) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x513 = INT16_MAX;
	uint16_t x514 = 17U;
	int32_t x515 = INT32_MIN;
	volatile int16_t x516 = 23;

	t99 = ((x513*x514)&(x515&x516));

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

