#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x58 = UINT16_MAX;
static volatile int32_t t1 = -8218964;
static uint16_t x97 = 1821U;
uint64_t x154 = 5052864LLU;
uint32_t x187 = 3U;
int64_t x201 = INT64_MIN;
int16_t x202 = INT16_MIN;
volatile int64_t t6 = 63625638806718592LL;
int32_t x286 = INT32_MIN;
int32_t t7 = 203;
uint8_t x327 = 55U;
int8_t x328 = 1;
volatile uint32_t x418 = 87602210U;
volatile int64_t x457 = -1LL;
volatile int64_t t14 = -508560LL;
volatile int8_t x521 = INT8_MIN;
int16_t x523 = 20;
int8_t x552 = -56;
uint32_t x577 = UINT32_MAX;
static int64_t t23 = -2LL;
volatile uint32_t x893 = 28935U;
uint32_t x895 = 1U;
volatile int64_t t24 = INT64_MIN;
volatile int32_t t25 = -1;
int8_t x955 = 1;
int16_t x1001 = INT16_MAX;
uint8_t x1003 = 3U;
uint8_t x1023 = 6U;
int8_t x1024 = -1;
uint32_t t29 = UINT32_MAX;
uint16_t x1027 = 1U;
volatile int64_t t30 = 233489069LL;
int32_t t31 = -76281948;
static uint64_t x1164 = UINT64_MAX;
int8_t x1251 = 1;
static int16_t x1273 = INT16_MIN;
uint16_t x1294 = 999U;
volatile int64_t t39 = 24LL;
static uint16_t x1339 = 22U;
int64_t x1340 = 595695921024414LL;
static int8_t x1370 = INT8_MAX;
int16_t x1388 = INT16_MAX;
static int64_t x1524 = INT64_MIN;
static int32_t x1531 = 1;
static uint64_t x1532 = 65LLU;
static int8_t x1672 = INT8_MAX;
int32_t x1745 = INT32_MIN;
int64_t t51 = -67588211705286LL;
int8_t x1921 = INT8_MIN;
uint64_t x1925 = UINT64_MAX;
volatile uint64_t t55 = 29026039LLU;
uint32_t x1953 = 2893168U;
int16_t x1956 = INT16_MIN;
volatile uint32_t t56 = 6U;
static uint64_t x2046 = 2LLU;
static uint8_t x2094 = UINT8_MAX;
int64_t x2096 = 739616557281648LL;
int16_t x2097 = -994;
int8_t x2100 = INT8_MAX;
volatile int8_t x2212 = INT8_MIN;
uint64_t t61 = 1154215490092458768LLU;
static uint64_t x2218 = 566610851LLU;
int32_t x2221 = INT32_MIN;
uint8_t x2255 = 1U;
uint16_t x2256 = 16945U;
uint16_t x2333 = UINT16_MAX;
uint32_t t67 = 1004U;
static volatile int16_t x2454 = 1;
int32_t x2484 = -1;
int16_t x2590 = 1713;
uint8_t x2639 = 6U;
uint32_t x2640 = UINT32_MAX;
int64_t x2856 = -1LL;
volatile int8_t x2857 = -25;
int8_t x2859 = 0;
volatile uint8_t x2939 = 2U;
uint32_t x3018 = 1422482U;
volatile uint32_t t76 = 5U;
volatile uint64_t x3049 = 17254026913019LLU;
uint32_t x3050 = 5017089U;
volatile uint64_t t77 = 247581662132975164LLU;
int8_t x3125 = INT8_MIN;
int8_t x3127 = 1;
int16_t x3478 = INT16_MAX;
uint64_t t85 = 32412092LLU;
static volatile uint16_t x3537 = 4U;
volatile uint32_t t86 = 153U;
int16_t x3541 = 1;
int8_t x3542 = INT8_MIN;
static int64_t x3572 = INT64_MIN;
int32_t x3581 = -1;
volatile int64_t x3601 = -1LL;
volatile int8_t x3613 = -1;
int32_t t92 = -426326380;
volatile int64_t t93 = -203LL;
uint32_t x3701 = 13U;
uint64_t x3704 = UINT64_MAX;
uint8_t x3732 = 23U;
volatile int8_t x3760 = INT8_MAX;
volatile int64_t x3773 = -1LL;
static uint64_t x3784 = UINT64_MAX;


