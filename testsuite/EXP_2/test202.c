#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 14U;
uint16_t x292 = 3U;
int8_t x326 = -1;
int8_t x482 = INT8_MIN;
int16_t x487 = INT16_MAX;
volatile int8_t x568 = 1;
static uint64_t x571 = 8631475125051150LLU;
volatile int8_t x592 = 22;
int32_t x603 = INT32_MIN;
volatile int8_t x604 = 6;
uint32_t x605 = 11U;
static int32_t x639 = INT32_MAX;
uint8_t x640 = 0U;
int16_t x671 = 1;
static volatile int32_t t16 = 44409;
static uint64_t t18 = 7580842933732343LLU;
volatile uint64_t t19 = 0LLU;
int64_t x1087 = -17144343303076586LL;
volatile int16_t x1088 = 10;
int64_t t23 = 457LL;
int32_t x1297 = INT32_MIN;
int64_t x1299 = -1LL;
int32_t x1301 = INT32_MAX;
int32_t x1402 = -1;
static int16_t x1459 = INT16_MAX;
static int8_t x1573 = INT8_MAX;
volatile int8_t x1575 = INT8_MIN;
uint64_t t32 = 2984LLU;
volatile int16_t x1725 = INT16_MIN;
uint64_t t33 = 3753866513262279LLU;
int32_t x1785 = -1;
uint64_t x1787 = 20LLU;
uint16_t x1855 = UINT16_MAX;
uint32_t t37 = 1U;
static int8_t x1973 = INT8_MIN;
uint32_t x1975 = 59727546U;
uint8_t x1976 = 0U;
volatile uint32_t t38 = 5035360U;
static int32_t x2071 = INT32_MIN;
uint32_t x2123 = 1133742099U;
int8_t x2363 = 0;
int32_t x2364 = 0;
volatile int32_t x2430 = INT32_MIN;
static volatile uint64_t t48 = 3804674LLU;
int8_t x2677 = 8;
uint8_t x2796 = 2U;
int16_t x2809 = 0;
volatile int32_t x2810 = -1;
int8_t x2950 = INT8_MAX;
uint16_t x2951 = UINT16_MAX;
int64_t t55 = -6293609LL;
int32_t x2961 = -1;
int8_t x2963 = -1;
int8_t x3053 = -1;
int64_t x3093 = INT64_MAX;
volatile uint8_t x3129 = 1U;
static int64_t t61 = 194623919270270LL;
static uint64_t x3187 = 298372286405711010LLU;
volatile int16_t x3189 = -1;
static volatile uint32_t x3190 = UINT32_MAX;
static volatile int16_t x3241 = -7;
volatile uint32_t t64 = 868639116U;
uint32_t x3314 = UINT32_MAX;
static int64_t t67 = 29287LL;
uint8_t x3625 = UINT8_MAX;
uint8_t x3631 = 1U;
int8_t x3632 = 10;
static int16_t x3689 = 0;
static int8_t x3691 = INT8_MIN;
static volatile int8_t x3738 = INT8_MAX;
uint16_t x3756 = 14U;
uint64_t x3838 = UINT64_MAX;
volatile uint64_t t73 = 91223LLU;
volatile int32_t x4001 = -1;
uint16_t x4003 = UINT16_MAX;
uint64_t x4075 = UINT64_MAX;
uint64_t x4082 = UINT64_MAX;
int64_t x4165 = 1LL;
int64_t t80 = 30680442741255LL;
int64_t x4205 = 213581811LL;
int32_t x4207 = INT32_MIN;
static volatile int8_t x4220 = 1;
uint64_t t83 = 23410008819300LLU;
static volatile int16_t x4397 = INT16_MIN;
static uint32_t x4453 = UINT32_MAX;
int8_t x4454 = -1;
int16_t x4456 = 2;
int32_t x4655 = -1;
int16_t x4693 = -1;
uint32_t x4695 = UINT32_MAX;
uint16_t x4697 = 404U;
uint16_t x4748 = 26U;
int32_t x5037 = -14;
int8_t x5038 = -1;
int64_t x5039 = 476LL;
int8_t x5075 = INT8_MAX;
uint16_t x5217 = UINT16_MAX;
uint16_t x5218 = 22095U;
volatile uint16_t x5355 = UINT16_MAX;
uint16_t x5359 = UINT16_MAX;


