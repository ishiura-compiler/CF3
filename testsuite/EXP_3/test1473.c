#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -214;
int32_t t3 = -17380319;
volatile int32_t t4 = -1;
static uint8_t x102 = 101U;
int32_t x105 = INT32_MIN;
int64_t x106 = 1156185373023928LL;
int16_t x119 = INT16_MIN;
int32_t t9 = 78593;
int16_t x139 = -39;
volatile int64_t x151 = INT64_MIN;
volatile int64_t x156 = -1LL;
static volatile int32_t t16 = 1015750898;
uint8_t x182 = 0U;
int64_t x201 = INT64_MIN;
int8_t x203 = INT8_MIN;
static int32_t t18 = 16612570;
volatile int32_t t21 = -620;
int8_t x228 = INT8_MIN;
uint8_t x238 = 1U;
int8_t x255 = 2;
int16_t x263 = INT16_MIN;
int8_t x275 = -47;
volatile int32_t t29 = 1;
static uint16_t x289 = 5U;
static volatile int32_t x321 = INT32_MAX;
volatile int32_t x323 = -1;
int32_t x326 = -27;
int16_t x335 = -851;
volatile int8_t x362 = -19;
int32_t x363 = INT32_MIN;
int16_t x374 = -1;
int32_t t39 = -3;
int64_t x381 = 93555LL;
int32_t x387 = INT32_MIN;
uint8_t x388 = UINT8_MAX;
static int32_t x392 = -1;
uint16_t x393 = 7889U;
volatile uint8_t x417 = 2U;
static volatile int32_t t48 = -259295;
uint32_t x430 = 1429476U;
int32_t x455 = INT32_MIN;
volatile int64_t x461 = -2398484186LL;
int64_t x463 = -104685588LL;
int16_t x473 = -1;
int16_t x484 = 1;
int32_t t55 = -5039392;
int16_t x510 = INT16_MAX;
int32_t x511 = -369;
volatile int32_t t58 = -505982;
int64_t x514 = 63105999295320022LL;
static int64_t x523 = INT64_MIN;
volatile uint32_t x527 = 3U;
volatile int8_t x538 = -1;
volatile int16_t x540 = 495;
int32_t t64 = -313230982;
static uint16_t x562 = 0U;
uint16_t x566 = 22227U;
volatile uint32_t x576 = 28207U;
uint32_t x586 = UINT32_MAX;
volatile uint16_t x588 = 1121U;
volatile uint32_t x597 = 54U;
int32_t t74 = -26417895;
uint16_t x605 = 120U;
volatile int32_t t77 = -429;
static int32_t x620 = 2;
int64_t x625 = -1LL;
int64_t x629 = INT64_MIN;
static volatile int16_t x639 = -3945;
uint32_t x640 = UINT32_MAX;
uint32_t x647 = 815U;
int32_t x670 = INT32_MIN;
volatile uint8_t x672 = 74U;
int32_t t86 = -89642639;
static int32_t x673 = -2670;
uint64_t x675 = 1543734LLU;
static int64_t x676 = -1LL;
static volatile int32_t x681 = INT32_MIN;
int64_t x684 = INT64_MAX;
static int32_t t89 = 2923823;
int16_t x731 = INT16_MIN;
volatile int8_t x732 = -1;
uint32_t x781 = UINT32_MAX;
volatile int64_t x783 = INT64_MIN;
int16_t x784 = 0;
volatile int32_t t98 = 754858;
static volatile int8_t x810 = INT8_MAX;
static int32_t t99 = 2977;


