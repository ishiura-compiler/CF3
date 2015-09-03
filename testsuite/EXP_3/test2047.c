#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x228 = -1;
volatile uint32_t t1 = 472U;
int16_t x456 = -1;
uint32_t x599 = 15U;
uint8_t x649 = 1U;
volatile int32_t t5 = -108658;
int16_t x864 = -1;
volatile int32_t x1139 = -1;
static uint16_t x1234 = 1U;
volatile int8_t x1338 = -1;
uint8_t x1377 = 3U;
int8_t x1378 = INT8_MIN;
static int8_t x1379 = -1;
static int8_t x1717 = INT8_MIN;
uint32_t x1719 = 25U;
int32_t x1720 = 1;
volatile int32_t t17 = 61;
uint64_t x1824 = UINT64_MAX;
int32_t t18 = 6235;
volatile int32_t t19 = 2;
uint32_t x2266 = UINT32_MAX;
static volatile int32_t x2620 = 1;
uint16_t x2854 = UINT16_MAX;
int64_t x2864 = INT64_MIN;
volatile uint32_t t25 = 920004U;
int32_t x2949 = 39338;
volatile int16_t x2951 = INT16_MAX;
volatile int32_t t26 = 538142477;
static int32_t x2978 = -1;
int64_t x2980 = INT64_MIN;
int16_t x3583 = -4;
int8_t x3623 = -42;
int32_t x3624 = -1;
int8_t x3638 = -1;
int32_t x3639 = -1;
static uint64_t x3655 = UINT64_MAX;
static volatile int64_t t34 = -18588LL;
static volatile uint64_t x3733 = 876LLU;
uint16_t x3734 = 0U;
static int8_t x3735 = -44;
int32_t x3867 = INT32_MAX;
int32_t x3868 = INT32_MAX;
volatile int16_t x4214 = -2095;
int8_t x4277 = -1;
volatile int64_t x4280 = INT64_MIN;
volatile int32_t t44 = INT32_MAX;
uint32_t x4300 = 11U;
int8_t x4308 = -51;
int64_t x5229 = -1LL;
static volatile int32_t x5230 = INT32_MIN;
static int8_t x5277 = INT8_MIN;
uint32_t t50 = 42U;
uint8_t x5393 = 56U;
static volatile int32_t t53 = -384;
int32_t x5752 = 212;
int32_t x5912 = -1;
volatile int64_t t55 = 19136LL;
int8_t x5971 = -1;
volatile uint64_t t58 = 6219212507558LLU;
volatile int8_t x6154 = 1;
uint16_t x6155 = UINT16_MAX;
uint32_t x6165 = UINT32_MAX;
uint16_t x6167 = 7U;
volatile uint32_t t60 = 4047034U;
static int64_t t61 = -1910365521066LL;
uint64_t x6275 = UINT64_MAX;
int16_t x6430 = 0;
volatile int8_t x6432 = INT8_MIN;
uint32_t x6437 = 78101U;
static volatile int32_t t66 = 16995154;
static int8_t x6608 = -3;
int8_t x7198 = INT8_MIN;
static int64_t x7199 = -1LL;
int64_t x7200 = -1LL;
int8_t x7315 = -1;
uint16_t x8035 = UINT16_MAX;
uint16_t x8045 = 24U;
uint32_t x8131 = UINT32_MAX;
volatile uint32_t t81 = 20606557U;
int32_t x8358 = INT32_MIN;
volatile int16_t x8483 = -1;
int8_t x8484 = -11;
uint8_t x8693 = UINT8_MAX;
uint32_t x8694 = UINT32_MAX;
int32_t x8757 = -4089;
int64_t x8839 = INT64_MAX;
volatile uint64_t t90 = 4278904320686LLU;
int8_t x9309 = -1;
volatile int64_t x9312 = -1LL;
int64_t t93 = INT64_MAX;
int32_t x9601 = 0;
volatile uint32_t t95 = 12U;
static volatile int32_t x9657 = INT32_MIN;
int8_t x9831 = INT8_MIN;


