#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x8 = UINT64_MAX;
static int8_t x21 = -1;
static int32_t x23 = 10;
static int32_t t2 = -53532807;
static uint8_t x44 = 0U;
int32_t t4 = 26495;
int32_t t5 = -93;
uint8_t x97 = 0U;
int32_t x98 = -27;
uint8_t x103 = 5U;
int16_t x117 = INT16_MIN;
static int8_t x142 = -1;
int8_t x166 = 0;
volatile int32_t t10 = 162633;
int8_t x202 = INT8_MIN;
volatile int32_t x203 = 9;
volatile int32_t x204 = INT32_MIN;
uint8_t x292 = 73U;
static uint64_t x313 = 10584147790860LLU;
int32_t x320 = 105;
volatile int32_t t14 = -7983941;
int8_t x428 = 0;
uint64_t x525 = 15219LLU;
volatile uint8_t x527 = 2U;
uint8_t x537 = 1U;
static int8_t x540 = INT8_MIN;
static uint32_t x557 = 257048U;
int8_t x715 = 1;
volatile int8_t x737 = INT8_MIN;
static int16_t x738 = 227;
uint16_t x775 = 4U;
volatile int32_t t31 = 4;
int16_t x815 = 0;
int32_t t32 = -123;
int32_t x833 = INT32_MAX;
static uint32_t x838 = 589U;
int64_t x865 = -16525317355854LL;
uint16_t x866 = 1U;
static uint64_t x890 = UINT64_MAX;
int16_t x892 = -9070;
static int32_t t36 = 1447;
int8_t x962 = -1;
volatile uint8_t x963 = 11U;
int32_t x989 = -1;
volatile int8_t x1001 = 0;
static int16_t x1059 = 13;
volatile int8_t x1093 = 3;
uint32_t x1185 = 12103U;
int32_t x1188 = INT32_MAX;
uint32_t x1235 = 7U;
int32_t t45 = -152526;
static volatile int8_t x1300 = INT8_MIN;
volatile int32_t t50 = -129495;
int32_t x1381 = -1;
uint8_t x1383 = 31U;
static uint32_t x1384 = 1203237129U;
int8_t x1434 = INT8_MAX;
int8_t x1441 = -1;
uint8_t x1522 = 2U;
int64_t x1569 = INT64_MAX;
uint8_t x1571 = 5U;
volatile int32_t t62 = 224567;
uint32_t x1635 = 19U;
volatile int64_t x1636 = -1LL;
int64_t x1698 = INT64_MAX;
volatile int32_t t65 = 15;
static uint64_t x1753 = UINT64_MAX;
int64_t x1754 = INT64_MIN;
int16_t x1786 = 907;
int64_t x1878 = 272252486LL;
static int8_t x1879 = 8;
int8_t x1954 = INT8_MAX;
uint8_t x1955 = 1U;
uint32_t x2018 = 1106235014U;
uint8_t x2051 = 24U;
static volatile int64_t x2066 = INT64_MIN;
int32_t x2124 = INT32_MIN;
int32_t t78 = -12205515;
volatile int32_t t81 = 58833;
static uint32_t x2264 = 0U;
int16_t x2384 = -1;
static uint16_t x2428 = 7163U;
static int8_t x2477 = INT8_MAX;
uint8_t x2545 = 80U;
volatile uint16_t x2548 = 50U;
int32_t t88 = -224571;
int32_t x2560 = INT32_MIN;
int64_t x2602 = -50LL;
int16_t x2613 = INT16_MIN;
int32_t x2621 = INT32_MIN;
volatile int32_t t92 = -3895336;
uint8_t x2755 = 0U;
uint8_t x2763 = 19U;
volatile int16_t x2764 = INT16_MIN;
int32_t x2802 = INT32_MIN;
volatile int16_t x2805 = 397;
volatile int32_t t96 = -5;
uint8_t x2819 = 1U;
int8_t x2884 = INT8_MAX;


