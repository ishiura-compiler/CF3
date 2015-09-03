#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x121 = 15919717LLU;
static uint8_t x124 = 6U;
int64_t x213 = INT64_MAX;
int8_t x214 = INT8_MAX;
int8_t x241 = 0;
static int8_t x242 = -1;
static uint32_t x362 = 736784669U;
uint64_t t7 = 7LLU;
int16_t x387 = INT16_MAX;
static volatile uint32_t t8 = 1U;
uint32_t x428 = 1U;
static volatile uint8_t x460 = 1U;
volatile int16_t x501 = -27;
volatile int16_t x521 = -27;
static int8_t x524 = 1;
int8_t x530 = 3;
volatile uint8_t x573 = 31U;
static int64_t x657 = INT64_MIN;
uint64_t x659 = 88410LLU;
uint16_t x704 = 35U;
int16_t x767 = INT16_MAX;
volatile int64_t t20 = -102805723707363LL;
uint64_t t22 = 2563546525LLU;
uint32_t x1162 = UINT32_MAX;
uint8_t x1449 = 12U;
uint8_t x1452 = 5U;
static volatile int32_t t31 = -17;
int8_t x1477 = INT8_MIN;
int16_t x1506 = 4;
uint16_t x1517 = 31U;
int32_t x1518 = -1;
uint8_t x1616 = 1U;
int16_t x1646 = 1;
static volatile uint32_t x1647 = 16536273U;
volatile uint32_t t38 = 39U;
int32_t x1651 = INT32_MAX;
volatile uint32_t t40 = 132U;
uint8_t x1672 = 20U;
static uint16_t x1675 = 7U;
int32_t x1676 = 0;
uint32_t x1699 = 57875179U;
uint16_t x1700 = 6U;
int32_t x1717 = -1;
static volatile int8_t x1719 = INT8_MAX;
static int32_t t45 = -203704;
int16_t x1941 = INT16_MIN;
static uint64_t x1943 = UINT64_MAX;
uint64_t t46 = 16107558577175178LLU;
volatile uint32_t t47 = 73777045U;
int8_t x2143 = INT8_MIN;
uint64_t x2515 = 7655025661566394LLU;
uint64_t x2579 = 797386141250LLU;
uint64_t t54 = 203396636716782599LLU;
uint8_t x2584 = 1U;
uint16_t x2680 = 14U;
int8_t x2705 = -1;
int32_t x2706 = -1231;
static int32_t t59 = -268724;
static uint8_t x2772 = 3U;
int32_t t61 = 3728;
static volatile int64_t t62 = 0LL;
uint8_t x2847 = UINT8_MAX;
int32_t t63 = -33181775;
uint8_t x2881 = 92U;
uint64_t t64 = 21169636308935LLU;
uint64_t x2943 = 752969977570174LLU;
volatile uint64_t t67 = 160027284758096868LLU;
volatile int16_t x3165 = -197;
volatile uint8_t x3213 = UINT8_MAX;
int16_t x3214 = INT16_MIN;
static int64_t x3231 = INT64_MIN;
volatile uint16_t x3300 = 30U;
uint32_t x3346 = 18558872U;
int8_t x3382 = -3;
volatile uint64_t x3383 = 1974LLU;
uint64_t t75 = 17996273100317829LLU;
uint8_t x3422 = UINT8_MAX;
volatile uint32_t x3423 = UINT32_MAX;
static int8_t x3448 = 4;
volatile int32_t t77 = 21584;
static int16_t x3482 = 910;
uint64_t x3517 = UINT64_MAX;
static uint8_t x3520 = 1U;
volatile uint64_t t80 = 455273LLU;
static int32_t t82 = -9;
int16_t x3705 = INT16_MAX;
static int16_t x3801 = -1;
volatile int64_t x3803 = INT64_MAX;
int8_t x3917 = INT8_MIN;
static uint16_t x3950 = 61U;
volatile int8_t x3951 = -1;
uint32_t x3952 = 34U;
int32_t x3954 = -3529;
int8_t x4114 = INT8_MAX;
volatile uint8_t x4116 = 27U;
static int16_t x4167 = -1;
int8_t x4226 = -1;
uint64_t x4227 = 51657352293751LLU;
volatile int16_t x4257 = -1;
int64_t x4259 = -7542286628917343LL;
int64_t x4342 = -56684925LL;
int8_t x4393 = 0;


