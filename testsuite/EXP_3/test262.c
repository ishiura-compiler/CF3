#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = -128;
int16_t x14 = INT16_MIN;
int32_t t3 = 273415;
volatile uint32_t x21 = UINT32_MAX;
int64_t x42 = -1112706204396436933LL;
uint32_t x46 = 5U;
volatile int32_t x47 = INT32_MIN;
static volatile int8_t x61 = INT8_MIN;
static uint64_t t10 = 3108294LLU;
static volatile uint64_t x70 = 3699LLU;
static volatile int16_t x73 = -1;
static uint64_t t12 = 8100895774677502072LLU;
uint16_t x83 = 9810U;
static int8_t x85 = -61;
int64_t x87 = -2788879882342480151LL;
int64_t t16 = -304LL;
int64_t x99 = INT64_MIN;
int16_t x107 = INT16_MIN;
volatile uint16_t x116 = 1308U;
static volatile int32_t t21 = 24466;
volatile uint32_t t22 = 6741U;
int8_t x125 = INT8_MIN;
static int64_t x127 = INT64_MIN;
int32_t x132 = 4054;
int16_t x139 = INT16_MIN;
volatile int32_t t26 = -960548;
int64_t x157 = -59888771LL;
static int32_t x158 = INT32_MIN;
static int16_t x170 = -1;
int16_t x171 = 4;
int32_t x179 = INT32_MAX;
volatile int64_t t33 = -132602383LL;
int16_t x184 = INT16_MIN;
uint8_t x185 = 0U;
int16_t x188 = 1273;
volatile uint64_t t36 = 9072415163492LLU;
int64_t t38 = INT64_MAX;
uint8_t x202 = UINT8_MAX;
int64_t t40 = -2LL;
uint64_t x213 = 4LLU;
int8_t x214 = -1;
volatile uint64_t x218 = 3232497255LLU;
uint32_t x220 = 1864733U;
volatile int32_t t43 = -1036139430;
uint32_t x232 = 1001010U;
uint64_t x239 = 44LLU;
uint8_t x240 = UINT8_MAX;
volatile uint64_t t47 = 3952559654546755LLU;
int64_t x270 = INT64_MIN;
volatile int64_t t52 = 121803LL;
int64_t t53 = -105997488803096LL;
static int16_t x281 = INT16_MIN;
int64_t x287 = INT64_MAX;
int64_t x293 = 160953912398085LL;
uint32_t x299 = UINT32_MAX;
uint16_t x300 = UINT16_MAX;
uint16_t x302 = 94U;
int16_t x312 = 0;
uint8_t x313 = 3U;
volatile int32_t x322 = INT32_MIN;
uint64_t x324 = 4471131677056233957LLU;
uint32_t x326 = 118U;
uint32_t x330 = 62182U;
uint8_t x341 = 7U;
volatile int8_t x348 = INT8_MAX;
static int16_t x355 = 13308;
uint8_t x359 = UINT8_MAX;
static uint64_t t72 = 4604495105542180437LLU;
uint16_t x370 = UINT16_MAX;
volatile int8_t x398 = INT8_MIN;
int16_t x400 = -755;
volatile int8_t x401 = -1;
uint8_t x403 = UINT8_MAX;
int64_t x405 = -3918133027LL;
static volatile uint32_t x406 = UINT32_MAX;
volatile int64_t t85 = 207789732LL;
int8_t x425 = INT8_MIN;
int8_t x427 = INT8_MAX;
volatile int32_t t88 = -162539;
int32_t x441 = -1;
static uint16_t x442 = UINT16_MAX;
static int8_t x444 = 12;
volatile int8_t x455 = INT8_MIN;
static int32_t t93 = 28;
int16_t x464 = INT16_MAX;
int16_t x465 = INT16_MAX;
volatile int32_t x470 = INT32_MAX;
int64_t t97 = 7LL;
static uint8_t x477 = 6U;
uint16_t x479 = UINT16_MAX;
uint32_t x480 = UINT32_MAX;
static uint32_t t98 = 66U;
int32_t x484 = -46866;