void f0(void) {
	uint64_t x1 = 123699347LLU;
	int16_t x2 = INT16_MIN;
	uint8_t x3 = 3U;
	static int32_t x4 = -1;
	uint64_t t0 = UINT64_MAX;

	t0 = (((x1/x2)<<x3)+x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x59 = 1;
	int32_t x60 = INT32_MIN;

	t1 = (((x57/x58)<<x59)+x60);

	if (t1 != -2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x98 = -13196LL;
	uint8_t x99 = 40U;
	volatile uint16_t x100 = 8384U;
	volatile int64_t t2 = 4445166492770905LL;

	t2 = (((x97/x98)<<x99)+x100);

	if (t2 != 8384LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	uint8_t x127 = 10U;
	uint32_t x128 = 40011U;
	volatile int64_t t3 = -35LL;

	t3 = (((x125/x126)<<x127)+x128);

	if (t3 != 40011LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x153 = 1863;
	static int8_t x155 = 32;
	static int8_t x156 = -1;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x153/x154)<<x155)+x156);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = -1;
	int8_t x188 = -1;
	int32_t t5 = -71890;

	t5 = (((x185/x186)<<x187)+x188);

	if (t5 != 262143) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x203 = 1;
	int64_t x204 = 55LL;

	t6 = (((x201/x202)<<x203)+x204);

	if (t6 != 562949953421367LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x285 = -2;
	int8_t x287 = 9;
	uint8_t x288 = UINT8_MAX;

	t7 = (((x285/x286)<<x287)+x288);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x289 = -1626531LL;
	int64_t x290 = INT64_MIN;
	int8_t x291 = 17;
	int16_t x292 = 1748;
	int64_t t8 = 22897LL;

	t8 = (((x289/x290)<<x291)+x292);

	if (t8 != 1748LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x317 = 0U;
	int32_t x318 = INT32_MIN;
	static uint8_t x319 = 6U;
	int64_t x320 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

	t9 = (((x317/x318)<<x319)+x320);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x325 = UINT64_MAX;
	static int16_t x326 = -122;
	volatile uint64_t t10 = 2041507135627LLU;

	t10 = (((x325/x326)<<x327)+x328);

	if (t10 != 36028797018963969LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int8_t x362 = INT8_MAX;
	int16_t x363 = 0;
	volatile int8_t x364 = 0;
	int32_t t11 = 179;

	t11 = (((x361/x362)<<x363)+x364);

	if (t11 != 516) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x413 = 1660LLU;
	uint8_t x414 = UINT8_MAX;
	uint32_t x415 = 37U;
	static uint16_t x416 = 767U;
	uint64_t t12 = 8890184787181145450LLU;

	t12 = (((x413/x414)<<x415)+x416);

	if (t12 != 824633721599LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x417 = 41U;
	int16_t x419 = 1;
	static int32_t x420 = INT32_MIN;
	uint32_t t13 = 94160U;

	t13 = (((x417/x418)<<x419)+x420);

	if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x458 = INT64_MIN;
	uint64_t x459 = 1LLU;
	int8_t x460 = INT8_MIN;

	t14 = (((x457/x458)<<x459)+x460);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x522 = UINT8_MAX;
	int32_t x524 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = (((x521/x522)<<x523)+x524);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x549 = -1;
	uint32_t x550 = 441470U;
	uint8_t x551 = 20U;
	uint32_t t16 = 32684358U;

	t16 = (((x549/x550)<<x551)+x552);

	if (t16 != 1610612680U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x578 = INT8_MIN;
	uint8_t x579 = 1U;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t17 = 129451210957506682LLU;

	t17 = (((x577/x578)<<x579)+x580);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x605 = -1;
	uint16_t x606 = 24899U;
	uint8_t x607 = 8U;
	static volatile int16_t x608 = 7;
	int32_t t18 = 178;

	t18 = (((x605/x606)<<x607)+x608);

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x609 = -1;
	volatile int64_t x610 = INT64_MIN;
	uint8_t x611 = 43U;
	int32_t x612 = INT32_MAX;
	int64_t t19 = 15LL;

	t19 = (((x609/x610)<<x611)+x612);

	if (t19 != 2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x673 = INT8_MIN;
	int64_t x674 = -1LL;
	int8_t x675 = 4;
	int64_t x676 = -1LL;
	static int64_t t20 = 1LL;

	t20 = (((x673/x674)<<x675)+x676);

	if (t20 != 2047LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x805 = 421U;
	int64_t x806 = INT64_MIN;
	int8_t x807 = 0;
	static uint8_t x808 = 1U;
	static int64_t t21 = -16063982465LL;

	t21 = (((x805/x806)<<x807)+x808);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x813 = 0;
	int64_t x814 = INT64_MIN;
	int16_t x815 = 5;
	int16_t x816 = 1627;
	volatile int64_t t22 = -365342398743396LL;

	t22 = (((x813/x814)<<x815)+x816);

	if (t22 != 1627LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x877 = 3U;
	int32_t x878 = INT32_MAX;
	uint16_t x879 = 0U;
	int64_t x880 = 231052325LL;

	t23 = (((x877/x878)<<x879)+x880);

	if (t23 != 231052325LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x894 = INT32_MAX;
	volatile int64_t x896 = INT64_MIN;

	t24 = (((x893/x894)<<x895)+x896);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x897 = 4U;
	int8_t x898 = INT8_MAX;
	static uint32_t x899 = 3U;
	int32_t x900 = 0;

	t25 = (((x897/x898)<<x899)+x900);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x953 = INT8_MIN;
	uint32_t x954 = 8U;
	uint32_t x956 = 31184U;
	volatile uint32_t t26 = 8087372U;

	t26 = (((x953/x954)<<x955)+x956);

	if (t26 != 1073772976U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x969 = 10263U;
	int64_t x970 = -923683218274974LL;
	uint8_t x971 = 25U;
	int32_t x972 = INT32_MAX;
	volatile int64_t t27 = -5079965841LL;

	t27 = (((x969/x970)<<x971)+x972);

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1002 = 171U;
	int16_t x1004 = -1;
	volatile int32_t t28 = -49365;

	t28 = (((x1001/x1002)<<x1003)+x1004);

	if (t28 != 1527) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1021 = 1279U;
	int32_t x1022 = -47;

	t29 = (((x1021/x1022)<<x1023)+x1024);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1025 = INT32_MIN;
	int64_t x1026 = INT64_MIN;
	static volatile int64_t x1028 = -1LL;

	t30 = (((x1025/x1026)<<x1027)+x1028);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1065 = 56U;
	uint16_t x1066 = UINT16_MAX;
	int16_t x1067 = 8;
	int8_t x1068 = INT8_MIN;

	t31 = (((x1065/x1066)<<x1067)+x1068);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1097 = 204;
	static uint64_t x1098 = UINT64_MAX;
	int8_t x1099 = 0;
	int16_t x1100 = 20;
	uint64_t t32 = 31453124691647LLU;

	t32 = (((x1097/x1098)<<x1099)+x1100);

	if (t32 != 20LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1105 = -1;
	uint8_t x1106 = 47U;
	uint8_t x1107 = 7U;
	int16_t x1108 = INT16_MIN;
	int32_t t33 = 26473;

	t33 = (((x1105/x1106)<<x1107)+x1108);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1161 = -1;
	int64_t x1162 = 62396LL;
	uint8_t x1163 = 28U;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x1161/x1162)<<x1163)+x1164);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1177 = 31187U;
	int32_t x1178 = -7;
	int16_t x1179 = 0;
	int8_t x1180 = INT8_MIN;
	static uint32_t t35 = 527044951U;

	t35 = (((x1177/x1178)<<x1179)+x1180);

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1249 = 726LL;
	volatile uint16_t x1250 = 24267U;
	volatile int32_t x1252 = -125874;
	int64_t t36 = 1879282656264LL;

	t36 = (((x1249/x1250)<<x1251)+x1252);

	if (t36 != -125874LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1274 = 60737588166LL;
	uint16_t x1275 = 12U;
	int64_t x1276 = -1LL;
	int64_t t37 = 7LL;

	t37 = (((x1273/x1274)<<x1275)+x1276);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1293 = -1;
	int8_t x1295 = 0;
	int32_t x1296 = -1;
	int32_t t38 = 1;

	t38 = (((x1293/x1294)<<x1295)+x1296);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1333 = 2U;
	volatile int64_t x1334 = INT64_MAX;
	uint8_t x1335 = 1U;
	int64_t x1336 = -430LL;

	t39 = (((x1333/x1334)<<x1335)+x1336);

	if (t39 != -430LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1337 = 365514368958LLU;
	uint32_t x1338 = UINT32_MAX;
	static volatile uint64_t t40 = 6LLU;

	t40 = (((x1337/x1338)<<x1339)+x1340);

	if (t40 != 595696277540254LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1369 = 1440720712LL;
	uint8_t x1371 = 4U;
	static uint64_t x1372 = 210110762LLU;
	static volatile uint64_t t41 = 159208816788214554LLU;

	t41 = (((x1369/x1370)<<x1371)+x1372);

	if (t41 != 391618874LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1385 = -1;
	static int16_t x1386 = -1;
	uint8_t x1387 = 5U;
	int32_t t42 = -48;

	t42 = (((x1385/x1386)<<x1387)+x1388);

	if (t42 != 32799) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1393 = 14U;
	volatile int8_t x1394 = INT8_MIN;
	uint8_t x1395 = 1U;
	uint16_t x1396 = 1U;
	volatile uint32_t t43 = 3U;

	t43 = (((x1393/x1394)<<x1395)+x1396);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1425 = INT32_MAX;
	volatile int32_t x1426 = INT32_MAX;
	int32_t x1427 = 0;
	int8_t x1428 = INT8_MIN;
	int32_t t44 = 2;

	t44 = (((x1425/x1426)<<x1427)+x1428);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1517 = -40;
	static volatile uint32_t x1518 = 61U;
	uint8_t x1519 = 7U;
	int8_t x1520 = 0;
	uint32_t t45 = 36940197U;

	t45 = (((x1517/x1518)<<x1519)+x1520);

	if (t45 != 422455680U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1521 = 288336U;
	static uint8_t x1522 = UINT8_MAX;
	static volatile int8_t x1523 = 22;
	int64_t t46 = 24833290527670532LL;

	t46 = (((x1521/x1522)<<x1523)+x1524);

	if (t46 != -9223372036410179584LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1529 = -22587;
	int64_t x1530 = INT64_MAX;
	uint64_t t47 = 2238244131741097810LLU;

	t47 = (((x1529/x1530)<<x1531)+x1532);

	if (t47 != 65LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1565 = 3U;
	static uint64_t x1566 = UINT64_MAX;
	uint8_t x1567 = 0U;
	int64_t x1568 = 864120499LL;
	volatile uint64_t t48 = 4340256561679LLU;

	t48 = (((x1565/x1566)<<x1567)+x1568);

	if (t48 != 864120499LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1669 = -1;
	uint16_t x1670 = UINT16_MAX;
	static int8_t x1671 = 12;
	int32_t t49 = 14721;

	t49 = (((x1669/x1670)<<x1671)+x1672);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1746 = -5383;
	static uint32_t x1747 = 0U;
	int32_t x1748 = -1;
	int32_t t50 = -2767;

	t50 = (((x1745/x1746)<<x1747)+x1748);

	if (t50 != 398937) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1821 = 424U;
	static int64_t x1822 = INT64_MAX;
	uint8_t x1823 = 30U;
	static int16_t x1824 = INT16_MIN;

	t51 = (((x1821/x1822)<<x1823)+x1824);

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1893 = UINT64_MAX;
	volatile int8_t x1894 = INT8_MAX;
	uint16_t x1895 = 0U;
	static volatile int64_t x1896 = INT64_MAX;
	uint64_t t52 = 490LLU;

	t52 = (((x1893/x1894)<<x1895)+x1896);

	if (t52 != 9368621990191071489LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1922 = 27912015179LL;
	int32_t x1923 = 0;
	volatile int32_t x1924 = -57;
	static volatile int64_t t53 = 9766040824126972LL;

	t53 = (((x1921/x1922)<<x1923)+x1924);

	if (t53 != -57LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1926 = -58984037991LL;
	uint8_t x1927 = 7U;
	int32_t x1928 = -1;
	volatile uint64_t t54 = 61956477LLU;

	t54 = (((x1925/x1926)<<x1927)+x1928);

	if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1937 = UINT8_MAX;
	uint64_t x1938 = 6LLU;
	uint16_t x1939 = 46U;
	volatile uint32_t x1940 = 1646078698U;

	t55 = (((x1937/x1938)<<x1939)+x1940);

	if (t55 != 2955488901540586LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1954 = INT8_MAX;
	uint8_t x1955 = 19U;

	t56 = (((x1953/x1954)<<x1955)+x1956);

	if (t56 != 3353313280U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2001 = INT8_MIN;
	volatile int64_t x2002 = INT64_MIN;
	static uint16_t x2003 = 3U;
	int64_t x2004 = 1697LL;
	volatile int64_t t57 = 135132116348224194LL;

	t57 = (((x2001/x2002)<<x2003)+x2004);

	if (t57 != 1697LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2045 = 10284032310613218LLU;
	uint8_t x2047 = 0U;
	uint32_t x2048 = UINT32_MAX;
	uint64_t t58 = 112840654795809LLU;

	t58 = (((x2045/x2046)<<x2047)+x2048);

	if (t58 != 5142020450273904LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2093 = INT8_MAX;
	static uint8_t x2095 = 9U;
	static int64_t t59 = -33892169902LL;

	t59 = (((x2093/x2094)<<x2095)+x2096);

	if (t59 != 739616557281648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2098 = -25;
	static uint64_t x2099 = 15LLU;
	static int32_t t60 = 760884574;

	t60 = (((x2097/x2098)<<x2099)+x2100);

	if (t60 != 1278079) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2209 = 5LLU;
	uint8_t x2210 = UINT8_MAX;
	uint8_t x2211 = 58U;

	t61 = (((x2209/x2210)<<x2211)+x2212);

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2217 = -955865598;
	uint8_t x2219 = 5U;
	uint16_t x2220 = 6U;
	volatile uint64_t t62 = 4995007789110LLU;

	t62 = (((x2217/x2218)<<x2219)+x2220);

	if (t62 != 1041801104390LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2222 = 915775640923076LLU;
	static uint8_t x2223 = 6U;
	static int8_t x2224 = -3;
	static volatile uint64_t t63 = 3868LLU;

	t63 = (((x2221/x2222)<<x2223)+x2224);

	if (t63 != 1289149LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2253 = INT16_MIN;
	volatile int64_t x2254 = INT64_MAX;
	static int64_t t64 = 3958748265594499624LL;

	t64 = (((x2253/x2254)<<x2255)+x2256);

	if (t64 != 16945LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x2261 = INT16_MIN;
	static uint64_t x2262 = UINT64_MAX;
	int8_t x2263 = 18;
	int16_t x2264 = -84;
	static uint64_t t65 = 32382456881231294LLU;

	t65 = (((x2261/x2262)<<x2263)+x2264);

	if (t65 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2301 = -1;
	static uint8_t x2302 = 20U;
	static uint16_t x2303 = 0U;
	int32_t x2304 = INT32_MAX;
	volatile int32_t t66 = INT32_MAX;

	t66 = (((x2301/x2302)<<x2303)+x2304);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2334 = 9853935U;
	static uint16_t x2335 = 7U;
	int8_t x2336 = 9;

	t67 = (((x2333/x2334)<<x2335)+x2336);

	if (t67 != 9U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2453 = UINT8_MAX;
	int16_t x2455 = 4;
	int64_t x2456 = INT64_MIN;
	static volatile int64_t t68 = 1416264042836LL;

	t68 = (((x2453/x2454)<<x2455)+x2456);

	if (t68 != -9223372036854771728LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2481 = 0;
	int64_t x2482 = -312LL;
	uint16_t x2483 = 7U;
	volatile int64_t t69 = -43LL;

	t69 = (((x2481/x2482)<<x2483)+x2484);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x2589 = 0LLU;
	volatile uint32_t x2591 = 1U;
	int64_t x2592 = -588LL;
	static uint64_t t70 = 57LLU;

	t70 = (((x2589/x2590)<<x2591)+x2592);

	if (t70 != 18446744073709551028LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2637 = INT32_MIN;
	int16_t x2638 = -2032;
	uint32_t t71 = 382U;

	t71 = (((x2637/x2638)<<x2639)+x2640);

	if (t71 != 67637247U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2841 = -27;
	static int16_t x2842 = -1;
	uint8_t x2843 = 10U;
	uint64_t x2844 = 43LLU;
	volatile uint64_t t72 = 83778463934264LLU;

	t72 = (((x2841/x2842)<<x2843)+x2844);

	if (t72 != 27691LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x2853 = UINT64_MAX;
	uint16_t x2854 = UINT16_MAX;
	uint32_t x2855 = 27U;
	uint64_t t73 = 4LLU;

	t73 = (((x2853/x2854)<<x2855)+x2856);

	if (t73 != 576469548530663423LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x2858 = UINT32_MAX;
	static int8_t x2860 = INT8_MIN;
	uint32_t t74 = 896835U;

	t74 = (((x2857/x2858)<<x2859)+x2860);

	if (t74 != 4294967168U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2937 = 9;
	int32_t x2938 = -946567449;
	static uint32_t x2940 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (((x2937/x2938)<<x2939)+x2940);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3017 = -1;
	int8_t x3019 = 0;
	uint32_t x3020 = 10758U;

	t76 = (((x3017/x3018)<<x3019)+x3020);

	if (t76 != 13777U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3051 = 1U;
	volatile int16_t x3052 = INT16_MIN;

	t77 = (((x3049/x3050)<<x3051)+x3052);

	if (t77 != 6845334LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x3105 = INT16_MIN;
	static uint64_t x3106 = 5506766832327LLU;
	uint16_t x3107 = 15U;
	static uint32_t x3108 = 1820877U;
	volatile uint64_t t78 = 8277606LLU;

	t78 = (((x3105/x3106)<<x3107)+x3108);

	if (t78 != 109769115853LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3126 = UINT32_MAX;
	int64_t x3128 = -1LL;
	int64_t t79 = -1747LL;

	t79 = (((x3125/x3126)<<x3127)+x3128);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x3137 = -1;
	int32_t x3138 = INT32_MIN;
	int8_t x3139 = 0;
	static int32_t x3140 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = (((x3137/x3138)<<x3139)+x3140);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x3149 = -1;
	int8_t x3150 = INT8_MAX;
	static int8_t x3151 = 1;
	int32_t x3152 = 14822185;
	volatile int32_t t81 = 3430538;

	t81 = (((x3149/x3150)<<x3151)+x3152);

	if (t81 != 14822185) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3381 = UINT64_MAX;
	int64_t x3382 = INT64_MIN;
	int8_t x3383 = 1;
	static int32_t x3384 = INT32_MIN;
	volatile uint64_t t82 = 156602LLU;

	t82 = (((x3381/x3382)<<x3383)+x3384);

	if (t82 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3417 = 6960962;
	int64_t x3418 = -6483640113748LL;
	volatile int8_t x3419 = 14;
	uint16_t x3420 = UINT16_MAX;
	int64_t t83 = -953692957LL;

	t83 = (((x3417/x3418)<<x3419)+x3420);

	if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3477 = UINT8_MAX;
	uint8_t x3479 = 5U;
	int64_t x3480 = -1LL;
	volatile int64_t t84 = 460632681371210286LL;

	t84 = (((x3477/x3478)<<x3479)+x3480);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3493 = INT8_MIN;
	volatile uint64_t x3494 = UINT64_MAX;
	uint8_t x3495 = 26U;
	volatile int8_t x3496 = INT8_MAX;

	t85 = (((x3493/x3494)<<x3495)+x3496);

	if (t85 != 127LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3538 = 1U;
	uint8_t x3539 = 1U;
	uint32_t x3540 = UINT32_MAX;

	t86 = (((x3537/x3538)<<x3539)+x3540);

	if (t86 != 7U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3543 = 0;
	uint16_t x3544 = 4725U;
	static int32_t t87 = -246667369;

	t87 = (((x3541/x3542)<<x3543)+x3544);

	if (t87 != 4725) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3569 = INT32_MAX;
	int32_t x3570 = 93519;
	static uint8_t x3571 = 0U;
	int64_t t88 = 278648500375325252LL;

	t88 = (((x3569/x3570)<<x3571)+x3572);

	if (t88 != -9223372036854752845LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3582 = UINT8_MAX;
	uint8_t x3583 = 3U;
	static int64_t x3584 = -1LL;
	int64_t t89 = 275LL;

	t89 = (((x3581/x3582)<<x3583)+x3584);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3602 = INT8_MIN;
	uint16_t x3603 = 3U;
	int16_t x3604 = -732;
	int64_t t90 = 279317LL;

	t90 = (((x3601/x3602)<<x3603)+x3604);

	if (t90 != -732LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3614 = 45U;
	uint32_t x3615 = 1U;
	int8_t x3616 = INT8_MIN;
	volatile uint32_t t91 = 229090431U;

	t91 = (((x3613/x3614)<<x3615)+x3616);

	if (t91 != 190887306U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x3641 = 1U;
	uint16_t x3642 = UINT16_MAX;
	volatile uint8_t x3643 = 8U;
	int8_t x3644 = -1;

	t92 = (((x3641/x3642)<<x3643)+x3644);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3661 = INT32_MIN;
	int64_t x3662 = -30299038115LL;
	uint16_t x3663 = 5U;
	static uint8_t x3664 = 0U;

	t93 = (((x3661/x3662)<<x3663)+x3664);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x3685 = INT16_MIN;
	int32_t x3686 = INT32_MAX;
	uint16_t x3687 = 0U;
	static uint8_t x3688 = UINT8_MAX;
	int32_t t94 = 129690;

	t94 = (((x3685/x3686)<<x3687)+x3688);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3702 = -328054996;
	int8_t x3703 = 3;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x3701/x3702)<<x3703)+x3704);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3729 = -1;
	static uint64_t x3730 = 113741LLU;
	int8_t x3731 = 6;
	uint64_t t96 = 1007119231452780541LLU;

	t96 = (((x3729/x3730)<<x3731)+x3732);

	if (t96 != 10379648681806999LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3757 = INT32_MIN;
	int32_t x3758 = -188349357;
	static uint8_t x3759 = 0U;
	volatile int32_t t97 = 2561979;

	t97 = (((x3757/x3758)<<x3759)+x3760);

	if (t97 != 138) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3774 = 16413U;
	uint32_t x3775 = 5U;
	int64_t x3776 = INT64_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = (((x3773/x3774)<<x3775)+x3776);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3781 = UINT64_MAX;
	int64_t x3782 = INT64_MIN;
	static int32_t x3783 = 30;
	volatile uint64_t t99 = 1468896LLU;

	t99 = (((x3781/x3782)<<x3783)+x3784);

	if (t99 != 1073741823LLU) { NG(); } else { ; }
	
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

