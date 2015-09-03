#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x43 = 4U;
uint8_t x70 = 13U;
int8_t x71 = -7;
int32_t x72 = INT32_MIN;
int8_t x159 = -1;
uint8_t x233 = 3U;
static uint8_t x234 = 10U;
int32_t t4 = -5545391;
uint32_t t5 = 4U;
uint8_t x278 = 0U;
uint8_t x347 = UINT8_MAX;
uint64_t t9 = 275206939162LLU;
uint32_t x449 = 2U;
uint16_t x729 = 6U;
volatile int8_t x740 = INT8_MIN;
uint16_t x742 = 3U;
int32_t x743 = -59;
uint16_t x773 = 92U;
int32_t x804 = 851353;
static volatile int32_t t17 = -5829360;
int8_t x827 = -1;
volatile int64_t t19 = -137380216065LL;
static int16_t x941 = INT16_MAX;
int32_t t20 = 44620323;
static uint64_t x1130 = 7LLU;
int16_t x1145 = 1;
int16_t x1146 = 1;
uint32_t x1179 = UINT32_MAX;
static uint64_t t25 = 2823084504544LLU;
int16_t x1307 = INT16_MIN;
uint16_t x1415 = 25U;
int64_t t29 = -7LL;
int64_t x1477 = 68565041330097LL;
uint8_t x1479 = 83U;
static volatile uint64_t t31 = 7495166500610167977LLU;
static int64_t x1523 = INT64_MIN;
uint32_t x1524 = UINT32_MAX;
uint32_t t36 = 10550210U;
int8_t x1857 = 13;
volatile uint8_t x1983 = 90U;
uint8_t x2134 = 2U;
uint32_t x2215 = 362275214U;
volatile uint32_t t40 = 2070461747U;
static volatile int8_t x2408 = -1;
volatile int32_t t42 = 13139;
static uint64_t x2446 = 2LLU;
uint32_t x2495 = 19219U;
uint32_t x2559 = 8U;
static int8_t x2560 = INT8_MIN;
int8_t x2686 = 4;
static uint32_t t48 = 900219U;
uint8_t x2878 = 3U;
int32_t x2879 = INT32_MIN;
int16_t x3086 = 4;
volatile uint32_t t53 = 16033U;
uint64_t x3124 = 6200LLU;
uint8_t x3146 = 0U;
volatile uint8_t x3147 = 23U;
uint32_t x3164 = 972U;
uint64_t t57 = 406637LLU;
static int32_t x3184 = INT32_MIN;
int16_t x3203 = -1;
int8_t x3220 = -1;
uint64_t x3248 = 2387212727LLU;
volatile int64_t x3355 = INT64_MAX;
uint8_t x3362 = 22U;
int32_t x3411 = INT32_MIN;
int32_t x3520 = INT32_MIN;
uint64_t x3565 = 106937853LLU;
uint16_t x3567 = UINT16_MAX;
int64_t x3568 = INT64_MIN;
uint32_t x3569 = UINT32_MAX;
uint8_t x3570 = 8U;
uint8_t x3572 = 1U;
volatile uint32_t t70 = 15575U;
volatile uint64_t t72 = 57240968183082657LLU;
volatile int32_t x3751 = -1;
volatile int8_t x3922 = 0;
static int16_t x3924 = -8;
uint16_t x3958 = 0U;
int32_t x3970 = 10;
static uint32_t x3972 = 6420U;
volatile uint64_t t80 = 4312953913136LLU;
volatile uint8_t x4101 = UINT8_MAX;
uint64_t x4141 = 4145853407240471695LLU;
volatile uint64_t t82 = 47351712965535LLU;
volatile int16_t x4167 = -7261;
static int64_t x4255 = -1LL;
volatile int64_t t84 = 254169648447LL;
int64_t x4536 = 196360817096820LL;
volatile int32_t t87 = 52416;
int8_t x4604 = INT8_MIN;
int8_t x4650 = 3;
int64_t x4651 = 472332087LL;
int64_t x4652 = -1LL;
volatile int64_t t89 = -23LL;
int32_t x4752 = INT32_MIN;
volatile int32_t t90 = -2468;
static int32_t x4911 = 1611479;
uint64_t x4933 = 775673167506052145LLU;
static int8_t x4934 = 0;
int32_t x4936 = -1;
static uint64_t t92 = 1759783480059077LLU;
static int32_t x5190 = 0;
uint64_t t94 = 3LLU;
static int64_t x5263 = INT64_MIN;
static uint64_t t95 = 906LLU;
volatile uint32_t x5269 = 455U;
int16_t x5345 = 110;
static uint8_t x5346 = 20U;
static uint32_t t98 = 59569784U;


