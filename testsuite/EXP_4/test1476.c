#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 57U;
int32_t x4 = 16;
volatile int32_t x7 = 3697;
static volatile int32_t x26 = -1;
volatile int32_t t3 = 826307;
int16_t x49 = 5939;
int32_t t5 = 9752275;
static int8_t x62 = INT8_MAX;
uint32_t x74 = 221230736U;
volatile int8_t x104 = -1;
int32_t t10 = 124330937;
uint16_t x105 = 994U;
volatile uint64_t t12 = 61LLU;
static int8_t x114 = INT8_MIN;
uint64_t t13 = 228LLU;
static volatile uint64_t x135 = UINT64_MAX;
static volatile int32_t x142 = INT32_MIN;
int32_t x144 = INT32_MAX;
uint32_t t18 = 654773U;
int64_t x145 = INT64_MAX;
int16_t x146 = -1;
uint8_t x147 = UINT8_MAX;
static int8_t x148 = 1;
static volatile uint8_t x164 = UINT8_MAX;
uint16_t x165 = 6633U;
volatile int32_t t21 = -13491204;
int64_t x179 = INT64_MIN;
volatile int16_t x187 = 63;
uint16_t x193 = 11U;
volatile uint64_t x200 = 1060323751966LLU;
int16_t x202 = -1;
volatile int32_t t28 = -26105083;
uint8_t x205 = 1U;
int16_t x208 = INT16_MIN;
static uint16_t x223 = UINT16_MAX;
static int32_t t31 = -8077;
static volatile int16_t x225 = 1169;
static volatile int8_t x235 = INT8_MAX;
volatile uint8_t x236 = 86U;
volatile int64_t x238 = 625357107LL;
int8_t x268 = -1;
volatile int32_t x271 = INT32_MAX;
int8_t x278 = -1;
uint32_t x280 = 2929279U;
int32_t x286 = -1;
uint32_t x300 = 130282U;
volatile uint64_t t41 = 804089104LLU;
int8_t x314 = -1;
int8_t x317 = INT8_MAX;
volatile int32_t t44 = 6144785;
int16_t x324 = -1;
int16_t x345 = INT16_MAX;
uint16_t x351 = 4740U;
volatile int64_t x355 = 946880290LL;
int32_t x386 = -1;
static volatile uint16_t x394 = 712U;
int64_t x400 = INT64_MAX;
uint8_t x425 = 21U;
static uint32_t x429 = 32U;
uint32_t x456 = UINT32_MAX;
uint64_t x461 = 2708018773LLU;
volatile uint32_t x473 = UINT32_MAX;
uint8_t x474 = 1U;
uint64_t x484 = 18LLU;
int32_t x486 = -1;
uint32_t x487 = 126556U;
int8_t x512 = -1;
uint32_t x522 = UINT32_MAX;
uint8_t x524 = UINT8_MAX;
static uint16_t x527 = UINT16_MAX;
static volatile int8_t x528 = INT8_MAX;
uint8_t x530 = UINT8_MAX;
volatile uint32_t x531 = 0U;
uint8_t x549 = UINT8_MAX;
int64_t x551 = -8793009276987LL;
int64_t x552 = -51869133348LL;
volatile int32_t t72 = -350955;
uint16_t x577 = 1659U;
static volatile int32_t x580 = -1;
int32_t t75 = 5185635;
uint8_t x581 = 6U;
int32_t x582 = -1;
static volatile int32_t t77 = 342;
uint16_t x620 = UINT16_MAX;
volatile int32_t t79 = 0;
static uint32_t x630 = 3932U;
static int32_t x660 = -1;
volatile int32_t t85 = 462413;
int8_t x663 = INT8_MIN;
int32_t t87 = -3239517;
volatile int8_t x715 = INT8_MIN;
uint8_t x718 = 3U;
volatile int16_t x726 = INT16_MAX;
uint16_t x737 = UINT16_MAX;
int32_t x739 = INT32_MIN;
int64_t x740 = INT64_MAX;
uint8_t x741 = 41U;
static volatile int64_t x743 = -14598065101030LL;
int16_t x755 = INT16_MAX;


