#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
uint32_t x4 = 219774924U;
uint16_t x5 = 22556U;
uint64_t x10 = 8LLU;
int16_t x14 = -1;
uint64_t x18 = UINT64_MAX;
static int32_t t4 = 1;
volatile int16_t x24 = INT16_MIN;
int16_t x27 = INT16_MIN;
int16_t x43 = -1;
static uint64_t t12 = 1216525765252541264LLU;
int32_t x78 = INT32_MIN;
int32_t t14 = -67;
int8_t x97 = 1;
int32_t x98 = INT32_MAX;
int16_t x104 = -4;
volatile int16_t x118 = -10;
int16_t x120 = -1;
volatile int32_t t18 = 18592028;
static uint32_t x129 = UINT32_MAX;
int8_t x130 = INT8_MIN;
uint16_t x142 = 70U;
int32_t x176 = INT32_MIN;
static uint16_t x177 = 2U;
int64_t x182 = INT64_MIN;
int32_t x183 = -14;
volatile int32_t t28 = 5756;
int64_t x209 = 25589731LL;
uint32_t x210 = 49350741U;
volatile int64_t x214 = INT64_MAX;
volatile int64_t t30 = -16366169LL;
uint64_t t31 = 1436008549667LLU;
int64_t x240 = -1LL;
uint16_t x244 = 420U;
uint16_t x281 = UINT16_MAX;
static uint32_t x291 = 1322334113U;
uint8_t x294 = 77U;
volatile uint32_t x334 = 242U;
static uint16_t x335 = 1U;
static int8_t x346 = -1;
uint8_t x349 = 94U;
volatile int32_t t42 = -3423853;
static volatile int64_t x362 = INT64_MIN;
static int16_t x374 = INT16_MIN;
int64_t x375 = -1LL;
volatile uint32_t x376 = UINT32_MAX;
volatile uint16_t x398 = UINT16_MAX;
int32_t x407 = INT32_MIN;
int16_t x408 = -1;
int8_t x416 = INT8_MAX;
volatile int32_t t54 = 97389710;
uint64_t x437 = 1653040374369000LLU;
int16_t x454 = INT16_MAX;
volatile uint64_t t57 = 987976363LLU;
volatile int32_t x499 = INT32_MIN;
uint64_t x510 = UINT64_MAX;
volatile int8_t x515 = 0;
int16_t x516 = -120;
volatile uint16_t x519 = UINT16_MAX;
volatile int8_t x532 = INT8_MAX;
int64_t x557 = 917938404355621LL;
volatile int8_t x558 = 12;
int32_t x560 = INT32_MIN;
volatile uint64_t x577 = UINT64_MAX;
static uint64_t t78 = 6699740658LLU;
volatile int64_t x589 = 99540LL;
int8_t x590 = INT8_MIN;
int64_t t80 = -355243435LL;
int8_t x597 = INT8_MAX;
static uint64_t x601 = 1LLU;
static volatile int16_t x604 = -19;
static uint8_t x610 = 66U;
int16_t x614 = INT16_MIN;
int8_t x619 = -5;
static int8_t x632 = INT8_MIN;
volatile uint64_t t91 = 1935140227100853782LLU;
static volatile int8_t x651 = -1;
uint8_t x652 = 2U;
int64_t x663 = -1LL;
int32_t x670 = -164938701;
volatile uint64_t x705 = 511786929595887118LLU;
volatile uint64_t x707 = 1594654069LLU;