void f0(void) {
	int16_t x41 = 1;
	static int16_t x42 = 3;
	int64_t x44 = 763005767872704410LL;
	int64_t t0 = -4LL;

	t0 = ((x41<<x42)*(x43%x44));

	if (t0 != 32LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x69 = 0;
	int32_t t1 = -4928559;

	t1 = ((x69<<x70)*(x71%x72));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x93 = 1U;
	static int8_t x94 = 0;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -350302;
	static int32_t t2 = 1622700;

	t2 = ((x93<<x94)*(x95%x96));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x157 = 159;
	uint16_t x158 = 0U;
	volatile uint32_t x160 = UINT32_MAX;
	volatile uint32_t t3 = 3035U;

	t3 = ((x157<<x158)*(x159%x160));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MAX;

	t4 = ((x233<<x234)*(x235%x236));

	if (t4 != 3072) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x245 = INT32_MAX;
	uint8_t x246 = 0U;
	uint32_t x247 = 11933204U;
	int8_t x248 = INT8_MIN;

	t5 = ((x245<<x246)*(x247%x248));

	if (t5 != 4283034092U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x257 = UINT64_MAX;
	volatile uint8_t x258 = 15U;
	volatile int8_t x259 = INT8_MIN;
	uint64_t x260 = 812317657208514252LLU;
	static uint64_t t6 = 6417756164LLU;

	t6 = ((x257<<x258)*(x259%x260));

	if (t6 != 4659191079378354176LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x277 = 1U;
	int16_t x279 = INT16_MAX;
	static int16_t x280 = 15;
	volatile int32_t t7 = -5;

	t7 = ((x277<<x278)*(x279%x280));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x345 = INT8_MAX;
	int16_t x346 = 0;
	uint16_t x348 = 9U;
	static int32_t t8 = -3;

	t8 = ((x345<<x346)*(x347%x348));

	if (t8 != 381) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x405 = 5852435805806LLU;
	int8_t x406 = 1;
	static volatile int64_t x407 = 51686489973LL;
	static volatile uint16_t x408 = UINT16_MAX;

	t9 = ((x405<<x406)*(x407%x408));

	if (t9 != 216516715071598776LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x450 = 27U;
	static int64_t x451 = INT64_MIN;
	volatile int8_t x452 = INT8_MIN;
	int64_t t10 = -142299LL;

	t10 = ((x449<<x450)*(x451%x452));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x585 = 15U;
	uint32_t x586 = 2U;
	uint32_t x587 = 2533U;
	int16_t x588 = 203;
	volatile uint32_t t11 = 18U;

	t11 = ((x585<<x586)*(x587%x588));

	if (t11 != 5820U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x721 = 3072842618LLU;
	int8_t x722 = 30;
	int64_t x723 = INT64_MIN;
	int16_t x724 = INT16_MIN;
	static volatile uint64_t t12 = 218LLU;

	t12 = ((x721<<x722)*(x723%x724));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x730 = 2;
	static int16_t x731 = INT16_MAX;
	volatile int64_t x732 = 120LL;
	volatile int64_t t13 = 999615100588553736LL;

	t13 = ((x729<<x730)*(x731%x732));

	if (t13 != 168LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x737 = 34U;
	uint32_t x738 = 3U;
	volatile uint8_t x739 = 36U;
	volatile int32_t t14 = -105;

	t14 = ((x737<<x738)*(x739%x740));

	if (t14 != 9792) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x741 = 17558436U;
	int8_t x744 = -52;
	uint32_t t15 = 3921678U;

	t15 = ((x741<<x742)*(x743%x744));

	if (t15 != 3311694880U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x774 = 1U;
	int32_t x775 = INT32_MAX;
	uint16_t x776 = 28U;
	int32_t t16 = -94085;

	t16 = ((x773<<x774)*(x775%x776));

	if (t16 != 2760) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x801 = UINT8_MAX;
	static uint16_t x802 = 8U;
	int32_t x803 = -1;

	t17 = ((x801<<x802)*(x803%x804));

	if (t17 != -65280) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x825 = 47407U;
	int8_t x826 = 7;
	int8_t x828 = INT8_MIN;
	uint32_t t18 = 5843670U;

	t18 = ((x825<<x826)*(x827%x828));

	if (t18 != 4288899200U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x841 = 0;
	int64_t x842 = 1LL;
	static int8_t x843 = -1;
	volatile int64_t x844 = INT64_MIN;

	t19 = ((x841<<x842)*(x843%x844));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x942 = 0;
	static uint8_t x943 = 9U;
	int8_t x944 = INT8_MIN;

	t20 = ((x941<<x942)*(x943%x944));

	if (t20 != 294903) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x969 = 0;
	int8_t x970 = 0;
	uint16_t x971 = 6797U;
	int8_t x972 = INT8_MIN;
	static volatile int32_t t21 = 48194747;

	t21 = ((x969<<x970)*(x971%x972));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1129 = 646536962LLU;
	uint8_t x1131 = 0U;
	int8_t x1132 = INT8_MIN;
	static volatile uint64_t t22 = 362026291882LLU;

	t22 = ((x1129<<x1130)*(x1131%x1132));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1147 = -1;
	int16_t x1148 = -1;
	volatile int32_t t23 = 0;

	t23 = ((x1145<<x1146)*(x1147%x1148));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1177 = 1U;
	volatile uint8_t x1178 = 0U;
	static int64_t x1180 = INT64_MIN;
	volatile int64_t t24 = -3803065913LL;

	t24 = ((x1177<<x1178)*(x1179%x1180));

	if (t24 != 4294967295LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1301 = 80194388051LLU;
	int16_t x1302 = 31;
	int16_t x1303 = INT16_MIN;
	uint32_t x1304 = 1424U;

	t25 = ((x1301<<x1302)*(x1303%x1304));

	if (t25 != 10004363289322061824LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1305 = 0U;
	uint8_t x1306 = 30U;
	volatile int8_t x1308 = INT8_MIN;
	int32_t t26 = 1;

	t26 = ((x1305<<x1306)*(x1307%x1308));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1365 = UINT8_MAX;
	int8_t x1366 = 1;
	uint64_t x1367 = UINT64_MAX;
	static volatile uint8_t x1368 = 52U;
	static volatile uint64_t t27 = 26465011LLU;

	t27 = ((x1365<<x1366)*(x1367%x1368));

	if (t27 != 7650LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1413 = 26379U;
	int16_t x1414 = 1;
	static int16_t x1416 = INT16_MAX;
	int32_t t28 = 3;

	t28 = ((x1413<<x1414)*(x1415%x1416));

	if (t28 != 1318950) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1469 = INT16_MAX;
	static int16_t x1470 = 8;
	int64_t x1471 = INT64_MIN;
	uint8_t x1472 = UINT8_MAX;

	t29 = ((x1469<<x1470)*(x1471%x1472));

	if (t29 != -1073709056LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1478 = 2U;
	static int32_t x1480 = INT32_MIN;
	int64_t t30 = -4LL;

	t30 = ((x1477<<x1478)*(x1479%x1480));

	if (t30 != 22763593721592204LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1481 = 161157104197709657LLU;
	uint8_t x1482 = 2U;
	int32_t x1483 = 992;
	int8_t x1484 = INT8_MIN;

	t31 = ((x1481<<x1482)*(x1483%x1484));

	if (t31 != 6544095790791853440LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1521 = UINT32_MAX;
	int8_t x1522 = 7;
	volatile int64_t t32 = -2094305LL;

	t32 = ((x1521<<x1522)*(x1523%x1524));

	if (t32 != -9223371761976868864LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x1673 = INT8_MAX;
	static volatile uint8_t x1674 = 0U;
	int8_t x1675 = INT8_MIN;
	int8_t x1676 = INT8_MIN;
	int32_t t33 = -533136;

	t33 = ((x1673<<x1674)*(x1675%x1676));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1705 = 1177751782397498926LLU;
	int8_t x1706 = 1;
	uint32_t x1707 = 13767613U;
	uint16_t x1708 = 11827U;
	uint64_t t34 = 6012692272342042520LLU;

	t34 = ((x1705<<x1706)*(x1707%x1708));

	if (t34 != 14328002109378932220LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1781 = INT8_MAX;
	int32_t x1782 = 0;
	static volatile uint8_t x1783 = 27U;
	int16_t x1784 = -2028;
	volatile int32_t t35 = 1225305;

	t35 = ((x1781<<x1782)*(x1783%x1784));

	if (t35 != 3429) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1813 = 22440U;
	uint16_t x1814 = 1U;
	volatile uint32_t x1815 = UINT32_MAX;
	int16_t x1816 = -11;

	t36 = ((x1813<<x1814)*(x1815%x1816));

	if (t36 != 448800U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1858 = 9LL;
	int32_t x1859 = INT32_MIN;
	static volatile uint32_t x1860 = 3386U;
	static volatile uint32_t t37 = 112732959U;

	t37 = ((x1857<<x1858)*(x1859%x1860));

	if (t37 != 7880704U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1981 = 122U;
	int16_t x1982 = 3;
	volatile uint32_t x1984 = 2121038732U;
	uint32_t t38 = 237638U;

	t38 = ((x1981<<x1982)*(x1983%x1984));

	if (t38 != 87840U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2133 = UINT32_MAX;
	uint8_t x2135 = 28U;
	int64_t x2136 = INT64_MIN;
	int64_t t39 = -14060848231LL;

	t39 = ((x2133<<x2134)*(x2135%x2136));

	if (t39 != 120259084176LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2213 = UINT8_MAX;
	int16_t x2214 = 14;
	int8_t x2216 = INT8_MIN;

	t40 = ((x2213<<x2214)*(x2215%x2216));

	if (t40 != 1797029888U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2233 = 782038;
	static uint16_t x2234 = 3U;
	int64_t x2235 = -10477721484519LL;
	int16_t x2236 = INT16_MIN;
	int64_t t41 = -44191499232678891LL;

	t41 = ((x2233<<x2234)*(x2235%x2236));

	if (t41 != -200045320400LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2405 = 47;
	uint8_t x2406 = 22U;
	volatile int8_t x2407 = INT8_MIN;

	t42 = ((x2405<<x2406)*(x2407%x2408));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2445 = UINT64_MAX;
	int16_t x2447 = INT16_MIN;
	static int16_t x2448 = INT16_MIN;
	volatile uint64_t t43 = 186055749944049632LLU;

	t43 = ((x2445<<x2446)*(x2447%x2448));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2493 = INT8_MAX;
	volatile uint16_t x2494 = 21U;
	int64_t x2496 = -3225164LL;
	volatile int64_t t44 = -34111062177113748LL;

	t44 = ((x2493<<x2494)*(x2495%x2496));

	if (t44 != 5118755864576LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2521 = UINT8_MAX;
	uint8_t x2522 = 8U;
	int32_t x2523 = INT32_MIN;
	int64_t x2524 = INT64_MAX;
	static int64_t t45 = -184248LL;

	t45 = ((x2521<<x2522)*(x2523%x2524));

	if (t45 != -140187732541440LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2557 = UINT32_MAX;
	int16_t x2558 = 1;
	static volatile uint32_t t46 = 1U;

	t46 = ((x2557<<x2558)*(x2559%x2560));

	if (t46 != 4294967280U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2685 = UINT64_MAX;
	uint8_t x2687 = 2U;
	static int16_t x2688 = INT16_MAX;
	static volatile uint64_t t47 = 287164234LLU;

	t47 = ((x2685<<x2686)*(x2687%x2688));

	if (t47 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2693 = 32U;
	uint64_t x2694 = 1LLU;
	volatile uint32_t x2695 = 171U;
	static volatile int32_t x2696 = INT32_MIN;

	t48 = ((x2693<<x2694)*(x2695%x2696));

	if (t48 != 10944U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2861 = 244109216835LLU;
	int8_t x2862 = 3;
	int32_t x2863 = -1;
	static int64_t x2864 = INT64_MIN;
	uint64_t t49 = 248332839LLU;

	t49 = ((x2861<<x2862)*(x2863%x2864));

	if (t49 != 18446742120835816936LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2877 = 418893LLU;
	volatile uint64_t x2880 = UINT64_MAX;
	volatile uint64_t t50 = 32655LLU;

	t50 = ((x2877<<x2878)*(x2879%x2880));

	if (t50 != 18439547546767458304LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2921 = UINT16_MAX;
	uint8_t x2922 = 4U;
	int16_t x2923 = 1;
	uint64_t x2924 = UINT64_MAX;
	volatile uint64_t t51 = 1107LLU;

	t51 = ((x2921<<x2922)*(x2923%x2924));

	if (t51 != 1048560LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2941 = 469U;
	int8_t x2942 = 2;
	int8_t x2943 = INT8_MIN;
	int8_t x2944 = INT8_MAX;
	volatile uint32_t t52 = 71449749U;

	t52 = ((x2941<<x2942)*(x2943%x2944));

	if (t52 != 4294965420U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3085 = UINT32_MAX;
	static int16_t x3087 = INT16_MIN;
	static int32_t x3088 = 21413;

	t53 = ((x3085<<x3086)*(x3087%x3088));

	if (t53 != 181680U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3089 = 1;
	int32_t x3090 = 3;
	int32_t x3091 = -788257896;
	static int16_t x3092 = INT16_MIN;
	int32_t t54 = -6579;

	t54 = ((x3089<<x3090)*(x3091%x3092));

	if (t54 != -189248) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3121 = 0U;
	uint8_t x3122 = 1U;
	volatile int64_t x3123 = -280569312LL;
	static volatile uint64_t t55 = 289661595721753008LLU;

	t55 = ((x3121<<x3122)*(x3123%x3124));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3145 = 5454;
	static int16_t x3148 = 1;
	int32_t t56 = 6734650;

	t56 = ((x3145<<x3146)*(x3147%x3148));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3161 = 87LLU;
	uint32_t x3162 = 0U;
	int8_t x3163 = INT8_MAX;

	t57 = ((x3161<<x3162)*(x3163%x3164));

	if (t57 != 11049LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3181 = UINT32_MAX;
	uint16_t x3182 = 6U;
	int64_t x3183 = -453199955LL;
	int64_t t58 = -75531780230537791LL;

	t58 = ((x3181<<x3182)*(x3183%x3184));

	if (t58 != -1946478956268874560LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3201 = 6574998479635374236LLU;
	uint16_t x3202 = 23U;
	int32_t x3204 = 1;
	volatile uint64_t t59 = 296189515490LLU;

	t59 = ((x3201<<x3202)*(x3203%x3204));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3217 = 23LLU;
	int8_t x3218 = 0;
	int8_t x3219 = -1;
	static uint64_t t60 = 24423LLU;

	t60 = ((x3217<<x3218)*(x3219%x3220));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3245 = INT16_MAX;
	int8_t x3246 = 0;
	uint32_t x3247 = 1928380U;
	uint64_t t61 = 407654LLU;

	t61 = ((x3245<<x3246)*(x3247%x3248));

	if (t61 != 63187227460LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3249 = UINT16_MAX;
	uint16_t x3250 = 0U;
	int8_t x3251 = 0;
	uint32_t x3252 = UINT32_MAX;
	volatile uint32_t t62 = 146306076U;

	t62 = ((x3249<<x3250)*(x3251%x3252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3353 = 1726906U;
	uint16_t x3354 = 0U;
	int8_t x3356 = INT8_MIN;
	int64_t t63 = -293942LL;

	t63 = ((x3353<<x3354)*(x3355%x3356));

	if (t63 != 219317062LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3361 = 1U;
	int64_t x3363 = 1790745097683603LL;
	int32_t x3364 = INT32_MAX;
	static volatile int64_t t64 = -1LL;

	t64 = ((x3361<<x3362)*(x3363%x3364));

	if (t64 != 6015148854607872LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3409 = 7992316LLU;
	volatile int8_t x3410 = 3;
	uint8_t x3412 = UINT8_MAX;
	uint64_t t65 = 2939572829392077500LLU;

	t65 = ((x3409<<x3410)*(x3411%x3412));

	if (t65 != 18446744065525420032LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3489 = 9881LLU;
	uint8_t x3490 = 11U;
	volatile int32_t x3491 = -31438698;
	uint64_t x3492 = 138050648617408LLU;
	uint64_t t66 = 5001348001LLU;

	t66 = ((x3489<<x3490)*(x3491%x3492));

	if (t66 != 8708464839912796160LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3517 = 0U;
	int32_t x3518 = 1;
	uint64_t x3519 = 331857896LLU;
	volatile uint64_t t67 = 181LLU;

	t67 = ((x3517<<x3518)*(x3519%x3520));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3541 = 7U;
	static int64_t x3542 = 1LL;
	int8_t x3543 = INT8_MIN;
	static int32_t x3544 = 7333;
	static int32_t t68 = 72;

	t68 = ((x3541<<x3542)*(x3543%x3544));

	if (t68 != -1792) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3566 = 49U;
	uint64_t t69 = 134449944170LLU;

	t69 = ((x3565<<x3566)*(x3567%x3568));

	if (t69 != 9513291262866751488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3571 = -1;

	t70 = ((x3569<<x3570)*(x3571%x3572));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3605 = 0;
	uint16_t x3606 = 6U;
	static int8_t x3607 = -1;
	static volatile int8_t x3608 = -1;
	volatile int32_t t71 = -201;

	t71 = ((x3605<<x3606)*(x3607%x3608));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3689 = 1373224LLU;
	static int32_t x3690 = 1;
	static volatile uint8_t x3691 = 3U;
	int16_t x3692 = -4388;

	t72 = ((x3689<<x3690)*(x3691%x3692));

	if (t72 != 8239344LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3749 = 0U;
	volatile uint8_t x3750 = 2U;
	uint64_t x3752 = UINT64_MAX;
	uint64_t t73 = 15153LLU;

	t73 = ((x3749<<x3750)*(x3751%x3752));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x3769 = 481U;
	volatile uint8_t x3770 = 21U;
	int8_t x3771 = 0;
	static int64_t x3772 = -531167892830369360LL;
	static int64_t t74 = -61625LL;

	t74 = ((x3769<<x3770)*(x3771%x3772));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3833 = UINT64_MAX;
	uint8_t x3834 = 0U;
	volatile uint64_t x3835 = 129909869LLU;
	int16_t x3836 = -44;
	volatile uint64_t t75 = 209LLU;

	t75 = ((x3833<<x3834)*(x3835%x3836));

	if (t75 != 18446744073579641747LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3921 = 9109LLU;
	static uint8_t x3923 = 12U;
	volatile uint64_t t76 = 36558782LLU;

	t76 = ((x3921<<x3922)*(x3923%x3924));

	if (t76 != 36436LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x3957 = 11U;
	int8_t x3959 = -1;
	int32_t x3960 = -43384936;
	static volatile int32_t t77 = -335252133;

	t77 = ((x3957<<x3958)*(x3959%x3960));

	if (t77 != -11) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3969 = 554;
	volatile int16_t x3971 = INT16_MIN;
	volatile uint32_t t78 = 74U;

	t78 = ((x3969<<x3970)*(x3971%x3972));

	if (t78 != 3340238848U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3977 = 8973958U;
	uint8_t x3978 = 2U;
	uint64_t x3979 = UINT64_MAX;
	int32_t x3980 = -1;
	volatile uint64_t t79 = 0LLU;

	t79 = ((x3977<<x3978)*(x3979%x3980));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x4005 = 7386387219941082564LLU;
	static uint16_t x4006 = 3U;
	int8_t x4007 = -1;
	volatile int16_t x4008 = INT16_MIN;

	t80 = ((x4005<<x4006)*(x4007%x4008));

	if (t80 != 14695878535309545952LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4102 = 0;
	static int32_t x4103 = -1364;
	int32_t x4104 = INT32_MAX;
	int32_t t81 = -2316230;

	t81 = ((x4101<<x4102)*(x4103%x4104));

	if (t81 != -347820) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4142 = 1U;
	int16_t x4143 = INT16_MIN;
	int64_t x4144 = INT64_MIN;

	t82 = ((x4141<<x4142)*(x4143%x4144));

	if (t82 != 17891308830142300160LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4165 = UINT64_MAX;
	uint8_t x4166 = 0U;
	volatile int32_t x4168 = INT32_MAX;
	uint64_t t83 = 36370LLU;

	t83 = ((x4165<<x4166)*(x4167%x4168));

	if (t83 != 7261LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4253 = 38U;
	static int8_t x4254 = 3;
	int64_t x4256 = 44054812859287LL;

	t84 = ((x4253<<x4254)*(x4255%x4256));

	if (t84 != -304LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4349 = 508711LLU;
	uint8_t x4350 = 8U;
	static uint32_t x4351 = UINT32_MAX;
	static int16_t x4352 = -7;
	static volatile uint64_t t85 = 8769474681932LLU;

	t85 = ((x4349<<x4350)*(x4351%x4352));

	if (t85 != 781380096LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4533 = 1;
	static uint32_t x4534 = 0U;
	static int64_t x4535 = -1LL;
	volatile int64_t t86 = -102726790501919253LL;

	t86 = ((x4533<<x4534)*(x4535%x4536));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4585 = INT8_MAX;
	uint8_t x4586 = 0U;
	uint16_t x4587 = UINT16_MAX;
	int16_t x4588 = INT16_MIN;

	t87 = ((x4585<<x4586)*(x4587%x4588));

	if (t87 != 4161409) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4601 = 426007251LL;
	int16_t x4602 = 1;
	static volatile int8_t x4603 = 0;
	volatile int64_t t88 = 14979LL;

	t88 = ((x4601<<x4602)*(x4603%x4604));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x4649 = 20LL;

	t89 = ((x4649<<x4650)*(x4651%x4652));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4749 = 2U;
	int8_t x4750 = 3;
	static int32_t x4751 = INT32_MIN;

	t90 = ((x4749<<x4750)*(x4751%x4752));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4909 = 0LL;
	volatile uint8_t x4910 = 4U;
	int64_t x4912 = INT64_MAX;
	static int64_t t91 = 24LL;

	t91 = ((x4909<<x4910)*(x4911%x4912));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4935 = 27510374318LL;

	t92 = ((x4933<<x4934)*(x4935%x4936));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5189 = 2260225225600009LLU;
	uint32_t x5191 = 11551076U;
	uint16_t x5192 = 6439U;
	uint64_t t93 = 4709964511691LLU;

	t93 = ((x5189<<x5190)*(x5191%x5192));

	if (t93 != 13446079867094453541LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5217 = 493150603LLU;
	int8_t x5218 = 3;
	static volatile uint64_t x5219 = 515217LLU;
	int32_t x5220 = -1;

	t94 = ((x5217<<x5218)*(x5219%x5220));

	if (t94 != 2032636593806808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x5261 = INT8_MAX;
	volatile int32_t x5262 = 2;
	uint64_t x5264 = 83640189LLU;

	t95 = ((x5261<<x5262)*(x5263%x5264));

	if (t95 != 9895560092LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5270 = 1U;
	int16_t x5271 = INT16_MIN;
	int16_t x5272 = INT16_MIN;
	uint32_t t96 = 43U;

	t96 = ((x5269<<x5270)*(x5271%x5272));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x5347 = 4U;
	static int64_t x5348 = INT64_MAX;
	volatile int64_t t97 = 3113LL;

	t97 = ((x5345<<x5346)*(x5347%x5348));

	if (t97 != 461373440LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5385 = 152U;
	static volatile int8_t x5386 = 1;
	uint8_t x5387 = 0U;
	uint32_t x5388 = UINT32_MAX;

	t98 = ((x5385<<x5386)*(x5387%x5388));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5485 = UINT16_MAX;
	uint8_t x5486 = 1U;
	uint8_t x5487 = 13U;
	int16_t x5488 = -1;
	volatile int32_t t99 = 90;

	t99 = ((x5485<<x5486)*(x5487%x5488));

	if (t99 != 0) { NG(); } else { ; }
	
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

