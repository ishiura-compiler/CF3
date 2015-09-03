#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 53709U;
int16_t x57 = INT16_MIN;
int64_t x60 = INT64_MAX;
static volatile int64_t x137 = INT64_MAX;
int8_t x352 = 56;
uint32_t x362 = 2333910U;
uint16_t x363 = 7U;
int32_t x386 = INT32_MAX;
uint16_t x518 = 7568U;
volatile uint16_t x614 = 166U;
static int8_t x615 = 0;
uint16_t x989 = UINT16_MAX;
int32_t x992 = INT32_MIN;
volatile int64_t x1065 = INT64_MIN;
uint64_t x1072 = 25LLU;
uint32_t x1298 = 184468707U;
volatile uint32_t x1300 = 81469U;
static volatile uint32_t t23 = 3914U;
uint32_t x1326 = UINT32_MAX;
volatile int32_t x1357 = 18279792;
static volatile int8_t x1377 = -48;
static int8_t x1502 = INT8_MAX;
static uint8_t x1767 = 3U;
int16_t x1830 = INT16_MAX;
volatile uint64_t t29 = 3484181554LLU;
int64_t x1842 = 119413671LL;
uint16_t x1843 = 2U;
uint64_t x1933 = 2263923241784572975LLU;
int16_t x1934 = 119;
uint64_t t31 = 1528528237LLU;
int32_t t33 = 303292;
uint8_t x2239 = 0U;
uint64_t x2352 = UINT64_MAX;
volatile uint64_t t36 = 5505170121557441LLU;
uint32_t x2462 = 3191U;
int16_t x2744 = INT16_MIN;
volatile int32_t t40 = -2233;
volatile uint8_t x2803 = 0U;
uint64_t x2809 = 434424355917711006LLU;
static uint16_t x2811 = 2U;
static uint16_t x2812 = 13110U;
uint64_t t42 = 16998LLU;
uint64_t x3114 = 57384104LLU;
volatile uint64_t t43 = 2LLU;
static uint16_t x3130 = UINT16_MAX;
volatile uint16_t x3139 = 0U;
static volatile uint64_t t46 = 2LLU;
volatile uint64_t t50 = 7685171685184402LLU;
uint64_t x3721 = 622LLU;
uint16_t x3912 = 2963U;
static uint32_t t53 = 1009456U;
static int32_t x3920 = INT32_MIN;
volatile int32_t t54 = 23721;
static uint16_t x3959 = 1U;
int16_t x4015 = 21;
int8_t x4351 = 1;
static volatile uint32_t t59 = 2996029U;
volatile uint8_t x4535 = 0U;
uint16_t x4567 = 1U;
static int32_t x4573 = -550;
static int64_t x4574 = 15717613569734401LL;
volatile uint8_t x4575 = 11U;
static volatile uint64_t t67 = 0LLU;
static int8_t x4781 = INT8_MIN;
uint64_t t69 = 1891199LLU;
int64_t x4970 = INT64_MAX;
static uint8_t x4971 = 20U;
static volatile int64_t x5029 = -1LL;
int16_t x5032 = 5848;
volatile uint16_t x5186 = UINT16_MAX;
uint16_t x5242 = 3012U;
int32_t x5256 = INT32_MAX;
uint32_t x5284 = 30U;
static int16_t x5390 = 73;
int16_t x5392 = INT16_MAX;
static int64_t x5430 = INT64_MAX;
volatile int64_t t79 = -1LL;
static int32_t x5661 = INT32_MIN;
uint64_t x5663 = 12LLU;
static uint64_t x5826 = UINT64_MAX;
static volatile uint32_t t83 = 14343971U;
uint8_t x6015 = 0U;
uint64_t t84 = 15198940296911843LLU;
static volatile uint8_t x6087 = 3U;
int16_t x6088 = INT16_MIN;
uint16_t x6107 = 2U;
uint16_t x6307 = 0U;
volatile int8_t x6359 = 1;
volatile int8_t x6401 = 0;
uint32_t x6402 = 247067133U;
static int64_t x6541 = -1LL;
volatile int32_t t93 = 476428;
volatile uint32_t x6625 = 109U;
volatile int64_t t96 = 94402338573702LL;
int64_t x6729 = INT64_MIN;
int32_t x6886 = INT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MAX;
	uint8_t x3 = 13U;
	int64_t t0 = 8LL;

	t0 = ((x1/(x2>>x3))&x4);

	if (t0 != 53248LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x29 = 5U;
	uint32_t x30 = 14834812U;
	uint8_t x31 = 0U;
	uint16_t x32 = UINT16_MAX;
	volatile uint32_t t1 = 1U;

	t1 = ((x29/(x30>>x31))&x32);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x58 = 9777U;
	uint8_t x59 = 8U;
	int64_t t2 = -78744548LL;

	t2 = ((x57/(x58>>x59))&x60);

	if (t2 != 9223372036854774946LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x93 = -4389;
	uint32_t x94 = 3948231U;
	uint8_t x95 = 3U;
	int64_t x96 = -1LL;
	int64_t t3 = -37747239746235LL;

	t3 = ((x93/(x94>>x95))&x96);

	if (t3 != 8702LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x138 = 215LLU;
	volatile uint16_t x139 = 5U;
	int16_t x140 = -1;
	uint64_t t4 = 203638034332LLU;

	t4 = ((x137/(x138>>x139))&x140);

	if (t4 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x189 = INT16_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	uint32_t x191 = 2U;
	int64_t x192 = INT64_MIN;
	int64_t t5 = 3828679144092635857LL;

	t5 = ((x189/(x190>>x191))&x192);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x349 = INT32_MIN;
	uint32_t x350 = 183352498U;
	uint64_t x351 = 3LLU;
	volatile uint32_t t6 = 5842808U;

	t6 = ((x349/(x350>>x351))&x352);

	if (t6 != 24U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x361 = 7U;
	int32_t x364 = INT32_MIN;
	uint32_t t7 = 1420207U;

	t7 = ((x361/(x362>>x363))&x364);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x385 = 1;
	int8_t x387 = 0;
	static volatile uint8_t x388 = UINT8_MAX;
	static volatile int32_t t8 = -25193;

	t8 = ((x385/(x386>>x387))&x388);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x473 = -1;
	static uint8_t x474 = UINT8_MAX;
	int64_t x475 = 1LL;
	int64_t x476 = -1LL;
	static int64_t t9 = 3636516085216515390LL;

	t9 = ((x473/(x474>>x475))&x476);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x517 = INT8_MAX;
	static uint8_t x519 = 1U;
	uint64_t x520 = 495LLU;
	volatile uint64_t t10 = 15065831LLU;

	t10 = ((x517/(x518>>x519))&x520);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x533 = INT32_MAX;
	int32_t x534 = INT32_MAX;
	uint32_t x535 = 3U;
	static volatile int8_t x536 = INT8_MIN;
	volatile int32_t t11 = 7668;

	t11 = ((x533/(x534>>x535))&x536);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x613 = INT8_MIN;
	volatile uint16_t x616 = UINT16_MAX;
	volatile int32_t t12 = 10822;

	t12 = ((x613/(x614>>x615))&x616);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x793 = 11182U;
	uint64_t x794 = UINT64_MAX;
	static int32_t x795 = 14;
	int8_t x796 = INT8_MIN;
	volatile uint64_t t13 = 26409898425068LLU;

	t13 = ((x793/(x794>>x795))&x796);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x901 = 246U;
	static int16_t x902 = INT16_MAX;
	volatile uint8_t x903 = 5U;
	uint8_t x904 = UINT8_MAX;
	int32_t t14 = 257288271;

	t14 = ((x901/(x902>>x903))&x904);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x965 = -1813;
	static volatile int32_t x966 = 1117700;
	uint8_t x967 = 3U;
	volatile int32_t x968 = INT32_MIN;
	volatile int32_t t15 = -597534184;

	t15 = ((x965/(x966>>x967))&x968);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x990 = 16U;
	uint16_t x991 = 0U;
	static volatile int32_t t16 = -1436694;

	t16 = ((x989/(x990>>x991))&x992);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1066 = 18246499071676783LLU;
	uint8_t x1067 = 41U;
	int16_t x1068 = 4;
	volatile uint64_t t17 = 3298506040LLU;

	t17 = ((x1065/(x1066>>x1067))&x1068);

	if (t17 != 4LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1069 = 0;
	static int64_t x1070 = 26316937966891LL;
	uint16_t x1071 = 1U;
	uint64_t t18 = 3LLU;

	t18 = ((x1069/(x1070>>x1071))&x1072);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1197 = INT64_MIN;
	int16_t x1198 = 6925;
	static uint16_t x1199 = 0U;
	static uint16_t x1200 = UINT16_MAX;
	int64_t t19 = 23256533234181170LL;

	t19 = ((x1197/(x1198>>x1199))&x1200);

	if (t19 != 26234LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1201 = UINT64_MAX;
	static uint32_t x1202 = UINT32_MAX;
	int16_t x1203 = 7;
	volatile int64_t x1204 = INT64_MIN;
	static uint64_t t20 = 159LLU;

	t20 = ((x1201/(x1202>>x1203))&x1204);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1221 = INT32_MIN;
	static uint32_t x1222 = 2340U;
	uint8_t x1223 = 3U;
	static uint16_t x1224 = UINT16_MAX;
	volatile uint32_t t21 = 208742431U;

	t21 = ((x1221/(x1222>>x1223))&x1224);

	if (t21 != 14364U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1293 = 53372354452LLU;
	static int64_t x1294 = 2233210099985313LL;
	volatile int8_t x1295 = 1;
	int8_t x1296 = -33;
	volatile uint64_t t22 = 1020270811959272LLU;

	t22 = ((x1293/(x1294>>x1295))&x1296);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1297 = INT8_MIN;
	uint16_t x1299 = 7U;

	t23 = ((x1297/(x1298>>x1299))&x1300);

	if (t23 != 2596U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1325 = 1;
	int8_t x1327 = 3;
	int64_t x1328 = INT64_MIN;
	volatile int64_t t24 = 0LL;

	t24 = ((x1325/(x1326>>x1327))&x1328);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1358 = INT64_MAX;
	int8_t x1359 = 1;
	int16_t x1360 = 30;
	int64_t t25 = -173477142030744820LL;

	t25 = ((x1357/(x1358>>x1359))&x1360);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1378 = INT16_MAX;
	int8_t x1379 = 0;
	int8_t x1380 = -1;
	int32_t t26 = -1;

	t26 = ((x1377/(x1378>>x1379))&x1380);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1501 = 118U;
	int16_t x1503 = 6;
	uint32_t x1504 = 1875657U;
	volatile uint32_t t27 = 51980U;

	t27 = ((x1501/(x1502>>x1503))&x1504);

	if (t27 != 64U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1765 = -1LL;
	int16_t x1766 = 7111;
	int64_t x1768 = INT64_MAX;
	volatile int64_t t28 = 1LL;

	t28 = ((x1765/(x1766>>x1767))&x1768);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1829 = 2872177LLU;
	int32_t x1831 = 0;
	uint16_t x1832 = 14988U;

	t29 = ((x1829/(x1830>>x1831))&x1832);

	if (t29 != 4LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1841 = 1;
	int32_t x1844 = INT32_MIN;
	int64_t t30 = 0LL;

	t30 = ((x1841/(x1842>>x1843))&x1844);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1935 = 2;
	volatile int32_t x1936 = INT32_MIN;

	t31 = ((x1933/(x1934>>x1935))&x1936);

	if (t31 != 78066317709541376LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x2033 = -5998264LL;
	uint64_t x2034 = 143251LLU;
	uint8_t x2035 = 2U;
	int16_t x2036 = INT16_MAX;
	volatile uint64_t t32 = 118025886944763904LLU;

	t32 = ((x2033/(x2034>>x2035))&x2036);

	if (t32 != 27234LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2221 = 3068U;
	int16_t x2222 = INT16_MAX;
	int16_t x2223 = 2;
	int32_t x2224 = 206;

	t33 = ((x2221/(x2222>>x2223))&x2224);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2237 = 3U;
	static uint64_t x2238 = UINT64_MAX;
	static int64_t x2240 = INT64_MIN;
	uint64_t t34 = 6780LLU;

	t34 = ((x2237/(x2238>>x2239))&x2240);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x2325 = UINT8_MAX;
	uint8_t x2326 = 2U;
	static uint64_t x2327 = 1LLU;
	int8_t x2328 = 2;
	volatile int32_t t35 = 1196498;

	t35 = ((x2325/(x2326>>x2327))&x2328);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2349 = -5;
	uint64_t x2350 = 33446906205851LLU;
	volatile int64_t x2351 = 1LL;

	t36 = ((x2349/(x2350>>x2351))&x2352);

	if (t36 != 1103046LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2461 = -1;
	uint8_t x2463 = 1U;
	int8_t x2464 = INT8_MAX;
	uint32_t t37 = 1907619U;

	t37 = ((x2461/(x2462>>x2463))&x2464);

	if (t37 != 33U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2489 = -10667699;
	uint8_t x2490 = UINT8_MAX;
	int8_t x2491 = 3;
	int64_t x2492 = INT64_MAX;
	volatile int64_t t38 = -736930619104736834LL;

	t38 = ((x2489/(x2490>>x2491))&x2492);

	if (t38 != 9223372036854431689LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2713 = 219620718269914296LL;
	volatile uint32_t x2714 = 82242807U;
	int32_t x2715 = 1;
	volatile int64_t x2716 = -27651947LL;
	int64_t t39 = 39770497916032963LL;

	t39 = ((x2713/(x2714>>x2715))&x2716);

	if (t39 != 5340401669LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2741 = INT16_MIN;
	int32_t x2742 = 305979;
	uint64_t x2743 = 0LLU;

	t40 = ((x2741/(x2742>>x2743))&x2744);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2801 = 1U;
	static volatile int32_t x2802 = INT32_MAX;
	int32_t x2804 = INT32_MIN;
	static volatile int32_t t41 = -471072849;

	t41 = ((x2801/(x2802>>x2803))&x2804);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2810 = 923042U;

	t42 = ((x2809/(x2810>>x2811))&x2812);

	if (t42 != 806LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3113 = UINT8_MAX;
	int8_t x3115 = 9;
	int8_t x3116 = INT8_MIN;

	t43 = ((x3113/(x3114>>x3115))&x3116);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3129 = 135612213178626LLU;
	int16_t x3131 = 2;
	uint8_t x3132 = 14U;
	volatile uint64_t t44 = 1959338395614721774LLU;

	t44 = ((x3129/(x3130>>x3131))&x3132);

	if (t44 != 6LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x3137 = UINT32_MAX;
	int32_t x3138 = 1;
	int64_t x3140 = INT64_MAX;
	int64_t t45 = -796539510842LL;

	t45 = ((x3137/(x3138>>x3139))&x3140);

	if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3193 = INT16_MAX;
	uint64_t x3194 = 62664LLU;
	uint16_t x3195 = 1U;
	volatile int8_t x3196 = INT8_MIN;

	t46 = ((x3193/(x3194>>x3195))&x3196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3237 = INT8_MAX;
	static int16_t x3238 = INT16_MAX;
	static uint32_t x3239 = 0U;
	static int64_t x3240 = -1LL;
	volatile int64_t t47 = -3LL;

	t47 = ((x3237/(x3238>>x3239))&x3240);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3405 = INT64_MIN;
	int64_t x3406 = INT64_MAX;
	uint64_t x3407 = 34LLU;
	int64_t x3408 = 16380795900LL;
	static int64_t t48 = 1902211LL;

	t48 = ((x3405/(x3406>>x3407))&x3408);

	if (t48 != 16380795872LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3465 = 1831705U;
	static volatile uint16_t x3466 = 573U;
	static uint16_t x3467 = 0U;
	int16_t x3468 = 4560;
	static volatile uint32_t t49 = 0U;

	t49 = ((x3465/(x3466>>x3467))&x3468);

	if (t49 != 80U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x3517 = -4100259872862439439LL;
	uint64_t x3518 = UINT64_MAX;
	uint8_t x3519 = 3U;
	static uint32_t x3520 = UINT32_MAX;

	t50 = ((x3517/(x3518>>x3519))&x3520);

	if (t50 != 6LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3633 = INT64_MAX;
	int8_t x3634 = INT8_MAX;
	uint8_t x3635 = 0U;
	static int8_t x3636 = -1;
	int64_t t51 = -307264959LL;

	t51 = ((x3633/(x3634>>x3635))&x3636);

	if (t51 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3722 = INT64_MAX;
	uint8_t x3723 = 31U;
	volatile int32_t x3724 = 65656;
	uint64_t t52 = 4569876574221LLU;

	t52 = ((x3721/(x3722>>x3723))&x3724);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3909 = INT32_MIN;
	uint32_t x3910 = 27517764U;
	int8_t x3911 = 18;

	t53 = ((x3909/(x3910>>x3911))&x3912);

	if (t53 != 913U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3917 = 418U;
	volatile int8_t x3918 = INT8_MAX;
	volatile uint64_t x3919 = 5LLU;

	t54 = ((x3917/(x3918>>x3919))&x3920);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3957 = INT32_MIN;
	uint16_t x3958 = 3661U;
	int8_t x3960 = INT8_MAX;
	volatile int32_t t55 = -340;

	t55 = ((x3957/(x3958>>x3959))&x3960);

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x4013 = -1;
	volatile uint32_t x4014 = UINT32_MAX;
	int16_t x4016 = 10;
	uint32_t t56 = 401U;

	t56 = ((x4013/(x4014>>x4015))&x4016);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x4093 = 7U;
	uint16_t x4094 = 2100U;
	uint8_t x4095 = 1U;
	uint64_t x4096 = UINT64_MAX;
	volatile uint64_t t57 = 4214064225782873664LLU;

	t57 = ((x4093/(x4094>>x4095))&x4096);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4145 = -1;
	int32_t x4146 = 14915;
	volatile uint16_t x4147 = 3U;
	int8_t x4148 = INT8_MIN;
	volatile int32_t t58 = -85530;

	t58 = ((x4145/(x4146>>x4147))&x4148);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x4349 = 15U;
	int8_t x4350 = INT8_MAX;
	static uint32_t x4352 = UINT32_MAX;

	t59 = ((x4349/(x4350>>x4351))&x4352);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x4413 = -1;
	volatile uint16_t x4414 = UINT16_MAX;
	int8_t x4415 = 0;
	int8_t x4416 = -1;
	volatile int32_t t60 = -56870653;

	t60 = ((x4413/(x4414>>x4415))&x4416);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x4425 = 44158026U;
	uint32_t x4426 = UINT32_MAX;
	static int16_t x4427 = 3;
	volatile int8_t x4428 = -2;
	volatile uint32_t t61 = 0U;

	t61 = ((x4425/(x4426>>x4427))&x4428);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4533 = 268829952845LLU;
	static uint64_t x4534 = 40797441LLU;
	static uint8_t x4536 = 30U;
	uint64_t t62 = 2933533713871LLU;

	t62 = ((x4533/(x4534>>x4535))&x4536);

	if (t62 != 28LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4565 = -1;
	int32_t x4566 = INT32_MAX;
	int64_t x4568 = INT64_MIN;
	int64_t t63 = -106659163541497421LL;

	t63 = ((x4565/(x4566>>x4567))&x4568);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x4576 = INT64_MIN;
	int64_t t64 = 70467LL;

	t64 = ((x4573/(x4574>>x4575))&x4576);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4593 = INT16_MAX;
	uint64_t x4594 = 7461702236543391LLU;
	int8_t x4595 = 3;
	int64_t x4596 = INT64_MAX;
	static volatile uint64_t t65 = 7790353LLU;

	t65 = ((x4593/(x4594>>x4595))&x4596);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4641 = 6U;
	uint32_t x4642 = UINT32_MAX;
	int8_t x4643 = 26;
	uint64_t x4644 = UINT64_MAX;
	volatile uint64_t t66 = 27824578LLU;

	t66 = ((x4641/(x4642>>x4643))&x4644);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4645 = INT16_MIN;
	uint64_t x4646 = 11LLU;
	int16_t x4647 = 1;
	int32_t x4648 = INT32_MIN;

	t67 = ((x4645/(x4646>>x4647))&x4648);

	if (t67 != 3689348813882916864LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4782 = 23;
	static uint16_t x4783 = 2U;
	static volatile int8_t x4784 = INT8_MIN;
	int32_t t68 = 11487;

	t68 = ((x4781/(x4782>>x4783))&x4784);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4853 = -16;
	uint64_t x4854 = 1232144664LLU;
	int8_t x4855 = 1;
	int16_t x4856 = INT16_MIN;

	t69 = ((x4853/(x4854>>x4855))&x4856);

	if (t69 != 29942480896LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4969 = INT32_MAX;
	volatile uint16_t x4972 = 11046U;
	int64_t t70 = -1654840681360LL;

	t70 = ((x4969/(x4970>>x4971))&x4972);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5017 = UINT32_MAX;
	static int64_t x5018 = INT64_MAX;
	int64_t x5019 = 9LL;
	static volatile uint32_t x5020 = 5237U;
	volatile int64_t t71 = -32242LL;

	t71 = ((x5017/(x5018>>x5019))&x5020);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x5030 = 164U;
	uint8_t x5031 = 1U;
	volatile int64_t t72 = 59222948301493LL;

	t72 = ((x5029/(x5030>>x5031))&x5032);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x5185 = 2;
	uint16_t x5187 = 0U;
	volatile int8_t x5188 = INT8_MIN;
	volatile int32_t t73 = -7586;

	t73 = ((x5185/(x5186>>x5187))&x5188);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5241 = -1;
	int8_t x5243 = 3;
	int64_t x5244 = INT64_MIN;
	int64_t t74 = 536340520LL;

	t74 = ((x5241/(x5242>>x5243))&x5244);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x5253 = INT16_MAX;
	uint16_t x5254 = 1U;
	int8_t x5255 = 0;
	volatile int32_t t75 = -16014;

	t75 = ((x5253/(x5254>>x5255))&x5256);

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5281 = UINT16_MAX;
	uint8_t x5282 = 81U;
	int32_t x5283 = 0;
	uint32_t t76 = 4229U;

	t76 = ((x5281/(x5282>>x5283))&x5284);

	if (t76 != 8U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5389 = 1912287495368LLU;
	static volatile uint32_t x5391 = 0U;
	uint64_t t77 = 133883LLU;

	t77 = ((x5389/(x5390>>x5391))&x5392);

	if (t77 != 29642LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5417 = -1;
	volatile uint16_t x5418 = 5242U;
	int8_t x5419 = 11;
	volatile int8_t x5420 = -1;
	static volatile int32_t t78 = 5170;

	t78 = ((x5417/(x5418>>x5419))&x5420);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x5429 = 252U;
	int32_t x5431 = 2;
	int8_t x5432 = INT8_MIN;

	t79 = ((x5429/(x5430>>x5431))&x5432);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5461 = -24;
	int64_t x5462 = INT64_MAX;
	volatile int8_t x5463 = 3;
	static volatile int32_t x5464 = -50411118;
	static int64_t t80 = 59LL;

	t80 = ((x5461/(x5462>>x5463))&x5464);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5662 = INT16_MAX;
	int8_t x5664 = -1;
	int32_t t81 = 101915375;

	t81 = ((x5661/(x5662>>x5663))&x5664);

	if (t81 != -306783378) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x5825 = -1;
	uint32_t x5827 = 2U;
	int16_t x5828 = INT16_MIN;
	static volatile uint64_t t82 = 90635338882935775LLU;

	t82 = ((x5825/(x5826>>x5827))&x5828);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5845 = -1;
	uint8_t x5846 = 34U;
	uint16_t x5847 = 1U;
	uint32_t x5848 = 9602U;

	t83 = ((x5845/(x5846>>x5847))&x5848);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x6013 = UINT8_MAX;
	uint64_t x6014 = 3942627245LLU;
	int64_t x6016 = -1003020001921LL;

	t84 = ((x6013/(x6014>>x6015))&x6016);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x6085 = UINT8_MAX;
	int32_t x6086 = INT32_MAX;
	int32_t t85 = -1220833;

	t85 = ((x6085/(x6086>>x6087))&x6088);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x6105 = INT8_MIN;
	static uint8_t x6106 = 117U;
	uint8_t x6108 = 9U;
	int32_t t86 = 3942486;

	t86 = ((x6105/(x6106>>x6107))&x6108);

	if (t86 != 8) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6237 = 8152U;
	static volatile int8_t x6238 = 45;
	uint16_t x6239 = 2U;
	static volatile int16_t x6240 = -1;
	int32_t t87 = 35;

	t87 = ((x6237/(x6238>>x6239))&x6240);

	if (t87 != 741) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6305 = INT16_MIN;
	static int16_t x6306 = INT16_MAX;
	int64_t x6308 = -1LL;
	int64_t t88 = 213194047604840LL;

	t88 = ((x6305/(x6306>>x6307))&x6308);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6321 = -1;
	static uint32_t x6322 = 22U;
	static uint8_t x6323 = 1U;
	int32_t x6324 = 1;
	volatile uint32_t t89 = 35472483U;

	t89 = ((x6321/(x6322>>x6323))&x6324);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x6357 = 25002U;
	static uint8_t x6358 = 31U;
	uint32_t x6360 = 19203533U;
	volatile uint32_t t90 = 1U;

	t90 = ((x6357/(x6358>>x6359))&x6360);

	if (t90 != 1152U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6403 = 0U;
	static uint32_t x6404 = UINT32_MAX;
	volatile uint32_t t91 = 41U;

	t91 = ((x6401/(x6402>>x6403))&x6404);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6542 = UINT32_MAX;
	uint16_t x6543 = 22U;
	uint8_t x6544 = UINT8_MAX;
	static volatile int64_t t92 = 955034LL;

	t92 = ((x6541/(x6542>>x6543))&x6544);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6549 = INT8_MIN;
	uint8_t x6550 = 43U;
	uint8_t x6551 = 3U;
	static int16_t x6552 = INT16_MIN;

	t93 = ((x6549/(x6550>>x6551))&x6552);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x6621 = INT8_MIN;
	int16_t x6622 = INT16_MAX;
	volatile uint32_t x6623 = 2U;
	int64_t x6624 = 447686901983334LL;
	int64_t t94 = -5479843565886161LL;

	t94 = ((x6621/(x6622>>x6623))&x6624);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6626 = 3U;
	uint8_t x6627 = 0U;
	static volatile int8_t x6628 = -1;
	volatile uint32_t t95 = 1U;

	t95 = ((x6625/(x6626>>x6627))&x6628);

	if (t95 != 36U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x6685 = INT64_MIN;
	int16_t x6686 = INT16_MAX;
	static int16_t x6687 = 0;
	int8_t x6688 = -45;

	t96 = ((x6685/(x6686>>x6687))&x6688);

	if (t96 != -281483566907440LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6730 = 861284305;
	volatile uint8_t x6731 = 5U;
	int8_t x6732 = 9;
	int64_t t97 = -13584LL;

	t97 = ((x6729/(x6730>>x6731))&x6732);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6761 = 3LLU;
	int8_t x6762 = 17;
	int16_t x6763 = 3;
	int64_t x6764 = INT64_MIN;
	uint64_t t98 = 10219266212177LLU;

	t98 = ((x6761/(x6762>>x6763))&x6764);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x6885 = UINT16_MAX;
	uint16_t x6887 = 1U;
	int64_t x6888 = 5935LL;
	int64_t t99 = -38LL;

	t99 = ((x6885/(x6886>>x6887))&x6888);

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

