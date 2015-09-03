#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x41 = INT16_MIN;
volatile uint32_t t3 = 39156883U;
uint64_t x134 = 655334404609823LLU;
uint32_t x181 = UINT32_MAX;
uint8_t x182 = 0U;
int16_t x207 = INT16_MIN;
static volatile uint32_t t7 = 0U;
volatile uint32_t x213 = 115670091U;
uint16_t x243 = 82U;
uint16_t x344 = 7U;
static int64_t t12 = -4441917777LL;
static int64_t x365 = -1LL;
int8_t x479 = 1;
static volatile uint8_t x480 = 0U;
volatile uint64_t t16 = 4LLU;
int16_t x521 = INT16_MIN;
uint8_t x524 = 3U;
int16_t x527 = INT16_MIN;
int16_t x571 = -29;
int32_t x728 = 27;
uint64_t x748 = 0LLU;
volatile uint32_t t25 = 3033528U;
static int64_t x827 = -102994380951403453LL;
int64_t t27 = -2578581LL;
static uint64_t x861 = 4LLU;
uint64_t x862 = UINT64_MAX;
int8_t x1125 = INT8_MIN;
volatile int16_t x1198 = 31;
int16_t x1200 = 1;
int8_t x1231 = INT8_MIN;
uint64_t x1299 = UINT64_MAX;
static uint64_t t33 = 217LLU;
volatile int16_t x1335 = -1;
static int8_t x1337 = INT8_MAX;
uint16_t x1425 = 200U;
static uint16_t x1427 = 106U;
uint64_t t37 = 64685LLU;
int16_t x1460 = 3;
uint16_t x1514 = UINT16_MAX;
int16_t x1516 = 1;
uint32_t x1547 = UINT32_MAX;
int8_t x1556 = 15;
uint32_t t43 = 443884423U;
uint8_t x1641 = UINT8_MAX;
int64_t x1643 = 21467190436530671LL;
uint8_t x1644 = 16U;
uint16_t x1657 = 299U;
int32_t x1817 = -5873;
uint16_t x1865 = 53U;
int32_t x1906 = INT32_MAX;
int32_t x1925 = INT32_MIN;
uint64_t t52 = 4LLU;
volatile int32_t x1945 = -1;
volatile int64_t x1946 = 452057985LL;
volatile uint16_t x2032 = 6U;
static volatile int32_t t55 = 58;
uint16_t x2128 = 1U;
int32_t x2187 = -1;
uint16_t x2188 = 10U;
int64_t t59 = 19286475944706824LL;
int64_t x2473 = 44514LL;
static volatile int64_t t63 = -946476174LL;
volatile uint64_t x2507 = UINT64_MAX;
static uint8_t x2508 = 5U;
static int64_t x2509 = -1LL;
uint32_t t68 = 25U;
uint16_t x2556 = 55U;
volatile int16_t x2578 = INT16_MIN;
volatile int8_t x2642 = INT8_MIN;
uint8_t x2644 = 0U;
volatile int16_t x2667 = INT16_MAX;
uint8_t x2675 = UINT8_MAX;
uint8_t x2676 = 5U;
uint16_t x2730 = 0U;
int16_t x3008 = 6;
uint32_t t77 = 571907U;
volatile int64_t x3339 = INT64_MIN;
uint64_t x3361 = UINT64_MAX;
static uint64_t x3364 = 2LLU;
int8_t x3484 = 3;
uint64_t t89 = 1892032LLU;
uint64_t x3569 = 1634473710164LLU;
int32_t x3571 = INT32_MIN;
uint32_t x3618 = 23U;
volatile int8_t x3620 = 4;
int8_t x3635 = -3;
int8_t x3759 = INT8_MIN;
int8_t x3760 = 1;
volatile uint64_t t94 = 21LLU;
static uint16_t x3776 = 0U;
static int32_t x3797 = 6881;
static int16_t x3798 = INT16_MAX;
int8_t x3800 = 5;
uint16_t x3825 = 30U;
uint16_t x4130 = UINT16_MAX;


