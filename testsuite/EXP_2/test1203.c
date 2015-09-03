#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x62 = -14;
uint8_t x94 = 6U;
uint64_t x100 = 2LLU;
volatile int32_t x177 = INT32_MAX;
static uint8_t x178 = 1U;
volatile uint32_t t6 = 675U;
static volatile int64_t x321 = INT64_MAX;
static uint16_t x360 = 0U;
uint32_t x515 = 471U;
volatile int16_t x524 = 1;
int8_t x587 = INT8_MAX;
static int32_t t15 = -637438;
volatile int32_t t16 = -21;
uint8_t x920 = 26U;
int32_t t19 = -434632;
static int16_t x1103 = 407;
volatile uint16_t x1104 = 31U;
static int8_t x1223 = -31;
uint8_t x1224 = 12U;
static uint32_t x1327 = 28750U;
static int32_t t25 = 18600;
volatile int16_t x1629 = INT16_MAX;
volatile int32_t t27 = 668536;
int16_t x1835 = -1;
volatile int32_t x2081 = INT32_MAX;
uint8_t x2084 = 0U;
int8_t x2114 = -1;
volatile uint32_t t33 = 145076727U;
int16_t x2282 = INT16_MIN;
int8_t x2285 = 2;
int64_t x2338 = -1LL;
int64_t x2339 = INT64_MAX;
int8_t x2350 = INT8_MAX;
uint16_t x2352 = 1U;
volatile uint64_t t40 = 2883863467LLU;
uint8_t x2461 = UINT8_MAX;
int32_t t41 = -913;
static int16_t x2500 = 0;
volatile int16_t x2535 = INT16_MAX;
int32_t t43 = 2671769;
int16_t x2712 = 1;
uint64_t x2982 = UINT64_MAX;
static int32_t x2983 = 193869;
uint64_t t50 = 21025232236309556LLU;
volatile int64_t x3058 = -1LL;
uint64_t x3377 = 90292214LLU;
static int16_t x3378 = -1;
uint16_t x3379 = 1U;
static volatile int64_t x3413 = 24127543935422LL;
uint64_t x3414 = UINT64_MAX;
uint32_t x3616 = 1U;
uint8_t x3701 = 41U;
int16_t x3703 = -62;
uint16_t x3704 = 2U;
uint8_t x3717 = UINT8_MAX;
uint64_t x3718 = 192526103257LLU;
volatile int32_t t62 = -93;
volatile int16_t x4008 = 1;
static volatile uint32_t t64 = 449944378U;
static uint16_t x4021 = 15598U;
int64_t x4023 = -2532110LL;
uint8_t x4024 = 3U;
uint8_t x4095 = 125U;
int16_t x4129 = 50;
uint64_t x4130 = UINT64_MAX;
volatile int32_t t67 = -3942;
volatile int32_t t68 = -5757;
int64_t x4355 = -1LL;
int16_t x4470 = -1;
volatile int32_t t72 = -26;
int8_t x4495 = INT8_MIN;
int32_t x4540 = 1;
uint32_t x4551 = 3248270U;
int8_t x4552 = 28;
volatile uint32_t t75 = 79U;
int8_t x4593 = 14;
int32_t x4595 = INT32_MIN;
static uint8_t x4604 = 0U;
int16_t x4691 = INT16_MAX;
volatile int16_t x4789 = 0;
volatile uint32_t x4790 = 29772U;
volatile int64_t x4812 = 3LL;
uint8_t x4881 = 50U;
static int64_t x4890 = INT64_MAX;
static uint8_t x4902 = 3U;
int64_t x5087 = INT64_MAX;
static volatile uint16_t x5088 = 0U;
int32_t t89 = 4;
int8_t x5191 = INT8_MAX;
int64_t x5192 = 0LL;
int16_t x5285 = INT16_MAX;
int32_t t91 = -4;
volatile uint64_t x5341 = 298911LLU;
volatile uint64_t x5360 = 16LLU;
int16_t x5502 = INT16_MAX;
static int32_t t98 = -1;


