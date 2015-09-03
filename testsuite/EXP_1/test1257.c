#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 22U;
int32_t t0 = 55;
int16_t x20 = INT16_MIN;
volatile int32_t x22 = -1;
volatile int8_t x106 = INT8_MAX;
static uint8_t x107 = 0U;
int8_t x130 = -1;
int32_t x132 = -3604218;
int32_t x141 = -917025;
uint32_t x142 = 21U;
static int8_t x187 = 1;
static int64_t x229 = -1LL;
int32_t t11 = 410349162;
int64_t x316 = -1LL;
volatile int32_t t13 = -678955;
int32_t x386 = INT32_MIN;
volatile int32_t t16 = -1023763703;
int16_t x517 = INT16_MAX;
uint16_t x561 = UINT16_MAX;
uint32_t x562 = 10U;
int8_t x563 = 9;
int64_t x564 = -1LL;
static int64_t x598 = INT64_MAX;
volatile int8_t x600 = INT8_MIN;
int16_t x641 = INT16_MAX;
int8_t x642 = -1;
int8_t x661 = INT8_MIN;
int32_t t21 = -21517;
volatile uint32_t x784 = 71108543U;
static int16_t x813 = -40;
int32_t x842 = INT32_MAX;
static uint8_t x843 = 1U;
int32_t x878 = 2664305;
static volatile int8_t x960 = -7;
uint8_t x1045 = 7U;
int16_t x1048 = INT16_MIN;
int16_t x1128 = 2;
uint32_t x1131 = 22U;
int8_t x1192 = INT8_MIN;
volatile int32_t t36 = -6;
int16_t x1211 = 1;
uint8_t x1244 = 108U;
volatile int64_t x1270 = -174536096864527LL;
uint16_t x1271 = 4U;
int32_t x1320 = INT32_MIN;
int8_t x1321 = -1;
uint32_t x1346 = UINT32_MAX;
int16_t x1348 = INT16_MIN;
int32_t x1425 = -3;
int8_t x1426 = INT8_MIN;
uint8_t x1514 = UINT8_MAX;
volatile int16_t x1542 = -1;
volatile int8_t x1575 = 0;
volatile uint8_t x1671 = 7U;
static int8_t x1687 = 6;
int16_t x1699 = 5;
int8_t x1758 = 6;
volatile int8_t x1770 = -1;
int64_t x1800 = INT64_MIN;
volatile int32_t t58 = 30;
volatile int32_t x1944 = INT32_MIN;
uint32_t x1997 = 151U;
uint32_t x2000 = 1U;
int32_t x2056 = INT32_MAX;
volatile int32_t t62 = -1722;
int64_t x2081 = 114LL;
int32_t x2105 = INT32_MIN;
int16_t x2117 = 62;
volatile uint8_t x2119 = 3U;
uint64_t x2280 = 121LLU;
uint16_t x2290 = 142U;
int16_t x2345 = -3;
volatile uint8_t x2347 = 2U;
int32_t t70 = -937028619;
int8_t x2515 = 18;
volatile int32_t t74 = 361438;
volatile int16_t x2518 = INT16_MIN;
uint16_t x2541 = 27U;
volatile int32_t x2685 = INT32_MIN;
int64_t x2686 = -1LL;
int16_t x2688 = INT16_MIN;
int16_t x2746 = INT16_MAX;
int64_t x2749 = 785575254971LL;
uint64_t x2765 = UINT64_MAX;
volatile int32_t t82 = -1;
uint32_t x2796 = UINT32_MAX;
uint8_t x2801 = 11U;
uint32_t x2802 = UINT32_MAX;
uint8_t x2827 = 1U;
int16_t x2901 = INT16_MIN;
static volatile int32_t x2902 = 1207800;
static uint32_t x2934 = UINT32_MAX;
uint16_t x2951 = 7U;
int16_t x3043 = 1;
static uint16_t x3114 = 38U;
static int16_t x3116 = 3;
int32_t t96 = 2539;
int64_t x3145 = INT64_MIN;
int16_t x3146 = -1;
volatile int32_t t97 = -1;
uint8_t x3171 = 4U;
int32_t x3172 = 56775;
int32_t x3221 = 517215725;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = -1;
	static uint64_t x4 = UINT64_MAX;

	t0 = (((x1==x2)<<x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x17 = 3990;
	static int64_t x18 = INT64_MAX;
	int8_t x19 = 1;
	static volatile int32_t t1 = -2;

	t1 = (((x17==x18)<<x19)<x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MIN;
	static int32_t x23 = 0;
	volatile int64_t x24 = 1LL;
	int32_t t2 = -126470;

	t2 = (((x21==x22)<<x23)<x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x105 = -214933421763LL;
	int32_t x108 = -1;
	volatile int32_t t3 = -526;

	t3 = (((x105==x106)<<x107)<x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x109 = 14734807LLU;
	int64_t x110 = -66545677336357038LL;
	uint16_t x111 = 17U;
	int16_t x112 = -6;
	volatile int32_t t4 = 4;

	t4 = (((x109==x110)<<x111)<x112);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	uint8_t x118 = 0U;
	volatile int8_t x119 = 1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t5 = 1;

	t5 = (((x117==x118)<<x119)<x120);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x129 = INT32_MIN;
	uint64_t x131 = 3LLU;
	volatile int32_t t6 = 179;

	t6 = (((x129==x130)<<x131)<x132);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x143 = 1U;
	static uint8_t x144 = 15U;
	volatile int32_t t7 = 6212;

	t7 = (((x141==x142)<<x143)<x144);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MAX;
	int8_t x188 = 19;
	int32_t t8 = -191;

	t8 = (((x185==x186)<<x187)<x188);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x225 = INT8_MIN;
	volatile int64_t x226 = INT64_MIN;
	int16_t x227 = 1;
	uint32_t x228 = UINT32_MAX;
	int32_t t9 = 726247099;

	t9 = (((x225==x226)<<x227)<x228);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x230 = -8569;
	uint16_t x231 = 0U;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t10 = -1;

	t10 = (((x229==x230)<<x231)<x232);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = 377817758863959422LLU;
	volatile uint8_t x251 = 0U;
	uint64_t x252 = 195502263140LLU;

	t11 = (((x249==x250)<<x251)<x252);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x293 = INT16_MIN;
	volatile int64_t x294 = INT64_MIN;
	volatile int8_t x295 = 7;
	static int64_t x296 = INT64_MIN;
	volatile int32_t t12 = -77;

	t12 = (((x293==x294)<<x295)<x296);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x313 = -1LL;
	int16_t x314 = 11;
	uint16_t x315 = 3U;

	t13 = (((x313==x314)<<x315)<x316);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x349 = 25133478U;
	int16_t x350 = INT16_MAX;
	static uint16_t x351 = 2U;
	static volatile int32_t x352 = INT32_MIN;
	int32_t t14 = 24;

	t14 = (((x349==x350)<<x351)<x352);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x385 = UINT8_MAX;
	volatile uint8_t x387 = 6U;
	static int8_t x388 = 15;
	int32_t t15 = -302760848;

	t15 = (((x385==x386)<<x387)<x388);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x477 = UINT32_MAX;
	int32_t x478 = 63887201;
	uint8_t x479 = 31U;
	volatile int32_t x480 = INT32_MIN;

	t16 = (((x477==x478)<<x479)<x480);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x518 = 3423179966849LLU;
	volatile uint8_t x519 = 3U;
	volatile int8_t x520 = INT8_MIN;
	volatile int32_t t17 = -3179;

	t17 = (((x517==x518)<<x519)<x520);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t t18 = 1479;

	t18 = (((x561==x562)<<x563)<x564);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x597 = INT8_MIN;
	volatile uint8_t x599 = 7U;
	volatile int32_t t19 = 154;

	t19 = (((x597==x598)<<x599)<x600);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x643 = 8;
	static uint16_t x644 = UINT16_MAX;
	volatile int32_t t20 = -122266120;

	t20 = (((x641==x642)<<x643)<x644);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x662 = -7;
	volatile uint32_t x663 = 2U;
	int32_t x664 = INT32_MIN;

	t21 = (((x661==x662)<<x663)<x664);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x757 = 193556055LL;
	static int16_t x758 = INT16_MAX;
	int16_t x759 = 5;
	uint16_t x760 = 9U;
	int32_t t22 = 3473;

	t22 = (((x757==x758)<<x759)<x760);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x781 = INT32_MIN;
	uint64_t x782 = 112385181814345LLU;
	static int8_t x783 = 11;
	int32_t t23 = -126617;

	t23 = (((x781==x782)<<x783)<x784);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x814 = 60093;
	uint8_t x815 = 3U;
	static volatile int64_t x816 = INT64_MAX;
	volatile int32_t t24 = 306482;

	t24 = (((x813==x814)<<x815)<x816);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x841 = 144732838385541098LL;
	static uint8_t x844 = 0U;
	int32_t t25 = -110;

	t25 = (((x841==x842)<<x843)<x844);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x877 = INT32_MAX;
	uint8_t x879 = 3U;
	uint8_t x880 = 17U;
	static volatile int32_t t26 = 1393518;

	t26 = (((x877==x878)<<x879)<x880);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x889 = -1815;
	int16_t x890 = -26;
	uint8_t x891 = 20U;
	uint32_t x892 = 68U;
	static volatile int32_t t27 = 0;

	t27 = (((x889==x890)<<x891)<x892);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x937 = UINT8_MAX;
	static int8_t x938 = 7;
	uint32_t x939 = 22U;
	uint8_t x940 = 6U;
	static int32_t t28 = 770;

	t28 = (((x937==x938)<<x939)<x940);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x957 = UINT16_MAX;
	volatile int8_t x958 = INT8_MAX;
	uint8_t x959 = 17U;
	volatile int32_t t29 = -1444;

	t29 = (((x957==x958)<<x959)<x960);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x965 = 420121U;
	int8_t x966 = INT8_MIN;
	int32_t x967 = 7;
	static uint32_t x968 = 14U;
	static int32_t t30 = 19;

	t30 = (((x965==x966)<<x967)<x968);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1046 = INT8_MAX;
	volatile uint8_t x1047 = 7U;
	int32_t t31 = 4035;

	t31 = (((x1045==x1046)<<x1047)<x1048);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1109 = UINT16_MAX;
	uint32_t x1110 = 13735U;
	uint64_t x1111 = 1LLU;
	static uint16_t x1112 = UINT16_MAX;
	int32_t t32 = 1264798;

	t32 = (((x1109==x1110)<<x1111)<x1112);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1125 = 115858LL;
	static uint16_t x1126 = 2U;
	int8_t x1127 = 23;
	volatile int32_t t33 = 27872803;

	t33 = (((x1125==x1126)<<x1127)<x1128);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1129 = UINT8_MAX;
	int32_t x1130 = INT32_MAX;
	uint64_t x1132 = 368LLU;
	volatile int32_t t34 = -12247341;

	t34 = (((x1129==x1130)<<x1131)<x1132);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1189 = 1971502U;
	int8_t x1190 = INT8_MAX;
	int8_t x1191 = 0;
	volatile int32_t t35 = -13042528;

	t35 = (((x1189==x1190)<<x1191)<x1192);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1197 = INT8_MAX;
	volatile int8_t x1198 = INT8_MAX;
	static uint16_t x1199 = 0U;
	int64_t x1200 = -110062215252949642LL;

	t36 = (((x1197==x1198)<<x1199)<x1200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1209 = INT8_MIN;
	volatile uint8_t x1210 = 2U;
	int8_t x1212 = 0;
	int32_t t37 = -54857021;

	t37 = (((x1209==x1210)<<x1211)<x1212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1241 = INT32_MAX;
	int32_t x1242 = INT32_MAX;
	static uint8_t x1243 = 0U;
	int32_t t38 = 25;

	t38 = (((x1241==x1242)<<x1243)<x1244);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1269 = -1;
	int8_t x1272 = -1;
	int32_t t39 = -208977;

	t39 = (((x1269==x1270)<<x1271)<x1272);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1309 = 59;
	int32_t x1310 = INT32_MIN;
	uint16_t x1311 = 2U;
	int8_t x1312 = -1;
	volatile int32_t t40 = -14634789;

	t40 = (((x1309==x1310)<<x1311)<x1312);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1317 = 2;
	volatile int64_t x1318 = INT64_MIN;
	int64_t x1319 = 3LL;
	static int32_t t41 = 549329;

	t41 = (((x1317==x1318)<<x1319)<x1320);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1322 = 8;
	int16_t x1323 = 0;
	int32_t x1324 = INT32_MAX;
	volatile int32_t t42 = 3559;

	t42 = (((x1321==x1322)<<x1323)<x1324);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1345 = 0U;
	uint16_t x1347 = 3U;
	static int32_t t43 = -879;

	t43 = (((x1345==x1346)<<x1347)<x1348);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1427 = 1U;
	int16_t x1428 = 26;
	static int32_t t44 = -122047;

	t44 = (((x1425==x1426)<<x1427)<x1428);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1429 = 809U;
	int64_t x1430 = -1426720LL;
	int8_t x1431 = 0;
	int64_t x1432 = INT64_MAX;
	int32_t t45 = 1353145;

	t45 = (((x1429==x1430)<<x1431)<x1432);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1457 = 0U;
	int16_t x1458 = 1;
	static volatile int8_t x1459 = 1;
	int64_t x1460 = INT64_MIN;
	volatile int32_t t46 = -6;

	t46 = (((x1457==x1458)<<x1459)<x1460);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1513 = INT32_MIN;
	int16_t x1515 = 7;
	static volatile uint32_t x1516 = 691U;
	int32_t t47 = -22;

	t47 = (((x1513==x1514)<<x1515)<x1516);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1541 = -1;
	volatile uint16_t x1543 = 23U;
	int32_t x1544 = -1787;
	volatile int32_t t48 = -645;

	t48 = (((x1541==x1542)<<x1543)<x1544);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1573 = -1;
	static uint8_t x1574 = 0U;
	uint64_t x1576 = 29LLU;
	volatile int32_t t49 = 1;

	t49 = (((x1573==x1574)<<x1575)<x1576);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1641 = 0;
	static int32_t x1642 = -7331307;
	int8_t x1643 = 0;
	static int8_t x1644 = 1;
	static int32_t t50 = -1308443;

	t50 = (((x1641==x1642)<<x1643)<x1644);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1669 = 113330U;
	int8_t x1670 = INT8_MIN;
	volatile int8_t x1672 = INT8_MIN;
	int32_t t51 = 10810904;

	t51 = (((x1669==x1670)<<x1671)<x1672);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1685 = 932093;
	static int8_t x1686 = INT8_MIN;
	uint64_t x1688 = UINT64_MAX;
	volatile int32_t t52 = 4457350;

	t52 = (((x1685==x1686)<<x1687)<x1688);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1697 = 1LL;
	static int64_t x1698 = INT64_MIN;
	uint64_t x1700 = UINT64_MAX;
	int32_t t53 = -8123205;

	t53 = (((x1697==x1698)<<x1699)<x1700);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1725 = INT16_MIN;
	static int32_t x1726 = -29025695;
	uint64_t x1727 = 0LLU;
	static int8_t x1728 = INT8_MIN;
	volatile int32_t t54 = 466299;

	t54 = (((x1725==x1726)<<x1727)<x1728);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1757 = -190814654;
	int8_t x1759 = 1;
	int8_t x1760 = -1;
	int32_t t55 = -99;

	t55 = (((x1757==x1758)<<x1759)<x1760);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1769 = 24;
	static uint32_t x1771 = 30U;
	uint64_t x1772 = UINT64_MAX;
	static volatile int32_t t56 = 131;

	t56 = (((x1769==x1770)<<x1771)<x1772);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1797 = -557160933690881551LL;
	int32_t x1798 = -230535154;
	int16_t x1799 = 1;
	volatile int32_t t57 = 5527533;

	t57 = (((x1797==x1798)<<x1799)<x1800);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1865 = 1255;
	static int8_t x1866 = INT8_MAX;
	volatile uint8_t x1867 = 0U;
	uint64_t x1868 = 12835355LLU;

	t58 = (((x1865==x1866)<<x1867)<x1868);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x1885 = 40U;
	int8_t x1886 = 21;
	uint32_t x1887 = 14U;
	int32_t x1888 = 9046;
	volatile int32_t t59 = 15952;

	t59 = (((x1885==x1886)<<x1887)<x1888);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x1941 = UINT16_MAX;
	volatile uint64_t x1942 = 445589730LLU;
	uint16_t x1943 = 20U;
	volatile int32_t t60 = 1;

	t60 = (((x1941==x1942)<<x1943)<x1944);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x1998 = INT32_MIN;
	uint8_t x1999 = 31U;
	volatile int32_t t61 = 63596428;

	t61 = (((x1997==x1998)<<x1999)<x2000);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2053 = -1LL;
	int16_t x2054 = INT16_MAX;
	volatile uint32_t x2055 = 0U;

	t62 = (((x2053==x2054)<<x2055)<x2056);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2082 = -1LL;
	int64_t x2083 = 1LL;
	volatile int32_t x2084 = -122;
	int32_t t63 = 10955424;

	t63 = (((x2081==x2082)<<x2083)<x2084);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2106 = -1;
	uint8_t x2107 = 3U;
	volatile int8_t x2108 = INT8_MAX;
	volatile int32_t t64 = -1;

	t64 = (((x2105==x2106)<<x2107)<x2108);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2118 = 537967723U;
	volatile int32_t x2120 = 2387;
	volatile int32_t t65 = -224557;

	t65 = (((x2117==x2118)<<x2119)<x2120);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2273 = 1U;
	int64_t x2274 = -766557516181LL;
	uint16_t x2275 = 0U;
	int64_t x2276 = 50243331652LL;
	int32_t t66 = 1131;

	t66 = (((x2273==x2274)<<x2275)<x2276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2277 = 2;
	int16_t x2278 = 15;
	int16_t x2279 = 10;
	static volatile int32_t t67 = 68;

	t67 = (((x2277==x2278)<<x2279)<x2280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2285 = UINT64_MAX;
	volatile int32_t x2286 = INT32_MIN;
	uint16_t x2287 = 29U;
	volatile int16_t x2288 = -30;
	int32_t t68 = 67;

	t68 = (((x2285==x2286)<<x2287)<x2288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2289 = -1;
	static int8_t x2291 = 0;
	uint32_t x2292 = 255U;
	int32_t t69 = 13511;

	t69 = (((x2289==x2290)<<x2291)<x2292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2346 = INT32_MIN;
	uint16_t x2348 = 4482U;

	t70 = (((x2345==x2346)<<x2347)<x2348);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2441 = 3U;
	int8_t x2442 = -1;
	uint8_t x2443 = 5U;
	uint64_t x2444 = 334496LLU;
	volatile int32_t t71 = 108188;

	t71 = (((x2441==x2442)<<x2443)<x2444);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2445 = INT8_MIN;
	int8_t x2446 = INT8_MIN;
	static uint8_t x2447 = 2U;
	static int64_t x2448 = INT64_MIN;
	int32_t t72 = 359;

	t72 = (((x2445==x2446)<<x2447)<x2448);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2465 = INT16_MIN;
	int8_t x2466 = INT8_MIN;
	uint16_t x2467 = 6U;
	int32_t x2468 = INT32_MIN;
	volatile int32_t t73 = -5378516;

	t73 = (((x2465==x2466)<<x2467)<x2468);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x2513 = INT8_MIN;
	int32_t x2514 = -1;
	int32_t x2516 = -916773;

	t74 = (((x2513==x2514)<<x2515)<x2516);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2517 = 26;
	volatile int8_t x2519 = 30;
	int64_t x2520 = INT64_MIN;
	static volatile int32_t t75 = -46337;

	t75 = (((x2517==x2518)<<x2519)<x2520);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2542 = 14U;
	volatile int8_t x2543 = 26;
	int32_t x2544 = INT32_MIN;
	volatile int32_t t76 = 5;

	t76 = (((x2541==x2542)<<x2543)<x2544);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2561 = 2655U;
	int8_t x2562 = 16;
	uint16_t x2563 = 7U;
	int16_t x2564 = -1;
	volatile int32_t t77 = -3719;

	t77 = (((x2561==x2562)<<x2563)<x2564);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2687 = 4U;
	int32_t t78 = -165856;

	t78 = (((x2685==x2686)<<x2687)<x2688);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2745 = UINT8_MAX;
	uint16_t x2747 = 12U;
	volatile int16_t x2748 = INT16_MIN;
	int32_t t79 = -645;

	t79 = (((x2745==x2746)<<x2747)<x2748);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2750 = -10711;
	static int8_t x2751 = 14;
	volatile int64_t x2752 = INT64_MIN;
	int32_t t80 = 0;

	t80 = (((x2749==x2750)<<x2751)<x2752);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2766 = INT16_MAX;
	uint64_t x2767 = 2LLU;
	static uint32_t x2768 = UINT32_MAX;
	int32_t t81 = -8094956;

	t81 = (((x2765==x2766)<<x2767)<x2768);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2773 = -82516363LL;
	volatile uint16_t x2774 = 1U;
	static int8_t x2775 = 17;
	volatile uint64_t x2776 = 43LLU;

	t82 = (((x2773==x2774)<<x2775)<x2776);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2793 = -1;
	int16_t x2794 = 346;
	uint32_t x2795 = 0U;
	volatile int32_t t83 = 1;

	t83 = (((x2793==x2794)<<x2795)<x2796);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2803 = 1;
	uint16_t x2804 = UINT16_MAX;
	int32_t t84 = 37;

	t84 = (((x2801==x2802)<<x2803)<x2804);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x2821 = 6094LL;
	volatile uint64_t x2822 = 245811923794243798LLU;
	int32_t x2823 = 1;
	int32_t x2824 = INT32_MAX;
	static volatile int32_t t85 = -2;

	t85 = (((x2821==x2822)<<x2823)<x2824);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2825 = INT8_MIN;
	uint16_t x2826 = 189U;
	static volatile uint32_t x2828 = 372U;
	volatile int32_t t86 = -1;

	t86 = (((x2825==x2826)<<x2827)<x2828);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2865 = UINT8_MAX;
	volatile int16_t x2866 = -3434;
	int64_t x2867 = 1LL;
	uint32_t x2868 = UINT32_MAX;
	volatile int32_t t87 = 54471851;

	t87 = (((x2865==x2866)<<x2867)<x2868);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2903 = 3U;
	int64_t x2904 = -1LL;
	static volatile int32_t t88 = 113696;

	t88 = (((x2901==x2902)<<x2903)<x2904);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x2933 = -327LL;
	static int32_t x2935 = 0;
	int8_t x2936 = INT8_MAX;
	volatile int32_t t89 = 8187;

	t89 = (((x2933==x2934)<<x2935)<x2936);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2949 = -1;
	static uint8_t x2950 = 19U;
	uint8_t x2952 = 85U;
	static volatile int32_t t90 = 3;

	t90 = (((x2949==x2950)<<x2951)<x2952);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x2973 = UINT16_MAX;
	static volatile uint8_t x2974 = 127U;
	uint8_t x2975 = 1U;
	static uint32_t x2976 = 143328999U;
	static int32_t t91 = -143883746;

	t91 = (((x2973==x2974)<<x2975)<x2976);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x3001 = UINT8_MAX;
	int16_t x3002 = 6;
	volatile uint8_t x3003 = 1U;
	int16_t x3004 = -1;
	volatile int32_t t92 = 21655511;

	t92 = (((x3001==x3002)<<x3003)<x3004);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3025 = INT16_MIN;
	volatile int16_t x3026 = INT16_MIN;
	int16_t x3027 = 1;
	int16_t x3028 = INT16_MIN;
	static volatile int32_t t93 = -251;

	t93 = (((x3025==x3026)<<x3027)<x3028);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3041 = 4991216461298961LL;
	volatile int8_t x3042 = INT8_MIN;
	int32_t x3044 = INT32_MIN;
	int32_t t94 = 105550488;

	t94 = (((x3041==x3042)<<x3043)<x3044);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3105 = 1;
	int64_t x3106 = INT64_MIN;
	uint16_t x3107 = 15U;
	static int16_t x3108 = -1;
	int32_t t95 = 287447501;

	t95 = (((x3105==x3106)<<x3107)<x3108);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3113 = -1;
	uint16_t x3115 = 1U;

	t96 = (((x3113==x3114)<<x3115)<x3116);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3147 = 0;
	int64_t x3148 = INT64_MIN;

	t97 = (((x3145==x3146)<<x3147)<x3148);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x3169 = UINT32_MAX;
	int32_t x3170 = 8490287;
	int32_t t98 = 13;

	t98 = (((x3169==x3170)<<x3171)<x3172);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x3222 = 8U;
	uint8_t x3223 = 10U;
	int16_t x3224 = -1;
	volatile int32_t t99 = -29030983;

	t99 = (((x3221==x3222)<<x3223)<x3224);

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

