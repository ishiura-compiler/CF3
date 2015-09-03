#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 105123U;
int64_t x13 = INT64_MAX;
int16_t x14 = -1;
int16_t x15 = 125;
uint32_t x17 = UINT32_MAX;
static int32_t x18 = 0;
static uint32_t x19 = 31435U;
uint8_t x46 = 0U;
int16_t x47 = 942;
static int64_t x49 = 177498950412334LL;
int64_t x50 = -1LL;
int64_t t5 = 5263381203292LL;
static int32_t x66 = -1356383;
int64_t x69 = INT64_MIN;
static uint8_t x93 = UINT8_MAX;
uint16_t x104 = 12837U;
int16_t x123 = INT16_MIN;
static volatile int32_t t13 = -7084026;
static int64_t x130 = INT64_MIN;
volatile int8_t x132 = 10;
int32_t x150 = -793115;
int16_t x151 = -1;
static volatile int16_t x165 = -1;
int16_t x166 = INT16_MIN;
uint64_t t20 = 2299394074922520167LLU;
static int64_t x194 = -3064315543585935LL;
uint8_t x196 = 2U;
volatile int32_t x203 = 609;
uint16_t x207 = 16U;
volatile uint32_t t23 = 14262462U;
int64_t x215 = INT64_MAX;
uint8_t x216 = 107U;
int32_t t25 = -1331135;
static uint8_t x231 = UINT8_MAX;
int32_t x234 = -1;
volatile int64_t t27 = 367955771086LL;
uint16_t x255 = UINT16_MAX;
int16_t x270 = 8;
int64_t x301 = -10LL;
int32_t x303 = 9;
int64_t t35 = -1124600499897893333LL;
int32_t x311 = INT32_MAX;
uint32_t x325 = 623U;
int64_t t38 = 220211901LL;
static int32_t x336 = INT32_MAX;
uint16_t x340 = 8U;
int64_t t40 = 640028865944LL;
volatile int8_t x344 = INT8_MAX;
volatile int64_t t41 = -825298063644200LL;
uint64_t x347 = 6147548214LLU;
uint64_t x349 = 118LLU;
volatile int64_t t44 = 23513915743604888LL;
static int16_t x362 = -385;
volatile uint16_t x366 = 0U;
uint32_t x372 = UINT32_MAX;
volatile int64_t x400 = 54649LL;
volatile int64_t t57 = -217596LL;
static int16_t x475 = INT16_MAX;
int64_t t58 = 6LL;
int32_t x517 = INT32_MIN;
volatile int64_t t62 = -492685LL;
int16_t x545 = -1;
volatile int16_t x548 = INT16_MAX;
volatile int32_t t65 = -148568016;
uint64_t x549 = 229512092LLU;
uint32_t t67 = 637016776U;
int8_t x561 = 12;
int8_t x562 = INT8_MAX;
volatile uint32_t x571 = 42542U;
static int64_t x577 = INT64_MIN;
static int64_t x589 = INT64_MAX;
int32_t x590 = INT32_MIN;
int8_t x591 = INT8_MAX;
uint64_t x592 = 479905258411LLU;
static int16_t x599 = INT16_MAX;
static int64_t x603 = -1LL;
uint32_t x611 = 52589323U;
volatile int8_t x621 = -1;
volatile int32_t x625 = INT32_MAX;
uint16_t x628 = 28068U;
volatile int16_t x630 = INT16_MAX;
uint32_t x631 = 60923U;
int64_t x635 = -4401688689916490LL;
int32_t t80 = -3;
volatile int32_t x659 = INT32_MIN;
uint64_t t84 = 29791728711LLU;
volatile uint32_t x669 = UINT32_MAX;
uint64_t x671 = UINT64_MAX;
static int64_t x672 = INT64_MIN;
static int64_t x674 = INT64_MIN;
int16_t x676 = INT16_MAX;
static volatile int32_t x677 = -1;
volatile uint8_t x680 = UINT8_MAX;
int64_t x729 = 0LL;
uint64_t x731 = UINT64_MAX;
int64_t t90 = 1974LL;
static volatile uint32_t x760 = 93U;
volatile uint16_t x783 = UINT16_MAX;
uint16_t x787 = UINT16_MAX;
static int16_t x796 = INT16_MAX;
uint64_t x803 = UINT64_MAX;
int64_t x816 = -12754698LL;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int64_t x2 = -1028LL;
	int32_t x3 = -97;
	int16_t x4 = -242;

	t0 = ((x1%(x2<x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x16 = INT64_MIN;
	volatile int64_t t1 = 66061478LL;

	t1 = ((x13%(x14<x15))/x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x20 = INT8_MAX;
	uint32_t t2 = 77679204U;

	t2 = ((x17%(x18<x19))/x20);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 16419621873409LLU;
	int64_t x23 = INT64_MIN;
	static int32_t x24 = -1;
	volatile int32_t t3 = -1008658808;

	t3 = ((x21%(x22<x23))/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x45 = -1;
	uint8_t x48 = 24U;
	volatile int32_t t4 = 463;

	t4 = ((x45%(x46<x47))/x48);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x51 = 477;
	int64_t x52 = INT64_MIN;

	t5 = ((x49%(x50<x51))/x52);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x61 = -2103;
	int64_t x62 = -1665LL;
	static uint32_t x63 = 3U;
	volatile int8_t x64 = INT8_MAX;
	int32_t t6 = -8;

	t6 = ((x61%(x62<x63))/x64);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x65 = 83556604U;
	int8_t x67 = -34;
	static volatile int16_t x68 = INT16_MAX;
	uint32_t t7 = 135805U;

	t7 = ((x65%(x66<x67))/x68);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x70 = 3LLU;
	static uint16_t x71 = UINT16_MAX;
	uint64_t x72 = 16LLU;
	volatile uint64_t t8 = 114538LLU;

	t8 = ((x69%(x70<x71))/x72);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x85 = 27U;
	int64_t x86 = INT64_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	uint64_t t9 = 130494851LLU;

	t9 = ((x85%(x86<x87))/x88);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	int16_t x96 = INT16_MIN;
	static int32_t t10 = 51435;

	t10 = ((x93%(x94<x95))/x96);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x101 = 14017LLU;
	static int64_t x102 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	volatile uint64_t t11 = 5550811894401739246LLU;

	t11 = ((x101%(x102<x103))/x104);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x121 = -337LL;
	volatile int32_t x122 = INT32_MIN;
	static int8_t x124 = -7;
	int64_t t12 = 915879889LL;

	t12 = ((x121%(x122<x123))/x124);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x125 = INT32_MAX;
	int64_t x126 = INT64_MIN;
	int64_t x127 = 317910654437LL;
	int32_t x128 = 2;

	t13 = ((x125%(x126<x127))/x128);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x129 = -271;
	int8_t x131 = -8;
	static volatile int32_t t14 = -1030289277;

	t14 = ((x129%(x130<x131))/x132);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x141 = 3166U;
	static volatile int32_t x142 = INT32_MIN;
	int16_t x143 = -1;
	int64_t x144 = -1LL;
	int64_t t15 = 11087299813087264LL;

	t15 = ((x141%(x142<x143))/x144);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x149 = 169U;
	static uint32_t x152 = UINT32_MAX;
	uint32_t t16 = 9462U;

	t16 = ((x149%(x150<x151))/x152);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 62LLU;
	static int16_t x163 = 6632;
	int32_t x164 = INT32_MIN;
	volatile uint64_t t17 = 24737243207843LLU;

	t17 = ((x161%(x162<x163))/x164);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x167 = -840;
	int32_t x168 = INT32_MAX;
	volatile int32_t t18 = -2;

	t18 = ((x165%(x166<x167))/x168);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x177 = UINT32_MAX;
	int16_t x178 = INT16_MAX;
	uint64_t x179 = 20195448924427LLU;
	static int16_t x180 = INT16_MIN;
	static uint32_t t19 = 26570U;

	t19 = ((x177%(x178<x179))/x180);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x185 = 796957913144624229LLU;
	static volatile int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MAX;
	static int8_t x188 = -7;

	t20 = ((x185%(x186<x187))/x188);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x193 = INT32_MIN;
	static int16_t x195 = INT16_MAX;
	volatile int32_t t21 = -205;

	t21 = ((x193%(x194<x195))/x196);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x201 = -32421260151020LL;
	int64_t x202 = -1523649LL;
	int8_t x204 = -1;
	int64_t t22 = 50386551116210162LL;

	t22 = ((x201%(x202<x203))/x204);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x205 = 284U;
	volatile uint8_t x206 = 8U;
	uint32_t x208 = 839117757U;

	t23 = ((x205%(x206<x207))/x208);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x213 = INT32_MIN;
	volatile int32_t x214 = -343;
	volatile int32_t t24 = -8493990;

	t24 = ((x213%(x214<x215))/x216);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x225 = -1;
	static int16_t x226 = 31;
	static uint32_t x227 = 23850642U;
	volatile int8_t x228 = INT8_MIN;

	t25 = ((x225%(x226<x227))/x228);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x229 = 783;
	volatile int16_t x230 = -1;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t26 = -1;

	t26 = ((x229%(x230<x231))/x232);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x233 = -1;
	int64_t x235 = 177LL;
	int64_t x236 = 76379711375358246LL;

	t27 = ((x233%(x234<x235))/x236);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x241 = 212LLU;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MAX;
	uint16_t x244 = 2U;
	volatile uint64_t t28 = 111937595630537960LLU;

	t28 = ((x241%(x242<x243))/x244);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x253 = 37;
	int8_t x254 = INT8_MIN;
	static int16_t x256 = -5;
	volatile int32_t t29 = 234610706;

	t29 = ((x253%(x254<x255))/x256);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x265 = UINT8_MAX;
	static int32_t x266 = INT32_MIN;
	static int8_t x267 = INT8_MIN;
	static uint16_t x268 = 1U;
	volatile int32_t t30 = -246528;

	t30 = ((x265%(x266<x267))/x268);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x269 = -2;
	volatile uint32_t x271 = 212629873U;
	int16_t x272 = -1;
	int32_t t31 = -20;

	t31 = ((x269%(x270<x271))/x272);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int16_t x274 = INT16_MIN;
	volatile uint8_t x275 = 49U;
	static int64_t x276 = INT64_MIN;
	int64_t t32 = 0LL;

	t32 = ((x273%(x274<x275))/x276);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = 527474240156524LL;
	static int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MAX;
	static int64_t t33 = 159LL;

	t33 = ((x285%(x286<x287))/x288);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x289 = UINT8_MAX;
	volatile uint8_t x290 = 3U;
	int16_t x291 = 111;
	int16_t x292 = INT16_MAX;
	static int32_t t34 = -49962;

	t34 = ((x289%(x290<x291))/x292);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x302 = -1;
	uint32_t x304 = 1975U;

	t35 = ((x301%(x302<x303))/x304);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x305 = 14U;
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = 3025LL;
	int16_t x308 = INT16_MIN;
	int32_t t36 = -177694994;

	t36 = ((x305%(x306<x307))/x308);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x309 = 295U;
	volatile uint8_t x310 = 4U;
	int8_t x312 = INT8_MIN;
	int32_t t37 = -3506;

	t37 = ((x309%(x310<x311))/x312);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x326 = 704U;
	volatile int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;

	t38 = ((x325%(x326<x327))/x328);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	volatile uint64_t x335 = 385297LLU;
	int32_t t39 = -2619348;

	t39 = ((x333%(x334<x335))/x336);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x337 = -1LL;
	uint64_t x338 = 38999161LLU;
	int16_t x339 = INT16_MIN;

	t40 = ((x337%(x338<x339))/x340);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x341 = INT64_MIN;
	static int32_t x342 = -1;
	uint8_t x343 = 0U;

	t41 = ((x341%(x342<x343))/x344);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x345 = UINT8_MAX;
	uint8_t x346 = 5U;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t42 = 1703;

	t42 = ((x345%(x346<x347))/x348);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x350 = 231U;
	static int16_t x351 = 14278;
	uint16_t x352 = UINT16_MAX;
	volatile uint64_t t43 = 12LLU;

	t43 = ((x349%(x350<x351))/x352);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x353 = -415920287955858LL;
	static int8_t x354 = INT8_MIN;
	static uint16_t x355 = UINT16_MAX;
	volatile int64_t x356 = INT64_MIN;

	t44 = ((x353%(x354<x355))/x356);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x361 = 13877;
	uint64_t x363 = UINT64_MAX;
	volatile uint64_t x364 = 13607LLU;
	uint64_t t45 = 378760LLU;

	t45 = ((x361%(x362<x363))/x364);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x365 = 12;
	int64_t x367 = INT64_MAX;
	uint16_t x368 = UINT16_MAX;
	static int32_t t46 = 378;

	t46 = ((x365%(x366<x367))/x368);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x369 = -14;
	volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	static uint32_t t47 = 8293405U;

	t47 = ((x369%(x370<x371))/x372);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x373 = 807594489983302LL;
	int16_t x374 = -2;
	static uint16_t x375 = 139U;
	static int16_t x376 = INT16_MIN;
	volatile int64_t t48 = -92358709LL;

	t48 = ((x373%(x374<x375))/x376);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x377 = INT64_MAX;
	static int64_t x378 = -1LL;
	int8_t x379 = INT8_MAX;
	uint8_t x380 = 2U;
	volatile int64_t t49 = 3090LL;

	t49 = ((x377%(x378<x379))/x380);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x393 = 517U;
	int8_t x394 = INT8_MIN;
	int16_t x395 = -1;
	uint32_t x396 = 1691U;
	uint32_t t50 = 170242U;

	t50 = ((x393%(x394<x395))/x396);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MIN;
	int8_t x399 = -3;
	volatile int64_t t51 = -152167206544452355LL;

	t51 = ((x397%(x398<x399))/x400);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x417 = -1;
	static int16_t x418 = -1;
	static int64_t x419 = 2149324344742566LL;
	static volatile int8_t x420 = INT8_MIN;
	int32_t t52 = -392636445;

	t52 = ((x417%(x418<x419))/x420);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x429 = -1;
	static uint8_t x430 = 115U;
	volatile int64_t x431 = 305LL;
	static uint32_t x432 = 714U;
	volatile uint32_t t53 = 35153U;

	t53 = ((x429%(x430<x431))/x432);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x441 = UINT32_MAX;
	static int64_t x442 = INT64_MIN;
	static uint32_t x443 = UINT32_MAX;
	volatile uint32_t x444 = 492669U;
	volatile uint32_t t54 = 4051158U;

	t54 = ((x441%(x442<x443))/x444);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x445 = -1;
	volatile uint64_t x446 = 260113484LLU;
	int32_t x447 = -1;
	int64_t x448 = -5957400916368LL;
	int64_t t55 = -112689356827380LL;

	t55 = ((x445%(x446<x447))/x448);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x453 = 1U;
	volatile uint8_t x454 = UINT8_MAX;
	static int16_t x455 = 2033;
	uint64_t x456 = UINT64_MAX;
	uint64_t t56 = 1333241704LLU;

	t56 = ((x453%(x454<x455))/x456);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x469 = INT64_MAX;
	volatile int32_t x470 = 125;
	int8_t x471 = INT8_MAX;
	volatile int16_t x472 = INT16_MIN;

	t57 = ((x469%(x470<x471))/x472);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x473 = -2732;
	static volatile uint32_t x474 = 431U;
	volatile int64_t x476 = INT64_MIN;

	t58 = ((x473%(x474<x475))/x476);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x477 = 1941306248U;
	static uint8_t x478 = UINT8_MAX;
	int64_t x479 = INT64_MAX;
	volatile int64_t x480 = -1LL;
	int64_t t59 = 30403148LL;

	t59 = ((x477%(x478<x479))/x480);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x493 = -1LL;
	int64_t x494 = INT64_MIN;
	int32_t x495 = INT32_MAX;
	int32_t x496 = INT32_MIN;
	int64_t t60 = 29LL;

	t60 = ((x493%(x494<x495))/x496);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x497 = -1057813258791460632LL;
	static int16_t x498 = INT16_MAX;
	int64_t x499 = INT64_MAX;
	volatile int64_t x500 = INT64_MIN;
	volatile int64_t t61 = 429LL;

	t61 = ((x497%(x498<x499))/x500);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x518 = -213539;
	int16_t x519 = INT16_MIN;
	int64_t x520 = 533LL;

	t62 = ((x517%(x518<x519))/x520);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x529 = -1;
	uint64_t x530 = 557240148383702437LLU;
	volatile int64_t x531 = INT64_MAX;
	static int16_t x532 = 440;
	volatile int32_t t63 = -4488696;

	t63 = ((x529%(x530<x531))/x532);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x537 = INT64_MIN;
	int32_t x538 = 4;
	int8_t x539 = INT8_MAX;
	volatile uint32_t x540 = 41558U;
	static volatile int64_t t64 = -587496LL;

	t64 = ((x537%(x538<x539))/x540);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x546 = -1102395912138805288LL;
	int16_t x547 = -1;

	t65 = ((x545%(x546<x547))/x548);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x550 = 32708U;
	int8_t x551 = -1;
	uint16_t x552 = 9212U;
	volatile uint64_t t66 = 1825527801081LLU;

	t66 = ((x549%(x550<x551))/x552);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x553 = UINT32_MAX;
	static volatile uint8_t x554 = 5U;
	volatile uint8_t x555 = UINT8_MAX;
	int32_t x556 = -2236657;

	t67 = ((x553%(x554<x555))/x556);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x557 = 1U;
	uint8_t x558 = 1U;
	uint32_t x559 = 5783U;
	int64_t x560 = -1LL;
	int64_t t68 = -1714699210061373381LL;

	t68 = ((x557%(x558<x559))/x560);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x563 = UINT64_MAX;
	static int32_t x564 = INT32_MIN;
	int32_t t69 = 1;

	t69 = ((x561%(x562<x563))/x564);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x569 = INT64_MIN;
	uint8_t x570 = 1U;
	int16_t x572 = INT16_MIN;
	static volatile int64_t t70 = -26430705588558507LL;

	t70 = ((x569%(x570<x571))/x572);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x578 = -3;
	uint8_t x579 = UINT8_MAX;
	uint64_t x580 = 144680LLU;
	static uint64_t t71 = 1255LLU;

	t71 = ((x577%(x578<x579))/x580);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t t72 = 2197229LLU;

	t72 = ((x589%(x590<x591))/x592);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x597 = UINT64_MAX;
	uint8_t x598 = UINT8_MAX;
	uint8_t x600 = 74U;
	volatile uint64_t t73 = 909408405LLU;

	t73 = ((x597%(x598<x599))/x600);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x601 = 102U;
	int32_t x602 = INT32_MIN;
	uint16_t x604 = 1U;
	int32_t t74 = -71;

	t74 = ((x601%(x602<x603))/x604);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x609 = -1;
	int64_t x610 = INT64_MIN;
	int8_t x612 = -1;
	static volatile int32_t t75 = -93995;

	t75 = ((x609%(x610<x611))/x612);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x613 = UINT32_MAX;
	static volatile int64_t x614 = INT64_MIN;
	volatile uint64_t x615 = UINT64_MAX;
	int8_t x616 = 62;
	static uint32_t t76 = 319445U;

	t76 = ((x613%(x614<x615))/x616);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x622 = INT8_MIN;
	uint8_t x623 = 115U;
	int64_t x624 = -1LL;
	volatile int64_t t77 = 19645966557485LL;

	t77 = ((x621%(x622<x623))/x624);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x626 = -2;
	int64_t x627 = -1LL;
	int32_t t78 = -48;

	t78 = ((x625%(x626<x627))/x628);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x629 = UINT8_MAX;
	uint8_t x632 = 17U;
	static int32_t t79 = 1;

	t79 = ((x629%(x630<x631))/x632);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x633 = INT16_MIN;
	uint64_t x634 = 20LLU;
	volatile int16_t x636 = -108;

	t80 = ((x633%(x634<x635))/x636);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x637 = 6U;
	int32_t x638 = -1;
	int8_t x639 = 0;
	static int32_t x640 = -1;
	int32_t t81 = 47569407;

	t81 = ((x637%(x638<x639))/x640);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x645 = INT32_MIN;
	uint16_t x646 = 897U;
	uint32_t x647 = 18559U;
	int32_t x648 = -1;
	int32_t t82 = 213517;

	t82 = ((x645%(x646<x647))/x648);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x657 = -1;
	volatile int64_t x658 = -5728949811028LL;
	int32_t x660 = INT32_MAX;
	volatile int32_t t83 = -1;

	t83 = ((x657%(x658<x659))/x660);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x661 = 2139683320LLU;
	int32_t x662 = 5;
	int32_t x663 = INT32_MAX;
	int16_t x664 = INT16_MAX;

	t84 = ((x661%(x662<x663))/x664);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x670 = 17;
	int64_t t85 = -112674783737148LL;

	t85 = ((x669%(x670<x671))/x672);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x673 = -323;
	volatile uint8_t x675 = 4U;
	int32_t t86 = -3711;

	t86 = ((x673%(x674<x675))/x676);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x678 = UINT8_MAX;
	uint16_t x679 = 1021U;
	volatile int32_t t87 = -1817619;

	t87 = ((x677%(x678<x679))/x680);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x685 = 14256;
	int64_t x686 = INT64_MIN;
	int64_t x687 = -7LL;
	int32_t x688 = INT32_MIN;
	int32_t t88 = -477189;

	t88 = ((x685%(x686<x687))/x688);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x725 = 35;
	static volatile int64_t x726 = -322030131017018LL;
	static int8_t x727 = -1;
	int64_t x728 = -4245590183LL;
	int64_t t89 = -9LL;

	t89 = ((x725%(x726<x727))/x728);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x730 = -341222;
	uint32_t x732 = UINT32_MAX;

	t90 = ((x729%(x730<x731))/x732);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x733 = -1;
	uint16_t x734 = UINT16_MAX;
	int64_t x735 = INT64_MAX;
	uint8_t x736 = 62U;
	static volatile int32_t t91 = 391;

	t91 = ((x733%(x734<x735))/x736);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x737 = 116;
	int8_t x738 = -1;
	static int16_t x739 = 11209;
	volatile int8_t x740 = INT8_MAX;
	volatile int32_t t92 = -91168008;

	t92 = ((x737%(x738<x739))/x740);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x757 = 21915419LLU;
	int64_t x758 = INT64_MIN;
	static int32_t x759 = 816997;
	static uint64_t t93 = 1LLU;

	t93 = ((x757%(x758<x759))/x760);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x773 = -1871;
	int8_t x774 = INT8_MIN;
	static int32_t x775 = -1;
	volatile int8_t x776 = -1;
	int32_t t94 = 35860432;

	t94 = ((x773%(x774<x775))/x776);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x781 = INT64_MAX;
	int32_t x782 = -1;
	volatile int8_t x784 = -1;
	int64_t t95 = -90202534420335LL;

	t95 = ((x781%(x782<x783))/x784);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x785 = -1;
	int16_t x786 = 459;
	static int32_t x788 = INT32_MIN;
	static int32_t t96 = -36306;

	t96 = ((x785%(x786<x787))/x788);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x793 = INT8_MIN;
	static int64_t x794 = INT64_MIN;
	uint16_t x795 = 491U;
	static int32_t t97 = 160299981;

	t97 = ((x793%(x794<x795))/x796);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x801 = UINT8_MAX;
	static uint32_t x802 = 297149U;
	int32_t x804 = INT32_MIN;
	int32_t t98 = -1405;

	t98 = ((x801%(x802<x803))/x804);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x813 = -190260557;
	uint16_t x814 = 2U;
	uint32_t x815 = 1963U;
	static volatile int64_t t99 = 43011LL;

	t99 = ((x813%(x814<x815))/x816);

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