void f0(void) {
	int16_t x1 = 479;
	uint64_t x3 = 3556LLU;
	volatile uint32_t t0 = 2U;

	t0 = ((x1>>(x2<=x3))^x4);

	if (t0 != 219774755U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = 10U;
	static int16_t x7 = 12518;
	uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t1 = 4752843781696007049LLU;

	t1 = ((x5>>(x6<=x7))^x8);

	if (t1 != 18446744073709540337LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	volatile int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 266807;

	t2 = ((x9>>(x10<=x11))^x12);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 1753537449885872983LLU;
	static uint16_t x15 = 20U;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t3 = 35313000415379608LLU;

	t3 = ((x13>>(x14<=x15))^x16);

	if (t3 != 876768724942936532LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MIN;

	t4 = ((x17>>(x18<=x19))^x20);

	if (t4 != -65409) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	volatile int64_t x22 = INT64_MIN;
	int64_t x23 = -67993471423239LL;
	int32_t t5 = 15728;

	t5 = ((x21>>(x22<=x23))^x24);

	if (t5 != -16385) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = 0;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 4LLU;

	t6 = ((x25>>(x26<=x27))^x28);

	if (t6 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 89U;
	int8_t x38 = -1;
	int64_t x39 = 314003133352004416LL;
	uint32_t x40 = 1092391U;
	volatile uint32_t t7 = 2504U;

	t7 = ((x37>>(x38<=x39))^x40);

	if (t7 != 1092363U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 3U;
	volatile int16_t x42 = INT16_MIN;
	int16_t x44 = INT16_MAX;
	int32_t t8 = 12;

	t8 = ((x41>>(x42<=x43))^x44);

	if (t8 != 32766) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 275441448U;
	int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MIN;
	static uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t9 = 3741160013LLU;

	t9 = ((x45>>(x46<=x47))^x48);

	if (t9 != 18446744073434110167LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x57 = 113U;
	volatile int16_t x58 = INT16_MAX;
	uint16_t x59 = 19874U;
	static volatile int16_t x60 = INT16_MIN;
	volatile int32_t t10 = 33285683;

	t10 = ((x57>>(x58<=x59))^x60);

	if (t10 != -32655) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = 24521393;
	uint8_t x70 = 51U;
	int64_t x71 = -1LL;
	int8_t x72 = 6;
	volatile int32_t t11 = 321;

	t11 = ((x69>>(x70<=x71))^x72);

	if (t11 != 24521399) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 9036327945892490LLU;
	volatile int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	uint32_t x76 = 1782038U;

	t12 = ((x73>>(x74<=x75))^x76);

	if (t12 != 4518163974703187LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = UINT64_MAX;
	volatile uint16_t x79 = UINT16_MAX;
	uint64_t x80 = UINT64_MAX;
	uint64_t t13 = 2LLU;

	t13 = ((x77>>(x78<=x79))^x80);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MAX;
	volatile int16_t x82 = -1;
	static int8_t x83 = INT8_MIN;
	uint8_t x84 = UINT8_MAX;

	t14 = ((x81>>(x82<=x83))^x84);

	if (t14 != 32512) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x99 = 217259498U;
	uint64_t x100 = 41198089854894LLU;
	volatile uint64_t t15 = 651268LLU;

	t15 = ((x97>>(x98<=x99))^x100);

	if (t15 != 41198089854895LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x101 = 26U;
	uint64_t x102 = 385997LLU;
	int64_t x103 = 176462LL;
	int32_t t16 = -13646;

	t16 = ((x101>>(x102<=x103))^x104);

	if (t16 != -26) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x113 = 1U;
	volatile int8_t x114 = INT8_MIN;
	int32_t x115 = -1;
	uint64_t x116 = 13LLU;
	volatile uint64_t t17 = 362529248953LLU;

	t17 = ((x113>>(x114<=x115))^x116);

	if (t17 != 13LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x117 = INT16_MAX;
	volatile int16_t x119 = INT16_MIN;

	t18 = ((x117>>(x118<=x119))^x120);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x131 = 6;
	int16_t x132 = 36;
	volatile uint32_t t19 = 42U;

	t19 = ((x129>>(x130<=x131))^x132);

	if (t19 != 2147483611U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = -1;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = 909U;
	static uint64_t t20 = 5679793337036137264LLU;

	t20 = ((x137>>(x138<=x139))^x140);

	if (t20 != 18446744073709550706LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x141 = 3752235656LLU;
	volatile uint8_t x143 = 1U;
	int16_t x144 = -2;
	volatile uint64_t t21 = 106128509562LLU;

	t21 = ((x141>>(x142<=x143))^x144);

	if (t21 != 18446744069957315958LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x145 = INT64_MAX;
	static int8_t x146 = INT8_MIN;
	int64_t x147 = -1LL;
	uint16_t x148 = UINT16_MAX;
	static int64_t t22 = -803LL;

	t22 = ((x145>>(x146<=x147))^x148);

	if (t22 != 4611686018427322368LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int32_t x158 = -708593;
	int8_t x159 = 1;
	uint8_t x160 = 3U;
	volatile int32_t t23 = 18636;

	t23 = ((x157>>(x158<=x159))^x160);

	if (t23 != 124) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x165 = 8011592810978638311LLU;
	int8_t x166 = INT8_MIN;
	volatile int64_t x167 = INT64_MIN;
	static int32_t x168 = 1901714;
	uint64_t t24 = 12497047LLU;

	t24 = ((x165>>(x166<=x167))^x168);

	if (t24 != 8011592810977918325LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x173 = 9187648711LLU;
	static int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	volatile uint64_t t25 = 1177105346115625LLU;

	t25 = ((x173>>(x174<=x175))^x176);

	if (t25 != 18446744067565957731LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x178 = INT64_MIN;
	int32_t x179 = 174039;
	static int32_t x180 = -1;
	volatile int32_t t26 = 1;

	t26 = ((x177>>(x178<=x179))^x180);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x181 = 12728LLU;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t27 = 96501489949124LLU;

	t27 = ((x181>>(x182<=x183))^x184);

	if (t27 != 18446744073709525212LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	int8_t x204 = -39;

	t28 = ((x201>>(x202<=x203))^x204);

	if (t28 != -90) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x211 = 1498884995023LLU;
	static uint64_t x212 = 4332622702531205074LLU;
	volatile uint64_t t29 = 1323683482843288LLU;

	t29 = ((x209>>(x210<=x211))^x212);

	if (t29 != 4332622702543727651LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x213 = 70U;
	int8_t x215 = 0;
	int64_t x216 = INT64_MIN;

	t30 = ((x213>>(x214<=x215))^x216);

	if (t30 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x217 = UINT64_MAX;
	static int8_t x218 = INT8_MAX;
	static int16_t x219 = -157;
	static uint8_t x220 = 13U;

	t31 = ((x217>>(x218<=x219))^x220);

	if (t31 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x237 = 61U;
	static int32_t x238 = INT32_MIN;
	static uint64_t x239 = UINT64_MAX;
	volatile int64_t t32 = -684489100065LL;

	t32 = ((x237>>(x238<=x239))^x240);

	if (t32 != -31LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x241 = 200LLU;
	uint64_t x242 = 169430LLU;
	int64_t x243 = INT64_MIN;
	uint64_t t33 = 268LLU;

	t33 = ((x241>>(x242<=x243))^x244);

	if (t33 != 448LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x245 = INT32_MAX;
	uint32_t x246 = UINT32_MAX;
	static int16_t x247 = INT16_MAX;
	volatile int8_t x248 = -30;
	int32_t t34 = 4097199;

	t34 = ((x245>>(x246<=x247))^x248);

	if (t34 != -2147483619) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x282 = INT64_MAX;
	volatile uint16_t x283 = 15U;
	int8_t x284 = -1;
	static volatile int32_t t35 = -1;

	t35 = ((x281>>(x282<=x283))^x284);

	if (t35 != -65536) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x289 = 52;
	static uint32_t x290 = UINT32_MAX;
	static volatile uint8_t x292 = UINT8_MAX;
	int32_t t36 = 78603;

	t36 = ((x289>>(x290<=x291))^x292);

	if (t36 != 203) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x295 = INT8_MIN;
	static uint8_t x296 = UINT8_MAX;
	static int32_t t37 = -197;

	t37 = ((x293>>(x294<=x295))^x296);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x313 = 54U;
	int32_t x314 = INT32_MAX;
	int64_t x315 = INT64_MIN;
	volatile uint8_t x316 = UINT8_MAX;
	static volatile int32_t t38 = -6759303;

	t38 = ((x313>>(x314<=x315))^x316);

	if (t38 != 201) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x325 = 5;
	volatile int32_t x326 = INT32_MIN;
	static uint8_t x327 = 9U;
	int32_t x328 = -1;
	static int32_t t39 = 497115;

	t39 = ((x325>>(x326<=x327))^x328);

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x333 = 4363345;
	uint16_t x336 = 1250U;
	int32_t t40 = -27;

	t40 = ((x333>>(x334<=x335))^x336);

	if (t40 != 4362419) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x345 = 116U;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = 311;
	int32_t t41 = 4841;

	t41 = ((x345>>(x346<=x347))^x348);

	if (t41 != 269) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x350 = -162028763862132147LL;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = UINT16_MAX;

	t42 = ((x349>>(x350<=x351))^x352);

	if (t42 != 65488) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x357 = UINT16_MAX;
	static int64_t x358 = INT64_MAX;
	uint8_t x359 = UINT8_MAX;
	static int64_t x360 = -1LL;
	volatile int64_t t43 = 1LL;

	t43 = ((x357>>(x358<=x359))^x360);

	if (t43 != -65536LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x361 = 7U;
	static volatile uint64_t x363 = UINT64_MAX;
	int16_t x364 = 0;
	uint32_t t44 = 7U;

	t44 = ((x361>>(x362<=x363))^x364);

	if (t44 != 3U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x373 = 20917136017313LLU;
	uint64_t t45 = 103275LLU;

	t45 = ((x373>>(x374<=x375))^x376);

	if (t45 != 10462217690159LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x377 = 14;
	uint32_t x378 = 753304223U;
	int8_t x379 = -1;
	static int8_t x380 = 2;
	volatile int32_t t46 = -3611019;

	t46 = ((x377>>(x378<=x379))^x380);

	if (t46 != 5) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x385 = 2LL;
	int16_t x386 = -4;
	uint64_t x387 = 359LLU;
	static volatile int64_t x388 = INT64_MAX;
	volatile int64_t t47 = -182194712455753049LL;

	t47 = ((x385>>(x386<=x387))^x388);

	if (t47 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	static uint32_t x396 = 939U;
	volatile uint32_t t48 = 26U;

	t48 = ((x393>>(x394<=x395))^x396);

	if (t48 != 852U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x397 = 4;
	int8_t x399 = -29;
	static int64_t x400 = INT64_MIN;
	volatile int64_t t49 = 10LL;

	t49 = ((x397>>(x398<=x399))^x400);

	if (t49 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x405 = 374U;
	volatile uint32_t x406 = UINT32_MAX;
	static uint32_t t50 = 100742458U;

	t50 = ((x405>>(x406<=x407))^x408);

	if (t50 != 4294966921U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x409 = 7112020U;
	static int16_t x410 = -2;
	static int32_t x411 = -1;
	static uint64_t x412 = 210447370LLU;
	static volatile uint64_t t51 = 3910253LLU;

	t51 = ((x409>>(x410<=x411))^x412);

	if (t51 != 213741216LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x413 = 157U;
	uint8_t x414 = 3U;
	volatile uint8_t x415 = 42U;
	static volatile int32_t t52 = 28196;

	t52 = ((x413>>(x414<=x415))^x416);

	if (t52 != 49) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x429 = UINT16_MAX;
	static volatile int64_t x430 = -1LL;
	uint32_t x431 = 6926U;
	int64_t x432 = -879747274913921LL;
	volatile int64_t t53 = 7LL;

	t53 = ((x429>>(x430<=x431))^x432);

	if (t53 != -879747274917760LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x433 = 476;
	uint8_t x434 = 20U;
	volatile int16_t x435 = -17;
	int16_t x436 = 41;

	t54 = ((x433>>(x434<=x435))^x436);

	if (t54 != 501) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x438 = 60;
	static uint64_t x439 = 1409055826043LLU;
	int8_t x440 = INT8_MIN;
	uint64_t t55 = 50LLU;

	t55 = ((x437>>(x438<=x439))^x440);

	if (t55 != 18445917553522367220LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x449 = 9;
	uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MAX;
	int32_t x452 = 32022;
	volatile int32_t t56 = -1509512;

	t56 = ((x449>>(x450<=x451))^x452);

	if (t56 != 32031) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x453 = 4480379905056LL;
	uint8_t x455 = UINT8_MAX;
	volatile uint64_t x456 = 5957383202245LLU;

	t57 = ((x453>>(x454<=x455))^x456);

	if (t57 != 1615524676069LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x457 = INT32_MAX;
	int8_t x458 = INT8_MIN;
	uint32_t x459 = 19U;
	volatile uint64_t x460 = 909869255004701LLU;
	static uint64_t t58 = 136199510377720914LLU;

	t58 = ((x457>>(x458<=x459))^x460);

	if (t58 != 909867586121186LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x461 = UINT64_MAX;
	volatile uint32_t x462 = 411883U;
	int64_t x463 = -9LL;
	int64_t x464 = INT64_MIN;
	uint64_t t59 = 1418695029180829LLU;

	t59 = ((x461>>(x462<=x463))^x464);

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x465 = INT64_MAX;
	uint16_t x466 = 994U;
	volatile int64_t x467 = -86LL;
	static volatile uint32_t x468 = 125U;
	int64_t t60 = 950784671423726LL;

	t60 = ((x465>>(x466<=x467))^x468);

	if (t60 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x469 = 7474U;
	int16_t x470 = INT16_MIN;
	int16_t x471 = -1;
	int16_t x472 = 394;
	int32_t t61 = -483702937;

	t61 = ((x469>>(x470<=x471))^x472);

	if (t61 != 3859) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x473 = 469198U;
	int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = 32470U;
	uint32_t t62 = 7U;

	t62 = ((x473>>(x474<=x475))^x476);

	if (t62 != 480792U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x481 = UINT32_MAX;
	static int16_t x482 = -269;
	uint32_t x483 = UINT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile uint32_t t63 = 641U;

	t63 = ((x481>>(x482<=x483))^x484);

	if (t63 != 2147483775U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x497 = INT32_MAX;
	int16_t x498 = INT16_MIN;
	volatile int8_t x500 = INT8_MAX;
	volatile int32_t t64 = 1681;

	t64 = ((x497>>(x498<=x499))^x500);

	if (t64 != 2147483520) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x501 = 51U;
	static volatile uint8_t x502 = UINT8_MAX;
	volatile uint64_t x503 = UINT64_MAX;
	static int64_t x504 = -1LL;
	volatile int64_t t65 = 0LL;

	t65 = ((x501>>(x502<=x503))^x504);

	if (t65 != -26LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x509 = 46U;
	int8_t x511 = -1;
	uint16_t x512 = 23998U;
	uint32_t t66 = 1063720106U;

	t66 = ((x509>>(x510<=x511))^x512);

	if (t66 != 23977U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x513 = INT16_MAX;
	uint32_t x514 = 2881U;
	int32_t t67 = 1007;

	t67 = ((x513>>(x514<=x515))^x516);

	if (t67 != -32649) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x517 = 3725962LLU;
	static volatile uint8_t x518 = UINT8_MAX;
	static uint8_t x520 = 83U;
	volatile uint64_t t68 = 16246LLU;

	t68 = ((x517>>(x518<=x519))^x520);

	if (t68 != 1862934LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x525 = INT32_MAX;
	int16_t x526 = -1;
	static int8_t x527 = INT8_MIN;
	int64_t x528 = -10992686996215464LL;
	int64_t t69 = 4941207LL;

	t69 = ((x525>>(x526<=x527))^x528);

	if (t69 != -10992685803809113LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x529 = UINT16_MAX;
	static int32_t x530 = -600422;
	uint16_t x531 = UINT16_MAX;
	int32_t t70 = -12;

	t70 = ((x529>>(x530<=x531))^x532);

	if (t70 != 32640) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x537 = 29U;
	uint16_t x538 = 6483U;
	uint32_t x539 = 0U;
	volatile int16_t x540 = -1;
	volatile int32_t t71 = -9;

	t71 = ((x537>>(x538<=x539))^x540);

	if (t71 != -30) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x541 = INT64_MAX;
	uint16_t x542 = 4047U;
	int32_t x543 = INT32_MIN;
	int32_t x544 = -1;
	volatile int64_t t72 = INT64_MIN;

	t72 = ((x541>>(x542<=x543))^x544);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x545 = INT8_MAX;
	uint8_t x546 = 59U;
	static int16_t x547 = 2;
	uint8_t x548 = 1U;
	int32_t t73 = 1195;

	t73 = ((x545>>(x546<=x547))^x548);

	if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x549 = INT64_MAX;
	uint16_t x550 = 1U;
	int16_t x551 = -1;
	uint16_t x552 = 8U;
	volatile int64_t t74 = 12758684698923LL;

	t74 = ((x549>>(x550<=x551))^x552);

	if (t74 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x553 = INT64_MAX;
	volatile int8_t x554 = INT8_MIN;
	int32_t x555 = -1038631;
	int16_t x556 = INT16_MIN;
	static int64_t t75 = -3LL;

	t75 = ((x553>>(x554<=x555))^x556);

	if (t75 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x559 = 10U;
	volatile int64_t t76 = 11767LL;

	t76 = ((x557>>(x558<=x559))^x560);

	if (t76 != -917938923868635LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x565 = 15U;
	int16_t x566 = -1;
	volatile uint64_t x567 = UINT64_MAX;
	uint8_t x568 = UINT8_MAX;
	static int32_t t77 = 59;

	t77 = ((x565>>(x566<=x567))^x568);

	if (t77 != 248) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x578 = INT8_MIN;
	int16_t x579 = -1;
	uint8_t x580 = UINT8_MAX;

	t78 = ((x577>>(x578<=x579))^x580);

	if (t78 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x585 = UINT32_MAX;
	int32_t x586 = -12;
	uint16_t x587 = 3806U;
	volatile int8_t x588 = -1;
	volatile uint32_t t79 = 1U;

	t79 = ((x585>>(x586<=x587))^x588);

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x591 = UINT64_MAX;
	int8_t x592 = -1;

	t80 = ((x589>>(x590<=x591))^x592);

	if (t80 != -49771LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x593 = 79189U;
	int16_t x594 = INT16_MIN;
	int64_t x595 = INT64_MIN;
	static int16_t x596 = -1;
	static volatile uint32_t t81 = 31U;

	t81 = ((x593>>(x594<=x595))^x596);

	if (t81 != 4294888106U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x598 = INT8_MIN;
	volatile uint64_t x599 = 38129LLU;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t82 = 7309;

	t82 = ((x597>>(x598<=x599))^x600);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x602 = -1;
	int16_t x603 = INT16_MIN;
	static uint64_t t83 = 8965412003018156LLU;

	t83 = ((x601>>(x602<=x603))^x604);

	if (t83 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x605 = 3U;
	int64_t x606 = 13491LL;
	static int8_t x607 = -1;
	int32_t x608 = -1;
	volatile int32_t t84 = 118442;

	t84 = ((x605>>(x606<=x607))^x608);

	if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x609 = UINT8_MAX;
	int32_t x611 = INT32_MIN;
	int32_t x612 = INT32_MAX;
	volatile int32_t t85 = 2395;

	t85 = ((x609>>(x610<=x611))^x612);

	if (t85 != 2147483392) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x613 = 3U;
	uint32_t x615 = 356617518U;
	uint64_t x616 = UINT64_MAX;
	volatile uint64_t t86 = 495071LLU;

	t86 = ((x613>>(x614<=x615))^x616);

	if (t86 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x617 = UINT64_MAX;
	uint64_t x618 = UINT64_MAX;
	volatile uint16_t x620 = 0U;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x617>>(x618<=x619))^x620);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x621 = 1967914840986237546LL;
	uint32_t x622 = UINT32_MAX;
	volatile int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	static volatile int64_t t88 = 25717086820LL;

	t88 = ((x621>>(x622<=x623))^x624);

	if (t88 != -1967914840986237462LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x629 = INT64_MAX;
	int32_t x630 = -1;
	uint64_t x631 = 12606114668261466LLU;
	volatile int64_t t89 = 31LL;

	t89 = ((x629>>(x630<=x631))^x632);

	if (t89 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x633 = 34405128157917LLU;
	static int8_t x634 = 0;
	uint64_t x635 = 3LLU;
	volatile int16_t x636 = -4;
	static volatile uint64_t t90 = 12241741662633LLU;

	t90 = ((x633>>(x634<=x635))^x636);

	if (t90 != 18446726871145472658LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x645 = 1839941380U;
	int64_t x646 = INT64_MIN;
	uint8_t x647 = 9U;
	volatile uint64_t x648 = 207429198845LLU;

	t91 = ((x645>>(x646<=x647))^x648);

	if (t91 != 208262643839LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x649 = 785U;
	int32_t x650 = INT32_MIN;
	int32_t t92 = -1727;

	t92 = ((x649>>(x650<=x651))^x652);

	if (t92 != 394) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x661 = INT8_MAX;
	uint8_t x662 = UINT8_MAX;
	volatile int8_t x664 = -1;
	static volatile int32_t t93 = -38177386;

	t93 = ((x661>>(x662<=x663))^x664);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x665 = 1;
	int16_t x666 = INT16_MIN;
	static int8_t x667 = -17;
	uint16_t x668 = 6U;
	volatile int32_t t94 = 0;

	t94 = ((x665>>(x666<=x667))^x668);

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x669 = INT64_MAX;
	int64_t x671 = -1LL;
	int16_t x672 = 677;
	int64_t t95 = -1113619276735798LL;

	t95 = ((x669>>(x670<=x671))^x672);

	if (t95 != 4611686018427387226LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x677 = UINT64_MAX;
	int16_t x678 = INT16_MIN;
	int32_t x679 = INT32_MAX;
	uint64_t x680 = 10129197LLU;
	uint64_t t96 = 158166LLU;

	t96 = ((x677>>(x678<=x679))^x680);

	if (t96 != 9223372036844646610LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x693 = UINT64_MAX;
	static int64_t x694 = -1LL;
	int32_t x695 = -3;
	uint8_t x696 = 81U;
	volatile uint64_t t97 = 940LLU;

	t97 = ((x693>>(x694<=x695))^x696);

	if (t97 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x701 = INT8_MAX;
	static uint16_t x702 = 0U;
	static int64_t x703 = -1685LL;
	int32_t x704 = INT32_MIN;
	static volatile int32_t t98 = 0;

	t98 = ((x701>>(x702<=x703))^x704);

	if (t98 != -2147483521) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x706 = 0;
	int16_t x708 = INT16_MIN;
	uint64_t t99 = 30845LLU;

	t99 = ((x705>>(x706<=x707))^x708);

	if (t99 != 18190850608911587079LLU) { NG(); } else { ; }
	
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

