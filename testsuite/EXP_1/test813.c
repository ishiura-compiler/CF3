#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 18662236915082271LLU;
uint8_t x4 = 2U;
volatile uint64_t t0 = 800818896LLU;
static uint64_t t3 = 1LLU;
uint64_t x194 = 20LLU;
uint8_t x196 = 23U;
uint16_t x208 = 0U;
int16_t x273 = -1;
volatile uint64_t x274 = UINT64_MAX;
int8_t x275 = INT8_MIN;
uint64_t t7 = 6372752910667645626LLU;
static uint16_t x281 = 1534U;
static int64_t x339 = INT64_MAX;
static int64_t t10 = 21244125205LL;
static int8_t x393 = -1;
int64_t t12 = -1LL;
volatile int32_t x422 = 6234;
volatile int32_t t14 = -50839432;
int64_t x447 = INT64_MIN;
int16_t x458 = INT16_MIN;
uint32_t x459 = 2907U;
static uint32_t t16 = 224U;
static volatile uint32_t t17 = 4U;
uint64_t x501 = 74LLU;
int64_t x503 = -49188LL;
int32_t x504 = 26;
int8_t x518 = INT8_MIN;
int32_t x542 = INT32_MAX;
int64_t x618 = -4396919LL;
int8_t x620 = 11;
int64_t x729 = 85LL;
volatile int32_t x730 = INT32_MIN;
int16_t x732 = 41;
int8_t x736 = 0;
static uint32_t x811 = 32532282U;
volatile uint8_t x863 = UINT8_MAX;
uint16_t x940 = 0U;
static int32_t x970 = -1;
uint8_t x972 = 0U;
uint64_t t32 = 109662818512219LLU;
static int32_t x981 = INT32_MIN;
int64_t x991 = INT64_MIN;
uint8_t x992 = 6U;
int16_t x1026 = INT16_MAX;
uint8_t x1027 = 2U;
uint8_t x1028 = 15U;
volatile int8_t x1070 = INT8_MIN;
static int32_t x1071 = -12050;
static volatile int32_t t38 = -59849;
int8_t x1075 = INT8_MIN;
static int64_t x1097 = INT64_MAX;
volatile int32_t x1098 = -186139;
static int8_t x1123 = -1;
uint32_t x1179 = 3U;
static uint32_t x1197 = 34186U;
uint8_t x1200 = 3U;
uint16_t x1241 = 2700U;
int32_t x1243 = INT32_MAX;
int16_t x1289 = INT16_MIN;
uint32_t t49 = 971563U;
uint32_t x1393 = 1U;
int8_t x1394 = INT8_MIN;
uint16_t x1396 = 28U;
uint8_t x1425 = 12U;
volatile int32_t t52 = 21;
int32_t x1437 = 8733687;
int64_t x1439 = INT64_MIN;
int16_t x1440 = 1;
int16_t x1443 = INT16_MIN;
int64_t x1463 = 124149987467133LL;
int16_t x1464 = 1;
uint8_t x1562 = 10U;
int64_t x1573 = INT64_MAX;
uint64_t x1574 = 1869328LLU;
uint32_t x1623 = 125025070U;
static uint8_t x1656 = 33U;
uint8_t x1760 = 1U;
static volatile uint32_t t63 = 2U;
int32_t x1773 = 879773949;
int32_t x1774 = INT32_MAX;
uint64_t x1775 = 23372216LLU;
static volatile uint64_t t64 = 10001LLU;
uint8_t x1851 = UINT8_MAX;
int8_t x1953 = 1;
static volatile int32_t t70 = 46394;
int64_t x1979 = INT64_MAX;
uint64_t x2027 = 118281LLU;
int64_t x2080 = 6LL;
int32_t x2097 = -29169584;
uint8_t x2101 = 84U;
int32_t t75 = 1;
uint8_t x2138 = 78U;
uint16_t x2140 = 7U;
uint64_t x2141 = UINT64_MAX;
static uint64_t t77 = 226360LLU;
static int32_t x2157 = INT32_MIN;
uint64_t x2178 = UINT64_MAX;
static uint64_t t79 = 109502239130761153LLU;
volatile uint8_t x2197 = 1U;
int64_t x2198 = -1LL;
uint16_t x2217 = UINT16_MAX;
static volatile uint64_t t84 = 16325477673LLU;
uint64_t t87 = 1603321960LLU;
int32_t x2391 = INT32_MIN;
volatile int32_t x2531 = INT32_MIN;
int32_t x2607 = 2962;
static int16_t x2626 = -1;
static uint64_t t92 = 1279LLU;
int64_t x2715 = -1LL;
uint64_t t94 = 3795291552779791760LLU;
uint8_t x2744 = 5U;
volatile int16_t x2750 = -1;
int8_t x2752 = 0;
static int64_t x2766 = INT64_MIN;
int64_t x2767 = -1LL;
static uint64_t x2769 = UINT64_MAX;
uint64_t t98 = 4LLU;
int32_t x2833 = -1;
static uint16_t x2835 = 706U;


