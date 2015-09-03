#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x16 = -352086923;
uint8_t x19 = 0U;
uint8_t x20 = UINT8_MAX;
uint8_t x22 = 112U;
int64_t x31 = -1LL;
volatile int32_t x46 = -1;
volatile int64_t x54 = -3859117069047LL;
int32_t x84 = 739838;
static int8_t x110 = INT8_MIN;
int64_t t10 = 1636701177214924LL;
volatile uint64_t x114 = 305334029621LLU;
int16_t x173 = 2;
int8_t x175 = INT8_MIN;
volatile uint64_t t14 = 0LLU;
static uint32_t x194 = UINT32_MAX;
int64_t x197 = -2474076308LL;
int32_t t20 = 87;
int32_t x209 = INT32_MAX;
uint64_t x210 = 864182247090461485LLU;
static int8_t x211 = INT8_MIN;
int32_t x212 = INT32_MAX;
int32_t x231 = INT32_MIN;
static int16_t x232 = -826;
int64_t x257 = -1LL;
static volatile int64_t t28 = 607LL;
int16_t x267 = -1;
int8_t x278 = INT8_MIN;
volatile uint8_t x288 = 63U;
int32_t x290 = -2369402;
static int8_t x302 = -1;
int64_t x303 = -660869341814383LL;
static int64_t x312 = 39099494LL;
volatile int32_t x341 = -1;
int64_t x344 = INT64_MAX;
volatile int64_t t40 = INT64_MIN;
volatile int64_t x369 = INT64_MAX;
int16_t x371 = INT16_MIN;
uint8_t x372 = 55U;
volatile int32_t t47 = INT32_MIN;
int8_t x414 = INT8_MIN;
uint16_t x425 = 4521U;
uint16_t x444 = 40U;
int64_t t55 = INT64_MIN;
volatile int8_t x469 = 0;
int64_t x503 = INT64_MIN;
volatile uint16_t x504 = 7988U;
int32_t x513 = -1;
static volatile int32_t t61 = 866562;
int64_t t62 = -418620765LL;
int32_t x543 = 1;
volatile int8_t x554 = -1;
uint64_t x555 = 857445109614588518LLU;
static int8_t x557 = -1;
static volatile int16_t x558 = 0;
int16_t x560 = INT16_MAX;
int16_t x561 = INT16_MIN;
int64_t x562 = 94LL;
static int8_t x581 = INT8_MAX;
uint64_t x583 = 44765LLU;
int64_t t70 = -816449515787LL;
int32_t x596 = 367;
int64_t x603 = -1LL;
int64_t x625 = 2695237417593362798LL;
int32_t x630 = -759;
int16_t x650 = INT16_MIN;
static uint64_t x656 = 3LLU;
static uint16_t x664 = 15U;
int8_t x682 = INT8_MAX;
uint16_t x683 = 1U;
int64_t x685 = INT64_MAX;
volatile int8_t x699 = -61;
static int32_t x700 = INT32_MAX;
volatile uint64_t x705 = 993680668178880LLU;
int32_t x708 = 2761903;
volatile uint32_t t89 = 0U;
static int64_t t91 = -264076LL;
volatile int8_t x735 = INT8_MIN;
int32_t x741 = INT32_MAX;
uint64_t x747 = UINT64_MAX;
uint16_t x803 = UINT16_MAX;
uint64_t x804 = UINT64_MAX;


