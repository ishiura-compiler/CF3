#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 1219U;
uint32_t t0 = 981290081U;
uint8_t x53 = 11U;
uint64_t x70 = UINT64_MAX;
uint64_t x71 = UINT64_MAX;
uint64_t x154 = UINT64_MAX;
static uint8_t x184 = 6U;
static volatile uint8_t x197 = 22U;
volatile uint64_t t9 = 28LLU;
static uint8_t x405 = 0U;
uint64_t t13 = 300209LLU;
uint32_t x442 = 37122562U;
static int64_t x443 = 7305531239230LL;
int64_t x457 = INT64_MAX;
int64_t x459 = INT64_MIN;
uint16_t x484 = 1U;
int32_t x699 = INT32_MIN;
volatile int16_t x714 = INT16_MIN;
int32_t x1105 = 18055;
static int32_t t23 = -14;
int32_t x1130 = -425076;
static volatile int64_t x1234 = -1LL;
int16_t x1259 = 3939;
int8_t x1278 = -1;
uint64_t t31 = 1069228336954LLU;
int32_t x1305 = INT32_MIN;
int16_t x1318 = 0;
int32_t t33 = -210626;
uint8_t x1473 = UINT8_MAX;
static int16_t x1483 = -1;
volatile uint16_t x1484 = 3U;
int32_t t36 = 18894188;
uint8_t x1518 = 1U;
volatile int16_t x1543 = -66;
volatile int64_t t39 = -57LL;
volatile int32_t x1771 = INT32_MIN;
int16_t x1775 = INT16_MIN;
uint64_t x1781 = 1952466LLU;
volatile uint64_t x1807 = 4570625722LLU;
int32_t x1831 = INT32_MAX;
int8_t x1873 = INT8_MAX;
uint16_t x1875 = UINT16_MAX;
static int8_t x1876 = 4;
volatile int32_t t46 = 2;
uint8_t x1904 = 7U;
int32_t t47 = 2156508;
volatile int16_t x1950 = 10;
uint8_t x1952 = 2U;
int64_t x1969 = INT64_MIN;
volatile int32_t x2054 = -3382;
uint16_t x2055 = 13U;
volatile int32_t t52 = -2;
int32_t x2069 = -1;
uint8_t x2072 = 1U;
static int32_t t53 = 616;
uint64_t x2109 = 1982240364297LLU;
static uint16_t x2110 = UINT16_MAX;
int32_t x2111 = INT32_MAX;
static uint8_t x2271 = 85U;
static uint32_t x2272 = 8U;
int32_t x2401 = -69354;
volatile uint32_t t57 = 40388U;
int32_t x2441 = -1;
volatile uint64_t t58 = 15996222224924LLU;
int64_t x2770 = -16713213LL;
volatile uint64_t t62 = 4441464691424068247LLU;
volatile int32_t x2818 = -1;
volatile int64_t t64 = -240085089439559LL;
volatile uint8_t x2877 = 6U;
int64_t x2907 = INT64_MAX;
uint32_t x2983 = UINT32_MAX;
uint16_t x3009 = 332U;
uint8_t x3072 = 1U;
uint16_t x3101 = 26470U;
volatile int64_t t71 = -88925237074026761LL;
uint32_t x3251 = UINT32_MAX;
uint8_t x3252 = 1U;
int8_t x3289 = -1;
int16_t x3515 = INT16_MIN;
volatile int64_t t80 = -20248LL;
uint32_t x3629 = UINT32_MAX;
int32_t x3630 = INT32_MAX;
static uint32_t t81 = 3652U;
uint16_t x3658 = 5864U;
static uint64_t x3659 = 2164658819048589870LLU;
static int64_t x3681 = INT64_MAX;
int32_t x3684 = 29;
int8_t x3693 = INT8_MIN;
uint64_t x3694 = 56088LLU;
int32_t x3695 = 27;
volatile uint32_t x3696 = 50U;
int64_t x3758 = INT64_MIN;
int32_t x3759 = INT32_MAX;
static int8_t x3959 = -11;
int16_t x3991 = 0;
static volatile int64_t t90 = -13533408LL;
uint64_t x4083 = UINT64_MAX;
volatile uint64_t t94 = 8690435262977722421LLU;
uint8_t x4116 = 5U;
int8_t x4162 = -1;
uint64_t x4176 = 6LLU;
volatile int64_t t99 = 655229441LL;


