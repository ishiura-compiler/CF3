#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x87 = 2U;
static int8_t x138 = INT8_MAX;
int32_t x140 = 15;
volatile uint64_t t1 = 1536091232LLU;
uint64_t x399 = 23794492562LLU;
volatile uint8_t x400 = 6U;
int16_t x461 = INT16_MIN;
static int32_t x583 = 0;
static uint32_t t6 = 27U;
volatile uint64_t t7 = 15LLU;
volatile int8_t x642 = INT8_MIN;
static uint8_t x644 = 0U;
int32_t x849 = 157545832;
volatile int32_t t12 = -129134;
volatile int32_t x945 = INT32_MAX;
volatile uint8_t x946 = UINT8_MAX;
int64_t x948 = 0LL;
volatile int8_t x981 = -1;
int32_t x1010 = -1075724;
uint16_t x1012 = 22U;
int8_t x1100 = 9;
uint32_t x1118 = 1U;
int8_t x1298 = INT8_MIN;
static volatile int16_t x1299 = 1;
int32_t t19 = -13582;
uint64_t x1331 = 2224038883874779LLU;
uint32_t x1691 = 4440U;
volatile int8_t x1699 = 0;
int8_t x1752 = 0;
int32_t x1796 = 2;
volatile int64_t x1894 = -6733980186LL;
volatile uint8_t x1896 = 0U;
uint16_t x1957 = 94U;
uint64_t x1983 = 16706070294LLU;
static uint32_t x2047 = 189258U;
int64_t x2126 = 1563995LL;
static uint16_t x2508 = 0U;
volatile int8_t x2533 = -1;
uint32_t x2536 = 1U;
uint8_t x2537 = 75U;
int64_t x2539 = INT64_MAX;
static int64_t t39 = 619603LL;
int32_t t42 = 25348010;
int16_t x3137 = INT16_MIN;
static int32_t x3174 = 253588;
volatile int64_t x3293 = INT64_MAX;
static uint32_t x3296 = 4U;
static volatile int64_t x3367 = 3114361500781LL;
int64_t x3569 = -2187917LL;
volatile int8_t x3580 = 1;
static volatile uint64_t x3823 = UINT64_MAX;
static volatile uint64_t t54 = 183LLU;
int64_t x4002 = INT64_MAX;
int8_t x4042 = -2;
uint32_t t59 = 32U;
uint8_t x4176 = 4U;
volatile int64_t t60 = 0LL;
uint16_t x4213 = 1U;
int16_t x4247 = INT16_MAX;
int32_t t62 = -408125770;
volatile uint32_t x4253 = 8549U;
int8_t x4254 = INT8_MIN;
static volatile uint32_t t63 = 222666U;
uint32_t x4320 = 15U;
uint16_t x4348 = 25U;
int64_t t65 = -5160930307793708LL;
static int16_t x4385 = INT16_MIN;
volatile uint8_t x4391 = UINT8_MAX;
static uint64_t x4454 = 3007LLU;
volatile uint32_t x4474 = 14349U;
volatile int8_t x4506 = 0;
int32_t t71 = 3;


