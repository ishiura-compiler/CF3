#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t2 = 955712339715107406LL;
int64_t x546 = -1LL;
uint8_t x548 = 2U;
static volatile int16_t x717 = -94;
volatile uint8_t x719 = 1U;
uint16_t x720 = 3U;
volatile int32_t t5 = -49729991;
int8_t x739 = 0;
int32_t x740 = 6;
int16_t x766 = -1;
int64_t x768 = 1LL;
int8_t x800 = 1;
int32_t t8 = 1;
int32_t x992 = 17;
volatile int32_t t9 = 6448;
int32_t t11 = 46;
int8_t x1113 = INT8_MIN;
int16_t x1146 = -1;
static uint16_t x1147 = 88U;
volatile int8_t x1181 = INT8_MAX;
int64_t x1183 = INT64_MAX;
int32_t x1290 = -1;
volatile int64_t t17 = 256760LL;
static int32_t x1417 = 4529;
static uint16_t x1811 = 22272U;
int32_t t22 = 490330853;
volatile uint8_t x2100 = 1U;
volatile int64_t x2103 = 1613289044271LL;
uint32_t x2381 = 444U;
uint16_t x2388 = 29U;
volatile uint64_t x2585 = 7055292328490973LLU;
static volatile int8_t x2608 = 0;
volatile int8_t x2702 = -3;
int16_t x2722 = 0;
static volatile int32_t t33 = -32219;
static volatile int32_t t34 = 9367;
volatile uint64_t x3042 = 1LLU;
uint32_t x3043 = UINT32_MAX;
volatile int32_t t35 = 0;
int16_t x3066 = 413;
static int16_t x3068 = 1;
uint8_t x3256 = 3U;
int64_t t39 = -15505LL;
int32_t t40 = 5739;
int16_t x3458 = -1;
uint64_t x3460 = 2LLU;
volatile int32_t t41 = -111345656;
uint64_t x3504 = 21LLU;
static int32_t t43 = -929;
volatile int16_t x3670 = -1;
static int64_t t44 = 31880156511LL;
volatile uint8_t x3784 = 0U;
int8_t x3907 = INT8_MAX;
volatile int64_t x3965 = INT64_MAX;
int16_t x3966 = INT16_MIN;
volatile uint32_t x3967 = UINT32_MAX;
volatile int32_t t49 = 10508709;
int32_t t50 = 673;
volatile int64_t x4422 = INT64_MIN;
static uint32_t x4424 = 0U;
int32_t t52 = -115512631;
int16_t x4865 = -1;
int64_t x5233 = -777LL;
volatile int64_t t54 = -928LL;
volatile int32_t x5438 = INT32_MAX;
volatile uint64_t t55 = 3LLU;
static int8_t x5519 = 2;
static uint32_t x5714 = 65U;
int8_t x5716 = 0;
static int32_t t59 = 0;
int64_t x6061 = -1LL;
uint32_t x6063 = 3932U;
int32_t x6149 = -7938;
int32_t x6150 = INT32_MIN;
uint8_t x6191 = UINT8_MAX;
volatile int16_t x6192 = 0;
uint16_t x6234 = UINT16_MAX;
uint8_t x6392 = 0U;