void f0(void) {
	uint32_t x37 = 191485024U;
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 0U;

	t0 = ((x37*(x38-x39))>>x40);

	if (t0 != 2843761568U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	int8_t x55 = -1;
	static volatile int16_t x56 = 0;
	uint32_t t1 = 58821U;

	t1 = ((x53*(x54-x55))>>x56);

	if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x245 = -9692;
	uint8_t x246 = 36U;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = 0;
	volatile uint32_t t2 = 375U;

	t2 = ((x245*(x246-x247))>>x248);

	if (t2 != 4294608692U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x289 = 951768968LL;
	static uint16_t x290 = 9924U;
	volatile int32_t x291 = -1;
	int64_t t3 = -14255990LL;

	t3 = ((x289*(x290-x291))>>x292);

	if (t3 != 1180788375925LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x325 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	static uint8_t x328 = 9U;
	volatile uint64_t t4 = 6LLU;

	t4 = ((x325*(x326-x327))>>x328);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = 1LL;
	int32_t x335 = INT32_MIN;
	static uint32_t x336 = 6U;
	volatile int64_t t5 = -28790506572642LL;

	t5 = ((x333*(x334-x335))>>x336);

	if (t5 != 8556380163LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x481 = -1;
	static volatile int8_t x483 = INT8_MIN;
	volatile int16_t x484 = 1;
	volatile int32_t t6 = -2626;

	t6 = ((x481*(x482-x483))>>x484);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x485 = -400534354;
	uint32_t x486 = 27674421U;
	uint8_t x488 = 19U;
	static uint32_t t7 = 4378928U;

	t7 = ((x485*(x486-x487))>>x488);

	if (t7 != 2905U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x565 = 47U;
	volatile int16_t x566 = INT16_MAX;
	uint8_t x567 = 1U;
	volatile int32_t t8 = 49829206;

	t8 = ((x565*(x566-x567))>>x568);

	if (t8 != 770001) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x569 = INT32_MIN;
	static int16_t x570 = INT16_MAX;
	int8_t x572 = 0;
	uint64_t t9 = 3609625488LLU;

	t9 = ((x569*(x570-x571))>>x572);

	if (t9 != 17607789795893837824LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x589 = 19;
	static uint32_t x590 = 43019127U;
	volatile int8_t x591 = INT8_MIN;
	uint32_t t10 = 14193506U;

	t10 = ((x589*(x590-x591))>>x592);

	if (t10 != 194U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x601 = INT16_MIN;
	uint32_t x602 = 193388U;
	volatile uint32_t t11 = 3450952U;

	t11 = ((x601*(x602-x603))>>x604);

	if (t11 != 35203072U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x606 = 94803883628LL;
	int32_t x607 = -1;
	uint8_t x608 = 20U;
	static int64_t t12 = -4466LL;

	t12 = ((x605*(x606-x607))>>x608);

	if (t12 != 994532LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x625 = 0U;
	int8_t x626 = INT8_MIN;
	static volatile int8_t x627 = INT8_MAX;
	volatile uint32_t x628 = 5U;
	static volatile int32_t t13 = -486590;

	t13 = ((x625*(x626-x627))>>x628);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x637 = 185U;
	uint8_t x638 = UINT8_MAX;
	uint32_t t14 = 112310U;

	t14 = ((x637*(x638-x639))>>x640);

	if (t14 != 2147531008U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x669 = UINT8_MAX;
	volatile int16_t x670 = 1;
	volatile uint64_t x672 = 6LLU;
	int32_t t15 = -244855;

	t15 = ((x669*(x670-x671))>>x672);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x673 = INT8_MAX;
	int8_t x674 = INT8_MAX;
	int8_t x675 = -1;
	int16_t x676 = 1;

	t16 = ((x673*(x674-x675))>>x676);

	if (t16 != 8128) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x745 = INT16_MAX;
	static volatile uint32_t x746 = 204U;
	uint8_t x747 = UINT8_MAX;
	int64_t x748 = 4LL;
	uint32_t t17 = 193U;

	t17 = ((x745*(x746-x747))>>x748);

	if (t17 != 268331011U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x777 = 1U;
	uint8_t x778 = 86U;
	uint64_t x779 = 21055133202LLU;
	volatile uint16_t x780 = 6U;

	t18 = ((x777*(x778-x779))>>x780);

	if (t18 != 288230375822725289LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x821 = 2611U;
	static int64_t x822 = 30308LL;
	uint64_t x823 = 367224LLU;
	static uint8_t x824 = 3U;

	t19 = ((x821*(x822-x823))>>x824);

	if (t19 != 2305843009103732992LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x969 = -1;
	int8_t x970 = -12;
	uint64_t x971 = 45274480LLU;
	int16_t x972 = 28;
	volatile uint64_t t20 = 11637LLU;

	t20 = ((x969*(x970-x971))>>x972);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1085 = 15U;
	int32_t x1086 = -26085865;
	int64_t t21 = 2LL;

	t21 = ((x1085*(x1086-x1087))>>x1088);

	if (t21 != 251137840971543LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1109 = -1;
	uint16_t x1110 = 32054U;
	static uint64_t x1111 = UINT64_MAX;
	int8_t x1112 = 0;
	volatile uint64_t t22 = 1151591864070LLU;

	t22 = ((x1109*(x1110-x1111))>>x1112);

	if (t22 != 18446744073709519561LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1117 = INT8_MIN;
	volatile int64_t x1118 = -1LL;
	int32_t x1119 = INT32_MAX;
	static volatile uint8_t x1120 = 5U;

	t23 = ((x1117*(x1118-x1119))>>x1120);

	if (t23 != 8589934592LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1237 = UINT64_MAX;
	volatile uint16_t x1238 = 710U;
	uint64_t x1239 = 48700887823650225LLU;
	static int16_t x1240 = 0;
	volatile uint64_t t24 = 62598616135LLU;

	t24 = ((x1237*(x1238-x1239))>>x1240);

	if (t24 != 48700887823649515LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1298 = -76173637LL;
	int8_t x1300 = 20;
	int64_t t25 = 14710899760716LL;

	t25 = ((x1297*(x1298-x1299))>>x1300);

	if (t25 != 156003606528LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1302 = 57U;
	uint64_t x1303 = UINT64_MAX;
	int8_t x1304 = 5;
	volatile uint64_t t26 = 3LLU;

	t26 = ((x1301*(x1302-x1303))>>x1304);

	if (t26 != 3892314110LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1397 = INT32_MIN;
	uint64_t x1398 = 2LLU;
	int8_t x1399 = INT8_MIN;
	volatile uint16_t x1400 = 1U;
	volatile uint64_t t27 = 6426155365LLU;

	t27 = ((x1397*(x1398-x1399))>>x1400);

	if (t27 != 9223371897268338688LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1401 = 28282U;
	int16_t x1403 = INT16_MIN;
	int64_t x1404 = 30LL;
	volatile uint32_t t28 = 50351494U;

	t28 = ((x1401*(x1402-x1403))>>x1404);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1457 = -1;
	static uint16_t x1458 = 44U;
	volatile int16_t x1460 = 1;
	volatile int32_t t29 = -773601472;

	t29 = ((x1457*(x1458-x1459))>>x1460);

	if (t29 != 16361) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1561 = -1;
	int16_t x1562 = INT16_MIN;
	int32_t x1563 = 21566060;
	int16_t x1564 = 0;
	int32_t t30 = 0;

	t30 = ((x1561*(x1562-x1563))>>x1564);

	if (t30 != 21598828) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1574 = 190153;
	int8_t x1576 = 1;
	int32_t t31 = -1925;

	t31 = ((x1573*(x1574-x1575))>>x1576);

	if (t31 != 12082843) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1657 = UINT64_MAX;
	int16_t x1658 = 6836;
	int32_t x1659 = 4341052;
	uint8_t x1660 = 0U;

	t32 = ((x1657*(x1658-x1659))>>x1660);

	if (t32 != 4334216LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1726 = INT64_MIN;
	uint64_t x1727 = UINT64_MAX;
	volatile uint8_t x1728 = 2U;

	t33 = ((x1725*(x1726-x1727))>>x1728);

	if (t33 != 4611686018427379712LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1729 = INT16_MAX;
	uint64_t x1730 = 894509409283LLU;
	int8_t x1731 = INT8_MIN;
	uint8_t x1732 = 0U;
	volatile uint64_t t34 = 5154797117LLU;

	t34 = ((x1729*(x1730-x1731))>>x1732);

	if (t34 != 29310389818170237LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1786 = INT32_MIN;
	volatile int8_t x1788 = 5;
	uint64_t t35 = 394467863630934LLU;

	t35 = ((x1785*(x1786-x1787))>>x1788);

	if (t35 != 67108864LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1853 = -1;
	int8_t x1854 = INT8_MIN;
	int8_t x1856 = 0;
	int32_t t36 = -143452;

	t36 = ((x1853*(x1854-x1855))>>x1856);

	if (t36 != 65663) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1949 = 867125904;
	volatile uint32_t x1950 = 374793832U;
	uint16_t x1951 = UINT16_MAX;
	uint32_t x1952 = 0U;

	t37 = ((x1949*(x1950-x1951))>>x1952);

	if (t37 != 3518166288U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1974 = 2U;

	t38 = ((x1973*(x1974-x1975))>>x1976);

	if (t38 != 3350158336U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2029 = 8742U;
	uint8_t x2030 = 4U;
	int64_t x2031 = -267375370497943LL;
	uint16_t x2032 = 1U;
	int64_t t39 = 1LL;

	t39 = ((x2029*(x2030-x2031))>>x2032);

	if (t39 != 1168697744446526337LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2069 = 292U;
	int8_t x2070 = INT8_MIN;
	uint8_t x2072 = 0U;
	uint32_t t40 = 79630U;

	t40 = ((x2069*(x2070-x2071))>>x2072);

	if (t40 != 4294929920U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2077 = -2397;
	static int16_t x2078 = -2;
	static uint8_t x2079 = 4U;
	static uint16_t x2080 = 2U;
	volatile int32_t t41 = -27;

	t41 = ((x2077*(x2078-x2079))>>x2080);

	if (t41 != 3595) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x2121 = UINT32_MAX;
	int16_t x2122 = 101;
	volatile uint8_t x2124 = 0U;
	volatile uint32_t t42 = 1993488U;

	t42 = ((x2121*(x2122-x2123))>>x2124);

	if (t42 != 1133741998U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2245 = -1;
	uint64_t x2246 = 2469LLU;
	int64_t x2247 = 6174566754499331LL;
	volatile uint8_t x2248 = 3U;
	volatile uint64_t t43 = 45029269238LLU;

	t43 = ((x2245*(x2246-x2247))>>x2248);

	if (t43 != 771820844312107LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2345 = INT32_MIN;
	int64_t x2346 = -1LL;
	static int32_t x2347 = 213;
	uint8_t x2348 = 6U;
	static volatile int64_t t44 = -544863214371060546LL;

	t44 = ((x2345*(x2346-x2347))>>x2348);

	if (t44 != 7180648448LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2361 = -1;
	uint64_t x2362 = 4394LLU;
	volatile uint64_t t45 = 264701LLU;

	t45 = ((x2361*(x2362-x2363))>>x2364);

	if (t45 != 18446744073709547222LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2429 = -1LL;
	static int16_t x2431 = -339;
	uint32_t x2432 = 13U;
	int64_t t46 = 115204786903397LL;

	t46 = ((x2429*(x2430-x2431))>>x2432);

	if (t46 != 262143LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2565 = 24;
	int8_t x2566 = -3;
	static int8_t x2567 = INT8_MIN;
	volatile uint8_t x2568 = 28U;
	volatile int32_t t47 = 271397;

	t47 = ((x2565*(x2566-x2567))>>x2568);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2605 = INT8_MAX;
	uint16_t x2606 = 22U;
	static uint64_t x2607 = UINT64_MAX;
	volatile int16_t x2608 = 3;

	t48 = ((x2605*(x2606-x2607))>>x2608);

	if (t48 != 365LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2645 = 1;
	int8_t x2646 = INT8_MAX;
	int64_t x2647 = -1001626182446486LL;
	int8_t x2648 = 1;
	volatile int64_t t49 = 239203208885038251LL;

	t49 = ((x2645*(x2646-x2647))>>x2648);

	if (t49 != 500813091223306LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2678 = UINT16_MAX;
	int8_t x2679 = -4;
	int16_t x2680 = 2;
	volatile int32_t t50 = 0;

	t50 = ((x2677*(x2678-x2679))>>x2680);

	if (t50 != 131078) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2761 = INT32_MIN;
	int16_t x2762 = INT16_MAX;
	int16_t x2763 = INT16_MAX;
	volatile uint8_t x2764 = 1U;
	static volatile int32_t t51 = -44802541;

	t51 = ((x2761*(x2762-x2763))>>x2764);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2793 = 1133063175LL;
	static volatile int64_t x2794 = -2LL;
	int32_t x2795 = INT32_MIN;
	volatile int64_t t52 = -4142758316301794752LL;

	t52 = ((x2793*(x2794-x2795))>>x2796);

	if (t52 != 608308659549334012LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2811 = INT8_MIN;
	static uint8_t x2812 = 11U;
	volatile int32_t t53 = 11;

	t53 = ((x2809*(x2810-x2811))>>x2812);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2873 = 1U;
	int32_t x2874 = 2;
	int32_t x2875 = -1;
	uint8_t x2876 = 2U;
	volatile int32_t t54 = 234148127;

	t54 = ((x2873*(x2874-x2875))>>x2876);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2949 = -1LL;
	uint8_t x2952 = 42U;

	t55 = ((x2949*(x2950-x2951))>>x2952);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2962 = -1;
	static int8_t x2964 = 0;
	int32_t t56 = 7;

	t56 = ((x2961*(x2962-x2963))>>x2964);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3054 = -1659;
	static volatile int32_t x3055 = -1;
	static int8_t x3056 = 20;
	static int32_t t57 = 37957;

	t57 = ((x3053*(x3054-x3055))>>x3056);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3061 = UINT64_MAX;
	static int16_t x3062 = 1;
	uint8_t x3063 = 13U;
	uint8_t x3064 = 0U;
	static volatile uint64_t t58 = 126487672909LLU;

	t58 = ((x3061*(x3062-x3063))>>x3064);

	if (t58 != 12LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x3089 = 14020U;
	int64_t x3090 = -1LL;
	int16_t x3091 = INT16_MIN;
	volatile uint32_t x3092 = 15U;
	static int64_t t59 = -747402092LL;

	t59 = ((x3089*(x3090-x3091))>>x3092);

	if (t59 != 14019LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3094 = UINT64_MAX;
	uint8_t x3095 = UINT8_MAX;
	volatile uint8_t x3096 = 14U;
	uint64_t t60 = 877959293LLU;

	t60 = ((x3093*(x3094-x3095))>>x3096);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3130 = INT8_MIN;
	int64_t x3131 = INT64_MIN;
	volatile int32_t x3132 = 16;

	t61 = ((x3129*(x3130-x3131))>>x3132);

	if (t61 != 140737488355327LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3185 = INT64_MAX;
	static volatile int16_t x3186 = -2166;
	volatile int8_t x3188 = 1;
	static uint64_t t62 = 16773936884LLU;

	t62 = ((x3185*(x3186-x3187))>>x3188);

	if (t62 != 149186143202856588LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3191 = 16174028959207756LLU;
	int16_t x3192 = 5;
	uint64_t t63 = 24266712910LLU;

	t63 = ((x3189*(x3190-x3191))>>x3192);

	if (t63 != 505438270757514LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3242 = UINT32_MAX;
	static int32_t x3243 = -1;
	uint16_t x3244 = 0U;

	t64 = ((x3241*(x3242-x3243))>>x3244);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3265 = 50U;
	int64_t x3266 = 2LL;
	volatile int32_t x3267 = INT32_MIN;
	uint32_t x3268 = 1U;
	static int64_t t65 = -1064569390LL;

	t65 = ((x3265*(x3266-x3267))>>x3268);

	if (t65 != 53687091250LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3313 = -1;
	uint64_t x3315 = UINT64_MAX;
	uint64_t x3316 = 4LLU;
	volatile uint64_t t66 = 155487LLU;

	t66 = ((x3313*(x3314-x3315))>>x3316);

	if (t66 != 1152921504338411520LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3557 = -1151506505LL;
	int8_t x3558 = INT8_MIN;
	static volatile int16_t x3559 = 1;
	uint16_t x3560 = 52U;

	t67 = ((x3557*(x3558-x3559))>>x3560);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3626 = 3U;
	uint64_t x3627 = 4169657735578925884LLU;
	uint8_t x3628 = 58U;
	static volatile uint64_t t68 = 3669849LLU;

	t68 = ((x3625*(x3626-x3627))>>x3628);

	if (t68 != 23LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3629 = 6;
	uint16_t x3630 = 86U;
	static volatile int32_t t69 = -1400;

	t69 = ((x3629*(x3630-x3631))>>x3632);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x3690 = 33U;
	int32_t x3692 = 1;
	volatile int32_t t70 = 25276369;

	t70 = ((x3689*(x3690-x3691))>>x3692);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x3737 = 50U;
	int8_t x3739 = 0;
	uint16_t x3740 = 23U;
	uint32_t t71 = 810U;

	t71 = ((x3737*(x3738-x3739))>>x3740);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3753 = INT16_MIN;
	int8_t x3754 = INT8_MIN;
	int8_t x3755 = 7;
	volatile int32_t t72 = 4120;

	t72 = ((x3753*(x3754-x3755))>>x3756);

	if (t72 != 270) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3837 = 3978U;
	static int8_t x3839 = INT8_MAX;
	uint8_t x3840 = 3U;

	t73 = ((x3837*(x3838-x3839))>>x3840);

	if (t73 != 2305843009213630304LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3969 = 249214101397452847LLU;
	uint16_t x3970 = UINT16_MAX;
	int32_t x3971 = -1;
	int16_t x3972 = 0;
	uint64_t t74 = 7475400909148924LLU;

	t74 = ((x3969*(x3970-x3971))>>x3972);

	if (t74 != 7126843950516600832LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4002 = INT8_MAX;
	uint8_t x4004 = 0U;
	static volatile int32_t t75 = -1;

	t75 = ((x4001*(x4002-x4003))>>x4004);

	if (t75 != 65408) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4073 = UINT64_MAX;
	int64_t x4074 = -3560907209172LL;
	int8_t x4076 = 0;
	volatile uint64_t t76 = 6779LLU;

	t76 = ((x4073*(x4074-x4075))>>x4076);

	if (t76 != 3560907209171LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x4081 = -60659;
	uint8_t x4083 = 49U;
	uint8_t x4084 = 6U;
	uint64_t t77 = 479313883067170LLU;

	t77 = ((x4081*(x4082-x4083))>>x4084);

	if (t77 != 47389LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x4093 = 4064U;
	volatile uint16_t x4094 = UINT16_MAX;
	int32_t x4095 = -1;
	uint32_t x4096 = 4U;
	uint32_t t78 = 1592U;

	t78 = ((x4093*(x4094-x4095))>>x4096);

	if (t78 != 16646144U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4166 = -14;
	uint64_t x4167 = 215044LLU;
	int8_t x4168 = 0;
	static uint64_t t79 = 32487360472915579LLU;

	t79 = ((x4165*(x4166-x4167))>>x4168);

	if (t79 != 18446744073709336558LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4181 = -1LL;
	static volatile int8_t x4182 = 5;
	uint16_t x4183 = 3274U;
	int64_t x4184 = 0LL;

	t80 = ((x4181*(x4182-x4183))>>x4184);

	if (t80 != 3269LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4206 = UINT32_MAX;
	int16_t x4208 = 1;
	int64_t t81 = -1712LL;

	t81 = ((x4205*(x4206-x4207))>>x4208);

	if (t81 != 229331723209572358LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x4217 = 115LL;
	int16_t x4218 = INT16_MAX;
	int8_t x4219 = 15;
	static int64_t t82 = -1681714LL;

	t82 = ((x4217*(x4218-x4219))>>x4220);

	if (t82 != 1883240LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4257 = 968644373441LLU;
	uint8_t x4258 = 60U;
	int64_t x4259 = -176LL;
	int64_t x4260 = 0LL;

	t83 = ((x4257*(x4258-x4259))>>x4260);

	if (t83 != 228600072132076LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4398 = UINT64_MAX;
	int32_t x4399 = 1;
	volatile int8_t x4400 = 0;
	volatile uint64_t t84 = 3745996LLU;

	t84 = ((x4397*(x4398-x4399))>>x4400);

	if (t84 != 65536LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x4455 = UINT64_MAX;
	volatile uint64_t t85 = 575511337399732004LLU;

	t85 = ((x4453*(x4454-x4455))>>x4456);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x4553 = -1;
	int32_t x4554 = -1;
	int64_t x4555 = 125035539LL;
	int8_t x4556 = 34;
	volatile int64_t t86 = 545908249LL;

	t86 = ((x4553*(x4554-x4555))>>x4556);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4653 = -1;
	static int64_t x4654 = INT64_MIN;
	int8_t x4656 = 1;
	volatile int64_t t87 = -5LL;

	t87 = ((x4653*(x4654-x4655))>>x4656);

	if (t87 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x4694 = INT8_MIN;
	volatile int8_t x4696 = 3;
	volatile uint32_t t88 = 127436633U;

	t88 = ((x4693*(x4694-x4695))>>x4696);

	if (t88 != 15U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4698 = INT8_MIN;
	int16_t x4699 = INT16_MIN;
	uint16_t x4700 = 2U;
	int32_t t89 = 624;

	t89 = ((x4697*(x4698-x4699))>>x4700);

	if (t89 != 3296640) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4745 = -1LL;
	uint64_t x4746 = 18248LLU;
	volatile int8_t x4747 = INT8_MAX;
	uint64_t t90 = 8073LLU;

	t90 = ((x4745*(x4746-x4747))>>x4748);

	if (t90 != 274877906943LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x4925 = UINT16_MAX;
	volatile uint8_t x4926 = UINT8_MAX;
	int8_t x4927 = -1;
	volatile uint8_t x4928 = 0U;
	volatile int32_t t91 = -1988256;

	t91 = ((x4925*(x4926-x4927))>>x4928);

	if (t91 != 16776960) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5040 = 0U;
	static volatile int64_t t92 = -3LL;

	t92 = ((x5037*(x5038-x5039))>>x5040);

	if (t92 != 6678LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x5073 = -1;
	static uint64_t x5074 = 253LLU;
	volatile uint8_t x5076 = 3U;
	uint64_t t93 = 578404994078763LLU;

	t93 = ((x5073*(x5074-x5075))>>x5076);

	if (t93 != 2305843009213693936LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5097 = 2658289U;
	int8_t x5098 = INT8_MIN;
	uint32_t x5099 = 8U;
	static uint8_t x5100 = 0U;
	volatile uint32_t t94 = 914U;

	t94 = ((x5097*(x5098-x5099))>>x5100);

	if (t94 != 3933439992U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5141 = 21U;
	volatile int32_t x5142 = 7;
	uint32_t x5143 = 1U;
	volatile uint16_t x5144 = 30U;
	static volatile uint32_t t95 = 231110U;

	t95 = ((x5141*(x5142-x5143))>>x5144);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5219 = 124807643LLU;
	int32_t x5220 = 3;
	uint64_t t96 = 9132469136607066689LLU;

	t96 = ((x5217*(x5218-x5219))>>x5220);

	if (t96 != 2305841986986082929LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5261 = 1803326036U;
	uint16_t x5262 = 2U;
	uint32_t x5263 = 68727U;
	uint8_t x5264 = 0U;
	uint32_t t97 = 785U;

	t97 = ((x5261*(x5262-x5263))>>x5264);

	if (t97 != 1994469276U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x5353 = UINT8_MAX;
	int64_t x5354 = 3249331019544671LL;
	uint8_t x5356 = 1U;
	int64_t t98 = -96222LL;

	t98 = ((x5353*(x5354-x5355))>>x5356);

	if (t98 != 414289704983589840LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5357 = INT8_MIN;
	static int8_t x5358 = INT8_MAX;
	uint8_t x5360 = 20U;
	static volatile int32_t t99 = 570125357;

	t99 = ((x5357*(x5358-x5359))>>x5360);

	if (t99 != 7) { NG(); } else { ; }
	
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