void f0(void) {
	static int64_t x13 = INT64_MAX;
	uint16_t x14 = 15595U;
	static int32_t x15 = INT32_MIN;
	int64_t t0 = -1412117009916244LL;

	t0 = ((x13&x14)/(x15<=x16));

	if (t0 != 15595LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = INT16_MIN;
	uint64_t x18 = 28392929495493LLU;
	uint64_t t1 = 1965LLU;

	t1 = ((x17&x18)/(x19<=x20));

	if (t1 != 28392929492992LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = -1;
	int16_t x23 = INT16_MIN;
	static int32_t x24 = 30824;
	int32_t t2 = -1;

	t2 = ((x21&x22)/(x23<=x24));

	if (t2 != 112) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = -1;
	int16_t x30 = -7454;
	uint16_t x32 = 37U;
	int32_t t3 = -17506;

	t3 = ((x29&x30)/(x31<=x32));

	if (t3 != -7454) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 14;
	int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MAX;
	volatile int32_t t4 = -44858;

	t4 = ((x37&x38)/(x39<=x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x45 = 48458909069LLU;
	uint64_t x47 = 537431751325866LLU;
	int64_t x48 = -1LL;
	static uint64_t t5 = 12096780355970420LLU;

	t5 = ((x45&x46)/(x47<=x48));

	if (t5 != 48458909069LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x53 = INT64_MAX;
	int32_t x55 = -219;
	static int8_t x56 = INT8_MIN;
	volatile int64_t t6 = -4579928LL;

	t6 = ((x53&x54)/(x55<=x56));

	if (t6 != 9223368177737706761LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x73 = -1LL;
	volatile int64_t x74 = -1LL;
	uint16_t x75 = 5U;
	uint16_t x76 = UINT16_MAX;
	int64_t t7 = 105955933231LL;

	t7 = ((x73&x74)/(x75<=x76));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x81 = 8;
	int16_t x82 = INT16_MIN;
	static uint64_t x83 = 394577LLU;
	int32_t t8 = 1;

	t8 = ((x81&x82)/(x83<=x84));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x97 = 10U;
	uint16_t x98 = 2U;
	volatile uint32_t x99 = 112933299U;
	uint64_t x100 = 1786411439150LLU;
	int32_t t9 = -33428;

	t9 = ((x97&x98)/(x99<=x100));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x109 = -219709012898664446LL;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = UINT32_MAX;

	t10 = ((x109&x110)/(x111<=x112));

	if (t10 != -219709012898664448LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x113 = 142119903U;
	static int64_t x115 = INT64_MIN;
	static int16_t x116 = INT16_MIN;
	uint64_t t11 = 259727LLU;

	t11 = ((x113&x114)/(x115<=x116));

	if (t11 != 5275925LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x137 = 248857;
	int32_t x138 = INT32_MAX;
	int8_t x139 = 6;
	static int8_t x140 = 7;
	volatile int32_t t12 = 701434331;

	t12 = ((x137&x138)/(x139<=x140));

	if (t12 != 248857) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x141 = 0U;
	static volatile int64_t x142 = -1LL;
	static uint64_t x143 = 41805807LLU;
	volatile int64_t x144 = -2051390LL;
	volatile int64_t t13 = -285777181897007LL;

	t13 = ((x141&x142)/(x143<=x144));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x174 = 4607790113071388210LLU;
	static int8_t x176 = -1;

	t14 = ((x173&x174)/(x175<=x176));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	static uint32_t x182 = 216U;
	uint8_t x183 = 8U;
	volatile int32_t x184 = 230747144;
	uint32_t t15 = 76U;

	t15 = ((x181&x182)/(x183<=x184));

	if (t15 != 216U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = -1;
	int64_t x188 = 880355656806LL;
	int32_t t16 = 99;

	t16 = ((x185&x186)/(x187<=x188));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x189 = INT32_MAX;
	uint8_t x190 = UINT8_MAX;
	static int32_t x191 = INT32_MIN;
	volatile uint8_t x192 = 1U;
	int32_t t17 = -8;

	t17 = ((x189&x190)/(x191<=x192));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x193 = 311844LLU;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = -1LL;
	uint64_t t18 = 225990908LLU;

	t18 = ((x193&x194)/(x195<=x196));

	if (t18 != 311844LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x198 = 0U;
	int32_t x199 = 16;
	static int16_t x200 = 87;
	volatile int64_t t19 = 10580651LL;

	t19 = ((x197&x198)/(x199<=x200));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	uint32_t x204 = UINT32_MAX;

	t20 = ((x201&x202)/(x203<=x204));

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t t21 = 38LLU;

	t21 = ((x209&x210)/(x211<=x212));

	if (t21 != 1392941869LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x217 = -13935067349670928LL;
	int8_t x218 = 16;
	static int64_t x219 = INT64_MIN;
	int32_t x220 = 4;
	int64_t t22 = -1387379233790628LL;

	t22 = ((x217&x218)/(x219<=x220));

	if (t22 != 16LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x221 = INT32_MIN;
	static int64_t x222 = -1LL;
	int64_t x223 = -1LL;
	uint16_t x224 = 1609U;
	volatile int64_t t23 = -219653294274LL;

	t23 = ((x221&x222)/(x223<=x224));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x229 = INT8_MIN;
	static volatile int16_t x230 = -1;
	int32_t t24 = 1747806;

	t24 = ((x229&x230)/(x231<=x232));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x237 = INT16_MIN;
	uint64_t x238 = 119260221206929LLU;
	int8_t x239 = INT8_MIN;
	volatile int16_t x240 = INT16_MAX;
	volatile uint64_t t25 = 106436070200239LLU;

	t25 = ((x237&x238)/(x239<=x240));

	if (t25 != 119260221177856LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x241 = 4U;
	static volatile int32_t x242 = 1;
	uint8_t x243 = 0U;
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t26 = 13;

	t26 = ((x241&x242)/(x243<=x244));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x253 = INT8_MIN;
	uint32_t x254 = 26U;
	uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 3265LLU;
	volatile uint32_t t27 = 122404430U;

	t27 = ((x253&x254)/(x255<=x256));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x258 = INT16_MIN;
	uint32_t x259 = UINT32_MAX;
	int64_t x260 = INT64_MAX;

	t28 = ((x257&x258)/(x259<=x260));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile int16_t x266 = -116;
	static uint8_t x268 = 44U;
	volatile int32_t t29 = INT32_MIN;

	t29 = ((x265&x266)/(x267<=x268));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x273 = 93;
	volatile uint16_t x274 = 21163U;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t30 = 5;

	t30 = ((x273&x274)/(x275<=x276));

	if (t30 != 9) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x277 = 235486661359996708LL;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = -3;
	volatile int64_t t31 = 41192LL;

	t31 = ((x277&x278)/(x279<=x280));

	if (t31 != 235486661359996672LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x281 = INT16_MAX;
	int8_t x282 = -1;
	int8_t x283 = 1;
	uint8_t x284 = 1U;
	static int32_t t32 = 981;

	t32 = ((x281&x282)/(x283<=x284));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x285 = INT32_MAX;
	volatile uint8_t x286 = 30U;
	volatile int16_t x287 = -1;
	int32_t t33 = 1861;

	t33 = ((x285&x286)/(x287<=x288));

	if (t33 != 30) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x289 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t34 = -764588598;

	t34 = ((x289&x290)/(x291<=x292));

	if (t34 != -2369408) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x301 = -172630;
	int16_t x304 = -1528;
	volatile int32_t t35 = -2;

	t35 = ((x301&x302)/(x303<=x304));

	if (t35 != -172630) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x305 = -231;
	int64_t x306 = INT64_MIN;
	int8_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	static volatile int64_t t36 = INT64_MIN;

	t36 = ((x305&x306)/(x307<=x308));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x309 = INT16_MIN;
	volatile int32_t x310 = -1;
	int64_t x311 = -1LL;
	static int32_t t37 = -4;

	t37 = ((x309&x310)/(x311<=x312));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x333 = INT16_MIN;
	volatile uint64_t x334 = UINT64_MAX;
	static int16_t x335 = 0;
	volatile int32_t x336 = INT32_MAX;
	uint64_t t38 = 163485834715151LLU;

	t38 = ((x333&x334)/(x335<=x336));

	if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x342 = INT8_MIN;
	static volatile int64_t x343 = -1LL;
	int32_t t39 = -262155416;

	t39 = ((x341&x342)/(x343<=x344));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x345 = -1;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	volatile int8_t x348 = 1;

	t40 = ((x345&x346)/(x347<=x348));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = -24LL;
	static int16_t x355 = -1;
	int64_t x356 = 711LL;
	int64_t t41 = 3428577094306LL;

	t41 = ((x353&x354)/(x355<=x356));

	if (t41 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x365 = 17325180U;
	static uint32_t x366 = 1315864133U;
	int32_t x367 = -1681;
	uint16_t x368 = UINT16_MAX;
	uint32_t t42 = 1648U;

	t42 = ((x365&x366)/(x367<=x368));

	if (t42 != 547908U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x370 = 347;
	int64_t t43 = -1010770120547801867LL;

	t43 = ((x369&x370)/(x371<=x372));

	if (t43 != 347LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x373 = INT32_MAX;
	int8_t x374 = 4;
	volatile int64_t x375 = -189369522154916268LL;
	int64_t x376 = 156068LL;
	volatile int32_t t44 = -12289137;

	t44 = ((x373&x374)/(x375<=x376));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x377 = INT64_MIN;
	int64_t x378 = -1LL;
	static volatile int32_t x379 = INT32_MIN;
	int16_t x380 = 28;
	volatile int64_t t45 = INT64_MIN;

	t45 = ((x377&x378)/(x379<=x380));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x385 = INT16_MIN;
	static int16_t x386 = -26;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MAX;
	volatile int32_t t46 = -4506340;

	t46 = ((x385&x386)/(x387<=x388));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MIN;
	static int8_t x396 = -1;

	t47 = ((x393&x394)/(x395<=x396));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x409 = 19388U;
	uint64_t x410 = 1790504837623105899LLU;
	volatile int64_t x411 = -1LL;
	int16_t x412 = 4196;
	uint64_t t48 = 7784770448889LLU;

	t48 = ((x409&x410)/(x411<=x412));

	if (t48 != 18728LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x413 = -49;
	uint64_t x415 = 559374137884699186LLU;
	volatile int16_t x416 = INT16_MIN;
	volatile int32_t t49 = 13;

	t49 = ((x413&x414)/(x415<=x416));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x417 = INT16_MIN;
	uint64_t x418 = UINT64_MAX;
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MAX;
	uint64_t t50 = 468167143LLU;

	t50 = ((x417&x418)/(x419<=x420));

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x421 = -1;
	uint64_t x422 = 240650676653LLU;
	int16_t x423 = -1;
	static uint16_t x424 = 4992U;
	uint64_t t51 = 563382171252072626LLU;

	t51 = ((x421&x422)/(x423<=x424));

	if (t51 != 240650676653LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x426 = 7319U;
	int32_t x427 = -1;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t52 = 350467704;

	t52 = ((x425&x426)/(x427<=x428));

	if (t52 != 4225) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int16_t x430 = -8;
	int16_t x431 = -2593;
	static uint8_t x432 = 127U;
	uint32_t t53 = 1U;

	t53 = ((x429&x430)/(x431<=x432));

	if (t53 != 4294967288U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x441 = 150462U;
	int64_t x442 = INT64_MAX;
	volatile int64_t x443 = -1LL;
	volatile int64_t t54 = 33LL;

	t54 = ((x441&x442)/(x443<=x444));

	if (t54 != 150462LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x453 = INT32_MIN;
	static int64_t x454 = INT64_MIN;
	volatile int8_t x455 = -1;
	static uint32_t x456 = UINT32_MAX;

	t55 = ((x453&x454)/(x455<=x456));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x470 = 3174U;
	volatile uint16_t x471 = 7U;
	static volatile uint8_t x472 = 14U;
	uint32_t t56 = 1U;

	t56 = ((x469&x470)/(x471<=x472));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x501 = 0;
	int16_t x502 = 1097;
	volatile int32_t t57 = -25776353;

	t57 = ((x501&x502)/(x503<=x504));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x514 = UINT16_MAX;
	volatile int32_t x515 = -1;
	uint16_t x516 = UINT16_MAX;
	int32_t t58 = -2593809;

	t58 = ((x513&x514)/(x515<=x516));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x517 = -1;
	static uint16_t x518 = 10U;
	uint32_t x519 = 49143U;
	uint16_t x520 = UINT16_MAX;
	static volatile int32_t t59 = 0;

	t59 = ((x517&x518)/(x519<=x520));

	if (t59 != 10) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x521 = 470U;
	int8_t x522 = INT8_MIN;
	volatile int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MAX;
	volatile uint32_t t60 = 37U;

	t60 = ((x521&x522)/(x523<=x524));

	if (t60 != 384U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x525 = 26U;
	int16_t x526 = 14;
	static int8_t x527 = INT8_MIN;
	uint8_t x528 = 1U;

	t61 = ((x525&x526)/(x527<=x528));

	if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x533 = 9181784292161LL;
	int32_t x534 = -74;
	static uint32_t x535 = 2U;
	int32_t x536 = -31;

	t62 = ((x533&x534)/(x535<=x536));

	if (t62 != 9181784292096LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x541 = UINT32_MAX;
	static uint64_t x542 = 3814984748397389LLU;
	volatile int16_t x544 = INT16_MAX;
	static uint64_t t63 = 300391242821091550LLU;

	t63 = ((x541&x542)/(x543<=x544));

	if (t63 != 1522561869LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x549 = -3696;
	int8_t x550 = INT8_MIN;
	uint64_t x551 = UINT64_MAX;
	int8_t x552 = -1;
	volatile int32_t t64 = 1107;

	t64 = ((x549&x550)/(x551<=x552));

	if (t64 != -3712) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x553 = 234U;
	uint64_t x556 = UINT64_MAX;
	uint32_t t65 = 815357097U;

	t65 = ((x553&x554)/(x555<=x556));

	if (t65 != 234U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x559 = 18521U;
	int32_t t66 = 71;

	t66 = ((x557&x558)/(x559<=x560));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x563 = INT16_MAX;
	static uint32_t x564 = 83837U;
	int64_t t67 = -68906229695163LL;

	t67 = ((x561&x562)/(x563<=x564));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x573 = INT64_MIN;
	volatile int32_t x574 = -448613;
	int64_t x575 = INT64_MIN;
	int16_t x576 = -1;
	int64_t t68 = INT64_MIN;

	t68 = ((x573&x574)/(x575<=x576));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x582 = -1;
	int64_t x584 = INT64_MIN;
	static int32_t t69 = -26;

	t69 = ((x581&x582)/(x583<=x584));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x585 = -1LL;
	int32_t x586 = -1;
	uint8_t x587 = UINT8_MAX;
	static int64_t x588 = INT64_MAX;

	t70 = ((x585&x586)/(x587<=x588));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x593 = 168130426U;
	int64_t x594 = 80077LL;
	int8_t x595 = INT8_MAX;
	static volatile int64_t t71 = 3LL;

	t71 = ((x593&x594)/(x595<=x596));

	if (t71 != 77896LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x597 = INT8_MIN;
	int32_t x598 = -1;
	static uint64_t x599 = 64983377LLU;
	uint64_t x600 = UINT64_MAX;
	int32_t t72 = 3;

	t72 = ((x597&x598)/(x599<=x600));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x601 = 12000U;
	static volatile uint32_t x602 = UINT32_MAX;
	volatile int16_t x604 = -1;
	uint32_t t73 = 1150394550U;

	t73 = ((x601&x602)/(x603<=x604));

	if (t73 != 12000U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x609 = INT16_MIN;
	uint64_t x610 = 38LLU;
	int16_t x611 = 0;
	uint32_t x612 = 3596U;
	volatile uint64_t t74 = 47554349263LLU;

	t74 = ((x609&x610)/(x611<=x612));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x617 = 456;
	uint8_t x618 = UINT8_MAX;
	static uint8_t x619 = 31U;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t75 = -448;

	t75 = ((x617&x618)/(x619<=x620));

	if (t75 != 200) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x626 = -1;
	int8_t x627 = -1;
	uint64_t x628 = UINT64_MAX;
	static int64_t t76 = -10844766151LL;

	t76 = ((x625&x626)/(x627<=x628));

	if (t76 != 2695237417593362798LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x629 = INT8_MAX;
	int64_t x631 = INT64_MIN;
	volatile int32_t x632 = -13396075;
	volatile int32_t t77 = -1712;

	t77 = ((x629&x630)/(x631<=x632));

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x645 = INT32_MIN;
	uint32_t x646 = 201U;
	int32_t x647 = -326927908;
	uint8_t x648 = UINT8_MAX;
	volatile uint32_t t78 = 0U;

	t78 = ((x645&x646)/(x647<=x648));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x649 = -1;
	int8_t x651 = 3;
	static uint64_t x652 = UINT64_MAX;
	volatile int32_t t79 = -86575717;

	t79 = ((x649&x650)/(x651<=x652));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x653 = -1;
	int32_t x654 = 0;
	static volatile uint8_t x655 = 1U;
	int32_t t80 = -1767;

	t80 = ((x653&x654)/(x655<=x656));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x661 = INT64_MAX;
	uint16_t x662 = UINT16_MAX;
	int16_t x663 = INT16_MIN;
	volatile int64_t t81 = -490846853158115356LL;

	t81 = ((x661&x662)/(x663<=x664));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x673 = 4521792;
	static uint32_t x674 = 282227891U;
	int64_t x675 = INT64_MIN;
	static int32_t x676 = -40632380;
	static uint32_t t82 = 374892083U;

	t82 = ((x673&x674)/(x675<=x676));

	if (t82 != 4224000U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x681 = -1;
	volatile uint32_t x684 = 1U;
	int32_t t83 = 78975;

	t83 = ((x681&x682)/(x683<=x684));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x686 = INT64_MIN;
	int64_t x687 = -1LL;
	uint16_t x688 = 14U;
	int64_t t84 = 594086200956987LL;

	t84 = ((x685&x686)/(x687<=x688));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x693 = -1;
	int8_t x694 = -1;
	static int32_t x695 = -1;
	static int8_t x696 = INT8_MAX;
	int32_t t85 = -1171;

	t85 = ((x693&x694)/(x695<=x696));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x697 = 10;
	int64_t x698 = -1LL;
	int64_t t86 = 151570307LL;

	t86 = ((x697&x698)/(x699<=x700));

	if (t86 != 10LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x706 = 124;
	volatile int32_t x707 = INT32_MIN;
	volatile uint64_t t87 = 1708660736785LLU;

	t87 = ((x705&x706)/(x707<=x708));

	if (t87 != 64LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x709 = 5280U;
	static int16_t x710 = INT16_MIN;
	int16_t x711 = -4636;
	int32_t x712 = INT32_MAX;
	volatile int32_t t88 = 16;

	t88 = ((x709&x710)/(x711<=x712));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x713 = UINT32_MAX;
	static int32_t x714 = INT32_MIN;
	static volatile uint32_t x715 = 5896U;
	volatile int32_t x716 = -24759912;

	t89 = ((x713&x714)/(x715<=x716));

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x717 = -19535LL;
	volatile uint64_t x718 = 58863LLU;
	uint32_t x719 = 21U;
	int8_t x720 = INT8_MIN;
	uint64_t t90 = 457584LLU;

	t90 = ((x717&x718)/(x719<=x720));

	if (t90 != 41377LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x721 = INT8_MAX;
	int64_t x722 = INT64_MIN;
	volatile uint8_t x723 = 0U;
	volatile uint8_t x724 = 26U;

	t91 = ((x721&x722)/(x723<=x724));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x725 = 5U;
	static int64_t x726 = -46LL;
	int16_t x727 = INT16_MIN;
	uint8_t x728 = 18U;
	volatile int64_t t92 = -16885LL;

	t92 = ((x725&x726)/(x727<=x728));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x733 = 1LLU;
	int8_t x734 = -4;
	int16_t x736 = INT16_MAX;
	static volatile uint64_t t93 = 11214363422LLU;

	t93 = ((x733&x734)/(x735<=x736));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x742 = INT8_MIN;
	uint16_t x743 = 14529U;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t94 = -365519328;

	t94 = ((x741&x742)/(x743<=x744));

	if (t94 != 2147483520) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x745 = -2;
	int8_t x746 = 1;
	int8_t x748 = -1;
	volatile int32_t t95 = -6;

	t95 = ((x745&x746)/(x747<=x748));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x757 = -139;
	volatile int8_t x758 = -56;
	static uint32_t x759 = 3U;
	int8_t x760 = INT8_MIN;
	volatile int32_t t96 = 66895;

	t96 = ((x757&x758)/(x759<=x760));

	if (t96 != -192) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x761 = -1LL;
	int64_t x762 = -59LL;
	volatile int32_t x763 = INT32_MIN;
	static uint16_t x764 = UINT16_MAX;
	volatile int64_t t97 = -62LL;

	t97 = ((x761&x762)/(x763<=x764));

	if (t97 != -59LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x769 = INT32_MIN;
	static int8_t x770 = -29;
	static int16_t x771 = 2;
	int16_t x772 = 14;
	volatile int32_t t98 = INT32_MIN;

	t98 = ((x769&x770)/(x771<=x772));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x801 = -1LL;
	int64_t x802 = -286LL;
	static volatile int64_t t99 = 104LL;

	t99 = ((x801&x802)/(x803<=x804));

	if (t99 != -286LL) { NG(); } else { ; }
	
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

