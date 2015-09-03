#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x116 = 6;
uint16_t x244 = 6U;
volatile int32_t x278 = -928728;
volatile int32_t t4 = 5158;
static volatile uint32_t t5 = 68U;
volatile int64_t x472 = 7LL;
int64_t x537 = 5299415255734525LL;
uint8_t x540 = 0U;
uint32_t x697 = 10591162U;
static int32_t x847 = INT32_MIN;
uint32_t x873 = 15U;
int32_t x1023 = INT32_MIN;
volatile int32_t t15 = -49671;
uint32_t x1174 = 15023U;
static volatile uint64_t t24 = 1841104935LLU;
static uint8_t x1429 = 5U;
static int64_t x1452 = 3LL;
volatile uint32_t x1453 = 411U;
static volatile uint64_t t29 = 80717LLU;
int32_t x1786 = 13450168;
volatile int8_t x1872 = 0;
static uint64_t x2221 = UINT64_MAX;
static uint64_t x2334 = 0LLU;
uint8_t x2357 = UINT8_MAX;
volatile int32_t x2359 = -246;
int64_t t36 = -2081670891233486875LL;
int32_t x2555 = 621880;
uint8_t x2720 = 11U;
static volatile uint32_t t38 = 1196584462U;
int16_t x2749 = 4621;
static int64_t x2750 = -1LL;
int8_t x2804 = 9;
volatile int32_t t41 = 22805;
int32_t x2866 = INT32_MIN;
volatile uint32_t t43 = 79714U;
static volatile int64_t t45 = 0LL;
uint64_t x3338 = 8684681158625035746LLU;
static uint64_t x3340 = 19LLU;
volatile int32_t t46 = -6804460;
uint16_t x3485 = UINT16_MAX;
int32_t t48 = -2080;
static uint32_t x3682 = 82682U;
int32_t t50 = -29;
uint16_t x3718 = UINT16_MAX;
volatile int32_t t51 = -1;
volatile uint64_t x3839 = UINT64_MAX;
int16_t x3945 = INT16_MAX;
static uint64_t t56 = 88291784493LLU;
volatile int32_t t57 = -2588314;
uint32_t x4141 = 2U;
static int16_t x4142 = INT16_MIN;
static uint32_t t59 = 19U;
int32_t t62 = 2;
int16_t x4298 = INT16_MAX;
uint16_t x4300 = 2U;
static int32_t t63 = -7889571;
int32_t t64 = 55102327;
int16_t x4382 = INT16_MIN;
int16_t x4383 = -1;
int8_t x4507 = -1;
int8_t x4508 = 6;
int32_t t66 = 801624;
uint64_t x4530 = 228582241LLU;
uint64_t t67 = UINT64_MAX;
static volatile int64_t x4714 = INT64_MAX;
static uint32_t x4929 = 27U;
int16_t x4931 = INT16_MIN;
volatile uint32_t t69 = 0U;
uint32_t x5043 = 18U;
int64_t x5142 = 260662369841LL;
uint32_t x5144 = 0U;
uint64_t t72 = 43825904952LLU;
int64_t x5242 = -666243LL;
int32_t x5243 = INT32_MAX;
int8_t x5244 = 6;
int8_t x5274 = -5;
static volatile uint32_t x5275 = 11175020U;
volatile int16_t x5338 = -1;
uint8_t x5342 = 0U;
uint16_t x5388 = 0U;
volatile uint32_t t77 = 27690427U;
uint64_t x5602 = 3542LLU;
uint16_t x5612 = 0U;
int32_t t81 = 10364952;
int8_t x5636 = 1;
uint64_t x5649 = 662LLU;
uint64_t t83 = 3465588435434918LLU;
volatile uint32_t t84 = 29625916U;
volatile uint8_t x5713 = UINT8_MAX;
volatile int32_t t85 = 115;
volatile uint32_t t86 = 8913U;
int8_t x5828 = 1;
uint64_t x5850 = 6LLU;
int32_t x5870 = 697882;
uint64_t x5973 = 61059371858497303LLU;
uint64_t t90 = 0LLU;
int32_t t91 = 2;
int16_t x6067 = 500;
int32_t t94 = -4088;
int8_t x6367 = INT8_MIN;
static int16_t x6467 = -1;
static int8_t x6622 = INT8_MIN;


