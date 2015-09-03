#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 230805291;
uint64_t x13 = 25945440369354LLU;
uint64_t x20 = 1340977413818LLU;
int32_t x30 = INT32_MAX;
int32_t t7 = 2266458;
volatile uint64_t x59 = 18062777016071035LLU;
uint64_t x71 = UINT64_MAX;
static int32_t x72 = INT32_MIN;
static volatile int64_t x99 = 68790190LL;
volatile uint8_t x100 = UINT8_MAX;
static uint64_t x109 = 116202LLU;
static int64_t x113 = INT64_MAX;
uint64_t x126 = 147734542LLU;
int32_t t18 = 7;
int64_t x147 = INT64_MIN;
int32_t t22 = 561;
uint16_t x155 = UINT16_MAX;
static int32_t t24 = -2;
int16_t x187 = 0;
int16_t x193 = INT16_MIN;
static volatile uint64_t x195 = 71550347445342139LLU;
int64_t x251 = -1LL;
volatile int16_t x266 = -9727;
uint32_t x268 = UINT32_MAX;
int64_t x269 = INT64_MIN;
volatile int32_t t39 = 97;
int64_t x289 = 0LL;
int16_t x293 = INT16_MIN;
volatile int32_t t42 = 6;
volatile int32_t x318 = -1;
int16_t x320 = -1;
int32_t x332 = INT32_MIN;
uint16_t x339 = 1999U;
int64_t x346 = -1LL;
uint16_t x356 = 453U;
volatile int32_t t49 = -6;
uint64_t x359 = 544565911696382184LLU;
uint8_t x367 = 30U;
int64_t x369 = 57LL;
volatile uint16_t x370 = UINT16_MAX;
uint8_t x372 = 8U;
int16_t x383 = INT16_MAX;
uint32_t x404 = 1102U;
volatile uint32_t x407 = 29095U;
int16_t x409 = INT16_MIN;
int16_t x410 = INT16_MIN;
int64_t x415 = INT64_MIN;
static int64_t x417 = -1336063539938LL;
volatile uint32_t x420 = 1963187880U;
int8_t x425 = INT8_MAX;
volatile int8_t x426 = 0;
int32_t x427 = -1376;
static int8_t x433 = INT8_MIN;
uint16_t x441 = 2U;
uint32_t x450 = 29U;
int8_t x466 = -51;
int32_t x469 = INT32_MIN;
int8_t x473 = INT8_MIN;
volatile uint8_t x474 = UINT8_MAX;
uint64_t x477 = UINT64_MAX;
static int32_t t76 = -68757;
volatile int16_t x493 = 21;
uint16_t x495 = 76U;
int32_t t77 = 1;
volatile uint8_t x501 = 1U;
volatile uint32_t x504 = 59352600U;
static volatile int32_t t79 = 0;
volatile int32_t t80 = -1;
uint16_t x513 = UINT16_MAX;
uint64_t x521 = 45344LLU;
int64_t x529 = -1990203439155312LL;
static int64_t x530 = 1LL;
uint64_t x535 = UINT64_MAX;
uint16_t x536 = 3653U;
int8_t x537 = INT8_MIN;
uint8_t x549 = UINT8_MAX;
volatile int64_t x555 = 12527774114LL;
int16_t x560 = -1;
int32_t t91 = -24;
int8_t x570 = INT8_MIN;
static uint16_t x573 = UINT16_MAX;
uint8_t x579 = UINT8_MAX;
uint8_t x595 = UINT8_MAX;
volatile int32_t t98 = 129625;
volatile int32_t t99 = -7176054;


