#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 8U;
static volatile int32_t t1 = 97;
int16_t x82 = INT16_MAX;
int8_t x84 = 3;
static volatile uint8_t x111 = 118U;
int8_t x142 = 24;
static uint8_t x144 = 3U;
static int16_t x209 = INT16_MAX;
int32_t t8 = 811;
int16_t x262 = 2;
uint8_t x264 = 0U;
int32_t t9 = -45;
int16_t x391 = 6;
int32_t t12 = -17;
volatile uint8_t x396 = 2U;
int16_t x433 = INT16_MIN;
int64_t x435 = -1LL;
uint8_t x439 = 1U;
int8_t x440 = 18;
volatile int32_t t17 = -1041;
volatile int64_t x565 = 25638LL;
int64_t x610 = INT64_MIN;
int64_t x721 = INT64_MIN;
int16_t x722 = INT16_MIN;
volatile int16_t x724 = 0;
int32_t x739 = INT32_MIN;
uint8_t x780 = 18U;
volatile uint8_t x816 = 2U;
int16_t x871 = -1;
int8_t x950 = 0;
int16_t x966 = 2261;
volatile int32_t t35 = -188393;
int8_t x1086 = INT8_MAX;
int8_t x1103 = INT8_MIN;
volatile int32_t t39 = 425;
static volatile int16_t x1317 = -1;
int32_t t42 = -6479;
uint8_t x1370 = 44U;
static volatile int32_t t43 = 2842436;
volatile int8_t x1458 = INT8_MAX;
int16_t x1474 = -1;
static int32_t t50 = -120;
int32_t x1609 = INT32_MIN;
static int32_t x1622 = INT32_MIN;
int16_t x1744 = 28;
volatile int32_t t54 = 14150521;
int64_t x1765 = -1LL;
int16_t x1767 = INT16_MIN;
static int8_t x1793 = INT8_MIN;
static uint32_t x1794 = 416U;
static volatile uint64_t x1795 = 81836592731017219LLU;
uint32_t x1857 = 0U;
int32_t x1866 = -116;
static uint8_t x1868 = 3U;
int32_t t63 = 8891466;
int32_t x1983 = INT32_MIN;
volatile uint32_t x1998 = UINT32_MAX;
uint8_t x2068 = 3U;
static volatile int64_t x2073 = -1LL;
static volatile int8_t x2075 = INT8_MAX;
int64_t x2077 = -1LL;
uint32_t x2078 = UINT32_MAX;
uint32_t x2100 = 15U;
int16_t x2189 = INT16_MIN;
uint8_t x2284 = 2U;
uint64_t x2367 = 3245LLU;
static volatile uint16_t x2410 = 3720U;
uint32_t x2429 = 55739656U;
static volatile int32_t t80 = -7093;
static int8_t x2630 = INT8_MIN;
static int16_t x2675 = -2504;
volatile int16_t x2676 = 1;
static volatile int8_t x2699 = INT8_MIN;
static int32_t t87 = -602731874;
int8_t x2731 = INT8_MAX;
uint8_t x2732 = 15U;
volatile int32_t t88 = -419513;
int32_t x2739 = INT32_MAX;
volatile int32_t t89 = 29;
uint16_t x2777 = UINT16_MAX;
volatile int16_t x2781 = -1;
int32_t t93 = -55;
int16_t x2833 = -1;
uint16_t x2835 = 194U;
int16_t x2838 = INT16_MAX;
volatile int32_t t97 = 4403860;
int16_t x2953 = INT16_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint8_t x2 = 37U;
	volatile uint64_t x3 = 7004918437680631LLU;
	volatile int32_t t0 = -1659;

	t0 = ((x1==(x2<x3))>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = 56;
	uint64_t x27 = 60316LLU;
	int32_t x28 = 19;

	t1 = ((x25==(x26<x27))>>x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	int8_t x64 = 5;
	volatile int32_t t2 = 105739;

	t2 = ((x61==(x62<x63))>>x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x83 = -5;
	int32_t t3 = 1012955;

	t3 = ((x81==(x82<x83))>>x84);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x109 = 13U;
	int32_t x110 = 265823954;
	static int16_t x112 = 16;
	int32_t t4 = -1132;

	t4 = ((x109==(x110<x111))>>x112);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x141 = -1;
	uint64_t x143 = 61536185858657LLU;
	volatile int32_t t5 = 10655719;

	t5 = ((x141==(x142<x143))>>x144);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x149 = 35U;
	int64_t x150 = 1312365736LL;
	int16_t x151 = -1;
	uint8_t x152 = 1U;
	volatile int32_t t6 = 211120;

	t6 = ((x149==(x150<x151))>>x152);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x165 = UINT64_MAX;
	uint16_t x166 = 1U;
	int32_t x167 = -16969384;
	int8_t x168 = 18;
	static volatile int32_t t7 = 621462359;

	t7 = ((x165==(x166<x167))>>x168);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x210 = INT16_MIN;
	int8_t x211 = 22;
	uint32_t x212 = 0U;

	t8 = ((x209==(x210<x211))>>x212);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x261 = 4U;
	static int8_t x263 = -16;

	t9 = ((x261==(x262<x263))>>x264);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x325 = 5215U;
	int64_t x326 = 426730721111048LL;
	uint16_t x327 = UINT16_MAX;
	static int8_t x328 = 1;
	volatile int32_t t10 = -1168254;

	t10 = ((x325==(x326<x327))>>x328);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x373 = -6;
	uint8_t x374 = 5U;
	uint16_t x375 = UINT16_MAX;
	volatile int8_t x376 = 1;
	volatile int32_t t11 = 9;

	t11 = ((x373==(x374<x375))>>x376);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = INT64_MIN;
	static volatile uint8_t x392 = 16U;

	t12 = ((x389==(x390<x391))>>x392);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x393 = 3106U;
	static uint16_t x394 = 0U;
	uint16_t x395 = 3975U;
	int32_t t13 = 161;

	t13 = ((x393==(x394<x395))>>x396);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x434 = 4U;
	volatile int32_t x436 = 0;
	volatile int32_t t14 = 103665;

	t14 = ((x433==(x434<x435))>>x436);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x437 = INT8_MAX;
	int32_t x438 = -1;
	static int32_t t15 = 20615;

	t15 = ((x437==(x438<x439))>>x440);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x445 = INT64_MAX;
	uint16_t x446 = 29U;
	uint8_t x447 = 19U;
	int16_t x448 = 0;
	static volatile int32_t t16 = -241;

	t16 = ((x445==(x446<x447))>>x448);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x465 = 2868;
	int16_t x466 = INT16_MIN;
	volatile uint16_t x467 = 10714U;
	uint16_t x468 = 6U;

	t17 = ((x465==(x466<x467))>>x468);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x493 = INT8_MAX;
	static int64_t x494 = -1LL;
	static volatile uint64_t x495 = 0LLU;
	int8_t x496 = 12;
	volatile int32_t t18 = -52424;

	t18 = ((x493==(x494<x495))>>x496);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x529 = -12;
	uint16_t x530 = UINT16_MAX;
	int16_t x531 = -6;
	int8_t x532 = 1;
	volatile int32_t t19 = 334267172;

	t19 = ((x529==(x530<x531))>>x532);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x566 = 116U;
	volatile int16_t x567 = 88;
	static int16_t x568 = 18;
	int32_t t20 = -180458;

	t20 = ((x565==(x566<x567))>>x568);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x609 = 42837LL;
	int32_t x611 = INT32_MIN;
	uint8_t x612 = 9U;
	int32_t t21 = -276063;

	t21 = ((x609==(x610<x611))>>x612);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x681 = -9;
	uint64_t x682 = 3991201LLU;
	uint16_t x683 = 158U;
	volatile int64_t x684 = 0LL;
	int32_t t22 = -5599;

	t22 = ((x681==(x682<x683))>>x684);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x723 = 63622389LLU;
	int32_t t23 = 3219600;

	t23 = ((x721==(x722<x723))>>x724);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x737 = 154239;
	int16_t x738 = -5832;
	uint16_t x740 = 5U;
	volatile int32_t t24 = 608331;

	t24 = ((x737==(x738<x739))>>x740);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x777 = 29712U;
	static uint32_t x778 = 11U;
	static int8_t x779 = -60;
	int32_t t25 = -55850174;

	t25 = ((x777==(x778<x779))>>x780);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x813 = INT64_MAX;
	int16_t x814 = INT16_MAX;
	int64_t x815 = -1LL;
	int32_t t26 = -7289;

	t26 = ((x813==(x814<x815))>>x816);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x869 = 1981772037525891LLU;
	volatile int64_t x870 = INT64_MIN;
	volatile uint16_t x872 = 1U;
	static int32_t t27 = 221877175;

	t27 = ((x869==(x870<x871))>>x872);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x877 = -1;
	int8_t x878 = 23;
	int32_t x879 = -1123785;
	static int8_t x880 = 0;
	volatile int32_t t28 = 266020;

	t28 = ((x877==(x878<x879))>>x880);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x893 = -1;
	int16_t x894 = INT16_MIN;
	volatile int32_t x895 = INT32_MIN;
	int8_t x896 = 6;
	volatile int32_t t29 = -7089717;

	t29 = ((x893==(x894<x895))>>x896);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x941 = INT16_MAX;
	int8_t x942 = INT8_MAX;
	static uint16_t x943 = 3U;
	uint16_t x944 = 2U;
	volatile int32_t t30 = -255385802;

	t30 = ((x941==(x942<x943))>>x944);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x949 = -5505556LL;
	uint32_t x951 = UINT32_MAX;
	uint8_t x952 = 1U;
	volatile int32_t t31 = 27;

	t31 = ((x949==(x950<x951))>>x952);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x957 = 10869U;
	int32_t x958 = INT32_MIN;
	uint32_t x959 = 93197234U;
	static uint8_t x960 = 6U;
	static volatile int32_t t32 = 11268492;

	t32 = ((x957==(x958<x959))>>x960);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x965 = -1LL;
	int16_t x967 = INT16_MIN;
	int8_t x968 = 0;
	volatile int32_t t33 = -396006;

	t33 = ((x965==(x966<x967))>>x968);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x969 = INT32_MIN;
	uint64_t x970 = UINT64_MAX;
	int32_t x971 = -1;
	volatile uint8_t x972 = 1U;
	static int32_t t34 = 7844242;

	t34 = ((x969==(x970<x971))>>x972);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1065 = INT16_MIN;
	int32_t x1066 = INT32_MIN;
	uint16_t x1067 = 872U;
	int32_t x1068 = 15;

	t35 = ((x1065==(x1066<x1067))>>x1068);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1085 = -1;
	int32_t x1087 = -7679;
	uint16_t x1088 = 24U;
	int32_t t36 = 90861;

	t36 = ((x1085==(x1086<x1087))>>x1088);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1101 = UINT64_MAX;
	uint8_t x1102 = 1U;
	int16_t x1104 = 15;
	volatile int32_t t37 = 7578313;

	t37 = ((x1101==(x1102<x1103))>>x1104);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1133 = -33;
	uint64_t x1134 = 140919298728946574LLU;
	volatile uint32_t x1135 = UINT32_MAX;
	int32_t x1136 = 4;
	static int32_t t38 = 101944;

	t38 = ((x1133==(x1134<x1135))>>x1136);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x1209 = 15U;
	static int16_t x1210 = -1;
	static int32_t x1211 = INT32_MIN;
	volatile int8_t x1212 = 4;

	t39 = ((x1209==(x1210<x1211))>>x1212);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1221 = -1;
	volatile int64_t x1222 = -1LL;
	static int64_t x1223 = -20393688LL;
	static uint16_t x1224 = 18U;
	int32_t t40 = -7;

	t40 = ((x1221==(x1222<x1223))>>x1224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1229 = 401858904340842LLU;
	int8_t x1230 = 27;
	uint64_t x1231 = 135915970046518745LLU;
	uint8_t x1232 = 6U;
	static int32_t t41 = 787;

	t41 = ((x1229==(x1230<x1231))>>x1232);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x1318 = INT8_MAX;
	static uint16_t x1319 = UINT16_MAX;
	int64_t x1320 = 10LL;

	t42 = ((x1317==(x1318<x1319))>>x1320);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1369 = INT64_MAX;
	uint32_t x1371 = 28189U;
	uint8_t x1372 = 2U;

	t43 = ((x1369==(x1370<x1371))>>x1372);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1397 = 61;
	int64_t x1398 = -52496249150192LL;
	static uint16_t x1399 = UINT16_MAX;
	volatile uint8_t x1400 = 1U;
	volatile int32_t t44 = 1;

	t44 = ((x1397==(x1398<x1399))>>x1400);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1437 = 15;
	int32_t x1438 = INT32_MIN;
	int16_t x1439 = INT16_MIN;
	uint8_t x1440 = 0U;
	volatile int32_t t45 = 401;

	t45 = ((x1437==(x1438<x1439))>>x1440);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1457 = INT16_MIN;
	static int16_t x1459 = 0;
	int8_t x1460 = 11;
	int32_t t46 = 16679611;

	t46 = ((x1457==(x1458<x1459))>>x1460);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x1473 = INT32_MAX;
	int64_t x1475 = INT64_MIN;
	uint32_t x1476 = 3U;
	volatile int32_t t47 = -87;

	t47 = ((x1473==(x1474<x1475))>>x1476);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1493 = -35;
	uint32_t x1494 = UINT32_MAX;
	int8_t x1495 = -1;
	uint8_t x1496 = 27U;
	volatile int32_t t48 = 6819139;

	t48 = ((x1493==(x1494<x1495))>>x1496);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1545 = -19819LL;
	static uint16_t x1546 = 31246U;
	int8_t x1547 = INT8_MIN;
	uint64_t x1548 = 1LLU;
	int32_t t49 = -723;

	t49 = ((x1545==(x1546<x1547))>>x1548);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x1577 = INT64_MAX;
	volatile int32_t x1578 = INT32_MIN;
	int64_t x1579 = INT64_MIN;
	volatile int16_t x1580 = 18;

	t50 = ((x1577==(x1578<x1579))>>x1580);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1610 = INT8_MAX;
	uint16_t x1611 = UINT16_MAX;
	uint64_t x1612 = 4LLU;
	int32_t t51 = -47;

	t51 = ((x1609==(x1610<x1611))>>x1612);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1621 = -24;
	static volatile int64_t x1623 = -1LL;
	volatile int64_t x1624 = 0LL;
	volatile int32_t t52 = 29;

	t52 = ((x1621==(x1622<x1623))>>x1624);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1669 = 18U;
	uint8_t x1670 = 1U;
	static uint64_t x1671 = 1380LLU;
	uint32_t x1672 = 3U;
	static volatile int32_t t53 = -129025;

	t53 = ((x1669==(x1670<x1671))>>x1672);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1741 = INT16_MIN;
	uint8_t x1742 = 0U;
	int8_t x1743 = INT8_MAX;

	t54 = ((x1741==(x1742<x1743))>>x1744);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1766 = INT32_MIN;
	int16_t x1768 = 0;
	static int32_t t55 = -67004;

	t55 = ((x1765==(x1766<x1767))>>x1768);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1796 = 0;
	int32_t t56 = -51383;

	t56 = ((x1793==(x1794<x1795))>>x1796);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1809 = 14953966432LL;
	uint16_t x1810 = 480U;
	uint64_t x1811 = 2049361LLU;
	int16_t x1812 = 6;
	int32_t t57 = 15655494;

	t57 = ((x1809==(x1810<x1811))>>x1812);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1813 = INT32_MAX;
	static int32_t x1814 = -1;
	uint64_t x1815 = 0LLU;
	volatile uint16_t x1816 = 1U;
	volatile int32_t t58 = -20751405;

	t58 = ((x1813==(x1814<x1815))>>x1816);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1858 = INT64_MIN;
	static int8_t x1859 = 1;
	int8_t x1860 = 5;
	int32_t t59 = -7794578;

	t59 = ((x1857==(x1858<x1859))>>x1860);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1865 = 6070182875LLU;
	int16_t x1867 = -277;
	int32_t t60 = -4;

	t60 = ((x1865==(x1866<x1867))>>x1868);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x1917 = 14U;
	uint8_t x1918 = 59U;
	uint64_t x1919 = UINT64_MAX;
	volatile uint8_t x1920 = 26U;
	int32_t t61 = 3;

	t61 = ((x1917==(x1918<x1919))>>x1920);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1921 = 75LLU;
	uint64_t x1922 = 129618484727LLU;
	int16_t x1923 = -1;
	uint32_t x1924 = 0U;
	int32_t t62 = -21514814;

	t62 = ((x1921==(x1922<x1923))>>x1924);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x1941 = UINT16_MAX;
	volatile uint64_t x1942 = UINT64_MAX;
	volatile int32_t x1943 = INT32_MIN;
	static uint16_t x1944 = 7U;

	t63 = ((x1941==(x1942<x1943))>>x1944);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1981 = INT32_MAX;
	static int16_t x1982 = INT16_MAX;
	uint16_t x1984 = 27U;
	int32_t t64 = 1067073;

	t64 = ((x1981==(x1982<x1983))>>x1984);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1997 = 1U;
	int16_t x1999 = -1;
	volatile uint16_t x2000 = 7U;
	volatile int32_t t65 = -123982;

	t65 = ((x1997==(x1998<x1999))>>x2000);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2049 = INT16_MAX;
	int32_t x2050 = -1;
	uint64_t x2051 = 4716543134LLU;
	int16_t x2052 = 9;
	static int32_t t66 = 2663;

	t66 = ((x2049==(x2050<x2051))>>x2052);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2065 = 8U;
	int8_t x2066 = 1;
	int8_t x2067 = 48;
	volatile int32_t t67 = 3;

	t67 = ((x2065==(x2066<x2067))>>x2068);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2074 = -1;
	uint8_t x2076 = 5U;
	int32_t t68 = 1182;

	t68 = ((x2073==(x2074<x2075))>>x2076);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2079 = -1;
	uint8_t x2080 = 23U;
	int32_t t69 = 13202;

	t69 = ((x2077==(x2078<x2079))>>x2080);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x2097 = 3U;
	int8_t x2098 = INT8_MIN;
	static uint64_t x2099 = 7205LLU;
	int32_t t70 = -6631024;

	t70 = ((x2097==(x2098<x2099))>>x2100);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2173 = -1LL;
	int16_t x2174 = INT16_MIN;
	static uint32_t x2175 = 5U;
	volatile uint8_t x2176 = 7U;
	volatile int32_t t71 = -36681599;

	t71 = ((x2173==(x2174<x2175))>>x2176);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x2190 = INT32_MIN;
	static int16_t x2191 = INT16_MIN;
	uint8_t x2192 = 15U;
	static volatile int32_t t72 = 0;

	t72 = ((x2189==(x2190<x2191))>>x2192);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2241 = -1;
	static volatile int8_t x2242 = INT8_MIN;
	static uint64_t x2243 = 1LLU;
	uint8_t x2244 = 27U;
	int32_t t73 = -62610;

	t73 = ((x2241==(x2242<x2243))>>x2244);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2273 = INT16_MAX;
	int16_t x2274 = INT16_MAX;
	volatile uint32_t x2275 = 1609524492U;
	static int64_t x2276 = 1LL;
	int32_t t74 = -522484461;

	t74 = ((x2273==(x2274<x2275))>>x2276);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2281 = INT8_MIN;
	uint16_t x2282 = 16916U;
	int16_t x2283 = -1;
	volatile int32_t t75 = 15527078;

	t75 = ((x2281==(x2282<x2283))>>x2284);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x2329 = INT16_MAX;
	volatile int8_t x2330 = INT8_MIN;
	int16_t x2331 = -1240;
	static int16_t x2332 = 2;
	int32_t t76 = 65696;

	t76 = ((x2329==(x2330<x2331))>>x2332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2365 = INT64_MIN;
	volatile uint32_t x2366 = 1760037U;
	uint32_t x2368 = 1U;
	static int32_t t77 = -89261798;

	t77 = ((x2365==(x2366<x2367))>>x2368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2409 = 5U;
	static uint16_t x2411 = UINT16_MAX;
	int16_t x2412 = 1;
	static int32_t t78 = 28998781;

	t78 = ((x2409==(x2410<x2411))>>x2412);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2430 = INT64_MIN;
	int32_t x2431 = INT32_MIN;
	int8_t x2432 = 3;
	volatile int32_t t79 = -638029641;

	t79 = ((x2429==(x2430<x2431))>>x2432);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2441 = INT32_MAX;
	int16_t x2442 = -599;
	uint16_t x2443 = 169U;
	int8_t x2444 = 1;

	t80 = ((x2441==(x2442<x2443))>>x2444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2573 = INT32_MIN;
	uint32_t x2574 = UINT32_MAX;
	int64_t x2575 = 6355314020LL;
	static int8_t x2576 = 1;
	int32_t t81 = 71007;

	t81 = ((x2573==(x2574<x2575))>>x2576);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x2629 = INT16_MIN;
	volatile uint8_t x2631 = UINT8_MAX;
	uint16_t x2632 = 7U;
	volatile int32_t t82 = 186983;

	t82 = ((x2629==(x2630<x2631))>>x2632);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2653 = INT64_MIN;
	volatile uint16_t x2654 = 1091U;
	static int64_t x2655 = 438560607LL;
	volatile int32_t x2656 = 1;
	int32_t t83 = -3393;

	t83 = ((x2653==(x2654<x2655))>>x2656);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x2669 = 0U;
	int64_t x2670 = -1LL;
	static uint32_t x2671 = 313554U;
	uint8_t x2672 = 0U;
	volatile int32_t t84 = 127818;

	t84 = ((x2669==(x2670<x2671))>>x2672);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2673 = -1;
	int8_t x2674 = INT8_MAX;
	volatile int32_t t85 = -893535229;

	t85 = ((x2673==(x2674<x2675))>>x2676);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2697 = 0LL;
	static int32_t x2698 = 115974;
	int16_t x2700 = 4;
	int32_t t86 = -1513410;

	t86 = ((x2697==(x2698<x2699))>>x2700);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2725 = INT8_MIN;
	static int32_t x2726 = -1;
	static int32_t x2727 = -1;
	static uint32_t x2728 = 25U;

	t87 = ((x2725==(x2726<x2727))>>x2728);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2729 = INT64_MAX;
	volatile int16_t x2730 = INT16_MIN;

	t88 = ((x2729==(x2730<x2731))>>x2732);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2737 = UINT32_MAX;
	int16_t x2738 = INT16_MIN;
	static volatile uint16_t x2740 = 11U;

	t89 = ((x2737==(x2738<x2739))>>x2740);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x2745 = INT16_MIN;
	uint64_t x2746 = 2093793684267LLU;
	int32_t x2747 = -3023743;
	uint8_t x2748 = 0U;
	static int32_t t90 = 28832;

	t90 = ((x2745==(x2746<x2747))>>x2748);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2749 = 3375291514LL;
	int64_t x2750 = INT64_MIN;
	static uint64_t x2751 = 2036054LLU;
	uint8_t x2752 = 5U;
	int32_t t91 = 5;

	t91 = ((x2749==(x2750<x2751))>>x2752);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2778 = 24;
	uint8_t x2779 = 37U;
	static int16_t x2780 = 28;
	volatile int32_t t92 = -217;

	t92 = ((x2777==(x2778<x2779))>>x2780);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2782 = INT8_MIN;
	int8_t x2783 = 54;
	volatile int32_t x2784 = 6;

	t93 = ((x2781==(x2782<x2783))>>x2784);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2789 = INT16_MIN;
	int8_t x2790 = INT8_MIN;
	int32_t x2791 = INT32_MIN;
	int32_t x2792 = 10;
	volatile int32_t t94 = 230;

	t94 = ((x2789==(x2790<x2791))>>x2792);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x2834 = -1;
	uint8_t x2836 = 0U;
	volatile int32_t t95 = 28544370;

	t95 = ((x2833==(x2834<x2835))>>x2836);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x2837 = -1;
	int8_t x2839 = -1;
	uint16_t x2840 = 15U;
	int32_t t96 = -18355;

	t96 = ((x2837==(x2838<x2839))>>x2840);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2845 = INT64_MAX;
	int32_t x2846 = INT32_MIN;
	static volatile uint32_t x2847 = 14U;
	uint32_t x2848 = 11U;

	t97 = ((x2845==(x2846<x2847))>>x2848);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2857 = INT64_MIN;
	static volatile int64_t x2858 = 61654517315535005LL;
	uint16_t x2859 = 2134U;
	uint64_t x2860 = 15LLU;
	int32_t t98 = -3636;

	t98 = ((x2857==(x2858<x2859))>>x2860);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x2954 = 38U;
	volatile int16_t x2955 = INT16_MIN;
	uint64_t x2956 = 0LLU;
	volatile int32_t t99 = -24313;

	t99 = ((x2953==(x2954<x2955))>>x2956);

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