void f0(void) {
	volatile int64_t x122 = INT64_MAX;
	int32_t x123 = 1;
	static volatile uint64_t t0 = 16848995LLU;

	t0 = ((x121-(x122|x123))<<x124);

	if (t0 != 1018861952LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x185 = UINT32_MAX;
	static int32_t x186 = 183179494;
	static int32_t x187 = -1;
	uint8_t x188 = 6U;
	uint32_t t1 = 914U;

	t1 = ((x185-(x186|x187))<<x188);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x215 = 8770U;
	volatile uint8_t x216 = 0U;
	int64_t t2 = 61447819690937LL;

	t2 = ((x213-(x214|x215))<<x216);

	if (t2 != 9223372036854766976LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x243 = 600U;
	uint8_t x244 = 0U;
	static uint32_t t3 = 23368U;

	t3 = ((x241-(x242|x243))<<x244);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x325 = UINT64_MAX;
	volatile int16_t x326 = -1;
	int32_t x327 = -1175349;
	static uint8_t x328 = 6U;
	volatile uint64_t t4 = 55371288LLU;

	t4 = ((x325-(x326|x327))<<x328);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x361 = INT32_MIN;
	static int32_t x363 = 260094371;
	uint8_t x364 = 8U;
	static volatile uint32_t t5 = 412724175U;

	t5 = ((x361-(x362|x363))<<x364);

	if (t5 != 352731392U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x373 = 1398350U;
	uint64_t x374 = 1408953236177LLU;
	static uint64_t x375 = 205180LLU;
	int8_t x376 = 14;
	static uint64_t t6 = 731LLU;

	t6 = ((x373-(x374|x375))<<x376);

	if (t6 != 18423659803572453376LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x377 = UINT64_MAX;
	static volatile int16_t x378 = INT16_MIN;
	uint8_t x379 = 38U;
	static uint64_t x380 = 7LLU;

	t7 = ((x377-(x378|x379))<<x380);

	if (t7 != 4189312LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x385 = -1;
	uint32_t x386 = 615550767U;
	int8_t x388 = 1;

	t8 = ((x385-(x386|x387))<<x388);

	if (t8 != 3063808000U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x425 = -22;
	int8_t x426 = INT8_MAX;
	uint32_t x427 = 106U;
	static uint32_t t9 = 28U;

	t9 = ((x425-(x426|x427))<<x428);

	if (t9 != 4294966998U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x457 = 2068016377244408LL;
	uint64_t x458 = 18164453625485LLU;
	int64_t x459 = -1LL;
	uint64_t t10 = 30808943LLU;

	t10 = ((x457-(x458|x459))<<x460);

	if (t10 != 4136032754488818LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x473 = -13183;
	uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	uint8_t x476 = 1U;
	static volatile int32_t t11 = 116579597;

	t11 = ((x473-(x474|x475))<<x476);

	if (t11 != 38660) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x502 = 62;
	uint32_t x503 = UINT32_MAX;
	uint8_t x504 = 0U;
	volatile uint32_t t12 = 23876U;

	t12 = ((x501-(x502|x503))<<x504);

	if (t12 != 4294967270U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x522 = 57U;
	static int64_t x523 = -8412207920LL;
	static int64_t t13 = -1655410722426165LL;

	t13 = ((x521-(x522|x523))<<x524);

	if (t13 != 16824415704LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x529 = 864U;
	int16_t x531 = -1;
	static uint8_t x532 = 5U;
	volatile int32_t t14 = 430;

	t14 = ((x529-(x530|x531))<<x532);

	if (t14 != 27680) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x561 = -1;
	uint64_t x562 = 166871626441355576LLU;
	uint8_t x563 = UINT8_MAX;
	int8_t x564 = 1;
	volatile uint64_t t15 = 94LLU;

	t15 = ((x561-(x562|x563))<<x564);

	if (t15 != 18113000820826840064LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x574 = 2733U;
	uint64_t x575 = UINT64_MAX;
	volatile int8_t x576 = 0;
	uint64_t t16 = 961029LLU;

	t16 = ((x573-(x574|x575))<<x576);

	if (t16 != 32LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x658 = INT8_MAX;
	uint16_t x660 = 1U;
	uint64_t t17 = 10101338LLU;

	t17 = ((x657-(x658|x659))<<x660);

	if (t17 != 18446744073709374722LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x701 = INT16_MIN;
	volatile int32_t x702 = 48;
	uint64_t x703 = UINT64_MAX;
	volatile uint64_t t18 = 265926997689092072LLU;

	t18 = ((x701-(x702|x703))<<x704);

	if (t18 != 18445618208162447360LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x765 = 63795LLU;
	int64_t x766 = -1LL;
	static int8_t x768 = 1;
	volatile uint64_t t19 = 34565524247853665LLU;

	t19 = ((x765-(x766|x767))<<x768);

	if (t19 != 127592LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x837 = 11428U;
	int64_t x838 = -1LL;
	volatile int16_t x839 = INT16_MIN;
	uint16_t x840 = 4U;

	t20 = ((x837-(x838|x839))<<x840);

	if (t20 != 182864LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x901 = -1;
	volatile uint64_t x902 = 400984339LLU;
	int8_t x903 = -1;
	uint64_t x904 = 0LLU;
	static uint64_t t21 = 93893197556532LLU;

	t21 = ((x901-(x902|x903))<<x904);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1025 = INT8_MIN;
	uint64_t x1026 = 2858244584LLU;
	int16_t x1027 = -125;
	static uint16_t x1028 = 0U;

	t22 = ((x1025-(x1026|x1027))<<x1028);

	if (t22 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1049 = INT8_MIN;
	static int64_t x1050 = INT64_MIN;
	uint16_t x1051 = 32545U;
	uint8_t x1052 = 0U;
	static int64_t t23 = 3834631709952LL;

	t23 = ((x1049-(x1050|x1051))<<x1052);

	if (t23 != 9223372036854743135LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1053 = -745358;
	int16_t x1054 = INT16_MIN;
	static volatile uint64_t x1055 = UINT64_MAX;
	volatile uint64_t x1056 = 7LLU;
	uint64_t t24 = 884595560770990LLU;

	t24 = ((x1053-(x1054|x1055))<<x1056);

	if (t24 != 18446744073614145920LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1161 = UINT32_MAX;
	volatile uint8_t x1163 = 5U;
	uint16_t x1164 = 14U;
	volatile uint32_t t25 = 1U;

	t25 = ((x1161-(x1162|x1163))<<x1164);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1169 = 7U;
	static int32_t x1170 = INT32_MIN;
	static uint32_t x1171 = 171U;
	int8_t x1172 = 1;
	static volatile uint32_t t26 = 108240483U;

	t26 = ((x1169-(x1170|x1171))<<x1172);

	if (t26 != 4294966968U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1225 = INT16_MAX;
	static uint16_t x1226 = 42U;
	int16_t x1227 = 136;
	volatile int8_t x1228 = 10;
	int32_t t27 = 519;

	t27 = ((x1225-(x1226|x1227))<<x1228);

	if (t27 != 33379328) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1365 = 891817266038LL;
	int16_t x1366 = INT16_MIN;
	static int32_t x1367 = INT32_MIN;
	static int16_t x1368 = 6;
	static int64_t t28 = 7LL;

	t28 = ((x1365-(x1366|x1367))<<x1368);

	if (t28 != 57076307123584LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1381 = UINT16_MAX;
	uint16_t x1382 = 10060U;
	uint16_t x1383 = UINT16_MAX;
	volatile uint8_t x1384 = 6U;
	int32_t t29 = 13;

	t29 = ((x1381-(x1382|x1383))<<x1384);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x1385 = 18044U;
	uint64_t x1386 = 2200762904260470120LLU;
	int8_t x1387 = 0;
	uint16_t x1388 = 10U;
	uint64_t t30 = 3101LLU;

	t30 = ((x1385-(x1386|x1387))<<x1388);

	if (t30 != 15368307103571922944LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1450 = INT16_MIN;
	uint16_t x1451 = 23569U;

	t31 = ((x1449-(x1450|x1451))<<x1452);

	if (t31 != 294752) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1478 = UINT16_MAX;
	static uint64_t x1479 = UINT64_MAX;
	uint32_t x1480 = 1U;
	uint64_t t32 = 1415475360LLU;

	t32 = ((x1477-(x1478|x1479))<<x1480);

	if (t32 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1505 = INT64_MAX;
	volatile uint8_t x1507 = UINT8_MAX;
	static uint8_t x1508 = 0U;
	int64_t t33 = -717183006854LL;

	t33 = ((x1505-(x1506|x1507))<<x1508);

	if (t33 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1519 = -1;
	int64_t x1520 = 0LL;
	static int32_t t34 = 114;

	t34 = ((x1517-(x1518|x1519))<<x1520);

	if (t34 != 32) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1593 = INT8_MAX;
	int8_t x1594 = -10;
	volatile int16_t x1595 = INT16_MIN;
	static uint8_t x1596 = 2U;
	int32_t t35 = 3280359;

	t35 = ((x1593-(x1594|x1595))<<x1596);

	if (t35 != 548) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1609 = -1;
	static volatile uint64_t x1610 = 505596404LLU;
	int16_t x1611 = INT16_MAX;
	static uint8_t x1612 = 2U;
	static volatile uint64_t t36 = 248367262200085LLU;

	t36 = ((x1609-(x1610|x1611))<<x1612);

	if (t36 != 18446744071687110656LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1613 = -1;
	uint16_t x1614 = 9691U;
	static uint32_t x1615 = 895U;
	volatile uint32_t t37 = 1925424096U;

	t37 = ((x1613-(x1614|x1615))<<x1616);

	if (t37 != 4294946816U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1645 = INT32_MIN;
	uint8_t x1648 = 13U;

	t38 = ((x1645-(x1646|x1647))<<x1648);

	if (t38 != 1973805056U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1649 = 19775039801LLU;
	int16_t x1650 = INT16_MAX;
	static int16_t x1652 = 1;
	uint64_t t39 = 253791880831050LLU;

	t39 = ((x1649-(x1650|x1651))<<x1652);

	if (t39 != 35255112308LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1665 = UINT16_MAX;
	int32_t x1666 = INT32_MIN;
	uint32_t x1667 = 938606U;
	uint8_t x1668 = 26U;

	t40 = ((x1665-(x1666|x1667))<<x1668);

	if (t40 != 1140850688U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1669 = 0LLU;
	uint64_t x1670 = 16733044LLU;
	volatile int64_t x1671 = INT64_MIN;
	volatile uint64_t t41 = 3309525512LLU;

	t41 = ((x1669-(x1670|x1671))<<x1672);

	if (t41 != 18446726527841206272LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1673 = UINT16_MAX;
	static uint16_t x1674 = UINT16_MAX;
	int32_t t42 = -1;

	t42 = ((x1673-(x1674|x1675))<<x1676);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1697 = INT32_MIN;
	uint8_t x1698 = 2U;
	volatile uint32_t t43 = 187952170U;

	t43 = ((x1697-(x1698|x1699))<<x1700);

	if (t43 != 590955840U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1713 = INT64_MIN;
	volatile uint64_t x1714 = UINT64_MAX;
	int8_t x1715 = INT8_MIN;
	static uint8_t x1716 = 11U;
	static volatile uint64_t t44 = 118LLU;

	t44 = ((x1713-(x1714|x1715))<<x1716);

	if (t44 != 2048LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1718 = -1;
	static volatile uint8_t x1720 = 0U;

	t45 = ((x1717-(x1718|x1719))<<x1720);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1942 = 245578039;
	int16_t x1944 = 0;

	t46 = ((x1941-(x1942|x1943))<<x1944);

	if (t46 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2129 = INT8_MIN;
	static int32_t x2130 = -1;
	uint32_t x2131 = 7477U;
	volatile uint8_t x2132 = 29U;

	t47 = ((x2129-(x2130|x2131))<<x2132);

	if (t47 != 536870912U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2141 = UINT16_MAX;
	static int64_t x2142 = -1LL;
	uint8_t x2144 = 0U;
	volatile int64_t t48 = -1LL;

	t48 = ((x2141-(x2142|x2143))<<x2144);

	if (t48 != 65536LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2225 = INT8_MAX;
	uint16_t x2226 = UINT16_MAX;
	int8_t x2227 = -1;
	uint8_t x2228 = 3U;
	int32_t t49 = 12435;

	t49 = ((x2225-(x2226|x2227))<<x2228);

	if (t49 != 1024) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2305 = INT32_MIN;
	volatile uint64_t x2306 = 47477702LLU;
	volatile int8_t x2307 = -3;
	uint32_t x2308 = 0U;
	uint64_t t50 = 162870LLU;

	t50 = ((x2305-(x2306|x2307))<<x2308);

	if (t50 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2469 = 18566U;
	static volatile int64_t x2470 = -3507808456722731949LL;
	int8_t x2471 = INT8_MIN;
	int8_t x2472 = 0;
	static int64_t t51 = -128588LL;

	t51 = ((x2469-(x2470|x2471))<<x2472);

	if (t51 != 18611LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2513 = INT32_MAX;
	int8_t x2514 = 0;
	uint64_t x2516 = 1LLU;
	uint64_t t52 = 356638293561042462LLU;

	t52 = ((x2513-(x2514|x2515))<<x2516);

	if (t52 != 18431434026681386122LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x2565 = INT8_MIN;
	uint8_t x2566 = UINT8_MAX;
	uint32_t x2567 = 28518321U;
	int32_t x2568 = 0;
	static uint32_t t53 = 102012U;

	t53 = ((x2565-(x2566|x2567))<<x2568);

	if (t53 != 4266448769U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2577 = 108656597534354475LLU;
	int32_t x2578 = INT32_MIN;
	int8_t x2580 = 0;

	t54 = ((x2577-(x2578|x2579))<<x2580);

	if (t54 != 108656599012130281LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2581 = 13U;
	volatile uint8_t x2582 = 14U;
	int16_t x2583 = -1053;
	uint32_t t55 = 495564U;

	t55 = ((x2581-(x2582|x2583))<<x2584);

	if (t55 != 2108U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2601 = 14U;
	volatile uint64_t x2602 = UINT64_MAX;
	volatile int8_t x2603 = -1;
	int8_t x2604 = 0;
	uint64_t t56 = 134107962020203083LLU;

	t56 = ((x2601-(x2602|x2603))<<x2604);

	if (t56 != 15LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2677 = -1;
	int32_t x2678 = INT32_MIN;
	int64_t x2679 = INT64_MIN;
	int64_t t57 = 11375582LL;

	t57 = ((x2677-(x2678|x2679))<<x2680);

	if (t57 != 35184372072448LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2701 = 10125384667LLU;
	uint8_t x2702 = UINT8_MAX;
	int64_t x2703 = 867103011748117LL;
	int8_t x2704 = 39;
	uint64_t t58 = 137492LLU;

	t58 = ((x2701-(x2702|x2703))<<x2704);

	if (t58 != 4805602486171729920LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2707 = -2;
	static uint64_t x2708 = 3LLU;

	t59 = ((x2705-(x2706|x2707))<<x2708);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2769 = 1008498LLU;
	volatile int16_t x2770 = -367;
	static int32_t x2771 = INT32_MIN;
	volatile uint64_t t60 = 169LLU;

	t60 = ((x2769-(x2770|x2771))<<x2772);

	if (t60 != 8070920LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2789 = UINT8_MAX;
	static int8_t x2790 = INT8_MAX;
	volatile uint16_t x2791 = 113U;
	int16_t x2792 = 1;

	t61 = ((x2789-(x2790|x2791))<<x2792);

	if (t61 != 256) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2801 = 59322602LL;
	int8_t x2802 = -7;
	uint8_t x2803 = 10U;
	static int64_t x2804 = 8LL;

	t62 = ((x2801-(x2802|x2803))<<x2804);

	if (t62 != 15186587392LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2845 = 2U;
	int8_t x2846 = -1;
	static int8_t x2848 = 8;

	t63 = ((x2845-(x2846|x2847))<<x2848);

	if (t63 != 768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2882 = INT8_MIN;
	uint64_t x2883 = UINT64_MAX;
	volatile uint8_t x2884 = 14U;

	t64 = ((x2881-(x2882|x2883))<<x2884);

	if (t64 != 1523712LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2941 = INT8_MAX;
	uint8_t x2942 = UINT8_MAX;
	uint64_t x2944 = 7LLU;
	uint64_t t65 = 650467684159368LLU;

	t65 = ((x2941-(x2942|x2943))<<x2944);

	if (t65 != 18350363916580569088LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2989 = UINT8_MAX;
	int8_t x2990 = -1;
	static int8_t x2991 = INT8_MIN;
	uint8_t x2992 = 1U;
	volatile int32_t t66 = 0;

	t66 = ((x2989-(x2990|x2991))<<x2992);

	if (t66 != 512) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3005 = UINT64_MAX;
	uint8_t x3006 = UINT8_MAX;
	volatile int16_t x3007 = 1234;
	uint8_t x3008 = 0U;

	t67 = ((x3005-(x3006|x3007))<<x3008);

	if (t67 != 18446744073709550336LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3166 = 5769U;
	volatile int8_t x3167 = -1;
	static int8_t x3168 = 11;
	uint32_t t68 = 6549U;

	t68 = ((x3165-(x3166|x3167))<<x3168);

	if (t68 != 4294565888U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3181 = -1LL;
	int32_t x3182 = INT32_MAX;
	volatile int8_t x3183 = INT8_MIN;
	int16_t x3184 = 2;
	int64_t t69 = -365LL;

	t69 = ((x3181-(x3182|x3183))<<x3184);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x3215 = 525490869451926LLU;
	uint8_t x3216 = 12U;
	static volatile uint64_t t70 = 477LLU;

	t70 = ((x3213-(x3214|x3215))<<x3216);

	if (t70 != 71733248LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3229 = 1U;
	volatile uint64_t x3230 = 29LLU;
	int16_t x3232 = 60;
	volatile uint64_t t71 = 674876126652773291LLU;

	t71 = ((x3229-(x3230|x3231))<<x3232);

	if (t71 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x3297 = -1;
	int16_t x3298 = -1;
	static uint16_t x3299 = 0U;
	volatile int32_t t72 = 83702;

	t72 = ((x3297-(x3298|x3299))<<x3300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x3345 = 15U;
	int64_t x3347 = -1LL;
	int8_t x3348 = 1;
	volatile int64_t t73 = 1LL;

	t73 = ((x3345-(x3346|x3347))<<x3348);

	if (t73 != 32LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3373 = -1LL;
	uint8_t x3374 = 12U;
	int32_t x3375 = -1;
	static volatile uint32_t x3376 = 0U;
	static int64_t t74 = -6154893937345LL;

	t74 = ((x3373-(x3374|x3375))<<x3376);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3381 = 407905U;
	volatile int8_t x3384 = 16;

	t75 = ((x3381-(x3382|x3383))<<x3384);

	if (t75 != 26732527616LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3421 = 0;
	volatile int8_t x3424 = 8;
	volatile uint32_t t76 = 1669U;

	t76 = ((x3421-(x3422|x3423))<<x3424);

	if (t76 != 256U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x3445 = 143;
	uint16_t x3446 = 67U;
	uint16_t x3447 = 122U;

	t77 = ((x3445-(x3446|x3447))<<x3448);

	if (t77 != 320) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3465 = 486421U;
	uint16_t x3466 = 34U;
	volatile int16_t x3467 = 13832;
	uint16_t x3468 = 1U;
	volatile uint32_t t78 = 778646496U;

	t78 = ((x3465-(x3466|x3467))<<x3468);

	if (t78 != 945110U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3481 = UINT32_MAX;
	int8_t x3483 = -1;
	uint32_t x3484 = 31U;
	volatile uint32_t t79 = 356497524U;

	t79 = ((x3481-(x3482|x3483))<<x3484);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3518 = 7758280LLU;
	volatile int16_t x3519 = INT16_MAX;

	t80 = ((x3517-(x3518|x3519))<<x3520);

	if (t80 != 18446744073694019584LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3601 = 10587042U;
	static int8_t x3602 = 2;
	int16_t x3603 = 345;
	int16_t x3604 = 11;
	uint32_t t81 = 451030U;

	t81 = ((x3601-(x3602|x3603))<<x3604);

	if (t81 != 206714880U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3653 = INT32_MAX;
	int32_t x3654 = INT32_MAX;
	static uint8_t x3655 = 1U;
	int8_t x3656 = 0;

	t82 = ((x3653-(x3654|x3655))<<x3656);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3706 = 1;
	uint8_t x3707 = 1U;
	uint8_t x3708 = 14U;
	int32_t t83 = 6;

	t83 = ((x3705-(x3706|x3707))<<x3708);

	if (t83 != 536838144) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3725 = 6U;
	int8_t x3726 = -1;
	volatile uint64_t x3727 = 5845135LLU;
	int8_t x3728 = 1;
	uint64_t t84 = 11600455741LLU;

	t84 = ((x3725-(x3726|x3727))<<x3728);

	if (t84 != 14LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x3802 = INT16_MIN;
	int8_t x3804 = 13;
	int64_t t85 = -241964544949281813LL;

	t85 = ((x3801-(x3802|x3803))<<x3804);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3913 = 0U;
	volatile int32_t x3914 = -11400;
	int32_t x3915 = -81110;
	volatile uint8_t x3916 = 13U;
	int32_t t86 = 894;

	t86 = ((x3913-(x3914|x3915))<<x3916);

	if (t86 != 93372416) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x3918 = -4381;
	uint16_t x3919 = 3U;
	uint8_t x3920 = 0U;
	volatile int32_t t87 = 53138037;

	t87 = ((x3917-(x3918|x3919))<<x3920);

	if (t87 != 4253) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3941 = 13U;
	static uint8_t x3942 = UINT8_MAX;
	int16_t x3943 = 337;
	uint8_t x3944 = 0U;
	static uint32_t t88 = 14980484U;

	t88 = ((x3941-(x3942|x3943))<<x3944);

	if (t88 != 4294966798U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3949 = 615939022837787LLU;
	uint64_t t89 = 1LLU;

	t89 = ((x3949-(x3950|x3951))<<x3952);

	if (t89 != 16907463460231577600LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x3953 = UINT64_MAX;
	uint64_t x3955 = 54899692822563LLU;
	uint8_t x3956 = 42U;
	volatile uint64_t t90 = 90LLU;

	t90 = ((x3953-(x3954|x3955))<<x3956);

	if (t90 != 15516308091174912LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x4113 = 7U;
	int16_t x4115 = INT16_MAX;
	volatile uint32_t t91 = 1608011292U;

	t91 = ((x4113-(x4114|x4115))<<x4116);

	if (t91 != 1073741824U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4165 = 9076LLU;
	volatile int16_t x4166 = -2324;
	uint8_t x4168 = 7U;
	static uint64_t t92 = 1179321309509461521LLU;

	t92 = ((x4165-(x4166|x4167))<<x4168);

	if (t92 != 1161856LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x4225 = UINT16_MAX;
	uint8_t x4228 = 1U;
	static volatile uint64_t t93 = 8726030986963LLU;

	t93 = ((x4225-(x4226|x4227))<<x4228);

	if (t93 != 131072LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4258 = INT32_MIN;
	static uint8_t x4260 = 23U;
	int64_t t94 = -5LL;

	t94 = ((x4257-(x4258|x4259))<<x4260);

	if (t94 != 16228551896334336LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4301 = -1LL;
	int8_t x4302 = INT8_MAX;
	volatile int16_t x4303 = INT16_MIN;
	static uint16_t x4304 = 9U;
	volatile int64_t t95 = 11629523LL;

	t95 = ((x4301-(x4302|x4303))<<x4304);

	if (t95 != 16711680LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x4325 = INT64_MAX;
	int64_t x4326 = INT64_MIN;
	uint64_t x4327 = UINT64_MAX;
	int8_t x4328 = 11;
	uint64_t t96 = 54LLU;

	t96 = ((x4325-(x4326|x4327))<<x4328);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4333 = -22481LL;
	int64_t x4334 = -47575254031LL;
	uint64_t x4335 = UINT64_MAX;
	uint64_t x4336 = 0LLU;
	volatile uint64_t t97 = 5315393819LLU;

	t97 = ((x4333-(x4334|x4335))<<x4336);

	if (t97 != 18446744073709529136LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4341 = UINT16_MAX;
	int16_t x4343 = INT16_MIN;
	int16_t x4344 = 4;
	volatile int64_t t98 = 14LL;

	t98 = ((x4341-(x4342|x4343))<<x4344);

	if (t98 != 1513408LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4394 = 1999510237U;
	int16_t x4395 = INT16_MIN;
	uint16_t x4396 = 2U;
	uint32_t t99 = 1048518561U;

	t99 = ((x4393-(x4394|x4395))<<x4396);

	if (t99 != 103564U) { NG(); } else { ; }
	
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

