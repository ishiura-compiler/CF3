#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
static uint16_t x8 = 2424U;
int64_t x10 = INT64_MIN;
static uint8_t x12 = UINT8_MAX;
int32_t x13 = INT32_MIN;
int16_t x24 = INT16_MAX;
int16_t x27 = -1;
int8_t x28 = INT8_MIN;
uint8_t x29 = 3U;
int8_t x30 = INT8_MIN;
static uint16_t x31 = 5175U;
int8_t x36 = -1;
uint8_t x38 = 106U;
static int64_t x40 = INT64_MIN;
uint16_t x46 = 95U;
int32_t x49 = INT32_MAX;
static uint16_t x52 = UINT16_MAX;
static uint32_t x57 = 11U;
uint32_t x58 = UINT32_MAX;
volatile uint16_t x67 = 185U;
uint32_t x76 = UINT32_MAX;
volatile int16_t x78 = INT16_MIN;
int64_t t16 = 3831873878105989LL;
volatile int8_t x87 = INT8_MIN;
static int64_t x88 = INT64_MIN;
volatile uint64_t x104 = 124126025968291715LLU;
int16_t x114 = INT16_MIN;
volatile uint32_t x118 = UINT32_MAX;
static int16_t x125 = 696;
static int32_t x133 = INT32_MIN;
uint32_t x134 = 46057685U;
volatile int32_t t26 = -134067669;
uint16_t x138 = UINT16_MAX;
static uint8_t x139 = 31U;
int8_t x140 = -1;
int64_t x158 = 27232LL;
volatile uint32_t x159 = 1727879406U;
static int64_t t33 = -2110775496112270415LL;
int64_t x169 = INT64_MIN;
static uint64_t t34 = 1335159942637175LLU;
volatile int16_t x176 = INT16_MIN;
volatile uint64_t t35 = 406434683627728819LLU;
volatile int16_t x179 = INT16_MIN;
int8_t x202 = INT8_MIN;
uint64_t x203 = 234629280181LLU;
static uint64_t x212 = 1277437633LLU;
static int32_t x226 = -1;
uint64_t x238 = UINT64_MAX;
static volatile int32_t t47 = -1022;
uint8_t x242 = UINT8_MAX;
uint16_t x243 = 648U;
int8_t x244 = -1;
int32_t t48 = -3;
uint8_t x250 = 28U;
static uint32_t t50 = 170U;
int16_t x257 = INT16_MIN;
volatile int32_t t52 = -1335248;
int16_t x268 = -1;
volatile int64_t x287 = 12111176620441491LL;
static uint32_t t61 = 6612U;
volatile uint32_t x317 = 39U;
int64_t t63 = -378629252190267LL;
uint16_t x329 = 2U;
static int32_t x341 = INT32_MIN;
uint8_t x344 = 126U;
int8_t x349 = -5;
static volatile int64_t x352 = INT64_MIN;
int16_t x355 = -1;
uint64_t t70 = 1247602LLU;
uint64_t x364 = UINT64_MAX;
int64_t x366 = INT64_MIN;
int64_t x370 = -1LL;
volatile int32_t t74 = -1548093;
int16_t x379 = INT16_MIN;
int32_t t76 = 122913;
volatile int64_t x384 = -1LL;
volatile int16_t x389 = INT16_MIN;
uint64_t x392 = UINT64_MAX;
uint16_t x394 = 12U;
int16_t x396 = -1;
volatile int32_t t80 = -2104;
int64_t t81 = 790LL;
uint16_t x404 = 1U;
int32_t t82 = 29040;
int8_t x415 = -1;
volatile int64_t x416 = INT64_MIN;
uint32_t x423 = 439U;
int16_t x433 = INT16_MIN;
uint64_t x438 = UINT64_MAX;
volatile uint64_t x439 = 1660604931231LLU;
int32_t x444 = -97350272;
volatile int8_t x446 = 0;
volatile uint32_t x453 = UINT32_MAX;
static int64_t x456 = -1LL;
volatile int64_t t92 = -833LL;
int16_t x465 = 29;
int32_t x467 = -252262339;
int8_t x468 = INT8_MIN;
int16_t x476 = INT16_MIN;
static uint64_t x481 = UINT64_MAX;
int8_t x487 = INT8_MAX;


