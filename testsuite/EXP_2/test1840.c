#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x15 = UINT32_MAX;
uint32_t t0 = 250U;
volatile int64_t t1 = -26634270LL;
uint8_t x24 = 8U;
int64_t x201 = INT64_MIN;
volatile uint64_t x202 = UINT64_MAX;
volatile int8_t x245 = INT8_MAX;
static int64_t t7 = -1350314463508LL;
int32_t x274 = INT32_MAX;
uint64_t x461 = 0LLU;
uint64_t x463 = UINT64_MAX;
int8_t x464 = 0;
static uint64_t t11 = 10063458LLU;
volatile uint64_t x467 = UINT64_MAX;
volatile int64_t x561 = INT64_MAX;
static int32_t x562 = INT32_MAX;
int8_t x736 = 12;
static uint32_t x905 = UINT32_MAX;
volatile int64_t t16 = -21773652LL;
uint16_t x988 = 3U;
volatile uint16_t x1248 = 0U;
int64_t x1295 = INT64_MIN;
uint8_t x1308 = 2U;
uint32_t x1390 = UINT32_MAX;
int32_t x1486 = INT32_MAX;
int32_t t26 = 3813150;
static uint32_t x1529 = 15703U;
uint64_t x1530 = UINT64_MAX;
int8_t x1693 = 1;
volatile int8_t x1696 = 0;
static int16_t x1704 = 1;
uint64_t t30 = 43LLU;
int16_t x1822 = -652;
uint64_t x1881 = 1359353996381494018LLU;
int8_t x2081 = -1;
uint32_t t34 = 0U;
int16_t x2369 = INT16_MIN;
uint32_t x2371 = 55500U;
int8_t x2424 = 25;
static volatile uint64_t x2445 = 37246LLU;
static uint8_t x2484 = 0U;
int32_t t40 = 293903;
int8_t x2575 = INT8_MIN;
uint64_t x2642 = 4801LLU;
static int32_t x2643 = INT32_MAX;
volatile uint32_t t45 = 2U;
uint16_t x2716 = 46U;
uint64_t x2762 = UINT64_MAX;
volatile uint64_t t49 = 5457831LLU;
static uint8_t x2836 = 5U;
volatile uint64_t t50 = 703LLU;
static int64_t x2874 = INT64_MIN;
volatile int64_t t51 = -173529070572040LL;
int8_t x2944 = 17;
volatile int16_t x2949 = -4;
uint32_t x2952 = 5U;
volatile uint64_t t55 = 9879512LLU;
volatile uint16_t x3134 = 7459U;
uint8_t x3136 = 28U;
volatile uint64_t t56 = 159LLU;
int64_t x3299 = INT64_MIN;
int64_t x3301 = -1LL;
static volatile uint8_t x3312 = 20U;
int8_t x3345 = INT8_MAX;
volatile uint16_t x3346 = 6052U;
uint64_t x3390 = 95636LLU;
int8_t x3392 = 32;
static uint8_t x3684 = 0U;
int16_t x4063 = -1;
uint8_t x4064 = 6U;
volatile int16_t x4097 = 926;
int8_t x4100 = 0;
static int32_t t67 = 7676471;
int64_t x4305 = 83LL;
int16_t x4308 = 30;
int64_t t71 = 2360767809172323550LL;
uint16_t x4338 = 725U;
int64_t t72 = -139LL;
volatile uint16_t x4371 = 424U;
volatile int16_t x4462 = INT16_MIN;
uint16_t x4464 = 1U;
volatile uint32_t x4473 = 2U;
int64_t x4474 = INT64_MIN;
volatile uint32_t x4678 = 2U;
static int8_t x4764 = 1;
static int16_t x4781 = INT16_MIN;
int8_t x4821 = INT8_MAX;
int32_t x4822 = INT32_MAX;
int16_t x4824 = 15;
int8_t x4833 = INT8_MAX;
uint8_t x4887 = 18U;
uint8_t x4888 = 1U;
int16_t x5014 = INT16_MAX;
uint8_t x5016 = 1U;
static volatile int16_t x5093 = INT16_MAX;
volatile int32_t t83 = -41;
static uint64_t t84 = 276LLU;
uint32_t x5225 = 1282663U;
int8_t x5227 = -1;
int64_t x5289 = INT64_MIN;
uint64_t x5291 = 0LLU;
int8_t x5303 = -1;
volatile int64_t t90 = 56428741752871LL;
int32_t x5342 = INT32_MIN;
static volatile int8_t x5422 = 2;
uint64_t x5423 = 6998LLU;
static uint16_t x5451 = 12164U;
static uint32_t x5474 = 4U;
uint64_t t96 = 61368193767783LLU;
int8_t x5561 = -1;
uint16_t x5562 = 72U;
uint64_t t97 = 34LLU;
uint16_t x5640 = 6U;
int16_t x5653 = INT16_MIN;


