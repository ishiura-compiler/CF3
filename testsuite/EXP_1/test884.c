#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x160 = UINT32_MAX;
static uint64_t x317 = 6471978199443893LLU;
uint32_t t5 = 591246915U;
uint16_t x558 = 9U;
uint32_t t8 = 283U;
int64_t x812 = INT64_MIN;
volatile uint64_t t9 = 40048241571849LLU;
volatile int64_t t10 = -200480437598908LL;
uint16_t x1071 = UINT16_MAX;
static int32_t t11 = -65;
int16_t x1086 = 23;
volatile int32_t x1087 = INT32_MIN;
int32_t x1154 = 10;
int8_t x1156 = -1;
volatile uint64_t x1159 = 623212859457170174LLU;
volatile int16_t x1270 = 13;
static uint32_t x1285 = 118802221U;
static int64_t x1371 = INT64_MIN;
uint32_t x1372 = UINT32_MAX;
volatile int64_t t18 = 7072455262732631LL;
static int64_t t20 = -4366893027LL;
static uint8_t x1602 = 30U;
int8_t x1739 = -1;
static uint8_t x1810 = 25U;
static uint32_t x1917 = 30U;
volatile int16_t x1918 = 5;
uint32_t x1919 = 9U;
int32_t x1995 = INT32_MIN;
int32_t t28 = -923350827;
static int16_t x2107 = -1;
uint8_t x2240 = 14U;
volatile uint32_t t30 = 624U;
uint8_t x2414 = 9U;
static uint8_t x2434 = 22U;
uint8_t x2462 = 2U;
int32_t x2527 = INT32_MIN;
int8_t x2537 = 0;
volatile int32_t t36 = 925878224;
int8_t x2559 = INT8_MAX;
int64_t x2569 = 1366420615123LL;
uint64_t x2597 = UINT64_MAX;
volatile uint64_t t39 = 47031046699479LLU;
uint16_t x3071 = 2U;
int64_t x3072 = INT64_MAX;
int64_t t48 = -993LL;
int16_t x3441 = 1;
static uint8_t x3450 = 8U;
int8_t x3451 = INT8_MAX;
static uint64_t t53 = 32LLU;
uint32_t x3916 = UINT32_MAX;
int8_t x4059 = INT8_MIN;
volatile uint64_t t58 = 26127372129LLU;
static uint8_t x4509 = UINT8_MAX;
volatile uint8_t x4513 = 1U;
static volatile uint32_t x4615 = 8610U;
int16_t x4630 = 5;
static int16_t x4631 = -1;
static uint8_t x4807 = UINT8_MAX;
int32_t t65 = -6365;
int64_t x4933 = 13918384LL;
uint16_t x4936 = 12461U;
static volatile int64_t t67 = 1959875LL;
int64_t x4952 = INT64_MIN;
static uint64_t x5025 = 45377906736780LLU;
uint8_t x5026 = 6U;
volatile int8_t x5067 = -1;
uint8_t x5194 = 15U;
volatile uint16_t x5298 = 4U;
uint64_t x5300 = 11330342059415544LLU;
int32_t x5371 = INT32_MIN;
uint32_t x5372 = 217U;
uint16_t x5386 = 3U;
int8_t x5388 = -39;
int8_t x5514 = 1;
int32_t x5551 = 0;
volatile int8_t x5552 = 5;
static uint8_t x5634 = 0U;
int64_t x5635 = INT64_MIN;
volatile uint64_t t80 = 11997372LLU;
int8_t x5658 = 5;
static uint64_t x5660 = 0LLU;
uint64_t t81 = 4802429153130274365LLU;
volatile int32_t t82 = 28601;
int64_t t84 = -445255029LL;
volatile int64_t t85 = -39LL;
uint16_t x6137 = 6322U;
int8_t x6139 = -4;
uint64_t x6140 = UINT64_MAX;
uint32_t x6177 = UINT32_MAX;
volatile uint32_t t87 = 16U;
uint8_t x6214 = 2U;
static uint8_t x6216 = 5U;
uint16_t x6330 = 32U;
static int8_t x6672 = INT8_MAX;
static uint64_t x6717 = 7992260LLU;
uint16_t x6870 = 14U;
static volatile int8_t x6871 = INT8_MAX;
int16_t x6963 = INT16_MAX;
volatile int8_t x7175 = INT8_MIN;
int16_t x7188 = INT16_MAX;


