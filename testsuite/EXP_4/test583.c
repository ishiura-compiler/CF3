#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = INT64_MIN;
int8_t x54 = 2;
int16_t x74 = INT16_MAX;
uint64_t x75 = 2841927061540126LLU;
volatile int32_t t5 = 75114;
volatile uint32_t x81 = 1101653727U;
int8_t x85 = -1;
static int8_t x87 = INT8_MAX;
int8_t x88 = INT8_MIN;
volatile uint64_t t7 = 36621056349300292LLU;
volatile uint64_t x177 = 11LLU;
uint32_t t11 = 2U;
static volatile int16_t x256 = INT16_MIN;
static int32_t x259 = -1;
uint8_t x270 = UINT8_MAX;
volatile int32_t x272 = INT32_MIN;
int32_t x293 = -7839;
static uint8_t x294 = 48U;
static volatile int64_t x337 = INT64_MIN;
int16_t x345 = -1;
int8_t x348 = INT8_MIN;
volatile uint64_t x370 = UINT64_MAX;
int64_t x372 = INT64_MIN;
uint8_t x406 = UINT8_MAX;
static int16_t x413 = INT16_MIN;
uint8_t x416 = 67U;
static uint64_t t25 = 867670LLU;
static int16_t x417 = -1;
int16_t x421 = -213;
volatile int16_t x423 = 15;
volatile int32_t t27 = 9424509;
volatile uint32_t t29 = 6151514U;
static int8_t x452 = -1;
static uint64_t t31 = 2LLU;
int32_t x466 = 600;
uint64_t x467 = UINT64_MAX;
int64_t x473 = 1091450810420993619LL;
volatile int16_t x476 = -467;
static int8_t x517 = -50;
static int64_t x518 = INT64_MAX;
int64_t x519 = -1LL;
static uint8_t x543 = 1U;
uint32_t x546 = 21865U;
int16_t x547 = -1;
uint16_t x641 = 3839U;
uint16_t x643 = UINT16_MAX;
uint64_t x644 = 8249559823210508LLU;
static int64_t t42 = 101662339LL;
int32_t x647 = -1;
int32_t x653 = INT32_MIN;
int8_t x656 = INT8_MIN;
int32_t x681 = INT32_MIN;
volatile uint32_t x682 = 510805U;
static int8_t x683 = -5;
int64_t x688 = INT64_MIN;
int16_t x727 = 3;
int64_t x737 = INT64_MIN;
uint8_t x738 = 6U;
uint32_t t51 = 2263U;
static uint32_t x784 = UINT32_MAX;
static uint32_t x789 = 2U;
int8_t x793 = 23;
int8_t x799 = -1;
int32_t x803 = INT32_MIN;
int64_t x808 = INT64_MIN;
volatile int16_t x812 = INT16_MIN;
int64_t x837 = INT64_MAX;
uint8_t x877 = UINT8_MAX;
static uint32_t x931 = 50041U;
uint8_t x938 = 0U;
int64_t x940 = INT64_MIN;
int16_t x985 = INT16_MIN;
uint16_t x988 = UINT16_MAX;
int32_t t69 = -1926562;
uint64_t x994 = 38877LLU;
int32_t x996 = INT32_MAX;
uint32_t x1018 = UINT32_MAX;
uint32_t x1027 = 323083537U;
volatile uint8_t x1101 = 6U;
static uint16_t x1110 = 26U;
int16_t x1112 = INT16_MAX;
int64_t x1160 = INT64_MAX;
int16_t x1180 = INT16_MAX;
static int8_t x1185 = 0;
uint32_t t85 = 8266172U;
static int8_t x1218 = INT8_MAX;
static int32_t x1220 = -225;
int64_t x1233 = -1LL;
int8_t x1264 = INT8_MIN;
volatile int8_t x1275 = -1;
uint8_t x1278 = UINT8_MAX;
static int32_t t91 = 14;
static volatile int32_t x1286 = 91676;
uint64_t x1302 = 52949366LLU;
uint64_t x1332 = 21722254643599LLU;
int16_t x1348 = 15871;


