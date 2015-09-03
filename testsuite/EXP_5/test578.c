#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x408 = 25U;
int64_t x417 = INT64_MAX;
volatile int64_t t5 = INT64_MAX;
static uint32_t x549 = UINT32_MAX;
volatile uint32_t t6 = UINT32_MAX;
int8_t x776 = 0;
static uint32_t x976 = 1U;
static int8_t x982 = 1;
uint8_t x984 = 12U;
uint64_t t10 = 349572669907631018LLU;
uint32_t x1413 = 2714U;
volatile int16_t x1619 = INT16_MIN;
int32_t x1667 = -1;
uint32_t x1922 = 3718776U;
int8_t x1924 = 0;
int64_t t17 = -492755LL;
volatile uint16_t x2228 = 15U;
volatile uint16_t x2366 = 3534U;
volatile uint64_t t23 = 549660041303116948LLU;
int8_t x2468 = 2;
int16_t x2546 = -1;
int8_t x2547 = INT8_MIN;
uint8_t x2620 = 23U;
int32_t x2689 = 40958;
static int16_t x2891 = INT16_MIN;
int16_t x2892 = 15;
uint8_t x2910 = 102U;
uint16_t x2912 = 10U;
volatile uint16_t x3131 = UINT16_MAX;
int64_t x3144 = 15LL;
uint8_t x3256 = 0U;
int32_t x3281 = INT32_MAX;
uint8_t x3282 = UINT8_MAX;
volatile int64_t x3283 = -2873841887LL;
volatile uint16_t x3440 = 10U;
int64_t x3455 = 25147LL;
int32_t x3481 = 1285395;
volatile uint16_t x3483 = 57U;
volatile int32_t t37 = 169695;
int16_t x3626 = 489;
uint8_t x3628 = 2U;
int64_t x3678 = 0LL;
volatile int64_t x4213 = INT64_MAX;
volatile uint16_t x4216 = 2U;
int32_t t46 = 18;
int64_t x4309 = INT64_MAX;
static uint64_t x4310 = 9080831LLU;
int16_t x4311 = INT16_MIN;
uint8_t x4312 = 0U;
int32_t x4363 = 309597747;
static volatile int64_t t49 = INT64_MAX;
int8_t x4541 = INT8_MAX;
int16_t x4666 = -137;
volatile int32_t t51 = -90;
int32_t x4670 = -486;
int8_t x4704 = 0;
uint64_t x4790 = 9099200346798854982LLU;
volatile uint8_t x4809 = 45U;
int32_t t55 = 0;
int64_t x4830 = 563LL;
volatile int16_t x5083 = 336;
volatile int32_t t57 = -1517616;
int8_t x5226 = 48;
volatile int8_t x5227 = 2;
uint32_t x5298 = UINT32_MAX;
int8_t x5300 = 0;
uint8_t x5321 = 15U;
volatile int8_t x5322 = INT8_MIN;
volatile int32_t t63 = -158;
uint64_t x5650 = 430269616LLU;
int16_t x6035 = INT16_MAX;
uint64_t t66 = UINT64_MAX;
static uint8_t x6092 = 36U;
uint8_t x6785 = 13U;
int16_t x6839 = -3;
uint64_t x6877 = UINT64_MAX;


