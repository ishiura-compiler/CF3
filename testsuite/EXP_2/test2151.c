#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x14 = INT16_MAX;
int32_t t1 = 222856;
uint8_t x144 = 12U;
volatile uint32_t x186 = UINT32_MAX;
volatile int32_t t4 = -971;
uint8_t x204 = 1U;
int64_t x215 = -1LL;
int64_t x318 = INT64_MIN;
int16_t x350 = INT16_MAX;
uint16_t x357 = UINT16_MAX;
int16_t x360 = 1;
static volatile int64_t x397 = 29755905753LL;
int8_t x441 = -1;
uint16_t x450 = 25U;
uint32_t x543 = UINT32_MAX;
volatile int16_t x544 = 14;
int64_t x569 = INT64_MIN;
int32_t x571 = INT32_MIN;
static int32_t t20 = 4897;
volatile uint16_t x613 = UINT16_MAX;
uint8_t x760 = 4U;
uint64_t x795 = 557905705LLU;
static volatile int32_t x849 = -109;
int32_t t26 = -377563;
int64_t x867 = 128819LL;
volatile int32_t x887 = INT32_MAX;
uint32_t x897 = UINT32_MAX;
int32_t t29 = -8276115;
int8_t x912 = 7;
static int32_t t34 = -954108;
int32_t x950 = INT32_MIN;
int32_t t36 = -1;
volatile int64_t x1041 = INT64_MAX;
int32_t t37 = -56080;
int64_t x1059 = 2292383966451LL;
int32_t t38 = -879333410;
volatile int8_t x1148 = 0;
int32_t t39 = -1542;
int32_t x1261 = -55201498;
int32_t x1262 = 2;
int32_t x1307 = -1;
int32_t x1308 = 1;
uint32_t x1413 = 329144U;
int16_t x1455 = INT16_MIN;
static int8_t x1456 = 15;
volatile int32_t t46 = -714;
int32_t x1473 = INT32_MIN;
uint8_t x1476 = 15U;
volatile int16_t x1549 = INT16_MIN;
volatile int32_t t49 = -186998033;
int64_t x1565 = -34LL;
static int16_t x1603 = INT16_MIN;
uint64_t x1689 = UINT64_MAX;
int16_t x1691 = -1;
int32_t x1729 = INT32_MIN;
uint32_t x1730 = 3458824U;
int32_t x1731 = INT32_MIN;
uint32_t x1734 = 12437010U;
int32_t t54 = -1950317;
int16_t x1877 = -1;
static uint16_t x1878 = 4217U;
static uint64_t x1879 = 918597943LLU;
uint32_t x1893 = 1U;
static int32_t x1895 = 0;
uint64_t x1944 = 5LLU;
volatile uint16_t x1982 = 101U;
static volatile uint64_t x1983 = 284175125040092LLU;
volatile uint64_t x2122 = 977705453927273788LLU;
static int32_t t63 = -226984;
int32_t x2303 = INT32_MIN;
int16_t x2315 = INT16_MIN;
volatile uint8_t x2316 = 1U;
uint16_t x2527 = UINT16_MAX;
volatile int32_t x2553 = -79597393;
uint8_t x2566 = 1U;
int32_t x2567 = INT32_MAX;
int64_t x2673 = INT64_MIN;
static int32_t t73 = 79329923;
volatile uint8_t x2742 = 2U;
volatile int64_t x2758 = INT64_MIN;
int16_t x2821 = -1;
uint64_t x2822 = 5443LLU;
volatile int8_t x2825 = INT8_MIN;
uint16_t x2827 = UINT16_MAX;
int64_t x2849 = INT64_MIN;
uint8_t x2861 = 58U;
uint64_t x2863 = 1043476735LLU;
static uint64_t x2892 = 26LLU;
int64_t x2998 = -60128320LL;
uint16_t x3027 = 6896U;
int16_t x3030 = 6;
volatile int32_t x3034 = INT32_MIN;
volatile int32_t t86 = -1;
int64_t x3193 = INT64_MIN;
uint8_t x3218 = 1U;
volatile int32_t t93 = 30783;
uint8_t x3286 = 55U;
int8_t x3288 = 10;
static volatile int64_t x3317 = -1LL;
int8_t x3374 = 55;
int32_t x3375 = -1;
volatile int32_t x3376 = 1;
int8_t x3380 = 14;
uint16_t x3385 = 2162U;
static uint8_t x3387 = 1U;