void f0(void) {
	uint8_t x61 = UINT8_MAX;
	uint64_t x63 = UINT64_MAX;
	static volatile int64_t x64 = 0LL;
	int32_t t0 = -345;

	t0 = ((x61-(x62==x63))>>x64);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x65 = 106877795U;
	int32_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = 30U;
	uint32_t t1 = 2249U;

	t1 = ((x65-(x66==x67))>>x68);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x93 = INT8_MAX;
	int64_t x95 = 11336215053LL;
	static uint8_t x96 = 0U;
	static volatile int32_t t2 = -6;

	t2 = ((x93-(x94==x95))>>x96);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x97 = INT8_MAX;
	static int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MAX;
	volatile int32_t t3 = -8580777;

	t3 = ((x97-(x98==x99))>>x100);

	if (t3 != 31) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int16_t x150 = INT16_MAX;
	int64_t x151 = -1LL;
	uint16_t x152 = 15U;
	int32_t t4 = 56;

	t4 = ((x149-(x150==x151))>>x152);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x179 = 4U;
	static int8_t x180 = 3;
	volatile int32_t t5 = 1317;

	t5 = ((x177-(x178==x179))>>x180);

	if (t5 != 268435455) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x309 = UINT32_MAX;
	static int64_t x310 = -1LL;
	int8_t x311 = INT8_MIN;
	volatile uint16_t x312 = 7U;

	t6 = ((x309-(x310==x311))>>x312);

	if (t6 != 33554431U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x313 = 0;
	int16_t x314 = INT16_MIN;
	int16_t x315 = -1239;
	volatile int32_t x316 = 2;
	volatile int32_t t7 = -21265;

	t7 = ((x313-(x314==x315))>>x316);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x322 = -1LL;
	int32_t x323 = -1;
	volatile uint8_t x324 = 0U;
	volatile int64_t t8 = -806LL;

	t8 = ((x321-(x322==x323))>>x324);

	if (t8 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x357 = 3094U;
	static volatile int8_t x358 = 4;
	int32_t x359 = -105474;
	static int32_t t9 = -7353260;

	t9 = ((x357-(x358==x359))>>x360);

	if (t9 != 3094) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x397 = INT16_MAX;
	uint32_t x398 = UINT32_MAX;
	int32_t x399 = -1;
	uint8_t x400 = 1U;
	volatile int32_t t10 = 15;

	t10 = ((x397-(x398==x399))>>x400);

	if (t10 != 16383) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x513 = 569172337199LL;
	int16_t x514 = 0;
	volatile uint16_t x516 = 5U;
	volatile int64_t t11 = 702018LL;

	t11 = ((x513-(x514==x515))>>x516);

	if (t11 != 17786635537LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x521 = INT16_MAX;
	uint16_t x522 = 807U;
	static int32_t x523 = INT32_MAX;
	volatile int32_t t12 = -2;

	t12 = ((x521-(x522==x523))>>x524);

	if (t12 != 16383) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x557 = 13U;
	int8_t x558 = -16;
	static volatile int64_t x559 = -1LL;
	int8_t x560 = 19;
	int32_t t13 = 61869643;

	t13 = ((x557-(x558==x559))>>x560);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x585 = 987394731611852031LLU;
	uint64_t x586 = 14952LLU;
	volatile uint8_t x588 = 1U;
	uint64_t t14 = 187987859680LLU;

	t14 = ((x585-(x586==x587))>>x588);

	if (t14 != 493697365805926015LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x745 = 7U;
	volatile int16_t x746 = -192;
	static int8_t x747 = -1;
	volatile uint8_t x748 = 0U;

	t15 = ((x745-(x746==x747))>>x748);

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x849 = 4U;
	volatile int64_t x850 = INT64_MIN;
	static uint16_t x851 = 1384U;
	static int64_t x852 = 16LL;

	t16 = ((x849-(x850==x851))>>x852);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x917 = 4U;
	int64_t x918 = -1LL;
	uint64_t x919 = 0LLU;
	volatile int32_t t17 = 19046002;

	t17 = ((x917-(x918==x919))>>x920);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x997 = UINT8_MAX;
	static uint32_t x998 = UINT32_MAX;
	static uint64_t x999 = 178LLU;
	uint16_t x1000 = 14U;
	static int32_t t18 = 5;

	t18 = ((x997-(x998==x999))>>x1000);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1037 = INT16_MAX;
	volatile uint8_t x1038 = 9U;
	int16_t x1039 = INT16_MIN;
	int16_t x1040 = 1;

	t19 = ((x1037-(x1038==x1039))>>x1040);

	if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1101 = UINT64_MAX;
	int64_t x1102 = INT64_MIN;
	static uint64_t t20 = 1LLU;

	t20 = ((x1101-(x1102==x1103))>>x1104);

	if (t20 != 8589934591LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1185 = 2U;
	uint8_t x1186 = UINT8_MAX;
	volatile int64_t x1187 = INT64_MIN;
	int8_t x1188 = 0;
	volatile int32_t t21 = -8308237;

	t21 = ((x1185-(x1186==x1187))>>x1188);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1217 = 69745016475827LLU;
	uint8_t x1218 = UINT8_MAX;
	int64_t x1219 = INT64_MAX;
	static uint8_t x1220 = 9U;
	uint64_t t22 = 5903166LLU;

	t22 = ((x1217-(x1218==x1219))>>x1220);

	if (t22 != 136220735304LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1221 = 3533;
	static volatile int16_t x1222 = INT16_MIN;
	int32_t t23 = -44;

	t23 = ((x1221-(x1222==x1223))>>x1224);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1253 = 9;
	uint16_t x1254 = 240U;
	int64_t x1255 = INT64_MAX;
	static volatile int16_t x1256 = 1;
	int32_t t24 = 1109502;

	t24 = ((x1253-(x1254==x1255))>>x1256);

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1325 = INT16_MAX;
	volatile int16_t x1326 = -13826;
	int8_t x1328 = 14;

	t25 = ((x1325-(x1326==x1327))>>x1328);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1489 = 1;
	static int64_t x1490 = 1002947270LL;
	int16_t x1491 = -1;
	static uint64_t x1492 = 1LLU;
	int32_t t26 = 975942018;

	t26 = ((x1489-(x1490==x1491))>>x1492);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x1630 = UINT64_MAX;
	uint8_t x1631 = UINT8_MAX;
	volatile int16_t x1632 = 6;

	t27 = ((x1629-(x1630==x1631))>>x1632);

	if (t27 != 511) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1633 = 5LLU;
	int64_t x1634 = -248996406574LL;
	int16_t x1635 = -26;
	static int64_t x1636 = 0LL;
	static volatile uint64_t t28 = 1034713367LLU;

	t28 = ((x1633-(x1634==x1635))>>x1636);

	if (t28 != 5LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1753 = 170;
	uint32_t x1754 = 263105U;
	uint8_t x1755 = 10U;
	static uint16_t x1756 = 3U;
	int32_t t29 = 27780;

	t29 = ((x1753-(x1754==x1755))>>x1756);

	if (t29 != 21) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1833 = 7115LLU;
	uint8_t x1834 = 3U;
	uint64_t x1836 = 2LLU;
	volatile uint64_t t30 = 8383201336LLU;

	t30 = ((x1833-(x1834==x1835))>>x1836);

	if (t30 != 1778LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2082 = INT64_MIN;
	int16_t x2083 = -16;
	int32_t t31 = INT32_MAX;

	t31 = ((x2081-(x2082==x2083))>>x2084);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2113 = INT64_MAX;
	volatile uint64_t x2115 = 2501203028556825LLU;
	uint32_t x2116 = 8U;
	volatile int64_t t32 = -8337218245497960LL;

	t32 = ((x2113-(x2114==x2115))>>x2116);

	if (t32 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2257 = 1483U;
	int16_t x2258 = -19;
	uint32_t x2259 = UINT32_MAX;
	uint8_t x2260 = 2U;

	t33 = ((x2257-(x2258==x2259))>>x2260);

	if (t33 != 370U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2281 = 34U;
	static int8_t x2283 = -1;
	int8_t x2284 = 1;
	int32_t t34 = 485267;

	t34 = ((x2281-(x2282==x2283))>>x2284);

	if (t34 != 17) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2286 = UINT8_MAX;
	volatile int64_t x2287 = -1LL;
	uint8_t x2288 = 0U;
	int32_t t35 = 574687784;

	t35 = ((x2285-(x2286==x2287))>>x2288);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2337 = 44U;
	uint16_t x2340 = 7U;
	volatile int32_t t36 = -135122478;

	t36 = ((x2337-(x2338==x2339))>>x2340);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2349 = 57690448608225532LL;
	uint16_t x2351 = UINT16_MAX;
	int64_t t37 = 8259179455827LL;

	t37 = ((x2349-(x2350==x2351))>>x2352);

	if (t37 != 28845224304112766LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2361 = INT16_MAX;
	uint64_t x2362 = UINT64_MAX;
	uint32_t x2363 = 11U;
	volatile uint8_t x2364 = 1U;
	volatile int32_t t38 = -1136291;

	t38 = ((x2361-(x2362==x2363))>>x2364);

	if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2373 = 16049U;
	static uint8_t x2374 = UINT8_MAX;
	static int64_t x2375 = INT64_MIN;
	uint8_t x2376 = 0U;
	volatile int32_t t39 = -3;

	t39 = ((x2373-(x2374==x2375))>>x2376);

	if (t39 != 16049) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2433 = UINT64_MAX;
	int64_t x2434 = INT64_MIN;
	int64_t x2435 = INT64_MIN;
	volatile uint32_t x2436 = 19U;

	t40 = ((x2433-(x2434==x2435))>>x2436);

	if (t40 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2462 = 7LLU;
	int64_t x2463 = -14820LL;
	int64_t x2464 = 0LL;

	t41 = ((x2461-(x2462==x2463))>>x2464);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2497 = 26U;
	uint8_t x2498 = UINT8_MAX;
	static int8_t x2499 = -1;
	volatile int32_t t42 = -66649663;

	t42 = ((x2497-(x2498==x2499))>>x2500);

	if (t42 != 26) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2533 = UINT8_MAX;
	uint8_t x2534 = UINT8_MAX;
	uint8_t x2536 = 6U;

	t43 = ((x2533-(x2534==x2535))>>x2536);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2561 = INT32_MAX;
	volatile uint64_t x2562 = 1576976LLU;
	int32_t x2563 = -1;
	uint8_t x2564 = 4U;
	volatile int32_t t44 = 92678;

	t44 = ((x2561-(x2562==x2563))>>x2564);

	if (t44 != 134217727) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2565 = 13U;
	int8_t x2566 = 11;
	volatile int32_t x2567 = -1;
	volatile int8_t x2568 = 1;
	static int32_t t45 = 361;

	t45 = ((x2565-(x2566==x2567))>>x2568);

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x2657 = 362735981U;
	uint32_t x2658 = 6U;
	static int64_t x2659 = -1067482705382090039LL;
	int8_t x2660 = 2;
	static volatile uint32_t t46 = 5U;

	t46 = ((x2657-(x2658==x2659))>>x2660);

	if (t46 != 90683995U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2709 = 15941;
	uint8_t x2710 = 14U;
	int32_t x2711 = INT32_MAX;
	int32_t t47 = 35;

	t47 = ((x2709-(x2710==x2711))>>x2712);

	if (t47 != 7970) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2761 = INT64_MAX;
	uint8_t x2762 = 0U;
	int64_t x2763 = INT64_MIN;
	int8_t x2764 = 14;
	int64_t t48 = 309478181168772263LL;

	t48 = ((x2761-(x2762==x2763))>>x2764);

	if (t48 != 562949953421311LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2957 = 5971583818LLU;
	int64_t x2958 = -439330685549117LL;
	static uint64_t x2959 = UINT64_MAX;
	uint64_t x2960 = 1LLU;
	uint64_t t49 = 56LLU;

	t49 = ((x2957-(x2958==x2959))>>x2960);

	if (t49 != 2985791909LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2981 = 521690476943955748LLU;
	static int16_t x2984 = 36;

	t50 = ((x2981-(x2982==x2983))>>x2984);

	if (t50 != 7591595LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x3033 = INT64_MAX;
	static int64_t x3034 = INT64_MIN;
	int64_t x3035 = 4LL;
	volatile int16_t x3036 = 47;
	volatile int64_t t51 = -24986085484LL;

	t51 = ((x3033-(x3034==x3035))>>x3036);

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3057 = 154650LLU;
	static volatile int16_t x3059 = INT16_MIN;
	static uint8_t x3060 = 3U;
	volatile uint64_t t52 = 1267080523454034LLU;

	t52 = ((x3057-(x3058==x3059))>>x3060);

	if (t52 != 19331LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3137 = 7;
	int8_t x3138 = 1;
	uint64_t x3139 = 336485809632961LLU;
	uint8_t x3140 = 0U;
	volatile int32_t t53 = 329;

	t53 = ((x3137-(x3138==x3139))>>x3140);

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x3380 = 0U;
	uint64_t t54 = 664916301686535600LLU;

	t54 = ((x3377-(x3378==x3379))>>x3380);

	if (t54 != 90292214LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3415 = -1;
	static uint64_t x3416 = 13LLU;
	volatile int64_t t55 = -426846084672LL;

	t55 = ((x3413-(x3414==x3415))>>x3416);

	if (t55 != 2945256828LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3533 = 233U;
	static volatile uint16_t x3534 = UINT16_MAX;
	volatile int8_t x3535 = INT8_MIN;
	static uint16_t x3536 = 0U;
	uint32_t t56 = 4831340U;

	t56 = ((x3533-(x3534==x3535))>>x3536);

	if (t56 != 233U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3549 = 326U;
	int32_t x3550 = INT32_MIN;
	static uint32_t x3551 = 28U;
	static int8_t x3552 = 1;
	int32_t t57 = 5799;

	t57 = ((x3549-(x3550==x3551))>>x3552);

	if (t57 != 163) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3577 = 685;
	int16_t x3578 = -1;
	int32_t x3579 = -1;
	int8_t x3580 = 2;
	int32_t t58 = 429;

	t58 = ((x3577-(x3578==x3579))>>x3580);

	if (t58 != 171) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3613 = 122290U;
	int16_t x3614 = 153;
	uint32_t x3615 = 997U;
	uint32_t t59 = 12353589U;

	t59 = ((x3613-(x3614==x3615))>>x3616);

	if (t59 != 61145U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3685 = 62518LLU;
	int8_t x3686 = -2;
	static int16_t x3687 = INT16_MAX;
	uint8_t x3688 = 1U;
	static uint64_t t60 = 2593LLU;

	t60 = ((x3685-(x3686==x3687))>>x3688);

	if (t60 != 31259LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3702 = -1;
	static volatile int32_t t61 = -218061;

	t61 = ((x3701-(x3702==x3703))>>x3704);

	if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3719 = INT16_MAX;
	static uint8_t x3720 = 24U;

	t62 = ((x3717-(x3718==x3719))>>x3720);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3777 = 0U;
	int8_t x3778 = 25;
	int64_t x3779 = 33061009LL;
	uint8_t x3780 = 1U;
	int32_t t63 = -1064980;

	t63 = ((x3777-(x3778==x3779))>>x3780);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x4005 = 475060U;
	int64_t x4006 = 1995LL;
	int32_t x4007 = INT32_MAX;

	t64 = ((x4005-(x4006==x4007))>>x4008);

	if (t64 != 237530U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4022 = -505971657;
	int32_t t65 = -166075595;

	t65 = ((x4021-(x4022==x4023))>>x4024);

	if (t65 != 1949) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4093 = 58U;
	static uint64_t x4094 = UINT64_MAX;
	static uint8_t x4096 = 3U;
	volatile int32_t t66 = -11994;

	t66 = ((x4093-(x4094==x4095))>>x4096);

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4131 = INT32_MAX;
	volatile uint32_t x4132 = 23U;

	t67 = ((x4129-(x4130==x4131))>>x4132);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4157 = 31U;
	int8_t x4158 = -2;
	uint64_t x4159 = UINT64_MAX;
	uint16_t x4160 = 27U;

	t68 = ((x4157-(x4158==x4159))>>x4160);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4297 = 2;
	static int64_t x4298 = 6769069849959668LL;
	volatile int8_t x4299 = 0;
	uint8_t x4300 = 0U;
	volatile int32_t t69 = -320;

	t69 = ((x4297-(x4298==x4299))>>x4300);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4353 = 10457600LLU;
	uint8_t x4354 = 13U;
	static volatile uint16_t x4356 = 0U;
	static uint64_t t70 = 4370184LLU;

	t70 = ((x4353-(x4354==x4355))>>x4356);

	if (t70 != 10457600LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4389 = 3229U;
	static uint32_t x4390 = UINT32_MAX;
	int8_t x4391 = -12;
	int64_t x4392 = 1LL;
	uint32_t t71 = 324U;

	t71 = ((x4389-(x4390==x4391))>>x4392);

	if (t71 != 1614U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4469 = INT8_MAX;
	volatile int8_t x4471 = INT8_MIN;
	static volatile uint8_t x4472 = 23U;

	t72 = ((x4469-(x4470==x4471))>>x4472);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4493 = INT8_MAX;
	volatile uint64_t x4494 = 502972759686654986LLU;
	static uint8_t x4496 = 1U;
	int32_t t73 = -279800;

	t73 = ((x4493-(x4494==x4495))>>x4496);

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4537 = INT32_MAX;
	uint8_t x4538 = 14U;
	volatile int64_t x4539 = INT64_MAX;
	volatile int32_t t74 = -60844506;

	t74 = ((x4537-(x4538==x4539))>>x4540);

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x4549 = UINT32_MAX;
	volatile uint8_t x4550 = 25U;

	t75 = ((x4549-(x4550==x4551))>>x4552);

	if (t75 != 15U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4594 = 0LLU;
	volatile uint8_t x4596 = 2U;
	static int32_t t76 = 109782;

	t76 = ((x4593-(x4594==x4595))>>x4596);

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4601 = UINT64_MAX;
	volatile int32_t x4602 = 9;
	int64_t x4603 = -1LL;
	uint64_t t77 = UINT64_MAX;

	t77 = ((x4601-(x4602==x4603))>>x4604);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4613 = INT64_MAX;
	static int64_t x4614 = INT64_MAX;
	int32_t x4615 = INT32_MIN;
	uint8_t x4616 = 24U;
	volatile int64_t t78 = -474034244631674LL;

	t78 = ((x4613-(x4614==x4615))>>x4616);

	if (t78 != 549755813887LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4689 = 811U;
	uint8_t x4690 = 0U;
	uint8_t x4692 = 1U;
	int32_t t79 = 705274970;

	t79 = ((x4689-(x4690==x4691))>>x4692);

	if (t79 != 405) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4785 = 29364U;
	volatile int16_t x4786 = 15;
	uint8_t x4787 = 1U;
	static uint16_t x4788 = 11U;
	uint32_t t80 = 101671069U;

	t80 = ((x4785-(x4786==x4787))>>x4788);

	if (t80 != 14U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4791 = INT32_MAX;
	uint8_t x4792 = 23U;
	static int32_t t81 = 31850;

	t81 = ((x4789-(x4790==x4791))>>x4792);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4809 = 12U;
	int64_t x4810 = INT64_MAX;
	int8_t x4811 = 44;
	volatile int32_t t82 = -143269030;

	t82 = ((x4809-(x4810==x4811))>>x4812);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4882 = -1;
	int16_t x4883 = -1;
	int8_t x4884 = 3;
	volatile int32_t t83 = 5353123;

	t83 = ((x4881-(x4882==x4883))>>x4884);

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4889 = UINT8_MAX;
	static int32_t x4891 = INT32_MAX;
	int8_t x4892 = 16;
	volatile int32_t t84 = 1905433;

	t84 = ((x4889-(x4890==x4891))>>x4892);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4901 = 1;
	uint64_t x4903 = 6926992656269LLU;
	int8_t x4904 = 1;
	int32_t t85 = -8;

	t85 = ((x4901-(x4902==x4903))>>x4904);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4973 = 21700766283LLU;
	uint8_t x4974 = UINT8_MAX;
	uint64_t x4975 = UINT64_MAX;
	volatile uint32_t x4976 = 2U;
	static volatile uint64_t t86 = 877845LLU;

	t86 = ((x4973-(x4974==x4975))>>x4976);

	if (t86 != 5425191570LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4989 = 107541121887LLU;
	int16_t x4990 = INT16_MIN;
	int16_t x4991 = INT16_MIN;
	uint32_t x4992 = 3U;
	volatile uint64_t t87 = 3469319014620325LLU;

	t87 = ((x4989-(x4990==x4991))>>x4992);

	if (t87 != 13442640235LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5033 = 104677U;
	uint32_t x5034 = 25073962U;
	int8_t x5035 = INT8_MIN;
	uint8_t x5036 = 7U;
	static volatile uint32_t t88 = 36055U;

	t88 = ((x5033-(x5034==x5035))>>x5036);

	if (t88 != 817U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5085 = 8130U;
	static volatile uint64_t x5086 = UINT64_MAX;

	t89 = ((x5085-(x5086==x5087))>>x5088);

	if (t89 != 8130) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5189 = 20809U;
	int32_t x5190 = -3;
	volatile int32_t t90 = -53867;

	t90 = ((x5189-(x5190==x5191))>>x5192);

	if (t90 != 20809) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x5286 = 197651U;
	static int64_t x5287 = -1LL;
	volatile int8_t x5288 = 3;

	t91 = ((x5285-(x5286==x5287))>>x5288);

	if (t91 != 4095) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5309 = 0;
	uint32_t x5310 = UINT32_MAX;
	volatile int32_t x5311 = INT32_MIN;
	static uint8_t x5312 = 2U;
	static int32_t t92 = -7218379;

	t92 = ((x5309-(x5310==x5311))>>x5312);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5329 = 32259U;
	int32_t x5330 = 14952;
	int16_t x5331 = INT16_MIN;
	uint16_t x5332 = 2U;
	int32_t t93 = 0;

	t93 = ((x5329-(x5330==x5331))>>x5332);

	if (t93 != 8064) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x5342 = INT32_MIN;
	static uint32_t x5343 = 1316U;
	static uint8_t x5344 = 1U;
	volatile uint64_t t94 = 56813473229411049LLU;

	t94 = ((x5341-(x5342==x5343))>>x5344);

	if (t94 != 149455LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5357 = 1U;
	uint32_t x5358 = 1U;
	static volatile uint8_t x5359 = 0U;
	volatile int32_t t95 = 19;

	t95 = ((x5357-(x5358==x5359))>>x5360);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5413 = 80023617LLU;
	int16_t x5414 = -4;
	int32_t x5415 = -14298064;
	uint8_t x5416 = 33U;
	volatile uint64_t t96 = 192706631LLU;

	t96 = ((x5413-(x5414==x5415))>>x5416);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5473 = 31905LLU;
	uint8_t x5474 = 14U;
	int8_t x5475 = INT8_MIN;
	int16_t x5476 = 0;
	uint64_t t97 = 1234875LLU;

	t97 = ((x5473-(x5474==x5475))>>x5476);

	if (t97 != 31905LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5501 = 11U;
	int8_t x5503 = -1;
	volatile uint8_t x5504 = 5U;

	t98 = ((x5501-(x5502==x5503))>>x5504);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5545 = 8;
	static volatile int32_t x5546 = -919;
	int8_t x5547 = -1;
	int8_t x5548 = 0;
	int32_t t99 = 8;

	t99 = ((x5545-(x5546==x5547))>>x5548);

	if (t99 != 8) { NG(); } else { ; }
	
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

