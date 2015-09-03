#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
int64_t x6 = -1LL;
int8_t x8 = -1;
volatile uint16_t x15 = 5U;
int16_t x20 = -1;
int16_t x21 = INT16_MIN;
int64_t x23 = -38LL;
static uint64_t x24 = UINT64_MAX;
uint8_t x47 = 7U;
volatile uint32_t x48 = 279947U;
int32_t x51 = -7923094;
int64_t t7 = -1273301634LL;
int64_t x74 = INT64_MAX;
static uint64_t x75 = 1984765LLU;
int64_t x78 = INT64_MIN;
int32_t x82 = 78085228;
int32_t t11 = 1114;
int32_t x86 = INT32_MIN;
int64_t x87 = INT64_MIN;
static uint16_t x100 = 145U;
static uint64_t x117 = UINT64_MAX;
uint64_t t16 = UINT64_MAX;
volatile uint64_t x122 = UINT64_MAX;
int8_t x136 = -2;
int8_t x148 = INT8_MIN;
static volatile int64_t t19 = 2250569772018002044LL;
int16_t x167 = -2;
int64_t t23 = 6437028LL;
int16_t x197 = INT16_MIN;
static int64_t x199 = INT64_MIN;
int8_t x221 = INT8_MIN;
static uint8_t x225 = UINT8_MAX;
int8_t x228 = 1;
volatile int64_t t27 = INT64_MAX;
int64_t x229 = INT64_MIN;
int8_t x232 = 0;
volatile int64_t t28 = 33125835452208LL;
uint8_t x237 = UINT8_MAX;
int64_t x239 = -932246866534344LL;
int8_t x241 = INT8_MIN;
static volatile int32_t t31 = -12481371;
int32_t x287 = INT32_MIN;
uint32_t t32 = 12663234U;
uint8_t x293 = 3U;
static int16_t x318 = -1;
int8_t x320 = INT8_MIN;
volatile int16_t x325 = -1;
uint64_t x328 = UINT64_MAX;
uint32_t x343 = 6930U;
volatile int16_t x344 = INT16_MIN;
int32_t x356 = INT32_MIN;
int8_t x363 = -21;
uint32_t x364 = UINT32_MAX;
static uint64_t t39 = 932548946456426692LLU;
volatile uint32_t x369 = 2507U;
int32_t x386 = INT32_MAX;
volatile int64_t x395 = INT64_MIN;
uint16_t x397 = UINT16_MAX;
uint32_t x403 = 24U;
uint32_t x406 = 343809U;
int32_t x411 = INT32_MIN;
uint32_t x413 = 4198837U;
int16_t x419 = INT16_MIN;
int64_t x445 = INT64_MIN;
volatile uint8_t x448 = 2U;
static uint8_t x451 = 2U;
int64_t t52 = -22LL;
int32_t t53 = -181;
int64_t x469 = INT64_MIN;
int64_t x479 = -1LL;
int64_t t56 = -43439267LL;
int64_t x530 = -1LL;
uint32_t x531 = 7447U;
int64_t t61 = 4173611293262247160LL;
int16_t x535 = -2350;
int32_t x536 = -1;
static int8_t x559 = -1;
volatile uint64_t x567 = 32016696695337LLU;
int32_t t66 = 7;
volatile int16_t x571 = -700;
static uint16_t x585 = 3U;
int64_t x601 = INT64_MIN;
uint64_t x604 = 1210094LLU;
uint32_t x605 = 21U;
int8_t x647 = -1;
volatile int64_t x650 = 805457199LL;
uint64_t x652 = UINT64_MAX;
int8_t x653 = INT8_MIN;
int32_t t79 = -1;
static int16_t x659 = -22;
volatile uint8_t x660 = UINT8_MAX;
static int8_t x665 = 2;
volatile int32_t t82 = -2255503;
volatile int16_t x694 = INT16_MIN;
volatile int16_t x711 = INT16_MIN;
int64_t x713 = -47533865LL;
static int32_t t89 = 12194;
static uint8_t x726 = 22U;
int32_t x733 = INT32_MIN;
static int32_t x734 = INT32_MAX;
int16_t x745 = INT16_MAX;
volatile int8_t x746 = INT8_MAX;
int8_t x748 = -2;
int16_t x762 = 5048;
int32_t x767 = INT32_MIN;
volatile int32_t t96 = 321;
static uint32_t t97 = UINT32_MAX;
static int16_t x814 = -1;


