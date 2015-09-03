#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
uint8_t x8 = 5U;
static int32_t x105 = INT32_MIN;
int16_t x423 = -372;
int64_t x482 = INT64_MAX;
int16_t x483 = INT16_MIN;
uint32_t x627 = UINT32_MAX;
uint32_t t7 = 6845U;
int8_t x754 = INT8_MAX;
static int64_t x755 = INT64_MIN;
static uint32_t t12 = 34310U;
int64_t x843 = INT64_MAX;
static int8_t x859 = -1;
static volatile uint32_t t14 = 59615U;
uint64_t x865 = 520115568922LLU;
uint64_t x866 = UINT64_MAX;
int8_t x867 = INT8_MAX;
uint32_t x868 = 14U;
int32_t x1114 = 0;
static uint32_t t21 = 26178U;
static int64_t x1141 = 75897332LL;
uint8_t x1184 = 2U;
volatile uint32_t t23 = 753623152U;
int32_t x1275 = 0;
uint32_t x1276 = 13U;
volatile uint64_t t25 = 52286302060700LLU;
static uint16_t x1338 = 1331U;
uint64_t x1414 = UINT64_MAX;
uint8_t x1416 = 27U;
int8_t x1523 = INT8_MIN;
int8_t x1621 = INT8_MAX;
uint32_t x1622 = 74667U;
int8_t x1724 = 19;
static int16_t x1776 = 6;
static volatile int32_t t36 = -36;
static uint32_t x1957 = 375337U;
int16_t x1958 = -1;
volatile uint32_t t38 = 6U;
volatile uint16_t x2021 = 15742U;
int8_t x2023 = INT8_MAX;
static int64_t x2215 = -1LL;
int64_t t40 = -100699606620LL;
int8_t x2240 = 0;
volatile int64_t x2374 = -19228LL;
uint64_t x2417 = 1LLU;
volatile uint32_t x2418 = UINT32_MAX;
volatile int16_t x2425 = -1;
int16_t x2429 = -1;
int8_t x2430 = 1;
volatile uint64_t x2632 = 4LLU;
uint64_t t48 = 501810085846791534LLU;
static volatile int32_t x2680 = 1;
volatile uint32_t x2712 = 6U;
volatile uint8_t x2837 = 63U;
static volatile int64_t x2913 = -21801853726LL;
int8_t x2914 = INT8_MIN;
uint8_t x2962 = UINT8_MAX;
uint16_t x3163 = UINT16_MAX;
static uint64_t x3325 = 19449024LLU;
static int32_t x3326 = 90277097;
uint8_t x3365 = UINT8_MAX;
volatile int8_t x3368 = 7;
static int64_t t60 = 67494945838011306LL;
static volatile uint64_t t62 = 3127903685LLU;
int32_t x3653 = INT32_MIN;
uint32_t x3654 = UINT32_MAX;
static volatile uint32_t t63 = 115907U;
static volatile int16_t x3681 = -179;
int8_t x3683 = INT8_MAX;
uint8_t x3684 = 13U;
static uint64_t x3723 = UINT64_MAX;
volatile int16_t x3724 = 9;
volatile uint64_t x3726 = 55991LLU;
static int8_t x3898 = -1;
uint16_t x3900 = 1U;
int16_t x3995 = INT16_MAX;
volatile int16_t x4147 = -1;
volatile int8_t x4215 = -1;
volatile uint32_t t73 = 543900U;
int16_t x4303 = INT16_MIN;
uint16_t x4331 = 512U;
volatile int8_t x4375 = 1;
volatile int32_t x4517 = -1;
volatile int16_t x4518 = INT16_MIN;
volatile uint32_t t79 = 2599183U;
int64_t x4587 = INT64_MIN;
uint64_t x4623 = 6LLU;
int32_t x4730 = INT32_MIN;
uint64_t x4731 = 2LLU;
uint32_t x5002 = 107163U;
int8_t x5053 = 0;
int32_t x5054 = 685330052;
uint16_t x5055 = 15864U;
uint32_t x5093 = 14594998U;
static int8_t x5094 = INT8_MAX;
uint8_t x5363 = 16U;
static uint64_t t95 = 25049895518660570LLU;
static uint8_t x5792 = 3U;