void f0(void) {
	static int32_t x5 = 756984;
	volatile uint32_t x7 = 8137U;
	volatile uint32_t t0 = 94U;

	t0 = ((x5<=x6)%(x7&x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 885U;
	static int32_t x11 = -147125;
	static volatile int32_t t1 = -14;

	t1 = ((x9<=x10)%(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = -1;
	static uint32_t x15 = 53597802U;
	uint8_t x16 = 93U;
	static volatile uint32_t t2 = 352U;

	t2 = ((x13<=x14)%(x15&x16));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -552822217LL;
	static int32_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	static volatile int32_t t3 = -20337;

	t3 = ((x21<=x22)%(x23&x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 4U;
	int64_t x26 = 477654856637713LL;
	static int32_t t4 = -54654;

	t4 = ((x25<=x26)%(x27&x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x32 = INT16_MAX;
	volatile int32_t t5 = 20683692;

	t5 = ((x29<=x30)%(x31&x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -106;
	int64_t x34 = 15722974121975LL;
	uint32_t x35 = 6328497U;
	uint32_t t6 = 2239U;

	t6 = ((x33<=x34)%(x35&x36));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 0U;
	int16_t x39 = INT16_MIN;
	volatile int64_t t7 = 486700784654466LL;

	t7 = ((x37<=x38)%(x39&x40));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	volatile int64_t x47 = 274546681075248LL;
	static volatile uint8_t x48 = UINT8_MAX;
	int64_t t8 = 1494506146831717LL;

	t8 = ((x45<=x46)%(x47&x48));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	int32_t t9 = -63077835;

	t9 = ((x49<=x50)%(x51&x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -97LL;
	int64_t x54 = -1LL;
	volatile int64_t x55 = -3LL;
	uint32_t x56 = UINT32_MAX;
	volatile int64_t t10 = 2114603475595040LL;

	t10 = ((x53<=x54)%(x55&x56));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x59 = INT16_MAX;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t11 = -948;

	t11 = ((x57<=x58)%(x59&x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int32_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	static int32_t x64 = 9316;
	volatile uint64_t t12 = 908708632166177LLU;

	t12 = ((x61<=x62)%(x63&x64));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x65 = 2858339820835LLU;
	int16_t x66 = -3246;
	int32_t x68 = -8046;
	int32_t t13 = 11122754;

	t13 = ((x65<=x66)%(x67&x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = -1;
	static volatile int8_t x70 = INT8_MAX;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = -138071842343493952LL;
	volatile int64_t t14 = 19LL;

	t14 = ((x69<=x70)%(x71&x72));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int16_t x74 = INT16_MAX;
	volatile uint32_t x75 = UINT32_MAX;
	volatile uint32_t t15 = 9802U;

	t15 = ((x73<=x74)%(x75&x76));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = -941;
	int64_t x79 = INT64_MIN;
	int16_t x80 = INT16_MIN;

	t16 = ((x77<=x78)%(x79&x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MAX;
	uint32_t x83 = 1088045293U;
	uint32_t x84 = 59U;
	uint32_t t17 = 1U;

	t17 = ((x81<=x82)%(x83&x84));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 41;
	int64_t x86 = INT64_MAX;
	static volatile int64_t t18 = -6308764404LL;

	t18 = ((x85<=x86)%(x87&x88));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MAX;
	static volatile int8_t x94 = -3;
	int32_t x95 = -1;
	static int8_t x96 = INT8_MIN;
	static int32_t t19 = -123028;

	t19 = ((x93<=x94)%(x95&x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	uint64_t x103 = 163251304479257LLU;
	static volatile uint64_t t20 = 16508LLU;

	t20 = ((x101<=x102)%(x103&x104));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = 80;
	static volatile int64_t x106 = -1LL;
	volatile int64_t x107 = -1LL;
	int64_t x108 = INT64_MIN;
	volatile int64_t t21 = 355676840536567LL;

	t21 = ((x105<=x106)%(x107&x108));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	volatile int32_t x111 = INT32_MIN;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t22 = -7769948;

	t22 = ((x109<=x110)%(x111&x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x113 = -8644588287969888LL;
	volatile int8_t x115 = INT8_MIN;
	static int16_t x116 = INT16_MIN;
	static volatile int32_t t23 = -3;

	t23 = ((x113<=x114)%(x115&x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x117 = 1U;
	int64_t x119 = -525668859217066594LL;
	int32_t x120 = -28;
	int64_t t24 = 322898773LL;

	t24 = ((x117<=x118)%(x119&x120));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x126 = INT16_MAX;
	int32_t x127 = -15;
	int8_t x128 = INT8_MAX;
	volatile int32_t t25 = -5678;

	t25 = ((x125<=x126)%(x127&x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x135 = -1;
	uint8_t x136 = 16U;

	t26 = ((x133<=x134)%(x135&x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x137 = INT8_MIN;
	static volatile int32_t t27 = -2;

	t27 = ((x137<=x138)%(x139&x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x141 = 8;
	static int32_t x142 = 900178;
	int64_t x143 = INT64_MIN;
	static volatile int32_t x144 = -1;
	volatile int64_t t28 = 3288137673264235439LL;

	t28 = ((x141<=x142)%(x143&x144));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	int8_t x151 = INT8_MIN;
	int64_t x152 = -15143413162345617LL;
	int64_t t29 = 17LL;

	t29 = ((x149<=x150)%(x151&x152));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	static int32_t x155 = INT32_MIN;
	static int16_t x156 = INT16_MIN;
	static int32_t t30 = 817561;

	t30 = ((x153<=x154)%(x155&x156));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = 646270657036223401LL;
	static int64_t x160 = 1077944LL;
	volatile int64_t t31 = -4767576595241579LL;

	t31 = ((x157<=x158)%(x159&x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x161 = 29U;
	int8_t x162 = 6;
	int32_t x163 = 785433;
	uint64_t x164 = 2521971447392LLU;
	volatile uint64_t t32 = 0LLU;

	t32 = ((x161<=x162)%(x163&x164));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x165 = 444U;
	int32_t x166 = 1;
	int8_t x167 = -1;
	int64_t x168 = INT64_MIN;

	t33 = ((x165<=x166)%(x167&x168));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x170 = UINT64_MAX;
	uint64_t x171 = UINT64_MAX;
	static volatile int32_t x172 = INT32_MAX;

	t34 = ((x169<=x170)%(x171&x172));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x173 = 25;
	int8_t x174 = -24;
	uint64_t x175 = 241149769637731LLU;

	t35 = ((x173<=x174)%(x175&x176));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x177 = 0;
	volatile int64_t x178 = -50005505012254LL;
	int8_t x180 = -1;
	volatile int32_t t36 = -76728502;

	t36 = ((x177<=x178)%(x179&x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x181 = 3226102U;
	uint16_t x182 = 209U;
	int32_t x183 = 28568;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t37 = 73;

	t37 = ((x181<=x182)%(x183&x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = INT16_MIN;
	volatile int64_t x187 = 250LL;
	int8_t x188 = -14;
	volatile int64_t t38 = 0LL;

	t38 = ((x185<=x186)%(x187&x188));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x189 = 1U;
	int16_t x190 = INT16_MIN;
	static int16_t x191 = INT16_MIN;
	int16_t x192 = -12217;
	static int32_t t39 = 43;

	t39 = ((x189<=x190)%(x191&x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x193 = 13845U;
	int32_t x194 = 29551609;
	uint8_t x195 = UINT8_MAX;
	volatile uint64_t x196 = 273LLU;
	volatile uint64_t t40 = 7287LLU;

	t40 = ((x193<=x194)%(x195&x196));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x201 = 7490084245LL;
	volatile int16_t x204 = INT16_MAX;
	uint64_t t41 = 1990782419393156LLU;

	t41 = ((x201<=x202)%(x203&x204));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x209 = 27253U;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 19U;
	volatile uint64_t t42 = 60464780273224737LLU;

	t42 = ((x209<=x210)%(x211&x212));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x217 = INT32_MAX;
	static int8_t x218 = INT8_MIN;
	int32_t x219 = -115;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t43 = -44596;

	t43 = ((x217<=x218)%(x219&x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = 317U;
	volatile int8_t x227 = 53;
	static int64_t x228 = -6575441593159328LL;
	volatile int64_t t44 = 402382538584160LL;

	t44 = ((x225<=x226)%(x227&x228));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 42U;
	int8_t x231 = INT8_MAX;
	uint32_t x232 = UINT32_MAX;
	uint32_t t45 = 2U;

	t45 = ((x229<=x230)%(x231&x232));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x233 = UINT8_MAX;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t46 = -16;

	t46 = ((x233<=x234)%(x235&x236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x239 = INT16_MIN;
	int32_t x240 = 54975410;

	t47 = ((x237<=x238)%(x239&x240));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x241 = 11140U;

	t48 = ((x241<=x242)%(x243&x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = -1;
	int8_t x246 = 2;
	uint8_t x247 = UINT8_MAX;
	static int16_t x248 = -1;
	static int32_t t49 = 1475016;

	t49 = ((x245<=x246)%(x247&x248));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MIN;
	static uint32_t x251 = 466332U;
	int16_t x252 = INT16_MIN;

	t50 = ((x249<=x250)%(x251&x252));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x253 = 10771U;
	volatile int16_t x254 = INT16_MAX;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = INT64_MIN;
	volatile int64_t t51 = -893075916LL;

	t51 = ((x253<=x254)%(x255&x256));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x258 = 807008U;
	int16_t x259 = INT16_MAX;
	int32_t x260 = -15;

	t52 = ((x257<=x258)%(x259&x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	static uint32_t x262 = 147808246U;
	static uint64_t x263 = 1925138301LLU;
	uint64_t x264 = UINT64_MAX;
	uint64_t t53 = 106249976097LLU;

	t53 = ((x261<=x262)%(x263&x264));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x265 = INT32_MAX;
	uint8_t x266 = UINT8_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile uint64_t t54 = 15422305759324LLU;

	t54 = ((x265<=x266)%(x267&x268));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x269 = 1U;
	int64_t x270 = 190328LL;
	int16_t x271 = -1;
	int8_t x272 = INT8_MIN;
	int32_t t55 = -353;

	t55 = ((x269<=x270)%(x271&x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	static int8_t x283 = 2;
	static volatile int32_t x284 = INT32_MAX;
	static volatile int32_t t56 = 53;

	t56 = ((x281<=x282)%(x283&x284));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = -29;
	int32_t x286 = INT32_MAX;
	uint64_t x288 = 2166313LLU;
	static uint64_t t57 = 35LLU;

	t57 = ((x285<=x286)%(x287&x288));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = INT16_MIN;
	static volatile int64_t x290 = -1LL;
	int16_t x291 = -1;
	volatile uint64_t x292 = 10951623LLU;
	uint64_t t58 = 512270LLU;

	t58 = ((x289<=x290)%(x291&x292));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x293 = 9LL;
	int64_t x294 = -1LL;
	uint8_t x295 = 113U;
	volatile int32_t x296 = -36960142;
	int32_t t59 = -446;

	t59 = ((x293<=x294)%(x295&x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x305 = -1;
	int64_t x306 = 4782518415LL;
	int16_t x307 = 2686;
	uint32_t x308 = UINT32_MAX;
	uint32_t t60 = 454U;

	t60 = ((x305<=x306)%(x307&x308));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = -1;
	int16_t x311 = INT16_MIN;
	volatile uint32_t x312 = 1771414U;

	t61 = ((x309<=x310)%(x311&x312));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = -1778070801LL;
	int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	int8_t x316 = -1;
	static volatile int64_t t62 = 22441010064LL;

	t62 = ((x313<=x314)%(x315&x316));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x318 = INT16_MAX;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = -1LL;

	t63 = ((x317<=x318)%(x319&x320));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = 5543781U;
	int8_t x328 = -1;
	volatile uint32_t t64 = 77092U;

	t64 = ((x325<=x326)%(x327&x328));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x330 = 7U;
	int64_t x331 = -1LL;
	static uint16_t x332 = 48U;
	int64_t t65 = 254LL;

	t65 = ((x329<=x330)%(x331&x332));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 445241U;
	uint32_t t66 = 2022U;

	t66 = ((x333<=x334)%(x335&x336));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x342 = 120U;
	static int64_t x343 = INT64_MAX;
	int64_t t67 = -4766406LL;

	t67 = ((x341<=x342)%(x343&x344));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x345 = 6U;
	static int64_t x346 = -1098170225464LL;
	static int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	static int32_t t68 = -113192981;

	t68 = ((x345<=x346)%(x347&x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	int64_t t69 = 157519581102609659LL;

	t69 = ((x349<=x350)%(x351&x352));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = 14;
	static int32_t x354 = INT32_MIN;
	static uint64_t x356 = 28609590240936162LLU;

	t70 = ((x353<=x354)%(x355&x356));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x357 = 1U;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = -1;
	uint8_t x360 = 3U;
	int32_t t71 = 20996104;

	t71 = ((x357<=x358)%(x359&x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x361 = INT8_MAX;
	int64_t x362 = INT64_MIN;
	int32_t x363 = -1;
	uint64_t t72 = 253LLU;

	t72 = ((x361<=x362)%(x363&x364));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x365 = INT32_MIN;
	uint64_t x367 = UINT64_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile uint64_t t73 = 111915684332LLU;

	t73 = ((x365<=x366)%(x367&x368));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x369 = -7;
	int16_t x371 = 3498;
	int8_t x372 = -1;

	t74 = ((x369<=x370)%(x371&x372));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = 569623493716LL;
	static int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t75 = -873;

	t75 = ((x373<=x374)%(x375&x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = INT8_MIN;
	static int16_t x378 = INT16_MIN;
	int8_t x380 = -1;

	t76 = ((x377<=x378)%(x379&x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x381 = -1;
	int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MAX;
	int64_t t77 = 0LL;

	t77 = ((x381<=x382)%(x383&x384));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x385 = 100U;
	int8_t x386 = -42;
	uint64_t x387 = UINT64_MAX;
	int64_t x388 = INT64_MAX;
	static volatile uint64_t t78 = 15401467627852931LLU;

	t78 = ((x385<=x386)%(x387&x388));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x390 = INT8_MAX;
	volatile int32_t x391 = INT32_MAX;
	uint64_t t79 = 348446972471713LLU;

	t79 = ((x389<=x390)%(x391&x392));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x393 = 0U;
	volatile uint16_t x395 = UINT16_MAX;

	t80 = ((x393<=x394)%(x395&x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = 5U;
	int8_t x399 = INT8_MIN;
	volatile int64_t x400 = -1623286327LL;

	t81 = ((x397<=x398)%(x399&x400));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = INT8_MIN;
	volatile uint32_t x402 = UINT32_MAX;
	int16_t x403 = -117;

	t82 = ((x401<=x402)%(x403&x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x405 = -1;
	uint32_t x406 = 6U;
	uint16_t x407 = 1422U;
	volatile uint16_t x408 = 413U;
	volatile int32_t t83 = 209;

	t83 = ((x405<=x406)%(x407&x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = INT16_MAX;
	uint16_t x414 = UINT16_MAX;
	int64_t t84 = 31625LL;

	t84 = ((x413<=x414)%(x415&x416));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x421 = INT32_MAX;
	uint8_t x422 = 9U;
	int64_t x424 = INT64_MAX;
	volatile int64_t t85 = 3792LL;

	t85 = ((x421<=x422)%(x423&x424));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x425 = -1;
	int64_t x426 = -1LL;
	uint64_t x427 = 72723465781LLU;
	int32_t x428 = INT32_MAX;
	volatile uint64_t t86 = 2774946815004LLU;

	t86 = ((x425<=x426)%(x427&x428));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x434 = -1LL;
	static uint64_t x435 = UINT64_MAX;
	int64_t x436 = -34LL;
	static volatile uint64_t t87 = 124508LLU;

	t87 = ((x433<=x434)%(x435&x436));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x437 = INT64_MIN;
	int64_t x440 = 209LL;
	uint64_t t88 = 5126630400LLU;

	t88 = ((x437<=x438)%(x439&x440));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MAX;
	uint32_t x443 = 1037532U;
	volatile uint32_t t89 = 3368U;

	t89 = ((x441<=x442)%(x443&x444));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = INT8_MIN;
	volatile int16_t x447 = INT16_MIN;
	uint64_t x448 = 235640637401374908LLU;
	volatile uint64_t t90 = 1521376LLU;

	t90 = ((x445<=x446)%(x447&x448));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x449 = INT32_MIN;
	static int16_t x450 = -45;
	int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MIN;
	volatile int64_t t91 = 3175514132735LL;

	t91 = ((x449<=x450)%(x451&x452));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x454 = -11189;
	int64_t x455 = INT64_MAX;

	t92 = ((x453<=x454)%(x455&x456));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x466 = INT32_MIN;
	int32_t t93 = -282927486;

	t93 = ((x465<=x466)%(x467&x468));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MIN;
	volatile uint16_t x471 = 43U;
	int8_t x472 = 18;
	int32_t t94 = 1;

	t94 = ((x469<=x470)%(x471&x472));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x473 = 589LLU;
	volatile int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MIN;
	volatile int64_t t95 = 1751LL;

	t95 = ((x473<=x474)%(x475&x476));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x477 = INT32_MAX;
	volatile int32_t x478 = -1;
	int16_t x479 = -1;
	int64_t x480 = INT64_MIN;
	volatile int64_t t96 = -327141312582565287LL;

	t96 = ((x477<=x478)%(x479&x480));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x482 = 1U;
	static int64_t x483 = -53230477612525LL;
	static int8_t x484 = INT8_MIN;
	volatile int64_t t97 = 6426388LL;

	t97 = ((x481<=x482)%(x483&x484));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x485 = INT8_MAX;
	int16_t x486 = INT16_MIN;
	uint32_t x488 = UINT32_MAX;
	uint32_t t98 = 2734336U;

	t98 = ((x485<=x486)%(x487&x488));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x489 = INT32_MIN;
	uint32_t x490 = 3225U;
	int16_t x491 = INT16_MIN;
	int8_t x492 = INT8_MIN;
	static int32_t t99 = -967007;

	t99 = ((x489<=x490)%(x491&x492));

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

