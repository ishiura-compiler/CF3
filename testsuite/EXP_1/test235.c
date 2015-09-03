#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x19 = 44U;
static uint32_t x54 = 836U;
static uint64_t x56 = UINT64_MAX;
int32_t x325 = INT32_MAX;
int16_t x499 = 0;
uint64_t x500 = 2151894046417201599LLU;
uint64_t x501 = UINT64_MAX;
uint64_t t6 = 3LLU;
volatile int16_t x657 = -1;
int64_t x682 = INT64_MIN;
int64_t t9 = INT64_MAX;
static uint16_t x685 = 1586U;
uint8_t x687 = 5U;
int32_t x734 = INT32_MAX;
uint8_t x736 = UINT8_MAX;
volatile uint16_t x781 = UINT16_MAX;
uint8_t x960 = 48U;
volatile int32_t t17 = INT32_MIN;
uint64_t x1232 = UINT64_MAX;
volatile uint64_t t19 = 242646LLU;
int8_t x1311 = 0;
uint16_t x1312 = 20699U;
volatile int16_t x1488 = 11207;
uint64_t x1524 = 394600136565641610LLU;
volatile int32_t x1614 = 2375;
uint8_t x1615 = 15U;
uint64_t x1617 = 2LLU;
volatile int64_t t29 = 83831755218806LL;
int8_t x1801 = 0;
int64_t x1802 = -1LL;
uint32_t x1907 = 6U;
int8_t x1908 = -29;
volatile int8_t x2027 = 1;
int32_t x2046 = -1;
int8_t x2178 = 1;
uint64_t x2294 = 15174LLU;
uint64_t t38 = 4349500885865LLU;
volatile int32_t t39 = -175;
uint64_t x2714 = 25848LLU;
static uint64_t t41 = 1264391748873410LLU;
uint32_t x2774 = UINT32_MAX;
int16_t x2785 = -1;
static volatile uint64_t x2945 = UINT64_MAX;
uint64_t t46 = 6361LLU;
static uint32_t x2955 = 13U;
volatile int8_t x2960 = -1;
volatile uint32_t t49 = 130937U;
int64_t x3132 = 11LL;
uint64_t t52 = 16027281144184573LLU;
int32_t x3309 = -157451;
static uint8_t x3311 = 2U;
int8_t x3317 = INT8_MAX;
static uint64_t x3318 = UINT64_MAX;
volatile int8_t x3345 = INT8_MAX;
volatile uint32_t t55 = 3U;
static uint64_t x3941 = 3556355688292702LLU;
static volatile int8_t x3943 = 3;
volatile int16_t x4132 = INT16_MIN;
uint16_t x4439 = 13U;
uint32_t t65 = 8158272U;
volatile uint32_t x4453 = UINT32_MAX;
static uint64_t t66 = 1169760644501856LLU;
int8_t x4514 = INT8_MIN;
volatile uint64_t x4515 = 0LLU;
static volatile uint32_t x4574 = UINT32_MAX;
volatile uint64_t x4657 = UINT64_MAX;
static volatile int32_t x4700 = 4;
uint8_t x4754 = 16U;
int16_t x4755 = 3;
int32_t x4801 = -6012;
int64_t t73 = -370LL;
uint64_t x4956 = UINT64_MAX;
volatile int32_t t77 = 956510517;
volatile uint8_t x5455 = 0U;
static int64_t x5564 = INT64_MAX;
uint64_t x5621 = 3875256014868912LLU;
int64_t x5909 = INT64_MAX;
uint8_t x5911 = 7U;
int64_t t84 = 26LL;
volatile int32_t x5914 = -1;
volatile int8_t x5968 = INT8_MIN;
static int8_t x5982 = INT8_MIN;
static int64_t x5984 = 8902302930778LL;
int64_t x6084 = 21270532858LL;
volatile int32_t t89 = 31;
int16_t x6281 = -1;
static uint8_t x6283 = 1U;
volatile int64_t t92 = 176853223137980211LL;
uint8_t x6568 = 10U;
int8_t x6628 = -1;
int64_t x6643 = 1LL;
uint64_t x6781 = UINT64_MAX;