void f0(void) {
	volatile uint64_t x6 = UINT64_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t t0 = 78349LLU;

	t0 = ((x5+(x6+x7))<<x8);

	if (t0 != 18446744073709547456LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MIN;
	uint16_t x67 = 29U;
	uint32_t x68 = 12U;
	int32_t t1 = -103;

	t1 = ((x65+(x66+x67))<<x68);

	if (t1 != 134332416) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 328389303525LLU;
	static volatile uint16_t x80 = 9U;
	volatile uint64_t t2 = 6LLU;

	t2 = ((x77+(x78+x79))<<x80);

	if (t2 != 167035811776512LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x106 = -1;
	volatile uint64_t x107 = 49801557LLU;
	static int8_t x108 = 2;
	uint64_t t3 = 10281LLU;

	t3 = ((x105+(x106+x107))<<x108);

	if (t3 != 18446744065318823248LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x421 = 1369LL;
	uint64_t x422 = 4105LLU;
	static int64_t x424 = 23LL;
	volatile uint64_t t4 = 763217LLU;

	t4 = ((x421+(x422+x423))<<x424);

	if (t4 != 42798678016LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x481 = 82100915916477LLU;
	uint8_t x484 = 30U;
	volatile uint64_t t5 = 8913308482633897273LLU;

	t5 = ((x481+(x482+x483))<<x484);

	if (t5 != 16643988858962182144LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x593 = INT8_MAX;
	int64_t x594 = -1LL;
	static uint8_t x595 = 3U;
	int8_t x596 = 32;
	static int64_t t6 = 1572603987429876LL;

	t6 = ((x593+(x594+x595))<<x596);

	if (t6 != 554050781184LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x625 = UINT16_MAX;
	volatile int8_t x626 = 2;
	int32_t x628 = 1;

	t7 = ((x625+(x626+x627))<<x628);

	if (t7 != 131072U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x629 = INT32_MAX;
	int16_t x630 = INT16_MIN;
	uint64_t x631 = 44838219420082LLU;
	uint8_t x632 = 5U;
	volatile uint64_t t8 = 27LLU;

	t8 = ((x629+(x630+x631))<<x632);

	if (t8 != 1434891739870752LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x685 = -2;
	int64_t x686 = 98763LL;
	volatile uint32_t x687 = UINT32_MAX;
	uint8_t x688 = 7U;
	int64_t t9 = 162674842000LL;

	t9 = ((x685+(x686+x687))<<x688);

	if (t9 != 549768455168LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x753 = UINT64_MAX;
	int8_t x756 = 0;
	volatile uint64_t t10 = 3906947976241226064LLU;

	t10 = ((x753+(x754+x755))<<x756);

	if (t10 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x813 = 16;
	uint32_t x814 = 12980205U;
	volatile uint8_t x815 = UINT8_MAX;
	uint8_t x816 = 13U;
	static volatile uint32_t t11 = 246505620U;

	t11 = ((x813+(x814+x815))<<x816);

	if (t11 != 3256844288U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x821 = INT16_MIN;
	int8_t x822 = INT8_MAX;
	static uint32_t x823 = UINT32_MAX;
	volatile uint8_t x824 = 24U;

	t12 = ((x821+(x822+x823))<<x824);

	if (t12 != 2113929216U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x841 = INT8_MAX;
	int8_t x842 = INT8_MIN;
	int8_t x844 = 0;
	int64_t t13 = 66583845516LL;

	t13 = ((x841+(x842+x843))<<x844);

	if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x857 = INT16_MAX;
	uint32_t x858 = UINT32_MAX;
	uint16_t x860 = 7U;

	t14 = ((x857+(x858+x859))<<x860);

	if (t14 != 4193920U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t t15 = 39544313316LLU;

	t15 = ((x865+(x866+x867))<<x868);

	if (t15 != 8521573483282432LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x869 = UINT32_MAX;
	int8_t x870 = INT8_MIN;
	static int8_t x871 = 1;
	int32_t x872 = 0;
	volatile uint32_t t16 = 327005U;

	t16 = ((x869+(x870+x871))<<x872);

	if (t16 != 4294967168U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x881 = UINT32_MAX;
	volatile uint8_t x882 = 0U;
	volatile int16_t x883 = 4376;
	uint8_t x884 = 11U;
	volatile uint32_t t17 = 14U;

	t17 = ((x881+(x882+x883))<<x884);

	if (t17 != 8960000U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x901 = UINT32_MAX;
	int8_t x902 = INT8_MIN;
	uint8_t x903 = 11U;
	uint16_t x904 = 1U;
	volatile uint32_t t18 = 2217846U;

	t18 = ((x901+(x902+x903))<<x904);

	if (t18 != 4294967060U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x933 = 2526U;
	int64_t x934 = -1LL;
	static uint8_t x935 = UINT8_MAX;
	uint8_t x936 = 34U;
	int64_t t19 = 140895970019715LL;

	t19 = ((x933+(x934+x935))<<x936);

	if (t19 != 47760036331520LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1013 = 526U;
	int16_t x1014 = INT16_MIN;
	int32_t x1015 = 0;
	static uint16_t x1016 = 9U;
	uint32_t t20 = 205U;

	t20 = ((x1013+(x1014+x1015))<<x1016);

	if (t20 != 4278459392U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1113 = 7171U;
	uint32_t x1115 = 200489534U;
	int8_t x1116 = 12;

	t21 = ((x1113+(x1114+x1115))<<x1116);

	if (t21 != 895750144U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x1142 = UINT64_MAX;
	int8_t x1143 = -1;
	uint32_t x1144 = 57U;
	static uint64_t t22 = 2535733124747LLU;

	t22 = ((x1141+(x1142+x1143))<<x1144);

	if (t22 != 16429131440647569408LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1181 = -1;
	uint32_t x1182 = 2691U;
	volatile int8_t x1183 = 0;

	t23 = ((x1181+(x1182+x1183))<<x1184);

	if (t23 != 10760U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1229 = -1;
	static int16_t x1230 = INT16_MIN;
	uint64_t x1231 = 3371443453255299297LLU;
	uint16_t x1232 = 32U;
	volatile uint64_t t24 = 7544280LLU;

	t24 = ((x1229+(x1230+x1231))<<x1232);

	if (t24 != 4870837473120354304LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1273 = INT8_MAX;
	volatile uint64_t x1274 = 2554321786654LLU;

	t25 = ((x1273+(x1274+x1275))<<x1276);

	if (t25 != 20925004077309952LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1289 = -7;
	static uint64_t x1290 = 1349LLU;
	int16_t x1291 = INT16_MAX;
	int8_t x1292 = 12;
	static volatile uint64_t t26 = 5945126769LLU;

	t26 = ((x1289+(x1290+x1291))<<x1292);

	if (t26 != 139710464LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x1337 = 121U;
	int64_t x1339 = 2LL;
	int16_t x1340 = 1;
	volatile int64_t t27 = -2990151242480450LL;

	t27 = ((x1337+(x1338+x1339))<<x1340);

	if (t27 != 2908LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1353 = INT16_MIN;
	uint16_t x1354 = UINT16_MAX;
	volatile uint64_t x1355 = UINT64_MAX;
	static volatile uint16_t x1356 = 1U;
	static uint64_t t28 = 238911046674038LLU;

	t28 = ((x1353+(x1354+x1355))<<x1356);

	if (t28 != 65532LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1413 = INT16_MIN;
	static uint16_t x1415 = UINT16_MAX;
	uint64_t t29 = 2446593773389714819LLU;

	t29 = ((x1413+(x1414+x1415))<<x1416);

	if (t29 != 4397778075648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1521 = UINT32_MAX;
	volatile uint16_t x1522 = 1U;
	int64_t x1524 = 7LL;
	volatile uint32_t t30 = 2U;

	t30 = ((x1521+(x1522+x1523))<<x1524);

	if (t30 != 4294950912U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1549 = 164559087U;
	static uint16_t x1550 = 3U;
	int32_t x1551 = -1;
	uint8_t x1552 = 16U;
	static uint32_t t31 = 31996672U;

	t31 = ((x1549+(x1550+x1551))<<x1552);

	if (t31 != 4176543744U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1623 = INT32_MIN;
	static uint16_t x1624 = 16U;
	static volatile uint32_t t32 = 424209836U;

	t32 = ((x1621+(x1622+x1623))<<x1624);

	if (t32 != 606732288U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1721 = -1;
	uint32_t x1722 = 2U;
	volatile uint8_t x1723 = UINT8_MAX;
	uint32_t t33 = 115104207U;

	t33 = ((x1721+(x1722+x1723))<<x1724);

	if (t33 != 134217728U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1725 = INT8_MAX;
	uint8_t x1726 = UINT8_MAX;
	static int16_t x1727 = -1;
	uint8_t x1728 = 13U;
	static int32_t t34 = 275968225;

	t34 = ((x1725+(x1726+x1727))<<x1728);

	if (t34 != 3121152) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1737 = -1;
	int8_t x1738 = -1;
	int32_t x1739 = 9941;
	int8_t x1740 = 1;
	volatile int32_t t35 = -3569632;

	t35 = ((x1737+(x1738+x1739))<<x1740);

	if (t35 != 19878) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1773 = -1;
	int16_t x1774 = INT16_MAX;
	int8_t x1775 = INT8_MAX;

	t36 = ((x1773+(x1774+x1775))<<x1776);

	if (t36 != 2105152) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1777 = 1;
	int16_t x1778 = -1;
	static uint16_t x1779 = 20U;
	volatile uint8_t x1780 = 1U;
	int32_t t37 = 28543074;

	t37 = ((x1777+(x1778+x1779))<<x1780);

	if (t37 != 40) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1959 = 1U;
	uint32_t x1960 = 12U;

	t38 = ((x1957+(x1958+x1959))<<x1960);

	if (t38 != 1537380352U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2022 = -1LL;
	uint16_t x2024 = 1U;
	volatile int64_t t39 = 208887596458LL;

	t39 = ((x2021+(x2022+x2023))<<x2024);

	if (t39 != 31736LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2213 = -1;
	uint8_t x2214 = 4U;
	uint8_t x2216 = 0U;

	t40 = ((x2213+(x2214+x2215))<<x2216);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2237 = 44U;
	uint16_t x2238 = 241U;
	uint32_t x2239 = UINT32_MAX;
	volatile uint32_t t41 = 2U;

	t41 = ((x2237+(x2238+x2239))<<x2240);

	if (t41 != 284U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2373 = -123LL;
	int32_t x2375 = 21039625;
	uint16_t x2376 = 1U;
	int64_t t42 = 25092308909LL;

	t42 = ((x2373+(x2374+x2375))<<x2376);

	if (t42 != 42040548LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2419 = INT16_MAX;
	int16_t x2420 = 0;
	volatile uint64_t t43 = 159251LLU;

	t43 = ((x2417+(x2418+x2419))<<x2420);

	if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2426 = -1LL;
	uint16_t x2427 = 73U;
	int16_t x2428 = 1;
	volatile int64_t t44 = -379LL;

	t44 = ((x2425+(x2426+x2427))<<x2428);

	if (t44 != 142LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2431 = UINT32_MAX;
	static uint8_t x2432 = 1U;
	volatile uint32_t t45 = 31693U;

	t45 = ((x2429+(x2430+x2431))<<x2432);

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2501 = 62780LLU;
	volatile int64_t x2502 = -12766LL;
	volatile int8_t x2503 = -1;
	volatile uint16_t x2504 = 0U;
	volatile uint64_t t46 = 512374222264471027LLU;

	t46 = ((x2501+(x2502+x2503))<<x2504);

	if (t46 != 50013LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2589 = 591908342418LLU;
	volatile uint16_t x2590 = 7426U;
	uint32_t x2591 = 23531U;
	static uint16_t x2592 = 12U;
	volatile uint64_t t47 = 225321813256149045LLU;

	t47 = ((x2589+(x2590+x2591))<<x2592);

	if (t47 != 2424456697344000LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2629 = -1;
	static uint64_t x2630 = 49LLU;
	int16_t x2631 = INT16_MIN;

	t48 = ((x2629+(x2630+x2631))<<x2632);

	if (t48 != 18446744073709028096LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2677 = 30U;
	int32_t x2678 = INT32_MIN;
	uint64_t x2679 = UINT64_MAX;
	uint64_t t49 = 0LLU;

	t49 = ((x2677+(x2678+x2679))<<x2680);

	if (t49 != 18446744069414584378LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2709 = -20;
	int8_t x2710 = INT8_MIN;
	volatile uint64_t x2711 = 4394762192LLU;
	uint64_t t50 = 6037006070243968082LLU;

	t50 = ((x2709+(x2710+x2711))<<x2712);

	if (t50 != 281264770816LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x2761 = INT8_MIN;
	uint8_t x2762 = 2U;
	static uint16_t x2763 = UINT16_MAX;
	static volatile int16_t x2764 = 1;
	int32_t t51 = -13;

	t51 = ((x2761+(x2762+x2763))<<x2764);

	if (t51 != 130818) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2838 = INT8_MAX;
	int64_t x2839 = -1LL;
	int8_t x2840 = 47;
	volatile int64_t t52 = 44314831LL;

	t52 = ((x2837+(x2838+x2839))<<x2840);

	if (t52 != 26599385299156992LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2905 = UINT32_MAX;
	uint8_t x2906 = 2U;
	uint64_t x2907 = 7948876596302608LLU;
	int32_t x2908 = 1;
	uint64_t t53 = 4981LLU;

	t53 = ((x2905+(x2906+x2907))<<x2908);

	if (t53 != 15897761782539810LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2915 = 147957778507LL;
	int16_t x2916 = 10;
	static volatile int64_t t54 = -228045173LL;

	t54 = ((x2913+(x2914+x2915))<<x2916);

	if (t54 != 129183666844672LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2961 = 1404;
	int16_t x2963 = INT16_MAX;
	int8_t x2964 = 1;
	int32_t t55 = 10993093;

	t55 = ((x2961+(x2962+x2963))<<x2964);

	if (t55 != 68852) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3161 = 939U;
	uint64_t x3162 = 184233525535749854LLU;
	int8_t x3164 = 1;
	volatile uint64_t t56 = 155LLU;

	t56 = ((x3161+(x3162+x3163))<<x3164);

	if (t56 != 368467051071632656LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3327 = 43146670945LL;
	volatile uint16_t x3328 = 2U;
	volatile uint64_t t57 = 471199532585LLU;

	t57 = ((x3325+(x3326+x3327))<<x3328);

	if (t57 != 173025588264LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3361 = -1LL;
	volatile uint16_t x3362 = UINT16_MAX;
	int64_t x3363 = 14103062183LL;
	volatile uint64_t x3364 = 12LLU;
	static volatile int64_t t58 = 6792402LL;

	t58 = ((x3361+(x3362+x3363))<<x3364);

	if (t58 != 57766411128832LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3366 = 3U;
	volatile int64_t x3367 = -1LL;
	int64_t t59 = -6LL;

	t59 = ((x3365+(x3366+x3367))<<x3368);

	if (t59 != 32896LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3369 = 104983052LL;
	int16_t x3370 = INT16_MIN;
	static volatile int32_t x3371 = -13346281;
	uint8_t x3372 = 1U;

	t60 = ((x3369+(x3370+x3371))<<x3372);

	if (t60 != 183208006LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3517 = -1;
	volatile uint64_t x3518 = 365988266LLU;
	uint8_t x3519 = 5U;
	volatile uint8_t x3520 = 18U;
	uint64_t t61 = 0LLU;

	t61 = ((x3517+(x3518+x3519))<<x3520);

	if (t61 != 95941629050880LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3545 = 92168014231228LLU;
	uint32_t x3546 = UINT32_MAX;
	int64_t x3547 = INT64_MIN;
	volatile int8_t x3548 = 0;

	t62 = ((x3545+(x3546+x3547))<<x3548);

	if (t62 != 9223464209163974331LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3655 = 2U;
	uint8_t x3656 = 11U;

	t63 = ((x3653+(x3654+x3655))<<x3656);

	if (t63 != 2048U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3682 = 1101U;
	int32_t t64 = 301;

	t64 = ((x3681+(x3682+x3683))<<x3684);

	if (t64 != 8593408) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3721 = INT64_MIN;
	int32_t x3722 = 0;
	uint64_t t65 = 26LLU;

	t65 = ((x3721+(x3722+x3723))<<x3724);

	if (t65 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x3725 = 7682132U;
	volatile int32_t x3727 = 6121;
	volatile uint8_t x3728 = 1U;
	volatile uint64_t t66 = 19639357LLU;

	t66 = ((x3725+(x3726+x3727))<<x3728);

	if (t66 != 15488488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3765 = UINT64_MAX;
	int32_t x3766 = 0;
	int32_t x3767 = INT32_MIN;
	uint32_t x3768 = 29U;
	static volatile uint64_t t67 = 471934LLU;

	t67 = ((x3765+(x3766+x3767))<<x3768);

	if (t67 != 17293822568565833728LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3897 = 2683U;
	uint64_t x3899 = 796237983892073LLU;
	static volatile uint64_t t68 = 168763LLU;

	t68 = ((x3897+(x3898+x3899))<<x3900);

	if (t68 != 1592475967789510LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3993 = UINT64_MAX;
	int32_t x3994 = 1934139;
	uint16_t x3996 = 3U;
	static volatile uint64_t t69 = 42361495947860601LLU;

	t69 = ((x3993+(x3994+x3995))<<x3996);

	if (t69 != 15735240LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x4125 = -61;
	volatile uint32_t x4126 = 52837082U;
	uint16_t x4127 = 25U;
	volatile uint32_t x4128 = 3U;
	static volatile uint32_t t70 = 300211024U;

	t70 = ((x4125+(x4126+x4127))<<x4128);

	if (t70 != 422696368U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4141 = UINT64_MAX;
	int8_t x4142 = 0;
	volatile int16_t x4143 = INT16_MIN;
	uint8_t x4144 = 3U;
	volatile uint64_t t71 = 61584953961180204LLU;

	t71 = ((x4141+(x4142+x4143))<<x4144);

	if (t71 != 18446744073709289464LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4145 = -1;
	int32_t x4146 = 1498;
	int16_t x4148 = 1;
	volatile int32_t t72 = -2211;

	t72 = ((x4145+(x4146+x4147))<<x4148);

	if (t72 != 2992) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4213 = 13U;
	uint32_t x4214 = UINT32_MAX;
	uint8_t x4216 = 2U;

	t73 = ((x4213+(x4214+x4215))<<x4216);

	if (t73 != 44U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4301 = UINT16_MAX;
	uint16_t x4302 = UINT16_MAX;
	volatile uint8_t x4304 = 12U;
	volatile int32_t t74 = -34506309;

	t74 = ((x4301+(x4302+x4303))<<x4304);

	if (t74 != 402644992) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4329 = 7U;
	uint64_t x4330 = UINT64_MAX;
	int16_t x4332 = 22;
	uint64_t t75 = 9526185790235LLU;

	t75 = ((x4329+(x4330+x4331))<<x4332);

	if (t75 != 2172649472LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4373 = UINT64_MAX;
	int32_t x4374 = 0;
	uint8_t x4376 = 1U;
	volatile uint64_t t76 = 232090LLU;

	t76 = ((x4373+(x4374+x4375))<<x4376);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4389 = -217366;
	volatile uint16_t x4390 = UINT16_MAX;
	static uint64_t x4391 = UINT64_MAX;
	volatile uint8_t x4392 = 11U;
	static uint64_t t77 = 198LLU;

	t77 = ((x4389+(x4390+x4391))<<x4392);

	if (t77 != 18446744073398599680LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4461 = INT16_MIN;
	static int32_t x4462 = -400101;
	uint32_t x4463 = 88937U;
	uint64_t x4464 = 3LLU;
	static uint32_t t78 = 10900194U;

	t78 = ((x4461+(x4462+x4463))<<x4464);

	if (t78 != 4292215840U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4519 = 3485768U;
	int16_t x4520 = 31;

	t79 = ((x4517+(x4518+x4519))<<x4520);

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4561 = UINT32_MAX;
	static volatile uint32_t x4562 = 66176474U;
	int32_t x4563 = -429654;
	int8_t x4564 = 0;
	uint32_t t80 = 111U;

	t80 = ((x4561+(x4562+x4563))<<x4564);

	if (t80 != 65746819U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4585 = 5LL;
	uint64_t x4586 = 2792868361956548LLU;
	static int16_t x4588 = 44;
	volatile uint64_t t81 = 93133914LLU;

	t81 = ((x4585+(x4586+x4587))<<x4588);

	if (t81 != 16630825853646798848LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4621 = 1869U;
	int64_t x4622 = INT64_MIN;
	uint16_t x4624 = 39U;
	uint64_t t82 = 330191479599LLU;

	t82 = ((x4621+(x4622+x4623))<<x4624);

	if (t82 != 1030792151040000LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4729 = INT64_MAX;
	int16_t x4732 = 5;
	static uint64_t t83 = 382748461389160784LLU;

	t83 = ((x4729+(x4730+x4731))<<x4732);

	if (t83 != 18446744004990074912LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4749 = 7102912000061190LLU;
	static int8_t x4750 = -1;
	int16_t x4751 = -4603;
	static int32_t x4752 = 1;
	uint64_t t84 = 14801410544391433LLU;

	t84 = ((x4749+(x4750+x4751))<<x4752);

	if (t84 != 14205824000113172LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4837 = UINT8_MAX;
	volatile int8_t x4838 = INT8_MAX;
	volatile uint8_t x4839 = UINT8_MAX;
	int16_t x4840 = 20;
	static volatile int32_t t85 = 386982;

	t85 = ((x4837+(x4838+x4839))<<x4840);

	if (t85 != 667942912) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4993 = INT16_MIN;
	int8_t x4994 = 1;
	uint64_t x4995 = 13664403960LLU;
	uint8_t x4996 = 39U;
	volatile uint64_t t86 = 180738699035LLU;

	t86 = ((x4993+(x4994+x4995))<<x4996);

	if (t86 != 4242668475669020672LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5001 = -2149;
	static volatile int32_t x5003 = INT32_MIN;
	int8_t x5004 = 18;
	static volatile uint32_t t87 = 20U;

	t87 = ((x5001+(x5002+x5003))<<x5004);

	if (t87 != 1758986240U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5037 = 20944518;
	uint32_t x5038 = UINT32_MAX;
	int16_t x5039 = INT16_MAX;
	int8_t x5040 = 25;
	volatile uint32_t t88 = 6U;

	t88 = ((x5037+(x5038+x5039))<<x5040);

	if (t88 != 134217728U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x5056 = 1;
	static volatile int32_t t89 = -247;

	t89 = ((x5053+(x5054+x5055))<<x5056);

	if (t89 != 1370691832) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x5061 = -1;
	int64_t x5062 = -186LL;
	uint64_t x5063 = 618LLU;
	uint32_t x5064 = 20U;
	volatile uint64_t t90 = 11280LLU;

	t90 = ((x5061+(x5062+x5063))<<x5064);

	if (t90 != 451936256LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5095 = INT16_MIN;
	uint8_t x5096 = 4U;
	volatile uint32_t t91 = 2275U;

	t91 = ((x5093+(x5094+x5095))<<x5096);

	if (t91 != 232997712U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5097 = 527396873;
	static volatile uint64_t x5098 = UINT64_MAX;
	int16_t x5099 = -3744;
	int16_t x5100 = 5;
	static volatile uint64_t t92 = 176663LLU;

	t92 = ((x5097+(x5098+x5099))<<x5100);

	if (t92 != 16876580096LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5361 = 351;
	static uint32_t x5362 = 479301835U;
	uint8_t x5364 = 0U;
	static volatile uint32_t t93 = 2793U;

	t93 = ((x5361+(x5362+x5363))<<x5364);

	if (t93 != 479302202U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x5381 = UINT64_MAX;
	int32_t x5382 = INT32_MAX;
	int32_t x5383 = -40;
	uint16_t x5384 = 1U;
	volatile uint64_t t94 = 12654LLU;

	t94 = ((x5381+(x5382+x5383))<<x5384);

	if (t94 != 4294967212LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5525 = 41LLU;
	volatile int8_t x5526 = -1;
	int8_t x5527 = INT8_MIN;
	uint32_t x5528 = 3U;

	t95 = ((x5525+(x5526+x5527))<<x5528);

	if (t95 != 18446744073709550912LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5545 = 5U;
	static uint32_t x5546 = 16632U;
	static int32_t x5547 = 38184679;
	uint32_t x5548 = 3U;
	volatile uint32_t t96 = 35U;

	t96 = ((x5545+(x5546+x5547))<<x5548);

	if (t96 != 305610528U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5789 = INT32_MIN;
	int64_t x5790 = INT64_MAX;
	uint64_t x5791 = 18707028285304LLU;
	uint64_t t97 = 645405LLU;

	t97 = ((x5789+(x5790+x5791))<<x5792);

	if (t97 != 149639046413240LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5821 = -1;
	volatile uint32_t x5822 = 56647U;
	static int16_t x5823 = 97;
	uint8_t x5824 = 12U;
	uint32_t t98 = 6549U;

	t98 = ((x5821+(x5822+x5823))<<x5824);

	if (t98 != 232419328U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5861 = UINT16_MAX;
	int32_t x5862 = 538494;
	static int16_t x5863 = INT16_MAX;
	uint8_t x5864 = 3U;
	int32_t t99 = -420299844;

	t99 = ((x5861+(x5862+x5863))<<x5864);

	if (t99 != 5094368) { NG(); } else { ; }
	
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

