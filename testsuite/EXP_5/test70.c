#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = UINT32_MAX;
uint16_t x26 = UINT16_MAX;
volatile int64_t x94 = -1LL;
int64_t x95 = 811035LL;
volatile int16_t x137 = -1;
int32_t x199 = -82243;
int16_t x237 = INT16_MIN;
volatile int8_t x239 = 0;
volatile int32_t x354 = -147952305;
static uint64_t x355 = 189955LLU;
volatile uint8_t x356 = 0U;
int8_t x562 = INT8_MIN;
int8_t x564 = 23;
int32_t x637 = INT32_MIN;
int8_t x639 = 28;
static uint64_t x683 = 1586LLU;
uint64_t t17 = 18533738050806LLU;
static int8_t x904 = 2;
int64_t x1014 = INT64_MAX;
uint32_t x1016 = 0U;
int16_t x1157 = -1;
int64_t x1158 = -1LL;
uint64_t x1159 = UINT64_MAX;
volatile uint64_t t23 = 250875104492535LLU;
static uint16_t x1320 = 1U;
volatile uint32_t t24 = 0U;
uint64_t t25 = 91843888159310249LLU;
volatile uint8_t x1424 = 14U;
static int32_t x1462 = 129228673;
static int16_t x1476 = 1;
volatile uint64_t t29 = 1104717509047177LLU;
uint8_t x1601 = 48U;
volatile int16_t x1674 = INT16_MAX;
volatile uint16_t x1675 = UINT16_MAX;
uint32_t x1738 = UINT32_MAX;
uint16_t x1756 = 1U;
uint64_t x1775 = UINT64_MAX;
int8_t x1886 = INT8_MIN;
uint64_t t37 = 21406024854454LLU;
uint64_t x2123 = UINT64_MAX;
static volatile uint64_t x2155 = 71135LLU;
uint16_t x2206 = 271U;
static int64_t t42 = 2702113918192683LL;
static int8_t x2440 = 0;
int64_t x2465 = INT64_MAX;
int8_t x2467 = 9;
volatile int64_t x2587 = 15790000LL;
volatile int64_t t47 = -55LL;
volatile uint32_t x2613 = 382228509U;
uint32_t x2615 = UINT32_MAX;
volatile int32_t x2666 = -23;
int64_t x2754 = 12LL;
int64_t t50 = -20763LL;
int16_t x2825 = INT16_MIN;
static uint8_t x2838 = 1U;
int32_t x2953 = 2225879;
volatile uint16_t x2954 = 6U;
uint16_t x2956 = 6U;
static volatile uint64_t t57 = 1966363033779LLU;
int8_t x3257 = INT8_MIN;
static volatile int64_t t61 = 726977LL;
int64_t t62 = 598649057321354966LL;
volatile int64_t x3469 = INT64_MIN;
int64_t x3471 = INT64_MAX;
uint16_t x3548 = 27U;
volatile uint32_t t64 = 92572U;
int8_t x3577 = INT8_MIN;
uint8_t x3673 = UINT8_MAX;
uint16_t x3675 = 12183U;
int64_t x3715 = -1LL;
uint8_t x3716 = 0U;
int64_t t71 = 252043805086309LL;
volatile int64_t x3847 = 9391529021LL;
uint64_t x3858 = UINT64_MAX;
int64_t x3953 = -5846802LL;
static int8_t x3955 = INT8_MIN;
uint32_t x4158 = UINT32_MAX;
int64_t x4177 = -3LL;
static uint8_t x4276 = 6U;
int8_t x4441 = -1;
volatile uint8_t x4444 = 44U;
int32_t x4536 = 3;
uint64_t x4552 = 2LLU;
volatile uint8_t x4674 = 107U;
volatile int16_t x4675 = -24;
int64_t x4737 = 1697LL;
uint64_t x4738 = 158460486862LLU;
int32_t x4739 = -1;
static int8_t x4785 = -1;
uint16_t x4787 = 0U;
volatile uint32_t t90 = 566959659U;
volatile uint32_t t94 = 4074U;
uint16_t x5036 = 13U;
volatile uint32_t t95 = 20U;
static uint32_t x5278 = 834815684U;