void f0(void) {
	static int8_t x113 = 23;
	uint32_t x114 = 926U;
	int8_t x115 = -1;
	int32_t t0 = -527;

	t0 = ((x113<<(x114==x115))<<x116);

	if (t0 != 1472) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x121 = 860773186451780LLU;
	uint8_t x122 = 3U;
	uint8_t x123 = 1U;
	static volatile uint8_t x124 = 5U;
	volatile uint64_t t1 = 9233LLU;

	t1 = ((x121<<(x122==x123))<<x124);

	if (t1 != 27544741966456960LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x201 = 7366412418804907466LLU;
	volatile int32_t x202 = 4104404;
	int16_t x203 = INT16_MAX;
	uint16_t x204 = 0U;
	static volatile uint64_t t2 = 51LLU;

	t2 = ((x201<<(x202==x203))<<x204);

	if (t2 != 7366412418804907466LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x241 = 23458U;
	static uint32_t x242 = 7254239U;
	uint16_t x243 = 4143U;
	volatile int32_t t3 = 52702736;

	t3 = ((x241<<(x242==x243))<<x244);

	if (t3 != 1501312) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x277 = INT8_MAX;
	static int16_t x279 = INT16_MIN;
	volatile uint8_t x280 = 14U;

	t4 = ((x277<<(x278==x279))<<x280);

	if (t4 != 2080768) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x325 = UINT32_MAX;
	static uint8_t x326 = 40U;
	volatile uint16_t x327 = 3695U;
	volatile int16_t x328 = 11;

	t5 = ((x325<<(x326==x327))<<x328);

	if (t5 != 4294965248U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x469 = UINT8_MAX;
	uint16_t x470 = 457U;
	uint64_t x471 = 150434703LLU;
	static int32_t t6 = 6332;

	t6 = ((x469<<(x470==x471))<<x472);

	if (t6 != 32640) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x538 = -1;
	int64_t x539 = -1601574436551750963LL;
	volatile int64_t t7 = 53543330LL;

	t7 = ((x537<<(x538==x539))<<x540);

	if (t7 != 5299415255734525LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x698 = 47;
	uint32_t x699 = 25885658U;
	static uint16_t x700 = 6U;
	uint32_t t8 = 1617374823U;

	t8 = ((x697<<(x698==x699))<<x700);

	if (t8 != 677834368U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x745 = UINT8_MAX;
	int8_t x746 = INT8_MIN;
	int8_t x747 = INT8_MIN;
	int32_t x748 = 16;
	volatile int32_t t9 = -62049;

	t9 = ((x745<<(x746==x747))<<x748);

	if (t9 != 33423360) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x845 = 37U;
	int16_t x846 = -2;
	uint32_t x848 = 19U;
	int32_t t10 = 2;

	t10 = ((x845<<(x846==x847))<<x848);

	if (t10 != 19398656) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x874 = UINT64_MAX;
	static int8_t x875 = INT8_MIN;
	uint32_t x876 = 2U;
	uint32_t t11 = 1507U;

	t11 = ((x873<<(x874==x875))<<x876);

	if (t11 != 60U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x917 = 1;
	int64_t x918 = INT64_MIN;
	uint32_t x919 = UINT32_MAX;
	static uint16_t x920 = 26U;
	static int32_t t12 = -877;

	t12 = ((x917<<(x918==x919))<<x920);

	if (t12 != 67108864) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x949 = 18LL;
	int64_t x950 = INT64_MIN;
	static volatile uint64_t x951 = UINT64_MAX;
	int16_t x952 = 0;
	static int64_t t13 = -27359618LL;

	t13 = ((x949<<(x950==x951))<<x952);

	if (t13 != 18LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1021 = 14U;
	uint64_t x1022 = UINT64_MAX;
	static uint8_t x1024 = 16U;
	volatile int32_t t14 = 202789;

	t14 = ((x1021<<(x1022==x1023))<<x1024);

	if (t14 != 917504) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1029 = 6;
	static int64_t x1030 = INT64_MIN;
	uint16_t x1031 = 25788U;
	int8_t x1032 = 0;

	t15 = ((x1029<<(x1030==x1031))<<x1032);

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1093 = 266U;
	int8_t x1094 = -1;
	int64_t x1095 = -1LL;
	int32_t x1096 = 1;
	volatile int32_t t16 = -8;

	t16 = ((x1093<<(x1094==x1095))<<x1096);

	if (t16 != 1064) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1117 = 32;
	uint16_t x1118 = UINT16_MAX;
	uint16_t x1119 = UINT16_MAX;
	static int8_t x1120 = 1;
	int32_t t17 = -110270;

	t17 = ((x1117<<(x1118==x1119))<<x1120);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1173 = 33U;
	int16_t x1175 = INT16_MIN;
	uint8_t x1176 = 13U;
	uint32_t t18 = 47673463U;

	t18 = ((x1173<<(x1174==x1175))<<x1176);

	if (t18 != 270336U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1185 = UINT32_MAX;
	uint64_t x1186 = 3702207926LLU;
	int64_t x1187 = -1LL;
	int8_t x1188 = 2;
	uint32_t t19 = 16851U;

	t19 = ((x1185<<(x1186==x1187))<<x1188);

	if (t19 != 4294967292U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1249 = 3033450LLU;
	int32_t x1250 = -1803;
	uint8_t x1251 = 39U;
	int8_t x1252 = 0;
	uint64_t t20 = 227LLU;

	t20 = ((x1249<<(x1250==x1251))<<x1252);

	if (t20 != 3033450LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1257 = 15LLU;
	int16_t x1258 = 5994;
	uint16_t x1259 = UINT16_MAX;
	uint32_t x1260 = 1U;
	static uint64_t t21 = 587883795LLU;

	t21 = ((x1257<<(x1258==x1259))<<x1260);

	if (t21 != 30LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1269 = 12U;
	volatile int8_t x1270 = -44;
	int8_t x1271 = INT8_MIN;
	static uint64_t x1272 = 0LLU;
	volatile int32_t t22 = 1380645;

	t22 = ((x1269<<(x1270==x1271))<<x1272);

	if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1333 = 9LLU;
	static volatile int8_t x1334 = INT8_MIN;
	volatile uint32_t x1335 = UINT32_MAX;
	int16_t x1336 = 7;
	volatile uint64_t t23 = 50854424830645520LLU;

	t23 = ((x1333<<(x1334==x1335))<<x1336);

	if (t23 != 1152LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1337 = 420LLU;
	volatile int8_t x1338 = INT8_MAX;
	int32_t x1339 = INT32_MIN;
	uint64_t x1340 = 11LLU;

	t24 = ((x1337<<(x1338==x1339))<<x1340);

	if (t24 != 860160LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1430 = -2LL;
	uint64_t x1431 = 2747967000179LLU;
	uint16_t x1432 = 0U;
	static volatile int32_t t25 = -1;

	t25 = ((x1429<<(x1430==x1431))<<x1432);

	if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1449 = UINT8_MAX;
	int64_t x1450 = INT64_MIN;
	int64_t x1451 = 10LL;
	int32_t t26 = -1948;

	t26 = ((x1449<<(x1450==x1451))<<x1452);

	if (t26 != 2040) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1454 = INT8_MIN;
	int16_t x1455 = INT16_MIN;
	uint64_t x1456 = 23LLU;
	volatile uint32_t t27 = 14179U;

	t27 = ((x1453<<(x1454==x1455))<<x1456);

	if (t27 != 3447717888U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1557 = UINT64_MAX;
	int32_t x1558 = -1;
	int8_t x1559 = INT8_MIN;
	static uint16_t x1560 = 1U;
	static volatile uint64_t t28 = 874LLU;

	t28 = ((x1557<<(x1558==x1559))<<x1560);

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x1741 = 242951316LLU;
	int8_t x1742 = -1;
	static int16_t x1743 = -223;
	int64_t x1744 = 12LL;

	t29 = ((x1741<<(x1742==x1743))<<x1744);

	if (t29 != 995128590336LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1785 = 130675427005LLU;
	volatile uint32_t x1787 = UINT32_MAX;
	uint8_t x1788 = 28U;
	static volatile uint64_t t30 = 10459625LLU;

	t30 = ((x1785<<(x1786==x1787))<<x1788);

	if (t30 != 16631173762372337664LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1869 = 29;
	static uint32_t x1870 = 19U;
	volatile uint32_t x1871 = 4U;
	int32_t t31 = -3702644;

	t31 = ((x1869<<(x1870==x1871))<<x1872);

	if (t31 != 29) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1949 = 150U;
	volatile int64_t x1950 = 4339677910387057263LL;
	int8_t x1951 = 2;
	uint8_t x1952 = 0U;
	static volatile int32_t t32 = 0;

	t32 = ((x1949<<(x1950==x1951))<<x1952);

	if (t32 != 150) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2222 = 122872LL;
	int32_t x2223 = -1;
	volatile uint8_t x2224 = 6U;
	uint64_t t33 = 8LLU;

	t33 = ((x2221<<(x2222==x2223))<<x2224);

	if (t33 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2333 = 4U;
	volatile int16_t x2335 = -1;
	uint32_t x2336 = 10U;
	volatile int32_t t34 = -436184165;

	t34 = ((x2333<<(x2334==x2335))<<x2336);

	if (t34 != 4096) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2358 = -4;
	uint8_t x2360 = 6U;
	volatile int32_t t35 = -13224562;

	t35 = ((x2357<<(x2358==x2359))<<x2360);

	if (t35 != 16320) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2541 = 1662782611LL;
	static int16_t x2542 = INT16_MIN;
	int16_t x2543 = INT16_MAX;
	uint32_t x2544 = 20U;

	t36 = ((x2541<<(x2542==x2543))<<x2544);

	if (t36 != 1743553939111936LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2553 = 12750066510568886LLU;
	volatile int8_t x2554 = -1;
	uint8_t x2556 = 9U;
	uint64_t t37 = 4LLU;

	t37 = ((x2553<<(x2554==x2555))<<x2556);

	if (t37 != 6528034053411269632LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2717 = 429U;
	int8_t x2718 = 59;
	int32_t x2719 = 12748;

	t38 = ((x2717<<(x2718==x2719))<<x2720);

	if (t38 != 878592U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2751 = UINT32_MAX;
	int8_t x2752 = 0;
	int32_t t39 = 200598954;

	t39 = ((x2749<<(x2750==x2751))<<x2752);

	if (t39 != 4621) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2757 = 5U;
	uint8_t x2758 = 11U;
	uint32_t x2759 = 9400U;
	int8_t x2760 = 17;
	static int32_t t40 = 1019672767;

	t40 = ((x2757<<(x2758==x2759))<<x2760);

	if (t40 != 655360) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x2801 = 72;
	static uint32_t x2802 = 10U;
	int32_t x2803 = -2195566;

	t41 = ((x2801<<(x2802==x2803))<<x2804);

	if (t41 != 36864) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2865 = 1U;
	uint8_t x2867 = UINT8_MAX;
	uint16_t x2868 = 29U;
	int32_t t42 = 130876919;

	t42 = ((x2865<<(x2866==x2867))<<x2868);

	if (t42 != 536870912) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2873 = UINT32_MAX;
	static int64_t x2874 = INT64_MIN;
	uint16_t x2875 = 0U;
	volatile uint8_t x2876 = 2U;

	t43 = ((x2873<<(x2874==x2875))<<x2876);

	if (t43 != 4294967292U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3193 = UINT64_MAX;
	static uint64_t x3194 = 23LLU;
	int8_t x3195 = INT8_MIN;
	static int8_t x3196 = 1;
	uint64_t t44 = 87282333960LLU;

	t44 = ((x3193<<(x3194==x3195))<<x3196);

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3261 = 4136765422259997LL;
	static int8_t x3262 = -1;
	volatile int16_t x3263 = INT16_MIN;
	int8_t x3264 = 4;

	t45 = ((x3261<<(x3262==x3263))<<x3264);

	if (t45 != 66188246756159952LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3337 = INT8_MAX;
	int32_t x3339 = -1;

	t46 = ((x3337<<(x3338==x3339))<<x3340);

	if (t46 != 66584576) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3393 = 351850832U;
	int8_t x3394 = -1;
	volatile uint64_t x3395 = 229983LLU;
	static uint8_t x3396 = 1U;
	volatile uint32_t t47 = 104202U;

	t47 = ((x3393<<(x3394==x3395))<<x3396);

	if (t47 != 703701664U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x3486 = 41;
	int32_t x3487 = INT32_MAX;
	uint8_t x3488 = 4U;

	t48 = ((x3485<<(x3486==x3487))<<x3488);

	if (t48 != 1048560) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3673 = 227052702;
	int16_t x3674 = -1;
	uint16_t x3675 = 1U;
	int32_t x3676 = 0;
	volatile int32_t t49 = 0;

	t49 = ((x3673<<(x3674==x3675))<<x3676);

	if (t49 != 227052702) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x3681 = INT8_MAX;
	int8_t x3683 = -3;
	uint8_t x3684 = 19U;

	t50 = ((x3681<<(x3682==x3683))<<x3684);

	if (t50 != 66584576) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3717 = UINT16_MAX;
	int64_t x3719 = INT64_MIN;
	volatile int32_t x3720 = 2;

	t51 = ((x3717<<(x3718==x3719))<<x3720);

	if (t51 != 262140) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3821 = INT8_MAX;
	volatile int32_t x3822 = INT32_MIN;
	static int8_t x3823 = INT8_MIN;
	static uint16_t x3824 = 17U;
	int32_t t52 = -21836;

	t52 = ((x3821<<(x3822==x3823))<<x3824);

	if (t52 != 16646144) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3837 = 0;
	uint32_t x3838 = UINT32_MAX;
	static int8_t x3840 = 0;
	volatile int32_t t53 = -21;

	t53 = ((x3837<<(x3838==x3839))<<x3840);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3857 = 58340LL;
	static int32_t x3858 = INT32_MIN;
	static int8_t x3859 = INT8_MIN;
	uint8_t x3860 = 14U;
	volatile int64_t t54 = -311844LL;

	t54 = ((x3857<<(x3858==x3859))<<x3860);

	if (t54 != 955842560LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x3946 = 19U;
	static int8_t x3947 = INT8_MAX;
	int8_t x3948 = 0;
	int32_t t55 = -7;

	t55 = ((x3945<<(x3946==x3947))<<x3948);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x4009 = UINT64_MAX;
	int64_t x4010 = INT64_MAX;
	int8_t x4011 = 1;
	static uint8_t x4012 = 3U;

	t56 = ((x4009<<(x4010==x4011))<<x4012);

	if (t56 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4061 = 0;
	int8_t x4062 = INT8_MIN;
	uint8_t x4063 = 2U;
	uint16_t x4064 = 1U;

	t57 = ((x4061<<(x4062==x4063))<<x4064);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x4089 = 1U;
	volatile uint16_t x4090 = 8020U;
	uint32_t x4091 = UINT32_MAX;
	int8_t x4092 = 1;
	int32_t t58 = -18;

	t58 = ((x4089<<(x4090==x4091))<<x4092);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x4143 = INT16_MIN;
	static volatile uint8_t x4144 = 0U;

	t59 = ((x4141<<(x4142==x4143))<<x4144);

	if (t59 != 4U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4193 = 18U;
	uint64_t x4194 = 38934830LLU;
	uint16_t x4195 = UINT16_MAX;
	int8_t x4196 = 1;
	int32_t t60 = -31597649;

	t60 = ((x4193<<(x4194==x4195))<<x4196);

	if (t60 != 36) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4273 = UINT8_MAX;
	int8_t x4274 = INT8_MIN;
	volatile int64_t x4275 = INT64_MAX;
	int8_t x4276 = 0;
	volatile int32_t t61 = 0;

	t61 = ((x4273<<(x4274==x4275))<<x4276);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x4281 = 0;
	int32_t x4282 = INT32_MIN;
	int8_t x4283 = INT8_MIN;
	uint8_t x4284 = 0U;

	t62 = ((x4281<<(x4282==x4283))<<x4284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4297 = 13U;
	volatile int32_t x4299 = INT32_MIN;

	t63 = ((x4297<<(x4298==x4299))<<x4300);

	if (t63 != 52) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4325 = 1U;
	int64_t x4326 = INT64_MAX;
	uint16_t x4327 = UINT16_MAX;
	volatile int8_t x4328 = 30;

	t64 = ((x4325<<(x4326==x4327))<<x4328);

	if (t64 != 1073741824) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x4381 = 3532U;
	uint8_t x4384 = 15U;
	static int32_t t65 = -2967;

	t65 = ((x4381<<(x4382==x4383))<<x4384);

	if (t65 != 115736576) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4505 = INT8_MAX;
	int8_t x4506 = INT8_MIN;

	t66 = ((x4505<<(x4506==x4507))<<x4508);

	if (t66 != 8128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x4529 = UINT64_MAX;
	static volatile int64_t x4531 = -1772815LL;
	static uint16_t x4532 = 0U;

	t67 = ((x4529<<(x4530==x4531))<<x4532);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4713 = 1U;
	static int64_t x4715 = INT64_MIN;
	static int8_t x4716 = 1;
	int32_t t68 = -117;

	t68 = ((x4713<<(x4714==x4715))<<x4716);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x4930 = 229630994397227LL;
	volatile uint8_t x4932 = 1U;

	t69 = ((x4929<<(x4930==x4931))<<x4932);

	if (t69 != 54U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5041 = 16;
	static uint32_t x5042 = 32330U;
	static uint8_t x5044 = 1U;
	volatile int32_t t70 = 5689;

	t70 = ((x5041<<(x5042==x5043))<<x5044);

	if (t70 != 32) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x5141 = UINT64_MAX;
	uint16_t x5143 = 41U;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x5141<<(x5142==x5143))<<x5144);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x5157 = 526735LLU;
	uint64_t x5158 = 4077400512LLU;
	uint32_t x5159 = 1771347U;
	volatile uint64_t x5160 = 4LLU;

	t72 = ((x5157<<(x5158==x5159))<<x5160);

	if (t72 != 8427760LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x5241 = 6;
	int32_t t73 = -29;

	t73 = ((x5241<<(x5242==x5243))<<x5244);

	if (t73 != 384) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5273 = INT16_MAX;
	int8_t x5276 = 0;
	int32_t t74 = 1910394;

	t74 = ((x5273<<(x5274==x5275))<<x5276);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5337 = 131711974;
	int64_t x5339 = INT64_MAX;
	volatile uint32_t x5340 = 3U;
	volatile int32_t t75 = -173463967;

	t75 = ((x5337<<(x5338==x5339))<<x5340);

	if (t75 != 1053695792) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5341 = 12834U;
	static volatile uint16_t x5343 = 966U;
	int8_t x5344 = 2;
	volatile uint32_t t76 = 892762U;

	t76 = ((x5341<<(x5342==x5343))<<x5344);

	if (t76 != 51336U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5385 = 174618363U;
	static int8_t x5386 = INT8_MIN;
	static volatile int64_t x5387 = -1LL;

	t77 = ((x5385<<(x5386==x5387))<<x5388);

	if (t77 != 174618363U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5553 = 134;
	int64_t x5554 = -3917LL;
	int16_t x5555 = INT16_MAX;
	uint64_t x5556 = 11LLU;
	static volatile int32_t t78 = 2177;

	t78 = ((x5553<<(x5554==x5555))<<x5556);

	if (t78 != 274432) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5601 = INT8_MAX;
	uint8_t x5603 = 1U;
	uint8_t x5604 = 10U;
	int32_t t79 = 279;

	t79 = ((x5601<<(x5602==x5603))<<x5604);

	if (t79 != 130048) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5609 = 0U;
	int8_t x5610 = INT8_MAX;
	volatile uint8_t x5611 = UINT8_MAX;
	uint32_t t80 = 728U;

	t80 = ((x5609<<(x5610==x5611))<<x5612);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5613 = INT8_MAX;
	int32_t x5614 = -1;
	int8_t x5615 = -1;
	uint32_t x5616 = 0U;

	t81 = ((x5613<<(x5614==x5615))<<x5616);

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x5633 = 338U;
	static int8_t x5634 = INT8_MIN;
	static uint64_t x5635 = 3685232LLU;
	volatile uint32_t t82 = 424266256U;

	t82 = ((x5633<<(x5634==x5635))<<x5636);

	if (t82 != 676U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5650 = INT8_MIN;
	int16_t x5651 = 1;
	int8_t x5652 = 30;

	t83 = ((x5649<<(x5650==x5651))<<x5652);

	if (t83 != 710817087488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5693 = 2U;
	static uint8_t x5694 = 0U;
	volatile int16_t x5695 = INT16_MIN;
	int16_t x5696 = 28;

	t84 = ((x5693<<(x5694==x5695))<<x5696);

	if (t84 != 536870912U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x5714 = 6;
	uint32_t x5715 = 1509U;
	volatile int32_t x5716 = 4;

	t85 = ((x5713<<(x5714==x5715))<<x5716);

	if (t85 != 4080) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5785 = UINT32_MAX;
	uint64_t x5786 = UINT64_MAX;
	uint16_t x5787 = 1U;
	uint8_t x5788 = 3U;

	t86 = ((x5785<<(x5786==x5787))<<x5788);

	if (t86 != 4294967288U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5825 = 0U;
	static volatile int32_t x5826 = INT32_MIN;
	static int16_t x5827 = INT16_MIN;
	int32_t t87 = 46;

	t87 = ((x5825<<(x5826==x5827))<<x5828);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5849 = UINT16_MAX;
	static volatile int64_t x5851 = -21650508LL;
	int8_t x5852 = 0;
	volatile int32_t t88 = 109205;

	t88 = ((x5849<<(x5850==x5851))<<x5852);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5869 = INT8_MAX;
	uint16_t x5871 = 44U;
	int8_t x5872 = 8;
	int32_t t89 = 6689;

	t89 = ((x5869<<(x5870==x5871))<<x5872);

	if (t89 != 32512) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5974 = 57;
	static int64_t x5975 = INT64_MAX;
	uint8_t x5976 = 13U;

	t90 = ((x5973<<(x5974==x5975))<<x5976);

	if (t90 != 2136284274652012544LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6041 = INT16_MAX;
	volatile int32_t x6042 = -1;
	static int32_t x6043 = INT32_MIN;
	uint8_t x6044 = 1U;

	t91 = ((x6041<<(x6042==x6043))<<x6044);

	if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x6065 = UINT64_MAX;
	int16_t x6066 = INT16_MIN;
	uint8_t x6068 = 2U;
	uint64_t t92 = 5919403588LLU;

	t92 = ((x6065<<(x6066==x6067))<<x6068);

	if (t92 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x6217 = UINT64_MAX;
	int8_t x6218 = INT8_MAX;
	int8_t x6219 = -1;
	static int8_t x6220 = 7;
	uint64_t t93 = 14LLU;

	t93 = ((x6217<<(x6218==x6219))<<x6220);

	if (t93 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6257 = 3U;
	volatile uint64_t x6258 = 697LLU;
	uint8_t x6259 = 0U;
	volatile uint16_t x6260 = 3U;

	t94 = ((x6257<<(x6258==x6259))<<x6260);

	if (t94 != 24) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6365 = 88;
	int64_t x6366 = 821317LL;
	int16_t x6368 = 3;
	volatile int32_t t95 = -851;

	t95 = ((x6365<<(x6366==x6367))<<x6368);

	if (t95 != 704) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6465 = 26617U;
	static int8_t x6466 = -1;
	int8_t x6468 = 5;
	int32_t t96 = -5869442;

	t96 = ((x6465<<(x6466==x6467))<<x6468);

	if (t96 != 1703488) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6621 = UINT32_MAX;
	static int16_t x6623 = -1;
	int8_t x6624 = 27;
	volatile uint32_t t97 = 1030U;

	t97 = ((x6621<<(x6622==x6623))<<x6624);

	if (t97 != 4160749568U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x6657 = UINT8_MAX;
	int64_t x6658 = INT64_MAX;
	int64_t x6659 = INT64_MAX;
	static uint8_t x6660 = 1U;
	volatile int32_t t98 = 4228;

	t98 = ((x6657<<(x6658==x6659))<<x6660);

	if (t98 != 1020) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x6769 = UINT32_MAX;
	int64_t x6770 = 8322174814259LL;
	int8_t x6771 = -16;
	uint32_t x6772 = 14U;
	uint32_t t99 = 1005915164U;

	t99 = ((x6769<<(x6770==x6771))<<x6772);

	if (t99 != 4294950912U) { NG(); } else { ; }
	
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

