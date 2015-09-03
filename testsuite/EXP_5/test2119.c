#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = 26;
int64_t x31 = INT64_MIN;
uint8_t x128 = 0U;
uint64_t x145 = 13131440066326LLU;
static uint64_t t3 = 5437LLU;
static int8_t x257 = INT8_MIN;
uint64_t x259 = UINT64_MAX;
volatile uint8_t x408 = 19U;
static uint16_t x409 = UINT16_MAX;
uint64_t t11 = 272821LLU;
uint8_t x561 = UINT8_MAX;
int8_t x563 = -1;
int8_t x621 = -1;
uint32_t x622 = 18U;
uint8_t x624 = 1U;
volatile uint16_t x769 = 494U;
static int16_t x797 = 0;
int32_t x843 = 5;
static int16_t x937 = -1;
int8_t x1015 = INT8_MIN;
static int64_t t20 = -32753413801LL;
int32_t x1037 = -1;
int8_t x1039 = INT8_MAX;
volatile int32_t x1131 = 117753;
uint32_t t25 = 1U;
volatile int16_t x1163 = -1;
int8_t x1272 = 3;
int64_t x1337 = -1107947137384460LL;
int8_t x1373 = INT8_MIN;
uint64_t t35 = 12582067011049LLU;
static int16_t x1395 = INT16_MIN;
static uint8_t x1515 = 101U;
volatile int32_t x1566 = INT32_MIN;
volatile uint64_t x1597 = 10502359414866LLU;
int8_t x1598 = INT8_MAX;
volatile uint64_t t40 = 59LLU;
int16_t x1613 = 3821;
int32_t x1614 = 309;
uint64_t x1615 = 533338328LLU;
uint32_t x1719 = 1635398U;
int8_t x1740 = 0;
volatile uint64_t t48 = 3LLU;
volatile int32_t t52 = -63999;
int16_t x2171 = 7;
int32_t x2172 = 0;
static int16_t x2400 = 29;
int32_t x2406 = INT32_MAX;
uint64_t x2458 = UINT64_MAX;
static volatile uint64_t t56 = 25385LLU;
uint8_t x2533 = 63U;
uint32_t t57 = 61200U;
static int64_t t58 = 9075492666LL;
int32_t x2791 = INT32_MIN;
int32_t t61 = -187405779;
int16_t x2918 = 16;
static int64_t x2945 = INT64_MIN;
int16_t x2946 = -1;
static volatile uint64_t t65 = 1901728834011323LLU;
static int8_t x3008 = 1;
int16_t x3094 = INT16_MIN;
volatile int16_t x3097 = INT16_MAX;
int8_t x3100 = 8;
static volatile int32_t t68 = -51;
static int16_t x3106 = -1;
static volatile int8_t x3147 = INT8_MAX;
uint32_t t71 = 2U;
uint16_t x3433 = 84U;
int64_t x3462 = -1LL;
int32_t x3477 = 772130585;
volatile uint64_t x3478 = UINT64_MAX;
int8_t x3516 = 3;
static uint8_t x3657 = UINT8_MAX;
static uint32_t x3659 = 78817871U;
int8_t x3870 = INT8_MIN;
uint64_t x3871 = 47049733LLU;
uint8_t x3876 = 20U;
int16_t x3962 = -15879;
uint8_t x3964 = 11U;
volatile uint64_t t89 = 3LLU;
int16_t x4205 = INT16_MAX;
static int64_t t96 = 4LL;
int64_t x4455 = INT64_MIN;


