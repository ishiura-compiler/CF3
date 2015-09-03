#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x182 = -1;
volatile uint64_t x275 = UINT64_MAX;
int32_t x420 = -1;
volatile int32_t t8 = -678968;
int32_t t10 = 237991;
volatile int64_t x615 = 981019654LL;
volatile int8_t x645 = INT8_MAX;
uint8_t x646 = 3U;
int64_t x648 = 3LL;
int8_t x848 = -1;
static int64_t x929 = 0LL;
static volatile int8_t x1057 = 2;
int32_t t20 = -98584;
volatile uint16_t x1063 = 3U;
static volatile int32_t t22 = -576;
volatile int32_t t23 = -4;
int16_t x1286 = -107;
volatile uint8_t x1337 = UINT8_MAX;
int8_t x1339 = 32;
volatile int32_t t25 = 1;
volatile uint64_t x1441 = 192252227514LLU;
int32_t x1442 = -434644;
volatile uint32_t t30 = 29167U;
static int8_t x1610 = 0;
static uint16_t x1653 = 13U;
uint64_t x1684 = UINT64_MAX;
volatile int32_t t34 = -60;
static int16_t x1758 = -1;
static int32_t t36 = 26900671;
int64_t x1775 = 35518166936633343LL;
int32_t x1881 = 20;
static uint16_t x1883 = 13U;
static volatile int8_t x1996 = INT8_MAX;
uint16_t x2073 = UINT16_MAX;
static int64_t x2075 = -1LL;
uint8_t x2157 = 7U;
int8_t x2159 = -1;
int64_t x2590 = INT64_MAX;
int32_t t47 = 0;
uint32_t t48 = 40562U;
uint8_t x2814 = 4U;
int16_t x2866 = 31;
int32_t x2884 = -1;
uint64_t x3004 = UINT64_MAX;
int64_t x3027 = INT64_MIN;
static int16_t x3102 = -1;
int8_t x3103 = 61;
uint16_t x3281 = UINT16_MAX;
int32_t x3326 = INT32_MIN;
volatile int32_t t60 = -100917;
uint8_t x3478 = 1U;
volatile int32_t t63 = 2283;
int8_t x3602 = INT8_MIN;
volatile int8_t x3918 = -1;
static int8_t x3919 = INT8_MIN;
static uint32_t x4089 = UINT32_MAX;
static int8_t x4141 = 2;
uint8_t x4142 = 3U;
static uint8_t x4175 = UINT8_MAX;
uint64_t x4176 = UINT64_MAX;
uint16_t x4182 = 1258U;
int32_t x4183 = 15;
volatile uint32_t t75 = 211542323U;
uint16_t x4547 = 7575U;
uint64_t x4645 = 238464308451482LLU;
int8_t x4646 = -1;
uint64_t x4648 = UINT64_MAX;
volatile uint64_t t78 = 1805510614LLU;
int16_t x4713 = 1883;
int32_t t80 = 4;
uint64_t x4787 = UINT64_MAX;
int32_t x4976 = -1;
volatile int32_t t82 = 2235067;
volatile uint32_t t83 = UINT32_MAX;
int8_t x5124 = -1;
int8_t x5222 = INT8_MIN;
static volatile uint16_t x5525 = 51U;
int8_t x5645 = 60;
uint32_t x5665 = 14412906U;
int16_t x5668 = -1;
int16_t x5694 = INT16_MAX;
int8_t x5696 = 1;
static volatile uint32_t t94 = 5U;
static uint16_t x5849 = 14256U;
int16_t x5850 = 1;
int64_t x5852 = -1LL;
volatile int32_t t95 = -878;
int64_t x5907 = INT64_MAX;
uint32_t x5981 = UINT32_MAX;
uint8_t x5982 = UINT8_MAX;
int8_t x6071 = -1;


