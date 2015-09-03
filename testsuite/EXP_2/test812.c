#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x157 = 4419U;
int16_t x159 = -2593;
static volatile int64_t x178 = INT64_MAX;
uint8_t x180 = 22U;
static volatile uint64_t t9 = 57877335989LLU;
int8_t x379 = INT8_MIN;
volatile uint64_t t11 = 49894259LLU;
volatile int32_t x407 = -3;
int16_t x446 = INT16_MIN;
uint64_t x513 = 198670253LLU;
static int8_t x514 = -22;
int32_t x586 = 819970;
volatile int8_t x587 = -1;
static volatile int8_t x588 = 1;
uint8_t x617 = UINT8_MAX;
volatile int64_t x654 = 16896637485541LL;
int16_t x777 = INT16_MIN;
int32_t t23 = 1;
int16_t x815 = INT16_MIN;
int16_t x816 = 1;
static int64_t x839 = INT64_MIN;
static int8_t x845 = INT8_MIN;
volatile int64_t t27 = 528561659083LL;
int64_t x883 = -1005301115358277403LL;
volatile uint64_t t28 = 6709938033LLU;
volatile int32_t t32 = -1274;
uint8_t x1064 = 1U;
uint8_t x1072 = 0U;
int64_t t35 = -656374617114LL;
int32_t x1087 = -520226;
uint64_t x1102 = 487126206726909LLU;
volatile uint64_t t37 = 39100LLU;
uint32_t x1178 = 20872U;
volatile uint16_t x1266 = 31U;
static uint8_t x1268 = 14U;
int32_t x1283 = -1;
uint64_t x1320 = 2LLU;
uint32_t x1365 = 117027401U;
uint16_t x1389 = 73U;
uint8_t x1392 = 3U;
static int32_t x1467 = INT32_MAX;
int16_t x1526 = INT16_MIN;
uint64_t t49 = 2393924669246741018LLU;
int32_t x1659 = INT32_MIN;
int32_t x1817 = INT32_MAX;
volatile int64_t x1818 = INT64_MIN;
uint8_t x1840 = 5U;
volatile uint8_t x1969 = UINT8_MAX;
volatile int64_t t57 = -6006724LL;
int64_t x2058 = INT64_MIN;
static int16_t x2060 = 5;
static volatile uint64_t t62 = 520163190LLU;
uint32_t x2239 = 101468U;
volatile int32_t x2290 = -206;
volatile int16_t x2292 = 6;
uint16_t x2314 = 1558U;
static int32_t x2315 = 1;
static uint8_t x2488 = 2U;
volatile int32_t t74 = 0;
volatile uint32_t x2522 = 138U;
static int32_t x2559 = INT32_MIN;
volatile uint8_t x2669 = UINT8_MAX;
int8_t x2727 = -1;
uint32_t x2750 = 1874104U;
static int16_t x2752 = 2;
uint16_t x2764 = 52U;
volatile uint8_t x2842 = 0U;
static int32_t t83 = -507468909;
uint32_t x2913 = UINT32_MAX;
volatile uint32_t t85 = 19U;
int64_t x2941 = INT64_MAX;
int64_t t87 = -485149520311LL;
int64_t x3027 = -1LL;
volatile int64_t t88 = -3448505503LL;
uint16_t x3115 = 2935U;
static volatile int32_t t92 = -3;
uint16_t x3179 = 123U;
static uint64_t t93 = 12848179LLU;
uint8_t x3196 = 2U;
int8_t x3289 = INT8_MAX;
static volatile uint64_t t95 = 215LLU;
static int64_t x3301 = INT64_MAX;
int32_t x3302 = INT32_MIN;
int16_t x3412 = 52;