void f0(void) {
	volatile uint16_t x9 = 28519U;
	uint32_t x10 = 12U;
	int8_t x11 = -1;
	volatile uint32_t t0 = 124U;

	t0 = (x9&(x10<<(x11/x12)));

	if (t0 != 4U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = UINT32_MAX;
	static uint64_t x14 = 1692534837969LLU;
	static volatile int64_t x15 = -1LL;
	int32_t x16 = -1;
	volatile uint64_t t1 = 33210074567LLU;

	t1 = (x13&(x14<<(x15/x16)));

	if (t1 != 635446690LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x37 = INT16_MIN;
	volatile uint16_t x38 = 8094U;
	volatile int64_t x39 = -1LL;
	int16_t x40 = 3;
	volatile int32_t t2 = -5126598;

	t2 = (x37&(x38<<(x39/x40)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x49 = 2912083909343LLU;
	uint32_t x50 = 512120U;
	uint32_t x51 = UINT32_MAX;
	int8_t x52 = -1;
	static uint64_t t3 = 334026903890LLU;

	t3 = (x49&(x50<<(x51/x52)));

	if (t3 != 655568LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x53 = 442;
	int32_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;
	static int32_t t4 = 11887;

	t4 = (x53&(x54<<(x55/x56)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x73 = -1;
	int16_t x76 = -2183;

	t5 = (x73&(x74<<(x75/x76)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x82 = 95U;
	volatile int8_t x83 = INT8_MAX;
	volatile uint64_t x84 = 773466823LLU;
	uint32_t t6 = 178280U;

	t6 = (x81&(x82<<(x83/x84)));

	if (t6 != 95U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x86 = 22741653446LLU;

	t7 = (x85&(x86<<(x87/x88)));

	if (t7 != 22741653446LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x93 = INT32_MIN;
	static uint8_t x94 = 16U;
	uint8_t x95 = UINT8_MAX;
	uint32_t x96 = 197476908U;
	volatile int32_t t8 = -1;

	t8 = (x93&(x94<<(x95/x96)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x178 = 21LL;
	static int16_t x179 = -1;
	int8_t x180 = -17;
	static uint64_t t9 = 1989324761412236LLU;

	t9 = (x177&(x178<<(x179/x180)));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x193 = 0;
	uint64_t x194 = 34737529688705262LLU;
	volatile uint8_t x195 = UINT8_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint64_t t10 = 444256699085937554LLU;

	t10 = (x193&(x194<<(x195/x196)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x201 = -1;
	volatile uint32_t x202 = 529U;
	uint16_t x203 = UINT16_MAX;
	volatile uint16_t x204 = 2777U;

	t11 = (x201&(x202<<(x203/x204)));

	if (t11 != 142606336U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x217 = 1548933;
	static int16_t x218 = 0;
	volatile int8_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t12 = 6616261;

	t12 = (x217&(x218<<(x219/x220)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x253 = -894676698;
	volatile int64_t x254 = 347LL;
	int8_t x255 = 1;
	volatile int64_t t13 = -1745152087093332470LL;

	t13 = (x253&(x254<<(x255/x256)));

	if (t13 != 258LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = 18209387;
	uint32_t x260 = UINT32_MAX;
	static int32_t t14 = -26;

	t14 = (x257&(x258<<(x259/x260)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x269 = UINT8_MAX;
	static int32_t x271 = -1;
	volatile int32_t t15 = 1214;

	t15 = (x269&(x270<<(x271/x272)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	volatile int32_t t16 = -31305;

	t16 = (x293&(x294<<(x295/x296)));

	if (t16 != 32) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x301 = INT64_MIN;
	int16_t x302 = 1;
	int8_t x303 = -1;
	int16_t x304 = INT16_MIN;
	int64_t t17 = 207500338930310LL;

	t17 = (x301&(x302<<(x303/x304)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x305 = INT8_MAX;
	static int32_t x306 = INT32_MAX;
	int16_t x307 = 9166;
	int16_t x308 = INT16_MIN;
	int32_t t18 = 67;

	t18 = (x305&(x306<<(x307/x308)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x325 = -1;
	int8_t x326 = INT8_MAX;
	static int8_t x327 = -1;
	volatile int64_t x328 = 1282148549LL;
	int32_t t19 = 6934;

	t19 = (x325&(x326<<(x327/x328)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x338 = 3U;
	static uint64_t x339 = 1331LLU;
	int32_t x340 = 253570;
	int64_t t20 = -3LL;

	t20 = (x337&(x338<<(x339/x340)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x346 = 1723298487U;
	volatile uint64_t x347 = UINT64_MAX;
	uint32_t t21 = 31519843U;

	t21 = (x345&(x346<<(x347/x348)));

	if (t21 != 3446596974U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x369 = 6270659676LLU;
	int8_t x371 = 5;
	volatile uint64_t t22 = 89LLU;

	t22 = (x369&(x370<<(x371/x372)));

	if (t22 != 6270659676LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x393 = -52;
	volatile uint8_t x394 = 24U;
	uint16_t x395 = 1U;
	int32_t x396 = INT32_MAX;
	volatile int32_t t23 = 1;

	t23 = (x393&(x394<<(x395/x396)));

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x405 = UINT8_MAX;
	uint64_t x407 = UINT64_MAX;
	static int32_t x408 = -1;
	int32_t t24 = -50395;

	t24 = (x405&(x406<<(x407/x408)));

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x414 = UINT64_MAX;
	int16_t x415 = -1;

	t25 = (x413&(x414<<(x415/x416)));

	if (t25 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x418 = 110U;
	int16_t x419 = 105;
	volatile uint16_t x420 = 1602U;
	volatile uint32_t t26 = 804683U;

	t26 = (x417&(x418<<(x419/x420)));

	if (t26 != 110U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x422 = 0U;
	static int32_t x424 = INT32_MIN;

	t27 = (x421&(x422<<(x423/x424)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x425 = -9553244LL;
	volatile uint32_t x426 = UINT32_MAX;
	volatile int8_t x427 = 31;
	static int32_t x428 = -25010;
	static volatile int64_t t28 = 31LL;

	t28 = (x425&(x426<<(x427/x428)));

	if (t28 != 4285414052LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x433 = 391811U;
	static uint32_t x434 = UINT32_MAX;
	uint16_t x435 = UINT16_MAX;
	static uint32_t x436 = UINT32_MAX;

	t29 = (x433&(x434<<(x435/x436)));

	if (t29 != 391811U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x449 = 415843U;
	uint8_t x450 = 12U;
	int16_t x451 = -14;
	uint32_t t30 = 6019700U;

	t30 = (x449&(x450<<(x451/x452)));

	if (t30 != 131072U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x453 = INT64_MIN;
	uint64_t x454 = 2057605369333LLU;
	static volatile int32_t x455 = -1;
	volatile int8_t x456 = -28;

	t31 = (x453&(x454<<(x455/x456)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x457 = UINT8_MAX;
	uint32_t x458 = 177808U;
	int8_t x459 = INT8_MIN;
	volatile int64_t x460 = 12312118616013939LL;
	volatile uint32_t t32 = 30U;

	t32 = (x457&(x458<<(x459/x460)));

	if (t32 != 144U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x465 = -4150017;
	static int32_t x468 = -516203;
	int32_t t33 = -24477415;

	t33 = (x465&(x466<<(x467/x468)));

	if (t33 != 1200) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x474 = UINT64_MAX;
	uint32_t x475 = 718393U;
	uint64_t t34 = 23905944941189LLU;

	t34 = (x473&(x474<<(x475/x476)));

	if (t34 != 1091450810420993619LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x477 = 136LL;
	uint64_t x478 = 44LLU;
	int8_t x479 = 28;
	uint16_t x480 = 105U;
	static volatile uint64_t t35 = 23858818461LLU;

	t35 = (x477&(x478<<(x479/x480)));

	if (t35 != 8LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x520 = INT8_MIN;
	int64_t t36 = -26986LL;

	t36 = (x517&(x518<<(x519/x520)));

	if (t36 != 9223372036854775758LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x541 = 82U;
	static int16_t x542 = INT16_MAX;
	int32_t x544 = INT32_MIN;
	uint32_t t37 = 7918U;

	t37 = (x541&(x542<<(x543/x544)));

	if (t37 != 82U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x545 = INT16_MAX;
	static int8_t x548 = INT8_MIN;
	uint32_t t38 = 56800437U;

	t38 = (x545&(x546<<(x547/x548)));

	if (t38 != 21865U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x581 = -103;
	int64_t x582 = 74LL;
	int8_t x583 = -1;
	int64_t x584 = INT64_MIN;
	static volatile int64_t t39 = 6650972LL;

	t39 = (x581&(x582<<(x583/x584)));

	if (t39 != 8LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x609 = 1825U;
	uint8_t x610 = 120U;
	int64_t x611 = -1LL;
	int8_t x612 = INT8_MIN;
	int32_t t40 = -1026281707;

	t40 = (x609&(x610<<(x611/x612)));

	if (t40 != 32) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x629 = -1153;
	uint8_t x630 = 3U;
	int8_t x631 = -3;
	int64_t x632 = -1LL;
	int32_t t41 = 449831;

	t41 = (x629&(x630<<(x631/x632)));

	if (t41 != 24) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x642 = 3931760933LL;

	t42 = (x641&(x642<<(x643/x644)));

	if (t42 != 2085LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x645 = INT16_MIN;
	static uint16_t x646 = UINT16_MAX;
	uint16_t x648 = 92U;
	static volatile int32_t t43 = -99;

	t43 = (x645&(x646<<(x647/x648)));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x654 = 3773104795854364094LL;
	static uint32_t x655 = 59212635U;
	volatile int64_t t44 = 14LL;

	t44 = (x653&(x654<<(x655/x656)));

	if (t44 != 3773104795028553728LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x661 = -2;
	volatile uint16_t x662 = 11100U;
	int64_t x663 = -1LL;
	uint64_t x664 = UINT64_MAX;
	int32_t t45 = 0;

	t45 = (x661&(x662<<(x663/x664)));

	if (t45 != 22200) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x684 = -39;
	static uint32_t t46 = 459711U;

	t46 = (x681&(x682<<(x683/x684)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x685 = INT32_MIN;
	volatile uint16_t x686 = 15U;
	static uint32_t x687 = 31U;
	int32_t t47 = -4997;

	t47 = (x685&(x686<<(x687/x688)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x705 = INT32_MIN;
	uint64_t x706 = UINT64_MAX;
	volatile int16_t x707 = INT16_MIN;
	static int16_t x708 = INT16_MIN;
	static volatile uint64_t t48 = 32420110673631760LLU;

	t48 = (x705&(x706<<(x707/x708)));

	if (t48 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x725 = INT8_MAX;
	int8_t x726 = INT8_MAX;
	int32_t x728 = -4866991;
	int32_t t49 = -420196;

	t49 = (x725&(x726<<(x727/x728)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x739 = -1;
	static int8_t x740 = -1;
	int64_t t50 = 16891LL;

	t50 = (x737&(x738<<(x739/x740)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x757 = INT8_MAX;
	static uint32_t x758 = UINT32_MAX;
	uint8_t x759 = UINT8_MAX;
	volatile uint64_t x760 = UINT64_MAX;

	t51 = (x757&(x758<<(x759/x760)));

	if (t51 != 127U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x769 = INT64_MIN;
	int32_t x770 = 178;
	uint16_t x771 = 12139U;
	uint16_t x772 = UINT16_MAX;
	volatile int64_t t52 = 116543796047446504LL;

	t52 = (x769&(x770<<(x771/x772)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x781 = INT8_MIN;
	uint32_t x782 = 0U;
	uint8_t x783 = 13U;
	static uint32_t t53 = 5U;

	t53 = (x781&(x782<<(x783/x784)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x790 = 4U;
	static uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MIN;
	volatile uint32_t t54 = 156167U;

	t54 = (x789&(x790<<(x791/x792)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x794 = 37;
	int8_t x795 = INT8_MIN;
	int32_t x796 = INT32_MIN;
	volatile int32_t t55 = 92;

	t55 = (x793&(x794<<(x795/x796)));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x797 = INT64_MIN;
	uint32_t x798 = 212457U;
	int64_t x800 = INT64_MIN;
	volatile int64_t t56 = 2603183690295460396LL;

	t56 = (x797&(x798<<(x799/x800)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x801 = INT8_MIN;
	uint16_t x802 = UINT16_MAX;
	int64_t x804 = -929982234LL;
	int32_t t57 = -15885692;

	t57 = (x801&(x802<<(x803/x804)));

	if (t57 != 262016) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x805 = 1;
	static uint64_t x806 = 7LLU;
	volatile int32_t x807 = -1;
	volatile uint64_t t58 = 61239127796086LLU;

	t58 = (x805&(x806<<(x807/x808)));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x809 = -1;
	uint32_t x810 = 3U;
	uint64_t x811 = 941LLU;
	static uint32_t t59 = 0U;

	t59 = (x809&(x810<<(x811/x812)));

	if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x829 = UINT16_MAX;
	volatile int64_t x830 = INT64_MAX;
	int8_t x831 = INT8_MIN;
	static int64_t x832 = INT64_MIN;
	int64_t t60 = -28132312817707LL;

	t60 = (x829&(x830<<(x831/x832)));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x838 = UINT8_MAX;
	uint64_t x839 = UINT64_MAX;
	static int32_t x840 = -1;
	static int64_t t61 = -484820LL;

	t61 = (x837&(x838<<(x839/x840)));

	if (t61 != 510LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x845 = 13;
	static uint16_t x846 = 0U;
	static volatile uint8_t x847 = 11U;
	int16_t x848 = INT16_MIN;
	volatile int32_t t62 = 657;

	t62 = (x845&(x846<<(x847/x848)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x857 = -443030496;
	uint16_t x858 = 1U;
	static int16_t x859 = INT16_MAX;
	int64_t x860 = -14517000973638040LL;
	int32_t t63 = 78;

	t63 = (x857&(x858<<(x859/x860)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x878 = 67367U;
	static volatile uint32_t x879 = UINT32_MAX;
	static int32_t x880 = INT32_MIN;
	volatile uint32_t t64 = 758841401U;

	t64 = (x877&(x878<<(x879/x880)));

	if (t64 != 78U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x905 = INT8_MIN;
	uint64_t x906 = 24361LLU;
	int16_t x907 = -1;
	static int16_t x908 = INT16_MIN;
	static uint64_t t65 = 19922149046LLU;

	t65 = (x905&(x906<<(x907/x908)));

	if (t65 != 24320LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x917 = 95697225326LLU;
	volatile int16_t x918 = INT16_MAX;
	uint8_t x919 = 3U;
	static int64_t x920 = INT64_MIN;
	volatile uint64_t t66 = 1248678317177048LLU;

	t66 = (x917&(x918<<(x919/x920)));

	if (t66 != 18030LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x929 = 2U;
	volatile int32_t x930 = INT32_MAX;
	uint32_t x932 = UINT32_MAX;
	int32_t t67 = 114347;

	t67 = (x929&(x930<<(x931/x932)));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x937 = INT64_MIN;
	uint64_t x939 = UINT64_MAX;
	int64_t t68 = 2937226156438451477LL;

	t68 = (x937&(x938<<(x939/x940)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x986 = 2389U;
	uint32_t x987 = 68459U;

	t69 = (x985&(x986<<(x987/x988)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x989 = 2484U;
	volatile uint16_t x990 = UINT16_MAX;
	int16_t x991 = -799;
	uint64_t x992 = UINT64_MAX;
	static int32_t t70 = -2092;

	t70 = (x989&(x990<<(x991/x992)));

	if (t70 != 2484) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x993 = INT32_MAX;
	int32_t x995 = -1;
	volatile uint64_t t71 = 11940LLU;

	t71 = (x993&(x994<<(x995/x996)));

	if (t71 != 38877LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x997 = -2516;
	int64_t x998 = 133918888LL;
	volatile uint16_t x999 = 0U;
	int64_t x1000 = -1LL;
	volatile int64_t t72 = -51272LL;

	t72 = (x997&(x998<<(x999/x1000)));

	if (t72 != 133918760LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x1017 = -5;
	int32_t x1019 = -1;
	int64_t x1020 = INT64_MIN;
	uint32_t t73 = 215216U;

	t73 = (x1017&(x1018<<(x1019/x1020)));

	if (t73 != 4294967291U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x1025 = 7U;
	static uint16_t x1026 = 12U;
	uint32_t x1028 = UINT32_MAX;
	int32_t t74 = 921804;

	t74 = (x1025&(x1026<<(x1027/x1028)));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1041 = 4U;
	uint16_t x1042 = 30U;
	uint32_t x1043 = 1839U;
	int8_t x1044 = INT8_MIN;
	int32_t t75 = 15;

	t75 = (x1041&(x1042<<(x1043/x1044)));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x1097 = -1;
	volatile uint8_t x1098 = 121U;
	uint32_t x1099 = 2U;
	uint64_t x1100 = UINT64_MAX;
	volatile int32_t t76 = -871;

	t76 = (x1097&(x1098<<(x1099/x1100)));

	if (t76 != 121) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1102 = 10U;
	int8_t x1103 = INT8_MIN;
	int32_t x1104 = -665;
	static int32_t t77 = -1317;

	t77 = (x1101&(x1102<<(x1103/x1104)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x1105 = -1;
	int32_t x1106 = 357;
	int16_t x1107 = INT16_MIN;
	int16_t x1108 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (x1105&(x1106<<(x1107/x1108)));

	if (t78 != 714) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1109 = INT8_MIN;
	int8_t x1111 = INT8_MIN;
	int32_t t79 = -3646289;

	t79 = (x1109&(x1110<<(x1111/x1112)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x1121 = UINT32_MAX;
	uint64_t x1122 = 14060644182LLU;
	static volatile int8_t x1123 = -52;
	volatile int16_t x1124 = -1;
	uint64_t t80 = 724601186LLU;

	t80 = (x1121&(x1122<<(x1123/x1124)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1157 = INT32_MIN;
	uint32_t x1158 = 0U;
	static int64_t x1159 = -1LL;
	uint32_t t81 = 3U;

	t81 = (x1157&(x1158<<(x1159/x1160)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x1173 = -4964010;
	uint32_t x1174 = 28948U;
	int64_t x1175 = INT64_MAX;
	static volatile int64_t x1176 = INT64_MIN;
	volatile uint32_t t82 = 1448385U;

	t82 = (x1173&(x1174<<(x1175/x1176)));

	if (t82 != 16660U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1177 = INT32_MIN;
	uint8_t x1178 = 15U;
	uint16_t x1179 = UINT16_MAX;
	int32_t t83 = -1124717;

	t83 = (x1177&(x1178<<(x1179/x1180)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1186 = 5U;
	uint64_t x1187 = 1LLU;
	uint8_t x1188 = UINT8_MAX;
	int32_t t84 = 29;

	t84 = (x1185&(x1186<<(x1187/x1188)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1209 = INT32_MIN;
	volatile uint32_t x1210 = 5452605U;
	int8_t x1211 = -1;
	volatile uint8_t x1212 = UINT8_MAX;

	t85 = (x1209&(x1210<<(x1211/x1212)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1217 = 2U;
	uint32_t x1219 = 21U;
	volatile int32_t t86 = -124;

	t86 = (x1217&(x1218<<(x1219/x1220)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1234 = 228152U;
	int16_t x1235 = INT16_MIN;
	volatile int64_t x1236 = 45696199724943240LL;
	static int64_t t87 = -393838404492751684LL;

	t87 = (x1233&(x1234<<(x1235/x1236)));

	if (t87 != 228152LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1245 = INT8_MAX;
	int64_t x1246 = INT64_MAX;
	uint32_t x1247 = UINT32_MAX;
	int64_t x1248 = INT64_MAX;
	static int64_t t88 = -4442528515596964LL;

	t88 = (x1245&(x1246<<(x1247/x1248)));

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1261 = -6811;
	uint64_t x1262 = UINT64_MAX;
	static uint32_t x1263 = 45350U;
	uint64_t t89 = 2129385766086445832LLU;

	t89 = (x1261&(x1262<<(x1263/x1264)));

	if (t89 != 18446744073709544805LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1273 = 17U;
	static int8_t x1274 = 0;
	volatile int8_t x1276 = INT8_MAX;
	static volatile int32_t t90 = 81;

	t90 = (x1273&(x1274<<(x1275/x1276)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1277 = INT32_MAX;
	int64_t x1279 = -1LL;
	volatile int16_t x1280 = -1;

	t91 = (x1277&(x1278<<(x1279/x1280)));

	if (t91 != 510) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1285 = UINT32_MAX;
	volatile int8_t x1287 = -1;
	int32_t x1288 = INT32_MIN;
	uint32_t t92 = 15139U;

	t92 = (x1285&(x1286<<(x1287/x1288)));

	if (t92 != 91676U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x1301 = 5802057U;
	static int16_t x1303 = 7412;
	static uint16_t x1304 = 821U;
	static uint64_t t93 = 33496120LLU;

	t93 = (x1301&(x1302<<(x1303/x1304)));

	if (t93 != 4229120LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1305 = 405455U;
	uint64_t x1306 = 107194218LLU;
	int16_t x1307 = INT16_MAX;
	uint32_t x1308 = 119604848U;
	uint64_t t94 = 13LLU;

	t94 = (x1305&(x1306<<(x1307/x1308)));

	if (t94 != 141130LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x1313 = -1;
	static uint16_t x1314 = 6U;
	volatile int16_t x1315 = INT16_MIN;
	int16_t x1316 = INT16_MIN;
	volatile int32_t t95 = 509804;

	t95 = (x1313&(x1314<<(x1315/x1316)));

	if (t95 != 12) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1329 = INT64_MIN;
	uint32_t x1330 = 44165970U;
	uint16_t x1331 = 216U;
	int64_t t96 = -9LL;

	t96 = (x1329&(x1330<<(x1331/x1332)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1341 = -3721802644573449LL;
	int64_t x1342 = INT64_MAX;
	static int64_t x1343 = 81368895379LL;
	static uint64_t x1344 = 2981876423930128965LLU;
	volatile int64_t t97 = 134481321490LL;

	t97 = (x1341&(x1342<<(x1343/x1344)));

	if (t97 != 9219650234210202359LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x1345 = -1;
	static int16_t x1346 = 168;
	int32_t x1347 = -1;
	int32_t t98 = 29237;

	t98 = (x1345&(x1346<<(x1347/x1348)));

	if (t98 != 168) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x1349 = INT8_MIN;
	uint8_t x1350 = 7U;
	static volatile int64_t x1351 = -6359380942LL;
	int64_t x1352 = INT64_MAX;
	volatile int32_t t99 = -889989651;

	t99 = (x1349&(x1350<<(x1351/x1352)));

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