void f0(void) {
	uint16_t x13 = UINT16_MAX;
	static volatile uint32_t x14 = 109918U;
	int8_t x16 = 1;

	t0 = ((x13|(x14&x15))>>x16);

	if (t0 != 65535U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = 15LL;
	uint8_t x18 = 61U;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = 6U;

	t1 = ((x17|(x18&x19))>>x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = INT8_MAX;
	volatile uint64_t x22 = 2751860LLU;
	uint8_t x23 = UINT8_MAX;
	volatile uint64_t t2 = 89397555841LLU;

	t2 = ((x21|(x22&x23))>>x24);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x153 = INT32_MAX;
	volatile int16_t x154 = 3;
	static uint16_t x155 = 3U;
	uint64_t x156 = 25LLU;
	volatile int32_t t3 = 1799;

	t3 = ((x153|(x154&x155))>>x156);

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	uint64_t x183 = 7LLU;
	uint32_t x184 = 3U;
	volatile uint64_t t4 = 120725240LLU;

	t4 = ((x181|(x182&x183))>>x184);

	if (t4 != 2305843009213689856LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x203 = UINT64_MAX;
	static volatile uint8_t x204 = 1U;
	volatile uint64_t t5 = 1968710842839LLU;

	t5 = ((x201|(x202&x203))>>x204);

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x225 = 95U;
	uint32_t x226 = UINT32_MAX;
	static volatile int16_t x227 = INT16_MIN;
	uint8_t x228 = 13U;
	static uint32_t t6 = 0U;

	t6 = ((x225|(x226&x227))>>x228);

	if (t6 != 524284U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x246 = INT64_MIN;
	uint8_t x247 = 7U;
	int8_t x248 = 31;

	t7 = ((x245|(x246&x247))>>x248);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x253 = INT8_MAX;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 224U;
	uint8_t x256 = 10U;
	volatile uint32_t t8 = 1U;

	t8 = ((x253|(x254&x255))>>x256);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 5LLU;
	int64_t x259 = 253767373824LL;
	static uint16_t x260 = 8U;
	volatile uint64_t t9 = 135134LLU;

	t9 = ((x257|(x258&x259))>>x260);

	if (t9 != 72057594037927808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x273 = -1;
	uint64_t x275 = 30869LLU;
	uint8_t x276 = 7U;
	uint64_t t10 = 519600137255714LLU;

	t10 = ((x273|(x274&x275))>>x276);

	if (t10 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x462 = 4U;

	t11 = ((x461|(x462&x463))>>x464);

	if (t11 != 4LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x465 = 190861;
	uint32_t x466 = UINT32_MAX;
	volatile uint8_t x468 = 1U;
	uint64_t t12 = 174797LLU;

	t12 = ((x465|(x466&x467))>>x468);

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x473 = 225;
	static int64_t x474 = -1LL;
	uint16_t x475 = 22U;
	int8_t x476 = 9;
	volatile int64_t t13 = -32527LL;

	t13 = ((x473|(x474&x475))>>x476);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x563 = -1LL;
	static int8_t x564 = 1;
	volatile int64_t t14 = 190626088LL;

	t14 = ((x561|(x562&x563))>>x564);

	if (t14 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x733 = INT32_MIN;
	uint16_t x734 = 42U;
	uint64_t x735 = 15730532063820334LLU;
	uint64_t t15 = 3572382178514045LLU;

	t15 = ((x733|(x734&x735))>>x736);

	if (t15 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x906 = 335120890U;
	int64_t x907 = INT64_MIN;
	static volatile int8_t x908 = 10;

	t16 = ((x905|(x906&x907))>>x908);

	if (t16 != 4194303LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x985 = 129396358LL;
	int32_t x986 = 6;
	uint32_t x987 = UINT32_MAX;
	int64_t t17 = -1LL;

	t17 = ((x985|(x986&x987))>>x988);

	if (t17 != 16174544LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1061 = 441U;
	uint16_t x1062 = UINT16_MAX;
	uint8_t x1063 = UINT8_MAX;
	uint16_t x1064 = 28U;
	int32_t t18 = -476;

	t18 = ((x1061|(x1062&x1063))>>x1064);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1185 = UINT32_MAX;
	int16_t x1186 = -2023;
	int32_t x1187 = INT32_MIN;
	static uint16_t x1188 = 1U;
	uint32_t t19 = 5061U;

	t19 = ((x1185|(x1186&x1187))>>x1188);

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1245 = UINT32_MAX;
	int8_t x1246 = INT8_MIN;
	static int8_t x1247 = INT8_MAX;
	uint32_t t20 = UINT32_MAX;

	t20 = ((x1245|(x1246&x1247))>>x1248);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1293 = INT8_MAX;
	int8_t x1294 = 1;
	volatile int64_t x1296 = 1LL;
	int64_t t21 = -68068LL;

	t21 = ((x1293|(x1294&x1295))>>x1296);

	if (t21 != 63LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1305 = UINT32_MAX;
	int8_t x1306 = -1;
	uint16_t x1307 = 9943U;
	uint32_t t22 = 178U;

	t22 = ((x1305|(x1306&x1307))>>x1308);

	if (t22 != 1073741823U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1389 = 6;
	volatile int8_t x1391 = INT8_MIN;
	volatile uint8_t x1392 = 6U;
	uint32_t t23 = 591U;

	t23 = ((x1389|(x1390&x1391))>>x1392);

	if (t23 != 67108862U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1409 = 0;
	int8_t x1410 = -1;
	static int32_t x1411 = 23097;
	uint8_t x1412 = 1U;
	int32_t t24 = 321;

	t24 = ((x1409|(x1410&x1411))>>x1412);

	if (t24 != 11548) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1461 = -1;
	uint64_t x1462 = 2155033847357535877LLU;
	uint16_t x1463 = 47U;
	uint16_t x1464 = 8U;
	volatile uint64_t t25 = 6531843106437654002LLU;

	t25 = ((x1461|(x1462&x1463))>>x1464);

	if (t25 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1485 = INT32_MAX;
	static volatile int8_t x1487 = INT8_MAX;
	volatile uint16_t x1488 = 2U;

	t26 = ((x1485|(x1486&x1487))>>x1488);

	if (t26 != 536870911) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1531 = INT8_MAX;
	int8_t x1532 = 22;
	static volatile uint64_t t27 = 97537LLU;

	t27 = ((x1529|(x1530&x1531))>>x1532);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1641 = INT32_MIN;
	static int32_t x1642 = -54477;
	volatile uint64_t x1643 = UINT64_MAX;
	uint8_t x1644 = 2U;
	volatile uint64_t t28 = 1551271403105LLU;

	t28 = ((x1641|(x1642&x1643))>>x1644);

	if (t28 != 4611686018427374284LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1694 = INT16_MIN;
	uint32_t x1695 = UINT32_MAX;
	static volatile uint32_t t29 = 3U;

	t29 = ((x1693|(x1694&x1695))>>x1696);

	if (t29 != 4294934529U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1701 = 11634U;
	static volatile uint64_t x1702 = UINT64_MAX;
	uint16_t x1703 = UINT16_MAX;

	t30 = ((x1701|(x1702&x1703))>>x1704);

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1821 = 1U;
	int32_t x1823 = 14;
	uint8_t x1824 = 14U;
	volatile int32_t t31 = -77;

	t31 = ((x1821|(x1822&x1823))>>x1824);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1882 = INT16_MIN;
	int64_t x1883 = INT64_MIN;
	volatile uint8_t x1884 = 48U;
	static volatile uint64_t t32 = 668734679026247LLU;

	t32 = ((x1881|(x1882&x1883))>>x1884);

	if (t32 != 37597LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2082 = -1;
	volatile uint32_t x2083 = 32891U;
	static volatile int32_t x2084 = 2;
	volatile uint32_t t33 = 259352U;

	t33 = ((x2081|(x2082&x2083))>>x2084);

	if (t33 != 1073741823U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2233 = INT16_MIN;
	volatile int8_t x2234 = -5;
	static volatile uint32_t x2235 = UINT32_MAX;
	uint8_t x2236 = 0U;

	t34 = ((x2233|(x2234&x2235))>>x2236);

	if (t34 != 4294967291U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2349 = UINT32_MAX;
	static int16_t x2350 = INT16_MIN;
	int64_t x2351 = 4373373519505952LL;
	uint8_t x2352 = 2U;
	volatile int64_t t35 = -7174227674344941LL;

	t35 = ((x2349|(x2350&x2351))>>x2352);

	if (t35 != 1093344054738943LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2370 = -1;
	uint8_t x2372 = 1U;
	static uint32_t t36 = 1439206U;

	t36 = ((x2369|(x2370&x2371))>>x2372);

	if (t36 != 2147478630U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x2421 = -1;
	int8_t x2422 = INT8_MIN;
	uint32_t x2423 = 155619U;
	volatile uint32_t t37 = 65911U;

	t37 = ((x2421|(x2422&x2423))>>x2424);

	if (t37 != 127U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2446 = 1451U;
	volatile uint32_t x2447 = 881U;
	uint8_t x2448 = 2U;
	static uint64_t t38 = 3LLU;

	t38 = ((x2445|(x2446&x2447))>>x2448);

	if (t38 != 9311LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2469 = 245;
	static int32_t x2470 = INT32_MAX;
	static int8_t x2471 = -33;
	uint8_t x2472 = 3U;
	volatile int32_t t39 = 3268799;

	t39 = ((x2469|(x2470&x2471))>>x2472);

	if (t39 != 268435455) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2481 = UINT16_MAX;
	uint16_t x2482 = 4678U;
	int8_t x2483 = 10;

	t40 = ((x2481|(x2482&x2483))>>x2484);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2541 = -228366;
	static volatile uint64_t x2542 = UINT64_MAX;
	volatile uint32_t x2543 = 11U;
	uint8_t x2544 = 4U;
	uint64_t t41 = 15571866767LLU;

	t41 = ((x2541|(x2542&x2543))>>x2544);

	if (t41 != 1152921504606832703LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2557 = 18922756U;
	volatile int32_t x2558 = INT32_MAX;
	int64_t x2559 = 43680LL;
	int16_t x2560 = 2;
	volatile int64_t t42 = 35334717682129166LL;

	t42 = ((x2557|(x2558&x2559))>>x2560);

	if (t42 != 4730857LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2573 = INT16_MAX;
	volatile uint16_t x2574 = 26815U;
	volatile uint16_t x2576 = 7U;
	static volatile int32_t t43 = 1157378;

	t43 = ((x2573|(x2574&x2575))>>x2576);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2641 = INT32_MAX;
	int8_t x2644 = 28;
	uint64_t t44 = 1018831813348693646LLU;

	t44 = ((x2641|(x2642&x2643))>>x2644);

	if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2661 = INT32_MIN;
	static int16_t x2662 = INT16_MIN;
	volatile uint32_t x2663 = 112161U;
	uint8_t x2664 = 11U;

	t45 = ((x2661|(x2662&x2663))>>x2664);

	if (t45 != 1048624U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2709 = -1LL;
	volatile int8_t x2710 = INT8_MIN;
	static uint64_t x2711 = 11369083456663363LLU;
	uint8_t x2712 = 3U;
	volatile uint64_t t46 = 30LLU;

	t46 = ((x2709|(x2710&x2711))>>x2712);

	if (t46 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2713 = UINT8_MAX;
	uint32_t x2714 = 249396881U;
	int64_t x2715 = INT64_MIN;
	volatile int64_t t47 = -3397402LL;

	t47 = ((x2713|(x2714&x2715))>>x2716);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2729 = 168421786499LLU;
	static volatile uint8_t x2730 = 110U;
	int32_t x2731 = INT32_MAX;
	static volatile uint16_t x2732 = 2U;
	volatile uint64_t t48 = 32941175487LLU;

	t48 = ((x2729|(x2730&x2731))>>x2732);

	if (t48 != 42105446651LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2761 = 66U;
	static int32_t x2763 = INT32_MIN;
	volatile int8_t x2764 = 1;

	t49 = ((x2761|(x2762&x2763))>>x2764);

	if (t49 != 9223372035781034017LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2833 = UINT64_MAX;
	uint64_t x2834 = 405228268984045LLU;
	int32_t x2835 = -1;

	t50 = ((x2833|(x2834&x2835))>>x2836);

	if (t50 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2873 = 2573825823272128LL;
	int32_t x2875 = INT32_MAX;
	static int8_t x2876 = 1;

	t51 = ((x2873|(x2874&x2875))>>x2876);

	if (t51 != 1286912911636064LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2885 = 27115062736LLU;
	uint64_t x2886 = 1241916649379494LLU;
	int16_t x2887 = 252;
	int8_t x2888 = 0;
	static uint64_t t52 = 20146514309LLU;

	t52 = ((x2885|(x2886&x2887))>>x2888);

	if (t52 != 27115062772LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2941 = 6;
	static int64_t x2942 = -1LL;
	static uint32_t x2943 = UINT32_MAX;
	volatile int64_t t53 = 78798563387641LL;

	t53 = ((x2941|(x2942&x2943))>>x2944);

	if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2950 = UINT64_MAX;
	static uint32_t x2951 = 11000U;
	volatile uint64_t t54 = 4245481460LLU;

	t54 = ((x2949|(x2950&x2951))>>x2952);

	if (t54 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2953 = -1;
	static uint64_t x2954 = 16921802196588507LLU;
	static int16_t x2955 = INT16_MAX;
	int8_t x2956 = 1;

	t55 = ((x2953|(x2954&x2955))>>x2956);

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3133 = INT16_MAX;
	uint64_t x3135 = 2097963947979425014LLU;

	t56 = ((x3133|(x3134&x3135))>>x3136);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3297 = 374;
	volatile uint8_t x3298 = UINT8_MAX;
	volatile int8_t x3300 = 1;
	volatile int64_t t57 = -2274362058699890076LL;

	t57 = ((x3297|(x3298&x3299))>>x3300);

	if (t57 != 187LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3302 = INT8_MIN;
	uint64_t x3303 = 0LLU;
	static uint16_t x3304 = 1U;
	volatile uint64_t t58 = 44386516647390050LLU;

	t58 = ((x3301|(x3302&x3303))>>x3304);

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3309 = 0;
	int32_t x3310 = -1;
	static uint32_t x3311 = 557323U;
	volatile uint32_t t59 = 1356857286U;

	t59 = ((x3309|(x3310&x3311))>>x3312);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3347 = 12689557408831429LLU;
	uint8_t x3348 = 41U;
	static uint64_t t60 = 197705LLU;

	t60 = ((x3345|(x3346&x3347))>>x3348);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3389 = -1;
	uint64_t x3391 = 34LLU;
	volatile uint64_t t61 = 3298329825190219967LLU;

	t61 = ((x3389|(x3390&x3391))>>x3392);

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3461 = UINT32_MAX;
	uint16_t x3462 = UINT16_MAX;
	static int32_t x3463 = INT32_MIN;
	volatile uint32_t x3464 = 18U;
	static volatile uint32_t t62 = 5U;

	t62 = ((x3461|(x3462&x3463))>>x3464);

	if (t62 != 16383U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3681 = 1U;
	int32_t x3682 = INT32_MAX;
	static int8_t x3683 = INT8_MAX;
	volatile int32_t t63 = -1530126;

	t63 = ((x3681|(x3682&x3683))>>x3684);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3909 = 40985252973483735LLU;
	static int8_t x3910 = 1;
	int64_t x3911 = -108LL;
	uint8_t x3912 = 0U;
	volatile uint64_t t64 = 135012697565LLU;

	t64 = ((x3909|(x3910&x3911))>>x3912);

	if (t64 != 40985252973483735LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4061 = 6831;
	int64_t x4062 = 130218382LL;
	static int64_t t65 = 4156132155LL;

	t65 = ((x4061|(x4062&x4063))>>x4064);

	if (t65 != 2034670LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x4073 = UINT64_MAX;
	static uint64_t x4074 = UINT64_MAX;
	int16_t x4075 = INT16_MAX;
	uint16_t x4076 = 2U;
	volatile uint64_t t66 = 126712806405LLU;

	t66 = ((x4073|(x4074&x4075))>>x4076);

	if (t66 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4098 = UINT8_MAX;
	int8_t x4099 = INT8_MIN;

	t67 = ((x4097|(x4098&x4099))>>x4100);

	if (t67 != 926) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4137 = 38655LLU;
	static int16_t x4138 = INT16_MIN;
	int8_t x4139 = 3;
	static uint16_t x4140 = 3U;
	uint64_t t68 = 36LLU;

	t68 = ((x4137|(x4138&x4139))>>x4140);

	if (t68 != 4831LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4157 = 14U;
	uint8_t x4158 = 1U;
	uint8_t x4159 = 26U;
	static int8_t x4160 = 3;
	volatile uint32_t t69 = 20518U;

	t69 = ((x4157|(x4158&x4159))>>x4160);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x4306 = 0U;
	static uint32_t x4307 = UINT32_MAX;
	volatile int64_t t70 = 44749554LL;

	t70 = ((x4305|(x4306&x4307))>>x4308);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x4313 = 1;
	uint8_t x4314 = 13U;
	int64_t x4315 = INT64_MIN;
	int16_t x4316 = 3;

	t71 = ((x4313|(x4314&x4315))>>x4316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4337 = INT16_MAX;
	volatile int64_t x4339 = 5LL;
	uint32_t x4340 = 56U;

	t72 = ((x4337|(x4338&x4339))>>x4340);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4369 = 1;
	volatile uint64_t x4370 = UINT64_MAX;
	int8_t x4372 = 5;
	uint64_t t73 = 36732662291375242LLU;

	t73 = ((x4369|(x4370&x4371))>>x4372);

	if (t73 != 13LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4461 = 92U;
	static volatile uint64_t x4463 = 2642LLU;
	static volatile uint64_t t74 = 776410160LLU;

	t74 = ((x4461|(x4462&x4463))>>x4464);

	if (t74 != 46LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4475 = INT32_MAX;
	volatile uint8_t x4476 = 1U;
	static volatile int64_t t75 = -4073240419678212LL;

	t75 = ((x4473|(x4474&x4475))>>x4476);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4677 = -1;
	int16_t x4679 = -2;
	int16_t x4680 = 31;
	uint32_t t76 = 50U;

	t76 = ((x4677|(x4678&x4679))>>x4680);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4761 = 0U;
	static int32_t x4762 = INT32_MIN;
	static int32_t x4763 = INT32_MAX;
	static uint32_t t77 = 1U;

	t77 = ((x4761|(x4762&x4763))>>x4764);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x4782 = 83879608042LLU;
	int16_t x4783 = 356;
	static uint16_t x4784 = 18U;
	volatile uint64_t t78 = 23122335270571612LLU;

	t78 = ((x4781|(x4782&x4783))>>x4784);

	if (t78 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x4823 = -1696;
	volatile int32_t t79 = 11;

	t79 = ((x4821|(x4822&x4823))>>x4824);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4834 = 11849U;
	static int32_t x4835 = INT32_MAX;
	volatile uint32_t x4836 = 0U;
	volatile int32_t t80 = 156;

	t80 = ((x4833|(x4834&x4835))>>x4836);

	if (t80 != 11903) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4885 = -1LL;
	uint64_t x4886 = 6156694LLU;
	volatile uint64_t t81 = 2108351230696LLU;

	t81 = ((x4885|(x4886&x4887))>>x4888);

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5013 = INT16_MAX;
	uint16_t x5015 = 419U;
	volatile int32_t t82 = -3824;

	t82 = ((x5013|(x5014&x5015))>>x5016);

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5094 = 77;
	uint16_t x5095 = UINT16_MAX;
	int8_t x5096 = 25;

	t83 = ((x5093|(x5094&x5095))>>x5096);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x5165 = UINT64_MAX;
	uint64_t x5166 = 457946490924LLU;
	volatile uint64_t x5167 = 2203799387915LLU;
	uint16_t x5168 = 1U;

	t84 = ((x5165|(x5166&x5167))>>x5168);

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x5177 = 27U;
	static uint32_t x5178 = 11U;
	int64_t x5179 = -1LL;
	volatile uint8_t x5180 = 5U;
	int64_t t85 = 3LL;

	t85 = ((x5177|(x5178&x5179))>>x5180);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5193 = INT64_MAX;
	int16_t x5194 = 2;
	volatile uint8_t x5195 = UINT8_MAX;
	static uint8_t x5196 = 6U;
	int64_t t86 = -2664413842320694LL;

	t86 = ((x5193|(x5194&x5195))>>x5196);

	if (t86 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5226 = INT8_MAX;
	uint16_t x5228 = 24U;
	uint32_t t87 = 4967219U;

	t87 = ((x5225|(x5226&x5227))>>x5228);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5290 = 0;
	int8_t x5292 = 27;
	uint64_t t88 = 1147169734696657LLU;

	t88 = ((x5289|(x5290&x5291))>>x5292);

	if (t88 != 68719476736LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5301 = UINT8_MAX;
	uint32_t x5302 = UINT32_MAX;
	int8_t x5304 = 1;
	volatile uint32_t t89 = 44848U;

	t89 = ((x5301|(x5302&x5303))>>x5304);

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5317 = 102U;
	int64_t x5318 = INT64_MAX;
	int64_t x5319 = INT64_MIN;
	volatile int16_t x5320 = 56;

	t90 = ((x5317|(x5318&x5319))>>x5320);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5341 = 400;
	int32_t x5343 = INT32_MAX;
	uint16_t x5344 = 0U;
	int32_t t91 = -13125744;

	t91 = ((x5341|(x5342&x5343))>>x5344);

	if (t91 != 400) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5345 = INT32_MAX;
	uint16_t x5346 = 1077U;
	volatile uint64_t x5347 = 312LLU;
	int64_t x5348 = 60LL;
	uint64_t t92 = 3LLU;

	t92 = ((x5345|(x5346&x5347))>>x5348);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5421 = INT16_MAX;
	static int8_t x5424 = 0;
	volatile uint64_t t93 = 46184483322LLU;

	t93 = ((x5421|(x5422&x5423))>>x5424);

	if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5449 = INT64_MAX;
	static uint16_t x5450 = 2837U;
	uint32_t x5452 = 15U;
	int64_t t94 = -26624177LL;

	t94 = ((x5449|(x5450&x5451))>>x5452);

	if (t94 != 281474976710655LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5473 = INT8_MIN;
	int32_t x5475 = -1;
	int8_t x5476 = 8;
	volatile uint32_t t95 = 8U;

	t95 = ((x5473|(x5474&x5475))>>x5476);

	if (t95 != 16777215U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5549 = 1666U;
	uint16_t x5550 = UINT16_MAX;
	uint64_t x5551 = 3858796957LLU;
	static int8_t x5552 = 1;

	t96 = ((x5549|(x5550&x5551))>>x5552);

	if (t96 != 19407LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5563 = 885192LLU;
	static volatile uint8_t x5564 = 55U;

	t97 = ((x5561|(x5562&x5563))>>x5564);

	if (t97 != 511LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5637 = -1;
	uint64_t x5638 = UINT64_MAX;
	int8_t x5639 = INT8_MIN;
	static volatile uint64_t t98 = 9618856907587LLU;

	t98 = ((x5637|(x5638&x5639))>>x5640);

	if (t98 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5654 = INT16_MIN;
	uint64_t x5655 = 1LLU;
	static uint16_t x5656 = 46U;
	static volatile uint64_t t99 = 696280295207978716LLU;

	t99 = ((x5653|(x5654&x5655))>>x5656);

	if (t99 != 262143LLU) { NG(); } else { ; }
	
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