void f0(void) {
	static int16_t x81 = INT16_MAX;
	int16_t x82 = -1;
	volatile uint8_t x83 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	int32_t t0 = -3;

	t0 = (x81<<((x82%x83)-x84));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x157 = 6U;
	int16_t x158 = -1;
	static uint64_t x159 = UINT64_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t1 = 5411;

	t1 = (x157<<((x158%x159)-x160));

	if (t1 != 12) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x181 = 0U;
	uint16_t x183 = 604U;
	static int8_t x184 = -7;
	volatile int32_t t2 = -4;

	t2 = (x181<<((x182%x183)-x184));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x189 = UINT64_MAX;
	volatile uint64_t x190 = UINT64_MAX;
	int64_t x191 = -1LL;
	int32_t x192 = -1;
	uint64_t t3 = 741LLU;

	t3 = (x189<<((x190%x191)-x192));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x273 = 2U;
	int32_t x274 = 14;
	uint16_t x276 = 10U;
	volatile int32_t t4 = -11205169;

	t4 = (x273<<((x274%x275)-x276));

	if (t4 != 32) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x289 = UINT8_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	int64_t x291 = -1LL;
	int16_t x292 = -1;
	int32_t t5 = 1049643906;

	t5 = (x289<<((x290%x291)-x292));

	if (t5 != 510) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x301 = 485U;
	uint32_t x302 = 6U;
	uint32_t x303 = 356U;
	volatile uint8_t x304 = 1U;
	volatile int32_t t6 = 6;

	t6 = (x301<<((x302%x303)-x304));

	if (t6 != 15520) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x417 = INT8_MAX;
	int8_t x418 = 1;
	int16_t x419 = INT16_MIN;
	int32_t t7 = 170324005;

	t7 = (x417<<((x418%x419)-x420));

	if (t7 != 508) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x473 = INT8_MAX;
	int8_t x474 = -1;
	volatile uint16_t x475 = 635U;
	int16_t x476 = -1;

	t8 = (x473<<((x474%x475)-x476));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x517 = 7U;
	volatile uint32_t x518 = UINT32_MAX;
	int16_t x519 = INT16_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t9 = 79;

	t9 = (x517<<((x518%x519)-x520));

	if (t9 != 112) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x525 = UINT16_MAX;
	int32_t x526 = -1;
	int16_t x527 = -21;
	int16_t x528 = -6;

	t10 = (x525<<((x526%x527)-x528));

	if (t10 != 2097120) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x537 = INT8_MAX;
	int8_t x538 = -1;
	int16_t x539 = -18;
	int16_t x540 = -1;
	volatile int32_t t11 = 0;

	t11 = (x537<<((x538%x539)-x540));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x613 = 6U;
	uint8_t x614 = 2U;
	static int64_t x616 = -1LL;
	volatile int32_t t12 = 46797;

	t12 = (x613<<((x614%x615)-x616));

	if (t12 != 48) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x641 = 2U;
	volatile int16_t x642 = -1;
	uint16_t x643 = 977U;
	volatile uint64_t x644 = UINT64_MAX;
	int32_t t13 = 329;

	t13 = (x641<<((x642%x643)-x644));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x647 = 596;
	int32_t t14 = 421941368;

	t14 = (x645<<((x646%x647)-x648));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x761 = 7U;
	int64_t x762 = INT64_MAX;
	uint8_t x763 = 75U;
	int64_t x764 = -1LL;
	int32_t t15 = -184;

	t15 = (x761<<((x762%x763)-x764));

	if (t15 != 1792) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x821 = UINT32_MAX;
	uint8_t x822 = 19U;
	int64_t x823 = 15582LL;
	uint16_t x824 = 7U;
	volatile uint32_t t16 = 3483762U;

	t16 = (x821<<((x822%x823)-x824));

	if (t16 != 4294963200U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x845 = 1;
	int8_t x846 = INT8_MAX;
	int32_t x847 = -1;
	int32_t t17 = -338;

	t17 = (x845<<((x846%x847)-x848));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x930 = 8U;
	static volatile int8_t x931 = -1;
	static int64_t x932 = -8LL;
	volatile int64_t t18 = -27079LL;

	t18 = (x929<<((x930%x931)-x932));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1001 = INT8_MAX;
	uint8_t x1002 = 1U;
	int8_t x1003 = INT8_MIN;
	int8_t x1004 = -1;
	volatile int32_t t19 = 1;

	t19 = (x1001<<((x1002%x1003)-x1004));

	if (t19 != 508) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1058 = -1;
	uint8_t x1059 = 5U;
	uint32_t x1060 = UINT32_MAX;

	t20 = (x1057<<((x1058%x1059)-x1060));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1061 = UINT32_MAX;
	int8_t x1062 = 1;
	int32_t x1064 = -1;
	static uint32_t t21 = 469U;

	t21 = (x1061<<((x1062%x1063)-x1064));

	if (t21 != 4294967292U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1145 = UINT8_MAX;
	int16_t x1146 = 0;
	static volatile int16_t x1147 = INT16_MIN;
	static volatile uint8_t x1148 = 0U;

	t22 = (x1145<<((x1146%x1147)-x1148));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1257 = INT8_MAX;
	int32_t x1258 = -1;
	static uint16_t x1259 = 2173U;
	int8_t x1260 = -5;

	t23 = (x1257<<((x1258%x1259)-x1260));

	if (t23 != 2032) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1285 = 1;
	int32_t x1287 = INT32_MIN;
	int8_t x1288 = INT8_MIN;
	volatile int32_t t24 = -795141;

	t24 = (x1285<<((x1286%x1287)-x1288));

	if (t24 != 2097152) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1338 = 51LLU;
	volatile int16_t x1340 = 12;

	t25 = (x1337<<((x1338%x1339)-x1340));

	if (t25 != 32640) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1361 = INT16_MAX;
	static int16_t x1362 = -118;
	int32_t x1363 = 5890203;
	int8_t x1364 = INT8_MIN;
	volatile int32_t t26 = -8060685;

	t26 = (x1361<<((x1362%x1363)-x1364));

	if (t26 != 33553408) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1443 = -126;
	volatile int8_t x1444 = INT8_MIN;
	volatile uint64_t t27 = 3719LLU;

	t27 = (x1441<<((x1442%x1443)-x1444));

	if (t27 != 16717361816799281152LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1445 = UINT64_MAX;
	int32_t x1446 = 2;
	uint64_t x1447 = 10880LLU;
	int16_t x1448 = -1;
	static uint64_t t28 = 7629464475064LLU;

	t28 = (x1445<<((x1446%x1447)-x1448));

	if (t28 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1481 = 247029600297LLU;
	uint32_t x1482 = UINT32_MAX;
	static int16_t x1483 = -1;
	int8_t x1484 = -14;
	uint64_t t29 = 2066196LLU;

	t29 = (x1481<<((x1482%x1483)-x1484));

	if (t29 != 4047332971266048LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1497 = 1593069U;
	uint16_t x1498 = 861U;
	static uint8_t x1499 = 7U;
	int8_t x1500 = 0;

	t30 = (x1497<<((x1498%x1499)-x1500));

	if (t30 != 1593069U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1609 = 3937819957533LLU;
	volatile int64_t x1611 = INT64_MIN;
	uint64_t x1612 = UINT64_MAX;
	uint64_t t31 = 3387366LLU;

	t31 = (x1609<<((x1610%x1611)-x1612));

	if (t31 != 7875639915066LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1625 = UINT16_MAX;
	int16_t x1626 = INT16_MAX;
	static volatile int32_t x1627 = -1;
	int32_t x1628 = -1;
	int32_t t32 = -3895739;

	t32 = (x1625<<((x1626%x1627)-x1628));

	if (t32 != 131070) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1654 = -257382391;
	uint64_t x1655 = 1LLU;
	int8_t x1656 = -1;
	static int32_t t33 = -2014942;

	t33 = (x1653<<((x1654%x1655)-x1656));

	if (t33 != 26) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1681 = 10U;
	static int8_t x1682 = INT8_MIN;
	static volatile int8_t x1683 = INT8_MAX;

	t34 = (x1681<<((x1682%x1683)-x1684));

	if (t34 != 10) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1757 = 3;
	static int32_t x1759 = INT32_MIN;
	int32_t x1760 = -1;
	volatile int32_t t35 = 55;

	t35 = (x1757<<((x1758%x1759)-x1760));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1761 = INT8_MAX;
	int8_t x1762 = INT8_MIN;
	volatile int16_t x1763 = -1;
	int32_t x1764 = -1;

	t36 = (x1761<<((x1762%x1763)-x1764));

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1773 = 27U;
	static volatile int16_t x1774 = -1;
	int16_t x1776 = -1;
	volatile int32_t t37 = -30;

	t37 = (x1773<<((x1774%x1775)-x1776));

	if (t37 != 27) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1833 = 5LL;
	int8_t x1834 = -1;
	int8_t x1835 = INT8_MIN;
	int32_t x1836 = -1;
	int64_t t38 = -104704228LL;

	t38 = (x1833<<((x1834%x1835)-x1836));

	if (t38 != 5LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1882 = UINT64_MAX;
	static int64_t x1884 = -1LL;
	int32_t t39 = 15026;

	t39 = (x1881<<((x1882%x1883)-x1884));

	if (t39 != 160) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1993 = INT8_MAX;
	static uint16_t x1994 = UINT16_MAX;
	static volatile int8_t x1995 = INT8_MIN;
	int32_t t40 = 511354420;

	t40 = (x1993<<((x1994%x1995)-x1996));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2061 = 315523103448LLU;
	uint64_t x2062 = 39LLU;
	volatile int64_t x2063 = INT64_MAX;
	static int8_t x2064 = -15;
	uint64_t t41 = 31853745160845737LLU;

	t41 = (x2061<<((x2062%x2063)-x2064));

	if (t41 != 13114482114902884352LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2074 = UINT64_MAX;
	static int64_t x2076 = -1LL;
	static volatile int32_t t42 = 1620023;

	t42 = (x2073<<((x2074%x2075)-x2076));

	if (t42 != 131070) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2158 = -36;
	int8_t x2160 = -1;
	static int32_t t43 = -1;

	t43 = (x2157<<((x2158%x2159)-x2160));

	if (t43 != 14) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2333 = INT64_MAX;
	volatile int64_t x2334 = INT64_MAX;
	uint16_t x2335 = 39U;
	int32_t x2336 = 7;
	int64_t t44 = INT64_MAX;

	t44 = (x2333<<((x2334%x2335)-x2336));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2337 = 1U;
	int32_t x2338 = INT32_MIN;
	volatile int32_t x2339 = INT32_MIN;
	static int32_t x2340 = -1;
	int32_t t45 = -979262;

	t45 = (x2337<<((x2338%x2339)-x2340));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2365 = 443324601670LLU;
	int16_t x2366 = -1;
	volatile int8_t x2367 = INT8_MAX;
	int64_t x2368 = -1LL;
	volatile uint64_t t46 = 47LLU;

	t46 = (x2365<<((x2366%x2367)-x2368));

	if (t46 != 443324601670LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2589 = 863U;
	int8_t x2591 = INT8_MAX;
	int32_t x2592 = -1;

	t47 = (x2589<<((x2590%x2591)-x2592));

	if (t47 != 1726) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2673 = 3U;
	static int32_t x2674 = 0;
	int8_t x2675 = INT8_MIN;
	volatile uint64_t x2676 = UINT64_MAX;

	t48 = (x2673<<((x2674%x2675)-x2676));

	if (t48 != 6U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2813 = 3957175928263842577LLU;
	volatile int32_t x2815 = -961;
	volatile int8_t x2816 = -3;
	uint64_t t49 = 18LLU;

	t49 = (x2813<<((x2814%x2815)-x2816));

	if (t49 != 8456428827613956224LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2865 = 32490539287LLU;
	int64_t x2867 = INT64_MIN;
	static volatile int8_t x2868 = -1;
	uint64_t t50 = 163121939193LLU;

	t50 = (x2865<<((x2866%x2867)-x2868));

	if (t50 != 10418595151101296640LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2881 = 18U;
	volatile int64_t x2882 = INT64_MAX;
	volatile uint32_t x2883 = 3U;
	volatile int32_t t51 = 206531;

	t51 = (x2881<<((x2882%x2883)-x2884));

	if (t51 != 72) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2961 = 3941U;
	static uint32_t x2962 = UINT32_MAX;
	int8_t x2963 = INT8_MAX;
	int32_t x2964 = -1;
	volatile int32_t t52 = -14;

	t52 = (x2961<<((x2962%x2963)-x2964));

	if (t52 != 258277376) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3001 = 7U;
	int32_t x3002 = -10;
	static int32_t x3003 = -1;
	uint32_t t53 = 0U;

	t53 = (x3001<<((x3002%x3003)-x3004));

	if (t53 != 14U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3025 = 0;
	volatile int8_t x3026 = -1;
	int16_t x3028 = -1;
	volatile int32_t t54 = -132;

	t54 = (x3025<<((x3026%x3027)-x3028));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3093 = 8555;
	volatile uint8_t x3094 = 3U;
	volatile uint16_t x3095 = UINT16_MAX;
	int16_t x3096 = -1;
	int32_t t55 = -406665887;

	t55 = (x3093<<((x3094%x3095)-x3096));

	if (t55 != 136880) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3101 = 25972LLU;
	int64_t x3104 = -1LL;
	volatile uint64_t t56 = 2910667589LLU;

	t56 = (x3101<<((x3102%x3103)-x3104));

	if (t56 != 25972LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3121 = INT8_MAX;
	int16_t x3122 = -1;
	static int32_t x3123 = INT32_MIN;
	int64_t x3124 = -21LL;
	volatile int32_t t57 = -2;

	t57 = (x3121<<((x3122%x3123)-x3124));

	if (t57 != 133169152) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x3269 = UINT32_MAX;
	int64_t x3270 = INT64_MAX;
	static int16_t x3271 = -1;
	uint64_t x3272 = UINT64_MAX;
	volatile uint32_t t58 = 964U;

	t58 = (x3269<<((x3270%x3271)-x3272));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3282 = -1;
	int32_t x3283 = -7349985;
	int32_t x3284 = -1;
	int32_t t59 = 3;

	t59 = (x3281<<((x3282%x3283)-x3284));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3325 = 3;
	uint32_t x3327 = UINT32_MAX;
	int32_t x3328 = INT32_MIN;

	t60 = (x3325<<((x3326%x3327)-x3328));

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3361 = UINT8_MAX;
	volatile uint8_t x3362 = 3U;
	uint8_t x3363 = 13U;
	uint64_t x3364 = UINT64_MAX;
	volatile int32_t t61 = 56373158;

	t61 = (x3361<<((x3362%x3363)-x3364));

	if (t61 != 4080) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3393 = 1059U;
	static uint16_t x3394 = 1U;
	uint16_t x3395 = 6798U;
	int32_t x3396 = -1;
	int32_t t62 = 98;

	t62 = (x3393<<((x3394%x3395)-x3396));

	if (t62 != 4236) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3477 = 2U;
	uint32_t x3479 = 102U;
	static int64_t x3480 = -3LL;

	t63 = (x3477<<((x3478%x3479)-x3480));

	if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3601 = 80;
	static volatile uint8_t x3603 = UINT8_MAX;
	int8_t x3604 = INT8_MIN;
	int32_t t64 = -2638549;

	t64 = (x3601<<((x3602%x3603)-x3604));

	if (t64 != 80) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3605 = 44U;
	static int64_t x3606 = INT64_MIN;
	int16_t x3607 = -2;
	int16_t x3608 = -1;
	int32_t t65 = -18926209;

	t65 = (x3605<<((x3606%x3607)-x3608));

	if (t65 != 88) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3917 = INT32_MAX;
	volatile int8_t x3920 = -1;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x3917<<((x3918%x3919)-x3920));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4049 = UINT8_MAX;
	uint32_t x4050 = UINT32_MAX;
	volatile uint8_t x4051 = 63U;
	volatile int32_t x4052 = -1;
	volatile int32_t t67 = -806162;

	t67 = (x4049<<((x4050%x4051)-x4052));

	if (t67 != 4080) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4090 = INT32_MIN;
	uint8_t x4091 = 1U;
	volatile uint32_t x4092 = UINT32_MAX;
	uint32_t t68 = 636619U;

	t68 = (x4089<<((x4090%x4091)-x4092));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x4143 = INT32_MAX;
	volatile int16_t x4144 = -1;
	int32_t t69 = 1;

	t69 = (x4141<<((x4142%x4143)-x4144));

	if (t69 != 32) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4173 = INT8_MAX;
	int16_t x4174 = -1;
	int32_t t70 = -103743562;

	t70 = (x4173<<((x4174%x4175)-x4176));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4181 = UINT64_MAX;
	static int64_t x4184 = -1LL;
	volatile uint64_t t71 = 95LLU;

	t71 = (x4181<<((x4182%x4183)-x4184));

	if (t71 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4277 = 43;
	static int64_t x4278 = 257323202192LL;
	volatile int8_t x4279 = -1;
	int8_t x4280 = -8;
	volatile int32_t t72 = 46;

	t72 = (x4277<<((x4278%x4279)-x4280));

	if (t72 != 11008) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4313 = 3305455LLU;
	int32_t x4314 = INT32_MAX;
	int32_t x4315 = 1;
	int16_t x4316 = -24;
	uint64_t t73 = 15265667LLU;

	t73 = (x4313<<((x4314%x4315)-x4316));

	if (t73 != 55456332513280LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4385 = 25U;
	int64_t x4386 = INT64_MIN;
	volatile int8_t x4387 = INT8_MIN;
	int8_t x4388 = -1;
	volatile int32_t t74 = -111042430;

	t74 = (x4385<<((x4386%x4387)-x4388));

	if (t74 != 50) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4453 = 340344574U;
	int64_t x4454 = 1459075031862514557LL;
	static int16_t x4455 = -67;
	static int32_t x4456 = -1;

	t75 = (x4453<<((x4454%x4455)-x4456));

	if (t75 != 1361378296U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4545 = 128048;
	int8_t x4546 = -1;
	volatile int8_t x4548 = -1;
	int32_t t76 = 20;

	t76 = (x4545<<((x4546%x4547)-x4548));

	if (t76 != 128048) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4557 = 1U;
	uint8_t x4558 = 1U;
	static int16_t x4559 = -1;
	volatile uint64_t x4560 = UINT64_MAX;
	volatile int32_t t77 = -43916;

	t77 = (x4557<<((x4558%x4559)-x4560));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4647 = INT8_MIN;

	t78 = (x4645<<((x4646%x4647)-x4648));

	if (t78 != 238464308451482LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4714 = 15378069476718LLU;
	uint8_t x4715 = 8U;
	int32_t x4716 = -1;
	int32_t t79 = -13479505;

	t79 = (x4713<<((x4714%x4715)-x4716));

	if (t79 != 241024) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x4749 = 4U;
	static volatile int32_t x4750 = -2;
	int64_t x4751 = -1LL;
	int8_t x4752 = -1;

	t80 = (x4749<<((x4750%x4751)-x4752));

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4785 = 1U;
	static volatile uint8_t x4786 = 0U;
	int64_t x4788 = -3LL;
	volatile int32_t t81 = 33886351;

	t81 = (x4785<<((x4786%x4787)-x4788));

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4973 = 5475U;
	static uint8_t x4974 = 3U;
	int16_t x4975 = INT16_MIN;

	t82 = (x4973<<((x4974%x4975)-x4976));

	if (t82 != 87600) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x5037 = UINT32_MAX;
	int8_t x5038 = -1;
	int32_t x5039 = INT32_MAX;
	volatile int8_t x5040 = -1;

	t83 = (x5037<<((x5038%x5039)-x5040));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5121 = 1U;
	volatile int8_t x5122 = 0;
	uint64_t x5123 = 2LLU;
	int32_t t84 = -64;

	t84 = (x5121<<((x5122%x5123)-x5124));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5177 = 16U;
	static int8_t x5178 = -1;
	static int64_t x5179 = INT64_MIN;
	int8_t x5180 = -1;
	volatile int32_t t85 = -122;

	t85 = (x5177<<((x5178%x5179)-x5180));

	if (t85 != 16) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5221 = 8159;
	static int16_t x5223 = -25;
	int8_t x5224 = -11;
	int32_t t86 = -34947;

	t86 = (x5221<<((x5222%x5223)-x5224));

	if (t86 != 2088704) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5345 = UINT32_MAX;
	static int16_t x5346 = 0;
	int8_t x5347 = INT8_MIN;
	uint64_t x5348 = UINT64_MAX;
	uint32_t t87 = 5U;

	t87 = (x5345<<((x5346%x5347)-x5348));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5405 = 1;
	int32_t x5406 = INT32_MIN;
	int16_t x5407 = -1;
	int64_t x5408 = -1LL;
	static volatile int32_t t88 = -57381;

	t88 = (x5405<<((x5406%x5407)-x5408));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5526 = 9544934;
	volatile uint32_t x5527 = 1U;
	uint32_t x5528 = UINT32_MAX;
	int32_t t89 = 203;

	t89 = (x5525<<((x5526%x5527)-x5528));

	if (t89 != 102) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5646 = 8;
	int64_t x5647 = INT64_MIN;
	static volatile int8_t x5648 = 1;
	int32_t t90 = -158987;

	t90 = (x5645<<((x5646%x5647)-x5648));

	if (t90 != 7680) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x5666 = UINT8_MAX;
	volatile int16_t x5667 = 3;
	volatile uint32_t t91 = 15347972U;

	t91 = (x5665<<((x5666%x5667)-x5668));

	if (t91 != 28825812U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5693 = INT16_MAX;
	static volatile int8_t x5695 = INT8_MAX;
	static int32_t t92 = 17891951;

	t92 = (x5693<<((x5694%x5695)-x5696));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5705 = INT8_MAX;
	int8_t x5706 = 3;
	static int32_t x5707 = 713415685;
	volatile uint64_t x5708 = UINT64_MAX;
	int32_t t93 = -33224011;

	t93 = (x5705<<((x5706%x5707)-x5708));

	if (t93 != 2032) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5809 = UINT32_MAX;
	int8_t x5810 = -1;
	int64_t x5811 = -1LL;
	int16_t x5812 = -1;

	t94 = (x5809<<((x5810%x5811)-x5812));

	if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5851 = 19U;

	t95 = (x5849<<((x5850%x5851)-x5852));

	if (t95 != 57024) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5905 = 41963LLU;
	volatile int64_t x5906 = -1LL;
	int16_t x5908 = -1;
	volatile uint64_t t96 = 4967633286061541750LLU;

	t96 = (x5905<<((x5906%x5907)-x5908));

	if (t96 != 41963LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5983 = 15U;
	volatile int8_t x5984 = -1;
	static volatile uint32_t t97 = 1705180U;

	t97 = (x5981<<((x5982%x5983)-x5984));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x6069 = 7U;
	int32_t x6070 = -1;
	int32_t x6072 = -1;
	volatile int32_t t98 = -1;

	t98 = (x6069<<((x6070%x6071)-x6072));

	if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6157 = INT8_MAX;
	int8_t x6158 = 17;
	static int16_t x6159 = INT16_MAX;
	static volatile int8_t x6160 = 0;
	int32_t t99 = -6;

	t99 = (x6157<<((x6158%x6159)-x6160));

	if (t99 != 16646144) { NG(); } else { ; }
	
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

