#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
static int16_t x4 = 1;
int16_t x39 = 0;
int16_t x75 = INT16_MAX;
static int8_t x76 = 21;
int32_t t3 = 36991;
volatile int8_t x139 = INT8_MIN;
uint32_t t5 = 636705067U;
int64_t x152 = 1LL;
volatile uint32_t t7 = 3882U;
int16_t x183 = 63;
static uint32_t x209 = 15946338U;
int8_t x237 = -62;
static volatile uint64_t t10 = 42131503977082028LLU;
int32_t x245 = INT32_MIN;
int64_t x246 = INT64_MAX;
volatile int32_t x247 = INT32_MIN;
volatile int32_t x305 = INT32_MAX;
uint8_t x308 = 12U;
int32_t x331 = 5045;
int32_t x332 = 29;
static int32_t x357 = -5;
uint16_t x360 = 7U;
volatile int64_t x385 = INT64_MIN;
static int8_t x393 = -1;
int8_t x394 = INT8_MIN;
volatile int32_t t18 = 6754979;
int8_t x500 = 1;
int64_t t22 = 4952843776708LL;
uint64_t x583 = 407742622977075931LLU;
uint16_t x619 = UINT16_MAX;
uint64_t x622 = 5794333155LLU;
uint64_t x625 = UINT64_MAX;
uint16_t x673 = 1U;
int8_t x676 = 16;
volatile int32_t t29 = -2262;
uint16_t x734 = 467U;
int64_t x813 = 12739021LL;
static int64_t t33 = -439058LL;
int64_t t34 = 16500768481354LL;
int64_t x862 = INT64_MIN;
static int32_t x866 = 165647734;
int32_t x868 = 0;
volatile uint16_t x880 = 0U;
static uint64_t t38 = 978586LLU;
uint16_t x882 = UINT16_MAX;
int64_t x883 = 3857623783748444782LL;
volatile uint8_t x884 = 2U;
int64_t x935 = INT64_MIN;
int64_t t40 = -12LL;
static uint64_t x950 = 276198101218096132LLU;
uint64_t x952 = 14LLU;
int16_t x965 = 11044;
int64_t x979 = -1LL;
volatile uint8_t x981 = 70U;
static int64_t x982 = -1LL;
int64_t x986 = 35156LL;
int16_t x988 = 0;
volatile uint64_t t46 = 2008852110839440LLU;
int16_t x1033 = -1;
static volatile int32_t t47 = 226474;
uint8_t x1105 = 3U;
int8_t x1108 = 2;
volatile int64_t t50 = -5116854127084LL;
volatile int64_t x1314 = INT64_MAX;
volatile int64_t t52 = 2950956LL;
uint8_t x1336 = 2U;
uint16_t x1353 = 103U;
uint8_t x1452 = 4U;
uint16_t x1459 = 21U;
int8_t x1460 = 0;
volatile uint64_t t59 = 5542LLU;
int8_t x1465 = INT8_MIN;
uint64_t x1506 = 26259931566LLU;
static volatile int16_t x1533 = -1;
static uint16_t x1534 = UINT16_MAX;
int8_t x1658 = INT8_MAX;
volatile int64_t x1703 = INT64_MIN;
int32_t x1704 = 1;
int32_t x1809 = INT32_MIN;
int8_t x1861 = -1;
volatile uint64_t t67 = UINT64_MAX;
uint32_t x1889 = 7250757U;
int64_t t71 = -179LL;
int64_t x1962 = INT64_MIN;
int8_t x1965 = 0;
int32_t t73 = -5648;
static uint64_t t74 = 875889433LLU;
int16_t x2109 = INT16_MAX;
volatile int64_t x2110 = -1LL;
static uint16_t x2156 = 36U;
volatile int32_t t83 = 702402;
uint64_t x2250 = 16955110568981LLU;
uint64_t x2257 = 270696034LLU;
static volatile int32_t x2285 = -1;
static volatile int64_t t87 = -39LL;
uint8_t x2344 = 7U;
int32_t x2374 = -1;
uint64_t x2375 = 129651163LLU;
int16_t x2473 = -949;
volatile int32_t x2525 = 316444;
int16_t x2527 = -101;
int16_t x2531 = INT16_MIN;
int8_t x2545 = 9;
volatile uint64_t t95 = 1519908892LLU;
uint64_t t97 = UINT64_MAX;
uint8_t x2656 = 2U;


