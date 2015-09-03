#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x72 = 6;
uint8_t x151 = 10U;
int16_t x257 = 3;
uint64_t x258 = UINT64_MAX;
volatile int32_t t2 = 251;
static uint32_t x309 = 24560360U;
volatile uint64_t x310 = 7227LLU;
static uint64_t x375 = 7152618LLU;
volatile int32_t t5 = 651;
static int64_t x445 = INT64_MIN;
int32_t t9 = 336394;
static int32_t t11 = -7351;
int8_t x729 = -1;
uint32_t x730 = 153U;
uint16_t x777 = UINT16_MAX;
uint32_t x779 = UINT32_MAX;
volatile int32_t x814 = INT32_MAX;
int32_t t16 = 24558709;
volatile uint8_t x856 = 2U;
static int32_t t17 = 5925;
static int8_t x1126 = INT8_MAX;
int32_t t20 = 479995277;
static int8_t x1155 = 26;
volatile int32_t t21 = 98938;
int16_t x1213 = INT16_MIN;
uint8_t x1216 = 4U;
volatile int32_t t22 = -8;
uint32_t x1293 = UINT32_MAX;
static volatile uint8_t x1420 = 1U;
uint16_t x1429 = 4U;
uint32_t x1445 = UINT32_MAX;
static int32_t x1446 = -682377;
int8_t x1448 = 2;
volatile uint8_t x1466 = 56U;
static int32_t x1958 = -1;
int64_t x1959 = 231LL;
int8_t x2010 = INT8_MAX;
int64_t x2165 = INT64_MIN;
static int32_t x2195 = INT32_MAX;
int32_t t38 = 1371391;
uint8_t x2256 = 13U;
volatile int32_t t40 = -9;
uint16_t x2361 = 67U;
static uint32_t x2362 = UINT32_MAX;
int32_t x2363 = 1;
uint8_t x2364 = 4U;
int16_t x2402 = INT16_MIN;
int16_t x2403 = 41;
int16_t x2435 = 354;
static volatile int32_t t43 = -3923976;
int8_t x2458 = INT8_MAX;
static volatile int32_t t44 = -1276;
static volatile uint8_t x2560 = 8U;
uint16_t x2589 = UINT16_MAX;
volatile int32_t t48 = 3;
volatile int32_t t51 = 615308;
int8_t x2801 = -1;
volatile uint16_t x2802 = 15U;
uint32_t x2804 = 1U;
int32_t x2885 = 0;
int32_t t57 = 117;
int32_t x3078 = -1;
uint8_t x3097 = UINT8_MAX;
uint32_t x3099 = 3057U;
static uint8_t x3100 = 0U;
static uint32_t x3113 = 225338214U;
int64_t x3165 = -2070533276LL;
int32_t x3225 = INT32_MIN;
int64_t x3226 = INT64_MIN;
int8_t x3284 = 1;
volatile int16_t x3529 = -2186;
volatile int32_t t68 = 705164357;
uint8_t x3744 = 1U;
volatile int16_t x3857 = INT16_MIN;
int16_t x3858 = -1;
static int16_t x3958 = -21;
volatile uint16_t x3960 = 3U;
uint8_t x4129 = 2U;
int32_t t79 = -75535576;
static volatile int32_t t81 = -15724485;
volatile uint8_t x4457 = 0U;
static volatile int64_t x4493 = 0LL;
int32_t t84 = -93648459;
int32_t t85 = 211325;
volatile int32_t t88 = -2;
int16_t x4678 = 0;
int8_t x4680 = 0;
int16_t x4734 = 166;
int8_t x4736 = 1;
int32_t x4765 = INT32_MAX;
volatile uint32_t x4825 = UINT32_MAX;
int16_t x4917 = INT16_MAX;
volatile int32_t x4919 = 1566;
uint8_t x4925 = 48U;
uint64_t x4927 = 1867207918681844LLU;
static int8_t x4929 = 6;
int32_t x4930 = INT32_MAX;
volatile int32_t t95 = -4085864;
int16_t x4955 = INT16_MAX;
int16_t x5089 = -1;
int64_t x5091 = INT64_MAX;
int16_t x5113 = INT16_MIN;
static uint64_t x5114 = UINT64_MAX;
int8_t x5129 = INT8_MAX;
static uint8_t x5131 = 49U;