void f0(void) {
	uint8_t x1 = 31U;
	static volatile int16_t x2 = 1;
	int16_t x3 = 1;
	static volatile uint32_t x4 = 3U;
	int32_t t0 = -2724619;

	t0 = (x1<<((x2/x3)<<x4));

	if (t0 != 7936) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 2U;
	volatile int32_t x211 = -4610;
	uint64_t x212 = 31LLU;
	volatile int32_t t1 = 8013669;

	t1 = (x209<<((x210/x211)<<x212));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x281 = 959917U;
	uint16_t x282 = 420U;
	static int64_t x283 = 15218471899LL;
	uint8_t x284 = 1U;
	volatile uint32_t t2 = 0U;

	t2 = (x281<<((x282/x283)<<x284));

	if (t2 != 959917U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x313 = 2356;
	volatile uint8_t x314 = 6U;
	int8_t x315 = 34;
	uint8_t x316 = 0U;
	static volatile int32_t t3 = -7;

	t3 = (x313<<((x314/x315)<<x316));

	if (t3 != 2356) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x405 = 52945129805920427LLU;
	uint8_t x406 = 0U;
	int16_t x407 = 26;
	volatile uint64_t t4 = 566656LLU;

	t4 = (x405<<((x406/x407)<<x408));

	if (t4 != 52945129805920427LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x418 = INT32_MIN;
	uint64_t x419 = UINT64_MAX;
	volatile int16_t x420 = 7;

	t5 = (x417<<((x418/x419)<<x420));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x550 = -1;
	int64_t x551 = INT64_MAX;
	uint32_t x552 = 58U;

	t6 = (x549<<((x550/x551)<<x552));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x773 = 856U;
	int8_t x774 = INT8_MAX;
	int16_t x775 = INT16_MIN;
	volatile uint32_t t7 = 221071U;

	t7 = (x773<<((x774/x775)<<x776));

	if (t7 != 856U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x909 = UINT8_MAX;
	int8_t x910 = INT8_MIN;
	static int64_t x911 = -1574786813537LL;
	static int8_t x912 = 1;
	int32_t t8 = -5534165;

	t8 = (x909<<((x910/x911)<<x912));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x973 = 23533;
	int8_t x974 = -7;
	int64_t x975 = -1LL;
	int32_t t9 = 426546431;

	t9 = (x973<<((x974/x975)<<x976));

	if (t9 != 385564672) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x981 = 550966LLU;
	uint64_t x983 = 4LLU;

	t10 = (x981<<((x982/x983)<<x984));

	if (t10 != 550966LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1285 = INT16_MAX;
	int64_t x1286 = -1LL;
	int8_t x1287 = -22;
	uint8_t x1288 = 1U;
	int32_t t11 = 62377432;

	t11 = (x1285<<((x1286/x1287)<<x1288));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1414 = 219;
	int64_t x1415 = -4264516664218LL;
	int8_t x1416 = 6;
	static uint32_t t12 = 1714712743U;

	t12 = (x1413<<((x1414/x1415)<<x1416));

	if (t12 != 2714U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x1617 = INT32_MAX;
	int8_t x1618 = 0;
	uint64_t x1620 = 0LLU;
	static volatile int32_t t13 = INT32_MAX;

	t13 = (x1617<<((x1618/x1619)<<x1620));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1665 = 7;
	int8_t x1666 = -1;
	int16_t x1668 = 4;
	int32_t t14 = -14945;

	t14 = (x1665<<((x1666/x1667)<<x1668));

	if (t14 != 458752) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1673 = UINT16_MAX;
	volatile int8_t x1674 = INT8_MAX;
	int16_t x1675 = INT16_MIN;
	volatile int32_t x1676 = 0;
	volatile int32_t t15 = -59354925;

	t15 = (x1673<<((x1674/x1675)<<x1676));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1917 = 16;
	int64_t x1918 = -1LL;
	int64_t x1919 = INT64_MIN;
	uint32_t x1920 = 6U;
	volatile int32_t t16 = 3;

	t16 = (x1917<<((x1918/x1919)<<x1920));

	if (t16 != 16) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1921 = 41006183LL;
	int16_t x1923 = INT16_MIN;

	t17 = (x1921<<((x1922/x1923)<<x1924));

	if (t17 != 41006183LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1961 = 11U;
	uint8_t x1962 = 5U;
	int32_t x1963 = INT32_MAX;
	uint8_t x1964 = 0U;
	int32_t t18 = 0;

	t18 = (x1961<<((x1962/x1963)<<x1964));

	if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x2061 = 69261604649710055LL;
	uint64_t x2062 = 5450148599080984653LLU;
	int64_t x2063 = -1LL;
	static uint8_t x2064 = 1U;
	volatile int64_t t19 = -82241022962942800LL;

	t19 = (x2061<<((x2062/x2063)<<x2064));

	if (t19 != 69261604649710055LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x2089 = 50360338U;
	uint64_t x2090 = UINT64_MAX;
	int16_t x2091 = -2;
	int32_t x2092 = 1;
	static uint32_t t20 = 1819464347U;

	t20 = (x2089<<((x2090/x2091)<<x2092));

	if (t20 != 201441352U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x2133 = 215590;
	int64_t x2134 = -1LL;
	static uint8_t x2135 = UINT8_MAX;
	static int16_t x2136 = 0;
	volatile int32_t t21 = 90;

	t21 = (x2133<<((x2134/x2135)<<x2136));

	if (t21 != 215590) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x2225 = 41U;
	volatile uint16_t x2226 = 6817U;
	int64_t x2227 = INT64_MIN;
	uint32_t t22 = 2U;

	t22 = (x2225<<((x2226/x2227)<<x2228));

	if (t22 != 41U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x2365 = 50614582143867478LLU;
	volatile int16_t x2367 = INT16_MIN;
	int16_t x2368 = 6;

	t23 = (x2365<<((x2366/x2367)<<x2368));

	if (t23 != 50614582143867478LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2465 = INT64_MAX;
	uint8_t x2466 = 77U;
	static uint64_t x2467 = 91LLU;
	int64_t t24 = INT64_MAX;

	t24 = (x2465<<((x2466/x2467)<<x2468));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2545 = 261U;
	uint64_t x2548 = 29LLU;
	volatile uint32_t t25 = 21U;

	t25 = (x2545<<((x2546/x2547)<<x2548));

	if (t25 != 261U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2617 = 122U;
	volatile uint64_t x2618 = 244861930LLU;
	static uint64_t x2619 = UINT64_MAX;
	int32_t t26 = 521140737;

	t26 = (x2617<<((x2618/x2619)<<x2620));

	if (t26 != 122) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x2690 = 86U;
	int16_t x2691 = INT16_MIN;
	static int8_t x2692 = 0;
	volatile int32_t t27 = -89078550;

	t27 = (x2689<<((x2690/x2691)<<x2692));

	if (t27 != 40958) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x2889 = 11U;
	static uint16_t x2890 = 31559U;
	static volatile int32_t t28 = 0;

	t28 = (x2889<<((x2890/x2891)<<x2892));

	if (t28 != 11) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x2909 = 30461827977027657LL;
	static int64_t x2911 = INT64_MIN;
	int64_t t29 = -794383399LL;

	t29 = (x2909<<((x2910/x2911)<<x2912));

	if (t29 != 30461827977027657LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x3129 = UINT32_MAX;
	int32_t x3130 = 484;
	uint8_t x3132 = 0U;
	static uint32_t t30 = UINT32_MAX;

	t30 = (x3129<<((x3130/x3131)<<x3132));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x3141 = UINT64_MAX;
	int64_t x3142 = 25899418LL;
	int64_t x3143 = -43286874341209LL;
	uint64_t t31 = UINT64_MAX;

	t31 = (x3141<<((x3142/x3143)<<x3144));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x3253 = 298045243U;
	int8_t x3254 = INT8_MIN;
	int64_t x3255 = 538394932770LL;
	uint32_t t32 = 8U;

	t32 = (x3253<<((x3254/x3255)<<x3256));

	if (t32 != 298045243U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x3284 = 0LL;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x3281<<((x3282/x3283)<<x3284));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x3437 = 1586225636867756LLU;
	int32_t x3438 = -57257;
	volatile int64_t x3439 = INT64_MIN;
	static uint64_t t34 = 1086LLU;

	t34 = (x3437<<((x3438/x3439)<<x3440));

	if (t34 != 1586225636867756LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x3453 = UINT16_MAX;
	int8_t x3454 = INT8_MIN;
	volatile uint16_t x3456 = 0U;
	static int32_t t35 = 53666;

	t35 = (x3453<<((x3454/x3455)<<x3456));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3469 = 26146LLU;
	int8_t x3470 = 38;
	int8_t x3471 = 3;
	int8_t x3472 = 1;
	uint64_t t36 = 2LLU;

	t36 = (x3469<<((x3470/x3471)<<x3472));

	if (t36 != 438657089536LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x3482 = -1;
	static volatile int8_t x3484 = 30;

	t37 = (x3481<<((x3482/x3483)<<x3484));

	if (t37 != 1285395) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x3525 = 115U;
	volatile uint32_t x3526 = 4322415U;
	int8_t x3527 = INT8_MIN;
	uint16_t x3528 = 9U;
	int32_t t38 = 832599;

	t38 = (x3525<<((x3526/x3527)<<x3528));

	if (t38 != 115) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3625 = 943078391822LLU;
	static int32_t x3627 = INT32_MIN;
	static uint64_t t39 = 1543274762LLU;

	t39 = (x3625<<((x3626/x3627)<<x3628));

	if (t39 != 943078391822LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3677 = 102U;
	volatile int64_t x3679 = INT64_MIN;
	volatile uint16_t x3680 = 8U;
	static volatile int32_t t40 = -290511;

	t40 = (x3677<<((x3678/x3679)<<x3680));

	if (t40 != 102) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x3733 = 7U;
	uint8_t x3734 = 7U;
	uint16_t x3735 = UINT16_MAX;
	int16_t x3736 = 3;
	int32_t t41 = 352;

	t41 = (x3733<<((x3734/x3735)<<x3736));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3865 = UINT64_MAX;
	uint8_t x3866 = 1U;
	static int32_t x3867 = -1264;
	int64_t x3868 = 22LL;
	uint64_t t42 = UINT64_MAX;

	t42 = (x3865<<((x3866/x3867)<<x3868));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3973 = 1659378935U;
	int16_t x3974 = -4;
	int8_t x3975 = 27;
	uint8_t x3976 = 3U;
	uint32_t t43 = 92U;

	t43 = (x3973<<((x3974/x3975)<<x3976));

	if (t43 != 1659378935U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x4209 = INT16_MAX;
	int8_t x4210 = -4;
	int32_t x4211 = -1;
	uint8_t x4212 = 0U;
	volatile int32_t t44 = -723514572;

	t44 = (x4209<<((x4210/x4211)<<x4212));

	if (t44 != 524272) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x4214 = 2058;
	int32_t x4215 = INT32_MAX;
	int64_t t45 = INT64_MAX;

	t45 = (x4213<<((x4214/x4215)<<x4216));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x4265 = UINT16_MAX;
	volatile uint64_t x4266 = 784LLU;
	volatile int16_t x4267 = INT16_MIN;
	volatile int64_t x4268 = 1LL;

	t46 = (x4265<<((x4266/x4267)<<x4268));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t t47 = INT64_MAX;

	t47 = (x4309<<((x4310/x4311)<<x4312));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x4361 = 46;
	volatile uint8_t x4362 = 9U;
	uint16_t x4364 = 1U;
	volatile int32_t t48 = 764098;

	t48 = (x4361<<((x4362/x4363)<<x4364));

	if (t48 != 46) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x4533 = INT64_MAX;
	static int16_t x4534 = 35;
	volatile uint64_t x4535 = 380341214LLU;
	static uint16_t x4536 = 5U;

	t49 = (x4533<<((x4534/x4535)<<x4536));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x4542 = INT32_MIN;
	volatile int64_t x4543 = INT64_MAX;
	volatile uint16_t x4544 = 10U;
	volatile int32_t t50 = -1;

	t50 = (x4541<<((x4542/x4543)<<x4544));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4665 = INT8_MAX;
	int64_t x4667 = INT64_MIN;
	int16_t x4668 = 20;

	t51 = (x4665<<((x4666/x4667)<<x4668));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x4669 = 932863047834052845LLU;
	static int64_t x4671 = INT64_MIN;
	static uint8_t x4672 = 1U;
	volatile uint64_t t52 = 50529070851304LLU;

	t52 = (x4669<<((x4670/x4671)<<x4672));

	if (t52 != 932863047834052845LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4701 = 1U;
	uint16_t x4702 = 409U;
	uint16_t x4703 = 154U;
	volatile int32_t t53 = -438786;

	t53 = (x4701<<((x4702/x4703)<<x4704));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4789 = 8U;
	int64_t x4791 = INT64_MIN;
	uint8_t x4792 = 7U;
	int32_t t54 = 254780;

	t54 = (x4789<<((x4790/x4791)<<x4792));

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x4810 = 0;
	static int32_t x4811 = INT32_MIN;
	int8_t x4812 = 0;

	t55 = (x4809<<((x4810/x4811)<<x4812));

	if (t55 != 45) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4829 = 1539U;
	int32_t x4831 = 116133;
	int8_t x4832 = 14;
	int32_t t56 = 124108;

	t56 = (x4829<<((x4830/x4831)<<x4832));

	if (t56 != 1539) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x5081 = 20087U;
	static uint8_t x5082 = 17U;
	static int16_t x5084 = 0;

	t57 = (x5081<<((x5082/x5083)<<x5084));

	if (t57 != 20087) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x5113 = 641761708;
	static int32_t x5114 = -1;
	static volatile uint8_t x5115 = 29U;
	uint32_t x5116 = 3U;
	volatile int32_t t58 = -3;

	t58 = (x5113<<((x5114/x5115)<<x5116));

	if (t58 != 641761708) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x5153 = 63LLU;
	uint16_t x5154 = 0U;
	int32_t x5155 = INT32_MIN;
	int8_t x5156 = 1;
	uint64_t t59 = 31LLU;

	t59 = (x5153<<((x5154/x5155)<<x5156));

	if (t59 != 63LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x5225 = 60U;
	volatile uint32_t x5228 = 0U;
	int32_t t60 = -16191;

	t60 = (x5225<<((x5226/x5227)<<x5228));

	if (t60 != 1006632960) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x5285 = 88U;
	uint16_t x5286 = 10636U;
	int16_t x5287 = -11138;
	volatile uint16_t x5288 = 30U;
	volatile uint32_t t61 = 51968517U;

	t61 = (x5285<<((x5286/x5287)<<x5288));

	if (t61 != 88U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x5297 = 14561134LLU;
	int8_t x5299 = INT8_MIN;
	volatile uint64_t t62 = 13317044463LLU;

	t62 = (x5297<<((x5298/x5299)<<x5300));

	if (t62 != 29122268LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x5323 = INT64_MIN;
	uint8_t x5324 = 14U;

	t63 = (x5321<<((x5322/x5323)<<x5324));

	if (t63 != 15) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x5649 = UINT8_MAX;
	int16_t x5651 = INT16_MIN;
	volatile int8_t x5652 = 3;
	int32_t t64 = 439611;

	t64 = (x5649<<((x5650/x5651)<<x5652));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x5733 = 31;
	int16_t x5734 = INT16_MIN;
	volatile uint16_t x5735 = UINT16_MAX;
	volatile uint16_t x5736 = 2U;
	int32_t t65 = -9;

	t65 = (x5733<<((x5734/x5735)<<x5736));

	if (t65 != 31) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x6033 = UINT64_MAX;
	volatile int16_t x6034 = -16;
	volatile int32_t x6036 = 1;

	t66 = (x6033<<((x6034/x6035)<<x6036));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x6089 = UINT16_MAX;
	uint64_t x6090 = 926733707292415689LLU;
	int8_t x6091 = INT8_MIN;
	int32_t t67 = -138715;

	t67 = (x6089<<((x6090/x6091)<<x6092));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x6401 = UINT16_MAX;
	static volatile int32_t x6402 = -22937200;
	static uint32_t x6403 = UINT32_MAX;
	uint16_t x6404 = 1U;
	int32_t t68 = 1370810;

	t68 = (x6401<<((x6402/x6403)<<x6404));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x6629 = 28;
	static int16_t x6630 = -245;
	static volatile int64_t x6631 = INT64_MIN;
	int32_t x6632 = 9;
	volatile int32_t t69 = -106464;

	t69 = (x6629<<((x6630/x6631)<<x6632));

	if (t69 != 28) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x6786 = 7525LLU;
	volatile uint64_t x6787 = 1372152314980180802LLU;
	uint32_t x6788 = 8U;
	volatile int32_t t70 = 29846207;

	t70 = (x6785<<((x6786/x6787)<<x6788));

	if (t70 != 13) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x6837 = 20067932354LLU;
	volatile int8_t x6838 = -1;
	uint16_t x6840 = 23U;
	static volatile uint64_t t71 = 746100LLU;

	t71 = (x6837<<((x6838/x6839)<<x6840));

	if (t71 != 20067932354LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x6878 = INT16_MIN;
	volatile int64_t x6879 = INT64_MAX;
	int32_t x6880 = 0;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x6877<<((x6878/x6879)<<x6880));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}