void f0(void) {
	static int8_t x10 = -1;
	volatile uint64_t x11 = 3179909214866LLU;
	static volatile uint32_t x12 = 44U;
	volatile uint64_t t0 = 973896991LLU;

	t0 = (x9%((x10+x11)<<x12));

	if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x25 = 1U;
	uint16_t x27 = UINT16_MAX;
	uint8_t x28 = 6U;
	volatile int32_t t1 = 5595;

	t1 = (x25%((x26+x27)<<x28));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = 716109532U;
	uint16_t x52 = 2U;
	volatile int64_t t2 = 1LL;

	t2 = (x49%((x50+x51)<<x52));

	if (t2 != -1239576436LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x93 = INT64_MAX;
	int8_t x96 = 9;
	int64_t t3 = 19702728963916LL;

	t3 = (x93%((x94+x95)<<x96));

	if (t3 != 199045119LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x138 = 4313U;
	static int16_t x139 = INT16_MIN;
	uint16_t x140 = 0U;
	static volatile uint32_t t4 = 3444378U;

	t4 = (x137%((x138+x139)<<x140));

	if (t4 != 28454U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x197 = UINT16_MAX;
	uint64_t x198 = 9099883963716919LLU;
	static volatile int16_t x200 = 9;
	uint64_t t5 = 6972LLU;

	t5 = (x197%((x198+x199)<<x200));

	if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x238 = 116U;
	uint8_t x240 = 1U;
	static int32_t t6 = -232322933;

	t6 = (x237%((x238+x239)<<x240));

	if (t6 != -56) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x353 = -1467048725593521LL;
	static uint64_t t7 = 87119182383710LLU;

	t7 = (x353%((x354+x355)<<x356));

	if (t7 != 18445277024983958095LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MIN;
	static uint64_t x367 = 223429789528830LLU;
	uint8_t x368 = 22U;
	volatile uint64_t t8 = 622219854486741273LLU;

	t8 = (x365%((x366+x367)<<x368));

	if (t8 != 3651487956696301567LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x453 = INT16_MIN;
	uint32_t x454 = UINT32_MAX;
	int16_t x455 = -1;
	static int32_t x456 = 5;
	static volatile uint32_t t9 = 117945U;

	t9 = (x453%((x454+x455)<<x456));

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x465 = 32;
	int8_t x466 = INT8_MAX;
	uint8_t x467 = 1U;
	int8_t x468 = 21;
	int32_t t10 = 6500507;

	t10 = (x465%((x466+x467)<<x468));

	if (t10 != 32) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x473 = INT32_MIN;
	volatile int32_t x474 = -1;
	static uint32_t x475 = 3U;
	int16_t x476 = 1;
	static volatile uint32_t t11 = 62U;

	t11 = (x473%((x474+x475)<<x476));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x549 = -1;
	int64_t x550 = -1LL;
	static uint16_t x551 = UINT16_MAX;
	volatile int16_t x552 = 1;
	int64_t t12 = -533015LL;

	t12 = (x549%((x550+x551)<<x552));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x561 = 35729U;
	uint32_t x563 = UINT32_MAX;
	volatile uint32_t t13 = 28750801U;

	t13 = (x561%((x562+x563)<<x564));

	if (t13 != 35729U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x638 = 0U;
	uint64_t x640 = 3LLU;
	volatile int32_t t14 = -26537050;

	t14 = (x637%((x638+x639)<<x640));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x681 = 2156U;
	int64_t x682 = INT64_MIN;
	int8_t x684 = 0;
	static uint64_t t15 = 1050831704190893LLU;

	t15 = (x681%((x682+x683)<<x684));

	if (t15 != 2156LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x701 = 10236800LLU;
	static int8_t x702 = INT8_MIN;
	volatile uint32_t x703 = 1007529U;
	volatile int8_t x704 = 14;
	volatile uint64_t t16 = 4110821580988436150LLU;

	t16 = (x701%((x702+x703)<<x704));

	if (t16 != 10236800LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x841 = 0U;
	static int64_t x842 = INT64_MAX;
	uint64_t x843 = UINT64_MAX;
	int8_t x844 = 7;

	t17 = (x841%((x842+x843)<<x844));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x881 = UINT8_MAX;
	static int8_t x882 = -2;
	uint32_t x883 = 3263U;
	int8_t x884 = 0;
	uint32_t t18 = 27214U;

	t18 = (x881%((x882+x883)<<x884));

	if (t18 != 255U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x901 = UINT16_MAX;
	static uint64_t x902 = 3778LLU;
	uint32_t x903 = UINT32_MAX;
	static volatile uint64_t t19 = 343LLU;

	t19 = (x901%((x902+x903)<<x904));

	if (t19 != 65535LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x961 = -1;
	uint16_t x962 = UINT16_MAX;
	volatile int32_t x963 = -92;
	uint8_t x964 = 2U;
	static volatile int32_t t20 = 578773256;

	t20 = (x961%((x962+x963)<<x964));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x1013 = 1585673U;
	volatile int32_t x1015 = INT32_MIN;
	volatile int64_t t21 = -44362LL;

	t21 = (x1013%((x1014+x1015)<<x1016));

	if (t21 != 1585673LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1160 = 6;
	volatile uint64_t t22 = 1079693LLU;

	t22 = (x1157%((x1158+x1159)<<x1160));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1257 = INT16_MAX;
	uint64_t x1258 = UINT64_MAX;
	int16_t x1259 = INT16_MAX;
	uint8_t x1260 = 2U;

	t23 = (x1257%((x1258+x1259)<<x1260));

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1317 = -1;
	uint32_t x1318 = 7U;
	int32_t x1319 = -17589840;

	t24 = (x1317%((x1318+x1319)<<x1320));

	if (t24 != 35179665U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1329 = 35686739U;
	static int16_t x1330 = -1;
	uint64_t x1331 = 14432417968039852LLU;
	uint8_t x1332 = 0U;

	t25 = (x1329%((x1330+x1331)<<x1332));

	if (t25 != 35686739LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1377 = UINT32_MAX;
	uint32_t x1378 = 1U;
	volatile int32_t x1379 = INT32_MIN;
	uint64_t x1380 = 3LLU;
	volatile uint32_t t26 = 4546158U;

	t26 = (x1377%((x1378+x1379)<<x1380));

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1421 = 2U;
	uint64_t x1422 = UINT64_MAX;
	uint32_t x1423 = 13836161U;
	uint64_t t27 = 802282677136LLU;

	t27 = (x1421%((x1422+x1423)<<x1424));

	if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1461 = -1LL;
	uint32_t x1463 = 11565U;
	volatile int8_t x1464 = 6;
	int64_t t28 = 34889885980276602LL;

	t28 = (x1461%((x1462+x1463)<<x1464));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1473 = INT64_MIN;
	uint64_t x1474 = UINT64_MAX;
	uint32_t x1475 = 0U;

	t29 = (x1473%((x1474+x1475)<<x1476));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1505 = INT16_MIN;
	int8_t x1506 = INT8_MAX;
	volatile int64_t x1507 = -1LL;
	uint16_t x1508 = 14U;
	volatile int64_t t30 = -235744157963483LL;

	t30 = (x1505%((x1506+x1507)<<x1508));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1602 = 3U;
	volatile uint32_t x1603 = UINT32_MAX;
	volatile int64_t x1604 = 4LL;
	uint32_t t31 = 5U;

	t31 = (x1601%((x1602+x1603)<<x1604));

	if (t31 != 16U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1673 = 37U;
	volatile int8_t x1676 = 1;
	static int32_t t32 = 138970447;

	t32 = (x1673%((x1674+x1675)<<x1676));

	if (t32 != 37) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1737 = 37984LLU;
	static int64_t x1739 = 4058764874614659LL;
	uint32_t x1740 = 6U;
	volatile uint64_t t33 = 104769LLU;

	t33 = (x1737%((x1738+x1739)<<x1740));

	if (t33 != 37984LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1753 = INT64_MAX;
	int8_t x1754 = -1;
	volatile uint32_t x1755 = UINT32_MAX;
	int64_t t34 = -904011605517LL;

	t34 = (x1753%((x1754+x1755)<<x1756));

	if (t34 != 7LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1773 = INT64_MAX;
	uint16_t x1774 = UINT16_MAX;
	int8_t x1776 = 12;
	volatile uint64_t t35 = 6545388387982549995LLU;

	t35 = (x1773%((x1774+x1775)<<x1776));

	if (t35 != 262143LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1885 = 39;
	uint32_t x1887 = 31132U;
	int64_t x1888 = 1LL;
	uint32_t t36 = 0U;

	t36 = (x1885%((x1886+x1887)<<x1888));

	if (t36 != 39U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1893 = UINT32_MAX;
	volatile uint32_t x1894 = UINT32_MAX;
	uint64_t x1895 = UINT64_MAX;
	volatile uint8_t x1896 = 0U;

	t37 = (x1893%((x1894+x1895)<<x1896));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2021 = 49U;
	uint8_t x2022 = 9U;
	static int16_t x2023 = 0;
	uint8_t x2024 = 2U;
	volatile int32_t t38 = 80;

	t38 = (x2021%((x2022+x2023)<<x2024));

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2097 = INT8_MAX;
	volatile uint64_t x2098 = UINT64_MAX;
	static int32_t x2099 = INT32_MIN;
	static int8_t x2100 = 0;
	uint64_t t39 = 1138179529381639LLU;

	t39 = (x2097%((x2098+x2099)<<x2100));

	if (t39 != 127LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2121 = INT16_MIN;
	volatile uint16_t x2122 = 2U;
	static int8_t x2124 = 0;
	volatile uint64_t t40 = 1LLU;

	t40 = (x2121%((x2122+x2123)<<x2124));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2153 = 133112735;
	static int32_t x2154 = -1;
	volatile int8_t x2156 = 7;
	static volatile uint64_t t41 = 604LLU;

	t41 = (x2153%((x2154+x2155)<<x2156));

	if (t41 != 5640607LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2205 = 0U;
	int64_t x2207 = 157769943927681860LL;
	volatile uint16_t x2208 = 1U;

	t42 = (x2205%((x2206+x2207)<<x2208));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2337 = INT32_MIN;
	uint64_t x2338 = 977984795LLU;
	volatile int16_t x2339 = -7;
	int32_t x2340 = 1;
	uint64_t t43 = 154126987LLU;

	t43 = (x2337%((x2338+x2339)<<x2340));

	if (t43 != 1720273800LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2437 = INT32_MIN;
	int16_t x2438 = 451;
	uint32_t x2439 = 131611598U;
	static uint32_t t44 = 2927U;

	t44 = (x2437%((x2438+x2439)<<x2440));

	if (t44 != 41690864U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x2466 = 1429;
	int8_t x2468 = 2;
	static int64_t t45 = 993512289590563LL;

	t45 = (x2465%((x2466+x2467)<<x2468));

	if (t45 != 1871LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2477 = 1272LLU;
	uint64_t x2478 = 82187672987128LLU;
	static int16_t x2479 = INT16_MAX;
	int16_t x2480 = 1;
	static uint64_t t46 = 1015962987LLU;

	t46 = (x2477%((x2478+x2479)<<x2480));

	if (t46 != 1272LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2585 = 7584560U;
	static uint8_t x2586 = UINT8_MAX;
	static uint16_t x2588 = 0U;

	t47 = (x2585%((x2586+x2587)<<x2588));

	if (t47 != 7584560LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2614 = 3394LL;
	uint32_t x2616 = 28U;
	static int64_t t48 = 119100354LL;

	t48 = (x2613%((x2614+x2615)<<x2616));

	if (t48 != 382228509LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2665 = UINT32_MAX;
	uint32_t x2667 = 3U;
	static volatile int32_t x2668 = 8;
	volatile uint32_t t49 = 228416500U;

	t49 = (x2665%((x2666+x2667)<<x2668));

	if (t49 != 5119U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x2753 = 533U;
	volatile int8_t x2755 = 5;
	static uint8_t x2756 = 2U;

	t50 = (x2753%((x2754+x2755)<<x2756));

	if (t50 != 57LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2821 = -18376573;
	int8_t x2822 = 56;
	int8_t x2823 = INT8_MAX;
	volatile int8_t x2824 = 3;
	volatile int32_t t51 = -3;

	t51 = (x2821%((x2822+x2823)<<x2824));

	if (t51 != -445) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2826 = UINT32_MAX;
	int8_t x2827 = INT8_MIN;
	uint32_t x2828 = 11U;
	volatile uint32_t t52 = 48U;

	t52 = (x2825%((x2826+x2827)<<x2828));

	if (t52 != 231424U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2833 = 36421633U;
	uint32_t x2834 = UINT32_MAX;
	int32_t x2835 = -1;
	static volatile int64_t x2836 = 0LL;
	uint32_t t53 = 211775U;

	t53 = (x2833%((x2834+x2835)<<x2836));

	if (t53 != 36421633U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2837 = INT32_MAX;
	volatile int16_t x2839 = 1485;
	uint8_t x2840 = 5U;
	volatile int32_t t54 = 744780863;

	t54 = (x2837%((x2838+x2839)<<x2840));

	if (t54 != 35327) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2913 = -1;
	int8_t x2914 = -1;
	uint32_t x2915 = 15521757U;
	static int16_t x2916 = 1;
	volatile uint32_t t55 = 79490434U;

	t55 = (x2913%((x2914+x2915)<<x2916));

	if (t55 != 10962639U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2941 = INT8_MAX;
	int16_t x2942 = -221;
	uint64_t x2943 = UINT64_MAX;
	uint8_t x2944 = 5U;
	uint64_t t56 = 25LLU;

	t56 = (x2941%((x2942+x2943)<<x2944));

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2955 = UINT64_MAX;

	t57 = (x2953%((x2954+x2955)<<x2956));

	if (t57 != 279LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3017 = -6311;
	int64_t x3018 = INT64_MIN;
	uint64_t x3019 = 1299274779894832052LLU;
	volatile uint8_t x3020 = 12U;
	volatile uint64_t t58 = 732354LLU;

	t58 = (x3017%((x3018+x3019)<<x3020));

	if (t58 != 112333631947106137LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3173 = INT32_MIN;
	int8_t x3174 = INT8_MAX;
	uint32_t x3175 = UINT32_MAX;
	uint8_t x3176 = 1U;
	uint32_t t59 = 3U;

	t59 = (x3173%((x3174+x3175)<<x3176));

	if (t59 != 128U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3258 = 45218LLU;
	volatile uint16_t x3259 = 1U;
	int64_t x3260 = 6LL;
	uint64_t t60 = 23LLU;

	t60 = (x3257%((x3258+x3259)<<x3260));

	if (t60 != 1203776LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3269 = INT64_MAX;
	uint32_t x3270 = 1556220066U;
	static int16_t x3271 = INT16_MIN;
	int64_t x3272 = 7LL;

	t61 = (x3269%((x3270+x3271)<<x3272));

	if (t61 != 1267736575LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3429 = INT32_MIN;
	int16_t x3430 = -22;
	static int64_t x3431 = 6478563980927724LL;
	volatile int64_t x3432 = 5LL;

	t62 = (x3429%((x3430+x3431)<<x3432));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3470 = -1;
	volatile int8_t x3472 = 0;
	volatile int64_t t63 = -521LL;

	t63 = (x3469%((x3470+x3471)<<x3472));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3545 = INT8_MIN;
	int32_t x3546 = INT32_MIN;
	static uint32_t x3547 = UINT32_MAX;

	t64 = (x3545%((x3546+x3547)<<x3548));

	if (t64 != 134217600U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x3569 = INT32_MAX;
	volatile uint32_t x3570 = UINT32_MAX;
	int8_t x3571 = INT8_MIN;
	uint8_t x3572 = 1U;
	volatile uint32_t t65 = 14U;

	t65 = (x3569%((x3570+x3571)<<x3572));

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x3573 = INT32_MIN;
	static volatile int64_t x3574 = 9150LL;
	volatile int64_t x3575 = -1LL;
	uint8_t x3576 = 10U;
	int64_t t66 = -209275164001579153LL;

	t66 = (x3573%((x3574+x3575)<<x3576));

	if (t66 != -2079744LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3578 = INT8_MIN;
	uint8_t x3579 = UINT8_MAX;
	static volatile int8_t x3580 = 2;
	volatile int32_t t67 = 16528568;

	t67 = (x3577%((x3578+x3579)<<x3580));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3645 = UINT32_MAX;
	int64_t x3646 = INT64_MIN;
	volatile uint64_t x3647 = 365890448424LLU;
	int16_t x3648 = 60;
	volatile uint64_t t68 = 4722LLU;

	t68 = (x3645%((x3646+x3647)<<x3648));

	if (t68 != 4294967295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3657 = -1;
	volatile uint16_t x3658 = 7965U;
	static volatile int16_t x3659 = -1;
	uint8_t x3660 = 12U;
	int32_t t69 = 1494521;

	t69 = (x3657%((x3658+x3659)<<x3660));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3674 = 104728962539583036LL;
	volatile uint8_t x3676 = 1U;
	int64_t t70 = 788LL;

	t70 = (x3673%((x3674+x3675)<<x3676));

	if (t70 != 255LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x3713 = UINT16_MAX;
	uint32_t x3714 = UINT32_MAX;

	t71 = (x3713%((x3714+x3715)<<x3716));

	if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3809 = -1LL;
	static int8_t x3810 = -1;
	uint32_t x3811 = 49U;
	static int8_t x3812 = 10;
	volatile int64_t t72 = -79033307319LL;

	t72 = (x3809%((x3810+x3811)<<x3812));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3833 = -1;
	volatile uint64_t x3834 = 3641966LLU;
	volatile int32_t x3835 = INT32_MIN;
	int16_t x3836 = 52;
	static volatile uint64_t t73 = 1LLU;

	t73 = (x3833%((x3834+x3835)<<x3836));

	if (t73 != 1639310264362860543LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3845 = 50;
	int32_t x3846 = 71;
	uint16_t x3848 = 4U;
	volatile int64_t t74 = 60664231LL;

	t74 = (x3845%((x3846+x3847)<<x3848));

	if (t74 != 50LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3857 = INT16_MIN;
	int32_t x3859 = INT32_MIN;
	uint64_t x3860 = 1LLU;
	static uint64_t t75 = 52LLU;

	t75 = (x3857%((x3858+x3859)<<x3860));

	if (t75 != 4294934530LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3897 = 3240835U;
	int64_t x3898 = 3320069477032622324LL;
	int16_t x3899 = INT16_MIN;
	int8_t x3900 = 0;
	int64_t t76 = 585426484LL;

	t76 = (x3897%((x3898+x3899)<<x3900));

	if (t76 != 3240835LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3954 = 489U;
	static int16_t x3956 = 0;
	volatile int64_t t77 = -3348867914LL;

	t77 = (x3953%((x3954+x3955)<<x3956));

	if (t77 != -46LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4005 = INT64_MIN;
	volatile int8_t x4006 = INT8_MAX;
	int8_t x4007 = 5;
	int8_t x4008 = 11;
	volatile int64_t t78 = 176817603901LL;

	t78 = (x4005%((x4006+x4007)<<x4008));

	if (t78 != -8192LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4157 = -1LL;
	static int8_t x4159 = INT8_MIN;
	uint8_t x4160 = 7U;
	volatile int64_t t79 = 14185366704175256LL;

	t79 = (x4157%((x4158+x4159)<<x4160));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4178 = 16U;
	volatile int8_t x4179 = INT8_MIN;
	uint16_t x4180 = 17U;
	volatile int64_t t80 = 348821550981118LL;

	t80 = (x4177%((x4178+x4179)<<x4180));

	if (t80 != -3LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4273 = 2046U;
	int8_t x4274 = -1;
	int32_t x4275 = 78910;
	int32_t t81 = -1198;

	t81 = (x4273%((x4274+x4275)<<x4276));

	if (t81 != 2046) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4345 = -1;
	int8_t x4346 = INT8_MAX;
	static int8_t x4347 = 3;
	uint8_t x4348 = 1U;
	volatile int32_t t82 = 4379;

	t82 = (x4345%((x4346+x4347)<<x4348));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4442 = 2307269669695794LLU;
	volatile int16_t x4443 = INT16_MIN;
	uint64_t t83 = 60395901146LLU;

	t83 = (x4441%((x4442+x4443)<<x4444));

	if (t83 != 354904761260048383LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4489 = -1LL;
	int16_t x4490 = INT16_MAX;
	uint64_t x4491 = 4051498502LLU;
	int64_t x4492 = 10LL;
	uint64_t t84 = 17LLU;

	t84 = (x4489%((x4490+x4491)<<x4492));

	if (t84 != 2150977988607LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4533 = -211;
	int64_t x4534 = INT64_MIN;
	volatile uint64_t x4535 = 1196492663435LLU;
	volatile uint64_t t85 = 3081784938670076518LLU;

	t85 = (x4533%((x4534+x4535)<<x4536));

	if (t85 != 5088055934765LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4549 = 362U;
	uint32_t x4550 = 142576U;
	uint16_t x4551 = 21U;
	volatile uint32_t t86 = 26857U;

	t86 = (x4549%((x4550+x4551)<<x4552));

	if (t86 != 362U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4597 = -1;
	uint8_t x4598 = UINT8_MAX;
	volatile uint32_t x4599 = 223U;
	int8_t x4600 = 0;
	static uint32_t t87 = 63571564U;

	t87 = (x4597%((x4598+x4599)<<x4600));

	if (t87 != 109U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4673 = 395550LL;
	uint8_t x4676 = 14U;
	volatile int64_t t88 = -1563LL;

	t88 = (x4673%((x4674+x4675)<<x4676));

	if (t88 != 395550LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4740 = 34U;
	volatile uint64_t t89 = 617LLU;

	t89 = (x4737%((x4738+x4739)<<x4740));

	if (t89 != 1697LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4786 = UINT32_MAX;
	int32_t x4788 = 11;

	t90 = (x4785%((x4786+x4787)<<x4788));

	if (t90 != 2047U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4797 = -28428LL;
	static uint8_t x4798 = UINT8_MAX;
	static int8_t x4799 = 11;
	uint32_t x4800 = 1U;
	volatile int64_t t91 = 47439819334962372LL;

	t91 = (x4797%((x4798+x4799)<<x4800));

	if (t91 != -232LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4805 = 2;
	uint32_t x4806 = 9949U;
	static int16_t x4807 = 3;
	uint16_t x4808 = 3U;
	volatile uint32_t t92 = 1039766U;

	t92 = (x4805%((x4806+x4807)<<x4808));

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4861 = -1LL;
	int16_t x4862 = INT16_MIN;
	static volatile uint32_t x4863 = 232U;
	static uint32_t x4864 = 10U;
	volatile int64_t t93 = 26866311624362LL;

	t93 = (x4861%((x4862+x4863)<<x4864));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4917 = INT16_MAX;
	uint32_t x4918 = 125U;
	int32_t x4919 = -1;
	static uint8_t x4920 = 2U;

	t94 = (x4917%((x4918+x4919)<<x4920));

	if (t94 != 31U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5033 = 365345U;
	static int16_t x5034 = INT16_MAX;
	static uint8_t x5035 = 29U;

	t95 = (x5033%((x5034+x5035)<<x5036));

	if (t95 != 365345U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5109 = UINT64_MAX;
	uint32_t x5110 = 26977311U;
	int8_t x5111 = INT8_MIN;
	uint32_t x5112 = 1U;
	uint64_t t96 = 14149LLU;

	t96 = (x5109%((x5110+x5111)<<x5112));

	if (t96 != 13316407LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5169 = INT32_MIN;
	uint8_t x5170 = UINT8_MAX;
	volatile uint16_t x5171 = 0U;
	uint32_t x5172 = 4U;
	volatile int32_t t97 = -181768802;

	t97 = (x5169%((x5170+x5171)<<x5172));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x5181 = 25U;
	uint64_t x5182 = 478LLU;
	volatile uint64_t x5183 = 173LLU;
	volatile uint64_t x5184 = 10LLU;
	static uint64_t t98 = 2946463319103956690LLU;

	t98 = (x5181%((x5182+x5183)<<x5184));

	if (t98 != 25LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5277 = 61242LLU;
	int32_t x5279 = INT32_MIN;
	volatile int8_t x5280 = 24;
	volatile uint64_t t99 = 8536248LLU;

	t99 = (x5277%((x5278+x5279)<<x5280));

	if (t99 != 61242LLU) { NG(); } else { ; }
	
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