void f0(void) {
	static uint16_t x2 = 55U;
	volatile uint16_t x3 = UINT16_MAX;
	static uint32_t t0 = 11U;

	t0 = (x1>>(x2<=(x3<x4)));

	if (t0 != 57U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	static int64_t x6 = INT64_MIN;
	volatile int64_t x8 = INT64_MIN;
	uint64_t t1 = 3133880659879535521LLU;

	t1 = (x5>>(x6<=(x7<x8)));

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = 439488846LL;
	int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	int64_t t2 = 1148967125380747LL;

	t2 = (x25>>(x26<=(x27<x28)));

	if (t2 != 219744423LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x37 = 3182279;
	volatile int64_t x38 = INT64_MIN;
	static uint8_t x39 = UINT8_MAX;
	uint32_t x40 = UINT32_MAX;

	t3 = (x37>>(x38<=(x39<x40)));

	if (t3 != 1591139) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = 1269;
	static int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	int16_t x48 = -4;
	int32_t t4 = -624;

	t4 = (x45>>(x46<=(x47<x48)));

	if (t4 != 1269) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x50 = -9865;
	uint64_t x51 = 1LLU;
	int8_t x52 = INT8_MAX;

	t5 = (x49>>(x50<=(x51<x52)));

	if (t5 != 2969) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x61 = 27U;
	volatile int32_t x63 = INT32_MAX;
	static int32_t x64 = INT32_MIN;
	uint32_t t6 = 3527U;

	t6 = (x61>>(x62<=(x63<x64)));

	if (t6 != 27U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x73 = INT64_MAX;
	static uint8_t x75 = UINT8_MAX;
	uint32_t x76 = 0U;
	int64_t t7 = INT64_MAX;

	t7 = (x73>>(x74<=(x75<x76)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x77 = UINT64_MAX;
	volatile int32_t x78 = -1;
	static int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	uint64_t t8 = 242912LLU;

	t8 = (x77>>(x78<=(x79<x80)));

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x93 = INT16_MAX;
	uint16_t x94 = 10U;
	uint64_t x95 = 75482088626LLU;
	uint32_t x96 = 169U;
	int32_t t9 = 1778;

	t9 = (x93>>(x94<=(x95<x96)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int16_t x102 = -1;
	int32_t x103 = -1;

	t10 = (x101>>(x102<=(x103<x104)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x106 = INT8_MAX;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t11 = 33777618;

	t11 = (x105>>(x106<=(x107<x108)));

	if (t11 != 994) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	uint32_t x112 = 3U;

	t12 = (x109>>(x110<=(x111<x112)));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x113 = 2LLU;
	uint32_t x115 = 104596U;
	volatile uint32_t x116 = 1189U;

	t13 = (x113>>(x114<=(x115<x116)));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x121 = INT32_MAX;
	int32_t x122 = -614;
	volatile uint16_t x123 = 115U;
	uint32_t x124 = UINT32_MAX;
	int32_t t14 = 1605;

	t14 = (x121>>(x122<=(x123<x124)));

	if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MAX;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	static int32_t t15 = -1644;

	t15 = (x129>>(x130<=(x131<x132)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x133 = 6U;
	int8_t x134 = INT8_MIN;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t16 = 18;

	t16 = (x133>>(x134<=(x135<x136)));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x137 = 252U;
	int32_t x138 = -1;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 87U;
	volatile int32_t t17 = -28064;

	t17 = (x137>>(x138<=(x139<x140)));

	if (t17 != 126) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x141 = 11645601U;
	static int8_t x143 = -1;

	t18 = (x141>>(x142<=(x143<x144)));

	if (t18 != 5822800U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t t19 = -248LL;

	t19 = (x145>>(x146<=(x147<x148)));

	if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = -1LL;
	volatile int32_t x163 = INT32_MIN;
	int64_t t20 = -12411567LL;

	t20 = (x161>>(x162<=(x163<x164)));

	if (t20 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x166 = 3137140LL;
	static uint64_t x167 = UINT64_MAX;
	uint8_t x168 = UINT8_MAX;

	t21 = (x165>>(x166<=(x167<x168)));

	if (t21 != 6633) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x177 = 898U;
	uint16_t x178 = 62U;
	uint64_t x180 = 1LLU;
	static int32_t t22 = 0;

	t22 = (x177>>(x178<=(x179<x180)));

	if (t22 != 898) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x181 = 12U;
	uint32_t x182 = 933U;
	int8_t x183 = 1;
	int8_t x184 = -1;
	int32_t t23 = 163;

	t23 = (x181>>(x182<=(x183<x184)));

	if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x185 = INT64_MAX;
	uint32_t x186 = 8535U;
	int32_t x188 = -2;
	int64_t t24 = INT64_MAX;

	t24 = (x185>>(x186<=(x187<x188)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x189 = 110U;
	volatile int16_t x190 = 1346;
	int16_t x191 = -1;
	uint8_t x192 = 1U;
	static volatile int32_t t25 = -148997;

	t25 = (x189>>(x190<=(x191<x192)));

	if (t25 != 110) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x194 = 134768073238115138LLU;
	static int64_t x195 = INT64_MIN;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t26 = 13255;

	t26 = (x193>>(x194<=(x195<x196)));

	if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x197 = 38893597LLU;
	int64_t x198 = -3LL;
	static int64_t x199 = 2078919LL;
	volatile uint64_t t27 = 165789170080LLU;

	t27 = (x197>>(x198<=(x199<x200)));

	if (t27 != 19446798LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x201 = 73U;
	int16_t x203 = -296;
	static int32_t x204 = -1;

	t28 = (x201>>(x202<=(x203<x204)));

	if (t28 != 36) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x206 = UINT8_MAX;
	volatile uint64_t x207 = 59470LLU;
	static volatile int32_t t29 = -15732510;

	t29 = (x205>>(x206<=(x207<x208)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x213 = INT8_MAX;
	int64_t x214 = -1LL;
	volatile int8_t x215 = 0;
	uint32_t x216 = 0U;
	volatile int32_t t30 = -6295838;

	t30 = (x213>>(x214<=(x215<x216)));

	if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x221 = INT32_MAX;
	static int64_t x222 = INT64_MIN;
	static int8_t x224 = INT8_MIN;

	t31 = (x221>>(x222<=(x223<x224)));

	if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x226 = 120U;
	uint16_t x227 = 2598U;
	int16_t x228 = -1;
	volatile int32_t t32 = 86773957;

	t32 = (x225>>(x226<=(x227<x228)));

	if (t32 != 1169) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x233 = 81593847U;
	uint16_t x234 = 31U;
	static uint32_t t33 = 2U;

	t33 = (x233>>(x234<=(x235<x236)));

	if (t33 != 81593847U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x239 = 1;
	static uint8_t x240 = UINT8_MAX;
	static int32_t t34 = 1;

	t34 = (x237>>(x238<=(x239<x240)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x253 = INT64_MAX;
	volatile uint8_t x254 = 83U;
	volatile uint32_t x255 = 657707U;
	volatile uint16_t x256 = 4U;
	static volatile int64_t t35 = INT64_MAX;

	t35 = (x253>>(x254<=(x255<x256)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x265 = UINT64_MAX;
	static uint64_t x266 = 67414157945LLU;
	int8_t x267 = INT8_MIN;
	static uint64_t t36 = UINT64_MAX;

	t36 = (x265>>(x266<=(x267<x268)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x269 = 19U;
	int8_t x270 = -1;
	int8_t x272 = -1;
	static int32_t t37 = 1;

	t37 = (x269>>(x270<=(x271<x272)));

	if (t37 != 9) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x277 = 1LL;
	int16_t x279 = 1;
	int64_t t38 = 129451786LL;

	t38 = (x277>>(x278<=(x279<x280)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x285 = 21694232749448LLU;
	uint32_t x287 = 89U;
	uint8_t x288 = 2U;
	uint64_t t39 = 2523LLU;

	t39 = (x285>>(x286<=(x287<x288)));

	if (t39 != 10847116374724LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x297 = 92236441552370099LLU;
	int16_t x298 = INT16_MAX;
	static uint8_t x299 = 2U;
	uint64_t t40 = 13359548964634224LLU;

	t40 = (x297>>(x298<=(x299<x300)));

	if (t40 != 92236441552370099LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x305 = 1LLU;
	uint16_t x306 = UINT16_MAX;
	static int16_t x307 = -3600;
	int64_t x308 = INT64_MAX;

	t41 = (x305>>(x306<=(x307<x308)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t42 = -7082170;

	t42 = (x309>>(x310<=(x311<x312)));

	if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x313 = 1U;
	int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t43 = 2075045;

	t43 = (x313>>(x314<=(x315<x316)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	static volatile int32_t x320 = -1;

	t44 = (x317>>(x318<=(x319<x320)));

	if (t44 != 63) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x321 = UINT64_MAX;
	static int64_t x322 = -1LL;
	static int16_t x323 = INT16_MAX;
	volatile uint64_t t45 = 41916692003220LLU;

	t45 = (x321>>(x322<=(x323<x324)));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x337 = 14U;
	uint8_t x338 = 55U;
	uint64_t x339 = 43362051688889707LLU;
	int16_t x340 = 1;
	int32_t t46 = -18893274;

	t46 = (x337>>(x338<=(x339<x340)));

	if (t46 != 14) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x346 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = 3725;
	volatile int32_t t47 = 17924;

	t47 = (x345>>(x346<=(x347<x348)));

	if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x349 = INT8_MAX;
	uint32_t x350 = 57381829U;
	volatile int16_t x352 = -1;
	volatile int32_t t48 = -409;

	t48 = (x349>>(x350<=(x351<x352)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x353 = 2;
	static uint64_t x354 = 10199121477738785LLU;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t49 = -13;

	t49 = (x353>>(x354<=(x355<x356)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x357 = INT64_MAX;
	uint8_t x358 = 3U;
	static int32_t x359 = INT32_MIN;
	uint32_t x360 = 34U;
	static volatile int64_t t50 = INT64_MAX;

	t50 = (x357>>(x358<=(x359<x360)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = 118961661912608251LL;
	int64_t x371 = -4360LL;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t51 = -610241;

	t51 = (x369>>(x370<=(x371<x372)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x377 = 0;
	int8_t x378 = -1;
	int8_t x379 = INT8_MIN;
	volatile uint16_t x380 = UINT16_MAX;
	static int32_t t52 = -7;

	t52 = (x377>>(x378<=(x379<x380)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x385 = INT16_MAX;
	volatile int16_t x387 = 1;
	int8_t x388 = -1;
	int32_t t53 = -2462377;

	t53 = (x385>>(x386<=(x387<x388)));

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x393 = 237715597584978LLU;
	int16_t x395 = 6943;
	int64_t x396 = 1LL;
	volatile uint64_t t54 = 708075LLU;

	t54 = (x393>>(x394<=(x395<x396)));

	if (t54 != 237715597584978LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x397 = UINT64_MAX;
	uint64_t x398 = 2029763324257664251LLU;
	volatile int64_t x399 = INT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x397>>(x398<=(x399<x400)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x426 = -1LL;
	uint16_t x427 = 935U;
	int16_t x428 = INT16_MIN;
	volatile int32_t t56 = 4;

	t56 = (x425>>(x426<=(x427<x428)));

	if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x430 = -1;
	static uint16_t x431 = 6558U;
	int8_t x432 = 57;
	volatile uint32_t t57 = 3249131U;

	t57 = (x429>>(x430<=(x431<x432)));

	if (t57 != 16U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x453 = 101U;
	static int64_t x454 = INT64_MAX;
	int64_t x455 = INT64_MIN;
	uint32_t t58 = 252U;

	t58 = (x453>>(x454<=(x455<x456)));

	if (t58 != 101U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x457 = 967084075;
	int64_t x458 = INT64_MAX;
	uint16_t x459 = 67U;
	int16_t x460 = INT16_MIN;
	volatile int32_t t59 = -21010643;

	t59 = (x457>>(x458<=(x459<x460)));

	if (t59 != 967084075) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x462 = INT8_MAX;
	volatile uint16_t x463 = 3U;
	uint16_t x464 = UINT16_MAX;
	static uint64_t t60 = 123996539068LLU;

	t60 = (x461>>(x462<=(x463<x464)));

	if (t60 != 2708018773LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x475 = INT32_MIN;
	static int64_t x476 = 1140719LL;
	uint32_t t61 = 26875U;

	t61 = (x473>>(x474<=(x475<x476)));

	if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x481 = UINT8_MAX;
	volatile int16_t x482 = 102;
	static volatile int16_t x483 = -32;
	int32_t t62 = -13365831;

	t62 = (x481>>(x482<=(x483<x484)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x485 = UINT32_MAX;
	static uint32_t x488 = 16180983U;
	uint32_t t63 = 171U;

	t63 = (x485>>(x486<=(x487<x488)));

	if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x505 = INT64_MAX;
	static uint8_t x506 = 11U;
	uint64_t x507 = 4470170574834372LLU;
	static uint8_t x508 = UINT8_MAX;
	int64_t t64 = INT64_MAX;

	t64 = (x505>>(x506<=(x507<x508)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x509 = INT16_MAX;
	uint8_t x510 = 0U;
	volatile uint8_t x511 = 12U;
	int32_t t65 = -14699;

	t65 = (x509>>(x510<=(x511<x512)));

	if (t65 != 16383) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x517 = 0;
	static int8_t x518 = -1;
	uint32_t x519 = 3747268U;
	static volatile uint8_t x520 = UINT8_MAX;
	volatile int32_t t66 = -2143378;

	t66 = (x517>>(x518<=(x519<x520)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x521 = 0U;
	int8_t x523 = -1;
	uint32_t t67 = 4U;

	t67 = (x521>>(x522<=(x523<x524)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x525 = UINT8_MAX;
	uint16_t x526 = UINT16_MAX;
	volatile int32_t t68 = 4517153;

	t68 = (x525>>(x526<=(x527<x528)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x529 = 2U;
	int8_t x532 = -2;
	static volatile int32_t t69 = 0;

	t69 = (x529>>(x530<=(x531<x532)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x541 = 7;
	volatile int64_t x542 = INT64_MIN;
	int64_t x543 = INT64_MIN;
	uint64_t x544 = 5LLU;
	static volatile int32_t t70 = 1126;

	t70 = (x541>>(x542<=(x543<x544)));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x545 = 2992284451659LLU;
	static int32_t x546 = -15207620;
	int32_t x547 = -1;
	int8_t x548 = INT8_MAX;
	volatile uint64_t t71 = 14550LLU;

	t71 = (x545>>(x546<=(x547<x548)));

	if (t71 != 1496142225829LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x550 = 3U;

	t72 = (x549>>(x550<=(x551<x552)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x557 = UINT64_MAX;
	volatile int32_t x558 = -8250;
	static volatile int8_t x559 = -1;
	volatile uint32_t x560 = UINT32_MAX;
	static volatile uint64_t t73 = 6848385794LLU;

	t73 = (x557>>(x558<=(x559<x560)));

	if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x565 = INT64_MAX;
	uint8_t x566 = 1U;
	uint32_t x567 = 22344425U;
	int64_t x568 = 72427977LL;
	volatile int64_t t74 = -148624264LL;

	t74 = (x565>>(x566<=(x567<x568)));

	if (t74 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x578 = 16540795417628369LL;
	static uint64_t x579 = 202224147LLU;

	t75 = (x577>>(x578<=(x579<x580)));

	if (t75 != 1659) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x583 = UINT16_MAX;
	uint32_t x584 = 111U;
	volatile int32_t t76 = 0;

	t76 = (x581>>(x582<=(x583<x584)));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x605 = 13;
	int64_t x606 = -28LL;
	volatile int16_t x607 = -920;
	int32_t x608 = -1;

	t77 = (x605>>(x606<=(x607<x608)));

	if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x609 = 100U;
	int8_t x610 = -1;
	static int16_t x611 = 2;
	int16_t x612 = 49;
	volatile int32_t t78 = 31127;

	t78 = (x609>>(x610<=(x611<x612)));

	if (t78 != 50) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x617 = INT8_MAX;
	int8_t x618 = INT8_MAX;
	static uint16_t x619 = 1U;

	t79 = (x617>>(x618<=(x619<x620)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x625 = UINT32_MAX;
	volatile int16_t x626 = 33;
	uint64_t x627 = 1731983158382475LLU;
	volatile uint16_t x628 = 19897U;
	static uint32_t t80 = UINT32_MAX;

	t80 = (x625>>(x626<=(x627<x628)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x629 = INT8_MAX;
	volatile uint64_t x631 = UINT64_MAX;
	int8_t x632 = 1;
	volatile int32_t t81 = -1022009;

	t81 = (x629>>(x630<=(x631<x632)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x637 = 111U;
	int32_t x638 = INT32_MIN;
	int64_t x639 = -1LL;
	int64_t x640 = INT64_MIN;
	volatile int32_t t82 = 1;

	t82 = (x637>>(x638<=(x639<x640)));

	if (t82 != 55) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x645 = 7U;
	uint16_t x646 = 14212U;
	uint64_t x647 = 9180172LLU;
	volatile uint32_t x648 = 1684807497U;
	int32_t t83 = -25208;

	t83 = (x645>>(x646<=(x647<x648)));

	if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x653 = 1574;
	static int64_t x654 = INT64_MIN;
	int64_t x655 = INT64_MIN;
	uint16_t x656 = 5739U;
	static int32_t t84 = 869236;

	t84 = (x653>>(x654<=(x655<x656)));

	if (t84 != 787) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x657 = 0;
	int8_t x658 = INT8_MAX;
	volatile int8_t x659 = -1;

	t85 = (x657>>(x658<=(x659<x660)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x661 = 765U;
	int16_t x662 = -1;
	int32_t x664 = INT32_MIN;
	volatile int32_t t86 = -1;

	t86 = (x661>>(x662<=(x663<x664)));

	if (t86 != 382) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x673 = INT8_MAX;
	volatile uint32_t x674 = 63U;
	static uint16_t x675 = UINT16_MAX;
	uint32_t x676 = 453305548U;

	t87 = (x673>>(x674<=(x675<x676)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x689 = 786372788566774684LLU;
	int32_t x690 = -1;
	int8_t x691 = -1;
	int8_t x692 = INT8_MAX;
	uint64_t t88 = 9007633LLU;

	t88 = (x689>>(x690<=(x691<x692)));

	if (t88 != 393186394283387342LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x697 = 13;
	uint32_t x698 = 218512992U;
	uint8_t x699 = 0U;
	int32_t x700 = 406358;
	int32_t t89 = -1;

	t89 = (x697>>(x698<=(x699<x700)));

	if (t89 != 13) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x701 = INT16_MAX;
	int64_t x702 = INT64_MAX;
	int64_t x703 = -1LL;
	int64_t x704 = INT64_MIN;
	int32_t t90 = 435;

	t90 = (x701>>(x702<=(x703<x704)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x709 = INT16_MAX;
	int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MAX;
	uint8_t x712 = 22U;
	volatile int32_t t91 = -15941818;

	t91 = (x709>>(x710<=(x711<x712)));

	if (t91 != 16383) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x713 = 12495U;
	int16_t x714 = INT16_MAX;
	static volatile uint16_t x716 = 57U;
	static volatile int32_t t92 = -29508;

	t92 = (x713>>(x714<=(x715<x716)));

	if (t92 != 12495) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x717 = 39;
	static int8_t x719 = INT8_MAX;
	int16_t x720 = INT16_MAX;
	static volatile int32_t t93 = -87886276;

	t93 = (x717>>(x718<=(x719<x720)));

	if (t93 != 39) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x725 = 176;
	int64_t x727 = INT64_MIN;
	int64_t x728 = -14688911704936LL;
	volatile int32_t t94 = -13105;

	t94 = (x725>>(x726<=(x727<x728)));

	if (t94 != 176) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x738 = 6002490375333916LLU;
	volatile int32_t t95 = -115662959;

	t95 = (x737>>(x738<=(x739<x740)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x742 = 410808669829LLU;
	uint64_t x744 = 209055533041903246LLU;
	int32_t t96 = -11;

	t96 = (x741>>(x742<=(x743<x744)));

	if (t96 != 41) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x749 = 9U;
	volatile uint16_t x750 = UINT16_MAX;
	volatile uint32_t x751 = 248U;
	int64_t x752 = -1LL;
	uint32_t t97 = 576233554U;

	t97 = (x749>>(x750<=(x751<x752)));

	if (t97 != 9U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x753 = 0U;
	int16_t x754 = -1;
	int16_t x756 = INT16_MIN;
	volatile int32_t t98 = 7522683;

	t98 = (x753>>(x754<=(x755<x756)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x773 = 801LL;
	static int16_t x774 = -22;
	uint32_t x775 = 1556010576U;
	uint16_t x776 = 9U;
	int64_t t99 = -582752754986035154LL;

	t99 = (x773>>(x774<=(x775<x776)));

	if (t99 != 400LL) { NG(); } else { ; }
	
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

