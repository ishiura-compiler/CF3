#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x109 = INT16_MIN;
static uint8_t x128 = 1U;
uint64_t t2 = 12653786LLU;
volatile uint32_t x201 = 994574U;
volatile uint32_t x214 = 0U;
static int16_t x290 = INT16_MIN;
uint64_t t5 = 6777257579574077360LLU;
uint16_t x347 = 1963U;
volatile uint32_t x485 = UINT32_MAX;
int64_t t7 = -39926573682LL;
static int16_t x497 = -1;
uint64_t t8 = 112LLU;
uint8_t x532 = 0U;
int64_t x597 = INT64_MIN;
static uint64_t x598 = 4439287867664LLU;
int16_t x687 = -4;
uint16_t x688 = 11U;
int32_t x926 = -11520514;
static int8_t x928 = 2;
uint8_t x996 = 6U;
volatile int8_t x1007 = INT8_MIN;
uint64_t x1017 = 55154739175821313LLU;
uint8_t x1153 = UINT8_MAX;
int16_t x1213 = INT16_MAX;
volatile uint32_t x1221 = UINT32_MAX;
static volatile uint64_t x1338 = 77LLU;
uint8_t x1341 = 40U;
static uint32_t x1343 = UINT32_MAX;
uint16_t x1344 = 12U;
int16_t x1377 = INT16_MIN;
uint16_t x1380 = 32U;
volatile int32_t t32 = 11765945;
int8_t x1550 = 9;
int32_t x1559 = INT32_MIN;
volatile uint32_t t34 = 29700433U;
volatile uint64_t x1639 = UINT64_MAX;
int8_t x1816 = 1;
volatile uint64_t t37 = 2680167478790115LLU;
volatile uint8_t x1869 = 9U;
int8_t x1870 = -1;
int8_t x1872 = 1;
static volatile int32_t t38 = -1;
volatile int64_t x2045 = -4LL;
int8_t x2046 = -4;
static volatile int64_t x2047 = INT64_MIN;
int8_t x2061 = -1;
int16_t x2063 = -1;
int32_t t40 = 107586;
int8_t x2065 = INT8_MIN;
static int16_t x2067 = -1;
int64_t t41 = 45170932441107429LL;
int32_t x2192 = 6;
static int64_t x2235 = INT64_MIN;
volatile int8_t x2257 = -7;
int32_t x2258 = 203188096;
volatile uint64_t x2307 = 4245646638326LLU;
uint64_t x2315 = 126300283701841615LLU;
uint64_t x2541 = 134171840429049LLU;
int8_t x2544 = 0;
uint8_t x2696 = 5U;
uint32_t x2941 = UINT32_MAX;
static volatile int32_t x3039 = -7553;
int8_t x3107 = 14;
volatile uint64_t t59 = 232LLU;
uint8_t x3184 = 0U;
volatile int8_t x3353 = -1;
volatile int64_t x3355 = 9LL;
uint8_t x3397 = 13U;
uint64_t t62 = 858065961LLU;
volatile int32_t t63 = 514166;
static int8_t x3593 = INT8_MAX;
volatile uint8_t x3596 = 2U;
int16_t x3680 = 1;
static int64_t x3763 = -56LL;
volatile int64_t t68 = -128236495083LL;
volatile uint16_t x3828 = 4U;
int8_t x4038 = INT8_MIN;
static uint64_t x4081 = 7694LLU;
int16_t x4083 = 0;
int8_t x4221 = 2;
volatile int32_t t77 = -79;
volatile int32_t x4268 = 1;
int8_t x4376 = 0;
uint8_t x4381 = UINT8_MAX;
uint32_t x4553 = UINT32_MAX;
int32_t x4555 = INT32_MIN;
static uint64_t x4717 = UINT64_MAX;
volatile uint64_t t89 = 686919042126425763LLU;
uint8_t x4932 = 3U;
volatile int8_t x4941 = 45;
volatile int8_t x4973 = INT8_MIN;
static int64_t x4975 = -1LL;
int8_t x4976 = 0;
int16_t x4982 = -1;
static uint8_t x4996 = 11U;
static uint64_t t95 = 4104759868LLU;
volatile int16_t x5113 = -1;
volatile uint64_t t97 = 597LLU;
static volatile int8_t x5181 = INT8_MAX;
int8_t x5184 = 0;
volatile int64_t t98 = 2584276263937973150LL;
int8_t x5187 = 1;
uint8_t x5188 = 2U;


