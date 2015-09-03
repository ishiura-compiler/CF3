#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x29 = -1090LL;
int8_t x31 = 0;
int16_t x52 = 2463;
int16_t x225 = INT16_MIN;
uint16_t x226 = 3451U;
uint8_t x349 = UINT8_MAX;
static uint8_t x379 = 1U;
int64_t x452 = -1LL;
int32_t x584 = INT32_MIN;
int8_t x663 = 0;
static int64_t x664 = 45999580971416LL;
volatile int16_t x691 = 14;
int32_t x781 = INT32_MIN;
int16_t x784 = 5;
int32_t x1117 = INT32_MIN;
volatile uint32_t x1118 = UINT32_MAX;
int8_t x1119 = 11;
static int8_t x1120 = INT8_MAX;
uint32_t t18 = 144313U;
int16_t x1148 = INT16_MIN;
volatile uint64_t t19 = 31446976467122531LLU;
int32_t x1304 = -1;
static uint8_t x1319 = 3U;
uint64_t x1366 = 24052282572LLU;
uint32_t x1368 = UINT32_MAX;
int32_t x1472 = 7857810;
volatile int32_t x1501 = 161;
volatile int8_t x1504 = 0;
int64_t x1661 = INT64_MIN;
int32_t x1749 = -1;
volatile uint16_t x1794 = 22U;
static uint64_t x2048 = 39610465LLU;
int16_t x2193 = INT16_MIN;
uint8_t x2194 = 5U;
volatile int32_t t36 = -485;
volatile uint64_t x2233 = 24068634LLU;
uint8_t x2243 = 16U;
volatile int64_t x2453 = INT64_MAX;
volatile int64_t t40 = -1699828759LL;
volatile uint32_t x2741 = UINT32_MAX;
int16_t x2743 = 1;
volatile uint32_t t43 = 1239506U;
uint64_t x2785 = 190LLU;
uint64_t x2833 = 326921475678420LLU;
int64_t x2836 = INT64_MIN;
uint32_t x2906 = 100447U;
uint8_t x2909 = 62U;
int8_t x2910 = INT8_MAX;
volatile uint16_t x2933 = UINT16_MAX;
uint16_t x2934 = 47U;
int16_t x3064 = -164;
uint64_t t50 = 5733689037593759LLU;
volatile int32_t t51 = 677118696;
uint16_t x3364 = UINT16_MAX;
uint32_t x3453 = 20133989U;
int16_t x3746 = 0;
volatile int32_t t56 = -1;
volatile int64_t t57 = 62348836559LL;
static int32_t x3877 = -1;
int8_t x3938 = 14;
volatile int32_t t59 = 62;
static uint8_t x3947 = 3U;
uint8_t x4201 = UINT8_MAX;
int16_t x4203 = 15;
volatile uint64_t t61 = 331097120LLU;
volatile uint64_t t62 = 7LLU;
uint64_t x4417 = 126LLU;
volatile uint32_t t65 = 11899557U;
uint8_t x4466 = 1U;
uint64_t x4478 = UINT64_MAX;
volatile int32_t t68 = 1;
volatile int64_t x4570 = 571730414632426LL;
int8_t x4572 = 3;
volatile int64_t t69 = 0LL;
uint16_t x4593 = 2U;
volatile uint16_t x4648 = UINT16_MAX;
volatile uint32_t t71 = 60U;
static int16_t x4722 = INT16_MAX;
uint32_t x4723 = 7U;
uint16_t x4815 = 3U;
volatile int16_t x4816 = INT16_MIN;
volatile int64_t t73 = -61371533817197LL;
uint8_t x4975 = 1U;
uint8_t x5243 = 3U;
static int8_t x5482 = 50;
uint16_t x5549 = UINT16_MAX;
int64_t t80 = 1434762964LL;
static int64_t x5613 = -1LL;
uint8_t x5615 = 50U;
uint64_t t81 = 3825559362947793LLU;
uint32_t x5630 = 2U;
int8_t x5654 = 2;
uint32_t t83 = 908650U;
volatile int64_t t84 = 2449948417LL;
uint64_t x5714 = 243016824255334582LLU;
volatile uint64_t t85 = 116251LLU;
volatile int8_t x5807 = 0;
volatile int32_t x5808 = -14;
uint32_t t87 = 20799966U;
uint8_t x5895 = 0U;
uint64_t x5930 = 179717716609752LLU;
int8_t x6161 = -60;
volatile uint32_t t91 = 70U;
int16_t x6217 = INT16_MIN;
int16_t x6331 = 0;
int8_t x6503 = 1;