void f0(void) {
	static volatile int16_t x42 = INT16_MIN;
	uint32_t x43 = 20301U;
	int8_t x44 = 4;
	uint32_t t0 = 511386203U;

	t0 = (((x41+x42)/x43)<<x44);

	if (t0 != 3384976U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x57 = 330U;
	int8_t x58 = INT8_MIN;
	volatile uint8_t x59 = UINT8_MAX;
	static uint16_t x60 = 29U;
	static uint32_t t1 = 43476U;

	t1 = (((x57+x58)/x59)<<x60);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x73 = 26201834LLU;
	int32_t x74 = -1;
	static uint8_t x75 = 11U;
	volatile int32_t x76 = 0;
	static volatile uint64_t t2 = 19828LLU;

	t2 = (((x73+x74)/x75)<<x76);

	if (t2 != 2381984LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x93 = -54;
	static uint32_t x94 = 9166U;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = 3;

	t3 = (((x93+x94)/x95)<<x96);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x133 = 7493;
	int64_t x135 = INT64_MIN;
	volatile uint16_t x136 = 0U;
	uint64_t t4 = 743389634196LLU;

	t4 = (((x133+x134)/x135)<<x136);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x165 = UINT8_MAX;
	static volatile uint32_t x166 = 1U;
	volatile uint16_t x167 = UINT16_MAX;
	int8_t x168 = 1;
	volatile uint32_t t5 = 708223651U;

	t5 = (((x165+x166)/x167)<<x168);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x183 = 1;
	uint16_t x184 = 0U;
	uint32_t t6 = UINT32_MAX;

	t6 = (((x181+x182)/x183)<<x184);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x205 = 43291950U;
	int16_t x206 = 1521;
	uint64_t x208 = 6LLU;

	t7 = (((x205+x206)/x207)<<x208);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = INT64_MAX;
	static uint16_t x216 = 0U;
	volatile uint64_t t8 = 10LLU;

	t8 = (((x213+x214)/x215)<<x216);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x241 = INT16_MAX;
	volatile int16_t x242 = INT16_MIN;
	int64_t x244 = 3LL;
	volatile int32_t t9 = 19561156;

	t9 = (((x241+x242)/x243)<<x244);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x285 = UINT32_MAX;
	static volatile int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	static uint8_t x288 = 9U;
	volatile uint32_t t10 = 24U;

	t10 = (((x285+x286)/x287)<<x288);

	if (t10 != 512U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x341 = 178U;
	int16_t x342 = 0;
	volatile uint32_t x343 = UINT32_MAX;
	uint32_t t11 = 10U;

	t11 = (((x341+x342)/x343)<<x344);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x357 = 11669105LL;
	int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	int32_t x360 = 0;

	t12 = (((x357+x358)/x359)<<x360);

	if (t12 != 2135814543LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x366 = UINT16_MAX;
	static uint8_t x367 = 1U;
	uint8_t x368 = 0U;
	static int64_t t13 = 3LL;

	t13 = (((x365+x366)/x367)<<x368);

	if (t13 != 65534LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x393 = 5334;
	static uint16_t x394 = 136U;
	int64_t x395 = INT64_MIN;
	uint8_t x396 = 13U;
	volatile int64_t t14 = -9846174605516055LL;

	t14 = (((x393+x394)/x395)<<x396);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x433 = -1LL;
	int16_t x434 = -1;
	uint8_t x435 = UINT8_MAX;
	volatile uint16_t x436 = 25U;
	int64_t t15 = -221744LL;

	t15 = (((x433+x434)/x435)<<x436);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x477 = INT8_MIN;
	static uint64_t x478 = UINT64_MAX;

	t16 = (((x477+x478)/x479)<<x480);

	if (t16 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x501 = 237U;
	static volatile uint32_t x502 = 14312U;
	static int64_t x503 = -109776946LL;
	uint8_t x504 = 0U;
	int64_t t17 = 4358447641190568LL;

	t17 = (((x501+x502)/x503)<<x504);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x522 = 11759U;
	volatile int8_t x523 = INT8_MIN;
	uint32_t t18 = 335U;

	t18 = (((x521+x522)/x523)<<x524);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x525 = INT8_MIN;
	volatile uint8_t x526 = 4U;
	int64_t x528 = 0LL;
	volatile int32_t t19 = 25;

	t19 = (((x525+x526)/x527)<<x528);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x569 = 3U;
	int16_t x570 = -1;
	volatile int16_t x572 = 12;
	volatile int32_t t20 = 36;

	t20 = (((x569+x570)/x571)<<x572);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x601 = 62;
	volatile int16_t x602 = INT16_MIN;
	int32_t x603 = INT32_MAX;
	int32_t x604 = 3;
	volatile int32_t t21 = -62570;

	t21 = (((x601+x602)/x603)<<x604);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x681 = INT16_MIN;
	int64_t x682 = 2784614LL;
	static volatile int16_t x683 = INT16_MAX;
	volatile uint64_t x684 = 4LLU;
	volatile int64_t t22 = 0LL;

	t22 = (((x681+x682)/x683)<<x684);

	if (t22 != 1328LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x725 = 0U;
	int32_t x726 = -155705;
	int64_t x727 = INT64_MIN;
	volatile int64_t t23 = 1LL;

	t23 = (((x725+x726)/x727)<<x728);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x741 = INT16_MIN;
	volatile int32_t x742 = 1401;
	int64_t x743 = -26LL;
	static uint8_t x744 = 2U;
	volatile int64_t t24 = 35926186LL;

	t24 = (((x741+x742)/x743)<<x744);

	if (t24 != 4824LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x745 = -2712;
	int16_t x746 = 1;
	uint32_t x747 = 288978925U;

	t25 = (((x745+x746)/x747)<<x748);

	if (t25 != 14U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x761 = 957225250LL;
	int16_t x762 = INT16_MAX;
	int16_t x763 = INT16_MAX;
	int8_t x764 = 10;
	int64_t t26 = 187436LL;

	t26 = (((x761+x762)/x763)<<x764);

	if (t26 != 29915136LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x825 = 3U;
	int64_t x826 = INT64_MIN;
	uint8_t x828 = 11U;

	t27 = (((x825+x826)/x827)<<x828);

	if (t27 != 182272LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x863 = UINT64_MAX;
	static uint16_t x864 = 1U;
	uint64_t t28 = 214388350461923435LLU;

	t28 = (((x861+x862)/x863)<<x864);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1126 = -1LL;
	volatile int8_t x1127 = INT8_MIN;
	volatile uint16_t x1128 = 1U;
	volatile int64_t t29 = -122LL;

	t29 = (((x1125+x1126)/x1127)<<x1128);

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1197 = -1;
	volatile uint16_t x1199 = UINT16_MAX;
	int32_t t30 = -3524;

	t30 = (((x1197+x1198)/x1199)<<x1200);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1229 = 7;
	int32_t x1230 = INT32_MIN;
	static int64_t x1232 = 3LL;
	int32_t t31 = -534627808;

	t31 = (((x1229+x1230)/x1231)<<x1232);

	if (t31 != 134217720) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1293 = INT16_MAX;
	volatile int64_t x1294 = -1LL;
	volatile int16_t x1295 = INT16_MIN;
	int32_t x1296 = 0;
	static volatile int64_t t32 = 15455429309LL;

	t32 = (((x1293+x1294)/x1295)<<x1296);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1297 = 14305U;
	uint16_t x1298 = 192U;
	int8_t x1300 = 1;

	t33 = (((x1297+x1298)/x1299)<<x1300);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1333 = UINT64_MAX;
	uint32_t x1334 = 0U;
	int16_t x1336 = 34;
	volatile uint64_t t34 = 85230LLU;

	t34 = (((x1333+x1334)/x1335)<<x1336);

	if (t34 != 17179869184LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1338 = 750183LLU;
	int32_t x1339 = -18;
	static uint8_t x1340 = 4U;
	uint64_t t35 = 521LLU;

	t35 = (((x1337+x1338)/x1339)<<x1340);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1341 = INT16_MAX;
	uint64_t x1342 = 19664394699968711LLU;
	volatile uint16_t x1343 = 336U;
	int8_t x1344 = 0;
	static volatile uint64_t t36 = 5689653050LLU;

	t36 = (((x1341+x1342)/x1343)<<x1344);

	if (t36 != 58524984226194LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x1426 = 4593547499LLU;
	volatile uint8_t x1428 = 14U;

	t37 = (((x1425+x1426)/x1427)<<x1428);

	if (t37 != 710006456320LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x1457 = 1;
	uint8_t x1458 = 0U;
	int16_t x1459 = INT16_MIN;
	int32_t t38 = -173885;

	t38 = (((x1457+x1458)/x1459)<<x1460);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1465 = INT16_MIN;
	int64_t x1466 = INT64_MAX;
	int64_t x1467 = INT64_MIN;
	uint8_t x1468 = 7U;
	volatile int64_t t39 = -254531227700373LL;

	t39 = (((x1465+x1466)/x1467)<<x1468);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1493 = 1U;
	volatile uint8_t x1494 = 1U;
	static uint16_t x1495 = 10969U;
	uint8_t x1496 = 31U;
	volatile int32_t t40 = -109241502;

	t40 = (((x1493+x1494)/x1495)<<x1496);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1513 = INT8_MAX;
	uint64_t x1515 = 2LLU;
	uint64_t t41 = 1259371239216542858LLU;

	t41 = (((x1513+x1514)/x1515)<<x1516);

	if (t41 != 65662LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1545 = -1LL;
	int16_t x1546 = 7212;
	volatile int8_t x1548 = 48;
	volatile int64_t t42 = 26801LL;

	t42 = (((x1545+x1546)/x1547)<<x1548);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1553 = INT16_MAX;
	uint32_t x1554 = 1479998462U;
	static int16_t x1555 = INT16_MIN;

	t43 = (((x1553+x1554)/x1555)<<x1556);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1581 = 263842747236602LLU;
	int32_t x1582 = -1;
	int16_t x1583 = INT16_MIN;
	volatile int8_t x1584 = 0;
	static uint64_t t44 = 27381LLU;

	t44 = (((x1581+x1582)/x1583)<<x1584);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1642 = INT16_MIN;
	int64_t t45 = -3026398442874843LL;

	t45 = (((x1641+x1642)/x1643)<<x1644);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1658 = 62588;
	volatile uint64_t x1659 = 6240016009373313LLU;
	uint32_t x1660 = 63U;
	static uint64_t t46 = 6534483708LLU;

	t46 = (((x1657+x1658)/x1659)<<x1660);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1818 = 570;
	uint64_t x1819 = UINT64_MAX;
	int32_t x1820 = 10;
	volatile uint64_t t47 = 4043919284723LLU;

	t47 = (((x1817+x1818)/x1819)<<x1820);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1866 = 170LL;
	uint32_t x1867 = 21962945U;
	static volatile int8_t x1868 = 13;
	int64_t t48 = 2184214112064811LL;

	t48 = (((x1865+x1866)/x1867)<<x1868);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1905 = -1;
	volatile int32_t x1907 = INT32_MIN;
	volatile int8_t x1908 = 7;
	int32_t t49 = 11189692;

	t49 = (((x1905+x1906)/x1907)<<x1908);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1926 = 50367899LLU;
	uint64_t x1927 = 123349871886134LLU;
	uint8_t x1928 = 62U;
	uint64_t t50 = 87LLU;

	t50 = (((x1925+x1926)/x1927)<<x1928);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1933 = INT32_MIN;
	uint32_t x1934 = UINT32_MAX;
	volatile int8_t x1935 = -1;
	int16_t x1936 = 0;
	uint32_t t51 = 365U;

	t51 = (((x1933+x1934)/x1935)<<x1936);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1937 = 874895151831612184LLU;
	volatile int32_t x1938 = -1;
	static volatile int8_t x1939 = INT8_MAX;
	static uint8_t x1940 = 1U;

	t52 = (((x1937+x1938)/x1939)<<x1940);

	if (t52 != 13777876406797042LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1947 = 1U;
	volatile int32_t x1948 = 1;
	int64_t t53 = 65900493937170LL;

	t53 = (((x1945+x1946)/x1947)<<x1948);

	if (t53 != 904115968LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1977 = -1LL;
	static volatile uint32_t x1978 = UINT32_MAX;
	uint32_t x1979 = 710U;
	volatile int8_t x1980 = 2;
	volatile int64_t t54 = 8655613573616LL;

	t54 = (((x1977+x1978)/x1979)<<x1980);

	if (t54 != 24196996LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2029 = 6U;
	int16_t x2030 = -1;
	int8_t x2031 = INT8_MIN;

	t55 = (((x2029+x2030)/x2031)<<x2032);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2125 = 1790U;
	uint16_t x2126 = 44U;
	uint32_t x2127 = 370353289U;
	uint32_t t56 = 1323515U;

	t56 = (((x2125+x2126)/x2127)<<x2128);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2185 = 626294848655303LLU;
	static int16_t x2186 = INT16_MIN;
	static volatile uint64_t t57 = 1207121419LLU;

	t57 = (((x2185+x2186)/x2187)<<x2188);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2189 = INT32_MIN;
	volatile uint64_t x2190 = UINT64_MAX;
	static volatile uint32_t x2191 = 14327U;
	uint8_t x2192 = 0U;
	uint64_t t58 = 6210LLU;

	t58 = (((x2189+x2190)/x2191)<<x2192);

	if (t58 != 1287551062438896LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x2393 = UINT16_MAX;
	static int16_t x2394 = -1;
	static int64_t x2395 = INT64_MIN;
	static uint16_t x2396 = 30U;

	t59 = (((x2393+x2394)/x2395)<<x2396);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2397 = 1;
	volatile int8_t x2398 = INT8_MIN;
	uint16_t x2399 = 276U;
	uint8_t x2400 = 5U;
	volatile int32_t t60 = 6663;

	t60 = (((x2397+x2398)/x2399)<<x2400);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2401 = -63;
	static volatile int16_t x2402 = -11653;
	int8_t x2403 = -1;
	static volatile uint8_t x2404 = 2U;
	int32_t t61 = -1782;

	t61 = (((x2401+x2402)/x2403)<<x2404);

	if (t61 != 46864) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2474 = INT16_MIN;
	uint16_t x2475 = UINT16_MAX;
	uint8_t x2476 = 2U;
	static int64_t t62 = -916937733386LL;

	t62 = (((x2473+x2474)/x2475)<<x2476);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x2485 = 1LL;
	int32_t x2486 = -1;
	uint16_t x2487 = UINT16_MAX;
	static volatile uint8_t x2488 = 1U;

	t63 = (((x2485+x2486)/x2487)<<x2488);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x2497 = 28;
	int64_t x2498 = -64804194505LL;
	int64_t x2499 = INT64_MIN;
	static uint16_t x2500 = 55U;
	int64_t t64 = 6171840634125LL;

	t64 = (((x2497+x2498)/x2499)<<x2500);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2505 = INT16_MIN;
	int64_t x2506 = INT64_MAX;
	volatile uint64_t t65 = 2764838127LLU;

	t65 = (((x2505+x2506)/x2507)<<x2508);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2510 = 66;
	int8_t x2511 = 7;
	int8_t x2512 = 13;
	volatile int64_t t66 = -290902571996LL;

	t66 = (((x2509+x2510)/x2511)<<x2512);

	if (t66 != 73728LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2517 = -1;
	uint64_t x2518 = 9LLU;
	static uint8_t x2519 = 1U;
	uint8_t x2520 = 10U;
	uint64_t t67 = 572623LLU;

	t67 = (((x2517+x2518)/x2519)<<x2520);

	if (t67 != 8192LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x2545 = 1266U;
	uint32_t x2546 = 1925783551U;
	int32_t x2547 = 61;
	int32_t x2548 = 16;

	t68 = (((x2545+x2546)/x2547)<<x2548);

	if (t68 != 3108110336U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x2553 = INT8_MIN;
	int16_t x2554 = INT16_MIN;
	uint64_t x2555 = 841144116859LLU;
	volatile uint64_t t69 = 29972LLU;

	t69 = (((x2553+x2554)/x2555)<<x2556);

	if (t69 != 1549238271815450624LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x2577 = 1755U;
	int8_t x2579 = -1;
	uint8_t x2580 = 0U;
	int32_t t70 = 14140;

	t70 = (((x2577+x2578)/x2579)<<x2580);

	if (t70 != 31013) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2641 = 2LL;
	volatile uint8_t x2643 = UINT8_MAX;
	int64_t t71 = -34141531555978LL;

	t71 = (((x2641+x2642)/x2643)<<x2644);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2665 = 8076;
	uint8_t x2666 = UINT8_MAX;
	int8_t x2668 = 0;
	volatile int32_t t72 = 3026685;

	t72 = (((x2665+x2666)/x2667)<<x2668);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x2673 = 6630U;
	int32_t x2674 = -1;
	volatile int32_t t73 = -1;

	t73 = (((x2673+x2674)/x2675)<<x2676);

	if (t73 != 800) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2677 = -14;
	int32_t x2678 = -4489;
	int64_t x2679 = -487746015LL;
	volatile uint8_t x2680 = 9U;
	volatile int64_t t74 = 9876LL;

	t74 = (((x2677+x2678)/x2679)<<x2680);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2729 = 28448319278LLU;
	volatile int8_t x2731 = INT8_MIN;
	int8_t x2732 = 0;
	uint64_t t75 = 976064145201148LLU;

	t75 = (((x2729+x2730)/x2731)<<x2732);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2881 = INT16_MIN;
	int64_t x2882 = -1LL;
	int32_t x2883 = INT32_MIN;
	uint32_t x2884 = 18U;
	int64_t t76 = -44929LL;

	t76 = (((x2881+x2882)/x2883)<<x2884);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3005 = -1;
	static uint32_t x3006 = 2713119U;
	static int8_t x3007 = INT8_MIN;

	t77 = (((x3005+x3006)/x3007)<<x3008);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x3013 = INT8_MAX;
	int64_t x3014 = INT64_MIN;
	volatile int32_t x3015 = INT32_MIN;
	int16_t x3016 = 7;
	volatile int64_t t78 = -3977LL;

	t78 = (((x3013+x3014)/x3015)<<x3016);

	if (t78 != 549755813760LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3037 = 1U;
	int16_t x3038 = -1;
	int64_t x3039 = INT64_MIN;
	uint64_t x3040 = 59LLU;
	static volatile int64_t t79 = -132LL;

	t79 = (((x3037+x3038)/x3039)<<x3040);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3121 = -1;
	uint8_t x3122 = 1U;
	int8_t x3123 = INT8_MIN;
	uint32_t x3124 = 11U;
	volatile int32_t t80 = 11238713;

	t80 = (((x3121+x3122)/x3123)<<x3124);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3293 = UINT32_MAX;
	volatile int8_t x3294 = INT8_MIN;
	uint8_t x3295 = 38U;
	volatile uint16_t x3296 = 0U;
	static volatile uint32_t t81 = 2186532U;

	t81 = (((x3293+x3294)/x3295)<<x3296);

	if (t81 != 113025451U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3317 = 11266453U;
	volatile uint8_t x3318 = 51U;
	int8_t x3319 = -1;
	volatile uint8_t x3320 = 9U;
	volatile uint32_t t82 = 1U;

	t82 = (((x3317+x3318)/x3319)<<x3320);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x3337 = -1LL;
	uint16_t x3338 = UINT16_MAX;
	static volatile int32_t x3340 = 46;
	static int64_t t83 = -84LL;

	t83 = (((x3337+x3338)/x3339)<<x3340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3362 = INT8_MAX;
	int64_t x3363 = INT64_MIN;
	volatile uint64_t t84 = 103041LLU;

	t84 = (((x3361+x3362)/x3363)<<x3364);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x3385 = UINT8_MAX;
	static int8_t x3386 = INT8_MIN;
	int32_t x3387 = INT32_MIN;
	uint8_t x3388 = 5U;
	int32_t t85 = -6;

	t85 = (((x3385+x3386)/x3387)<<x3388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x3481 = 594U;
	int16_t x3482 = INT16_MIN;
	int32_t x3483 = -240;
	volatile int32_t t86 = -34;

	t86 = (((x3481+x3482)/x3483)<<x3484);

	if (t86 != 1072) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3485 = 2;
	static volatile uint16_t x3486 = UINT16_MAX;
	uint32_t x3487 = 1829113U;
	uint16_t x3488 = 0U;
	volatile uint32_t t87 = 6817U;

	t87 = (((x3485+x3486)/x3487)<<x3488);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3525 = 32;
	static int8_t x3526 = INT8_MIN;
	uint32_t x3527 = 333790108U;
	int32_t x3528 = 0;
	uint32_t t88 = 27330U;

	t88 = (((x3525+x3526)/x3527)<<x3528);

	if (t88 != 12U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3537 = UINT64_MAX;
	int16_t x3538 = INT16_MAX;
	volatile uint16_t x3539 = 85U;
	uint8_t x3540 = 20U;

	t89 = (((x3537+x3538)/x3539)<<x3540);

	if (t89 != 403701760LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3570 = UINT64_MAX;
	volatile int8_t x3572 = 0;
	uint64_t t90 = 6087LLU;

	t90 = (((x3569+x3570)/x3571)<<x3572);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x3617 = INT16_MIN;
	int32_t x3619 = -1;
	uint32_t t91 = 251745281U;

	t91 = (((x3617+x3618)/x3619)<<x3620);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3633 = -1;
	int16_t x3634 = INT16_MIN;
	uint16_t x3636 = 1U;
	volatile int32_t t92 = -280314;

	t92 = (((x3633+x3634)/x3635)<<x3636);

	if (t92 != 21846) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x3673 = UINT64_MAX;
	volatile int8_t x3674 = -14;
	volatile int16_t x3675 = -1;
	int16_t x3676 = 0;
	static volatile uint64_t t93 = 1944034167986055885LLU;

	t93 = (((x3673+x3674)/x3675)<<x3676);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3757 = 357933499144207LLU;
	int16_t x3758 = -36;

	t94 = (((x3757+x3758)/x3759)<<x3760);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3773 = -1;
	uint64_t x3774 = 894903203041LLU;
	volatile int64_t x3775 = INT64_MAX;
	volatile uint64_t t95 = 286025741382816LLU;

	t95 = (((x3773+x3774)/x3775)<<x3776);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x3799 = UINT32_MAX;
	static uint32_t t96 = 5334747U;

	t96 = (((x3797+x3798)/x3799)<<x3800);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3826 = 128176LLU;
	uint16_t x3827 = 41U;
	int16_t x3828 = 5;
	static uint64_t t97 = 4LLU;

	t97 = (((x3825+x3826)/x3827)<<x3828);

	if (t97 != 100032LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4117 = 28;
	volatile uint64_t x4118 = 19796342474856LLU;
	int16_t x4119 = INT16_MIN;
	int8_t x4120 = 24;
	uint64_t t98 = 999709894689027910LLU;

	t98 = (((x4117+x4118)/x4119)<<x4120);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4129 = -1;
	volatile int16_t x4131 = 4;
	int8_t x4132 = 1;
	volatile int32_t t99 = -12503874;

	t99 = (((x4129+x4130)/x4131)<<x4132);

	if (t99 != 32766) { NG(); } else { ; }
	
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