void f0(void) {
	static int32_t x13 = INT32_MIN;
	int64_t x15 = -130LL;
	uint8_t x16 = 6U;
	int32_t t0 = 62;

	t0 = ((x13<=(x14^x15))<<x16);

	if (t0 != 64) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x37 = -34929550;
	uint64_t x38 = 605710109LLU;
	static volatile int8_t x39 = -1;
	uint32_t x40 = 1U;

	t1 = ((x37<=(x38^x39))<<x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x81 = -1;
	int8_t x82 = -3;
	uint64_t x83 = 8065896445792118LLU;
	int16_t x84 = 7;
	int32_t t2 = -922562;

	t2 = ((x81<=(x82^x83))<<x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x141 = INT8_MIN;
	static int64_t x142 = INT64_MAX;
	volatile int64_t x143 = -219LL;
	volatile int32_t t3 = -87610551;

	t3 = ((x141<=(x142^x143))<<x144);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x185 = 225469;
	static volatile uint32_t x187 = 0U;
	int8_t x188 = 0;

	t4 = ((x185<=(x186^x187))<<x188);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = 1;
	int64_t x203 = INT64_MIN;
	static int32_t t5 = 123875430;

	t5 = ((x201<=(x202^x203))<<x204);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x213 = -11;
	uint16_t x214 = 1U;
	int16_t x216 = 1;
	int32_t t6 = 257511674;

	t6 = ((x213<=(x214^x215))<<x216);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x317 = 1867;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 1U;
	volatile int32_t t7 = 76026768;

	t7 = ((x317<=(x318^x319))<<x320);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x325 = 714U;
	volatile int8_t x326 = INT8_MIN;
	static uint16_t x327 = 3U;
	int32_t x328 = 12;
	static volatile int32_t t8 = 4276;

	t8 = ((x325<=(x326^x327))<<x328);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x349 = -1;
	volatile int8_t x351 = -1;
	uint8_t x352 = 0U;
	static volatile int32_t t9 = 43;

	t9 = ((x349<=(x350^x351))<<x352);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x358 = -1;
	static volatile int8_t x359 = -1;
	volatile int32_t t10 = 636225669;

	t10 = ((x357<=(x358^x359))<<x360);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	int16_t x367 = 21;
	uint32_t x368 = 1U;
	volatile int32_t t11 = -26903;

	t11 = ((x365<=(x366^x367))<<x368);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = -51438870;
	int64_t x395 = 367574580809705LL;
	int32_t x396 = 0;
	int32_t t12 = -3768989;

	t12 = ((x393<=(x394^x395))<<x396);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x398 = INT16_MAX;
	uint64_t x399 = 3141132119721807LLU;
	volatile uint8_t x400 = 1U;
	volatile int32_t t13 = 195;

	t13 = ((x397<=(x398^x399))<<x400);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x442 = -1LL;
	int64_t x443 = -1LL;
	uint8_t x444 = 5U;
	volatile int32_t t14 = 1;

	t14 = ((x441<=(x442^x443))<<x444);

	if (t14 != 32) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x449 = 14U;
	int32_t x451 = -1;
	static volatile uint8_t x452 = 1U;
	static volatile int32_t t15 = 3853218;

	t15 = ((x449<=(x450^x451))<<x452);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x485 = -6121533483LL;
	volatile int32_t x486 = INT32_MAX;
	static volatile uint16_t x487 = UINT16_MAX;
	uint8_t x488 = 0U;
	int32_t t16 = 14718322;

	t16 = ((x485<=(x486^x487))<<x488);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x501 = UINT16_MAX;
	int16_t x502 = -1;
	int16_t x503 = INT16_MIN;
	static uint16_t x504 = 2U;
	static volatile int32_t t17 = 147985;

	t17 = ((x501<=(x502^x503))<<x504);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x541 = 0;
	int8_t x542 = 0;
	volatile int32_t t18 = 5265;

	t18 = ((x541<=(x542^x543))<<x544);

	if (t18 != 16384) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x570 = 10236U;
	volatile int8_t x572 = 11;
	int32_t t19 = 4;

	t19 = ((x569<=(x570^x571))<<x572);

	if (t19 != 2048) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x573 = INT64_MIN;
	int8_t x574 = -1;
	volatile int16_t x575 = -7483;
	int8_t x576 = 1;

	t20 = ((x573<=(x574^x575))<<x576);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x577 = -1;
	int64_t x578 = 1LL;
	int8_t x579 = -1;
	uint8_t x580 = 0U;
	int32_t t21 = -47501;

	t21 = ((x577<=(x578^x579))<<x580);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x614 = 1990004LLU;
	int16_t x615 = -320;
	int8_t x616 = 0;
	int32_t t22 = 131;

	t22 = ((x613<=(x614^x615))<<x616);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x685 = -13;
	int8_t x686 = 34;
	uint64_t x687 = UINT64_MAX;
	uint8_t x688 = 1U;
	volatile int32_t t23 = 483983421;

	t23 = ((x685<=(x686^x687))<<x688);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x757 = UINT16_MAX;
	uint64_t x758 = UINT64_MAX;
	static uint8_t x759 = UINT8_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x757<=(x758^x759))<<x760);

	if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x793 = 2925264;
	volatile uint8_t x794 = 1U;
	volatile uint8_t x796 = 0U;
	volatile int32_t t25 = 988819;

	t25 = ((x793<=(x794^x795))<<x796);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x850 = UINT16_MAX;
	static volatile uint64_t x851 = 3446601970251586337LLU;
	volatile int8_t x852 = 26;

	t26 = ((x849<=(x850^x851))<<x852);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x865 = INT16_MIN;
	uint64_t x866 = 5535008659376LLU;
	int16_t x868 = 0;
	volatile int32_t t27 = -597;

	t27 = ((x865<=(x866^x867))<<x868);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x885 = INT64_MIN;
	uint8_t x886 = UINT8_MAX;
	static int8_t x888 = 1;
	static volatile int32_t t28 = 89462840;

	t28 = ((x885<=(x886^x887))<<x888);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x898 = INT32_MAX;
	int32_t x899 = 2369;
	volatile uint16_t x900 = 3U;

	t29 = ((x897<=(x898^x899))<<x900);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x901 = INT16_MIN;
	volatile uint16_t x902 = 34U;
	volatile int64_t x903 = INT64_MAX;
	static int8_t x904 = 1;
	int32_t t30 = -23929;

	t30 = ((x901<=(x902^x903))<<x904);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x909 = INT16_MIN;
	volatile int64_t x910 = INT64_MAX;
	volatile uint32_t x911 = UINT32_MAX;
	static volatile int32_t t31 = 369112746;

	t31 = ((x909<=(x910^x911))<<x912);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x913 = 8045LLU;
	uint32_t x914 = 2856U;
	int32_t x915 = INT32_MIN;
	int32_t x916 = 1;
	int32_t t32 = 502230955;

	t32 = ((x913<=(x914^x915))<<x916);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x925 = INT32_MAX;
	uint32_t x926 = 347U;
	int64_t x927 = 86290LL;
	uint8_t x928 = 2U;
	static int32_t t33 = 327;

	t33 = ((x925<=(x926^x927))<<x928);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x929 = 167133143625LLU;
	int32_t x930 = 7;
	uint16_t x931 = 7145U;
	static uint8_t x932 = 1U;

	t34 = ((x929<=(x930^x931))<<x932);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x941 = INT32_MAX;
	int32_t x942 = -1;
	int8_t x943 = -4;
	uint16_t x944 = 2U;
	volatile int32_t t35 = 8;

	t35 = ((x941<=(x942^x943))<<x944);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x949 = -407;
	uint8_t x951 = 4U;
	static volatile int8_t x952 = 2;

	t36 = ((x949<=(x950^x951))<<x952);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1042 = UINT64_MAX;
	static int8_t x1043 = INT8_MIN;
	uint16_t x1044 = 7U;

	t37 = ((x1041<=(x1042^x1043))<<x1044);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1057 = -3278;
	int16_t x1058 = INT16_MIN;
	volatile uint8_t x1060 = 6U;

	t38 = ((x1057<=(x1058^x1059))<<x1060);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1145 = UINT64_MAX;
	uint16_t x1146 = 29U;
	int16_t x1147 = INT16_MAX;

	t39 = ((x1145<=(x1146^x1147))<<x1148);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1201 = INT16_MAX;
	int64_t x1202 = -290LL;
	volatile int32_t x1203 = 169;
	static int16_t x1204 = 1;
	volatile int32_t t40 = 103;

	t40 = ((x1201<=(x1202^x1203))<<x1204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1217 = INT32_MIN;
	static volatile int64_t x1218 = INT64_MIN;
	static uint16_t x1219 = UINT16_MAX;
	int8_t x1220 = 7;
	int32_t t41 = -51267;

	t41 = ((x1217<=(x1218^x1219))<<x1220);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1263 = 108U;
	uint8_t x1264 = 1U;
	volatile int32_t t42 = -1;

	t42 = ((x1261<=(x1262^x1263))<<x1264);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1305 = 1;
	uint8_t x1306 = 6U;
	volatile int32_t t43 = -12;

	t43 = ((x1305<=(x1306^x1307))<<x1308);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x1414 = 65;
	uint32_t x1415 = UINT32_MAX;
	static uint16_t x1416 = 0U;
	int32_t t44 = 639376;

	t44 = ((x1413<=(x1414^x1415))<<x1416);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1453 = INT64_MIN;
	static int32_t x1454 = INT32_MAX;
	static int32_t t45 = 417716;

	t45 = ((x1453<=(x1454^x1455))<<x1456);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1465 = 1712;
	int16_t x1466 = INT16_MIN;
	int32_t x1467 = -1120001;
	int8_t x1468 = 1;

	t46 = ((x1465<=(x1466^x1467))<<x1468);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1474 = INT32_MIN;
	int8_t x1475 = INT8_MAX;
	volatile int32_t t47 = 7;

	t47 = ((x1473<=(x1474^x1475))<<x1476);

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1545 = 483;
	uint32_t x1546 = 126928U;
	uint8_t x1547 = 6U;
	int8_t x1548 = 0;
	int32_t t48 = 8109;

	t48 = ((x1545<=(x1546^x1547))<<x1548);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1550 = 116U;
	int32_t x1551 = 130445597;
	uint32_t x1552 = 14U;

	t49 = ((x1549<=(x1550^x1551))<<x1552);

	if (t49 != 16384) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1566 = 1;
	int64_t x1567 = -1LL;
	uint8_t x1568 = 11U;
	volatile int32_t t50 = -2959;

	t50 = ((x1565<=(x1566^x1567))<<x1568);

	if (t50 != 2048) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1601 = -1;
	int64_t x1602 = 1000491607279080237LL;
	static uint16_t x1604 = 0U;
	volatile int32_t t51 = 6;

	t51 = ((x1601<=(x1602^x1603))<<x1604);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1690 = 4U;
	uint32_t x1692 = 13U;
	static int32_t t52 = 2063613;

	t52 = ((x1689<=(x1690^x1691))<<x1692);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1732 = 25U;
	volatile int32_t t53 = -1929393;

	t53 = ((x1729<=(x1730^x1731))<<x1732);

	if (t53 != 33554432) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1733 = INT64_MIN;
	int16_t x1735 = -1;
	uint8_t x1736 = 0U;

	t54 = ((x1733<=(x1734^x1735))<<x1736);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1761 = 29;
	uint32_t x1762 = 15623U;
	uint32_t x1763 = 43631806U;
	int8_t x1764 = 7;
	int32_t t55 = -740;

	t55 = ((x1761<=(x1762^x1763))<<x1764);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1880 = 28U;
	volatile int32_t t56 = -884829;

	t56 = ((x1877<=(x1878^x1879))<<x1880);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1894 = -1;
	int8_t x1896 = 4;
	volatile int32_t t57 = -460620207;

	t57 = ((x1893<=(x1894^x1895))<<x1896);

	if (t57 != 16) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1941 = INT8_MAX;
	uint32_t x1942 = UINT32_MAX;
	int8_t x1943 = INT8_MAX;
	int32_t t58 = 727718950;

	t58 = ((x1941<=(x1942^x1943))<<x1944);

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1953 = 26U;
	uint8_t x1954 = UINT8_MAX;
	int32_t x1955 = 9;
	uint16_t x1956 = 1U;
	volatile int32_t t59 = -873;

	t59 = ((x1953<=(x1954^x1955))<<x1956);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1957 = INT64_MIN;
	int16_t x1958 = INT16_MAX;
	int8_t x1959 = INT8_MAX;
	static volatile int8_t x1960 = 1;
	int32_t t60 = -12469199;

	t60 = ((x1957<=(x1958^x1959))<<x1960);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x1981 = 0;
	uint8_t x1984 = 8U;
	volatile int32_t t61 = 1;

	t61 = ((x1981<=(x1982^x1983))<<x1984);

	if (t61 != 256) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2121 = 710464096LLU;
	int8_t x2123 = INT8_MAX;
	int8_t x2124 = 29;
	volatile int32_t t62 = -55541376;

	t62 = ((x2121<=(x2122^x2123))<<x2124);

	if (t62 != 536870912) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2273 = 52;
	int64_t x2274 = -1LL;
	volatile uint16_t x2275 = 3336U;
	volatile int8_t x2276 = 0;

	t63 = ((x2273<=(x2274^x2275))<<x2276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2301 = 219188317LLU;
	int64_t x2302 = INT64_MIN;
	int32_t x2304 = 0;
	volatile int32_t t64 = -169872;

	t64 = ((x2301<=(x2302^x2303))<<x2304);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2313 = 4U;
	int16_t x2314 = -1;
	int32_t t65 = 54;

	t65 = ((x2313<=(x2314^x2315))<<x2316);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2481 = 156667916012641164LLU;
	volatile int16_t x2482 = 130;
	int32_t x2483 = 8620757;
	int64_t x2484 = 6LL;
	int32_t t66 = -56119972;

	t66 = ((x2481<=(x2482^x2483))<<x2484);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2525 = -1LL;
	int64_t x2526 = -30LL;
	int8_t x2528 = 12;
	volatile int32_t t67 = 471;

	t67 = ((x2525<=(x2526^x2527))<<x2528);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2549 = INT64_MIN;
	uint32_t x2550 = UINT32_MAX;
	int64_t x2551 = INT64_MIN;
	int8_t x2552 = 7;
	volatile int32_t t68 = -62315683;

	t68 = ((x2549<=(x2550^x2551))<<x2552);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2554 = INT8_MIN;
	uint64_t x2555 = UINT64_MAX;
	int16_t x2556 = 1;
	volatile int32_t t69 = 119442;

	t69 = ((x2553<=(x2554^x2555))<<x2556);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2565 = INT64_MAX;
	uint8_t x2568 = 4U;
	volatile int32_t t70 = 499;

	t70 = ((x2565<=(x2566^x2567))<<x2568);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2601 = -516354236171LL;
	static int16_t x2602 = -6675;
	uint64_t x2603 = UINT64_MAX;
	volatile uint8_t x2604 = 2U;
	int32_t t71 = 33181;

	t71 = ((x2601<=(x2602^x2603))<<x2604);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2645 = INT16_MIN;
	int32_t x2646 = INT32_MAX;
	uint64_t x2647 = 13LLU;
	volatile uint8_t x2648 = 11U;
	static int32_t t72 = -518944;

	t72 = ((x2645<=(x2646^x2647))<<x2648);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2674 = INT16_MAX;
	int64_t x2675 = -1LL;
	uint32_t x2676 = 0U;

	t73 = ((x2673<=(x2674^x2675))<<x2676);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2741 = -1;
	int64_t x2743 = 19463011LL;
	static volatile uint16_t x2744 = 27U;
	int32_t t74 = 498332752;

	t74 = ((x2741<=(x2742^x2743))<<x2744);

	if (t74 != 134217728) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2753 = INT64_MAX;
	static uint32_t x2754 = 613535856U;
	int64_t x2755 = INT64_MAX;
	int16_t x2756 = 5;
	volatile int32_t t75 = -2019;

	t75 = ((x2753<=(x2754^x2755))<<x2756);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x2757 = 210;
	int8_t x2759 = -1;
	static int16_t x2760 = 3;
	volatile int32_t t76 = -1;

	t76 = ((x2757<=(x2758^x2759))<<x2760);

	if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2823 = INT64_MAX;
	volatile int8_t x2824 = 1;
	volatile int32_t t77 = -21221;

	t77 = ((x2821<=(x2822^x2823))<<x2824);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2826 = -135;
	int32_t x2828 = 0;
	volatile int32_t t78 = -2508619;

	t78 = ((x2825<=(x2826^x2827))<<x2828);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x2850 = UINT64_MAX;
	int64_t x2851 = INT64_MAX;
	volatile uint8_t x2852 = 1U;
	int32_t t79 = 103472478;

	t79 = ((x2849<=(x2850^x2851))<<x2852);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2862 = -1LL;
	static int8_t x2864 = 1;
	static int32_t t80 = 844473491;

	t80 = ((x2861<=(x2862^x2863))<<x2864);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2889 = UINT64_MAX;
	static int16_t x2890 = INT16_MIN;
	int32_t x2891 = 320537160;
	volatile int32_t t81 = 48866233;

	t81 = ((x2889<=(x2890^x2891))<<x2892);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2993 = INT64_MAX;
	volatile uint8_t x2994 = UINT8_MAX;
	static int16_t x2995 = -625;
	volatile uint64_t x2996 = 0LLU;
	volatile int32_t t82 = 1541;

	t82 = ((x2993<=(x2994^x2995))<<x2996);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2997 = INT16_MAX;
	int16_t x2999 = -1;
	uint8_t x3000 = 2U;
	volatile int32_t t83 = 9;

	t83 = ((x2997<=(x2998^x2999))<<x3000);

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3025 = -30;
	int64_t x3026 = 25284506185LL;
	static int64_t x3028 = 1LL;
	int32_t t84 = -12063836;

	t84 = ((x3025<=(x3026^x3027))<<x3028);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3029 = -4;
	uint16_t x3031 = 26521U;
	uint32_t x3032 = 3U;
	volatile int32_t t85 = 6;

	t85 = ((x3029<=(x3030^x3031))<<x3032);

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3033 = UINT64_MAX;
	int64_t x3035 = -1LL;
	int8_t x3036 = 0;

	t86 = ((x3033<=(x3034^x3035))<<x3036);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3037 = UINT64_MAX;
	uint16_t x3038 = 38U;
	static int16_t x3039 = -1;
	volatile uint8_t x3040 = 4U;
	int32_t t87 = 409959;

	t87 = ((x3037<=(x3038^x3039))<<x3040);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x3117 = INT32_MIN;
	int32_t x3118 = INT32_MAX;
	int64_t x3119 = INT64_MIN;
	volatile uint8_t x3120 = 2U;
	int32_t t88 = -1623390;

	t88 = ((x3117<=(x3118^x3119))<<x3120);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3173 = INT32_MIN;
	volatile int64_t x3174 = -1LL;
	static int16_t x3175 = -1;
	uint16_t x3176 = 8U;
	volatile int32_t t89 = 969869201;

	t89 = ((x3173<=(x3174^x3175))<<x3176);

	if (t89 != 256) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x3189 = 701722632;
	uint8_t x3190 = UINT8_MAX;
	int64_t x3191 = INT64_MAX;
	static uint8_t x3192 = 7U;
	static int32_t t90 = 1934230;

	t90 = ((x3189<=(x3190^x3191))<<x3192);

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3194 = 50945;
	int8_t x3195 = 14;
	static volatile int8_t x3196 = 1;
	static int32_t t91 = 60356043;

	t91 = ((x3193<=(x3194^x3195))<<x3196);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x3197 = INT16_MIN;
	int16_t x3198 = -1;
	int8_t x3199 = INT8_MIN;
	volatile uint16_t x3200 = 0U;
	volatile int32_t t92 = 47412;

	t92 = ((x3197<=(x3198^x3199))<<x3200);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3217 = -1;
	int32_t x3219 = INT32_MIN;
	volatile int64_t x3220 = 8LL;

	t93 = ((x3217<=(x3218^x3219))<<x3220);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3269 = -31;
	volatile int64_t x3270 = -84970LL;
	int32_t x3271 = INT32_MAX;
	volatile uint8_t x3272 = 7U;
	int32_t t94 = 6314;

	t94 = ((x3269<=(x3270^x3271))<<x3272);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3285 = 4LL;
	uint64_t x3287 = 1277LLU;
	int32_t t95 = 5;

	t95 = ((x3285<=(x3286^x3287))<<x3288);

	if (t95 != 1024) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3318 = INT16_MIN;
	int16_t x3319 = -1;
	volatile int16_t x3320 = 7;
	int32_t t96 = 2641;

	t96 = ((x3317<=(x3318^x3319))<<x3320);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x3373 = UINT32_MAX;
	volatile int32_t t97 = -84159411;

	t97 = ((x3373<=(x3374^x3375))<<x3376);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3377 = INT8_MIN;
	static uint16_t x3378 = UINT16_MAX;
	uint8_t x3379 = UINT8_MAX;
	volatile int32_t t98 = 7640521;

	t98 = ((x3377<=(x3378^x3379))<<x3380);

	if (t98 != 16384) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x3386 = 2819U;
	uint8_t x3388 = 21U;
	int32_t t99 = -5;

	t99 = ((x3385<=(x3386^x3387))<<x3388);

	if (t99 != 2097152) { NG(); } else { ; }
	
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