void f0(void) {
	volatile int32_t x7 = INT32_MIN;
	volatile int64_t t0 = 107LL;

	t0 = ((x5|x6)/(x7<x8));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;
	uint64_t x16 = 2203177114243LLU;
	volatile int64_t t1 = -58454920606LL;

	t1 = ((x13|x14)/(x15<x16));

	if (t1 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 214U;
	uint64_t x18 = 305LLU;
	uint32_t x19 = 148812U;
	uint64_t t2 = 208915LLU;

	t2 = ((x17|x18)/(x19<x20));

	if (t2 != 503LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x22 = -1;
	volatile int32_t t3 = 679;

	t3 = ((x21|x22)/(x23<x24));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = INT8_MIN;
	static volatile uint32_t x38 = 441773027U;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;
	uint32_t t4 = 9U;

	t4 = ((x37|x38)/(x39<x40));

	if (t4 != 4294967267U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x41 = -1;
	volatile int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	static int32_t x44 = INT32_MAX;
	volatile int32_t t5 = -18;

	t5 = ((x41|x42)/(x43<x44));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 31489U;
	int32_t x46 = INT32_MIN;
	volatile uint32_t t6 = 8231628U;

	t6 = ((x45|x46)/(x47<x48));

	if (t6 != 2147515137U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	int32_t x52 = INT32_MAX;

	t7 = ((x49|x50)/(x51<x52));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 24U;
	int32_t x54 = 439603;
	int16_t x55 = 10210;
	uint16_t x56 = UINT16_MAX;
	int32_t t8 = 374614617;

	t8 = ((x53|x54)/(x55<x56));

	if (t8 != 439611) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x76 = INT8_MIN;
	static uint64_t t9 = UINT64_MAX;

	t9 = ((x73|x74)/(x75<x76));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = -1;
	volatile int16_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int64_t t10 = 1522LL;

	t10 = ((x77|x78)/(x79<x80));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x81 = UINT8_MAX;
	uint32_t x83 = UINT32_MAX;
	uint64_t x84 = 61655003027773233LLU;

	t11 = ((x81|x82)/(x83<x84));

	if (t11 != 78085375) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x88 = INT8_MIN;
	uint32_t t12 = UINT32_MAX;

	t12 = ((x85|x86)/(x87<x88));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x93 = INT32_MIN;
	uint64_t x94 = 304844451629LLU;
	uint16_t x95 = 2U;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t13 = 1267833404984030749LLU;

	t13 = ((x93|x94)/(x95<x96));

	if (t13 != 18446744073611325229LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = 456047829555404059LLU;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static volatile uint64_t t14 = 134LLU;

	t14 = ((x97|x98)/(x99<x100));

	if (t14 != 18446744072388140315LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 0U;
	volatile uint16_t x104 = UINT16_MAX;
	static uint32_t t15 = UINT32_MAX;

	t15 = ((x101|x102)/(x103<x104));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x118 = INT32_MIN;
	uint64_t x119 = 171765822018498800LLU;
	static int16_t x120 = -1602;

	t16 = ((x117|x118)/(x119<x120));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x121 = 39U;
	int16_t x123 = -1;
	volatile int8_t x124 = 57;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x121|x122)/(x123<x124));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x133 = 0;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	int32_t t18 = 926746685;

	t18 = ((x133|x134)/(x135<x136));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = 87421012262371LL;
	int16_t x146 = INT16_MAX;
	static int32_t x147 = -200;

	t19 = ((x145|x146)/(x147<x148));

	if (t19 != 87421012279295LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x149 = INT64_MAX;
	static int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	uint64_t x152 = 10730172664247260LLU;
	static volatile int64_t t20 = 48830303887698679LL;

	t20 = ((x149|x150)/(x151<x152));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x153 = INT8_MAX;
	int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	volatile uint16_t x156 = UINT16_MAX;
	int64_t t21 = -6270687095027630LL;

	t21 = ((x153|x154)/(x155<x156));

	if (t21 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x157 = UINT8_MAX;
	static volatile int32_t x158 = INT32_MIN;
	static int16_t x159 = -3;
	int16_t x160 = -1;
	int32_t t22 = 0;

	t22 = ((x157|x158)/(x159<x160));

	if (t22 != -2147483393) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x165 = 5969263701804849LL;
	int64_t x166 = -1028LL;
	uint16_t x168 = UINT16_MAX;

	t23 = ((x165|x166)/(x167<x168));

	if (t23 != -3LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x198 = 160368U;
	volatile int32_t x200 = INT32_MIN;
	uint32_t t24 = 971710903U;

	t24 = ((x197|x198)/(x199<x200));

	if (t24 != 4294963824U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x209 = -698694;
	volatile int32_t x210 = -47;
	int32_t x211 = -2;
	static int64_t x212 = 8947050833973195LL;
	int32_t t25 = 2633;

	t25 = ((x209|x210)/(x211<x212));

	if (t25 != -5) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	volatile int8_t x224 = INT8_MAX;
	int32_t t26 = -568;

	t26 = ((x221|x222)/(x223<x224));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x226 = INT64_MAX;
	volatile int16_t x227 = INT16_MIN;

	t27 = ((x225|x226)/(x227<x228));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MIN;

	t28 = ((x229|x230)/(x231<x232));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x238 = UINT8_MAX;
	int16_t x240 = 2;
	int32_t t29 = 988;

	t29 = ((x237|x238)/(x239<x240));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x242 = 2U;
	int64_t x243 = INT64_MIN;
	volatile int32_t x244 = -27114177;
	volatile int32_t t30 = 975;

	t30 = ((x241|x242)/(x243<x244));

	if (t30 != -126) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x269 = 0;
	int32_t x270 = 18719;
	uint16_t x271 = 72U;
	uint64_t x272 = 4859LLU;

	t31 = ((x269|x270)/(x271<x272));

	if (t31 != 18719) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x285 = INT32_MAX;
	volatile uint32_t x286 = 117913U;
	volatile int16_t x288 = INT16_MIN;

	t32 = ((x285|x286)/(x287<x288));

	if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t33 = -214794638;

	t33 = ((x293|x294)/(x295<x296));

	if (t33 != -2147483645) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x317 = -1618;
	static volatile uint32_t x319 = 1388071781U;
	volatile int32_t t34 = -4403;

	t34 = ((x317|x318)/(x319<x320));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -21;
	volatile int32_t t35 = -162;

	t35 = ((x325|x326)/(x327<x328));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = -1;
	int32_t x339 = -5;
	int32_t x340 = 448328850;
	static uint64_t t36 = UINT64_MAX;

	t36 = ((x337|x338)/(x339<x340));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	int64_t t37 = INT64_MIN;

	t37 = ((x341|x342)/(x343<x344));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x353 = INT64_MIN;
	static uint64_t x354 = 133740909LLU;
	volatile int64_t x355 = -66465191390LL;
	volatile uint64_t t38 = 3043822645071966200LLU;

	t38 = ((x353|x354)/(x355<x356));

	if (t38 != 9223372036988516717LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x361 = 2570305240320179032LLU;
	int8_t x362 = 29;

	t39 = ((x361|x362)/(x363<x364));

	if (t39 != 2570305240320179037LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x370 = -1LL;
	int64_t x371 = INT64_MIN;
	static uint64_t x372 = UINT64_MAX;
	volatile int64_t t40 = 13171LL;

	t40 = ((x369|x370)/(x371<x372));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x381 = 24U;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x381|x382)/(x383<x384));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x385 = 8776292763LL;
	uint64_t x387 = 25867797LLU;
	volatile int8_t x388 = -1;
	volatile int64_t t42 = 1149953217491725118LL;

	t42 = ((x385|x386)/(x387<x388));

	if (t42 != 10737418239LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x393 = 64442149959220LLU;
	static volatile uint64_t x394 = UINT64_MAX;
	volatile uint16_t x396 = 12020U;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x393|x394)/(x395<x396));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x398 = 24U;
	int8_t x399 = -1;
	int8_t x400 = 1;
	int32_t t44 = 3430;

	t44 = ((x397|x398)/(x399<x400));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x401 = INT32_MIN;
	uint32_t x402 = UINT32_MAX;
	int32_t x404 = -343429;
	uint32_t t45 = UINT32_MAX;

	t45 = ((x401|x402)/(x403<x404));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x405 = INT32_MIN;
	static int64_t x407 = INT64_MIN;
	uint8_t x408 = 1U;
	uint32_t t46 = 0U;

	t46 = ((x405|x406)/(x407<x408));

	if (t46 != 2147827457U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x409 = 79;
	int32_t x410 = INT32_MIN;
	static int64_t x412 = INT64_MAX;
	volatile int32_t t47 = 1278;

	t47 = ((x409|x410)/(x411<x412));

	if (t47 != -2147483569) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x414 = -1;
	int16_t x415 = -8478;
	static volatile int8_t x416 = 0;
	static uint32_t t48 = UINT32_MAX;

	t48 = ((x413|x414)/(x415<x416));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x417 = INT32_MIN;
	volatile uint16_t x418 = 216U;
	int16_t x420 = -29;
	volatile int32_t t49 = -981138157;

	t49 = ((x417|x418)/(x419<x420));

	if (t49 != -2147483432) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x446 = 26563U;
	int32_t x447 = -1;
	int64_t t50 = -205991LL;

	t50 = ((x445|x446)/(x447<x448));

	if (t50 != -9223372036854749245LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x449 = UINT16_MAX;
	int8_t x450 = INT8_MAX;
	uint64_t x452 = 22182LLU;
	volatile int32_t t51 = -4;

	t51 = ((x449|x450)/(x451<x452));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MIN;
	int32_t x459 = -1;
	int8_t x460 = 5;

	t52 = ((x457|x458)/(x459<x460));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x465 = -1;
	int32_t x466 = -1;
	int32_t x467 = INT32_MIN;
	volatile uint8_t x468 = 11U;

	t53 = ((x465|x466)/(x467<x468));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x470 = INT8_MIN;
	int64_t x471 = -2366LL;
	int32_t x472 = -1;
	volatile int64_t t54 = -27343197LL;

	t54 = ((x469|x470)/(x471<x472));

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x473 = INT8_MIN;
	static volatile uint64_t x474 = 53851282LLU;
	int8_t x475 = INT8_MIN;
	uint16_t x476 = UINT16_MAX;
	volatile uint64_t t55 = 2LLU;

	t55 = ((x473|x474)/(x475<x476));

	if (t55 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x477 = INT64_MIN;
	volatile uint32_t x478 = 20U;
	static uint8_t x480 = UINT8_MAX;

	t56 = ((x477|x478)/(x479<x480));

	if (t56 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x481 = UINT64_MAX;
	static int64_t x482 = -4310139666763LL;
	uint8_t x483 = UINT8_MAX;
	uint32_t x484 = UINT32_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x481|x482)/(x483<x484));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x509 = -1LL;
	uint16_t x510 = 26U;
	static int32_t x511 = -4090484;
	int8_t x512 = -1;
	volatile int64_t t58 = -41627511388165354LL;

	t58 = ((x509|x510)/(x511<x512));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x513 = 6519668734289LLU;
	static volatile int64_t x514 = INT64_MAX;
	uint8_t x515 = 21U;
	static volatile uint64_t x516 = 2131910555478799LLU;
	uint64_t t59 = 11LLU;

	t59 = ((x513|x514)/(x515<x516));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x517 = UINT32_MAX;
	uint64_t x518 = UINT64_MAX;
	static uint8_t x519 = UINT8_MAX;
	volatile uint64_t x520 = UINT64_MAX;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x517|x518)/(x519<x520));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x529 = 0U;
	static int32_t x532 = INT32_MAX;

	t61 = ((x529|x530)/(x531<x532));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x533 = 2U;
	uint32_t x534 = UINT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x533|x534)/(x535<x536));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x549 = INT64_MIN;
	volatile int8_t x550 = INT8_MIN;
	int32_t x551 = INT32_MIN;
	int8_t x552 = -1;
	volatile int64_t t63 = -256658571784LL;

	t63 = ((x549|x550)/(x551<x552));

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x553 = UINT64_MAX;
	int64_t x554 = INT64_MAX;
	uint16_t x555 = 207U;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x553|x554)/(x555<x556));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x557 = -1;
	static uint16_t x558 = 3U;
	volatile uint8_t x560 = 78U;
	int32_t t65 = -30635963;

	t65 = ((x557|x558)/(x559<x560));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x565 = 62;
	uint16_t x566 = 410U;
	int32_t x568 = INT32_MIN;

	t66 = ((x565|x566)/(x567<x568));

	if (t66 != 446) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x569 = UINT64_MAX;
	uint32_t x570 = 1773941790U;
	volatile uint16_t x572 = 107U;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x569|x570)/(x571<x572));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x577 = INT64_MAX;
	int8_t x578 = INT8_MIN;
	int16_t x579 = -1;
	int8_t x580 = 1;
	volatile int64_t t68 = 18433531265741750LL;

	t68 = ((x577|x578)/(x579<x580));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x581 = 188;
	uint16_t x582 = 0U;
	int64_t x583 = -63860942088030LL;
	int16_t x584 = INT16_MAX;
	static volatile int32_t t69 = 67767668;

	t69 = ((x581|x582)/(x583<x584));

	if (t69 != 188) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x586 = INT16_MIN;
	volatile int8_t x587 = 21;
	int64_t x588 = 1849LL;
	int32_t t70 = 107714;

	t70 = ((x585|x586)/(x587<x588));

	if (t70 != -32765) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x593 = UINT8_MAX;
	int64_t x594 = -1LL;
	uint32_t x595 = 1U;
	int16_t x596 = 164;
	volatile int64_t t71 = 6096414LL;

	t71 = ((x593|x594)/(x595<x596));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x602 = 4466LLU;
	uint16_t x603 = 22U;
	volatile uint64_t t72 = 1501031LLU;

	t72 = ((x601|x602)/(x603<x604));

	if (t72 != 9223372036854780274LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x606 = 193917464U;
	volatile int32_t x607 = -1;
	uint8_t x608 = 35U;
	uint32_t t73 = 14U;

	t73 = ((x605|x606)/(x607<x608));

	if (t73 != 193917469U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x609 = 1324613LLU;
	uint16_t x610 = 1544U;
	int32_t x611 = -3035495;
	int16_t x612 = -89;
	uint64_t t74 = 249318815835LLU;

	t74 = ((x609|x610)/(x611<x612));

	if (t74 != 1324621LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x621 = UINT64_MAX;
	uint32_t x622 = 113770201U;
	int8_t x623 = -1;
	static uint16_t x624 = UINT16_MAX;
	uint64_t t75 = UINT64_MAX;

	t75 = ((x621|x622)/(x623<x624));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x637 = 121U;
	static int32_t x638 = -1;
	int16_t x639 = INT16_MAX;
	uint32_t x640 = 496151014U;
	static int32_t t76 = -467;

	t76 = ((x637|x638)/(x639<x640));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x645 = -1LL;
	int16_t x646 = INT16_MIN;
	uint8_t x648 = UINT8_MAX;
	volatile int64_t t77 = 167310LL;

	t77 = ((x645|x646)/(x647<x648));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x649 = 5620U;
	volatile int16_t x651 = INT16_MIN;
	volatile int64_t t78 = -1335323220045110264LL;

	t78 = ((x649|x650)/(x651<x652));

	if (t78 != 805461503LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x654 = INT8_MIN;
	int32_t x655 = -16;
	int32_t x656 = -1;

	t79 = ((x653|x654)/(x655<x656));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x657 = INT64_MIN;
	uint16_t x658 = 10538U;
	static volatile int64_t t80 = -77019457166LL;

	t80 = ((x657|x658)/(x659<x660));

	if (t80 != -9223372036854765270LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x661 = -227372901106197LL;
	uint32_t x662 = 3043857U;
	int32_t x663 = 390;
	int32_t x664 = 809;
	volatile int64_t t81 = 28357665033006934LL;

	t81 = ((x661|x662)/(x663<x664));

	if (t81 != -227372901105669LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x666 = 1U;
	volatile uint64_t x667 = 123716305323LLU;
	int64_t x668 = -1LL;

	t82 = ((x665|x666)/(x667<x668));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x681 = INT8_MIN;
	int16_t x682 = -5;
	static uint8_t x683 = UINT8_MAX;
	static int32_t x684 = INT32_MAX;
	int32_t t83 = 0;

	t83 = ((x681|x682)/(x683<x684));

	if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x685 = UINT32_MAX;
	volatile uint32_t x686 = 3U;
	uint32_t x687 = 2U;
	volatile int16_t x688 = INT16_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = ((x685|x686)/(x687<x688));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x693 = UINT64_MAX;
	int8_t x695 = INT8_MIN;
	int32_t x696 = INT32_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x693|x694)/(x695<x696));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x709 = 0U;
	uint16_t x710 = 2U;
	volatile int64_t x712 = -1LL;
	static int32_t t86 = 257236388;

	t86 = ((x709|x710)/(x711<x712));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x714 = 30493066812077LL;
	int32_t x715 = -63286;
	uint8_t x716 = 93U;
	volatile int64_t t87 = -402LL;

	t87 = ((x713|x714)/(x715<x716));

	if (t87 != -43320577LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x717 = 0;
	int32_t x718 = -7;
	static int8_t x719 = INT8_MAX;
	int64_t x720 = 616196783039814180LL;
	volatile int32_t t88 = 20690842;

	t88 = ((x717|x718)/(x719<x720));

	if (t88 != -7) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x721 = INT32_MAX;
	int16_t x722 = -1654;
	static volatile uint16_t x723 = 10U;
	uint8_t x724 = UINT8_MAX;

	t89 = ((x721|x722)/(x723<x724));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x725 = INT16_MIN;
	int32_t x727 = -1;
	int16_t x728 = INT16_MAX;
	int32_t t90 = -494585;

	t90 = ((x725|x726)/(x727<x728));

	if (t90 != -32746) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x735 = INT8_MAX;
	static int64_t x736 = INT64_MAX;
	int32_t t91 = -25040693;

	t91 = ((x733|x734)/(x735<x736));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x741 = 2004559LL;
	uint8_t x742 = 14U;
	static int8_t x743 = 43;
	uint32_t x744 = UINT32_MAX;
	int64_t t92 = -351112LL;

	t92 = ((x741|x742)/(x743<x744));

	if (t92 != 2004559LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x747 = -7952123515146LL;
	static int32_t t93 = 16;

	t93 = ((x745|x746)/(x747<x748));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x749 = INT8_MIN;
	uint32_t x750 = 19009U;
	int16_t x751 = INT16_MIN;
	uint16_t x752 = 14056U;
	volatile uint32_t t94 = 582U;

	t94 = ((x749|x750)/(x751<x752));

	if (t94 != 4294967233U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x761 = 14;
	int8_t x763 = -1;
	static volatile uint16_t x764 = 42U;
	static volatile int32_t t95 = 1225616;

	t95 = ((x761|x762)/(x763<x764));

	if (t95 != 5054) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x765 = INT16_MIN;
	volatile int16_t x766 = -2866;
	uint16_t x768 = 25988U;

	t96 = ((x765|x766)/(x767<x768));

	if (t96 != -2866) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x781 = 92U;
	static int8_t x782 = -17;
	static int8_t x783 = INT8_MAX;
	volatile uint8_t x784 = UINT8_MAX;

	t97 = ((x781|x782)/(x783<x784));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x813 = -1;
	int32_t x815 = INT32_MIN;
	static uint8_t x816 = 0U;
	volatile int32_t t98 = 30905756;

	t98 = ((x813|x814)/(x815<x816));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x821 = INT8_MIN;
	int8_t x822 = -1;
	static int32_t x823 = INT32_MIN;
	int8_t x824 = -40;
	int32_t t99 = -344;

	t99 = ((x821|x822)/(x823<x824));

	if (t99 != -1) { NG(); } else { ; }
	
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