void f0(void) {
	static uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MAX;
	int32_t x71 = 94928033;
	static int32_t t0 = -40288754;

	t0 = (x69<=(x70&(x71>>x72)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x149 = 3U;
	int8_t x150 = INT8_MIN;
	volatile uint8_t x152 = 9U;
	volatile int32_t t1 = 19;

	t1 = (x149<=(x150&(x151>>x152)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x259 = 239U;
	uint8_t x260 = 2U;

	t2 = (x257<=(x258&(x259>>x260)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 0U;
	volatile int32_t t3 = 30011;

	t3 = (x309<=(x310&(x311>>x312)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x333 = -208;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = 61471637U;
	static uint8_t x336 = 7U;
	int32_t t4 = -2200807;

	t4 = (x333<=(x334&(x335>>x336)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x373 = 4031801935071917LLU;
	volatile int32_t x374 = INT32_MIN;
	int8_t x376 = 1;

	t5 = (x373<=(x374&(x375>>x376)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x446 = INT64_MIN;
	uint32_t x447 = 673934435U;
	uint8_t x448 = 3U;
	static volatile int32_t t6 = -360308;

	t6 = (x445<=(x446&(x447>>x448)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x453 = 686292243526948LLU;
	int16_t x454 = -1;
	static int16_t x455 = 6;
	uint8_t x456 = 8U;
	int32_t t7 = -3;

	t7 = (x453<=(x454&(x455>>x456)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x481 = -19;
	static volatile int16_t x482 = INT16_MAX;
	uint32_t x483 = 10U;
	int8_t x484 = 5;
	volatile int32_t t8 = -46;

	t8 = (x481<=(x482&(x483>>x484)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x605 = -1194;
	uint32_t x606 = 3875U;
	static int8_t x607 = INT8_MAX;
	volatile int16_t x608 = 1;

	t9 = (x605<=(x606&(x607>>x608)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;
	uint16_t x635 = UINT16_MAX;
	int8_t x636 = 11;
	int32_t t10 = 0;

	t10 = (x633<=(x634&(x635>>x636)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x637 = 606U;
	int32_t x638 = INT32_MIN;
	uint16_t x639 = 2427U;
	int64_t x640 = 1LL;

	t11 = (x637<=(x638&(x639>>x640)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x701 = -1;
	int32_t x702 = -1;
	static uint16_t x703 = 31968U;
	volatile uint8_t x704 = 2U;
	int32_t t12 = -196990048;

	t12 = (x701<=(x702&(x703>>x704)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x731 = UINT64_MAX;
	int8_t x732 = 25;
	volatile int32_t t13 = 3;

	t13 = (x729<=(x730&(x731>>x732)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x765 = UINT64_MAX;
	int32_t x766 = INT32_MIN;
	static uint32_t x767 = 57U;
	static uint8_t x768 = 11U;
	static volatile int32_t t14 = 3;

	t14 = (x765<=(x766&(x767>>x768)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x778 = 1U;
	static volatile uint8_t x780 = 13U;
	int32_t t15 = -54;

	t15 = (x777<=(x778&(x779>>x780)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x813 = 1699U;
	int16_t x815 = 3936;
	int8_t x816 = 1;

	t16 = (x813<=(x814&(x815>>x816)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x853 = 29529U;
	int8_t x854 = INT8_MIN;
	int32_t x855 = INT32_MAX;

	t17 = (x853<=(x854&(x855>>x856)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x873 = 16364U;
	volatile int64_t x874 = INT64_MIN;
	uint8_t x875 = UINT8_MAX;
	volatile uint32_t x876 = 3U;
	int32_t t18 = -120721;

	t18 = (x873<=(x874&(x875>>x876)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x961 = INT8_MIN;
	uint8_t x962 = 112U;
	uint64_t x963 = 27623695932704638LLU;
	uint16_t x964 = 13U;
	int32_t t19 = 1;

	t19 = (x961<=(x962&(x963>>x964)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x1125 = 43U;
	uint32_t x1127 = 70057U;
	uint16_t x1128 = 3U;

	t20 = (x1125<=(x1126&(x1127>>x1128)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1153 = -584;
	int32_t x1154 = INT32_MAX;
	volatile uint8_t x1156 = 1U;

	t21 = (x1153<=(x1154&(x1155>>x1156)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1214 = INT16_MIN;
	volatile uint8_t x1215 = UINT8_MAX;

	t22 = (x1213<=(x1214&(x1215>>x1216)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1217 = -1;
	static uint16_t x1218 = 24U;
	int64_t x1219 = 20118722LL;
	volatile uint8_t x1220 = 2U;
	static volatile int32_t t23 = -90;

	t23 = (x1217<=(x1218&(x1219>>x1220)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1294 = INT8_MAX;
	static volatile uint32_t x1295 = 5U;
	uint16_t x1296 = 1U;
	volatile int32_t t24 = -12;

	t24 = (x1293<=(x1294&(x1295>>x1296)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1377 = INT32_MAX;
	uint16_t x1378 = UINT16_MAX;
	uint64_t x1379 = 5323531880055793003LLU;
	uint32_t x1380 = 2U;
	int32_t t25 = -183;

	t25 = (x1377<=(x1378&(x1379>>x1380)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1417 = UINT8_MAX;
	uint64_t x1418 = 4750248LLU;
	int32_t x1419 = 130975;
	static volatile int32_t t26 = 1185;

	t26 = (x1417<=(x1418&(x1419>>x1420)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1430 = -1LL;
	uint8_t x1431 = 47U;
	volatile int32_t x1432 = 1;
	int32_t t27 = 1;

	t27 = (x1429<=(x1430&(x1431>>x1432)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1447 = INT8_MAX;
	static volatile int32_t t28 = 2;

	t28 = (x1445<=(x1446&(x1447>>x1448)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1465 = 8U;
	uint64_t x1467 = UINT64_MAX;
	static uint16_t x1468 = 3U;
	volatile int32_t t29 = 260;

	t29 = (x1465<=(x1466&(x1467>>x1468)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1661 = 55U;
	uint16_t x1662 = 0U;
	uint8_t x1663 = UINT8_MAX;
	uint8_t x1664 = 15U;
	int32_t t30 = 945053201;

	t30 = (x1661<=(x1662&(x1663>>x1664)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1833 = -1;
	uint8_t x1834 = 63U;
	uint32_t x1835 = UINT32_MAX;
	int8_t x1836 = 0;
	volatile int32_t t31 = -7212895;

	t31 = (x1833<=(x1834&(x1835>>x1836)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1941 = INT16_MAX;
	static int8_t x1942 = -1;
	volatile int8_t x1943 = INT8_MAX;
	volatile uint8_t x1944 = 15U;
	int32_t t32 = -29813649;

	t32 = (x1941<=(x1942&(x1943>>x1944)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1953 = 460690308110LLU;
	int8_t x1954 = INT8_MAX;
	static int32_t x1955 = INT32_MAX;
	int16_t x1956 = 1;
	int32_t t33 = -31697;

	t33 = (x1953<=(x1954&(x1955>>x1956)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1957 = 136727U;
	volatile uint16_t x1960 = 30U;
	volatile int32_t t34 = 28964;

	t34 = (x1957<=(x1958&(x1959>>x1960)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2005 = INT32_MAX;
	volatile int64_t x2006 = INT64_MAX;
	uint16_t x2007 = UINT16_MAX;
	uint8_t x2008 = 22U;
	int32_t t35 = -11046;

	t35 = (x2005<=(x2006&(x2007>>x2008)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2009 = -72301411;
	uint32_t x2011 = 11U;
	uint8_t x2012 = 13U;
	volatile int32_t t36 = 235512;

	t36 = (x2009<=(x2010&(x2011>>x2012)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2166 = INT16_MIN;
	uint64_t x2167 = 261117848948262459LLU;
	int16_t x2168 = 61;
	volatile int32_t t37 = -454410600;

	t37 = (x2165<=(x2166&(x2167>>x2168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2193 = INT64_MIN;
	volatile int64_t x2194 = INT64_MAX;
	uint32_t x2196 = 21U;

	t38 = (x2193<=(x2194&(x2195>>x2196)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2253 = UINT16_MAX;
	volatile int32_t x2254 = 278611765;
	volatile uint32_t x2255 = 34614955U;
	volatile int32_t t39 = -5747;

	t39 = (x2253<=(x2254&(x2255>>x2256)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2357 = -15222LL;
	static int16_t x2358 = INT16_MIN;
	int32_t x2359 = INT32_MAX;
	volatile uint8_t x2360 = 3U;

	t40 = (x2357<=(x2358&(x2359>>x2360)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t t41 = 98233225;

	t41 = (x2361<=(x2362&(x2363>>x2364)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2401 = 1028788057053200401LLU;
	uint16_t x2404 = 7U;
	int32_t t42 = -144557;

	t42 = (x2401<=(x2402&(x2403>>x2404)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x2433 = UINT8_MAX;
	uint16_t x2434 = UINT16_MAX;
	int32_t x2436 = 1;

	t43 = (x2433<=(x2434&(x2435>>x2436)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2457 = 109U;
	int8_t x2459 = 2;
	uint8_t x2460 = 1U;

	t44 = (x2457<=(x2458&(x2459>>x2460)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x2465 = INT32_MIN;
	int16_t x2466 = 0;
	uint16_t x2467 = UINT16_MAX;
	uint64_t x2468 = 2LLU;
	volatile int32_t t45 = -8;

	t45 = (x2465<=(x2466&(x2467>>x2468)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x2557 = UINT16_MAX;
	int16_t x2558 = INT16_MIN;
	int32_t x2559 = 102490103;
	int32_t t46 = 23;

	t46 = (x2557<=(x2558&(x2559>>x2560)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2573 = INT32_MAX;
	static int16_t x2574 = 1236;
	int32_t x2575 = 1;
	uint8_t x2576 = 5U;
	volatile int32_t t47 = -2943044;

	t47 = (x2573<=(x2574&(x2575>>x2576)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2590 = 4274289689039LLU;
	uint64_t x2591 = UINT64_MAX;
	volatile uint8_t x2592 = 6U;

	t48 = (x2589<=(x2590&(x2591>>x2592)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2609 = INT16_MAX;
	static uint16_t x2610 = UINT16_MAX;
	volatile int32_t x2611 = 124625;
	int64_t x2612 = 2LL;
	static volatile int32_t t49 = 890;

	t49 = (x2609<=(x2610&(x2611>>x2612)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2657 = 214;
	static volatile int32_t x2658 = -1;
	static uint64_t x2659 = UINT64_MAX;
	static uint32_t x2660 = 2U;
	static volatile int32_t t50 = 42548439;

	t50 = (x2657<=(x2658&(x2659>>x2660)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2701 = 3130U;
	int16_t x2702 = -1;
	volatile uint32_t x2703 = 228U;
	static int8_t x2704 = 3;

	t51 = (x2701<=(x2702&(x2703>>x2704)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2717 = UINT64_MAX;
	int64_t x2718 = INT64_MIN;
	int16_t x2719 = 0;
	uint8_t x2720 = 3U;
	volatile int32_t t52 = 18918;

	t52 = (x2717<=(x2718&(x2719>>x2720)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2803 = 31263U;
	volatile int32_t t53 = 2967;

	t53 = (x2801<=(x2802&(x2803>>x2804)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x2853 = INT64_MIN;
	int32_t x2854 = INT32_MAX;
	static uint8_t x2855 = 84U;
	int16_t x2856 = 11;
	volatile int32_t t54 = 1018;

	t54 = (x2853<=(x2854&(x2855>>x2856)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2886 = INT8_MAX;
	int16_t x2887 = 2476;
	uint8_t x2888 = 22U;
	volatile int32_t t55 = -124;

	t55 = (x2885<=(x2886&(x2887>>x2888)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2985 = INT32_MAX;
	static int16_t x2986 = INT16_MIN;
	int64_t x2987 = INT64_MAX;
	uint8_t x2988 = 36U;
	int32_t t56 = -164;

	t56 = (x2985<=(x2986&(x2987>>x2988)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3017 = INT16_MIN;
	static int8_t x3018 = 1;
	uint64_t x3019 = 21455098461LLU;
	uint32_t x3020 = 13U;

	t57 = (x3017<=(x3018&(x3019>>x3020)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3077 = -13LL;
	volatile int16_t x3079 = 246;
	int16_t x3080 = 31;
	int32_t t58 = 89911524;

	t58 = (x3077<=(x3078&(x3079>>x3080)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3098 = 506393986LLU;
	static int32_t t59 = -259689910;

	t59 = (x3097<=(x3098&(x3099>>x3100)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3114 = -1;
	uint8_t x3115 = 3U;
	static uint8_t x3116 = 5U;
	volatile int32_t t60 = -1411005;

	t60 = (x3113<=(x3114&(x3115>>x3116)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3166 = INT8_MIN;
	int32_t x3167 = INT32_MAX;
	uint8_t x3168 = 23U;
	volatile int32_t t61 = -21787;

	t61 = (x3165<=(x3166&(x3167>>x3168)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3227 = 44;
	int8_t x3228 = 21;
	static volatile int32_t t62 = 0;

	t62 = (x3225<=(x3226&(x3227>>x3228)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x3269 = UINT32_MAX;
	int64_t x3270 = INT64_MIN;
	uint64_t x3271 = 78725LLU;
	int32_t x3272 = 0;
	volatile int32_t t63 = -7507961;

	t63 = (x3269<=(x3270&(x3271>>x3272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3281 = -48;
	int16_t x3282 = INT16_MIN;
	uint8_t x3283 = 44U;
	static volatile int32_t t64 = 132;

	t64 = (x3281<=(x3282&(x3283>>x3284)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3385 = 2180910106245LLU;
	static int64_t x3386 = 13174517531348LL;
	volatile uint16_t x3387 = UINT16_MAX;
	static uint16_t x3388 = 28U;
	volatile int32_t t65 = 1486;

	t65 = (x3385<=(x3386&(x3387>>x3388)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3425 = 3U;
	volatile int8_t x3426 = 51;
	static int16_t x3427 = INT16_MAX;
	uint16_t x3428 = 6U;
	volatile int32_t t66 = 259470;

	t66 = (x3425<=(x3426&(x3427>>x3428)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3530 = UINT16_MAX;
	int64_t x3531 = INT64_MAX;
	uint8_t x3532 = 59U;
	int32_t t67 = 30582;

	t67 = (x3529<=(x3530&(x3531>>x3532)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x3565 = 7000348;
	uint8_t x3566 = 1U;
	uint16_t x3567 = 0U;
	static uint16_t x3568 = 1U;

	t68 = (x3565<=(x3566&(x3567>>x3568)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3725 = 20355968691LLU;
	int16_t x3726 = -1;
	uint8_t x3727 = UINT8_MAX;
	uint8_t x3728 = 8U;
	static int32_t t69 = 4454;

	t69 = (x3725<=(x3726&(x3727>>x3728)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3741 = -1;
	static int8_t x3742 = INT8_MIN;
	int64_t x3743 = 31321630142404LL;
	int32_t t70 = -1560405;

	t70 = (x3741<=(x3742&(x3743>>x3744)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3859 = 0;
	static uint16_t x3860 = 1U;
	volatile int32_t t71 = 2329;

	t71 = (x3857<=(x3858&(x3859>>x3860)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x3957 = UINT64_MAX;
	static uint8_t x3959 = 5U;
	int32_t t72 = 13;

	t72 = (x3957<=(x3958&(x3959>>x3960)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4005 = INT16_MIN;
	uint8_t x4006 = UINT8_MAX;
	uint8_t x4007 = 49U;
	static int32_t x4008 = 1;
	int32_t t73 = -470;

	t73 = (x4005<=(x4006&(x4007>>x4008)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x4130 = 10810110LLU;
	uint16_t x4131 = 11U;
	int16_t x4132 = 6;
	int32_t t74 = -755401669;

	t74 = (x4129<=(x4130&(x4131>>x4132)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4153 = 5142305U;
	volatile int32_t x4154 = -1;
	uint32_t x4155 = 122621U;
	static volatile uint16_t x4156 = 1U;
	int32_t t75 = 613;

	t75 = (x4153<=(x4154&(x4155>>x4156)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4253 = INT8_MIN;
	int16_t x4254 = INT16_MAX;
	uint32_t x4255 = 53407395U;
	volatile int16_t x4256 = 1;
	int32_t t76 = -2116566;

	t76 = (x4253<=(x4254&(x4255>>x4256)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4281 = 5244U;
	static int32_t x4282 = -1;
	uint32_t x4283 = UINT32_MAX;
	static uint8_t x4284 = 0U;
	volatile int32_t t77 = -138836585;

	t77 = (x4281<=(x4282&(x4283>>x4284)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x4341 = -1150;
	uint16_t x4342 = 7714U;
	uint64_t x4343 = UINT64_MAX;
	uint32_t x4344 = 24U;
	static int32_t t78 = -262797175;

	t78 = (x4341<=(x4342&(x4343>>x4344)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x4405 = INT32_MIN;
	int8_t x4406 = INT8_MIN;
	int64_t x4407 = 546448464051473LL;
	uint32_t x4408 = 7U;

	t79 = (x4405<=(x4406&(x4407>>x4408)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4409 = -1LL;
	volatile uint32_t x4410 = 874U;
	static int8_t x4411 = 0;
	volatile uint8_t x4412 = 13U;
	int32_t t80 = 71004683;

	t80 = (x4409<=(x4410&(x4411>>x4412)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4429 = 1;
	static uint32_t x4430 = UINT32_MAX;
	uint32_t x4431 = 406635604U;
	static uint64_t x4432 = 4LLU;

	t81 = (x4429<=(x4430&(x4431>>x4432)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x4453 = -1405256;
	int8_t x4454 = 1;
	volatile int8_t x4455 = INT8_MAX;
	int8_t x4456 = 2;
	static int32_t t82 = -724426;

	t82 = (x4453<=(x4454&(x4455>>x4456)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4458 = INT8_MIN;
	int32_t x4459 = INT32_MAX;
	uint8_t x4460 = 21U;
	int32_t t83 = -8;

	t83 = (x4457<=(x4458&(x4459>>x4460)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4494 = INT16_MIN;
	static int32_t x4495 = 175298883;
	uint8_t x4496 = 13U;

	t84 = (x4493<=(x4494&(x4495>>x4496)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4505 = INT32_MAX;
	uint32_t x4506 = 6207U;
	uint64_t x4507 = UINT64_MAX;
	int8_t x4508 = 1;

	t85 = (x4505<=(x4506&(x4507>>x4508)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4509 = 0U;
	uint64_t x4510 = 1990LLU;
	volatile uint8_t x4511 = 54U;
	volatile uint8_t x4512 = 9U;
	volatile int32_t t86 = -6;

	t86 = (x4509<=(x4510&(x4511>>x4512)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4525 = INT64_MIN;
	static volatile int8_t x4526 = INT8_MIN;
	static int16_t x4527 = INT16_MAX;
	int16_t x4528 = 1;
	int32_t t87 = -86539;

	t87 = (x4525<=(x4526&(x4527>>x4528)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4557 = -1;
	int64_t x4558 = INT64_MIN;
	static int16_t x4559 = 28;
	uint8_t x4560 = 3U;

	t88 = (x4557<=(x4558&(x4559>>x4560)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x4677 = 2U;
	uint16_t x4679 = 1976U;
	int32_t t89 = 3;

	t89 = (x4677<=(x4678&(x4679>>x4680)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4733 = UINT8_MAX;
	uint64_t x4735 = UINT64_MAX;
	volatile int32_t t90 = -463435;

	t90 = (x4733<=(x4734&(x4735>>x4736)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x4766 = INT64_MIN;
	uint32_t x4767 = UINT32_MAX;
	uint8_t x4768 = 21U;
	volatile int32_t t91 = -14;

	t91 = (x4765<=(x4766&(x4767>>x4768)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4826 = INT16_MIN;
	volatile uint32_t x4827 = 118061759U;
	int16_t x4828 = 0;
	volatile int32_t t92 = -6934;

	t92 = (x4825<=(x4826&(x4827>>x4828)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4918 = INT64_MIN;
	static uint8_t x4920 = 5U;
	static int32_t t93 = -30142553;

	t93 = (x4917<=(x4918&(x4919>>x4920)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4926 = 13LL;
	static int16_t x4928 = 1;
	volatile int32_t t94 = 423328570;

	t94 = (x4925<=(x4926&(x4927>>x4928)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4931 = INT16_MAX;
	volatile uint8_t x4932 = 6U;

	t95 = (x4929<=(x4930&(x4931>>x4932)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x4953 = -9;
	int32_t x4954 = INT32_MIN;
	uint32_t x4956 = 9U;
	int32_t t96 = 0;

	t96 = (x4953<=(x4954&(x4955>>x4956)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5090 = INT8_MIN;
	volatile uint32_t x5092 = 2U;
	static volatile int32_t t97 = 55415539;

	t97 = (x5089<=(x5090&(x5091>>x5092)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x5115 = 19U;
	volatile uint8_t x5116 = 22U;
	static int32_t t98 = 127045095;

	t98 = (x5113<=(x5114&(x5115>>x5116)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x5130 = INT16_MAX;
	uint8_t x5132 = 15U;
	volatile int32_t t99 = 214487;

	t99 = (x5129<=(x5130&(x5131>>x5132)));

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