void f0(void) {
	uint64_t x1 = 69285360660014901LLU;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -1;
	volatile int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 6;

	t0 = ((x1*x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MIN;

	t1 = ((x5*x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int16_t x10 = -1;
	static int64_t x11 = -1LL;
	static int8_t x12 = -46;
	volatile int32_t t2 = -5780664;

	t2 = ((x9*x10)==(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = 4122U;
	static int16_t x15 = 1;
	uint64_t x16 = 7LLU;
	static volatile int32_t t3 = 0;

	t3 = ((x13*x14)==(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 50330;
	static int16_t x18 = 7;
	volatile uint8_t x19 = 11U;
	static volatile int32_t t4 = 1052766;

	t4 = ((x17*x18)==(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	static uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 668831252390676256LLU;
	volatile int32_t t5 = -1;

	t5 = ((x21*x22)==(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	int8_t x26 = -2;
	static volatile int32_t x27 = 591;
	static volatile int64_t x28 = -1LL;
	int32_t t6 = -10;

	t6 = ((x25*x26)==(x27+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int16_t x31 = INT16_MIN;
	volatile int16_t x32 = INT16_MIN;

	t7 = ((x29*x30)==(x31+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 412560LLU;
	uint32_t x36 = 7U;
	static int32_t t8 = 177;

	t8 = ((x33*x34)==(x35+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x57 = -1;
	int8_t x58 = -4;
	int8_t x60 = INT8_MIN;
	volatile int32_t t9 = -78836169;

	t9 = ((x57*x58)==(x59+x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 1U;
	static uint64_t x62 = 3LLU;
	static uint64_t x63 = 10903506250056LLU;
	int64_t x64 = -1LL;
	int32_t t10 = -233102;

	t10 = ((x61*x62)==(x63+x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 24U;
	int16_t x66 = 5;
	int16_t x67 = INT16_MIN;
	static int8_t x68 = -1;
	volatile int32_t t11 = 31;

	t11 = ((x65*x66)==(x67+x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 12U;
	volatile int32_t t12 = 13772190;

	t12 = ((x69*x70)==(x71+x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 102U;
	static uint16_t x74 = 4U;
	int32_t x75 = INT32_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t13 = -41;

	t13 = ((x73*x74)==(x75+x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = -14;
	int8_t x94 = 25;
	int16_t x95 = INT16_MIN;
	int64_t x96 = 1LL;
	int32_t t14 = -1437;

	t14 = ((x93*x94)==(x95+x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x97 = INT16_MIN;
	uint8_t x98 = UINT8_MAX;
	static int32_t t15 = -1383;

	t15 = ((x97*x98)==(x99+x100));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = 1004134504004LL;
	uint16_t x112 = UINT16_MAX;
	int32_t t16 = 61578;

	t16 = ((x109*x110)==(x111+x112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x114 = 4780959269LLU;
	static int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t17 = 239;

	t17 = ((x113*x114)==(x115+x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x125 = INT16_MAX;
	int16_t x127 = -1;
	int32_t x128 = INT32_MAX;

	t18 = ((x125*x126)==(x127+x128));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x129 = INT16_MAX;
	static volatile int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t19 = -212111625;

	t19 = ((x129*x130)==(x131+x132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x137 = 2963137LL;
	uint64_t x138 = 6650044777LLU;
	volatile uint8_t x139 = 0U;
	static int8_t x140 = -1;
	int32_t t20 = 63383669;

	t20 = ((x137*x138)==(x139+x140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x145 = -1;
	int32_t x146 = -1;
	static int16_t x148 = 3146;
	volatile int32_t t21 = -86980350;

	t21 = ((x145*x146)==(x147+x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x149 = 0U;
	uint32_t x150 = 6901965U;
	int16_t x151 = -25;
	int64_t x152 = -1LL;

	t22 = ((x149*x150)==(x151+x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = 39056U;
	static uint32_t x154 = 9U;
	int8_t x156 = 0;
	volatile int32_t t23 = 2610;

	t23 = ((x153*x154)==(x155+x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x161 = -1;
	volatile uint32_t x162 = UINT32_MAX;
	static uint16_t x163 = 1406U;
	uint8_t x164 = 12U;

	t24 = ((x161*x162)==(x163+x164));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x165 = 149980561U;
	volatile int8_t x166 = INT8_MIN;
	uint16_t x167 = 2U;
	volatile uint32_t x168 = 15370U;
	volatile int32_t t25 = 1;

	t25 = ((x165*x166)==(x167+x168));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = 1;
	int16_t x186 = -1558;
	int16_t x188 = INT16_MAX;
	volatile int32_t t26 = 0;

	t26 = ((x185*x186)==(x187+x188));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x194 = -347;
	int32_t x196 = INT32_MIN;
	int32_t t27 = 23;

	t27 = ((x193*x194)==(x195+x196));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x201 = 1032389489U;
	int32_t x202 = INT32_MAX;
	volatile int32_t x203 = INT32_MAX;
	static uint64_t x204 = 8794070711918456LLU;
	static volatile int32_t t28 = -8;

	t28 = ((x201*x202)==(x203+x204));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x209 = 5U;
	uint16_t x210 = 3682U;
	static uint32_t x211 = UINT32_MAX;
	int64_t x212 = INT64_MIN;
	int32_t t29 = -5321457;

	t29 = ((x209*x210)==(x211+x212));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x213 = UINT8_MAX;
	static uint8_t x214 = 0U;
	volatile int8_t x215 = INT8_MIN;
	static volatile uint8_t x216 = 79U;
	volatile int32_t t30 = 117638878;

	t30 = ((x213*x214)==(x215+x216));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x225 = INT64_MIN;
	uint64_t x226 = 6978618972LLU;
	int16_t x227 = 2895;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t31 = 27;

	t31 = ((x225*x226)==(x227+x228));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MAX;
	int64_t x252 = INT64_MAX;
	volatile int32_t t32 = 2279;

	t32 = ((x249*x250)==(x251+x252));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x257 = 61;
	volatile uint16_t x258 = 15U;
	volatile int8_t x259 = -1;
	int32_t x260 = INT32_MAX;
	volatile int32_t t33 = 46645;

	t33 = ((x257*x258)==(x259+x260));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x261 = -9;
	uint8_t x262 = 83U;
	int16_t x263 = -1033;
	int32_t x264 = INT32_MAX;
	int32_t t34 = 43476897;

	t34 = ((x261*x262)==(x263+x264));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x265 = INT8_MIN;
	uint16_t x267 = 3081U;
	volatile int32_t t35 = 159387;

	t35 = ((x265*x266)==(x267+x268));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	static uint32_t x272 = 976787435U;
	volatile int32_t t36 = 29514993;

	t36 = ((x269*x270)==(x271+x272));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x273 = 1546996306U;
	int64_t x274 = 15LL;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t37 = -5;

	t37 = ((x273*x274)==(x275+x276));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x277 = 8038;
	volatile uint16_t x278 = 1U;
	volatile uint8_t x279 = 84U;
	uint16_t x280 = 1U;
	int32_t t38 = 1;

	t38 = ((x277*x278)==(x279+x280));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x285 = INT32_MAX;
	uint64_t x286 = 827462969LLU;
	uint64_t x287 = 812154LLU;
	static uint16_t x288 = UINT16_MAX;

	t39 = ((x285*x286)==(x287+x288));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x290 = -1;
	volatile uint16_t x291 = 0U;
	volatile int64_t x292 = INT64_MIN;
	volatile int32_t t40 = -158;

	t40 = ((x289*x290)==(x291+x292));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x294 = 35985U;
	static int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	int32_t t41 = 12795;

	t41 = ((x293*x294)==(x295+x296));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x297 = -1LL;
	int16_t x298 = -12;
	uint64_t x299 = 1LLU;
	static int32_t x300 = -1;

	t42 = ((x297*x298)==(x299+x300));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x317 = 21928U;
	uint32_t x319 = 785556631U;
	volatile int32_t t43 = -15541;

	t43 = ((x317*x318)==(x319+x320));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x321 = 15U;
	volatile int32_t x322 = 50261095;
	static volatile int16_t x323 = INT16_MIN;
	uint32_t x324 = 3612U;
	int32_t t44 = 597155392;

	t44 = ((x321*x322)==(x323+x324));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x329 = 63476U;
	int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MAX;
	int32_t t45 = 3993692;

	t45 = ((x329*x330)==(x331+x332));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x333 = INT16_MAX;
	uint16_t x334 = 1378U;
	int32_t x335 = -14548;
	int64_t x336 = -635LL;
	int32_t t46 = -8987;

	t46 = ((x333*x334)==(x335+x336));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x337 = 43750988484559LLU;
	int64_t x338 = -1LL;
	int16_t x340 = -3918;
	int32_t t47 = 102708;

	t47 = ((x337*x338)==(x339+x340));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x345 = 157409030442LL;
	volatile int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t48 = 401;

	t48 = ((x345*x346)==(x347+x348));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x353 = -376;
	static uint16_t x354 = 12660U;
	int16_t x355 = INT16_MIN;

	t49 = ((x353*x354)==(x355+x356));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x357 = 737;
	int16_t x358 = -1;
	uint64_t x360 = 2262550072831LLU;
	volatile int32_t t50 = -1;

	t50 = ((x357*x358)==(x359+x360));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x361 = 21;
	int64_t x362 = 30938863LL;
	uint8_t x363 = 9U;
	uint64_t x364 = 60582442807672LLU;
	int32_t t51 = 611038064;

	t51 = ((x361*x362)==(x363+x364));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x365 = 4;
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	static int32_t t52 = -214925;

	t52 = ((x365*x366)==(x367+x368));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x371 = INT64_MIN;
	int32_t t53 = 1;

	t53 = ((x369*x370)==(x371+x372));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x377 = 453061783519503LLU;
	static uint32_t x378 = 620U;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t54 = -455;

	t54 = ((x377*x378)==(x379+x380));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x381 = 0U;
	int64_t x382 = INT64_MIN;
	static volatile int16_t x384 = INT16_MIN;
	static int32_t t55 = -108232709;

	t55 = ((x381*x382)==(x383+x384));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = 13U;
	uint8_t x391 = 85U;
	volatile int16_t x392 = -907;
	static int32_t t56 = 1;

	t56 = ((x389*x390)==(x391+x392));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x394 = 28629129U;
	static int8_t x395 = INT8_MIN;
	uint32_t x396 = 32U;
	int32_t t57 = 76432;

	t57 = ((x393*x394)==(x395+x396));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x401 = 5;
	static int16_t x402 = -1;
	static volatile int32_t x403 = INT32_MAX;
	int32_t t58 = -1;

	t58 = ((x401*x402)==(x403+x404));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x405 = -1;
	int8_t x406 = 1;
	volatile uint8_t x408 = UINT8_MAX;
	int32_t t59 = -106;

	t59 = ((x405*x406)==(x407+x408));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t60 = -253;

	t60 = ((x409*x410)==(x411+x412));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = UINT32_MAX;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t61 = 1;

	t61 = ((x413*x414)==(x415+x416));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x418 = 1749LL;
	volatile int64_t x419 = INT64_MIN;
	int32_t t62 = 34;

	t62 = ((x417*x418)==(x419+x420));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x421 = 174U;
	int32_t x422 = -1;
	volatile uint8_t x423 = 3U;
	int32_t x424 = 7;
	volatile int32_t t63 = -176;

	t63 = ((x421*x422)==(x423+x424));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x428 = UINT8_MAX;
	static int32_t t64 = 154400996;

	t64 = ((x425*x426)==(x427+x428));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x434 = 249;
	int16_t x435 = -1;
	static uint16_t x436 = 376U;
	static volatile int32_t t65 = 2195;

	t65 = ((x433*x434)==(x435+x436));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x437 = -1852184LL;
	int64_t x438 = 86LL;
	static uint8_t x439 = UINT8_MAX;
	static uint32_t x440 = 4U;
	volatile int32_t t66 = -264164;

	t66 = ((x437*x438)==(x439+x440));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x442 = 8725U;
	static int32_t x443 = -1;
	uint32_t x444 = 26U;
	static int32_t t67 = -7;

	t67 = ((x441*x442)==(x443+x444));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x445 = INT16_MAX;
	volatile uint32_t x446 = 3U;
	int8_t x447 = -1;
	int16_t x448 = INT16_MAX;
	volatile int32_t t68 = 60;

	t68 = ((x445*x446)==(x447+x448));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x449 = INT16_MIN;
	static volatile uint32_t x451 = UINT32_MAX;
	int32_t x452 = INT32_MIN;
	int32_t t69 = -50182082;

	t69 = ((x449*x450)==(x451+x452));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x453 = INT8_MIN;
	int64_t x454 = -325981005933255LL;
	uint64_t x455 = UINT64_MAX;
	static int16_t x456 = -4467;
	static int32_t t70 = 9566;

	t70 = ((x453*x454)==(x455+x456));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x457 = 179U;
	volatile int16_t x458 = -1;
	int8_t x459 = INT8_MAX;
	volatile int64_t x460 = -7319LL;
	int32_t t71 = -127;

	t71 = ((x457*x458)==(x459+x460));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x465 = INT16_MIN;
	uint16_t x467 = 18U;
	int32_t x468 = INT32_MIN;
	int32_t t72 = 64776;

	t72 = ((x465*x466)==(x467+x468));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x470 = UINT32_MAX;
	volatile int64_t x471 = INT64_MIN;
	static uint32_t x472 = UINT32_MAX;
	volatile int32_t t73 = 2566;

	t73 = ((x469*x470)==(x471+x472));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x475 = -320397750;
	uint16_t x476 = 13527U;
	volatile int32_t t74 = -23;

	t74 = ((x473*x474)==(x475+x476));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x478 = -1LL;
	volatile int32_t x479 = -1;
	int32_t x480 = -1;
	volatile int32_t t75 = 347;

	t75 = ((x477*x478)==(x479+x480));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x481 = -1;
	uint16_t x482 = 1U;
	uint16_t x483 = UINT16_MAX;
	int8_t x484 = 1;

	t76 = ((x481*x482)==(x483+x484));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x494 = INT16_MAX;
	static int16_t x496 = INT16_MIN;

	t77 = ((x493*x494)==(x495+x496));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x502 = UINT64_MAX;
	int16_t x503 = INT16_MIN;
	volatile int32_t t78 = 0;

	t78 = ((x501*x502)==(x503+x504));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x505 = 3LLU;
	static uint16_t x506 = 17U;
	int16_t x507 = -75;
	volatile int8_t x508 = INT8_MAX;

	t79 = ((x505*x506)==(x507+x508));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x509 = 6U;
	static volatile int8_t x510 = -1;
	uint8_t x511 = UINT8_MAX;
	int8_t x512 = -29;

	t80 = ((x509*x510)==(x511+x512));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x514 = 20U;
	int8_t x515 = INT8_MIN;
	static int16_t x516 = INT16_MIN;
	volatile int32_t t81 = 0;

	t81 = ((x513*x514)==(x515+x516));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x517 = INT64_MAX;
	static uint16_t x518 = 0U;
	int16_t x519 = INT16_MIN;
	int16_t x520 = INT16_MIN;
	static int32_t t82 = 66902830;

	t82 = ((x517*x518)==(x519+x520));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x522 = -1;
	uint8_t x523 = 124U;
	uint64_t x524 = UINT64_MAX;
	volatile int32_t t83 = -1022;

	t83 = ((x521*x522)==(x523+x524));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x531 = 2U;
	uint32_t x532 = 9U;
	static volatile int32_t t84 = 6;

	t84 = ((x529*x530)==(x531+x532));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x533 = INT64_MAX;
	uint64_t x534 = 13357LLU;
	int32_t t85 = 17;

	t85 = ((x533*x534)==(x535+x536));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x538 = 43916385LL;
	uint16_t x539 = 69U;
	int16_t x540 = 9;
	int32_t t86 = 1;

	t86 = ((x537*x538)==(x539+x540));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x545 = 6LLU;
	static int32_t x546 = INT32_MIN;
	int16_t x547 = INT16_MAX;
	uint8_t x548 = UINT8_MAX;
	int32_t t87 = -131;

	t87 = ((x545*x546)==(x547+x548));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x550 = 0;
	int32_t x551 = 18;
	int8_t x552 = 3;
	volatile int32_t t88 = 24671;

	t88 = ((x549*x550)==(x551+x552));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x553 = -1;
	int8_t x554 = INT8_MIN;
	volatile uint8_t x556 = 75U;
	static int32_t t89 = -33195093;

	t89 = ((x553*x554)==(x555+x556));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x557 = UINT16_MAX;
	uint16_t x558 = 6U;
	volatile int8_t x559 = INT8_MIN;
	volatile int32_t t90 = 59;

	t90 = ((x557*x558)==(x559+x560));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x565 = -114334593;
	int32_t x566 = -4;
	static int16_t x567 = -1;
	int16_t x568 = INT16_MAX;

	t91 = ((x565*x566)==(x567+x568));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x569 = -1;
	int8_t x571 = INT8_MAX;
	int32_t x572 = -1;
	volatile int32_t t92 = 479027;

	t92 = ((x569*x570)==(x571+x572));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x574 = INT16_MAX;
	uint16_t x575 = 44U;
	int64_t x576 = -1LL;
	volatile int32_t t93 = 59347;

	t93 = ((x573*x574)==(x575+x576));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x577 = 7U;
	uint16_t x578 = 419U;
	int64_t x580 = INT64_MIN;
	static int32_t t94 = 163365830;

	t94 = ((x577*x578)==(x579+x580));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x585 = INT64_MIN;
	uint64_t x586 = 924881894386LLU;
	int16_t x587 = INT16_MIN;
	int16_t x588 = 2;
	volatile int32_t t95 = -153083;

	t95 = ((x585*x586)==(x587+x588));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x589 = -1;
	int8_t x590 = 7;
	volatile int8_t x591 = INT8_MIN;
	volatile uint8_t x592 = 0U;
	volatile int32_t t96 = -79781856;

	t96 = ((x589*x590)==(x591+x592));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x593 = -1;
	static int8_t x594 = 18;
	volatile int16_t x596 = INT16_MAX;
	static int32_t t97 = -13163621;

	t97 = ((x593*x594)==(x595+x596));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x597 = -1;
	static int16_t x598 = INT16_MIN;
	static uint32_t x599 = UINT32_MAX;
	int64_t x600 = -2799966LL;

	t98 = ((x597*x598)==(x599+x600));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x601 = UINT16_MAX;
	volatile uint16_t x602 = 2864U;
	static int32_t x603 = INT32_MAX;
	int16_t x604 = -1;

	t99 = ((x601*x602)==(x603+x604));

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

