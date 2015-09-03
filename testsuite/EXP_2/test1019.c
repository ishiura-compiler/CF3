#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 1658;
volatile int32_t x9 = INT32_MIN;
uint8_t x10 = 11U;
uint8_t x11 = 0U;
volatile int32_t x59 = 46;
volatile uint64_t t3 = 116940LLU;
int8_t x121 = 58;
static int32_t x123 = 0;
uint8_t x247 = 0U;
int64_t x320 = INT64_MIN;
int32_t x327 = 1;
static uint64_t t10 = 774277259836LLU;
int32_t x393 = -5728989;
volatile uint32_t x453 = UINT32_MAX;
uint16_t x456 = UINT16_MAX;
int8_t x548 = -1;
static uint64_t x562 = 1813926276LLU;
static uint16_t x563 = 6U;
uint64_t t14 = 113112LLU;
uint64_t x582 = UINT64_MAX;
static uint64_t t15 = 43454604445937821LLU;
uint8_t x635 = 53U;
volatile uint64_t t16 = 315LLU;
int64_t x681 = -1LL;
uint64_t x682 = 6LLU;
static int32_t x683 = 22;
static volatile uint32_t x713 = 6200U;
int16_t x715 = 0;
static int8_t x717 = INT8_MIN;
int32_t x803 = 1;
uint32_t x1030 = 10U;
volatile int64_t x1032 = -1LL;
int8_t x1103 = 1;
volatile uint8_t x1285 = 0U;
static int32_t t32 = -6;
uint16_t x1557 = 339U;
uint16_t x1559 = 13U;
uint8_t x1786 = 30U;
int64_t x1957 = INT64_MAX;
int32_t x1960 = -1;
int64_t x2022 = 1707675LL;
int64_t t40 = -1049874844LL;
int8_t x2233 = INT8_MAX;
volatile int64_t x2236 = INT64_MIN;
int16_t x2253 = 239;
int8_t x2279 = 5;
volatile uint8_t x2301 = UINT8_MAX;
volatile uint32_t x2334 = 27U;
static volatile uint32_t t47 = 1380112U;
uint8_t x2569 = 60U;
int8_t x2571 = 44;
static volatile uint32_t t49 = 1483027760U;
uint64_t x2634 = 16204510727625LLU;
uint16_t x2656 = 1U;
int32_t t51 = 16;
uint64_t x2904 = 121765743232112065LLU;
uint64_t t56 = 213581231956148LLU;
int64_t x3011 = 0LL;
uint16_t x3023 = 0U;
uint32_t x3024 = UINT32_MAX;
int64_t x3046 = INT64_MAX;
int16_t x3048 = INT16_MIN;
uint32_t x3107 = 11U;
static volatile int8_t x3117 = INT8_MIN;
static int64_t x3157 = -30480792LL;
int8_t x3159 = 0;
int64_t t62 = -3208843937174488002LL;
int32_t t63 = -125444440;
int64_t x3298 = 623LL;
uint16_t x3299 = 2U;
uint64_t x3314 = 663889949785LLU;
int32_t x3477 = -4865;
uint64_t x3497 = 562606848951548LLU;
uint64_t t68 = 1109LLU;
int32_t x3536 = INT32_MIN;
int32_t x3631 = 1;
int16_t x3652 = INT16_MIN;
static volatile int32_t x3670 = 12;
uint64_t x3717 = 35884727LLU;
static uint32_t x3779 = 11U;
uint16_t x3962 = 3U;
volatile uint32_t x4041 = 74096U;
int8_t x4125 = INT8_MIN;
int64_t t81 = -17691645702135518LL;
int32_t x4170 = 0;
int8_t x4172 = -1;
static int8_t x4206 = INT8_MAX;
static int32_t t83 = 2086;
int16_t x4209 = -4221;
volatile int64_t t84 = -4560846701109LL;
volatile int8_t x4394 = 4;
int16_t x4396 = 421;
uint8_t x4624 = UINT8_MAX;
uint64_t x4720 = 1808069LLU;
volatile uint64_t t89 = 1968127962107LLU;
static int16_t x5033 = 290;
int16_t x5036 = INT16_MIN;
uint64_t x5054 = 240615189277201LLU;
int16_t x5101 = 1283;
int8_t x5201 = INT8_MAX;
uint64_t x5218 = UINT64_MAX;
uint64_t t95 = 116697634188979277LLU;
uint32_t x5299 = 11U;
uint16_t x5300 = 31U;