void f0(void) {
	int16_t x5 = -2;
	uint32_t x7 = 49549U;
	uint8_t x8 = 0U;

	t0 = ((x5^(x6&x7))>>x8);

	if (t0 != 4294967167U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x25 = UINT8_MAX;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = 15U;
	uint32_t x28 = 25U;
	int32_t t1 = 1;

	t1 = ((x25^(x26&x27))>>x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x54 = 32455U;
	int32_t x55 = -1352;
	uint64_t x56 = 2LLU;
	int32_t t2 = -8170;

	t2 = ((x53^(x54&x55))>>x56);

	if (t2 != 7842) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = INT16_MAX;
	uint8_t x72 = 32U;
	uint64_t t3 = 1213042467LLU;

	t3 = ((x69^(x70&x71))>>x72);

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x117 = INT64_MAX;
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = -1;
	volatile uint8_t x120 = 40U;
	int64_t t4 = 1152826LL;

	t4 = ((x117^(x118&x119))>>x120);

	if (t4 != 8388607LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x153 = INT64_MIN;
	static uint8_t x155 = UINT8_MAX;
	uint8_t x156 = 24U;
	uint64_t t5 = 20859426465672LLU;

	t5 = ((x153^(x154&x155))>>x156);

	if (t5 != 549755813888LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	static int16_t x183 = INT16_MIN;
	volatile int32_t t6 = 39885;

	t6 = ((x181^(x182&x183))>>x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x198 = INT64_MIN;
	static volatile int8_t x199 = INT8_MAX;
	int64_t x200 = 1LL;
	int64_t t7 = -3698332688719274LL;

	t7 = ((x197^(x198&x199))>>x200);

	if (t7 != 11LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x213 = 16079819057LLU;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = -1;
	static uint8_t x216 = 41U;
	uint64_t t8 = 29LLU;

	t8 = ((x213^(x214&x215))>>x216);

	if (t8 != 8388607LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x281 = UINT64_MAX;
	uint8_t x282 = UINT8_MAX;
	volatile int8_t x283 = -31;
	int8_t x284 = 1;

	t9 = ((x281^(x282&x283))>>x284);

	if (t9 != 9223372036854775695LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x313 = 179U;
	int64_t x314 = -750LL;
	static uint16_t x315 = UINT16_MAX;
	int16_t x316 = 22;
	int64_t t10 = 1449LL;

	t10 = ((x313^(x314&x315))>>x316);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x381 = 381148865503458972LLU;
	uint32_t x382 = 22372U;
	int64_t x383 = INT64_MAX;
	int8_t x384 = 1;
	uint64_t t11 = 147LLU;

	t11 = ((x381^(x382&x383))>>x384);

	if (t11 != 190574432751718652LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int8_t x396 = 0;
	static volatile uint32_t t12 = 3U;

	t12 = ((x393^(x394&x395))>>x396);

	if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x406 = 8024644550842687612LLU;
	int8_t x407 = 3;
	int8_t x408 = 1;

	t13 = ((x405^(x406&x407))>>x408);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x441 = 22094435993472LL;
	uint16_t x444 = 1U;
	static volatile int64_t t14 = -52LL;

	t14 = ((x441^(x442&x443))>>x444);

	if (t14 != 11047201747649LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x458 = UINT32_MAX;
	int64_t x460 = 0LL;
	int64_t t15 = INT64_MAX;

	t15 = ((x457^(x458&x459))>>x460);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x481 = 23;
	volatile uint8_t x482 = 0U;
	uint32_t x483 = UINT32_MAX;
	uint32_t t16 = 179107U;

	t16 = ((x481^(x482&x483))>>x484);

	if (t16 != 11U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x561 = UINT64_MAX;
	int64_t x562 = 17467LL;
	int64_t x563 = INT64_MIN;
	int8_t x564 = 23;
	static volatile uint64_t t17 = 3LLU;

	t17 = ((x561^(x562&x563))>>x564);

	if (t17 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x697 = INT32_MIN;
	int64_t x698 = INT64_MIN;
	volatile int16_t x700 = 26;
	int64_t t18 = 8538906030119LL;

	t18 = ((x697^(x698&x699))>>x700);

	if (t18 != 137438953440LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x713 = 583LL;
	static int32_t x715 = INT32_MAX;
	static uint8_t x716 = 7U;
	static volatile int64_t t19 = 224390693199886LL;

	t19 = ((x713^(x714&x715))>>x716);

	if (t19 != 16776964LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x829 = 5U;
	uint32_t x830 = UINT32_MAX;
	volatile int64_t x831 = INT64_MIN;
	int16_t x832 = 46;
	volatile int64_t t20 = 1700411506LL;

	t20 = ((x829^(x830&x831))>>x832);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x953 = UINT64_MAX;
	static volatile uint16_t x954 = 688U;
	int8_t x955 = 2;
	static int32_t x956 = 63;
	uint64_t t21 = 2722LLU;

	t21 = ((x953^(x954&x955))>>x956);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1097 = -60;
	volatile uint64_t x1098 = 7743019458955634LLU;
	int64_t x1099 = -20LL;
	static uint8_t x1100 = 46U;
	uint64_t t22 = 124180241039708LLU;

	t22 = ((x1097^(x1098&x1099))>>x1100);

	if (t22 != 262033LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1106 = 4;
	uint16_t x1107 = 6U;
	uint16_t x1108 = 2U;

	t23 = ((x1105^(x1106&x1107))>>x1108);

	if (t23 != 4512) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1129 = -1;
	int8_t x1131 = INT8_MIN;
	static uint8_t x1132 = 4U;
	static volatile int32_t t24 = -35183780;

	t24 = ((x1129^(x1130&x1131))>>x1132);

	if (t24 != 26567) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1145 = 801U;
	uint16_t x1146 = 4337U;
	uint64_t x1147 = 0LLU;
	int8_t x1148 = 16;
	static uint64_t t25 = 938759034963180LLU;

	t25 = ((x1145^(x1146&x1147))>>x1148);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1213 = -1LL;
	int32_t x1214 = -1;
	int64_t x1215 = -449692LL;
	static uint8_t x1216 = 23U;
	int64_t t26 = 332432LL;

	t26 = ((x1213^(x1214&x1215))>>x1216);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1233 = 458178810751822204LLU;
	uint32_t x1235 = 5355U;
	int64_t x1236 = 7LL;
	volatile uint64_t t27 = 460872047LLU;

	t27 = ((x1233^(x1234&x1235))>>x1236);

	if (t27 != 3579521958998651LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1249 = INT8_MIN;
	static uint32_t x1250 = UINT32_MAX;
	int16_t x1251 = INT16_MIN;
	int32_t x1252 = 0;
	volatile uint32_t t28 = 83883298U;

	t28 = ((x1249^(x1250&x1251))>>x1252);

	if (t28 != 32640U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1257 = 6034697U;
	static volatile int8_t x1258 = -47;
	static int16_t x1260 = 0;
	uint32_t t29 = 0U;

	t29 = ((x1257^(x1258&x1259))>>x1260);

	if (t29 != 6036040U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1277 = 0U;
	static uint16_t x1279 = 43U;
	static uint8_t x1280 = 2U;
	static volatile int32_t t30 = 212;

	t30 = ((x1277^(x1278&x1279))>>x1280);

	if (t30 != 10) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1285 = 1392571820LLU;
	volatile int32_t x1286 = -1;
	volatile int32_t x1287 = INT32_MIN;
	volatile uint16_t x1288 = 1U;

	t31 = ((x1285^(x1286&x1287))>>x1288);

	if (t31 != 9223372036477319894LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1306 = INT16_MIN;
	int64_t x1307 = -1LL;
	static int16_t x1308 = 11;
	volatile int64_t t32 = -82843351116LL;

	t32 = ((x1305^(x1306&x1307))>>x1308);

	if (t32 != 1048560LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1317 = INT32_MAX;
	int32_t x1319 = INT32_MAX;
	volatile int8_t x1320 = 1;

	t33 = ((x1317^(x1318&x1319))>>x1320);

	if (t33 != 1073741823) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1469 = 112;
	int8_t x1470 = -2;
	volatile uint32_t x1471 = 115882988U;
	static int8_t x1472 = 1;
	static volatile uint32_t t34 = 477844041U;

	t34 = ((x1469^(x1470&x1471))>>x1472);

	if (t34 != 57941454U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1474 = 4649;
	int16_t x1475 = INT16_MAX;
	int8_t x1476 = 3;
	volatile int32_t t35 = 32486908;

	t35 = ((x1473^(x1474&x1475))>>x1476);

	if (t35 != 602) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1481 = UINT16_MAX;
	int8_t x1482 = 5;

	t36 = ((x1481^(x1482&x1483))>>x1484);

	if (t36 != 8191) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1517 = 60199393;
	uint8_t x1519 = 1U;
	static int8_t x1520 = 0;
	volatile int32_t t37 = 129380;

	t37 = ((x1517^(x1518&x1519))>>x1520);

	if (t37 != 60199392) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1525 = 3027;
	int64_t x1526 = -1LL;
	uint64_t x1527 = 1LLU;
	static int16_t x1528 = 0;
	uint64_t t38 = 4LLU;

	t38 = ((x1525^(x1526&x1527))>>x1528);

	if (t38 != 3026LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x1541 = INT64_MIN;
	int32_t x1542 = -1075;
	volatile uint16_t x1544 = 0U;

	t39 = ((x1541^(x1542&x1543))>>x1544);

	if (t39 != 9223372036854774668LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x1617 = 0U;
	volatile uint64_t x1618 = 6583695335002LLU;
	static uint64_t x1619 = 11565102LLU;
	static uint32_t x1620 = 63U;
	volatile uint64_t t40 = 82404472803014LLU;

	t40 = ((x1617^(x1618&x1619))>>x1620);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1769 = INT64_MIN;
	volatile uint64_t x1770 = 213175118209707764LLU;
	static volatile uint16_t x1772 = 12U;
	uint64_t t41 = 68317882556507LLU;

	t41 = ((x1769^(x1770&x1771))>>x1772);

	if (t41 != 2303844519772160LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1773 = 14;
	int8_t x1774 = INT8_MAX;
	int8_t x1776 = 1;
	static int32_t t42 = 1;

	t42 = ((x1773^(x1774&x1775))>>x1776);

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1782 = UINT8_MAX;
	int64_t x1783 = INT64_MIN;
	static uint8_t x1784 = 6U;
	volatile uint64_t t43 = 39LLU;

	t43 = ((x1781^(x1782&x1783))>>x1784);

	if (t43 != 30507LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1805 = UINT64_MAX;
	int16_t x1806 = -1;
	uint32_t x1808 = 51U;
	volatile uint64_t t44 = 69LLU;

	t44 = ((x1805^(x1806&x1807))>>x1808);

	if (t44 != 8191LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1829 = INT16_MIN;
	uint64_t x1830 = 36649509489080LLU;
	uint8_t x1832 = 1U;
	volatile uint64_t t45 = 2852812526208LLU;

	t45 = ((x1829^(x1830&x1831))>>x1832);

	if (t45 != 9223372036577985756LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x1874 = UINT8_MAX;

	t46 = ((x1873^(x1874&x1875))>>x1876);

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1901 = INT32_MAX;
	volatile uint8_t x1902 = 34U;
	volatile int32_t x1903 = INT32_MIN;

	t47 = ((x1901^(x1902&x1903))>>x1904);

	if (t47 != 16777215) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1949 = UINT64_MAX;
	volatile int16_t x1951 = INT16_MAX;
	uint64_t t48 = 1120068711LLU;

	t48 = ((x1949^(x1950&x1951))>>x1952);

	if (t48 != 4611686018427387901LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1957 = UINT32_MAX;
	uint16_t x1958 = 4U;
	int32_t x1959 = INT32_MAX;
	volatile int32_t x1960 = 17;
	uint32_t t49 = 0U;

	t49 = ((x1957^(x1958&x1959))>>x1960);

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1970 = 1U;
	uint64_t x1971 = 247156LLU;
	int32_t x1972 = 0;
	uint64_t t50 = 99293LLU;

	t50 = ((x1969^(x1970&x1971))>>x1972);

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2045 = INT8_MAX;
	int32_t x2046 = INT32_MAX;
	int8_t x2047 = INT8_MIN;
	int8_t x2048 = 7;
	int32_t t51 = 7399614;

	t51 = ((x2045^(x2046&x2047))>>x2048);

	if (t51 != 16777215) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2053 = UINT16_MAX;
	static uint16_t x2056 = 1U;

	t52 = ((x2053^(x2054&x2055))>>x2056);

	if (t52 != 32763) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2070 = INT8_MIN;
	int16_t x2071 = -1;

	t53 = ((x2069^(x2070&x2071))>>x2072);

	if (t53 != 63) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2112 = 59U;
	uint64_t t54 = 209710LLU;

	t54 = ((x2109^(x2110&x2111))>>x2112);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2265 = INT8_MIN;
	volatile int32_t x2266 = 3702919;
	uint32_t x2267 = UINT32_MAX;
	uint16_t x2268 = 1U;
	uint32_t t55 = 799591332U;

	t55 = ((x2265^(x2266&x2267))>>x2268);

	if (t55 != 2145632131U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2269 = INT8_MAX;
	int64_t x2270 = -1LL;
	static int64_t t56 = 40154LL;

	t56 = ((x2269^(x2270&x2271))>>x2272);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2402 = 3618441U;
	int8_t x2403 = -29;
	static volatile uint16_t x2404 = 4U;

	t57 = ((x2401^(x2402&x2403))>>x2404);

	if (t57 != 268213369U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2442 = 254610177LLU;
	volatile int32_t x2443 = INT32_MIN;
	volatile uint8_t x2444 = 1U;

	t58 = ((x2441^(x2442&x2443))>>x2444);

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2501 = 4234225879644083412LLU;
	volatile int8_t x2502 = INT8_MAX;
	int8_t x2503 = INT8_MIN;
	int8_t x2504 = 16;
	static uint64_t t59 = 2939170730458364139LLU;

	t59 = ((x2501^(x2502&x2503))>>x2504);

	if (t59 != 64609159540467LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2593 = UINT64_MAX;
	uint16_t x2594 = 3U;
	int8_t x2595 = -1;
	static volatile int16_t x2596 = 1;
	volatile uint64_t t60 = 216998215LLU;

	t60 = ((x2593^(x2594&x2595))>>x2596);

	if (t60 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2661 = INT8_MAX;
	int16_t x2662 = INT16_MAX;
	static volatile int64_t x2663 = -1LL;
	int16_t x2664 = 19;
	volatile int64_t t61 = 119LL;

	t61 = ((x2661^(x2662&x2663))>>x2664);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2769 = 2432LLU;
	int8_t x2771 = -1;
	uint8_t x2772 = 2U;

	t62 = ((x2769^(x2770&x2771))>>x2772);

	if (t62 != 4611686018423209184LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2805 = UINT64_MAX;
	volatile uint64_t x2806 = 249167994LLU;
	int8_t x2807 = INT8_MIN;
	static volatile int8_t x2808 = 0;
	uint64_t t63 = 721LLU;

	t63 = ((x2805^(x2806&x2807))>>x2808);

	if (t63 != 18446744073460383743LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x2817 = INT64_MIN;
	int16_t x2819 = INT16_MIN;
	int16_t x2820 = 3;

	t64 = ((x2817^(x2818&x2819))>>x2820);

	if (t64 != 1152921504606842880LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2878 = -1LL;
	volatile int8_t x2879 = INT8_MAX;
	uint8_t x2880 = 42U;
	int64_t t65 = 28123LL;

	t65 = ((x2877^(x2878&x2879))>>x2880);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2905 = 60;
	uint32_t x2906 = 11838U;
	int8_t x2908 = 1;
	int64_t t66 = 7848415082070LL;

	t66 = ((x2905^(x2906&x2907))>>x2908);

	if (t66 != 5889LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2981 = 0;
	volatile int64_t x2982 = INT64_MIN;
	uint32_t x2984 = 0U;
	int64_t t67 = -2658873LL;

	t67 = ((x2981^(x2982&x2983))>>x2984);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3010 = 0U;
	int8_t x3011 = INT8_MAX;
	uint32_t x3012 = 1U;
	static int32_t t68 = 920840424;

	t68 = ((x3009^(x3010&x3011))>>x3012);

	if (t68 != 166) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3069 = -1;
	volatile uint16_t x3070 = UINT16_MAX;
	uint64_t x3071 = 111908218935612LLU;
	volatile uint64_t t69 = 39LLU;

	t69 = ((x3069^(x3070&x3071))>>x3072);

	if (t69 != 9223372036854772577LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3085 = UINT16_MAX;
	int64_t x3086 = -1LL;
	static int32_t x3087 = INT32_MAX;
	uint8_t x3088 = 3U;
	int64_t t70 = -700236LL;

	t70 = ((x3085^(x3086&x3087))>>x3088);

	if (t70 != 268427264LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3102 = INT64_MIN;
	int16_t x3103 = 7357;
	static int8_t x3104 = 1;

	t71 = ((x3101^(x3102&x3103))>>x3104);

	if (t71 != 13235LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3249 = UINT16_MAX;
	static uint8_t x3250 = 17U;
	uint32_t t72 = 6U;

	t72 = ((x3249^(x3250&x3251))>>x3252);

	if (t72 != 32759U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3257 = -1;
	volatile int16_t x3258 = -1;
	volatile int16_t x3259 = INT16_MIN;
	int8_t x3260 = 7;
	volatile int32_t t73 = 14924208;

	t73 = ((x3257^(x3258&x3259))>>x3260);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x3265 = 14LLU;
	int8_t x3266 = -1;
	volatile int16_t x3267 = INT16_MIN;
	int64_t x3268 = 6LL;
	volatile uint64_t t74 = 42174642149132LLU;

	t74 = ((x3265^(x3266&x3267))>>x3268);

	if (t74 != 288230376151711232LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3269 = INT16_MIN;
	uint32_t x3270 = UINT32_MAX;
	static int32_t x3271 = INT32_MIN;
	static int16_t x3272 = 26;
	uint32_t t75 = 3579784U;

	t75 = ((x3269^(x3270&x3271))>>x3272);

	if (t75 != 31U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3290 = 0U;
	volatile uint64_t x3291 = UINT64_MAX;
	uint8_t x3292 = 7U;
	uint64_t t76 = 3804702619954378363LLU;

	t76 = ((x3289^(x3290&x3291))>>x3292);

	if (t76 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3409 = INT16_MAX;
	uint64_t x3410 = UINT64_MAX;
	int64_t x3411 = INT64_MIN;
	uint16_t x3412 = 5U;
	uint64_t t77 = 1730LLU;

	t77 = ((x3409^(x3410&x3411))>>x3412);

	if (t77 != 288230376151712767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3477 = 0;
	static uint16_t x3478 = 2156U;
	volatile int8_t x3479 = -2;
	uint8_t x3480 = 1U;
	volatile int32_t t78 = 2442920;

	t78 = ((x3477^(x3478&x3479))>>x3480);

	if (t78 != 1078) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x3513 = INT64_MAX;
	static uint32_t x3514 = 579U;
	volatile uint8_t x3516 = 4U;
	int64_t t79 = -28118795LL;

	t79 = ((x3513^(x3514&x3515))>>x3516);

	if (t79 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3613 = INT8_MIN;
	static int64_t x3614 = INT64_MIN;
	volatile int16_t x3615 = -4886;
	uint16_t x3616 = 17U;

	t80 = ((x3613^(x3614&x3615))>>x3616);

	if (t80 != 70368744177663LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3631 = 24U;
	int8_t x3632 = 0;

	t81 = ((x3629^(x3630&x3631))>>x3632);

	if (t81 != 4294967271U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3657 = INT64_MIN;
	volatile int8_t x3660 = 4;
	volatile uint64_t t82 = 556146386100494LLU;

	t82 = ((x3657^(x3658&x3659))>>x3660);

	if (t82 != 576460752303423522LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3682 = INT64_MIN;
	static uint32_t x3683 = 111081U;
	int64_t t83 = 82527LL;

	t83 = ((x3681^(x3682&x3683))>>x3684);

	if (t83 != 17179869183LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t t84 = 1004LLU;

	t84 = ((x3693^(x3694&x3695))>>x3696);

	if (t84 != 16383LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x3757 = UINT64_MAX;
	uint8_t x3760 = 0U;
	uint64_t t85 = UINT64_MAX;

	t85 = ((x3757^(x3758&x3759))>>x3760);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3893 = INT64_MIN;
	uint64_t x3894 = 634663745897056LLU;
	int16_t x3895 = INT16_MIN;
	uint8_t x3896 = 9U;
	volatile uint64_t t86 = 17463LLU;

	t86 = ((x3893^(x3894&x3895))>>x3896);

	if (t86 != 18015638087110656LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3937 = 6U;
	volatile int64_t x3938 = INT64_MIN;
	uint8_t x3939 = UINT8_MAX;
	volatile uint16_t x3940 = 0U;
	volatile int64_t t87 = 387LL;

	t87 = ((x3937^(x3938&x3939))>>x3940);

	if (t87 != 6LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x3941 = INT64_MAX;
	volatile int64_t x3942 = INT64_MIN;
	uint8_t x3943 = 7U;
	volatile int8_t x3944 = 0;
	volatile int64_t t88 = INT64_MAX;

	t88 = ((x3941^(x3942&x3943))>>x3944);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3957 = -13387;
	int32_t x3958 = -212777956;
	uint8_t x3960 = 29U;
	int32_t t89 = -911;

	t89 = ((x3957^(x3958&x3959))>>x3960);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x3989 = INT64_MAX;
	int8_t x3990 = INT8_MIN;
	int8_t x3992 = 4;

	t90 = ((x3989^(x3990&x3991))>>x3992);

	if (t90 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4029 = 8;
	int8_t x4030 = INT8_MIN;
	static int32_t x4031 = 4873;
	static volatile int8_t x4032 = 5;
	int32_t t91 = -324;

	t91 = ((x4029^(x4030&x4031))>>x4032);

	if (t91 != 152) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4033 = -1;
	int16_t x4034 = INT16_MIN;
	volatile int64_t x4035 = INT64_MIN;
	uint8_t x4036 = 8U;
	volatile int64_t t92 = -21190965846465LL;

	t92 = ((x4033^(x4034&x4035))>>x4036);

	if (t92 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x4061 = 0;
	int64_t x4062 = INT64_MAX;
	int16_t x4063 = INT16_MIN;
	int32_t x4064 = 1;
	int64_t t93 = 5907489967LL;

	t93 = ((x4061^(x4062&x4063))>>x4064);

	if (t93 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4081 = INT16_MIN;
	int16_t x4082 = INT16_MIN;
	uint8_t x4084 = 1U;

	t94 = ((x4081^(x4082&x4083))>>x4084);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4113 = -1;
	uint64_t x4114 = UINT64_MAX;
	static volatile uint16_t x4115 = UINT16_MAX;
	volatile uint64_t t95 = 128090338993LLU;

	t95 = ((x4113^(x4114&x4115))>>x4116);

	if (t95 != 576460752303421440LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x4161 = UINT64_MAX;
	volatile uint16_t x4163 = 131U;
	int32_t x4164 = 7;
	uint64_t t96 = 84381068LLU;

	t96 = ((x4161^(x4162&x4163))>>x4164);

	if (t96 != 144115188075855870LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4173 = INT64_MAX;
	static uint32_t x4174 = 1748793U;
	volatile int64_t x4175 = INT64_MAX;
	static volatile int64_t t97 = 1792883302LL;

	t97 = ((x4173^(x4174&x4175))>>x4176);

	if (t97 != 144115188075828547LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4193 = INT64_MIN;
	uint64_t x4194 = 354713936LLU;
	int16_t x4195 = 6;
	uint16_t x4196 = 1U;
	static volatile uint64_t t98 = 34541883LLU;

	t98 = ((x4193^(x4194&x4195))>>x4196);

	if (t98 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x4217 = 2U;
	uint8_t x4218 = 26U;
	int64_t x4219 = -1LL;
	static uint8_t x4220 = 5U;

	t99 = ((x4217^(x4218&x4219))>>x4220);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