void f0(void) {
	uint64_t x1 = 137608403LLU;
	int32_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -2285;

	t0 = ((x1==x2)-(x3-x4));

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -3;
	volatile int32_t x6 = -1;
	int16_t x7 = -12;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 47638;

	t1 = ((x5==x6)-(x7-x8));

	if (t1 != -32756) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 28382;
	uint8_t x15 = 7U;
	int32_t x16 = -1;
	int32_t t2 = 6385;

	t2 = ((x13==x14)-(x15-x16));

	if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 6681U;
	static uint64_t x18 = 372198015895976419LLU;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;

	t3 = ((x17==x18)-(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	uint64_t x24 = 255092356LLU;
	volatile uint64_t t4 = 2031359297469091418LLU;

	t4 = ((x21==x22)-(x23-x24));

	if (t4 != 9223372037109868164LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = -1;
	volatile int32_t x27 = INT32_MAX;
	int64_t x28 = 55343751599163LL;
	static int64_t t5 = 117677635468LL;

	t5 = ((x25==x26)-(x27-x28));

	if (t5 != 55341604115516LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	uint64_t x31 = 3605432038189151LLU;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t6 = 490683653LLU;

	t6 = ((x29==x30)-(x31-x32));

	if (t6 != 18443138641671329697LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 0U;
	uint16_t x34 = 340U;
	uint8_t x35 = 27U;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t7 = -4845;

	t7 = ((x33==x34)-(x35-x36));

	if (t7 != 100) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	uint8_t x43 = UINT8_MAX;
	volatile int64_t x44 = INT64_MAX;
	volatile int64_t t8 = -709334838272697LL;

	t8 = ((x41==x42)-(x43-x44));

	if (t8 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 42;
	static volatile int16_t x48 = INT16_MIN;
	int32_t t9 = 689398113;

	t9 = ((x45==x46)-(x47-x48));

	if (t9 != 2147450880) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x62 = UINT16_MAX;
	static int64_t x63 = INT64_MAX;
	uint64_t x64 = 978578556846367LLU;

	t10 = ((x61==x62)-(x63-x64));

	if (t10 != 9224350615411622176LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = INT64_MAX;
	int16_t x71 = INT16_MIN;
	int16_t x72 = 120;
	int32_t t11 = 442706;

	t11 = ((x69==x70)-(x71-x72));

	if (t11 != 32888) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x74 = UINT64_MAX;
	static volatile uint64_t x75 = 31LLU;
	int8_t x76 = INT8_MAX;

	t12 = ((x73==x74)-(x75-x76));

	if (t12 != 97LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = -1;
	int64_t x78 = -1718529397327594LL;
	static int8_t x79 = -1;
	int64_t x80 = -1LL;
	int64_t t13 = -78LL;

	t13 = ((x77==x78)-(x79-x80));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 20717774U;
	uint8_t x82 = 2U;
	int16_t x84 = 6;
	int32_t t14 = -5587058;

	t14 = ((x81==x82)-(x83-x84));

	if (t14 != -9804) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x86 = INT16_MAX;
	static uint32_t x88 = UINT32_MAX;
	int64_t t15 = -30LL;

	t15 = ((x85==x86)-(x87-x88));

	if (t15 != 2788879886637447446LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -913;
	int8_t x90 = 2;
	int64_t x91 = 650110LL;
	volatile int64_t x92 = INT64_MAX;

	t16 = ((x89==x90)-(x91-x92));

	if (t16 != 9223372036854125697LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MAX;
	static int64_t x94 = INT64_MAX;
	static int32_t x95 = INT32_MIN;
	int16_t x96 = -1;
	volatile int32_t t17 = INT32_MAX;

	t17 = ((x93==x94)-(x95-x96));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x97 = INT8_MIN;
	static int32_t x98 = INT32_MIN;
	int16_t x100 = -1542;
	int64_t t18 = 16777625116052LL;

	t18 = ((x97==x98)-(x99-x100));

	if (t18 != 9223372036854774266LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x105 = 8262248LLU;
	int32_t x106 = -1;
	int64_t x108 = -583210439971471439LL;
	volatile int64_t t19 = -727753LL;

	t19 = ((x105==x106)-(x107-x108));

	if (t19 != -583210439971438671LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	static int32_t x110 = -728892063;
	int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t20 = 91;

	t20 = ((x109==x110)-(x111-x112));

	if (t20 != 2147450880) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = INT64_MIN;
	static int64_t x114 = INT64_MAX;
	int16_t x115 = 95;

	t21 = ((x113==x114)-(x115-x116));

	if (t21 != 1213) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x117 = 740U;
	static volatile uint64_t x118 = 12250164689436087LLU;
	static volatile int8_t x119 = -30;
	uint32_t x120 = 389U;

	t22 = ((x117==x118)-(x119-x120));

	if (t22 != 419U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x126 = -1LL;
	static int64_t x128 = -151665122796585LL;
	int64_t t23 = -5575310432763887LL;

	t23 = ((x125==x126)-(x127-x128));

	if (t23 != 9223220371731979223LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = -1;
	int32_t t24 = -2079;

	t24 = ((x129==x130)-(x131-x132));

	if (t24 != 4055) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x133 = -1LL;
	uint8_t x134 = 3U;
	int32_t x135 = INT32_MIN;
	int16_t x136 = -1;
	volatile int32_t t25 = INT32_MAX;

	t25 = ((x133==x134)-(x135-x136));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MAX;
	static int16_t x138 = 245;
	int8_t x140 = -1;

	t26 = ((x137==x138)-(x139-x140));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x149 = INT32_MIN;
	volatile int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MAX;
	int8_t x152 = -20;
	int32_t t27 = -647363;

	t27 = ((x149==x150)-(x151-x152));

	if (t27 != -147) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 39U;
	static int16_t x156 = INT16_MAX;
	volatile int32_t t28 = -2;

	t28 = ((x153==x154)-(x155-x156));

	if (t28 != 32728) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x159 = INT16_MAX;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t29 = -3891;

	t29 = ((x157==x158)-(x159-x160));

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	uint16_t x163 = 1257U;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t30 = 28446U;

	t30 = ((x161==x162)-(x163-x164));

	if (t30 != 4294966039U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = 27;
	int64_t x166 = -30978347885133971LL;
	int8_t x167 = INT8_MIN;
	volatile int8_t x168 = INT8_MIN;
	int32_t t31 = 237580;

	t31 = ((x165==x166)-(x167-x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = 394839U;
	uint8_t x172 = 1U;
	int32_t t32 = 28842;

	t32 = ((x169==x170)-(x171-x172));

	if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = -1;
	volatile uint16_t x178 = 3U;
	volatile int64_t x180 = INT64_MAX;

	t33 = ((x177==x178)-(x179-x180));

	if (t33 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = 0U;
	volatile int32_t t34 = -60;

	t34 = ((x181==x182)-(x183-x184));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x186 = 189419U;
	int8_t x187 = -6;
	int32_t t35 = 3;

	t35 = ((x185==x186)-(x187-x188));

	if (t35 != 1279) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = -1LL;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 896LLU;
	static volatile int64_t x192 = INT64_MAX;

	t36 = ((x189==x190)-(x191-x192));

	if (t36 != 9223372036854774911LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = 0;
	volatile int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	volatile int64_t t37 = 159695725723LL;

	t37 = ((x193==x194)-(x195-x196));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x197 = INT64_MAX;
	uint8_t x198 = 10U;
	int8_t x199 = 0;
	int64_t x200 = INT64_MAX;

	t38 = ((x197==x198)-(x199-x200));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MAX;
	int8_t x203 = INT8_MIN;
	static int64_t x204 = INT64_MIN;
	int64_t t39 = -81874449LL;

	t39 = ((x201==x202)-(x203-x204));

	if (t39 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = 43391;
	int16_t x211 = 6;
	int64_t x212 = INT64_MAX;

	t40 = ((x209==x210)-(x211-x212));

	if (t40 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x215 = UINT16_MAX;
	volatile int8_t x216 = INT8_MIN;
	int32_t t41 = 0;

	t41 = ((x213==x214)-(x215-x216));

	if (t41 != -65663) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = INT32_MIN;
	static int32_t x219 = INT32_MIN;
	uint32_t t42 = 322511408U;

	t42 = ((x217==x218)-(x219-x220));

	if (t42 != 2149348381U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = 17;
	int8_t x222 = 0;
	int16_t x223 = -519;
	volatile int16_t x224 = INT16_MIN;

	t43 = ((x221==x222)-(x223-x224));

	if (t43 != -32249) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = 1198;
	int16_t x227 = 23;
	uint16_t x228 = 60U;
	int32_t t44 = 59337;

	t44 = ((x225==x226)-(x227-x228));

	if (t44 != 37) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MAX;
	uint32_t x231 = 12671U;
	volatile uint32_t t45 = 7307U;

	t45 = ((x229==x230)-(x231-x232));

	if (t45 != 988339U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = -2;
	uint16_t x234 = 419U;
	int32_t x235 = INT32_MIN;
	volatile uint64_t x236 = 942362263LLU;
	uint64_t t46 = 13702264134928LLU;

	t46 = ((x233==x234)-(x235-x236));

	if (t46 != 3089845911LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = 107U;

	t47 = ((x237==x238)-(x239-x240));

	if (t47 != 211LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x245 = INT8_MAX;
	int8_t x246 = 49;
	static uint32_t x247 = UINT32_MAX;
	int64_t x248 = -34127LL;
	static volatile int64_t t48 = -21589303885168015LL;

	t48 = ((x245==x246)-(x247-x248));

	if (t48 != -4295001422LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = -120LL;
	static int8_t x250 = 1;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MIN;
	static int32_t t49 = -59;

	t49 = ((x249==x250)-(x251-x252));

	if (t49 != -98303) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x253 = INT64_MIN;
	int8_t x254 = 1;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MAX;
	int64_t t50 = -413732615776783LL;

	t50 = ((x253==x254)-(x255-x256));

	if (t50 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x257 = INT64_MAX;
	int8_t x258 = 0;
	volatile uint32_t x259 = 2U;
	int8_t x260 = -1;
	volatile uint32_t t51 = 392586U;

	t51 = ((x257==x258)-(x259-x260));

	if (t51 != 4294967293U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x269 = -1;
	int64_t x271 = INT64_MAX;
	static uint16_t x272 = 53U;

	t52 = ((x269==x270)-(x271-x272));

	if (t52 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = -6;
	int64_t x275 = 28451LL;
	static uint8_t x276 = UINT8_MAX;

	t53 = ((x273==x274)-(x275-x276));

	if (t53 != -28196LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = 190956906LL;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = 46554LLU;
	uint64_t t54 = 186247435620LLU;

	t54 = ((x277==x278)-(x279-x280));

	if (t54 != 2147530202LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = 12U;
	volatile int32_t t55 = 1622;

	t55 = ((x281==x282)-(x283-x284));

	if (t55 != -32755) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = -423414;
	uint32_t x286 = UINT32_MAX;
	volatile int8_t x288 = 1;
	static volatile int64_t t56 = -2598014LL;

	t56 = ((x285==x286)-(x287-x288));

	if (t56 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	volatile int8_t x292 = -1;
	int32_t t57 = -1368;

	t57 = ((x289==x290)-(x291-x292));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x294 = UINT32_MAX;
	uint16_t x295 = 581U;
	int16_t x296 = -1;
	volatile int32_t t58 = 65519319;

	t58 = ((x293==x294)-(x295-x296));

	if (t58 != -582) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = -1;
	volatile uint32_t t59 = 57379251U;

	t59 = ((x297==x298)-(x299-x300));

	if (t59 != 65536U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x301 = -1;
	int32_t x303 = 48746065;
	volatile int16_t x304 = INT16_MIN;
	static int32_t t60 = 933;

	t60 = ((x301==x302)-(x303-x304));

	if (t60 != -48778833) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = 30;
	uint32_t x306 = 23843164U;
	uint64_t x307 = UINT64_MAX;
	uint32_t x308 = UINT32_MAX;
	static uint64_t t61 = 140680189658357334LLU;

	t61 = ((x305==x306)-(x307-x308));

	if (t61 != 4294967296LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = -28;
	uint16_t x310 = UINT16_MAX;
	volatile int16_t x311 = 52;
	int32_t t62 = -569203;

	t62 = ((x309==x310)-(x311-x312));

	if (t62 != -52) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x314 = INT8_MIN;
	int64_t x315 = 1LL;
	uint8_t x316 = 41U;
	volatile int64_t t63 = 408LL;

	t63 = ((x313==x314)-(x315-x316));

	if (t63 != 40LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MAX;
	static uint8_t x319 = 91U;
	int32_t x320 = INT32_MAX;
	volatile int32_t t64 = -131286483;

	t64 = ((x317==x318)-(x319-x320));

	if (t64 != 2147483556) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x321 = INT8_MIN;
	uint8_t x323 = 5U;
	static volatile uint64_t t65 = 7784919743128976LLU;

	t65 = ((x321==x322)-(x323-x324));

	if (t65 != 4471131677056233952LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x325 = 120U;
	int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	volatile int64_t t66 = INT64_MAX;

	t66 = ((x325==x326)-(x327-x328));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x329 = -7;
	uint64_t x331 = 1085100LLU;
	int16_t x332 = -2141;
	uint64_t t67 = 69758971297906434LLU;

	t67 = ((x329==x330)-(x331-x332));

	if (t67 != 18446744073708464375LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x342 = -6798;
	int8_t x343 = INT8_MAX;
	uint32_t x344 = 60735298U;
	static volatile uint32_t t68 = 281428U;

	t68 = ((x341==x342)-(x343-x344));

	if (t68 != 60735171U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x345 = 7878U;
	uint64_t x346 = UINT64_MAX;
	static uint64_t x347 = UINT64_MAX;
	volatile uint64_t t69 = 8LLU;

	t69 = ((x345==x346)-(x347-x348));

	if (t69 != 128LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 1510465954219662LLU;
	int16_t x350 = INT16_MAX;
	volatile int8_t x351 = INT8_MIN;
	static volatile int16_t x352 = INT16_MAX;
	int32_t t70 = -195;

	t70 = ((x349==x350)-(x351-x352));

	if (t70 != 32895) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;
	int32_t t71 = 22358;

	t71 = ((x353==x354)-(x355-x356));

	if (t71 != -13053) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x357 = 5390416117818LLU;
	int32_t x358 = INT32_MIN;
	uint64_t x360 = UINT64_MAX;

	t72 = ((x357==x358)-(x359-x360));

	if (t72 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x361 = INT8_MIN;
	int32_t x362 = 14479;
	int32_t x363 = -512966;
	int64_t x364 = -1LL;
	volatile int64_t t73 = -875593647LL;

	t73 = ((x361==x362)-(x363-x364));

	if (t73 != 512965LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = -3;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MAX;
	int32_t t74 = 18036;

	t74 = ((x365==x366)-(x367-x368));

	if (t74 != 32895) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = 31;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = -9LL;
	volatile uint64_t t75 = 3527357536LLU;

	t75 = ((x369==x370)-(x371-x372));

	if (t75 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x373 = -1LL;
	static int16_t x374 = INT16_MIN;
	static uint16_t x375 = UINT16_MAX;
	volatile int16_t x376 = INT16_MAX;
	int32_t t76 = -6849980;

	t76 = ((x373==x374)-(x375-x376));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x381 = INT16_MAX;
	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	volatile uint32_t x384 = 348548U;
	volatile int64_t t77 = -2497498266129874LL;

	t77 = ((x381==x382)-(x383-x384));

	if (t77 != -9223372036854427259LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x385 = 1;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;
	static volatile uint32_t x388 = 10668081U;
	volatile uint32_t t78 = 7319U;

	t78 = ((x385==x386)-(x387-x388));

	if (t78 != 10635314U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = 0;
	int64_t x390 = INT64_MIN;
	static int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	volatile int64_t t79 = -12222460LL;

	t79 = ((x389==x390)-(x391-x392));

	if (t79 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = INT64_MAX;
	static int64_t x394 = -1LL;
	volatile uint16_t x395 = 24131U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t80 = 35439307LLU;

	t80 = ((x393==x394)-(x395-x396));

	if (t80 != 18446744073709527484LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x397 = 8046351595LLU;
	volatile int64_t x399 = -1LL;
	int64_t t81 = 17LL;

	t81 = ((x397==x398)-(x399-x400));

	if (t81 != -754LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x402 = UINT64_MAX;
	int64_t x404 = INT64_MAX;
	static int64_t t82 = -1LL;

	t82 = ((x401==x402)-(x403-x404));

	if (t82 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x407 = 17U;
	int32_t x408 = INT32_MAX;
	volatile uint32_t t83 = 6504293U;

	t83 = ((x405==x406)-(x407-x408));

	if (t83 != 2147483630U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x409 = INT32_MIN;
	static int32_t x410 = -1;
	static int16_t x411 = INT16_MIN;
	int32_t x412 = -1;
	int32_t t84 = -3235;

	t84 = ((x409==x410)-(x411-x412));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x413 = 43593054349405LLU;
	static uint64_t x414 = UINT64_MAX;
	int64_t x415 = -6404101215LL;
	uint8_t x416 = UINT8_MAX;

	t85 = ((x413==x414)-(x415-x416));

	if (t85 != 6404101470LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = 14;
	int16_t x418 = 13;
	int32_t x419 = 7;
	int64_t x420 = INT64_MAX;
	static int64_t t86 = -3420851LL;

	t86 = ((x417==x418)-(x419-x420));

	if (t86 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x426 = UINT32_MAX;
	int32_t x428 = -1777;
	volatile int32_t t87 = 3;

	t87 = ((x425==x426)-(x427-x428));

	if (t87 != -1904) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = 4;
	int16_t x430 = INT16_MIN;
	int32_t x431 = 147144415;
	int8_t x432 = INT8_MAX;

	t88 = ((x429==x430)-(x431-x432));

	if (t88 != -147144288) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x433 = UINT64_MAX;
	volatile uint8_t x434 = 1U;
	int64_t x435 = INT64_MIN;
	uint64_t x436 = 976518741LLU;
	static uint64_t t89 = 7065020LLU;

	t89 = ((x433==x434)-(x435-x436));

	if (t89 != 9223372037831294549LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x443 = INT16_MIN;
	static volatile int32_t t90 = 26020;

	t90 = ((x441==x442)-(x443-x444));

	if (t90 != 32780) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = -1LL;
	uint64_t x446 = UINT64_MAX;
	int8_t x447 = -1;
	uint16_t x448 = 34U;
	int32_t t91 = 101;

	t91 = ((x445==x446)-(x447-x448));

	if (t91 != 36) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x449 = -1;
	uint64_t x450 = 481515396739795333LLU;
	int32_t x451 = INT32_MAX;
	int8_t x452 = INT8_MAX;
	static volatile int32_t t92 = 1;

	t92 = ((x449==x450)-(x451-x452));

	if (t92 != -2147483520) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = INT8_MIN;
	int64_t x454 = -18812LL;
	static int8_t x456 = -6;

	t93 = ((x453==x454)-(x455-x456));

	if (t93 != 122) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x457 = -11476;
	int8_t x458 = INT8_MIN;
	int32_t x459 = -1;
	int8_t x460 = INT8_MAX;
	volatile int32_t t94 = 15;

	t94 = ((x457==x458)-(x459-x460));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x461 = 3U;
	uint16_t x462 = 66U;
	static int32_t x463 = 408;
	volatile int32_t t95 = 77;

	t95 = ((x461==x462)-(x463-x464));

	if (t95 != 32359) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x466 = INT8_MIN;
	int32_t x467 = 5;
	uint64_t x468 = 2178153987560767LLU;
	uint64_t t96 = 309585LLU;

	t96 = ((x465==x466)-(x467-x468));

	if (t96 != 2178153987560762LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x469 = 2776869694732LLU;
	int64_t x471 = -1LL;
	int8_t x472 = 1;

	t97 = ((x469==x470)-(x471-x472));

	if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x478 = 25;

	t98 = ((x477==x478)-(x479-x480));

	if (t98 != 4294901760U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x481 = 1175U;
	static int32_t x482 = INT32_MAX;
	int32_t x483 = INT32_MIN;
	static int32_t t99 = 101349758;

	t99 = ((x481==x482)-(x483-x484));

	if (t99 != 2147436782) { NG(); } else { ; }
	
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