void f0(void) {
	int32_t x30 = INT32_MAX;
	int8_t x32 = -1;
	int64_t t0 = -4622837865452LL;

	t0 = (x29-((x30<<x31)+x32));

	if (t0 != -2147484736LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = INT8_MAX;
	uint64_t x50 = UINT64_MAX;
	uint8_t x51 = 1U;
	static volatile uint64_t t1 = 720944342318LLU;

	t1 = (x49-((x50<<x51)+x52));

	if (t1 != 18446744073709549282LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x113 = INT32_MIN;
	uint32_t x114 = 2U;
	static int16_t x115 = 7;
	volatile int16_t x116 = INT16_MIN;
	uint32_t t2 = 423U;

	t2 = (x113-((x114<<x115)+x116));

	if (t2 != 2147516160U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x227 = 0;
	int32_t x228 = 3;
	int32_t t3 = -12296905;

	t3 = (x225-((x226<<x227)+x228));

	if (t3 != -36222) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x245 = 551U;
	volatile uint32_t x246 = 2885387U;
	static int8_t x247 = 3;
	volatile int16_t x248 = INT16_MIN;
	uint32_t t4 = 3U;

	t4 = (x245-((x246<<x247)+x248));

	if (t4 != 4271917519U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x269 = 346640914281LLU;
	uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 5U;
	int8_t x272 = INT8_MIN;
	uint64_t t5 = 288LLU;

	t5 = (x269-((x270<<x271)+x272));

	if (t5 != 346640906249LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x350 = 126928621239438LLU;
	uint8_t x351 = 3U;
	volatile int64_t x352 = -1LL;
	volatile uint64_t t6 = 209034360004LLU;

	t6 = (x349-((x350<<x351)+x352));

	if (t6 != 18445728644739636368LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x377 = 1849LLU;
	int8_t x378 = INT8_MAX;
	int8_t x380 = 1;
	uint64_t t7 = 281135981LLU;

	t7 = (x377-((x378<<x379)+x380));

	if (t7 != 1594LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x449 = 30075460;
	int32_t x450 = 0;
	volatile uint32_t x451 = 1U;
	static volatile int64_t t8 = -2246LL;

	t8 = (x449-((x450<<x451)+x452));

	if (t8 != 30075461LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x581 = -1;
	uint8_t x582 = 63U;
	uint16_t x583 = 1U;
	volatile int32_t t9 = 1893;

	t9 = (x581-((x582<<x583)+x584));

	if (t9 != 2147483521) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x657 = UINT8_MAX;
	uint32_t x658 = 478304881U;
	static uint32_t x659 = 24U;
	int64_t x660 = -1LL;
	int64_t t10 = -2492698111184038LL;

	t10 = (x657-((x658<<x659)+x660));

	if (t10 != -1895825152LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x661 = -1;
	uint64_t x662 = 3173081175221491LLU;
	volatile uint64_t t11 = 34489045200241LLU;

	t11 = (x661-((x662<<x663)+x664));

	if (t11 != 18443524992953358708LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x689 = INT64_MAX;
	static volatile uint16_t x690 = UINT16_MAX;
	uint8_t x692 = UINT8_MAX;
	int64_t t12 = -5117264LL;

	t12 = (x689-((x690<<x691)+x692));

	if (t12 != 9223372035781050112LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x717 = 4161906U;
	uint64_t x718 = UINT64_MAX;
	static uint8_t x719 = 12U;
	static int64_t x720 = INT64_MAX;
	uint64_t t13 = 17997400LLU;

	t13 = (x717-((x718<<x719)+x720));

	if (t13 != 9223372036858941811LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x782 = 0LLU;
	int8_t x783 = 5;
	uint64_t t14 = 1355200LLU;

	t14 = (x781-((x782<<x783)+x784));

	if (t14 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x961 = UINT32_MAX;
	int32_t x962 = 7;
	uint64_t x963 = 0LLU;
	volatile uint64_t x964 = 57666338827LLU;
	static volatile uint64_t t15 = 1072071LLU;

	t15 = (x961-((x962<<x963)+x964));

	if (t15 != 18446744020338180077LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1001 = UINT64_MAX;
	volatile uint16_t x1002 = 19U;
	uint8_t x1003 = 1U;
	volatile int8_t x1004 = 16;
	static volatile uint64_t t16 = 509146930204572LLU;

	t16 = (x1001-((x1002<<x1003)+x1004));

	if (t16 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1013 = 360227442074552LLU;
	uint16_t x1014 = 9U;
	static volatile int16_t x1015 = 0;
	int8_t x1016 = INT8_MAX;
	uint64_t t17 = 167LLU;

	t17 = (x1013-((x1014<<x1015)+x1016));

	if (t17 != 360227442074416LLU) { NG(); } else { ; }
	
}

void f18(void) {


	t18 = (x1117-((x1118<<x1119)+x1120));

	if (t18 != 2147485569U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1145 = UINT64_MAX;
	uint64_t x1146 = UINT64_MAX;
	volatile uint16_t x1147 = 46U;

	t19 = (x1145-((x1146<<x1147)+x1148));

	if (t19 != 70368744210431LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1301 = INT8_MIN;
	uint8_t x1302 = 30U;
	static uint8_t x1303 = 3U;
	volatile int32_t t20 = 180384949;

	t20 = (x1301-((x1302<<x1303)+x1304));

	if (t20 != -367) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1317 = -1;
	uint8_t x1318 = UINT8_MAX;
	int8_t x1320 = -2;
	static int32_t t21 = 37819;

	t21 = (x1317-((x1318<<x1319)+x1320));

	if (t21 != -2039) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1365 = UINT32_MAX;
	uint8_t x1367 = 26U;
	uint64_t t22 = 6LLU;

	t22 = (x1365-((x1366<<x1367)+x1368));

	if (t22 != 16832622713695633408LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1441 = INT8_MIN;
	uint32_t x1442 = UINT32_MAX;
	uint32_t x1443 = 22U;
	int32_t x1444 = -64534085;
	volatile uint32_t t23 = 86904U;

	t23 = (x1441-((x1442<<x1443)+x1444));

	if (t23 != 68728261U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1445 = 284;
	uint32_t x1446 = 1048347829U;
	int8_t x1447 = 1;
	uint32_t x1448 = UINT32_MAX;
	static volatile uint32_t t24 = 17570U;

	t24 = (x1445-((x1446<<x1447)+x1448));

	if (t24 != 2198271923U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1469 = 0;
	int8_t x1470 = INT8_MAX;
	static uint32_t x1471 = 1U;
	volatile int32_t t25 = 12655390;

	t25 = (x1469-((x1470<<x1471)+x1472));

	if (t25 != -7858064) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1502 = 0U;
	static int8_t x1503 = 27;
	static volatile uint32_t t26 = 803424101U;

	t26 = (x1501-((x1502<<x1503)+x1504));

	if (t26 != 161U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1553 = -1;
	static uint32_t x1554 = 3758U;
	uint8_t x1555 = 0U;
	int64_t x1556 = -1LL;
	static int64_t t27 = -307745933LL;

	t27 = (x1553-((x1554<<x1555)+x1556));

	if (t27 != -3758LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1662 = 31U;
	volatile uint8_t x1663 = 6U;
	int64_t x1664 = -29222526157304042LL;
	static int64_t t28 = 49877429367171967LL;

	t28 = (x1661-((x1662<<x1663)+x1664));

	if (t28 != -9194149510697473750LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1750 = 46U;
	uint32_t x1751 = 1U;
	static uint32_t x1752 = UINT32_MAX;
	volatile uint32_t t29 = 31028U;

	t29 = (x1749-((x1750<<x1751)+x1752));

	if (t29 != 4294967204U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1781 = 208U;
	uint16_t x1782 = 8U;
	uint32_t x1783 = 11U;
	static volatile int8_t x1784 = INT8_MIN;
	volatile int32_t t30 = 289173;

	t30 = (x1781-((x1782<<x1783)+x1784));

	if (t30 != -16048) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1793 = -1;
	uint32_t x1795 = 7U;
	int64_t x1796 = INT64_MIN;
	int64_t t31 = 2398659LL;

	t31 = (x1793-((x1794<<x1795)+x1796));

	if (t31 != 9223372036854772991LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1893 = 25U;
	int32_t x1894 = 5755;
	uint8_t x1895 = 0U;
	int64_t x1896 = 342084677LL;
	volatile int64_t t32 = -4131525985LL;

	t32 = (x1893-((x1894<<x1895)+x1896));

	if (t32 != -342090407LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x2045 = INT32_MAX;
	uint64_t x2046 = 25537914258LLU;
	volatile uint16_t x2047 = 1U;
	volatile uint64_t t33 = 3662857767430834LLU;

	t33 = (x2045-((x2046<<x2047)+x2048));

	if (t33 != 18446744024741596282LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2053 = -885627986;
	int8_t x2054 = INT8_MAX;
	uint32_t x2055 = 15U;
	int64_t x2056 = 48322024139LL;
	int64_t t34 = -332715407LL;

	t34 = (x2053-((x2054<<x2055)+x2056));

	if (t34 != -49211813661LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2181 = INT64_MAX;
	int8_t x2182 = INT8_MAX;
	uint16_t x2183 = 0U;
	uint8_t x2184 = UINT8_MAX;
	int64_t t35 = 23275LL;

	t35 = (x2181-((x2182<<x2183)+x2184));

	if (t35 != 9223372036854775425LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2195 = 27U;
	volatile uint8_t x2196 = 126U;

	t36 = (x2193-((x2194<<x2195)+x2196));

	if (t36 != -671121534) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2234 = UINT32_MAX;
	int16_t x2235 = 0;
	volatile int16_t x2236 = 0;
	static volatile uint64_t t37 = 731065160836LLU;

	t37 = (x2233-((x2234<<x2235)+x2236));

	if (t37 != 18446744069438652955LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2241 = INT64_MIN;
	int8_t x2242 = 7;
	volatile uint64_t x2244 = UINT64_MAX;
	uint64_t t38 = 1781664665236894LLU;

	t38 = (x2241-((x2242<<x2243)+x2244));

	if (t38 != 9223372036854317057LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2321 = 4;
	uint64_t x2322 = 7636160656100405453LLU;
	static int8_t x2323 = 1;
	volatile uint8_t x2324 = UINT8_MAX;
	uint64_t t39 = 62021144329171669LLU;

	t39 = (x2321-((x2322<<x2323)+x2324));

	if (t39 != 3174422761508740459LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2454 = INT8_MAX;
	uint8_t x2455 = 0U;
	uint8_t x2456 = 0U;

	t40 = (x2453-((x2454<<x2455)+x2456));

	if (t40 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2613 = 3U;
	uint64_t x2614 = 2LLU;
	uint32_t x2615 = 20U;
	static uint8_t x2616 = 45U;
	uint64_t t41 = 0LLU;

	t41 = (x2613-((x2614<<x2615)+x2616));

	if (t41 != 18446744073707454422LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2685 = INT16_MIN;
	int8_t x2686 = INT8_MAX;
	volatile uint8_t x2687 = 12U;
	uint64_t x2688 = 1198570LLU;
	volatile uint64_t t42 = 1231203465116LLU;

	t42 = (x2685-((x2686<<x2687)+x2688));

	if (t42 != 18446744073707800086LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2742 = 49U;
	int8_t x2744 = 1;

	t43 = (x2741-((x2742<<x2743)+x2744));

	if (t43 != 4294967196U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2786 = 1329770U;
	uint16_t x2787 = 14U;
	volatile int32_t x2788 = INT32_MIN;
	uint64_t t44 = 198080LLU;

	t44 = (x2785-((x2786<<x2787)+x2788));

	if (t44 != 18446744071249952958LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2834 = 4;
	int8_t x2835 = 0;
	volatile uint64_t t45 = 51474997518182277LLU;

	t45 = (x2833-((x2834<<x2835)+x2836));

	if (t45 != 9223698958330454224LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2905 = -2;
	static uint16_t x2907 = 0U;
	uint16_t x2908 = UINT16_MAX;
	uint32_t t46 = 935401U;

	t46 = (x2905-((x2906<<x2907)+x2908));

	if (t46 != 4294801312U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2911 = 1;
	int16_t x2912 = INT16_MAX;
	int32_t t47 = 252440;

	t47 = (x2909-((x2910<<x2911)+x2912));

	if (t47 != -32959) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2935 = 0;
	int32_t x2936 = -1;
	int32_t t48 = 4059;

	t48 = (x2933-((x2934<<x2935)+x2936));

	if (t48 != 65489) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2981 = UINT16_MAX;
	volatile int32_t x2982 = 697570;
	int32_t x2983 = 7;
	int64_t x2984 = -160930705LL;
	static int64_t t49 = -31702918874959LL;

	t49 = (x2981-((x2982<<x2983)+x2984));

	if (t49 != 71707280LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3061 = UINT64_MAX;
	uint16_t x3062 = 5U;
	uint32_t x3063 = 2U;

	t50 = (x3061-((x3062<<x3063)+x3064));

	if (t50 != 143LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3081 = 241U;
	int32_t x3082 = 17;
	uint16_t x3083 = 13U;
	int8_t x3084 = INT8_MIN;

	t51 = (x3081-((x3082<<x3083)+x3084));

	if (t51 != -138895) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3089 = INT8_MAX;
	uint8_t x3090 = UINT8_MAX;
	volatile uint64_t x3091 = 0LLU;
	int64_t x3092 = -1LL;
	volatile int64_t t52 = 6LL;

	t52 = (x3089-((x3090<<x3091)+x3092));

	if (t52 != -127LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3185 = -1LL;
	static volatile uint16_t x3186 = 87U;
	int8_t x3187 = 2;
	volatile int16_t x3188 = -1;
	volatile int64_t t53 = -2553LL;

	t53 = (x3185-((x3186<<x3187)+x3188));

	if (t53 != -348LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x3361 = INT64_MAX;
	uint64_t x3362 = UINT64_MAX;
	uint16_t x3363 = 18U;
	uint64_t t54 = 450698774LLU;

	t54 = (x3361-((x3362<<x3363)+x3364));

	if (t54 != 9223372036854972416LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x3454 = 65995U;
	uint64_t x3455 = 12LLU;
	int64_t x3456 = INT64_MIN;
	volatile int64_t t55 = -1LL;

	t55 = (x3453-((x3454<<x3455)+x3456));

	if (t55 != 9223372036604594277LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3745 = INT8_MIN;
	volatile uint8_t x3747 = 13U;
	static int8_t x3748 = INT8_MAX;

	t56 = (x3745-((x3746<<x3747)+x3748));

	if (t56 != -255) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3821 = 86347U;
	uint8_t x3822 = UINT8_MAX;
	uint16_t x3823 = 0U;
	int64_t x3824 = -1LL;

	t57 = (x3821-((x3822<<x3823)+x3824));

	if (t57 != 86093LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3878 = UINT32_MAX;
	int8_t x3879 = 1;
	int8_t x3880 = -1;
	volatile uint32_t t58 = 1159U;

	t58 = (x3877-((x3878<<x3879)+x3880));

	if (t58 != 2U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3937 = UINT16_MAX;
	uint32_t x3939 = 15U;
	static uint8_t x3940 = 5U;

	t59 = (x3937-((x3938<<x3939)+x3940));

	if (t59 != -393222) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3945 = 17054956U;
	uint64_t x3946 = 10337727658LLU;
	uint64_t x3948 = UINT64_MAX;
	volatile uint64_t t60 = 4252586LLU;

	t60 = (x3945-((x3946<<x3947)+x3948));

	if (t60 != 18446743991024785309LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x4202 = 660872628533LLU;
	int8_t x4204 = INT8_MIN;

	t61 = (x4201-((x4202<<x4203)+x4204));

	if (t61 != 18425088599417782655LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4209 = INT64_MIN;
	volatile uint64_t x4210 = 1137355331222059LLU;
	uint16_t x4211 = 24U;
	volatile int16_t x4212 = -427;

	t62 = (x4209-((x4210<<x4211)+x4212));

	if (t62 != 1500683588503339435LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4418 = 2;
	uint8_t x4419 = 1U;
	uint8_t x4420 = 0U;
	uint64_t t63 = 64730246444964916LLU;

	t63 = (x4417-((x4418<<x4419)+x4420));

	if (t63 != 122LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4425 = 2;
	uint32_t x4426 = 36U;
	uint16_t x4427 = 1U;
	uint16_t x4428 = 257U;
	volatile uint32_t t64 = 209564109U;

	t64 = (x4425-((x4426<<x4427)+x4428));

	if (t64 != 4294966969U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4441 = 3U;
	uint32_t x4442 = UINT32_MAX;
	uint8_t x4443 = 0U;
	int16_t x4444 = -1;

	t65 = (x4441-((x4442<<x4443)+x4444));

	if (t65 != 5U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4465 = -1;
	volatile uint8_t x4467 = 3U;
	int32_t x4468 = 495320;
	volatile int32_t t66 = -49331389;

	t66 = (x4465-((x4466<<x4467)+x4468));

	if (t66 != -495329) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4477 = 351297330LLU;
	uint16_t x4479 = 23U;
	volatile uint16_t x4480 = 21U;
	uint64_t t67 = 947686835576LLU;

	t67 = (x4477-((x4478<<x4479)+x4480));

	if (t67 != 359685917LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4485 = 19U;
	volatile uint16_t x4486 = 2U;
	volatile uint8_t x4487 = 15U;
	static uint16_t x4488 = 236U;

	t68 = (x4485-((x4486<<x4487)+x4488));

	if (t68 != -65753) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4569 = INT16_MAX;
	uint8_t x4571 = 0U;

	t69 = (x4569-((x4570<<x4571)+x4572));

	if (t69 != -571730414599662LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4594 = 8028239198849098LLU;
	uint8_t x4595 = 27U;
	int16_t x4596 = INT16_MIN;
	static volatile uint64_t t70 = 49454LLU;

	t70 = (x4593-((x4594<<x4595)+x4596));

	if (t70 != 16083211603599720450LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4645 = -1;
	uint32_t x4646 = 33549826U;
	uint8_t x4647 = 7U;

	t71 = (x4645-((x4646<<x4647)+x4648));

	if (t71 != 524032U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x4721 = 498U;
	volatile int64_t x4724 = INT64_MIN;
	volatile int64_t t72 = 52454403428LL;

	t72 = (x4721-((x4722<<x4723)+x4724));

	if (t72 != 9223372036850582130LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4813 = -641240342488277LL;
	int16_t x4814 = 110;

	t73 = (x4813-((x4814<<x4815)+x4816));

	if (t73 != -641240342456389LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4969 = 7U;
	volatile uint32_t x4970 = 50U;
	static volatile int16_t x4971 = 0;
	int64_t x4972 = INT64_MIN;
	volatile int64_t t74 = -20LL;

	t74 = (x4969-((x4970<<x4971)+x4972));

	if (t74 != 9223372036854775765LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4973 = -1LL;
	static uint16_t x4974 = 40U;
	static uint16_t x4976 = 1428U;
	static int64_t t75 = -4212794921933LL;

	t75 = (x4973-((x4974<<x4975)+x4976));

	if (t75 != -1509LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5005 = 2365U;
	uint32_t x5006 = UINT32_MAX;
	static volatile int16_t x5007 = 8;
	uint16_t x5008 = UINT16_MAX;
	volatile uint32_t t76 = 455440670U;

	t76 = (x5005-((x5006<<x5007)+x5008));

	if (t76 != 4294904382U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x5241 = UINT64_MAX;
	static int16_t x5242 = INT16_MAX;
	int8_t x5244 = INT8_MIN;
	uint64_t t77 = 33607027661LLU;

	t77 = (x5241-((x5242<<x5243)+x5244));

	if (t77 != 18446744073709289607LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x5305 = INT16_MAX;
	static int8_t x5306 = 3;
	int32_t x5307 = 5;
	int16_t x5308 = INT16_MAX;
	volatile int32_t t78 = -1230;

	t78 = (x5305-((x5306<<x5307)+x5308));

	if (t78 != -96) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x5481 = UINT64_MAX;
	uint16_t x5483 = 6U;
	volatile int16_t x5484 = INT16_MIN;
	static volatile uint64_t t79 = 40643676518543831LLU;

	t79 = (x5481-((x5482<<x5483)+x5484));

	if (t79 != 29567LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5550 = 2984;
	volatile int32_t x5551 = 9;
	volatile int64_t x5552 = -1LL;

	t80 = (x5549-((x5550<<x5551)+x5552));

	if (t80 != -1462272LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5614 = 50LLU;
	uint32_t x5616 = 27U;

	t81 = (x5613-((x5614<<x5615)+x5616));

	if (t81 != 18390449078367420388LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5629 = 10U;
	uint8_t x5631 = 12U;
	volatile uint16_t x5632 = 2U;
	uint32_t t82 = 103948U;

	t82 = (x5629-((x5630<<x5631)+x5632));

	if (t82 != 4294959112U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5653 = INT16_MIN;
	static uint8_t x5655 = 6U;
	static uint32_t x5656 = UINT32_MAX;

	t83 = (x5653-((x5654<<x5655)+x5656));

	if (t83 != 4294934401U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5677 = INT32_MIN;
	int16_t x5678 = 1;
	uint64_t x5679 = 0LLU;
	static int64_t x5680 = 18147LL;

	t84 = (x5677-((x5678<<x5679)+x5680));

	if (t84 != -2147501796LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5713 = 185U;
	int8_t x5715 = 1;
	int8_t x5716 = INT8_MAX;

	t85 = (x5713-((x5714<<x5715)+x5716));

	if (t85 != 17960710425198882510LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x5805 = INT32_MAX;
	static uint64_t x5806 = UINT64_MAX;
	volatile uint64_t t86 = 34468731LLU;

	t86 = (x5805-((x5806<<x5807)+x5808));

	if (t86 != 2147483662LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x5841 = 0;
	uint8_t x5842 = 0U;
	static int8_t x5843 = 0;
	static uint32_t x5844 = 6945712U;

	t87 = (x5841-((x5842<<x5843)+x5844));

	if (t87 != 4288021584U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5893 = 1;
	volatile int8_t x5894 = INT8_MAX;
	int8_t x5896 = INT8_MIN;
	static int32_t t88 = 24328;

	t88 = (x5893-((x5894<<x5895)+x5896));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5929 = -1;
	uint8_t x5931 = 2U;
	uint16_t x5932 = UINT16_MAX;
	static volatile uint64_t t89 = 54601471218704096LLU;

	t89 = (x5929-((x5930<<x5931)+x5932));

	if (t89 != 18446025202843047072LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5969 = 1U;
	volatile int16_t x5970 = 242;
	int16_t x5971 = 1;
	uint32_t x5972 = 2U;
	static uint32_t t90 = 34457U;

	t90 = (x5969-((x5970<<x5971)+x5972));

	if (t90 != 4294966811U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6162 = 1U;
	int8_t x6163 = 1;
	uint32_t x6164 = UINT32_MAX;

	t91 = (x6161-((x6162<<x6163)+x6164));

	if (t91 != 4294967235U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6181 = INT32_MIN;
	uint16_t x6182 = UINT16_MAX;
	static volatile int32_t x6183 = 0;
	static int32_t x6184 = INT32_MIN;
	volatile int32_t t92 = 15296;

	t92 = (x6181-((x6182<<x6183)+x6184));

	if (t92 != -65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6218 = 92512350U;
	uint16_t x6219 = 12U;
	int16_t x6220 = -7320;
	uint32_t t93 = 225369131U;

	t93 = (x6217-((x6218<<x6219)+x6220));

	if (t93 != 3321478296U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x6329 = -1;
	uint16_t x6330 = 1775U;
	int8_t x6332 = 27;
	int32_t t94 = -23443347;

	t94 = (x6329-((x6330<<x6331)+x6332));

	if (t94 != -1803) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6501 = 458585665263LLU;
	static uint64_t x6502 = UINT64_MAX;
	uint16_t x6504 = UINT16_MAX;
	uint64_t t95 = 15026562223302LLU;

	t95 = (x6501-((x6502<<x6503)+x6504));

	if (t95 != 458585599730LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6537 = INT8_MIN;
	uint64_t x6538 = UINT64_MAX;
	int64_t x6539 = 0LL;
	uint64_t x6540 = UINT64_MAX;
	uint64_t t96 = 779526096LLU;

	t96 = (x6537-((x6538<<x6539)+x6540));

	if (t96 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6557 = 31741632U;
	int64_t x6558 = 27644283LL;
	uint8_t x6559 = 17U;
	int16_t x6560 = INT16_MIN;
	int64_t t97 = 338635569662141061LL;

	t97 = (x6557-((x6558<<x6559)+x6560));

	if (t97 != -3623359686976LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6561 = INT16_MIN;
	uint64_t x6562 = 18316385LLU;
	uint32_t x6563 = 19U;
	int64_t x6564 = -1LL;
	volatile uint64_t t98 = 7LLU;

	t98 = (x6561-((x6562<<x6563)+x6564));

	if (t98 != 18446734470648659969LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6761 = -1;
	uint64_t x6762 = 2102982842080897LLU;
	int32_t x6763 = 3;
	volatile int16_t x6764 = -7580;
	static uint64_t t99 = 83LLU;

	t99 = (x6761-((x6762<<x6763)+x6764));

	if (t99 != 18429920210972912019LLU) { NG(); } else { ; }
	
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

