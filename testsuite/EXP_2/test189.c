#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x111 = 210U;
static volatile int16_t x112 = 1;
static volatile int16_t x273 = -1;
int32_t x274 = -1;
volatile int16_t x275 = INT16_MAX;
int8_t x339 = -53;
uint64_t x340 = 1LLU;
volatile uint64_t x366 = UINT64_MAX;
volatile int64_t x389 = 4167410399809977LL;
uint8_t x468 = 40U;
volatile uint8_t x500 = 0U;
volatile int64_t t6 = 123809874618207LL;
uint64_t t7 = 7383281788955801925LLU;
uint32_t x537 = 2U;
int16_t x550 = INT16_MIN;
uint64_t x551 = UINT64_MAX;
uint8_t x853 = 54U;
static int8_t x860 = 17;
volatile uint32_t t14 = 0U;
int8_t x916 = 1;
int8_t x951 = INT8_MIN;
uint32_t x958 = UINT32_MAX;
static int32_t x965 = -15592375;
uint16_t x969 = 2U;
volatile uint32_t x1025 = 2965U;
int8_t x1026 = -1;
int8_t x1027 = 7;
static int8_t x1028 = 12;
uint32_t t23 = 403937656U;
uint8_t x1046 = 15U;
int64_t x1047 = INT64_MAX;
static uint16_t x1084 = 13U;
int8_t x1085 = INT8_MAX;
static uint64_t x1158 = 0LLU;
static uint16_t x1185 = 1494U;
volatile uint64_t x1186 = UINT64_MAX;
int32_t x1213 = -1;
int32_t x1215 = INT32_MAX;
int32_t x1377 = 1914971;
static uint32_t x1466 = UINT32_MAX;
volatile int8_t x1467 = INT8_MAX;
volatile int64_t x1498 = -140085LL;
uint16_t x1535 = 28453U;
uint64_t x1602 = UINT64_MAX;
volatile uint32_t x1745 = 4046U;
volatile int8_t x2033 = INT8_MAX;
static uint8_t x2036 = 1U;
uint8_t x2155 = 14U;
volatile uint8_t x2236 = 6U;
int32_t x2246 = INT32_MAX;
static volatile uint16_t x2248 = 59U;
volatile int16_t x2253 = -1;
int8_t x2256 = 1;
uint64_t x2376 = 14LLU;
static uint8_t x2425 = 6U;
static uint32_t t58 = 21225U;
int32_t x2614 = -502621424;
volatile uint8_t x2616 = 16U;
volatile uint64_t x2634 = 14LLU;
uint8_t x2716 = 2U;
uint32_t x2717 = 267589650U;
int16_t x2719 = -1;
volatile uint32_t t65 = 371U;
uint32_t x2853 = 7U;
int8_t x2865 = 5;
uint64_t x2869 = 10621855206LLU;
uint16_t x2872 = 10U;
uint8_t x2964 = 1U;
volatile uint8_t x2988 = 12U;
volatile int32_t t71 = 14201;
volatile uint16_t x3268 = 0U;
uint8_t x3338 = 1U;
int8_t x3340 = 14;
volatile uint32_t x3366 = 7869736U;
uint16_t x3616 = 0U;
int16_t x3619 = 362;
int16_t x3657 = 0;
int16_t x3659 = -934;
int32_t t82 = 31282875;
int8_t x3961 = INT8_MIN;
int32_t t84 = 103674440;
volatile int64_t t85 = 336510588558270272LL;
volatile uint64_t t86 = 222428045LLU;
int64_t x4062 = INT64_MIN;
int32_t x4075 = INT32_MIN;
uint32_t t88 = 5407108U;
volatile uint64_t t89 = 190053522046LLU;
int64_t x4102 = -1LL;
static uint64_t x4147 = 555867699997229471LLU;
int16_t x4193 = 44;
int32_t x4195 = INT32_MIN;
int8_t x4257 = INT8_MIN;
uint16_t x4260 = 9U;
static uint8_t x4299 = 12U;
uint32_t x4300 = 0U;
uint32_t x4357 = 4148295U;
uint8_t x4360 = 1U;