void f0(void) {
	static int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = 1U;
	volatile uint32_t x40 = UINT32_MAX;
	volatile int32_t t0 = -28;

	t0 = ((x37<=x38)/(x39<x40));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x45 = 3;
	uint16_t x46 = UINT16_MAX;
	uint64_t x47 = 23050607263481187LLU;
	volatile int64_t x48 = -38530593LL;

	t1 = ((x45<=x46)/(x47<x48));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x61 = -24072058LL;
	int32_t x62 = INT32_MIN;
	volatile uint32_t x63 = 5334691U;
	uint64_t x64 = UINT64_MAX;
	int32_t t2 = -150;

	t2 = ((x61<=x62)/(x63<x64));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x77 = UINT16_MAX;
	static uint32_t x78 = UINT32_MAX;
	static uint32_t x79 = 486704046U;
	int64_t x80 = INT64_MAX;

	t3 = ((x77<=x78)/(x79<x80));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x81 = INT64_MAX;
	uint64_t x82 = 2025998583501LLU;
	volatile int16_t x83 = INT16_MAX;
	static uint32_t x84 = 147189U;

	t4 = ((x81<=x82)/(x83<x84));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x89 = -267;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = -1291684;
	int16_t x92 = INT16_MIN;
	volatile int32_t t5 = -93;

	t5 = ((x89<=x90)/(x91<x92));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x93 = INT16_MAX;
	static int8_t x94 = INT8_MIN;
	static uint64_t x95 = 13428628LLU;
	volatile uint64_t x96 = UINT64_MAX;
	volatile int32_t t6 = -309;

	t6 = ((x93<=x94)/(x95<x96));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x101 = -7;
	volatile int32_t x103 = -488729;
	int16_t x104 = 3;
	int32_t t7 = 4445065;

	t7 = ((x101<=x102)/(x103<x104));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x107 = 29756132U;
	int64_t x108 = 43295138152LL;
	volatile int32_t t8 = 24318;

	t8 = ((x105<=x106)/(x107<x108));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = -2431209976165LL;
	static int8_t x120 = -14;

	t9 = ((x117<=x118)/(x119<x120));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x133 = -1;
	int16_t x134 = 1531;
	int64_t x135 = -32087685615LL;
	int8_t x136 = -1;
	volatile int32_t t10 = -635132;

	t10 = ((x133<=x134)/(x135<x136));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x137 = 37U;
	volatile int64_t x138 = INT64_MIN;
	static int32_t x140 = -1;
	int32_t t11 = 297732786;

	t11 = ((x137<=x138)/(x139<x140));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x149 = 496767LLU;
	int64_t x150 = -1LL;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t12 = 34;

	t12 = ((x149<=x150)/(x151<x152));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x153 = UINT64_MAX;
	int8_t x154 = 0;
	int8_t x155 = INT8_MIN;
	int32_t t13 = 4215;

	t13 = ((x153<=x154)/(x155<x156));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x157 = -1;
	int32_t x158 = INT32_MIN;
	volatile int8_t x159 = 1;
	uint16_t x160 = UINT16_MAX;
	int32_t t14 = -13815721;

	t14 = ((x157<=x158)/(x159<x160));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x161 = 2489;
	int8_t x162 = INT8_MIN;
	int64_t x163 = -1LL;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t15 = 457;

	t15 = ((x161<=x162)/(x163<x164));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x177 = INT64_MIN;
	int32_t x178 = 5741;
	int32_t x179 = -1;
	static int16_t x180 = INT16_MAX;

	t16 = ((x177<=x178)/(x179<x180));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x181 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 3U;
	int32_t t17 = 5346325;

	t17 = ((x181<=x182)/(x183<x184));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x202 = INT32_MAX;
	uint8_t x204 = 7U;

	t18 = ((x201<=x202)/(x203<x204));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x205 = 46039093819443645LL;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = 24;
	volatile uint16_t x208 = UINT16_MAX;
	volatile int32_t t19 = -2;

	t19 = ((x205<=x206)/(x207<x208));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = -1;
	static uint8_t x211 = UINT8_MAX;
	static volatile uint64_t x212 = UINT64_MAX;
	int32_t t20 = -1107539;

	t20 = ((x209<=x210)/(x211<x212));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x213 = 1U;
	int16_t x214 = -49;
	static volatile uint32_t x215 = 4U;
	uint32_t x216 = 55622663U;

	t21 = ((x213<=x214)/(x215<x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x217 = INT64_MIN;
	static volatile int32_t x218 = -1;
	int8_t x219 = INT8_MAX;
	volatile uint64_t x220 = 30464LLU;
	volatile int32_t t22 = 347077;

	t22 = ((x217<=x218)/(x219<x220));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x221 = 1176072870997368199LL;
	int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t23 = -120;

	t23 = ((x221<=x222)/(x223<x224));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x225 = -1;
	volatile int64_t x226 = 3799658434133154792LL;
	volatile uint64_t x227 = 113260907083289LLU;
	volatile int32_t t24 = 5789928;

	t24 = ((x225<=x226)/(x227<x228));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x237 = 0U;
	int16_t x239 = -1;
	int32_t x240 = INT32_MAX;
	int32_t t25 = -7;

	t25 = ((x237<=x238)/(x239<x240));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x245 = 643U;
	int8_t x246 = INT8_MIN;
	int64_t x247 = 15LL;
	int64_t x248 = INT64_MAX;
	int32_t t26 = -8;

	t26 = ((x245<=x246)/(x247<x248));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MAX;
	int32_t x256 = 15;
	volatile int32_t t27 = -7851;

	t27 = ((x253<=x254)/(x255<x256));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x261 = -1LL;
	uint8_t x262 = 7U;
	uint16_t x264 = 13529U;
	volatile int32_t t28 = 4;

	t28 = ((x261<=x262)/(x263<x264));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x273 = -56;
	int32_t x274 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;

	t29 = ((x273<=x274)/(x275<x276));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MAX;
	int16_t x287 = -7;
	int64_t x288 = 30289LL;
	int32_t t30 = -12690229;

	t30 = ((x285<=x286)/(x287<x288));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x290 = INT64_MAX;
	int32_t x291 = -1;
	int64_t x292 = 404145027764534LL;
	static int32_t t31 = 913;

	t31 = ((x289<=x290)/(x291<x292));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x313 = 969;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = 5;
	uint8_t x316 = 46U;
	int32_t t32 = 274;

	t32 = ((x313<=x314)/(x315<x316));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x322 = INT16_MAX;
	volatile int64_t x324 = INT64_MAX;
	int32_t t33 = -39939374;

	t33 = ((x321<=x322)/(x323<x324));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x325 = INT16_MIN;
	uint32_t x327 = 91891U;
	static int8_t x328 = -2;
	int32_t t34 = -1450453;

	t34 = ((x325<=x326)/(x327<x328));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x333 = INT16_MIN;
	int16_t x334 = 0;
	static uint8_t x336 = 2U;
	volatile int32_t t35 = 6214;

	t35 = ((x333<=x334)/(x335<x336));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x361 = -1;
	uint32_t x364 = UINT32_MAX;
	int32_t t36 = 258;

	t36 = ((x361<=x362)/(x363<x364));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	static volatile int32_t x367 = INT32_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t37 = -49408250;

	t37 = ((x365<=x366)/(x367<x368));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x369 = INT32_MIN;
	static int8_t x370 = INT8_MAX;
	static int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t38 = 13;

	t38 = ((x369<=x370)/(x371<x372));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x373 = INT8_MIN;
	int64_t x375 = -483254LL;
	uint16_t x376 = UINT16_MAX;

	t39 = ((x373<=x374)/(x375<x376));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x377 = INT16_MIN;
	static int32_t x378 = -5633953;
	static int16_t x379 = INT16_MIN;
	int32_t x380 = 30;
	int32_t t40 = -4310171;

	t40 = ((x377<=x378)/(x379<x380));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	volatile int32_t t41 = 6;

	t41 = ((x381<=x382)/(x383<x384));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x385 = INT32_MIN;
	volatile int32_t x386 = INT32_MIN;
	static int32_t t42 = -2;

	t42 = ((x385<=x386)/(x387<x388));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x389 = INT16_MAX;
	int16_t x390 = 185;
	int8_t x391 = INT8_MIN;
	volatile int32_t t43 = -6;

	t43 = ((x389<=x390)/(x391<x392));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x394 = INT32_MIN;
	int32_t x395 = -798;
	int8_t x396 = INT8_MAX;
	int32_t t44 = 4046549;

	t44 = ((x393<=x394)/(x395<x396));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x397 = INT64_MAX;
	int8_t x398 = INT8_MIN;
	int32_t x399 = -2890;
	volatile uint16_t x400 = 13U;
	int32_t t45 = -56377;

	t45 = ((x397<=x398)/(x399<x400));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x401 = 4U;
	int8_t x402 = INT8_MIN;
	static uint32_t x403 = 208U;
	volatile int16_t x404 = -1;
	volatile int32_t t46 = 262127;

	t46 = ((x401<=x402)/(x403<x404));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x409 = UINT32_MAX;
	volatile uint16_t x410 = 408U;
	uint64_t x411 = 135251223LLU;
	int64_t x412 = INT64_MAX;
	int32_t t47 = -5493668;

	t47 = ((x409<=x410)/(x411<x412));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x418 = -1;
	int32_t x419 = INT32_MIN;
	static int64_t x420 = -1LL;

	t48 = ((x417<=x418)/(x419<x420));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x429 = 13U;
	volatile uint16_t x431 = 10U;
	uint16_t x432 = 47U;
	static int32_t t49 = -37646;

	t49 = ((x429<=x430)/(x431<x432));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x437 = INT16_MAX;
	static uint16_t x438 = UINT16_MAX;
	static uint32_t x439 = UINT32_MAX;
	uint64_t x440 = UINT64_MAX;
	int32_t t50 = 12119;

	t50 = ((x437<=x438)/(x439<x440));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x453 = INT32_MAX;
	int64_t x454 = -1387LL;
	int8_t x456 = INT8_MIN;
	int32_t t51 = 241;

	t51 = ((x453<=x454)/(x455<x456));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x462 = INT32_MIN;
	uint64_t x464 = UINT64_MAX;
	int32_t t52 = 47938;

	t52 = ((x461<=x462)/(x463<x464));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x465 = INT8_MIN;
	volatile uint16_t x466 = 0U;
	volatile int64_t x467 = INT64_MIN;
	uint8_t x468 = 29U;
	int32_t t53 = 841650;

	t53 = ((x465<=x466)/(x467<x468));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x474 = -1;
	int8_t x475 = INT8_MIN;
	volatile int64_t x476 = 91449837LL;
	volatile int32_t t54 = 26;

	t54 = ((x473<=x474)/(x475<x476));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x481 = INT64_MIN;
	int16_t x482 = INT16_MIN;
	int32_t x483 = -32478742;

	t55 = ((x481<=x482)/(x483<x484));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x489 = -1;
	static volatile int32_t x490 = 22370120;
	int32_t x491 = INT32_MIN;
	int16_t x492 = 41;
	int32_t t56 = 1074538;

	t56 = ((x489<=x490)/(x491<x492));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x505 = 15U;
	volatile int32_t x506 = INT32_MIN;
	volatile uint16_t x507 = 366U;
	int32_t x508 = 1872576;
	int32_t t57 = 4835;

	t57 = ((x505<=x506)/(x507<x508));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x509 = INT32_MIN;
	volatile int32_t x512 = -4;

	t58 = ((x509<=x510)/(x511<x512));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x513 = 1;
	uint8_t x515 = 14U;
	uint64_t x516 = UINT64_MAX;
	volatile int32_t t59 = -205294401;

	t59 = ((x513<=x514)/(x515<x516));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x521 = 722;
	int16_t x522 = INT16_MIN;
	int32_t x524 = INT32_MIN;
	int32_t t60 = -29;

	t60 = ((x521<=x522)/(x523<x524));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x525 = -1;
	uint8_t x526 = UINT8_MAX;
	uint32_t x528 = 291051855U;
	int32_t t61 = -86408;

	t61 = ((x525<=x526)/(x527<x528));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x529 = INT8_MIN;
	uint64_t x530 = 85LLU;
	int64_t x531 = -1LL;
	uint8_t x532 = UINT8_MAX;
	int32_t t62 = 48;

	t62 = ((x529<=x530)/(x531<x532));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x533 = -15;
	int64_t x534 = 6013644036569LL;
	int32_t x535 = -1;
	uint8_t x536 = 0U;
	static int32_t t63 = -24218212;

	t63 = ((x533<=x534)/(x535<x536));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x537 = 528;
	int32_t x539 = -1;

	t64 = ((x537<=x538)/(x539<x540));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x545 = 1U;
	static int32_t x546 = 6047620;
	uint16_t x547 = 0U;
	uint32_t x548 = UINT32_MAX;
	static int32_t t65 = 1;

	t65 = ((x545<=x546)/(x547<x548));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x549 = INT64_MIN;
	uint32_t x550 = 991U;
	int32_t x551 = -1;
	volatile uint16_t x552 = UINT16_MAX;
	int32_t t66 = -1;

	t66 = ((x549<=x550)/(x551<x552));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x561 = 116945189;
	static int8_t x563 = -1;
	uint16_t x564 = 14U;
	static int32_t t67 = -178332;

	t67 = ((x561<=x562)/(x563<x564));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x565 = 7537609U;
	int16_t x567 = -1;
	int64_t x568 = INT64_MAX;
	volatile int32_t t68 = 20024;

	t68 = ((x565<=x566)/(x567<x568));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x569 = -924607;
	int64_t x570 = -729276443551LL;
	volatile uint8_t x571 = 14U;
	uint64_t x572 = 3011023777335462554LLU;
	volatile int32_t t69 = -1057;

	t69 = ((x569<=x570)/(x571<x572));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x573 = -1;
	static int16_t x574 = -1;
	static volatile uint8_t x575 = UINT8_MAX;
	volatile int32_t t70 = 1;

	t70 = ((x573<=x574)/(x575<x576));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x581 = -3;
	int8_t x582 = INT8_MAX;
	int16_t x583 = INT16_MIN;
	uint16_t x584 = 1U;
	volatile int32_t t71 = 2;

	t71 = ((x581<=x582)/(x583<x584));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x585 = INT64_MIN;
	int32_t x587 = -1;
	volatile int32_t t72 = 51;

	t72 = ((x585<=x586)/(x587<x588));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x589 = INT8_MIN;
	static int8_t x590 = INT8_MIN;
	volatile int16_t x591 = -28;
	int32_t x592 = -1;
	int32_t t73 = 1;

	t73 = ((x589<=x590)/(x591<x592));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x598 = INT32_MAX;
	uint8_t x599 = 12U;
	uint32_t x600 = 1468638501U;

	t74 = ((x597<=x598)/(x599<x600));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x606 = INT8_MAX;
	int16_t x607 = -1;
	int64_t x608 = 61LL;
	volatile int32_t t75 = 21;

	t75 = ((x605<=x606)/(x607<x608));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x609 = -10;
	volatile int32_t x610 = INT32_MIN;
	int16_t x611 = INT16_MIN;
	uint8_t x612 = 2U;
	volatile int32_t t76 = 785186;

	t76 = ((x609<=x610)/(x611<x612));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x613 = 1334448140374172LLU;
	volatile int32_t x614 = -1;
	volatile int8_t x615 = INT8_MIN;
	static uint16_t x616 = UINT16_MAX;

	t77 = ((x613<=x614)/(x615<x616));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x617 = -1241;
	uint16_t x618 = UINT16_MAX;
	volatile int32_t x619 = -1;
	volatile int32_t t78 = -137;

	t78 = ((x617<=x618)/(x619<x620));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x621 = -17;
	static int32_t x622 = 1170;
	int8_t x623 = -8;
	int8_t x624 = INT8_MAX;
	int32_t t79 = 0;

	t79 = ((x621<=x622)/(x623<x624));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x626 = INT64_MAX;
	uint32_t x627 = 114917386U;
	static int8_t x628 = -1;
	volatile int32_t t80 = -647884;

	t80 = ((x625<=x626)/(x627<x628));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x630 = INT8_MIN;
	int64_t x631 = -1LL;
	int64_t x632 = 3915768809LL;
	int32_t t81 = 989691082;

	t81 = ((x629<=x630)/(x631<x632));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x633 = INT64_MIN;
	static int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MIN;
	int32_t x636 = -1;
	static volatile int32_t t82 = 501329;

	t82 = ((x633<=x634)/(x635<x636));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x637 = 6757U;
	int32_t x638 = -38;
	static volatile int32_t t83 = -1;

	t83 = ((x637<=x638)/(x639<x640));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x645 = INT8_MAX;
	static int64_t x646 = INT64_MIN;
	uint32_t x648 = UINT32_MAX;
	int32_t t84 = -2;

	t84 = ((x645<=x646)/(x647<x648));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x661 = 594U;
	volatile int8_t x662 = -1;
	int8_t x663 = INT8_MIN;
	volatile int32_t x664 = INT32_MAX;
	int32_t t85 = -13208229;

	t85 = ((x661<=x662)/(x663<x664));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x669 = 3614633LLU;
	static volatile int8_t x671 = -4;

	t86 = ((x669<=x670)/(x671<x672));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x674 = 18591637493554118LLU;
	volatile int32_t t87 = 75;

	t87 = ((x673<=x674)/(x675<x676));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x682 = UINT16_MAX;
	static int8_t x683 = 41;
	volatile int32_t t88 = 34;

	t88 = ((x681<=x682)/(x683<x684));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x685 = 1;
	volatile int32_t x686 = INT32_MIN;
	volatile int16_t x687 = -9;
	int32_t x688 = -1;

	t89 = ((x685<=x686)/(x687<x688));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x713 = 1LL;
	uint32_t x714 = 1U;
	int16_t x715 = INT16_MIN;
	volatile uint8_t x716 = 92U;
	volatile int32_t t90 = 45624;

	t90 = ((x713<=x714)/(x715<x716));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x725 = 14;
	static int16_t x726 = 2573;
	int32_t x727 = INT32_MIN;
	int32_t x728 = -40186;
	volatile int32_t t91 = 1542;

	t91 = ((x725<=x726)/(x727<x728));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x729 = 761U;
	volatile uint16_t x730 = 6165U;
	int32_t t92 = 11;

	t92 = ((x729<=x730)/(x731<x732));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x745 = INT8_MIN;
	static int32_t x746 = -15867378;
	uint32_t x747 = 0U;
	int8_t x748 = INT8_MIN;
	int32_t t93 = 70;

	t93 = ((x745<=x746)/(x747<x748));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x749 = INT64_MAX;
	int64_t x750 = 69LL;
	volatile uint16_t x751 = UINT16_MAX;
	int32_t x752 = INT32_MAX;
	static int32_t t94 = 15806835;

	t94 = ((x749<=x750)/(x751<x752));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x753 = -521;
	uint16_t x754 = 656U;
	uint64_t x755 = 141LLU;
	volatile int32_t x756 = INT32_MAX;
	int32_t t95 = 4873565;

	t95 = ((x753<=x754)/(x755<x756));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x782 = 0;
	int32_t t96 = 41;

	t96 = ((x781<=x782)/(x783<x784));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x793 = 19U;
	static int16_t x794 = 1337;
	uint16_t x795 = 9U;
	static uint8_t x796 = UINT8_MAX;
	volatile int32_t t97 = -944;

	t97 = ((x793<=x794)/(x795<x796));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x801 = 0U;
	int16_t x802 = 15;
	uint16_t x803 = 35U;
	uint16_t x804 = 51U;

	t98 = ((x801<=x802)/(x803<x804));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x809 = INT16_MIN;
	int32_t x811 = INT32_MIN;
	int8_t x812 = 0;

	t99 = ((x809<=x810)/(x811<x812));

	if (t99 != 1) { NG(); } else { ; }
	
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