void f0(void) {
	volatile int8_t x93 = INT8_MAX;
	uint8_t x94 = 1U;
	uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t0 = 8384958U;

	t0 = (((x93<<x94)*x95)^x96);

	if (t0 != 2147483394U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x130 = 48U;
	int16_t x131 = -1;
	static int8_t x132 = 0;
	volatile uint64_t t1 = 489062683LLU;

	t1 = (((x129<<x130)*x131)^x132);

	if (t1 != 281474976710656LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x149 = 1723719734562387004LLU;
	volatile int16_t x150 = 7;
	static int64_t x151 = INT64_MIN;
	volatile uint16_t x152 = 3U;
	static uint64_t t2 = 43673LLU;

	t2 = (((x149<<x150)*x151)^x152);

	if (t2 != 3LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x157 = UINT8_MAX;
	uint16_t x158 = 5U;
	int32_t x159 = -24;
	volatile uint32_t t3 = 160U;

	t3 = (((x157<<x158)*x159)^x160);

	if (t3 != 195839U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x318 = 36U;
	int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t4 = 1026657016474046LLU;

	t4 = (((x317<<x318)*x319)^x320);

	if (t4 != 11035678704817635328LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x393 = 225221959U;
	static int16_t x394 = 7;
	uint8_t x395 = 0U;
	int16_t x396 = INT16_MIN;

	t5 = (((x393<<x394)*x395)^x396);

	if (t5 != 4294934528U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x513 = 398U;
	volatile int16_t x514 = 24;
	static int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MIN;
	uint32_t t6 = 3U;

	t6 = (((x513<<x514)*x515)^x516);

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x557 = UINT64_MAX;
	int64_t x559 = -66630248LL;
	static int64_t x560 = INT64_MIN;
	uint64_t t7 = 35148699881096LLU;

	t7 = (((x557<<x558)*x559)^x560);

	if (t7 != 9223372070969462784LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x777 = 45160322U;
	volatile uint8_t x778 = 0U;
	int8_t x779 = 1;
	static int8_t x780 = 1;

	t8 = (((x777<<x778)*x779)^x780);

	if (t8 != 45160323U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x809 = UINT64_MAX;
	static int8_t x810 = 0;
	int8_t x811 = INT8_MIN;

	t9 = (((x809<<x810)*x811)^x812);

	if (t9 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x825 = 8;
	uint8_t x826 = 1U;
	int32_t x827 = 1;
	int64_t x828 = -126956LL;

	t10 = (((x825<<x826)*x827)^x828);

	if (t10 != -126972LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1069 = 5930;
	static int8_t x1070 = 0;
	int32_t x1072 = INT32_MIN;

	t11 = (((x1069<<x1070)*x1071)^x1072);

	if (t11 != -1758861098) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1085 = 0;
	int64_t x1088 = INT64_MAX;
	int64_t t12 = INT64_MAX;

	t12 = (((x1085<<x1086)*x1087)^x1088);

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1153 = 232;
	volatile int8_t x1155 = INT8_MIN;
	volatile int32_t t13 = -1022;

	t13 = (((x1153<<x1154)*x1155)^x1156);

	if (t13 != 30408703) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1157 = UINT64_MAX;
	static uint16_t x1158 = 40U;
	uint32_t x1160 = 27804520U;
	static uint64_t t14 = 4008938163337712LLU;

	t14 = (((x1157<<x1158)*x1159)^x1160);

	if (t14 != 11066753858383922024LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1233 = 23;
	uint64_t x1234 = 11LLU;
	int8_t x1235 = INT8_MAX;
	volatile int32_t x1236 = INT32_MIN;
	int32_t t15 = -117616;

	t15 = (((x1233<<x1234)*x1235)^x1236);

	if (t15 != -2141501440) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1269 = 1;
	int16_t x1271 = 1;
	volatile int64_t x1272 = INT64_MIN;
	int64_t t16 = -4659LL;

	t16 = (((x1269<<x1270)*x1271)^x1272);

	if (t16 != -9223372036854767616LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1286 = 24U;
	static int16_t x1287 = -1;
	static int32_t x1288 = -1;
	volatile uint32_t t17 = 8382287U;

	t17 = (((x1285<<x1286)*x1287)^x1288);

	if (t17 != 754974719U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1369 = 0U;
	uint32_t x1370 = 27U;

	t18 = (((x1369<<x1370)*x1371)^x1372);

	if (t18 != 4294967295LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1473 = INT8_MAX;
	uint8_t x1474 = 9U;
	int32_t x1475 = 2085;
	uint8_t x1476 = UINT8_MAX;
	int32_t t19 = 13160066;

	t19 = (((x1473<<x1474)*x1475)^x1476);

	if (t19 != 135575295) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1597 = UINT32_MAX;
	uint32_t x1598 = 3U;
	int8_t x1599 = INT8_MAX;
	volatile int64_t x1600 = -3LL;

	t20 = (((x1597<<x1598)*x1599)^x1600);

	if (t20 != -4294966283LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1601 = UINT32_MAX;
	static int32_t x1603 = -1;
	int8_t x1604 = 0;
	static volatile uint32_t t21 = 5U;

	t21 = (((x1601<<x1602)*x1603)^x1604);

	if (t21 != 1073741824U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1645 = UINT64_MAX;
	uint16_t x1646 = 14U;
	static int64_t x1647 = INT64_MIN;
	uint32_t x1648 = 8197308U;
	uint64_t t22 = 1395LLU;

	t22 = (((x1645<<x1646)*x1647)^x1648);

	if (t22 != 8197308LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1737 = 0U;
	static uint64_t x1738 = 24LLU;
	int16_t x1740 = INT16_MAX;
	static int32_t t23 = 7418283;

	t23 = (((x1737<<x1738)*x1739)^x1740);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1801 = 1U;
	uint8_t x1802 = 12U;
	int8_t x1803 = -45;
	static volatile uint8_t x1804 = UINT8_MAX;
	volatile int32_t t24 = 3846;

	t24 = (((x1801<<x1802)*x1803)^x1804);

	if (t24 != -184065) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1809 = 0U;
	uint32_t x1811 = 55057U;
	int64_t x1812 = 1864447816LL;
	int64_t t25 = -272081621665LL;

	t25 = (((x1809<<x1810)*x1811)^x1812);

	if (t25 != 1864447816LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1920 = INT8_MIN;
	volatile uint32_t t26 = 251487U;

	t26 = (((x1917<<x1918)*x1919)^x1920);

	if (t26 != 4294958656U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1993 = UINT64_MAX;
	uint32_t x1994 = 7U;
	int16_t x1996 = INT16_MIN;
	volatile uint64_t t27 = 129LLU;

	t27 = (((x1993<<x1994)*x1995)^x1996);

	if (t27 != 18446743798831611904LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x2077 = 0;
	static volatile int32_t x2078 = 11;
	int16_t x2079 = INT16_MAX;
	int16_t x2080 = INT16_MAX;

	t28 = (((x2077<<x2078)*x2079)^x2080);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2105 = 64878U;
	uint32_t x2106 = 4U;
	int32_t x2108 = -199;
	static volatile uint32_t t29 = 5737877U;

	t29 = (((x2105<<x2106)*x2107)^x2108);

	if (t29 != 1037849U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2237 = 16987U;
	volatile int32_t x2238 = 7;
	int32_t x2239 = INT32_MAX;

	t30 = (((x2237<<x2238)*x2239)^x2240);

	if (t30 != 4292792974U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2369 = 136766642U;
	volatile uint8_t x2370 = 2U;
	volatile uint64_t x2371 = 7151LLU;
	static int64_t x2372 = 3921328266LL;
	uint64_t t31 = 2143LLU;

	t31 = (((x2369<<x2370)*x2371)^x2372);

	if (t31 != 3909225781298LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2413 = 10U;
	static uint32_t x2415 = UINT32_MAX;
	volatile uint32_t x2416 = 10191U;
	uint32_t t32 = 6985U;

	t32 = (((x2413<<x2414)*x2415)^x2416);

	if (t32 != 4294953935U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2433 = 96213639U;
	int32_t x2435 = INT32_MIN;
	static uint16_t x2436 = UINT16_MAX;
	uint32_t t33 = 32261501U;

	t33 = (((x2433<<x2434)*x2435)^x2436);

	if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x2461 = UINT32_MAX;
	static uint32_t x2463 = 1091U;
	static uint64_t x2464 = 1230LLU;
	static volatile uint64_t t34 = 85194269067753164LLU;

	t34 = (((x2461<<x2462)*x2463)^x2464);

	if (t34 != 4294961722LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2525 = UINT64_MAX;
	int8_t x2526 = 22;
	static int8_t x2528 = -1;
	uint64_t t35 = 79LLU;

	t35 = (((x2525<<x2526)*x2527)^x2528);

	if (t35 != 18437736874454810623LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2538 = 21U;
	int8_t x2539 = INT8_MIN;
	volatile int32_t x2540 = 536458915;

	t36 = (((x2537<<x2538)*x2539)^x2540);

	if (t36 != 536458915) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2557 = 6;
	int8_t x2558 = 9;
	int8_t x2560 = 1;
	int32_t t37 = -6053;

	t37 = (((x2557<<x2558)*x2559)^x2560);

	if (t37 != 390145) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2570 = 7U;
	uint64_t x2571 = 10920578417268383LLU;
	int64_t x2572 = -1LL;
	static uint64_t t38 = 163385728653716288LLU;

	t38 = (((x2569<<x2570)*x2571)^x2572);

	if (t38 != 1826872711464679807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2598 = 0;
	static uint8_t x2599 = UINT8_MAX;
	int16_t x2600 = INT16_MIN;

	t39 = (((x2597<<x2598)*x2599)^x2600);

	if (t39 != 32513LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2625 = 146828869590680743LLU;
	uint32_t x2626 = 2U;
	int64_t x2627 = 7LL;
	int64_t x2628 = INT64_MAX;
	volatile uint64_t t40 = 36420550LLU;

	t40 = (((x2625<<x2626)*x2627)^x2628);

	if (t40 != 5112163688315715003LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2677 = 2367569726842LLU;
	uint32_t x2678 = 7U;
	static int8_t x2679 = INT8_MIN;
	uint16_t x2680 = UINT16_MAX;
	volatile uint64_t t41 = 1058344555189373LLU;

	t41 = (((x2677<<x2678)*x2679)^x2680);

	if (t41 != 18407953811304972287LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2717 = 6943170LLU;
	static uint8_t x2718 = 7U;
	volatile int8_t x2719 = -1;
	int8_t x2720 = -4;
	volatile uint64_t t42 = 1977574980LLU;

	t42 = (((x2717<<x2718)*x2719)^x2720);

	if (t42 != 888725756LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x3009 = 3;
	volatile uint32_t x3010 = 13U;
	uint32_t x3011 = 263U;
	int16_t x3012 = INT16_MIN;
	static volatile uint32_t t43 = 27140912U;

	t43 = (((x3009<<x3010)*x3011)^x3012);

	if (t43 != 4288487424U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3061 = 0U;
	volatile int8_t x3062 = 8;
	static int32_t x3063 = INT32_MIN;
	volatile int64_t x3064 = INT64_MIN;
	int64_t t44 = INT64_MIN;

	t44 = (((x3061<<x3062)*x3063)^x3064);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3065 = 27U;
	static uint8_t x3066 = 8U;
	uint8_t x3067 = 15U;
	int8_t x3068 = INT8_MIN;
	int32_t t45 = -6;

	t45 = (((x3065<<x3066)*x3067)^x3068);

	if (t45 != -103808) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3069 = 5610363489LLU;
	static int16_t x3070 = 3;
	uint64_t t46 = 1398240822534LLU;

	t46 = (((x3069<<x3070)*x3071)^x3072);

	if (t46 != 9223371947088959983LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3145 = INT8_MAX;
	int8_t x3146 = 1;
	uint16_t x3147 = 7U;
	uint16_t x3148 = 1509U;
	int32_t t47 = 2486;

	t47 = (((x3145<<x3146)*x3147)^x3148);

	if (t47 != 791) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3301 = UINT32_MAX;
	volatile uint8_t x3302 = 12U;
	uint32_t x3303 = 290432825U;
	static volatile int64_t x3304 = -57022512635764LL;

	t48 = (((x3301<<x3302)*x3303)^x3304);

	if (t48 != -57022453149556LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3329 = 260;
	volatile int8_t x3330 = 1;
	uint32_t x3331 = 1U;
	int8_t x3332 = 1;
	volatile uint32_t t49 = 59178361U;

	t49 = (((x3329<<x3330)*x3331)^x3332);

	if (t49 != 521U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x3442 = 0U;
	int8_t x3443 = 7;
	int16_t x3444 = INT16_MAX;
	static int32_t t50 = -1074651;

	t50 = (((x3441<<x3442)*x3443)^x3444);

	if (t50 != 32760) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3449 = 3642308U;
	int64_t x3452 = 1790LL;
	static int64_t t51 = 12LL;

	t51 = (((x3449<<x3450)*x3451)^x3452);

	if (t51 != 2454600446LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x3673 = 28409LL;
	static uint8_t x3674 = 1U;
	static int16_t x3675 = INT16_MAX;
	volatile uint8_t x3676 = UINT8_MAX;
	static int64_t t52 = 3LL;

	t52 = (((x3673<<x3674)*x3675)^x3676);

	if (t52 != 1861755633LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3701 = 213145413943623LLU;
	static volatile int8_t x3702 = 0;
	volatile uint64_t x3703 = UINT64_MAX;
	int32_t x3704 = INT32_MIN;

	t53 = (((x3701<<x3702)*x3703)^x3704);

	if (t53 != 213145122569913LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3713 = UINT64_MAX;
	int64_t x3714 = 4LL;
	volatile int16_t x3715 = INT16_MIN;
	uint16_t x3716 = 260U;
	static volatile uint64_t t54 = 530659700305896655LLU;

	t54 = (((x3713<<x3714)*x3715)^x3716);

	if (t54 != 524548LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x3789 = 1U;
	volatile uint8_t x3790 = 3U;
	static volatile int8_t x3791 = -1;
	static uint16_t x3792 = 4U;
	int32_t t55 = 66;

	t55 = (((x3789<<x3790)*x3791)^x3792);

	if (t55 != -4) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3873 = 5U;
	uint32_t x3874 = 6U;
	uint32_t x3875 = UINT32_MAX;
	int8_t x3876 = -1;
	volatile uint32_t t56 = 10898U;

	t56 = (((x3873<<x3874)*x3875)^x3876);

	if (t56 != 319U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3913 = 53094850U;
	int32_t x3914 = 1;
	int64_t x3915 = -1LL;
	volatile int64_t t57 = -15619LL;

	t57 = (((x3913<<x3914)*x3915)^x3916);

	if (t57 != -4188777597LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4057 = 29886332U;
	uint16_t x4058 = 0U;
	uint64_t x4060 = 20691LLU;

	t58 = (((x4057<<x4058)*x4059)^x4060);

	if (t58 != 469504723LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4401 = 30133;
	int8_t x4402 = 4;
	uint8_t x4403 = UINT8_MAX;
	static int8_t x4404 = INT8_MIN;
	int32_t t59 = 1757048;

	t59 = (((x4401<<x4402)*x4403)^x4404);

	if (t59 != -122942672) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x4441 = 8;
	static int8_t x4442 = 1;
	int8_t x4443 = 12;
	int32_t x4444 = -1;
	volatile int32_t t60 = -1042063466;

	t60 = (((x4441<<x4442)*x4443)^x4444);

	if (t60 != -193) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x4510 = 8U;
	uint16_t x4511 = 8112U;
	static volatile int16_t x4512 = 20;
	static volatile int32_t t61 = 12;

	t61 = (((x4509<<x4510)*x4511)^x4512);

	if (t61 != 529551380) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4514 = 1;
	static uint32_t x4515 = UINT32_MAX;
	volatile uint64_t x4516 = UINT64_MAX;
	uint64_t t62 = 1532325244609LLU;

	t62 = (((x4513<<x4514)*x4515)^x4516);

	if (t62 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4613 = 9159325LLU;
	volatile uint8_t x4614 = 3U;
	int16_t x4616 = INT16_MIN;
	static uint64_t t63 = 71LLU;

	t63 = (((x4613<<x4614)*x4615)^x4616);

	if (t63 != 18446743442815230672LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4629 = 232U;
	int16_t x4632 = 3;
	static int32_t t64 = 1796;

	t64 = (((x4629<<x4630)*x4631)^x4632);

	if (t64 != -7421) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4805 = UINT8_MAX;
	uint8_t x4806 = 6U;
	int32_t x4808 = INT32_MIN;

	t65 = (((x4805<<x4806)*x4807)^x4808);

	if (t65 != -2143322048) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4905 = UINT16_MAX;
	volatile int16_t x4906 = 1;
	int8_t x4907 = 6;
	static volatile uint32_t x4908 = UINT32_MAX;
	volatile uint32_t t66 = 104426U;

	t66 = (((x4905<<x4906)*x4907)^x4908);

	if (t66 != 4294180875U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4934 = 1U;
	static int64_t x4935 = -1LL;

	t67 = (((x4933<<x4934)*x4935)^x4936);

	if (t67 != -27849203LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4949 = 102159U;
	int8_t x4950 = 2;
	volatile int32_t x4951 = INT32_MAX;
	int64_t t68 = -2296LL;

	t68 = (((x4949<<x4950)*x4951)^x4952);

	if (t68 != -9223372032560217148LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x5027 = INT32_MIN;
	int32_t x5028 = INT32_MAX;
	static uint64_t t69 = 52759473LLU;

	t69 = (((x5025<<x5026)*x5027)^x5028);

	if (t69 != 4584715550101340159LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x5065 = 1960;
	uint8_t x5066 = 1U;
	static volatile int32_t x5068 = -786;
	int32_t t70 = 126864;

	t70 = (((x5065<<x5066)*x5067)^x5068);

	if (t70 != 3166) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x5193 = 6LLU;
	uint16_t x5195 = 0U;
	int8_t x5196 = -1;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x5193<<x5194)*x5195)^x5196);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x5213 = INT8_MAX;
	int16_t x5214 = 0;
	int8_t x5215 = 0;
	volatile int8_t x5216 = INT8_MAX;
	int32_t t72 = 181681;

	t72 = (((x5213<<x5214)*x5215)^x5216);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5277 = 3U;
	volatile int16_t x5278 = 0;
	static volatile uint32_t x5279 = 38405U;
	int8_t x5280 = INT8_MAX;
	uint32_t t73 = 3853U;

	t73 = (((x5277<<x5278)*x5279)^x5280);

	if (t73 != 115312U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5297 = UINT32_MAX;
	int32_t x5299 = INT32_MIN;
	volatile uint64_t t74 = 390446006016843LLU;

	t74 = (((x5297<<x5298)*x5299)^x5300);

	if (t74 != 11330342059415544LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5369 = UINT32_MAX;
	int8_t x5370 = 12;
	static uint32_t t75 = 233U;

	t75 = (((x5369<<x5370)*x5371)^x5372);

	if (t75 != 217U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5385 = 4989U;
	int64_t x5387 = -167LL;
	volatile int64_t t76 = -1024046643039920660LL;

	t76 = (((x5385<<x5386)*x5387)^x5388);

	if (t76 != 6665329LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5445 = 102394433306704341LLU;
	uint16_t x5446 = 0U;
	int16_t x5447 = 6;
	static int64_t x5448 = -1LL;
	volatile uint64_t t77 = 97098835199357LLU;

	t77 = (((x5445<<x5446)*x5447)^x5448);

	if (t77 != 17832377473869325569LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x5513 = 104U;
	uint8_t x5515 = UINT8_MAX;
	volatile uint64_t x5516 = UINT64_MAX;
	uint64_t t78 = 107705338247248LLU;

	t78 = (((x5513<<x5514)*x5515)^x5516);

	if (t78 != 18446744073709498575LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5549 = 56577433181176420LLU;
	volatile uint8_t x5550 = 4U;
	volatile uint64_t t79 = 102891043910586LLU;

	t79 = (((x5549<<x5550)*x5551)^x5552);

	if (t79 != 5LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5633 = 12740815722997030LLU;
	int16_t x5636 = 4521;

	t80 = (((x5633<<x5634)*x5635)^x5636);

	if (t80 != 4521LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x5657 = 1011482537727144LL;
	int8_t x5659 = -8;

	t81 = (((x5657<<x5658)*x5659)^x5660);

	if (t81 != 18187804544051402752LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5701 = 6;
	static volatile uint64_t x5702 = 21LLU;
	volatile int16_t x5703 = -1;
	volatile int32_t x5704 = INT32_MAX;

	t82 = (((x5701<<x5702)*x5703)^x5704);

	if (t82 != -2134900737) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5949 = 9U;
	int32_t x5950 = 0;
	int16_t x5951 = INT16_MIN;
	int8_t x5952 = 11;
	static int32_t t83 = -21766515;

	t83 = (((x5949<<x5950)*x5951)^x5952);

	if (t83 != -294901) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x6125 = 2U;
	int8_t x6126 = 0;
	uint32_t x6127 = UINT32_MAX;
	int64_t x6128 = INT64_MAX;

	t84 = (((x6125<<x6126)*x6127)^x6128);

	if (t84 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6129 = 4648U;
	uint64_t x6130 = 6LLU;
	int32_t x6131 = INT32_MAX;
	volatile int64_t x6132 = INT64_MAX;

	t85 = (((x6129<<x6130)*x6131)^x6132);

	if (t85 != 9223372032560105983LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6138 = 1U;
	volatile uint64_t t86 = 10483165852344001LLU;

	t86 = (((x6137<<x6138)*x6139)^x6140);

	if (t86 != 50575LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6178 = 11U;
	volatile int8_t x6179 = INT8_MAX;
	static volatile int16_t x6180 = -1;

	t87 = (((x6177<<x6178)*x6179)^x6180);

	if (t87 != 260095U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x6213 = 54;
	int16_t x6215 = 327;
	volatile int32_t t88 = -321263641;

	t88 = (((x6213<<x6214)*x6215)^x6216);

	if (t88 != 70637) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6273 = 4140822118LLU;
	static int8_t x6274 = 0;
	uint64_t x6275 = 1946788589LLU;
	static uint32_t x6276 = UINT32_MAX;
	static volatile uint64_t t89 = 5481756265014969LLU;

	t89 = (((x6273<<x6274)*x6275)^x6276);

	if (t89 != 8061305246893064081LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6329 = 4LL;
	volatile uint64_t x6331 = 2555762090LLU;
	int64_t x6332 = INT64_MIN;
	static volatile uint64_t t90 = 531397LLU;

	t90 = (((x6329<<x6330)*x6331)^x6332);

	if (t90 != 16237542261062107136LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x6553 = 1U;
	volatile int8_t x6554 = 22;
	static volatile uint16_t x6555 = 41U;
	int16_t x6556 = INT16_MIN;
	static uint32_t t91 = 1477794U;

	t91 = (((x6553<<x6554)*x6555)^x6556);

	if (t91 != 4122968064U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x6669 = 16319U;
	volatile uint64_t x6670 = 13LLU;
	uint32_t x6671 = UINT32_MAX;
	uint32_t t92 = 1604329965U;

	t92 = (((x6669<<x6670)*x6671)^x6672);

	if (t92 != 4161282175U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6718 = 51U;
	uint16_t x6719 = 331U;
	int32_t x6720 = INT32_MIN;
	static volatile uint64_t t93 = 113316899221991LLU;

	t93 = (((x6717<<x6718)*x6719)^x6720);

	if (t93 != 10133099159436132352LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x6869 = 0U;
	uint64_t x6872 = 811LLU;
	volatile uint64_t t94 = 20373LLU;

	t94 = (((x6869<<x6870)*x6871)^x6872);

	if (t94 != 811LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6881 = 1350836487759800LLU;
	static int8_t x6882 = 0;
	uint32_t x6883 = UINT32_MAX;
	int8_t x6884 = 0;
	uint64_t t95 = 4940937246LLU;

	t95 = (((x6881<<x6882)*x6883)^x6884);

	if (t95 != 2376734175479683144LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6961 = INT8_MAX;
	uint64_t x6962 = 4LLU;
	int64_t x6964 = -1LL;
	volatile int64_t t96 = -2941653862120LL;

	t96 = (((x6961<<x6962)*x6963)^x6964);

	if (t96 != -66582545LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x7173 = 1;
	volatile int8_t x7174 = 1;
	volatile int32_t x7176 = INT32_MIN;
	static int32_t t97 = 0;

	t97 = (((x7173<<x7174)*x7175)^x7176);

	if (t97 != 2147483392) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x7185 = 15793037LLU;
	static uint16_t x7186 = 0U;
	int32_t x7187 = INT32_MIN;
	static volatile uint64_t t98 = 145577547814LLU;

	t98 = (((x7185<<x7186)*x7187)^x7188);

	if (t98 != 18412828784999825407LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x7217 = 12LLU;
	int32_t x7218 = 0;
	int8_t x7219 = 0;
	uint8_t x7220 = 1U;
	static uint64_t t99 = 21471381909796814LLU;

	t99 = (((x7217<<x7218)*x7219)^x7220);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

