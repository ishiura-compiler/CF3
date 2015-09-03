#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = UINT16_MAX;
int64_t x4 = 1LL;
int32_t t0 = -680186;
uint8_t x8 = 20U;
volatile int64_t t1 = 5345655748LL;
static int16_t x54 = -3003;
int32_t x79 = 30;
int32_t x113 = -1;
uint8_t x116 = 1U;
static volatile int32_t x134 = 81577880;
static uint64_t x159 = 243729LLU;
uint8_t x250 = UINT8_MAX;
int64_t x354 = -1LL;
int8_t x355 = INT8_MAX;
static uint8_t x360 = 3U;
static uint8_t x418 = 0U;
uint8_t x440 = 1U;
uint16_t x458 = 2402U;
int8_t x594 = INT8_MIN;
static uint32_t x627 = 4U;
uint32_t x709 = UINT32_MAX;
volatile uint8_t x732 = 4U;
volatile uint64_t t25 = 1481119LLU;
uint32_t x769 = 21912983U;
uint32_t x770 = UINT32_MAX;
uint64_t t26 = 483086717799LLU;
volatile int8_t x778 = INT8_MIN;
static volatile int32_t x813 = INT32_MIN;
uint8_t x837 = 7U;
int8_t x842 = 7;
static int8_t x890 = INT8_MIN;
int16_t x892 = 2;
int32_t t33 = -932;
uint64_t x1013 = 7830673LLU;
int16_t x1061 = 0;
volatile int16_t x1063 = 6;
uint32_t x1082 = 646U;
int32_t x1083 = -1;
int32_t x1085 = INT32_MAX;
static volatile uint64_t t38 = 2237514184347426LLU;
int8_t x1124 = 12;
uint8_t x1143 = 2U;
uint8_t x1144 = 1U;
int64_t x1201 = INT64_MIN;
volatile uint64_t x1203 = 25221271LLU;
int32_t x1213 = -1;
static uint64_t t44 = 172628219LLU;
int64_t x1281 = -1LL;
int16_t x1282 = -3;
volatile int32_t t48 = -744865694;
volatile uint16_t x1360 = 0U;
uint32_t t52 = 146852U;
uint64_t x1551 = 2545397LLU;
uint16_t x1552 = 1U;
static uint32_t x1624 = 2U;
static volatile uint16_t x1640 = 4U;
static int16_t x1705 = INT16_MIN;
uint32_t x1829 = UINT32_MAX;
int8_t x1832 = 3;
int16_t x1833 = INT16_MAX;
uint32_t x1993 = 6923787U;
int64_t x2094 = 1399555291LL;
volatile uint8_t x2134 = 77U;
int64_t x2135 = INT64_MIN;
uint64_t x2136 = 30LLU;
volatile int64_t t68 = -10053580990002LL;
int16_t x2152 = 1;
int64_t t69 = -20159692LL;
int8_t x2292 = 14;
uint64_t x2323 = 18LLU;
int64_t t75 = 1568469366058LL;
int8_t x2449 = INT8_MIN;
uint8_t x2519 = UINT8_MAX;
int8_t x2558 = INT8_MAX;
static int8_t x2572 = 4;
int8_t x2826 = INT8_MAX;
int32_t x2857 = INT32_MAX;
static int8_t x2860 = 50;
volatile uint64_t t84 = 36LLU;
int64_t x2875 = INT64_MIN;
uint64_t x2882 = UINT64_MAX;
volatile uint64_t x2983 = 734448193883493442LLU;
uint8_t x2992 = 7U;
int16_t x3221 = INT16_MAX;
int8_t x3224 = 15;
int32_t t93 = -195;
static int64_t x3247 = INT64_MIN;
uint16_t x3248 = 27U;
static volatile int16_t x3262 = 23;
uint8_t x3287 = 5U;
int8_t x3327 = 0;
static int64_t t97 = -40933321055623LL;
static volatile uint8_t x3330 = 56U;
int64_t x3367 = -1LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int32_t x2 = INT32_MAX;

	t0 = (x1*((x2&x3)>>x4));

	if (t0 != 1073676289) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 755U;
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = 2907401773226236434LL;

	t1 = (x5*((x6&x7)>>x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 1075;
	int16_t x14 = INT16_MAX;
	static int64_t x15 = INT64_MAX;
	int8_t x16 = 12;
	int64_t t2 = -28277LL;

	t2 = (x13*((x14&x15)>>x16));

	if (t2 != 7525LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x33 = 983;
	uint8_t x34 = 47U;
	uint64_t x35 = 1194432LLU;
	volatile uint32_t x36 = 29U;
	static uint64_t t3 = 56LLU;

	t3 = (x33*((x34&x35)>>x36));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x53 = 398;
	int64_t x55 = 5631006LL;
	volatile uint8_t x56 = 1U;
	volatile int64_t t4 = -1LL;

	t4 = (x53*((x54&x55)>>x56));

	if (t4 != 1120157468LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x77 = -29731;
	int8_t x78 = INT8_MAX;
	uint32_t x80 = 1U;
	static volatile int32_t t5 = -12149079;

	t5 = (x77*((x78&x79)>>x80));

	if (t5 != -445965) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x114 = 26183LLU;
	int16_t x115 = INT16_MIN;
	volatile uint64_t t6 = 124LLU;

	t6 = (x113*((x114&x115)>>x116));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x133 = -1;
	static volatile int64_t x135 = -1LL;
	uint8_t x136 = 45U;
	int64_t t7 = -2658721076906567649LL;

	t7 = (x133*((x134&x135)>>x136));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x153 = -6;
	static int16_t x154 = 3715;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 11U;
	volatile int32_t t8 = 369;

	t8 = (x153*((x154&x155)>>x156));

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x157 = INT64_MIN;
	uint32_t x158 = 303924U;
	int8_t x160 = 19;
	static volatile uint64_t t9 = 118364004532067012LLU;

	t9 = (x157*((x158&x159)>>x160));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x249 = -11LL;
	static volatile int8_t x251 = INT8_MAX;
	uint32_t x252 = 12U;
	int64_t t10 = 1LL;

	t10 = (x249*((x250&x251)>>x252));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x265 = -1;
	volatile int64_t x266 = -1LL;
	int64_t x267 = 3033LL;
	uint16_t x268 = 6U;
	volatile int64_t t11 = -42727908941627LL;

	t11 = (x265*((x266&x267)>>x268));

	if (t11 != -47LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x353 = -1;
	uint16_t x356 = 3U;
	static int64_t t12 = -43271885367LL;

	t12 = (x353*((x354&x355)>>x356));

	if (t12 != -15LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x357 = -6LL;
	uint64_t x358 = 81560457527LLU;
	volatile int32_t x359 = INT32_MAX;
	volatile uint64_t t13 = 16034891LLU;

	t13 = (x357*((x358&x359)>>x360));

	if (t13 != 18446744072131879708LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x401 = 16157;
	static uint32_t x402 = 1606U;
	int16_t x403 = -1;
	volatile uint8_t x404 = 0U;
	static uint32_t t14 = 440U;

	t14 = (x401*((x402&x403)>>x404));

	if (t14 != 25948142U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x417 = -1;
	int64_t x419 = 26103471673LL;
	static volatile int16_t x420 = 22;
	static int64_t t15 = 3449713LL;

	t15 = (x417*((x418&x419)>>x420));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x437 = UINT16_MAX;
	static int8_t x438 = -1;
	uint64_t x439 = 553945635363168852LLU;
	static uint64_t t16 = 13398572LLU;

	t16 = (x437*((x438&x439)>>x440));

	if (t16 != 18264182306146119382LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x457 = INT8_MIN;
	uint8_t x459 = UINT8_MAX;
	int64_t x460 = 3LL;
	volatile int32_t t17 = 440930073;

	t17 = (x457*((x458&x459)>>x460));

	if (t17 != -1536) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x529 = 124930LL;
	volatile uint64_t x530 = UINT64_MAX;
	uint64_t x531 = 1090661290594448LLU;
	static uint16_t x532 = 10U;
	uint64_t t18 = 4538593267LLU;

	t18 = (x529*((x530&x531)>>x532));

	if (t18 != 133062807650338280LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x593 = 630U;
	uint64_t x595 = 401LLU;
	uint32_t x596 = 31U;
	volatile uint64_t t19 = 102893326LLU;

	t19 = (x593*((x594&x595)>>x596));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x617 = UINT8_MAX;
	volatile int8_t x618 = 14;
	static int16_t x619 = INT16_MAX;
	int8_t x620 = 1;
	int32_t t20 = -1603;

	t20 = (x617*((x618&x619)>>x620));

	if (t20 != 1785) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x625 = UINT16_MAX;
	uint8_t x626 = 5U;
	volatile uint8_t x628 = 15U;
	uint32_t t21 = 14U;

	t21 = (x625*((x626&x627)>>x628));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x637 = 20U;
	int32_t x638 = -1;
	uint8_t x639 = 116U;
	int16_t x640 = 6;
	volatile uint32_t t22 = 51653U;

	t22 = (x637*((x638&x639)>>x640));

	if (t22 != 20U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x701 = -258443008;
	uint8_t x702 = 7U;
	volatile uint32_t x703 = 234060468U;
	uint8_t x704 = 2U;
	uint32_t t23 = 250560U;

	t23 = (x701*((x702&x703)>>x704));

	if (t23 != 4036524288U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x710 = 10329775419LLU;
	volatile int64_t x711 = INT64_MIN;
	uint8_t x712 = 3U;
	uint64_t t24 = 479LLU;

	t24 = (x709*((x710&x711)>>x712));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x729 = 342566LL;
	static uint64_t x730 = UINT64_MAX;
	volatile int64_t x731 = INT64_MIN;

	t25 = (x729*((x730&x731)>>x732));

	if (t25 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x771 = 3259LLU;
	volatile uint8_t x772 = 14U;

	t26 = (x769*((x770&x771)>>x772));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x777 = 643583934185LLU;
	uint16_t x779 = 12U;
	static int32_t x780 = 0;
	uint64_t t27 = 496327567LLU;

	t27 = (x777*((x778&x779)>>x780));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x814 = 4U;
	volatile uint8_t x815 = UINT8_MAX;
	static int16_t x816 = 13;
	static volatile int32_t t28 = 194164;

	t28 = (x813*((x814&x815)>>x816));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x838 = UINT16_MAX;
	int8_t x839 = -1;
	int8_t x840 = 0;
	int32_t t29 = -7528699;

	t29 = (x837*((x838&x839)>>x840));

	if (t29 != 458745) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x841 = 173572U;
	int64_t x843 = INT64_MIN;
	uint8_t x844 = 2U;
	int64_t t30 = -6906229603752075LL;

	t30 = (x841*((x842&x843)>>x844));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x889 = 0;
	volatile int16_t x891 = INT16_MAX;
	int32_t t31 = -58;

	t31 = (x889*((x890&x891)>>x892));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x961 = 1745LL;
	volatile uint32_t x962 = 7U;
	volatile int64_t x963 = -913162308367855178LL;
	uint8_t x964 = 2U;
	volatile int64_t t32 = -69986553914LL;

	t32 = (x961*((x962&x963)>>x964));

	if (t32 != 1745LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x989 = INT32_MIN;
	int16_t x990 = INT16_MIN;
	volatile uint8_t x991 = UINT8_MAX;
	uint8_t x992 = 24U;

	t33 = (x989*((x990&x991)>>x992));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1014 = 7U;
	int32_t x1015 = -2;
	uint8_t x1016 = 4U;
	uint64_t t34 = 470660LLU;

	t34 = (x1013*((x1014&x1015)>>x1016));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1017 = INT16_MAX;
	uint8_t x1018 = 73U;
	int64_t x1019 = 3853235359LL;
	uint32_t x1020 = 23U;
	volatile int64_t t35 = 3511LL;

	t35 = (x1017*((x1018&x1019)>>x1020));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1062 = INT64_MIN;
	uint8_t x1064 = 0U;
	int64_t t36 = -19336101LL;

	t36 = (x1061*((x1062&x1063)>>x1064));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1081 = 107U;
	static volatile uint8_t x1084 = 5U;
	volatile uint32_t t37 = 971184711U;

	t37 = (x1081*((x1082&x1083)>>x1084));

	if (t37 != 2140U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1086 = INT16_MIN;
	volatile uint64_t x1087 = UINT64_MAX;
	int8_t x1088 = 3;

	t38 = (x1085*((x1086&x1087)>>x1088));

	if (t38 != 16140892268402839552LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1121 = 1U;
	int32_t x1122 = INT32_MIN;
	uint16_t x1123 = UINT16_MAX;
	volatile uint32_t t39 = 1211798U;

	t39 = (x1121*((x1122&x1123)>>x1124));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1141 = INT8_MAX;
	int8_t x1142 = INT8_MIN;
	volatile int32_t t40 = 1;

	t40 = (x1141*((x1142&x1143)>>x1144));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1161 = INT16_MAX;
	uint64_t x1162 = 6586994518882284379LLU;
	volatile int64_t x1163 = 0LL;
	static int32_t x1164 = 4;
	uint64_t t41 = 1037028026922415LLU;

	t41 = (x1161*((x1162&x1163)>>x1164));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1202 = INT64_MIN;
	volatile uint16_t x1204 = 0U;
	uint64_t t42 = 66466003LLU;

	t42 = (x1201*((x1202&x1203)>>x1204));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x1214 = 53U;
	uint8_t x1215 = UINT8_MAX;
	uint16_t x1216 = 14U;
	volatile int32_t t43 = -120285779;

	t43 = (x1213*((x1214&x1215)>>x1216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1245 = 3U;
	static int64_t x1246 = -717027952800181LL;
	uint64_t x1247 = 172966210456389790LLU;
	volatile int8_t x1248 = 0;

	t44 = (x1245*((x1246&x1247)>>x1248));

	if (t44 != 517170172294600734LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1261 = 121051692662LLU;
	static uint64_t x1262 = 23749256LLU;
	int16_t x1263 = INT16_MIN;
	uint8_t x1264 = 40U;
	volatile uint64_t t45 = 1724768382LLU;

	t45 = (x1261*((x1262&x1263)>>x1264));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1277 = INT32_MAX;
	uint8_t x1278 = 69U;
	volatile uint32_t x1279 = 40U;
	int8_t x1280 = 0;
	volatile uint32_t t46 = 8306930U;

	t46 = (x1277*((x1278&x1279)>>x1280));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1283 = 228;
	static uint8_t x1284 = 2U;
	int64_t t47 = 1197LL;

	t47 = (x1281*((x1282&x1283)>>x1284));

	if (t47 != -57LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1333 = -10;
	int16_t x1334 = -15836;
	int16_t x1335 = 1166;
	uint8_t x1336 = 5U;

	t48 = (x1333*((x1334&x1335)>>x1336));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1357 = INT32_MIN;
	int32_t x1358 = INT32_MIN;
	uint8_t x1359 = UINT8_MAX;
	static int32_t t49 = 10768913;

	t49 = (x1357*((x1358&x1359)>>x1360));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1457 = 9;
	static int16_t x1458 = INT16_MIN;
	uint64_t x1459 = 6150752669339LLU;
	uint8_t x1460 = 1U;
	uint64_t t50 = 12544429808LLU;

	t50 = (x1457*((x1458&x1459)>>x1460));

	if (t50 != 27678386995200LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1517 = INT32_MIN;
	uint8_t x1518 = 0U;
	int8_t x1519 = INT8_MIN;
	volatile int8_t x1520 = 0;
	volatile int32_t t51 = 3;

	t51 = (x1517*((x1518&x1519)>>x1520));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1525 = 1103350417U;
	int16_t x1526 = -22;
	uint8_t x1527 = UINT8_MAX;
	uint8_t x1528 = 1U;

	t52 = (x1525*((x1526&x1527)>>x1528));

	if (t52 != 242979909U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1549 = -1;
	uint16_t x1550 = 16608U;
	volatile uint64_t t53 = 415LLU;

	t53 = (x1549*((x1550&x1551)>>x1552));

	if (t53 != 18446744073709543312LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1577 = UINT32_MAX;
	static uint16_t x1578 = 3U;
	static uint8_t x1579 = UINT8_MAX;
	uint32_t x1580 = 0U;
	volatile uint32_t t54 = 1017U;

	t54 = (x1577*((x1578&x1579)>>x1580));

	if (t54 != 4294967293U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x1621 = INT64_MAX;
	uint64_t x1622 = 7066046LLU;
	uint64_t x1623 = 60538468373LLU;
	static uint64_t t55 = 453649551456LLU;

	t55 = (x1621*((x1622&x1623)>>x1624));

	if (t55 != 9223372036853537787LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1637 = INT8_MIN;
	int32_t x1638 = 58639;
	int32_t x1639 = -749;
	volatile int32_t t56 = -1142975;

	t56 = (x1637*((x1638&x1639)>>x1640));

	if (t56 != -468992) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x1693 = UINT8_MAX;
	static volatile int64_t x1694 = INT64_MIN;
	volatile uint8_t x1695 = UINT8_MAX;
	volatile uint8_t x1696 = 4U;
	static volatile int64_t t57 = 14069610228289984LL;

	t57 = (x1693*((x1694&x1695)>>x1696));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1706 = 0;
	volatile int16_t x1707 = INT16_MIN;
	uint16_t x1708 = 1U;
	volatile int32_t t58 = -395;

	t58 = (x1705*((x1706&x1707)>>x1708));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1830 = UINT8_MAX;
	int16_t x1831 = INT16_MIN;
	uint32_t t59 = 905U;

	t59 = (x1829*((x1830&x1831)>>x1832));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x1834 = INT64_MIN;
	uint8_t x1835 = 1U;
	uint16_t x1836 = 4U;
	volatile int64_t t60 = -778745301141333871LL;

	t60 = (x1833*((x1834&x1835)>>x1836));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x1849 = -1;
	static int8_t x1850 = INT8_MIN;
	uint16_t x1851 = 1967U;
	int32_t x1852 = 10;
	int32_t t61 = 156;

	t61 = (x1849*((x1850&x1851)>>x1852));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1941 = -1LL;
	volatile int16_t x1942 = -1;
	static int8_t x1943 = INT8_MAX;
	uint16_t x1944 = 25U;
	volatile int64_t t62 = -1814179734LL;

	t62 = (x1941*((x1942&x1943)>>x1944));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1989 = 126U;
	static volatile int64_t x1990 = 6064428002LL;
	static int32_t x1991 = -38;
	int16_t x1992 = 1;
	int64_t t63 = -69814688644518LL;

	t63 = (x1989*((x1990&x1991)>>x1992));

	if (t63 != 382058962110LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1994 = 4U;
	static int64_t x1995 = -3708381319LL;
	int8_t x1996 = 3;
	volatile int64_t t64 = -5174225625074131LL;

	t64 = (x1993*((x1994&x1995)>>x1996));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2045 = INT8_MIN;
	static volatile int8_t x2046 = INT8_MAX;
	uint8_t x2047 = 9U;
	volatile uint8_t x2048 = 7U;
	static volatile int32_t t65 = 5101107;

	t65 = (x2045*((x2046&x2047)>>x2048));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2093 = -1;
	int8_t x2095 = INT8_MIN;
	uint8_t x2096 = 1U;
	static int64_t t66 = 9LL;

	t66 = (x2093*((x2094&x2095)>>x2096));

	if (t66 != -699777600LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2113 = INT16_MIN;
	int8_t x2114 = -1;
	uint32_t x2115 = 3111027U;
	int8_t x2116 = 30;
	volatile uint32_t t67 = 53U;

	t67 = (x2113*((x2114&x2115)>>x2116));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2133 = 901822401558LL;

	t68 = (x2133*((x2134&x2135)>>x2136));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x2149 = 5173425;
	int64_t x2150 = -1LL;
	uint16_t x2151 = UINT16_MAX;

	t69 = (x2149*((x2150&x2151)>>x2152));

	if (t69 != 169517616975LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2257 = INT64_MIN;
	static uint64_t x2258 = 209LLU;
	int32_t x2259 = INT32_MAX;
	uint8_t x2260 = 3U;
	volatile uint64_t t70 = 6164692820033766254LLU;

	t70 = (x2257*((x2258&x2259)>>x2260));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x2289 = 2U;
	static int8_t x2290 = -1;
	static uint8_t x2291 = 11U;
	volatile int32_t t71 = 3;

	t71 = (x2289*((x2290&x2291)>>x2292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2321 = UINT32_MAX;
	int8_t x2322 = 50;
	static int8_t x2324 = 7;
	volatile uint64_t t72 = 918690435312152010LLU;

	t72 = (x2321*((x2322&x2323)>>x2324));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2353 = INT32_MIN;
	volatile uint32_t x2354 = 23756346U;
	int16_t x2355 = INT16_MIN;
	uint16_t x2356 = 1U;
	uint32_t t73 = 1519U;

	t73 = (x2353*((x2354&x2355)>>x2356));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2361 = INT64_MIN;
	int32_t x2362 = INT32_MIN;
	int32_t x2363 = INT32_MAX;
	static int8_t x2364 = 0;
	int64_t t74 = 63125813LL;

	t74 = (x2361*((x2362&x2363)>>x2364));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2437 = 20475070465111736LL;
	int64_t x2438 = -68823880646154662LL;
	uint8_t x2439 = 4U;
	volatile uint16_t x2440 = 12U;

	t75 = (x2437*((x2438&x2439)>>x2440));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2445 = 9U;
	int64_t x2446 = INT64_MAX;
	uint8_t x2447 = 105U;
	uint8_t x2448 = 24U;
	int64_t t76 = -126649325LL;

	t76 = (x2445*((x2446&x2447)>>x2448));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2450 = UINT64_MAX;
	int32_t x2451 = -389888036;
	uint8_t x2452 = 10U;
	static uint64_t t77 = 3620102774903LLU;

	t77 = (x2449*((x2450&x2451)>>x2452));

	if (t77 != 16140901064544593792LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2517 = INT8_MIN;
	volatile int8_t x2518 = INT8_MIN;
	int8_t x2520 = 0;
	int32_t t78 = 26;

	t78 = (x2517*((x2518&x2519)>>x2520));

	if (t78 != -16384) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2557 = -1LL;
	volatile uint32_t x2559 = 1U;
	static uint64_t x2560 = 4LLU;
	int64_t t79 = -84058476LL;

	t79 = (x2557*((x2558&x2559)>>x2560));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2569 = 87U;
	volatile uint16_t x2570 = 10U;
	static int64_t x2571 = 50293LL;
	int64_t t80 = 1299783818577LL;

	t80 = (x2569*((x2570&x2571)>>x2572));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2813 = 981405358850LL;
	int64_t x2814 = -4584458612LL;
	int16_t x2815 = 21;
	static uint16_t x2816 = 1U;
	int64_t t81 = 3572714864409821LL;

	t81 = (x2813*((x2814&x2815)>>x2816));

	if (t81 != 1962810717700LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2825 = -1663582LL;
	int16_t x2827 = INT16_MIN;
	int8_t x2828 = 1;
	static int64_t t82 = 2090161552LL;

	t82 = (x2825*((x2826&x2827)>>x2828));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2858 = 12946U;
	uint64_t x2859 = 75649840LLU;
	volatile uint64_t t83 = 27795518LLU;

	t83 = (x2857*((x2858&x2859)>>x2860));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2865 = -1444281651665LL;
	uint64_t x2866 = 1946310281274958533LLU;
	volatile uint32_t x2867 = 67U;
	volatile uint32_t x2868 = 15U;

	t84 = (x2865*((x2866&x2867)>>x2868));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x2873 = INT32_MAX;
	int32_t x2874 = 0;
	int8_t x2876 = 22;
	int64_t t85 = 100808630627724LL;

	t85 = (x2873*((x2874&x2875)>>x2876));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x2881 = INT8_MAX;
	int64_t x2883 = -498795461762LL;
	uint32_t x2884 = 0U;
	uint64_t t86 = 1295285278200884LLU;

	t86 = (x2881*((x2882&x2883)>>x2884));

	if (t86 != 18446680726685907842LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2945 = 1;
	int8_t x2946 = -1;
	static uint32_t x2947 = 25951U;
	static volatile int8_t x2948 = 0;
	volatile uint32_t t87 = 2038581102U;

	t87 = (x2945*((x2946&x2947)>>x2948));

	if (t87 != 25951U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2981 = -1;
	volatile int8_t x2982 = INT8_MIN;
	int64_t x2984 = 8LL;
	uint64_t t88 = 115049495844717679LLU;

	t88 = (x2981*((x2982&x2983)>>x2984));

	if (t88 != 18443875135452194220LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2989 = 18055530856LLU;
	int64_t x2990 = INT64_MIN;
	volatile int64_t x2991 = INT64_MAX;
	static uint64_t t89 = 17598327437207LLU;

	t89 = (x2989*((x2990&x2991)>>x2992));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2993 = UINT8_MAX;
	static volatile uint16_t x2994 = 1553U;
	int64_t x2995 = INT64_MIN;
	uint16_t x2996 = 52U;
	volatile int64_t t90 = -12428LL;

	t90 = (x2993*((x2994&x2995)>>x2996));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3069 = -1;
	int32_t x3070 = INT32_MAX;
	uint32_t x3071 = 59799U;
	volatile uint8_t x3072 = 13U;
	volatile uint32_t t91 = 22879U;

	t91 = (x3069*((x3070&x3071)>>x3072));

	if (t91 != 4294967289U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3222 = INT8_MIN;
	int64_t x3223 = 39618575147475LL;
	volatile int64_t t92 = -951786LL;

	t92 = (x3221*((x3222&x3223)>>x3224));

	if (t92 != 39617366075854LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3237 = -1;
	int32_t x3238 = -92;
	int32_t x3239 = 1060826889;
	int8_t x3240 = 1;

	t93 = (x3237*((x3238&x3239)>>x3240));

	if (t93 != -530413440) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3245 = 452623498337657LLU;
	uint64_t x3246 = 875755719743360LLU;
	static volatile uint64_t t94 = 83884LLU;

	t94 = (x3245*((x3246&x3247)>>x3248));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3261 = INT32_MAX;
	uint64_t x3263 = 29313LLU;
	uint8_t x3264 = 30U;
	uint64_t t95 = 9021957297189LLU;

	t95 = (x3261*((x3262&x3263)>>x3264));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3285 = 0;
	int32_t x3286 = INT32_MIN;
	static int64_t x3288 = 1LL;
	volatile int32_t t96 = 1240891;

	t96 = (x3285*((x3286&x3287)>>x3288));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3325 = -99299606649605LL;
	volatile int8_t x3326 = -1;
	volatile uint8_t x3328 = 0U;

	t97 = (x3325*((x3326&x3327)>>x3328));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3329 = INT32_MAX;
	uint64_t x3331 = UINT64_MAX;
	uint8_t x3332 = 3U;
	volatile uint64_t t98 = 104492448226LLU;

	t98 = (x3329*((x3330&x3331)>>x3332));

	if (t98 != 15032385529LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3365 = 62U;
	uint8_t x3366 = 122U;
	uint8_t x3368 = 3U;
	volatile int64_t t99 = -31618229496826LL;

	t99 = (x3365*((x3366&x3367)>>x3368));

	if (t99 != 930LL) { NG(); } else { ; }
	
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