void f0(void) {
	static int32_t x2 = 1;
	int32_t x3 = 37447;

	t0 = (((x1%x2)&x3)>>x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = INT32_MAX;
	uint16_t x8 = 9U;
	int32_t t1 = -27822;

	t1 = (((x5%x6)&x7)>>x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x41 = INT32_MAX;
	uint32_t x42 = 2304U;
	int8_t x43 = 16;
	uint64_t x44 = 12LLU;
	volatile uint32_t t2 = 200620U;

	t2 = (((x41%x42)&x43)>>x44);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x81 = -53;
	volatile uint64_t x82 = 3459467048469692541LLU;
	volatile int8_t x83 = INT8_MIN;
	int32_t x84 = 0;

	t3 = (((x81%x82)&x83)>>x84);

	if (t3 != 1149408831361088768LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x89 = -1;
	int64_t x90 = -340905296902487LL;
	int16_t x91 = 80;
	uint8_t x92 = 0U;
	volatile int64_t t4 = -2047324478451689LL;

	t4 = (((x89%x90)&x91)>>x92);

	if (t4 != 80LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x193 = 4085;
	uint16_t x195 = 664U;
	uint64_t t5 = 41102227037LLU;

	t5 = (((x193%x194)&x195)>>x196);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x205 = 143U;
	int64_t x206 = -1LL;
	uint32_t x207 = 183U;
	static int64_t t6 = 73043543486193269LL;

	t6 = (((x205%x206)&x207)>>x208);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x276 = 5;

	t7 = (((x273%x274)&x275)>>x276);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x282 = INT32_MAX;
	volatile int64_t x283 = INT64_MIN;
	uint16_t x284 = 55U;
	int64_t t8 = -12144LL;

	t8 = (((x281%x282)&x283)>>x284);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x289 = INT8_MAX;
	volatile int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	static volatile int8_t x292 = 1;
	volatile int32_t t9 = -4549424;

	t9 = (((x289%x290)&x291)>>x292);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int16_t x338 = INT16_MAX;
	uint8_t x340 = 1U;

	t10 = (((x337%x338)&x339)>>x340);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x394 = -1;
	volatile int8_t x395 = 0;
	uint16_t x396 = 18U;
	volatile int32_t t11 = 4081;

	t11 = (((x393%x394)&x395)>>x396);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x409 = INT8_MAX;
	int64_t x410 = -1LL;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = 29U;

	t12 = (((x409%x410)&x411)>>x412);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x421 = 8;
	volatile uint64_t x423 = 42323680LLU;
	int16_t x424 = 0;
	volatile uint64_t t13 = 3896LLU;

	t13 = (((x421%x422)&x423)>>x424);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x429 = UINT16_MAX;
	static int8_t x430 = INT8_MAX;
	uint16_t x431 = 1048U;
	static int16_t x432 = 0;

	t14 = (((x429%x430)&x431)>>x432);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x445 = INT64_MAX;
	uint32_t x446 = UINT32_MAX;
	uint8_t x448 = 47U;
	int64_t t15 = 24163480851247261LL;

	t15 = (((x445%x446)&x447)>>x448);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x457 = UINT8_MAX;
	int64_t x460 = 0LL;

	t16 = (((x457%x458)&x459)>>x460);

	if (t16 != 91U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x469 = INT16_MAX;
	int16_t x470 = INT16_MAX;
	uint32_t x471 = 429597U;
	static int8_t x472 = 1;

	t17 = (((x469%x470)&x471)>>x472);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x502 = INT32_MIN;
	uint64_t t18 = 16839968810167LLU;

	t18 = (((x501%x502)&x503)>>x504);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x517 = -1;
	volatile uint64_t x519 = 4607LLU;
	static int8_t x520 = 1;
	uint64_t t19 = 2411LLU;

	t19 = (((x517%x518)&x519)>>x520);

	if (t19 != 2303LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x541 = INT16_MIN;
	int16_t x543 = 0;
	static volatile uint16_t x544 = 3U;
	int32_t t20 = -10435;

	t20 = (((x541%x542)&x543)>>x544);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x561 = -744;
	int8_t x562 = -1;
	static volatile int16_t x563 = -17;
	static int64_t x564 = 0LL;
	volatile int32_t t21 = 1;

	t21 = (((x561%x562)&x563)>>x564);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x617 = 4946499240153430756LLU;
	int32_t x619 = INT32_MIN;
	uint64_t t22 = 13LLU;

	t22 = (((x617%x618)&x619)>>x620);

	if (t22 != 2415282831228928LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x677 = 1055;
	static uint64_t x678 = UINT64_MAX;
	int16_t x679 = -1;
	int8_t x680 = 36;
	volatile uint64_t t23 = 461904181307102LLU;

	t23 = (((x677%x678)&x679)>>x680);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x731 = 0;
	static volatile int64_t t24 = 4199002837LL;

	t24 = (((x729%x730)&x731)>>x732);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x733 = UINT32_MAX;
	static uint8_t x734 = 1U;
	uint16_t x735 = 5658U;
	uint32_t t25 = 1141100U;

	t25 = (((x733%x734)&x735)>>x736);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x773 = UINT8_MAX;
	uint64_t x774 = UINT64_MAX;
	int8_t x775 = -1;
	static volatile int8_t x776 = 18;
	volatile uint64_t t26 = 1270581133380191804LLU;

	t26 = (((x773%x774)&x775)>>x776);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x809 = 92920U;
	uint64_t x810 = UINT64_MAX;
	int32_t x812 = 3;
	uint64_t t27 = 5331101LLU;

	t27 = (((x809%x810)&x811)>>x812);

	if (t27 != 3143LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x861 = 7U;
	static uint64_t x862 = 52422637LLU;
	uint32_t x864 = 7U;
	uint64_t t28 = 54922007929112LLU;

	t28 = (((x861%x862)&x863)>>x864);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x881 = UINT32_MAX;
	volatile uint8_t x882 = UINT8_MAX;
	int16_t x883 = INT16_MAX;
	volatile uint16_t x884 = 4U;
	volatile uint32_t t29 = 223351U;

	t29 = (((x881%x882)&x883)>>x884);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x937 = INT8_MIN;
	int8_t x938 = -1;
	volatile int16_t x939 = INT16_MAX;
	int32_t t30 = -405;

	t30 = (((x937%x938)&x939)>>x940);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x961 = 1;
	volatile uint8_t x962 = 50U;
	int16_t x963 = 1;
	int16_t x964 = 28;
	static volatile int32_t t31 = 227060;

	t31 = (((x961%x962)&x963)>>x964);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x969 = UINT64_MAX;
	uint8_t x971 = UINT8_MAX;

	t32 = (((x969%x970)&x971)>>x972);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x977 = 125U;
	int64_t x978 = -1LL;
	int64_t x979 = INT64_MIN;
	static uint8_t x980 = 1U;
	volatile int64_t t33 = 1490750779387LL;

	t33 = (((x977%x978)&x979)>>x980);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x982 = INT8_MIN;
	uint16_t x983 = 0U;
	volatile int16_t x984 = 2;
	int32_t t34 = 59;

	t34 = (((x981%x982)&x983)>>x984);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x989 = UINT64_MAX;
	static int64_t x990 = 1LL;
	uint64_t t35 = 14LLU;

	t35 = (((x989%x990)&x991)>>x992);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x993 = 1U;
	uint64_t x994 = 1703696LLU;
	uint8_t x995 = 3U;
	uint64_t x996 = 4LLU;
	volatile uint64_t t36 = 758726149LLU;

	t36 = (((x993%x994)&x995)>>x996);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x1025 = 57U;
	int32_t t37 = 5964;

	t37 = (((x1025%x1026)&x1027)>>x1028);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1069 = 3;
	uint8_t x1072 = 0U;

	t38 = (((x1069%x1070)&x1071)>>x1072);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1073 = -2560;
	int8_t x1074 = INT8_MIN;
	uint8_t x1076 = 2U;
	volatile int32_t t39 = 0;

	t39 = (((x1073%x1074)&x1075)>>x1076);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1099 = -6143739243962920LL;
	uint32_t x1100 = 12U;
	int64_t t40 = 0LL;

	t40 = (((x1097%x1098)&x1099)>>x1100);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1121 = 1U;
	volatile uint8_t x1122 = 15U;
	static uint8_t x1124 = 9U;
	int32_t t41 = 16;

	t41 = (((x1121%x1122)&x1123)>>x1124);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x1177 = INT16_MIN;
	int8_t x1178 = 39;
	uint16_t x1180 = 0U;
	volatile uint32_t t42 = 3713U;

	t42 = (((x1177%x1178)&x1179)>>x1180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1193 = 48U;
	uint8_t x1194 = 14U;
	uint32_t x1195 = UINT32_MAX;
	int16_t x1196 = 0;
	uint32_t t43 = 3800U;

	t43 = (((x1193%x1194)&x1195)>>x1196);

	if (t43 != 6U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1198 = INT64_MIN;
	uint8_t x1199 = 98U;
	int64_t t44 = -778102217LL;

	t44 = (((x1197%x1198)&x1199)>>x1200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1205 = 0U;
	static volatile int8_t x1206 = -1;
	uint8_t x1207 = 8U;
	uint32_t x1208 = 4U;
	volatile int32_t t45 = 118641;

	t45 = (((x1205%x1206)&x1207)>>x1208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1242 = 1;
	uint32_t x1244 = 0U;
	volatile int32_t t46 = -29706322;

	t46 = (((x1241%x1242)&x1243)>>x1244);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1249 = UINT64_MAX;
	volatile uint32_t x1250 = UINT32_MAX;
	int64_t x1251 = -113595LL;
	static uint16_t x1252 = 6U;
	uint64_t t47 = 499226917980599LLU;

	t47 = (((x1249%x1250)&x1251)>>x1252);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1257 = INT64_MAX;
	volatile int16_t x1258 = INT16_MIN;
	static uint8_t x1259 = 34U;
	uint32_t x1260 = 1U;
	int64_t t48 = -464037LL;

	t48 = (((x1257%x1258)&x1259)>>x1260);

	if (t48 != 17LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1290 = INT8_MIN;
	uint32_t x1291 = UINT32_MAX;
	volatile uint8_t x1292 = 2U;

	t49 = (((x1289%x1290)&x1291)>>x1292);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1337 = INT16_MIN;
	int8_t x1338 = INT8_MIN;
	static int64_t x1339 = -983685138215055LL;
	static volatile uint8_t x1340 = 3U;
	int64_t t50 = 1038733386LL;

	t50 = (((x1337%x1338)&x1339)>>x1340);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1395 = 3910048090931481LLU;
	uint64_t t51 = 30578298864903LLU;

	t51 = (((x1393%x1394)&x1395)>>x1396);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1426 = UINT16_MAX;
	int8_t x1427 = 0;
	volatile uint8_t x1428 = 13U;

	t52 = (((x1425%x1426)&x1427)>>x1428);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1438 = -1;
	int64_t t53 = -24140280608336LL;

	t53 = (((x1437%x1438)&x1439)>>x1440);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1441 = UINT64_MAX;
	static uint32_t x1442 = UINT32_MAX;
	uint8_t x1444 = 0U;
	uint64_t t54 = 843283367172LLU;

	t54 = (((x1441%x1442)&x1443)>>x1444);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1461 = UINT8_MAX;
	volatile int16_t x1462 = INT16_MIN;
	volatile int64_t t55 = 0LL;

	t55 = (((x1461%x1462)&x1463)>>x1464);

	if (t55 != 62LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1509 = UINT16_MAX;
	int8_t x1510 = -3;
	int64_t x1511 = 349723821LL;
	uint8_t x1512 = 2U;
	int64_t t56 = -325642LL;

	t56 = (((x1509%x1510)&x1511)>>x1512);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1561 = INT64_MIN;
	volatile uint16_t x1563 = 44U;
	int16_t x1564 = 6;
	static int64_t t57 = 60626254906460643LL;

	t57 = (((x1561%x1562)&x1563)>>x1564);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1569 = -5220858098918LL;
	volatile uint32_t x1570 = 981376086U;
	uint8_t x1571 = UINT8_MAX;
	static uint8_t x1572 = 2U;
	int64_t t58 = -996423502407LL;

	t58 = (((x1569%x1570)&x1571)>>x1572);

	if (t58 != 61LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1575 = INT8_MIN;
	uint16_t x1576 = 28U;
	volatile uint64_t t59 = 0LLU;

	t59 = (((x1573%x1574)&x1575)>>x1576);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1621 = INT32_MAX;
	volatile uint32_t x1622 = 557U;
	int8_t x1624 = 0;
	uint32_t t60 = 122U;

	t60 = (((x1621%x1622)&x1623)>>x1624);

	if (t60 != 32U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1653 = INT8_MAX;
	uint64_t x1654 = 89018518965LLU;
	int8_t x1655 = INT8_MIN;
	uint64_t t61 = 9556LLU;

	t61 = (((x1653%x1654)&x1655)>>x1656);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1749 = UINT32_MAX;
	int32_t x1750 = 6007;
	uint32_t x1751 = 42382U;
	uint8_t x1752 = 2U;
	uint32_t t62 = 40040390U;

	t62 = (((x1749%x1750)&x1751)>>x1752);

	if (t62 != 34U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x1757 = -22;
	uint32_t x1758 = 51510496U;
	int8_t x1759 = 0;

	t63 = (((x1757%x1758)&x1759)>>x1760);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1776 = 24U;

	t64 = (((x1773%x1774)&x1775)>>x1776);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1781 = 7462LLU;
	static volatile int8_t x1782 = 11;
	volatile int8_t x1783 = INT8_MAX;
	int8_t x1784 = 15;
	volatile uint64_t t65 = 1080511611LLU;

	t65 = (((x1781%x1782)&x1783)>>x1784);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x1849 = -1;
	uint8_t x1850 = UINT8_MAX;
	uint16_t x1852 = 30U;
	int32_t t66 = 1888245;

	t66 = (((x1849%x1850)&x1851)>>x1852);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1881 = INT8_MIN;
	volatile int32_t x1882 = INT32_MIN;
	uint16_t x1883 = UINT16_MAX;
	int16_t x1884 = 7;
	int32_t t67 = 472;

	t67 = (((x1881%x1882)&x1883)>>x1884);

	if (t67 != 511) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1925 = -1;
	int64_t x1926 = -33LL;
	int64_t x1927 = INT64_MAX;
	uint8_t x1928 = 1U;
	int64_t t68 = -3437739228745705392LL;

	t68 = (((x1925%x1926)&x1927)>>x1928);

	if (t68 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1954 = -1;
	volatile int16_t x1955 = INT16_MAX;
	uint16_t x1956 = 4U;
	int32_t t69 = 58882;

	t69 = (((x1953%x1954)&x1955)>>x1956);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x1957 = INT16_MIN;
	int16_t x1958 = INT16_MIN;
	volatile uint16_t x1959 = 1921U;
	int8_t x1960 = 4;

	t70 = (((x1957%x1958)&x1959)>>x1960);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1977 = INT64_MAX;
	static uint8_t x1978 = 1U;
	uint32_t x1980 = 1U;
	int64_t t71 = -88LL;

	t71 = (((x1977%x1978)&x1979)>>x1980);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2025 = INT32_MIN;
	static uint16_t x2026 = 1U;
	int8_t x2028 = 32;
	static volatile uint64_t t72 = 1569033590LLU;

	t72 = (((x2025%x2026)&x2027)>>x2028);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x2077 = 237174951U;
	int32_t x2078 = INT32_MIN;
	int64_t x2079 = -1LL;
	static int64_t t73 = 299LL;

	t73 = (((x2077%x2078)&x2079)>>x2080);

	if (t73 != 3705858LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2098 = 53020732LLU;
	int16_t x2099 = INT16_MIN;
	uint16_t x2100 = 3U;
	uint64_t t74 = 3173049194049296788LLU;

	t74 = (((x2097%x2098)&x2099)>>x2100);

	if (t74 != 5713920LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2102 = -1;
	static int8_t x2103 = 54;
	static uint8_t x2104 = 28U;

	t75 = (((x2101%x2102)&x2103)>>x2104);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2137 = INT32_MAX;
	int32_t x2139 = INT32_MIN;
	volatile int32_t t76 = 4;

	t76 = (((x2137%x2138)&x2139)>>x2140);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x2142 = 19382611U;
	int16_t x2143 = 1;
	uint16_t x2144 = 1U;

	t77 = (((x2141%x2142)&x2143)>>x2144);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2158 = INT32_MIN;
	int64_t x2159 = -9779LL;
	int8_t x2160 = 1;
	int64_t t78 = 185591788LL;

	t78 = (((x2157%x2158)&x2159)>>x2160);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2177 = INT8_MIN;
	volatile int32_t x2179 = 14810;
	static uint8_t x2180 = 22U;

	t79 = (((x2177%x2178)&x2179)>>x2180);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2199 = UINT8_MAX;
	static int8_t x2200 = 1;
	volatile int64_t t80 = -672494523231811664LL;

	t80 = (((x2197%x2198)&x2199)>>x2200);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2205 = INT64_MIN;
	uint64_t x2206 = UINT64_MAX;
	uint16_t x2207 = UINT16_MAX;
	volatile uint8_t x2208 = 4U;
	uint64_t t81 = 288LLU;

	t81 = (((x2205%x2206)&x2207)>>x2208);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x2218 = -4901;
	int64_t x2219 = INT64_MIN;
	uint16_t x2220 = 58U;
	static int64_t t82 = 12648658LL;

	t82 = (((x2217%x2218)&x2219)>>x2220);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2229 = UINT32_MAX;
	volatile int16_t x2230 = INT16_MAX;
	int64_t x2231 = INT64_MIN;
	uint16_t x2232 = 1U;
	volatile int64_t t83 = -222759080LL;

	t83 = (((x2229%x2230)&x2231)>>x2232);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2265 = 506557LLU;
	int16_t x2266 = 4003;
	volatile uint8_t x2267 = 3U;
	static int32_t x2268 = 1;

	t84 = (((x2265%x2266)&x2267)>>x2268);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2305 = INT16_MIN;
	int16_t x2306 = INT16_MIN;
	volatile uint64_t x2307 = 463206715776889401LLU;
	static uint8_t x2308 = 60U;
	volatile uint64_t t85 = 156681687138LLU;

	t85 = (((x2305%x2306)&x2307)>>x2308);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2309 = 102268795728132036LLU;
	int64_t x2310 = -1LL;
	int16_t x2311 = -1;
	static int8_t x2312 = 7;
	volatile uint64_t t86 = 28909177102LLU;

	t86 = (((x2309%x2310)&x2311)>>x2312);

	if (t86 != 798974966626031LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2373 = UINT64_MAX;
	volatile int32_t x2374 = -1;
	static int8_t x2375 = INT8_MIN;
	static uint16_t x2376 = 12U;

	t87 = (((x2373%x2374)&x2375)>>x2376);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x2389 = 0;
	int32_t x2390 = -3;
	volatile uint16_t x2392 = 9U;
	int32_t t88 = 2974;

	t88 = (((x2389%x2390)&x2391)>>x2392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x2473 = 988632592U;
	int64_t x2474 = 118607LL;
	int16_t x2475 = INT16_MIN;
	volatile uint32_t x2476 = 3U;
	int64_t t89 = -181181047559771LL;

	t89 = (((x2473%x2474)&x2475)>>x2476);

	if (t89 != 4096LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2529 = 2;
	volatile uint16_t x2530 = 25417U;
	volatile uint8_t x2532 = 0U;
	volatile int32_t t90 = -863816814;

	t90 = (((x2529%x2530)&x2531)>>x2532);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2605 = 0;
	int32_t x2606 = -223520851;
	int8_t x2608 = 2;
	int32_t t91 = -222766672;

	t91 = (((x2605%x2606)&x2607)>>x2608);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2625 = 928057589438LLU;
	int16_t x2627 = 185;
	volatile uint16_t x2628 = 6U;

	t92 = (((x2625%x2626)&x2627)>>x2628);

	if (t92 != 2LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2645 = 1;
	static uint8_t x2646 = 14U;
	int32_t x2647 = -1;
	int8_t x2648 = 2;
	int32_t t93 = -16;

	t93 = (((x2645%x2646)&x2647)>>x2648);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x2713 = 633014694041876146LLU;
	int32_t x2714 = -154729290;
	uint8_t x2716 = 12U;

	t94 = (((x2713%x2714)&x2715)>>x2716);

	if (t94 != 154544603037567LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2741 = 217;
	static int16_t x2742 = INT16_MIN;
	uint16_t x2743 = UINT16_MAX;
	int32_t t95 = 163024093;

	t95 = (((x2741%x2742)&x2743)>>x2744);

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2749 = 0U;
	int8_t x2751 = INT8_MIN;
	int32_t t96 = -69140122;

	t96 = (((x2749%x2750)&x2751)>>x2752);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x2765 = INT16_MAX;
	uint32_t x2768 = 13U;
	int64_t t97 = -628329923684403LL;

	t97 = (((x2765%x2766)&x2767)>>x2768);

	if (t97 != 3LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2770 = INT8_MIN;
	static int16_t x2771 = 232;
	uint32_t x2772 = 0U;

	t98 = (((x2769%x2770)&x2771)>>x2772);

	if (t98 != 104LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2834 = -1;
	uint8_t x2836 = 2U;
	volatile int32_t t99 = -3;

	t99 = (((x2833%x2834)&x2835)>>x2836);

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