void f0(void) {
	uint8_t x1 = 9U;
	static uint64_t x3 = UINT64_MAX;
	volatile uint64_t t0 = 1939912LLU;

	t0 = (x1|((x2&x3)>>x4));

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x37 = 11936LLU;
	int64_t x38 = INT64_MIN;
	uint8_t x40 = 21U;
	uint64_t t1 = 216940084LLU;

	t1 = (x37|((x38&x39)>>x40));

	if (t1 != 11936LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x73 = 3U;
	int8_t x74 = 12;
	int32_t t2 = -23361460;

	t2 = (x73|((x74&x75)>>x76));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x89 = INT16_MAX;
	volatile int8_t x90 = -1;
	uint8_t x91 = 1U;
	static uint8_t x92 = 6U;

	t3 = (x89|((x90&x91)>>x92));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x97 = INT64_MAX;
	static int16_t x98 = 0;
	uint32_t x99 = 344940312U;
	uint32_t x100 = 3U;
	int64_t t4 = INT64_MAX;

	t4 = (x97|((x98&x99)>>x100));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x137 = 35774367;
	uint32_t x138 = UINT32_MAX;
	int16_t x140 = 31;

	t5 = (x137|((x138&x139)>>x140));

	if (t5 != 35774367U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x141 = 9U;
	volatile uint8_t x142 = 67U;
	uint16_t x143 = 1222U;
	uint16_t x144 = 1U;
	static int32_t t6 = 121;

	t6 = (x141|((x142&x143)>>x144));

	if (t6 != 41) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x149 = INT32_MIN;
	volatile uint32_t x150 = 5U;
	uint16_t x151 = UINT16_MAX;

	t7 = (x149|((x150&x151)>>x152));

	if (t7 != 2147483650U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MIN;
	uint64_t x184 = 6LLU;
	int64_t t8 = INT64_MAX;

	t8 = (x181|((x182&x183)>>x184));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x210 = 14U;
	int8_t x211 = INT8_MAX;
	int8_t x212 = 0;
	volatile uint32_t t9 = 1455927U;

	t9 = (x209|((x210&x211)>>x212));

	if (t9 != 15946350U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x238 = 4993568LLU;
	static uint32_t x239 = UINT32_MAX;
	int16_t x240 = 9;

	t10 = (x237|((x238&x239)>>x240));

	if (t10 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x248 = 48;
	static int64_t t11 = 2921LL;

	t11 = (x245|((x246&x247)>>x248));

	if (t11 != -2147450881LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x306 = 10963763740586LLU;
	int64_t x307 = INT64_MAX;
	volatile uint64_t t12 = 1LLU;

	t12 = (x305|((x306&x307)>>x308));

	if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x329 = 120084701U;
	int32_t x330 = INT32_MIN;
	volatile uint32_t t13 = 23256U;

	t13 = (x329|((x330&x331)>>x332));

	if (t13 != 120084701U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x358 = INT64_MAX;
	uint32_t x359 = UINT32_MAX;
	volatile int64_t t14 = 1922543764252674427LL;

	t14 = (x357|((x358&x359)>>x360));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x361 = UINT64_MAX;
	static volatile int32_t x362 = -1137;
	static int32_t x363 = INT32_MAX;
	int8_t x364 = 0;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x361|((x362&x363)>>x364));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x386 = INT32_MIN;
	static uint64_t x387 = 1192189809000LLU;
	static uint8_t x388 = 18U;
	uint64_t t16 = 7172411175LLU;

	t16 = (x385|((x386&x387)>>x388));

	if (t16 != 9223372036859322368LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 12LLU;
	static volatile uint64_t t17 = UINT64_MAX;

	t17 = (x393|((x394&x395)>>x396));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x469 = 13;
	volatile int8_t x470 = 1;
	int8_t x471 = 13;
	int16_t x472 = 7;

	t18 = (x469|((x470&x471)>>x472));

	if (t18 != 13) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x497 = -1;
	int16_t x498 = -1;
	static int32_t x499 = INT32_MAX;
	int32_t t19 = 30871809;

	t19 = (x497|((x498&x499)>>x500));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x509 = 86067153U;
	int8_t x510 = -1;
	int8_t x511 = INT8_MAX;
	uint8_t x512 = 8U;
	uint32_t t20 = 15739200U;

	t20 = (x509|((x510&x511)>>x512));

	if (t20 != 86067153U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x525 = UINT64_MAX;
	volatile int64_t x526 = -10041LL;
	uint64_t x527 = 904836444845129132LLU;
	static uint8_t x528 = 38U;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (x525|((x526&x527)>>x528));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x577 = -1LL;
	uint16_t x578 = 3U;
	volatile uint32_t x579 = UINT32_MAX;
	uint8_t x580 = 10U;

	t22 = (x577|((x578&x579)>>x580));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x581 = 0;
	int8_t x582 = 56;
	uint8_t x584 = 22U;
	uint64_t t23 = 0LLU;

	t23 = (x581|((x582&x583)>>x584));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x617 = INT16_MIN;
	int16_t x618 = 0;
	int8_t x620 = 1;
	volatile int32_t t24 = 125;

	t24 = (x617|((x618&x619)>>x620));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x621 = INT64_MIN;
	static uint32_t x623 = 519381U;
	static int8_t x624 = 1;
	volatile uint64_t t25 = 28765920337484LLU;

	t25 = (x621|((x622&x623)>>x624));

	if (t25 != 9223372036854988896LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x626 = UINT16_MAX;
	uint16_t x627 = UINT16_MAX;
	uint8_t x628 = 0U;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x625|((x626&x627)>>x628));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x629 = UINT8_MAX;
	int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MAX;
	int32_t x632 = 1;
	volatile int64_t t27 = -1LL;

	t27 = (x629|((x630&x631)>>x632));

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x665 = -1;
	int8_t x666 = INT8_MIN;
	uint32_t x667 = 0U;
	static int32_t x668 = 6;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = (x665|((x666&x667)>>x668));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x674 = 1695U;
	int8_t x675 = -1;

	t29 = (x673|((x674&x675)>>x676));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x733 = -1LL;
	int16_t x735 = INT16_MIN;
	int16_t x736 = 1;
	volatile int64_t t30 = 108LL;

	t30 = (x733|((x734&x735)>>x736));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x741 = 8246609LLU;
	static int8_t x742 = INT8_MIN;
	static uint16_t x743 = UINT16_MAX;
	volatile uint8_t x744 = 12U;
	uint64_t t31 = 167549340337103LLU;

	t31 = (x741|((x742&x743)>>x744));

	if (t31 != 8246623LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x777 = INT16_MIN;
	static uint64_t x778 = 451922190LLU;
	uint8_t x779 = 3U;
	uint8_t x780 = 43U;
	volatile uint64_t t32 = 37639474348564LLU;

	t32 = (x777|((x778&x779)>>x780));

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x814 = INT64_MIN;
	int64_t x815 = 177904179900878LL;
	volatile uint64_t x816 = 3LLU;

	t33 = (x813|((x814&x815)>>x816));

	if (t33 != 12739021LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x825 = INT32_MIN;
	uint32_t x826 = 1781456972U;
	static int64_t x827 = INT64_MAX;
	static int16_t x828 = 48;

	t34 = (x825|((x826&x827)>>x828));

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x861 = INT8_MIN;
	int8_t x863 = 2;
	uint32_t x864 = 6U;
	volatile int64_t t35 = -822046020049LL;

	t35 = (x861|((x862&x863)>>x864));

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x865 = -20;
	uint8_t x867 = 5U;
	static volatile int32_t t36 = 2093465;

	t36 = (x865|((x866&x867)>>x868));

	if (t36 != -20) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x873 = 1;
	uint64_t x874 = 745056LLU;
	volatile int32_t x875 = -6856;
	uint8_t x876 = 20U;
	uint64_t t37 = 11LLU;

	t37 = (x873|((x874&x875)>>x876));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x877 = 5972473348LLU;
	int8_t x878 = 0;
	uint32_t x879 = 866990U;

	t38 = (x877|((x878&x879)>>x880));

	if (t38 != 5972473348LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x881 = INT16_MIN;
	volatile int64_t t39 = 4127881024101LL;

	t39 = (x881|((x882&x883)>>x884));

	if (t39 != -22373LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x933 = -11;
	static volatile int64_t x934 = INT64_MAX;
	int32_t x936 = 5;

	t40 = (x933|((x934&x935)>>x936));

	if (t40 != -11LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x949 = 7U;
	volatile uint64_t x951 = UINT64_MAX;
	uint64_t t41 = 120398LLU;

	t41 = (x949|((x950&x951)>>x952));

	if (t41 != 16857794263799LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x966 = -1;
	uint64_t x967 = 31LLU;
	uint8_t x968 = 1U;
	static volatile uint64_t t42 = 10LLU;

	t42 = (x965|((x966&x967)>>x968));

	if (t42 != 11055LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x977 = 117297146U;
	uint16_t x978 = UINT16_MAX;
	volatile uint8_t x980 = 3U;
	static int64_t t43 = 241337253449094LL;

	t43 = (x977|((x978&x979)>>x980));

	if (t43 != 117301247LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x983 = INT8_MAX;
	uint32_t x984 = 0U;
	int64_t t44 = 41483023459280763LL;

	t44 = (x981|((x982&x983)>>x984));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x985 = UINT32_MAX;
	int64_t x987 = INT64_MIN;
	static int64_t t45 = -5049LL;

	t45 = (x985|((x986&x987)>>x988));

	if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1001 = 66U;
	uint64_t x1002 = 100LLU;
	int64_t x1003 = -1LL;
	int8_t x1004 = 10;

	t46 = (x1001|((x1002&x1003)>>x1004));

	if (t46 != 66LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1034 = UINT16_MAX;
	int8_t x1035 = INT8_MAX;
	uint32_t x1036 = 0U;

	t47 = (x1033|((x1034&x1035)>>x1036));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1093 = UINT32_MAX;
	uint8_t x1094 = 39U;
	int32_t x1095 = 0;
	static volatile int16_t x1096 = 12;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x1093|((x1094&x1095)>>x1096));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1106 = 154420293LLU;
	int8_t x1107 = -1;
	uint64_t t49 = 9445448LLU;

	t49 = (x1105|((x1106&x1107)>>x1108));

	if (t49 != 38605075LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1145 = INT32_MIN;
	static int64_t x1146 = 176552481209923069LL;
	volatile int32_t x1147 = INT32_MIN;
	volatile int32_t x1148 = 15;

	t50 = (x1145|((x1146&x1147)>>x1148));

	if (t50 != -82378752LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1245 = -469;
	uint16_t x1246 = 892U;
	static uint16_t x1247 = UINT16_MAX;
	uint8_t x1248 = 7U;
	static volatile int32_t t51 = -57048;

	t51 = (x1245|((x1246&x1247)>>x1248));

	if (t51 != -465) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1313 = INT16_MIN;
	int16_t x1315 = INT16_MAX;
	uint64_t x1316 = 2LLU;

	t52 = (x1313|((x1314&x1315)>>x1316));

	if (t52 != -24577LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1333 = 1047346094LL;
	int8_t x1334 = -1;
	uint8_t x1335 = 8U;
	int64_t t53 = -61LL;

	t53 = (x1333|((x1334&x1335)>>x1336));

	if (t53 != 1047346094LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1354 = -1;
	int16_t x1355 = 5058;
	static uint16_t x1356 = 3U;
	volatile int32_t t54 = 106236;

	t54 = (x1353|((x1354&x1355)>>x1356));

	if (t54 != 639) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1385 = INT32_MIN;
	int32_t x1386 = 3;
	static int8_t x1387 = INT8_MAX;
	static uint16_t x1388 = 1U;
	volatile int32_t t55 = 306387368;

	t55 = (x1385|((x1386&x1387)>>x1388));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1425 = 2LLU;
	int64_t x1426 = 0LL;
	static volatile uint64_t x1427 = UINT64_MAX;
	uint16_t x1428 = 30U;
	static uint64_t t56 = 1773347703793LLU;

	t56 = (x1425|((x1426&x1427)>>x1428));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1445 = 1924408;
	uint64_t x1446 = UINT64_MAX;
	uint64_t x1447 = 68797378118304LLU;
	uint16_t x1448 = 9U;
	volatile uint64_t t57 = 44354LLU;

	t57 = (x1445|((x1446&x1447)>>x1448));

	if (t57 != 134370688377LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1449 = INT64_MIN;
	int16_t x1450 = 3944;
	int16_t x1451 = INT16_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (x1449|((x1450&x1451)>>x1452));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1457 = 1176292405146165120LLU;
	int8_t x1458 = -3;

	t59 = (x1457|((x1458&x1459)>>x1460));

	if (t59 != 1176292405146165141LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x1466 = UINT32_MAX;
	volatile int64_t x1467 = 1LL;
	uint16_t x1468 = 2U;
	int64_t t60 = 3763LL;

	t60 = (x1465|((x1466&x1467)>>x1468));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x1485 = 51U;
	uint16_t x1486 = UINT16_MAX;
	static volatile int16_t x1487 = -4893;
	static uint64_t x1488 = 6LLU;
	volatile uint32_t t61 = 34674633U;

	t61 = (x1485|((x1486&x1487)>>x1488));

	if (t61 != 947U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x1505 = INT16_MIN;
	static uint8_t x1507 = 0U;
	uint8_t x1508 = 12U;
	static uint64_t t62 = 2565541LLU;

	t62 = (x1505|((x1506&x1507)>>x1508));

	if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1535 = INT16_MIN;
	static int8_t x1536 = 1;
	volatile int32_t t63 = -609;

	t63 = (x1533|((x1534&x1535)>>x1536));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1657 = UINT8_MAX;
	int32_t x1659 = INT32_MIN;
	uint8_t x1660 = 6U;
	int32_t t64 = -296141;

	t64 = (x1657|((x1658&x1659)>>x1660));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1701 = 7466U;
	uint64_t x1702 = 201LLU;
	static volatile uint64_t t65 = 1218924457738LLU;

	t65 = (x1701|((x1702&x1703)>>x1704));

	if (t65 != 7466LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1810 = 290711LLU;
	volatile int16_t x1811 = -10676;
	static uint16_t x1812 = 3U;
	static volatile uint64_t t66 = 11296683LLU;

	t66 = (x1809|((x1810&x1811)>>x1812));

	if (t66 != 18446744071562102976LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1862 = INT16_MIN;
	static uint64_t x1863 = UINT64_MAX;
	uint32_t x1864 = 6U;

	t67 = (x1861|((x1862&x1863)>>x1864));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1877 = -1;
	uint16_t x1878 = 0U;
	uint64_t x1879 = UINT64_MAX;
	static int16_t x1880 = 28;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x1877|((x1878&x1879)>>x1880));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x1885 = UINT64_MAX;
	int8_t x1886 = INT8_MIN;
	volatile int16_t x1887 = INT16_MAX;
	int8_t x1888 = 1;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x1885|((x1886&x1887)>>x1888));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1890 = UINT16_MAX;
	int64_t x1891 = INT64_MIN;
	volatile uint32_t x1892 = 10U;
	volatile int64_t t70 = 87464431LL;

	t70 = (x1889|((x1890&x1891)>>x1892));

	if (t70 != 7250757LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1913 = -1;
	uint8_t x1914 = 3U;
	int64_t x1915 = -1969LL;
	static int8_t x1916 = 0;

	t71 = (x1913|((x1914&x1915)>>x1916));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1961 = -30653LL;
	static int64_t x1963 = 2117464506413443021LL;
	int8_t x1964 = 13;
	int64_t t72 = -8705961126195620LL;

	t72 = (x1961|((x1962&x1963)>>x1964));

	if (t72 != -30653LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1966 = 1;
	int32_t x1967 = INT32_MIN;
	uint16_t x1968 = 2U;

	t73 = (x1965|((x1966&x1967)>>x1968));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2005 = INT16_MIN;
	volatile int32_t x2006 = -1;
	volatile uint64_t x2007 = 1695822604960291LLU;
	static uint16_t x2008 = 15U;

	t74 = (x2005|((x2006&x2007)>>x2008));

	if (t74 != 18446744073709547505LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2061 = UINT16_MAX;
	uint8_t x2062 = 1U;
	volatile uint64_t x2063 = 4801477276814132LLU;
	uint8_t x2064 = 44U;
	static uint64_t t75 = 477801505762269LLU;

	t75 = (x2061|((x2062&x2063)>>x2064));

	if (t75 != 65535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2093 = -3;
	int32_t x2094 = -26765429;
	int16_t x2095 = INT16_MAX;
	uint16_t x2096 = 1U;
	volatile int32_t t76 = -4;

	t76 = (x2093|((x2094&x2095)>>x2096));

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2101 = 185U;
	static int8_t x2102 = -11;
	uint64_t x2103 = 39888358975LLU;
	uint8_t x2104 = 11U;
	static uint64_t t77 = 1619796435430255LLU;

	t77 = (x2101|((x2102&x2103)>>x2104));

	if (t77 != 19476921LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x2111 = 3U;
	uint64_t x2112 = 3LLU;
	int64_t t78 = 495LL;

	t78 = (x2109|((x2110&x2111)>>x2112));

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2153 = INT16_MIN;
	uint64_t x2154 = 104137822LLU;
	uint8_t x2155 = UINT8_MAX;
	volatile uint64_t t79 = 64050871177972LLU;

	t79 = (x2153|((x2154&x2155)>>x2156));

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2169 = INT64_MIN;
	uint32_t x2170 = UINT32_MAX;
	volatile int16_t x2171 = 252;
	volatile uint16_t x2172 = 28U;
	int64_t t80 = INT64_MIN;

	t80 = (x2169|((x2170&x2171)>>x2172));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2173 = 0;
	volatile int8_t x2174 = INT8_MIN;
	static int8_t x2175 = INT8_MAX;
	uint8_t x2176 = 3U;
	volatile int32_t t81 = 257;

	t81 = (x2173|((x2174&x2175)>>x2176));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2181 = INT32_MIN;
	int32_t x2182 = 216343520;
	int16_t x2183 = INT16_MAX;
	int16_t x2184 = 3;
	int32_t t82 = 13195509;

	t82 = (x2181|((x2182&x2183)>>x2184));

	if (t82 != -2147482500) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2225 = UINT8_MAX;
	uint16_t x2226 = 2166U;
	static int16_t x2227 = INT16_MIN;
	volatile int16_t x2228 = 1;

	t83 = (x2225|((x2226&x2227)>>x2228));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2233 = 7827U;
	volatile int16_t x2234 = 13410;
	int16_t x2235 = -1765;
	volatile uint8_t x2236 = 12U;
	uint32_t t84 = 985084U;

	t84 = (x2233|((x2234&x2235)>>x2236));

	if (t84 != 7827U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x2249 = INT64_MIN;
	static int64_t x2251 = INT64_MAX;
	int8_t x2252 = 55;
	uint64_t t85 = 341LLU;

	t85 = (x2249|((x2250&x2251)>>x2252));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x2258 = UINT64_MAX;
	int16_t x2259 = INT16_MIN;
	volatile uint16_t x2260 = 42U;
	uint64_t t86 = 19LLU;

	t86 = (x2257|((x2258&x2259)>>x2260));

	if (t86 != 272629759LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2286 = 10;
	int64_t x2287 = INT64_MIN;
	volatile uint8_t x2288 = 17U;

	t87 = (x2285|((x2286&x2287)>>x2288));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2341 = INT64_MIN;
	uint8_t x2342 = 2U;
	static int64_t x2343 = INT64_MIN;
	static int64_t t88 = INT64_MIN;

	t88 = (x2341|((x2342&x2343)>>x2344));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2357 = -1;
	int64_t x2358 = -11654LL;
	volatile int64_t x2359 = INT64_MAX;
	uint32_t x2360 = 31U;
	volatile int64_t t89 = 44303359060932LL;

	t89 = (x2357|((x2358&x2359)>>x2360));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2373 = INT32_MIN;
	static int32_t x2376 = 2;
	volatile uint64_t t90 = 1313098588629251LLU;

	t90 = (x2373|((x2374&x2375)>>x2376));

	if (t90 != 18446744071594480758LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2449 = INT32_MIN;
	int32_t x2450 = 4;
	volatile int32_t x2451 = 1192;
	volatile uint8_t x2452 = 6U;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x2449|((x2450&x2451)>>x2452));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2474 = INT8_MIN;
	static uint32_t x2475 = UINT32_MAX;
	uint32_t x2476 = 19U;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x2473|((x2474&x2475)>>x2476));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x2526 = 97914042U;
	int8_t x2528 = 1;
	volatile uint32_t t93 = 108176459U;

	t93 = (x2525|((x2526&x2527)>>x2528));

	if (t93 != 49272413U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x2529 = INT64_MIN;
	uint64_t x2530 = 6957528327356137233LLU;
	uint8_t x2532 = 23U;
	static volatile uint64_t t94 = 1LLU;

	t94 = (x2529|((x2530&x2531)>>x2532));

	if (t94 != 9223372866256784741LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2546 = -1;
	static volatile uint64_t x2547 = 5547122LLU;
	int64_t x2548 = 1LL;

	t95 = (x2545|((x2546&x2547)>>x2548));

	if (t95 != 2773561LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x2585 = -1LL;
	uint16_t x2586 = UINT16_MAX;
	uint64_t x2587 = 173658974LLU;
	uint8_t x2588 = 21U;
	uint64_t t96 = UINT64_MAX;

	t96 = (x2585|((x2586&x2587)>>x2588));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2597 = UINT64_MAX;
	int32_t x2598 = INT32_MIN;
	volatile int8_t x2599 = INT8_MAX;
	uint8_t x2600 = 5U;

	t97 = (x2597|((x2598&x2599)>>x2600));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2617 = UINT64_MAX;
	volatile int64_t x2618 = INT64_MIN;
	int32_t x2619 = 868;
	uint16_t x2620 = 9U;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x2617|((x2618&x2619)>>x2620));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2653 = -1;
	int32_t x2654 = INT32_MIN;
	int16_t x2655 = INT16_MAX;
	volatile int32_t t99 = -61017308;

	t99 = (x2653|((x2654&x2655)>>x2656));

	if (t99 != -1) { NG(); } else { ; }
	
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