void f0(void) {
	static uint8_t x89 = UINT8_MAX;
	static volatile uint64_t x90 = 892624207LLU;
	int64_t x91 = -107372045LL;
	static int16_t x92 = 3;
	static volatile uint64_t t0 = 103473846LLU;

	t0 = ((x89&(x90%x91))<<x92);

	if (t0 != 632LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x117 = -108;
	static int64_t x118 = INT64_MAX;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 0LLU;
	static volatile int64_t t1 = -1884706749159LL;

	t1 = ((x117&(x118%x119))<<x120);

	if (t1 != 9223372036854775700LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x141 = 915339121421411LL;
	uint16_t x142 = 23U;
	static int64_t x143 = -1LL;
	static volatile int16_t x144 = 0;
	int64_t t2 = -2090230LL;

	t2 = ((x141&(x142%x143))<<x144);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x158 = UINT32_MAX;
	int8_t x160 = 0;
	uint32_t t3 = 1781U;

	t3 = ((x157&(x158%x159))<<x160);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x177 = INT8_MIN;
	volatile int32_t x179 = INT32_MAX;
	volatile int64_t t4 = 267245784LL;

	t4 = ((x177&(x178%x179))<<x180);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x205 = INT8_MIN;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	int16_t x208 = 58;
	static volatile int64_t t5 = 1756148490LL;

	t5 = ((x205&(x206%x207))<<x208);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x221 = UINT8_MAX;
	static int8_t x222 = 12;
	int64_t x223 = -1LL;
	static volatile int8_t x224 = 1;
	int64_t t6 = 4LL;

	t6 = ((x221&(x222%x223))<<x224);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x225 = 142U;
	int64_t x226 = INT64_MAX;
	int8_t x227 = INT8_MIN;
	volatile uint32_t x228 = 21U;
	static int64_t t7 = -116520279701LL;

	t7 = ((x225&(x226%x227))<<x228);

	if (t7 != 29360128LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x265 = 31U;
	uint64_t x266 = 492408650LLU;
	volatile uint32_t x267 = 13292035U;
	static uint16_t x268 = 1U;
	static uint64_t t8 = 5LLU;

	t8 = ((x265&(x266%x267))<<x268);

	if (t8 != 54LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = 15;
	volatile uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 1U;

	t9 = ((x337&(x338%x339))<<x340);

	if (t9 != 30LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x373 = INT64_MIN;
	int16_t x374 = -7209;
	int64_t x375 = -1LL;
	static uint8_t x376 = 1U;
	volatile int64_t t10 = 459570LL;

	t10 = ((x373&(x374%x375))<<x376);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = UINT64_MAX;
	uint8_t x380 = 0U;

	t11 = ((x377&(x378%x379))<<x380);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x401 = 27U;
	volatile int16_t x402 = -1;
	volatile int32_t x403 = -526747;
	uint8_t x404 = 0U;
	volatile uint32_t t12 = 937U;

	t12 = ((x401&(x402%x403))<<x404);

	if (t12 != 27U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x405 = INT8_MAX;
	uint16_t x406 = 17U;
	int8_t x408 = 1;
	volatile int32_t t13 = 3534465;

	t13 = ((x405&(x406%x407))<<x408);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x445 = INT64_MAX;
	int64_t x447 = INT64_MAX;
	volatile int16_t x448 = 0;
	static volatile int64_t t14 = 209209834450LL;

	t14 = ((x445&(x446%x447))<<x448);

	if (t14 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x515 = -1LL;
	uint16_t x516 = 49U;
	uint64_t t15 = 17LLU;

	t15 = ((x513&(x514%x515))<<x516);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x553 = 5;
	int32_t x554 = -14;
	uint32_t x555 = 917046715U;
	static uint8_t x556 = 6U;
	uint32_t t16 = 402404U;

	t16 = ((x553&(x554%x555))<<x556);

	if (t16 != 256U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x585 = -1LL;
	volatile int64_t t17 = -26LL;

	t17 = ((x585&(x586%x587))<<x588);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x601 = 21604288679LLU;
	static int16_t x602 = -232;
	static volatile int16_t x603 = INT16_MIN;
	uint8_t x604 = 4U;
	static uint64_t t18 = 18323176741LLU;

	t18 = ((x601&(x602%x603))<<x604);

	if (t18 != 345668616192LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x618 = -30;
	int64_t x619 = INT64_MIN;
	int16_t x620 = 11;
	int64_t t19 = -973316LL;

	t19 = ((x617&(x618%x619))<<x620);

	if (t19 != 462848LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x653 = 2U;
	int32_t x655 = INT32_MAX;
	int8_t x656 = 11;
	volatile int64_t t20 = -15683LL;

	t20 = ((x653&(x654%x655))<<x656);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x673 = 1U;
	int64_t x674 = INT64_MAX;
	volatile uint16_t x675 = 188U;
	volatile int8_t x676 = 0;
	int64_t t21 = 14LL;

	t21 = ((x673&(x674%x675))<<x676);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x721 = INT16_MAX;
	uint8_t x722 = UINT8_MAX;
	int8_t x723 = INT8_MAX;
	int8_t x724 = 1;
	volatile int32_t t22 = 413;

	t22 = ((x721&(x722%x723))<<x724);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x778 = 485;
	static volatile int8_t x779 = INT8_MIN;
	volatile uint64_t x780 = 29LLU;

	t23 = ((x777&(x778%x779))<<x780);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x785 = 15U;
	int8_t x786 = INT8_MIN;
	static volatile int16_t x787 = 4;
	int8_t x788 = 0;
	uint32_t t24 = 357231498U;

	t24 = ((x785&(x786%x787))<<x788);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x813 = UINT16_MAX;
	volatile int64_t x814 = INT64_MIN;
	static int64_t t25 = 14510689632LL;

	t25 = ((x813&(x814%x815))<<x816);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x837 = -1;
	volatile uint16_t x838 = 2351U;
	volatile int32_t x840 = 17;
	volatile int64_t t26 = 5501023424125213LL;

	t26 = ((x837&(x838%x839))<<x840);

	if (t26 != 308150272LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x846 = INT64_MAX;
	int64_t x847 = -1LL;
	uint8_t x848 = 0U;

	t27 = ((x845&(x846%x847))<<x848);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x881 = INT32_MAX;
	uint64_t x882 = UINT64_MAX;
	uint32_t x884 = 2U;

	t28 = ((x881&(x882%x883))<<x884);

	if (t28 != 4377787496LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x969 = 8538LL;
	int64_t x970 = -459137LL;
	static int16_t x971 = INT16_MAX;
	uint8_t x972 = 5U;
	int64_t t29 = 52247LL;

	t29 = ((x969&(x970%x971))<<x972);

	if (t29 != 264704LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x977 = 23U;
	uint64_t x978 = 33651455007740840LLU;
	static int32_t x979 = INT32_MIN;
	uint16_t x980 = 0U;
	uint64_t t30 = 3354743LLU;

	t30 = ((x977&(x978%x979))<<x980);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x981 = 83U;
	volatile int8_t x982 = INT8_MIN;
	uint16_t x983 = UINT16_MAX;
	int32_t x984 = 0;
	int32_t t31 = -231;

	t31 = ((x981&(x982%x983))<<x984);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1009 = INT16_MAX;
	static volatile uint8_t x1010 = 15U;
	static uint8_t x1011 = UINT8_MAX;
	int16_t x1012 = 6;

	t32 = ((x1009&(x1010%x1011))<<x1012);

	if (t32 != 960) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1057 = UINT8_MAX;
	volatile uint32_t x1058 = 1150U;
	int8_t x1059 = INT8_MIN;
	static uint8_t x1060 = 3U;
	static uint32_t t33 = 3048U;

	t33 = ((x1057&(x1058%x1059))<<x1060);

	if (t33 != 1008U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1061 = 0;
	int32_t x1062 = 82642381;
	int64_t x1063 = INT64_MAX;
	volatile int64_t t34 = -2611556LL;

	t34 = ((x1061&(x1062%x1063))<<x1064);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1069 = 1745;
	uint16_t x1070 = UINT16_MAX;
	static int64_t x1071 = INT64_MAX;

	t35 = ((x1069&(x1070%x1071))<<x1072);

	if (t35 != 1745LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1085 = INT64_MIN;
	uint32_t x1086 = UINT32_MAX;
	uint8_t x1088 = 15U;
	int64_t t36 = 54LL;

	t36 = ((x1085&(x1086%x1087))<<x1088);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1101 = INT64_MIN;
	volatile uint64_t x1103 = 44303195565684021LLU;
	uint32_t x1104 = 24U;

	t37 = ((x1101&(x1102%x1103))<<x1104);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x1129 = 119U;
	int64_t x1130 = -1LL;
	int64_t x1131 = INT64_MIN;
	static int16_t x1132 = 3;
	int64_t t38 = 100491583183595LL;

	t38 = ((x1129&(x1130%x1131))<<x1132);

	if (t38 != 952LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1141 = INT32_MIN;
	int16_t x1142 = 48;
	int8_t x1143 = INT8_MIN;
	volatile uint16_t x1144 = 11U;
	int32_t t39 = 99580;

	t39 = ((x1141&(x1142%x1143))<<x1144);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1177 = 113358539;
	int16_t x1179 = 73;
	int8_t x1180 = 1;
	volatile uint32_t t40 = 200572U;

	t40 = ((x1177&(x1178%x1179))<<x1180);

	if (t40 != 134U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1253 = INT32_MIN;
	int32_t x1254 = INT32_MIN;
	uint64_t x1255 = 47231215015707469LLU;
	uint8_t x1256 = 20U;
	static uint64_t t41 = 6230621597406LLU;

	t41 = ((x1253&(x1254%x1255))<<x1256);

	if (t41 != 6305039478318694400LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1265 = 0;
	int8_t x1267 = INT8_MAX;
	int32_t t42 = -15;

	t42 = ((x1265&(x1266%x1267))<<x1268);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1281 = -1LL;
	static uint32_t x1282 = UINT32_MAX;
	int16_t x1284 = 0;
	int64_t t43 = 11906LL;

	t43 = ((x1281&(x1282%x1283))<<x1284);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1317 = 303LLU;
	volatile int8_t x1318 = -1;
	uint16_t x1319 = 5U;
	static volatile uint64_t t44 = 301618829139LLU;

	t44 = ((x1317&(x1318%x1319))<<x1320);

	if (t44 != 1212LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1366 = INT32_MIN;
	int16_t x1367 = INT16_MAX;
	static uint16_t x1368 = 19U;
	volatile uint32_t t45 = 508890U;

	t45 = ((x1365&(x1366%x1367))<<x1368);

	if (t45 != 2453667840U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1390 = INT64_MIN;
	int32_t x1391 = 20140;
	volatile int64_t t46 = -537LL;

	t46 = ((x1389&(x1390%x1391))<<x1392);

	if (t46 != 512LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1465 = 0U;
	int16_t x1466 = 16097;
	int16_t x1468 = 6;
	int32_t t47 = -114696005;

	t47 = ((x1465&(x1466%x1467))<<x1468);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1505 = UINT16_MAX;
	int64_t x1506 = INT64_MIN;
	int32_t x1507 = -1;
	volatile int8_t x1508 = 0;
	volatile int64_t t48 = -11427LL;

	t48 = ((x1505&(x1506%x1507))<<x1508);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1525 = INT8_MIN;
	uint64_t x1527 = UINT64_MAX;
	volatile uint32_t x1528 = 3U;

	t49 = ((x1525&(x1526%x1527))<<x1528);

	if (t49 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1561 = 126U;
	int64_t x1562 = -126541723559876LL;
	int16_t x1563 = -1;
	int16_t x1564 = 3;
	int64_t t50 = -3961LL;

	t50 = ((x1561&(x1562%x1563))<<x1564);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1581 = -1;
	uint8_t x1582 = 81U;
	static uint8_t x1583 = UINT8_MAX;
	volatile uint8_t x1584 = 2U;
	volatile int32_t t51 = 10825;

	t51 = ((x1581&(x1582%x1583))<<x1584);

	if (t51 != 324) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1589 = INT64_MIN;
	int16_t x1590 = 60;
	int8_t x1591 = -1;
	static int32_t x1592 = 61;
	volatile int64_t t52 = 1LL;

	t52 = ((x1589&(x1590%x1591))<<x1592);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x1637 = 7396909U;
	uint16_t x1638 = UINT16_MAX;
	int8_t x1639 = -1;
	int8_t x1640 = 1;
	uint32_t t53 = 3U;

	t53 = ((x1637&(x1638%x1639))<<x1640);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1657 = -27;
	static volatile uint32_t x1658 = UINT32_MAX;
	volatile uint16_t x1660 = 23U;
	uint32_t t54 = 17402U;

	t54 = ((x1657&(x1658%x1659))<<x1660);

	if (t54 != 4068474880U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x1819 = 1LLU;
	uint8_t x1820 = 0U;
	uint64_t t55 = 35978437287474929LLU;

	t55 = ((x1817&(x1818%x1819))<<x1820);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1837 = 677U;
	uint8_t x1838 = 10U;
	volatile uint32_t x1839 = 1536282452U;
	volatile uint32_t t56 = 335U;

	t56 = ((x1837&(x1838%x1839))<<x1840);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x1970 = -1LL;
	static int8_t x1971 = INT8_MIN;
	int16_t x1972 = 0;

	t57 = ((x1969&(x1970%x1971))<<x1972);

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1977 = 173936582790221LL;
	uint64_t x1978 = UINT64_MAX;
	volatile int32_t x1979 = -112;
	volatile uint16_t x1980 = 6U;
	uint64_t t58 = 3LLU;

	t58 = ((x1977&(x1978%x1979))<<x1980);

	if (t58 != 4928LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2001 = 0;
	int32_t x2002 = INT32_MIN;
	int32_t x2003 = INT32_MIN;
	static uint64_t x2004 = 7LLU;
	int32_t t59 = 110288;

	t59 = ((x2001&(x2002%x2003))<<x2004);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2057 = 0;
	int8_t x2059 = 1;
	volatile int64_t t60 = -79265LL;

	t60 = ((x2057&(x2058%x2059))<<x2060);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2129 = INT16_MAX;
	int16_t x2130 = -5362;
	int64_t x2131 = INT64_MIN;
	uint8_t x2132 = 1U;
	volatile int64_t t61 = -465273264570963LL;

	t61 = ((x2129&(x2130%x2131))<<x2132);

	if (t61 != 54812LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x2161 = UINT64_MAX;
	uint16_t x2162 = 25U;
	int32_t x2163 = -233772;
	static int16_t x2164 = 0;

	t62 = ((x2161&(x2162%x2163))<<x2164);

	if (t62 != 25LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2229 = 10205446;
	static uint16_t x2230 = 30U;
	volatile int32_t x2231 = -1;
	int8_t x2232 = 0;
	int32_t t63 = 2036814;

	t63 = ((x2229&(x2230%x2231))<<x2232);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2237 = INT32_MIN;
	uint16_t x2238 = 473U;
	uint8_t x2240 = 5U;
	volatile uint32_t t64 = 5U;

	t64 = ((x2237&(x2238%x2239))<<x2240);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x2277 = INT64_MIN;
	volatile uint64_t x2278 = UINT64_MAX;
	volatile int32_t x2279 = 12;
	int8_t x2280 = 4;
	volatile uint64_t t65 = 428259279423942660LLU;

	t65 = ((x2277&(x2278%x2279))<<x2280);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2281 = -1075675202995100LL;
	uint16_t x2282 = 26U;
	static int16_t x2283 = INT16_MIN;
	static int16_t x2284 = 0;
	volatile int64_t t66 = 60LL;

	t66 = ((x2281&(x2282%x2283))<<x2284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x2289 = 5;
	static int32_t x2291 = -1;
	int32_t t67 = -702;

	t67 = ((x2289&(x2290%x2291))<<x2292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2313 = 450735337;
	static uint16_t x2316 = 1U;
	int32_t t68 = 4099576;

	t68 = ((x2313&(x2314%x2315))<<x2316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2345 = 3;
	static int8_t x2346 = INT8_MIN;
	uint32_t x2347 = UINT32_MAX;
	volatile uint32_t x2348 = 0U;
	uint32_t t69 = 154556U;

	t69 = ((x2345&(x2346%x2347))<<x2348);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2413 = 25622144LL;
	uint16_t x2414 = 18574U;
	int64_t x2415 = -1LL;
	int8_t x2416 = 0;
	int64_t t70 = -370947885771LL;

	t70 = ((x2413&(x2414%x2415))<<x2416);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2425 = 5;
	volatile int16_t x2426 = 12369;
	uint32_t x2427 = 421727912U;
	uint8_t x2428 = 1U;
	volatile uint32_t t71 = 55U;

	t71 = ((x2425&(x2426%x2427))<<x2428);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2445 = -10544;
	uint32_t x2446 = 3801U;
	static volatile int8_t x2447 = 14;
	int8_t x2448 = 9;
	uint32_t t72 = 1656U;

	t72 = ((x2445&(x2446%x2447))<<x2448);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2461 = -30;
	volatile int32_t x2462 = INT32_MIN;
	uint64_t x2463 = 50900LLU;
	volatile uint8_t x2464 = 14U;
	uint64_t t73 = 14085530LLU;

	t73 = ((x2461&(x2462%x2463))<<x2464);

	if (t73 != 180879360LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x2485 = 73U;
	int32_t x2486 = -1;
	int8_t x2487 = INT8_MAX;

	t74 = ((x2485&(x2486%x2487))<<x2488);

	if (t74 != 292) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x2521 = 9130409805829361203LLU;
	int32_t x2523 = INT32_MIN;
	static uint8_t x2524 = 48U;
	static uint64_t t75 = 1657982LLU;

	t75 = ((x2521&(x2522%x2523))<<x2524);

	if (t75 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2557 = 22583U;
	int8_t x2558 = -1;
	int16_t x2560 = 1;
	int32_t t76 = -34022250;

	t76 = ((x2557&(x2558%x2559))<<x2560);

	if (t76 != 45166) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2670 = -1LL;
	volatile int32_t x2671 = INT32_MIN;
	uint16_t x2672 = 26U;
	int64_t t77 = 123442247910166LL;

	t77 = ((x2669&(x2670%x2671))<<x2672);

	if (t77 != 17112760320LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x2685 = 395284624528LLU;
	int16_t x2686 = 7;
	int8_t x2687 = INT8_MAX;
	int32_t x2688 = 3;
	volatile uint64_t t78 = 27273711783880LLU;

	t78 = ((x2685&(x2686%x2687))<<x2688);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x2725 = INT8_MAX;
	uint16_t x2726 = 32U;
	uint8_t x2728 = 9U;
	static volatile int32_t t79 = 9265733;

	t79 = ((x2725&(x2726%x2727))<<x2728);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2749 = INT8_MAX;
	uint64_t x2751 = 9401787779LLU;
	uint64_t t80 = 827LLU;

	t80 = ((x2749&(x2750%x2751))<<x2752);

	if (t80 != 224LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2761 = 19;
	int64_t x2762 = 6970422LL;
	int32_t x2763 = -1;
	int64_t t81 = -1LL;

	t81 = ((x2761&(x2762%x2763))<<x2764);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2805 = 1;
	volatile int32_t x2806 = -1;
	static int64_t x2807 = 165364740LL;
	volatile uint8_t x2808 = 20U;
	int64_t t82 = 4643479922LL;

	t82 = ((x2805&(x2806%x2807))<<x2808);

	if (t82 != 1048576LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2841 = 461U;
	int16_t x2843 = -1;
	int8_t x2844 = 0;

	t83 = ((x2841&(x2842%x2843))<<x2844);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2857 = UINT8_MAX;
	int8_t x2858 = INT8_MAX;
	uint16_t x2859 = 162U;
	int8_t x2860 = 12;
	int32_t t84 = 0;

	t84 = ((x2857&(x2858%x2859))<<x2860);

	if (t84 != 520192) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2914 = INT16_MIN;
	int16_t x2915 = INT16_MAX;
	static volatile int32_t x2916 = 3;

	t85 = ((x2913&(x2914%x2915))<<x2916);

	if (t85 != 4294967288U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2937 = 3U;
	int16_t x2938 = 177;
	uint64_t x2939 = 33788896799LLU;
	int16_t x2940 = 2;
	uint64_t t86 = 91485876LLU;

	t86 = ((x2937&(x2938%x2939))<<x2940);

	if (t86 != 4LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2942 = INT8_MAX;
	static volatile uint32_t x2943 = UINT32_MAX;
	int8_t x2944 = 31;

	t87 = ((x2941&(x2942%x2943))<<x2944);

	if (t87 != 272730423296LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3025 = 0U;
	int16_t x3026 = -135;
	static uint8_t x3028 = 3U;

	t88 = ((x3025&(x3026%x3027))<<x3028);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3041 = 851U;
	uint16_t x3042 = 76U;
	int8_t x3043 = INT8_MAX;
	uint32_t x3044 = 3U;
	uint32_t t89 = 37448U;

	t89 = ((x3041&(x3042%x3043))<<x3044);

	if (t89 != 512U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3093 = INT8_MIN;
	volatile int8_t x3094 = INT8_MAX;
	volatile uint16_t x3095 = UINT16_MAX;
	static int64_t x3096 = 1LL;
	int32_t t90 = 276894;

	t90 = ((x3093&(x3094%x3095))<<x3096);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3105 = UINT16_MAX;
	uint64_t x3106 = 2675LLU;
	uint8_t x3107 = 3U;
	uint64_t x3108 = 14LLU;
	static uint64_t t91 = 355060694253582351LLU;

	t91 = ((x3105&(x3106%x3107))<<x3108);

	if (t91 != 32768LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3113 = -1;
	int32_t x3114 = INT32_MAX;
	static uint16_t x3116 = 2U;

	t92 = ((x3113&(x3114%x3115))<<x3116);

	if (t92 != 11388) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3177 = 10U;
	uint64_t x3178 = 5989812465630071875LLU;
	uint8_t x3180 = 0U;

	t93 = ((x3177&(x3178%x3179))<<x3180);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3193 = -1;
	static int16_t x3194 = INT16_MAX;
	static uint8_t x3195 = UINT8_MAX;
	int32_t t94 = -288;

	t94 = ((x3193&(x3194%x3195))<<x3196);

	if (t94 != 508) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x3290 = INT64_MIN;
	uint64_t x3291 = 8362617351744723LLU;
	volatile int64_t x3292 = 0LL;

	t95 = ((x3289&(x3290%x3291))<<x3292);

	if (t95 != 54LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3303 = -1LL;
	uint8_t x3304 = 12U;
	static int64_t t96 = 45664019LL;

	t96 = ((x3301&(x3302%x3303))<<x3304);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3345 = INT64_MIN;
	volatile uint32_t x3346 = 250U;
	int8_t x3347 = 7;
	uint32_t x3348 = 0U;
	volatile int64_t t97 = -3LL;

	t97 = ((x3345&(x3346%x3347))<<x3348);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x3409 = 16;
	int64_t x3410 = INT64_MAX;
	uint64_t x3411 = 165673433261115432LLU;
	volatile uint64_t t98 = 393201151LLU;

	t98 = ((x3409&(x3410%x3411))<<x3412);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3417 = 2U;
	uint64_t x3418 = 91LLU;
	int64_t x3419 = INT64_MIN;
	uint8_t x3420 = 50U;
	static volatile uint64_t t99 = 104838154LLU;

	t99 = ((x3417&(x3418%x3419))<<x3420);

	if (t99 != 2251799813685248LLU) { NG(); } else { ; }
	
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