void f0(void) {
	volatile int64_t x5 = -146887169745LL;
	int16_t x6 = 1878;
	uint8_t x7 = 4U;
	volatile int32_t t0 = 20707;

	t0 = (((x5<x6)>>x7)<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x13 = INT8_MIN;
	uint32_t x14 = 5599185U;
	int8_t x15 = 3;
	static volatile uint8_t x16 = UINT8_MAX;
	static volatile int32_t t1 = 285939873;

	t1 = (((x13<x14)>>x15)<=x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x22 = 4167075599865295522LL;
	int8_t x24 = -1;

	t2 = (((x21<x22)>>x23)<=x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x37 = 17;
	int8_t x38 = INT8_MIN;
	volatile int8_t x39 = 1;
	uint32_t x40 = UINT32_MAX;
	int32_t t3 = -10731;

	t3 = (((x37<x38)>>x39)<=x40);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x41 = -1;
	uint16_t x42 = 1U;
	int8_t x43 = 0;

	t4 = (((x41<x42)>>x43)<=x44);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x61 = INT16_MIN;
	int64_t x62 = 68914930811189946LL;
	uint8_t x63 = 1U;
	int16_t x64 = -7;

	t5 = (((x61<x62)>>x63)<=x64);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x99 = 24U;
	volatile int16_t x100 = -1;
	volatile int32_t t6 = 8;

	t6 = (((x97<x98)>>x99)<=x100);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 20U;
	volatile uint64_t x104 = 797885LLU;
	volatile int32_t t7 = 373339;

	t7 = (((x101<x102)>>x103)<=x104);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x118 = INT32_MIN;
	uint8_t x119 = 1U;
	uint8_t x120 = 0U;
	volatile int32_t t8 = -25318544;

	t8 = (((x117<x118)>>x119)<=x120);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x141 = INT32_MIN;
	volatile int64_t x143 = 17LL;
	int8_t x144 = INT8_MIN;
	int32_t t9 = -1807079;

	t9 = (((x141<x142)>>x143)<=x144);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x165 = -413;
	static uint32_t x167 = 14U;
	static int16_t x168 = -3;

	t10 = (((x165<x166)>>x167)<=x168);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x201 = 1;
	int32_t t11 = 0;

	t11 = (((x201<x202)>>x203)<=x204);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x290 = -1LL;
	int8_t x291 = 1;
	volatile int32_t t12 = 0;

	t12 = (((x289<x290)>>x291)<=x292);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x314 = -7490;
	uint32_t x315 = 1U;
	uint32_t x316 = 969U;
	int32_t t13 = -1028998615;

	t13 = (((x313<x314)>>x315)<=x316);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = 7947852U;
	int8_t x319 = 4;

	t14 = (((x317<x318)>>x319)<=x320);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x325 = 1367953LL;
	volatile int64_t x326 = -91301336LL;
	int8_t x327 = 0;
	volatile int32_t x328 = -1;
	volatile int32_t t15 = -12247;

	t15 = (((x325<x326)>>x327)<=x328);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x333 = INT32_MIN;
	static int32_t x334 = -86895;
	static uint8_t x335 = 25U;
	int64_t x336 = 12931016LL;
	volatile int32_t t16 = -131;

	t16 = (((x333<x334)>>x335)<=x336);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x369 = 4261U;
	static int32_t x370 = 1451763;
	uint8_t x371 = 1U;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t17 = -39544;

	t17 = (((x369<x370)>>x371)<=x372);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MAX;
	static uint8_t x379 = 9U;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t18 = 717347;

	t18 = (((x377<x378)>>x379)<=x380);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x385 = INT64_MIN;
	volatile uint16_t x386 = UINT16_MAX;
	volatile uint32_t x387 = 0U;
	int16_t x388 = 975;
	volatile int32_t t19 = -5336930;

	t19 = (((x385<x386)>>x387)<=x388);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x425 = UINT8_MAX;
	static int64_t x426 = INT64_MIN;
	int8_t x427 = 0;
	int32_t t20 = 202;

	t20 = (((x425<x426)>>x427)<=x428);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x453 = 1U;
	int16_t x454 = INT16_MIN;
	int8_t x455 = 0;
	static int64_t x456 = -93292LL;
	static volatile int32_t t21 = 51;

	t21 = (((x453<x454)>>x455)<=x456);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x461 = UINT16_MAX;
	int64_t x462 = INT64_MAX;
	uint8_t x463 = 16U;
	int16_t x464 = -1;
	volatile int32_t t22 = 1551102;

	t22 = (((x461<x462)>>x463)<=x464);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x526 = -1LL;
	static volatile int8_t x528 = INT8_MIN;
	volatile int32_t t23 = 43043573;

	t23 = (((x525<x526)>>x527)<=x528);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x538 = 36769693908LL;
	volatile int16_t x539 = 4;
	volatile int32_t t24 = 56;

	t24 = (((x537<x538)>>x539)<=x540);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x558 = INT64_MIN;
	static uint16_t x559 = 10U;
	volatile uint32_t x560 = 1040011403U;
	volatile int32_t t25 = -1;

	t25 = (((x557<x558)>>x559)<=x560);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x577 = INT64_MIN;
	int16_t x578 = -1332;
	static uint16_t x579 = 15U;
	int32_t x580 = INT32_MIN;
	volatile int32_t t26 = 5;

	t26 = (((x577<x578)>>x579)<=x580);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x585 = UINT32_MAX;
	uint8_t x586 = 22U;
	int8_t x587 = 28;
	static uint32_t x588 = 1428U;
	int32_t t27 = 2810;

	t27 = (((x585<x586)>>x587)<=x588);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x713 = -2389838;
	int32_t x714 = INT32_MAX;
	uint8_t x716 = 56U;
	int32_t t28 = 1;

	t28 = (((x713<x714)>>x715)<=x716);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x739 = 1;
	int8_t x740 = INT8_MAX;
	static volatile int32_t t29 = -1;

	t29 = (((x737<x738)>>x739)<=x740);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x749 = UINT32_MAX;
	volatile int64_t x750 = INT64_MAX;
	volatile int8_t x751 = 28;
	int16_t x752 = INT16_MIN;
	int32_t t30 = -112;

	t30 = (((x749<x750)>>x751)<=x752);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x773 = -190334843;
	uint16_t x774 = 2U;
	int32_t x776 = INT32_MIN;

	t31 = (((x773<x774)>>x775)<=x776);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x813 = INT32_MIN;
	int8_t x814 = -20;
	uint16_t x816 = UINT16_MAX;

	t32 = (((x813<x814)>>x815)<=x816);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x834 = INT16_MAX;
	static volatile int8_t x835 = 4;
	volatile uint32_t x836 = 49937U;
	volatile int32_t t33 = -362183;

	t33 = (((x833<x834)>>x835)<=x836);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x837 = 184LL;
	uint8_t x839 = 13U;
	int8_t x840 = -1;
	int32_t t34 = -7;

	t34 = (((x837<x838)>>x839)<=x840);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x867 = 3;
	volatile uint64_t x868 = UINT64_MAX;
	int32_t t35 = -103176;

	t35 = (((x865<x866)>>x867)<=x868);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x889 = 0;
	volatile uint8_t x891 = 1U;

	t36 = (((x889<x890)>>x891)<=x892);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x961 = 3U;
	static uint32_t x964 = 3371U;
	volatile int32_t t37 = 1843;

	t37 = (((x961<x962)>>x963)<=x964);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x990 = 1;
	uint16_t x991 = 11U;
	uint16_t x992 = UINT16_MAX;
	static volatile int32_t t38 = -2;

	t38 = (((x989<x990)>>x991)<=x992);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1002 = -1;
	uint8_t x1003 = 0U;
	int8_t x1004 = INT8_MIN;
	volatile int32_t t39 = 235;

	t39 = (((x1001<x1002)>>x1003)<=x1004);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1057 = INT32_MIN;
	int32_t x1058 = -1;
	volatile int8_t x1060 = INT8_MAX;
	volatile int32_t t40 = 2874;

	t40 = (((x1057<x1058)>>x1059)<=x1060);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1094 = INT8_MIN;
	static int8_t x1095 = 1;
	int32_t x1096 = 598519;
	volatile int32_t t41 = -1;

	t41 = (((x1093<x1094)>>x1095)<=x1096);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1157 = 1;
	static uint8_t x1158 = UINT8_MAX;
	int64_t x1159 = 0LL;
	int16_t x1160 = -1;
	static int32_t t42 = -5;

	t42 = (((x1157<x1158)>>x1159)<=x1160);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1186 = UINT32_MAX;
	static int8_t x1187 = 1;
	int32_t t43 = -4030523;

	t43 = (((x1185<x1186)>>x1187)<=x1188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1233 = INT32_MIN;
	uint8_t x1234 = UINT8_MAX;
	int8_t x1236 = INT8_MIN;
	volatile int32_t t44 = -10565672;

	t44 = (((x1233<x1234)>>x1235)<=x1236);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1253 = -45;
	int32_t x1254 = INT32_MIN;
	uint16_t x1255 = 2U;
	volatile int8_t x1256 = -1;

	t45 = (((x1253<x1254)>>x1255)<=x1256);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1281 = UINT16_MAX;
	int32_t x1282 = INT32_MIN;
	volatile uint16_t x1283 = 1U;
	int8_t x1284 = -1;
	static int32_t t46 = -10;

	t46 = (((x1281<x1282)>>x1283)<=x1284);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1297 = 722;
	int16_t x1298 = INT16_MIN;
	int8_t x1299 = 5;
	static volatile int32_t t47 = 1530;

	t47 = (((x1297<x1298)>>x1299)<=x1300);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1305 = 30097767;
	uint16_t x1306 = UINT16_MAX;
	uint16_t x1307 = 1U;
	volatile int64_t x1308 = 6941822678LL;
	int32_t t48 = -11;

	t48 = (((x1305<x1306)>>x1307)<=x1308);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x1333 = INT32_MIN;
	int32_t x1334 = -12;
	volatile uint8_t x1335 = 23U;
	int8_t x1336 = INT8_MAX;
	volatile int32_t t49 = 472521964;

	t49 = (((x1333<x1334)>>x1335)<=x1336);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x1369 = INT16_MIN;
	int32_t x1370 = 1098;
	static volatile uint16_t x1371 = 8U;
	int16_t x1372 = -56;

	t50 = (((x1369<x1370)>>x1371)<=x1372);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1382 = -152283732901LL;
	volatile int32_t t51 = -9245078;

	t51 = (((x1381<x1382)>>x1383)<=x1384);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x1389 = INT32_MIN;
	int32_t x1390 = -1;
	volatile uint32_t x1391 = 2U;
	int8_t x1392 = INT8_MIN;
	volatile int32_t t52 = -48;

	t52 = (((x1389<x1390)>>x1391)<=x1392);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1413 = INT8_MAX;
	int32_t x1414 = INT32_MAX;
	uint8_t x1415 = 5U;
	static int32_t x1416 = INT32_MIN;
	volatile int32_t t53 = -112;

	t53 = (((x1413<x1414)>>x1415)<=x1416);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1417 = 484U;
	static int8_t x1418 = INT8_MIN;
	uint64_t x1419 = 3LLU;
	int64_t x1420 = -883703965771498498LL;
	volatile int32_t t54 = 115;

	t54 = (((x1417<x1418)>>x1419)<=x1420);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1433 = INT32_MIN;
	volatile uint32_t x1435 = 3U;
	volatile uint16_t x1436 = 60U;
	int32_t t55 = 12074;

	t55 = (((x1433<x1434)>>x1435)<=x1436);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1442 = INT8_MIN;
	uint64_t x1443 = 0LLU;
	int8_t x1444 = INT8_MAX;
	static volatile int32_t t56 = 2;

	t56 = (((x1441<x1442)>>x1443)<=x1444);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1453 = INT64_MAX;
	int32_t x1454 = INT32_MIN;
	uint16_t x1455 = 12U;
	int8_t x1456 = -2;
	volatile int32_t t57 = -50983;

	t57 = (((x1453<x1454)>>x1455)<=x1456);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1477 = -1;
	int32_t x1478 = -1708137;
	static int32_t x1479 = 1;
	int8_t x1480 = INT8_MIN;
	int32_t t58 = -2061;

	t58 = (((x1477<x1478)>>x1479)<=x1480);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1517 = UINT16_MAX;
	static int64_t x1518 = -1LL;
	uint8_t x1519 = 2U;
	static uint16_t x1520 = 21630U;
	static volatile int32_t t59 = -1;

	t59 = (((x1517<x1518)>>x1519)<=x1520);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1521 = 27U;
	int16_t x1523 = 0;
	uint16_t x1524 = 606U;
	static volatile int32_t t60 = 429;

	t60 = (((x1521<x1522)>>x1523)<=x1524);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1537 = UINT16_MAX;
	uint64_t x1538 = 254956072306124LLU;
	uint8_t x1539 = 1U;
	int64_t x1540 = -88849LL;
	int32_t t61 = 11937172;

	t61 = (((x1537<x1538)>>x1539)<=x1540);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1570 = -1;
	uint32_t x1572 = 13507424U;

	t62 = (((x1569<x1570)>>x1571)<=x1572);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x1621 = 13LLU;
	static int16_t x1622 = INT16_MIN;
	uint8_t x1623 = 26U;
	volatile uint64_t x1624 = UINT64_MAX;
	int32_t t63 = 420;

	t63 = (((x1621<x1622)>>x1623)<=x1624);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x1633 = -1;
	uint64_t x1634 = 8084LLU;
	int32_t t64 = 150;

	t64 = (((x1633<x1634)>>x1635)<=x1636);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1697 = -16887155750837LL;
	int8_t x1699 = 3;
	int32_t x1700 = INT32_MIN;

	t65 = (((x1697<x1698)>>x1699)<=x1700);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1705 = -45;
	uint8_t x1706 = UINT8_MAX;
	volatile uint32_t x1707 = 11U;
	static int16_t x1708 = INT16_MIN;
	volatile int32_t t66 = 1011;

	t66 = (((x1705<x1706)>>x1707)<=x1708);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1733 = 8100;
	int64_t x1734 = INT64_MIN;
	uint8_t x1735 = 10U;
	int32_t x1736 = INT32_MIN;
	int32_t t67 = -7700359;

	t67 = (((x1733<x1734)>>x1735)<=x1736);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1755 = 5U;
	volatile int16_t x1756 = INT16_MIN;
	volatile int32_t t68 = -71053445;

	t68 = (((x1753<x1754)>>x1755)<=x1756);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x1785 = UINT8_MAX;
	int8_t x1787 = 0;
	int64_t x1788 = INT64_MAX;
	static volatile int32_t t69 = 497113633;

	t69 = (((x1785<x1786)>>x1787)<=x1788);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1817 = UINT8_MAX;
	static int16_t x1818 = INT16_MIN;
	uint8_t x1819 = 2U;
	int16_t x1820 = 26;
	volatile int32_t t70 = -57;

	t70 = (((x1817<x1818)>>x1819)<=x1820);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1877 = -1;
	uint8_t x1880 = UINT8_MAX;
	volatile int32_t t71 = 930591;

	t71 = (((x1877<x1878)>>x1879)<=x1880);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1953 = INT8_MIN;
	int32_t x1956 = 527018;
	static volatile int32_t t72 = -39518;

	t72 = (((x1953<x1954)>>x1955)<=x1956);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2013 = 1291441102914LLU;
	volatile int32_t x2014 = INT32_MAX;
	volatile uint8_t x2015 = 10U;
	int8_t x2016 = -1;
	static int32_t t73 = 14370601;

	t73 = (((x2013<x2014)>>x2015)<=x2016);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2017 = INT16_MAX;
	volatile int32_t x2019 = 3;
	uint64_t x2020 = 709634LLU;
	volatile int32_t t74 = 116088;

	t74 = (((x2017<x2018)>>x2019)<=x2020);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2049 = -12LL;
	uint64_t x2050 = UINT64_MAX;
	uint64_t x2052 = UINT64_MAX;
	static volatile int32_t t75 = -1;

	t75 = (((x2049<x2050)>>x2051)<=x2052);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2065 = -1;
	uint8_t x2067 = 2U;
	int64_t x2068 = INT64_MAX;
	volatile int32_t t76 = 58632;

	t76 = (((x2065<x2066)>>x2067)<=x2068);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2085 = INT64_MIN;
	volatile uint16_t x2086 = UINT16_MAX;
	int16_t x2087 = 1;
	static int32_t x2088 = 19661875;
	static volatile int32_t t77 = -6;

	t77 = (((x2085<x2086)>>x2087)<=x2088);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2121 = -5;
	int8_t x2122 = -3;
	uint8_t x2123 = 4U;

	t78 = (((x2121<x2122)>>x2123)<=x2124);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2181 = 53;
	volatile int8_t x2182 = INT8_MAX;
	uint16_t x2183 = 0U;
	static uint64_t x2184 = 154LLU;
	volatile int32_t t79 = 8144;

	t79 = (((x2181<x2182)>>x2183)<=x2184);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2221 = INT8_MIN;
	uint16_t x2222 = UINT16_MAX;
	int16_t x2223 = 1;
	volatile int64_t x2224 = 19107103581LL;
	static volatile int32_t t80 = -470982505;

	t80 = (((x2221<x2222)>>x2223)<=x2224);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x2253 = -1;
	volatile int64_t x2254 = INT64_MAX;
	int16_t x2255 = 0;
	uint8_t x2256 = 81U;

	t81 = (((x2253<x2254)>>x2255)<=x2256);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2261 = INT16_MIN;
	uint64_t x2262 = 12799414LLU;
	static uint8_t x2263 = 3U;
	int32_t t82 = 57435;

	t82 = (((x2261<x2262)>>x2263)<=x2264);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x2381 = 52U;
	int16_t x2382 = INT16_MIN;
	static int8_t x2383 = 17;
	int32_t t83 = 551091;

	t83 = (((x2381<x2382)>>x2383)<=x2384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2389 = 4U;
	uint32_t x2390 = 140U;
	uint8_t x2391 = 23U;
	static int16_t x2392 = INT16_MIN;
	static int32_t t84 = 2;

	t84 = (((x2389<x2390)>>x2391)<=x2392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2425 = 1716;
	uint64_t x2426 = 13038878007360154LLU;
	int16_t x2427 = 26;
	int32_t t85 = -123931735;

	t85 = (((x2425<x2426)>>x2427)<=x2428);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2461 = UINT64_MAX;
	int32_t x2462 = -76193;
	uint8_t x2463 = 0U;
	volatile int64_t x2464 = -1LL;
	volatile int32_t t86 = -111151;

	t86 = (((x2461<x2462)>>x2463)<=x2464);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2478 = 0U;
	uint16_t x2479 = 13U;
	int64_t x2480 = INT64_MIN;
	int32_t t87 = -8002368;

	t87 = (((x2477<x2478)>>x2479)<=x2480);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2546 = -1;
	int8_t x2547 = 2;

	t88 = (((x2545<x2546)>>x2547)<=x2548);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2557 = 2707446005744LLU;
	int16_t x2558 = INT16_MIN;
	uint64_t x2559 = 15LLU;
	volatile int32_t t89 = 5664155;

	t89 = (((x2557<x2558)>>x2559)<=x2560);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x2601 = UINT8_MAX;
	int64_t x2603 = 4LL;
	int64_t x2604 = -1LL;
	volatile int32_t t90 = -512772812;

	t90 = (((x2601<x2602)>>x2603)<=x2604);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2614 = INT8_MIN;
	uint8_t x2615 = 26U;
	static uint16_t x2616 = UINT16_MAX;
	int32_t t91 = 0;

	t91 = (((x2613<x2614)>>x2615)<=x2616);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2622 = INT32_MIN;
	uint8_t x2623 = 28U;
	int64_t x2624 = 0LL;

	t92 = (((x2621<x2622)>>x2623)<=x2624);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2753 = 13;
	static int64_t x2754 = INT64_MIN;
	uint32_t x2756 = 3U;
	int32_t t93 = 173338;

	t93 = (((x2753<x2754)>>x2755)<=x2756);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x2761 = 1769U;
	uint8_t x2762 = 2U;
	volatile int32_t t94 = 7549895;

	t94 = (((x2761<x2762)>>x2763)<=x2764);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2801 = 51U;
	int8_t x2803 = 2;
	uint16_t x2804 = 23531U;
	volatile int32_t t95 = -2472;

	t95 = (((x2801<x2802)>>x2803)<=x2804);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x2806 = 4U;
	int32_t x2807 = 21;
	static int8_t x2808 = 18;

	t96 = (((x2805<x2806)>>x2807)<=x2808);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2817 = INT64_MAX;
	int8_t x2818 = INT8_MIN;
	int16_t x2820 = 32;
	int32_t t97 = -716040;

	t97 = (((x2817<x2818)>>x2819)<=x2820);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2873 = -1;
	volatile uint64_t x2874 = UINT64_MAX;
	uint64_t x2875 = 0LLU;
	static volatile int8_t x2876 = INT8_MIN;
	int32_t t98 = -6;

	t98 = (((x2873<x2874)>>x2875)<=x2876);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2881 = 1U;
	int32_t x2882 = -1;
	uint64_t x2883 = 8LLU;
	volatile int32_t t99 = 4140;

	t99 = (((x2881<x2882)>>x2883)<=x2884);

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