void f0(void) {
	static int32_t x1 = 432742;
	volatile int8_t x2 = -1;
	int64_t x3 = INT64_MIN;
	volatile int64_t t0 = 4611695666LL;

	t0 = (x1^((x2^x3)>>x4));

	if (t0 != 137438520729LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MIN;
	uint16_t x32 = 1U;
	volatile int64_t t1 = -68LL;

	t1 = (x29^((x30^x31)>>x32));

	if (t1 != -4611686017353678848LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x125 = -3;
	static int32_t x126 = INT32_MAX;
	volatile int16_t x127 = 0;
	static int32_t t2 = 5181356;

	t2 = (x125^((x126^x127)>>x128));

	if (t2 != -2147483646) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x146 = 462;
	int64_t x147 = 20377219365154LL;
	volatile int8_t x148 = 20;

	t3 = (x145^((x146^x147)>>x148));

	if (t3 != 13131459495960LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x149 = INT16_MIN;
	volatile int16_t x150 = -1;
	int16_t x151 = -1;
	uint8_t x152 = 8U;
	volatile int32_t t4 = -21;

	t4 = (x149^((x150^x151)>>x152));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x225 = 24;
	static int64_t x226 = -1LL;
	int8_t x227 = INT8_MIN;
	static int8_t x228 = 2;
	volatile int64_t t5 = 208963LL;

	t5 = (x225^((x226^x227)>>x228));

	if (t5 != 7LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x258 = 92736931U;
	static volatile int8_t x260 = 0;
	uint64_t t6 = 9109762463789746450LLU;

	t6 = (x257^((x258^x259)>>x260));

	if (t6 != 92736988LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x297 = INT8_MIN;
	uint64_t x298 = 42668624LLU;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = 44U;
	volatile uint64_t t7 = 3501565075328083LLU;

	t7 = (x297^((x298^x299)>>x300));

	if (t7 != 18446744073708503167LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 5U;
	static volatile int64_t t8 = 3564378LL;

	t8 = (x369^((x370^x371)>>x372));

	if (t8 != 8935141660770172927LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x405 = INT8_MIN;
	volatile int32_t x406 = INT32_MIN;
	static uint64_t x407 = 2255731049592297592LLU;
	volatile uint64_t t9 = 313223527256391LLU;

	t9 = (x405^((x406^x407)>>x408));

	if (t9 != 18446713191802997368LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x410 = -1;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 0U;
	volatile int32_t t10 = -1032141;

	t10 = (x409^((x410^x411)>>x412));

	if (t10 != 65408) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x525 = 64767979LLU;
	int32_t x526 = 478;
	volatile int8_t x527 = 1;
	int8_t x528 = 0;

	t11 = (x525^((x526^x527)>>x528));

	if (t11 != 64767540LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x562 = 0LLU;
	uint8_t x564 = 1U;
	volatile uint64_t t12 = 209LLU;

	t12 = (x561^((x562^x563)>>x564));

	if (t12 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x623 = INT32_MIN;
	static uint32_t t13 = 1661193519U;

	t13 = (x621^((x622^x623)>>x624));

	if (t13 != 3221225462U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x770 = 21U;
	volatile uint8_t x771 = 15U;
	static uint8_t x772 = 2U;
	volatile int32_t t14 = -8534;

	t14 = (x769^((x770^x771)>>x772));

	if (t14 != 488) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x798 = -1;
	int16_t x799 = -73;
	uint8_t x800 = 0U;
	volatile int32_t t15 = -1;

	t15 = (x797^((x798^x799)>>x800));

	if (t15 != 72) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x841 = INT64_MAX;
	int64_t x842 = 646500160LL;
	uint8_t x844 = 0U;
	static int64_t t16 = 13114623800427604LL;

	t16 = (x841^((x842^x843)>>x844));

	if (t16 != 9223372036208275642LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x905 = 1;
	volatile uint32_t x906 = 824U;
	uint64_t x907 = UINT64_MAX;
	volatile uint8_t x908 = 7U;
	volatile uint64_t t17 = 3546682589LLU;

	t17 = (x905^((x906^x907)>>x908));

	if (t17 != 144115188075855864LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x938 = -1LL;
	int8_t x939 = INT8_MIN;
	volatile int8_t x940 = 0;
	static volatile int64_t t18 = -10326952687LL;

	t18 = (x937^((x938^x939)>>x940));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x981 = INT16_MIN;
	int8_t x982 = 3;
	int8_t x983 = 46;
	int16_t x984 = 1;
	volatile int32_t t19 = 3;

	t19 = (x981^((x982^x983)>>x984));

	if (t19 != -32746) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1013 = 939LL;
	volatile int16_t x1014 = -1;
	volatile int16_t x1016 = 11;

	t20 = (x1013^((x1014^x1015)>>x1016));

	if (t20 != 939LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1017 = -1LL;
	static int64_t x1018 = INT64_MAX;
	uint32_t x1019 = 13328921U;
	int16_t x1020 = 7;
	int64_t t21 = -1815361716913LL;

	t21 = (x1017^((x1018^x1019)>>x1020));

	if (t21 != -72057594037823804LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1033 = INT8_MIN;
	static int64_t x1034 = -1LL;
	int8_t x1035 = INT8_MIN;
	int32_t x1036 = 1;
	int64_t t22 = 2254007169317LL;

	t22 = (x1033^((x1034^x1035)>>x1036));

	if (t22 != -65LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1038 = 2522320986247637LLU;
	static uint8_t x1040 = 2U;
	volatile uint64_t t23 = 132693270766785LLU;

	t23 = (x1037^((x1038^x1039)>>x1040));

	if (t23 != 18446113493462989717LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x1065 = UINT8_MAX;
	int8_t x1066 = INT8_MAX;
	uint16_t x1067 = 5495U;
	int8_t x1068 = 2;
	volatile int32_t t24 = -10706;

	t24 = (x1065^((x1066^x1067)>>x1068));

	if (t24 != 1469) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1129 = -1;
	uint32_t x1130 = 119601064U;
	int8_t x1132 = 1;

	t25 = (x1129^((x1130^x1131)>>x1132));

	if (t25 != 4235157975U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1161 = -1;
	volatile int64_t x1162 = -1LL;
	uint8_t x1164 = 3U;
	volatile int64_t t26 = 503308192LL;

	t26 = (x1161^((x1162^x1163)>>x1164));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1269 = 21U;
	uint64_t x1270 = 3062194302030707220LLU;
	int32_t x1271 = INT32_MIN;
	volatile uint64_t t27 = 129963551916478901LLU;

	t27 = (x1269^((x1270^x1271)>>x1272));

	if (t27 != 1923068721551146839LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1273 = 6LL;
	static uint16_t x1274 = 124U;
	uint8_t x1275 = 65U;
	int16_t x1276 = 2;
	volatile int64_t t28 = 64LL;

	t28 = (x1273^((x1274^x1275)>>x1276));

	if (t28 != 9LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1297 = INT64_MAX;
	int64_t x1298 = 29155188846LL;
	static volatile uint64_t x1299 = UINT64_MAX;
	uint8_t x1300 = 15U;
	uint64_t t29 = 683497776123LLU;

	t29 = (x1297^((x1298^x1299)>>x1300));

	if (t29 != 9222809086902244241LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1305 = -447;
	uint64_t x1306 = UINT64_MAX;
	uint64_t x1307 = 19269376648603LLU;
	volatile uint8_t x1308 = 22U;
	volatile uint64_t t30 = 78177276357691989LLU;

	t30 = (x1305^((x1306^x1307)>>x1308));

	if (t30 != 18446739675667635135LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1338 = 1235503743246LLU;
	int32_t x1339 = INT32_MIN;
	int8_t x1340 = 33;
	static uint64_t t31 = 4441590255389593456LLU;

	t31 = (x1337^((x1338^x1339)>>x1340));

	if (t31 != 18445636124812361860LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1345 = INT8_MAX;
	int32_t x1346 = -1;
	uint64_t x1347 = UINT64_MAX;
	static uint16_t x1348 = 3U;
	uint64_t t32 = 14465991972LLU;

	t32 = (x1345^((x1346^x1347)>>x1348));

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1361 = 1129081440749LLU;
	int16_t x1362 = INT16_MIN;
	uint64_t x1363 = 18981307717289LLU;
	uint32_t x1364 = 41U;
	uint64_t t33 = 6152987300881993213LLU;

	t33 = (x1361^((x1362^x1363)>>x1364));

	if (t33 != 1129073112602LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1374 = INT32_MIN;
	int8_t x1375 = -1;
	int8_t x1376 = 1;
	volatile int32_t t34 = -1627596;

	t34 = (x1373^((x1374^x1375)>>x1376));

	if (t34 != -1073741697) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1389 = INT64_MIN;
	int64_t x1390 = 32729406240504LL;
	static uint64_t x1391 = 1LLU;
	volatile uint16_t x1392 = 57U;

	t35 = (x1389^((x1390^x1391)>>x1392));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1393 = INT32_MIN;
	int8_t x1394 = -1;
	static uint64_t x1396 = 18LLU;
	static int32_t t36 = INT32_MIN;

	t36 = (x1393^((x1394^x1395)>>x1396));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1473 = INT32_MAX;
	static uint8_t x1474 = 54U;
	int64_t x1475 = INT64_MAX;
	uint8_t x1476 = 7U;
	static volatile int64_t t37 = -24784676163951LL;

	t37 = (x1473^((x1474^x1475)>>x1476));

	if (t37 != 72057591890444288LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1513 = 249;
	uint64_t x1514 = 42408531LLU;
	int8_t x1516 = 0;
	static uint64_t t38 = 1LLU;

	t38 = (x1513^((x1514^x1515)>>x1516));

	if (t38 != 42408655LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1565 = 1256874020017767LLU;
	int16_t x1567 = -1;
	int8_t x1568 = 14;
	uint64_t t39 = 82836732435LLU;

	t39 = (x1565^((x1566^x1567)>>x1568));

	if (t39 != 1256874019940760LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x1599 = INT32_MAX;
	uint32_t x1600 = 26U;

	t40 = (x1597^((x1598^x1599)>>x1600));

	if (t40 != 10502359414861LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1616 = 4U;
	volatile uint64_t t41 = 4690LLU;

	t41 = (x1613^((x1614^x1615)>>x1616));

	if (t41 != 33337203LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1717 = -485269029LL;
	uint64_t x1718 = 2433LLU;
	int8_t x1720 = 3;
	uint64_t t42 = 194754734249298140LLU;

	t42 = (x1717^((x1718^x1719)>>x1720));

	if (t42 != 18446744073224093283LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1721 = 30U;
	static int16_t x1722 = -1;
	uint64_t x1723 = UINT64_MAX;
	int8_t x1724 = 27;
	volatile uint64_t t43 = 238863679574246004LLU;

	t43 = (x1721^((x1722^x1723)>>x1724));

	if (t43 != 30LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x1737 = UINT16_MAX;
	int32_t x1738 = 5336534;
	static volatile uint8_t x1739 = 1U;
	volatile int32_t t44 = 27555;

	t44 = (x1737^((x1738^x1739)>>x1740));

	if (t44 != 5345832) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1837 = INT16_MIN;
	uint32_t x1838 = 970389144U;
	uint8_t x1839 = 5U;
	static volatile uint8_t x1840 = 1U;
	uint32_t t45 = 3U;

	t45 = (x1837^((x1838^x1839)>>x1840));

	if (t45 != 3809803086U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1861 = 3943;
	int32_t x1862 = INT32_MIN;
	static uint32_t x1863 = UINT32_MAX;
	static int32_t x1864 = 23;
	static uint32_t t46 = 183067U;

	t46 = (x1861^((x1862^x1863)>>x1864));

	if (t46 != 3992U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2005 = -1LL;
	volatile uint32_t x2006 = 839756401U;
	uint8_t x2007 = UINT8_MAX;
	int16_t x2008 = 8;
	int64_t t47 = -1274LL;

	t47 = (x2005^((x2006^x2007)>>x2008));

	if (t47 != -3280299LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2017 = UINT8_MAX;
	static uint64_t x2018 = 27660748LLU;
	int64_t x2019 = INT64_MIN;
	static uint8_t x2020 = 2U;

	t48 = (x2017^((x2018^x2019)>>x2020));

	if (t48 != 2305843009220609164LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2105 = INT16_MAX;
	volatile int64_t x2106 = INT64_MIN;
	int64_t x2107 = -1LL;
	int16_t x2108 = 14;
	static int64_t t49 = -173LL;

	t49 = (x2105^((x2106^x2107)>>x2108));

	if (t49 != 562949953388544LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2141 = -58;
	int32_t x2142 = 12;
	static uint32_t x2143 = 506538284U;
	static int8_t x2144 = 1;
	uint32_t t50 = 1925U;

	t50 = (x2141^((x2142^x2143)>>x2144));

	if (t50 != 4041698134U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2161 = UINT32_MAX;
	int64_t x2162 = 122727LL;
	uint32_t x2163 = UINT32_MAX;
	uint8_t x2164 = 0U;
	static int64_t t51 = 1144594103LL;

	t51 = (x2161^((x2162^x2163)>>x2164));

	if (t51 != 122727LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2165 = 3;
	int16_t x2166 = INT16_MIN;
	int16_t x2167 = -29;
	volatile uint32_t x2168 = 1U;

	t52 = (x2165^((x2166^x2167)>>x2168));

	if (t52 != 16370) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2169 = INT32_MAX;
	static int8_t x2170 = INT8_MAX;
	static volatile int32_t t53 = 0;

	t53 = (x2169^((x2170^x2171)>>x2172));

	if (t53 != 2147483527) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2397 = 472U;
	static volatile int16_t x2398 = -1;
	int64_t x2399 = INT64_MIN;
	volatile int64_t t54 = -4865LL;

	t54 = (x2397^((x2398^x2399)>>x2400));

	if (t54 != 17179868711LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2405 = 12404U;
	int64_t x2407 = INT64_MAX;
	static int8_t x2408 = 1;
	static int64_t t55 = -41LL;

	t55 = (x2405^((x2406^x2407)>>x2408));

	if (t55 != 4611686017353658484LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2457 = 3U;
	uint16_t x2459 = 62U;
	static int8_t x2460 = 2;

	t56 = (x2457^((x2458^x2459)>>x2460));

	if (t56 != 4611686018427387891LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2534 = 158822U;
	volatile int16_t x2535 = -1;
	uint16_t x2536 = 12U;

	t57 = (x2533^((x2534^x2535)>>x2536));

	if (t57 != 1048550U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2561 = UINT8_MAX;
	volatile int16_t x2562 = 4161;
	static int64_t x2563 = INT64_MAX;
	int8_t x2564 = 0;

	t58 = (x2561^((x2562^x2563)>>x2564));

	if (t58 != 9223372036854771521LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2625 = 15;
	uint8_t x2626 = 100U;
	static int8_t x2627 = 2;
	volatile uint8_t x2628 = 6U;
	volatile int32_t t59 = -11607;

	t59 = (x2625^((x2626^x2627)>>x2628));

	if (t59 != 14) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x2721 = INT32_MIN;
	int8_t x2722 = INT8_MIN;
	uint32_t x2723 = UINT32_MAX;
	int16_t x2724 = 1;
	static volatile uint32_t t60 = 242638U;

	t60 = (x2721^((x2722^x2723)>>x2724));

	if (t60 != 2147483711U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2789 = INT8_MIN;
	static int8_t x2790 = INT8_MIN;
	uint16_t x2792 = 5U;

	t61 = (x2789^((x2790^x2791)>>x2792));

	if (t61 != -67108740) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2865 = -1;
	volatile int32_t x2866 = -1194;
	int64_t x2867 = INT64_MIN;
	static uint64_t x2868 = 47LLU;
	int64_t t62 = 358991898309167LL;

	t62 = (x2865^((x2866^x2867)>>x2868));

	if (t62 != -65536LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2917 = INT32_MIN;
	uint16_t x2919 = 7077U;
	uint16_t x2920 = 1U;
	volatile int32_t t63 = -1333;

	t63 = (x2917^((x2918^x2919)>>x2920));

	if (t63 != -2147480102) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2941 = INT32_MIN;
	int32_t x2942 = -55498;
	uint64_t x2943 = 326364826737818LLU;
	int8_t x2944 = 43;
	volatile uint64_t t64 = 61381793091326LLU;

	t64 = (x2941^((x2942^x2943)>>x2944));

	if (t64 != 18446744071564165082LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x2947 = 1089LLU;
	int16_t x2948 = 1;

	t65 = (x2945^((x2946^x2947)>>x2948));

	if (t65 != 18446744073709551071LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3005 = 0;
	static int64_t x3006 = INT64_MIN;
	static int16_t x3007 = INT16_MIN;
	static volatile int64_t t66 = -119850LL;

	t66 = (x3005^((x3006^x3007)>>x3008));

	if (t66 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3093 = 4;
	static volatile int32_t x3095 = INT32_MIN;
	uint16_t x3096 = 1U;
	int32_t t67 = -1;

	t67 = (x3093^((x3094^x3095)>>x3096));

	if (t67 != 1073725444) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3098 = INT8_MIN;
	int16_t x3099 = -1;

	t68 = (x3097^((x3098^x3099)>>x3100));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3105 = INT16_MIN;
	volatile uint64_t x3107 = 376332551843LLU;
	int8_t x3108 = 50;
	uint64_t t69 = 974328682LLU;

	t69 = (x3105^((x3106^x3107)>>x3108));

	if (t69 != 18446744073709535231LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3145 = -22;
	volatile uint32_t x3146 = 6407U;
	uint32_t x3148 = 30U;
	volatile uint32_t t70 = 212U;

	t70 = (x3145^((x3146^x3147)>>x3148));

	if (t70 != 4294967274U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3197 = UINT32_MAX;
	int32_t x3198 = -460889388;
	uint32_t x3199 = 143592550U;
	int32_t x3200 = 2;

	t71 = (x3197^((x3198^x3199)>>x3200));

	if (t71 != 3304973395U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x3201 = -22;
	int16_t x3202 = 2710;
	volatile uint32_t x3203 = UINT32_MAX;
	uint8_t x3204 = 1U;
	volatile uint32_t t72 = 31770316U;

	t72 = (x3201^((x3202^x3203)>>x3204));

	if (t72 != 2147485022U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3305 = INT8_MAX;
	uint32_t x3306 = 1U;
	static int32_t x3307 = INT32_MAX;
	int8_t x3308 = 0;
	volatile uint32_t t73 = 12U;

	t73 = (x3305^((x3306^x3307)>>x3308));

	if (t73 != 2147483521U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3413 = -12;
	volatile int64_t x3414 = 72216610LL;
	uint8_t x3415 = 0U;
	uint8_t x3416 = 12U;
	int64_t t74 = -346871351492802973LL;

	t74 = (x3413^((x3414^x3415)>>x3416));

	if (t74 != -17621LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3434 = -1LL;
	int32_t x3435 = INT32_MIN;
	uint32_t x3436 = 44U;
	static int64_t t75 = -42982LL;

	t75 = (x3433^((x3434^x3435)>>x3436));

	if (t75 != 84LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3441 = -2;
	static int64_t x3442 = 525697533558153LL;
	uint16_t x3443 = 111U;
	static volatile uint8_t x3444 = 0U;
	static volatile int64_t t76 = -2067443175008863919LL;

	t76 = (x3441^((x3442^x3443)>>x3444));

	if (t76 != -525697533558248LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3461 = INT8_MAX;
	volatile int16_t x3463 = INT16_MIN;
	int8_t x3464 = 1;
	int64_t t77 = 351LL;

	t77 = (x3461^((x3462^x3463)>>x3464));

	if (t77 != 16256LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3479 = 12653U;
	uint8_t x3480 = 3U;
	static volatile uint64_t t78 = 37LLU;

	t78 = (x3477^((x3478^x3479)>>x3480));

	if (t78 != 2305843008441564875LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x3513 = 2U;
	int64_t x3514 = INT64_MAX;
	uint32_t x3515 = 560U;
	volatile int64_t t79 = 372195996543556LL;

	t79 = (x3513^((x3514^x3515)>>x3516));

	if (t79 != 1152921504606846907LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x3537 = UINT8_MAX;
	int16_t x3538 = INT16_MIN;
	int8_t x3539 = INT8_MIN;
	static uint32_t x3540 = 3U;
	int32_t t80 = 5664842;

	t80 = (x3537^((x3538^x3539)>>x3540));

	if (t80 != 3855) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3597 = INT8_MIN;
	int32_t x3598 = INT32_MIN;
	static int32_t x3599 = INT32_MIN;
	int8_t x3600 = 2;
	volatile int32_t t81 = 33589;

	t81 = (x3597^((x3598^x3599)>>x3600));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x3658 = UINT32_MAX;
	uint8_t x3660 = 15U;
	volatile uint32_t t82 = 2634U;

	t82 = (x3657^((x3658^x3659)>>x3660));

	if (t82 != 128613U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3721 = -1LL;
	static uint64_t x3722 = 2045591040938346396LLU;
	uint64_t x3723 = 212600504992388LLU;
	uint8_t x3724 = 11U;
	volatile uint64_t t83 = 15726268LLU;

	t83 = (x3721^((x3722^x3723)>>x3724));

	if (t83 != 18445745214947857975LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3737 = 3527U;
	static int64_t x3738 = -184684148642868746LL;
	static int16_t x3739 = -1;
	static uint8_t x3740 = 52U;
	int64_t t84 = 254197753828874LL;

	t84 = (x3737^((x3738^x3739)>>x3740));

	if (t84 != 3566LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x3769 = INT8_MAX;
	static uint64_t x3770 = UINT64_MAX;
	uint8_t x3771 = UINT8_MAX;
	uint8_t x3772 = 12U;
	uint64_t t85 = 1000824581075LLU;

	t85 = (x3769^((x3770^x3771)>>x3772));

	if (t85 != 4503599627370368LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3865 = 5215;
	static int8_t x3866 = -1;
	int32_t x3867 = INT32_MIN;
	static uint8_t x3868 = 23U;
	int32_t t86 = 3479;

	t86 = (x3865^((x3866^x3867)>>x3868));

	if (t86 != 5280) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3869 = UINT64_MAX;
	int8_t x3872 = 1;
	uint64_t t87 = 2431148305LLU;

	t87 = (x3869^((x3870^x3871)>>x3872));

	if (t87 != 9223372036878300733LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3873 = -1LL;
	static volatile int8_t x3874 = 29;
	uint32_t x3875 = 112677723U;
	volatile int64_t t88 = 31689788LL;

	t88 = (x3873^((x3874^x3875)>>x3876));

	if (t88 != -108LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3961 = 3806173463LLU;
	uint64_t x3963 = UINT64_MAX;

	t89 = (x3961^((x3962^x3963)>>x3964));

	if (t89 != 3806173456LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x3969 = UINT32_MAX;
	int32_t x3970 = 37388533;
	static int32_t x3971 = 94;
	volatile uint32_t x3972 = 6U;
	static uint32_t t90 = 6571300U;

	t90 = (x3969^((x3970^x3971)>>x3972));

	if (t90 != 4294383101U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4045 = INT8_MAX;
	uint64_t x4046 = 604547930170581889LLU;
	static uint8_t x4047 = 23U;
	static int8_t x4048 = 6;
	uint64_t t91 = 2672192525139631LLU;

	t91 = (x4045^((x4046^x4047)>>x4048));

	if (t91 != 9446061408915441LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4049 = 1U;
	int32_t x4050 = 2631;
	volatile uint8_t x4051 = UINT8_MAX;
	int8_t x4052 = 1;
	static volatile uint32_t t92 = 78578U;

	t92 = (x4049^((x4050^x4051)>>x4052));

	if (t92 != 1373U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4097 = -1;
	int32_t x4098 = INT32_MIN;
	int8_t x4099 = INT8_MIN;
	static volatile int32_t x4100 = 1;
	int32_t t93 = -49;

	t93 = (x4097^((x4098^x4099)>>x4100));

	if (t93 != -1073741761) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4206 = INT8_MAX;
	static volatile uint16_t x4207 = UINT16_MAX;
	static volatile uint16_t x4208 = 8U;
	static volatile int32_t t94 = -1;

	t94 = (x4205^((x4206^x4207)>>x4208));

	if (t94 != 32512) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x4241 = INT64_MIN;
	uint8_t x4242 = 6U;
	static int64_t x4243 = 749415839570LL;
	volatile uint32_t x4244 = 23U;
	int64_t t95 = -56514LL;

	t95 = (x4241^((x4242^x4243)>>x4244));

	if (t95 != -9223372036854686471LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x4261 = INT16_MAX;
	int16_t x4262 = -1;
	int64_t x4263 = INT64_MIN;
	int32_t x4264 = 50;

	t96 = (x4261^((x4262^x4263)>>x4264));

	if (t96 != 24576LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4393 = 120;
	int32_t x4394 = -1;
	int16_t x4395 = INT16_MIN;
	volatile uint64_t x4396 = 4LLU;
	int32_t t97 = -126530;

	t97 = (x4393^((x4394^x4395)>>x4396));

	if (t97 != 1927) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x4453 = INT32_MIN;
	int8_t x4454 = -1;
	uint32_t x4456 = 0U;
	volatile int64_t t98 = 4110531177839LL;

	t98 = (x4453^((x4454^x4455)>>x4456));

	if (t98 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4501 = 38U;
	uint64_t x4502 = UINT64_MAX;
	int16_t x4503 = INT16_MIN;
	int8_t x4504 = 0;
	static uint64_t t99 = 313443LLU;

	t99 = (x4501^((x4502^x4503)>>x4504));

	if (t99 != 32729LLU) { NG(); } else { ; }
	
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