void f0(void) {
	static int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	volatile int16_t x88 = 1;
	volatile uint32_t t0 = 560U;

	t0 = (x85-(x86^(x87<<x88)));

	if (t0 != 2147483516U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x137 = INT8_MAX;
	uint64_t x139 = 12225607LLU;

	t1 = (x137-(x138^(x139<<x140)));

	if (t1 != 18446743673100861440LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	int8_t x143 = INT8_MAX;
	uint8_t x144 = 7U;
	static volatile int64_t t2 = -16332LL;

	t2 = (x141-(x142^(x143<<x144)));

	if (t2 != -9223372036854759551LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x209 = INT16_MAX;
	volatile uint64_t x210 = 195978910046915887LLU;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = 42;
	uint64_t t3 = 772012021842170500LLU;

	t3 = (x209-(x210^(x211<<x212)));

	if (t3 != 195979393069216464LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x397 = UINT32_MAX;
	uint16_t x398 = UINT16_MAX;
	static volatile uint64_t t4 = 1367334133669301LLU;

	t4 = (x397-(x398^(x399<<x400)));

	if (t4 != 18446742555156948096LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x462 = UINT16_MAX;
	uint64_t x463 = UINT64_MAX;
	int8_t x464 = 0;
	volatile uint64_t t5 = 905199LLU;

	t5 = (x461-(x462^(x463<<x464)));

	if (t5 != 32768LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x581 = 1U;
	uint32_t x582 = 325457U;
	volatile int32_t x584 = 12;

	t6 = (x581-(x582^(x583<<x584)));

	if (t6 != 4294641840U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x589 = 1402161U;
	int16_t x590 = INT16_MIN;
	static volatile uint64_t x591 = 14LLU;
	int16_t x592 = 0;

	t7 = (x589-(x590^(x591<<x592)));

	if (t7 != 1434915LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x641 = 514852795LLU;
	uint8_t x643 = 47U;
	static volatile uint64_t t8 = 43695933LLU;

	t8 = (x641-(x642^(x643<<x644)));

	if (t8 != 514852876LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x737 = INT8_MAX;
	uint64_t x738 = 522710LLU;
	volatile uint32_t x739 = 98782U;
	int8_t x740 = 12;
	volatile uint64_t t9 = 3283934350764962LLU;

	t9 = (x737-(x738^(x739<<x740)));

	if (t9 != 18446744073305188009LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x809 = INT8_MAX;
	int64_t x810 = -1LL;
	uint64_t x811 = 528742795670LLU;
	uint32_t x812 = 60U;
	uint64_t t10 = 2223034877001LLU;

	t10 = (x809-(x810^(x811<<x812)));

	if (t10 != 6917529027641081984LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x850 = UINT8_MAX;
	volatile uint64_t x851 = 712411240735LLU;
	uint8_t x852 = 29U;
	volatile uint64_t t11 = 31410296148645LLU;

	t11 = (x849-(x850^(x851<<x852)));

	if (t11 != 4908753015607129193LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x853 = INT16_MAX;
	int16_t x854 = -1;
	volatile int8_t x855 = INT8_MAX;
	volatile int8_t x856 = 17;

	t12 = (x853-(x854^(x855<<x856)));

	if (t12 != 16678912) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x947 = 0U;
	static int32_t t13 = 22;

	t13 = (x945-(x946^(x947<<x948)));

	if (t13 != 2147483392) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x965 = UINT32_MAX;
	static volatile uint16_t x966 = 1U;
	uint16_t x967 = UINT16_MAX;
	uint8_t x968 = 8U;
	volatile uint32_t t14 = 32124U;

	t14 = (x965-(x966^(x967<<x968)));

	if (t14 != 4278190334U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x982 = INT8_MIN;
	uint16_t x983 = 8191U;
	volatile uint8_t x984 = 0U;
	volatile int32_t t15 = 666;

	t15 = (x981-(x982^(x983<<x984)));

	if (t15 != 8064) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1009 = 87U;
	volatile uint64_t x1011 = 8887596LLU;
	uint64_t t16 = 5168367121LLU;

	t16 = (x1009-(x1010^(x1011<<x1012)));

	if (t16 != 37277280528995LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1097 = -9;
	volatile uint32_t x1098 = 0U;
	uint16_t x1099 = UINT16_MAX;
	static uint32_t t17 = 2293306U;

	t17 = (x1097-(x1098^(x1099<<x1100)));

	if (t17 != 4261413367U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1117 = 369614833792948473LL;
	volatile uint64_t x1119 = UINT64_MAX;
	int8_t x1120 = 6;
	static uint64_t t18 = 52062082673371LLU;

	t18 = (x1117-(x1118^(x1119<<x1120)));

	if (t18 != 369614833792948536LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1297 = 1U;
	int8_t x1300 = 2;

	t19 = (x1297-(x1298^(x1299<<x1300)));

	if (t19 != 125) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1329 = INT32_MAX;
	static uint16_t x1330 = 3296U;
	uint8_t x1332 = 11U;
	static volatile uint64_t t20 = 154178655489662LLU;

	t20 = (x1329-(x1330^(x1331<<x1332)));

	if (t20 != 13891912441681488671LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1409 = INT64_MAX;
	volatile uint32_t x1410 = 1934U;
	int8_t x1411 = INT8_MAX;
	uint8_t x1412 = 11U;
	int64_t t21 = 85989231736199LL;

	t21 = (x1409-(x1410^(x1411<<x1412)));

	if (t21 != 9223372036854513777LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1493 = INT64_MIN;
	int16_t x1494 = INT16_MIN;
	int64_t x1495 = 96LL;
	uint8_t x1496 = 6U;
	int64_t t22 = -129440LL;

	t22 = (x1493-(x1494^(x1495<<x1496)));

	if (t22 != -9223372036854749184LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1569 = INT16_MIN;
	uint32_t x1570 = 172759U;
	int64_t x1571 = 3LL;
	volatile uint32_t x1572 = 3U;
	static volatile int64_t t23 = 963717028LL;

	t23 = (x1569-(x1570^(x1571<<x1572)));

	if (t23 != -205519LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1689 = INT8_MIN;
	static int8_t x1690 = INT8_MIN;
	uint8_t x1692 = 3U;
	volatile uint32_t t24 = 546U;

	t24 = (x1689-(x1690^(x1691<<x1692)));

	if (t24 != 35392U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1697 = 794526660;
	int16_t x1698 = INT16_MAX;
	uint16_t x1700 = 0U;
	volatile int32_t t25 = 6;

	t25 = (x1697-(x1698^(x1699<<x1700)));

	if (t25 != 794493893) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1749 = -104939LL;
	uint16_t x1750 = 191U;
	int64_t x1751 = 10367250686612LL;
	volatile int64_t t26 = 6749LL;

	t26 = (x1749-(x1750^(x1751<<x1752)));

	if (t26 != -10367250791446LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1793 = -1LL;
	int16_t x1794 = INT16_MAX;
	uint64_t x1795 = 545035757922011233LLU;
	uint64_t t27 = 6477LLU;

	t27 = (x1793-(x1794^(x1795<<x1796)));

	if (t27 != 16266601042021491076LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1893 = INT32_MIN;
	static uint32_t x1895 = UINT32_MAX;
	int64_t t28 = 2172270299364LL;

	t28 = (x1893-(x1894^(x1895<<x1896)));

	if (t28 != 4003438055LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1958 = INT32_MIN;
	uint64_t x1959 = 15588812LLU;
	uint16_t x1960 = 59U;
	uint64_t t29 = 8349213589612LLU;

	t29 = (x1957-(x1958^(x1959<<x1960)));

	if (t29 != 6917529029788565598LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1961 = 96U;
	volatile int64_t x1962 = -50421LL;
	volatile uint32_t x1963 = 1017826544U;
	int8_t x1964 = 1;
	volatile int64_t t30 = 2571506205236LL;

	t30 = (x1961-(x1962^(x1963<<x1964)));

	if (t30 != 2035637621LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1981 = 235U;
	static volatile int16_t x1982 = INT16_MAX;
	uint8_t x1984 = 5U;
	uint64_t t31 = 15364728734LLU;

	t31 = (x1981-(x1982^(x1983<<x1984)));

	if (t31 != 18446743539115320236LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x2045 = UINT64_MAX;
	int64_t x2046 = INT64_MAX;
	uint64_t x2048 = 3LLU;
	volatile uint64_t t32 = 1770955322857LLU;

	t32 = (x2045-(x2046^(x2047<<x2048)));

	if (t32 != 9223372036856289872LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2125 = UINT16_MAX;
	volatile uint32_t x2127 = 305021299U;
	int8_t x2128 = 10;
	volatile int64_t t33 = -25822269091100056LL;

	t33 = (x2125-(x2126^(x2127<<x2128)));

	if (t33 != -3104903516LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x2237 = -1LL;
	int32_t x2238 = 541961650;
	int16_t x2239 = 3;
	uint8_t x2240 = 12U;
	int64_t t34 = 12LL;

	t34 = (x2237-(x2238^(x2239<<x2240)));

	if (t34 != -541957555LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2273 = INT8_MIN;
	uint32_t x2274 = 922880862U;
	uint32_t x2275 = UINT32_MAX;
	int8_t x2276 = 0;
	volatile uint32_t t35 = 2957U;

	t35 = (x2273-(x2274^(x2275<<x2276)));

	if (t35 != 922880735U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2373 = UINT32_MAX;
	int32_t x2374 = INT32_MAX;
	uint16_t x2375 = UINT16_MAX;
	static uint8_t x2376 = 11U;
	volatile uint32_t t36 = 555U;

	t36 = (x2373-(x2374^(x2375<<x2376)));

	if (t36 != 2281699328U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2505 = 59;
	int64_t x2506 = 227247LL;
	static int32_t x2507 = 47227037;
	volatile int64_t t37 = -43685537128619LL;

	t37 = (x2505-(x2506^(x2507<<x2508)));

	if (t37 != -47437559LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x2534 = 972022;
	int16_t x2535 = 5749;
	static int32_t t38 = 259999012;

	t38 = (x2533-(x2534^(x2535<<x2536)));

	if (t38 != -981021) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2538 = INT16_MAX;
	static uint8_t x2540 = 0U;

	t39 = (x2537-(x2538^(x2539<<x2540)));

	if (t39 != -9223372036854742965LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2745 = UINT32_MAX;
	uint32_t x2746 = 110U;
	uint64_t x2747 = 6034591407LLU;
	static volatile uint16_t x2748 = 3U;
	volatile uint64_t t40 = 14573528LLU;

	t40 = (x2745-(x2746^(x2747<<x2748)));

	if (t40 != 18446744029727787753LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x3041 = 18U;
	int64_t x3042 = INT64_MIN;
	uint64_t x3043 = 3698095924LLU;
	int8_t x3044 = 6;
	uint64_t t41 = 3LLU;

	t41 = (x3041-(x3042^(x3043<<x3044)));

	if (t41 != 9223371800176636690LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3085 = INT8_MIN;
	int32_t x3086 = -1;
	uint16_t x3087 = UINT16_MAX;
	int8_t x3088 = 1;

	t42 = (x3085-(x3086^(x3087<<x3088)));

	if (t42 != 130943) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x3138 = 14;
	volatile int8_t x3139 = INT8_MAX;
	volatile int32_t x3140 = 1;
	int32_t t43 = 440436370;

	t43 = (x3137-(x3138^(x3139<<x3140)));

	if (t43 != -33008) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x3153 = INT8_MIN;
	static int16_t x3154 = -1;
	uint16_t x3155 = UINT16_MAX;
	static uint8_t x3156 = 1U;
	int32_t t44 = 265348;

	t44 = (x3153-(x3154^(x3155<<x3156)));

	if (t44 != 130943) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3173 = INT8_MIN;
	uint32_t x3175 = UINT32_MAX;
	int8_t x3176 = 1;
	volatile uint32_t t45 = 888663120U;

	t45 = (x3173-(x3174^(x3175<<x3176)));

	if (t45 != 253462U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3294 = UINT32_MAX;
	uint32_t x3295 = UINT32_MAX;
	int64_t t46 = -16627984710359822LL;

	t46 = (x3293-(x3294^(x3295<<x3296)));

	if (t46 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3337 = INT8_MIN;
	int32_t x3338 = -1;
	static volatile int8_t x3339 = INT8_MAX;
	int32_t x3340 = 0;
	volatile int32_t t47 = 303510;

	t47 = (x3337-(x3338^(x3339<<x3340)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3365 = INT8_MAX;
	volatile int32_t x3366 = -1;
	int8_t x3368 = 16;
	volatile int64_t t48 = -674908029528298LL;

	t48 = (x3365-(x3366^(x3367<<x3368)));

	if (t48 != 204102795315183744LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3570 = UINT32_MAX;
	static int8_t x3571 = 10;
	uint8_t x3572 = 23U;
	volatile int64_t t49 = -59LL;

	t49 = (x3569-(x3570^(x3571<<x3572)));

	if (t49 != -4213269132LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x3577 = 6197615LL;
	uint32_t x3578 = 0U;
	volatile uint8_t x3579 = 6U;
	static int64_t t50 = 1956186422LL;

	t50 = (x3577-(x3578^(x3579<<x3580)));

	if (t50 != 6197603LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3581 = INT64_MAX;
	uint16_t x3582 = 15U;
	static uint8_t x3583 = UINT8_MAX;
	uint16_t x3584 = 3U;
	volatile int64_t t51 = -20418651651926LL;

	t51 = (x3581-(x3582^(x3583<<x3584)));

	if (t51 != 9223372036854773768LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3589 = -1;
	uint8_t x3590 = 0U;
	uint32_t x3591 = 4370063U;
	uint16_t x3592 = 22U;
	volatile uint32_t t52 = 114871U;

	t52 = (x3589-(x3590^(x3591<<x3592)));

	if (t52 != 1547698175U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3761 = INT8_MAX;
	uint32_t x3762 = 2U;
	uint16_t x3763 = 2883U;
	static uint32_t x3764 = 0U;
	volatile uint32_t t53 = 184899031U;

	t53 = (x3761-(x3762^(x3763<<x3764)));

	if (t53 != 4294964542U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3821 = -164;
	int8_t x3822 = INT8_MIN;
	static volatile int16_t x3824 = 1;

	t54 = (x3821-(x3822^(x3823<<x3824)));

	if (t54 != 18446744073709551326LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4001 = -1;
	uint8_t x4003 = 62U;
	volatile uint8_t x4004 = 0U;
	int64_t t55 = 32854483LL;

	t55 = (x4001-(x4002^(x4003<<x4004)));

	if (t55 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4009 = 1761U;
	uint32_t x4010 = 190252U;
	uint64_t x4011 = 246103LLU;
	static uint16_t x4012 = 1U;
	uint64_t t56 = 5910287LLU;

	t56 = (x4009-(x4010^(x4011<<x4012)));

	if (t56 != 18446744073709199711LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4041 = -1LL;
	volatile uint32_t x4043 = 2140060979U;
	static uint64_t x4044 = 1LLU;
	static int64_t t57 = -22561860822422LL;

	t57 = (x4041-(x4042^(x4043<<x4044)));

	if (t57 != -14845337LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x4077 = -3834012LL;
	static int8_t x4078 = 7;
	int32_t x4079 = 1;
	int8_t x4080 = 0;
	int64_t t58 = 786654124LL;

	t58 = (x4077-(x4078^(x4079<<x4080)));

	if (t58 != -3834018LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x4165 = UINT32_MAX;
	volatile int16_t x4166 = INT16_MIN;
	uint16_t x4167 = 36U;
	uint64_t x4168 = 12LLU;

	t59 = (x4165-(x4166^(x4167<<x4168)));

	if (t59 != 147455U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4173 = 124U;
	int16_t x4174 = -20;
	int64_t x4175 = 514812946392048000LL;

	t60 = (x4173-(x4174^(x4175<<x4176)));

	if (t60 != 8237007142272768144LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4214 = INT8_MIN;
	uint32_t x4215 = UINT32_MAX;
	uint16_t x4216 = 9U;
	uint32_t t61 = 1828U;

	t61 = (x4213-(x4214^(x4215<<x4216)));

	if (t61 != 4294966913U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x4245 = -15428;
	int8_t x4246 = -28;
	uint8_t x4248 = 4U;

	t62 = (x4245-(x4246^(x4247<<x4248)));

	if (t62 != 508840) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4255 = 232U;
	uint8_t x4256 = 12U;

	t63 = (x4253-(x4254^(x4255<<x4256)));

	if (t63 != 958949U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4317 = 2919U;
	volatile int64_t x4318 = INT64_MAX;
	uint64_t x4319 = 9339559291281569LLU;
	volatile uint64_t t64 = 40502723458745LLU;

	t64 = (x4317-(x4318^(x4319<<x4320)));

	if (t64 != 1667401640506854248LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4345 = INT32_MAX;
	int64_t x4346 = -1LL;
	volatile int8_t x4347 = 0;

	t65 = (x4345-(x4346^(x4347<<x4348)));

	if (t65 != 2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4386 = 0LLU;
	static volatile uint32_t x4387 = UINT32_MAX;
	static uint8_t x4388 = 14U;
	volatile uint64_t t66 = 34978102609LLU;

	t66 = (x4385-(x4386^(x4387<<x4388)));

	if (t66 != 18446744069414567936LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4389 = UINT32_MAX;
	int8_t x4390 = INT8_MIN;
	uint8_t x4392 = 9U;
	static uint32_t t67 = 10498484U;

	t67 = (x4389-(x4390^(x4391<<x4392)));

	if (t67 != 130687U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x4453 = INT16_MIN;
	static int16_t x4455 = 14;
	volatile int8_t x4456 = 1;
	volatile uint64_t t68 = 2515856008393LLU;

	t68 = (x4453-(x4454^(x4455<<x4456)));

	if (t68 != 18446744073709515869LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4473 = 1U;
	static uint64_t x4475 = 3914646642273305528LLU;
	uint16_t x4476 = 7U;
	volatile uint64_t t69 = 583407646734243059LLU;

	t69 = (x4473-(x4474^(x4475<<x4476)));

	if (t69 != 15434063852884335604LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4505 = INT32_MIN;
	uint32_t x4507 = 289U;
	volatile int16_t x4508 = 1;
	uint32_t t70 = 5230417U;

	t70 = (x4505-(x4506^(x4507<<x4508)));

	if (t70 != 2147483070U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4541 = 6493492;
	int32_t x4542 = -1;
	uint16_t x4543 = 8118U;
	uint64_t x4544 = 1LLU;

	t71 = (x4541-(x4542^(x4543<<x4544)));

	if (t71 != 6509729) { NG(); } else { ; }
	
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


    return 0;
}

