#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x52 = 76U;
volatile int32_t x53 = 3334;
static uint16_t x55 = 21U;
uint8_t x114 = 21U;
volatile uint8_t x115 = 12U;
int32_t x118 = 1748;
static uint64_t t4 = 72650LLU;
static uint16_t x157 = UINT16_MAX;
volatile int32_t t7 = 2927;
int32_t t8 = -348;
int64_t x195 = INT64_MAX;
static int64_t x231 = -1LL;
volatile int32_t t11 = -252541;
volatile int8_t x315 = 6;
volatile uint64_t t14 = 127LLU;
uint8_t x346 = 104U;
static int64_t x353 = 14401913458245LL;
int16_t x364 = -27;
volatile int32_t x389 = INT32_MAX;
volatile uint64_t x396 = UINT64_MAX;
uint64_t t21 = 13LLU;
uint16_t x465 = 4000U;
int64_t x466 = INT64_MIN;
volatile int64_t x468 = -1LL;
volatile uint32_t t23 = 289924U;
int8_t x490 = 3;
volatile int64_t x502 = INT64_MAX;
volatile int64_t t26 = 67178147LL;
int64_t x522 = 6022635LL;
static uint64_t x533 = UINT64_MAX;
static int32_t x536 = -221997970;
int8_t x575 = INT8_MIN;
uint64_t x596 = UINT64_MAX;
int16_t x691 = 3969;
volatile int64_t x692 = INT64_MAX;
static int64_t x736 = INT64_MIN;
volatile int32_t t36 = 103830;
uint16_t x826 = UINT16_MAX;
volatile int32_t t37 = -18;
static volatile int32_t x837 = 92563000;
static volatile uint32_t t39 = 1U;
uint8_t x857 = 95U;
uint8_t x858 = 57U;
int8_t x860 = INT8_MIN;
uint16_t x961 = 8U;
static volatile int32_t t44 = -41;
int64_t x1002 = INT64_MAX;
uint64_t x1016 = 780663LLU;
uint8_t x1023 = 6U;
uint64_t x1066 = 174003928LLU;
int8_t x1117 = INT8_MAX;
static uint8_t x1149 = 1U;
int16_t x1152 = 1;
volatile uint64_t x1169 = UINT64_MAX;
int64_t x1194 = 163LL;
int8_t x1195 = -1;
int64_t x1222 = INT64_MIN;
uint64_t t57 = 5733415540LLU;
static int16_t x1235 = 563;
volatile int64_t t58 = -533472797187644LL;
uint32_t x1252 = 6817U;
volatile int64_t x1326 = INT64_MAX;
volatile uint16_t x1333 = 124U;
uint8_t x1335 = 1U;
int8_t x1336 = INT8_MAX;
int8_t x1353 = 21;
static volatile uint32_t x1370 = 18U;
static int32_t x1377 = 13915;
static volatile int64_t t69 = -12405259LL;
volatile uint32_t x1405 = UINT32_MAX;
uint64_t x1474 = 0LLU;
int16_t x1475 = -6;
volatile int8_t x1479 = -1;
volatile int16_t x1480 = INT16_MAX;
uint64_t x1491 = 45LLU;
volatile int32_t t74 = -1763999;
int32_t x1543 = -1;
volatile int16_t x1554 = -1;
int32_t x1555 = -1;
uint32_t x1597 = UINT32_MAX;
volatile uint8_t x1617 = UINT8_MAX;
int8_t x1620 = INT8_MIN;
uint8_t x1665 = 6U;
volatile uint32_t t85 = 42651475U;
static uint8_t x1726 = UINT8_MAX;
volatile int8_t x1728 = -49;
int8_t x1729 = INT8_MAX;
volatile uint8_t x1730 = 0U;
int64_t x1732 = 815180525LL;
int64_t t87 = 266367347963163LL;
uint16_t x1735 = 16U;
int8_t x1775 = -1;
static volatile uint32_t t92 = 172U;
volatile uint64_t t93 = 676231383484LLU;
static volatile uint8_t x1903 = UINT8_MAX;
uint32_t x1909 = UINT32_MAX;
volatile int64_t x1913 = 368324537376045LL;
int8_t x1915 = INT8_MAX;
volatile int64_t t96 = -163276LL;
static int64_t x1940 = 29LL;
uint16_t x1966 = 1409U;
int32_t x1967 = 14;


