#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x40 = 34014730612676LLU;
uint32_t x80 = 46U;
uint8_t x162 = 104U;
static int8_t x164 = -1;
static uint8_t x179 = 33U;
static int32_t t8 = 18;
uint64_t x318 = UINT64_MAX;
uint32_t x428 = UINT32_MAX;
volatile int16_t x472 = 3;
int8_t x545 = INT8_MAX;
static int32_t t17 = 968778721;
uint8_t x703 = 6U;
uint64_t x729 = UINT64_MAX;
int8_t x730 = INT8_MAX;
static uint64_t t19 = 17699094LLU;
int16_t x734 = INT16_MIN;
volatile int16_t x735 = 14;
int32_t x736 = INT32_MIN;
volatile uint64_t t21 = 27953429744961LLU;
uint32_t t22 = UINT32_MAX;
int32_t x765 = INT32_MIN;
uint64_t t24 = 109900317LLU;
uint32_t x894 = 284888U;
uint8_t x895 = 4U;
volatile uint64_t x901 = 7557338894LLU;
static int32_t x902 = -1;
int8_t x904 = 1;
uint64_t t27 = 262139LLU;
volatile uint64_t x1089 = 31193208555225043LLU;
static int16_t x1274 = -1;
int16_t x1275 = 4;
volatile int64_t t33 = 15901287139LL;
uint8_t x1394 = UINT8_MAX;
uint64_t t35 = 386156848892031331LLU;
int64_t x1661 = 46605870LL;
volatile int32_t t42 = 2803;
volatile int8_t x1832 = INT8_MIN;
int32_t x1833 = INT32_MIN;
volatile uint8_t x1835 = 1U;
int32_t t45 = -17661207;
uint8_t x1903 = 5U;
int16_t x1962 = -3970;
static int16_t x1963 = 1;
volatile uint32_t x2099 = 0U;
int8_t x2112 = 19;
int64_t x2198 = INT64_MIN;
int32_t t52 = -1529;
static volatile uint8_t x2303 = 47U;
int32_t x2304 = 6;
int8_t x2379 = 15;
uint64_t x2453 = 73327995991LLU;
uint32_t x2501 = UINT32_MAX;
volatile uint32_t t56 = 10U;
int8_t x2584 = INT8_MIN;
volatile uint16_t x2617 = 0U;
uint64_t x2694 = 101LLU;
uint64_t x2726 = 9725821LLU;
volatile uint64_t t63 = 33878983743695229LLU;
volatile uint32_t t65 = 12543U;
uint8_t x2855 = 29U;
int64_t x2870 = INT64_MAX;
int64_t x2871 = 1LL;
uint64_t x2878 = 10528939482723212LLU;
static uint64_t x3022 = 1304752130439390020LLU;
int8_t x3034 = -1;
int8_t x3038 = -1;
volatile int32_t t74 = 5424016;
uint8_t x3206 = 63U;
int64_t x3220 = INT64_MAX;
int32_t x3270 = -1;
static uint16_t x3399 = 1U;
int64_t t79 = INT64_MIN;
static int8_t x3494 = INT8_MIN;
uint32_t x3739 = 1U;
static int16_t x3769 = -10405;
int8_t x3802 = -3;
static uint16_t x3989 = 1U;
uint32_t t89 = 13064U;
uint8_t x4079 = 30U;
int32_t t91 = -121;
int64_t x4217 = INT64_MIN;
volatile int64_t t93 = 54212174103813928LL;
static uint64_t x4285 = 2399821677272967263LLU;
int16_t x4310 = -42;
int8_t x4311 = 4;
uint64_t t97 = 35932950378173590LLU;
volatile int64_t x4440 = -4877573621416273LL;
volatile int64_t t98 = 624694348129888LL;
int64_t x4461 = INT64_MIN;
uint8_t x4463 = 9U;
int16_t x4464 = INT16_MAX;
int64_t t99 = -279811LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int32_t x2 = -1;
	int16_t x3 = 1;
	volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -12959241;

	t0 = (((x1%x2)<<x3)^x4);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x21 = 18U;
	static int32_t x22 = -1;
	volatile uint32_t x23 = 11U;
	int64_t x24 = -1LL;
	int64_t t1 = 9005715848LL;

	t1 = (((x21%x22)<<x23)^x24);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x37 = 4237432119841055718LLU;
	int8_t x38 = -1;
	int8_t x39 = 39;
	uint64_t t2 = 494LLU;

	t2 = (((x37%x38)<<x39)^x40);

	if (t2 != 8823094758633074628LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = INT16_MIN;
	int8_t x43 = 0;
	int32_t x44 = -2067;
	volatile int64_t t3 = 88245061LL;

	t3 = (((x41%x42)<<x43)^x44);

	if (t3 != -30702LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x78 = 63831533LL;
	int8_t x79 = 0;
	int64_t t4 = -52936LL;

	t4 = (((x77%x78)<<x79)^x80);

	if (t4 != 209LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x161 = 1853622U;
	volatile uint64_t x163 = 1LLU;
	volatile uint32_t t5 = 564173U;

	t5 = (((x161%x162)<<x163)^x164);

	if (t5 != 4294967235U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x177 = UINT64_MAX;
	static uint8_t x178 = 13U;
	uint32_t x180 = UINT32_MAX;
	uint64_t t6 = 4066480588823974285LLU;

	t6 = (((x177%x178)<<x179)^x180);

	if (t6 != 21474836479LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x189 = 142LLU;
	volatile uint32_t x190 = UINT32_MAX;
	volatile int8_t x191 = 3;
	int64_t x192 = INT64_MIN;
	uint64_t t7 = 442791LLU;

	t7 = (((x189%x190)<<x191)^x192);

	if (t7 != 9223372036854776944LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x245 = 686;
	int16_t x246 = INT16_MIN;
	int8_t x247 = 0;
	static int32_t x248 = 19303236;

	t8 = (((x245%x246)<<x247)^x248);

	if (t8 != 19302890) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x289 = 1;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = 1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t9 = 8;

	t9 = (((x289%x290)<<x291)^x292);

	if (t9 != -126) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x317 = -2;
	int8_t x319 = 1;
	int32_t x320 = 3;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (((x317%x318)<<x319)^x320);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x385 = 4;
	int8_t x386 = -1;
	volatile int8_t x387 = 1;
	volatile uint32_t x388 = UINT32_MAX;
	static volatile uint32_t t11 = UINT32_MAX;

	t11 = (((x385%x386)<<x387)^x388);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x426 = 934277450938343470LLU;
	static uint8_t x427 = 1U;
	volatile uint64_t t12 = 40209395998283059LLU;

	t12 = (((x425%x426)<<x427)^x428);

	if (t12 != 1390945012829800403LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x469 = INT8_MAX;
	uint64_t x470 = 59598170003764209LLU;
	uint8_t x471 = 32U;
	uint64_t t13 = 19207051145LLU;

	t13 = (((x469%x470)<<x471)^x472);

	if (t13 != 545460846595LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x546 = INT32_MAX;
	volatile uint8_t x547 = 1U;
	int8_t x548 = INT8_MAX;
	static volatile int32_t t14 = 48;

	t14 = (((x545%x546)<<x547)^x548);

	if (t14 != 129) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x585 = 0U;
	static uint64_t x586 = 66107543107000734LLU;
	uint32_t x587 = 9U;
	volatile int16_t x588 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x585%x586)<<x587)^x588);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x609 = INT32_MAX;
	int32_t x610 = INT32_MAX;
	volatile uint32_t x611 = 7U;
	int32_t x612 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x609%x610)<<x611)^x612);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x661 = 6U;
	volatile int32_t x662 = INT32_MIN;
	uint8_t x663 = 6U;
	static uint8_t x664 = 3U;

	t17 = (((x661%x662)<<x663)^x664);

	if (t17 != 387) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x701 = 1726093162021390LL;
	static int8_t x702 = INT8_MAX;
	int8_t x704 = INT8_MIN;
	int64_t t18 = -89981040201916310LL;

	t18 = (((x701%x702)<<x703)^x704);

	if (t18 != -7360LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x731 = 40U;
	int16_t x732 = -332;

	t19 = (((x729%x730)<<x731)^x732);

	if (t19 != 18446742974197923508LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x733 = 376U;
	static volatile int32_t t20 = -8151736;

	t20 = (((x733%x734)<<x735)^x736);

	if (t20 != -2141323264) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x737 = 217U;
	uint64_t x738 = 299616545LLU;
	static int8_t x739 = 0;
	int8_t x740 = INT8_MAX;

	t21 = (((x737%x738)<<x739)^x740);

	if (t21 != 166LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x741 = -1;
	static volatile uint32_t x742 = UINT32_MAX;
	int16_t x743 = 11;
	uint32_t x744 = UINT32_MAX;

	t22 = (((x741%x742)<<x743)^x744);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x761 = 1175253009LLU;
	uint16_t x762 = UINT16_MAX;
	int8_t x763 = 9;
	static uint32_t x764 = 154U;
	uint64_t t23 = 1179779560140919762LLU;

	t23 = (((x761%x762)<<x763)^x764);

	if (t23 != 7093402LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x766 = 4022209LLU;
	volatile uint8_t x767 = 1U;
	int16_t x768 = INT16_MIN;

	t24 = (((x765%x766)<<x767)^x768);

	if (t24 != 18446744073709058084LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x805 = INT32_MIN;
	static uint64_t x806 = 1963LLU;
	int16_t x807 = 7;
	uint32_t x808 = 1624U;
	volatile uint64_t t25 = 3777111LLU;

	t25 = (((x805%x806)<<x807)^x808);

	if (t25 != 135640LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x893 = 246468020068LL;
	static int8_t x896 = 5;
	static volatile int64_t t26 = -1379281080LL;

	t26 = (((x893%x894)<<x895)^x896);

	if (t26 != 251973LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x903 = 43U;

	t27 = (((x901%x902)<<x903)^x904);

	if (t27 != 11437014399009685505LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1090 = 121;
	int16_t x1091 = 0;
	int16_t x1092 = -1;
	uint64_t t28 = 255LLU;

	t28 = (((x1089%x1090)<<x1091)^x1092);

	if (t28 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1177 = 1U;
	int64_t x1178 = 3529802737465963641LL;
	int8_t x1179 = 0;
	uint64_t x1180 = UINT64_MAX;
	uint64_t t29 = 3708LLU;

	t29 = (((x1177%x1178)<<x1179)^x1180);

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1197 = INT64_MAX;
	volatile int32_t x1198 = INT32_MIN;
	uint8_t x1199 = 5U;
	int32_t x1200 = INT32_MAX;
	volatile int64_t t30 = -54604229510778LL;

	t30 = (((x1197%x1198)<<x1199)^x1200);

	if (t30 != 66571993119LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1273 = -18;
	static uint32_t x1276 = 118371U;
	uint32_t t31 = 36U;

	t31 = (((x1273%x1274)<<x1275)^x1276);

	if (t31 != 118371U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1301 = 160523544513909LLU;
	static int8_t x1302 = INT8_MIN;
	static volatile uint8_t x1303 = 25U;
	int64_t x1304 = -178314075LL;
	volatile uint64_t t32 = 14420525337253LLU;

	t32 = (((x1301%x1302)<<x1303)^x1304);

	if (t32 != 172910732413707429LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1325 = INT64_MIN;
	int32_t x1326 = -1;
	static uint16_t x1327 = 0U;
	int8_t x1328 = INT8_MIN;

	t33 = (((x1325%x1326)<<x1327)^x1328);

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1381 = INT64_MIN;
	int32_t x1382 = -1;
	static int32_t x1383 = 61;
	int32_t x1384 = INT32_MIN;
	static int64_t t34 = 210607406851039274LL;

	t34 = (((x1381%x1382)<<x1383)^x1384);

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1393 = INT64_MAX;
	int64_t x1395 = 0LL;
	uint64_t x1396 = UINT64_MAX;

	t35 = (((x1393%x1394)<<x1395)^x1396);

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1433 = INT64_MIN;
	int32_t x1434 = INT32_MIN;
	volatile uint8_t x1435 = 0U;
	uint16_t x1436 = UINT16_MAX;
	int64_t t36 = 20LL;

	t36 = (((x1433%x1434)<<x1435)^x1436);

	if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1481 = -1;
	uint32_t x1482 = UINT32_MAX;
	volatile uint8_t x1483 = 10U;
	volatile uint16_t x1484 = UINT16_MAX;
	static uint32_t t37 = 4720U;

	t37 = (((x1481%x1482)<<x1483)^x1484);

	if (t37 != 65535U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1525 = 13U;
	uint64_t x1526 = 333LLU;
	uint64_t x1527 = 7LLU;
	int64_t x1528 = INT64_MIN;
	uint64_t t38 = 117853341263352754LLU;

	t38 = (((x1525%x1526)<<x1527)^x1528);

	if (t38 != 9223372036854777472LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1641 = 4U;
	int16_t x1642 = -1;
	uint16_t x1643 = 22U;
	static int32_t x1644 = -31;
	volatile int32_t t39 = -21;

	t39 = (((x1641%x1642)<<x1643)^x1644);

	if (t39 != -31) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1649 = -7;
	int64_t x1650 = -1LL;
	volatile uint32_t x1651 = 40U;
	static int16_t x1652 = INT16_MIN;
	volatile int64_t t40 = -1778897439654553023LL;

	t40 = (((x1649%x1650)<<x1651)^x1652);

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1662 = INT64_MAX;
	static uint8_t x1663 = 19U;
	static int8_t x1664 = INT8_MIN;
	static int64_t t41 = -2687701174LL;

	t41 = (((x1661%x1662)<<x1663)^x1664);

	if (t41 != -24434898370688LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1665 = 7U;
	int8_t x1666 = -1;
	static uint8_t x1667 = 14U;
	int16_t x1668 = 22;

	t42 = (((x1665%x1666)<<x1667)^x1668);

	if (t42 != 22) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1801 = UINT16_MAX;
	uint64_t x1802 = 33LLU;
	static int32_t x1803 = 0;
	volatile int16_t x1804 = 796;
	volatile uint64_t t43 = 130711269448446076LLU;

	t43 = (((x1801%x1802)<<x1803)^x1804);

	if (t43 != 770LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1829 = INT64_MIN;
	volatile int16_t x1830 = INT16_MIN;
	static int16_t x1831 = 15;
	int64_t t44 = -16734556228LL;

	t44 = (((x1829%x1830)<<x1831)^x1832);

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1834 = INT32_MIN;
	int16_t x1836 = -34;

	t45 = (((x1833%x1834)<<x1835)^x1836);

	if (t45 != -34) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1901 = 61;
	int64_t x1902 = -643173748214037912LL;
	int8_t x1904 = -1;
	int64_t t46 = -27466780654967550LL;

	t46 = (((x1901%x1902)<<x1903)^x1904);

	if (t46 != -1953LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x1961 = INT64_MAX;
	static int32_t x1964 = INT32_MIN;
	static int64_t t47 = -2113734335433LL;

	t47 = (((x1961%x1962)<<x1963)^x1964);

	if (t47 != -2147483154LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2097 = 4851U;
	static volatile int8_t x2098 = INT8_MIN;
	uint32_t x2100 = UINT32_MAX;
	uint32_t t48 = 55670544U;

	t48 = (((x2097%x2098)<<x2099)^x2100);

	if (t48 != 4294967180U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2109 = UINT32_MAX;
	static int8_t x2110 = -1;
	uint8_t x2111 = 7U;
	static volatile uint32_t t49 = 1747737U;

	t49 = (((x2109%x2110)<<x2111)^x2112);

	if (t49 != 19U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x2197 = 2520U;
	int32_t x2199 = 23;
	int64_t x2200 = INT64_MIN;
	int64_t t50 = 12311826138561LL;

	t50 = (((x2197%x2198)<<x2199)^x2200);

	if (t50 != -9223372015715483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2201 = -4784647752LL;
	int32_t x2202 = -1;
	static uint16_t x2203 = 29U;
	uint32_t x2204 = 76U;
	volatile int64_t t51 = -8905490609133928LL;

	t51 = (((x2201%x2202)<<x2203)^x2204);

	if (t51 != 76LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2229 = 1;
	int8_t x2230 = -1;
	uint16_t x2231 = 25U;
	int8_t x2232 = 0;

	t52 = (((x2229%x2230)<<x2231)^x2232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2301 = -14971;
	int64_t x2302 = -1LL;
	volatile int64_t t53 = 2745686747493LL;

	t53 = (((x2301%x2302)<<x2303)^x2304);

	if (t53 != 6LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2377 = INT64_MIN;
	uint64_t x2378 = UINT64_MAX;
	int8_t x2380 = INT8_MIN;
	volatile uint64_t t54 = 93655450164248605LLU;

	t54 = (((x2377%x2378)<<x2379)^x2380);

	if (t54 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x2454 = -1LL;
	int16_t x2455 = 0;
	uint8_t x2456 = 67U;
	volatile uint64_t t55 = 847752704346LLU;

	t55 = (((x2453%x2454)<<x2455)^x2456);

	if (t55 != 73327995924LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x2502 = 2087459U;
	uint64_t x2503 = 0LLU;
	int16_t x2504 = 457;

	t56 = (((x2501%x2502)<<x2503)^x2504);

	if (t56 != 1064205U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2581 = INT32_MAX;
	uint16_t x2582 = UINT16_MAX;
	int8_t x2583 = 0;
	int32_t t57 = -30438377;

	t57 = (((x2581%x2582)<<x2583)^x2584);

	if (t57 != -32641) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2589 = UINT16_MAX;
	uint16_t x2590 = 8U;
	volatile int8_t x2591 = 0;
	int32_t x2592 = -420;
	static volatile int32_t t58 = -3702;

	t58 = (((x2589%x2590)<<x2591)^x2592);

	if (t58 != -421) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2618 = 501U;
	uint8_t x2619 = 3U;
	int16_t x2620 = 67;
	volatile int32_t t59 = 31197004;

	t59 = (((x2617%x2618)<<x2619)^x2620);

	if (t59 != 67) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x2681 = UINT32_MAX;
	int64_t x2682 = INT64_MIN;
	int16_t x2683 = 5;
	static volatile int32_t x2684 = INT32_MIN;
	int64_t t60 = -3948120248LL;

	t60 = (((x2681%x2682)<<x2683)^x2684);

	if (t60 != -135291469856LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2693 = INT8_MIN;
	uint8_t x2695 = 0U;
	volatile uint8_t x2696 = 51U;
	volatile uint64_t t61 = 47926998024628962LLU;

	t61 = (((x2693%x2694)<<x2695)^x2696);

	if (t61 != 7LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2725 = 56908506204183875LLU;
	uint16_t x2727 = 49U;
	uint16_t x2728 = 1U;
	volatile uint64_t t62 = 6222LLU;

	t62 = (((x2725%x2726)<<x2727)^x2728);

	if (t62 != 1000362067229671425LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2761 = -1;
	uint64_t x2762 = UINT64_MAX;
	static uint8_t x2763 = 15U;
	volatile int16_t x2764 = 11575;

	t63 = (((x2761%x2762)<<x2763)^x2764);

	if (t63 != 11575LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x2769 = -246;
	int16_t x2770 = -1;
	uint16_t x2771 = 4U;
	static int32_t x2772 = -14636;
	int32_t t64 = 644;

	t64 = (((x2769%x2770)<<x2771)^x2772);

	if (t64 != -14636) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2789 = INT32_MIN;
	uint32_t x2790 = UINT32_MAX;
	uint16_t x2791 = 15U;
	int16_t x2792 = 10;

	t65 = (((x2789%x2790)<<x2791)^x2792);

	if (t65 != 10U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2853 = INT64_MAX;
	uint32_t x2854 = UINT32_MAX;
	volatile int64_t x2856 = 799376399LL;
	static int64_t t66 = 6852567LL;

	t66 = (((x2853%x2854)<<x2855)^x2856);

	if (t66 != 1152921503795610639LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2869 = 321LLU;
	static uint16_t x2872 = 1U;
	volatile uint64_t t67 = 242LLU;

	t67 = (((x2869%x2870)<<x2871)^x2872);

	if (t67 != 643LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2877 = -1;
	int16_t x2879 = 35;
	int8_t x2880 = 1;
	static uint64_t t68 = 324059659620724LLU;

	t68 = (((x2877%x2878)<<x2879)^x2880);

	if (t68 != 5915987150075068417LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2909 = 0U;
	uint32_t x2910 = UINT32_MAX;
	volatile uint8_t x2911 = 8U;
	int16_t x2912 = -7982;
	volatile uint32_t t69 = 3328103U;

	t69 = (((x2909%x2910)<<x2911)^x2912);

	if (t69 != 4294959314U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2981 = -991982;
	uint64_t x2982 = 18159962773674LLU;
	int32_t x2983 = 0;
	volatile uint32_t x2984 = 439438572U;
	uint64_t t70 = 42861487LLU;

	t70 = (((x2981%x2982)<<x2983)^x2984);

	if (t70 != 17327775911088LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3001 = 8U;
	int64_t x3002 = INT64_MAX;
	uint8_t x3003 = 8U;
	int64_t x3004 = INT64_MAX;
	static volatile int64_t t71 = 69565321479931989LL;

	t71 = (((x3001%x3002)<<x3003)^x3004);

	if (t71 != 9223372036854773759LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3021 = 84U;
	int8_t x3023 = 15;
	int64_t x3024 = -1LL;
	volatile uint64_t t72 = 0LLU;

	t72 = (((x3021%x3022)<<x3023)^x3024);

	if (t72 != 18446744073706799103LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3033 = -6562216598320757LL;
	int8_t x3035 = 0;
	volatile uint8_t x3036 = 6U;
	int64_t t73 = 583496631488LL;

	t73 = (((x3033%x3034)<<x3035)^x3036);

	if (t73 != 6LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3037 = INT16_MIN;
	uint8_t x3039 = 1U;
	uint8_t x3040 = 2U;

	t74 = (((x3037%x3038)<<x3039)^x3040);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3205 = INT64_MAX;
	volatile uint16_t x3207 = 14U;
	uint32_t x3208 = UINT32_MAX;
	volatile int64_t t75 = 55529013857637455LL;

	t75 = (((x3205%x3206)<<x3207)^x3208);

	if (t75 != 4294852607LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3217 = INT16_MIN;
	static int8_t x3218 = -2;
	int16_t x3219 = 18;
	volatile int64_t t76 = INT64_MAX;

	t76 = (((x3217%x3218)<<x3219)^x3220);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3233 = UINT32_MAX;
	uint32_t x3234 = 2259022U;
	int8_t x3235 = 1;
	volatile uint16_t x3236 = UINT16_MAX;
	uint32_t t77 = 9878U;

	t77 = (((x3233%x3234)<<x3235)^x3236);

	if (t77 != 1160813U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3269 = -7;
	int8_t x3271 = 0;
	static int8_t x3272 = -1;
	static int32_t t78 = -28;

	t78 = (((x3269%x3270)<<x3271)^x3272);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x3397 = -1;
	uint32_t x3398 = UINT32_MAX;
	int64_t x3400 = INT64_MIN;

	t79 = (((x3397%x3398)<<x3399)^x3400);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x3493 = INT16_MIN;
	uint8_t x3495 = 5U;
	int64_t x3496 = -1299712268LL;
	volatile int64_t t80 = 29227LL;

	t80 = (((x3493%x3494)<<x3495)^x3496);

	if (t80 != -1299712268LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x3533 = INT16_MIN;
	uint64_t x3534 = 194692790738165LLU;
	uint16_t x3535 = 62U;
	uint32_t x3536 = 1250618702U;
	static uint64_t t81 = 32259851975LLU;

	t81 = (((x3533%x3534)<<x3535)^x3536);

	if (t81 != 4611686019678006606LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3557 = 30U;
	volatile int8_t x3558 = INT8_MAX;
	static volatile int16_t x3559 = 10;
	volatile int64_t x3560 = INT64_MIN;
	volatile int64_t t82 = -47209359446107LL;

	t82 = (((x3557%x3558)<<x3559)^x3560);

	if (t82 != -9223372036854745088LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3561 = INT32_MIN;
	static int8_t x3562 = INT8_MIN;
	uint8_t x3563 = 14U;
	int64_t x3564 = INT64_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (((x3561%x3562)<<x3563)^x3564);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3737 = INT8_MIN;
	static int64_t x3738 = -1LL;
	uint16_t x3740 = UINT16_MAX;
	int64_t t84 = -3566577LL;

	t84 = (((x3737%x3738)<<x3739)^x3740);

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3770 = -1;
	int16_t x3771 = 10;
	static uint16_t x3772 = 0U;
	int32_t t85 = -22179;

	t85 = (((x3769%x3770)<<x3771)^x3772);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3801 = 19;
	static volatile int8_t x3803 = 17;
	volatile uint32_t x3804 = UINT32_MAX;
	static uint32_t t86 = 4385U;

	t86 = (((x3801%x3802)<<x3803)^x3804);

	if (t86 != 4294836223U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x3969 = 5U;
	int16_t x3970 = INT16_MIN;
	uint64_t x3971 = 0LLU;
	volatile int8_t x3972 = INT8_MIN;
	int32_t t87 = 1752;

	t87 = (((x3969%x3970)<<x3971)^x3972);

	if (t87 != -123) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x3990 = -431676099220994229LL;
	uint32_t x3991 = 0U;
	int32_t x3992 = INT32_MAX;
	int64_t t88 = 1021791LL;

	t88 = (((x3989%x3990)<<x3991)^x3992);

	if (t88 != 2147483646LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x4069 = UINT32_MAX;
	int32_t x4070 = -1;
	static int32_t x4071 = 3;
	uint32_t x4072 = 813U;

	t89 = (((x4069%x4070)<<x4071)^x4072);

	if (t89 != 813U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4077 = 705U;
	volatile int64_t x4078 = 1089LL;
	int32_t x4080 = 70;
	int64_t t90 = -104537975LL;

	t90 = (((x4077%x4078)<<x4079)^x4080);

	if (t90 != 756987985990LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4201 = 2U;
	int32_t x4202 = -116743;
	uint32_t x4203 = 0U;
	uint8_t x4204 = UINT8_MAX;

	t91 = (((x4201%x4202)<<x4203)^x4204);

	if (t91 != 253) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x4205 = 1;
	int8_t x4206 = -23;
	volatile int16_t x4207 = 0;
	uint8_t x4208 = 15U;
	volatile int32_t t92 = 83;

	t92 = (((x4205%x4206)<<x4207)^x4208);

	if (t92 != 14) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x4218 = INT32_MIN;
	int32_t x4219 = 39;
	int8_t x4220 = -12;

	t93 = (((x4217%x4218)<<x4219)^x4220);

	if (t93 != -12LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4245 = 596012595990934LLU;
	static int8_t x4246 = INT8_MIN;
	volatile uint32_t x4247 = 1U;
	int32_t x4248 = INT32_MIN;
	volatile uint64_t t94 = 196267551LLU;

	t94 = (((x4245%x4246)<<x4247)^x4248);

	if (t94 != 18445552050602353452LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4286 = INT16_MIN;
	static int32_t x4287 = 3;
	uint32_t x4288 = 3088U;
	static uint64_t t95 = 2705636414253LLU;

	t95 = (((x4285%x4286)<<x4287)^x4288);

	if (t95 != 751829344474189544LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x4309 = 122U;
	static int32_t x4312 = -1;
	int32_t t96 = 1;

	t96 = (((x4309%x4310)<<x4311)^x4312);

	if (t96 != -609) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4433 = INT8_MIN;
	uint64_t x4434 = 211LLU;
	volatile int16_t x4435 = 1;
	uint32_t x4436 = UINT32_MAX;

	t97 = (((x4433%x4434)<<x4435)^x4436);

	if (t97 != 4294966991LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4437 = INT8_MAX;
	volatile int8_t x4438 = -1;
	int8_t x4439 = 4;

	t98 = (((x4437%x4438)<<x4439)^x4440);

	if (t98 != -4877573621416273LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4462 = INT8_MIN;

	t99 = (((x4461%x4462)<<x4463)^x4464);

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

