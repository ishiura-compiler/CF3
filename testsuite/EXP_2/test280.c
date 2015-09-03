#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x63 = 13835;
uint8_t x64 = 1U;
uint64_t x68 = 17LLU;
volatile int32_t t2 = 432888764;
volatile int32_t t4 = -1617;
int64_t x162 = 219LL;
uint16_t x167 = 31U;
static int32_t t6 = -309407;
uint64_t x259 = UINT64_MAX;
static uint16_t x341 = 2858U;
static volatile int64_t x342 = INT64_MAX;
uint16_t x378 = UINT16_MAX;
volatile int8_t x379 = INT8_MIN;
static uint16_t x499 = 197U;
uint8_t x500 = 0U;
uint64_t x525 = UINT64_MAX;
volatile int32_t t21 = -5;
volatile int32_t x570 = -1008503;
int16_t x585 = -1;
int8_t x608 = 1;
uint8_t x666 = 32U;
int32_t t29 = 3559;
int8_t x733 = 1;
uint8_t x736 = 11U;
uint8_t x749 = 106U;
int64_t x750 = -487893386043LL;
int32_t t32 = 585845;
static int8_t x793 = INT8_MIN;
int8_t x795 = INT8_MAX;
uint16_t x806 = 4U;
static uint8_t x807 = 1U;
static volatile int32_t t35 = 233469354;
int16_t x827 = INT16_MAX;
int64_t x834 = INT64_MIN;
static int32_t x877 = INT32_MAX;
int8_t x948 = 2;
uint64_t x1033 = UINT64_MAX;
static volatile int64_t x1034 = -30376122016LL;
volatile int8_t x1074 = 0;
static volatile int8_t x1075 = INT8_MAX;
int16_t x1101 = 0;
static uint64_t x1102 = 6LLU;
int16_t x1121 = -1;
int64_t x1122 = -54005186280985LL;
uint32_t x1159 = 5104765U;
static volatile int32_t t46 = -1237253;
int64_t x1185 = INT64_MIN;
volatile int16_t x1435 = INT16_MIN;
static uint8_t x1436 = 1U;
int32_t x1505 = INT32_MIN;
uint64_t x1572 = 7LLU;
int32_t t53 = 954;
uint8_t x1584 = 23U;
static uint64_t x1767 = UINT64_MAX;
int64_t x1822 = 60232559928LL;
volatile uint16_t x1878 = 0U;
int32_t x1898 = INT32_MIN;
int16_t x1902 = -21;
uint8_t x1913 = 0U;
static int8_t x1915 = 0;
uint8_t x1959 = 1U;
static int16_t x1970 = -1;
int32_t x1971 = -1;
int8_t x1977 = -1;
uint32_t x1984 = 1U;
uint64_t x2035 = UINT64_MAX;
static volatile int32_t t66 = 2105765;
uint8_t x2062 = UINT8_MAX;
static int32_t x2063 = 722038073;
static int32_t x2158 = -185;
uint8_t x2160 = 0U;
uint16_t x2198 = 3U;
int8_t x2199 = -1;
static int8_t x2200 = 9;
volatile int32_t t71 = 884;
uint16_t x2206 = UINT16_MAX;
int32_t t72 = 3400;
int64_t x2211 = -1LL;
uint8_t x2233 = 118U;
volatile uint16_t x2236 = 3U;
uint8_t x2245 = 85U;
static uint32_t x2527 = 1899580U;
static int8_t x2528 = 1;
uint8_t x2530 = UINT8_MAX;
static int8_t x2532 = 2;
static volatile int16_t x2603 = 1;
uint32_t x2658 = 18958999U;
static int32_t x2802 = -1;
uint16_t x2978 = 2U;
uint32_t x2980 = 1U;
int8_t x3001 = INT8_MIN;
volatile int32_t t90 = 791892;
static int32_t t91 = 2949929;
int64_t x3145 = INT64_MAX;
static int32_t t93 = -686047;
static uint64_t x3190 = 0LLU;
static uint64_t x3192 = 13LLU;
uint32_t x3201 = UINT32_MAX;
int32_t t95 = -59325174;
uint8_t x3262 = UINT8_MAX;
static int16_t x3264 = 2;
static int8_t x3285 = 2;
uint64_t x3301 = 285LLU;