void f0(void) {
	int8_t x2 = INT8_MAX;
	uint8_t x3 = 29U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 19770268;

	t0 = ((x1+(x2>>x3))%x4);

	if (t0 != 1658) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x12 = -1;
	static volatile int32_t t1 = 1666;

	t1 = ((x9+(x10>>x11))%x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = UINT64_MAX;
	volatile uint16_t x55 = 0U;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t2 = 10889LLU;

	t2 = ((x53+(x54>>x55))%x56);

	if (t2 != 254LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x57 = INT64_MAX;
	uint64_t x58 = 980798907245148LLU;
	static volatile uint64_t x60 = 1855247885182240866LLU;

	t3 = ((x57+(x58>>x59))%x60);

	if (t3 != 1802380496125812356LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x122 = 697;
	int16_t x124 = INT16_MIN;
	int32_t t4 = -1533;

	t4 = ((x121+(x122>>x123))%x124);

	if (t4 != 755) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = 486186LL;
	int8_t x139 = 17;
	uint64_t x140 = 23956436993260755LLU;
	volatile uint64_t t5 = 63696480495LLU;

	t5 = ((x137+(x138>>x139))%x140);

	if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x234 = 9189693456LLU;
	int16_t x235 = 5;
	static uint32_t x236 = UINT32_MAX;
	static uint64_t t6 = 613LLU;

	t6 = ((x233+(x234>>x235))%x236);

	if (t6 != 287178047LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x245 = 109068U;
	uint16_t x246 = 19841U;
	volatile uint8_t x248 = UINT8_MAX;
	volatile uint32_t t7 = 7468597U;

	t7 = ((x245+(x246>>x247))%x248);

	if (t7 != 134U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x317 = UINT8_MAX;
	static int8_t x318 = INT8_MAX;
	uint8_t x319 = 0U;
	volatile int64_t t8 = 71504594293LL;

	t8 = ((x317+(x318>>x319))%x320);

	if (t8 != 382LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = 244U;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t9 = 11677642;

	t9 = ((x325+(x326>>x327))%x328);

	if (t9 != -32646) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x345 = -7;
	volatile uint64_t x346 = UINT64_MAX;
	int8_t x347 = 0;
	volatile uint64_t x348 = 15914LLU;

	t10 = ((x345+(x346>>x347))%x348);

	if (t10 != 14010LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x394 = UINT16_MAX;
	uint16_t x395 = 6U;
	volatile int32_t x396 = -1;
	int32_t t11 = 246099236;

	t11 = ((x393+(x394>>x395))%x396);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x454 = 792571LLU;
	uint8_t x455 = 0U;
	uint64_t t12 = 205378416526730LLU;

	t12 = ((x453+(x454>>x455))%x456);

	if (t12 != 6151LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x545 = -1LL;
	int64_t x546 = 712513042978831226LL;
	uint8_t x547 = 31U;
	int64_t t13 = -286818770232960960LL;

	t13 = ((x545+(x546>>x547))%x548);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x561 = 3292472;
	volatile int64_t x564 = INT64_MIN;

	t14 = ((x561+(x562>>x563))%x564);

	if (t14 != 31635070LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x581 = 598;
	static int8_t x583 = 2;
	int16_t x584 = -1;

	t15 = ((x581+(x582>>x583))%x584);

	if (t15 != 4611686018427388501LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x633 = INT8_MIN;
	uint64_t x634 = 5077346097940LLU;
	int64_t x636 = INT64_MIN;

	t16 = ((x633+(x634>>x635))%x636);

	if (t16 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x637 = 0;
	uint32_t x638 = UINT32_MAX;
	volatile int16_t x639 = 1;
	volatile uint64_t x640 = UINT64_MAX;
	volatile uint64_t t17 = 8575LLU;

	t17 = ((x637+(x638>>x639))%x640);

	if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x661 = -290LL;
	volatile uint16_t x662 = 44U;
	uint8_t x663 = 0U;
	uint16_t x664 = UINT16_MAX;
	int64_t t18 = -67763842247316298LL;

	t18 = ((x661+(x662>>x663))%x664);

	if (t18 != -246LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x684 = INT64_MIN;
	volatile uint64_t t19 = 75486348LLU;

	t19 = ((x681+(x682>>x683))%x684);

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x714 = UINT64_MAX;
	uint16_t x716 = 6U;
	static volatile uint64_t t20 = 301320593212LLU;

	t20 = ((x713+(x714>>x715))%x716);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x718 = 43113134U;
	uint8_t x719 = 0U;
	volatile int32_t x720 = -4533858;
	volatile uint32_t t21 = 27428616U;

	t21 = ((x717+(x718>>x719))%x720);

	if (t21 != 43113006U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x749 = -2016LL;
	uint16_t x750 = 12U;
	uint8_t x751 = 13U;
	int64_t x752 = INT64_MAX;
	static volatile int64_t t22 = 4LL;

	t22 = ((x749+(x750>>x751))%x752);

	if (t22 != -2016LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x773 = -1;
	uint64_t x774 = 1406975LLU;
	uint8_t x775 = 1U;
	int16_t x776 = -79;
	static volatile uint64_t t23 = 255624834161250LLU;

	t23 = ((x773+(x774>>x775))%x776);

	if (t23 != 703486LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x781 = -29;
	volatile int64_t x782 = 20349946617LL;
	int64_t x783 = 35LL;
	int32_t x784 = 43762323;
	volatile int64_t t24 = 194681901660LL;

	t24 = ((x781+(x782>>x783))%x784);

	if (t24 != -29LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x801 = INT64_MIN;
	uint32_t x802 = UINT32_MAX;
	int64_t x804 = INT64_MAX;
	volatile int64_t t25 = -507883942062923459LL;

	t25 = ((x801+(x802>>x803))%x804);

	if (t25 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1029 = 276U;
	int8_t x1031 = 2;
	int64_t t26 = 419289173105960911LL;

	t26 = ((x1029+(x1030>>x1031))%x1032);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1101 = INT8_MIN;
	int64_t x1102 = 13761LL;
	int64_t x1104 = -1257984728627184LL;
	int64_t t27 = -14046529LL;

	t27 = ((x1101+(x1102>>x1103))%x1104);

	if (t27 != 6752LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1141 = INT8_MIN;
	volatile uint64_t x1142 = 357119734051LLU;
	int8_t x1143 = 1;
	uint32_t x1144 = 397U;
	uint64_t t28 = 5799LLU;

	t28 = ((x1141+(x1142>>x1143))%x1144);

	if (t28 != 189LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1249 = INT8_MAX;
	volatile uint16_t x1250 = 6378U;
	uint8_t x1251 = 3U;
	int64_t x1252 = -1LL;
	volatile int64_t t29 = 6210439867LL;

	t29 = ((x1249+(x1250>>x1251))%x1252);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1286 = 122U;
	uint8_t x1287 = 18U;
	static int8_t x1288 = -1;
	static volatile uint32_t t30 = 2U;

	t30 = ((x1285+(x1286>>x1287))%x1288);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1297 = INT8_MAX;
	uint32_t x1298 = 219999U;
	int64_t x1299 = 2LL;
	int32_t x1300 = -1;
	uint32_t t31 = 353U;

	t31 = ((x1297+(x1298>>x1299))%x1300);

	if (t31 != 55126U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1441 = 3U;
	static int32_t x1442 = INT32_MAX;
	static uint16_t x1443 = 12U;
	static int16_t x1444 = INT16_MIN;

	t32 = ((x1441+(x1442>>x1443))%x1444);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1558 = 166444846088875LLU;
	static int64_t x1560 = INT64_MAX;
	volatile uint64_t t33 = 1845067661289LLU;

	t33 = ((x1557+(x1558>>x1559))%x1560);

	if (t33 != 20317974715LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1613 = INT64_MIN;
	static int64_t x1614 = 1LL;
	uint16_t x1615 = 42U;
	int8_t x1616 = -1;
	static volatile int64_t t34 = 1LL;

	t34 = ((x1613+(x1614>>x1615))%x1616);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1657 = INT16_MAX;
	uint64_t x1658 = 0LLU;
	volatile uint8_t x1659 = 6U;
	int32_t x1660 = INT32_MIN;
	volatile uint64_t t35 = 27LLU;

	t35 = ((x1657+(x1658>>x1659))%x1660);

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1773 = 19U;
	int64_t x1774 = INT64_MAX;
	uint8_t x1775 = 16U;
	int64_t x1776 = INT64_MIN;
	static int64_t t36 = -86598971955493045LL;

	t36 = ((x1773+(x1774>>x1775))%x1776);

	if (t36 != 140737488355346LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1785 = -29;
	uint16_t x1787 = 14U;
	uint8_t x1788 = UINT8_MAX;
	static volatile int32_t t37 = -3095;

	t37 = ((x1785+(x1786>>x1787))%x1788);

	if (t37 != -29) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1958 = 778774LL;
	uint8_t x1959 = 50U;
	volatile int64_t t38 = -52422545442098672LL;

	t38 = ((x1957+(x1958>>x1959))%x1960);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2021 = -1;
	volatile uint16_t x2023 = 8U;
	static int64_t x2024 = INT64_MIN;
	volatile int64_t t39 = 26454277833916799LL;

	t39 = ((x2021+(x2022>>x2023))%x2024);

	if (t39 != 6669LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2149 = 22U;
	int16_t x2150 = 1069;
	volatile uint8_t x2151 = 19U;
	int64_t x2152 = INT64_MIN;

	t40 = ((x2149+(x2150>>x2151))%x2152);

	if (t40 != 22LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2193 = INT64_MIN;
	int8_t x2194 = 30;
	volatile uint8_t x2195 = 4U;
	int32_t x2196 = -112545158;
	static int64_t t41 = 1161288LL;

	t41 = ((x2193+(x2194>>x2195))%x2196);

	if (t41 != -38326537LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2234 = 9706236440LLU;
	volatile int8_t x2235 = 6;
	volatile uint64_t t42 = 115LLU;

	t42 = ((x2233+(x2234>>x2235))%x2236);

	if (t42 != 151660071LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2254 = INT8_MAX;
	volatile int8_t x2255 = 0;
	int16_t x2256 = -648;
	volatile int32_t t43 = -32212038;

	t43 = ((x2253+(x2254>>x2255))%x2256);

	if (t43 != 366) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2277 = 1264U;
	volatile uint64_t x2278 = UINT64_MAX;
	volatile uint16_t x2280 = 97U;
	volatile uint64_t t44 = 168322885LLU;

	t44 = ((x2277+(x2278>>x2279))%x2280);

	if (t44 != 13LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2302 = 75LL;
	uint32_t x2303 = 2U;
	volatile int8_t x2304 = INT8_MAX;
	int64_t t45 = -7LL;

	t45 = ((x2301+(x2302>>x2303))%x2304);

	if (t45 != 19LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2333 = 13434;
	uint16_t x2335 = 0U;
	volatile int32_t x2336 = INT32_MIN;
	uint32_t t46 = 0U;

	t46 = ((x2333+(x2334>>x2335))%x2336);

	if (t46 != 13461U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x2401 = UINT32_MAX;
	volatile int16_t x2402 = 1734;
	int8_t x2403 = 27;
	static int16_t x2404 = -1;

	t47 = ((x2401+(x2402>>x2403))%x2404);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2570 = 24376940LLU;
	volatile uint16_t x2572 = 784U;
	volatile uint64_t t48 = 281209413674200LLU;

	t48 = ((x2569+(x2570>>x2571))%x2572);

	if (t48 != 60LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2601 = INT16_MIN;
	uint8_t x2602 = 57U;
	volatile int16_t x2603 = 1;
	uint32_t x2604 = UINT32_MAX;

	t49 = ((x2601+(x2602>>x2603))%x2604);

	if (t49 != 4294934556U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2633 = INT64_MIN;
	volatile int16_t x2635 = 1;
	static int32_t x2636 = INT32_MAX;
	static uint64_t t50 = 191651253015210148LLU;

	t50 = ((x2633+(x2634>>x2635))%x2636);

	if (t50 != 1947047330LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2653 = INT16_MAX;
	volatile uint16_t x2654 = 1U;
	volatile uint64_t x2655 = 20LLU;

	t51 = ((x2653+(x2654>>x2655))%x2656);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2669 = 10015324U;
	static uint64_t x2670 = 1055151255988LLU;
	volatile int8_t x2671 = 0;
	int32_t x2672 = INT32_MAX;
	volatile uint64_t t52 = 33218975032324209LLU;

	t52 = ((x2669+(x2670>>x2671))%x2672);

	if (t52 != 746800635LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2737 = UINT8_MAX;
	uint32_t x2738 = 6547235U;
	uint16_t x2739 = 0U;
	volatile int16_t x2740 = -1;
	uint32_t t53 = 16U;

	t53 = ((x2737+(x2738>>x2739))%x2740);

	if (t53 != 6547490U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2805 = 7U;
	volatile uint64_t x2806 = 16331354492166LLU;
	uint8_t x2807 = 15U;
	static volatile int32_t x2808 = 384603;
	uint64_t t54 = 12558659448270943LLU;

	t54 = ((x2805+(x2806>>x2807))%x2808);

	if (t54 != 332508LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2821 = INT8_MIN;
	int8_t x2822 = INT8_MAX;
	uint8_t x2823 = 1U;
	volatile int16_t x2824 = -3500;
	static volatile int32_t t55 = -99;

	t55 = ((x2821+(x2822>>x2823))%x2824);

	if (t55 != -65) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2901 = 31U;
	int8_t x2902 = 48;
	uint64_t x2903 = 11LLU;

	t56 = ((x2901+(x2902>>x2903))%x2904);

	if (t56 != 31LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3009 = UINT32_MAX;
	uint64_t x3010 = 39836LLU;
	int64_t x3012 = INT64_MIN;
	uint64_t t57 = 11860LLU;

	t57 = ((x3009+(x3010>>x3011))%x3012);

	if (t57 != 4295007131LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3021 = 15189247U;
	uint32_t x3022 = 703754U;
	volatile uint32_t t58 = 42040166U;

	t58 = ((x3021+(x3022>>x3023))%x3024);

	if (t58 != 15893001U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3045 = 4214;
	int8_t x3047 = 1;
	static int64_t t59 = -41LL;

	t59 = ((x3045+(x3046>>x3047))%x3048);

	if (t59 != 4213LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x3105 = -126340341144388LL;
	uint64_t x3106 = UINT64_MAX;
	static int32_t x3108 = INT32_MIN;
	uint64_t t60 = 476220997592435960LLU;

	t60 = ((x3105+(x3106>>x3107))%x3108);

	if (t60 != 8880858913596603LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3118 = UINT64_MAX;
	static volatile int8_t x3119 = 0;
	int64_t x3120 = -563127486792791623LL;
	static volatile uint64_t t61 = 553232078528315LLU;

	t61 = ((x3117+(x3118>>x3119))%x3120);

	if (t61 != 563127486792791494LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3158 = INT64_MAX;
	uint16_t x3160 = 44U;

	t62 = ((x3157+(x3158>>x3159))%x3160);

	if (t62 != 39LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3273 = -149;
	static uint8_t x3274 = UINT8_MAX;
	volatile int8_t x3275 = 6;
	int16_t x3276 = INT16_MIN;

	t63 = ((x3273+(x3274>>x3275))%x3276);

	if (t63 != -146) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3297 = UINT8_MAX;
	int16_t x3300 = INT16_MIN;
	volatile int64_t t64 = -39797709676644LL;

	t64 = ((x3297+(x3298>>x3299))%x3300);

	if (t64 != 410LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3313 = UINT32_MAX;
	static uint16_t x3315 = 2U;
	volatile int8_t x3316 = -1;
	uint64_t t65 = 582727LLU;

	t65 = ((x3313+(x3314>>x3315))%x3316);

	if (t65 != 170267454741LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3433 = 0U;
	volatile uint16_t x3434 = 10U;
	static int8_t x3435 = 2;
	uint16_t x3436 = UINT16_MAX;
	int32_t t66 = 171905;

	t66 = ((x3433+(x3434>>x3435))%x3436);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3478 = INT16_MAX;
	static int8_t x3479 = 1;
	int8_t x3480 = INT8_MAX;
	volatile int32_t t67 = 700173832;

	t67 = ((x3477+(x3478>>x3479))%x3480);

	if (t67 != 88) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3498 = 62U;
	static uint8_t x3499 = 13U;
	int8_t x3500 = INT8_MIN;

	t68 = ((x3497+(x3498>>x3499))%x3500);

	if (t68 != 562606848951548LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3533 = -1;
	uint16_t x3534 = 26285U;
	static int16_t x3535 = 0;
	volatile int32_t t69 = 164;

	t69 = ((x3533+(x3534>>x3535))%x3536);

	if (t69 != 26284) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x3537 = 382138LLU;
	int32_t x3538 = INT32_MAX;
	int16_t x3539 = 13;
	uint8_t x3540 = UINT8_MAX;
	uint64_t t70 = 57LLU;

	t70 = ((x3537+(x3538>>x3539))%x3540);

	if (t70 != 151LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3605 = 1LL;
	uint32_t x3606 = 65U;
	int8_t x3607 = 1;
	volatile int32_t x3608 = -1;
	static volatile int64_t t71 = -89LL;

	t71 = ((x3605+(x3606>>x3607))%x3608);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3629 = 101124LLU;
	int16_t x3630 = 2727;
	volatile int8_t x3632 = INT8_MAX;
	uint64_t t72 = 3458884LLU;

	t72 = ((x3629+(x3630>>x3631))%x3632);

	if (t72 != 125LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3649 = -1LL;
	uint8_t x3650 = UINT8_MAX;
	int16_t x3651 = 3;
	int64_t t73 = -95757LL;

	t73 = ((x3649+(x3650>>x3651))%x3652);

	if (t73 != 30LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x3669 = UINT8_MAX;
	int8_t x3671 = 5;
	int64_t x3672 = -1LL;
	volatile int64_t t74 = -26190566611LL;

	t74 = ((x3669+(x3670>>x3671))%x3672);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3718 = 1;
	uint8_t x3719 = 4U;
	uint16_t x3720 = 850U;
	uint64_t t75 = 846732LLU;

	t75 = ((x3717+(x3718>>x3719))%x3720);

	if (t75 != 277LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3777 = 2U;
	uint16_t x3778 = 0U;
	int32_t x3780 = INT32_MAX;
	static volatile int32_t t76 = 12202521;

	t76 = ((x3777+(x3778>>x3779))%x3780);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3789 = INT16_MIN;
	uint8_t x3790 = UINT8_MAX;
	volatile uint8_t x3791 = 7U;
	uint8_t x3792 = 1U;
	volatile int32_t t77 = -237397;

	t77 = ((x3789+(x3790>>x3791))%x3792);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3961 = 78U;
	int64_t x3963 = 1LL;
	uint32_t x3964 = 31546U;
	volatile uint32_t t78 = 15009U;

	t78 = ((x3961+(x3962>>x3963))%x3964);

	if (t78 != 79U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4042 = UINT32_MAX;
	uint16_t x4043 = 7U;
	int64_t x4044 = -1LL;
	volatile int64_t t79 = -463782269071181005LL;

	t79 = ((x4041+(x4042>>x4043))%x4044);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x4126 = INT64_MAX;
	int32_t x4127 = 1;
	int8_t x4128 = INT8_MAX;
	int64_t t80 = 5LL;

	t80 = ((x4125+(x4126>>x4127))%x4128);

	if (t80 != 62LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4141 = INT32_MIN;
	static uint32_t x4142 = 3414U;
	uint64_t x4143 = 3LLU;
	int64_t x4144 = INT64_MAX;

	t81 = ((x4141+(x4142>>x4143))%x4144);

	if (t81 != 2147484074LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x4169 = INT16_MIN;
	static int32_t x4171 = 11;
	int32_t t82 = 47439;

	t82 = ((x4169+(x4170>>x4171))%x4172);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4205 = 2376;
	int8_t x4207 = 0;
	uint8_t x4208 = UINT8_MAX;

	t83 = ((x4205+(x4206>>x4207))%x4208);

	if (t83 != 208) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4210 = 266LL;
	int32_t x4211 = 20;
	uint8_t x4212 = 3U;

	t84 = ((x4209+(x4210>>x4211))%x4212);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4393 = 1715U;
	uint8_t x4395 = 1U;
	uint32_t t85 = 495U;

	t85 = ((x4393+(x4394>>x4395))%x4396);

	if (t85 != 33U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4465 = -70;
	int32_t x4466 = INT32_MAX;
	static uint8_t x4467 = 11U;
	uint8_t x4468 = UINT8_MAX;
	volatile int32_t t86 = -3;

	t86 = ((x4465+(x4466>>x4467))%x4468);

	if (t86 != 200) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4541 = -1021708744LL;
	int16_t x4542 = INT16_MAX;
	volatile int16_t x4543 = 0;
	int8_t x4544 = 4;
	volatile int64_t t87 = 1168978LL;

	t87 = ((x4541+(x4542>>x4543))%x4544);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4621 = UINT8_MAX;
	uint8_t x4622 = 17U;
	uint16_t x4623 = 0U;
	volatile int32_t t88 = -315603;

	t88 = ((x4621+(x4622>>x4623))%x4624);

	if (t88 != 17) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4717 = 101U;
	uint16_t x4718 = UINT16_MAX;
	static uint16_t x4719 = 3U;

	t89 = ((x4717+(x4718>>x4719))%x4720);

	if (t89 != 8292LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4861 = INT16_MAX;
	uint64_t x4862 = UINT64_MAX;
	uint16_t x4863 = 24U;
	volatile int64_t x4864 = INT64_MIN;
	volatile uint64_t t90 = 57LLU;

	t90 = ((x4861+(x4862>>x4863))%x4864);

	if (t90 != 1099511660542LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5034 = UINT32_MAX;
	uint8_t x5035 = 4U;
	volatile uint32_t t91 = 99222U;

	t91 = ((x5033+(x5034>>x5035))%x5036);

	if (t91 != 268435745U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5053 = 1U;
	volatile uint16_t x5055 = 49U;
	uint16_t x5056 = UINT16_MAX;
	uint64_t t92 = 13681LLU;

	t92 = ((x5053+(x5054>>x5055))%x5056);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5102 = 516725251776757292LLU;
	static volatile int8_t x5103 = 0;
	int8_t x5104 = -1;
	volatile uint64_t t93 = 84737147712LLU;

	t93 = ((x5101+(x5102>>x5103))%x5104);

	if (t93 != 516725251776758575LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5202 = 35;
	static uint64_t x5203 = 6LLU;
	int64_t x5204 = -1LL;
	static int64_t t94 = -525LL;

	t94 = ((x5201+(x5202>>x5203))%x5204);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5217 = 2;
	static uint16_t x5219 = 1U;
	int16_t x5220 = INT16_MIN;

	t95 = ((x5217+(x5218>>x5219))%x5220);

	if (t95 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5229 = INT16_MAX;
	int8_t x5230 = INT8_MAX;
	uint8_t x5231 = 5U;
	int32_t x5232 = -14777825;
	volatile int32_t t96 = -273420581;

	t96 = ((x5229+(x5230>>x5231))%x5232);

	if (t96 != 32770) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5245 = INT8_MIN;
	uint32_t x5246 = 11085992U;
	volatile uint8_t x5247 = 1U;
	static int32_t x5248 = 351008;
	uint32_t t97 = 925170U;

	t97 = ((x5245+(x5246>>x5247))%x5248);

	if (t97 != 277748U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x5261 = UINT32_MAX;
	uint32_t x5262 = 123186131U;
	int8_t x5263 = 0;
	static uint32_t x5264 = UINT32_MAX;
	static volatile uint32_t t98 = 1U;

	t98 = ((x5261+(x5262>>x5263))%x5264);

	if (t98 != 123186130U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5297 = 1757647542164179086LL;
	int8_t x5298 = 27;
	volatile int64_t t99 = -13845222418430435LL;

	t99 = ((x5297+(x5298>>x5299))%x5300);

	if (t99 != 14LL) { NG(); } else { ; }
	
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