void f0(void) {
	int8_t x109 = 7;
	int16_t x110 = 9361;
	volatile uint32_t t0 = 117420735U;

	t0 = ((x109-(x110-x111))>>x112);

	if (t0 != 2147479076U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x276 = 0;
	int32_t t1 = 0;

	t1 = ((x273-(x274-x275))>>x276);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x337 = 0;
	volatile int16_t x338 = INT16_MIN;
	static int32_t t2 = -11;

	t2 = ((x337-(x338-x339))>>x340);

	if (t2 != 16357) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x367 = -1;
	uint32_t x368 = 3U;
	static uint64_t t3 = 2075534140697561LLU;

	t3 = ((x365-(x366-x367))>>x368);

	if (t3 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x390 = 23203;
	int8_t x391 = INT8_MAX;
	uint8_t x392 = 27U;
	volatile int64_t t4 = 87594595156464749LL;

	t4 = ((x389-(x390-x391))>>x392);

	if (t4 != 31049627LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x465 = INT16_MIN;
	int64_t x466 = -1LL;
	int16_t x467 = INT16_MAX;
	int64_t t5 = 10145LL;

	t5 = ((x465-(x466-x467))>>x468);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x497 = 81U;
	uint32_t x498 = UINT32_MAX;
	static int64_t x499 = INT64_MAX;

	t6 = ((x497-(x498-x499))>>x500);

	if (t6 != 9223372032559808593LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x533 = 2;
	int64_t x534 = 21834356585151988LL;
	uint64_t x535 = 1058302157708120085LLU;
	uint8_t x536 = 60U;

	t7 = ((x533-(x534-x535))>>x536);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x538 = INT16_MAX;
	uint32_t x539 = 6703U;
	uint8_t x540 = 12U;
	volatile uint32_t t8 = 1697913239U;

	t8 = ((x537-(x538-x539))>>x540);

	if (t8 != 1048569U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x549 = INT32_MIN;
	static uint8_t x552 = 4U;
	uint64_t t9 = 101455LLU;

	t9 = ((x549-(x550-x551))>>x552);

	if (t9 != 1152921504472631295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x649 = UINT64_MAX;
	static int32_t x650 = -12178;
	uint64_t x651 = 2101072784090265LLU;
	volatile uint64_t x652 = 0LLU;
	static uint64_t t10 = 145LLU;

	t10 = ((x649-(x650-x651))>>x652);

	if (t10 != 2101072784102442LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x789 = INT64_MIN;
	int64_t x790 = INT64_MIN;
	uint8_t x791 = 0U;
	static int8_t x792 = 7;
	volatile int64_t t11 = 40LL;

	t11 = ((x789-(x790-x791))>>x792);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x854 = -1LL;
	uint64_t x855 = 7569676125439LLU;
	volatile uint16_t x856 = 15U;
	static volatile uint64_t t12 = 1191029168555569LLU;

	t12 = ((x853-(x854-x855))>>x856);

	if (t12 != 231008182LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x857 = UINT64_MAX;
	static uint16_t x858 = 3U;
	uint8_t x859 = 6U;
	uint64_t t13 = 24910730622208LLU;

	t13 = ((x857-(x858-x859))>>x860);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x885 = 3U;
	volatile int8_t x886 = 0;
	int16_t x887 = INT16_MIN;
	uint8_t x888 = 3U;

	t14 = ((x885-(x886-x887))>>x888);

	if (t14 != 536866816U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x913 = 9;
	static volatile int32_t x914 = INT32_MIN;
	uint64_t x915 = 164317986LLU;
	static uint64_t t15 = 280195081051326LLU;

	t15 = ((x913-(x914-x915))>>x916);

	if (t15 != 1155900821LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x925 = 57269149LLU;
	int32_t x926 = -29;
	int64_t x927 = -422226980046631LL;
	uint8_t x928 = 2U;
	uint64_t t16 = 1928673281757398LLU;

	t16 = ((x925-(x926-x927))>>x928);

	if (t16 != 4611580461696693540LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x949 = 6486;
	int64_t x950 = -73805474718268450LL;
	volatile uint16_t x952 = 8U;
	int64_t t17 = 1LL;

	t17 = ((x949-(x950-x951))>>x952);

	if (t17 != 288302635618260LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x957 = INT8_MIN;
	volatile int16_t x959 = -58;
	volatile int8_t x960 = 1;
	volatile uint32_t t18 = 804196196U;

	t18 = ((x957-(x958-x959))>>x960);

	if (t18 != 2147483555U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x961 = INT8_MIN;
	int16_t x962 = INT16_MIN;
	static int16_t x963 = -1;
	volatile uint64_t x964 = 6LLU;
	int32_t t19 = 2;

	t19 = ((x961-(x962-x963))>>x964);

	if (t19 != 509) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x966 = 665;
	uint64_t x967 = 7603LLU;
	int8_t x968 = 1;
	uint64_t t20 = 6728798778LLU;

	t20 = ((x965-(x966-x967))>>x968);

	if (t20 != 9223372036846983089LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x970 = INT16_MIN;
	uint64_t x971 = UINT64_MAX;
	static uint8_t x972 = 2U;
	uint64_t t21 = 5671262961376571LLU;

	t21 = ((x969-(x970-x971))>>x972);

	if (t21 != 8192LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1013 = -1;
	static volatile int64_t x1014 = INT64_MAX;
	static volatile uint64_t x1015 = 691865016LLU;
	int32_t x1016 = 45;
	static volatile uint64_t t22 = 63LLU;

	t22 = ((x1013-(x1014-x1015))>>x1016);

	if (t22 != 262144LLU) { NG(); } else { ; }
	
}

void f23(void) {


	t23 = ((x1025-(x1026-x1027))>>x1028);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1045 = 48638245940LLU;
	int32_t x1048 = 9;
	uint64_t t24 = 7150LLU;

	t24 = ((x1045-(x1046-x1047))>>x1048);

	if (t24 != 18014398604478558LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1069 = UINT64_MAX;
	int64_t x1070 = INT64_MIN;
	int16_t x1071 = INT16_MIN;
	uint16_t x1072 = 0U;
	uint64_t t25 = 42LLU;

	t25 = ((x1069-(x1070-x1071))>>x1072);

	if (t25 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1081 = 27010040234924603LL;
	int16_t x1082 = INT16_MAX;
	static int8_t x1083 = 0;
	static int64_t t26 = 1811692LL;

	t26 = ((x1081-(x1082-x1083))>>x1084);

	if (t26 != 3297124052110LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1086 = -1;
	int16_t x1087 = -1;
	static int8_t x1088 = 3;
	int32_t t27 = 125008764;

	t27 = ((x1085-(x1086-x1087))>>x1088);

	if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1089 = 3;
	int16_t x1090 = -354;
	uint32_t x1091 = 3U;
	uint32_t x1092 = 3U;
	volatile uint32_t t28 = 571U;

	t28 = ((x1089-(x1090-x1091))>>x1092);

	if (t28 != 45U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1153 = -1;
	volatile uint64_t x1154 = 8000468630LLU;
	int16_t x1155 = INT16_MIN;
	int8_t x1156 = 48;
	volatile uint64_t t29 = 9LLU;

	t29 = ((x1153-(x1154-x1155))>>x1156);

	if (t29 != 65535LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1157 = INT16_MAX;
	int16_t x1159 = INT16_MAX;
	volatile uint8_t x1160 = 1U;
	static uint64_t t30 = 4987439LLU;

	t30 = ((x1157-(x1158-x1159))>>x1160);

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1187 = 682U;
	static uint16_t x1188 = 6U;
	volatile uint64_t t31 = 2104LLU;

	t31 = ((x1185-(x1186-x1187))>>x1188);

	if (t31 != 34LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1214 = 1U;
	int8_t x1216 = 14;
	int32_t t32 = 4014347;

	t32 = ((x1213-(x1214-x1215))>>x1216);

	if (t32 != 131071) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1378 = 28U;
	int64_t x1379 = 3978200074LL;
	uint8_t x1380 = 1U;
	int64_t t33 = -7375233615LL;

	t33 = ((x1377-(x1378-x1379))>>x1380);

	if (t33 != 1990057508LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1389 = UINT16_MAX;
	int16_t x1390 = INT16_MIN;
	uint64_t x1391 = 13798LLU;
	static int8_t x1392 = 21;
	volatile uint64_t t34 = 1164444330LLU;

	t34 = ((x1389-(x1390-x1391))>>x1392);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1465 = INT8_MIN;
	int8_t x1468 = 1;
	volatile uint32_t t35 = 5136582U;

	t35 = ((x1465-(x1466-x1467))>>x1468);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1477 = INT64_MIN;
	uint16_t x1478 = 462U;
	uint64_t x1479 = UINT64_MAX;
	int32_t x1480 = 5;
	static volatile uint64_t t36 = 47648066302LLU;

	t36 = ((x1477-(x1478-x1479))>>x1480);

	if (t36 != 288230376151711729LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1497 = 224101478U;
	int8_t x1499 = INT8_MIN;
	int8_t x1500 = 25;
	volatile int64_t t37 = -94891643447464LL;

	t37 = ((x1497-(x1498-x1499))>>x1500);

	if (t37 != 6LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1513 = UINT64_MAX;
	static uint32_t x1514 = 52356U;
	volatile int8_t x1515 = INT8_MIN;
	static int8_t x1516 = 0;
	volatile uint64_t t38 = 99663714098289142LLU;

	t38 = ((x1513-(x1514-x1515))>>x1516);

	if (t38 != 18446744073709499131LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1533 = -1;
	static int16_t x1534 = 5;
	int8_t x1536 = 3;
	static int32_t t39 = -503754;

	t39 = ((x1533-(x1534-x1535))>>x1536);

	if (t39 != 3555) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1601 = 2;
	static int64_t x1603 = 30227534456LL;
	uint8_t x1604 = 30U;
	volatile uint64_t t40 = 53555LLU;

	t40 = ((x1601-(x1602-x1603))>>x1604);

	if (t40 != 28LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x1633 = -1243946610793835LL;
	int16_t x1634 = INT16_MAX;
	uint64_t x1635 = 55110059995LLU;
	uint8_t x1636 = 6U;
	static uint64_t t41 = 1349113604LLU;

	t41 = ((x1633-(x1634-x1635))>>x1636);

	if (t41 != 288210940347012265LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1729 = INT8_MIN;
	uint64_t x1730 = UINT64_MAX;
	int32_t x1731 = INT32_MAX;
	int32_t x1732 = 1;
	uint64_t t42 = 2585667130814LLU;

	t42 = ((x1729-(x1730-x1731))>>x1732);

	if (t42 != 1073741760LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1746 = 3074LLU;
	uint16_t x1747 = UINT16_MAX;
	volatile uint8_t x1748 = 17U;
	static volatile uint64_t t43 = 1531190LLU;

	t43 = ((x1745-(x1746-x1747))>>x1748);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1781 = 112606346498LLU;
	int8_t x1782 = -42;
	uint16_t x1783 = UINT16_MAX;
	uint64_t x1784 = 0LLU;
	volatile uint64_t t44 = 269LLU;

	t44 = ((x1781-(x1782-x1783))>>x1784);

	if (t44 != 112606412075LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1825 = -1;
	static uint16_t x1826 = 3302U;
	static uint32_t x1827 = 5397U;
	static uint8_t x1828 = 30U;
	volatile uint32_t t45 = 8U;

	t45 = ((x1825-(x1826-x1827))>>x1828);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1845 = INT8_MIN;
	int32_t x1846 = INT32_MIN;
	static int16_t x1847 = -1;
	uint8_t x1848 = 1U;
	int32_t t46 = 25;

	t46 = ((x1845-(x1846-x1847))>>x1848);

	if (t46 != 1073741759) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2034 = INT8_MIN;
	volatile uint8_t x2035 = 59U;
	int32_t t47 = 5675990;

	t47 = ((x2033-(x2034-x2035))>>x2036);

	if (t47 != 157) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2153 = 4U;
	uint32_t x2154 = 10U;
	static int32_t x2156 = 0;
	volatile uint32_t t48 = 203190U;

	t48 = ((x2153-(x2154-x2155))>>x2156);

	if (t48 != 8U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2205 = 13247;
	uint64_t x2206 = UINT64_MAX;
	int32_t x2207 = 19323;
	int16_t x2208 = 1;
	volatile uint64_t t49 = 30689299LLU;

	t49 = ((x2205-(x2206-x2207))>>x2208);

	if (t49 != 16285LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2233 = UINT32_MAX;
	volatile int8_t x2234 = 1;
	volatile uint8_t x2235 = 3U;
	volatile uint32_t t50 = 1038531U;

	t50 = ((x2233-(x2234-x2235))>>x2236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2245 = UINT32_MAX;
	int64_t x2247 = 2680937715818LL;
	static volatile int64_t t51 = -26375802932985LL;

	t51 = ((x2245-(x2246-x2247))>>x2248);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2254 = INT16_MIN;
	int32_t x2255 = -1;
	int32_t t52 = -23;

	t52 = ((x2253-(x2254-x2255))>>x2256);

	if (t52 != 16383) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2373 = INT8_MIN;
	int8_t x2374 = -1;
	int32_t x2375 = INT32_MAX;
	int32_t t53 = -5097987;

	t53 = ((x2373-(x2374-x2375))>>x2376);

	if (t53 != 131071) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2401 = -1;
	int32_t x2402 = -1;
	volatile int16_t x2403 = 3;
	static uint16_t x2404 = 31U;
	int32_t t54 = -1;

	t54 = ((x2401-(x2402-x2403))>>x2404);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2426 = INT32_MIN;
	int16_t x2427 = -968;
	static uint8_t x2428 = 8U;
	int32_t t55 = 746894176;

	t55 = ((x2425-(x2426-x2427))>>x2428);

	if (t55 != 8388604) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2457 = 10U;
	static uint8_t x2458 = 14U;
	int32_t x2459 = 12057598;
	uint8_t x2460 = 11U;
	int32_t t56 = 3405;

	t56 = ((x2457-(x2458-x2459))>>x2460);

	if (t56 != 5887) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2481 = 31U;
	int32_t x2482 = -1;
	volatile int8_t x2483 = 28;
	volatile uint8_t x2484 = 0U;
	int32_t t57 = 1;

	t57 = ((x2481-(x2482-x2483))>>x2484);

	if (t57 != 60) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2485 = -1;
	uint32_t x2486 = 1786962340U;
	int32_t x2487 = INT32_MIN;
	static volatile int16_t x2488 = 1;

	t58 = ((x2485-(x2486-x2487))>>x2488);

	if (t58 != 180260653U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2493 = INT16_MIN;
	static uint32_t x2494 = 2445748U;
	uint32_t x2495 = 2701U;
	static int8_t x2496 = 1;
	static volatile uint32_t t59 = 176U;

	t59 = ((x2493-(x2494-x2495))>>x2496);

	if (t59 != 2146245740U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2525 = 87U;
	int8_t x2526 = INT8_MIN;
	volatile int64_t x2527 = -1LL;
	uint8_t x2528 = 5U;
	static int64_t t60 = -34205448043556LL;

	t60 = ((x2525-(x2526-x2527))>>x2528);

	if (t60 != 6LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2613 = 12U;
	int16_t x2615 = -1;
	volatile int32_t t61 = 545358104;

	t61 = ((x2613-(x2614-x2615))>>x2616);

	if (t61 != 7669) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2633 = -156144580;
	uint64_t x2635 = UINT64_MAX;
	int8_t x2636 = 3;
	volatile uint64_t t62 = 9602825382LLU;

	t62 = ((x2633-(x2634-x2635))>>x2636);

	if (t62 != 2305843009194175877LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2681 = UINT32_MAX;
	uint64_t x2682 = 503LLU;
	uint16_t x2683 = 29U;
	int8_t x2684 = 0;
	volatile uint64_t t63 = 1684572223798970LLU;

	t63 = ((x2681-(x2682-x2683))>>x2684);

	if (t63 != 4294966821LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2713 = INT64_MAX;
	volatile int32_t x2714 = 1;
	int8_t x2715 = -1;
	static int64_t t64 = -11419083425591LL;

	t64 = ((x2713-(x2714-x2715))>>x2716);

	if (t64 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2718 = -218;
	uint16_t x2720 = 23U;

	t65 = ((x2717-(x2718-x2719))>>x2720);

	if (t65 != 31U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2854 = 88649U;
	static int8_t x2855 = INT8_MIN;
	int8_t x2856 = 1;
	static uint32_t t66 = 1U;

	t66 = ((x2853-(x2854-x2855))>>x2856);

	if (t66 != 2147439263U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2866 = 334894384LLU;
	int64_t x2867 = INT64_MAX;
	uint8_t x2868 = 4U;
	volatile uint64_t t67 = 170LLU;

	t67 = ((x2865-(x2866-x2867))>>x2868);

	if (t67 != 576460752282492589LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2870 = UINT16_MAX;
	static volatile int32_t x2871 = 29669131;
	volatile uint64_t t68 = 1247700LLU;

	t68 = ((x2869-(x2870-x2871))>>x2872);

	if (t68 != 10401815LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2901 = INT16_MIN;
	static int32_t x2902 = 0;
	int32_t x2903 = INT32_MAX;
	volatile uint8_t x2904 = 1U;
	volatile int32_t t69 = 0;

	t69 = ((x2901-(x2902-x2903))>>x2904);

	if (t69 != 1073725439) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2961 = INT16_MIN;
	uint64_t x2962 = 13161849414571LLU;
	volatile int32_t x2963 = INT32_MIN;
	volatile uint64_t t70 = 7046526309585764041LLU;

	t70 = ((x2961-(x2962-x2963))>>x2964);

	if (t70 != 9223365454856310314LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2985 = 1874;
	int8_t x2986 = -1;
	static volatile uint8_t x2987 = UINT8_MAX;

	t71 = ((x2985-(x2986-x2987))>>x2988);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3133 = UINT32_MAX;
	static uint32_t x3134 = 4871U;
	int8_t x3135 = 24;
	uint32_t x3136 = 21U;
	uint32_t t72 = 5759U;

	t72 = ((x3133-(x3134-x3135))>>x3136);

	if (t72 != 2047U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3265 = -825;
	volatile int16_t x3266 = -660;
	static volatile uint64_t x3267 = 3333822995377LLU;
	uint64_t t73 = 10195547LLU;

	t73 = ((x3265-(x3266-x3267))>>x3268);

	if (t73 != 3333822995212LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3337 = -1;
	static uint64_t x3339 = 31LLU;
	volatile uint64_t t74 = 245100483630282597LLU;

	t74 = ((x3337-(x3338-x3339))>>x3340);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3345 = -1;
	volatile int32_t x3346 = 1979;
	uint64_t x3347 = UINT64_MAX;
	uint8_t x3348 = 3U;
	volatile uint64_t t75 = 1058428266LLU;

	t75 = ((x3345-(x3346-x3347))>>x3348);

	if (t75 != 2305843009213693704LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3365 = -1;
	uint64_t x3367 = 47787542521776874LLU;
	int8_t x3368 = 1;
	volatile uint64_t t76 = 5090701910408708LLU;

	t76 = ((x3365-(x3366-x3367))>>x3368);

	if (t76 != 23893771256953568LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3413 = INT16_MIN;
	volatile uint16_t x3414 = 15588U;
	int32_t x3415 = INT32_MAX;
	int16_t x3416 = 1;
	static int32_t t77 = -14;

	t77 = ((x3413-(x3414-x3415))>>x3416);

	if (t77 != 1073717645) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3525 = -92;
	static volatile uint64_t x3526 = 116603794206701LLU;
	int8_t x3527 = INT8_MIN;
	uint8_t x3528 = 3U;
	volatile uint64_t t78 = 152308740LLU;

	t78 = ((x3525-(x3526-x3527))>>x3528);

	if (t78 != 2305828433739418086LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3533 = 13109LLU;
	uint8_t x3534 = UINT8_MAX;
	volatile uint32_t x3535 = 4705988U;
	static uint16_t x3536 = 24U;
	volatile uint64_t t79 = 11LLU;

	t79 = ((x3533-(x3534-x3535))>>x3536);

	if (t79 != 1099511627520LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3613 = INT32_MAX;
	int32_t x3614 = 66504;
	int16_t x3615 = INT16_MAX;
	volatile int32_t t80 = 606880;

	t80 = ((x3613-(x3614-x3615))>>x3616);

	if (t80 != 2147449910) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3617 = INT8_MIN;
	volatile uint16_t x3618 = 6U;
	volatile uint32_t x3620 = 2U;
	static volatile int32_t t81 = 88;

	t81 = ((x3617-(x3618-x3619))>>x3620);

	if (t81 != 57) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3658 = INT32_MIN;
	static uint8_t x3660 = 1U;

	t82 = ((x3657-(x3658-x3659))>>x3660);

	if (t82 != 1073741357) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3789 = INT16_MAX;
	static uint64_t x3790 = UINT64_MAX;
	int64_t x3791 = 20LL;
	uint16_t x3792 = 37U;
	static volatile uint64_t t83 = 17347491793133684LLU;

	t83 = ((x3789-(x3790-x3791))>>x3792);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3962 = INT16_MIN;
	int16_t x3963 = -680;
	uint8_t x3964 = 23U;

	t84 = ((x3961-(x3962-x3963))>>x3964);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4029 = INT8_MIN;
	volatile int64_t x4030 = INT64_MIN;
	int16_t x4031 = INT16_MIN;
	int8_t x4032 = 48;

	t85 = ((x4029-(x4030-x4031))>>x4032);

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x4033 = 720U;
	uint64_t x4034 = 3316LLU;
	int64_t x4035 = -1LL;
	static int16_t x4036 = 1;

	t86 = ((x4033-(x4034-x4035))>>x4036);

	if (t86 != 9223372036854774509LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4061 = INT16_MIN;
	int8_t x4063 = -1;
	int16_t x4064 = 5;
	int64_t t87 = -10491638LL;

	t87 = ((x4061-(x4062-x4063))>>x4064);

	if (t87 != 288230376151710719LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4073 = 194757972U;
	int16_t x4074 = INT16_MIN;
	uint16_t x4076 = 13U;

	t88 = ((x4073-(x4074-x4075))>>x4076);

	if (t88 != 285922U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4081 = 57903892U;
	volatile int8_t x4082 = -20;
	uint64_t x4083 = UINT64_MAX;
	uint32_t x4084 = 15U;

	t89 = ((x4081-(x4082-x4083))>>x4084);

	if (t89 != 1767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x4101 = 218024LLU;
	int8_t x4103 = INT8_MIN;
	uint16_t x4104 = 21U;
	static volatile uint64_t t90 = 16095469137160LLU;

	t90 = ((x4101-(x4102-x4103))>>x4104);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4133 = UINT16_MAX;
	int16_t x4134 = INT16_MAX;
	static int8_t x4135 = INT8_MIN;
	static uint16_t x4136 = 7U;
	int32_t t91 = -7288;

	t91 = ((x4133-(x4134-x4135))>>x4136);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4137 = 1;
	static uint64_t x4138 = 49304367LLU;
	int8_t x4139 = INT8_MIN;
	volatile uint64_t x4140 = 0LLU;
	volatile uint64_t t92 = 35223984177LLU;

	t92 = ((x4137-(x4138-x4139))>>x4140);

	if (t92 != 18446744073660247122LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4145 = UINT32_MAX;
	int8_t x4146 = INT8_MIN;
	volatile int32_t x4148 = 2;
	static uint64_t t93 = 81230185949LLU;

	t93 = ((x4145-(x4146-x4147))>>x4148);

	if (t93 != 138966926073049223LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4194 = INT64_MIN;
	uint32_t x4196 = 5U;
	int64_t t94 = -8016828LL;

	t94 = ((x4193-(x4194-x4195))>>x4196);

	if (t94 != 288230376084602881LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4258 = 1LLU;
	volatile uint8_t x4259 = 1U;
	volatile uint64_t t95 = 5823278089884534018LLU;

	t95 = ((x4257-(x4258-x4259))>>x4260);

	if (t95 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4297 = 346U;
	int32_t x4298 = 0;
	uint32_t t96 = 24847930U;

	t96 = ((x4297-(x4298-x4299))>>x4300);

	if (t96 != 358U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4301 = INT16_MIN;
	int16_t x4302 = INT16_MAX;
	static int32_t x4303 = INT32_MAX;
	uint8_t x4304 = 9U;
	int32_t t97 = 123;

	t97 = ((x4301-(x4302-x4303))>>x4304);

	if (t97 != 4194176) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x4358 = UINT16_MAX;
	uint16_t x4359 = UINT16_MAX;
	volatile uint32_t t98 = 20528U;

	t98 = ((x4357-(x4358-x4359))>>x4360);

	if (t98 != 2074147U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4401 = 163267104U;
	static uint8_t x4402 = 2U;
	int32_t x4403 = INT32_MAX;
	uint8_t x4404 = 1U;
	uint32_t t99 = 510178U;

	t99 = ((x4401-(x4402-x4403))>>x4404);

	if (t99 != 1155375374U) { NG(); } else { ; }
	
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

