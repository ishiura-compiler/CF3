#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 21454897294355336LL;
volatile int32_t x24 = INT32_MIN;
static volatile int64_t x32 = INT64_MAX;
uint16_t x38 = UINT16_MAX;
int16_t x45 = INT16_MIN;
static uint64_t x48 = UINT64_MAX;
static volatile int64_t t4 = 51016306339LL;
static int32_t x69 = INT32_MAX;
int8_t x72 = 1;
int32_t t7 = -1;
int8_t x98 = INT8_MIN;
int32_t t11 = 16089505;
static volatile int16_t x122 = INT16_MAX;
uint64_t x124 = UINT64_MAX;
volatile int64_t x130 = INT64_MIN;
uint64_t x138 = 2LLU;
uint64_t x140 = 791081400380233LLU;
uint64_t t14 = 3257568474267181LLU;
volatile uint32_t x162 = UINT32_MAX;
static int16_t x176 = INT16_MAX;
int64_t t18 = 1464539799770538LL;
uint32_t x181 = 57U;
int32_t x186 = INT32_MIN;
int32_t x191 = 132;
static uint32_t x193 = UINT32_MAX;
static uint32_t x194 = UINT32_MAX;
int32_t x220 = INT32_MIN;
static int64_t t26 = 789485056869LL;
static volatile uint8_t x229 = UINT8_MAX;
static int32_t x253 = INT32_MAX;
uint8_t x254 = UINT8_MAX;
volatile int32_t t30 = 22439722;
uint16_t x270 = 458U;
static int8_t x273 = INT8_MAX;
static volatile uint32_t t32 = 8048853U;
int32_t x277 = -1;
uint64_t x278 = 173824LLU;
int16_t x300 = INT16_MAX;
int16_t x321 = INT16_MIN;
int8_t x323 = INT8_MIN;
volatile int64_t t38 = 4159907952LL;
volatile uint16_t x327 = 0U;
uint16_t x328 = 14833U;
int64_t t39 = -985000395322718LL;
static volatile int32_t x358 = -19;
volatile int32_t t44 = 1761;
int32_t t46 = 1660;
int16_t x389 = -1;
static int8_t x390 = INT8_MIN;
volatile int32_t t49 = -2;
uint16_t x440 = UINT16_MAX;
volatile uint64_t x445 = 416970LLU;
static int32_t x449 = INT32_MIN;
int16_t x453 = -37;
int8_t x462 = INT8_MIN;
int64_t x466 = INT64_MIN;
uint64_t x476 = 204437LLU;
uint32_t x484 = UINT32_MAX;
volatile int32_t x497 = INT32_MIN;
uint64_t x499 = 282350702833LLU;
int32_t x505 = -1;
int16_t x508 = INT16_MIN;
volatile int8_t x509 = -1;
static volatile int64_t t61 = 102LL;
int8_t x513 = -1;
int32_t x515 = 3850;
uint32_t x546 = 659U;
uint64_t x562 = 369376251540LLU;
uint8_t x566 = 40U;
int64_t x572 = INT64_MAX;
volatile int64_t x610 = INT64_MAX;
int64_t x642 = INT64_MIN;
int32_t x644 = 31;
static int32_t x648 = -1;
int16_t x655 = INT16_MIN;
uint8_t x665 = 107U;
uint32_t x666 = 205U;
uint8_t x677 = 80U;
volatile int8_t x678 = -1;
int16_t x679 = INT16_MAX;
uint16_t x680 = UINT16_MAX;
int16_t x687 = -1;
volatile uint32_t x690 = 0U;
static uint32_t t77 = 240494U;
volatile uint32_t x695 = 1U;
static int16_t x697 = 692;
volatile uint16_t x699 = 19U;
int32_t x750 = -1;
int8_t x754 = -1;
int16_t x782 = INT16_MIN;
volatile int64_t t84 = 17441831410LL;
static volatile int64_t x791 = INT64_MIN;
int32_t t85 = -134931983;
volatile int32_t t86 = -32908968;
static int64_t x805 = 1729666729536485059LL;
static volatile int16_t x808 = INT16_MAX;
volatile int32_t x810 = -23;
volatile int32_t x817 = -1;
volatile int8_t x827 = -29;
int32_t x828 = INT32_MAX;
int32_t x838 = INT32_MIN;
int16_t x846 = INT16_MAX;
int32_t x851 = INT32_MIN;
volatile uint8_t x865 = UINT8_MAX;
uint32_t x878 = 54U;