void f0(void) {
	uint8_t x61 = 34U;
	uint8_t x62 = UINT8_MAX;
	volatile int32_t t0 = 9683489;

	t0 = ((x61<(x62-x63))>>x64);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x65 = -7133779;
	int8_t x66 = INT8_MIN;
	int64_t x67 = -1949979991171LL;
	volatile int32_t t1 = -2714;

	t1 = ((x65<(x66-x67))>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MIN;
	int8_t x107 = -1;
	int16_t x108 = 1;

	t2 = ((x105<(x106-x107))>>x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x113 = -1537157688948LL;
	int64_t x114 = -1LL;
	int8_t x115 = INT8_MAX;
	static int8_t x116 = 1;
	volatile int32_t t3 = 56625;

	t3 = ((x113<(x114-x115))>>x116);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x117 = INT64_MAX;
	static int8_t x118 = INT8_MAX;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = 1;

	t4 = ((x117<(x118-x119))>>x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = 121LLU;
	uint8_t x163 = UINT8_MAX;
	volatile uint16_t x164 = 0U;
	static volatile int32_t t5 = 988282;

	t5 = ((x161<(x162-x163))>>x164);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x165 = INT64_MIN;
	static volatile uint16_t x166 = UINT16_MAX;
	static volatile int8_t x168 = 0;

	t6 = ((x165<(x166-x167))>>x168);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x169 = INT16_MAX;
	int8_t x170 = -1;
	int32_t x171 = INT32_MAX;
	static uint64_t x172 = 13LLU;
	static volatile int32_t t7 = -15456;

	t7 = ((x169<(x170-x171))>>x172);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x201 = 57U;
	uint8_t x202 = UINT8_MAX;
	int64_t x203 = -1LL;
	static uint32_t x204 = 4U;
	static int32_t t8 = -7388584;

	t8 = ((x201<(x202-x203))>>x204);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x257 = 0U;
	volatile int64_t x258 = INT64_MAX;
	volatile uint8_t x260 = 6U;
	static int32_t t9 = 2698628;

	t9 = ((x257<(x258-x259))>>x260);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = 14;
	int16_t x299 = INT16_MIN;
	uint32_t x300 = 2U;
	int32_t t10 = 0;

	t10 = ((x297<(x298-x299))>>x300);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x343 = 223213195LLU;
	uint16_t x344 = 25U;
	int32_t t11 = 64828;

	t11 = ((x341<(x342-x343))>>x344);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x377 = -1;
	volatile uint16_t x380 = 28U;
	volatile int32_t t12 = 5512;

	t12 = ((x377<(x378-x379))>>x380);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x397 = 0;
	uint64_t x398 = 60215182140LLU;
	uint32_t x399 = 125U;
	int8_t x400 = 0;
	volatile int32_t t13 = 18490;

	t13 = ((x397<(x398-x399))>>x400);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x433 = -7;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	static volatile uint32_t x436 = 9U;
	volatile int32_t t14 = -26328;

	t14 = ((x433<(x434-x435))>>x436);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x469 = INT8_MIN;
	static volatile uint16_t x470 = UINT16_MAX;
	int8_t x471 = -1;
	uint16_t x472 = 0U;
	int32_t t15 = 598999444;

	t15 = ((x469<(x470-x471))>>x472);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x477 = 5U;
	int32_t x478 = 17679630;
	int64_t x479 = -1LL;
	uint16_t x480 = 16U;
	int32_t t16 = -27933;

	t16 = ((x477<(x478-x479))>>x480);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x497 = 23991LL;
	int8_t x498 = -36;
	volatile int32_t t17 = -9228;

	t17 = ((x497<(x498-x499))>>x500);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x509 = INT8_MIN;
	volatile int64_t x510 = INT64_MAX;
	int16_t x511 = 0;
	uint16_t x512 = 0U;
	static int32_t t18 = -229212;

	t18 = ((x509<(x510-x511))>>x512);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x513 = -1;
	static int32_t x514 = -1;
	int16_t x515 = INT16_MIN;
	uint32_t x516 = 1U;
	int32_t t19 = 12815111;

	t19 = ((x513<(x514-x515))>>x516);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x517 = UINT16_MAX;
	static int8_t x518 = INT8_MAX;
	volatile int32_t x519 = -1;
	static int32_t x520 = 14;
	int32_t t20 = -13491440;

	t20 = ((x517<(x518-x519))>>x520);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x526 = -1LL;
	int32_t x527 = 1;
	volatile int64_t x528 = 1LL;

	t21 = ((x525<(x526-x527))>>x528);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x541 = -144074182559LL;
	static int32_t x542 = INT32_MAX;
	int64_t x543 = INT64_MAX;
	int8_t x544 = 7;
	volatile int32_t t22 = 8;

	t22 = ((x541<(x542-x543))>>x544);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x569 = -1;
	static int16_t x571 = INT16_MIN;
	uint8_t x572 = 0U;
	static volatile int32_t t23 = 14880;

	t23 = ((x569<(x570-x571))>>x572);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x586 = 1446U;
	uint32_t x587 = 3492U;
	static volatile uint8_t x588 = 12U;
	int32_t t24 = -811751293;

	t24 = ((x585<(x586-x587))>>x588);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x605 = 7963847564LL;
	volatile int64_t x606 = 281678LL;
	static int64_t x607 = -1LL;
	volatile int32_t t25 = 16074719;

	t25 = ((x605<(x606-x607))>>x608);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x657 = -1;
	static volatile uint64_t x658 = UINT64_MAX;
	uint32_t x659 = 19U;
	uint8_t x660 = 3U;
	volatile int32_t t26 = -10;

	t26 = ((x657<(x658-x659))>>x660);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x665 = INT64_MIN;
	uint64_t x667 = UINT64_MAX;
	uint8_t x668 = 1U;
	static int32_t t27 = -2316826;

	t27 = ((x665<(x666-x667))>>x668);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x673 = 2;
	int16_t x674 = 3109;
	volatile int16_t x675 = INT16_MIN;
	static uint32_t x676 = 1U;
	volatile int32_t t28 = 1216;

	t28 = ((x673<(x674-x675))>>x676);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x729 = 4093U;
	static uint32_t x730 = UINT32_MAX;
	int8_t x731 = 0;
	uint16_t x732 = 26U;

	t29 = ((x729<(x730-x731))>>x732);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x734 = 36;
	static uint64_t x735 = UINT64_MAX;
	volatile int32_t t30 = -795282;

	t30 = ((x733<(x734-x735))>>x736);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x751 = -1;
	uint8_t x752 = 0U;
	static int32_t t31 = -2;

	t31 = ((x749<(x750-x751))>>x752);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x757 = 3;
	static volatile int64_t x758 = 776003LL;
	volatile int64_t x759 = -1LL;
	uint16_t x760 = 5U;

	t32 = ((x757<(x758-x759))>>x760);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x769 = UINT64_MAX;
	int8_t x770 = -1;
	uint32_t x771 = 6U;
	static uint16_t x772 = 2U;
	volatile int32_t t33 = -1;

	t33 = ((x769<(x770-x771))>>x772);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x794 = -1LL;
	int32_t x796 = 1;
	static int32_t t34 = 1175;

	t34 = ((x793<(x794-x795))>>x796);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x805 = INT32_MAX;
	int8_t x808 = 1;

	t35 = ((x805<(x806-x807))>>x808);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x825 = 8052213;
	uint8_t x826 = 62U;
	int64_t x828 = 6LL;
	int32_t t36 = 13;

	t36 = ((x825<(x826-x827))>>x828);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x833 = 49699482048LLU;
	int32_t x835 = INT32_MIN;
	static int8_t x836 = 27;
	int32_t t37 = -50356;

	t37 = ((x833<(x834-x835))>>x836);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x878 = 13318672248296LL;
	uint32_t x879 = 1U;
	uint8_t x880 = 0U;
	int32_t t38 = -32543584;

	t38 = ((x877<(x878-x879))>>x880);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x913 = INT32_MAX;
	int8_t x914 = INT8_MAX;
	int32_t x915 = INT32_MAX;
	uint16_t x916 = 2U;
	static int32_t t39 = -1;

	t39 = ((x913<(x914-x915))>>x916);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x945 = 6U;
	int8_t x946 = INT8_MIN;
	static int8_t x947 = INT8_MIN;
	volatile int32_t t40 = -4;

	t40 = ((x945<(x946-x947))>>x948);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1035 = -1;
	volatile uint16_t x1036 = 0U;
	static volatile int32_t t41 = -37110660;

	t41 = ((x1033<(x1034-x1035))>>x1036);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1073 = UINT8_MAX;
	volatile int8_t x1076 = 17;
	volatile int32_t t42 = 2;

	t42 = ((x1073<(x1074-x1075))>>x1076);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1103 = UINT32_MAX;
	int8_t x1104 = 21;
	int32_t t43 = -257622;

	t43 = ((x1101<(x1102-x1103))>>x1104);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1123 = 52826545605LL;
	static int16_t x1124 = 4;
	int32_t t44 = 136857;

	t44 = ((x1121<(x1122-x1123))>>x1124);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1145 = 507301062U;
	int8_t x1146 = -1;
	volatile int16_t x1147 = -3361;
	volatile uint64_t x1148 = 8LLU;
	int32_t t45 = 0;

	t45 = ((x1145<(x1146-x1147))>>x1148);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1157 = 4049132;
	volatile uint64_t x1158 = UINT64_MAX;
	static volatile uint32_t x1160 = 0U;

	t46 = ((x1157<(x1158-x1159))>>x1160);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1186 = 8492749358LLU;
	int64_t x1187 = -1LL;
	uint16_t x1188 = 8U;
	volatile int32_t t47 = 96;

	t47 = ((x1185<(x1186-x1187))>>x1188);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1433 = UINT64_MAX;
	volatile uint64_t x1434 = UINT64_MAX;
	int32_t t48 = -2875;

	t48 = ((x1433<(x1434-x1435))>>x1436);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1453 = INT16_MIN;
	int64_t x1454 = 14786374845829LL;
	int64_t x1455 = -1LL;
	int8_t x1456 = 31;
	volatile int32_t t49 = 1;

	t49 = ((x1453<(x1454-x1455))>>x1456);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x1461 = 161U;
	int16_t x1462 = -17;
	volatile int8_t x1463 = -1;
	static uint8_t x1464 = 0U;
	volatile int32_t t50 = -13593;

	t50 = ((x1461<(x1462-x1463))>>x1464);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1506 = 4761646;
	static int8_t x1507 = 0;
	uint8_t x1508 = 0U;
	volatile int32_t t51 = -3806;

	t51 = ((x1505<(x1506-x1507))>>x1508);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1565 = INT16_MAX;
	int64_t x1566 = 1LL;
	volatile int64_t x1567 = -199215956621280LL;
	uint8_t x1568 = 29U;
	int32_t t52 = 2679;

	t52 = ((x1565<(x1566-x1567))>>x1568);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1569 = 2406505652011674166LL;
	int32_t x1570 = INT32_MIN;
	static int8_t x1571 = INT8_MIN;

	t53 = ((x1569<(x1570-x1571))>>x1572);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1581 = -1;
	int8_t x1582 = -1;
	int64_t x1583 = INT64_MIN;
	static volatile int32_t t54 = -2449;

	t54 = ((x1581<(x1582-x1583))>>x1584);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1629 = -169969701843LL;
	int64_t x1630 = -1LL;
	uint64_t x1631 = UINT64_MAX;
	int8_t x1632 = 11;
	volatile int32_t t55 = 1;

	t55 = ((x1629<(x1630-x1631))>>x1632);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x1765 = INT8_MAX;
	int32_t x1766 = INT32_MAX;
	uint16_t x1768 = 0U;
	int32_t t56 = 123;

	t56 = ((x1765<(x1766-x1767))>>x1768);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1821 = -1;
	int32_t x1823 = -98;
	int16_t x1824 = 1;
	static volatile int32_t t57 = -1;

	t57 = ((x1821<(x1822-x1823))>>x1824);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1877 = 82802LLU;
	static int32_t x1879 = -190993389;
	uint8_t x1880 = 8U;
	int32_t t58 = 15227659;

	t58 = ((x1877<(x1878-x1879))>>x1880);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x1897 = -1;
	int8_t x1899 = INT8_MIN;
	volatile uint64_t x1900 = 5LLU;
	volatile int32_t t59 = 7420871;

	t59 = ((x1897<(x1898-x1899))>>x1900);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1901 = INT16_MIN;
	uint8_t x1903 = UINT8_MAX;
	volatile int16_t x1904 = 27;
	volatile int32_t t60 = 148353;

	t60 = ((x1901<(x1902-x1903))>>x1904);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1914 = INT16_MIN;
	volatile uint64_t x1916 = 10LLU;
	volatile int32_t t61 = -76782;

	t61 = ((x1913<(x1914-x1915))>>x1916);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1957 = -36386426980937960LL;
	static uint16_t x1958 = UINT16_MAX;
	uint8_t x1960 = 26U;
	static volatile int32_t t62 = 14;

	t62 = ((x1957<(x1958-x1959))>>x1960);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1969 = 1LL;
	uint16_t x1972 = 2U;
	volatile int32_t t63 = 109910;

	t63 = ((x1969<(x1970-x1971))>>x1972);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1978 = INT8_MIN;
	static int16_t x1979 = INT16_MIN;
	static uint16_t x1980 = 15U;
	static volatile int32_t t64 = 926;

	t64 = ((x1977<(x1978-x1979))>>x1980);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x1981 = 0;
	int8_t x1982 = -13;
	uint8_t x1983 = 1U;
	static int32_t t65 = 742881;

	t65 = ((x1981<(x1982-x1983))>>x1984);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2033 = UINT64_MAX;
	uint8_t x2034 = 8U;
	volatile uint32_t x2036 = 0U;

	t66 = ((x2033<(x2034-x2035))>>x2036);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2061 = 1901188;
	volatile int16_t x2064 = 17;
	int32_t t67 = 6;

	t67 = ((x2061<(x2062-x2063))>>x2064);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2113 = INT32_MAX;
	uint8_t x2114 = 126U;
	volatile int64_t x2115 = 11929LL;
	volatile uint8_t x2116 = 1U;
	int32_t t68 = -1;

	t68 = ((x2113<(x2114-x2115))>>x2116);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2153 = 48;
	int32_t x2154 = -1;
	int32_t x2155 = INT32_MIN;
	static volatile int8_t x2156 = 7;
	volatile int32_t t69 = 610;

	t69 = ((x2153<(x2154-x2155))>>x2156);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2157 = INT32_MIN;
	volatile int8_t x2159 = INT8_MAX;
	int32_t t70 = -262539183;

	t70 = ((x2157<(x2158-x2159))>>x2160);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2197 = 2907;

	t71 = ((x2197<(x2198-x2199))>>x2200);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2205 = -1;
	static int8_t x2207 = 4;
	int8_t x2208 = 1;

	t72 = ((x2205<(x2206-x2207))>>x2208);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2209 = -23627501352525119LL;
	int32_t x2210 = 245511;
	volatile uint8_t x2212 = 0U;
	volatile int32_t t73 = 3655434;

	t73 = ((x2209<(x2210-x2211))>>x2212);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2234 = 1328;
	uint64_t x2235 = 52LLU;
	volatile int32_t t74 = 0;

	t74 = ((x2233<(x2234-x2235))>>x2236);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2246 = INT16_MIN;
	static int16_t x2247 = -8568;
	uint8_t x2248 = 0U;
	static volatile int32_t t75 = -326487;

	t75 = ((x2245<(x2246-x2247))>>x2248);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2269 = 0;
	volatile int8_t x2270 = -1;
	volatile int8_t x2271 = INT8_MIN;
	uint8_t x2272 = 17U;
	static volatile int32_t t76 = -7505;

	t76 = ((x2269<(x2270-x2271))>>x2272);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2273 = -1;
	int16_t x2274 = INT16_MAX;
	static int16_t x2275 = INT16_MAX;
	static volatile uint8_t x2276 = 1U;
	volatile int32_t t77 = -107;

	t77 = ((x2273<(x2274-x2275))>>x2276);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x2525 = 2U;
	volatile uint8_t x2526 = UINT8_MAX;
	int32_t t78 = 63;

	t78 = ((x2525<(x2526-x2527))>>x2528);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2529 = INT64_MIN;
	int8_t x2531 = INT8_MAX;
	volatile int32_t t79 = 1;

	t79 = ((x2529<(x2530-x2531))>>x2532);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2601 = -664717216648LL;
	int8_t x2602 = 0;
	static int32_t x2604 = 3;
	int32_t t80 = -35424417;

	t80 = ((x2601<(x2602-x2603))>>x2604);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x2657 = UINT64_MAX;
	uint64_t x2659 = UINT64_MAX;
	static uint8_t x2660 = 4U;
	int32_t t81 = 3;

	t81 = ((x2657<(x2658-x2659))>>x2660);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2661 = -27;
	int64_t x2662 = 1798745667030916911LL;
	int8_t x2663 = INT8_MAX;
	volatile int8_t x2664 = 4;
	static volatile int32_t t82 = -346771875;

	t82 = ((x2661<(x2662-x2663))>>x2664);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2689 = -1LL;
	uint32_t x2690 = 1018U;
	volatile int8_t x2691 = -1;
	volatile uint8_t x2692 = 5U;
	int32_t t83 = 3;

	t83 = ((x2689<(x2690-x2691))>>x2692);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2773 = 91474020616LL;
	volatile int8_t x2774 = -1;
	int8_t x2775 = 0;
	uint8_t x2776 = 0U;
	volatile int32_t t84 = 44;

	t84 = ((x2773<(x2774-x2775))>>x2776);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x2801 = 477104098787294LL;
	int16_t x2803 = 14239;
	uint8_t x2804 = 3U;
	volatile int32_t t85 = -1;

	t85 = ((x2801<(x2802-x2803))>>x2804);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2821 = INT32_MAX;
	uint32_t x2822 = 92539483U;
	int16_t x2823 = INT16_MIN;
	int8_t x2824 = 3;
	volatile int32_t t86 = 838432;

	t86 = ((x2821<(x2822-x2823))>>x2824);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2845 = 59U;
	int64_t x2846 = INT64_MIN;
	volatile int32_t x2847 = -1;
	volatile int16_t x2848 = 7;
	int32_t t87 = 932368061;

	t87 = ((x2845<(x2846-x2847))>>x2848);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2929 = INT32_MIN;
	static int8_t x2930 = -1;
	uint16_t x2931 = UINT16_MAX;
	volatile uint16_t x2932 = 5U;
	volatile int32_t t88 = -55906;

	t88 = ((x2929<(x2930-x2931))>>x2932);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2977 = -1;
	static int64_t x2979 = 3065667431636215661LL;
	volatile int32_t t89 = 19;

	t89 = ((x2977<(x2978-x2979))>>x2980);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3002 = -9;
	static volatile uint32_t x3003 = 18064495U;
	uint8_t x3004 = 0U;

	t90 = ((x3001<(x3002-x3003))>>x3004);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3037 = UINT64_MAX;
	volatile int32_t x3038 = 21;
	static int32_t x3039 = -1;
	uint8_t x3040 = 1U;

	t91 = ((x3037<(x3038-x3039))>>x3040);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3105 = 1;
	volatile int8_t x3106 = INT8_MIN;
	static uint16_t x3107 = UINT16_MAX;
	uint8_t x3108 = 0U;
	int32_t t92 = 1;

	t92 = ((x3105<(x3106-x3107))>>x3108);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x3146 = INT16_MIN;
	uint8_t x3147 = 7U;
	volatile int8_t x3148 = 8;

	t93 = ((x3145<(x3146-x3147))>>x3148);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3189 = 610U;
	uint64_t x3191 = 1382334451039LLU;
	int32_t t94 = 231;

	t94 = ((x3189<(x3190-x3191))>>x3192);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x3202 = 45U;
	volatile int32_t x3203 = 13;
	int8_t x3204 = 0;

	t95 = ((x3201<(x3202-x3203))>>x3204);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3261 = UINT16_MAX;
	volatile int32_t x3263 = -28279336;
	int32_t t96 = -489293908;

	t96 = ((x3261<(x3262-x3263))>>x3264);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3286 = 142U;
	int32_t x3287 = -1;
	volatile uint8_t x3288 = 23U;
	volatile int32_t t97 = 3411761;

	t97 = ((x3285<(x3286-x3287))>>x3288);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x3293 = UINT8_MAX;
	static uint16_t x3294 = UINT16_MAX;
	int8_t x3295 = INT8_MIN;
	volatile uint64_t x3296 = 3LLU;
	volatile int32_t t98 = 614;

	t98 = ((x3293<(x3294-x3295))>>x3296);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3302 = -742570762517490LL;
	volatile int32_t x3303 = -113;
	uint64_t x3304 = 17LLU;
	static int32_t t99 = 202295124;

	t99 = ((x3301<(x3302-x3303))>>x3304);

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

