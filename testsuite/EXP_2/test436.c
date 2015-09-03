#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = -1;
int32_t x37 = INT32_MIN;
int32_t x38 = -1135;
int32_t t3 = -15;
volatile int8_t x75 = INT8_MAX;
int16_t x76 = 7;
int8_t x160 = 3;
uint64_t x162 = UINT64_MAX;
uint32_t x163 = 262U;
volatile uint8_t x164 = 1U;
int8_t x186 = 16;
volatile int32_t t7 = -6117;
uint16_t x189 = UINT16_MAX;
int32_t x214 = INT32_MIN;
uint64_t x215 = 56847953LLU;
volatile uint16_t x269 = 9U;
int32_t x271 = INT32_MAX;
int32_t x272 = 0;
static int8_t x278 = -1;
int8_t x280 = 1;
uint16_t x346 = 63U;
uint8_t x348 = 12U;
volatile int32_t t13 = -82;
int16_t x409 = INT16_MIN;
int8_t x411 = INT8_MAX;
volatile int32_t t16 = 12;
volatile int16_t x531 = -1;
static int16_t x537 = 299;
int16_t x538 = INT16_MIN;
static volatile int8_t x539 = -16;
int16_t x546 = -1;
uint16_t x547 = 7606U;
int32_t t19 = -3;
int64_t x557 = INT64_MAX;
uint16_t x604 = 22U;
int32_t t25 = -260077;
int8_t x935 = INT8_MIN;
static uint8_t x1053 = 0U;
int32_t t31 = -8593;
uint8_t x1073 = 20U;
int32_t x1198 = -1;
static int8_t x1204 = 0;
volatile int32_t t36 = -44255;
int16_t x1276 = 1;
static uint8_t x1279 = UINT8_MAX;
int16_t x1307 = -1;
int32_t t43 = 11;
int64_t x1421 = INT64_MIN;
volatile int16_t x1424 = 1;
int64_t x1489 = -1906902813LL;
int64_t x1490 = -336834394166383LL;
int16_t x1491 = 64;
int8_t x1582 = -1;
int16_t x1613 = -1;
int64_t x1614 = 5025026LL;
static int8_t x1654 = INT8_MIN;
uint64_t x1655 = 2LLU;
uint64_t x1656 = 2LLU;
uint32_t x1765 = UINT32_MAX;
int16_t x1766 = -15571;
uint8_t x1776 = 0U;
int8_t x1814 = -15;
uint8_t x1816 = 14U;
volatile uint32_t x1865 = 2222090U;
uint16_t x1969 = 2949U;
volatile int32_t x1970 = -4;
volatile int32_t t57 = -564083636;
int8_t x2011 = 1;
int8_t x2014 = 0;
int8_t x2016 = 0;
int32_t t60 = 873803;
volatile int32_t x2037 = 3;
static volatile int16_t x2046 = INT16_MAX;
static volatile uint8_t x2048 = 1U;
uint8_t x2056 = 0U;
static uint32_t x2097 = UINT32_MAX;
volatile uint32_t x2098 = 3088U;
int64_t x2100 = 4LL;
volatile int32_t t65 = -58807;
volatile int32_t x2331 = 0;
int32_t x2412 = 6;
int32_t t70 = 15;
volatile int32_t t71 = -23495336;
int64_t x2494 = 79280344204657LL;
int32_t x2567 = -1;
volatile int64_t x2709 = -1LL;
int32_t t78 = 10;
int64_t x2985 = INT64_MIN;
int32_t t84 = -764140046;
int32_t t85 = 12;
uint8_t x3051 = 127U;
int64_t x3052 = 17LL;
static int8_t x3330 = INT8_MIN;
static int8_t x3386 = 46;
uint32_t x3387 = 212U;
volatile int32_t t93 = -1;
volatile uint8_t x3433 = 1U;
static volatile int32_t t95 = -56635199;
int8_t x3466 = INT8_MIN;
int8_t x3467 = INT8_MIN;
uint64_t x3473 = 1038367587869LLU;
volatile int16_t x3474 = -1;
uint8_t x3476 = 9U;
int32_t t97 = 1;
int32_t x3529 = INT32_MAX;
int64_t x3530 = -1LL;
int32_t x3535 = INT32_MIN;
int8_t x3536 = 3;
volatile int32_t t99 = -1518439;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	volatile uint16_t x4 = 0U;
	static int32_t t0 = -337;

	t0 = ((x1==(x2*x3))>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = 233;
	uint8_t x31 = 59U;
	int8_t x32 = 0;
	int32_t t1 = 48695430;

	t1 = ((x29==(x30*x31))>>x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x39 = INT16_MIN;
	static int16_t x40 = 0;
	int32_t t2 = 1;

	t2 = ((x37==(x38*x39))>>x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x57 = INT8_MAX;
	uint8_t x58 = UINT8_MAX;
	uint16_t x59 = 1009U;
	int8_t x60 = 13;

	t3 = ((x57==(x58*x59))>>x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x73 = 18;
	volatile int16_t x74 = -1;
	int32_t t4 = 405868396;

	t4 = ((x73==(x74*x75))>>x76);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x157 = -491449;
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MIN;
	int32_t t5 = 49945;

	t5 = ((x157==(x158*x159))>>x160);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x161 = INT8_MIN;
	static volatile int32_t t6 = 269707;

	t6 = ((x161==(x162*x163))>>x164);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x185 = -3923485444271127675LL;
	int32_t x187 = -1;
	volatile uint64_t x188 = 11LLU;

	t7 = ((x185==(x186*x187))>>x188);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x190 = 9U;
	volatile int16_t x191 = 252;
	volatile uint8_t x192 = 18U;
	int32_t t8 = -11269;

	t8 = ((x189==(x190*x191))>>x192);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x213 = INT64_MAX;
	int64_t x216 = 5LL;
	int32_t t9 = 46;

	t9 = ((x213==(x214*x215))>>x216);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x270 = 29LL;
	volatile int32_t t10 = 0;

	t10 = ((x269==(x270*x271))>>x272);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x277 = -1;
	static volatile uint16_t x279 = 161U;
	volatile int32_t t11 = -1695588;

	t11 = ((x277==(x278*x279))>>x280);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x345 = -1983;
	volatile int16_t x347 = INT16_MIN;
	volatile int32_t t12 = -228827;

	t12 = ((x345==(x346*x347))>>x348);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x357 = 918U;
	static int32_t x358 = INT32_MIN;
	uint32_t x359 = UINT32_MAX;
	static uint16_t x360 = 0U;

	t13 = ((x357==(x358*x359))>>x360);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x410 = -1;
	volatile int8_t x412 = 0;
	int32_t t14 = 558933537;

	t14 = ((x409==(x410*x411))>>x412);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x445 = 526314333;
	int8_t x446 = INT8_MAX;
	static uint64_t x447 = 1037099519LLU;
	int32_t x448 = 0;
	int32_t t15 = -3;

	t15 = ((x445==(x446*x447))>>x448);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MIN;
	int8_t x519 = -1;
	volatile uint8_t x520 = 8U;

	t16 = ((x517==(x518*x519))>>x520);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x529 = 1242966092LLU;
	uint64_t x530 = 9724229902LLU;
	int8_t x532 = 23;
	int32_t t17 = 8;

	t17 = ((x529==(x530*x531))>>x532);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x540 = 4U;
	volatile int32_t t18 = -6;

	t18 = ((x537==(x538*x539))>>x540);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x545 = INT32_MIN;
	uint8_t x548 = 1U;

	t19 = ((x545==(x546*x547))>>x548);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x558 = -1;
	uint8_t x559 = 5U;
	uint16_t x560 = 0U;
	volatile int32_t t20 = 7940;

	t20 = ((x557==(x558*x559))>>x560);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x601 = 69U;
	uint16_t x602 = 2820U;
	static int16_t x603 = INT16_MIN;
	volatile int32_t t21 = -4239802;

	t21 = ((x601==(x602*x603))>>x604);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x673 = 1099536597449LL;
	static uint16_t x674 = UINT16_MAX;
	int64_t x675 = -1LL;
	static uint16_t x676 = 1U;
	int32_t t22 = -845503;

	t22 = ((x673==(x674*x675))>>x676);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x685 = -1;
	uint64_t x686 = UINT64_MAX;
	volatile int8_t x687 = INT8_MIN;
	int32_t x688 = 1;
	int32_t t23 = -7;

	t23 = ((x685==(x686*x687))>>x688);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x741 = UINT16_MAX;
	volatile int16_t x742 = -4021;
	int8_t x743 = INT8_MIN;
	volatile int16_t x744 = 0;
	int32_t t24 = 92577;

	t24 = ((x741==(x742*x743))>>x744);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x769 = -6904793;
	volatile uint64_t x770 = UINT64_MAX;
	volatile int32_t x771 = 367870;
	int16_t x772 = 6;

	t25 = ((x769==(x770*x771))>>x772);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x785 = 59U;
	int32_t x786 = 0;
	int64_t x787 = -1LL;
	volatile int16_t x788 = 4;
	volatile int32_t t26 = 458927;

	t26 = ((x785==(x786*x787))>>x788);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x885 = 0U;
	static int16_t x886 = INT16_MAX;
	uint8_t x887 = 3U;
	int8_t x888 = 0;
	volatile int32_t t27 = -107018;

	t27 = ((x885==(x886*x887))>>x888);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x933 = 251U;
	int64_t x934 = -13930514LL;
	int16_t x936 = 5;
	int32_t t28 = -760;

	t28 = ((x933==(x934*x935))>>x936);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x977 = INT16_MIN;
	uint16_t x978 = 11414U;
	uint32_t x979 = 703U;
	volatile int8_t x980 = 8;
	volatile int32_t t29 = 2503135;

	t29 = ((x977==(x978*x979))>>x980);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x989 = INT16_MAX;
	int16_t x990 = INT16_MIN;
	static uint32_t x991 = 1835577381U;
	uint16_t x992 = 9U;
	static volatile int32_t t30 = -1;

	t30 = ((x989==(x990*x991))>>x992);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1054 = 54575U;
	static uint16_t x1055 = UINT16_MAX;
	static uint8_t x1056 = 9U;

	t31 = ((x1053==(x1054*x1055))>>x1056);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1069 = UINT16_MAX;
	int32_t x1070 = -1;
	int16_t x1071 = -428;
	int16_t x1072 = 1;
	static int32_t t32 = 86209;

	t32 = ((x1069==(x1070*x1071))>>x1072);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x1074 = UINT64_MAX;
	volatile int8_t x1075 = INT8_MIN;
	static int8_t x1076 = 1;
	int32_t t33 = -74;

	t33 = ((x1073==(x1074*x1075))>>x1076);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1197 = 344004195313701689LLU;
	int32_t x1199 = 3;
	volatile int16_t x1200 = 0;
	static volatile int32_t t34 = 3026844;

	t34 = ((x1197==(x1198*x1199))>>x1200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1201 = INT16_MIN;
	static int32_t x1202 = -342;
	volatile uint32_t x1203 = 412210U;
	int32_t t35 = 1;

	t35 = ((x1201==(x1202*x1203))>>x1204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1237 = -5;
	uint32_t x1238 = 793U;
	uint16_t x1239 = 13U;
	uint16_t x1240 = 0U;

	t36 = ((x1237==(x1238*x1239))>>x1240);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1273 = -12;
	uint8_t x1274 = 58U;
	int8_t x1275 = -11;
	int32_t t37 = -2;

	t37 = ((x1273==(x1274*x1275))>>x1276);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1277 = UINT32_MAX;
	static uint16_t x1278 = 8U;
	volatile int8_t x1280 = 0;
	volatile int32_t t38 = -10062160;

	t38 = ((x1277==(x1278*x1279))>>x1280);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1297 = INT64_MIN;
	uint64_t x1298 = 15035560161172336LLU;
	static int8_t x1299 = INT8_MIN;
	uint8_t x1300 = 0U;
	int32_t t39 = -941006;

	t39 = ((x1297==(x1298*x1299))>>x1300);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1305 = INT8_MAX;
	volatile int8_t x1306 = INT8_MAX;
	volatile int32_t x1308 = 1;
	static int32_t t40 = 26547;

	t40 = ((x1305==(x1306*x1307))>>x1308);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1313 = INT64_MIN;
	int32_t x1314 = -1;
	static uint8_t x1315 = UINT8_MAX;
	volatile uint8_t x1316 = 6U;
	volatile int32_t t41 = 15926129;

	t41 = ((x1313==(x1314*x1315))>>x1316);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1385 = 5821724134920LLU;
	volatile int8_t x1386 = 0;
	uint8_t x1387 = 3U;
	uint8_t x1388 = 31U;
	volatile int32_t t42 = -2071;

	t42 = ((x1385==(x1386*x1387))>>x1388);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1409 = -1;
	static int16_t x1410 = INT16_MIN;
	uint32_t x1411 = 25164U;
	uint64_t x1412 = 2LLU;

	t43 = ((x1409==(x1410*x1411))>>x1412);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1422 = -3;
	uint32_t x1423 = UINT32_MAX;
	volatile int32_t t44 = -10681;

	t44 = ((x1421==(x1422*x1423))>>x1424);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1477 = -1;
	uint16_t x1478 = 2U;
	uint8_t x1479 = 10U;
	uint8_t x1480 = 11U;
	int32_t t45 = -301387;

	t45 = ((x1477==(x1478*x1479))>>x1480);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1492 = 26;
	int32_t t46 = -27549;

	t46 = ((x1489==(x1490*x1491))>>x1492);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1501 = UINT64_MAX;
	static int16_t x1502 = INT16_MAX;
	int16_t x1503 = 4425;
	volatile uint16_t x1504 = 1U;
	volatile int32_t t47 = -297652839;

	t47 = ((x1501==(x1502*x1503))>>x1504);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1581 = -223272LL;
	static int32_t x1583 = -1009;
	volatile uint8_t x1584 = 1U;
	static int32_t t48 = -5;

	t48 = ((x1581==(x1582*x1583))>>x1584);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1615 = INT32_MAX;
	uint16_t x1616 = 5U;
	static int32_t t49 = 16437;

	t49 = ((x1613==(x1614*x1615))>>x1616);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1629 = 0;
	uint16_t x1630 = UINT16_MAX;
	int8_t x1631 = INT8_MAX;
	static volatile uint16_t x1632 = 1U;
	int32_t t50 = 187148;

	t50 = ((x1629==(x1630*x1631))>>x1632);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x1653 = INT32_MAX;
	int32_t t51 = -145585;

	t51 = ((x1653==(x1654*x1655))>>x1656);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x1665 = INT32_MAX;
	int16_t x1666 = -1;
	static uint32_t x1667 = 25385U;
	int8_t x1668 = 4;
	volatile int32_t t52 = -161119077;

	t52 = ((x1665==(x1666*x1667))>>x1668);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1767 = UINT64_MAX;
	static uint8_t x1768 = 3U;
	volatile int32_t t53 = -12803826;

	t53 = ((x1765==(x1766*x1767))>>x1768);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1773 = 1007652190U;
	static volatile int16_t x1774 = INT16_MIN;
	volatile int16_t x1775 = INT16_MIN;
	volatile int32_t t54 = -3427;

	t54 = ((x1773==(x1774*x1775))>>x1776);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1813 = INT32_MAX;
	int8_t x1815 = -1;
	static volatile int32_t t55 = 0;

	t55 = ((x1813==(x1814*x1815))>>x1816);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1866 = -1;
	int32_t x1867 = 1;
	static volatile uint8_t x1868 = 8U;
	int32_t t56 = -474828;

	t56 = ((x1865==(x1866*x1867))>>x1868);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1971 = UINT16_MAX;
	int16_t x1972 = 0;

	t57 = ((x1969==(x1970*x1971))>>x1972);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2009 = INT8_MAX;
	int16_t x2010 = INT16_MAX;
	volatile uint8_t x2012 = 5U;
	volatile int32_t t58 = -1;

	t58 = ((x2009==(x2010*x2011))>>x2012);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2013 = INT16_MIN;
	uint16_t x2015 = 2U;
	volatile int32_t t59 = -25;

	t59 = ((x2013==(x2014*x2015))>>x2016);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2017 = INT16_MAX;
	int16_t x2018 = INT16_MIN;
	static int32_t x2019 = 153;
	int8_t x2020 = 26;

	t60 = ((x2017==(x2018*x2019))>>x2020);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2038 = 2038;
	volatile int32_t x2039 = -1;
	volatile int8_t x2040 = 1;
	static int32_t t61 = -82301489;

	t61 = ((x2037==(x2038*x2039))>>x2040);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x2045 = UINT32_MAX;
	int16_t x2047 = -1002;
	volatile int32_t t62 = -997778;

	t62 = ((x2045==(x2046*x2047))>>x2048);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2053 = 1;
	int8_t x2054 = -1;
	int16_t x2055 = INT16_MIN;
	volatile int32_t t63 = -2799590;

	t63 = ((x2053==(x2054*x2055))>>x2056);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2099 = 95U;
	int32_t t64 = 342493;

	t64 = ((x2097==(x2098*x2099))>>x2100);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2101 = -1;
	int8_t x2102 = INT8_MIN;
	int16_t x2103 = -1;
	static volatile int8_t x2104 = 0;

	t65 = ((x2101==(x2102*x2103))>>x2104);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2193 = 1858506834856694LLU;
	volatile int32_t x2194 = -1;
	int16_t x2195 = -8176;
	int16_t x2196 = 1;
	static volatile int32_t t66 = 17627;

	t66 = ((x2193==(x2194*x2195))>>x2196);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2329 = INT64_MAX;
	volatile uint8_t x2330 = UINT8_MAX;
	uint32_t x2332 = 1U;
	int32_t t67 = -829018843;

	t67 = ((x2329==(x2330*x2331))>>x2332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2393 = -1;
	static uint8_t x2394 = 12U;
	uint32_t x2395 = 633U;
	uint8_t x2396 = 0U;
	volatile int32_t t68 = -4151205;

	t68 = ((x2393==(x2394*x2395))>>x2396);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2409 = INT64_MIN;
	int64_t x2410 = -1LL;
	int16_t x2411 = -1;
	int32_t t69 = -8;

	t69 = ((x2409==(x2410*x2411))>>x2412);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x2413 = UINT64_MAX;
	int16_t x2414 = INT16_MAX;
	uint8_t x2415 = UINT8_MAX;
	volatile int8_t x2416 = 1;

	t70 = ((x2413==(x2414*x2415))>>x2416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2449 = 6577U;
	static int64_t x2450 = -1LL;
	volatile int32_t x2451 = INT32_MAX;
	static int8_t x2452 = 26;

	t71 = ((x2449==(x2450*x2451))>>x2452);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2493 = -84;
	static int32_t x2495 = -1;
	volatile uint64_t x2496 = 5LLU;
	int32_t t72 = 114692;

	t72 = ((x2493==(x2494*x2495))>>x2496);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2509 = INT64_MIN;
	uint32_t x2510 = 462773307U;
	volatile int8_t x2511 = INT8_MIN;
	int8_t x2512 = 0;
	static volatile int32_t t73 = 12;

	t73 = ((x2509==(x2510*x2511))>>x2512);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2513 = INT8_MIN;
	int32_t x2514 = -7717;
	int16_t x2515 = 1158;
	uint8_t x2516 = 4U;
	static volatile int32_t t74 = 53;

	t74 = ((x2513==(x2514*x2515))>>x2516);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2565 = 59U;
	int64_t x2566 = -1341466356177580954LL;
	uint16_t x2568 = 1U;
	int32_t t75 = -37;

	t75 = ((x2565==(x2566*x2567))>>x2568);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2577 = UINT32_MAX;
	static volatile uint32_t x2578 = 1505600U;
	int16_t x2579 = INT16_MIN;
	volatile uint8_t x2580 = 0U;
	volatile int32_t t76 = 1;

	t76 = ((x2577==(x2578*x2579))>>x2580);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x2710 = INT16_MIN;
	int64_t x2711 = -1LL;
	uint32_t x2712 = 8U;
	static int32_t t77 = -167;

	t77 = ((x2709==(x2710*x2711))>>x2712);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2717 = UINT64_MAX;
	uint32_t x2718 = UINT32_MAX;
	uint64_t x2719 = 9190LLU;
	uint16_t x2720 = 1U;

	t78 = ((x2717==(x2718*x2719))>>x2720);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2773 = INT64_MIN;
	int8_t x2774 = -1;
	static int8_t x2775 = -1;
	static int64_t x2776 = 12LL;
	volatile int32_t t79 = -364727;

	t79 = ((x2773==(x2774*x2775))>>x2776);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2817 = INT8_MAX;
	volatile int8_t x2818 = INT8_MAX;
	static int8_t x2819 = INT8_MIN;
	int8_t x2820 = 0;
	static int32_t t80 = 8;

	t80 = ((x2817==(x2818*x2819))>>x2820);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2873 = 6U;
	int8_t x2874 = INT8_MIN;
	int8_t x2875 = INT8_MAX;
	int8_t x2876 = 13;
	volatile int32_t t81 = -168232;

	t81 = ((x2873==(x2874*x2875))>>x2876);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2945 = INT16_MAX;
	uint32_t x2946 = 0U;
	volatile uint64_t x2947 = UINT64_MAX;
	uint8_t x2948 = 20U;
	volatile int32_t t82 = -3;

	t82 = ((x2945==(x2946*x2947))>>x2948);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2965 = 15111U;
	static volatile int16_t x2966 = INT16_MAX;
	uint64_t x2967 = 73907020728255LLU;
	int8_t x2968 = 0;
	volatile int32_t t83 = 1;

	t83 = ((x2965==(x2966*x2967))>>x2968);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2986 = UINT8_MAX;
	int8_t x2987 = -1;
	static int8_t x2988 = 13;

	t84 = ((x2985==(x2986*x2987))>>x2988);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3041 = UINT64_MAX;
	volatile int64_t x3042 = 4200251562179LL;
	int16_t x3043 = INT16_MIN;
	uint16_t x3044 = 1U;

	t85 = ((x3041==(x3042*x3043))>>x3044);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3049 = 1;
	static int64_t x3050 = 46789494694850LL;
	static volatile int32_t t86 = -1;

	t86 = ((x3049==(x3050*x3051))>>x3052);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3109 = -1;
	int32_t x3110 = -21;
	static int8_t x3111 = INT8_MIN;
	uint16_t x3112 = 1U;
	int32_t t87 = 55970;

	t87 = ((x3109==(x3110*x3111))>>x3112);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x3221 = INT16_MIN;
	volatile uint64_t x3222 = 322LLU;
	static int32_t x3223 = 52126496;
	uint16_t x3224 = 0U;
	volatile int32_t t88 = -5037;

	t88 = ((x3221==(x3222*x3223))>>x3224);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x3225 = INT64_MIN;
	static uint16_t x3226 = 707U;
	int16_t x3227 = -1;
	uint8_t x3228 = 5U;
	static volatile int32_t t89 = 510478723;

	t89 = ((x3225==(x3226*x3227))>>x3228);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3329 = INT8_MIN;
	int32_t x3331 = -1;
	uint8_t x3332 = 3U;
	volatile int32_t t90 = 10218;

	t90 = ((x3329==(x3330*x3331))>>x3332);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3369 = 1096100491038LL;
	static int32_t x3370 = -75347039;
	int32_t x3371 = -1;
	uint32_t x3372 = 3U;
	int32_t t91 = 121;

	t91 = ((x3369==(x3370*x3371))>>x3372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3385 = -1LL;
	int16_t x3388 = 0;
	int32_t t92 = 7;

	t92 = ((x3385==(x3386*x3387))>>x3388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3409 = INT8_MAX;
	int32_t x3410 = 255;
	int32_t x3411 = -1;
	volatile int8_t x3412 = 1;

	t93 = ((x3409==(x3410*x3411))>>x3412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x3434 = UINT64_MAX;
	int16_t x3435 = INT16_MAX;
	int8_t x3436 = 1;
	volatile int32_t t94 = 16515687;

	t94 = ((x3433==(x3434*x3435))>>x3436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3461 = UINT8_MAX;
	int16_t x3462 = INT16_MAX;
	uint16_t x3463 = 494U;
	uint16_t x3464 = 15U;

	t95 = ((x3461==(x3462*x3463))>>x3464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3465 = INT64_MAX;
	uint64_t x3468 = 0LLU;
	volatile int32_t t96 = -14;

	t96 = ((x3465==(x3466*x3467))>>x3468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x3475 = -1;

	t97 = ((x3473==(x3474*x3475))>>x3476);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3531 = INT8_MIN;
	uint8_t x3532 = 26U;
	static volatile int32_t t98 = 9990523;

	t98 = ((x3529==(x3530*x3531))>>x3532);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3533 = 10;
	uint32_t x3534 = 12157121U;

	t99 = ((x3533==(x3534*x3535))>>x3536);

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