void f0(void) {
	int64_t x5 = -47939308905077LL;
	volatile uint64_t x7 = 682102395LLU;
	int32_t x8 = INT32_MIN;
	volatile int64_t t0 = 1959277293877LL;

	t0 = (x5&(x6%(x7<x8)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = INT8_MAX;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 12555U;
	volatile int64_t t1 = 2454160LL;

	t1 = (x21&(x22%(x23<x24)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = -1;
	static int16_t x30 = -1;
	int16_t x31 = INT16_MIN;
	static volatile int32_t t2 = -21237019;

	t2 = (x29&(x30%(x31<x32)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x37 = -93439;
	static int64_t x39 = -1LL;
	static uint8_t x40 = 126U;
	int32_t t3 = -504697;

	t3 = (x37&(x38%(x39<x40)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MAX;

	t4 = (x45&(x46%(x47<x48)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x61 = INT64_MIN;
	static uint8_t x62 = 0U;
	int64_t x63 = -286029239LL;
	uint32_t x64 = UINT32_MAX;
	static int64_t t5 = -27632641313LL;

	t5 = (x61&(x62%(x63<x64)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x70 = 33050LL;
	static int8_t x71 = -30;
	int64_t t6 = 2198802159589551967LL;

	t6 = (x69&(x70%(x71<x72)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	static int16_t x75 = -1;
	uint16_t x76 = 2567U;

	t7 = (x73&(x74%(x75<x76)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x78 = INT8_MIN;
	static int8_t x79 = INT8_MIN;
	volatile int16_t x80 = -1;
	volatile int32_t t8 = -5;

	t8 = (x77&(x78%(x79<x80)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x81 = -1LL;
	int32_t x82 = -1;
	volatile int32_t x83 = -8010;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t9 = -2964LL;

	t9 = (x81&(x82%(x83<x84)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x97 = INT64_MIN;
	static uint32_t x99 = 3458U;
	int8_t x100 = -1;
	int64_t t10 = 4204313760605331LL;

	t10 = (x97&(x98%(x99<x100)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x117 = INT16_MIN;
	volatile int16_t x118 = INT16_MAX;
	uint16_t x119 = UINT16_MAX;
	static uint32_t x120 = UINT32_MAX;

	t11 = (x117&(x118%(x119<x120)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	int32_t t12 = 22845;

	t12 = (x121&(x122%(x123<x124)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x129 = 22U;
	volatile int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MAX;
	volatile int64_t t13 = 362026087423964LL;

	t13 = (x129&(x130%(x131<x132)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x137 = 200;
	uint16_t x139 = 4109U;

	t14 = (x137&(x138%(x139<x140)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 96U;
	uint16_t x147 = 74U;
	int32_t x148 = INT32_MAX;
	uint32_t t15 = 45284U;

	t15 = (x145&(x146%(x147<x148)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x161 = INT8_MAX;
	int8_t x163 = INT8_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t16 = 319056015U;

	t16 = (x161&(x162%(x163<x164)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x173 = 503653LL;
	int32_t x174 = INT32_MIN;
	static int8_t x175 = INT8_MIN;
	volatile int64_t t17 = -4781LL;

	t17 = (x173&(x174%(x175<x176)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	uint8_t x179 = 92U;
	int64_t x180 = INT64_MAX;

	t18 = (x177&(x178%(x179<x180)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x182 = -2LL;
	uint32_t x183 = 11990510U;
	int32_t x184 = INT32_MAX;
	volatile int64_t t19 = 2668473692790047605LL;

	t19 = (x181&(x182%(x183<x184)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x185 = INT64_MIN;
	int64_t x187 = -12429758391LL;
	int32_t x188 = -1;
	int64_t t20 = 418521LL;

	t20 = (x185&(x186%(x187<x188)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x189 = 0U;
	uint8_t x190 = UINT8_MAX;
	volatile uint16_t x192 = UINT16_MAX;
	static volatile int32_t t21 = 6946644;

	t21 = (x189&(x190%(x191<x192)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;
	volatile uint32_t t22 = 31U;

	t22 = (x193&(x194%(x195<x196)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x205 = UINT16_MAX;
	int16_t x206 = INT16_MAX;
	int16_t x207 = -1;
	static int32_t x208 = 2;
	static int32_t t23 = 2;

	t23 = (x205&(x206%(x207<x208)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x209 = -1;
	static uint16_t x210 = UINT16_MAX;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 47U;
	int32_t t24 = 483;

	t24 = (x209&(x210%(x211<x212)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x217 = 2058U;
	int8_t x218 = 6;
	volatile int64_t x219 = INT64_MIN;
	static int32_t t25 = 19564;

	t25 = (x217&(x218%(x219<x220)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	static uint32_t x227 = 3589620U;
	volatile int16_t x228 = INT16_MIN;

	t26 = (x225&(x226%(x227<x228)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x230 = -1;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 5U;
	volatile int32_t t27 = -12;

	t27 = (x229&(x230%(x231<x232)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x249 = 358643LLU;
	int32_t x250 = -15616;
	static int8_t x251 = -1;
	static int8_t x252 = 60;
	static volatile uint64_t t28 = 26553919860LLU;

	t28 = (x249&(x250%(x251<x252)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x255 = -1LL;
	volatile int32_t x256 = 43;
	volatile int32_t t29 = 422;

	t29 = (x253&(x254%(x255<x256)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x261 = -1;
	uint8_t x262 = 2U;
	static int32_t x263 = INT32_MIN;
	uint16_t x264 = 720U;

	t30 = (x261&(x262%(x263<x264)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x269 = 485653LL;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	int64_t t31 = -19899LL;

	t31 = (x269&(x270%(x271<x272)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x274 = 15215453U;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;

	t32 = (x273&(x274%(x275<x276)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x279 = 2094043761657802LLU;
	static volatile int8_t x280 = -3;
	uint64_t t33 = 420584120LLU;

	t33 = (x277&(x278%(x279<x280)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x297 = 14LLU;
	int64_t x298 = -30126718LL;
	int8_t x299 = 6;
	uint64_t t34 = 21LLU;

	t34 = (x297&(x298%(x299<x300)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int32_t x306 = -32603;
	volatile int8_t x307 = INT8_MIN;
	uint32_t x308 = UINT32_MAX;
	int32_t t35 = -94;

	t35 = (x305&(x306%(x307<x308)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = INT64_MIN;
	int16_t x311 = -61;
	volatile int32_t x312 = -1;
	volatile int64_t t36 = 503925LL;

	t36 = (x309&(x310%(x311<x312)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x313 = -1;
	static int64_t x314 = INT64_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	volatile uint32_t x316 = UINT32_MAX;
	int64_t t37 = 1696843071723LL;

	t37 = (x313&(x314%(x315<x316)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x322 = -10785587451708596LL;
	int64_t x324 = -1LL;

	t38 = (x321&(x322%(x323<x324)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x325 = INT64_MIN;
	int32_t x326 = 0;

	t39 = (x325&(x326%(x327<x328)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x337 = -1;
	int8_t x338 = -3;
	int32_t x339 = 0;
	int8_t x340 = 13;
	volatile int32_t t40 = -467608;

	t40 = (x337&(x338%(x339<x340)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x341 = 79262;
	int32_t x342 = -1;
	volatile uint64_t x343 = 222191LLU;
	int8_t x344 = INT8_MIN;
	int32_t t41 = 2925;

	t41 = (x341&(x342%(x343<x344)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x357 = -15;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = UINT64_MAX;
	int32_t t42 = 12;

	t42 = (x357&(x358%(x359<x360)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x361 = 636337485U;
	volatile uint8_t x362 = UINT8_MAX;
	int64_t x363 = 968LL;
	static int16_t x364 = INT16_MAX;
	volatile uint32_t t43 = 3U;

	t43 = (x361&(x362%(x363<x364)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	int64_t x367 = 11912289LL;
	int32_t x368 = INT32_MAX;

	t44 = (x365&(x366%(x367<x368)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x377 = INT8_MIN;
	static int16_t x378 = -1;
	uint32_t x379 = 1196U;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t45 = -436855;

	t45 = (x377&(x378%(x379<x380)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = UINT16_MAX;
	static int64_t x383 = INT64_MIN;
	uint8_t x384 = 26U;

	t46 = (x381&(x382%(x383<x384)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x391 = 71U;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t47 = 531855765;

	t47 = (x389&(x390%(x391<x392)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x405 = 2U;
	volatile uint8_t x406 = UINT8_MAX;
	uint32_t x407 = 2846U;
	int16_t x408 = -1;
	volatile int32_t t48 = 26428;

	t48 = (x405&(x406%(x407<x408)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x421 = INT16_MIN;
	int16_t x422 = INT16_MAX;
	uint16_t x423 = 13U;
	uint16_t x424 = 43U;

	t49 = (x421&(x422%(x423<x424)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x429 = INT32_MAX;
	volatile int8_t x430 = -1;
	uint32_t x431 = 123U;
	volatile int8_t x432 = -2;
	int32_t t50 = 29246;

	t50 = (x429&(x430%(x431<x432)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x437 = 236601111LLU;
	uint32_t x438 = UINT32_MAX;
	volatile uint64_t x439 = 1LLU;
	volatile uint64_t t51 = 253443LLU;

	t51 = (x437&(x438%(x439<x440)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x446 = -1;
	int64_t x447 = 61559LL;
	int32_t x448 = 201309918;
	uint64_t t52 = 26LLU;

	t52 = (x445&(x446%(x447<x448)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x450 = -1LL;
	static uint32_t x451 = 9U;
	uint64_t x452 = UINT64_MAX;
	volatile int64_t t53 = 4086606LL;

	t53 = (x449&(x450%(x451<x452)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x454 = UINT64_MAX;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	uint64_t t54 = 25LLU;

	t54 = (x453&(x454%(x455<x456)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x461 = -696;
	volatile int8_t x463 = INT8_MIN;
	static volatile uint16_t x464 = 107U;
	volatile int32_t t55 = -249;

	t55 = (x461&(x462%(x463<x464)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x465 = 20853U;
	uint64_t x467 = 18LLU;
	int16_t x468 = INT16_MIN;
	static volatile int64_t t56 = -294488005878189577LL;

	t56 = (x465&(x466%(x467<x468)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x473 = INT8_MIN;
	int32_t x474 = -4;
	static uint16_t x475 = 11770U;
	volatile int32_t t57 = 14;

	t57 = (x473&(x474%(x475<x476)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x481 = 653U;
	static int8_t x482 = INT8_MAX;
	uint32_t x483 = 2478274U;
	static volatile uint32_t t58 = 225323026U;

	t58 = (x481&(x482%(x483<x484)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x498 = 1;
	volatile int64_t x500 = INT64_MIN;
	volatile int32_t t59 = 213;

	t59 = (x497&(x498%(x499<x500)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x506 = INT16_MAX;
	uint32_t x507 = 2108199595U;
	volatile int32_t t60 = 370243;

	t60 = (x505&(x506%(x507<x508)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x510 = INT64_MIN;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;

	t61 = (x509&(x510%(x511<x512)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x514 = 4U;
	int64_t x516 = INT64_MAX;
	volatile int32_t t62 = -7902;

	t62 = (x513&(x514%(x515<x516)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x533 = INT32_MIN;
	int16_t x534 = 220;
	volatile int32_t x535 = -1;
	volatile int16_t x536 = 390;
	int32_t t63 = 2;

	t63 = (x533&(x534%(x535<x536)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x545 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	int64_t x548 = -1LL;
	volatile int64_t t64 = -14070168LL;

	t64 = (x545&(x546%(x547<x548)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x561 = UINT16_MAX;
	uint32_t x563 = UINT32_MAX;
	volatile uint64_t x564 = 435120904415255LLU;
	volatile uint64_t t65 = 653546022LLU;

	t65 = (x561&(x562%(x563<x564)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x565 = INT32_MAX;
	int16_t x567 = -348;
	volatile uint16_t x568 = 551U;
	volatile int32_t t66 = 5692;

	t66 = (x565&(x566%(x567<x568)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x569 = 45412390LLU;
	int8_t x570 = INT8_MAX;
	int32_t x571 = INT32_MIN;
	volatile uint64_t t67 = 478657706608501210LLU;

	t67 = (x569&(x570%(x571<x572)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x585 = -1;
	int64_t x586 = INT64_MIN;
	int8_t x587 = 21;
	uint16_t x588 = 30U;
	volatile int64_t t68 = 733568980323559LL;

	t68 = (x585&(x586%(x587<x588)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x601 = -1;
	int32_t x602 = INT32_MIN;
	int64_t x603 = -1LL;
	uint16_t x604 = 59U;
	int32_t t69 = 20;

	t69 = (x601&(x602%(x603<x604)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x609 = UINT64_MAX;
	uint32_t x611 = 169U;
	static volatile uint16_t x612 = 17798U;
	volatile uint64_t t70 = 61218666324LLU;

	t70 = (x609&(x610%(x611<x612)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x641 = UINT8_MAX;
	int8_t x643 = INT8_MIN;
	int64_t t71 = 3818972944665778LL;

	t71 = (x641&(x642%(x643<x644)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x645 = 749U;
	int16_t x646 = -111;
	int32_t x647 = -2581;
	int32_t t72 = 46;

	t72 = (x645&(x646%(x647<x648)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x653 = UINT8_MAX;
	static int8_t x654 = INT8_MIN;
	int8_t x656 = INT8_MIN;
	int32_t t73 = 1968221;

	t73 = (x653&(x654%(x655<x656)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x667 = INT16_MIN;
	uint16_t x668 = 21647U;
	uint32_t t74 = 6435328U;

	t74 = (x665&(x666%(x667<x668)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t t75 = 100348;

	t75 = (x677&(x678%(x679<x680)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x685 = 2816;
	volatile uint8_t x686 = 92U;
	static volatile uint8_t x688 = 47U;
	volatile int32_t t76 = -7814;

	t76 = (x685&(x686%(x687<x688)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x689 = UINT8_MAX;
	volatile int8_t x691 = -1;
	uint8_t x692 = UINT8_MAX;

	t77 = (x689&(x690%(x691<x692)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x693 = 11162U;
	uint8_t x694 = UINT8_MAX;
	int32_t x696 = INT32_MIN;
	int32_t t78 = 263398;

	t78 = (x693&(x694%(x695<x696)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x698 = 19244LL;
	uint8_t x700 = UINT8_MAX;
	int64_t t79 = 1569142LL;

	t79 = (x697&(x698%(x699<x700)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x709 = UINT64_MAX;
	int8_t x710 = INT8_MAX;
	static int32_t x711 = INT32_MIN;
	static uint8_t x712 = 53U;
	static volatile uint64_t t80 = 3291980661LLU;

	t80 = (x709&(x710%(x711<x712)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x737 = INT64_MIN;
	int8_t x738 = INT8_MIN;
	int64_t x739 = -19LL;
	int64_t x740 = 425LL;
	int64_t t81 = 166484921200LL;

	t81 = (x737&(x738%(x739<x740)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x749 = -16488340;
	volatile int64_t x751 = INT64_MIN;
	uint32_t x752 = 83398745U;
	volatile int32_t t82 = 0;

	t82 = (x749&(x750%(x751<x752)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x753 = INT16_MAX;
	static volatile int8_t x755 = INT8_MAX;
	static uint32_t x756 = 945523653U;
	volatile int32_t t83 = -7;

	t83 = (x753&(x754%(x755<x756)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x781 = INT64_MIN;
	volatile uint16_t x783 = UINT16_MAX;
	static int64_t x784 = 357563731LL;

	t84 = (x781&(x782%(x783<x784)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x789 = -1;
	int8_t x790 = -4;
	int16_t x792 = INT16_MIN;

	t85 = (x789&(x790%(x791<x792)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x793 = INT8_MIN;
	static volatile int32_t x794 = INT32_MIN;
	volatile int8_t x795 = 3;
	static uint8_t x796 = 99U;

	t86 = (x793&(x794%(x795<x796)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x806 = INT8_MAX;
	static uint32_t x807 = 2745U;
	int64_t t87 = 80LL;

	t87 = (x805&(x806%(x807<x808)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x809 = INT64_MIN;
	int64_t x811 = -1LL;
	volatile uint8_t x812 = 109U;
	static volatile int64_t t88 = -23616927471746350LL;

	t88 = (x809&(x810%(x811<x812)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x813 = 89283LLU;
	static volatile int32_t x814 = -1;
	static int64_t x815 = -1LL;
	uint32_t x816 = 220285U;
	static uint64_t t89 = 672421654LLU;

	t89 = (x813&(x814%(x815<x816)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x818 = INT32_MAX;
	volatile int8_t x819 = INT8_MAX;
	uint16_t x820 = 1061U;
	int32_t t90 = 1832;

	t90 = (x817&(x818%(x819<x820)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x825 = -47;
	uint32_t x826 = UINT32_MAX;
	static uint32_t t91 = 51U;

	t91 = (x825&(x826%(x827<x828)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x833 = UINT16_MAX;
	volatile int8_t x834 = INT8_MAX;
	int32_t x835 = -75337;
	volatile uint16_t x836 = 21U;
	int32_t t92 = -9916725;

	t92 = (x833&(x834%(x835<x836)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x837 = -1LL;
	uint16_t x839 = 0U;
	uint64_t x840 = 5210534645579822LLU;
	volatile int64_t t93 = 220953005385637930LL;

	t93 = (x837&(x838%(x839<x840)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x841 = INT32_MAX;
	int32_t x842 = -1;
	int16_t x843 = -2;
	int32_t x844 = INT32_MAX;
	volatile int32_t t94 = -95;

	t94 = (x841&(x842%(x843<x844)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x845 = 13889;
	volatile int64_t x847 = -1LL;
	static volatile int16_t x848 = INT16_MAX;
	volatile int32_t t95 = 13630198;

	t95 = (x845&(x846%(x847<x848)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x849 = INT8_MIN;
	volatile int32_t x850 = INT32_MIN;
	volatile uint16_t x852 = 39U;
	static volatile int32_t t96 = -8;

	t96 = (x849&(x850%(x851<x852)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x857 = -1;
	int32_t x858 = INT32_MAX;
	int8_t x859 = -1;
	int32_t x860 = 466078828;
	volatile int32_t t97 = -145839;

	t97 = (x857&(x858%(x859<x860)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x866 = 122U;
	int64_t x867 = 0LL;
	uint64_t x868 = 10079053200901708LLU;
	volatile int32_t t98 = 758171;

	t98 = (x865&(x866%(x867<x868)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x877 = 13;
	int64_t x879 = -5486488383LL;
	int16_t x880 = INT16_MAX;
	uint32_t t99 = 1669U;

	t99 = (x877&(x878%(x879<x880)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