void f0(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = -12887;
	volatile uint64_t x55 = 98554534LLU;
	static uint16_t x56 = 21U;
	volatile uint64_t t0 = 59183234637677LLU;

	t0 = (((x53+x54)-x55)>>x56);

	if (t0 != 8796093022160LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MIN;
	int64_t x112 = 9LL;
	uint32_t t1 = 13678U;

	t1 = (((x109+x110)-x111)>>x112);

	if (t1 != 8388544U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x125 = 2167014260476LLU;
	int64_t x126 = 1103915963456007LL;
	static int16_t x127 = INT16_MIN;

	t2 = (((x125+x126)-x127)>>x128);

	if (t2 != 553041488874625LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x202 = 92875899U;
	static uint16_t x203 = UINT16_MAX;
	int16_t x204 = 0;
	uint32_t t3 = 108555U;

	t3 = (((x201+x202)-x203)>>x204);

	if (t3 != 93804938U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x213 = INT16_MAX;
	static int16_t x215 = -1;
	uint8_t x216 = 8U;
	static uint32_t t4 = 22420406U;

	t4 = (((x213+x214)-x215)>>x216);

	if (t4 != 128U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x289 = UINT64_MAX;
	static volatile int16_t x291 = -1;
	int8_t x292 = 0;

	t5 = (((x289+x290)-x291)>>x292);

	if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x345 = 954U;
	int32_t x346 = -1;
	uint8_t x348 = 13U;
	volatile uint32_t t6 = 327965400U;

	t6 = (((x345+x346)-x347)>>x348);

	if (t6 != 524287U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x486 = -1LL;
	uint8_t x487 = 1U;
	int64_t x488 = 1LL;

	t7 = (((x485+x486)-x487)>>x488);

	if (t7 != 2147483646LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x498 = UINT64_MAX;
	static int64_t x499 = -15928LL;
	volatile int8_t x500 = 1;

	t8 = (((x497+x498)-x499)>>x500);

	if (t8 != 7963LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x501 = INT16_MIN;
	uint16_t x502 = 1880U;
	static uint64_t x503 = 159735468376LLU;
	uint8_t x504 = 18U;
	volatile uint64_t t9 = 121878LLU;

	t9 = (((x501+x502)-x503)>>x504);

	if (t9 != 70368743568321LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x529 = 348U;
	int8_t x530 = -1;
	uint32_t x531 = 16U;
	volatile uint32_t t10 = 1576U;

	t10 = (((x529+x530)-x531)>>x532);

	if (t10 != 331U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x577 = 3U;
	volatile int32_t x578 = -1;
	int64_t x579 = -12181997LL;
	uint16_t x580 = 39U;
	volatile int64_t t11 = -1LL;

	t11 = (((x577+x578)-x579)>>x580);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x599 = 6676974U;
	uint8_t x600 = 5U;
	uint64_t t12 = 1669865335016LLU;

	t12 = (((x597+x598)-x599)>>x600);

	if (t12 != 288230514879248953LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x601 = 30LLU;
	uint8_t x602 = UINT8_MAX;
	static uint8_t x603 = 0U;
	uint16_t x604 = 11U;
	uint64_t t13 = 77434509303791LLU;

	t13 = (((x601+x602)-x603)>>x604);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x685 = INT64_MAX;
	uint64_t x686 = UINT64_MAX;
	uint64_t t14 = 22167881LLU;

	t14 = (((x685+x686)-x687)>>x688);

	if (t14 != 4503599627370496LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x765 = UINT16_MAX;
	static uint32_t x766 = 267047296U;
	uint64_t x767 = 153728LLU;
	uint8_t x768 = 1U;
	volatile uint64_t t15 = 28112990514LLU;

	t15 = (((x765+x766)-x767)>>x768);

	if (t15 != 133479551LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x881 = 114234296U;
	volatile uint16_t x882 = 1304U;
	int8_t x883 = INT8_MAX;
	uint8_t x884 = 3U;
	uint32_t t16 = 406U;

	t16 = (((x881+x882)-x883)>>x884);

	if (t16 != 14279434U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x925 = 3188972051259LLU;
	int16_t x927 = INT16_MIN;
	volatile uint64_t t17 = 307013LLU;

	t17 = (((x925+x926)-x927)>>x928);

	if (t17 != 797240140878LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x993 = INT32_MIN;
	volatile uint32_t x994 = 458U;
	volatile int16_t x995 = 106;
	volatile uint32_t t18 = 1367267U;

	t18 = (((x993+x994)-x995)>>x996);

	if (t18 != 33554437U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1005 = 33159149504194586LLU;
	volatile uint32_t x1006 = 2U;
	int16_t x1008 = 0;
	volatile uint64_t t19 = 6LLU;

	t19 = (((x1005+x1006)-x1007)>>x1008);

	if (t19 != 33159149504194716LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1018 = -7;
	int16_t x1019 = INT16_MIN;
	int16_t x1020 = 0;
	uint64_t t20 = 87143539964LLU;

	t20 = (((x1017+x1018)-x1019)>>x1020);

	if (t20 != 55154739175854074LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1053 = 7U;
	int16_t x1054 = INT16_MAX;
	volatile uint8_t x1055 = 0U;
	volatile int64_t x1056 = 0LL;
	int32_t t21 = -26;

	t21 = (((x1053+x1054)-x1055)>>x1056);

	if (t21 != 32774) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1137 = 10889U;
	uint32_t x1138 = 14894U;
	int32_t x1139 = -1;
	volatile uint8_t x1140 = 1U;
	volatile uint32_t t22 = 4639886U;

	t22 = (((x1137+x1138)-x1139)>>x1140);

	if (t22 != 12892U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1145 = 596;
	int64_t x1146 = 7160346LL;
	static volatile int32_t x1147 = INT32_MIN;
	uint32_t x1148 = 25U;
	volatile int64_t t23 = -543LL;

	t23 = (((x1145+x1146)-x1147)>>x1148);

	if (t23 != 64LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1154 = UINT16_MAX;
	uint16_t x1155 = 7U;
	int16_t x1156 = 12;
	volatile int32_t t24 = 846667;

	t24 = (((x1153+x1154)-x1155)>>x1156);

	if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1214 = INT8_MAX;
	int64_t x1215 = -1LL;
	uint16_t x1216 = 2U;
	int64_t t25 = -2688009632LL;

	t25 = (((x1213+x1214)-x1215)>>x1216);

	if (t25 != 8223LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1222 = INT16_MAX;
	static uint32_t x1223 = UINT32_MAX;
	uint8_t x1224 = 3U;
	uint32_t t26 = 0U;

	t26 = (((x1221+x1222)-x1223)>>x1224);

	if (t26 != 4095U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1257 = 8;
	int8_t x1258 = -1;
	volatile int32_t x1259 = -1;
	volatile uint16_t x1260 = 1U;
	volatile int32_t t27 = 230787203;

	t27 = (((x1257+x1258)-x1259)>>x1260);

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1321 = 88961LL;
	int8_t x1322 = -1;
	int64_t x1323 = -1LL;
	uint16_t x1324 = 0U;
	volatile int64_t t28 = -20341135950LL;

	t28 = (((x1321+x1322)-x1323)>>x1324);

	if (t28 != 88961LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1337 = -2;
	int64_t x1339 = INT64_MIN;
	static uint8_t x1340 = 1U;
	volatile uint64_t t29 = 40668752202782LLU;

	t29 = (((x1337+x1338)-x1339)>>x1340);

	if (t29 != 4611686018427387941LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x1342 = 3U;
	uint32_t t30 = 151768U;

	t30 = (((x1341+x1342)-x1343)>>x1344);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1378 = -1;
	static int64_t x1379 = -3785472819146533LL;
	int64_t t31 = 7532107242137283LL;

	t31 = (((x1377+x1378)-x1379)>>x1380);

	if (t31 != 881374LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1381 = UINT16_MAX;
	static int16_t x1382 = -1;
	static int32_t x1383 = 0;
	int8_t x1384 = 1;

	t32 = (((x1381+x1382)-x1383)>>x1384);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1549 = 0U;
	uint32_t x1551 = 390754U;
	static uint32_t x1552 = 23U;
	volatile uint32_t t33 = 5U;

	t33 = (((x1549+x1550)-x1551)>>x1552);

	if (t33 != 511U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1557 = -5;
	uint32_t x1558 = UINT32_MAX;
	volatile int16_t x1560 = 2;

	t34 = (((x1557+x1558)-x1559)>>x1560);

	if (t34 != 536870910U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1637 = 1;
	int16_t x1638 = 148;
	volatile uint8_t x1640 = 24U;
	static uint64_t t35 = 5597599820LLU;

	t35 = (((x1637+x1638)-x1639)>>x1640);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1801 = -1LL;
	uint64_t x1802 = UINT64_MAX;
	int32_t x1803 = INT32_MIN;
	int8_t x1804 = 1;
	static volatile uint64_t t36 = 1488447577LLU;

	t36 = (((x1801+x1802)-x1803)>>x1804);

	if (t36 != 1073741823LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1813 = 0;
	uint64_t x1814 = UINT64_MAX;
	uint64_t x1815 = UINT64_MAX;

	t37 = (((x1813+x1814)-x1815)>>x1816);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x1871 = -1;

	t38 = (((x1869+x1870)-x1871)>>x1872);

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2048 = 42;
	static int64_t t39 = 1036866242942657936LL;

	t39 = (((x2045+x2046)-x2047)>>x2048);

	if (t39 != 2097151LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2062 = 20U;
	uint8_t x2064 = 8U;

	t40 = (((x2061+x2062)-x2063)>>x2064);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2066 = 92372854LL;
	uint8_t x2068 = 7U;

	t41 = (((x2065+x2066)-x2067)>>x2068);

	if (t41 != 721661LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2077 = -1;
	static uint64_t x2078 = 13046043474LLU;
	uint64_t x2079 = 9319251912247196LLU;
	int8_t x2080 = 50;
	volatile uint64_t t42 = 19866LLU;

	t42 = (((x2077+x2078)-x2079)>>x2080);

	if (t42 != 16375LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2149 = 28915825056249061LLU;
	int32_t x2150 = 2907;
	uint8_t x2151 = 5U;
	static uint8_t x2152 = 4U;
	uint64_t t43 = 16LLU;

	t43 = (((x2149+x2150)-x2151)>>x2152);

	if (t43 != 1807239066015747LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2189 = -1LL;
	volatile uint32_t x2190 = UINT32_MAX;
	int8_t x2191 = -63;
	int64_t t44 = -404633441389181LL;

	t44 = (((x2189+x2190)-x2191)>>x2192);

	if (t44 != 67108864LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2233 = INT8_MIN;
	static uint64_t x2234 = 600799963888484832LLU;
	uint16_t x2236 = 19U;
	uint64_t t45 = 48631710895LLU;

	t45 = (((x2233+x2234)-x2235)>>x2236);

	if (t45 != 18738121034132LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2259 = 25;
	uint32_t x2260 = 14U;
	volatile int32_t t46 = -1272;

	t46 = (((x2257+x2258)-x2259)>>x2260);

	if (t46 != 12401) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2305 = UINT32_MAX;
	int32_t x2306 = INT32_MIN;
	int16_t x2308 = 59;
	static volatile uint64_t t47 = 4498883632LLU;

	t47 = (((x2305+x2306)-x2307)>>x2308);

	if (t47 != 31LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2313 = 0U;
	int64_t x2314 = -1LL;
	uint16_t x2316 = 47U;
	static volatile uint64_t t48 = 13583578052335929LLU;

	t48 = (((x2313+x2314)-x2315)>>x2316);

	if (t48 != 130174LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2542 = 6U;
	int64_t x2543 = -46LL;
	volatile uint64_t t49 = 366803LLU;

	t49 = (((x2541+x2542)-x2543)>>x2544);

	if (t49 != 134171840429101LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2613 = INT32_MIN;
	volatile int8_t x2614 = INT8_MAX;
	int32_t x2615 = INT32_MIN;
	int32_t x2616 = 1;
	volatile int32_t t50 = 20098;

	t50 = (((x2613+x2614)-x2615)>>x2616);

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2661 = 2904U;
	int32_t x2662 = 3880195;
	static int16_t x2663 = -1;
	volatile uint8_t x2664 = 4U;
	int32_t t51 = 178296682;

	t51 = (((x2661+x2662)-x2663)>>x2664);

	if (t51 != 242693) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2693 = UINT32_MAX;
	volatile int16_t x2694 = INT16_MIN;
	uint64_t x2695 = 3297871320430152536LLU;
	static uint64_t t52 = 20319991189037812LLU;

	t52 = (((x2693+x2694)-x2695)>>x2696);

	if (t52 != 473402273674197925LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x2825 = 1175U;
	uint32_t x2826 = 1310268U;
	volatile int64_t x2827 = -126227LL;
	int8_t x2828 = 16;
	int64_t t53 = 5787548597016LL;

	t53 = (((x2825+x2826)-x2827)>>x2828);

	if (t53 != 21LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x2881 = -1LL;
	int8_t x2882 = INT8_MIN;
	volatile int64_t x2883 = INT64_MIN;
	static uint8_t x2884 = 2U;
	static volatile int64_t t54 = -35312157661LL;

	t54 = (((x2881+x2882)-x2883)>>x2884);

	if (t54 != 2305843009213693919LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2893 = -1;
	int32_t x2894 = INT32_MAX;
	int8_t x2895 = -1;
	uint8_t x2896 = 1U;
	static int32_t t55 = -1;

	t55 = (((x2893+x2894)-x2895)>>x2896);

	if (t55 != 1073741823) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2942 = 25108275LLU;
	uint64_t x2943 = UINT64_MAX;
	uint8_t x2944 = 6U;
	volatile uint64_t t56 = 993557957027LLU;

	t56 = (((x2941+x2942)-x2943)>>x2944);

	if (t56 != 67501180LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3037 = INT8_MIN;
	uint8_t x3038 = 2U;
	int8_t x3040 = 6;
	volatile int32_t t57 = 3247;

	t57 = (((x3037+x3038)-x3039)>>x3040);

	if (t57 != 116) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3049 = 239LL;
	uint8_t x3050 = 2U;
	int16_t x3051 = INT16_MIN;
	uint32_t x3052 = 0U;
	int64_t t58 = 426298014863795LL;

	t58 = (((x3049+x3050)-x3051)>>x3052);

	if (t58 != 33009LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3105 = UINT64_MAX;
	int8_t x3106 = -1;
	int64_t x3108 = 4LL;

	t59 = (((x3105+x3106)-x3107)>>x3108);

	if (t59 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3181 = -1;
	int8_t x3182 = INT8_MIN;
	int64_t x3183 = INT64_MIN;
	volatile int64_t t60 = -1361877715135LL;

	t60 = (((x3181+x3182)-x3183)>>x3184);

	if (t60 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3354 = UINT16_MAX;
	static volatile int16_t x3356 = 5;
	static int64_t t61 = 768837618877055951LL;

	t61 = (((x3353+x3354)-x3355)>>x3356);

	if (t61 != 2047LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3398 = 23783065036252LLU;
	int64_t x3399 = INT64_MIN;
	volatile uint8_t x3400 = 13U;

	t62 = (((x3397+x3398)-x3399)>>x3400);

	if (t62 != 1125902810048805LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3577 = 13744;
	int32_t x3578 = -41;
	int32_t x3579 = -1;
	volatile int16_t x3580 = 5;

	t63 = (((x3577+x3578)-x3579)>>x3580);

	if (t63 != 428) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x3594 = 10;
	static int64_t x3595 = 8LL;
	static volatile int64_t t64 = -6397819618598LL;

	t64 = (((x3593+x3594)-x3595)>>x3596);

	if (t64 != 32LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3677 = 44247484LLU;
	int8_t x3678 = -2;
	volatile int32_t x3679 = INT32_MIN;
	uint64_t t65 = 12809LLU;

	t65 = (((x3677+x3678)-x3679)>>x3680);

	if (t65 != 1095865565LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x3713 = INT64_MAX;
	static uint64_t x3714 = 2255993LLU;
	int16_t x3715 = -1;
	volatile uint32_t x3716 = 2U;
	volatile uint64_t t66 = 769561718991548LLU;

	t66 = (((x3713+x3714)-x3715)>>x3716);

	if (t66 != 2305843009214257950LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3729 = 29;
	int16_t x3730 = INT16_MAX;
	int8_t x3731 = INT8_MAX;
	uint8_t x3732 = 3U;
	static volatile int32_t t67 = 149;

	t67 = (((x3729+x3730)-x3731)>>x3732);

	if (t67 != 4083) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x3761 = 3763U;
	volatile int32_t x3762 = -1;
	uint8_t x3764 = 14U;

	t68 = (((x3761+x3762)-x3763)>>x3764);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3825 = UINT16_MAX;
	static volatile uint32_t x3826 = UINT32_MAX;
	int64_t x3827 = -1LL;
	volatile int64_t t69 = 0LL;

	t69 = (((x3825+x3826)-x3827)>>x3828);

	if (t69 != 4095LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3833 = 18320784869577027LLU;
	uint32_t x3834 = UINT32_MAX;
	uint16_t x3835 = UINT16_MAX;
	static uint64_t x3836 = 1LLU;
	uint64_t t70 = 62638LLU;

	t70 = (((x3833+x3834)-x3835)>>x3836);

	if (t70 != 9160394582239393LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3893 = -1;
	int8_t x3894 = 1;
	uint64_t x3895 = UINT64_MAX;
	int16_t x3896 = 5;
	volatile uint64_t t71 = 2943LLU;

	t71 = (((x3893+x3894)-x3895)>>x3896);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x4037 = INT16_MIN;
	volatile int64_t x4039 = -467481744550LL;
	volatile int8_t x4040 = 0;
	static int64_t t72 = 958486980344922LL;

	t72 = (((x4037+x4038)-x4039)>>x4040);

	if (t72 != 467481711654LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x4082 = -1;
	static uint16_t x4084 = 2U;
	volatile uint64_t t73 = 8068379955LLU;

	t73 = (((x4081+x4082)-x4083)>>x4084);

	if (t73 != 1923LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4185 = INT32_MIN;
	volatile uint32_t x4186 = 1U;
	uint32_t x4187 = 9253363U;
	static volatile int16_t x4188 = 0;
	static volatile uint32_t t74 = 18049U;

	t74 = (((x4185+x4186)-x4187)>>x4188);

	if (t74 != 2138230286U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4189 = -1;
	static int8_t x4190 = INT8_MAX;
	int16_t x4191 = 0;
	volatile int8_t x4192 = 14;
	int32_t t75 = -66857;

	t75 = (((x4189+x4190)-x4191)>>x4192);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4222 = 3525LLU;
	int64_t x4223 = INT64_MIN;
	int16_t x4224 = 19;
	uint64_t t76 = 1LLU;

	t76 = (((x4221+x4222)-x4223)>>x4224);

	if (t76 != 17592186044416LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4253 = -342782036;
	int16_t x4254 = INT16_MIN;
	int32_t x4255 = INT32_MIN;
	int16_t x4256 = 4;

	t77 = (((x4253+x4254)-x4255)>>x4256);

	if (t77 != 112791802) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4265 = 1U;
	int32_t x4266 = 3602;
	volatile uint8_t x4267 = UINT8_MAX;
	volatile int32_t t78 = -97;

	t78 = (((x4265+x4266)-x4267)>>x4268);

	if (t78 != 1674) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4273 = UINT64_MAX;
	int8_t x4274 = -1;
	int32_t x4275 = INT32_MIN;
	static uint8_t x4276 = 5U;
	uint64_t t79 = 3307LLU;

	t79 = (((x4273+x4274)-x4275)>>x4276);

	if (t79 != 67108863LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4277 = INT32_MIN;
	volatile int64_t x4278 = -270LL;
	int64_t x4279 = -12553556524521054LL;
	uint8_t x4280 = 2U;
	static int64_t t80 = 222002LL;

	t80 = (((x4277+x4278)-x4279)>>x4280);

	if (t80 != 3138388594259284LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4301 = INT32_MIN;
	uint16_t x4302 = 5833U;
	int64_t x4303 = -426897323392315LL;
	static int16_t x4304 = 9;
	volatile int64_t t81 = -871915584474259809LL;

	t81 = (((x4301+x4302)-x4303)>>x4304);

	if (t81 != 833779640458LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4345 = INT32_MAX;
	int64_t x4346 = -1LL;
	static volatile int8_t x4347 = -1;
	uint8_t x4348 = 0U;
	int64_t t82 = 4249LL;

	t82 = (((x4345+x4346)-x4347)>>x4348);

	if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x4373 = 2317U;
	uint16_t x4374 = 278U;
	static volatile uint16_t x4375 = 17U;
	volatile int32_t t83 = -5188;

	t83 = (((x4373+x4374)-x4375)>>x4376);

	if (t83 != 2578) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4382 = 0U;
	int8_t x4383 = INT8_MIN;
	volatile uint8_t x4384 = 0U;
	static uint32_t t84 = 240U;

	t84 = (((x4381+x4382)-x4383)>>x4384);

	if (t84 != 383U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4409 = -1LL;
	int32_t x4410 = INT32_MIN;
	uint64_t x4411 = 519892806557770LLU;
	static volatile int8_t x4412 = 0;
	uint64_t t85 = 1238LLU;

	t85 = (((x4409+x4410)-x4411)>>x4412);

	if (t85 != 18446224178755510197LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4554 = INT32_MAX;
	int8_t x4556 = 1;
	static uint32_t t86 = 691020U;

	t86 = (((x4553+x4554)-x4555)>>x4556);

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4621 = 21U;
	int8_t x4622 = -1;
	static int16_t x4623 = -1;
	static int64_t x4624 = 0LL;
	uint32_t t87 = 106870U;

	t87 = (((x4621+x4622)-x4623)>>x4624);

	if (t87 != 21U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4629 = -1LL;
	int8_t x4630 = INT8_MIN;
	int64_t x4631 = INT64_MIN;
	volatile uint8_t x4632 = 1U;
	static int64_t t88 = 1883065162392424520LL;

	t88 = (((x4629+x4630)-x4631)>>x4632);

	if (t88 != 4611686018427387839LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4718 = INT16_MIN;
	uint32_t x4719 = 1U;
	uint8_t x4720 = 41U;

	t89 = (((x4717+x4718)-x4719)>>x4720);

	if (t89 != 8388607LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4813 = UINT8_MAX;
	static int16_t x4814 = INT16_MIN;
	uint64_t x4815 = 187463272326LLU;
	volatile uint8_t x4816 = 24U;
	static uint64_t t90 = 36LLU;

	t90 = (((x4813+x4814)-x4815)>>x4816);

	if (t90 != 1099511616602LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4929 = 1;
	uint16_t x4930 = 1949U;
	int16_t x4931 = -1;
	int32_t t91 = -10607;

	t91 = (((x4929+x4930)-x4931)>>x4932);

	if (t91 != 243) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4942 = 7907970;
	static int8_t x4943 = INT8_MIN;
	uint16_t x4944 = 14U;
	volatile int32_t t92 = 109;

	t92 = (((x4941+x4942)-x4943)>>x4944);

	if (t92 != 482) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4974 = INT64_MAX;
	volatile int64_t t93 = 17446927323891LL;

	t93 = (((x4973+x4974)-x4975)>>x4976);

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x4981 = 1137LLU;
	int16_t x4983 = INT16_MIN;
	static volatile int16_t x4984 = 35;
	static uint64_t t94 = 41729348203534471LLU;

	t94 = (((x4981+x4982)-x4983)>>x4984);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4993 = INT16_MIN;
	uint64_t x4994 = 1897147992LLU;
	int16_t x4995 = INT16_MAX;

	t95 = (((x4993+x4994)-x4995)>>x4996);

	if (t95 != 926309LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5089 = 5U;
	int32_t x5090 = 1;
	static int16_t x5091 = 1;
	uint32_t x5092 = 3U;
	uint32_t t96 = 406454U;

	t96 = (((x5089+x5090)-x5091)>>x5092);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5114 = 18U;
	uint64_t x5115 = 114299784931210456LLU;
	static uint8_t x5116 = 11U;

	t97 = (((x5113+x5114)-x5115)>>x5116);

	if (t97 != 8951388812880049LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5182 = 31564314LL;
	int16_t x5183 = INT16_MAX;

	t98 = (((x5181+x5182)-x5183)>>x5184);

	if (t98 != 31531674LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5185 = 6;
	int16_t x5186 = -1;
	int32_t t99 = -46298544;

	t99 = (((x5185+x5186)-x5187)>>x5188);

	if (t99 != 1) { NG(); } else { ; }
	
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