void f0(void) {
	int16_t x17 = INT16_MAX;
	uint64_t x18 = 130853189639844LLU;
	uint32_t x20 = UINT32_MAX;
	static volatile uint64_t t0 = 1691325LLU;

	t0 = (((x17-x18)<<x19)+x20);

	if (t0 != 15714659993120669695LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x53 = 18U;
	static uint32_t x55 = 22U;
	volatile uint64_t t1 = 348960254681719573LLU;

	t1 = (((x53-x54)<<x55)+x56);

	if (t1 != 864026623LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int8_t x111 = 4;
	volatile int16_t x112 = INT16_MIN;
	int32_t t2 = -1347;

	t2 = (((x109-x110)<<x111)+x112);

	if (t2 != -30736) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x326 = 914480632LLU;
	uint16_t x327 = 6U;
	int16_t x328 = -2;
	uint64_t t3 = 32764103LLU;

	t3 = (((x325-x326)<<x327)+x328);

	if (t3 != 78912192958LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 14;
	volatile int16_t x332 = INT16_MIN;
	uint32_t t4 = 6U;

	t4 = (((x329-x330)<<x331)+x332);

	if (t4 != 536821760U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x497 = 876896957533843341LLU;
	int8_t x498 = INT8_MIN;
	volatile uint64_t t5 = 109220620LLU;

	t5 = (((x497-x498)<<x499)+x500);

	if (t5 != 3028791003951045068LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x502 = 11976468273LL;
	int32_t x503 = 26;
	int32_t x504 = 1;

	t6 = (((x501-x502)<<x503)+x504);

	if (t6 != 17643016893109370881LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x537 = -1;
	int8_t x538 = -1;
	int16_t x539 = 0;
	volatile int16_t x540 = 7;
	int32_t t7 = 50;

	t7 = (((x537-x538)<<x539)+x540);

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x658 = 88565385U;
	uint16_t x659 = 24U;
	static int8_t x660 = INT8_MAX;
	uint32_t t8 = 2056125326U;

	t8 = (((x657-x658)<<x659)+x660);

	if (t8 != 1979711615U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x681 = INT16_MIN;
	static int8_t x683 = 0;
	int16_t x684 = INT16_MAX;

	t9 = (((x681-x682)<<x683)+x684);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x686 = -1;
	static int8_t x688 = -1;
	volatile int32_t t10 = 6911;

	t10 = (((x685-x686)<<x687)+x688);

	if (t10 != 50783) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x733 = 11770821LLU;
	int8_t x735 = 1;
	static uint64_t t11 = 17LLU;

	t11 = (((x733-x734)<<x735)+x736);

	if (t11 != 18446744069438126219LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x782 = -6;
	int8_t x783 = 4;
	uint8_t x784 = 80U;
	volatile int32_t t12 = -8554;

	t12 = (((x781-x782)<<x783)+x784);

	if (t12 != 1048736) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x805 = INT16_MIN;
	int16_t x806 = INT16_MIN;
	uint64_t x807 = 1LLU;
	volatile uint8_t x808 = UINT8_MAX;
	static volatile int32_t t13 = 3;

	t13 = (((x805-x806)<<x807)+x808);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x945 = -1;
	int16_t x946 = -287;
	static uint8_t x947 = 6U;
	int16_t x948 = INT16_MIN;
	int32_t t14 = 4713;

	t14 = (((x945-x946)<<x947)+x948);

	if (t14 != -14464) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x957 = 241553LLU;
	volatile int8_t x958 = INT8_MIN;
	static int8_t x959 = 4;
	volatile uint64_t t15 = 1746LLU;

	t15 = (((x957-x958)<<x959)+x960);

	if (t15 != 3866944LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1041 = 1U;
	uint32_t x1042 = 9U;
	int8_t x1043 = 0;
	uint32_t x1044 = 60400U;
	volatile uint32_t t16 = 1589U;

	t16 = (((x1041-x1042)<<x1043)+x1044);

	if (t16 != 60392U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1133 = INT8_MIN;
	volatile int8_t x1134 = INT8_MIN;
	int16_t x1135 = 1;
	int32_t x1136 = INT32_MIN;

	t17 = (((x1133-x1134)<<x1135)+x1136);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1157 = 93LL;
	volatile uint64_t x1158 = UINT64_MAX;
	static uint8_t x1159 = 2U;
	uint32_t x1160 = 71920U;
	uint64_t t18 = 76287LLU;

	t18 = (((x1157-x1158)<<x1159)+x1160);

	if (t18 != 72296LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1229 = 13;
	int16_t x1230 = 1;
	uint16_t x1231 = 6U;

	t19 = (((x1229-x1230)<<x1231)+x1232);

	if (t19 != 767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1309 = INT16_MIN;
	uint32_t x1310 = 135473654U;
	volatile uint32_t t20 = 217535U;

	t20 = (((x1309-x1310)<<x1311)+x1312);

	if (t20 != 4159481573U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1393 = -1;
	int64_t x1394 = -13931672255LL;
	volatile uint8_t x1395 = 11U;
	int32_t x1396 = -1;
	volatile int64_t t21 = -127259045720619608LL;

	t21 = (((x1393-x1394)<<x1395)+x1396);

	if (t21 != 28532064776191LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1485 = 8179U;
	int16_t x1486 = INT16_MIN;
	int8_t x1487 = 2;
	volatile int32_t t22 = 1005;

	t22 = (((x1485-x1486)<<x1487)+x1488);

	if (t22 != 174995) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1509 = -1LL;
	int8_t x1510 = INT8_MIN;
	static uint16_t x1511 = 27U;
	int32_t x1512 = -1;
	int64_t t23 = 7703145139434415LL;

	t23 = (((x1509-x1510)<<x1511)+x1512);

	if (t23 != 17045651455LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1521 = UINT16_MAX;
	int8_t x1522 = INT8_MIN;
	static volatile uint64_t x1523 = 2LLU;
	uint64_t t24 = 64752403LLU;

	t24 = (((x1521-x1522)<<x1523)+x1524);

	if (t24 != 394600136565904262LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1573 = INT8_MIN;
	uint32_t x1574 = 501U;
	volatile uint8_t x1575 = 18U;
	uint16_t x1576 = UINT16_MAX;
	volatile uint32_t t25 = 665867U;

	t25 = (((x1573-x1574)<<x1575)+x1576);

	if (t25 != 4130144255U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1613 = INT16_MAX;
	static int8_t x1616 = INT8_MIN;
	static int32_t t26 = -21329;

	t26 = (((x1613-x1614)<<x1615)+x1616);

	if (t26 != 995884928) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1618 = INT64_MIN;
	int8_t x1619 = 8;
	int64_t x1620 = -1LL;
	static volatile uint64_t t27 = 182625LLU;

	t27 = (((x1617-x1618)<<x1619)+x1620);

	if (t27 != 511LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1669 = 219765955215993LLU;
	uint16_t x1670 = 0U;
	uint32_t x1671 = 6U;
	int16_t x1672 = 47;
	uint64_t t28 = 30439800634LLU;

	t28 = (((x1669-x1670)<<x1671)+x1672);

	if (t28 != 14065021133823599LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1701 = UINT8_MAX;
	int64_t x1702 = 2LL;
	uint8_t x1703 = 1U;
	static int16_t x1704 = 4;

	t29 = (((x1701-x1702)<<x1703)+x1704);

	if (t29 != 510LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1803 = 0;
	volatile int16_t x1804 = -5;
	volatile int64_t t30 = 27710LL;

	t30 = (((x1801-x1802)<<x1803)+x1804);

	if (t30 != -4LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1889 = 26880U;
	uint16_t x1890 = 449U;
	static uint16_t x1891 = 29U;
	volatile int32_t x1892 = -3;
	uint32_t t31 = 17031553U;

	t31 = (((x1889-x1890)<<x1891)+x1892);

	if (t31 != 3758096381U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1905 = UINT8_MAX;
	uint8_t x1906 = 0U;
	static int32_t t32 = -976;

	t32 = (((x1905-x1906)<<x1907)+x1908);

	if (t32 != 16291) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2025 = INT8_MAX;
	volatile uint64_t x2026 = 270424789816249850LLU;
	int32_t x2028 = INT32_MAX;
	volatile uint64_t t33 = 3LLU;

	t33 = (((x2025-x2026)<<x2027)+x2028);

	if (t33 != 17905894496224535817LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2045 = 4U;
	static int8_t x2047 = 1;
	volatile int16_t x2048 = 3871;
	int32_t t34 = -20;

	t34 = (((x2045-x2046)<<x2047)+x2048);

	if (t34 != 3881) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2117 = 0U;
	int8_t x2118 = 27;
	uint8_t x2119 = 0U;
	uint16_t x2120 = 12629U;
	static uint32_t t35 = 452U;

	t35 = (((x2117-x2118)<<x2119)+x2120);

	if (t35 != 12602U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2177 = 7684788U;
	static int16_t x2179 = 1;
	int32_t x2180 = -421;
	volatile uint32_t t36 = 14406083U;

	t36 = (((x2177-x2178)<<x2179)+x2180);

	if (t36 != 15369153U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2293 = UINT16_MAX;
	uint8_t x2295 = 1U;
	uint32_t x2296 = 247543395U;
	uint64_t t37 = 8298640175LLU;

	t37 = (((x2293-x2294)<<x2295)+x2296);

	if (t37 != 247644117LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2353 = 81LLU;
	static int64_t x2354 = INT64_MIN;
	uint8_t x2355 = 5U;
	int8_t x2356 = INT8_MIN;

	t38 = (((x2353-x2354)<<x2355)+x2356);

	if (t38 != 2464LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2601 = UINT16_MAX;
	int32_t x2602 = -1;
	static uint16_t x2603 = 0U;
	volatile int8_t x2604 = -1;

	t39 = (((x2601-x2602)<<x2603)+x2604);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2713 = INT64_MIN;
	int8_t x2715 = 19;
	static uint32_t x2716 = 802449200U;
	static uint64_t t40 = 7035LLU;

	t40 = (((x2713-x2714)<<x2715)+x2716);

	if (t40 != 18446744060960204592LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2729 = 5477350835LLU;
	static uint8_t x2730 = UINT8_MAX;
	volatile uint16_t x2731 = 3U;
	uint64_t x2732 = 817LLU;

	t41 = (((x2729-x2730)<<x2731)+x2732);

	if (t41 != 43818805457LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2773 = -1;
	volatile int16_t x2775 = 18;
	int8_t x2776 = INT8_MIN;
	volatile uint32_t t42 = 42073380U;

	t42 = (((x2773-x2774)<<x2775)+x2776);

	if (t42 != 4294967168U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2786 = -4;
	int8_t x2787 = 2;
	int64_t x2788 = -1LL;
	int64_t t43 = -974762618251558373LL;

	t43 = (((x2785-x2786)<<x2787)+x2788);

	if (t43 != 11LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2909 = 42859554LLU;
	int64_t x2910 = INT64_MAX;
	int8_t x2911 = 0;
	volatile int8_t x2912 = 1;
	uint64_t t44 = 721143651411LLU;

	t44 = (((x2909-x2910)<<x2911)+x2912);

	if (t44 != 9223372036897635364LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2913 = INT64_MIN;
	volatile uint64_t x2914 = UINT64_MAX;
	uint8_t x2915 = 6U;
	int32_t x2916 = INT32_MIN;
	uint64_t t45 = 720401122124LLU;

	t45 = (((x2913-x2914)<<x2915)+x2916);

	if (t45 != 18446744071562068032LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2946 = 1314;
	volatile int8_t x2947 = 18;
	static int8_t x2948 = 1;

	t46 = (((x2945-x2946)<<x2947)+x2948);

	if (t46 != 18446744073364832257LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2953 = -1;
	int16_t x2954 = INT16_MIN;
	int32_t x2956 = INT32_MIN;
	int32_t t47 = 25940;

	t47 = (((x2953-x2954)<<x2955)+x2956);

	if (t47 != -1879056384) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2957 = 91U;
	volatile uint8_t x2958 = 0U;
	int8_t x2959 = 7;
	static int32_t t48 = -24;

	t48 = (((x2957-x2958)<<x2959)+x2960);

	if (t48 != 11647) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3057 = 2;
	uint32_t x3058 = 580457U;
	static uint32_t x3059 = 18U;
	uint32_t x3060 = UINT32_MAX;

	t49 = (((x3057-x3058)<<x3059)+x3060);

	if (t49 != 2456027135U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3101 = 3296063544LLU;
	static uint64_t x3102 = 1161144063980237LLU;
	uint64_t x3103 = 12LLU;
	static int32_t x3104 = 37;
	uint64_t t50 = 15760818185420LLU;

	t50 = (((x3101-x3102)<<x3103)+x3104);

	if (t50 != 13690711488322777125LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3129 = INT8_MIN;
	int32_t x3130 = INT32_MIN;
	uint64_t x3131 = 0LLU;
	static int64_t t51 = 18369662413LL;

	t51 = (((x3129-x3130)<<x3131)+x3132);

	if (t51 != 2147483531LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3213 = -1;
	uint64_t x3214 = 64125619983LLU;
	uint8_t x3215 = 5U;
	static int8_t x3216 = INT8_MAX;

	t52 = (((x3213-x3214)<<x3215)+x3216);

	if (t52 != 18446742021689712255LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3310 = UINT64_MAX;
	int16_t x3312 = 0;
	volatile uint64_t t53 = 18680LLU;

	t53 = (((x3309-x3310)<<x3311)+x3312);

	if (t53 != 18446744073708921816LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x3319 = 14;
	int64_t x3320 = -1LL;
	uint64_t t54 = 959507641005LLU;

	t54 = (((x3317-x3318)<<x3319)+x3320);

	if (t54 != 2097151LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3346 = -1;
	volatile uint64_t x3347 = 0LLU;
	uint32_t x3348 = UINT32_MAX;

	t55 = (((x3345-x3346)<<x3347)+x3348);

	if (t55 != 127U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3457 = 1LLU;
	uint16_t x3458 = 47U;
	static int32_t x3459 = 47;
	static volatile int8_t x3460 = INT8_MIN;
	volatile uint64_t t56 = 769373LLU;

	t56 = (((x3457-x3458)<<x3459)+x3460);

	if (t56 != 18440270149245206400LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3469 = -6;
	uint64_t x3470 = 144485664LLU;
	int8_t x3471 = 7;
	int64_t x3472 = -1668195315LL;
	uint64_t t57 = 9283LLU;

	t57 = (((x3469-x3470)<<x3471)+x3472);

	if (t57 != 18446744053547190541LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3497 = 9837825661392LLU;
	int16_t x3498 = 34;
	uint32_t x3499 = 26U;
	uint32_t x3500 = 2084049U;
	static uint64_t t58 = 1LLU;

	t58 = (((x3497-x3498)<<x3499)+x3500);

	if (t58 != 14569261783951854801LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3569 = -3;
	volatile int8_t x3570 = INT8_MIN;
	uint8_t x3571 = 1U;
	volatile int32_t x3572 = INT32_MIN;
	int32_t t59 = -1247844;

	t59 = (((x3569-x3570)<<x3571)+x3572);

	if (t59 != -2147483398) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3925 = -4;
	uint64_t x3926 = UINT64_MAX;
	volatile uint16_t x3927 = 2U;
	static uint8_t x3928 = 0U;
	volatile uint64_t t60 = 16888LLU;

	t60 = (((x3925-x3926)<<x3927)+x3928);

	if (t60 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3942 = -1LL;
	static int16_t x3944 = INT16_MAX;
	volatile uint64_t t61 = 23648451164988LLU;

	t61 = (((x3941-x3942)<<x3943)+x3944);

	if (t61 != 28450845506374391LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4129 = 0U;
	uint32_t x4130 = 91148U;
	static volatile uint8_t x4131 = 26U;
	volatile uint32_t t62 = 3455U;

	t62 = (((x4129-x4130)<<x4131)+x4132);

	if (t62 != 3489628160U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4193 = UINT32_MAX;
	int64_t x4194 = -5876302LL;
	uint16_t x4195 = 1U;
	int16_t x4196 = INT16_MAX;
	int64_t t63 = 121470130LL;

	t63 = (((x4193-x4194)<<x4195)+x4196);

	if (t63 != 8601719961LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4377 = INT32_MIN;
	uint64_t x4378 = 176339147656LLU;
	static uint16_t x4379 = 3U;
	static uint16_t x4380 = UINT16_MAX;
	uint64_t t64 = 28306204393LLU;

	t64 = (((x4377-x4378)<<x4379)+x4380);

	if (t64 != 18446742645816566719LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4437 = 42U;
	int8_t x4438 = INT8_MIN;
	int8_t x4440 = INT8_MAX;

	t65 = (((x4437-x4438)<<x4439)+x4440);

	if (t65 != 1392767U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4454 = 1399615002LLU;
	int64_t x4455 = 0LL;
	int8_t x4456 = -11;

	t66 = (((x4453-x4454)<<x4455)+x4456);

	if (t66 != 2895352282LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4513 = INT8_MIN;
	static int8_t x4516 = INT8_MIN;
	volatile int32_t t67 = 25;

	t67 = (((x4513-x4514)<<x4515)+x4516);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4573 = INT32_MAX;
	uint32_t x4575 = 0U;
	volatile uint8_t x4576 = UINT8_MAX;
	static volatile uint32_t t68 = 4586445U;

	t68 = (((x4573-x4574)<<x4575)+x4576);

	if (t68 != 2147483903U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4658 = INT8_MIN;
	static uint16_t x4659 = 5U;
	int32_t x4660 = INT32_MIN;
	uint64_t t69 = 9868745LLU;

	t69 = (((x4657-x4658)<<x4659)+x4660);

	if (t69 != 18446744071562072032LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4697 = -1;
	static uint64_t x4698 = 908218LLU;
	uint8_t x4699 = 15U;
	static volatile uint64_t t70 = 25941176908427887LLU;

	t70 = (((x4697-x4698)<<x4699)+x4700);

	if (t70 != 18446744043949031428LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4753 = 59LL;
	uint16_t x4756 = 6215U;
	volatile int64_t t71 = 472238510LL;

	t71 = (((x4753-x4754)<<x4755)+x4756);

	if (t71 != 6559LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4781 = 45759338404LLU;
	int64_t x4782 = INT64_MAX;
	int16_t x4783 = 13;
	int32_t x4784 = INT32_MIN;
	volatile uint64_t t72 = 40549195559298LLU;

	t72 = (((x4781-x4782)<<x4783)+x4784);

	if (t72 != 374858352730112LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x4802 = -36919547832140795LL;
	volatile uint16_t x4803 = 4U;
	int64_t x4804 = -13LL;

	t73 = (((x4801-x4802)<<x4803)+x4804);

	if (t73 != 590712765314156515LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x4849 = 127268332906LLU;
	uint32_t x4850 = UINT32_MAX;
	int16_t x4851 = 11;
	static volatile uint16_t x4852 = 12850U;
	uint64_t t74 = 830501636587877LLU;

	t74 = (((x4849-x4850)<<x4851)+x4852);

	if (t74 != 251849452784178LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4953 = 21249;
	volatile int8_t x4954 = INT8_MIN;
	int8_t x4955 = 9;
	static uint64_t t75 = 14LLU;

	t75 = (((x4953-x4954)<<x4955)+x4956);

	if (t75 != 10945023LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5001 = -1;
	volatile int32_t x5002 = -1;
	uint8_t x5003 = 0U;
	int8_t x5004 = INT8_MIN;
	volatile int32_t t76 = 35872172;

	t76 = (((x5001-x5002)<<x5003)+x5004);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5325 = 1795;
	static int8_t x5326 = -1;
	volatile uint16_t x5327 = 0U;
	static int16_t x5328 = -1;

	t77 = (((x5325-x5326)<<x5327)+x5328);

	if (t77 != 1795) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5453 = INT8_MIN;
	int64_t x5454 = INT64_MIN;
	int32_t x5456 = INT32_MIN;
	volatile int64_t t78 = -3171061171657201347LL;

	t78 = (((x5453-x5454)<<x5455)+x5456);

	if (t78 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x5533 = 986271394LLU;
	int16_t x5534 = INT16_MIN;
	volatile uint8_t x5535 = 0U;
	int64_t x5536 = 129361440625004LL;
	static volatile uint64_t t79 = 8073684880712615407LLU;

	t79 = (((x5533-x5534)<<x5535)+x5536);

	if (t79 != 129362426929166LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x5541 = UINT64_MAX;
	volatile int8_t x5542 = -1;
	int16_t x5543 = 7;
	uint8_t x5544 = UINT8_MAX;
	static uint64_t t80 = 219LLU;

	t80 = (((x5541-x5542)<<x5543)+x5544);

	if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5561 = UINT64_MAX;
	int8_t x5562 = INT8_MIN;
	uint8_t x5563 = 1U;
	static uint64_t t81 = 137022144084366LLU;

	t81 = (((x5561-x5562)<<x5563)+x5564);

	if (t81 != 9223372036854776061LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5622 = 110537LL;
	volatile uint8_t x5623 = 27U;
	static int8_t x5624 = 1;
	static uint64_t t82 = 10702LLU;

	t82 = (((x5621-x5622)<<x5623)+x5624);

	if (t82 != 3661816889044107265LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5677 = -1;
	static uint64_t x5678 = 196513502650LLU;
	uint8_t x5679 = 1U;
	static int64_t x5680 = -1LL;
	uint64_t t83 = 42039914783509127LLU;

	t83 = (((x5677-x5678)<<x5679)+x5680);

	if (t83 != 18446743680682546313LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5910 = INT64_MAX;
	int64_t x5912 = 1508460001930LL;

	t84 = (((x5909-x5910)<<x5911)+x5912);

	if (t84 != 1508460001930LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x5913 = UINT8_MAX;
	int16_t x5915 = 17;
	int16_t x5916 = INT16_MAX;
	volatile int32_t t85 = -209834;

	t85 = (((x5913-x5914)<<x5915)+x5916);

	if (t85 != 33587199) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5965 = 301409488U;
	int8_t x5966 = -3;
	static volatile uint8_t x5967 = 9U;
	volatile uint32_t t86 = 52750U;

	t86 = (((x5965-x5966)<<x5967)+x5968);

	if (t86 != 3997803904U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5981 = 79243476LLU;
	uint16_t x5983 = 11U;
	uint64_t t87 = 64302614LLU;

	t87 = (((x5981-x5982)<<x5983)+x5984);

	if (t87 != 9064593831770LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x6081 = INT32_MIN;
	static uint64_t x6082 = 499013931LLU;
	int8_t x6083 = 0;
	static uint64_t t88 = 37827966853LLU;

	t88 = (((x6081-x6082)<<x6083)+x6084);

	if (t88 != 18624035279LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6213 = INT8_MIN;
	static int32_t x6214 = -7851419;
	uint16_t x6215 = 0U;
	static volatile int8_t x6216 = -1;

	t89 = (((x6213-x6214)<<x6215)+x6216);

	if (t89 != 7851290) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6225 = UINT32_MAX;
	uint16_t x6226 = 1277U;
	uint32_t x6227 = 0U;
	int8_t x6228 = 7;
	volatile uint32_t t90 = 59638131U;

	t90 = (((x6225-x6226)<<x6227)+x6228);

	if (t90 != 4294966025U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6282 = -1;
	int8_t x6284 = INT8_MIN;
	volatile int32_t t91 = -491704;

	t91 = (((x6281-x6282)<<x6283)+x6284);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x6413 = -1;
	static int64_t x6414 = -1LL;
	static volatile int64_t x6415 = 17LL;
	int32_t x6416 = -4;

	t92 = (((x6413-x6414)<<x6415)+x6416);

	if (t92 != -4LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6565 = UINT32_MAX;
	int8_t x6566 = INT8_MIN;
	uint64_t x6567 = 0LLU;
	volatile uint32_t t93 = 36U;

	t93 = (((x6565-x6566)<<x6567)+x6568);

	if (t93 != 137U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6585 = UINT64_MAX;
	int32_t x6586 = INT32_MIN;
	int16_t x6587 = 7;
	int8_t x6588 = INT8_MIN;
	static uint64_t t94 = 98096LLU;

	t94 = (((x6585-x6586)<<x6587)+x6588);

	if (t94 != 274877906688LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x6625 = UINT8_MAX;
	volatile int8_t x6626 = 0;
	static volatile uint8_t x6627 = 1U;
	volatile int32_t t95 = -7022736;

	t95 = (((x6625-x6626)<<x6627)+x6628);

	if (t95 != 509) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6641 = 8U;
	static int8_t x6642 = INT8_MIN;
	uint16_t x6644 = 2U;
	static uint32_t t96 = 74613533U;

	t96 = (((x6641-x6642)<<x6643)+x6644);

	if (t96 != 274U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x6673 = 119021108877LLU;
	uint16_t x6674 = 1033U;
	volatile uint32_t x6675 = 37U;
	int16_t x6676 = -1;
	volatile uint64_t t97 = 527390094198LLU;

	t97 = (((x6673-x6674)<<x6675)+x6676);

	if (t97 != 14321253850747502591LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6725 = INT8_MIN;
	int64_t x6726 = -386871108479LL;
	int8_t x6727 = 0;
	static int32_t x6728 = INT32_MIN;
	int64_t t98 = -3784LL;

	t98 = (((x6725-x6726)<<x6727)+x6728);

	if (t98 != 384723624703LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6782 = INT32_MIN;
	int16_t x6783 = 0;
	int16_t x6784 = -1;
	volatile uint64_t t99 = 2282919LLU;

	t99 = (((x6781-x6782)<<x6783)+x6784);

	if (t99 != 2147483646LLU) { NG(); } else { ; }
	
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