void f0(void) {
	int64_t x77 = -1LL;
	static int8_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = -1;
	static int64_t t0 = 110953592221265204LL;

	t0 = ((x77-x78)<<(x79^x80));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x225 = 10028420U;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = -1;

	t1 = ((x225-x226)<<(x227^x228));

	if (t1 != 10028548U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x437 = 5LLU;
	int16_t x438 = INT16_MIN;
	int8_t x439 = -35;
	int16_t x440 = -1;
	uint64_t t2 = 30325437LLU;

	t2 = ((x437-x438)<<(x439^x440));

	if (t2 != 563035852767232LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x453 = 3;
	static volatile uint64_t x454 = UINT64_MAX;
	uint64_t x455 = UINT64_MAX;
	static uint64_t t3 = 21575672795LLU;

	t3 = ((x453-x454)<<(x455^x456));

	if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x597 = UINT64_MAX;
	static volatile int32_t x598 = 66236977;
	uint16_t x600 = 37U;
	volatile uint64_t t4 = 6488725070736999LLU;

	t4 = ((x597-x598)<<(x599^x600));

	if (t4 != 3834595180380422144LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x650 = INT8_MIN;
	uint64_t x651 = UINT64_MAX;
	uint64_t x652 = UINT64_MAX;

	t5 = ((x649-x650)<<(x651^x652));

	if (t5 != 129) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x737 = INT8_MIN;
	static uint32_t x738 = 27752U;
	uint32_t x739 = UINT32_MAX;
	int8_t x740 = -1;
	static volatile uint32_t t6 = 1947U;

	t6 = ((x737-x738)<<(x739^x740));

	if (t6 != 4294939416U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x789 = -1867;
	static int32_t x790 = -6466091;
	uint8_t x791 = 0U;
	int16_t x792 = 0;
	int32_t t7 = -515960514;

	t7 = ((x789-x790)<<(x791^x792));

	if (t7 != 6464224) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x861 = 530U;
	static int64_t x862 = -204LL;
	int64_t x863 = -1LL;
	static int64_t t8 = 7149178969247569LL;

	t8 = ((x861-x862)<<(x863^x864));

	if (t8 != 734LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x945 = UINT32_MAX;
	int32_t x946 = INT32_MIN;
	static int16_t x947 = 233;
	volatile uint8_t x948 = UINT8_MAX;
	volatile uint32_t t9 = 76U;

	t9 = ((x945-x946)<<(x947^x948));

	if (t9 != 4290772992U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x1137 = UINT16_MAX;
	int32_t x1138 = -1;
	volatile uint64_t x1140 = UINT64_MAX;
	int32_t t10 = 108041;

	t10 = ((x1137-x1138)<<(x1139^x1140));

	if (t10 != 65536) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1233 = UINT8_MAX;
	int32_t x1235 = INT32_MIN;
	int32_t x1236 = INT32_MIN;
	volatile int32_t t11 = 42444951;

	t11 = ((x1233-x1234)<<(x1235^x1236));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1337 = -1;
	uint16_t x1339 = UINT16_MAX;
	volatile uint16_t x1340 = UINT16_MAX;
	int32_t t12 = 7;

	t12 = ((x1337-x1338)<<(x1339^x1340));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x1380 = -19;
	volatile int32_t t13 = 162;

	t13 = ((x1377-x1378)<<(x1379^x1380));

	if (t13 != 34340864) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1381 = -1;
	int32_t x1382 = -1;
	static uint8_t x1383 = UINT8_MAX;
	static uint8_t x1384 = UINT8_MAX;
	static int32_t t14 = -5323;

	t14 = ((x1381-x1382)<<(x1383^x1384));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1573 = 54198LL;
	volatile int32_t x1574 = INT32_MIN;
	int32_t x1575 = 1;
	uint64_t x1576 = 5LLU;
	static volatile int64_t t15 = 318822LL;

	t15 = ((x1573-x1574)<<(x1575^x1576));

	if (t15 != 34360605536LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1669 = 0U;
	int32_t x1670 = INT32_MIN;
	uint8_t x1671 = 5U;
	int16_t x1672 = 1;
	uint32_t t16 = 5946U;

	t16 = ((x1669-x1670)<<(x1671^x1672));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1718 = INT8_MIN;

	t17 = ((x1717-x1718)<<(x1719^x1720));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1821 = -1;
	int8_t x1822 = -26;
	volatile int16_t x1823 = -1;

	t18 = ((x1821-x1822)<<(x1823^x1824));

	if (t18 != 25) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1945 = INT16_MAX;
	static int16_t x1946 = INT16_MIN;
	volatile int16_t x1947 = -1;
	int16_t x1948 = -1;

	t19 = ((x1945-x1946)<<(x1947^x1948));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x2193 = 1206814062550LL;
	int32_t x2194 = 25771816;
	static int8_t x2195 = -1;
	volatile int64_t x2196 = -1LL;
	int64_t t20 = -72LL;

	t20 = ((x2193-x2194)<<(x2195^x2196));

	if (t20 != 1206788290734LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x2265 = UINT64_MAX;
	uint8_t x2267 = 27U;
	uint8_t x2268 = 1U;
	uint64_t t21 = 112614LLU;

	t21 = ((x2265-x2266)<<(x2267^x2268));

	if (t21 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x2585 = 8141U;
	int8_t x2586 = -3;
	uint8_t x2587 = 3U;
	uint16_t x2588 = 3U;
	static volatile uint32_t t22 = 373363384U;

	t22 = ((x2585-x2586)<<(x2587^x2588));

	if (t22 != 8144U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x2617 = 0LLU;
	uint32_t x2618 = 385U;
	static uint32_t x2619 = 11U;
	volatile uint64_t t23 = 52100LLU;

	t23 = ((x2617-x2618)<<(x2619^x2620));

	if (t23 != 18446744073709157376LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x2853 = 40460836U;
	int64_t x2855 = -1LL;
	static int16_t x2856 = -1;
	uint32_t t24 = 358U;

	t24 = ((x2853-x2854)<<(x2855^x2856));

	if (t24 != 40395301U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x2861 = -1;
	uint32_t x2862 = UINT32_MAX;
	int64_t x2863 = INT64_MIN;

	t25 = ((x2861-x2862)<<(x2863^x2864));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2950 = 12657U;
	static int16_t x2952 = INT16_MAX;

	t26 = ((x2949-x2950)<<(x2951^x2952));

	if (t26 != 26681) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x2977 = UINT16_MAX;
	int64_t x2979 = INT64_MIN;
	static int32_t t27 = -2050319;

	t27 = ((x2977-x2978)<<(x2979^x2980));

	if (t27 != 65536) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x3173 = 108LLU;
	int64_t x3174 = INT64_MIN;
	int64_t x3175 = -1LL;
	static int64_t x3176 = -9LL;
	uint64_t t28 = 63327251532823LLU;

	t28 = ((x3173-x3174)<<(x3175^x3176));

	if (t28 != 27648LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x3549 = -1;
	int64_t x3550 = INT64_MIN;
	int64_t x3551 = INT64_MIN;
	int64_t x3552 = INT64_MIN;
	int64_t t29 = INT64_MAX;

	t29 = ((x3549-x3550)<<(x3551^x3552));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x3581 = 28LLU;
	int64_t x3582 = INT64_MAX;
	int8_t x3584 = -6;
	static volatile uint64_t t30 = 0LLU;

	t30 = ((x3581-x3582)<<(x3583^x3584));

	if (t30 != 1856LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x3585 = INT8_MAX;
	static int16_t x3586 = -1017;
	int8_t x3587 = INT8_MIN;
	int8_t x3588 = INT8_MIN;
	int32_t t31 = 53874427;

	t31 = ((x3585-x3586)<<(x3587^x3588));

	if (t31 != 1144) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x3621 = 4;
	uint64_t x3622 = 18LLU;
	uint64_t t32 = 134147470LLU;

	t32 = ((x3621-x3622)<<(x3623^x3624));

	if (t32 != 18446713287383973888LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x3637 = -1;
	int16_t x3640 = -1;
	volatile int32_t t33 = 8;

	t33 = ((x3637-x3638)<<(x3639^x3640));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x3653 = 67U;
	int64_t x3654 = -1LL;
	static volatile int8_t x3656 = -1;

	t34 = ((x3653-x3654)<<(x3655^x3656));

	if (t34 != 68LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x3681 = -2575;
	volatile uint32_t x3682 = 168U;
	int8_t x3683 = -1;
	volatile int32_t x3684 = -1;
	volatile uint32_t t35 = 1U;

	t35 = ((x3681-x3682)<<(x3683^x3684));

	if (t35 != 4294964553U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x3705 = 70U;
	uint32_t x3706 = 3910845U;
	int8_t x3707 = INT8_MIN;
	int8_t x3708 = INT8_MIN;
	uint32_t t36 = 14U;

	t36 = ((x3705-x3706)<<(x3707^x3708));

	if (t36 != 4291056521U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x3736 = -1;
	uint64_t t37 = 25795LLU;

	t37 = ((x3733-x3734)<<(x3735^x3736));

	if (t37 != 7705377487454208LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x3777 = 82U;
	uint16_t x3778 = 567U;
	int8_t x3779 = -24;
	static int16_t x3780 = -1;
	uint32_t t38 = 446062304U;

	t38 = ((x3777-x3778)<<(x3779^x3780));

	if (t38 != 226492416U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3865 = 94532851408523487LLU;
	volatile int8_t x3866 = -50;
	uint64_t t39 = 27078263031348LLU;

	t39 = ((x3865-x3866)<<(x3867^x3868));

	if (t39 != 94532851408523537LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x4013 = 223188914U;
	uint32_t x4014 = 29613429U;
	uint16_t x4015 = 0U;
	static volatile uint8_t x4016 = 27U;
	volatile uint32_t t40 = 218U;

	t40 = ((x4013-x4014)<<(x4015^x4016));

	if (t40 != 3892314112U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x4053 = 1260881610U;
	int16_t x4054 = INT16_MIN;
	static int32_t x4055 = -1;
	static int8_t x4056 = -12;
	volatile uint32_t t41 = 112802462U;

	t41 = ((x4053-x4054)<<(x4055^x4056));

	if (t41 != 1077301248U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x4213 = -1LL;
	uint64_t x4215 = UINT64_MAX;
	int8_t x4216 = -1;
	int64_t t42 = 84565LL;

	t42 = ((x4213-x4214)<<(x4215^x4216));

	if (t42 != 2094LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x4245 = INT32_MIN;
	uint64_t x4246 = 4476536883857027LLU;
	int64_t x4247 = -1LL;
	volatile int32_t x4248 = -7;
	volatile uint64_t t43 = 2262LLU;

	t43 = ((x4245-x4246)<<(x4247^x4248));

	if (t43 != 18160245575703748416LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x4278 = INT32_MIN;
	int64_t x4279 = INT64_MIN;

	t44 = ((x4277-x4278)<<(x4279^x4280));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x4297 = 220058U;
	static int8_t x4298 = INT8_MIN;
	uint8_t x4299 = 9U;
	uint32_t t45 = 6392464U;

	t45 = ((x4297-x4298)<<(x4299^x4300));

	if (t45 != 880744U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x4305 = -7787;
	uint64_t x4306 = 22182570980311955LLU;
	static volatile int8_t x4307 = -31;
	static uint64_t t46 = 12937050203LLU;

	t46 = ((x4305-x4306)<<(x4307^x4308));

	if (t46 != 3882138063165456384LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x4705 = 7990;
	static uint8_t x4706 = 41U;
	volatile int32_t x4707 = INT32_MIN;
	static volatile int32_t x4708 = INT32_MIN;
	volatile int32_t t47 = -83321;

	t47 = ((x4705-x4706)<<(x4707^x4708));

	if (t47 != 7949) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x4885 = 1496807U;
	volatile int8_t x4886 = -33;
	int8_t x4887 = -1;
	int32_t x4888 = -1;
	uint32_t t48 = 698675269U;

	t48 = ((x4885-x4886)<<(x4887^x4888));

	if (t48 != 1496840U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x5231 = -1;
	volatile uint32_t x5232 = UINT32_MAX;
	volatile int64_t t49 = 722LL;

	t49 = ((x5229-x5230)<<(x5231^x5232));

	if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x5278 = UINT32_MAX;
	uint16_t x5279 = 3U;
	int8_t x5280 = 1;

	t50 = ((x5277-x5278)<<(x5279^x5280));

	if (t50 != 4294966788U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x5321 = INT8_MAX;
	int64_t x5322 = -1LL;
	volatile uint16_t x5323 = 1U;
	uint8_t x5324 = 6U;
	int64_t t51 = -696487180491LL;

	t51 = ((x5321-x5322)<<(x5323^x5324));

	if (t51 != 16384LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x5394 = UINT64_MAX;
	uint64_t x5395 = UINT64_MAX;
	int32_t x5396 = -6;
	static volatile uint64_t t52 = 101924810LLU;

	t52 = ((x5393-x5394)<<(x5395^x5396));

	if (t52 != 1824LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x5489 = INT8_MIN;
	int16_t x5490 = INT16_MIN;
	int8_t x5491 = INT8_MIN;
	int8_t x5492 = INT8_MIN;

	t53 = ((x5489-x5490)<<(x5491^x5492));

	if (t53 != 32640) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x5749 = INT8_MAX;
	static int64_t x5750 = -48LL;
	uint8_t x5751 = UINT8_MAX;
	volatile int64_t t54 = -9294296167043629LL;

	t54 = ((x5749-x5750)<<(x5751^x5752));

	if (t54 != 1539316278886400LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x5909 = INT64_MAX;
	uint32_t x5910 = 3U;
	uint32_t x5911 = UINT32_MAX;

	t55 = ((x5909-x5910)<<(x5911^x5912));

	if (t55 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x5965 = UINT32_MAX;
	int8_t x5966 = -1;
	volatile int32_t x5967 = -1;
	int16_t x5968 = -1;
	volatile uint32_t t56 = 14U;

	t56 = ((x5965-x5966)<<(x5967^x5968));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x5969 = 3887U;
	volatile int16_t x5970 = -1;
	int16_t x5972 = -1;
	volatile int32_t t57 = 7;

	t57 = ((x5969-x5970)<<(x5971^x5972));

	if (t57 != 3888) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x6053 = UINT64_MAX;
	int64_t x6054 = -1LL;
	int16_t x6055 = -1;
	int8_t x6056 = -1;

	t58 = ((x6053-x6054)<<(x6055^x6056));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x6153 = 591LLU;
	static uint16_t x6156 = UINT16_MAX;
	volatile uint64_t t59 = 10715LLU;

	t59 = ((x6153-x6154)<<(x6155^x6156));

	if (t59 != 590LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x6166 = -494981012;
	volatile uint8_t x6168 = 0U;

	t60 = ((x6165-x6166)<<(x6167^x6168));

	if (t60 != 3228027264U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x6269 = INT8_MIN;
	static volatile int64_t x6270 = INT64_MIN;
	int64_t x6271 = INT64_MIN;
	int64_t x6272 = INT64_MIN;

	t61 = ((x6269-x6270)<<(x6271^x6272));

	if (t61 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x6273 = 22U;
	int16_t x6274 = INT16_MIN;
	int64_t x6276 = -1LL;
	int32_t t62 = -223021163;

	t62 = ((x6273-x6274)<<(x6275^x6276));

	if (t62 != 32790) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x6389 = 0;
	static uint32_t x6390 = UINT32_MAX;
	int8_t x6391 = 1;
	static int64_t x6392 = 9LL;
	volatile uint32_t t63 = 15U;

	t63 = ((x6389-x6390)<<(x6391^x6392));

	if (t63 != 256U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x6429 = UINT64_MAX;
	volatile int8_t x6431 = INT8_MIN;
	static uint64_t t64 = UINT64_MAX;

	t64 = ((x6429-x6430)<<(x6431^x6432));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x6438 = -1;
	static int8_t x6439 = -1;
	int64_t x6440 = -1LL;
	uint32_t t65 = 47436U;

	t65 = ((x6437-x6438)<<(x6439^x6440));

	if (t65 != 78102U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x6601 = INT8_MIN;
	int32_t x6602 = INT32_MIN;
	static int16_t x6603 = -1;
	static int64_t x6604 = -1LL;

	t66 = ((x6601-x6602)<<(x6603^x6604));

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x6605 = 11U;
	static uint64_t x6606 = 304570853107313LLU;
	volatile int16_t x6607 = -1;
	volatile uint64_t t67 = 313175194016LLU;

	t67 = ((x6605-x6606)<<(x6607^x6608));

	if (t67 != 18445525790297122408LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x6997 = 176924599U;
	int32_t x6998 = INT32_MIN;
	int16_t x6999 = INT16_MIN;
	static int16_t x7000 = INT16_MIN;
	static volatile uint32_t t68 = 52U;

	t68 = ((x6997-x6998)<<(x6999^x7000));

	if (t68 != 2324408247U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x7197 = -1;
	int32_t t69 = 366812;

	t69 = ((x7197-x7198)<<(x7199^x7200));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x7313 = 327853243601LL;
	int8_t x7314 = INT8_MIN;
	static uint32_t x7316 = UINT32_MAX;
	static int64_t t70 = -163831516807LL;

	t70 = ((x7313-x7314)<<(x7315^x7316));

	if (t70 != 327853243729LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x7373 = INT8_MAX;
	static volatile uint64_t x7374 = 56LLU;
	static volatile int8_t x7375 = 5;
	uint8_t x7376 = 1U;
	volatile uint64_t t71 = 10033966371975LLU;

	t71 = ((x7373-x7374)<<(x7375^x7376));

	if (t71 != 1136LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x7473 = INT16_MIN;
	uint64_t x7474 = UINT64_MAX;
	uint64_t x7475 = UINT64_MAX;
	int64_t x7476 = -1LL;
	static uint64_t t72 = 9723388995LLU;

	t72 = ((x7473-x7474)<<(x7475^x7476));

	if (t72 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x7505 = UINT8_MAX;
	volatile uint64_t x7506 = UINT64_MAX;
	uint16_t x7507 = 24U;
	uint8_t x7508 = 1U;
	volatile uint64_t t73 = 9855642255LLU;

	t73 = ((x7505-x7506)<<(x7507^x7508));

	if (t73 != 8589934592LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x7517 = INT64_MAX;
	volatile int32_t x7518 = 48900;
	int32_t x7519 = -1;
	int8_t x7520 = -1;
	static int64_t t74 = -512383094LL;

	t74 = ((x7517-x7518)<<(x7519^x7520));

	if (t74 != 9223372036854726907LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x7685 = UINT8_MAX;
	int16_t x7686 = INT16_MIN;
	int64_t x7687 = -1LL;
	int64_t x7688 = -1LL;
	int32_t t75 = -58269811;

	t75 = ((x7685-x7686)<<(x7687^x7688));

	if (t75 != 33023) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x7885 = UINT16_MAX;
	uint16_t x7886 = UINT16_MAX;
	int64_t x7887 = -1LL;
	static int32_t x7888 = -1;
	volatile int32_t t76 = -22873;

	t76 = ((x7885-x7886)<<(x7887^x7888));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x8005 = UINT64_MAX;
	uint16_t x8006 = 1069U;
	static int32_t x8007 = -1;
	uint32_t x8008 = UINT32_MAX;
	static uint64_t t77 = 1990LLU;

	t77 = ((x8005-x8006)<<(x8007^x8008));

	if (t77 != 18446744073709550546LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x8033 = 3U;
	int64_t x8034 = -1LL;
	uint16_t x8036 = UINT16_MAX;
	int64_t t78 = 5706LL;

	t78 = ((x8033-x8034)<<(x8035^x8036));

	if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x8046 = UINT64_MAX;
	int8_t x8047 = INT8_MIN;
	static int8_t x8048 = INT8_MIN;
	uint64_t t79 = 6LLU;

	t79 = ((x8045-x8046)<<(x8047^x8048));

	if (t79 != 25LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x8129 = INT8_MAX;
	uint64_t x8130 = UINT64_MAX;
	static int16_t x8132 = -1;
	static uint64_t t80 = 59867LLU;

	t80 = ((x8129-x8130)<<(x8131^x8132));

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x8305 = -1;
	uint32_t x8306 = 38386012U;
	uint8_t x8307 = UINT8_MAX;
	uint8_t x8308 = UINT8_MAX;

	t81 = ((x8305-x8306)<<(x8307^x8308));

	if (t81 != 4256581283U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x8345 = -1;
	volatile uint64_t x8346 = 130938077415LLU;
	int64_t x8347 = INT64_MIN;
	int64_t x8348 = INT64_MIN;
	volatile uint64_t t82 = 1132446774780324746LLU;

	t82 = ((x8345-x8346)<<(x8347^x8348));

	if (t82 != 18446743942771474200LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x8357 = 1960829663501517672LL;
	static volatile int8_t x8359 = -1;
	int8_t x8360 = -1;
	int64_t t83 = -3059257802LL;

	t83 = ((x8357-x8358)<<(x8359^x8360));

	if (t83 != 1960829665649001320LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x8481 = 932143547564397392LLU;
	uint16_t x8482 = 4733U;
	uint64_t t84 = 0LLU;

	t84 = ((x8481-x8482)<<(x8483^x8484));

	if (t84 != 13731044946750950400LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x8597 = -1241;
	int64_t x8598 = INT64_MIN;
	int16_t x8599 = -1;
	uint64_t x8600 = UINT64_MAX;
	volatile int64_t t85 = -136568891401LL;

	t85 = ((x8597-x8598)<<(x8599^x8600));

	if (t85 != 9223372036854774567LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x8641 = 0U;
	int8_t x8642 = INT8_MIN;
	int32_t x8643 = INT32_MIN;
	int32_t x8644 = INT32_MIN;
	int32_t t86 = 79;

	t86 = ((x8641-x8642)<<(x8643^x8644));

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x8695 = UINT64_MAX;
	uint64_t x8696 = UINT64_MAX;
	static uint32_t t87 = 11U;

	t87 = ((x8693-x8694)<<(x8695^x8696));

	if (t87 != 256U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x8758 = INT16_MIN;
	int8_t x8759 = INT8_MAX;
	volatile int8_t x8760 = INT8_MAX;
	int32_t t88 = 1589;

	t88 = ((x8757-x8758)<<(x8759^x8760));

	if (t88 != 28679) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x8837 = 1072U;
	volatile uint8_t x8838 = UINT8_MAX;
	int64_t x8840 = INT64_MAX;
	uint32_t t89 = 57U;

	t89 = ((x8837-x8838)<<(x8839^x8840));

	if (t89 != 817U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x8841 = -6;
	volatile uint64_t x8842 = 15824LLU;
	int8_t x8843 = -5;
	int16_t x8844 = -1;

	t90 = ((x8841-x8842)<<(x8843^x8844));

	if (t90 != 18446744073709298336LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x9005 = 863323LLU;
	int32_t x9006 = -15104;
	int8_t x9007 = -1;
	int64_t x9008 = -1LL;
	uint64_t t91 = 1196LLU;

	t91 = ((x9005-x9006)<<(x9007^x9008));

	if (t91 != 878427LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x9105 = 9995U;
	uint16_t x9106 = 54U;
	int32_t x9107 = INT32_MIN;
	int32_t x9108 = INT32_MIN;
	static uint32_t t92 = 830873676U;

	t92 = ((x9105-x9106)<<(x9107^x9108));

	if (t92 != 9941U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x9310 = INT64_MIN;
	static int16_t x9311 = -1;

	t93 = ((x9309-x9310)<<(x9311^x9312));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x9389 = 16U;
	int16_t x9390 = -3;
	static int8_t x9391 = -11;
	int32_t x9392 = -1;
	volatile int32_t t94 = -13686;

	t94 = ((x9389-x9390)<<(x9391^x9392));

	if (t94 != 19456) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x9602 = UINT32_MAX;
	uint8_t x9603 = 19U;
	volatile uint8_t x9604 = 1U;

	t95 = ((x9601-x9602)<<(x9603^x9604));

	if (t95 != 262144U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x9658 = 667111U;
	int32_t x9659 = INT32_MIN;
	int32_t x9660 = INT32_MIN;
	volatile uint32_t t96 = 1785U;

	t96 = ((x9657-x9658)<<(x9659^x9660));

	if (t96 != 2146816537U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x9705 = -1LL;
	int16_t x9706 = -1;
	uint8_t x9707 = 3U;
	int16_t x9708 = 35;
	static volatile int64_t t97 = 1101495371350684862LL;

	t97 = ((x9705-x9706)<<(x9707^x9708));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x9717 = INT64_MAX;
	static uint32_t x9718 = 2891U;
	int16_t x9719 = INT16_MIN;
	int16_t x9720 = INT16_MIN;
	int64_t t98 = -3232611LL;

	t98 = ((x9717-x9718)<<(x9719^x9720));

	if (t98 != 9223372036854772916LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x9829 = UINT32_MAX;
	uint16_t x9830 = 12U;
	int8_t x9832 = INT8_MIN;
	volatile uint32_t t99 = 0U;

	t99 = ((x9829-x9830)<<(x9831^x9832));

	if (t99 != 4294967283U) { NG(); } else { ; }
	
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