void f0(void) {
	volatile int32_t x217 = INT32_MIN;
	int8_t x218 = -9;
	volatile int16_t x219 = 416;
	static uint16_t x220 = 0U;
	int32_t t0 = -8823183;

	t0 = (x217%(x218<=(x219>>x220)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	uint8_t x391 = 0U;
	uint16_t x392 = 16U;
	int32_t t1 = 22279;

	t1 = (x389%(x390<=(x391>>x392)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x541 = -11374201854246140LL;
	int32_t x542 = INT32_MIN;
	volatile uint64_t x543 = UINT64_MAX;
	uint16_t x544 = 0U;

	t2 = (x541%(x542<=(x543>>x544)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x545 = -1LL;
	static uint32_t x547 = 2463179U;
	int64_t t3 = 77140470902659905LL;

	t3 = (x545%(x546<=(x547>>x548)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MIN;
	volatile uint8_t x683 = 3U;
	int16_t x684 = 8;
	volatile int32_t t4 = 4321624;

	t4 = (x681%(x682<=(x683>>x684)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x718 = -28809;

	t5 = (x717%(x718<=(x719>>x720)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x737 = INT64_MIN;
	int8_t x738 = -1;
	volatile int64_t t6 = 108585321320532LL;

	t6 = (x737%(x738<=(x739>>x740)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x765 = 11U;
	volatile uint8_t x767 = 95U;
	uint32_t t7 = 2121105U;

	t7 = (x765%(x766<=(x767>>x768)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x797 = -1;
	uint8_t x798 = 12U;
	uint32_t x799 = 18665U;

	t8 = (x797%(x798<=(x799>>x800)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x989 = UINT16_MAX;
	static int64_t x990 = -4809515917LL;
	static uint32_t x991 = 1U;

	t9 = (x989%(x990<=(x991>>x992)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1045 = INT32_MIN;
	int32_t x1046 = -1;
	int32_t x1047 = INT32_MAX;
	uint8_t x1048 = 31U;
	volatile int32_t t10 = 0;

	t10 = (x1045%(x1046<=(x1047>>x1048)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1049 = INT8_MIN;
	int64_t x1050 = -1LL;
	volatile uint16_t x1051 = UINT16_MAX;
	int16_t x1052 = 1;

	t11 = (x1049%(x1050<=(x1051>>x1052)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x1114 = INT8_MIN;
	volatile uint8_t x1115 = 8U;
	volatile uint32_t x1116 = 3U;
	volatile int32_t t12 = -96925;

	t12 = (x1113%(x1114<=(x1115>>x1116)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1141 = INT32_MIN;
	int8_t x1142 = INT8_MAX;
	int64_t x1143 = INT64_MAX;
	uint16_t x1144 = 15U;
	int32_t t13 = 55115;

	t13 = (x1141%(x1142<=(x1143>>x1144)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1145 = INT8_MIN;
	uint8_t x1148 = 1U;
	volatile int32_t t14 = 354768;

	t14 = (x1145%(x1146<=(x1147>>x1148)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1182 = INT8_MAX;
	uint8_t x1184 = 8U;
	static int32_t t15 = 280779282;

	t15 = (x1181%(x1182<=(x1183>>x1184)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1217 = UINT8_MAX;
	static int32_t x1218 = 3238;
	uint64_t x1219 = 8196355274082539LLU;
	uint8_t x1220 = 9U;
	int32_t t16 = -121328;

	t16 = (x1217%(x1218<=(x1219>>x1220)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1289 = INT64_MIN;
	int64_t x1291 = INT64_MAX;
	static uint8_t x1292 = 3U;

	t17 = (x1289%(x1290<=(x1291>>x1292)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1353 = -1;
	static int16_t x1354 = INT16_MIN;
	static volatile int64_t x1355 = 3LL;
	volatile int32_t x1356 = 1;
	int32_t t18 = 1;

	t18 = (x1353%(x1354<=(x1355>>x1356)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1418 = 2U;
	int16_t x1419 = 30;
	int16_t x1420 = 0;
	int32_t t19 = 3135794;

	t19 = (x1417%(x1418<=(x1419>>x1420)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1457 = -1;
	static int8_t x1458 = -1;
	volatile uint16_t x1459 = 11166U;
	uint8_t x1460 = 17U;
	int32_t t20 = -891777;

	t20 = (x1457%(x1458<=(x1459>>x1460)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1809 = INT8_MIN;
	int64_t x1810 = INT64_MIN;
	int8_t x1812 = 21;
	int32_t t21 = -9;

	t21 = (x1809%(x1810<=(x1811>>x1812)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1861 = -13004;
	uint32_t x1862 = 1U;
	volatile int64_t x1863 = 22241LL;
	int8_t x1864 = 0;

	t22 = (x1861%(x1862<=(x1863>>x1864)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x2017 = -1;
	int16_t x2018 = -793;
	volatile uint16_t x2019 = 999U;
	volatile uint16_t x2020 = 30U;
	volatile int32_t t23 = -35882;

	t23 = (x2017%(x2018<=(x2019>>x2020)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x2097 = 22U;
	volatile int8_t x2098 = 60;
	int16_t x2099 = INT16_MAX;
	volatile uint32_t t24 = 1239097076U;

	t24 = (x2097%(x2098<=(x2099>>x2100)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2101 = 6617U;
	uint16_t x2102 = 5322U;
	uint8_t x2104 = 0U;
	uint32_t t25 = 2028750U;

	t25 = (x2101%(x2102<=(x2103>>x2104)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2117 = -1LL;
	static int16_t x2118 = -3;
	uint8_t x2119 = 32U;
	uint8_t x2120 = 20U;
	volatile int64_t t26 = -32391334LL;

	t26 = (x2117%(x2118<=(x2119>>x2120)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2382 = INT8_MIN;
	int32_t x2383 = 261487521;
	uint8_t x2384 = 6U;
	volatile uint32_t t27 = 17234U;

	t27 = (x2381%(x2382<=(x2383>>x2384)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x2385 = 247U;
	static int8_t x2386 = INT8_MIN;
	volatile uint8_t x2387 = 5U;
	int32_t t28 = -1149;

	t28 = (x2385%(x2386<=(x2387>>x2388)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x2473 = 25;
	int8_t x2474 = -6;
	static int8_t x2475 = 1;
	static uint8_t x2476 = 16U;
	volatile int32_t t29 = 863;

	t29 = (x2473%(x2474<=(x2475>>x2476)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x2586 = -796774LL;
	volatile uint8_t x2587 = UINT8_MAX;
	int8_t x2588 = 1;
	volatile uint64_t t30 = 60LLU;

	t30 = (x2585%(x2586<=(x2587>>x2588)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x2605 = 4149;
	volatile uint16_t x2606 = 0U;
	static uint32_t x2607 = 1U;
	static volatile int32_t t31 = -1664281;

	t31 = (x2605%(x2606<=(x2607>>x2608)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2701 = 4077;
	volatile uint16_t x2703 = UINT16_MAX;
	uint8_t x2704 = 22U;
	static volatile int32_t t32 = 6287200;

	t32 = (x2701%(x2702<=(x2703>>x2704)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x2721 = INT16_MAX;
	uint8_t x2723 = 81U;
	volatile uint8_t x2724 = 7U;

	t33 = (x2721%(x2722<=(x2723>>x2724)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2801 = -1;
	uint8_t x2802 = 24U;
	uint16_t x2803 = UINT16_MAX;
	static int8_t x2804 = 6;

	t34 = (x2801%(x2802<=(x2803>>x2804)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x3041 = 0;
	uint16_t x3044 = 26U;

	t35 = (x3041%(x3042<=(x3043>>x3044)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x3065 = INT32_MAX;
	int32_t x3067 = INT32_MAX;
	volatile int32_t t36 = -353359;

	t36 = (x3065%(x3066<=(x3067>>x3068)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x3229 = INT8_MIN;
	static int8_t x3230 = 2;
	int64_t x3231 = INT64_MAX;
	uint16_t x3232 = 10U;
	static int32_t t37 = -133096123;

	t37 = (x3229%(x3230<=(x3231>>x3232)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3253 = INT16_MIN;
	int8_t x3254 = INT8_MAX;
	static uint16_t x3255 = UINT16_MAX;
	int32_t t38 = -1489429;

	t38 = (x3253%(x3254<=(x3255>>x3256)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x3337 = 50LL;
	volatile uint16_t x3338 = 6431U;
	uint64_t x3339 = 122954127216LLU;
	uint8_t x3340 = 1U;

	t39 = (x3337%(x3338<=(x3339>>x3340)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x3341 = 23705U;
	int64_t x3342 = INT64_MIN;
	uint16_t x3343 = 3247U;
	volatile uint64_t x3344 = 1LLU;

	t40 = (x3341%(x3342<=(x3343>>x3344)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x3457 = 11U;
	int16_t x3459 = 488;

	t41 = (x3457%(x3458<=(x3459>>x3460)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x3501 = 17400315980246769LLU;
	uint16_t x3502 = 0U;
	volatile int8_t x3503 = INT8_MAX;
	volatile uint64_t t42 = 2058048078575917447LLU;

	t42 = (x3501%(x3502<=(x3503>>x3504)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3517 = 5653;
	static uint8_t x3518 = 0U;
	static uint64_t x3519 = 35242843799677561LLU;
	volatile uint8_t x3520 = 3U;

	t43 = (x3517%(x3518<=(x3519>>x3520)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3669 = INT64_MAX;
	volatile int8_t x3671 = INT8_MAX;
	volatile uint8_t x3672 = 3U;

	t44 = (x3669%(x3670<=(x3671>>x3672)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3685 = -62763LL;
	volatile int8_t x3686 = 30;
	uint64_t x3687 = 7910916680LLU;
	uint8_t x3688 = 14U;
	volatile int64_t t45 = -250LL;

	t45 = (x3685%(x3686<=(x3687>>x3688)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3781 = -1;
	int16_t x3782 = INT16_MAX;
	static int64_t x3783 = INT64_MAX;
	int32_t t46 = -5676006;

	t46 = (x3781%(x3782<=(x3783>>x3784)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3905 = 136LL;
	int32_t x3906 = -25;
	int16_t x3908 = 1;
	volatile int64_t t47 = 61668710038824711LL;

	t47 = (x3905%(x3906<=(x3907>>x3908)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3968 = 0U;
	int64_t t48 = 8830952259LL;

	t48 = (x3965%(x3966<=(x3967>>x3968)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x4109 = UINT8_MAX;
	static int16_t x4110 = INT16_MAX;
	uint32_t x4111 = UINT32_MAX;
	uint8_t x4112 = 2U;

	t49 = (x4109%(x4110<=(x4111>>x4112)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x4405 = -1;
	volatile int32_t x4406 = -435;
	static uint64_t x4407 = UINT64_MAX;
	uint16_t x4408 = 0U;

	t50 = (x4405%(x4406<=(x4407>>x4408)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x4421 = UINT16_MAX;
	uint32_t x4423 = UINT32_MAX;
	volatile int32_t t51 = 1;

	t51 = (x4421%(x4422<=(x4423>>x4424)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x4825 = 1;
	static volatile int64_t x4826 = INT64_MIN;
	int64_t x4827 = INT64_MAX;
	static volatile uint8_t x4828 = 20U;

	t52 = (x4825%(x4826<=(x4827>>x4828)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x4866 = INT32_MIN;
	int32_t x4867 = 818586395;
	volatile uint16_t x4868 = 11U;
	int32_t t53 = -13080614;

	t53 = (x4865%(x4866<=(x4867>>x4868)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x5234 = INT16_MAX;
	uint32_t x5235 = 1773364446U;
	int8_t x5236 = 1;

	t54 = (x5233%(x5234<=(x5235>>x5236)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x5437 = 209602030LLU;
	static int64_t x5439 = INT64_MAX;
	int16_t x5440 = 3;

	t55 = (x5437%(x5438<=(x5439>>x5440)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x5465 = 64041219U;
	int32_t x5466 = INT32_MIN;
	static int8_t x5467 = 0;
	static uint8_t x5468 = 13U;
	uint32_t t56 = 2080313U;

	t56 = (x5465%(x5466<=(x5467>>x5468)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x5517 = INT8_MAX;
	int64_t x5518 = -1LL;
	int8_t x5520 = 0;
	static int32_t t57 = 365;

	t57 = (x5517%(x5518<=(x5519>>x5520)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x5713 = INT32_MAX;
	uint64_t x5715 = UINT64_MAX;
	static int32_t t58 = 178775837;

	t58 = (x5713%(x5714<=(x5715>>x5716)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x5729 = 1U;
	int64_t x5730 = -367561684422852789LL;
	uint32_t x5731 = 6623652U;
	static uint32_t x5732 = 4U;

	t59 = (x5729%(x5730<=(x5731>>x5732)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x6029 = -1;
	static uint8_t x6030 = 0U;
	uint32_t x6031 = 1184048171U;
	volatile uint8_t x6032 = 2U;
	volatile int32_t t60 = -70;

	t60 = (x6029%(x6030<=(x6031>>x6032)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x6062 = INT64_MIN;
	volatile int16_t x6064 = 0;
	int64_t t61 = 3510195919225LL;

	t61 = (x6061%(x6062<=(x6063>>x6064)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x6085 = -1;
	volatile uint16_t x6086 = 30U;
	static uint16_t x6087 = UINT16_MAX;
	int8_t x6088 = 2;
	int32_t t62 = -27850543;

	t62 = (x6085%(x6086<=(x6087>>x6088)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x6151 = 56U;
	int8_t x6152 = 2;
	int32_t t63 = 1401539;

	t63 = (x6149%(x6150<=(x6151>>x6152)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x6189 = 37594073;
	volatile int8_t x6190 = INT8_MIN;
	static int32_t t64 = -64106;

	t64 = (x6189%(x6190<=(x6191>>x6192)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x6233 = -121454059282048LL;
	volatile uint64_t x6235 = 11537120116039505LLU;
	uint8_t x6236 = 0U;
	int64_t t65 = 4LL;

	t65 = (x6233%(x6234<=(x6235>>x6236)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x6389 = 11573U;
	volatile uint16_t x6390 = 23U;
	uint32_t x6391 = 2530699U;
	static uint32_t t66 = 16U;

	t66 = (x6389%(x6390<=(x6391>>x6392)));

	if (t66 != 0U) { NG(); } else { ; }
	
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


    return 0;
}