void f0(void) {
	uint64_t x49 = 33201396LLU;
	static int16_t x50 = INT16_MIN;
	volatile int64_t x51 = -1LL;
	uint64_t t0 = 0LLU;

	t0 = ((x49>>(x50%x51))*x52);

	if (t0 != 2523306096LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x54 = UINT16_MAX;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t1 = -344536275;

	t1 = ((x53>>(x54%x55))*x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x85 = 758003LL;
	int16_t x86 = 7;
	uint32_t x87 = 926899548U;
	int8_t x88 = INT8_MIN;
	int64_t t2 = -1LL;

	t2 = ((x85>>(x86%x87))*x88);

	if (t2 != -757888LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x113 = 99357;
	static uint16_t x116 = 13U;
	int32_t t3 = -39046439;

	t3 = ((x113>>(x114%x115))*x116);

	if (t3 != 2522) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x117 = 4LLU;
	int8_t x119 = -1;
	uint32_t x120 = 95U;

	t4 = ((x117>>(x118%x119))*x120);

	if (t4 != 380LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x125 = INT8_MAX;
	uint16_t x126 = 2U;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 2U;
	int32_t t5 = 1;

	t5 = ((x125>>(x126%x127))*x128);

	if (t5 != 62) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x145 = 47;
	int8_t x146 = 0;
	uint8_t x147 = UINT8_MAX;
	static uint16_t x148 = 2U;
	int32_t t6 = 12844;

	t6 = ((x145>>(x146%x147))*x148);

	if (t6 != 94) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;

	t7 = ((x157>>(x158%x159))*x160);

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x178 = 10U;
	int8_t x179 = -24;
	int16_t x180 = 146;

	t8 = ((x177>>(x178%x179))*x180);

	if (t8 != 4526) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x193 = 4308548726144LLU;
	uint64_t x194 = UINT64_MAX;
	uint8_t x196 = 49U;
	volatile uint64_t t9 = 31584295998284LLU;

	t9 = ((x193>>(x194%x195))*x196);

	if (t9 != 105559443790528LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x201 = UINT16_MAX;
	static uint32_t x202 = UINT32_MAX;
	int8_t x203 = INT8_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t10 = 1;

	t10 = ((x201>>(x202%x203))*x204);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x229 = 1U;
	int32_t x230 = INT32_MIN;
	int8_t x232 = 5;

	t11 = ((x229>>(x230%x231))*x232);

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 14U;
	int32_t x316 = INT32_MAX;
	uint64_t t12 = 8195139587493174809LLU;

	t12 = ((x313>>(x314%x315))*x316);

	if (t12 != 13835058053134680065LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x325 = 0;
	uint8_t x326 = 2U;
	int64_t x327 = 13701150262606LL;
	static uint8_t x328 = UINT8_MAX;
	int32_t t13 = -208164;

	t13 = ((x325>>(x326%x327))*x328);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x337 = UINT64_MAX;
	static uint32_t x338 = UINT32_MAX;
	static volatile int8_t x339 = -7;
	static int16_t x340 = INT16_MAX;

	t14 = ((x337>>(x338%x339))*x340);

	if (t14 != 18158513697557807105LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x345 = UINT64_MAX;
	int8_t x347 = -1;
	uint64_t x348 = 420LLU;
	uint64_t t15 = 17487477957724652LLU;

	t15 = ((x345>>(x346%x347))*x348);

	if (t15 != 18446744073709551196LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x354 = 0U;
	uint16_t x355 = 22U;
	int64_t x356 = -4025LL;
	static int64_t t16 = -823104780LL;

	t16 = ((x353>>(x354%x355))*x356);

	if (t16 != -57967701669436125LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x361 = UINT64_MAX;
	static int8_t x362 = -1;
	static int32_t x363 = -1;
	static volatile uint64_t t17 = 227768LLU;

	t17 = ((x361>>(x362%x363))*x364);

	if (t17 != 27LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x390 = 6LLU;
	int32_t x391 = INT32_MAX;
	volatile int8_t x392 = -1;
	static volatile int32_t t18 = -120;

	t18 = ((x389>>(x390%x391))*x392);

	if (t18 != -33554431) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	volatile uint64_t t19 = 0LLU;

	t19 = ((x393>>(x394%x395))*x396);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x405 = 0U;
	uint16_t x406 = 0U;
	uint32_t x407 = UINT32_MAX;
	int16_t x408 = -1;
	volatile int32_t t20 = 80;

	t20 = ((x405>>(x406%x407))*x408);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x413 = UINT64_MAX;
	static volatile int8_t x414 = 28;
	int64_t x415 = INT64_MIN;
	volatile int64_t x416 = INT64_MIN;

	t21 = ((x413>>(x414%x415))*x416);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x467 = INT8_MIN;
	volatile int64_t t22 = 4298595974LL;

	t22 = ((x465>>(x466%x467))*x468);

	if (t22 != -4000LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x477 = UINT8_MAX;
	int8_t x478 = 7;
	volatile uint32_t x479 = 1116430U;
	volatile uint32_t x480 = 27501U;

	t23 = ((x477>>(x478%x479))*x480);

	if (t23 != 27501U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x485 = 1U;
	uint32_t x486 = 31U;
	int8_t x487 = -1;
	volatile int64_t x488 = -38869276140LL;
	int64_t t24 = -57618945LL;

	t24 = ((x485>>(x486%x487))*x488);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x489 = UINT32_MAX;
	volatile int64_t x491 = INT64_MAX;
	volatile int8_t x492 = INT8_MIN;
	uint32_t t25 = 6010U;

	t25 = ((x489>>(x490%x491))*x492);

	if (t25 != 128U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x501 = 0;
	int32_t x503 = -1;
	int64_t x504 = INT64_MIN;

	t26 = ((x501>>(x502%x503))*x504);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x509 = UINT32_MAX;
	static uint64_t x510 = UINT64_MAX;
	volatile uint8_t x511 = UINT8_MAX;
	volatile uint32_t x512 = 26U;
	uint32_t t27 = 30U;

	t27 = ((x509>>(x510%x511))*x512);

	if (t27 != 4294967270U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x517 = 4U;
	int16_t x518 = INT16_MIN;
	int8_t x519 = INT8_MIN;
	uint64_t x520 = 4073289832263767155LLU;
	uint64_t t28 = 1LLU;

	t28 = ((x517>>(x518%x519))*x520);

	if (t28 != 16293159329055068620LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x521 = 10153U;
	int32_t x523 = -7;
	static int16_t x524 = INT16_MAX;
	volatile int32_t t29 = 233;

	t29 = ((x521>>(x522%x523))*x524);

	if (t29 != 41581323) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x534 = 49;
	int64_t x535 = INT64_MAX;
	uint64_t t30 = 8334477677719LLU;

	t30 = ((x533>>(x534%x535))*x536);

	if (t30 != 18446736799502068626LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x573 = 1963564412997LLU;
	int64_t x574 = 3179576805556548753LL;
	static volatile int8_t x576 = -1;
	uint64_t t31 = 424LLU;

	t31 = ((x573>>(x574%x575))*x576);

	if (t31 != 18446744073694570809LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x593 = 26741U;
	int64_t x594 = INT64_MAX;
	int64_t x595 = 1LL;
	volatile uint64_t t32 = 295371287109LLU;

	t32 = ((x593>>(x594%x595))*x596);

	if (t32 != 18446744073709524875LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x689 = 18U;
	static int16_t x690 = 25;
	static volatile int64_t t33 = 25761LL;

	t33 = ((x689>>(x690%x691))*x692);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x733 = INT16_MAX;
	int8_t x734 = 25;
	static volatile uint8_t x735 = 43U;
	volatile int64_t t34 = 4085033014363957416LL;

	t34 = ((x733>>(x734%x735))*x736);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x789 = INT8_MAX;
	int8_t x790 = 3;
	int32_t x791 = INT32_MIN;
	int32_t x792 = -1978;
	int32_t t35 = -115429155;

	t35 = ((x789>>(x790%x791))*x792);

	if (t35 != -29670) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x793 = UINT16_MAX;
	volatile int8_t x794 = 31;
	int64_t x795 = INT64_MAX;
	static int16_t x796 = INT16_MIN;

	t36 = ((x793>>(x794%x795))*x796);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x825 = 9;
	volatile uint8_t x827 = 3U;
	int16_t x828 = 2596;

	t37 = ((x825>>(x826%x827))*x828);

	if (t37 != 23364) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x838 = 2677689;
	int32_t x839 = 1;
	int8_t x840 = -14;
	int32_t t38 = -53;

	t38 = ((x837>>(x838%x839))*x840);

	if (t38 != -1295882000) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x849 = 7U;
	volatile uint32_t x850 = UINT32_MAX;
	int16_t x851 = -1;
	uint16_t x852 = 64U;

	t39 = ((x849>>(x850%x851))*x852);

	if (t39 != 448U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x859 = -1;
	int32_t t40 = -1284;

	t40 = ((x857>>(x858%x859))*x860);

	if (t40 != -12160) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x893 = 998;
	uint8_t x894 = 12U;
	uint64_t x895 = 520538796731675745LLU;
	uint8_t x896 = 1U;
	static volatile int32_t t41 = -231789551;

	t41 = ((x893>>(x894%x895))*x896);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x957 = 180LLU;
	uint8_t x958 = 24U;
	static int32_t x959 = INT32_MIN;
	int32_t x960 = -1;
	uint64_t t42 = 36434LLU;

	t42 = ((x957>>(x958%x959))*x960);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x962 = 26U;
	int32_t x963 = INT32_MIN;
	uint16_t x964 = 13U;
	static volatile int32_t t43 = 5;

	t43 = ((x961>>(x962%x963))*x964);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x985 = UINT16_MAX;
	uint32_t x986 = UINT32_MAX;
	uint8_t x987 = 3U;
	static int16_t x988 = -13;

	t44 = ((x985>>(x986%x987))*x988);

	if (t44 != -851955) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1001 = 1U;
	uint8_t x1003 = 31U;
	uint16_t x1004 = 11359U;
	uint32_t t45 = 280927378U;

	t45 = ((x1001>>(x1002%x1003))*x1004);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1013 = UINT8_MAX;
	int64_t x1014 = INT64_MIN;
	volatile int8_t x1015 = 1;
	uint64_t t46 = 52114570LLU;

	t46 = ((x1013>>(x1014%x1015))*x1016);

	if (t46 != 199069065LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1021 = 0;
	uint8_t x1022 = 8U;
	volatile int32_t x1024 = INT32_MIN;
	int32_t t47 = -25;

	t47 = ((x1021>>(x1022%x1023))*x1024);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1049 = INT16_MAX;
	static uint64_t x1050 = UINT64_MAX;
	static int8_t x1051 = INT8_MAX;
	uint8_t x1052 = 93U;
	int32_t t48 = 222;

	t48 = ((x1049>>(x1050%x1051))*x1052);

	if (t48 != 1523619) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x1065 = 7U;
	uint16_t x1067 = 17U;
	int64_t x1068 = INT64_MAX;
	volatile int64_t t49 = -2LL;

	t49 = ((x1065>>(x1066%x1067))*x1068);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1118 = 0LL;
	int16_t x1119 = INT16_MIN;
	static int32_t x1120 = 16389297;
	volatile int32_t t50 = 1437;

	t50 = ((x1117>>(x1118%x1119))*x1120);

	if (t50 != 2081440719) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x1150 = 29LL;
	volatile uint8_t x1151 = 127U;
	volatile int32_t t51 = -348829092;

	t51 = ((x1149>>(x1150%x1151))*x1152);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1170 = 0LL;
	uint32_t x1171 = UINT32_MAX;
	int8_t x1172 = 54;
	volatile uint64_t t52 = 22LLU;

	t52 = ((x1169>>(x1170%x1171))*x1172);

	if (t52 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1181 = 814U;
	uint16_t x1182 = 14729U;
	volatile int32_t x1183 = -1;
	uint32_t x1184 = 3328572U;
	volatile uint32_t t53 = 13484836U;

	t53 = ((x1181>>(x1182%x1183))*x1184);

	if (t53 != 2709457608U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1193 = 14U;
	int8_t x1196 = -1;
	int32_t t54 = -736992513;

	t54 = ((x1193>>(x1194%x1195))*x1196);

	if (t54 != -14) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1209 = INT16_MAX;
	int16_t x1210 = INT16_MIN;
	volatile int8_t x1211 = -1;
	uint16_t x1212 = 13U;
	static int32_t t55 = 6644;

	t55 = ((x1209>>(x1210%x1211))*x1212);

	if (t55 != 425971) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1221 = INT16_MAX;
	static volatile uint8_t x1223 = 2U;
	volatile uint16_t x1224 = 481U;
	volatile int32_t t56 = 3;

	t56 = ((x1221>>(x1222%x1223))*x1224);

	if (t56 != 15760927) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1225 = 352U;
	int16_t x1226 = 7283;
	int8_t x1227 = -13;
	static volatile uint64_t x1228 = 98014458LLU;

	t57 = ((x1225>>(x1226%x1227))*x1228);

	if (t57 != 4312636152LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1233 = INT8_MAX;
	int8_t x1234 = 0;
	static int64_t x1236 = 7488763248LL;

	t58 = ((x1233>>(x1234%x1235))*x1236);

	if (t58 != 951072932496LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1249 = UINT64_MAX;
	int64_t x1250 = INT64_MIN;
	int32_t x1251 = INT32_MIN;
	uint64_t t59 = 344LLU;

	t59 = ((x1249>>(x1250%x1251))*x1252);

	if (t59 != 18446744073709544799LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1257 = UINT64_MAX;
	int16_t x1258 = 5758;
	int8_t x1259 = 2;
	int64_t x1260 = INT64_MAX;
	static volatile uint64_t t60 = 837LLU;

	t60 = ((x1257>>(x1258%x1259))*x1260);

	if (t60 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1297 = 1U;
	volatile int32_t x1298 = -1;
	static int32_t x1299 = -1;
	int8_t x1300 = 0;
	volatile uint32_t t61 = 39666U;

	t61 = ((x1297>>(x1298%x1299))*x1300);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1313 = 0;
	static uint8_t x1314 = 5U;
	int64_t x1315 = -1LL;
	int16_t x1316 = 62;
	int32_t t62 = -1175045;

	t62 = ((x1313>>(x1314%x1315))*x1316);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1325 = 1;
	volatile int16_t x1327 = -1;
	int64_t x1328 = 711LL;
	int64_t t63 = -7833LL;

	t63 = ((x1325>>(x1326%x1327))*x1328);

	if (t63 != 711LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1334 = 0;
	static volatile int32_t t64 = 123806;

	t64 = ((x1333>>(x1334%x1335))*x1336);

	if (t64 != 15748) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1345 = 3U;
	static int64_t x1346 = INT64_MAX;
	static volatile uint8_t x1347 = 5U;
	static uint64_t x1348 = 52987LLU;
	volatile uint64_t t65 = 1481536LLU;

	t65 = ((x1345>>(x1346%x1347))*x1348);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1354 = UINT64_MAX;
	uint16_t x1355 = 28U;
	int16_t x1356 = 2400;
	int32_t t66 = -1;

	t66 = ((x1353>>(x1354%x1355))*x1356);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x1369 = UINT32_MAX;
	volatile int32_t x1371 = INT32_MIN;
	uint32_t x1372 = 271397U;
	static uint32_t t67 = 22244796U;

	t67 = ((x1369>>(x1370%x1371))*x1372);

	if (t67 != 151329755U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1378 = INT64_MIN;
	volatile int8_t x1379 = INT8_MIN;
	static uint8_t x1380 = 5U;
	volatile int32_t t68 = 39986;

	t68 = ((x1377>>(x1378%x1379))*x1380);

	if (t68 != 69575) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1401 = UINT16_MAX;
	uint16_t x1402 = 2U;
	int8_t x1403 = INT8_MIN;
	int64_t x1404 = 1993956LL;

	t69 = ((x1401>>(x1402%x1403))*x1404);

	if (t69 != 32666981148LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x1406 = UINT16_MAX;
	static int8_t x1407 = -1;
	volatile int32_t x1408 = INT32_MAX;
	uint32_t t70 = 2788U;

	t70 = ((x1405>>(x1406%x1407))*x1408);

	if (t70 != 2147483649U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1449 = 265U;
	int64_t x1450 = 37296733LL;
	int8_t x1451 = -16;
	uint64_t x1452 = UINT64_MAX;
	uint64_t t71 = 347171225LLU;

	t71 = ((x1449>>(x1450%x1451))*x1452);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1473 = 0;
	uint32_t x1476 = 1U;
	uint32_t t72 = 307782662U;

	t72 = ((x1473>>(x1474%x1475))*x1476);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1477 = 12U;
	uint16_t x1478 = 1444U;
	volatile int32_t t73 = -168431003;

	t73 = ((x1477>>(x1478%x1479))*x1480);

	if (t73 != 393204) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1489 = INT8_MAX;
	int8_t x1490 = INT8_MIN;
	static uint16_t x1492 = UINT16_MAX;

	t74 = ((x1489>>(x1490%x1491))*x1492);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1541 = 1901638863662828LLU;
	int8_t x1542 = INT8_MIN;
	int32_t x1544 = -473024381;
	uint64_t t75 = 96888LLU;

	t75 = ((x1541>>(x1542%x1543))*x1544);

	if (t75 != 15481640719967593156LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1545 = 67U;
	static int64_t x1546 = -71830585979044433LL;
	static int8_t x1547 = -1;
	int32_t x1548 = 4599957;
	volatile int32_t t76 = -19659;

	t76 = ((x1545>>(x1546%x1547))*x1548);

	if (t76 != 308197119) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1553 = 0;
	volatile int64_t x1556 = INT64_MIN;
	static volatile int64_t t77 = -268822LL;

	t77 = ((x1553>>(x1554%x1555))*x1556);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1561 = 3U;
	int32_t x1562 = -1;
	uint64_t x1563 = UINT64_MAX;
	volatile uint32_t x1564 = UINT32_MAX;
	volatile uint32_t t78 = 49U;

	t78 = ((x1561>>(x1562%x1563))*x1564);

	if (t78 != 4294967293U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1569 = 48U;
	uint32_t x1570 = 504U;
	static volatile int32_t x1571 = 11;
	int32_t x1572 = 284796682;
	int32_t t79 = -444;

	t79 = ((x1569>>(x1570%x1571))*x1572);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x1598 = INT16_MAX;
	int8_t x1599 = INT8_MAX;
	int16_t x1600 = INT16_MIN;
	uint32_t t80 = 9U;

	t80 = ((x1597>>(x1598%x1599))*x1600);

	if (t80 != 32768U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1618 = UINT8_MAX;
	volatile int16_t x1619 = -1;
	int32_t t81 = 159260;

	t81 = ((x1617>>(x1618%x1619))*x1620);

	if (t81 != -32640) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1621 = 7;
	uint64_t x1622 = 6395595196685LLU;
	static int8_t x1623 = 48;
	int32_t x1624 = -951215;
	static int32_t t82 = 22347;

	t82 = ((x1621>>(x1622%x1623))*x1624);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1629 = 37014U;
	int64_t x1630 = 3800793LL;
	uint8_t x1631 = 6U;
	uint8_t x1632 = 6U;
	volatile uint32_t t83 = 0U;

	t83 = ((x1629>>(x1630%x1631))*x1632);

	if (t83 != 27756U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1666 = INT64_MIN;
	uint8_t x1667 = 2U;
	volatile int32_t x1668 = 0;
	volatile int32_t t84 = -25;

	t84 = ((x1665>>(x1666%x1667))*x1668);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1697 = 0U;
	static uint8_t x1698 = 9U;
	int32_t x1699 = -1;
	uint32_t x1700 = UINT32_MAX;

	t85 = ((x1697>>(x1698%x1699))*x1700);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1725 = UINT64_MAX;
	volatile uint64_t x1727 = 20LLU;
	uint64_t t86 = 100595450LLU;

	t86 = ((x1725>>(x1726%x1727))*x1728);

	if (t86 != 18419159525991907377LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1731 = INT64_MAX;

	t87 = ((x1729>>(x1730%x1731))*x1732);

	if (t87 != 103527926675LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1733 = UINT8_MAX;
	volatile uint64_t x1734 = UINT64_MAX;
	static volatile int16_t x1736 = 3;
	volatile int32_t t88 = 49109;

	t88 = ((x1733>>(x1734%x1735))*x1736);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x1773 = INT64_MAX;
	static uint8_t x1774 = UINT8_MAX;
	int16_t x1776 = -1;
	volatile int64_t t89 = -156540061442417178LL;

	t89 = ((x1773>>(x1774%x1775))*x1776);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1845 = 0U;
	int16_t x1846 = -62;
	static int32_t x1847 = -1;
	int32_t x1848 = INT32_MAX;
	volatile uint32_t t90 = 29U;

	t90 = ((x1845>>(x1846%x1847))*x1848);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x1853 = 16U;
	static volatile int8_t x1854 = INT8_MIN;
	int64_t x1855 = -1LL;
	uint8_t x1856 = UINT8_MAX;
	volatile int32_t t91 = -122;

	t91 = ((x1853>>(x1854%x1855))*x1856);

	if (t91 != 4080) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1873 = INT32_MAX;
	volatile uint32_t x1874 = UINT32_MAX;
	uint16_t x1875 = UINT16_MAX;
	volatile uint32_t x1876 = 586U;

	t92 = ((x1873>>(x1874%x1875))*x1876);

	if (t92 != 4294966710U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1893 = INT64_MAX;
	int32_t x1894 = INT32_MIN;
	int8_t x1895 = INT8_MIN;
	volatile uint64_t x1896 = UINT64_MAX;

	t93 = ((x1893>>(x1894%x1895))*x1896);

	if (t93 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1901 = 3022128235039LLU;
	uint64_t x1902 = 5457516511180LLU;
	static volatile int16_t x1904 = -1;
	uint64_t t94 = 14078991382211160LLU;

	t94 = ((x1901>>(x1902%x1903))*x1904);

	if (t94 != 18446744070758254512LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1910 = INT8_MIN;
	static volatile int32_t x1911 = -1;
	int32_t x1912 = INT32_MIN;
	static uint32_t t95 = 477U;

	t95 = ((x1909>>(x1910%x1911))*x1912);

	if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1914 = 300;
	uint8_t x1916 = 25U;

	t96 = ((x1913>>(x1914%x1915))*x1916);

	if (t96 != 125LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1937 = 268U;
	int64_t x1938 = INT64_MIN;
	static int16_t x1939 = INT16_MIN;
	volatile int64_t t97 = -1000342622594682941LL;

	t97 = ((x1937>>(x1938%x1939))*x1940);

	if (t97 != 7772LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1965 = 1921329048U;
	int8_t x1968 = 7;
	static uint32_t t98 = 424615U;

	t98 = ((x1965>>(x1966%x1967))*x1968);

	if (t98 != 26268165U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2005 = INT8_MAX;
	static uint8_t x2006 = UINT8_MAX;
	volatile uint16_t x2007 = 2U;
	static int8_t x2008 = -1;
	volatile int32_t t99 = -4350;

	t99 = ((x2005>>(x2006%x2007))*x2008);

	if (t99 != -63) { NG(); } else { ; }
	
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

